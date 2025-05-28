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



static int g_4 = 0L;
static int *g_3 = &g_4;
static int g_15 = 0x4FFD8143L;
static int **g_30 = (void*)0;
static int ***g_29 = &g_30;
static unsigned g_122 = 0xEFE548C1L;
static unsigned g_143 = 0x822E8431L;
static int *g_160 = &g_15;
static int g_178 = 0L;
static int g_187 = 1L;
static short g_199 = 8L;
static unsigned g_226 = 1UL;
static unsigned g_269 = 0xD0B8D769L;
static int g_272 = 0L;
static int g_274 = 0xC87407B9L;
static unsigned short g_275 = 8UL;
static int *g_279 = (void*)0;
static unsigned char g_284 = 0xB5L;
static int g_299 = 0xBE2ECC4FL;
static int g_376 = 3L;
static const int g_408 = 0xD5B29963L;
static unsigned g_427 = 0xBACA6DECL;
static int g_467 = 1L;
static unsigned g_479 = 0x0D5363CBL;
static char g_592 = (-2L);
static short g_601 = (-6L);
static unsigned short g_645 = 0xC0D5L;
static unsigned char g_708 = 250UL;
static int g_731 = (-9L);
static short g_784 = 0x07FAL;
static char g_810 = (-1L);
static int g_817 = 0x11BDF6BBL;
static unsigned g_819 = 2UL;
static int ***g_822 = &g_30;
static int **g_885 = (void*)0;
static int g_943 = 0L;



static unsigned func_1(void);
static int func_6(int p_7, const unsigned p_8, short p_9);
static int func_20(const int p_21);
static short func_37(unsigned p_38, char p_39, unsigned p_40, int *** p_41, int * p_42);
static unsigned func_43(int * p_44, int ** p_45, const char p_46, unsigned p_47, const unsigned char p_48);
static int * func_49(int p_50, unsigned char p_51, const int p_52, unsigned short p_53);
static int func_57(int * p_58, const int p_59, int p_60);
static int func_64(const int p_65, int * p_66, const unsigned p_67, int * p_68, int ** p_69);
static unsigned short func_70(const int * p_71, int p_72, int * p_73, int *** const p_74);
static unsigned short func_75(unsigned p_76, const unsigned p_77, int *** const p_78, int *** p_79, int p_80);
static unsigned func_1(void)
{
    char l_2 = 0x5CL;
    unsigned l_28 = 0xFC0336AEL;
    int *l_648 = &g_4;
    int *l_733 = &g_299;
    int *** const l_741 = (void*)0;
    unsigned short l_745 = 7UL;
    int *l_748 = (void*)0;
    int l_804 = (-1L);
    unsigned char l_828 = 1UL;
    const int *l_886 = &g_15;
    int *** const l_914 = &g_885;
    unsigned l_922 = 4294967292UL;
    unsigned l_929 = 4294967291UL;
    short l_938 = 4L;
    unsigned short l_944 = 0UL;
    if (l_2)
    {
        int *l_5 = &g_4;
        l_5 = g_3;
        if (func_6(l_2, l_2, (*l_5)))
        {
            for (l_2 = 0; (l_2 <= (-1)); l_2--)
            {
                return g_4;
            }
        }
        else
        {
            const int l_54 = 0L;
            int **l_302 = &g_3;
            (*g_3) = 9L;
            (*l_5) = func_20((((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((((((safe_sub_func_int8_t_s_s((l_28 || g_4), (g_29 != &g_30))) , (safe_sub_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(func_37(g_4, (((g_15 != 0xF2A6ADD3L) , func_43(func_49((0xE5L == (0x45CBL && (*l_5))), l_2, l_54, g_4), l_302, g_226, g_178, g_275)) , 0x56L), g_601, &g_30, l_648), 9)), g_284)) != 1UL) | (*l_648)), g_4))) > (*l_5)) , (void*)0) != &g_4), (*l_648))), 65533UL)) == (*l_5)) >= g_122));

            ;

            for (g_592 = 0; (g_592 < 14); g_592 = safe_add_func_uint16_t_u_u(g_592, 9))
            {
                return g_408;
            }
        }

        ;

    }
    else
    {
        unsigned l_718 = 1UL;
        int * const *l_744 = &l_733;
        int *l_756 = &g_15;
        unsigned short l_782 = 0x0162L;
        int l_785 = (-6L);
        int l_873 = (-7L);
        const int **l_887 = &l_886;
        if (func_20((safe_mod_func_uint32_t_u_u(0x884396A7L, (g_408 | (safe_unary_minus_func_uint32_t_u(l_718)))))))
        {
            const int * const l_724 = &g_408;
            const int * const *l_723 = &l_724;
            int *l_725 = (void*)0;
            int l_726 = 0x4A64203FL;
            l_726 = (safe_rshift_func_uint8_t_u_s(4UL, ((safe_mod_func_uint32_t_u_u(((((g_708 == (*g_3)) || (l_718 & g_4)) , l_723) != (*g_29)), ((g_299 , g_708) , (*g_3)))) || g_178)));
        }
        else
        {
            int l_732 = 0x68CC3B66L;
            int l_734 = 0xEE535241L;
            int l_737 = (-1L);
            unsigned char l_740 = 0x69L;
            l_734 ^= (g_408 != ((safe_sub_func_uint32_t_u_u((l_718 , (safe_sub_func_uint16_t_u_u((g_731 , (!l_718)), l_718))), l_732)) ^ (((0xCB63L & ((void*)0 != l_733)) & 0x30C9L) , l_718)));
            (**l_744) = ((0UL <= (0x4AL | (*l_648))) < (((safe_mod_func_uint32_t_u_u(l_737, (((((((((safe_add_func_int8_t_s_s(l_740, ((!(l_741 != &g_30)) & (*l_733)))) , ((safe_lshift_func_int8_t_s_s(g_731, g_592)) , l_744)) != (*g_29)) > 1UL) ^ l_745) <= g_479) , (*g_160)) == g_226) | (*g_3)))) || (**l_744)) && g_178));
        }


        for (l_2 = 0; (l_2 == (-8)); l_2--)
        {
            const int l_755 = 0xA0A6571AL;
            int ***l_769 = &g_30;
            int l_826 = (-10L);
            unsigned short l_881 = 0x0463L;
            if (((g_269 && (**l_744)) < g_467))
            {
                short l_767 = 0x9A47L;
                const int ***l_772 = (void*)0;
                int *l_777 = &g_4;
                const int l_783 = 0x45122582L;
                int l_818 = 0L;
                int *** const l_823 = &g_30;
                int *l_831 = (void*)0;
                int *l_832 = (void*)0;
                int *l_833 = &g_731;
                int *l_834 = (void*)0;
                int *l_835 = &l_785;
                int *l_836 = &g_272;
                int *l_837 = (void*)0;
                int *l_838 = &g_731;
                int *l_839 = &g_299;
                int *l_840 = &l_804;
                int *l_841 = &l_818;
                int *l_842 = &g_376;
                int *l_843 = &l_818;
                int *l_844 = (void*)0;
                int *l_845 = &g_376;
                int *l_846 = &g_4;
                int *l_847 = (void*)0;
                int *l_848 = &g_15;
                int *l_849 = &g_376;
                int *l_850 = &g_15;
                int *l_851 = (void*)0;
                int *l_852 = &g_15;
                int *l_853 = &l_818;
                int *l_854 = &g_4;
                int *l_855 = &g_376;
                int *l_856 = &g_15;
                int *l_857 = &l_804;
                int *l_858 = (void*)0;
                int *l_859 = &g_376;
                int *l_860 = &g_731;
                int *l_861 = (void*)0;
                int *l_862 = &g_299;
                int *l_863 = &g_731;
                int *l_864 = (void*)0;
                int *l_865 = &g_299;
                int *l_866 = &g_4;
                int *l_867 = &g_272;
                int *l_868 = &g_272;
                int *l_869 = &g_15;
                int *l_870 = (void*)0;
                int *l_871 = (void*)0;
                int *l_872 = &g_299;
                int *l_874 = &g_4;
                int *l_875 = &l_804;
                int *l_876 = &l_818;
                int *l_877 = &g_299;
                int *l_878 = &l_873;
                int *l_879 = &g_4;
                int *l_880 = &l_785;
                for (g_427 = 18; (g_427 < 24); g_427 = safe_add_func_uint8_t_u_u(g_427, 5))
                {
                    (*g_160) = (((((g_143 < 0xFBL) ^ ((+((safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((*l_744) == (void*)0), (*l_733))) || ((~g_645) > func_20((**l_744)))), 4L)) || g_592)) | l_755)) > 0x5E48L) < (*g_160)) >= 0x73L);
                }
                for (g_479 = 0; (g_479 != 11); ++g_479)
                {
                    unsigned char l_768 = 249UL;
                    int *l_778 = &g_4;
                    int l_811 = 0x5681FB29L;
                }
                --l_828;
                --l_881;
            }
            else
            {
                short l_884 = 0xDC63L;
                (*l_648) = ((((void*)0 == &g_30) , l_884) , (*g_160));
                (*g_160) &= (0xCE801177L && (g_885 == (*g_822)));
            }
        }
        (*l_887) = l_886;
        for (g_272 = (-21); (g_272 == (-27)); --g_272)
        {
            int l_892 = 0xC76B76D2L;
            int l_905 = 0L;
            int *** const l_916 = &g_30;
            short l_923 = 0xA10DL;
            int *l_924 = (void*)0;
            for (g_427 = 0; (g_427 <= 43); g_427 = safe_add_func_uint8_t_u_u(g_427, 5))
            {
                unsigned short l_895 = 5UL;
                int ***l_904 = (void*)0;
                (*l_733) ^= (((l_892 && ((0L >= (*l_886)) ^ g_467)) ^ g_601) < 246UL);
                for (g_819 = 26; (g_819 != 29); g_819 = safe_add_func_uint8_t_u_u(g_819, 1))
                {
                    short l_908 = 0xCCC2L;
                    (*l_648) = l_908;
                }
            }
            if (((g_731 & ((**l_744) > (&l_756 == (void*)0))) | g_408))
            {
                const int *l_913 = &l_873;
                int *l_915 = &g_299;
                (*l_733) ^= (((((void*)0 == (*l_887)) > (safe_lshift_func_uint8_t_u_u(func_70(l_913, (*l_756), &l_905, l_914), 7))) ^ func_70(&l_892, (*l_648), l_915, l_916)) , (*g_3));
            }
            else
            {
                unsigned char l_917 = 246UL;
                const unsigned short l_925 = 65529UL;
                int l_930 = 1L;
                g_279 = func_49(g_645, ((g_269 , g_427) , func_70(func_49(l_917, l_917, (((safe_lshift_func_int8_t_s_u(0x10L, (~((safe_mod_func_uint32_t_u_u((((*l_648) && ((**l_744) > 0x75A43632L)) ^ (**l_887)), 1L)) ^ (*l_886))))) == l_922) , (*l_733)), l_923), l_917, l_924, l_916)), l_925, l_925);

                ;
                l_930 &= (g_187 >= ((((safe_add_func_uint16_t_u_u((func_20(l_925) || ((safe_unary_minus_func_uint32_t_u((func_6((**l_744), (*l_756), (func_20((*g_3)) != 0xD2783233L)) & g_819))) | l_929)), 0x976CL)) && g_784) <= g_645) && g_819));


            }
            return g_708;
        }
    }

    ;

    for (l_2 = 0; (l_2 <= 28); l_2++)
    {
        const int * const *l_933 = &l_886;
        int ***l_945 = (void*)0;
        unsigned l_946 = 4UL;
        l_946 |= ((((void*)0 == l_933) > (*l_733)) && (safe_div_func_uint16_t_u_u(func_37(g_408, (safe_lshift_func_int8_t_s_s((((l_938 >= (*g_160)) , (g_645 , 0xE7L)) != (((safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((0L ^ g_187), g_15)) , g_943), g_817)) , g_4) , g_601)), (**l_933))), l_944, l_945, &g_15), (*l_648))));
        return g_601;
    }
    (*l_733) = ((-4L) & (*g_160));
    return (*l_733);
}







static int func_6(int p_7, const unsigned p_8, short p_9)
{
    char l_12 = 0x7EL;
    const int *l_13 = (void*)0;
    int *l_14 = &g_15;
    int * const *l_17 = (void*)0;
    int * const **l_16 = &l_17;
    (*g_3) |= (((4294967295UL ^ (safe_sub_func_int32_t_s_s(l_12, 0x285CE96BL))) | (l_13 == (void*)0)) != 0xE5L);
    (*l_14) ^= (((void*)0 == &p_7) != ((*g_3) & (+g_4)));
    (*l_16) = (void*)0;
    return p_9;
}







static int func_20(const int p_21)
{
    int *l_675 = &g_272;
    int *l_676 = &g_4;
    int l_677 = 0xB1516EE5L;
    int *l_678 = &l_677;
    int l_679 = 3L;
    int *l_680 = &g_299;
    int *l_681 = (void*)0;
    int *l_682 = &g_4;
    int *l_683 = &g_272;
    int *l_684 = &g_15;
    int *l_685 = (void*)0;
    int *l_686 = (void*)0;
    int *l_687 = &g_299;
    int *l_688 = (void*)0;
    int *l_689 = &l_679;
    int l_690 = 0x4E0953FFL;
    int *l_691 = (void*)0;
    int *l_692 = &g_376;
    int *l_693 = &g_299;
    int *l_694 = &g_299;
    int l_695 = 0x2C9004BFL;
    int *l_696 = &l_677;
    int *l_697 = &g_15;
    int *l_698 = (void*)0;
    int *l_699 = (void*)0;
    int *l_700 = &g_272;
    int *l_701 = &l_695;
    int *l_702 = (void*)0;
    int *l_703 = &l_679;
    int *l_704 = &g_4;
    int *l_705 = &g_299;
    int *l_706 = &l_690;
    int *l_707 = (void*)0;
    int **l_711 = &g_279;
lbl_712:
    --g_708;
    (*l_711) = &l_695;

    ;
    if (g_708)
        goto lbl_712;
    return p_21;


}







static short func_37(unsigned p_38, char p_39, unsigned p_40, int *** p_41, int * p_42)
{
    int ***l_649 = &g_30;
    int *l_656 = &g_272;
    int l_657 = 0L;
    int *l_658 = &g_299;
    int **l_659 = (void*)0;
    int **l_660 = &l_658;
    char l_663 = (-8L);
    unsigned l_674 = 0x9D812244L;
    (*g_160) ^= (((p_40 , g_427) | (&g_30 != l_649)) <= l_657);
    (*l_660) = l_658;
    (*l_656) = (safe_add_func_int8_t_s_s(l_663, ((!((((((&l_660 == (void*)0) | ((*g_160) == l_674)) , 0x0D629ED4L) ^ (*p_42)) , (*p_42)) < g_122)) & g_479)));
    return (**l_660);
}







static unsigned func_43(int * p_44, int ** p_45, const char p_46, unsigned p_47, const unsigned char p_48)
{
    char l_303 = (-5L);
    int l_304 = 2L;
    int l_312 = (-1L);
    int *** const l_326 = &g_30;
    int ** const *l_353 = &g_30;
    int l_535 = 2L;
    int l_542 = 0L;
    int l_612 = 0xC1255270L;
    int l_622 = 0xE62C4057L;
    int l_624 = 0xE4AA0D40L;
    int l_643 = 1L;
    l_304 = l_303;
    for (g_275 = 19; (g_275 <= 33); g_275++)
    {
        unsigned char l_311 = 246UL;
        (*p_45) = (void*)0;


        (*p_44) = (g_122 == ((!g_274) & (-1L)));
        return p_48;
    }
    if (l_312)
    {
        unsigned l_319 = 18446744073709551615UL;
        l_304 = (**p_45);
        return g_187;
    }
    else
    {
        int *l_322 = &g_272;
        const int l_362 = 0x4AD1ED15L;
        unsigned short l_366 = 0UL;
        int *** const l_401 = &g_30;
        int ***l_402 = &g_30;
        unsigned char l_424 = 5UL;
        int l_433 = (-6L);
        short l_439 = 0x46D6L;
        int l_446 = 0x439EF4DCL;
        int l_459 = 0x729D3353L;
        int *l_482 = &l_446;
        int *l_483 = &l_312;
        int *l_484 = &l_433;
        int *l_485 = &l_312;
        int *l_486 = (void*)0;
        int *l_487 = &g_376;
        int *l_488 = &l_304;
        int *l_489 = &g_272;
        int *l_490 = &l_304;
        int *l_491 = &g_272;
        int l_492 = (-6L);
        int *l_493 = &g_376;
        int *l_494 = &g_299;
        int *l_495 = (void*)0;
        int l_496 = 0xE7E330E1L;
        int *l_497 = &g_15;
        int *l_498 = (void*)0;
        int *l_499 = &l_446;
        int *l_500 = &g_376;
        int l_501 = 0x82E834E3L;
        int l_502 = 0L;
        int *l_503 = (void*)0;
        int *l_504 = &g_272;
        int l_505 = 0L;
        int *l_506 = (void*)0;
        int *l_507 = &l_433;
        int *l_508 = &l_496;
        int *l_509 = &l_492;
        int *l_510 = &l_496;
        int *l_511 = &g_15;
        int *l_512 = &l_496;
        int *l_513 = &g_299;
        int *l_514 = &l_312;
        int *l_515 = (void*)0;
        int *l_516 = &l_505;
        int *l_517 = &l_312;
        int *l_518 = &l_505;
        int *l_519 = &l_433;
        int *l_520 = (void*)0;
        int *l_521 = (void*)0;
        int l_522 = 0x04AC793CL;
        int *l_523 = &l_433;
        int *l_524 = &l_304;
        int l_525 = 0xB2451EDDL;
        int l_526 = 0xB714C4D4L;
        int *l_527 = &l_446;
        int *l_528 = &g_299;
        int *l_529 = &l_312;
        int *l_530 = &g_15;
        int *l_531 = &l_526;
        int *l_532 = &l_505;
        int *l_533 = &l_501;
        int *l_534 = &l_312;
        int *l_536 = &l_522;
        int *l_537 = (void*)0;
        int *l_538 = &l_459;
        int *l_539 = &l_496;
        int *l_540 = &l_433;
        int *l_541 = (void*)0;
        int *l_543 = &g_272;
        int *l_544 = &l_525;
        int *l_545 = &l_502;
        int *l_546 = &l_542;
        int *l_547 = &l_525;
        int *l_548 = &l_505;
        int *l_549 = &l_522;
        int *l_550 = &l_304;
        int *l_551 = &l_459;
        int *l_552 = &l_525;
        int *l_553 = &l_492;
        int *l_554 = &l_312;
        int *l_555 = &l_304;
        int *l_556 = &l_492;
        int *l_557 = &l_505;
        int *l_558 = &g_15;
        int *l_559 = &l_526;
        int *l_560 = &l_459;
        int *l_561 = &l_433;
        int *l_562 = &l_304;
        int *l_563 = &g_376;
        int *l_564 = &g_272;
        int *l_565 = &g_299;
        int *l_566 = (void*)0;
        int *l_567 = (void*)0;
        int *l_568 = &l_459;
        int *l_569 = (void*)0;
        int *l_570 = (void*)0;
        int *l_571 = &l_312;
        int *l_572 = &g_15;
        int *l_573 = &l_501;
        int *l_574 = (void*)0;
        int *l_575 = &l_446;
        int l_576 = 0L;
        int *l_577 = (void*)0;
        int l_578 = 0x0EA1A5F8L;
        int *l_579 = &l_496;
        int *l_580 = &g_15;
        int *l_581 = &l_525;
        int *l_582 = &l_526;
        int l_583 = 0xCF710B6FL;
        int *l_584 = &l_576;
        int *l_585 = &l_433;
        int *l_586 = (void*)0;
        int *l_587 = &l_304;
        int *l_588 = &l_522;
        int *l_589 = &l_525;
        int *l_590 = &g_15;
        int l_591 = (-1L);
        int *l_593 = &l_433;
        int *l_594 = &l_583;
        int *l_595 = &l_583;
        int *l_596 = (void*)0;
        int *l_597 = &l_446;
        int *l_598 = &l_433;
        int *l_599 = &l_304;
        int *l_600 = &l_312;
        int *l_602 = &l_501;
        int *l_603 = &l_496;
        int *l_604 = &l_525;
        int *l_605 = &l_505;
        int *l_606 = &l_583;
        int *l_607 = &l_492;
        int *l_608 = (void*)0;
        int *l_609 = &l_591;
        int *l_610 = &l_446;
        int *l_611 = &l_496;
        int *l_613 = &l_459;
        int *l_614 = &l_522;
        int *l_615 = &l_312;
        int *l_616 = &l_312;
        int *l_617 = &l_576;
        int *l_618 = &l_583;
        int *l_619 = &l_591;
        int *l_620 = &l_446;
        int *l_621 = &l_496;
        int *l_623 = &l_312;
        int *l_625 = &g_376;
        short l_626 = 0x5CF8L;
        int l_627 = 0xB4DA3A7CL;
        int *l_628 = &l_627;
        int *l_629 = &l_505;
        int *l_630 = &l_542;
        int *l_631 = (void*)0;
        int *l_632 = &l_624;
        int *l_633 = &l_622;
        int *l_634 = &l_505;
        int *l_635 = (void*)0;
        int *l_636 = &g_272;
        int *l_637 = (void*)0;
        int *l_638 = &l_525;
        int *l_639 = (void*)0;
        int *l_640 = &l_591;
        int *l_641 = &l_591;
        int *l_642 = (void*)0;
        short l_644 = 1L;
        for (p_47 = 0; (p_47 >= 21); p_47 = safe_add_func_uint16_t_u_u(p_47, 1))
        {
            unsigned l_323 = 3UL;
            (*l_322) = ((((p_46 , (l_322 != (*p_45))) && l_323) & ((0x9DA1L != (safe_rshift_func_int8_t_s_s(((*p_44) == 0x08290AFDL), 3))) , p_48)) , (+(func_70(&l_304, l_323, (*p_45), l_326) ^ p_47)));
            (*p_44) = l_323;
            return p_48;
        }
        for (g_178 = 3; (g_178 > (-4)); --g_178)
        {
            char l_330 = 9L;
            int *l_355 = &g_15;
            int *** const l_414 = &g_30;
            unsigned l_425 = 18446744073709551608UL;
            int l_449 = 0x6B827429L;
            int l_477 = (-1L);
        }
        g_645--;
        (*l_528) = ((*g_29) != (*l_353));
    }
    return g_199;
}







static int * func_49(int p_50, unsigned char p_51, const int p_52, unsigned short p_53)
{
    int *l_61 = &g_15;
    int *** const l_84 = &g_30;
    for (g_15 = 10; (g_15 < (-24)); g_15--)
    {
        int l_81 = 0x9CF48B05L;
        int ***l_85 = (void*)0;
        int **l_280 = &l_61;
        int *l_298 = &g_299;
        const int *l_301 = &g_4;
        const int **l_300 = &l_301;
    }
    return l_61;


}







static int func_57(int * p_58, const int p_59, int p_60)
{
    unsigned short l_288 = 0xBACBL;
    const int *l_291 = &g_15;
    int ***l_296 = &g_30;
    unsigned l_297 = 1UL;
    l_288 ^= 0xCC1B0773L;
    g_272 = ((((safe_lshift_func_int8_t_s_s(0x3FL, (~0x79L))) && ((0xB7L <= (+l_288)) > func_70(l_291, (((((void*)0 == &g_30) <= ((safe_mod_func_uint16_t_u_u((g_272 || (((void*)0 != l_296) != p_60)), p_60)) | p_59)) == (*l_291)) , (*p_58)), p_58, l_296))) == l_297) , (-10L));
    return (*p_58);
}







static int func_64(const int p_65, int * p_66, const unsigned p_67, int * p_68, int ** p_69)
{
    int l_283 = (-3L);
    int **l_287 = &g_160;
    (*p_68) = (**p_69);
    for (g_272 = 0; (g_272 >= 18); g_272 = safe_add_func_uint16_t_u_u(g_272, 1))
    {
        l_283 |= (*p_68);
        --g_284;
        if ((*p_68))
            continue;
    }
    (*l_287) = &l_283;

    ;
    return (*p_66);


}







static unsigned short func_70(const int * p_71, int p_72, int * p_73, int *** const p_74)
{
    return p_72;
}







static unsigned short func_75(unsigned p_76, const unsigned p_77, int *** const p_78, int *** p_79, int p_80)
{
    short l_86 = 0x3988L;
    unsigned l_108 = 18446744073709551615UL;
    char l_146 = 0x05L;
    int l_159 = 0x9C57FF43L;
    int l_200 = (-1L);
lbl_278:
    if (l_86)
    {
        int l_87 = 0x1D345D19L;
        int *l_88 = &l_87;
        (*l_88) = l_87;
    }
    else
    {
        char l_93 = 0x5BL;
        int l_114 = (-7L);
        int l_117 = 0xC7D6112DL;
        short l_179 = 0xD4F0L;
        int l_180 = 0xF3EDF114L;
        int l_207 = 0x602F1270L;
        short l_273 = 9L;
        for (l_86 = 0; (l_86 != (-19)); l_86 = safe_sub_func_uint32_t_u_u(l_86, 2))
        {
            char l_94 = 0xCEL;
            int l_111 = 4L;
            int l_190 = 0L;
            for (p_80 = 0; (p_80 == 25); p_80++)
            {
                l_93 &= 1L;
            }
            if (l_94)
            {
                unsigned l_97 = 0x52423599L;
                int l_112 = 0x0FD02F95L;
                unsigned char l_119 = 0xFBL;
                l_97 = ((safe_sub_func_int8_t_s_s(l_93, g_15)) <= p_77);
                for (l_97 = 0; (l_97 != 19); l_97 = safe_add_func_uint8_t_u_u(l_97, 6))
                {
                    int *l_100 = &g_15;
                    int **l_101 = &g_3;
                    int *l_113 = &l_111;
                    int *l_115 = &l_111;
                    int *l_116 = &l_114;
                    int *l_118 = &l_117;
                    if (l_86)
                        break;
                    (*l_101) = l_100;

                    ;
                    l_111 = (((safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((l_108 < (*g_3)) , (~(g_15 | 0xDEL))), (((safe_add_func_uint32_t_u_u((0x90DDL >= ((((l_97 > l_97) , &g_30) == p_78) <= l_93)), l_94)) , l_108) && g_15))), l_94)) , l_86), g_4)) , l_94) & l_108);
                    l_119++;
                }
                ++g_122;
            }
            else
            {
                unsigned short l_125 = 65535UL;
                int *l_126 = &l_117;
                int l_216 = 0xD04B031DL;
                int l_218 = (-1L);
                int l_219 = 0xDB1C9D1CL;
                (*l_126) = l_125;
                (*l_126) &= 0xDFDFBAD2L;
                if ((*g_3))
                    break;
                for (l_114 = 1; (l_114 >= 12); l_114 = safe_add_func_int8_t_s_s(l_114, 1))
                {
                    unsigned short l_129 = 2UL;
                    int l_142 = 0x79C8A6F1L;
                    int * const *l_232 = &g_3;
                    if (l_129)
                    {
                        int *l_130 = &l_117;
                        int *l_131 = &l_111;
                        int *l_132 = &l_117;
                        int *l_133 = &l_111;
                        int l_134 = 1L;
                        int *l_135 = (void*)0;
                        int *l_136 = &l_111;
                        int *l_137 = &l_134;
                        int *l_138 = &l_117;
                        int *l_139 = (void*)0;
                        int *l_140 = &l_134;
                        int *l_141 = (void*)0;
                        --g_143;
                        if (l_146)
                            continue;
                    }
                    else
                    {
                        (*l_126) = (*g_3);
                    }
                    for (l_93 = 0; (l_93 == 13); ++l_93)
                    {
                        (*l_126) &= (p_79 != (void*)0);
                        (*l_126) |= p_80;
                        if (l_86)
                            continue;
                        (*l_126) = (g_4 , l_111);
                    }
                    if ((((((p_80 != ((safe_mod_func_int16_t_s_s((((p_76 <= p_80) ^ (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_122, (((*p_78) == ((g_4 , (safe_rshift_func_uint8_t_u_u(((*g_29) != (*g_29)), ((l_142 != 4294967295UL) > 6UL)))) , (*p_78))) , g_143))), l_159))) < 0xC10FL), l_142)) < l_93)) || p_77) != 4L) , l_126) != g_160))
                    {
                        int *l_161 = &l_117;
                        int *l_162 = &l_117;
                        int *l_163 = &l_117;
                        int *l_164 = &l_111;
                        int *l_165 = &l_111;
                        int *l_166 = &l_142;
                        int *l_167 = &l_111;
                        int *l_168 = &l_111;
                        int *l_169 = &l_142;
                        int *l_170 = &l_111;
                        int *l_171 = &l_111;
                        int *l_172 = &l_111;
                        int *l_173 = &l_142;
                        int *l_174 = (void*)0;
                        int *l_175 = &l_111;
                        int *l_176 = &l_142;
                        int *l_177 = &l_117;
                        int *l_181 = (void*)0;
                        int *l_182 = &l_180;
                        int *l_183 = &l_180;
                        int *l_184 = &l_117;
                        int *l_185 = &l_180;
                        int *l_186 = (void*)0;
                        int *l_188 = &l_117;
                        int *l_189 = &l_117;
                        int *l_191 = &l_111;
                        int *l_192 = (void*)0;
                        int *l_193 = &l_111;
                        int *l_194 = &l_111;
                        int *l_195 = (void*)0;
                        int *l_196 = &l_142;
                        int *l_197 = &l_111;
                        int *l_198 = &l_190;
                        int *l_201 = (void*)0;
                        int *l_202 = &l_180;
                        int *l_203 = (void*)0;
                        int *l_204 = &l_180;
                        int *l_205 = (void*)0;
                        int *l_206 = &l_142;
                        int *l_208 = &l_117;
                        int l_209 = 1L;
                        int *l_210 = &l_142;
                        int *l_211 = &l_190;
                        int *l_212 = &l_111;
                        int *l_213 = &l_190;
                        int *l_214 = &l_209;
                        int *l_215 = &l_111;
                        int *l_217 = &l_190;
                        int *l_220 = &l_117;
                        int *l_221 = (void*)0;
                        int *l_222 = &l_200;
                        int *l_223 = &l_216;
                        int *l_224 = &l_200;
                        int *l_225 = &l_180;
                        l_161 = l_126;
                        (*l_161) = l_142;
                        (*l_126) |= 0x50B5FE46L;
                        --g_226;
                    }
                    else
                    {
                        int *l_229 = &l_218;
                        char l_233 = 0L;
                        (*l_126) &= (((((l_129 ^ (l_159 <= ((l_129 , ((((((((void*)0 != l_229) && (g_226 , l_108)) , ((p_80 > ((p_77 < (-10L)) , g_4)) | 0L)) , 7L) , l_232) == (*g_29)) >= p_80)) != 0x0E25L))) > 4294967295UL) >= p_80) , l_233) , 0x105832D0L);
                        (*l_229) &= (safe_lshift_func_uint16_t_u_u(0xEBB8L, 0));
                    }
                }
            }
        }
        if (l_108)
        {
            int *l_236 = &l_200;
            int *l_237 = &l_117;
            l_236 = &l_117;

            ;
            (*l_236) = 6L;
            l_237 = &l_207;

            ;
            for (l_180 = 0; (l_180 >= (-13)); l_180 = safe_sub_func_uint8_t_u_u(l_180, 5))
            {
                for (g_187 = 0; (g_187 <= (-3)); g_187 = safe_sub_func_int32_t_s_s(g_187, 6))
                {
                    (*l_237) = (+(safe_sub_func_uint16_t_u_u(p_80, l_200)));
                    (*l_236) = (((safe_add_func_uint32_t_u_u(l_200, (safe_add_func_int16_t_s_s(p_77, (((*g_160) ^ (*g_3)) <= g_226))))) | 0x342E7D5CL) && g_187);
                }
                (*l_236) ^= (safe_rshift_func_int16_t_s_s(g_178, 4));
            }
        }
        else
        {
            int *l_250 = &l_117;
            int *l_251 = (void*)0;
            int *l_252 = &l_180;
            int *l_253 = &l_207;
            int *l_254 = (void*)0;
            int *l_255 = (void*)0;
            int *l_256 = &l_180;
            int *l_257 = &l_117;
            int *l_258 = &l_207;
            int *l_259 = &l_114;
            int *l_260 = &l_114;
            int *l_261 = &l_114;
            int *l_262 = (void*)0;
            int *l_263 = &l_207;
            int l_264 = (-10L);
            int *l_265 = &l_180;
            int *l_266 = &l_207;
            int l_267 = 5L;
            int *l_268 = &l_264;
            g_269--;
            --g_275;
        }
    }
    g_3 = &l_200;

    ;
    if (p_77)
        goto lbl_278;
    return g_178;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_601, "g_601", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_784, "g_784", print_hash_value);
    transparent_crc(g_810, "g_810", print_hash_value);
    transparent_crc(g_817, "g_817", print_hash_value);
    transparent_crc(g_819, "g_819", print_hash_value);
    transparent_crc(g_943, "g_943", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
