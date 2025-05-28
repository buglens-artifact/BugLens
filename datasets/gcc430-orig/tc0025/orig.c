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



static unsigned g_6 = 0x1BD97A88L;
static int g_14 = 0L;
static unsigned short g_34 = 0xB57AL;
static int g_57 = 0L;
static int *g_56 = &g_57;
static short g_73 = 0L;
static int g_79 = 5L;
static short g_97 = 0xDC51L;
static int *g_101 = (void*)0;
static int **g_109 = &g_56;
static char g_180 = 0L;
static unsigned char g_184 = 0x1BL;
static unsigned char g_190 = 0xF2L;
static unsigned char g_193 = 0x15L;
static unsigned char g_249 = 0x53L;
static unsigned short g_250 = 0xAEADL;
static char g_331 = 0xF0L;
static int g_333 = 0x3F64C53BL;
static char g_340 = (-10L);
static short g_345 = 0x7BAAL;
static short g_346 = 0xBF24L;
static short g_353 = 0x1B0DL;
static int g_356 = 3L;
static unsigned g_357 = 0UL;
static int ***g_361 = (void*)0;
static int ****g_360 = &g_361;
static unsigned g_396 = 0x77CBA12CL;
static unsigned short g_448 = 65535UL;
static unsigned g_548 = 0UL;
static int g_610 = 0L;
static int g_772 = 0xCE1C3F0FL;
static int g_793 = 0x1DB8265AL;
static int g_794 = (-1L);
static int g_827 = 8L;
static char g_832 = 1L;
static unsigned g_858 = 0xA9D0E517L;
static unsigned g_917 = 0x242E7117L;
static short **g_942 = (void*)0;
static short ***g_941 = &g_942;
static unsigned short *g_943 = &g_448;
static unsigned short g_1033 = 0UL;
static unsigned short g_1290 = 0xC68DL;
static int g_1343 = (-8L);
static unsigned char g_1357 = 0xFBL;



static unsigned func_1(void);
static int * func_2(int * p_3);
static int * func_4(char p_5);
static short func_7(unsigned short p_8, int * p_9, unsigned char p_10, int * p_11);
static int * func_15(unsigned p_16, unsigned p_17);
static unsigned func_18(int * p_19, int * p_20);
static int * func_21(int * p_22, char p_23, int * p_24, int p_25);
static int * func_26(int * p_27, unsigned p_28, int * p_29, unsigned short p_30);
static char func_37(unsigned p_38, unsigned p_39, int * p_40, char p_41, int * p_42);
static unsigned func_44(unsigned char p_45, unsigned short p_46, unsigned short p_47, unsigned short * p_48, int ** p_49);
static unsigned func_1(void)
{
    unsigned l_1376 = 0x43AE9FB8L;
    (*g_109) = func_2(func_4(g_6));
    return l_1376;
}







static int * func_2(int * p_3)
{
    unsigned short **l_1374 = &g_943;
    unsigned short ***l_1373 = &l_1374;
    int l_1375 = (-8L);
    (*l_1373) = (void*)0;
    l_1375 &= 0x9DF3EF61L;
    return (*g_109);
}







static int * func_4(char p_5)
{
    int l_12 = 0x4D8A94B2L;
    int *l_13 = &g_14;
    int *l_32 = &g_14;
    int **l_31 = &l_32;
    unsigned short *l_33 = &g_34;
    int *l_1045 = &g_356;
    (*l_13) = (func_7(l_12, l_13, g_6, func_15(func_18(func_21(func_26(&g_14, g_6, l_13, ((*l_33) = (((*l_31) = (void*)0) != (void*)0))), g_610, l_13, g_331), l_1045), g_333)) & 0x9F57L);
    return (*g_109);
}







static short func_7(unsigned short p_8, int * p_9, unsigned char p_10, int * p_11)
{
    unsigned l_1279 = 0x89EF8096L;
    unsigned char *l_1280 = (void*)0;
    unsigned char *l_1281 = &g_190;
    int *l_1293 = &g_356;
    int l_1299 = (-1L);
    char l_1306 = 0xB8L;
    int l_1324 = 0x92F998F9L;
    short *l_1368 = &g_345;
    short **l_1369 = &l_1368;
    short *l_1370 = &g_345;
    short **l_1371 = &l_1370;
    unsigned *l_1372 = &g_357;
    if ((safe_add_func_int32_t_s_s((*p_9), (((l_1279 < ((*l_1281) = g_858)) > (!((safe_unary_minus_func_int8_t_s(0x0AL)) != (l_1279 < l_1279)))) && ((*l_1281) = 0xB8L)))))
    {
        unsigned l_1283 = 3UL;
        int l_1284 = 1L;
        l_1283 ^= 0x8E600BD6L;
        l_1284 |= (*p_9);
    }
    else
    {
        int *l_1285 = (void*)0;
        int l_1347 = 0L;
        l_1285 = (*g_109);
        for (g_249 = (-29); (g_249 >= 1); g_249 = safe_add_func_int16_t_s_s(g_249, 5))
        {
            short l_1294 = 0xBEF0L;
            int *l_1295 = &g_14;
            int *l_1296 = (void*)0;
            int *l_1297 = (void*)0;
            int *l_1298 = &g_57;
            int *l_1300 = &g_79;
            int *l_1301 = &g_79;
            int *l_1302 = &g_79;
            int *l_1303 = &g_57;
            int *l_1304 = (void*)0;
            int *l_1305 = &g_14;
            int *l_1307 = (void*)0;
            int *l_1308 = &g_772;
            int *l_1309 = &g_79;
            int *l_1310 = &g_356;
            int *l_1311 = (void*)0;
            int *l_1312 = &g_772;
            int *l_1313 = &g_356;
            int *l_1314 = &l_1299;
            int *l_1315 = (void*)0;
            int l_1316 = (-1L);
            int *l_1317 = &g_79;
            int *l_1318 = (void*)0;
            int *l_1319 = &g_772;
            int *l_1320 = (void*)0;
            int *l_1321 = &g_14;
            int *l_1322 = &l_1299;
            int *l_1323 = &l_1316;
            int l_1325 = 0x4A2D6742L;
            int *l_1326 = &l_1299;
            int *l_1327 = &g_356;
            int *l_1328 = &g_772;
            int *l_1329 = &l_1299;
            int *l_1330 = &l_1316;
            int *l_1331 = &l_1325;
            int *l_1332 = &l_1299;
            int *l_1333 = &g_57;
            int *l_1334 = &l_1299;
            int *l_1335 = &l_1299;
            int *l_1336 = &l_1299;
            int *l_1337 = (void*)0;
            int *l_1338 = (void*)0;
            int *l_1339 = &l_1325;
            int *l_1340 = &g_772;
            int *l_1341 = &g_772;
            int *l_1342 = &g_356;
            int *l_1344 = &g_772;
            int *l_1345 = &g_14;
            int *l_1346 = &l_1299;
            int *l_1348 = &l_1324;
            int *l_1349 = (void*)0;
            int *l_1350 = (void*)0;
            int *l_1351 = &g_57;
            int *l_1352 = &l_1316;
            int *l_1353 = &l_1324;
            int *l_1354 = (void*)0;
            int l_1355 = 0xAEE909C0L;
            int *l_1356 = &g_57;
            (*p_9) ^= (safe_mul_func_int16_t_s_s(p_8, (g_1290 <= p_10)));
            for (g_180 = (-14); (g_180 < 18); g_180 = safe_add_func_uint16_t_u_u(g_180, 3))
            {
                return p_8;
            }
            (*g_109) = l_1293;
            g_1357++;
        }
        (*l_1293) |= (*p_9);
        (*p_9) ^= (*l_1293);
    }
    (*p_9) |= (*l_1293);
    (*p_9) ^= (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_346, (((*l_1372) = (safe_mul_func_uint8_t_u_u(((&g_548 != (void*)0) < (*l_1293)), (((*l_1369) = l_1368) == ((*l_1371) = l_1370))))) == g_184))), (g_333 <= ((*l_1281) = p_8)))) & (*l_1293)), (*g_943)));
    (*p_9) |= (*l_1293);
    return (*l_1293);
}







static int * func_15(unsigned p_16, unsigned p_17)
{
    short l_1057 = 0x9456L;
    int l_1082 = 0xE51264D9L;
    char *l_1157 = &g_340;
    int l_1189 = 1L;
    int l_1254 = 0x7AF08957L;
    char **l_1258 = &l_1157;
    char ***l_1257 = &l_1258;
    short **l_1259 = (void*)0;
    short *l_1260 = &g_97;
    unsigned short *l_1267 = (void*)0;
    unsigned short *l_1268 = &g_1033;
    unsigned short **l_1273 = (void*)0;
    unsigned short **l_1274 = &l_1267;
    int **l_1275 = (void*)0;
    int *l_1276 = &g_79;
    for (g_353 = 16; (g_353 != 4); g_353 = safe_sub_func_int16_t_s_s(g_353, 6))
    {
        char l_1051 = 0x16L;
        int l_1052 = (-3L);
        int l_1101 = (-1L);
        unsigned short l_1103 = 5UL;
        unsigned l_1143 = 4294967288UL;
        int *l_1165 = &g_356;
        int l_1206 = 3L;
        int l_1212 = 0x79921548L;
        unsigned l_1247 = 0xB6253F52L;
        l_1052 &= (l_1051 != p_16);
        for (g_346 = 0; (g_346 >= (-20)); g_346--)
        {
            int l_1102 = (-1L);
            int l_1138 = 0x757CBBADL;
            int l_1146 = 0x6FD738A5L;
            unsigned short *l_1148 = (void*)0;
            int ****l_1150 = &g_361;
            int *l_1166 = &g_14;
            int *l_1167 = &g_356;
            int *l_1168 = &g_79;
            int *l_1169 = &l_1082;
            int *l_1170 = &l_1052;
            int *l_1171 = &l_1052;
            int *l_1172 = &l_1082;
            int *l_1173 = &g_79;
            int *l_1174 = &l_1101;
            int *l_1175 = &l_1138;
            int *l_1176 = &l_1138;
            int *l_1177 = &l_1138;
            int *l_1178 = &g_57;
            int *l_1179 = &l_1082;
            int *l_1180 = &g_356;
            int *l_1181 = (void*)0;
            int *l_1182 = (void*)0;
            int *l_1183 = (void*)0;
            int *l_1184 = &l_1138;
            int *l_1185 = &g_356;
            int *l_1186 = &g_57;
            char l_1187 = 1L;
            int *l_1188 = &g_57;
            int *l_1190 = &l_1082;
            int *l_1191 = &l_1138;
            int *l_1192 = (void*)0;
            int *l_1193 = &l_1052;
            int *l_1194 = &l_1082;
            int *l_1195 = &g_79;
            int *l_1196 = &l_1138;
            int *l_1197 = &g_772;
            int *l_1198 = &g_14;
            int *l_1199 = (void*)0;
            int *l_1200 = (void*)0;
            int *l_1201 = &l_1189;
            int *l_1202 = &g_57;
            int *l_1203 = &g_79;
            int *l_1204 = (void*)0;
            int *l_1205 = &l_1138;
            int *l_1207 = &l_1052;
            int *l_1208 = &g_79;
            int *l_1209 = &g_356;
            int *l_1210 = &l_1206;
            int *l_1211 = (void*)0;
            int *l_1213 = (void*)0;
            int *l_1214 = &g_79;
            int *l_1215 = &g_79;
            int *l_1216 = (void*)0;
            int *l_1217 = (void*)0;
            int *l_1218 = &l_1146;
            int *l_1219 = &g_772;
            int *l_1220 = &g_57;
            int *l_1221 = &l_1146;
            int *l_1222 = &g_79;
            int *l_1223 = &l_1052;
            int *l_1224 = &g_57;
            int l_1225 = 0x730F87C9L;
            int *l_1226 = &l_1212;
            int *l_1227 = (void*)0;
            int *l_1228 = &l_1138;
            int *l_1229 = &l_1225;
            int *l_1230 = (void*)0;
            int *l_1231 = &l_1189;
            int *l_1232 = &g_57;
            int *l_1233 = &l_1206;
            int *l_1234 = &g_772;
            int *l_1235 = &l_1052;
            int *l_1236 = (void*)0;
            int *l_1237 = &g_772;
            int *l_1238 = &l_1082;
            int *l_1239 = (void*)0;
            int *l_1240 = &l_1082;
            int *l_1241 = &g_356;
            int *l_1242 = &l_1082;
            int *l_1243 = &g_772;
            int *l_1244 = &l_1146;
            int *l_1245 = &l_1206;
            int *l_1246 = &l_1206;
            for (g_832 = 18; (g_832 != 24); g_832 = safe_add_func_int8_t_s_s(g_832, 2))
            {
                int l_1065 = 0x87D27402L;
                short l_1067 = 0L;
                int l_1128 = 7L;
                unsigned short *l_1147 = &l_1103;
                int *l_1162 = &g_772;
                int *l_1163 = (void*)0;
                int *l_1164 = (void*)0;
            }
            l_1165 = (*g_109);
            l_1247--;
        }
    }
    (*g_109) = func_26(&l_1082, (safe_mul_func_uint8_t_u_u(0x54L, (safe_mul_func_int16_t_s_s(l_1189, ((*l_1260) = (l_1254 == (((safe_sub_func_uint16_t_u_u((*g_943), (&l_1157 == ((*l_1257) = &l_1157)))) & ((l_1259 != l_1259) <= 0xDA3D792FL)) < l_1057))))))), &l_1082, (*g_943));
    (*l_1276) = (safe_mod_func_int8_t_s_s(g_1033, 255UL));
    return (*g_109);
}







static unsigned func_18(int * p_19, int * p_20)
{
    char l_1048 = 7L;
    (*g_109) = p_20;
    for (g_827 = 0; (g_827 == 12); ++g_827)
    {
        return l_1048;
    }
    return g_448;
}







static int * func_21(int * p_22, char p_23, int * p_24, int p_25)
{
    short *l_643 = &g_345;
    short *l_644 = (void*)0;
    short *l_645 = &g_353;
    char *l_646 = (void*)0;
    char *l_647 = &g_340;
    int l_648 = 0x310E1903L;
    int *l_653 = &l_648;
    int l_654 = 0x3382B749L;
    unsigned short l_655 = 65526UL;
    unsigned short *l_679 = &g_250;
    int l_687 = 1L;
    int l_801 = 0x289B1115L;
    int l_983 = 0xB0A36B3CL;
    int l_1022 = (-1L);
    unsigned l_1034 = 4294967295UL;
    int l_1037 = (-4L);
    if ((g_34 & (*l_653)))
    {
        char l_658 = 0L;
        unsigned l_664 = 0xEDA6F041L;
        int l_674 = 0L;
        short l_680 = 7L;
        int **l_707 = &g_101;
        int l_773 = (-2L);
        int l_778 = 0x5D6997D1L;
        int l_824 = 0x568D9AFBL;
        char *l_862 = &g_331;
        short **l_868 = (void*)0;
        int *l_923 = &l_648;
        unsigned short **l_933 = &l_679;
        short l_1030 = 4L;
        unsigned *l_1032 = &g_396;
        for (g_190 = (-2); (g_190 != 32); g_190 = safe_add_func_int16_t_s_s(g_190, 1))
        {
            unsigned char l_659 = 0UL;
            l_658 = (g_340 == 0x48E5L);
            (*l_653) ^= (*p_24);
            if (l_659)
                continue;
        }
        if ((safe_rshift_func_int16_t_s_s((((*l_647) = (safe_lshift_func_uint8_t_u_s(g_250, 0))) >= l_664), (&g_250 == (void*)0))))
        {
            unsigned l_665 = 18446744073709551615UL;
            char l_708 = 4L;
            int l_726 = 0L;
            int l_727 = 0L;
            int l_775 = (-8L);
            int l_795 = 0x3FEAD032L;
            int l_849 = (-5L);
            int l_851 = 1L;
            --l_665;
            for (l_655 = 7; (l_655 == 43); l_655++)
            {
                unsigned short l_675 = 65535UL;
                int *l_676 = &l_648;
                int l_737 = 0x2AB3D2CFL;
                int l_776 = 0L;
                int l_781 = 0xC89D5CF3L;
                int l_791 = 0x56F04516L;
                int l_820 = 1L;
                int l_836 = (-3L);
                int l_856 = 8L;
                int *l_870 = &l_773;
                int *l_871 = &l_836;
                int *l_872 = (void*)0;
                int *l_873 = &l_778;
                int *l_874 = &l_654;
                int *l_875 = (void*)0;
                int *l_876 = &l_775;
                int *l_877 = &g_772;
                int *l_878 = &l_836;
                int *l_879 = (void*)0;
                int *l_880 = &l_773;
                int *l_881 = &l_851;
                int *l_882 = (void*)0;
                int *l_883 = &l_836;
                int *l_884 = &l_727;
                int *l_885 = &l_687;
                int *l_886 = &l_820;
                int *l_887 = &l_836;
                int *l_888 = &l_851;
                int *l_889 = &l_648;
                int *l_890 = &g_79;
                int *l_891 = &l_849;
                int *l_892 = &l_795;
                int *l_893 = (void*)0;
                int *l_894 = &l_851;
                int *l_895 = &l_820;
                int *l_896 = &g_356;
                int *l_897 = &l_820;
                int *l_898 = &l_726;
                int *l_899 = &l_773;
                int *l_900 = &l_820;
                int *l_901 = &g_57;
                int *l_902 = &l_849;
                int *l_903 = &l_775;
                int *l_904 = &g_772;
                int *l_905 = &g_772;
                int *l_906 = &l_791;
                int *l_907 = &l_737;
                int *l_908 = &g_79;
                int *l_909 = &l_856;
                int *l_910 = &l_687;
                int *l_911 = &l_727;
                int *l_912 = &g_57;
                int *l_913 = &l_727;
                int *l_914 = &l_849;
                int *l_915 = &l_820;
                int *l_916 = &g_57;
            }
        }
        else
        {
            unsigned l_930 = 0x3386E59BL;
            unsigned short **l_931 = &l_679;
            int l_957 = 0xA26BFE14L;
            int l_1005 = (-1L);
            int l_1006 = 0x184A5845L;
            int l_1031 = (-9L);
            (*l_923) = (*p_24);
            for (l_658 = 0; (l_658 < (-12)); l_658 = safe_sub_func_int8_t_s_s(l_658, 3))
            {
                char l_932 = 0x16L;
                unsigned char *l_934 = &g_184;
                int **l_944 = &l_923;
                short l_956 = 8L;
                int *l_958 = &g_356;
                int *l_959 = &l_957;
                int *l_960 = &l_687;
                int *l_961 = (void*)0;
                int *l_962 = &g_356;
                int *l_963 = &l_773;
                int *l_964 = &l_957;
                int *l_965 = &g_772;
                int *l_966 = &l_801;
                int *l_967 = (void*)0;
                int *l_968 = &l_674;
                int l_969 = 0x77B84E98L;
                int *l_970 = &l_687;
                int *l_971 = &l_801;
                int *l_972 = &l_801;
                int *l_973 = (void*)0;
                int *l_974 = (void*)0;
                int *l_975 = &l_674;
                int *l_976 = &g_79;
                int l_977 = 6L;
                int *l_978 = &l_674;
                int *l_979 = &g_79;
                int *l_980 = &g_356;
                int *l_981 = (void*)0;
                int *l_982 = &g_356;
                int *l_984 = (void*)0;
                int *l_985 = &l_687;
                int *l_986 = &l_654;
                int *l_987 = &l_977;
                int *l_988 = &l_969;
                int *l_989 = &l_773;
                int *l_990 = &l_977;
                int *l_991 = &l_983;
                int *l_992 = &l_983;
                int *l_993 = &l_801;
                int *l_994 = &l_648;
                int *l_995 = &g_356;
                int *l_996 = &l_773;
                int l_997 = 0x5C53CA29L;
                int *l_998 = &l_648;
                int *l_999 = &g_14;
                int *l_1000 = &g_356;
                int *l_1001 = (void*)0;
                int *l_1002 = &l_648;
                int *l_1003 = &l_687;
                int *l_1004 = &l_773;
                int *l_1007 = &l_983;
                int *l_1008 = &l_654;
                int *l_1009 = (void*)0;
                int *l_1010 = &l_997;
                int *l_1011 = (void*)0;
                int *l_1012 = &g_14;
                int *l_1013 = &l_778;
                int *l_1014 = &g_14;
                int *l_1015 = &g_772;
                int *l_1016 = &l_674;
                int *l_1017 = &l_674;
                int *l_1018 = (void*)0;
                int *l_1019 = (void*)0;
                int *l_1020 = &l_969;
                int *l_1021 = &l_801;
                int *l_1023 = &l_654;
                int *l_1024 = &g_772;
                int *l_1025 = (void*)0;
                int *l_1026 = (void*)0;
                unsigned short l_1027 = 0x1CD1L;
                if ((((*l_934) = (((l_932 = (safe_rshift_func_uint8_t_u_u((g_190 = (((*l_679)++) >= (l_930 &= p_23))), ((&l_868 == (void*)0) >= ((void*)0 != l_931))))) && (!p_23)) | (*l_653))) & (*l_653)))
                {
                    (*l_653) |= ((void*)0 == &g_180);
                    return p_22;
                }
                else
                {
                    char l_953 = (-1L);
                    for (g_180 = 0; (g_180 != (-16)); --g_180)
                    {
                        (*l_923) = ((safe_lshift_func_uint16_t_u_s(l_930, ((void*)0 != &p_24))) <= 0x6551L);
                        (*l_707) = p_22;
                    }
                    (*p_24) ^= (*l_923);
                    l_956 |= ((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(4294967291UL, (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u(l_953, 4)) || (*l_653)), 0)))) >= (*p_24)), (((*l_934) ^= ((((**l_944) > (*l_653)) ^ (safe_mul_func_int16_t_s_s(((*l_645) = (p_25 || (*l_653))), (*l_923)))) || p_25)) >= (*l_653)))) != g_6);
                    if ((**l_944))
                        continue;
                }
                ++l_1027;
            }
            l_1031 = ((*p_24) < (*p_24));
        }
        (*l_923) = (*p_24);
    }
    else
    {
        unsigned l_1038 = 0x72CCCC7BL;
        int *l_1043 = &l_1022;
        (*l_653) = (l_1038 = (l_1034 && (safe_sub_func_uint16_t_u_u(l_1037, 0xAFB4L))));
        for (g_250 = 0; (g_250 > 60); g_250++)
        {
            int *l_1041 = &g_14;
            int *l_1042 = &l_687;
            char l_1044 = 0L;
            p_24 = l_1042;
            (*l_1041) |= ((((l_1044 > (*l_653)) || (*l_653)) < p_23) == (*l_1043));
        }
    }
    (*l_653) = (*p_24);
    return p_22;
}







static int * func_26(int * p_27, unsigned p_28, int * p_29, unsigned short p_30)
{
    unsigned l_58 = 0xB807220BL;
    int **l_59 = &g_56;
    int *l_451 = &g_57;
    unsigned char *l_468 = &g_249;
    int l_469 = 0x6DD12310L;
    int *l_470 = (void*)0;
    int *l_471 = (void*)0;
    int *l_472 = &l_469;
    int *l_473 = &g_14;
    int *l_474 = &g_356;
    int l_475 = 0x69C656FDL;
    int *l_476 = (void*)0;
    int l_477 = (-6L);
    int *l_478 = &l_469;
    int *l_479 = &l_469;
    int *l_480 = &l_469;
    int *l_481 = (void*)0;
    int *l_482 = &g_57;
    int *l_483 = &l_469;
    short l_484 = 0x0C48L;
    int *l_485 = &l_469;
    int l_486 = 0x5AFFB80BL;
    int *l_487 = &l_475;
    int *l_488 = &l_477;
    int *l_489 = &l_486;
    int *l_490 = &l_469;
    int *l_491 = &l_469;
    int *l_492 = &l_486;
    int *l_493 = &g_57;
    int *l_494 = &l_469;
    int l_495 = 0x68C0CF1EL;
    int *l_496 = &g_356;
    int *l_497 = &l_477;
    int *l_498 = &g_14;
    int *l_499 = &l_495;
    int *l_500 = (void*)0;
    int *l_501 = &g_356;
    int *l_502 = &l_486;
    int *l_503 = &g_79;
    int l_504 = 0x6D4962A2L;
    int *l_505 = (void*)0;
    int *l_506 = &l_477;
    int l_507 = (-4L);
    int *l_508 = &l_469;
    int *l_509 = &g_79;
    int *l_510 = &g_79;
    int *l_511 = &g_356;
    int *l_512 = (void*)0;
    int *l_513 = &l_469;
    int l_514 = 0x66703702L;
    int *l_515 = &l_495;
    int *l_516 = (void*)0;
    int *l_517 = &l_504;
    int *l_518 = &l_477;
    int l_519 = 0xCE1D4C38L;
    int *l_520 = &l_507;
    int l_521 = 0L;
    int *l_522 = &l_514;
    int l_523 = 1L;
    int *l_524 = &l_504;
    int *l_525 = (void*)0;
    int *l_526 = &g_57;
    int *l_527 = (void*)0;
    int *l_528 = &l_469;
    int *l_529 = &g_57;
    int *l_530 = &g_57;
    int *l_531 = &g_79;
    int *l_532 = &g_356;
    int *l_533 = (void*)0;
    int *l_534 = &l_477;
    int *l_535 = &l_514;
    int *l_536 = &g_57;
    int *l_537 = &l_469;
    int *l_538 = &g_14;
    int *l_539 = &g_57;
    int l_540 = 0L;
    int *l_541 = &l_540;
    int *l_542 = (void*)0;
    int *l_543 = &g_14;
    int *l_544 = &l_477;
    int *l_545 = (void*)0;
    int *l_546 = (void*)0;
    int *l_547 = &l_475;
    short l_556 = (-1L);
    short l_569 = 1L;
    int *l_635 = &l_504;
    int *l_637 = &g_356;
    int *l_638 = (void*)0;
    (*p_27) = ((safe_add_func_uint16_t_u_u(((g_34 == ((*l_468) = (func_37((safe_unary_minus_func_uint32_t_u(g_6)), func_44(((0xBFL == (safe_add_func_int8_t_s_s(p_30, (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((g_14 = g_6), (g_56 == &g_57))), p_28))))) >= 4294967295UL), l_58, p_28, &g_34, l_59), p_27, g_353, l_451) >= p_28))) | l_58), g_250)) ^ g_190);
    g_548++;
    for (g_249 = 6; (g_249 <= 6); g_249 = safe_add_func_int32_t_s_s(g_249, 4))
    {
        int *l_555 = &l_507;
        int **l_612 = &l_542;
        unsigned l_631 = 4294967295UL;
        if ((**g_109))
            break;
        if (((*p_29) = (safe_lshift_func_uint8_t_u_s(0UL, 6))))
        {
            int l_559 = 0x5CCB1FC8L;
            int *l_568 = (void*)0;
            char l_588 = (-1L);
            unsigned l_594 = 18446744073709551615UL;
            char l_595 = 0xB2L;
            int l_628 = 0xA63FAAD2L;
            (*l_59) = l_555;
            if (func_37(l_556, ((safe_mod_func_uint16_t_u_u((g_356 <= ((safe_mod_func_int8_t_s_s(((((!((4294967295UL & (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(0xD315L, 14)), (*l_515)))) <= g_14)) || 1L) >= 255UL) ^ 0x58L), 0xD8L)) == p_30)), 0x4A5CL)) || p_30), l_568, p_30, p_27))
            {
                unsigned *l_591 = (void*)0;
                unsigned *l_592 = &g_548;
                int l_593 = 0xD6E09609L;
                (*l_517) &= l_569;
                (*l_524) |= (g_353 > ((safe_rshift_func_uint16_t_u_u(p_30, 15)) != ((safe_mod_func_int8_t_s_s(g_357, l_593)) > p_30)));
                (*l_485) = (*p_29);
            }
            else
            {
                int *l_596 = &l_521;
                int *l_597 = &l_521;
                (*l_479) = (*p_29);
                (*g_109) = l_596;
                if ((*p_27))
                    continue;
                if ((*l_555))
                {
                    unsigned short *l_600 = (void*)0;
                    unsigned short *l_601 = &g_34;
                    int l_611 = 0x4021CE86L;
                    unsigned short *l_613 = &g_448;
                    (*l_59) = l_597;
                    (*l_488) = ((*l_539) = (safe_mod_func_uint16_t_u_u((++(*l_601)), ((*l_613) ^= (safe_add_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(0xF2L, g_184)) != 4294967292UL), (g_356 || (((p_28 < p_28) != g_548) | g_353))))))));
                }
                else
                {
                    short *l_614 = &g_73;
                    int l_626 = 1L;
                    int l_627 = 0xD3DC8424L;
                    int l_634 = (-1L);
                    (*l_612) = (*g_109);
                    (*p_29) = (g_357 ^ 0x3EL);
                    (*l_544) ^= ((**l_612) <= ((*l_614) ^= 0xE1CFL));
                    if ((*p_27))
                    {
                        (*l_524) = ((*p_27) &= (safe_sub_func_int16_t_s_s((0xEACEC5DDL <= (*l_508)), (-1L))));
                    }
                    else
                    {
                        int *l_623 = &l_514;
                        char *l_624 = &l_588;
                        char *l_625 = &l_595;
                        int l_629 = 0xCBE153FDL;
                        int l_630 = 0xC2F69CBDL;
                        (*l_513) &= ((*p_27) = (((*l_625) |= (g_249 < (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(func_37(((safe_sub_func_uint8_t_u_u(8UL, p_28)) ^ func_37(p_28, (&g_353 != (void*)0), p_29, ((*l_624) ^= (func_37(p_28, p_28, l_623, (*l_597), (*l_59)) | g_193)), l_623)), p_30, p_29, g_250, p_29), p_30)), p_28)))) & g_250));
                        --l_631;
                        (*l_623) ^= l_634;
                    }
                }
            }
            if ((*l_473))
                break;
        }
        else
        {
            int *l_636 = &g_79;
            return l_636;
        }
        (*g_109) = (l_637 = (void*)0);
        return (*l_59);
    }
    return l_638;
}







static char func_37(unsigned p_38, unsigned p_39, int * p_40, char p_41, int * p_42)
{
    int *l_452 = &g_356;
    int l_463 = 0x3A70F743L;
    l_452 = (void*)0;
    for (g_184 = 28; (g_184 <= 26); g_184--)
    {
        unsigned char l_466 = 2UL;
        unsigned short l_467 = 0x7601L;
        if ((*p_42))
        {
            for (g_97 = (-27); (g_97 <= 27); g_97 = safe_add_func_uint32_t_u_u(g_97, 3))
            {
                char *l_460 = &g_180;
                char *l_461 = &g_340;
                int l_462 = 0xB6BA7CE9L;
                (*g_56) = (safe_unary_minus_func_int8_t_s((((*l_461) = ((*l_460) = (safe_rshift_func_int8_t_s_u((-9L), 5)))) != (l_462 & l_463))));
            }
            if ((*p_42))
                break;
            (*g_109) = (*g_109);
            if ((safe_mul_func_int8_t_s_s(((l_463 = ((l_466 ^ g_250) || g_353)) >= (g_448 = p_39)), g_250)))
            {
                return l_467;
            }
            else
            {
                return p_39;
            }
        }
        else
        {
            return p_38;
        }
    }
    (**g_109) = (**g_109);
    return p_41;
}







static unsigned func_44(unsigned char p_45, unsigned short p_46, unsigned short p_47, unsigned short * p_48, int ** p_49)
{
    int **l_65 = &g_56;
    int **l_68 = (void*)0;
    int l_98 = (-2L);
    unsigned short l_100 = 65535UL;
    int l_183 = 1L;
    unsigned char *l_251 = &g_184;
    unsigned l_289 = 0x5C23C1BAL;
    int *l_404 = (void*)0;
    int *l_405 = &g_79;
    int *l_406 = &g_14;
    int *l_407 = &g_356;
    int *l_408 = &l_183;
    int *l_409 = &g_356;
    int *l_410 = &g_14;
    int *l_411 = &g_356;
    int *l_412 = &l_183;
    int *l_413 = &g_79;
    int l_414 = 0L;
    int l_415 = 0L;
    int *l_416 = &g_79;
    int *l_417 = &g_57;
    int *l_418 = &g_14;
    int *l_419 = &g_356;
    int *l_420 = &l_98;
    int *l_421 = (void*)0;
    int *l_422 = &g_79;
    int l_423 = 0x5776C017L;
    int *l_424 = &g_79;
    int *l_425 = &l_415;
    int *l_426 = &l_183;
    int *l_427 = &g_356;
    int *l_428 = &g_57;
    int *l_429 = (void*)0;
    int *l_430 = &g_57;
    int *l_431 = &l_98;
    int *l_432 = &g_57;
    int *l_433 = &g_356;
    int *l_434 = (void*)0;
    int *l_435 = &g_14;
    int *l_436 = &g_57;
    int *l_437 = &g_57;
    int *l_438 = &l_414;
    int *l_439 = &g_14;
    int *l_440 = &l_183;
    int *l_441 = &l_98;
    int *l_442 = (void*)0;
    int *l_443 = &g_356;
    int *l_444 = &g_79;
    int *l_445 = &l_415;
    int *l_446 = &g_79;
    int l_447 = 0x15CB0287L;
    for (p_46 = 0; (p_46 != 30); p_46++)
    {
        int l_64 = 0xC1A2C9DBL;
        int ***l_66 = (void*)0;
        int ***l_67 = &l_65;
        int *l_69 = &g_14;
        short *l_72 = &g_73;
        int *l_78 = &g_79;
        int l_113 = (-8L);
        int l_120 = 0x2DF00AC9L;
        int l_352 = 0x6930D83EL;
        (*l_69) |= (safe_mul_func_int8_t_s_s(l_64, ((p_49 == (l_68 = ((*l_67) = l_65))) >= (**p_49))));
        (*l_78) |= (safe_mod_func_int16_t_s_s(p_46, (((((*l_72) = g_14) > ((void*)0 == (*p_49))) & (safe_sub_func_uint32_t_u_u(1UL, ((safe_lshift_func_int8_t_s_s((***l_67), 0)) >= (*g_56))))) ^ (**l_68))));
        for (g_14 = 0; (g_14 <= (-17)); g_14 = safe_sub_func_int16_t_s_s(g_14, 8))
        {
            unsigned l_99 = 0xDE470D16L;
        }
    }
    (*l_65) = (*p_49);
    g_448--;
    return p_47;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_610, "g_610", print_hash_value);
    transparent_crc(g_772, "g_772", print_hash_value);
    transparent_crc(g_793, "g_793", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_827, "g_827", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    transparent_crc(g_858, "g_858", print_hash_value);
    transparent_crc(g_917, "g_917", print_hash_value);
    transparent_crc(g_1033, "g_1033", print_hash_value);
    transparent_crc(g_1290, "g_1290", print_hash_value);
    transparent_crc(g_1343, "g_1343", print_hash_value);
    transparent_crc(g_1357, "g_1357", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
