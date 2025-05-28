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



static int g_2 = 0x0477862FL;
static int g_5 = 0L;
static int *g_37 = &g_5;
static int **g_36 = &g_37;
static const int *g_45 = &g_5;
static const int **g_44 = &g_45;
static unsigned g_98[4] = {0xC3517D3EL, 4294967291UL, 0xC3517D3EL, 4294967291UL};
static int g_104 = 0x5A2910E9L;
static int g_144[7] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
static unsigned g_167 = 0x30D59BCEL;
static unsigned long long g_259 = 0x3DE5451DF1B9022DLL;
static int g_276 = 1L;
static unsigned g_294 = 0UL;
static unsigned short g_522 = 0x098BL;
static char g_643 = 0xA4L;



static unsigned func_1(void);
static const unsigned short func_9(const short p_10, int p_11, char p_12);
static int * func_25(long long p_26, unsigned char p_27, unsigned short p_28, int p_29);
static unsigned func_40(unsigned short p_41, const int * p_42, const int ** p_43);
static int * func_46(unsigned long long p_47, int ** p_48, unsigned long long p_49);
static const unsigned short func_59(long long p_60, int * p_61, unsigned short p_62);
static int * func_63(unsigned p_64, char p_65, int ** p_66);
static int func_73(short p_74, long long p_75, unsigned char p_76, char p_77, int * const p_78);
static unsigned short func_83(short p_84, short p_85);
static long long func_94(int p_95, int * p_96, int p_97);
static unsigned func_1(void)
{
    long long l_15 = 0xFC3A065C2DD78F4FLL;
    char l_581 = 0x96L;
    int * const l_593 = &g_276;
    int **l_633 = (void*)0;
    int *l_634 = (void*)0;
    unsigned long long l_648 = 18446744073709551615UL;
    for (g_2 = 0; (g_2 != 26); g_2++)
    {
        char l_16[8] = {1L, 1L, 0x5BL, 1L, 1L, 0x5BL, 1L, 1L};
        int l_568 = 0x36AC7434L;
        int *l_592[5] = {&g_144[5], &g_276, &g_144[5], &g_276, &g_144[5]};
        int l_611 = 0x82C8D39AL;
        int ***l_626 = (void*)0;
        int i;
        for (g_5 = 23; (g_5 == 18); --g_5)
        {
            int l_8[10] = {0x4A0D461EL, 1L, 0x4A0D461EL, 1L, 0x4A0D461EL, 1L, 0x4A0D461EL, 1L, 0x4A0D461EL, 1L};
            int *l_560[7];
            int *l_582 = &l_568;
            unsigned l_594 = 0xC88A2468L;
            int *l_597 = (void*)0;
            unsigned l_601[2][3] = {{0UL, 0UL, 0x6CDF6C1BL}, {0UL, 0UL, 0x6CDF6C1BL}};
            int i, j;
            for (i = 0; i < 7; i++)
                l_560[i] = &g_144[1];
        }
        if ((*g_45))
            break;
    }
    (*g_37) ^= ((g_643 >= (safe_mod_func_int32_t_s_s((l_634 == (void*)0), 0x9D96BFD2L))) && g_167);
    return (*l_593);
}







static const unsigned short func_9(const short p_10, int p_11, char p_12)
{
    int *l_21 = &g_5;
    int *l_540 = &g_276;
    const short l_559 = 0x3E25L;
    for (p_12 = 13; (p_12 != (-22)); --p_12)
    {
        int **l_22 = &l_21;
        (*l_22) = l_21;
        for (p_11 = 0; (p_11 <= 3); p_11 = safe_add_func_int64_t_s_s(p_11, 3))
        {
            if (p_12)
                break;
        }
    }
    (*l_540) = (*l_21);
    (*l_540) |= (*l_21);
    for (p_12 = 0; (p_12 < (-6)); p_12 = safe_sub_func_uint16_t_u_u(p_12, 3))
    {
        char l_545[1];
        int *l_558 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_545[i] = 0x11L;
        if (p_10)
        {
            const int **l_548 = (void*)0;
            (*g_36) = func_46(l_545[0], &g_37, p_12);
            (*g_44) = func_25(((*l_21) | ((safe_div_func_int32_t_s_s((-1L), 0x9DB34003L)) && ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((safe_div_func_uint16_t_u_u((g_144[3] < func_94(g_167, (*g_36), p_11)), (*l_540))) | p_10), p_10)), (*l_540))) >= p_10))), g_522, p_10, p_12);

            ;
            if (l_545[0])
                break;
        }
        else
        {
            int l_557 = 0x9746DD20L;
            l_558 = &p_11;

            ;
        }

        ;
    }
    return l_559;
}







static int * func_25(long long p_26, unsigned char p_27, unsigned short p_28, int p_29)
{
    unsigned long long l_446 = 0UL;
    int **l_447 = &g_37;
    unsigned l_448 = 0x2AD2322FL;
    short l_453 = (-1L);
    char l_456 = (-6L);
    const int **l_469[4] = {&g_45, &g_45, &g_45, &g_45};
    int *l_476 = &g_104;
    int i;
lbl_441:
    for (p_26 = 0; (p_26 < 18); p_26++)
    {
        int *l_440 = (void*)0;
        (*g_44) = l_440;

        ;
        if (p_26)
            goto lbl_441;
    }
    if ((((safe_div_func_uint16_t_u_u(((((p_27 & (safe_mul_func_int8_t_s_s((l_446 <= ((l_447 != l_447) & g_276)), p_29))) <= 0xBC74L) == 2UL) < g_98[0]), 2L)) | g_104) < l_453))
    {
        int *l_454 = &g_144[3];
        return l_454;


    }
    else
    {
        int **l_455[4][1][10] = {{{&g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37}}, {{&g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37}}, {{&g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37}}, {{&g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37}}};
        char l_457 = 1L;
        int i, j, k;
        (*g_44) = (*g_44);
        l_457 = l_456;
    }
    if (p_26)
        goto lbl_441;
    for (p_29 = 8; (p_29 == 28); p_29 = safe_add_func_uint32_t_u_u(p_29, 8))
    {
        int ***l_460 = &l_447;
        int *l_470 = &g_104;
        (*l_470) = (p_29 || 1L);
        (**l_460) = (*g_36);
    }
    return (*l_447);


}







static unsigned func_40(unsigned short p_41, const int * p_42, const int ** p_43)
{
    int l_58 = 7L;
    int *l_303 = &g_2;
    int **l_302 = &l_303;
    unsigned l_364 = 18446744073709551615UL;
    unsigned l_378 = 0x0149B8A8L;
    unsigned char l_428 = 0x9AL;
    long long l_431 = 0x0B5A5A3F1FC9B049LL;
    (*l_302) = func_46((safe_div_func_int16_t_s_s(0x4D2CL, (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(g_5, 5L)) >= (safe_rshift_func_int8_t_s_u((((l_58 | ((0xA84BL ^ (p_41 || func_59(p_41, func_63((safe_add_func_uint32_t_u_u(0x5B4499C7L, ((safe_lshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s((func_73(l_58, p_41, g_2, g_5, (*g_36)) & 0x7717E41AL), p_41)) || g_5), 0)) | (-1L)))), l_58, g_36), l_58))) > 5L)) >= g_5) >= 0xC259L), 5))), 0xDFL)))), l_302, g_5);

    ;
    ;
    ;
    for (g_167 = (-19); (g_167 <= 60); g_167++)
    {
        int *l_357 = &g_144[3];
        const int ***l_403 = &g_44;
        unsigned l_427 = 4294967293UL;
        (*l_357) |= (*p_42);
        l_364 &= ((*l_357) <= (safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(p_41, (*l_357))), 5)), (*l_357))));
        for (g_259 = 0; (g_259 <= 3); g_259 += 1)
        {
            int **l_367 = (void*)0;
            unsigned l_426[6] = {18446744073709551615UL, 18446744073709551615UL, 0x02C31B24L, 18446744073709551615UL, 18446744073709551615UL, 0x02C31B24L};
            int i;
            for (l_58 = 6; (l_58 >= 1); l_58 -= 1)
            {
                const char l_372 = 1L;
                int l_373 = 0xDB3D0EAAL;
                int i;
                g_144[l_58] = (*p_42);
                if (l_373)
                    continue;
                (*g_44) = (void*)0;

                ;
                if ((**l_302))
                    continue;
            }
            for (l_364 = 0; (l_364 <= 3); l_364 += 1)
            {
                int i;
                if (g_98[g_259])
                    break;
                if ((g_98[l_364] != (safe_mod_func_uint64_t_u_u(g_167, p_41))))
                {
                    for (g_104 = 3; (g_104 >= 0); g_104 -= 1)
                    {
                        (*l_357) = (safe_add_func_int32_t_s_s((g_2 != func_59(g_259, (*g_36), g_104)), (l_378 > ((-1L) <= (safe_sub_func_int64_t_s_s(g_98[l_364], g_167))))));
                    }
                    return p_41;
                }
                else
                {
                    for (l_58 = 0; (l_58 <= 3); l_58 += 1)
                    {
                        (*l_357) = 0xA91AE63AL;
                        (*g_44) = (*p_43);
                    }
                }
            }
            for (p_41 = 0; (p_41 <= 3); p_41 += 1)
            {
                int ***l_412 = &g_36;
                char l_421 = 0x8BL;
                int i;
                (*p_43) = &g_144[(g_259 + 3)];

                ;
                if (func_83((safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u(g_167, (safe_div_func_int32_t_s_s((**p_43), (*g_45))))), (*l_357))), 0x99532293B63C9BB6LL)), p_41))
                {
                    int i;
                    g_144[(g_259 + 1)] &= (safe_add_func_uint8_t_u_u((((&p_43 == &p_43) > (safe_div_func_uint8_t_u_u(0x07L, g_98[0]))) || p_41), p_41));
                }
                else
                {
                    const long long l_408 = 0x155B47B51DFCB4B0LL;
                    int *l_409[5][1][2];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_409[i][j][k] = &g_104;
                        }
                    }
                    g_104 &= ((((((((p_41 | (((~(g_144[3] && (safe_lshift_func_int16_t_s_s(((*l_357) <= (!(safe_mod_func_int32_t_s_s((((safe_add_func_int64_t_s_s((((void*)0 != l_403) ^ l_408), 0x27304A5D0BC74A59LL)) || (**l_302)) == (*l_357)), 0x343486B5L)))), g_98[3])))) > g_276) || (*l_357))) ^ 0xFCBAL) && g_167) && 0UL) & p_41) <= p_41) || g_144[1]) & 0x3ED5L);
                    (*l_357) = ((*l_357) == (safe_div_func_int32_t_s_s(func_83((*l_303), ((-2L) | ((*g_44) != (void*)0))), (*p_42))));
                }

                ;
                (*l_357) &= (l_412 != &p_43);
                (*l_357) = (safe_mod_func_uint8_t_u_u((((*p_42) ^ 0UL) > (((void*)0 != &p_43) == (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_421, (*p_42))), 1)), (!(safe_mul_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((&g_44 != &p_43), (1L ^ l_426[2]))) != 5L), l_427))))))), p_41));
            }
        }
    }
    if (l_428)
    {
        int **l_432 = (void*)0;
        int *l_435 = &g_144[3];
        (*l_435) = (safe_sub_func_uint32_t_u_u(func_59(((-9L) ^ p_41), (*g_36), ((1UL & (safe_sub_func_uint32_t_u_u((g_167 <= ((void*)0 != l_432)), 6L))) && 4294967294UL)), p_41));
        (*l_435) = (0x7427DB5C1104DD7DLL ^ p_41);
        (*l_435) = (**l_302);
    }
    else
    {
        unsigned short l_437 = 0x9998L;
        g_104 = ((safe_unary_minus_func_int64_t_s(l_437)) <= ((void*)0 == &p_42));
    }
    return g_98[0];
}







static int * func_46(unsigned long long p_47, int ** p_48, unsigned long long p_49)
{
    int l_320 = 0x592116FDL;
    int *l_322 = &g_144[0];
    int **l_349[4];
    int i;
    for (i = 0; i < 4; i++)
        l_349[i] = &l_322;
    for (g_104 = 0; (g_104 == (-14)); g_104--)
    {
        unsigned long long l_316 = 0xF2C3C599F4A2D3D3LL;
        int *l_353[6][2] = {{&g_276, &g_104}, {&g_276, &g_104}, {&g_276, &g_104}, {&g_276, &g_104}, {&g_276, &g_104}, {&g_276, &g_104}};
        int i, j;
        for (g_167 = 0; (g_167 <= 6); g_167 += 1)
        {
            int **l_309 = (void*)0;
            int l_318[4][6] = {{0x3E37CBACL, 0xCCA4D006L, 7L, 1L, 1L, 7L}, {0x3E37CBACL, 0xCCA4D006L, 7L, 1L, 1L, 7L}, {0x3E37CBACL, 0xCCA4D006L, 7L, 1L, 1L, 7L}, {0x3E37CBACL, 0xCCA4D006L, 7L, 1L, 1L, 7L}};
            unsigned l_319 = 1UL;
            int i, j;
            if ((p_49 == 0UL))
            {
                int ***l_313 = (void*)0;
                int l_321 = 1L;
                for (p_49 = 1; (p_49 <= 6); p_49 += 1)
                {
                    const int ***l_306 = &g_44;
                    int l_317 = (-9L);
                    (*l_306) = &g_45;
                    for (g_294 = 0; (g_294 <= 6); g_294 += 1)
                    {
                        int **l_308 = (void*)0;
                        int ***l_307[4][6][1];
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 6; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_307[i][j][k] = &l_308;
                            }
                        }
                        l_309 = &g_37;

                        ;
                        (**l_306) = (*g_36);

                        ;
                    }

                    ;
                    if ((**p_48))
                    {
                        int ** const *l_312[4] = {&g_36, &l_309, &g_36, &l_309};
                        int i;
                        l_317 ^= ((safe_div_func_int32_t_s_s(((g_144[0] <= (l_312[1] == l_313)) < g_98[1]), (safe_lshift_func_uint16_t_u_u((((0x79DAD9700F0D2922LL & g_98[3]) ^ (l_316 && g_294)) & ((-10L) | p_49)), 14)))) == p_47);
                    }
                    else
                    {
                        l_318[3][3] &= 0x8443DA25L;
                        (*p_48) = (*p_48);
                    }
                    return (*p_48);


                }
                l_319 = 2L;
                l_321 = l_320;
            }
            else
            {
                char l_334[1][6][2] = {{{(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}}};
                int *l_354 = &g_276;
                int i, j, k;
                if (l_316)
                {
                    int * const l_351 = &l_318[1][4];
                    g_144[2] = func_59(p_47, (*g_36), g_144[3]);
                    (*p_48) = l_322;

                    ;

                    if ((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((*l_322), p_49)), (*l_322))))
                    {
                        int l_329 = 7L;
                        char l_350 = 0xF0L;
                        (**p_48) = ((((-9L) <= g_259) && ((safe_mul_func_uint16_t_u_u(((((**p_48) || p_47) ^ (p_49 ^ func_83(l_329, (+(safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((**p_48), (*l_322))), 0)))))) != l_334[0][2][1]), p_47)) < p_49)) | 0xE3L);
                        l_318[3][3] ^= (p_49 != (safe_add_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(l_329, ((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_144[5], (safe_mod_func_int16_t_s_s(((void*)0 == l_309), p_49)))), (safe_mod_func_int16_t_s_s((&l_329 != (*p_48)), ((((void*)0 == l_349[0]) & 0xE93B2AEEL) || (**p_48)))))), g_294)) == l_350))) & 0x03701D3A4CB9A50BLL), g_144[3])));
                    }
                    else
                    {
                        int l_352 = 3L;
                        (*g_44) = (*g_44);
                        (*l_351) &= (g_104 & ((void*)0 != l_351));
                        (**p_48) = l_352;
                        l_353[0][1] = (*p_48);


                    }


                    return l_354;


                }
                else
                {
                    if ((**p_48))
                        break;
                }
            }
            (*g_44) = (*p_48);

            ;
        }
        (*p_48) = (*p_48);
        (*l_322) = (**p_48);
    }


    return (*p_48);


}







static const unsigned short func_59(long long p_60, int * p_61, unsigned short p_62)
{
    int *l_301[1];
    int i;
    for (i = 0; i < 1; i++)
        l_301[i] = &g_276;
    g_144[6] = (safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(p_62, g_167)), 0xF7FBA5C3L));
    return p_60;
}







static int * func_63(unsigned p_64, char p_65, int ** p_66)
{
    const unsigned char l_123 = 0UL;
    int l_178 = 0x5A271B26L;
    long long l_218 = (-1L);
    int **l_226 = &g_37;
    int l_268 = 1L;
    int *l_287 = (void*)0;
    int *l_288 = (void*)0;
    int *l_289 = &g_144[3];
    unsigned l_293 = 0UL;
lbl_179:
    if ((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((((p_65 <= (((safe_mul_func_int8_t_s_s((l_123 >= p_65), p_65)) == (((void*)0 == (*g_44)) && ((0x2CL == (&g_45 != (void*)0)) || l_123))) & g_5)) <= g_98[3]) > 0x3385L) | 9L), l_123)), l_123)))
    {
        int l_126 = 0xC0B8F99DL;
        int *l_127 = &g_104;
        for (p_65 = 0; (p_65 >= (-3)); p_65 = safe_sub_func_uint64_t_u_u(p_65, 8))
        {
            if (l_126)
                break;
        }
        (*l_127) &= (-7L);
    }
    else
    {
        unsigned l_128 = 0x7054D2ACL;
        int *l_129 = (void*)0;
        int *l_130 = &g_104;
        (*l_130) &= l_128;
    }
    for (g_104 = 0; (g_104 <= (-4)); g_104--)
    {
        short l_139[4] = {0xF721L, 0L, 0xF721L, 0L};
        unsigned char l_154 = 0UL;
        int *l_166 = &g_144[6];
        int **l_171 = &g_37;
        unsigned long long l_257 = 0x99C2ED7BFA6EBB11LL;
        int i;
        if (((0xEE9AL || func_83((18446744073709551615UL == (0x13L >= ((**g_36) <= p_64))), ((safe_sub_func_int32_t_s_s((*g_37), (safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(func_83(g_5, l_139[1]), 2)), l_139[1])))) ^ g_104))) < 4294967293UL))
        {
            int *l_143 = &g_144[3];
            (*l_143) &= (g_104 & (((safe_rshift_func_uint16_t_u_u(g_98[1], 15)) > (safe_unary_minus_func_uint16_t_u((~(((void*)0 == &g_37) <= p_65))))) && g_5));
            for (p_65 = 0; (p_65 <= 3); p_65 += 1)
            {
                int i;
                if (g_98[p_65])
                    break;
            }
        }
        else
        {
            int *l_145 = &g_144[3];
            int *l_165 = &g_2;
            (*l_145) &= 0x9CE06006L;
            for (p_64 = 22; (p_64 <= 12); p_64 = safe_sub_func_int64_t_s_s(p_64, 1))
            {
                int **l_153[2][5] = {{&g_37, &l_145, &g_37, &g_37, &l_145}, {&g_37, &l_145, &g_37, &g_37, &l_145}};
                int l_203 = 1L;
                int i, j;
                for (p_65 = 3; (p_65 >= 0); p_65 -= 1)
                {
                    unsigned l_150 = 8UL;
                    int **l_172 = &l_166;
                    int i;
                    (*l_145) = ((safe_add_func_uint8_t_u_u((l_139[p_65] && ((g_98[p_65] < func_83(l_123, l_150)) && (+((g_2 >= ((void*)0 == l_153[1][4])) < p_64)))), l_154)) && p_65);
                    g_167 ^= ((g_104 >= (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(p_64, l_154)), (safe_add_func_uint8_t_u_u(((func_83(l_139[1], g_144[2]) ^ g_144[5]) != (safe_lshift_func_uint16_t_u_u(((((safe_div_func_uint64_t_u_u((+p_64), ((l_165 == l_166) ^ g_144[3]))) >= l_123) ^ 0x61L) != (*l_145)), g_5))), g_144[0]))))) || l_150);
                    if ((((p_65 & (func_83((((safe_unary_minus_func_uint16_t_u((0UL <= func_83(p_64, (&l_166 != (void*)0))))) != 0x559906447CF268A7LL) & p_64), g_5) <= p_64)) || 0xF9L) >= (**g_36)))
                    {
                        if ((**g_36))
                            break;
                    }
                    else
                    {
                        int l_177 = (-7L);
                        (*l_166) = (g_144[3] | (l_171 == l_172));
                        l_178 &= ((func_83((safe_sub_func_uint64_t_u_u((g_167 < 0x57L), p_64)), (&g_45 != l_172)) & p_64) == ((g_144[3] || ((safe_rshift_func_uint8_t_u_s(l_177, (**l_172))) ^ 1UL)) || p_64));
                    }
                }
                if (p_64)
                    goto lbl_179;
                for (p_65 = 0; (p_65 <= (-29)); p_65 = safe_sub_func_uint8_t_u_u(p_65, 7))
                {
                    const char l_194 = (-1L);
                    for (g_167 = (-24); (g_167 <= 45); ++g_167)
                    {
                        (*l_166) = (safe_mul_func_uint8_t_u_u((func_83(((&g_37 == p_66) < (7UL | (**g_36))), (((g_144[3] || p_64) < g_98[0]) && (safe_mul_func_uint16_t_u_u(((**p_66) ^ (safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(g_144[3], g_104)), l_194)), 0x75L))), p_65)))) >= g_144[3]), p_65));
                        l_203 &= ((safe_lshift_func_uint16_t_u_u(4UL, (safe_lshift_func_uint16_t_u_s(((!g_5) >= (((((*l_145) ^ (&g_45 == &g_45)) <= (g_144[5] > 255UL)) == ((safe_lshift_func_int8_t_s_s(p_65, 2)) ^ (safe_mod_func_uint16_t_u_u((g_5 < l_123), p_65)))) & (**l_171))), 8)))) | l_123);
                    }
                }
                if ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((((void*)0 != (*p_66)) && ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((g_144[0] < (((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s((((+(safe_sub_func_int8_t_s_s(p_65, l_123))) || l_123) == (**l_171)), (~(func_83(l_123, p_65) <= (*g_37))))), 1L)) & 0x582D88AC7E52D05FLL) > (*l_165))), (**g_36))), 2)) | 0UL)) >= (-9L)), (-1L))), l_218)))
                {
                    long long l_227 = (-5L);
                    int l_232 = (-8L);
                    int l_246 = (-1L);
                    for (l_178 = 0; (l_178 >= (-3)); l_178 = safe_sub_func_uint64_t_u_u(l_178, 1))
                    {
                        int l_223 = 1L;
                        (*l_171) = l_145;

                        ;
                        (**g_36) &= (*l_165);
                        (**p_66) ^= ((safe_div_func_int8_t_s_s(((((g_167 && l_223) != (((safe_lshift_func_int16_t_s_u(0x5E3DL, ((g_98[0] & (((p_66 != l_226) > p_64) != p_64)) <= g_167))) & 0x59E7L) && l_227)) != (*l_165)) > g_2), 253UL)) != p_64);
                        (**l_171) = ((*p_66) == (void*)0);
                    }
                    if ((*l_165))
                        break;
                    if ((**p_66))
                        break;
                    if ((((p_65 < l_227) > (safe_mod_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s((-1L), func_83(l_232, p_65))) >= p_64) != g_5) ^ (safe_rshift_func_uint16_t_u_s(p_65, 2))), 0x2E97L))) ^ 4294967288UL))
                    {
                        unsigned l_249 = 6UL;
                        l_246 |= (((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(g_167, p_64)), (*l_165))) ^ l_232) || (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((safe_div_func_int16_t_s_s((**l_226), (func_83(p_64, (safe_mul_func_int8_t_s_s(((func_83(g_144[5], (**l_226)) || g_167) ^ (-8L)), 0xB5L))) && 0xA95C22D9L))) | 4294967294UL))), 0)));
                        l_246 &= (1L | (*l_166));
                        l_246 |= (0x8A6DL < (p_65 > (((safe_rshift_func_int16_t_s_u((func_83(p_64, p_65) ^ l_232), p_64)) >= (p_64 == g_144[3])) >= (**l_171))));
                        l_249 = (**g_36);
                    }
                    else
                    {
                        if ((**p_66))
                            break;
                        return (*p_66);


                    }
                }
                else
                {
                    return l_145;


                }
            }
        }
        for (l_154 = 0; (l_154 != 3); l_154 = safe_add_func_int8_t_s_s(l_154, 7))
        {
            long long l_252 = 0x8ED05F3529B9CDFALL;
            int *l_258 = &l_178;
            int *l_280 = &g_144[1];
            (*l_166) = (~(((g_98[1] >= (**l_171)) & ((func_83(g_2, l_252) | ((((void*)0 != (*p_66)) && g_5) ^ (safe_div_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(g_144[3], g_2)) & 0x5242L), l_257)))) >= 0x830DA417L)) || l_252));
            (*l_258) ^= ((**l_171) < 0UL);
            if ((((0x7475L >= g_5) >= 0x9B06L) > g_259))
            {
                int *l_262 = &l_178;
                int *l_275 = &g_276;
                for (g_167 = 0; (g_167 != 19); ++g_167)
                {
                    unsigned long long l_267 = 0x4D332DDE1195C0E0LL;
                    (*l_262) |= (func_83((p_64 & g_5), (l_262 != (void*)0)) ^ (safe_sub_func_int64_t_s_s((0x3EBFL || ((((safe_mul_func_int8_t_s_s(l_267, l_268)) | p_64) == p_64) && (**l_226))), g_104)));
                    return (*g_36);


                }
                for (l_268 = 0; (l_268 == 1); l_268++)
                {
                    unsigned l_271 = 8UL;
                    int l_272 = 0xB8F7548CL;
                    for (l_218 = 0; (l_218 <= 3); l_218 += 1)
                    {
                        int i;
                        (*l_166) = 0x87AC00EFL;
                        if (l_139[l_218])
                            continue;
                        (*g_44) = (void*)0;

                        ;
                    }
                    l_272 &= (l_271 | p_64);
                }
                (*l_275) |= (g_5 ^ (g_104 <= ((((void*)0 != &g_37) || ((*l_258) | (safe_lshift_func_int16_t_s_s(((1L >= (**l_226)) ^ ((*p_66) == (*l_226))), p_64)))) <= p_65)));
            }
            else
            {
                char l_284 = 0x57L;
                for (p_65 = 24; (p_65 >= 23); --p_65)
                {
                    unsigned char l_279 = 7UL;
                    l_279 |= (**p_66);
                    for (l_257 = 0; (l_257 <= 3); l_257 += 1)
                    {
                        l_280 = l_258;

                        ;
                        (*g_36) = (*p_66);
                    }
                    (*l_258) = ((((safe_unary_minus_func_int64_t_s(((safe_mod_func_uint64_t_u_u(p_64, l_284)) | ((**l_226) > func_83(g_259, g_144[3]))))) <= p_65) <= (p_65 != ((3UL & g_104) > p_65))) > p_64);
                }

                ;
            }

            ;
        }
        for (p_65 = 26; (p_65 != (-28)); p_65 = safe_sub_func_int16_t_s_s(p_65, 5))
        {
            (*l_166) = 0x9B29B80AL;
            (*l_226) = (void*)0;

            ;
        }

        ;
        return (*l_171);


    }
    (*l_289) = (**p_66);
    l_178 &= (safe_unary_minus_func_int64_t_s(((safe_add_func_uint32_t_u_u(((func_83(l_293, g_144[3]) != func_94(func_94(g_294, (*p_66), ((safe_sub_func_uint64_t_u_u(g_104, (**l_226))) ^ (g_144[3] >= (*l_289)))), &g_2, g_259)) <= g_167), 0x90DD8B25L)) <= p_64)));
    return (*g_36);


}







static int func_73(short p_74, long long p_75, unsigned char p_76, char p_77, int * const p_78)
{
    int l_86[4][6] = {{(-6L), (-6L), 0x39588DFEL, (-1L), 0L, (-1L)}, {(-6L), (-6L), 0x39588DFEL, (-1L), 0L, (-1L)}, {(-6L), (-6L), 0x39588DFEL, (-1L), 0L, (-1L)}, {(-6L), (-6L), 0x39588DFEL, (-1L), 0L, (-1L)}};
    int l_90 = 9L;
    unsigned char l_93 = 4UL;
    int *l_116 = &l_86[2][0];
    int i, j;
    l_90 &= (+((func_83(p_75, l_86[3][0]) | ((*g_36) == &l_86[3][3])) >= 0L));
    for (p_76 = 0; (p_76 < 2); p_76 = safe_add_func_uint64_t_u_u(p_76, 8))
    {
        return (*p_78);
    }
    (*l_116) |= (func_83(p_74, (l_90 & l_93)) != ((g_5 <= (&g_37 != &p_78)) ^ (g_5 == func_94(g_5, (*g_36), p_77))));
    return (*p_78);
}







static unsigned short func_83(short p_84, short p_85)
{
    long long l_89 = 6L;
    for (p_85 = 0; (p_85 >= (-3)); p_85--)
    {
        (*g_44) = (void*)0;

        ;
    }
    return l_89;
}







static long long func_94(int p_95, int * p_96, int p_97)
{
    unsigned l_111 = 0x108C6EC2L;
    for (p_95 = 3; (p_95 >= 0); p_95 -= 1)
    {
        int l_106 = 0xE0D3BD28L;
        unsigned l_115 = 0UL;
        int i;
        if (g_98[p_95])
        {
            int *l_103 = &g_104;
            int i;
            (*l_103) = ((7UL | g_98[p_95]) != ((g_98[p_95] & ((safe_lshift_func_int16_t_s_s(p_97, g_5)) & (safe_lshift_func_uint16_t_u_s(((g_98[p_95] && (*g_37)) <= g_98[1]), g_5)))) | 0xBDL));
            (*l_103) |= (**g_36);
        }
        else
        {
            int *l_105[3];
            int i;
            for (i = 0; i < 3; i++)
                l_105[i] = &g_104;
            l_106 = 0x7CFCBFA3L;
            if ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((p_96 == &l_106), l_111)), 3)))
            {
                unsigned char l_112 = 0xC3L;
                l_112 &= (**g_36);
                for (l_106 = 0; (l_106 <= 3); l_106 += 1)
                {
                    if ((*g_37))
                        break;
                }
            }
            else
            {
                l_106 ^= (safe_sub_func_int16_t_s_s(0xFACDL, (g_104 != ((l_105[1] == &l_106) >= l_115))));
            }
            (*g_36) = (*g_36);
            g_104 = 0x758A71D4L;
        }
        for (p_97 = 3; (p_97 >= 0); p_97 -= 1)
        {
            int i;
            return g_98[p_95];
        }
        for (l_106 = 0; l_106 < 4; l_106 += 1)
        {
            g_98[l_106] = 4294967295UL;
        }
    }
    return p_97;
}





int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_98[i], "g_98[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_144[i], "g_144[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
