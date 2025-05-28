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
   unsigned char f1;
   char f2;
   signed f3 : 12;
   unsigned f4;
   unsigned short f5;
   unsigned f6;
   unsigned char f7;
   unsigned char f8;
   signed f9 : 21;
};

union U1 {
   unsigned short f0;
   char * f1;
   int f2;
};


static unsigned short g_10 = 65535UL;
static char g_49 = 1L;
static char *g_48 = &g_49;
static union U1 g_55 = {0xBAE9L};
static char **g_64 = &g_48;
static char ***g_63 = &g_64;
static int g_78 = 0x0C94A746L;
static unsigned short g_88 = 0x79B7L;
static int g_102 = 1L;
static struct S0 g_109 = {0x5AL,0UL,-1L,50,1UL,0UL,0xD9499140L,6UL,0xDEL,-800};
static unsigned g_112 = 0xB9E1FA26L;
static struct S0 *g_238 = (void*)0;
static struct S0 **g_237 = &g_238;
static union U1 g_295 = {65531UL};
static int g_436 = 0xD76D62D0L;



static unsigned func_1(void);
static int func_2(char p_3, union U1 p_4, char p_5);
static unsigned func_11(unsigned p_12, char p_13, int p_14, unsigned p_15);
static int func_16(char * p_17, char * p_18, char * p_19);
static char * func_20(char p_21, unsigned p_22);
static struct S0 func_27(unsigned short p_28, char * p_29, int p_30);
static char * func_31(struct S0 p_32, unsigned p_33);
static struct S0 func_34(union U1 p_35, int p_36, char * p_37, char * p_38);
static union U1 func_39(unsigned char p_40, char * p_41, char * p_42, char * p_43);
static short func_50(unsigned short p_51, unsigned p_52, union U1 p_53, char * p_54);
static unsigned func_1(void)
{
    unsigned char l_26 = 0xC3L;
    int *l_434 = (void*)0;
    int *l_435 = &g_436;
    int *l_437 = &g_102;
    char ***l_438 = &g_64;
    (*l_435) &= func_2((safe_mod_func_int16_t_s_s(((((0x28FDL ^ ((safe_add_func_uint8_t_u_u(246UL, (g_10 != func_11((g_10 == 0x8FL), g_10, func_16(func_20((safe_unary_minus_func_uint32_t_u(g_10)), (safe_lshift_func_int16_t_s_s((0x60L > g_10), l_26))), (**g_63), (*g_64)), l_26)))) < 1L)) != 0xFBL) | g_49) != g_10), g_112)), g_295, l_26);
    (*l_437) &= ((*l_435) | 5L);
    (*l_435) &= ((void*)0 == l_438);
    return g_109.f1;
}







static int func_2(char p_3, union U1 p_4, char p_5)
{
    unsigned short l_300 = 4UL;
    char *l_301 = &g_49;
    struct S0 l_303 = {251UL,0x8BL,7L,51,4294967289UL,0x456EL,0xE44536B6L,0x95L,0x1FL,191};
    union U1 **l_358 = (void*)0;
    int *l_389 = &g_78;
    int **l_388 = &l_389;
    union U1 *l_417 = (void*)0;
    short l_420 = 0x2D43L;
    if ((safe_mod_func_uint8_t_u_u((0x8D06L != p_4.f0), (safe_add_func_uint8_t_u_u(((&p_5 == (**g_63)) < l_300), (func_16(l_301, l_301, l_301) && 0x837497FDL))))))
    {
        int *l_302 = &g_78;
        (*l_302) |= (g_109.f1 == p_5);
    }
    else
    {
        struct S0 *l_304 = &l_303;
        int l_305 = 0x4A4EDF46L;
        (*l_304) = l_303;
        return l_305;
    }
    if (l_300)
    {
        int *l_306 = &g_78;
        (*l_306) = 1L;
        return p_3;
    }
    else
    {
        char *l_313 = &l_303.f2;
        int l_314 = 0L;
        int *l_315 = &g_55.f2;
        struct S0 l_353 = {9UL,252UL,0x7BL,-31,0x0419DD80L,1UL,0xB7545660L,0xAFL,0UL,-689};
        unsigned short l_365 = 1UL;
        (*g_237) = &l_303;

        ;
        (*l_315) = (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(0x8CL, 0x4BL)), (((((l_303.f4 <= (((safe_lshift_func_int16_t_s_s(func_11(p_3, (func_16((*g_64), func_20(l_303.f1, (0x89L > ((+p_4.f0) ^ 0x2BA8L))), l_313) < l_303.f8), l_314, g_10), l_300)) < l_303.f3) != l_314)) <= p_3) == p_4.f0) < g_295.f0) <= 0UL)));

                ;
        if (p_4.f0)
        {
            union U1 *l_323 = &g_295;
            union U1 **l_322 = &l_323;
            unsigned short l_331 = 0UL;
            char *l_335 = (void*)0;
            struct S0 *l_354 = &l_303;
            unsigned short l_368 = 1UL;
            int l_373 = 0x75852534L;
            int **l_390 = &l_315;
            unsigned char l_402 = 1UL;
            if ((safe_mod_func_uint8_t_u_u(((void*)0 == &g_238), ((-5L) || (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((((void*)0 == l_322) && (((((safe_sub_func_uint32_t_u_u(p_4.f0, g_112)) >= 4294967291UL) <= p_3) > 1UL) || 1L)), 65535UL)), p_5))))))
            {
                char *l_334 = (void*)0;
                int l_338 = 0x4177D834L;
                int *l_339 = (void*)0;
                int *l_340 = (void*)0;
                struct S0 l_341 = {0x4BL,0xAFL,5L,15,0UL,0x6C21L,9UL,0x2FL,0x71L,116};
                int **l_342 = (void*)0;
                int **l_343 = &l_315;
                g_109.f3 |= (safe_unary_minus_func_int8_t_s((((((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(l_331, 0x4736B514L)), 5)) < (safe_add_func_int8_t_s_s(func_50(l_303.f4, (safe_add_func_uint16_t_u_u(p_3, l_338)), p_4, l_334), 1UL))) < p_4.f0) <= 0UL) == l_331)));
                l_341 = l_341;
                (*l_343) = &g_78;

                ;
            }
            else
            {
                int l_348 = (-8L);
                union U1 *l_357 = &g_295;
                int l_369 = 0xECF46E8AL;
                int *l_370 = &l_314;
                (*l_315) = (((**g_64) > g_109.f9) <= (func_50((safe_mod_func_int32_t_s_s((0x31L | (safe_rshift_func_uint8_t_u_u(g_10, 6))), p_5)), p_5, p_4, func_31(l_303, (l_348 <= l_303.f6))) < p_5));
                for (g_109.f0 = 0; (g_109.f0 == 49); g_109.f0 = safe_add_func_int16_t_s_s(g_109.f0, 5))
                {
                    for (g_112 = 0; (g_112 >= 14); g_112++)
                    {
                        short l_361 = 0x3965L;
                        int *l_362 = &g_102;
                        (*l_315) |= p_3;
                        l_303 = l_353;
                        (*l_362) &= (func_50(((void*)0 == l_354), ((248UL && ((safe_mul_func_int8_t_s_s(((l_357 == &g_55) > (**g_64)), (l_358 != (void*)0))) > (safe_lshift_func_int16_t_s_u(l_361, l_361)))) || 3L), p_4, l_335) || 0x5FL);
                    }
                    (*l_315) = (g_109.f6 || (((***g_63) && p_3) ^ 9L));
                }
                (*l_370) |= (+((safe_mul_func_int16_t_s_s(l_365, ((~(((safe_sub_func_int16_t_s_s(func_11(l_331, (*g_48), p_3, l_303.f4), (&l_313 != &l_301))) >= 1L) != l_368)) == l_331))) && l_369));
                for (l_353.f6 = (-16); (l_353.f6 <= 2); l_353.f6++)
                {
                    int **l_380 = &l_315;
                    char *l_391 = (void*)0;
                    if (l_373)
                    {
                        int **l_381 = &l_370;
                        (*l_370) &= ((safe_mod_func_uint8_t_u_u(0xC3L, (*l_389))) < (**l_390));
                        (**l_388) = (-8L);
                        (*l_370) = (func_11((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((p_3 <= (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((0x5EFCL || ((void*)0 == &l_315)), p_5)), (**l_380)))), ((safe_add_func_int32_t_s_s((-1L), (((void*)0 == (*g_237)) | 0x0BBA3064L))) == p_3))), 0xB558L)), (*g_48), l_402, (**l_381)) >= (**l_390));
                    }
                    else
                    {
                        (*l_389) = (0x9BD5L < g_109.f4);
                        return g_109.f4;
                    }
                }
            }

            ;
        }
        else
        {
            (*l_388) = &l_314;

            ;
            (*l_389) |= p_3;
            (*l_315) |= (*l_389);
            (**l_388) = (~(((safe_sub_func_uint32_t_u_u(g_109.f1, ((safe_lshift_func_uint16_t_u_s(g_109.f7, 11)) ^ ((p_3 != g_109.f3) <= ((safe_sub_func_int32_t_s_s((!(**l_388)), (p_3 <= (((safe_sub_func_int16_t_s_s((*l_315), (safe_lshift_func_int8_t_s_s((*g_48), 5)))) >= ((*l_315) == p_5)) < (-1L))))) & g_55.f2))))) | (-6L)) && p_5));
        }

        ;
        ;
        g_102 = (!g_112);
    }


    if ((p_5 && ((safe_mul_func_uint16_t_u_u(p_3, g_109.f4)) > func_11(p_5, (safe_sub_func_uint16_t_u_u(g_109.f6, ((void*)0 != l_417))), ((safe_add_func_int8_t_s_s((((*g_48) <= ((void*)0 == &l_417)) < l_420), 0xE8L)) | p_5), p_3))))
    {
        int l_421 = 8L;
        union U1 l_422 = {0x1ABDL};
        int *l_423 = &g_102;
        p_4.f2 = func_50(g_102, l_421, l_422, (**g_63));

                if (p_3)
        {
            int l_426 = 0x5B5A84DDL;
            int *l_427 = &g_295.f2;
            int *l_428 = &l_422.f2;
            int *l_429 = &g_295.f2;
            int *l_430 = &l_422.f2;
            (*l_388) = l_423;

            ;
            g_109.f3 &= (((safe_add_func_uint8_t_u_u(func_50((l_426 >= 5UL), (*l_389), p_4, (*g_64)), g_109.f7)) != (*l_423)) < g_109.f8);
            return (*l_389);
        }
        else
        {
            return g_109.f8;
        }
    }
    else
    {
        int *l_431 = &g_55.f2;
        (*l_388) = l_431;

        ;
        for (l_303.f0 = 0; (l_303.f0 == 56); l_303.f0 = safe_add_func_uint16_t_u_u(l_303.f0, 4))
        {
            (*l_431) = g_109.f8;
        }
    }

    ;
    (*l_389) ^= p_4.f0;
    return p_4.f0;
}







static unsigned func_11(unsigned p_12, char p_13, int p_14, unsigned p_15)
{
    unsigned char l_291 = 0x50L;
    union U1 l_292 = {0x08A0L};
    int *l_293 = &g_102;
    int **l_294 = &l_293;
    (*g_237) = (void*)0;

    ;
    p_14 ^= (safe_lshift_func_uint16_t_u_s(func_16(&p_13, (*g_64), (*g_64)), 7));
    (*l_293) ^= func_50(g_78, l_291, l_292, &p_13);
    (*l_294) = l_293;
    return p_13;
}







static int func_16(char * p_17, char * p_18, char * p_19)
{
    unsigned l_218 = 0xDFC3A39DL;
    int l_226 = 0x5FDFF747L;
    char *l_241 = &g_109.f2;
    short l_246 = 0L;
    struct S0 **l_258 = &g_238;
    union U1 l_263 = {9UL};
    struct S0 l_265 = {254UL,254UL,-4L,-18,0xCA5432B5L,0UL,18446744073709551615UL,0x34L,8UL,-292};
    char l_278 = 0x3FL;
    if (((safe_add_func_uint8_t_u_u(l_218, ((-9L) & l_218))) < 0x6D343403L))
    {
        char *l_243 = &g_109.f2;
        int *l_251 = (void*)0;
        int l_257 = 0xF4B60E2EL;
        int *l_264 = &g_102;
        struct S0 *l_266 = &l_265;
        union U1 l_277 = {0x8DD8L};
        for (g_88 = 0; (g_88 <= 47); g_88 = safe_add_func_int32_t_s_s(g_88, 2))
        {
            struct S0 *l_236 = &g_109;
            struct S0 **l_235 = &l_236;
            union U1 l_240 = {0x69E2L};
            short l_242 = 0L;
            int *l_254 = &l_240.f2;
            int *l_255 = &l_240.f2;
            int *l_256 = &g_102;
            for (g_109.f6 = 0; (g_109.f6 <= 52); g_109.f6 = safe_add_func_uint32_t_u_u(g_109.f6, 4))
            {
                unsigned l_223 = 18446744073709551611UL;
                int l_239 = 0xB66D557BL;
                if (func_50(l_223, (0xC3FBF1EEL || (+(func_50(func_50((safe_add_func_uint32_t_u_u((func_50(g_109.f8, (func_50(l_226, g_109.f6, func_39(((safe_mod_func_int32_t_s_s((~0xB2E776E5L), (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(func_50((l_235 != g_237), l_239, l_240, p_17), l_239)), 3)) >= 65535UL), 10)))) < g_109.f4), l_241, (*g_64), p_19), (**g_63)) ^ 0x07L), g_55, (*g_64)) || g_49), l_242)), g_88, g_55, p_19), g_109.f6, g_55, l_243) < (*p_19)))), l_240, p_17))
                {
                    l_246 = (safe_mod_func_uint8_t_u_u(g_55.f0, l_226));
                    for (g_109.f0 = (-22); (g_109.f0 == 35); g_109.f0++)
                    {
                        int *l_249 = (void*)0;
                        int *l_250 = &l_226;
                        int **l_252 = &l_251;
                        (*l_250) &= ((void*)0 != &g_102);
                        (*l_252) = l_251;
                        (*l_252) = l_251;
                    }
                }
                else
                {
                    int *l_253 = &g_78;
                    if (l_240.f0)
                        break;
                    (*l_253) = (-1L);
                }
            }
            l_254 = &l_226;

            ;
            (*l_256) ^= ((*l_254) && (func_50((*l_254), l_218, g_55, (*g_64)) > l_218));
        }
        (*l_264) &= (func_50(((**g_64) && (l_257 ^ (l_258 != (void*)0))), (((*p_19) >= ((((void*)0 != l_258) <= ((l_218 ^ (safe_mul_func_uint8_t_u_u(l_257, 255UL))) <= l_226)) && g_109.f1)) || 0x04L), l_263, l_243) && g_78);
        (*l_266) = l_265;
        (*l_264) = (((safe_sub_func_uint8_t_u_u(0x7DL, (safe_mul_func_int8_t_s_s(func_50((l_265.f8 ^ (((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_246 > (g_109.f3 != ((func_50(l_265.f5, (safe_add_func_uint8_t_u_u(0xBCL, 0xFBL)), l_277, (**g_63)) >= l_246) <= 0x8EL))), (***g_63))), 0xCB85L)) || (-9L)) && l_265.f5)), g_55.f0, l_277, (*g_64)), 0xBFL)))) & (-1L)) == l_278);
    }
    else
    {
        char ***l_284 = &g_64;
        int *l_285 = (void*)0;
        int **l_286 = &l_285;
        for (l_265.f2 = 0; (l_265.f2 == (-9)); l_265.f2--)
        {
            for (g_109.f8 = 19; (g_109.f8 == 31); ++g_109.f8)
            {
                unsigned char l_283 = 255UL;
                return l_283;
            }
            l_263.f2 = ((void*)0 == l_284);

                        return g_102;
        }
        (*l_286) = l_285;
    }
    l_265.f3 = ((**g_64) < ((safe_add_func_uint8_t_u_u((g_109.f0 || l_265.f3), 0x4AL)) && func_50(l_226, g_109.f9, l_263, func_31(func_27(l_265.f1, func_31(func_27(l_226, (**g_63), g_109.f5), l_265.f0), g_10), g_88))));
    return l_263.f0;
}







static char * func_20(char p_21, unsigned p_22)
{
    char *l_56 = &g_49;
    int l_117 = 0x7E9ACA86L;
    struct S0 *l_211 = (void*)0;
    struct S0 *l_212 = &g_109;
    (*l_212) = func_27(g_10, func_31(func_34(func_39((65527UL != (safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((g_48 == &g_49), (p_22 && ((p_22 && 0x9BL) == func_50(g_49, g_10, g_55, l_56))))), p_22))), l_56, l_56, l_56), l_117, l_56, (*g_64)), l_117), g_88);
    for (g_88 = (-27); (g_88 < 53); g_88++)
    {
        char *l_215 = (void*)0;
        return l_215;


    }
    return (*g_64);


}







static struct S0 func_27(unsigned short p_28, char * p_29, int p_30)
{
    struct S0 *l_186 = (void*)0;
    struct S0 **l_185 = &l_186;
    unsigned l_201 = 0x2F5E6F33L;
    (*l_185) = &g_109;

    ;
    for (g_78 = 20; (g_78 > 12); --g_78)
    {
        int *l_197 = &g_102;
        int **l_198 = &l_197;
        for (g_109.f6 = 22; (g_109.f6 < 6); --g_109.f6)
        {
            char l_191 = 4L;
            if (l_191)
                break;
            if (p_30)
            {
                int *l_192 = &g_102;
                union U1 *l_194 = &g_55;
                union U1 **l_193 = &l_194;
                int **l_195 = (void*)0;
                int **l_196 = &l_192;
                (*l_192) = p_30;
                (*l_193) = &g_55;
                (*l_196) = &g_102;
            }
            else
            {
                if (g_78)
                    break;
            }
        }
        (*l_198) = l_197;
    }
    if ((safe_lshift_func_int8_t_s_u((~l_201), (safe_lshift_func_int8_t_s_s((9L >= (g_49 && (safe_mul_func_uint8_t_u_u(((l_201 && (*p_29)) ^ l_201), l_201)))), 7)))))
    {
        short l_206 = 1L;
        int *l_207 = &g_55.f2;
        int *l_208 = (void*)0;
        int *l_209 = &g_102;
        int l_210 = 0x0E370044L;
        (*l_209) |= (l_206 && (&l_186 == (void*)0));
        (*l_209) |= l_210;
        (*l_209) |= (0UL & (((&g_55 == (void*)0) > g_55.f0) & 0x95D4L));
        (*l_185) = (*l_185);
    }
    else
    {
        (*l_185) = &g_109;
    }
    return (**l_185);
}







static char * func_31(struct S0 p_32, unsigned p_33)
{
    int *l_182 = (void*)0;
    int **l_181 = &l_182;
    char *l_184 = &g_49;
    for (g_109.f8 = 0; (g_109.f8 < 21); g_109.f8 = safe_add_func_int8_t_s_s(g_109.f8, 1))
    {
        unsigned char l_178 = 0x60L;
        int *l_180 = &g_102;
        int **l_179 = &l_180;
        char *l_183 = &g_49;
        (*l_180) &= (g_88 == func_50((safe_mod_func_uint8_t_u_u(g_55.f0, (safe_add_func_uint32_t_u_u(l_178, (l_179 == l_181))))), p_32.f4, g_55, l_183));
        if (p_32.f1)
            continue;
    }
    (*l_181) = (void*)0;
    return l_184;


}







static struct S0 func_34(union U1 p_35, int p_36, char * p_37, char * p_38)
{
    struct S0 l_118 = {0x11L,8UL,1L,-4,0xD15494F3L,0x6F34L,18446744073709551608UL,0x65L,0x89L,452};
    struct S0 *l_119 = &g_109;
    char **l_135 = &g_48;
    int *l_139 = &g_78;
    int **l_138 = &l_139;
    union U1 l_166 = {65535UL};
    union U1 l_167 = {65526UL};
    (*l_119) = l_118;
    (*l_119) = (*l_119);
    if (p_36)
    {
        struct S0 *l_120 = &l_118;
        int *l_126 = &g_55.f2;
        l_120 = &g_109;

        ;
        for (l_118.f5 = 0; (l_118.f5 < 57); l_118.f5 = safe_add_func_int8_t_s_s(l_118.f5, 7))
        {
            unsigned char l_123 = 251UL;
            int *l_125 = &g_78;
            int **l_124 = &l_125;
            if (l_123)
                break;
            (*l_124) = &g_102;

            ;
            (*l_124) = (*l_124);
        }
        l_118.f9 &= (p_36 == l_118.f8);
        (*l_126) = ((&l_118 == (void*)0) < (-1L));

            }
    else
    {
        int l_132 = 0x264B8EAEL;
        int *l_140 = &g_102;
        (*l_140) |= ((safe_unary_minus_func_int8_t_s((!(safe_sub_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(l_132, (safe_rshift_func_int8_t_s_u(((((l_135 == (void*)0) && 0L) == 0x225B6AC9L) != l_132), 1)))) < l_132) == l_132), (safe_add_func_int8_t_s_s(func_50((((void*)0 != l_138) == g_109.f5), p_36, g_55, (*l_135)), p_36))))))) >= 0xE0ADL);
        (*l_119) = g_109;
    }
    if ((g_109.f3 != 0xC879L))
    {
        struct S0 l_143 = {0x2BL,1UL,0x8FL,30,0x9D697DB5L,0x1CB1L,5UL,1UL,5UL,476};
        union U1 l_158 = {65535UL};
        for (l_118.f4 = (-14); (l_118.f4 == 43); l_118.f4 = safe_add_func_uint8_t_u_u(l_118.f4, 5))
        {
            (*l_139) ^= p_36;
            return l_143;
        }
        if (func_50(g_102, g_88, g_55, p_38))
        {
            union U1 l_152 = {0x7637L};
            (**l_138) = ((((safe_mod_func_uint16_t_u_u(((func_50((g_49 & (safe_rshift_func_int16_t_s_u(func_50(((*l_139) > (g_109.f7 <= (safe_lshift_func_int16_t_s_s(l_143.f5, 12)))), (safe_rshift_func_int8_t_s_u((**g_64), 3)), l_152, (*l_135)), 9))), g_109.f0, p_35, (**g_63)) ^ g_109.f5) != (*p_38)), g_109.f1)) && g_112) == g_109.f7) ^ (*p_38));
        }
        else
        {
            char l_153 = (-1L);
            (*l_139) = l_153;
        }
        if (((p_35.f0 > 0x3BA64CE0L) | (l_143.f4 > (p_36 | ((safe_lshift_func_int16_t_s_s(g_109.f5, (safe_mul_func_uint16_t_u_u((func_50(g_78, g_112, l_158, (*g_64)) & 0xB7B0L), l_143.f6)))) <= l_143.f4)))))
        {
            (*l_139) = g_109.f7;
            (*l_119) = (*l_119);
        }
        else
        {
            unsigned short l_159 = 0x09A3L;
            int *l_160 = (void*)0;
            int *l_161 = &g_102;
            (*l_161) |= (func_50(l_159, p_35.f0, g_55, p_37) > (p_36 <= p_35.f0));
        }
    }
    else
    {
        char **l_165 = &g_48;
        int l_170 = 1L;
        int **l_171 = (void*)0;
        for (l_118.f6 = 3; (l_118.f6 < 49); ++l_118.f6)
        {
            unsigned l_164 = 0UL;
            (**l_138) &= p_35.f0;
            (**l_138) = ((***g_63) | ((g_112 | ((((4294967295UL || (((l_164 | ((void*)0 == l_135)) < 0x34L) < 0UL)) >= ((*g_63) != l_135)) == 4294967295UL) != (*l_139))) || g_78));
        }
        g_109.f9 &= func_50(p_35.f0, (l_165 == (void*)0), l_166, (*g_64));
        l_170 |= (func_50((**l_138), (**l_138), l_167, (**g_63)) != (9L < (safe_mod_func_uint8_t_u_u(p_36, 8L))));
        (**l_138) ^= (l_171 != (void*)0);
    }
    return (*l_119);
}







static union U1 func_39(unsigned char p_40, char * p_41, char * p_42, char * p_43)
{
    unsigned char l_100 = 0x94L;
    struct S0 *l_108 = &g_109;
    struct S0 **l_107 = &l_108;
    struct S0 ***l_106 = &l_107;
    int *l_115 = &g_78;
    int **l_116 = &l_115;
    if (g_55.f0)
    {
        unsigned char l_93 = 0x03L;
        int *l_101 = &g_102;
        (*l_101) &= (l_93 ^ (+((safe_add_func_uint32_t_u_u(func_50(l_93, g_49, g_55, (*g_64)), (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((((((p_40 || ((void*)0 != p_43)) >= g_88) < 7UL) & l_93) > l_100) & g_10), g_88)), 5)))) > l_100)));
    }
    else
    {
        int **l_103 = (void*)0;
        int *l_105 = &g_102;
        int **l_104 = &l_105;
        (*l_104) = (void*)0;

        ;
    }
    (*l_106) = (void*)0;

    ;
    for (g_109.f7 = 15; (g_109.f7 > 11); g_109.f7--)
    {
        unsigned short l_113 = 0xE02BL;
        int *l_114 = &g_78;
        l_113 = g_112;
        (*l_114) = l_113;
        (*l_114) = (-2L);
    }
    (*l_116) = l_115;
    return g_55;


    }







static short func_50(unsigned short p_51, unsigned p_52, union U1 p_53, char * p_54)
{
    char **l_58 = &g_48;
    char ***l_57 = &l_58;
    int l_59 = 0x698B42DCL;
    int *l_90 = &l_59;
    int **l_89 = &l_90;
    struct S0 l_91 = {1UL,247UL,0x8BL,39,0x9B51ECC8L,0x5CB6L,1UL,0xD5L,246UL,-886};
    struct S0 *l_92 = &l_91;
    (*l_57) = &g_48;
    if (l_59)
    {
        short l_62 = 0x1676L;
        char l_68 = 0x1DL;
        char **l_73 = &g_48;
        int *l_77 = &g_78;
        if ((safe_lshift_func_int8_t_s_u(l_62, l_59)))
        {
            char ***l_65 = (void*)0;
            l_59 ^= (+((g_63 == l_65) == (g_49 && 65535UL)));
        }
        else
        {
            int *l_66 = (void*)0;
            int *l_67 = &l_59;
            (*l_67) ^= p_52;
            return p_51;
        }
        (*l_77) &= ((((l_68 && (((safe_mul_func_uint8_t_u_u(g_55.f0, 0L)) != g_10) > (safe_sub_func_uint8_t_u_u((&p_54 == l_73), (safe_unary_minus_func_int16_t_s(0x0D0AL)))))) >= g_10) || (safe_add_func_int16_t_s_s(l_59, 0xF408L))) < 0L);
        (*l_77) = (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(g_78, (-3L))), (((safe_rshift_func_uint16_t_u_u(1UL, 3)) | 0L) & (0xB1L >= ((((p_51 != 0x0B8BL) || ((safe_unary_minus_func_uint8_t_u(((((((+(safe_mul_func_int16_t_s_s(g_49, (0x88L >= (**g_64))))) <= (*l_77)) && g_78) || 0x23L) & p_53.f0) < (*l_77)))) | g_78)) == g_88) == g_49)))));
        (*l_77) = p_53.f0;
    }
    else
    {
        p_53.f2 = p_52;

            }
    (*l_89) = &l_59;
    (*l_92) = l_91;
    return g_10;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_109.f2, "g_109.f2", print_hash_value);
    transparent_crc(g_109.f3, "g_109.f3", print_hash_value);
    transparent_crc(g_109.f4, "g_109.f4", print_hash_value);
    transparent_crc(g_109.f5, "g_109.f5", print_hash_value);
    transparent_crc(g_109.f6, "g_109.f6", print_hash_value);
    transparent_crc(g_109.f7, "g_109.f7", print_hash_value);
    transparent_crc(g_109.f8, "g_109.f8", print_hash_value);
    transparent_crc(g_109.f9, "g_109.f9", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_295.f0, "g_295.f0", print_hash_value);
    transparent_crc(g_436, "g_436", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
