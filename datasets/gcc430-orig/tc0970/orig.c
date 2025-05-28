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


union U0 {
   unsigned char f0;
   int f1;
   unsigned short f2;
   unsigned long long f3;
};


static unsigned char g_13 = 0x72L;
static unsigned g_41 = 0x0457A23AL;
static short g_77 = 0x293CL;
static unsigned *g_83 = &g_41;
static unsigned **g_82 = &g_83;
static unsigned char g_99 = 0x42L;
static int g_102 = 0x39CA31B8L;
static short g_105 = 0x8984L;
static int g_109 = 0xCAB9BE05L;
static unsigned short g_159 = 65535UL;
static long long g_196 = 0L;
static short g_207 = (-7L);
static unsigned g_212 = 0UL;
static unsigned long long g_224 = 1UL;
static int g_225 = 0x2917F3F7L;
static long long g_229 = (-6L);
static long long *g_228 = &g_229;
static int *g_247 = (void*)0;
static int **g_246 = &g_247;
static union U0 g_258 = {0x62L};
static unsigned g_354 = 0x6509FBC4L;
static union U0 *g_368 = &g_258;
static char *g_382 = (void*)0;
static char g_421 = 0xE2L;
static long long g_431 = 4L;
static unsigned short *g_572 = &g_258.f2;
static unsigned short **g_571 = &g_572;
static short *g_624 = &g_207;
static short **g_623 = &g_624;
static int g_644 = 0x7FA8E34CL;
static int g_647 = 0L;
static unsigned short **g_668 = &g_572;
static unsigned short ***g_667 = &g_668;
static unsigned g_673 = 18446744073709551614UL;
static union U0 **g_694 = (void*)0;
static union U0 ***g_693 = &g_694;



static unsigned char func_1(void);
static unsigned char func_2(unsigned p_3, long long p_4, unsigned p_5);
static unsigned func_6(unsigned char p_7, unsigned long long p_8);
static unsigned char func_9(long long p_10, unsigned short p_11, short p_12);
static unsigned func_14(short p_15, unsigned p_16, int p_17);
static short func_23(unsigned p_24, char p_25, unsigned short p_26);
static short func_42(unsigned p_43, short p_44, int p_45, char p_46, unsigned long long p_47);
static unsigned long long func_50(unsigned * p_51);
static unsigned short func_61(long long p_62, short p_63, unsigned * p_64, unsigned ** p_65, unsigned ** p_66);
static char func_67(short p_68, unsigned long long p_69, unsigned p_70, int p_71, short p_72);
static unsigned char func_1(void)
{
    int l_18 = 0x5D0D658EL;
    unsigned l_37 = 0x4886255DL;
    unsigned *l_40 = &g_41;
    int l_562 = 0L;
    int *l_643 = &g_644;
    short l_645 = 0xF9ECL;
    int *l_646 = &g_647;
    int l_656 = (-8L);
    int l_672 = 0x3AB670D9L;
    int l_698 = 1L;
    int ***l_758 = (void*)0;
lbl_690:
    (*l_646) ^= (((*l_643) &= (func_2(func_6((l_562 = func_9(g_13, g_13, (func_14(l_18, (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(l_18, func_23(((*l_40) |= (g_13 , (safe_mod_func_int8_t_s_s((((+((l_18 >= ((g_13 >= (safe_div_func_uint16_t_u_u(((((safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(l_37, (safe_div_func_uint32_t_u_u(g_13, l_18)))) <= 255UL), l_18)), l_18)) >= 0x70L) , l_37) | 0xE10A3BDFL), g_13))) < 0xACL)) > l_37)) , l_18) , (-4L)), g_13)))), l_18, l_18))), l_18)), g_224) >= l_18))), l_37), l_18, l_37) ^ 0x44L)) && l_645);
    if ((safe_rshift_func_int8_t_s_s(0x85L, (*l_643))))
    {
        unsigned short ***l_663 = &g_571;
        int l_671 = 9L;
        int **l_686 = &l_646;
        short *l_755 = &l_645;
        if ((safe_rshift_func_int8_t_s_s((*l_646), 0)))
        {
            unsigned short ****l_664 = (void*)0;
            unsigned short ****l_665 = &l_663;
            unsigned short ***l_666 = &g_571;
            int l_674 = 0x7AD736C4L;
            int *l_675 = &l_562;
            (*l_675) |= func_2((((((*g_228) = (*g_228)) , (((0x53L != ((safe_lshift_func_uint8_t_u_u(l_656, 4)) , (((*g_228) = ((safe_div_func_uint16_t_u_u((**g_571), (((*l_646) ^ (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((((*l_665) = l_663) != (g_667 = l_666)) >= 0x849F8BFE7D34ABB1LL), (safe_rshift_func_uint16_t_u_u(0x94E3L, l_671)))), l_672))) && g_212))) < (*g_228))) > (*l_643)))) == 0UL) != g_673)) != (*l_646)) == l_674), g_225, (*l_643));
            (*l_643) = 0L;
        }
        else
        {
            int **l_687 = &g_247;
            unsigned char l_717 = 255UL;
            unsigned short *l_748 = &g_258.f2;
            unsigned short *l_749 = &g_159;
            int *l_750 = &g_102;
            unsigned **l_753 = &l_40;
            unsigned long long *l_754 = &g_258.f3;
            unsigned char *l_756 = (void*)0;
            unsigned char *l_757 = &g_13;
            if (((safe_sub_func_uint16_t_u_u(((*l_646) = (**g_571)), ((*g_624) = (-4L)))) || (safe_div_func_uint64_t_u_u((func_6(g_647, ((*g_228) , ((-1L) <= g_258.f0))) == (safe_rshift_func_int8_t_s_u((((0UL ^ (safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(func_67((((*l_643) <= g_196) & g_354), g_159, g_644, l_671, l_671), (*l_646))), 9))) , l_686) == l_687), 2))), (*l_643)))))
            {
                union U0 ***l_696 = &g_694;
                int l_720 = 0xC3D6AC98L;
                unsigned char l_737 = 1UL;
                if ((safe_add_func_int16_t_s_s((g_224 >= g_354), (**g_623))))
                {
                    (*g_246) = &l_562;
                    if (g_77)
                        goto lbl_690;
                }
                else
                {
                    long long l_697 = 0xCAA046DA488616C9LL;
                    unsigned char *l_703 = &g_258.f0;
                    unsigned l_719 = 0UL;
                    int l_735 = 0xF1909537L;
                    if ((safe_add_func_int16_t_s_s(((**g_571) , ((g_693 != ((safe_unary_minus_func_uint16_t_u(3UL)) , l_696)) , ((*g_624) != func_2(l_697, l_698, g_41)))), 0UL)))
                    {
                        int l_708 = 0x2753B200L;
                        char *l_718 = &g_421;
                        int *l_721 = &l_671;
                        (*l_721) ^= (((safe_mod_func_uint32_t_u_u(((*g_83) = 0xA2D60493L), ((safe_div_func_int8_t_s_s((&g_99 != l_703), func_42(((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(((l_708 || ((func_67((safe_lshift_func_uint8_t_u_s((g_258.f0 = (((safe_sub_func_uint16_t_u_u((l_708 ^ (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(l_717, ((*l_718) = ((l_697 , (void*)0) != (void*)0)))), 4L))), (*l_646))) ^ (**g_623)) > (**l_686))), 1)), g_99, l_719, l_708, l_708) , (void*)0) == &g_431)) ^ 9L), g_105)) , l_720) && (*g_228)), l_720)) < g_225), (**g_623), (*l_643), g_102, g_102))) , 1UL))) ^ 65535UL) , l_708);
                    }
                    else
                    {
                        int ***l_728 = &l_686;
                        int ****l_727 = &l_728;
                        int l_736 = (-5L);
                        (*g_667) = (*g_667);
                        (*l_686) = &g_644;
                        if (g_673)
                            goto lbl_722;
lbl_722:
                        (*l_687) = (l_719 , &l_720);
                        (*g_247) = (safe_add_func_int32_t_s_s(((**l_686) |= ((safe_rshift_func_int16_t_s_s((**g_623), (&g_246 != ((*l_727) = &g_246)))) , (safe_mul_func_int8_t_s_s((g_41 > l_720), g_105)))), ((l_720 > ((safe_add_func_int32_t_s_s((l_735 = (*g_247)), (func_42(l_736, (**g_623), (**l_687), l_737, (**l_687)) >= (**l_687)))) >= 0x511764A40914C589LL)) | (-1L))));
                    }
                }
                (*l_643) = g_13;
            }
            else
            {
                (*l_646) ^= (safe_rshift_func_uint16_t_u_s(0UL, 15));
            }
            (**l_686) = ((safe_mul_func_int16_t_s_s((((*l_757) = ((safe_add_func_uint8_t_u_u((((*l_753) = (((((*l_750) = (safe_add_func_uint32_t_u_u(4294967289UL, (safe_div_func_uint16_t_u_u(((*l_749) |= (**l_686)), (**g_623)))))) , &l_645) == ((safe_add_func_uint64_t_u_u(((*l_754) = ((**g_623) < func_61((*g_228), l_717, (*g_82), &g_83, l_753))), g_229)) , l_755)) , (void*)0)) != (void*)0), g_109)) | 0UL)) == (**l_686)), (*l_646))) ^ 249UL);
            if ((*l_646))
            {
                return g_421;
            }
            else
            {
                l_646 = &g_109;
            }
        }
    }
    else
    {
        unsigned l_771 = 0UL;
        int l_772 = 0x10A7A682L;
        unsigned short *l_773 = &g_159;
        (*l_643) = ((0xC4647FDAL | (((*l_773) &= (((((**g_571) = (((((((*l_646) != (*l_646)) == (5L > (*g_572))) , l_758) == &g_246) ^ (l_772 = ((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((g_99 | ((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((*l_646), (*l_643))), 0x927AL)) ^ l_771) , (**g_82)), 0xAF5BA083L)), (*g_83))) <= (**g_668))), 7L)), (***g_667))) <= 0xD73C9A772CBAF9A9LL))) > (*g_624))) , (*g_228)) < (*g_228)) , (*g_572))) , l_772)) <= (-9L));
        (*l_643) = (*l_646);
        (*g_246) = &g_109;
    }
    return g_105;
}







static unsigned char func_2(unsigned p_3, long long p_4, unsigned p_5)
{
    short *l_620 = &g_105;
    short **l_622 = &l_620;
    short ***l_621 = &l_622;
    short **l_625 = &g_624;
    unsigned **l_626 = &g_83;
    unsigned ***l_627 = &g_82;
    unsigned char l_628 = 0UL;
    short l_629 = 0xA293L;
    union U0 l_638 = {1UL};
    unsigned long long *l_639 = &g_224;
    if ((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((func_42(((**l_626) = (((+0xE5AEL) < (safe_add_func_uint16_t_u_u((((*g_228) = (((((((void*)0 == l_620) == g_196) < (((*l_621) = &l_620) != (l_625 = g_623))) , l_626) == ((*l_627) = l_626)) > 0x82C6F2DCL)) , l_628), l_628))) , (*g_83))), p_5, p_4, l_629, g_159) , p_4) ^ p_4), 13)), l_628)) , 0xB182L), 7)))
    {
        int *l_632 = &g_109;
        int *l_633 = &g_258.f1;
        unsigned long long **l_640 = (void*)0;
        unsigned long long **l_641 = &l_639;
        for (l_629 = 0; (l_629 >= 17); ++l_629)
        {
            return p_4;
        }
        (*l_633) = ((*l_632) = 0L);
        l_638.f1 = (func_67((p_3 | (safe_rshift_func_uint8_t_u_s(p_4, 6))), (safe_rshift_func_uint16_t_u_s(0UL, l_628)), (*l_633), p_3, (**g_623)) && (((*l_641) = (l_638 , l_639)) != (void*)0));
    }
    else
    {
        long long l_642 = (-7L);
        l_642 ^= 0x19575495L;
    }
    (*g_246) = &g_109;
    return p_5;
}







static unsigned func_6(unsigned char p_7, unsigned long long p_8)
{
    union U0 *l_563 = &g_258;
    union U0 **l_564 = &l_563;
    unsigned *l_594 = &g_354;
    int l_596 = (-6L);
    unsigned char *l_606 = &g_13;
    int l_611 = 0xF1B79A27L;
    (*l_564) = l_563;
    for (g_258.f3 = 0; (g_258.f3 >= 23); g_258.f3 = safe_add_func_uint16_t_u_u(g_258.f3, 1))
    {
        unsigned char *l_581 = &g_13;
        int l_586 = (-2L);
        int *l_587 = &l_586;
        union U0 *l_595 = &g_258;
        char l_597 = 0x98L;
        unsigned ***l_598 = (void*)0;
        (*l_587) = ((((-7L) > (safe_div_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((void*)0 == g_571), ((safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(((g_212 >= (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((*l_581) = g_258.f1), ((safe_mul_func_int8_t_s_s(((((g_225 ^ 0x44L) , (safe_lshift_func_uint8_t_u_u(g_102, 6))) , p_7) || 0L), 0x8FL)) < 0x06D5L))), (-5L)))) ^ l_586), l_586)), 11)) ^ 9L))), p_8))) , p_7) , 5L);
        (*l_587) = (safe_sub_func_int64_t_s_s((p_7 , (*g_228)), (((*l_587) , ((((*l_587) | (func_50((*g_82)) < (safe_rshift_func_int16_t_s_u((l_594 == l_587), 11)))) == ((l_596 = ((void*)0 == l_595)) != l_597)) , l_598)) == (void*)0)));
    }
    for (p_7 = 0; (p_7 < 40); p_7++)
    {
        unsigned long long *l_603 = &g_224;
        int *l_604 = &l_596;
        unsigned ***l_605 = &g_82;
        (*l_604) |= (safe_mod_func_uint64_t_u_u(((*l_603) = g_109), p_7));
        (*l_604) = (l_611 |= ((((((*l_605) = &g_83) != &g_83) <= ((void*)0 != l_606)) , ((((*g_83) = (safe_div_func_int8_t_s_s(0x5EL, (*l_604)))) || (safe_sub_func_uint8_t_u_u((*l_604), g_225))) | (((l_596 > 0xE3L) ^ p_8) && (*l_604)))) > (*l_604)));
    }
    return l_596;
}







static unsigned char func_9(long long p_10, unsigned short p_11, short p_12)
{
    union U0 *l_458 = &g_258;
    union U0 **l_459 = &g_368;
    int l_462 = (-2L);
    unsigned short *l_464 = &g_258.f2;
    unsigned short **l_463 = &l_464;
    unsigned *l_467 = &g_212;
    int l_485 = 0L;
    int *l_493 = &g_109;
    char *l_522 = &g_421;
    int **l_528 = (void*)0;
    unsigned long long l_555 = 7UL;
    int *l_560 = (void*)0;
    int *l_561 = &g_109;
    (*l_459) = l_458;
    if (((safe_add_func_uint32_t_u_u((l_462 , ((*l_467) = (((-1L) != (((((*l_463) = &g_159) == &p_11) ^ ((((safe_add_func_int8_t_s_s(l_462, func_61(l_462, (((**g_82) , (*g_368)) , 0x35CBL), l_467, &l_467, &l_467))) > 0x82BF19AEE28D21DELL) & l_462) && p_12)) , g_207)) & 254UL))), l_462)) > 254UL))
    {
        int *l_470 = &l_462;
        unsigned long long *l_474 = &g_258.f3;
        unsigned long long *l_475 = &g_224;
        int l_490 = 0xB79B5F1AL;
        union U0 *l_505 = (void*)0;
        union U0 l_529 = {1UL};
        (*l_470) &= (safe_rshift_func_uint8_t_u_s((&g_83 == (void*)0), p_12));
        (*l_470) &= 0L;
        if ((safe_unary_minus_func_int64_t_s(func_14((safe_mod_func_uint64_t_u_u((((*l_475) |= g_109) , p_12), (*l_470))), p_12, p_10))))
        {
            int l_480 = (-1L);
            int *l_486 = &g_109;
            short *l_487 = (void*)0;
            unsigned long long *l_496 = (void*)0;
            unsigned **l_502 = (void*)0;
            if ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(p_11, (((*g_228) != ((*l_475) = 0x2C722C54A044D010LL)) <= ((l_462 &= l_480) , 0x61L)))), ((safe_mod_func_uint64_t_u_u((safe_div_func_int32_t_s_s(((*l_486) = l_485), ((g_77 ^= 0L) | (~(((l_485 <= ((((*g_83) | p_11) <= 0L) != l_490)) && g_102) && l_485))))), p_12)) & 3UL))))
            {
                int *l_491 = &g_109;
                int **l_492 = &l_470;
                short *l_499 = &g_105;
                unsigned *l_508 = &g_354;
                unsigned **l_507 = &l_508;
                l_493 = (p_11 , ((*l_492) = ((*g_246) = (((0x06B6L || p_12) || (*l_470)) , l_491))));
                if ((safe_mul_func_int16_t_s_s(((func_61((*l_493), ((0xBC05A1244F5741F6LL || (p_12 , (*g_228))) , (l_496 != ((safe_mul_func_int8_t_s_s(((0x523BL != ((*l_499) ^= (*l_493))) != (safe_div_func_uint16_t_u_u((func_50(((*g_82) = (*g_82))) && 0UL), p_11))), 1L)) , &g_224))), l_486, l_502, g_82) , (*l_470)) < p_12), p_11)))
                {
                    (*l_492) = l_486;
                }
                else
                {
                    (*g_246) = (*g_246);
                }
                for (p_12 = 0; (p_12 == (-23)); p_12 = safe_sub_func_int32_t_s_s(p_12, 6))
                {
                    short **l_506 = &l_499;
                    int *l_510 = &g_109;
                    if ((g_258.f0 || ((p_10 , (**l_492)) != (((*g_368) , (((*l_493) , (void*)0) != l_505)) <= (((*l_506) = &g_77) == &g_207)))))
                    {
                        return p_10;
                    }
                    else
                    {
                        unsigned ***l_509 = &l_507;
                        (*l_509) = l_507;
                        (*g_246) = l_510;
                        (*l_492) = ((safe_unary_minus_func_uint32_t_u((**l_492))) , &l_462);
                    }
                    if ((**g_246))
                        break;
                    for (g_41 = (-11); (g_41 > 41); g_41++)
                    {
                        if (p_11)
                            break;
                        (**g_246) = 0x1BD9DFE4L;
                    }
                    if ((g_431 , (*l_470)))
                    {
                        int *l_514 = &l_485;
                        (*l_492) = &l_462;
                        (*g_246) = l_514;
                        (**g_246) &= (*l_510);
                        (*l_486) = (**g_246);
                    }
                    else
                    {
                        long long **l_515 = &g_228;
                        (*l_510) = ((*l_470) &= (**g_246));
                        (*l_492) = ((((*l_515) = &g_196) == (void*)0) , l_510);
                        (*g_246) = &l_490;
                    }
                }
            }
            else
            {
                int *l_516 = (void*)0;
                int **l_517 = &l_493;
                (*l_517) = ((*g_246) = l_516);
                (*l_470) = ((safe_div_func_int16_t_s_s(p_10, (+0xB03CL))) , (safe_mod_func_uint32_t_u_u((*g_83), p_11)));
            }
            (*g_246) = &l_490;
            if ((*g_247))
            {
                (*g_247) |= (g_99 >= (p_12 && ((void*)0 != l_522)));
                (*l_486) |= p_10;
            }
            else
            {
                int **l_527 = &l_470;
                (*g_246) = &l_490;
                (*g_247) ^= ((1L <= ((p_10 <= (safe_lshift_func_int16_t_s_s((((g_224 |= 18446744073709551615UL) <= ((l_528 = l_527) == &l_470)) & (g_13 != (*l_486))), 5))) < (((l_527 != l_527) , l_529) , p_10))) | (**l_527));
                for (l_490 = 0; (l_490 != (-19)); l_490 = safe_sub_func_int64_t_s_s(l_490, 4))
                {
                    long long l_532 = 0x8CB76177010FAD6FLL;
                    (*l_486) = l_532;
                    (**l_528) |= (**g_246);
                }
            }
        }
        else
        {
            return g_77;
        }
    }
    else
    {
        int *l_533 = &l_485;
        short *l_545 = &g_105;
        unsigned **l_552 = &g_83;
        short l_553 = 1L;
        unsigned long long *l_554 = &g_258.f3;
        (*l_533) |= (l_533 != ((!4294967295UL) , l_533));
        (*l_533) = (func_42(((safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((*l_493) = (safe_unary_minus_func_int16_t_s(g_13))) , ((safe_sub_func_uint32_t_u_u((+((((safe_mod_func_uint16_t_u_u(p_11, (safe_mod_func_uint8_t_u_u((func_61((*l_533), ((*l_545) = (*l_493)), l_533, ((safe_mul_func_int16_t_s_s(((*g_228) >= ((*l_554) = ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(func_67(p_12, g_431, func_61(p_11, p_12, l_467, l_552, &g_83), g_41, l_553), p_11)), (-2L))) | 0xEFL))), 0x2A5CL)) , (void*)0), &l_467) || g_354), l_555)))) >= (*l_533)) < p_10) > p_10)), p_11)) ^ p_10)), p_12)), g_102)) , p_12), p_11, g_207, g_229, p_11) , g_207);
        (*l_493) = (safe_lshift_func_uint8_t_u_u(250UL, 6));
    }
    (*l_561) = (safe_mod_func_uint64_t_u_u(l_462, p_11));
    return p_10;
}







static unsigned func_14(short p_15, unsigned p_16, int p_17)
{
    unsigned long long l_435 = 0x377B8471116EBA59LL;
    int *l_436 = &g_258.f1;
    unsigned **l_451 = (void*)0;
    char l_452 = 8L;
    p_17 = ((*l_436) = ((!p_15) > l_435));
    (*l_436) = (safe_lshift_func_int8_t_s_u(((((safe_mod_func_uint8_t_u_u(0x4CL, func_61(((*g_228) = 0xC1FEB01F53EBCDE8LL), (safe_mul_func_uint8_t_u_u(((*l_436) || (((safe_lshift_func_int8_t_s_u(func_42((*l_436), g_354, (((((safe_mod_func_int32_t_s_s((((3UL <= 0x4AL) , g_77) == (func_61((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0x9DL, 0)), 3)), g_102, l_436, l_451, l_451) , 0xD4FAL)), (**g_82))) <= (*l_436)) , p_15) < g_224) < p_17), p_16, g_102), 0)) & (*l_436)) , l_452)), p_17)), (*g_82), l_451, &g_83))) == (-3L)) != p_17) , (*l_436)), 0));
    for (g_99 = 0; (g_99 >= 32); g_99++)
    {
        int l_457 = (-1L);
        (*l_436) = (safe_lshift_func_int16_t_s_s(p_15, l_457));
        (*g_246) = &p_17;
    }
    return p_15;
}







static short func_23(unsigned p_24, char p_25, unsigned short p_26)
{
    unsigned *l_53 = &g_41;
    unsigned **l_52 = &l_53;
    int l_103 = 0x1529ABC0L;
    short *l_104 = &g_105;
    union U0 l_106 = {0x19L};
    int l_110 = 0x4895D34BL;
    short l_135 = 0x9FE2L;
    unsigned *l_160 = &g_41;
    union U0 l_174 = {0xAEL};
    int *l_255 = &l_106.f1;
    int ***l_267 = (void*)0;
    unsigned l_276 = 1UL;
    unsigned l_279 = 0x3BB65FF7L;
    short l_284 = (-2L);
    unsigned short l_352 = 0xA649L;
    long long **l_364 = &g_228;
    unsigned l_393 = 3UL;
    if (((p_24 != func_42((safe_sub_func_int16_t_s_s(((g_102 = func_50(((*l_52) = (void*)0))) , l_103), l_103)), ((*l_104) = 5L), p_25, (l_106 , (-2L)), l_103)) > l_110))
    {
        int l_114 = 1L;
        unsigned char l_124 = 0x75L;
        union U0 l_142 = {249UL};
        unsigned short *l_149 = (void*)0;
        int *l_154 = (void*)0;
        int *l_155 = &l_106.f1;
        unsigned long long *l_156 = &l_106.f3;
        unsigned **l_157 = &g_83;
        unsigned short *l_158 = &g_159;
        int *l_161 = (void*)0;
        int *l_162 = &l_110;
        unsigned short l_201 = 0xAEEFL;
        char l_211 = 0L;
        for (g_99 = 22; (g_99 > 58); g_99 = safe_add_func_int16_t_s_s(g_99, 4))
        {
            int *l_115 = &g_109;
            unsigned char *l_127 = (void*)0;
            int *l_128 = &l_114;
            int *l_129 = &l_106.f1;
            int l_130 = 0x64F5ABE0L;
            (*l_115) ^= (safe_unary_minus_func_uint16_t_u(l_114));
            l_130 ^= ((*l_128) ^= func_42(((safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_25, g_77)), func_42(p_25, (safe_rshift_func_uint8_t_u_u(l_124, ((*l_115) = (safe_mod_func_int64_t_s_s(((1UL > l_103) || (g_13 , ((g_99 , (0xB5F7L | 0x2142L)) < 0x6BFD6755L))), p_24))))), l_110, p_24, p_26))) , g_105) == g_13), 1L)) , (*l_115)), g_13, g_102, p_25, g_105));
            for (p_24 = (-29); (p_24 == 13); p_24++)
            {
                int l_138 = 1L;
                int *l_139 = &l_130;
                (*l_139) ^= (l_106 , func_42((((((*l_104) = (g_41 , 0xF228L)) | (g_102 , (safe_rshift_func_uint16_t_u_u(((((l_135 , 3L) | (l_135 == p_25)) < (safe_lshift_func_uint16_t_u_s(p_24, l_138))) ^ 65531UL), 8)))) >= 0x2DL) != l_114), p_26, l_103, p_25, g_99));
            }
            if (p_26)
                continue;
        }
        l_110 = (safe_add_func_uint64_t_u_u((l_106 , (l_106.f0 && (p_25 >= g_105))), func_42((l_142 , 0x1848A285L), l_142.f0, p_24, g_41, g_99)));
        (*l_162) &= (+((*l_155) = func_61(((((*l_158) &= (&g_83 != (func_61((g_13 == (safe_mul_func_int8_t_s_s(l_142.f0, (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((p_26 &= g_13), 9)), (((*l_156) = (5L > (((safe_add_func_uint32_t_u_u(((((safe_div_func_int32_t_s_s((l_103 |= (func_61(p_24, g_102, (*g_82), &g_83, &l_53) >= l_114)), (-1L))) , (void*)0) != (*g_82)) == g_109), g_77)) , 65535UL) != g_13))) <= g_77)))))), p_25, (*l_52), &g_83, l_157) , (void*)0))) , (-1L)) || p_26), p_24, l_160, l_157, &g_83)));
        for (l_124 = 18; (l_124 >= 39); l_124++)
        {
            char *l_173 = (void*)0;
            int l_177 = 0x97919FD8L;
            unsigned **l_192 = &l_53;
            int l_215 = 3L;
            unsigned short l_222 = 0x1784L;
            unsigned long long *l_223 = &g_224;
            union U0 *l_232 = &l_106;
        }
    }
    else
    {
        unsigned char l_259 = 0x19L;
        int l_260 = 1L;
        unsigned l_266 = 0x278B1CBCL;
        int *l_268 = &l_174.f1;
        int *l_269 = &l_103;
        l_260 = (p_26 , ((*l_255) = l_259));
        (*l_269) |= ((safe_mul_func_int8_t_s_s(((((0x515C9F24154FC8DDLL == (0x1AL != func_67((((*l_255) = p_26) ^ (0xFC9FD4B6L && (safe_unary_minus_func_uint16_t_u(p_26)))), ((safe_add_func_uint8_t_u_u(((l_266 , (*g_82)) != ((*l_52) = &p_24)), p_26)) , g_41), (**g_82), l_259, g_212))) , (void*)0) == l_267) , l_260), g_207)) < 65532UL);
        (*l_269) = p_26;
        return g_196;
    }
    l_255 = (*g_246);
    for (g_105 = 0; (g_105 <= (-9)); g_105--)
    {
        char l_282 = 0xB5L;
        unsigned **l_283 = (void*)0;
        int *l_285 = (void*)0;
        int *l_286 = &g_258.f1;
        l_284 ^= ((safe_mod_func_uint16_t_u_u(0UL, (safe_mod_func_uint32_t_u_u(((0x5B6CL == (p_24 , func_61((*g_228), l_276, (func_61(((g_159 , g_258) , (safe_lshift_func_uint8_t_u_u((func_42(l_279, (safe_lshift_func_uint8_t_u_u(g_109, 7)), l_282, p_24, p_25) <= (*g_228)), 2))), g_207, (*g_82), l_283, &l_160) , (*g_82)), l_283, &l_53))) && (*g_83)), 0x1E1E6FD7L)))) && 5L);
        (*l_286) = l_282;
        (*l_286) &= (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(0UL, 0)), 7));
    }
    for (p_25 = 18; (p_25 != (-26)); p_25 = safe_sub_func_uint64_t_u_u(p_25, 1))
    {
        unsigned char l_293 = 0x81L;
        unsigned **l_300 = &l_53;
        unsigned long long *l_305 = &l_106.f3;
        int *l_306 = &l_110;
        unsigned long long l_323 = 0x62C3DB62374D4ACALL;
        union U0 l_404 = {247UL};
        unsigned l_409 = 1UL;
        unsigned char l_429 = 0x73L;
        short l_433 = (-2L);
        if (((*l_306) ^= (l_293 | (safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(func_61((*g_228), (safe_rshift_func_uint8_t_u_s(l_293, 0)), &p_24, l_300, l_300), 5)) , ((safe_rshift_func_uint16_t_u_u(0x36A6L, ((((safe_div_func_uint8_t_u_u(((((*l_305) = g_196) >= l_293) && p_26), p_26)) || 0x55AC83A632E2ADD7LL) , 0x96696816D0B2B691LL) > (*g_228)))) || (-1L))), 0xC67E8D82L)))))
        {
            int l_337 = (-1L);
            int *l_338 = &g_102;
            unsigned *l_339 = (void*)0;
            unsigned *l_340 = (void*)0;
            unsigned *l_341 = &l_276;
            for (l_135 = (-20); (l_135 > (-1)); l_135 = safe_add_func_int16_t_s_s(l_135, 3))
            {
                unsigned *l_318 = &g_41;
                for (g_258.f1 = 0; (g_258.f1 < 9); g_258.f1++)
                {
                    union U0 l_315 = {0xBEL};
                    for (l_174.f0 = 18; (l_174.f0 != 8); l_174.f0 = safe_sub_func_int8_t_s_s(l_174.f0, 9))
                    {
                        unsigned ***l_319 = (void*)0;
                        unsigned ***l_320 = &l_52;
                        unsigned char *l_321 = &l_293;
                        unsigned char *l_322 = &g_99;
                        int *l_324 = &l_110;
                        (*l_306) |= (((*l_322) = ((*l_321) = (((g_229 , (safe_sub_func_uint32_t_u_u((p_24 ^= ((((l_315 , (-8L)) , (safe_add_func_uint64_t_u_u(func_61(p_26, ((*l_104) = (&g_83 == &g_83)), l_318, &l_160, ((*l_320) = &g_83)), 18446744073709551615UL))) , p_25) || p_25)), 0xF4FA2660L))) ^ p_26) | p_25))) && l_323);
                        (*g_246) = (*g_246);
                        (*g_246) = l_324;
                        (*g_246) = (*g_246);
                    }
                    for (l_174.f2 = 0; (l_174.f2 < 55); l_174.f2 = safe_add_func_uint32_t_u_u(l_174.f2, 3))
                    {
                        union U0 *l_328 = &l_106;
                        union U0 **l_327 = &l_328;
                        (*l_327) = &l_106;
                        if (p_26)
                            continue;
                    }
                }
            }
            if ((((((safe_rshift_func_int16_t_s_s((g_159 || 0UL), p_25)) , g_41) > (func_67(g_196, (safe_add_func_uint8_t_u_u(func_61((&g_13 != (((((((*l_341) &= ((safe_add_func_int64_t_s_s((func_67((((*l_338) = (((p_24 & (p_24 , ((*l_305) ^= (l_337 = (safe_sub_func_uint16_t_u_u(p_25, p_26)))))) , p_24) || (*l_306))) , g_109), p_26, (**g_82), p_25, p_25) != 0xA4237FCBA1A656AFLL), p_25)) || p_25)) , 0xC1AD6298BA18F781LL) && (*l_306)) == (*l_306)) , g_13) , &l_293)), g_225, (*l_300), &g_83, &g_83), 0x2BL)), (*l_306), p_24, g_196) , p_24)) > p_24) , p_24))
            {
                union U0 *l_357 = &l_106;
                if (((*l_306) = 0xD2C08418L))
                {
                    unsigned char *l_344 = &l_293;
                    unsigned short *l_349 = &l_174.f2;
                    unsigned *l_353 = (void*)0;
                    (*l_306) = ((g_258.f0 ^= p_26) <= (*l_306));
                    (*l_306) = func_61((*g_228), ((((safe_mul_func_int64_t_s_s(((l_106 , g_99) <= l_337), (!0x11C9E3C08EB28AE3LL))) >= (((*l_344) ^= p_26) , ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((*l_349) = g_105), p_24)), ((+((((*l_306) |= (safe_div_func_uint64_t_u_u(p_24, 0xE2B1555576E561EALL))) , &g_13) != &g_13)) >= l_352))) | 4294967291UL))) | 0x59L) , g_99), l_353, &l_353, l_300);
                }
                else
                {
                    union U0 **l_358 = &l_357;
                    (*l_306) ^= (g_354 , (p_25 == p_25));
                    for (l_337 = 0; (l_337 < (-12)); --l_337)
                    {
                        (*l_306) ^= l_337;
                    }
                    (*l_358) = l_357;
                }
            }
            else
            {
                unsigned short *l_360 = &l_352;
                unsigned short **l_359 = &l_360;
                unsigned short ***l_361 = &l_359;
                long long **l_363 = &g_228;
                long long ***l_362 = &l_363;
                (*l_361) = l_359;
                (*g_246) = ((((*l_362) = &g_228) != (g_258 , l_364)) , l_306);
            }
        }
        else
        {
            return g_354;
        }
        (*l_306) ^= (0xBBL <= p_24);
        for (l_110 = 0; (l_110 == (-3)); l_110 = safe_sub_func_int16_t_s_s(l_110, 1))
        {
            union U0 *l_367 = (void*)0;
            int l_371 = 0xD0057DF2L;
            int l_384 = 0xC1AF2571L;
            int ***l_402 = &g_246;
            short l_408 = 0xCD72L;
            unsigned **l_410 = &l_53;
            g_368 = l_367;
            for (g_225 = 0; (g_225 <= (-28)); --g_225)
            {
                char l_372 = (-10L);
                int *l_373 = (void*)0;
                unsigned short *l_383 = &l_352;
                l_372 |= ((l_371 ^ (-6L)) > p_24);
                l_373 = &l_371;
                l_384 |= (((*l_373) == (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((*l_306), ((*l_383) = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((!((*g_228) , g_159)), ((((void*)0 == g_382) , g_77) , ((void*)0 == &g_228)))), (*l_373)))))), l_371))) ^ l_371);
            }
            (*g_246) = l_306;
        }
    }
    return p_26;
}







static short func_42(unsigned p_43, short p_44, int p_45, char p_46, unsigned long long p_47)
{
    char l_107 = 3L;
    int *l_108 = &g_109;
    (*l_108) ^= l_107;
    return (*l_108);
}







static unsigned long long func_50(unsigned * p_51)
{
    unsigned char l_60 = 0xF9L;
    unsigned *l_75 = &g_41;
    short *l_76 = &g_77;
    int l_80 = 0xEC7F5175L;
    int *l_100 = &l_80;
    int l_101 = (-9L);
    (*l_100) = (safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((l_60 , func_61(((0xCEL != func_67((safe_mul_func_int16_t_s_s(((*l_76) |= (l_60 | (l_60 , (&g_41 != l_75)))), (0L <= (l_76 != (void*)0)))), l_80, g_41, l_60, g_41)) || 0x3FL), g_41, p_51, g_82, &l_75)), g_41)), l_80)), 0xB5D6221F4251D174LL));
    return l_101;
}







static unsigned short func_61(long long p_62, short p_63, unsigned * p_64, unsigned ** p_65, unsigned ** p_66)
{
    int *l_85 = (void*)0;
    int **l_84 = &l_85;
    int l_96 = 0x90BCC9DFL;
    (*l_84) = g_83;
    g_99 ^= (safe_sub_func_uint8_t_u_u(g_77, (p_63 != ((safe_sub_func_int64_t_s_s((p_63 ^ (**l_84)), (safe_div_func_int8_t_s_s(((p_62 ^ ((safe_mod_func_int32_t_s_s((((p_63 >= (g_13 | ((safe_div_func_int8_t_s_s(l_96, (safe_mul_func_uint8_t_u_u(0xEEL, g_13)))) , g_41))) , &g_77) != (void*)0), g_41)) ^ g_77)) | g_77), g_77)))) != p_62))));
    return p_62;
}







static char func_67(short p_68, unsigned long long p_69, unsigned p_70, int p_71, short p_72)
{
    unsigned short l_81 = 0xEE1EL;
    return l_81;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_258.f2, "g_258.f2", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
