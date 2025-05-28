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


union U0 {
   unsigned f0;
   short f1;
};


static int g_16 = 0xC4F3F7E8L;
static int **g_52 = (void*)0;
static int g_75 = (-1L);
static int *g_76 = (void*)0;
static union U0 g_92 = {7UL};
static char g_98 = 0xA7L;
static unsigned short g_123 = 1UL;
static unsigned char g_142 = 250UL;
static int **g_151 = &g_76;
static unsigned char g_163 = 1UL;
static unsigned g_186 = 0xF1C6A60FL;
static int g_194 = 0xAC5461FDL;
static unsigned char *g_278 = &g_163;
static unsigned char **g_277 = &g_278;
static unsigned *g_306 = &g_186;
static unsigned **g_305 = &g_306;
static short *g_316 = &g_92.f1;
static int g_318 = 0xCD3F1DC3L;
static unsigned g_334 = 0x1A6D3BB0L;
static char g_369 = 0x6BL;
static union U0 *g_376 = &g_92;
static union U0 **g_375 = &g_376;
static unsigned short g_464 = 0x3F58L;
static unsigned short g_466 = 0x0874L;
static int g_496 = 0xD9AC0C52L;
static char g_586 = 1L;
static int g_613 = 0x24812E44L;
static unsigned short ***g_725 = (void*)0;
static unsigned short *g_769 = (void*)0;
static unsigned short **g_768 = &g_769;
static int *g_879 = &g_75;
static unsigned short g_895 = 1UL;



static union U0 func_1(void);
static int * func_2(int * p_3);
static int * func_4(int * p_5, int * p_6, int * p_7, int * p_8);
static int * func_9(unsigned char p_10, int * p_11);
static int func_17(unsigned p_18, int * p_19, int * p_20, char p_21, short p_22);
static unsigned short func_25(int p_26);
static int * func_29(int * p_30, int * p_31, unsigned p_32);
static int * func_33(int * p_34, int * p_35, int p_36, union U0 p_37, int p_38);
static int * func_39(short p_40, int * p_41);
static int func_49(int ** p_50, int p_51);
static union U0 func_1(void)
{
    unsigned char l_14 = 247UL;
    int *l_15 = &g_16;
    short **l_444 = (void*)0;
    short ***l_443 = &l_444;
    unsigned *l_445 = (void*)0;
    unsigned *l_451 = (void*)0;
    int l_452 = (-10L);
    int **l_687 = &l_15;
    int l_713 = 0L;
    int l_717 = 0L;
    unsigned short *l_724 = (void*)0;
    unsigned short **l_723 = &l_724;
    unsigned short ***l_722 = &l_723;
    short *l_731 = &g_92.f1;
    short *l_732 = (void*)0;
    short *l_733 = &g_92.f1;
    short *l_734 = &g_92.f1;
    short *l_735 = &g_92.f1;
    short *l_736 = &g_92.f1;
    short *l_737 = (void*)0;
    short *l_738 = &g_92.f1;
    short *l_739 = &g_92.f1;
    short *l_740 = &g_92.f1;
    short *l_741 = &g_92.f1;
    short *l_742 = &g_92.f1;
    short *l_743 = &g_92.f1;
    short *l_744 = &g_92.f1;
    short *l_745 = &g_92.f1;
    short *l_746 = &g_92.f1;
    short *l_747 = (void*)0;
    short *l_748 = &g_92.f1;
    short *l_749 = (void*)0;
    short *l_750 = &g_92.f1;
    short *l_751 = &g_92.f1;
    short *l_752 = &g_92.f1;
    short *l_753 = (void*)0;
    short *l_754 = &g_92.f1;
    short *l_755 = &g_92.f1;
    short *l_756 = &g_92.f1;
    short *l_757 = (void*)0;
    short *l_758 = &g_92.f1;
    short *l_759 = &g_92.f1;
    short *l_760 = &g_92.f1;
    short *l_761 = &g_92.f1;
    short *l_762 = &g_92.f1;
    short *l_763 = (void*)0;
    short *l_764 = &g_92.f1;
    short *l_765 = &g_92.f1;
    int *l_774 = (void*)0;
    union U0 l_782 = {18446744073709551612UL};
    short l_821 = 2L;
    unsigned l_848 = 0UL;
    unsigned char l_850 = 0xB8L;
    (*l_687) = func_2(func_4(func_9((safe_mul_func_uint8_t_u_u(((((l_14 < 0xDAL) == ((l_15 == (void*)0) , ((+((*l_15) = (l_452 = ((**g_305) = (((func_17(((*l_15) = ((safe_rshift_func_uint8_t_u_u((func_25((*l_15)) || (safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(0xF4L, ((safe_add_func_uint8_t_u_u((((*l_15) , l_443) != (void*)0), (*l_15))) & g_16))) >= (*l_15)), 6)) ^ (**g_305)), 0x34E3L))), 3)) && 65535UL)), &g_318, l_445, g_186, l_14) , (*g_278)) || (**g_277)) && 0x8FL))))) >= g_334))) & 9L) < l_14), 0x22L)), &g_318), l_15, &g_318, l_451));
lbl_874:
    for (g_123 = 0; (g_123 != 50); ++g_123)
    {
        union U0 l_692 = {0xF8A610BEL};
        int *l_693 = (void*)0;
        for (g_163 = 0; (g_163 == 50); ++g_163)
        {
            return l_692;
        }
        (*l_687) = func_39(((*g_316) = l_692.f1), l_693);
        if (l_692.f0)
            continue;
        for (g_92.f1 = 0; (g_92.f1 != (-15)); --g_92.f1)
        {
            unsigned short *l_712 = &g_123;
            unsigned short **l_711 = &l_712;
            int *l_714 = &g_318;
            for (g_194 = 0; (g_194 != 2); g_194++)
            {
                unsigned l_698 = 0x8A7ED5B3L;
                unsigned char l_699 = 0x0EL;
                short *l_706 = &l_692.f1;
                l_699 = l_698;
                (*l_687) = func_9((safe_div_func_int8_t_s_s(((*g_278) | ((safe_sub_func_uint16_t_u_u((((((safe_add_func_int16_t_s_s(((**g_277) , 0x36E6L), (l_699 & (*g_306)))) != (g_466 != (l_713 = ((((((*l_706) = 1L) != (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(((void*)0 == l_711), 7)), 7))) || l_699) ^ (*g_316)) | l_698)))) != (-5L)) < (-1L)) == 0x83L), (*g_316))) <= l_698)), (-1L))), l_714);
            }
        }
    }
    if ((g_194 <= ((safe_add_func_uint8_t_u_u((*g_278), ((**g_305) & l_717))) != ((*g_278) != (safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((g_163 | (**g_277)) && 6UL), (((l_722 = l_722) == g_725) <= 0L))), g_92.f1))))))
    {
        unsigned l_726 = 0xB159F047L;
        int *l_727 = &g_318;
        (*l_727) = (l_726 = g_586);
    }
    else
    {
        int *l_728 = &g_75;
        (*l_687) = (*l_687);
        (*l_687) = l_728;
    }
    if ((safe_add_func_int16_t_s_s((*g_316), (safe_sub_func_uint8_t_u_u((*g_278), ((((((*l_722) = g_768) != &g_769) < (*g_316)) > (*g_316)) >= 0x93CDL))))))
    {
        union U0 **l_770 = &g_376;
        union U0 *l_772 = &g_92;
        union U0 **l_771 = &l_772;
        int *l_773 = &g_75;
        int *l_775 = &g_16;
        (*l_771) = ((*l_770) = &g_92);
        (*l_687) = l_773;
        l_775 = ((*l_687) = (l_773 = l_774));
    }
    else
    {
        short l_776 = 0xEBA3L;
        int *l_793 = &l_713;
        unsigned char ***l_803 = &g_277;
        union U0 **l_804 = (void*)0;
        unsigned char l_810 = 0xCBL;
        int *l_833 = &g_318;
        unsigned l_839 = 0x4710D315L;
        int *l_871 = &g_75;
        int ***l_897 = &g_52;
        if (l_776)
        {
            unsigned l_787 = 0xA7F2D931L;
            int l_788 = (-2L);
            unsigned l_809 = 0UL;
            for (l_452 = 0; (l_452 < 20); l_452 = safe_add_func_int16_t_s_s(l_452, 1))
            {
                unsigned l_781 = 0x72F8155AL;
                int l_789 = 1L;
                union U0 *l_797 = &l_782;
                unsigned char ***l_802 = &g_277;
                if ((safe_div_func_uint16_t_u_u(((l_781 = l_776) <= (l_782 , (((((safe_mod_func_int16_t_s_s((0xD092L > (-3L)), (safe_add_func_uint16_t_u_u(l_776, (l_788 = func_49(&g_76, (0x8C62L && l_787))))))) <= 0xA55F0822L) , g_98) , l_789) < (-10L)))), l_789)))
                {
                    int *l_790 = &l_789;
                    (*l_790) = (l_788 = (l_788 > 1UL));
                    (*l_687) = func_9((l_788 & (safe_div_func_uint8_t_u_u((((**g_277) = (0xF0F3L >= (*l_790))) >= (&g_76 != (void*)0)), (((*g_316) ^ 8L) , l_776)))), l_793);
                }
                else
                {
                    int **l_794 = &g_76;
                    int *l_799 = &g_496;
                    (*l_794) = ((*l_687) = &g_194);
                    for (g_163 = 14; (g_163 != 17); g_163++)
                    {
                        union U0 **l_798 = &g_376;
                        (*l_798) = l_797;
                        (*l_687) = func_39(((*l_15) != (**l_687)), l_799);
                        (**l_687) = 0xD792F015L;
                    }
                    (*l_794) = ((*l_687) = (void*)0);
                }
                if (((((void*)0 == g_316) <= (((l_789 || ((((*l_797) , 1UL) , (((safe_sub_func_int8_t_s_s(((l_802 != l_803) , l_789), (*l_793))) ^ l_789) , &g_376)) != l_804)) > (*g_306)) , (*l_793))) || (*l_793)))
                {
                    (*l_793) = l_788;
                }
                else
                {
                    int l_805 = 0x72970E90L;
                    int *l_808 = (void*)0;
                    (*l_793) = l_805;
                    for (g_92.f1 = 5; (g_92.f1 == (-25)); --g_92.f1)
                    {
                        if (l_788)
                            break;
                        (*l_793) = ((l_805 == l_805) < (*g_306));
                        (*l_687) = func_39((*g_316), l_808);
                        (**l_687) = 0x43D9E500L;
                    }
                    if (l_809)
                        continue;
                }
            }
            l_793 = (*l_687);
            l_713 = ((l_810 , func_39(((!l_788) == (*g_316)), func_33((((*l_803) != (void*)0) , (*l_687)), &g_75, (safe_mod_func_uint8_t_u_u((*g_278), 0x44L)), g_92, l_810))) == &l_788);
        }
        else
        {
            unsigned short l_826 = 0x5F18L;
            char *l_834 = &g_586;
            int *l_840 = &l_713;
            unsigned short l_849 = 0x3EF6L;
            (*l_793) = (safe_mul_func_int8_t_s_s(g_496, (-6L)));
lbl_870:
            if (((safe_add_func_uint8_t_u_u((*g_278), (0x4B0E1A48L || (func_17((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((*l_793), ((*l_834) = (((**g_277) > ((l_821 | (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(l_826, (*l_793))) >= (safe_sub_func_int16_t_s_s((*g_316), (safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(func_17(l_826, (*l_687), l_833, g_613, (*g_316)), 0)), 0x3DL))))), 6))) , g_369)) <= g_464)))), 0x4128L)), (*l_687), l_793, l_826, (*g_316)) , 4294967291UL)))) & l_713))
            {
                union U0 *l_843 = (void*)0;
                int *l_846 = &l_452;
                int *l_847 = &g_613;
                int l_853 = 0L;
                int **l_862 = &l_833;
                int l_863 = 0xC38BE8CDL;
                (*l_840) = ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((((*l_833) || ((((func_17((g_334 = ((((((l_839 | (func_17(g_123, l_833, l_840, (*l_793), (safe_div_func_uint32_t_u_u((l_843 != &g_92), (safe_mod_func_uint8_t_u_u((((*l_847) = ((*l_846) = 0x74E1EFDBL)) , (*l_840)), 0x5FL))))) & (*l_840))) , l_840) == (void*)0) == 0x578619DBL) & 0x64BC4B15L) > 0x8522L)), l_846, (*l_687), (*l_840), (*l_840)) || l_848) ^ l_849) & (*l_793)) || (**g_305))) | (-1L)), 2)), 15)) == l_850);
                (*l_833) = (((&g_316 != (*l_443)) & (0xA216L ^ 0xC9DDL)) , ((((((*l_833) | (*l_840)) >= (*l_840)) , (g_369 == (*l_840))) , (**g_305)) && 4294967295UL));
                if (g_92.f1)
                    goto lbl_870;
                (*l_840) = ((safe_lshift_func_uint16_t_u_s(l_853, (+((*l_744) = (safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((0x5530D01BL && ((safe_mod_func_uint16_t_u_u((((*g_305) = func_33(((*l_687) = (*l_687)), ((*l_862) = &g_496), g_586, l_782, (*l_840))) == (void*)0), l_863)) , 0x08DC2A6BL)) <= (*g_278)), (**g_277))), (*g_278))), (*l_793))))))) , (*l_840));
            }
            else
            {
                unsigned l_864 = 18446744073709551611UL;
                short *l_865 = &l_776;
                int *l_866 = &l_713;
                union U0 **l_867 = &g_376;
                int *l_868 = (void*)0;
                int *l_869 = &g_75;
                (*l_833) = ((l_864 , g_769) != l_865);
                l_866 = (void*)0;
                (*l_867) = &g_92;
                (*l_869) = ((*l_833) = ((*l_840) = g_613));
            }
            (*l_687) = ((*l_833) , l_793);
        }
        (*l_871) = (((*l_833) = (*g_316)) & g_613);
        for (l_452 = (-19); (l_452 < 20); l_452 = safe_add_func_int16_t_s_s(l_452, 6))
        {
            union U0 *l_891 = &l_782;
            int *l_896 = &g_194;
            if (l_810)
                goto lbl_874;
            for (g_92.f0 = 0; (g_92.f0 <= 30); g_92.f0 = safe_add_func_uint32_t_u_u(g_92.f0, 7))
            {
                int l_888 = (-1L);
                union U0 l_894 = {0x7E240843L};
                unsigned char *l_898 = (void*)0;
                unsigned char *l_899 = &l_810;
                unsigned short l_900 = 0x9958L;
                unsigned l_901 = 0x2D2F8FCFL;
                (*l_687) = func_39((safe_rshift_func_uint8_t_u_s(255UL, g_123)), g_879);
                l_896 = ((*l_687) = func_9(((~(**g_277)) && (safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((((**l_687) = ((*l_899) = ((**g_277) = (safe_rshift_func_int8_t_s_s(((((((safe_sub_func_int8_t_s_s(l_888, ((g_613 = (&l_687 == ((safe_sub_func_uint8_t_u_u((&g_92 == l_891), (func_49(&g_879, (safe_mul_func_int16_t_s_s((*g_316), (((*g_305) = func_4(func_33(l_871, (*l_687), (**l_687), l_894, g_895), l_896, l_896, l_833)) != (void*)0)))) < 0UL))) , l_897))) , g_613))) >= (*g_278)) && 7L) < 6UL) ^ 0x9FA28994L) == 0x00L), g_334))))) != g_466) , 0x66L) != l_900), l_894.f1)), l_901))), &g_496));
                (**l_687) = 0xA458B598L;
            }
        }
    }
    return l_782;
}







static int * func_2(int * p_3)
{
    unsigned short l_462 = 1UL;
    unsigned short *l_463 = &g_464;
    unsigned short *l_465 = &g_466;
    unsigned short l_478 = 0xC14FL;
    short l_501 = 8L;
    union U0 l_537 = {0x7EDE4C4FL};
    union U0 **l_577 = &g_376;
    int ***l_615 = &g_151;
    int *l_683 = (void*)0;
    short l_686 = 0x30B1L;
    if ((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(func_25(l_462), l_462)), 0x36693AA2L)), func_17(l_462, (((*l_465) = ((*l_463) = g_369)) , (void*)0), p_3, (safe_sub_func_uint16_t_u_u(((**g_305) != g_186), l_462)), l_462))))
    {
        int l_471 = 2L;
        int *l_481 = &g_75;
        int l_482 = (-1L);
        int l_502 = 0x9AEAA6B0L;
        if (((l_471 , (*g_306)) > (((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(((*g_278) = ((((**g_277) & (safe_lshift_func_uint16_t_u_s(l_478, ((*p_3) == (func_17((safe_rshift_func_uint8_t_u_u(((&g_305 != (void*)0) == ((*l_481) = (*p_3))), ((*g_306) < 0x7DBD5660L))), p_3, &l_471, l_478, l_478) , (*p_3)))))) > 0xCDFCL) == g_466)), l_478)) , 0x39L), l_462)) < l_482) != l_462)))
        {
            int **l_483 = &l_481;
            (*l_483) = p_3;
        }
        else
        {
            unsigned short l_493 = 0x925EL;
            int l_511 = 1L;
lbl_506:
            l_502 = (safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((*p_3) > l_462), (*p_3))), (((safe_unary_minus_func_uint8_t_u(((safe_lshift_func_int8_t_s_s((g_98 = (safe_lshift_func_uint8_t_u_s(l_493, 2))), ((safe_sub_func_uint32_t_u_u((g_123 <= (**g_277)), g_496)) < (((*l_481) = (*p_3)) ^ ((safe_mod_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(l_462, 9UL)) & l_493), 0xA9L)) & l_493))))) , l_501))) >= l_493) && l_493)));
            for (g_369 = 3; (g_369 <= 20); g_369++)
            {
                int *l_505 = &g_194;
                l_505 = &l_471;
                if (l_501)
                    continue;
                if (g_92.f0)
                    goto lbl_506;
                (*g_375) = (*g_375);
            }
            for (g_496 = 0; (g_496 > (-24)); g_496--)
            {
                short l_512 = (-4L);
                int *l_515 = (void*)0;
                l_511 = (((**g_305) = (safe_div_func_uint16_t_u_u(((l_511 < (l_512 || l_511)) >= ((l_493 & (safe_add_func_int16_t_s_s((*g_316), ((*l_463) = (l_512 , ((!(((**g_277) = 3UL) == (1L >= ((*l_481) || 0xDCL)))) <= (*l_481))))))) == l_493)), l_512))) < (*l_481));
                p_3 = l_515;
            }
        }
    }
    else
    {
        int **l_516 = &g_76;
        g_496 = ((void*)0 == l_516);
    }
    if (l_478)
    {
        unsigned l_517 = 4294967295UL;
        union U0 l_526 = {0xCA8AF3DEL};
        unsigned char l_576 = 249UL;
        int l_578 = 0L;
        int *l_583 = (void*)0;
        int l_610 = 0x07A3EC4BL;
        int l_634 = 0x60183942L;
        int **l_682 = &g_76;
        if (l_517)
        {
            int *l_536 = &g_318;
            union U0 **l_546 = &g_376;
            int l_658 = 0xBD2A8D6FL;
            if ((((g_496 >= ((safe_mod_func_int32_t_s_s(4L, ((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(0x42L, l_517)), (safe_mod_func_uint16_t_u_u(l_517, (l_526 , ((safe_mul_func_int8_t_s_s(g_92.f1, 0x51L)) || (&g_305 == (void*)0))))))) , 0x2373D3B3L))) == l_478)) || l_526.f1) > l_526.f0))
            {
                short l_567 = 0xBF90L;
                int *l_568 = &g_194;
                int *l_614 = &l_578;
                unsigned l_616 = 0x14CBF6F5L;
                union U0 *l_621 = &l_526;
                for (g_123 = 0; (g_123 <= 17); ++g_123)
                {
                    unsigned short **l_531 = &l_465;
                    unsigned short **l_532 = &l_463;
                    int **l_533 = (void*)0;
                    int l_551 = 1L;
                    unsigned char l_558 = 0xD1L;
                    union U0 *l_565 = &l_526;
                    unsigned ***l_566 = &g_305;
                    int **l_569 = (void*)0;
                    int **l_570 = &l_536;
                    g_76 = func_9((((*l_531) = &g_466) != ((*l_532) = &g_123)), p_3);
                    for (g_464 = 0; (g_464 < 30); g_464++)
                    {
                        union U0 ***l_547 = &l_546;
                        union U0 ***l_548 = &g_375;
                        union U0 *l_554 = &l_526;
                        int l_557 = 2L;
                        p_3 = func_33(l_536, p_3, g_466, l_537, (*l_536));
                        l_558 = (safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((((6L != ((safe_rshift_func_int16_t_s_s(l_478, (((*l_547) = l_546) == ((*l_548) = (void*)0)))) > (safe_rshift_func_int16_t_s_s(l_551, 15)))) && (safe_add_func_uint8_t_u_u(((**g_277) = (**g_277)), (!(((*l_554) = g_92) , (((safe_lshift_func_int8_t_s_s((((*g_316) && (*g_316)) | (*l_536)), 5)) || (-2L)) >= (*g_316))))))) && l_517), l_462)), l_557));
                    }
                    l_567 = ((*l_536) < (((safe_div_func_int8_t_s_s(((~(&g_376 == (void*)0)) > (safe_mul_func_int8_t_s_s((l_565 != (*l_546)), (l_551 , ((((~g_466) , &g_306) != ((*l_566) = &g_306)) > g_466))))), (**g_277))) , (void*)0) == (void*)0));
                    (*l_570) = func_39(l_526.f0, ((*l_570) = l_568));
                }
                (*l_568) = l_537.f0;
                if (((*l_536) = ((*g_306) > ((*g_316) < 0xC3CEL))))
                {
                    int **l_571 = &l_536;
                    (*l_571) = func_9((**g_277), p_3);
                    for (l_526.f0 = (-23); (l_526.f0 > 4); ++l_526.f0)
                    {
                        char *l_579 = &g_98;
                        char *l_580 = (void*)0;
                        char *l_581 = &g_369;
                        int *l_582 = &g_16;
                        (**l_571) = (((*g_278) = (*l_568)) & (g_369 = l_526.f1));
                        (*l_536) = ((((safe_div_func_int32_t_s_s(((((*l_463) = 65534UL) <= l_526.f1) && (((((*l_581) = ((*l_579) = (l_578 = (func_17(l_537.f1, p_3, p_3, ((0x3EB0D0D0L && (0x2F6F78F3L == l_576)) , (&g_376 != l_577)), (*g_316)) || (**g_305))))) & (-1L)) , l_582) != l_583)), l_526.f0)) ^ 0xFFL) && 0x1D5CL) <= 0x33D2L);
                        if ((*l_582))
                            continue;
                    }
                }
                else
                {
                    char *l_587 = (void*)0;
                    union U0 l_592 = {0UL};
                    int **l_593 = &g_76;
                    if ((((safe_rshift_func_int8_t_s_s(g_586, (g_369 = g_92.f0))) >= (**g_277)) != (safe_mul_func_int16_t_s_s(0x6F4DL, (safe_rshift_func_uint8_t_u_u((*l_568), func_49(&l_536, func_17((l_592 , (*l_536)), ((*l_593) = p_3), p_3, (*l_568), (*g_316)))))))))
                    {
                        union U0 *l_594 = &l_537;
                        (*l_546) = l_594;
                        (*l_568) = ((*l_536) = ((safe_rshift_func_uint16_t_u_s(((**l_577) , (*l_568)), 6)) > (*l_536)));
                        (*l_568) = func_17(l_537.f0, l_568, p_3, g_92.f0, ((*l_536) && ((func_49(&g_76, ((safe_div_func_int16_t_s_s((*l_536), (((*l_568) ^ (g_464 = (4294967287UL != (**g_305)))) && (*l_568)))) & (*l_536))) , (void*)0) == (void*)0)));
                    }
                    else
                    {
                        int l_601 = (-4L);
                        (*l_568) = ((((func_17(((((**g_277) & g_142) , (safe_mod_func_uint16_t_u_u(g_334, ((l_592.f1 , func_17(g_464, l_536, (l_578 , ((!(l_601 <= (((*g_316) = (-5L)) | 0x15E1L))) , (void*)0)), (*l_568), (*l_536))) , (*l_536))))) > g_369), p_3, p_3, (*l_536), l_478) | 0UL) != (**g_305)) == 0xC8C507F8L) != 255UL);
                    }
                    if ((safe_mul_func_int16_t_s_s((0x20L == 0x95L), (*g_316))))
                    {
                        short l_606 = 0x12ADL;
                        int *l_609 = &g_318;
                        int *l_611 = &g_496;
                        (*l_593) = ((((safe_rshift_func_uint8_t_u_s((func_17((l_606 < (safe_add_func_uint8_t_u_u((*l_568), g_586))), l_609, p_3, (*l_609), ((*g_316) = (l_478 != g_496))) , (*g_278)), 7)) | l_610) != g_123) , l_611);
                        (**l_593) = (-3L);
                    }
                    else
                    {
                        int *l_612 = &g_613;
                        unsigned short **l_628 = &l_463;
                        unsigned short ***l_629 = &l_628;
                        (*l_593) = ((+((*l_612) = g_75)) , l_614);
                        p_3 = p_3;
                        (**l_593) = (&g_52 == l_615);
                        (*l_629) = ((l_616 ^ (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((-1L), ((((*l_614) = (*g_76)) , (((*l_546) = l_621) == (void*)0)) , ((void*)0 != (*g_277))))), (+(+(+((*g_316) = (safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((*l_568) != ((*g_278) = ((safe_rshift_func_int8_t_s_s((l_526.f1 >= 0x4DB9D985L), 2)) , 246UL))), g_123)), g_318))))))))) , l_628);
                    }
                }
            }
            else
            {
                char l_630 = 4L;
                int *l_637 = &g_496;
                int **l_655 = &l_583;
                if (((*l_536) = (*l_536)))
                {
                    unsigned l_633 = 18446744073709551615UL;
                    g_496 = ((*l_536) = l_630);
                    (*l_536) = ((safe_rshift_func_int16_t_s_s(l_633, 12)) <= (*l_536));
                }
                else
                {
                    short l_635 = 0xD2A1L;
                    unsigned char *l_636 = &g_142;
                    int **l_638 = &l_583;
                    (*l_638) = ((l_634 , ((*l_636) = ((**g_277) = l_635))) , l_637);
                }
                for (g_92.f1 = 0; (g_92.f1 <= (-15)); --g_92.f1)
                {
                    unsigned l_653 = 0x72CCCC7BL;
                    for (l_610 = 0; (l_610 >= (-24)); l_610 = safe_sub_func_uint32_t_u_u(l_610, 1))
                    {
                        unsigned short l_654 = 0x1E16L;
                        g_76 = (void*)0;
                        p_3 = func_9((safe_rshift_func_uint8_t_u_s((*g_278), 1)), p_3);
                        (*l_637) = (safe_rshift_func_int16_t_s_u(((((*p_3) = (((safe_mod_func_int32_t_s_s(g_123, (*l_637))) == ((*p_3) == (safe_div_func_uint8_t_u_u(((*l_637) & (safe_div_func_uint16_t_u_u(((((*g_277) = (*g_277)) == (void*)0) && ((l_653 , p_3) == (void*)0)), l_654))), 0x6DL)))) , (*p_3))) , 0x27ACL) != (*g_316)), 2));
                    }
                }
                (*l_655) = p_3;
                (*l_637) = (safe_mod_func_uint8_t_u_u((func_49(&g_76, l_658) < (safe_mod_func_uint16_t_u_u((*l_536), (((safe_mul_func_uint16_t_u_u(func_17(g_464, p_3, p_3, g_369, (*l_536)), (*l_536))) , l_576) | (*l_536))))), (**g_277)));
            }
            if (l_576)
            {
                short l_663 = 0xEA13L;
                (*l_536) = l_663;
                (*l_536) = (1UL | (*g_316));
            }
            else
            {
                int l_670 = 0L;
                for (l_576 = 0; (l_576 == 29); l_576++)
                {
                    int *l_668 = (void*)0;
                    int *l_669 = &l_658;
                    int l_671 = 3L;
                }
            }
        }
        else
        {
            int **l_681 = &g_76;
            (*l_681) = p_3;
        }
        (*l_682) = (void*)0;
        (*l_682) = func_33(l_683, (l_578 , ((*l_682) = p_3)), (+(l_537.f1 || (l_526 , (!(((0x2878L | (*g_316)) || 0xB18BFEDBL) | (**g_277)))))), l_526, l_686);
    }
    else
    {
        (*g_375) = (*g_375);
    }
    return p_3;
}







static int * func_4(int * p_5, int * p_6, int * p_7, int * p_8)
{
    union U0 ***l_454 = &g_375;
    int l_455 = 0xF6BDA417L;
    (*p_7) = ((l_454 != (l_455 , &g_375)) >= l_455);
    return p_5;
}







static int * func_9(unsigned char p_10, int * p_11)
{
    int *l_453 = &g_318;
    return l_453;
}







static int func_17(unsigned p_18, int * p_19, int * p_20, char p_21, short p_22)
{
    int *l_446 = (void*)0;
    int l_449 = 0x2D5EA774L;
    int **l_450 = &l_446;
    (*l_450) = p_20;
    return p_22;
}







static unsigned short func_25(int p_26)
{
    int *l_90 = &g_16;
    int **l_89 = &l_90;
    int ***l_365 = &g_151;
    union U0 l_392 = {0x56A79918L};
    int l_418 = 0x327AA73DL;
    short l_427 = 0x4EE3L;
    unsigned **l_428 = (void*)0;
    unsigned short *l_430 = &g_123;
    unsigned char *l_431 = (void*)0;
    int *l_434 = &g_194;
    for (g_16 = 1; (g_16 < (-27)); g_16 = safe_sub_func_uint8_t_u_u(g_16, 3))
    {
        int *l_42 = &g_16;
        union U0 l_91 = {0x01A07762L};
    }
    for (g_16 = 18; (g_16 == 11); g_16 = safe_sub_func_int16_t_s_s(g_16, 8))
    {
        short l_364 = 0x4701L;
        (*l_89) = (void*)0;
        return l_364;
    }
    if ((0xDDAB37F3L <= func_49(((*l_365) = &l_90), p_26)))
    {
        int *l_370 = &g_194;
        union U0 **l_377 = (void*)0;
        unsigned char l_384 = 1UL;
        unsigned char ***l_393 = &g_277;
        unsigned char l_413 = 0UL;
        (*l_370) = ((**l_89) = (((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint16_t_u_u(g_369, 3)))) || g_194) != (&g_151 != &l_89)));
        if (((*l_370) = (((**g_151) || (((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((l_377 = g_375) == &g_376), (**g_151))), p_26)) , (safe_mul_func_uint16_t_u_u((255UL >= (((**g_305) , p_26) , (((safe_lshift_func_int16_t_s_u((*g_316), p_26)) , (*l_90)) < l_384))), 1UL))) < (*l_370))) < 0UL)))
        {
            unsigned char ***l_385 = (void*)0;
            unsigned char ***l_386 = (void*)0;
            unsigned char **l_387 = &g_278;
            int l_412 = 0L;
            int l_417 = 0x69CBD4E2L;
            l_387 = &g_278;
            if (p_26)
            {
                unsigned char *l_390 = &l_384;
                int l_391 = 0x4F48892EL;
                l_391 = (safe_lshift_func_uint8_t_u_u(((*g_278) = 255UL), ((*l_390) = (***l_365))));
                if (((l_392 , l_393) == (void*)0))
                {
                    int *l_394 = (void*)0;
                    (*l_89) = l_394;
                    (*g_151) = &l_391;
                }
                else
                {
                    int l_402 = (-1L);
                    for (g_92.f0 = 0; (g_92.f0 == 3); ++g_92.f0)
                    {
                        unsigned l_399 = 0x93A7BC0BL;
                        int l_405 = (-1L);
                        int l_408 = 8L;
                        l_408 = ((safe_lshift_func_int8_t_s_s(l_399, 0)) | (((**g_277) <= (l_405 = (safe_sub_func_int16_t_s_s(l_402, (safe_div_func_uint16_t_u_u((p_26 && g_92.f1), p_26)))))) >= (safe_mod_func_int8_t_s_s((((*l_370) = func_49(((*l_365) = &g_76), p_26)) , (*l_370)), 0x24L))));
                    }
                }
            }
            else
            {
                char *l_411 = &g_98;
                int l_416 = 6L;
                int **l_426 = (void*)0;
                (**g_151) = (((safe_lshift_func_int8_t_s_s(((g_16 == ((*l_411) = (g_163 || (**l_89)))) < ((*g_306) != l_412)), 5)) >= (((p_26 , l_413) <= ((g_142 = ((safe_div_func_uint16_t_u_u(l_416, l_417)) || (***l_365))) && l_418)) == (*l_370))) , (**g_151));
                if ((**g_151))
                {
                    unsigned short l_419 = 65535UL;
                    unsigned short *l_423 = &l_419;
                    if (l_419)
                    {
                        return (*l_370);
                    }
                    else
                    {
                        int **l_420 = &l_370;
                        (*g_375) = (void*)0;
                        (*l_420) = ((*g_151) = (*l_89));
                    }
                    (*l_89) = func_39(p_26, &l_416);
                    (*g_151) = (*l_89);
                    (*l_370) = (((safe_mul_func_int8_t_s_s((*l_370), ((**g_277) = (((((*l_423) = g_16) , (safe_mul_func_int16_t_s_s((((((((*l_370) != func_49(l_426, l_417)) != p_26) >= (p_26 | ((l_427 , 6UL) == p_26))) && 8UL) , 0xDA8BL) == p_26), p_26))) , (**g_277)) == p_26)))) != (-8L)) | p_26);
                }
                else
                {
                    return g_92.f0;
                }
            }
        }
        else
        {
            (**l_365) = l_370;
        }
        (*l_370) = (p_26 < (*g_306));
    }
    else
    {
        unsigned ***l_429 = &l_428;
        (*l_429) = l_428;
        return g_334;
    }
    (*l_434) = (g_16 = ((p_26 & ((*l_430) = g_142)) , func_49(((l_431 == (void*)0) , (*l_365)), (safe_div_func_uint32_t_u_u(0x8AA018CEL, 4294967289UL)))));
    return g_123;
}







static int * func_29(int * p_30, int * p_31, unsigned p_32)
{
    short l_96 = 0L;
    char *l_97 = &g_98;
    int **l_105 = &g_76;
    short l_106 = 0x4EA1L;
    unsigned short l_107 = 0x8F49L;
    int **l_111 = &g_76;
    int **l_112 = &g_76;
    char l_124 = 0xD5L;
    union U0 l_158 = {0x619F20ACL};
    int l_188 = 6L;
    int l_189 = 0x8F1AC0AFL;
    char l_197 = 0xDAL;
    int *l_276 = &g_75;
    union U0 l_288 = {0UL};
    short l_343 = 0xD96DL;
    int *l_350 = &g_75;
    int ***l_359 = &g_151;
    int l_360 = 0L;
    char l_361 = 0x31L;
    if ((((((*l_97) = l_96) , (safe_rshift_func_uint16_t_u_s(g_92.f0, 9))) & (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(g_16, func_49(l_105, ((((g_75 , (g_16 , &l_105)) == &g_52) ^ ((((void*)0 != &g_52) | l_106) && g_92.f0)) , l_107)))), 0xF00AC9E8L))) < p_32))
    {
        int **l_108 = (void*)0;
        int ***l_109 = (void*)0;
        int ***l_110 = &l_105;
        unsigned l_117 = 5UL;
        unsigned short *l_120 = &l_107;
        unsigned short *l_121 = (void*)0;
        unsigned short *l_122 = &g_123;
        (*l_112) = ((((*l_97) = ((g_92.f0 > 0L) > ((l_111 = ((*l_110) = l_108)) != l_112))) , (safe_add_func_uint8_t_u_u(((((((*l_97) = ((l_117 < ((*l_122) = ((*l_120) = (0x1DL > (safe_mul_func_int16_t_s_s(func_49((g_52 = &g_76), ((*p_30) = ((((*p_30) != g_92.f0) < g_16) < g_75))), p_32)))))) == g_16)) || p_32) >= p_32) , l_124) , g_75), p_32))) , p_31);
        (*l_112) = p_30;
    }
    else
    {
        int ***l_125 = &l_111;
        int *l_129 = &g_16;
        unsigned char *l_166 = &g_142;
        short *l_181 = &l_158.f1;
        int l_220 = 0L;
        unsigned l_282 = 0UL;
        union U0 l_289 = {2UL};
        unsigned *l_302 = &g_186;
        unsigned **l_301 = &l_302;
        int l_319 = 1L;
        if ((((void*)0 == &p_30) ^ func_49(((*l_125) = &g_76), (*p_30))))
        {
            int l_126 = 0L;
            (*p_30) = (~(*p_31));
            (*l_105) = (*l_105);
            if (l_126)
            {
                return p_30;
            }
            else
            {
                unsigned char l_138 = 0UL;
                unsigned char *l_141 = &g_142;
                for (g_123 = 25; (g_123 <= 20); --g_123)
                {
                    (*l_112) = l_129;
                }
                (*p_30) = (*p_30);
                (**l_125) = (((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(0xA8L, (9UL < (&g_76 == (void*)0)))) <= p_32) || g_92.f1), g_75)) ^ l_138) != (safe_mul_func_uint8_t_u_u(((*l_141) = ((g_98 = p_32) , g_92.f1)), 1UL))), p_32)) == g_92.f1), 2UL)) <= l_126) , (void*)0);
            }
        }
        else
        {
            short *l_152 = &l_106;
            int l_153 = 1L;
            union U0 l_210 = {7UL};
            short **l_247 = &l_181;
            unsigned *l_314 = &g_186;
            int **l_321 = &l_129;
            unsigned char l_322 = 0x13L;
            if (((((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(func_49((*l_125), (safe_rshift_func_int16_t_s_s(((p_32 , 0UL) , ((func_49(g_151, func_49(&p_31, (*p_30))) <= ((*l_152) = p_32)) > 6L)), p_32))), (-6L))), g_16)), 7)) && 0UL) == p_32) && (*p_31)))
            {
                int l_161 = 6L;
                unsigned char *l_162 = &g_163;
                int *l_164 = (void*)0;
                int *l_165 = &l_161;
                int l_170 = (-1L);
                int **l_219 = &g_76;
                union U0 l_241 = {0xA5629042L};
lbl_240:
                if ((((*l_166) = (l_153 , ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(g_75, (g_142 >= (&g_142 != ((p_32 , ((*l_165) = ((l_158 , ((((*l_162) = (((g_142 != (g_75 , (safe_add_func_uint8_t_u_u(l_161, g_75)))) , 0xCCL) && 0xA2L)) < p_32) , (*p_31))) , l_161))) , l_166))))), g_142)) && g_92.f1))) , (*l_129)))
                {
                    unsigned l_169 = 0xCD35FECEL;
lbl_171:
                    (*g_151) = p_31;
                    (*p_30) = (l_170 = (safe_rshift_func_int16_t_s_s((~l_169), 5)));
                    if (g_92.f1)
                        goto lbl_171;
                    (*l_105) = p_30;
                }
                else
                {
                    int **l_178 = &g_76;
                    unsigned short *l_182 = &l_107;
                    if ((((((*l_182) = (safe_div_func_uint32_t_u_u(func_49(l_111, (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_161, (func_49(l_178, (p_32 >= (~(((*l_162) = ((*l_166) = (0x494AE63FL > (safe_add_func_uint32_t_u_u((l_170 = (g_142 , ((((void*)0 != l_181) & (p_32 <= (*p_31))) , p_32))), (*p_30)))))) , (*l_129))))) && 1L))), 0xFC97L))), p_32))) , (void*)0) != (void*)0) , l_153))
                    {
                        unsigned *l_185 = &g_186;
                        int **l_187 = (void*)0;
                        l_188 = ((safe_div_func_int32_t_s_s((*p_30), ((*l_185) = (g_75 , p_32)))) , ((*p_30) = func_49(l_187, ((*p_30) = l_161))));
                        (*p_30) = (func_49(&p_30, (*p_30)) ^ l_189);
                        l_170 = (*p_31);
                        (*l_105) = p_31;
                    }
                    else
                    {
                        unsigned l_198 = 0xB67276F1L;
                        int *l_199 = &g_194;
                        (*l_199) = (p_32 & (safe_sub_func_uint16_t_u_u(((((g_194 >= (g_163 , (g_186 | (+(safe_lshift_func_int8_t_s_s((p_32 || 65535UL), (g_98 = p_32))))))) & ((*p_30) = l_197)) || ((l_198 , l_153) >= 0xBCD7L)) && p_32), p_32)));
                        (*l_111) = func_33((*g_151), p_31, g_16, g_92, (*p_31));
                    }
                    (*p_30) = (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(l_170, (safe_lshift_func_uint16_t_u_u((((l_210 , (func_49(&g_76, (**g_151)) , g_92.f1)) , g_163) < (((safe_add_func_int8_t_s_s(((*l_97) = 0x4FL), p_32)) >= 0x5B8DL) != g_92.f1)), g_123)))) <= g_92.f1), 0xD9AABCC5L)) | g_123), 0UL)), 0x84L));
                    for (l_124 = 23; (l_124 < 2); --l_124)
                    {
                        union U0 *l_216 = &l_158;
                        union U0 **l_215 = &l_216;
                        (*l_215) = &l_158;
                    }
                }
                if ((safe_div_func_uint8_t_u_u(func_49(l_219, (**g_151)), 0x95L)))
                {
                    char l_221 = 1L;
                    unsigned *l_243 = &g_186;
                    unsigned **l_242 = &l_243;
                    unsigned *l_244 = &g_186;
                    int l_253 = 0x8ECA2463L;
                    union U0 l_255 = {0x9B165989L};
                    if (l_220)
                    {
                        unsigned char l_236 = 0xEDL;
                        int l_237 = 0xC45A4569L;
                        l_237 = (l_221 | ((*p_30) = (safe_sub_func_uint16_t_u_u(p_32, (safe_sub_func_int32_t_s_s(1L, (safe_mul_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((~p_32), p_32)) ^ 255UL) > (safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(p_32, (*l_129))), (((safe_sub_func_int8_t_s_s(p_32, l_236)) != g_123) ^ 0x84F0L)))), p_32))))))));
                        (*l_219) = (void*)0;
                    }
                    else
                    {
                        union U0 **l_238 = (void*)0;
                        union U0 ***l_239 = &l_238;
                        (*l_239) = l_238;
                        if (l_107)
                            goto lbl_240;
                        g_194 = (*p_31);
                    }
                    if ((func_49((((*l_244) = (l_241 , ((0x39L < p_32) & ((*l_166) = (((*l_242) = func_33(func_39((l_153 = (*l_129)), p_31), p_30, l_210.f1, l_241, (*p_31))) != &p_32))))) , (void*)0), l_221) > 0xB9001CCCL))
                    {
                        (*p_30) = (l_221 > p_32);
                        (*p_30) = (*p_31);
                        (*p_30) = (*l_129);
                    }
                    else
                    {
                        short **l_246 = &l_152;
                        short ***l_245 = &l_246;
                        int l_248 = (-1L);
                        short l_254 = 0x07C1L;
                        union U0 l_256 = {0x9DA40672L};
                        l_247 = ((*l_245) = &l_152);
                        (**l_125) = func_33(p_30, func_33((((*g_151) == ((l_210.f1 == (g_163 , l_248)) , func_33(&l_248, p_31, (l_248 & ((*l_97) = (safe_sub_func_uint8_t_u_u((g_163 = ((l_253 = (safe_lshift_func_uint16_t_u_s((l_210 , 1UL), 1))) || (*p_30))), 0xE6L)))), l_158, l_254))) , (*g_151)), p_31, g_186, l_255, (*p_31)), p_32, l_256, l_256.f1);
                    }
                }
                else
                {
                    int *l_257 = &g_16;
                    (**l_125) = (void*)0;
                    return l_257;
                }
                for (l_241.f1 = (-13); (l_241.f1 != 13); ++l_241.f1)
                {
                    unsigned l_260 = 0UL;
                    unsigned short *l_267 = &l_107;
                    (*g_151) = p_30;
                    (*p_30) = (0x0FB9L != (0x9EBED4ACL && func_49(((*l_125) = &p_30), l_260)));
                    (***l_125) = ((p_31 != &l_153) > ((p_32 || ((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_32, ((*l_267) = (safe_mod_func_uint32_t_u_u(p_32, 4294967295UL))))), (&l_124 != l_166))) , (p_32 | (***l_125)))) > p_32));
                }
                (*p_30) = (((void*)0 != &l_210) >= ((void*)0 != &g_98));
            }
            else
            {
                unsigned char l_268 = 255UL;
                int l_269 = 0L;
                unsigned char ***l_279 = &g_277;
                int *l_320 = (void*)0;
                l_269 = (!l_268);
lbl_292:
                for (g_75 = 0; (g_75 < (-21)); g_75--)
                {
                    short l_274 = (-1L);
                    int *l_275 = &l_188;
                    l_269 = (safe_add_func_int32_t_s_s((*p_31), ((*l_275) = l_274)));
                    p_31 = ((**l_125) = l_276);
                    (*l_275) = ((***l_125) ^ g_75);
                }
                (*l_279) = g_277;
                for (l_268 = 0; (l_268 > 56); l_268 = safe_add_func_uint16_t_u_u(l_268, 8))
                {
                    char *l_283 = &l_197;
                    int *l_287 = (void*)0;
                    union U0 l_290 = {0x675BC930L};
                    unsigned ***l_303 = (void*)0;
                    unsigned ***l_304 = &l_301;
                    unsigned ***l_307 = &g_305;
                    l_282 = (-1L);
                    (*l_276) = ((func_49(&g_76, ((((void*)0 != l_283) <= (*p_31)) && (safe_div_func_uint8_t_u_u(func_49(((*l_125) = &g_76), (+(((*l_276) = (*p_31)) && (*p_31)))), p_32)))) < l_268) , l_210.f1);
                    if ((&l_107 != &l_107))
                    {
                        (*p_30) = (0xC8L < p_32);
                    }
                    else
                    {
                        unsigned short l_286 = 0xF6F7L;
                        int *l_291 = &l_153;
                        (*l_276) = (l_286 = (*p_31));
                        (*l_105) = func_39(((*l_181) = g_142), func_33((*g_151), func_33(func_33((*g_151), func_33(l_287, (*g_151), (*l_276), l_288, (*p_30)), g_92.f0, l_289, l_153), (**l_125), g_163, l_288, l_268), g_163, l_290, l_286));
                        (*l_291) = ((*p_30) = (-6L));
                        if (l_288.f1)
                            goto lbl_292;
                    }
                    if ((p_32 && (safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((+func_49((*l_125), (*p_31))), (safe_div_func_uint8_t_u_u(((**g_277) = ((safe_add_func_int8_t_s_s(((((*l_304) = l_301) == ((*l_307) = g_305)) & ((p_32 , g_151) != (void*)0)), g_98)) , (**g_277))), p_32)))), p_32))))
                    {
                        short *l_315 = &l_158.f1;
                        unsigned short *l_317 = &g_123;
                        (*p_30) = (-2L);
                        l_153 = ((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((*l_317) = ((((safe_sub_func_uint8_t_u_u((**g_277), l_153)) , ((*g_305) = l_314)) != (void*)0) || ((func_49(&g_76, (*p_31)) , l_315) == (g_142 , g_316)))) ^ g_194), 12)), g_194)) != g_318);
                    }
                    else
                    {
                        (*p_30) = (l_319 <= 0xC3L);
                        l_320 = ((*l_111) = func_39((l_288 , ((*p_30) || 0xF3639B91L)), p_30));
                        (*l_105) = (void*)0;
                    }
                }
            }
            (*l_276) = 0x7F7F05ABL;
            (*l_276) = func_49(l_321, (g_318 = ((*p_30) = ((-6L) >= func_49(&g_76, l_322)))));
        }
        return (*l_105);
    }
    for (p_32 = 10; (p_32 != 32); ++p_32)
    {
        (*g_151) = (*g_52);
    }
    for (g_142 = (-24); (g_142 < 16); g_142 = safe_add_func_uint16_t_u_u(g_142, 6))
    {
        int l_327 = (-5L);
        union U0 *l_347 = &g_92;
        union U0 **l_348 = (void*)0;
        union U0 **l_349 = &l_347;
        if ((**l_112))
        {
            int **l_339 = &l_276;
            int ***l_340 = &l_112;
            (**l_112) = l_327;
            (*p_30) = ((*g_316) , ((safe_lshift_func_uint8_t_u_s(((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(0x39L, 6)), g_334)) >= g_194) || 0xE5L) , ((**g_277) = ((safe_div_func_uint32_t_u_u((func_49(((*l_340) = l_339), (safe_mul_func_int8_t_s_s(((void*)0 != g_316), func_49(&g_76, (*g_76))))) > 0L), l_343)) || l_327))), 6)) == p_32));
        }
        else
        {
            for (g_318 = 18; (g_318 < (-24)); g_318 = safe_sub_func_uint8_t_u_u(g_318, 8))
            {
                unsigned char ***l_346 = &g_277;
                (*l_346) = &g_278;
            }
        }
        (**l_112) = (-1L);
        (*l_349) = l_347;
    }
    (*l_112) = func_33(l_350, ((((((safe_mul_func_int16_t_s_s(p_32, ((((((safe_rshift_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s((((((7L == ((func_49(&p_30, (func_49(&g_76, (*p_31)) <= ((*g_316) = ((&l_105 != (l_359 = (void*)0)) != (*g_306))))) > p_32) , (-8L))) , &g_278) != (void*)0) | p_32) , (*l_276)), p_32)) , (*l_276)) | 0x68L), 15)) | 0x1D3FL) || (**g_151)) != l_360) || 0L) == 0UL))) & 7UL) >= p_32) && (*l_276)) != g_98) , p_31), g_142, l_158, l_361);
    return p_30;
}







static int * func_33(int * p_34, int * p_35, int p_36, union U0 p_37, int p_38)
{
    int *l_93 = &g_75;
    (*l_93) = 0xDEA28050L;
    for (p_36 = (-18); (p_36 > 6); p_36++)
    {
        (*l_93) = 0xBDB26F1AL;
    }
    return &g_75;
}







static int * func_39(short p_40, int * p_41)
{
    int l_83 = 0L;
lbl_84:
    for (p_40 = (-5); (p_40 <= 14); p_40 = safe_add_func_uint32_t_u_u(p_40, 8))
    {
        int *l_46 = &g_16;
        int **l_45 = &l_46;
        (*l_45) = &g_16;
    }
    for (p_40 = 0; (p_40 < 15); p_40 = safe_add_func_int16_t_s_s(p_40, 1))
    {
        int ***l_53 = &g_52;
        int l_85 = 0x58A82D85L;
        l_83 = func_49(((*l_53) = g_52), g_16);
        if (p_40)
            goto lbl_84;
        if (l_85)
            break;
    }
    for (l_83 = (-10); (l_83 < (-19)); l_83 = safe_sub_func_int8_t_s_s(l_83, 8))
    {
        short l_88 = (-6L);
        g_75 = l_88;
    }
    return &g_16;
}







static int func_49(int ** p_50, int p_51)
{
    unsigned l_64 = 0x6DFE5350L;
    int *l_78 = &g_75;
    int ***l_82 = &g_52;
    if (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_51, (+0x8B72L))), (safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(g_16, p_51)), (p_51 >= g_16))))) | (safe_add_func_int16_t_s_s((p_51 <= (l_64 < ((~(((safe_div_func_int8_t_s_s(g_16, 1UL)) , (void*)0) == g_52)) <= g_16))), p_51))))
    {
        char l_69 = 0x5AL;
        char *l_72 = (void*)0;
        char *l_73 = &l_69;
        int *l_74 = &g_75;
        (*l_74) = (safe_lshift_func_uint8_t_u_s(p_51, ((*l_73) = ((l_64 < l_69) || (safe_mod_func_int16_t_s_s(g_16, g_16))))));
        l_74 = g_76;
    }
    else
    {
        int **l_77 = &g_76;
        int **l_79 = &l_78;
        (*l_77) = &g_75;
        (*l_79) = ((*l_77) = l_78);
        return (*l_78);
    }
    (*l_82) = ((safe_div_func_int32_t_s_s(((*l_78) < (*l_78)), (*l_78))) , &g_76);
    return (*l_78);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_92.f1, "g_92.f1", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
