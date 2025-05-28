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
   unsigned f0 : 11;
   int f1;
   unsigned short f2;
   unsigned f3;
   char f4;
   unsigned f5;
   int f6;
   int f7;
   char f8;
   unsigned char f9;
};

union U1 {
   int f0;
   int f1;
   int f2;
   unsigned f3;
};


static int g_15 = 0xE4145C17L;
static int *g_14 = &g_15;
static int g_17 = 9L;
static unsigned g_26 = 0x70CADD63L;
static unsigned short g_54 = 1UL;
static struct S0 g_59 = {36,0xC29AEDA1L,2UL,0x2BBA2D3CL,-1L,0x4EE00B46L,0x9F111191L,-1L,-6L,251UL};
static int *g_77 = (void*)0;
static int **g_76 = &g_77;
static struct S0 g_85 = {40,-2L,0xA0E6L,18446744073709551615UL,0x6AL,0xDA102F31L,-1L,-1L,-1L,0x24L};
static union U1 g_97 = {1L};
static unsigned short *g_145 = &g_59.f2;
static unsigned short **g_144 = &g_145;
static struct S0 *g_162 = &g_59;
static struct S0 **g_161 = &g_162;
static int *g_192 = &g_85.f6;
static int **g_191 = &g_192;
static short g_198 = 0x952DL;
static short g_229 = 0x0A86L;
static union U1 g_247 = {0xD8FAC68DL};
static char *g_327 = &g_59.f8;
static unsigned char *g_408 = &g_85.f9;
static unsigned char **g_407 = &g_408;
static union U1 *g_428 = &g_97;
static int g_451 = 0x2159E1C9L;
static char g_643 = 0xBAL;
static int g_655 = 0L;
static unsigned short ***g_680 = &g_144;
static unsigned short ****g_679 = &g_680;
static int ****g_709 = (void*)0;
static int g_724 = 6L;
static union U1 ***g_736 = (void*)0;



static short func_1(void);
static int * func_2(unsigned char p_3, int * p_4, int * p_5, int * p_6, int * p_7);
static unsigned func_8(int * p_9, int p_10, unsigned p_11, unsigned char p_12, int p_13);
static unsigned char func_18(int p_19, int * p_20, unsigned p_21, int * p_22);
static int func_27(int * p_28, int * p_29);
static int * func_30(char p_31, int * p_32);
static char func_33(int p_34);
static int func_35(int * p_36);
static int * func_37(unsigned p_38, unsigned char p_39);
static union U1 func_44(int * p_45, int * p_46, int * p_47, unsigned p_48);
static short func_1(void)
{
    int *l_16 = &g_17;
    int l_25 = 0x20920A6FL;
    int *l_49 = (void*)0;
    char l_50 = 0xE4L;
    int l_702 = 0xDFB427D3L;
    int *l_703 = (void*)0;
    int *l_704 = &g_59.f6;
    int *l_723 = &g_724;
    unsigned char l_730 = 0UL;
    unsigned l_774 = 0xEAD10162L;
    char l_775 = (-2L);
    int **l_808 = &g_192;
    unsigned short *l_813 = &g_85.f2;
    int l_814 = (-9L);
    struct S0 **l_815 = &g_162;
    (*l_808) = func_2(((**g_407) = (((func_8(g_14, ((*l_16) = g_15), (((func_18((safe_add_func_uint32_t_u_u((g_26 = l_25), func_27(func_30(l_25, (((*l_704) = (l_702 = (func_33(func_35(func_37((safe_lshift_func_int8_t_s_s(((g_15 && (((safe_lshift_func_int16_t_s_s((g_198 = (func_44(&g_15, l_49, &l_25, (l_50 , g_15)) , 1L)), g_15)) || (*g_14)) | g_97.f3)) , g_59.f2), 5)), l_25))) == g_643))) , g_14)), l_703))), l_723, g_724, l_704) != l_25) | l_50) , 0xCA799656L), l_730, (*g_14)) > l_774) < l_775) && g_247.f2)), &l_25, &g_655, &g_655, &g_655);
    (*l_808) = &g_451;
    (*l_815) = &g_85;
    return g_247.f2;
}







static int * func_2(unsigned char p_3, int * p_4, int * p_5, int * p_6, int * p_7)
{
    int *l_781 = &g_97.f0;
    int l_784 = 0x82D4DC3AL;
    struct S0 l_787 = {15,-8L,65535UL,18446744073709551615UL,0x3AL,0xA8000A15L,-8L,-1L,6L,0x2AL};
    int ***l_788 = &g_191;
    int **l_789 = &g_192;
    unsigned char l_790 = 0x13L;
    int l_802 = (-1L);
    int l_805 = 0x85628033L;
    for (g_85.f7 = (-10); (g_85.f7 >= 28); g_85.f7 = safe_add_func_uint32_t_u_u(g_85.f7, 2))
    {
        union U1 **l_778 = (void*)0;
        g_428 = &g_247;
    }
    l_784 = (safe_sub_func_int8_t_s_s((0xD8D1L == (p_3 , (func_27(p_4, l_781) != (((safe_sub_func_uint16_t_u_u((**g_144), func_35(p_5))) == l_784) , p_3)))), 1L));
    if ((safe_add_func_uint8_t_u_u(func_8((l_787 , func_30(((((void*)0 == l_788) ^ p_3) , (((*l_789) = &g_655) == &g_15)), p_6)), g_643, l_790, p_3, (*g_14)), p_3)))
    {
        struct S0 l_791 = {37,0x926624C4L,0x841FL,18446744073709551609UL,1L,0xC5AE3E8CL,0x3E62F91FL,0xCB2F1A7EL,0L,0xFDL};
        struct S0 *l_792 = &l_791;
        (*l_792) = l_791;
        for (g_59.f3 = (-8); (g_59.f3 >= 39); g_59.f3 = safe_add_func_int16_t_s_s(g_59.f3, 2))
        {
            for (g_724 = 0; (g_724 > (-18)); g_724--)
            {
                if (l_791.f7)
                    break;
                for (g_59.f4 = 0; (g_59.f4 == 18); g_59.f4 = safe_add_func_uint32_t_u_u(g_59.f4, 5))
                {
                    for (g_85.f5 = 0; (g_85.f5 <= 38); g_85.f5++)
                    {
                        char l_801 = 0xF2L;
                        (*p_5) = (~(0x6DL == ((*g_408) = (*g_408))));
                        (*p_4) = (((void*)0 == p_6) <= ((-9L) || g_59.f2));
                        if (l_801)
                            continue;
                    }
                }
            }
        }
    }
    else
    {
        return &g_451;
    }
    (*g_14) = func_8(&g_451, l_802, p_3, (g_59.f9 = (safe_mul_func_int16_t_s_s((((**g_407) = l_805) <= (((*p_6) = (safe_rshift_func_int8_t_s_s((*g_327), 4))) , ((+(g_85.f7 | (((((*g_327) = l_787.f6) && func_35(((*g_76) = p_5))) && p_3) >= p_3))) < (*g_14)))), 0L))), (*p_4));
    return p_7;
}







static unsigned func_8(int * p_9, int p_10, unsigned p_11, unsigned char p_12, int p_13)
{
    struct S0 l_731 = {25,4L,0xA5CDL,0UL,5L,0x8382EA23L,0xD013DC98L,6L,0x7BL,247UL};
    struct S0 *l_732 = &g_85;
    int *l_745 = &g_85.f7;
    int *l_765 = &g_85.f6;
    union U1 *l_766 = &g_247;
    l_731 = l_731;
    (*l_732) = l_731;
    for (g_97.f0 = 0; (g_97.f0 == (-27)); g_97.f0 = safe_sub_func_int16_t_s_s(g_97.f0, 6))
    {
        int *l_735 = (void*)0;
        struct S0 l_738 = {25,-1L,0x29EFL,0UL,0x24L,0xD72C8983L,0L,0L,0L,0UL};
        int *l_761 = (void*)0;
        if (((*g_327) , l_738.f7))
        {
            int *l_749 = &g_85.f1;
            struct S0 l_751 = {39,0x2AE673D0L,0x025DL,18446744073709551607UL,8L,0x1861D7EAL,0xAED44A4BL,-1L,-1L,252UL};
            char *l_752 = &l_738.f4;
            int **l_753 = &l_749;
            (*p_9) = (-6L);
            for (g_85.f6 = 0; (g_85.f6 <= (-19)); g_85.f6 = safe_sub_func_uint16_t_u_u(g_85.f6, 6))
            {
                int **l_748 = &l_735;
                struct S0 l_750 = {29,5L,65532UL,1UL,0x8EL,4294967294UL,0xFCA100BDL,0x55F1E793L,-9L,0xF1L};
                l_749 = ((*l_748) = func_30(((*g_327) = p_10), l_735));
                g_162 = &l_738;
                l_750 = l_750;
            }
            l_751 = l_751;
            (*l_753) = (p_10 , func_30(((*l_752) = ((*g_327) = (-9L))), &g_724));
        }
        else
        {
            short l_754 = 0xED80L;
            int *l_762 = (void*)0;
            int *l_764 = (void*)0;
            if ((l_738.f6 = (5UL <= (l_754 != (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(0x0EL, p_10)), 12))))))
            {
                unsigned short ****l_759 = &g_680;
                int *l_760 = (void*)0;
                l_735 = func_30(p_10, (l_762 = func_30(l_731.f7, func_30((l_731.f1 = 0xB6L), ((l_731.f6 = (func_18(((void*)0 == l_759), l_760, p_11, l_760) > (**g_144))) , l_761)))));
            }
            else
            {
                int *l_763 = &g_247.f0;
                union U1 **l_767 = &g_428;
                int **l_768 = &l_735;
                p_9 = (l_764 = func_30(p_13, l_763));
                l_765 = func_30(p_11, l_763);
                (*l_767) = l_766;
                (*l_768) = &p_13;
            }
        }
        if ((*l_765))
        {
            (*l_765) = (*p_9);
            return g_59.f6;
        }
        else
        {
            int **l_769 = (void*)0;
            int **l_770 = (void*)0;
            int **l_771 = &g_192;
            (*l_771) = &g_15;
            (*l_771) = &p_13;
            (**l_771) = ((safe_mod_func_int8_t_s_s(p_10, (*l_765))) > (*l_765));
            return p_11;
        }
    }
    (*l_732) = (*l_732);
    return (*l_765);
}







static unsigned char func_18(int p_19, int * p_20, unsigned p_21, int * p_22)
{
    int **l_725 = &g_192;
    int *l_727 = &g_247.f2;
    int **l_726 = &l_727;
    struct S0 l_728 = {40,0x64F2968FL,0UL,0x2E20175EL,0x05L,0x06ACA1CEL,0L,-8L,1L,0x11L};
    struct S0 *l_729 = &l_728;
    (*l_726) = ((*l_725) = &p_19);
    (*l_729) = l_728;
    (*l_726) = (*l_726);
    return (*g_408);
}







static int func_27(int * p_28, int * p_29)
{
    union U1 l_720 = {0x5ED0CD50L};
    struct S0 l_721 = {37,0xA5938989L,65530UL,0x40A3AB3BL,0xABL,4294967294UL,0x875928F8L,-1L,3L,1UL};
    int **l_722 = &g_192;
    (*p_28) = (l_720 , (*p_28));
    l_721 = l_721;
    (*l_722) = p_29;
    return l_720.f3;
}







static int * func_30(char p_31, int * p_32)
{
    int *l_705 = (void*)0;
    int **l_706 = &g_192;
    int *l_707 = &g_59.f6;
    int l_708 = (-1L);
    int ***l_711 = (void*)0;
    int ****l_710 = &l_711;
    int *****l_712 = &l_710;
    union U1 ***l_714 = (void*)0;
    union U1 **l_716 = (void*)0;
    union U1 ***l_715 = &l_716;
    union U1 **l_717 = &g_428;
    (*l_706) = l_705;
    (*l_707) = (*g_14);
    (*l_706) = p_32;
    (*l_706) = (*l_706);
    return &g_451;
}







static char func_33(int p_34)
{
    char l_224 = 0x59L;
    int l_225 = 0xED4DE4FEL;
    char *l_230 = &g_85.f4;
    int l_236 = 0x2CCCD254L;
    short l_249 = 1L;
    unsigned *l_286 = &g_85.f3;
    struct S0 l_291 = {13,0xBBB2C9FAL,0xD3C9L,0x311D744DL,0x94L,1UL,-1L,0x016BB01CL,1L,1UL};
    struct S0 l_389 = {18,0xECB76A64L,65533UL,18446744073709551615UL,0xD0L,0xBA2B4AFAL,0x24A14859L,0x6AA95A9FL,0x3EL,0x84L};
    int l_395 = 0x0D92E2E4L;
    union U1 l_401 = {0xD02CD53DL};
    unsigned char l_442 = 0xC2L;
    int *l_477 = &g_85.f6;
    int **l_480 = &g_77;
    short l_579 = 0x60ABL;
    if ((safe_mod_func_uint8_t_u_u((((((((*l_230) = (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_224, (l_224 | l_225))), (p_34 | ((safe_add_func_uint16_t_u_u((((safe_unary_minus_func_int8_t_s(l_224)) | (l_224 > g_229)) == 3UL), 0xD735L)) || 0xCDL))))) || l_224) , l_225) , (*g_192)) , l_225) <= l_224), l_225)))
    {
        struct S0 l_243 = {33,-10L,0x2A41L,0xB001E96BL,1L,0x92CAEC0EL,0x9BB206E1L,0x7F3327D6L,0L,0UL};
        char *l_248 = &l_243.f4;
        int *l_260 = &g_59.f7;
        int **l_292 = &g_192;
        for (g_59.f5 = 0; (g_59.f5 <= 42); ++g_59.f5)
        {
            union U1 *l_233 = &g_97;
            union U1 **l_234 = (void*)0;
            union U1 **l_235 = &l_233;
            (*l_235) = l_233;
            l_236 = (-2L);
        }
        for (g_85.f6 = 16; (g_85.f6 <= (-23)); g_85.f6 = safe_sub_func_uint8_t_u_u(g_85.f6, 5))
        {
            unsigned char *l_246 = &g_85.f9;
            int l_250 = 1L;
            struct S0 l_268 = {15,2L,0xD458L,18446744073709551612UL,-1L,0xEE149B32L,4L,-1L,0x9EL,0x3DL};
            if ((safe_mod_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(func_35((l_243 , &l_225)), ((*l_246) = ((safe_lshift_func_uint16_t_u_s(p_34, 3)) | (+(*g_145)))))) <= (((g_247 , l_248) == l_248) & l_249)) > l_224), g_59.f0)))
            {
                return l_243.f8;
            }
            else
            {
                int l_255 = 0x0B19E22BL;
                unsigned short ***l_264 = &g_144;
                struct S0 l_276 = {42,0xDA13B45BL,0x34CBL,18446744073709551606UL,0x28L,4294967295UL,8L,0x677E7D22L,0L,0xDAL};
                l_250 = 0x3D05821FL;
                if ((safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((g_59.f0 | (l_255 | (p_34 > (((safe_mul_func_int16_t_s_s(l_243.f4, ((l_250 = l_225) && ((&p_34 == (void*)0) ^ (safe_lshift_func_uint8_t_u_u(func_35(l_260), 4)))))) || p_34) > 1UL)))), (**g_144))) == 0xAAE12B9DL), g_85.f5)))
                {
                    struct S0 l_261 = {24,1L,0x4220L,0x00DC9259L,-1L,4294967295UL,0x9324AF3CL,2L,0xFAL,0x57L};
                    l_261 = (*g_162);
                    for (l_243.f6 = 0; (l_243.f6 != 8); ++l_243.f6)
                    {
                        unsigned short ***l_266 = &g_144;
                        unsigned short ****l_265 = &l_266;
                        int *l_267 = &l_261.f1;
                        l_261.f1 = (0x78L >= (l_255 & 9UL));
                        (*l_267) = ((func_35((*g_76)) , (l_264 == ((*l_265) = l_264))) , (*g_192));
                    }
                }
                else
                {
                    struct S0 *l_269 = &l_243;
                    int l_278 = 0x1D4CAB2AL;
                    int **l_279 = &g_192;
                    unsigned **l_287 = &l_286;
                    (*l_269) = l_268;
                    if ((safe_mod_func_int32_t_s_s((0x192BFBACL >= (safe_rshift_func_uint16_t_u_u(func_35(((*g_76) = (*g_76))), 3))), (*g_192))))
                    {
                        int ***l_274 = &g_76;
                        int **l_275 = &g_192;
                        (*l_269) = (((*g_145) = (((void*)0 == l_274) ^ (!g_247.f0))) , l_243);
                        (*l_275) = (void*)0;
                        (*l_269) = (l_276 = l_243);
                        return p_34;
                    }
                    else
                    {
                        struct S0 l_277 = {35,-10L,0x7BC6L,0UL,0x8AL,0x9EEEF5E0L,0x40FD28B2L,0x01364F4DL,0x61L,0x7DL};
                        (*l_269) = l_277;
                        l_278 = (*g_14);
                    }
                    (*l_279) = (void*)0;
                    if (((l_276.f8 , ((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_97.f0, ((*l_230) = 0x87L))), ((safe_mul_func_int8_t_s_s((l_225 || ((((*l_287) = l_286) != g_14) == (safe_rshift_func_uint16_t_u_s(p_34, p_34)))), p_34)) , p_34))) , p_34)) != 0UL))
                    {
                        int *l_290 = &g_247.f1;
                        (*l_290) = p_34;
                        return l_268.f6;
                    }
                    else
                    {
                        (*l_269) = l_291;
                        (*l_279) = &l_236;
                        l_243 = l_268;
                    }
                }
                return l_243.f3;
            }
        }
        (*l_292) = &g_15;
    }
    else
    {
        struct S0 l_293 = {41,1L,65534UL,0xD7204A06L,1L,0x3C59E35AL,0x05CC423AL,-4L,0xC7L,248UL};
        unsigned l_294 = 0xAF2857B4L;
        unsigned short ***l_296 = &g_144;
        unsigned short ****l_295 = &l_296;
        union U1 *l_316 = (void*)0;
        int *l_413 = &l_291.f1;
        int **l_515 = &g_77;
        unsigned **l_516 = &l_286;
        int l_560 = 0x915F3170L;
        struct S0 l_701 = {22,0x0E62C31BL,3UL,0x3549F0B3L,1L,1UL,0x9F367BAAL,-9L,0x99L,0UL};
        (*g_162) = l_293;
        if ((((p_34 || ((((l_293.f7 != (l_291.f8 || l_294)) || l_293.f6) > (((void*)0 != l_295) && (safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((void*)0 == &g_145), p_34)), 6)))) ^ (*g_145))) , g_85.f4) != l_293.f6))
        {
            int l_307 = (-1L);
            unsigned short *l_317 = &l_291.f2;
            union U1 *l_339 = &g_97;
            unsigned char l_366 = 0x9DL;
            int *l_369 = &g_85.f6;
            unsigned short l_382 = 1UL;
            struct S0 l_432 = {23,0xF6690EF1L,8UL,0x428B240CL,-1L,0x9934A37AL,-1L,0xEF1BAC67L,-1L,1UL};
            unsigned char *l_435 = &l_432.f9;
            struct S0 *l_474 = &g_59;
            short l_481 = 1L;
            unsigned l_554 = 0x1D633864L;
            for (g_247.f1 = 0; (g_247.f1 == (-2)); g_247.f1 = safe_sub_func_int32_t_s_s(g_247.f1, 1))
            {
                short l_328 = 0L;
                int l_333 = 0xB8C5382CL;
                union U1 *l_338 = (void*)0;
            }
            if (((safe_lshift_func_uint8_t_u_s((*g_408), 4)) > (((*l_435) = 247UL) ^ p_34)))
            {
                int **l_438 = &g_192;
                int *l_441 = &l_225;
                short *l_447 = &g_229;
                short *l_448 = (void*)0;
                short *l_449 = (void*)0;
                short *l_450 = &l_249;
                (*l_438) = func_37((g_85.f4 & (safe_rshift_func_uint16_t_u_s((*g_145), (l_432 , 0L)))), (*g_408));
                (*g_162) = l_293;
                (*l_413) = ((((safe_rshift_func_uint16_t_u_u((func_35(((*g_76) = l_441)) != (l_389.f9 , ((*l_450) = (((*l_447) = (l_442 , (safe_add_func_uint16_t_u_u((*l_369), ((g_59.f6 != (((*l_230) = (l_432 , ((*g_327) = (safe_rshift_func_uint8_t_u_s(((p_34 <= l_389.f2) != p_34), (*g_327)))))) <= 0x37L)) ^ (*l_413)))))) != g_85.f9)))), l_401.f3)) != p_34) , p_34) == g_451);
            }
            else
            {
                struct S0 l_458 = {30,0x3DBFDDC7L,7UL,0x66309EC3L,0x4CL,9UL,1L,0x2310DF42L,0x3AL,0x94L};
                unsigned l_504 = 0x5E1137BFL;
                int **l_511 = &g_77;
                unsigned *l_527 = &g_85.f5;
                struct S0 **l_528 = (void*)0;
                struct S0 ***l_529 = &g_161;
                if ((*g_192))
                {
                    char **l_452 = &g_327;
                    int ***l_453 = &g_191;
                    struct S0 l_461 = {34,0x2D9B51CBL,0x3A08L,1UL,0x77L,4294967295UL,0xEE6EE54FL,6L,0x1BL,249UL};
                    (*l_413) = ((void*)0 != l_452);
                    (*l_453) = &l_413;
                    if ((safe_sub_func_uint32_t_u_u(0x86092011L, ((l_458 , func_35(((*g_76) = (*g_76)))) <= (p_34 <= (((safe_rshift_func_int8_t_s_u((*l_413), 0)) , ((p_34 != (*l_413)) ^ (((-1L) == 252UL) < (*g_14)))) != (*l_413)))))))
                    {
                        return (*g_327);
                    }
                    else
                    {
                        l_458 = ((*g_162) , ((*g_162) = l_461));
                    }
                    (**l_453) = func_37(l_291.f9, (**g_407));
                }
                else
                {
                    unsigned short l_462 = 65532UL;
                    short *l_463 = &g_198;
                    int l_470 = 0x72C1804DL;
                    int **l_471 = &l_369;
                    union U1 l_490 = {-1L};
                    (*l_471) = (((((l_462 <= ((-7L) == ((*l_463) = (*l_369)))) , (safe_rshift_func_int8_t_s_u((*g_327), 5))) ^ (*g_327)) & (l_470 = (safe_mul_func_int8_t_s_s(((l_458.f4 , (safe_sub_func_int8_t_s_s(((*g_428) , 0L), p_34))) , (*g_327)), (*g_408))))) , l_369);
                    for (l_401.f1 = 2; (l_401.f1 >= (-15)); l_401.f1--)
                    {
                        struct S0 **l_475 = &l_474;
                        struct S0 **l_476 = &g_162;
                        unsigned *l_486 = &l_432.f5;
                        int l_489 = 0xE82F3FEDL;
                        short l_503 = (-1L);
                        (*l_476) = ((*l_475) = l_474);
                        l_477 = &l_395;
                        (*l_413) = (safe_sub_func_int32_t_s_s(((((void*)0 != l_480) ^ l_481) == ((*l_486) = (((safe_mul_func_int16_t_s_s(((*l_463) = (safe_add_func_uint8_t_u_u((*g_408), (((*l_435) = func_35((*g_76))) < 0x15L)))), (**g_144))) , (((((*l_369) , 0x6E4CL) ^ (*l_477)) , p_34) < 0x247309A8L)) & 3UL))), l_458.f3));
                        (*l_369) = (g_247.f2 != (safe_add_func_uint8_t_u_u((+(*l_369)), ((l_489 != ((l_490 , ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((p_34 && l_489) , (safe_add_func_int32_t_s_s(((((func_35(((g_247.f2 != ((g_229 = g_85.f7) ^ (safe_mul_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s(l_503, 7)) & g_59.f3), 14)) | p_34) , 1UL) != l_503), g_85.f9)))) , (*g_76))) == (*g_327)) != (**l_471)) && (*g_145)) || 0x91D5544EL), g_59.f4))), g_54)), 4)) & p_34)) <= (*g_408))) | l_504))));
                    }
                }
                for (g_247.f1 = 0; (g_247.f1 < 2); g_247.f1++)
                {
                    int **l_507 = &l_477;
                    struct S0 l_508 = {29,0x3EF2993FL,0xC37FL,18446744073709551615UL,0L,0x747DA5A2L,1L,1L,0x72L,0x6BL};
                    g_192 = ((*l_507) = &l_395);
                    (*l_474) = l_508;
                    for (g_85.f2 = 0; (g_85.f2 != 6); g_85.f2 = safe_add_func_int32_t_s_s(g_85.f2, 5))
                    {
                        int ***l_512 = (void*)0;
                        int ***l_513 = (void*)0;
                        int ***l_514 = &l_511;
                        (*g_192) = func_35((*g_76));
                        (*g_192) = ((*l_369) = (((*l_514) = l_511) != l_515));
                        return l_458.f0;
                    }
                }
                (*l_529) = ((l_458.f1 & ((l_516 != (p_34 , &l_286)) | (func_35(func_37(g_85.f4, (safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((((safe_mod_func_uint32_t_u_u(((*l_527) = ((*l_369) , (safe_rshift_func_int16_t_s_s(((*g_162) , g_59.f2), (((*l_317) = ((safe_sub_func_uint32_t_u_u(0x599E3116L, p_34)) < 0xE096L)) >= g_85.f4))))), 0x5319D9DAL)) >= 1L) | l_458.f8) >= g_85.f9), (*g_14))), (*l_413))))) , 0UL))) , l_528);
                for (l_293.f7 = 0; (l_293.f7 != 23); l_293.f7 = safe_add_func_uint32_t_u_u(l_293.f7, 6))
                {
                    int l_534 = 0x7F82ABC9L;
                    struct S0 l_541 = {35,-2L,0x070BL,18446744073709551613UL,0L,1UL,0x7D488F8EL,-1L,7L,1UL};
                    for (l_401.f0 = 0; (l_401.f0 >= (-20)); l_401.f0 = safe_sub_func_int16_t_s_s(l_401.f0, 7))
                    {
                        return l_534;
                    }
                    for (g_59.f6 = 0; (g_59.f6 != (-28)); g_59.f6--)
                    {
                        unsigned l_537 = 0UL;
                        int **l_538 = &l_477;
                        l_537 = (-1L);
                        (*l_538) = l_369;
                        l_413 = ((*l_538) = &g_451);
                        l_389 = (*g_162);
                    }
                    for (l_395 = 0; (l_395 >= (-4)); l_395--)
                    {
                        int *l_542 = (void*)0;
                        int *l_543 = &l_432.f6;
                        (*g_162) = l_541;
                        (*l_543) = ((*l_369) = p_34);
                        g_192 = &g_15;
                    }
                }
            }
            for (l_389.f4 = 5; (l_389.f4 < (-9)); l_389.f4 = safe_sub_func_uint8_t_u_u(l_389.f4, 8))
            {
                unsigned short **l_551 = &g_145;
                int ***l_555 = &l_515;
                int *l_561 = (void*)0;
                int *l_562 = &g_247.f0;
                int l_567 = (-5L);
                int **l_568 = &l_413;
                if ((func_35((*g_76)) , 1L))
                {
                    for (l_294 = 0; (l_294 <= 55); ++l_294)
                    {
                        union U1 **l_550 = (void*)0;
                        int ***l_553 = &l_480;
                        int ****l_552 = &l_553;
                        int **l_556 = &l_477;
                        int **l_557 = &l_413;
                        (*g_162) = l_293;
                        (*l_557) = ((*l_556) = func_37(((*g_145) | (safe_add_func_uint16_t_u_u(((void*)0 != l_550), ((((*l_477) = (l_551 == &l_317)) & (7L && p_34)) < ((**g_407) = ((((*l_552) = (void*)0) != (l_554 , l_555)) >= g_59.f5)))))), l_401.f2));
                    }
                }
                else
                {
                    (*l_413) = p_34;
                }
                (*l_568) = func_37((safe_add_func_int8_t_s_s(l_560, func_35(((p_34 = ((*l_562) = p_34)) , func_37((!p_34), p_34))))), (l_293.f0 >= (safe_sub_func_uint16_t_u_u((g_198 && ((safe_sub_func_int8_t_s_s(l_567, l_293.f7)) == 0x6CFE3939L)), l_567))));
            }
        }
        else
        {
            short l_589 = 0L;
            unsigned char *l_629 = &g_59.f9;
            int l_644 = 1L;
            struct S0 l_659 = {34,0x15908BCEL,1UL,0x522DC87EL,0xDCL,0UL,0x543F78BDL,0x11BAC8F7L,-8L,1UL};
            unsigned char l_664 = 1UL;
            unsigned *l_696 = &l_401.f3;
            (*l_477) = ((*l_477) , 0x533807A9L);
            if ((safe_unary_minus_func_int16_t_s(((*g_428) , ((void*)0 != &g_77)))))
            {
                int **l_570 = (void*)0;
                int **l_571 = &l_413;
                (*l_571) = l_413;
            }
            else
            {
                unsigned l_572 = 0xF9A1E60BL;
                int *l_594 = &l_293.f6;
                union U1 *l_596 = &g_97;
                int l_638 = (-9L);
                int *l_648 = &g_85.f7;
                unsigned short l_653 = 65532UL;
                struct S0 l_697 = {7,0xF40B2556L,0x323CL,0UL,0L,4294967295UL,0xFBC879A0L,0xEDBEB683L,-1L,0xF7L};
                if ((l_572 && ((*l_295) == &g_144)))
                {
                    unsigned short l_588 = 0xBC3EL;
                    int *l_636 = (void*)0;
                    unsigned short *l_637 = &g_54;
                    if ((*g_14))
                    {
                        (*l_477) = (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((l_579 == func_35(((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(((*l_477) != ((safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(((func_35((*g_76)) == p_34) , (&g_97 != ((*g_162) , l_316))), (((*g_14) < 1L) == l_588))) & p_34), (*g_192))) , (*l_477))), p_34)) , 0xCCA2D379L), p_34)) , (void*)0))), p_34)), 13)) , (**g_407)), l_572));
                        l_594 = func_37((((*g_145) = 0xF742L) | (l_589 , ((safe_add_func_int32_t_s_s(p_34, 1UL)) > (g_247.f0 != p_34)))), ((((*l_413) && (*l_413)) & (safe_mul_func_uint16_t_u_u(0xF548L, g_85.f2))) , l_589));
                    }
                    else
                    {
                        union U1 *l_595 = &g_97;
                        int **l_603 = &l_477;
                        l_596 = l_595;
                        (*l_603) = func_37(g_247.f3, ((**g_407) = (((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(246UL, (0x378AL || 0x42FAL))), (safe_rshift_func_int16_t_s_u(p_34, 5)))) < func_35((*g_76))) || p_34)));
                    }
                    for (g_59.f1 = (-25); (g_59.f1 < 3); g_59.f1 = safe_add_func_uint32_t_u_u(g_59.f1, 7))
                    {
                        struct S0 *l_606 = (void*)0;
                        struct S0 **l_607 = &l_606;
                        int ***l_608 = &l_515;
                        int l_609 = 0x85BDFB23L;
                        (*l_607) = l_606;
                        (*l_608) = &g_77;
                        return l_609;
                    }
                    if (p_34)
                    {
                        (*g_162) = (*g_162);
                        (*l_477) = 1L;
                    }
                    else
                    {
                        int *l_610 = &g_247.f2;
                        l_610 = l_594;
                    }
                    (*l_413) = (safe_mod_func_uint8_t_u_u(((~0x3E40L) , (*l_413)), (safe_add_func_uint16_t_u_u((**g_144), ((0x2FF9L != (safe_add_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u((l_588 , l_588), (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(((void*)0 == l_629), (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((*l_637) = (safe_lshift_func_int8_t_s_u(func_35(l_636), (**g_407)))), (*l_413))), 0x95L)))) <= 1UL) ^ 0xF0DDAB6FL), l_638)) == p_34), (**g_407))), l_589)))) & p_34) , &l_588) != (void*)0), 0x73D4L)) , &l_480) != &l_515), (*g_408)))) == l_589)))));
                }
                else
                {
                    l_477 = func_37(p_34, p_34);
                }
                for (l_401.f2 = (-13); (l_401.f2 >= (-26)); l_401.f2 = safe_sub_func_int16_t_s_s(l_401.f2, 8))
                {
                    int *l_647 = &l_389.f6;
                    (*l_594) = p_34;
                    if (((*l_413) = (safe_rshift_func_int16_t_s_u((l_644 = (3UL != g_643)), 3))))
                    {
                        return (*g_327);
                    }
                    else
                    {
                        (*l_594) = (p_34 , p_34);
                    }
                    if ((*g_14))
                    {
                        struct S0 **l_645 = (void*)0;
                        struct S0 **l_646 = &g_162;
                        (*g_162) = l_291;
                        (*l_646) = &l_389;
                        l_594 = l_647;
                        (*l_477) = (*l_413);
                    }
                    else
                    {
                        unsigned char l_654 = 0xDAL;
                        union U1 **l_657 = &g_428;
                        union U1 ***l_656 = &l_657;
                        int *l_658 = (void*)0;
                        (*l_656) = ((((*g_76) != ((func_35(l_648) , p_34) , (void*)0)) , (func_35((*l_480)) >= (((*g_327) = (0xE7L | ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(0x42L, l_653)), l_654)) | (*l_647)))) >= g_655))) , &l_596);
                        (*l_594) = 0xB71AA7F2L;
                        l_658 = l_647;
                        l_659 = (*g_162);
                    }
                }
                if (((*l_477) = ((((safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((-5L), p_34)) >= l_664), (p_34 , (*g_408)))) != (safe_lshift_func_uint8_t_u_u(255UL, (~(0xAEC5L ^ ((*g_327) <= l_659.f7)))))) ^ 0UL) & p_34)))
                {
                    int l_678 = 0x97136166L;
                    unsigned *l_688 = &g_59.f3;
                    unsigned **l_687 = &l_688;
                    int **l_689 = (void*)0;
                    int **l_690 = &l_413;
                    for (l_659.f7 = 0; (l_659.f7 == (-4)); l_659.f7--)
                    {
                        int **l_669 = &l_413;
                        (*l_669) = (void*)0;
                        (*g_162) = l_293;
                    }
                    (*l_690) = ((((((*l_648) = (safe_mul_func_uint8_t_u_u(((**g_407) = ((g_85.f3 = (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((l_678 , 6L), ((g_679 == (void*)0) | (***g_680)))) ^ ((*g_327) = (safe_add_func_int32_t_s_s((-9L), (safe_add_func_uint8_t_u_u(((*l_629) = (safe_lshift_func_uint8_t_u_u((l_286 != ((*l_687) = g_14)), 2))), 8L)))))), (-1L))), 7))) , 251UL)), l_678))) , (**g_407)) , g_229) != p_34) , (void*)0);
                }
                else
                {
                    struct S0 **l_691 = &g_162;
                    int **l_692 = &l_594;
                    int **l_693 = &l_413;
                    g_192 = &l_638;
                    (*l_691) = &l_659;
                    (*l_693) = ((*l_692) = &g_655);
                    (**l_691) = (*g_162);
                }
                if (((((l_659.f4 , ((safe_lshift_func_int16_t_s_u((l_696 == g_14), 7)) & (4L != g_247.f3))) , ((*l_515) = &p_34)) != (l_648 = &p_34)) >= 0L))
                {
                    (*g_162) = l_697;
                    for (l_697.f8 = 1; (l_697.f8 <= 20); l_697.f8++)
                    {
                        int **l_700 = &l_413;
                        l_644 = (*g_192);
                        (*l_700) = &l_644;
                        (*g_162) = l_701;
                        (*l_700) = (*l_700);
                    }
                    g_192 = &l_644;
                    return (*g_327);
                }
                else
                {
                    (*g_162) = l_659;
                }
            }
        }
    }
    return p_34;
}







static int func_35(int * p_36)
{
    int *l_217 = &g_97.f1;
    (*l_217) = (*g_14);
    return (*l_217);
}







static int * func_37(unsigned p_38, unsigned char p_39)
{
    int *l_199 = &g_97.f1;
    unsigned char ***l_214 = (void*)0;
    int **l_216 = &l_199;
    (*l_199) = p_39;
    for (g_59.f2 = 0; (g_59.f2 < 56); g_59.f2 = safe_add_func_int32_t_s_s(g_59.f2, 1))
    {
        int *l_202 = &g_97.f1;
        struct S0 **l_215 = &g_162;
        l_202 = &g_15;
        (*l_199) = (safe_rshift_func_int8_t_s_s((*l_199), 1));
        if ((*l_202))
        {
            int *l_205 = &g_85.f6;
            int **l_206 = (void*)0;
            int **l_207 = &l_202;
            (*l_207) = l_205;
            return l_205;
        }
        else
        {
            (*l_199) = ((*l_202) > ((safe_rshift_func_int8_t_s_u(1L, g_85.f6)) & (safe_mul_func_uint16_t_u_u((*l_202), (safe_rshift_func_uint8_t_u_u(p_39, ((void*)0 == l_214)))))));
        }
        (*l_215) = &g_85;
    }
    (*l_216) = l_199;
    (*g_162) = (*g_162);
    return l_199;
}







static union U1 func_44(int * p_45, int * p_46, int * p_47, unsigned p_48)
{
    unsigned short *l_53 = &g_54;
    int l_55 = 0xB5A47B6CL;
    struct S0 *l_58 = &g_59;
    union U1 l_63 = {-5L};
    int ***l_142 = (void*)0;
    short l_197 = 0xEDDAL;
    if ((((safe_lshift_func_uint16_t_u_s(((*l_53) = g_15), 2)) , p_48) & ((p_48 , l_55) == l_55)))
    {
        int *l_57 = &l_55;
        int **l_56 = &l_57;
        struct S0 **l_60 = &l_58;
        (*l_56) = p_47;
        (*l_60) = l_58;
        (*l_60) = &g_59;
    }
    else
    {
        int l_71 = 0x6BEFC544L;
        int *l_80 = &l_55;
        struct S0 l_117 = {15,0xB8B4D839L,0x3135L,0UL,0xBFL,4294967293UL,-1L,0x8A8B4E14L,0L,0x0AL};
        char l_172 = 1L;
        if (((void*)0 == &g_14))
        {
            char l_68 = 0L;
            int *l_75 = &g_59.f1;
            int **l_74 = &l_75;
            int ***l_78 = &g_76;
            for (g_59.f1 = (-11); (g_59.f1 >= (-2)); g_59.f1 = safe_add_func_int16_t_s_s(g_59.f1, 4))
            {
                return l_63;
            }
            for (l_63.f1 = 0; (l_63.f1 < (-12)); l_63.f1 = safe_sub_func_int16_t_s_s(l_63.f1, 6))
            {
                unsigned char *l_72 = &g_59.f9;
                int *l_73 = &l_55;
                (*l_73) = ((safe_add_func_int8_t_s_s(l_68, ((safe_mul_func_uint16_t_u_u(p_48, 5L)) > 0UL))) , ((~((*l_72) = l_71)) == (g_54 , g_59.f3)));
                if ((*g_14))
                    continue;
            }
            (*l_74) = p_45;
            (*l_78) = g_76;
        }
        else
        {
            int *l_79 = (void*)0;
            l_79 = p_45;
        }
        (*l_80) = (*p_47);
        if ((*g_14))
        {
            char l_92 = 0x1CL;
            int l_114 = 0L;
            unsigned l_129 = 1UL;
            int *l_131 = &l_63.f1;
            struct S0 **l_159 = &l_58;
            struct S0 **l_160 = &l_58;
            struct S0 ***l_163 = &l_160;
            int **l_173 = &l_131;
            for (g_59.f3 = 0; (g_59.f3 >= 37); g_59.f3++)
            {
                struct S0 *l_83 = (void*)0;
                struct S0 *l_84 = &g_85;
                int l_86 = 0x4E9C127CL;
                int *l_93 = (void*)0;
                int *l_94 = &l_86;
                int **l_135 = &l_93;
                int ***l_134 = &l_135;
                (*l_84) = (*l_58);
            }
            if ((safe_rshift_func_int16_t_s_s((*l_80), 7)))
            {
                int *l_150 = &l_63.f1;
                int **l_151 = &l_150;
                union U1 l_152 = {0x7D20874AL};
                if ((*g_14))
                {
                    int **l_149 = &l_80;
                    p_45 = ((*l_149) = &g_15);
                }
                else
                {
                    (*l_58) = g_59;
                }
                (*l_151) = (p_48 , l_150);
                return l_152;
            }
            else
            {
                int **l_153 = (void*)0;
                int **l_154 = &l_131;
                (*l_154) = p_46;
                (*l_80) = (*l_80);
            }
            (*l_173) = (((0x1FL ^ ((!(((safe_mul_func_int8_t_s_s((*l_80), ((+((safe_add_func_uint32_t_u_u((g_85.f6 || (((((l_159 = &l_58) != ((*l_163) = (g_161 = l_160))) && (((*l_53) = l_55) <= (safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((0x30FA3D1AL >= (*p_47)), (safe_mod_func_uint16_t_u_u((p_48 != l_172), 0xC133L)))), (*g_14))), (*l_80))))) > p_48) , 0xE866L)), p_48)) <= 0xDD622E13L)) , g_54))) , (void*)0) == p_45)) == p_48)) , (*l_80)) , &g_15);
            (*l_80) = l_55;
        }
        else
        {
            int l_195 = 0xDE51AEE0L;
            int *l_196 = &l_55;
            for (g_54 = (-11); (g_54 != 57); ++g_54)
            {
                int **l_176 = &l_80;
                int *l_178 = &l_71;
                int **l_177 = &l_178;
                struct S0 *l_183 = &g_85;
                (*l_177) = ((*l_176) = p_47);
                for (l_63.f0 = (-24); (l_63.f0 < 28); ++l_63.f0)
                {
                    l_55 = l_63.f3;
                    for (l_117.f7 = 0; (l_117.f7 == (-11)); l_117.f7--)
                    {
                        union U1 *l_185 = &l_63;
                        union U1 **l_184 = &l_185;
                        union U1 *l_187 = &l_63;
                        union U1 **l_186 = &l_187;
                        unsigned char *l_190 = &g_59.f9;
                        unsigned char **l_189 = &l_190;
                        unsigned char ***l_188 = &l_189;
                        (*g_161) = l_183;
                        (*l_186) = ((*l_184) = &l_63);
                        (*l_188) = (void*)0;
                    }
                    g_191 = &p_45;
                    (*g_192) = (safe_add_func_uint16_t_u_u(p_48, (((**g_144) = p_48) && l_195)));
                }
            }
            l_196 = (void*)0;
            (*g_191) = (*g_191);
        }
        l_197 = (-3L);
    }
    return l_63;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
    transparent_crc(g_59.f3, "g_59.f3", print_hash_value);
    transparent_crc(g_59.f4, "g_59.f4", print_hash_value);
    transparent_crc(g_59.f5, "g_59.f5", print_hash_value);
    transparent_crc(g_59.f6, "g_59.f6", print_hash_value);
    transparent_crc(g_59.f7, "g_59.f7", print_hash_value);
    transparent_crc(g_59.f8, "g_59.f8", print_hash_value);
    transparent_crc(g_59.f9, "g_59.f9", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_85.f3, "g_85.f3", print_hash_value);
    transparent_crc(g_85.f4, "g_85.f4", print_hash_value);
    transparent_crc(g_85.f5, "g_85.f5", print_hash_value);
    transparent_crc(g_85.f6, "g_85.f6", print_hash_value);
    transparent_crc(g_85.f7, "g_85.f7", print_hash_value);
    transparent_crc(g_85.f8, "g_85.f8", print_hash_value);
    transparent_crc(g_85.f9, "g_85.f9", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_97.f2, "g_97.f2", print_hash_value);
    transparent_crc(g_97.f3, "g_97.f3", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_247.f0, "g_247.f0", print_hash_value);
    transparent_crc(g_247.f1, "g_247.f1", print_hash_value);
    transparent_crc(g_247.f2, "g_247.f2", print_hash_value);
    transparent_crc(g_247.f3, "g_247.f3", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_724, "g_724", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
