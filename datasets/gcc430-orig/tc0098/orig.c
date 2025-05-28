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
   int f2;
   char f3;
   int f4;
   char f5;
};

struct S1 {
   unsigned f0;
   char f1;
   struct S0 f2;
};


static int *g_8 = (void*)0;
static int g_13 = (-10L);
static int g_18 = 0x3C15D0D6L;
static struct S0 g_31 = {1L,-1L,-5L,2L,0x255EBDA1L,-1L};
static int *g_52 = &g_31.f1;
static int **g_51 = &g_52;
static unsigned short g_54 = 8UL;
static unsigned g_63 = 0xB6842A45L;
static int g_65 = (-10L);
static struct S0 g_70 = {1L,1L,0xF4251D17L,0x01L,0x8B2D29C6L,0L};
static struct S1 g_77 = {18446744073709551615UL,0x33L,{-1L,0xAB9BE056L,0xFF5237AEL,0x3AL,6L,3L}};
static struct S1 *g_78 = &g_77;
static struct S0 g_85 = {-1L,8L,0x4D830BE9L,0x9AL,0L,-1L};
static struct S1 g_86 = {0x6DA35237L,0x92L,{1L,0xC86D4C77L,-10L,3L,-2L,0x35L}};
static short g_91 = 0x50EDL;
static short g_100 = 3L;
static int ***g_101 = (void*)0;
static int ****g_114 = &g_101;
static unsigned char g_172 = 0UL;
static char *g_179 = &g_77.f2.f3;
static unsigned g_200 = 18446744073709551615UL;
static unsigned g_202 = 0x53028FBCL;
static unsigned short g_210 = 0x1095L;
static int *g_229 = &g_31.f4;
static unsigned short *g_342 = &g_54;
static unsigned short **g_341 = &g_342;
static unsigned short g_362 = 65529UL;
static char g_370 = 2L;
static struct S0 g_408 = {1L,1L,0xFEB35889L,0xD6L,8L,0xA1L};
static int *****g_424 = &g_114;
static int ******g_423 = &g_424;
static unsigned char g_453 = 0xEFL;
static unsigned char g_462 = 0xC4L;



static char func_1(void);
static int * func_2(int * p_3, int * p_4, unsigned short p_5, int * p_6, unsigned short p_7);
static int * func_9(unsigned char p_10, int * p_11, unsigned p_12);
static int * func_14(int p_15, int * p_16);
static int * func_19(unsigned p_20, short p_21, int * p_22, unsigned p_23);
static unsigned func_24(int * p_25, struct S0 p_26, struct S0 p_27);
static unsigned char func_37(int * p_38, int ** p_39, unsigned short p_40);
static int * func_41(struct S0 p_42, int p_43, int * p_44, struct S0 p_45);
static struct S0 func_46(int * p_47, int ** p_48, unsigned short p_49);
static unsigned char func_55(int * p_56, struct S1 p_57, int ** p_58, int * p_59, unsigned p_60);
static char func_1(void)
{
    int *l_17 = &g_18;
    int **l_28 = (void*)0;
    int *l_30 = &g_13;
    int **l_29 = &l_30;
    int l_36 = 0x778E10A3L;
    int *l_50 = &g_31.f0;
    struct S0 l_69 = {0x986AF205L,0x4AAC4658L,0L,-1L,0xF470B9C4L,0xD1L};
    int **l_461 = &l_50;
    int l_473 = 0xC2B1D567L;
    struct S1 l_477 = {0xB6180694L,0x19L,{0x75495AB1L,0x4B618D2BL,0L,-3L,0x60419544L,0x44L}};
    (*l_461) = func_2(g_8, func_9(g_13, func_14(((*l_17) = 0xDF1ADB2BL), func_19(func_24(((*l_29) = &g_13), g_31, g_31), (safe_sub_func_int8_t_s_s((l_36 ^ func_37(func_41(func_46(l_50, g_51, (*l_50)), (*l_50), g_8, l_69), &l_17, g_77.f2.f0)), (-1L))), &l_36, g_200)), (*l_50)), (*l_50), l_50, (*l_50));




    ;
    if ((g_462 = (*l_50)))
    {
        int l_463 = 0L;
        return l_463;


    }
    else
    {
        short l_466 = 0L;
        int l_474 = 0x814FF1A4L;
        unsigned l_483 = 0x2EF5E5B8L;
        int *l_484 = &g_86.f2.f4;
        int **l_486 = &g_52;
        l_474 ^= ((safe_add_func_uint32_t_u_u((l_466 & ((*l_50) = ((*g_179) == (*g_179)))), l_466)) | (**g_341));
        for (g_13 = 0; (g_13 >= (-18)); g_13 = safe_sub_func_uint32_t_u_u(g_13, 8))
        {
            int l_480 = (-2L);
            int l_485 = (-1L);
            l_477 = l_477;
            for (l_473 = (-2); (l_473 > (-21)); l_473 = safe_sub_func_int8_t_s_s(l_473, 4))
            {
                int *l_481 = &l_477.f2.f2;
                int **l_482 = &g_8;
                short l_487 = 5L;
                (*l_50) = l_480;
                (*l_50) |= (*l_484);
                (*l_482) = (*l_482);
                (*l_484) ^= (0xE3F70947L && l_487);
            }
        }
    }
    return (*g_179);


}







static int * func_2(int * p_3, int * p_4, unsigned short p_5, int * p_6, unsigned short p_7)
{
    struct S0 *l_455 = &g_85;
    struct S0 **l_454 = &l_455;
    char ***l_456 = (void*)0;
    char **l_458 = &g_179;
    char ***l_457 = &l_458;
    char **l_460 = (void*)0;
    char ***l_459 = &l_460;
    (*l_454) = &g_70;

    ;
    (*l_459) = ((*l_457) = &g_179);

    ;
    return p_6;


}







static int * func_9(unsigned char p_10, int * p_11, unsigned p_12)
{
    short l_407 = 0x43A5L;
    int l_409 = (-2L);
    short l_410 = (-10L);
    int *l_412 = &g_18;
    struct S0 l_413 = {1L,0xC2A5C605L,-10L,-1L,0x40C2729BL,0x85L};
    struct S1 *l_414 = &g_77;
    short l_417 = 0x4E1AL;
    struct S1 *l_428 = &g_77;
    int *l_431 = &g_70.f0;
    for (g_31.f4 = 0; (g_31.f4 == (-3)); g_31.f4 = safe_sub_func_int16_t_s_s(g_31.f4, 4))
    {
        unsigned l_402 = 1UL;
        unsigned short *l_405 = &g_362;
        int *l_406 = (void*)0;
        int *l_411 = &g_408.f4;
        (*l_411) = (((l_410 &= ((!(safe_sub_func_int32_t_s_s(l_402, p_12))) && ((l_409 = func_24(p_11, g_408, g_31)) < g_54))) || (-8L)) | p_10);
    }
    (*g_229) = func_24(l_412, l_413, l_413);
    if (l_407)
    {
        l_414 = &g_86;

        ;
    }
    else
    {
        int ******l_425 = &g_424;
        int *l_426 = &g_70.f2;
        struct S1 **l_429 = &g_78;
        int **l_430 = &g_229;
        for (g_77.f2.f5 = 0; (g_77.f2.f5 <= (-24)); g_77.f2.f5--)
        {
            unsigned l_422 = 0UL;
            if (l_417)
                break;
            for (g_86.f0 = 0; (g_86.f0 == 12); ++g_86.f0)
            {
                int **l_427 = &l_426;
                p_11 = (void*)0;

                ;
                (*l_427) = func_19((safe_mod_func_int32_t_s_s(((*g_229) = (p_12 ^ ((l_422 = 0x14AB40E4L) > l_407))), (~0UL))), (g_423 == l_425), l_426, g_70.f0);
            }
            return p_11;


        }
        (*l_429) = l_428;

        ;
        (*l_430) = (void*)0;

        ;
        l_431 = ((*l_430) = p_11);

        ;
        ;
    }


    ;
    ;
    for (g_70.f5 = (-19); (g_70.f5 < (-1)); g_70.f5 = safe_add_func_uint32_t_u_u(g_70.f5, 1))
    {
        short l_438 = 0xA9D3L;
        struct S0 l_450 = {0xB9314465L,-1L,0x915E499DL,0xDDL,0xC073F5E9L,0xEBL};
        unsigned char *l_451 = &g_172;
        unsigned char *l_452 = &g_453;
        for (g_85.f5 = 0; (g_85.f5 > 23); ++g_85.f5)
        {
            int **l_441 = (void*)0;
            unsigned *l_442 = &g_202;
            struct S0 l_443 = {0xF8D6F025L,1L,0L,0x5AL,-5L,1L};
            struct S0 *l_444 = &l_413;
            int *l_445 = &g_85.f0;
            for (g_86.f2.f2 = 0; (g_86.f2.f2 >= 25); ++g_86.f2.f2)
            {
                l_438 ^= p_10;
            }
            (*l_445) &= (g_408.f0 |= ((p_12 & (safe_mod_func_int32_t_s_s(func_55(p_11, (*l_414), l_441, &l_409, ((*l_442) |= 0x880F5C00L)), func_24(l_431, ((*l_444) = l_443), g_70)))) <= p_10));
            (*l_445) = l_407;
        }
        (*l_414) = (*l_428);
        l_450.f4 = ((&g_91 != &l_438) < (p_10 |= (((*g_342) = (l_438 < l_417)) & (((*l_452) = (safe_sub_func_uint8_t_u_u((l_438 >= (safe_add_func_int8_t_s_s(l_413.f1, g_77.f2.f3))), ((*l_451) ^= (func_24(p_11, l_413, l_450) == 0x43L))))) && 0x79L))));
    }
    return p_11;


}







static int * func_14(int p_15, int * p_16)
{
    int *l_226 = (void*)0;
    struct S0 l_235 = {0x770DDCE6L,0xA4A4237FL,-8L,0xA6L,0L,1L};
    struct S1 *l_236 = (void*)0;
    short l_262 = 0xC033L;
    int *l_264 = &g_77.f2.f4;
    int *l_283 = &g_85.f4;
    unsigned short **l_298 = (void*)0;
    unsigned short *l_301 = &g_210;
    unsigned short **l_300 = &l_301;
    unsigned short ***l_299 = &l_300;
    unsigned *l_306 = (void*)0;
    short l_307 = 0x9BC5L;
    int **l_323 = &g_8;
    int ***l_322 = &l_323;
    unsigned char *l_329 = &g_172;
    struct S1 l_366 = {18446744073709551607UL,0x89L,{1L,-1L,0x7DE106B6L,0xF3L,-1L,0xFBL}};
    struct S0 l_394 = {0xF52E7747L,1L,0L,0L,1L,0x98L};
    int *l_397 = &g_85.f4;
    for (g_70.f2 = 0; (g_70.f2 == (-28)); g_70.f2--)
    {
        struct S0 l_227 = {0x32BE164FL,8L,5L,0x8AL,0x8BEC59F2L,1L};
        struct S0 *l_228 = &g_86.f2;
        int *l_230 = &g_85.f1;
    }
    if (l_307)
    {
        short l_310 = 0xBE17L;
        int *l_314 = &l_235.f1;
        unsigned char *l_317 = &g_172;
        short *l_318 = &g_100;
        int l_319 = 0x308A2A7BL;
        int *l_349 = &g_77.f2.f4;
        int *l_367 = &g_70.f2;
        struct S1 l_373 = {18446744073709551615UL,-4L,{0x5EE79E50L,-5L,-1L,0x86L,0xC9201CDCL,0x61L}};
        for (g_31.f1 = 14; (g_31.f1 == 8); --g_31.f1)
        {
            int **l_311 = &g_229;
            (*l_264) = l_310;
            g_77 = g_86;
            (*l_311) = p_16;


        }


        l_319 &= (((safe_add_func_uint8_t_u_u(func_24(l_314, g_86.f2, g_85), ((safe_rshift_func_int16_t_s_s(((~g_77.f2.f4) | 0L), ((*l_318) &= (((*l_317) &= p_15) ^ (*g_179))))) & ((*l_264) >= (*g_229))))) >= p_15) | 255UL);
        if (((safe_rshift_func_uint8_t_u_s((*l_283), 4)) | ((*l_264) &= (!((*p_16) = ((((*g_114) = l_322) != &l_323) <= g_77.f2.f2))))))
        {
            struct S1 **l_324 = &g_78;
            int l_348 = (-1L);
            (*l_324) = (void*)0;

            ;
            if ((safe_sub_func_uint8_t_u_u((g_86.f1 || (safe_mod_func_int16_t_s_s((l_329 != l_317), p_15))), ((void*)0 != (*g_101)))))
            {
                unsigned char l_332 = 0xE3L;
                int l_343 = 0xCA96AABEL;
                (*l_283) = (safe_sub_func_uint32_t_u_u(((((l_332 = 0L) >= ((safe_rshift_func_uint8_t_u_u(p_15, (0x7BED89B4L >= 0UL))) != (&l_226 != &l_314))) >= (!(safe_rshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s((g_341 == ((*l_299) = &g_342)), p_15)) >= g_31.f2), 0)))) ^ l_343), p_15));

                ;
                (*l_283) ^= (0xD42BL & (((0x06L < (safe_mod_func_int16_t_s_s(g_63, g_85.f5))) != (p_15 == ((*g_229) < g_31.f1))) || ((*g_179) &= 0xC8L)));
            }
            else
            {
                for (g_86.f2.f5 = 0; (g_86.f2.f5 >= 12); g_86.f2.f5 = safe_add_func_uint16_t_u_u(g_86.f2.f5, 2))
                {
                    if (l_348)
                        break;
                    (*l_283) |= l_348;
                    return (***g_114);



                }
                l_349 = (p_16 = p_16);


            }

            ;

        }
        else
        {
            return (***g_114);



        }

        ;
        ;
        ;

        for (g_172 = 28; (g_172 == 30); ++g_172)
        {
            int *l_354 = &g_85.f1;
            int l_357 = 1L;
            unsigned *l_358 = &g_63;
            unsigned *l_359 = &g_202;
            int ***l_360 = (void*)0;
            int ****l_361 = &l_322;
            struct S1 l_363 = {0UL,0x25L,{-1L,-1L,0L,-10L,6L,0x87L}};
            short l_364 = 0x2A46L;
            char **l_369 = &g_179;
            (*p_16) ^= (safe_lshift_func_uint16_t_u_u(p_15, (+(**g_341))));
            if ((safe_rshift_func_uint8_t_u_u(func_55(func_19((((0xE85BL != l_357) == (l_357 == g_77.f2.f5)) <= ((*l_359) = ((*l_358) = ((*l_349) = (*l_283))))), g_70.f1, p_16, (g_362 = (((l_360 != ((*l_361) = ((*g_114) = l_360))) ^ g_200) && p_15))), l_363, &g_52, p_16, l_364), 1)))
            {
                int l_365 = (-4L);
                char **l_368 = &g_179;
                (*g_229) = func_55((*g_51), l_363, &l_226, &g_65, g_77.f0);
                (*l_264) ^= l_365;
                p_16 = func_19(func_55(l_264, (l_366 = l_363), &l_226, l_367, (((l_368 = &g_179) == l_369) & ((*g_179) |= 0L))), (((g_370 != 4294967292UL) ^ l_365) > g_70.f3), p_16, g_70.f5);
            }
            else
            {
                int *****l_372 = &g_114;
                struct S1 *l_374 = &l_373;
                int *l_375 = &g_18;
                struct S0 l_376 = {0xA0CF1E45L,0x0A459E70L,5L,-1L,0xACE39541L,0L};
                (*p_16) ^= (safe_unary_minus_func_int8_t_s((l_372 != &g_114)));
                (*l_374) = l_373;
                (*g_229) &= func_24(l_375, l_376, l_376);
            }

            ;
            ;
            (*l_367) &= (0L != ((safe_mod_func_uint32_t_u_u(((-5L) < (*p_16)), g_85.f3)) || ((*g_342) ^ 65528UL)));
        }

        ;
        ;
    }
    else
    {
        unsigned char l_381 = 3UL;
        struct S0 l_388 = {0x562F081EL,0L,0L,4L,0x4334580EL,-10L};
        int *l_391 = &g_77.f2.f2;
        for (l_366.f2.f5 = (-1); (l_366.f2.f5 != 15); ++l_366.f2.f5)
        {
            int **l_382 = (void*)0;
            int **l_383 = &l_283;
            (*l_383) = func_41(g_70, l_381, p_16, g_77.f2);

            ;
            ;
        }

        ;
        if ((safe_sub_func_uint16_t_u_u(65535UL, (((safe_add_func_uint32_t_u_u((g_86.f1 & func_24(((*g_51) = &p_15), g_86.f2, l_388)), ((*l_264) = (*p_16)))) == 0xA65AL) & ((*l_329) = (safe_sub_func_int32_t_s_s((p_15 || l_388.f3), l_388.f4)))))))
        {
            int **l_392 = (void*)0;
            int **l_393 = (void*)0;
            l_391 = l_391;
        }
        else
        {
            struct S0 *l_395 = &l_394;
            struct S1 *l_396 = &g_86;
            (*l_395) = l_394;
            (*l_396) = g_77;
        }

        ;
    }

    ;

    ;

    ;
    ;
    ;
    (*l_264) = 0xDA4C6278L;
    return l_397;




}







static int * func_19(unsigned p_20, short p_21, int * p_22, unsigned p_23)
{
    int *l_216 = &g_77.f2.f0;
    int **l_215 = &l_216;
    int l_217 = 0x7A0DF3C2L;
    unsigned short l_218 = 65535UL;
    char *l_221 = (void*)0;
    char *l_222 = &g_31.f3;
    unsigned l_223 = 4294967288UL;
    (*l_215) = (void*)0;

    ;
    (*p_22) &= ((l_218 = l_217) ^ ((safe_add_func_int8_t_s_s(p_21, ((*l_222) ^= (*g_179)))) & l_223));
    return p_22;


}







static unsigned func_24(int * p_25, struct S0 p_26, struct S0 p_27)
{
    short l_32 = 0xD580L;
    int *l_33 = &g_31.f2;
    (*l_33) = l_32;
    (*l_33) = (*l_33);
    return p_27.f0;
}







static unsigned char func_37(int * p_38, int ** p_39, unsigned short p_40)
{
    struct S0 l_81 = {0x27969882L,-1L,0x668E5470L,0xCDL,-1L,0x5EL};
    struct S1 l_82 = {1UL,2L,{-1L,-4L,-1L,7L,0x92FBB161L,0L}};
    int **l_83 = &g_52;
    struct S0 *l_84 = &g_70;
    int *l_88 = &g_31.f4;
    int **l_87 = &l_88;
    int *l_89 = &l_81.f0;
    short *l_90 = &g_91;
    short *l_98 = (void*)0;
    short *l_99 = &g_100;
    int ****l_102 = &g_101;
    int l_105 = 0xCAF053B5L;
    int *l_111 = &g_70.f4;
    unsigned l_138 = 0xCF7B5A89L;
    int *l_145 = &l_82.f2.f0;
    char *l_181 = &g_85.f5;
    int ****l_196 = (void*)0;
    (*l_89) = func_55(func_41(func_46(((*l_87) = func_41(l_81, func_55(func_41(l_81, func_55((*g_51), l_82, l_83, func_41(((*l_84) = g_77.f2), l_81.f3, p_38, g_77.f2), g_54), &g_65, g_85), g_86, &g_52, p_38, g_86.f2.f2), &g_65, l_82.f2)), &g_52, g_31.f5), (*p_38), p_38, g_85), l_82, l_83, p_38, p_40);

    ;
lbl_109:
    (*l_87) = func_41((*l_84), (((*l_90) = p_40) | (safe_add_func_int8_t_s_s((!p_40), (((*l_99) = (safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((func_55(((*g_51) = (void*)0), l_82, &p_38, &g_65, g_70.f4) > 0x5ABB5303L) & (*l_88)) >= g_86.f2.f5), g_86.f0)), p_40))) & 0UL)))), (*l_87), (*l_84));

    ;
    ;
    if ((((&l_87 == ((*l_102) = g_101)) <= ((safe_add_func_uint8_t_u_u((func_55((*l_83), (*g_78), &g_52, ((*l_87) = &g_65), l_105) || (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int32_t_s(((**l_87) = p_40))), 0x2B1260E8L))), p_40)) == p_40)) > p_40))
    {
        (**l_87) = (p_40 || (*l_88));
        if (g_85.f4)
            goto lbl_109;
    }
    else
    {
        int **l_110 = &g_52;
        int l_112 = 6L;
        int *l_129 = &g_70.f0;
        int *****l_131 = &g_114;
        struct S0 l_137 = {0x565C7EDEL,0x1F1A4D47L,0L,-1L,0xBF8E7FB4L,-2L};
        struct S1 l_175 = {0x19ACE85CL,0x87L,{-5L,0x9411A3A2L,9L,0x75L,-1L,0x7EL}};
        int *l_199 = &g_77.f2.f4;
        char **l_206 = &g_179;
        if (func_55((*l_83), l_82, l_110, l_111, l_112))
        {
            char *l_113 = &g_86.f2.f5;
            int ****l_115 = &g_101;
            int *****l_116 = (void*)0;
            int *****l_117 = &l_115;
            int **l_120 = &g_52;
            struct S0 l_122 = {3L,0x2FEE76F7L,0x54ECD3A2L,0x22L,-4L,1L};
            struct S1 l_155 = {1UL,0xF1L,{0xF2D70274L,0x92CBA2C9L,-2L,0L,0xE382851AL,0x26L}};
            int l_182 = 0L;
        }
        else
        {
            int **l_211 = &l_111;
            struct S1 **l_212 = &g_78;
            struct S1 *l_214 = &g_77;
            struct S1 **l_213 = &l_214;
            for (g_65 = 0; (g_65 >= 6); g_65 = safe_add_func_int16_t_s_s(g_65, 8))
            {
                unsigned short *l_207 = &g_54;
                unsigned short *l_208 = (void*)0;
                unsigned short *l_209 = &g_210;
                (*l_145) ^= (((*l_207) ^= (((void*)0 == l_206) >= g_85.f2)) & ((*l_209) = 0UL));
            }
            l_211 = l_211;
            (*l_213) = ((*l_212) = &l_175);

            ;
            ;
        }

        ;
    }


    ;
    return p_40;
}







static int * func_41(struct S0 p_42, int p_43, int * p_44, struct S0 p_45)
{
    struct S0 *l_71 = &g_70;
    int **l_72 = &g_8;
    int ***l_73 = (void*)0;
    int **l_75 = &g_8;
    int ***l_74 = &l_75;
    struct S1 *l_76 = &g_77;
    unsigned l_79 = 0xF95235BBL;
    int *l_80 = &g_77.f2.f2;
    (*l_71) = g_70;
    (*l_74) = (l_72 = l_72);
    g_78 = l_76;

    ;
    (*l_80) ^= l_79;
    return (*g_51);


}







static struct S0 func_46(int * p_47, int ** p_48, unsigned short p_49)
{
    unsigned short *l_53 = &g_54;
    int *l_61 = (void*)0;
    struct S1 l_62 = {8UL,0L,{0L,2L,0xC2DA50E2L,0xABL,0x2AEC7F51L,3L}};
    int *l_64 = &g_65;
    (*l_64) |= ((((*l_53) = g_31.f3) <= (((-1L) != func_55(l_61, l_62, &l_61, l_61, p_49)) && (((void*)0 == (*p_48)) != g_31.f0))) & (*p_47));
    for (l_62.f2.f2 = 25; (l_62.f2.f2 != (-14)); l_62.f2.f2--)
    {
        struct S0 l_68 = {0x012CB5DCL,-1L,0x91351DBDL,0xCCL,0L,0L};
        return l_68;
    }
    return l_62.f2;
}







static unsigned char func_55(int * p_56, struct S1 p_57, int ** p_58, int * p_59, unsigned p_60)
{
    return g_63;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
    transparent_crc(g_31.f2, "g_31.f2", print_hash_value);
    transparent_crc(g_31.f3, "g_31.f3", print_hash_value);
    transparent_crc(g_31.f4, "g_31.f4", print_hash_value);
    transparent_crc(g_31.f5, "g_31.f5", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_70.f1, "g_70.f1", print_hash_value);
    transparent_crc(g_70.f2, "g_70.f2", print_hash_value);
    transparent_crc(g_70.f3, "g_70.f3", print_hash_value);
    transparent_crc(g_70.f4, "g_70.f4", print_hash_value);
    transparent_crc(g_70.f5, "g_70.f5", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2.f0, "g_77.f2.f0", print_hash_value);
    transparent_crc(g_77.f2.f1, "g_77.f2.f1", print_hash_value);
    transparent_crc(g_77.f2.f2, "g_77.f2.f2", print_hash_value);
    transparent_crc(g_77.f2.f3, "g_77.f2.f3", print_hash_value);
    transparent_crc(g_77.f2.f4, "g_77.f2.f4", print_hash_value);
    transparent_crc(g_77.f2.f5, "g_77.f2.f5", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_85.f3, "g_85.f3", print_hash_value);
    transparent_crc(g_85.f4, "g_85.f4", print_hash_value);
    transparent_crc(g_85.f5, "g_85.f5", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f1, "g_86.f1", print_hash_value);
    transparent_crc(g_86.f2.f0, "g_86.f2.f0", print_hash_value);
    transparent_crc(g_86.f2.f1, "g_86.f2.f1", print_hash_value);
    transparent_crc(g_86.f2.f2, "g_86.f2.f2", print_hash_value);
    transparent_crc(g_86.f2.f3, "g_86.f2.f3", print_hash_value);
    transparent_crc(g_86.f2.f4, "g_86.f2.f4", print_hash_value);
    transparent_crc(g_86.f2.f5, "g_86.f2.f5", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_408.f0, "g_408.f0", print_hash_value);
    transparent_crc(g_408.f1, "g_408.f1", print_hash_value);
    transparent_crc(g_408.f2, "g_408.f2", print_hash_value);
    transparent_crc(g_408.f3, "g_408.f3", print_hash_value);
    transparent_crc(g_408.f4, "g_408.f4", print_hash_value);
    transparent_crc(g_408.f5, "g_408.f5", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
