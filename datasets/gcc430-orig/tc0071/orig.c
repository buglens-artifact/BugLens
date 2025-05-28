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



static unsigned g_10 = 0x2B165808L;
static unsigned char g_25 = 0UL;
static int g_27 = 0x5F7626A9L;
static int g_47 = (-1L);
static int *g_52 = (void*)0;
static int **g_51 = &g_52;
static int g_53 = (-9L);
static long long g_58 = 0L;
static unsigned long long g_72 = 0UL;
static int **g_79 = (void*)0;
static int ***g_78 = &g_79;
static short g_95 = 0x8488L;
static short g_103 = (-10L);
static char g_105 = (-1L);
static unsigned short g_107 = 1UL;
static long long g_117 = 0xA660014B153CB79DLL;
static unsigned g_120 = 0x2590C119L;
static unsigned char g_131 = 251UL;
static unsigned char g_138 = 0xFFL;
static unsigned char *g_137 = &g_138;
static char g_141 = 7L;
static unsigned g_145 = 4294967290UL;
static short g_208 = 0L;
static unsigned g_215 = 0xC771BE40L;
static int g_224 = 2L;
static unsigned g_230 = 7UL;
static int g_247 = 0x5D329C14L;
static unsigned long long g_272 = 0UL;
static short g_285 = 0x9F42L;
static int g_295 = (-10L);
static long long g_302 = 0x5CA3CFAA44792A7BLL;
static unsigned long long g_322 = 18446744073709551615UL;
static unsigned g_377 = 1UL;
static unsigned g_561 = 0xCD46B94CL;
static int g_596 = 1L;
static short g_600 = 0x0A31L;
static unsigned long long g_616 = 0x04268F694B0D4290LL;
static long long g_708 = 8L;
static unsigned char g_754 = 0xBDL;
static short **g_763 = (void*)0;
static short ***g_762 = &g_763;
static unsigned short *g_787 = &g_107;
static unsigned short **g_786 = &g_787;
static unsigned g_857 = 4294967287UL;
static const int *g_888 = &g_27;
static char *g_901 = &g_141;
static char **g_900 = &g_901;
static int * const g_905 = (void*)0;
static int g_1001 = 5L;
static int g_1007 = 5L;
static unsigned g_1016 = 4UL;
static char g_1096 = 0L;
static long long g_1106 = 6L;
static int g_1109 = 0xDA09D5CAL;
static char g_1110 = 0L;
static unsigned g_1112 = 0UL;
static short *g_1118 = &g_103;
static short **g_1117 = &g_1118;
static const short *g_1177 = &g_208;
static const short **g_1176 = &g_1177;
static const short ***g_1175 = &g_1176;
static const short ****g_1174 = &g_1175;
static long long g_1190 = (-7L);
static short g_1192 = 0xF23BL;
static unsigned g_1193 = 0xE7A61B20L;



static char func_1(void);
static int func_2(unsigned p_3);
static long long func_4(char p_5, int p_6, short p_7, short p_8, unsigned char p_9);
static unsigned short func_16(unsigned p_17, int p_18, unsigned short p_19, long long p_20);
static short func_34(char p_35, unsigned char * p_36, int * p_37);
static unsigned short func_42(int * p_43);
static int ** func_48(long long p_49, unsigned p_50);
static unsigned func_59(int ** p_60, const int p_61, unsigned char * p_62, long long * p_63);
static int ** func_64(int *** p_65, unsigned char p_66);
static int *** func_67(unsigned p_68, unsigned p_69);
static char func_1(void)
{
    int l_15 = 0L;
    unsigned char *l_23 = (void*)0;
    unsigned char *l_24 = &g_25;
    int *l_26 = &g_27;
    char *l_860 = &g_105;
    unsigned long long *l_861 = &g_616;
    unsigned short l_862 = 1UL;
    int l_930 = 0x7CF2D83CL;
    int l_951 = 6L;
    short l_1159 = 0xB7B0L;
    int l_1181 = (-1L);
    int l_1186 = 0x2A665D20L;
    if (func_2((func_4(g_10, ((safe_sub_func_int64_t_s_s((4L || (((*l_861) &= ((safe_rshift_func_int16_t_s_s(((0x6AL >= 0x72L) & ((*l_860) = (l_15 != func_16(g_10, ((*l_26) = (((*l_24) = (((safe_lshift_func_int16_t_s_u(0L, 14)) == (!(255UL > (l_15 ^ 0xAA05D76270E7AD53LL)))) < 0xD06721F7L)) && (-3L))), g_10, g_10)))), g_302)) > l_15)) | g_295)), 0xB959469958DFC9A0LL)) || g_708), l_15, g_247, l_862) && g_53)))
    {
        char l_885 = 0x2EL;
        const int *l_889 = &g_47;
        int l_914 = 0x2A29304AL;
        for (l_15 = 0; (l_15 == (-11)); l_15 = safe_sub_func_int32_t_s_s(l_15, 8))
        {
            unsigned char l_887 = 0x5DL;
            int l_990 = 0x4A6100C7L;
        }
        (*l_26) = (((*g_137) <= (((*l_860) ^= (safe_add_func_uint8_t_u_u((*l_26), (*g_137)))) | ((*l_24)++))) || 0x5408L);
        (*l_26) = func_59((*g_78), (*g_888), &g_25, l_861);
    }
    else
    {
        int *l_1023 = &g_224;
        int *l_1024 = (void*)0;
        int *l_1025 = (void*)0;
        int *l_1026 = &l_930;
        int *l_1027 = &g_27;
        int *l_1028 = &g_27;
        int *l_1029 = &l_930;
        int l_1030 = (-5L);
        int *l_1031 = (void*)0;
        int *l_1032 = &l_1030;
        int *l_1033 = &g_47;
        int *l_1034 = &g_295;
        int *l_1035 = &g_224;
        int *l_1036 = &l_951;
        int *l_1037 = &l_951;
        int *l_1038 = &g_224;
        int *l_1039 = &g_596;
        int *l_1040 = &l_1030;
        int *l_1041 = (void*)0;
        int *l_1042 = &l_930;
        int *l_1043 = &g_224;
        int *l_1044 = &g_295;
        int *l_1045 = &g_596;
        int *l_1046 = &g_596;
        int *l_1047 = &g_596;
        int *l_1048 = &l_930;
        int *l_1049 = (void*)0;
        int *l_1050 = &g_596;
        int *l_1051 = &g_295;
        int *l_1052 = &l_951;
        int *l_1053 = (void*)0;
        int *l_1054 = (void*)0;
        int l_1055 = 4L;
        int *l_1056 = &g_596;
        int *l_1057 = &g_47;
        int *l_1058 = &g_47;
        int *l_1059 = &l_951;
        int l_1060 = 8L;
        int *l_1061 = &g_295;
        int *l_1062 = (void*)0;
        int l_1063 = 0x5DC8DA06L;
        int *l_1064 = &l_1060;
        int *l_1065 = &g_224;
        int *l_1066 = &g_224;
        int *l_1067 = &g_47;
        int *l_1068 = &l_930;
        int *l_1069 = &l_930;
        int *l_1070 = (void*)0;
        int *l_1071 = &g_27;
        int *l_1072 = (void*)0;
        int *l_1073 = &l_1030;
        int *l_1074 = &l_930;
        int *l_1075 = &g_596;
        int *l_1076 = (void*)0;
        int *l_1077 = &l_1060;
        int *l_1078 = &l_1060;
        int *l_1079 = &l_1055;
        int *l_1080 = &l_930;
        int *l_1081 = &g_224;
        int *l_1082 = &g_47;
        int *l_1083 = &l_1030;
        int *l_1084 = &g_295;
        int *l_1085 = &l_1060;
        int *l_1086 = &l_1063;
        int *l_1087 = &l_1060;
        int *l_1088 = (void*)0;
        int *l_1089 = &g_224;
        int *l_1090 = &l_1063;
        int *l_1091 = &g_47;
        int *l_1092 = &g_47;
        int *l_1093 = (void*)0;
        int *l_1094 = &g_27;
        int *l_1095 = &l_1060;
        int *l_1097 = &l_930;
        int *l_1098 = &g_224;
        int *l_1099 = &l_1063;
        int *l_1100 = &l_1030;
        int *l_1101 = (void*)0;
        int *l_1102 = (void*)0;
        int *l_1103 = &g_224;
        int *l_1104 = &l_1055;
        int *l_1105 = &g_27;
        int *l_1107 = &g_295;
        int *l_1108 = &l_930;
        int *l_1111 = &l_1055;
        int *l_1115 = (void*)0;
        char *l_1116 = &g_105;
        --g_1112;
        (*g_51) = &l_1030;

        ;
        (*l_1032) = ((g_105 && ((*g_900) != l_1116)) && ((void*)0 != g_1117));
        if (((safe_sub_func_int16_t_s_s((+(((safe_lshift_func_int8_t_s_u((**g_900), 1)) <= (safe_rshift_func_int8_t_s_s((*l_26), 4))) >= (*l_26))), ((*g_787)++))) & g_224))
        {
            (*l_1100) = (*g_52);
        }
        else
        {
            short l_1127 = 0L;
            unsigned l_1128 = 1UL;
            short l_1147 = 0x3ED9L;
            int l_1158 = 0xC741650AL;
            short ****l_1172 = &g_762;
            int *l_1182 = &g_295;
            int *l_1183 = &l_1158;
            int *l_1184 = (void*)0;
            int *l_1185 = &g_27;
            int *l_1187 = &g_1109;
            int *l_1188 = (void*)0;
            int *l_1189 = &l_1186;
            int *l_1191 = (void*)0;
            if ((0xF8AD4E4DL && ((*l_1064) = l_1127)))
            {
                int **l_1148 = (void*)0;
                (*l_1091) = l_1128;
                if (((*l_1108) = (0x8CA5685C06D03424LL != 5L)))
                {
                    int l_1150 = 1L;
                    for (g_215 = 0; (g_215 > 53); g_215++)
                    {
                        (*g_51) = &l_1063;

                        ;
                    }

                    ;
                    if ((*l_1104))
                    {
                        long long l_1131 = 5L;
                        (*g_51) = (void*)0;

                        ;
                        l_1131 = (-1L);
                        (*l_1082) ^= func_2(g_103);
                        (*g_51) = (*g_51);
                    }
                    else
                    {
                        short l_1136 = 0x107DL;
                        const short *l_1149 = (void*)0;
                        short *l_1151 = &g_95;
                        (*l_1044) ^= (safe_sub_func_int16_t_s_s(((*l_1151) = ((safe_rshift_func_int16_t_s_u(l_1136, 3)) ^ (safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((*l_26), 15)) <= (safe_mod_func_int16_t_s_s(((*g_1118) = (func_4((*g_901), (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_1147, 0L)), ((*g_78) == l_1148))), (0x401ECBC08E6EC3A9LL <= (&l_1136 != l_1149)), l_1150, (*g_137)) == (*g_52))), l_1150))), 13)))), l_1136));
                    }

                    ;
                    return (**g_900);


                }
                else
                {
                    int *l_1152 = &l_1063;
                    (*g_51) = l_1152;

                    ;
                    for (g_1001 = 0; (g_1001 == (-27)); g_1001--)
                    {
                        unsigned l_1155 = 0UL;
                        (*l_1074) = func_2(l_1155);
                        (*l_1048) &= 0x6B44E91CL;
                        (*g_52) &= l_1147;
                    }
                }

                ;
            }
            else
            {
                unsigned char l_1160 = 0xA2L;
                const short ****l_1178 = &g_1175;
                for (g_272 = 0; (g_272 > 35); g_272++)
                {
                    int l_1167 = 1L;
                    int *l_1168 = &g_47;
                    long long *l_1169 = &g_1106;
                    short *****l_1173 = &l_1172;
                    ++l_1160;
                    (*g_51) = (*g_51);
                    (*l_1032) = (safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(0x524EAA50EE89694ELL, (+((l_1167 > ((*l_1169) = (func_16(g_1109, (**g_51), (**g_786), ((l_1168 = &l_1060) != (*g_51))) <= (0xA50744A4L >= g_1096)))) > (*l_26))))), (*g_52)));

                    ;
                    (*l_1035) = (safe_rshift_func_int16_t_s_u((((*l_26) ^ ((*l_26) && func_16(g_857, ((*l_1075) &= ((((*l_1173) = l_1172) == (l_1178 = g_1174)) != ((((void*)0 != &g_78) >= 0UL) > (safe_sub_func_int16_t_s_s(((*g_787) <= (**g_786)), (*l_26)))))), (**g_786), g_141))) >= l_1160), 15));
                }
                (*l_1045) = (**g_51);
            }

            ;
            g_1193--;
        }

        ;
    }


    return (*g_901);
}







static int func_2(unsigned p_3)
{
    long long l_870 = 3L;
    int ***l_877 = &g_51;
    long long *l_878 = &g_117;
    char *l_879 = (void*)0;
    char *l_880 = &g_105;
    int *l_881 = (void*)0;
    int *l_882 = &g_295;
    (*l_882) = l_870;
    (*g_51) = (**l_877);
    (*g_51) = (**l_877);
    return p_3;
}







static long long func_4(char p_5, int p_6, short p_7, short p_8, unsigned char p_9)
{
    int *l_863 = &g_47;
    int l_869 = 2L;
    l_863 = &p_6;

    ;
    for (g_272 = 14; (g_272 == 19); g_272 = safe_add_func_int32_t_s_s(g_272, 8))
    {
        short l_866 = 0x011BL;
        (*l_863) ^= l_866;
        (*l_863) = (safe_rshift_func_uint8_t_u_s(((*g_137) = func_16(g_53, p_8, l_869, (((*l_863) == (0UL >= 0x881C86CEL)) ^ (*l_863)))), 3));
    }
    return p_8;
}







static unsigned short func_16(unsigned p_17, int p_18, unsigned short p_19, long long p_20)
{
    int *l_32 = &g_27;
    int l_136 = (-1L);
    int **l_407 = &l_32;
    int l_497 = 0xFE8C370AL;
    unsigned char *l_537 = (void*)0;
    long long *l_538 = &g_58;
    long long l_548 = (-1L);
    unsigned short * const l_587 = &g_107;
    short l_598 = 0xA0B1L;
    int l_731 = 5L;
    char l_775 = 0x78L;
    unsigned short l_791 = 6UL;
    int *l_792 = &g_596;
    int *l_793 = &l_731;
    int *l_794 = &l_497;
    int *l_795 = (void*)0;
    int *l_796 = (void*)0;
    int *l_797 = (void*)0;
    int *l_798 = &g_224;
    int *l_799 = (void*)0;
    int l_800 = 0x30E178A0L;
    int *l_801 = &l_497;
    int *l_802 = &l_731;
    int *l_803 = (void*)0;
    int *l_804 = &g_596;
    int *l_805 = &l_800;
    int *l_806 = &g_47;
    int *l_807 = &l_136;
    int *l_808 = (void*)0;
    int *l_809 = &g_295;
    int *l_810 = (void*)0;
    int *l_811 = &g_27;
    int *l_812 = &l_800;
    int *l_813 = &g_27;
    int *l_814 = &g_47;
    int *l_815 = (void*)0;
    int *l_816 = &g_47;
    int *l_817 = &l_497;
    int *l_818 = &g_27;
    int *l_819 = &l_497;
    int l_820 = 0x19357EF3L;
    int *l_821 = &g_27;
    int *l_822 = &l_136;
    int *l_823 = &g_47;
    int *l_824 = &g_224;
    int *l_825 = &l_497;
    int *l_826 = &g_596;
    int *l_827 = &l_136;
    int *l_828 = &g_27;
    int *l_829 = &g_27;
    int *l_830 = (void*)0;
    int *l_831 = (void*)0;
    int l_832 = 0xA32CBFFBL;
    int *l_833 = &l_832;
    int *l_834 = &l_820;
    int *l_835 = &g_596;
    int *l_836 = &l_800;
    int *l_837 = &g_224;
    int l_838 = 0x0F24C3A5L;
    int *l_839 = &g_295;
    int *l_840 = &l_820;
    int *l_841 = &l_136;
    int *l_842 = &l_800;
    int *l_843 = (void*)0;
    int *l_844 = &l_497;
    int *l_845 = &l_820;
    int *l_846 = &g_47;
    int *l_847 = &l_800;
    int *l_848 = &l_136;
    int *l_849 = &g_224;
    int l_850 = 0x1D578C2FL;
    int *l_851 = &l_800;
    int *l_852 = &g_47;
    int *l_853 = &g_295;
    int *l_854 = &l_731;
    int *l_855 = &g_295;
    int *l_856 = (void*)0;
    for (p_19 = 7; (p_19 < 31); ++p_19)
    {
        int *l_31 = &g_27;
        int **l_30 = &l_31;
        int **l_33 = &l_32;
        char *l_139 = &g_105;
        char *l_140 = &g_141;
        long long *l_412 = &g_117;
        int l_441 = 0x7700C973L;
        int l_502 = 1L;
        int *l_547 = (void*)0;
        int l_737 = 0L;
        int l_743 = 0x2DBAA731L;
        int *l_790 = &g_596;
    }
    g_857--;
    return p_17;
}







static short func_34(char p_35, unsigned char * p_36, int * p_37)
{
    short l_142 = (-7L);
    unsigned *l_143 = &g_120;
    unsigned *l_144 = &g_145;
    char *l_154 = &g_141;
    long long *l_157 = &g_58;
    int l_218 = 1L;
    int l_225 = 0x11D501A0L;
    int l_275 = 0x97DD2935L;
    (*p_37) = func_59(func_48(g_95, ((*l_144) = ((*l_143) = l_142))), ((*g_137) < (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((l_142 >= ((safe_sub_func_int8_t_s_s(((*l_154) = g_141), l_142)) | ((func_59(&p_37, (*p_37), &g_138, l_157) || 0UL) <= p_35))), p_35)), 4)), l_142))), &g_131, l_157);
    for (g_72 = 0; (g_72 != 28); g_72++)
    {
        int *l_163 = &g_27;
        int l_170 = 1L;
        int l_189 = 0xFF3C1E06L;
        int l_311 = (-9L);
        int l_318 = 0xD10CE58AL;
        long long *l_346 = &g_117;
        int *l_380 = (void*)0;
        int ***l_383 = &g_79;
        long long *l_390 = &g_302;
        for (p_35 = 0; (p_35 < 10); p_35++)
        {
            char l_162 = (-1L);
            int l_204 = (-1L);
            int l_277 = 2L;
            int l_300 = 0xF1257014L;
            int **l_354 = &l_163;
            int *l_357 = &g_224;
            int *l_358 = &l_275;
            int *l_359 = &l_277;
            int *l_360 = &l_311;
            int *l_361 = (void*)0;
            int *l_362 = &l_311;
            int *l_363 = &l_275;
            int *l_364 = &g_47;
            int *l_365 = (void*)0;
            int *l_366 = &l_277;
            int *l_367 = &l_300;
            int *l_368 = &l_218;
            int *l_369 = &l_275;
            int *l_370 = &l_170;
            int *l_371 = (void*)0;
            int *l_372 = &l_311;
            int *l_373 = &g_295;
            int *l_374 = &l_318;
            int *l_375 = &l_311;
            int *l_376 = &g_47;
            if (l_162)
            {
                (*g_51) = l_163;

                ;
            }
            else
            {
                long long l_166 = (-3L);
                int l_182 = 0x3B3C507CL;
                int l_185 = 0L;
                char *l_339 = (void*)0;
                char *l_340 = &g_105;
                for (g_138 = 25; (g_138 <= 39); ++g_138)
                {
                    (*p_37) = (0L != func_59(&p_37, (*p_37), &g_131, &g_58));
                }
                if (l_166)
                {
                    for (g_47 = 0; (g_47 >= (-7)); --g_47)
                    {
                        short l_169 = 0x4000L;
                        int *l_171 = &g_27;
                        int *l_172 = &l_170;
                        int *l_173 = (void*)0;
                        int *l_174 = &g_27;
                        int *l_175 = &g_27;
                        int *l_176 = (void*)0;
                        int *l_177 = &l_170;
                        int *l_178 = &l_170;
                        int *l_179 = &g_27;
                        int *l_180 = (void*)0;
                        int *l_181 = (void*)0;
                        int *l_183 = &l_170;
                        int *l_184 = &l_170;
                        int *l_186 = (void*)0;
                        int *l_187 = &l_185;
                        int *l_188 = &g_27;
                        int *l_190 = (void*)0;
                        int *l_191 = &l_182;
                        int *l_192 = &l_170;
                        int *l_193 = &g_27;
                        int *l_194 = &g_27;
                        int *l_195 = (void*)0;
                        int *l_196 = &g_27;
                        int *l_197 = &l_185;
                        int *l_198 = &l_189;
                        int *l_199 = &l_170;
                        int *l_200 = &g_27;
                        int *l_201 = &l_170;
                        int *l_202 = &l_189;
                        int *l_203 = &l_170;
                        int *l_205 = &l_170;
                        int *l_206 = &l_185;
                        int *l_207 = &l_182;
                        int *l_209 = &l_204;
                        int *l_210 = &l_170;
                        int *l_211 = &g_27;
                        int *l_212 = &l_170;
                        int *l_213 = &l_170;
                        int *l_214 = &l_170;
                        int *l_219 = &l_182;
                        int *l_220 = (void*)0;
                        int *l_221 = &l_182;
                        int *l_222 = &l_204;
                        int *l_223 = &l_204;
                        int *l_226 = &l_225;
                        int *l_227 = &g_27;
                        int *l_228 = &g_224;
                        int *l_229 = &l_218;
                        (*g_51) = p_37;


                        g_215--;
                        ++g_230;
                    }


                }
                else
                {
                    short l_235 = 8L;
                    int l_276 = 0x7125C51EL;
                    int l_320 = 0x8D875F73L;
                    if (l_218)
                        break;
                    for (g_107 = 2; (g_107 < 37); ++g_107)
                    {
                        int *l_236 = &l_182;
                        int *l_237 = &g_27;
                        int *l_238 = &l_189;
                        int *l_239 = &g_224;
                        int *l_240 = &l_170;
                        int *l_241 = (void*)0;
                        int *l_242 = &l_170;
                        int *l_243 = &l_225;
                        int *l_244 = &g_224;
                        int *l_245 = &g_224;
                        int *l_246 = &l_189;
                        int *l_248 = &g_27;
                        int *l_249 = &l_204;
                        int *l_250 = &l_170;
                        int *l_251 = &l_204;
                        int *l_252 = (void*)0;
                        int *l_253 = &l_185;
                        int *l_254 = &l_218;
                        int *l_255 = &l_225;
                        int *l_256 = &l_204;
                        int *l_257 = &g_27;
                        int *l_258 = &g_47;
                        int *l_259 = &g_47;
                        int *l_260 = &g_47;
                        int *l_261 = (void*)0;
                        int *l_262 = &g_27;
                        int *l_263 = &l_185;
                        int *l_264 = (void*)0;
                        int *l_265 = &l_170;
                        int *l_266 = &l_218;
                        int *l_267 = &g_27;
                        int *l_268 = &g_224;
                        int *l_269 = &l_218;
                        int *l_270 = &g_47;
                        int *l_271 = &l_182;
                        int *l_278 = &g_27;
                        int *l_279 = (void*)0;
                        int *l_280 = &l_182;
                        int *l_281 = &l_185;
                        int *l_282 = &l_225;
                        int *l_283 = (void*)0;
                        int *l_284 = &l_182;
                        int *l_286 = &l_225;
                        int *l_287 = (void*)0;
                        int *l_288 = (void*)0;
                        int *l_289 = &l_277;
                        int *l_290 = &l_182;
                        int *l_291 = &l_185;
                        int *l_292 = &l_218;
                        int *l_293 = &l_277;
                        int *l_294 = &l_185;
                        int *l_296 = (void*)0;
                        int *l_297 = &l_182;
                        int *l_298 = &l_275;
                        int *l_299 = &l_277;
                        int *l_301 = &l_276;
                        int *l_303 = &l_300;
                        int *l_304 = &l_170;
                        int *l_305 = &l_218;
                        int *l_306 = &l_182;
                        int *l_307 = &l_185;
                        int *l_308 = &l_204;
                        int *l_309 = (void*)0;
                        int *l_310 = (void*)0;
                        int *l_312 = &l_276;
                        int *l_313 = (void*)0;
                        int *l_314 = &l_276;
                        int *l_315 = &l_225;
                        int *l_316 = (void*)0;
                        int l_317 = 0L;
                        int *l_319 = (void*)0;
                        int *l_321 = &l_189;
                        g_272--;
                        ++g_322;
                    }
                    (*g_51) = (void*)0;
                }


                if ((p_35 || (safe_rshift_func_int16_t_s_s(((((*l_340) ^= (func_59(((*g_78) = &p_37), (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(g_27, (safe_lshift_func_int8_t_s_s(g_272, 3)))), 2)), (l_275 ^ (((safe_sub_func_int32_t_s_s((g_141 >= (+g_230)), (*p_37))) > 0xE5L) < (*l_163))))), &g_138, l_157) > p_35)) ^ l_300) & (-1L)), g_145))))
                {
                    for (l_218 = 0; (l_218 != 16); ++l_218)
                    {
                        unsigned short l_343 = 1UL;
                        (*l_163) |= (*p_37);
                        --l_343;
                        (*l_163) = l_300;
                        return l_204;


                    }
                }
                else
                {
                    unsigned l_347 = 18446744073709551615UL;
                    unsigned l_348 = 0x169658B3L;
                    unsigned char *l_353 = &g_25;
                    if ((*p_37))
                    {
                        (*p_37) = (g_47 == ((*l_163) <= (p_35 > (l_347 = (((p_35 && l_300) <= ((*g_137) <= (((0x73L == g_25) > (((l_346 == &l_166) > 9UL) > 0x5EL)) ^ g_272))) && p_35)))));
                    }
                    else
                    {
                        const unsigned l_355 = 0x08BF7B59L;
                        long long *l_356 = &g_302;
                        l_348 &= (*p_37);
                        (*p_37) = (safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((void*)0 != l_353), 4)), func_59(l_354, l_355, p_36, l_356)));
                    }
                    (*l_354) = &l_225;

                    ;
                }
            }


            g_377++;
            (*g_51) = l_380;

            ;
        }

        ;
        for (g_230 = (-13); (g_230 == 26); ++g_230)
        {
            unsigned char **l_386 = &g_137;
            unsigned char **l_387 = (void*)0;
            unsigned char *l_389 = (void*)0;
            unsigned char **l_388 = &l_389;
            short *l_395 = &g_95;
            (*p_37) = (((*l_144) = func_59(func_64(l_383, ((*p_36) ^= (&g_208 == &g_103))), (safe_rshift_func_int8_t_s_s(l_275, 1)), ((*l_388) = ((*l_386) = p_36)), l_390)) == ((safe_mod_func_uint64_t_u_u((safe_add_func_int64_t_s_s((((*l_395) ^= ((g_131 | g_215) ^ g_295)) > (-1L)), g_58)), p_35)) < 4294967295UL));

            ;
            ;
        }
    }

    ;
    ;
    return p_35;


}







static unsigned short func_42(int * p_43)
{
    int l_70 = 0x064544A9L;
    long long *l_116 = &g_117;
    long long l_129 = (-10L);
    unsigned char *l_132 = &g_25;
    char l_133 = 0L;
    int **l_134 = (void*)0;
    for (g_25 = 0; (g_25 == 7); ++g_25)
    {
        int *l_46 = &g_47;
        int ***l_55 = &g_51;
        long long *l_56 = (void*)0;
        long long *l_57 = &g_58;
        unsigned long long *l_71 = &g_72;
        int ****l_111 = &g_78;
        const long long l_115 = 0x986BC5A18187EA63LL;
        unsigned *l_119 = &g_120;
        unsigned char *l_130 = &g_131;
        int *l_135 = &l_70;
        (*l_46) = ((*p_43) = (-1L));
        (*l_46) = ((((((void*)0 == &p_43) > ((*l_57) = (&l_46 != ((*l_55) = func_48((g_51 != &g_52), (g_53 |= 0x41209775L)))))) > (((*l_119) = func_59(func_64(((*l_111) = func_67((l_70 > ((*l_71) ^= l_70)), l_70)), g_25), l_115, &g_25, l_116)) ^ 0x718CA402L)) ^ g_103) == l_70);
        l_133 &= ((safe_rshift_func_uint16_t_u_s(((func_59(func_64(func_67((*l_46), ((0x8BD6L | (g_105 < (safe_mod_func_uint32_t_u_u(g_72, (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((&l_70 != (p_43 = &l_70)), ((*l_46) > l_70))), 15)))))) && ((*l_130) = ((g_107 && 1UL) >= l_129)))), l_129), l_129, l_132, &g_117) | g_58) >= g_53), l_70)) != l_70);

        ;
        (*p_43) = func_59((l_134 = (*g_78)), ((*l_135) = (*p_43)), l_130, l_56);
    }

    ;
    return g_131;
}







static int ** func_48(long long p_49, unsigned p_50)
{
    int *l_54 = &g_27;
    (*l_54) &= 0x1846E972L;
    return &g_52;


}







static unsigned func_59(int ** p_60, const int p_61, unsigned char * p_62, long long * p_63)
{
    int *l_118 = &g_47;
    (*l_118) &= p_61;
    return (*l_118);
}







static int ** func_64(int *** p_65, unsigned char p_66)
{
    int *l_112 = &g_47;
    int **l_113 = (void*)0;
    int **l_114 = &l_112;
    (*l_114) = l_112;
    (**l_114) ^= 0x90230FD1L;
    return (*p_65);


}







static int *** func_67(unsigned p_68, unsigned p_69)
{
    int l_73 = 0xA2F90942L;
    int *l_85 = &g_47;
    int ***l_110 = &g_79;
    if (l_73)
    {
        int *l_74 = (void*)0;
        int *l_75 = &g_47;
        (*l_75) = l_73;
    }
    else
    {
        int l_82 = 5L;
        unsigned char l_83 = 1UL;
        int *l_84 = &g_47;
        int **l_86 = (void*)0;
        int **l_87 = &l_85;
        short *l_102 = &g_103;
        (*l_84) = (((-3L) && ((((g_78 != &g_79) ^ p_68) && (safe_mod_func_int32_t_s_s((((g_25 <= l_73) > l_82) && g_72), (l_83 ^ l_73)))) > l_73)) == 0xE1D35EE8DA534C8ALL);
        (*l_87) = l_85;
        if ((g_72 | (safe_sub_func_int64_t_s_s((-8L), (0x9D74L < (((g_25 && (0x8F974433F2F19166LL < g_10)) <= ((p_68 == p_69) && (*l_85))) == (*l_84)))))))
        {
            short *l_94 = &g_95;
            int l_100 = (-5L);
            unsigned long long *l_101 = &g_72;
            char *l_104 = &g_105;
            unsigned short *l_106 = &g_107;
            (*l_85) = (((*l_106) = (g_47 & ((*l_104) = (safe_add_func_int16_t_s_s(((*l_94) = (safe_rshift_func_uint8_t_u_s(p_68, 1))), ((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(p_69, p_69)) >= l_100), 0x5A8DL)) != (((((*l_101) &= p_69) ^ ((void*)0 == l_102)) > g_10) && 9L))))))) | 0x7856L);
            return &g_79;


        }
        else
        {
            short **l_109 = &l_102;
            short ***l_108 = &l_109;
            l_85 = (void*)0;

            ;
            (*l_108) = &l_102;
        }

        ;
        (*l_87) = l_85;
    }

    ;
    return l_110;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_754, "g_754", print_hash_value);
    transparent_crc(g_857, "g_857", print_hash_value);
    transparent_crc(g_1001, "g_1001", print_hash_value);
    transparent_crc(g_1007, "g_1007", print_hash_value);
    transparent_crc(g_1016, "g_1016", print_hash_value);
    transparent_crc(g_1096, "g_1096", print_hash_value);
    transparent_crc(g_1106, "g_1106", print_hash_value);
    transparent_crc(g_1109, "g_1109", print_hash_value);
    transparent_crc(g_1110, "g_1110", print_hash_value);
    transparent_crc(g_1112, "g_1112", print_hash_value);
    transparent_crc(g_1190, "g_1190", print_hash_value);
    transparent_crc(g_1192, "g_1192", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
