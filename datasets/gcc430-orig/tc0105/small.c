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
   unsigned char f0;
   unsigned char f1;
   signed f2 : 7;
   int f3;
   char f4;
   unsigned char f5;
   short f6;
   const unsigned short f7;
};

struct S1 {
   unsigned f0 : 10;
};

struct S2 {
   unsigned short f0;
   const short f1;
   int f2;
};


static int g_8 = 0xF3DE0369L;
static struct S0 g_17 = {0xC6L,1UL,-2,0x309642E4L,0xC1L,0xABL,4L,0x9A20L};
static struct S1 g_41 = {26};
static const unsigned g_71 = 0x2DD31843L;
static int g_91 = 0L;
static unsigned short g_152 = 0x9DD1L;
static const unsigned g_159 = 18446744073709551613UL;
static int g_174 = 0x1C728F08L;
static int g_234 = 0L;
static unsigned g_243 = 0UL;
static int *g_260 = &g_174;
static int **g_259 = &g_260;
static unsigned g_263 = 18446744073709551607UL;
static unsigned g_303 = 0x15E876E8L;
static struct S2 g_323 = {0x0FF7L,-5L,5L};
static struct S2 *g_322 = &g_323;
static int g_331 = 7L;
static char g_378 = (-1L);
static unsigned g_391 = 0xD68A634AL;
static char g_484 = 4L;
static int g_492 = 5L;
static unsigned char g_508 = 0x9FL;
static unsigned g_572 = 0UL;
static struct S0 *g_591 = &g_17;
static short g_692 = (-4L);
static unsigned g_699 = 0UL;
static unsigned g_732 = 0x7A0D7603L;
static struct S1 *g_751 = &g_41;
static struct S1 **g_750 = &g_751;
static unsigned char g_765 = 254UL;
static int g_833 = 0L;
static unsigned short g_886 = 65535UL;
static struct S0 g_946 = {0xB4L,0x30L,-7,-1L,0x3CL,1UL,0x091AL,65535UL};
static unsigned char g_1111 = 0x53L;
static int g_1211 = 0xBD5ED9EEL;
static char g_1372 = 0xCDL;
static char g_1384 = 1L;
static short g_1390 = 0L;
static short g_1436 = 0x9E9BL;
static unsigned char g_1440 = 0UL;
static short g_1551 = 0x151BL;
static short g_1576 = 5L;
static int g_1583 = 0x9EA43890L;
static unsigned char g_1596 = 1UL;
static unsigned short g_1670 = 0x1DA0L;
static struct S1 *g_1805 = &g_41;
static unsigned short g_1807 = 0xB9BFL;



static unsigned short func_1(void);
static const int func_2(unsigned p_3, unsigned short p_4);
static unsigned short func_6(unsigned char p_7);
static unsigned short func_11(struct S0 p_12, unsigned short p_13, const unsigned p_14, int p_15, int p_16);
static short func_20(unsigned p_21, unsigned p_22, int p_23);
static char func_30(short p_31, unsigned p_32, const unsigned p_33, char p_34);
static short func_37(struct S1 p_38, int p_39, unsigned short p_40);
static short func_44(char p_45);
static const int func_46(int p_47, char p_48);
static int func_72(short p_73, char p_74, unsigned char p_75);
static unsigned short func_1(void)
{
    int l_5 = 0x58A835A2L;
    g_1807 &= func_2(l_5, func_6(g_8));



    ;
    return g_572;
}







static const int func_2(unsigned p_3, unsigned short p_4)
{
    const int l_1806 = 1L;
    (*g_750) = g_1805;

    ;
    return l_1806;
}







static unsigned short func_6(unsigned char p_7)
{
    unsigned l_24 = 1UL;
    int *l_1772 = (void*)0;
    int l_1773 = 0x41DF3330L;
    int *** const l_1789 = &g_259;
    struct S1 **l_1796 = &g_751;
    int *l_1804 = &g_17.f3;
    l_1773 ^= (safe_mul_func_int16_t_s_s(((0xE843L && func_11(g_17, (safe_rshift_func_int16_t_s_s(func_20(l_24, (safe_lshift_func_uint8_t_u_s(l_24, 4)), ((0x0EE1L <= (((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(func_30(p_7, ((safe_mul_func_int16_t_s_s(func_37(g_41, (p_7 & (safe_rshift_func_int16_t_s_s(func_44((+((1L > l_24) < p_7))), l_24))), p_7), 0x57ADL)) == g_946.f4), l_24, l_24))), 253UL)) == 0x0DL) | p_7)) | g_765)), 4)), g_17.f5, g_946.f7, l_24)) == g_1551), 0xA56AL));



    ;
    ;
    for (g_323.f2 = 0; (g_323.f2 != (-29)); g_323.f2--)
    {
        struct S0 *l_1776 = &g_17;
        struct S0 **l_1777 = &g_591;
        int **l_1782 = &g_260;
        int l_1783 = 0x2B83D421L;
        int l_1786 = (-6L);
        int *l_1790 = &l_1773;
        struct S1 ** const l_1795 = &g_751;
        int l_1802 = 0x91BBA011L;
        int *l_1803 = &g_331;
        (*l_1777) = l_1776;

        ;
        for (g_323.f0 = 0; (g_323.f0 == 21); g_323.f0 = safe_add_func_uint32_t_u_u(g_323.f0, 1))
        {
            l_1783 = (((0xE8CFL & ((safe_mod_func_uint16_t_u_u(p_7, g_946.f5)) >= (p_7 && 7L))) ^ g_8) & g_1111);
        }
        (*l_1790) |= p_7;
        (*l_1803) ^= (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((l_1795 == l_1796) < (*l_1790)) | (safe_lshift_func_uint16_t_u_s((*l_1790), (g_152 && (safe_unary_minus_func_int32_t_s((func_20(func_72(g_152, (safe_add_func_int16_t_s_s((*l_1790), (p_7 != (0x86A1DD33L & p_7)))), p_7), g_508, p_7) & l_1802))))))), p_7)), g_946.f4));
    }
    (*l_1804) &= g_1596;
    return p_7;
}







static unsigned short func_11(struct S0 p_12, unsigned short p_13, const unsigned p_14, int p_15, int p_16)
{
    int *l_1674 = &g_946.f3;
    int *l_1675 = &g_1211;
    int *l_1676 = &g_1211;
    int *l_1677 = &g_946.f3;
    int *l_1678 = (void*)0;
    int *l_1679 = &g_331;
    int *l_1680 = (void*)0;
    int *l_1681 = &g_91;
    int *l_1682 = &g_833;
    int *l_1683 = &g_174;
    int *l_1684 = &g_174;
    int *l_1685 = &g_1211;
    int *l_1686 = &g_946.f3;
    int *l_1687 = &g_331;
    int *l_1688 = &g_174;
    int l_1689 = 0L;
    int *l_1690 = &g_1211;
    int *l_1691 = &g_17.f3;
    int *l_1692 = &g_174;
    int *l_1693 = &g_174;
    int *l_1694 = &g_17.f3;
    int *l_1695 = &g_1211;
    int *l_1696 = &g_946.f3;
    int *l_1697 = &g_174;
    int *l_1698 = &g_946.f3;
    int *l_1699 = &l_1689;
    int *l_1700 = &g_174;
    int *l_1701 = &g_1211;
    int *l_1702 = &g_1211;
    int *l_1703 = (void*)0;
    int *l_1704 = &g_17.f3;
    int *l_1705 = &g_331;
    int *l_1706 = &g_331;
    int *l_1707 = (void*)0;
    int *l_1708 = &g_174;
    int *l_1709 = &g_17.f3;
    int *l_1710 = &g_1211;
    int *l_1711 = &g_331;
    int *l_1712 = &g_1211;
    int *l_1713 = &g_1211;
    int *l_1714 = &g_331;
    int *l_1715 = &g_1211;
    int *l_1716 = &g_17.f3;
    int *l_1717 = &g_91;
    int *l_1718 = (void*)0;
    int *l_1719 = &g_1211;
    int *l_1720 = &g_833;
    int *l_1721 = &g_1211;
    int l_1722 = 0L;
    int *l_1723 = &g_17.f3;
    int *l_1724 = &g_1211;
    int *l_1725 = &g_174;
    int *l_1726 = &l_1689;
    int *l_1727 = &g_91;
    int *l_1728 = (void*)0;
    int *l_1729 = &l_1689;
    int *l_1730 = &g_331;
    int *l_1731 = &g_1211;
    int *l_1732 = &g_91;
    int *l_1733 = &g_174;
    int *l_1734 = (void*)0;
    int *l_1735 = &g_833;
    int *l_1736 = &g_174;
    int l_1737 = (-3L);
    int *l_1738 = &g_91;
    int *l_1739 = (void*)0;
    int *l_1740 = &g_331;
    int *l_1741 = &g_833;
    int *l_1742 = &g_174;
    int *l_1743 = (void*)0;
    int l_1744 = 0xCCBD8B5DL;
    int *l_1745 = &g_833;
    int *l_1746 = &g_833;
    int *l_1747 = &l_1737;
    int *l_1748 = &g_91;
    int *l_1749 = &l_1744;
    int *l_1750 = &g_1211;
    int *l_1751 = &g_331;
    int *l_1752 = &g_174;
    int *l_1753 = &g_174;
    int *l_1754 = (void*)0;
    int l_1755 = 0x4AAA5860L;
    int *l_1756 = &g_91;
    int *l_1757 = &g_174;
    int *l_1758 = (void*)0;
    int l_1759 = 0x1BCFB18BL;
    int *l_1760 = &l_1744;
    int *l_1761 = &g_1211;
    int *l_1762 = &g_946.f3;
    int *l_1763 = &l_1759;
    int *l_1764 = &g_946.f3;
    int *l_1765 = &l_1759;
    int *l_1766 = &g_946.f3;
    unsigned l_1767 = 0UL;
    struct S2 **l_1770 = (void*)0;
    struct S2 **l_1771 = &g_322;
    ++l_1767;
    (*l_1771) = &g_323;
    return p_15;
}







static short func_20(unsigned p_21, unsigned p_22, int p_23)
{
    char l_1495 = 0x5CL;
    char l_1496 = 0L;
    int l_1525 = 1L;
    int l_1543 = (-1L);
    int l_1575 = 2L;
    int l_1590 = (-1L);
    int *l_1673 = &g_1211;
    for (g_174 = 0; (g_174 < (-23)); g_174--)
    {
        int *l_1468 = &g_1211;
        int l_1552 = 0xEA8AC01BL;
        int l_1559 = (-1L);
        int l_1560 = 0x424474DAL;
        if ((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(4294967295UL, p_23)), (p_23 == p_21))))
        {
            int **l_1465 = &g_260;
            (*l_1465) = &p_23;

            ;
        }
        else
        {
            struct S0 *l_1488 = &g_946;
            int l_1592 = 3L;
            int l_1606 = 0x4362F8D9L;
            int l_1654 = 7L;
            int l_1655 = 0x369ED6D4L;
            if ((safe_mul_func_int8_t_s_s(p_22, ((void*)0 == l_1468))))
            {
                int l_1471 = 0x0E6B8DF7L;
                const unsigned short l_1501 = 0x415CL;
                struct S1 l_1508 = {11};
                struct S2 **l_1509 = &g_322;
                int l_1516 = 1L;
                int *l_1602 = &l_1592;
                for (g_1390 = 0; (g_1390 != (-12)); --g_1390)
                {
                    unsigned l_1472 = 0x1AFD0407L;
                    l_1471 |= (0x34L < p_22);
                    if (l_1472)
                        continue;
                    (*l_1468) ^= (((&g_751 == (void*)0) && (0UL && (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((0UL | (g_1436 | ((g_1372 ^ ((~((safe_div_func_int16_t_s_s(g_1384, ((safe_div_func_int8_t_s_s(((-1L) >= (&p_23 != &p_23)), g_159)) && p_22))) & 5UL)) & p_23)) <= 0x70B4L))), 0xB4L)), p_21)))) == g_17.f0);
                }
                for (g_323.f0 = (-5); (g_323.f0 < 23); g_323.f0++)
                {
                    char l_1485 = 0x56L;
                    (*l_1468) &= ((safe_sub_func_uint32_t_u_u(g_17.f7, l_1485)) != ((safe_add_func_uint32_t_u_u(0xA04DD402L, (((void*)0 == l_1488) <= (safe_mul_func_uint16_t_u_u((func_72(g_946.f0, l_1471, ((safe_mul_func_int16_t_s_s((0x2187L | ((safe_mul_func_int16_t_s_s((l_1495 == 1UL), 0x3DCBL)) != 0xFA28BFE2L)), p_21)) < p_22)) && l_1485), l_1496))))) && p_22));
                    for (g_699 = 0; (g_699 == 45); ++g_699)
                    {
                        return p_23;


                    }
                }
                if (p_23)
                {
                    int l_1505 = (-1L);
                    int l_1510 = 0x61DAC437L;
                    int *l_1511 = (void*)0;
                    int *l_1512 = &l_1510;
                    int *l_1513 = &l_1510;
                    int *l_1514 = (void*)0;
                    int *l_1515 = &g_833;
                    int *l_1517 = &g_91;
                    int *l_1518 = &g_1211;
                    int *l_1519 = &g_331;
                    int *l_1520 = &g_1211;
                    int *l_1521 = &l_1516;
                    int *l_1522 = &g_946.f3;
                    int *l_1523 = (void*)0;
                    int *l_1524 = &g_1211;
                    int *l_1526 = &g_91;
                    int *l_1527 = &l_1525;
                    int *l_1528 = &g_1211;
                    int l_1529 = 0x8E752AE1L;
                    int l_1530 = 0xE9B1C773L;
                    int *l_1531 = &g_1211;
                    int *l_1532 = (void*)0;
                    int *l_1533 = &g_833;
                    int *l_1534 = &l_1516;
                    int *l_1535 = (void*)0;
                    int *l_1536 = &l_1525;
                    int *l_1537 = (void*)0;
                    int *l_1538 = &l_1530;
                    int *l_1539 = &g_833;
                    int *l_1540 = &l_1516;
                    int *l_1541 = &l_1510;
                    int *l_1542 = &l_1530;
                    int *l_1544 = &l_1516;
                    int *l_1545 = &g_946.f3;
                    int *l_1546 = &l_1516;
                    int *l_1547 = &g_1211;
                    int *l_1548 = &l_1530;
                    int *l_1549 = &g_1211;
                    int *l_1550 = &g_833;
                    int *l_1553 = &g_946.f3;
                    int *l_1554 = &l_1543;
                    int *l_1555 = &l_1516;
                    int *l_1556 = &l_1552;
                    int *l_1557 = &g_331;
                    int *l_1558 = &l_1529;
                    int *l_1561 = &l_1530;
                    int *l_1562 = (void*)0;
                    int *l_1563 = &l_1530;
                    int *l_1564 = &l_1560;
                    int *l_1565 = &l_1510;
                    int *l_1566 = &l_1516;
                    int *l_1567 = &g_91;
                    int *l_1568 = &g_1211;
                    int *l_1569 = &l_1559;
                    int *l_1570 = &l_1525;
                    int *l_1571 = &l_1510;
                    int *l_1572 = (void*)0;
                    int *l_1573 = (void*)0;
                    int *l_1574 = &g_331;
                    int *l_1577 = &l_1552;
                    int *l_1578 = &l_1560;
                    int *l_1579 = &l_1543;
                    int *l_1580 = &g_946.f3;
                    int *l_1581 = &l_1529;
                    int *l_1582 = &g_1211;
                    int *l_1584 = &l_1543;
                    int *l_1585 = (void*)0;
                    int *l_1586 = &g_91;
                    int *l_1587 = &l_1529;
                    int *l_1588 = &l_1525;
                    int *l_1589 = &g_1211;
                    int *l_1591 = &g_91;
                    int *l_1593 = &l_1559;
                    int *l_1594 = &l_1552;
                    int *l_1595 = &l_1516;
                    l_1510 |= ((safe_sub_func_int8_t_s_s(((l_1501 > 0L) >= (safe_rshift_func_int16_t_s_s((0x18L > (safe_unary_minus_func_uint16_t_u((0x53607505L | p_21)))), (~(l_1505 >= (safe_lshift_func_int8_t_s_s((g_159 & (func_37(l_1508, ((&g_322 != l_1509) != g_946.f2), p_21) >= p_22)), 7))))))), 0xDDL)) <= p_23);
                    (*l_1468) = l_1496;
                    g_1596++;
                }
                else
                {
                    int *l_1599 = &g_331;
                    l_1599 = (void*)0;

                    ;
                    for (g_765 = 0; (g_765 != 21); ++g_765)
                    {
                        return p_22;


                    }
                    l_1602 = &l_1592;
                }
            }
            else
            {
                int *l_1603 = &l_1575;
                int *l_1604 = &l_1543;
                int *l_1605 = &l_1560;
                int *l_1607 = &g_1211;
                int *l_1608 = (void*)0;
                int *l_1609 = &l_1525;
                int *l_1610 = &l_1575;
                int *l_1611 = (void*)0;
                int l_1612 = (-6L);
                int *l_1613 = &g_91;
                int *l_1614 = &l_1559;
                int *l_1615 = &l_1552;
                int *l_1616 = &l_1552;
                int *l_1617 = &l_1525;
                int *l_1618 = (void*)0;
                int *l_1619 = &l_1543;
                int *l_1620 = &g_331;
                int *l_1621 = &l_1575;
                int *l_1622 = &g_1211;
                int *l_1623 = &g_331;
                int *l_1624 = &g_833;
                int *l_1625 = (void*)0;
                int *l_1626 = &l_1560;
                int *l_1627 = &g_946.f3;
                int *l_1628 = &l_1606;
                int *l_1629 = (void*)0;
                int *l_1630 = &l_1543;
                int *l_1631 = &l_1543;
                int *l_1632 = &l_1552;
                int *l_1633 = (void*)0;
                int *l_1634 = &l_1559;
                int *l_1635 = (void*)0;
                int *l_1636 = &l_1612;
                int *l_1637 = &g_833;
                int *l_1638 = (void*)0;
                int *l_1639 = &g_833;
                int *l_1640 = (void*)0;
                int *l_1641 = &l_1592;
                int *l_1642 = &l_1606;
                int *l_1643 = &g_1211;
                int *l_1644 = &g_1211;
                int *l_1645 = (void*)0;
                int *l_1646 = &g_331;
                int *l_1647 = &l_1525;
                int *l_1648 = &l_1543;
                int *l_1649 = &l_1606;
                int *l_1650 = &l_1612;
                int *l_1651 = (void*)0;
                int *l_1652 = &l_1525;
                int *l_1653 = &l_1552;
                int *l_1656 = (void*)0;
                int *l_1657 = &l_1543;
                int *l_1658 = &l_1612;
                int *l_1659 = &g_833;
                int *l_1660 = &l_1559;
                int *l_1661 = &l_1543;
                int *l_1662 = &l_1612;
                int *l_1663 = &l_1655;
                int *l_1664 = &l_1612;
                int *l_1665 = &g_946.f3;
                int *l_1666 = (void*)0;
                int *l_1667 = &l_1559;
                int *l_1668 = &l_1592;
                int *l_1669 = &l_1612;
                ++g_1670;
            }
            if (p_21)
                break;
        }
    }


    (*l_1673) = l_1590;
    (*l_1673) = p_22;
    return (*l_1673);


}







static char func_30(short p_31, unsigned p_32, const unsigned p_33, char p_34)
{
    struct S0 *l_1451 = &g_17;
    struct S0 **l_1454 = (void*)0;
    struct S0 **l_1455 = &g_591;
    int *l_1456 = &g_1211;
    int **l_1457 = (void*)0;
    int **l_1458 = &l_1456;
    for (g_946.f1 = 0; (g_946.f1 >= 13); g_946.f1++)
    {
        struct S1 l_1449 = {6};
        struct S1 *l_1450 = &l_1449;
        struct S0 *l_1452 = &g_17;
        int l_1453 = 0xE238FC01L;
        (*l_1450) = l_1449;
        l_1453 |= (l_1451 == l_1452);
    }
    (*l_1455) = &g_946;

    ;
    (*l_1458) = l_1456;
    return g_1111;
}







static short func_37(struct S1 p_38, int p_39, unsigned short p_40)
{
    int l_1445 = 0xAD1DB906L;
    int *l_1446 = &g_946.f3;
    (*l_1446) = (p_38.f0 > l_1445);
    (*l_1446) = g_732;
    (*l_1446) = func_72(g_71, ((*l_1446) && (*l_1446)), g_303);
    return p_40;
}







static short func_44(char p_45)
{
    int l_49 = (-8L);
    int *l_1443 = &g_833;
    int **l_1444 = &l_1443;
    (*l_1443) &= func_46(l_49, p_45);



    ;
    (*l_1444) = l_1443;
    return p_45;
}







static const int func_46(int p_47, char p_48)
{
    unsigned short l_89 = 0xE415L;
    int l_360 = 8L;
    int l_545 = (-8L);
    int l_567 = 0x45736F65L;
    int l_698 = 0x9E7A3714L;
    unsigned l_781 = 0x1F5575CAL;
    struct S1 *l_901 = &g_41;
    struct S2 **l_906 = (void*)0;
    short l_908 = 0xE8E5L;
    unsigned l_922 = 8UL;
    struct S2 *l_927 = &g_323;
    char l_999 = 0x54L;
    int l_1017 = 0xD51D867FL;
    int l_1060 = 0x52B92055L;
    int l_1095 = 2L;
    unsigned l_1228 = 1UL;
    int l_1374 = 0xBC80B380L;
    int l_1396 = 0x7AC779E0L;
    int l_1428 = 0x9094AD3FL;
    int l_1429 = (-8L);
    for (g_8 = 0; (g_8 > 4); g_8 = safe_add_func_int8_t_s_s(g_8, 1))
    {
        char l_52 = (-1L);
        const int *l_166 = &g_17.f3;
        unsigned char l_170 = 0UL;
        int l_205 = 7L;
        int l_211 = 8L;
        if (l_52)
        {
            char l_167 = 0x01L;
            int *l_251 = &g_174;
            int **l_250 = &l_251;
            if ((safe_lshift_func_uint8_t_u_s(((0x525036FFL != 0L) == (p_48 >= (safe_div_func_int16_t_s_s((0xE9L ^ g_17.f3), (safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s(p_48, 3)) <= (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((0xB1D319D7L < g_8) < (65528UL ^ 1UL)), 250UL)), g_71))) <= 0L), 3)) != g_17.f4), 0xF230L)), 0)))))), p_48)))
            {
                short l_88 = 0x42ACL;
                if (func_72(((+g_17.f5) >= (((p_47 == (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_17.f3, (safe_sub_func_uint16_t_u_u((g_17.f0 != (((safe_lshift_func_uint16_t_u_u(l_88, (p_48 >= ((g_17.f4 != g_17.f3) != l_89)))) <= 0xDC67586EL) != 0xB1L)), 0x081FL)))), p_47)), p_47))) <= 0L) & p_47)), l_88, l_89))
                {
                    if (p_47)
                        break;
                    p_47 = func_72(func_72(((-1L) & ((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_166 == l_166), (func_72(g_17.f2, l_167, p_48) != (safe_lshift_func_uint8_t_u_u((l_170 || g_8), p_47))))), p_47)) >= 0UL)), g_17.f6, p_48), g_91, g_17.f1);
                }
                else
                {
                    unsigned l_177 = 0x6B2CC903L;
                    int l_231 = 3L;
                    int *l_249 = &g_91;
                    for (g_91 = 0; (g_91 <= (-30)); g_91--)
                    {
                        int *l_173 = &g_174;
                        (*l_173) ^= p_48;
                        (*l_173) |= g_17.f4;
                        (*l_173) = (safe_sub_func_uint8_t_u_u(((p_48 < l_177) || (0x80A0586BL ^ (~func_72((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((g_17.f1 && (((((((!((safe_rshift_func_uint8_t_u_u(l_89, 0)) || ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(func_72(g_8, (safe_mod_func_uint16_t_u_u((p_48 < 4294967295UL), g_17.f3)), l_89), l_177)), 0xF6L)), 2)), p_48)) & 65534UL))) == p_47) & 1L) != 4294967293UL) <= l_88) || 0x64L) ^ (*l_173))) ^ 1L) & (*l_166)), g_17.f1)), p_47)) || g_17.f5), p_47)), p_48, l_88)))), l_177));
                    }
                    if (l_167)
                    {
                        int *l_196 = &g_91;
                        int *l_197 = &g_174;
                        int *l_198 = &g_91;
                        int *l_199 = &g_91;
                        int *l_200 = &g_174;
                        int *l_201 = &g_91;
                        int *l_202 = (void*)0;
                        int *l_203 = (void*)0;
                        int *l_204 = (void*)0;
                        int *l_206 = &g_174;
                        int *l_207 = &g_174;
                        int *l_208 = &l_205;
                        int *l_209 = &g_91;
                        int *l_210 = &g_174;
                        int *l_212 = &l_205;
                        int *l_213 = &l_211;
                        int *l_214 = &g_174;
                        int *l_215 = &g_174;
                        int *l_216 = &l_205;
                        int *l_217 = &l_205;
                        int *l_218 = &l_205;
                        int *l_219 = &g_91;
                        int *l_220 = (void*)0;
                        int *l_221 = &l_211;
                        int *l_222 = &l_205;
                        int *l_223 = &g_174;
                        int *l_224 = (void*)0;
                        int *l_225 = &l_211;
                        int *l_226 = &l_205;
                        int *l_227 = &g_91;
                        int *l_228 = &g_91;
                        int *l_229 = &l_205;
                        int *l_230 = &g_174;
                        int *l_232 = (void*)0;
                        int *l_233 = &l_211;
                        int *l_235 = &g_91;
                        int l_236 = 0x0A5B6558L;
                        int *l_237 = &g_174;
                        int *l_238 = &g_91;
                        int *l_239 = &g_91;
                        int *l_240 = &g_91;
                        int *l_241 = &g_174;
                        int *l_242 = &l_231;
                        --g_243;
                        (*l_217) |= ((void*)0 != &g_174);
                    }
                    else
                    {
                        int *l_247 = &l_231;
                        int **l_246 = &l_247;
                        int *l_248 = &l_231;
                        (*l_246) = (void*)0;

                        ;
                        (*l_248) ^= p_47;
                    }
                    l_249 = &g_174;

                    ;
                }
                g_91 |= (p_48 >= g_17.f0);
            }
            else
            {
                return g_17.f7;
            }
            (*l_250) = &g_91;

            ;
        }
        else
        {
            int *l_252 = &g_174;
            (*l_252) = func_72(g_17.f3, p_47, p_47);
        }
        (**g_259) = (safe_div_func_int16_t_s_s(p_47, (((safe_mul_func_int16_t_s_s(func_72((*l_166), ((safe_mul_func_int8_t_s_s((g_259 != &l_166), ((safe_sub_func_int16_t_s_s(p_48, (&g_260 != (void*)0))) ^ g_263))) == (safe_lshift_func_uint16_t_u_u(l_89, 2))), p_47), (*l_166))) && (*l_166)) ^ g_91)));
    }
    if (l_89)
    {
        char l_272 = 0x86L;
        int *l_286 = &g_91;
        char l_307 = 0x0FL;
        struct S1 l_324 = {5};
        int l_359 = (-4L);
        int l_387 = 0x2B93A76BL;
        int l_519 = 4L;
        int l_558 = 0L;
        unsigned l_636 = 0xAED80145L;
        struct S0 *l_753 = &g_17;
        int ***l_895 = &g_259;
        struct S2 **l_907 = &g_322;
        (**g_259) = 0x529A07FEL;
        for (g_8 = 0; (g_8 >= (-28)); g_8--)
        {
            int l_318 = 0x07DA6FABL;
            int l_475 = 8L;
            int l_507 = 0x00122506L;
            int * const *l_607 = &g_260;
            char l_655 = 0L;
            int l_752 = 0xA054CF85L;
            int *l_791 = (void*)0;
            int l_866 = 8L;
        }
        (*l_895) = &l_286;

        ;
        for (g_8 = 0; (g_8 > (-11)); g_8 = safe_sub_func_uint16_t_u_u(g_8, 7))
        {
            unsigned short l_898 = 0xE1F1L;
            if (((((l_898 ^ 0x2CCCL) >= 0x4DL) < 0x31L) < func_72((safe_mul_func_uint16_t_u_u((!p_47), (((l_901 == (*g_750)) <= (((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_699, p_47)), g_71)) < p_47) <= 3L)) && p_48))), g_17.f3, g_692)))
            {
                l_907 = l_906;

                ;
                return (*g_260);


            }
            else
            {
                return p_47;


            }
        }
    }
    else
    {
        if ((0x50DBL > (l_908 & (((*g_750) != (void*)0) != p_48))))
        {
            char l_913 = 1L;
            struct S2 *l_915 = &g_323;
            (*g_259) = (*g_259);
            (**g_259) ^= ((l_545 < (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_913 < p_48), (safe_unary_minus_func_uint32_t_u(l_360)))), (&g_323 != l_915)))) == 0xE4B2L);
        }
        else
        {
            int *l_921 = &l_567;
            for (p_48 = 24; (p_48 == 0); --p_48)
            {
                (**g_259) = 0L;
            }
            (**g_259) = (safe_mul_func_uint16_t_u_u(9UL, (l_89 || func_72(g_323.f0, g_243, (safe_unary_minus_func_int16_t_s(l_698))))));
            (*l_921) ^= (*g_260);
        }
    }


    if ((p_47 ^ (l_922 >= (safe_div_func_uint32_t_u_u((func_72((safe_mul_func_uint16_t_u_u((l_567 < (&g_323 != l_927)), (((g_17.f2 | (((safe_rshift_func_int8_t_s_u(func_72((((safe_mod_func_uint8_t_u_u(p_47, func_72((p_48 && (&g_751 == (void*)0)), l_567, p_47))) >= l_567) & 1L), g_17.f1, p_48), 5)) | 0L) ^ p_47)) || p_47) && l_360))), l_781, l_89) ^ g_508), 0x2BB492BCL)))))
    {
        int l_940 = (-4L);
        int *l_943 = &l_360;
        int l_984 = 2L;
        int l_986 = 0x92175BAFL;
        int l_990 = 8L;
        int l_1027 = 0x252309E6L;
        int l_1049 = (-4L);
        int l_1227 = 0xA276702FL;
        struct S2 *l_1233 = &g_323;
        unsigned l_1291 = 0xD7113D15L;
        struct S1 *l_1306 = &g_41;
        struct S0 ** const l_1311 = &g_591;
        (*g_260) = ((safe_div_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((((((safe_mod_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((func_72(g_391, (!p_47), ((l_940 ^ p_47) | (5L == (0x01F64214L != l_940)))) <= (4294967294UL >= p_48)), 0xB5F9L)) == 0x64L) & g_323.f1), g_234)) ^ 65535UL) && 0x8FBEL) == 0xF0L) | g_17.f6), p_47)) <= p_48), g_17.f2)) > 0x5FD0L);
        (*l_943) &= (*g_260);
        if (l_567)
        {
            int **l_944 = &g_260;
            struct S0 *l_945 = &g_946;
            int l_1080 = (-6L);
            int l_1081 = 0xCD899956L;
            unsigned char l_1222 = 5UL;
            (*l_944) = l_943;

            ;
            l_945 = (void*)0;

            ;
            for (g_174 = 0; (g_174 != 11); g_174 = safe_add_func_uint32_t_u_u(g_174, 9))
            {
                int l_1038 = 5L;
                int l_1075 = 0L;
                int l_1102 = 1L;
                int *l_1115 = &l_986;
                int *l_1116 = (void*)0;
                int *l_1117 = &l_698;
                int *l_1118 = (void*)0;
                int *l_1119 = &l_1049;
                int *l_1120 = &l_545;
                int *l_1121 = (void*)0;
                int *l_1122 = &l_1038;
                int *l_1123 = &l_1038;
                int *l_1124 = &l_1017;
                int *l_1125 = &g_833;
                int *l_1126 = &l_1102;
                int *l_1127 = &l_360;
                int *l_1128 = &l_1102;
                int *l_1129 = &g_331;
                int *l_1130 = &g_946.f3;
                int *l_1131 = &l_1095;
                int *l_1132 = &l_1102;
                int *l_1133 = &l_1049;
                int *l_1134 = &l_698;
                int *l_1135 = (void*)0;
                int *l_1136 = &l_567;
                int *l_1137 = &l_1102;
                int *l_1138 = &l_698;
                int *l_1139 = &l_1049;
                int *l_1140 = &g_833;
                int *l_1141 = &l_1075;
                int *l_1142 = (void*)0;
                int *l_1143 = &l_1049;
                int *l_1144 = &l_1049;
                int *l_1145 = &l_1017;
                int *l_1146 = &l_1081;
                int *l_1147 = &g_833;
                int *l_1148 = &l_1075;
                int *l_1149 = &l_545;
                int *l_1150 = &g_946.f3;
                int *l_1151 = &l_1102;
                unsigned short l_1152 = 0x59D4L;
                unsigned short l_1155 = 0x40C8L;
                for (g_234 = 7; (g_234 > (-15)); --g_234)
                {
                    char l_958 = 0xABL;
                    int l_1011 = 0x2EF91C39L;
                    int l_1056 = 0L;
                    int l_1094 = 0x2286C82FL;
                    int l_1098 = 1L;
                    int *l_1114 = &l_1081;
                    if (func_72((safe_sub_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((*g_260), 0x135237FFL)) && (-1L)), ((safe_lshift_func_int16_t_s_s(1L, 5)) > ((4294967287UL || 3UL) == g_8)))), (g_946.f6 || func_72(p_48, g_692, p_48)), g_391))
                    {
                        return p_47;


                    }
                    else
                    {
                        int *l_957 = &g_91;
                        int *l_959 = (void*)0;
                        int *l_960 = &l_545;
                        int *l_961 = &g_946.f3;
                        int *l_962 = &l_360;
                        int *l_963 = (void*)0;
                        int *l_964 = &l_567;
                        int *l_965 = &g_331;
                        int *l_966 = &g_946.f3;
                        int *l_967 = (void*)0;
                        int *l_968 = &g_833;
                        int *l_969 = &g_946.f3;
                        int *l_970 = (void*)0;
                        int *l_971 = (void*)0;
                        int *l_972 = &g_91;
                        int *l_973 = &g_91;
                        int *l_974 = &l_567;
                        int *l_975 = &l_360;
                        int *l_976 = &l_567;
                        int *l_977 = &g_833;
                        int *l_978 = &g_946.f3;
                        int *l_979 = &g_833;
                        int *l_980 = &l_698;
                        int *l_981 = &l_698;
                        int *l_982 = (void*)0;
                        int *l_983 = (void*)0;
                        int *l_985 = &l_567;
                        int *l_987 = &l_360;
                        int *l_988 = &l_986;
                        int *l_989 = (void*)0;
                        int *l_991 = &g_91;
                        int *l_992 = &l_360;
                        int *l_993 = (void*)0;
                        int *l_994 = &l_567;
                        int *l_995 = &l_545;
                        int *l_996 = (void*)0;
                        int *l_997 = &g_946.f3;
                        int *l_998 = (void*)0;
                        int *l_1000 = (void*)0;
                        int *l_1001 = &l_360;
                        int *l_1002 = &l_545;
                        int *l_1003 = &l_567;
                        int *l_1004 = (void*)0;
                        int *l_1005 = &l_567;
                        int *l_1006 = (void*)0;
                        int l_1007 = 0x503D28D1L;
                        int *l_1008 = (void*)0;
                        int *l_1009 = &l_1007;
                        int *l_1010 = &g_946.f3;
                        int *l_1012 = &l_990;
                        int *l_1013 = (void*)0;
                        int *l_1014 = &l_360;
                        int *l_1015 = &l_1011;
                        int *l_1016 = &g_91;
                        int *l_1018 = &l_1007;
                        int *l_1019 = &g_833;
                        int *l_1020 = &l_1007;
                        int *l_1021 = &l_360;
                        int *l_1022 = &l_1017;
                        int *l_1023 = &l_698;
                        int *l_1024 = &l_545;
                        int *l_1025 = &g_946.f3;
                        int *l_1026 = &l_567;
                        int *l_1028 = &g_833;
                        int *l_1029 = &l_698;
                        int *l_1030 = (void*)0;
                        int *l_1031 = &l_1027;
                        int *l_1032 = &g_946.f3;
                        int *l_1033 = &l_360;
                        int *l_1034 = &l_1007;
                        int *l_1035 = (void*)0;
                        int *l_1036 = &l_1027;
                        int *l_1037 = &l_990;
                        int *l_1039 = &l_1038;
                        int *l_1040 = &l_1027;
                        int *l_1041 = &l_1011;
                        int *l_1042 = &l_698;
                        int *l_1043 = &g_91;
                        int *l_1044 = &l_1007;
                        int *l_1045 = &l_1027;
                        int *l_1046 = &l_1038;
                        int *l_1047 = &g_91;
                        int *l_1048 = &l_545;
                        int *l_1050 = (void*)0;
                        int *l_1051 = (void*)0;
                        int *l_1052 = &l_1027;
                        int *l_1053 = &g_833;
                        int *l_1054 = &l_1017;
                        int *l_1055 = (void*)0;
                        int *l_1057 = &g_331;
                        int *l_1058 = (void*)0;
                        int *l_1059 = &l_986;
                        int *l_1061 = &l_1007;
                        int l_1062 = 0L;
                        int *l_1063 = &g_91;
                        int *l_1064 = &g_833;
                        int *l_1065 = &g_833;
                        int *l_1066 = &g_91;
                        int *l_1067 = (void*)0;
                        int *l_1068 = &l_1049;
                        int *l_1069 = (void*)0;
                        int *l_1070 = &g_833;
                        int *l_1071 = &l_1038;
                        int *l_1072 = &l_1038;
                        int *l_1073 = &l_1060;
                        int *l_1074 = (void*)0;
                        int *l_1076 = &l_698;
                        int *l_1077 = &l_1049;
                        int l_1078 = (-1L);
                        int *l_1079 = &l_990;
                        int *l_1082 = &g_331;
                        int *l_1083 = &l_1027;
                        int *l_1084 = &g_946.f3;
                        int *l_1085 = &g_946.f3;
                        int *l_1086 = (void*)0;
                        int *l_1087 = &l_1075;
                        int *l_1088 = &l_990;
                        int *l_1089 = &l_1027;
                        int *l_1090 = (void*)0;
                        int *l_1091 = &l_1011;
                        int *l_1092 = &l_567;
                        int *l_1093 = &l_1081;
                        int *l_1096 = (void*)0;
                        int *l_1097 = &g_331;
                        int *l_1099 = &l_1078;
                        int *l_1100 = (void*)0;
                        int *l_1101 = &l_1007;
                        int *l_1103 = &l_1075;
                        int *l_1104 = &l_1038;
                        int *l_1105 = &l_360;
                        int *l_1106 = &l_545;
                        int *l_1107 = (void*)0;
                        int *l_1108 = &l_360;
                        int *l_1109 = (void*)0;
                        int *l_1110 = &l_1049;
                        (*l_957) &= (*l_943);
                        (*l_957) &= (((**l_944) & g_323.f2) | p_47);
                        --g_1111;
                    }
                    (*l_944) = l_1114;

                    ;
                }
                l_1152++;
                ++l_1155;
                if ((**l_944))
                {
                    unsigned l_1162 = 1UL;
                    int *l_1163 = &l_1027;
                    int *l_1164 = &l_1049;
                    int *l_1165 = &l_1095;
                    int *l_1166 = (void*)0;
                    int *l_1167 = &g_91;
                    int *l_1168 = &l_1049;
                    int *l_1169 = &l_1027;
                    int *l_1170 = &l_1060;
                    int *l_1171 = &l_1102;
                    int l_1172 = (-1L);
                    int *l_1173 = &l_1081;
                    int *l_1174 = &l_1027;
                    int *l_1175 = &l_1095;
                    int *l_1176 = &l_1172;
                    int *l_1177 = (void*)0;
                    int *l_1178 = &l_1080;
                    int *l_1179 = &l_698;
                    int *l_1180 = (void*)0;
                    int *l_1181 = &l_1075;
                    int *l_1182 = &g_91;
                    int *l_1183 = &l_1060;
                    int *l_1184 = &l_1172;
                    int *l_1185 = (void*)0;
                    int *l_1186 = &l_1027;
                    int *l_1187 = &l_1027;
                    int *l_1188 = &l_1095;
                    int *l_1189 = &g_331;
                    int *l_1190 = (void*)0;
                    int *l_1191 = &l_990;
                    int *l_1192 = &l_1027;
                    int *l_1193 = &l_1049;
                    int *l_1194 = &l_698;
                    int *l_1195 = &l_990;
                    int l_1196 = 1L;
                    int *l_1197 = &g_833;
                    int *l_1198 = (void*)0;
                    int *l_1199 = (void*)0;
                    int *l_1200 = &l_360;
                    int *l_1201 = &l_1095;
                    int *l_1202 = &g_946.f3;
                    int *l_1203 = &l_1102;
                    int *l_1204 = &l_986;
                    int *l_1205 = &g_331;
                    int *l_1206 = &l_1172;
                    int *l_1207 = &l_567;
                    int *l_1208 = &g_833;
                    int *l_1209 = &l_698;
                    int *l_1210 = &l_1017;
                    int *l_1212 = &l_567;
                    int *l_1213 = (void*)0;
                    int *l_1214 = &g_331;
                    int *l_1215 = (void*)0;
                    int *l_1216 = &g_91;
                    int *l_1217 = &g_91;
                    int *l_1218 = (void*)0;
                    int *l_1219 = &l_1196;
                    int *l_1220 = (void*)0;
                    int *l_1221 = &g_946.f3;
                    (*l_944) = (*l_944);
                    for (g_886 = 0; (g_886 > 36); g_886 = safe_add_func_uint32_t_u_u(g_886, 7))
                    {
                        (*l_1129) = (0x9CL || ((safe_rshift_func_uint16_t_u_u(l_1162, 10)) <= (g_263 | p_48)));
                        if ((*l_943))
                            continue;
                    }
                    l_1222--;
                    for (g_391 = (-12); (g_391 == 9); g_391 = safe_add_func_uint16_t_u_u(g_391, 6))
                    {
                        --l_1228;
                        (*g_260) &= p_47;
                        (*l_943) ^= p_47;
                    }
                }
                else
                {
                    (*l_1149) &= 0x0B9309A9L;
                }
            }

            ;
            for (l_1017 = (-13); (l_1017 == (-13)); l_1017 = safe_add_func_int16_t_s_s(l_1017, 7))
            {
                struct S2 **l_1234 = &g_322;
                (*l_1234) = l_1233;
                if ((*g_260))
                    break;
            }
        }
        else
        {
            int *l_1235 = &g_91;
            int *l_1236 = &g_1211;
            int *l_1237 = &l_545;
            int *l_1238 = (void*)0;
            int *l_1239 = &l_545;
            int *l_1240 = (void*)0;
            int *l_1241 = &l_1027;
            int *l_1242 = &g_946.f3;
            int *l_1243 = (void*)0;
            int *l_1244 = &l_1017;
            int *l_1245 = &g_331;
            int *l_1246 = &g_91;
            int *l_1247 = (void*)0;
            int *l_1248 = &g_833;
            int *l_1249 = (void*)0;
            int *l_1250 = &l_1095;
            int *l_1251 = &l_698;
            int *l_1252 = &l_1095;
            int *l_1253 = &l_567;
            int l_1254 = 0x86B176C4L;
            int *l_1255 = &l_1027;
            int l_1256 = (-1L);
            int *l_1257 = &g_946.f3;
            int *l_1258 = &g_91;
            int *l_1259 = (void*)0;
            int *l_1260 = (void*)0;
            int *l_1261 = &g_833;
            int *l_1262 = &l_545;
            int *l_1263 = &g_174;
            int *l_1264 = &g_946.f3;
            int *l_1265 = &g_833;
            int *l_1266 = (void*)0;
            int *l_1267 = &g_1211;
            int l_1268 = 0x8DFE6414L;
            int *l_1269 = &g_833;
            int *l_1270 = &l_1254;
            int *l_1271 = &l_986;
            int *l_1272 = &l_1268;
            int *l_1273 = &l_1227;
            int *l_1274 = &g_1211;
            int *l_1275 = &l_360;
            int *l_1276 = &l_986;
            int *l_1277 = &l_360;
            int *l_1278 = &l_1049;
            int *l_1279 = &g_946.f3;
            int *l_1280 = &l_1017;
            int *l_1281 = &l_986;
            int *l_1282 = &l_1256;
            int *l_1283 = (void*)0;
            int *l_1284 = &l_1268;
            int *l_1285 = &l_1095;
            int l_1286 = (-5L);
            int *l_1287 = &g_174;
            int *l_1288 = &g_1211;
            int *l_1289 = &l_360;
            int *l_1290 = (void*)0;
            struct S0 **l_1307 = &g_591;
            int l_1310 = 0L;
            struct S1 *l_1312 = &g_41;
            l_1291++;
            l_567 |= (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((~(safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_48, 6)), (safe_div_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((&l_927 == &l_1233), ((void*)0 != l_1306))) & ((void*)0 != l_1307)) ^ (safe_mod_func_uint32_t_u_u(((0x873B519CL || l_908) <= 0xCD3CL), l_1310))), (*l_943)))))) & g_946.f6), (-1L))), 0x1F45L));
            (*l_1258) ^= ((void*)0 == l_1311);
            l_901 = l_1312;
        }


    }
    else
    {
        char l_1313 = (-4L);
        int l_1378 = 0x2EA13E59L;
        int l_1402 = (-8L);
        int l_1405 = 0x01868736L;
        int l_1423 = 0x6913F963L;
        int l_1431 = (-5L);
        (*g_260) &= func_72(g_765, g_886, l_1313);
        if ((*g_260))
        {
            return (*g_260);
        }
        else
        {
            int *l_1314 = &g_174;
            int *l_1315 = &g_1211;
            int *l_1316 = &l_360;
            int *l_1317 = &l_698;
            int *l_1318 = &g_174;
            int *l_1319 = &g_91;
            int *l_1320 = &g_946.f3;
            int *l_1321 = &l_1095;
            int *l_1322 = &g_331;
            int *l_1323 = (void*)0;
            int *l_1324 = (void*)0;
            int *l_1325 = &l_698;
            int *l_1326 = &l_360;
            int l_1327 = 3L;
            int *l_1328 = &l_1060;
            int *l_1329 = &g_833;
            int l_1330 = 3L;
            int *l_1331 = &l_1330;
            int l_1332 = 0xD741D450L;
            int *l_1333 = &l_567;
            int *l_1334 = &g_1211;
            int l_1335 = (-4L);
            int *l_1336 = (void*)0;
            int *l_1337 = &l_1327;
            int *l_1338 = &l_545;
            int *l_1339 = &l_1330;
            int *l_1340 = (void*)0;
            int *l_1341 = &g_946.f3;
            int *l_1342 = &l_1335;
            int *l_1343 = &l_545;
            int *l_1344 = &g_331;
            int *l_1345 = &g_91;
            int *l_1346 = (void*)0;
            int *l_1347 = &l_1327;
            int *l_1348 = &g_331;
            int *l_1349 = &g_91;
            int *l_1350 = &g_946.f3;
            int *l_1351 = &g_946.f3;
            int *l_1352 = &l_545;
            int *l_1353 = &l_1095;
            int *l_1354 = (void*)0;
            int *l_1355 = &l_698;
            int *l_1356 = &l_545;
            int *l_1357 = &g_946.f3;
            int *l_1358 = (void*)0;
            int *l_1359 = &l_1060;
            int *l_1360 = &l_567;
            int *l_1361 = &g_1211;
            int *l_1362 = &l_1332;
            int *l_1363 = &l_360;
            int *l_1364 = &l_545;
            int *l_1365 = &g_946.f3;
            int *l_1366 = (void*)0;
            int *l_1367 = &g_833;
            int *l_1368 = &l_1335;
            int *l_1369 = &l_1327;
            int *l_1370 = &l_567;
            int *l_1371 = &l_1335;
            int *l_1373 = &g_331;
            int *l_1375 = &l_698;
            int *l_1376 = &g_91;
            int *l_1377 = &l_545;
            int *l_1379 = &g_833;
            int *l_1380 = &g_91;
            int *l_1381 = &g_1211;
            int *l_1382 = &l_1378;
            int *l_1383 = (void*)0;
            int *l_1385 = &l_545;
            int *l_1386 = (void*)0;
            int *l_1387 = &l_360;
            int *l_1388 = (void*)0;
            int *l_1389 = (void*)0;
            int *l_1391 = &l_567;
            int *l_1392 = &l_545;
            int *l_1393 = &l_1095;
            int *l_1394 = &l_545;
            int *l_1395 = &g_331;
            int *l_1397 = &g_946.f3;
            int *l_1398 = &l_1396;
            int *l_1399 = &g_331;
            int *l_1400 = &g_331;
            int *l_1401 = &g_174;
            int *l_1403 = &g_174;
            int *l_1404 = &g_946.f3;
            int *l_1406 = &l_545;
            int *l_1407 = &l_1402;
            int *l_1408 = &l_567;
            int *l_1409 = (void*)0;
            int *l_1410 = &l_1374;
            int *l_1411 = &l_1374;
            int *l_1412 = (void*)0;
            int *l_1413 = &l_1378;
            int *l_1414 = &g_833;
            int *l_1415 = &l_1374;
            int *l_1416 = &l_567;
            int *l_1417 = &l_1095;
            int *l_1418 = &g_91;
            int *l_1419 = (void*)0;
            int *l_1420 = &l_1335;
            int *l_1421 = &l_567;
            int *l_1422 = (void*)0;
            int *l_1424 = &g_174;
            int *l_1425 = (void*)0;
            int *l_1426 = &l_1335;
            int *l_1427 = &g_833;
            int *l_1430 = &l_545;
            int *l_1432 = &l_567;
            int *l_1433 = &l_1423;
            int *l_1434 = &g_331;
            int *l_1435 = &l_1405;
            int *l_1437 = &l_1060;
            int *l_1438 = (void*)0;
            int *l_1439 = (void*)0;
            g_1440--;
        }
        (*g_750) = (void*)0;

        ;
        (*g_260) ^= (&l_901 != (void*)0);
    }


    ;
    p_47 ^= 0x9442CDBCL;
    return p_48;


}







static int func_72(short p_73, char p_74, unsigned char p_75)
{
    int *l_90 = &g_91;
    int *l_92 = &g_91;
    int *l_93 = &g_91;
    int *l_94 = &g_91;
    int *l_95 = &g_91;
    int *l_96 = (void*)0;
    int *l_97 = &g_91;
    int *l_98 = &g_91;
    int *l_99 = &g_91;
    int l_100 = 0xA128409DL;
    int *l_101 = &g_91;
    int *l_102 = &l_100;
    int *l_103 = &l_100;
    int *l_104 = &g_91;
    int l_105 = 0x073E42CDL;
    int l_106 = 0x8A85F878L;
    int l_107 = 5L;
    int *l_108 = (void*)0;
    int *l_109 = &l_105;
    int l_110 = 1L;
    int l_111 = 0L;
    int *l_112 = &g_91;
    int l_113 = 0L;
    int l_114 = 0x7320B692L;
    int *l_115 = (void*)0;
    int *l_116 = &l_106;
    int *l_117 = &l_100;
    int *l_118 = &l_114;
    int *l_119 = &l_111;
    int *l_120 = &l_111;
    int *l_121 = &l_107;
    int *l_122 = &l_110;
    int *l_123 = &l_110;
    int l_124 = (-1L);
    int *l_125 = &l_107;
    int l_126 = 0xAC9AC803L;
    int *l_127 = &l_100;
    int *l_128 = &l_100;
    int *l_129 = (void*)0;
    int *l_130 = &l_107;
    int *l_131 = &l_124;
    int *l_132 = &l_105;
    int *l_133 = &l_126;
    int *l_134 = &l_105;
    int l_135 = 6L;
    int *l_136 = &l_135;
    int l_137 = (-1L);
    int *l_138 = &g_91;
    int l_139 = (-1L);
    int *l_140 = &g_91;
    int *l_141 = (void*)0;
    int *l_142 = &l_105;
    int *l_143 = &l_105;
    int *l_144 = &l_135;
    int *l_145 = &l_106;
    int *l_146 = &l_113;
    int *l_147 = (void*)0;
    int *l_148 = &l_124;
    int *l_149 = &l_106;
    int *l_150 = &l_113;
    int *l_151 = &l_105;
    g_152--;
    (*l_123) = (((-8L) < ((0x33C0L != (((&l_113 == (void*)0) || g_17.f4) == (g_17.f5 > g_17.f7))) | (((safe_mod_func_int32_t_s_s((g_91 != 65530UL), (*l_121))) != g_159) >= g_17.f1))) < 4294967287UL);
    return p_75;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    transparent_crc(g_17.f1, "g_17.f1", print_hash_value);
    transparent_crc(g_17.f2, "g_17.f2", print_hash_value);
    transparent_crc(g_17.f3, "g_17.f3", print_hash_value);
    transparent_crc(g_17.f4, "g_17.f4", print_hash_value);
    transparent_crc(g_17.f5, "g_17.f5", print_hash_value);
    transparent_crc(g_17.f6, "g_17.f6", print_hash_value);
    transparent_crc(g_17.f7, "g_17.f7", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_323.f0, "g_323.f0", print_hash_value);
    transparent_crc(g_323.f1, "g_323.f1", print_hash_value);
    transparent_crc(g_323.f2, "g_323.f2", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    transparent_crc(g_833, "g_833", print_hash_value);
    transparent_crc(g_886, "g_886", print_hash_value);
    transparent_crc(g_946.f0, "g_946.f0", print_hash_value);
    transparent_crc(g_946.f1, "g_946.f1", print_hash_value);
    transparent_crc(g_946.f2, "g_946.f2", print_hash_value);
    transparent_crc(g_946.f3, "g_946.f3", print_hash_value);
    transparent_crc(g_946.f4, "g_946.f4", print_hash_value);
    transparent_crc(g_946.f5, "g_946.f5", print_hash_value);
    transparent_crc(g_946.f6, "g_946.f6", print_hash_value);
    transparent_crc(g_946.f7, "g_946.f7", print_hash_value);
    transparent_crc(g_1111, "g_1111", print_hash_value);
    transparent_crc(g_1211, "g_1211", print_hash_value);
    transparent_crc(g_1372, "g_1372", print_hash_value);
    transparent_crc(g_1384, "g_1384", print_hash_value);
    transparent_crc(g_1390, "g_1390", print_hash_value);
    transparent_crc(g_1436, "g_1436", print_hash_value);
    transparent_crc(g_1440, "g_1440", print_hash_value);
    transparent_crc(g_1551, "g_1551", print_hash_value);
    transparent_crc(g_1576, "g_1576", print_hash_value);
    transparent_crc(g_1583, "g_1583", print_hash_value);
    transparent_crc(g_1596, "g_1596", print_hash_value);
    transparent_crc(g_1670, "g_1670", print_hash_value);
    transparent_crc(g_1807, "g_1807", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
