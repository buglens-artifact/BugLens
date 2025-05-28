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


struct S0 {
   unsigned f0;
   unsigned f1;
   long long f2;
};


static unsigned g_2 = 0x5BF25CBDL;
static short g_45 = 0x1F1CL;
static short g_47 = (-1L);
static short g_75 = (-5L);
static unsigned g_94 = 1UL;
static unsigned short g_114 = 65534UL;
static char g_115 = 1L;
static unsigned char g_116 = 0x11L;
static int g_129 = 1L;
static int g_138 = 0x1A5E5DFAL;
static volatile struct S0 g_140 = {0x91F76D5AL,9UL,0xF452B547262ED815LL};
static char g_182 = 0x1DL;
static char g_201 = 0x6AL;
static struct S0 g_204 = {0x03869566L,0x88158D60L,0xD4E9259845740070LL};
static long long g_225 = (-8L);
static int g_274 = (-1L);
static long long g_279 = 0x1FB92C6D3135C6D6LL;
static int g_376 = 0x914669F0L;
static struct S0 g_391 = {0x237CFC89L,0x70E22319L,0x9840E0E2DA036232LL};
static short g_399 = 5L;
static unsigned long long g_426 = 18446744073709551609UL;
static short g_451 = 1L;
static long long g_519 = (-9L);
static unsigned g_522 = 0xC002340BL;
static volatile int g_527 = 0xCF12C636L;
static unsigned long long g_568 = 0UL;
static unsigned g_584 = 0UL;
static unsigned short g_606 = 0x74F8L;
static short g_628 = 1L;
static long long g_680 = 0x7DB95A4627B0B167LL;
static unsigned g_681 = 0x93F91B3AL;
static long long g_724 = 0x8E860BBA1F3004FFLL;
static short g_748 = 0x3363L;
static unsigned short g_749 = 0xDFA2L;
static unsigned g_819 = 0x36B23ED3L;
static int g_820 = 0L;
static int g_861 = 0xBDD10482L;



static int func_1(void);
static unsigned char func_8(struct S0 p_9, int p_10, unsigned long long p_11, struct S0 p_12);
static struct S0 func_13(const short p_14, unsigned char p_15, int p_16, short p_17);
static int func_21(unsigned p_22, long long p_23);
static unsigned char func_33(unsigned p_34, const int p_35, short p_36, long long p_37);
static struct S0 func_48(const struct S0 p_49, unsigned p_50, short p_51, const short p_52);
static char func_54(unsigned short p_55);
static int func_59(short p_60, unsigned p_61, long long p_62, char p_63);
static struct S0 func_67(const char p_68, int p_69, unsigned p_70, unsigned p_71);
static unsigned func_72(long long p_73, short p_74);
static int func_1(void)
{
    unsigned long long l_3 = 18446744073709551615UL;
    int l_18 = 1L;
    unsigned char l_427 = 255UL;
    char l_434 = (-8L);
    int l_439 = 0xE758F6DFL;
    unsigned short l_512 = 0UL;
    struct S0 l_619 = {0UL,0x301F5196L,0x66883A8CFE880241LL};
    unsigned long long l_708 = 18446744073709551608UL;
    short l_723 = 0xB323L;
    struct S0 l_800 = {0x22A885E2L,0x2E1FA760L,-1L};
    l_18 = (((l_3 ^= g_2) >= ((g_426 |= ((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((func_8(func_13(((l_18 >= g_2) == l_18), l_18, (safe_mul_func_int8_t_s_s(l_18, 0x15L)), l_18), l_18, g_2, g_391) > 1L), 0L)), 5L)) && 1UL)) & 0x66CD48A2287F0B47LL)) || 0L);
    g_129 &= l_3;
    l_18 = l_427;
    if ((l_439 = ((((3UL == (g_115 < (((g_140.f2 >= (l_18 = (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u(2UL, g_426)) == (func_54(l_434) != ((safe_mod_func_int64_t_s_s((((safe_mod_func_uint8_t_u_u(g_115, (g_116 = g_47))) || 0UL) | 0x72AAAE91L), 0x3002C48C57555072LL)) ^ g_47))), l_434)), g_2)))) <= 5UL) ^ 0L))) || l_427) <= l_434) && 0UL)))
    {
        unsigned l_444 = 0xF3E37F6AL;
        int l_447 = 7L;
        int l_450 = 0xE37D7494L;
        unsigned long long l_465 = 1UL;
        unsigned l_502 = 0x8FBCBA9DL;
        if ((l_439 = func_33((safe_add_func_uint16_t_u_u(((l_444 = (safe_rshift_func_int8_t_s_u(g_140.f2, 3))) > l_18), g_129)), l_18, ((((safe_add_func_uint16_t_u_u((!((l_447 = g_426) | (safe_add_func_int32_t_s_s(g_116, l_450)))), (g_451 = (g_114 = (g_204.f1 == 0x86A7L))))) & g_391.f2) == l_18) > g_426), g_47)))
        {
            unsigned long long l_482 = 0xA5E2A0ED4432CD75LL;
            int l_530 = 1L;
            int l_534 = (-1L);
            l_18 = l_450;
            if ((safe_mul_func_uint8_t_u_u(((g_391.f2 & g_182) & ((safe_add_func_int64_t_s_s(g_391.f1, (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((g_116 |= ((safe_mod_func_uint32_t_u_u((((safe_unary_minus_func_uint64_t_u(g_115)) >= (safe_add_func_int8_t_s_s(l_427, l_465))) == l_18), (l_450 = ((g_204.f0 < (safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s((safe_sub_func_int16_t_s_s((g_399 = g_399), 65535UL)), 0x4B760C9BD89B81FCLL)), l_450))) & g_140.f0)))) == g_45)), g_391.f0)), l_3)))) <= l_427)), l_444)))
            {
                int l_478 = 0xF1862472L;
                short l_503 = 0xD23BL;
                unsigned long long l_520 = 0UL;
                int l_521 = 0x4B7B3064L;
                for (g_47 = (-30); (g_47 == 1); g_47++)
                {
                    short l_479 = 0x7425L;
                    int l_483 = 9L;
                    char l_490 = 0x69L;
                    int l_491 = 0x6A6627CFL;
                    l_491 = ((l_427 ^ ((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((l_479 = l_478), (safe_lshift_func_int8_t_s_s(((g_116 = l_482) ^ l_444), 3)))), ((((l_483 = g_2) && 0x1443EECFL) & (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_478, g_129)), 5))) ^ (safe_mul_func_int8_t_s_s((l_478 || l_478), l_478))))) == l_490)) | l_482);
                    g_129 ^= g_274;
                    if ((g_274 = (g_204.f0 > (safe_add_func_int32_t_s_s(func_54(g_399), ((l_439 < (safe_mod_func_uint32_t_u_u((func_54(l_3) != ((((l_18 = ((safe_sub_func_int64_t_s_s(((safe_add_func_int8_t_s_s((g_182 = (g_129 > 0x2229L)), (((safe_mod_func_int8_t_s_s((((func_54(g_115) > g_201) || g_47) == (-10L)), l_18)) < (-1L)) > g_204.f0))) < g_140.f2), 1L)) != 0x9C9D7D41L)) <= l_444) >= 0x34L) | 0xFCAD65ECBE0F669ALL)), l_502))) == g_129))))))
                    {
                        unsigned l_511 = 0x8A9230CBL;
                        g_138 = 0xC52C199FL;
                        g_138 = (((((g_116 = g_47) == (g_2 == (g_274 <= l_490))) | l_503) < 1L) & (func_54((func_54(g_115) > g_376)) != l_503));
                        l_491 ^= (~func_72((safe_sub_func_int32_t_s_s((l_450 ^= (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((0xE6EAF15832034141LL & (safe_lshift_func_int8_t_s_s((-1L), 3))))), func_59(g_182, l_478, g_274, g_138)))), (l_447 = l_511))), l_482));
                    }
                    else
                    {
                        long long l_523 = 1L;
                        int l_524 = 0xB2862F6EL;
                        l_523 ^= ((l_512 |= l_465) < func_59(l_439, (safe_sub_func_uint32_t_u_u((g_522 |= (safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((l_478 && ((l_18 = 8L) || (l_450 = (l_478 = (5L ^ l_483))))) | (((g_519 = l_434) ^ (l_521 = (l_520 = 0xA9529CCDL))) >= g_129)), 0x77L)), g_391.f2))), 0x3ECC4598L)), l_503, l_490));
                        l_524 = (~8L);
                    }
                }
            }
            else
            {
                long long l_537 = 0x40F34BE596D7B5C8LL;
                if (g_225)
                {
                    for (l_465 = (-9); (l_465 > 46); ++l_465)
                    {
                        g_138 = l_482;
                    }
                }
                else
                {
                    int l_533 = (-1L);
                    unsigned short l_538 = 6UL;
                    l_530 = ((l_3 >= g_527) != (safe_sub_func_uint8_t_u_u(2UL, l_482)));
                    for (g_114 = 10; (g_114 >= 45); g_114 = safe_add_func_int32_t_s_s(g_114, 3))
                    {
                        g_138 = (l_533 <= 6UL);
                        if (g_204.f2)
                            break;
                    }
                    g_391 = func_13(g_391.f0, (l_534 ^ (safe_mod_func_uint16_t_u_u(0x58DDL, (((l_537 >= (~g_204.f1)) > (l_537 | g_426)) ^ l_538)))), l_537, l_534);
                }
            }
        }
        else
        {
            unsigned char l_541 = 255UL;
            for (l_3 = 0; (l_3 >= 58); l_3 = safe_add_func_int8_t_s_s(l_3, 3))
            {
                unsigned short l_544 = 1UL;
                g_138 |= 0x545578F8L;
                l_18 |= l_541;
                for (g_376 = 0; (g_376 != (-4)); g_376--)
                {
                    if (g_391.f0)
                        break;
                }
                g_138 &= l_544;
            }
        }
    }
    else
    {
        long long l_556 = 0xE59B3B48175F5E94LL;
        int l_559 = 0x3ADD28D2L;
        int l_650 = 0x5777DE3AL;
        unsigned short l_692 = 0x6AD7L;
        char l_741 = 0x87L;
        const unsigned long long l_764 = 0x4AD9D272E1FB1E9BLL;
        struct S0 l_765 = {0x0C8436BCL,0x51370B10L,1L};
        int l_766 = 0xA9F87137L;
        int l_793 = (-6L);
        const long long l_853 = 0L;
        char l_893 = 1L;
        if (l_434)
        {
            unsigned short l_560 = 65527UL;
            int l_581 = 0xB4395AB6L;
            int l_599 = 1L;
            unsigned long long l_603 = 5UL;
            unsigned char l_613 = 0UL;
            struct S0 l_629 = {7UL,0x6DEAB870L,0x59445804D30CDE53LL};
            int l_641 = 0x25F51EEDL;
            int l_642 = 0xA2D70BC1L;
            long long l_671 = 0x63D64212A1A136FDLL;
            int l_735 = (-9L);
            long long l_740 = (-4L);
            if (((g_140.f0 && ((g_519 = (safe_mod_func_int64_t_s_s(g_451, ((g_47 && (safe_unary_minus_func_int32_t_s((g_2 < (((func_54(((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((g_114 |= (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(l_556, 3)) == (-5L)), (safe_rshift_func_int16_t_s_u((((l_559 = g_116) >= func_54(l_556)) > g_45), 11))))), l_427)), 13)) >= g_527)) || 0x4DA5L) || l_560) == l_560))))) ^ 0x3DFF9E0EL)))) && l_560)) & 0x103CL))
            {
                char l_567 = 1L;
                int l_582 = 3L;
                int l_583 = 0x248E6DB1L;
                struct S0 l_612 = {0xB809B9F6L,0x23927CE2L,-1L};
                for (l_512 = 0; (l_512 < 23); l_512 = safe_add_func_int64_t_s_s(l_512, 7))
                {
                    unsigned short l_565 = 0x903DL;
                    int l_566 = 0x554D3FC8L;
                    short l_569 = 0xC53DL;
                    g_568 |= func_59(l_560, l_560, (l_566 ^= (func_54(((safe_mul_func_int8_t_s_s((l_565 ^ (0L | l_560)), 0x2DL)) | l_560)) != (~0xA9CBL))), l_567);
                    l_566 = (l_569 | (safe_lshift_func_uint16_t_u_u((func_72(g_140.f1, l_565) || g_391.f1), (g_584 = (l_583 = ((((l_427 & (l_582 = ((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((((g_568 |= (safe_lshift_func_uint8_t_u_u(l_567, (((safe_lshift_func_int16_t_s_u(0xA9B0L, (l_581 = l_427))) && g_426) < 1UL)))) ^ g_426) >= g_45))), 65535UL)), 7)) ^ 0xBE81490DA2FF739BLL))) >= l_560) | 0xB6BAF48D3DC8211DLL) | l_559))))));
                    for (g_451 = 0; (g_451 != 7); g_451++)
                    {
                        unsigned long long l_600 = 0xADA88F1EC0D51D8DLL;
                        int l_607 = 0L;
                        l_582 &= (l_581 != ((safe_mod_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s(func_72((l_559 = ((l_600 = l_599) <= g_391.f0)), g_527), 14)) != (safe_lshift_func_uint8_t_u_u((l_603 = g_47), 2))) ^ (safe_mod_func_int16_t_s_s((g_376 & func_54(g_519)), l_427))), l_556)), 3)), g_606)) <= g_584), g_519)) == g_426), l_607)) < g_522));
                    }
                }
                l_613 = (safe_mod_func_int64_t_s_s((5L != (((func_8(g_204, l_583, (safe_add_func_uint8_t_u_u((g_391.f0 < (g_204.f2 == g_115)), g_129)), l_612) ^ l_556) < (-1L)) >= g_568)), g_426));
                l_583 = g_426;
                g_138 = g_140.f1;
            }
            else
            {
                int l_618 = 0x7C0D181FL;
                struct S0 l_620 = {0x4013C13CL,0UL,-10L};
                unsigned char l_627 = 1UL;
                if (((safe_sub_func_int8_t_s_s(l_556, g_391.f2)) | ((~l_618) != g_204.f2)))
                {
                    l_620 = l_619;
                    return l_559;
                }
                else
                {
                    char l_622 = 0L;
                    if ((0x57L < 0x0EL))
                    {
                        long long l_621 = (-9L);
                        l_559 ^= (g_628 |= (l_621 <= func_21(l_622, func_33((safe_rshift_func_uint8_t_u_u(l_599, 6)), g_391.f0, g_129, (safe_sub_func_uint16_t_u_u((1UL ^ (((1L | 0UL) | l_627) <= l_620.f2)), g_519))))));
                    }
                    else
                    {
                        unsigned char l_638 = 1UL;
                        g_274 = l_559;
                        l_629 = g_204;
                        l_642 = (func_72((safe_lshift_func_uint16_t_u_u((l_641 = (safe_lshift_func_uint8_t_u_s(g_129, (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(l_638, 2UL)), (((l_581 ^= ((((((safe_add_func_uint32_t_u_u(g_47, g_225)) | (g_279 &= 0x1C8CC96485889016LL)) == l_618) || g_279) < ((((0xDB7BL < g_225) && (-1L)) < g_115) >= g_114)) <= g_75)) ^ 18446744073709551607UL) != 5L)))))), l_638)), l_3) == 0x8837L);
                        l_619 = func_13((safe_unary_minus_func_uint16_t_u(0x2287L)), (safe_rshift_func_uint16_t_u_u(1UL, 14)), (0x59L ^ ((safe_rshift_func_uint16_t_u_u(g_115, 4)) || (safe_rshift_func_int8_t_s_s(g_584, (0x1BEDL == (g_201 || l_622)))))), l_559);
                    }
                    l_18 = (l_622 | (g_129 < (g_628 > func_54((g_115 ^ (l_581 = 0xB6E9B01FL))))));
                }
                l_559 = func_59(((l_650 ^ g_451) <= ((func_21(g_274, (g_519 ^= ((-6L) ^ g_114))) | l_613) || 0xEAL)), l_581, l_18, g_391.f2);
            }
            for (g_47 = 0; (g_47 < 9); g_47 = safe_add_func_uint32_t_u_u(g_47, 5))
            {
                unsigned l_656 = 0xF02DDE9BL;
                unsigned l_691 = 4294967289UL;
                int l_702 = 0x5233ED00L;
                unsigned l_734 = 18446744073709551615UL;
                if ((l_559 = 0x9771846BL))
                {
                    unsigned l_657 = 0xC69CE4A3L;
                    unsigned long long l_658 = 4UL;
                    l_658 |= (safe_mod_func_int16_t_s_s(((func_33(((2UL != g_47) ^ g_140.f0), ((safe_unary_minus_func_int32_t_s(func_54(g_274))) | g_75), l_656, g_114) < l_560) <= 0xB6L), l_657));
                    l_559 |= (safe_mod_func_uint32_t_u_u(1UL, l_619.f1));
                    l_629 = g_391;
                }
                else
                {
                    unsigned l_682 = 1UL;
                    int l_703 = (-1L);
                    l_641 |= ((((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((g_680 = (g_116 = func_54(((((safe_lshift_func_uint8_t_u_u(g_138, ((safe_rshift_func_int16_t_s_s(l_656, ((l_671 < l_650) < (safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(g_527, ((l_656 <= (g_522 < ((safe_sub_func_uint8_t_u_u(g_116, l_629.f2)) ^ g_606))) & l_656))) >= l_560), 0L)), 1))))) < 0xA6188BC2L))) <= l_656) & l_556) || l_656)))), g_376)), 14)) || g_681), l_599)) && 0x4DAECB3359B462DCLL) | 1L) & l_682);
                    if (g_225)
                        continue;
                    for (l_427 = (-14); (l_427 >= 1); ++l_427)
                    {
                        unsigned char l_693 = 0x95L;
                        g_138 = (g_129 = l_656);
                        g_274 &= (18446744073709551607UL & (safe_mod_func_int32_t_s_s(func_54((l_18 = l_619.f0)), l_656)));
                        l_18 = ((l_439 = l_650) && ((g_522 < (l_559 = (((((l_641 ^= (safe_mul_func_uint16_t_u_u((l_650 ^ (func_54((g_606 ^= 1UL)) >= (l_691 < (((4294967295UL || func_33(g_47, l_682, g_274, l_692)) & 1UL) != g_426)))), g_522))) | l_691) >= 0x74268D14L) || g_115) > l_682))) < l_693));
                        l_703 ^= ((4294967295UL > (0L && (safe_mod_func_int8_t_s_s((g_201 = (safe_mul_func_int16_t_s_s(0xF94BL, l_3))), (safe_sub_func_int8_t_s_s(g_140.f1, (g_129 < ((safe_sub_func_int8_t_s_s(l_682, ((g_182 = (l_702 |= g_606)) & (g_116 ^= 0xABL)))) <= g_204.f1)))))))) ^ g_426);
                    }
                }
                for (l_556 = 0; (l_556 >= 22); l_556 = safe_add_func_int32_t_s_s(l_556, 6))
                {
                    g_724 |= (safe_lshift_func_uint16_t_u_s(l_708, (l_650 > (safe_rshift_func_uint8_t_u_u(g_606, ((g_522 = (safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(l_691, (safe_lshift_func_int8_t_s_s(l_18, 5)))), (((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(3L, (l_723 = (l_641 = (1UL <= (func_59(func_54((l_439 = (l_619.f2 >= (safe_add_func_uint64_t_u_u(18446744073709551606UL, 0xD3606592D9AE121ELL))))), l_560, g_140.f1, g_204.f1) && 0x6EL)))))), g_376)) && 0x5CL) && 0x7EC8F3D1L)))) <= 4UL))))));
                    g_138 &= (l_735 ^= ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(g_391.f1, ((l_641 = g_140.f1) || (safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint16_t_u_u((g_606 |= g_140.f1), 11))))))), l_702)) != ((l_581 ^= (safe_add_func_int16_t_s_s(l_734, g_45))) < l_702)));
                }
                l_735 = (safe_mod_func_int64_t_s_s((g_451 != func_59(((safe_mul_func_uint8_t_u_u(((g_45 = l_740) & (g_75 = l_734)), g_225)) >= (l_581 |= func_54((l_702 == 0x4FF203BAL)))), g_399, g_204.f0, l_741)), (-1L)));
                g_749 |= (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_691, g_681)), func_72(g_47, g_748))), func_54(g_376)));
            }
            l_735 |= (0xD9L & (((l_439 = 0UL) == l_559) != 0xBE95FD66L));
            l_735 &= (safe_sub_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(g_628, (-1L))) ^ g_140.f1), ((l_692 != 0x28D2L) && (safe_sub_func_uint16_t_u_u(((l_18 == ((g_724 ^ (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((g_606 < (safe_mod_func_int32_t_s_s(0L, g_522))) <= l_613), 0x7B41C345L)), l_764))) <= 0x1DCDL)) == l_764), 0UL)))));
        }
        else
        {
            unsigned long long l_769 = 18446744073709551615UL;
            int l_773 = (-1L);
            g_138 |= 0x5C5816AEL;
            l_766 = func_8(l_765, l_741, ((g_116 & ((l_766 < (l_708 ^ (l_18 = ((l_769 ^ l_765.f0) >= ((safe_mod_func_uint32_t_u_u(((l_708 > (func_54(l_619.f2) | 0x83035BBBL)) ^ 0UL), 0xC9C6D881L)) & 247UL))))) | g_47)) | g_522), l_619);
            if (g_584)
            {
                unsigned l_772 = 0xD060D3C6L;
                l_772 = l_765.f2;
                g_129 = (0x776618A7L & (-2L));
                l_773 = (-7L);
            }
            else
            {
                const int l_774 = (-3L);
                g_138 = l_774;
            }
            l_619 = func_48(l_619, l_765.f0, l_773, g_748);
        }
        if ((l_793 &= (safe_lshift_func_uint16_t_u_u(l_619.f2, (safe_mul_func_int16_t_s_s(((l_18 = ((safe_lshift_func_int8_t_s_u(((g_522 ^= (func_33((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((!(((safe_unary_minus_func_uint16_t_u(((g_47 = g_138) >= ((l_439 = (+((safe_sub_func_uint16_t_u_u(l_434, ((safe_add_func_uint32_t_u_u(((((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((l_741 <= (l_559 = g_94)))), (g_279 && l_512))) > l_619.f1) <= g_399) & g_2), g_399)) ^ g_94))) > 0x4A89L))) >= g_182)))) && l_559) != 0x4B34CF90L)), l_3)), g_274)), l_766, l_708, g_75) ^ l_764)) | g_391.f1), g_724)) >= g_45)) < 5L), g_724))))))
        {
            unsigned long long l_799 = 0x63A32B6267118844LL;
            unsigned l_804 = 4294967292UL;
            int l_818 = 1L;
            l_619 = func_13(g_748, l_559, l_741, l_559);
            l_800 = func_48(l_619, ((safe_rshift_func_uint8_t_u_u(g_522, (safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((func_54((((func_72(g_279, (~func_54(l_766))) != l_18) != (0x3B7EL >= (g_47 > 0x87L))) != l_708)) | g_568))), l_799)))) <= l_3), g_568, l_764);
            for (g_628 = 23; (g_628 == 27); ++g_628)
            {
                unsigned short l_805 = 4UL;
                l_805 &= ((safe_unary_minus_func_uint64_t_u(0x891B55A647AD6CC0LL)) ^ (l_804 != l_804));
            }
            l_559 |= func_59(func_59((l_18 = (safe_mod_func_int16_t_s_s((((((safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((~(safe_mod_func_uint16_t_u_u((func_8(l_765, g_527, l_556, g_391) | g_749), (safe_lshift_func_uint8_t_u_s(g_748, 7))))) | ((g_820 = (safe_mul_func_uint16_t_u_u(l_818, ((g_819 = ((+0xD3L) ^ l_818)) != 0x97203E4FL)))) && l_804)) < 0x45L), 1UL)), g_522)) & l_764) & g_2) > g_606) <= 0xE1L), l_800.f0))), g_391.f1, g_749, g_628), g_606, l_764, l_650);
        }
        else
        {
            char l_827 = 0xE6L;
            int l_836 = 0xCFA28818L;
            int l_845 = (-1L);
            int l_876 = (-5L);
            struct S0 l_897 = {18446744073709551610UL,0xD510BCAFL,0xB3056DD9124EB388LL};
            g_138 = 3L;
            if ((safe_sub_func_uint64_t_u_u((g_376 && (safe_rshift_func_uint8_t_u_u(g_724, (((safe_add_func_int16_t_s_s((l_827 = (-1L)), 8L)) != (g_606 ^= (safe_add_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((l_18 = g_628), (safe_add_func_int32_t_s_s(g_527, (safe_add_func_int16_t_s_s(0x5EF5L, ((l_836 > ((l_845 ^= ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((~(g_201 = ((safe_sub_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((0x11FC9CD7L & l_800.f1), 1UL)) < g_376) < 0x76L), (-1L))) ^ 0x7FD4L))), 6)), 11)) > l_800.f0)) >= g_225)) >= g_749))))))) | l_741) && 0xF6B7L), 0L)))) > l_793)))), 0x9A2927AC26C70C2DLL)))
            {
                volatile struct S0 l_846 = {9UL,0UL,1L};
                g_138 |= l_766;
                l_846 = g_140;
                l_766 = ((0x9EL != (safe_add_func_uint32_t_u_u(l_845, ((safe_mul_func_int8_t_s_s(0x13L, (safe_rshift_func_uint8_t_u_s(255UL, (g_391.f2 != ((0UL | (4294967295UL && 0xA10846B3L)) & (0xB56FL | g_279))))))) & g_116)))) > l_853);
            }
            else
            {
                int l_856 = (-2L);
                unsigned l_894 = 0x3C11DD1BL;
                unsigned l_895 = 18446744073709551607UL;
                struct S0 l_896 = {0UL,1UL,0x96B4FB5530D22EBCLL};
                for (g_399 = 0; (g_399 <= (-3)); g_399 = safe_sub_func_uint32_t_u_u(g_399, 1))
                {
                    const long long l_857 = 0x612DC27EC83FC4A3LL;
                    int l_862 = 1L;
                    struct S0 l_867 = {1UL,0xD76A8884L,-1L};
                    l_856 = (-1L);
                    if ((g_129 |= (l_857 & g_527)))
                    {
                        const struct S0 l_858 = {3UL,0xB1D1E6A6L,-10L};
                        if (g_376)
                            break;
                        l_867 = func_48(l_858, (l_439 = func_72(l_856, l_858.f1)), l_858.f0, (l_793 = (safe_mod_func_uint8_t_u_u(((((g_568 ^= g_628) <= g_861) >= ((l_862 = 0xA43EL) > ((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(l_845, 9)) ^ g_584), 7)) | g_376))) & l_856), l_18))));
                    }
                    else
                    {
                        char l_875 = 1L;
                        l_439 = ((l_18 = ((l_723 > ((l_845 <= 0xF36663D6EA37D48FLL) & (safe_unary_minus_func_int64_t_s(func_33((safe_unary_minus_func_int16_t_s((safe_rshift_func_int8_t_s_u((g_426 < ((g_116 = func_54(g_274)) < (safe_add_func_uint8_t_u_u((l_867.f0 ^ (0x6DB5L > (safe_unary_minus_func_int8_t_s(g_527)))), g_820)))), l_875)))), g_724, l_876, l_793))))) && g_115)) != g_391.f1);
                        if (g_204.f1)
                            break;
                        g_138 ^= g_426;
                        if (g_527)
                            continue;
                    }
                    return g_140.f1;
                }
                g_138 = g_391.f1;
                l_897 = (l_896 = func_13((g_114 ^ (g_116 = ((g_749 = 0UL) ^ (g_75 || (g_138 ^= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((l_650 | ((safe_lshift_func_int8_t_s_u((((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_114, 1)), ((~((safe_mod_func_uint32_t_u_u(4294967295UL, g_140.f2)) || (safe_lshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s(0xAF9BF60147154804LL, (g_225 && l_800.f1))), l_619.f2)))) >= 1L))) ^ l_893) || 0x6CL) && l_845) < g_681), l_559)) & 0x8DCADAC5L)), l_800.f0)), l_836))))))), g_47, l_894, l_895));
            }
        }
        l_559 = 1L;
    }
    return g_204.f1;
}







static unsigned char func_8(struct S0 p_9, int p_10, unsigned long long p_11, struct S0 p_12)
{
    const unsigned l_396 = 0x124D56F4L;
    int l_402 = 0x3CFDC623L;
    int l_409 = 0x425E343DL;
    int l_421 = (-2L);
    unsigned l_422 = 0x80A2B5EFL;
    int l_423 = 0L;
    int l_424 = 8L;
    struct S0 l_425 = {1UL,1UL,3L};
    l_402 = ((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(g_45, l_396)), (safe_sub_func_uint32_t_u_u(0x7AD1FB99L, (g_399 &= (g_2 ^ l_396)))))) <= (safe_sub_func_uint16_t_u_u(g_274, 0x9407L)));
    l_424 |= ((l_396 < ((l_423 |= func_21(((p_11 = l_402) > (func_59((safe_sub_func_int16_t_s_s(p_12.f1, ((l_409 = (safe_mod_func_uint32_t_u_u(p_9.f2, 5UL))) != ((func_21((l_421 |= (safe_unary_minus_func_uint16_t_u((safe_add_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(((((((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(0xD9L, ((safe_rshift_func_int16_t_s_s((-5L), 2)) ^ l_402))), 4)) < g_114) < p_10) == 0x00390750L) ^ l_396) != l_402), 0x69F775230D44A739LL)) ^ p_9.f1), 0x84L))))), p_12.f0) > l_402) == g_2)))), p_9.f1, l_396, l_396) != l_422)), p_12.f1)) < p_12.f2)) <= g_391.f1);
    g_140 = (l_425 = l_425);
    return g_114;
}







static struct S0 func_13(const short p_14, unsigned char p_15, int p_16, short p_17)
{
    unsigned char l_388 = 246UL;
    l_388 = func_21(p_16, g_2);
    for (g_201 = 0; (g_201 <= (-17)); g_201--)
    {
        return g_140;
    }
    return g_204;
}







static int func_21(unsigned p_22, long long p_23)
{
    unsigned short l_40 = 65531UL;
    int l_366 = 0L;
    int l_375 = 0xEA3A68A8L;
    for (p_22 = (-1); (p_22 >= 10); p_22 = safe_add_func_int8_t_s_s(p_22, 9))
    {
        unsigned short l_43 = 1UL;
        int l_374 = 0x21AB3733L;
        int l_385 = 0x4DD1FA9EL;
        for (p_23 = (-19); (p_23 == 6); p_23 = safe_add_func_int16_t_s_s(p_23, 2))
        {
            unsigned short l_32 = 0x8AD8L;
            int l_44 = 8L;
            int l_46 = 0L;
            l_366 = ((safe_mul_func_uint16_t_u_u(0UL, ((l_32 = (safe_mul_func_uint16_t_u_u(0xBC79L, p_23))) | func_33((0x7833L < (((safe_add_func_int32_t_s_s(p_23, l_40)) < (g_47 = (g_2 & (safe_lshift_func_int16_t_s_u((l_46 &= (g_45 = ((l_44 = ((l_40 != (p_22 >= l_43)) >= 0x87D30FA2L)) <= g_2))), p_23))))) == p_23)), g_2, p_23, g_2)))) == 1UL);
        }
        g_376 ^= func_59((g_45 = (safe_lshift_func_uint8_t_u_s(((l_375 |= (safe_unary_minus_func_uint16_t_u(((-1L) <= (l_366 = (safe_mod_func_int64_t_s_s(((0UL | (-5L)) != func_72((!(!g_114)), p_23)), (l_374 ^= (g_45 >= (safe_mul_func_uint8_t_u_u((g_47 | l_43), g_2))))))))))) | g_2), p_23))), l_40, l_40, p_22);
        g_129 = ((0x3CC25A29L > (((l_374 = l_40) < p_23) >= ((safe_rshift_func_int16_t_s_u(0x1997L, (safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_23, ((l_385 = (safe_add_func_int32_t_s_s(p_23, ((g_274 ^= g_201) && g_225)))) != (safe_rshift_func_int8_t_s_s(l_366, p_22))))), 1)))) != p_23))) >= g_45);
    }
    return l_375;
}







static unsigned char func_33(unsigned p_34, const int p_35, short p_36, long long p_37)
{
    const struct S0 l_53 = {1UL,18446744073709551613UL,1L};
    unsigned char l_353 = 255UL;
    struct S0 l_361 = {0x8DC90A00L,0xD0744966L,0xD563438D1303F426LL};
    int l_364 = 0xE2978253L;
    int l_365 = 0x154859BEL;
    l_361 = func_48(l_53, g_45, g_2, (func_54(p_36) > ((0xF18E0DA53D1EDBCCLL > ((safe_mul_func_uint8_t_u_u((p_36 & ((safe_unary_minus_func_int32_t_s(func_59(l_53.f1, p_35, g_2, g_45))) & g_45)), p_37)) | l_353)) && 5L)));
    l_361 = func_67(((l_53.f2 > g_138) != (1UL & (l_361.f1 >= (l_361.f1 >= g_182)))), (((~func_54((safe_add_func_uint64_t_u_u(g_129, l_353)))) <= g_114) >= l_364), g_75, l_361.f0);
    l_365 = p_36;
    return l_361.f1;
}







static struct S0 func_48(const struct S0 p_49, unsigned p_50, short p_51, const short p_52)
{
    unsigned long long l_356 = 0xB38B262B5C1EEBDBLL;
    int l_359 = 1L;
    int l_360 = 0xD63B6399L;
    l_360 = (((-4L) <= 0x28D2L) >= (safe_mul_func_int8_t_s_s(func_72(l_356, p_49.f1), (l_359 = (safe_sub_func_int32_t_s_s(((l_356 > ((func_54(g_2) || ((!l_356) != p_52)) <= 0x12L)) != 0x34035F71L), g_279))))));
    return g_140;
}







static char func_54(unsigned short p_55)
{
    return g_47;
}







static int func_59(short p_60, unsigned p_61, long long p_62, char p_63)
{
    char l_76 = 8L;
    struct S0 l_352 = {0xB7C13E15L,0x216B2081L,7L};
    for (p_60 = 0; (p_60 > 22); p_60++)
    {
        int l_66 = 0x9B02088CL;
        l_66 = g_2;
        if (p_61)
            break;
        l_352 = func_67(g_45, p_61, p_61, (g_279 = func_72(((((g_75 | p_62) < g_45) != l_76) > (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(0L, (((l_76 ^ 0xEBDDL) < 1L) ^ p_60))), p_62))), p_60)));
    }
    return g_2;
}







static struct S0 func_67(const char p_68, int p_69, unsigned p_70, unsigned p_71)
{
    const unsigned l_284 = 1UL;
    int l_289 = 0xB2B3EE73L;
    int l_290 = 0x7DD38B32L;
    int l_295 = 0x9768D335L;
    struct S0 l_332 = {0xCC970ECAL,6UL,7L};
    unsigned l_351 = 0xB85E74F0L;
    for (g_138 = 0; (g_138 >= (-27)); g_138--)
    {
        short l_282 = 0xCB30L;
        int l_283 = 2L;
        l_283 = l_282;
        g_274 = ((l_284 & p_70) == (safe_sub_func_int32_t_s_s(((l_290 = (l_284 < (safe_mod_func_int8_t_s_s((l_289 ^= g_204.f0), g_204.f1)))) < ((safe_lshift_func_int16_t_s_s((g_201 && (l_295 = (((!((safe_sub_func_uint8_t_u_u(func_54(l_284), (((g_129 < 9L) < p_71) ^ p_70))) <= 0x785FL)) < g_138) ^ l_284))), 8)) & g_2)), p_70)));
        for (g_116 = (-16); (g_116 != 15); ++g_116)
        {
            short l_320 = 0x89FBL;
            int l_331 = 0L;
            struct S0 l_333 = {0xA5CC3B06L,0xBFCAAF9CL,0x1D855957BA36A08FLL};
            if ((0x48L < 0x4DL))
            {
                l_290 = 3L;
            }
            else
            {
                unsigned short l_309 = 3UL;
                int l_326 = 0xFD321A80L;
                int l_327 = (-2L);
                for (l_289 = (-15); (l_289 > 7); l_289++)
                {
                    int l_300 = 4L;
                    l_300 = 1L;
                    p_69 = g_201;
                    if (l_283)
                    {
                        if (l_295)
                            break;
                        l_283 = (p_69 = (safe_lshift_func_int8_t_s_s((((g_138 < l_289) < p_71) == p_68), 0)));
                        l_290 = func_54(p_69);
                    }
                    else
                    {
                        unsigned l_325 = 18446744073709551607UL;
                        struct S0 l_328 = {0xDCF43252L,5UL,0L};
                        p_69 = (safe_mul_func_int8_t_s_s(l_295, ((l_327 = (safe_mul_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_u((l_309 && (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(g_2, 5)), (+0xCE88ADF6L)))), p_71)) & (l_326 |= (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((l_320 |= (g_114 ^= (safe_add_func_int64_t_s_s(g_129, 0x073C473A938859A5LL)))) & (safe_rshift_func_uint8_t_u_u(1UL, 5))), (safe_rshift_func_uint8_t_u_u(l_325, g_204.f1)))), 0x61F6L)))) > l_309) || 7L) & p_70), p_71))) > g_182)));
                        return l_328;
                    }
                }
            }
            for (g_279 = 0; (g_279 <= (-7)); --g_279)
            {
                struct S0 l_334 = {4UL,0UL,0xACAF2723D0D219FDLL};
                g_129 ^= func_54((l_331 = p_69));
                l_333 = l_332;
                l_333 = l_334;
            }
            g_129 = (g_274 = (!l_320));
            p_69 = g_225;
        }
    }
    p_69 = (g_138 = (safe_sub_func_int16_t_s_s((0xC6L < (0x1CL || (safe_add_func_int16_t_s_s((g_75 = g_116), (((safe_sub_func_int16_t_s_s((~((g_140.f2 <= (safe_lshift_func_int8_t_s_s(l_332.f0, ((safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((g_225 ^= (g_45 && (safe_rshift_func_int16_t_s_s((l_290 = 6L), (l_289 |= ((safe_lshift_func_uint16_t_u_u(65535UL, 11)) < (0xB94F59CCL > p_70))))))), 0x350D1A62914CA689LL)), p_69)) != l_332.f2)))) > g_274)), l_351)) >= 8L) < p_69))))), p_70)));
    p_69 = (g_140.f1 <= (+p_69));
    return g_140;
}







static unsigned func_72(long long p_73, short p_74)
{
    const unsigned l_83 = 4294967295UL;
    int l_142 = 0x76B60554L;
    int l_202 = 0x949CC764L;
    unsigned l_252 = 0x6FC38D2DL;
    unsigned l_267 = 7UL;
    long long l_273 = 0x6DF2B7E3AB259337LL;
    for (g_75 = (-14); (g_75 == 3); g_75 = safe_add_func_uint64_t_u_u(g_75, 1))
    {
        unsigned l_85 = 0x9813DA77L;
        unsigned long long l_86 = 0x31C0487CC540EDC1LL;
        int l_91 = (-4L);
        unsigned short l_92 = 0x1B1CL;
        int l_93 = 0L;
        l_86 = (l_83 ^ (l_85 = (safe_unary_minus_func_int16_t_s(2L))));
        l_93 ^= (safe_sub_func_uint64_t_u_u((0x05D4008FL > ((p_73 > ((safe_mod_func_uint16_t_u_u(l_86, (l_91 = g_45))) ^ 0x8714L)) & l_92)), g_45));
    }
    if ((g_94 = func_54(g_75)))
    {
        long long l_106 = 1L;
        int l_113 = 0xF1061642L;
        volatile struct S0 l_141 = {5UL,0x34A4F5E2L,0x8B94E1185E692D5BLL};
        char l_176 = 0x0AL;
        int l_180 = (-10L);
        for (p_74 = 0; (p_74 == 25); p_74++)
        {
            int l_105 = 0x12ED6996L;
            struct S0 l_117 = {0x9B40CD91L,0xEB57571CL,0x78AC094E546F8AA4LL};
            if (p_73)
                break;
            g_116 |= (safe_mod_func_int8_t_s_s(g_47, (1L && (+(safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((g_115 = (((safe_mul_func_int8_t_s_s((g_114 = func_54(((l_106 ^= l_105) > (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((l_105 > l_113), func_54((0UL && (p_74 != (((p_73 | g_47) && 6L) ^ g_94)))))), 6)) < 6L), 0))))), 255UL)) != 0x2FB0L) || l_83)), p_73)), g_75))))));
            l_117 = l_117;
        }
        for (g_114 = 0; (g_114 <= 57); g_114 = safe_add_func_int16_t_s_s(g_114, 3))
        {
            int l_124 = 5L;
            int l_130 = 1L;
            unsigned short l_149 = 0UL;
            int l_183 = 0xAE313965L;
            if (g_45)
            {
                int l_131 = 1L;
                l_130 |= (safe_add_func_uint64_t_u_u(func_54((p_74 >= (g_75 = func_54((p_73 || (g_129 = ((safe_add_func_int16_t_s_s(p_73, (l_124 && p_73))) ^ ((safe_mul_func_uint8_t_u_u(p_74, ((safe_mul_func_int16_t_s_s(g_115, l_124)) & (g_2 <= 0x45L)))) | g_2)))))))), g_115));
                l_131 = 0xBFE2B3C8L;
            }
            else
            {
                unsigned short l_139 = 1UL;
                l_130 = (l_139 = (((+g_129) < p_73) ^ (((func_54((((0L & (safe_lshift_func_int16_t_s_u(func_54(func_54(g_129)), 13))) != (g_138 = (safe_lshift_func_int8_t_s_s(((!((0x155FAF6E0732D581LL > 1L) & (safe_sub_func_int64_t_s_s((func_54(g_75) != g_75), p_73)))) < 18446744073709551606UL), 6)))) & l_83)) && l_106) && 0xA585L) || g_94)));
                l_141 = g_140;
                if (p_74)
                    continue;
                l_142 &= ((~l_83) && l_83);
            }
            if ((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_73, (l_149 ^= ((safe_sub_func_int64_t_s_s(0x787705A97E966165LL, ((l_113 = p_73) ^ 1L))) > p_74)))), p_73)))
            {
                unsigned char l_162 = 255UL;
                int l_163 = 3L;
                l_163 = ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((+(safe_rshift_func_uint16_t_u_s((4UL ^ (0x17L <= l_130)), ((~(func_54((p_73 > ((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(0x34F3L, p_74)), (safe_rshift_func_uint8_t_u_u(l_113, 1)))) == l_162))) || l_106)) > 0xA2FBD8CAL)))) < 0xA08BB583702682AELL), g_45)), 5)) < g_140.f2);
                l_163 |= 3L;
            }
            else
            {
                char l_177 = 0xCFL;
                for (l_113 = 8; (l_113 == (-2)); --l_113)
                {
                    unsigned l_166 = 0x57317A47L;
                    unsigned short l_173 = 65533UL;
                    int l_181 = 0x22BFC7E3L;
                    struct S0 l_184 = {0xECB71139L,0UL,3L};
                    if (l_166)
                        break;
                    l_183 = func_54((g_182 ^= (safe_add_func_int64_t_s_s((l_130 = (safe_sub_func_uint64_t_u_u((l_181 = func_54(((func_54((safe_mul_func_uint8_t_u_u((func_54(l_113) != l_173), ((safe_lshift_func_uint8_t_u_u(l_176, 1)) || g_129)))) ^ (65535UL != l_177)) | (l_180 ^= (safe_rshift_func_int16_t_s_u(0L, 6)))))), g_2))), l_149))));
                    l_141 = l_184;
                    l_181 |= p_74;
                }
            }
            l_130 ^= 1L;
            l_180 ^= (g_116 > (((~g_115) && g_114) || (l_113 = (p_73 ^ g_2))));
        }
        g_129 = g_45;
    }
    else
    {
        unsigned char l_191 = 255UL;
        struct S0 l_203 = {18446744073709551606UL,18446744073709551613UL,1L};
        l_202 &= (safe_rshift_func_uint8_t_u_s(func_54((g_201 = (safe_mul_func_uint16_t_u_u((g_114 = (func_54((safe_sub_func_uint16_t_u_u(p_74, (func_54(l_191) >= ((safe_mul_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(l_191, (safe_unary_minus_func_uint8_t_u((g_140.f2 == (((-5L) == (g_45 && (+l_191))) <= g_116)))))) & g_129), 5UL)), g_45)) && l_191), 65535UL)) & l_191))))) <= p_74)), l_191)))), l_142));
        g_140 = (g_204 = l_203);
        l_202 = func_54((safe_add_func_uint16_t_u_u(g_47, 0xBFD3L)));
    }
    if (func_54((safe_sub_func_uint8_t_u_u((func_54(g_94) >= (g_47 >= (safe_lshift_func_int8_t_s_u(0x08L, 7)))), (0x31L != (safe_lshift_func_uint8_t_u_s(247UL, p_73)))))))
    {
        const long long l_213 = 0xC48A3672261EF397LL;
        int l_214 = 0x817529D5L;
        char l_251 = 9L;
        l_214 &= (p_73 && (g_138 && (l_213 | 1UL)));
        g_225 ^= ((g_129 |= l_202) ^ ((safe_add_func_uint16_t_u_u((p_73 != g_140.f0), 0x9ED8L)) | (safe_sub_func_int16_t_s_s((-1L), ((g_138 = (safe_add_func_int8_t_s_s((l_214 |= (safe_lshift_func_uint8_t_u_s(p_74, 7))), ((safe_sub_func_int8_t_s_s((g_201 = 6L), p_73)) >= ((((l_142 = (((1L != p_74) | p_73) >= l_83)) && 0x0BCBL) > g_75) <= l_83))))) <= g_182)))));
        l_214 = 0x18C347C6L;
        if (((0L && (p_74 ^ p_73)) == l_214))
        {
            int l_247 = 8L;
            for (g_182 = 1; (g_182 == 7); g_182++)
            {
                long long l_228 = 0x575CCD8886A51E36LL;
                if (g_225)
                    break;
                l_228 &= g_45;
                l_202 &= func_54(g_140.f0);
                g_129 = (safe_sub_func_uint32_t_u_u(func_54((g_114 = (((0x7388L == (safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(0x5619850909C1F5AFLL, (18446744073709551611UL <= (safe_sub_func_uint8_t_u_u(g_75, (safe_add_func_uint16_t_u_u(l_142, ((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s((func_54(l_247) > ((((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((!(g_225 = l_251)))), 3)) | g_140.f0) & l_214) > l_252)), l_247)), 0xB28A79E9L)), p_74)) < 0x54L)))))))), g_116))) <= g_45) != g_204.f1))), g_75));
            }
            l_247 = l_252;
            l_142 = (g_204.f2 > p_73);
            l_247 &= l_214;
        }
        else
        {
            long long l_259 = (-5L);
            l_214 = (safe_mul_func_uint16_t_u_u(g_116, (safe_add_func_int64_t_s_s(p_73, (safe_rshift_func_uint16_t_u_s((l_202 | 1L), (g_45 < l_213)))))));
            l_259 &= p_74;
        }
    }
    else
    {
        unsigned l_262 = 0x67AFD751L;
        int l_268 = 0x9C3FDF3AL;
        l_142 = l_202;
        g_129 = ((((safe_mod_func_uint16_t_u_u((l_262 & ((safe_add_func_int32_t_s_s((0xF54B6F45L | (l_267 >= (0L & 4294967295UL))), (g_204.f1 ^ ((l_268 ^= (g_204.f2 != l_83)) || (p_74 ^ l_142))))) > 0x3318F3D0L)), g_140.f0)) && 0x58E1398DL) < p_73) ^ l_262);
        if (((((+0x051EL) ^ p_74) == (l_268 = ((safe_lshift_func_uint16_t_u_u(g_94, (g_140.f2 && ((l_202 ^= (safe_add_func_uint32_t_u_u(l_142, func_54(l_273)))) || (l_202 = (1L | 0L)))))) ^ 0x2CL))) != g_274))
        {
            unsigned l_278 = 0x74671351L;
            for (g_114 = 15; (g_114 != 36); g_114 = safe_add_func_int32_t_s_s(g_114, 1))
            {
                int l_277 = 9L;
                return l_277;
            }
            g_274 = l_278;
        }
        else
        {
            return p_74;
        }
    }
    return l_273;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_204.f0, "g_204.f0", print_hash_value);
    transparent_crc(g_204.f1, "g_204.f1", print_hash_value);
    transparent_crc(g_204.f2, "g_204.f2", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_391.f0, "g_391.f0", print_hash_value);
    transparent_crc(g_391.f1, "g_391.f1", print_hash_value);
    transparent_crc(g_391.f2, "g_391.f2", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_519, "g_519", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_568, "g_568", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_724, "g_724", print_hash_value);
    transparent_crc(g_748, "g_748", print_hash_value);
    transparent_crc(g_749, "g_749", print_hash_value);
    transparent_crc(g_819, "g_819", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_861, "g_861", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
