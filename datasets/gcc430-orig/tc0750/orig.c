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



static unsigned char g_3 = 248UL;
static char g_23 = 1L;
static unsigned char g_27 = 0x8EL;
static unsigned char *g_26 = &g_27;
static unsigned short g_29 = 0x8C55L;
static unsigned short g_77 = 0x9994L;
static long long g_100 = (-1L);
static int g_103 = 0L;
static long long g_105 = 1L;
static unsigned char g_114 = 0x17L;
static int g_122 = 0x58E71DF6L;
static int *g_121 = &g_122;
static unsigned char g_143 = 0x79L;
static unsigned short g_161 = 0xD8B3L;
static unsigned g_162 = 0x20E24C2FL;
static unsigned short g_185 = 0x5C63L;
static short g_187 = 0x6A8FL;
static short g_189 = 0L;
static char g_201 = 0xCDL;
static int **g_203 = (void*)0;
static int g_256 = 0x6B43409BL;
static int *g_255 = &g_256;
static long long *g_273 = &g_105;
static int g_293 = 0L;
static unsigned g_316 = 4294967290UL;
static unsigned long long g_400 = 2UL;
static unsigned long long g_407 = 0x28CE6065E58DAA21LL;
static short g_410 = 1L;
static char g_488 = 0L;
static unsigned long long **g_529 = (void*)0;
static unsigned long long ***g_528 = &g_529;
static unsigned *g_548 = &g_162;
static unsigned **g_547 = &g_548;
static int *g_587 = &g_256;
static unsigned g_593 = 18446744073709551615UL;
static unsigned short **g_598 = (void*)0;
static int ****g_632 = (void*)0;
static unsigned g_680 = 0xD6222760L;
static char *g_692 = &g_201;
static char **g_691 = &g_692;
static int g_702 = 0x41366D69L;
static unsigned char g_824 = 255UL;
static short g_949 = 0x3B02L;
static char g_959 = 0x09L;
static char g_973 = (-2L);
static unsigned short g_984 = 65530UL;
static short **g_1036 = (void*)0;
static short ***g_1035 = &g_1036;
static unsigned char g_1052 = 0xBCL;
static int g_1104 = 0x51A1C5A8L;
static int g_1108 = 0x1676A3A2L;



static int func_1(void);
static long long func_4(unsigned long long p_5, int p_6, short p_7, unsigned p_8, unsigned p_9);
static unsigned long long func_30(int p_31, int p_32, int p_33);
static int func_36(unsigned short * p_37, unsigned short * p_38, int p_39, unsigned short * p_40, unsigned char * p_41);
static unsigned long long func_42(int p_43, char p_44, unsigned char * p_45, unsigned char p_46, unsigned p_47);
static int func_48(int p_49, unsigned long long p_50, unsigned short * p_51);
static unsigned long long func_71(int p_72, unsigned short * p_73, unsigned short * p_74);
static int * func_78(int p_79, unsigned short * p_80, unsigned p_81, short p_82, char p_83);
static unsigned long long func_86(unsigned long long p_87, int * p_88, int p_89, unsigned char * p_90);
static unsigned func_115(int * p_116, unsigned p_117, long long p_118, long long p_119, int * p_120);
static int func_1(void)
{
    long long l_2 = 0x3ECA4F833FCB50BFLL;
    unsigned char *l_20 = &g_3;
    unsigned short *l_28 = &g_29;
    int *l_956 = (void*)0;
    short l_963 = 0xB344L;
    int l_1000 = 0L;
    unsigned char l_1027 = 1UL;
    unsigned char *l_1039 = &g_824;
    unsigned char l_1058 = 247UL;
    unsigned short l_1059 = 0UL;
    long long l_1066 = 0x566FE11A3CC3A005LL;
    char **l_1068 = &g_692;
    long long l_1122 = 1L;
    unsigned l_1123 = 4UL;
    g_3 = l_2;
    if ((func_4(l_2, (l_2 , (safe_rshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s(0x71DFD947L, (safe_mod_func_int32_t_s_s((l_2 < (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((*l_20) ^= 0xB0L) || 0xF3L), 7)), ((*l_28) = (safe_add_func_uint16_t_u_u(g_23, (safe_add_func_uint32_t_u_u((g_26 == &g_27), l_2)))))))), l_2)))) < 0xE043EEF7D2668451LL), 1))), g_27, g_27, l_2) > g_23))
    {
        unsigned l_64 = 0x757A8360L;
        unsigned short l_75 = 0xCF36L;
        unsigned short *l_76 = &g_77;
        unsigned long long *l_585 = (void*)0;
        unsigned long long l_586 = 0xA4A81BAFAF9431CFLL;
        unsigned l_590 = 4294967295UL;
        char *l_951 = &g_201;
        int *l_979 = &g_103;
        int l_1065 = 7L;
        if ((((func_30(l_2, (safe_mod_func_int32_t_s_s(func_36((func_42((!func_48((~func_4((safe_lshift_func_uint8_t_u_s((g_3 == (safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((((safe_div_func_int8_t_s_s((safe_div_func_uint64_t_u_u((func_4((l_586 = func_4(l_64, (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((((safe_div_func_int64_t_s_s(g_29, ((0x28EC7DFFL > func_4((g_23 == (func_4(func_71((((0UL <= ((((*l_76) |= l_75) > l_2) >= 1L)) != l_75) , 0x4D80A992L), &l_75, &l_75), g_488, l_2, l_2, g_23) | l_2)), g_29, l_64, l_2, l_64)) ^ l_2))) <= g_29) != 1UL), g_488)) != l_64), g_23)), g_29, l_2, l_2)), g_400, g_407, l_64, l_64) <= l_64), l_64)), g_293)) , (void*)0) != &g_29), g_407)), g_407)) && 0x55DAAE100CF8C86DLL), 0x13C9L))), 0)), g_23, l_64, l_75, l_64)), l_2, &g_29)), l_590, l_20, g_23, l_590) , (void*)0), l_28, l_2, &l_75, &g_824), (-3L))), g_702) > g_410) && 0x491BL) , 0x95AD566CL))
        {
            unsigned long long l_950 = 0x244EB6362F67A078LL;
            char **l_952 = (void*)0;
            char **l_953 = &l_951;
            int *l_954 = (void*)0;
            int **l_955 = (void*)0;
            l_950 = l_590;
            (*g_255) = (((*g_691) = (*g_691)) != ((*l_953) = l_951));
            l_956 = l_954;
        }
        else
        {
            long long l_960 = (-2L);
            char *l_964 = &g_23;
            long long *l_967 = &l_960;
            unsigned long long *l_968 = &g_407;
            int l_976 = 0xB0B33ED2L;
            short *l_980 = (void*)0;
            short *l_981 = &g_189;
            short *l_982 = &g_949;
            short l_983 = 0x7EADL;
            unsigned long long l_1022 = 18446744073709551607UL;
            char l_1047 = 0L;
            (*g_255) &= (safe_div_func_uint16_t_u_u((((*g_273) > l_960) ^ (**g_691)), (-10L)));
            (*g_587) = (0UL <= (((*g_273) == ((((safe_mod_func_int64_t_s_s(((*l_967) ^= (*g_273)), ((*l_968) = l_64))) >= func_4((((((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(g_973, (safe_lshift_func_int16_t_s_u(((*l_982) = (((((*l_981) = ((l_586 , 0x990502B6L) & l_64)) & g_702) < (**g_691)) && (-1L))), 12)))), (*g_26))) == l_983) , &g_273) != &g_273) | 0x3ADEBBA0L), l_983, g_702, g_984, (*g_548))) <= 8UL) ^ (**g_691))) >= l_983));
            for (l_983 = 20; (l_983 != (-14)); --l_983)
            {
                unsigned *l_999 = &l_64;
                int l_1011 = 0x8CCFDC70L;
                short *l_1041 = &g_410;
                int l_1060 = 0x5BBC92B6L;
                if ((safe_unary_minus_func_int8_t_s(9L)))
                {
                    unsigned short l_988 = 65531UL;
                    int *l_1001 = (void*)0;
                    int *l_1002 = &l_976;
                    unsigned ***l_1008 = &g_547;
                    unsigned ****l_1007 = &l_1008;
                    int **l_1014 = (void*)0;
                    int **l_1015 = &l_956;
                    unsigned short l_1028 = 0x1843L;
                    (*l_1002) = (l_1000 = ((*g_587) = (((*l_979) = func_30(l_2, l_988, (g_702 = l_64))) , (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((void*)0 == (*g_691)), (safe_div_func_int8_t_s_s((*g_692), (safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((0x96A8L != func_30((l_976 &= ((l_999 != &g_593) && l_988)), l_988, g_959)), (*g_587))), g_488)))))), (*g_26))))));
                    (*l_1015) = &g_122;

                    ;
                    (*g_587) = ((safe_add_func_int16_t_s_s(((*l_982) |= ((*l_981) = (((*l_951) = (~((&g_547 == ((*l_1007) = (*l_1007))) == ((*g_548) = ((safe_div_func_uint8_t_u_u((*l_1002), (*g_26))) || (*g_273)))))) , 0xB374L))), l_1028)) <= (*l_956));
                }
                else
                {
                    unsigned char l_1040 = 1UL;
                    for (g_3 = 0; (g_3 < 28); g_3 = safe_add_func_uint32_t_u_u(g_3, 7))
                    {
                        unsigned short ***l_1042 = &g_598;
                        (*g_587) = (safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s((*g_273), ((+(((*l_982) = ((g_1035 == (void*)0) , l_976)) > l_590)) && (*g_692)))), (0x7C86L <= (((*l_967) = (safe_mul_func_int16_t_s_s(((+(func_36(&l_75, l_981, l_960, &l_75, l_1039) > (*g_26))) , l_1040), l_1040))) && 3UL))));
                        (*g_587) = (l_1041 == l_76);
                        if ((*g_587))
                            continue;
                        (*l_1042) = g_598;
                    }
                    return l_75;
                }

                ;
                (*g_255) = (+((safe_add_func_int8_t_s_s(0x30L, (safe_mul_func_uint8_t_u_u((*g_26), ((l_976 = ((*l_968) = ((0x6D968D73D9F93307LL >= (g_162 < ((*g_273) >= g_959))) < l_1047))) != ((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((*l_956), (**g_547))), g_1052)) < l_1047)))))) > l_1011));
                (*l_956) &= (*g_587);
                (*g_255) &= (safe_rshift_func_int16_t_s_s(func_30((l_1011 ^= (safe_unary_minus_func_int8_t_s(l_586))), (safe_rshift_func_uint8_t_u_u((!(&l_586 == (void*)0)), l_1058)), (l_1059 , (!((*g_26) < (*g_692))))), l_586));
            }

            ;
        }

        ;
        ;
        l_1065 &= (*g_587);
    }
    else
    {
        int l_1078 = 9L;
        int l_1085 = 0x14B2F168L;
        unsigned short *l_1086 = &l_1059;
        unsigned l_1101 = 4294967291UL;
        int **l_1109 = (void*)0;
        int **l_1110 = &g_121;
        long long l_1115 = 8L;
        if ((*g_121))
        {
            int **l_1067 = &l_956;
            char **l_1073 = (void*)0;
            int *l_1087 = &l_1000;
            l_1066 = (*g_121);
            (*l_1067) = &g_256;

            ;
            (*g_121) ^= ((((**l_1067) || (**l_1067)) , ((g_680 == (((&g_692 != l_1068) , (*g_26)) , 65535UL)) , (*l_956))) <= (*g_26));
            (*l_1087) |= (safe_div_func_uint8_t_u_u(func_48((safe_mul_func_uint8_t_u_u(0x71L, (l_1073 == &g_692))), ((*l_956) , (safe_add_func_int64_t_s_s((6L != (0L <= l_1078)), (!(((*g_587) || ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s(((((((l_1085 , (-3L)) , 0x86FEL) & g_77) , (*l_956)) , (**l_1067)) && (*g_121)), l_1085)), (**l_1067))), 11)) == 0x1714L)) , l_1078))))), l_1086), 0xC0L));

            ;
        }
        else
        {
            long long l_1094 = 0x72C3938BC10C90F0LL;
            int *l_1095 = (void*)0;
            int *l_1096 = &l_1000;
            short l_1105 = (-3L);
            unsigned l_1106 = 18446744073709551615UL;
            int *l_1107 = &g_1108;
            for (g_103 = 0; (g_103 <= 27); g_103 = safe_add_func_int32_t_s_s(g_103, 9))
            {
                (*g_121) = (l_1085 , (*g_255));
            }
            (*l_1096) ^= (safe_div_func_int8_t_s_s(((**g_547) & ((((((g_161 > l_1085) || (safe_div_func_uint16_t_u_u(((*l_28) = 0x9DEAL), g_316))) , (l_1094 , 0x56388EEAL)) , 0x3D8F12A7L) < (((*g_121) = l_1094) , l_1094)) , (*g_587))), l_1094));
            (*l_1107) |= (safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(1UL, (l_1101 &= (+0xD1C64742A08B5E76LL)))), func_36(&l_1059, &l_1059, (((safe_rshift_func_int16_t_s_s(g_1104, 14)) != 0x0DL) , ((func_115(&g_293, g_400, l_1105, l_1085, l_1096) || (*g_587)) && l_1106)), &g_77, &g_114)));

            ;
        }

        ;
        ;
        (*l_1110) = &g_293;

        ;
        for (g_122 = 11; (g_122 <= 29); g_122++)
        {
            int *l_1113 = (void*)0;
            int *l_1114 = &g_103;
            unsigned l_1116 = 9UL;
            unsigned long long *l_1121 = &g_400;
            l_1122 = func_4((**l_1110), (l_1115 = ((*l_1114) = 6L)), l_1116, (l_1116 || ((*g_273) = l_1116)), ((*g_26) , ((*g_26) >= ((0x76D0AD02AAF03B3FLL <= ((*l_1121) = ((((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((**l_1110) , (*g_26)) == (*g_26)), (-9L))), 3L)) < 0x75572B19767016DELL) , (void*)0) == (void*)0))) , 0x7BL))));
        }
        (*g_1035) = (*g_1035);
    }

    ;
    ;
    return l_1123;
}







static long long func_4(unsigned long long p_5, int p_6, short p_7, unsigned p_8, unsigned p_9)
{
    return g_3;
}







static unsigned long long func_30(int p_31, int p_32, int p_33)
{
    short l_917 = 3L;
    int l_944 = 0x925A2FEBL;
    for (p_33 = 0; (p_33 <= 6); ++p_33)
    {
        unsigned l_932 = 2UL;
        int l_945 = 2L;
        int *l_946 = &g_702;
        for (g_3 = 0; (g_3 < 42); ++g_3)
        {
            short *l_910 = &g_187;
            short **l_909 = &l_910;
            short ***l_908 = &l_909;
            long long *l_930 = &g_100;
            long long l_931 = 0L;
            int l_933 = 6L;
            int *l_947 = &g_702;
            int l_948 = 5L;
            (*l_908) = (void*)0;

            ;
        }
    }
    return l_944;
}







static int func_36(unsigned short * p_37, unsigned short * p_38, int p_39, unsigned short * p_40, unsigned char * p_41)
{
    int *l_901 = &g_122;
    int **l_902 = &g_121;
    short l_903 = 0x2329L;
    (*g_587) = p_39;
    (*l_902) = l_901;

    ;
    (*l_901) &= 1L;
    (*l_902) = (void*)0;

    ;
    return l_903;
}







static unsigned long long func_42(int p_43, char p_44, unsigned char * p_45, unsigned char p_46, unsigned p_47)
{
    unsigned short l_591 = 0x35C0L;
    unsigned *l_592 = &g_593;
    unsigned short *l_597 = &l_591;
    unsigned short **l_596 = &l_597;
    int ***l_608 = &g_203;
    int ****l_607 = &l_608;
    unsigned long long *l_609 = &g_407;
    unsigned char *l_610 = (void*)0;
    int l_683 = 1L;
    char **l_690 = (void*)0;
    unsigned short l_817 = 0x9566L;
    unsigned l_835 = 0x4AADB915L;
    int l_882 = 0x235A3EACL;
    unsigned short l_899 = 0UL;
    if ((((*l_592) ^= l_591) , p_46))
    {
        char *l_622 = &g_488;
        int l_625 = 0xD500D0F2L;
        int *l_635 = &g_103;
        unsigned char *l_641 = (void*)0;
        unsigned short *l_649 = &g_185;
        int l_665 = 0L;
        char **l_709 = &l_622;
        int ***l_717 = &g_203;
        unsigned long long l_744 = 0xCB6BA4237127C9C7LL;
        unsigned long long l_750 = 0x274ED0901331099DLL;
        short *l_760 = &g_410;
        short **l_759 = &l_760;
        char l_771 = 0xB5L;
        if (p_46)
        {
            unsigned long long l_613 = 0xBE685625D57A68ADLL;
            int **l_626 = (void*)0;
            int **l_627 = &g_587;
            int *l_640 = &g_256;
            (*l_627) = func_78((safe_rshift_func_int16_t_s_s(l_591, l_613)), &g_161, (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(p_44, (&g_23 == ((g_598 != g_598) , l_622)))), ((safe_mod_func_uint32_t_u_u(4294967293UL, 5L)) != l_613))), (*p_45))), 8)), p_44, l_625);

            ;
            l_625 = ((safe_add_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(((*g_587) < (((void*)0 == g_632) & (*g_273))), 0x0375B232L)) != (*g_26)) | g_407), (**l_627))) || p_47);
            (**l_627) &= (*g_121);
            (*l_640) = p_43;
        }
        else
        {
            long long l_651 = 0x0228FD4CB0198D07LL;
            unsigned short *l_700 = &g_185;
            int *l_701 = &g_702;
            char **l_722 = &g_692;
            (*g_121) = p_44;
            for (p_47 = 0; (p_47 > 19); p_47 = safe_add_func_int8_t_s_s(p_47, 5))
            {
                short *l_648 = &g_187;
                int *l_650 = &l_625;
                unsigned char *l_666 = &g_27;
                unsigned short **l_668 = (void*)0;
                unsigned char l_682 = 0UL;
                short l_714 = 1L;
                int ***l_718 = &g_203;
                int l_738 = 0xD16277DAL;
                long long l_741 = 0x951D44C462124637LL;
                int l_746 = (-1L);
                (*l_650) &= func_71((safe_sub_func_int32_t_s_s(p_47, (((*g_548) ^= 4294967295UL) >= (0xE47AL > ((*l_648) = 0x4500L))))), l_649, l_649);
            }

            ;
            return l_744;
        }

        ;
        l_625 &= (((+l_665) , l_750) | (safe_lshift_func_uint8_t_u_u((*g_26), 5)));
        l_665 = ((safe_add_func_int16_t_s_s(g_100, (safe_sub_func_int8_t_s_s(func_48(((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((**g_547), (1L > 4294967289UL))), (((0x71B637AF20F4E5B5LL || (l_665 | (*p_45))) >= p_47) | (&p_44 == (void*)0)))) != l_771), l_683, l_760), l_744)))) | l_750);

        ;
        l_683 = (safe_mod_func_uint32_t_u_u((func_71(p_47, ((*l_596) = l_760), &l_591) | func_4(l_683, (p_44 , l_665), g_23, (safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((l_591 != l_591) ^ 0xCFC23667661D0D5ALL), 0xD8L)), p_46)), (*p_45))), g_316)), p_44)), p_47));

        ;
        ;
    }
    else
    {
        int l_784 = 1L;
        int *l_789 = (void*)0;
        for (g_293 = 2; (g_293 < 6); ++g_293)
        {
            int *l_805 = &g_702;
            int **l_804 = &l_805;
            int l_806 = 0x35DC1098L;
            l_784 = 0xED2F0585L;
            for (g_316 = 0; (g_316 == 12); ++g_316)
            {
                char l_799 = 0x54L;
                for (g_187 = 0; (g_187 != (-6)); g_187 = safe_sub_func_int64_t_s_s(g_187, 7))
                {
                    int **l_790 = &g_121;
                    int l_807 = 0x8BC7DBFDL;
                    (*l_790) = l_789;

                    ;
                    for (g_114 = 0; (g_114 != 31); ++g_114)
                    {
                        short l_797 = 0x667CL;
                        int *l_798 = &g_103;
                        l_807 ^= ((safe_mod_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((l_797 ^ func_4(p_46, l_797, ((p_47 != 2L) >= ((l_799 = (((*l_798) = 8L) , g_162)) , (safe_div_func_uint64_t_u_u(func_4(p_46, ((safe_add_func_uint8_t_u_u((((*p_45) = ((((((void*)0 == &g_407) , l_804) != g_203) , (*g_548)) && (*g_587))) || (*g_26)), l_591)) > p_43), l_806, l_683, p_44), l_799)))), p_44, (*g_548))), (*g_548))), l_797)) ^ l_806);
                    }
                }

                ;
                return l_799;
            }
            (*g_255) &= (l_806 > (p_46 , p_47));
        }
        (*g_121) = (safe_unary_minus_func_uint8_t_u((*g_26)));
    }

    ;
    ;
    (*g_255) ^= (!(p_43 > ((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(p_46, p_47)), (((l_817 > (p_43 >= (l_591 >= (0xF07BL ^ p_46)))) , p_43) , p_47))), l_683)), 12)) || 0x45L)));
    if ((func_4((+(safe_lshift_func_int8_t_s_s(p_44, 2))), (safe_mul_func_uint16_t_u_u((l_591 > p_46), func_4((safe_mul_func_int16_t_s_s(0L, (((void*)0 == (*l_607)) && ((*g_273) = ((((*g_121) = p_44) && l_591) >= 1L))))), p_44, g_488, (*g_548), g_824))), g_407, l_683, p_43) && 0x45EC57D7D40BE881LL))
    {
        long long l_833 = 0x98722AD63E4963C7LL;
        char l_857 = 0x6CL;
        unsigned long long l_858 = 18446744073709551606UL;
        int l_859 = (-1L);
        int *l_880 = (void*)0;
        int *l_881 = &g_256;
        if (l_817)
        {
            unsigned *l_834 = &g_316;
            int l_856 = 0xFCCE8B3CL;
            int **l_860 = &g_121;
            (*g_255) = ((safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((((func_4((((**g_547) == ((*l_834) = (safe_rshift_func_int16_t_s_u(l_833, 1)))) > ((*g_121) = l_835)), ((safe_rshift_func_uint8_t_u_s(((*p_45) = (safe_mod_func_int16_t_s_s((func_4(((*l_609) = l_833), func_4((safe_div_func_uint64_t_u_u(((safe_add_func_int8_t_s_s((*g_692), (safe_mod_func_int16_t_s_s((l_859 = ((func_4((safe_rshift_func_uint16_t_u_s((l_858 = (safe_mod_func_int32_t_s_s(((void*)0 == (*l_596)), func_4(((p_47 ^= l_591) > func_4((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((&l_683 != &l_683) , l_833), (*p_45))), (*p_45))), (*g_26))), l_833, l_817, l_856, p_43)), l_856, l_857, p_43, p_44)))), l_591)), l_856, l_833, l_856, p_46) < p_44) && p_46)), 0xFB9EL)))) , p_44), (*g_273))), p_43, l_591, p_43, (**g_547)), g_189, (*g_548), p_44) , 0x9F71L), l_833))), 3)) ^ (*g_273)), p_43, p_43, (*g_548)) | (*g_587)) >= l_856) != l_857), p_44)) , (*p_45)), 6)) < p_44), (*g_26))) , l_856);
            (*l_860) = &g_293;

            ;
            return p_47;
        }
        else
        {
            int *l_861 = &g_293;
            l_861 = &g_256;

            ;
        }
        l_882 |= ((*g_587) = ((*g_26) && (((safe_sub_func_int64_t_s_s((safe_div_func_int64_t_s_s(((safe_sub_func_int8_t_s_s(5L, ((safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((*p_45) |= (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(p_46, p_47)), 7UL))), l_683)), 4UL)) | 0UL))) != l_683), 0x538B28CCF54CD4F6LL)), 1UL)) || (*g_548)) > 5L)));
    }
    else
    {
        unsigned char l_900 = 251UL;
        for (l_882 = 23; (l_882 > 17); l_882--)
        {
            int l_889 = (-9L);
            int l_898 = (-1L);
            (*g_587) = (safe_sub_func_uint64_t_u_u((l_889 = (safe_rshift_func_int8_t_s_s((*g_692), 5))), (safe_div_func_uint8_t_u_u((p_44 , ((((*g_587) <= (l_900 = (p_44 , (safe_mul_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(g_77, p_43)) <= ((safe_add_func_int32_t_s_s(((func_4(p_43, l_898, g_593, (*g_548), l_835) < p_46) && p_47), (-9L))) | l_898)) > l_899), p_47))))) , p_43) || (**g_547))), (**g_691)))));
        }
    }
    (*g_587) &= (*g_121);
    return p_43;
}







static int func_48(int p_49, unsigned long long p_50, unsigned short * p_51)
{
    int **l_588 = &g_587;
    int *l_589 = &g_293;
    (*l_588) = g_587;
    g_121 = l_589;

    ;
    return g_201;
}







static unsigned long long func_71(int p_72, unsigned short * p_73, unsigned short * p_74)
{
    unsigned short *l_95 = &g_29;
    int l_96 = (-1L);
    long long *l_99 = &g_100;
    int *l_101 = (void*)0;
    int *l_102 = &g_103;
    long long *l_104 = &g_105;
    unsigned short l_106 = 65529UL;
    int *l_107 = &l_96;
    unsigned l_372 = 0xF7BF0A0AL;
    unsigned long long l_373 = 18446744073709551610UL;
    int **l_584 = &l_107;
    (*l_584) = func_78(p_72, ((safe_sub_func_int16_t_s_s((((func_86((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(func_4((l_95 != (void*)0), ((*l_102) = func_4(l_96, (safe_lshift_func_uint16_t_u_s(func_4(((((*l_99) |= g_23) > (!(p_72 | ((*l_104) ^= func_4(p_72, ((*l_102) ^= p_72), l_96, g_29, l_96))))) , 0x86B476018F8C21E6LL), g_29, g_23, g_3, g_23), l_96)), g_29, g_27, p_72)), l_96, l_96, g_23), 2)), l_106)), l_107, (*l_107), &g_3) < p_72) == 0x07501EDDL) > g_23), l_372)) , p_73), l_106, g_29, l_373);

    ;
    return p_72;
}







static int * func_78(int p_79, unsigned short * p_80, unsigned p_81, short p_82, char p_83)
{
    unsigned l_374 = 4294967289UL;
    int *l_375 = (void*)0;
    unsigned short *l_378 = &g_29;
    int l_386 = 0x9824FAF9L;
    unsigned long long *l_399 = &g_400;
    unsigned l_411 = 4294967288UL;
    unsigned l_419 = 9UL;
    int *l_453 = &g_103;
    int **l_452 = &l_453;
    int l_476 = 0x0AD77E3BL;
    unsigned **l_550 = &g_548;
    int *l_557 = &g_122;
    unsigned char *l_567 = &g_143;
    unsigned l_583 = 0x98E118DFL;
    l_374 |= ((*g_255) = (*g_255));
    l_375 = &p_79;

    ;
    for (g_77 = 0; (g_77 >= 1); g_77 = safe_add_func_uint16_t_u_u(g_77, 5))
    {
        unsigned short **l_379 = &l_378;
        int *l_401 = &g_122;
        int **l_402 = &l_375;
        unsigned long long *l_403 = &g_400;
        char *l_404 = (void*)0;
        char *l_405 = &g_201;
        unsigned long long *l_406 = &g_407;
        unsigned l_408 = 0x3E9EDABCL;
        short *l_409 = &g_410;
        int l_412 = 0x0C04F28EL;
        unsigned l_435 = 0x558FA1B8L;
        unsigned short l_462 = 0xF368L;
        int **l_484 = &l_453;
        unsigned long long l_505 = 18446744073709551615UL;
    }
    if (((*l_375) > (*l_375)))
    {
        unsigned short l_561 = 0x0F2AL;
        unsigned char *l_562 = &g_3;
        for (g_114 = 12; (g_114 != 2); g_114 = safe_sub_func_uint16_t_u_u(g_114, 3))
        {
            int *l_558 = &g_256;
            int **l_559 = (void*)0;
            int **l_560 = &l_375;
            l_557 = &g_256;

            ;
            (*g_255) = 0xD61A5BDEL;
            (*l_560) = l_558;

            ;
        }

        ;
        ;
        (*l_375) = func_86(l_561, &g_122, p_81, l_562);
    }
    else
    {
        unsigned char *l_568 = &g_3;
        int l_569 = 0xD1810598L;
        long long *l_582 = &g_100;
        (*g_255) = (safe_mod_func_int8_t_s_s(((*p_80) || ((func_86((((*g_26) = ((&g_29 != (func_86((safe_mod_func_int8_t_s_s(g_27, (*l_375))), &l_476, (*g_255), l_567) , &g_29)) == 0UL)) , 1UL), l_453, p_81, l_568) != 255UL) , g_122)), l_569));
        (*g_255) |= (*g_121);
        (*l_375) = (safe_add_func_int16_t_s_s((l_569 == 0xAED94B7105DE8DD6LL), (safe_lshift_func_int16_t_s_u(func_4((safe_rshift_func_uint16_t_u_s(((void*)0 == &g_121), (safe_add_func_uint32_t_u_u(((*g_548) = func_115(&p_79, g_488, (*g_273), ((*l_582) = (safe_sub_func_int8_t_s_s(((*p_80) , p_82), p_82))), &g_103)), p_83)))), p_83, p_81, l_583, l_569), 8))));
        (*g_121) = p_83;
    }

    ;
    ;
    return &g_256;


}







static unsigned long long func_86(unsigned long long p_87, int * p_88, int p_89, unsigned char * p_90)
{
    unsigned long long l_112 = 0xF4B0596E72D3BEAFLL;
    unsigned char *l_113 = &g_114;
    unsigned *l_207 = &g_162;
    int *l_235 = &g_103;
    int l_267 = 0xCFE09AD7L;
    long long *l_270 = &g_100;
    char l_286 = 1L;
    char *l_291 = &g_23;
    int l_321 = (-3L);
    int l_330 = 1L;
    int *l_345 = &l_330;
    (*p_88) = (safe_sub_func_int8_t_s_s((g_23 >= (0x2F045C74L ^ ((*l_207) = func_4((safe_lshift_func_int8_t_s_u((255UL | l_112), ((*l_113) |= (*g_26)))), g_77, l_112, func_115(g_121, ((((safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(l_112, 4L)), p_89)) > g_122) >= p_89) , 0x930A17C0L), g_122, l_112, &g_103), g_77)))), 0x6CL));
    for (g_122 = 24; (g_122 == 0); g_122--)
    {
        short *l_215 = (void*)0;
        short **l_214 = &l_215;
        int l_244 = 9L;
        int *l_257 = &l_244;
        long long **l_271 = (void*)0;
        long long **l_272 = &l_270;
        unsigned long long l_276 = 0x03F3C9CF072A1A33LL;
        short l_357 = 0xACDCL;
        unsigned short *l_366 = &g_161;
    }
    (*p_88) |= (*g_255);
    return g_23;
}







static unsigned func_115(int * p_116, unsigned p_117, long long p_118, long long p_119, int * p_120)
{
    int l_141 = (-2L);
    char l_181 = 0xE3L;
    (*p_116) ^= 0xD999CB54L;
    for (g_103 = 0; (g_103 < (-4)); g_103 = safe_sub_func_int64_t_s_s(g_103, 9))
    {
        int l_135 = 3L;
        int l_180 = 1L;
        for (p_117 = 24; (p_117 == 32); p_117 = safe_add_func_int32_t_s_s(p_117, 5))
        {
            unsigned char *l_142 = &g_143;
            int l_154 = 0xEFF9D668L;
            unsigned l_182 = 4294967295UL;
            int l_190 = (-6L);
            (*p_116) = (safe_add_func_int32_t_s_s((*p_116), ((safe_mod_func_int8_t_s_s(p_117, ((*l_142) ^= func_4(l_135, g_23, (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u(((+g_103) >= p_119))), l_135)), p_118)), g_105, l_141)))) >= p_119)));
            for (g_143 = 14; (g_143 <= 27); g_143++)
            {
                int l_167 = 3L;
                int *l_206 = &l_167;
                for (l_141 = (-16); (l_141 == (-1)); l_141++)
                {
                    unsigned short l_195 = 1UL;
                    int ***l_204 = &g_203;
                    int **l_205 = &g_121;
                    for (g_122 = 0; (g_122 == 22); g_122 = safe_add_func_uint16_t_u_u(g_122, 9))
                    {
                        unsigned char *l_155 = &g_143;
                        long long *l_158 = (void*)0;
                        long long *l_159 = &g_100;
                        unsigned short *l_160 = &g_161;
                        g_162 = (safe_rshift_func_uint16_t_u_u(((*l_160) = ((~((*l_159) = (((((safe_div_func_uint16_t_u_u((p_119 ^ 0xD616L), (l_141 , g_29))) > l_154) , (((*p_120) , l_142) != l_155)) , ((*g_26) & 0UL)) < 8UL))) , g_100)), 7));
                    }
                    for (l_154 = 22; (l_154 >= 0); --l_154)
                    {
                        unsigned long long l_183 = 18446744073709551615UL;
                        unsigned short *l_184 = &g_185;
                        short *l_186 = &g_187;
                        short *l_188 = &g_189;
                        char *l_198 = &l_181;
                        char *l_199 = (void*)0;
                        char *l_200 = &g_201;
                        int *l_202 = &l_135;
                        (*p_116) = 0x0B5FFC7BL;
                        l_190 = ((*p_116) = (safe_mul_func_int8_t_s_s((func_4(g_27, g_161, l_167, p_119, ((safe_sub_func_int16_t_s_s(g_29, (((safe_div_func_uint16_t_u_u(((p_119 != ((*l_188) = ((*l_186) ^= (((*l_184) = ((((safe_lshift_func_uint16_t_u_s((func_4((safe_mul_func_int16_t_s_s((p_117 != (safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_167, func_4(p_118, l_135, p_118, p_118, l_180))), l_154))), 0x9083L)), l_181, p_118, g_103, l_135) && g_161), l_182)) > l_183) >= (-4L)) <= l_135)) >= 0x53ECL)))) , 0x2993L), g_3)) && l_183) , g_23))) == g_3)) , (-1L)), (-9L))));
                        (*l_202) = (safe_rshift_func_int8_t_s_u(((*l_200) = ((*l_198) = ((safe_div_func_int32_t_s_s((l_195 >= 18446744073709551612UL), ((*p_116) &= (safe_sub_func_uint16_t_u_u(((*g_26) & p_118), (-1L)))))) || (g_122 == ((void*)0 != p_116))))), 7));
                    }
                    (*l_204) = g_203;
                    (*l_205) = &g_122;

                    ;
                }
                l_206 = &l_154;

                ;
            }
            if (l_190)
                continue;
        }
        if ((*g_121))
            continue;
    }
    return g_122;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_824, "g_824", print_hash_value);
    transparent_crc(g_949, "g_949", print_hash_value);
    transparent_crc(g_959, "g_959", print_hash_value);
    transparent_crc(g_973, "g_973", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_1052, "g_1052", print_hash_value);
    transparent_crc(g_1104, "g_1104", print_hash_value);
    transparent_crc(g_1108, "g_1108", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
