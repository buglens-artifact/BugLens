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
   unsigned short f0;
   int f1;
   int f2;
   short f3;
   unsigned f4;
   int f5;
   unsigned f6;
   short f7;
   unsigned short f8;
   unsigned short f9;
};

union U1 {
   unsigned short f0;
   unsigned short f1;
   unsigned f2;
   int f3;
   short f4;
};


static int g_2 = 2L;
static short g_80 = 0x595CL;
static struct S0 g_83 = {5UL,-2L,0x4183AA7AL,0x6B3EL,0UL,-1L,18446744073709551607UL,0x3AF4L,0x502DL,0x8012L};
static struct S0 g_127 = {0x682CL,0xC6608544L,0xBDB70988L,0xD419L,0x6CB911F2L,1L,0x59CEB6A9L,0x75A9L,0x6D61L,0UL};
static struct S0 g_134 = {1UL,1L,9L,0L,0x9218137CL,0x680494BAL,0xC8BBA856L,0x6AB5L,0x0786L,65533UL};
static union U1 g_180 = {3UL};
static unsigned g_391 = 0x304BA9E8L;
static short g_472 = 0L;
static unsigned g_709 = 0x6D09AEA5L;



static char func_1(void);
static union U1 func_5(unsigned short p_6, union U1 p_7);
static union U1 func_9(unsigned short p_10, short p_11);
static unsigned short func_13(unsigned char p_14, unsigned short p_15, unsigned char p_16);
static short func_21(int p_22, union U1 p_23, short p_24, int p_25, int p_26);
static union U1 func_27(unsigned p_28);
static short func_31(short p_32, unsigned short p_33, unsigned p_34);
static struct S0 func_39(unsigned p_40, int p_41);
static unsigned func_42(int p_43, int p_44, char p_45);
static int func_47(int p_48, char p_49);
static char func_1(void)
{
    unsigned short l_12 = 0x2E97L;
    int l_567 = (-1L);
    struct S0 l_584 = {65535UL,1L,-8L,-1L,4294967289UL,0x401C4A67L,0x5EBE0B57L,0xFEC4L,9UL,0x7401L};
    unsigned l_596 = 18446744073709551615UL;
    unsigned l_615 = 0xFD962807L;
    int l_616 = 0xD628AE8DL;
    union U1 l_710 = {0xA353L};
    int l_724 = 0L;
    struct S0 l_726 = {0xF462L,6L,-3L,0xE5A6L,0x8CEEE18AL,1L,0UL,-6L,0UL,0xAF02L};
    struct S0 l_735 = {1UL,1L,0x0F40DBDEL,1L,0xEA08C797L,0x86143F73L,18446744073709551610UL,-5L,1UL,0x6D6AL};
    int l_805 = 0xEB26BA1AL;
    for (g_2 = 18; (g_2 == (-29)); g_2--)
    {
        unsigned l_8 = 6UL;
        int l_558 = 0xD697D9FBL;
        int l_561 = 0x93062FA1L;
        union U1 l_562 = {0x2E74L};
        unsigned l_565 = 1UL;
        unsigned short l_566 = 65535UL;
        struct S0 l_585 = {0xEC8BL,0x62AE1F5DL,0x3438944EL,-5L,0xE1E9BAE5L,0xEAD49E10L,0x49B51A74L,0x389BL,0xA36CL,65535UL};
        l_558 = (0xE95AL == ((func_5(l_8, func_9((+(l_12 , func_13((safe_lshift_func_uint8_t_u_u(l_8, 5)), (safe_add_func_uint16_t_u_u(((g_2 != ((func_21(g_2, func_27(l_12), l_12, g_2, g_2) || 0xAD5AL) || g_134.f4)) < 0xF796L), (-1L))), g_2))), l_8)) , g_180.f1) , g_134.f9));
        l_567 = (safe_sub_func_uint8_t_u_u(1UL, func_42(func_42(g_80, (l_561 >= func_21((3L != 0x12L), l_562, (l_562.f4 , ((safe_sub_func_int32_t_s_s(g_134.f8, (g_472 , l_565))) == 4294967290UL)), l_562.f4, l_562.f0)), l_566), g_2, l_8)));
        for (g_180.f0 = 0; (g_180.f0 < 17); g_180.f0 = safe_add_func_uint16_t_u_u(g_180.f0, 8))
        {
            unsigned char l_570 = 0x9FL;
            g_134.f1 = (g_134.f4 , l_562.f4);
            if ((l_562.f4 ^ l_570))
            {
                for (g_83.f1 = 0; (g_83.f1 < (-9)); g_83.f1 = safe_sub_func_uint8_t_u_u(g_83.f1, 1))
                {
                    g_127.f2 = g_127.f6;
                }
            }
            else
            {
                unsigned char l_575 = 255UL;
                unsigned l_576 = 18446744073709551607UL;
                unsigned l_583 = 0UL;
                l_585 = ((safe_mod_func_int32_t_s_s((l_575 , (((-1L) ^ l_576) | (safe_sub_func_uint32_t_u_u((((((func_13(g_83.f1, ((((-4L) <= (!((0x7FL != (safe_sub_func_int8_t_s_s(g_127.f9, l_565))) != (safe_sub_func_uint16_t_u_u(g_127.f2, g_83.f1))))) , l_576) ^ g_180.f1), g_134.f5) || l_570) && 4294967291UL) , g_134.f2) <= g_127.f5) > l_583), g_180.f1)))), g_127.f1)) , l_584);
            }
            l_561 = (((safe_rshift_func_int16_t_s_u(((((((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(4L, l_584.f5)), 15)) , l_584.f5) , (((safe_rshift_func_int16_t_s_s(0x77D3L, func_13(g_127.f0, g_127.f2, g_134.f7))) <= (safe_sub_func_uint8_t_u_u((l_562 , l_596), l_558))) , 0UL)) , g_391) != g_80) >= 9L), g_127.f4)) | 1UL) & (-5L));
        }
    }
    if ((safe_mod_func_uint16_t_u_u((g_83.f8 , 1UL), func_21((!l_584.f5), g_180, (safe_sub_func_uint16_t_u_u(0UL, (((l_584.f4 , 0x82B8L) == (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(l_584.f4, 9)), ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(l_615, l_567)) < 0x9281L), 0x5AL)), 0xC8L)), 4)), l_616)) ^ g_134.f5)))) != g_127.f6))), g_391, g_2))))
    {
        char l_626 = (-4L);
        int l_638 = (-10L);
        union U1 l_708 = {65535UL};
        for (g_127.f1 = 0; (g_127.f1 < 22); g_127.f1++)
        {
            struct S0 l_619 = {8UL,1L,0x4C647E2CL,-1L,0x1BFC11A3L,-1L,0x157D7777L,0x1787L,0x2D92L,0xDA0AL};
            l_619 = g_134;
            for (g_134.f3 = (-3); (g_134.f3 == (-29)); g_134.f3 = safe_sub_func_uint16_t_u_u(g_134.f3, 9))
            {
                unsigned char l_624 = 255UL;
                union U1 l_635 = {0x12A4L};
                unsigned char l_641 = 255UL;
                l_584.f2 = (((((safe_sub_func_int32_t_s_s((g_134.f1 < (g_127.f2 || (g_134.f0 , l_624))), (g_127.f9 ^ (g_83.f1 || (safe_unary_minus_func_uint32_t_u(0UL)))))) | l_626) && (l_624 == g_83.f7)) | g_83.f4) ^ l_626);
                l_638 = (func_39((g_391 , (((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((func_39((((((l_624 ^ (safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int8_t_s((((safe_unary_minus_func_int32_t_s(g_127.f8)) || (-1L)) > g_83.f0))) | (l_635 , (l_624 , 0x10F34E1CL))), (safe_lshift_func_uint16_t_u_u(g_134.f6, 10))))) != g_180.f0) & 2UL) | (-7L)) >= 9L), g_127.f3) , l_616), g_180.f4)), g_127.f0)) , l_619.f2) , g_134.f9)), g_80) , l_584.f2);
                g_127.f2 = (safe_rshift_func_uint8_t_u_s(((l_635.f0 | l_641) == ((l_641 <= (safe_add_func_int16_t_s_s(l_615, ((-1L) && (safe_div_func_uint8_t_u_u((((safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(g_127.f0, l_619.f7)), 0xB8531AABL)) && (safe_lshift_func_uint16_t_u_s((g_83.f8 > 0x6FE6L), g_83.f9))) >= l_635.f1), g_180.f0)))))) && 4294967295UL)), l_641));
            }
            for (l_567 = (-29); (l_567 == (-1)); l_567 = safe_add_func_uint8_t_u_u(l_567, 2))
            {
                unsigned l_662 = 1UL;
                union U1 l_693 = {0x0819L};
                if (l_619.f0)
                {
                    int l_672 = 9L;
                    struct S0 l_694 = {0xDDA4L,-10L,2L,4L,0xA7E09E95L,-1L,0xBDCDAA7EL,1L,65535UL,0x80ECL};
                    g_134 = g_134;
                    if (g_134.f3)
                    {
                        unsigned char l_671 = 0x49L;
                        g_134 = func_39(g_83.f7, g_83.f7);
                        l_672 = (safe_lshift_func_int8_t_s_s(0x3DL, (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((g_180.f1 == ((l_662 < g_472) , ((l_619.f0 >= ((safe_div_func_int8_t_s_s((((g_134.f1 & g_127.f7) , ((safe_sub_func_int32_t_s_s((func_13((safe_add_func_uint16_t_u_u(g_472, (safe_div_func_uint8_t_u_u(g_2, 0xC3L)))), g_134.f5, l_662) & l_671), g_127.f9)) > l_662)) | 0x3492L), l_619.f0)) < l_662)) , l_671))), 9)), 2)), 4294967288UL))));
                        l_619 = func_39((func_13(l_662, (safe_add_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(l_619.f7, ((safe_rshift_func_uint8_t_u_s(func_21((safe_sub_func_uint8_t_u_u((g_127.f9 || l_671), (safe_sub_func_int8_t_s_s(g_83.f8, (g_180.f4 < (((safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(func_21(func_21((((safe_div_func_int32_t_s_s(g_180.f1, (safe_mod_func_uint8_t_u_u(0xB4L, (safe_mod_func_uint16_t_u_u((~(((g_134.f5 >= 4294967291UL) >= l_662) || g_83.f0)), l_671)))))) , 0x7D94L) && l_671), g_180, g_134.f6, g_83.f6, l_671), g_180, l_662, g_83.f7, g_83.f9), (-1L))) ^ 0xD4D7L), l_672)) & g_127.f5) & l_662)))))), l_693, g_83.f8, l_626, g_83.f9), g_127.f0)) ^ (-10L)))), 0x86DF1C9FL)), g_83.f0) | 0x01385020L), g_127.f5);
                    }
                    else
                    {
                        l_694 = g_134;
                    }
                    return l_619.f0;
                }
                else
                {
                    union U1 l_705 = {0UL};
                    g_83.f1 = (safe_rshift_func_uint16_t_u_u((1L < (((safe_sub_func_uint16_t_u_u(((+(safe_add_func_int32_t_s_s(g_83.f6, (((l_693.f0 , (safe_rshift_func_int8_t_s_u(((func_21(((l_693.f4 & (l_584.f6 != l_619.f7)) <= (safe_rshift_func_uint16_t_u_s(g_83.f4, 8))), l_705, g_83.f6, g_127.f5, l_638) ^ 0xAC3E7E53L) < g_127.f0), g_127.f5))) > g_83.f8) == l_693.f4)))) > 0x6DL), l_584.f6)) && 250UL) || g_2)), l_693.f4));
                    if (l_638)
                        break;
                }
            }
        }
        g_127.f1 = (safe_lshift_func_uint8_t_u_s((func_21(l_638, l_708, g_709, (l_626 | (l_710 , 0x7418L)), ((l_584.f6 <= g_83.f7) != ((safe_mod_func_int32_t_s_s(g_127.f3, g_127.f7)) != l_638))) | g_83.f4), 3));
    }
    else
    {
        int l_725 = 0L;
        struct S0 l_727 = {65535UL,0L,9L,-1L,0x0CAFC3C1L,0xB7750F21L,0xA5AEFCAAL,-1L,0xFC94L,0xF065L};
        union U1 l_732 = {0x9F53L};
        unsigned char l_733 = 252UL;
        for (l_584.f4 = 0; (l_584.f4 < 6); l_584.f4 = safe_add_func_int16_t_s_s(l_584.f4, 6))
        {
            short l_715 = (-2L);
            l_715 = (-9L);
            g_2 = l_596;
            l_726 = func_39(((0x5DADL <= ((safe_lshift_func_uint16_t_u_u((l_584.f2 <= func_21(func_21(l_615, g_180, (func_13(g_134.f2, g_134.f7, (((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_472, 5)), (safe_sub_func_int16_t_s_s(l_724, 7L)))) <= l_725) <= 0x89L)) & l_725), l_725, g_180.f0), l_710, l_584.f6, l_725, l_725)), l_725)) , l_584.f9)) , l_584.f6), l_715);
        }
        if ((l_727 , ((safe_sub_func_int8_t_s_s(l_727.f3, l_727.f6)) , func_13(((safe_lshift_func_uint16_t_u_s((((l_732 , func_47((l_726.f8 , (l_732.f4 ^ (func_31(g_391, (0x440EL <= 0x743AL), g_83.f7) != g_2))), g_472)) > l_584.f0) >= l_732.f4), 9)) && l_733), g_2, g_2))))
        {
            union U1 l_734 = {0UL};
            int l_770 = 1L;
            struct S0 l_771 = {0xAA9AL,0xCE978A14L,0x4196585CL,9L,0xD45BDE6DL,0xCD0722B9L,18446744073709551615UL,-2L,0x3D71L,0x3BB4L};
            l_735 = func_39(l_596, (l_734 , (g_472 == l_584.f7)));
            for (g_80 = (-5); (g_80 > (-4)); g_80 = safe_add_func_uint8_t_u_u(g_80, 4))
            {
                short l_744 = (-8L);
                union U1 l_759 = {65532UL};
                unsigned char l_787 = 254UL;
                if ((safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((g_83.f3 | (((-2L) & g_83.f2) <= (g_127.f6 >= (0xB884L && (func_21(l_744, l_732, l_584.f5, g_83.f7, g_127.f3) < g_127.f7))))) | (-8L)), l_726.f2)), g_83.f7)), 15)))
                {
                    unsigned char l_757 = 246UL;
                    int l_761 = 0x09919050L;
                    if (g_83.f3)
                    {
                        union U1 l_758 = {0x1FBBL};
                        unsigned short l_760 = 0x5777L;
                        l_761 = (((safe_rshift_func_uint8_t_u_u(l_744, 2)) != g_180.f1) , ((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(((g_127.f5 , ((l_727.f7 ^ g_83.f6) < ((safe_div_func_uint8_t_u_u(((1L || func_21((safe_mod_func_uint16_t_u_u(g_391, func_21(func_21(((func_21((g_180.f4 | (func_21((g_127.f8 ^ l_584.f8), l_734, l_735.f5, l_727.f2, l_757) > l_734.f4)), l_758, g_127.f5, l_735.f3, g_127.f3) , 0xB55D985BL) , g_472), g_180, l_758.f1, l_744, g_391), l_759, g_83.f0, l_760, l_727.f5))), l_758, g_391, g_127.f3, g_180.f0)) , g_127.f6), g_83.f4)) > 0xD0BD39ACL))) , g_472), g_83.f7)) | g_83.f0), g_180.f4)) < 0xD608L));
                        l_770 = (safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((g_134.f4 == g_472), (g_134 , (safe_rshift_func_uint8_t_u_u(((l_734.f0 > l_758.f0) == (g_391 < l_734.f0)), 3))))), (safe_rshift_func_uint8_t_u_u(((~l_758.f1) | 65528UL), 6))));
                        l_771 = func_39((func_21((0x0AL && 0xDFL), l_732, g_134.f3, l_758.f1, l_759.f4) > 0L), g_180.f0);
                        if (g_127.f0)
                            break;
                    }
                    else
                    {
                        g_134 = g_83;
                    }
                }
                else
                {
                    unsigned l_786 = 0xBAAD2027L;
                    if ((safe_lshift_func_uint16_t_u_s((g_83.f8 , 0x3764L), (g_391 || l_759.f4))))
                    {
                        l_727.f1 = g_472;
                        return l_759.f4;
                    }
                    else
                    {
                        unsigned short l_788 = 6UL;
                        int l_789 = (-1L);
                        l_770 = (((safe_rshift_func_uint16_t_u_s((0x5D6BCD0BL && g_127.f1), 9)) & (((safe_div_func_int32_t_s_s(0x9DEF9073L, ((g_127.f6 > g_80) , g_180.f0))) | (safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((g_127.f2 || ((((func_21((l_727.f6 , func_21(((g_127.f6 <= 0x543FL) , g_391), g_180, l_735.f0, g_83.f3, g_83.f6)), l_759, g_127.f9, g_83.f5, l_771.f6) < l_786) | l_584.f6) , l_787) | g_80)), l_788)), (-2L))), 1)) , l_789) < 0xD237599AL), l_786))) , g_83.f2)) & g_127.f4);
                        g_83.f1 = (-1L);
                    }
                    g_134 = func_39((g_134.f1 & g_83.f5), l_771.f4);
                }
                l_727.f1 = (l_771.f1 != (safe_unary_minus_func_int8_t_s(l_727.f6)));
                g_2 = (safe_add_func_uint32_t_u_u(l_771.f3, (safe_unary_minus_func_int16_t_s(g_83.f9))));
            }
            l_726 = l_726;
        }
        else
        {
            unsigned l_798 = 0x7CC77AD7L;
            char l_801 = 1L;
            int l_802 = 0x8F4622AEL;
            l_802 = ((((safe_rshift_func_int16_t_s_s(((g_134.f8 ^ ((l_727.f3 , 0L) || g_472)) , (((((safe_lshift_func_int16_t_s_s(func_13(g_134.f1, l_798, (safe_sub_func_int16_t_s_s(1L, l_798))), l_801)) ^ l_733) , g_83.f5) ^ l_798) & l_727.f0)), 7)) != 6L) || l_798) || 0x46L);
        }
    }
    l_724 = (safe_add_func_uint8_t_u_u(g_127.f1, (g_83.f3 < ((((g_134.f9 & l_805) | 0x7052L) && (((safe_lshift_func_int16_t_s_s(l_735.f9, (l_735.f8 >= ((safe_mod_func_int8_t_s_s(0L, 248UL)) ^ l_710.f4)))) >= g_127.f6) & 0x58119E48L)) || g_83.f6))));
    g_134.f1 = g_391;
    return g_127.f9;
}







static union U1 func_5(unsigned short p_6, union U1 p_7)
{
    unsigned char l_556 = 246UL;
    struct S0 l_557 = {1UL,0L,-1L,-1L,4294967294UL,0xA4746D6BL,0xFAA20B5AL,-1L,0x6CF9L,0x44B6L};
    for (p_7.f1 = 22; (p_7.f1 != 15); --p_7.f1)
    {
        int l_543 = 0xBCF579C6L;
        struct S0 l_544 = {0x5B70L,0x51879517L,-2L,0x8C4FL,4294967289UL,0x01478E00L,0x324F858CL,0xD344L,1UL,65528UL};
        g_83.f2 = (safe_lshift_func_int16_t_s_s(p_7.f0, 2));
        l_544 = func_39(g_127.f0, l_543);
        l_544.f1 = (((0xC5AF18D9L >= (func_21(((((safe_unary_minus_func_int8_t_s(((g_180.f0 || func_31(g_134.f1, (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(p_7.f4, (((safe_sub_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(((((4294967286UL > g_134.f3) > (g_127 , ((g_180.f0 & (((safe_div_func_int8_t_s_s(g_2, g_83.f0)) , l_544.f3) , 0x6C06L)) < p_7.f0))) == 7UL) && g_83.f9), g_127.f8)) >= 0x1FF5E24AL) & p_7.f1), l_556)) > 252UL) , p_6))), g_134.f9)), p_7.f1)) | g_391))) , l_543) || l_544.f0) <= 1UL), p_7, g_2, l_556, p_7.f1) ^ (-9L))) == 0xF9118914L) & 0x3BL);
        l_544 = l_557;
    }
    return p_7;
}







static union U1 func_9(unsigned short p_10, short p_11)
{
    unsigned short l_461 = 0x983AL;
    unsigned char l_473 = 0UL;
    int l_474 = 0L;
    union U1 l_477 = {0UL};
    short l_478 = 9L;
    unsigned l_506 = 4294967287UL;
    short l_537 = 0xF594L;
    short l_538 = (-1L);
    l_474 = (func_47((((l_461 ^ (safe_mul_func_uint8_t_u_u(g_127.f6, (g_83.f3 == 0xDA1A638DL)))) | (safe_div_func_int16_t_s_s((p_10 == (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((0xC27AL >= (safe_div_func_int8_t_s_s(((l_461 , 8UL) <= 0xBACAAA3BL), g_83.f6))), 4)), p_11))), g_472))) , p_11), l_461) == l_473);
    if ((func_31(p_11, ((safe_rshift_func_uint8_t_u_u(p_10, func_47(p_10, l_461))) >= (l_477 , g_391)), l_477.f1) > l_478))
    {
        unsigned l_481 = 0x0E5EC8E5L;
        int l_486 = 0x360D57B1L;
        l_481 = (safe_add_func_int32_t_s_s(((p_11 >= p_10) ^ g_127.f7), p_11));
        for (g_134.f3 = 22; (g_134.f3 < 26); g_134.f3++)
        {
            short l_489 = 0L;
            for (g_83.f2 = 0; (g_83.f2 <= (-22)); g_83.f2 = safe_sub_func_int16_t_s_s(g_83.f2, 9))
            {
                if (g_83.f4)
                    break;
                l_486 = p_10;
                l_474 = (safe_div_func_int8_t_s_s(l_489, (g_391 , l_489)));
            }
            return g_180;
        }
        l_486 = 0x2F5C437CL;
    }
    else
    {
        unsigned l_505 = 0UL;
        for (g_83.f3 = (-22); (g_83.f3 == 27); g_83.f3 = safe_add_func_int16_t_s_s(g_83.f3, 3))
        {
            char l_494 = 0x30L;
            l_474 = (p_10 <= g_134.f3);
            g_83.f2 = (safe_div_func_int8_t_s_s(((l_473 | (((l_494 > (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((p_11 & ((p_10 & ((g_83.f5 < (!(((g_83.f4 <= (safe_rshift_func_uint8_t_u_s((g_127.f0 && (((((safe_add_func_uint32_t_u_u(g_127.f2, (((((safe_mod_func_int8_t_s_s(((l_505 || p_10) | g_83.f7), 0x60L)) != 0L) , p_11) || l_494) ^ 0x5C59L))) , 2L) & p_11) != g_180.f4) == l_494)), l_506))) <= p_10) == 0x83407026L))) , g_134.f0)) != (-7L))), g_83.f5)), (-1L)))) == l_473) | l_506)) && l_494), p_10));
            l_474 = (safe_lshift_func_uint8_t_u_u(g_127.f2, (l_505 != (safe_rshift_func_uint8_t_u_u(0x14L, (+(safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s(l_494, l_474)), (g_180.f1 <= ((safe_add_func_uint16_t_u_u(p_11, (safe_mod_func_uint8_t_u_u((~((safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(p_10, 6)) == p_10), p_10)), 0x110B9050L)), l_478)) <= 0x51C7L)), g_180.f0)))) <= l_473))))))))));
        }
    }
    g_83.f1 = g_83.f5;
    l_474 = (p_10 & func_13(p_10, ((l_474 || (l_478 && g_472)) <= ((safe_add_func_uint32_t_u_u(0x5911A96FL, 0L)) || (-1L))), ((((safe_lshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((func_31((((safe_add_func_uint16_t_u_u(((((l_474 || 0x1DL) == l_506) , 0x829B129BL) > l_506), l_474)) , l_474) == l_477.f0), l_477.f1, g_83.f8) && l_537) && g_134.f9), 0xDF289CC5L)), 0)) == l_538) < g_391) , l_538)));
    return g_180;
}







static unsigned short func_13(unsigned char p_14, unsigned short p_15, unsigned char p_16)
{
    unsigned char l_433 = 0x62L;
    struct S0 l_440 = {1UL,0x5ED48029L,-7L,0L,1UL,0x5E790A7AL,0x4D219958L,0x17EBL,1UL,65535UL};
    unsigned short l_459 = 1UL;
    union U1 l_460 = {0x8F30L};
    l_440 = func_39(l_433, (safe_add_func_uint8_t_u_u((g_134.f2 ^ g_134.f5), ((((g_83.f3 >= (((g_180.f4 >= l_433) > 0x063659F5L) < (safe_lshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(l_433, l_433)) ^ l_433), 4)))) > p_14) <= p_14) <= p_14))));
    g_83 = l_440;
    g_83.f1 = (safe_sub_func_uint16_t_u_u(((func_21(((safe_add_func_int32_t_s_s(0x1F398850L, ((((safe_rshift_func_uint8_t_u_s(g_134.f2, l_433)) & ((safe_mod_func_uint16_t_u_u(65535UL, p_14)) , (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(g_134.f0, (((~((safe_div_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_440.f0, l_440.f5)), (((g_83.f3 <= 3L) ^ l_440.f6) ^ p_14))) || g_134.f6), l_440.f8)) , 0xABA74D19L)) != l_459) || l_440.f4))), g_180.f4)))) | l_440.f6) ^ g_83.f2))) || 9L), l_460, g_127.f4, l_460.f1, l_440.f9) < g_127.f8) == 0x6E33L), g_127.f2));
    return l_440.f4;
}







static short func_21(int p_22, union U1 p_23, short p_24, int p_25, int p_26)
{
    struct S0 l_432 = {65528UL,0x17996482L,6L,1L,0UL,4L,0xFEE52BB2L,-9L,0x5693L,1UL};
    l_432 = g_134;
    g_134 = g_83;
    g_134 = g_134;
    return g_134.f6;
}







static union U1 func_27(unsigned p_28)
{
    unsigned l_35 = 0x6CEF3CF6L;
    int l_430 = 0xE3030B60L;
    union U1 l_431 = {1UL};
    l_430 = (safe_add_func_int16_t_s_s(func_31(l_35, (safe_add_func_uint16_t_u_u(((g_2 , l_35) <= p_28), 0xADC1L)), l_35), (g_391 , g_391)));
    return l_431;
}







static short func_31(short p_32, unsigned short p_33, unsigned p_34)
{
    int l_38 = 0x69C93E32L;
    union U1 l_46 = {0x2149L};
    struct S0 l_429 = {0xD565L,0xA52E3E6DL,0L,-9L,4294967288UL,5L,8UL,0xE854L,65535UL,0x2F0AL};
    l_38 = (-3L);
    l_429 = func_39((func_42((l_46 , func_47((l_46.f4 && (g_2 | (-2L))), ((g_2 == ((-3L) != (g_2 > (p_33 <= ((safe_div_func_uint8_t_u_u((l_46.f4 ^ 0x9AL), 0xBBL)) < l_46.f0))))) == 0UL))), l_46.f0, p_34) == 0x8A78684AL), p_33);
    return p_32;
}







static struct S0 func_39(unsigned p_40, int p_41)
{
    struct S0 l_428 = {0x9CA5L,1L,0xDCCB5A49L,0xCFBDL,0UL,0x9024B543L,1UL,0x2596L,0x0A95L,0xC795L};
    l_428 = l_428;
    return l_428;
}







static unsigned func_42(int p_43, int p_44, char p_45)
{
    struct S0 l_420 = {0x0DE7L,6L,0xE292644BL,0x9117L,0xC8B28DB9L,0x14C3500AL,0x8C7771C0L,0x4F64L,0x20EFL,0x2B2EL};
    struct S0 l_426 = {65527UL,-1L,5L,-10L,4294967295UL,1L,18446744073709551612UL,6L,0x15A4L,0x9F59L};
    short l_427 = 1L;
    l_420.f1 = ((func_47((safe_rshift_func_int8_t_s_s(g_83.f9, 5)), p_45) & p_44) , (g_127.f7 && (l_420 , (p_43 == func_47(p_45, (func_47((safe_div_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u(((l_420.f9 > l_420.f1) && l_420.f5))) < 0x4CL), p_44)), l_420.f6) , 0L))))));
    p_44 = (safe_add_func_uint8_t_u_u(255UL, p_43));
    g_134 = l_420;
    l_426 = l_420;
    return l_427;
}







static int func_47(int p_48, char p_49)
{
    int l_54 = 0x6E8D2CA8L;
    unsigned char l_109 = 0xC7L;
    union U1 l_111 = {0UL};
    unsigned l_115 = 0UL;
    struct S0 l_128 = {0x203BL,1L,0x2BF79242L,0x9DA2L,0x2D690D09L,0xF1B6C9F7L,0xE263B0CCL,-9L,0x2935L,0x3291L};
    struct S0 l_175 = {0UL,0xFC65C19EL,0x95E22890L,0xE7B7L,0UL,0x3DB1C6A3L,1UL,-3L,65526UL,0UL};
    short l_200 = 0L;
    if (l_54)
    {
        int l_57 = 0x1AFD208DL;
        union U1 l_66 = {0xEC45L};
        short l_91 = 0xF00CL;
        struct S0 l_106 = {0xB3BAL,0x24DD39D0L,1L,0x8C00L,4294967295UL,0x193220CCL,0x0868ECCAL,0x4738L,0xF12CL,0UL};
        if (((((((safe_mod_func_int16_t_s_s(p_48, l_57)) ^ (safe_mod_func_int8_t_s_s(g_2, (safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(p_48, p_48)), (safe_lshift_func_uint16_t_u_s((l_66 , ((g_2 ^ l_54) != p_49)), 3))))))) , p_49) ^ l_57) <= p_48) | 4UL))
        {
            p_48 = l_66.f4;
            g_80 = ((safe_sub_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((p_49 > (p_49 != ((safe_sub_func_uint16_t_u_u(p_48, l_57)) , p_48))), (safe_mod_func_int8_t_s_s((g_2 <= (g_2 && (safe_unary_minus_func_uint8_t_u(255UL)))), 0xFCL)))), p_49)) ^ 0x2EDDL) , 18446744073709551615UL) , g_2), g_2)) && p_48);
        }
        else
        {
            struct S0 l_84 = {0xCB69L,5L,0L,0xF303L,4294967290UL,0x4D464984L,1UL,-5L,0x88CDL,0xF70CL};
            for (l_54 = 0; (l_54 != (-4)); l_54 = safe_sub_func_int32_t_s_s(l_54, 4))
            {
                int l_94 = 5L;
                l_84 = g_83;
                l_84.f1 = ((l_54 > 0UL) , ((safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(g_83.f5, (-1L))) | ((safe_rshift_func_int16_t_s_u(0xA124L, p_48)) , (((g_83.f5 ^ l_91) || (safe_div_func_int32_t_s_s((((((0xD74891BCL == g_83.f8) > p_48) || 0x6CL) , l_94) == g_83.f7), g_83.f8))) | g_83.f1))), g_83.f9)) <= p_49));
            }
            p_48 = (((safe_mod_func_uint8_t_u_u(0x3EL, g_80)) , (!g_83.f1)) ^ l_66.f4);
        }
        if (((safe_unary_minus_func_int8_t_s(g_83.f2)) > (safe_mod_func_uint8_t_u_u((((((((~((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(p_49, (safe_mod_func_uint8_t_u_u(p_49, (-9L))))) , (((l_106 , ((((((l_57 , (((l_57 , (p_48 >= (safe_rshift_func_uint8_t_u_u((p_48 | 0x19L), 2)))) , 7UL) > l_106.f5)) <= g_83.f7) | l_54) | l_106.f3) , p_49) , (-1L))) & g_83.f7) <= p_49)), p_49)) , l_109)) == p_49) >= l_106.f2) < g_83.f4) && p_48) < l_109) & g_83.f7), 0x68L))))
        {
            short l_110 = 0x68F8L;
            int l_126 = 0xF28BEF3DL;
            if (l_110)
            {
                g_83.f2 = ((g_83.f2 | 0x6A5085D5L) & 1L);
                l_106.f2 = 0x826EC486L;
            }
            else
            {
                g_83.f1 = (l_111 , (l_111.f4 && g_2));
                for (l_109 = 0; (l_109 == 11); ++l_109)
                {
                    struct S0 l_114 = {65535UL,-2L,1L,0xD426L,0x27E379CBL,0xEE1CE7A6L,18446744073709551615UL,1L,65535UL,0UL};
                    l_115 = (1L <= (l_114 , (g_83.f3 > p_49)));
                    g_83.f1 = (0xAE6C69FBL || (0x3A393D43L & (0xC032282DL ^ p_48)));
                }
                g_83.f1 = ((safe_sub_func_int32_t_s_s((((((g_83.f3 , g_83.f3) ^ ((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(p_49, g_83.f0)), (p_49 || ((l_66.f4 & ((p_48 == l_109) && l_110)) <= g_2)))), 11)) != g_83.f2)) < 1L) && 0x58L) <= p_49), g_83.f2)) ^ g_83.f3);
                l_126 = (p_48 > (+(p_48 & ((safe_div_func_uint32_t_u_u(((p_48 || l_106.f7) , l_57), (((0xB780L ^ g_83.f1) ^ (l_91 == (0x68L <= p_48))) & l_110))) && 0xC367L))));
            }
            l_128 = g_127;
        }
        else
        {
            unsigned l_137 = 0x1A96804CL;
            int l_138 = 0L;
            l_106 = l_128;
            if (p_48)
            {
                struct S0 l_133 = {0x7516L,0xF4F606E3L,0xF0F46399L,7L,0UL,-9L,18446744073709551612UL,0x9872L,0x40EAL,0UL};
                if ((((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(p_48, 3)), 4L)) > p_48) >= p_49))
                {
                    p_48 = 0x6970B5AEL;
                    l_133 = l_133;
                    g_83 = g_127;
                    g_127 = g_83;
                }
                else
                {
                    g_134 = g_127;
                    l_138 = (p_49 != (safe_add_func_uint32_t_u_u(l_137, g_134.f0)));
                    for (g_127.f3 = 2; (g_127.f3 == 21); g_127.f3 = safe_add_func_uint16_t_u_u(g_127.f3, 7))
                    {
                        p_48 = p_48;
                    }
                }
            }
            else
            {
                char l_145 = 0L;
                g_134.f2 = 0xD449D27BL;
                if (((safe_rshift_func_uint8_t_u_s((~(safe_div_func_uint8_t_u_u(0xFAL, (l_145 && (safe_sub_func_uint16_t_u_u(0xAEEAL, ((((safe_rshift_func_int8_t_s_u(l_111.f4, 2)) || 0x65L) || (((~p_48) > (safe_lshift_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(p_48, (+((p_48 && 0xDCD2L) & l_137)))) != g_127.f5) == g_134.f9), l_128.f6))) ^ p_48)) , p_48))))))), 7)) > l_128.f2))
                {
                    g_83.f2 = (-1L);
                    g_83.f1 = (-1L);
                    for (l_106.f8 = 0; (l_106.f8 > 54); ++l_106.f8)
                    {
                        return p_49;
                    }
                    return l_128.f5;
                }
                else
                {
                    unsigned l_156 = 0x90EF0FEDL;
                    int l_172 = 0xBF35DCCDL;
                    l_156 = g_127.f7;
                    if (((safe_unary_minus_func_int32_t_s((((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(l_115, 14)) , (+p_49)), (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((!g_83.f1), 2)), 0x6BL)))), 3)), p_49)) | (p_49 || (safe_div_func_int16_t_s_s(g_83.f2, (((p_49 <= g_134.f2) >= 0xDC2B037CL) , 1L))))) ^ 0xEAL))) <= p_48))
                    {
                        g_83.f1 = l_145;
                        return g_83.f7;
                    }
                    else
                    {
                        l_172 = 1L;
                        return l_128.f2;
                    }
                }
            }
            for (l_128.f9 = (-23); (l_128.f9 <= 38); l_128.f9 = safe_add_func_int32_t_s_s(l_128.f9, 1))
            {
                l_175 = l_106;
            }
        }
        g_127.f2 = ((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((g_127.f5 | ((g_180 , l_106) , (0x621FF539L ^ ((g_134.f7 < l_175.f4) | 0x30L)))), g_180.f4)), p_48)) ^ 0xFA3CL);
    }
    else
    {
        struct S0 l_185 = {0x2366L,-5L,0xF2D15554L,-5L,4294967295UL,0x069C672CL,1UL,0x92DCL,0xD5CEL,0xC9AEL};
        for (g_134.f1 = (-5); (g_134.f1 > (-22)); g_134.f1--)
        {
            unsigned short l_183 = 0x2C58L;
            struct S0 l_184 = {1UL,1L,8L,0xA56CL,0xAAE59B50L,0xE7058344L,18446744073709551610UL,0L,65535UL,0xE7F0L};
            l_128.f2 = l_183;
            if (l_183)
            {
                l_185 = l_184;
                if (p_49)
                    break;
            }
            else
            {
                for (l_185.f2 = 0; (l_185.f2 > (-10)); l_185.f2--)
                {
                    unsigned short l_188 = 0x6398L;
                    g_83.f2 = l_188;
                }
                l_184.f1 = (p_49 > g_127.f3);
                for (g_134.f3 = 0; (g_134.f3 <= (-12)); --g_134.f3)
                {
                    struct S0 l_191 = {0x4178L,0x9A76FBACL,0xAF0A2B92L,-1L,0x45251D08L,-1L,0x6AD7F4E2L,-6L,0x668EL,1UL};
                    g_83 = l_191;
                }
                l_185.f2 = ((l_175.f6 && (g_83.f5 >= p_48)) , (g_134.f0 > (p_49 && g_80)));
            }
            l_184 = l_185;
            p_48 = (safe_sub_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u(p_48, ((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(l_200, 7L)), (p_48 , ((l_184.f8 || (g_127.f1 < l_185.f4)) , (!((+g_83.f9) , p_49)))))) | 0UL))) , g_127.f6) , 9UL), 0xEE978827L));
        }
        g_134.f2 = l_128.f9;
        g_134 = l_185;
    }
    if ((((g_134.f7 , (safe_rshift_func_int16_t_s_s(((g_180 , p_49) ^ (safe_add_func_uint16_t_u_u(p_48, 0UL))), g_134.f6))) ^ l_175.f6) , (l_175.f8 != (safe_div_func_int32_t_s_s((p_49 || l_175.f5), 0x48666776L)))))
    {
        int l_223 = 1L;
        struct S0 l_239 = {0x2D45L,0xA17C66CCL,-1L,0xEBE9L,0x310B3495L,2L,0UL,0x4C59L,0x541DL,65532UL};
        p_48 = ((safe_add_func_int32_t_s_s(p_49, (safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(0xB8ECEDB7L, ((safe_sub_func_uint16_t_u_u((l_175.f6 > ((((p_48 && (((safe_add_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(p_49, (g_80 , (safe_mod_func_int8_t_s_s((0xC1L < (safe_lshift_func_uint16_t_u_s(p_48, 1))), l_128.f5))))) | 0x66L), p_48)) <= 0x3FC29F5BL) | l_223)) <= l_223) , g_83.f1) < g_134.f5)), p_48)) ^ l_223))) == l_175.f5), 0xA2L)))) & l_128.f0);
        g_134.f2 = (((safe_rshift_func_int8_t_s_s(0x0EL, l_175.f8)) > g_127.f3) <= g_134.f5);
        if ((safe_add_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(l_223, p_49)) < ((safe_unary_minus_func_int16_t_s(p_49)) , ((safe_lshift_func_int8_t_s_u(l_223, 2)) <= (safe_lshift_func_uint8_t_u_s(((((-9L) & ((0UL < p_48) , ((safe_rshift_func_int8_t_s_u((((g_83.f3 ^ p_48) ^ 4294967295UL) & 4294967291UL), 6)) , g_180.f4))) <= g_134.f0) , g_127.f1), 6))))), l_128.f9)))
        {
            unsigned char l_240 = 1UL;
            struct S0 l_266 = {0UL,0L,0xCA584BB0L,0x4E43L,4294967295UL,0x9407355BL,0UL,0x7CC0L,6UL,5UL};
            short l_324 = 0x55AEL;
            for (g_134.f4 = 0; (g_134.f4 >= 24); g_134.f4++)
            {
                return p_49;
            }
            if (((l_239 , ((-10L) || ((g_83.f2 <= p_48) || (g_134.f9 >= ((l_240 < (safe_mod_func_uint8_t_u_u(l_128.f4, (l_239.f8 ^ 0x5CL)))) | g_134.f3))))) | (-1L)))
            {
                short l_273 = 0x1FD4L;
                p_48 = (((((g_80 && (0x0BL | (l_239.f1 ^ (g_180 , (safe_rshift_func_uint16_t_u_u((((~(((p_49 , g_83.f7) <= (safe_rshift_func_uint16_t_u_s(g_127.f3, 8))) < (!g_134.f4))) || ((g_127.f9 || g_83.f8) , p_48)) != g_127.f8), p_49)))))) , g_83.f6) , p_48) && 65534UL) ^ g_83.f1);
                for (g_127.f5 = 0; (g_127.f5 <= 18); g_127.f5 = safe_add_func_int32_t_s_s(g_127.f5, 4))
                {
                    unsigned l_251 = 18446744073709551615UL;
                    unsigned l_254 = 0x4450F6B1L;
                    l_251 = (safe_add_func_uint8_t_u_u(l_240, 0xF6L));
                    for (g_180.f3 = 0; (g_180.f3 > (-26)); g_180.f3--)
                    {
                        return l_254;
                    }
                    for (l_128.f5 = (-24); (l_128.f5 > (-5)); l_128.f5++)
                    {
                        g_134.f2 = ((safe_sub_func_int32_t_s_s(0L, ((safe_add_func_int8_t_s_s((~((g_80 > ((safe_sub_func_uint16_t_u_u(p_48, ((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((l_266 , g_127.f3))), ((safe_add_func_uint16_t_u_u(p_48, (((((((safe_div_func_int32_t_s_s(((l_175.f3 == (p_48 >= (g_180.f2 >= 0x9F4A77C4L))) , p_49), 0x61F359F1L)) > g_134.f2) ^ g_83.f4) != 0x6CL) , g_180.f4) || l_273) || 0x41L))) | g_134.f6))) ^ 255UL))) != 0xA497L)) || 0xFA9CBD28L)), g_83.f0)) >= 255UL))) ^ g_83.f8);
                        p_48 = (safe_mod_func_uint16_t_u_u(g_180.f1, l_239.f2));
                    }
                }
                for (l_54 = (-2); (l_54 < 25); l_54 = safe_add_func_uint32_t_u_u(l_54, 1))
                {
                    int l_309 = 0xFCF653B7L;
                    if (l_175.f1)
                        break;
                    p_48 = l_273;
                    for (l_175.f0 = (-8); (l_175.f0 == 24); ++l_175.f0)
                    {
                        unsigned l_280 = 0UL;
                        l_128.f2 = (l_280 < g_134.f7);
                        l_239.f2 = ((g_127.f8 < g_127.f4) > ((safe_div_func_uint32_t_u_u(l_239.f8, (safe_rshift_func_int8_t_s_u(g_127.f4, ((safe_lshift_func_int16_t_s_u((l_128 , ((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((g_134.f7 , l_239.f1) == (safe_sub_func_int32_t_s_s(l_175.f4, 4294967292UL))), l_266.f6)), p_48)) <= 9UL)), 4)) ^ p_48))))) < g_134.f0));
                        p_48 = (((((safe_sub_func_int32_t_s_s((l_240 == p_48), g_127.f0)) >= p_49) | (safe_add_func_int16_t_s_s((p_48 & (((((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((((0xFC19A040L || ((((l_266.f3 | 0xCD58L) , (2L & g_127.f2)) & p_49) <= 255UL)) , l_309) , 1UL), l_273)) > g_83.f1), l_128.f2)), p_48)), 0x709EL)) | 0xADL), (-1L))), l_273)) <= l_239.f7) & p_48) && l_309) | (-9L))), p_49))) | (-1L)) <= p_48);
                    }
                }
                g_134.f1 = l_111.f4;
            }
            else
            {
                return p_49;
            }
            p_48 = (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((l_239.f2 > ((safe_add_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_83.f6, (g_134.f2 ^ (1L > (~g_134.f0))))), 6)), g_127.f7)) == (((p_48 | (safe_add_func_int8_t_s_s(p_48, l_239.f7))) ^ p_48) , l_239.f1)) , p_48), 0x6F9AL)) ^ g_134.f8)) & 0xEE24L), l_324)), p_48));
            g_134 = l_266;
        }
        else
        {
            char l_325 = 0xCFL;
            g_134.f2 = l_325;
        }
    }
    else
    {
        union U1 l_330 = {65535UL};
        for (l_128.f8 = 0; (l_128.f8 == 20); l_128.f8 = safe_add_func_uint16_t_u_u(l_128.f8, 6))
        {
            int l_343 = 0x6BF60B68L;
            int l_353 = (-1L);
            for (l_109 = 0; (l_109 > 58); l_109 = safe_add_func_uint8_t_u_u(l_109, 4))
            {
                g_83 = g_127;
                p_48 = ((l_330 , ((safe_add_func_int16_t_s_s(p_48, (p_49 >= ((~((safe_lshift_func_uint8_t_u_u((g_2 & (safe_rshift_func_int8_t_s_u((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(0x7AL, 6)), ((safe_rshift_func_int16_t_s_s(((p_48 , g_180.f1) , p_48), 7)) ^ (+l_343)))) & p_48) == g_127.f3), p_49))), l_175.f6)) != 255UL)) == 0x89L)))) <= 1L)) && p_48);
                return p_49;
            }
            g_134.f1 = p_48;
            for (g_134.f9 = 0; (g_134.f9 > 51); g_134.f9++)
            {
                int l_346 = 7L;
                l_353 = ((((((l_346 , (safe_lshift_func_uint8_t_u_s(l_330.f0, 1))) , (l_343 == (safe_add_func_uint32_t_u_u(p_48, g_127.f8)))) , ((safe_mod_func_uint32_t_u_u(4294967292UL, p_48)) <= ((p_48 ^ l_343) <= p_49))) > 7L) && p_49) != l_54);
            }
        }
        g_134.f1 = g_80;
    }
    if (p_48)
    {
        struct S0 l_354 = {0x029DL,-8L,-8L,-1L,1UL,0x40FA77D6L,0xDEC3D99BL,1L,0xCA7DL,65535UL};
        l_354 = ((p_48 , p_48) , l_354);
        l_354 = g_83;
        for (l_128.f2 = 0; (l_128.f2 >= 2); l_128.f2 = safe_add_func_uint16_t_u_u(l_128.f2, 6))
        {
            struct S0 l_357 = {0x6AA7L,0xE289F323L,0x6819490DL,1L,0x413B3D7AL,-1L,4UL,1L,0x2C02L,0xD15DL};
            l_354 = l_357;
        }
    }
    else
    {
        char l_368 = 7L;
        unsigned l_374 = 18446744073709551615UL;
        struct S0 l_402 = {9UL,0xE664EA68L,0L,-5L,0x4B255D95L,0xE4C3257EL,1UL,0x5FEAL,0xF517L,0x81DBL};
        if (l_128.f5)
        {
            short l_358 = (-7L);
            struct S0 l_379 = {0xBABEL,0L,0xD9204991L,-1L,0x69E625C9L,0xA074DE63L,0x1C4B42CBL,-6L,0x7DA0L,0xDD3AL};
            l_358 = p_48;
            if (g_134.f0)
            {
                for (l_128.f6 = 0; (l_128.f6 < 31); ++l_128.f6)
                {
                    unsigned l_365 = 1UL;
                    if ((~p_49))
                    {
                        return g_134.f5;
                    }
                    else
                    {
                        p_48 = g_134.f5;
                        g_134.f1 = (safe_mod_func_int32_t_s_s((l_358 && (safe_add_func_int16_t_s_s(l_365, g_83.f3))), p_49));
                    }
                }
            }
            else
            {
                int l_373 = 0x8DB19585L;
                struct S0 l_375 = {0UL,-8L,0xF1423323L,-1L,0x00946C30L,0L,18446744073709551610UL,0xAE6FL,0xFEA2L,0xEB2CL};
                int l_387 = 0x92D1E165L;
                l_374 = ((g_134.f9 > ((((((((safe_div_func_uint32_t_u_u(l_368, 1UL)) , 6L) , 0xCBL) >= (p_49 ^ (p_49 < (0xC7C4L == (((safe_div_func_uint8_t_u_u(255UL, g_134.f6)) | 0L) ^ 1L))))) <= 0x27C93993L) , l_373) > g_127.f8) , (-9L))) & l_368);
                l_175 = l_375;
                g_134.f2 = p_49;
                for (l_128.f6 = 0; (l_128.f6 != 5); l_128.f6 = safe_add_func_int8_t_s_s(l_128.f6, 7))
                {
                    unsigned l_388 = 0x7C6F405BL;
                    g_83.f2 = p_49;
                    g_134.f1 = (g_127.f7 && (g_83.f2 , l_368));
                    if ((l_128.f9 < (safe_unary_minus_func_int8_t_s((0x434D2C63L | 0x1B82DC54L)))))
                    {
                        if (p_48)
                            break;
                    }
                    else
                    {
                        struct S0 l_380 = {0UL,0L,0xB9342A3FL,0xA3C8L,0x688D3BB8L,5L,1UL,-5L,0xAB40L,0xBED1L};
                        g_134.f2 = p_48;
                        g_83 = g_134;
                        l_380 = l_379;
                    }
                    g_83.f2 = (safe_add_func_uint8_t_u_u((((65526UL && (g_134.f9 || (p_48 , 0x686AA94CL))) <= (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_48, (l_54 , p_49))), l_387))) >= (((((p_48 || p_48) , l_358) && l_128.f1) > l_374) != l_388)), g_127.f2));
                }
            }
            p_48 = ((8L != (l_368 & (!((((safe_mod_func_int8_t_s_s(((g_83.f5 | (l_379 , g_391)) <= (p_49 , p_49)), 0xECL)) == l_368) != l_374) , p_49)))) || g_134.f3);
            g_127.f2 = (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_128.f6, (safe_sub_func_int8_t_s_s(l_358, ((g_180.f0 <= (safe_add_func_int8_t_s_s(g_134.f3, (0UL < (g_127.f5 ^ ((((safe_rshift_func_uint16_t_u_s((l_379.f5 | g_127.f0), g_83.f7)) , l_175.f7) || l_368) != 0xA39BL)))))) < g_127.f9))))), g_83.f7));
        }
        else
        {
            char l_411 = (-9L);
            l_402 = g_127;
            l_128.f1 = (safe_mod_func_int16_t_s_s(l_175.f7, (safe_lshift_func_uint16_t_u_u(g_180.f0, 4))));
            p_48 = g_83.f0;
            p_48 = (((safe_lshift_func_uint16_t_u_u(p_48, p_48)) ^ p_48) && ((((g_134.f9 == l_128.f2) && (l_411 == (((safe_rshift_func_int8_t_s_s(p_48, 5)) == (safe_rshift_func_int8_t_s_s(l_374, (safe_sub_func_uint32_t_u_u(g_83.f8, 0xDF4E2175L))))) != p_48))) >= 0x59E2L) == 0x993614B3L));
        }
        g_127.f2 = g_127.f8;
        l_128.f2 = l_402.f5;
    }
    g_127.f2 = l_175.f1;
    return l_175.f5;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_83.f1, "g_83.f1", print_hash_value);
    transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
    transparent_crc(g_83.f3, "g_83.f3", print_hash_value);
    transparent_crc(g_83.f4, "g_83.f4", print_hash_value);
    transparent_crc(g_83.f5, "g_83.f5", print_hash_value);
    transparent_crc(g_83.f6, "g_83.f6", print_hash_value);
    transparent_crc(g_83.f7, "g_83.f7", print_hash_value);
    transparent_crc(g_83.f8, "g_83.f8", print_hash_value);
    transparent_crc(g_83.f9, "g_83.f9", print_hash_value);
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_127.f2, "g_127.f2", print_hash_value);
    transparent_crc(g_127.f3, "g_127.f3", print_hash_value);
    transparent_crc(g_127.f4, "g_127.f4", print_hash_value);
    transparent_crc(g_127.f5, "g_127.f5", print_hash_value);
    transparent_crc(g_127.f6, "g_127.f6", print_hash_value);
    transparent_crc(g_127.f7, "g_127.f7", print_hash_value);
    transparent_crc(g_127.f8, "g_127.f8", print_hash_value);
    transparent_crc(g_127.f9, "g_127.f9", print_hash_value);
    transparent_crc(g_134.f0, "g_134.f0", print_hash_value);
    transparent_crc(g_134.f1, "g_134.f1", print_hash_value);
    transparent_crc(g_134.f2, "g_134.f2", print_hash_value);
    transparent_crc(g_134.f3, "g_134.f3", print_hash_value);
    transparent_crc(g_134.f4, "g_134.f4", print_hash_value);
    transparent_crc(g_134.f5, "g_134.f5", print_hash_value);
    transparent_crc(g_134.f6, "g_134.f6", print_hash_value);
    transparent_crc(g_134.f7, "g_134.f7", print_hash_value);
    transparent_crc(g_134.f8, "g_134.f8", print_hash_value);
    transparent_crc(g_134.f9, "g_134.f9", print_hash_value);
    transparent_crc(g_180.f0, "g_180.f0", print_hash_value);
    transparent_crc(g_180.f1, "g_180.f1", print_hash_value);
    transparent_crc(g_180.f4, "g_180.f4", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
