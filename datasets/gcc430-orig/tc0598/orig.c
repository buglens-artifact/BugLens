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
   unsigned long long f2;
   int f3;
   unsigned f4;
};


static int g_2 = 0L;
static int *g_53 = (void*)0;
static int **g_52 = &g_53;
static struct S0 g_56 = {0xC01D4C3F121F2059LL,0x15EDL,0x61E7FF51885A1EC8LL,0x94914501L,0x7E526954L};
static int g_86 = 0xB030F3E7L;
static int g_87 = 0x765C99C2L;
static struct S0 g_204 = {0x57B94B598FB1967CLL,-4L,18446744073709551614UL,5L,4294967291UL};
static unsigned g_219 = 0x217DE881L;
static struct S0 **g_302 = (void*)0;
static unsigned g_567 = 0x1FAD2DBDL;
static int g_572 = 3L;
static unsigned short g_617 = 0xA608L;



static char func_1(void);
static int ** func_7(unsigned long long p_8, short p_9, int ** p_10, long long p_11, int ** p_12);
static int ** func_14(int p_15, long long p_16, short p_17, int p_18);
static short func_20(int p_21, struct S0 p_22, int * p_23, short p_24);
static int * func_26(int ** p_27, int ** p_28, int * p_29);
static int ** func_30(int p_31, int p_32, int ** p_33, int * p_34, int * p_35);
static char func_36(int ** p_37, unsigned p_38, int ** p_39);
static int * func_40(int ** p_41, int ** p_42);
static int ** func_43(long long p_44, unsigned char p_45, int * p_46, int ** p_47);
static struct S0 func_57(struct S0 p_58, int * p_59, long long p_60, int ** p_61, unsigned p_62);
static char func_1(void)
{
    unsigned l_13 = 4UL;
    unsigned l_19 = 4294967295UL;
    struct S0 l_25 = {0x5E0710DD013D0BB9LL,1L,0UL,0L,0x355FFF83L};
    int *l_162 = (void*)0;
    int **l_558 = &l_162;
    struct S0 *l_571 = &l_25;
    struct S0 **l_570 = &l_571;
    for (g_2 = (-13); (g_2 > (-18)); --g_2)
    {
        int *l_6 = &g_2;
        int **l_5 = &l_6;
        int l_161 = 6L;
        int ***l_550 = (void*)0;
        int ***l_551 = (void*)0;
        int ***l_552 = &g_52;
        unsigned char l_559 = 0x5CL;
        (*l_5) = (void*)0;
    }
    if (g_204.f3)
    {
        unsigned long long l_566 = 1UL;
        struct S0 l_573 = {0xEC19EDEA58A81E49LL,-10L,0xAE41FBABFE3105CDLL,0L,0x7C9C6825L};
        int *l_580 = &g_572;
        if ((safe_lshift_func_int8_t_s_s(func_20((safe_div_func_int16_t_s_s((0xE76DD2CE0D3E0BB5LL | (((safe_sub_func_int8_t_s_s((func_20(g_56.f2, g_56, (*g_52), l_566) || g_567), (safe_sub_func_int16_t_s_s((l_570 == (void*)0), 0x0480L)))) >= l_566) & g_572)), 0x7152L)), l_573, (*g_52), g_2), 6)))
        {
            short l_576 = 0xD262L;
            unsigned l_597 = 18446744073709551615UL;
            int *l_598 = &g_572;
            short l_599 = 0x5219L;
            int ***l_600 = (void*)0;
            int ***l_601 = &l_558;
            unsigned l_604 = 4294967295UL;
            struct S0 l_605 = {0x6820222B3BF1309DLL,0L,0x7567B505FA7F40F6LL,0x3D5CD2EFL,0x83875E01L};
            if ((0x47BA37954E6C6213LL | ((safe_mul_func_int8_t_s_s(l_576, (func_20(func_20(((g_302 != (void*)0) > g_56.f4), g_56, (*g_52), ((safe_sub_func_int8_t_s_s(func_20(((safe_unary_minus_func_uint8_t_u((0x537E989F72691860LL && 0UL))) ^ 0xB16D0730CCCBD2ECLL), (*l_571), l_580, (*l_580)), g_219)) <= l_576)), (**l_570), (*g_52), l_576) || 0xA919443BL))) & 0x4DL)))
            {
                (*g_52) = (*g_52);
                (*g_52) = (*g_52);
            }
            else
            {
                int l_584 = (-7L);
                for (l_19 = (-10); (l_19 != 16); l_19++)
                {
                    unsigned char l_583 = 248UL;
                    int **l_587 = &g_53;
                    int **l_588 = &g_53;
                    (*l_580) = l_583;
                    if (l_583)
                        continue;
                    (*l_580) = (((*l_580) != l_584) < ((safe_mod_func_int16_t_s_s((&g_302 == &g_302), g_204.f0)) ^ l_584));
                    if (l_584)
                        goto lbl_612;
                }
            }
            (*l_601) = func_30((safe_mod_func_int16_t_s_s((0L ^ (safe_mod_func_uint64_t_u_u((func_20(((safe_mul_func_uint8_t_u_u(l_576, (~((func_20((*l_580), (**l_570), l_580, g_204.f3) >= g_204.f2) < (((safe_rshift_func_int16_t_s_u(0x670EL, g_2)) || g_567) > l_597))))) > 0xD87CL), g_56, l_598, g_2) != 0xAFL), g_87))), l_599)), g_56.f1, &g_53, (*l_558), l_598);
lbl_612:
            (*l_580) = ((safe_sub_func_int8_t_s_s(func_20(l_604, l_605, l_580, (safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(g_204.f0, 1)), g_567)), g_56.f0))), (-1L))) == g_204.f4);
            (*l_558) = func_40(&g_53, &l_580);
        }
        else
        {
            int **l_613 = &g_53;
            (*g_52) = func_40(&g_53, &l_580);
            return g_204.f3;
        }
        for (l_573.f4 = 0; (l_573.f4 >= 9); l_573.f4 = safe_add_func_int64_t_s_s(l_573.f4, 9))
        {
            (*g_52) = (*g_52);
            return g_56.f0;
        }
    }
    else
    {
        int *l_616 = &g_572;
        unsigned char l_618 = 255UL;
        (**l_570) = func_57((*l_571), l_616, g_56.f2, func_7(g_86, (g_617 > 4L), &l_616, l_618, &g_53), (*l_616));
    }
    return g_572;
}







static int ** func_7(unsigned long long p_8, short p_9, int ** p_10, long long p_11, int ** p_12)
{
    unsigned short l_549 = 65535UL;
    (*g_52) = (void*)0;
    (*g_52) = (*g_52);
    for (g_219 = 0; (g_219 > 29); g_219 = safe_add_func_int32_t_s_s(g_219, 1))
    {
        if (l_549)
            break;
        return p_10;
    }
    return &g_53;
}







static int ** func_14(int p_15, long long p_16, short p_17, int p_18)
{
    long long l_477 = 0xD85F67248CF34C46LL;
    int *l_482 = &g_2;
    int l_485 = (-1L);
    struct S0 l_497 = {0L,0xBD24L,18446744073709551610UL,0L,1UL};
    l_477 = (-1L);
    for (g_56.f3 = (-4); (g_56.f3 > 2); g_56.f3 = safe_add_func_int16_t_s_s(g_56.f3, 5))
    {
        int *l_480 = &g_86;
        struct S0 l_481 = {1L,0xD0BFL,18446744073709551615UL,0x775A7EF1L,4294967295UL};
        (*l_480) = (4294967295UL | p_18);
        if (func_20((~3L), l_481, l_482, (p_17 != p_15)))
        {
            int l_486 = 1L;
            struct S0 *l_487 = &l_481;
            l_486 = (safe_lshift_func_int16_t_s_s(l_485, 1));
            (*l_487) = g_56;
            (*g_52) = &p_15;
        }
        else
        {
            int *l_488 = &g_2;
            struct S0 *l_528 = &l_481;
            (*g_52) = l_488;
            if ((safe_sub_func_uint8_t_u_u(((0UL == func_20(((func_20((((safe_lshift_func_int8_t_s_u(g_219, 7)) != (p_15 == (*g_53))) < (safe_div_func_uint64_t_u_u((*l_488), func_20((safe_mul_func_int16_t_s_s((func_20((&l_488 != (void*)0), l_481, func_40(&l_480, &l_480), p_16) != 0x52L), 1UL)), l_481, l_488, g_204.f0)))), l_497, l_480, p_17) > 0x5AL) >= g_204.f2), l_497, l_480, g_2)) ^ g_204.f3), g_87)))
            {
                long long l_518 = (-1L);
                struct S0 l_524 = {8L,0L,0UL,-9L,4294967295UL};
                for (l_497.f3 = 0; (l_497.f3 != 12); l_497.f3 = safe_add_func_int16_t_s_s(l_497.f3, 2))
                {
                    (*l_480) = (*g_53);
                }
                for (l_481.f3 = 15; (l_481.f3 != 1); l_481.f3 = safe_sub_func_int32_t_s_s(l_481.f3, 2))
                {
                    if ((safe_div_func_int16_t_s_s((((((l_482 == (void*)0) & (*l_480)) < 4294967295UL) && 0x56L) > (**g_52)), (*l_480))))
                    {
                        (*g_52) = l_482;
                        p_15 = (**g_52);
                        (*g_52) = func_40(&l_480, &g_53);
                    }
                    else
                    {
                        (*g_52) = l_488;
                        if (p_17)
                            break;
                    }
                    for (p_15 = 2; (p_15 < 17); p_15++)
                    {
                        int **l_506 = &l_480;
                        struct S0 *l_507 = &l_497;
                        struct S0 *l_508 = &g_56;
                        struct S0 **l_509 = (void*)0;
                        struct S0 **l_510 = (void*)0;
                        struct S0 **l_511 = &l_508;
                        (*g_52) = func_40(l_506, &g_53);
                        (**l_506) = ((void*)0 != l_507);
                        (*l_511) = l_508;
                        (*l_480) = (&g_52 == (void*)0);
                    }
                }
                for (l_485 = 0; (l_485 < 20); l_485 = safe_add_func_int32_t_s_s(l_485, 3))
                {
                    unsigned long long l_525 = 18446744073709551613UL;
                    int *l_542 = &g_86;
                }
            }
            else
            {
                if ((*g_53))
                    break;
            }
            (*g_52) = func_40(&l_482, &g_53);
        }
    }
    return &g_53;
}







static short func_20(int p_21, struct S0 p_22, int * p_23, short p_24)
{
    char l_474 = 0L;
    int **l_475 = (void*)0;
    int l_476 = (-3L);
    l_476 = (((safe_div_func_uint32_t_u_u(l_474, p_22.f3)) & g_56.f4) == (g_204.f2 || (l_474 != (p_22.f0 & g_204.f1))));
    return p_22.f1;
}







static int * func_26(int ** p_27, int ** p_28, int * p_29)
{
    int **l_256 = &g_53;
    int l_261 = 0xEB5E7ADDL;
    unsigned long long l_262 = 0x14A00EA68498C81BLL;
    int *l_263 = &l_261;
    struct S0 l_271 = {1L,-1L,8UL,0x77BE777DL,0xB8EC8C7DL};
    int **l_375 = &g_53;
    struct S0 **l_391 = (void*)0;
    int *l_422 = &g_2;
    int **l_421 = &l_422;
    int **l_459 = &l_263;
    int *l_471 = (void*)0;
    (*g_52) = func_40(&p_29, l_256);
    (*l_263) = (((g_56.f3 == (&p_29 == (void*)0)) | g_87) | (safe_sub_func_uint16_t_u_u((((l_261 > 0L) > g_56.f3) || l_262), g_219)));
    if ((safe_sub_func_int8_t_s_s((*l_263), (*l_263))))
    {
        struct S0 *l_267 = &g_56;
        struct S0 **l_266 = &l_267;
        int *l_268 = (void*)0;
        short l_297 = 0x4EEFL;
        int *l_324 = &l_261;
        unsigned char l_342 = 255UL;
        long long l_358 = 0x7C13D93577412C3FLL;
        (*l_266) = (void*)0;
        l_268 = (*g_52);
        for (g_86 = 0; (g_86 >= 29); g_86 = safe_add_func_uint16_t_u_u(g_86, 6))
        {
            struct S0 *l_272 = &g_204;
            (*l_272) = l_271;
            (*g_52) = (*p_28);
            if ((*l_263))
                break;
            (*p_27) = (*g_52);
        }
        if ((safe_lshift_func_int16_t_s_s(((~(safe_lshift_func_uint8_t_u_s(0x5AL, 0))) | (safe_lshift_func_int16_t_s_u(func_36(&l_268, g_2, &g_53), 5))), 5)))
        {
            long long l_290 = 0x78DBA8A70E696E2DLL;
            int **l_299 = &l_263;
            char l_348 = 0x07L;
            struct S0 l_354 = {-1L,-3L,0UL,8L,0x8EE69096L};
            (*l_263) = (-5L);
        }
        else
        {
            int **l_355 = &l_263;
            unsigned long long l_359 = 1UL;
            struct S0 *l_360 = (void*)0;
            struct S0 *l_361 = &l_271;
            struct S0 ***l_366 = &l_266;
            (*l_361) = func_57(g_56, func_40(&p_29, l_355), (**l_355), &l_324, ((((((*p_27) == (*p_27)) < (((safe_rshift_func_int8_t_s_u(((*p_27) == (*g_52)), g_56.f4)) > l_358) <= (**l_355))) & (*l_263)) & l_359) >= (**l_355)));
            for (l_358 = (-8); (l_358 <= 18); l_358 = safe_add_func_uint16_t_u_u(l_358, 4))
            {
                return (*g_52);
            }
            (*l_324) = (safe_lshift_func_uint16_t_u_u(g_56.f4, 2));
            (*l_366) = &l_267;
        }
    }
    else
    {
        int *l_367 = &g_2;
        return l_367;
    }
    if ((safe_add_func_int8_t_s_s((*l_263), 0x4FL)))
    {
        int l_373 = 0xDC023EACL;
        int **l_404 = &l_263;
        struct S0 *l_419 = (void*)0;
        struct S0 **l_418 = &l_419;
        (*l_256) = (*p_27);
        if ((*l_263))
        {
            short l_370 = 9L;
            int **l_374 = &g_53;
            unsigned char l_420 = 247UL;
            (*l_263) = l_370;
            if (((safe_mul_func_int16_t_s_s((func_36(&g_53, g_56.f2, l_375) && l_373), g_204.f4)) && l_373))
            {
                int l_389 = 0x7D3A1E4AL;
                struct S0 *l_394 = &g_56;
                int **l_395 = &g_53;
                for (g_87 = 0; (g_87 >= 18); g_87 = safe_add_func_int8_t_s_s(g_87, 1))
                {
                    unsigned char l_382 = 255UL;
                    unsigned long long l_390 = 0xB41F928291F7142ELL;
                    struct S0 *l_393 = &l_271;
                    struct S0 **l_392 = &l_393;
                    int *l_397 = &l_373;
                    int l_400 = 0xB1D9A2A0L;
                    for (l_271.f0 = 0; (l_271.f0 > (-12)); --l_271.f0)
                    {
                        return (*g_52);
                    }
                    if ((safe_mod_func_int16_t_s_s((l_382 | (safe_div_func_int16_t_s_s((0L && ((((safe_rshift_func_uint8_t_u_u(l_389, (l_390 < (l_391 == l_392)))) ^ l_389) != ((l_394 == (void*)0) != 0xB3L)) >= l_373)), l_373))), l_389)))
                    {
                        return (*p_28);
                    }
                    else
                    {
                        int **l_396 = &l_263;
                        (*l_263) = l_389;
                        l_397 = func_40(l_395, l_396);
                        (*l_263) = (((safe_mul_func_uint8_t_u_u(g_219, 255UL)) && l_400) | l_373);
                    }
                }
                (*p_28) = (*l_395);
            }
            else
            {
                int **l_403 = &l_263;
                int **l_405 = &l_263;
                struct S0 *l_417 = &g_204;
                struct S0 **l_416 = &l_417;
                int l_423 = (-6L);
                for (l_373 = 11; (l_373 != (-9)); l_373--)
                {
                    (*l_404) = func_40(l_403, func_43(func_36(l_405, g_56.f3, l_374), g_204.f3, &g_2, g_52));
                    (*g_52) = (*p_27);
                }
                g_86 = 0xAD913500L;
                g_86 = l_423;
            }
        }
        else
        {
            int **l_426 = &l_422;
            struct S0 l_428 = {0x47835C08C91F0A30LL,-1L,18446744073709551611UL,0L,4294967287UL};
            (*p_27) = (*p_27);
            for (g_204.f2 = (-29); (g_204.f2 >= 11); ++g_204.f2)
            {
                unsigned l_427 = 4294967288UL;
                (*l_263) = 1L;
                l_428 = func_57(func_57(g_204, (*g_52), (&p_29 != (void*)0), l_426, (**l_426)), func_40(&g_53, &g_53), l_427, &g_53, (**l_404));
                for (l_428.f4 = 0; (l_428.f4 < 40); l_428.f4 = safe_add_func_int32_t_s_s(l_428.f4, 6))
                {
                    (*l_375) = (*p_27);
                }
            }
            for (g_56.f2 = 0; (g_56.f2 > 60); g_56.f2 = safe_add_func_int32_t_s_s(g_56.f2, 5))
            {
            }
        }
    }
    else
    {
        struct S0 *l_440 = &g_204;
        struct S0 **l_439 = &l_440;
        int l_447 = 0x8A595CDAL;
        int ***l_448 = &l_375;
        if (((+((g_86 && g_204.f4) && ((safe_div_func_int8_t_s_s(g_87, (safe_mod_func_int8_t_s_s(g_204.f3, (*l_422))))) != 0x02C06835L))) || ((void*)0 != l_439)))
        {
            (*p_27) = (*p_28);
        }
        else
        {
            unsigned l_443 = 0UL;
            int l_446 = 0xCBAFCE22L;
            (*l_263) = g_56.f1;
            (*l_263) = ((safe_mod_func_uint8_t_u_u(l_443, g_56.f1)) ^ ((void*)0 == (*l_439)));
            l_446 = (0x10CE6646L ^ (safe_mul_func_int8_t_s_s(((*p_28) != (void*)0), ((void*)0 == &l_256))));
            (*l_263) = l_447;
        }
        (*l_448) = &p_29;
        (*g_52) = func_40(&g_53, &g_53);
        for (g_204.f0 = 0; (g_204.f0 > 1); g_204.f0 = safe_add_func_uint64_t_u_u(g_204.f0, 6))
        {
            unsigned short l_451 = 1UL;
            int **l_463 = &g_53;
            long long l_466 = (-6L);
            (*l_256) = func_40(&l_422, &g_53);
        }
    }
    return l_471;
}







static int ** func_30(int p_31, int p_32, int ** p_33, int * p_34, int * p_35)
{
    struct S0 l_163 = {1L,-7L,18446744073709551608UL,0x2FE6CD9DL,0x3CF306C0L};
    struct S0 *l_164 = &g_56;
    int **l_175 = &g_53;
    int l_226 = 0x11DD1DBFL;
lbl_231:
    (*l_164) = l_163;
    if ((func_36(&p_34, (safe_sub_func_uint16_t_u_u(((((safe_mod_func_int32_t_s_s(l_163.f3, g_56.f2)) & (safe_mul_func_int16_t_s_s((-4L), (safe_unary_minus_func_int32_t_s(((void*)0 != &g_56)))))) & (0x6B4A2447EBBD39C2LL > p_32)) | (safe_unary_minus_func_int64_t_s((safe_div_func_int8_t_s_s(0x79L, g_56.f2))))), l_163.f2)), l_175) > 0x7D408D08F60D6E8ALL))
    {
        unsigned l_189 = 0xD00042A1L;
        int *l_202 = (void*)0;
lbl_230:
        g_86 = (0x5D00L || p_31);
        for (l_163.f1 = 0; (l_163.f1 < (-21)); l_163.f1 = safe_sub_func_int16_t_s_s(l_163.f1, 8))
        {
            int l_184 = 0xCDC420A7L;
            int **l_195 = &g_53;
            for (p_31 = (-20); (p_31 <= 10); p_31 = safe_add_func_uint32_t_u_u(p_31, 2))
            {
                unsigned short l_190 = 0x3F27L;
                unsigned char l_217 = 0x14L;
                int **l_220 = (void*)0;
                if (((safe_div_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u(0x9FCAL, (l_184 != g_2))) || (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((l_189 ^ l_190), (safe_lshift_func_int16_t_s_s((1UL & (safe_div_func_int64_t_s_s(0x9B2AD0072B36A804LL, l_189))), 14)))) < func_36(&g_53, g_56.f2, &g_53)), l_184))), 0xAD0A0F2B41A0BB31LL)) < 0xEA39184E9DB0B106LL))
                {
                    (*l_175) = (*g_52);
                    (*g_52) = func_40(l_195, &g_53);
                }
                else
                {
                    unsigned char l_196 = 0x22L;
                    char l_207 = 0L;
                    unsigned l_216 = 4294967286UL;
                    int **l_218 = (void*)0;
                    int *l_221 = &g_86;
                    (*p_33) = func_40(l_175, &g_53);
                    if (l_196)
                        continue;
                    for (g_56.f1 = 0; (g_56.f1 != (-11)); --g_56.f1)
                    {
                        int *l_201 = &g_86;
                        struct S0 *l_203 = &g_204;
                        p_32 = (((*l_195) == (*p_33)) != ((safe_lshift_func_int16_t_s_s(l_189, g_56.f3)) && p_32));
                        (*l_201) = (-10L);
                        (*p_33) = l_202;
                        (*l_203) = (*l_164);
                    }
                    (*l_221) = func_36(&p_34, g_2, l_195);
                }
                for (g_87 = (-22); (g_87 < 25); g_87 = safe_add_func_int16_t_s_s(g_87, 1))
                {
                    l_226 = (safe_rshift_func_uint16_t_u_s(p_32, 7));
                    for (g_56.f0 = (-5); (g_56.f0 >= 4); g_56.f0 = safe_add_func_int64_t_s_s(g_56.f0, 1))
                    {
                        int *l_229 = &g_86;
                        g_86 = ((*p_35) ^ 0UL);
                        (*l_229) = (*p_35);
                    }
                }
                if (g_56.f1)
                    goto lbl_230;
            }
        }
        if (g_56.f0)
            goto lbl_231;
        (*l_164) = func_57(func_57(g_56, func_40(&g_53, l_175), (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(g_56.f1, (g_204.f4 || (safe_add_func_uint64_t_u_u(p_31, p_32))))), 12)), (safe_mul_func_uint8_t_u_u(0x90L, (-1L))))), &g_53, g_56.f0), l_202, p_31, &g_53, p_32);
    }
    else
    {
        unsigned l_242 = 0x1B478E88L;
        int l_249 = 0x0F041E95L;
        int ***l_250 = &g_52;
        int *l_251 = &g_86;
        (*l_175) = (*l_175);
        (*l_251) = (l_242 < ((safe_add_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u(((((safe_sub_func_uint64_t_u_u((0xBE17463EL == l_242), g_56.f0)) > l_242) >= 0xEAL) ^ (l_249 | 0x60E030936126E07ALL)), ((&g_52 != l_250) ^ g_204.f1))) <= (*p_35)) != 0xD0L), 0xC65FD913343AA511LL)) > g_86));
        for (g_86 = 0; (g_86 < (-8)); --g_86)
        {
            (*l_164) = func_57((*l_164), (*p_33), p_31, (*l_250), (safe_div_func_int64_t_s_s(g_204.f1, g_56.f0)));
        }
    }
    return &g_53;
}







static char func_36(int ** p_37, unsigned p_38, int ** p_39)
{
    short l_48 = 1L;
    int *l_49 = &g_2;
    struct S0 *l_160 = &g_56;
    (*p_39) = func_40(func_43(p_38, l_48, l_49, p_37), &l_49);
    (*g_52) = (*p_37);
    (*l_160) = g_56;
    (*p_37) = (*g_52);
    return (*l_49);
}







static int * func_40(int ** p_41, int ** p_42)
{
    return (*g_52);
}







static int ** func_43(long long p_44, unsigned char p_45, int * p_46, int ** p_47)
{
    int *l_51 = &g_2;
    int **l_50 = &l_51;
    struct S0 *l_55 = &g_56;
    struct S0 l_63 = {0xEAADAF8D98C68336LL,-8L,1UL,0x64BFCE93L,0x7A64A0F0L};
    unsigned char l_126 = 251UL;
    if ((l_50 != g_52))
    {
        struct S0 **l_54 = (void*)0;
        struct S0 *l_66 = &l_63;
        l_55 = (void*)0;
        (*l_66) = func_57(l_63, (*g_52), (**l_50), &g_53, g_2);
    }
    else
    {
        short l_67 = 8L;
        int *l_78 = &g_2;
        if ((*p_46))
        {
            l_67 = (*p_46);
            (*l_55) = func_57(g_56, (*g_52), ((safe_mod_func_int64_t_s_s(g_56.f2, (safe_mod_func_int32_t_s_s(l_67, g_56.f0)))) < ((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((**l_50), (p_44 == (safe_lshift_func_uint8_t_u_u((**l_50), 7))))), 0x2F47L)) ^ 1UL)), &g_53, l_67);
        }
        else
        {
            int *l_85 = &g_86;
            (*l_50) = l_78;
            (*l_85) = (g_2 && (((g_56.f4 ^ 0L) > (p_45 >= (safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(0x33L, 8UL)) && (g_56.f4 >= g_56.f0)), (safe_add_func_uint8_t_u_u(6UL, 0x49L)))))) & (*l_78)));
            return &g_53;
        }
        (*g_52) = (*p_47);
        (*l_55) = func_57(g_56, (*g_52), (*l_51), &g_53, (g_86 ^ p_45));
        return &g_53;
    }
    if (g_87)
    {
        unsigned l_102 = 0xC9A8392DL;
        int **l_125 = (void*)0;
        int l_138 = 0L;
        unsigned long long l_153 = 1UL;
        int ***l_157 = &l_50;
        if ((safe_rshift_func_uint16_t_u_s(0UL, 8)))
        {
            int l_124 = 0x19055545L;
            struct S0 **l_148 = &l_55;
            struct S0 l_150 = {-1L,0xB294L,0UL,0xE0FF3897L,0x1EE9290BL};
            (*g_52) = (void*)0;
            for (g_56.f3 = 2; (g_56.f3 >= (-27)); g_56.f3 = safe_sub_func_uint32_t_u_u(g_56.f3, 6))
            {
                (*l_50) = (*g_52);
            }
            if ((*p_46))
            {
                unsigned long long l_97 = 0x079270D6E0D24876LL;
                int *l_103 = (void*)0;
                int *l_104 = &g_86;
                struct S0 l_129 = {1L,1L,0x4EC1833B1D7879CFLL,0xC8947EB4L,4294967295UL};
                for (g_56.f3 = (-23); (g_56.f3 <= (-26)); g_56.f3--)
                {
                    int l_96 = 5L;
                    for (l_63.f1 = 0; (l_63.f1 < (-23)); --l_63.f1)
                    {
                        if (l_96)
                            break;
                        return &g_53;
                    }
                    if (l_97)
                        continue;
                    (*g_52) = (*p_47);
                }
lbl_142:
                (*l_104) = (safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(p_45, (((void*)0 != &l_55) || l_102))), g_86));
                if ((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(p_44, 1L)), (safe_mod_func_uint64_t_u_u((+(safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(g_87, g_56.f4)), (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int16_t_s(g_2)), (safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(g_56.f1, l_102)), ((void*)0 == &l_55))), 0x5E52A12E219839B2LL))))))), l_124)))))
                {
                    return l_125;
                }
                else
                {
                    struct S0 *l_127 = &l_63;
                    struct S0 **l_128 = &l_55;
                    int l_141 = 0xDA865B3CL;
                    (*l_104) = l_126;
                    (*l_128) = l_127;
                    g_56 = (*l_127);
                    (*l_55) = func_57(l_129, (*g_52), ((l_102 & (safe_add_func_uint32_t_u_u(g_87, (safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(l_138, p_44)), ((safe_mod_func_uint64_t_u_u(((+g_87) | (0UL && 0x05E5L)), g_56.f3)) > (-1L)))), 1UL))))) & l_141), &l_103, g_86);
                }
                if (g_56.f3)
                    goto lbl_142;
            }
            else
            {
                struct S0 l_144 = {0x14D024A44AA9F20BLL,-2L,0xF33B6043366FBB58LL,0L,9UL};
                int *l_154 = (void*)0;
                int *l_155 = &g_86;
                if (l_124)
                {
                    int *l_143 = &l_124;
                    (*l_143) = 0xEBDDF904L;
                    if (p_44)
                        goto lbl_156;
                    return &g_53;
                }
                else
                {
                    struct S0 l_145 = {0x4A936FBAC331A2D7LL,1L,0x7C57241C05FA5AF9LL,1L,0x0F1C71BAL};
                    struct S0 *l_149 = (void*)0;
                    l_145 = l_144;
                    for (l_145.f4 = 0; (l_145.f4 > 22); l_145.f4 = safe_add_func_int32_t_s_s(l_145.f4, 4))
                    {
                        (*l_50) = (*g_52);
                    }
                    l_150 = func_57(l_145, (*p_47), ((void*)0 != l_148), &g_53, (p_45 < g_56.f0));
                    (*g_52) = (*g_52);
                }
lbl_156:
                (*l_155) = (safe_div_func_int64_t_s_s(((*p_46) & l_153), l_150.f3));
                return &g_53;
            }
            (**l_148) = func_57((**l_148), (*p_47), (!(p_45 == g_56.f1)), &g_53, p_45);
        }
        else
        {
            return &g_53;
        }
        (*g_52) = (*p_47);
        (*l_157) = &g_53;
        for (g_87 = (-28); (g_87 < (-2)); g_87 = safe_add_func_int32_t_s_s(g_87, 1))
        {
            (*p_47) = (*g_52);
        }
    }
    else
    {
        (*l_50) = (*l_50);
        (*p_47) = (*p_47);
    }
    return &g_53;
}







static struct S0 func_57(struct S0 p_58, int * p_59, long long p_60, int ** p_61, unsigned p_62)
{
    struct S0 *l_64 = (void*)0;
    struct S0 *l_65 = &g_56;
    (*l_65) = g_56;
    return g_56;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_56.f1, "g_56.f1", print_hash_value);
    transparent_crc(g_56.f2, "g_56.f2", print_hash_value);
    transparent_crc(g_56.f3, "g_56.f3", print_hash_value);
    transparent_crc(g_56.f4, "g_56.f4", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_204.f0, "g_204.f0", print_hash_value);
    transparent_crc(g_204.f1, "g_204.f1", print_hash_value);
    transparent_crc(g_204.f2, "g_204.f2", print_hash_value);
    transparent_crc(g_204.f3, "g_204.f3", print_hash_value);
    transparent_crc(g_204.f4, "g_204.f4", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
