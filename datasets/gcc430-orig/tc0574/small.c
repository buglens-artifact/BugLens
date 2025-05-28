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



static int g_3 = 0x4801897AL;
static short g_9 = 0x9AC1L;
static short g_36 = 7L;
static short *g_35 = &g_36;
static int g_61 = 0x7A0211E9L;
static unsigned g_62 = 0x2D748AEEL;
static char g_65 = 0x8CL;
static char *g_111 = &g_65;
static char **g_110 = &g_111;
static short g_132 = 1L;
static unsigned short g_143 = 65535UL;
static unsigned *g_170 = &g_62;
static unsigned char g_173 = 0xDDL;
static int ***g_174 = (void*)0;
static int *g_196 = &g_61;
static unsigned short g_203 = 0xCBF7L;
static unsigned short g_205 = 65532UL;
static unsigned char g_235 = 0xDFL;
static char g_238 = 0xB3L;
static int g_249 = 0x89675B37L;
static int g_259 = 0xCE884AA9L;
static unsigned short **g_288 = (void*)0;
static unsigned g_313 = 0x6E45068FL;
static unsigned g_316 = 4294967286UL;
static unsigned **g_439 = &g_170;
static unsigned ***g_438 = &g_439;
static short g_444 = (-1L);
static short **g_445 = &g_35;
static unsigned char g_466 = 0x6FL;
static short g_515 = 0xB0A2L;
static unsigned g_516 = 0x527211AEL;



static int func_1(void);
static short func_10(int * p_11, int p_12, unsigned char p_13, unsigned p_14);
static unsigned char func_21(int p_22, unsigned char p_23, int * p_24);
static unsigned char func_25(int p_26, char p_27, int ** p_28);
static int func_29(unsigned char p_30, short p_31);
static short ** func_32(short * p_33, short * p_34);
static short * func_37(short ** p_38, short p_39, unsigned p_40, int p_41, unsigned p_42);
static short ** func_43(unsigned p_44, short ** p_45);
static unsigned func_46(int p_47, unsigned p_48, short ** p_49, int * p_50, short * p_51);
static unsigned func_52(char p_53);
static int func_1(void)
{
    int *l_2 = &g_3;
    int **l_4 = (void*)0;
    int **l_5 = &l_2;
    short *l_8 = &g_9;
    int l_452 = 0x30B14678L;
    char l_468 = 0L;
    unsigned l_469 = 18446744073709551612UL;
    unsigned char *l_470 = &g_173;
    unsigned short l_488 = 0x5329L;
    char *l_509 = &l_468;
    char *l_510 = (void*)0;
    char *l_511 = &g_238;
    int **l_514 = &g_196;
    unsigned short *l_517 = &g_205;
    (*l_5) = l_2;
    if (((safe_mod_func_int16_t_s_s(((*l_8) = g_3), func_10(&g_3, g_3, (safe_lshift_func_uint8_t_u_u(((*l_470) = (safe_mod_func_uint16_t_u_u((g_3 <= (safe_div_func_uint8_t_u_u((g_3 && func_21(g_3, func_25(func_29(g_3, (**l_5)), l_452, &l_2), &l_452)), l_468))), l_469))), 2)), g_3))) != 0xE8L))
    {
        unsigned short ***l_482 = &g_288;
        int *l_483 = &g_3;
        short ***l_489 = &g_445;
        short ****l_490 = &l_489;
        (*l_482) = (void*)0;
        (*l_5) = l_483;

        ;
        (*l_483) = (safe_mod_func_int32_t_s_s((~((safe_sub_func_uint32_t_u_u((((*l_5) = (*l_5)) == (g_196 = l_483)), l_488)) <= (((*l_490) = l_489) != (void*)0))), 4294967288UL));

        ;
    }
    else
    {
        int *l_495 = &g_259;
        (*l_5) = &g_61;

        ;
        (*l_495) = (((**l_5) = (safe_div_func_int8_t_s_s(0x1AL, (*g_111)))) >= (g_313 < (**g_110)));
        return g_62;
    }

    ;
    (**l_5) = (safe_lshift_func_uint8_t_u_u((((*l_517) = (safe_rshift_func_uint16_t_u_u(((**g_110) >= ((safe_rshift_func_uint16_t_u_u(((~(safe_unary_minus_func_uint16_t_u((*l_2)))) | (((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((g_235 = (*l_2)), (**l_5))) <= (**l_5)), (**g_445))), 0UL)) > (((*l_511) = ((*l_509) = (**l_5))) <= (safe_rshift_func_int8_t_s_u((g_516 = (g_515 = (&l_2 != l_514))), 0)))) && (**l_514))), 9)) > 0x4FL)), 5))) <= (**l_5)), 7));
    (**l_5) = (**l_514);
    return (*l_2);
}







static short func_10(int * p_11, int p_12, unsigned char p_13, unsigned p_14)
{
    int *l_473 = (void*)0;
    for (p_14 = (-24); (p_14 > 28); p_14 = safe_add_func_int16_t_s_s(p_14, 5))
    {
        if (func_25(p_13, p_14, &p_11))
        {
            g_196 = l_473;

            ;
            return (*g_35);
        }
        else
        {
            for (g_235 = 0; (g_235 < 43); g_235 = safe_add_func_int8_t_s_s(g_235, 4))
            {
                int *l_481 = (void*)0;
                for (g_466 = 0; (g_466 >= 13); g_466 = safe_add_func_int32_t_s_s(g_466, 5))
                {
                    if ((*p_11))
                        break;
                    for (g_259 = 12; (g_259 != (-17)); g_259--)
                    {
                        int **l_480 = &g_196;
                        (*l_480) = p_11;

                        ;
                        (*l_480) = l_481;

                        ;
                        (*p_11) = (p_12 | p_13);
                    }
                }
            }

            ;
        }

        ;
    }

    ;
    ;
    return p_13;
}







static unsigned char func_21(int p_22, unsigned char p_23, int * p_24)
{
    int **l_454 = &g_196;
    unsigned char ***l_461 = (void*)0;
    unsigned char ****l_462 = &l_461;
    unsigned char *l_465 = &g_466;
    unsigned char **l_464 = &l_465;
    unsigned char ***l_463 = &l_464;
    unsigned short l_467 = 1UL;
    (*l_454) = (void*)0;

    ;
    (*p_24) = (safe_lshift_func_int8_t_s_s(p_22, (safe_sub_func_int16_t_s_s(func_25((safe_lshift_func_uint8_t_u_u(func_29(p_23, (*g_35)), ((*l_465) = (((((*l_462) = l_461) != l_463) == l_467) <= (*p_24))))), p_23, l_454), p_23))));

    ;
    (*g_196) = ((*p_24) = (*p_24));
    return p_23;
}







static unsigned char func_25(int p_26, char p_27, int ** p_28)
{
    int *l_453 = &g_61;
    (*p_28) = l_453;


    (**p_28) = (*l_453);
    g_196 = &g_61;

    ;
    (*g_196) = 4L;
    return g_235;
}







static int func_29(unsigned char p_30, short p_31)
{
    short l_56 = 0x16DEL;
    int l_59 = 1L;
    int *l_60 = &g_61;
    int l_63 = (-3L);
    char *l_64 = &g_65;
    short **l_84 = &g_35;
    int l_284 = (-10L);
    char l_285 = 0x22L;
    short ***l_446 = &l_84;
    int **l_451 = &g_196;
    (*l_446) = func_32(g_35, func_37(func_43(((*g_170) = func_46(g_36, func_52(((*l_64) = (safe_rshift_func_int16_t_s_s((l_56 = p_31), (safe_mod_func_uint16_t_u_u((((*g_35) == l_59) != (~((((*l_60) = 0xB5009892L) >= (l_63 = (p_31 && ((g_3 || (g_62 = ((*g_35) < (*g_35)))) == 3UL)))) && p_30))), p_30)))))), l_84, &l_59, (*l_84))), &g_35), l_284, g_3, l_285, p_31));


    for (g_62 = (-2); (g_62 != 18); ++g_62)
    {
        char **l_449 = &g_111;
        char ***l_450 = &g_110;
        (*l_450) = l_449;
    }
    (*l_451) = &l_284;

    ;
    return g_316;


}







static short ** func_32(short * p_33, short * p_34)
{
    unsigned l_416 = 18446744073709551609UL;
    int *l_417 = (void*)0;
    int l_418 = (-8L);
    short **l_420 = (void*)0;
    short ***l_419 = &l_420;
    unsigned ****l_440 = &g_438;
    unsigned short *l_441 = (void*)0;
    unsigned short *l_442 = &g_143;
    unsigned *l_443 = &g_316;
    l_418 = (safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((l_416 != (((*g_35) ^ l_416) || (*g_35))), l_416)), l_416)) > (func_52(l_416) <= l_416)), l_416));
    (*l_419) = &p_34;

    ;
    for (l_416 = (-19); (l_416 == 36); l_416 = safe_add_func_uint32_t_u_u(l_416, 3))
    {
        int **l_423 = &l_417;
        (*l_423) = &l_418;

        ;
        (*l_423) = &g_259;

        ;
        if ((*l_417))
        {
            int *l_424 = &g_259;
            (*l_423) = l_424;
        }
        else
        {
            int *l_425 = &g_249;
            if ((**l_423))
                break;
            (**l_423) = (l_425 == (void*)0);
            (*l_417) = ((*l_425) != 0L);
        }
        if (g_249)
            continue;
    }

    ;
    g_444 = (safe_add_func_int32_t_s_s((((*l_443) = ((**g_439) = func_52(((*g_111) = (safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(func_46((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((*g_35) = ((*p_33) || func_52((**g_110)))), ((((void*)0 == &l_417) && (((*g_170) = (*g_170)) == ((*l_443) = (((*l_442) = (l_416 || (((*l_440) = g_438) == (void*)0))) > l_416)))) || l_416))), l_418)), l_416, &g_35, &l_418, &g_132), 1L)), l_416)))))) != l_416), 0xB53C0D59L));
    return g_445;


}







static short * func_37(short ** p_38, short p_39, unsigned p_40, int p_41, unsigned p_42)
{
    unsigned char l_293 = 255UL;
    int l_303 = (-8L);
    char **l_318 = &g_111;
    int *l_330 = &g_259;
    int **l_407 = &l_330;
    int *l_408 = &l_303;
    int **l_409 = &l_408;
    for (g_65 = (-13); (g_65 > (-6)); g_65++)
    {
        unsigned short l_300 = 1UL;
        int l_301 = (-8L);
        unsigned short *l_302 = &g_203;
        short l_346 = 0xAFC2L;
        char *l_392 = &g_238;
        l_301 = (~((((void*)0 == g_288) & (*g_35)) == (safe_mod_func_int8_t_s_s(((((*l_302) = ((safe_sub_func_uint32_t_u_u((*g_170), l_293)) <= (safe_div_func_uint32_t_u_u((l_300 = (safe_lshift_func_int16_t_s_s(0xB808L, ((safe_add_func_int32_t_s_s(p_39, (p_41 > 0xEEE47738L))) || (*g_35))))), l_301)))) != g_173) ^ 0x008DDBD3L), l_293))));
        l_303 = l_301;
        for (g_61 = (-22); (g_61 <= 14); g_61 = safe_add_func_int32_t_s_s(g_61, 5))
        {
            int *l_306 = &g_259;
            int *l_307 = &l_303;
            unsigned *l_312 = &g_313;
            unsigned *l_314 = (void*)0;
            unsigned *l_315 = &g_316;
            int l_317 = (-6L);
            unsigned char **l_353 = (void*)0;
            unsigned l_354 = 4294967295UL;
            char l_360 = (-1L);
            int l_373 = 0x6E0F1F1BL;
            char **l_388 = (void*)0;
            char **l_389 = (void*)0;
            char *l_391 = &g_238;
            char **l_390 = &l_391;
            (*l_307) = ((*l_306) = l_303);
            (*l_306) = (!(l_300 <= ((*g_35) = 0x0298L)));
            if ((+((safe_div_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((*g_35), ((((p_42 & (((*l_315) = ((*l_312) = ((*g_170) = (*g_170)))) || (p_40 ^ (*g_170)))) | (l_317 || p_39)) || (l_301 = (((*l_306) = ((l_318 = &g_111) == &g_111)) <= p_41))) && 0x33CFL))) > p_39) ^ l_300), p_41)) && (*g_35))))
            {
                int l_323 = 0x47CCC286L;
                for (l_300 = 0; (l_300 > 20); l_300 = safe_add_func_int16_t_s_s(l_300, 8))
                {
                    unsigned l_329 = 1UL;
                    char **l_332 = (void*)0;
                    char *l_334 = &g_65;
                    char **l_333 = &l_334;
                    int *l_340 = (void*)0;
                }
            }
            else
            {
                char *l_361 = &g_238;
                int l_362 = 9L;
                short *l_376 = &l_346;
                l_362 = (safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(65535UL, l_360)) ^ l_346), ((*l_361) = 3L)));
                if (((((*g_196) && (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((~p_39), (safe_add_func_uint8_t_u_u((((*l_376) = ((**p_38) = ((safe_rshift_func_uint8_t_u_u(l_373, (((*l_361) = (safe_div_func_uint32_t_u_u(p_41, (0L | (*l_330))))) | (((*l_330) <= p_41) <= (~p_39))))) & 0UL))) < l_300), p_41)))), (**g_110))) >= p_40), 4))) || p_39) ^ l_300))
                {
                    l_301 = ((*l_330) = (l_362 || p_40));
                    for (p_42 = 1; (p_42 <= 58); p_42++)
                    {
                        unsigned short l_379 = 1UL;
                        if (l_379)
                            break;
                    }
                }
                else
                {
                    l_301 = ((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u(g_65, (**p_38))), (*g_111))), (safe_mod_func_int16_t_s_s((*g_35), l_362)))) | p_42);
                }
            }
            if ((((*l_390) = ((*g_110) = (*l_318))) != l_392))
            {
                int *l_393 = (void*)0;
                int **l_394 = &g_196;
                (*l_394) = l_393;

                ;
                (*l_394) = &l_303;

                ;
                return (*p_38);



            }
            else
            {
                int **l_395 = (void*)0;
                int **l_396 = &g_196;
                unsigned char *l_403 = (void*)0;
                unsigned char *l_404 = &l_293;
                unsigned char *l_405 = (void*)0;
                unsigned char *l_406 = &g_173;
                (*l_396) = &g_259;

                ;
                (*l_306) = ((safe_rshift_func_int8_t_s_s((*g_111), (((*l_392) = 0x75L) >= (**l_396)))) != (((*l_406) = ((*l_404) = (safe_mod_func_uint16_t_u_u((*l_330), ((**p_38) = (safe_div_func_int8_t_s_s(0xD9L, (*l_306)))))))) < 0x2EL));
            }

            ;
            ;
        }
    }

    ;
    l_408 = ((*l_407) = &l_303);

    ;
    (*l_409) = ((*l_407) = (*l_407));
    (*l_409) = (*l_407);
    return &g_36;


}







static short ** func_43(unsigned p_44, short ** p_45)
{
    int **l_185 = (void*)0;
    int ***l_184 = &l_185;
    unsigned char *l_188 = (void*)0;
    short *l_214 = &g_132;
    int l_232 = 1L;
    int **l_281 = &g_196;
    unsigned short *l_283 = &g_203;
    unsigned short **l_282 = &l_283;
    for (p_44 = 0; (p_44 > 24); p_44 = safe_add_func_int16_t_s_s(p_44, 8))
    {
        int ***l_186 = &l_185;
        unsigned char *l_187 = &g_173;
        unsigned short *l_189 = &g_143;
        int *l_192 = &g_61;
        (*l_192) = (safe_mod_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(((*g_170) = ((((l_184 == l_186) >= g_132) != (l_187 == l_188)) <= ((*l_189) = g_3))), ((safe_div_func_uint8_t_u_u((func_52((**g_110)) | p_44), p_44)) || g_132))) || p_44), (**p_45)));
    }
    for (g_173 = 0; (g_173 > 29); g_173++)
    {
        int *l_195 = &g_3;
        unsigned short *l_199 = &g_143;
        unsigned short *l_200 = (void*)0;
        unsigned short *l_201 = (void*)0;
        unsigned short *l_202 = &g_203;
        unsigned short *l_204 = &g_205;
        short **l_209 = &g_35;
        g_196 = l_195;

        ;
        if ((safe_sub_func_int32_t_s_s(p_44, (((*l_202) = ((*l_199) = g_65)) <= (((*l_204) = g_132) < (safe_lshift_func_int8_t_s_s((*g_111), ((*l_195) >= (*l_195)))))))))
        {
            int **l_208 = &l_195;
            int l_246 = 0x25CBB4F5L;
            (*l_208) = l_195;
            if ((**l_208))
            {
                return l_209;


            }
            else
            {
                int l_223 = 1L;
                unsigned short *l_230 = (void*)0;
                int l_231 = 1L;
                int *l_250 = &g_249;
                if ((0x6CBDL | p_44))
                {
                    for (g_65 = (-7); (g_65 == 8); ++g_65)
                    {
                        g_61 = (safe_lshift_func_uint8_t_u_u((((l_214 = &g_132) == (*p_45)) || g_205), (safe_div_func_uint32_t_u_u(((0L && (!(safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((p_44 >= p_44), l_223)) != ((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_230 != l_230), (-1L))), p_44)), g_143)) & (*l_195))), (**p_45))))) >= 5UL), p_44))));
                        if (l_223)
                            break;
                        (*l_208) = l_195;
                    }
                }
                else
                {
                    int *l_233 = &g_61;
                    unsigned char *l_234 = &g_235;
                    l_231 = (*g_196);
                    if (l_232)
                        break;
                    (*l_208) = l_233;

                    ;
                    (*l_195) = ((*g_196) ^ (((*g_111) || ((*l_234) = (**l_208))) < 0x98L));
                }

                ;
                if ((((safe_unary_minus_func_uint16_t_u(((*g_170) || p_44))) & 0x6A68L) & (*l_195)))
                {
                    char *l_237 = &g_238;
                    int *l_239 = &g_61;
                    (*l_239) = ((+(func_52(p_44) > (+((*l_237) = (0x108DL >= (l_223 >= (0xDDBCL && 1L))))))) != 2UL);
                    for (l_223 = (-2); (l_223 > (-1)); l_223 = safe_add_func_int32_t_s_s(l_223, 5))
                    {
                        (*l_239) = (safe_div_func_uint32_t_u_u(p_44, (**l_208)));
                    }
                }
                else
                {
                    l_246 = ((g_235 = (safe_lshift_func_uint16_t_u_u(7UL, 2))) & 255UL);
                    for (g_61 = 24; (g_61 > (-24)); g_61 = safe_sub_func_uint8_t_u_u(g_61, 1))
                    {
                        (*l_208) = (*l_208);
                        g_249 = p_44;
                    }
                }
                (*l_208) = l_250;

                ;
            }

            ;
            for (g_205 = (-1); (g_205 >= 18); ++g_205)
            {
                int l_255 = 1L;
                l_255 = ((safe_lshift_func_int8_t_s_s((0x0754L || (*l_195)), 2)) && p_44);
            }
            (*l_208) = l_195;
        }
        else
        {
            int *l_256 = &g_249;
            int *l_257 = &g_61;
            int *l_258 = &g_259;
            (*l_258) = ((*l_257) = ((*l_256) = (*g_196)));
            for (g_65 = (-8); (g_65 >= (-20)); g_65--)
            {
                return &g_35;


            }
            (*l_256) = p_44;
            for (p_44 = 23; (p_44 > 43); p_44 = safe_add_func_int32_t_s_s(p_44, 8))
            {
                char l_275 = 0L;
                (*l_257) = 0x7CF41E0EL;
                for (g_132 = (-8); (g_132 == 18); g_132++)
                {
                    int l_276 = 0xDB1E1FFCL;
                    int **l_280 = &l_256;
                    if (p_44)
                    {
                        unsigned char l_274 = 248UL;
                        (*l_257) = (safe_add_func_uint32_t_u_u((((((*l_204) = (safe_div_func_int16_t_s_s(((*g_170) == func_52((**g_110))), g_238))) <= (p_44 <= (safe_add_func_int8_t_s_s((((-2L) && ((void*)0 == &g_259)) == (safe_mod_func_uint32_t_u_u(l_274, p_44))), (-2L))))) && g_143) < 0xD318L), (*g_170)));
                        (*l_257) = (*l_257);
                        l_276 = (l_275 = l_274);
                    }
                    else
                    {
                        unsigned char **l_277 = &l_188;
                        unsigned char ***l_278 = (void*)0;
                        unsigned char ***l_279 = &l_277;
                        (*l_279) = l_277;
                    }
                    l_195 = ((*l_280) = &l_276);

                    ;
                    ;
                }



                return &g_35;


            }
        }

        ;
    }

    ;
    (*l_281) = &g_61;

    ;
    l_282 = l_282;
    return p_45;


}







static unsigned func_46(int p_47, unsigned p_48, short ** p_49, int * p_50, short * p_51)
{
    unsigned l_85 = 0x61DFA239L;
    int l_91 = (-3L);
    int l_103 = 0x61030FACL;
    int *l_123 = &l_91;
    int **l_122 = &l_123;
    unsigned short *l_160 = &g_143;
    char ***l_165 = (void*)0;
    unsigned char *l_171 = (void*)0;
    unsigned char *l_172 = &g_173;
    char l_175 = (-1L);
    (*p_50) = l_85;
    if (func_52(l_85))
    {
        int **l_86 = (void*)0;
        int *l_88 = &g_3;
        int **l_87 = &l_88;
        (*l_87) = &p_47;

        ;
        for (p_48 = 2; (p_48 < 19); p_48 = safe_add_func_int16_t_s_s(p_48, 2))
        {
            (*p_50) = (l_91 = l_85);
        }
        if (g_61)
        {
            (*l_87) = (void*)0;

            ;
            (*p_50) = (!(safe_add_func_uint8_t_u_u(func_52((g_65 == ((*p_50) = ((*p_51) > (&g_35 != (void*)0))))), 0xF3L)));
        }
        else
        {
            unsigned l_102 = 1UL;
            int ***l_124 = &l_122;
            if ((safe_mod_func_uint32_t_u_u((((**l_87) >= ((safe_div_func_int16_t_s_s((((safe_div_func_int32_t_s_s(((l_102 == (l_103 != (safe_lshift_func_int16_t_s_u(((void*)0 != &g_36), ((&g_3 != &l_103) & (safe_add_func_uint8_t_u_u((g_62 != p_48), 0x81L))))))) && g_3), (-1L))) & (**l_87)) | g_61), 0xBB92L)) & p_47)) & g_3), (*p_50))))
            {
                char **l_113 = (void*)0;
                char ***l_112 = &l_113;
                (*p_50) = (-7L);
                (*p_50) = ((safe_div_func_int8_t_s_s(((g_110 != ((*l_112) = (void*)0)) < ((0x12L == (((*g_35) = (0x8938C4ECL > (safe_add_func_uint32_t_u_u(l_103, g_62)))) & ((safe_mod_func_uint16_t_u_u(p_47, (safe_lshift_func_int8_t_s_s(p_48, (((!0xEFL) || (*l_88)) | (*p_50)))))) & 0L))) == (-7L))), p_48)) <= 0x6C26L);
            }
            else
            {
                (*l_87) = (*l_87);
                (*l_87) = (void*)0;

                ;
            }

            ;
            (*l_123) = (((*l_124) = l_122) == &l_88);
        }

        ;
        (*l_122) = (*l_122);
    }
    else
    {
        unsigned l_139 = 0UL;
        int *l_140 = &g_3;
        int **l_141 = &l_140;
        unsigned *l_142 = &g_62;
        (*p_50) = ((safe_add_func_uint8_t_u_u(((safe_unary_minus_func_uint16_t_u(((safe_add_func_uint32_t_u_u((!((safe_sub_func_int16_t_s_s(((~((*l_123) = (0x6123697EL < ((*g_111) <= g_132)))) <= ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((((safe_add_func_int32_t_s_s(l_139, ((l_139 || ((*l_142) = (((*l_141) = l_140) == (*l_122)))) > (2UL && ((*g_35) && 6UL))))) >= (*g_111)) >= 0xECL), g_132)), 4)) != 0x7DL)), (*g_35))) < 0x7100029DL)), g_61)) == g_143))) || (*p_50)), p_47)) >= 1L);
        g_61 = (safe_sub_func_uint32_t_u_u((p_48 != ((((**g_110) = (safe_div_func_int16_t_s_s(((void*)0 != (*g_110)), g_132))) >= ((+(p_48 < ((**p_49) = (**p_49)))) != 0xC64D162AL)) == (**l_122))), ((*l_142) = p_48)));
    }
    (*l_123) = func_52((safe_rshift_func_int16_t_s_s(((*l_123) >= (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(5UL, 2)), (0xDFL && (safe_sub_func_uint16_t_u_u((func_52(((safe_sub_func_uint16_t_u_u(((*l_160) = g_143), p_47)) >= (**g_110))) < 0UL), g_62)))))), (*l_123))));
    (*p_50) = (safe_add_func_int32_t_s_s(((**l_122) = (safe_mod_func_int8_t_s_s((l_165 != l_165), (+0x25L)))), (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((*p_50) >= (((*l_172) = ((+p_48) && (1L <= (g_170 == (void*)0)))) | ((g_174 != (void*)0) == l_175))) | p_47), p_47)), (*p_50)))));
    return p_48;
}







static unsigned func_52(char p_53)
{
    char *l_67 = &g_65;
    char **l_66 = &l_67;
    int *l_68 = &g_61;
    (*l_68) = (&g_65 != ((*l_66) = &g_65));
    for (g_65 = (-6); (g_65 <= (-14)); g_65 = safe_sub_func_int8_t_s_s(g_65, 1))
    {
        int *l_71 = &g_61;
        int **l_72 = &l_71;
        l_68 = ((*l_72) = l_71);
    }
    if ((safe_sub_func_int16_t_s_s(4L, ((p_53 | g_36) & 0xD0L))))
    {
        int **l_75 = &l_68;
        (*l_75) = &g_61;
    }
    else
    {
        char l_80 = (-8L);
        int **l_82 = (void*)0;
        int **l_83 = &l_68;
        (*l_68) = (safe_sub_func_int16_t_s_s((-9L), ((safe_sub_func_int16_t_s_s((l_80 = (*g_35)), ((safe_unary_minus_func_uint8_t_u(7UL)) != g_65))) == p_53)));
        (*l_83) = l_68;
    }
    return p_53;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
