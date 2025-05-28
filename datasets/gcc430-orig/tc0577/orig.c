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



static unsigned char g_2 = 0x4FL;
static int g_67 = (-1L);
static int *g_120 = (void*)0;
static int ** const g_119 = &g_120;
static int g_121 = 0xDFE8548DL;
static int g_202 = 0x3B10F1C4L;
static int **g_208 = &g_120;
static short g_225 = 0xB83AL;
static unsigned char g_328 = 7UL;
static const int g_484 = 0L;
static unsigned short g_492 = 65529UL;
static const char g_539 = 1L;
static int g_585 = 0x846FD9E5L;



static int func_1(void);
static unsigned func_5(int p_6, unsigned char p_7, unsigned p_8, unsigned p_9, int p_10);
static unsigned func_17(unsigned p_18, int p_19, unsigned char p_20, short p_21, int p_22);
static unsigned func_23(int p_24, unsigned short p_25, int p_26, unsigned p_27, char p_28);
static short func_33(unsigned char p_34, unsigned p_35, int p_36);
static unsigned short func_39(unsigned char p_40, const int p_41);
static unsigned char func_46(const unsigned p_47, char p_48, unsigned short p_49, short p_50);
static int * func_76(unsigned char p_77, int * p_78, unsigned char p_79, short p_80, int * p_81);
static short func_84(short p_85);
static int func_89(int * p_90, int * p_91, short p_92);
static int func_1(void)
{
    short l_11 = 3L;
    unsigned char l_608 = 3UL;
    unsigned short l_609 = 0xAAD2L;
    short l_612 = 0L;
    unsigned short l_616 = 0x2DFCL;
    int *l_624 = &g_67;
    int ***l_638 = &g_208;
    char l_649 = 0L;
    if (((g_2 , ((safe_add_func_uint32_t_u_u(func_5(l_11, (((l_11 == ((safe_rshift_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u((safe_add_func_int32_t_s_s((func_17(((((func_23(((safe_mul_func_int8_t_s_s((0x42L == 0x97L), (((~0x6A0B3493L) , (safe_mod_func_uint16_t_u_u(65535UL, ((func_33(((safe_mod_func_int32_t_s_s((g_2 <= (func_39((g_2 | g_2), g_2) != g_484)), l_11)) != g_484), g_67, g_202) > (-9L)) || l_11)))) ^ 9L))) == g_492), l_608, l_609, g_121, l_608) != 1UL) <= g_539) , 0x47L) | 0x61L), l_608, g_225, l_11, l_612) || 8L), 0xE82C67A7L)))) & g_484), 12)) < g_202)) || g_225) & 0x59984276L), g_67, l_616, g_539), 0xD0C87BEAL)) , (-1L))) , l_612))
    {
        const int l_627 = 1L;
        unsigned l_636 = 0xC042A84BL;
        if (((l_624 == (void*)0) <= ((safe_mul_func_uint16_t_u_u((l_627 && (-1L)), (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_627, (((*l_624) < (safe_add_func_uint8_t_u_u(g_585, (g_539 != ((*l_624) < l_636))))) != g_67))), 251UL)), (*l_624))))) && 0x39DFA018L)))
        {
            return (*l_624);
        }
        else
        {
            int *l_637 = (void*)0;
            (*g_208) = l_637;
            return l_636;
        }
    }
    else
    {
        unsigned l_639 = 8UL;
        int l_640 = 0x77330711L;
        int *l_642 = &l_640;
        int l_648 = 0xFA07D45FL;
        if (((void*)0 != l_638))
        {
            int *l_641 = &l_640;
            l_640 = l_639;
            l_642 = l_641;
            for (g_492 = 0; (g_492 < 26); ++g_492)
            {
                (*g_208) = (*g_119);
                (*g_119) = ((((safe_div_func_uint32_t_u_u((~g_539), (*l_641))) & ((func_46(g_67, func_39(g_225, g_585), g_121, (*l_624)) == 0x55L) , 0UL)) != g_539) , (void*)0);
            }
            (*l_641) = (*l_641);
        }
        else
        {
            int *l_647 = &l_640;
            (*g_208) = l_647;
            (**g_119) = l_648;
            (**g_119) = func_39(g_585, (**g_208));
        }
        return l_649;
    }
}







static unsigned func_5(int p_6, unsigned char p_7, unsigned p_8, unsigned p_9, int p_10)
{
    const char l_619 = 0xBEL;
    int ***l_620 = &g_208;
    int *l_621 = &g_121;
    (*l_621) = (safe_mul_func_int8_t_s_s(func_39(g_539, l_619), ((l_620 == &g_208) >= p_6)));
    (**l_620) = (*g_208);
    for (g_492 = (-14); (g_492 <= 45); ++g_492)
    {
        return g_225;
    }
    return (*l_621);
}







static unsigned func_17(unsigned p_18, int p_19, unsigned char p_20, short p_21, int p_22)
{
    const int l_613 = 8L;
    int *l_614 = (void*)0;
    int l_615 = (-6L);
    l_615 = l_613;
    return p_20;
}







static unsigned func_23(int p_24, unsigned short p_25, int p_26, unsigned p_27, char p_28)
{
    for (g_328 = 0; (g_328 > 26); g_328 = safe_add_func_int8_t_s_s(g_328, 1))
    {
        (*g_208) = (void*)0;
    }
    return g_484;
}







static short func_33(unsigned char p_34, unsigned p_35, int p_36)
{
    unsigned l_606 = 4294967295UL;
    int l_607 = 5L;
    l_607 = ((g_328 != 0xA3A8L) != (((safe_lshift_func_uint8_t_u_u(1UL, 4)) != func_84(l_606)) < p_35));
    return l_607;
}







static unsigned short func_39(unsigned char p_40, const int p_41)
{
    unsigned short l_61 = 1UL;
    const short l_567 = (-1L);
    int *l_570 = (void*)0;
    int l_571 = (-1L);
    int *l_573 = (void*)0;
    unsigned l_602 = 8UL;
    int l_603 = 0x1CF8745DL;
    for (p_40 = 24; (p_40 < 34); ++p_40)
    {
        const unsigned short l_572 = 0UL;
        int *l_576 = &g_67;
    }
    l_603 = (safe_rshift_func_uint8_t_u_u(((((1L == 0UL) ^ (p_40 | 0x9FFAABB0L)) > (p_41 , (((safe_rshift_func_int16_t_s_s(((255UL && 0xD6L) > (((((void*)0 == &l_573) , g_484) == g_225) && 4294967295UL)), 6)) , g_539) , g_585))) >= g_2), l_602));
    return g_202;
}







static unsigned char func_46(const unsigned p_47, char p_48, unsigned short p_49, short p_50)
{
    int l_64 = (-1L);
    int *l_322 = &g_67;
    int ***l_485 = &g_208;
    unsigned short l_535 = 65535UL;
    if ((safe_mul_func_int8_t_s_s(l_64, g_2)))
    {
        const unsigned l_65 = 18446744073709551615UL;
        int *l_66 = &g_67;
        (*l_66) = l_65;
    }
    else
    {
        unsigned short l_319 = 0xA97DL;
        int *l_453 = (void*)0;
        unsigned l_465 = 0x46895FF8L;
        int l_525 = 0xBA4E74F3L;
lbl_471:
        for (p_48 = 10; (p_48 <= 11); p_48 = safe_add_func_int32_t_s_s(p_48, 7))
        {
            int l_86 = 0x9C6A002BL;
            int *l_93 = &g_67;
            for (l_64 = (-10); (l_64 >= (-19)); l_64--)
            {
                int *l_323 = (void*)0;
                if (l_64)
                    break;
                for (g_67 = (-8); (g_67 != 11); g_67++)
                {
                    for (p_49 = 0; (p_49 != 40); p_49++)
                    {
                        char l_321 = 0xCDL;
                        int *l_443 = (void*)0;
                        int *l_444 = &g_121;
                    }
                }
                (*l_93) = (safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u(251UL, g_225)), g_121));
            }
        }
        (*l_322) = 0x8072DA94L;
        for (g_328 = 0; (g_328 == 40); g_328 = safe_add_func_int8_t_s_s(g_328, 9))
        {
            int l_464 = 0x7846DEBEL;
            int *** const l_468 = &g_208;
            int l_488 = 1L;
            short l_524 = 1L;
            if ((safe_sub_func_uint32_t_u_u(((*l_322) == 6L), l_319)))
            {
                unsigned l_469 = 0x468B30C7L;
                int *l_501 = &g_67;
                (*g_208) = l_453;
                if (((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((p_48 & ((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((g_2 , l_464), l_465)), 0x8630L)) | ((safe_add_func_int16_t_s_s((((l_468 == (void*)0) , &g_120) != (void*)0), g_2)) < l_469))) , p_50), p_48)), p_50)) <= p_48))
                {
                    int *l_470 = (void*)0;
                    l_453 = l_470;
                }
                else
                {
                    const int *l_491 = &g_121;
                    const int ** const l_490 = &l_491;
                    const int ** const *l_489 = &l_490;
                    if (p_49)
                        goto lbl_471;
                    if ((safe_rshift_func_int8_t_s_s((func_84(((g_328 , (safe_sub_func_uint16_t_u_u(3UL, (safe_mul_func_int8_t_s_s(1L, (safe_sub_func_int16_t_s_s(p_49, (safe_lshift_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(g_484, ((func_84((((void*)0 != l_485) , (safe_mul_func_int16_t_s_s((l_488 && (&g_119 == l_489)), g_328)))) , (*l_322)) , g_225))) != 1L) | g_492), 4))))))))) , p_47)) && g_225), 1)))
                    {
                        (*l_322) = func_84((g_225 & (p_47 , p_49)));
                        return g_484;
                    }
                    else
                    {
                        (*l_322) = p_50;
                    }
                }
                for (p_50 = (-29); (p_50 != (-9)); p_50 = safe_add_func_int8_t_s_s(p_50, 6))
                {
                    int *l_502 = &g_121;
                    (**l_468) = (void*)0;
                    if ((safe_add_func_uint8_t_u_u(l_469, (0x57CAL != ((safe_lshift_func_uint8_t_u_s(((+((safe_div_func_uint8_t_u_u(g_484, g_484)) , p_47)) > 6L), (((p_50 < p_48) , l_501) == (void*)0))) && 0xCFD0L)))))
                    {
                        return p_48;
                    }
                    else
                    {
                        (*l_322) = (-1L);
                        (*g_208) = (*g_119);
                        (*g_119) = l_502;
                    }
                }
                (*g_208) = (*g_119);
            }
            else
            {
                int l_506 = 0xD4B9FB43L;
                int l_528 = 0x8E0F0E9EL;
                if (((((func_84(p_50) > (safe_unary_minus_func_int16_t_s(6L))) , p_48) , g_202) ^ 1L))
                {
                    if (p_50)
                    {
                        (*l_485) = &g_120;
                        (*l_322) = (safe_mod_func_uint32_t_u_u(l_506, p_50));
                    }
                    else
                    {
                        short l_523 = 0x9CB1L;
                        (*g_119) = (*g_119);
                        l_525 = ((((safe_add_func_uint32_t_u_u(func_84(((safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((l_506 < (safe_rshift_func_uint8_t_u_u(1UL, ((safe_sub_func_int32_t_s_s(func_84(p_48), (0xAFDAL != 7UL))) != ((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((65533UL | 0x0250L), ((~l_523) <= 4294967292UL))), p_50)), 0)) || p_48))))) , l_465), l_524)), 0xA1L)) >= g_67)), g_67)) , (void*)0) == (*g_208)) || 0x2769300BL);
                        (*l_322) = ((void*)0 != (*g_119));
                    }
                }
                else
                {
                    l_528 = (safe_div_func_int8_t_s_s(g_67, (g_484 , g_2)));
                    if (p_48)
                    {
                        const unsigned l_536 = 0x192CDCDDL;
                        (*l_322) = (g_121 < (l_528 != ((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_2 == ((void*)0 != (*g_119))), (safe_sub_func_int16_t_s_s((g_225 == 0xACA9L), l_535)))), (p_49 && l_536))) && p_50)));
                        return g_67;
                    }
                    else
                    {
                        (*g_208) = (*g_208);
                        return g_328;
                    }
                }
                if ((safe_sub_func_int32_t_s_s(((g_539 <= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(g_492, 255UL)) , (g_67 >= g_202)), 4)), g_121))) > (((safe_rshift_func_int16_t_s_u(((((+p_50) , ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((((*l_322) , l_468) == (void*)0), 0xD2L)), 4)) & (-1L))) | g_328) != g_492), 15)) , g_539) | 0x98B2L)), p_49)))
                {
                    if (p_47)
                        goto lbl_471;
                }
                else
                {
                    const int l_562 = 0x2F342E47L;
                    int l_563 = 1L;
                    if (p_49)
                    {
                        int l_556 = (-7L);
                        int ***l_561 = (void*)0;
                        l_563 = p_47;
                        (**l_468) = (*g_208);
                    }
                    else
                    {
                        (*g_208) = (*g_208);
                        if (p_47)
                            break;
                    }
                }
            }
        }
    }
    return (*l_322);
}







static int * func_76(unsigned char p_77, int * p_78, unsigned char p_79, short p_80, int * p_81)
{
    short l_324 = 0L;
    int *l_333 = &g_121;
    int l_416 = 0x73424433L;
    l_324 = (*p_81);
    if ((*p_81))
    {
        for (g_202 = 0; (g_202 == 8); g_202 = safe_add_func_int16_t_s_s(g_202, 8))
        {
            return &g_121;
        }
    }
    else
    {
        int *l_327 = &g_121;
        unsigned short l_440 = 0x733EL;
lbl_369:
        if (l_324)
        {
            short l_346 = 0x904EL;
            (*g_119) = l_327;
            (*g_120) = (g_328 , (safe_sub_func_int16_t_s_s(((**g_119) , (g_328 > (safe_div_func_uint16_t_u_u(p_79, g_121)))), g_328)));
        }
        else
        {
            (*g_119) = p_81;
            (*g_119) = (*g_119);
        }
        if ((func_84((*l_333)) < 0xB55BL))
        {
            int *l_356 = &g_67;
            unsigned l_388 = 4UL;
            if ((*p_81))
            {
                int *l_347 = &g_121;
                if ((*l_333))
                {
                    return p_81;
                }
                else
                {
                    const unsigned l_352 = 4294967290UL;
                    int l_365 = 0x1C4BEF6FL;
                    int *l_368 = &g_67;
                    (*g_119) = l_347;
                    (*l_347) = (safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(((l_352 != (safe_add_func_int16_t_s_s((0xC9F1E63BL < 0xE60D3682L), l_352))) == (((safe_unary_minus_func_int8_t_s(p_79)) && (safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((p_77 && p_79) ^ p_79) && g_225), l_352)), l_365)), 255UL)), g_328))) & (*l_333))), (*l_327))), 9UL));
                    (**g_119) = (+(0xA6CA4173L || ((g_225 == ((g_2 , p_78) == (*g_119))) == 0x0DF067F0L)));
                    (*g_119) = l_368;
                }
            }
            else
            {
                int l_403 = 1L;
                if (l_324)
                    goto lbl_369;
                for (g_202 = 0; (g_202 == (-25)); g_202 = safe_sub_func_uint16_t_u_u(g_202, 1))
                {
                    unsigned l_381 = 0x1FBE0543L;
                    (*l_327) = ((*l_327) <= 0xC4L);
                    for (p_77 = 25; (p_77 != 1); p_77 = safe_sub_func_int16_t_s_s(p_77, 9))
                    {
                        int *l_374 = &g_67;
                        (*g_119) = l_374;
                        (*l_327) = ((safe_div_func_uint32_t_u_u((*l_333), (**g_119))) != ((safe_add_func_uint16_t_u_u((l_381 ^ ((safe_div_func_uint32_t_u_u((0x33B7L & ((func_84((safe_sub_func_uint32_t_u_u(4294967286UL, ((*l_374) != ((*l_374) , (safe_mul_func_uint8_t_u_u(func_84(p_79), 0xC1L))))))) >= (*l_327)) && p_77)), g_121)) , l_388)), 0xC1FAL)) == 249UL));
                        (*g_119) = (void*)0;
                        (*l_333) = ((!func_84((p_79 != (((0UL <= l_381) < ((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u(func_84((safe_add_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((5UL ^ p_80), (((*p_81) != ((safe_add_func_uint32_t_u_u(9UL, func_84((l_403 < l_381)))) > p_79)) ^ 0x0E99L))), 4294967287UL)) & g_2) , g_67), 0UL))), (*l_374))), (-1L))) >= (*l_374))) == p_80)))) , (-10L));
                    }
                }
                (*g_119) = p_81;
                (*l_333) = (((safe_lshift_func_int16_t_s_s((*l_333), (func_84((*l_333)) != 65529UL))) , func_84(((safe_mod_func_int16_t_s_s((g_328 & (safe_mod_func_int32_t_s_s((g_328 || (!((1UL <= (*l_356)) < ((*g_119) != p_78)))), (**g_119)))), (*l_356))) ^ 1UL))) , (*g_120));
            }
            (*g_119) = l_356;
            for (p_80 = (-1); (p_80 == 1); ++p_80)
            {
            }
        }
        else
        {
            (*g_119) = (void*)0;
            (*l_333) = l_416;
            (*g_119) = &l_416;
            for (g_328 = 23; (g_328 != 9); g_328 = safe_sub_func_int8_t_s_s(g_328, 8))
            {
                for (p_80 = (-9); (p_80 <= (-1)); p_80 = safe_add_func_int16_t_s_s(p_80, 4))
                {
                    if ((*p_81))
                        break;
                }
            }
        }
        (*l_333) = ((safe_unary_minus_func_int16_t_s(((((safe_mod_func_int32_t_s_s((((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((0x5E57L < (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(((l_327 == &l_416) , (safe_add_func_int16_t_s_s(((*g_119) != (void*)0), (-1L)))), 2)) & ((g_67 & (safe_lshift_func_int8_t_s_s(l_440, 1))) , (safe_rshift_func_int16_t_s_s(g_2, 9)))), p_79)), (*l_333)))), 0x073BAD02L)), 3)), p_77)) , g_67) , (*l_333)), 0xC06E7D00L)) >= p_77) , l_327) != &l_416))) == (-1L));
    }
    return p_81;
}







static short func_84(short p_85)
{
    unsigned l_320 = 1UL;
    return l_320;
}







static int func_89(int * p_90, int * p_91, short p_92)
{
    unsigned l_94 = 0x44351D5EL;
    int l_101 = (-9L);
    int l_102 = 9L;
    const char l_122 = (-1L);
    short l_187 = 0x61F0L;
    int ***l_201 = (void*)0;
    short l_246 = (-1L);
    unsigned l_290 = 1UL;
    unsigned l_291 = 4294967295UL;
    unsigned l_307 = 0UL;
    if ((((l_94 , (p_92 , (l_94 , 0xA47BL))) <= 1UL) == (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(g_2, ((safe_add_func_uint8_t_u_u(1UL, p_92)) , l_101))), l_102))))
    {
        int *l_104 = (void*)0;
        int **l_103 = &l_104;
        int * const l_241 = &g_67;
        (*l_103) = p_91;
        if ((g_2 , ((((safe_rshift_func_uint16_t_u_u((**l_103), (l_94 == (**l_103)))) >= (-1L)) , (((g_67 || ((*p_90) > g_67)) , &l_104) != (void*)0)) >= 0x32CF2D06L)))
        {
            (*l_103) = &g_67;
        }
        else
        {
            (*l_103) = &g_67;
            for (l_102 = (-2); (l_102 >= 0); l_102 = safe_add_func_uint8_t_u_u(l_102, 8))
            {
                int *l_109 = (void*)0;
                l_109 = l_109;
            }
            (*l_103) = (((*l_104) >= p_92) , &l_102);
        }
        if (g_67)
        {
            unsigned l_123 = 1UL;
            int l_158 = (-1L);
            if ((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((g_67 > g_67) == (safe_unary_minus_func_int8_t_s(((l_101 | p_92) , l_101)))), ((((safe_mul_func_int8_t_s_s(((*p_91) && (*l_104)), p_92)) >= g_67) & p_92) , 65532UL))), 0xD2L)))
            {
                int **l_125 = (void*)0;
                int *l_157 = &l_101;
                (*l_103) = p_91;
                if ((*p_91))
                {
                    char l_126 = (-1L);
                    int *l_128 = &g_121;
                    if (((safe_add_func_uint8_t_u_u(p_92, l_101)) , 0x1F678D19L))
                    {
                        int *l_124 = &l_101;
                        g_121 = (((*p_90) , p_92) | (g_119 == &p_90));
                        l_123 = (g_67 & l_122);
                        (*l_124) = (*l_104);
                        (*l_124) = (((g_67 , (*g_119)) != (((&p_91 == l_125) , (+(g_2 == l_123))) , (((*p_91) | g_121) , (*g_119)))) , l_126);
                    }
                    else
                    {
                        int *l_127 = &l_101;
                        (*l_127) = (*p_90);
                        (*l_127) = g_2;
                        (*l_103) = p_91;
                    }
                    (*l_128) = 0L;
                    p_91 = p_91;
                }
                else
                {
                    unsigned short l_139 = 0UL;
                    int *l_140 = &l_102;
                    (*l_140) = ((safe_add_func_int8_t_s_s(((!(safe_mod_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((p_92 < ((((*g_119) == ((p_92 , g_2) , (*g_119))) | (0xE1L || 246UL)) > (l_101 , ((safe_mul_func_int8_t_s_s(p_92, g_67)) <= p_92)))), l_123)) , p_92), 0xA9L))) || 1UL), g_67)) , l_139);
                    for (p_92 = 0; (p_92 == 27); p_92 = safe_add_func_uint8_t_u_u(p_92, 3))
                    {
                        int ***l_143 = &l_125;
                        unsigned l_154 = 5UL;
                        (*l_143) = (((void*)0 == l_140) , &p_91);
                        (*l_140) = (((safe_rshift_func_int16_t_s_s((***l_143), (g_121 <= p_92))) & (((((safe_mod_func_uint32_t_u_u(p_92, 0xE2BE68C9L)) , ((*l_104) == (((safe_rshift_func_uint8_t_u_s(((0x4296L ^ (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((**l_125), g_121)), 0xA8B4L))) < 4L), g_2)) < l_154) > g_2))) || l_123) > (***l_143)) && p_92)) , l_123);
                    }
                    for (g_121 = 0; (g_121 == 20); g_121++)
                    {
                        (*g_119) = l_157;
                        (*l_103) = p_91;
                    }
                }
                l_158 = (*p_91);
            }
            else
            {
                int *l_159 = (void*)0;
                unsigned l_175 = 4294967295UL;
                (*l_103) = p_90;
                if ((*p_91))
                {
                    unsigned l_171 = 0x2CE05B3DL;
                    int *l_180 = (void*)0;
                    int *l_181 = &l_102;
                    (*g_119) = l_159;
                    for (g_121 = 0; (g_121 < 27); g_121++)
                    {
                        short l_170 = 6L;
                        int *l_172 = &l_101;
                        (*l_172) = (((safe_mul_func_uint8_t_u_u(p_92, l_122)) || (g_2 , (safe_rshift_func_uint8_t_u_s((g_121 , (safe_rshift_func_int16_t_s_s(((((safe_div_func_uint8_t_u_u((**l_103), l_170)) , &g_120) != &p_90) ^ l_171), g_121))), 1)))) & (*l_104));
                        (*g_119) = &l_101;
                        (*l_172) = ((safe_div_func_int8_t_s_s(((((l_123 < 0UL) != l_175) == ((p_92 ^ (p_92 & (((safe_mod_func_int32_t_s_s((*g_120), l_171)) , (void*)0) == &l_103))) , g_2)) > l_94), l_101)) >= 0x924BL);
                    }
                    for (l_102 = 0; (l_102 == (-23)); l_102 = safe_sub_func_int32_t_s_s(l_102, 6))
                    {
                        (*g_119) = p_91;
                    }
                    (*l_181) = ((void*)0 == &p_90);
                }
                else
                {
                    (*g_119) = (((((safe_mul_func_uint8_t_u_u(((**l_103) || g_67), g_67)) ^ (((p_92 > (safe_unary_minus_func_uint16_t_u(g_121))) == ((&l_104 == (void*)0) != (&g_119 != (void*)0))) < l_187)) & p_92) | p_92) , p_90);
                }
            }
        }
        else
        {
            const unsigned l_188 = 0x24C0330DL;
            const int **l_196 = (void*)0;
            const int ***l_195 = &l_196;
            unsigned l_210 = 0x33C7DD24L;
            int l_211 = (-5L);
            unsigned l_231 = 0x497B899AL;
            if ((l_188 , ((((p_92 , (+(safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(((p_92 , g_67) && 0x343AL), l_94)), 5)))) , (((safe_add_func_int8_t_s_s(0xDFL, (l_195 == ((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(6UL, 0x66ACBFB4L)), p_92)) , l_201)))) & g_121) , g_121)) , (void*)0) == &g_119)))
            {
                short l_205 = 1L;
                if (g_202)
                {
                    int *l_206 = &l_101;
                    for (l_187 = (-8); (l_187 == 14); ++l_187)
                    {
                        return p_92;
                    }
                    (*l_206) = l_205;
                }
                else
                {
                    if ((0x38E196A4L > l_205))
                    {
                        (*l_103) = (*l_103);
                        (*g_119) = (*g_119);
                        if (g_121)
                            goto lbl_207;
                    }
                    else
                    {
lbl_207:
                        (*g_119) = (*g_119);
                        return g_121;
                    }
                }
                g_208 = (p_92 , &p_91);
                (*l_103) = (*g_208);
            }
            else
            {
                int *l_209 = &l_102;
                (*l_209) = ((*p_91) & (*l_104));
                if (((l_210 == p_92) && (p_92 & l_211)))
                {
                    int l_214 = 1L;
                    const int *l_222 = &g_121;
                    const int **l_221 = &l_222;
                    (*l_103) = (*l_103);
                    (*l_209) = ((safe_sub_func_int32_t_s_s(l_214, ((safe_mod_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((((safe_div_func_int32_t_s_s((l_221 == &l_209), g_67)) > (safe_div_func_int32_t_s_s(g_225, l_187))) | g_2) & (&l_221 != (void*)0)), g_121)) || (**l_221)) == (*p_90)), g_2)) , p_92))) | 1L);
                }
                else
                {
                    unsigned l_236 = 0x4EB74D90L;
                    int l_243 = 0x7B750C1DL;
                    for (g_202 = 0; (g_202 <= 16); g_202 = safe_add_func_int8_t_s_s(g_202, 3))
                    {
                        int ***l_228 = &l_103;
                        (*l_209) = (*p_90);
                        (*l_228) = &p_90;
                        (*l_209) = (**l_103);
                    }
                    for (p_92 = 2; (p_92 != (-21)); p_92 = safe_sub_func_int32_t_s_s(p_92, 6))
                    {
                        const int l_242 = 0x36CBBA21L;
                        (*l_209) = l_231;
                        if ((*p_90))
                            break;
                        (*l_209) = (((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_236, (*p_90))), ((g_67 , ((safe_mod_func_uint16_t_u_u(g_2, g_202)) & (safe_div_func_int32_t_s_s((*p_90), l_236)))) > ((((void*)0 == l_241) ^ p_92) >= g_121)))) , l_242) == 0xE511023FL);
                    }
                    l_243 = (*p_91);
                    for (l_236 = (-26); (l_236 <= 18); l_236 = safe_add_func_int16_t_s_s(l_236, 2))
                    {
                        return g_67;
                    }
                }
                (*l_195) = (*l_195);
            }
            return l_246;
        }
        if (((*g_208) == (((g_2 | ((void*)0 != l_201)) ^ (safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(p_92, p_92)), p_92))) , (*g_119))))
        {
            int ***l_251 = &l_103;
            if ((l_251 != (((!((p_91 != (*l_103)) && (!((l_94 || (safe_rshift_func_int8_t_s_u(p_92, 2))) || (((0x718A2399L ^ (safe_rshift_func_int16_t_s_u(((((((((g_2 , (-1L)) || 0x990AEC3AL) , 0UL) | (*p_90)) , 0x2EA9840AL) , 0xB791L) ^ p_92) == p_92), p_92))) , 0x28L) | g_2))))) ^ p_92) , (void*)0)))
            {
                (*g_208) = (*g_208);
            }
            else
            {
                const int *l_256 = &l_101;
                const int **l_257 = &l_256;
                int l_258 = 0x9956A483L;
                (*l_103) = p_91;
                (*l_257) = l_256;
                if ((g_2 , (g_67 <= ((g_67 >= ((*l_104) | ((g_2 , 0x387112B9L) , ((-6L) && (*p_91))))) <= (p_92 < g_121)))))
                {
                    (*l_103) = (p_92 , (*g_119));
                }
                else
                {
                    l_258 = (*p_91);
                }
                l_258 = (*p_91);
            }
            return p_92;
        }
        else
        {
            unsigned l_259 = 4294967286UL;
            int l_300 = 0xE36AF4DDL;
            short l_310 = 0xB509L;
            l_259 = 0x077B5E05L;
            (*l_103) = p_91;
            if (l_259)
            {
                (*l_103) = (void*)0;
            }
            else
            {
                const int l_278 = 0xF97C4F4EL;
                int *l_317 = &l_101;
                if ((*p_90))
                {
                    return p_92;
                }
                else
                {
                    int l_287 = (-10L);
                    l_102 = ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(p_92, ((safe_mod_func_uint16_t_u_u((((p_92 >= (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(l_278, 0xB6989C77L)) | (safe_mod_func_uint8_t_u_u((!(safe_rshift_func_uint16_t_u_u((p_92 <= (g_2 || (safe_rshift_func_int16_t_s_s((l_259 & (!(safe_lshift_func_uint16_t_u_u((l_287 & (safe_mul_func_uint8_t_u_u(l_259, 0x99L))), 12)))), 5)))), 15))), (-7L)))), l_287)) & 2L) | p_92), p_92)), l_290))) > (-1L)) , g_67), 0x6592L)) ^ 0x44L))), p_92)), p_92)) < l_259), p_92)) | 255UL);
                }
                l_300 = (((p_92 != l_291) ^ (safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u(p_92, 5)) ^ p_92) != p_92), ((safe_mul_func_uint8_t_u_u(((*p_91) | ((((safe_add_func_uint8_t_u_u((l_259 ^ 252UL), (!(!0xBBL)))) > g_121) != 2L) , p_92)), g_121)) , l_259)))) , (*p_91));
                l_101 = (safe_mod_func_uint8_t_u_u((p_92 , (safe_sub_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u(l_278, g_67)) || l_307) ^ p_92), ((254UL >= g_202) != (p_92 , (g_67 , l_259)))))), g_2));
                (*l_317) = (safe_mul_func_uint8_t_u_u((l_310 & (g_2 || ((&g_208 == (void*)0) <= (((safe_mul_func_uint8_t_u_u((0xC8L | (((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(p_92, 7)), g_225)) , 255UL) <= (0UL == l_278))), 0xE2L)) == (*p_90)) & p_92)))), p_92));
            }
        }
    }
    else
    {
        int *l_318 = &g_121;
        (*l_318) = (*p_91);
    }
    return g_67;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
