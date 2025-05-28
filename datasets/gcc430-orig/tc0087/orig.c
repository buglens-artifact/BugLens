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



static int g_2 = 0xFE0A8EACL;
static char g_79 = 0x0DL;
static unsigned char g_96 = 0UL;
static volatile int *g_103 = (void*)0;
static volatile int **g_102 = &g_103;
static const int *g_219 = &g_2;
static unsigned g_284 = 1UL;
static int g_287 = (-5L);
static volatile unsigned char g_372 = 0x58L;
static unsigned char g_375 = 5UL;
static volatile char g_539 = (-1L);
static unsigned char g_693 = 1UL;
static volatile unsigned g_706 = 8UL;



static char func_1(void);
static unsigned func_6(unsigned p_7, int p_8, unsigned p_9, int p_10, int p_11);
static unsigned func_15(int p_16);
static int func_22(short p_23, unsigned p_24, const unsigned short p_25);
static unsigned func_32(short p_33, const short p_34, int p_35, unsigned p_36, int p_37);
static char func_38(unsigned char p_39, short p_40, unsigned p_41, const unsigned p_42, short p_43);
static unsigned func_44(unsigned char p_45, short p_46);
static unsigned char func_49(char p_50, short p_51, char p_52, const unsigned short p_53, char p_54);
static char func_55(int p_56, char p_57, unsigned p_58);
static int func_59(unsigned p_60);
static char func_1(void)
{
    char l_14 = (-7L);
    const int * const l_721 = (void*)0;
    int *l_722 = &g_2;
    for (g_2 = (-27); (g_2 >= (-21)); g_2 = safe_add_func_int16_t_s_s(g_2, 2))
    {
        short l_5 = (-1L);
        int *l_711 = &g_287;
    }
    (*g_102) = (*g_102);
    (*l_722) = (((safe_lshift_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(l_14, g_287)) || (l_14 || (l_14 , 0L))) >= ((safe_unary_minus_func_uint16_t_u(g_375)) <= (l_14 || ((safe_sub_func_int16_t_s_s(((*g_102) == l_721), g_693)) || l_14)))), 3)) || 4UL) , (*g_219));
    return g_96;
}







static unsigned func_6(unsigned p_7, int p_8, unsigned p_9, int p_10, int p_11)
{
    return g_706;
}







static unsigned func_15(int p_16)
{
    int l_21 = 1L;
    unsigned l_206 = 18446744073709551607UL;
    unsigned short l_376 = 3UL;
    const short l_377 = 0x9206L;
    int *l_566 = &g_287;
    char l_578 = (-7L);
    int *l_639 = &g_2;
    int **l_710 = &l_639;
    int ***l_709 = &l_710;
    (*l_566) = ((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((l_21 >= g_2) < func_22(((safe_rshift_func_uint8_t_u_s((((safe_mod_func_uint8_t_u_u(((l_21 <= (l_21 && (safe_rshift_func_uint16_t_u_u((func_32(g_2, (func_38((func_44((p_16 ^ l_21), (safe_mul_func_uint8_t_u_u((((func_49(func_55(func_59((safe_rshift_func_uint16_t_u_s(g_2, ((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((p_16 ^ 0xB4L), 0xF5E17530L)) >= p_16), g_2)) > (-1L))))), l_206, g_2), g_2, l_206, p_16, l_21) < p_16) >= g_284) || 4294967287UL), g_2))) , p_16), l_376, p_16, l_377, l_376) , g_284), p_16, p_16, l_21) != p_16), l_206)))) & g_2), l_377)) ^ (-1L)) & 0x8C14L), 3)) < p_16), p_16, p_16)), p_16)), 0xD292L)) & 0UL);
    if ((*l_566))
    {
        int l_575 = 0xE7E522FBL;
        (*l_566) = l_575;
lbl_581:
        (*l_566) = (((p_16 == (safe_sub_func_uint16_t_u_u(func_38(g_375, (((4UL ^ 255UL) , (p_16 | (-4L))) != (&p_16 != &l_575)), ((void*)0 != &l_575), (*l_566), p_16), p_16))) || l_578) ^ p_16);
        for (g_287 = 24; (g_287 == (-20)); --g_287)
        {
            int **l_582 = &l_566;
            if (l_377)
                goto lbl_581;
            (*l_582) = &p_16;
        }
    }
    else
    {
        int l_583 = 0x6FC082FCL;
        int ***l_619 = (void*)0;
        unsigned char l_635 = 254UL;
        unsigned char l_674 = 6UL;
        int *l_684 = &g_2;
        int *l_707 = (void*)0;
        int *l_708 = &g_287;
        if ((p_16 , l_583))
        {
            int **l_589 = &l_566;
            int ***l_588 = &l_589;
            const unsigned l_611 = 0x099D7967L;
            for (p_16 = 23; (p_16 == 7); --p_16)
            {
                short l_596 = 0x1246L;
                const int **l_632 = (void*)0;
                int l_642 = 0x37EDA2F2L;
                for (g_79 = 0; (g_79 < (-22)); g_79 = safe_sub_func_uint16_t_u_u(g_79, 5))
                {
                    const short l_602 = (-1L);
                    (***l_588) = (((((((((((void*)0 == l_588) && g_539) , g_2) , (safe_mul_func_int8_t_s_s(func_38(g_539, (safe_sub_func_int8_t_s_s(0L, (safe_add_func_int32_t_s_s(1L, (func_38(l_596, ((safe_rshift_func_uint16_t_u_u((+(((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(((g_375 >= g_96) || p_16))), (-9L))) || g_375) , 1UL)), p_16)) != 4294967292UL), p_16, l_602, (*l_566)) <= p_16))))), p_16, g_375, l_602), p_16))) != p_16) , 0x2F17L) ^ (-9L)) || 0x2FL) , g_96) && 0L);
                    (*l_566) = (((func_44(((safe_rshift_func_int16_t_s_u((p_16 < (0x3AL < ((safe_mul_func_uint8_t_u_u((~(l_583 < (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_611, func_44(p_16, (safe_mod_func_uint8_t_u_u(0x41L, func_38((*l_566), l_596, ((5UL < (*l_566)) , l_583), p_16, l_602)))))), 0xF178L)))), 0x30L)) , (-1L)))), g_375)) != g_284), g_79) == 0UL) , (void*)0) == &p_16);
                    (*l_566) = (***l_588);
                }
                if (p_16)
                {
                    unsigned l_616 = 18446744073709551615UL;
                    int l_633 = 0x8CF0BF98L;
                    (*l_566) = (safe_lshift_func_int16_t_s_s((l_616 ^ ((safe_mul_func_uint16_t_u_u(g_375, (***l_588))) < ((g_79 , l_616) > 0xDF94L))), ((+(l_619 == ((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(p_16, func_44((l_616 == (-9L)), p_16))), p_16)) , &l_589))) >= g_96)));
                    if ((g_96 > p_16))
                    {
                        int * const * const l_625 = &l_566;
                        int * const * const *l_624 = &l_625;
                        const int ***l_634 = &l_632;
                        (**l_589) = (((l_616 , l_624) == &g_102) != (((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(((g_372 > ((((safe_add_func_uint32_t_u_u((***l_588), p_16)) > ((p_16 | ((((*l_624) != l_632) , 0x92L) ^ 255UL)) < l_616)) , p_16) , 0x82AB1F78L)) , 0x230D7637L), g_287)), 6)) <= (*l_566)) , l_633));
                        if ((*l_566))
                            continue;
                        (*l_634) = l_632;
                        (*g_102) = (*g_102);
                    }
                    else
                    {
                        if ((***l_588))
                            break;
                    }
                }
                else
                {
                    (*g_102) = (*g_102);
                    (**l_589) = l_635;
                    (**l_589) = p_16;
                }
                if ((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((-10L))), (*l_566))))
                {
                    char l_643 = (-6L);
                    l_639 = l_639;
                    for (g_287 = 0; (g_287 <= 6); g_287++)
                    {
                        int *l_644 = &l_642;
                        if (p_16)
                            break;
                        l_642 = (~p_16);
                        (*l_644) = (0UL == (l_643 >= p_16));
                    }
                    if (p_16)
                        continue;
                }
                else
                {
                    int *l_645 = &l_583;
                    if (p_16)
                    {
                        if ((**l_589))
                            break;
                        l_645 = &p_16;
                        if (p_16)
                            break;
                    }
                    else
                    {
                        (*l_566) = func_22(p_16, ((safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(g_372, (p_16 <= (!g_284)))) & (((safe_rshift_func_int16_t_s_s(0x3B0AL, 8)) ^ (func_59(p_16) | g_284)) , g_375)), p_16)) , p_16), (*l_566));
                    }
                }
                (*l_589) = (**l_588);
            }
            for (g_79 = 0; (g_79 == (-25)); g_79 = safe_sub_func_int16_t_s_s(g_79, 3))
            {
                (*l_566) = 1L;
            }
            (**l_588) = (*l_589);
        }
        else
        {
            unsigned l_675 = 0x274AF30EL;
            int *l_683 = &g_2;
            int l_685 = 0x9948CD79L;
            (*l_566) = (((safe_sub_func_uint8_t_u_u((0x0C99L || 0UL), (-4L))) > g_287) , func_38(g_372, ((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((*l_639), (-10L))), (((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((g_96 && p_16) >= g_287), (*l_566))) , 4L), l_675)), 9L)), g_287)), l_675)), 2)) != 0x26L) | p_16))) <= g_284), g_375, (*l_566), (*l_566)));
            if (((p_16 & (*l_639)) & g_96))
            {
                int **l_676 = &l_566;
                (*l_676) = &p_16;
                if ((safe_mul_func_int8_t_s_s((func_22(g_2, g_539, (safe_rshift_func_uint16_t_u_s(0xB5D0L, g_284))) , func_38((safe_mod_func_int8_t_s_s(((**l_676) , ((p_16 , (g_287 , (*g_102))) == (void*)0)), g_287)), (**l_676), (**l_676), g_372, p_16)), g_2)))
                {
                    int l_689 = 0x8C261FC0L;
                    int * const *l_692 = &l_566;
                    (*l_676) = l_683;
                    (*l_676) = l_684;
                    l_685 = (p_16 , (0xB915AE76L <= ((void*)0 != &g_102)));
                    if ((safe_unary_minus_func_int16_t_s((safe_rshift_func_int8_t_s_s(((*l_684) , g_375), (*l_683))))))
                    {
                        p_16 = 0xD053B8ADL;
                    }
                    else
                    {
                        return g_372;
                    }
                }
                else
                {
                    (*g_102) = (*g_102);
                    (*l_566) = p_16;
                    (*l_676) = &p_16;
                    for (g_287 = 0; (g_287 < 1); ++g_287)
                    {
                        p_16 = ((g_79 & 4L) & (&p_16 == (((void*)0 != l_639) , (*g_102))));
                        g_219 = &p_16;
                        if ((*l_684))
                            continue;
                    }
                }
            }
            else
            {
                return g_539;
            }
        }
        (*l_708) = (g_706 & (*l_566));
        (*l_708) = (l_709 != (void*)0);
        p_16 = (*l_708);
    }
    return g_693;
}







static int func_22(short p_23, unsigned p_24, const unsigned short p_25)
{
    int *l_484 = &g_2;
    int **l_483 = &l_484;
    int ***l_482 = &l_483;
    int l_485 = 0L;
    if (p_25)
    {
        const unsigned l_481 = 0UL;
        int **l_488 = &l_484;
        char l_489 = (-10L);
        int *l_490 = &g_287;
        (*l_490) = (safe_mod_func_int16_t_s_s(((p_23 , l_481) && ((((((l_482 == &l_483) , (*l_482)) == (void*)0) | ((l_485 , (safe_sub_func_uint8_t_u_u(((((***l_482) , l_488) == &g_219) < p_24), 0UL))) , p_25)) , l_489) , g_2)), 0x745AL));
lbl_491:
        (*l_488) = (*l_483);
        if ((&l_490 == &g_103))
        {
            if (p_25)
                goto lbl_491;
        }
        else
        {
            return p_25;
        }
        (*l_490) = (safe_sub_func_uint8_t_u_u(g_2, (*l_490)));
    }
    else
    {
        unsigned l_514 = 0x65FCF396L;
        char l_519 = (-10L);
        int l_535 = 0x75D2A48CL;
        if ((&g_103 != &g_219))
        {
            for (g_375 = 2; (g_375 == 22); g_375 = safe_add_func_int8_t_s_s(g_375, 7))
            {
                int *l_496 = &g_287;
                (*l_496) = p_23;
            }
        }
        else
        {
            int *l_497 = &g_287;
            int l_525 = 9L;
            unsigned char l_538 = 255UL;
            (*l_497) = (p_23 >= (**l_483));
            for (g_375 = (-3); (g_375 != 51); ++g_375)
            {
                int *l_513 = &g_2;
                int ** const *l_520 = &l_483;
                int l_557 = 1L;
                int * const l_562 = &g_2;
                for (g_284 = 23; (g_284 > 31); g_284 = safe_add_func_uint8_t_u_u(g_284, 7))
                {
                    int *l_504 = (void*)0;
                    int ***l_507 = &l_483;
                    unsigned short l_526 = 0UL;
                    for (g_96 = 0; (g_96 < 58); g_96 = safe_add_func_int8_t_s_s(g_96, 6))
                    {
                        char l_527 = 4L;
                        (**l_482) = l_504;
                        (*l_497) = (safe_sub_func_uint32_t_u_u(4294967295UL, (((void*)0 != l_507) < ((func_32(g_287, g_2, ((safe_mod_func_uint8_t_u_u((((safe_unary_minus_func_int32_t_s(0x9954C030L)) >= ((safe_sub_func_int32_t_s_s(((*g_102) == l_513), (p_25 != l_514))) > g_375)) || (-2L)), g_287)) , 1L), p_24, p_23) , (void*)0) == (void*)0))));
                        (*l_497) = ((safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((-5L) >= 8L), l_519)) || func_44(((&g_102 == l_520) , (p_25 , (((g_375 < ((g_287 != 0x6AL) | p_25)) && g_375) != g_79))), p_24)), g_375)) ^ g_375);
                        (*l_497) = ((p_25 ^ (safe_add_func_uint16_t_u_u(((l_525 || (l_526 != (p_23 != g_375))) && p_24), (func_32(g_287, g_284, l_527, g_2, p_23) != g_2)))) ^ g_375);
                    }
                    (*g_102) = (*g_102);
                    for (p_23 = 25; (p_23 < 13); --p_23)
                    {
                        (*g_102) = (*g_102);
                        (**l_520) = ((((safe_mod_func_uint8_t_u_u(0x00L, (((*l_497) || (safe_unary_minus_func_uint8_t_u((*l_497)))) | (func_44(p_23, p_25) >= 1UL)))) , ((safe_add_func_uint16_t_u_u(l_535, g_2)) , (void*)0)) == &g_2) , (**l_482));
                    }
                }
                (*l_497) = (((!g_2) >= ((safe_mod_func_uint16_t_u_u(((g_287 , ((l_538 <= (g_539 , l_514)) && (safe_mul_func_int8_t_s_s(((~((func_38((safe_rshift_func_int16_t_s_s(0xFC9FL, 14)), g_372, p_25, p_25, g_375) , g_539) && (*l_497))) | 0xFD72L), g_375)))) > p_23), 0x9B50L)) | 0x14L)) <= 4294967295UL);
                for (l_535 = 0; (l_535 > 12); ++l_535)
                {
                    (*l_497) = (*l_513);
                    if (l_519)
                        break;
                    for (p_24 = (-25); (p_24 != 16); ++p_24)
                    {
                        (*l_497) = (safe_rshift_func_uint8_t_u_u(((void*)0 != &g_102), 0));
                        (*l_497) = func_59(l_519);
                    }
                    (*g_102) = (*g_102);
                }
                if ((*l_497))
                {
                    unsigned short l_555 = 0xD176L;
                    const int l_556 = 0L;
                    l_557 = ((((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_int8_t_s_s(g_96, ((0UL || (((**l_520) != (*g_102)) , ((p_24 , ((!(!(safe_mod_func_uint8_t_u_u((*l_497), p_23)))) | (g_372 ^ l_555))) >= l_519))) != l_556))) || 7L))) > (*l_497)) <= l_556) && p_25);
                    g_287 = p_25;
                    for (g_287 = 0; (g_287 == 9); g_287++)
                    {
                        int l_560 = 0x60AF2002L;
                        int *l_561 = &l_525;
                        (*l_561) = l_560;
                        (*g_102) = (*g_102);
                    }
                }
                else
                {
                    if (((void*)0 != &g_102))
                    {
                        (*l_497) = func_44((l_562 != (void*)0), (safe_add_func_uint8_t_u_u(p_25, p_24)));
                    }
                    else
                    {
                        int *l_565 = &g_287;
                        l_565 = (**l_520);
                    }
                    return p_23;
                }
            }
        }
        g_287 = l_519;
        (**l_482) = (*l_483);
    }
    return p_24;
}







static unsigned func_32(short p_33, const short p_34, int p_35, unsigned p_36, int p_37)
{
    int *l_382 = &g_2;
    int l_386 = 0x59777C8BL;
    int ***l_395 = (void*)0;
    int l_425 = 0x3FBB26B3L;
    int **l_478 = &l_382;
    l_382 = l_382;
lbl_443:
    for (g_79 = (-9); (g_79 > (-3)); ++g_79)
    {
        volatile int ***l_385 = &g_102;
        (*l_385) = &g_103;
        l_386 = 1L;
    }
    if (((safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((&l_382 == &l_382), func_38((g_96 , 255UL), g_372, (((((p_36 , l_395) != l_395) & 0L) , 2UL) && p_37), g_284, (*l_382)))), 255UL)), g_2)) == 0xF3L), 0x1BAE108FL)) && 0x0925L))
    {
        (*g_102) = (*g_102);
        (*g_102) = (void*)0;
    }
    else
    {
        unsigned l_396 = 3UL;
        unsigned short l_435 = 0x7469L;
        unsigned l_442 = 0xFA77B218L;
        int *l_449 = &g_2;
        int *l_477 = &g_287;
        if ((*l_382))
        {
            int * const *l_401 = &l_382;
            int l_439 = 0x18717FDFL;
            if (l_396)
            {
                unsigned l_397 = 0x398F459FL;
                int **l_409 = &l_382;
                short l_426 = 0L;
                if ((l_397 == 1L))
                {
                    const int **l_402 = (void*)0;
                    for (p_36 = 0; (p_36 >= 25); p_36 = safe_add_func_uint16_t_u_u(p_36, 1))
                    {
                        int **l_400 = &l_382;
                        int ***l_410 = &l_409;
                        (*l_400) = &p_37;
                        (*l_410) = (((l_401 != l_402) < (safe_mul_func_uint8_t_u_u(p_37, (safe_add_func_uint8_t_u_u(g_375, (&g_219 == (void*)0)))))) , ((safe_mod_func_uint32_t_u_u(0x35255373L, p_33)) , l_409));
                        if (p_33)
                            continue;
                        (***l_410) = (***l_410);
                    }
                }
                else
                {
                    const int **l_428 = &g_219;
                    const int ***l_427 = &l_428;
                    (*l_427) = &g_219;
                    (**l_427) = &p_37;
                    p_37 = func_44((((safe_mod_func_uint32_t_u_u((p_34 , 1UL), g_2)) , g_79) , l_435), g_284);
                }
            }
            else
            {
                volatile int ***l_436 = &g_102;
                (*l_436) = &g_103;
            }
            l_439 = (safe_lshift_func_int8_t_s_s(g_2, 0));
            l_442 = ((l_396 >= 255UL) , l_435);
            if (g_2)
                goto lbl_443;
        }
        else
        {
            int **l_446 = &l_382;
            const int l_475 = 0xFAF9431CL;
            for (g_79 = 0; (g_79 >= (-24)); g_79 = safe_sub_func_int8_t_s_s(g_79, 1))
            {
                p_37 = p_33;
            }
            (*l_446) = &p_37;
            (*l_446) = (*l_446);
            for (p_33 = 0; (p_33 == (-3)); p_33 = safe_sub_func_int16_t_s_s(p_33, 8))
            {
                unsigned short l_452 = 65535UL;
                int *l_476 = &g_287;
                (*l_446) = l_449;
                g_287 = (1UL | ((**l_446) , (g_79 < ((safe_sub_func_uint8_t_u_u(func_44((*l_449), l_452), l_452)) == p_36))));
                l_386 = (safe_mod_func_int16_t_s_s(0x825BL, 0x2B72L));
                (*l_476) = (safe_rshift_func_uint16_t_u_s(func_44((((p_34 <= 0xC8L) , &p_37) != ((g_96 && ((safe_sub_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(g_79, (safe_mul_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_37, func_44((((safe_lshift_func_int16_t_s_s((p_34 && (safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(func_38((g_375 <= 1L), p_34, g_372, (*l_449), p_36), p_36)), 5))), 9)) , &g_102) != &g_102), p_37))), g_284)) , &g_103) == (void*)0), 0xD69EL)))) < l_452), p_35)) == l_475) & (**l_446)), (*l_382))) == 8L)) , (*l_446))), (**l_446)), p_36));
            }
        }
        (*l_477) = p_34;
        l_449 = &p_37;
    }
    (*l_478) = &p_37;
    return g_2;
}







static char func_38(unsigned char p_39, short p_40, unsigned p_41, const unsigned p_42, short p_43)
{
    short l_378 = 0x4C82L;
    int *l_381 = &g_287;
    (*l_381) = ((p_41 , p_40) & (l_378 || (safe_mod_func_int8_t_s_s(p_40, l_378))));
    g_287 = (*l_381);
    return (*l_381);
}







static unsigned func_44(unsigned char p_45, short p_46)
{
    unsigned short l_363 = 0UL;
    int *l_371 = &g_287;
    int ** const l_370 = &l_371;
    unsigned short l_373 = 0x1B93L;
    unsigned short l_374 = 0x4B76L;
    l_363 = p_46;
    l_374 = ((g_2 | 1UL) > ((safe_rshift_func_uint16_t_u_u(((g_372 , l_373) , p_46), p_46)) < p_46));
    (*g_102) = (*g_102);
    return g_375;
}







static unsigned char func_49(char p_50, short p_51, char p_52, const unsigned short p_53, char p_54)
{
    unsigned short l_271 = 65529UL;
    const int **l_281 = &g_219;
    const int ***l_280 = &l_281;
    int l_294 = 0xD664E423L;
    int *l_324 = &g_287;
    int **l_323 = &l_324;
    if (((((p_53 && 0xC6L) != (-9L)) , (func_55(((p_52 || ((p_54 , func_55((l_271 & (g_2 <= (safe_mod_func_uint16_t_u_u(l_271, p_54)))), g_2, g_2)) || 0UL)) , 0L), l_271, p_50) >= 0xE8L)) == 0x11L))
    {
        int *l_288 = &g_2;
        int **l_296 = (void*)0;
        int ***l_295 = &l_296;
        int *l_303 = &g_287;
        for (g_79 = (-19); (g_79 <= (-8)); g_79 = safe_add_func_uint16_t_u_u(g_79, 2))
        {
            unsigned char l_285 = 0x09L;
            int *l_286 = &g_287;
            (*l_286) = (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(g_96, (((((p_50 , l_280) != (void*)0) & ((((safe_add_func_int32_t_s_s(p_51, 0UL)) , p_52) , &g_102) != &l_281)) ^ g_2) != g_284))) && p_50), l_285));
            (**l_280) = l_288;
            (*l_286) = p_54;
            (*l_281) = l_288;
        }
        if ((p_50 | func_59(p_54)))
        {
            unsigned short l_289 = 0x5A12L;
            l_289 = p_52;
        }
        else
        {
            int **l_290 = &l_288;
            int *l_291 = &g_287;
            (*l_291) = (p_54 < (l_290 != &l_288));
            l_294 = (safe_add_func_uint8_t_u_u(((void*)0 != &l_281), g_284));
            (*l_291) = (-1L);
            (*l_291) = ((l_295 == ((safe_lshift_func_uint16_t_u_u((((p_51 != (safe_add_func_uint8_t_u_u((***l_280), func_59((+(~(func_59(func_59(g_96)) <= (+g_284)))))))) | (safe_lshift_func_uint16_t_u_s(p_54, g_287))) | p_53), 4)) , (void*)0)) ^ 0x9764L);
        }
        (*l_303) = (***l_280);
        if (((void*)0 != (*l_295)))
        {
            l_294 = ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((p_51 < p_51) <= ((safe_rshift_func_uint16_t_u_s((func_55(g_96, ((((safe_sub_func_uint32_t_u_u((p_51 > (!p_52)), p_50)) >= ((safe_lshift_func_uint8_t_u_s((*l_288), 7)) == g_284)) , ((safe_add_func_int16_t_s_s((~p_52), p_50)) == 65535UL)) , p_50), p_51) > 0x6BA4L), 1)) , (***l_280))) , p_51), p_52)), p_54)) || g_287);
            for (p_51 = (-2); (p_51 < 25); p_51++)
            {
                return g_287;
            }
            return p_51;
        }
        else
        {
            return p_53;
        }
    }
    else
    {
        short l_322 = 0xAC0CL;
        int *l_352 = &g_287;
        if ((((safe_sub_func_int8_t_s_s((!0L), p_52)) & (((safe_mul_func_uint16_t_u_u(((void*)0 != &g_103), (func_59(l_322) == ((g_2 , (((&g_287 == (*l_281)) , (*l_280)) != l_323)) || 0x8135AAF9L)))) & g_2) , l_322)) & g_284))
        {
lbl_342:
            (*g_102) = (*g_102);
            return p_53;
        }
        else
        {
            unsigned char l_331 = 0UL;
            if ((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s(func_55(((((p_53 != g_79) >= ((safe_mul_func_int16_t_s_s(0xC5D2L, 65535UL)) | (**l_323))) , (*l_324)) , (0xE9EDABCFL || ((l_331 < l_322) && 0UL))), (**l_323), g_96), 0x31EB3652L)), g_287)))
            {
                int *l_335 = &g_287;
lbl_334:
                for (l_331 = 0; (l_331 < 17); ++l_331)
                {
                    (*g_102) = (*g_102);
                    return g_79;
                }
                if (p_54)
                {
                    if (g_287)
                        goto lbl_334;
                    (*l_324) = l_331;
                    if ((***l_280))
                    {
                        (**l_323) = p_54;
                    }
                    else
                    {
                        (*g_102) = (*g_102);
                    }
                }
                else
                {
                    if (p_54)
                        goto lbl_334;
                    (*l_323) = l_335;
                }
                (*g_102) = (*g_102);
            }
            else
            {
                if ((*g_219))
                {
                    (**l_323) = (*g_219);
                    (*l_324) = func_59(p_51);
                    (*l_324) = (safe_lshift_func_int8_t_s_s(g_284, (0x4B0D3567L && (safe_sub_func_int16_t_s_s((((((func_59(g_96) , func_59(p_52)) & ((safe_mul_func_uint16_t_u_u(65535UL, (&g_219 != &g_219))) | (***l_280))) >= 0x47EAL) , (void*)0) != &g_219), (*l_324))))));
                    if (l_331)
                        goto lbl_342;
                }
                else
                {
                    int *l_343 = &l_294;
                    (*g_102) = (*g_102);
                    (*l_281) = l_343;
                }
                return p_54;
            }
        }
        l_352 = ((safe_mul_func_int8_t_s_s((-1L), ((safe_sub_func_int32_t_s_s((l_322 | (safe_sub_func_uint32_t_u_u(func_55((safe_mul_func_int8_t_s_s(func_55(g_79, p_53, p_54), (((+(((g_284 >= (g_284 <= p_50)) , g_287) | (*l_324))) > g_284) , p_53))), g_284, p_53), l_322))), 0xD82D40DCL)) == g_287))) , (void*)0);
        (*l_324) = ((g_287 >= (0x5AL > (safe_lshift_func_int8_t_s_s(g_2, 6)))) != (safe_add_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(g_284, 6)) > ((+g_2) < (***l_280))) , (safe_rshift_func_uint8_t_u_u(g_96, ((((**l_281) <= (safe_add_func_uint32_t_u_u((((((((g_96 != 0x9E2EL) , g_284) || (*l_324)) , p_52) == 0x9EL) != 3UL) == g_96), 4294967290UL))) , &l_352) == (void*)0)))), p_52)));
    }
    g_219 = (**l_280);
    return (**l_281);
}







static char func_55(int p_56, char p_57, unsigned p_58)
{
    unsigned l_207 = 0x5DA81958L;
    int l_208 = (-7L);
    int *l_235 = &l_208;
    int **l_234 = &l_235;
    unsigned l_236 = 0xF24016B4L;
    l_208 = (l_207 != (func_59(((*g_102) != (l_207 , (*g_102)))) , l_207));
    if ((safe_mul_func_int16_t_s_s((((safe_add_func_int8_t_s_s((func_59(g_96) < (0xD36E1F28L > g_2)), (safe_add_func_uint16_t_u_u(g_2, ((((safe_lshift_func_int16_t_s_u((l_208 || g_2), 1)) | (safe_lshift_func_uint8_t_u_u((((p_57 > g_2) | 0xDAEAD15EL) , l_207), g_2))) , p_58) > g_2))))) < 1UL) & l_207), p_58)))
    {
        const int **l_220 = &g_219;
        (*l_220) = g_219;
    }
    else
    {
        int l_221 = 0xAEE7164AL;
        (*g_102) = (void*)0;
        if (((((l_221 != (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((l_221 <= ((safe_mul_func_int16_t_s_s((0x9F7EB369L == (l_208 < (2L && l_208))), ((g_79 && ((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((((((l_234 == ((((&g_103 == (void*)0) && p_57) & 0x574DL) , &l_235)) >= g_96) , 0L) < (*l_235)) >= (*l_235)), l_236)), g_96)) || p_58)) || p_58))) < 0xBCL)), 0x17L)), 0xC7L)), p_56))) , (**l_234)) == 247UL) , 0L))
        {
            int *l_250 = (void*)0;
            for (p_56 = 0; (p_56 >= 22); p_56++)
            {
                unsigned l_245 = 0x627C589AL;
                int ** const l_251 = &l_235;
                (**l_251) = ((((safe_mod_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s(func_59(((safe_add_func_uint16_t_u_u(((~func_59(((func_59(l_245) < (((l_245 < 248UL) | ((((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_245, ((l_250 == (*l_234)) || p_57))), p_58)) && 0UL) , 0x9B28L) >= g_2)) != g_2)) || p_56))) < l_221), 65535UL)) > p_58)), 7)) , l_245) > p_57), l_245)) ^ p_56) , l_251) == &l_250);
            }
            (*l_235) = ((-1L) >= func_59(g_79));
        }
        else
        {
            int *l_254 = (void*)0;
            (*l_235) = ((((safe_lshift_func_int16_t_s_s(l_221, 12)) , (*l_234)) != l_254) <= ((safe_lshift_func_uint16_t_u_u((0xCDA0L > (safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(p_57, ((~((0xF0L & (safe_mul_func_uint16_t_u_u(p_56, ((*l_235) != l_221)))) < g_2)) ^ 0x315EL))), 0x85L))), g_79)) , 1L));
        }
    }
    (*l_235) = (p_57 <= func_59(((safe_add_func_uint16_t_u_u(((*l_235) ^ ((((p_57 > (safe_mod_func_int16_t_s_s(g_79, (safe_lshift_func_int8_t_s_s(g_2, 2))))) , 7UL) <= g_2) ^ 0UL)), 0x4535L)) & p_57)));
    return g_96;
}







static int func_59(unsigned p_60)
{
    int *l_67 = (void*)0;
    int **l_68 = &l_67;
    int l_69 = 0xC97DE2E5L;
    unsigned char l_74 = 0x1AL;
    int *l_110 = &l_69;
    int l_122 = (-8L);
    (*l_68) = l_67;
    l_69 = 2L;
    if ((((p_60 , (safe_add_func_int32_t_s_s(((((&g_2 != (((p_60 , ((g_2 , 0x3DA79815L) != ((~(safe_mul_func_int16_t_s_s(l_74, (safe_rshift_func_int8_t_s_s((g_2 , g_2), ((safe_lshift_func_int16_t_s_s((((*l_68) != (void*)0) && g_79), 8)) < p_60)))))) ^ g_79))) , g_79) , (*l_68))) , &g_2) != (void*)0) >= p_60), p_60))) < 0x15L) < p_60))
    {
        unsigned l_95 = 0UL;
        for (p_60 = 9; (p_60 == 1); p_60--)
        {
            const unsigned l_92 = 6UL;
            if (p_60)
            {
                for (l_74 = (-16); (l_74 > 5); ++l_74)
                {
                    int *l_84 = (void*)0;
                    int *l_85 = &l_69;
                    (*l_85) = 4L;
                    g_96 = (safe_lshift_func_uint8_t_u_u(((((g_79 && (((*l_85) && (safe_sub_func_uint32_t_u_u((0x47L & 250UL), g_2))) && (((safe_rshift_func_uint8_t_u_s((l_92 != (safe_mod_func_uint16_t_u_u(p_60, p_60))), (p_60 != p_60))) < 4294967290UL) > l_95))) ^ g_2) && 3L) , 0x51L), 1));
                }
                if (l_92)
                    break;
            }
            else
            {
                return g_2;
            }
            (*l_68) = (void*)0;
        }
    }
    else
    {
        int *l_97 = &g_2;
        int l_98 = 0x0596E72DL;
        (*l_68) = l_97;
        l_98 = g_79;
        if (p_60)
            goto lbl_99;
lbl_99:
        (*l_68) = &g_2;
        (*l_68) = (*l_68);
    }
    if ((0x8AL && 0x48L))
    {
        volatile int ***l_109 = &g_102;
        for (l_69 = 4; (l_69 > 3); l_69 = safe_sub_func_uint16_t_u_u(l_69, 3))
        {
            int *l_105 = &l_69;
            int l_108 = 0xE88205D6L;
            l_108 = (g_79 , ((g_102 != (void*)0) , (g_2 , ((safe_unary_minus_func_int8_t_s(((*l_68) != l_105))) & (safe_mul_func_uint16_t_u_u(g_79, g_96))))));
        }
        (*g_102) = (*g_102);
        (*l_109) = (p_60 , &g_103);
        (*l_68) = l_110;
    }
    else
    {
        const int l_115 = 3L;
        int l_148 = 0xAE8C7AEFL;
        (*l_110) = p_60;
        for (g_96 = 10; (g_96 <= 43); ++g_96)
        {
            unsigned short l_121 = 0x3649L;
            int l_128 = 8L;
            if ((g_2 && (((0xA7L > (((safe_add_func_uint16_t_u_u(0x5BC9L, l_115)) && (safe_lshift_func_uint8_t_u_s(((p_60 == (p_60 & (safe_unary_minus_func_uint16_t_u(((safe_add_func_uint32_t_u_u((*l_110), l_121)) ^ (g_79 , 4294967287UL)))))) , g_79), 7))) && g_96)) > 247UL) > (*l_110))))
            {
                if (l_122)
                    break;
            }
            else
            {
                unsigned l_123 = 0xDAB47FCAL;
                int *l_140 = (void*)0;
                if (l_123)
                    break;
                for (l_121 = 0; (l_121 > 15); l_121++)
                {
                    for (l_123 = 27; (l_123 > 49); ++l_123)
                    {
                        return l_128;
                    }
                    for (g_79 = 0; (g_79 <= 16); g_79 = safe_add_func_uint16_t_u_u(g_79, 6))
                    {
                        short l_139 = 1L;
                        (*l_110) = (g_2 ^ ((&g_103 == (void*)0) == (((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((0x44D6L <= ((safe_rshift_func_uint8_t_u_s(g_2, 5)) != (p_60 == (&g_103 != ((safe_mul_func_int16_t_s_s((g_79 <= g_2), (-9L))) , &g_103))))), p_60)), l_139)) , 0L) , g_96)));
                    }
                    (*l_68) = l_140;
                    (*g_102) = (*g_102);
                }
            }
            for (l_69 = 0; (l_69 >= (-30)); --l_69)
            {
                int *l_143 = &l_69;
                (*l_68) = (((*l_110) , l_128) , l_143);
                l_148 = (((3L | ((-10L) <= p_60)) >= ((((((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((void*)0 == &l_143), p_60)), (-10L))) , (*l_68)) == l_143) , (*l_143)) != g_96) != g_79)) < p_60);
                (*l_68) = ((((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(p_60, g_96)), p_60)) == l_128) ^ p_60) , l_143);
                (*g_102) = (*g_102);
            }
            if (((safe_rshift_func_uint8_t_u_s(((p_60 < ((safe_mul_func_int16_t_s_s(p_60, (safe_mod_func_uint16_t_u_u(((+((((((safe_add_func_uint8_t_u_u(l_148, l_148)) , (*l_110)) <= 0x7FL) & (0x70E6L | l_121)) | p_60) > 0UL)) < g_79), p_60)))) < p_60)) != 0x71DEL), 5)) == l_128))
            {
                int l_169 = 0x6A71AB25L;
                for (l_122 = 0; (l_122 <= (-10)); --l_122)
                {
                    int **l_172 = &l_110;
                    (*l_110) = p_60;
                    if (l_115)
                        break;
                    (**l_172) = (l_148 , (safe_sub_func_int16_t_s_s(((((((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((p_60 , ((((p_60 <= l_121) <= p_60) , &l_110) != (((l_169 ^ (safe_mul_func_uint8_t_u_u(p_60, l_148))) , g_79) , l_172))), p_60)), 4)) <= g_79) , p_60) <= l_169) > 0UL) > 0x513462E2L), 0x2C06L)));
                }
                if (l_121)
                    continue;
            }
            else
            {
                int l_175 = (-10L);
                (*l_110) = (safe_add_func_uint32_t_u_u(l_175, p_60));
                (*g_102) = (*g_102);
            }
        }
        for (l_74 = 29; (l_74 != 5); l_74 = safe_sub_func_uint32_t_u_u(l_74, 5))
        {
            unsigned short l_178 = 0x705BL;
            const int l_196 = 0x4A8CDCF8L;
            int ***l_204 = &l_68;
            unsigned char l_205 = 0UL;
            l_178 = l_115;
            (*l_110) = (((safe_lshift_func_uint8_t_u_s(p_60, 1)) && 0x1389L) ^ 0xF0A0L);
            if (g_79)
                continue;
            if (((safe_rshift_func_uint16_t_u_u(((g_2 , g_2) ^ (safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((&l_148 != (*g_102)) <= (-1L)), (((l_148 , (safe_add_func_uint8_t_u_u(p_60, ((void*)0 == (*g_102))))) ^ 0x9B84L) , g_2))) && g_96), g_2)) >= g_2), l_178)), 0xC9C5L))), l_178)) , 0x7ECBFEF2L))
            {
                return g_79;
            }
            else
            {
                unsigned short l_195 = 0x6D6AL;
                int ***l_197 = &l_68;
                l_205 = ((safe_mod_func_int8_t_s_s((l_195 , ((l_195 || l_196) >= (l_197 != ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s(l_196, 4)) , ((g_2 == (p_60 >= (l_204 == (void*)0))) , p_60)) != l_178), p_60)) > l_148), 0)) , (void*)0)))), g_96)) , l_148);
            }
        }
    }
    return g_79;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    transparent_crc(g_693, "g_693", print_hash_value);
    transparent_crc(g_706, "g_706", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
