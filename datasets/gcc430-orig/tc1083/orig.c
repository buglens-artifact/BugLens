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



static int g_2 = 0x399841B3L;
static int g_57 = (-3L);
static int *g_73 = &g_2;
static int **g_72 = &g_73;
static short g_85 = 0L;
static unsigned char g_87 = 0x27L;
static unsigned char g_89 = 246UL;
static unsigned short g_91 = 0xAFBBL;
static int g_92 = 0x42ACE07DL;
static int g_95 = 0x59FC8950L;
static unsigned g_104 = 18446744073709551613UL;
static unsigned char g_105 = 0UL;
static short g_126 = 0L;
static unsigned g_132 = 4294967286UL;
static int g_155 = (-1L);
static char g_173 = 0x77L;
static char *g_252 = &g_173;
static char **g_251 = &g_252;
static char g_355 = 0x0CL;
static short *g_359 = &g_85;
static short **g_358 = &g_359;
static int g_387 = 0xF9F6BFAAL;
static char g_424 = 0xBFL;
static unsigned char *g_442 = &g_89;
static unsigned char **g_441 = &g_442;
static int g_458 = 0xE2236AA9L;
static unsigned short g_460 = 0x306AL;
static unsigned short g_462 = 0xC505L;
static unsigned g_566 = 4294967294UL;



static unsigned char func_1(void);
static unsigned func_5(unsigned char p_6);
static unsigned char func_7(int p_8, unsigned p_9, char p_10);
static short func_15(unsigned p_16, unsigned char p_17);
static unsigned func_18(short p_19, int p_20, unsigned p_21, unsigned p_22);
static unsigned char func_24(int p_25);
static char func_26(unsigned p_27, unsigned p_28, unsigned p_29, char p_30, short p_31);
static unsigned func_32(unsigned p_33);
static char func_37(int p_38, unsigned short p_39);
static unsigned char func_49(int p_50, char p_51, short p_52);
static unsigned char func_1(void)
{
    unsigned l_380 = 0x0A4D8271L;
    int l_567 = 0L;
    int *l_636 = &l_567;
    unsigned short l_640 = 0x2709L;
    int l_653 = 0x3821923FL;
    unsigned short **l_665 = (void*)0;
    int *l_668 = &g_155;
    unsigned l_669 = 18446744073709551608UL;
lbl_667:
    for (g_2 = 0; (g_2 >= 20); g_2 = safe_add_func_int16_t_s_s(g_2, 5))
    {
        char l_23 = (-3L);
        char l_383 = (-1L);
        int **l_384 = (void*)0;
        int ***l_385 = &l_384;
        int *l_386 = &g_387;
        unsigned *l_564 = &g_132;
        unsigned *l_565 = &g_566;
        unsigned l_588 = 18446744073709551615UL;
        char l_589 = (-1L);
        int l_590 = (-1L);
    }
    if (((5L > (!g_355)) , ((((*g_73) = l_380) , (1L | (safe_add_func_int16_t_s_s((((((func_18(((*g_359) = (func_15(g_2, ((g_105 = ((**g_441) = (*g_442))) == (safe_div_func_int8_t_s_s(func_49(func_49(((*l_636) = (-1L)), ((safe_unary_minus_func_int16_t_s(0L)) != (safe_div_func_int32_t_s_s(0x1A4B506AL, l_380))), l_380), l_380, (**g_358)), l_380)))) , (*g_359))), l_380, l_380, l_380) , 0L) , l_567) & l_640) >= l_640) ^ l_380), 0x9D46L)))) <= l_640)))
    {
        short ***l_641 = &g_358;
        short l_655 = (-1L);
        int *l_656 = &g_387;
        unsigned short *l_666 = &g_460;
        (*l_641) = (void*)0;

        ;
        for (g_104 = (-13); (g_104 > 58); ++g_104)
        {
            unsigned short *l_647 = &l_640;
            unsigned short **l_646 = &l_647;
            char *l_648 = &g_424;
            char ***l_649 = &g_251;
            unsigned char l_650 = 0xACL;
            unsigned *l_651 = (void*)0;
            unsigned *l_652 = &g_566;
            int *l_654 = (void*)0;
            g_95 = ((l_653 = ((*g_442) , ((*l_652) = ((((((l_649 = ((safe_add_func_int8_t_s_s((*g_252), ((*l_648) = ((&l_640 == ((*l_646) = (void*)0)) >= ((void*)0 != &l_567))))) , &g_251)) != &g_251) && l_650) == l_650) & 0x50E4DEC4L) | 0x5933L)))) , 1L);

            ;
            if (l_655)
                break;
        }
        (*g_72) = l_656;

        ;
        (**g_72) = ((safe_mod_func_uint16_t_u_u((*l_656), (safe_rshift_func_int8_t_s_u((g_57 >= (g_462 = (((*l_656) ^ ((void*)0 != (*g_72))) & (((~((void*)0 != (*g_441))) > (safe_mod_func_uint16_t_u_u(((*l_666) = (((safe_add_func_uint32_t_u_u((!(func_26((g_132 = (l_665 != ((((*g_73) != 0xEF702F2EL) | (-2L)) , (void*)0))), (*l_656), g_462, (*l_656), l_653) <= 0x7119L)), (*l_656))) >= (*l_656)) ^ l_380)), (*g_359)))) <= (*l_656))))), 2)))) , l_567);
    }
    else
    {
        (*g_72) = &l_653;

        ;
        if (g_155)
            goto lbl_667;
    }

    ;
    ;
    (*g_72) = l_668;

    ;
    return l_669;
}







static unsigned func_5(unsigned char p_6)
{
    int l_615 = 3L;
    int *l_616 = &g_458;
    int l_621 = (-1L);
    char l_624 = 4L;
    int *l_627 = &g_95;
    int l_630 = 0x38DCD98AL;
    unsigned char *l_631 = &g_89;
    (*l_616) = l_615;
    (*l_616) = (*l_616);
    (*l_616) = (((0x75L < (((*g_252) = (safe_mod_func_int32_t_s_s((p_6 , p_6), (*l_627)))) > (*l_616))) , l_631) == (void*)0);
    return p_6;
}







static unsigned char func_7(int p_8, unsigned p_9, char p_10)
{
    int *l_591 = (void*)0;
    int l_598 = 0x8C91DCC7L;
    unsigned short *l_610 = (void*)0;
    unsigned short **l_609 = &l_610;
    char l_611 = 0x34L;
    int *l_612 = (void*)0;
    int *l_613 = (void*)0;
    int *l_614 = &l_598;
    l_591 = (*g_72);

    ;
    (*l_614) = (safe_div_func_int16_t_s_s((*g_359), (safe_mod_func_uint8_t_u_u((func_15((safe_add_func_uint16_t_u_u(g_387, (l_598 != (safe_div_func_uint16_t_u_u(p_9, (safe_add_func_uint16_t_u_u((((safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s(p_10, func_49(p_9, (((*g_252) = (safe_sub_func_uint8_t_u_u((l_609 == &l_610), func_49((l_611 , p_10), p_10, (*g_359))))) , (*g_252)), (*g_359)))), g_105)) > p_9) | 0x57DCL), 65527UL))))))), (**g_441)) , (**g_441)), p_8))));

    ;
    return (*g_442);
}







static short func_15(unsigned p_16, unsigned char p_17)
{
    int l_568 = 0xD3C66C8FL;
    char l_579 = 0x40L;
    int *l_580 = &g_92;
    int l_581 = (-1L);
    unsigned char *l_582 = &g_105;
    unsigned l_583 = 0x61E464B5L;
    unsigned char l_584 = 253UL;
    int *l_587 = &g_155;
    (*g_72) = (((l_568 > ((*l_582) = ((((*l_580) = ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(p_16, 0)) > (safe_add_func_int32_t_s_s((~(((safe_rshift_func_uint16_t_u_u((((**g_441) = func_49(((*l_580) = (l_579 && l_579)), ((*g_252) = ((((l_581 = p_16) > 9UL) | (((*l_582) = ((*g_442) = (l_579 >= (l_568 , g_85)))) | 0xCFL)) || l_581)), (**g_358))) , l_583), 15)) , p_17) < l_579)), l_579))), l_584)), (-1L))) ^ (*g_359))) , (*g_359)) || l_579))) == l_568) , (void*)0);

    ;
    (*l_587) = (func_49((p_16 | (*g_252)), (*g_252), (((l_579 <= ((((**g_441) = (*g_442)) > ((*g_359) | 0xB570L)) ^ (safe_add_func_int32_t_s_s(l_584, ((*l_587) = p_17))))) , p_16) >= g_95)) < p_17);
    return (*l_587);
}







static unsigned func_18(short p_19, int p_20, unsigned p_21, unsigned p_22)
{
    unsigned char l_388 = 0x24L;
    int l_402 = 0x5A7C1E20L;
    short l_403 = (-1L);
    int l_419 = 0xD8280D7DL;
    unsigned *l_429 = &g_104;
    unsigned l_433 = 0xF7BA0BE4L;
    int *l_436 = &g_2;
    unsigned l_449 = 0x24BEAB7BL;
    int *l_466 = &g_95;
    int *l_559 = &g_57;
    unsigned char *l_563 = &g_89;
    if ((l_388 , 0x3C713A0FL))
    {
        unsigned l_391 = 1UL;
        short **l_392 = &g_359;
        short ***l_393 = &g_358;
        int *l_425 = &g_57;
        unsigned short *l_430 = (void*)0;
        unsigned short *l_431 = &g_91;
        unsigned *l_432 = &g_132;
        unsigned char **l_494 = &g_442;
        unsigned char l_508 = 0x30L;
        char ***l_520 = &g_251;
        short ***l_555 = &l_392;
        l_403 = (safe_rshift_func_int16_t_s_s((l_391 | (l_388 && (0xE4177E30L > ((((*l_393) = l_392) != &g_359) && (((safe_div_func_uint16_t_u_u(l_388, l_391)) ^ l_402) == l_388))))), 4));
lbl_507:
        (*l_425) = (safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(0x98C7L, ((safe_div_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((l_402 , (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((g_89 = (safe_rshift_func_uint16_t_u_u(l_402, l_391))), l_403)), 0UL))))), p_20)) , p_21))), l_419));
        if (((((safe_unary_minus_func_int8_t_s(((((*l_425) >= 0x13B6L) <= l_419) == 0xF3L))) < 2L) != 0UL) & l_433))
        {
            for (g_155 = (-4); (g_155 != 9); g_155++)
            {
                int *l_447 = &l_402;
                int *l_448 = &g_95;
                (*g_72) = (void*)0;

                ;
                (*g_72) = l_436;

                ;
                (*l_448) = ((*l_447) = (safe_rshift_func_uint16_t_u_u(((*g_73) ^ (safe_mod_func_int32_t_s_s(((*l_425) = (((void*)0 != g_441) > (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(0x97C0L, 11)), 0UL)))), (*g_73)))), 8)));
                (*g_72) = &p_20;

                ;
            }


        }
        else
        {
            unsigned l_450 = 4294967292UL;
            int l_463 = 9L;
            unsigned char **l_495 = (void*)0;
            int ***l_523 = &g_72;
            p_20 = p_19;
            if (p_20)
            {
                unsigned l_464 = 0x8EF1BAC6L;
                l_450 = 0xEA8B326DL;
                if (p_19)
                {
                    (*g_72) = &p_20;

                    ;
                    for (g_132 = 10; (g_132 != 10); g_132++)
                    {
                        l_425 = (*g_72);

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned l_453 = 18446744073709551608UL;
                    unsigned short *l_459 = &g_460;
                    unsigned short *l_461 = &g_462;
                    (*l_425) = l_453;
                    if (((((((*l_436) , (l_450 , (((*g_442) = (((safe_rshift_func_int16_t_s_u((((g_126 <= (((safe_rshift_func_uint8_t_u_s(func_49(((((l_463 = ((*l_461) = ((((*l_459) = ((*l_431) = (*l_436))) && g_387) , 0xADD9L))) & g_424) , (-1L)) && 0xEF1B2614L), p_22, (**g_358)), l_464)) > p_20) , l_453)) , 0xB0B7F6C1L) != l_450), g_87)) != 1UL) < l_450)) == (*l_436)))) <= 1UL) < p_19) < p_20) , p_20))
                    {
                        (*g_72) = ((~0xD35EL) , (l_425 = &l_463));

                        ;
                        ;
                    }
                    else
                    {
lbl_465:
                        (*g_72) = &p_20;

                        ;
                        (*l_425) = p_22;
                        if (l_433)
                            goto lbl_465;
                        (*g_72) = (*g_72);
                    }

                    ;
                    ;
                }

                ;
                ;
                return l_464;


            }
            else
            {
                int l_478 = 0xB14E475AL;
                (*g_72) = l_466;

                ;
                if (l_450)
                {
                    int *l_469 = &l_402;
                    int ***l_493 = (void*)0;
                    for (g_89 = 0; (g_89 != 3); g_89 = safe_add_func_int8_t_s_s(g_89, 6))
                    {
                        (*g_72) = (*g_72);
                        (**g_72) = 3L;
                        return l_463;
                    }
                    l_469 = (p_19 , l_469);
                    if (((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((*l_469) < (p_21 , ((*g_252) <= ((((l_478 && (((**g_441) && (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(p_22, (*l_469))), (((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((p_21 == (((((**g_358) = ((safe_sub_func_int16_t_s_s((&g_359 == (*l_393)), l_478)) & (*l_425))) , (*l_469)) | p_19) ^ p_22)) && (**g_441)), g_355)) || l_463), p_20)) & (*l_466)) || l_478)))) > 0x8DL)) <= (*l_425)) , (**g_441)) || 249UL)))), (*g_73))), l_478)) || l_450), p_20)) <= p_21))
                    {
                        p_20 = (safe_mod_func_uint32_t_u_u(p_22, (((l_478 <= (safe_rshift_func_int16_t_s_s(p_19, (((-1L) <= p_22) != g_95)))) | (-1L)) || (((*l_432) = ((l_493 == (void*)0) , p_22)) | (-5L)))));
                    }
                    else
                    {
                        (*g_72) = &p_20;

                        ;
                        (*g_72) = (*g_72);
                    }

                    ;
                    if (p_20)
                    {
                        (*g_72) = &p_20;

                        ;
                        l_425 = (((**g_441) & p_21) , (*g_72));

                        ;
                        (*l_466) = l_478;
                        l_469 = (void*)0;

                        ;
                    }
                    else
                    {
                        (*l_425) = func_37((*l_469), g_89);

                        ;
                        p_20 = ((*l_469) = ((p_22 , (l_494 == l_495)) , (safe_rshift_func_uint16_t_u_u((*l_469), 13))));
                    }

                    ;
                    ;
                    ;
                }
                else
                {
                    short *l_506 = &g_126;
                    if ((safe_add_func_uint16_t_u_u((((((((***l_393) = (safe_rshift_func_uint16_t_u_u(p_20, 8))) ^ (((*g_73) < p_22) & (safe_lshift_func_int8_t_s_u(l_463, ((safe_rshift_func_int8_t_s_u((*g_252), 0)) , 0x0EL))))) & ((-9L) | (p_21 , ((*l_506) = 0xDE0FL)))) == g_105) ^ l_463) >= l_478), p_22)))
                    {
                        if (g_89)
                            goto lbl_507;
                        (*l_425) = 0x35780613L;
                        return l_508;
                    }
                    else
                    {
                        (*g_72) = l_425;

                        ;
                        l_436 = (*g_72);

                        ;
                    }

                    ;
                    ;
                    if (g_132)
                        goto lbl_509;
lbl_509:
                    (*g_72) = (void*)0;

                    ;
                    (*g_72) = &p_20;

                    ;
                    p_20 = 0L;
                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
            for (g_460 = 0; (g_460 <= 16); ++g_460)
            {
                int *l_521 = (void*)0;
                int ***l_522 = &g_72;
                char l_550 = 7L;
                unsigned l_558 = 0xF101AF51L;
                if (l_463)
                {
                    unsigned l_516 = 6UL;
                    for (g_91 = (-9); (g_91 != 34); g_91 = safe_add_func_uint32_t_u_u(g_91, 4))
                    {
                        (*l_466) = (safe_sub_func_int16_t_s_s((g_458 ^ (!(p_20 = 0x42ED20D2L))), l_516));
                    }
                }
                else
                {
                    int l_519 = (-9L);
                    if ((safe_add_func_int8_t_s_s(func_49(l_463, l_519, p_19), (l_520 == (void*)0))))
                    {
                        (*g_72) = l_521;

                        ;
                        return p_21;
                    }
                    else
                    {
                        unsigned short l_527 = 0x7C36L;
                        short ***l_530 = &g_358;
                        (*l_466) = (p_22 == ((*g_442) = (l_463 = (*l_425))));
                        (*l_466) = ((((((g_173 , p_20) ^ (*g_252)) , p_22) < g_462) && g_91) != (l_522 == (g_355 , l_523)));
                        l_519 = (safe_add_func_uint32_t_u_u(func_49((*l_466), ((&l_392 == (((((safe_unary_minus_func_int8_t_s((l_527 ^ (safe_sub_func_uint16_t_u_u((+(l_519 <= p_20)), ((*g_73) < (0xE8L && (***l_522)))))))) && p_21) | p_19) > (*l_425)) , l_530)) != 0xC976L), (**g_358)), g_85));
                    }
                    if (p_20)
                        continue;
                }
                for (g_89 = (-3); (g_89 <= 25); g_89++)
                {
                    int **l_533 = (void*)0;
                    int **l_534 = &l_425;
                    int *l_547 = &g_92;
                    unsigned char *l_548 = &g_105;
                    unsigned char *l_549 = &g_87;
                    short ***l_556 = &g_358;
                    unsigned l_557 = 0x7F4B088EL;
                }
            }
            for (p_20 = 0; (p_20 > (-27)); p_20--)
            {
                int *l_562 = &l_402;
                (*l_559) = (*g_73);
                (**l_523) = (*g_72);
                (*g_72) = l_562;

                ;
            }

            ;
        }


        ;
        ;
        p_20 = (((**g_358) && (((void*)0 == l_563) && p_20)) & ((*g_252) = ((void*)0 == &p_19)));
    }
    else
    {
        l_466 = (void*)0;

        ;
    }


    ;
    ;
    return (*l_436);


}







static unsigned char func_24(int p_25)
{
    unsigned char l_34 = 1UL;
    int ****l_147 = (void*)0;
    int *l_150 = &g_2;
    int **l_149 = &l_150;
    int ***l_148 = &l_149;
    unsigned short *l_151 = (void*)0;
    unsigned short *l_152 = (void*)0;
    unsigned short l_153 = 0x27E8L;
    int *l_154 = &g_155;
    unsigned char *l_164 = &g_105;
    char *l_172 = &g_173;
    unsigned char *l_174 = &g_89;
    char l_282 = (-1L);
    short *l_341 = &g_126;
    short **l_340 = &l_341;
    int ***l_367 = &l_149;
    (*l_154) = (func_26(p_25, g_2, (func_32(l_34) != ((*l_154) = (((l_153 = ((&g_72 != (l_148 = &g_72)) & p_25)) || g_2) >= 0x2AFDL))), p_25, p_25) ^ (-1L));

    ;
    ;
    if (g_85)
        goto lbl_159;
lbl_159:
    (*g_72) = (*g_72);
    if ((safe_add_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_s((((*l_164) = g_91) < ((safe_unary_minus_func_uint8_t_u(((*l_174) = (0xB6CBL != (safe_mod_func_uint32_t_u_u(g_87, (safe_mod_func_uint16_t_u_u(((0x350EL | p_25) , (g_87 & (((l_152 == (void*)0) > ((safe_div_func_int8_t_s_s(((*l_172) = p_25), (-1L))) <= 248UL)) & p_25))), 65528UL)))))))) , 0x28L)), (**l_149))) != (**l_149)) <= p_25) <= p_25), (*l_150))))
    {
        int l_180 = 1L;
        unsigned *l_183 = &g_132;
        unsigned *l_184 = &g_104;
        int l_185 = 0x95938EECL;
        int *l_186 = &g_95;
        (*l_154) = (((safe_unary_minus_func_int32_t_s(func_26(p_25, p_25, func_26(func_37((p_25 , p_25), (**l_149)), ((*l_184) = ((((((*l_183) = ((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((l_180 | p_25), 6)) < (safe_lshift_func_uint16_t_u_u(g_173, 4))), 0x053BL)) , g_104)) , g_2) , g_92) >= g_105) , 0x5574C4D6L)), p_25, (*l_150), g_126), p_25, l_185))) && 0x0EBC1338L) == g_2);
        (*l_154) = 0xC975FB2DL;
        l_186 = (*g_72);

        ;
    }
    else
    {
        int l_187 = 5L;
        char *l_316 = &g_173;
        unsigned l_353 = 0x048F8E37L;
        int ***l_368 = &g_72;
        short *l_379 = &g_85;
        if (l_187)
        {
            l_187 = (p_25 = (**l_149));
        }
        else
        {
            p_25 = l_187;
        }
        if (p_25)
        {
            short l_215 = 3L;
            unsigned l_216 = 4294967295UL;
            unsigned short l_307 = 0xEF5EL;
            int *l_354 = &g_57;
            unsigned char **l_361 = (void*)0;
            unsigned char **l_362 = &l_164;
            for (g_132 = 0; (g_132 == 24); g_132++)
            {
                unsigned l_200 = 2UL;
                int *l_203 = &g_95;
                short *l_214 = &g_85;
                unsigned short *l_217 = &g_91;
            }
            if ((((**l_148) = &p_25) != &l_187))
            {
                char l_230 = 0L;
                unsigned char *l_337 = &g_105;
                unsigned *l_338 = &l_216;
                int l_339 = 0x0DE0AF28L;
                for (g_89 = (-18); (g_89 < 40); g_89 = safe_add_func_uint32_t_u_u(g_89, 3))
                {
                    int l_231 = (-1L);
                    int l_247 = (-1L);
                    for (p_25 = 0; (p_25 == (-9)); p_25--)
                    {
                        unsigned l_232 = 4294967295UL;
                        short *l_235 = &l_215;
                        unsigned *l_244 = (void*)0;
                        unsigned *l_245 = (void*)0;
                        unsigned *l_246 = &g_104;
                        char ***l_248 = (void*)0;
                        char ***l_249 = (void*)0;
                        char ***l_250 = (void*)0;
                        unsigned short *l_259 = &l_153;
                        int l_272 = (-5L);
                        short *l_280 = (void*)0;
                        short *l_281 = &g_85;
                        int *l_283 = &l_231;
                        l_187 = (safe_sub_func_int32_t_s_s((((g_85 , 1UL) , ((p_25 | (((safe_div_func_uint8_t_u_u((g_85 ^ (g_173 = 0xC0L)), 0x32L)) < (safe_rshift_func_uint8_t_u_u((l_231 = (safe_sub_func_int8_t_s_s(func_26(func_26(p_25, l_230, (p_25 , l_215), g_155, g_87), p_25, g_104, p_25, g_132), p_25))), g_92))) , 7UL)) >= l_232)) , (-10L)), g_91));
                        g_251 = ((safe_lshift_func_uint8_t_u_u(1UL, ((((1UL >= ((*l_235) = (-6L))) == ((l_187 | 0xADL) || ((func_26((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(func_49(g_105, (safe_div_func_uint16_t_u_u(func_26(g_105, ((*l_246) = g_173), (*l_150), l_247, g_95), p_25)), g_89), p_25)) ^ l_187) > 0x7D6BC24CL), p_25)), l_216)), l_216, l_232, g_85, l_187) > p_25) , 65535UL))) , g_92) ^ p_25))) , (void*)0);

                        ;
                        l_187 = (l_187 != ((safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((g_132 = (safe_rshift_func_uint16_t_u_s((!((*l_259) = g_155)), 10))) >= (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((!0x42L), ((**g_72) ^ (((safe_lshift_func_int16_t_s_s((g_57 >= (safe_div_func_int32_t_s_s(((*l_283) = ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_272 = (~(*g_252))), ((*l_164) = (safe_sub_func_uint32_t_u_u(4294967295UL, (((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s((((func_26(((((*l_281) = ((*l_235) = ((0xC9L | 0UL) != p_25))) && g_85) <= g_57), p_25, g_92, l_230, p_25) != g_173) <= 9L) && (*g_252)))), l_187)) , g_89) & l_282)))))), 0)) , p_25)), l_230))), 8)) ^ (-4L)) , g_95)))), 4))), g_91)), (*g_252))) & g_173));
                    }
                }

                ;
                (**g_72) = (safe_div_func_uint8_t_u_u(p_25, ((safe_mod_func_int8_t_s_s((0xC992L == (((safe_div_func_uint8_t_u_u(255UL, (l_187 || (((p_25 < ((*g_252) = (p_25 , (safe_rshift_func_int8_t_s_u(p_25, l_187))))) == (safe_rshift_func_int16_t_s_u(p_25, p_25))) != 4294967295UL)))) > 0x9D5EL) >= 0xBFBAL)), l_187)) , (*g_252))));
                if ((((l_230 , (*g_252)) , (g_89 > (((safe_add_func_int8_t_s_s(l_216, (*g_252))) & (safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((*g_73) > (p_25 > l_215)), 14)), 7))) , p_25))) , 0L))
                {
                    unsigned *l_306 = &l_216;
                    unsigned short **l_308 = &l_151;
                    int l_309 = (-1L);
                    (*g_73) = ((safe_lshift_func_int16_t_s_s(l_187, 8)) != g_104);
                    (*l_154) = (safe_rshift_func_uint16_t_u_s(func_37((safe_add_func_uint32_t_u_u((l_187 != ((((*l_306) = p_25) & func_49(g_91, p_25, ((p_25 , 0x1DL) && (l_307 ^ (((*l_308) = &g_91) == &l_307))))) , l_309)), 0xEBE96E64L)), g_126), p_25));

                    ;
                    ;
                    (**l_148) = (*g_72);
                }
                else
                {
                    unsigned short **l_313 = &l_152;
                    unsigned short *l_317 = &g_91;
                    int l_318 = 0x2929E3FCL;
                    unsigned *l_331 = &g_132;
                    unsigned char **l_334 = (void*)0;
                    unsigned char **l_335 = (void*)0;
                    unsigned char **l_336 = &l_174;
                    short **l_342 = &l_341;
                    short ***l_343 = &l_340;
                    short **l_345 = &l_341;
                    short ***l_344 = &l_345;
                    if ((l_216 != ((safe_unary_minus_func_uint8_t_u(((func_37(p_25, ((*l_317) = ((((safe_mod_func_int8_t_s_s((l_230 && (((((*l_313) = &g_91) == (void*)0) <= 0x7BL) && (0xEBL >= (((void*)0 == l_316) > g_105)))), p_25)) , l_187) , l_187) < p_25))) <= l_318) < p_25))) , g_173)))
                    {
                        short l_321 = 1L;
                        unsigned *l_322 = &g_104;
                        (*l_154) = (((*l_322) = ((safe_add_func_int16_t_s_s((p_25 < p_25), ((g_85 || g_91) >= (l_321 = 0xDD63B8A3L)))) != p_25)) , ((*g_73) ^ (**g_72)));
                    }
                    else
                    {
                        (*g_73) = (*g_73);
                    }

                    ;
                    ;
                    l_187 = (func_49(((l_339 = (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((p_25 , (safe_div_func_uint16_t_u_u(((***l_148) = (((*l_331) = p_25) == (safe_lshift_func_int16_t_s_u((g_95 ^ 0xF1L), 6)))), (g_104 || l_187)))), 0xECL)), (((*l_336) = (void*)0) == l_337))), l_230)) , l_338) == &l_216)) && p_25), (*g_252), g_85) == g_87);

                    ;
                    (*l_344) = ((*l_343) = (l_342 = l_340));
                }

                ;
                ;
                ;
                ;
            }
            else
            {
                int *l_352 = &g_57;
                if (func_49((((**g_72) != p_25) , p_25), ((((((((*l_154) = 0L) , &l_216) != &g_132) > ((*l_164) = (safe_mod_func_uint16_t_u_u(((((*l_174) = (l_187 < ((safe_add_func_uint8_t_u_u(((((((*l_352) = (safe_rshift_func_uint8_t_u_u(0x27L, func_49((((g_2 , g_91) , &l_151) == (void*)0), p_25, l_216)))) || g_57) != g_126) > g_92) || 0x848DC6E2L), p_25)) ^ l_353))) | 8UL) > 1L), g_173)))) <= 0xE8L) , 0L) , (-1L)), g_92))
                {
                    short **l_360 = &l_341;
                    int l_365 = 0x72066006L;
                    if (l_353)
                    {
                        (**l_148) = l_354;

                        ;
                        (***l_148) = ((((g_355 ^ (!g_2)) | (((void*)0 == &g_85) , p_25)) | 0xF62FL) , 0xCD2D16CAL);
                    }
                    else
                    {
                        unsigned l_366 = 4294967289UL;
                        (*l_352) = (g_358 != (l_360 = l_360));
                        p_25 = ((**g_72) == (((l_361 == l_362) < ((safe_rshift_func_int8_t_s_s((*l_352), l_365)) ^ ((l_366 < (l_367 != l_368)) < (0xA3CA5941L < p_25)))) , p_25));
                    }

                    ;
                }
                else
                {
                    (**l_368) = (**l_367);

                    ;
                }

                ;
            }

            ;
            ;
            ;
            ;
            ;
            for (g_85 = 21; (g_85 < (-8)); g_85 = safe_sub_func_int16_t_s_s(g_85, 8))
            {
                unsigned l_378 = 0x66B62382L;
                (*l_154) = (*g_73);
                for (g_91 = 13; (g_91 <= 60); g_91 = safe_add_func_int16_t_s_s(g_91, 5))
                {
                    unsigned char *l_375 = &l_34;
                    if ((**g_72))
                        break;
                    p_25 = ((safe_lshift_func_int8_t_s_u(func_26(((l_375 = (void*)0) != ((*l_362) = &g_87)), p_25, (safe_mod_func_uint8_t_u_u(0xB5L, g_126)), ((l_378 = 0xA89AF6DFL) , 0x83L), ((p_25 < (p_25 ^ 4294967295UL)) > p_25)), 0)) >= p_25);

                    ;
                    ;
                    (*g_72) = (*g_72);
                    p_25 = (((void*)0 != l_379) >= 254UL);
                }
            }

            ;
        }
        else
        {
            g_57 = (***l_367);
        }

        ;
        ;
        ;
        ;
        ;
        ;
        return p_25;


    }
    return g_355;
}







static char func_26(unsigned p_27, unsigned p_28, unsigned p_29, char p_30, short p_31)
{
    unsigned short l_156 = 65528UL;
    int *l_157 = &g_95;
    unsigned short l_158 = 0xAE86L;
    (*l_157) = l_156;
    return l_158;
}







static unsigned func_32(unsigned p_33)
{
    unsigned short l_46 = 0xCDF2L;
    int l_48 = 9L;
    short *l_125 = &g_126;
    if (p_33)
    {
        short l_47 = 0L;
        int *l_58 = &g_57;
        unsigned *l_103 = &g_104;
        (*l_58) = ((safe_div_func_int16_t_s_s(((((0xD9L > ((((*l_103) = (!(func_37(((*l_58) = (safe_mod_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(l_46, ((g_2 , p_33) , 0xCAL))) ^ (l_48 = l_47)), func_49(l_46, ((p_33 == (+(l_47 > g_2))) == g_2), g_2))) , g_2), g_2))), g_2) <= g_92))) , (*l_58)) != p_33)) != 0x24L) , 0x79L) && 0x21L), g_2)) <= g_105);

        ;
    }
    else
    {
        short *l_108 = (void*)0;
        short *l_109 = &g_85;
        int l_114 = 1L;
        unsigned *l_131 = &g_132;
        int *l_133 = &g_95;
        (*l_133) = ((safe_rshift_func_int16_t_s_s(((*l_109) = p_33), 11)) >= (safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s(l_114, (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s((p_33 & func_49((((*l_133) = ((**g_72) & (safe_lshift_func_int16_t_s_s((((void*)0 == l_125) == func_49((safe_div_func_uint16_t_u_u(((+(p_33 && (func_49(((((*l_131) = g_57) != p_33) != 0UL), p_33, l_114) != l_114))) , 0UL), g_126)), g_95, p_33)), g_105)))) , g_92), l_48, p_33)), 9L)), 0x83BDBB17L)), 1L)), g_104)))) || (-1L)), g_2)));
        (*g_72) = &l_114;

        ;
        (*g_72) = (void*)0;

        ;
        (*l_133) = (2L <= ((safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((*l_109) = (g_91 , ((+func_49((safe_unary_minus_func_int8_t_s(((((safe_div_func_int32_t_s_s(func_37((*l_133), p_33), (safe_lshift_func_uint16_t_u_s((l_46 != (safe_add_func_uint16_t_u_u((g_92 && (p_33 <= ((safe_mod_func_uint16_t_u_u(65535UL, 1L)) != l_48))), g_105))), g_2)))) && p_33) , p_33) > l_48))), g_2, g_105)) | g_104))), g_126)) ^ 5UL), l_48)) , p_33));

        ;
    }

    ;
    return p_33;
}







static char func_37(int p_38, unsigned short p_39)
{
    char l_59 = 1L;
    int *l_60 = &g_57;
    (*l_60) = l_59;
    for (p_38 = 0; (p_38 == 26); p_38 = safe_add_func_uint8_t_u_u(p_38, 2))
    {
        int **l_63 = &l_60;
        (*l_63) = &g_57;

        ;
        (*l_63) = &p_38;

        ;
        for (l_59 = (-21); (l_59 >= (-4)); l_59++)
        {
            int *l_102 = &g_95;
            for (g_57 = 0; (g_57 < (-3)); --g_57)
            {
                int *l_69 = &g_2;
                int **l_68 = &l_69;
                if (g_57)
                    break;
                if (((((*l_63) = &g_57) == ((*l_68) = &g_2)) >= 0xABL))
                {
                    int l_76 = (-9L);
                    unsigned char *l_86 = &g_87;
                    unsigned char *l_88 = &g_89;
                    unsigned short *l_90 = &g_91;
                    int *l_93 = (void*)0;
                    int *l_94 = &g_95;
                    (*l_94) = (((*l_90) = ((safe_add_func_uint16_t_u_u((((g_72 != (void*)0) | (safe_lshift_func_uint8_t_u_u(l_76, ((*l_88) = ((*l_86) = (!((p_38 | g_57) | (safe_rshift_func_uint8_t_u_u(((+((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(g_57, (safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_uint8_t_u((**l_63))))))), ((*l_60) == ((g_85 , l_60) != (void*)0)))) , p_38)) || g_85), p_38))))))))) | g_2), g_2)) , g_89)) < g_92);
                    return g_91;
                }
                else
                {
                    int *l_98 = &g_95;
                    (*g_72) = ((*l_63) = l_60);

                    ;
                    if (((*l_98) = (safe_mod_func_uint16_t_u_u(0x1234L, p_38))))
                    {
                        (*g_72) = &p_38;

                        ;
                    }
                    else
                    {
                        int ***l_99 = &l_68;
                        (*l_99) = &g_73;

                        ;
                        return g_85;
                    }

                    ;
                    for (g_85 = 0; (g_85 < (-28)); g_85 = safe_sub_func_uint16_t_u_u(g_85, 6))
                    {
                        (*l_63) = &p_38;

                        ;
                    }

                    ;
                }

                ;
                (*g_72) = l_102;

                ;
            }
        }

        ;
        (*g_72) = (*g_72);
    }

    ;
    return g_89;
}







static unsigned char func_49(int p_50, char p_51, short p_52)
{
    int *l_53 = &g_2;
    int *l_55 = &g_2;
    int **l_54 = &l_55;
    int *l_56 = &g_57;
    (*l_54) = (l_53 = l_53);
    (*l_56) = (*l_55);
    (*l_54) = (*l_54);
    (*l_56) = (**l_54);
    return (*l_55);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
