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
   unsigned f0 : 15;
   unsigned f1 : 10;
   unsigned f2;
   unsigned f3 : 6;
   signed f4 : 21;
   unsigned f5 : 15;
   signed f6 : 22;
   unsigned f7 : 24;
};

struct S1 {
   unsigned f0;
   int f1;
   unsigned short f2;
   int f3;
   unsigned char f4;
   unsigned f5;
   unsigned f6;
   unsigned char f7;
};


static int g_22 = 6L;
static int g_38 = 0x719EFCC7L;
static char g_48 = 5L;
static struct S0 g_72 = {96,21,0UL,0,543,113,-1021,1202};
static struct S1 g_114 = {0x29F58EF4L,-1L,0x4A95L,4L,0x26L,0xAA81BD54L,0UL,0xB3L};
static unsigned g_335 = 0x0B0C2484L;
static char g_474 = 1L;



static unsigned func_1(void);
static int func_2(int p_3);
static unsigned short func_6(unsigned p_7, unsigned p_8, unsigned p_9, unsigned char p_10);
static unsigned short func_15(int p_16, unsigned short p_17);
static const unsigned char func_18(int p_19, struct S0 p_20, unsigned short p_21);
static struct S0 func_23(struct S0 p_24, int p_25, short p_26, unsigned p_27, short p_28);
static struct S0 func_29(struct S0 p_30);
static int func_42(unsigned p_43, int p_44, int p_45, unsigned short p_46);
static char func_55(int p_56, struct S0 p_57, char p_58);
static int func_67(struct S1 p_68, struct S0 p_69, short p_70);
static unsigned func_1(void)
{
    struct S0 l_31 = {27,7,1UL,3,1073,146,58,3231};
    unsigned l_47 = 0x7AAC3BC5L;
    char l_125 = 0x36L;
    char l_526 = 1L;
    l_31.f4 = func_2((safe_rshift_func_uint8_t_u_u((0xE9FBL != (func_6((safe_div_func_int32_t_s_s((0xC1L < ((safe_mod_func_uint32_t_u_u((func_15((func_18(g_22, func_23(func_29(l_31), (safe_sub_func_int32_t_s_s(func_42(l_31.f4, l_31.f0, l_47, l_47), 4294967288UL)), l_31.f0, g_22, g_22), g_22) ^ l_125), l_31.f2) | g_22), g_22)) <= l_31.f7)), 0xF83D26D1L)), l_31.f7, g_22, l_31.f3) < l_31.f2)), l_31.f4)));
    l_31.f6 = (safe_mul_func_uint16_t_u_u((0xD08FL <= (safe_rshift_func_uint8_t_u_s((g_38 | (l_31.f7 || l_31.f0)), 3))), (safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(l_31.f2, 15)) > func_6(((+(safe_rshift_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((l_125 < (+(safe_lshift_func_uint16_t_u_u((l_31.f0 != (((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s((-1L), func_55((safe_lshift_func_uint8_t_u_u(g_72.f2, 0)), g_72, l_526))), 250UL)) >= 0x860EL) <= l_31.f3)), 13)))), g_72.f6)) <= l_31.f7), 1L)) | g_72.f6), g_72.f3))) > g_48), l_526, g_474, l_31.f2)), l_31.f4))));
    for (g_38 = 13; (g_38 > 15); ++g_38)
    {
        struct S0 l_533 = {99,14,4294967290UL,5,325,44,-568,3034};
        l_533 = func_23(g_72, l_31.f4, (safe_mul_func_uint8_t_u_u(l_47, 0x59L)), ((0xF98F0CB5L | (0x6F7E6344L <= ((((0x4773189BL && func_42(g_72.f5, g_335, l_31.f5, l_47)) <= 0L) == l_31.f5) & 0xE2L))) & 0x2F9DL), g_335);
    }
    return g_72.f2;
}







static int func_2(int p_3)
{
    int l_138 = 0xBD9AF42DL;
    const unsigned l_157 = 1UL;
    short l_195 = 0L;
    unsigned short l_211 = 0x0633L;
    struct S1 l_233 = {0x16853873L,0xB217F77EL,0x56C0L,-1L,0x6EL,0UL,0x0165B9B7L,0UL};
    unsigned l_302 = 0xD43C1946L;
    int l_336 = 0xB75E7342L;
    struct S0 l_363 = {114,1,4294967295UL,7,-601,71,1387,1414};
    struct S1 l_495 = {0UL,0x25A782DDL,65531UL,0x0568C734L,0xA8L,0xC7E7008BL,0xD56E1FB3L,0x0EL};
    l_138 = (g_114.f5 == l_138);
    if (g_114.f2)
    {
        int l_139 = 0L;
        unsigned char l_152 = 255UL;
        unsigned l_153 = 0x921E08C4L;
        int l_154 = (-1L);
        struct S0 l_155 = {107,6,0xB4697688L,4,-220,158,1427,3880};
        l_139 = 1L;
        l_154 = ((g_114.f7 <= (((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(func_42(p_3, (((safe_sub_func_uint8_t_u_u((l_152 <= 0L), (0UL || 0UL))) | func_15((l_153 ^ 1L), ((0x1823L > g_114.f6) && l_139))) > l_154), g_48, p_3), g_72.f0)), g_72.f6)), p_3)), g_72.f0)), 0UL)) <= g_114.f7) == l_154)) > 7L);
        g_72 = l_155;
    }
    else
    {
        unsigned char l_156 = 0xDEL;
        struct S0 l_160 = {123,14,0UL,4,-536,104,-121,422};
        char l_185 = (-1L);
        struct S1 l_188 = {0x6034B83AL,0xDF858C96L,0x2B4DL,0x3A2BD98AL,0UL,0x78437ABAL,0x861B1281L,255UL};
        unsigned char l_364 = 0x03L;
        short l_475 = 0x0ED7L;
        if ((l_156 <= l_157))
        {
            return p_3;
        }
        else
        {
            char l_171 = 0xECL;
            struct S1 l_172 = {0x438A7655L,-1L,65533UL,0xA33C6001L,0x99L,4294967291UL,18446744073709551615UL,0x61L};
            unsigned short l_212 = 65535UL;
            unsigned char l_231 = 0xF2L;
            unsigned l_263 = 0x407AAFDBL;
            unsigned l_273 = 0xEC03593DL;
            int l_293 = 0x48CD2E62L;
            struct S0 l_326 = {59,14,4294967293UL,7,-442,29,-1864,691};
            int l_353 = 0x78428333L;
            struct S1 l_362 = {0xB346AE8FL,1L,65535UL,0L,0xC8L,0xEA3C633BL,18446744073709551607UL,246UL};
            unsigned short l_407 = 65531UL;
            const unsigned l_473 = 1UL;
            if (((0x0BF1L & (safe_mod_func_int16_t_s_s(func_67(g_114, func_29(l_160), (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((g_22 <= (safe_rshift_func_int8_t_s_u(p_3, 5))), 12)), ((safe_add_func_int32_t_s_s(g_48, g_72.f0)) < p_3))), 1L))), l_171))) != g_114.f0))
            {
                unsigned char l_173 = 0x4FL;
                g_72.f6 = l_160.f4;
                l_172 = g_114;
                l_173 = (-1L);
            }
            else
            {
                unsigned short l_186 = 0x6916L;
                int l_190 = (-6L);
                struct S1 l_232 = {4294967293UL,-1L,0x65F4L,0x9E33F7C1L,0UL,0xEAEBF9CCL,0xE223FE2AL,0xE4L};
                int l_250 = 0x30D46338L;
                for (g_114.f4 = (-20); (g_114.f4 < 30); g_114.f4++)
                {
                    int l_180 = 0x71678075L;
                    unsigned short l_196 = 0xEB10L;
                    struct S0 l_199 = {141,5,6UL,3,-757,36,1242,277};
                    unsigned short l_214 = 1UL;
                    if ((safe_add_func_uint8_t_u_u(func_67(g_114, func_23(g_72, p_3, ((safe_sub_func_uint8_t_u_u(func_42(g_114.f6, l_138, (((l_180 ^ ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_72.f6, 2)), l_185)) <= (l_186 | g_114.f3))) > p_3) | 8L), g_72.f6), p_3)) >= l_180), g_38, l_160.f2), p_3), 4UL)))
                    {
                        struct S1 l_187 = {0xF92F17FBL,0xF1F695C9L,0xB641L,0xC3D22769L,8UL,0xAD8DBD10L,0x5F4DC93DL,0x1DL};
                        l_188 = l_187;
                        l_138 = l_157;
                    }
                    else
                    {
                        char l_189 = 1L;
                        l_190 = l_189;
                        g_72.f6 = (((safe_mul_func_uint32_t_u_u(func_42((+l_188.f0), g_114.f2, p_3, p_3), (l_190 > 3UL))) != (((l_195 < p_3) != (-4L)) == p_3)) > g_114.f0);
                    }
                    if (l_180)
                    {
                        int l_213 = 0x398DA3DAL;
                        l_160.f4 = ((+func_15((65531UL & (-8L)), l_138)) < l_196);
                        g_72 = func_23(g_72, (g_114.f7 < (0L | p_3)), (4294967295UL <= (l_180 || ((g_72.f5 & ((-2L) || l_180)) <= p_3))), g_114.f1, p_3);
                        l_138 = ((((p_3 == func_6((((safe_rshift_func_int16_t_s_s(((func_67(g_114, func_29(l_199), g_72.f7) == (safe_unary_minus_func_int32_t_s((((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_114.f0, 6)), (safe_lshift_func_uint8_t_u_s(0x8EL, (safe_add_func_int16_t_s_s(p_3, l_190)))))) < l_211), 7UL)) & p_3) >= l_157)))) & l_212), 0)) & l_172.f2) <= g_114.f5), g_114.f6, l_213, l_195)) > l_214) < p_3) >= g_114.f4);
                    }
                    else
                    {
                        g_72.f4 = (l_172.f7 != p_3);
                        return p_3;
                    }
                    for (l_188.f5 = (-7); (l_188.f5 < 17); ++l_188.f5)
                    {
                        return p_3;
                    }
                    g_72.f6 = (safe_mul_func_uint8_t_u_u(1UL, ((65534UL & (2L != (l_172.f0 | (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_div_func_uint16_t_u_u(func_42(g_72.f4, g_114.f1, (g_114.f5 != (-4L)), (((safe_mul_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(l_188.f4, p_3)) || p_3), g_72.f3)) && 0UL) && l_138)), p_3)) >= p_3) > l_231), 7)), p_3))))) >= 6L)));
                }
                l_233 = l_232;
                for (l_232.f2 = 2; (l_232.f2 == 19); l_232.f2 = safe_add_func_uint32_t_u_u(l_232.f2, 9))
                {
                    char l_236 = 0x26L;
                    if ((((((((+l_160.f7) != l_232.f5) && l_236) > l_172.f4) | p_3) != l_195) ^ (l_160.f6 | (5L || (safe_mod_func_int16_t_s_s((0x7BC4L && p_3), l_212))))))
                    {
                        char l_243 = (-10L);
                        g_114.f1 = (-1L);
                        l_138 = func_42(g_114.f2, g_114.f2, g_114.f3, g_72.f0);
                        g_114.f1 = (safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((l_243 ^ func_15(g_72.f1, (safe_mul_func_uint8_t_u_u((255UL ^ g_72.f4), l_172.f1)))), 0x450EL)), (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_72.f0, p_3)), 0xAFCEL))));
                    }
                    else
                    {
                        l_263 = ((func_15(p_3, g_114.f1) < l_250) == (safe_sub_func_int16_t_s_s(((-5L) >= (((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((0xCE679D64L | ((safe_add_func_int32_t_s_s(g_72.f4, (((func_6((safe_mod_func_uint16_t_u_u(l_172.f2, (safe_sub_func_int32_t_s_s(0x8140AC22L, p_3)))), l_172.f2, g_72.f0, l_160.f4) > g_48) <= 0x26L) ^ g_114.f3))) ^ g_114.f5)), l_231)), g_72.f2)) | l_232.f0) | l_195)), p_3)));
                        return p_3;
                    }
                    l_172.f1 = l_232.f6;
                }
                g_72.f6 = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((l_232.f2 < (safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint8_t_u_u((1L && 0x7B83L), (safe_add_func_int16_t_s_s(2L, (0x4A542E88L >= ((((((+(((g_48 || (4294967295UL >= (l_138 <= (-1L)))) > g_114.f3) & 0x4488L)) >= g_72.f4) != g_72.f1) ^ l_172.f1) || g_114.f2) == l_172.f0)))))) && g_72.f7)))), 9)), 0));
            }
            if (g_114.f5)
            {
                return l_273;
            }
            else
            {
                l_233.f1 = g_72.f3;
            }
            if ((((!(g_72.f2 | (g_48 > p_3))) == g_114.f4) & l_160.f5))
            {
                unsigned char l_300 = 251UL;
                unsigned l_301 = 18446744073709551615UL;
                int l_304 = 0x54BACA2EL;
                const unsigned l_372 = 0xE71C9B3BL;
                unsigned short l_409 = 7UL;
                if (g_114.f3)
                {
                    for (l_188.f2 = (-7); (l_188.f2 >= 11); l_188.f2 = safe_add_func_uint32_t_u_u(l_188.f2, 3))
                    {
                        return p_3;
                    }
                    return g_72.f0;
                }
                else
                {
                    short l_282 = 0x89DEL;
                    int l_320 = (-1L);
                    struct S1 l_321 = {0x20EB86FDL,0xC8F590AFL,0x2D96L,9L,253UL,0x45D0CCC5L,0x5EBF9095L,0UL};
                    l_293 = (safe_rshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s(p_3, (~((-1L) == l_282)))) && (g_72.f3 >= (safe_add_func_uint32_t_u_u(func_15(l_172.f3, (safe_add_func_uint16_t_u_u(65535UL, (((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(p_3, g_114.f3)), (safe_mul_func_uint16_t_u_u(func_42(p_3, g_22, p_3, g_72.f4), 3L)))) <= p_3) ^ g_114.f1)))), g_114.f1)))), p_3));
                    for (l_231 = 0; (l_231 == 4); l_231 = safe_add_func_int8_t_s_s(l_231, 5))
                    {
                        unsigned l_303 = 0xD5220474L;
                        l_172.f1 = (l_282 & (9L > 1UL));
                        l_304 = ((p_3 && ((!(func_6((safe_div_func_int32_t_s_s((-1L), (safe_sub_func_uint32_t_u_u(func_67(g_114, func_23(g_72, func_6(g_72.f4, l_300, l_300, l_301), p_3, p_3, l_160.f4), l_302), 1L)))), g_114.f6, l_188.f2, g_114.f6) > l_303)) > 0x14397996L)) & g_22);
                    }
                    for (l_172.f2 = 0; (l_172.f2 >= 60); l_172.f2 = safe_add_func_int16_t_s_s(l_172.f2, 4))
                    {
                        l_320 = ((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((l_188.f2 >= ((-9L) & (g_114.f6 != 0L))), l_282)), ((-8L) ^ (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(g_114.f6)), (p_3 <= (safe_sub_func_uint16_t_u_u(p_3, g_72.f6)))))))) || l_282);
                    }
                    g_114 = l_321;
                }
                for (l_172.f0 = (-30); (l_172.f0 != 27); l_172.f0++)
                {
                    const struct S0 l_324 = {21,19,0xEE94800FL,0,1353,20,345,1774};
                    struct S0 l_325 = {98,18,7UL,3,592,161,-695,1507};
                    l_325 = l_324;
                }
                if (func_18(((p_3 > g_72.f2) | (g_72.f1 && g_114.f1)), func_29(l_326), (safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(0xAAC0L, 7)) < func_6((safe_lshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(func_42((1L != func_42(g_72.f7, g_114.f2, g_72.f7, p_3)), g_72.f7, p_3, g_335), g_72.f6)), 0)), g_72.f1, g_114.f0, g_335)), p_3))))
                {
                    char l_343 = 1L;
                    if (l_336)
                    {
                        short l_346 = (-1L);
                        int l_347 = 8L;
                        const struct S1 l_348 = {4294967291UL,0x4A245415L,0xB189L,-8L,0UL,0x3FA7BD63L,0UL,248UL};
                        l_347 = (safe_mod_func_uint8_t_u_u(g_114.f0, (safe_sub_func_uint16_t_u_u(((+(safe_sub_func_int32_t_s_s(0x5EF9FE43L, g_38))) ^ l_343), (safe_rshift_func_int16_t_s_u(l_346, 1))))));
                        g_114 = l_348;
                    }
                    else
                    {
                        l_364 = (((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_326.f1, (l_233.f2 > l_172.f5))), l_326.f0)) >= l_353) == (safe_lshift_func_int16_t_s_u(((p_3 != (safe_sub_func_int8_t_s_s((0x0D26L > (((safe_mod_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(4UL, func_67(l_362, l_363, g_48))) & p_3) >= l_233.f0), l_188.f6)) > 0L) < 0L)), p_3))) || p_3), 15)));
                        l_160.f6 = (safe_div_func_uint8_t_u_u(g_72.f3, 0x2BL));
                    }
                    for (g_38 = 0; (g_38 > (-2)); g_38 = safe_sub_func_uint16_t_u_u(g_38, 8))
                    {
                        short l_369 = 0x4A4EL;
                        g_72.f4 = g_72.f7;
                        l_160 = l_363;
                        l_369 = l_157;
                    }
                    for (l_188.f3 = 0; (l_188.f3 != (-7)); l_188.f3--)
                    {
                        l_172.f1 = l_372;
                        return g_72.f5;
                    }
                }
                else
                {
                    char l_406 = 0L;
                    l_160 = l_160;
                    l_233 = g_114;
                    if ((p_3 <= func_55((7L ^ ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((!(p_3 == 0x86L)) > g_114.f3), g_72.f7)), (safe_mod_func_uint32_t_u_u((0xDBL ^ ((safe_add_func_int16_t_s_s(4L, 0xD4B7L)) == g_72.f2)), 0x26ED6EA5L)))) < l_304)), l_326, p_3)))
                    {
                        unsigned char l_389 = 0x36L;
                        struct S0 l_408 = {81,12,0xD70CFA25L,7,1201,162,158,2567};
                        l_362.f1 = (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((l_389 && (func_55((safe_mul_func_uint16_t_u_u((g_72.f0 == g_72.f2), ((safe_sub_func_uint16_t_u_u(p_3, p_3)) <= ((safe_lshift_func_int8_t_s_u((((safe_mod_func_int8_t_s_s(func_6((safe_add_func_int16_t_s_s((1L < (-3L)), ((safe_sub_func_uint8_t_u_u(((0xEDL >= ((safe_add_func_uint32_t_u_u(func_15(func_6((safe_add_func_uint16_t_u_u(func_6(l_233.f2, l_389, l_406, g_114.f7), g_22)), p_3, g_38, l_233.f6), p_3), g_72.f1)) != g_72.f7)) > 0UL), 9L)) == l_362.f0))), p_3, l_389, p_3), l_407)) > 0x7869L) != 1UL), 5)) < l_406)))), l_408, l_172.f0) >= g_72.f3)) || p_3), 3)), p_3));
                        l_304 = g_72.f5;
                        l_304 = ((g_114.f5 > 0L) > (l_304 & (g_72.f5 || ((l_409 || g_114.f6) >= (safe_add_func_int8_t_s_s(func_6(p_3, g_114.f1, g_335, g_114.f0), (-1L)))))));
                    }
                    else
                    {
                        unsigned l_412 = 0xB792B403L;
                        l_412 = l_406;
                        return l_406;
                    }
                }
            }
            else
            {
                struct S0 l_415 = {90,24,0x19CA9C73L,2,1171,166,-1787,3523};
                struct S1 l_494 = {9UL,0x272E4031L,0x098DL,0x1F52AC1AL,249UL,0x54CA5175L,2UL,0xE1L};
                l_363.f4 = g_114.f2;
                if (((safe_lshift_func_int8_t_s_s(func_67(g_114, l_415, (((safe_mod_func_uint32_t_u_u(g_72.f2, p_3)) == l_233.f0) | 0x1C48L)), 7)) < l_160.f7))
                {
                    unsigned l_418 = 0x598FF701L;
                    int l_419 = 0x1F63E348L;
                    l_419 = l_418;
                    l_419 = g_72.f5;
                    l_415.f6 = (((safe_div_func_uint16_t_u_u((247UL == ((safe_mul_func_int8_t_s_s(7L, ((l_415.f7 | g_114.f5) == (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(g_72.f4, l_418)) == (!(safe_div_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(p_3, p_3)), 0xF720654CL)))), p_3))))) >= p_3)), p_3)) || 0UL) != g_114.f1);
                    for (g_114.f2 = 0; (g_114.f2 > 17); g_114.f2 = safe_add_func_uint32_t_u_u(g_114.f2, 9))
                    {
                        unsigned short l_440 = 65535UL;
                        l_172.f1 = (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(func_6(g_114.f7, p_3, l_440, (safe_sub_func_uint32_t_u_u(((((l_363.f0 < ((safe_unary_minus_func_int8_t_s(l_418)) < g_72.f5)) | p_3) <= p_3) == (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(func_6(((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(g_72.f3, 0xCC52B965L)), p_3)) ^ g_48), g_22, l_415.f4, g_114.f0), 15)), l_195)) >= 65529UL), 0xDD51L)), g_114.f4)) >= g_72.f2), 0x34D7L)), p_3))), 1L))), p_3)), 0xC736L));
                    }
                }
                else
                {
                    short l_466 = (-1L);
                    int l_503 = 0xB4DD98A3L;
                    l_160.f4 = func_18(p_3, func_29(l_160), (safe_mod_func_uint16_t_u_u(func_6(((safe_sub_func_int8_t_s_s(g_335, (safe_rshift_func_int8_t_s_u((((((((g_114.f0 < l_466) != (safe_mod_func_int32_t_s_s(func_42(((safe_rshift_func_int8_t_s_s((((safe_div_func_int32_t_s_s(p_3, (l_233.f3 ^ 255UL))) == 9L) && l_473), g_72.f1)) && g_114.f4), l_466, p_3, g_474), 0x3BF5AFFEL))) || p_3) ^ 0x47L) >= p_3) > l_363.f1) >= l_475), g_114.f4)))) == p_3), g_72.f7, p_3, g_114.f7), 0xA6F7L)));
                    l_188.f1 = (safe_sub_func_int8_t_s_s((((+((safe_add_func_uint32_t_u_u(p_3, 0UL)) < (l_415.f0 || 0x04L))) <= g_114.f3) > g_335), (safe_mul_func_uint8_t_u_u(l_160.f0, (safe_lshift_func_uint16_t_u_s((((((((((safe_lshift_func_int16_t_s_u(func_15(g_72.f6, g_114.f1), l_326.f1)) == p_3) & 0xAFA1L) == (-8L)) < 0xFFL) && p_3) != p_3) | 0x7CL) > p_3), p_3))))));
                    for (l_362.f4 = 0; (l_362.f4 == 27); l_362.f4++)
                    {
                        short l_496 = 6L;
                        l_160 = func_23(l_415, (safe_mul_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_s(g_335, 5)) & ((g_72.f0 != (safe_sub_func_int8_t_s_s((func_6(p_3, func_6(l_326.f1, g_72.f1, p_3, p_3), g_72.f1, g_114.f2) ^ p_3), 0x42L))) || 0xBE54L)) && (-2L)) > 0x73552851L), l_326.f3)), l_188.f4, g_114.f3, l_407);
                        l_495 = l_494;
                        g_114.f1 = l_496;
                        g_72.f6 = ((0x209F11ECL ^ (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(l_172.f5, p_3)) || (g_114.f4 <= p_3)), (0x4462L ^ func_42((p_3 && p_3), l_188.f6, g_38, l_503)))), 3))) || 0x5DL);
                    }
                    l_363.f6 = 1L;
                }
            }
            return p_3;
        }
    }
    l_233 = g_114;
    return p_3;
}







static unsigned short func_6(unsigned p_7, unsigned p_8, unsigned p_9, unsigned char p_10)
{
    unsigned char l_137 = 3UL;
    l_137 = g_72.f5;
    return p_7;
}







static unsigned short func_15(int p_16, unsigned short p_17)
{
    char l_134 = 0x3EL;
    int l_136 = (-6L);
    for (g_114.f2 = 0; (g_114.f2 > 54); ++g_114.f2)
    {
        const unsigned short l_133 = 0xBA5EL;
        struct S0 l_135 = {100,31,0x02F1E5DEL,6,1327,22,-773,620};
        if ((253UL != p_17))
        {
            short l_132 = (-1L);
            l_135 = func_23(func_29(func_23(g_72, (((g_72.f1 > (safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u((p_17 | l_132), (!(4294967295UL & l_133)))) != p_17), 7))) < (g_114.f4 > 0x8440L)) & (-4L)), l_133, l_134, g_72.f6)), l_134, g_72.f5, l_132, g_22);
        }
        else
        {
            if (l_135.f5)
                break;
        }
    }
    return l_136;
}







static const unsigned char func_18(int p_19, struct S0 p_20, unsigned short p_21)
{
    short l_59 = 3L;
    struct S0 l_60 = {93,30,0x3513FE74L,4,801,162,189,4045};
    struct S1 l_71 = {0xFF3FA32FL,0xB2F22DDFL,65526UL,-1L,0xC9L,4294967292UL,0xB0014755L,0x41L};
    l_60.f6 = ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((1UL ^ 5L) & ((safe_mul_func_int8_t_s_s(func_55(l_59, l_60, (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(func_42((safe_mod_func_uint32_t_u_u(4294967292UL, func_67(l_71, g_72, l_60.f4))), g_114.f2, l_71.f7, g_114.f0), p_20.f4)), p_20.f0))), 0xB0L)) <= 0x1A75F86EL)), g_22)), 65535UL)) != p_20.f5);
    return g_114.f5;
}







static struct S0 func_23(struct S0 p_24, int p_25, short p_26, unsigned p_27, short p_28)
{
    return p_24;
}







static struct S0 func_29(struct S0 p_30)
{
    unsigned l_36 = 0x2CE33A90L;
    int l_37 = (-8L);
    struct S0 l_39 = {140,13,0xC6A332E5L,2,-1277,60,1304,1990};
    g_38 = (safe_mul_func_int16_t_s_s((((p_30.f2 < g_22) <= (safe_rshift_func_uint8_t_u_u(l_36, 5))) | (l_36 ^ g_22)), l_37));
    return l_39;
}







static int func_42(unsigned p_43, int p_44, int p_45, unsigned short p_46)
{
    g_48 = 2L;
    return p_46;
}







static char func_55(int p_56, struct S0 p_57, char p_58)
{
    unsigned l_120 = 0UL;
    struct S1 l_123 = {1UL,4L,0xE73CL,0x9434882AL,0x58L,4294967295UL,0x140D6580L,255UL};
    g_72.f4 = l_120;
    for (g_72.f2 = 0; (g_72.f2 >= 34); ++g_72.f2)
    {
        const struct S1 l_124 = {1UL,0xBDB73D74L,65532UL,0xD446D23EL,0x26L,2UL,2UL,250UL};
        l_123 = g_114;
        g_114 = l_124;
    }
    l_123 = l_123;
    l_123 = l_123;
    return l_123.f4;
}







static int func_67(struct S1 p_68, struct S0 p_69, short p_70)
{
    unsigned l_99 = 0xBDFCF0F4L;
    int l_113 = 4L;
    struct S0 l_119 = {92,7,0x9A5162B3L,5,-483,177,-1204,2543};
    if (((safe_div_func_int32_t_s_s((9L || (safe_lshift_func_uint8_t_u_s(g_72.f4, (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(g_72.f5, ((safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s(2L, (safe_rshift_func_int8_t_s_s((255UL > 0xF5L), 0)))), (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(func_42(((safe_div_func_int16_t_s_s(func_42(((safe_div_func_int32_t_s_s((0xF4L | (0x866B6F1FL <= (g_72.f3 & l_99))), 0xCEB4B622L)) > l_99), g_72.f1, l_99, g_72.f0), g_72.f3)) && g_22), g_38, l_99, l_99), 0x886DL)), 5)))) && 4294967290UL))), g_22)), 246UL))))), g_72.f1)) || l_99))
    {
        struct S0 l_100 = {2,21,4294967295UL,3,1151,110,-1514,3804};
        unsigned l_111 = 0x80D5DAD1L;
        char l_112 = 1L;
        g_72 = func_23(func_29(l_100), l_99, func_42(func_42((((p_69.f0 || (((func_42((l_100.f6 | p_69.f4), ((safe_rshift_func_uint8_t_u_s(((g_22 == func_42((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_100.f2 == (safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(255UL, g_72.f0)), 0x3AL))), 255UL)), p_69.f1)), g_72.f3, g_22, g_72.f2)) | g_22), 4)) || l_99), g_72.f5, g_72.f4) == 0UL) | g_72.f7) <= p_70)) != l_99) > g_72.f4), p_69.f6, g_22, l_99), l_99, l_111, g_72.f4), g_72.f4, g_72.f3);
        g_72 = g_72;
        l_113 = l_112;
        if ((0x70L || g_48))
        {
            p_68 = g_114;
        }
        else
        {
            l_100.f6 = g_22;
        }
    }
    else
    {
        char l_115 = 0L;
        p_69.f4 = l_115;
    }
    p_69.f4 = g_114.f1;
    for (g_114.f1 = 0; (g_114.f1 >= 3); g_114.f1 = safe_add_func_uint16_t_u_u(g_114.f1, 1))
    {
        struct S0 l_118 = {154,7,2UL,7,699,39,-751,2119};
        l_119 = l_118;
    }
    return l_119.f0;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_72.f3, "g_72.f3", print_hash_value);
    transparent_crc(g_72.f4, "g_72.f4", print_hash_value);
    transparent_crc(g_72.f5, "g_72.f5", print_hash_value);
    transparent_crc(g_72.f6, "g_72.f6", print_hash_value);
    transparent_crc(g_72.f7, "g_72.f7", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_114.f2, "g_114.f2", print_hash_value);
    transparent_crc(g_114.f3, "g_114.f3", print_hash_value);
    transparent_crc(g_114.f4, "g_114.f4", print_hash_value);
    transparent_crc(g_114.f5, "g_114.f5", print_hash_value);
    transparent_crc(g_114.f6, "g_114.f6", print_hash_value);
    transparent_crc(g_114.f7, "g_114.f7", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
