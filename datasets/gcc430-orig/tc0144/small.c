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



static int g_2 = 0x049FE387L;
static int g_62 = 0x84F3AC16L;
static short g_67 = 0L;
static unsigned char g_72 = 1UL;
static unsigned g_80 = 1UL;
static unsigned short g_82 = 9UL;
static unsigned short g_84 = 3UL;
static int g_86 = 0xB567DFB9L;
static char g_106 = (-1L);
static short g_110 = 0x9720L;
static char *g_143 = (void*)0;
static const char g_179 = 0x3AL;
static unsigned char g_181 = 0x01L;
static char g_219 = 1L;
static int g_221 = 6L;
static unsigned short g_233 = 0xF89CL;
static unsigned short g_276 = 1UL;
static unsigned g_315 = 0x3DD389ACL;
static const char **g_368 = (void*)0;
static unsigned g_380 = 0x5626FD71L;
static unsigned *g_379 = &g_380;
static char g_422 = (-1L);
static const char g_445 = 0L;
static int g_446 = 0x93A32E63L;
static const short **g_527 = (void*)0;
static unsigned short *g_530 = &g_82;
static unsigned short **g_529 = &g_530;
static unsigned g_539 = 1UL;
static int **g_540 = (void*)0;
static unsigned g_541 = 0UL;
static unsigned *g_567 = (void*)0;
static unsigned **g_566 = &g_567;
static unsigned g_575 = 0UL;
static int *g_665 = &g_446;
static int * const *g_664 = &g_665;
static unsigned short g_682 = 65535UL;
static unsigned g_715 = 0xF4390E4DL;
static int *g_718 = &g_221;
static const int g_720 = 0L;
static int g_747 = 0x73A5223AL;
static unsigned char * const *g_840 = (void*)0;
static char g_911 = (-3L);
static int g_912 = 0xF1F94912L;
static short *g_971 = &g_110;
static short **g_970 = &g_971;
static unsigned char g_981 = 0UL;
static const unsigned short ** const g_1026 = (void*)0;
static const unsigned short ** const * const g_1025 = &g_1026;
static const unsigned short ** const * const *g_1024 = &g_1025;
static unsigned g_1059 = 0x53F7DC4AL;
static short g_1102 = 0x8F1CL;
static unsigned g_1117 = 1UL;
static short g_1118 = 1L;
static const unsigned g_1122 = 0x87A035A8L;
static char *** const g_1200 = (void*)0;
static char *** const *g_1199 = &g_1200;
static unsigned g_1232 = 1UL;
static unsigned char * const **g_1259 = (void*)0;
static unsigned char * const ***g_1258 = &g_1259;
static unsigned char g_1262 = 0UL;
static short ***g_1307 = &g_970;
static short ****g_1306 = &g_1307;
static short *****g_1475 = &g_1306;
static short ******g_1474 = &g_1475;
static unsigned short g_1496 = 65528UL;
static char g_1506 = 0x0BL;
static unsigned g_1528 = 0xAABF2943L;
static int g_1551 = 0x3B2DD157L;
static unsigned g_1651 = 0x7785295DL;
static int g_1654 = 0xB79D92C9L;



static char func_1(void);
static const int func_3(const short p_4, unsigned p_5);
static const short func_6(short p_7, int p_8, unsigned p_9);
static short func_19(int p_20, unsigned short p_21, unsigned p_22);
static short func_23(char p_24, unsigned p_25, int p_26);
static int * func_28(short p_29, char p_30, int * p_31);
static int func_39(unsigned p_40, int p_41);
static int func_42(unsigned p_43, int * p_44);
static int * func_45(unsigned short p_46, int * p_47, int * p_48);
static short func_54(unsigned short p_55, int p_56, int * const p_57, unsigned p_58, const unsigned char p_59);
static char func_1(void)
{
    unsigned l_27 = 0x350D8AF8L;
    unsigned l_1243 = 4294967286UL;
    int l_1417 = (-1L);
    int *l_1433 = &g_2;
    short l_1451 = 0xA73BL;
    unsigned l_1482 = 0x3381D674L;
    unsigned short **l_1492 = &g_530;
    short l_1515 = (-1L);
    short l_1535 = 0L;
    int l_1546 = 0x5737AC02L;
    unsigned l_1548 = 0xC55BB385L;
    const int *l_1559 = &g_221;
    short l_1566 = 0x1587L;
    const short l_1626 = 7L;
    unsigned l_1627 = 0x2829A44EL;
    int * const l_1693 = &g_1654;
    unsigned short l_1704 = 65530UL;
    int l_1705 = 0x2308F832L;
    char l_1710 = (-2L);
    if (g_2)
    {
        short l_12 = 0xEA2AL;
        unsigned char l_1235 = 0xF8L;
        unsigned *l_1240 = (void*)0;
        unsigned *l_1241 = (void*)0;
        unsigned *l_1242 = &g_1117;
        int l_1411 = 0x0D63DE45L;
        int l_1427 = (-4L);
        int l_1455 = 0x3D4933A2L;
        int l_1493 = (-4L);
        unsigned l_1505 = 0x69073556L;
        int * const l_1536 = (void*)0;
        short l_1554 = 7L;
        if (func_3(func_6(((g_2 & l_12) & (l_12 == l_12)), ((safe_mul_func_int8_t_s_s(0xEBL, ((((*l_1242) = (safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(func_19(((0x8018L & func_23(g_2, ((0x974EL && l_27) > g_2), l_12)) && 0x19FD0885L), l_1235, l_27), l_27)), 0))) >= l_1243) & g_445))) , 8L), l_1235), g_445))
        {
            const unsigned short l_1416 = 1UL;
            int *l_1418 = &g_2;
            short *l_1423 = &g_110;
            short *l_1424 = &g_1102;
            short *l_1425 = (void*)0;
            short *l_1426 = &l_12;
            int **l_1434 = (void*)0;
            int **l_1435 = &g_718;
            g_86 = (l_12 , (l_1411 == ((safe_mod_func_int32_t_s_s(((*l_1418) = (l_1417 = (0xCE030535L < ((safe_lshift_func_int8_t_s_u(((*g_1199) == (void*)0), 1)) != l_1416)))), ((l_1416 , (safe_mod_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((**g_529), (((*l_1426) |= ((*l_1424) = ((*l_1423) |= l_1411))) | (*g_530)))) , 0UL), 0xB6CFL))) , 0xEBDE2FFCL))) > g_179)));
            l_1427 |= 0L;
            (*l_1435) = &l_1417;
            (*l_1435) = (void*)0;
        }
        else
        {
            short *l_1438 = &g_1118;
            int l_1443 = 0L;
            unsigned short l_1450 = 1UL;
            short *l_1452 = &g_1102;
            unsigned *l_1453 = (void*)0;
            unsigned *l_1454 = &g_315;
            short l_1456 = 0x461AL;
            int l_1480 = 0x4BC47552L;
            unsigned short l_1547 = 0x3896L;
            int *l_1555 = &l_1443;
            char *l_1556 = (void*)0;
            char *l_1557 = &g_106;
            int l_1558 = 0L;
            int **l_1560 = &l_1433;
            g_86 ^= 1L;
            if ((safe_sub_func_int16_t_s_s(((*l_1438) = ((*l_1433) = l_1411)), (l_1456 = (l_1455 |= (((*l_1454) = ((~5L) ^ (safe_mod_func_uint8_t_u_u((((*l_1452) = (safe_sub_func_int32_t_s_s((l_1443 , ((*g_379) == (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((((l_1450 , l_1451) , (g_110 = func_19(l_1450, (**g_529), l_1450))) && 1L) != (*g_379)), 5UL)), l_1443)), l_1235)))), l_1411))) >= (*g_530)), 0xDAL)))) , 7L))))))
            {
                int **l_1457 = (void*)0;
                int **l_1458 = &l_1433;
                int l_1461 = 0L;
                unsigned char l_1476 = 0xFFL;
                int *l_1477 = &l_1417;
                char *l_1481 = &g_219;
                (*l_1458) = (void*)0;
                (*l_1477) &= (safe_mod_func_int16_t_s_s((l_1411 || ((l_1461 ^ l_1450) , 0xE2L)), (safe_sub_func_int32_t_s_s((((*g_379) ^= 4294967293UL) <= (l_1450 <= 252UL)), (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((void*)0 == g_1474), l_1443)) | 0x65F4L), l_1476)) || l_1450), 7)), 13)), l_1450))))));
                (*l_1477) = (((l_1455 && g_682) >= (safe_sub_func_uint16_t_u_u((*g_530), 1UL))) , (func_39(l_1480, (((*l_1481) = l_1455) , l_1482)) & (((func_19(l_27, l_1456, l_1456) , 0x5B121F07L) , l_12) <= 1L)));
            }
            else
            {
                const int l_1502 = (-9L);
                int l_1514 = 1L;
                unsigned char *l_1520 = &g_72;
                unsigned char *l_1525 = &l_1235;
                unsigned *l_1533 = &g_715;
                int *l_1549 = &g_912;
                int *l_1550 = &g_86;
                for (l_1450 = (-14); (l_1450 < 26); ++l_1450)
                {
                    unsigned l_1504 = 0xC82BBF0BL;
                    int l_1513 = 0x515CDAD5L;
                    if ((*l_1433))
                    {
                        int **l_1485 = &l_1433;
                        (*l_1485) = &g_2;
                    }
                    else
                    {
                        short l_1501 = 0xDAB9L;
                        unsigned char *l_1503 = &l_1235;
                        g_1506 |= (4294967295UL ^ (((safe_lshift_func_uint8_t_u_u((~0x60L), 1)) , (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((func_6(((*g_379) , (((void*)0 == l_1492) || l_1493)), ((safe_mul_func_int8_t_s_s(g_1496, ((*l_1503) = ((l_1455 >= (safe_mod_func_int16_t_s_s(func_3(((func_3((((safe_sub_func_int16_t_s_s(l_1501, l_1450)) , (*g_665)) , l_1502), (*g_379)) <= (*g_379)) , l_1443), (*g_379)), l_1502))) , 0xD0L)))) , (**g_664)), l_1504) != 65528UL), l_1505)), l_1501))) ^ g_422));
                    }
                    l_1513 = (((*g_379) = ((safe_mod_func_uint16_t_u_u(l_1504, (*l_1433))) > ((!((**g_664) ^= ((l_1456 || ((((*l_1433) || 0UL) != (l_1443 = (l_1504 == (((((((**g_529) = func_19(l_1502, ((**g_529) &= ((safe_rshift_func_int8_t_s_u(l_1504, ((*l_1433) && 0x32475175L))) ^ l_1502)), l_1450)) > l_1502) , 0xB7L) , l_1504) | 249UL) > l_1504)))) , l_1443)) , 0x791C31D1L))) , 252UL))) & 0xC2B53D1CL);
                }
                if (((~(*l_1433)) >= ((l_1514 = l_1450) && ((**l_1492) = (((*l_1525) &= ((((*g_665) &= (*l_1433)) , l_1515) >= (((safe_mul_func_uint16_t_u_u((func_39((!(safe_rshift_func_int8_t_s_u(l_1505, ((*l_1520) = (*l_1433))))), ((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((*g_530), ((*l_1438) = ((l_1502 , (l_1427 ^ 0xF10CL)) | (*g_379))))) || g_1262), (*l_1433))) == l_1502)) <= l_1443), (*l_1433))) >= (*l_1433)) != 1L))) , 0xB8CBL)))))
                {
                    unsigned l_1534 = 8UL;
                    int **l_1539 = &l_1433;
                    (*l_1433) = l_1480;
                    for (g_912 = 0; (g_912 <= (-17)); g_912 = safe_sub_func_uint8_t_u_u(g_912, 1))
                    {
                        (*l_1433) = (*l_1433);
                    }
                    (*l_1539) = (void*)0;
                }
                else
                {
                    int l_1542 = 0xCEB76009L;
                    int *l_1543 = &l_1493;
                    (*l_1543) = ((*l_1433) |= (safe_sub_func_int32_t_s_s(l_1450, l_1542)));
                }
                (*l_1550) |= ((*l_1549) = (0UL & ((func_3((safe_sub_func_uint16_t_u_u((*g_530), (func_19(l_1546, (*g_530), l_1547) && (**g_529)))), (*g_379)) , 253UL) == l_1548)));
            }
            l_1559 = &g_720;
            (*l_1560) = &l_1427;
        }
        return (*l_1559);
    }
    else
    {
        unsigned char l_1583 = 254UL;
        short l_1584 = 0xBEBBL;
        short ****l_1585 = &g_1307;
        int l_1601 = 0x43687F5CL;
        const unsigned char l_1628 = 0x3FL;
        int l_1629 = 1L;
        unsigned char l_1631 = 9UL;
        unsigned char *l_1706 = (void*)0;
        unsigned char *l_1707 = &g_1262;
        short **l_1708 = &g_971;
        char *l_1709 = &g_1506;
        int *l_1711 = &g_912;
        for (l_1482 = 4; (l_1482 != 27); ++l_1482)
        {
            char l_1565 = 0xB1L;
            int *l_1610 = &g_1551;
            unsigned **l_1639 = (void*)0;
            unsigned short l_1646 = 0x4BF8L;
            (*g_718) &= (((safe_sub_func_int16_t_s_s((******g_1474), (**g_529))) ^ ((*l_1433) >= (7UL || (***g_1307)))) & (l_1565 , l_1566));
            for (g_1118 = (-19); (g_1118 > (-17)); g_1118 = safe_add_func_uint32_t_u_u(g_1118, 1))
            {
                unsigned short l_1580 = 65530UL;
                int l_1586 = (-1L);
                for (l_27 = (-5); (l_27 > 24); l_27 = safe_add_func_int8_t_s_s(l_27, 2))
                {
                    for (g_221 = 17; (g_221 > (-5)); --g_221)
                    {
                        int l_1573 = (-2L);
                        (*l_1433) |= (func_3((***g_1307), (*g_379)) < l_1573);
                    }
                }
                (*l_1433) = (((safe_rshift_func_int8_t_s_s(l_1565, 1)) == ((((l_1586 ^= ((safe_sub_func_int16_t_s_s(l_1565, (safe_mul_func_uint8_t_u_u((l_1565 && l_1580), ((((((*g_1199) != (void*)0) & (safe_lshift_func_int8_t_s_u(l_1583, 4))) < l_1584) , (l_1585 == l_1585)) < l_1580))))) <= l_1584)) > (*l_1433)) <= (*g_530)) & l_1565)) >= 0x42FBL);
                for (g_575 = 0; (g_575 < 11); ++g_575)
                {
                    const unsigned short **l_1600 = (void*)0;
                    const unsigned short ***l_1599 = &l_1600;
                    int l_1608 = 4L;
                    unsigned *l_1609 = &g_541;
                    int *l_1611 = (void*)0;
                    int **l_1630 = &l_1611;
                    short *l_1632 = &l_1584;
                    unsigned l_1657 = 0x47487978L;
                    l_1611 = func_45(((safe_sub_func_uint32_t_u_u((*g_379), ((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((*g_379) < (safe_rshift_func_int16_t_s_u(func_3((l_1601 |= (((*l_1599) = (void*)0) != (void*)0)), ((*l_1609) = (safe_mod_func_uint8_t_u_u(((((0xE9933448L ^ (*g_718)) && (**g_529)) | (((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_1586 < ((void*)0 != &g_1024)), 1L)), l_1586)) != 4294967295UL) < 0x6BD918CFL)) ^ (-1L)), l_1608)))), 2))), (*g_718))), (*g_379))), 9UL)) , l_1608))) , l_1565), l_1610, &g_86);
                    (*l_1630) = (((safe_mul_func_uint8_t_u_u(func_19((((*l_1610) = ((*g_718) && ((*g_379) = (*g_379)))) != 0xF1275077L), (safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(func_54((*l_1611), ((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(((*l_1611) > l_1586), l_1586)) , l_1628), 13)) == 250UL), &g_912, (*l_1433), (*l_1559)), (****g_1306))), (*l_1611))), g_2), l_1584)) ^ l_1629) , (void*)0);
                }
                return l_1629;
            }
        }
        for (l_1417 = 0; (l_1417 > 24); l_1417 = safe_add_func_uint16_t_u_u(l_1417, 9))
        {
            int *l_1679 = &g_2;
            int **l_1680 = &l_1433;
            (*l_1680) = l_1679;
            for (l_1482 = (-25); (l_1482 >= 12); l_1482 = safe_add_func_uint8_t_u_u(l_1482, 1))
            {
                for (g_1551 = 0; (g_1551 == 4); g_1551 = safe_add_func_int32_t_s_s(g_1551, 1))
                {
                    unsigned char l_1685 = 255UL;
                    (*l_1679) = l_1685;
                }
                for (g_446 = 0; (g_446 != (-19)); g_446--)
                {
                    (*g_718) = 0x00EB9E31L;
                    return l_1583;
                }
                for (l_1627 = (-2); (l_1627 <= 57); l_1627 = safe_add_func_int32_t_s_s(l_1627, 9))
                {
                    int l_1694 = 0xA25074FFL;
                    const int *l_1696 = (void*)0;
                    unsigned l_1698 = 7UL;
                }
            }
        }
        if (((*l_1433) = ((((0xEEL | ((l_1710 = (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((**l_1708) = (l_1704 < (((*l_1707) = l_1705) < (((*l_1709) = ((l_1708 != (void*)0) | (((*l_1433) != (~l_1628)) || l_1629))) | (0xA62E197FL <= (*g_379)))))), 65535UL)), 0x9BL))) < (*l_1693))) && (*l_1433)) | 0x9086L) || 65532UL)))
        {
            (*l_1693) = ((*l_1433) = (*l_1559));
        }
        else
        {
            unsigned l_1712 = 1UL;
            l_1711 = func_45(l_1601, l_1711, ((*l_1711) , func_28((****g_1306), l_1712, &g_1654)));
        }
        return (*l_1693);
    }
}







static const int func_3(const short p_4, unsigned p_5)
{
    unsigned short l_1396 = 65534UL;
    int l_1397 = 1L;
    int l_1398 = (-10L);
    char **l_1401 = &g_143;
    char **l_1403 = &g_143;
    char ***l_1402 = &l_1403;
    char **l_1404 = &g_143;
    unsigned l_1409 = 0xB76A7A87L;
    int *l_1410 = &g_912;
    l_1398 |= (l_1397 &= l_1396);
    l_1398 = ((*l_1410) = (((safe_mod_func_uint16_t_u_u(l_1398, ((**g_529) = (l_1398 , ((((*l_1402) = (l_1401 = l_1401)) != l_1404) ^ ((((((((void*)0 == &l_1402) || (safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(0xE7D5L, (l_1397 , (**g_529)))) , 7UL) | p_5), 14))) <= 0x7006L) , p_4) || (-1L)) & (*g_379)) , l_1409)))))) & 0x4519BE5BL) & 65528UL));
    return p_5;
}







static const short func_6(short p_7, int p_8, unsigned p_9)
{
    unsigned short l_1254 = 65534UL;
    char *l_1257 = &g_106;
    unsigned *l_1260 = (void*)0;
    unsigned *l_1261 = (void*)0;
    char l_1263 = 0L;
    int **l_1264 = &g_718;
    const int l_1269 = 9L;
    int l_1282 = 0x00B5E3C9L;
    short * const ***l_1319 = (void*)0;
    unsigned char *l_1345 = (void*)0;
    unsigned char **l_1344 = &l_1345;
    unsigned char ***l_1343 = &l_1344;
    unsigned char ****l_1342 = &l_1343;
    short *l_1349 = &g_67;
    int *l_1354 = &g_2;
    int *l_1355 = (void*)0;
    int *l_1356 = &g_221;
    int *l_1357 = (void*)0;
    int *l_1358 = &g_912;
    short ***l_1363 = &g_970;
    unsigned char l_1364 = 0x0DL;
    short *****l_1367 = (void*)0;
    short ******l_1368 = (void*)0;
    short ******l_1369 = &l_1367;
    int * const l_1370 = &l_1282;
    unsigned short ***l_1387 = &g_529;
    unsigned short ****l_1386 = &l_1387;
    const char l_1395 = 0x4AL;
    (*l_1264) = l_1261;
    if (p_8)
    {
        int l_1270 = 0x315CFD4FL;
        unsigned short *l_1273 = (void*)0;
        unsigned short *l_1274 = &g_682;
        short *l_1277 = &g_110;
        unsigned char ***l_1278 = (void*)0;
        if (((func_39((safe_mul_func_uint8_t_u_u(((!(safe_lshift_func_uint8_t_u_u(p_9, l_1269))) < l_1270), p_7)), (safe_mod_func_int16_t_s_s(l_1270, l_1270))) >= p_8) && 0x9A4550B0L))
        {
            unsigned l_1279 = 0UL;
            l_1270 |= l_1279;
            (*l_1264) = &l_1270;
        }
        else
        {
            const int l_1280 = 0x75C3D3FFL;
            return l_1280;
        }
        (*l_1264) = &l_1270;
    }
    else
    {
        int *l_1281 = (void*)0;
        int l_1299 = 0L;
        int l_1300 = 0xFC75568BL;
        unsigned *l_1301 = &g_1232;
        l_1282 |= p_9;
        if ((p_8 < ((**g_529) = ((p_7 > ((safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((((p_9 ^ 4294967288UL) || (safe_add_func_uint32_t_u_u(p_9, (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((*l_1301) |= ((((p_9 ^ (*g_379)) && p_8) , l_1300) | p_8)) ^ 4294967290UL), l_1254)), p_7))))) >= 0UL), 2)) ^ 1L), p_9)) , p_9)) ^ p_7))))
        {
            int *l_1302 = &g_221;
            int **l_1303 = &l_1302;
            (*l_1303) = ((*l_1264) = l_1302);
        }
        else
        {
            short *****l_1308 = &g_1306;
            int l_1317 = 0x6F8C2013L;
            int **l_1318 = &g_665;
            int l_1320 = 0xD1D95579L;
            int l_1321 = 0L;
            unsigned char l_1322 = 0x01L;
            int *l_1323 = &g_86;
            char l_1326 = (-1L);
            unsigned char *l_1331 = &g_181;
            int *l_1346 = &g_912;
            l_1282 = (l_1321 ^= ((safe_lshift_func_uint8_t_u_s(((void*)0 == &g_1259), (l_1320 &= (((*l_1308) = g_1306) != ((safe_mod_func_uint8_t_u_u((((*l_1318) = &g_747) == &p_8), l_1317)) , l_1319))))) < p_8));
            l_1282 ^= ((*g_379) | 0xC6E987D8L);
            (*l_1323) ^= ((p_7 | (l_1321 | 1UL)) || (p_7 ^= ((l_1322 = p_9) & (+(*g_530)))));
            (*l_1346) |= ((safe_rshift_func_uint16_t_u_s((l_1326 & (*g_379)), 0)) || ((*l_1301) = func_19((safe_mul_func_int8_t_s_s(((*l_1257) = (safe_mul_func_int8_t_s_s(((*l_1323) = (p_8 , (((*l_1331) = 0xAEL) | p_7))), p_8))), (safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_1263, 3)), (((((((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(((-1L) && func_19(l_1300, (*g_530), p_7)), l_1321)), 6)) & (*g_379)) , l_1342) == (void*)0) == l_1300) > l_1299) , p_8))), 0)))), p_9, p_9)));
        }
    }
    (*l_1358) = (((safe_rshift_func_int16_t_s_s(l_1282, (((l_1269 < (l_1349 == &p_7)) , (((((*l_1356) = ((*l_1354) = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((p_7 , (p_8 >= 0xE2L)) , 251UL), 0)), 0x7EL)))) >= 0UL) == 0x1842L) == p_9)) > p_9))) , (*l_1356)) , p_9);
    if (func_42((((*g_379) = (safe_mod_func_int16_t_s_s(p_7, (*g_530)))) , 4UL), &l_1282))
    {
        unsigned short l_1373 = 0UL;
        unsigned *l_1382 = &g_539;
        int l_1383 = 0xD95F8E75L;
        unsigned short *****l_1388 = &l_1386;
        short l_1392 = 0x5B8AL;
        int **l_1393 = &g_665;
        unsigned l_1394 = 18446744073709551615UL;
        (*l_1358) = (safe_rshift_func_uint8_t_u_u(((func_19(l_1373, (l_1373 ^ (l_1373 && (((248UL >= l_1373) != (safe_add_func_int32_t_s_s(((((safe_mod_func_uint32_t_u_u(((*l_1382) ^= ((safe_mul_func_uint8_t_u_u(0x28L, p_8)) == (func_39(g_276, (safe_mul_func_uint8_t_u_u(p_9, p_7))) < 0xB16D6795L))), 0x045542ADL)) >= g_911) <= l_1373) & l_1383), 0x6C7C2186L))) < (-1L)))), p_9) == 0UL) , 0x0CL), 7));
        (*l_1356) &= (safe_mul_func_uint8_t_u_u(p_8, ((((*l_1388) = l_1386) == &g_1025) < ((p_9 == (((safe_unary_minus_func_uint32_t_u(((((*l_1370) ^= (safe_sub_func_int16_t_s_s((+(p_7 = l_1392)), ((*g_665) , (p_8 & (l_1392 || ((*g_379) = ((l_1392 , l_1393) != (void*)0)))))))) & p_8) && l_1394))) , (void*)0) == l_1393)) < p_9))));
    }
    else
    {
        return (*l_1354);
    }
    return l_1395;
}







static short func_19(int p_20, unsigned short p_21, unsigned p_22)
{
    unsigned l_1238 = 4294967295UL;
    int *l_1239 = (void*)0;
    l_1239 = &p_20;
    (*l_1239) |= 0xA072DCC2L;
    return p_20;
}







static short func_23(char p_24, unsigned p_25, int p_26)
{
    char l_32 = 0x95L;
    int *l_49 = &g_2;
    int *l_372 = (void*)0;
    int *l_373 = (void*)0;
    int l_374 = 0x84AD6D7AL;
    unsigned l_400 = 0x5EBF6379L;
    int **l_1233 = (void*)0;
    int **l_1234 = &g_718;
    (*l_1234) = func_28(l_32, (l_400 &= (!(safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((0xAA237F4AL == (((safe_sub_func_int16_t_s_s((g_2 <= (+l_32)), (l_32 != (func_39(p_26, (l_374 = func_42(p_25, func_45((&g_2 == (void*)0), &g_2, l_49)))) || 0xEF19382CL)))) == p_25) , 0xE31C421BL)), p_26)) > g_179), 0x30L)))), l_49);
    return (*l_49);
}







static int * func_28(short p_29, char p_30, int * p_31)
{
    unsigned l_401 = 0x5347EE41L;
    const unsigned short *l_402 = &g_82;
    int *l_403 = &g_221;
    int * const l_406 = (void*)0;
    unsigned l_474 = 0xB58A1528L;
    unsigned **l_485 = &g_379;
    short l_487 = 0x6E32L;
    int l_537 = 0x8100EEA3L;
    char l_558 = 0x9AL;
    const short ***l_608 = &g_527;
    short ***l_609 = (void*)0;
    short ****l_610 = &l_609;
    unsigned ***l_626 = &g_566;
    unsigned l_631 = 1UL;
    int l_650 = 0x35155014L;
    unsigned short ***l_695 = &g_529;
    unsigned l_714 = 0xCC2C7134L;
    int l_734 = 1L;
    char **l_815 = &g_143;
    int *l_906 = &l_734;
    unsigned l_910 = 18446744073709551612UL;
    unsigned char l_948 = 0xF3L;
    unsigned l_961 = 1UL;
    unsigned short l_999 = 65531UL;
    unsigned l_1017 = 0x077A03C7L;
    int **l_1018 = (void*)0;
    unsigned l_1020 = 0xFB76AF5EL;
    int *l_1029 = (void*)0;
    unsigned l_1077 = 4294967288UL;
    unsigned short l_1085 = 65535UL;
    unsigned char l_1132 = 0x49L;
    short **l_1148 = &g_971;
    short *l_1181 = &g_110;
    unsigned short l_1185 = 0xAA20L;
    unsigned l_1214 = 18446744073709551613UL;
    unsigned char l_1215 = 0x0EL;
    if ((*p_31))
    {
        unsigned short *l_413 = &g_276;
        int l_416 = 0x9BE7EA91L;
        char *l_417 = &g_106;
        int l_435 = 0L;
        if ((safe_sub_func_int32_t_s_s((~((*l_403) = (safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_s(((*l_413) = p_29), 15)) ^ func_39(p_30, g_219)) == (safe_sub_func_uint16_t_u_u(l_416, l_416))), l_416)))), ((((*l_417) = p_30) >= p_30) , p_30))))
        {
            return p_31;
        }
        else
        {
            char l_418 = (-5L);
            int *l_421 = (void*)0;
            unsigned char l_468 = 0xCBL;
            unsigned short l_486 = 65535UL;
            unsigned *l_505 = &g_315;
            unsigned **l_504 = &l_505;
            unsigned l_538 = 1UL;
            int l_542 = 0x3C3EBBE6L;
            int **l_543 = &l_421;
            if (((((((l_416 = func_42(l_418, func_45(p_29, func_45(l_418, func_45(((((g_219 , ((safe_sub_func_int32_t_s_s((((*p_31) != l_418) & p_30), p_29)) == p_30)) < 255UL) != 0xC3L) || 65534UL), l_421, &g_2), p_31), &l_416))) , (void*)0) != (void*)0) , g_219) & (-1L)) != g_422))
            {
                unsigned short *l_450 = &g_84;
                int l_467 = (-1L);
                unsigned **l_484 = &g_379;
                for (g_86 = 0; (g_86 != (-21)); g_86 = safe_sub_func_int8_t_s_s(g_86, 4))
                {
                    unsigned l_448 = 0x5475D525L;
                    int **l_449 = &l_421;
                }
                if ((*p_31))
                {
                    unsigned char *l_451 = &g_72;
                    int l_469 = 0x48C1EE8AL;
                    g_86 |= (l_450 != (void*)0);
                    l_469 = ((l_451 == ((+(g_445 || 0x3C42L)) , (void*)0)) | 9L);
                }
                else
                {
                    const int *l_471 = (void*)0;
                    const int **l_470 = &l_471;
                    char l_477 = 1L;
                    int *l_478 = &l_416;
                    (*l_470) = (void*)0;
                    (*l_470) = func_45(((safe_rshift_func_int8_t_s_s(p_29, (func_39((((*g_379) = p_29) , l_474), (((!p_29) ^ (0x805CL != (safe_rshift_func_int16_t_s_u((l_467 & 0x90F1359EL), 1)))) && 4294967288UL)) & 5UL))) | l_477), l_478, l_421);
                    for (g_106 = 10; (g_106 > 11); g_106 = safe_add_func_int8_t_s_s(g_106, 1))
                    {
                        int **l_481 = &l_478;
                        (*l_403) ^= ((((**l_481) != g_380) == l_486) <= 1L);
                    }
                }
                (*l_403) = ((((l_487 | func_42(((*g_379) = 0xBE0AD6E4L), func_45((func_54(((safe_mul_func_uint8_t_u_u(((((*l_450) = p_29) > (func_54((((*l_417) = l_468) <= 1L), ((safe_mul_func_int8_t_s_s(((0xD6L >= (safe_mul_func_uint8_t_u_u((func_54((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(func_54(g_62, p_29, &g_86, p_29, g_80), (-6L))), p_30)), 8UL)), g_221, &g_2, p_30, g_86) == g_86), g_62))) , l_467), 0x01L)) , 0x1C70529AL), &l_467, g_62, (*l_403)) , p_30)) , g_315), 0x29L)) != (*p_31)), p_30, &g_2, l_467, g_276) , p_30), p_31, &l_467))) , p_29) && (*l_403)) , (*p_31));
                g_221 = (*p_31);
            }
            else
            {
                unsigned l_506 = 1UL;
                int *l_516 = &g_62;
                if ((l_435 >= (l_416 = (p_30 > ((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((void*)0 == l_504), (p_29 ^ (((*l_413) |= 65527UL) , g_445)))), l_506)) || (func_54(l_506, g_233, p_31, (*g_379), p_29) | 5L))))))
                {
                    int **l_507 = (void*)0;
                    int **l_508 = &l_421;
                    (*l_508) = &l_416;
                }
                else
                {
                    unsigned l_509 = 4294967295UL;
                    int *l_515 = (void*)0;
                    int **l_514 = &l_515;
                    unsigned short ** const l_519 = &l_413;
                    int **l_536 = &l_403;
                    l_435 = func_54(l_509, g_315, &g_86, (safe_rshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(l_506, g_67)) | p_29), 7)), l_509);
                    for (g_276 = 20; (g_276 >= 10); g_276--)
                    {
                        const short **l_525 = (void*)0;
                        const short ***l_526 = &l_525;
                        unsigned char *l_528 = &g_72;
                        int **l_531 = &l_403;
                    }
                    (*l_536) = l_515;
                }
                l_537 |= 7L;
            }
            g_541 &= (((l_538 , p_30) || (g_315 , (g_539 && p_29))) != (p_30 != func_39((g_540 != (void*)0), g_110)));
            l_542 ^= ((void*)0 != &g_219);
            (*l_543) = &l_537;
        }
        l_435 = (*p_31);
    }
    else
    {
        const int l_544 = 0xDBC187ACL;
        int *l_576 = (void*)0;
        unsigned char *l_599 = &g_181;
        unsigned char **l_598 = &l_599;
        int **l_602 = (void*)0;
        int **l_603 = &l_576;
        if (l_544)
        {
            const unsigned short **l_545 = (void*)0;
            const unsigned short ***l_546 = &l_545;
            (*l_546) = l_545;
        }
        else
        {
            short *l_555 = (void*)0;
            short *l_556 = &g_110;
            short *l_557 = &l_487;
            int *l_559 = &l_537;
            unsigned l_583 = 0x0E2166E6L;
            (*l_559) &= ((((safe_add_func_int16_t_s_s(0L, (((safe_sub_func_uint32_t_u_u((func_39(p_30, (g_422 | g_67)) < (safe_mod_func_uint32_t_u_u((0x6AB8L > ((*l_557) = ((*l_556) &= (safe_add_func_int16_t_s_s(0x668DL, p_29))))), 1UL))), (*p_31))) != l_544) , l_558))) < (-1L)) || g_315) , 0L);
            for (l_487 = 0; (l_487 <= (-17)); l_487 = safe_sub_func_uint32_t_u_u(l_487, 8))
            {
                unsigned *l_565 = &g_315;
                unsigned **l_564 = &l_565;
                int l_580 = 1L;
                short l_596 = (-1L);
                if (((*l_559) |= ((*l_403) = g_233)))
                {
                    unsigned ***l_568 = &g_566;
                    unsigned **l_570 = &l_565;
                    unsigned ***l_569 = &l_570;
                    int l_573 = (-1L);
                    char *l_574 = &l_558;
                    int **l_577 = &l_576;
                    if ((*p_31))
                        break;
                    g_575 ^= (func_39((safe_mul_func_int8_t_s_s(((*l_574) &= (((l_564 == ((*l_569) = ((*l_568) = g_566))) , (((func_54(((g_110 = (l_544 == func_39((+1UL), (safe_sub_func_int32_t_s_s(g_84, 0x12E763ACL))))) <= p_30), l_573, p_31, (*l_559), g_276) < (**g_529)) <= 0UL) , l_544)) | (*l_559))), l_573)), g_380) >= p_30);
                    (*l_577) = l_576;
                    (*l_403) = ((safe_mul_func_uint8_t_u_u((((((((l_580 , p_29) , p_30) || g_82) < func_39(((safe_mod_func_int32_t_s_s((+func_54((**g_529), p_30, &g_2, p_29, (*l_403))), (*p_31))) , p_30), g_219)) >= l_583) , 0UL) | p_30), g_422)) , (*p_31));
                }
                else
                {
                    return l_576;
                }
                (*l_559) ^= (*p_31);
                if ((*l_403))
                    continue;
                (*l_403) = (safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((func_42(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((g_233 , (-6L)), (3L && ((safe_mod_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((~func_54(l_596, g_541, p_31, (*g_379), (*l_403))), 0xCAADL)) & g_86), 0x986FL)) <= g_575)))), 2)) , (*g_379)), &l_580) , &g_527) != &g_527), 15)) , (**g_529)), 1L));
            }
        }
        (*l_603) = func_45(((safe_unary_minus_func_int16_t_s((l_598 == (void*)0))) & (func_54(((p_30 , ((p_30 <= (((((*p_31) <= (((*l_403) = (p_29 >= l_544)) , g_2)) == p_30) & 0x547EL) == (**g_529))) && p_29)) < p_30), g_67, p_31, (*g_379), g_276) != p_30)), p_31, p_31);
    }
    if (((safe_add_func_uint8_t_u_u(p_30, (safe_mul_func_int16_t_s_s(p_29, (l_608 == ((*l_610) = l_609)))))) == 4294967289UL))
    {
        int l_613 = 7L;
        unsigned char *l_614 = &g_181;
        int l_615 = 1L;
        int *l_618 = (void*)0;
        int *l_619 = &g_221;
        l_615 |= ((*g_530) < (g_2 & ((*l_614) |= (func_39((func_54((p_30 , p_30), p_30, p_31, (safe_lshift_func_int16_t_s_s(0x8810L, 11)), p_30) , 1UL), l_613) < (*p_31)))));
        for (g_219 = 23; (g_219 >= 29); g_219++)
        {
            return p_31;
        }
        (*l_619) &= (!0xD6E9D4CEL);
    }
    else
    {
        short *l_623 = (void*)0;
        short **l_622 = &l_623;
        short *l_625 = (void*)0;
        short **l_624 = &l_625;
        unsigned ***l_627 = &g_566;
        int l_628 = 0xE5A0FACDL;
        int *l_629 = (void*)0;
        int *l_630 = &g_221;
        unsigned char *l_676 = &g_181;
        (*l_630) = (p_29 , (safe_add_func_uint16_t_u_u((func_42(p_29, func_45((((*l_622) = &g_67) != ((*l_624) = &g_110)), &l_537, &g_221)) ^ (l_626 != l_627)), l_628)));
        if (g_422)
        {
            p_31 = func_45(p_29, &l_537, p_31);
        }
        else
        {
            int l_646 = 0x471D327CL;
            int * const l_647 = &g_2;
            int l_653 = 0x5C8DBEC6L;
            int *l_668 = &g_86;
            unsigned short l_681 = 9UL;
            unsigned char l_728 = 0x11L;
            const short ***l_730 = (void*)0;
            l_631 |= (((*p_31) == ((void*)0 == p_31)) ^ (g_181 = g_106));
            if (((((0x42L == (safe_rshift_func_uint8_t_u_s(((*l_630) & ((*g_379) <= ((((((func_54((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(p_30, (safe_add_func_uint8_t_u_u(func_54((p_29 == ((((func_54((safe_rshift_func_uint8_t_u_u(func_54((p_29 != (safe_mod_func_uint32_t_u_u(((**g_529) > (-1L)), 0xAC892489L))), p_30, p_31, (*g_379), g_86), g_445)), l_646, l_647, (*g_379), g_276) && (*l_647)) , 2L) , (-8L)) & g_539)), p_30, l_647, p_29, p_29), (*l_647))))), (*g_379))), g_380, p_31, (*l_630), g_110) , 0UL) && 0x92D8L) , g_80) == 0x274CL) == 0x8258A482L) ^ 6L))), 4))) ^ p_29) , p_30) | p_29))
            {
                int **l_648 = &l_403;
                int **l_649 = &l_630;
                unsigned char l_663 = 0x72L;
                unsigned short ****l_709 = &l_695;
                (*l_649) = ((*l_648) = (void*)0);
                l_650 = g_276;
                if ((*p_31))
                {
                    unsigned char l_666 = 255UL;
                    int *l_673 = &g_221;
                    unsigned short l_677 = 0x85D8L;
                    unsigned *l_689 = &l_474;
                    unsigned char *l_692 = &l_663;
                    for (g_84 = 10; (g_84 > 9); --g_84)
                    {
                        int *l_654 = &l_628;
                        (*l_654) |= (g_86 || l_653);
                    }
                    if (((safe_mod_func_int32_t_s_s((-1L), (*g_379))) && (-1L)))
                    {
                        short l_660 = 0x3E84L;
                        (*l_649) = func_45(((safe_unary_minus_func_uint8_t_u((((*g_379) = ((+(safe_rshift_func_uint16_t_u_s(l_660, 6))) > (((&g_530 != (void*)0) && 0x8AL) <= ((*l_647) >= p_29)))) , 252UL))) | p_29), p_31, p_31);
                        l_666 = ((((safe_sub_func_int8_t_s_s(func_54((*g_530), p_30, (((+p_30) , (l_663 , (**g_529))) , (((g_2 , g_315) , (0x31C5L >= (g_84 = (**g_529)))) , &l_628)), l_660, (*l_647)), 251UL)) , (void*)0) == g_664) | (*p_31));
                        (**l_649) = (*p_31);
                        (**l_649) &= l_666;
                    }
                    else
                    {
                        unsigned l_667 = 0x50E272ABL;
                        int *l_678 = &l_628;
                        int *l_679 = &g_62;
                        char *l_680 = &g_106;
                        (*l_648) = ((~18446744073709551613UL) , func_45(l_667, l_668, p_31));
                        (*l_668) = (-6L);
                        g_682 ^= func_39(((*g_379) , p_29), (*l_647));
                        (*l_668) &= (safe_mod_func_int8_t_s_s((p_29 <= (*l_647)), g_2));
                    }
                    l_537 ^= (safe_sub_func_uint32_t_u_u(0xB1B38A07L, func_42((p_29 > 0xE0L), (g_84 , ((*l_649) = func_45((g_446 & ((*l_647) , g_179)), p_31, func_45(p_30, &l_650, p_31)))))));
                    (*l_630) = (((*l_647) <= (safe_rshift_func_uint16_t_u_s(((*g_530) ^= ((func_54(p_29, (**l_649), &l_628, (*g_379), ((*l_692) = ((((*l_689) = (*l_647)) | (*l_630)) < ((safe_lshift_func_uint16_t_u_u(0x5AEEL, 2)) , 65532UL)))) , p_30) | p_30)), 14))) >= 0x515DL);
                }
                else
                {
                    unsigned short ***l_693 = &g_529;
                    unsigned short ****l_694 = &l_693;
                    unsigned short ****l_696 = &l_695;
                    int **l_701 = &l_668;
                    unsigned *l_702 = (void*)0;
                    unsigned short *l_710 = &g_276;
                    int **l_711 = &g_665;
                    int *l_712 = &l_628;
                    unsigned char *l_713 = &g_72;
                    (*l_668) ^= (((*l_694) = l_693) != ((*l_696) = l_695));
                    g_715 |= (safe_sub_func_uint32_t_u_u((p_30 <= ((((((*l_625) = p_29) == (**g_529)) == p_29) != (*l_668)) & g_422)), p_29));
                    if ((*l_712))
                    {
                        (**l_701) = (*p_31);
                        (*l_649) = (p_29 , func_45(p_30, (*l_648), (l_668 = ((safe_lshift_func_uint16_t_u_u((*g_530), 9)) , g_718))));
                        (*l_712) &= (&g_529 != &g_529);
                        (*l_648) = p_31;
                    }
                    else
                    {
                        const int *l_719 = &g_720;
                        const int *l_722 = &g_86;
                        const int **l_721 = &l_722;
                        int l_723 = 0x27BE34FEL;
                        (*l_721) = (l_719 = p_31);
                        l_723 |= ((**l_721) && ((*l_712) ^= ((**l_701) , (**g_529))));
                        (**l_701) = ((safe_lshift_func_int16_t_s_s(func_39((l_723 = (safe_mod_func_uint16_t_u_u(p_29, (**l_721)))), p_30), (((*l_676) &= (+p_30)) < l_728))) | (p_29 , 1UL));
                    }
                }
            }
            else
            {
                int **l_729 = (void*)0;
                const unsigned short **l_731 = (void*)0;
                const unsigned short **l_732 = (void*)0;
                const unsigned short **l_733 = &l_402;
                l_630 = p_31;
                (*l_668) |= (((((((*l_733) = (((void*)0 == l_730) , (*g_529))) == &l_681) || ((*g_718) = (p_30 || (-1L)))) || (&g_665 != &g_665)) ^ l_734) & p_29);
            }
            for (g_315 = 0; (g_315 >= 35); g_315++)
            {
                int l_745 = 1L;
                int *l_746 = &l_734;
                g_747 ^= ((safe_rshift_func_int16_t_s_s((func_39(p_29, ((*l_626) == (void*)0)) >= (g_575 , (+(p_30 >= (((*l_746) = (p_29 & ((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(4294967287UL, (safe_lshift_func_uint8_t_u_s(0x7CL, l_745)))), p_30)) , 0xC4L))) < g_179))))), p_30)) >= g_106);
            }
        }
        return &g_221;
    }
    if ((p_30 < ((p_30 < (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(g_2, 8)), p_30)), 65530UL))) | ((**l_485) = 4294967292UL))))
    {
        unsigned char l_781 = 0x96L;
        unsigned *l_808 = &l_631;
        int * const l_812 = &l_734;
        int ***l_816 = (void*)0;
        int l_821 = 0L;
        unsigned char *l_843 = &l_781;
        unsigned char * const *l_842 = &l_843;
        unsigned l_866 = 0x271FE6F1L;
        unsigned short ***l_909 = &g_529;
        (*g_718) = (*p_31);
        for (l_558 = (-1); (l_558 <= (-2)); --l_558)
        {
            int **l_756 = (void*)0;
            int **l_757 = (void*)0;
            int **l_758 = &g_665;
            if ((*g_718))
                break;
            l_650 |= (((*l_758) = &g_446) == p_31);
            (*g_718) = (*p_31);
        }
        for (g_233 = 0; (g_233 < 14); g_233 = safe_add_func_uint32_t_u_u(g_233, 7))
        {
            unsigned char *l_764 = &g_72;
            unsigned char **l_763 = &l_764;
            const char *l_767 = (void*)0;
            const char **l_766 = &l_767;
            int l_779 = (-2L);
            int l_783 = 0x1C3DED09L;
            short *l_800 = &g_67;
            short **l_799 = &l_800;
            short ***l_798 = &l_799;
            unsigned *l_806 = &g_541;
            for (g_181 = 0; (g_181 == 3); ++g_181)
            {
                unsigned char **l_765 = &l_764;
                char **l_769 = &g_143;
                int * const l_780 = &g_221;
                int ***l_817 = (void*)0;
                unsigned l_825 = 4294967295UL;
                int l_838 = 0x48EB54A8L;
                int **l_839 = &g_718;
                l_765 = l_763;
            }
            if ((*g_718))
                break;
            for (l_650 = 0; (l_650 == 12); l_650 = safe_add_func_int16_t_s_s(l_650, 8))
            {
                char l_891 = 0xD2L;
                unsigned *l_893 = (void*)0;
                unsigned *l_894 = &l_401;
                int l_895 = 1L;
                int **l_896 = (void*)0;
                int **l_897 = &l_403;
                l_891 &= (safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(((((-1L) ^ ((*l_812) , (func_39((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(0x460DFC47L, func_39(p_29, (*g_665)))), 0x7064L)), (((l_779 , l_779) & 0xF458L) && (*p_31))) > 0xE0L))) | p_29) == 0x265CL), l_779)) , (*g_718)), (*p_31)));
                l_779 = (safe_unary_minus_func_uint32_t_u(func_39((l_895 &= ((*l_894) = p_30)), ((*g_665) |= (((void*)0 == &p_31) <= 1UL)))));
                (*l_897) = &l_895;
            }
        }
        g_912 ^= (((safe_add_func_int32_t_s_s((func_39((((p_30 >= (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(((func_42(p_30, l_906) < (((safe_mul_func_uint8_t_u_u((l_909 == (void*)0), ((l_910 ^= p_29) >= (p_30 > (p_29 < 0x6150L))))) , p_30) > 1UL)) < 65535UL), 2)) ^ p_30), (*g_379)))) | 0UL) || g_911), p_29) > p_30), 0x9F1B30EEL)) >= 0x917CL) & 0xB4L);
    }
    else
    {
        unsigned short l_913 = 0xC5EAL;
        unsigned ** const l_918 = &g_567;
        int l_919 = 0x8FB4F033L;
        unsigned * const *l_920 = &g_379;
        unsigned char *l_921 = &g_72;
        int l_997 = 0L;
        unsigned char l_1012 = 1UL;
        unsigned char l_1019 = 0x54L;
        unsigned l_1032 = 0xD1A14B13L;
        char **l_1040 = (void*)0;
        int *l_1061 = (void*)0;
        const int l_1079 = 1L;
        char ***l_1098 = &l_1040;
        int l_1116 = 0x43D94A14L;
        int *l_1119 = (void*)0;
        short ** const l_1176 = &g_971;
        (*l_906) &= (*g_718);
        (*l_906) &= l_913;
        (*g_718) ^= 3L;
        if ((safe_unary_minus_func_uint16_t_u(((safe_unary_minus_func_uint8_t_u(((((func_54((safe_add_func_uint8_t_u_u(p_30, (*l_906))), ((g_181 = ((*l_921) &= ((l_919 = (l_918 != (void*)0)) , (l_920 == l_920)))) || p_29), &l_734, p_30, p_30) == 4UL) , l_919) , &g_379) == (void*)0))) != (-8L)))))
        {
            const unsigned l_931 = 4294967295UL;
            char *l_932 = (void*)0;
            short **l_972 = &g_971;
            char l_986 = (-1L);
            const unsigned short ****l_998 = (void*)0;
            int l_1008 = (-8L);
            unsigned l_1031 = 0x60C06FB5L;
            unsigned l_1074 = 0xEFFCAF19L;
            short l_1123 = (-8L);
            int l_1141 = 0x38311A9CL;
            int *l_1142 = &l_919;
            char * const *** const l_1201 = (void*)0;
            if ((safe_unary_minus_func_uint32_t_u((p_30 & func_42((((safe_sub_func_uint32_t_u_u((p_30 , (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(0x20L, (g_221 == (safe_rshift_func_uint8_t_u_u(l_931, 1))))), 13))), (((func_54((((*g_665) , p_29) >= ((l_932 = &g_106) == (void*)0)), l_919, p_31, p_30, p_29) , 0xE2E96B3EL) , (**g_529)) > 0xD710L))) , p_29) == l_931), &l_919)))))
            {
                unsigned l_933 = 4294967295UL;
                int * const l_967 = (void*)0;
                unsigned char ***l_987 = (void*)0;
                l_933 = (*p_31);
                if ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((l_931 & p_30), ((p_30 & 0x7DL) , (safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((*l_921) &= 0UL), ((safe_add_func_uint16_t_u_u(((*g_530) = (l_919 = 1UL)), ((safe_mod_func_uint32_t_u_u(((**l_485) = 0x32536EBAL), 0x1C6580E1L)) || ((safe_sub_func_int16_t_s_s(l_948, l_913)) >= p_30)))) , 0UL))), l_913))))), p_29)))
                {
                    int **l_955 = &l_403;
                    (*l_906) &= ((p_29 = (func_39((l_931 <= (*g_379)), p_29) >= (l_931 | g_720))) , ((safe_rshift_func_uint8_t_u_s((func_39((((*g_718) & (safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s((p_29 >= l_919), 0x6FB8E6E1L)) == l_931), p_29))) != 7UL), p_30) != l_913), 0)) < 0x64L));
                    (*l_955) = (void*)0;
                    (*l_955) = func_45((**g_529), p_31, &l_919);
                }
                else
                {
                    char l_966 = 0x0EL;
                    short *l_969 = &l_487;
                    short **l_968 = &l_969;
                    unsigned char ****l_988 = &l_987;
                    unsigned char ***l_990 = (void*)0;
                    unsigned char ****l_989 = &l_990;
                    unsigned char **l_993 = &l_921;
                    unsigned char ***l_992 = &l_993;
                    unsigned char ****l_991 = &l_992;
                    (*l_906) ^= ((safe_lshift_func_uint16_t_u_s((*g_530), 7)) == 0x54EBL);
                    l_986 = ((*g_718) = ((((g_970 = l_968) != l_972) ^ ((safe_mod_func_uint16_t_u_u((p_29 == ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_30, (safe_rshift_func_int8_t_s_u((func_39(p_29, g_981) , (((((safe_lshift_func_int16_t_s_s(p_30, (safe_lshift_func_uint8_t_u_s((!p_30), p_30)))) , l_966) < l_931) , p_30) < (*g_971))), p_30)))), p_29)) , (*l_906))), 0x48A8L)) & 1L)) != 1UL));
                    (*l_906) = (p_30 , (*p_31));
                    if ((&g_840 == ((*l_991) = ((*l_989) = ((*l_988) = l_987)))))
                    {
                        unsigned short ****l_996 = &l_695;
                        (*g_718) = ((safe_rshift_func_int8_t_s_u((!(((void*)0 != &p_30) | (p_30 , (*g_718)))), ((l_999 = (((**g_529) >= (l_996 == ((0x56B97D35L || l_997) , l_998))) , 0x2714CA71L)) == (*g_379)))) , 0xE11FBCDBL);
                    }
                    else
                    {
                        int l_1006 = 0x1B209CFBL;
                        int l_1007 = 0x7BC7EC7AL;
                        const int l_1013 = 0x5F8B216DL;
                        int **l_1014 = &l_906;
                        (*g_718) = (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(0x6479L, (((*l_932) = (l_986 ^ p_29)) || (((safe_rshift_func_int16_t_s_s(func_54(((l_919 == (l_1007 = (!(((*g_379) == 0x91483458L) != (l_1006 = p_30))))) < ((l_1008 = g_276) | (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(g_422)), l_1012)))), (**g_664), &l_734, l_966, l_1013), (*g_971))) ^ 9UL) <= p_30)))) ^ l_966), 15));
                        (*l_1014) = p_31;
                    }
                }
                for (g_315 = 0; (g_315 <= 19); g_315++)
                {
                    int l_1023 = 0x4DFE2268L;
                    (*g_718) = ((l_1017 , 18446744073709551608UL) , (3UL | func_54((&g_665 == l_1018), l_1019, p_31, p_29, func_39((+(((*p_31) , p_30) & l_919)), p_30))));
                    l_1020 = (*p_31);
                    for (l_948 = 3; (l_948 == 20); l_948 = safe_add_func_int32_t_s_s(l_948, 1))
                    {
                        (*g_718) &= ((((**l_972) = (l_1023 = p_29)) , g_1024) != (void*)0);
                        if ((*p_31))
                            break;
                    }
                }
                for (l_401 = (-30); (l_401 >= 37); l_401 = safe_add_func_uint8_t_u_u(l_401, 7))
                {
                    int **l_1030 = &g_718;
                    (*l_1030) = l_1029;
                    (*l_1030) = func_45((g_276 = ((**g_529) = l_1031)), p_31, &g_912);
                }
            }
            else
            {
                int **l_1033 = &l_1029;
                char ***l_1041 = &l_1040;
                int l_1057 = 0x9A2A62DAL;
                unsigned *l_1058 = &l_1017;
                int *l_1060 = &l_1008;
                unsigned l_1126 = 1UL;
                (*l_1033) = func_45(l_1032, p_31, &l_1008);
                (*g_718) = ((((((void*)0 != (*g_566)) != p_30) >= (p_29 != (((safe_add_func_int16_t_s_s(func_39(p_30, ((safe_rshift_func_int8_t_s_s(p_29, ((+((*l_921) = (0x2BA5CF77L == (&g_143 != ((*l_1041) = l_1040))))) != g_315))) , (*g_665))), 0x3F6DL)) <= (*g_971)) == l_1008))) < 1UL) != p_29);
                (*l_1033) = p_31;
                if ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((p_30 , func_42((safe_unary_minus_func_int16_t_s(((**g_970) &= p_30))), ((*l_1033) = func_45(((safe_rshift_func_int8_t_s_u(func_54(p_30, (func_39((+p_29), (l_1031 & ((**g_529) = ((((*g_379) = l_913) , (func_54((**g_529), ((safe_add_func_int32_t_s_s(((*l_906) = (((*l_1058) |= ((l_1057 = (safe_mul_func_uint8_t_u_u(func_54(((safe_sub_func_uint32_t_u_u((*g_379), (safe_add_func_int16_t_s_s(l_1019, 0L)))) == (**l_1033)), (*l_906), p_31, (*g_379), g_541), l_931))) , 0UL)) >= l_913)), (*p_31))) || (*g_379)), (*l_1033), (*g_379), p_30) < 246UL)) , (**l_1033))))) | (*p_31)), p_31, g_1059, l_986), 3)) >= 0x63L), l_1060, p_31)))), p_30)), (*l_1060))))
                {
                    int *l_1076 = (void*)0;
                    int **l_1075 = &l_1076;
                    int l_1078 = (-6L);
                    int **l_1080 = &l_403;
                    (*l_1033) = l_1061;
                    (*l_1080) = ((*l_1033) = func_45(p_30, ((((safe_sub_func_int32_t_s_s(4L, (func_39(p_30, ((((**l_920) = (safe_lshift_func_int16_t_s_s(((*g_379) ^ ((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_1074 | p_29), ((((***l_695) = ((*g_664) != ((*l_1075) = (void*)0))) <= (0x40D13B57L == p_29)) , p_30))), l_1077)), 1UL)), p_29)) < l_1078)), l_1079))) < (*g_718)) != 1UL)) || 0xEDL))) , (*l_1060)) == (*l_906)) , (void*)0), &g_2));
                }
                else
                {
                    const char ***l_1094 = (void*)0;
                    const char ****l_1093 = &l_1094;
                    char ***l_1095 = (void*)0;
                    char ****l_1096 = &l_1095;
                    char ****l_1097 = (void*)0;
                    int **l_1101 = (void*)0;
                    int * const l_1103 = &l_919;
                    int l_1104 = 0x0D43120BL;
                    (**l_1033) = (p_30 & ((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((((**g_970) | ((((+l_1085) & (safe_rshift_func_int8_t_s_u((func_39(p_29, (safe_rshift_func_int16_t_s_s(func_54(p_29, (((safe_add_func_uint16_t_u_u((((**l_1033) = (safe_unary_minus_func_int16_t_s((((*l_1093) = (void*)0) == (l_1098 = ((*l_1096) = l_1095)))))) != (safe_mul_func_uint16_t_u_u(p_30, (((*l_932) ^= ((&p_31 == l_1101) < 4294967295UL)) & p_30)))), g_1102)) ^ p_29) < 0x83L), l_1103, p_30, p_30), 7))) != 65535UL), 1))) & 0x77C7BF83L) != l_1104)) > 0x91L) | p_30), (*p_31))), (*l_1060))) , p_29));
                    for (g_380 = 0; (g_380 <= 46); g_380++)
                    {
                        const unsigned *l_1121 = &g_1122;
                        const unsigned **l_1120 = &l_1121;
                        int l_1131 = (-10L);
                        (**l_1033) = (((*g_379) & (((*l_1120) = func_45((safe_sub_func_uint16_t_u_u((**g_529), (((g_221 ^ ((g_1117 |= (!((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint8_t_u(0x43L)), 3)), p_30)) , (safe_sub_func_int32_t_s_s((p_30 == ((p_30 || p_29) > ((*l_906) = (*p_31)))), l_1116))))) || g_1118)) | p_29) | (*l_1103)))), p_31, l_1119)) != (void*)0)) , (*p_31));
                        if (l_1123)
                            break;
                        (*l_1029) = (safe_mul_func_uint8_t_u_u(func_54(((l_1126 & 0x5BE5L) | (safe_mod_func_uint16_t_u_u(((p_30 == (safe_lshift_func_int16_t_s_u((p_30 & (func_54(p_30, (*g_665), (*l_1033), (*g_379), g_912) < p_30)), 15))) , 0UL), 0x492FL))), l_1132, (*l_1033), (*g_379), (**l_1033)), p_29));
                        (*l_1103) = ((g_80 & (*l_1103)) , ((void*)0 != (*g_664)));
                    }
                    for (g_575 = 0; (g_575 > 7); g_575 = safe_add_func_int8_t_s_s(g_575, 1))
                    {
                        (*l_1033) = func_45(func_42(l_1123, &l_1116), &l_919, (*l_1033));
                        (*l_1033) = func_45(((safe_mul_func_int8_t_s_s(p_30, (&l_1095 != &l_1094))) != (safe_add_func_uint8_t_u_u(1UL, (*l_1103)))), &l_1008, func_45((((((&p_30 == &l_986) != ((2L && 0x9F87CA5BL) < (*p_31))) < (*g_379)) > p_30) , p_29), &l_1116, p_31));
                        (**l_1033) = 1L;
                        (*l_1033) = p_31;
                    }
                }
            }
            if (((*l_1142) |= (((l_986 ^ (*g_379)) || ((l_1008 = ((*p_31) == (*l_906))) & func_39(((-5L) && (!l_1141)), ((*l_920) != p_31)))) == (*l_906))))
            {
                int **l_1143 = &l_403;
                short ***l_1144 = &g_970;
                short ***l_1145 = (void*)0;
                short ***l_1146 = &g_970;
                short ***l_1147 = &g_970;
                (*l_1143) = p_31;
                (*g_718) = func_42((*l_1142), func_45(((l_972 = (void*)0) != (l_1148 = (p_30 , &g_971))), p_31, ((*l_1143) = func_45(((*l_403) >= p_30), p_31, p_31))));
                (**l_1143) = (safe_unary_minus_func_uint8_t_u(((safe_mod_func_uint16_t_u_u(p_30, (p_29 = ((safe_mod_func_uint8_t_u_u((((((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*g_379) & (*g_718)), 3)), (safe_lshift_func_int8_t_s_s(1L, (func_54(((safe_rshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(1L, (((safe_mod_func_int32_t_s_s(0x9EFDDDE3L, (((*l_1142) = (p_29 != ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((+p_30), 4)), (*l_1142))) < 0x74A2L))) && (*p_31)))) < p_29) != 1UL))) & p_30), p_30)) == (**g_529)), (**l_1143), &l_650, p_29, (*l_906)) | (-8L)))))) && 8UL) && 0x5E870BD0L) ^ p_29) < 0x7B0CL), p_29)) , (*g_971))))) != 0x7FL)));
            }
            else
            {
                int *l_1173 = &g_62;
                int l_1177 = 0x5D8E81FDL;
                (*l_1142) = (((**l_920) |= (((*p_31) , l_918) == (void*)0)) , (-1L));
                if ((*g_718))
                {
                    int **l_1170 = &l_1142;
                    const int *l_1172 = &l_537;
                    const int **l_1171 = &l_1172;
                    (*l_1170) = p_31;
                    (*l_1171) = &l_1079;
                    if ((((((*l_932) = g_911) != (((((**l_972) = 0x310EL) >= 0L) < func_54((+func_39(p_30, ((l_1173 == (void*)0) < g_682))), (safe_lshift_func_int8_t_s_s((((*l_906) , p_30) | (*p_31)), p_29)), p_31, g_539, p_30)) | 3L)) , &g_971) == l_1176))
                    {
                        l_1177 ^= (*p_31);
                        (*g_718) = l_1177;
                    }
                    else
                    {
                        short *l_1180 = &l_487;
                        short **l_1182 = &l_1181;
                        unsigned short ****l_1184 = &l_695;
                        unsigned short *****l_1183 = &l_1184;
                        int l_1192 = 0xE9F93E5CL;
                        unsigned l_1204 = 0xDA785D77L;
                        (*g_718) |= (p_30 || (**l_1171));
                        (*g_718) = (safe_mod_func_uint32_t_u_u((((((*l_1148) = l_1180) != ((*l_1182) = l_1181)) ^ (((*l_1183) = ((*g_379) , (void*)0)) != l_998)) , (*g_379)), p_29));
                        (*l_1170) = func_45(func_39(((l_1185 == (((*l_932) = (safe_sub_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((*g_530), 2)) | func_39(l_1192, (safe_mod_func_int32_t_s_s((*p_31), (safe_sub_func_int16_t_s_s((p_30 >= ((**l_1171) , func_39(p_30, l_1192))), (*g_971))))))), 255UL)) || p_29), p_30))) & 4UL)) != g_181), (*g_665)), p_31, &l_1008);
                        (*l_1170) = func_45((p_29 | func_39(p_29, ((**g_664) = ((safe_sub_func_uint32_t_u_u(func_39((g_1199 == l_1201), ((**g_664) = ((*l_1173) |= p_30))), g_233)) >= g_1118)))), p_31, &l_1192);
                    }
                }
                else
                {
                    char l_1207 = 0xA8L;
                    int **l_1208 = &g_718;
                    (*l_1208) = func_45((safe_add_func_uint32_t_u_u(0UL, (0x48L < (0L >= ((func_39(l_1177, ((&g_971 == l_972) , (((*g_971) ^ p_29) & (-1L)))) > l_1177) || l_1207))))), &l_1116, p_31);
                }
            }
        }
        else
        {
            char l_1213 = 1L;
            short ***l_1222 = (void*)0;
            short ***l_1223 = (void*)0;
            short ***l_1224 = &g_970;
            unsigned short *l_1229 = (void*)0;
            unsigned short *l_1230 = &g_233;
            char *l_1231 = &g_911;
            (*l_906) = (((*g_718) <= (((0xB95FC238L ^ (((g_715 < 0xEEL) >= 1UL) ^ ((safe_mod_func_uint32_t_u_u(((((((*g_971) |= (0x370F9CC2L && (func_54(p_30, l_1213, func_45((**g_529), &l_919, p_31), l_1214, p_30) == 0UL))) == l_1215) , &g_567) == (void*)0) || 1L), (*p_31))) <= (*l_906)))) ^ p_30) != l_1213)) && (*g_379));
            (*l_906) = (((*l_1231) = (safe_rshift_func_uint16_t_u_u(((func_42(l_1213, func_45(((*g_530) = func_42((((safe_add_func_uint8_t_u_u(l_1213, (+func_39((((+0xCFFDL) >= (safe_add_func_int8_t_s_s((((*l_1231) = ((p_30 & (((**g_529) = ((((*l_1224) = &g_971) == l_1176) , (**g_529))) < (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((*l_1230) ^= ((((*g_379) && (6UL != 0xA3L)) , 3L) < (*p_31))) != 0UL), 0L)), (*g_971))))) <= (*g_379))) > 255UL), g_1232))) & p_29), p_29)))) , p_30) != (*l_906)), &l_734)), p_31, p_31)) , p_29) , 1UL), 11))) ^ l_1213);
        }
    }
    return &g_912;
}







static int func_39(unsigned p_40, int p_41)
{
    int * const l_377 = &g_2;
    unsigned *l_378 = &g_80;
    unsigned **l_381 = (void*)0;
    unsigned **l_382 = &g_379;
    unsigned *l_383 = (void*)0;
    int *l_384 = &g_221;
    (*l_384) = ((func_54((!(safe_rshift_func_int8_t_s_u(5L, 2))), (g_221 , g_233), l_377, ((*l_378) ^= (*l_377)), (((*l_382) = g_379) != ((*l_377) , (l_383 = &g_380)))) <= (*l_377)) ^ p_40);
    for (g_219 = 0; (g_219 < 14); g_219++)
    {
        unsigned short l_391 = 0x24E7L;
        int *l_398 = &g_62;
        int *l_399 = &g_86;
        (*l_399) ^= func_54((safe_mul_func_int16_t_s_s(2L, (safe_mod_func_uint32_t_u_u(l_391, 2UL)))), ((*l_398) = ((g_233 || g_221) | (safe_lshift_func_uint8_t_u_u((g_72 &= ((((void*)0 == &l_378) || (safe_rshift_func_int16_t_s_s(g_315, 1))) >= (((safe_sub_func_uint16_t_u_u(((void*)0 != &g_380), l_391)) , 0xAB45L) & p_41))), g_380)))), l_398, (*g_379), p_40);
    }
    return (*l_377);
}







static int func_42(unsigned p_43, int * p_44)
{
    short l_93 = (-1L);
    short l_104 = (-1L);
    char *l_105 = &g_106;
    short *l_109 = &g_110;
    int l_122 = 0x686667EEL;
    char l_144 = 0L;
    char l_234 = 0xA0L;
    int * const l_235 = &g_221;
    const char l_238 = 0x25L;
    unsigned l_242 = 1UL;
    short l_305 = (-10L);
    int *l_307 = &l_122;
    int **l_306 = &l_307;
    int * const **l_326 = (void*)0;
    int l_327 = (-3L);
    short l_337 = 0x37CDL;
    if ((safe_mod_func_int16_t_s_s(((*l_109) ^= (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((l_93 < 0x4CA9A92EL), p_43)), ((l_93 & (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(l_93, l_93)), (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((g_67 < (((*l_105) ^= l_104) && (safe_add_func_int16_t_s_s(l_93, g_2)))) ^ (*p_44)), p_43)) ^ l_104), g_62)), g_72))))) != 0x29768275L)))), p_43)))
    {
        unsigned char *l_121 = (void*)0;
        int l_136 = 0x8704077EL;
        const unsigned short *l_137 = (void*)0;
        const char *l_178 = &g_179;
        const char **l_177 = &l_178;
        unsigned char *l_180 = &g_181;
        char l_184 = 0L;
        int *l_185 = (void*)0;
        int *l_186 = &l_136;
        int l_245 = 1L;
        unsigned l_248 = 0xE84A3AFCL;
        unsigned short *l_249 = (void*)0;
        unsigned short *l_250 = &g_233;
        unsigned *l_251 = &l_248;
        const int l_252 = 0x5EC821C7L;
        int *l_253 = &g_86;
        for (p_43 = 0; (p_43 > 17); ++p_43)
        {
            int * const l_125 = &g_2;
            unsigned short *l_134 = &g_82;
            char **l_142 = (void*)0;
            if ((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((3UL <= (g_86 <= (l_93 | ((((*p_44) = (p_43 < (safe_sub_func_uint8_t_u_u(g_82, (l_93 ^ (safe_mod_func_uint16_t_u_u(((void*)0 != l_121), g_72))))))) > (-4L)) < 4294967295UL)))), g_110)), l_122)))
            {
                unsigned *l_135 = &g_80;
                (*p_44) = ((safe_rshift_func_int16_t_s_u(func_54(g_110, p_43, l_125, p_43, ((g_86 |= ((g_72 > (((*l_135) &= ((safe_sub_func_int8_t_s_s(((void*)0 == p_44), (safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((*l_134) = ((void*)0 != l_134)), 15)), g_106)), g_62)))) > p_43)) != (*p_44))) >= p_43)) <= 0x3D6DB513L)), 5)) > (*l_125));
                if (l_136)
                    break;
            }
            else
            {
                (*p_44) &= (0xF67763B3L == (-1L));
                (*p_44) = ((void*)0 != &p_43);
            }
            (*p_44) = (((g_80 , l_137) == l_137) < 0x65L);
            if (((l_104 && (((*p_44) <= (g_72 >= ((safe_sub_func_uint16_t_u_u(0xDC92L, (((safe_sub_func_uint16_t_u_u((0x2AF0D965L != ((g_143 = &g_106) != (p_43 , ((((*l_125) , l_105) == (void*)0) , l_121)))), l_144)) & (-1L)) > (*l_125)))) & 0x4BBF6D4BL))) >= g_82)) && (*l_125)))
            {
                int *l_148 = &l_136;
                int **l_147 = &l_148;
                short *l_159 = &l_93;
                char *l_160 = (void*)0;
                unsigned *l_161 = (void*)0;
                char l_162 = 0xF8L;
                (*p_44) &= (safe_sub_func_uint8_t_u_u(g_86, l_136));
                (*l_147) = func_45(p_43, p_44, &g_86);
                g_86 = (safe_lshift_func_int16_t_s_s((g_84 >= (((g_110 != g_80) , (g_80 , (0x4B0DL && ((l_136 = (g_86 >= (((*l_105) = g_67) && (((safe_rshift_func_uint8_t_u_s((((~(((g_62 > ((func_54((safe_rshift_func_int16_t_s_u(((*l_159) |= ((safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(((void*)0 == &l_122), g_110)) || 0UL), (*p_44))) | (**l_147))), 10)), p_43, &g_86, g_110, p_43) , l_160) != l_121)) >= 0UL) < g_2)) , (void*)0) == l_121), l_104)) != g_110) && p_43)))) != l_162)))) > (-1L))), g_62));
            }
            else
            {
                if ((safe_rshift_func_int16_t_s_u(5L, 9)))
                {
                    int *l_165 = (void*)0;
                    int *l_166 = &g_86;
                    (*l_166) = ((*p_44) = 0L);
                    (*p_44) ^= g_86;
                }
                else
                {
                    return g_67;
                }
            }
            (*p_44) = ((safe_sub_func_uint32_t_u_u(((0xF959E53FL < (((void*)0 != &l_104) == ((*l_105) = (*l_125)))) <= ((g_86 , ((safe_rshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(func_54((246UL & p_43), ((((0x1CL <= (g_72 && (*l_125))) >= (*l_125)) && 0UL) || p_43), &l_136, g_62, p_43), l_122)) <= (*l_125)), 4)) && p_43)) ^ p_43)), l_104)) , g_2);
        }
        g_86 &= func_54(p_43, g_80, &l_136, (safe_mul_func_int8_t_s_s(g_62, l_144)), ((((*l_186) = (safe_sub_func_int32_t_s_s((g_72 & ((((*l_180) = (((*l_177) = &l_144) != (void*)0)) , (safe_mod_func_int16_t_s_s((l_93 < l_184), 0xC193L))) ^ 4294967295UL)), 0x7DEE9CF0L))) , 0x7CF2F2AFL) , (*l_186)));
        for (l_136 = 0; (l_136 >= (-29)); --l_136)
        {
            const char l_214 = (-9L);
            unsigned short *l_215 = (void*)0;
            unsigned char **l_236 = &l_121;
            int * const l_237 = &l_136;
            int **l_239 = &l_185;
            for (g_82 = (-3); (g_82 < 37); ++g_82)
            {
                int l_216 = 0xA1BD8FF2L;
                short *l_232 = &l_104;
                for (p_43 = 17; (p_43 != 15); p_43--)
                {
                    int * const l_218 = &g_86;
                    for (g_86 = 0; (g_86 > 24); ++g_86)
                    {
                        int l_202 = 1L;
                        unsigned l_212 = 0UL;
                        unsigned short *l_213 = &g_84;
                        unsigned *l_217 = &l_212;
                        int *l_220 = &g_221;
                        unsigned char *l_224 = &g_72;
                        short **l_231 = &l_109;
                        (*l_220) &= (g_219 &= func_54((((*l_217) = ((l_104 , g_110) <= ((safe_unary_minus_func_uint8_t_u(p_43)) && (safe_rshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_202, (-4L))), (p_43 || g_62))) , ((((safe_sub_func_int32_t_s_s(((((func_54(((*l_213) ^= (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s(((safe_mul_func_uint8_t_u_u((((((safe_add_func_uint16_t_u_u((p_44 != &g_62), 65529UL)) & (-1L)) , 2L) < g_67) >= l_212), g_72)) < 0xB53B9236L))), 12))), p_43, p_44, l_202, l_214) , &g_84) == l_215) , p_43) <= p_43), g_106)) , l_216) || g_110) || p_43)), 5))))) , g_106), p_43, l_218, l_216, p_43));
                        g_233 ^= func_54(g_86, (safe_lshift_func_int16_t_s_u(((*l_220) || (((*l_224) ^= ((*l_180) ^= ((g_2 || l_104) > 0xE2L))) <= (safe_mul_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((*l_186), 12)) <= (((g_221 = (*p_44)) > g_84) , (((*l_231) = &g_110) != l_232))) , l_214), (*l_186))))), l_214)), &g_2, (*l_218), p_43);
                    }
                    (*l_218) = (*p_44);
                }
            }
            g_221 = func_54((((*l_180) = 249UL) , g_179), l_234, l_235, ((((*l_236) = &g_72) == (void*)0) | g_2), func_54(((((((((2L < ((void*)0 != &p_43)) || (*l_186)) ^ (*p_44)) == (*l_235)) , l_185) != &g_62) , l_214) , g_110), l_214, l_237, p_43, l_238));
            (*l_239) = &g_86;
        }
        (*l_253) |= (p_43 & (safe_rshift_func_uint16_t_u_u(l_242, (((g_233 || ((safe_add_func_uint16_t_u_u(((((l_245 >= func_54(((*l_250) = (&g_143 == (((*l_251) = (((((safe_lshift_func_uint8_t_u_u((0x33L == (g_181 == ((func_54(((*l_250) = (p_43 != ((func_54(p_43, g_2, l_235, g_80, (*l_186)) || l_248) ^ p_43))), (*l_186), p_44, g_2, (*l_235)) , &g_181) == l_105))), 5)) , g_110) && g_2) != g_106) & (*p_44))) , &l_105))), g_62, &g_221, g_84, g_106)) , (-9L)) < 0x0AL) < (*p_44)), l_252)) && (*l_186))) < 0xE7E94820L) || 0x0F4AL))));
    }
    else
    {
        short l_262 = 0xAF44L;
        int *l_272 = &g_62;
        int **l_271 = &l_272;
        unsigned *l_273 = &g_80;
        unsigned short *l_274 = &g_233;
        unsigned short *l_275 = &g_276;
        char *l_277 = &g_219;
        unsigned char *l_278 = (void*)0;
        unsigned char *l_279 = &g_72;
        const unsigned l_290 = 0x6863550AL;
        int ***l_308 = &l_306;
        (*p_44) = (safe_sub_func_int8_t_s_s((((*l_235) , (g_181 = ((*l_279) = (((*l_109) |= (safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(((*l_277) |= ((safe_lshift_func_int8_t_s_s(p_43, ((*l_235) == (((l_262 > 0UL) , func_45(((*l_275) &= ((*l_274) ^= (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((-1L), ((((*l_273) = ((((((((*l_105) = (safe_mod_func_uint32_t_u_u((4294967295UL & ((*p_44) = ((-10L) >= ((((*l_271) = func_45(l_262, &g_221, p_44)) == (void*)0) < p_43)))), 0x0DFA86E4L))) | (-8L)) <= 0L) , g_86) && g_179) | (*l_235)) , l_262)) | l_262) , p_43))) || (*p_44)), p_43)), l_262)))), p_44, p_44)) != l_235)))) >= p_43)), (*l_235))), 13))) != 4L)))) || (*l_235)), 0x4DL));
        g_221 |= 3L;
        for (g_219 = (-15); (g_219 <= 25); g_219 = safe_add_func_uint16_t_u_u(g_219, 7))
        {
            unsigned short * const l_282 = &g_276;
            unsigned short *l_283 = &g_82;
            unsigned short **l_284 = &l_283;
            int l_285 = (-1L);
            (*p_44) = (((*l_109) &= (+func_54((l_282 != ((*l_284) = l_283)), l_285, (((*l_282) &= l_285) , (((safe_mul_func_int16_t_s_s(((((*l_105) ^= ((g_72 & (*l_235)) > ((safe_mod_func_uint8_t_u_u(g_84, ((0x095AAE58L <= g_181) , 0x70L))) <= 0xB1L))) | p_43) != g_62), l_262)) ^ 0L) , l_272)), l_262, l_290))) <= 1L);
        }
        if (((((safe_mul_func_uint16_t_u_u((((*l_277) |= ((safe_sub_func_uint8_t_u_u(0UL, ((*l_235) = (*l_235)))) | 0x28F99BDFL)) != (safe_mod_func_int32_t_s_s((((*l_308) = (((l_93 , func_45((p_43 , (safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(p_43, l_290)) , ((((p_43 > ((*l_273) = (((safe_mod_func_int16_t_s_s((g_80 & (-1L)), g_2)) ^ 9UL) < g_106))) | l_305) < p_43) >= p_43)), p_43))), p_44, p_44)) != &g_2) , l_306)) == (void*)0), 0xEA313399L))), p_43)) ^ g_233) , &g_80) != &l_242))
        {
            int *l_309 = &g_86;
            unsigned *l_314 = &g_315;
            int *l_333 = &g_2;
            int **l_332 = &l_333;
            unsigned char *l_336 = &g_181;
            int * const l_338 = &l_327;
            int *l_339 = &l_327;
            (*l_309) |= ((*l_235) ^= (*p_44));
            (*l_309) &= (l_327 = (((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((((((*l_314) = g_80) , (((*l_279) = ((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_80, g_179)), (safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((((*l_235) = (safe_rshift_func_int8_t_s_s(0x69L, 6))) | l_290) & ((void*)0 != l_274)), 8L)), ((*p_44) ^= (p_43 > p_43)))))) , 0x7EL)) , &l_271)) != l_326) != 1UL) , g_106), 0UL)), p_43)) , g_276) || p_43));
            p_44 = func_45(((*l_274) ^= 65535UL), &g_86, func_45(func_54(g_84, ((safe_rshift_func_uint8_t_u_s(func_54((func_54(p_43, (safe_lshift_func_uint8_t_u_s((g_72 &= (*l_309)), (g_221 , (*l_309)))), ((*l_332) = &g_86), ((safe_lshift_func_uint8_t_u_s(((*l_336) = p_43), l_290)) <= 4L), (*l_235)) , g_82), g_106, &g_2, l_337, p_43), p_43)) , 0x06402A00L), l_338, l_262, p_43), &g_86, l_339));
            (*l_332) = &g_86;
        }
        else
        {
            unsigned *l_343 = &g_315;
            unsigned **l_342 = &l_343;
            int l_354 = 0x07509DA9L;
            g_86 &= func_54(((*l_274) = g_233), (((safe_mul_func_uint8_t_u_u(p_43, ((((((p_43 > g_80) == ((((*l_342) = (void*)0) != &g_315) > ((safe_rshift_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(0x3B96L, ((safe_rshift_func_int8_t_s_u(((!((safe_mul_func_int16_t_s_s((p_43 && ((*l_105) = l_354)), l_290)) > g_276)) > p_43), 4)) <= g_72))), 0x1D0DL)) , (-1L)) <= p_43), p_43)) , 0x20D3L))) , l_354) != p_43) > (*l_235)) , 0x3DL))) ^ g_80) , 0x0B68734BL), p_44, l_262, p_43);
        }
    }
    for (l_234 = (-16); (l_234 < 9); l_234++)
    {
        int l_357 = (-7L);
        int **l_369 = (void*)0;
        int *l_371 = &g_2;
        int **l_370 = &l_371;
        (*l_370) = func_45((((-1L) > (l_357 , (safe_mul_func_int8_t_s_s(((*l_235) ^= ((*l_105) ^= p_43)), (safe_sub_func_uint16_t_u_u(((g_80 && 5UL) | ((g_84 | (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((&g_143 != (g_368 = (((p_43 , (safe_mul_func_int8_t_s_s(p_43, 0x11L))) , g_276) , (void*)0))), g_179)), g_219))) & 1UL)), g_82)))))) & p_43), &g_2, p_44);
        if (g_80)
            break;
        return p_43;
    }
    return (*l_235);
}







static int * func_45(unsigned short p_46, int * p_47, int * p_48)
{
    char l_60 = 0xF4L;
    int *l_61 = &g_62;
    unsigned short *l_81 = &g_82;
    unsigned short *l_83 = &g_84;
    int *l_85 = &g_86;
    (*l_85) = ((safe_add_func_int16_t_s_s((((*l_83) = ((safe_mul_func_int16_t_s_s(func_54(g_2, ((*l_61) = (l_60 , 0xDF2FFA36L)), l_61, g_2, p_46), ((*l_81) = ((l_60 , (0x28954837L || 6L)) || l_60)))) && l_60)) & p_46), 0UL)) == p_46);
    return l_61;
}







static short func_54(unsigned short p_55, int p_56, int * const p_57, unsigned p_58, const unsigned char p_59)
{
    int l_79 = (-2L);
    for (p_55 = 6; (p_55 < 55); p_55 = safe_add_func_uint32_t_u_u(p_55, 8))
    {
        unsigned char *l_68 = (void*)0;
        unsigned char *l_69 = (void*)0;
        unsigned char *l_70 = (void*)0;
        unsigned char *l_71 = &g_72;
        l_79 = (((*p_57) ^ 0x0C33490CL) == ((g_62 > ((safe_mod_func_int32_t_s_s((*p_57), ((g_67 = 0x09E13A3AL) ^ (((!g_2) , (((*l_71) = 0UL) ^ (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_2, (((safe_add_func_uint16_t_u_u((!0x181CL), g_62)) | (-1L)) >= p_55))), p_58)))) , 4294967289UL)))) || 0x86L)) <= 255UL));
    }
    g_80 = g_62;
    return l_79;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_682, "g_682", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    transparent_crc(g_911, "g_911", print_hash_value);
    transparent_crc(g_912, "g_912", print_hash_value);
    transparent_crc(g_981, "g_981", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    transparent_crc(g_1102, "g_1102", print_hash_value);
    transparent_crc(g_1117, "g_1117", print_hash_value);
    transparent_crc(g_1118, "g_1118", print_hash_value);
    transparent_crc(g_1122, "g_1122", print_hash_value);
    transparent_crc(g_1232, "g_1232", print_hash_value);
    transparent_crc(g_1262, "g_1262", print_hash_value);
    transparent_crc(g_1496, "g_1496", print_hash_value);
    transparent_crc(g_1506, "g_1506", print_hash_value);
    transparent_crc(g_1528, "g_1528", print_hash_value);
    transparent_crc(g_1551, "g_1551", print_hash_value);
    transparent_crc(g_1651, "g_1651", print_hash_value);
    transparent_crc(g_1654, "g_1654", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
