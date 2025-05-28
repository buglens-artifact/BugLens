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



static unsigned char g_2 = 0UL;
static int g_7 = 0xF6B8F3D4L;
static int g_9 = 0x71DFD947L;
static int *g_84 = (void*)0;
static int **g_83 = &g_84;
static char g_189 = 8L;
static unsigned g_221 = 4294967291UL;
static int g_225 = 0xC32FFC17L;
static const int *g_277 = &g_9;
static const int **g_276 = &g_277;
static int *g_287 = &g_225;
static int **g_300 = &g_287;
static unsigned short g_392 = 0xAD6CL;
static int g_401 = 0xBF1B6950L;
static unsigned short g_460 = 0xEF50L;
static int g_528 = (-1L);
static int **g_549 = &g_84;
static unsigned char g_569 = 0xB6L;
static int g_661 = (-8L);
static unsigned short g_735 = 65535UL;



static unsigned func_1(void);
static unsigned char func_3(unsigned char p_4);
static char func_13(int p_14, unsigned short p_15, int * p_16);
static unsigned func_23(int * p_24, int p_25, int * p_26, int * p_27);
static short func_28(unsigned p_29, short p_30, char p_31, char p_32, int * p_33);
static char func_45(char p_46, char p_47);
static char func_48(int p_49);
static const unsigned func_52(unsigned char p_53, int * p_54);
static int func_62(int ** p_63, const int p_64, int * p_65, int ** p_66);
static unsigned char func_69(int * p_70, int * p_71, unsigned p_72, int p_73, const short p_74);
static unsigned func_1(void)
{
    const int l_44 = 0x451DBA1DL;
    const short l_226 = 1L;
    int *l_227 = &g_9;
    unsigned l_625 = 0UL;
    int ***l_638 = &g_300;
    unsigned l_649 = 0xBEBD3577L;
    unsigned short l_700 = 0UL;
    unsigned char l_752 = 247UL;
    short l_761 = 0x3245L;
    unsigned l_766 = 0x835E6036L;
    g_7 = ((g_2 != (0xA0L >= func_3(g_2))) , g_7);
    for (g_9 = 0; (g_9 > 29); ++g_9)
    {
        char l_12 = 1L;
        int *l_68 = &g_9;
        int **l_67 = &l_68;
        unsigned l_610 = 0UL;
        int l_613 = 1L;
    }
    if (((-8L) < (safe_add_func_uint16_t_u_u((*l_227), ((((safe_lshift_func_uint16_t_u_s(((&g_300 == (void*)0) | func_69(l_227, l_227, ((!(safe_mul_func_uint8_t_u_u(((((g_221 < ((0xADL <= (((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(l_625, (*l_227))), (*l_227))) < 65535UL) , (-1L))) != g_189)) <= 0xD7C5L) , (*g_300)) == (*g_549)), g_569))) >= (*l_227)), (*l_227), (*l_227))), (*l_227))) && 0x3D8948A0L) < g_569) , 0x7D12L)))))
    {
        unsigned l_633 = 18446744073709551610UL;
        const unsigned l_645 = 0UL;
        int *l_664 = (void*)0;
        int l_695 = (-1L);
        int l_697 = 0x90C568EDL;
        (**g_300) &= (*l_227);
        for (g_569 = 0; (g_569 < 25); g_569++)
        {
            unsigned l_632 = 18446744073709551612UL;
            int *l_635 = &g_7;
            int ***l_647 = &g_83;
            unsigned l_676 = 0xB6626B7FL;
            unsigned l_696 = 0x3C906673L;
        }
        (*l_227) = (*g_277);
    }
    else
    {
        unsigned char l_736 = 255UL;
        unsigned char l_739 = 0x7FL;
        int * const *l_755 = (void*)0;
        int * const **l_754 = &l_755;
        short l_756 = 1L;
        (***l_638) = l_736;
        l_756 ^= (((l_739 & (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(l_739, ((safe_sub_func_uint8_t_u_u(func_48((+0xB63F6EE0L)), (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_2, 1)), (l_752 > (safe_unary_minus_func_int32_t_s(((void*)0 != l_754)))))), 0x27L)))) , g_401))) , (*l_227)), 6))) & 0xFA19BC83L) == g_569);
        (*l_227) = ((**g_276) <= (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((g_225 , g_460), 4)), 15)));
        if (l_761)
        {
            short l_762 = (-1L);
            (*l_227) = l_762;
            (*g_276) = (*g_276);
            (*l_227) = 1L;
        }
        else
        {
            unsigned char l_765 = 0UL;
            int l_775 = 0x3A4B7B90L;
            l_766 = (safe_lshift_func_int16_t_s_u((l_765 , l_765), 8));
            (*l_227) = (safe_sub_func_uint16_t_u_u((65529UL <= ((g_225 >= 254UL) || ((g_460 | (safe_rshift_func_int16_t_s_s((((((void*)0 != &g_84) | g_225) >= (safe_sub_func_int8_t_s_s(g_189, g_2))) ^ 4L), 1))) >= g_221))), g_189));
            (*l_227) ^= 0L;
            for (g_569 = 0; (g_569 > 35); g_569 = safe_add_func_uint32_t_u_u(g_569, 5))
            {
                if (l_775)
                    break;
                (*g_276) = (*g_276);
            }
        }
    }
    for (g_189 = 0; (g_189 < (-24)); --g_189)
    {
        return g_569;
    }
    return (*l_227);
}







static unsigned char func_3(unsigned char p_4)
{
    int *l_6 = &g_7;
    int **l_5 = &l_6;
    int *l_8 = &g_9;
    (*l_5) = (void*)0;
    (*l_8) ^= (g_7 , 0x90D29729L);
    return p_4;
}







static char func_13(int p_14, unsigned short p_15, int * p_16)
{
    int **l_559 = &g_287;
    char l_564 = 0xD9L;
    char l_572 = (-8L);
    int *l_573 = &g_7;
    l_564 = (safe_lshift_func_int8_t_s_s(((&p_16 == (void*)0) | (g_189 , ((**g_276) , 0xA2FFL))), g_528));
    (*l_573) = (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((g_7 ^ g_9), 3)), (g_569 & (safe_lshift_func_uint16_t_u_u(((*p_16) > (l_572 | g_7)), g_569)))));
    return g_7;
}







static unsigned func_23(int * p_24, int p_25, int * p_26, int * p_27)
{
    int * const l_548 = &g_7;
    int *l_550 = &g_528;
    short l_555 = (-7L);
    for (g_2 = (-3); (g_2 != 34); g_2 = safe_add_func_uint32_t_u_u(g_2, 5))
    {
        int l_546 = 0xBC2D05F7L;
        int **l_547 = (void*)0;
        (*l_548) = (((func_48((((((l_546 < (**g_276)) ^ ((g_401 ^ (((g_460 >= g_189) , l_547) != &g_277)) | ((p_26 != l_548) | (*p_26)))) >= 0x5F62L) , p_25) , g_2)) > 0xCD458C39L) , (void*)0) == &p_27);
    }
    if ((((*l_548) && (safe_sub_func_uint32_t_u_u(g_221, func_28((safe_lshift_func_uint8_t_u_u((((p_25 <= 4UL) >= func_28((((l_555 ^ 4294967295UL) , l_550) != l_550), (*l_548), g_7, (*l_550), l_550)) , p_25), (*l_548))), g_401, (*l_550), (*l_548), l_550)))) , (*l_550)))
    {
        (*l_548) &= (*g_277);
        return (*l_550);
    }
    else
    {
        int ***l_556 = &g_549;
        (*l_556) = &p_27;
    }
    (*g_549) = p_24;
    (*l_550) &= 1L;
    return g_460;
}







static short func_28(unsigned p_29, short p_30, char p_31, char p_32, int * p_33)
{
    return g_225;
}







static char func_45(char p_46, char p_47)
{
    unsigned l_526 = 18446744073709551615UL;
    int l_531 = 0xC576CB14L;
    const unsigned short l_536 = 1UL;
    int l_543 = 0L;
    for (g_7 = 28; (g_7 >= (-2)); --g_7)
    {
        for (p_47 = 0; (p_47 < (-24)); --p_47)
        {
            int *l_523 = &g_225;
            int *l_527 = &g_528;
            (*l_527) |= ((safe_lshift_func_uint16_t_u_s(((*g_276) == l_523), (safe_add_func_int8_t_s_s((l_526 && 65535UL), ((*l_523) >= p_46))))) ^ g_401);
            (*l_523) = p_46;
        }
        l_531 |= (safe_lshift_func_uint16_t_u_u(((void*)0 == &g_287), 7));
    }
    l_543 &= (((l_531 > 0xD43FL) | (1UL < (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_526, 4)), l_526)))) || p_47);
    return l_536;
}







static char func_48(int p_49)
{
    int *l_497 = (void*)0;
    int l_514 = (-1L);
    int *l_515 = (void*)0;
    int *l_516 = &g_225;
    for (g_221 = 0; (g_221 == 49); g_221 = safe_add_func_uint16_t_u_u(g_221, 1))
    {
        int *l_500 = &g_225;
        const unsigned char l_508 = 0x9DL;
        (*g_300) = l_497;
        if ((safe_sub_func_int16_t_s_s((g_9 || g_460), (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_49, (*l_500))), g_189)))))
        {
            return (*l_500);
        }
        else
        {
            unsigned l_507 = 0UL;
            int *l_509 = &g_9;
            (*l_500) = (safe_add_func_int8_t_s_s(g_221, (l_507 && (func_62(&g_287, l_508, l_509, &l_500) == g_221))));
        }
        (*g_300) = l_497;
    }
    (*l_516) = (((safe_mul_func_uint16_t_u_u(5UL, (safe_mod_func_int16_t_s_s(g_460, l_514)))) <= 0xD3CAL) , 0L);
    (*g_276) = (*g_276);
    return g_225;
}







static const unsigned func_52(unsigned char p_53, int * p_54)
{
    int *l_232 = (void*)0;
    int l_233 = 1L;
    int * const **l_242 = (void*)0;
    short l_315 = 0x328AL;
    short l_467 = 0xC6CEL;
    int **l_494 = &l_232;
    g_225 &= (*p_54);
    for (g_221 = (-4); (g_221 < 15); ++g_221)
    {
        unsigned l_236 = 18446744073709551615UL;
        int *l_239 = &g_225;
        int ***l_268 = (void*)0;
        (*l_239) = (p_53 ^ (l_236 | (safe_mul_func_int16_t_s_s((*l_239), g_2))));
        if ((0x82L ^ ((((g_221 | ((((p_53 > g_221) & func_62(&p_54, (p_53 , (p_53 > 0x0B08245EL)), l_239, &g_84)) || (*l_239)) < (*l_239))) , l_239) != &l_233) != 248UL)))
        {
            const short l_257 = 1L;
            for (l_236 = 0; (l_236 != 30); l_236 = safe_add_func_uint32_t_u_u(l_236, 1))
            {
                int **l_249 = &l_239;
                char l_253 = 0x08L;
                for (l_233 = (-12); (l_233 >= (-16)); l_233 = safe_sub_func_int16_t_s_s(l_233, 3))
                {
                    int ** const l_250 = &l_232;
                    if (((p_53 , l_249) != l_250))
                    {
                        int * const l_251 = (void*)0;
                        int **l_252 = &l_232;
                        (*l_252) = l_251;
                        (*l_239) |= g_9;
                        (*l_239) ^= l_253;
                        return g_2;
                    }
                    else
                    {
                        int l_256 = 0x894E24BCL;
                        int *l_258 = &g_7;
                        (*l_258) |= ((safe_mod_func_uint32_t_u_u(p_53, l_256)) != g_225);
                    }
                    (*l_239) = (-1L);
                }
                return (**l_249);
            }
            return l_257;
        }
        else
        {
            unsigned l_265 = 0UL;
            int l_269 = 1L;
            l_269 |= ((safe_lshift_func_int16_t_s_u(0x152CL, (+(g_2 , (g_221 , (((safe_mul_func_uint16_t_u_u(g_9, (safe_sub_func_uint8_t_u_u(((*p_54) , (((l_265 < ((*p_54) || (safe_sub_func_int16_t_s_s(p_53, g_225)))) , l_268) == &g_83)), p_53)))) || (*l_239)) , l_265)))))) == (*p_54));
            if (l_265)
                break;
            (*g_83) = &g_225;
        }
        (*l_239) |= (*p_54);
    }
    g_7 = ((((((g_7 != ((safe_mod_func_uint8_t_u_u(p_53, (safe_sub_func_uint8_t_u_u(p_53, g_7)))) || g_225)) , ((((safe_mul_func_int8_t_s_s(p_53, (p_53 == p_53))) || g_9) , p_53) , g_221)) , 0x1EL) > 1UL) , &g_84) != g_276);
    if ((*p_54))
    {
        int *l_278 = &g_225;
        unsigned l_298 = 0xB93434B8L;
        unsigned l_333 = 0xD82569CBL;
        unsigned short l_336 = 0xFE8FL;
        short l_374 = 0x260FL;
        const short l_383 = 0xD036L;
        int l_402 = 0xDD903581L;
        if ((((-1L) | (p_54 == l_278)) != (*l_278)))
        {
            if ((safe_rshift_func_int16_t_s_u(g_189, 2)))
            {
                int l_288 = 0x47154698L;
                (*g_83) = l_278;
                for (g_189 = 29; (g_189 == 0); g_189--)
                {
                    for (g_221 = 0; (g_221 < 4); g_221++)
                    {
                        (*l_278) = (safe_mul_func_uint8_t_u_u(p_53, (0xCFL <= g_225)));
                    }
                    if ((*p_54))
                        continue;
                }
                (*g_276) = g_287;
                (*l_278) |= l_288;
            }
            else
            {
                return g_189;
            }
            (*g_83) = p_54;
        }
        else
        {
            (*g_287) = 0x020AE25DL;
        }
        (*g_83) = p_54;
        (*l_278) = (g_2 , (*g_84));
        if ((*l_278))
        {
            int l_289 = 0xFAA92D2BL;
            const unsigned l_301 = 4294967288UL;
            const int *l_317 = &g_225;
            int l_341 = 0x01E680CEL;
            if (((((l_289 >= (((void*)0 != &l_278) , (*l_278))) && (safe_mod_func_uint32_t_u_u(p_53, ((((g_7 != (safe_lshift_func_uint16_t_u_s(p_53, (((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_53, p_53)), 0x81F3L)) >= (*l_278)) && l_298)))) | 1L) && (*l_278)) , 0x7D4F4D55L)))) , g_9) & g_225))
            {
                int **l_299 = (void*)0;
                l_233 ^= (*l_278);
                if (func_69(((((l_301 , l_278) == (void*)0) ^ (2UL <= (safe_mul_func_uint16_t_u_u(((*g_84) && ((void*)0 == &p_54)), ((safe_add_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((0x04996D6FL & p_53) , g_221), g_9)) != p_53), 1UL)) == g_189))))) , l_278), p_54, g_2, l_289, g_2))
                {
                    return p_53;
                }
                else
                {
                    unsigned l_312 = 0x8E0927C5L;
                    for (l_289 = 20; (l_289 != (-26)); l_289--)
                    {
                        if ((*g_287))
                            break;
                        l_312 &= (p_53 | 0xE1ADE185L);
                        if ((*g_287))
                            break;
                    }
                    for (g_7 = 0; (g_7 > (-13)); --g_7)
                    {
                        (**g_300) = 0x9CA7014AL;
                    }
                    (**g_300) = (**g_276);
                }
                if ((*p_54))
                {
                    if ((0x8012L || l_315))
                    {
                        const int l_316 = 0L;
                        return l_316;
                    }
                    else
                    {
                        (*g_276) = l_317;
                        if (l_233)
                            goto lbl_318;
lbl_318:
                        (*g_83) = (*g_300);
                        return p_53;
                    }
                }
                else
                {
                    (*g_287) = (((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((*l_278), 15)), g_221)) | ((((safe_sub_func_uint16_t_u_u((p_54 == (*g_276)), g_189)) , (void*)0) == (void*)0) , ((+g_225) ^ (safe_sub_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(0x251BL, (*l_278))) >= (*l_317)) >= g_221), p_53))))) <= p_53);
                    if ((safe_mul_func_uint16_t_u_u(p_53, (safe_rshift_func_int8_t_s_s(((0xED09L == ((g_7 & (((((p_53 || g_189) == (!(g_2 && l_333))) , ((safe_mul_func_uint8_t_u_u(p_53, g_221)) <= g_221)) >= 0xF47D8385L) , 0x4EL)) != (*l_317))) , (-1L)), p_53)))))
                    {
                        (*g_287) &= l_336;
                    }
                    else
                    {
                        (*g_276) = (*g_276);
                    }
                    for (l_315 = 0; (l_315 != (-28)); l_315 = safe_sub_func_uint32_t_u_u(l_315, 3))
                    {
                        (*g_276) = p_54;
                    }
                    return g_189;
                }
            }
            else
            {
                const int l_344 = 0x4BC1DFEFL;
                int *l_345 = &g_225;
                for (g_225 = 29; (g_225 < (-27)); g_225--)
                {
                    l_341 ^= (**g_83);
                    (*g_83) = (*g_300);
                }
                (*g_287) ^= 1L;
                (*l_345) = (func_62(&g_287, ((((*l_317) , (*l_317)) >= 0x1A406DD9L) == (-8L)), l_345, &l_278) , 7L);
            }
            (*g_287) = ((void*)0 == l_242);
            return g_2;
        }
        else
        {
            int **l_351 = &g_287;
            unsigned l_360 = 0xA459777CL;
            short l_371 = 0x5C72L;
            int l_421 = 0xDDD064B2L;
            (*l_278) = (*g_287);
            if ((safe_mul_func_uint16_t_u_u(0x6859L, (safe_add_func_uint8_t_u_u(p_53, p_53)))))
            {
                int **l_350 = &l_278;
                l_351 = l_350;
                if ((safe_mod_func_uint8_t_u_u(((g_2 || 0xB4C828D8L) > 0x5DL), (*l_278))))
                {
                    (*l_350) = p_54;
                    (*g_300) = (*g_83);
                    l_360 = ((safe_add_func_int8_t_s_s((func_62(&l_278, (p_53 || g_7), &l_233, &l_232) > g_2), g_2)) != g_9);
                }
                else
                {
                    (*g_276) = (*g_276);
                }
                for (p_53 = 0; (p_53 > 46); p_53++)
                {
                    if ((*p_54))
                    {
                        l_371 = (((void*)0 != l_242) , (safe_rshift_func_int8_t_s_u(((((((*l_350) == (void*)0) <= ((safe_add_func_int16_t_s_s((((((0xE2L & ((safe_mul_func_int8_t_s_s((*l_278), (safe_add_func_uint32_t_u_u((func_62(&p_54, (**g_300), (*l_350), l_351) >= p_53), 0x2287140BL)))) == p_53)) && (*p_54)) >= (**l_350)) < g_9) , (**l_350)), 0x4436L)) != g_2)) , p_53) & p_53) <= 0x30CCE445L), p_53)));
                    }
                    else
                    {
                        (*g_276) = (p_53 , p_54);
                    }
                    if ((*g_287))
                        break;
                    return p_53;
                }
            }
            else
            {
                int **l_382 = (void*)0;
                int *l_384 = &l_233;
                (*l_384) |= (safe_rshift_func_int16_t_s_s(((((((l_374 & ((**l_351) & (((safe_lshift_func_uint16_t_u_s(g_189, (safe_add_func_uint32_t_u_u(((((void*)0 == &l_351) | (((((~((0xA5A4L > (((safe_unary_minus_func_uint8_t_u(((safe_sub_func_uint32_t_u_u((l_382 == (void*)0), (((g_189 , (**l_351)) , 0xB8L) == p_53))) >= (**l_351)))) >= (-1L)) & 0x39582804L)) , (-6L))) , g_7) , (*p_54)) > (*l_278)) | 0xD12EB80CL)) , 0x532E7032L), p_53)))) && l_383) >= g_2))) && g_2) < p_53) , (void*)0) != &l_278) | 0x14459BA9L), p_53));
                if (l_336)
                    goto lbl_385;
lbl_385:
                (*l_278) = (*g_287);
                if (((*l_384) , (p_53 == ((g_225 , (6L != (safe_unary_minus_func_uint8_t_u(((**g_276) , 0x25L))))) == func_62(&p_54, (func_62(&l_278, (**l_351), l_278, &g_84) | 1UL), &l_233, &g_287)))))
                {
                    int **l_391 = &g_287;
                    g_392 &= (func_62(((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_53, (((func_62(&l_384, func_69((*g_83), p_54, g_221, (*g_277), p_53), p_54, &l_232) , (-5L)) > g_221) && (*l_278)))), 15)) , l_391), (*p_54), p_54, l_351) && (**l_391));
                }
                else
                {
                    int *l_397 = &l_233;
                    (*l_384) ^= ((*l_278) , (((void*)0 == p_54) , ((1L | (*l_278)) , (safe_sub_func_int16_t_s_s(p_53, func_62(&p_54, (**g_276), &l_233, &g_84))))));
                    for (l_374 = 0; (l_374 < 2); l_374++)
                    {
                        int *l_398 = &l_233;
                        (*g_300) = l_397;
                        (*g_83) = l_398;
                        (*l_351) = l_278;
                    }
                    (*g_287) = (safe_rshift_func_int8_t_s_u(0x7DL, 0));
                    (*g_300) = p_54;
                }
                (*l_278) = (g_401 & (0xF0432D18L <= (*l_278)));
            }
            l_402 = (*p_54);
            l_421 = (safe_mod_func_uint16_t_u_u((g_221 , g_2), (safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((((((safe_rshift_func_int8_t_s_u((((void*)0 == (*l_351)) , ((*l_278) ^ (**g_276))), 1)) < (safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((0x18L == ((safe_lshift_func_uint8_t_u_s(((void*)0 == p_54), 0)) , g_189)) , (*l_278)), (**l_351))), p_53)), (**l_351)))) , (void*)0) != &g_276) > p_53), p_53)) <= (**l_351)), 14)) > p_53), (*g_277)))));
        }
    }
    else
    {
        unsigned short l_424 = 65533UL;
        unsigned char l_425 = 252UL;
        int l_431 = 0x8389AF55L;
        int ***l_449 = &g_300;
        short l_452 = (-1L);
        unsigned char l_482 = 0x3CL;
        int **l_492 = (void*)0;
        if (((safe_mod_func_int32_t_s_s(l_424, l_425)) <= 1L))
        {
            short l_426 = 0xEA4AL;
            int l_427 = 0L;
            l_427 ^= l_426;
        }
        else
        {
            unsigned char l_444 = 0xE6L;
            (*g_300) = &l_233;
            (*g_287) |= 0L;
lbl_435:
            for (p_53 = (-17); (p_53 == 56); ++p_53)
            {
                int ***l_430 = &g_83;
                l_431 = (&g_276 != l_430);
                (*g_276) = p_54;
                if ((*g_287))
                {
                    (*g_287) &= (g_401 , (*p_54));
                    if (l_425)
                        break;
                    (**g_300) ^= (g_189 != ((void*)0 == p_54));
                    if ((*g_277))
                        break;
                }
                else
                {
                    int *l_434 = &g_7;
                    (**g_300) ^= (g_221 & (p_53 == 4294967295UL));
                    for (l_431 = 0; (l_431 > 27); l_431 = safe_add_func_uint16_t_u_u(l_431, 7))
                    {
                        (*g_83) = l_434;
                        if (g_401)
                            goto lbl_435;
                    }
                }
                p_54 = p_54;
            }
            for (g_225 = 0; (g_225 < 9); g_225 = safe_add_func_uint16_t_u_u(g_225, 1))
            {
                int ** const *l_448 = &g_83;
                int **l_450 = &g_84;
                for (g_189 = 16; (g_189 != 4); --g_189)
                {
                    (*g_300) = p_54;
                    l_233 = (p_53 == (safe_lshift_func_int8_t_s_s((0x4633580CL | ((l_444 || (safe_unary_minus_func_int8_t_s(0xBBL))) > (!(g_221 || (safe_add_func_int16_t_s_s(((l_448 != l_449) < (g_225 == g_221)), 7UL)))))), 4)));
                }
                l_233 = (func_62(&p_54, func_62(&g_287, (*g_277), (**l_449), (g_401 , (void*)0)), &l_233, l_450) || g_401);
                (*g_83) = (*g_300);
            }
        }
        if ((*p_54))
        {
            char l_451 = 0L;
            int *l_453 = &g_225;
            unsigned l_461 = 18446744073709551615UL;
            int *l_483 = &l_431;
            (*l_453) = ((p_53 >= (***l_449)) || (l_451 & l_452));
            if ((safe_mul_func_int16_t_s_s((-9L), ((((((safe_mod_func_int32_t_s_s((*p_54), g_221)) >= (safe_add_func_int16_t_s_s((((~(p_53 , ((((((***l_449) , (*l_453)) != (***l_449)) & (-6L)) && 0x9CL) <= 0x9C1F006EL))) && 0xDBL) >= p_53), 0x0263L))) <= (-1L)) ^ g_460) , (*g_287)) , 65533UL))))
            {
                unsigned l_466 = 18446744073709551615UL;
                l_461 = (*p_54);
                (*l_453) = (g_392 <= (!(safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((p_53 <= 65526UL) < (*l_453)) && (*p_54)), 7)), l_466))));
                (*l_483) ^= ((l_467 , p_53) ^ (p_53 , ((*l_453) == (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s(0x3CL, ((safe_lshift_func_uint16_t_u_s((func_62((*l_449), ((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((void*)0 != l_449), (l_482 , g_189))), 0x2EBAL)) ^ p_53), l_483, &l_483) ^ p_53), 0)) ^ 65535UL))) , g_9) , p_53), (*g_277))) , 0x60199D58L) < 0x1D6262D2L) == g_392), 7)), 65535UL)))));
                (*l_483) &= ((void*)0 == p_54);
            }
            else
            {
                int *l_486 = &l_431;
                int l_491 = 0x3CB16569L;
                for (l_233 = 0; (l_233 < 8); l_233 = safe_add_func_uint16_t_u_u(l_233, 5))
                {
                    (*l_453) = ((g_225 , ((g_401 && ((((void*)0 == l_486) | (safe_lshift_func_uint16_t_u_u((1L & ((0xE28D1145L || (*p_54)) || (+(***l_449)))), p_53))) | (***l_449))) == p_53)) , (*p_54));
                    for (l_451 = 0; (l_451 <= 4); l_451 = safe_add_func_uint16_t_u_u(l_451, 9))
                    {
                        (*l_486) = l_491;
                        (*l_483) = (*p_54);
                    }
                    return g_401;
                }
            }
        }
        else
        {
            const unsigned short l_493 = 1UL;
            if ((0x450D0678L > l_493))
            {
                (*g_276) = (*g_276);
            }
            else
            {
                (*g_276) = (*g_276);
                (*g_83) = p_54;
                return g_460;
            }
        }
        g_7 &= 0x6AE04922L;
    }
    return p_53;
}







static int func_62(int ** p_63, const int p_64, int * p_65, int ** p_66)
{
    int *l_228 = &g_7;
    (*l_228) = g_221;
    (*l_228) &= (safe_unary_minus_func_int16_t_s((g_221 > (safe_lshift_func_int8_t_s_s(g_2, 0)))));
    (*p_63) = (*p_63);
    return (*l_228);
}







static unsigned char func_69(int * p_70, int * p_71, unsigned p_72, int p_73, const short p_74)
{
    const short l_77 = 0x9043L;
    int l_78 = 0x5C5BCCBFL;
    int l_97 = 0xADFBA6F4L;
    int **l_140 = &g_84;
    if ((safe_rshift_func_uint16_t_u_s(l_77, p_74)))
    {
        int *l_79 = (void*)0;
        int **l_80 = &l_79;
        int l_89 = 0xBCB15E7CL;
        const int *l_145 = (void*)0;
        const int **l_144 = &l_145;
        const int ***l_143 = &l_144;
        char l_156 = 0xACL;
        l_78 = 0x23F2B636L;
        (*l_80) = ((!l_77) , l_79);
        if ((((((((((0x56L | p_73) <= (l_77 , (safe_mul_func_uint8_t_u_u(p_74, (l_77 ^ g_7))))) < p_74) >= p_74) , g_83) != &p_71) || 3L) , (*p_71)) , (*p_70)))
        {
            return g_9;
        }
        else
        {
            unsigned l_92 = 18446744073709551608UL;
            const int *l_130 = &g_9;
            unsigned l_155 = 1UL;
            (*g_83) = (*g_83);
            if ((safe_sub_func_int16_t_s_s((((!(safe_mul_func_int16_t_s_s(((l_89 , (*g_83)) == (void*)0), (&g_84 == (((((p_74 >= 4294967295UL) , ((((*l_80) == &p_73) | (((safe_mul_func_uint16_t_u_u(p_74, (-2L))) , p_74) , 8UL)) || p_72)) | g_9) & l_92) , &g_84))))) > l_92) | 0x14F8L), p_74)))
            {
                unsigned l_122 = 0x1A93EFF9L;
                int l_129 = 1L;
                for (l_78 = 0; (l_78 <= 27); l_78++)
                {
                    const int l_116 = 1L;
                    int ***l_119 = &l_80;
                }
            }
            else
            {
                const int **l_131 = &l_130;
                int *l_148 = (void*)0;
                (*l_131) = l_130;
                l_97 &= (p_73 && g_7);
                g_7 = (((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(p_73, (!(((*p_70) || (l_140 == &l_79)) , p_72)))), 0)), (safe_mul_func_int8_t_s_s(((l_143 == &l_80) ^ ((&g_83 != (((safe_mul_func_int8_t_s_s(p_73, (**l_131))) != 0xE0CCL) , (void*)0)) > p_73)), g_2)))) & p_73), g_7)) ^ g_2) & (-1L));
                g_7 = ((**l_131) >= (g_7 ^ 0L));
            }
            l_156 = ((((safe_lshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((p_74 > (((safe_add_func_uint32_t_u_u(((((g_7 , ((*l_130) & p_73)) , ((*l_130) || l_77)) < ((0xBFC0L < l_155) || (g_7 != g_7))) && 1L), (*p_70))) , (*g_83)) == (*g_83))), p_73)) != 0x0E6FL), g_2)) & g_2) , g_7) , g_7);
            for (g_7 = 11; (g_7 <= 5); g_7 = safe_sub_func_int32_t_s_s(g_7, 1))
            {
                int l_172 = 0x5673C171L;
                for (l_78 = 0; (l_78 <= (-22)); l_78 = safe_sub_func_uint32_t_u_u(l_78, 1))
                {
                    short l_171 = 0xC40AL;
                    int l_188 = 1L;
                    l_97 |= l_77;
                    if (((((safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(p_73, g_2)), 15)) || g_2) | g_2) , (safe_lshift_func_uint8_t_u_s(((0x3C42L || 0x3B24L) < (-1L)), (safe_sub_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((p_72 , (((((*l_130) >= 0UL) , 0xDCL) , l_171) == p_74)), p_74)) != g_9) , 0L), p_73))))))
                    {
                        return g_9;
                    }
                    else
                    {
                        int l_187 = 0x4275C064L;
                        l_188 = ((g_7 > (g_2 , p_74)) , ((l_172 < (safe_add_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(p_73, 7)) || ((safe_lshift_func_int16_t_s_s((p_74 <= (safe_mod_func_int16_t_s_s(1L, (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(g_7, 15)), g_9))))), 3)) && p_74)), g_2)) , 0xCBB44D92L) >= l_187), p_74))) != g_9));
                        p_73 = g_189;
                        if ((*p_70))
                            break;
                    }
                }
            }
        }
    }
    else
    {
        unsigned l_190 = 0x9C5E52C1L;
        int ***l_193 = &l_140;
        const int l_220 = 1L;
        int l_222 = 0x8E114101L;
        if ((*p_71))
        {
            return l_190;
        }
        else
        {
            char l_194 = (-5L);
            int *l_199 = (void*)0;
            g_7 &= (safe_sub_func_int32_t_s_s((~((((void*)0 != l_193) , (p_73 | l_194)) , (*p_70))), ((safe_mod_func_uint8_t_u_u(((p_74 && (l_190 >= (~0UL))) > g_2), p_73)) == p_74)));
            l_78 = (safe_sub_func_int16_t_s_s(p_74, ((void*)0 == &p_73)));
            g_7 = (safe_lshift_func_int8_t_s_u((g_9 < ((void*)0 == (*g_83))), g_7));
            (**l_193) = (**l_193);
        }
        l_222 = ((safe_lshift_func_int16_t_s_u(g_7, 8)) , ((((safe_sub_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s(p_72, 0L)) , p_74), p_73)) , ((254UL || (safe_mul_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((((((((safe_add_func_uint16_t_u_u(((l_77 == (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_193 == ((l_193 == &l_140) , &g_83)), 0x030C7200L)), g_7))) >= 0UL), p_72)) <= (*p_70)) >= 0x07D1EAEEL) > (*p_70)) <= l_220) , (void*)0) != (void*)0) & g_221), (*p_71))) != (*p_70)), 7L))) , g_221)) >= g_189), 0x11895C94L)) || p_74) , g_7) & 1L));
        g_225 |= ((((p_72 && (g_7 || (safe_rshift_func_uint8_t_u_s(g_221, (g_9 ^ (p_73 <= (g_7 ^ g_189))))))) && p_74) , p_74) , (*p_71));
    }
    (*l_140) = (*g_83);
    (*g_83) = (*g_83);
    (*g_83) = &p_73;
    return g_189;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_735, "g_735", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
