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
   unsigned f0;
   unsigned short f1;
   const int f2;
};


static short g_5 = (-3L);
static int **g_14 = (void*)0;
static short g_15 = (-1L);
static struct S0 g_16 = {0xE66C619AL,0x0BFBL,0xA4DF6F97L};
static char g_18 = 0x1CL;
static int g_20 = (-4L);
static int *g_19 = &g_20;
static short *g_38 = &g_15;
static short **g_37 = &g_38;
static unsigned char g_75 = 0x3DL;
static char *g_86 = &g_18;
static char **g_85 = &g_86;
static unsigned short g_116 = 1UL;
static unsigned short g_118 = 0xCD7FL;
static char g_138 = (-1L);
static unsigned g_142 = 0x7A95F242L;
static struct S0 *g_169 = (void*)0;
static struct S0 **g_168 = &g_169;
static const int *g_234 = &g_20;
static short *g_256 = &g_5;
static short *g_257 = &g_15;
static const short *g_286 = &g_15;
static const short **g_285 = &g_286;
static const short **g_288 = &g_286;
static char g_290 = 0x6EL;
static int g_294 = 0xD9A7503CL;
static const unsigned char g_299 = 251UL;
static int g_308 = 0L;
static unsigned g_366 = 0x857E93B1L;



static unsigned func_1(void);
static char func_8(int * p_9, int ** p_10, unsigned char p_11, char p_12, struct S0 p_13);
static short ** func_24(char p_25);
static int * func_39(const char p_40, const short ** p_41, char * p_42);
static const short ** func_43(unsigned p_44);
static int * const func_46(short * p_47, short * p_48);
static short * func_49(unsigned p_50);
static unsigned func_51(short * const * p_52, unsigned short p_53, struct S0 p_54, int p_55, const unsigned p_56);
static unsigned func_57(const unsigned p_58, const struct S0 p_59);
static struct S0 func_61(char p_62, short ** const p_63, short p_64, const unsigned p_65, short * p_66);
static unsigned func_1(void)
{
    int *l_2 = (void*)0;
    int **l_3 = &l_2;
    short *l_4 = &g_5;
    char *l_17 = &g_18;
    int l_21 = 0x1C33C017L;
    struct S0 l_22 = {1UL,0xBB00L,0x891BA802L};
    short * const *l_347 = &g_38;
    short *** const l_352 = &g_37;
lbl_23:
    (*l_3) = l_2;
    if (((((*l_4) = (-7L)) <= (safe_mul_func_int8_t_s_s(((*l_17) = func_8((*l_3), g_14, g_15, g_15, g_16)), (0xC863L | (func_8(g_19, &l_2, g_20, l_21, l_22) & (-5L)))))) == 0x33L))
    {
        char l_28 = 0L;
        short ***l_328 = (void*)0;
        short ***l_329 = &g_37;
        const short **l_336 = (void*)0;
        char *l_337 = &g_290;
        int l_338 = (-1L);
        int *l_339 = &g_20;
        (*g_19) = 1L;
        if (g_16.f2)
            goto lbl_23;
        (*l_329) = func_24((g_5 ^ (safe_mul_func_uint8_t_u_u(l_28, 0xC7L))));

        ;
        ;

        (*l_339) = func_51((*l_329), (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(func_8(func_39((safe_lshift_func_uint8_t_u_s(l_28, l_28)), l_336, l_337), &l_2, l_28, l_28, l_22), (-8L))), g_290)), l_22, l_338, l_338);


    }
    else
    {
        int l_343 = 4L;
        struct S0 l_349 = {0x21A80C49L,0UL,0x8D11B0E9L};
        int l_351 = (-1L);
        char *l_353 = &g_18;
        const char *l_354 = &g_290;
        int l_363 = 0L;
        int **l_364 = &l_2;
        int *l_365 = &g_308;
        for (g_294 = 8; (g_294 != 7); g_294 = safe_sub_func_uint8_t_u_u(g_294, 1))
        {
            int **l_342 = &l_2;
            short **l_346 = &g_257;
            int l_348 = 0x36A4C61FL;
            int *l_350 = (void*)0;
        }
        (*l_365) = ((*g_19) = ((+func_8(&l_351, &g_19, g_16.f2, (((l_353 = (*g_85)) != l_354) || ((safe_sub_func_int32_t_s_s(l_351, (safe_mod_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((l_363 = ((*g_19) = (safe_add_func_int8_t_s_s((**g_85), 0x26L)))), func_8(&g_308, l_364, g_142, (*g_86), l_22))) | 0x39L), (**g_85))))) <= g_116)), l_349)) ^ g_116));
        if (g_366)
        {
            (*g_168) = &l_349;

            ;
            (*g_19) = ((*l_365) = (*g_234));
        }
        else
        {
            return g_366;
        }

        ;
        (*g_19) = (*g_19);
    }


    ;


    return g_366;
}







static char func_8(int * p_9, int ** p_10, unsigned char p_11, char p_12, struct S0 p_13)
{
    return g_15;
}







static short ** func_24(char p_25)
{
    char *l_289 = &g_290;
    const int l_324 = 1L;
    const short **l_325 = &g_286;
    const int **l_327 = &g_234;
    for (g_16.f1 = 22; (g_16.f1 > 9); --g_16.f1)
    {
        unsigned char l_45 = 3UL;
        int *l_323 = &g_308;
        int **l_326 = &g_19;
        for (g_5 = 18; (g_5 >= 28); g_5 = safe_add_func_uint16_t_u_u(g_5, 9))
        {
            short *l_36 = &g_15;
            short **l_35 = &l_36;
            for (g_15 = 0; (g_15 >= (-1)); --g_15)
            {
                return g_37;


            }
        }
        if (l_324)
            continue;
        (*l_326) = (l_323 = func_39((*l_323), l_325, (*g_85)));

        ;
        ;
    }

    ;
    (*l_327) = &l_324;

    ;
    return &g_256;



}







static int * func_39(const char p_40, const short ** p_41, char * p_42)
{
    char l_296 = 0x32L;
    int l_304 = 0x784966DFL;
    struct S0 l_309 = {18446744073709551615UL,0x573AL,1L};
    unsigned short *l_313 = &g_116;
    const int l_314 = 0xB7B602D2L;
    const unsigned short l_315 = 0xDF97L;
    short ** const l_316 = &g_38;
    unsigned char l_317 = 0UL;
    const unsigned short l_318 = 9UL;
    int *l_319 = &l_304;
    int **l_321 = (void*)0;
    int **l_322 = &l_319;
    for (g_20 = 0; (g_20 >= (-5)); --g_20)
    {
        int *l_293 = &g_294;
        const struct S0 l_295 = {0x7985680DL,0UL,0x8086BC5BL};
        unsigned short *l_300 = (void*)0;
        unsigned short *l_301 = (void*)0;
        unsigned short *l_302 = (void*)0;
        unsigned short *l_303 = (void*)0;
        short *l_305 = (void*)0;
        short *l_306 = (void*)0;
        short *l_307 = &g_15;
        unsigned *l_310 = &g_142;
        (*l_293) = g_16.f0;
        (*l_293) = (((((0x419CL < p_40) == l_296) <= p_40) | (((*l_310) = (~func_8(&g_294, &l_293, ((safe_rshift_func_int8_t_s_s(((g_308 = (~(((*l_307) = ((*l_293) = ((l_304 = (+g_299)) != 0xAB25L))) || 1UL))) && (*l_293)), (*g_86))) >= 1UL), (*g_86), l_309))) >= p_40)) && (*l_293));
    }
    if (l_309.f1)
        goto lbl_320;
lbl_320:
    (*l_319) = ((safe_add_func_int16_t_s_s(func_51(&g_38, l_304, func_61(((*g_86) = (*p_42)), l_316, l_317, g_75, (*g_37)), p_40, l_318), (**g_288))) != 0L);


    (*l_322) = func_46((*l_316), (*l_316));

    ;
    return &g_294;


}







static const short ** func_43(unsigned p_44)
{
    const char l_60 = 9L;
    short ** const l_69 = &g_38;
    short *l_70 = &g_5;
    struct S0 l_193 = {0xB4E4937CL,65529UL,0x17A473E4L};
    unsigned *l_196 = &g_142;
    int **l_206 = &g_19;
    int l_207 = 0L;
    int **l_212 = &g_19;
    int *l_261 = (void*)0;
    char ** const *l_282 = (void*)0;
    const short *l_284 = &g_5;
    const short **l_283 = &l_284;
    const short **l_287 = &l_284;
    (*l_206) = func_46(func_49(((*l_196) = func_51(&g_38, (func_57(l_60, func_61((safe_mod_func_int16_t_s_s(p_44, (l_60 | ((*g_38) = p_44)))), l_69, p_44, p_44, l_70)) && 3UL), l_193, p_44, g_16.f2))), (*g_37));

    ;

    l_207 = p_44;
    if ((safe_lshift_func_int8_t_s_u(0xBBL, 4)))
    {
        int **l_217 = (void*)0;
        int ***l_219 = &l_212;
        int ****l_218 = &l_219;
        unsigned l_220 = 18446744073709551611UL;
        int *l_221 = (void*)0;
        int *l_222 = &l_207;
        struct S0 l_223 = {0xAC723E32L,65534UL,0L};
        unsigned short *l_224 = &l_223.f1;
        unsigned l_227 = 18446744073709551608UL;
        short *l_252 = &g_15;
        if (((safe_sub_func_uint16_t_u_u(((*l_224) = func_8((*l_206), l_212, (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(func_8((*l_212), l_217, (((*l_218) = &l_217) != &g_14), ((*g_86) = (p_44 < ((*l_222) = func_8((*l_206), l_212, l_220, p_44, l_193)))), l_223), g_15)), (**g_37))), l_193.f0, l_223)), 0x96E1L)) != g_116))
        {
            const unsigned char l_228 = 246UL;
            const short ***l_246 = (void*)0;
            int * const l_247 = &l_207;
            int *l_248 = &l_207;
            short *l_249 = &g_5;
            if ((((*g_86) = (*g_86)) < (p_44 == (((safe_lshift_func_int16_t_s_u(func_8(&g_20, l_212, p_44, p_44, func_61(l_227, &g_38, p_44, l_228, l_224)), 11)) && p_44) < g_16.f2))))
            {
                for (l_223.f0 = 6; (l_223.f0 == 28); ++l_223.f0)
                {
                    if (l_228)
                        break;
                }
                for (g_15 = 6; (g_15 != 28); g_15 = safe_add_func_int16_t_s_s(g_15, 2))
                {
                    const int *l_233 = &l_223.f2;
                    g_234 = l_233;

                    ;
                }

                ;
            }
            else
            {
                int *l_241 = &g_20;
                short ** const **l_243 = (void*)0;
                short ** const *l_245 = (void*)0;
                short ** const **l_244 = &l_245;
                int **l_258 = (void*)0;
                for (g_18 = 0; (g_18 < 9); ++g_18)
                {
                    unsigned l_242 = 0x66EBC3AFL;
                    for (l_227 = 3; (l_227 > 50); l_227++)
                    {
                        int *l_239 = &l_207;
                        struct S0 l_240 = {3UL,1UL,0x511D3A89L};
                        (*l_212) = l_239;

                        ;
                        if ((*g_234))
                            continue;
                        l_242 = func_51(&g_38, l_228, l_240, ((void*)0 == l_241), g_5);


                    }
                }


                if ((((*l_244) = &g_37) != l_246))
                {
                    l_248 = l_247;
                    (*l_222) = func_8(&g_20, l_206, p_44, (((*g_37) == l_224) == 0xBEL), func_61(p_44, (**l_244), (p_44 == (*l_241)), g_15, l_249));
                }
                else
                {
                    int *l_253 = &g_20;
                    (*l_247) = p_44;
                    for (g_142 = (-1); (g_142 == 40); g_142 = safe_add_func_int16_t_s_s(g_142, 7))
                    {
                        (*l_247) = (((*l_69) != (l_252 = (***l_244))) | p_44);
                        l_253 = &g_20;
                    }
                    (*l_247) = 0L;
                    for (l_193.f0 = 0; (l_193.f0 != 19); ++l_193.f0)
                    {
                        if ((*l_248))
                            break;
                        if (p_44)
                            break;
                    }
                }

                ;
                l_241 = func_46(((*g_37) = g_256), (g_257 = (void*)0));

                ;
                ;
                ;
            }


            ;
            ;
            ;
            (*l_206) = l_248;

            ;
        }
        else
        {
            int **l_259 = (void*)0;
            int **l_260 = &l_221;
            (*l_212) = (*l_212);
            (*l_260) = func_46(l_224, func_49(g_18));

            ;
            l_261 = (void*)0;
        }

        ;
        ;
        ;
        ;
        ;
    }
    else
    {
        int l_279 = 2L;
        if ((*g_234))
        {
            int l_270 = 0x579BCBDFL;
            struct S0 l_281 = {8UL,0x2EA5L,0x7A906813L};
            if (p_44)
            {
                int * const l_262 = &g_20;
                int **l_263 = &l_261;
                short * const l_266 = (void*)0;
                short * const *l_265 = &l_266;
                short * const **l_264 = &l_265;
                unsigned short *l_280 = &g_118;
                (*l_263) = l_262;

                ;
                (**l_263) = ((func_51(((*l_264) = &g_256), ((*l_280) = ((((safe_unary_minus_func_uint32_t_u(g_116)) && l_270) < ((((safe_mod_func_uint8_t_u_u(((p_44 > ((((p_44 & l_270) ^ ((safe_sub_func_uint16_t_u_u((p_44 || ((*l_196) = (p_44 >= (safe_mod_func_uint32_t_u_u(((l_279 > p_44) | 0x21L), p_44))))), 0xF49AL)) && 1UL)) <= g_138) != 0L)) == 5UL), 0x34L)) & 0xFCL) != p_44) <= l_279)) & g_75)), l_281, (*g_234), p_44) > 3L) != p_44);


                ;
                (*l_262) = (!(l_282 == (void*)0));
            }
            else
            {
                return g_285;


            }


            ;
        }
        else
        {
            return &g_286;


        }


        ;
    }


    ;

    ;
    ;
    return g_288;



}







static int * const func_46(short * p_47, short * p_48)
{
    int *l_204 = (void*)0;
    for (g_142 = 17; (g_142 >= 3); g_142--)
    {
        int **l_205 = &l_204;
        (*l_205) = l_204;
    }
    return l_204;


}







static short * func_49(unsigned p_50)
{
    int *l_200 = &g_20;
    int **l_201 = &g_19;
    for (p_50 = 20; (p_50 > 39); ++p_50)
    {
        int **l_199 = &g_19;
        (*l_199) = (void*)0;

        ;
    }
    (*l_201) = l_200;

    ;
    return (*g_37);


}







static unsigned func_51(short * const * p_52, unsigned short p_53, struct S0 p_54, int p_55, const unsigned p_56)
{
    int *l_194 = &g_20;
    int **l_195 = &g_19;
    (*l_194) = g_16.f0;
    (*l_195) = &p_55;

    ;
    return p_56;


}







static unsigned func_57(const unsigned p_58, const struct S0 p_59)
{
    int l_78 = (-5L);
    int *l_79 = (void*)0;
    short *l_82 = &g_5;
    char *l_84 = (void*)0;
    char **l_83 = &l_84;
    int **l_124 = &g_19;
    struct S0 *l_172 = &g_16;
    l_78 = l_78;
    l_79 = &l_78;

    ;
    for (g_18 = 13; (g_18 < 6); --g_18)
    {
        int *l_99 = &l_78;
        char **l_107 = &l_84;
        int l_143 = 0L;
        char l_156 = (-5L);
        struct S0 l_159 = {9UL,65535UL,0x49B8DC11L};
        struct S0 **l_188 = &l_172;
        if ((l_82 != (void*)0))
        {
            int *l_92 = &g_20;
            g_85 = l_83;

            ;
            for (g_16.f0 = 0; (g_16.f0 != 20); ++g_16.f0)
            {
                char l_98 = 5L;
                int **l_100 = &g_19;
                struct S0 * const l_103 = (void*)0;
                for (g_15 = (-1); (g_15 == 27); ++g_15)
                {
                    unsigned l_91 = 0x2A59A03CL;
                    return l_91;


                }
                l_92 = &l_78;

                ;
                for (g_15 = 4; (g_15 <= (-7)); g_15 = safe_sub_func_int16_t_s_s(g_15, 8))
                {
                    char l_97 = 0L;
                    unsigned short *l_115 = &g_116;
                    unsigned short *l_117 = &g_118;
                    int ***l_123 = (void*)0;
                    char *l_125 = &l_97;
                    (*l_99) = (func_8(&g_20, &g_19, (safe_add_func_int8_t_s_s(l_97, l_97)), l_98, p_59) || ((-1L) || func_8(l_99, l_100, (*l_92), p_59.f1, p_59)));
                    for (g_75 = 0; (g_75 < 44); g_75++)
                    {
                        struct S0 **l_104 = (void*)0;
                        struct S0 *l_106 = (void*)0;
                        struct S0 **l_105 = &l_106;
                        char ***l_108 = &l_83;
                        (*l_79) = (*l_79);
                        (*l_105) = l_103;
                        (*l_108) = l_107;
                    }
                    (*l_92) = func_8(&l_78, &g_19, p_59.f0, (safe_lshift_func_uint16_t_u_u((0x08F4L != (safe_lshift_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(0xD5B90669L, g_16.f2)) || ((*l_117) = ((*l_115) = (!g_15)))) ^ (safe_lshift_func_int8_t_s_s(((*l_99) = ((*l_125) = (safe_sub_func_uint16_t_u_u(func_8(&g_20, (l_124 = &g_19), p_59.f2, (*g_86), g_16), (*l_79))))), (*g_86)))), 1))), p_59.f2)), g_16);
                }
            }

            ;
            return p_59.f1;


        }
        else
        {
            int l_128 = 0L;
            unsigned short *l_135 = &g_116;
            char ***l_136 = &l_107;
            char *l_137 = &g_138;
            unsigned *l_141 = &g_142;
            for (l_78 = (-23); (l_78 > 10); ++l_78)
            {
                return l_128;
            }
            l_143 = ((*l_99) = (0xE8DF01DDL && (p_59.f2 | ((*l_141) = (l_128 >= (((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((((*l_135) = p_58) == ((*g_38) = (**g_37))), ((*l_137) = ((l_136 != &l_83) > l_128)))), 0)) <= (safe_add_func_int8_t_s_s(0x59L, 0xD9L))) ^ g_18))))));
        }
        for (g_75 = 9; (g_75 < 29); g_75 = safe_add_func_int8_t_s_s(g_75, 4))
        {
            char l_165 = (-3L);
            int *l_174 = (void*)0;
            int l_192 = 0xBDACD6EFL;
            for (l_78 = (-30); (l_78 < (-1)); l_78 = safe_add_func_int8_t_s_s(l_78, 1))
            {
                char l_151 = 0x93L;
                for (g_118 = 16; (g_118 <= 8); g_118--)
                {
                    int **l_150 = &l_79;
                    int *l_154 = (void*)0;
                    int *l_155 = &g_20;
                    short **l_161 = &g_38;
                    short **l_177 = &l_82;
                }
                (*l_124) = &l_78;

                ;
            }


            if ((*l_99))
            {
                for (l_78 = 0; (l_78 != (-6)); l_78 = safe_sub_func_uint16_t_u_u(l_78, 7))
                {
                    int *l_180 = &l_143;
                    (*l_180) = (*l_79);
                    (*l_124) = (void*)0;

                    ;
                }


                (*l_124) = (void*)0;

                ;
            }
            else
            {
                int *l_181 = (void*)0;
                l_181 = l_181;
                for (l_78 = 18; (l_78 != (-4)); l_78 = safe_sub_func_uint16_t_u_u(l_78, 9))
                {
                    int *l_184 = &l_78;
                    l_181 = l_184;

                    ;
                    return p_59.f1;


                }
                for (g_118 = 0; (g_118 <= 5); g_118++)
                {
                    struct S0 ***l_187 = &g_168;
                    struct S0 ***l_189 = &l_188;
                    (*l_99) = ((((*l_187) = &g_169) == ((*l_189) = l_188)) == 65535UL);
                }
                l_192 = (safe_rshift_func_int16_t_s_s(func_8(&g_20, &l_99, p_59.f2, p_59.f1, (*l_172)), 15));
            }


            return p_59.f0;


        }
    }
    return p_58;
}







static struct S0 func_61(char p_62, short ** const p_63, short p_64, const unsigned p_65, short * p_66)
{
    int *l_73 = &g_20;
    for (p_64 = (-7); (p_64 != (-20)); p_64 = safe_sub_func_uint16_t_u_u(p_64, 8))
    {
        unsigned char *l_74 = &g_75;
        int l_76 = 1L;
        int **l_77 = &g_19;
        l_76 = func_8(l_73, &l_73, ((*l_74) = g_5), g_16.f1, g_16);
        (*l_77) = &l_76;

        ;
        if (p_64)
            break;

    }
    return g_16;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
    transparent_crc(g_16.f2, "g_16.f2", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
