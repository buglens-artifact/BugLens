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
   signed f0 : 6;
};

struct S1 {
   unsigned char f0;
   unsigned short f1;
   int f2;
   int f3;
   int f4;
   struct S0 f5;
   int f6;
   char f7;
   short f8;
   unsigned f9;
};


static char g_4 = 0xEFL;
static unsigned short g_14 = 0x7706L;
static unsigned short g_22 = 0xA955L;
static unsigned short *g_21 = &g_22;
static struct S1 g_45 = {255UL,65535UL,-7L,-1L,0x72327932L,{-1},0xAEAD2214L,-1L,0xDBA5L,4294967288UL};
static int *g_72 = &g_45.f3;
static unsigned char g_105 = 0UL;
static struct S1 g_128 = {7UL,65529UL,-1L,0L,0x40CD4C67L,{-6},0x30793195L,0x3BL,0x0DCCL,0x59033EFAL};
static unsigned short g_134 = 7UL;
static unsigned char g_141 = 246UL;
static unsigned g_147 = 0x37B4EEC5L;
static int *g_216 = (void*)0;
static short g_218 = 0x0405L;
static int **g_252 = &g_72;
static int ***g_251 = &g_252;
static unsigned char *g_256 = &g_45.f0;
static struct S1 *g_281 = &g_128;
static char *g_318 = &g_128.f7;
static char **g_317 = &g_318;
static unsigned *g_362 = &g_147;
static unsigned **g_361 = &g_362;
static unsigned ***g_360 = &g_361;
static struct S0 *g_378 = &g_45.f5;
static unsigned g_443 = 0x9253BF1AL;
static unsigned g_548 = 0x4032D324L;



static unsigned char func_1(void);
static unsigned char func_5(struct S0 p_6, struct S0 p_7, unsigned p_8);
static struct S0 func_9(int p_10, unsigned short p_11, int p_12);
static short func_15(unsigned p_16, int p_17, char p_18, unsigned short p_19);
static int func_25(unsigned short * p_26, unsigned short * p_27, int p_28);
static unsigned short * func_29(struct S0 p_30, unsigned short * p_31, unsigned short p_32, unsigned short * p_33, short p_34);
static struct S0 func_35(struct S0 p_36, unsigned short * p_37, unsigned short * p_38, unsigned short * p_39);
static struct S0 func_40(unsigned short p_41, struct S1 p_42, unsigned char p_43, int p_44);
static unsigned short * func_55(unsigned p_56);
static struct S1 func_58(unsigned short p_59, char p_60, unsigned p_61, unsigned short * p_62);
static unsigned char func_1(void)
{
    unsigned short *l_13 = &g_14;
    int l_20 = 1L;
    struct S0 l_546 = {1};
    g_548 |= ((safe_div_func_uint8_t_u_u(g_4, func_5(func_9(g_4, ((*l_13) ^= g_4), (func_15((((l_20 && 0x7DL) || (g_21 == (void*)0)) | l_20), (safe_sub_func_int32_t_s_s((func_25(func_29(func_35(func_40((*g_21), g_45, g_4, g_45.f6), l_13, g_21, l_13), l_13, g_4, g_21, l_20), g_21, g_443) != l_20), l_20)), l_20, l_20) | 0x2B4CL)), l_546, g_4))) || 1L);

    ;


    ;
    ;
    ;

    (*g_252) = &l_20;



    (*g_281) = (*g_281);
    for (g_128.f8 = 20; (g_128.f8 < (-2)); --g_128.f8)
    {
        int *l_551 = &g_45.f6;
        (*g_252) = l_551;


        if ((*l_551))
            break;
        return (*g_256);



    }


    return (*g_256);



}







static unsigned char func_5(struct S0 p_6, struct S0 p_7, unsigned p_8)
{
    int l_547 = 8L;
    return l_547;
}







static struct S0 func_9(int p_10, unsigned short p_11, int p_12)
{
    int *l_544 = &g_45.f3;
    struct S0 l_545 = {5};
    (*g_252) = l_544;


    (*l_544) |= (-1L);
    return l_545;
}







static short func_15(unsigned p_16, int p_17, char p_18, unsigned short p_19)
{
    short l_493 = (-1L);
    int *l_494 = &g_128.f3;
    struct S0 **l_502 = (void*)0;
    unsigned short *l_504 = &g_22;
    int l_522 = 0x89689C45L;
    struct S1 **l_526 = &g_281;
    struct S1 ***l_525 = &l_526;
    struct S1 ****l_524 = &l_525;
    struct S1 ****l_527 = &l_525;
    struct S0 l_536 = {7};
    unsigned l_538 = 0x27E0605EL;
    short l_539 = (-4L);
    unsigned short *l_542 = &g_22;
    if (p_17)
    {
        unsigned short *l_505 = &g_128.f1;
        int l_506 = 0xB0E0188DL;
        struct S1 l_515 = {0x26L,0xEDF9L,1L,0L,0xE4DEB5FCL,{-0},-8L,-9L,0x7679L,0UL};
        struct S0 *l_519 = &l_515.f5;
        if (l_493)
        {
            (*g_252) = l_494;

            ;
        }
        else
        {
            int ***l_495 = (void*)0;
            unsigned *l_500 = &g_128.f9;
            if (((g_252 = &g_216) == &l_494))
            {
                short *l_501 = &g_218;
                int *l_503 = &g_45.f2;
                if (((*l_494) = ((g_443 < (safe_add_func_int32_t_s_s((0x9BL | (safe_rshift_func_int8_t_s_s((*l_494), (((!g_128.f1) != 0xE0E3L) >= ((*l_501) = ((void*)0 != l_500)))))), ((*l_503) = ((void*)0 == l_502))))) & g_45.f4)))
                {
                    (*l_494) = func_25(l_504, l_505, l_506);
                    (*g_252) = (*g_252);
                    return p_18;
                }
                else
                {
                    int l_510 = 0xEA7CCC55L;
                    for (g_128.f4 = 10; (g_128.f4 < 10); g_128.f4++)
                    {
                        int l_509 = 0x97B36C43L;
                        l_510 ^= l_509;
                    }
                    if ((l_510 ^ func_25(&g_22, &g_134, (*l_494))))
                    {
                        (*l_503) |= p_18;
                        (*g_252) = &l_506;

                        ;
                        (*l_503) |= 0x508F9339L;
                        (*g_252) = (*g_252);
                    }
                    else
                    {
                        unsigned l_511 = 18446744073709551608UL;
                        return l_511;
                    }

                    ;
                }

                ;
                l_494 = l_503;

                ;
            }
            else
            {
                int *l_516 = &g_45.f2;
lbl_514:
                (*l_494) |= p_17;
                for (g_128.f7 = (-3); (g_128.f7 > 11); ++g_128.f7)
                {
                    if (g_45.f4)
                        goto lbl_514;
                }
                (*g_281) = l_515;
                if (p_19)
                {
                    unsigned short **l_517 = &g_21;
                    unsigned l_518 = 0x9931F430L;
                    (*g_252) = l_516;

                    ;
                    (*g_216) |= func_25(((*l_517) = &g_134), &g_134, l_518);

                    ;
                    (*g_252) = l_516;
                }
                else
                {
                    struct S0 **l_520 = &l_519;
                    int l_521 = 0xB8112128L;
                    (*l_520) = l_519;
                    return l_521;
                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
            return g_45.f8;


        }

        ;
    }
    else
    {
        unsigned short *l_523 = &g_22;
        struct S1 *****l_528 = &l_527;
        struct S0 l_535 = {2};
        unsigned short *l_537 = &g_128.f1;
        short *l_543 = &l_493;
        l_522 |= (p_18 > (*l_494));
        g_45.f6 = func_25(l_523, l_504, ((l_524 == ((*l_528) = l_527)) < (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(func_25(func_29((l_536 = l_535), l_537, p_16, &p_19, l_539), &g_22, l_535.f0), 0x4215D6DCL)), 2)), 5))));
        (*l_494) = (safe_lshift_func_int16_t_s_u(((*l_543) ^= (~func_25(&g_134, l_542, ((*g_362) ^ (*g_362))))), 10));
        l_494 = &l_522;

        ;
    }


    ;
    (*g_252) = &l_522;

    ;
    return g_128.f1;


}







static int func_25(unsigned short * p_26, unsigned short * p_27, int p_28)
{
    unsigned short l_491 = 0xF936L;
    int *l_492 = &g_128.f6;
    l_491 = (&g_256 != (void*)0);
    (*l_492) = p_28;
    return (*l_492);
}







static unsigned short * func_29(struct S0 p_30, unsigned short * p_31, unsigned short p_32, unsigned short * p_33, short p_34)
{
    int **l_489 = &g_72;
    unsigned short *l_490 = &g_45.f1;
    l_489 = (void*)0;

    ;
    return l_490;


}







static struct S0 func_35(struct S0 p_36, unsigned short * p_37, unsigned short * p_38, unsigned short * p_39)
{
    unsigned l_454 = 4294967289UL;
    int *l_455 = (void*)0;
    int *l_456 = &g_45.f2;
    int ***l_480 = (void*)0;
    unsigned char **l_484 = &g_256;
    struct S0 l_488 = {-5};
    l_454 &= 0x597CF565L;
    if (((*l_456) = l_454))
    {
        unsigned short l_461 = 6UL;
        int l_462 = 1L;
        l_462 &= (safe_div_func_int8_t_s_s((*g_318), (safe_div_func_int32_t_s_s(l_461, ((*g_362) = (***g_360))))));
    }
    else
    {
        int *l_472 = &g_128.f6;
        struct S1 l_485 = {255UL,0xD91FL,-1L,0x1FA6C8D0L,4L,{1},0x045376FBL,0xDFL,0x07F6L,1UL};
        for (g_128.f8 = 0; (g_128.f8 > 7); g_128.f8 = safe_add_func_uint8_t_u_u(g_128.f8, 9))
        {
            int *l_471 = &g_128.f2;
            struct S1 l_487 = {0x4BL,0xE167L,0xE8542A74L,0x02C83728L,0xCA029102L,{-0},-3L,0xE5L,-1L,1UL};
            (*l_456) = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((*g_318) = p_36.f0), 0)), 12));
            if (p_36.f0)
            {
                int *l_481 = (void*)0;
                int *l_483 = &g_128.f6;
                for (g_45.f1 = (-2); (g_45.f1 == 31); g_45.f1 = safe_add_func_int8_t_s_s(g_45.f1, 4))
                {
                    int *l_476 = &g_128.f2;
                    struct S0 **l_482 = &g_378;
                    l_472 = l_471;

                    ;
                    if ((safe_add_func_int8_t_s_s(p_36.f0, p_36.f0)))
                    {
                        int *l_475 = &g_45.f2;
                        l_476 = l_475;

                        ;
                    }
                    else
                    {
                        int ***l_479 = &g_252;
                        (*l_471) ^= ((*g_21) ^ (*g_21));
                        (*l_476) ^= (safe_add_func_int32_t_s_s((l_479 != (g_251 = l_480)), 0xDA5837B5L));

                        ;
                        if ((*l_472))
                            continue;
                        (*g_252) = l_481;

                        ;
                    }

                    ;
                    (*l_482) = &p_36;

                    ;
                    (*g_252) = l_483;

                    ;
                }
            }
            else
            {
                struct S1 *l_486 = &l_485;
                (*l_471) ^= ((((void*)0 == l_484) ^ 0x267C3B29L) != ((*g_256) = (+(*g_256))));
                l_487 = ((*l_486) = l_485);
            }
        }


        ;
        ;
        ;
    }


    ;
    ;
    return l_488;


}







static struct S0 func_40(unsigned short p_41, struct S1 p_42, unsigned char p_43, int p_44)
{
    unsigned short *l_50 = &g_22;
    int l_163 = (-1L);
    unsigned l_178 = 0xF823E191L;
    int *l_179 = &g_45.f3;
    struct S1 **l_180 = (void*)0;
    struct S0 l_194 = {-3};
    unsigned l_237 = 0xB5BA2BE6L;
    int ***l_249 = (void*)0;
    unsigned char *l_255 = (void*)0;
    unsigned l_294 = 0UL;
    short *l_339 = &g_218;
    unsigned l_340 = 0x2247DC22L;
    unsigned char **l_341 = &g_256;
    struct S0 *l_399 = (void*)0;
    short l_425 = 0x26FEL;
    int **l_442 = &l_179;
    if ((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u((&g_22 == l_50), 6)) < 0x01L), 3)))
    {
        unsigned short *l_131 = &g_22;
        int l_172 = 0x0BC308E4L;
        for (g_45.f8 = 15; (g_45.f8 == 27); g_45.f8 = safe_add_func_uint32_t_u_u(g_45.f8, 9))
        {
            unsigned short l_137 = 0x0119L;
            char *l_152 = &g_4;
            char *l_164 = &g_128.f7;
            int *l_165 = &g_128.f2;
            struct S1 *l_166 = &g_128;
            struct S1 l_167 = {0xDFL,0x7533L,-5L,6L,-4L,{-6},9L,-7L,-3L,0xCC1BE0C0L};
            for (g_45.f2 = 3; (g_45.f2 < 16); g_45.f2++)
            {
                unsigned short **l_130 = &l_50;
                int l_132 = 1L;
                unsigned short *l_133 = &g_134;
                unsigned char **l_138 = (void*)0;
                unsigned char *l_140 = &g_141;
                unsigned char **l_139 = &l_140;
                unsigned char **l_142 = (void*)0;
                unsigned char *l_144 = &g_141;
                unsigned char **l_143 = &l_144;
                unsigned *l_145 = (void*)0;
                unsigned *l_146 = &g_147;
                char l_153 = 0x37L;
                int *l_154 = &g_128.f3;
            }
            (*g_72) |= (p_42.f5.f0 >= ((g_45.f2 & (l_137 <= (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_45.f1, ((*l_164) = (safe_lshift_func_uint8_t_u_s(((!(((((0x66L & ((safe_lshift_func_uint16_t_u_s((g_45.f5.f0 == p_44), (((*g_21) | l_137) != 1UL))) <= l_163)) | 0x5AAFL) != (-6L)) > p_42.f6) || 4294967295UL)) < l_163), 1))))), 2)))) ^ p_42.f1));
            p_42.f3 = ((*l_165) = ((*g_72) |= p_42.f6));
            l_167 = ((*l_166) = g_128);
        }
        (*g_72) ^= ((safe_lshift_func_int16_t_s_u(l_163, 12)) != (g_45.f9 <= l_172));
    }
    else
    {
        int *l_173 = &g_128.f2;
        if ((&g_22 == &p_41))
        {
            return g_128.f5;
        }
        else
        {
            int **l_174 = (void*)0;
            int **l_175 = &l_173;
            (*l_175) = l_173;
            return g_128.f5;
        }
    }
lbl_346:
    (*g_72) = ((p_44 & (l_163 || (255UL != p_42.f5.f0))) < (safe_rshift_func_uint16_t_u_u(l_178, 11)));
lbl_327:
    if ((l_163 | l_163))
    {
        struct S1 ***l_181 = &l_180;
        int **l_189 = &l_179;
        int **l_191 = &g_72;
        l_179 = &l_163;

        ;
        (*l_181) = l_180;
        if ((*g_72))
        {
            (*l_179) = (safe_add_func_uint16_t_u_u(p_42.f7, p_41));
        }
        else
        {
            unsigned short l_188 = 0x6DDAL;
            int ***l_190 = &l_189;
            char l_195 = 4L;
            struct S1 ***l_229 = &l_180;
            short l_235 = (-1L);
            struct S1 *l_236 = (void*)0;
            (*g_72) |= (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((*l_179), g_45.f0)), 1));
            p_42.f5.f0 |= ((p_42.f8 && l_188) | (((*l_190) = l_189) != l_191));
            if ((safe_add_func_int16_t_s_s(g_45.f0, g_128.f1)))
            {
                return l_194;
            }
            else
            {
                unsigned short l_200 = 65528UL;
                int *l_215 = &g_128.f2;
                int ****l_250 = &l_249;
                unsigned char *l_257 = &g_128.f0;
                short *l_258 = (void*)0;
                short *l_259 = (void*)0;
                short *l_260 = &g_128.f8;
            }
        }
        (**g_251) = (*l_191);
    }
    else
    {
        int *l_292 = &g_128.f2;
        unsigned short *l_293 = &g_128.f1;
        struct S0 *l_296 = (void*)0;
        int l_309 = 0L;
        (**g_251) = l_292;

        ;
        (*g_281) = func_58((*l_292), p_44, p_42.f9, l_293);

        ;
        if ((*l_292))
        {
            (**g_251) = (*g_252);
            (***g_251) &= 0L;
        }
        else
        {
            int *l_295 = &g_45.f3;
            int ****l_324 = &l_249;
            if (p_41)
            {
                struct S0 **l_297 = (void*)0;
                struct S0 **l_298 = &l_296;
                unsigned *l_305 = &g_128.f9;
                char *l_306 = &g_128.f7;
                l_294 = ((*g_72) |= 0xD6ACB4F6L);
                (**g_251) = l_295;

                ;
                (*l_298) = l_296;
                if (g_45.f3)
                    goto lbl_327;
                (*g_281) = func_58((*g_21), ((*l_306) = (g_4 ^ (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((l_305 == (void*)0) & (1L == (*g_21))), (-9L))), (*l_292))), 0)))), (safe_lshift_func_int8_t_s_u(g_45.f5.f0, (*g_256))), l_293);

                ;
            }
            else
            {
                (*l_179) = (~(**g_252));
                if ((l_309 | (safe_unary_minus_func_int16_t_s(p_42.f9))))
                {
                    (*l_295) &= ((*l_292) ^= (-8L));
                    (*g_252) = (*g_252);
                }
                else
                {
                    (*l_292) &= p_42.f1;
                }
            }
            l_292 = (l_295 = &l_309);

            ;
            ;
            for (g_45.f4 = 0; (g_45.f4 > 19); ++g_45.f4)
            {
                for (g_128.f3 = 0; (g_128.f3 != (-9)); g_128.f3 = safe_sub_func_int8_t_s_s(g_128.f3, 5))
                {
                    int *l_321 = &l_163;
                    if ((***g_251))
                    {
                        if (p_43)
                            break;
                        return g_45.f5;
                    }
                    else
                    {
                        struct S0 *l_315 = (void*)0;
                        struct S0 *l_316 = &g_128.f5;
                        char ***l_319 = (void*)0;
                        char ***l_320 = &g_317;
                        (*l_316) = p_42.f5;
                        (*l_320) = g_317;
                        (*g_252) = (l_321 = (**g_251));

                        ;
                    }

                    ;
                    (*l_292) ^= (***g_251);
                }
                (**g_252) ^= ((p_42.f1 = ((*l_293) = (l_324 != (void*)0))) && (g_128.f9 == (0xA5L != (&l_50 == &g_21))));
            }
        }

        ;
    }
    if ((p_42.f3 <= (safe_sub_func_int32_t_s_s(((*l_179) = (**g_252)), ((safe_div_func_int8_t_s_s(1L, (safe_unary_minus_func_int32_t_s((safe_div_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(p_42.f0, p_42.f6)) <= 2L), (safe_mod_func_int16_t_s_s(((*l_339) = g_45.f8), l_340)))))))) != (((((*l_341) = &g_105) == (void*)0) | 0x399AEB2DL) ^ (*g_318)))))))
    {
        unsigned ***l_363 = (void*)0;
        int l_368 = 0x3E7410D0L;
        struct S0 *l_379 = &g_45.f5;
        char ***l_439 = &g_317;
        if (((**g_252) > (*l_179)))
        {
            for (g_141 = (-6); (g_141 == 8); ++g_141)
            {
                (*g_72) = (&g_141 == (void*)0);
                if ((**g_252))
                    continue;
                (*l_179) = 0x6EF0B126L;
                return p_42.f5;
            }
        }
        else
        {
            unsigned *l_352 = &g_128.f9;
            unsigned **l_351 = &l_352;
            char l_359 = 0xB0L;
            char ***l_396 = &g_317;
            for (l_237 = 6; (l_237 == 58); ++l_237)
            {
                if (l_194.f0)
                    goto lbl_346;
            }
            if ((***g_251))
            {
                struct S0 *l_347 = &g_45.f5;
                struct S0 *l_348 = &g_128.f5;
                (**g_251) = (**g_251);
                (*l_348) = ((*l_347) = p_42.f5);
                (*g_252) = (void*)0;

                ;
            }
            else
            {
                int *l_358 = &g_128.f6;
                char ***l_395 = &g_317;
                if ((p_42.f4 >= (**g_252)))
                {
                    p_42.f6 &= (safe_mod_func_int32_t_s_s(p_42.f2, p_42.f1));
                    (*g_252) = (**g_251);
                }
                else
                {
                    int *l_371 = &l_163;
                    if (((***g_251) = p_42.f4))
                    {
                        unsigned ***l_353 = &l_351;
                        (*l_353) = l_351;
                        (*l_179) |= ((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(((p_42.f0 ^ (((void*)0 == l_358) | ((*l_339) = ((l_359 |= (**g_317)) < p_42.f0)))) && p_41), ((g_360 == l_363) | (safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((*l_358), 4294967295UL)), 0x6B09L))))), p_42.f7)) >= p_44);
                        (*g_72) &= l_368;
                        (**g_251) = (void*)0;

                        ;
                    }
                    else
                    {
                        (*l_179) = (p_42.f2 | (safe_sub_func_int8_t_s_s(((*g_318) = (*l_179)), (4UL | (*l_358)))));
                        (**g_251) = (void*)0;

                        ;
                        (**g_251) = l_371;

                        ;
                        (*g_72) = (safe_add_func_int32_t_s_s(p_42.f3, (((safe_mod_func_uint16_t_u_u(((*g_21) = (*g_21)), p_42.f6)) <= (+(*l_371))) == (safe_lshift_func_uint8_t_u_s(254UL, 7)))));
                    }

                    ;
                    (*g_252) = l_371;

                    ;
                }

                ;
                l_379 = g_378;
                if (((p_42.f9 && (safe_unary_minus_func_uint8_t_u(((*g_256) &= l_359)))) == ((safe_lshift_func_uint8_t_u_u(1UL, 4)) | ((safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((*g_21), (0xBE4D7167L != (safe_sub_func_int8_t_s_s(((**g_317) = ((safe_rshift_func_int16_t_s_s(((*g_362) >= ((*l_352) = (safe_sub_func_uint8_t_u_u((0x5061L != (3UL || ((*l_358) >= g_45.f4))), p_42.f4)))), 11)) <= p_42.f8)), l_368))))) ^ (*l_179)), 4UL)) < 0x14E5A0B5L))))
                {
                    struct S0 *l_397 = &g_45.f5;
                    struct S0 **l_398 = (void*)0;
                    if ((((*g_256) &= ((((safe_rshift_func_uint16_t_u_s((*l_358), 0)) & (250UL && 255UL)) & (((***g_251) || 5L) ^ l_368)) || (l_395 != l_396))) > (((((l_399 = l_397) != (void*)0) | (***g_360)) < (*g_318)) ^ 0x784FL)))
                    {
                        int *l_400 = &g_45.f3;
                        (*g_252) = l_400;

                        ;
                        if (p_43)
                            goto lbl_401;
lbl_401:
                        (**g_251) = l_400;
                        p_42.f2 &= (((safe_div_func_uint16_t_u_u(0UL, g_128.f5.f0)) >= (*g_318)) | ((**l_341) = p_42.f5.f0));
                        l_368 |= (l_359 != (1UL != 3UL));
                    }
                    else
                    {
                        (**g_251) = l_352;

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    int l_412 = 0xB975F753L;
                    int *l_414 = (void*)0;
                    unsigned l_428 = 0xE5FE0C15L;
                    for (g_134 = (-2); (g_134 == 15); g_134 = safe_add_func_uint8_t_u_u(g_134, 4))
                    {
                        (*l_358) = (safe_lshift_func_int8_t_s_u(((&g_21 == &g_21) > (safe_mod_func_int8_t_s_s(p_42.f8, p_44))), 6));
                        l_412 |= (*g_72);
                    }
                    if (g_4)
                        goto lbl_413;
lbl_413:
                    (*l_358) &= 0xB2D02EE9L;
                    l_414 = l_358;

                    ;
                    l_428 = ((*l_414) = (~((safe_rshift_func_int16_t_s_s(((*l_351) != l_414), 15)) != ((safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((p_41 | (safe_div_func_int32_t_s_s(l_425, (*l_414)))), 1L)), 5)) != (safe_rshift_func_int8_t_s_u(p_41, ((((**g_252) = 0x9226B48DL) > (((*g_256) > p_42.f2) < 0x1A96EA2AL)) != (-6L))))), p_42.f5.f0)) | p_42.f9))));
                }

                ;
                ;
            }

            ;
            ;
        }

        ;
        ;
        for (g_128.f2 = (-16); (g_128.f2 != 19); g_128.f2 = safe_add_func_int32_t_s_s(g_128.f2, 9))
        {
            (*l_379) = p_42.f5;
            for (g_134 = (-1); (g_134 >= 38); g_134 = safe_add_func_int32_t_s_s(g_134, 6))
            {
                struct S1 **l_436 = &g_281;
                for (g_45.f6 = (-3); (g_45.f6 < (-19)); g_45.f6 = safe_sub_func_uint8_t_u_u(g_45.f6, 8))
                {
                    (*l_179) = (safe_unary_minus_func_int8_t_s(((((void*)0 == l_436) >= (safe_mod_func_int16_t_s_s(((*l_339) = g_128.f8), (-2L)))) <= (((void*)0 != l_439) & 0x38FDL))));
                }
            }
        }
        (*g_378) = (*l_379);
        for (l_178 = 27; (l_178 <= 35); l_178++)
        {
            if ((l_442 == (*g_251)))
            {
                return (*g_378);


            }
            else
            {
                short l_446 = 0x5680L;
                (*l_179) = g_443;
                (**l_442) |= (l_446 ^= (safe_add_func_uint32_t_u_u((!p_42.f8), 0UL)));
            }
        }
    }
    else
    {
        unsigned *l_449 = &g_128.f9;
        unsigned short *l_452 = &g_134;
        struct S1 l_453 = {7UL,0x704DL,1L,0xDA6627D5L,0L,{3},0L,0xBEL,0x1FFDL,0xDA756A63L};
        (*g_281) = l_453;
        (*l_179) = l_453.f8;
        return (*g_378);
    }

    ;
    ;
    ;
    return (*g_378);


}







static unsigned short * func_55(unsigned p_56)
{
    unsigned l_57 = 18446744073709551615UL;
    struct S1 l_129 = {0x8BL,0xBB58L,0x299C91EDL,0x30E403E3L,0xBEA0BD57L,{-1},-4L,0L,0x9D43L,3UL};
    g_45.f5.f0 = l_57;
    l_129 = func_58((*g_21), l_57, l_57, &g_22);

    ;
    return &g_22;


}







static struct S1 func_58(unsigned short p_59, char p_60, unsigned p_61, unsigned short * p_62)
{
    int l_65 = 1L;
    int *l_96 = &g_45.f6;
    unsigned l_115 = 0x604A327EL;
    struct S0 l_126 = {1};
    struct S1 *l_127 = &g_128;
    if (((g_45.f0 < (~(0x8E0D3184L || (p_60 != ((*p_62) = (*g_21)))))) < (safe_mod_func_int32_t_s_s(l_65, (4294967292UL & p_61)))))
    {
        int *l_67 = &g_45.f2;
        int **l_66 = &l_67;
        (*l_66) = (void*)0;

        ;
    }
    else
    {
        int l_68 = 0x62D7FAEFL;
        int *l_69 = &g_45.f6;
        int **l_123 = &g_72;
        (*l_69) ^= l_68;
        for (g_45.f9 = 0; (g_45.f9 < 28); g_45.f9 = safe_add_func_uint8_t_u_u(g_45.f9, 9))
        {
            int *l_77 = &g_45.f3;
            g_72 = g_72;
            (*l_69) |= (*g_72);
            for (g_45.f0 = 0; (g_45.f0 < 21); ++g_45.f0)
            {
                unsigned l_92 = 0x5E7B382EL;
                int l_114 = 0L;
                if ((safe_div_func_int8_t_s_s((+p_59), (l_65 && 0x0E2E800BL))))
                {
                    g_72 = l_77;

                    ;
                }
                else
                {
                    unsigned l_90 = 1UL;
                    char *l_91 = &g_45.f7;
                    unsigned char *l_104 = &g_105;
                    unsigned short l_106 = 65529UL;
                    if ((+(((((0x66L && ((((((+(0xA6L && (&g_22 != &g_22))) != (safe_sub_func_uint16_t_u_u((g_45.f1 && g_22), (safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(g_4, ((*l_91) = (((safe_sub_func_uint16_t_u_u((p_59 |= (g_45.f2 != (safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((((((*l_69) != l_65) || 0x05BCAFB9L) & l_90) | 0x370A27EAL), 0)) > (*l_69)), g_45.f7)))), g_45.f9)) < p_60) && p_60)))), (*l_77)))))) != l_65) ^ 0xFCEFL) < g_22) == p_61)) || l_90) || 0x42L) && l_92) && l_90)))
                    {
                        int *l_93 = (void*)0;
                        int **l_94 = &l_77;
                        struct S1 l_95 = {0x8CL,0x9D87L,-4L,0L,0x432604E4L,{5},0x9911037DL,0x7BL,0L,0x90ED9ABDL};
                        (*l_94) = l_93;

                        ;
                        (*l_69) |= p_59;
                        return l_95;
                    }
                    else
                    {
                        int **l_97 = &l_96;
                        (*l_97) = l_96;
                        (*l_97) = g_72;

                        ;
                    }

                    ;
                    if ((*g_72))
                        continue;
                    if ((safe_div_func_int32_t_s_s(((*l_96) ^= p_59), (safe_rshift_func_uint8_t_u_s((l_90 & (safe_div_func_int16_t_s_s((0x28FCL || (((*l_104) = ((void*)0 == &l_96)) >= ((l_106 != (safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_114 = (((*g_21) = l_90) ^ (safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((g_45.f9 <= p_59))), g_45.f9)))), p_59)), p_61))) ^ l_92))), p_59))), l_115)))))
                    {
                        unsigned l_122 = 0x84A2D252L;
                        (*l_77) = (safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s((p_60 && (safe_add_func_int16_t_s_s(1L, (l_114 = (*l_96))))), l_122)), (*g_72)));
                        if (p_61)
                            continue;
                    }
                    else
                    {
                        if (p_59)
                            break;
                    }
                }
            }
        }

        ;
        (*l_123) = l_96;

        ;
        for (l_115 = 0; (l_115 > 7); l_115 = safe_add_func_uint16_t_u_u(l_115, 9))
        {
            (*l_123) = l_96;
        }
    }

    ;
    ;
    l_126 = l_126;
    (*l_127) = g_45;
    return (*l_127);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_45.f1, "g_45.f1", print_hash_value);
    transparent_crc(g_45.f2, "g_45.f2", print_hash_value);
    transparent_crc(g_45.f3, "g_45.f3", print_hash_value);
    transparent_crc(g_45.f4, "g_45.f4", print_hash_value);
    transparent_crc(g_45.f5.f0, "g_45.f5.f0", print_hash_value);
    transparent_crc(g_45.f6, "g_45.f6", print_hash_value);
    transparent_crc(g_45.f7, "g_45.f7", print_hash_value);
    transparent_crc(g_45.f8, "g_45.f8", print_hash_value);
    transparent_crc(g_45.f9, "g_45.f9", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    transparent_crc(g_128.f2, "g_128.f2", print_hash_value);
    transparent_crc(g_128.f3, "g_128.f3", print_hash_value);
    transparent_crc(g_128.f4, "g_128.f4", print_hash_value);
    transparent_crc(g_128.f5.f0, "g_128.f5.f0", print_hash_value);
    transparent_crc(g_128.f6, "g_128.f6", print_hash_value);
    transparent_crc(g_128.f7, "g_128.f7", print_hash_value);
    transparent_crc(g_128.f8, "g_128.f8", print_hash_value);
    transparent_crc(g_128.f9, "g_128.f9", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
