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
   signed f1 : 2;
   unsigned f2;
   signed f3 : 6;
   unsigned f4;
   unsigned char f5;
};


static int g_4 = 0xE00FE1CAL;
static char g_7 = 0x1CL;
static int g_39 = 0L;
static short g_42 = 0x0CA3L;
static int g_56 = (-1L);
static unsigned char g_79 = 255UL;
static struct S0 g_85 = {9L,-1,1UL,-7,0x6DE04B38L,0xB7L};
static char g_115 = 0x6AL;
static char g_123 = 0x75L;
static short g_139 = 0L;
static short g_147 = (-1L);
static unsigned short g_150 = 0x8C43L;
static unsigned char g_155 = 252UL;
static int *g_168 = &g_56;
static unsigned g_200 = 2UL;
static unsigned g_202 = 0x0B48A4C8L;
static struct S0 *g_231 = (void*)0;
static struct S0 **g_230 = &g_231;
static int g_239 = (-1L);
static unsigned char g_265 = 0UL;
static int g_266 = 0L;
static short *g_342 = &g_42;
static short **g_341 = &g_342;
static unsigned short *g_550 = (void*)0;
static unsigned short **g_549 = &g_550;
static unsigned short ***g_548 = &g_549;
static unsigned *g_617 = &g_202;
static unsigned **g_616 = &g_617;
static unsigned g_626 = 0x74BA6E8EL;
static unsigned short g_627 = 65535UL;
static unsigned g_629 = 9UL;



static unsigned char func_1(void);
static short func_10(int * p_11, char p_12, int * p_13, unsigned p_14);
static char func_21(struct S0 p_22, int * p_23);
static struct S0 func_24(int * p_25, int * p_26, unsigned char p_27, int p_28, int * p_29);
static int * func_30(char p_31, int * p_32);
static char func_35(int * p_36, int * p_37);
static unsigned short func_44(unsigned short p_45, int * p_46, int * p_47, char p_48, char p_49);
static unsigned char func_60(unsigned p_61, struct S0 p_62, int * p_63, unsigned p_64);
static unsigned func_65(struct S0 p_66);
static unsigned func_71(char p_72, unsigned short p_73);
static unsigned char func_1(void)
{
    short l_2 = 7L;
    int *l_3 = &g_4;
    char l_567 = 0xABL;
    struct S0 l_598 = {0x345568E9L,-1,18446744073709551608UL,-4,0x58EF0E37L,0xB3L};
    int **l_635 = &g_168;
    (*l_3) = l_2;
    if (((*l_3) = ((((void*)0 == l_3) & (safe_lshift_func_int8_t_s_u((g_7 = (*l_3)), 5))) & g_4)))
    {
        int *l_38 = (void*)0;
        unsigned l_280 = 0x3164FAC5L;
        char *l_397 = &g_115;
        unsigned short ***l_577 = &g_549;
        int *l_596 = &g_239;
        (*l_3) = (g_4 > (safe_rshift_func_int16_t_s_u(func_10(&g_4, (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((!(+g_7)), ((*l_397) = func_21(func_24(l_3, func_30((safe_mul_func_int8_t_s_s(func_35(&g_4, l_38), (func_44(g_4, l_3, &g_4, g_4, g_7) > l_280))), l_38), g_139, g_7, &g_4), &g_4)))), g_155)) > l_280), g_200)), l_3, g_155), 9)));

        ;
        (*g_168) = (safe_lshift_func_int8_t_s_u(l_567, 0));
        for (g_4 = 0; (g_4 <= 12); ++g_4)
        {
            int *l_570 = &g_56;
            int **l_571 = &g_168;
            (*l_570) = (*g_168);
            (*l_571) = l_3;

            ;
            for (g_155 = 20; (g_155 <= 21); g_155++)
            {
                unsigned l_574 = 18446744073709551615UL;
                unsigned short ***l_578 = &g_549;
                int l_610 = 0x8BFF6516L;
                if ((*l_3))
                {
                    unsigned short ****l_579 = &g_548;
                    unsigned char *l_586 = &g_85.f5;
                    int *l_587 = &g_85.f0;
                    for (l_574 = 0; (l_574 >= 32); l_574 = safe_add_func_int8_t_s_s(l_574, 6))
                    {
                        (*l_571) = (void*)0;

                        ;
                        return g_85.f0;


                    }
                    (*l_571) = (*l_571);
                    (*l_587) = (g_39 = ((*l_570) = ((((l_578 = l_577) != ((*l_579) = &g_549)) != (safe_sub_func_uint8_t_u_u(0x1FL, g_85.f4))) >= (+(safe_add_func_uint16_t_u_u(0UL, (((void*)0 == &g_200) > (g_202 == (safe_mod_func_uint8_t_u_u(((*l_586) = g_85.f0), 9L))))))))));
                    (*l_570) ^= (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(65533UL, ((-2L) <= (0x524FL < (7UL || (0x84A5DFEEL && (*l_3))))))), 0x4B753794L));
                }
                else
                {
                    int *l_597 = (void*)0;
                    int l_613 = 0L;
                    for (l_280 = (-17); (l_280 > 32); ++l_280)
                    {
                        int l_609 = (-1L);
                        g_85 = l_598;
                        (*l_596) = (safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((+l_609), (g_265 | ((-1L) & (-1L))))) || (((func_35(&g_239, l_3) == (l_609 & (l_574 | g_115))) || (-4L)) || 0x1DA7BA3EL)), 0x79L)) && g_265), g_85.f3)), 0xFFL)) <= 1UL), g_4));
                        (*g_230) = &l_598;

                        ;
                        if ((*g_168))
                            continue;
                    }
                    (*l_570) = ((*l_596) = ((*g_168) & (safe_mul_func_int16_t_s_s(((*g_342) || (l_610 | (l_613 || 65535UL))), 0UL))));
                }
                g_168 = &g_239;

                ;
            }

            ;
            (*l_571) = l_3;

            ;
        }

        ;
    }
    else
    {
        unsigned *l_615 = (void*)0;
        unsigned **l_614 = &l_615;
        int **l_624 = &l_3;
        unsigned *l_625 = &g_626;
        unsigned *l_628 = &g_629;
        unsigned short **l_630 = &g_550;
        l_598.f1 &= (!(((*l_628) ^= (((g_616 = l_614) == &l_615) >= (safe_add_func_uint32_t_u_u(((*g_168) ^ (safe_add_func_uint32_t_u_u(4294967291UL, (*g_617)))), (g_627 |= ((*l_625) = (safe_sub_func_int16_t_s_s(((*g_342) = func_35(&g_4, ((*l_624) = l_3))), l_598.f5)))))))) >= (*g_617)));

        ;
        (*g_548) = l_630;
    }

    ;
    ;

    (*g_168) = (safe_lshift_func_uint8_t_u_s((*l_3), (&l_598 != ((*g_230) = &l_598))));

    ;
    (*l_635) = (*l_635);
    return g_266;


}







static short func_10(int * p_11, char p_12, int * p_13, unsigned p_14)
{
    int *l_398 = &g_4;
    struct S0 l_404 = {-1L,-1,1UL,-4,18446744073709551611UL,0xB9L};
    int *l_564 = &l_404.f0;
    (*g_168) = func_35(p_13, l_398);
    for (g_265 = 19; (g_265 != 57); g_265 = safe_add_func_uint16_t_u_u(g_265, 2))
    {
        unsigned l_403 = 4294967295UL;
        int *l_405 = &g_39;
        char *l_417 = &g_123;
        short **l_512 = &g_342;
        unsigned short ***l_547 = (void*)0;
        int l_554 = 8L;
        int **l_562 = &g_168;
        int **l_563 = &l_398;
        if ((safe_sub_func_int8_t_s_s(((-1L) == 6UL), ((l_403 > (~func_21(l_404, l_405))) & p_14))))
        {
            short **l_406 = &g_342;
            l_406 = l_406;
        }
        else
        {
            for (g_42 = 0; (g_42 > (-24)); g_42 = safe_sub_func_uint8_t_u_u(g_42, 6))
            {
                (*l_405) = (*p_11);
            }
        }

        ;
        if (((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((*p_13) ^ 0x5B30C10BL), ((0xB8262D47L <= (*g_168)) != 253UL))), 3)) <= ((safe_rshift_func_int8_t_s_s(func_35(p_13, l_405), (((*l_417) ^= (safe_add_func_uint16_t_u_u((((~(&l_405 == &p_13)) | p_14) <= g_139), (-1L)))) <= g_85.f1))) < 0L)))
        {
            unsigned short *l_420 = &g_150;
            struct S0 l_444 = {4L,0,18446744073709551608UL,-4,1UL,250UL};
            unsigned l_461 = 4294967286UL;
            int *l_502 = &g_56;
            unsigned char *l_505 = &g_85.f5;
            short **l_513 = &g_342;
            short ***l_514 = &l_513;
            if ((((*l_420) = (safe_rshift_func_uint16_t_u_u(g_115, 0))) < (**g_341)))
            {
                (*g_168) &= 0x61F50D46L;
            }
            else
            {
                return (**g_341);
            }
            for (g_85.f4 = 0; (g_85.f4 == 52); ++g_85.f4)
            {
                unsigned *l_425 = &g_202;
                unsigned **l_424 = &l_425;
                unsigned *l_427 = (void*)0;
                unsigned **l_426 = &l_427;
                int l_447 = (-1L);
                struct S0 l_463 = {0x25E7665AL,0,0x2974723FL,4,0x60DAF1F7L,248UL};
                char *l_482 = &g_123;
                struct S0 ***l_511 = &g_230;
            }
            if ((*g_168))
                break;
            (*g_168) = ((((l_512 != ((*l_514) = l_513)) != ((*g_341) == (void*)0)) == g_56) <= (*l_405));
        }
        else
        {
            unsigned l_553 = 0x5D2B4CEAL;
            for (l_404.f5 = 6; (l_404.f5 > 35); l_404.f5 = safe_add_func_uint32_t_u_u(l_404.f5, 2))
            {
                int *l_517 = &g_39;
                unsigned short *l_551 = &g_150;
                unsigned *l_552 = &l_403;
            }
        }
        (*l_563) = ((*l_562) = p_11);

        ;
    }

    ;
    (*l_564) = 6L;
    return (*l_398);
}







static char func_21(struct S0 p_22, int * p_23)
{
    int *l_395 = &g_266;
    int **l_396 = &g_168;
    (*l_396) = l_395;

    ;
    (*g_230) = (*g_230);
    (*l_395) = func_35(p_23, (*l_396));
    return p_22.f2;
}







static struct S0 func_24(int * p_25, int * p_26, unsigned char p_27, int p_28, int * p_29)
{
    char l_302 = (-10L);
    int *l_309 = &g_85.f0;
    struct S0 **l_323 = &g_231;
    struct S0 l_338 = {0xF51FECF9L,1,0x492DA3F3L,-2,0x089725B4L,0x96L};
    unsigned char l_359 = 0UL;
    struct S0 *l_387 = (void*)0;
    struct S0 *l_388 = &l_338;
    unsigned l_391 = 0xD7FD038DL;
    char *l_392 = &l_302;
    struct S0 l_393 = {0x716A63AFL,0,0xA4E295C7L,5,0x770EAE17L,246UL};
    int *l_394 = &g_39;
    (*g_168) = (safe_rshift_func_int8_t_s_u(g_202, 6));
    if ((safe_sub_func_int8_t_s_s(p_27, l_302)))
    {
        int *l_303 = &g_266;
        int **l_304 = &g_168;
        int **l_305 = (void*)0;
        int **l_306 = &l_303;
        int *l_308 = &g_39;
        int **l_307 = &l_308;
        (*l_307) = ((*l_306) = ((*l_304) = l_303));

        ;
        ;
    }
    else
    {
        int l_312 = 0xEB01385AL;
        int l_313 = 1L;
        char *l_320 = &l_302;
        unsigned short *l_321 = &g_150;
        int *l_322 = &g_266;
        struct S0 *l_378 = &g_85;
        char l_385 = 0xDDL;
        l_309 = p_29;

        ;
        (*l_322) |= (p_27 <= ((*l_321) |= func_71((safe_mul_func_int8_t_s_s(func_71(g_42, (l_312 = (*l_309))), ((*l_320) = (l_313 & (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(l_313, ((l_313 != ((((+g_4) & (safe_rshift_func_int8_t_s_s(l_313, 2))) > (*l_309)) == (*l_309))) || g_39))), p_28)))))), p_28)));
        if ((~((l_323 != &g_231) && (*l_309))))
        {
            int l_324 = 0xEEB82D4FL;
            int **l_325 = &l_322;
            (*p_26) = (l_324 && g_85.f1);
            (*l_325) = &g_56;

            ;
        }
        else
        {
            unsigned short l_334 = 0UL;
            int l_335 = 0x1E6EC5EEL;
            struct S0 l_352 = {0L,-0,1UL,-7,0x845AF6CCL,0x73L};
            short l_354 = 3L;
            if ((((safe_rshift_func_uint16_t_u_s(p_28, p_27)) || (((safe_sub_func_int16_t_s_s((&p_26 == &g_168), ((((safe_mul_func_int16_t_s_s((+(((*l_320) ^= (safe_lshift_func_int16_t_s_u((*l_322), (+(l_335 = l_334))))) <= ((*p_29) | (*p_25)))), (((*l_321) ^= (func_35(&g_56, p_26) && 0UL)) > 1UL))) > l_334) <= (*p_25)) == p_28))) ^ g_56) || 6L)) || p_27))
            {
                struct S0 *l_339 = &l_338;
                unsigned l_356 = 0xE432CE06L;
                if ((0x2FL != (p_28 != ((func_35(&g_266, &l_335) && ((*l_322) = p_28)) <= func_60(func_71(p_27, g_79), l_338, p_25, g_139)))))
                {
                    struct S0 l_340 = {-1L,-1,0UL,5,18446744073709551613UL,255UL};
                    (*g_168) = (~((*g_230) != (l_339 = (void*)0)));

                    ;
                    l_340 = l_340;
                }
                else
                {
                    unsigned l_353 = 0xB150DFECL;
                    int **l_360 = &l_309;
                    if (((void*)0 == g_341))
                    {
                        unsigned char *l_345 = &l_338.f5;
                        int l_355 = 0x13AD5C03L;
                        int l_357 = 0xB9429203L;
                        struct S0 l_358 = {-5L,-0,8UL,5,0x4D5A1B0BL,0x28L};
                        g_266 ^= (g_85.f0 & ((safe_add_func_uint16_t_u_u(p_28, (((*l_345) = 246UL) < ((**g_341) < ((((g_265 > (~(((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((l_355 &= (l_354 = (func_60((!(safe_lshift_func_int8_t_s_u((((void*)0 == (*g_341)) ^ p_27), g_150))), l_352, &g_266, l_353) || 0xA19EL))), 6)), l_356)) && (-1L)) || g_56))) && l_353) | (**g_341)) ^ l_357))))) & g_150));
                        return l_358;
                    }
                    else
                    {
                        (*l_322) |= (*g_168);
                        (*p_26) = l_334;
                    }
                    (*l_322) = l_359;
                    (*l_360) = func_30((l_353 || g_200), &g_56);

                    ;
                }

                ;
                ;
            }
            else
            {
                unsigned short l_361 = 0UL;
                if (l_361)
                {
                    (*l_322) |= (*p_26);
                }
                else
                {
                    int **l_362 = (void*)0;
                    int **l_363 = (void*)0;
                    int **l_364 = (void*)0;
                    unsigned *l_369 = &g_202;
                    short *l_374 = &g_147;
                    short ***l_376 = &g_341;
                    short ****l_375 = &l_376;
                    struct S0 *l_379 = &g_85;
                    p_26 = &g_239;

                    ;
                    (*p_26) = ((safe_mod_func_int16_t_s_s(((**g_341) = ((*l_374) |= func_71(l_361, (safe_sub_func_int8_t_s_s((l_361 >= ((((*l_322) & ((*l_369) = l_354)) >= (p_28 < 0x6794L)) | (safe_mod_func_int8_t_s_s((l_352.f4 != (safe_rshift_func_int16_t_s_u((**g_341), 8))), (*l_322))))), (-1L)))))), g_155)) | l_361);
                    if (g_139)
                        goto lbl_377;
                    if ((((*g_342) = (((*l_375) = &g_341) != &g_341)) | 8UL))
                    {
lbl_377:
                        l_322 = &l_335;

                        ;
                        g_168 = &g_4;

                        ;
                        (*p_26) = 0x3E263C94L;
                        l_379 = l_378;
                    }
                    else
                    {
                        unsigned l_382 = 0xC9DA18E8L;
                        int **l_386 = &g_168;
                        (*l_322) = (~(safe_mul_func_int8_t_s_s(l_382, ((safe_mod_func_uint16_t_u_u(((~l_385) <= ((*l_321) = 0x465AL)), (+g_115))) != (+((~p_27) != 0UL))))));
                        (*l_386) = func_30(p_27, p_25);
                    }

                    ;
                    ;
                }

                ;
                ;
                ;
                (*p_26) = (l_335 ^= (*p_26));
            }

            ;
            ;
            ;
            ;
        }

        ;
        ;
        ;

    }

    ;
    ;
    ;
    (*l_388) = l_338;
    l_394 = l_309;

    ;
    return g_85;
}







static int * func_30(char p_31, int * p_32)
{
    unsigned l_285 = 0x1276FF53L;
    unsigned l_286 = 0x60BAEE0FL;
    unsigned short *l_289 = &g_150;
    unsigned short **l_288 = &l_289;
    unsigned short ***l_287 = &l_288;
    unsigned short ****l_290 = &l_287;
    struct S0 l_291 = {-4L,1,0UL,-6,0UL,0xE5L};
    int *l_292 = &g_39;
    (*l_292) |= (safe_sub_func_uint8_t_u_u(func_44((~(g_85.f0 | ((*l_289) = ((safe_mod_func_int16_t_s_s(l_285, 0xE6D0L)) == func_60((l_286 || (((*l_290) = l_287) == (void*)0)), l_291, &g_39, p_31))))), &g_266, p_32, l_291.f2, l_291.f3), g_42));
    (*l_292) &= 0xD00658ABL;
    for (g_85.f0 = (-6); (g_85.f0 > (-13)); --g_85.f0)
    {
        struct S0 l_295 = {5L,-1,0xAD64C46BL,-5,1UL,1UL};
        int *l_296 = &g_4;
        int **l_297 = &l_296;
        (*g_168) = func_60(g_200, l_295, ((*l_297) = l_296), p_31);
        (*g_168) ^= (*l_292);
    }
    return &g_56;


}







static char func_35(int * p_36, int * p_37)
{
    short l_43 = 0xB300L;
    for (g_39 = 0; (g_39 != 18); g_39 = safe_add_func_uint16_t_u_u(g_39, 1))
    {
        g_42 ^= 0xD9532955L;
    }
    g_39 |= (!(l_43 < (-1L)));
    return g_7;
}







static unsigned short func_44(unsigned short p_45, int * p_46, int * p_47, char p_48, char p_49)
{
    int **l_50 = (void*)0;
    int *l_52 = &g_4;
    int **l_51 = &l_52;
    struct S0 l_67 = {0xF98E47BEL,1,0xE32111C1L,-3,0UL,0x9BL};
    unsigned short *l_270 = &g_150;
    unsigned short **l_269 = &l_270;
    (*l_51) = (void*)0;

    ;
    if ((g_7 || (p_48 > g_7)))
    {
        int *l_55 = &g_56;
        (*l_55) &= (safe_lshift_func_int16_t_s_s((-1L), 1));
    }
    else
    {
        unsigned l_57 = 0UL;
        int l_258 = 0x469E8B4DL;
        unsigned short ***l_271 = &l_269;
        unsigned short **l_273 = &l_270;
        unsigned short ***l_272 = &l_273;
        unsigned short ***l_274 = (void*)0;
        unsigned short **l_276 = &l_270;
        unsigned short ***l_275 = &l_276;
        struct S0 l_277 = {4L,-1,0x77B2AC47L,-5,18446744073709551609UL,0x05L};
        struct S0 *l_278 = &g_85;
        unsigned *l_279 = &l_57;
        g_265 &= (l_57 & ((safe_mod_func_int32_t_s_s((func_60(func_65(l_67), l_67, p_46, (g_139 <= ((l_258 |= ((((safe_mul_func_uint8_t_u_u((g_139 >= ((*l_51) == (p_47 = &g_4))), 0x69L)) > 0UL) <= g_150) == l_57)) < g_150))) >= p_49), (*p_46))) ^ 4294967295UL));

        ;
        (*l_51) = &l_258;

        ;
        (*g_168) = (4UL == (g_266 != (((((*l_52) |= (*g_168)) && (safe_add_func_int8_t_s_s((((*l_272) = ((*l_271) = l_269)) != ((*l_275) = (void*)0)), func_60(g_7, ((*l_278) = l_277), &g_239, ((*l_279) &= p_49))))) >= l_277.f0) > p_48)));

        ;
    }


    (*l_51) = &g_56;

    ;
    return p_49;
}







static unsigned char func_60(unsigned p_61, struct S0 p_62, int * p_63, unsigned p_64)
{
    unsigned short l_263 = 0xD564L;
    char l_264 = 6L;
    for (g_115 = (-6); (g_115 < 22); ++g_115)
    {
        unsigned l_261 = 0x9E3CC8D6L;
        if (l_261)
            break;
    }
    (*g_168) |= (safe_unary_minus_func_uint16_t_u(l_263));
    return l_264;
}







static unsigned func_65(struct S0 p_66)
{
    unsigned short l_70 = 0x364BL;
    unsigned char *l_78 = &g_79;
    int *l_238 = &g_239;
    struct S0 **l_246 = &g_231;
lbl_240:
    for (g_56 = 5; (g_56 == (-28)); g_56--)
    {
        return l_70;
    }
    (*l_238) |= ((func_71(g_7, (p_66.f1 != (p_66.f5 ^ (safe_mod_func_uint8_t_u_u(((*l_78) = (0xECL ^ (safe_lshift_func_uint16_t_u_s(g_7, l_70)))), l_70))))) || (safe_lshift_func_int16_t_s_u((g_85.f5 != 0xC66258E0L), 9))) >= 0x96L);
    if (((*g_168) = (l_238 != l_238)))
    {
        int l_243 = 0x9D2D600BL;
        struct S0 **l_247 = (void*)0;
        char *l_252 = (void*)0;
        int *l_254 = &g_56;
        int **l_255 = &l_238;
        if (g_85.f4)
            goto lbl_240;
        if (func_71((safe_sub_func_int8_t_s_s(l_243, ((func_71((safe_add_func_int32_t_s_s(func_71(p_66.f2, p_66.f1), p_66.f4)), p_66.f0) < l_243) || (l_246 == l_247)))), (*l_238)))
        {
            struct S0 *l_248 = (void*)0;
            struct S0 *l_249 = &g_85;
            p_66 = ((*l_249) = p_66);
            return g_200;
        }
        else
        {
            char *l_251 = &g_7;
            char **l_250 = &l_251;
            int l_253 = 0x41C1D69CL;
            l_253 |= (((*l_250) = l_78) != l_252);

            ;
        }
        (*l_255) = l_254;

        ;
    }
    else
    {
        return g_115;
    }

    ;
    return g_85.f0;
}







static unsigned func_71(char p_72, unsigned short p_73)
{
    int *l_87 = &g_56;
    int l_129 = 0xB973E414L;
    struct S0 *l_183 = &g_85;
    unsigned l_185 = 0x59BD2BB8L;
    if (p_72)
    {
        int *l_84 = &g_56;
        int l_89 = 0xBE8BA66FL;
        if (p_73)
        {
            int *l_80 = &g_4;
            int **l_81 = &l_80;
            int *l_83 = &g_56;
            int **l_82 = &l_83;
            struct S0 *l_86 = &g_85;
            l_84 = ((*l_82) = ((*l_81) = l_80));

            ;
            ;
            (*l_86) = g_85;
        }
        else
        {
            int **l_88 = &l_84;
            (*l_88) = l_87;
            (*l_87) |= g_4;
        }

        ;
        l_89 ^= (*l_87);
        l_84 = &g_4;

        ;
    }
    else
    {
        int *l_90 = (void*)0;
        int **l_91 = (void*)0;
        int **l_92 = &l_90;
        (*l_92) = l_90;
        (*l_87) = (g_85.f4 < (safe_mul_func_int16_t_s_s(g_85.f0, ((void*)0 == l_87))));
    }
    for (g_79 = (-29); (g_79 <= 10); g_79 = safe_add_func_int32_t_s_s(g_79, 5))
    {
        int *l_97 = &g_4;
        int **l_98 = (void*)0;
        int **l_99 = &l_87;
        char *l_114 = &g_115;
        char *l_122 = &g_123;
        int *l_124 = (void*)0;
        int *l_125 = (void*)0;
        struct S0 *l_126 = &g_85;
        short *l_170 = &g_139;
        short **l_169 = &l_170;
        unsigned short *l_175 = &g_150;
        unsigned short **l_174 = &l_175;
        (*l_99) = l_97;

        ;
        g_56 = (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((g_4 | (**l_99)) && (p_72 <= (*l_87))), (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_73, ((safe_add_func_int16_t_s_s((((*l_114) = p_72) | 0x16L), ((safe_add_func_int8_t_s_s((*l_87), ((*l_122) = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(1UL, 10)), 1))))) ^ p_72))) > g_56))), p_72)))), 4)), 65535UL)), g_85.f2));
        l_129 ^= ((((!((*l_122) = (((((l_126 = &g_85) == (void*)0) & 0x979D566FL) || ((p_73 >= g_85.f3) == (0x64L <= ((*l_114) = (safe_mul_func_uint16_t_u_u(g_7, g_85.f3)))))) & (+g_85.f4)))) ^ p_72) & g_85.f1) ^ g_56);
    }

    ;
    (*l_183) = (*l_183);
    return (*l_87);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_85.f3, "g_85.f3", print_hash_value);
    transparent_crc(g_85.f4, "g_85.f4", print_hash_value);
    transparent_crc(g_85.f5, "g_85.f5", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
