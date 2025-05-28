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


struct S0 {
   long long f0;
   short f1;
   char f2;
};


static unsigned g_5 = 18446744073709551613UL;
static struct S0 g_6 = {0L,0x2A83L,0x8BL};
static int g_12 = 0x82D564C7L;
static struct S0 g_75 = {0x56065D6F9C2329B6LL,-8L,-1L};
static struct S0 g_114 = {0x57343453D9EB36BDLL,0L,0x08L};
static volatile char g_119 = 0x60L;
static int *g_141 = &g_12;
static int **g_140 = &g_141;
static struct S0 *g_148 = (void*)0;
static struct S0 **g_147 = &g_148;
static short g_205 = 5L;
static struct S0 g_258 = {0L,8L,0x1BL};
static int *g_259 = (void*)0;
static char g_329 = 0x5BL;
static unsigned g_362 = 0x34E49EC8L;
static int g_479 = (-3L);
static volatile unsigned short g_515 = 1UL;



static int func_1(void);
static int func_2(unsigned short p_3, struct S0 p_4);
static int * func_13(int * p_14, unsigned long long p_15, int * p_16, int * p_17, char p_18);
static int func_20(char p_21, unsigned short p_22, short p_23, int p_24);
static long long func_29(unsigned long long p_30, unsigned p_31);
static struct S0 func_36(unsigned char p_37, int * p_38);
static int * func_40(unsigned p_41, unsigned p_42, unsigned char p_43, unsigned p_44, struct S0 p_45);
static unsigned char func_47(long long p_48, char p_49, int * p_50, int p_51);
static char func_56(unsigned short p_57);
static int * func_60(long long p_61, char p_62, unsigned p_63, struct S0 p_64);
static int func_1(void)
{
    int *l_195 = &g_12;
    struct S0 *l_256 = (void*)0;
    struct S0 l_262 = {0xDC9895631CF85E0DLL,-7L,0x7CL};
    char l_312 = 0xF4L;
    long long l_411 = 0xCACAE96CF2EFE8A0LL;
    unsigned l_432 = 0xFCC5D807L;
    unsigned long long l_552 = 0xCEF0C741AFA88015LL;
    (*l_195) = func_2(g_5, g_6);
    if ((*g_141))
    {
        short l_200 = 0x1540L;
        int ***l_214 = &g_140;
        int l_294 = (-1L);
        int *l_313 = (void*)0;
        int ***l_407 = &g_140;
        struct S0 l_408 = {7L,0xCDDDL,2L};
        int *l_423 = &l_294;
        struct S0 l_424 = {0x6AEF154D8FF2EE9BLL,-4L,6L};
        struct S0 ***l_461 = (void*)0;
        (**g_140) = (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(0x6CF4L, 5)), 0x23L));
        if (l_200)
        {
            int ***l_215 = &g_140;
            int *l_220 = (void*)0;
            struct S0 *l_250 = &g_6;
            unsigned l_286 = 5UL;
            for (g_5 = 0; (g_5 > 56); g_5 = safe_add_func_uint32_t_u_u(g_5, 7))
            {
                for (g_75.f2 = 0; (g_75.f2 >= 19); g_75.f2 = safe_add_func_uint16_t_u_u(g_75.f2, 4))
                {
                    return g_205;
                }
                for (g_114.f1 = 0; (g_114.f1 != 8); g_114.f1 = safe_add_func_int8_t_s_s(g_114.f1, 5))
                {
                    int **l_211 = &l_195;
                    for (g_75.f0 = 0; (g_75.f0 < (-7)); --g_75.f0)
                    {
                        struct S0 ***l_210 = &g_147;
                        int ***l_212 = &l_211;
                        (*l_210) = &g_148;
                        (*g_141) = (**g_140);
                        (*l_212) = l_211;
                        if ((***l_212))
                            break;
                    }
                }
                if (l_200)
                    break;
                (*g_140) = (*g_140);
            }
            if (((safe_unary_minus_func_int32_t_s((l_214 == &g_140))) > (0UL != (&g_140 != l_215))))
            {
                int l_217 = 1L;
                char l_238 = 1L;
                short l_245 = 0x8F92L;
                (*g_147) = (*g_147);
                if ((~0xE7448655L))
                {
                    struct S0 *l_216 = &g_114;
                    (*l_216) = func_36(g_5, (*g_140));
                }
                else
                {
                    short l_231 = 0x90B1L;
                    l_217 = ((***l_214) | (0L || g_114.f0));
                    (*g_141) = (safe_mod_func_uint64_t_u_u(18446744073709551615UL, g_12));
                    (**l_215) = (*g_140);
                    if (((safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(func_56(func_20(g_6.f1, (***l_214), l_231, (*l_195))), 0)) >= 0L), (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(l_238, (0x0BL < g_6.f0))), 4)), g_6.f0)))), g_6.f0)) ^ l_238))
                    {
                        (**l_214) = (**l_214);
                    }
                    else
                    {
                        (**l_215) = l_195;
                    }
                }
                if ((safe_sub_func_uint16_t_u_u((func_56(((void*)0 != &g_140)) > ((safe_add_func_uint64_t_u_u(0x1579889665094813LL, (0x4373L == ((safe_add_func_uint16_t_u_u(l_245, ((0x22D8L != g_5) >= g_205))) != (-7L))))) && g_6.f0)), 0x85A9L)))
                {
                    (*g_141) = (*l_195);
                    for (g_6.f1 = 0; (g_6.f1 != (-26)); g_6.f1--)
                    {
                        (*g_140) = (*g_140);
                        (*l_214) = &g_141;
                        (*l_215) = &g_141;
                    }
                    (**g_140) = (safe_add_func_uint16_t_u_u(g_6.f1, g_205));
                }
                else
                {
                    int l_257 = 0x307D8699L;
                    if ((((void*)0 == l_250) & (safe_lshift_func_int8_t_s_s(func_20(g_75.f1, g_6.f0, g_119, (safe_div_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((l_256 == (*g_147)))), func_47(g_114.f1, (***l_214), (**l_215), g_114.f2)))), g_6.f0))))
                    {
                        (**g_140) = l_257;
                        (*l_250) = func_36(func_2(g_75.f0, g_258), g_259);
                    }
                    else
                    {
                        (*g_140) = (*g_140);
                    }
                }
                if ((***l_214))
                {
                    struct S0 l_263 = {0xA32A215982DFFE48LL,0L,0xD5L};
                    (*l_195) = (*g_141);
                    if ((safe_sub_func_uint16_t_u_u(g_75.f0, (g_75.f0 < g_6.f2))))
                    {
                        short l_272 = 1L;
                        l_263 = l_262;
                        (**l_215) = (*g_140);
                        (**l_214) = &l_217;
                        (**l_215) = func_40(g_258.f0, ((**l_214) == (**l_215)), (safe_mod_func_uint64_t_u_u((0x6FB9F414L >= (l_245 == (((***l_215) < (safe_div_func_int16_t_s_s(g_258.f2, (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_272, l_263.f1)), g_75.f2))))) == g_75.f0))), 0x7E15FF329CA2B82ALL)), g_205, (*l_250));
                    }
                    else
                    {
                        return g_6.f2;
                    }
                    (**l_215) = (**l_214);
                    for (g_12 = (-6); (g_12 <= (-3)); g_12 = safe_add_func_int16_t_s_s(g_12, 9))
                    {
                        int *l_275 = (void*)0;
                        (**l_214) = l_275;
                        return g_12;
                    }
                }
                else
                {
                    return g_6.f0;
                }
            }
            else
            {
                unsigned char l_287 = 0x3AL;
                (**l_215) = (**l_215);
                (*l_195) = ((***l_214) || (safe_lshift_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((&l_256 != (void*)0), 7)) | ((l_214 == &g_140) && (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((((void*)0 == &g_148) != func_47(l_286, (***l_214), (**l_214), (*l_195))), 7)), g_5)))), 3)) || (*l_195)) & l_287) | 0x5A90L), g_75.f1)));
                (*l_195) = (*g_141);
                (*l_250) = (*l_250);
            }
        }
        else
        {
            unsigned l_288 = 0UL;
            struct S0 l_289 = {0xD341B89557B5D56ELL,0x83C5L,-10L};
            int *l_316 = &g_12;
            (*g_140) = func_60(g_258.f1, g_114.f0, l_288, l_289);
            for (l_262.f1 = 9; (l_262.f1 <= (-2)); l_262.f1 = safe_sub_func_uint64_t_u_u(l_262.f1, 2))
            {
                long long l_305 = (-1L);
                l_294 = (safe_sub_func_int8_t_s_s((*l_195), l_200));
                (*g_140) = (**l_214);
                (*l_195) = (65531UL < (safe_mod_func_uint8_t_u_u((g_205 != ((func_20((((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(g_205, (safe_rshift_func_int16_t_s_u((g_6.f2 != (((safe_lshift_func_uint16_t_u_s(((void*)0 == (*g_147)), l_305)) <= g_114.f1) | func_47((!(safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u((*l_195), g_6.f0)) ^ l_305) != l_312), 1UL)), 2))), g_6.f0, l_313, g_205))), l_305)))), 8)) || g_258.f0) == g_258.f2), g_258.f2, g_5, l_289.f0) >= 0x08B18B9FL) && 0L)), 8L)));
                for (g_114.f2 = (-27); (g_114.f2 != (-4)); ++g_114.f2)
                {
                    (*g_140) = l_316;
                    for (g_6.f0 = (-3); (g_6.f0 > 17); ++g_6.f0)
                    {
                        struct S0 l_319 = {-1L,1L,0x13L};
                        struct S0 *l_320 = (void*)0;
                        struct S0 *l_321 = &g_75;
                        (*l_321) = l_319;
                        (**l_214) = (*g_140);
                        if ((**g_140))
                            continue;
                        (*l_195) = (safe_lshift_func_int8_t_s_u((func_47(g_114.f0, g_114.f2, (*g_140), g_114.f0) || 0xE2769096L), 7));
                    }
                    (*g_140) = (*g_140);
                }
            }
            for (g_114.f1 = 0; (g_114.f1 > (-22)); g_114.f1--)
            {
                struct S0 *l_326 = &l_262;
                (*l_326) = g_6;
                (**l_214) = (*g_140);
                (**l_214) = (void*)0;
            }
        }
        if (func_47((safe_sub_func_int64_t_s_s(g_75.f0, 0x6BE3EF9C9ED5B9B7LL)), (*l_195), l_195, g_329))
        {
            struct S0 *l_330 = &l_262;
            int l_333 = 0x2C434ADFL;
            int l_356 = 9L;
            unsigned short l_357 = 0xF9AEL;
            short l_406 = 4L;
            (*l_330) = g_114;
            if ((safe_sub_func_uint64_t_u_u((l_333 == (safe_mul_func_int8_t_s_s(((void*)0 == &l_195), g_75.f1))), ((***l_214) < (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((l_333 > ((-5L) ^ (safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(g_75.f0, ((void*)0 != (*g_147)))) > l_333), 4294967291UL)), l_333)), 0x08L)))), (***l_214))), 12)) | l_356), g_119)), l_356)), l_357)), 0xDDFAL))))))
            {
                unsigned l_365 = 0x8DAA797CL;
                (*l_195) = func_20((g_12 && (safe_rshift_func_int8_t_s_u((func_56(g_75.f2) > ((g_119 ^ g_258.f2) | 247UL)), g_258.f1))), g_258.f2, (safe_mul_func_uint16_t_u_u(l_333, 1L)), g_258.f0);
                if ((func_47(g_362, (safe_rshift_func_int16_t_s_u((l_365 >= (*l_195)), 3)), (*g_140), (safe_add_func_uint32_t_u_u(l_333, (safe_mod_func_uint16_t_u_u((((*l_195) != g_258.f1) | ((safe_add_func_uint32_t_u_u(l_333, l_356)) & 0UL)), l_365))))) == 9L))
                {
                    int *l_372 = &l_333;
                    struct S0 ***l_373 = &g_147;
                    long long l_374 = 0x0B5307E25A2E3E00LL;
                    (*g_140) = l_372;
                    (*g_140) = (*g_140);
                    (*g_140) = func_60(g_75.f2, func_47(g_6.f0, (l_373 == (void*)0), (*g_140), g_258.f0), l_333, g_258);
                    (*l_372) = ((*l_195) >= l_374);
                }
                else
                {
                    (*g_140) = (void*)0;
                }
                return g_205;
            }
            else
            {
                int *l_377 = &l_294;
                (*g_141) = (*g_141);
                (*l_195) = (**g_140);
                for (g_258.f1 = (-18); (g_258.f1 > 2); g_258.f1 = safe_add_func_int32_t_s_s(g_258.f1, 9))
                {
                    (*l_330) = (*l_330);
                    (**g_140) = (**g_140);
                    l_377 = l_195;
                }
            }
            for (g_6.f2 = 0; (g_6.f2 == 4); g_6.f2 = safe_add_func_int64_t_s_s(g_6.f2, 7))
            {
                struct S0 l_382 = {0xFD7B3824C0F3E856LL,0L,0xD9L};
                for (l_356 = 0; (l_356 == 6); l_356++)
                {
                    unsigned char l_393 = 0xA3L;
                    l_382 = (*l_330);
                    (*l_330) = func_36((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((*l_195), (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(0x9FL, (((g_258.f1 & l_393) >= (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(g_258.f1, (safe_mul_func_int8_t_s_s(((void*)0 == &g_147), 246UL)))), ((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u(0x2FAFL, g_329)) & 0xC9771C00C6816663LL) >= g_362), l_357)), 11)) & l_406)))) >= g_258.f0))), l_356)))), 0xF348L)), g_119)), (*g_140));
                }
                return l_382.f0;
            }
            (*g_140) = (*g_140);
        }
        else
        {
            unsigned short l_422 = 0x7331L;
            struct S0 *l_425 = &g_114;
            int l_480 = (-1L);
            unsigned char l_483 = 0xE5L;
            l_408 = func_36((&g_140 == l_407), (*g_140));
            l_423 = func_40(((safe_rshift_func_uint16_t_u_s(g_6.f2, 2)) & (65535UL ^ g_258.f2)), (l_411 >= ((safe_add_func_int8_t_s_s((***l_407), (safe_add_func_uint16_t_u_u((!(safe_add_func_uint32_t_u_u(g_6.f0, ((***l_407) || ((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((g_114.f0 > (*l_195)), g_329)), (*l_195))) ^ l_422))))), l_422)))) || l_422)), g_6.f2, g_114.f0, g_258);
            (*l_425) = l_424;
            if ((safe_rshift_func_int8_t_s_u((0UL && func_47(g_6.f2, (0xAFL || (g_5 < ((safe_add_func_uint8_t_u_u((safe_div_func_int8_t_s_s(g_6.f0, g_12)), ((l_432 ^ g_258.f1) && (safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((g_75.f0 == (*l_195)), (*l_195))) <= g_12), 0x5C31C67FAAF16EB9LL)), l_422))))) && 0x31EFC900L))), (*g_140), g_6.f1)), 2)))
            {
                unsigned l_441 = 0UL;
                for (l_408.f2 = (-25); (l_408.f2 != (-5)); l_408.f2 = safe_add_func_int32_t_s_s(l_408.f2, 1))
                {
                    if (l_441)
                        break;
                    (*l_214) = &g_259;
                }
                (*g_141) = l_441;
            }
            else
            {
                int ***l_448 = (void*)0;
                int *l_459 = &g_12;
                for (g_114.f2 = (-30); (g_114.f2 < 28); g_114.f2++)
                {
                    int l_457 = (-3L);
                    unsigned l_458 = 0x4027C63DL;
                    int **l_460 = &l_313;
                    (**l_214) = (void*)0;
                    (*l_195) = (safe_sub_func_int32_t_s_s(((g_75.f0 || (-1L)) < (l_422 && (safe_mod_func_int8_t_s_s(((void*)0 == l_448), (+(1L == (g_258.f2 == (safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(0x4AL, 6)), g_119)) <= 3L), 0x93L))))))))), g_114.f1));
                    if (l_457)
                        break;
                    if (l_458)
                    {
                        (*g_140) = l_459;
                    }
                    else
                    {
                        int l_468 = 1L;
                        (*l_423) = (l_460 == (void*)0);
                        (*l_423) = ((&g_147 == l_461) > ((-3L) ^ func_47((*l_195), (g_362 <= ((safe_mul_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(g_114.f1, ((g_75.f1 != ((&g_141 != l_460) <= g_75.f0)) ^ 0x88ADDA7E193B18DALL))) == l_468), 0x709FAF89L)) == 0x39FDL), l_422)) ^ (*l_195))), (*g_140), g_6.f1)));
                        (*l_460) = (**l_214);
                    }
                }
                (*l_459) = ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u(g_258.f2, ((safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((0L >= (g_479 || ((*l_214) != (void*)0))), ((*l_195) > ((-1L) | l_480)))) == g_479), l_480)) & g_258.f0))) & g_75.f2), g_5)), g_114.f1)) || l_422);
                for (g_75.f0 = 0; (g_75.f0 >= 19); g_75.f0++)
                {
                    (**l_407) = (*g_140);
                    if (l_483)
                        break;
                    (**l_407) = (*g_140);
                }
                return g_329;
            }
        }
        (*l_423) = (*l_195);
    }
    else
    {
        short l_488 = 0xCE82L;
        struct S0 l_495 = {0xC4554F6FE8E1BFBALL,0x126EL,0xC7L};
        unsigned short l_496 = 9UL;
        struct S0 *l_508 = &g_6;
        unsigned char l_548 = 0x28L;
        int ***l_556 = &g_140;
        if ((safe_mod_func_int32_t_s_s(((~(safe_sub_func_int64_t_s_s(l_488, g_205))) < ((-6L) <= (safe_add_func_int8_t_s_s((0xBEC069EF535DEE8CLL == func_2((safe_mul_func_int8_t_s_s(g_75.f2, (safe_add_func_int16_t_s_s(((func_47(g_75.f0, l_488, l_195, l_488) && 0x17L) | g_479), g_6.f0)))), l_495)), g_5)))), l_496)))
        {
            int l_510 = 0x8BD5961FL;
            unsigned short l_538 = 1UL;
            for (g_114.f2 = (-7); (g_114.f2 >= (-22)); g_114.f2 = safe_sub_func_uint64_t_u_u(g_114.f2, 1))
            {
                char l_509 = 0x64L;
                struct S0 **l_534 = &g_148;
                if ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((void*)0 != (*g_140)), 6)), (0x6CA9L || 8L))))
                {
                    (*g_140) = (*g_140);
                }
                else
                {
                    char l_537 = (-1L);
                    if (((*l_195) == (+(safe_unary_minus_func_int8_t_s(((safe_add_func_uint64_t_u_u((safe_div_func_int8_t_s_s(g_6.f2, g_205)), ((void*)0 != l_508))) != g_119))))))
                    {
                        struct S0 l_511 = {0x70106B097D994229LL,-8L,-1L};
                        (*g_147) = (*g_147);
                        l_510 = ((+g_75.f0) >= (l_509 >= (*l_195)));
                        (*g_140) = (*g_140);
                        (*l_508) = l_511;
                    }
                    else
                    {
                        unsigned l_512 = 1UL;
                        (*g_140) = (*g_140);
                        if (l_512)
                            break;
                        (*g_140) = (void*)0;
                        (*l_195) = ((safe_sub_func_uint16_t_u_u(g_515, (safe_div_func_uint16_t_u_u(((((g_5 <= (safe_mod_func_uint32_t_u_u((g_12 < l_512), (safe_div_func_int16_t_s_s(l_512, (safe_add_func_uint8_t_u_u((l_495.f0 && g_362), (safe_div_func_uint16_t_u_u(g_114.f0, 1L))))))))) & (-1L)) <= l_512) < l_510), 1UL)))) != (*l_195));
                    }
                    (*l_508) = g_6;
                    (*l_195) = (safe_mod_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((g_362 && g_6.f1), (((((&g_140 == (void*)0) >= (safe_div_func_int32_t_s_s(8L, 0x070EBD95L))) > (&l_508 == l_534)) <= (safe_div_func_int8_t_s_s((g_114.f0 == l_537), 0x25L))) >= l_538))) == 0x283BL) | l_510), 1UL));
                    (*g_140) = (*g_140);
                }
                (*g_140) = l_195;
                for (g_258.f2 = 0; (g_258.f2 != (-5)); g_258.f2 = safe_sub_func_int64_t_s_s(g_258.f2, 1))
                {
                    struct S0 l_541 = {3L,0L,0x34L};
                    l_541 = g_114;
                }
                for (l_411 = 23; (l_411 < (-24)); --l_411)
                {
                    (*g_140) = (*g_140);
                    for (g_362 = (-26); (g_362 <= 13); g_362 = safe_add_func_int32_t_s_s(g_362, 5))
                    {
                        long long l_551 = 1L;
                        (*g_140) = (void*)0;
                        (*g_140) = (*g_140);
                        g_12 = 0x6A934ACBL;
                        (*l_195) = (safe_sub_func_uint8_t_u_u((l_548 ^ (safe_add_func_uint8_t_u_u(l_551, l_509))), (-6L)));
                    }
                }
            }
            return g_258.f1;
        }
        else
        {
            unsigned short l_553 = 0x22C5L;
            (**g_140) = (l_552 && ((g_75.f0 | g_6.f1) != l_553));
        }
        for (l_411 = (-16); (l_411 == 26); l_411 = safe_add_func_uint64_t_u_u(l_411, 5))
        {
            return (*l_195);
        }
        (*l_556) = (void*)0;
    }
    (*g_147) = (*g_147);
    for (l_262.f0 = 0; (l_262.f0 < 23); l_262.f0 = safe_add_func_uint16_t_u_u(l_262.f0, 4))
    {
        int *l_572 = &g_12;
        if ((*l_195))
        {
            return (*l_195);
        }
        else
        {
            unsigned short l_561 = 1UL;
            (*l_195) = (*g_141);
        }
        for (g_6.f2 = (-23); (g_6.f2 < (-4)); g_6.f2++)
        {
            int **l_573 = &l_195;
            (*l_573) = l_572;
        }
    }
    return (*l_195);
}







static int func_2(unsigned short p_3, struct S0 p_4)
{
    int *l_19 = &g_12;
    struct S0 l_193 = {0x1E2637535322E483LL,-6L,-1L};
    for (p_3 = 21; (p_3 < 15); --p_3)
    {
        int *l_11 = &g_12;
        (*l_11) = (safe_add_func_int16_t_s_s(0xBDBDL, 65527UL));
        if (g_6.f1)
            break;
    }
    (*g_140) = func_13(&g_12, g_12, &g_12, l_19, g_6.f0);
    if ((safe_rshift_func_int16_t_s_s((*l_19), 4)))
    {
        if ((*g_141))
        {
            return p_4.f1;
        }
        else
        {
            char l_183 = 0xB0L;
            return l_183;
        }
    }
    else
    {
        struct S0 *l_194 = &g_114;
        for (g_75.f1 = (-17); (g_75.f1 < (-22)); g_75.f1 = safe_sub_func_uint32_t_u_u(g_75.f1, 7))
        {
            short l_191 = 0x547FL;
            int *l_192 = &g_12;
            l_191 = (safe_sub_func_uint16_t_u_u(((3L || (*l_19)) > (safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_s((*l_19), 1))))), 0xB8B1L));
            (*g_140) = l_192;
        }
        (*g_147) = (*g_147);
        (*g_140) = (*g_140);
        (*l_194) = l_193;
    }
    return p_3;
}







static int * func_13(int * p_14, unsigned long long p_15, int * p_16, int * p_17, char p_18)
{
    short l_178 = (-9L);
    int **l_179 = &g_141;
    struct S0 l_180 = {-1L,0x61C3L,-1L};
    (*p_14) = func_20(g_6.f0, ((~8L) != 1L), g_6.f0, (safe_add_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((func_29((safe_sub_func_uint8_t_u_u(((void*)0 == &g_12), (safe_rshift_func_int8_t_s_u((0xC9L > g_6.f0), ((-9L) ^ p_18))))), g_5) < p_18), p_18)) <= 65535UL), 0x2C49E95A25E2A794LL)));
    (*g_140) = func_40(g_75.f0, (4294967295UL <= (safe_lshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s(p_15, g_114.f1)) && p_15) & p_18), 15))), ((l_178 ^ (&g_141 == l_179)) >= 5L), g_119, l_180);
    (*p_17) = (*p_14);
    return (*g_140);
}







static int func_20(char p_21, unsigned short p_22, short p_23, int p_24)
{
    struct S0 l_169 = {0x33EB4EFABF27EFC0LL,0xEFA7L,-1L};
    struct S0 *l_170 = &g_75;
    int ***l_173 = &g_140;
    (*l_170) = l_169;
    (*g_140) = func_40((safe_lshift_func_uint16_t_u_s(0UL, 2)), (0UL <= (g_119 && (l_173 != (void*)0))), p_24, (***l_173), g_114);
    (***l_173) = (***l_173);
    return (**g_140);
}







static long long func_29(unsigned long long p_30, unsigned p_31)
{
    int *l_39 = &g_12;
    struct S0 l_168 = {0xEB794862D36C4771LL,0xF3CEL,0x4EL};
    l_168 = func_36(g_6.f2, l_39);
    (*l_39) = (g_5 < ((((((*l_39) == (-8L)) < g_114.f2) > g_119) & g_75.f1) != g_75.f2));
    (*g_141) = (*l_39);
    return g_6.f2;
}







static struct S0 func_36(unsigned char p_37, int * p_38)
{
    long long l_46 = 0L;
    struct S0 l_154 = {-2L,0x518DL,0x10L};
    (*g_140) = func_40(p_37, g_6.f2, (l_46 != ((~func_47((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((l_46 < 1UL) < g_6.f2), p_37)), 4)), func_56(p_37), p_38, g_6.f0)) < p_37)), p_37, l_154);
    return l_154;
}







static int * func_40(unsigned p_41, unsigned p_42, unsigned char p_43, unsigned p_44, struct S0 p_45)
{
    unsigned l_155 = 0xAC1D9AC4L;
    struct S0 *l_165 = &g_6;
    int *l_166 = &g_12;
    (*g_140) = func_60(g_75.f1, p_41, l_155, p_45);
    (*g_140) = l_166;
    (*g_141) = (*l_166);
    if (func_47(p_45.f0, p_42, (*g_140), p_45.f1))
    {
        int *l_167 = &g_12;
        (*g_140) = l_167;
    }
    else
    {
        return (*g_140);
    }
    return (*g_140);
}







static unsigned char func_47(long long p_48, char p_49, int * p_50, int p_51)
{
    int *l_151 = &g_12;
    (*g_140) = (*g_140);
    (*g_140) = l_151;
    (*g_141) = (0xF060L ^ (g_6.f2 & (safe_rshift_func_int16_t_s_u((*l_151), (p_51 <= (*l_151))))));
    return (*l_151);
}







static char func_56(unsigned short p_57)
{
    int *l_59 = &g_12;
    int **l_58 = &l_59;
    struct S0 *l_149 = (void*)0;
    struct S0 *l_150 = &g_114;
    (*l_58) = (void*)0;
    (*l_58) = func_60((safe_div_func_uint32_t_u_u((g_6.f0 && g_5), g_6.f0)), g_6.f0, g_12, g_6);
    (*l_150) = g_114;
    return g_75.f2;
}







static int * func_60(long long p_61, char p_62, unsigned p_63, struct S0 p_64)
{
    int *l_70 = (void*)0;
    int **l_69 = &l_70;
    int l_73 = (-1L);
    long long l_104 = 0xD4612A8C3F75B290LL;
    char l_131 = 1L;
    struct S0 *l_134 = &g_75;
    int ***l_142 = &l_69;
    if ((~(safe_mul_func_uint8_t_u_u((l_69 == &l_70), (safe_sub_func_int8_t_s_s(l_73, p_61))))))
    {
        struct S0 *l_74 = &g_75;
        int *l_76 = (void*)0;
        (*l_69) = (void*)0;
        p_64 = p_64;
        (*l_74) = p_64;
        (*l_69) = l_76;
    }
    else
    {
        struct S0 *l_79 = &g_75;
        int *l_82 = (void*)0;
        int *l_139 = &l_73;
        for (p_61 = (-21); (p_61 >= 7); p_61++)
        {
            (*l_69) = &g_12;
        }
        (*l_79) = g_6;
        if (g_6.f1)
        {
            unsigned short l_83 = 1UL;
            int *l_103 = &g_12;
            struct S0 *l_126 = &g_75;
            if (((safe_rshift_func_uint8_t_u_u(1UL, 5)) > (&p_64 == &g_6)))
            {
                (*l_69) = l_82;
            }
            else
            {
                int *l_98 = (void*)0;
                int *l_99 = &g_12;
                struct S0 **l_100 = &l_79;
                (*l_99) = (+(l_83 != ((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u((+((g_75.f1 & (safe_rshift_func_uint8_t_u_s((2UL == g_75.f1), ((safe_lshift_func_uint8_t_u_s(p_64.f1, 6)) | ((void*)0 != &g_75))))) | (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((g_75.f2 == (p_62 && 0L)) & g_5), 0)), g_6.f0)))), p_62)) > p_62) <= p_64.f2), g_75.f1)) || p_63)));
                (*l_100) = &g_75;
            }
            for (p_64.f1 = 0; (p_64.f1 < 26); ++p_64.f1)
            {
                (*l_69) = l_103;
                (*l_69) = &g_12;
                (*l_70) = (((0x16L >= (!p_64.f2)) | l_104) > 0x42L);
            }
            for (g_6.f1 = 0; (g_6.f1 <= 6); ++g_6.f1)
            {
                int *l_113 = &g_12;
                (*l_69) = &g_12;
                for (g_75.f0 = 14; (g_75.f0 < 15); ++g_75.f0)
                {
                    unsigned l_111 = 0xB9B40DC3L;
                    for (g_75.f1 = 0; (g_75.f1 < (-4)); g_75.f1--)
                    {
                        struct S0 **l_112 = &l_79;
                        if (g_75.f1)
                            break;
                        (*l_103) = l_111;
                        (*l_112) = &p_64;
                    }
                    l_103 = l_113;
                    g_114 = p_64;
                    return l_82;
                }
            }
            (*l_103) = ((safe_mul_func_uint16_t_u_u((p_64.f0 & (safe_unary_minus_func_uint16_t_u(p_64.f0))), (((safe_div_func_uint64_t_u_u(((void*)0 == l_126), g_114.f2)) < ((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(6L, ((l_131 > p_61) < (*l_103)))), (-1L))) | 0x5DL)) && p_64.f2))) >= 1UL);
        }
        else
        {
            for (l_73 = 0; (l_73 >= 13); l_73 = safe_add_func_uint32_t_u_u(l_73, 2))
            {
                g_12 = (~p_64.f0);
                (*l_69) = (*l_69);
                g_12 = (&p_64 != l_134);
            }
        }
        (*l_139) = (safe_sub_func_uint32_t_u_u((l_82 != l_82), ((p_61 & g_6.f1) < (safe_mul_func_int16_t_s_s(p_64.f1, 0xC0EDL)))));
    }
    (*l_142) = g_140;
    (**g_140) = (p_64.f1 == (~((((*l_69) == (*l_69)) < (safe_rshift_func_uint8_t_u_u(p_62, (safe_lshift_func_uint8_t_u_u(((((void*)0 != g_147) >= ((*l_142) == (*l_142))) == g_114.f0), (**l_69)))))) <= (**g_140))));
    (**l_142) = (*l_69);
    return (*g_140);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    transparent_crc(g_6.f1, "g_6.f1", print_hash_value);
    transparent_crc(g_6.f2, "g_6.f2", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
    transparent_crc(g_75.f1, "g_75.f1", print_hash_value);
    transparent_crc(g_75.f2, "g_75.f2", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_114.f2, "g_114.f2", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_258.f1, "g_258.f1", print_hash_value);
    transparent_crc(g_258.f2, "g_258.f2", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
