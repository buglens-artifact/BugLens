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



static int g_2 = (-1L);
static char g_15 = (-6L);
static int g_28 = 5L;
static short g_41 = 0L;
static unsigned char g_56 = 0xDAL;
static int g_75 = 0x820A3D57L;
static int *g_74 = &g_75;
static short g_84 = 0L;
static int g_89 = 0x4E203D7EL;
static char g_99 = 0xB8L;
static int g_108 = 0x1F6A35EBL;
static unsigned g_127 = 0x9CC38D24L;
static char g_128 = 0xDEL;
static unsigned short g_131 = 0x5E41L;
static unsigned g_133 = 0x8CB2CAB9L;
static char g_135 = 0L;
static const int g_155 = 1L;
static unsigned char g_157 = 250UL;
static char g_164 = 0x07L;
static unsigned short *g_181 = &g_131;
static unsigned short * const *g_180 = &g_181;
static unsigned char g_244 = 255UL;
static unsigned char g_260 = 249UL;
static unsigned char *g_302 = &g_260;
static unsigned short g_345 = 1UL;
static int *g_353 = &g_2;
static int **g_352 = &g_353;
static int ** const g_366 = (void*)0;
static int ** const *g_365 = &g_366;
static char *g_390 = (void*)0;
static char **g_389 = &g_390;
static int ***g_427 = (void*)0;
static short g_531 = 0L;
static char **g_567 = &g_390;
static short *g_569 = &g_531;
static short **g_568 = &g_569;
static const int g_640 = 0L;
static short g_644 = 0x8AABL;
static char g_660 = 0xE3L;
static const unsigned *g_664 = &g_127;
static const unsigned **g_663 = &g_664;
static short g_689 = 1L;
static char ***g_727 = &g_567;
static char ****g_726 = &g_727;
static const char *g_731 = &g_15;
static const char **g_730 = &g_731;
static const char ***g_729 = &g_730;
static const char ****g_728 = &g_729;
static char *****g_761 = &g_726;



static short func_1(void);
static int * func_5(int p_6, char p_7, unsigned p_8, short p_9);
static unsigned char func_21(unsigned char p_22);
static unsigned func_33(int p_34, char p_35, int p_36, int * p_37);
static unsigned func_45(int p_46);
static int func_47(const unsigned short p_48, short * p_49, unsigned char p_50);
static unsigned short func_59(short * p_60, short * p_61, const char p_62);
static short * func_64(unsigned p_65);
static const int func_66(const unsigned char p_67, unsigned char p_68, int p_69);
static const unsigned char func_70(const unsigned char p_71, unsigned p_72);
static short func_1(void)
{
    int l_10 = 0x1CDCB363L;
    int l_42 = 0x7E06985BL;
    for (g_2 = 23; (g_2 >= (-17)); g_2 = safe_sub_func_uint32_t_u_u(g_2, 6))
    {
        char *l_13 = (void*)0;
        char *l_14 = &g_15;
        const int l_18 = 0x4E912083L;
        int *l_27 = &g_28;
        short *l_40 = &g_41;
        unsigned short l_656 = 65527UL;
        int l_673 = 0xD14DB55FL;
        (*g_352) = func_5(l_10, (((safe_add_func_int8_t_s_s(((*l_14) = l_10), (!l_10))) == (safe_mul_func_uint8_t_u_u((((*g_302) = (l_18 | (safe_mod_func_int32_t_s_s((g_2 >= func_21((((*l_27) = (l_18 >= (safe_mod_func_int32_t_s_s(0x495231FBL, g_2)))) & ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(func_33((l_42 = (+((safe_rshift_func_int8_t_s_u((((*l_40) = (-1L)) | 4UL), l_10)) > g_2))), g_2, g_2, l_27), l_656)), 13)) == (**g_568))))), l_18)))) && 249UL), g_128))) & l_673), g_131, (**g_568));
        (*l_27) = l_10;
        (*g_352) = &l_42;
        return (*l_27);
    }
    return (*g_569);
}







static int * func_5(int p_6, char p_7, unsigned p_8, short p_9)
{
    const int *l_674 = &g_28;
    const int **l_675 = &l_674;
    int l_695 = 0xBB838E9CL;
    int *l_713 = &g_108;
    int **l_712 = &l_713;
    (*l_675) = l_674;
    for (g_157 = 3; (g_157 > 36); g_157 = safe_add_func_uint32_t_u_u(g_157, 1))
    {
        const int *l_679 = &g_155;
        const int **l_678 = &l_679;
        const int *l_681 = &g_28;
        const int **l_680 = &l_681;
        int l_686 = 1L;
        int *l_690 = &g_89;
        short *l_694 = &g_689;
        int l_696 = 0L;
        int l_740 = 0xCA53054BL;
        int l_763 = (-9L);
        (*l_680) = ((*l_678) = ((*l_675) = (*l_675)));
        if ((0x40L || (safe_lshift_func_uint8_t_u_s((*g_302), (safe_add_func_int32_t_s_s((l_686 = (0xF129L <= (**l_678))), ((safe_lshift_func_uint16_t_u_s((func_66(p_8, (*g_302), func_33((2L & 0xA4C3L), g_689, p_7, l_690)) & p_7), (**l_678))) <= (*l_674))))))))
        {
            int l_693 = 0L;
            l_696 = func_47(((safe_mod_func_int16_t_s_s(0x1521L, l_693)) ^ (p_8 < ((l_695 = ((**g_663) < (func_59(l_694, (*g_568), p_9) > p_8))) <= 0x45L))), l_694, l_693);
            (*l_680) = (*l_675);
        }
        else
        {
            const unsigned char l_703 = 0xE1L;
            (*l_690) = (safe_rshift_func_uint8_t_u_s(func_66((safe_mul_func_int16_t_s_s((((**l_678) & 0x4991L) >= (!(**l_675))), (safe_mul_func_int16_t_s_s(func_59(l_694, l_694, l_703), ((safe_div_func_uint32_t_u_u((p_7 && (p_7 = p_7)), (*g_664))) != (*l_674)))))), p_8, l_703), 5));
        }
        for (g_84 = 0; (g_84 > 6); g_84 = safe_add_func_int8_t_s_s(g_84, 4))
        {
            char l_714 = 1L;
            int *l_718 = (void*)0;
            for (g_244 = 0; (g_244 >= 12); g_244++)
            {
                unsigned short l_715 = 0xAE24L;
                int * const l_716 = &l_686;
                int *l_717 = &l_686;
                l_715 = ((0L || (*g_181)) != func_70((safe_sub_func_uint16_t_u_u(((void*)0 != l_712), (l_714 ^ (**g_663)))), (*g_664)));
                (*g_352) = l_716;
                return l_718;
            }
            (*l_690) = p_7;
            (*l_675) = (*l_680);
        }
        for (g_127 = 0; (g_127 == 33); g_127++)
        {
            int l_725 = 1L;
            const char *****l_732 = &g_728;
            int l_771 = 0x1FF90CE3L;
            unsigned char **l_778 = &g_302;
        }
    }
    return (*g_352);
}







static unsigned char func_21(unsigned char p_22)
{
    int *l_657 = &g_28;
    short *l_669 = &g_531;
    int *l_671 = &g_108;
    int **l_670 = &l_671;
    int ***l_672 = &l_670;
    (*g_352) = l_657;
    for (g_99 = 0; (g_99 <= (-27)); --g_99)
    {
        unsigned *l_661 = &g_133;
        (*g_353) = (((*l_661) = g_660) != (safe_unary_minus_func_uint32_t_u(((void*)0 != g_663))));
        (*g_352) = l_657;
        if (p_22)
            continue;
    }
    (*g_352) = l_657;
    (*l_657) = ((*l_657) <= ((*l_657) && ((!(g_127 = (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((**g_180), func_59(l_669, l_669, p_22))) & (((*l_672) = l_670) == (void*)0)), 0xA538480CL)))) == (*l_657))));
    return (*l_657);
}







static unsigned func_33(int p_34, char p_35, int p_36, int * p_37)
{
    short *l_63 = (void*)0;
    int l_600 = 0x23176B99L;
    unsigned l_604 = 0x202F03A0L;
    int l_643 = 0xCF2076DCL;
    int *l_654 = &l_600;
    int *l_655 = &l_600;
    for (p_36 = 0; (p_36 == (-23)); p_36--)
    {
        unsigned char *l_55 = &g_56;
        int l_341 = 0x7AB9F0D7L;
        unsigned short *l_342 = (void*)0;
        unsigned short *l_343 = (void*)0;
        unsigned short *l_344 = &g_345;
        char *l_584 = (void*)0;
        char *l_585 = &g_135;
        int *l_586 = &l_341;
        char ***l_587 = (void*)0;
        char ***l_588 = &g_567;
    }
    return g_2;
}







static unsigned func_45(int p_46)
{
    unsigned char l_420 = 255UL;
    int ***l_426 = (void*)0;
    unsigned *l_428 = &g_127;
    unsigned short * const l_462 = &g_345;
    int ***l_489 = &g_352;
    int **l_583 = &g_74;
    (*g_352) = (*g_352);
    if (((l_420 & ((*l_428) = (g_41 == ((safe_sub_func_uint8_t_u_u(((8L ^ (safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((l_420 <= ((l_426 == (g_427 = l_426)) != (p_46 > 0xD0B5ABB7L))))) | l_420), g_99))) != l_420), l_420)) >= l_420)))) | l_420))
    {
        int l_437 = 0x45AEDE10L;
        unsigned char *l_438 = (void*)0;
        unsigned char *l_439 = (void*)0;
        unsigned char *l_440 = &g_56;
        unsigned l_441 = 3UL;
        int *l_442 = &g_75;
        (*g_352) = l_428;
        (**g_352) = ((l_441 = ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_437, ((*l_440) = ((*g_302) = 255UL)))), l_420)), 10)), func_70(p_46, (p_46 && ((*g_181) = 8UL))))) & (l_437 < l_420))) <= p_46);
        (**g_352) = 0x213713BCL;
        (*g_352) = l_442;
    }
    else
    {
        unsigned short **l_452 = &g_181;
        const int l_456 = 0x780E1727L;
        int l_457 = 0x78C55972L;
        int l_498 = (-3L);
        short *l_508 = (void*)0;
        if (l_420)
        {
            int *l_445 = &g_2;
            short *l_460 = &g_84;
            const int l_509 = 0x7CFAD957L;
            for (g_131 = 0; (g_131 < 29); g_131 = safe_add_func_int16_t_s_s(g_131, 1))
            {
                int *l_455 = &g_75;
                unsigned short *l_461 = &g_131;
                const unsigned char l_467 = 249UL;
                int *l_468 = &l_457;
            }
            if ((p_46 > g_260))
            {
                int *l_471 = &g_75;
                (*l_471) = (g_99 && ((*g_74) == p_46));
            }
            else
            {
                unsigned l_484 = 0x692CF586L;
                short *l_485 = &g_41;
                char *l_486 = &g_135;
                int *l_488 = &l_457;
                int *l_502 = &g_108;
                if ((p_46 ^ ((0L ^ (safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(1UL, (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((*l_486) = (((safe_sub_func_int16_t_s_s((~p_46), func_47((!(((*l_486) = ((safe_mul_func_uint16_t_u_u((g_155 <= l_484), ((*l_485) = ((*l_460) = 0x7875L)))) ^ 0x77F82278L)) || p_46)), l_460, l_484))) && (*g_181)) < p_46)), (*l_445))), 1L)))) ^ 0xC8494EE2L), l_484))) && 255UL)))
                {
                    int **l_487 = &g_74;
                    (*l_487) = ((*g_352) = l_445);
                }
                else
                {
                    return l_420;
                }
                (*g_352) = l_488;
                (*g_352) = l_428;
                if (((void*)0 == l_489))
                {
                    unsigned *l_499 = &g_133;
                    (*l_488) = (((safe_div_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((*g_353) & l_457) == (safe_mod_func_int8_t_s_s(((g_75 & (~(p_46 ^ (safe_sub_func_int32_t_s_s(((l_498 = 255UL) <= (***l_489)), ((*l_499) = (!g_2))))))) | (safe_lshift_func_uint8_t_u_u(p_46, (*g_302)))), (*g_302)))), 65534UL)), 0x43C4L)) && p_46) && 0xC217L);
                    (**l_489) = l_445;
                    (*l_488) = (((!0xD221EA34L) < p_46) || p_46);
                    (*g_352) = l_499;
                }
                else
                {
                    int **l_503 = (void*)0;
                    int *l_505 = &g_108;
                    int **l_504 = &l_505;
                    unsigned l_528 = 1UL;
                    int l_548 = 0x0FCE08A2L;
                    unsigned short l_549 = 0x3237L;
                    int *l_550 = &l_498;
                    int *l_551 = &g_89;
                    if (((l_502 = (void*)0) == ((*l_504) = &p_46)))
                    {
                        (*g_352) = (void*)0;
                        (**l_489) = l_505;
                    }
                    else
                    {
                        unsigned char *l_522 = (void*)0;
                        unsigned char *l_523 = &g_260;
                        short *l_529 = (void*)0;
                        short *l_530 = &g_531;
                        (*l_488) = (safe_sub_func_int16_t_s_s(((0xF185L & l_457) != (*g_181)), (((void*)0 != (*g_389)) > func_59(l_485, l_508, l_509))));
                        (*l_489) = &l_488;
                        (*g_352) = (**l_489);
                        (*l_488) = (safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u((*l_488), (((+3L) & (*l_488)) && (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((*l_460) = func_70(((*l_523) = l_456), (*l_488))), (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((*l_445) || (l_528 <= ((*l_530) = (0xAB421F01L | (***l_489))))), 11)), l_457)))), g_99))))) == p_46) ^ (**g_352)), p_46)) || l_498), p_46)), (-1L)));
                    }
                    (*l_551) = ((*l_550) = (safe_sub_func_int8_t_s_s(((l_528 >= ((safe_div_func_int32_t_s_s(p_46, (safe_add_func_uint8_t_u_u((*g_302), (safe_div_func_int32_t_s_s((*g_74), l_528)))))) < (safe_add_func_int8_t_s_s(((+(l_548 = (safe_lshift_func_int8_t_s_s(p_46, (l_498 | ((*l_488) = (((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(65533UL, (!g_531))), 3L)) == p_46) | 255UL))))))) >= l_549), l_498)))) | (-1L)), 0x94L)));
                }
            }
        }
        else
        {
            unsigned l_552 = 4UL;
            int *l_553 = &l_498;
            l_552 = l_456;
            (*g_352) = (**l_489);
            (**l_489) = (*g_352);
            (*l_553) = (*g_74);
        }
        for (g_531 = 0; (g_531 < 18); ++g_531)
        {
            unsigned l_556 = 0x80304F4BL;
            short *l_561 = &g_84;
            short **l_562 = (void*)0;
            short **l_563 = &l_508;
            char ***l_566 = &g_389;
            int l_570 = 0xB4017CD5L;
            if ((l_556 && (g_131 && ((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((**l_452) = (l_561 == ((*l_563) = &g_84))), g_41)), (safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_uint16_t_u((l_426 == (void*)0))))))) ^ (((g_567 = ((*l_566) = &g_390)) == &g_390) != p_46)))))
            {
                int **l_571 = (void*)0;
                int **l_572 = &g_74;
                int *l_573 = &l_570;
                g_568 = &l_561;
                if (l_457)
                    continue;
                l_570 = l_456;
                l_573 = ((*l_572) = &l_570);
            }
            else
            {
                int **l_574 = (void*)0;
                int **l_575 = &g_74;
                (*l_575) = l_428;
                for (g_164 = 0; (g_164 == 5); ++g_164)
                {
                    const char l_580 = (-7L);
                    (*l_575) = (g_353 = &l_570);
                    for (l_457 = (-5); (l_457 >= 26); l_457++)
                    {
                        if (l_580)
                            break;
                    }
                }
                for (g_89 = 0; (g_89 != 28); g_89 = safe_add_func_uint16_t_u_u(g_89, 4))
                {
                    return l_570;
                }
                if (p_46)
                    continue;
            }
        }
    }
    (*l_583) = l_428;
    return (**l_583);
}







static int func_47(const unsigned short p_48, short * p_49, unsigned char p_50)
{
    int *l_359 = &g_108;
    int **l_358 = &l_359;
    int ***l_360 = &l_358;
    unsigned l_374 = 0xBD431B59L;
    unsigned l_398 = 0x90D58734L;
    int l_415 = 2L;
    char ***l_418 = &g_389;
    (*l_360) = l_358;
    for (g_260 = 27; (g_260 < 11); g_260--)
    {
        short l_373 = 0x87EFL;
        int l_379 = 0x547CBADAL;
        int ***l_407 = &g_352;
        for (g_164 = (-3); (g_164 > (-13)); g_164 = safe_sub_func_uint16_t_u_u(g_164, 2))
        {
            const unsigned l_370 = 18446744073709551615UL;
            unsigned char **l_372 = &g_302;
            int *l_419 = &g_2;
            if ((func_66((&l_358 == g_365), (*g_302), g_131) != 0x22L))
            {
                int *l_367 = &g_75;
                unsigned char * const *l_371 = &g_302;
                unsigned l_394 = 0xC457DBA2L;
                (*l_367) = p_48;
                (*l_367) = ((safe_mul_func_int8_t_s_s(func_66(l_370, (*g_302), p_48), 248UL)) >= (g_157 < ((l_371 == l_372) < (l_373 != l_374))));
                (*l_367) = l_374;
                for (g_41 = 0; (g_41 < (-3)); g_41 = safe_sub_func_uint32_t_u_u(g_41, 1))
                {
                    unsigned char ***l_384 = &l_372;
                    l_379 = (p_50 & (safe_lshift_func_uint16_t_u_u(p_48, 9)));
                    if ((safe_add_func_int8_t_s_s((((l_379 ^ (safe_div_func_int32_t_s_s((65535UL == (((*l_384) = l_372) != &g_302)), p_50))) || (safe_sub_func_uint32_t_u_u(l_374, l_374))) && p_48), (safe_add_func_uint32_t_u_u(l_370, p_50)))))
                    {
                        char ***l_391 = &g_389;
                        (*l_391) = g_389;
                    }
                    else
                    {
                        unsigned l_395 = 0UL;
                        (*l_367) = ((safe_rshift_func_int16_t_s_u(g_155, 5)) ^ p_48);
                        (*g_352) = l_367;
                        l_395 = (l_394 & l_374);
                    }
                }
            }
            else
            {
                unsigned l_410 = 18446744073709551608UL;
                int l_411 = 0x93D30D6FL;
                int *l_412 = (void*)0;
                int *l_413 = &g_89;
                l_411 = (safe_sub_func_uint32_t_u_u((g_56 < 0L), ((l_398 == (safe_add_func_uint8_t_u_u((((((~(safe_lshift_func_uint16_t_u_s(func_66((safe_rshift_func_uint16_t_u_u(((*g_181) = (safe_rshift_func_uint8_t_u_s((g_84 == (&g_352 != l_407)), (safe_mod_func_int16_t_s_s((0L ^ 0xFD29CBA6L), l_410))))), p_48)), p_48, l_374), 7))) | 1UL) < p_50) | l_370) || 4UL), (-1L)))) != (-5L))));
                (*l_413) = 0x7CE0DDB5L;
                if (p_50)
                {
                    if (p_48)
                        break;
                }
                else
                {
                    if (((void*)0 == p_49))
                    {
                        return p_50;
                    }
                    else
                    {
                        int l_414 = 0x68FCE3D5L;
                        (*l_413) = l_370;
                        return l_414;
                    }
                }
                (**l_407) = (void*)0;
            }
            l_415 = p_50;
            for (l_373 = 0; (l_373 > (-12)); l_373 = safe_sub_func_int8_t_s_s(l_373, 1))
            {
                l_415 = ((void*)0 == l_418);
                if (l_370)
                    continue;
                (**l_407) = (*g_352);
                (**l_407) = l_419;
            }
            (*g_352) = (*g_352);
        }
        (**l_407) = (*g_352);
    }
    return l_374;
}







static unsigned short func_59(short * p_60, short * p_61, const char p_62)
{
    unsigned char *l_348 = &g_260;
    int l_349 = (-1L);
    unsigned *l_350 = (void*)0;
    const int l_351 = (-10L);
    int **l_354 = &g_353;
    short *l_355 = &g_84;
    int *l_356 = &g_89;
    short l_357 = 0x675EL;
    (*l_356) = (safe_div_func_uint32_t_u_u((l_349 = func_70(((*l_348) = (*g_302)), l_349)), (l_351 ^ ((*l_355) = (g_352 == l_354)))));
    (*g_352) = (void*)0;
    return l_357;
}







static short * func_64(unsigned p_65)
{
    const unsigned l_73 = 0UL;
    int l_159 = 0x6362AC5EL;
    unsigned l_160 = 0x4261728AL;
    int *l_192 = &l_159;
    int ** const l_237 = &l_192;
    unsigned short *l_265 = &g_131;
    int l_278 = 9L;
    unsigned char *l_318 = &g_244;
    unsigned *l_328 = &g_133;
    if (func_66(func_70(l_73, l_73), g_84, p_65))
    {
        unsigned char *l_156 = &g_157;
        unsigned char *l_158 = (void*)0;
        char *l_163 = &g_164;
        int *l_169 = &g_2;
        unsigned *l_170 = &g_127;
        int *l_171 = &g_75;
        unsigned char *l_176 = (void*)0;
        int **l_177 = &l_171;
        (*l_171) = ((((((*l_170) = ((((((func_66((l_159 = ((*l_156) = p_65)), l_160, g_41) | (l_160 == (safe_mod_func_int8_t_s_s(p_65, ((*l_163) = p_65))))) < ((((safe_mod_func_int32_t_s_s(((void*)0 == l_169), p_65)) || g_2) & 0UL) < g_2)) <= 0xFC7CCE13L) != 0xEE88L) ^ p_65) >= p_65)) | 0x133D480AL) >= g_84) && 0x6034A101L) & 1UL);
        if (l_73)
        {
            return &g_84;
        }
        else
        {
            for (g_128 = (-15); (g_128 != (-23)); g_128 = safe_sub_func_uint32_t_u_u(g_128, 5))
            {
                (*l_171) = (safe_mul_func_uint8_t_u_u(p_65, (~(g_157 = p_65))));
            }
            (*l_171) = (l_176 == (void*)0);
        }
        (*l_177) = &l_159;
    }
    else
    {
        unsigned short *l_179 = &g_131;
        unsigned short * const *l_178 = &l_179;
        int l_182 = (-1L);
        unsigned *l_228 = (void*)0;
        unsigned *l_229 = &g_133;
        int *l_232 = &g_75;
        unsigned char *l_289 = &g_244;
        g_180 = l_178;
        if ((l_182 ^ func_70((~g_75), p_65)))
        {
            int **l_183 = (void*)0;
            int **l_184 = &g_74;
            g_74 = &g_75;
            (*l_184) = &l_182;
            for (g_164 = 0; (g_164 == (-17)); --g_164)
            {
                int *l_187 = &g_89;
                int **l_188 = &l_187;
                l_187 = &l_182;
                (*l_184) = (void*)0;
                (*l_188) = ((*l_184) = &l_159);
            }
            (*l_184) = &l_159;
        }
        else
        {
            unsigned short **l_196 = &g_181;
            int l_197 = 0x1EE9ED18L;
            int **l_225 = &l_192;
lbl_224:
            for (g_135 = 0; (g_135 != (-3)); --g_135)
            {
                int *l_191 = &g_89;
                int **l_193 = &g_74;
                (*l_191) = (*g_74);
                (*l_193) = l_192;
            }
            (*l_192) = (safe_div_func_int8_t_s_s((((*l_196) = &g_131) != (*l_178)), l_197));
            for (g_89 = 0; (g_89 > 15); g_89++)
            {
                short l_215 = 0xE808L;
                int l_223 = (-9L);
                for (g_108 = 0; (g_108 >= 23); g_108 = safe_add_func_int32_t_s_s(g_108, 9))
                {
                    unsigned *l_208 = &g_127;
                    int l_216 = 0x251F2307L;
                    char *l_219 = &g_164;
                    short *l_222 = &l_215;
                    (*l_192) = (*l_192);
                    (*l_192) = (safe_div_func_int8_t_s_s(g_89, (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((*l_208) = g_128) && (0xA7C490E5L && ((!((*l_192) < (*g_181))) || 0L))), (safe_sub_func_int16_t_s_s(p_65, (safe_mod_func_int8_t_s_s(((l_182 || l_215) ^ l_216), g_164)))))), p_65))));
                    (*l_192) = (l_223 = ((safe_mul_func_uint16_t_u_u((((*l_219) = g_164) ^ (0x9AL == (safe_mul_func_uint8_t_u_u(g_75, (g_75 | (-1L)))))), ((*l_222) = p_65))) | (*g_74)));
                }
                if (g_41)
                    goto lbl_224;
            }
            (*l_225) = &l_159;
        }
        if (((*l_192) = (((l_182 && ((l_182 = (safe_rshift_func_uint16_t_u_u(((*l_179) = ((((((*l_229) = (*l_192)) != (p_65 || (*l_192))) ^ (-2L)) == (*l_192)) != (*l_192))), 1))) == (safe_rshift_func_uint16_t_u_s((p_65 < ((((*l_232) = (&l_179 == &g_181)) || (*g_74)) ^ 0xB1ED4B6EL)), g_84)))) <= (*l_192)) ^ 65530UL)))
        {
            unsigned char *l_242 = &g_157;
            unsigned char *l_243 = &g_244;
            int l_247 = 1L;
            int **l_248 = &g_74;
            char *l_249 = &g_135;
            (*l_232) = (((*l_243) = (0L <= (safe_mod_func_uint32_t_u_u((*l_232), (safe_add_func_uint16_t_u_u((*g_181), (((void*)0 == l_237) >= (safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((void*)0 == &g_74), (((*l_242) = (g_89 | g_127)) != 7UL))) != 0xB3487792L), 0xFAB6L))))))))) <= 5L);
            if (func_70(p_65, ((l_247 > (((*l_249) = (&l_232 != l_248)) <= (&l_248 == (void*)0))) < ((0UL > ((*l_229) = p_65)) ^ ((**l_248) != 0x86L)))))
            {
                short l_250 = 0x99D4L;
                int l_256 = 0xC73A8097L;
                if ((**l_248))
                {
                    unsigned l_257 = 0x02BEFAAEL;
                    unsigned char *l_258 = &g_244;
                    unsigned char *l_259 = &g_260;
                    (*l_192) = (p_65 >= (func_70(((*l_259) = ((*l_258) = (g_157 = func_70(p_65, ((*l_229) = func_70(((l_250 && (((((**g_180) = func_70(g_84, (safe_add_func_int8_t_s_s(p_65, (((safe_unary_minus_func_uint8_t_u(func_66(p_65, p_65, ((((safe_lshift_func_int16_t_s_s(p_65, ((((1UL != p_65) > (*g_74)) == g_133) || g_2))) >= (-1L)) == p_65) || g_89)))) && 0xEE634B27L) != l_256))))) ^ 0x9F80L) && l_257) | g_244)) != g_2), g_155)))))), g_2) == (*l_192)));
                    (*l_237) = &g_2;
                }
                else
                {
                    return &g_41;
                }
                (*l_232) = ((safe_mul_func_uint16_t_u_u(p_65, ((*g_181) = func_70(g_164, ((*g_74) <= ((g_244 || (**l_248)) || ((*l_249) = ((+(((safe_lshift_func_uint16_t_u_u(((((*l_178) != l_265) < (safe_rshift_func_int16_t_s_s((**l_248), (*l_192)))) ^ 4294967295UL), 0)) > 0UL) <= 0x07CDL)) | p_65)))))))) ^ p_65);
            }
            else
            {
                unsigned short l_270 = 65529UL;
                short *l_271 = &g_84;
                int l_295 = 0xB6B2F1F7L;
                const int l_296 = 0x48531B94L;
                int *l_310 = &l_278;
                unsigned char *l_319 = (void*)0;
                if ((safe_lshift_func_int16_t_s_u(((*l_271) = (l_270 != (-8L))), 4)))
                {
                    char l_279 = 0x77L;
                    if ((0x3E86L < (((*l_271) = (255UL || (((g_84 == ((**l_237) = ((*l_232) = (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*g_74), ((void*)0 == &p_65))), p_65))))) ^ 0UL) || l_278))) & l_279)))
                    {
                        (**l_237) = (*g_74);
                    }
                    else
                    {
                        (*l_248) = &g_89;
                    }
                    g_74 = &g_75;
                }
                else
                {
                    unsigned l_282 = 7UL;
                    short *l_297 = &g_41;
                    int l_303 = 0x6CCCF155L;
                    int ** const l_305 = &g_74;
                    for (l_159 = (-1); (l_159 != (-14)); l_159 = safe_sub_func_uint16_t_u_u(l_159, 4))
                    {
                        unsigned short *l_294 = &l_270;
                        (*l_232) = ((((*l_179) = p_65) | ((((*l_249) = 6L) == l_282) <= p_65)) != (~(safe_add_func_int16_t_s_s((l_295 = ((*l_271) = ((9L < (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((&g_260 == (l_289 = l_289)), (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(p_65, func_70((((*l_294) = func_70(g_84, g_155)) < (*l_192)), g_155))), l_295)))), 0x167CL))) & p_65))), l_296))));
                        return l_297;
                    }
                    if ((*l_232))
                    {
                        (*l_248) = &g_89;
                        (*l_192) = (safe_sub_func_int8_t_s_s(((6UL | (&g_155 == &g_155)) || ((safe_div_func_uint16_t_u_u((**g_180), 65535UL)) & (l_303 = (g_302 != &g_260)))), (*g_302)));
                    }
                    else
                    {
                        int *l_304 = &l_182;
                        (*l_248) = l_304;
                        (*l_232) = ((**l_237) = ((l_305 != &l_304) || (&g_84 == l_265)));
                        (*l_237) = &g_75;
                    }
                }
                if (func_66((*l_232), (**l_248), ((*l_310) = (safe_mul_func_int8_t_s_s(l_270, (safe_div_func_int32_t_s_s(((((*l_229) = p_65) > 0x3FBB907BL) | p_65), p_65)))))))
                {
                    if ((l_265 != (void*)0))
                    {
                        unsigned short l_311 = 65535UL;
                        (*l_248) = (*l_237);
                        (*l_232) = (l_311 = (((void*)0 == &g_108) >= g_135));
                        g_74 = &g_89;
                        (*l_192) = p_65;
                    }
                    else
                    {
                        int *l_312 = &g_2;
                        (*l_237) = (*l_237);
                        (*l_192) = (*l_232);
                        (*l_248) = l_312;
                    }
                }
                else
                {
                    unsigned short l_317 = 1UL;
                    unsigned char **l_320 = &l_318;
                    (**l_237) = ((safe_lshift_func_int16_t_s_s((~(**l_237)), 5)) > (safe_sub_func_uint32_t_u_u(l_317, (&g_155 != (void*)0))));
                    (*l_232) = (((*l_320) = (l_319 = l_318)) == &g_260);
                    return l_179;
                }
            }
        }
        else
        {
            unsigned l_325 = 0xA30ADBCEL;
            for (g_75 = (-16); (g_75 < (-25)); --g_75)
            {
                unsigned **l_329 = &l_228;
                short *l_334 = (void*)0;
                (*l_192) = (((*l_318) = (253UL | (safe_lshift_func_int8_t_s_s(l_325, (safe_add_func_uint8_t_u_u(p_65, (&p_65 == ((*l_329) = l_328)))))))) && (safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((0x5AF55B03L | (**l_237)), (**l_237))), 12)));
                return l_334;
            }
            (**l_237) = (-3L);
        }
    }
    return &g_41;
}







static const int func_66(const unsigned char p_67, unsigned char p_68, int p_69)
{
    int *l_105 = &g_2;
    int **l_106 = &g_74;
    char *l_107 = &g_99;
    const char l_117 = 0x52L;
    unsigned char l_118 = 0x48L;
    unsigned short *l_129 = (void*)0;
    unsigned short *l_130 = &g_131;
    unsigned *l_132 = &g_133;
    char *l_134 = &g_135;
    int * const l_137 = &g_89;
    const int *l_154 = &g_155;
    const int **l_153 = &l_154;
    (*l_106) = l_105;
    if (((g_108 = ((*l_107) = (*l_105))) >= (safe_div_func_int16_t_s_s((func_70((**l_106), (*l_105)) > ((*l_134) = (((*l_132) = ((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((*l_105), (0x73L | l_117))) <= l_118), 0)) || (safe_rshift_func_int16_t_s_u((((*l_130) = (safe_rshift_func_int16_t_s_s(((g_128 = (safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((g_127 = ((*l_105) == p_69)) && p_68) > 0x5F7E1E51L), 0x44E0L)), g_89))) & 0x7CL), g_84))) == 4UL), g_2)))) != g_2))), p_67))))
    {
        int *l_136 = &g_89;
        (*l_106) = l_136;
    }
    else
    {
        int **l_138 = &l_105;
        (*l_138) = l_137;
        (*l_106) = (*l_106);
    }
    (*l_137) = ((((safe_rshift_func_int8_t_s_u((+((!(**l_106)) > (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_107) = (((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(0xA025L, ((safe_mod_func_int16_t_s_s(g_89, (((*l_130) = p_69) & (*l_105)))) && (*g_74)))), (safe_lshift_func_int8_t_s_u(p_67, (((*l_153) = (void*)0) == &g_89))))) ^ p_67) > 0x4519L)), 3UL)), 0x42L)))), (*l_137))) == p_68) || 0xCA9EL) && p_68);
    return p_67;
}







static const unsigned char func_70(const unsigned char p_71, unsigned p_72)
{
    unsigned char l_76 = 255UL;
    int *l_77 = &g_75;
    g_74 = &g_2;
    (*l_77) = l_76;
    for (g_41 = (-1); (g_41 > 10); ++g_41)
    {
        int *l_87 = (void*)0;
        int *l_88 = &g_89;
    }
    return g_75;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_640, "g_640", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    transparent_crc(g_689, "g_689", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
