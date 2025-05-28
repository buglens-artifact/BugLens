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



static unsigned short g_15 = 0xBC99L;
static int g_43 = 0x7D437F1BL;
static unsigned short g_46 = 65531UL;
static unsigned short g_48 = 0x4283L;
static unsigned short **g_59 = (void*)0;
static unsigned g_74 = 1UL;
static int g_111 = 0xF190218FL;
static unsigned g_125 = 0x652FB001L;
static int g_139 = 0x1F6F3B3EL;
static const int g_164 = 0L;
static unsigned char g_170 = 0UL;
static short g_176 = 0xFEFFL;
static int g_213 = 0xD25EDB48L;
static unsigned char g_251 = 0x04L;
static int g_282 = 0xCD6FD9E3L;
static int g_287 = 0x26C9C176L;
static short g_292 = 0x2435L;
static short g_295 = 4L;
static const int *g_334 = &g_111;
static unsigned char g_378 = 0xFDL;
static int g_503 = (-1L);
static int g_509 = (-1L);
static int g_557 = (-1L);
static int g_563 = (-5L);
static char g_565 = 0x9AL;
static int g_610 = 0xF32CDC85L;
static int g_636 = 0x07AAFDB7L;
static unsigned g_642 = 0x2C901CCDL;
static char g_740 = 1L;
static int g_791 = 0L;
static int g_795 = 0L;
static int g_835 = 0x636F438BL;
static short g_878 = (-10L);
static short g_1096 = 0xE1FBL;
static unsigned g_1097 = 4294967287UL;
static char g_1112 = 0xEAL;
static unsigned short ***g_1138 = &g_59;
static unsigned short ****g_1137 = &g_1138;
static int **g_1142 = (void*)0;
static const short * const g_1171 = &g_176;
static const short * const *g_1170 = &g_1171;
static short g_1347 = 0xBBD3L;
static unsigned char g_1355 = 253UL;
static const int g_1376 = (-6L);
static unsigned char g_1518 = 0x09L;
static const int g_1558 = 9L;
static char g_1681 = 0L;
static int g_1684 = 0L;
static unsigned char g_1691 = 0x16L;
static unsigned g_1713 = 0xD237A9FFL;



static unsigned char func_1(void);
static int func_2(unsigned p_3, char p_4);
static unsigned func_11(unsigned p_12, int p_13, unsigned char p_14);
static char func_25(char p_26, unsigned p_27, int p_28, unsigned p_29, int p_30);
static unsigned short ** func_51(char p_52, unsigned short ** p_53, int p_54);
static const unsigned func_66(const unsigned short * p_67, short p_68, int p_69);
static char func_92(unsigned short p_93, int p_94, unsigned short ** const p_95, int * p_96);
static unsigned short ** const func_98(short p_99, unsigned p_100, const int p_101, int p_102, unsigned short p_103);
static unsigned short * func_116(unsigned short * const * p_117, unsigned p_118, short p_119, int p_120, char p_121);
static unsigned char func_128(unsigned char p_129, unsigned p_130, const int * p_131, const unsigned p_132);
static unsigned char func_1(void)
{
    unsigned char l_22 = 255UL;
    unsigned short *l_45 = &g_46;
    unsigned short *l_47 = &g_48;
    int *l_1701 = &g_111;
    int *l_1702 = &g_282;
    char l_1711 = 0x85L;
    short *l_1712 = &g_176;
    int *l_1714 = &g_43;
    g_213 = (((((*l_1702) = (0xB189L != ((((*l_1701) = func_2(((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((((safe_div_func_uint32_t_u_u(func_11((g_15 | ((*l_47) = ((*l_45) |= (safe_add_func_int8_t_s_s(0L, (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(l_22, (safe_sub_func_int8_t_s_s((!func_25((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0x4257L, 9)), g_15)), g_15)), (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((l_22 < (g_15 <= l_22)), 11)), l_22)), g_15, g_15, g_15)), g_15)))), 14))))))), l_22, g_15), l_22)) == l_22) >= g_378) == l_22), (*g_1171))), l_22)) < 4UL), l_22)) > g_791) & l_22))) >= 0x56CF6FDCL) != g_1558) < g_642);


    g_43 &= ((*l_1701) = ((*l_1702) = ((*l_1702) & (*l_1701))));
    (*l_1701) = (*g_334);
    (*l_1714) &= (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((0x19L || 0x9DL) < ((safe_sub_func_uint8_t_u_u((((*l_1712) ^= ((*l_1701) > l_1711)) || (*l_1701)), g_1713)) & (*l_1702))), (*l_1702))), (-2L)));
    return g_46;
}







static int func_2(unsigned p_3, char p_4)
{
    int ** const * const l_1698 = &g_1142;
    unsigned short ***l_1699 = &g_59;
    int *l_1700 = &g_139;
    (*l_1700) ^= (safe_mod_func_int16_t_s_s(((-1L) | (((-5L) | ((void*)0 != l_1698)) > ((void*)0 == l_1699))), p_3));
    return p_4;
}







static unsigned func_11(unsigned p_12, int p_13, unsigned char p_14)
{
    int *l_50 = &g_43;
    int **l_49 = &l_50;
    unsigned short *l_56 = &g_46;
    unsigned short **l_55 = &l_56;
    unsigned short ***l_77 = (void*)0;
    unsigned short ***l_78 = &g_59;
    char l_87 = 0x51L;
    short l_1159 = 0L;
    int l_1187 = (-1L);
    int l_1233 = 0x8465106FL;
    int l_1236 = 0x8F087F50L;
    const int *l_1375 = &g_1376;
    int l_1377 = 0xC85A73BAL;
    int l_1450 = 3L;
    int l_1471 = 0xF054EEFCL;
    int l_1489 = 0x662857A6L;
    int l_1497 = (-5L);
    int l_1636 = 0x3CC9B171L;
    int l_1686 = (-4L);
    int l_1687 = 0x1639A294L;
    (*l_49) = &p_13;

    ;
    (*l_78) = func_51((*l_50), l_55, (((((safe_sub_func_int32_t_s_s((g_59 != (void*)0), (p_14 & (safe_rshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s((g_48 ^ (g_74 = func_25((safe_div_func_uint32_t_u_u((*l_50), func_66((*l_55), p_14, g_48))), g_43, (**l_49), p_12, (*l_50)))), 1L)) > g_48), 5))))) > p_13) | 9L) || 1UL) >= 0x4CL));

    ;
    for (g_15 = (-1); (g_15 < 1); g_15++)
    {
        int l_97 = 0x513FE74CL;
        int l_1110 = 0xA351C4A3L;
        char *l_1111 = &g_1112;
        char l_1124 = 4L;
        unsigned char l_1126 = 255UL;
        int *l_1163 = &l_1110;
        int l_1193 = 1L;
        unsigned *l_1378 = (void*)0;
        unsigned *l_1379 = &g_1097;
        int l_1525 = 3L;
        const int *l_1557 = &g_1558;
        int *l_1569 = (void*)0;
        int *l_1570 = (void*)0;
        int *l_1571 = &g_43;
        int *l_1572 = &l_1525;
        int *l_1573 = &g_43;
        int *l_1574 = &g_282;
        int *l_1575 = &l_1110;
        int *l_1576 = &g_139;
        int *l_1577 = &l_97;
        int *l_1578 = (void*)0;
        int *l_1579 = (void*)0;
        int *l_1580 = &l_1236;
        int *l_1581 = &g_509;
        int *l_1582 = &l_97;
        int *l_1583 = &g_213;
        int *l_1584 = &g_282;
        int *l_1585 = &l_1377;
        int *l_1586 = &g_503;
        int *l_1587 = (void*)0;
        int *l_1588 = &l_1110;
        int *l_1589 = &l_1236;
        int *l_1590 = &l_1471;
        int *l_1591 = &l_1497;
        int *l_1592 = &l_1497;
        int *l_1593 = (void*)0;
        int *l_1594 = &g_213;
        int *l_1595 = &l_1525;
        int *l_1596 = &l_97;
        int *l_1597 = &l_1187;
        int *l_1598 = &g_503;
        int *l_1599 = &g_503;
        int *l_1600 = &g_503;
        int *l_1601 = &g_43;
        int *l_1602 = (void*)0;
        int *l_1603 = &l_1110;
        int *l_1604 = &l_1233;
        int *l_1605 = (void*)0;
        int *l_1606 = &l_1236;
        int *l_1607 = &g_139;
        int *l_1608 = (void*)0;
        int *l_1609 = &l_1233;
        int *l_1610 = &l_1525;
        int *l_1611 = &g_111;
        int *l_1612 = &l_1489;
        int *l_1613 = &g_282;
        int *l_1614 = (void*)0;
        int *l_1615 = &g_213;
        int *l_1616 = &l_1236;
        int *l_1617 = &l_1450;
        int *l_1618 = &l_97;
        int *l_1619 = &l_1489;
        int *l_1620 = &l_1236;
        int *l_1621 = &l_1489;
        int *l_1622 = &l_1489;
        int *l_1623 = &l_1187;
        int *l_1624 = &l_1236;
        int *l_1625 = &l_1377;
        int *l_1626 = &l_1525;
        int *l_1627 = (void*)0;
        int *l_1628 = (void*)0;
        int *l_1629 = &l_1525;
        int *l_1630 = &l_97;
        int *l_1631 = &g_43;
        int *l_1632 = &g_282;
        int *l_1633 = &l_1450;
        int *l_1634 = &l_97;
        int *l_1635 = &g_43;
        int l_1637 = (-3L);
        int *l_1638 = &g_282;
        int *l_1639 = &g_111;
        int *l_1640 = &l_1471;
        int *l_1641 = (void*)0;
        int *l_1642 = (void*)0;
        int *l_1643 = &l_97;
        int *l_1644 = &l_1497;
        int *l_1645 = &l_97;
        int *l_1646 = &l_1497;
        int *l_1647 = &l_1187;
        int *l_1648 = &g_282;
        int *l_1649 = &l_1450;
        int *l_1650 = &l_97;
        int *l_1651 = &l_1489;
        int *l_1652 = &l_1636;
        int *l_1653 = &l_1489;
        int *l_1654 = &l_1636;
        int *l_1655 = &l_1450;
        int *l_1656 = &g_503;
        int *l_1657 = &l_1236;
        int *l_1658 = (void*)0;
        int *l_1659 = &l_1110;
        int *l_1660 = &g_509;
        int *l_1661 = &l_1637;
        int *l_1662 = &l_1236;
        int *l_1663 = &l_1187;
        int *l_1664 = &l_1471;
        int *l_1665 = &l_1236;
        int l_1666 = (-7L);
        int *l_1667 = &l_1637;
        int *l_1668 = &l_1236;
        int l_1669 = 0x5A01DB89L;
        int *l_1670 = &l_1187;
        int *l_1671 = &l_1236;
        int *l_1672 = &l_1666;
        int *l_1673 = &l_1489;
        int *l_1674 = &l_1233;
        int l_1675 = (-1L);
        int *l_1676 = &g_282;
        int *l_1677 = &l_1236;
        int *l_1678 = &g_509;
        int *l_1679 = &l_1675;
        int *l_1680 = &l_1666;
        int *l_1682 = &l_97;
        int *l_1683 = &l_1669;
        int *l_1685 = &l_1233;
        int *l_1688 = &g_111;
        int *l_1689 = &l_1377;
        int *l_1690 = &g_111;
    }
    return p_12;


}







static char func_25(char p_26, unsigned p_27, int p_28, unsigned p_29, int p_30)
{
    int *l_41 = (void*)0;
    int *l_42 = &g_43;
    int l_44 = 0x661C4438L;
    l_44 ^= ((*l_42) &= 0x141B6BA0L);
    return p_28;
}







static unsigned short ** func_51(char p_52, unsigned short ** p_53, int p_54)
{
    int *l_76 = &g_43;
    int **l_75 = &l_76;
    (**l_75) = ((void*)0 == l_75);
    (*l_75) = (*l_75);
    return p_53;


}







static const unsigned func_66(const unsigned short * p_67, short p_68, int p_69)
{
    const int l_73 = 0x99275A80L;
    for (g_15 = (-4); (g_15 <= 59); g_15 = safe_add_func_uint16_t_u_u(g_15, 7))
    {
        unsigned char l_72 = 0UL;
        if (l_72)
            break;
    }
    return l_73;
}







static char func_92(unsigned short p_93, int p_94, unsigned short ** const p_95, int * p_96)
{
    short l_391 = 0xDC64L;
    unsigned short l_392 = 1UL;
    int l_419 = 0x4C5D4644L;
    int l_461 = 5L;
    int l_464 = 0L;
    int l_491 = 0xB9C54343L;
    int l_547 = 0x6C5DAC84L;
    int l_587 = 4L;
    int l_596 = 0x2EBB47E7L;
    int l_605 = 6L;
    int l_616 = 0xE71CE679L;
    int l_646 = 4L;
    unsigned l_756 = 0xCED17534L;
    short l_759 = 0x6F16L;
    char *l_848 = (void*)0;
    char *l_849 = (void*)0;
    char *l_850 = &g_740;
    for (g_170 = 0; (g_170 <= 30); ++g_170)
    {
        char l_390 = 0x77L;
        int l_475 = (-2L);
        int l_478 = 3L;
        int l_486 = 0x6C750D59L;
        int l_558 = 2L;
        int l_582 = 0x29F4EE44L;
        int l_619 = 0x205401C7L;
        int l_645 = 1L;
        int *l_650 = &l_547;
        int *l_760 = &l_558;
        int *l_761 = &l_547;
        int *l_762 = (void*)0;
        int *l_763 = (void*)0;
        int *l_764 = &g_139;
        int *l_765 = &g_111;
        int *l_766 = &g_213;
        int *l_767 = &g_509;
        int *l_768 = &l_478;
        int *l_769 = &l_475;
        int *l_770 = &l_475;
        int *l_771 = &l_486;
        int *l_772 = &g_43;
        int *l_773 = &l_616;
        int *l_774 = &g_213;
        int *l_775 = (void*)0;
        int *l_776 = (void*)0;
        int *l_777 = &l_461;
        int *l_778 = (void*)0;
        int *l_779 = &l_616;
        int *l_780 = &l_582;
        int *l_781 = &l_619;
        int *l_782 = &g_43;
        int *l_783 = &l_464;
        int *l_784 = &g_111;
        int *l_785 = &l_616;
        int *l_786 = &l_419;
        int *l_787 = &l_464;
        int *l_788 = &l_582;
        int *l_789 = &l_491;
        int *l_790 = &l_475;
        int *l_792 = &l_596;
        int *l_793 = (void*)0;
        int *l_794 = &l_596;
        int *l_796 = (void*)0;
        int *l_797 = &l_464;
        int *l_798 = &l_605;
        int *l_799 = &g_213;
        int *l_800 = &l_596;
        int *l_801 = &g_503;
        int *l_802 = &l_582;
        int *l_803 = &l_596;
        int *l_804 = &g_503;
        int *l_805 = &g_282;
        int *l_806 = &l_419;
        int *l_807 = &l_596;
        int *l_808 = (void*)0;
        int *l_809 = &l_461;
        int *l_810 = &g_282;
        int *l_811 = &l_558;
        int *l_812 = (void*)0;
        int *l_813 = &g_509;
        int *l_814 = &l_491;
        int *l_815 = &l_596;
        int *l_816 = &l_587;
        int *l_817 = &l_596;
        int *l_818 = (void*)0;
        int *l_819 = (void*)0;
        int *l_820 = &g_139;
        int *l_821 = (void*)0;
        int *l_822 = &l_616;
        int *l_823 = (void*)0;
        int *l_824 = (void*)0;
        int *l_825 = &l_475;
        int *l_826 = &l_605;
        int *l_827 = &l_619;
        int *l_828 = &l_419;
        int *l_829 = &l_461;
        int *l_830 = &l_475;
        int *l_831 = &l_419;
        int *l_832 = (void*)0;
        int *l_833 = &g_509;
        int *l_834 = &l_486;
        int *l_836 = &l_478;
        int *l_837 = &l_558;
        int l_838 = 1L;
        int *l_839 = (void*)0;
        int *l_840 = &g_213;
        int *l_841 = &l_547;
        int *l_842 = &l_838;
        int *l_843 = &l_558;
        unsigned l_844 = 0x223C14E2L;
        unsigned l_847 = 0x15F2E32FL;
        if (l_390)
        {
            char l_410 = 0L;
            int l_430 = 0x82952BEEL;
            int l_441 = 0x6CDAD958L;
            int l_444 = 0L;
            int l_450 = 0x66E7C3D4L;
            int l_457 = 5L;
            int l_459 = 6L;
            int l_460 = (-1L);
            int l_488 = 0xDA3DAFCCL;
            int l_531 = 9L;
            int l_554 = 3L;
            l_392 ^= l_391;
            if ((*g_334))
            {
                int *l_393 = &g_139;
                int *l_394 = &g_139;
                int *l_395 = &g_282;
                int *l_396 = &g_213;
                int *l_397 = &g_213;
                int *l_398 = (void*)0;
                int *l_399 = &g_111;
                int *l_400 = &g_213;
                int *l_401 = (void*)0;
                int *l_402 = (void*)0;
                int *l_403 = &g_213;
                int *l_404 = &g_139;
                int *l_405 = (void*)0;
                int *l_406 = &g_213;
                int *l_407 = &g_213;
                int *l_408 = &g_111;
                int *l_409 = &g_43;
                int *l_411 = &g_282;
                int *l_412 = &g_213;
                int *l_413 = &g_43;
                int *l_414 = (void*)0;
                int *l_415 = &g_111;
                int *l_416 = &g_139;
                int *l_417 = &g_213;
                int *l_418 = (void*)0;
                int *l_420 = &g_213;
                int *l_421 = &l_419;
                int *l_422 = &l_419;
                int *l_423 = &g_139;
                int *l_424 = &g_43;
                int l_425 = 0xE32BAB41L;
                int *l_426 = &g_139;
                int *l_427 = &g_282;
                int *l_428 = (void*)0;
                int *l_429 = &g_43;
                int *l_431 = (void*)0;
                int *l_432 = (void*)0;
                int *l_433 = (void*)0;
                int *l_434 = &g_139;
                int *l_435 = &l_430;
                int *l_436 = &l_430;
                int *l_437 = &l_425;
                int *l_438 = &g_111;
                int *l_439 = (void*)0;
                int *l_440 = &l_419;
                int *l_442 = (void*)0;
                int l_443 = (-1L);
                int *l_445 = &l_444;
                int *l_446 = (void*)0;
                int *l_447 = &l_441;
                int *l_448 = &g_43;
                int *l_449 = &l_425;
                int *l_451 = &g_282;
                int *l_452 = &l_443;
                int *l_453 = &g_213;
                int *l_454 = (void*)0;
                int *l_455 = &g_213;
                int *l_456 = &l_430;
                int *l_458 = (void*)0;
                int *l_462 = (void*)0;
                int *l_463 = &l_419;
                int *l_465 = &g_139;
                int *l_466 = &l_457;
                int *l_467 = &g_43;
                int *l_468 = &g_139;
                int *l_469 = &l_464;
                int *l_470 = (void*)0;
                int *l_471 = &l_443;
                int *l_472 = &g_43;
                int *l_473 = (void*)0;
                int *l_474 = (void*)0;
                int *l_476 = (void*)0;
                int *l_477 = &l_459;
                int *l_479 = &l_457;
                int *l_480 = &l_457;
                int *l_481 = &l_464;
                int *l_482 = &l_464;
                int *l_483 = &l_461;
                int *l_484 = &l_430;
                int *l_485 = &l_430;
                int *l_487 = &l_425;
                int *l_489 = &g_213;
                int *l_490 = (void*)0;
                int *l_492 = &l_488;
                int *l_493 = &l_425;
                int *l_494 = &g_111;
                int *l_495 = (void*)0;
                int *l_496 = &l_475;
                int *l_497 = &g_139;
                int *l_498 = &l_430;
                int *l_499 = &l_460;
                int *l_500 = &l_443;
                int *l_501 = &l_478;
                int *l_502 = &l_488;
                int *l_504 = &l_459;
                int *l_505 = &l_461;
                int *l_506 = &l_457;
                int *l_507 = &l_478;
                int *l_508 = &l_486;
                int *l_510 = &l_475;
                int *l_511 = &l_441;
                int *l_512 = &l_486;
                int *l_513 = &l_443;
                int *l_514 = (void*)0;
                int *l_515 = &g_503;
                int *l_516 = &l_464;
                int l_517 = (-4L);
                int *l_518 = &l_444;
                int *l_519 = &l_460;
                int *l_520 = &l_457;
                int *l_521 = &l_460;
                int *l_522 = &l_425;
                int *l_523 = &l_425;
                int *l_524 = &l_491;
                int *l_525 = &l_475;
                int *l_526 = &l_478;
                int *l_527 = &l_517;
                int *l_528 = &l_430;
                int *l_529 = &l_419;
                int *l_530 = &g_213;
                int *l_532 = &l_425;
                int *l_533 = &g_503;
                int *l_534 = (void*)0;
                int *l_535 = &g_139;
                int *l_536 = &g_282;
                int *l_537 = &l_460;
                int *l_538 = &g_282;
                int *l_539 = &g_503;
                int *l_540 = &g_139;
                int *l_541 = &l_475;
                int *l_542 = (void*)0;
                int *l_543 = (void*)0;
                int *l_544 = &g_43;
                int *l_545 = &g_43;
                int *l_546 = &l_531;
                int *l_548 = &l_459;
                int *l_549 = &l_450;
                int *l_550 = &l_547;
                int *l_551 = (void*)0;
                int *l_552 = &g_282;
                int *l_553 = (void*)0;
                int *l_555 = &l_450;
                int *l_556 = &g_139;
                int *l_559 = &l_459;
                int *l_560 = &g_111;
                int *l_561 = &g_509;
                int *l_562 = &l_460;
                int *l_564 = (void*)0;
                int *l_566 = &g_282;
                int *l_567 = &l_558;
                int *l_568 = (void*)0;
                int *l_569 = &g_213;
                int *l_570 = &g_509;
                int *l_571 = &l_459;
                int *l_572 = (void*)0;
                int *l_573 = &l_478;
                int *l_574 = &l_461;
                int *l_575 = &l_457;
                int *l_576 = &l_478;
                int *l_577 = &l_444;
                int *l_578 = &g_503;
                int *l_579 = &l_475;
                int *l_580 = &l_531;
                int *l_581 = &l_558;
                int *l_583 = &l_443;
                int *l_584 = (void*)0;
                int *l_585 = &l_517;
                int *l_586 = &l_554;
                int *l_588 = &l_430;
                int *l_589 = &l_547;
                int *l_590 = (void*)0;
                int *l_591 = &l_531;
                int *l_592 = &l_486;
                int *l_593 = (void*)0;
                int *l_594 = &l_425;
                int *l_595 = (void*)0;
                int *l_597 = &l_430;
                int *l_598 = &l_558;
                int *l_599 = &g_213;
                int *l_600 = (void*)0;
                int *l_601 = &l_491;
                int *l_602 = &l_517;
                int *l_603 = &l_443;
                int *l_604 = &l_430;
                int *l_606 = &l_425;
                int *l_607 = &l_457;
                int *l_608 = &l_459;
                int *l_609 = &l_478;
                int *l_611 = &g_213;
                int *l_612 = &l_464;
                int *l_613 = (void*)0;
                int *l_614 = &l_587;
                int *l_615 = &g_43;
                int *l_617 = &l_486;
                int *l_618 = &l_531;
                int *l_620 = &l_605;
                int l_621 = 0xF523956FL;
                int *l_622 = &l_460;
                int *l_623 = &l_461;
                int *l_624 = &l_619;
                int *l_625 = &l_461;
                int *l_626 = &l_430;
                int *l_627 = &l_425;
                int *l_628 = &l_547;
                int l_629 = 0xC626FC98L;
                int *l_630 = &l_460;
                int *l_631 = (void*)0;
                int *l_632 = (void*)0;
                int *l_633 = &l_430;
                int *l_634 = &l_554;
                int *l_635 = &l_531;
                int *l_637 = (void*)0;
                int *l_638 = &l_425;
                int *l_639 = &g_503;
                int *l_640 = (void*)0;
                int *l_641 = &l_444;
                g_642--;
                if ((&g_164 == &g_282))
                {
                    unsigned l_647 = 0x42C0B19DL;
                    (*l_571) ^= l_645;
                    ++l_647;
                }
                else
                {
                    if ((*p_96))
                    {
                        return g_287;
                    }
                    else
                    {
                        return p_94;
                    }
                }
                l_650 = &p_94;

                ;
                (*l_638) = 7L;
            }
            else
            {
                unsigned l_653 = 18446744073709551608UL;
                int **l_660 = &l_650;
                int l_680 = (-6L);
                int l_703 = 1L;
                if (l_444)
                {
                    for (l_531 = 0; (l_531 != 7); l_531 = safe_add_func_uint16_t_u_u(l_531, 6))
                    {
                        (*l_650) = (*g_334);
                        --l_653;
                    }
                    if ((*p_96))
                        break;
                }
                else
                {
                    (*l_650) = (safe_add_func_int32_t_s_s((*l_650), (safe_sub_func_int16_t_s_s(g_636, g_642))));
                    if ((*p_96))
                        continue;
                }
                (*l_660) = &l_475;

                ;
                for (l_430 = (-21); (l_430 < (-3)); l_430++)
                {
                    int *l_663 = &g_213;
                    int *l_664 = &l_486;
                    int *l_665 = &l_582;
                    int *l_666 = &l_457;
                    int *l_667 = &g_509;
                    int *l_668 = &l_486;
                    int *l_669 = &l_419;
                    int *l_670 = &l_460;
                    int *l_671 = &l_475;
                    int *l_672 = &l_444;
                    int *l_673 = &l_486;
                    int *l_674 = &l_547;
                    int *l_675 = (void*)0;
                    int *l_676 = (void*)0;
                    int *l_677 = (void*)0;
                    int *l_678 = &l_486;
                    int *l_679 = &g_213;
                    int *l_681 = &g_213;
                    int *l_682 = &l_488;
                    int *l_683 = &l_616;
                    int *l_684 = &l_605;
                    int *l_685 = &l_619;
                    int *l_686 = &l_441;
                    int *l_687 = &l_444;
                    int *l_688 = &g_139;
                    int *l_689 = (void*)0;
                    int *l_690 = &l_616;
                    int *l_691 = &g_111;
                    int *l_692 = &l_457;
                    int *l_693 = &l_680;
                    int *l_694 = (void*)0;
                    int *l_695 = (void*)0;
                    int *l_696 = (void*)0;
                    int *l_697 = &g_282;
                    int *l_698 = (void*)0;
                    int *l_699 = &g_139;
                    int *l_700 = (void*)0;
                    int *l_701 = &l_459;
                    int *l_702 = &l_488;
                    int *l_704 = &l_419;
                    int *l_705 = &g_509;
                    int *l_706 = &l_596;
                    int *l_707 = &l_419;
                    int *l_708 = (void*)0;
                    int *l_709 = &l_680;
                    int *l_710 = &l_619;
                    int *l_711 = &l_587;
                    int *l_712 = &g_282;
                    int *l_713 = &g_503;
                    int *l_714 = &l_703;
                    int *l_715 = &l_531;
                    int *l_716 = &l_486;
                    int *l_717 = &g_503;
                    int *l_718 = &l_547;
                    int *l_719 = &l_461;
                    int *l_720 = (void*)0;
                    int *l_721 = &l_488;
                    int *l_722 = &g_213;
                    int *l_723 = (void*)0;
                    int *l_724 = &l_558;
                    int *l_725 = &l_444;
                    int *l_726 = &l_680;
                    int *l_727 = &l_596;
                    int *l_728 = &l_475;
                    int l_729 = 0xDC905E46L;
                    int *l_730 = &l_486;
                    int *l_731 = (void*)0;
                    int *l_732 = &l_461;
                    int *l_733 = &l_703;
                    int *l_734 = (void*)0;
                    int *l_735 = &l_457;
                    int *l_736 = &l_475;
                    int *l_737 = &l_460;
                    int *l_738 = &g_213;
                    int *l_739 = &l_460;
                    int *l_741 = &l_457;
                    unsigned short l_742 = 0x48ACL;
                    l_742++;
                }
                return p_94;
            }

            ;
        }
        else
        {
            int *l_745 = &l_486;
            int *l_746 = &l_558;
            int *l_747 = &g_282;
            int *l_748 = &g_43;
            int *l_749 = &l_616;
            int *l_750 = &g_509;
            int *l_751 = (void*)0;
            int *l_752 = &g_111;
            int *l_753 = &l_605;
            int *l_754 = &l_486;
            int *l_755 = &g_509;
            (*l_650) = (*g_334);
            g_43 &= (*p_96);
            --l_756;
            g_509 ^= (*l_650);
        }

        ;
        (*l_650) = l_759;
        l_844++;
        (*l_782) |= l_847;
    }
    if (((((*l_850) = (0x50L > p_93)) | ((*g_59) == (*g_59))) && ((l_461 | 0x3FC4L) <= p_94)))
    {
        unsigned char l_853 = 248UL;
        int *l_854 = &g_509;
        unsigned l_857 = 4294967287UL;
        short *l_859 = &l_759;
        int l_877 = 0L;
        (*l_854) = (safe_lshift_func_uint8_t_u_u(func_128(l_853, l_853, &g_43, g_125), 0));
        for (l_392 = (-3); (l_392 < 54); l_392++)
        {
            int **l_858 = &l_854;
            (*l_854) = l_857;
            p_96 = &g_282;

            ;
            (*l_858) = &l_616;

            ;
        }


        ;
        if ((l_859 != &l_759))
        {
            int *l_862 = &g_282;
            g_139 = ((&g_378 != l_849) == (((safe_add_func_uint8_t_u_u(4UL, (&g_378 == &l_853))) | ((((*l_862) = ((*l_854) = (*p_96))) ^ (g_557 & (func_25(p_93, ((**p_95) < 0xC5E3L), g_636, l_759, (*g_334)) <= (**g_59)))) < (**g_59))) >= 0x93L));
        }
        else
        {
            unsigned char l_869 = 0x15L;
            unsigned *l_872 = (void*)0;
            unsigned *l_873 = &g_74;
            unsigned char *l_876 = &g_170;
            (*l_854) = (safe_mod_func_uint8_t_u_u(((void*)0 != &g_740), (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((g_565 = ((*l_854) | l_869)) > ((((((((*l_859) ^= ((-7L) & (p_94 ^ l_869))) & 0x1403L) > l_877) & (**g_59)) | 0x06E108B3L) & g_878) && 249UL)), l_464)), 6UL))));
        }
        g_282 &= ((*l_854) = (-1L));
    }
    else
    {
        char l_890 = 3L;
        int l_898 = 1L;
        char l_910 = 0L;
        int l_1004 = (-3L);
        int l_1016 = (-1L);
        int l_1042 = (-1L);
        int l_1089 = (-1L);
        const unsigned short *l_1107 = &g_15;
        const unsigned short **l_1106 = &l_1107;
        const unsigned short ***l_1105 = &l_1106;
        const unsigned short ****l_1104 = &l_1105;
        int *l_1108 = &l_1089;
        int *l_1109 = &g_282;
        for (g_835 = 0; (g_835 >= 18); g_835++)
        {
            const int *l_887 = &l_605;
            int l_908 = 1L;
            int l_932 = 0x1277F720L;
            int *l_956 = &l_419;
            int *l_957 = &l_932;
            int *l_958 = (void*)0;
            int *l_959 = &g_139;
            int *l_960 = (void*)0;
            int *l_961 = (void*)0;
            int *l_962 = &g_282;
            int *l_963 = &l_491;
            int *l_964 = &l_898;
            int *l_965 = (void*)0;
            int *l_966 = &l_605;
            int *l_967 = &l_491;
            int *l_968 = &g_509;
            int *l_969 = &l_605;
            int *l_970 = &g_503;
            int *l_971 = &l_605;
            int *l_972 = &l_616;
            int *l_973 = &g_282;
            int *l_974 = &g_139;
            int *l_975 = &g_213;
            int *l_976 = &l_932;
            int *l_977 = &l_587;
            int *l_978 = (void*)0;
            int *l_979 = &l_461;
            int *l_980 = &l_464;
            int *l_981 = &l_464;
            int *l_982 = &l_547;
            int *l_983 = &l_596;
            int *l_984 = &g_509;
            int *l_985 = &l_461;
            int *l_986 = (void*)0;
            int *l_987 = &g_282;
            int *l_988 = &g_503;
            int *l_989 = &l_596;
            int *l_990 = &l_908;
            int *l_991 = (void*)0;
            int *l_992 = &g_509;
            int *l_993 = &l_461;
            int *l_994 = &l_898;
            int *l_995 = &l_908;
            int *l_996 = (void*)0;
            int *l_997 = &l_587;
            int *l_998 = (void*)0;
            int l_999 = 1L;
            int *l_1000 = &l_908;
            int *l_1001 = &l_491;
            int *l_1002 = &l_491;
            int *l_1003 = (void*)0;
            int *l_1005 = &l_898;
            int *l_1006 = &l_461;
            int *l_1007 = &l_491;
            int *l_1008 = &l_587;
            int *l_1009 = &l_587;
            int *l_1010 = &l_898;
            int *l_1011 = &l_491;
            int *l_1012 = &g_43;
            int *l_1013 = &g_111;
            int *l_1014 = &l_596;
            int *l_1015 = &l_464;
            int *l_1017 = &g_213;
            int *l_1018 = &l_932;
            int *l_1019 = &l_616;
            int l_1020 = 0L;
            int *l_1021 = &g_282;
            int *l_1022 = &g_43;
            int *l_1023 = &l_1004;
            int *l_1024 = &l_464;
            int *l_1025 = &l_605;
            int *l_1026 = &l_908;
            int l_1027 = 0x89DD40EEL;
            int *l_1028 = &l_1027;
            int *l_1029 = &l_1020;
            int *l_1030 = &g_139;
            int l_1031 = 0L;
            int *l_1032 = &l_587;
            int *l_1033 = &g_213;
            int *l_1034 = &l_1016;
            int *l_1035 = &l_491;
            int *l_1036 = &l_461;
            int *l_1037 = &l_1016;
            int *l_1038 = &g_509;
            int *l_1039 = &l_1031;
            int *l_1040 = &l_932;
            int *l_1041 = &l_1004;
            int *l_1043 = &l_547;
            int *l_1044 = &g_509;
            int *l_1045 = (void*)0;
            int *l_1046 = &g_282;
            int *l_1047 = &l_999;
            int *l_1048 = &l_999;
            int *l_1049 = (void*)0;
            int *l_1050 = &l_1031;
            int *l_1051 = &l_1031;
            int *l_1052 = &l_932;
            int *l_1053 = &l_908;
            int *l_1054 = (void*)0;
            int *l_1055 = &g_282;
            int *l_1056 = &l_461;
            int *l_1057 = &l_1042;
            int *l_1058 = &g_111;
            int *l_1059 = &l_1016;
            int *l_1060 = &l_596;
            int *l_1061 = &l_1020;
            int *l_1062 = &g_43;
            int *l_1063 = &l_908;
            int *l_1064 = &l_616;
            int *l_1065 = &l_419;
            int *l_1066 = &l_547;
            int *l_1067 = &l_461;
            int *l_1068 = &l_908;
            int *l_1069 = &l_932;
            int *l_1070 = &l_605;
            int *l_1071 = &l_1027;
            int *l_1072 = &l_932;
            int *l_1073 = &l_898;
            int *l_1074 = &g_509;
            int *l_1075 = (void*)0;
            int *l_1076 = (void*)0;
            int *l_1077 = &l_908;
            int *l_1078 = &l_464;
            int *l_1079 = &l_616;
            int *l_1080 = &g_43;
            int *l_1081 = (void*)0;
            int *l_1082 = &l_605;
            int *l_1083 = &g_509;
            int *l_1084 = &l_1042;
            int *l_1085 = &l_898;
            int *l_1086 = &l_1020;
            int *l_1087 = &l_908;
            int *l_1088 = &l_461;
            int *l_1090 = (void*)0;
            int *l_1091 = &g_503;
            int *l_1092 = &g_503;
            int *l_1093 = &l_596;
            int *l_1094 = &l_1089;
            int *l_1095 = &l_461;
            for (g_503 = 0; (g_503 >= 20); g_503++)
            {
                int **l_883 = (void*)0;
                unsigned *l_888 = &g_74;
                int *l_889 = &l_461;
                int l_921 = 1L;
                int l_935 = 0xF4DE50B8L;
                g_334 = &g_139;

                ;
                (*l_889) = (p_94 >= (~((!g_213) == ((safe_unary_minus_func_int16_t_s((safe_mod_func_uint16_t_u_u(l_646, func_128(p_94, ((*l_888) = func_128(g_557, g_139, l_887, g_565)), &g_164, l_464))))) && 8L))));
                g_213 = (*g_334);
                if (l_890)
                {
                    for (g_251 = 29; (g_251 < 4); g_251 = safe_sub_func_uint8_t_u_u(g_251, 4))
                    {
                        g_334 = &g_509;

                        ;
                        return l_756;
                    }
                }
                else
                {
                    unsigned l_951 = 18446744073709551615UL;
                    unsigned short *l_952 = &g_48;
                    unsigned *l_955 = &l_756;
                    for (g_46 = (-21); (g_46 == 27); g_46++)
                    {
                        int l_897 = 3L;
                        int *l_899 = &l_616;
                        int *l_900 = &l_898;
                        int *l_901 = &l_547;
                        int *l_902 = &l_605;
                        int *l_903 = &g_111;
                        int *l_904 = (void*)0;
                        int *l_905 = &g_282;
                        int *l_906 = &l_491;
                        int *l_907 = &l_616;
                        int *l_909 = &g_43;
                        int *l_911 = &l_908;
                        int *l_912 = &l_908;
                        int *l_913 = &g_43;
                        int *l_914 = &l_419;
                        int *l_915 = (void*)0;
                        int *l_916 = &l_461;
                        int *l_917 = &l_491;
                        int *l_918 = &l_898;
                        int *l_919 = &l_605;
                        int *l_920 = (void*)0;
                        int *l_922 = &g_139;
                        int *l_923 = (void*)0;
                        int *l_924 = &g_43;
                        int *l_925 = &g_139;
                        int *l_926 = &g_139;
                        int *l_927 = (void*)0;
                        int *l_928 = &l_605;
                        int *l_929 = &g_43;
                        int *l_930 = (void*)0;
                        int *l_931 = &l_491;
                        int *l_933 = &l_461;
                        int *l_934 = &g_139;
                        int *l_936 = &l_461;
                        int *l_937 = &l_587;
                        int *l_938 = &l_616;
                        int *l_939 = (void*)0;
                        int *l_940 = &l_908;
                        int *l_941 = &l_935;
                        int *l_942 = &g_43;
                        int *l_943 = &l_932;
                        int *l_944 = &g_111;
                        unsigned char l_945 = 0UL;
                    }
                    if (((func_25(p_94, p_93, g_503, ((*l_955) = (safe_unary_minus_func_int8_t_s(((func_128(p_94, (safe_rshift_func_uint16_t_u_u(((**p_95) |= l_951), (l_587 ^= ((*l_952)--)))), &p_94, g_835) != (*p_96)) < p_94)))), (*p_96)) & 7L) <= l_910))
                    {
                        return g_795;
                    }
                    else
                    {
                        return g_791;
                    }
                }
            }

            ;
            g_1097--;
            (*l_969) |= (*l_968);
            return p_93;
        }
        (*l_1109) |= (((*l_1108) &= (func_128(l_1004, (safe_sub_func_uint8_t_u_u(g_835, (safe_mod_func_int32_t_s_s((p_93 <= ((((void*)0 != l_1104) <= ((((void*)0 != &g_125) >= ((void*)0 == &l_910)) == g_111)) != 0UL)), g_170)))), &l_419, p_94) > g_503)) >= 0xC368378CL);
    }


    return p_94;
}







static unsigned short ** const func_98(short p_99, unsigned p_100, const int p_101, int p_102, unsigned short p_103)
{
    int **l_104 = (void*)0;
    int *l_106 = &g_43;
    int **l_105 = &l_106;
    int *l_110 = &g_111;
    unsigned short ***l_135 = &g_59;
    const int *l_252 = &g_111;
    int l_257 = (-1L);
    int l_279 = 0x03F3C918L;
    int l_286 = 0xC6410FA4L;
    unsigned char l_304 = 0xD8L;
    unsigned l_343 = 0UL;
    unsigned short *l_387 = &g_48;
    unsigned short ** const l_386 = &l_387;
    (*l_105) = &g_43;
    (*l_110) = (safe_div_func_uint32_t_u_u(g_15, (safe_unary_minus_func_int32_t_s(g_74))));
    for (p_100 = (-21); (p_100 == 32); p_100 = safe_add_func_int32_t_s_s(p_100, 8))
    {
        unsigned short * const *l_122 = (void*)0;
        int l_123 = (-5L);
        unsigned *l_124 = &g_125;
        unsigned short ***l_134 = &g_59;
        unsigned short ****l_133 = &l_134;
        int l_202 = 0x2D80D5DAL;
        unsigned l_249 = 0x6E748EE0L;
    }
    (*l_105) = (void*)0;

    ;
    return g_59;


}







static unsigned short * func_116(unsigned short * const * p_117, unsigned p_118, short p_119, int p_120, char p_121)
{
    unsigned *l_145 = &g_125;
    int *l_150 = &g_139;
    const int *l_163 = &g_164;
    int l_183 = (-10L);
    int l_187 = 1L;
    g_139 = p_121;
    (*l_150) = ((safe_lshift_func_uint16_t_u_u((**g_59), 14)) != (safe_lshift_func_uint16_t_u_s(0UL, 9)));
    if ((((*l_150) &= g_125) && (safe_add_func_uint16_t_u_u((*l_150), (safe_mod_func_int32_t_s_s(g_139, (*l_150)))))))
    {
        unsigned l_155 = 1UL;
        (*l_150) = l_155;
        return (*g_59);


    }
    else
    {
        unsigned l_162 = 7UL;
        unsigned char *l_169 = &g_170;
        (*l_150) = (safe_rshift_func_uint8_t_u_u(((*l_169) = (safe_rshift_func_int16_t_s_u(func_128(((*l_169) ^= (safe_rshift_func_uint8_t_u_s(l_162, ((l_162 || ((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s(p_121, l_162)), p_121)) | 0xB158L)) | g_46)))), p_120, l_163, l_162), 12))), g_15));
    }
    if ((safe_lshift_func_uint8_t_u_u(p_120, g_170)))
    {
        short *l_175 = &g_176;
        const int *l_177 = &g_139;
        (*l_150) = (*l_177);
    }
    else
    {
        int *l_178 = &g_139;
        int *l_179 = &g_139;
        int l_180 = 1L;
        int *l_181 = &l_180;
        int *l_182 = &g_111;
        int *l_184 = &l_180;
        int *l_185 = &l_183;
        int *l_186 = (void*)0;
        int *l_188 = &g_111;
        int *l_189 = &l_187;
        int *l_190 = &g_139;
        int *l_191 = (void*)0;
        int *l_192 = &l_187;
        int *l_193 = &l_183;
        int *l_194 = (void*)0;
        int l_195 = 1L;
        int *l_196 = &l_187;
        int *l_197 = (void*)0;
        unsigned short l_198 = 0xE0D0L;
        int **l_201 = &l_188;
        l_198++;
        (*l_201) = &l_180;

        ;
    }
    return (*g_59);


}







static unsigned char func_128(unsigned char p_129, unsigned p_130, const int * p_131, const unsigned p_132)
{
    unsigned short l_140 = 0x02ACL;
    for (g_111 = (-13); (g_111 != (-23)); g_111 = safe_sub_func_int32_t_s_s(g_111, 6))
    {
        int *l_138 = &g_139;
        (*l_138) &= (*p_131);
    }
    return l_140;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_610, "g_610", print_hash_value);
    transparent_crc(g_636, "g_636", print_hash_value);
    transparent_crc(g_642, "g_642", print_hash_value);
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    transparent_crc(g_878, "g_878", print_hash_value);
    transparent_crc(g_1096, "g_1096", print_hash_value);
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1112, "g_1112", print_hash_value);
    transparent_crc(g_1347, "g_1347", print_hash_value);
    transparent_crc(g_1355, "g_1355", print_hash_value);
    transparent_crc(g_1376, "g_1376", print_hash_value);
    transparent_crc(g_1518, "g_1518", print_hash_value);
    transparent_crc(g_1558, "g_1558", print_hash_value);
    transparent_crc(g_1681, "g_1681", print_hash_value);
    transparent_crc(g_1684, "g_1684", print_hash_value);
    transparent_crc(g_1691, "g_1691", print_hash_value);
    transparent_crc(g_1713, "g_1713", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
