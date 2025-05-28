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
   signed f0 : 20;
   int f1;
   signed f2 : 11;
   unsigned f3 : 3;
   unsigned f4 : 30;
};

union U1 {
   unsigned char f0;
   short f1;
};


static int g_3 = 0xF7A73D2DL;
static int *g_11 = &g_3;
static int **g_10 = &g_11;
static struct S0 *g_50 = (void*)0;
static struct S0 g_63 = {808,1L,35,1,4216};
static int g_128 = 1L;
static int *g_133 = &g_128;
static union U1 g_135 = {0xB1L};
static union U1 **g_193 = (void*)0;
static struct S0 g_232 = {939,5L,43,1,30409};
static struct S0 **g_242 = &g_50;
static struct S0 ***g_241 = &g_242;
static struct S0 ***g_301 = &g_242;
static int g_305 = (-1L);
static unsigned g_362 = 18446744073709551615UL;
static int **g_412 = (void*)0;
static struct S0 ***g_446 = &g_242;



static unsigned char func_1(void);
static int ** func_4(unsigned p_5, int ** p_6, unsigned char p_7, int * p_8, long long p_9);
static unsigned short func_16(int ** p_17, int * p_18, int ** p_19);
static long long func_20(int ** p_21, int ** p_22, char p_23, short p_24);
static int ** func_25(int * p_26, int * p_27);
static int * func_28(int ** p_29, unsigned short p_30, struct S0 p_31);
static int ** func_32(short p_33, unsigned p_34);
static char func_37(int ** p_38, unsigned long long p_39);
static int * func_42(int * p_43);
static int * func_44(long long p_45);
static unsigned char func_1(void)
{
    int *l_2 = &g_3;
    unsigned char l_108 = 8UL;
    unsigned long long l_374 = 1UL;
    unsigned long long l_423 = 0xE963DA19F553E666LL;
    union U1 *l_424 = &g_135;
    unsigned l_436 = 4294967295UL;
    struct S0 ***l_455 = &g_242;
    union U1 *l_473 = &g_135;
    struct S0 l_538 = {-252,0x073CFF69L,-3,0,15446};
    short l_550 = 0L;
    int l_552 = 0xEFADD971L;
lbl_513:
    (*l_2) = 0x260417BEL;
lbl_540:
    if ((*l_2))
    {
        int *l_390 = &g_3;
        int *l_408 = &g_3;
        int ***l_419 = &g_10;
        (*l_419) = func_4(g_3, g_10, ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(func_16((func_20(func_25((*g_10), func_28(func_32(g_3, (((safe_lshift_func_int8_t_s_s(func_37(&g_11, (safe_lshift_func_uint16_t_u_u(g_3, (*l_2)))), l_108)) ^ g_63.f3) || (*l_2))), g_3, g_232)), g_10, l_374, (*l_2)) , &g_133), l_390, &l_390), (*l_2))), 7)) , 0x6BL), l_408, (*l_2));
    }
    else
    {
        unsigned char l_422 = 249UL;
        int *l_441 = &g_3;
        struct S0 ***l_445 = &g_242;
        union U1 *l_461 = &g_135;
        unsigned l_502 = 0xB913F3AAL;
        int *l_518 = &g_3;
        if ((safe_mul_func_int8_t_s_s(l_422, ((*l_2) == (*l_2)))))
        {
            union U1 *l_425 = &g_135;
            struct S0 l_434 = {-702,0L,-29,0,20053};
            short l_437 = 0xDB81L;
            int **l_440 = &l_2;
            (*g_11) = 0x2AF69D36L;
            if ((((-8L) < (func_37(&g_133, (l_422 , (g_128 > (g_135 , 0x688306B9E29AD657LL)))) | (l_423 , (*g_133)))) & g_128))
            {
                l_425 = l_424;
                (**g_10) = l_422;
            }
            else
            {
                union U1 *l_430 = &g_135;
                struct S0 l_431 = {-545,0xDACC10B5L,-7,0,11709};
                struct S0 *l_435 = &g_63;
                (*l_435) = ((g_3 , (((safe_rshift_func_int16_t_s_u(4L, g_305)) , ((g_232.f4 ^ (((safe_lshift_func_uint8_t_u_u(g_232.f0, (((void*)0 == l_430) || (((((l_431 , ((safe_mod_func_int64_t_s_s(g_63.f4, 1UL)) < 0x6377D892B7D04263LL)) , 0xC062B1D4L) , 0x2655L) , &g_11) != &g_11)))) == g_63.f3) ^ (-1L))) <= (*l_2))) || (*l_2))) , l_434);
                if ((g_135 , (func_37(&l_2, (g_63.f0 | ((void*)0 != l_430))) && func_16((l_434.f0 , func_32(((g_128 & (!(&l_2 == (void*)0))) < g_232.f4), (*l_2))), (*g_10), &g_11))))
                {
                    (*l_2) = l_436;
                }
                else
                {
                    (*g_10) = (void*)0;
                }
            }
            if (l_437)
            {
                (*l_441) = (safe_sub_func_int8_t_s_s((g_63.f3 , 9L), 0x5EL));
            }
            else
            {
                (*l_2) = ((safe_mod_func_int16_t_s_s(g_232.f2, 9L)) , (safe_unary_minus_func_uint8_t_u((*l_441))));
                (*l_440) = (*g_10);
            }
        }
        else
        {
            short l_456 = 0x75FFL;
            int **l_462 = &g_133;
            unsigned char l_503 = 1UL;
            unsigned short l_512 = 0UL;
            struct S0 l_539 = {-970,0x8EE7D672L,-32,1,1776};
            if ((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(((*l_441) | g_135.f0), g_63.f0)), func_20(&g_11, &g_133, (safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((&g_242 != l_455), g_128)), 2)), ((l_456 == 0xD1170106B097D994LL) && (*l_2))))))
            {
                int **l_464 = &g_11;
                for (l_456 = 8; (l_456 < 12); l_456 = safe_add_func_int8_t_s_s(l_456, 1))
                {
                    int *l_463 = &g_3;
                    if ((((safe_sub_func_uint16_t_u_u((((l_461 != l_424) , func_16(l_462, l_463, l_464)) != g_128), ((void*)0 == g_193))) | (*g_133)) , (**l_464)))
                    {
                        return g_63.f2;
                    }
                    else
                    {
                        unsigned short l_465 = 3UL;
                        (*l_463) = (-10L);
                        (*g_133) = (l_465 && g_232.f3);
                        (*g_133) = ((**l_462) > (safe_mod_func_int16_t_s_s((-3L), (((safe_lshift_func_int8_t_s_u(((*l_2) < ((l_462 == &g_133) <= ((&g_133 != (void*)0) , g_305))), func_37(&g_11, g_232.f0))) | g_232.f1) && (**l_464)))));
                    }
                    (**g_241) = (void*)0;
                }
            }
            else
            {
                unsigned short l_472 = 0x2E89L;
                union U1 **l_476 = &l_424;
                int *l_478 = &g_305;
                struct S0 l_483 = {214,0L,-30,0,10690};
                struct S0 l_504 = {599,0x75DFE705L,-26,1,5061};
                struct S0 *l_514 = &l_504;
lbl_519:
                if ((g_305 >= 0x79F5L))
                {
                    union U1 **l_474 = (void*)0;
                    union U1 **l_475 = &l_473;
                    union U1 ***l_477 = &l_474;
                    (*l_441) = (safe_mod_func_uint16_t_u_u((*l_2), func_20(&g_11, &l_2, (l_472 != (g_3 != (**l_462))), g_63.f1)));
                    (*l_475) = l_473;
                    (*l_477) = l_476;
                }
                else
                {
                    union U1 l_484 = {0x77L};
                    struct S0 l_485 = {-842,0x658CCEF0L,0,0,7281};
                    (*l_462) = l_478;
                    if ((((((g_63.f4 || (*l_441)) , (g_232.f0 == func_20(&g_133, ((g_63.f4 >= (g_3 | (safe_add_func_uint8_t_u_u(3UL, (*l_2))))) , &l_478), (**l_462), g_3))) > g_135.f0) , (void*)0) != (**g_301)))
                    {
                        (*l_2) = (*g_133);
                    }
                    else
                    {
                        struct S0 l_481 = {-507,0x7777DF0DL,-35,0,2892};
                        struct S0 *l_482 = &g_232;
                        (*l_482) = l_481;
                        (*l_2) = (**g_10);
                        (*l_482) = l_483;
                    }
                    if ((l_484 , ((l_485 , g_63.f2) < ((**l_462) < (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((*l_2), ((g_63.f2 & ((func_37(&g_133, ((**l_462) | g_63.f3)) >= l_485.f4) != 0x2F21586DL)) >= (*l_441)))), 0x17D47137L))))))
                    {
                        union U1 *l_496 = &g_135;
                        int **l_501 = &g_133;
                        l_504 = (((safe_add_func_uint8_t_u_u(0x88L, ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((void*)0 != &g_11), ((((g_232.f2 == 1L) , (((0UL >= (l_496 != &g_135)) != ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(func_37(func_4(g_3, l_501, (**l_501), (*g_10), l_502), l_503), g_232.f4)), 1)) , 0xF95CEEF5L)) == (-1L))) | l_485.f1) , l_485.f3))), g_63.f3)) >= 0x228AL))) & g_362) , l_485);
                        (**l_501) = ((safe_sub_func_int32_t_s_s(((l_462 != ((((safe_sub_func_int8_t_s_s((((safe_add_func_int16_t_s_s(g_63.f0, l_485.f2)) == (func_20(func_4(((((**l_501) , ((*g_133) , (*l_473))) , func_37(l_501, (safe_unary_minus_func_uint8_t_u((((18446744073709551614UL != (g_232.f1 && 0x3EL)) , 0xCBFD3EBC54D4B183LL) ^ g_232.f1))))) , (*l_441)), &g_11, (**l_462), (*l_462), l_512), l_501, (*l_441), l_484.f0) | 18446744073709551613UL)) ^ l_485.f2), (*l_441))) , 0xE7C8B4B6L) && 0x76CA7786L) , l_501)) , l_485.f2), 6L)) ^ (*l_2));
                    }
                    else
                    {
                        if (g_305)
                            goto lbl_513;
                        (*l_462) = (*g_10);
                        (*l_462) = l_478;
                        (*l_462) = l_2;
                    }
                }
                (*l_514) = l_504;
                for (l_436 = 13; (l_436 <= 47); l_436 = safe_add_func_uint16_t_u_u(l_436, 8))
                {
                    struct S0 l_522 = {-512,-4L,33,0,26578};
                    if ((*l_478))
                    {
                        unsigned long long l_517 = 0xA0A04C0176B23585LL;
                        (*g_10) = (((l_517 > func_37(&g_11, (*l_441))) > l_517) , l_518);
                        (*l_462) = (*l_462);
                    }
                    else
                    {
                        (*l_478) = (*l_478);
                        if (l_483.f1)
                            goto lbl_519;
                    }
                    for (l_423 = 0; (l_423 == 25); ++l_423)
                    {
                        int l_537 = 7L;
                        (*l_441) = (-6L);
                        (*l_518) = (((l_522 , (g_63.f4 == (*l_518))) >= g_305) ^ (safe_sub_func_uint8_t_u_u(3UL, (((*g_11) | (safe_rshift_func_int16_t_s_u((+(*l_478)), (safe_sub_func_int16_t_s_s((+(safe_add_func_int8_t_s_s(g_63.f4, ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((g_63.f0 ^ g_135.f0), l_537)), 5)), g_305)) > 0xC2D0D50689ADB737LL)))), 1L))))) != g_232.f4))));
                        l_539 = l_538;
                    }
                    return g_232.f4;
                }
                if (l_538.f1)
                    goto lbl_540;
            }
        }
    }
    for (g_63.f1 = (-30); (g_63.f1 < 11); g_63.f1 = safe_add_func_int32_t_s_s(g_63.f1, 7))
    {
        int **l_549 = &l_2;
        short l_551 = 0L;
        int *l_553 = &g_3;
        (*l_553) = (((g_128 , ((safe_sub_func_int16_t_s_s(g_305, g_63.f2)) , 0xFA2FD2BC6D8E6DC0LL)) & l_551) , g_232.f1);
        if ((*l_553))
            continue;
    }
    return g_232.f4;
}







static int ** func_4(unsigned p_5, int ** p_6, unsigned char p_7, int * p_8, long long p_9)
{
    int *l_409 = &g_305;
    long long l_410 = 0xF5D3B38D3C8C1363LL;
    unsigned l_411 = 18446744073709551615UL;
    (*p_6) = l_409;
    if (l_410)
    {
        (*l_409) = ((0x77A6A502L | l_411) > (~g_63.f0));
        return g_412;
    }
    else
    {
        union U1 *l_417 = &g_135;
        for (g_232.f1 = 14; (g_232.f1 == (-28)); g_232.f1 = safe_sub_func_uint32_t_u_u(g_232.f1, 6))
        {
            for (l_410 = 0; (l_410 == 21); l_410 = safe_add_func_uint64_t_u_u(l_410, 7))
            {
                union U1 *l_418 = &g_135;
                (*p_8) = (l_417 == l_418);
                if ((**g_10))
                    break;
            }
        }
        return &g_11;
    }
}







static unsigned short func_16(int ** p_17, int * p_18, int ** p_19)
{
    short l_393 = 0x3B8EL;
    union U1 l_398 = {0x33L};
    int *l_399 = (void*)0;
    char l_400 = (-1L);
    int l_401 = (-10L);
    l_401 = ((safe_mod_func_uint8_t_u_u((l_393 ^ (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_398 , g_232.f4), func_20(&p_18, &g_11, l_400, g_232.f0))), 3L))), 5UL)) || g_63.f3);
    for (g_63.f1 = (-21); (g_63.f1 != (-25)); --g_63.f1)
    {
        int l_404 = 0xA8D580E1L;
        union U1 **l_405 = (void*)0;
        union U1 *l_407 = (void*)0;
        union U1 **l_406 = &l_407;
        if (l_404)
            break;
        (*l_406) = (void*)0;
    }
    (*p_19) = (*p_17);
    return l_393;
}







static long long func_20(int ** p_21, int ** p_22, char p_23, short p_24)
{
    int **l_380 = (void*)0;
    struct S0 l_385 = {-610,0xB55635CDL,-1,1,14149};
    l_385.f2 = (**g_10);
    return g_3;
}







static int ** func_25(int * p_26, int * p_27)
{
    struct S0 l_238 = {-758,1L,38,0,25057};
    struct S0 l_239 = {-50,2L,32,0,4615};
    struct S0 *l_240 = &g_63;
    int **l_249 = &g_11;
    unsigned l_321 = 18446744073709551612UL;
    struct S0 *l_369 = &l_239;
lbl_253:
    l_239 = l_238;
    (*l_240) = l_239;
    if ((((void*)0 == g_241) <= ((safe_mul_func_int8_t_s_s(l_239.f3, (g_63.f1 ^ l_238.f2))) >= (0xAC12L >= l_238.f3))))
    {
        struct S0 l_245 = {-261,0L,-6,1,8454};
        short l_284 = 0xF354L;
        (*l_240) = l_245;
        for (l_239.f1 = 13; (l_239.f1 == 15); l_239.f1++)
        {
            struct S0 l_248 = {773,6L,6,0,7577};
            l_245 = l_248;
            if (((g_63.f3 & g_63.f0) == l_248.f3))
            {
                long long l_258 = 0x32A215982DFFE489LL;
                int *l_259 = (void*)0;
                if (l_248.f3)
                {
                    l_245.f2 = 3L;
                    return l_249;
                }
                else
                {
                    int *l_250 = &g_128;
                    (*l_250) = 0xA341D8F6L;
                    for (l_248.f1 = 0; (l_248.f1 >= 24); l_248.f1 = safe_add_func_uint64_t_u_u(l_248.f1, 5))
                    {
                        if (l_239.f1)
                            goto lbl_253;
                    }
                }
                for (g_232.f1 = 0; (g_232.f1 == 7); g_232.f1 = safe_add_func_int8_t_s_s(g_232.f1, 6))
                {
                    (*l_249) = (*g_10);
                    for (g_135.f1 = 7; (g_135.f1 == 3); g_135.f1 = safe_sub_func_uint16_t_u_u(g_135.f1, 6))
                    {
                        l_248 = l_248;
                        (*l_249) = func_42((*g_10));
                    }
                }
                if (l_258)
                    continue;
                l_259 = (*g_10);
            }
            else
            {
                struct S0 l_260 = {-237,0xF9C39E36L,-9,1,22199};
                int **l_261 = (void*)0;
                (**g_241) = &l_245;
                (***g_241) = l_260;
                return l_261;
            }
        }
        for (g_135.f0 = 0; (g_135.f0 < 5); g_135.f0++)
        {
            unsigned l_264 = 0x3D197994L;
            int **l_265 = (void*)0;
            unsigned long long l_268 = 0UL;
            struct S0 l_273 = {711,0x6A93C2C6L,-20,1,4588};
            unsigned short l_306 = 2UL;
        }
        (*l_240) = (*l_240);
    }
    else
    {
        struct S0 l_307 = {-418,-1L,-4,1,23140};
        struct S0 l_308 = {337,0L,-10,1,29677};
        int **l_314 = &g_133;
        union U1 *l_361 = &g_135;
        union U1 **l_360 = &l_361;
        (*l_240) = l_307;
        l_308 = l_307;
        for (g_135.f0 = 29; (g_135.f0 < 41); ++g_135.f0)
        {
            long long l_313 = 0x1E7944D6970CD732LL;
            int *l_315 = &g_305;
            (*l_315) = (g_135 , (g_135.f0 && ((l_313 , func_37((func_37(l_314, (((l_308 , ((l_315 != (void*)0) != (safe_mod_func_int16_t_s_s((-1L), ((safe_unary_minus_func_int8_t_s(1L)) & g_305))))) >= g_305) & (**l_249))) , &p_27), g_232.f0)) == (**l_249))));
            for (l_307.f1 = (-16); (l_307.f1 > (-15)); l_307.f1 = safe_add_func_uint32_t_u_u(l_307.f1, 6))
            {
                p_26 = p_27;
                return l_314;
            }
            (*g_10) = func_42((*g_10));
        }
        if (l_321)
        {
            char l_322 = 0x84L;
            union U1 l_323 = {8UL};
            unsigned l_324 = 4UL;
            int **l_325 = &g_11;
            int *l_352 = &g_305;
            struct S0 l_359 = {-60,-1L,-33,1,3040};
            if (((l_322 >= (g_63.f1 && (g_232.f3 != (0L | (func_37(func_32(((((*l_240) , (*p_26)) || ((l_323 , (0x97141C3CD1D03B48LL && func_37(func_32(((g_232.f0 , g_63.f1) , 0xFEA9L), g_232.f4), (**l_249)))) ^ 0x0D2DL)) < l_323.f0), g_232.f2), l_324) , g_63.f0))))) ^ g_232.f4))
            {
                int *l_326 = &g_305;
                int *l_341 = &g_128;
                l_326 = (*l_249);
                for (l_239.f1 = 0; (l_239.f1 >= (-13)); l_239.f1 = safe_sub_func_int8_t_s_s(l_239.f1, 7))
                {
                    unsigned long long l_338 = 0x0C32814F9EFFBC45LL;
                    (*l_314) = (*g_10);
                    if ((**l_314))
                        break;
                    if ((safe_mul_func_int8_t_s_s(((0xC6L != ((((safe_mul_func_int16_t_s_s(g_63.f2, (4294967295UL & (**l_314)))) == (**l_314)) & (**l_325)) && ((((g_232.f2 | 0xBE47L) && (func_37(&l_326, g_232.f3) >= (**l_325))) == g_63.f4) , (**l_325)))) || (**l_249)), g_3)))
                    {
                        int l_337 = 4L;
                        (*l_314) = ((func_37(&g_133, (((0x48FA9423L != (g_305 ^ (safe_lshift_func_int8_t_s_u(0x55L, (**l_249))))) > (**l_314)) < (g_3 || (func_37(&p_26, ((safe_mod_func_int32_t_s_s((((&g_242 != (void*)0) >= l_337) , (-9L)), (**l_325))) && l_338)) ^ l_337)))) != g_305) , (void*)0);
                        if (l_337)
                            break;
                    }
                    else
                    {
                        union U1 *l_339 = &l_323;
                        union U1 **l_340 = &l_339;
                        (*l_340) = l_339;
                    }
                    (*l_325) = (*l_249);
                }
                (*l_341) = (g_232.f2 , 0x8748EB94L);
            }
            else
            {
                int **l_342 = &g_11;
                (*l_314) = (*g_10);
                if (l_238.f3)
                    goto lbl_349;
lbl_349:
                for (g_128 = 17; (g_128 != (-16)); g_128 = safe_sub_func_uint8_t_u_u(g_128, 3))
                {
                    return &g_11;
                }
                return &g_11;
            }
            (*l_249) = func_44(g_63.f4);
            (*l_352) = (safe_rshift_func_uint16_t_u_s(g_63.f0, 0));
            for (g_128 = 0; (g_128 != (-21)); g_128 = safe_sub_func_int32_t_s_s(g_128, 9))
            {
                unsigned l_363 = 1UL;
                (*l_352) = func_37(((safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(g_232.f0, 0)) < 0UL), (g_63.f2 , (((l_359 , l_360) != g_193) || 5L)))) , &p_26), (((g_362 == l_363) && 3UL) , l_363));
            }
        }
        else
        {
            int **l_368 = (void*)0;
            int *l_372 = &g_128;
            int ***l_373 = &l_314;
            (*l_372) = (1L <= (((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(func_37(l_368, (**l_249)), 0UL)), (((l_369 != &l_307) != (safe_add_func_int8_t_s_s(g_63.f2, g_128))) != g_63.f2))) && (**l_249)) == g_63.f2));
            (*l_373) = &l_372;
        }
    }
    return &g_11;
}







static int * func_28(int ** p_29, unsigned short p_30, struct S0 p_31)
{
    struct S0 l_233 = {1009,0x0B164A0BL,14,1,31341};
    struct S0 l_234 = {42,0L,36,1,2497};
    int *l_235 = &g_3;
    int **l_237 = &g_133;
    int ***l_236 = &l_237;
    l_234 = l_233;
    (*p_29) = l_235;
    (*l_236) = (g_63.f0 , func_32((g_63.f1 < g_135.f0), (*l_235)));
    return (*p_29);
}







static int ** func_32(short p_33, unsigned p_34)
{
    struct S0 l_111 = {-434,7L,7,0,30485};
    int **l_122 = &g_11;
    int *l_127 = &g_128;
    union U1 *l_134 = &g_135;
    struct S0 **l_200 = &g_50;
    if ((~(safe_lshift_func_uint8_t_u_s(((l_111 , ((safe_mod_func_int8_t_s_s(g_63.f1, g_63.f4)) , (safe_lshift_func_uint16_t_u_u(((l_111.f4 != 255UL) <= 0x13D8L), 3)))) == (p_33 == (safe_lshift_func_uint16_t_u_s((((safe_mod_func_int64_t_s_s((l_111.f1 != (((safe_sub_func_int64_t_s_s(((&g_11 == l_122) < p_33), p_34)) || g_3) ^ 0x10A7L)), (**l_122))) || (**g_10)) , 1UL), 14)))), 1))))
    {
        int *l_123 = &g_3;
        int **l_124 = (void*)0;
        int **l_125 = (void*)0;
        int **l_126 = &l_123;
        (*l_126) = func_42(l_123);
        l_127 = (*g_10);
        g_63.f0 = ((**l_126) ^ 1L);
    }
    else
    {
        struct S0 l_150 = {87,0xCCA947FBL,-12,1,16068};
        int **l_163 = &l_127;
        int l_195 = 0x269D596BL;
        union U1 *l_196 = &g_135;
        union U1 **l_221 = &l_196;
        for (g_63.f1 = (-27); (g_63.f1 != (-23)); ++g_63.f1)
        {
            struct S0 *l_148 = &g_63;
            union U1 **l_151 = &l_134;
            int l_154 = 0x7A824672L;
            int **l_184 = &l_127;
            for (l_111.f1 = 0; (l_111.f1 >= 24); l_111.f1++)
            {
                union U1 **l_136 = &l_134;
                g_133 = (void*)0;
                if (p_33)
                    break;
                (*l_136) = l_134;
            }
            for (l_111.f1 = 0; (l_111.f1 <= (-1)); l_111.f1 = safe_sub_func_uint8_t_u_u(l_111.f1, 5))
            {
                unsigned char l_139 = 0x4BL;
                union U1 l_144 = {0xB2L};
                struct S0 l_145 = {-557,-5L,-24,1,692};
                (*l_127) = (0x7EL || g_63.f4);
                if (l_139)
                    break;
                for (l_139 = 0; (l_139 <= 36); l_139++)
                {
                    struct S0 **l_149 = &g_50;
                    (*l_149) = ((safe_lshift_func_uint8_t_u_u(p_33, ((l_144 , l_145) , (safe_lshift_func_uint16_t_u_s(g_63.f3, l_139))))) , l_148);
                    l_150 = l_150;
                }
            }
            (*l_151) = (void*)0;
            for (g_135.f0 = 14; (g_135.f0 < 58); ++g_135.f0)
            {
                unsigned l_158 = 1UL;
                struct S0 l_164 = {-217,9L,-22,1,24654};
                int *l_165 = &g_3;
                l_154 = p_34;
            }
        }
        for (p_33 = 0; (p_33 != 29); p_33 = safe_add_func_int8_t_s_s(p_33, 8))
        {
            unsigned char l_194 = 0UL;
            union U1 *l_197 = &g_135;
            (**l_163) = (((((safe_unary_minus_func_uint16_t_u(((p_34 ^ ((safe_rshift_func_uint16_t_u_s(0x55D2L, 2)) & ((safe_mod_func_int8_t_s_s((((0xE04BL ^ g_63.f3) > (g_193 != (g_135 , &l_134))) ^ (**l_163)), l_194)) , l_195))) != g_63.f2))) <= g_135.f0) != g_63.f1) , l_196) == l_197);
        }
        for (p_34 = (-13); (p_34 == 3); p_34 = safe_add_func_uint8_t_u_u(p_34, 4))
        {
            struct S0 ***l_201 = &l_200;
            int l_212 = 0x0673AD30L;
            (*l_201) = l_200;
            for (l_195 = 0; (l_195 >= (-21)); l_195 = safe_sub_func_int64_t_s_s(l_195, 1))
            {
                unsigned long long l_204 = 0xB0543B0378A5466BLL;
                int *l_214 = &l_212;
                char l_230 = (-1L);
            }
        }
        (*l_163) = (*g_10);
    }
    return &g_133;
}







static char func_37(int ** p_38, unsigned long long p_39)
{
    int *l_107 = &g_3;
    int **l_106 = &l_107;
    (*l_106) = func_42(func_44((safe_rshift_func_int16_t_s_u(g_3, 5))));
    return g_63.f3;
}







static int * func_42(int * p_43)
{
    struct S0 **l_51 = &g_50;
    int l_52 = 0L;
    unsigned short l_69 = 0x9583L;
    int l_82 = (-3L);
    (*l_51) = g_50;
    if (((l_52 ^ (safe_mod_func_int16_t_s_s(l_52, g_3))) == g_3))
    {
        int *l_55 = &l_52;
        struct S0 **l_66 = &g_50;
        long long l_72 = 0L;
        short l_97 = 0x8B43L;
        struct S0 l_101 = {-663,0x1DE00DC0L,22,0,31358};
        (*l_55) = 6L;
        if (((safe_sub_func_int64_t_s_s((l_52 , (safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((g_63 , (((l_52 || (safe_add_func_int32_t_s_s(((l_66 != ((safe_mod_func_uint16_t_u_u((0x80DD333FL || (l_69 >= (((safe_add_func_uint8_t_u_u(l_69, (&g_11 == (void*)0))) >= g_3) || 0x61F9DA978833E6FCLL))), (*l_55))) , &g_50)) | g_63.f3), l_52))) , l_72) ^ (*l_55))), 2)) < g_3), (-10L)))))), g_3)) & (-5L)))
        {
            return p_43;
        }
        else
        {
            unsigned l_91 = 0xA4789C29L;
            int *l_100 = (void*)0;
            for (l_52 = (-17); (l_52 > (-22)); --l_52)
            {
                unsigned long long l_81 = 0x9E6156CF859E2267LL;
                long long l_94 = 0x16B7C5EFF0D54DF9LL;
                l_82 = ((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(g_63.f1, 249UL)), (safe_lshift_func_int8_t_s_s(0x24L, 3)))) < (l_69 == l_81));
                for (g_63.f1 = 24; (g_63.f1 < 10); g_63.f1--)
                {
                    int **l_85 = &l_55;
                    struct S0 *l_86 = &g_63;
                    (*l_85) = (*g_10);
                    (*l_66) = l_86;
                    if ((+(!(safe_sub_func_uint32_t_u_u(((g_63.f1 == (((safe_lshift_func_uint8_t_u_s(l_91, 6)) , g_63.f0) || (((l_94 > ((l_69 < 0x8DL) != ((safe_rshift_func_int16_t_s_s(g_63.f0, 12)) & l_97))) || (((l_82 <= 0x75C22552L) || g_63.f3) == (**l_85))) & l_81))) < g_63.f1), l_91)))))
                    {
                        int *l_98 = &l_82;
                        (*l_98) = l_81;
                    }
                    else
                    {
                        unsigned char l_99 = 0xC3L;
                        (*l_85) = func_44(l_99);
                        l_100 = (*g_10);
                        l_101 = (*g_50);
                        l_55 = func_44((**l_85));
                    }
                }
                if ((*g_11))
                    break;
            }
        }
        (*l_66) = &g_63;
        l_52 = (*p_43);
    }
    else
    {
        int *l_104 = &l_52;
        int **l_103 = &l_104;
        int *l_105 = &l_82;
        (*l_103) = func_44((safe_unary_minus_func_uint16_t_u(l_52)));
        (*l_105) = 3L;
    }
    return (*g_10);
}







static int * func_44(long long p_45)
{
    int *l_48 = (void*)0;
    int **l_49 = &l_48;
    (*l_49) = l_48;
    (*l_49) = (*l_49);
    return (*g_10);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_63.f1, "g_63.f1", print_hash_value);
    transparent_crc(g_63.f2, "g_63.f2", print_hash_value);
    transparent_crc(g_63.f3, "g_63.f3", print_hash_value);
    transparent_crc(g_63.f4, "g_63.f4", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_135.f0, "g_135.f0", print_hash_value);
    transparent_crc(g_232.f0, "g_232.f0", print_hash_value);
    transparent_crc(g_232.f1, "g_232.f1", print_hash_value);
    transparent_crc(g_232.f2, "g_232.f2", print_hash_value);
    transparent_crc(g_232.f3, "g_232.f3", print_hash_value);
    transparent_crc(g_232.f4, "g_232.f4", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
