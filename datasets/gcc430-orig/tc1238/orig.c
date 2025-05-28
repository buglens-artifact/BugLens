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



static char g_16 = 0xCAL;
static unsigned g_19 = 4294967291UL;
static unsigned g_34 = 0x0004DDC8L;
static int g_56 = 0L;
static int g_92 = 0xCCE65120L;
static char *g_108 = &g_16;
static char **g_107 = &g_108;
static unsigned long long g_123 = 0UL;
static unsigned long long g_125 = 0xC778C533BF95235BLL;
static int g_134 = 0x7A9E2142L;
static unsigned short g_140 = 1UL;
static int g_145 = 1L;
static int **g_149 = (void*)0;
static char *g_155 = &g_16;
static int *g_156 = &g_145;
static int g_172 = 0x220C4E49L;
static long long g_235 = 3L;
static long long g_238 = 0x680C6D9DE4CBC4FELL;
static char g_260 = 0x93L;
static unsigned g_271 = 0x12F2D702L;
static unsigned g_282 = 0x0724E054L;
static unsigned char g_326 = 0xDAL;
static unsigned long long g_357 = 18446744073709551615UL;
static unsigned char g_392 = 7UL;
static short g_422 = 0x42D1L;
static int *g_440 = (void*)0;
static unsigned g_499 = 18446744073709551611UL;
static long long *g_508 = &g_238;
static long long **g_507 = &g_508;
static long long g_516 = 1L;
static unsigned char *g_575 = (void*)0;
static unsigned char **g_574 = &g_575;
static unsigned short g_620 = 0x4BF7L;
static unsigned *g_634 = &g_34;
static unsigned *g_658 = &g_499;
static unsigned **g_657 = &g_658;
static unsigned g_692 = 0x9D7B9F8CL;
static char g_736 = 1L;
static int *g_749 = (void*)0;
static int *g_841 = &g_56;



static int func_1(void);
static unsigned long long func_4(unsigned p_5, int p_6, unsigned p_7, int p_8, int p_9);
static int * func_35(int * p_36, unsigned * p_37, unsigned short p_38, long long p_39, char p_40);
static int * func_41(long long p_42, int * p_43, unsigned * p_44);
static int func_48(char * p_49, int * p_50, unsigned * p_51, int * p_52, unsigned * p_53);
static int * func_57(unsigned * p_58);
static unsigned * func_59(char * p_60);
static int func_64(unsigned p_65, unsigned * p_66, int * p_67);
static unsigned * func_68(long long p_69, unsigned p_70, char * p_71);
static unsigned char func_76(unsigned char p_77, int p_78, unsigned short p_79, int * p_80, unsigned short p_81);
static int func_1(void)
{
    short l_14 = 0xCE3EL;
    char *l_15 = &g_16;
    int l_20 = (-1L);
    long long l_31 = 0x60016488A9733147LL;
    unsigned l_32 = 0x62B56095L;
    unsigned *l_33 = &g_19;
    (*g_841) = (safe_add_func_uint64_t_u_u(func_4(((*l_33) = (safe_add_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(l_14, ((((*l_15) = l_14) <= (l_20 = (safe_add_func_uint64_t_u_u(g_19, 0xB2BC40ED3C15D0D6LL)))) >= l_14))) >= (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_14 && (safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((0xCB1A7A81L || 4294967288UL) != l_14), 1)), l_14)) <= l_31), l_14))), l_14)), 7)) > g_19) > g_19)), l_32))), g_34, l_32, g_34, l_14), 0xFAD0E4502BA5FDD5LL));
    for (g_392 = (-28); (g_392 > 2); g_392 = safe_add_func_int8_t_s_s(g_392, 2))
    {
        int *l_890 = &l_20;
        int **l_891 = (void*)0;
        int **l_892 = &g_749;
        unsigned short l_893 = 3UL;
        (*l_892) = l_890;
        (*g_841) = (g_271 ^ (0UL != l_893));
        (*l_892) = &l_20;
        for (g_282 = 0; (g_282 >= 23); ++g_282)
        {
            if ((*g_749))
                break;
        }
    }
    return g_172;
}







static unsigned long long func_4(unsigned p_5, int p_6, unsigned p_7, int p_8, int p_9)
{
    unsigned *l_47 = &g_19;
    char *l_54 = &g_16;
    int *l_55 = &g_56;
    unsigned long long *l_439 = &g_123;
    unsigned *l_441 = &g_34;
    int **l_822 = (void*)0;
    int **l_823 = &g_156;
    int **l_824 = &l_55;
    int l_827 = 0x71711F68L;
    unsigned short *l_836 = (void*)0;
    unsigned short *l_837 = &g_140;
    short *l_840 = &g_422;
    long long ***l_854 = &g_507;
    int *l_862 = &g_134;
    (*l_823) = func_35(func_41((safe_div_func_uint64_t_u_u(((*l_439) = (((*l_47) = g_34) != func_48(l_54, l_55, l_55, func_57(func_59(l_54)), l_55))), g_260)), g_440, l_441), &g_34, p_9, p_5, p_7);
    (*l_824) = &p_8;
    (*g_841) = (l_827 || p_6);
    if ((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_div_func_int64_t_s_s((*l_55), 18446744073709551615UL)), (safe_mul_func_uint8_t_u_u(0xA4L, (safe_lshift_func_uint16_t_u_s((!g_282), (&g_575 != &g_575))))))), (safe_add_func_int16_t_s_s((func_76((l_854 != l_854), g_326, g_736, &g_145, (**l_824)) != 0x5694L), g_172)))))
    {
        char *l_861 = &g_736;
        int *l_868 = &g_56;
        short l_882 = 0x1098L;
        for (g_516 = 19; (g_516 >= (-13)); g_516 = safe_sub_func_int8_t_s_s(g_516, 1))
        {
            unsigned *l_863 = &g_282;
            int l_865 = 1L;
            for (g_271 = (-10); (g_271 < 42); g_271++)
            {
                unsigned short l_859 = 0x53A4L;
                int l_860 = 0xD1D65845L;
                int *l_864 = &g_134;
                (*g_841) = ((!p_8) || func_76(((*g_155) < (l_860 = l_859)), p_5, (!(func_48(l_861, l_862, l_863, l_864, func_57(&g_282)) && 0xFEE40A20L)), l_863, p_9));
            }
            if (l_865)
                break;
            (*l_862) = (safe_sub_func_int32_t_s_s((*l_862), (*l_55)));
            (*g_841) = ((p_6 >= p_7) > 0UL);
        }
        (*l_868) = (-4L);
        if ((((void*)0 == &g_156) < 8UL))
        {
            short l_877 = 0xD707L;
            unsigned char *l_885 = &g_326;
            unsigned char *l_886 = &g_392;
            int *l_887 = (void*)0;
            for (g_123 = 0; (g_123 >= 39); ++g_123)
            {
                char l_873 = 0x1EL;
                int *l_876 = &g_92;
                unsigned short **l_878 = &l_837;
                unsigned short ***l_879 = &l_878;
                p_8 = ((safe_mul_func_uint8_t_u_u(p_7, ((*l_861) = (l_873 < (-1L))))) != func_76(((*l_868) = (g_392 = ((0UL || (251UL != ((void*)0 == &p_9))) ^ p_9))), p_7, p_7, l_876, l_877));
                (*l_879) = l_878;
                l_882 = (safe_rshift_func_uint16_t_u_u(p_8, p_8));
            }
            (**l_824) = (safe_sub_func_uint8_t_u_u(((*l_886) = ((*l_885) = (*l_55))), (p_5 || (*l_868))));
            (*g_841) = (0x54AFDAA080D91C46LL || p_7);
        }
        else
        {
            (*l_823) = &p_8;
        }
        (*g_841) = p_6;
    }
    else
    {
        (*l_824) = ((*l_823) = (*l_824));
    }
    return p_6;
}







static int * func_35(int * p_36, unsigned * p_37, unsigned short p_38, long long p_39, char p_40)
{
    int l_524 = 6L;
    unsigned l_525 = 0x0B6E6383L;
    char ***l_537 = (void*)0;
    unsigned char l_564 = 1UL;
    int *l_567 = (void*)0;
    short l_640 = 0x3249L;
    int l_642 = (-6L);
    unsigned l_688 = 4UL;
    unsigned short *l_718 = (void*)0;
    unsigned short **l_717 = &l_718;
    short l_760 = 0x203EL;
    int l_761 = 0x07D60488L;
    unsigned **l_792 = &g_658;
    int *l_804 = &l_761;
    int **l_821 = &g_440;
    if (l_524)
    {
        short l_538 = 0xC5A3L;
        int *l_569 = &g_145;
        unsigned char **l_595 = &g_575;
        char *l_635 = &g_16;
        unsigned short *l_666 = &g_620;
        long long ***l_693 = &g_507;
        unsigned ***l_697 = &g_657;
        if (((**g_507) != (p_39 = 0xAC845C9411BC2BF2LL)))
        {
            unsigned short l_527 = 3UL;
            int *l_572 = &g_92;
            char *l_573 = &g_16;
            unsigned l_580 = 0x8DFA4908L;
            unsigned **l_659 = (void*)0;
            int **l_664 = &g_440;
            if (l_525)
            {
                unsigned short l_526 = 65535UL;
                (*g_440) = l_526;
                (*g_440) = (*g_440);
                if (l_526)
                {
                    unsigned short *l_534 = &g_140;
                    short *l_535 = &g_422;
                    char *l_536 = &g_260;
                    (*g_440) = (l_527 != (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((p_40 & ((((*p_37) = (0x75A985CADD11AE85LL || (((*g_108) = (safe_mul_func_uint16_t_u_u(((*l_534) = l_527), ((*l_535) = g_16)))) == ((*l_536) = p_38)))) == (l_537 != (void*)0)) >= (**g_507))) <= l_538) ^ 0UL), 3)), 0UL)));
                }
                else
                {
                    for (g_392 = 2; (g_392 == 58); ++g_392)
                    {
                        p_36 = p_37;
                    }
                }
                for (g_19 = 0; (g_19 != 32); ++g_19)
                {
                    unsigned **l_545 = (void*)0;
                    unsigned *l_547 = &g_499;
                    unsigned **l_546 = &l_547;
                    unsigned short *l_548 = &l_527;
                    int l_563 = (-1L);
                    char ***l_585 = &g_107;
                    char ***l_586 = &g_107;
                    unsigned char *l_587 = &g_392;
                }
            }
            else
            {
                int **l_597 = &l_567;
                char ***l_600 = &g_107;
                short *l_605 = &l_538;
                unsigned short *l_616 = &l_527;
                unsigned short *l_617 = (void*)0;
                unsigned short *l_618 = (void*)0;
                unsigned short *l_619 = &g_620;
                long long *l_621 = &g_235;
                (*l_597) = p_37;
                (**l_597) = (((**l_597) == ((*l_572) = ((-1L) || (((((*l_600) = &g_108) != &g_108) ^ 0UL) & (**l_597))))) != (**l_597));
                (*g_440) = (((*p_37) = 0x55993346L) >= (safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s(p_39, (((*l_605) = (g_235 > g_125)) & (*l_572)))), (*l_569))));
                (*l_569) = (((safe_add_func_int32_t_s_s((0xF063AF954FF1F939LL <= ((*l_621) = ((safe_mul_func_int16_t_s_s((*l_567), ((*l_619) = ((*l_616) = (g_357 && ((**g_507) = (1L != ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((g_140 = (*l_567)), (*l_569))), 5)) > (safe_mod_func_uint16_t_u_u(((!(*l_569)) ^ ((&g_508 != (void*)0) <= (**l_597))), p_38)))))))))) < 0xC99A5FCF52D2AC3BLL))), p_40)) <= p_40) | (*l_569));
            }
            for (g_92 = 0; (g_92 == (-8)); g_92--)
            {
                return p_36;
            }
            for (l_564 = 8; (l_564 != 23); ++l_564)
            {
                char *l_632 = (void*)0;
                int *l_633 = &g_145;
                unsigned short *l_636 = &g_620;
                int l_637 = 0x9C1D6C0EL;
                int *l_643 = &g_134;
                if (((safe_lshift_func_uint16_t_u_u(((*l_636) = (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(func_48(l_632, l_633, (g_634 = func_57(p_37)), func_68(p_38, (p_38 <= (*g_440)), l_635), l_633), g_123)), p_39))), p_40)) & l_637))
                {
                    long long l_641 = 0xB563EB4AD314AB40LL;
                    int **l_662 = (void*)0;
                    int **l_663 = &l_569;
                    if ((safe_lshift_func_uint8_t_u_s(l_640, 3)))
                    {
                        if (l_641)
                            break;
                        (*l_569) = 0xA28F6DF6L;
                        if (l_642)
                            break;
                    }
                    else
                    {
                        int **l_644 = &l_572;
                        unsigned *l_651 = &l_580;
                        unsigned *l_655 = (void*)0;
                        unsigned **l_654 = &l_655;
                        unsigned ***l_656 = &l_654;
                        (*l_644) = l_643;
                        (*l_643) = ((*l_633) = (safe_mod_func_uint64_t_u_u(((*g_634) != ((safe_div_func_uint16_t_u_u(65532UL, ((*l_636) = 1UL))) >= (safe_lshift_func_uint16_t_u_u(g_125, ((safe_div_func_uint8_t_u_u(((g_657 = ((*l_656) = l_654)) == l_659), (*g_108))) ^ 0UL))))), 0x2D627531CD4FB644LL)));
                        (*l_633) = ((*l_572) = (safe_mul_func_int8_t_s_s(l_641, (-1L))));
                    }
                    (*l_663) = p_37;
                }
                else
                {
                    return l_572;
                }
                if ((*g_440))
                    continue;
            }
            (*l_664) = func_57(&g_34);
        }
        else
        {
            int **l_665 = &g_440;
            unsigned short **l_667 = &l_666;
            unsigned *l_685 = &g_282;
            int l_689 = 1L;
            unsigned char **l_713 = &g_575;
            char *l_737 = &g_16;
            long long *l_741 = &g_235;
            (*l_665) = l_567;
            (*l_569) = (&p_38 != ((*l_667) = l_666));
            for (g_140 = 0; (g_140 >= 13); g_140++)
            {
                int l_676 = 0L;
                long long *l_686 = &g_235;
                short *l_687 = (void*)0;
                short l_690 = 0x73F5L;
                unsigned ***l_698 = &g_657;
                short l_702 = (-8L);
                char *l_710 = &g_260;
                unsigned short **l_716 = (void*)0;
                int l_719 = 0x4973A28AL;
                unsigned long long l_750 = 1UL;
                short *l_756 = &l_538;
                unsigned char *l_757 = &l_564;
                if ((((((safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((g_422 = (safe_mul_func_uint16_t_u_u(l_676, (safe_add_func_uint64_t_u_u((((*l_686) = ((*g_508) = (safe_sub_func_int8_t_s_s(((safe_div_func_int32_t_s_s(l_642, (safe_div_func_int8_t_s_s(func_48((*g_107), &g_56, l_685, &g_92, &g_282), p_38)))) | (*g_508)), p_39)))) > p_38), (*l_569)))))), 14)) && g_238), p_38)) | l_688) | (-3L)) && l_689) > l_690))
                {
                    long long l_691 = 1L;
                    l_691 = p_38;
                    (*l_665) = func_68((((p_40 == (&g_422 == &g_422)) == (p_39 < g_692)) >= (&g_507 == l_693)), p_39, (*g_107));
                    g_440 = (void*)0;
                }
                else
                {
                    unsigned long long l_699 = 18446744073709551615UL;
                    unsigned char **l_711 = (void*)0;
                    unsigned long long l_738 = 0xBB14D2FAF113294ELL;
                    if ((safe_div_func_uint16_t_u_u(g_34, 0x914DL)))
                    {
                        (*l_569) = (p_40 >= p_39);
                        l_699 = (safe_unary_minus_func_uint32_t_u((l_697 != l_698)));
                    }
                    else
                    {
                        (*l_569) = (safe_div_func_uint64_t_u_u(l_702, 1UL));
                        return &g_92;
                    }
                    if ((1L || l_699))
                    {
                        char *l_709 = &g_260;
                        unsigned char ***l_712 = &g_574;
                        long long *l_727 = &g_516;
                        int l_732 = 0x3DBE755FL;
                        (*l_569) = (safe_div_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(((*l_569) & l_689), g_235)) != 0UL), p_38));
                        (*l_569) = (g_34 || (safe_mod_func_uint32_t_u_u(((l_716 == l_717) == ((*p_37) < (*l_569))), (*p_37))));
                        l_719 = l_690;
                        (*l_665) = func_68((safe_add_func_uint32_t_u_u(l_699, (safe_rshift_func_uint8_t_u_s(((((*p_37) = (l_666 == (void*)0)) <= (safe_unary_minus_func_uint32_t_u(4294967292UL))) ^ (l_727 != (void*)0)), 0)))), ((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_732, ((safe_add_func_uint16_t_u_u(((**l_667) = 65528UL), (g_736 = (safe_unary_minus_func_uint8_t_u(l_699))))) <= g_140))), p_40)) != g_692), l_737);
                    }
                    else
                    {
                        (*l_569) = l_738;
                        (*l_665) = p_37;
                    }
                }
                for (l_525 = 0; (l_525 <= 3); l_525 = safe_add_func_uint8_t_u_u(l_525, 7))
                {
                    long long *l_742 = &g_238;
                    char *l_751 = (void*)0;
                    int l_752 = (-1L);
                    l_719 = ((l_741 = &p_39) == (l_742 = (l_686 = &p_39)));
                    if (p_40)
                    {
                        int l_743 = 0x7EEE9882L;
                        (*l_569) = l_743;
                    }
                    else
                    {
                        char *l_744 = &g_736;
                        int *l_748 = &l_676;
                        int **l_747 = &l_748;
                        int **l_753 = &l_569;
                        l_719 = (l_689 = ((*l_569) = (l_752 <= l_719)));
                        (*l_665) = l_569;
                        (*l_753) = (g_156 = ((*l_665) = &g_145));
                        (*l_665) = p_36;
                    }
                    (*l_569) = p_40;
                    l_752 = 0x006DE4B4L;
                }
                (*l_665) = func_68((l_676 | 0x92DDBD9CA976F1D1LL), ((((**g_507) && ((void*)0 != &g_172)) >= ((*g_108) >= ((*l_757) = (safe_mul_func_uint16_t_u_u((*l_569), ((*l_756) = 0x7608L)))))) | (safe_add_func_int8_t_s_s((**g_107), p_39))), l_635);
            }
        }
        (*l_569) = (l_761 = func_76(l_760, g_140, g_34, p_37, g_16));
    }
    else
    {
        unsigned short l_784 = 7UL;
        short *l_796 = (void*)0;
        short **l_795 = &l_796;
        char l_799 = 0x91L;
        long long l_813 = 0L;
        unsigned char l_820 = 0UL;
        for (l_640 = 0; (l_640 >= (-10)); l_640--)
        {
            int **l_764 = &g_156;
            long long **l_785 = &g_508;
            int l_805 = (-5L);
            if ((&g_749 != l_764))
            {
                char l_781 = 0L;
                unsigned *l_794 = &g_19;
                for (g_516 = 0; (g_516 > 17); g_516++)
                {
                    int *l_782 = (void*)0;
                    int *l_783 = &g_56;
                    long long ***l_786 = (void*)0;
                    long long ***l_787 = &l_785;
                    l_784 = ((*l_783) = ((*g_440) = (0xB95E49E2L > (0x47A3L ^ (safe_mod_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u(g_736, (safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((*g_508) == (safe_mul_func_uint8_t_u_u(p_38, ((safe_lshift_func_int8_t_s_s(l_781, 1)) >= (3UL && p_38))))), g_736)), 0x716BL)))) < l_781), g_235)) == p_38) || p_39), l_781))))));
                    (*l_787) = l_785;
                    if (p_39)
                    {
                        int ***l_788 = &l_764;
                        int ***l_789 = (void*)0;
                        int ***l_790 = &g_149;
                        (*l_790) = ((*l_788) = &g_440);
                        return (**l_788);
                    }
                    else
                    {
                        unsigned l_791 = 0x9D2BDA8BL;
                        unsigned ***l_793 = &l_792;
                        (*l_764) = func_41((l_781 >= l_791), p_36, &g_692);
                        (*l_764) = p_37;
                        (*l_793) = l_792;
                    }
                    (*l_764) = func_57(l_794);
                }
                l_795 = (void*)0;
                for (g_92 = 0; (g_92 <= 19); g_92 = safe_add_func_int16_t_s_s(g_92, 5))
                {
                    int *l_800 = &g_56;
                    if (l_781)
                        break;
                    (*g_440) = ((p_39 <= 0x05L) == l_799);
                    (*l_764) = l_800;
                }
            }
            else
            {
                int l_807 = 9L;
                int *l_816 = (void*)0;
                if ((0UL ^ p_40))
                {
                    int *l_802 = &g_172;
                    int **l_801 = &l_802;
                    int ***l_803 = &l_801;
                    (*l_803) = l_801;
                }
                else
                {
                    int l_806 = 1L;
                    l_807 = (l_806 = l_805);
                    for (l_524 = 0; (l_524 < (-14)); l_524 = safe_sub_func_int32_t_s_s(l_524, 3))
                    {
                        unsigned long long *l_819 = &g_123;
                        (*l_764) = p_36;
                        (*l_804) = (safe_unary_minus_func_uint16_t_u(g_282));
                        (*l_764) = func_57(&g_271);
                        if ((*g_440))
                            break;
                    }
                }
            }
            if ((*g_440))
                break;
            if (l_820)
                continue;
        }
    }
    (*l_821) = (void*)0;
    return p_36;
}







static int * func_41(long long p_42, int * p_43, unsigned * p_44)
{
    int **l_442 = &g_440;
    char *l_465 = &g_16;
    (*l_442) = func_57(&g_271);
    for (g_282 = 0; (g_282 > 9); g_282 = safe_add_func_uint32_t_u_u(g_282, 5))
    {
        char *l_456 = &g_16;
        int l_458 = 0x1F4B113FL;
        unsigned long long **l_469 = (void*)0;
        unsigned short *l_521 = &g_140;
        int *l_522 = &g_145;
        for (g_172 = (-8); (g_172 <= 18); ++g_172)
        {
            char *l_455 = &g_260;
            long long *l_457 = &g_235;
            int l_461 = 0x6027655BL;
            unsigned *l_517 = &g_282;
        }
    }
    return p_43;
}







static int func_48(char * p_49, int * p_50, unsigned * p_51, int * p_52, unsigned * p_53)
{
    unsigned l_438 = 0x85221F51L;
    (*p_50) = 0x7B3E66BCL;
    return l_438;
}







static int * func_57(unsigned * p_58)
{
    unsigned long long *l_426 = &g_123;
    unsigned long long **l_425 = &l_426;
    long long *l_427 = &g_235;
    int *l_428 = &g_134;
    unsigned short *l_435 = &g_140;
    int *l_436 = (void*)0;
    int *l_437 = &g_92;
    (*l_428) = (((l_425 != &l_426) >= (65526UL >= 4L)) ^ (g_238 = ((*l_427) = g_357)));
    (*l_428) = (safe_mod_func_int8_t_s_s((*l_428), (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_235, ((*l_435) = (*l_428)))), (*l_428)))));
    g_145 = ((*l_437) = ((*l_428) = (p_58 != p_58)));
    return p_58;
}







static unsigned * func_59(char * p_60)
{
    unsigned short l_63 = 0x2AD9L;
    char *l_87 = &g_16;
    int l_193 = 0xCC3ECA65L;
    int l_207 = (-7L);
    int *l_250 = &g_134;
    int **l_300 = &g_156;
    int **l_301 = &l_250;
    unsigned long long l_324 = 0xB15D6436AE91A373LL;
    unsigned char *l_325 = &g_326;
    unsigned long long *l_327 = &g_125;
    unsigned short *l_328 = (void*)0;
    unsigned *l_329 = &g_34;
    unsigned l_330 = 0UL;
    int *l_419 = &l_193;
    for (g_56 = 0; (g_56 > (-2)); g_56 = safe_sub_func_int32_t_s_s(g_56, 1))
    {
        char l_86 = 0x62L;
        char **l_88 = (void*)0;
        char **l_89 = &l_87;
        int l_90 = 0x7941993EL;
        int *l_91 = &g_92;
        unsigned l_113 = 5UL;
        char *l_194 = (void*)0;
        char *l_195 = &l_86;
        unsigned char l_280 = 0x58L;
        if (l_63)
            break;
        (*l_91) = func_64(g_34, func_68((safe_sub_func_int8_t_s_s(((*g_108) = ((safe_add_func_uint8_t_u_u(func_76((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(((((((g_16 == (-1L)) || l_86) < (p_60 == ((*l_89) = l_87))) ^ g_56) && ((*l_91) = (l_90 = l_63))) < ((p_60 != &g_16) ^ 0xDFL)), 7)), g_16)), l_63, l_63, &g_56, l_63), 9L)) >= (*g_108))), g_56)), l_113, g_108), l_91);
        if ((safe_sub_func_uint32_t_u_u((*l_91), (g_34 <= ((*l_195) = (l_193 = ((**g_107) = (*p_60))))))))
        {
            int **l_196 = &l_91;
            (*l_196) = &l_90;
        }
        else
        {
            unsigned char l_202 = 1UL;
            char ***l_203 = (void*)0;
            char *l_217 = &g_16;
            int l_236 = 1L;
            for (l_193 = 0; (l_193 >= 7); l_193 = safe_add_func_int32_t_s_s(l_193, 6))
            {
                int *l_205 = (void*)0;
                unsigned *l_269 = (void*)0;
                unsigned *l_270 = &g_271;
                char ***l_274 = (void*)0;
                char ***l_275 = &l_89;
                int l_276 = 0x04017246L;
                unsigned long long *l_277 = (void*)0;
                unsigned long long *l_278 = &g_125;
                unsigned short *l_279 = (void*)0;
                unsigned *l_281 = &g_282;
                int **l_283 = &l_205;
            }
            if ((*l_250))
            {
                unsigned long long l_290 = 4UL;
                for (g_140 = 0; (g_140 == 40); g_140 = safe_add_func_int32_t_s_s(g_140, 3))
                {
                    unsigned *l_298 = &g_271;
                    if (((safe_div_func_uint32_t_u_u((~(safe_rshift_func_uint16_t_u_u(65535UL, 15))), (~l_290))) >= (safe_sub_func_int16_t_s_s(l_290, (safe_div_func_int8_t_s_s(0xE2L, (safe_lshift_func_int8_t_s_s((*p_60), 3))))))))
                    {
                        int **l_297 = &l_91;
                        long long *l_299 = &g_235;
                        (*l_297) = func_68(g_16, l_236, p_60);
                        (*l_297) = func_68(((*l_299) = (l_298 == &g_34)), (*l_250), ((*l_89) = (*g_107)));
                        (*l_297) = (void*)0;
                        if ((*l_250))
                            break;
                    }
                    else
                    {
                        return l_298;
                    }
                }
                if (l_280)
                    continue;
            }
            else
            {
                if ((*g_156))
                    break;
                l_91 = &l_236;
            }
        }
    }
    (*l_301) = ((*l_300) = (void*)0);
    if (l_330)
    {
        unsigned short l_341 = 0x795CL;
        (*l_300) = ((*l_301) = &g_92);
        for (l_63 = (-17); (l_63 <= 51); l_63 = safe_add_func_int8_t_s_s(l_63, 1))
        {
            int l_340 = 0x6361E6ECL;
            for (g_271 = 4; (g_271 != 58); g_271++)
            {
                for (g_125 = 0; (g_125 < 47); g_125++)
                {
                    unsigned short *l_337 = &g_140;
                    (**l_300) = (((*l_337) = 0UL) != (safe_sub_func_int8_t_s_s(((*g_155) = l_340), l_340)));
                }
                (*l_301) = (void*)0;
            }
        }
        (*l_300) = (*l_300);
        (**l_300) = l_341;
    }
    else
    {
        unsigned short l_342 = 0UL;
        int *l_343 = (void*)0;
        int *l_344 = (void*)0;
        int *l_345 = &l_193;
        unsigned long long **l_358 = &l_327;
        char *l_372 = (void*)0;
        (*l_345) = l_342;
        (*l_345) = g_326;
        for (l_193 = 0; (l_193 < 2); ++l_193)
        {
            unsigned l_348 = 0xC83A632EL;
            int l_349 = (-1L);
            l_349 = l_348;
        }
        for (g_172 = 0; (g_172 >= (-10)); g_172 = safe_sub_func_int32_t_s_s(g_172, 3))
        {
            unsigned short l_359 = 3UL;
            int l_394 = 0xA849F018L;
            long long *l_416 = (void*)0;
            int *l_423 = &l_394;
            unsigned short **l_424 = &l_328;
            for (l_342 = 0; (l_342 != 15); ++l_342)
            {
                int *l_354 = &g_56;
                (*l_300) = l_354;
                (*g_156) = ((~0x41L) || (safe_lshift_func_uint8_t_u_u((g_357 | ((l_354 != &g_34) >= (((void*)0 != &l_354) & g_238))), 6)));
                if (((*l_354) = (l_358 != l_358)))
                {
                    (*l_301) = (*l_301);
                }
                else
                {
                    (*l_300) = &g_92;
                    (*l_300) = func_68(g_235, ((0x56B4D16BL || (((*g_108) = (-8L)) | l_359)) ^ (l_354 != l_354)), (*g_107));
                    (*l_301) = (void*)0;
                    (*l_345) = (*l_354);
                }
            }
            for (g_271 = (-7); (g_271 < 33); g_271 = safe_add_func_uint16_t_u_u(g_271, 7))
            {
                char l_375 = 0xE1L;
                int *l_376 = &g_56;
                (*l_345) = ((safe_rshift_func_uint8_t_u_s(func_76(((*l_325) = (safe_mod_func_uint64_t_u_u(l_359, (safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((((*l_345) = l_359) != 0xBCBE8424L) == l_359), 7)), g_125))))), l_359, l_359, l_376, l_359), 4)) > 0L);
                for (g_134 = 0; (g_134 >= (-22)); g_134 = safe_sub_func_int32_t_s_s(g_134, 3))
                {
                    char *l_379 = (void*)0;
                    unsigned short *l_380 = &l_342;
                    unsigned char *l_391 = &g_392;
                    unsigned *l_393 = &l_330;
                    int l_417 = 0xC69FA8EEL;
                    unsigned *l_418 = &g_282;
                    int l_420 = (-2L);
                    short *l_421 = &g_422;
                    l_394 = (func_76(((*l_325) = (l_359 & g_357)), l_359, g_271, func_68(g_260, ((*l_393) = (((*l_380) = ((void*)0 != l_379)) ^ g_282)), (*g_107)), (*l_376)) == (*l_376));
                    (*l_419) = ((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(0xB2L, (((*l_421) = (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(func_76((safe_div_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(0x84L, ((*l_87) = 0xB7L))) && (safe_rshift_func_int8_t_s_s(3L, 4))), (safe_sub_func_uint16_t_u_u(0xCA51L, 0x9BB1L)))), (safe_rshift_func_uint16_t_u_u(((*l_380) = ((safe_unary_minus_func_int32_t_s(((*l_376) = (((*l_418) = ((safe_add_func_uint32_t_u_u((((&l_376 != (void*)0) & ((void*)0 == l_416)) <= g_392), 1L)) >= l_417)) ^ 1UL)))) == l_417)), 9)), g_92, l_419, l_420), 0x8ECAL)), 4))) != l_394))), 0x18A623C6L)) & g_134);
                    g_149 = &l_376;
                }
            }
            (*l_345) = (((*l_301) == (l_423 = &l_394)) < (((*l_424) = &g_140) == &l_342));
            (*l_301) = ((*l_300) = func_68(((void*)0 != g_156), g_271, (*g_107)));
        }
    }
    return l_329;
}







static int func_64(unsigned p_65, unsigned * p_66, int * p_67)
{
    char l_138 = 0xA7L;
    unsigned long long *l_164 = (void*)0;
    unsigned l_175 = 0x14404B11L;
    char ***l_189 = &g_107;
    char *l_190 = &l_138;
    for (p_65 = 0; (p_65 >= 54); p_65 = safe_add_func_int32_t_s_s(p_65, 4))
    {
        unsigned char l_137 = 0xB1L;
        char *l_160 = &l_138;
        int **l_176 = &g_156;
        for (g_16 = 0; (g_16 != 15); g_16 = safe_add_func_int8_t_s_s(g_16, 8))
        {
            unsigned long long *l_122 = &g_123;
            unsigned long long *l_124 = &g_125;
            int l_130 = (-10L);
            char ***l_131 = &g_107;
            int l_146 = 0x2C86D4C7L;
            unsigned long long **l_165 = (void*)0;
            unsigned long long **l_166 = (void*)0;
            unsigned long long **l_167 = &l_164;
            int *l_170 = &l_130;
            int *l_171 = &g_172;
            (*p_67) = ((void*)0 != &g_107);
            (*p_67) = (p_65 == (((*l_124) = ((*l_122) = g_92)) != 18446744073709551612UL));
            for (g_92 = 16; (g_92 >= 10); g_92 = safe_sub_func_int16_t_s_s(g_92, 9))
            {
                char ***l_132 = &g_107;
                int *l_133 = &g_134;
                unsigned short *l_139 = &g_140;
                (*l_133) = (~(g_56 || ((safe_div_func_uint16_t_u_u((!g_56), l_130)) || (l_131 != l_132))));
                if ((safe_sub_func_int64_t_s_s(l_137, ((l_130 != (l_130 != ((void*)0 != &g_125))) & ((*l_139) = l_138)))))
                {
                    int **l_150 = (void*)0;
                    int **l_151 = &l_133;
                    (*l_151) = func_68((safe_rshift_func_uint16_t_u_s(((g_56 ^ l_138) || (safe_rshift_func_int16_t_s_s((0x35B4089D3BBD1153LL < l_137), 8))), 2)), ((l_146 = g_145) < ((p_65 | ((safe_mul_func_uint8_t_u_u((~((g_92 | ((void*)0 != g_149)) | l_137)), p_65)) < 65535UL)) >= l_138)), &l_138);
                    for (l_137 = 0; (l_137 != 3); l_137 = safe_add_func_uint8_t_u_u(l_137, 3))
                    {
                        int *l_154 = &g_145;
                    }
                    g_156 = ((*l_151) = func_68(g_92, p_65, g_155));
                }
                else
                {
                    for (l_137 = (-12); (l_137 == 15); l_137 = safe_add_func_int64_t_s_s(l_137, 9))
                    {
                        unsigned long long l_159 = 0x831ADEC5ABB53033LL;
                        int **l_161 = &g_156;
                        (*l_161) = func_68(l_159, p_65, l_160);
                    }
                }
            }
            (*p_67) = ((&g_155 != &g_108) | (safe_div_func_uint8_t_u_u((((*l_167) = l_164) == &g_123), (safe_add_func_int16_t_s_s(((func_76(p_65, ((*l_171) = ((*l_170) = (-1L))), l_137, p_67, g_145) == l_146) == p_65), 0xBBF6L)))));
        }
        (*p_67) = (*g_156);
        for (g_140 = (-8); (g_140 != 20); g_140 = safe_add_func_int16_t_s_s(g_140, 8))
        {
            if (l_137)
                break;
            return (*g_156);
        }
        (*l_176) = func_68(l_138, l_175, &l_138);
    }
    (*p_67) = (safe_div_func_uint16_t_u_u((l_175 < (safe_add_func_int16_t_s_s(p_65, (safe_div_func_int64_t_s_s((safe_div_func_int8_t_s_s(((0xB9C827B285FCF45ALL | func_76(g_172, p_65, ((safe_sub_func_int8_t_s_s(((*l_190) = ((*g_155) = ((safe_mod_func_uint64_t_u_u(l_175, (l_138 && (&g_107 != l_189)))) < g_145))), l_175)) & g_123), &g_92, p_65)) < 0UL), p_65)), g_34))))), l_175));
    return (*p_67);
}







static unsigned * func_68(long long p_69, unsigned p_70, char * p_71)
{
    int *l_115 = (void*)0;
    int **l_114 = &l_115;
    int *l_117 = (void*)0;
    int **l_116 = &l_117;
    (*l_116) = ((*l_114) = &g_56);
    return &g_34;
}







static unsigned char func_76(unsigned char p_77, int p_78, unsigned short p_79, int * p_80, unsigned short p_81)
{
    int l_101 = (-6L);
    char *l_102 = &g_16;
    int *l_106 = (void*)0;
    int *l_110 = &l_101;
    int *l_111 = &g_92;
    int **l_112 = &l_106;
    if (g_92)
    {
        for (p_79 = 20; (p_79 != 55); p_79 = safe_add_func_int8_t_s_s(p_79, 9))
        {
            int *l_96 = &g_92;
            int **l_95 = &l_96;
            char *l_103 = &g_16;
            (*l_95) = &g_92;
            for (p_77 = 0; (p_77 <= 57); p_77 = safe_add_func_uint8_t_u_u(p_77, 1))
            {
                for (p_78 = 9; (p_78 > 29); p_78++)
                {
                    l_101 = (*p_80);
                    p_80 = &g_56;
                }
            }
        }
    }
    else
    {
        char ***l_109 = &g_107;
        (*l_109) = g_107;
    }
    (*l_111) = ((*l_110) = (p_81 ^ p_77));
    (*l_112) = p_80;
    return g_56;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    transparent_crc(g_736, "g_736", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
