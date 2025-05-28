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



static unsigned g_10 = 4294967289UL;
static int g_73 = 0xC8520716L;
static short g_89 = 7L;
static int g_106 = (-4L);
static int *g_133 = (void*)0;
static short g_176 = (-8L);
static int g_318 = 0x7A405C94L;
static int **g_330[6] = {&g_133,&g_133,&g_133,&g_133,&g_133,&g_133};
static int ***g_329 = &g_330[2];
static const int g_444 = (-1L);
static unsigned char g_643 = 0xA2L;
static unsigned g_705 = 5UL;
static short g_722 = 0x952EL;
static short g_725 = (-1L);
static const int *g_732 = &g_318;
static unsigned g_771 = 18446744073709551615UL;
static short g_796 = 0x5EE5L;
static unsigned g_889 = 0xAE61AC59L;
static int *g_921 = &g_318;



static char func_1(void);
static unsigned long long func_11(unsigned long long p_12, int p_13);
static unsigned char func_20(unsigned short p_21, unsigned char p_22, unsigned long long p_23, unsigned short p_24);
static long long func_27(int p_28, unsigned char p_29, unsigned long long p_30);
static unsigned long long func_31(char p_32, const unsigned p_33, short p_34);
static int func_37(unsigned p_38, unsigned p_39, const unsigned char p_40, short p_41, unsigned long long p_42);
static unsigned func_43(int p_44, unsigned short p_45, int p_46, unsigned char p_47, unsigned short p_48);
static int func_49(const unsigned char p_50);
static short func_58(char p_59);
static char func_60(unsigned p_61, unsigned p_62, unsigned long long p_63);
static char func_1(void)
{
    const unsigned short l_17 = 0xEA53L;
    const int *l_928 = &g_318;
    int l_934 = (-8L);
    (*g_921) = (safe_add_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((~(!(safe_add_func_uint8_t_u_u(((g_10 == func_11(g_10, ((safe_mod_func_uint64_t_u_u(((((safe_unary_minus_func_int64_t_s(l_17)) & g_10) || l_17) || (safe_mul_func_uint8_t_u_u((func_20(l_17, g_10, ((safe_add_func_int64_t_s_s(func_27(((func_31(l_17, g_10, g_10) > l_17) > 0x9FC7257DC69299ECLL), g_176, l_17), l_17)) == l_17), l_17) < (-4L)), 0x68L))), l_17)) | (-1L)))) <= l_17), 0x96L)))), l_17)), l_17)) >= l_17) ^ 0xE1630E73L), g_10));
    for (g_176 = 0; (g_176 < (-13)); g_176 = safe_sub_func_int16_t_s_s(g_176, 7))
    {
        const int *l_927 = &g_73;
        int l_929 = 0x75FD0D70L;
        (*g_921) = ((*g_329) != (void*)0);
        l_928 = l_927;
        l_929 = (*g_732);
        for (g_722 = 17; (g_722 == 12); g_722--)
        {
            unsigned char l_939 = 255UL;
            l_934 = (safe_lshift_func_int16_t_s_u((*l_927), 4));
            if ((*g_732))
                break;
            (*g_921) = ((*l_927) ^ ((safe_rshift_func_uint8_t_u_s((+(g_444 ^ g_318)), 7)) != (((g_725 | (safe_add_func_int8_t_s_s(((*l_928) || g_722), l_939))) & func_60((l_939 & g_705), g_444, g_444)) == 0x9A008143L)));
        }
    }
    return g_73;
}







static unsigned long long func_11(unsigned long long p_12, int p_13)
{
    int ***l_878 = (void*)0;
    int *l_924 = &g_318;
    if ((safe_lshift_func_uint8_t_u_u((l_878 == l_878), (1L <= (0UL >= (func_20(g_176, (safe_mul_func_int64_t_s_s(g_318, ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0xC3L, (safe_add_func_uint64_t_u_u(g_889, (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(6UL, g_722)) != 1L), g_771)))))), p_13)) < g_318))), g_889, g_176) >= 0x146EL))))))
    {
        const int *l_894 = &g_73;
        const int **l_895 = &g_732;
        int *l_906 = &g_73;
        int l_917 = 0L;
        (*l_895) = l_894;
        if ((safe_add_func_int64_t_s_s(p_12, 0x2A1A490BF3BBFEB7LL)))
        {
            int *l_898 = &g_318;
            int ***l_901 = &g_330[2];
            (**g_329) = l_898;
            for (g_643 = 1; (g_643 <= 5); g_643 += 1)
            {
                int *l_902 = &g_318;
                int i;
                (*l_895) = (**g_329);
                (**g_329) = (**g_329);
                (***g_329) = (5UL >= (safe_mod_func_int16_t_s_s(((l_901 != &g_330[0]) & 1UL), (((**g_329) == (void*)0) ^ ((func_60(g_705, g_10, (***l_901)) == (-1L)) ^ (*l_898))))));
                (**g_329) = l_902;
            }
        }
        else
        {
            int *l_903 = (void*)0;
            int *l_904 = (void*)0;
            int *l_905 = &g_73;
            (*l_905) = (*l_894);
        }
        (*l_906) = 0x760A211AL;
        if ((safe_mul_func_int8_t_s_s((0x6DL > (((((+p_12) ^ (((void*)0 != (*g_329)) == (safe_mul_func_int8_t_s_s(g_705, p_12)))) != g_889) == p_12) || 0x8ABD48F36162F9A6LL)), 0x9BL)))
        {
            (*l_906) = (3UL ^ 18446744073709551615UL);
            (*l_895) = g_921;
        }
        else
        {
            short l_922[7][7][5] = {{{0x01EBL,0L,0x3E54L,(-1L),1L},{0x1E22L,(-7L),0x1433L,4L,7L},{0L,1L,0x53F9L,0x3E54L,0x91DDL},{1L,(-5L),0x2C84L,0x9419L,0L},{0xB052L,0x4456L,0x2F1BL,0xBEA2L,0x6BCAL},{0x0DADL,0xD6B0L,0x11AFL,0x9048L,0x9EBFL},{(-10L),1L,0x4BF9L,9L,8L}},{{0xD434L,0x1433L,0xBEA2L,0x7704L,0x48E7L},{(-8L),(-7L),0L,0x0DADL,0x2730L},{0xA787L,1L,0x096FL,(-7L),0x53F9L},{0x6BCAL,(-5L),(-3L),0xB052L,0xE03EL},{6L,0xFD39L,4L,(-7L),1L},{1L,0x36FBL,(-2L),0x7704L,7L},{0x4BF9L,(-7L),7L,1L,0x7B91L}},{{0xB052L,1L,0x2C84L,0x2F1BL,1L},{0L,0x7008L,0x7008L,0L,0x3DDBL},{1L,8L,0x3DDBL,0x412BL,0x7704L},{0x2C84L,0x3B89L,0x57F4L,0x7B91L,7L},{0L,0x2473L,0x157BL,0x412BL,4L},{0x01EBL,0L,0xA1C4L,0L,(-10L)},{0x11AFL,(-1L),1L,0x2F1BL,0xD434L}},{{0xA90CL,0xC4E6L,0x8613L,1L,(-1L)},{(-7L),0x53F9L,0L,0x7704L,(-1L)},{0xD6B0L,(-4L),0x67B8L,(-7L),0x9419L},{0xC4E6L,(-1L),0x3E54L,0xB052L,(-10L)},{0x91DDL,(-1L),1L,(-7L),0xB091L},{0xBFDEL,0x3822L,0x48E7L,0x0DADL,(-9L)},{1L,0x3822L,0xD6B0L,(-5L),0x91DDL}},{{0xBFDEL,0x11AFL,0x3DDBL,(-7L),0xD434L},{(-9L),(-7L),0x134EL,1L,1L},{0xBEA2L,(-1L),(-7L),(-6L),(-7L)},{0x0DADL,1L,(-6L),(-1L),0L},{(-8L),0x57F4L,0x156AL,1L,(-6L)},{0xA458L,0x9E29L,(-1L),7L,0xBEA2L},{0xD434L,0x9EBFL,0x01EBL,0x01EBL,0x9EBFL}},{{0xB052L,4L,(-2L),8L,0x53F9L},{9L,0x1E22L,1L,0xA787L,0x2473L},{0x2473L,(-1L),(-9L),0x91DDL,0x57F4L},{9L,0x9419L,0L,0x41A7L,1L},{0xB052L,0xFD39L,0x9E29L,0x1433L,0xB091L},{0xD434L,0x4456L,0L,4L,6L},{0xA458L,(-10L),(-8L),1L,(-10L)}},{{(-8L),0x9048L,0x3822L,(-1L),0x412BL},{0x0DADL,0xA458L,0xB091L,0x9E29L,0x156AL},{0xBEA2L,0x6BCAL,0L,0xE03EL,0xA90CL},{(-9L),1L,0x2730L,1L,0x3B89L},{0xBFDEL,0x53F9L,(-1L),(-1L),1L},{0x48E7L,0x53F9L,0x412BL,0x2473L,0x1E22L},{0x3DDBL,0xBFDEL,0x0DADL,0x2F1BL,0xD6B0L}}};
            int i, j, k;
            for (g_643 = 1; (g_643 <= 5); g_643 += 1)
            {
                int i;
                (*l_895) = (*l_895);
                for (p_13 = 0; (p_13 <= 5); p_13 += 1)
                {
                    (*l_906) = (l_922[3][1][1] < 1L);
                }
                for (g_722 = 5; (g_722 >= 0); g_722 -= 1)
                {
                    return g_10;
                }
            }
        }
    }
    else
    {
        int *l_923 = &g_106;
        (**g_329) = l_923;
    }
    (**g_329) = l_924;
    (*g_921) = 0L;
    return p_12;
}







static unsigned char func_20(unsigned short p_21, unsigned char p_22, unsigned long long p_23, unsigned short p_24)
{
    int *l_843 = &g_73;
    (*l_843) = (safe_lshift_func_int16_t_s_u(p_21, 10));
    for (p_21 = 3; (p_21 < 46); p_21 = safe_add_func_int64_t_s_s(p_21, 1))
    {
        int *l_846 = &g_73;
        int ***l_872 = (void*)0;
        if ((*l_843))
        {
            (*l_843) = 1L;
            l_846 = (void*)0;
            (**g_329) = l_843;
        }
        else
        {
            char l_851[10] = {0xADL,0x3AL,0xADL,0x3AL,0xADL,0x3AL,0xADL,0x3AL,0xADL,0x3AL};
            short l_856 = 0L;
            int *l_857[5];
            int i;
            for (i = 0; i < 5; i++)
                l_857[i] = (void*)0;
            if (((((safe_sub_func_uint16_t_u_u((+p_23), (safe_rshift_func_int16_t_s_u(func_37(p_21, (g_106 | ((&g_330[2] != (void*)0) >= func_37((safe_rshift_func_int8_t_s_u(p_21, (safe_mul_func_uint8_t_u_u((p_21 | l_851[4]), 0UL)))), g_444, (*l_843), p_22, p_24))), g_771, g_643, l_856), 4)))) ^ 0xF341D4367860ED0BLL) > 0x5ED9D016L) >= g_796))
            {
                (*l_846) = l_856;
            }
            else
            {
                (**g_329) = l_857[3];
            }
            for (g_705 = (-20); (g_705 > 47); g_705 = safe_add_func_int8_t_s_s(g_705, 6))
            {
                const int *l_866[8][9] = {{&g_444,&g_106,&g_444,&g_106,&g_73,&g_73,&g_73,&g_106,&g_444},{&g_106,&g_106,&g_106,&g_444,&g_318,&g_318,&g_444,&g_73,&g_318},{&g_73,&g_73,(void*)0,(void*)0,&g_444,(void*)0,&g_106,&g_106,&g_73},{&g_444,&g_106,&g_106,(void*)0,&g_318,(void*)0,&g_444,(void*)0,&g_318},{(void*)0,&g_444,&g_444,(void*)0,&g_444,(void*)0,&g_73,&g_73,&g_444},{&g_318,&g_318,&g_73,(void*)0,&g_106,&g_106,(void*)0,(void*)0,(void*)0},{&g_73,&g_73,&g_444,&g_444,&g_444,&g_73,&g_318,&g_318,&g_318},{&g_73,&g_318,&g_106,&g_106,&g_318,&g_73,&g_106,&g_318,&g_106}};
                int ** const *l_871 = &g_330[1];
                int i, j;
                for (g_796 = 15; (g_796 < 14); --g_796)
                {
                    int **l_864 = (void*)0;
                    int l_865 = (-1L);
                    for (p_22 = (-20); (p_22 <= 27); p_22 = safe_add_func_int64_t_s_s(p_22, 3))
                    {
                        (*l_846) = (l_864 == (*g_329));
                    }
                    (*l_843) = p_23;
                    (*l_843) = (p_21 <= (l_857[4] != l_866[5][0]));
                }
                (*l_846) = (safe_sub_func_uint32_t_u_u((*l_843), (safe_mul_func_int8_t_s_s((l_871 != l_872), 5UL))));
                (*l_846) = (0x93L <= g_444);
                if ((*l_843))
                    break;
            }
        }
        for (g_89 = 0; (g_89 != 13); g_89++)
        {
            int *l_875[7] = {&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73};
            int i;
            (**g_329) = l_875[0];
        }
        (**g_329) = l_843;
    }
    return p_22;
}







static long long func_27(int p_28, unsigned char p_29, unsigned long long p_30)
{
    int *l_838 = &g_318;
    for (g_722 = 0; (g_722 < (-3)); g_722--)
    {
        unsigned l_839 = 0x5308DE58L;
        unsigned l_840 = 0UL;
        p_28 = (safe_mul_func_uint8_t_u_u((p_28 || (safe_mod_func_uint32_t_u_u(((func_43(((g_10 > func_37(g_705, g_771, (((g_318 >= (safe_rshift_func_int16_t_s_u((((safe_add_func_uint32_t_u_u((func_60((safe_add_func_int32_t_s_s((&p_28 != l_838), (*l_838))), g_176, p_30) == p_28), p_29)) == p_30) <= p_28), 6))) == g_643) < 1UL), l_839, g_10)) ^ p_28), (*l_838), p_30, p_29, g_796) && 0xF5L) != 0x56AEL), 0x28250DEFL))), l_840));
    }
    return g_444;
}







static unsigned long long func_31(char p_32, const unsigned p_33, short p_34)
{
    const long long l_51 = 0x06702E63372585FALL;
    unsigned l_524 = 4294967289UL;
    int **l_547 = &g_133;
    int *l_577 = &g_106;
    int l_591 = 1L;
    unsigned short l_626 = 1UL;
    int l_627 = 0x99ED1A0BL;
    long long l_681[2][8][4] = {{{0x30D4A60E4F0CB017LL,0x829E451FCD5B2A18LL,0x1147AAE7E7417316LL,0x829E451FCD5B2A18LL},{(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L},{(-2L),0x29C56A6173D8B77DLL,0x2F147A9244B6496FLL,(-3L)},{(-2L),(-8L),1L,1L},{1L,(-3L),1L,(-7L)},{(-1L),0x30D4A60E4F0CB017LL,0x1147AAE7E7417316LL,0x29C56A6173D8B77DLL},{0x30D4A60E4F0CB017LL,(-8L),(-8L),0x30D4A60E4F0CB017LL}},{{1L,(-2L),1L,1L},{0x4D829748A5D7BD01LL,(-1L),0x1147AAE7E7417316LL,(-1L)},{0x829E451FCD5B2A18LL,1L,(-1L),(-1L)},{1L,(-1L),(-7L),1L},{0x29C56A6173D8B77DLL,(-2L),0x2F147A9244B6496FLL,0x30D4A60E4F0CB017LL},{1L,(-8L),1L,0x29C56A6173D8B77DLL},{1L,0x30D4A60E4F0CB017LL,1L,(-7L)},{(-1L),(-3L),0x1147AAE7E7417316LL,1L}}};
    int *l_769 = (void*)0;
    unsigned short l_803 = 0x586EL;
    int i, j, k;
    for (p_32 = 0; (p_32 >= 11); p_32 = safe_add_func_int16_t_s_s(p_32, 9))
    {
        const int *l_443 = &g_444;
        unsigned short l_528 = 1UL;
        short l_540 = 1L;
        int l_546[10] = {0xC1D83111L,0xC1D83111L,0xC1D83111L,0xC1D83111L,0xC1D83111L,0xC1D83111L,0xC1D83111L,0xC1D83111L,0xC1D83111L,0xC1D83111L};
        const unsigned char l_568 = 0xC3L;
        int * const *l_584 = &g_133;
        int * const **l_583 = &l_584;
        int l_598 = (-1L);
        char l_619 = 7L;
        int i;
    }
    for (g_106 = 0; (g_106 <= 1); g_106 += 1)
    {
        char l_780 = 0x91L;
        const long long l_785 = 1L;
        int l_786 = 0x8D74EBE6L;
        char l_787[10] = {0xF5L,0xF5L,(-9L),0xC3L,(-9L),0xF5L,0xF5L,(-9L),0xC3L,(-9L)};
        int i;
        if (func_37((safe_unary_minus_func_uint16_t_u(func_43(g_771, p_33, ((safe_mod_func_uint16_t_u_u((g_73 | (safe_add_func_uint32_t_u_u(p_32, (safe_mod_func_int16_t_s_s(func_60(p_32, (0UL <= (0xA430604EL <= (safe_add_func_int16_t_s_s((l_780 | (safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(func_37(g_725, g_705, l_785, p_34, (*l_577)), 9UL)) & p_34), p_33))), g_444)))), l_780), l_785))))), g_722)) >= p_34), l_786, (*l_577)))), p_34, g_444, g_643, g_444))
        {
            const int **l_795 = (void*)0;
            const int ***l_794[7][4] = {{&l_795,&l_795,&l_795,&l_795},{&l_795,&l_795,&l_795,&l_795},{&l_795,&l_795,&l_795,&l_795},{&l_795,&l_795,&l_795,&l_795},{&l_795,&l_795,&l_795,&l_795},{&l_795,&l_795,&l_795,&l_795},{&l_795,&l_795,&l_795,&l_795}};
            int *l_797 = &g_318;
            int i, j;
            l_787[9] = (*g_732);
            (*l_797) = (safe_lshift_func_int8_t_s_s(((*l_577) < (((safe_lshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s(func_43(p_32, g_318, (0x0C6E315BL != (p_33 != p_33)), (((((func_60(p_33, (l_794[4][2] != &g_330[3]), p_34) > 0x041365F8L) ^ l_780) | p_34) != p_34) != 4294967295UL), p_34), (*g_732))) == g_796), g_106)) > (-10L)) && p_34)), 1));
        }
        else
        {
            const int *l_798 = &g_73;
            const int **l_799 = (void*)0;
            const int **l_800 = (void*)0;
            const int **l_801 = &l_798;
            int *l_802 = &g_73;
            (*l_801) = l_798;
            (*l_802) = p_32;
        }
        return l_803;
    }
    for (l_803 = 0; (l_803 >= 35); ++l_803)
    {
        int *l_806 = &g_73;
        l_806 = (void*)0;
    }
    if ((((p_33 != (safe_add_func_int8_t_s_s(g_725, g_106))) > p_34) ^ (safe_rshift_func_int8_t_s_u((*l_577), 6))))
    {
        (**g_329) = (**g_329);
        for (g_722 = 0; (g_722 != (-9)); g_722 = safe_sub_func_int16_t_s_s(g_722, 1))
        {
            (*l_577) = (safe_sub_func_uint16_t_u_u(0xBF84L, 0x0441L));
            for (g_771 = 0; (g_771 == 53); g_771++)
            {
                for (g_106 = (-28); (g_106 < 4); ++g_106)
                {
                    return p_34;
                }
            }
        }
    }
    else
    {
        int *l_821 = &g_318;
        for (g_796 = 1; (g_796 >= (-22)); g_796--)
        {
            int *l_825[9] = {&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318};
            int i;
            (**g_329) = l_821;
            (**g_329) = l_821;
            for (l_524 = 0; (l_524 == 34); l_524 = safe_add_func_uint32_t_u_u(l_524, 1))
            {
                unsigned short l_824 = 0xF8B9L;
                return l_824;
            }
            l_821 = l_825[4];
        }
        (*l_821) = (*g_732);
        (**g_329) = l_821;
        (**l_547) = 0L;
    }
    return g_73;
}







static int func_37(unsigned p_38, unsigned p_39, const unsigned char p_40, short p_41, unsigned long long p_42)
{
    return p_41;
}







static unsigned func_43(int p_44, unsigned short p_45, int p_46, unsigned char p_47, unsigned short p_48)
{
    int *l_449 = (void*)0;
    int l_466 = 0x2A833012L;
    unsigned l_471 = 0xF7C42D48L;
    int *l_504 = &g_73;
    for (g_89 = (-14); (g_89 > 6); g_89 = safe_add_func_uint32_t_u_u(g_89, 2))
    {
        int **l_451[8][4][1] = {{{&g_133},{(void*)0},{&g_133},{&g_133}},{{&l_449},{&g_133},{&g_133},{(void*)0}},{{&g_133},{&g_133},{&l_449},{&g_133}},{{&g_133},{(void*)0},{&g_133},{&g_133}},{{&l_449},{&g_133},{&g_133},{(void*)0}},{{&g_133},{&g_133},{&l_449},{&g_133}},{{&g_133},{(void*)0},{&g_133},{&g_133}},{{&l_449},{&g_133},{&g_133},{(void*)0}}};
        int i, j, k;
        for (p_46 = 0; (p_46 != 10); ++p_46)
        {
            int **l_450 = &g_133;
            int l_469 = (-3L);
            (*l_450) = l_449;
            if (((l_451[5][0][0] == (void*)0) <= (safe_lshift_func_uint8_t_u_s((((g_106 >= g_106) < ((safe_mul_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(p_45, (p_46 & 0x08B3L))) < ((safe_mod_func_int16_t_s_s(g_89, ((((&l_451[0][2][0] != (void*)0) & g_318) > p_47) && 0x05L))) >= g_176)), 6UL)) && g_106) != g_176) & 0xD34847E49756D08FLL), g_106)) == p_48)) & g_106), g_106))))
            {
                char l_464 = 0x90L;
                int *l_465[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_465[i] = (void*)0;
                l_464 = 0L;
                l_466 = func_60(p_47, g_176, (l_465[4] != (void*)0));
                for (g_73 = 0; (g_73 < (-10)); g_73 = safe_sub_func_int8_t_s_s(g_73, 1))
                {
                    l_465[1] = &l_466;
                }
                (*l_450) = &l_466;
            }
            else
            {
                (*l_450) = (void*)0;
                l_469 = 3L;
            }
            for (p_45 = 0; (p_45 <= 0); p_45 += 1)
            {
                const int *l_495 = &g_318;
                long long l_503 = 0L;
                int i, j, k;
                for (l_466 = 0; (l_466 <= 5); l_466 += 1)
                {
                    short l_470 = 0xEB30L;
                    for (p_48 = 0; (p_48 <= 0); p_48 += 1)
                    {
                        int i, j, k;
                        l_469 = p_44;
                        (*l_450) = (void*)0;
                        l_471 = (1UL == l_470);
                    }
                }
                if ((safe_mul_func_uint16_t_u_u(p_44, (+(0xA9AFCFC7L <= l_466)))))
                {
                    int *l_480 = &g_73;
                    const int * const l_481 = &g_73;
                    const int **l_496 = &l_495;
                    if (p_45)
                        break;
                    if ((func_60((safe_rshift_func_uint8_t_u_u(func_60(p_45, g_176, ((*l_450) == &l_466)), ((safe_mod_func_uint64_t_u_u(p_48, g_73)) >= (p_47 || (!(safe_add_func_int64_t_s_s((p_47 != 0x3F811DCE77FBB691LL), p_44))))))), g_106, p_46) ^ g_444))
                    {
                        const int *l_483 = &g_444;
                        const int **l_482 = &l_483;
                        (*l_450) = l_480;
                        (*l_482) = l_481;
                        (*l_480) = ((safe_rshift_func_int16_t_s_s(((18446744073709551608UL == ((*l_480) & 4294967295UL)) == p_44), 15)) || p_47);
                    }
                    else
                    {
                        int l_492 = (-9L);
                        (*l_480) = ((safe_mul_func_int16_t_s_s((func_60((((*l_480) | (((*l_450) != l_481) & (safe_sub_func_uint64_t_u_u(g_444, p_45)))) & (p_48 > 18446744073709551615UL)), (safe_sub_func_uint8_t_u_u(p_48, (0L | 0x1DE2EE8EL))), l_492) > 0xA420665EL), 1L)) == 0x42BE3EC5E41D8117LL);
                        (*l_480) = (g_106 != (l_492 != (p_46 != p_44)));
                        (*l_480) = (safe_add_func_int8_t_s_s(p_48, (0x1C9FD32EL ^ ((&l_450 == &g_330[3]) < p_48))));
                        l_480 = &l_466;
                    }
                    (*l_496) = l_495;
                    (*l_480) = func_60(func_60((safe_mod_func_uint16_t_u_u(g_10, (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(0xB63DL, 14)), 5)))), g_318, g_10), l_503, func_60(p_48, g_176, ((65535UL != p_47) == (-10L))));
                }
                else
                {
                    return p_48;
                }
                l_449 = &l_466;
                (*l_449) = 0x43E61D54L;
            }
            (*l_450) = (*l_450);
        }
        l_466 = (8UL < p_44);
    }
    (*l_504) = p_44;
    return (*l_504);
}







static int func_49(const unsigned char p_50)
{
    unsigned l_64 = 0x050B7F45L;
    int l_69 = (-5L);
    int *l_261[3];
    unsigned l_262[5] = {0xFD098787L,0xFD098787L,0xFD098787L,0xFD098787L,0xFD098787L};
    int **l_263 = &l_261[0];
    char l_422 = 0L;
    char l_436 = 0x95L;
    int i;
    for (i = 0; i < 3; i++)
        l_261[i] = (void*)0;
    l_262[0] = (((~((safe_lshift_func_uint8_t_u_s(g_10, 1)) != (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(func_58(func_60(l_64, ((l_64 > (safe_mul_func_uint16_t_u_u(((((((safe_lshift_func_int16_t_s_u(((g_10 | g_10) > g_10), 15)) >= (g_10 <= ((g_10 | ((((((l_64 < 0x0AE22781501494D8LL) >= g_10) && 0UL) || p_50) < g_10) == l_64)) | l_69))) | g_10) > p_50) || 0x18CC907F7A796FB6LL) | 251UL), g_10))) > g_10), g_10)), p_50)) != l_69), p_50)))) > l_64) == (-5L));
    (*l_263) = &l_69;
    if (p_50)
    {
        int *l_282 = &g_106;
        long long l_300 = 0x178785D6A8D5824CLL;
        (*l_263) = &g_106;
        g_106 = 0xDAEFF782L;
        if (p_50)
        {
            unsigned char l_268 = 0xD5L;
            int *** const l_289[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            unsigned l_295 = 0x443967D9L;
            int i;
            if ((safe_mul_func_int16_t_s_s(0x81A4L, 0xB2E1L)))
            {
                unsigned char l_266[6];
                int l_283 = 0xCDD95E0EL;
                int i;
                for (i = 0; i < 6; i++)
                    l_266[i] = 247UL;
                if (p_50)
                {
                    int *l_267 = &g_73;
                    (*l_263) = l_267;
                    if (((*l_267) <= l_266[0]))
                    {
                        (*l_263) = l_267;
                        (*l_263) = l_267;
                    }
                    else
                    {
                        (*l_263) = (*l_263);
                        l_268 = p_50;
                    }
                    if (p_50)
                    {
                        int *l_269 = &g_73;
                        (*l_263) = l_269;
                    }
                    else
                    {
                        (*l_263) = (*l_263);
                        l_283 = ((safe_rshift_func_uint8_t_u_s(((*l_267) ^ p_50), p_50)) || (safe_sub_func_int32_t_s_s((g_106 != (safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(g_89, (safe_rshift_func_uint8_t_u_s(((void*)0 != l_282), 6)))) && g_176), p_50)) | 0x26DFL), g_176))), 0x6ECFF39BL)));
                    }
                }
                else
                {
                    int *l_284 = &g_73;
                    (*l_263) = l_284;
                }
                for (l_283 = 15; (l_283 == (-6)); l_283--)
                {
                    long long l_294 = 1L;
                    (*l_282) = (l_266[4] || g_10);
                    for (l_69 = 0; (l_69 <= 2); l_69 += 1)
                    {
                        int i;
                        (*l_263) = l_261[l_69];
                        (*l_263) = l_282;
                        if (l_262[(l_69 + 2)])
                            break;
                        g_133 = &g_106;
                    }
                    for (l_268 = 0; (l_268 <= 2); l_268 += 1)
                    {
                        int i;
                        (*l_282) = (0xDCBE90106D382288LL != (safe_mul_func_uint16_t_u_u((+(p_50 >= (p_50 >= (0x73102DFBL | (!(l_283 >= (*l_282))))))), (&l_263 != l_289[3]))));
                        l_261[l_268] = &g_106;
                        l_295 = ((0x17L || (*l_282)) ^ func_60((safe_mod_func_uint32_t_u_u((&l_261[l_268] != &g_133), g_176)), l_294, g_10));
                    }
                }
                return p_50;
            }
            else
            {
                unsigned long long l_301 = 1UL;
                int l_320 = 0x1B23D83AL;
                for (g_73 = 0; (g_73 == 24); g_73 = safe_add_func_uint32_t_u_u(g_73, 2))
                {
                    (*l_282) = p_50;
                    for (l_295 = 9; (l_295 > 8); l_295 = safe_sub_func_int32_t_s_s(l_295, 8))
                    {
                        int *l_302 = &l_69;
                        (*l_282) = (func_60(func_60((l_300 ^ g_73), (p_50 & p_50), l_301), g_106, (func_60(g_176, p_50, l_301) > g_106)) <= p_50);
                        (*l_263) = (*l_263);
                        (*l_282) = (*l_282);
                        l_302 = &g_106;
                    }
                }
                for (l_64 = 22; (l_64 == 53); l_64++)
                {
                    int l_315 = 0x388CC783L;
                    short l_319[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_319[i] = 0x4CE1L;
                    for (l_301 = 0; (l_301 <= 4); l_301 += 1)
                    {
                        int i;
                        return l_262[l_301];
                    }
                    for (l_295 = (-21); (l_295 >= 45); l_295++)
                    {
                        (*l_282) = (p_50 == (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(func_60(l_315, p_50, (func_60(g_73, ((safe_lshift_func_int8_t_s_s((+0x95L), 6)) != (l_315 != p_50)), g_318) <= l_319[1])), 0x18L)), g_176)), 12)) ^ g_106), 0UL)));
                    }
                    l_320 = p_50;
                    (*l_282) = ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(func_60(g_106, l_301, func_60((!l_320), g_89, l_320)), l_315)), 4)) ^ l_301);
                }
                (*l_282) = ((safe_sub_func_uint16_t_u_u(func_60(p_50, p_50, g_176), 0UL)) & p_50);
                return g_10;
            }
        }
        else
        {
            (*l_263) = &g_73;
            if ((safe_rshift_func_uint16_t_u_s(0x41E5L, 14)))
            {
                return g_318;
            }
            else
            {
                int ***l_331 = &g_330[3];
                (*l_282) = ((!((void*)0 != g_329)) != (&g_330[2] == l_331));
                return p_50;
            }
        }
    }
    else
    {
        long long l_332 = 0xF3683C729BAADCFELL;
        int l_346 = 0x754D642FL;
        int l_390 = 0xB9A8F955L;
        int * const *l_399 = &l_261[0];
        if (p_50)
        {
            unsigned char l_337[2][9] = {{1UL,0xA9L,246UL,246UL,0xA9L,1UL,0xB2L,1UL,0xA9L},{1UL,0xF2L,0xF2L,1UL,0UL,0xA9L,0UL,1UL,0xF2L}};
            int *l_351 = &g_106;
            int i, j;
            l_332 = 0x22738764L;
            l_337[1][4] = (safe_sub_func_int16_t_s_s(func_60((safe_lshift_func_uint8_t_u_u(1UL, 5)), g_106, g_10), g_106));
            for (l_332 = 0; (l_332 != (-24)); l_332 = safe_sub_func_uint32_t_u_u(l_332, 4))
            {
                (**g_329) = (*l_263);
            }
            for (g_176 = (-5); (g_176 < (-24)); g_176 = safe_sub_func_uint16_t_u_u(g_176, 9))
            {
                unsigned char l_349 = 255UL;
                int *l_368[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_368[i] = &g_106;
                if (p_50)
                {
                    int *l_345 = (void*)0;
                    for (l_64 = 0; (l_64 <= 5); l_64 += 1)
                    {
                        char l_344 = 0xE6L;
                        l_344 = (((8L || 0x49BE085AL) > ((!(g_10 && g_89)) <= ((safe_add_func_int16_t_s_s((func_60(g_73, p_50, p_50) < p_50), p_50)) || 0xF0B4L))) >= p_50);
                        return g_73;
                    }
                    (**g_329) = l_345;
                    l_346 = 0x8AC87BADL;
                    return g_106;
                }
                else
                {
                    int *l_352 = (void*)0;
                    for (g_73 = 5; (g_73 != (-9)); g_73--)
                    {
                        (**g_329) = &l_346;
                        (*g_133) = p_50;
                    }
                    if (l_346)
                    {
                        int *l_350 = &g_73;
                        if (l_349)
                            break;
                        l_351 = l_350;
                        (*l_263) = (void*)0;
                        l_346 = (((*l_350) <= 0x222D8C44L) ^ (&g_330[2] != (void*)0));
                    }
                    else
                    {
                        (*l_351) = ((*g_329) == (void*)0);
                        (**g_329) = &l_346;
                        (*l_263) = l_352;
                        return p_50;
                    }
                }
            }
        }
        else
        {
            unsigned l_410[9][6] = {{0x00F09E82L,0xCA821C16L,0x1F90E669L,1UL,0x00F09E82L,0x1F90E669L},{4294967295UL,0x69778E43L,4294967295UL,0x69778E43L,4294967295UL,0x9DD74E98L},{0xCA821C16L,0x69778E43L,0x1F90E669L,0xCA821C16L,0x00F09E82L,0xFCBEEDD7L},{0xCA821C16L,0x00F09E82L,0xFCBEEDD7L,0x69778E43L,0x69778E43L,0xFCBEEDD7L},{4294967295UL,4294967295UL,0x1F90E669L,1UL,0x69778E43L,0x9DD74E98L},{0x69778E43L,0x00F09E82L,4294967295UL,1UL,0x00F09E82L,0x1F90E669L},{4294967295UL,0x69778E43L,4294967295UL,0x69778E43L,4294967295UL,0x9DD74E98L},{0xCA821C16L,0x69778E43L,0x1F90E669L,0xCA821C16L,0x00F09E82L,0xFCBEEDD7L},{0xCA821C16L,0x00F09E82L,0xFCBEEDD7L,0x69778E43L,0x69778E43L,0xFCBEEDD7L}};
            int ** const *l_435 = (void*)0;
            int i, j;
            for (l_390 = 0; (l_390 != (-14)); l_390 = safe_sub_func_uint64_t_u_u(l_390, 6))
            {
                int l_405 = 1L;
                int l_408 = 1L;
                unsigned long long l_409 = 0UL;
                int l_419 = 0L;
                unsigned short l_420[10] = {1UL,1UL,0x7EF7L,1UL,1UL,0x7EF7L,1UL,1UL,0x7EF7L,1UL};
                int i;
                if (p_50)
                {
                    unsigned long long l_396 = 0x8CDE90CA60B45DA2LL;
                    return l_396;
                }
                else
                {
                    unsigned char l_411 = 3UL;
                    int *l_421 = &g_106;
                    for (g_318 = 19; (g_318 > (-4)); g_318 = safe_sub_func_int8_t_s_s(g_318, 4))
                    {
                        l_346 = p_50;
                    }
                    if (func_60((8UL == g_73), ((void*)0 != l_399), (((void*)0 == (*l_263)) == (((-4L) < g_318) >= p_50))))
                    {
                        unsigned char l_402 = 0x8BL;
                        (**g_329) = (void*)0;
                        l_409 = (((safe_lshift_func_int16_t_s_s(l_402, 2)) >= ((safe_mul_func_int16_t_s_s(g_106, func_60(l_405, g_106, (((0x8FCCC502L || g_89) < (safe_rshift_func_uint8_t_u_u(((g_176 | 0xDD3D1E3544E29CE6LL) && 0x2A64A254L), 7))) & l_405)))) ^ p_50)) <= l_408);
                        if (p_50)
                            continue;
                        l_411 = l_410[2][5];
                    }
                    else
                    {
                        int *l_414 = &l_405;
                        (*l_414) = ((7UL && ((((-1L) >= 1UL) | func_60((safe_sub_func_int8_t_s_s(p_50, (((&l_405 == l_414) && (safe_mul_func_uint16_t_u_u(0x8472L, p_50))) >= (safe_add_func_int64_t_s_s((p_50 <= l_410[2][5]), g_73))))), l_419, l_420[3])) != 0xB96589D0L)) < g_73);
                        (*l_263) = l_421;
                    }
                    l_422 = ((void*)0 == &l_261[0]);
                    (**g_329) = (*l_263);
                }
            }
            l_346 = ((l_410[0][2] > (safe_add_func_int8_t_s_s((g_73 || (0x9C28L < (safe_add_func_int8_t_s_s((func_60(p_50, (safe_add_func_uint16_t_u_u((0x796AL < (((safe_lshift_func_int16_t_s_s(func_60(g_10, (+(((+(-1L)) ^ (safe_rshift_func_uint16_t_u_u((&g_330[4] == l_435), 12))) ^ 0L)), g_89), 8)) < g_73) == g_106)), (-9L))), p_50) & g_106), 0x39L)))), 0UL))) != p_50);
        }
        l_436 = (0x12E1L < 0x0DB3L);
        (*g_329) = &l_261[0];
    }
    (*l_263) = (*l_263);
    return p_50;
}







static short func_58(char p_59)
{
    long long l_94[2];
    const int *l_145 = &g_73;
    const int *l_146 = (void*)0;
    int l_154 = 3L;
    long long l_181 = 0xCB02F554A1D4D899LL;
    unsigned short l_198 = 1UL;
    int i;
    for (i = 0; i < 2; i++)
        l_94[i] = 0x3A37F729B20146E0LL;
    for (g_73 = 13; (g_73 < 24); ++g_73)
    {
        long long l_86[9][2][4] = {{{0x904CDE8B735D465CLL,0L,0L,0x904CDE8B735D465CLL},{(-7L),0L,0L,0x22B85AE340306456LL}},{{0x904CDE8B735D465CLL,(-2L),0xB99485C884E0B590LL,(-2L)},{(-2L),0L,(-7L),(-2L)}},{{(-7L),(-2L),0x22B85AE340306456LL,0x22B85AE340306456LL},{0L,0L,0xB99485C884E0B590LL,0x904CDE8B735D465CLL}},{{0L,0L,0x22B85AE340306456LL,0L},{(-7L),0x904CDE8B735D465CLL,(-7L),0x22B85AE340306456LL}},{{(-2L),0x904CDE8B735D465CLL,0x904CDE8B735D465CLL,0L},{0x22B85AE340306456LL,0x3E763FF6366113C5LL,0x3E763FF6366113C5LL,0x22B85AE340306456LL}},{{0xB99485C884E0B590LL,0L,0x3E763FF6366113C5LL,1L},{0x22B85AE340306456LL,(-7L),0x904CDE8B735D465CLL,(-7L)}},{{(-7L),0x3E763FF6366113C5LL,0xB99485C884E0B590LL,(-7L)},{0xB99485C884E0B590LL,(-7L),1L,1L}},{{0L,0L,0x904CDE8B735D465CLL,0x22B85AE340306456LL},{0L,0x3E763FF6366113C5LL,1L,0L}},{{0xB99485C884E0B590LL,0x22B85AE340306456LL,0xB99485C884E0B590LL,1L},{(-7L),0x22B85AE340306456LL,0x904CDE8B735D465CLL,0L}}};
        int i, j, k;
        return l_86[8][1][1];
    }
    if (p_59)
    {
        long long l_95 = 2L;
        int *l_134 = &g_106;
        for (g_73 = 0; (g_73 >= (-7)); g_73 = safe_sub_func_int8_t_s_s(g_73, 3))
        {
            int *l_128 = (void*)0;
            char l_131 = 0x32L;
            long long l_132 = 0x1E15B83574D0E4E2LL;
            int *l_144 = &g_106;
            g_89 = g_10;
            if ((((safe_rshift_func_uint8_t_u_u(func_60((g_73 < 0x96L), g_89, g_10), (safe_sub_func_uint32_t_u_u(g_73, func_60(p_59, g_10, (1L | 4L)))))) > g_10) && l_94[0]))
            {
                int *l_107[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_107[i] = &g_106;
                if (((g_89 == l_95) | l_94[1]))
                {
                    long long l_102[3][10] = {{8L,(-1L),1L,(-1L),8L,8L,(-1L),1L,(-1L),8L},{8L,(-1L),1L,(-1L),8L,8L,(-1L),1L,(-1L),8L},{8L,(-1L),1L,(-1L),8L,8L,(-1L),1L,(-1L),8L}};
                    unsigned long long l_126[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_126[i] = 7UL;
                    if ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(0xCC5629281337FB34LL, ((p_59 <= (0x179EF6EAEA544638LL >= l_94[0])) > (safe_mul_func_uint8_t_u_u(func_60(l_102[1][3], g_73, (safe_lshift_func_int16_t_s_u(p_59, 4))), (+p_59)))))), g_89)))
                    {
                        return p_59;
                    }
                    else
                    {
                        int *l_105 = &g_106;
                        (*l_105) = p_59;
                        l_105 = l_107[1];
                        (*l_105) = ((safe_mul_func_uint8_t_u_u(l_94[1], ((safe_sub_func_uint16_t_u_u(l_95, ((p_59 > (safe_mul_func_uint8_t_u_u(((!(safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((-1L), (safe_mod_func_int32_t_s_s(g_10, (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((((0L > l_95) == p_59) >= g_73) && (*l_105)), l_94[0])), 7)), l_102[0][2])))))), l_102[1][4]))) && g_106), l_126[1]))) || 0L))) == 0x5086CD17L))) >= p_59);
                    }
                }
                else
                {
                    int *l_127 = &g_106;
                    if (g_89)
                        break;
                    l_128 = l_127;
                    (*l_128) = (~(safe_mul_func_uint8_t_u_u(p_59, (p_59 < (g_73 > (l_131 != func_60(g_89, g_73, (((*l_128) & func_60(p_59, l_132, p_59)) && g_10))))))));
                }
                g_133 = l_128;
                if (p_59)
                    continue;
                l_134 = &g_73;
            }
            else
            {
                int **l_135[8][3][2] = {{{&l_134,&l_134},{&l_134,&l_134},{&l_134,&l_134}},{{&l_134,&l_134},{&l_134,&l_134},{&l_134,&l_134}},{{&l_134,&l_134},{&l_134,&l_134},{&l_134,&l_134}},{{&l_134,&l_134},{&l_134,&l_134},{&l_134,&l_134}},{{&l_134,&l_134},{&l_134,&l_134},{&l_134,&l_134}},{{&l_134,&l_134},{&l_134,&l_134},{&l_134,&l_134}},{{&l_134,&l_134},{&l_134,&l_134},{&l_134,&l_134}},{{&l_134,&l_134},{&l_134,&l_134},{&l_134,&l_134}}};
                int i, j, k;
                g_133 = l_134;
            }
            (*l_144) = ((+((safe_sub_func_int64_t_s_s((0UL & (l_134 == (void*)0)), (safe_rshift_func_uint8_t_u_s(((p_59 >= (*l_134)) & (safe_sub_func_uint64_t_u_u(((+(((*l_134) > func_60((l_94[0] && ((!func_60(p_59, (safe_mod_func_int64_t_s_s(0x95A6F79F888D3F9ELL, p_59)), g_73)) & g_89)), (*l_134), g_73)) & 0x2055579FL)) == 0x35786DE445E70CA4LL), p_59))), g_106)))) == 0L)) != p_59);
        }
        l_146 = l_145;
    }
    else
    {
        long long l_151 = 0xBA22726DF1FB71B8LL;
        unsigned l_159 = 1UL;
        int *l_189 = (void*)0;
        l_154 = (safe_sub_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_s(((p_59 != g_73) && ((l_151 >= (p_59 ^ 0x26A680CAL)) == (safe_sub_func_int64_t_s_s((l_151 >= l_151), 2UL)))), (p_59 ^ p_59))) > 0x8405L) <= p_59) == 0xD38516734CF679B5LL), p_59));
        if (p_59)
        {
            unsigned char l_158 = 246UL;
            unsigned char l_188[8] = {0UL,255UL,255UL,0UL,255UL,255UL,0UL,255UL};
            int i;
            if ((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((l_158 != (func_60(g_89, g_89, g_10) >= l_159)))), g_10)))
            {
                int *l_160 = &g_73;
                int **l_161 = &g_133;
                (*l_161) = l_160;
                for (g_106 = (-13); (g_106 <= (-16)); --g_106)
                {
                    int *l_170 = &g_106;
                }
            }
            else
            {
                for (l_181 = 0; (l_181 != 15); l_181++)
                {
                    int *l_196 = &g_106;
                    (*l_196) = func_60(g_106, (safe_mul_func_uint8_t_u_u((!(safe_rshift_func_uint16_t_u_s(g_10, 13))), p_59)), g_10);
                    return p_59;
                }
                return (*l_145);
            }
        }
        else
        {
            int **l_197 = &g_133;
            (*l_197) = &l_154;
            g_133 = &l_154;
        }
    }
    if (l_198)
    {
        char l_202[4][1][3] = {{{1L,1L,0L}},{{1L,1L,0L}},{{1L,1L,0L}},{{1L,1L,0L}}};
        int **l_203 = (void*)0;
        int **l_204[5] = {&g_133,&g_133,&g_133,&g_133,&g_133};
        int i, j, k;
        for (l_181 = 0; (l_181 != 9); l_181 = safe_add_func_int64_t_s_s(l_181, 1))
        {
            int *l_201 = &l_154;
            l_202[0][0][0] = (l_201 == (void*)0);
            if ((*l_145))
                continue;
        }
        g_133 = (void*)0;
        g_133 = (void*)0;
    }
    else
    {
        unsigned char l_213 = 246UL;
        const short l_220[6][6] = {{0x6118L,0x4CECL,0x6FDAL,9L,0x4CECL,9L},{0x6118L,0xEB26L,0x6118L,9L,0xEB26L,0x6FDAL},{0x6118L,0x321FL,9L,9L,0x321FL,0x6118L},{0x6118L,0x4CECL,0x6FDAL,9L,0x4CECL,9L},{0x6118L,0xEB26L,0x6118L,9L,0xEB26L,0x6FDAL},{0x6118L,0x321FL,9L,9L,0x321FL,0x6118L}};
        int *l_229 = &g_106;
        int **l_230 = (void*)0;
        int i, j;
        if (((safe_mul_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(g_106, 2)), (func_60(g_73, l_213, g_176) | (safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(l_220[2][0], (safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(p_59, (safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((l_229 != l_229), g_176)) && p_59), p_59)))), 0x797C3EE7L)))), (*l_229))), p_59))))) || g_106) ^ g_10), 0L)) ^ 0x51AEL) <= g_10) != p_59), 0UL)) ^ 249UL))
        {
            int l_237 = 4L;
            unsigned char l_247 = 8UL;
            int *l_252[9] = {&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106};
            int i;
            l_230 = &g_133;
            if (((void*)0 == &g_106))
            {
                const short l_244 = 0x0E0FL;
                (*l_229) = func_60(func_60(p_59, g_106, p_59), p_59, func_60((safe_rshift_func_uint16_t_u_s(p_59, (&l_229 != (void*)0))), ((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_237, 6L)), g_10)) <= g_106), g_73));
                for (l_198 = 0; (l_198 < 38); l_198++)
                {
                    int l_243 = 0x5A3C14F0L;
                    int **l_248 = &l_229;
                    long long l_251 = 0xBC1734EC993FBD6BLL;
                    for (l_154 = 0; (l_154 <= 1); l_154 += 1)
                    {
                        (*l_230) = &l_154;
                        (*l_230) = &l_154;
                    }
                    g_106 = ((g_106 & (safe_rshift_func_int8_t_s_u((-9L), 4))) > ((safe_unary_minus_func_uint8_t_u(((*l_145) <= ((l_243 == (*l_229)) & p_59)))) & l_244));
                    if (((safe_mul_func_uint16_t_u_u((g_176 < p_59), (((*l_229) || (((g_73 || 0xD0E78556L) | 0x3528L) || l_247)) || (0xEF85CD5396BCCB61LL & (func_60(((void*)0 != &l_154), p_59, p_59) & 251UL))))) >= l_243))
                    {
                        (*l_229) = (0x69ADE63DL == g_106);
                    }
                    else
                    {
                        (**l_248) = (l_248 != (void*)0);
                    }
                    (*l_229) = func_60(g_89, (safe_mod_func_int8_t_s_s((p_59 > l_251), g_10)), p_59);
                }
                (*l_230) = (*l_230);
            }
            else
            {
                int **l_253 = &l_252[4];
                int ***l_254 = &l_253;
                (*l_230) = l_252[4];
                (*l_254) = l_253;
            }
        }
        else
        {
            int **l_255 = (void*)0;
            int **l_256 = &l_229;
            (*l_256) = (void*)0;
        }
        for (l_181 = (-4); (l_181 > 1); ++l_181)
        {
            g_133 = &g_73;
        }
        for (g_89 = 0; (g_89 > (-26)); g_89 = safe_sub_func_uint8_t_u_u(g_89, 7))
        {
            if (p_59)
                break;
        }
    }
    return p_59;
}







static char func_60(unsigned p_61, unsigned p_62, unsigned long long p_63)
{
    int *l_72 = &g_73;
    long long l_77[5] = {(-3L),(-3L),(-3L),(-3L),(-3L)};
    int l_82 = 7L;
    int **l_83 = &l_72;
    int i;
    for (p_61 = 0; (p_61 == 20); ++p_61)
    {
        int **l_74 = &l_72;
        (*l_74) = l_72;
    }
    (*l_83) = (void*)0;
    return p_61;
}





int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
