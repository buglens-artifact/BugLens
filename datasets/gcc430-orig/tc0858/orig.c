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
   int f0;
   int f1;
   int f2;
   short f3;
   unsigned char f4;
   short f5;
   char f6;
   unsigned short f7;
};


static unsigned short g_10 = 3UL;
static struct S0 g_36 = {-1L,4L,-1L,0x6AA1L,0xD5L,0x0AECL,-3L,65534UL};
static unsigned g_41 = 4294967295UL;
static int *g_56 = &g_36.f1;
static int g_61 = (-1L);
static struct S0 g_66 = {0x285828E8L,1L,0L,1L,255UL,0x6C42L,0L,0xC80CL};
static struct S0 *g_91 = (void*)0;
static char g_99 = 0x02L;
static struct S0 g_117 = {1L,1L,0xD8BEEF89L,0x209DL,1UL,0x82A0L,4L,0x5C1CL};
static struct S0 *g_116 = &g_117;
static struct S0 **g_128 = &g_91;
static unsigned char **g_141 = (void*)0;
static unsigned short g_157 = 0UL;
static int g_172 = 2L;
static struct S0 *g_202 = &g_36;
static struct S0 g_203 = {0xB34FF2D5L,1L,0xE87DA6A6L,8L,1UL,1L,5L,65535UL};
static unsigned g_208 = 4294967287UL;
static short *g_229 = &g_203.f3;
static unsigned char *g_297 = &g_36.f4;
static unsigned char g_304 = 0x00L;
static unsigned g_351 = 1UL;
static unsigned *g_381 = (void*)0;
static unsigned **g_380 = &g_381;
static int *g_463 = &g_66.f1;
static unsigned short *g_502 = &g_203.f7;



static short func_1(void);
static unsigned short func_2(struct S0 p_3, char p_4, unsigned char p_5, unsigned char p_6);
static struct S0 func_7(unsigned p_8, unsigned short p_9);
static unsigned short func_11(int p_12, struct S0 p_13, char p_14);
static struct S0 func_16(char p_17, struct S0 p_18, char p_19);
static int func_25(struct S0 * p_26, struct S0 * p_27, struct S0 * p_28);
static struct S0 * func_29(struct S0 * p_30);
static struct S0 * func_31(unsigned char p_32, struct S0 * p_33, short p_34);
static struct S0 * func_38(unsigned p_39);
static struct S0 * func_52(struct S0 p_53, unsigned p_54, struct S0 p_55);
static short func_1(void)
{
    short l_15 = (-1L);
    struct S0 l_20 = {0xABAC89D7L,-8L,1L,0xA3F3L,0x04L,-10L,-3L,0xD644L};
    struct S0 *l_21 = (void*)0;
    struct S0 *l_22 = &l_20;
    unsigned l_263 = 0x5DCE3149L;
    unsigned char *l_277 = (void*)0;
    unsigned char **l_276 = &l_277;
    int *l_307 = &g_36.f1;
    int l_341 = (-1L);
    int **l_358 = &g_56;
    int l_363 = 1L;
    unsigned char l_395 = 0xE3L;
    short l_484 = 0L;
    unsigned short *l_503 = &g_66.f7;
    unsigned l_506 = 7UL;
    if ((func_2(((*g_116) = func_7((g_10 < ((func_11(l_15, func_16(l_15, ((*l_22) = l_20), g_10), g_203.f0) == (l_15 | g_208)) | l_15)), g_203.f5)), l_15, g_203.f4, g_203.f3) && l_20.f6))
    {
        return l_263;
    }
    else
    {
        struct S0 *l_264 = &g_203;
        int l_267 = 0xB8E888B2L;
        unsigned short *l_268 = (void*)0;
        unsigned short *l_269 = &l_20.f7;
        struct S0 **l_278 = &l_22;
        struct S0 *l_279 = &g_66;
        if ((((l_264 != (void*)0) , g_99) && 0xB7FCL))
        {
            (*g_56) = (*g_56);
        }
        else
        {
            (*g_56) &= 0xEACF7F05L;
        }
        (*l_264) = func_7((safe_mod_func_uint16_t_u_u(((*l_269) = l_267), g_117.f5)), (func_11(g_66.f6, ((0x4BL != l_267) , (*l_264)), l_20.f5) , l_20.f0));
        (*l_264) = (*g_202);
        if (((*g_56) = func_2((*l_264), (l_263 != (((*g_229) <= (-1L)) <= g_117.f2)), l_20.f1, l_263)))
        {
            unsigned *l_280 = &g_208;
            unsigned *l_281 = &l_263;
            struct S0 *l_282 = &g_203;
            int *l_283 = (void*)0;
            l_20.f1 |= ((*g_56) = l_267);
        }
        else
        {
            int l_288 = 0x4D99E5CBL;
            short *l_295 = (void*)0;
            short *l_296 = &l_20.f5;
            unsigned char *l_298 = &l_20.f4;
            char *l_299 = &g_66.f6;
            int *l_300 = &g_203.f1;
            int *l_301 = (void*)0;
            int *l_302 = (void*)0;
            int *l_303 = &g_172;
            (*g_56) = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((*g_229) = (*g_229)) < l_288), 0)), (safe_add_func_int32_t_s_s((g_304 ^= ((*l_303) ^= ((*g_56) > ((*l_300) = ((safe_mod_func_uint32_t_u_u((((((((((safe_lshift_func_int16_t_s_u(((*l_296) = l_20.f2), ((*l_269) = (g_66.f3 & ((*l_299) = ((l_288 , (l_267 , (l_298 = g_297))) == (*l_276))))))) != 0x631A3206L) , l_267) != l_267) & 4294967295UL) < g_36.f7) && l_288) || (-6L)) ^ l_267), l_288)) != 0x7513L))))), l_267))));

            ;
            return (*g_229);
        }
    }

    ;
    if (l_20.f1)
    {
        unsigned l_318 = 18446744073709551615UL;
        struct S0 *l_328 = &g_66;
        unsigned l_370 = 0x742DD155L;
        int l_374 = 0xA291E3C1L;
        unsigned char *l_498 = (void*)0;
        short l_505 = 0x0D89L;
        for (g_117.f1 = 0; (g_117.f1 <= (-4)); g_117.f1 = safe_sub_func_int8_t_s_s(g_117.f1, 6))
        {
            int **l_308 = &g_56;
            int l_326 = (-3L);
            int l_342 = (-2L);
            struct S0 l_389 = {-2L,0xCC553CE3L,4L,0xDF75L,0UL,-8L,0L,0xD2EEL};
            (*l_308) = l_307;

            ;
            (*l_308) = l_307;
        }
        (*g_116) = (*g_202);
        if (((*g_56) = (((0x88L | 0x88L) == (safe_sub_func_int32_t_s_s(0x4F73BC8AL, (*g_56)))) , (*l_307))))
        {
            char *l_419 = &g_66.f6;
            int l_420 = (-3L);
            unsigned *l_421 = &l_370;
            struct S0 *l_439 = &g_203;
            unsigned l_445 = 0xD4654BA4L;
            unsigned short l_454 = 65532UL;
            int l_470 = 3L;
            unsigned char l_471 = 252UL;
            char l_479 = 0x6DL;
            if ((safe_add_func_int32_t_s_s(((*g_56) = ((((*l_419) = (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(7L, (*g_56))), 4UL))) , ((*l_421) = l_420)) , ((safe_rshift_func_int16_t_s_s((*g_229), ((*l_307) && ((void*)0 != &g_297)))) , (safe_lshift_func_uint16_t_u_s(((*g_56) > l_420), 10))))), 0xC739BD0CL)))
            {
                struct S0 *l_440 = &l_20;
                int l_457 = 0xDF95F3AEL;
                (*l_358) = &g_61;

                ;
                for (l_15 = 0; (l_15 > 16); l_15 = safe_add_func_uint8_t_u_u(l_15, 2))
                {
                    short l_436 = 0L;
                    int l_437 = 0x4D32A01FL;
                    struct S0 l_458 = {0x8BB8FBD7L,0L,0x6833A714L,8L,0xEFL,-4L,1L,1UL};
                    if ((*g_56))
                        break;
                    for (l_263 = 0; (l_263 >= 15); ++l_263)
                    {
                        unsigned ***l_438 = &g_380;
                        struct S0 *l_441 = &g_36;
                        struct S0 l_444 = {1L,0xC66EDA78L,0L,0xF9F4L,0UL,-10L,1L,0x64C0L};
                        unsigned l_459 = 1UL;
                        int *l_460 = (void*)0;
                        int *l_461 = &l_437;
                        l_437 = ((((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_66.f7, (l_370 > (safe_rshift_func_int8_t_s_u(1L, l_370))))), (((*l_307) = (*g_56)) & g_66.f7))) | (l_318 > (**l_358))) > ((void*)0 != &g_380)) , l_436);
                        if ((*g_56))
                            break;
                        (*l_440) = (*g_202);
                        (*l_461) &= ((safe_lshift_func_int16_t_s_s((((*l_440) = (*g_202)) , (((safe_add_func_int8_t_s_s(((*l_419) = g_61), ((4294967295UL & (safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((l_454 == ((*g_297) = 0UL)), (safe_lshift_func_uint8_t_u_u(l_457, l_454)))), (l_457 <= (((func_2(l_458, l_444.f4, g_36.f0, l_459) < l_370) | (*g_56)) > g_208))))) & l_458.f3))) == g_66.f2) > 0L)), 5)) <= l_370);
                    }
                }
            }
            else
            {
                int **l_462 = (void*)0;
                unsigned ***l_472 = &g_380;
                struct S0 l_473 = {5L,0x8FD94906L,0x4CEB2A3EL,9L,4UL,0xC0E0L,0xE1L,8UL};
                short *l_474 = &l_20.f5;
                int l_487 = 1L;
                g_463 = ((*l_358) = &g_172);

                ;
                ;
                (*g_56) = (l_374 = (safe_sub_func_int32_t_s_s(((*g_56) == ((safe_mod_func_int8_t_s_s(((safe_add_func_int16_t_s_s(l_470, ((**l_358) & ((l_471 , l_472) != (l_473 , &g_380))))) <= ((*l_474) ^= (((l_454 , ((*l_307) > 0xC75DL)) == (*g_297)) , (*g_229)))), 0x40L)) , g_117.f2)), 0L)));
                l_470 |= (safe_add_func_uint8_t_u_u((g_351 ^ l_318), l_318));
                (*g_463) = (((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((65530UL <= (*l_307)), (g_36.f0 > (func_2(l_473, l_487, (*g_297), (0x4C54L && (**l_358))) || (*g_229))))), l_318)) , 0xC9CBL) >= 0L);
            }

            ;
            ;
        }
        else
        {
            char l_492 = 0xF2L;
            struct S0 l_493 = {1L,0L,0x9E95FB38L,-5L,0x41L,0x6C5DL,0x4CL,0x8D17L};
            unsigned char *l_497 = &g_66.f4;
            (*l_358) = &g_61;

            ;
            (*l_307) |= l_492;
            (*l_328) = l_493;
            if ((**l_358))
            {
                unsigned short *l_494 = &g_203.f7;
                int l_501 = (-1L);
                char *l_504 = &l_20.f6;
                (*g_202) = func_7(l_370, ((*l_494) |= g_36.f0));
                (*g_463) = ((**l_358) = func_11(func_2((*g_202), (**l_358), (**l_358), (*g_297)), (*g_202), g_172));
                return (*g_229);
            }
            else
            {
                int l_515 = 1L;
                unsigned l_523 = 4294967294UL;
                if (func_11(g_36.f7, (*g_202), l_493.f5))
                {
                    int l_522 = (-2L);
                    l_506 = ((*g_56) = l_493.f7);
                    for (l_493.f3 = 0; (l_493.f3 > 0); l_493.f3 = safe_add_func_int8_t_s_s(l_493.f3, 5))
                    {
                        char l_511 = 0x17L;
                        if ((*g_463))
                            break;
                        l_511 = (safe_mod_func_int16_t_s_s(0xBB8AL, l_505));
                    }
                    if ((**l_358))
                    {
                        char l_512 = 0xE7L;
                        l_512 = 0x4952E4ADL;
                        (*l_358) = &g_172;

                        ;
                    }
                    else
                    {
                        unsigned ***l_518 = &g_380;
                        short **l_519 = (void*)0;
                        short *l_521 = &g_36.f5;
                        short **l_520 = &l_521;
                        (*g_116) = ((g_351 = (safe_add_func_int8_t_s_s(((*g_502) , 6L), func_11((l_515 , (safe_lshift_func_uint16_t_u_u(((*l_503) = (((*g_229) , l_518) != ((g_229 == ((*l_520) = (void*)0)) , &g_380))), ((*g_463) > l_522)))), (*g_116), l_523)))) , (*l_22));

                        ;
                    }

                    ;
                }
                else
                {
                    int *l_524 = &g_36.f1;
                    (*l_358) = l_524;

                    ;
                    if (g_117.f4)
                        goto lbl_529;
lbl_529:
                    for (l_523 = 27; (l_523 < 32); l_523 = safe_add_func_uint32_t_u_u(l_523, 8))
                    {
                        (*g_463) ^= (safe_add_func_uint16_t_u_u((*g_502), (*g_229)));
                        if ((*g_56))
                            continue;
                        (*g_463) ^= l_515;
                        if (l_370)
                            break;
                    }
                    return (*g_229);
                }

                ;
            }

            ;
        }

        ;
        ;
        (*g_128) = (*g_128);
    }
    else
    {
        unsigned char l_530 = 255UL;
        (*g_56) &= l_530;
        for (g_203.f1 = 0; (g_203.f1 >= 8); ++g_203.f1)
        {
            (*g_56) &= (*g_463);
        }
    }

    ;
    ;
    if ((+(*g_463)))
    {
        (*g_463) = 0x5771B095L;
    }
    else
    {
        return (**l_358);
    }
    return (**l_358);
}







static unsigned short func_2(struct S0 p_3, char p_4, unsigned char p_5, unsigned char p_6)
{
    int *l_261 = &g_66.f1;
    int **l_262 = &l_261;
    (*l_262) = l_261;
    return p_3.f2;
}







static struct S0 func_7(unsigned p_8, unsigned short p_9)
{
    unsigned l_209 = 0x214E0A7EL;
    struct S0 *l_212 = &g_203;
    int *l_236 = &g_61;
    int l_247 = 0xA18C3DD0L;
    char l_250 = 0xB3L;
    int l_251 = 1L;
    unsigned char l_254 = 0UL;
    int l_255 = 0x5989333FL;
    struct S0 l_256 = {1L,0xCC298D85L,0L,1L,254UL,0x8F50L,0x0BL,3UL};
    char l_257 = 0xF5L;
    unsigned short *l_258 = &g_203.f7;
    unsigned short *l_259 = &g_66.f7;
    int *l_260 = &g_172;
    if (l_209)
    {
        char l_226 = 6L;
        struct S0 *l_227 = &g_203;
        int *l_235 = &g_172;
        int **l_237 = &g_56;
        if (l_209)
        {
            struct S0 l_217 = {0xA6FFE6D5L,0x1E2EF9C4L,1L,0xB940L,2UL,0x0C5BL,0x40L,65535UL};
            for (g_117.f1 = (-27); (g_117.f1 < (-18)); g_117.f1 = safe_add_func_int32_t_s_s(g_117.f1, 3))
            {
                unsigned char *l_220 = &g_117.f4;
                int l_221 = 0x087CFFACL;
                (*g_56) &= ((p_8 || (l_212 == (void*)0)) , 0x276FC4B7L);
                l_221 = (p_9 < (((safe_mod_func_int16_t_s_s((p_9 , (p_9 , (0x9AL | (safe_sub_func_uint8_t_u_u(((*l_220) = (((l_217 , (0L || (&g_99 == ((safe_mod_func_uint32_t_u_u(1UL, l_217.f4)) , (void*)0)))) && p_9) <= 0UL)), 0xA2L))))), 1UL)) & p_9) > l_209));
            }
        }
        else
        {
            struct S0 **l_228 = &l_227;
            unsigned char *l_230 = &g_66.f4;
            struct S0 ***l_231 = &l_228;
            (*g_56) |= (0x257CL > (p_9 ^ (safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(((((l_226 > g_117.f0) , p_8) > ((*l_230) = (g_229 != g_229))) , l_226), (*g_229))) | (*g_229)), 4L))));
            (*l_231) = &g_202;

            ;
            for (l_209 = (-4); (l_209 != 29); l_209 = safe_add_func_int8_t_s_s(l_209, 5))
            {
                struct S0 l_234 = {0xEDC84E98L,1L,2L,-1L,0x68L,-1L,0L,0x5448L};
                return l_234;
            }
            g_56 = l_235;

            ;
        }

        ;
        (*l_237) = l_236;

        ;
    }
    else
    {
        int **l_238 = &g_56;
        (*l_238) = l_236;

        ;
        (**l_238) ^= p_8;
        for (g_117.f5 = 0; (g_117.f5 == 0); g_117.f5 = safe_add_func_int16_t_s_s(g_117.f5, 1))
        {
            return (*l_212);
        }
    }

    ;
    (*l_260) = (safe_add_func_uint16_t_u_u(((*l_259) = (((*l_258) = (((*l_236) = (*l_236)) , (safe_lshift_func_uint16_t_u_s((l_257 &= (safe_add_func_int8_t_s_s(p_8, (l_247 && (safe_sub_func_uint32_t_u_u(p_9, (func_11((l_250 , l_251), (*l_212), ((*l_212) , 0x3CL)) >= g_66.f4))))))), p_8)))) | 65534UL)), p_9));
    return (*l_212);
}







static unsigned short func_11(int p_12, struct S0 p_13, char p_14)
{
    int *l_207 = &g_117.f1;
    (*l_207) = ((*g_56) = ((~p_13.f0) < (safe_lshift_func_uint8_t_u_s(0x97L, 6))));
    return p_13.f3;
}







static struct S0 func_16(char p_17, struct S0 p_18, char p_19)
{
    struct S0 *l_37 = (void*)0;
    unsigned short l_173 = 0x21EAL;
    struct S0 l_204 = {0x3C1CF12CL,5L,1L,0x446BL,0x52L,-10L,-1L,0xCAF3L};
    if (g_10)
    {
        struct S0 *l_35 = &g_36;
        unsigned *l_40 = &g_41;
        struct S0 **l_100 = &l_35;
        int *l_171 = &g_172;
        (*l_171) ^= (safe_sub_func_int32_t_s_s(func_25(func_29(((*l_100) = func_31((l_35 == l_37), func_38(((*l_40) = g_36.f2)), p_17))), g_116, l_37), 0x83656526L));

        ;
        (*l_171) |= l_173;
    }
    else
    {
        short l_174 = 4L;
        int *l_175 = &g_61;
        struct S0 ***l_193 = &g_128;
        (*g_56) = (l_174 >= l_174);
        (*l_175) |= ((*g_56) = (p_18.f4 || (-1L)));
        for (g_66.f3 = 4; (g_66.f3 != (-18)); g_66.f3--)
        {
            for (g_36.f6 = 0; (g_36.f6 >= (-7)); g_36.f6 = safe_sub_func_int16_t_s_s(g_36.f6, 4))
            {
                for (g_66.f6 = 0; (g_66.f6 > 23); g_66.f6 = safe_add_func_int8_t_s_s(g_66.f6, 9))
                {
                    char *l_192 = &g_99;
                    unsigned short *l_194 = (void*)0;
                    unsigned short *l_195 = &g_117.f7;
                    if ((((*l_195) = (safe_lshift_func_int8_t_s_u(g_117.f0, ((safe_mod_func_uint16_t_u_u(p_18.f6, (safe_rshift_func_uint16_t_u_u((p_18 , ((safe_mul_func_int8_t_s_s(((*l_192) = (safe_mul_func_int8_t_s_s(8L, (&l_174 != (void*)0)))), (p_18.f3 | g_66.f5))) < ((((*g_56) |= ((l_193 == (void*)0) , (*l_175))) | g_66.f2) != g_66.f1))), 6)))) <= g_117.f6)))) & g_36.f5))
                    {
                        return (*g_116);
                    }
                    else
                    {
                        return p_18;
                    }
                }
            }
        }
        if ((safe_mod_func_uint8_t_u_u((g_36.f1 && ((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(p_18.f4, l_173)), ((~247UL) || p_18.f3))) | (*g_56))), g_117.f7)))
        {
            return g_203;
        }
        else
        {
            return p_18;
        }
    }

    ;
    return l_204;
}







static int func_25(struct S0 * p_26, struct S0 * p_27, struct S0 * p_28)
{
    int *l_121 = &g_61;
    int l_158 = 0xEED63D9FL;
    int *l_167 = &g_61;
    struct S0 l_169 = {0x0ACD3375L,0x87EC679DL,-1L,0x4881L,0x56L,0x1DFCL,0xBBL,0UL};
    for (g_66.f3 = 12; (g_66.f3 > (-30)); g_66.f3 = safe_sub_func_int16_t_s_s(g_66.f3, 8))
    {
        int *l_120 = &g_61;
        struct S0 l_137 = {1L,0x5A145734L,-1L,-3L,0UL,0xBDA8L,0x61L,0x0E9BL};
        l_121 = l_120;
        if ((*l_120))
        {
            int l_122 = 0L;
            l_122 ^= 1L;
        }
        else
        {
            unsigned l_125 = 0xDAACA8A9L;
            int *l_138 = &g_36.f1;
            if ((safe_rshift_func_int16_t_s_u((((-1L) != (l_125 , (safe_add_func_uint32_t_u_u(((g_128 = &g_91) != (((safe_mul_func_uint16_t_u_u((*l_120), l_125)) , (((*l_121) , ((*l_120) ^ l_125)) < (g_36.f0 | g_117.f1))) , &p_27)), (-1L))))) , 0x1EAEL), (*l_120))))
            {
                return (*g_56);
            }
            else
            {
                struct S0 l_136 = {0x75ADD045L,0x2451B5D9L,0x75A6E992L,0xEC18L,0x18L,0x9B7EL,0L,1UL};
                char l_170 = 0xF7L;
                if (((safe_lshift_func_uint16_t_u_s((((void*)0 == p_26) || l_125), 15)) , (+l_125)))
                {
                    struct S0 l_133 = {0x8682D76BL,-3L,0xBDA3375AL,0x760AL,1UL,0xF53DL,-1L,0x9333L};
                    int **l_139 = (void*)0;
                    int **l_140 = &g_56;
                    unsigned char ***l_142 = &g_141;
                    (*p_27) = l_133;
                    for (g_117.f4 = 0; (g_117.f4 == 53); g_117.f4++)
                    {
                        l_136 = l_133;
                        if ((*l_120))
                            break;
                    }
                    (*l_140) = (l_137 , l_138);

                    ;
                    (*l_142) = g_141;
                }
                else
                {
                    unsigned char l_155 = 255UL;
                    short *l_156 = &l_137.f5;
                    char *l_159 = &g_99;
                    short *l_160 = (void*)0;
                    short *l_161 = (void*)0;
                    short *l_162 = &g_117.f5;
                    short *l_163 = (void*)0;
                    short *l_164 = (void*)0;
                    short *l_165 = &g_117.f3;
                    int *l_166 = &g_117.f1;
                    int **l_168 = &l_166;
                    (*l_166) ^= ((l_136.f0 && (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(0x81EAL, ((*l_165) = ((*l_162) |= (((*l_159) = ((safe_rshift_func_int8_t_s_u(l_136.f1, (safe_rshift_func_int16_t_s_s(((*l_156) = ((*l_121) = (l_155 | (g_61 , l_136.f2)))), ((*l_138) , g_157))))) | ((l_158 || 0x56L) && 0x5187L))) , (*l_138)))))), 0UL)) || 3UL), g_36.f7)), l_136.f4))) , (*l_138));
                    (*l_168) = l_167;

                    ;
                    (*g_56) &= (*l_138);
                    (*p_27) = l_169;
                }

                ;
                return l_170;
            }
        }
    }
    (*l_121) = (*g_56);
    return (*l_121);
}







static struct S0 * func_29(struct S0 * p_30)
{
    char l_101 = (-1L);
    unsigned char *l_102 = &g_36.f4;
    char *l_105 = &g_99;
    int *l_106 = &g_36.f1;
    int **l_107 = &g_56;
    unsigned *l_110 = &g_41;
    char *l_111 = &g_66.f6;
    short *l_112 = (void*)0;
    short *l_113 = &g_66.f3;
    int *l_114 = &g_61;
    struct S0 *l_115 = &g_66;
    (*l_114) = ((!(((l_101 != ((*l_102) = (l_101 | (g_66.f4 ^= l_101)))) <= ((*l_113) ^= (((safe_mul_func_int8_t_s_s(g_36.f3, ((*l_105) &= l_101))) < l_101) == ((*l_111) = ((*l_106) = (g_36.f6 = (((*l_107) = l_106) != (((*l_110) = (((g_66.f0 && (((safe_rshift_func_int16_t_s_u((((*l_106) >= 0L) && (-1L)), 8)) < 0xC7L) || g_36.f3)) || g_66.f7) , (*l_106))) , &g_61)))))))) >= g_36.f7)) ^ g_61);

    ;
    (*l_107) = &g_61;

    ;
    return l_115;


}







static struct S0 * func_31(unsigned char p_32, struct S0 * p_33, short p_34)
{
    struct S0 *l_72 = &g_66;
    struct S0 **l_71 = &l_72;
    struct S0 ***l_70 = &l_71;
    unsigned *l_83 = (void*)0;
    int l_88 = (-1L);
    unsigned *l_89 = &g_41;
    struct S0 **l_90 = (void*)0;
    int l_92 = 0xAE94942BL;
    unsigned l_93 = 0xC3E41A78L;
    int *l_94 = &g_66.f1;
    unsigned l_95 = 0x6A28E28BL;
    char *l_98 = &g_66.f6;
    (*p_33) = (*p_33);
    (*l_94) &= ((((safe_add_func_uint16_t_u_u((((l_92 = ((g_91 = ((((*l_70) = (void*)0) != ((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((g_36.f2 , g_36.f6), (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((g_36.f4 | ((((*g_56) = (safe_mul_func_uint16_t_u_u((l_83 != &g_41), 65535UL))) < ((*l_89) = (l_88 &= (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_36.f7, p_34)), 0x75DBL))))) && 0x3F75L)), g_66.f0)), 6)))), 252UL)) , (void*)0)) , (void*)0)) == &g_66)) != p_32) >= 0xF1A37C05L), l_93)) , p_34) | l_93) , (-9L));

    ;
    (*l_94) = (*l_94);
    (*g_56) ^= (l_95 != (4294967295UL < ((+(((safe_lshift_func_uint8_t_u_u(g_36.f2, 6)) || ((((*l_98) = (p_34 , 1L)) && g_99) <= p_34)) & (!0L))) <= (((g_66.f1 < 251UL) , (void*)0) != &p_33))));
    return &g_36;


}







static struct S0 * func_38(unsigned p_39)
{
    struct S0 *l_44 = &g_36;
    int l_45 = (-1L);
    struct S0 **l_67 = &l_44;
    if (g_36.f3)
    {
        int l_46 = (-9L);
        int *l_47 = &g_36.f1;
        for (g_36.f2 = 0; (g_36.f2 > 4); g_36.f2 = safe_add_func_int16_t_s_s(g_36.f2, 2))
        {
            return l_44;


        }
        (*l_47) ^= (l_45 | l_46);
    }
    else
    {
        unsigned l_50 = 0xCA543565L;
        int *l_51 = &l_45;
        (*l_51) &= (safe_lshift_func_uint16_t_u_s(l_50, 1));
    }
    (*l_67) = func_52((*l_44), p_39, g_36);

    ;
    return &g_66;


}







static struct S0 * func_52(struct S0 p_53, unsigned p_54, struct S0 p_55)
{
    int *l_57 = &g_36.f1;
    int *l_60 = &g_61;
    struct S0 *l_62 = &g_36;
    struct S0 *l_65 = &g_66;
    l_57 = g_56;
    (*l_60) &= (safe_lshift_func_uint16_t_u_s((*l_57), (*l_57)));
    (*l_62) = p_55;
    (*l_65) = ((*l_62) = (((safe_rshift_func_uint8_t_u_s((~p_55.f4), 2)) , ((p_53.f2 , 0xBF5FL) && (*l_57))) , p_55));
    return &g_66;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
    transparent_crc(g_36.f1, "g_36.f1", print_hash_value);
    transparent_crc(g_36.f2, "g_36.f2", print_hash_value);
    transparent_crc(g_36.f3, "g_36.f3", print_hash_value);
    transparent_crc(g_36.f4, "g_36.f4", print_hash_value);
    transparent_crc(g_36.f5, "g_36.f5", print_hash_value);
    transparent_crc(g_36.f6, "g_36.f6", print_hash_value);
    transparent_crc(g_36.f7, "g_36.f7", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_66.f3, "g_66.f3", print_hash_value);
    transparent_crc(g_66.f4, "g_66.f4", print_hash_value);
    transparent_crc(g_66.f5, "g_66.f5", print_hash_value);
    transparent_crc(g_66.f6, "g_66.f6", print_hash_value);
    transparent_crc(g_66.f7, "g_66.f7", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_117.f1, "g_117.f1", print_hash_value);
    transparent_crc(g_117.f2, "g_117.f2", print_hash_value);
    transparent_crc(g_117.f3, "g_117.f3", print_hash_value);
    transparent_crc(g_117.f4, "g_117.f4", print_hash_value);
    transparent_crc(g_117.f5, "g_117.f5", print_hash_value);
    transparent_crc(g_117.f6, "g_117.f6", print_hash_value);
    transparent_crc(g_117.f7, "g_117.f7", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_203.f0, "g_203.f0", print_hash_value);
    transparent_crc(g_203.f1, "g_203.f1", print_hash_value);
    transparent_crc(g_203.f2, "g_203.f2", print_hash_value);
    transparent_crc(g_203.f3, "g_203.f3", print_hash_value);
    transparent_crc(g_203.f4, "g_203.f4", print_hash_value);
    transparent_crc(g_203.f5, "g_203.f5", print_hash_value);
    transparent_crc(g_203.f6, "g_203.f6", print_hash_value);
    transparent_crc(g_203.f7, "g_203.f7", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
