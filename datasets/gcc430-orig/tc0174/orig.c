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



static int g_2 = 0xC0AE9714L;
static unsigned char g_17 = 8UL;
static int g_48 = 0x4F06702EL;
static unsigned char g_50 = 8UL;
static short g_52 = 0xC2AFL;
static char g_64 = 0x4FL;
static int g_90 = (-1L);
static int *g_91 = (void*)0;
static short *g_100 = &g_52;
static short **g_99 = &g_100;
static int *g_105 = &g_48;
static int g_107 = 0xC8398D9BL;
static unsigned g_128 = 0xCCA1794AL;
static char g_138 = (-5L);
static unsigned short g_142 = 65532UL;
static short g_145 = 0xA804L;
static char *g_149 = &g_138;
static char **g_148 = &g_149;
static int g_161 = (-2L);
static unsigned char *g_179 = (void*)0;
static unsigned char **g_178 = &g_179;
static unsigned char g_222 = 0x8EL;
static unsigned g_255 = 0xF387BF19L;
static int ***g_343 = (void*)0;
static char ***g_403 = &g_148;
static char ****g_402 = &g_403;
static unsigned short g_480 = 0UL;
static unsigned *g_582 = &g_255;
static unsigned **g_581 = &g_582;
static int g_635 = 0x76309D58L;
static unsigned ****g_659 = (void*)0;
static int *g_669 = (void*)0;
static unsigned *g_691 = &g_128;
static unsigned **g_690 = &g_691;
static char g_746 = 0L;
static char g_790 = (-7L);
static unsigned short *g_912 = &g_480;
static unsigned short **g_911 = &g_912;
static unsigned char ***g_925 = &g_178;
static unsigned char ****g_924 = &g_925;
static unsigned char **g_1039 = &g_179;
static unsigned short g_1048 = 0xD294L;



static unsigned func_1(void);
static short func_4(int * p_5, unsigned p_6, int * p_7);
static unsigned char func_20(unsigned char p_21, int p_22);
static char func_28(int * p_29, unsigned char * p_30, int * p_31, int p_32);
static unsigned char * func_35(int * p_36, short p_37, int * p_38);
static int * func_39(int * p_40, short p_41, unsigned char p_42, unsigned char p_43, unsigned char p_44);
static int * func_45(char p_46);
static unsigned char * func_53(int * p_54);
static int * func_55(int * p_56, int p_57);
static int func_58(unsigned p_59);
static unsigned func_1(void)
{
    int *l_3 = &g_2;
    unsigned char *l_16 = &g_17;
    unsigned char *l_18 = (void*)0;
    short l_19 = 0x76EEL;
    int l_1169 = 1L;
    int l_1174 = (-4L);
    int l_1175 = 0x5463DDB5L;
    short **l_1176 = &g_100;
    short ***l_1177 = &l_1176;
    unsigned char l_1214 = 0x49L;
    (*l_3) = g_2;
    if ((func_4(((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((*l_3) , (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_u((*l_3), ((l_19 = ((*l_16) = 1UL)) <= ((l_1169 = func_20((*l_3), (1L && g_2))) < (((*l_1177) = ((((((-1L) | (safe_lshift_func_uint16_t_u_s(((((safe_div_func_int16_t_s_s((*l_3), l_1174)) >= 0x4E6CBEC4L) & l_1175) ^ 0x636FBEBFL), 14))) > (*l_3)) & 0xEBF9L) | (*l_3)) , l_1176)) != (void*)0))))) , 8UL) <= (*l_3)), 4))), (*l_3))) , (*l_3)), (*l_3))) , &g_48), (*l_3), &l_1175) && 1L))
    {
        unsigned l_1209 = 0x8E92C335L;
        l_1209 = ((*l_3) = 0x6F6E9E43L);
    }
    else
    {
        unsigned short **l_1212 = &g_912;
        int l_1213 = 0x015DF859L;
        (*l_3) = (safe_lshift_func_int8_t_s_u(((*g_149) = (&g_912 != l_1212)), (l_1214 = l_1213)));
        return (**g_690);
    }


    ;

    ;
    ;
    ;

    ;
    return (*g_691);
}







static short func_4(int * p_5, unsigned p_6, int * p_7)
{
    unsigned char *l_1185 = (void*)0;
    int l_1188 = 9L;
    int l_1192 = 0L;
    unsigned char ***l_1205 = (void*)0;
    for (g_746 = (-13); (g_746 < 13); g_746++)
    {
        int *l_1184 = &g_90;
        unsigned char *l_1193 = &g_50;
        unsigned short l_1204 = 0x1FE7L;
        int l_1208 = 0xC6123D60L;
        (*p_5) = (safe_rshift_func_int8_t_s_u(((l_1188 = (safe_mul_func_uint8_t_u_u((~(*l_1184)), (*g_149)))) , (*l_1184)), l_1192));
        (*p_5) = (((l_1192 , p_6) , g_659) != (void*)0);
        (*p_7) = ((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s(func_58((*g_691)), (safe_mul_func_int8_t_s_s((((*g_149) != ((p_6 < (g_50 , (((l_1205 = (l_1204 , (void*)0)) == ((*g_924) = (*g_924))) == (safe_mul_func_int8_t_s_s(p_6, 0x4CL))))) && 0xBAA1L)) | (*p_7)), p_6)))) & l_1188), p_6)), 1L)) != l_1208);
    }
    return l_1188;
}







static unsigned char func_20(unsigned char p_21, int p_22)
{
    char l_27 = 0xEEL;
    int *l_33 = (void*)0;
    unsigned short l_34 = 5UL;
    int *l_444 = &g_90;
    char **l_450 = &g_149;
    int **l_459 = &l_33;
    unsigned l_460 = 0UL;
    unsigned *l_486 = &g_255;
    unsigned **l_485 = &l_486;
    short ***l_569 = &g_99;
    int l_631 = 9L;
    unsigned char *l_649 = &g_50;
    int *l_730 = &g_107;
    int **l_729 = &l_730;
    unsigned char ***l_741 = &g_178;
    char l_747 = 1L;
    unsigned short l_750 = 0UL;
    unsigned char l_793 = 0xD0L;
    unsigned l_808 = 0x54F56237L;
    int *l_813 = &l_631;
    unsigned short *l_844 = (void*)0;
    unsigned short **l_843 = &l_844;
    char l_858 = 0xBFL;
    unsigned char *l_927 = &l_793;
    int l_1010 = (-1L);
    unsigned char l_1106 = 0x19L;
    int *l_1149 = &l_1010;
    if (((*l_444) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_27 = g_2), ((func_28(l_33, (l_34 , func_35(func_39(func_45(p_21), p_22, p_22, (safe_mul_func_int8_t_s_s(p_22, p_22)), l_34), g_2, l_33)), l_33, g_2) != p_21) != 2UL))), p_21))))
    {
        int *l_447 = &g_90;
        if (p_22)
        {
            unsigned *l_451 = (void*)0;
            unsigned *l_452 = &g_255;
            int l_453 = 0xE40C7085L;
            unsigned short l_454 = 0x859AL;
            unsigned *l_455 = &g_128;
            int **l_456 = &g_91;
            (*l_456) = func_39(l_447, func_58(((*l_455) = (((*g_100) != (*l_447)) == l_454))), p_21, p_22, p_22);

            ;
        }
        else
        {
            int *l_457 = &g_2;
            int **l_458 = &l_457;
            (*l_458) = l_457;
        }


    }
    else
    {
        g_105 = l_444;

        ;
    }



    (*l_459) = l_444;

    ;
    if (l_460)
    {
        unsigned short l_461 = 1UL;
        int l_481 = 0xB60CB633L;
        char **l_546 = (void*)0;
        short ***l_570 = (void*)0;
        unsigned **l_580 = &l_486;
        int *l_583 = &l_481;
        if (l_461)
        {
            unsigned char l_464 = 0xF3L;
            unsigned short *l_465 = &l_34;
            unsigned short *l_466 = &l_461;
            unsigned short *l_467 = &g_142;
            int l_468 = 0x214DAFFDL;
            unsigned short *l_479 = &g_480;
            unsigned *l_483 = &g_255;
            unsigned **l_482 = &l_483;
            unsigned ***l_484 = &l_482;
            unsigned ***l_487 = &l_485;
            (**l_459) = (*l_444);
            (*l_459) = ((((((safe_rshift_func_uint16_t_u_u((l_468 = ((*l_467) = ((*l_466) = ((*l_465) = l_464)))), 15)) != ((safe_mul_func_uint16_t_u_u(((*l_479) = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(p_22, (p_21 = (!l_464)))), (((safe_rshift_func_int8_t_s_u((~(safe_sub_func_int32_t_s_s((g_107 ^ (!((*g_100) && 0x9593L))), ((*g_100) > (*g_100))))), 6)) , ((&p_22 == &g_107) == (*l_444))) || p_22)))), g_48)) | l_481)) && 7L) && 0xF9L) & 0xBB9B582AL) , (void*)0);

            ;
            (*l_459) = (*l_459);
            (*l_444) = (((*l_484) = l_482) == ((*l_487) = l_485));
        }
        else
        {
            unsigned char l_492 = 0xF3L;
            int *l_522 = (void*)0;
            for (g_52 = 9; (g_52 > (-5)); g_52 = safe_sub_func_int32_t_s_s(g_52, 5))
            {
                int l_506 = 1L;
                int *l_523 = &g_48;
                for (g_480 = (-27); (g_480 <= 60); ++g_480)
                {
                    short l_497 = (-1L);
                    if (((*g_402) == (void*)0))
                    {
                        (*l_33) = ((l_492 == (safe_rshift_func_uint16_t_u_u((p_21 & (safe_mul_func_uint8_t_u_u(l_497, p_22))), 14))) >= 0xE7L);
                    }
                    else
                    {
                        int *l_507 = &l_481;
                        (*l_507) = ((*l_33) = ((safe_div_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((1UL != (safe_lshift_func_uint16_t_u_s(l_506, (&g_99 != ((((((****g_402) >= (p_21 = 246UL)) , l_492) >= (func_58(g_2) == 0xA5L)) , p_22) , &g_99))))), (-7L))) , 0xCBL), 5)) || (*l_444)), 4294967286UL)) && g_107));
                    }
                }
                (*l_459) = func_55(func_39((*l_459), ((p_21 ^ (((safe_rshift_func_uint16_t_u_s((p_22 & ((~(*g_149)) | ((*l_33) && (*l_33)))), ((safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(l_492, (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((((safe_div_func_int16_t_s_s((l_481 && (safe_add_func_uint8_t_u_u(l_481, 254UL))), (**g_99))) , p_21) > p_21) ^ p_21) , (*l_444)), (***g_403))), l_461)) == 1UL) > p_21))) >= (*l_444)), g_480)) , l_492))) <= 65533UL) && g_90)) , (-9L)), (*l_444), g_2, p_22), l_481);

                ;
                (*l_459) = l_522;

                ;
                if (p_21)
                {
                    if (l_506)
                    {
                        return l_461;
                    }
                    else
                    {
                        return l_492;
                    }
                }
                else
                {
                    (*l_459) = l_523;

                    ;
                }

                ;
            }

            ;
            (*l_33) = func_58(func_58(l_481));
        }

        ;
        for (g_161 = 0; (g_161 >= 19); g_161 = safe_add_func_uint8_t_u_u(g_161, 9))
        {
            int *l_531 = &g_2;
            unsigned l_541 = 0x15DE8505L;
            unsigned short *l_543 = &g_142;
            unsigned short l_578 = 0x1707L;
            for (l_27 = 18; (l_27 == (-9)); l_27--)
            {
                unsigned *l_530 = &g_128;
                int l_534 = 3L;
                char **l_545 = &g_149;
                int *l_556 = &l_481;
                for (l_34 = 0; (l_34 <= 8); ++l_34)
                {
                    unsigned *l_533 = (void*)0;
                    unsigned **l_532 = &l_533;
                    int l_544 = 0x09546078L;
                    if (((*l_444) = func_58(((l_530 != ((*l_532) = func_55((l_461 , l_531), p_21))) ^ l_534))))
                    {
                        unsigned short *l_539 = &l_34;
                        unsigned short **l_538 = &l_539;
                        unsigned short *l_542 = &g_480;
                        (*l_459) = func_55(func_55(&g_48, (safe_unary_minus_func_int8_t_s((*g_149)))), (g_107 | ((safe_mul_func_uint8_t_u_u(p_21, (((((*l_538) = &g_480) != (((*l_542) = (!(p_21 , (((**l_485) = ((safe_unary_minus_func_uint32_t_u((((func_58(l_541) && l_534) > 255UL) && g_90))) <= g_64)) || (*l_531))))) , l_543)) , p_21) <= l_534))) | 3UL)));

                        ;
                        ;
                    }
                    else
                    {
                        (*l_459) = (*l_459);
                        return l_544;
                    }

                    ;
                    ;
                }
                if (p_21)
                    continue;
                (*l_444) = (l_545 == l_546);
                for (g_142 = 0; (g_142 < 54); ++g_142)
                {
                    int l_555 = 0x9511A08FL;
                    unsigned char *l_557 = &g_50;
                    unsigned char *l_558 = &g_222;
                    (*l_459) = func_55(func_39(func_55(&g_90, ((0L < ((*l_558) = ((*l_557) = ((safe_rshift_func_uint16_t_u_s((p_22 != (func_28(((*l_459) = func_55(func_39(func_55(((safe_mul_func_uint16_t_u_u(g_90, ((((((safe_div_func_int8_t_s_s((+4L), p_22)) | l_555) >= g_161) == 7UL) >= g_2) < l_555))) , l_556), l_555), (*l_444), l_555, p_21, (*l_531)), (*l_556))), l_557, &l_534, p_21) >= g_145)), p_22)) != (*l_531))))) , p_21)), (*g_100), p_21, p_21, g_161), l_555);

                    ;
                }
            }
            if (p_21)
                continue;
            if (p_21)
            {
                unsigned short *l_571 = (void*)0;
                unsigned short *l_576 = &l_34;
                int l_577 = 0x77900687L;
                char *l_579 = &l_27;
                (*l_444) = (((((safe_div_func_uint16_t_u_u(p_22, p_21)) >= (((*l_579) = ((**l_450) = ((safe_div_func_uint16_t_u_u((+g_52), (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(p_22, (safe_mul_func_uint16_t_u_u(((func_58(((l_481 = (g_480 = (g_142 = (l_569 == l_570)))) ^ (safe_lshift_func_uint16_t_u_s(0xCE45L, ((((l_577 = ((safe_add_func_uint16_t_u_u(((*l_576) = g_90), (((~p_22) ^ p_21) | 0x4F2FL))) < 0x22E9E734L)) && l_577) , 8UL) & 0x23D87D20L))))) , 0L) > l_461), g_222)))), l_578)))) || p_21))) || (*l_531))) , l_580) != g_581) && 0x0036L);
                (*l_459) = l_531;

                ;
            }
            else
            {
                return p_21;
            }

            ;
        }

        ;
        (*l_459) = &l_481;

        ;
        l_583 = &l_481;
    }
    else
    {
        unsigned short *l_590 = &g_142;
        unsigned short l_599 = 0xC42DL;
        unsigned ***l_616 = &l_485;
        int *l_617 = &g_2;
        char l_634 = 0x63L;
        if (((safe_add_func_uint8_t_u_u(((~(p_22 , (((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((*l_590) = 65529UL), (safe_sub_func_int8_t_s_s((****g_402), 0xA0L)))), 4)) && (*l_444)) , ((safe_mod_func_uint32_t_u_u(((**g_581) = ((p_22 & ((~p_22) | ((safe_div_func_int32_t_s_s(p_22, 0x1FC6B628L)) != (*l_33)))) == p_22)), 4294967288UL)) || 0xECL)))) < p_22), 0x81L)) && (*g_582)))
        {
            unsigned l_600 = 0xE0A9AFCFL;
            int l_609 = (-3L);
            unsigned char l_630 = 255UL;
            unsigned short l_632 = 0x2633L;
            int *l_645 = &l_631;
            if ((((*g_100) = (*g_100)) == ((l_609 = ((**l_459) != (((safe_rshift_func_int8_t_s_s((((****g_402) | l_599) >= (((void*)0 != &p_21) || l_600)), 7)) , ((safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u(p_21, ((((safe_add_func_uint32_t_u_u(((((safe_add_func_int16_t_s_s(func_58(g_64), 0xC778L)) >= p_22) >= 0xBB88A62CL) < 0x1E74573FL), 0L)) && 0x7ECB472EL) , 1L) & (*g_582)))) , 0L), 7)) | 0x60L)) ^ 6L))) >= g_138)))
            {
                int *l_628 = (void*)0;
                int l_640 = 0xE9425D5BL;
                unsigned *l_643 = &l_600;
                g_91 = ((*l_459) = ((l_609 = p_22) , &g_90));

                ;
                for (g_161 = 0; (g_161 > (-8)); g_161 = safe_sub_func_int8_t_s_s(g_161, 1))
                {
                    unsigned ***l_613 = &l_485;
                    unsigned ****l_612 = &l_613;
                    unsigned ***l_615 = &g_581;
                    unsigned ****l_614 = &l_615;
                    (*l_459) = ((((*l_614) = ((*l_612) = &g_581)) != l_616) , l_617);

                    ;
                    ;
                }

                ;
                for (g_145 = (-21); (g_145 >= 11); g_145++)
                {
                    short l_629 = 0xDE2DL;
                    int *l_633 = (void*)0;
                    for (l_609 = 0; (l_609 != (-1)); l_609 = safe_sub_func_int16_t_s_s(l_609, 7))
                    {
                        (*l_459) = &l_609;

                        ;
                    }

                    ;
                    if ((safe_mul_func_int8_t_s_s(((g_255 || (safe_mul_func_int16_t_s_s(p_22, (p_21 , g_222)))) & p_21), 0UL)))
                    {
                        (*l_459) = l_617;

                        ;
                        (*g_91) = 5L;
                    }
                    else
                    {
                        unsigned *l_644 = &g_128;
                        (*l_459) = func_55(((*l_459) = &l_609), p_21);

                        ;
                        l_645 = ((g_222 = (p_22 != ((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_64, l_640)), ((((safe_div_func_int8_t_s_s((((*l_644) = (!(&g_128 == (l_643 = &g_128)))) , (****g_402)), 0x79L)) & (!((((*g_91) = ((((p_21 >= (((***l_569) = p_21) || 0x03B1L)) <= (*l_617)) || (*g_100)) , p_22)) , 255UL) ^ (*l_617)))) , p_21) != p_22))) >= 0x69L))) , (void*)0);

                        ;
                        ;
                    }

                    ;
                }

                ;
                ;
            }
            else
            {
                int *l_648 = (void*)0;
                int l_660 = (-1L);
                for (g_128 = 0; (g_128 > 7); g_128 = safe_add_func_uint8_t_u_u(g_128, 2))
                {
                    unsigned *l_655 = &l_460;
                    unsigned ****l_658 = &l_616;
                    int l_661 = 0x14BF563FL;
                    unsigned char **l_668 = &l_649;
                    int l_683 = 0x2B160D24L;
                    (*l_645) = ((((~(~((*l_649) = func_28(l_648, ((*g_178) = l_649), func_39(&g_48, (**g_99), g_635, (*l_444), ((safe_unary_minus_func_uint32_t_u(((*l_655) = ((*l_486) = (safe_sub_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(0xF5L, p_21)) || 2L) || (*l_645)) | p_22), p_22)))))) < p_22)), g_50)))) & p_22) | 0x5021L) < (*l_645));

                    ;
                    for (g_255 = 0; (g_255 >= 39); g_255 = safe_add_func_uint32_t_u_u(g_255, 5))
                    {
                        l_660 = (l_658 == g_659);
                        l_661 = func_28(l_617, (*g_178), l_617, p_21);
                    }
                    if (((0x0F8BL & ((g_142 ^ (safe_div_func_int8_t_s_s((-7L), (*l_645)))) & (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((void*)0 == l_668), (**g_178))), ((0xE502L && g_128) , (*g_149)))))) == p_22))
                    {
                        unsigned short **l_678 = &l_590;
                        unsigned *l_679 = &l_600;
                        (*l_459) = &l_661;

                        ;
                        (**l_459) = p_21;
                        (*l_459) = (l_661 , l_679);

                        ;
                    }
                    else
                    {
                        int *l_682 = &l_661;
                        if (l_661)
                            break;
                        l_648 = &l_609;

                        ;
                        (*l_459) = ((0xCBL < (safe_mul_func_int16_t_s_s(func_28(l_682, func_35(((*g_100) , &l_661), (*l_682), &g_90), l_617, func_58(l_683)), p_22))) , (void*)0);

                        ;
                        if ((*l_682))
                            continue;
                    }

                    ;
                }

                ;
                ;
                ;
                for (g_635 = 3; (g_635 >= (-18)); g_635 = safe_sub_func_uint16_t_u_u(g_635, 8))
                {
                    return p_22;
                }
                l_645 = ((*l_459) = (*l_459));

                ;
            }

            ;
            ;
            ;
            (**g_402) = (void*)0;

            ;
        }
        else
        {
            int *l_693 = &l_631;
            for (g_635 = (-23); (g_635 < 19); g_635 = safe_add_func_int16_t_s_s(g_635, 8))
            {
                unsigned ***l_692 = &g_690;
                int l_698 = 1L;
                unsigned short l_701 = 65531UL;
                char *l_707 = &l_634;
                char **l_706 = &l_707;
                char *l_708 = &l_27;
            }
            (*l_459) = (*l_459);
        }


        ;
        ;
        for (l_27 = 0; (l_27 < (-19)); l_27 = safe_sub_func_uint32_t_u_u(l_27, 1))
        {
            int *l_728 = &l_631;
            short *l_731 = &g_145;
            char *l_742 = &l_634;
            char *l_743 = &g_64;
            char *l_744 = (void*)0;
            char *l_745 = &g_746;
            unsigned short l_776 = 7UL;
            int l_792 = (-1L);
            (*l_459) = (p_22 , (void*)0);

            ;
            if (((*l_444) = p_22))
            {
                return (*l_617);
            }
            else
            {
                unsigned l_761 = 0xBAE1CE67L;
                char **l_775 = &l_742;
                int *l_788 = &l_631;
                if (((safe_mod_func_int16_t_s_s((p_22 | ((((+4L) != ((p_22 != ((**g_99) , ((l_750 || (safe_sub_func_uint8_t_u_u(((*l_649) = ((safe_rshift_func_uint8_t_u_u(((g_659 != ((((*l_486) = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(6UL, (*l_617))), 4)), p_22))) & (-7L)) , &l_616)) & (-2L)), 1)) > g_635)), p_22))) , p_21))) < (*l_728))) > 0x69EEBADCL) > p_21)), g_635)) >= (*g_100)))
                {
                    int *l_768 = (void*)0;
                    (*l_444) = (l_761 & p_21);
                    (*l_728) = ((*l_444) = (safe_sub_func_uint32_t_u_u(((safe_div_func_int8_t_s_s(p_21, ((*l_649) = (safe_div_func_uint16_t_u_u(((*l_590) = (l_768 == (void*)0)), (safe_rshift_func_uint8_t_u_u(251UL, (2UL > (((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((func_58((*g_691)) ^ (246UL > (((void*)0 != l_775) >= (*g_582)))), (*l_444))), l_776)) <= (*l_444)) ^ (*l_728)))))))))) < p_22), 0x0571D630L)));
                    (*l_459) = l_617;

                    ;
                }
                else
                {
                    int *l_781 = &g_90;
                    unsigned *l_789 = &l_460;
                    int **l_791 = &g_669;
                    (*l_459) = l_781;

                    ;
                    (*l_788) = (g_790 = ((safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u((**g_581), ((*l_789) = ((0x51C65D81L ^ p_21) ^ (**g_581))))), (*l_617))) != 0xADL));
                    (*l_791) = ((*l_459) = l_617);

                    ;
                    ;
                }

                ;
                (*l_444) = ((*l_33) , p_22);
            }

            ;
            (*l_459) = (void*)0;

            ;
            (*l_444) = func_58(l_792);
        }

        ;
        return l_793;
    }


    if (p_22)
    {
        int *l_794 = &l_631;
        short l_807 = 0x5EE9L;
        int **l_809 = &g_105;
        (*l_459) = func_39(((((*l_444) , (*g_149)) , p_22) , &l_631), p_21, g_142, p_21, l_808);

        ;
        (*l_809) = ((*l_459) = l_794);

        ;
        ;
        for (g_635 = 0; (g_635 == 21); g_635++)
        {
            int *l_812 = &g_2;
            unsigned char ***l_822 = &g_178;
            if (p_21)
                break;
            if (((**l_459) ^ ((*l_812) > (safe_lshift_func_uint8_t_u_u((*l_812), 2)))))
            {
                unsigned char ***l_831 = &g_178;
                (*l_809) = &g_90;

                ;
                (*l_813) = 1L;
                (*l_459) = ((*l_809) = (*l_809));

                ;
                for (l_631 = (-4); (l_631 == (-19)); --l_631)
                {
                    (*g_403) = (**g_402);
                    (*l_444) = (+((safe_rshift_func_int16_t_s_s(p_22, 7)) < (((safe_mul_func_uint8_t_u_u(p_22, (((l_822 != ((safe_mul_func_int16_t_s_s(((0x83L | ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((*l_812), 6)), 11)) >= ((p_21 <= ((**l_809) || (safe_div_func_uint8_t_u_u(func_58((*l_444)), (**l_459))))) && g_480))) <= (*l_813)), p_22)) , l_831)) , 0x91L) , p_22))) ^ (**g_148)) || g_222)));
                }
            }
            else
            {
                (**l_809) = (7UL ^ ((**g_148) = ((****g_402) != (((((*l_822) = &g_179) != &g_179) , p_21) & p_21))));
                (*l_444) = (*l_812);
            }
            (*l_444) = ((*l_812) , (((-5L) < (*g_100)) == ((safe_rshift_func_uint8_t_u_s((((~((p_22 < (g_2 , (safe_mod_func_int16_t_s_s((*g_100), ((*l_813) = 65535UL))))) | 0xD03FL)) | ((safe_unary_minus_func_uint16_t_u(0x3446L)) ^ (*g_582))) >= (*g_100)), 5)) <= 0x8CL)));
            (*l_459) = (*l_809);
        }

        ;
        ;
        (*l_569) = (void*)0;

        ;
    }
    else
    {
        int l_849 = 0x9F8ABD5EL;
        int *l_854 = &g_2;
        unsigned short *l_855 = &l_34;
        int *l_867 = &g_48;
        unsigned char ***l_873 = &g_178;
        unsigned **l_974 = &g_691;
        char ***l_990 = &g_148;
        int *l_1071 = &l_631;
        char l_1072 = 0x15L;
        unsigned l_1092 = 0xD016767FL;
        if (((((safe_mod_func_uint16_t_u_u(((*l_855) = ((safe_mod_func_uint32_t_u_u((l_843 == ((((-8L) <= ((+((+((**g_99) = ((safe_add_func_int32_t_s_s((0x37FAL == p_21), ((g_90 = ((safe_sub_func_int32_t_s_s((l_849 || 252UL), ((((*l_486) = (safe_sub_func_int32_t_s_s(((*l_813) = l_849), (safe_rshift_func_uint16_t_u_s((l_849 | p_22), (**g_99)))))) < p_22) <= p_22))) , 1L)) > 0x7984CE2BL))) ^ p_22))) > 0L)) != (*l_854))) , (*l_854)) , &l_844)), 0x5C1C02FFL)) , 0UL)), 0x545CL)) && (-1L)) , l_854) != (*l_485)))
        {
            (*l_444) = ((safe_mul_func_uint16_t_u_u(p_21, p_21)) >= (*l_854));
            (*l_444) = (((**g_99) = (l_858 & (((*l_867) = (*l_854)) || (*l_854)))) && p_22);
            (*l_867) = p_22;
        }
        else
        {
            unsigned l_877 = 1UL;
            short **l_950 = &g_100;
            int l_953 = 0x96F4BF62L;
            unsigned *l_959 = &g_128;
            int *l_960 = &g_2;
            unsigned l_961 = 7UL;
            unsigned char l_971 = 0UL;
            char ***l_989 = &g_148;
            unsigned l_1009 = 0x612E0324L;
            int l_1043 = 0L;
            short l_1061 = 0x045AL;
            unsigned char l_1066 = 1UL;
            for (g_746 = 0; (g_746 == (-5)); g_746 = safe_sub_func_uint8_t_u_u(g_746, 1))
            {
                int l_872 = 0x6B904574L;
                unsigned char ****l_874 = &l_741;
                short l_905 = (-1L);
                int l_913 = (-1L);
                unsigned *l_958 = (void*)0;
                if ((((*g_582) < func_58((safe_div_func_int16_t_s_s((((***g_403) = 0x3CL) || (((*l_874) = (((*l_867) && l_872) , l_873)) != &g_178)), (safe_rshift_func_uint16_t_u_s(p_21, l_872)))))) | l_877))
                {
                    char l_878 = 1L;
                    int *l_896 = &g_161;
                    if (l_878)
                        break;
                    for (l_34 = (-7); (l_34 == 12); l_34 = safe_add_func_int16_t_s_s(l_34, 1))
                    {
                        unsigned short l_895 = 1UL;
                        unsigned short **l_910 = &l_855;
                        int *l_926 = &l_913;
                        (*l_459) = ((+((((safe_mod_func_uint16_t_u_u((((****g_402) || (safe_mul_func_int16_t_s_s(l_877, (safe_sub_func_uint16_t_u_u(func_58((safe_lshift_func_int16_t_s_u((*l_813), func_58(p_21)))), (*g_100)))))) || ((safe_mul_func_uint8_t_u_u((0xAE68E5CDL == (((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(l_878, 0x55A9L)), l_895)) , p_22) & 0x89L)), p_21)) != l_877)), 65535UL)) , (void*)0) != &g_107) , p_22)) , l_896);

                        ;
                        l_913 = (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(l_877, 5)), (safe_mul_func_int16_t_s_s(((((safe_mul_func_uint8_t_u_u(0xC8L, ((+l_905) <= ((p_21 , (((*l_649) = ((**g_99) | (safe_div_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(0x6DL, 7)) , &l_895) == (void*)0), (l_872 = l_877))))) > p_21)) | (-8L))))) , l_910) != g_911) & p_21), 0xCAF7L))));
                        (*l_33) = (safe_div_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((*l_813) = func_28(l_854, l_927, (*l_459), l_877)), (*g_582))), 11)) , (-10L)) >= 0xF6CF4E91L), (*g_100)));
                        (*l_867) = p_22;
                    }


                }
                else
                {
                    int *l_928 = &g_90;
                    if (l_877)
                        break;
                    if (p_22)
                    {
                        (*l_459) = l_928;

                        ;
                        l_913 = (((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((void*)0 == g_343), (safe_mul_func_uint16_t_u_u(5UL, (p_21 , (!0xCF8AL)))))), ((**g_99) = l_877))) == func_58((*g_691))) , ((*l_813) = ((*l_867) = ((*l_928) = p_22))));
                    }
                    else
                    {
                        int *l_945 = &l_872;
                        (*l_928) = (((safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((+(func_58(p_22) | (safe_mul_func_uint16_t_u_u((0L == (safe_mod_func_uint16_t_u_u((*g_912), (*l_854)))), (l_928 != (void*)0))))), 0)), p_22)), 0x01A76648L)) , (-1L)) , (-1L));
                        (*l_459) = func_55(l_945, (*l_928));

                        ;
                        (*l_459) = func_55((*l_459), p_22);
                        (*l_945) = (safe_add_func_int16_t_s_s((((l_953 = ((p_22 , (func_58((**g_690)) , ((p_21 , (safe_div_func_int32_t_s_s(((((*l_945) , ((*l_569) = l_950)) == &g_100) >= (safe_lshift_func_uint16_t_u_u((l_905 >= ((*g_691) , (*g_100))), 0))), 0x1F53A995L))) , p_21))) & 0x51L)) ^ (*g_912)) ^ p_22), (*g_100)));
                    }

                    ;
                }


                (*l_813) = ((((**g_99) = (**g_99)) <= (safe_mod_func_uint32_t_u_u(0xC1317FF5L, (p_22 , func_58((!p_21)))))) , p_22);
                (*l_459) = (l_960 = ((safe_unary_minus_func_uint32_t_u(((*g_148) == (***g_402)))) , &l_872));

                ;
                ;
            }


            if (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((***g_403), ((((safe_mul_func_int16_t_s_s(p_22, (safe_mod_func_uint16_t_u_u(0xFDF1L, 2UL)))) >= (**g_911)) < l_971) != (safe_sub_func_int16_t_s_s(((***l_569) = (((*l_927) = ((*l_867) = ((*l_649) = func_58((((void*)0 == l_974) == ((p_21 == p_22) > (*l_813))))))) || p_21)), (**g_911)))))), p_21)) >= (*g_912)))
            {
                (*l_459) = &l_953;

                ;
                if (((safe_add_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((*g_149), p_21)), (safe_mod_func_uint16_t_u_u(func_58((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((l_989 != l_990) , ((func_58((*l_867)) <= p_21) , p_22)), p_21)), p_22)), (**g_99)))), p_21)))) , 247UL), p_21)) == (*g_149)))
                {
                    for (g_255 = 0; (g_255 > 35); g_255++)
                    {
                        (*l_867) = (*l_813);
                        if (p_22)
                            continue;
                    }
                    (*l_459) = (void*)0;

                    ;
                }
                else
                {
                    g_91 = ((*l_459) = &g_161);

                    ;
                    ;
                }

                ;
                (*l_459) = &l_953;

                ;
            }
            else
            {
                int *l_997 = (void*)0;
                int l_1017 = 0x76D6113CL;
                unsigned char **l_1038 = &l_927;
                char ****l_1049 = &l_990;
                for (l_460 = (-3); (l_460 == 39); l_460 = safe_add_func_uint16_t_u_u(l_460, 5))
                {
                    unsigned l_999 = 1UL;
                    char *l_1008 = &l_747;
                    for (g_90 = 0; (g_90 < 24); ++g_90)
                    {
                        unsigned char l_998 = 255UL;
                        char *l_1007 = &g_64;
                        (*l_459) = l_997;

                        ;
                        (*l_813) = (l_999 = l_998);
                        (*l_459) = func_55(func_55(l_867, p_22), (((*l_813) = (p_22 <= (safe_div_func_int8_t_s_s((p_21 < (safe_unary_minus_func_int8_t_s((((safe_lshift_func_int16_t_s_s(func_58((safe_div_func_uint8_t_u_u((l_1007 != (l_1008 = l_1008)), (p_21 | 65535UL)))), l_1009)) , (**g_924)) != (void*)0)))), l_1010)))) ^ 4294967295UL));

                        ;
                    }
                    if ((*l_854))
                        continue;
                    if (p_22)
                        continue;
                }


                l_1017 = ((*l_813) = (((safe_lshift_func_int16_t_s_s((-3L), (safe_sub_func_uint32_t_u_u((((**g_581) == 2UL) >= p_21), (*l_867))))) ^ (**g_911)) , p_22));
                for (g_161 = 0; (g_161 > (-26)); g_161--)
                {
                    unsigned l_1040 = 0UL;
                    for (g_635 = (-10); (g_635 > 3); g_635 = safe_add_func_int16_t_s_s(g_635, 7))
                    {
                        int l_1041 = 5L;
                        char l_1042 = (-2L);
                        (*l_444) = (l_1043 = (((safe_mul_func_int16_t_s_s((((+(safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((*l_867), (safe_lshift_func_uint8_t_u_s(3UL, (safe_div_func_int32_t_s_s(p_21, p_21)))))), (((safe_rshift_func_int16_t_s_s((p_21 == 249UL), 12)) == (safe_rshift_func_int8_t_s_s((l_1040 = (safe_lshift_func_uint8_t_u_u(((l_1038 = ((*l_873) = (void*)0)) != g_1039), 6))), (((**g_690) , l_1041) ^ p_21)))) | (*g_100))))) , 0L) == p_22), 0x1575L)) , l_1042) , (*l_444)));

                        ;
                        ;
                        if (p_21)
                            break;
                        return p_21;
                    }
                }

                ;
                ;
                if (((((1UL < 0x6DL) , (*g_100)) , (safe_add_func_int16_t_s_s(p_21, 0x304EL))) || (func_28(&l_1017, &p_21, &l_1017, (+(safe_lshift_func_uint8_t_u_u(g_1048, 0)))) <= 0x0B60085EL)))
                {
                    char *****l_1050 = (void*)0;
                    char *****l_1051 = (void*)0;
                    char *****l_1052 = &g_402;
                    char *****l_1053 = &l_1049;
                    int l_1054 = 0x74A9E732L;
                    (*l_867) = ((((**g_148) = ((((*l_1053) = ((*l_1052) = l_1049)) == (((((l_1054 >= ((*l_444) = func_58(((*l_867) = ((**g_690) = func_58((safe_div_func_uint32_t_u_u(((**g_581) = (&l_813 != ((safe_sub_func_int8_t_s_s((*l_444), ((*l_927) = (*l_854)))) , ((p_21 , ((safe_mul_func_uint8_t_u_u((l_1061 , (safe_mul_func_int8_t_s_s(0x67L, (safe_rshift_func_int16_t_s_s(p_22, 7))))), (*g_149))) ^ (**g_911))) , (void*)0)))), p_21)))))))) == (*g_100)) , (*g_912)) , (**g_581)) , (void*)0)) , 1L)) ^ (*l_813)) || l_1066);

                    ;
                    (*l_459) = func_39(&l_1054, ((***l_569) = (safe_rshift_func_uint16_t_u_s(1UL, ((safe_rshift_func_uint8_t_u_u(func_28(l_1071, func_35(&g_48, (*l_444), l_867), &l_1054, p_22), 2)) && 0xA6L)))), l_1072, p_22, p_21);

                    ;
                }
                else
                {
                    unsigned l_1083 = 4UL;
                    int l_1095 = (-1L);
                    l_1071 = func_39(l_1071, (((*g_100) = (safe_div_func_uint16_t_u_u((**g_911), (safe_add_func_uint32_t_u_u(((*l_486) = ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((**g_99), ((((safe_mul_func_int8_t_s_s((***g_403), l_1083)) , ((safe_add_func_uint16_t_u_u(p_21, (safe_rshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s((l_1083 | (p_21 > p_22)), 4)) , (*l_854)) > (****g_402)), 1L)) > (*l_813)) == l_1083), p_21)))) <= l_1092)) & 1L) != (**g_581)))), p_21)) , 0x148CD10CL)), p_22))))) || p_21), p_22, (*l_444), p_22);

                    ;
                    (*l_459) = &g_48;

                    ;
                    (*l_459) = ((((*l_855) = func_58((((*l_33) = ((**l_485) = (l_1095 = (safe_lshift_func_int8_t_s_u((***g_403), 0))))) >= p_22))) != p_21) , &l_1017);

                    ;
                }

                ;
                ;
                ;
            }


            ;
            ;
            ;
            if ((safe_add_func_int16_t_s_s(((safe_div_func_int8_t_s_s((func_28(((safe_mul_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((((*l_867) > (safe_rshift_func_int8_t_s_s((**g_148), 5))) <= p_22) || l_1106), (1UL | ((**g_581) > ((safe_sub_func_uint8_t_u_u(p_22, ((((p_22 | (safe_lshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u((****g_402), (*l_1071))) || p_22), p_22))) >= p_21) >= p_22) != (**g_99)))) || (*l_854)))))) >= p_21) > 65529UL), 246UL)) , (void*)0), &l_793, &l_1043, p_21) < (**g_581)), p_21)) || 253UL), (**g_99))))
            {
                char l_1117 = 0x0FL;
                for (l_1092 = 0; (l_1092 > 23); ++l_1092)
                {
                    return l_1117;


                }
            }
            else
            {
                unsigned l_1139 = 4294967288UL;
                int *l_1152 = &g_161;
                for (g_161 = 0; (g_161 < 12); g_161 = safe_add_func_int16_t_s_s(g_161, 8))
                {
                    unsigned l_1140 = 5UL;
                    short *l_1141 = &l_1061;
                    unsigned char *l_1145 = &l_1066;
                    int *l_1153 = &l_631;
                    if ((~(safe_add_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s((((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((*l_1071) || (*l_813)), (safe_mul_func_int16_t_s_s((**g_99), (p_21 , ((((((*l_1141) = func_58(((safe_sub_func_int8_t_s_s((p_22 , ((safe_lshift_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((****g_402), ((*l_927) = p_21))), l_1139)) == p_21) || l_1139), 5)) <= l_1140)), 249UL)) < 0x065F7E2AL))) & p_21) , 0x92L) , (*g_100)) <= p_22)))))), p_22)) < 0L) >= p_21))) , (*g_149)), l_1140))))
                    {
                        int *l_1142 = &g_48;
                        unsigned *l_1148 = &l_877;
                        (*l_459) = l_1142;

                        ;
                        l_1142 = (((65530UL >= (((*l_1148) = ((*g_582) = ((*g_582) != (safe_rshift_func_uint16_t_u_s(((*l_867) = func_28(l_867, l_1145, (p_22 , (void*)0), ((*g_582) , (safe_sub_func_uint16_t_u_u((((*g_912) = (*l_1142)) >= (*l_1142)), p_21))))), 6))))) <= (*l_854))) > p_22) , l_1149);

                        ;
                    }
                    else
                    {
                        (*l_444) = (~(safe_mul_func_int16_t_s_s(l_1139, (*g_100))));
                        (*l_459) = func_55(l_1152, l_1140);

                        ;
                    }

                    ;
                    if (g_635)
                    {
                        (*l_867) = ((*l_444) = p_21);
                        return (*l_1152);


                    }
                    else
                    {
                        unsigned char l_1154 = 0UL;
                        (*l_459) = (void*)0;

                        ;
                        if ((*l_1153))
                            continue;
                        l_1154 = ((0UL & (*g_149)) && p_21);
                        (*l_867) = (safe_sub_func_int8_t_s_s((((((p_21 , (safe_add_func_int32_t_s_s((-3L), (safe_rshift_func_int16_t_s_s(((p_21 , (((safe_add_func_int32_t_s_s((((***l_990) = ((safe_add_func_int16_t_s_s((func_58(l_1154) >= (0x24L < 0x14L)), 0UL)) , (safe_div_func_uint8_t_u_u(0x92L, (*g_149))))) , (*l_1153)), (**g_581))) , 0L) , p_21)) != l_1154), 5))))) > p_22) , (void*)0) != (void*)0) < (*l_1071)), l_1154));
                    }

                    ;
                    (*l_867) = ((*l_1149) < (0x6471A828L > 0x2501EB1CL));
                }


            }


        }


        ;
        ;
        ;
    }


    ;

    ;

    return p_22;


}







static char func_28(int * p_29, unsigned char * p_30, int * p_31, int p_32)
{
    int *l_433 = &g_48;
    p_29 = func_39(l_433, (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((*l_433), ((*l_433) , ((((void*)0 == &p_32) , p_32) , (p_29 == (void*)0))))), (safe_lshift_func_uint16_t_u_s(((g_2 , g_48) , (*l_433)), (*l_433))))), p_32)), 1)), (*p_30), (*p_30), (*l_433));

    ;
    return (*l_433);
}







static unsigned char * func_35(int * p_36, short p_37, int * p_38)
{
    unsigned char *l_432 = &g_50;
    (*p_36) = (0L || (safe_add_func_uint8_t_u_u(((void*)0 != &g_403), p_37)));
    return l_432;


}







static int * func_39(int * p_40, short p_41, unsigned char p_42, unsigned char p_43, unsigned char p_44)
{
    char l_397 = 0x64L;
    int l_411 = 0x1C151A9AL;
    int l_412 = 0x46561576L;
    unsigned *l_414 = &g_255;
    unsigned **l_413 = &l_414;
    if ((p_41 >= l_397))
    {
        unsigned char l_408 = 0x2CL;
        int l_425 = 0xEB05F36BL;
        unsigned **l_426 = &l_414;
        int *l_427 = &l_412;
        l_412 = (safe_sub_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u(p_41, 1)) & 0x49L) && (((((*g_149) = (func_58(g_255) && (g_402 == (void*)0))) < (l_397 && (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(l_408, (l_411 = (safe_mul_func_uint16_t_u_u(g_222, p_43))))), l_397)))) , (void*)0) != &g_142)), 0xB2818705L));
        (*l_427) = (l_413 != ((((*g_100) > (p_44 >= (safe_mod_func_uint8_t_u_u((1L ^ p_41), p_43)))) , (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((p_42 , (p_42 = (safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((g_90 = ((l_425 = p_43) && (0xD3L < 7L))), l_408)), (***g_403))))), 7)), p_44))) , l_426));
    }
    else
    {
        int *l_428 = &g_48;
        int **l_429 = &g_105;
        (*l_429) = l_428;

        ;
    }
    return &g_161;


}







static int * func_45(char p_46)
{
    int *l_47 = &g_48;
    unsigned char *l_49 = &g_50;
    short *l_51 = &g_52;
    int l_143 = 0x54766949L;
    char ***l_172 = &g_148;
    char **l_196 = &g_149;
    char ***l_195 = &l_196;
    char l_262 = (-1L);
    unsigned l_316 = 0UL;
    int *l_367 = &g_107;
    int **l_366 = &l_367;
    int ****l_384 = &g_343;
    int **l_393 = (void*)0;
    int **l_394 = &l_47;
    (*l_47) = p_46;
    (*l_47) = ((l_49 == (((*l_51) = (-4L)) , func_53(func_55(&g_2, ((*l_47) = func_58((safe_mod_func_uint32_t_u_u(p_46, (safe_div_func_uint8_t_u_u(g_64, ((*l_47) = (*l_47)))))))))))) >= g_128);

    ;

    if (((*l_47) = (*l_47)))
    {
        unsigned short *l_141 = &g_142;
        short *l_144 = &g_145;
        char *l_146 = &g_138;
        char *l_147 = &g_64;
        int *l_151 = &g_48;
        short l_162 = (-7L);
        int l_163 = 1L;
        char ***l_170 = &g_148;
        char ***l_173 = &g_148;
        short **l_183 = &l_144;
        if (((*l_47) && (((*l_147) = ((*l_146) = (0UL && ((*l_144) = ((**g_99) = func_58((((*l_141) = 0UL) | ((l_143 , 0x61C4L) == g_2)))))))) > g_2)))
        {
            char ***l_150 = &g_148;
            int **l_152 = &g_105;
            (*l_150) = g_148;
            (*l_152) = l_151;

            ;
            l_163 = (((g_50 > (0xF030L <= (g_142 , (safe_rshift_func_int16_t_s_s(((**l_152) = (safe_mul_func_uint8_t_u_u(g_64, (g_161 = (!(safe_rshift_func_int8_t_s_s(((&l_144 == &l_51) , (safe_mod_func_uint8_t_u_u(((*l_47) , (**l_152)), (*g_149)))), (*l_47)))))))), p_46))))) > 0x4EL) , l_162);
            return (*l_152);


        }
        else
        {
            char ****l_171 = &l_170;
            int l_199 = 4L;
            if ((safe_mod_func_uint32_t_u_u((p_46 == (-1L)), (p_46 && ((safe_mul_func_uint16_t_u_u(func_58((g_138 , (safe_sub_func_int32_t_s_s(func_58((p_46 , (((*l_171) = l_170) == (l_173 = l_172)))), (!0UL))))), g_2)) , 0xA8L)))))
            {
                int *l_185 = &g_90;
                int **l_213 = &g_105;
                for (p_46 = 0; (p_46 == (-25)); p_46 = safe_sub_func_int8_t_s_s(p_46, 9))
                {
                    short l_184 = 0x26DFL;
                    if (p_46)
                        break;
                    for (l_162 = 0; (l_162 != 4); l_162++)
                    {
                        unsigned char ***l_180 = &g_178;
                        (*l_180) = g_178;
                    }
                }
                (*l_185) = ((*l_47) = func_58(func_58((safe_mul_func_uint8_t_u_u(0UL, ((*l_151) | (((((*l_141) = g_128) , (safe_add_func_int8_t_s_s((*l_151), ((*l_49) = 0xD4L)))) , ((((safe_unary_minus_func_uint8_t_u(253UL)) && ((*l_185) = p_46)) <= (safe_mul_func_int16_t_s_s((0L >= (safe_mul_func_uint16_t_u_u((p_46 <= 0x895CB3ECL), 0xB86EL))), 0x2B95L))) < (*g_149))) == 0x32L)))))));
                (*l_213) = &g_90;

                ;
            }
            else
            {
                return &g_90;


            }

            ;
            for (g_52 = 22; (g_52 == (-5)); g_52 = safe_sub_func_uint32_t_u_u(g_52, 1))
            {
                char **l_216 = &l_146;
                unsigned char *l_221 = &g_222;
                int l_223 = 0xE5FC087BL;
                int **l_233 = &g_91;
                int **l_234 = &g_105;
                unsigned char l_239 = 0x06L;
                (*l_234) = ((*l_233) = func_55((((l_223 = ((*l_221) = (((*l_49) = p_46) , (((*l_144) = (l_216 != ((**l_171) = (*l_170)))) && (safe_mul_func_uint16_t_u_u(((*l_141) = ((*l_47) == (safe_lshift_func_uint16_t_u_s(1UL, 3)))), p_46)))))) <= (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(4294967295UL, ((((*g_105) != ((safe_lshift_func_uint8_t_u_s(((((~(**g_99)) , p_46) | g_138) < 0UL), 4)) && (*g_100))) != p_46) != l_199))), p_46)), (*g_149)))))) , &l_199), (*g_105)));

                ;
                ;
                (*l_151) = func_58(((-1L) != (safe_mod_func_uint32_t_u_u(((((((*g_149) != (-4L)) >= 0xE7776E9EL) == (p_46 , (l_239 >= (safe_mod_func_uint32_t_u_u(func_58((safe_mod_func_int8_t_s_s((*l_47), p_46))), (**l_233)))))) && l_199) | 0UL), (-8L)))));
                if ((*g_105))
                    continue;
                for (g_48 = 0; (g_48 < 8); g_48 = safe_add_func_uint16_t_u_u(g_48, 7))
                {
                    int *l_250 = &g_107;
                    unsigned *l_253 = (void*)0;
                    unsigned *l_254 = &g_255;
                    int *l_256 = &l_143;
                    int l_257 = 0xBC4B9DA4L;
                    (*l_233) = func_55(func_55((l_256 = ((*l_233) = (g_105 = func_55(&g_48, ((safe_mul_func_uint8_t_u_u(p_46, 0UL)) , (0x73321FACL > ((safe_sub_func_int32_t_s_s((&l_221 == (((*l_250) = (-5L)) , &g_179)), ((*l_254) = (safe_mod_func_int8_t_s_s((**g_148), ((((void*)0 != &g_48) , p_46) , p_46)))))) == 0x5BL))))))), l_257), l_257);

                    ;
                }
            }

            ;
        }

        ;
        (*l_47) = (func_58(((safe_div_func_int32_t_s_s(func_58(func_58((*l_151))), (safe_mul_func_int8_t_s_s(((***l_170) = (l_262 , ((p_46 >= ((((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_46, (g_90 && (safe_mod_func_int8_t_s_s((!((p_46 , (safe_add_func_uint16_t_u_u(p_46, p_46))) , (-3L))), p_46))))), p_46)) , (void*)0) != l_151) ^ p_46)) | 6L))), g_52)))) , p_46)) , (*l_151));
    }
    else
    {
        char l_273 = 8L;
        short *l_276 = (void*)0;
        int l_277 = 7L;
        unsigned *l_281 = &g_255;
        char l_283 = 0x41L;
        char **l_315 = &g_149;
        int **l_368 = &l_367;
        char l_376 = 0xC7L;
        if (p_46)
        {
            int l_278 = 0xEE2B7360L;
            unsigned *l_280 = (void*)0;
            unsigned **l_279 = &l_280;
            (*l_47) = func_58(g_138);
            if ((func_58(g_107) == (safe_mul_func_uint8_t_u_u((l_278 = (l_277 = (p_46 && (l_273 == (safe_rshift_func_uint16_t_u_u(((void*)0 != l_276), 3)))))), (((*l_279) = func_55(&g_161, (0x2582L && (~0x45E9L)))) == l_281)))))
            {
                int **l_282 = &g_91;
                (*l_282) = &l_277;

                ;
            }
            else
            {
                (*l_47) = (-8L);
                return &g_48;


            }

            ;
            ;
        }
        else
        {
            unsigned short l_305 = 65528UL;
            short **l_310 = &g_100;
            short **l_312 = (void*)0;
            short ***l_311 = &l_312;
            int *l_317 = &l_143;
            (*l_47) = (((**l_195) = (*g_148)) == &p_46);
            if (l_283)
            {
                int *l_286 = &l_277;
                for (g_48 = 21; (g_48 == 2); g_48 = safe_sub_func_uint32_t_u_u(g_48, 9))
                {
                    int **l_287 = &g_91;
                    (*l_287) = l_286;

                    ;
                    if (l_273)
                        break;
                    (**l_287) = (l_283 >= l_283);
                    (*l_287) = &g_48;

                    ;
                }

                ;
                (*l_286) = (safe_add_func_uint8_t_u_u(((*g_99) == ((safe_mul_func_int8_t_s_s((*l_286), (((func_58(g_142) < 0x85AA2B07L) , p_46) , p_46))) , l_276)), (*g_149)));
            }
            else
            {
                int l_304 = (-1L);
                (*l_47) = 0xA325B171L;
                if (((!(**g_99)) == ((safe_lshift_func_int16_t_s_s((2UL == 0x247DL), 13)) & (*l_47))))
                {
                    int **l_294 = &g_91;
                    (*l_294) = &l_143;

                    ;
                }
                else
                {
                    int *l_297 = &g_2;
                    int **l_299 = &l_297;
                    int **l_300 = &l_47;
                    for (g_145 = 0; (g_145 > 25); g_145++)
                    {
                        int **l_298 = &l_297;
                        (*l_298) = l_297;
                        if (p_46)
                            break;
                    }
                    (*l_47) = func_58(p_46);
                    (*l_300) = ((*l_299) = &g_2);

                    ;
                    if (p_46)
                    {
                        (*l_299) = (*l_299);
                    }
                    else
                    {
                        int *l_303 = &g_48;
                        (*l_303) = (((safe_mul_func_int16_t_s_s((-10L), ((*l_51) = 0x5344L))) < p_46) , p_46);
                        (*l_300) = func_55((*l_300), ((*l_303) = p_46));
                    }
                }

                ;
                ;
                l_304 = p_46;
            }

            ;
            ;
            if (((l_305 || (safe_rshift_func_int16_t_s_u(0xF043L, (safe_sub_func_int32_t_s_s(func_58((((!(l_310 == ((*l_311) = (g_99 = &g_100)))) >= (safe_mul_func_int16_t_s_s(((**l_310) = 0xBD74L), (((l_315 != (void*)0) > (3UL | (~1L))) > (-5L))))) , l_316)), 1L))))) == 0x640C1D5FL))
            {
                unsigned l_331 = 0x8E5A45A9L;
                int l_335 = (-1L);
                int **l_339 = &g_105;
                int ***l_338 = &l_339;
                unsigned short l_349 = 65532UL;
                l_317 = func_55(&g_161, (*l_47));

                ;
                for (g_52 = 0; (g_52 < (-13)); --g_52)
                {
                    unsigned char **l_322 = (void*)0;
                    char ***l_334 = &l_315;
                    char *l_336 = &l_273;
                    int *l_337 = &g_90;
                    int ****l_340 = &l_338;
                    int l_348 = 8L;
                    (*l_337) = (safe_mod_func_int32_t_s_s(((p_46 == ((((((**l_315) = ((void*)0 == l_322)) || (safe_div_func_int16_t_s_s((p_46 < (*l_47)), p_46))) >= ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((*l_336) = ((safe_sub_func_uint16_t_u_u(l_331, ((l_335 = (((*l_317) < ((safe_add_func_uint16_t_u_u(((((&l_196 == l_334) && l_277) && p_46) && 0x5459EB2AL), (*g_100))) != p_46)) <= g_107)) > l_331))) == p_46)), 7)), 5UL)) > 1L)) >= l_283) && 4294967290UL)) & 0x16L), l_331));
                    (*l_337) = ((((*l_340) = l_338) == (((&g_128 != (void*)0) > ((safe_rshift_func_int8_t_s_s(p_46, 7)) , ((**l_315) = (*g_149)))) , g_343)) < (safe_sub_func_int8_t_s_s(((p_46 == p_46) == (p_46 && 0UL)), (*l_47))));
                    l_348 = ((*l_337) = l_283);
                }
                if ((l_349 >= 65528UL))
                {
                    (**l_338) = &l_143;

                    ;
                }
                else
                {
                    short **l_352 = (void*)0;
                    (*l_339) = &l_277;

                    ;
                    (**l_338) = func_55(func_55(&l_143, (*g_105)), l_283);

                    ;
                    for (l_277 = 24; (l_277 == 2); --l_277)
                    {
                        l_352 = (*l_311);
                    }

                    ;
                }

                ;
            }
            else
            {
                int *l_353 = &l_277;
                int **l_354 = &l_47;
                (*l_354) = l_353;

                ;
                (*l_317) = func_58(g_90);
                (*l_354) = func_55(&l_277, l_273);

                ;
            }


            ;
            ;
        }

        ;
        ;

        if (p_46)
        {
            unsigned short l_365 = 0xEC34L;
            unsigned char *l_377 = &g_222;
            int **l_378 = &g_105;
            int ****l_390 = (void*)0;
            l_368 = ((safe_div_func_int16_t_s_s(((l_277 = g_161) , (safe_rshift_func_uint8_t_u_u((l_277 = (*l_47)), (safe_sub_func_uint16_t_u_u(g_64, (safe_lshift_func_uint8_t_u_s((0xA18A4ECFL < (*l_47)), (safe_mul_func_int16_t_s_s((l_276 == (l_283 , &g_142)), l_365))))))))), l_273)) , l_366);
            (*l_378) = ((safe_rshift_func_uint16_t_u_u(func_58((((*l_49) = (*l_47)) > ((*l_377) = (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((void*)0 != &g_99), (*g_149))), (safe_unary_minus_func_int8_t_s(l_376))))))), g_138)) , func_55(&l_143, (((*g_149) = (**g_148)) , 7L)));

            ;
            for (g_90 = 0; (g_90 > 29); g_90 = safe_add_func_uint16_t_u_u(g_90, 4))
            {
                unsigned *l_387 = &g_128;
                int *l_391 = &g_161;
                (*l_391) = ((*g_149) == ((safe_unary_minus_func_uint8_t_u((g_161 , (safe_rshift_func_uint8_t_u_u(p_46, (l_384 == (((safe_lshift_func_uint8_t_u_u(func_58(((*l_387) = l_277)), 3)) > (safe_mul_func_int16_t_s_s(1L, 5UL))) , l_390))))))) || g_222));
            }
        }
        else
        {
            int *l_392 = (void*)0;
            return l_392;




        }

        ;
    }

    ;

    ;
    (*l_394) = &l_143;

    ;
    return &g_48;



}







static unsigned char * func_53(int * p_54)
{
    short *l_78 = &g_52;
    unsigned char *l_79 = &g_50;
    short *l_81 = &g_52;
    short **l_80 = &l_81;
    short *l_82 = &g_52;
    short **l_83 = &l_82;
    short *l_85 = (void*)0;
    short **l_84 = &l_85;
    short *l_87 = &g_52;
    short **l_86 = &l_87;
    int l_88 = 0x5D31C11DL;
    int *l_89 = &g_48;
    int **l_98 = &g_91;
    int *l_111 = &g_2;
    int *l_112 = &g_48;
    g_91 = func_55(p_54, (g_90 = (safe_add_func_int32_t_s_s(((*l_89) = ((((l_78 == ((*l_80) = ((&g_50 != (l_79 = &g_50)) , l_78))) , &p_54) != &p_54) ^ (~((((*l_86) = ((((*l_83) = l_82) == ((*l_84) = &g_52)) , &g_52)) != &g_52) <= l_88)))), 0UL))));

    ;
    ;
    p_54 = &l_88;

    ;
    if (((*l_83) != ((safe_div_func_int8_t_s_s(((*l_89) , (((safe_add_func_uint32_t_u_u(4294967295UL, g_48)) && (&g_90 == ((*l_98) = &g_90))) , ((void*)0 == g_99))), ((((safe_add_func_uint16_t_u_u(g_50, 65535UL)) <= 0xA3L) , (-6L)) , (*l_89)))) , (*l_86))))
    {
        int *l_106 = &g_107;
        int **l_108 = &l_89;
        int *l_110 = (void*)0;
        int **l_109 = &l_110;
        (*l_98) = ((!((*l_79) = ((**l_98) || (((*l_89) && func_58((*l_89))) , ((*g_91) < (((g_105 = p_54) != ((*l_109) = ((*l_108) = ((+((*l_106) = g_64)) , (void*)0)))) && (**l_98))))))) , p_54);

        ;
        ;
        ;
        (*l_98) = (*l_98);
        (*l_98) = (*l_108);

        ;
        l_112 = l_111;

        ;
    }
    else
    {
        unsigned short l_117 = 0xF8E3L;
        int *l_119 = &g_107;
        int **l_121 = &l_111;
        char *l_136 = &g_64;
        char *l_137 = &g_138;
        int ***l_139 = (void*)0;
        int ***l_140 = &l_121;
        for (g_64 = (-4); (g_64 >= 7); g_64++)
        {
            int *l_118 = &g_107;
            int l_120 = 0xBB50BB11L;
            short ***l_126 = &l_84;
            unsigned *l_127 = &g_128;
        }
        (*p_54) = (((*l_136) = (*l_112)) > ((*l_137) = (**l_121)));
        if (func_58((**l_121)))
        {
            (*p_54) = ((func_58((*l_112)) , (*l_111)) & ((**g_99) , (**l_98)));
            (*l_89) = (*g_91);
        }
        else
        {
            (*l_89) = (*g_91);
            (*p_54) = ((*g_105) = ((void*)0 != p_54));
        }
        (*l_140) = &g_91;

        ;
    }

    ;
    ;
    ;
    ;
    return l_79;



}







static int * func_55(int * p_56, int p_57)
{
    int *l_74 = &g_48;
    int **l_75 = &l_74;
    (*l_75) = l_74;
    return &g_2;


}







static int func_58(unsigned p_59)
{
    unsigned char l_71 = 0xCBL;
    int *l_72 = &g_2;
    short *l_73 = &g_52;
    g_48 = (((safe_sub_func_int32_t_s_s(9L, (((0x0694L && ((((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((g_64 < l_71), (0L >= g_64))), (0L < (l_72 != l_72)))) | p_59) > (*l_72)) , g_2)) , l_73) == l_73))) && 0L) || g_50);
    return (*l_72);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_1048, "g_1048", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
