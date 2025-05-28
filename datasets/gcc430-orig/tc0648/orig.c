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



static unsigned long long g_8 = 1UL;
static unsigned char g_9 = 250UL;
static unsigned long long g_13 = 0xB9A733E34B64B5C6LL;
static unsigned long long *g_12 = &g_13;
static unsigned short g_28 = 1UL;
static int g_77 = 0xD2C82F3CL;
static int *g_76 = &g_77;
static unsigned short g_106 = 0xBD8EL;
static unsigned char g_118 = 0xD1L;
static int ***g_123 = (void*)0;
static short g_142 = 2L;
static unsigned char g_144 = 0UL;
static short g_173 = 0x64D1L;
static long long g_175 = 1L;
static unsigned g_210 = 1UL;
static unsigned g_227 = 0xAAABC806L;
static char g_235 = 0xA1L;
static int g_304 = (-6L);
static unsigned g_306 = 0x8FB1DCAFL;
static unsigned short g_361 = 1UL;
static int g_374 = (-3L);
static unsigned g_385 = 18446744073709551615UL;
static char *g_392 = (void*)0;
static char **g_391 = &g_392;
static char ***g_390 = &g_391;
static unsigned long long g_423 = 0xD67E6C5E4E9FEB1DLL;
static long long g_458 = (-2L);
static unsigned g_499 = 0xC23E28EDL;
static long long g_502 = 0x11E62F85C31C4148LL;
static int **g_508 = &g_76;
static int g_518 = 0xB1DF589DL;
static unsigned g_520 = 0x580029A2L;
static unsigned short *g_546 = &g_361;
static unsigned short **g_545 = &g_546;
static int g_592 = 0x16600051L;
static int *g_591 = &g_592;
static unsigned long long g_599 = 18446744073709551615UL;
static int *g_626 = &g_592;
static long long *g_634 = (void*)0;
static long long **g_633 = &g_634;
static short g_696 = (-1L);
static unsigned g_705 = 8UL;
static unsigned long long g_722 = 5UL;
static unsigned char g_782 = 254UL;
static unsigned char **g_908 = (void*)0;
static unsigned char ***g_907 = &g_908;
static unsigned g_972 = 0x45F8BEFAL;
static int g_1077 = 0L;
static unsigned long long g_1139 = 18446744073709551615UL;
static short g_1241 = (-3L);
static char g_1243 = 0xE8L;
static unsigned char g_1247 = 0x4DL;
static short g_1269 = (-2L);
static long long g_1295 = (-3L);
static unsigned short g_1329 = 65535UL;
static short *g_1340 = &g_1269;
static short **g_1339 = &g_1340;
static unsigned long long g_1427 = 18446744073709551615UL;
static int **g_1449 = &g_626;
static unsigned long long *g_1450 = (void*)0;
static int g_1462 = (-1L);



static unsigned long long func_1(void);
static unsigned func_14(int p_15);
static unsigned char func_19(unsigned long long * p_20);
static unsigned long long * func_21(unsigned short p_22, int p_23, long long p_24, int p_25);
static int * func_29(unsigned short p_30, unsigned p_31, unsigned long long * p_32, short p_33, int p_34);
static unsigned long long * func_35(char p_36, unsigned char p_37, unsigned char p_38, long long p_39, unsigned long long * p_40);
static unsigned short func_43(unsigned p_44, char p_45, unsigned short * p_46);
static long long func_61(int p_62, int * p_63, unsigned char p_64);
static unsigned char func_67(int p_68, char p_69, char p_70, int * p_71, unsigned long long * p_72);
static unsigned short func_73(unsigned char p_74, int * p_75);
static unsigned long long func_1(void)
{
    long long l_6 = (-1L);
    unsigned long long *l_7 = &g_8;
    unsigned long long *l_18 = &g_13;
    unsigned short *l_26 = (void*)0;
    unsigned short *l_27 = &g_28;
    int l_1461 = 7L;
    l_1461 ^= ((((safe_lshift_func_int8_t_s_s(((g_9 = (~(safe_sub_func_uint64_t_u_u(((*l_7) = l_6), ((void*)0 == l_7))))) == l_6), 0)) >= (safe_lshift_func_int8_t_s_s((g_12 == l_7), 2))) >= ((((func_14((safe_sub_func_int8_t_s_s(((void*)0 == l_18), func_19((g_1450 = func_21(((*l_27) |= 7UL), g_13, g_13, l_6)))))) & (-2L)) > l_6) ^ g_1295) ^ 0xEA9A7E6A49FD1D13LL)) > l_6);

    ;
    return g_1462;
}







static unsigned func_14(int p_15)
{
    long long ***l_1459 = &g_633;
    unsigned l_1460 = 0UL;
    (*g_626) = (safe_unary_minus_func_uint8_t_u((((*l_1459) = &g_634) == &g_634)));
    return l_1460;
}







static unsigned char func_19(unsigned long long * p_20)
{
    unsigned char l_1451 = 255UL;
    int *l_1454 = &g_592;
    int *l_1455 = &g_592;
    short l_1456 = 0x8823L;
    unsigned l_1457 = 0UL;
    (*g_591) = (l_1456 |= func_61(((l_1451 == (safe_add_func_uint64_t_u_u(0UL, func_73(l_1451, l_1454)))) != ((*l_1454) > func_61((*g_591), (*g_1449), g_592))), l_1455, (*l_1454)));
    return l_1457;
}







static unsigned long long * func_21(unsigned short p_22, int p_23, long long p_24, int p_25)
{
    unsigned short l_51 = 0x9D01L;
    int l_52 = 0xCA3396D5L;
    unsigned long long *l_80 = &g_13;
    unsigned short *l_602 = (void*)0;
    unsigned long long **l_1044 = &l_80;
    int *l_1046 = &g_374;
    int l_1054 = 1L;
    int l_1168 = 0x22FEFB80L;
    int l_1179 = (-1L);
    int l_1216 = 0x54B680A2L;
    int l_1231 = 0x1B43BD7CL;
    int l_1246 = 0xBA2021CDL;
    int *l_1344 = &l_52;
    return &g_599;


}







static int * func_29(unsigned short p_30, unsigned p_31, unsigned long long * p_32, short p_33, int p_34)
{
    int *l_1045 = &g_374;
    g_76 = l_1045;

    ;
    (*l_1045) = 0x7FD57B4AL;
    return l_1045;


}







static unsigned long long * func_35(char p_36, unsigned char p_37, unsigned char p_38, long long p_39, unsigned long long * p_40)
{
    unsigned char **l_620 = (void*)0;
    int *l_631 = &g_592;
    int l_638 = 0x0AB91E92L;
    int l_670 = 5L;
    int l_689 = 0xBD369239L;
    unsigned char l_794 = 0x17L;
    unsigned short l_860 = 65534UL;
    unsigned char l_896 = 0xB2L;
    unsigned char *l_987 = (void*)0;
    short *l_1042 = &g_696;
    unsigned *l_1043 = &g_520;
lbl_625:
    l_620 = l_620;
    for (p_36 = 21; (p_36 < 28); p_36 = safe_add_func_uint64_t_u_u(p_36, 2))
    {
        unsigned long long l_630 = 0x70EDC74811CE01D7LL;
        int l_688 = 0x0410DF2DL;
        short l_700 = (-8L);
        unsigned short l_727 = 0x5245L;
        unsigned l_786 = 0xDC629D47L;
        int l_837 = 1L;
        unsigned long long l_856 = 0xDE846531833A8C14LL;
        for (g_518 = 27; (g_518 > (-4)); g_518 = safe_sub_func_int64_t_s_s(g_518, 4))
        {
            int **l_627 = &g_591;
            (*g_591) |= p_38;
            if (g_592)
                goto lbl_625;
            (*l_627) = g_626;
        }
        for (g_374 = 0; (g_374 >= 3); g_374 = safe_add_func_uint64_t_u_u(g_374, 8))
        {
            int *l_632 = (void*)0;
            int l_653 = 0x09BA2750L;
            int l_677 = 0xE63A4D49L;
            unsigned char l_738 = 255UL;
            int l_761 = (-1L);
            int *l_785 = &l_761;
            int **l_789 = &l_631;
            if (func_73(((l_630 == 0xC4L) & func_73(g_502, l_631)), l_632))
            {
                int *l_635 = &g_592;
                int l_639 = 0L;
                int l_644 = 1L;
                int l_665 = 0L;
                int l_686 = (-1L);
                int l_692 = 1L;
                if (((void*)0 != g_633))
                {
                    int **l_636 = &l_635;
                    int l_637 = (-1L);
                    int *l_640 = &l_637;
                    int *l_641 = &l_639;
                    int *l_642 = &l_639;
                    int *l_643 = &l_638;
                    int *l_645 = &g_592;
                    int *l_646 = &l_637;
                    int *l_647 = &l_637;
                    int *l_648 = &l_637;
                    int *l_649 = &l_639;
                    int *l_650 = (void*)0;
                    int *l_651 = &g_592;
                    int *l_652 = &l_638;
                    int *l_654 = &l_644;
                    int *l_655 = &l_644;
                    int *l_656 = &l_653;
                    int *l_657 = &l_653;
                    int *l_658 = &l_637;
                    int *l_659 = (void*)0;
                    int *l_660 = &l_644;
                    int *l_661 = (void*)0;
                    int *l_662 = &l_638;
                    int *l_663 = &g_77;
                    int *l_664 = &g_592;
                    int *l_666 = &l_638;
                    int *l_667 = &l_637;
                    int *l_668 = &l_644;
                    int *l_669 = &l_637;
                    int *l_671 = (void*)0;
                    int *l_672 = &l_639;
                    int *l_673 = (void*)0;
                    int *l_674 = (void*)0;
                    int *l_675 = &l_638;
                    int *l_676 = &l_639;
                    int *l_678 = (void*)0;
                    int *l_679 = &l_665;
                    int *l_680 = (void*)0;
                    int *l_681 = &l_670;
                    int *l_682 = (void*)0;
                    int *l_683 = &l_639;
                    int *l_684 = &l_677;
                    int *l_685 = &g_77;
                    int *l_687 = &l_677;
                    int *l_690 = (void*)0;
                    int *l_691 = &l_637;
                    int *l_693 = &l_639;
                    int *l_694 = (void*)0;
                    int *l_695 = &g_77;
                    int *l_697 = &l_665;
                    int *l_698 = &g_77;
                    int *l_699 = &l_677;
                    int *l_701 = (void*)0;
                    int *l_702 = &l_670;
                    int *l_703 = &l_653;
                    int *l_704 = &l_689;
                    (*g_626) = l_630;
                    (*l_636) = l_635;
                    (*l_636) = l_631;

                    ;
                    g_705--;
                }
                else
                {
                    if (p_36)
                        goto lbl_625;
                }

                ;
            }
            else
            {
                int *l_708 = &g_77;
                int *l_709 = &l_670;
                int *l_710 = &l_670;
                int *l_711 = &g_592;
                int *l_712 = &l_653;
                int *l_713 = (void*)0;
                int *l_714 = &l_677;
                int *l_715 = &l_688;
                int *l_716 = (void*)0;
                int *l_717 = &l_670;
                int *l_718 = &l_689;
                int *l_719 = &l_688;
                int *l_720 = &l_677;
                int l_721 = 0xAF06F2B2L;
                unsigned short ***l_735 = &g_545;
                unsigned short ****l_734 = &l_735;
                unsigned long long l_739 = 1UL;
                --g_722;
                if (g_592)
                    goto lbl_625;
                for (g_106 = 14; (g_106 <= 4); g_106--)
                {
                    unsigned long long *l_736 = (void*)0;
                    unsigned long long *l_737 = &g_722;
                    l_727++;
                    (*l_717) |= (((*g_12) >= (safe_sub_func_int32_t_s_s(p_38, (g_235 & func_61((safe_mod_func_int8_t_s_s(((*p_40) < ((*l_737) = func_43(g_520, ((void*)0 != l_734), (*g_545)))), 0x93L)), &l_689, l_688))))) > l_738);
                }
                l_739++;
            }
            for (g_210 = 0; (g_210 <= 27); g_210 = safe_add_func_int64_t_s_s(g_210, 1))
            {
                int *l_744 = &g_592;
                int *l_745 = &l_653;
                int *l_746 = &g_592;
                int *l_747 = &l_670;
                int *l_748 = (void*)0;
                int *l_749 = &l_670;
                int *l_750 = &l_653;
                int *l_751 = (void*)0;
                int *l_752 = &l_688;
                int *l_753 = &l_670;
                int *l_754 = &l_689;
                int l_755 = 0xEEF4D79DL;
                int *l_756 = &l_689;
                int *l_757 = &l_670;
                int *l_758 = (void*)0;
                int *l_759 = &l_755;
                int *l_760 = &g_592;
                int *l_762 = &l_761;
                int *l_763 = &l_688;
                int *l_764 = &l_670;
                int *l_765 = &l_755;
                int *l_766 = (void*)0;
                int *l_767 = &l_638;
                int *l_768 = (void*)0;
                int *l_769 = &g_592;
                int *l_770 = &l_670;
                int *l_771 = (void*)0;
                int *l_772 = &l_688;
                int *l_773 = &l_653;
                int *l_774 = &l_670;
                int *l_775 = (void*)0;
                int *l_776 = &l_677;
                int *l_777 = &l_761;
                int *l_778 = (void*)0;
                int *l_779 = &l_638;
                int *l_780 = &l_761;
                int *l_781 = &l_689;
                g_782++;
                (*l_745) &= (p_37 | l_688);
            }
            l_786++;
            (*l_789) = &l_638;

            ;
        }
        for (g_227 = 6; (g_227 < 13); g_227++)
        {
            unsigned l_799 = 0x74C524F2L;
            unsigned *l_804 = &g_499;
            long long **l_805 = &g_634;
            unsigned char *l_806 = &g_118;
            int l_811 = 0L;
            int l_814 = 5L;
            int l_841 = (-5L);
            unsigned long long *l_859 = (void*)0;
            g_77 ^= (((safe_rshift_func_uint16_t_u_u(0x7D93L, (*g_546))) >= (l_794 && (*l_631))) <= ((*l_806) = ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(l_799, 2)), 8)) == (((((safe_add_func_uint32_t_u_u(p_39, ((*l_804) = l_799))) <= ((void*)0 == l_805)) && g_118) > l_688) != l_700))));
            for (g_520 = 28; (g_520 > 32); g_520 = safe_add_func_int64_t_s_s(g_520, 1))
            {
                for (g_77 = 0; (g_77 >= (-18)); g_77--)
                {
                    int *l_812 = &l_811;
                    int *l_813 = &l_670;
                    int *l_815 = &l_638;
                    int *l_816 = &l_689;
                    int l_817 = 0xC17AF573L;
                    int *l_818 = &l_670;
                    int *l_819 = &l_670;
                    int *l_820 = &l_670;
                    int *l_821 = &l_670;
                    int *l_822 = &g_592;
                    int *l_823 = (void*)0;
                    int *l_824 = &g_374;
                    int *l_825 = &g_374;
                    int *l_826 = &l_638;
                    int *l_827 = &l_670;
                    int *l_828 = &l_811;
                    int *l_829 = &l_689;
                    int *l_830 = &l_811;
                    int l_831 = 1L;
                    int *l_832 = &l_670;
                    int *l_833 = &l_638;
                    int *l_834 = &g_374;
                    int *l_835 = &g_592;
                    int *l_836 = &l_688;
                    int *l_838 = &g_374;
                    int *l_839 = &l_817;
                    int *l_840 = &l_814;
                    int *l_842 = &l_837;
                    int *l_843 = &l_841;
                    int *l_844 = &l_688;
                    int *l_845 = &l_688;
                    int *l_846 = &l_817;
                    int *l_847 = &l_688;
                    int *l_848 = &g_374;
                    int *l_849 = &g_374;
                    int *l_850 = &l_689;
                    int *l_851 = &l_638;
                    int *l_852 = &l_814;
                    int *l_853 = &l_689;
                    int *l_854 = &g_374;
                    int *l_855 = &g_592;
                    --l_856;
                }
                return l_859;


            }
            (*g_591) |= (l_837 = (l_688 = (&l_727 == (*g_545))));
        }
    }
    if ((((*l_631) != l_860) != 0L))
    {
        int **l_861 = &g_626;
        int *l_866 = &l_670;
        int *l_867 = &g_374;
        int *l_868 = &l_689;
        int *l_869 = &l_670;
        int *l_870 = &l_638;
        int *l_871 = (void*)0;
        int l_872 = 0xA03B80FDL;
        int *l_873 = &l_638;
        int *l_874 = &l_872;
        int *l_875 = &g_77;
        int *l_876 = &g_374;
        int *l_877 = &g_77;
        int *l_878 = &l_670;
        int l_879 = 9L;
        int *l_880 = &l_670;
        int *l_881 = &l_879;
        int *l_882 = &l_872;
        int l_883 = (-10L);
        int *l_884 = (void*)0;
        int *l_885 = (void*)0;
        int *l_886 = (void*)0;
        int *l_887 = &l_879;
        int *l_888 = &g_77;
        int *l_889 = &l_872;
        int *l_890 = (void*)0;
        int *l_891 = &l_638;
        int *l_892 = &g_77;
        int *l_893 = &g_374;
        int *l_894 = &l_689;
        int *l_895 = (void*)0;
        (*l_861) = (void*)0;

        ;
        (*l_631) = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_37, 6)), 6));
        ++l_896;
        (*l_876) = p_36;
    }
    else
    {
        int l_926 = 0x17F30D89L;
        int l_949 = 0xA83A9B56L;
        int l_962 = 0x8A264728L;
        char l_984 = 0x25L;
        unsigned char *l_988 = &l_794;
        int l_1011 = 0x627E1318L;
        unsigned l_1016 = 0x02EFAD09L;
        int l_1029 = (-1L);
        if (p_37)
        {
            unsigned short l_899 = 1UL;
            char *l_902 = &g_235;
            int *l_909 = &l_689;
            int **l_910 = (void*)0;
            (*g_626) = (*l_631);
            g_591 = l_909;

            ;
        }
        else
        {
            int *l_911 = &l_638;
            int *l_912 = &l_689;
            int *l_913 = &l_689;
            int *l_914 = &g_77;
            int *l_915 = &l_638;
            int *l_916 = &l_689;
            int l_917 = (-1L);
            int *l_918 = &l_670;
            int *l_919 = (void*)0;
            int *l_920 = &l_917;
            int *l_921 = &g_77;
            int *l_922 = (void*)0;
            int *l_923 = (void*)0;
            int *l_924 = &g_77;
            int *l_925 = &g_374;
            int *l_927 = (void*)0;
            int *l_928 = &l_917;
            int *l_929 = &l_689;
            int *l_930 = &g_374;
            int *l_931 = &l_638;
            int *l_932 = (void*)0;
            int *l_933 = &g_374;
            int *l_934 = &g_374;
            int *l_935 = &g_77;
            int *l_936 = &l_689;
            int *l_937 = &l_670;
            int *l_938 = &g_592;
            int *l_939 = &g_77;
            int *l_940 = &g_77;
            int *l_941 = &l_638;
            int *l_942 = &g_77;
            int *l_943 = &g_77;
            int *l_944 = &g_592;
            int *l_945 = &l_689;
            int *l_946 = (void*)0;
            int *l_947 = &g_374;
            int *l_948 = &l_917;
            int *l_950 = &l_949;
            int *l_951 = &l_670;
            int *l_952 = (void*)0;
            int *l_953 = (void*)0;
            int *l_954 = (void*)0;
            int *l_955 = &g_374;
            int l_956 = (-1L);
            int *l_957 = &g_77;
            int *l_958 = &l_956;
            int l_959 = 0L;
            int *l_960 = &l_956;
            int *l_961 = &l_956;
            int *l_963 = &g_77;
            int *l_964 = &l_689;
            int *l_965 = &l_949;
            int *l_966 = &l_689;
            int *l_967 = &g_592;
            int *l_968 = &g_77;
            int *l_969 = (void*)0;
            int *l_970 = &l_956;
            int *l_971 = &l_949;
            char *l_979 = &g_235;
            unsigned *l_980 = &g_227;
            unsigned short *l_981 = &g_361;
            long long *l_982 = &g_458;
            long long l_983 = 0xAD110CAFEE907134LL;
            l_911 = l_911;
            --g_972;
            (*l_967) = ((safe_lshift_func_uint8_t_u_s(func_61(((((*g_12) != func_43(((*l_980) = (((*l_979) ^= (*l_631)) && p_38)), p_39, l_981)) >= l_926) < (((*l_982) ^= 7L) >= ((-3L) ^ p_36))), &l_917, l_983), 3)) >= (*p_40));
        }

        ;
        l_984 = p_38;
        if (((((p_38 ^ ((void*)0 == &g_306)) == (p_37 <= ((safe_lshift_func_int16_t_s_u(func_73(p_39, &l_689), 13)) >= p_36))) != ((l_987 = &p_38) != l_988)) ^ (*l_631)))
        {
            int l_989 = (-5L);
            int *l_990 = (void*)0;
            int *l_991 = (void*)0;
            int *l_992 = &l_949;
            int *l_993 = &l_670;
            int *l_994 = &l_638;
            int *l_995 = &l_689;
            int *l_996 = &l_670;
            int l_997 = 0L;
            int *l_998 = &g_77;
            int *l_999 = &g_77;
            int l_1000 = 7L;
            int *l_1001 = &l_689;
            int *l_1002 = (void*)0;
            int *l_1003 = (void*)0;
            int *l_1004 = (void*)0;
            int *l_1005 = &g_77;
            int *l_1006 = &l_689;
            int *l_1007 = &l_949;
            int *l_1008 = (void*)0;
            int *l_1009 = &l_949;
            int *l_1010 = &g_77;
            int *l_1012 = &l_670;
            unsigned short l_1013 = 65532UL;
            long long *l_1030 = &g_458;
            (*l_631) = p_39;
            l_1013--;
            (*l_996) = (*l_631);
            (*l_1006) = ((((*g_626) &= l_1016) && (safe_add_func_int32_t_s_s((l_949 & (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((*l_1005), ((safe_mod_func_uint64_t_u_u(0xB87A36F4A3E52942LL, l_949)) ^ (((safe_sub_func_int64_t_s_s((p_39 = l_1011), ((*l_1030) = (l_1029 ^= 0x68FD6B381458801BLL)))) == (l_1011 > (safe_rshift_func_uint16_t_u_u(func_61((g_374 ^= (*g_591)), &g_592, p_38), (*l_631))))) ^ g_77)))), p_37))), g_520))) ^ 0x5F43L);
        }
        else
        {
            unsigned long long *l_1033 = &g_722;
            return l_1033;



        }

        ;
    }

    ;
    ;
    ;
    (*l_631) = (safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(0x80EAL, 3)) && (((*l_1043) &= (((safe_lshift_func_uint8_t_u_s(0x89L, 3)) <= ((safe_add_func_uint8_t_u_u((&l_987 != (*g_907)), (~((((((*l_1042) = ((*l_631) < (*l_631))) && p_37) & 0x7B1D39F7D08D5090LL) || (*l_631)) == (*g_12))))) || (**g_545))) || 0x9B09L)) != 1UL)), (**g_545)));
    return p_40;



}







static unsigned short func_43(unsigned p_44, char p_45, unsigned short * p_46)
{
    unsigned char *l_605 = &g_118;
    short l_610 = 0xE712L;
    int l_619 = (-2L);
    l_619 = (((safe_sub_func_uint8_t_u_u(246UL, ((*l_605) = g_13))) ^ p_44) <= ((0xD8L | (safe_lshift_func_uint16_t_u_u(((*g_546) &= ((safe_rshift_func_int16_t_s_u((0xF5L || l_610), (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((-6L), (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((l_610 | p_45), 0UL)), l_610)))), 0x311BL)))) || 0xCFE58925F25E4323LL)), 3))) < p_44));
    return (*g_546);
}







static long long func_61(int p_62, int * p_63, unsigned char p_64)
{
    int *l_593 = &g_374;
    int *l_594 = (void*)0;
    int *l_595 = &g_77;
    int *l_596 = &g_374;
    int *l_597 = &g_374;
    int *l_598 = &g_77;
    ++g_599;
    return g_175;
}







static unsigned char func_67(int p_68, char p_69, char p_70, int * p_71, unsigned long long * p_72)
{
    int l_84 = 0x6884ADDBL;
    int l_94 = 2L;
    int l_105 = 0x65AAE70CL;
    unsigned short *l_115 = &g_28;
    unsigned l_215 = 0xE630C7D5L;
    unsigned char *l_219 = &g_118;
    unsigned char *l_220 = (void*)0;
    unsigned l_236 = 0xFDBEEBB4L;
    int *l_326 = &g_77;
    char *l_383 = &g_235;
    char **l_382 = &l_383;
    long long l_512 = 0x3DF38DFE0E4C6902LL;
    unsigned short **l_530 = &l_115;
    unsigned short ***l_529 = &l_530;
    unsigned char **l_559 = &l_220;
    int *l_572 = &g_374;
    for (p_68 = (-25); (p_68 <= 17); p_68++)
    {
        int *l_83 = &g_77;
        int *l_85 = &l_84;
        int *l_86 = (void*)0;
        int l_87 = 0x09C4F4FCL;
        int *l_88 = &l_87;
        int *l_89 = (void*)0;
        int *l_90 = &l_87;
        int *l_91 = &l_87;
        int *l_92 = &g_77;
        int *l_93 = &l_84;
        int *l_95 = &l_84;
        int *l_96 = &l_87;
        int *l_97 = &l_84;
        int *l_98 = &l_87;
        int l_99 = 0L;
        int *l_100 = (void*)0;
        int *l_101 = &l_94;
        int *l_102 = &l_99;
        int *l_103 = (void*)0;
        int *l_104 = &l_94;
        --g_106;
    }
    if ((((func_73((safe_sub_func_int32_t_s_s((p_69 || p_69), func_73(((safe_rshift_func_int8_t_s_u(func_73(g_106, p_71), ((safe_mod_func_uint16_t_u_u((--(*l_115)), (g_118 ^= (l_94 = 65532UL)))) <= func_73(l_84, p_71)))) <= g_77), &g_77))), &l_105) == l_105) && 0x07DA0BF3FD26F361LL) | 0L))
    {
        unsigned l_128 = 18446744073709551614UL;
        int l_134 = 0xB3697EF0L;
        int *l_244 = &l_94;
        char *l_253 = &g_235;
        unsigned short **l_369 = &l_115;
        unsigned l_395 = 0x6B469B12L;
        unsigned l_424 = 18446744073709551615UL;
        if (func_73(g_28, p_71))
        {
            int **l_125 = &g_76;
            int ***l_124 = &l_125;
            unsigned short *l_126 = &g_106;
            long long *l_174 = &g_175;
            unsigned char *l_178 = &g_118;
            int l_181 = (-8L);
lbl_172:
            for (l_94 = 9; (l_94 < (-13)); l_94 = safe_sub_func_uint8_t_u_u(l_94, 6))
            {
                long long *l_127 = (void*)0;
                int *l_129 = &l_105;
                if (((*l_129) &= (func_73(g_77, &g_77) & ((safe_sub_func_uint16_t_u_u(((g_123 != l_124) == (l_128 |= (3UL != (g_106 || (&g_106 != l_126))))), p_70)) || (*g_12)))))
                {
                    unsigned long long l_130 = 0x48F9E473B9571DA8LL;
                    int l_137 = 0xECC76B58L;
                    int *l_153 = &g_77;
                    int *l_166 = &l_137;
                    unsigned short ***l_167 = (void*)0;
                    unsigned short **l_169 = &l_126;
                    unsigned short ***l_168 = &l_169;
                    if ((l_130 > ((*g_76) != (*g_76))))
                    {
                        (*l_125) = (**l_124);
                    }
                    else
                    {
                        int **l_133 = &l_129;
                        int *l_135 = &l_105;
                        int *l_136 = &g_77;
                        int *l_138 = &l_84;
                        int *l_139 = (void*)0;
                        int *l_140 = &l_84;
                        int *l_141 = &l_105;
                        int *l_143 = &l_134;
                        (**l_125) = (l_105 = (safe_lshift_func_int8_t_s_s(((**l_124) != ((*l_133) = &g_77)), 7)));

                        ;
                        ++g_144;
                        l_137 = ((*l_140) = ((*p_71) = func_73(((***l_124) >= (safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(func_73(g_142, &g_77), l_84)), 0xD82068EE181CB01BLL)), (((void*)0 != &p_71) && (*g_76))))), &l_94)));
                        l_153 = &l_137;

                        ;
                    }

                    ;
                    ;
                    (*l_166) &= func_73((safe_mod_func_uint32_t_u_u((***l_124), (((*l_115)++) && (safe_sub_func_uint16_t_u_u(func_73(g_142, &g_77), ((safe_mod_func_int64_t_s_s(g_28, 0xC2345427DA897626LL)) < func_73((((*l_126) ^= ((safe_mod_func_int16_t_s_s(9L, (*l_129))) != (safe_mod_func_int8_t_s_s(p_68, l_105)))) && 0xF43AL), &l_137))))))), p_71);
                    (*l_168) = &l_126;
                    if (l_137)
                        goto lbl_172;
                    for (l_84 = (-10); (l_84 == (-25)); l_84--)
                    {
                        (*l_125) = &l_134;

                        ;
                        (**l_125) = ((void*)0 == g_123);
                        if ((*p_71))
                            continue;
                    }

                    ;
                }
                else
                {
                    return (**l_125);
                }

                ;
                ;
                return p_69;


            }
            l_84 |= (*p_71);
            if (((*p_71) > (((((g_173 && ((*l_174) = 0x6E4DE62905013582LL)) ^ (*p_71)) & (*g_76)) < (0xCA7285EBL != (safe_sub_func_uint16_t_u_u((0x2195449CL & (**l_125)), func_73((--(*l_178)), p_71))))) > (*p_71))))
            {
                (**l_124) = p_71;
                l_181 = (*g_76);
            }
            else
            {
                int *l_218 = &l_181;
                unsigned *l_223 = (void*)0;
                unsigned *l_224 = (void*)0;
                unsigned *l_225 = &l_215;
                unsigned *l_226 = &g_227;
                char *l_234 = &g_235;
                for (l_105 = (-16); (l_105 < 8); l_105 = safe_add_func_uint64_t_u_u(l_105, 6))
                {
                    int *l_184 = &l_94;
                    int *l_185 = &g_77;
                    int *l_186 = &l_181;
                    int *l_187 = (void*)0;
                    int *l_188 = &l_181;
                    int *l_189 = (void*)0;
                    int l_190 = 0L;
                    int *l_191 = &g_77;
                    int *l_192 = &l_134;
                    int *l_193 = &g_77;
                    int *l_194 = (void*)0;
                    int *l_195 = &l_181;
                    int *l_196 = (void*)0;
                    int *l_197 = &l_84;
                    int *l_198 = &l_190;
                    int *l_199 = &g_77;
                    int *l_200 = (void*)0;
                    int *l_201 = &l_94;
                    int *l_202 = &l_94;
                    int *l_203 = &l_181;
                    int *l_204 = &g_77;
                    int *l_205 = &l_181;
                    int *l_206 = &l_94;
                    int *l_207 = &l_84;
                    int *l_208 = &l_94;
                    int *l_209 = (void*)0;
                    --g_210;
                    (*l_197) &= (safe_rshift_func_uint8_t_u_s((((*l_124) = &p_71) == (void*)0), 5));

                    ;
                    if ((*g_76))
                    {
                        (*l_125) = (void*)0;

                        ;
                    }
                    else
                    {
                        l_215--;
                    }
                }

                ;
                ;
                (**l_124) = l_218;

                ;
                ;
                if ((((l_219 == l_220) && (safe_add_func_uint32_t_u_u(((*l_225) |= l_128), ((*l_226) = g_142)))) != (l_134 <= ((safe_sub_func_int8_t_s_s(p_70, ((safe_add_func_uint64_t_u_u(((func_73((((l_94 = ((safe_add_func_int8_t_s_s(((*l_234) = g_28), g_173)) ^ (((*l_178) = (*l_218)) < 0x30L))) != l_236) ^ l_128), l_218) & g_175) || (-9L)), g_210)) ^ l_128))) && 0x32FC06C70737C935LL))))
                {
                    unsigned char *l_242 = &g_144;
                    int l_245 = 0x5F0232DBL;
                    if ((*g_76))
                    {
                        (*l_218) = (safe_rshift_func_int8_t_s_s(p_70, 5));
                        (*l_218) ^= l_215;
                    }
                    else
                    {
                        int *l_239 = &l_134;
                        (*l_239) |= (*l_218);
                    }
                    if ((g_175 != ((safe_add_func_int16_t_s_s(0x8A22L, ((*l_218) | (((*l_178) |= ((void*)0 == l_242)) >= g_210)))) > g_13)))
                    {
                        int *l_243 = &l_94;
                        l_244 = ((*l_125) = l_243);

                        ;
                        ;
                        (**l_124) = p_71;

                        ;
                        (*l_125) = (**l_124);
                    }
                    else
                    {
                        (*l_218) |= (g_175 != func_73(l_245, p_71));
                    }

                    ;
                    ;
                }
                else
                {
                    int **l_246 = &l_244;
                    (*l_246) = ((*l_125) = p_71);

                    ;
                    ;
                    if ((safe_rshift_func_int16_t_s_s(p_69, (*l_218))))
                    {
                        (*l_218) = (p_69 || 1UL);
                    }
                    else
                    {
                        return p_70;


                    }
                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
            ;
            return p_68;


        }
        else
        {
            char *l_252 = (void*)0;
            char **l_251 = &l_252;
            unsigned short *l_254 = &g_28;
            unsigned short **l_255 = &l_254;
            int l_276 = 0xA4016F25L;
            int l_300 = 0xEA306168L;
            int *l_324 = &l_134;
            unsigned short **l_370 = &l_254;
            (*p_71) = (((*p_71) <= ((safe_rshift_func_uint8_t_u_s(0x1AL, 5)) == (((*l_251) = &g_235) == l_253))) ^ ((&g_28 == ((*l_255) = l_254)) && 0x5C31BE52F0D76A68LL));

            ;
            for (g_106 = 0; (g_106 != 17); g_106 = safe_add_func_int16_t_s_s(g_106, 5))
            {
                int **l_258 = &g_76;
                int l_264 = 3L;
                (*l_258) = p_71;

                ;
                if ((safe_mod_func_int32_t_s_s((**l_258), (safe_sub_func_uint16_t_u_u(func_73(g_144, (*l_258)), (((*l_244) = p_70) == 0UL))))))
                {
                    int *l_263 = &g_77;
                    int l_265 = 0L;
                    int *l_266 = &l_134;
                    int *l_267 = &l_105;
                    int *l_268 = &l_264;
                    int *l_269 = &l_264;
                    int *l_270 = &l_264;
                    int *l_271 = &l_84;
                    int *l_272 = &l_105;
                    int *l_273 = &l_84;
                    int *l_274 = &g_77;
                    int *l_275 = &g_77;
                    int *l_277 = &l_94;
                    int *l_278 = (void*)0;
                    int *l_279 = &l_94;
                    int *l_280 = &l_84;
                    int *l_281 = &l_276;
                    int *l_282 = (void*)0;
                    int *l_283 = (void*)0;
                    int *l_284 = (void*)0;
                    int *l_285 = &l_276;
                    int *l_286 = &l_276;
                    int *l_287 = &l_265;
                    int *l_288 = &l_105;
                    int *l_289 = &l_265;
                    int *l_290 = &l_94;
                    int *l_291 = &g_77;
                    int *l_292 = &l_84;
                    int *l_293 = &l_105;
                    int *l_294 = &l_84;
                    int *l_295 = &l_265;
                    int *l_296 = &l_276;
                    int *l_297 = &l_265;
                    int *l_298 = &l_276;
                    int *l_299 = &l_105;
                    int *l_301 = &l_265;
                    int *l_302 = &l_265;
                    int *l_303 = &l_265;
                    int *l_305 = &l_84;
                    char **l_309 = &l_252;
                    char ***l_310 = &l_251;
                    g_306--;
                    if ((*l_244))
                        break;
                    if ((((*l_310) = l_309) != (void*)0))
                    {
                        char l_311 = 0x0CL;
                        l_311 &= (*p_71);
                    }
                    else
                    {
                        (*l_263) &= (+(safe_add_func_uint16_t_u_u((((*l_258) = &l_94) != p_71), (((*p_72) < func_73((g_144 = ((*l_219) = 0xA5L)), p_71)) ^ 0xC1F3L))));

                        ;
                        (*l_258) = &l_276;

                        ;
                        (*l_268) = (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((*l_244), 12)) <= 0L), 12));
                    }

                    ;
                }
                else
                {
                    (*l_244) |= l_105;
                    for (g_144 = (-21); (g_144 == 25); g_144 = safe_add_func_int32_t_s_s(g_144, 9))
                    {
                        (*l_258) = p_71;
                    }
                }

                ;
            }

            ;
            if ((*p_71))
            {
                unsigned char **l_322 = &l_219;
                int **l_327 = &l_244;
                (*g_76) = l_300;
                for (g_304 = 1; (g_304 > (-13)); g_304 = safe_sub_func_int8_t_s_s(g_304, 3))
                {
                    unsigned char ***l_323 = &l_322;
                    int **l_325 = &g_76;
                    (*l_323) = l_322;
                    (*l_325) = l_324;

                    ;
                    (*p_71) = (*g_76);
                }

                ;
                g_76 = l_326;

                ;
                (*l_327) = &l_134;

                ;
            }
            else
            {
                unsigned long long l_328 = 0x581409FF84D38300LL;
                int l_343 = 0xA07391C9L;
                unsigned short l_357 = 0xD3ABL;
                unsigned long long *l_416 = (void*)0;
                unsigned long long *l_417 = &l_328;
                unsigned long long *l_420 = (void*)0;
                unsigned long long *l_421 = (void*)0;
                unsigned long long *l_422 = &g_423;
                (*l_244) = (l_328 >= ((0x03L != 248UL) == (*l_326)));
                if ((4294967289UL | (safe_lshift_func_uint16_t_u_u((*l_244), 3))))
                {
                    int *l_331 = &g_77;
                    int *l_332 = &l_105;
                    int *l_333 = &g_77;
                    int *l_334 = &l_276;
                    int *l_335 = &l_105;
                    int *l_336 = &g_77;
                    int *l_337 = (void*)0;
                    int *l_338 = (void*)0;
                    int *l_339 = &l_105;
                    int *l_340 = (void*)0;
                    int *l_341 = &l_84;
                    int *l_342 = &l_300;
                    int *l_344 = &l_84;
                    int *l_345 = &l_94;
                    int *l_346 = (void*)0;
                    int l_347 = (-5L);
                    int *l_348 = &l_94;
                    int *l_349 = &l_276;
                    int l_350 = 0x17290AB1L;
                    int *l_351 = (void*)0;
                    int *l_352 = &l_343;
                    int *l_353 = (void*)0;
                    int *l_354 = &l_350;
                    int *l_355 = (void*)0;
                    int *l_356 = &l_105;
                    int **l_360 = &l_338;
                    --l_357;
                    (*l_360) = &l_94;

                    ;
                    g_361++;
                    (*l_244) = func_73(p_68, p_71);
                }
                else
                {
                    int **l_366 = (void*)0;
                    int *l_367 = &l_134;
                    unsigned short **l_368 = (void*)0;
                    unsigned char *l_393 = &g_144;
                    long long **l_405 = (void*)0;
                    long long *l_407 = &g_175;
                    long long **l_406 = &l_407;
                    long long *l_408 = &g_175;
                    unsigned *l_409 = &g_227;
                    (*l_244) = (safe_rshift_func_int8_t_s_u(g_118, g_173));
                    l_366 = l_366;
                    if ((func_73(g_118, l_367) >= (*l_324)))
                    {
                        long long *l_375 = &g_175;
                        int l_384 = 0L;
                        (*l_324) &= (((l_368 == (l_370 = l_369)) <= ((*l_326) && p_70)) && (safe_sub_func_uint16_t_u_u(p_69, ((((safe_unary_minus_func_uint8_t_u(func_73((*l_326), &l_134))) ^ (((((*p_71) != (-1L)) == g_374) | (*l_244)) != g_144)) ^ 0x8D9240F4L) == p_70))));

                        ;
                        (*p_71) ^= ((*g_12) < ((*l_375) |= ((*l_244) = p_70)));
                        (*l_367) = (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(func_73(g_306, p_71), ((0xAE2C023DL == (g_77 & (((safe_sub_func_uint32_t_u_u(p_68, (func_73(((((*l_219) = p_68) && (((void*)0 != l_382) && 0x93L)) >= l_384), p_71) <= p_69))) & (*p_71)) == (-6L)))) < g_385))), (*l_326)));
                    }
                    else
                    {
                        unsigned long long *l_394 = &l_328;
                        int l_396 = 0x8B6F583CL;
                        (*l_367) ^= (safe_rshift_func_int16_t_s_u((((*l_244) != (((safe_lshift_func_int16_t_s_s((g_106 == ((*l_326) != ((*l_326) != g_28))), ((void*)0 == g_390))) | ((*l_394) = (&g_144 == l_393))) | l_395)) != l_396), 7));
                        return p_70;


                    }

                    ;
                    (*l_326) = ((safe_lshift_func_int8_t_s_s(((func_73(((func_73(func_73(((*l_219) = (((*l_409) = ((safe_add_func_int8_t_s_s(func_73((safe_sub_func_int64_t_s_s(0x28A994A6EC7818F2LL, (((*l_408) = (safe_add_func_uint64_t_u_u((*p_72), (((p_69 && g_144) <= ((*g_76) ^ (p_72 != ((*l_406) = &g_175)))) > ((g_235 > (0xE2FCE430C6EE4B11LL != (*l_326))) ^ 0x2E444E87L))))) <= 0x7404A6E0F1F1B92BLL))), p_71), l_357)) && 4294967295UL)) & (*l_244))), p_71), &l_94) < p_68) || 0xBD4F3053L), &l_343) > (*g_76)) && 4294967295UL), p_70)) & g_306);
                }

                ;
                (*g_76) ^= func_73(((g_106 > (-10L)) & (safe_mod_func_uint16_t_u_u(func_73((*l_244), &g_374), (safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s(p_68, 0L)), ((*l_422) = (--(*l_417)))))))), &g_77);
            }

            ;
            ;
            l_424 ^= func_73((9L != (*g_12)), &l_94);
        }


        ;
    }
    else
    {
        long long l_432 = 0L;
        int l_465 = (-3L);
        int l_488 = 0x18C66851L;
        int l_489 = 7L;
        unsigned short **l_547 = &g_546;
        unsigned char **l_558 = &l_220;
        if ((*l_326))
        {
            int *l_429 = &l_94;
            int l_456 = 0xB8A7C783L;
            int l_493 = 0x37DDA91CL;
            char *l_510 = &g_235;
            unsigned *l_562 = &g_499;
            unsigned *l_563 = &g_306;
            int *l_564 = &l_465;
            for (g_210 = (-15); (g_210 == 27); g_210++)
            {
                int *l_427 = (void*)0;
                int **l_428 = &l_326;
                l_429 = ((*l_428) = l_427);

                ;
                ;
            }

            ;
            ;
            for (p_68 = 10; (p_68 >= 28); p_68++)
            {
                char l_439 = 0xECL;
                int l_473 = (-7L);
                int l_475 = (-1L);
                unsigned short *l_506 = &g_361;
                int *l_525 = &l_489;
                if (l_432)
                {
                    int *l_433 = &g_374;
                    int *l_434 = &g_77;
                    int *l_435 = &l_105;
                    int *l_436 = &g_374;
                    int *l_437 = &l_105;
                    int *l_438 = &l_94;
                    int *l_440 = &l_105;
                    int *l_441 = &l_84;
                    int *l_442 = &l_84;
                    int *l_443 = &l_105;
                    int *l_444 = &l_105;
                    int *l_445 = (void*)0;
                    int *l_446 = &l_94;
                    int *l_447 = (void*)0;
                    int *l_448 = &l_84;
                    int *l_449 = (void*)0;
                    int *l_450 = &l_105;
                    int *l_451 = &g_374;
                    int *l_452 = &l_105;
                    int *l_453 = &g_77;
                    int *l_454 = (void*)0;
                    int *l_455 = (void*)0;
                    int *l_457 = &g_374;
                    int *l_459 = (void*)0;
                    int *l_460 = &l_456;
                    int *l_461 = &l_94;
                    int *l_462 = &l_456;
                    int *l_463 = (void*)0;
                    int *l_464 = &l_456;
                    int *l_466 = &l_94;
                    int *l_467 = &l_94;
                    int *l_468 = &l_456;
                    int *l_469 = &l_456;
                    int *l_470 = &g_77;
                    int *l_471 = &l_105;
                    int *l_472 = &g_77;
                    int *l_474 = &l_473;
                    int *l_476 = &l_475;
                    int *l_477 = &l_465;
                    int *l_478 = (void*)0;
                    int *l_479 = &l_456;
                    int *l_480 = &g_77;
                    int *l_481 = &l_105;
                    int *l_482 = (void*)0;
                    int *l_483 = &g_77;
                    int *l_484 = &l_105;
                    int *l_485 = &l_94;
                    int *l_486 = (void*)0;
                    int *l_487 = (void*)0;
                    int *l_490 = &l_105;
                    int *l_491 = &g_77;
                    int *l_492 = &l_105;
                    int *l_494 = &l_465;
                    int *l_495 = &l_475;
                    int *l_496 = &g_374;
                    int *l_497 = &l_488;
                    int *l_498 = (void*)0;
                    g_499++;
                }
                else
                {
                    unsigned short *l_503 = (void*)0;
                    unsigned short **l_504 = (void*)0;
                    unsigned short **l_505 = &l_115;
                    int **l_507 = &l_326;
                    int *l_509 = &g_374;
                    (*p_71) &= (g_502 & (((*l_505) = l_503) != l_506));

                    ;
                    g_508 = l_507;

                    ;
                    (*l_509) ^= ((*p_71) = (*g_76));
                    if ((l_510 == (*l_382)))
                    {
                        (*l_509) |= (*p_71);
                    }
                    else
                    {
                        int *l_511 = &g_77;
                        int *l_513 = &l_84;
                        int *l_514 = &l_489;
                        int *l_515 = &l_488;
                        int *l_516 = &l_105;
                        int *l_517 = &l_473;
                        int *l_519 = &l_105;
                        (*l_507) = l_511;

                        ;
                        g_520++;
                        if ((**g_508))
                            continue;
                    }
                }
                (*l_525) |= (safe_sub_func_int32_t_s_s((*p_71), (p_68 | (-1L))));
                for (g_520 = 0; (g_520 >= 11); ++g_520)
                {
                    unsigned l_528 = 4UL;
                    if ((4294967295UL > 0xBEC5CF39L))
                    {
                        unsigned short ****l_531 = &l_529;
                        int *l_532 = &l_473;
                        (*l_532) |= ((*l_525) = ((*p_71) = func_73((l_528 & (((*l_531) = l_529) == (void*)0)), (*g_508))));
                    }
                    else
                    {
                        int l_533 = (-1L);
                        int ***l_534 = &g_508;
                        int **l_536 = &l_525;
                        int ***l_535 = &l_536;
                        (*g_76) ^= l_533;
                        (*p_71) |= ((((*l_534) = &p_71) != ((*l_535) = &g_76)) > l_432);

                        ;
                        ;
                        (**g_508) |= (-1L);
                        if ((*p_71))
                            break;
                    }
                }
                (*p_71) = ((((safe_mod_func_uint32_t_u_u(0x493731E5L, (safe_rshift_func_int16_t_s_s((*l_525), 5)))) < ((((*l_525) == func_73((safe_lshift_func_int8_t_s_s((*l_525), (safe_add_func_uint16_t_u_u(((*g_546) &= (g_545 == l_547)), func_73(g_227, (*g_508)))))), p_71)) < 0x86568B13L) != p_69)) >= l_432) & (*p_71));
            }

            ;
            ;
            (*l_564) |= ((safe_rshift_func_int8_t_s_u(p_69, 4)) != ((*l_563) = ((g_106 == (safe_add_func_int16_t_s_s(l_432, (safe_add_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((0UL == (safe_mod_func_uint8_t_u_u(((l_558 == l_559) > (((*l_562) |= (&l_510 == (*g_390))) < (l_489 < (*p_71)))), 0x2FL))), (*g_12))), p_70))))) | 0xEEE6D52705520F47LL)));
        }
        else
        {
            int *l_567 = &l_84;
            int l_579 = 3L;
            for (g_520 = 0; (g_520 <= 1); g_520++)
            {
                p_71 = (l_567 = p_71);

                ;
                for (g_28 = 0; (g_28 > 36); ++g_28)
                {
                    (*l_567) &= (-1L);
                }
            }

            ;
            (*g_508) = p_71;
            for (g_385 = 0; (g_385 <= 28); ++g_385)
            {
                unsigned l_588 = 1UL;
                l_572 = ((*g_508) = p_71);

                ;
                (*l_572) = (safe_add_func_int64_t_s_s((*l_572), (*l_567)));
                for (g_106 = 0; (g_106 < 50); g_106 = safe_add_func_int64_t_s_s(g_106, 2))
                {
                    int *l_577 = &l_105;
                    int *l_578 = &l_489;
                    int *l_580 = &l_94;
                    int *l_581 = &l_465;
                    int *l_582 = &l_105;
                    int *l_583 = (void*)0;
                    int *l_584 = &g_374;
                    int *l_585 = &l_94;
                    int *l_586 = &g_77;
                    int *l_587 = &l_489;
                    --l_588;
                }
            }

            ;
        }

        ;
        ;
        ;
        ;
    }


    ;
    ;
    ;
    ;
    return g_361;


}







static unsigned short func_73(unsigned char p_74, int * p_75)
{
    int **l_79 = &g_76;
    int ***l_78 = &l_79;
    (*l_78) = &g_76;
    return p_74;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_696, "g_696", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    transparent_crc(g_782, "g_782", print_hash_value);
    transparent_crc(g_972, "g_972", print_hash_value);
    transparent_crc(g_1077, "g_1077", print_hash_value);
    transparent_crc(g_1139, "g_1139", print_hash_value);
    transparent_crc(g_1241, "g_1241", print_hash_value);
    transparent_crc(g_1243, "g_1243", print_hash_value);
    transparent_crc(g_1247, "g_1247", print_hash_value);
    transparent_crc(g_1269, "g_1269", print_hash_value);
    transparent_crc(g_1295, "g_1295", print_hash_value);
    transparent_crc(g_1329, "g_1329", print_hash_value);
    transparent_crc(g_1427, "g_1427", print_hash_value);
    transparent_crc(g_1462, "g_1462", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
