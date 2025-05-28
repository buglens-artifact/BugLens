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



static short g_5 = 0x2A27L;
static unsigned char g_18 = 251UL;
static int g_31 = 0xACE4B0ADL;
static int *g_30 = &g_31;
static int *g_59 = &g_31;
static char g_76 = (-1L);
static char g_82 = 0x97L;
static int **g_83 = &g_59;
static char *g_87 = (void*)0;
static char **g_86 = &g_87;
static int g_104 = (-6L);
static unsigned long long g_117 = 9UL;
static int g_157 = 0x4B618F96L;
static short g_169 = 0x6E0FL;
static unsigned g_172 = 7UL;
static unsigned short g_177 = 0x272CL;
static unsigned g_216 = 0x18FA24BEL;
static unsigned char *g_262 = &g_18;
static unsigned char **g_261 = &g_262;
static unsigned g_317 = 0xD337FFADL;
static unsigned long long *g_332 = (void*)0;
static unsigned long long **g_331 = &g_332;
static unsigned long long ***g_330 = &g_331;
static unsigned *g_347 = &g_216;
static short g_358 = 0xF513L;
static short g_361 = 0x4ADFL;
static short g_434 = 1L;



static unsigned func_1(void);
static int * func_2(short p_3, int * p_4);
static int * func_6(unsigned long long p_7, int * p_8, int * p_9, int * p_10, int * p_11);
static int * func_12(unsigned p_13, char p_14, unsigned char p_15);
static long long func_21(int * p_22, int * p_23);
static int * func_24(int * p_25, unsigned p_26, int * p_27, int p_28, long long p_29);
static long long func_36(unsigned char * p_37, int * p_38, char p_39, int * p_40);
static unsigned char * func_41(unsigned p_42, unsigned char p_43, unsigned char * p_44);
static int * func_47(unsigned char * p_48, long long p_49, int p_50);
static int * func_52(unsigned p_53);
static unsigned func_1(void)
{
    unsigned long long l_16 = 18446744073709551614UL;
    unsigned char *l_17 = &g_18;
    int *l_156 = &g_157;
    int *l_159 = &g_157;
    int **l_158 = &l_159;
    int *l_161 = (void*)0;
    int **l_160 = &l_161;
    (*l_160) = func_2(g_5, func_6(g_5, func_12(g_5, l_16, ((*l_17) = g_5)), l_156, ((*l_160) = ((*l_158) = l_156)), &g_157));



    ;
    ;
    return (*l_159);
}







static int * func_2(short p_3, int * p_4)
{
    unsigned l_437 = 0x35F0EF49L;
    int l_439 = 0x0E3CF96DL;
    char *l_447 = &g_82;
    int *l_450 = &g_157;
    for (g_216 = (-2); (g_216 <= 21); g_216++)
    {
        int *l_430 = &g_104;
        int l_433 = 0x35CD5755L;
        int *l_444 = &g_31;
        (*g_83) = l_430;

        ;
        for (g_18 = 13; (g_18 < 11); --g_18)
        {
            unsigned char l_438 = 0xC5L;
            (*l_430) = l_433;
            (*g_59) = (*g_59);
            if (((l_439 = ((p_3 < ((g_434 ^ p_3) ^ (*l_430))) & ((((safe_add_func_int16_t_s_s(g_169, 1UL)) ^ l_437) >= (*l_430)) ^ l_438))) <= 0x8ECFAE09L))
            {
                (*l_430) = (safe_lshift_func_int8_t_s_u(((void*)0 != &g_86), (*g_262)));
                return p_4;


            }
            else
            {
                for (g_358 = (-3); (g_358 < 19); g_358 = safe_add_func_uint64_t_u_u(g_358, 9))
                {
                    return l_444;


                }
                (*g_59) = ((safe_sub_func_uint16_t_u_u((l_447 == (*g_86)), p_3)) == l_437);
                (**g_83) = (l_437 == ((*g_262) & (safe_rshift_func_int8_t_s_u(l_437, (l_439 = ((void*)0 == (*g_261)))))));
            }
        }
    }
    (*l_450) = l_437;
    return &g_104;


}







static int * func_6(unsigned long long p_7, int * p_8, int * p_9, int * p_10, int * p_11)
{
    unsigned char *l_164 = &g_18;
    int l_165 = (-6L);
    short *l_168 = &g_169;
    int *l_173 = &g_104;
    int l_294 = 0x3FEF99F4L;
    unsigned l_309 = 18446744073709551609UL;
    unsigned long long **l_319 = (void*)0;
    char l_356 = (-1L);
    unsigned l_369 = 6UL;
    int **l_376 = &g_59;
    char ***l_417 = &g_86;
    if (((*p_10) = (safe_sub_func_int64_t_s_s(func_36(l_164, ((*g_83) = (void*)0), l_165, func_52(((p_7 < (+((*l_168) = ((*p_9) < (safe_add_func_int16_t_s_s(p_7, p_7)))))) & (safe_rshift_func_uint16_t_u_s(func_21(&l_165, func_47(&g_18, p_7, l_165)), l_165))))), g_172))))
    {
        unsigned short *l_176 = &g_177;
        int l_178 = (-1L);
        l_165 = l_165;
        (*p_10) = (l_165 && (l_165 || ((((*l_176) = func_36(func_41((~((void*)0 != &g_18)), p_7, &g_18), (l_173 = &l_165), (safe_sub_func_uint8_t_u_u(g_117, l_165)), &g_157)) <= 0x0B79L) | l_178)));

        ;
        (*p_10) = 0x38CAC1D9L;
        (*g_83) = &l_165;

        ;
    }
    else
    {
        int l_196 = (-8L);
        unsigned *l_215 = &g_216;
        unsigned char *l_223 = (void*)0;
        unsigned **l_226 = &l_215;
        short l_251 = (-6L);
        int *l_254 = (void*)0;
        if ((safe_rshift_func_uint16_t_u_s(0x522DL, 1)))
        {
            char *l_184 = &g_76;
            int l_185 = (-2L);
            unsigned long long l_189 = 0x5F0BFBC33642C4C2LL;
            for (g_104 = (-17); (g_104 >= (-22)); g_104 = safe_sub_func_uint32_t_u_u(g_104, 3))
            {
                int l_183 = 0x39B73AA9L;
                unsigned short *l_186 = &g_177;
                (*g_83) = func_52(l_183);

                ;
                (*p_10) = (g_172 < (+(~((void*)0 != l_184))));
                (*g_59) = (*p_9);
                (*g_30) = ((((*l_186) = func_21(func_52(l_185), (*g_83))) == ((safe_lshift_func_uint8_t_u_s(l_189, p_7)) & g_76)) | ((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(0xC477L, (p_7 || 0x50L))), l_196)), 11)) | g_5));
            }
            (*g_83) = func_47(func_41(l_196, p_7, l_164), g_18, (safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(p_7, (safe_mod_func_int8_t_s_s((((*l_168) = (safe_lshift_func_int16_t_s_u(g_18, (l_196 && (-1L))))) > 0L), l_185)))), 2)));

            ;
        }
        else
        {
            (*g_83) = (*g_83);
        }
        (*g_30) = ((*p_11) = (~((safe_rshift_func_int8_t_s_u(p_7, g_31)) == (0xC60DL & ((*l_168) = (safe_add_func_uint16_t_u_u(p_7, (safe_lshift_func_int8_t_s_u((g_172 > (((safe_lshift_func_uint16_t_u_s((p_7 == ((((*l_215) = g_76) && l_196) <= 0x66A8L)), 13)) & 0xFCC9EAD4AB493279LL) >= 0xF9L)), 0)))))))));
        if ((safe_mod_func_uint64_t_u_u(18446744073709551615UL, (safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((*l_173), (((func_36(l_223, p_11, (safe_sub_func_int32_t_s_s(((((*l_226) = p_11) != (void*)0) ^ g_157), 2UL)), ((*g_83) = func_52((*l_173)))) == (-1L)) || 0xB7A5768AL) > (*l_173)))), 3UL)))))
        {
            int *l_230 = (void*)0;
            for (g_31 = 0; (g_31 < 25); g_31 = safe_add_func_int16_t_s_s(g_31, 2))
            {
                unsigned l_229 = 0xAD8C3D5FL;
                (*p_11) = (l_229 < (g_169 >= (0x31L > (l_230 != p_8))));
            }
        }
        else
        {
            unsigned char l_249 = 8UL;
lbl_235:
            (*p_11) = (-1L);
            if ((safe_mod_func_int32_t_s_s((**g_83), (**g_83))))
            {
                for (g_82 = 0; (g_82 <= (-8)); --g_82)
                {
                    if (g_169)
                        goto lbl_235;
                }
                (*g_83) = l_215;

                ;
            }
            else
            {
                unsigned char l_238 = 0x1FL;
                int l_239 = 1L;
                unsigned short *l_250 = &g_177;
                l_165 = ((*p_11) = ((*l_173) = ((*g_30) = (*p_9))));
                for (g_31 = 8; (g_31 == 23); g_31++)
                {
                    (*g_83) = p_8;

                    ;
                    return (*g_83);


                }
                (*p_11) = ((((((((l_239 = (g_82 && (l_238 = (*l_173)))) <= (safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint16_t_u(0x32EBL)), (safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((g_157 && l_249), ((*l_250) = p_7))), (!((*l_173) && p_7)))))), g_117))) && 0x046F23EEL) != 0x53L) <= 0xAEB5L) < l_251) == 0x3546L) || 0L);
            }

            ;
        }

        ;
        ;
        (*g_83) = func_24(((*g_83) = (*g_83)), (safe_mod_func_int8_t_s_s((0x75L | 247UL), p_7)), &g_31, (*p_9), p_7);

        ;
    }

    ;
    ;
    if ((*g_30))
    {
        char l_255 = 1L;
        int l_270 = 0x4F74A46DL;
        unsigned char *l_285 = &g_18;
        int l_322 = 0L;
        unsigned long long ***l_333 = &l_319;
        unsigned long long *l_343 = &g_117;
        unsigned *l_348 = &g_216;
        int *l_414 = &l_165;
        char l_415 = (-3L);
        if ((g_157 & (l_255 | (safe_unary_minus_func_uint32_t_u(l_255)))))
        {
            short *l_257 = &g_169;
            unsigned long long *l_258 = &g_117;
            unsigned char ***l_263 = (void*)0;
            unsigned char **l_265 = (void*)0;
            unsigned char ***l_264 = &l_265;
            int l_275 = (-7L);
            unsigned l_296 = 4294967289UL;
            int l_318 = (-1L);
            if (((((*l_258) = (l_257 != l_168)) | (((safe_add_func_int64_t_s_s((g_261 == ((*l_264) = &g_262)), p_7)) || (l_270 = (((safe_sub_func_uint64_t_u_u(((((*g_30) | ((l_255 || (safe_lshift_func_int16_t_s_s((-8L), (l_255 <= (*p_9))))) & g_104)) || g_172) & (**g_261)), p_7)) | 0x6BB7L) == (**g_261)))) >= l_255)) ^ 65529UL))
            {
                unsigned long long l_277 = 0x386E976ACA0D500FLL;
                int *l_279 = (void*)0;
                unsigned char *l_284 = &g_18;
                for (g_157 = 0; (g_157 == (-25)); g_157 = safe_sub_func_int16_t_s_s(g_157, 2))
                {
                    unsigned char **l_276 = &l_164;
                    int l_278 = 0x9ED101ACL;
                    int l_286 = 0x03599E84L;
                    if ((((safe_lshift_func_uint8_t_u_u((0x8966509481357879LL <= (((-1L) != l_275) ^ 0x5EF8F92758EFBC76LL)), (246UL <= ((((*l_264) = (*l_264)) != (l_276 = &l_164)) > ((void*)0 == &g_59))))) | l_277) < l_278))
                    {
                        (*g_83) = (void*)0;

                        ;
                        return l_279;


                    }
                    else
                    {
                        short l_287 = (-1L);
                        (*g_83) = func_47(func_41(p_7, (p_7 && 0x05L), (*l_276)), g_82, p_7);

                        ;
                        (**g_83) = (~((*l_173) = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((+6L), 12)), (((l_284 != l_284) | (-9L)) ^ ((**l_264) != l_285))))));
                        (*g_83) = p_8;

                        ;
                        l_287 = ((*l_173) > l_286);
                    }

                    ;
                    if ((*p_10))
                    {
                        (*g_83) = p_11;

                        ;
                        return l_279;


                    }
                    else
                    {
                        return (*g_83);


                    }
                }
            }
            else
            {
                int *l_304 = (void*)0;
                int l_310 = 0xE9E399F4L;
                unsigned *l_315 = (void*)0;
                unsigned *l_316 = &g_216;
                if (((0xCF85E0D7L < g_82) != 5UL))
                {
                    return p_8;



                }
                else
                {
                    unsigned *l_295 = &g_216;
                    unsigned short *l_297 = &g_177;
                    (*g_83) = func_47(l_285, (safe_sub_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(g_157, ((safe_mod_func_int16_t_s_s(func_21(&l_270, func_52(((*l_295) = ((l_294 = (p_9 != &g_216)) ^ p_7)))), ((*l_297) = l_296))) <= g_172))) < g_82), p_7)), l_270);

                    ;
                    for (g_177 = 28; (g_177 >= 22); g_177 = safe_sub_func_uint8_t_u_u(g_177, 8))
                    {
                        char l_305 = 9L;
                        char *l_308 = &g_82;
                        (*p_9) = (((*l_257) = (func_36((*g_261), p_8, (((+(~func_21(p_10, ((*g_83) = (*g_83))))) || (p_7 ^ (safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(func_36(l_164, func_52(g_104), l_305, p_10), l_305)), g_169)))) == p_7), p_10) >= 1UL)) || (*l_173));
                        (*g_83) = (*g_83);
                        (*g_30) = (p_7 != (safe_lshift_func_int8_t_s_s(l_305, ((*l_308) = p_7))));
                        (*p_11) = l_309;
                    }
                }

                ;
                (*p_10) = ((*l_173) = (func_21(&l_270, &l_275) <= (p_7 != (*l_173))));
                l_318 = ((**g_83) = (l_310 | ((*g_262) > (((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((p_7 >= (g_317 = ((*l_316) = 1UL))), p_7)) & (0x023F3548L > (p_7 > (l_275 = ((*l_258) = g_5))))), g_18)) | 18446744073709551613UL) < l_255))));
                if (((p_7 & 0x94L) ^ (p_7 ^ g_157)))
                {
                    unsigned long long ***l_320 = &l_319;
                    unsigned char *l_321 = &g_18;
                    int **l_323 = &g_59;
                    int **l_324 = (void*)0;
                    int **l_325 = (void*)0;
                    int **l_326 = &l_304;
                    (*l_326) = ((*l_323) = func_12((&l_258 == ((*l_320) = l_319)), ((func_36(((*g_261) = (*l_265)), func_47(func_41((g_169 >= (func_36(func_41(g_172, p_7, func_41(g_157, p_7, l_321)), &l_294, l_255, &l_165) || g_76)), p_7, l_285), p_7, p_7), l_322, &g_157) | 0xC1EA2AFD7560A1D9LL) != l_270), l_296));

                    ;
                    ;
                }
                else
                {
                    return (*g_83);


                }

                ;
                ;
            }

            ;
            ;
            if (l_270)
            {
                int *l_327 = &g_31;
                return l_327;



            }
            else
            {
                unsigned long long ****l_334 = &l_333;
                char *l_337 = (void*)0;
                char *l_338 = &g_76;
                unsigned l_342 = 0x7F78D238L;
                (*l_173) = (((*l_338) = (p_7 & (p_7 | (safe_rshift_func_int8_t_s_s((g_5 <= (g_330 != ((*l_334) = l_333))), (safe_rshift_func_uint16_t_u_u(0x12A0L, 1))))))) | (((l_318 > ((safe_unary_minus_func_int16_t_s(g_216)) || (safe_lshift_func_uint16_t_u_s(p_7, g_177)))) < (*l_173)) != l_342));
                (*p_11) = (*p_10);
                (*p_11) = (l_343 != &p_7);
            }
        }
        else
        {
            unsigned *l_346 = &g_216;
            int l_351 = (-6L);
            unsigned char *l_371 = &g_18;
            int **l_374 = &l_173;
            int ***l_375 = (void*)0;
            if (((*l_173) = 0L))
            {
                int **l_344 = &g_30;
                int **l_345 = &g_59;
                unsigned char *l_370 = &g_18;
                (*l_345) = ((*l_344) = func_12(l_270, l_322, (*g_262)));

                ;
                ;
                if ((*l_173))
                {
                    unsigned long long **l_354 = (void*)0;
                    unsigned long long **l_355 = &g_332;
                    short *l_357 = &g_358;
                    short *l_359 = (void*)0;
                    short *l_360 = &g_361;
                    char *l_366 = &g_76;
                    char *l_367 = &g_82;
                    char *l_368 = &l_255;
                    (*l_173) = (safe_sub_func_uint16_t_u_u(l_351, (0L && (((*g_261) = l_366) == l_371))));

                    ;
                    return p_11;




                }
                else
                {
                    return p_10;




                }
            }
            else
            {
                (*g_83) = (void*)0;

                ;
            }

            ;
            for (g_361 = 0; (g_361 >= (-15)); --g_361)
            {
                if ((*p_11))
                    break;
            }
            (*g_83) = &l_294;

            ;
            if ((l_322 & ((l_376 = l_374) != &l_173)))
            {
                unsigned **l_381 = &l_348;
                int l_394 = 0L;
                int l_405 = 0L;
                for (l_369 = 16; (l_369 == 39); l_369++)
                {
                    unsigned long long l_388 = 18446744073709551611UL;
                    int *l_393 = &l_165;
                    p_10 = func_52(((p_7 < 0x92L) | (safe_rshift_func_int8_t_s_u(1L, 7))));

                    ;
                }

                ;
                for (l_309 = (-1); (l_309 <= 21); ++l_309)
                {
                    (*l_376) = p_8;

                    ;
                    p_11 = (*l_376);

                    ;
                    for (l_270 = 6; (l_270 < 26); l_270 = safe_add_func_int16_t_s_s(l_270, 2))
                    {
                        if ((*g_59))
                            break;
                        (*p_9) = (((safe_sub_func_uint8_t_u_u((func_21((*g_83), (*g_83)) != 65535UL), (l_394 = 0UL))) >= ((safe_mod_func_int64_t_s_s(g_177, p_7)) ^ (safe_lshift_func_uint8_t_u_u((((253UL ^ 0x24L) > 4UL) ^ l_405), (**g_261))))) != p_7);
                    }
                }

                ;
                ;
            }
            else
            {
                unsigned char *l_412 = &g_18;
                unsigned char l_413 = 1UL;
                int l_416 = 0L;
                if ((*p_9))
                {
                    int *l_420 = &g_157;
                    if ((0L && (((safe_sub_func_int64_t_s_s(0x69470128878A97C9LL, (safe_mod_func_int8_t_s_s(0x3CL, (safe_rshift_func_uint16_t_u_u(p_7, 12)))))) & (&l_319 != &g_331)) != func_36(l_412, (*g_83), ((0x5F4EL > g_82) < l_413), &l_270))))
                    {
                        l_414 = (*g_83);

                        ;
                        (*g_83) = ((*l_374) = func_52((l_416 = (l_415 > p_7))));

                        ;
                        ;
                    }
                    else
                    {
                        (*g_83) = p_8;

                        ;
                        (*p_11) = (((*l_346) = (*g_347)) == (l_417 == (void*)0));
                        return (*g_83);


                    }

                    ;
                    ;
                    ;
                    (*g_59) = func_21(p_11, (*g_83));
                    (*p_9) = ((safe_rshift_func_int8_t_s_s(p_7, 1)) >= g_104);
                    (*g_83) = l_420;

                    ;
                }
                else
                {
                    int *l_425 = &l_270;
                    if (((18446744073709551606UL <= ((*l_343) = (safe_sub_func_int8_t_s_s(l_416, (**g_261))))) && (safe_rshift_func_uint8_t_u_u(func_21(p_10, ((*g_83) = l_425)), 4))))
                    {
                        (*l_376) = (*g_83);

                        ;
                        (*l_376) = p_10;

                        ;
                    }
                    else
                    {
                        int *l_426 = &g_31;
                        (*g_83) = ((*l_374) = l_426);

                        ;
                        ;
                    }

                    ;
                    ;
                    return p_10;



                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        ;
        return p_9;



    }
    else
    {
        int *l_427 = &g_104;
        return l_427;



    }
}







static int * func_12(unsigned p_13, char p_14, unsigned char p_15)
{
    unsigned char *l_32 = &g_18;
    int l_34 = 0x4C266D8FL;
    int *l_35 = &g_31;
    char **l_114 = &g_87;
    int *l_144 = &g_31;
    for (p_13 = 21; (p_13 > 31); p_13 = safe_add_func_uint32_t_u_u(p_13, 1))
    {
        int l_33 = 0L;
        unsigned char *l_51 = &g_18;
        int l_111 = 0xD8C04388L;
        char l_120 = 0x46L;
        int *l_133 = &l_33;
        if (((func_21(func_24(g_30, (l_34 = (((void*)0 != l_32) > (l_33 > 3L))), l_35, p_14, func_36(func_41((safe_lshift_func_int16_t_s_s((l_35 != (g_59 = func_47(l_51, l_33, p_15))), 0)), g_5, &g_18), &l_33, g_5, l_35)), &l_33) > l_111) ^ 0L))
        {
            unsigned char **l_118 = (void*)0;
            unsigned long long *l_119 = &g_117;
            for (l_34 = 27; (l_34 >= 12); l_34 = safe_sub_func_int16_t_s_s(l_34, 8))
            {
                char ***l_115 = &g_86;
                int *l_116 = &g_104;
                (*l_115) = l_114;
                g_117 = ((*l_116) = ((*g_30) = p_14));
            }
            if ((((void*)0 != l_118) & (((*l_119) = g_117) == l_120)))
            {
                l_33 = p_13;
                l_33 = (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0x07L, 3)), g_82));
            }
            else
            {
                unsigned long long **l_128 = &l_119;
                (*g_30) = (safe_add_func_int64_t_s_s(g_76, ((p_13 || (((safe_unary_minus_func_uint32_t_u(p_15)) != (l_111 > (&g_117 != ((*l_128) = l_119)))) != g_117)) == g_117)));
            }
        }
        else
        {
            if ((*l_35))
                break;
        }

        ;
        for (l_120 = 0; (l_120 <= 28); ++l_120)
        {
            int *l_141 = &l_111;
            int *l_143 = &g_104;
            for (g_117 = (-2); (g_117 == 23); ++g_117)
            {
                int l_134 = 0x69C6BC52L;
                char **l_135 = (void*)0;
                l_133 = (void*)0;

                ;
                if ((l_134 = (*l_35)))
                {
                    char ***l_136 = &l_135;
                    int **l_137 = &l_133;
                    int *l_142 = &l_134;
                    (*l_136) = l_135;
                    (*l_137) = ((*g_83) = &l_111);

                    ;
                    ;
                    for (l_34 = 10; (l_34 > (-18)); --l_34)
                    {
                        int *l_140 = &l_33;
                        return l_143;



                    }
                }
                else
                {
                    return (*g_83);


                }

                ;
                ;
                return l_144;



            }
        }
    }
    if ((*g_30))
    {
        (*g_30) = (*g_30);
        (*l_144) = p_14;
    }
    else
    {
        int *l_149 = &g_31;
        int **l_150 = &g_30;
        int *l_153 = &l_34;
        (*g_83) = func_24(((*g_83) = (*g_83)), ((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((0x7A6E09213F04FC86LL & ((l_149 != ((*l_150) = l_149)) || p_14)), 0x54L)), p_13)) && (0x06L == (+p_13))), &l_34, g_76, (*l_149));
        (*l_153) = ((*l_35) = (safe_sub_func_int32_t_s_s((0xE2L ^ (*l_149)), p_14)));
        (*l_35) = (*g_30);
    }
    for (g_76 = 9; (g_76 < (-12)); --g_76)
    {
        (*g_83) = func_52(g_104);

        ;
    }
    return (*g_83);


}







static long long func_21(int * p_22, int * p_23)
{
    long long l_110 = (-6L);
    l_110 = ((*p_23) = (*g_30));
    (*g_30) = (*g_30);
    return g_18;
}







static int * func_24(int * p_25, unsigned p_26, int * p_27, int p_28, long long p_29)
{
lbl_109:
    if (((*g_30) = (*g_30)))
    {
        return (*g_83);


    }
    else
    {
        for (p_28 = 18; (p_28 > (-6)); p_28 = safe_sub_func_uint16_t_u_u(p_28, 8))
        {
            (*g_83) = (void*)0;

            ;
            if (g_31)
                goto lbl_109;
        }
        (*g_30) = (&p_28 != &p_28);
        if (p_28)
            goto lbl_109;
    }
    return (*g_83);


}







static long long func_36(unsigned char * p_37, int * p_38, char p_39, int * p_40)
{
    unsigned char *l_97 = &g_18;
    unsigned char **l_96 = &l_97;
    int l_105 = 0x66AA6F69L;
    for (p_39 = 2; (p_39 == 11); ++p_39)
    {
        long long l_90 = (-5L);
        char l_106 = 0x35L;
        for (g_18 = 21; (g_18 != 6); g_18--)
        {
            int **l_72 = (void*)0;
            char *l_75 = &g_76;
            char *l_81 = &g_82;
            int ***l_84 = (void*)0;
            int ***l_85 = &g_83;
            char ***l_88 = &g_86;
            g_59 = &g_31;

            ;
            (*g_59) = (safe_add_func_int8_t_s_s(((*l_75) = 0x36L), (safe_add_func_uint16_t_u_u(p_39, (safe_rshift_func_int8_t_s_s(((*l_81) = g_31), 0))))));
            (*l_85) = g_83;
            (*l_88) = g_86;
        }
        (*g_83) = (*g_83);
        if ((*p_40))
        {
            unsigned char l_89 = 1UL;
            return l_89;
        }
        else
        {
            int *l_101 = (void*)0;
            int **l_100 = &l_101;
            int *l_103 = &g_104;
            int **l_102 = &l_103;
            l_90 = (*g_30);
            for (g_31 = 2; (g_31 > (-24)); --g_31)
            {
                for (g_18 = (-3); (g_18 > 38); g_18 = safe_add_func_int8_t_s_s(g_18, 1))
                {
                    short l_95 = 7L;
                    unsigned char ***l_98 = (void*)0;
                    unsigned char ***l_99 = &l_96;
                    (*g_83) = (*g_83);
                    if (l_95)
                        continue;
                    (*l_99) = l_96;
                }
            }
            (*p_40) = ((((*l_100) = ((*g_83) = func_52(g_31))) != ((*l_102) = (void*)0)) <= l_105);

            ;
            ;
            ;
            (*l_100) = func_47(p_37, g_5, l_106);
        }

        ;
    }
    return p_39;
}







static unsigned char * func_41(unsigned p_42, unsigned char p_43, unsigned char * p_44)
{
    unsigned l_60 = 0x4524BE18L;
    int *l_66 = &g_31;
    g_59 = func_52(l_60);

    ;
    (*g_30) = (*g_59);
    if (l_60)
    {
        int *l_63 = (void*)0;
        int **l_64 = &g_59;
        (*g_30) = (p_43 == (safe_sub_func_uint8_t_u_u(l_60, ((l_63 == ((*l_64) = l_63)) > p_42))));

        ;
    }
    else
    {
        int **l_65 = &g_59;
        (*g_30) = p_43;
        l_66 = ((*l_65) = (void*)0);

        ;
        ;
    }

    ;
    ;
    (*g_30) = (g_31 ^ (!((safe_unary_minus_func_int64_t_s(9L)) || p_42)));
    return &g_18;


}







static int * func_47(unsigned char * p_48, long long p_49, int p_50)
{
    int *l_57 = &g_31;
    int **l_56 = &l_57;
    int *l_58 = &g_31;
    (*l_56) = func_52(p_49);
    return l_58;


}







static int * func_52(unsigned p_53)
{
    unsigned l_54 = 0xD945AD33L;
    int l_55 = 0xFDEABFD0L;
    (*g_30) = l_54;
    l_55 = p_53;
    (*g_30) = 2L;
    return &g_31;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
