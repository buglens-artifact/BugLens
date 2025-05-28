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
   int f0;
   int f1;
   unsigned f2;
   unsigned f3;
   unsigned f4;
   int f5;
   int f6;
   char f7;
   char f8;
   short f9;
};


static int g_2 = 0x00FE1CA2L;
static int g_6 = (-8L);
static int g_14 = 0x1860EC01L;
static char g_24 = 0x47L;
static int g_34 = (-1L);
static struct S0 g_41 = {1L,0x0B49F2B7L,1UL,0UL,0x5D8D3410L,8L,0xAD11E758L,0L,0xABL,0x3DE3L};
static int *g_110 = &g_34;
static int **g_109 = &g_110;
static struct S0 g_112 = {-1L,-1L,0x41B9AD14L,0x53B525E9L,1UL,0x88466DECL,0x612EDF4FL,1L,0x83L,-6L};
static unsigned short g_326 = 1UL;
static char g_436 = 0x15L;
static int g_482 = 0x01B200F8L;
static char g_491 = 0xF4L;
static char g_508 = (-8L);
static short g_522 = 7L;
static unsigned g_540 = 18446744073709551609UL;
static char g_671 = 0xFBL;
static unsigned char g_677 = 0UL;
static int g_789 = 0x012614E6L;
static unsigned g_817 = 18446744073709551612UL;
static int **g_831 = &g_110;
static struct S0 *g_853 = &g_41;
static struct S0 **g_852 = &g_853;
static struct S0 g_860 = {0L,0x9E3D3D78L,18446744073709551609UL,2UL,0xFF69778CL,1L,0xEB58F35AL,-8L,-1L,1L};
static unsigned short g_1040 = 8UL;
static unsigned g_1218 = 0x3005C018L;
static unsigned g_1417 = 4UL;
static unsigned short g_1434 = 0xE848L;
static unsigned short g_1589 = 0xDB1AL;
static int **g_1620 = &g_110;
static unsigned g_1703 = 0x25956FECL;
static struct S0 g_1756 = {0x63251DD5L,-5L,18446744073709551615UL,3UL,0xC95C5BA4L,0x734B081FL,9L,-7L,0x99L,0x28ADL};
static short g_1761 = 0L;
static unsigned g_1842 = 0x26CB8D9BL;
static unsigned g_1903 = 0UL;



static unsigned func_1(void);
static short func_27(unsigned p_28, int p_29, int * p_30);
static int * func_35(int p_36, int * p_37, unsigned short p_38, struct S0 p_39);
static int func_42(int * p_43, int * p_44);
static int * func_45(int * p_46);
static unsigned char func_52(int * p_53, int * p_54);
static int * func_55(struct S0 p_56, char p_57, int * p_58);
static struct S0 func_59(unsigned char p_60, int * p_61, unsigned p_62);
static int * func_64(unsigned p_65, int * p_66, int p_67);
static unsigned short func_68(int * p_69, unsigned short p_70, int p_71, struct S0 p_72);
static unsigned func_1(void)
{
    unsigned l_7 = 7UL;
    unsigned l_1610 = 0x1E74C363L;
    int *l_1616 = &g_41.f6;
    int l_1631 = 0xEB960C84L;
    int l_1780 = 0xB3CEBAF6L;
    int l_1784 = 0x3EAD1469L;
    int l_1814 = 0x1B7AB016L;
    int l_1817 = 0L;
    int l_1820 = (-1L);
    unsigned l_1906 = 4UL;
    for (g_2 = 0; (g_2 != (-12)); g_2 = safe_sub_func_int8_t_s_s(g_2, 2))
    {
        int *l_5 = &g_6;
        int ***l_1609 = &g_109;
        int l_1718 = 0x341D8EFEL;
        int l_1736 = 0x60781C28L;
        unsigned l_1753 = 0x84E2B94AL;
        struct S0 l_1759 = {0xA23E9535L,-9L,0x1C14D779L,0x1F827308L,0x8E0E3019L,0x1EBF69F0L,-10L,-1L,0xE5L,0x674BL};
        unsigned l_1760 = 18446744073709551613UL;
        int l_1811 = (-5L);
        int l_1813 = 4L;
        int l_1815 = 0x2606134AL;
        int l_1834 = 0xFACBEE0EL;
        --l_7;
        for (g_6 = (-3); (g_6 == (-2)); g_6++)
        {
            int *l_1617 = &g_41.f5;
            int l_1702 = 0x3E0FC864L;
            int l_1741 = 0x04ABEED8L;
            int l_1746 = 0xE4EB9CF6L;
        }
        (*l_1616) ^= (*g_110);
        if (((safe_mod_func_int32_t_s_s((func_68((**l_1609), g_41.f1, (*l_5), l_1759) > (l_1609 == &g_109)), l_1760)) && func_42(func_45((*g_831)), &l_1631)))
        {
            int *l_1762 = (void*)0;
            int *l_1763 = (void*)0;
            int *l_1764 = &g_860.f5;
            int *l_1765 = &g_14;
            int *l_1766 = (void*)0;
            int *l_1767 = &g_41.f6;
            int *l_1768 = &g_1756.f5;
            int *l_1769 = &g_860.f5;
            int *l_1770 = &g_860.f6;
            int *l_1771 = &g_6;
            int *l_1772 = &g_41.f5;
            int *l_1773 = (void*)0;
            int l_1774 = 0xA819CC85L;
            int *l_1775 = &g_14;
            int *l_1776 = &l_1759.f6;
            int *l_1777 = &g_112.f6;
            int l_1778 = 1L;
            int *l_1779 = &g_860.f5;
            int *l_1781 = (void*)0;
            int *l_1782 = (void*)0;
            int *l_1783 = (void*)0;
            int *l_1785 = (void*)0;
            int *l_1786 = &l_1784;
            int *l_1787 = (void*)0;
            int *l_1788 = &g_860.f5;
            int *l_1789 = &l_1774;
            int *l_1790 = &l_1780;
            int *l_1791 = &l_1780;
            int *l_1792 = &g_1756.f6;
            int *l_1793 = &g_34;
            int *l_1794 = &g_112.f5;
            int *l_1795 = (void*)0;
            int *l_1796 = &l_1736;
            int *l_1797 = &g_41.f6;
            int *l_1798 = &l_1780;
            int *l_1799 = &g_112.f5;
            int *l_1800 = (void*)0;
            int *l_1801 = &g_860.f6;
            int *l_1802 = &l_1774;
            int *l_1803 = &l_1778;
            int *l_1804 = &g_860.f5;
            int *l_1805 = (void*)0;
            int *l_1806 = &g_41.f5;
            int *l_1807 = &l_1759.f5;
            int *l_1808 = &l_1774;
            int *l_1809 = &g_789;
            int *l_1810 = &l_1759.f5;
            int *l_1812 = &g_860.f5;
            int *l_1816 = &g_860.f5;
            int *l_1818 = &l_1631;
            int *l_1819 = &g_860.f6;
            int *l_1821 = &l_1759.f6;
            int *l_1822 = &g_789;
            int *l_1823 = &g_860.f6;
            int *l_1824 = &l_1778;
            int *l_1825 = &l_1759.f6;
            int *l_1826 = &l_1778;
            int *l_1827 = &g_41.f5;
            int *l_1828 = &g_41.f5;
            int *l_1829 = &l_1759.f5;
            int l_1830 = (-7L);
            int *l_1831 = &g_112.f6;
            int *l_1832 = &l_1814;
            int *l_1833 = &l_1780;
            int *l_1835 = (void*)0;
            int *l_1836 = &l_1774;
            int *l_1837 = &l_1813;
            int *l_1838 = &l_1811;
            int *l_1839 = &g_14;
            int *l_1840 = &l_1820;
            int *l_1841 = &l_1736;
            (*l_5) |= (**g_831);
            g_1842++;
            if ((**g_109))
                continue;
            (*g_110) = (func_52((*g_831), (*g_1620)) < g_1761);
        }
        else
        {
            char l_1891 = 1L;
            (*g_831) = &l_1814;
            if ((&g_109 == (void*)0))
            {
                int *l_1845 = &l_1811;
                int *l_1846 = &l_1780;
                int *l_1847 = &l_1817;
                int *l_1848 = (void*)0;
                int *l_1849 = &l_1631;
                int *l_1850 = &g_789;
                int *l_1851 = (void*)0;
                int *l_1852 = &l_1815;
                int *l_1853 = (void*)0;
                int *l_1854 = &g_1756.f6;
                int *l_1855 = &l_1815;
                int *l_1856 = (void*)0;
                int *l_1857 = &g_789;
                int *l_1858 = &g_860.f5;
                int *l_1859 = &l_1834;
                int *l_1860 = &l_1811;
                int *l_1861 = &l_1814;
                int *l_1862 = &g_112.f5;
                int *l_1863 = &l_1814;
                int *l_1864 = &l_1759.f5;
                int *l_1865 = &l_1815;
                int *l_1866 = &l_1817;
                int *l_1867 = &l_1813;
                int *l_1868 = (void*)0;
                int *l_1869 = &l_1814;
                int *l_1870 = (void*)0;
                int *l_1871 = &l_1814;
                int *l_1872 = &g_860.f5;
                int *l_1873 = (void*)0;
                int *l_1874 = &g_6;
                int *l_1875 = &l_1759.f6;
                int *l_1876 = &g_6;
                int l_1877 = 0x26B85C88L;
                int *l_1878 = &g_14;
                int *l_1879 = &g_41.f6;
                int *l_1880 = &l_1815;
                int *l_1881 = &g_1756.f5;
                int *l_1882 = &l_1813;
                int *l_1883 = &g_6;
                int *l_1884 = (void*)0;
                int *l_1885 = &g_1756.f5;
                int *l_1886 = (void*)0;
                int *l_1887 = &l_1784;
                int *l_1888 = &l_1877;
                int *l_1889 = &g_789;
                int *l_1890 = &g_1756.f6;
                int *l_1892 = &g_112.f5;
                int *l_1893 = &l_1815;
                int *l_1894 = (void*)0;
                int *l_1895 = &l_1817;
                int *l_1896 = &l_1759.f5;
                int *l_1897 = &l_1820;
                int *l_1898 = &g_860.f5;
                int *l_1899 = &g_41.f5;
                int *l_1900 = &g_860.f6;
                int *l_1901 = &l_1817;
                int *l_1902 = &l_1759.f6;
                g_1903--;
            }
            else
            {
                --l_1906;
                (*l_1609) = &g_110;
                (*l_5) |= (**g_1620);
            }
        }
    }
    (*g_110) = (**g_1620);
    (*g_109) = func_35(g_1756.f2, (*g_831), (*l_1616), (*g_853));
    (*g_1620) = &l_1820;
    return (*l_1616);
}







static short func_27(unsigned p_28, int p_29, int * p_30)
{
    unsigned l_31 = 5UL;
    int *l_32 = (void*)0;
    int *l_33 = &g_34;
    struct S0 l_1269 = {-1L,0L,8UL,0xA046680BL,4294967295UL,0x2139249FL,2L,7L,0xABL,5L};
    unsigned l_1273 = 4294967289UL;
    int l_1392 = (-10L);
    int l_1533 = 0x186EE7E0L;
    char l_1551 = 0x91L;
    short l_1600 = 0x39BEL;
    struct S0 **l_1604 = &g_853;
    (*l_33) ^= l_31;
    if ((*p_30))
    {
        char l_40 = 5L;
        int ***l_1256 = &g_831;
        (*g_831) = func_35(g_2, l_32, l_40, g_41);
        if (g_860.f4)
            goto lbl_1257;
lbl_1257:
        (*l_1256) = &l_33;
        (**g_852) = (*g_853);
    }
    else
    {
        int *l_1262 = (void*)0;
        int l_1270 = 0x71BE034DL;
        int l_1283 = 0xF1756D2CL;
        int l_1420 = 0x91809DF4L;
        int l_1423 = (-4L);
        int l_1429 = 0xFB42DCD3L;
        struct S0 l_1466 = {-1L,0x5EA106DAL,0UL,0xCFBDD486L,4294967287UL,0x506CFA15L,0x9EA21E34L,0L,0x34L,2L};
        struct S0 **l_1488 = (void*)0;
        (*l_33) = ((void*)0 == &l_33);
        if ((safe_mod_func_uint16_t_u_u((*l_33), (safe_mul_func_uint16_t_u_u(g_817, (func_68(func_45(l_1262), p_28, (safe_lshift_func_uint16_t_u_s(0xB76EL, (safe_mod_func_uint16_t_u_u(p_28, 0x1810L)))), func_59((safe_lshift_func_int16_t_s_s(((!(func_68(l_32, g_860.f5, p_29, l_1269) < g_112.f0)) ^ 0xD073L), 4)), l_1262, g_41.f4)) > 1L))))))
        {
            struct S0 l_1296 = {0xD4FAAEEEL,-1L,0x9C2DD2A3L,1UL,0xE309354FL,0x219CBC30L,0xD7CD2C43L,-1L,6L,0x0595L};
            int l_1421 = 0x2A3DDA74L;
            short l_1422 = 9L;
            int **l_1467 = &l_33;
            int *l_1495 = &l_1269.f5;
            int *l_1496 = &l_1420;
            int *l_1497 = &l_1269.f6;
            int *l_1498 = &g_41.f6;
            int *l_1499 = &l_1466.f5;
            int *l_1500 = &g_41.f6;
            int *l_1501 = &l_1421;
            int *l_1502 = &l_1466.f5;
            int *l_1503 = &g_112.f5;
            int *l_1504 = &l_1423;
            int *l_1505 = &g_41.f6;
            int *l_1506 = (void*)0;
            int *l_1507 = &l_1270;
            int *l_1508 = &l_1466.f5;
            int *l_1509 = &g_41.f5;
            int *l_1510 = &g_41.f5;
            int *l_1511 = &l_1296.f6;
            int *l_1512 = (void*)0;
            int *l_1513 = &l_1269.f5;
            int *l_1514 = &l_1296.f6;
            int *l_1515 = (void*)0;
            int *l_1516 = (void*)0;
            int *l_1517 = &g_789;
            int *l_1518 = &l_1270;
            int *l_1519 = &g_860.f6;
            int *l_1520 = &l_1420;
            int *l_1521 = (void*)0;
            int *l_1522 = &g_112.f6;
            int *l_1523 = &l_1466.f5;
            int *l_1524 = &g_34;
            int *l_1525 = &g_860.f6;
            int *l_1526 = &g_860.f5;
            int *l_1527 = &g_112.f6;
            int *l_1528 = &g_860.f6;
            int *l_1529 = &l_1466.f5;
            int *l_1530 = &g_789;
            int *l_1531 = &l_1429;
            int *l_1532 = &l_1296.f6;
            int *l_1534 = (void*)0;
            int *l_1535 = (void*)0;
            int *l_1536 = &g_112.f5;
            int *l_1537 = &l_1296.f6;
            int *l_1538 = &l_1533;
            int *l_1539 = &l_1466.f6;
            int *l_1540 = &l_1269.f6;
            int *l_1541 = &g_112.f6;
            int *l_1542 = &l_1269.f5;
            int *l_1543 = (void*)0;
            int *l_1544 = &l_1466.f6;
            int *l_1545 = (void*)0;
            int *l_1546 = &l_1269.f6;
            int *l_1547 = (void*)0;
            int *l_1548 = &l_1423;
            int *l_1549 = &g_112.f6;
            int *l_1550 = (void*)0;
            int *l_1552 = &g_112.f6;
            int *l_1553 = &l_1423;
            int *l_1554 = &l_1270;
            int *l_1555 = (void*)0;
            int *l_1556 = &g_860.f5;
            int *l_1557 = &g_860.f6;
            int *l_1558 = &l_1421;
            int *l_1559 = &g_112.f6;
            int *l_1560 = &l_1421;
            int *l_1561 = (void*)0;
            int *l_1562 = &l_1421;
            int *l_1563 = &l_1392;
            int *l_1564 = &l_1296.f5;
            int *l_1565 = (void*)0;
            int *l_1566 = &g_860.f5;
            int *l_1567 = &l_1533;
            int *l_1568 = &l_1269.f5;
            int *l_1569 = &l_1269.f6;
            int *l_1570 = &l_1420;
            int *l_1571 = &g_860.f6;
            int l_1572 = 4L;
            int *l_1573 = &g_41.f6;
            int *l_1574 = &l_1423;
            int *l_1575 = &l_1296.f6;
            int *l_1576 = &g_41.f6;
            int *l_1577 = (void*)0;
            int *l_1578 = &g_112.f6;
            int *l_1579 = (void*)0;
            int *l_1580 = &g_34;
            int *l_1581 = &l_1270;
            int *l_1582 = (void*)0;
            int *l_1583 = &l_1429;
            int *l_1584 = &g_34;
            int *l_1585 = (void*)0;
            int *l_1586 = &l_1296.f6;
            int *l_1587 = &g_112.f6;
            int *l_1588 = &g_41.f5;
            if (l_1270)
            {
                struct S0 **l_1294 = &g_853;
                int l_1314 = 0x604E8D42L;
                int l_1328 = 0x9BF8680DL;
                int l_1407 = 0xC3DEF8BCL;
                int l_1409 = (-6L);
                int l_1415 = 0x3C9CE864L;
                for (g_860.f0 = (-30); (g_860.f0 < 13); g_860.f0++)
                {
                    int *l_1282 = &g_789;
                    int l_1424 = 0xC0732769L;
                    int l_1425 = 0xA45E04BDL;
                    (**g_109) = (((l_1273 | ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(0x703FL, p_28)), g_41.f7)) == (safe_add_func_uint32_t_u_u(g_41.f1, (safe_add_func_int32_t_s_s(((*p_30) < 0xF5E0A92BL), func_52(l_1282, p_30))))))) > g_41.f1) >= l_1283);
                    for (g_326 = (-22); (g_326 > 11); g_326 = safe_add_func_uint16_t_u_u(g_326, 1))
                    {
                        struct S0 l_1295 = {-1L,0L,0x84379C0AL,0xF2CB969AL,0x60DE29E3L,-2L,-8L,0x76L,0L,0x8D9CL};
                        if ((**g_831))
                            break;
                        (*l_1282) &= (safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((((-6L) > func_68((*g_831), func_68(p_30, (!((safe_rshift_func_int8_t_s_u(((*l_33) & ((void*)0 != l_1294)), 2)) || p_28)), func_52(p_30, (*g_831)), l_1295), p_28, l_1296)) | p_29), g_6)) ^ p_29), g_860.f8)) != p_29), 0x77D1L));
                    }
                    if ((*g_110))
                    {
                        int *l_1297 = &g_789;
                        int *l_1298 = &g_860.f6;
                        int *l_1299 = &g_41.f5;
                        int *l_1300 = &g_860.f5;
                        int *l_1301 = &l_1296.f6;
                        int *l_1302 = &g_41.f5;
                        int *l_1303 = &l_1269.f6;
                        int *l_1304 = (void*)0;
                        int *l_1305 = &g_112.f5;
                        int *l_1306 = &g_789;
                        int *l_1307 = &g_34;
                        int *l_1308 = &l_1269.f5;
                        int *l_1309 = &g_112.f5;
                        int *l_1310 = &l_1269.f5;
                        int *l_1311 = &g_112.f5;
                        int *l_1312 = &l_1296.f5;
                        int *l_1313 = &l_1270;
                        int *l_1315 = &l_1314;
                        int *l_1316 = &g_112.f5;
                        int *l_1317 = &g_34;
                        int *l_1318 = &l_1269.f5;
                        int *l_1319 = &g_860.f6;
                        int *l_1320 = &g_41.f5;
                        int *l_1321 = &l_1269.f5;
                        int *l_1322 = (void*)0;
                        int *l_1323 = &l_1269.f6;
                        int *l_1324 = &g_41.f6;
                        int *l_1325 = &g_112.f5;
                        int *l_1326 = &l_1269.f6;
                        int *l_1327 = &g_112.f5;
                        int *l_1329 = &g_41.f6;
                        int *l_1330 = &g_860.f6;
                        int *l_1331 = (void*)0;
                        int *l_1332 = &l_1269.f6;
                        int *l_1333 = (void*)0;
                        int *l_1334 = &g_112.f6;
                        int *l_1335 = &l_1328;
                        int *l_1336 = &g_41.f6;
                        int *l_1337 = (void*)0;
                        int *l_1338 = &l_1296.f6;
                        int *l_1339 = &l_1296.f5;
                        int *l_1340 = &l_1296.f6;
                        int *l_1341 = &l_1296.f5;
                        int *l_1342 = (void*)0;
                        int *l_1343 = (void*)0;
                        int *l_1344 = (void*)0;
                        int *l_1345 = &l_1328;
                        int *l_1346 = (void*)0;
                        int *l_1347 = &g_789;
                        int *l_1348 = &l_1328;
                        int *l_1349 = &l_1270;
                        int *l_1350 = (void*)0;
                        int *l_1351 = &g_860.f6;
                        int *l_1352 = &l_1328;
                        int *l_1353 = (void*)0;
                        int *l_1354 = &l_1269.f6;
                        int *l_1355 = &l_1296.f6;
                        int *l_1356 = &g_34;
                        int *l_1357 = (void*)0;
                        int *l_1358 = &g_860.f5;
                        int *l_1359 = &l_1269.f5;
                        int *l_1360 = &g_860.f5;
                        int *l_1361 = &l_1328;
                        int *l_1362 = &l_1296.f6;
                        int *l_1363 = &l_1328;
                        int *l_1364 = &g_41.f5;
                        int *l_1365 = &g_112.f6;
                        int *l_1366 = (void*)0;
                        int *l_1367 = &g_860.f6;
                        int *l_1368 = &l_1314;
                        int *l_1369 = &l_1269.f6;
                        int *l_1370 = &l_1296.f6;
                        int *l_1371 = &g_112.f5;
                        int *l_1372 = &l_1328;
                        int *l_1373 = &g_112.f6;
                        int *l_1374 = &g_41.f6;
                        int *l_1375 = &g_112.f6;
                        int *l_1376 = &g_112.f5;
                        int *l_1377 = &l_1270;
                        int *l_1378 = &g_41.f6;
                        int *l_1379 = &l_1270;
                        int *l_1380 = &g_789;
                        int *l_1381 = &g_112.f6;
                        int *l_1382 = &l_1269.f6;
                        int *l_1383 = &g_41.f5;
                        int *l_1384 = (void*)0;
                        int *l_1385 = (void*)0;
                        int *l_1386 = &l_1269.f5;
                        int *l_1387 = &l_1314;
                        int *l_1388 = &l_1296.f5;
                        int *l_1389 = &g_112.f6;
                        int *l_1390 = &l_1269.f5;
                        int *l_1391 = &l_1296.f6;
                        int *l_1393 = &l_1314;
                        int *l_1394 = &g_112.f5;
                        int *l_1395 = (void*)0;
                        int *l_1396 = (void*)0;
                        int *l_1397 = (void*)0;
                        int *l_1398 = &g_789;
                        int l_1399 = 2L;
                        int *l_1400 = &g_41.f6;
                        int *l_1401 = &g_860.f6;
                        int *l_1402 = &l_1392;
                        int l_1403 = 1L;
                        int *l_1404 = &l_1392;
                        int *l_1405 = &l_1392;
                        int *l_1406 = &g_34;
                        int *l_1408 = &l_1407;
                        int *l_1410 = (void*)0;
                        int *l_1411 = &l_1296.f6;
                        int *l_1412 = &l_1269.f6;
                        int *l_1413 = &l_1409;
                        int *l_1414 = &l_1328;
                        int *l_1416 = &l_1269.f5;
                        int *l_1426 = &l_1296.f5;
                        int *l_1427 = (void*)0;
                        int *l_1428 = &g_34;
                        int *l_1430 = &l_1399;
                        int *l_1431 = &g_860.f5;
                        int *l_1432 = &l_1409;
                        int *l_1433 = &l_1415;
                        g_1417--;
                        g_1434--;
                    }
                    else
                    {
                        unsigned short l_1437 = 0x72C7L;
                        int l_1438 = (-1L);
                        (*g_853) = func_59(l_1437, &l_1421, p_28);
                        l_1438 ^= (*p_30);
                    }
                    (*l_1294) = (*g_852);
                }
                return g_112.f1;
            }
            else
            {
                if ((l_1296.f6 || p_29))
                {
lbl_1445:
                    for (l_1296.f4 = 15; (l_1296.f4 != 31); l_1296.f4 = safe_add_func_int16_t_s_s(l_1296.f4, 3))
                    {
                        unsigned char l_1441 = 0x8FL;
                        int *l_1444 = &l_1421;
                        l_1441++;
                        (*l_1444) ^= func_42(p_30, (*g_109));
                        if ((**g_109))
                            break;
                    }
                    (*g_110) ^= 1L;
                    if (g_112.f5)
                        goto lbl_1445;
                }
                else
                {
                    (*l_33) = (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((+g_41.f9) >= 0xD9L), (safe_lshift_func_uint8_t_u_s(0x8EL, p_28)))) | func_52(p_30, &l_1423)), l_1296.f4)), 0x1BL));
                    p_30 = func_45((*g_831));
                }
            }
            if ((((safe_add_func_int16_t_s_s(p_28, (safe_lshift_func_uint8_t_u_s((~(safe_lshift_func_int16_t_s_u(0x2414L, g_860.f1))), 0)))) <= (((safe_lshift_func_uint16_t_u_u(0x6436L, 3)) > ((!(*p_30)) | func_68(func_45(&l_1420), g_860.f4, (safe_rshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(p_29, 0L)) & (*l_33)), 2)), l_1466))) && 0x8EE9L)) & g_860.f7))
            {
                int *l_1480 = &l_1296.f6;
                struct S0 **l_1494 = &g_853;
                (*l_1480) |= (((p_28 == (((&g_110 == l_1467) != (*p_30)) >= ((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((**l_1467), 5UL)), ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(p_29, 0)), ((safe_mod_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((func_52((*g_109), &l_1392) & 255UL), g_41.f6)) <= p_28), (-1L))) || p_28))) != g_482))) || p_29))) > p_28) ^ p_29);
                for (g_860.f0 = 17; (g_860.f0 == 9); g_860.f0--)
                {
                }
                (*g_110) |= (safe_add_func_int8_t_s_s(p_28, (safe_sub_func_uint8_t_u_u((*l_1480), (0x9333L < (l_1494 == &g_853))))));
            }
            else
            {
                (**g_831) ^= func_68(p_30, (4L && g_41.f0), p_28, l_1269);
            }
            g_1589++;
        }
        else
        {
            unsigned l_1594 = 0x5ED7C0D1L;
            (**g_109) ^= (safe_add_func_uint32_t_u_u(l_1594, 0x6B3B99F9L));
        }
        (**g_109) = (*p_30);
    }
    for (g_1417 = (-25); (g_1417 > 2); ++g_1417)
    {
        int *l_1597 = (void*)0;
        struct S0 **l_1603 = &g_853;
        (*g_109) = l_1597;
    }
    return g_112.f4;
}







static int * func_35(int p_36, int * p_37, unsigned short p_38, struct S0 p_39)
{
    int *l_876 = &g_860.f6;
    unsigned l_917 = 0x5524F030L;
    int *l_920 = &g_2;
    struct S0 **l_925 = &g_853;
    int l_948 = 0L;
    int l_954 = 0x032D59FEL;
    int l_967 = 0x5117FF81L;
    int l_1015 = 1L;
    unsigned l_1085 = 0xB28AA653L;
    int l_1214 = 0x63E788D4L;
    char l_1239 = (-1L);
    short l_1254 = 0xE3F6L;
    if (func_42(func_45(&g_34), l_876))
    {
        unsigned char l_911 = 248UL;
        int l_912 = 6L;
        (*g_109) = func_64(g_326, func_45(func_45(p_37)), g_112.f7);
        l_912 = (g_671 > ((*l_876) | (safe_add_func_uint16_t_u_u(l_911, 0L))));
    }
    else
    {
        char l_918 = 0xEEL;
        int *l_919 = &g_14;
        struct S0 **l_924 = &g_853;
        int l_956 = (-4L);
        int l_969 = 4L;
        int l_989 = (-6L);
        int l_1018 = 0x7C07B1CCL;
        int l_1038 = (-1L);
        char l_1065 = 0xCAL;
        int l_1163 = 0x5732A9C9L;
        int l_1200 = (-10L);
        unsigned l_1221 = 0xF1D86CFFL;
        if (((safe_rshift_func_int8_t_s_u(func_52(p_37, func_64(p_39.f8, func_45((*g_109)), g_41.f9)), g_860.f4)) > (safe_add_func_uint32_t_u_u(((((((g_491 == l_917) != 0UL) < 0x0A1DL) != l_918) && 4294967295UL) == g_482), l_918))))
        {
            int *l_921 = &g_112.f6;
            int l_940 = 0x3340E268L;
            unsigned l_1076 = 0xE2C37ECDL;
            struct S0 *l_1101 = &g_41;
            (*g_109) = l_919;
            l_921 = l_920;
            if (((safe_rshift_func_uint8_t_u_s((*l_920), 3)) <= (l_924 == l_925)))
            {
                int *l_926 = &g_41.f5;
                int *l_927 = &g_860.f5;
                int *l_928 = &g_41.f6;
                int *l_929 = &g_789;
                int *l_930 = (void*)0;
                int *l_931 = &g_860.f5;
                int *l_932 = &g_789;
                int *l_933 = &g_789;
                int *l_934 = &g_112.f5;
                int *l_935 = (void*)0;
                int *l_936 = &g_41.f5;
                int *l_937 = &g_34;
                int *l_938 = &g_860.f5;
                int *l_939 = &g_789;
                int *l_941 = &g_112.f5;
                int *l_942 = (void*)0;
                int *l_943 = &l_940;
                int *l_944 = (void*)0;
                int *l_945 = &g_34;
                int *l_946 = (void*)0;
                int *l_947 = &g_112.f6;
                int *l_949 = &g_860.f5;
                int *l_950 = &g_34;
                int *l_951 = &l_948;
                int *l_952 = &g_34;
                int *l_953 = &g_41.f6;
                int *l_955 = (void*)0;
                int *l_957 = (void*)0;
                int *l_958 = (void*)0;
                int *l_959 = &g_860.f5;
                int *l_960 = &l_954;
                int *l_961 = &g_112.f5;
                int *l_962 = &g_789;
                int *l_963 = &g_860.f5;
                int *l_964 = &g_112.f5;
                int *l_965 = &g_789;
                int *l_966 = (void*)0;
                int *l_968 = &g_41.f5;
                int *l_970 = &l_956;
                int *l_971 = &g_41.f6;
                int *l_972 = &g_112.f6;
                int *l_973 = &l_956;
                int *l_974 = (void*)0;
                int l_975 = 5L;
                int *l_976 = &g_41.f6;
                int *l_977 = (void*)0;
                int *l_978 = (void*)0;
                int *l_979 = (void*)0;
                int *l_980 = (void*)0;
                int *l_981 = &g_41.f5;
                int *l_982 = &g_112.f5;
                int *l_983 = &g_41.f6;
                int *l_984 = &l_956;
                int l_985 = 0x3BD9299BL;
                int *l_986 = &g_860.f6;
                int *l_987 = &g_41.f5;
                int *l_988 = &l_975;
                int *l_990 = &l_967;
                int *l_991 = (void*)0;
                int *l_992 = &l_985;
                int *l_993 = &l_948;
                int *l_994 = (void*)0;
                int *l_995 = &g_34;
                int *l_996 = &g_860.f6;
                int *l_997 = (void*)0;
                int *l_998 = &g_112.f5;
                int *l_999 = (void*)0;
                int *l_1000 = (void*)0;
                int *l_1001 = &l_969;
                int l_1002 = 0x13B7AA85L;
                int *l_1003 = &g_41.f6;
                int *l_1004 = &g_41.f5;
                int *l_1005 = &g_112.f5;
                int *l_1006 = &l_956;
                int *l_1007 = (void*)0;
                int *l_1008 = (void*)0;
                int *l_1009 = &l_940;
                int *l_1010 = (void*)0;
                int *l_1011 = &g_860.f6;
                int *l_1012 = &l_989;
                int l_1013 = 0L;
                int *l_1014 = &l_969;
                int *l_1016 = &g_41.f6;
                int *l_1017 = (void*)0;
                int *l_1019 = &l_1002;
                int *l_1020 = (void*)0;
                int *l_1021 = &l_940;
                int *l_1022 = &l_1018;
                int *l_1023 = &l_1015;
                int *l_1024 = &l_975;
                int *l_1025 = &g_41.f6;
                int *l_1026 = &l_1002;
                int *l_1027 = &l_956;
                int *l_1028 = (void*)0;
                int *l_1029 = &l_989;
                int *l_1030 = &g_112.f6;
                int *l_1031 = &l_975;
                int *l_1032 = &l_1018;
                int *l_1033 = &l_940;
                int *l_1034 = &l_1013;
                int *l_1035 = &l_940;
                int *l_1036 = &l_956;
                int *l_1037 = &g_34;
                int *l_1039 = &g_41.f6;
                --g_1040;
            }
            else
            {
                unsigned l_1053 = 4294967295UL;
                unsigned l_1054 = 0x6613F7DEL;
                struct S0 **l_1064 = &g_853;
                if (((*l_919) | (((safe_rshift_func_int8_t_s_s(((((4L <= (safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(g_326, func_52(p_37, func_45((*g_109))))), (*l_919))) >= 0xBA01L) != l_1053), g_508)) | g_860.f3), 15))) > p_39.f3) >= g_860.f0) & g_41.f6), 0)) & 4L) > (*l_876))))
                {
                    unsigned l_1058 = 1UL;
lbl_1086:
                    if ((0L || (g_436 ^ g_41.f7)))
                    {
                        unsigned l_1057 = 0UL;
                        (*l_876) |= l_1054;
                        (*l_876) = (safe_sub_func_uint8_t_u_u(g_41.f1, l_1057));
                    }
                    else
                    {
lbl_1061:
                        ++l_1058;
                        (*l_876) = p_39.f0;
                        if (g_860.f0)
                            goto lbl_1061;
                    }
                    if ((*g_110))
                    {
                        (*l_876) = (safe_lshift_func_int16_t_s_u(g_112.f8, (((l_1064 != (void*)0) && (*l_920)) && 1L)));
                    }
                    else
                    {
                        int *l_1066 = &g_860.f6;
                        int *l_1067 = (void*)0;
                        int *l_1068 = &g_34;
                        int *l_1069 = (void*)0;
                        int *l_1070 = &g_112.f6;
                        int *l_1071 = &g_112.f6;
                        int *l_1072 = (void*)0;
                        int *l_1073 = (void*)0;
                        int *l_1074 = &g_860.f6;
                        int *l_1075 = (void*)0;
                        l_1065 &= 0xEC6D11BDL;
                        l_1076--;
                        (*l_876) = (((((safe_rshift_func_int8_t_s_s(0L, 2)) < (**g_109)) && (safe_sub_func_int16_t_s_s((p_39.f1 == p_39.f7), ((p_39.f9 | (safe_lshift_func_int16_t_s_s(4L, 14))) < (**g_109))))) & (*l_921)) | l_1085);
                        if (p_39.f1)
                            goto lbl_1086;
                    }
                }
                else
                {
                    unsigned short l_1098 = 0x7C27L;
                    (*g_831) = p_37;
                    if ((g_860.f0 >= ((*l_921) > (safe_sub_func_uint16_t_u_u((!p_39.f2), (safe_rshift_func_uint8_t_u_u(l_1054, 7)))))))
                    {
                        (*l_876) ^= ((safe_mul_func_int8_t_s_s((((func_68(&l_940, g_2, g_326, p_39) <= 0x7888L) > 0UL) == g_860.f4), p_39.f3)) > 0L);
                    }
                    else
                    {
                        unsigned l_1097 = 0x1725513BL;
                        l_1097 = (*l_919);
                        (**l_1064) = func_59(l_1097, p_37, (l_1098 ^ p_39.f1));
                        (*g_831) = p_37;
                    }
                    (*g_831) = &l_940;
                    (**g_109) = (safe_lshift_func_uint16_t_u_s((g_860.f5 | (8L ^ g_860.f0)), (l_1101 == &p_39)));
                }
                (*g_109) = (*g_831);
            }
        }
        else
        {
            int *l_1102 = &l_967;
            int *l_1103 = &l_948;
            int *l_1104 = (void*)0;
            int *l_1105 = &l_967;
            int *l_1106 = &g_34;
            int *l_1107 = &l_969;
            int *l_1108 = &l_1018;
            int *l_1109 = &g_41.f5;
            int *l_1110 = &l_956;
            int *l_1111 = &l_1018;
            int *l_1112 = (void*)0;
            int *l_1113 = &l_989;
            int *l_1114 = (void*)0;
            int *l_1115 = &l_948;
            int *l_1116 = &g_112.f6;
            int *l_1117 = &g_860.f5;
            int *l_1118 = &l_969;
            int *l_1119 = &l_1015;
            int *l_1120 = (void*)0;
            int *l_1121 = &g_41.f5;
            int *l_1122 = &g_860.f5;
            int *l_1123 = &l_948;
            int *l_1124 = &l_989;
            int *l_1125 = (void*)0;
            int *l_1126 = (void*)0;
            char l_1127 = 0x2DL;
            int *l_1128 = &g_789;
            int *l_1129 = &g_789;
            int *l_1130 = &g_41.f6;
            int *l_1131 = &g_789;
            int *l_1132 = &l_1038;
            int *l_1133 = &l_1038;
            int *l_1134 = &g_789;
            int *l_1135 = &l_1038;
            int *l_1136 = &l_1038;
            int *l_1137 = &g_860.f5;
            int *l_1138 = &l_1015;
            int *l_1139 = (void*)0;
            int *l_1140 = (void*)0;
            int *l_1141 = (void*)0;
            int *l_1142 = &l_1038;
            int *l_1143 = (void*)0;
            int *l_1144 = &g_789;
            int *l_1145 = &l_1018;
            int *l_1146 = &g_41.f5;
            int *l_1147 = &g_41.f5;
            int *l_1148 = (void*)0;
            int *l_1149 = &g_34;
            int *l_1150 = &l_989;
            int *l_1151 = &g_112.f5;
            int *l_1152 = &l_954;
            int *l_1153 = &g_34;
            int *l_1154 = (void*)0;
            int *l_1155 = &g_34;
            int *l_1156 = &g_789;
            int *l_1157 = &g_112.f5;
            int *l_1158 = &l_948;
            int *l_1159 = &l_956;
            int *l_1160 = &g_34;
            int *l_1161 = &l_967;
            int *l_1162 = &l_989;
            int *l_1164 = &l_948;
            int *l_1165 = (void*)0;
            int *l_1166 = (void*)0;
            int *l_1167 = &l_989;
            int *l_1168 = &l_1015;
            int *l_1169 = &l_1018;
            int *l_1170 = &l_1163;
            int *l_1171 = (void*)0;
            int *l_1172 = &l_1163;
            int *l_1173 = &g_860.f5;
            int *l_1174 = (void*)0;
            int *l_1175 = &l_969;
            int *l_1176 = &g_860.f6;
            int *l_1177 = &g_789;
            int *l_1178 = &l_954;
            int *l_1179 = &g_41.f5;
            int *l_1180 = &l_954;
            int *l_1181 = &l_1038;
            int *l_1182 = &g_112.f6;
            int *l_1183 = &l_948;
            int *l_1184 = &l_969;
            int l_1185 = 0x6D7F67F8L;
            int l_1186 = 0x045AE305L;
            int *l_1187 = &l_1186;
            int *l_1188 = &l_967;
            int *l_1189 = &l_1038;
            int *l_1190 = &l_1185;
            int *l_1191 = &l_1186;
            int *l_1192 = &l_948;
            int *l_1193 = &l_989;
            int *l_1194 = (void*)0;
            int *l_1195 = (void*)0;
            int *l_1196 = (void*)0;
            int *l_1197 = (void*)0;
            int *l_1198 = &g_34;
            int *l_1199 = &l_1185;
            int *l_1201 = &l_954;
            int *l_1202 = &l_1200;
            int *l_1203 = &l_1018;
            int *l_1204 = &l_1186;
            int *l_1205 = &g_112.f5;
            int *l_1206 = &g_41.f5;
            int *l_1207 = (void*)0;
            int *l_1208 = (void*)0;
            int *l_1209 = &l_956;
            int *l_1210 = &l_1018;
            int *l_1211 = (void*)0;
            int *l_1212 = &l_1015;
            int l_1213 = 0x0D2439B6L;
            int *l_1215 = &l_948;
            int *l_1216 = (void*)0;
            int *l_1217 = (void*)0;
            struct S0 *l_1242 = &g_112;
            g_1218--;
            ++l_1221;
            (*g_109) = (void*)0;
            if ((p_36 > (safe_add_func_int16_t_s_s((g_436 || (*l_1133)), (~((safe_mod_func_int32_t_s_s(p_39.f4, 0x7530FAA4L)) >= (safe_add_func_int16_t_s_s(g_860.f6, ((safe_sub_func_int8_t_s_s(0xBFL, g_860.f5)) == g_112.f5)))))))))
            {
                (*g_831) = &l_1185;
            }
            else
            {
                unsigned l_1247 = 0x30259914L;
                for (g_860.f2 = 0; (g_860.f2 <= 21); ++g_860.f2)
                {
                    unsigned l_1234 = 1UL;
                    (*l_1162) ^= l_1234;
                    for (l_1214 = 0; (l_1214 >= 19); l_1214 = safe_add_func_uint32_t_u_u(l_1214, 2))
                    {
                        (*g_831) = p_37;
                    }
                }
                (*l_1137) &= (safe_add_func_int8_t_s_s(((&p_39 != l_1242) & ((*l_920) && p_39.f9)), (safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s((((g_326 < l_1247) == (((((&g_110 != (void*)0) >= (g_6 ^ 2L)) | p_39.f8) == 0xFF23EF06L) > p_39.f2)) != 0x217F93B2L), 0xD8L)) != (*l_1156)), l_1247))));
                (*l_1155) &= func_68(func_45(p_37), g_112.f8, g_482, g_112);
            }
        }
        return p_37;
    }
    for (g_112.f0 = (-28); (g_112.f0 == 27); g_112.f0++)
    {
        int *l_1255 = &l_948;
        for (p_39.f5 = 0; (p_39.f5 > 21); p_39.f5 = safe_add_func_int16_t_s_s(p_39.f5, 4))
        {
            (**l_925) = p_39;
        }
        (**g_109) &= l_1254;
        p_37 = l_1255;
    }
    return (*g_831);
}







static int func_42(int * p_43, int * p_44)
{
    unsigned short l_882 = 65535UL;
    int l_899 = 2L;
    int l_904 = 0L;
    for (g_41.f3 = 0; (g_41.f3 > 23); g_41.f3 = safe_add_func_uint32_t_u_u(g_41.f3, 3))
    {
        unsigned char l_879 = 1UL;
        int l_890 = (-1L);
        if ((l_879 | (safe_rshift_func_int8_t_s_s(l_882, 5))))
        {
            (*g_110) = (!(*p_43));
        }
        else
        {
            unsigned l_891 = 18446744073709551615UL;
            int *l_897 = &g_112.f5;
            for (g_41.f8 = 6; (g_41.f8 < (-12)); --g_41.f8)
            {
                int *l_885 = (void*)0;
                int *l_886 = (void*)0;
                int *l_887 = (void*)0;
                int *l_888 = &g_112.f5;
                int *l_889 = &g_860.f6;
                struct S0 l_898 = {-1L,-1L,0xA593B0E3L,2UL,0x9B296555L,0xB7C868F3L,0xAD7B503AL,0L,0L,0L};
                --l_891;
                l_899 ^= ((safe_unary_minus_func_uint16_t_u((0xBBL || l_882))) || ((&g_110 == &g_110) & (safe_sub_func_int32_t_s_s(func_68(p_43, func_52(l_897, p_44), (p_43 != p_43), l_898), g_41.f0))));
                for (g_860.f2 = 28; (g_860.f2 < 23); --g_860.f2)
                {
                    (**g_831) |= (safe_lshift_func_int8_t_s_u((g_41.f0 != 0UL), 6));
                    if ((**g_831))
                    {
                        return (**g_109);
                    }
                    else
                    {
                        return l_904;
                    }
                }
            }
        }
        if (func_68(&l_890, g_540, (0UL > (*p_43)), (*g_853)))
        {
            return (*g_110);
        }
        else
        {
            (*g_109) = (*g_831);
            l_890 = (safe_mul_func_int16_t_s_s(func_52(p_43, (*g_831)), (safe_mul_func_uint8_t_u_u(246UL, l_879))));
            return (*p_43);
        }
    }
    return (*p_43);
}







static int * func_45(int * p_46)
{
    unsigned l_51 = 18446744073709551615UL;
    int *l_875 = &g_41.f6;
    for (g_41.f0 = 0; (g_41.f0 < 24); g_41.f0 = safe_add_func_uint8_t_u_u(g_41.f0, 5))
    {
        unsigned l_63 = 0x9B6AF4A9L;
        int l_75 = 6L;
        struct S0 l_76 = {0x67B22F10L,0xEEFFBB89L,0x1F73439DL,0xF4693715L,4294967288UL,-3L,1L,0xBFL,0x56L,0xE04BL};
        int *l_544 = &g_14;
        int *l_854 = &g_789;
    }
    return (*g_831);
}







static unsigned char func_52(int * p_53, int * p_54)
{
    unsigned short l_849 = 65535UL;
    struct S0 *l_851 = &g_41;
    struct S0 **l_850 = &l_851;
    g_112 = func_59((((safe_sub_func_uint32_t_u_u(g_112.f6, (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((**g_109), (((func_68(p_53, (g_112.f6 >= (l_849 >= (((g_112.f9 | (0x0A70L | (l_850 != g_852))) > l_849) & 1UL))), g_491, (*l_851)) & 253UL) ^ (*p_54)) == 0xF52E092DL))), l_849)))) ^ g_540) ^ l_849), (*g_831), g_112.f5);
    return g_522;
}







static int * func_55(struct S0 p_56, char p_57, int * p_58)
{
    char l_551 = 1L;
    struct S0 l_553 = {0xEE83EF03L,1L,0xBA02E1FFL,18446744073709551606UL,0UL,0xEA6BC37FL,0x6474447BL,0x29L,0x0BL,4L};
    int **l_557 = &g_110;
    int l_582 = (-1L);
    int *l_590 = &g_2;
    int l_808 = 0xE408F22EL;
    int l_814 = 0x78B7C74BL;
    struct S0 *l_838 = (void*)0;
    int *l_839 = &g_2;
    int *l_840 = &l_814;
    struct S0 *l_841 = (void*)0;
    struct S0 *l_842 = (void*)0;
    if ((safe_sub_func_uint32_t_u_u(g_41.f1, (safe_sub_func_int32_t_s_s((*p_58), (safe_mod_func_uint8_t_u_u(l_551, p_56.f5)))))))
    {
        (*g_109) = p_58;
    }
    else
    {
        int l_552 = 0x761CE2FEL;
        struct S0 l_583 = {0x92015246L,8L,1UL,0UL,4294967295UL,0x99DC52A5L,-1L,0L,0xCCL,1L};
        int l_661 = 0x6004F485L;
        short l_673 = 0xD349L;
        int *l_680 = &l_553.f6;
        int *l_681 = &g_112.f5;
        int *l_682 = &g_112.f6;
        int *l_683 = &l_553.f6;
        int *l_684 = &l_583.f6;
        int *l_685 = &l_582;
        int *l_686 = &l_583.f5;
        int *l_687 = &g_34;
        int *l_688 = &l_552;
        int *l_689 = &l_553.f5;
        int *l_690 = &g_41.f5;
        int *l_691 = &g_112.f5;
        int *l_692 = &l_552;
        int *l_693 = (void*)0;
        int *l_694 = &g_112.f5;
        int *l_695 = &g_112.f6;
        int *l_696 = &l_582;
        int *l_697 = &g_112.f5;
        int *l_698 = &l_583.f6;
        int *l_699 = &g_41.f6;
        int *l_700 = (void*)0;
        int *l_701 = &l_583.f5;
        int *l_702 = &g_41.f6;
        int *l_703 = &g_112.f5;
        int *l_704 = &g_41.f5;
        int *l_705 = &g_112.f6;
        int *l_706 = &l_661;
        int *l_707 = &l_553.f6;
        int *l_708 = &g_41.f5;
        int *l_709 = &l_553.f5;
        int *l_710 = &l_553.f5;
        int *l_711 = &l_583.f5;
        int *l_712 = (void*)0;
        int *l_713 = &g_41.f6;
        int *l_714 = &g_112.f6;
        int *l_715 = &g_112.f6;
        int *l_716 = &l_583.f5;
        int *l_717 = &l_553.f6;
        int *l_718 = &l_552;
        int *l_719 = (void*)0;
        int *l_720 = &g_34;
        int *l_721 = (void*)0;
        int *l_722 = (void*)0;
        int *l_723 = &g_112.f5;
        int *l_724 = &l_553.f5;
        int *l_725 = &g_41.f6;
        int *l_726 = &l_583.f6;
        int *l_727 = (void*)0;
        int *l_728 = (void*)0;
        int *l_729 = &g_41.f6;
        int *l_730 = &l_583.f6;
        int *l_731 = &l_582;
        int l_732 = 0x18161534L;
        int *l_733 = &l_582;
        int *l_734 = &l_582;
        int *l_735 = &l_583.f5;
        int *l_736 = &l_583.f5;
        int *l_737 = &l_553.f5;
        int *l_738 = &g_41.f6;
        int *l_739 = (void*)0;
        int *l_740 = &g_41.f6;
        int *l_741 = (void*)0;
        int l_742 = (-6L);
        int *l_743 = &l_552;
        int *l_744 = &l_582;
        int *l_745 = &g_112.f6;
        int *l_746 = &l_553.f6;
        int l_747 = 1L;
        int *l_748 = &g_41.f6;
        int *l_749 = &l_583.f5;
        int *l_750 = &l_553.f6;
        int *l_751 = (void*)0;
        int *l_752 = (void*)0;
        int l_753 = 0x263F55E9L;
        int *l_754 = (void*)0;
        int *l_755 = &l_553.f5;
        int *l_756 = &l_553.f5;
        int *l_757 = (void*)0;
        int *l_758 = (void*)0;
        int *l_759 = (void*)0;
        int *l_760 = (void*)0;
        int *l_761 = &l_583.f5;
        int *l_762 = &l_553.f5;
        int *l_763 = &g_34;
        int *l_764 = &l_552;
        int *l_765 = &l_552;
        int *l_766 = (void*)0;
        int *l_767 = &l_553.f6;
        int *l_768 = &g_112.f6;
        int *l_769 = &l_552;
        int *l_770 = &l_742;
        int *l_771 = (void*)0;
        int *l_772 = &g_41.f5;
        int *l_773 = &l_553.f6;
        int *l_774 = &g_112.f6;
        int *l_775 = &l_753;
        int *l_776 = &l_742;
        int *l_777 = &g_41.f6;
        int *l_778 = &l_583.f6;
        int *l_779 = (void*)0;
        int *l_780 = &l_552;
        int *l_781 = (void*)0;
        int *l_782 = &l_553.f5;
        int *l_783 = (void*)0;
        int *l_784 = &l_742;
        int *l_785 = &g_41.f6;
        int *l_786 = &l_553.f5;
        int *l_787 = &l_742;
        int *l_788 = &g_41.f5;
        int *l_790 = &g_41.f6;
        int *l_791 = (void*)0;
        int *l_792 = (void*)0;
        int *l_793 = &l_747;
        int *l_794 = &g_789;
        int *l_795 = &l_583.f6;
        int *l_796 = &l_553.f6;
        int *l_797 = &g_789;
        int *l_798 = (void*)0;
        int *l_799 = &l_661;
        int *l_800 = &l_583.f6;
        int *l_801 = &g_34;
        int *l_802 = &g_112.f6;
        int *l_803 = &l_583.f6;
        int *l_804 = &l_583.f5;
        int *l_805 = &g_112.f6;
        int l_806 = 0x86AA3A4AL;
        int *l_807 = &l_583.f5;
        int *l_809 = &l_661;
        int *l_810 = &l_808;
        int *l_811 = &g_41.f5;
        int *l_812 = &l_747;
        int *l_813 = (void*)0;
        int *l_815 = (void*)0;
        int *l_816 = &l_582;
        l_553 = func_59(l_552, (*g_109), l_551);
        if ((**g_109))
        {
            int l_556 = 0xD97A3D97L;
            int *l_577 = &g_6;
            (*g_110) &= ((safe_lshift_func_int8_t_s_u(l_556, (0L > ((((!(0xF07505B7L ^ func_68(p_58, p_57, ((l_557 != l_557) <= ((safe_mul_func_uint8_t_u_u(p_57, 246UL)) && g_112.f1)), g_41))) | g_41.f8) >= 0xFFDE4E16L) == 249UL)))) > l_556);
            (**l_557) = (((((*l_557) != (void*)0) && (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(g_112.f5, 3)), 5))) < (safe_sub_func_int16_t_s_s((~l_552), l_556))) <= ((safe_unary_minus_func_int8_t_s((func_68(p_58, ((((*p_58) < (safe_mod_func_int8_t_s_s((!(-7L)), 5UL))) < p_56.f2) ^ 0x338062D2L), p_56.f4, p_56) < p_57))) == p_56.f3));
            (**g_109) = (safe_mul_func_int16_t_s_s(((((p_56.f5 || (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(g_112.f0, (((*g_109) == (*g_109)) & p_56.f2))) < 0x7FD038DBL), g_112.f1)), func_68(l_577, (*l_577), p_56.f2, p_56)))) <= g_34) != l_552) > p_56.f0), (*l_577)));
            if (((safe_rshift_func_uint8_t_u_s((l_577 != p_58), 3)) | (safe_rshift_func_uint8_t_u_s(func_68(p_58, l_582, p_56.f9, l_583), 0))))
            {
                int *l_591 = &l_582;
                (*g_110) = (*l_577);
                (*l_591) &= ((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(p_56.f8, ((void*)0 != &l_577))), g_34)) > (safe_sub_func_int16_t_s_s(func_68(&l_552, p_56.f3, ((func_68(l_590, g_41.f9, p_56.f3, l_583) == p_56.f6) > 0x31BBL), p_56), p_56.f9)));
            }
            else
            {
                struct S0 *l_597 = &g_41;
                struct S0 **l_596 = &l_597;
                int *l_600 = &l_552;
                (*g_110) ^= ((safe_lshift_func_int16_t_s_s((*l_577), (((((*l_590) & (*l_577)) & g_2) & ((p_56.f7 > (g_482 ^ (safe_mul_func_int8_t_s_s(0xA0L, p_56.f1)))) <= ((void*)0 == &g_112))) >= p_57))) <= g_482);
                (*l_596) = &p_56;
                (*l_600) &= (safe_lshift_func_uint16_t_u_s((**l_557), 9));
            }
        }
        else
        {
            int *l_601 = (void*)0;
            int *l_602 = &l_582;
            int *l_603 = &g_112.f6;
            int *l_604 = &l_553.f5;
            int *l_605 = &g_41.f6;
            int *l_606 = &l_583.f5;
            int *l_607 = &g_41.f5;
            int *l_608 = &l_582;
            int *l_609 = &l_582;
            int *l_610 = &l_553.f6;
            int *l_611 = &l_583.f6;
            int *l_612 = &g_41.f5;
            int *l_613 = &g_41.f5;
            int *l_614 = &l_553.f5;
            int l_615 = (-2L);
            int *l_616 = &g_112.f6;
            int *l_617 = &g_41.f5;
            int *l_618 = &g_112.f6;
            int *l_619 = (void*)0;
            int *l_620 = (void*)0;
            int *l_621 = &l_583.f5;
            int l_622 = (-10L);
            int *l_623 = &g_112.f5;
            int l_624 = (-4L);
            int *l_625 = &l_583.f6;
            int *l_626 = &l_583.f6;
            int *l_627 = (void*)0;
            int *l_628 = (void*)0;
            int *l_629 = &l_583.f5;
            int *l_630 = &l_582;
            int *l_631 = &g_112.f5;
            int *l_632 = &l_582;
            int *l_633 = (void*)0;
            int *l_634 = (void*)0;
            int *l_635 = &l_622;
            int *l_636 = &l_583.f5;
            int *l_637 = &l_552;
            int *l_638 = &g_112.f6;
            int l_639 = 0x133A3F08L;
            int *l_640 = (void*)0;
            int *l_641 = &l_583.f6;
            int *l_642 = &l_552;
            int *l_643 = &l_553.f6;
            int *l_644 = &l_639;
            int *l_645 = (void*)0;
            int *l_646 = &l_622;
            int *l_647 = &l_624;
            int *l_648 = &l_615;
            int *l_649 = &l_622;
            int *l_650 = &g_34;
            int *l_651 = &g_112.f5;
            int *l_652 = (void*)0;
            int *l_653 = &g_112.f6;
            int *l_654 = (void*)0;
            int *l_655 = &g_112.f6;
            int *l_656 = &g_112.f5;
            int *l_657 = (void*)0;
            int *l_658 = &l_583.f5;
            int *l_659 = &l_553.f6;
            int *l_660 = (void*)0;
            int *l_662 = &l_552;
            int *l_663 = (void*)0;
            int *l_664 = &l_552;
            int *l_665 = &l_583.f6;
            int *l_666 = &g_41.f6;
            int *l_667 = &g_34;
            int *l_668 = (void*)0;
            int *l_669 = &g_41.f6;
            int *l_670 = (void*)0;
            int *l_672 = (void*)0;
            int *l_674 = &l_639;
            int l_675 = 0xC3E7B2A8L;
            int *l_676 = &g_112.f5;
            (*l_557) = func_64((!l_583.f5), p_58, p_56.f2);
            (*g_109) = (*g_109);
            (*l_602) = (*g_110);
            --g_677;
        }
        ++g_817;
        for (g_817 = 10; (g_817 != 30); ++g_817)
        {
            int *l_822 = &g_112.f5;
            return l_822;
        }
    }
    (*l_840) = func_68(l_839, (*l_590), g_671, g_41);
    g_112 = g_112;
    return (*l_557);
}







static struct S0 func_59(unsigned char p_60, int * p_61, unsigned p_62)
{
    char l_329 = 0x47L;
    int *l_330 = &g_41.f6;
    int l_331 = 0x283C7005L;
    int *l_332 = &g_41.f5;
    int *l_333 = &g_41.f5;
    int *l_334 = &g_41.f5;
    int *l_335 = &g_41.f6;
    int *l_336 = &g_112.f6;
    int *l_337 = &g_112.f5;
    int *l_338 = &l_331;
    int *l_339 = (void*)0;
    int l_340 = (-2L);
    int l_341 = 0x4C64479FL;
    int *l_342 = &g_112.f5;
    int *l_343 = (void*)0;
    int *l_344 = &g_41.f6;
    int l_345 = (-2L);
    int *l_346 = &l_331;
    int *l_347 = &g_41.f5;
    unsigned l_348 = 0UL;
    int *l_351 = &l_340;
    int *l_352 = &g_112.f6;
    int *l_353 = (void*)0;
    int *l_354 = (void*)0;
    int *l_355 = &l_340;
    int *l_356 = &l_341;
    int *l_357 = &g_112.f6;
    int *l_358 = &g_34;
    int *l_359 = &g_41.f6;
    int *l_360 = &g_34;
    int *l_361 = &g_34;
    int *l_362 = &l_345;
    int *l_363 = &g_34;
    int *l_364 = &l_341;
    int *l_365 = &g_112.f5;
    int *l_366 = &l_331;
    int *l_367 = &g_34;
    int *l_368 = &l_331;
    int *l_369 = &g_112.f5;
    int *l_370 = &l_340;
    int *l_371 = &l_341;
    int *l_372 = &g_41.f5;
    int *l_373 = &g_112.f6;
    int l_374 = 1L;
    int *l_375 = (void*)0;
    int *l_376 = (void*)0;
    int l_377 = 8L;
    int *l_378 = &l_345;
    int *l_379 = &l_345;
    int l_380 = 6L;
    int *l_381 = &g_34;
    int *l_382 = (void*)0;
    int *l_383 = &g_34;
    int *l_384 = (void*)0;
    int *l_385 = &l_341;
    int *l_386 = &l_374;
    int l_387 = 0L;
    int *l_388 = &l_387;
    int *l_389 = &l_331;
    int l_390 = (-1L);
    int l_391 = 0L;
    int *l_392 = &l_345;
    int *l_393 = &l_341;
    int *l_394 = &l_390;
    int *l_395 = &l_374;
    int *l_396 = &l_390;
    int *l_397 = (void*)0;
    int *l_398 = &g_41.f6;
    int *l_399 = &g_34;
    int *l_400 = (void*)0;
    int l_401 = 0x82143E87L;
    int l_402 = 0L;
    int *l_403 = &l_377;
    int *l_404 = &l_401;
    int *l_405 = &l_331;
    int l_406 = (-2L);
    int *l_407 = &g_41.f6;
    int *l_408 = &l_374;
    int *l_409 = &g_34;
    int *l_410 = &l_341;
    int *l_411 = &l_402;
    int *l_412 = &g_34;
    int *l_413 = (void*)0;
    int l_414 = 0x2DDCB824L;
    int l_415 = 1L;
    int *l_416 = &l_401;
    int *l_417 = &l_374;
    int *l_418 = (void*)0;
    int *l_419 = &l_377;
    int *l_420 = &l_402;
    int *l_421 = &l_401;
    int *l_422 = &l_331;
    int *l_423 = &l_331;
    int *l_424 = &g_41.f6;
    int *l_425 = (void*)0;
    int *l_426 = &g_41.f5;
    int *l_427 = &l_391;
    int *l_428 = &g_41.f5;
    int *l_429 = &l_345;
    int *l_430 = &l_414;
    int *l_431 = &l_390;
    int l_432 = 6L;
    int l_433 = 1L;
    int *l_434 = &l_380;
    int *l_435 = &l_340;
    int *l_437 = &l_415;
    int *l_438 = &l_377;
    int *l_439 = &l_340;
    int l_440 = (-1L);
    int *l_441 = (void*)0;
    int l_442 = 4L;
    int *l_443 = &l_377;
    int l_444 = 0x46FC3171L;
    int *l_445 = &l_402;
    int *l_446 = (void*)0;
    int *l_447 = &l_433;
    int *l_448 = &l_331;
    int *l_449 = &l_340;
    int *l_450 = (void*)0;
    int l_451 = (-1L);
    int *l_452 = &l_415;
    int *l_453 = &l_442;
    int *l_454 = &l_340;
    int *l_455 = &g_41.f5;
    int *l_456 = &l_374;
    int *l_457 = &l_377;
    int *l_458 = &l_387;
    int *l_459 = &l_331;
    int *l_460 = &l_451;
    int *l_461 = (void*)0;
    int l_462 = (-1L);
    int l_463 = 0x78492DA3L;
    int *l_464 = &l_463;
    int l_465 = 0xD96CFDBAL;
    int *l_466 = &l_432;
    int *l_467 = &l_432;
    int *l_468 = &g_34;
    int *l_469 = &g_34;
    int *l_470 = &l_390;
    int *l_471 = &l_380;
    int *l_472 = &l_406;
    int *l_473 = &l_442;
    int *l_474 = &l_440;
    int *l_475 = &g_34;
    int *l_476 = &l_340;
    int *l_477 = &l_345;
    int l_478 = 0L;
    int *l_479 = &g_112.f6;
    int *l_480 = &l_341;
    int *l_481 = &l_387;
    int *l_483 = &l_414;
    int *l_484 = (void*)0;
    int l_485 = (-1L);
    int l_486 = 1L;
    int l_487 = 1L;
    int *l_488 = &l_331;
    int *l_489 = &l_487;
    int *l_490 = &l_391;
    int *l_492 = &l_432;
    int *l_493 = &g_112.f5;
    int *l_494 = (void*)0;
    int *l_495 = &l_486;
    int *l_496 = &l_485;
    int *l_497 = &l_377;
    int *l_498 = &g_34;
    int *l_499 = (void*)0;
    int l_500 = 1L;
    int *l_501 = &l_485;
    int *l_502 = (void*)0;
    int *l_503 = &l_340;
    int *l_504 = &l_391;
    int *l_505 = &l_406;
    int *l_506 = &l_451;
    int *l_507 = &l_444;
    int *l_509 = &l_440;
    int *l_510 = &g_112.f6;
    int l_511 = 0xE81986E9L;
    int *l_512 = &l_380;
    int *l_513 = &l_414;
    int *l_514 = &l_380;
    int *l_515 = &l_406;
    int *l_516 = &l_377;
    int l_517 = 0xA8059646L;
    int *l_518 = (void*)0;
    int *l_519 = &l_478;
    int *l_520 = &l_374;
    int *l_521 = (void*)0;
    int *l_523 = &l_406;
    int *l_524 = &l_415;
    int *l_525 = &l_511;
    int *l_526 = &l_341;
    int *l_527 = &l_433;
    int *l_528 = (void*)0;
    int *l_529 = (void*)0;
    int *l_530 = &g_34;
    int *l_531 = &g_112.f6;
    int *l_532 = &g_41.f5;
    int *l_533 = &g_41.f6;
    int *l_534 = (void*)0;
    int *l_535 = &l_415;
    int l_536 = 0xDC97C7E4L;
    int *l_537 = (void*)0;
    int *l_538 = &l_442;
    int l_539 = 0xD9E19FCCL;
    struct S0 l_543 = {-1L,0L,0x522A98C1L,0xE5E74D5AL,2UL,1L,1L,-4L,-1L,-7L};
    l_348--;
    ++g_540;
    (*l_464) ^= (*l_527);
    return l_543;
}







static int * func_64(unsigned p_65, int * p_66, int p_67)
{
    char l_94 = 0L;
    int *l_126 = &g_112.f6;
    int l_141 = 0x88DBB9F3L;
    int l_150 = 0x4C3530B4L;
    int l_188 = 0x4AB99CF7L;
    int l_320 = 0x4F8C2A34L;
    for (p_67 = (-25); (p_67 == 16); p_67 = safe_add_func_uint8_t_u_u(p_67, 3))
    {
        int **l_83 = (void*)0;
        int *l_85 = &g_41.f5;
        int **l_84 = &l_85;
        struct S0 l_122 = {0x8C4F2CD8L,1L,5UL,0UL,1UL,0x896F4A54L,-1L,0x6DL,0x25L,0L};
        int l_313 = 0xB3AB43E1L;
        (*l_84) = &g_14;
        if ((*p_66))
        {
            struct S0 l_124 = {0x48C45170L,-10L,0UL,0x12A2FD13L,0x10899EAAL,0x38080D84L,0xAB603A3FL,0x72L,0x5DL,0xE5ECL};
            for (g_41.f2 = 0; (g_41.f2 > 17); g_41.f2 = safe_add_func_uint16_t_u_u(g_41.f2, 2))
            {
                short l_96 = 0L;
                for (p_65 = 0; (p_65 > 34); p_65 = safe_add_func_int16_t_s_s(p_65, 9))
                {
                    struct S0 l_103 = {0x45F469F5L,0xD801979DL,0x66F7E61DL,2UL,0x2E6BC3FCL,0L,0x31BEC191L,1L,-10L,1L};
                    for (g_41.f1 = 0; (g_41.f1 > (-24)); g_41.f1 = safe_sub_func_int32_t_s_s(g_41.f1, 2))
                    {
                        struct S0 l_95 = {0x5A1B20D9L,0xD67D06F9L,0UL,0xBE844599L,1UL,0xDB2F3DD0L,0L,-8L,-1L,-1L};
                        int *l_104 = &g_41.f6;
                        l_96 ^= (func_68(&g_14, (safe_lshift_func_uint8_t_u_s(l_94, 2)), g_41.f2, l_95) == ((**l_84) & p_67));
                        (*l_84) = p_66;
                        (*l_104) = (((4UL && (g_41.f1 < (g_14 < func_68((*l_84), ((*p_66) == ((p_67 | ((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((0x1FL & (**l_84)), g_41.f5)), g_41.f7)), g_41.f9)) != 3L)) && (*p_66))), p_65, l_103)))) > 0x23B973E4L) & l_103.f2);
                    }
                    return p_66;
                }
                if ((safe_mul_func_uint16_t_u_u(((+((safe_rshift_func_uint8_t_u_u((g_41.f7 && (g_109 == &g_110)), g_41.f2)) > p_67)) < (**l_84)), g_14)))
                {
                    struct S0 *l_111 = &g_112;
                    int l_113 = 0xCAE20C25L;
                    (*l_111) = g_41;
                    if (l_113)
                    {
                        (*l_84) = (*g_109);
                        if ((*p_66))
                            break;
                    }
                    else
                    {
                        if ((*p_66))
                            break;
                        g_112 = g_41;
                    }
                }
                else
                {
                    unsigned l_121 = 0xA11BA0C2L;
                    int l_123 = 0x9BA1A3DBL;
                    struct S0 *l_125 = &g_112;
                    (*g_110) |= (0xE3L <= g_112.f1);
                    (*l_84) = p_66;
                    for (g_41.f1 = 0; (g_41.f1 <= 4); g_41.f1++)
                    {
                        int *l_116 = &g_112.f5;
                        (*l_116) &= (*g_110);
                        l_123 |= ((*l_85) != (((*l_85) > (safe_mod_func_int32_t_s_s((func_68(p_66, l_121, g_41.f0, l_122) <= g_112.f1), ((l_121 == g_41.f8) || 1L)))) <= g_34));
                        if (l_94)
                            continue;
                    }
                    (*l_125) = l_124;
                }
            }
        }
        else
        {
            return l_126;
        }
        if ((*p_66))
            continue;
        if ((*l_85))
        {
            int *l_129 = &g_112.f5;
            int l_138 = 0L;
            for (g_41.f7 = (-13); (g_41.f7 <= (-3)); ++g_41.f7)
            {
                short l_190 = 0x161FL;
                unsigned short l_205 = 0UL;
                unsigned l_246 = 4294967295UL;
                unsigned l_251 = 2UL;
                int l_254 = (-7L);
                if (((*g_109) != l_129))
                {
                    char l_158 = 0x77L;
                    int l_189 = 1L;
                    int l_193 = 0xAFFEC7DEL;
                    for (l_122.f1 = 11; (l_122.f1 == (-26)); l_122.f1 = safe_sub_func_uint8_t_u_u(l_122.f1, 8))
                    {
                        int *l_132 = &g_41.f6;
                        int *l_133 = &g_112.f6;
                        int *l_134 = &g_112.f6;
                        int *l_135 = &g_34;
                        int *l_136 = &l_122.f5;
                        int *l_137 = &g_34;
                        int *l_139 = &g_41.f5;
                        int *l_140 = &g_41.f6;
                        int *l_142 = &l_138;
                        int *l_143 = &g_112.f6;
                        int *l_144 = &l_122.f6;
                        int *l_145 = &g_41.f5;
                        int *l_146 = (void*)0;
                        int *l_147 = &g_34;
                        int *l_148 = &l_122.f5;
                        int *l_149 = &g_41.f5;
                        int *l_151 = &g_41.f6;
                        int *l_152 = &g_41.f5;
                        int *l_153 = &l_141;
                        int *l_154 = &l_122.f5;
                        int *l_155 = &g_112.f5;
                        int *l_156 = &g_34;
                        int *l_157 = &g_41.f6;
                        int *l_159 = &l_150;
                        int *l_160 = &g_41.f6;
                        int *l_161 = &l_150;
                        int *l_162 = &g_34;
                        int *l_163 = &g_41.f6;
                        int *l_164 = &l_141;
                        int *l_165 = &l_141;
                        int *l_166 = &g_34;
                        int *l_167 = &l_138;
                        int *l_168 = &g_112.f5;
                        int *l_169 = &l_150;
                        int *l_170 = (void*)0;
                        int *l_171 = &g_34;
                        int *l_172 = &l_150;
                        int *l_173 = (void*)0;
                        int l_174 = 0x09034FE3L;
                        int *l_175 = &g_112.f5;
                        int *l_176 = &g_34;
                        int *l_177 = &g_41.f6;
                        int *l_178 = &l_122.f5;
                        int *l_179 = (void*)0;
                        int *l_180 = &l_122.f5;
                        int *l_181 = &g_112.f5;
                        int *l_182 = &l_174;
                        int *l_183 = &l_174;
                        int *l_184 = (void*)0;
                        int *l_185 = (void*)0;
                        int *l_186 = &g_41.f5;
                        int *l_187 = &g_41.f5;
                        int *l_191 = &l_189;
                        int *l_192 = (void*)0;
                        int *l_194 = &g_41.f6;
                        int *l_195 = &g_34;
                        int *l_196 = &l_141;
                        int *l_197 = &l_150;
                        int *l_198 = &l_122.f5;
                        int *l_199 = &l_138;
                        int *l_200 = &l_193;
                        int *l_201 = &l_189;
                        int *l_202 = &l_189;
                        int *l_203 = (void*)0;
                        int *l_204 = &l_189;
                        ++l_205;
                        if ((*g_110))
                            break;
                    }
                    (*l_126) = (*p_66);
                    (*g_109) = (*g_109);
                    (**g_109) = (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((65535UL < g_112.f0), p_67)), (safe_mul_func_uint16_t_u_u(((5L != ((p_67 <= (safe_add_func_uint32_t_u_u((0x3AE11F4DL <= ((4294967290UL && func_68((*g_109), ((9UL ^ g_14) == g_41.f6), l_190, g_112)) && l_158)), (*g_110)))) || g_41.f5)) | (*p_66)), 0xF798L)))) >= 0x2A73L) & 0xE39AL);
                }
                else
                {
                    int *l_216 = &l_141;
                    int *l_217 = &g_41.f6;
                    int *l_218 = &g_112.f5;
                    int *l_219 = &l_188;
                    int *l_220 = &g_41.f6;
                    int *l_221 = &l_150;
                    int *l_222 = &g_41.f6;
                    int *l_223 = &g_41.f5;
                    int *l_224 = &l_150;
                    int *l_225 = &l_188;
                    int *l_226 = &g_41.f6;
                    int *l_227 = &g_34;
                    int *l_228 = &g_112.f5;
                    int *l_229 = &g_112.f5;
                    int *l_230 = (void*)0;
                    int *l_231 = (void*)0;
                    int *l_232 = &l_188;
                    int *l_233 = &l_122.f6;
                    int *l_234 = &g_41.f6;
                    int *l_235 = &l_141;
                    int *l_236 = &l_122.f6;
                    int *l_237 = &g_34;
                    int *l_238 = &g_112.f5;
                    int *l_239 = &g_112.f6;
                    int *l_240 = &l_150;
                    int *l_241 = &l_138;
                    int *l_242 = &l_150;
                    int *l_243 = &l_141;
                    int *l_244 = &l_138;
                    int *l_245 = &g_41.f6;
                    p_66 = (*g_109);
                    l_246--;
                    p_66 = (*g_109);
                    for (g_112.f8 = (-19); (g_112.f8 < 2); ++g_112.f8)
                    {
                        unsigned short l_255 = 0UL;
                        (*l_84) = p_66;
                        l_251++;
                        (*l_239) ^= ((void*)0 != (*g_109));
                        --l_255;
                    }
                }
            }
        }
        else
        {
            int *l_258 = &g_34;
            int *l_259 = &l_122.f5;
            int *l_260 = &l_188;
            int *l_261 = &g_112.f6;
            int *l_262 = &g_112.f5;
            int *l_263 = (void*)0;
            int *l_264 = &g_112.f5;
            int *l_265 = &l_188;
            int *l_266 = (void*)0;
            int *l_267 = &l_141;
            int *l_268 = (void*)0;
            int *l_269 = &l_141;
            int *l_270 = (void*)0;
            int *l_271 = (void*)0;
            int *l_272 = &l_188;
            int *l_273 = &l_122.f6;
            int *l_274 = &l_188;
            int *l_275 = &l_122.f6;
            int *l_276 = &g_41.f5;
            int *l_277 = &l_122.f6;
            int *l_278 = &l_141;
            int *l_279 = &l_141;
            int *l_280 = &l_141;
            int *l_281 = &g_34;
            int *l_282 = &g_112.f6;
            int *l_283 = &l_122.f5;
            int l_284 = 0xB1B7E535L;
            int *l_285 = &l_150;
            int *l_286 = (void*)0;
            int l_287 = 1L;
            int *l_288 = &l_141;
            int *l_289 = &l_150;
            int *l_290 = &l_284;
            int *l_291 = (void*)0;
            int *l_292 = &l_287;
            int l_293 = 0x23A98893L;
            int *l_294 = &l_150;
            int *l_295 = &l_188;
            int *l_296 = &l_122.f6;
            int *l_297 = &g_41.f6;
            int *l_298 = &l_122.f6;
            int *l_299 = &l_122.f5;
            int *l_300 = &l_122.f5;
            int *l_301 = (void*)0;
            int *l_302 = &l_150;
            int *l_303 = &g_112.f6;
            int *l_304 = &g_112.f5;
            int *l_305 = &l_150;
            int *l_306 = &l_287;
            int *l_307 = &l_150;
            int *l_308 = &l_284;
            int *l_309 = &l_287;
            int *l_310 = &l_188;
            int *l_311 = &l_122.f6;
            int l_312 = 5L;
            int *l_314 = &l_122.f6;
            int *l_315 = &l_188;
            int *l_316 = (void*)0;
            int *l_317 = &l_293;
            int *l_318 = &l_150;
            int *l_319 = &l_312;
            int *l_321 = &g_41.f5;
            int *l_322 = &l_284;
            int *l_323 = &l_293;
            int *l_324 = &l_293;
            int *l_325 = (void*)0;
            g_326++;
            if ((*p_66))
                break;
        }
    }
    return p_66;
}







static unsigned short func_68(int * p_69, unsigned short p_70, int p_71, struct S0 p_72)
{
    int l_77 = 0xD8C41144L;
    int *l_78 = &g_41.f5;
    (*l_78) |= l_77;
    return p_72.f5;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1, "g_41.f1", print_hash_value);
    transparent_crc(g_41.f2, "g_41.f2", print_hash_value);
    transparent_crc(g_41.f3, "g_41.f3", print_hash_value);
    transparent_crc(g_41.f4, "g_41.f4", print_hash_value);
    transparent_crc(g_41.f5, "g_41.f5", print_hash_value);
    transparent_crc(g_41.f6, "g_41.f6", print_hash_value);
    transparent_crc(g_41.f7, "g_41.f7", print_hash_value);
    transparent_crc(g_41.f8, "g_41.f8", print_hash_value);
    transparent_crc(g_41.f9, "g_41.f9", print_hash_value);
    transparent_crc(g_112.f0, "g_112.f0", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_112.f2, "g_112.f2", print_hash_value);
    transparent_crc(g_112.f3, "g_112.f3", print_hash_value);
    transparent_crc(g_112.f4, "g_112.f4", print_hash_value);
    transparent_crc(g_112.f5, "g_112.f5", print_hash_value);
    transparent_crc(g_112.f6, "g_112.f6", print_hash_value);
    transparent_crc(g_112.f7, "g_112.f7", print_hash_value);
    transparent_crc(g_112.f8, "g_112.f8", print_hash_value);
    transparent_crc(g_112.f9, "g_112.f9", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_436, "g_436", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_671, "g_671", print_hash_value);
    transparent_crc(g_677, "g_677", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    transparent_crc(g_817, "g_817", print_hash_value);
    transparent_crc(g_860.f0, "g_860.f0", print_hash_value);
    transparent_crc(g_860.f1, "g_860.f1", print_hash_value);
    transparent_crc(g_860.f2, "g_860.f2", print_hash_value);
    transparent_crc(g_860.f3, "g_860.f3", print_hash_value);
    transparent_crc(g_860.f4, "g_860.f4", print_hash_value);
    transparent_crc(g_860.f5, "g_860.f5", print_hash_value);
    transparent_crc(g_860.f6, "g_860.f6", print_hash_value);
    transparent_crc(g_860.f7, "g_860.f7", print_hash_value);
    transparent_crc(g_860.f8, "g_860.f8", print_hash_value);
    transparent_crc(g_860.f9, "g_860.f9", print_hash_value);
    transparent_crc(g_1040, "g_1040", print_hash_value);
    transparent_crc(g_1218, "g_1218", print_hash_value);
    transparent_crc(g_1417, "g_1417", print_hash_value);
    transparent_crc(g_1434, "g_1434", print_hash_value);
    transparent_crc(g_1589, "g_1589", print_hash_value);
    transparent_crc(g_1703, "g_1703", print_hash_value);
    transparent_crc(g_1756.f0, "g_1756.f0", print_hash_value);
    transparent_crc(g_1756.f1, "g_1756.f1", print_hash_value);
    transparent_crc(g_1756.f2, "g_1756.f2", print_hash_value);
    transparent_crc(g_1756.f3, "g_1756.f3", print_hash_value);
    transparent_crc(g_1756.f4, "g_1756.f4", print_hash_value);
    transparent_crc(g_1756.f5, "g_1756.f5", print_hash_value);
    transparent_crc(g_1756.f6, "g_1756.f6", print_hash_value);
    transparent_crc(g_1756.f7, "g_1756.f7", print_hash_value);
    transparent_crc(g_1756.f8, "g_1756.f8", print_hash_value);
    transparent_crc(g_1756.f9, "g_1756.f9", print_hash_value);
    transparent_crc(g_1761, "g_1761", print_hash_value);
    transparent_crc(g_1842, "g_1842", print_hash_value);
    transparent_crc(g_1903, "g_1903", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
