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
   unsigned char f0;
   signed f1 : 26;
   char f2;
   unsigned short f3;
   short f4;
   int f5;
   int f6;
   unsigned short f7;
};

union U1 {
   char f0;
};

union U2 {
   char * f0;
   int f1;
   unsigned char f2;
   unsigned f3;
};


static unsigned g_8 = 0xEFB6F65EL;
static char g_19 = 3L;
static unsigned short g_42 = 0x8216L;
static struct S0 g_53 = {0xEBL,-1619,-4L,1UL,0L,1L,0xA79815C8L,1UL};
static unsigned short *g_73 = &g_53.f3;
static unsigned short **g_72 = &g_73;
static int *g_101 = &g_53.f5;
static union U2 g_105 = {0};
static union U2 *g_104 = &g_105;
static unsigned char g_136 = 0x8CL;
static union U1 g_140 = {0x89L};
static unsigned **g_145 = (void*)0;
static unsigned g_167 = 0xF82D9EA5L;
static char *g_168 = (void*)0;
static struct S0 *g_274 = &g_53;
static struct S0 **g_273 = &g_274;
static short *g_326 = &g_53.f4;
static short **g_325 = &g_326;
static short g_354 = 0x01A6L;
static unsigned g_361 = 0UL;
static int *g_380 = (void*)0;
static union U1 g_433 = {1L};
static struct S0 g_493 = {0UL,-7483,-9L,0UL,0x8711L,-3L,0x2CAEB7DDL,0x1A5BL};



static unsigned char func_1(void);
static union U2 func_9(char * p_10, int p_11, char * p_12, union U1 p_13, char * p_14);
static char * func_15(char * p_16, unsigned * p_17);
static unsigned * func_20(unsigned p_21);
static struct S0 func_22(unsigned * p_23, struct S0 p_24, struct S0 p_25, union U2 p_26);
static unsigned * func_27(char p_28, unsigned short p_29, unsigned * p_30, char * p_31, short p_32);
static short func_35(int p_36);
static struct S0 func_43(unsigned short p_44, struct S0 p_45);
static unsigned ** func_48(unsigned short p_49);
static unsigned short ** func_50(unsigned short * p_51);
static unsigned char func_1(void)
{
    unsigned *l_7 = &g_8;
    char *l_18 = &g_19;
    int l_432 = (-9L);
    unsigned char *l_440 = &g_136;
    int *l_441 = &l_432;
    unsigned l_451 = 0xB67C9178L;
    unsigned char l_488 = 0x63L;
    unsigned char *l_496 = &g_53.f0;
    unsigned char **l_497 = &l_440;
    unsigned short *l_502 = &g_42;
    unsigned short *l_503 = &g_493.f7;
    (*l_441) = (safe_mod_func_uint32_t_u_u(5UL, (safe_unary_minus_func_int16_t_s((safe_lshift_func_uint8_t_u_u(((*l_440) = ((((*l_7) = 0UL) , (func_9(func_15(l_18, func_20(g_19)), l_432, g_168, g_433, l_18) , l_432)) >= 65535UL)), 0))))));
    for (g_354 = 11; (g_354 <= 17); g_354++)
    {
        union U2 l_447 = {0};
        struct S0 l_453 = {0UL,7937,-1L,0x9846L,-1L,-1L,-1L,0x4455L};
        char **l_455 = &g_168;
        int *l_478 = (void*)0;
        for (g_53.f6 = 0; (g_53.f6 == (-20)); --g_53.f6)
        {
            unsigned short l_446 = 0UL;
            unsigned short **l_448 = &g_73;
            unsigned *l_452 = &g_167;
            char **l_454 = &l_18;
            int *l_479 = &g_105.f1;
            int *l_480 = &l_453.f5;
            (*l_441) = (func_35(((((l_446 | ((l_447 , ((*g_274) , l_448)) == (((*g_326) & ((g_140 , (safe_lshift_func_int8_t_s_u((l_451 && l_446), ((func_22(l_452, l_453, (*g_274), (*g_104)) , 4294967295UL) , 0x55L)))) , l_453.f0)) , &g_73))) & l_446) , l_454) != l_455)) && 0xFBE1L);
            for (g_53.f4 = 25; (g_53.f4 == 28); ++g_53.f4)
            {
                int **l_463 = (void*)0;
                int *l_464 = &l_447.f1;
                unsigned char l_474 = 0xA5L;
                for (l_453.f2 = (-17); (l_453.f2 < (-20)); l_453.f2 = safe_sub_func_int16_t_s_s(l_453.f2, 8))
                {
                    for (l_453.f6 = 22; (l_453.f6 >= (-21)); l_453.f6 = safe_sub_func_uint16_t_u_u(l_453.f6, 2))
                    {
                        int l_462 = (-1L);
                        return l_462;
                    }
                }
                l_464 = g_380;
                for (g_433.f0 = 0; (g_433.f0 < (-23)); g_433.f0--)
                {
                    unsigned short l_469 = 0xF13CL;
                    int **l_482 = &l_479;
                }
            }
            (*l_480) = (safe_unary_minus_func_int8_t_s(((safe_div_func_int16_t_s_s(0x97F1L, ((safe_div_func_uint16_t_u_u(l_488, 65535UL)) & (((safe_rshift_func_int8_t_s_s(0x09L, ((**l_454) = 5L))) | (*g_73)) | (((**g_325) | (*l_441)) > (safe_rshift_func_int8_t_s_s(func_35((*l_480)), 4))))))) , (*l_480))));
            g_493 = (**g_273);
        }
    }
    g_380 = &l_432;
    return g_493.f1;
}







static union U2 func_9(char * p_10, int p_11, char * p_12, union U1 p_13, char * p_14)
{
    char l_434 = (-1L);
    union U1 **l_435 = (void*)0;
    union U1 *l_437 = &g_140;
    union U1 **l_436 = &l_437;
    int **l_438 = &g_101;
    union U2 l_439 = {0};
    (*l_436) = ((l_434 != 4294967286UL) , (func_35(l_434) , &p_13));
    (*l_438) = &p_11;
    (*l_436) = &g_140;
    return l_439;
}







static char * func_15(char * p_16, unsigned * p_17)
{
    short l_310 = 3L;
    unsigned l_324 = 0x969002E6L;
    struct S0 ***l_329 = &g_273;
    short l_347 = (-1L);
    unsigned char l_367 = 0x5AL;
    int l_394 = 0xA04AF344L;
    struct S0 l_403 = {0x5FL,-71,-3L,65526UL,8L,0x3A90A004L,-9L,0xD88FL};
    union U2 **l_409 = &g_104;
    int **l_417 = &g_380;
    int ***l_418 = &l_417;
    unsigned l_426 = 0x1CDF8BA9L;
    int l_429 = 0x062F8696L;
    int *l_430 = &g_53.f5;
    char *l_431 = &g_140.f0;
    for (g_53.f7 = 0; (g_53.f7 != 53); g_53.f7 = safe_add_func_int32_t_s_s(g_53.f7, 2))
    {
        struct S0 l_316 = {0xFEL,3800,0xEBL,65527UL,0x85D3L,0x32D980EBL,0L,0x39F9L};
        unsigned l_342 = 0x3740F907L;
        union U2 l_346 = {0};
        union U1 l_374 = {0xDAL};
        int *l_416 = &g_53.f5;
        if ((func_35(l_310) | ((safe_rshift_func_int16_t_s_s(0x0D3AL, l_310)) >= l_310)))
        {
            int l_313 = 0x470504D8L;
            char **l_315 = &g_168;
            char ***l_314 = &l_315;
            struct S0 *l_317 = &l_316;
            int **l_318 = &g_101;
            (*l_314) = (func_35((0xBC701F63L != func_35(l_313))) , &p_16);
            (*l_317) = l_316;
            (*l_318) = (((void*)0 == &g_104) , (void*)0);
            l_313 = l_316.f7;
        }
        else
        {
            int *l_319 = &l_316.f5;
            int **l_320 = (void*)0;
            int **l_321 = &g_101;
            (*l_321) = l_319;
        }
        if (l_310)
        {
            short *l_322 = &l_310;
            int l_323 = 0L;
            struct S0 l_344 = {0x54L,5711,0x06L,0x365FL,0x046AL,0xE6C3D03FL,0x22C635EDL,65535UL};
            if (((((void*)0 == l_322) , ((func_35(l_323) < l_323) , (l_324 < ((void*)0 != g_325)))) <= (((((safe_rshift_func_uint16_t_u_u((**g_72), 4)) != 0xACFCL) >= l_316.f4) , &g_19) != p_16)))
            {
                short l_343 = (-1L);
                unsigned char *l_345 = &g_53.f0;
                int *l_348 = &l_346.f1;
                (*l_348) = (((void*)0 != l_329) , (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_342 != ((*g_73) = l_316.f7)), func_35((((func_35(l_343) , l_344) , 0L) != (((((*l_345) = l_316.f3) ^ 254UL) , l_346) , l_343))))), l_347)), (*p_16))), l_342)), l_344.f7)) <= 0x3FEB27B6L), (*p_16))));
            }
            else
            {
                short l_351 = 0x8C19L;
                char **l_360 = (void*)0;
                char ***l_359 = &l_360;
                int *l_362 = &l_316.f5;
                if ((safe_mod_func_int16_t_s_s(((((l_351 & (safe_add_func_uint32_t_u_u(g_354, ((((**g_72) = 1UL) , func_35((((l_316.f3 < 0xB0L) ^ l_316.f0) ^ ((((*l_362) = (((((safe_lshift_func_int16_t_s_u(((*p_16) == (((*l_359) = &p_16) != (void*)0)), 6)) , 0x8838779DL) ^ 0L) , g_361) , l_351)) , 0x4DL) | l_344.f5)))) >= l_351)))) , l_316.f7) > (*p_16)) | l_316.f0), 0x7D4FL)))
                {
                    int **l_363 = &l_362;
                    (*l_363) = (void*)0;
                }
                else
                {
                    struct S0 *l_364 = &l_316;
                    l_344 = ((*l_364) = (***l_329));
                    if ((safe_div_func_uint32_t_u_u(((*p_17) = 0xEE0FCA21L), 0x1AED80D3L)))
                    {
                        (*l_362) = l_347;
                        (*l_362) = l_367;
                    }
                    else
                    {
                        union U1 **l_375 = (void*)0;
                        union U1 **l_376 = (void*)0;
                        union U1 **l_377 = (void*)0;
                        union U1 *l_379 = &g_140;
                        union U1 **l_378 = &l_379;
                        int **l_381 = &g_101;
                        (*l_378) = ((((((*p_16) || ((*p_16) = 0xE9L)) , (safe_sub_func_int8_t_s_s(((0UL <= (l_344.f5 = ((g_53.f5 < (safe_lshift_func_int16_t_s_u(1L, 2))) <= ((*g_104) , ((void*)0 == &g_101))))) != (-4L)), 7UL))) == (*p_17)) , l_374) , &g_140);
                        (*l_381) = g_380;
                    }
                    for (g_167 = 0; (g_167 < 57); ++g_167)
                    {
                        int **l_384 = &g_101;
                        (*l_384) = g_380;
                        (*l_384) = (g_140 , g_380);
                        l_323 = l_367;
                    }
                }
                for (g_361 = 5; (g_361 != 7); g_361 = safe_add_func_uint32_t_u_u(g_361, 5))
                {
                    unsigned char l_391 = 0xD5L;
                    unsigned char l_400 = 255UL;
                    if ((l_316.f3 , (safe_div_func_int32_t_s_s(1L, (safe_add_func_int8_t_s_s((l_323 == ((*p_17) < (+l_391))), (((((*g_73) = l_344.f1) <= func_35(((safe_lshift_func_uint16_t_u_s((g_19 , 65527UL), (l_316.f3 && 0x6F5AD84EL))) , l_316.f6))) < l_344.f3) , l_367)))))))
                    {
                        return p_16;
                    }
                    else
                    {
                        int **l_395 = &g_380;
                        l_394 = (l_391 <= (**g_72));
                        (*l_395) = p_17;
                        if (l_391)
                            continue;
                        (*g_380) = (((***l_359) = (((func_35(l_351) | (safe_div_func_uint32_t_u_u(((((*g_326) >= ((safe_lshift_func_int8_t_s_u(0xD8L, (+g_53.f7))) <= (**g_72))) != (l_400 >= (**l_395))) ^ ((*p_16) ^ (*p_16))), l_400))) == l_344.f2) >= 0UL)) || 255UL);
                    }
                    return &g_19;
                }
            }
        }
        else
        {
            unsigned l_401 = 4294967295UL;
            int l_402 = 0xCEE99220L;
            unsigned char *l_408 = &l_316.f0;
            int *l_412 = &l_402;
            struct S0 l_413 = {0x3CL,-289,0x9DL,65528UL,0L,0xEF595A54L,0x1154DA2DL,0x2E82L};
            l_402 = l_401;
            l_403 = (***l_329);
            if ((func_35(((l_316.f4 , l_409) == (((*p_16) = (*p_16)) , l_409))) || (*p_17)))
            {
                struct S0 **l_411 = &g_274;
                struct S0 ***l_410 = &l_411;
                (*l_410) = ((*l_329) = (*l_329));
                if (l_401)
                    break;
            }
            else
            {
                l_412 = g_380;
                if (g_8)
                    continue;
            }
            l_413 = (*g_274);
        }
        (*l_416) = (safe_mod_func_int8_t_s_s((l_403.f1 = 0x4BL), (((*g_326) >= 0L) & l_316.f0)));
        if (l_403.f2)
            break;
    }
    (*l_418) = l_417;
    (*l_430) = (g_140.f0 , (safe_sub_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(((safe_sub_func_uint16_t_u_u(((*g_73) = func_35(g_53.f0)), ((*g_326) = ((((**g_325) >= ((safe_sub_func_int8_t_s_s((g_53.f0 > (*p_17)), g_42)) == ((l_426 , (safe_lshift_func_uint8_t_u_s((g_105 , l_429), 0))) || 0x330AEA5CL))) || (*p_17)) < (**g_325))))) == g_19))), g_361)));
    return l_431;
}







static unsigned * func_20(unsigned p_21)
{
    unsigned short *l_41 = &g_42;
    int l_46 = (-1L);
    struct S0 l_47 = {0x81L,3007,-2L,0x73C9L,0x681CL,0x7F5E1753L,-7L,0x7A83L};
    unsigned char *l_161 = &l_47.f0;
    char *l_162 = &g_140.f0;
    short *l_163 = &l_47.f4;
    unsigned *l_166 = &g_167;
    struct S0 l_279 = {255UL,5808,0x5AL,65527UL,0L,0x1698BB56L,1L,65535UL};
    union U2 l_280 = {0};
    union U1 l_284 = {0L};
    union U1 l_295 = {1L};
    int *l_296 = &l_47.f5;
    int *l_297 = &g_53.f5;
    int **l_307 = &l_296;
    (*g_274) = func_22(func_27(((*l_162) = (safe_add_func_int16_t_s_s(((*l_163) = (l_46 = func_35(((safe_sub_func_uint16_t_u_u(((*l_41) = (+(safe_rshift_func_int16_t_s_s(((void*)0 != &g_19), p_21)))), (func_43((g_8 , l_46), l_47) , (((*l_163) = (safe_rshift_func_int8_t_s_s((l_47.f4 , ((*l_162) = (safe_lshift_func_uint16_t_u_u((l_161 == &g_136), p_21)))), l_47.f1))) > (**g_72))))) == 0UL)))), 0x9FEAL))), l_47.f7, l_166, g_168, g_167), l_279, l_279, l_280);
    if ((l_284 , ((*l_297) = (safe_rshift_func_uint8_t_u_u(l_47.f0, (safe_lshift_func_uint8_t_u_s(0xF8L, (safe_mod_func_int32_t_s_s(((*l_296) = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(func_35((p_21 && (l_295 , (+l_279.f3)))), (g_8 <= 4294967294UL))), 3))), g_53.f0)))))))))
    {
        unsigned *l_298 = &g_8;
        return l_298;
    }
    else
    {
        char **l_299 = &l_162;
        struct S0 l_300 = {0UL,311,1L,65535UL,0xB666L,8L,9L,0x5240L};
        int *l_301 = &l_46;
        int **l_302 = &l_297;
        (*l_296) = ((((*l_296) && (&g_168 == l_299)) , l_300) , ((void*)0 == l_41));
        (*l_302) = l_301;
    }
    (*l_307) = func_27((((safe_add_func_uint32_t_u_u((*l_296), p_21)) & (*l_297)) == p_21), (**g_72), l_296, l_161, ((!(safe_mod_func_uint8_t_u_u(p_21, (((((*l_41) = (*l_297)) , (*l_297)) & (-2L)) ^ 0x8631L)))) <= 0xC434FA47L));
    return &g_8;
}







static struct S0 func_22(unsigned * p_23, struct S0 p_24, struct S0 p_25, union U2 p_26)
{
    union U2 **l_281 = (void*)0;
    union U2 **l_282 = &g_104;
    struct S0 l_283 = {249UL,-1572,0x08L,0x3F9BL,-10L,0xEB692A35L,0xD498468CL,0UL};
    (*l_282) = (void*)0;
    return l_283;
}







static unsigned * func_27(char p_28, unsigned short p_29, unsigned * p_30, char * p_31, short p_32)
{
    unsigned l_171 = 0x01F13292L;
    union U1 l_177 = {0L};
    int *l_275 = &g_53.f5;
    int *l_276 = &g_105.f1;
    for (p_28 = 0; (p_28 == (-15)); p_28--)
    {
        short *l_173 = (void*)0;
        short **l_172 = &l_173;
        short **l_176 = &l_173;
        char l_205 = 0L;
        if (l_171)
            break;
        if (l_171)
            continue;
        if ((l_171 != p_29))
        {
            short ***l_174 = (void*)0;
            short ***l_175 = &l_172;
            int l_180 = 2L;
            union U1 *l_185 = &g_140;
            if ((((*l_175) = l_172) != (l_176 = &l_173)))
            {
                union U2 l_181 = {0};
                int *l_182 = (void*)0;
                int *l_183 = &g_53.f5;
                int *l_184 = &l_180;
                union U1 **l_186 = &l_185;
                union U1 *l_188 = &l_177;
                union U1 **l_187 = &l_188;
                (*l_184) = ((*l_183) = ((l_177 , (safe_mod_func_uint8_t_u_u(l_180, 0xE5L))) == ((*g_73) <= ((g_53.f4 = (l_181 , (g_53.f1 < (g_53.f5 , (l_180 , ((*p_30) != p_28)))))) && 0xF914L))));
                (*l_187) = ((*l_186) = l_185);
            }
            else
            {
                unsigned l_195 = 1UL;
                int l_196 = 0xF309D661L;
                g_53.f5 = (safe_rshift_func_int8_t_s_s((l_196 = (safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u(func_35(func_35(l_195)), g_19)) ^ (*p_30)), 10))), (g_53.f2 ^ (safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s((((!(((p_28 || (*p_30)) <= ((safe_sub_func_int32_t_s_s(g_53.f4, g_53.f5)) & 5UL)) && 0x1407L)) || p_28) > g_53.f7), 0xFC55L)), 0x8FL)))));
                g_53.f5 = p_28;
            }
        }
        else
        {
            int *l_218 = &g_53.f5;
            char **l_222 = &g_168;
            unsigned ***l_250 = &g_145;
            if ((safe_div_func_uint32_t_u_u(0UL, l_177.f0)))
            {
                int *l_206 = &g_105.f1;
                unsigned l_214 = 4294967287UL;
                short *l_215 = &g_53.f4;
                struct S0 *l_220 = &g_53;
                struct S0 **l_219 = &l_220;
                if (((*l_206) = (l_205 = p_32)))
                {
                    short l_207 = 0x1E2AL;
                    (*l_206) = ((g_105.f3 & l_207) ^ func_35(p_32));
                }
                else
                {
                    return &g_8;
                }
                if ((9L > (((((*l_215) = ((*p_30) , ((&l_177 != &g_140) ^ ((*g_73) <= (safe_add_func_uint32_t_u_u(((g_136 > 255UL) > ((safe_sub_func_uint32_t_u_u((*p_30), ((((*p_30) < l_214) != 0xE485L) | g_53.f6))) > g_105.f3)), p_32)))))) > (*l_206)) ^ 0xA1L) <= g_105.f1)))
                {
                    int *l_216 = &g_53.f5;
                    int **l_217 = &g_101;
                    struct S0 ***l_221 = &l_219;
                    l_218 = ((*l_217) = l_216);
                    (*l_216) = func_35((((*l_221) = l_219) == &l_220));
                }
                else
                {
                    if (p_28)
                    {
                        char ***l_223 = &l_222;
                        int **l_224 = &l_218;
                        int **l_225 = &l_206;
                        struct S0 l_226 = {7UL,2668,0xDEL,0x7700L,0x42C7L,0xBDD419D4L,0xE565183DL,0x78F4L};
                        (*l_223) = l_222;
                        (*l_225) = ((*l_224) = p_30);
                        (**l_219) = l_226;
                        (**l_224) = (safe_add_func_uint8_t_u_u(0UL, (l_205 & (safe_sub_func_uint16_t_u_u(65535UL, ((((safe_lshift_func_int8_t_s_s(((+0x89L) & (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((l_177.f0 != p_28), 4)), 5))), (safe_rshift_func_uint8_t_u_u((*l_218), 7)))) != ((safe_lshift_func_uint16_t_u_s((((*l_215) = ((0x1803D160L >= p_32) , 4L)) | (*l_218)), p_29)) > (**l_225))) | (-1L)) , p_28))))));
                    }
                    else
                    {
                        unsigned char *l_241 = &g_105.f2;
                        (*l_218) = g_53.f0;
                        (*l_218) = ((((g_53.f0 = ((*l_241) = g_53.f2)) | l_171) , g_19) ^ ((((((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(0xABL, l_205)), 0x4C20L)) > (((safe_rshift_func_int16_t_s_s(l_205, ((void*)0 == l_250))) > (*l_218)) > (*l_218))) < 0xD2L) > l_205) > 65535UL) > p_32));
                        (*l_219) = &g_53;
                    }
                }
                for (g_53.f4 = 8; (g_53.f4 <= (-22)); g_53.f4 = safe_sub_func_int16_t_s_s(g_53.f4, 8))
                {
                    return p_30;
                }
            }
            else
            {
                int l_264 = 1L;
                int **l_266 = &g_101;
                if ((safe_add_func_uint8_t_u_u(g_53.f4, ((*g_73) , g_53.f3))))
                {
                    struct S0 *l_255 = &g_53;
                    union U2 **l_256 = &g_104;
                    (*l_255) = g_53;
                    (*l_256) = &g_105;
                }
                else
                {
                    unsigned char l_259 = 254UL;
                    int **l_265 = &g_101;
                    (*l_218) = ((safe_add_func_uint32_t_u_u((*p_30), l_259)) , (safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(l_205, 4294967295UL)), l_177.f0)));
                    if (l_264)
                        break;
                    (*l_265) = p_30;
                }
                (*l_266) = &l_264;
                (*l_266) = (*l_266);
            }
        }
    }
    (*l_276) = ((*l_275) = func_35(((*l_275) = (safe_div_func_uint8_t_u_u(l_177.f0, func_35(((safe_lshift_func_uint16_t_u_u(((**g_72) = 0UL), l_171)) , (safe_mul_func_uint16_t_u_u(0x7E57L, ((void*)0 != g_273))))))))));
    (*l_275) = (safe_sub_func_uint16_t_u_u((*l_275), (*l_276)));
    return l_276;
}







static short func_35(int p_36)
{
    int **l_164 = &g_101;
    union U2 **l_165 = &g_104;
    (*l_164) = (void*)0;
    (*l_164) = &p_36;
    (*l_165) = &g_105;
    return g_53.f5;
}







static struct S0 func_43(unsigned short p_44, struct S0 p_45)
{
    union U1 l_151 = {-8L};
    int *l_155 = &g_53.f5;
    struct S0 l_156 = {0x38L,4835,0x25L,0x9EFAL,0xE0CCL,-8L,6L,0x314CL};
    if (p_45.f2)
    {
        unsigned ***l_146 = &g_145;
        unsigned *l_148 = &g_8;
        unsigned **l_147 = &l_148;
        int **l_149 = (void*)0;
        int **l_150 = &g_101;
        l_147 = ((*l_146) = func_48(g_8));
        (*l_150) = g_101;
    }
    else
    {
        short *l_154 = &g_53.f4;
        short **l_153 = &l_154;
        short ***l_152 = &l_153;
        (*l_152) = (l_151 , (void*)0);
        g_101 = l_155;
    }
    return l_156;
}







static unsigned ** func_48(unsigned short p_49)
{
    unsigned short ***l_142 = &g_72;
    unsigned *l_144 = (void*)0;
    unsigned **l_143 = &l_144;
    (*l_142) = func_50(&p_49);
    return g_145;
}







static unsigned short ** func_50(unsigned short * p_51)
{
    int l_52 = 0x0438315EL;
    int *l_100 = &g_53.f5;
    unsigned *l_126 = (void*)0;
    unsigned **l_125 = &l_126;
    int **l_130 = &l_100;
    unsigned char *l_131 = &g_53.f0;
    unsigned *l_132 = &g_105.f3;
    unsigned char *l_135 = &g_136;
    union U1 *l_139 = &g_140;
    union U1 **l_141 = &l_139;
    if (l_52)
    {
        char l_61 = (-1L);
        union U1 l_64 = {0xDFL};
        int *l_69 = &g_53.f5;
        if ((g_19 || 0xFF16CE65L))
        {
            struct S0 *l_54 = &g_53;
            (*l_54) = g_53;
        }
        else
        {
            unsigned char l_65 = 0x5DL;
            int *l_68 = &g_53.f5;
            (*l_68) = (g_19 != ((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_52, (!(0UL & ((l_52 && (l_61 ^ (safe_lshift_func_uint8_t_u_u((l_64 , l_65), 5)))) != (safe_rshift_func_uint16_t_u_u(l_52, 4))))))), l_52)) || 1L), 10)) >= l_65));
        }
        l_69 = l_69;
        for (g_53.f5 = 16; (g_53.f5 >= (-8)); g_53.f5 = safe_sub_func_int32_t_s_s(g_53.f5, 5))
        {
            return g_72;
        }
    }
    else
    {
        char l_74 = 0x19L;
        struct S0 *l_80 = &g_53;
        int l_84 = 0xE1234CD2L;
        short *l_103 = &g_53.f4;
        int **l_124 = &g_101;
        unsigned ***l_127 = &l_125;
        unsigned **l_129 = &l_126;
        unsigned ***l_128 = &l_129;
        if (l_74)
        {
            struct S0 *l_77 = &g_53;
            struct S0 **l_78 = (void*)0;
            struct S0 **l_79 = &l_77;
            int l_81 = 0L;
            unsigned *l_87 = &g_8;
            short *l_92 = &g_53.f4;
            int *l_93 = &g_53.f5;
            (*l_93) = ((safe_lshift_func_uint8_t_u_s((((*l_79) = l_77) == l_80), l_81)) >= ((safe_div_func_int32_t_s_s((l_74 , (((l_84 = l_81) > (safe_add_func_uint32_t_u_u(((*l_87) = l_74), (safe_add_func_uint16_t_u_u(l_52, ((*l_92) = (safe_add_func_uint32_t_u_u(0x7E2F045CL, ((*g_73) , l_74))))))))) || 0x23EAL)), g_53.f7)) == 1UL));
            for (g_19 = (-12); (g_19 < 12); g_19++)
            {
                int **l_96 = &l_93;
                (*l_96) = &l_81;
                (*l_80) = (*l_77);
                (*l_96) = (*l_96);
            }
        }
        else
        {
            int *l_99 = &g_53.f5;
            union U2 *l_107 = &g_105;
            if ((safe_sub_func_uint32_t_u_u(g_53.f2, g_53.f2)))
            {
                l_100 = l_99;
            }
            else
            {
                int *l_119 = &l_84;
                if (((!65535UL) && ((*p_51) = ((**g_72) = ((+(*l_99)) , 0x51A5L)))))
                {
                    int **l_102 = &l_99;
                    union U2 **l_106 = &g_104;
                    (*l_102) = g_101;
                    (*l_80) = g_53;
                    (*l_99) = (l_103 == (void*)0);
                    (*l_106) = g_104;
                }
                else
                {
                    union U2 **l_108 = (void*)0;
                    union U2 **l_109 = &l_107;
                    (*l_109) = l_107;
                }
                for (g_53.f2 = 0; (g_53.f2 != 3); ++g_53.f2)
                {
                    struct S0 **l_114 = &l_80;
                    l_84 = 0x380F2F45L;
                    for (g_8 = 11; (g_8 >= 6); --g_8)
                    {
                        (*g_101) = (*g_101);
                    }
                    (*l_114) = l_80;
                    (*g_101) = (g_53.f0 < (*p_51));
                }
                for (l_52 = (-17); (l_52 != (-27)); l_52--)
                {
                    short **l_117 = &l_103;
                    short ***l_118 = &l_117;
                    (*l_118) = l_117;
                    l_119 = l_100;
                }
                l_84 = (((safe_sub_func_int16_t_s_s(g_53.f0, ((*l_99) , (**g_72)))) >= (safe_div_func_int8_t_s_s(((*l_100) & (*l_119)), l_84))) || l_74);
            }
        }
        (*l_124) = g_101;
        (*l_128) = ((*l_127) = l_125);
        return &g_73;
    }
    (*l_130) = g_101;
    (*l_141) = (((((*l_132) = ((**l_130) || ((((*l_131) = ((**l_130) = (*l_100))) & l_52) | ((!((*p_51) == g_19)) && g_19)))) < (safe_div_func_uint8_t_u_u(((*l_135) = l_52), g_53.f4))) ^ (safe_div_func_uint32_t_u_u(g_53.f6, l_52))) , l_139);
    return &g_73;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
    transparent_crc(g_53.f1, "g_53.f1", print_hash_value);
    transparent_crc(g_53.f2, "g_53.f2", print_hash_value);
    transparent_crc(g_53.f3, "g_53.f3", print_hash_value);
    transparent_crc(g_53.f4, "g_53.f4", print_hash_value);
    transparent_crc(g_53.f5, "g_53.f5", print_hash_value);
    transparent_crc(g_53.f6, "g_53.f6", print_hash_value);
    transparent_crc(g_53.f7, "g_53.f7", print_hash_value);
    transparent_crc(g_105.f2, "g_105.f2", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_433.f0, "g_433.f0", print_hash_value);
    transparent_crc(g_493.f0, "g_493.f0", print_hash_value);
    transparent_crc(g_493.f1, "g_493.f1", print_hash_value);
    transparent_crc(g_493.f2, "g_493.f2", print_hash_value);
    transparent_crc(g_493.f3, "g_493.f3", print_hash_value);
    transparent_crc(g_493.f4, "g_493.f4", print_hash_value);
    transparent_crc(g_493.f5, "g_493.f5", print_hash_value);
    transparent_crc(g_493.f6, "g_493.f6", print_hash_value);
    transparent_crc(g_493.f7, "g_493.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
