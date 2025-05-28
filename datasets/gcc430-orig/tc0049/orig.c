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



static int g_14 = 0x0374C7AFL;
static short g_50[1] = {(-9L)};
static int g_76 = 0xEB104B5BL;
static volatile int *g_82 = (void*)0;
static int g_97 = 0x76CE528CL;
static int *g_140 = &g_97;
static unsigned short g_224 = 0x012FL;
static long long g_244 = (-9L);
static int * const *g_289[6] = {&g_140,&g_140,&g_140,&g_140,&g_140,&g_140};
static int * const **g_288[6] = {&g_289[2],&g_289[2],&g_289[2],&g_289[2],&g_289[2],&g_289[2]};
static volatile int g_375 = 0L;
static const int *g_406 = &g_76;
static int *g_412 = &g_97;
static const char g_598 = (-4L);
static char g_648[2][7] = {{0L,0L,0L,0L,0L,0L,0L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
static int *g_793 = &g_14;



static int func_1(void);
static const int * func_2(int * p_3, int * p_4, unsigned char p_5, int p_6);
static int * func_7(int * p_8);
static int * func_9(int p_10, unsigned long long p_11);
static char func_17(const int * p_18, short p_19, long long p_20);
static int * func_21(long long p_22, unsigned p_23, unsigned short p_24, int * p_25, unsigned char p_26);
static unsigned char func_34(int * p_35, unsigned p_36, const unsigned char p_37, int p_38, unsigned char p_39);
static int * func_40(int * p_41, long long p_42, unsigned p_43);
static int * func_44(char p_45, unsigned p_46, unsigned short p_47);
static int * func_53(unsigned short p_54, long long p_55, const unsigned p_56, char p_57, int * p_58);
static int func_1(void)
{
    int *l_13[7][4] = {{&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,(void*)0,(void*)0}};
    long long l_837 = 0x59CC6E2CB135DDC4LL;
    const int **l_842 = &g_406;
    int i, j;
    (*l_842) = func_2(func_7(func_9((safe_unary_minus_func_int16_t_s((9L || (l_13[0][1] == (void*)0)))), (g_14 == (0UL < ((0xDBL && (&g_14 == (void*)0)) && 0x5D5F8D9A2B82C447LL))))), &g_76, g_76, l_837);

    ;

    (*g_140) = (safe_rshift_func_uint16_t_u_u((&l_13[1][3] != (void*)0), 10));
    return (*g_406);
}







static const int * func_2(int * p_3, int * p_4, unsigned char p_5, int p_6)
{
    int *l_841[2];
    int i;
    for (i = 0; i < 2; i++)
        l_841[i] = &g_14;
    if ((*g_140))
    {
        int *l_840 = (void*)0;
        (*g_793) = (safe_rshift_func_int8_t_s_s(g_648[0][1], p_5));
    }
    else
    {
        return &g_14;


    }
    (*p_3) = (g_244 <= (l_841[0] == &p_6));
    (*p_3) = (*p_4);
    return &g_97;


}







static int * func_7(int * p_8)
{
    int *l_820 = &g_76;
    int *l_836 = &g_97;
    if (((*g_406) | (g_244 >= (((((safe_rshift_func_int8_t_s_u((((&g_289[2] == &g_289[2]) || func_34(l_820, (*l_820), (*l_820), (0x5F855CE4L | (*l_820)), (*l_820))) & 7UL), 7)) && (*l_820)) || (*l_820)) < g_50[0]) || (*p_8)))))
    {
        int *l_821[4];
        int i;
        for (i = 0; i < 4; i++)
            l_821[i] = &g_76;
        return l_821[3];


    }
    else
    {
        int l_822 = 0x9D7C876FL;
        int * const **l_832 = (void*)0;
        int l_835 = 0x7AA8F85CL;
        if ((l_822 < (safe_unary_minus_func_uint32_t_u((l_822 <= (safe_add_func_uint32_t_u_u((+((~((safe_lshift_func_uint16_t_u_u((l_822 <= ((safe_sub_func_int16_t_s_s((&g_289[5] != l_832), (g_375 ^ g_224))) >= (g_648[1][3] ^ (safe_sub_func_uint16_t_u_u((*l_820), l_835))))), 0)) < g_224)) && 0x950DDDB33EFA5AF8LL)), (*l_820))))))))
        {
            (*g_793) &= (-8L);
        }
        else
        {
            return &g_14;


        }
        return l_836;


    }
}







static int * func_9(int p_10, unsigned long long p_11)
{
    unsigned short l_27 = 65528UL;
    int l_48 = 0xAD6CAD8EL;
    int **l_817 = &g_412;
    for (p_10 = 0; (p_10 <= 26); ++p_10)
    {
        unsigned char l_816[2];
        int i;
        for (i = 0; i < 2; i++)
            l_816[i] = 247UL;
    }
    (*l_817) = &l_48;

    ;
    return &g_14;



}







static char func_17(const int * p_18, short p_19, long long p_20)
{
    int *l_374 = &g_14;
    unsigned l_390 = 0x4DE21D8FL;
    int *l_392 = &g_97;
    const unsigned l_395 = 18446744073709551606UL;
    int l_478 = 1L;
    int l_540[1];
    int *l_582 = (void*)0;
    short l_601 = 0x2B52L;
    unsigned short l_607 = 0x8CA4L;
    const int **l_652 = &g_406;
    const int ***l_651[8] = {&l_652,&l_652,&l_652,&l_652,&l_652,&l_652,&l_652,&l_652};
    unsigned char l_654 = 0xF6L;
    const unsigned char l_657 = 0x74L;
    short l_680[9][3] = {{0x41BCL,0x04DEL,0x41BCL},{0x41BCL,0x04DEL,0x41BCL},{0x41BCL,0x04DEL,0x41BCL},{0x41BCL,0x04DEL,0x41BCL},{0x41BCL,0x04DEL,0x41BCL},{0x41BCL,0x04DEL,0x41BCL},{0x41BCL,0x04DEL,0x41BCL},{0x41BCL,0x04DEL,0x41BCL},{0x41BCL,0x04DEL,0x41BCL}};
    unsigned short l_681 = 0x451AL;
    char l_698 = 2L;
    char l_766 = 0x94L;
    short l_797 = 0xE151L;
    unsigned l_813 = 0x49E7D33AL;
    int *l_814 = (void*)0;
    char l_815 = (-1L);
    int i, j;
    for (i = 0; i < 1; i++)
        l_540[i] = 0xA7BE3643L;
    (*g_140) ^= 0x594DDF7CL;
    if ((((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(1UL, ((void*)0 != l_374))), 5)) && ((g_375 < ((safe_rshift_func_uint8_t_u_s(g_14, ((safe_mod_func_int16_t_s_s((safe_sub_func_int64_t_s_s((+g_76), 0x6144F1BE7099C4F5LL)), g_97)) <= (*l_374)))) >= p_20)) >= p_19)), p_19)) ^ (*l_374)) < 0xCD436E5EFCE0573BLL))
    {
        char l_382 = 0x76L;
        int *l_389 = &g_97;
        short l_399 = 0x0B06L;
        int *l_407 = &g_97;
        unsigned short l_432[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        int l_441[6][8] = {{(-1L),9L,0x896E94AAL,(-9L),0xE708A6C8L,0x14366F28L,0x27FC3194L,0x27FC3194L},{(-1L),0x27FC3194L,8L,8L,0x27FC3194L,(-1L),(-1L),(-1L)},{9L,(-6L),0x14366F28L,(-1L),0x896E94AAL,0x3403F91CL,(-1L),(-7L)},{0xE708A6C8L,(-1L),0x3403F91CL,(-1L),0x562FA930L,(-1L),0x3403F91CL,(-1L)},{(-1L),0x562FA930L,(-9L),8L,(-7L),4L,0xE708A6C8L,0x27FC3194L},{8L,0x1368C299L,(-1L),(-9L),0x896E94AAL,(-1L),(-1L),0x896E94AAL}};
        int l_448 = 0xD472E1E1L;
        int i, j;
        if ((*g_140))
        {
            const int *l_391 = &g_76;
            int *l_396[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int * const **l_400 = &g_289[3];
            unsigned l_415 = 0xEFB2E930L;
            int i;
lbl_403:
            l_391 = p_18;


            if (func_34(&g_76, g_224, (*l_389), p_19, p_20))
            {
                const int **l_393 = &l_391;
                int *l_394 = &g_14;
                (*l_392) = (l_389 == l_391);
                (*l_393) = l_391;
                (*g_140) &= (*p_18);
                g_140 = func_40(l_396[2], ((safe_rshift_func_int8_t_s_s(l_399, 1)) != ((*p_18) != func_34(&g_76, (l_400 == &l_393), p_20, ((safe_add_func_int8_t_s_s(g_50[0], 0UL)) && (*l_391)), p_20))), p_20);

                ;
            }
            else
            {
                int **l_428 = &g_140;
                int *** const l_427 = &l_428;
                unsigned l_442 = 7UL;
                (*l_389) = (-2L);
                (***l_400) = (p_18 != p_18);
                if ((p_18 == (void*)0))
                {
                    unsigned l_416 = 2UL;
                    if (g_76)
                        goto lbl_403;
                    for (g_14 = 0; (g_14 <= (-28)); g_14--)
                    {
                        int **l_408 = (void*)0;
                        int **l_409 = &l_374;
                        g_406 = p_18;


                        (*l_409) = func_40(l_407, g_244, g_50[0]);

                        ;
                        (*g_140) &= (safe_rshift_func_uint16_t_u_u(l_416, 15));
                        if ((*l_407))
                            break;
                    }

                    ;

                    (*l_374) |= (*p_18);
                }
                else
                {
                    return g_244;
                }

                ;

                if ((*p_18))
                {
                    unsigned l_419[7][1][4] = {{{1UL,0xC73B1EACL,4294967287UL,4294967293UL}},{{0x229E3DF2L,4294967295UL,4294967295UL,1UL}},{{4294967287UL,1UL,0x1CDD7ABAL,0x1CDD7ABAL}},{{4294967287UL,4294967287UL,4294967295UL,4294967293UL}},{{0x229E3DF2L,0x1CDD7ABAL,4294967287UL,4294967295UL}},{{1UL,4294967292UL,1UL,4294967287UL}},{{4294967293UL,4294967292UL,4294967293UL,4294967295UL}}};
                    unsigned long long l_421 = 18446744073709551615UL;
                    int **l_422 = &l_407;
                    int i, j, k;
                    for (l_382 = 0; (l_382 <= 12); l_382++)
                    {
                        int l_420 = 0x6359D4CDL;
                        if ((*p_18))
                            break;
                        if (l_419[4][0][0])
                            break;
                        if (l_420)
                            break;
                        (***l_400) = ((l_421 & p_19) >= p_19);
                    }
                    (*l_422) = (**l_400);
                    p_18 = func_44((safe_add_func_int16_t_s_s((-2L), (g_97 & ((safe_sub_func_uint16_t_u_u(0UL, (*l_392))) > (-1L))))), g_76, ((l_427 == (void*)0) ^ (safe_unary_minus_func_uint64_t_u((**l_428)))));

                    ;
                    for (l_390 = 0; (l_390 <= 27); l_390 = safe_add_func_int32_t_s_s(l_390, 7))
                    {
                        (*l_374) ^= (*l_392);
                        return l_432[4];
                    }
                }
                else
                {
                    const int **l_433 = &l_391;
                    (*l_433) = p_18;
                    if (((p_19 >= 5L) > ((((!func_34(func_44((0x9BEACE10L & (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint32_t_u((safe_add_func_uint32_t_u_u(0xAD8DD980L, ((void*)0 != &p_18))))), (safe_sub_func_int8_t_s_s((!((g_14 && (*l_389)) < l_441[1][0])), 0xB6L))))), g_14, g_76), (**l_428), p_20, g_14, p_19)) > l_442) < (**l_433)) ^ (*p_18))))
                    {
                        return p_19;
                    }
                    else
                    {
                        short l_447 = 0x3CF4L;
                        (*l_392) = (p_20 <= func_34(func_53((*l_391), (safe_rshift_func_int8_t_s_s(((0x1E24L || func_34(&g_14, ((g_50[0] ^ (g_375 == (safe_lshift_func_uint8_t_u_u(((+(**l_428)) == (g_244 != (p_19 <= (-1L)))), (*l_392))))) > 0x3CL), p_20, p_20, l_447)) < g_14), 4)), p_19, p_19, &g_14), g_50[0], (**l_433), g_76, g_76));
                    }
                    (*l_389) = ((*p_18) ^ g_375);
                    for (p_20 = 0; (p_20 <= 3); p_20 += 1)
                    {
                        return (**l_433);
                    }
                }


            }

            ;

            ;

        }
        else
        {
            const char l_451 = (-4L);
            int *l_453[6][1][10] = {{{(void*)0,&g_14,&g_97,&g_76,&g_76,&g_97,&g_14,(void*)0,(void*)0,&g_76}},{{&g_76,(void*)0,&g_97,(void*)0,&g_14,&g_14,&g_97,(void*)0,&g_97,&g_76}},{{(void*)0,&g_97,&g_97,&g_14,&g_14,(void*)0,(void*)0,(void*)0,&g_76,(void*)0}},{{&g_97,(void*)0,&g_97,&g_76,&g_97,(void*)0,&g_97,(void*)0,(void*)0,&g_76}},{{&g_14,&g_97,&g_76,&g_76,&g_14,&g_97,&g_97,&g_14,&g_97,(void*)0}},{{&g_14,&g_97,&g_97,&g_76,(void*)0,&g_97,&g_97,&g_76,&g_76,&g_97}}};
            unsigned char l_492 = 0xAFL;
            int **l_531[4];
            int ***l_530 = &l_531[2];
            unsigned short l_539[6];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_531[i] = (void*)0;
            for (i = 0; i < 6; i++)
                l_539[i] = 1UL;
            if (((l_448 <= (safe_mod_func_uint32_t_u_u((g_244 < ((4L > l_451) & 0x180F45DCL)), (*l_392)))) != (safe_unary_minus_func_int8_t_s((l_453[4][0][7] != l_392)))))
            {
                const char l_467 = (-9L);
                int * const **l_477 = &g_289[0];
                int *l_501 = &g_97;
                for (p_20 = 0; (p_20 > (-2)); p_20 = safe_sub_func_uint32_t_u_u(p_20, 3))
                {
                    int l_456 = 8L;
                    (*l_407) = ((+func_34(&g_76, (*l_392), g_244, g_50[0], l_456)) | ((((p_20 || g_50[0]) == 0UL) & g_50[0]) <= 1UL));
                    (*g_140) = (((safe_lshift_func_int16_t_s_u(g_50[0], 2)) ^ (safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(func_34(func_53(g_14, g_50[0], g_244, (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(g_50[0], func_34(&l_456, l_456, p_19, l_467, g_244))), g_50[0])), l_392), l_456, l_456, g_76, p_19), p_19)), g_76))) & p_20);
                    for (g_224 = 0; (g_224 <= 27); g_224 = safe_add_func_int32_t_s_s(g_224, 9))
                    {
                        int **l_474 = &l_374;
                        if ((*l_392))
                            break;
                        (*l_474) = func_40(l_392, (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(g_14, p_20)), 1)), l_467);

                        ;
                        (*l_474) = func_40(func_53(g_50[0], (!(g_14 < ((safe_add_func_int8_t_s_s(((&g_289[2] == l_477) == (*g_140)), (((*l_392) | ((l_478 && (safe_mod_func_uint32_t_u_u(p_20, ((p_19 | 0x6446L) ^ 0xD6L)))) && (-7L))) | p_19))) >= 1UL))), (***l_477), g_50[0], l_407), p_19, g_50[0]);
                    }
                }

                ;
                for (l_399 = 3; (l_399 == 22); ++l_399)
                {
                    long long l_498 = (-9L);
                    if ((*p_18))
                    {
                        char l_491 = 0x65L;
                        l_492 |= (8L ^ (safe_rshift_func_int16_t_s_u(func_34(func_44((*l_392), (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(p_19, (p_19 || 1L))) ^ (0xCBL == p_20)), ((safe_rshift_func_int8_t_s_s(0x8DL, g_14)) != p_20))), (*l_389)), g_14, p_19, p_19, l_491), p_20)));
                    }
                    else
                    {
                        unsigned l_497 = 1UL;
                        int **l_499 = (void*)0;
                        int **l_500[8][6] = {{&g_412,&l_374,(void*)0,&l_392,(void*)0,&l_453[1][0][8]},{&g_412,&l_392,&l_392,&l_392,&l_392,&g_412},{&l_392,&l_392,&g_412,&l_392,(void*)0,(void*)0},{(void*)0,&l_374,&g_412,&l_374,(void*)0,&l_392},{(void*)0,&l_392,&l_374,&l_392,(void*)0,(void*)0},{&l_392,(void*)0,(void*)0,&l_392,&g_412,(void*)0},{&g_412,(void*)0,&l_374,&l_392,&l_392,&l_392},{&g_412,&l_374,&g_412,&l_453[1][0][8],&l_392,(void*)0}};
                        int i, j;
                        l_501 = func_21(g_224, p_19, (safe_rshift_func_uint8_t_u_u(0x63L, 6)), func_53(g_375, p_20, (((((safe_rshift_func_int16_t_s_s((0x9A8DL && ((0xA4A2C857AA1ADEC1LL > ((g_224 | ((*g_140) || 0x4D7540A8L)) & l_497)) & p_20)), g_244)) & l_498) || g_76) >= p_19) != g_76), (*l_392), l_389), p_19);

                        ;
                    }
                    for (l_390 = 0; (l_390 != 23); ++l_390)
                    {
                        int **l_506 = &l_374;
                        (*l_374) &= ((safe_add_func_int16_t_s_s(p_19, g_224)) != (*l_407));
                        if ((***l_477))
                            continue;
                        (*l_477) = l_506;
                        p_18 = (**l_477);

                        ;
                    }
                }



                ;
            }
            else
            {
                int **l_514 = &l_407;
                int ** const * const l_513 = &l_514;
                int l_534 = 0xDBB53574L;
                for (l_478 = (-23); (l_478 <= 23); l_478 = safe_add_func_int32_t_s_s(l_478, 1))
                {
                    int **l_512 = &l_453[5][0][8];
                    int ***l_511 = &l_512;
                    long long l_523 = 8L;
                    (*l_407) = (g_76 >= 0L);
                    (*l_374) |= (safe_rshift_func_uint16_t_u_u(0x1B36L, ((((l_511 == l_513) > p_20) > (*l_392)) & g_375)));
                    for (l_448 = 0; (l_448 >= (-11)); --l_448)
                    {
                        int l_532 = 1L;
                        const int **l_533 = &g_406;
                        if ((*p_18))
                            break;
                        (*l_533) = p_18;


                        l_534 = (((**l_514) == (**l_533)) && p_19);
                        (*l_533) = p_18;
                    }
                    l_540[0] ^= ((((0x3BC3L > (((0x4B55L > (-7L)) & ((p_19 == (safe_rshift_func_int8_t_s_u((((safe_add_func_int64_t_s_s(func_34(&g_76, (*l_374), g_375, (**l_514), (*l_407)), 0UL)) || g_97) | p_20), l_539[2]))) > p_19)) && p_20)) >= 0x137F4344L) >= 0x9F58L) < g_14);
                }


            }



            ;

        }

        ;


        ;

        (*g_140) = (*g_140);
    }
    else
    {
        const int l_550[4][1] = {{0xF4BDF6D5L},{0xF4BDF6D5L},{0xF4BDF6D5L},{0xF4BDF6D5L}};
        int *l_557[7];
        int l_558[5][8][3] = {{{2L,2L,(-8L)},{0x44A14E39L,0x9BB32BB6L,(-8L)},{0x9BB32BB6L,0L,0xEED25461L},{0x1BCCC5FFL,0xA05CB64DL,1L},{1L,0x9BB32BB6L,0xEED25461L},{(-5L),1L,(-8L)},{0x1BCCC5FFL,0x91054DC3L,(-8L)},{0x6EEB1978L,0x995EEF35L,0xEED25461L}},{{0x0E2C9F9FL,0L,1L},{2L,0x91054DC3L,0xEED25461L},{1L,(-5L),(-8L)},{0x0E2C9F9FL,0x6EEB1978L,(-8L)},{0x91054DC3L,0xA05CB64DL,0xEED25461L},{0x44A14E39L,0x995EEF35L,1L},{(-5L),(-1L),(-1L)},{0x44A14E39L,0x44A14E39L,0x54B40DDEL}},{{0x995EEF35L,1L,0x54B40DDEL},{1L,0x9BB32BB6L,(-1L)},{0L,0x6EEB1978L,0x92B7866EL},{0x0E2C9F9FL,1L,(-1L)},{0x1BCCC5FFL,0x0E2C9F9FL,0x54B40DDEL},{0L,0L,0x54B40DDEL},{(-1L),0x91054DC3L,(-1L)},{0xA05CB64DL,0x9BB32BB6L,0x92B7866EL}},{{0x44A14E39L,0L,(-1L)},{0x0E2C9F9FL,0x1BCCC5FFL,0x54B40DDEL},{0xA05CB64DL,(-1L),0x54B40DDEL},{0L,0x6EEB1978L,(-1L)},{0x995EEF35L,0x91054DC3L,0x92B7866EL},{0x1BCCC5FFL,(-1L),(-1L)},{0x44A14E39L,0x44A14E39L,0x54B40DDEL},{0x995EEF35L,1L,0x54B40DDEL}},{{1L,0x9BB32BB6L,(-1L)},{0L,0x6EEB1978L,0x92B7866EL},{0x0E2C9F9FL,1L,(-1L)},{0x1BCCC5FFL,0x0E2C9F9FL,0x54B40DDEL},{0L,0L,0x54B40DDEL},{(-1L),0x91054DC3L,(-1L)},{0xA05CB64DL,0x9BB32BB6L,0x92B7866EL},{0x44A14E39L,0L,(-1L)}}};
        int l_600 = 0xCAF948AFL;
        int *l_673 = &l_540[0];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_557[i] = &g_14;
        for (g_244 = 4; (g_244 >= 0); g_244 -= 1)
        {
            int *l_549 = &l_540[0];
            const int **l_554 = (void*)0;
            const int ***l_553 = &l_554;
            unsigned short l_566 = 0x8E37L;
            const short l_602 = (-5L);
            const unsigned l_618 = 3UL;
            int l_627 = 0x4F441D22L;
            int *l_628[7][4] = {{&g_14,&g_76,&g_14,&g_76},{&g_14,&g_76,&g_14,&g_76},{&g_14,&g_76,&g_14,&g_76},{&g_14,&g_76,&g_14,&g_76},{&g_14,&g_76,&g_14,&g_76},{&g_14,&g_76,&g_14,&g_76},{&g_14,&g_76,&g_14,&g_76}};
            long long l_635 = 0xE99E6F6DF3AFC5F1LL;
            unsigned l_646 = 0x682F8797L;
            int l_658[7][6][6] = {{{0x946FA91CL,(-10L),0x7C92FA73L,0xFA4A30CCL,0x0D50B53FL,0x0D50B53FL},{1L,0x1AC07900L,0x1AC07900L,1L,4L,0x0D50B53FL},{0xFDCCB68EL,0x0D50B53FL,0x7C92FA73L,0xBC05FA50L,1L,1L},{0x7024C1A9L,0xD4F8723CL,4L,0xFF4F7721L,1L,0x008FAE6FL},{(-8L),0x0D50B53FL,(-10L),0x7024C1A9L,4L,(-10L)},{0xD6CCDEFBL,0x1AC07900L,(-10L),0x7024C1A9L,0x0D50B53FL,3L}},{{(-8L),(-10L),0x008FAE6FL,0xFF4F7721L,0x008FAE6FL,(-10L)},{0x7024C1A9L,0x7C92FA73L,0x008FAE6FL,0xBC05FA50L,0x1AC07900L,3L},{0xFDCCB68EL,1L,(-10L),1L,1L,(-10L)},{1L,1L,(-10L),0xFA4A30CCL,0x1AC07900L,0x008FAE6FL},{0x946FA91CL,0x7C92FA73L,4L,(-8L),0x008FAE6FL,1L},{0x946FA91CL,(-10L),0x7C92FA73L,0xFA4A30CCL,0x0D50B53FL,0x0D50B53FL}},{{1L,0x1AC07900L,0x1AC07900L,1L,4L,0x0D50B53FL},{0xFDCCB68EL,0x0D50B53FL,0x7C92FA73L,0xBC05FA50L,1L,1L},{0x7024C1A9L,0xD4F8723CL,0x1AC07900L,0xFA4A30CCL,(-10L),1L},{0xFA508454L,4L,(-10L),0xD6CCDEFBL,0x1AC07900L,(-10L)},{(-1L),0xD4F8723CL,0x7C92FA73L,0xD6CCDEFBL,4L,1L},{0xFA508454L,0x7C92FA73L,1L,0xFA4A30CCL,1L,0x7C92FA73L}},{{0xD6CCDEFBL,0x0D50B53FL,1L,0xFF4F7721L,0xD4F8723CL,1L},{1L,3L,0x7C92FA73L,(-8L),3L,(-10L)},{(-8L),3L,(-10L),0xFDCCB68EL,0xD4F8723CL,1L},{0xBC05FA50L,0x0D50B53FL,0x1AC07900L,0xFA508454L,1L,3L},{0xBC05FA50L,0x7C92FA73L,0x0D50B53FL,0xFDCCB68EL,4L,4L},{(-8L),0xD4F8723CL,0xD4F8723CL,(-8L),0x1AC07900L,4L}},{{1L,4L,0x0D50B53FL,0xFF4F7721L,(-10L),3L},{0xD6CCDEFBL,0x008FAE6FL,0x1AC07900L,0xFA4A30CCL,(-10L),1L},{0xFA508454L,4L,(-10L),0xD6CCDEFBL,0x1AC07900L,(-10L)},{(-1L),0xD4F8723CL,0x7C92FA73L,0xD6CCDEFBL,4L,1L},{0xFA508454L,0x7C92FA73L,1L,0xFA4A30CCL,1L,0x7C92FA73L},{0xD6CCDEFBL,0x0D50B53FL,1L,0xFF4F7721L,0xD4F8723CL,1L}},{{1L,9L,0x8FAF63A5L,0x1AC07900L,9L,0x7ABE0F5AL},{0x1AC07900L,9L,0x7ABE0F5AL,0x0D50B53FL,0x6F72A3DCL,0xAA08C3FEL},{(-10L),0x68487A4BL,0x9AD46EE7L,0xD4F8723CL,0xAA08C3FEL,9L},{(-10L),0x8FAF63A5L,0x68487A4BL,0x0D50B53FL,(-3L),(-3L)},{0x1AC07900L,0x6F72A3DCL,0x6F72A3DCL,0x1AC07900L,0x9AD46EE7L,(-3L)},{4L,(-3L),0x68487A4BL,(-10L),0L,9L}},{{1L,0xBA8CE425L,0x9AD46EE7L,0x7C92FA73L,0L,0xAA08C3FEL},{0xD4F8723CL,(-3L),0x7ABE0F5AL,1L,0x9AD46EE7L,0x7ABE0F5AL},{3L,0x6F72A3DCL,0x8FAF63A5L,1L,(-3L),0x3053CCBEL},{0xD4F8723CL,0x8FAF63A5L,0xAA08C3FEL,0x7C92FA73L,0xAA08C3FEL,0x8FAF63A5L},{1L,0x68487A4BL,0xAA08C3FEL,(-10L),0x6F72A3DCL,0x3053CCBEL},{4L,9L,0x8FAF63A5L,0x1AC07900L,9L,0x7ABE0F5AL}}};
            int i, j, k;
        }
        (*l_652) = p_18;


    }

    ;


    ;

    if ((((((safe_mod_func_uint32_t_u_u(g_598, (*l_374))) || g_50[0]) ^ 0x4FAE417DL) >= g_648[1][4]) | p_20))
    {
        unsigned l_684 = 0x98ADC8EFL;
        int **l_697[4] = {&l_392,&l_392,&l_392,&l_392};
        const short l_730 = 4L;
        char l_737 = 0L;
        int ***l_747 = &l_697[2];
        long long l_748 = 3L;
        int i;
        for (p_20 = 0; (p_20 > (-7)); --p_20)
        {
            const int *l_710 = &l_540[0];
            int l_711 = (-3L);
            l_684 = 0x9F89F7FCL;
            if ((safe_add_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u(p_19, (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u(g_50[0], l_684)) == (*p_18)), ((((safe_sub_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((+(+(1UL || p_19))), ((l_697[3] == &p_18) | ((p_19 > 18446744073709551615UL) & 4294967295UL)))) != (-3L)) || l_698), g_50[0])) | g_14) == 7UL) != 0xF0228D002023BBBALL))))) != g_14) < 0xC51AB490L), p_20)))
            {
                const unsigned char l_707 = 0x90L;
                int *l_714 = &g_14;
                l_711 ^= (0x405E105BAB749028LL < (((g_224 > p_20) | g_50[0]) & 0L));
                for (l_681 = 0; (l_681 > 17); l_681 = safe_add_func_uint16_t_u_u(l_681, 8))
                {
                    const int ** const l_715 = &l_710;
                    (*l_715) = func_40(l_714, (l_715 == &p_18), ((safe_add_func_uint16_t_u_u(p_20, (((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(g_76, 4)), (((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((void*)0 != l_714), (safe_sub_func_uint8_t_u_u(g_598, ((**l_715) <= p_19))))) | g_14), g_244)), g_224)) != g_648[0][1]) ^ (*p_18)))) <= (*l_710)) & 0x9AL))) == p_20));

                    ;
                    (*l_652) = p_18;
                    (*l_714) = (*l_374);
                    if ((*p_18))
                        continue;
                }

                ;
                (*l_714) = 1L;
            }
            else
            {
                int *** const l_735 = &l_697[3];
                for (l_711 = 0; (l_711 < 18); l_711 = safe_add_func_int32_t_s_s(l_711, 1))
                {
                    int *l_736[6];
                    int ***l_742 = &l_697[3];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_736[i] = (void*)0;
                    (*l_652) = func_44(((safe_sub_func_int8_t_s_s(p_19, l_737)) || (*p_18)), p_19, (*l_710));

                    ;
                    for (l_737 = 0; (l_737 <= 2); l_737 += 1)
                    {
                        int i, j;
                        (*g_412) = (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((&g_289[3] == &g_289[3]), (l_742 == (void*)0))), (!(l_680[(l_737 + 1)][l_737] >= g_598))));
                        (*g_412) = (*g_406);
                        if ((*g_406))
                            continue;
                    }
                    (*g_412) = (((safe_add_func_uint8_t_u_u(g_224, ((0x73E63F1AL < (*g_140)) <= 0x52L))) && ((safe_sub_func_uint8_t_u_u(p_20, p_19)) && (((void*)0 == l_747) ^ g_648[0][1]))) != (-2L));
                    (*l_652) = p_18;


                }
                l_748 &= (*p_18);
                if ((*p_18))
                    break;
            }

            ;
            p_18 = p_18;
        }


        (*l_652) = (void*)0;

        ;
    }
    else
    {
        int *l_767 = &g_76;
        char l_779 = (-6L);
        int l_780 = 0xF9AF48C7L;
        for (g_224 = 25; (g_224 != 45); ++g_224)
        {
            int *l_751 = &g_97;
            unsigned short l_778 = 0xD8C4L;
            if ((*p_18))
            {
                (*l_652) = l_751;

                ;
                (*l_652) = (void*)0;

                ;
                if ((*g_140))
                    break;
            }
            else
            {
                int **l_764 = &l_582;
                for (g_76 = 0; (g_76 >= (-6)); g_76--)
                {
                    int *l_765 = &l_540[0];
                    g_406 = p_18;


                    (*l_765) ^= ((((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((*l_751), 4)), g_648[0][1])) | (safe_lshift_func_uint16_t_u_u((*l_751), 7))) && (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((0xF4L | 0x95L), (0x157F297C21FFF2AFLL != (((*g_406) && (!(((void*)0 == l_764) & 18446744073709551613UL))) == p_20)))), p_19))) == g_76);
                }


                (*l_374) |= l_766;
            }


            l_767 = l_751;

            ;
            (*l_652) = (void*)0;

            ;
            (*g_412) = ((safe_lshift_func_uint8_t_u_u(((*l_751) < ((-7L) > (safe_add_func_int16_t_s_s(((((safe_add_func_int64_t_s_s((-8L), (*l_392))) || p_20) != (safe_lshift_func_int16_t_s_u(((((safe_sub_func_uint16_t_u_u(l_778, ((l_779 > 0x67EB99B6F5DBAB45LL) > (*l_751)))) == (*l_751)) > l_780) <= 5L), p_20))) && (*l_392)), g_76)))), p_20)) == 0xE5760B91A0832A60LL);
        }


        ;
        if ((*g_412))
        {
            int *l_789[7] = {&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76};
            int i;
            if (((l_789[5] != (*l_652)) || (safe_lshift_func_uint16_t_u_u(g_14, 15))))
            {
                int *l_792 = &g_14;
                (*l_652) = p_18;


                for (l_390 = 0; (l_390 <= 1); l_390 += 1)
                {
                    int l_794[2][6][3] = {{{0xA2705F57L,(-1L),(-1L)},{0x75079263L,0xFCD0AF7EL,0xC49831BEL},{0xB28479BEL,0xA2705F57L,0x50CD1882L},{0x75079263L,0x75079263L,(-1L)},{0xA2705F57L,0xB28479BEL,0xB28479BEL},{(-1L),(-1L),(-1L)}},{{0xA2705F57L,0xF08F2B2EL,0x50CD1882L},{0x66F1D398L,(-1L),(-1L)},{0x50CD1882L,0xA2705F57L,0xB28479BEL},{0xFCD0AF7EL,0x66F1D398L,0xC49831BEL},{0x50CD1882L,0x50CD1882L,0x6E9FEA85L},{0x66F1D398L,0xFCD0AF7EL,0x501A0B01L}}};
                    int i, j, k;
                    if ((*g_140))
                    {
                        return p_20;


                    }
                    else
                    {
                        (*l_374) = (**l_652);
                    }
                    for (g_244 = 5; (g_244 >= 0); g_244 -= 1)
                    {
                        g_793 = l_792;
                        l_794[1][5][2] ^= (*p_18);
                        if ((*p_18))
                            break;
                        if ((*p_18))
                            continue;
                    }
                }
                (*l_652) = p_18;
                return p_19;


            }
            else
            {
                long long l_806 = 6L;
                int *l_807 = &g_76;
                unsigned short l_808 = 6UL;
                if ((*p_18))
                {
lbl_809:
                    for (l_607 = (-10); (l_607 < 40); ++l_607)
                    {
                        (*l_374) = (g_50[0] ^ ((g_598 >= ((0UL > (safe_sub_func_uint64_t_u_u((p_19 == (*p_18)), p_20))) >= (safe_add_func_int64_t_s_s(g_76, ((safe_add_func_uint16_t_u_u(p_19, (g_598 == p_19))) && l_806))))) > g_50[0]));
                        if ((*p_18))
                            break;
                        (*l_652) = l_767;

                        ;
                        (*l_652) = l_767;
                    }


                }
                else
                {
                    (*l_652) = l_807;

                    ;
                    if (l_808)
                    {
                        if (l_806)
                            goto lbl_809;
                        return g_598;


                    }
                    else
                    {
                        p_18 = p_18;
                        (*l_392) = (*l_807);
                        (*l_652) = (void*)0;

                        ;
                    }

                    ;
                }


                for (l_779 = 0; (l_779 != 5); l_779 = safe_add_func_int32_t_s_s(l_779, 8))
                {
                    g_406 = p_18;


                    (*l_392) ^= (*l_807);
                    return (*l_767);


                }
            }


        }
        else
        {
            unsigned char l_812[10] = {0x35L,0x35L,0x35L,0x35L,0x35L,0x35L,0x35L,0x35L,0x35L,0x35L};
            int i;
            return l_812[0];


        }


        (*l_767) = 0xF792CFB0L;
    }


    (*l_652) = (*l_652);
    return p_19;


}







static int * func_21(long long p_22, unsigned p_23, unsigned short p_24, int * p_25, unsigned char p_26)
{
    const int *l_365 = (void*)0;
    const int **l_364 = &l_365;
    (*p_25) &= (((void*)0 != l_364) != 2L);
    if ((func_34(p_25, g_50[0], g_224, g_97, (g_76 ^ (-5L))) == p_26))
    {
        (*l_364) = p_25;


    }
    else
    {
        return p_25;


    }


    for (p_26 = 0; (p_26 != 47); p_26++)
    {
        (*p_25) = ((void*)0 == (*l_364));
    }
    return p_25;


}







static unsigned char func_34(int * p_35, unsigned p_36, const unsigned char p_37, int p_38, unsigned char p_39)
{
    unsigned long long l_353 = 0x893C5793FFD58227LL;
    int *l_357 = &g_14;
    for (g_224 = 0; (g_224 > 15); g_224 = safe_add_func_int16_t_s_s(g_224, 3))
    {
        int **l_354 = &g_140;
    }
    (*g_140) |= (safe_mod_func_uint32_t_u_u((((l_357 == p_35) | (safe_add_func_int64_t_s_s(((((*l_357) == ((safe_rshift_func_uint16_t_u_u(((((p_36 ^ (~g_76)) > ((g_50[0] < (safe_lshift_func_int8_t_s_s((((void*)0 != l_357) ^ (*l_357)), (*l_357)))) == 7UL)) & 4UL) ^ (*l_357)), 14)) != 0xD9618E897B7D9C6CLL)) & 0x2C83L) > (*p_35)), g_14))) >= (*l_357)), 4L));
    return g_76;
}







static int * func_40(int * p_41, long long p_42, unsigned p_43)
{
    return &g_76;


}







static int * func_44(char p_45, unsigned p_46, unsigned short p_47)
{
    unsigned l_49 = 0x1949F0DCL;
    int * const l_68 = &g_14;
    const short l_74 = 1L;
    int *l_90 = &g_76;
    long long l_178 = (-1L);
    int l_181[3][10][4] = {{{0x8784DF7AL,0x6CC9F89FL,0xCD3A6F32L,0x9C26CA6BL},{(-1L),0xCD3A6F32L,0xB51E1822L,0xCD3A6F32L},{0xB51E1822L,0xCD3A6F32L,(-1L),0x9C26CA6BL},{0xCD3A6F32L,0x6CC9F89FL,0x8784DF7AL,0xB51E1822L},{7L,0L,0L,7L},{7L,0x9C26CA6BL,0x8784DF7AL,0xBED496A5L},{0xCD3A6F32L,7L,(-1L),(-1L)},{0xB51E1822L,(-1L),0xB51E1822L,(-1L)},{(-1L),7L,0xCD3A6F32L,0xBED496A5L},{0x8784DF7AL,0x9C26CA6BL,7L,7L}},{{0L,0L,7L,0xB51E1822L},{0x8784DF7AL,0x6CC9F89FL,0xCD3A6F32L,0x9C26CA6BL},{(-1L),0xCD3A6F32L,0xB51E1822L,0xCD3A6F32L},{0xB51E1822L,0xCD3A6F32L,(-1L),0x9C26CA6BL},{0xCD3A6F32L,0x6CC9F89FL,0x8784DF7AL,0xB51E1822L},{7L,0L,0L,0xB51E1822L},{0xB51E1822L,0x8784DF7AL,0x6CC9F89FL,0xCD3A6F32L},{0L,0xB51E1822L,0xBED496A5L,7L},{(-1L),(-1L),(-1L),7L},{0xBED496A5L,0xB51E1822L,0L,0xCD3A6F32L}},{{0x6CC9F89FL,0x8784DF7AL,0xB51E1822L,0xB51E1822L},{0x9C26CA6BL,0x9C26CA6BL,0xB51E1822L,(-1L)},{0x6CC9F89FL,(-1L),0L,0x8784DF7AL},{0xBED496A5L,0L,(-1L),0L},{(-1L),0L,0xBED496A5L,0x8784DF7AL},{0L,(-1L),0x6CC9F89FL,(-1L)},{0xB51E1822L,0x9C26CA6BL,0x9C26CA6BL,0xB51E1822L},{0xB51E1822L,0x8784DF7AL,0x6CC9F89FL,0xCD3A6F32L},{0L,0xB51E1822L,0xBED496A5L,7L},{(-1L),(-1L),(-1L),7L}}};
    long long l_192 = (-10L);
    int **l_287[9] = {&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140};
    int i, j, k;
    g_50[0] ^= l_49;
    return &g_14;


}







static int * func_53(unsigned short p_54, long long p_55, const unsigned p_56, char p_57, int * p_58)
{
    const char l_61 = (-1L);
    int l_62 = 0x726845D4L;
    int *l_64 = &l_62;
    int **l_63[8][5] = {{&l_64,&l_64,&l_64,(void*)0,&l_64},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_64,&l_64,&l_64,(void*)0,&l_64},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_64,&l_64,&l_64,(void*)0,&l_64},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_64,&l_64,&l_64,&l_64,&l_64},{(void*)0,(void*)0,&l_64,&l_64,(void*)0}};
    int i, j;
    l_62 ^= (l_61 < 0x09L);
    if (l_62)
        goto lbl_65;
lbl_65:
    p_58 = &l_62;

    ;
    (*p_58) = g_50[0];
    return &g_14;


}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_50[i], "g_50[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_648[i][j], "g_648[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
