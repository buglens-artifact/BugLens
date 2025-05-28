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



static int g_2 = (-1L);
static int g_15 = 0xC6EFF3DEL;
static char g_44 = 1L;
static int **g_63 = (void*)0;
static int g_66 = (-1L);
static int g_75 = 9L;
static int *g_74 = &g_75;
static unsigned char g_86 = 5UL;
static unsigned short g_92 = 0x678CL;
static unsigned short g_94 = 0UL;
static unsigned short g_96 = 0x6938L;
static int g_157 = 0x218ACB78L;
static unsigned char *g_170 = (void*)0;
static unsigned char **g_169 = &g_170;
static short g_184 = (-1L);
static unsigned g_212 = 4294967295UL;
static unsigned *g_211 = &g_212;
static unsigned g_239 = 18446744073709551615UL;
static short g_249 = 0x6BBEL;
static unsigned short *g_360 = &g_96;
static unsigned short **g_359 = &g_360;
static char g_369 = 1L;
static short g_371 = 0xAEE9L;
static int *g_578 = &g_66;
static int **g_577 = &g_578;
static unsigned g_633 = 0x8543CF99L;
static char g_723 = 1L;
static short g_802 = 0L;
static int g_814 = 0xD1EF6A0BL;
static int *g_851 = (void*)0;
static int *g_982 = (void*)0;
static short **g_1042 = (void*)0;
static int *g_1062 = &g_814;
static unsigned char g_1087 = 0xCFL;
static int g_1124 = 0x75BFF69AL;
static unsigned *g_1184 = &g_239;
static unsigned **g_1183 = &g_1184;
static unsigned ***g_1182 = &g_1183;
static unsigned ***g_1186 = (void*)0;
static unsigned char g_1202 = 0x84L;
static int g_1208 = 0x9EB9A445L;
static unsigned ****g_1217 = (void*)0;



static unsigned char func_1(void);
static char func_6(short p_7, int p_8);
static char func_9(char p_10);
static int func_20(int * p_21, char p_22, int * p_23, unsigned p_24);
static int * func_25(unsigned p_26, int * p_27, unsigned p_28);
static char func_29(char p_30, int p_31, unsigned short p_32, unsigned short p_33);
static int * func_34(int * p_35, short p_36, int * p_37, int * p_38);
static int * func_39(int p_40);
static unsigned char func_41(int p_42, unsigned short p_43);
static unsigned func_55(int * p_56, short p_57, int * p_58);
static unsigned char func_1(void)
{
    unsigned char l_5 = 252UL;
    unsigned char *l_1033 = &g_86;
    unsigned l_1041 = 18446744073709551606UL;
    short *l_1047 = &g_802;
    short **l_1046 = &l_1047;
    unsigned short l_1052 = 65532UL;
    unsigned *l_1055 = &g_212;
    unsigned l_1101 = 0xFFDD7884L;
    int l_1107 = 0xCCE3A34EL;
    int l_1119 = (-2L);
    unsigned short l_1120 = 0x536CL;
    unsigned short l_1123 = 65526UL;
    int *l_1125 = &g_1124;
    short l_1132 = 0x86F4L;
    int *l_1141 = &l_1107;
    int *l_1176 = &g_15;
    int *l_1194 = &g_15;
    unsigned ****l_1216 = &g_1182;
    unsigned l_1226 = 1UL;
    short l_1274 = (-3L);
    for (g_2 = 0; (g_2 > 18); g_2++)
    {
        unsigned short l_11 = 0UL;
        int ***l_1025 = &g_577;
        unsigned char *l_1032 = &l_5;
        unsigned char *l_1034 = &g_86;
        int l_1035 = (-9L);
        int *l_1057 = &l_1035;
        int *l_1061 = (void*)0;
        unsigned l_1083 = 1UL;
        unsigned *l_1086 = &g_239;
        if ((l_5 & func_6((func_9(l_11) ^ (safe_add_func_int8_t_s_s(l_5, (0xFCL == (((*g_360) | ((g_371 = (((*g_578) = (l_1035 = (((((*l_1025) = &g_578) != &g_578) , ((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((((*l_1034) = (safe_div_func_int8_t_s_s(((l_1033 = l_1032) == (void*)0), l_5))) , l_11), g_66)), 0x57L)) & 0x7291L)) ^ l_11))) , g_723)) && 0L)) || 9UL))))), l_5)))
        {
            unsigned *l_1045 = &g_239;
            char l_1050 = 0L;
            short l_1051 = 0x11F9L;
            short *l_1056 = &l_1051;
            l_1035 = (l_1051 = ((safe_lshift_func_uint16_t_u_s((((func_20((func_9(l_1041) , &l_1035), ((((g_1042 != (((*l_1045) = (safe_lshift_func_uint16_t_u_s(((**g_359) = l_5), 9))) , l_1046)) <= (safe_rshift_func_int8_t_s_u(l_11, 4))) , (*g_360)) , (((*g_74) = (l_5 , 2L)) < 0xC2F1FF71L)), l_1045, l_1050) , l_1041) == (-1L)) <= l_1050), 15)) == (-9L)));
            l_1057 = (func_6(l_11, (**g_577)) , func_34(&g_157, ((*l_1047) = l_1052), &g_2, ((((*l_1056) = (l_5 == (((((safe_lshift_func_int8_t_s_u(l_1050, g_249)) ^ l_1035) , l_1055) == (void*)0) && (*g_74)))) , g_92) , &l_1035)));
            if (l_5)
            {
                return l_1050;
            }
            else
            {
                if (l_1051)
                    break;
            }
            return l_1052;
        }
        else
        {
            unsigned char l_1065 = 255UL;
            int *l_1072 = (void*)0;
            for (l_1035 = 27; (l_1035 != (-26)); --l_1035)
            {
                int *l_1060 = &g_814;
                int **l_1066 = &g_851;
                (*l_1060) = ((*g_74) = (-1L));
                if ((*l_1060))
                    break;
                (*l_1066) = l_1060;
                for (g_44 = 23; (g_44 <= (-14)); --g_44)
                {
                    unsigned **l_1070 = &l_1055;
                    unsigned ***l_1069 = &l_1070;
                    int *l_1071 = &g_157;
                    (*l_1069) = &g_211;
                    l_1072 = l_1071;
                }
            }
        }
        (*g_74) = (safe_mod_func_int8_t_s_s((l_1052 & (g_633 | (safe_sub_func_int16_t_s_s(l_5, ((((((*g_578) , (*g_211)) < l_1041) || ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((*g_211), l_1083)), 1)) > (((*l_1086) = (safe_rshift_func_uint16_t_u_s(((*g_1062) != l_1052), l_1041))) , (**g_359)))) | (**g_359)) & l_5))))), g_1087));
        g_1062 = &g_15;
    }
    for (g_92 = (-17); (g_92 == 2); g_92++)
    {
        int l_1104 = 0xBD267928L;
        unsigned short *l_1106 = (void*)0;
        unsigned short **l_1105 = &l_1106;
        int *l_1110 = &g_157;
        (*l_1110) = ((*g_74) = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(g_94, ((*g_360) < (safe_unary_minus_func_uint8_t_u(((*l_1033) = (safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u(l_1052, ((*g_1062) = (l_1101 || ((safe_div_func_int32_t_s_s(((l_1104 && (l_1107 = (((*l_1105) = (*g_359)) != (*g_359)))) != (l_1041 , ((safe_rshift_func_uint16_t_u_u(l_1104, l_1101)) || (*g_211)))), l_1104)) | g_184))))), g_94)), 65531UL)))))))), 7)));
        return (*l_1110);
    }
    if ((safe_div_func_uint8_t_u_u(((*l_1033) = (safe_mod_func_uint16_t_u_u((((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s((((func_20(func_39(((l_1119 <= (~l_1120)) , (((safe_rshift_func_int16_t_s_s(0xBAD7L, l_5)) != l_1123) != ((*g_578) , ((((g_44 , (func_29(g_44, l_1107, (*g_360), (**g_359)) , (*g_1062))) > 0xF650A20FL) ^ l_1107) > g_1124))))), g_1087, &l_1119, g_2) > l_1041) , l_1101) , 0xBFA5L), l_1052)), g_239)) , g_239) != l_1101), l_5))), l_1052)))
    {
        int **l_1126 = (void*)0;
        int **l_1127 = &g_851;
        char *l_1142 = &g_44;
        int *l_1153 = &g_814;
        int l_1160 = 0x91EA256FL;
        char l_1172 = (-8L);
        unsigned l_1174 = 18446744073709551613UL;
        int *l_1175 = &g_814;
        int *l_1179 = &g_2;
        int l_1257 = 0x5DFA83DCL;
        unsigned char ****l_1273 = (void*)0;
        (*l_1127) = l_1125;
        for (l_1107 = (-28); (l_1107 == (-27)); l_1107 = safe_add_func_int8_t_s_s(l_1107, 5))
        {
            unsigned l_1135 = 0x9EC88164L;
            int **l_1138 = &g_1062;
        }
        (*l_1127) = func_39((*l_1125));
        if ((((*l_1142) = (safe_rshift_func_uint8_t_u_s((*l_1125), ((void*)0 != l_1141)))) ^ ((safe_mod_func_uint8_t_u_u((*l_1141), ((safe_lshift_func_int8_t_s_u(((*l_1141) , (safe_lshift_func_uint8_t_u_u((((((*g_360) = ((safe_lshift_func_int8_t_s_s((((((func_55(func_25(g_92, ((*l_1127) = (l_1153 = &l_1107)), g_2), g_157, &l_1107) , (*g_211)) == (*g_74)) | (*g_1062)) | 246UL) >= (*l_1125)), 4)) <= 0UL)) >= 0x8622L) , (*g_211)) || (*l_1153)), g_15))), 0)) ^ 1UL))) , 3L)))
        {
            int l_1162 = 0xAD7B2697L;
            int *l_1193 = (void*)0;
            int l_1229 = 0x68868712L;
            short *l_1231 = (void*)0;
            unsigned char l_1235 = 253UL;
            int l_1239 = 0x935F02F6L;
            int *l_1246 = (void*)0;
            for (g_802 = 0; (g_802 >= 4); g_802++)
            {
                int *l_1161 = (void*)0;
                unsigned l_1173 = 0UL;
                unsigned ****l_1185 = (void*)0;
                if ((0x640402ACL ^ (safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(0xAD74L, (((*g_211) = (**l_1127)) || ((**l_1127) = (*g_1062))))) && 0UL), (0UL >= l_1160)))))
                {
                    l_1161 = (void*)0;
                }
                else
                {
                    char l_1163 = 0xBEL;
                    (*l_1141) = (func_6((~(((*l_1125) = (((func_41(l_1162, l_1163) ^ (-10L)) <= l_1163) , func_41(((*g_74) = (safe_add_func_int32_t_s_s(8L, (safe_rshift_func_int8_t_s_s((((((**l_1127) & ((*l_1125) , ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(l_1172, l_1162)), 3)) & 0L))) >= 0xC5656AC6L) ^ l_1163) , 0x3AL), (*l_1153)))))), (**l_1127)))) , (*l_1125))), l_1173) | (**l_1127));
                    if ((l_1174 ^ l_1162))
                    {
                        return l_1163;
                    }
                    else
                    {
                        (*l_1127) = &g_15;
                    }
                    (*l_1127) = &g_1124;
                    (*l_1127) = func_39(((func_55(l_1161, func_55(&g_157, func_55(l_1175, g_44, &g_814), l_1176), ((*l_1127) = l_1161)) , (*g_1062)) , 0L));
                }
                if (((safe_rshift_func_int16_t_s_u(func_55(l_1179, (((-8L) < g_212) , 1L), &g_814), 11)) , (safe_mod_func_uint32_t_u_u(((((g_1182 == (g_1186 = &g_1183)) || ((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(0xC2L, (*l_1125))), (*g_360))), l_1173)) , l_1173)) ^ 0xC992L) | 0xBCA45018L), (*g_74)))))
                {
                    (*l_1141) = (0L != l_1162);
                }
                else
                {
                    l_1194 = l_1193;
                }
            }
            for (g_212 = 0; (g_212 >= 49); g_212++)
            {
                char l_1197 = 0L;
                unsigned char *l_1198 = &g_1087;
                unsigned char *l_1199 = (void*)0;
                unsigned char *l_1200 = (void*)0;
                unsigned char *l_1201 = &g_1202;
                int *l_1205 = &g_75;
            }
            l_1246 = l_1246;
            if (((safe_mod_func_uint8_t_u_u(g_86, ((func_6((*l_1125), (safe_add_func_int16_t_s_s(((*g_1062) < (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(((*g_360) = (*g_360)), 6)) && ((((safe_rshift_func_int8_t_s_s(((void*)0 != &g_211), 5)) , (*l_1176)) , l_1257) == (safe_unary_minus_func_int32_t_s(0x96EFA609L)))), (*g_1062)))), g_1208))) > g_92) , g_1208))) ^ (*l_1153)))
            {
                (*l_1127) = &g_2;
            }
            else
            {
                unsigned l_1262 = 0x2AE17E2CL;
                unsigned char ***l_1272 = &g_169;
                unsigned char ****l_1271 = &l_1272;
                (*l_1125) = ((*g_74) = (((safe_unary_minus_func_uint16_t_u((safe_div_func_uint32_t_u_u((((*g_211) , 0UL) ^ ((*l_1175) = ((*g_1062) , ((*g_74) || (0x30L == l_1262))))), ((*l_1153) = func_20(&l_1162, g_66, (((*g_74) >= (*g_851)) , (void*)0), (*g_1184))))))) , (*g_360)) == (*l_1125)));
                (*l_1127) = func_25((*l_1176), &l_1162, (((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((l_1271 != l_1273), ((l_1262 , func_41(l_1262, ((!(0x331CL ^ (*l_1176))) <= 0UL))) | 0x38L))), (*g_851))) && 3L), l_1274)) , (*g_578)) , 0x2DD0L) <= (*g_360)), l_1262)) , g_239) || g_66));
            }
        }
        else
        {
            unsigned char l_1275 = 0x69L;
            (*l_1176) = (l_1275 & l_1275);
        }
    }
    else
    {
        int *l_1276 = &l_1107;
        int **l_1277 = &l_1176;
        int **l_1278 = &g_74;
        (*l_1278) = ((*l_1277) = func_25((*g_1184), l_1276, ((*g_1062) <= 0xB9709823L)));
    }
    return (*l_1176);
}







static char func_6(short p_7, int p_8)
{
    unsigned l_1038 = 0UL;
    (*g_74) = (g_96 > (((safe_mod_func_int16_t_s_s(l_1038, 1UL)) == p_8) , l_1038));
    return l_1038;
}







static char func_9(char p_10)
{
    int *l_322 = &g_2;
    short l_902 = 0xAB53L;
    int ***l_1011 = (void*)0;
    for (p_10 = 0; (p_10 < (-4)); p_10 = safe_sub_func_int16_t_s_s(p_10, 8))
    {
        int *l_14 = &g_15;
        unsigned l_853 = 0x62F8D9F0L;
        unsigned short **l_870 = &g_360;
        int *l_952 = &g_814;
        unsigned l_953 = 0xF2AFBBDBL;
        int *l_989 = &g_814;
        (*l_14) = g_2;
    }
    return p_10;
}







static int func_20(int * p_21, char p_22, int * p_23, unsigned p_24)
{
    return (*g_74);
}







static int * func_25(unsigned p_26, int * p_27, unsigned p_28)
{
    int *l_852 = &g_75;
    return l_852;
}







static char func_29(char p_30, int p_31, unsigned short p_32, unsigned short p_33)
{
    unsigned l_712 = 0x8E18FB65L;
    char *l_725 = &g_723;
    char **l_724 = &l_725;
    int *l_733 = &g_15;
    char l_777 = (-1L);
    unsigned char **l_782 = &g_170;
    unsigned short ***l_844 = (void*)0;
    int l_845 = (-1L);
    unsigned char *l_846 = &g_86;
    short l_849 = 0xA072L;
    int **l_850 = &g_74;
    for (g_15 = 25; (g_15 <= (-6)); g_15--)
    {
        short l_702 = 0L;
        int **l_711 = &g_74;
        unsigned char ***l_731 = &g_169;
        unsigned char ****l_730 = &l_731;
        unsigned char l_751 = 4UL;
        if (((((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((l_702 == (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s(g_239, ((&p_33 == (void*)0) || l_702))), (safe_rshift_func_int8_t_s_s(l_702, func_55(((*l_711) = &p_31), l_712, &g_157))))), p_31))))), p_32)) < l_712) ^ l_712) , (*g_74)))
        {
            short l_721 = 0x7A69L;
            int l_737 = 0x748B95B3L;
            (*g_74) = p_30;
            for (g_94 = (-10); (g_94 == 27); g_94 = safe_add_func_int32_t_s_s(g_94, 1))
            {
                int *l_758 = (void*)0;
                for (g_369 = 0; (g_369 != (-22)); g_369 = safe_sub_func_uint16_t_u_u(g_369, 1))
                {
                    char *l_722 = &g_723;
                    int l_736 = 0x58D00F89L;
                    char **l_738 = &l_725;
                    if (((safe_lshift_func_uint16_t_u_s(func_41((safe_sub_func_uint16_t_u_u(0x7BFAL, l_721)), l_721), 9)) | (((*l_722) = p_33) , p_30)))
                    {
                        short *l_726 = &l_721;
                        int l_729 = 0L;
                        int *l_732 = &l_729;
                        (*l_711) = func_34(&p_31, ((*l_726) = (l_724 == (void*)0)), func_39((((l_712 & (safe_div_func_uint16_t_u_u((((&g_170 != ((p_32 , 0x9145710DL) , &g_170)) <= ((*l_725) = (-1L))) || l_729), (**g_359)))) , l_730) != (void*)0)), &g_15);
                        (*l_732) = p_31;
                    }
                    else
                    {
                        char ***l_739 = &l_724;
                        char ***l_740 = &l_738;
                        int l_743 = 0xF071C765L;
                        unsigned char *l_750 = &g_86;
                        unsigned short *l_752 = &g_92;
                        int *l_753 = &g_157;
                        (*l_711) = ((l_737 = (((func_55(&p_31, g_371, l_733) , &g_359) == (void*)0) , (safe_sub_func_int32_t_s_s((l_736 | (((*l_733) < p_31) <= 255UL)), 0xE6D68A1BL)))) , (void*)0);
                        (*l_740) = ((*l_739) = l_738);
                        (*l_753) = (p_31 = ((safe_mod_func_int16_t_s_s(p_31, func_41(l_743, ((*l_752) = (p_32 = (((void*)0 == (*g_169)) , (safe_lshift_func_uint16_t_u_u(((*l_733) , (p_33 = ((l_737 = p_33) , ((*g_360) = ((safe_lshift_func_uint8_t_u_u(((5L == (safe_mod_func_uint8_t_u_u(((*l_750) = ((void*)0 != &g_239)), (-1L)))) , g_369), 4)) , l_751))))), (*l_733))))))))) & 0xB7018687L));
                        (*l_753) = ((safe_sub_func_int16_t_s_s(1L, p_31)) > (((*l_752) = ((**l_711) <= (((*g_211) || (safe_rshift_func_uint16_t_u_s(func_55(l_758, ((void*)0 != &g_169), &g_2), p_33))) <= p_32))) < l_721));
                    }
                }
                (*l_711) = l_758;
            }
            (*l_711) = &p_31;
        }
        else
        {
            int *l_759 = &g_2;
            short *l_764 = (void*)0;
            unsigned *l_765 = &g_239;
            (*l_711) = func_34(l_759, ((*g_74) , (p_30 != (&l_759 != &l_759))), l_733, l_733);
            (*l_711) = func_39((*g_74));
            (*l_711) = &g_157;
            (*l_711) = l_765;
        }
        (*l_711) = &p_31;
    }
    if ((((*l_733) , ((safe_unary_minus_func_int32_t_s((safe_sub_func_uint32_t_u_u(((func_41(((0x41L ^ (((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((*l_733), 5UL)), (safe_sub_func_uint16_t_u_u((**g_359), p_30)))) == (*g_74)) < (safe_mod_func_uint8_t_u_u(((l_725 != l_725) == (*l_733)), g_369)))) & (*l_733)), p_33) , g_371) & g_94), l_777)))) & (**g_359))) || g_94))
    {
        int **l_783 = &g_74;
        for (g_94 = 0; (g_94 > 13); g_94 = safe_add_func_uint8_t_u_u(g_94, 7))
        {
            return g_369;
        }
        (*l_783) = func_39(((*l_733) = ((safe_rshift_func_uint8_t_u_u(p_32, 1)) > (&g_170 == l_782))));
        (*l_783) = &p_31;
    }
    else
    {
        short l_792 = 0x6181L;
        int *l_801 = &g_15;
        int l_822 = 1L;
        for (g_96 = 25; (g_96 != 36); g_96++)
        {
            int *l_788 = &g_15;
            unsigned short l_793 = 0xB053L;
            int l_836 = 0xADA39B11L;
            for (g_66 = 0; (g_66 != 14); g_66 = safe_add_func_int32_t_s_s(g_66, 1))
            {
                int **l_789 = &l_733;
                short *l_800 = &g_184;
                (*l_789) = ((*g_211) , l_788);
                if ((safe_mod_func_int32_t_s_s(l_792, ((((*g_211) = (*g_211)) != ((g_802 = ((*l_725) = ((((p_32 || p_33) != (+(func_55(((l_793 < (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((**l_789), g_723)), 3))) , (void*)0), ((*l_800) = (safe_add_func_uint16_t_u_u((**g_359), 0x1D6AL))), l_801) >= 0x7943FBEEL))) , g_371) & g_2))) <= 0x5DL)) , p_31))))
                {
                    int *l_803 = &g_157;
                    (*l_789) = l_803;
                }
                else
                {
                    if ((*g_74))
                        break;
                    (*l_788) = (*l_788);
                    if ((*l_733))
                        break;
                }
                (**l_789) = ((*l_801) >= func_55((*l_789), (*l_801), &p_31));
                if (p_32)
                {
                    short l_804 = 0xC835L;
                    unsigned short ***l_807 = &g_359;
                    int *l_821 = &g_157;
                    (*l_733) = ((*g_360) & (((((*l_733) == func_55((l_804 , l_801), p_32, l_733)) >= ((**l_789) >= ((**l_724) = (safe_sub_func_int32_t_s_s(((*g_211) , p_33), (*l_733)))))) , (**g_577)) , 8L));
                    (*l_801) = (*g_74);
                    if (p_31)
                        continue;
                    (*l_788) = (l_807 == ((safe_sub_func_uint16_t_u_u((p_32 = ((safe_sub_func_uint8_t_u_u((0xC496L & (((*l_821) = ((safe_add_func_uint8_t_u_u(0x15L, ((func_55(l_733, ((*l_800) = g_814), ((safe_div_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((0L > (7L < 4294967291UL)), (func_55(l_788, g_157, l_821) , p_32))) != p_31), (-1L))) , l_821)) <= 0x1DACL) && 0L))) | p_31)) != p_33)), 254UL)) , l_822)), 3L)) , &g_359));
                }
                else
                {
                    int l_834 = (-6L);
                    (*l_789) = l_733;
                    for (p_31 = 4; (p_31 == 4); p_31++)
                    {
                        unsigned *l_827 = &g_633;
                        int l_835 = 0xF2777EF0L;
                        l_836 = ((*g_74) = (+(((((*l_827) = ((*g_211) = (*g_211))) ^ ((safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(((((*l_788) && ((*l_788) == 4L)) != (g_371 , p_30)) ^ (safe_add_func_uint8_t_u_u(l_834, 0xA5L))), g_44)) >= l_835) || (**g_359)), g_239)) >= (**l_789))) , (**g_359)) , 0x6DCC9F64L)));
                        if (p_32)
                            break;
                    }
                    if (p_32)
                    {
                        (*l_789) = l_801;
                    }
                    else
                    {
                        (*l_789) = &g_157;
                    }
                    p_31 = (-8L);
                }
            }
        }
        p_31 = p_30;
    }
    for (g_814 = 0; (g_814 == 15); g_814 = safe_add_func_int32_t_s_s(g_814, 6))
    {
        int **l_839 = &g_74;
        (*l_839) = &g_814;
    }
    l_733 = ((*l_850) = func_39((func_55(l_733, ((safe_mod_func_uint8_t_u_u(func_41(((**g_359) & ((safe_mod_func_uint32_t_u_u(func_55(l_733, ((((((l_844 != l_844) != ((((((((*l_846) = l_845) , &g_578) == (void*)0) , func_41((safe_sub_func_uint16_t_u_u(0x744DL, p_32)), p_31)) || (*g_211)) , 0x1E8BL) < (*l_733))) == 1UL) , (*l_733)) , g_15) , p_33), l_733), (*l_733))) == p_33)), (*l_733)), g_2)) , g_96), &g_157) , l_849)));
    return g_15;
}







static int * func_34(int * p_35, short p_36, int * p_37, int * p_38)
{
    int *l_323 = (void*)0;
    int *l_324 = &g_157;
    unsigned short *l_358 = &g_96;
    unsigned short **l_357 = &l_358;
    short l_374 = 0L;
    char l_377 = (-1L);
    unsigned char ***l_408 = &g_169;
    char l_448 = 0L;
    int ***l_457 = &g_63;
    unsigned l_462 = 0x4C5F02C2L;
    int l_562 = (-7L);
    (*l_324) = 0xAAB39F8DL;
    if ((0xA2L != p_36))
    {
        unsigned l_342 = 0x1D2B577DL;
        (*l_324) = (*g_74);
        for (g_92 = 5; (g_92 == 30); g_92 = safe_add_func_uint8_t_u_u(g_92, 8))
        {
            unsigned short l_329 = 1UL;
            int l_352 = (-3L);
            for (g_44 = 0; (g_44 <= (-10)); g_44 = safe_sub_func_int32_t_s_s(g_44, 8))
            {
                if ((*l_324))
                    break;
            }
            if (l_329)
                continue;
            for (g_66 = (-2); (g_66 == (-27)); g_66 = safe_sub_func_int16_t_s_s(g_66, 1))
            {
                int *l_332 = &g_2;
                int **l_333 = &l_324;
                int **l_334 = &l_323;
                unsigned short *l_347 = &l_329;
                short *l_348 = &g_249;
                short *l_349 = &g_184;
                char *l_350 = &g_44;
                int *l_351 = &g_157;
                (*l_334) = ((*l_333) = l_332);
                (*l_333) = p_38;
                for (g_184 = 22; (g_184 != (-30)); g_184 = safe_sub_func_int16_t_s_s(g_184, 1))
                {
                    unsigned l_337 = 1UL;
                    l_337 = 0x85B82C6DL;
                }
                l_352 = ((*l_351) = (safe_mod_func_int16_t_s_s((((func_55(p_35, p_36, (((*l_350) = ((safe_rshift_func_int8_t_s_u((l_342 & ((*l_349) = ((g_184 ^ (safe_add_func_int16_t_s_s((((*l_348) = ((*g_74) ^ ((((((*g_211) != (*l_323)) <= (*g_211)) ^ ((*l_347) = ((safe_lshift_func_int8_t_s_u(((**l_333) , 0L), l_329)) && p_36))) != 0xBA2CL) , (*p_35)))) & (*l_324)), p_36))) , g_75))), p_36)) && l_329)) , p_38)) , (*l_332)) , 1UL) ^ 0xDDL), (*l_323))));
            }
        }
    }
    else
    {
        int *l_353 = &g_75;
        int **l_354 = &l_353;
        short *l_361 = &g_249;
        short *l_362 = (void*)0;
        short *l_363 = &g_184;
        unsigned char l_364 = 0x29L;
        char *l_367 = &g_44;
        char *l_368 = &g_369;
        short *l_370 = &g_371;
        unsigned *l_378 = (void*)0;
        unsigned *l_379 = &g_239;
        unsigned char *l_382 = &g_86;
        unsigned char ***l_446 = &g_169;
        int l_521 = 0xCBB78CD3L;
        unsigned char l_534 = 255UL;
        unsigned short *l_538 = &g_94;
        (*l_354) = l_353;
    }
    for (g_249 = 0; (g_249 < 9); g_249 = safe_add_func_uint16_t_u_u(g_249, 6))
    {
        int l_612 = 1L;
        int *l_613 = &g_157;
        int **l_616 = (void*)0;
        unsigned l_636 = 4294967288UL;
        char *l_680 = &g_44;
        char **l_679 = &l_680;
        (*l_613) = l_612;
    }
    return &g_2;
}







static int * func_39(int p_40)
{
    unsigned *l_213 = &g_212;
    unsigned char ***l_216 = &g_169;
    int l_226 = 4L;
    int l_227 = 0xE93CE301L;
    int l_263 = 0xCB57D1ACL;
    int *l_305 = (void*)0;
    unsigned l_315 = 0x7A40E005L;
    if ((func_41((~0x7D17017AL), g_44) >= (g_211 == (l_213 = &g_212))))
    {
        return l_213;
    }
    else
    {
        unsigned char l_221 = 1UL;
        int *l_222 = &g_75;
        unsigned short *l_225 = &g_94;
        unsigned char **l_245 = &g_170;
        int *l_270 = &g_75;
        unsigned char l_284 = 0xBEL;
        int **l_314 = &l_222;
        if ((g_2 <= (((void*)0 != l_216) != ((safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_u(((func_41(l_221, p_40) && ((func_55(l_222, ((l_226 = ((*l_222) = (p_40 = (((safe_lshift_func_uint16_t_u_s((*l_222), 15)) , l_225) != (void*)0)))) & 0L), l_213) && p_40) || p_40)) & 2UL), g_92)) >= l_227) ^ 0x76E8L), g_184)) == 4294967289UL))))
        {
            int l_246 = 0L;
            unsigned char **l_252 = &g_170;
            int *l_280 = &g_2;
            int *l_287 = (void*)0;
            int *l_288 = &g_157;
            for (g_96 = 0; (g_96 > 39); g_96++)
            {
                unsigned *l_238 = &g_239;
                int l_240 = (-2L);
                int *l_241 = &l_227;
                char l_282 = 0xC7L;
            }
            if (((*l_288) = ((*l_222) = ((safe_rshift_func_int16_t_s_u((p_40 , ((*g_211) & (*g_211))), (func_55(&p_40, (((void*)0 == &g_94) > (*g_211)), &p_40) || 0UL))) , (-1L)))))
            {
                unsigned char l_294 = 0x3AL;
                for (g_96 = 15; (g_96 > 39); ++g_96)
                {
                    unsigned char *l_295 = &g_86;
                    (*l_270) = (safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s(g_239)) & ((g_239 <= g_96) < ((*l_295) = l_294))), (safe_rshift_func_int8_t_s_s(p_40, 7))));
                }
            }
            else
            {
                int *l_303 = &l_226;
                int **l_304 = (void*)0;
                for (p_40 = 0; (p_40 == (-20)); p_40--)
                {
                    int *l_302 = &l_227;
                    (*l_222) = (safe_sub_func_int16_t_s_s(g_75, p_40));
                    return l_280;
                }
                l_305 = &p_40;
            }
        }
        else
        {
            for (g_66 = 0; (g_66 > 28); g_66 = safe_add_func_int8_t_s_s(g_66, 2))
            {
                int *l_308 = &l_227;
                int **l_309 = &l_308;
                (*l_309) = l_308;
                (*l_309) = &p_40;
            }
            (*l_222) = func_55(((safe_add_func_int16_t_s_s(0xEE40L, (safe_lshift_func_int8_t_s_u(g_184, 7)))) , &p_40), g_184, &l_226);
        }
        (*l_314) = &g_15;
    }
    if (((((((*g_74) ^ 0xACFC0601L) & g_94) && p_40) , l_315) <= (*g_211)))
    {
        int *l_316 = &l_226;
        (*l_316) = 0x1976BEC0L;
    }
    else
    {
        unsigned char l_317 = 255UL;
        int *l_318 = &g_2;
        int **l_319 = &l_318;
        p_40 = ((*g_211) ^ l_317);
        (*l_319) = l_318;
    }
    return &g_75;
}







static unsigned char func_41(int p_42, unsigned short p_43)
{
    unsigned l_61 = 0x25036FFEL;
    int *l_62 = &g_15;
    int **l_205 = (void*)0;
    int **l_206 = &l_62;
    int **l_207 = (void*)0;
    int *l_208 = &g_75;
    int **l_209 = (void*)0;
    int **l_210 = &g_74;
    g_66 = ((safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(g_44, 0)) ^ p_43), 0xB402L)), ((((safe_mod_func_uint32_t_u_u(func_55(&p_42, p_42, ((((safe_sub_func_int32_t_s_s((0x0CE695EFL < l_61), (g_15 , ((&g_15 == l_62) & p_42)))) > 0xBBL) == g_15) , (void*)0)), 0xD319D7FCL)) || (*l_62)) < p_42) || 1UL))), 7)) < (*l_62));
    for (p_43 = (-10); (p_43 != 12); p_43++)
    {
        unsigned l_71 = 18446744073709551615UL;
        int l_72 = 0xAD92EDCDL;
        char l_144 = 0x2CL;
        int *l_175 = &l_72;
        for (g_66 = 0; (g_66 < (-5)); g_66 = safe_sub_func_uint8_t_u_u(g_66, 5))
        {
            unsigned char *l_100 = (void*)0;
            int l_127 = 3L;
        }
    }
    (*l_210) = (l_208 = ((*l_206) = l_62));
    return (*l_62);
}







static unsigned func_55(int * p_56, short p_57, int * p_58)
{
    int *l_65 = &g_15;
    int **l_64 = &l_65;
    g_63 = g_63;
    (*l_64) = p_58;
    (*l_64) = (*l_64);
    return p_57;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_1087, "g_1087", print_hash_value);
    transparent_crc(g_1124, "g_1124", print_hash_value);
    transparent_crc(g_1202, "g_1202", print_hash_value);
    transparent_crc(g_1208, "g_1208", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
