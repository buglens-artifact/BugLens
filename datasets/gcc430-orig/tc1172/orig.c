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



static int g_19 = 0xEE87F6FBL;
static int g_65 = 0x47E29AC9L;
static int *g_91 = &g_65;
static int **g_90 = &g_91;
static unsigned g_251 = 1UL;
static long long g_314 = (-4L);
static int g_325 = (-8L);
static int *g_518 = &g_19;
static int g_615 = 0L;
static char g_891 = 0L;
static long long g_954 = 0x810506841AF4BAB1LL;



static unsigned func_1(void);
static int func_2(int p_3, unsigned p_4, int p_5, short p_6);
static unsigned long long func_11(int p_12, unsigned long long p_13, unsigned char p_14, unsigned char p_15, unsigned p_16);
static unsigned char func_22(char p_23);
static char func_24(int p_25);
static int func_26(char p_27, unsigned p_28, unsigned p_29, int p_30);
static unsigned short func_34(char p_35);
static char func_36(int p_37);
static int func_40(unsigned p_41);
static unsigned func_42(int p_43, unsigned char p_44, char p_45, long long p_46);
static unsigned func_1(void)
{
    unsigned short l_31 = 0x8652L;
    unsigned l_821 = 0UL;
    int *l_830 = &g_65;
    int *l_831 = &g_615;
    int **l_853 = &g_518;
    unsigned l_858 = 0x84256A8BL;
    unsigned short l_861 = 0xA2B4L;
    int ***l_883 = &l_853;
    (*l_830) = func_2((((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((func_11(((safe_lshift_func_int8_t_s_s(g_19, (g_19 < (safe_rshift_func_uint8_t_u_s(func_22(func_24(func_26(g_19, l_31, (safe_rshift_func_uint16_t_u_u(func_34(func_36((safe_lshift_func_int16_t_s_u(g_19, 15)))), 15)), (0x31A7FE26L || (safe_lshift_func_int16_t_s_s((-4L), g_19)))))), 7))))) & 0xF3D0L), g_19, l_31, l_821, g_251) <= 0x19EB9B6955554352LL), g_251)), 7)) == l_31) || g_65), g_251, g_251, g_19);
    if (g_19)
        goto lbl_832;
lbl_832:
    (*g_90) = l_831;
    if ((*l_831))
    {
        int ***l_842 = &g_90;
        unsigned long long l_845 = 0xB0F76030F594564CLL;
        int *l_846 = &g_325;
        unsigned long long l_909 = 0xB59E3F7042B83404LL;
        (*l_831) = (safe_add_func_uint64_t_u_u(((safe_unary_minus_func_int64_t_s((((safe_mul_func_uint16_t_u_u((3L <= (4294967295UL & ((+(((g_314 != (safe_mul_func_uint16_t_u_u((*l_830), (safe_lshift_func_int16_t_s_u((l_842 == (void*)0), g_325))))) < (safe_rshift_func_int8_t_s_s((***l_842), 2))) ^ g_65)) == l_845))), 1L)) | (***l_842)) == 1L))) != g_251), 5L));
        l_846 = (*g_90);
        if ((l_830 == (void*)0))
        {
            int **l_866 = &g_518;
            (**l_842) = (**l_842);
            for (g_314 = 0; (g_314 > (-18)); g_314--)
            {
                int l_856 = 0x6B3E6405L;
                long long l_857 = 0x0630541581588D32LL;
                (*l_842) = &g_518;
                (*l_830) = (safe_sub_func_uint64_t_u_u(g_65, ((((safe_div_func_int8_t_s_s(func_11(((((***l_842) > (((l_853 == (void*)0) || 0L) >= ((0xE6AAAF4C7D419050LL <= g_65) & (*l_846)))) & (**g_90)) < 2L), (*l_846), l_857, g_314, g_251), 252UL)) | l_858) < g_314) > l_857)));
                if (((-5L) < (safe_sub_func_uint32_t_u_u(g_615, func_40(l_861)))))
                {
                    for (g_615 = 0; (g_615 > (-17)); g_615 = safe_sub_func_uint8_t_u_u(g_615, 8))
                    {
                        return g_251;
                    }
                    (*l_853) = (*g_90);
                    (*g_518) = (g_314 == (((g_615 != g_251) >= (&g_90 == (void*)0)) & (l_866 == &g_91)));
                }
                else
                {
                    long long l_867 = 5L;
                    l_867 = 0L;
                    if ((((safe_div_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(l_857, (safe_mod_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(func_42(l_857, (g_65 && (**l_866)), (**l_866), g_19), (l_857 <= ((g_19 & g_615) < g_615)))) || 0xB79DL) < l_867), g_615)))), 1UL)) ^ (*g_518)) < l_856))
                    {
                        (*l_831) = 0xD202D8DBL;
                        (*l_866) = (*g_90);
                        if ((**g_90))
                            continue;
                        (*l_831) = 8L;
                    }
                    else
                    {
                        return g_65;
                    }
                    return g_65;
                }
                (**l_842) = (*g_90);
            }
            (**l_842) = (void*)0;
            return (*l_830);
        }
        else
        {
            unsigned l_878 = 4294967291UL;
            int ***l_888 = &g_90;
            if ((safe_mul_func_uint8_t_u_u(l_878, func_42((*l_830), g_314, g_65, g_615))))
            {
                unsigned long long l_881 = 0xE6A3990DB7468509LL;
                int **l_892 = (void*)0;
                (*l_842) = &g_518;
                for (g_615 = 28; (g_615 > (-30)); --g_615)
                {
                    char l_882 = 0x79L;
                    (*l_830) = (*g_518);
                    if (l_882)
                        break;
                    if (l_881)
                        break;
                    (*l_830) = (l_883 != &g_90);
                }
                (*l_830) = (safe_lshift_func_uint8_t_u_u((g_314 <= g_325), (~g_615)));
                for (l_821 = 17; (l_821 <= 17); l_821++)
                {
                    unsigned short l_895 = 0x2C5FL;
                    short l_910 = 0x812DL;
                }
            }
            else
            {
                unsigned long long l_913 = 18446744073709551614UL;
            }
        }
    }
    else
    {
        char l_917 = 0xE8L;
        int *l_948 = &g_19;
        if ((((void*)0 != &g_90) || ((void*)0 != &l_853)))
        {
            (**g_90) = (0xFAL ^ l_917);
            return g_325;
        }
        else
        {
            unsigned l_926 = 0UL;
            int ***l_936 = &g_90;
            int *l_947 = &g_65;
            (**l_853) = (safe_mod_func_uint16_t_u_u((g_19 || l_926), g_615));
            (**g_90) = (0x7EL != ((safe_unary_minus_func_int32_t_s((-2L))) < ((safe_add_func_int32_t_s_s((((safe_add_func_uint8_t_u_u(func_40((safe_lshift_func_uint16_t_u_u(g_251, 9))), ((l_936 != (void*)0) ^ (safe_sub_func_int8_t_s_s(l_917, (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((+(***l_936)) & (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(9UL, 0x051CF38FL)), 0xC3L))), g_251)), g_251))))))) <= 0x7579L) | l_917), 0xE90A8528L)) != (***l_883))));
            g_954 = func_2((*g_518), (l_947 == l_948), (~(safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(g_251, (*l_947))), (*l_948)))), ((4L & (((safe_unary_minus_func_int16_t_s((-1L))) != g_891) != g_325)) > (*l_947)));
        }
    }
    return (*l_830);
}







static int func_2(int p_3, unsigned p_4, int p_5, short p_6)
{
    int *l_827 = &g_615;
    for (g_251 = 0; (g_251 != 57); g_251 = safe_add_func_uint16_t_u_u(g_251, 7))
    {
        int *l_826 = &g_615;
        l_827 = l_826;
    }
    p_5 = (4294967295UL < (safe_sub_func_int16_t_s_s(((7L && (&l_827 != &l_827)) != ((-1L) ^ 0L)), p_4)));
    return p_3;
}







static unsigned long long func_11(int p_12, unsigned long long p_13, unsigned char p_14, unsigned char p_15, unsigned p_16)
{
    int **l_822 = &g_518;
    int ***l_823 = &g_90;
    (*l_823) = l_822;
    return g_65;
}







static unsigned char func_22(char p_23)
{
    int *l_677 = (void*)0;
    int **l_678 = &g_91;
    int l_689 = 0x41930F35L;
    char l_706 = 0x97L;
    unsigned char l_707 = 0x88L;
    int ***l_716 = (void*)0;
    char l_820 = 3L;
    (*l_678) = l_677;
    if ((safe_sub_func_int16_t_s_s(((g_325 <= p_23) == g_65), 0x5D6CL)))
    {
lbl_699:
        (*l_678) = (*l_678);
    }
    else
    {
        int *l_690 = (void*)0;
        (*l_678) = l_690;
        for (g_314 = 0; (g_314 <= 12); g_314++)
        {
            (*l_678) = l_690;
        }
        for (g_615 = 0; (g_615 < 25); ++g_615)
        {
            int *l_700 = &g_325;
            if ((safe_mul_func_uint8_t_u_u(g_65, (safe_mod_func_int32_t_s_s(p_23, 0x8E5C7D3FL)))))
            {
                if (p_23)
                    goto lbl_699;
                g_518 = l_690;
                (*l_678) = l_700;
            }
            else
            {
                int *l_705 = &g_615;
                if (p_23)
                {
                    int *l_702 = &g_325;
                    if (g_615)
                    {
                        int *l_701 = &g_19;
                        (*l_678) = l_701;
                        (*l_678) = l_702;
                        (*l_678) = l_701;
                    }
                    else
                    {
                        (*l_700) = (safe_rshift_func_uint8_t_u_u((*l_700), 4));
                        l_700 = l_705;
                        if ((*l_700))
                            break;
                    }
                }
                else
                {
                    if (p_23)
                        break;
                }
            }
        }
    }
    l_706 = p_23;
    if ((!l_707))
    {
        return p_23;
    }
    else
    {
        long long l_712 = 0x548CFE61A89A332ELL;
        int ***l_715 = &g_90;
        long long l_738 = 2L;
        int l_781 = 1L;
        unsigned l_793 = 0xCD5B145AL;
lbl_720:
        if (((safe_lshift_func_uint8_t_u_u(g_65, ((-1L) < (safe_mod_func_uint16_t_u_u(l_712, (safe_lshift_func_int16_t_s_u((l_715 != l_716), 9))))))) | g_314))
        {
            int *l_717 = &g_19;
            int *l_718 = (void*)0;
            int *l_719 = &g_65;
            (*l_678) = (void*)0;
            (*l_678) = l_717;
            (*l_719) = (+p_23);
            (*l_719) = (p_23 <= g_615);
        }
        else
        {
            if (g_314)
                goto lbl_699;
            if (l_707)
                goto lbl_720;
            return p_23;
        }
        for (g_314 = (-18); (g_314 != (-16)); g_314++)
        {
            int *l_725 = &g_325;
            int l_763 = 2L;
            char l_764 = 8L;
            int *l_773 = &g_19;
            int ***l_776 = &g_90;
            unsigned l_780 = 4294967287UL;
            for (g_65 = 0; (g_65 < 0); g_65 = safe_add_func_int16_t_s_s(g_65, 1))
            {
                int *l_731 = &l_689;
                if (p_23)
                {
                    int *l_728 = &g_65;
                    (*l_678) = l_725;
                    for (g_615 = 0; (g_615 != (-30)); g_615 = safe_sub_func_uint64_t_u_u(g_615, 1))
                    {
                        (*l_678) = l_728;
                        (*l_678) = l_725;
                        l_725 = &g_65;
                    }
                }
                else
                {
                    (*l_678) = &g_19;
                    for (l_689 = (-19); (l_689 > (-3)); l_689 = safe_add_func_uint32_t_u_u(l_689, 3))
                    {
                        (*l_678) = l_731;
                    }
                }
                (*l_678) = (void*)0;
                (*l_678) = (*l_678);
            }
            (*l_725) = (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((void*)0 != &g_325), g_19)) > (!(l_715 != &g_90))), (((((-1L) == (safe_sub_func_int16_t_s_s(0x2061L, (!(&g_91 == &l_725))))) || p_23) && (*l_725)) != l_738)));
        }
        for (l_712 = 0; (l_712 > (-16)); --l_712)
        {
            if (p_23)
                break;
        }
        if ((&g_19 != (void*)0))
        {
            int *l_808 = &g_19;
            int l_818 = 7L;
            (*l_678) = (*l_678);
            if ((p_23 || (safe_div_func_uint16_t_u_u(p_23, 0x2467L))))
            {
                int *l_811 = (void*)0;
                (*l_678) = l_808;
                g_615 = ((void*)0 != &g_615);
                l_818 = (safe_div_func_int32_t_s_s((((*l_808) != g_615) | (((-1L) > g_314) != p_23)), (*g_91)));
            }
            else
            {
                (*l_678) = &l_818;
            }
        }
        else
        {
            int *l_819 = &l_781;
            (*l_819) = 0xE9CB8CF2L;
        }
    }
    return l_820;
}







static char func_24(int p_25)
{
    int **l_579 = &g_518;
    int *l_618 = (void*)0;
    int *l_634 = (void*)0;
    unsigned short l_653 = 5UL;
    if ((((0UL == g_314) > (**g_90)) || (*g_518)))
    {
        int **l_578 = &g_518;
        unsigned short l_584 = 0UL;
        long long l_585 = (-9L);
        (*g_91) = (safe_add_func_int32_t_s_s(((**g_90) <= (safe_mod_func_uint64_t_u_u(((((((l_578 != l_579) | p_25) <= 1UL) <= ((safe_lshift_func_uint16_t_u_u((p_25 >= (func_42(((-1L) <= (func_42(p_25, (&l_578 == (void*)0), p_25, g_251) < 0x2302944E524CA44BLL)), g_325, (**l_579), l_584) != l_585)), p_25)) < g_19)) <= p_25) != p_25), g_325))), 0xE489344FL));
        for (l_585 = 10; (l_585 >= 26); l_585 = safe_add_func_int8_t_s_s(l_585, 1))
        {
            int **l_588 = &g_91;
            int ***l_589 = &g_90;
            (*l_589) = l_588;
        }
        if ((safe_unary_minus_func_uint64_t_u(g_251)))
        {
            long long l_594 = (-1L);
            int *l_595 = (void*)0;
            if ((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_uint64_t_u((**l_578))) && l_594), ((*l_579) != (void*)0))))
            {
                int *l_596 = &g_19;
                (*g_90) = l_595;
                (*l_578) = (*l_579);
                (*l_579) = l_596;
            }
            else
            {
                int *l_601 = &g_65;
                for (l_594 = 0; (l_594 == (-24)); l_594--)
                {
                    unsigned long long l_611 = 18446744073709551615UL;
                    for (g_325 = 0; (g_325 <= (-6)); g_325--)
                    {
                        return g_19;
                    }
                    (*g_90) = (*g_90);
                }
            }
            return g_314;
        }
        else
        {
            (*l_579) = (void*)0;
        }
    }
    else
    {
        return g_251;
    }
    (*g_90) = (*g_90);
    if ((safe_add_func_int32_t_s_s(p_25, ((*g_90) != l_618))))
    {
        int *l_619 = &g_615;
        (*g_90) = l_619;
        return g_325;
    }
    else
    {
        int l_626 = 0xECCB1FB2L;
        int **l_651 = &g_518;
        if ((**g_90))
        {
            unsigned short l_629 = 0UL;
            int ***l_640 = &g_90;
            if ((safe_sub_func_int8_t_s_s(((-1L) & ((p_25 | 1L) != ((safe_add_func_uint8_t_u_u(l_626, (safe_sub_func_uint64_t_u_u(g_325, g_615)))) || func_42(l_629, g_314, func_40((safe_mul_func_uint16_t_u_u(func_36((safe_lshift_func_uint16_t_u_s(l_629, p_25))), g_314))), p_25)))), g_325)))
            {
                (*g_90) = l_634;
            }
            else
            {
                int *l_635 = &l_626;
                (*l_579) = &l_626;
                l_635 = l_635;
                for (p_25 = (-20); (p_25 <= (-28)); p_25 = safe_sub_func_uint16_t_u_u(p_25, 7))
                {
                    l_626 = 0x9DE910B2L;
                }
                (*g_90) = l_635;
            }
            g_65 = ((safe_mul_func_int16_t_s_s(p_25, ((-6L) ^ (&g_90 == l_640)))) != 0x2B44F4BF1850E32ALL);
            (*l_579) = &l_626;
        }
        else
        {
            int *l_643 = &g_19;
            unsigned l_644 = 0x9FDC281FL;
            int *l_676 = &l_626;
            for (g_314 = 0; (g_314 == 9); ++g_314)
            {
                (*g_90) = l_643;
                return g_325;
            }
            if (((g_251 <= ((((7L | (((7UL < 0x90C82AE2L) < l_644) & ((safe_lshift_func_uint8_t_u_u(((0x52450DDE7017572ELL > ((func_42(p_25, g_251, func_36((*l_643)), g_251) || p_25) <= 0x67DE4439813C1FE6LL)) & (*l_643)), 1)) || g_65))) <= l_626) && p_25) || p_25)) || p_25))
            {
                int ***l_647 = &g_90;
                int *l_648 = &l_626;
                (*l_647) = &l_643;
                (*l_648) = (0xECL != 9UL);
                l_643 = (*g_90);
            }
            else
            {
                int *l_652 = &g_325;
                unsigned char l_654 = 0x2FL;
                long long l_675 = 0x3CAC38BA2AB47A5CLL;
                (*l_652) = ((safe_sub_func_uint8_t_u_u((&g_518 == l_651), p_25)) <= g_19);
                (*l_579) = (*g_90);
                l_654 = l_653;
                if ((safe_lshift_func_uint8_t_u_u((((((g_314 >= p_25) & ((0xE2B439C4L ^ 0x36B42CDAL) & (p_25 == g_325))) && func_40(((safe_sub_func_uint8_t_u_u((g_325 & ((*l_651) != (void*)0)), g_615)) >= 4294967289UL))) > g_19) >= (*l_643)), p_25)))
                {
                    return g_251;
                }
                else
                {
                    if ((safe_sub_func_int16_t_s_s(func_40(p_25), (2UL & ((p_25 && (safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(1UL, 0x7EC48A711987F2E4LL)), ((*g_90) == (void*)0)))) != (g_19 < (-5L)))))))
                    {
                        int ***l_665 = &l_651;
                        (*l_665) = &l_643;
                        (*l_652) = (*l_652);
                        (*g_90) = (*g_90);
                    }
                    else
                    {
                        unsigned l_674 = 18446744073709551610UL;
                        l_675 = (((void*)0 == (*g_90)) && (p_25 && func_26(p_25, (*l_652), (safe_add_func_int64_t_s_s((safe_mod_func_int64_t_s_s((-1L), (safe_rshift_func_int8_t_s_u(p_25, (safe_mul_func_uint16_t_u_u((*l_652), (((l_674 < 0xEFL) != 0x4F5FCC2FL) && g_615))))))), p_25)), g_615)));
                        (*g_90) = l_643;
                    }
                }
            }
            (*l_676) = p_25;
        }
        l_579 = &g_91;
        (*l_579) = &g_325;
    }
    return p_25;
}







static int func_26(char p_27, unsigned p_28, unsigned p_29, int p_30)
{
    int *l_573 = &g_65;
    (*g_90) = l_573;
    return (*l_573);
}







static unsigned short func_34(char p_35)
{
    unsigned char l_281 = 248UL;
    short l_337 = 0x8B0BL;
    int ***l_362 = &g_90;
    int l_496 = (-1L);
    char l_536 = (-3L);
    if (((6UL | p_35) | 1L))
    {
        int *l_282 = &g_65;
        int ***l_283 = &g_90;
        (*l_282) = ((9UL > p_35) && g_251);
lbl_323:
        (*l_283) = &g_91;
        for (g_65 = 0; (g_65 >= 2); g_65++)
        {
            unsigned l_289 = 0UL;
            long long l_309 = (-5L);
            char l_321 = (-1L);
            unsigned long long l_322 = 0UL;
            int *l_324 = &g_325;
            if (p_35)
                break;
            for (p_35 = (-25); (p_35 <= 2); p_35 = safe_add_func_int32_t_s_s(p_35, 1))
            {
                unsigned char l_298 = 0x7DL;
                int ***l_307 = (void*)0;
                if (((safe_unary_minus_func_uint8_t_u(l_289)) != ((safe_rshift_func_int16_t_s_s(g_65, p_35)) && ((safe_mul_func_uint16_t_u_u((0x899C4599L < ((p_35 | (safe_sub_func_uint16_t_u_u(func_42(l_298, p_35, g_65, (safe_rshift_func_uint8_t_u_s(((safe_div_func_int8_t_s_s((((~(safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((((l_307 == (void*)0) >= g_65) && g_65), 1)), p_35))) && 0x83L) || g_65), p_35)) > p_35), g_65))), 0xA926L))) <= 1L)), p_35)) > p_35))))
                {
                    return l_289;
                }
                else
                {
                    int **l_308 = &g_91;
                    int l_310 = 1L;
                    l_309 = ((void*)0 == l_308);
                    if (l_310)
                        continue;
                    (*l_308) = (*g_90);
                }
                if ((p_35 >= p_35))
                {
                    short l_313 = 0L;
                    l_321 = (((safe_div_func_uint8_t_u_u(func_42(p_35, g_65, (g_251 ^ l_313), g_251), g_314)) <= (safe_mul_func_int8_t_s_s((func_42((safe_mod_func_int8_t_s_s((~((safe_lshift_func_int16_t_s_s(g_19, 10)) < l_281)), g_314)), p_35, p_35, g_314) < 0xE81AA568L), g_65))) != p_35);
                    return g_65;
                }
                else
                {
                    (*g_90) = (*g_90);
                    if (l_322)
                        break;
                }
                if (l_298)
                    goto lbl_323;
            }
            (*l_324) = p_35;
        }
    }
    else
    {
        int *l_331 = &g_325;
        int ***l_363 = &g_90;
        int l_404 = 4L;
        for (g_314 = (-8); (g_314 < 23); g_314++)
        {
            int *l_328 = &g_325;
            int ***l_336 = (void*)0;
            char l_385 = 0x76L;
            if (p_35)
                break;
            (*g_90) = l_328;
            (**g_90) = (safe_lshift_func_int8_t_s_s((((void*)0 == l_331) <= (safe_mod_func_int32_t_s_s(0x86063F79L, (**g_90)))), 5));
            if ((safe_mul_func_uint8_t_u_u(((void*)0 != l_336), p_35)))
            {
                int *l_342 = &g_65;
                if (l_337)
                {
                    int *l_338 = &g_65;
                    (*g_90) = l_338;
                }
                else
                {
                    int *l_339 = &g_19;
                    (*l_328) = (1UL | 0x6B238936L);
                    if (func_42((*l_328), g_19, ((void*)0 != &g_91), g_251))
                    {
                        (*g_90) = l_339;
                        if (p_35)
                            break;
                        (*l_328) = 0x8180E360L;
                        (*g_90) = l_339;
                    }
                    else
                    {
                        (*g_90) = l_339;
                        (*g_90) = l_331;
                        (*l_331) = 0L;
                        (*g_90) = l_331;
                    }
                    for (p_35 = 0; (p_35 < (-18)); p_35--)
                    {
                        (*g_90) = l_342;
                        (*g_91) = (**g_90);
                    }
                    return l_281;
                }
                (*l_342) = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0x0F04L, 6)), 3));
                (*g_90) = l_342;
                if ((*g_91))
                {
                    (*l_331) = (-2L);
                }
                else
                {
                    long long l_349 = (-4L);
                    (*g_91) = (0x92466D64F9AB17AELL == (safe_sub_func_uint16_t_u_u(l_349, (safe_rshift_func_int16_t_s_s(5L, 14)))));
                    if ((*l_342))
                        continue;
                    for (g_325 = (-8); (g_325 == (-17)); g_325--)
                    {
                        return g_251;
                    }
                    for (l_349 = (-28); (l_349 > 6); l_349 = safe_add_func_int32_t_s_s(l_349, 1))
                    {
                        (*g_90) = l_342;
                        (*g_90) = (*g_90);
                        (*g_90) = (*g_90);
                    }
                }
            }
            else
            {
                int *l_356 = &g_325;
                int ***l_403 = &g_90;
                int *l_415 = &g_325;
                (*g_91) = (*l_331);
                if ((**g_90))
                {
                    if ((*l_331))
                        break;
                    l_356 = (*g_90);
                    (*g_91) = (*g_91);
                }
                else
                {
                    short l_364 = (-6L);
                    (*l_331) = (safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s(p_35, ((*l_328) <= p_35))) == (***l_363)) ^ 0x1448L), g_19))));
                    if (((*l_328) <= (safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(g_325, func_42((**g_90), g_19, (((safe_lshift_func_int16_t_s_u((0x29BFL <= 7UL), 1)) != func_42((*l_331), p_35, (***l_362), g_325)) || (*l_328)), p_35))), 4))))
                    {
                        int *l_375 = &g_19;
                        unsigned long long l_384 = 18446744073709551615UL;
                        (*g_90) = l_375;
                        (*l_356) = (safe_sub_func_uint16_t_u_u((p_35 == (safe_mod_func_int32_t_s_s((((void*)0 != l_362) < (safe_add_func_int64_t_s_s(((~(0x4506L >= (safe_rshift_func_uint8_t_u_u(0xC1L, g_19)))) | g_251), l_384))), 0xD2A7C4BBL))), (*l_375)));
                    }
                    else
                    {
                        return l_385;
                    }
                    (*l_328) = (**g_90);
                    (**l_363) = (*g_90);
                }
                for (g_65 = 19; (g_65 > 18); g_65 = safe_sub_func_uint32_t_u_u(g_65, 2))
                {
                    unsigned l_398 = 3UL;
                    int *l_400 = &g_65;
                }
                l_415 = (**l_362);
            }
        }
        if (p_35)
        {
            for (l_281 = 0; (l_281 >= 53); l_281 = safe_add_func_int8_t_s_s(l_281, 1))
            {
                return g_19;
            }
        }
        else
        {
            int *l_418 = &g_19;
            int l_449 = (-6L);
            (**l_363) = l_418;
            (*l_331) = (safe_rshift_func_int16_t_s_u((*l_331), (***l_363)));
            for (l_337 = 12; (l_337 == (-9)); l_337 = safe_sub_func_uint64_t_u_u(l_337, 3))
            {
                (*l_331) = p_35;
                if ((*g_91))
                    break;
                if (p_35)
                    continue;
            }
            l_449 = ((((safe_mod_func_int64_t_s_s(p_35, p_35)) && ((safe_lshift_func_uint8_t_u_s(p_35, 5)) != (safe_mul_func_int8_t_s_s((((g_314 && (g_314 == (***l_362))) && ((g_325 >= ((*l_418) & (&g_90 != (void*)0))) == p_35)) & 0xC0L), g_314)))) && 255UL) && g_19);
        }
        (*l_331) = p_35;
        (**l_362) = (*g_90);
    }
    (*g_90) = (**l_362);
    for (p_35 = 0; (p_35 <= 11); p_35 = safe_add_func_int16_t_s_s(p_35, 9))
    {
        short l_452 = (-10L);
        int *l_464 = &g_65;
        (*l_464) = func_40(((l_452 && p_35) < (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s(g_19, ((((void*)0 == &g_91) | (!g_325)) != (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(p_35)), 5))))), (1UL == ((g_325 == 4L) && g_65)))), 0x4F07L))));
        return g_251;
    }
    if ((safe_div_func_int64_t_s_s(((safe_mod_func_int32_t_s_s(((((l_337 || (0L | (p_35 > (safe_rshift_func_int16_t_s_s((g_19 || (safe_rshift_func_int16_t_s_s((g_325 ^ (safe_mul_func_int16_t_s_s(func_40((((safe_div_func_int32_t_s_s(l_281, (safe_rshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s((+g_65), l_337)), 5)))) <= p_35) <= (-5L))), l_281))), 3))), 1))))) || 0x2267C3B2L) && g_251) | p_35), p_35)) < 18446744073709551615UL), p_35)))
    {
        long long l_487 = (-1L);
        int l_497 = 0xEA9D46AFL;
        int **l_501 = &g_91;
        l_497 = (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(g_314, (((safe_add_func_int16_t_s_s(((l_487 & (p_35 <= (0x291FD03CL != (+p_35)))) >= p_35), func_40((l_487 >= func_42((((safe_sub_func_int16_t_s_s((g_65 > ((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_19, g_314)), p_35)) > 0x801A0375D8F51D89LL)), p_35)) | 65532UL) | l_487), g_65, l_496, g_19))))) | p_35) < 0x20B81F5FF802E3AFLL))), l_487));
        if (p_35)
        {
            int *l_498 = &l_497;
            (*g_90) = (*g_90);
            (*l_498) = 9L;
            (*l_498) = (func_40(g_65) > func_42(p_35, ((((l_487 & g_314) == (safe_div_func_uint8_t_u_u(((p_35 > 0x78A4L) > (((void*)0 != l_501) != p_35)), 0x88L))) >= p_35) && p_35), p_35, g_325));
            for (l_337 = 0; (l_337 > (-8)); l_337 = safe_sub_func_int8_t_s_s(l_337, 2))
            {
                char l_514 = 1L;
                for (g_314 = 0; (g_314 > 4); g_314++)
                {
                    (**l_362) = (*g_90);
                }
                (*l_498) = 0xD2FFA29CL;
                l_514 = (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(g_314, (safe_lshift_func_uint16_t_u_u(4UL, g_65)))), (safe_sub_func_int8_t_s_s(p_35, (0x52DC8F80C7AB0E01LL >= func_42(p_35, g_19, p_35, g_65))))));
            }
        }
        else
        {
            unsigned l_535 = 4294967295UL;
            int l_537 = 0xB7128489L;
            int l_555 = (-9L);
lbl_540:
            (**l_362) = (**l_362);
            if ((safe_mul_func_int16_t_s_s(g_19, ((*l_501) != (*l_501)))))
            {
                int ***l_534 = &g_90;
                int *l_547 = (void*)0;
                int *l_548 = &g_325;
                if (((-1L) >= func_40(((*l_362) == &g_91))))
                {
                    int *l_517 = &l_497;
                    int ***l_533 = &g_90;
                    (*l_517) = p_35;
                    (*l_501) = g_518;
                    for (l_281 = 17; (l_281 <= 37); l_281++)
                    {
                        l_537 = (safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((p_35 | func_42((safe_add_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((0L < 0xBB3DL) | ((*g_91) <= (safe_add_func_uint32_t_u_u((p_35 && g_19), (((safe_mul_func_int16_t_s_s((g_251 & ((l_533 == l_534) ^ g_314)), p_35)) >= (***l_534)) >= p_35))))), l_535)), 0x97399931F4305205LL)), p_35, l_536, (**l_501))), 0x36E4L)), (**l_501)));
                        (**l_362) = (*g_90);
                    }
                    for (g_325 = 0; (g_325 == (-16)); g_325 = safe_sub_func_int32_t_s_s(g_325, 5))
                    {
                        if (l_535)
                            goto lbl_540;
                    }
                }
                else
                {
                    short l_543 = 3L;
                    int *l_546 = &g_19;
                    for (l_497 = 0; (l_497 > 24); ++l_497)
                    {
                        (**l_362) = (*g_90);
                        if (l_543)
                            continue;
                    }
                    for (l_537 = 0; (l_537 > 8); ++l_537)
                    {
                        if ((*g_518))
                            break;
                    }
                    (*g_90) = l_546;
                    (*l_362) = (*l_362);
                }
                (*l_548) = p_35;
                for (l_537 = 9; (l_537 >= (-22)); l_537--)
                {
                    (*l_548) = (safe_div_func_uint8_t_u_u(255UL, (safe_rshift_func_int8_t_s_u((+((**l_501) > 9L)), g_314))));
                    l_555 = (*g_518);
                    (*l_548) = (*g_91);
                    (*l_548) = (*g_518);
                }
            }
            else
            {
                long long l_560 = 0x4032C855293F3C21LL;
                if ((p_35 == (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(g_65, p_35)), (l_555 <= (g_325 < l_560))))))
                {
                    int *l_563 = &g_65;
                    (*l_563) = (safe_rshift_func_uint8_t_u_s(((*g_90) != l_563), 1));
                }
                else
                {
                    int *l_564 = &l_497;
                    (*l_564) = p_35;
                    (*l_564) = 0x16BC9C2AL;
                }
                for (l_537 = 0; (l_537 > 8); l_537 = safe_add_func_uint64_t_u_u(l_537, 7))
                {
                    return l_555;
                }
            }
            l_537 = (-1L);
        }
    }
    else
    {
        unsigned short l_569 = 0xB0B2L;
        int *l_570 = &g_65;
        (*l_570) = ((g_314 || (safe_mul_func_int16_t_s_s((l_569 < ((*g_90) == l_570)), (*l_570)))) < 0L);
    }
    return g_314;
}







static char func_36(int p_37)
{
    short l_47 = 0xCEFFL;
    int *l_82 = &g_19;
    int **l_81 = &l_82;
    short l_96 = 0x9C11L;
    long long l_223 = 1L;
    if (func_40(func_42(l_47, ((safe_mod_func_int32_t_s_s(g_19, g_19)) & g_19), (safe_div_func_int64_t_s_s((g_19 != p_37), (safe_sub_func_uint8_t_u_u(g_19, ((0x8B474307L < (safe_lshift_func_int16_t_s_u(l_47, 6))) || l_47))))), p_37)))
    {
        int *l_69 = &g_65;
        for (l_47 = 17; (l_47 >= (-10)); l_47 = safe_sub_func_uint16_t_u_u(l_47, 2))
        {
            int **l_70 = &l_69;
            (*l_70) = l_69;
        }
    }
    else
    {
        short l_71 = 6L;
        int *l_72 = &g_65;
        int **l_128 = &l_82;
        int l_157 = 9L;
        short l_265 = 3L;
        unsigned char l_275 = 0x8DL;
lbl_131:
        (*l_72) = l_71;
        if (((*l_72) & ((safe_sub_func_int32_t_s_s(func_42(l_47, ((safe_div_func_uint64_t_u_u(0x45A3231966BA0539LL, 0x14F5C6F0D602FF7ALL)) >= (safe_mod_func_int32_t_s_s((((*l_72) <= 0x8C33196ADD890AAFLL) >= ((safe_rshift_func_int8_t_s_s((l_81 != &l_72), ((safe_lshift_func_int8_t_s_s((&g_19 != (void*)0), p_37)) == 0xB039B7C3L))) > 0x58L)), g_65))), g_19, g_65), g_19)) ^ (**l_81))))
        {
            unsigned long long l_87 = 0x7AFAE861E80F9606LL;
            int **l_129 = &l_72;
            unsigned long long l_146 = 0x5DBB77E5FFF9132ELL;
            if ((l_72 == &g_65))
            {
                return p_37;
            }
            else
            {
                (*l_81) = &g_65;
            }
            (*l_72) = (0x8D679962L & (safe_div_func_uint16_t_u_u(l_87, 0xAA9BL)));
            if (((**l_81) >= ((void*)0 != l_72)))
            {
                (**g_90) = (safe_mod_func_uint16_t_u_u(((void*)0 != g_90), (safe_add_func_int8_t_s_s(((-6L) < (+p_37)), 1L))));
                (*g_90) = (*l_81);
                for (l_71 = (-8); (l_71 == 25); l_71 = safe_add_func_int8_t_s_s(l_71, 9))
                {
                    if ((*g_91))
                        break;
                }
            }
            else
            {
                (*g_90) = l_72;
                (*g_90) = (void*)0;
                (*l_72) = (l_96 > (safe_rshift_func_int8_t_s_s((-1L), 3)));
                return p_37;
            }
            if (p_37)
            {
                unsigned short l_119 = 0UL;
                if (((((*l_72) && (safe_mul_func_uint16_t_u_u(1UL, (safe_sub_func_int16_t_s_s(g_65, g_19))))) & g_65) ^ (**g_90)))
                {
                    (*l_81) = (void*)0;
                }
                else
                {
                    (*l_81) = (*l_81);
                    (**l_81) = (p_37 ^ (**g_90));
                    (**l_81) = (**g_90);
                }
                (**g_90) = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(0x24L, (l_87 == l_119))), (safe_rshift_func_uint8_t_u_u(p_37, 6)))), (safe_lshift_func_int8_t_s_u(((-1L) | (safe_div_func_int32_t_s_s(func_42((**g_90), g_19, p_37, (g_65 | 0x12672125370A27EALL)), p_37))), (*l_72))))), g_19)), 0xE0L)), 11)), 2)), 2));
            }
            else
            {
                char l_141 = (-1L);
                int **l_149 = &g_91;
                if ((((*l_82) ^ (safe_add_func_uint8_t_u_u(0x02L, (((*g_90) == (*g_90)) & (l_87 <= ((p_37 & (l_128 != l_129)) && (**l_81))))))) || g_65))
                {
                    int *l_130 = &g_65;
                    (*l_129) = (*l_81);
                    l_130 = (*g_90);
                    if (l_71)
                        goto lbl_131;
                    for (l_71 = (-7); (l_71 > 6); l_71 = safe_add_func_int64_t_s_s(l_71, 1))
                    {
                        int l_134 = 1L;
                        l_134 = (-1L);
                        (*l_129) = l_130;
                        (*g_90) = l_130;
                    }
                }
                else
                {
                    unsigned l_137 = 9UL;
                    int **l_140 = &l_72;
lbl_143:
                    (**l_81) = func_42(((safe_add_func_uint64_t_u_u(l_137, func_42((**g_90), ((((~(+func_42(l_137, (0x498CL || (safe_rshift_func_uint16_t_u_s(g_19, 4))), ((((((p_37 && 0x463DL) | (&l_72 == l_140)) > p_37) && 18446744073709551615UL) ^ (**l_140)) ^ p_37), (**l_81)))) && g_19) >= 0x5099L) == p_37), p_37, l_141))) == l_141), g_19, g_65, (**l_140));
                    if (p_37)
                    {
                        int *l_142 = &g_65;
                        (*l_128) = (*g_90);
                        l_142 = (*g_90);
                        (*l_140) = (*l_129);
                    }
                    else
                    {
                        if (l_47)
                            goto lbl_143;
                        if (g_65)
                            goto lbl_280;
                    }
                    for (l_141 = 6; (l_141 > 10); l_141 = safe_add_func_uint16_t_u_u(l_141, 7))
                    {
                        if (l_146)
                            break;
                        return p_37;
                    }
                }
                (**l_128) = (safe_add_func_int32_t_s_s(0x87E75986L, func_40(p_37)));
                (**l_128) = (l_149 == (void*)0);
            }
        }
        else
        {
            int *l_150 = &g_19;
            int l_180 = 1L;
            int l_201 = 1L;
            (*l_81) = l_150;
            if (((0x73BDL | func_40(g_65)) <= (0xD765L ^ ((g_19 ^ (safe_div_func_int32_t_s_s((g_19 || (p_37 == (&g_91 == &l_82))), p_37))) != g_19))))
            {
                int **l_178 = (void*)0;
                (*l_81) = (*g_90);
                (*g_90) = (*l_128);
                if ((func_42((+(safe_mod_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(func_42((*l_82), l_157, p_37, (**l_128)), g_65)) | ((safe_mod_func_uint16_t_u_u(g_65, p_37)) != (safe_add_func_uint64_t_u_u((p_37 != 0x79B2L), p_37)))), g_19))), p_37, g_19, g_19) == (*l_150)))
                {
                    for (p_37 = 0; (p_37 == 14); p_37++)
                    {
                        (*l_128) = (*g_90);
                    }
                    for (l_47 = (-21); (l_47 != 4); l_47++)
                    {
                        int *l_166 = &g_65;
                        (*l_128) = l_166;
                        (*g_91) = (p_37 == (func_42(((*l_166) > ((safe_div_func_int32_t_s_s(0x2289BD9EL, (safe_unary_minus_func_uint8_t_u(g_65)))) >= ((*g_90) == (*g_90)))), ((void*)0 != (*g_90)), (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(g_19, p_37)), g_65)) > g_65), (*l_82))), (**l_128)) && (*l_166)));
                    }
                }
                else
                {
                    if ((*g_91))
                    {
                        (*l_128) = (*g_90);
                    }
                    else
                    {
                        unsigned long long l_179 = 0x8FA16B15256D7E5ALL;
                        l_180 = ((func_42((**g_90), ((((p_37 && (**l_128)) != ((void*)0 != l_178)) >= func_42((*l_150), p_37, ((*l_150) || ((p_37 == g_19) && p_37)), l_179)) ^ p_37), g_19, g_65) > (**l_128)) == p_37);
                    }
                }
            }
            else
            {
                char l_194 = (-1L);
                for (p_37 = 0; (p_37 >= 26); ++p_37)
                {
                    char l_187 = 7L;
                    int l_202 = 0xF8258141L;
                    for (l_157 = 12; (l_157 > 27); l_157 = safe_add_func_uint32_t_u_u(l_157, 9))
                    {
                        l_187 = (safe_lshift_func_int8_t_s_s(p_37, 6));
                    }
                    l_202 = ((safe_mod_func_uint64_t_u_u(((((safe_add_func_uint64_t_u_u(p_37, func_42((((*l_150) & (safe_mul_func_uint8_t_u_u((g_65 || 0xF4BAL), ((func_42(p_37, l_194, (safe_add_func_int8_t_s_s(((g_65 < g_65) == ((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((*l_72), 1)), (**l_128))) > g_65)), 0xB7L)), l_201) < 0x3209L) == p_37)))) < (**l_128)), g_65, p_37, p_37))) < g_65) & 0x65AF2B12C03D8830LL) > l_194), 18446744073709551613UL)) <= g_19);
                    if ((*l_82))
                        continue;
                }
            }
        }
        if (func_40((safe_rshift_func_int8_t_s_u(0x15L, 4))))
        {
            int l_205 = 8L;
            int **l_238 = &l_82;
            if ((*g_91))
            {
                return p_37;
            }
            else
            {
                (**g_90) = l_205;
            }
            if (func_40(((((safe_mod_func_int16_t_s_s(p_37, func_40((p_37 & (safe_div_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(g_19, (safe_sub_func_uint8_t_u_u(((p_37 == (safe_sub_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_u(3L, 5)) >= ((void*)0 != (*l_128))) > ((safe_unary_minus_func_uint16_t_u(((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((&l_205 != (*g_90)), 5)) > g_19), l_205)) < 0x783F6A3DL))) & 0xA7L)), l_223))) != p_37), p_37)))) > 0x70EDL), 0xCA6D5996L)))))) != (-8L)) | g_19) | (-4L))))
            {
                unsigned l_224 = 0xDD48D0EEL;
                int *l_237 = &g_65;
                int *l_243 = (void*)0;
                l_224 = p_37;
                for (l_205 = 0; (l_205 >= (-12)); l_205--)
                {
                    (*l_128) = (*l_128);
                }
                (*g_91) = ((((safe_sub_func_uint32_t_u_u((&g_91 != &l_82), p_37)) <= p_37) || ((safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((!(~p_37)) && p_37), 2)), (safe_add_func_uint8_t_u_u((l_205 && 0xFD3FFD62L), ((l_237 == (void*)0) | g_65))))), p_37)) <= (-1L))) ^ (-1L));
                if ((((void*)0 == (*l_128)) > p_37))
                {
                    int ***l_239 = &l_128;
                    (*l_239) = l_238;
                    return g_19;
                }
                else
                {
                    int *l_242 = &g_65;
                    (*g_91) = ((*l_81) == (*g_90));
                    for (l_205 = 0; (l_205 == 21); l_205 = safe_add_func_int8_t_s_s(l_205, 1))
                    {
                        int *l_244 = &g_65;
                        (*l_238) = l_242;
                        (*l_244) = (l_243 != l_244);
                        (*l_81) = (*g_90);
                    }
                }
            }
            else
            {
                int **l_245 = &l_82;
                long long l_248 = (-5L);
                if (func_40(func_40(((((void*)0 != l_245) > g_19) & g_65))))
                {
                    if ((*g_91))
                    {
                        (*l_245) = (*l_245);
                        (*g_91) = (safe_rshift_func_int8_t_s_s(0x00L, 5));
                        if (l_96)
                            goto lbl_260;
                    }
                    else
                    {
                        l_248 = (*g_91);
lbl_260:
                        (*g_91) = func_42(p_37, g_65, (0x3DL & (safe_sub_func_int16_t_s_s(g_251, g_19))), (safe_sub_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u(func_42(p_37, g_251, func_42((g_251 & ((safe_sub_func_int16_t_s_s(p_37, p_37)) <= 0xCFL)), g_19, p_37, p_37), p_37), p_37)) >= (*l_72)), p_37)));
                        (*l_72) = (g_19 || (p_37 & ((g_251 & (safe_sub_func_uint16_t_u_u(((*g_91) <= ((*g_90) == (*l_245))), ((void*)0 == &g_91)))) == ((void*)0 == &l_72))));
                    }
                    return l_265;
                }
                else
                {
                    int l_270 = 0x075A97A0L;
                    (**g_90) = (safe_sub_func_int32_t_s_s((g_251 ^ (((g_19 || (safe_mul_func_int8_t_s_s(l_270, ((((((0xACB0L & p_37) > (-1L)) & l_270) ^ ((((18446744073709551610UL ^ (g_251 < g_251)) & g_19) == 2L) || (*l_72))) >= g_251) || p_37)))) >= 18446744073709551613UL) < l_270)), (**g_90)));
                    for (l_96 = 0; (l_96 == 17); l_96 = safe_add_func_int8_t_s_s(l_96, 8))
                    {
                        (*l_238) = (*l_128);
                        (*g_90) = (*g_90);
                        (*l_128) = (*g_90);
                    }
                }
                (*l_128) = (*l_245);
                (**g_90) = ((*g_90) != (void*)0);
            }
            (*g_91) = ((p_37 >= g_65) >= (safe_add_func_uint16_t_u_u(0x1813L, p_37)));
            (**g_90) = (&l_128 == &l_81);
        }
        else
        {
            int l_276 = 0x6E39BB3AL;
            (*g_90) = (*g_90);
            (*l_72) = p_37;
            l_276 = l_275;
        }
        (*g_90) = (*l_81);
    }
lbl_280:
    for (p_37 = (-14); (p_37 < (-19)); p_37 = safe_sub_func_uint32_t_u_u(p_37, 2))
    {
        long long l_279 = 0x445ACCD3D93C69FDLL;
        (*l_81) = (*g_90);
        if (l_279)
            continue;
        if (p_37)
            continue;
    }
    return p_37;
}







static int func_40(unsigned p_41)
{
    int l_66 = 0x322E7C65L;
    if (g_19)
    {
        int *l_60 = (void*)0;
        int **l_61 = &l_60;
        (*l_61) = l_60;
    }
    else
    {
        int *l_62 = (void*)0;
        int **l_63 = &l_62;
        int *l_64 = &g_65;
        (*l_63) = l_62;
        (*l_64) = p_41;
    }
    return l_66;
}







static unsigned func_42(int p_43, unsigned char p_44, char p_45, long long p_46)
{
    int **l_56 = (void*)0;
    int **l_57 = (void*)0;
    int *l_59 = &g_19;
    int **l_58 = &l_59;
    (*l_58) = &p_43;
    return g_19;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_891, "g_891", print_hash_value);
    transparent_crc(g_954, "g_954", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
