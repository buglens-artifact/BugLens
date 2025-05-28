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
   unsigned short f1;
   unsigned short f2;
   short f3;
   unsigned f4;
   unsigned char f5;
   unsigned f6;
   char f7;
};


static short g_16 = (-3L);
static struct S0 g_27 = {7L,0x1CB6L,1UL,0xEA14L,7UL,0x0CL,0xE2BF5F40L,-1L};
static struct S0 g_47 = {0xFEF5379AL,0UL,4UL,0xEF21L,0xDBC75B16L,0xD3L,0x8E1CE43CL,0xD7L};
static struct S0 *g_68 = &g_47;
static int *g_101 = &g_27.f0;
static int g_114 = 0x0B9FCDB2L;
static int g_116 = 0xBBCFA1F8L;
static unsigned g_118 = 1UL;
static struct S0 g_133 = {0L,0xD514L,65529UL,1L,7UL,1UL,0x42722C04L,0xB2L};
static int * const *g_158 = &g_101;
static int * const **g_157 = &g_158;
static short *g_169 = &g_133.f3;
static short **g_168 = &g_169;
static unsigned g_170 = 0x542557B4L;
static short **g_184 = (void*)0;
static unsigned char *g_223 = (void*)0;
static unsigned short *g_349 = &g_133.f1;
static char g_357 = 0xCAL;
static unsigned **g_369 = (void*)0;
static int *g_392 = &g_116;
static struct S0 ** const g_453 = &g_68;
static struct S0 ** const *g_452 = &g_453;



static unsigned char func_1(void);
static const short func_6(unsigned char p_7, short p_8, short p_9);
static unsigned char func_10(unsigned p_11, int p_12, unsigned p_13, unsigned p_14, short p_15);
static short func_22(struct S0 p_23, char p_24, unsigned p_25, char p_26);
static const int func_28(unsigned char p_29, unsigned p_30, unsigned p_31, int p_32, unsigned char p_33);
static unsigned short func_36(struct S0 p_37, char p_38, unsigned p_39);
static struct S0 func_40(unsigned p_41, unsigned p_42, char p_43);
static unsigned func_48(unsigned short p_49, unsigned char p_50, struct S0 * p_51, short p_52);
static short func_54(unsigned char p_55, struct S0 * const p_56, const int p_57);
static struct S0 * func_58(char p_59, char p_60);
static unsigned char func_1(void)
{
    short l_17 = 0L;
    const int l_504 = (-10L);
    char *l_505 = &g_357;
    unsigned char *l_508 = &g_47.f5;
    int *l_509 = &g_27.f0;
    struct S0 l_522 = {0xBB0A3849L,0x3B21L,2UL,0xBC8BL,1UL,0xF1L,0x2145B11CL,0x17L};
    unsigned l_529 = 4294967288UL;
    int l_536 = 0x6E2DEAE4L;
    (*l_509) = (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((*l_508) = (func_6(func_10(g_16, l_17, l_17, g_16, (((*l_505) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((0x45CCL | ((*g_169) = (!func_22(g_27, (((l_17 < l_17) < func_28((safe_div_func_uint16_t_u_u(func_36(func_40((safe_sub_func_uint16_t_u_u(0UL, l_17)), g_27.f2, g_27.f3), g_27.f4, l_17), l_17)), g_27.f3, g_27.f2, l_17, g_16)) < 0x484FL), g_27.f0, g_16)))), l_17)), l_504))) && l_504)), l_17, l_504) < 0x4911L)) | l_504), g_27.f3)), l_504));
    for (g_133.f7 = 0; (g_133.f7 < (-22)); --g_133.f7)
    {
        int **l_514 = (void*)0;
        int **l_515 = &g_101;
        (*g_392) = (g_133.f7 & (safe_lshift_func_uint8_t_u_u((*l_509), 4)));
        (*l_515) = (void*)0;
    }
    if ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s(func_22(l_522, (*l_509), (((safe_mod_func_uint32_t_u_u((((*l_505) = (+(*l_509))) == 1UL), (*l_509))) == 0xA82EL) > (*g_392)), g_47.f0), (*g_169))), l_522.f5)), l_522.f2)))
    {
        char *l_539 = (void*)0;
        unsigned short l_540 = 0x678BL;
        const int l_543 = 0x9F88D66BL;
        int *l_544 = &g_133.f0;
        (***g_452) = l_522;
        return g_47.f7;
    }
    else
    {
        return g_27.f2;
    }
}







static const short func_6(unsigned char p_7, short p_8, short p_9)
{
    return p_7;
}







static unsigned char func_10(unsigned p_11, int p_12, unsigned p_13, unsigned p_14, short p_15)
{
    int *l_506 = &g_116;
    int **l_507 = &g_392;
    (*l_507) = l_506;
    (*g_453) = (**g_452);
    return (*l_506);
}







static short func_22(struct S0 p_23, char p_24, unsigned p_25, char p_26)
{
    unsigned short l_410 = 1UL;
    int *l_416 = &g_47.f0;
    char *l_424 = &g_357;
    unsigned l_495 = 1UL;
    unsigned char l_500 = 249UL;
    if (l_410)
    {
        char l_411 = 0x34L;
        return l_411;
    }
    else
    {
        for (g_27.f7 = 0; (g_27.f7 == 22); ++g_27.f7)
        {
            int **l_414 = &g_392;
            int *l_415 = (void*)0;
            (*g_157) = l_414;
            (*l_414) = l_415;
        }
    }
    (*l_416) = 0xB4046861L;
    for (g_47.f6 = 0; (g_47.f6 == 22); g_47.f6++)
    {
        (*l_416) = (*l_416);
    }
    for (g_27.f2 = 0; (g_27.f2 == 14); g_27.f2 = safe_add_func_int32_t_s_s(g_27.f2, 2))
    {
        struct S0 **l_421 = &g_68;
        char *l_423 = &g_357;
        char **l_422 = &l_423;
        char **l_425 = &l_424;
        int l_428 = 0x99E1F5F1L;
        int *l_431 = &g_27.f0;
        (*l_416) = p_26;
        if (((((*l_422) = &p_26) != ((*l_425) = l_424)) != (safe_rshift_func_uint16_t_u_u(l_428, 6))))
        {
            for (g_133.f0 = 9; (g_133.f0 <= (-27)); g_133.f0 = safe_sub_func_int16_t_s_s(g_133.f0, 3))
            {
                int l_432 = 0x4DF307D0L;
                l_428 = (*l_416);
                l_431 = &l_428;
                return l_432;
            }
        }
        else
        {
            short l_442 = 0xBA0FL;
            int **l_450 = &l_416;
            short ***l_460 = (void*)0;
            for (g_27.f0 = 0; (g_27.f0 > (-13)); g_27.f0 = safe_sub_func_uint16_t_u_u(g_27.f0, 8))
            {
                unsigned char l_435 = 0x0BL;
                char l_443 = 0x79L;
                unsigned short l_468 = 0xF390L;
                int *l_471 = &g_116;
                struct S0 * const l_479 = (void*)0;
                unsigned l_490 = 1UL;
            }
            return (**l_450);
        }
    }
    return p_23.f7;
}







static const int func_28(unsigned char p_29, unsigned p_30, unsigned p_31, int p_32, unsigned char p_33)
{
    unsigned char l_406 = 6UL;
    int *l_407 = (void*)0;
    int *l_408 = &g_116;
    struct S0 **l_409 = &g_68;
    g_392 = &p_32;
    (*l_408) = ((*g_392) = ((((*g_157) == (void*)0) > (-9L)) || ((g_369 != (void*)0) < l_406)));
    (*l_409) = &g_133;
    return (*l_408);
}







static unsigned short func_36(struct S0 p_37, char p_38, unsigned p_39)
{
    int *l_336 = &g_114;
    int **l_337 = (void*)0;
    int **l_338 = &l_336;
    unsigned char l_339 = 0UL;
    unsigned char *l_346 = &l_339;
    unsigned short *l_350 = &g_47.f2;
    unsigned short **l_351 = &l_350;
    unsigned short *l_353 = &g_47.f1;
    unsigned short **l_352 = &l_353;
    unsigned *l_354 = (void*)0;
    unsigned *l_355 = (void*)0;
    unsigned *l_356 = &g_118;
    struct S0 *l_399 = &g_47;
    (*l_338) = l_336;
    (*l_336) = ((~p_37.f0) != (p_37.f1 || (~g_27.f3)));
    if (((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((*l_346) = p_38), p_37.f3)), (p_39 != (safe_div_func_int8_t_s_s(g_47.f6, p_37.f0))))), 6)) || (g_357 = ((*l_356) = (((g_349 = (void*)0) == ((*l_352) = ((*l_351) = l_350))) || p_39)))))
    {
        int l_365 = 1L;
        struct S0 * const l_366 = &g_47;
        char *l_367 = &g_133.f7;
        char *l_368 = &g_357;
        int l_378 = (-7L);
        int *l_397 = &l_378;
        if ((((*l_336) & g_116) != (((safe_unary_minus_func_uint32_t_u(((void*)0 == &g_68))) >= (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((0x44L > (safe_mod_func_uint16_t_u_u(l_365, l_365))), 0)) ^ p_37.f0), p_37.f0))) <= p_37.f5)))
        {
            unsigned ***l_370 = &g_369;
            int *l_371 = &g_47.f0;
            (*l_370) = g_369;
            p_37.f0 = (-6L);
            (*l_338) = l_371;
            (*l_366) = p_37;
        }
        else
        {
            int *l_391 = &l_378;
            const struct S0 l_404 = {0x6B7A6513L,65526UL,65528UL,0xA090L,0x8D50275CL,0xDEL,0xDFE08E61L,0x97L};
            for (p_37.f3 = (-25); (p_37.f3 >= (-7)); p_37.f3++)
            {
                const int l_377 = 0xF30EDAC9L;
                if ((l_378 | (-1L)))
                {
                    char l_389 = 1L;
                    int l_393 = (-1L);
                    if (p_39)
                    {
                        struct S0 **l_390 = &g_68;
                        (*l_390) = func_58(p_38, ((safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s((&g_369 == (void*)0), p_38)), (((*l_353) = (**l_338)) | (safe_lshift_func_int8_t_s_u((p_37.f6 <= ((*g_169) = 0x48C9L)), 2))))) >= (safe_mul_func_uint16_t_u_u(0UL, (safe_mul_func_int16_t_s_s((p_37.f4 < l_389), p_37.f7))))));
                    }
                    else
                    {
                        (*l_338) = l_391;
                        (*l_338) = g_392;
                        (*l_338) = (*l_338);
                        l_393 = (*l_391);
                    }
                }
                else
                {
                    int *l_396 = (void*)0;
                    struct S0 **l_398 = (void*)0;
                    int l_400 = 0x0C127A3CL;
                    for (g_133.f1 = 18; (g_133.f1 <= 4); g_133.f1 = safe_sub_func_uint16_t_u_u(g_133.f1, 6))
                    {
                        (*l_336) = (*g_392);
                        if (l_365)
                            break;
                    }
                    l_397 = l_396;
                    l_399 = &g_47;
                    if (l_400)
                    {
                        (*l_338) = &g_114;
                    }
                    else
                    {
                        (*l_366) = p_37;
                        l_396 = &l_365;
                    }
                }
                p_37.f0 = 0x816AAFB0L;
                for (g_170 = (-29); (g_170 == 58); g_170++)
                {
                    int *l_403 = (void*)0;
                    l_403 = (void*)0;
                    g_101 = l_403;
                }
            }
            (*l_399) = l_404;
        }
    }
    else
    {
        int *l_405 = &g_133.f0;
        l_405 = l_405;
        return (**l_338);
    }
    return p_37.f3;
}







static struct S0 func_40(unsigned p_41, unsigned p_42, char p_43)
{
    struct S0 *l_46 = &g_47;
    int l_53 = 0xC826FFEAL;
    int l_67 = (-3L);
    int *l_214 = &g_133.f0;
    unsigned char l_326 = 0x58L;
    (*l_46) = g_27;
    if (((+func_48(g_16, l_53, l_46, func_54(p_43, (g_68 = func_58((safe_mul_func_int16_t_s_s(1L, g_47.f4)), (l_67 = (l_53 | (safe_rshift_func_uint16_t_u_s(l_53, (safe_add_func_int16_t_s_s(l_53, g_47.f7)))))))), l_53))) >= l_53))
    {
        int **l_215 = (void*)0;
        struct S0 l_216 = {0x10C7F523L,0UL,0x1ED4L,1L,0x733CD5DEL,252UL,7UL,1L};
        struct S0 **l_238 = &l_46;
        g_101 = l_214;
        (*g_68) = (*l_46);
        (*g_68) = l_216;
        if (((***g_157) = p_43))
        {
            return (*g_68);
        }
        else
        {
            const int l_217 = (-9L);
            unsigned char *l_220 = (void*)0;
            unsigned char *l_222 = &g_47.f5;
            struct S0 *l_229 = &l_216;
            unsigned l_259 = 0x2FD9266CL;
            int l_286 = (-7L);
            if (l_217)
            {
                struct S0 * const l_218 = &g_27;
                struct S0 **l_219 = &g_68;
                unsigned char **l_221 = &l_220;
                int l_252 = 4L;
                struct S0 * const l_263 = &l_216;
                (*l_219) = l_218;
                (*l_219) = l_46;
                if ((((*l_221) = l_220) != (g_223 = l_222)))
                {
                    char l_235 = (-1L);
                    struct S0 ***l_239 = &l_219;
                    unsigned short l_249 = 1UL;
                    if (p_41)
                    {
                        struct S0 *l_228 = (void*)0;
                        unsigned short *l_234 = &g_47.f2;
                        (***g_157) = ((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_42, ((65535UL <= p_41) >= (((l_228 != ((*l_219) = l_229)) >= p_43) & 0x7BD3F7DAL)))), p_42)) <= (safe_add_func_uint16_t_u_u(((*l_234) = (safe_lshift_func_int8_t_s_s((65534UL > 0xAB0CL), 3))), l_235)));
                    }
                    else
                    {
                        int **l_236 = (void*)0;
                        int **l_237 = &l_214;
                        (*l_237) = (*g_158);
                    }
                    (*l_239) = l_238;
                    if ((safe_sub_func_int8_t_s_s(((*g_223) || ((p_42 < l_217) <= ((+0xEAL) || (safe_unary_minus_func_int32_t_s(p_42))))), g_47.f5)))
                    {
                        char *l_247 = &l_216.f7;
                        char *l_248 = &g_133.f7;
                        (***g_157) = ((safe_lshift_func_int8_t_s_s(0x21L, 4)) & func_54((safe_sub_func_int8_t_s_s(((*l_248) = ((*l_247) = g_118)), 0xE7L)), (*l_238), (l_249 && (safe_mul_func_int8_t_s_s(0xE9L, (p_43 & (((***g_157) <= (**g_158)) > l_252)))))));
                    }
                    else
                    {
                        unsigned l_262 = 18446744073709551615UL;
                        (*l_214) = ((l_249 ^ ((void*)0 != g_169)) & (safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(l_259, (*l_214))) & ((&p_41 == &p_41) & (*l_214))), (safe_div_func_uint8_t_u_u((((func_54(l_262, l_263, p_41) && (*g_169)) != g_133.f1) ^ l_262), (*g_223))))), p_42)));
                    }
                }
                else
                {
                    int *l_264 = (void*)0;
                    int **l_265 = &l_264;
                    (*l_265) = l_264;
                    (*g_101) = 0xF9BD9F56L;
                }
            }
            else
            {
                char l_289 = 0xBEL;
                int *l_297 = &g_114;
                char *l_301 = (void*)0;
                char **l_300 = &l_301;
                int **l_316 = (void*)0;
                int **l_317 = &l_297;
                if ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((*l_222) = l_217), (safe_sub_func_uint8_t_u_u((!g_47.f0), 0x52L)))), 6)))
                {
                    char l_272 = (-4L);
                    char *l_283 = &g_133.f7;
                    unsigned *l_292 = &g_118;
                    unsigned char *l_293 = (void*)0;
                    unsigned char *l_294 = &l_216.f5;
                    struct S0 **l_295 = (void*)0;
                    struct S0 **l_296 = &g_68;
                    int **l_298 = (void*)0;
                    int **l_299 = &l_214;
                    l_286 = (l_272 > (g_133.f0 == (safe_sub_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((((g_114 = ((l_272 && (safe_add_func_uint32_t_u_u(func_54(g_47.f0, (*l_238), ((p_42 ^ ((*l_283) = (safe_rshift_func_uint8_t_u_u((*l_214), 0)))) & ((*l_214) < (safe_div_func_int8_t_s_s(g_47.f0, p_41))))), (***g_157)))) <= 0x7670D45DL)) == 1UL) != (-1L)), 4)), g_133.f4)) & 0xC4E5L) > 0x5780539EL), l_217))));
                    (*l_214) = l_286;
                    (***g_157) = ((safe_div_func_int8_t_s_s(((*l_283) = l_289), p_42)) >= (safe_lshift_func_uint8_t_u_u(((l_289 <= 1UL) == (((*l_292) = l_259) > (**g_158))), 4)));
                    (*l_299) = l_297;
                }
                else
                {
                    char ***l_302 = &l_300;
                    short *l_312 = &g_47.f3;
                    int *l_314 = &g_27.f0;
                    (*l_302) = l_300;
lbl_305:
                    for (g_114 = 0; (g_114 == 6); g_114 = safe_add_func_uint16_t_u_u(g_114, 9))
                    {
                        if (p_43)
                            break;
                        if (l_216.f7)
                            goto lbl_305;
                    }
                    if ((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((*l_312) = ((*g_169) = (-1L))), ((((((*g_101) < (((*l_222) = p_42) < (p_42 != g_47.f1))) & l_259) && 0xF5L) <= (((p_43 <= 0x81L) ^ p_42) | g_133.f7)) != 4294967293UL))) != g_133.f0), 14)), l_217)))
                    {
                        int **l_313 = &l_214;
                        (*l_313) = &l_53;
                        (**l_238) = (*g_68);
                        (*l_313) = l_314;
                        (*l_313) = (void*)0;
                    }
                    else
                    {
                        int **l_315 = &g_101;
                        (*l_315) = &l_286;
                        (*l_315) = (void*)0;
                    }
                }
                l_286 = 0x021FB113L;
                (*l_317) = (void*)0;
            }
            return (**l_238);
        }
    }
    else
    {
        unsigned char l_325 = 0xFFL;
        int l_327 = 8L;
        unsigned char *l_328 = (void*)0;
        unsigned char *l_329 = &l_325;
        unsigned short *l_330 = &g_47.f2;
        if (((*l_214) && (safe_unary_minus_func_uint32_t_u(func_48(g_133.f3, p_42, &g_47, (((*l_330) = (((safe_add_func_uint16_t_u_u((*l_214), p_41)) && ((*l_329) = (safe_rshift_func_uint8_t_u_s((l_327 = ((safe_lshift_func_uint8_t_u_s((*l_214), 6)) || func_54(((0x1CL > (g_47.f7 = ((+l_325) == l_326))) || 0L), l_46, l_325))), g_116)))) <= 2UL)) <= (*l_214)))))))
        {
            struct S0 *l_331 = &g_47;
            l_46 = l_331;
        }
        else
        {
            (*l_214) = 0xC92A06D2L;
            (*l_214) = (*g_101);
        }
        for (g_47.f2 = 0; (g_47.f2 == 56); g_47.f2++)
        {
            (*l_214) = (*g_101);
        }
        for (g_133.f5 = 27; (g_133.f5 > 6); g_133.f5 = safe_sub_func_uint8_t_u_u(g_133.f5, 8))
        {
            (*l_46) = (*g_68);
            g_101 = &l_327;
        }
        l_46 = (void*)0;
    }
    return (*g_68);
}







static unsigned func_48(unsigned short p_49, unsigned char p_50, struct S0 * p_51, short p_52)
{
    int *l_95 = (void*)0;
    int *l_97 = &g_27.f0;
    unsigned short *l_111 = &g_47.f2;
    int l_119 = 3L;
    struct S0 * const l_128 = &g_47;
    struct S0 *l_163 = &g_133;
    unsigned short l_173 = 65529UL;
    short ***l_188 = (void*)0;
    char *l_200 = &g_47.f7;
    short ***l_205 = &g_168;
    short **l_206 = &g_169;
    unsigned char *l_207 = &g_47.f5;
    unsigned *l_208 = &g_118;
    int *l_209 = &g_116;
lbl_146:
    for (g_47.f3 = 0; (g_47.f3 != 8); ++g_47.f3)
    {
        int **l_96 = &l_95;
        int *l_98 = &g_47.f0;
        (*l_96) = l_95;
        (*l_96) = l_97;
        (*l_98) = 0L;
    }
lbl_190:
    if ((*l_97))
    {
        int *l_99 = &g_47.f0;
        int **l_100 = &l_95;
        int *l_102 = &g_47.f0;
        (*l_100) = l_99;
        l_102 = g_101;
        (*l_100) = (*l_100);
    }
    else
    {
        int *l_112 = &g_47.f0;
        int *l_113 = &g_114;
        int *l_115 = &g_116;
        unsigned *l_117 = &g_118;
        if ((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((*l_115) = ((*l_113) = ((*l_112) = ((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(p_52, (p_52 <= (l_111 != &p_49)))), 0x2FE8L)) >= 0x378BL)))), ((((*l_117) = (g_16 == p_52)) > ((*l_97) || p_50)) > l_119))), (*g_101))))
        {
            struct S0 *l_126 = &g_47;
            int l_127 = 0xFC0A9984L;
            int **l_153 = &l_113;
            short *** const l_187 = (void*)0;
lbl_159:
            if (((*l_115) = ((safe_mod_func_int8_t_s_s(6L, (safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((~(l_126 != p_51)), func_54(l_127, l_128, ((p_50 || p_52) || 0UL)))), 2)))) != l_127)))
            {
                unsigned l_136 = 0UL;
                for (p_50 = 2; (p_50 != 18); p_50 = safe_add_func_int16_t_s_s(p_50, 8))
                {
                    int * const *l_131 = &l_95;
                    int * const **l_132 = &l_131;
                    (*l_132) = l_131;
                    g_133 = ((*p_51) = (*l_128));
                    for (g_47.f5 = (-17); (g_47.f5 != 33); g_47.f5++)
                    {
                        return l_127;
                    }
                    (*l_113) = p_52;
                }
                return l_136;
            }
            else
            {
                int **l_137 = &l_113;
                int **l_138 = &l_115;
                int **l_139 = &l_112;
                (*l_139) = ((*l_138) = ((*l_137) = &g_116));
            }
            if ((*g_101))
            {
                int *l_140 = (void*)0;
                int *l_141 = &g_133.f0;
                int **l_142 = (void*)0;
                int **l_143 = &l_112;
                (*l_141) = ((*l_113) = (*g_101));
                (*l_143) = l_117;
                for (g_47.f7 = 0; (g_47.f7 >= 14); ++g_47.f7)
                {
                    unsigned l_149 = 6UL;
                    if (l_127)
                        goto lbl_146;
                }
                l_95 = ((*l_153) = l_95);
            }
            else
            {
                short *l_167 = &g_27.f3;
                short **l_166 = &l_167;
                char *l_174 = (void*)0;
                char *l_175 = &g_133.f7;
                struct S0 **l_176 = (void*)0;
                struct S0 **l_177 = &g_68;
                if ((((0xB578L >= (p_50 == p_50)) || p_49) < ((void*)0 == g_157)))
                {
                    if (((*l_115) = p_49))
                    {
                        (*l_153) = l_95;
                    }
                    else
                    {
                        short *l_162 = &g_47.f3;
                        short **l_161 = &l_162;
                        short ***l_160 = &l_161;
                        if (g_47.f6)
                            goto lbl_159;
                        (*l_112) = (**g_158);
                        (*l_160) = (void*)0;
                    }
                    if (g_47.f1)
                        goto lbl_190;
                }
                else
                {
                    (**l_153) = func_54((**l_153), func_58((l_163 == (void*)0), g_133.f4), (g_170 = (safe_mul_func_uint8_t_u_u(p_50, (((void*)0 == &p_49) < (l_166 == g_168))))));
                }
                if ((safe_sub_func_uint8_t_u_u(func_54(p_52, ((*l_177) = func_58(((*l_175) = ((*l_97) ^ ((!l_173) != (*l_115)))), g_27.f3)), p_52), ((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((-1L) >= 0x2841C190L) > (*l_112)), 8)), g_133.f0)) | 0x7E20L))))
                {
                    int **l_182 = (void*)0;
                    int **l_183 = &l_115;
                    short ***l_185 = &g_168;
                    (*l_183) = (**g_157);
                    (*l_112) = p_50;
                    (*l_112) = (-1L);
                    (*l_185) = g_184;
                }
                else
                {
                    unsigned char l_186 = 0x8DL;
                    (*l_115) = (l_186 || (p_52 != (l_187 == l_188)));
                }
                (*g_157) = (*g_157);
            }
        }
        else
        {
            int **l_189 = &l_112;
            (*l_189) = l_97;
        }
    }
    (*l_209) = (((~((*l_208) = ((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(((*l_97) | (safe_mul_func_uint16_t_u_u(g_27.f3, (l_188 == (void*)0)))))), ((safe_div_func_int8_t_s_s(((*l_200) = 1L), ((*l_207) = (g_133.f5 = ((safe_rshift_func_uint8_t_u_u((p_49 && (*l_97)), 2)) || ((*g_169) = (safe_lshift_func_uint16_t_u_s(65535UL, (((*l_205) = &g_169) != l_206))))))))) <= (*l_97)))) < 0x3A4AL))) > 0x295C5011L) && 0L);
    for (g_170 = (-5); (g_170 >= 27); g_170 = safe_add_func_int16_t_s_s(g_170, 8))
    {
        struct S0 l_212 = {5L,0UL,0x1E0FL,0L,0xA8EA3A56L,0x35L,18446744073709551610UL,-4L};
        int *l_213 = &g_27.f0;
        (*l_163) = ((*p_51) = l_212);
        l_209 = l_213;
    }
    return g_133.f6;
}







static short func_54(unsigned char p_55, struct S0 * const p_56, const int p_57)
{
    struct S0 l_72 = {0L,0x825DL,0xBC5DL,-1L,0xA3BBE756L,0UL,0xC007DFDCL,0xC3L};
    char *l_77 = &g_47.f7;
    struct S0 **l_86 = (void*)0;
    struct S0 *l_87 = &l_72;
    unsigned short *l_88 = &g_47.f2;
    int l_89 = 0x18C45603L;
    short *l_90 = &l_72.f3;
    int *l_91 = &g_47.f0;
    int l_92 = 0xFBAA6DCEL;
    (*p_56) = (*g_68);
    for (g_47.f2 = (-21); (g_47.f2 != 14); g_47.f2++)
    {
        struct S0 *l_71 = (void*)0;
        l_72 = (*p_56);
    }
    l_92 = ((*l_91) = (safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((*l_77) = g_47.f4), (safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(g_47.f5, 12)) >= p_57), g_47.f6)))), ((*l_90) = (safe_add_func_int8_t_s_s((l_89 = (((*l_88) = ((l_72.f0 = 1L) && ((p_57 > (&g_27 != (l_87 = func_58(g_47.f6, g_47.f5)))) && p_55))) == p_55)), (-1L)))))));
    return (*l_91);
}







static struct S0 * func_58(char p_59, char p_60)
{
    g_47.f0 = g_27.f2;
    return &g_47;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
    transparent_crc(g_27.f3, "g_27.f3", print_hash_value);
    transparent_crc(g_27.f4, "g_27.f4", print_hash_value);
    transparent_crc(g_27.f5, "g_27.f5", print_hash_value);
    transparent_crc(g_27.f6, "g_27.f6", print_hash_value);
    transparent_crc(g_27.f7, "g_27.f7", print_hash_value);
    transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
    transparent_crc(g_47.f1, "g_47.f1", print_hash_value);
    transparent_crc(g_47.f2, "g_47.f2", print_hash_value);
    transparent_crc(g_47.f3, "g_47.f3", print_hash_value);
    transparent_crc(g_47.f4, "g_47.f4", print_hash_value);
    transparent_crc(g_47.f5, "g_47.f5", print_hash_value);
    transparent_crc(g_47.f6, "g_47.f6", print_hash_value);
    transparent_crc(g_47.f7, "g_47.f7", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_133.f0, "g_133.f0", print_hash_value);
    transparent_crc(g_133.f1, "g_133.f1", print_hash_value);
    transparent_crc(g_133.f2, "g_133.f2", print_hash_value);
    transparent_crc(g_133.f3, "g_133.f3", print_hash_value);
    transparent_crc(g_133.f4, "g_133.f4", print_hash_value);
    transparent_crc(g_133.f5, "g_133.f5", print_hash_value);
    transparent_crc(g_133.f6, "g_133.f6", print_hash_value);
    transparent_crc(g_133.f7, "g_133.f7", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
