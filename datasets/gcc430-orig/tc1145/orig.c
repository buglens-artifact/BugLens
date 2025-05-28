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
   char f0;
   unsigned f1;
   short f2;
   int f3;
   char f4;
   int f5;
   short f6;
   unsigned long long f7;
   char f8;
};

struct S1 {
   short f0;
   unsigned short f1;
};

union U2 {
   long long f0;
};

union U3 {
   char f0;
   unsigned short f1;
   char * f2;
   unsigned char f3;
   int f4;
};

union U4 {
   int f0;
};


static char g_10 = 1L;
static char *g_9 = &g_10;
static int g_42 = 3L;
static union U3 g_50 = {0L};
static union U2 g_56 = {6L};
static struct S1 g_57 = {0x4897L,0x8B2FL};
static int g_67 = (-1L);
static struct S0 g_80 = {1L,0x041F5FBDL,1L,1L,-1L,0xBE9700A5L,-2L,0x9AB13FD1FA943C7DLL,0x70L};
static struct S0 *g_90 = &g_80;
static union U4 g_122 = {0L};
static char g_156 = (-8L);
static long long g_176 = 0x16727E77908CCFF5LL;
static struct S1 *g_191 = &g_57;
static struct S1 **g_190 = &g_191;
static int *g_219 = &g_80.f5;
static int **g_218 = &g_219;
static int ***g_217 = &g_218;
static unsigned short *g_297 = (void*)0;
static unsigned short **g_296 = &g_297;
static struct S0 g_300 = {2L,0xEB2E235EL,0x949DL,0x4D3E2A85L,0x44L,0x77A3353FL,5L,0UL,9L};
static unsigned long long *g_315 = &g_300.f7;
static int g_378 = 0xC3DFB1DFL;
static union U4 *g_386 = &g_122;
static struct S0 *g_393 = &g_80;
static char **g_426 = &g_9;
static char ***g_425 = &g_426;
static unsigned short ****g_519 = (void*)0;
static unsigned short ***g_581 = &g_296;
static unsigned short ****g_580 = &g_581;
static int *g_595 = &g_42;
static int g_607 = 1L;
static int g_611 = 0x76EA95B3L;
static union U3 *g_735 = &g_50;
static union U3 **g_734 = &g_735;
static char g_745 = 0x34L;
static union U2 *g_773 = &g_56;
static union U2 **g_772 = &g_773;
static int *g_780 = &g_42;
static char g_803 = 0xE9L;
static unsigned g_812 = 0xFA37E4DBL;
static int g_832 = (-1L);
static struct S1 g_841 = {-5L,0xC4D4L};



static unsigned func_1(void);
static char ** func_2(char ** p_3);
static char ** func_4(unsigned char p_5, char * p_6, struct S1 p_7);
static struct S1 func_11(unsigned p_12, short p_13, union U4 p_14, int p_15, unsigned p_16);
static char ** func_17(unsigned short p_18);
static int * func_19(char p_20, int p_21, short p_22);
static char * func_27(char * p_28, char ** p_29);
static char * func_30(union U2 p_31, char ** p_32, struct S1 p_33, char ** p_34, char ** p_35);
static union U2 func_36(unsigned long long p_37, struct S0 p_38);
static short func_39(int * p_40);
static unsigned func_1(void)
{
    unsigned l_8 = 0x265E3EDFL;
    char ***l_167 = (void*)0;
    char **l_169 = &g_9;
    char ***l_168 = &l_169;
    int l_174 = 0xCA3772BFL;
    long long *l_175 = &g_176;
    char **l_416 = &g_9;
    struct S0 l_478 = {3L,0UL,0x5847L,0x739B3D96L,0x7BL,0x179A8872L,-10L,0x99978F16825D9836LL,4L};
    unsigned long long l_565 = 9UL;
    unsigned l_569 = 3UL;
    unsigned long long *l_630 = (void*)0;
    unsigned short *l_637 = &g_57.f1;
    unsigned *l_674 = (void*)0;
    unsigned **l_673 = &l_674;
    union U2 *l_676 = &g_56;
    int *l_746 = &l_174;
    union U4 l_840 = {0L};
    struct S1 l_843 = {0x11CBL,1UL};
    l_416 = ((*l_168) = func_2(func_4(l_8, g_9, func_11(((((*l_168) = func_17(l_8)) != (void*)0) != (((safe_add_func_int16_t_s_s(((((safe_div_func_int16_t_s_s((l_8 > (((l_174 = (l_8 <= g_122.f0)) || ((*l_175) = (g_122.f0 >= l_8))) ^ l_8)), g_57.f0)) < g_57.f0) != 0x4D6CL) < l_8), g_57.f0)) > (-1L)) & 1L)), l_8, g_122, g_57.f0, l_8))));
    if (l_8)
    {
        struct S0 l_417 = {6L,2UL,0x923CL,6L,-1L,0xFA682BD6L,0x4E95L,0UL,8L};
        struct S0 *l_418 = &g_80;
        int *l_419 = &g_122.f0;
        (*l_418) = l_417;
        (*l_418) = (*l_418);
        (*l_419) = (l_174 <= l_417.f3);
    }
    else
    {
        unsigned long long l_420 = 0xC3B8FEF89A33DC61LL;
        int *l_443 = &g_122.f0;
        union U2 *l_526 = &g_56;
        struct S1 l_549 = {0x1FDAL,1UL};
        char **l_600 = &g_9;
        int *l_602 = &g_300.f5;
        unsigned short ***l_619 = (void*)0;
        struct S0 *l_661 = &g_300;
        union U4 *l_687 = (void*)0;
        unsigned long long **l_692 = &g_315;
        unsigned long long **l_693 = &l_630;
        unsigned short *****l_741 = &g_519;
        int *l_761 = &g_611;
        int **l_760 = &l_761;
        long long l_783 = (-1L);
        int *l_819 = &g_42;
        if (l_420)
        {
            char ***l_423 = &l_416;
            char ****l_424 = &l_167;
            int l_431 = 0xF358BD54L;
            int **l_435 = &g_219;
            union U4 l_446 = {1L};
            unsigned char l_449 = 1UL;
            struct S1 l_456 = {0xAD66L,0xD37AL};
            int *l_480 = &g_80.f5;
            if ((g_378 | (((*l_424) = l_423) != g_425)))
            {
                int **l_434 = &g_219;
                unsigned *l_436 = &l_8;
                unsigned short *l_440 = &g_57.f1;
                g_122.f0 = (((*l_440) = (safe_sub_func_uint16_t_u_u(l_174, (safe_rshift_func_uint16_t_u_s(l_431, (safe_add_func_int64_t_s_s(((((*l_436) = (l_434 == l_435)) == (((safe_mul_func_uint8_t_u_u((l_420 >= ((((safe_unary_minus_func_int64_t_s(g_300.f0)) < (+(0UL > func_39(((*l_435) = (*l_434)))))) ^ 0x52L) <= 0xC20BL)), g_300.f4)) == l_420) > (*g_315))) <= g_176), 9L))))))) <= g_50.f0);
            }
            else
            {
                unsigned char l_450 = 0x1EL;
                union U4 *l_457 = (void*)0;
                struct S0 l_479 = {0xC9L,0UL,0x9369L,0xFC3E2CE9L,0x3DL,0x3858311BL,-3L,0x8773EDCD0FB91B11LL,0xE9L};
                if ((safe_rshift_func_int16_t_s_s(func_39(l_443), 12)))
                {
                    union U3 *l_445 = &g_50;
                    union U3 **l_444 = &l_445;
                    int l_455 = (-1L);
                    (*l_444) = &g_50;
                    l_456 = (**g_190);
                }
                else
                {
                    union U4 **l_458 = &l_457;
                    int l_462 = 0x75F30463L;
                    (*l_458) = l_457;
                    for (g_80.f6 = 0; (g_80.f6 <= 10); ++g_80.f6)
                    {
                        char l_461 = (-2L);
                        (*l_435) = func_19((***g_425), (l_462 = l_461), g_42);
                        (**g_217) = &l_174;
                        (*l_443) = (safe_unary_minus_func_uint64_t_u(((*g_315) = (safe_lshift_func_int8_t_s_u(((g_80.f7 || (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(0xD0F7L, ((safe_sub_func_int8_t_s_s((~(0x7B180F1149AF9143LL | (l_174 = func_39((*g_218))))), (safe_mul_func_int16_t_s_s(l_8, (3L != 0x1FL))))) | (safe_add_func_int16_t_s_s(l_462, 0xAAEDL))))), g_56.f0))) != l_450), 3)))));
                    }
                    for (g_300.f8 = 0; (g_300.f8 != 16); ++g_300.f8)
                    {
                        l_479 = l_478;
                    }
                }
            }
            (*l_480) = (*l_443);
            for (g_300.f6 = 0; (g_300.f6 <= 16); g_300.f6++)
            {
                int l_483 = (-1L);
                return l_483;
            }
        }
        else
        {
            int *l_492 = (void*)0;
            struct S0 l_510 = {0x82L,1UL,0x8289L,0L,1L,0L,-1L,0xB4D982BF4B3F0954LL,0x9DL};
            unsigned short ***l_521 = (void*)0;
            unsigned short ****l_520 = &l_521;
            unsigned short *****l_579 = &g_519;
            char *l_601 = &g_300.f4;
            int *l_616 = &l_510.f5;
            unsigned long long *l_629 = &l_510.f7;
            if (((safe_sub_func_int8_t_s_s((-9L), (**g_426))) == (func_39((**g_217)) || (safe_mul_func_uint8_t_u_u(func_39(&l_174), ((safe_sub_func_int32_t_s_s(((((safe_mod_func_int16_t_s_s((-1L), func_39(l_492))) > g_300.f0) > 5L) >= 0xD7B68580AB61AD76LL), 0x339245AEL)) == 1L))))))
            {
                unsigned char l_499 = 0xEDL;
                int *l_516 = &l_510.f5;
                struct S1 l_528 = {0x7F7EL,0x7173L};
                if ((l_478.f4 == (*l_443)))
                {
                    long long l_497 = 0x41ECF1D65AB089EFLL;
                    for (l_478.f7 = 14; (l_478.f7 >= 59); l_478.f7 = safe_add_func_int32_t_s_s(l_478.f7, 1))
                    {
                        unsigned short *l_498 = &g_50.f1;
                        l_499 = (l_478.f3 >= ((*l_498) = (safe_lshift_func_uint16_t_u_s(l_497, 10))));
                    }
                    for (g_300.f1 = 20; (g_300.f1 < 57); g_300.f1 = safe_add_func_int8_t_s_s(g_300.f1, 1))
                    {
                        return l_478.f7;
                    }
                    for (l_478.f6 = (-17); (l_478.f6 < (-7)); l_478.f6 = safe_add_func_int32_t_s_s(l_478.f6, 7))
                    {
                        return g_56.f0;
                    }
                    (**g_217) = func_19(func_39((**g_217)), g_300.f8, l_478.f2);
                }
                else
                {
                    union U3 *l_505 = &g_50;
                    union U3 **l_504 = &l_505;
                    union U3 *l_507 = &g_50;
                    union U3 **l_506 = &l_507;
                    union U3 *l_509 = &g_50;
                    union U3 **l_508 = &l_509;
                    struct S0 *l_511 = (void*)0;
                    struct S0 *l_512 = &l_510;
                    int *l_515 = &g_42;
                    unsigned short *l_527 = &g_50.f1;
                    (*l_508) = ((*l_506) = ((*l_504) = &g_50));
                    (*l_512) = l_510;
                    if (((safe_rshift_func_int16_t_s_u(func_39(l_515), (+(func_39(l_516) || (safe_sub_func_int8_t_s_s((**g_426), (g_519 == l_520))))))) && ((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((*l_527) = (l_526 != &g_56)), g_80.f3)), g_378)) <= g_300.f1)))
                    {
                        return (*l_443);
                    }
                    else
                    {
                        int *l_529 = &l_174;
                        (*g_191) = l_528;
                        (*l_516) = ((func_39(&l_174) >= ((func_39(l_529) != (g_176 | (((*l_529) ^ (!0x468AL)) <= ((safe_mod_func_uint32_t_u_u(((*l_443) = 0UL), (1UL | g_80.f8))) < (*l_515))))) >= (*l_515))) > (-10L));
                        (**g_217) = (**g_217);
                    }
                    (*l_515) = ((*l_516) = 0x08DB7D82L);
                }
                (*g_190) = (*g_190);
                return (*l_443);
            }
            else
            {
                unsigned long long *l_538 = &l_478.f7;
                struct S0 *l_550 = (void*)0;
                struct S0 **l_551 = (void*)0;
                struct S0 **l_552 = &g_90;
                int l_568 = (-1L);
                for (g_80.f4 = 0; (g_80.f4 < 25); g_80.f4 = safe_add_func_uint16_t_u_u(g_80.f4, 6))
                {
                    unsigned l_540 = 4UL;
                    for (l_478.f8 = (-24); (l_478.f8 <= (-19)); l_478.f8++)
                    {
                        unsigned long long **l_539 = &l_538;
                        (*g_191) = l_549;
                    }
                }
                (*l_552) = l_550;
                for (l_8 = 3; (l_8 != 58); l_8 = safe_add_func_uint8_t_u_u(l_8, 2))
                {
                    for (g_80.f8 = 0; (g_80.f8 > 3); g_80.f8 = safe_add_func_uint16_t_u_u(g_80.f8, 7))
                    {
                        l_492 = ((*g_218) = (void*)0);
                    }
                    if (g_156)
                    {
                        unsigned long long **l_558 = &l_538;
                        unsigned long long ***l_557 = &l_558;
                        (*l_557) = &l_538;
                        (*g_218) = func_19(func_39((*g_218)), l_478.f1, g_300.f4);
                        (*g_219) = l_478.f2;
                    }
                    else
                    {
                        int l_570 = 7L;
                        (**g_217) = func_19((*g_9), g_300.f7, (safe_mod_func_int16_t_s_s(0x3CD6L, (((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(l_565, (safe_div_func_uint16_t_u_u(l_568, (*l_443))))), l_569)) != l_570) && (g_300.f3 < 0x861CFDD8L)))));
                    }
                }
                for (g_80.f3 = 0; (g_80.f3 == (-1)); --g_80.f3)
                {
                    int **l_573 = &l_443;
                    (*l_573) = ((**g_217) = (*g_218));
                    (**g_217) = &l_568;
                    (***g_217) = (safe_mod_func_int8_t_s_s(0xA2L, l_478.f0));
                    if ((***g_217))
                        continue;
                }
            }
            for (l_478.f3 = 10; (l_478.f3 < 15); l_478.f3++)
            {
                long long l_578 = (-1L);
                (**g_217) = l_492;
                (*g_218) = func_19((***g_425), (g_378 = l_578), func_39((*g_218)));
            }
            if ((((*l_579) = g_519) != (g_580 = g_580)))
            {
                int l_584 = 1L;
                int *l_587 = &g_122.f0;
                int *l_588 = &g_80.f5;
                int *l_589 = &g_300.f5;
                int *l_590 = &g_67;
                char *l_599 = &l_478.f0;
                struct S0 l_631 = {3L,0UL,0xE4A3L,0x9173029CL,2L,0x2B6BBC50L,0xEC51L,18446744073709551615UL,0xDCL};
                union U4 *l_633 = &g_122;
                union U2 **l_677 = (void*)0;
                union U2 **l_678 = &l_526;
                (*l_590) = ((*l_589) = ((*l_588) = ((*l_587) = (safe_add_func_uint64_t_u_u((1UL & l_584), (safe_mul_func_int8_t_s_s((g_10 <= l_478.f7), g_300.f0)))))));
                for (l_478.f3 = 19; (l_478.f3 <= 13); l_478.f3 = safe_sub_func_int8_t_s_s(l_478.f3, 9))
                {
                    int *l_598 = &g_122.f0;
                    short l_608 = 6L;
                    unsigned short ***l_620 = &g_296;
                    unsigned *l_621 = &l_8;
                    char ****l_624 = &l_167;
                    unsigned long long **l_627 = (void*)0;
                    unsigned long long **l_628 = &g_315;
                    struct S0 l_632 = {0x3EL,18446744073709551612UL,0x3D98L,0xAD27CDC5L,-1L,-3L,0xE506L,0xD94D7C3677E79714LL,-6L};
                    short *l_659 = &l_478.f6;
                    if (func_39(func_19(((safe_mod_func_uint32_t_u_u((func_39(g_595) & (safe_rshift_func_int16_t_s_s(func_39(l_598), (((**l_168) = func_27(func_27(func_27(l_599, l_600), (*l_168)), (*g_425))) != l_601)))), (*l_598))) | (*l_589)), (*l_598), g_80.f7)))
                    {
                        (*l_589) = ((*l_588) = ((*g_595) = (*g_595)));
                        (**g_217) = &g_67;
                        if ((*l_589))
                            continue;
                    }
                    else
                    {
                        int *l_612 = &g_122.f0;
                        unsigned *l_614 = &l_569;
                        unsigned **l_613 = &l_614;
                        int *l_615 = (void*)0;
                        l_612 = func_19((func_39(&l_174) & ((*l_588) > (((+(l_174 = func_39(l_602))) || ((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(((g_607 = (-5L)) > l_608), 6)) | (g_80.f8 && (g_611 == (*l_602)))), g_122.f0)) || (*g_315))) && (*l_590)))), g_67, (*l_602));
                        (**g_217) = func_19((***g_425), ((*l_598) = (g_42 != (0xC3L ^ (((*l_613) = g_595) == l_492)))), (g_300.f4 < (g_80.f6 < func_39((l_616 = &l_174)))));
                    }
                    if (func_39(((**g_217) = func_19(((((*l_175) = ((safe_add_func_int32_t_s_s(((*l_588) = (l_619 == ((*l_520) = ((*g_580) = l_620)))), ((((*l_621) = func_39((*g_218))) < (safe_rshift_func_int16_t_s_u(((l_624 == (void*)0) >= (safe_mul_func_int8_t_s_s((((*l_628) = &l_420) != (l_630 = l_629)), (0L != 0x05851123L)))), (*l_602)))) && (**g_426)))) & l_478.f8)) <= l_478.f5) == 65527UL), g_122.f0, l_478.f3))))
                    {
                        union U4 **l_634 = &l_633;
                        union U4 **l_635 = &g_386;
                        int **l_638 = &l_616;
                        l_632 = l_631;
                        (*l_635) = ((*l_634) = l_633);
                        (*g_191) = (*g_191);
                    }
                    else
                    {
                        (*l_598) = (safe_rshift_func_uint8_t_u_s((*l_598), (*l_598)));
                        (*g_219) = (safe_lshift_func_int8_t_s_u(((*g_9) = (safe_add_func_int64_t_s_s(g_80.f1, 0xC72FAB50AFDC8AD3LL))), 1));
                        if ((**g_218))
                            break;
                    }
                    (**g_217) = (**g_217);
                    if (((*l_598) > (safe_lshift_func_int8_t_s_u((((*l_659) = (safe_mul_func_int8_t_s_s((0xA75F79AEL || ((*l_590) = ((((*l_616) = (!0x0704L)) || (safe_add_func_uint16_t_u_u((0xC4CC96B6824F0F7BLL == l_478.f1), (safe_rshift_func_uint16_t_u_s(((void*)0 != &g_190), 0))))) >= (safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((void*)0 != g_315), 0xC22FL)), 0x203CL)), 3))))), g_56.f0))) < g_300.f3), 4))))
                    {
                        struct S0 *l_660 = (void*)0;
                        struct S0 **l_662 = &l_661;
                        (*l_598) = (*g_219);
                        l_661 = l_660;
                        (*l_662) = &g_300;
                        (*g_191) = (**g_190);
                    }
                    else
                    {
                        (**g_217) = (**g_217);
                        (*l_587) = (safe_div_func_uint64_t_u_u((*l_598), (*g_315)));
                        if ((*g_219))
                            continue;
                    }
                }
                for (l_478.f0 = 0; (l_478.f0 < 16); l_478.f0 = safe_add_func_int16_t_s_s(l_478.f0, 8))
                {
                    int l_669 = 1L;
                    int l_670 = 0x4EA0DA7AL;
                    unsigned ***l_675 = &l_673;
                    for (g_80.f8 = 0; (g_80.f8 > 25); g_80.f8 = safe_add_func_int8_t_s_s(g_80.f8, 1))
                    {
                        l_670 = (l_669 = ((*l_590) = (*g_595)));
                        if (l_478.f2)
                            continue;
                        (*l_661) = l_478;
                    }
                    for (l_420 = 0; (l_420 > 34); l_420 = safe_add_func_uint32_t_u_u(l_420, 3))
                    {
                        (**g_217) = l_616;
                        return (*l_602);
                    }
                    (*l_675) = l_673;
                    if ((*l_602))
                        break;
                }
                (*l_678) = l_676;
            }
            else
            {
                union U4 **l_679 = (void*)0;
                union U4 **l_680 = &g_386;
                struct S0 *l_681 = &g_300;
                struct S0 **l_682 = &l_661;
                (*g_218) = l_602;
                (*l_661) = l_478;
                (*l_680) = (void*)0;
                (*l_682) = l_681;
            }
            for (l_549.f1 = 0; (l_549.f1 >= 41); ++l_549.f1)
            {
                for (l_510.f4 = 9; (l_510.f4 == (-12)); l_510.f4 = safe_sub_func_uint64_t_u_u(l_510.f4, 2))
                {
                    union U4 **l_688 = &l_687;
                    int l_689 = 0xF795772DL;
                    (*l_688) = l_687;
                    return l_689;
                }
            }
        }
        for (g_80.f0 = 0; (g_80.f0 <= (-1)); g_80.f0 = safe_sub_func_uint8_t_u_u(g_80.f0, 1))
        {
            unsigned l_699 = 0xA85428DDL;
            union U2 *l_731 = &g_56;
            if ((*g_595))
            {
                short l_707 = 5L;
                (**g_217) = l_602;
                if ((l_692 == (l_693 = &g_315)))
                {
                    long long l_698 = 1L;
                    unsigned char l_722 = 0UL;
                    int *l_723 = &g_122.f0;
                    unsigned short *l_724 = &l_549.f1;
                    unsigned char *l_725 = &g_50.f3;
                    for (g_57.f0 = 27; (g_57.f0 != (-6)); g_57.f0 = safe_sub_func_int32_t_s_s(g_57.f0, 9))
                    {
                        unsigned l_704 = 0x520941F1L;
                        (***g_217) = (safe_rshift_func_uint16_t_u_s((l_698 & (func_39(func_19(l_699, (safe_mod_func_uint64_t_u_u(func_39((*g_218)), (safe_add_func_uint16_t_u_u(l_704, (safe_rshift_func_int8_t_s_u(l_707, g_50.f3)))))), ((g_300.f5 < (safe_rshift_func_int8_t_s_s((((*l_175) = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(l_478.f6, 5)), 5)), g_300.f4))) > (*g_315)), l_699))) || g_300.f6))) || 0x17ADA178L)), g_10));
                    }
                    (*l_602) = func_39(func_19((safe_mod_func_uint16_t_u_u(0x930EL, (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_722, g_300.f6)), ((*l_725) = (((*l_724) = ((*l_637) = func_39(((**g_217) = l_723)))) <= func_39(&l_174))))))), g_300.f0, g_57.f0));
                    if ((***g_217))
                        break;
                    for (g_57.f1 = (-11); (g_57.f1 > 45); g_57.f1 = safe_add_func_uint16_t_u_u(g_57.f1, 8))
                    {
                        (**g_217) = (**g_217);
                        (*g_218) = l_723;
                        return g_300.f7;
                    }
                }
                else
                {
                    union U2 **l_728 = (void*)0;
                    union U2 **l_729 = (void*)0;
                    union U2 **l_730 = &l_676;
                    l_731 = ((*l_730) = &g_56);
                }
            }
            else
            {
                (*l_602) = (l_565 > g_50.f0);
                g_595 = ((*g_218) = &l_174);
                (*g_595) = (*l_602);
            }
            for (l_478.f8 = 22; (l_478.f8 == (-23)); l_478.f8--)
            {
                union U3 ***l_736 = &g_734;
                (*l_736) = g_734;
            }
            for (l_549.f1 = (-29); (l_549.f1 > 6); ++l_549.f1)
            {
                if ((*g_219))
                    break;
                (*l_602) = (***g_217);
                (*l_602) = (((void*)0 == &l_731) > (((*g_219) & func_39((**g_217))) == g_80.f6));
            }
        }
        if (l_478.f7)
        {
            unsigned short ******l_742 = &l_741;
            unsigned short *****l_744 = &g_519;
            unsigned short ******l_743 = &l_744;
            int l_757 = 0L;
            if ((safe_add_func_uint32_t_u_u(((g_745 = (((*l_743) = ((*l_742) = l_741)) != &g_519)) != func_39(l_746)), (g_57.f1 == 0xC6L))))
            {
                int *l_749 = &g_80.f5;
                (*l_602) = ((-7L) >= (g_50.f3 = (&l_674 != (void*)0)));
                (*g_595) = func_39(l_749);
                (*l_749) = 1L;
            }
            else
            {
                (*g_218) = &g_42;
                (*g_734) = (*g_734);
            }
            if (((*l_746) = 7L))
            {
                struct S0 l_750 = {0xB3L,0x590C1F20L,-1L,0x71F2BB0EL,5L,1L,-8L,0UL,0x36L};
                (*l_661) = l_750;
            }
            else
            {
                int *l_755 = (void*)0;
                (*l_602) = (-4L);
                for (g_80.f8 = (-15); (g_80.f8 != 13); g_80.f8 = safe_add_func_int16_t_s_s(g_80.f8, 5))
                {
                    int *l_753 = &g_80.f5;
                    int ***l_762 = (void*)0;
                    int ***l_763 = &l_760;
                    union U2 ***l_774 = &g_772;
                    int l_777 = (-10L);
                }
                (*g_218) = &l_174;
            }
        }
        else
        {
            union U3 *l_778 = &g_50;
            int l_779 = 4L;
            long long l_804 = 1L;
            (*g_734) = l_778;
            (*g_595) = (*g_595);
            g_780 = func_19(((**g_426) = ((g_80.f8 < 7L) | 0x94L)), ((*l_761) = g_300.f8), l_779);
            if (((*g_595) | ((*l_602) = ((void*)0 != &l_778))))
            {
                unsigned l_802 = 0UL;
                (*g_595) = (l_779 & l_783);
                for (g_122.f0 = 0; (g_122.f0 <= 25); ++g_122.f0)
                {
                    char l_790 = 0x27L;
                    int *l_793 = &l_174;
                    if ((safe_mul_func_uint8_t_u_u(((g_80.f2 < (*l_746)) || (l_790 >= (g_122.f0 && (g_80.f6 >= ((&l_779 != (void*)0) <= ((safe_lshift_func_int16_t_s_s(func_39(&g_42), (*l_602))) != 0x53D8L)))))), (**g_426))))
                    {
                        unsigned *l_796 = (void*)0;
                        unsigned *l_797 = &l_8;
                        (**g_217) = l_793;
                        l_793 = func_19((func_39((*g_218)) >= func_39((**g_217))), ((safe_add_func_int16_t_s_s((((*l_797) = (func_39(l_793) == 0L)) || (l_779 = (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_50.f0, l_802)), 2L)))), g_803)) >= (*g_219)), l_804);
                        (*l_793) = func_39((*g_218));
                        return g_122.f0;
                    }
                    else
                    {
                        (*g_218) = (void*)0;
                    }
                    return l_802;
                }
                (*g_218) = (void*)0;
            }
            else
            {
                unsigned l_818 = 0x7B547737L;
                struct S1 l_842 = {0x6D1FL,65528UL};
                for (g_607 = 26; (g_607 >= (-17)); g_607 = safe_sub_func_int8_t_s_s(g_607, 1))
                {
                    unsigned l_811 = 7UL;
                    (*g_595) = (safe_sub_func_int64_t_s_s((((*g_217) = (*g_217)) == (void*)0), g_300.f0));
                    if ((safe_lshift_func_int16_t_s_s(((void*)0 != (*g_734)), 2)))
                    {
                        (**g_190) = (*g_191);
                        (**g_217) = (void*)0;
                        g_812 = ((*g_315) & l_811);
                    }
                    else
                    {
                        (*g_772) = (*g_772);
                        return g_80.f6;
                    }
                }
                for (g_80.f4 = 27; (g_80.f4 < 24); g_80.f4 = safe_sub_func_uint8_t_u_u(g_80.f4, 1))
                {
                    short *l_817 = &l_549.f0;
                    short **l_816 = &l_817;
                    short ***l_815 = &l_816;
                    int l_837 = 0x189F7F30L;
                    (*l_815) = (void*)0;
                    (*g_780) = (((*g_580) == (void*)0) > (l_818 | (g_300.f4 & (-1L))));
                    l_819 = (void*)0;
                    if ((safe_sub_func_uint16_t_u_u(((*g_595) < (safe_mul_func_uint8_t_u_u(g_300.f6, ((safe_div_func_int8_t_s_s(l_818, (safe_mod_func_int16_t_s_s(((*l_817) = (((safe_sub_func_int16_t_s_s(((l_804 && (g_176 ^ ((*g_315) | (safe_add_func_uint64_t_u_u(0x6361C30060B5780ELL, (((250UL >= g_300.f0) ^ 0xCBL) > 0L)))))) < g_300.f0), 0x954BL)) >= 0x21E5L) || 0x6909L)), g_832)))) != g_80.f5)))), 0x9CCBL)))
                    {
                        (**g_190) = g_841;
                        (*g_218) = (void*)0;
                    }
                    else
                    {
                        l_843 = l_842;
                    }
                }
            }
        }
    }
    (**g_217) = &l_174;
    return g_300.f6;
}







static char ** func_2(char ** p_3)
{
    int *l_415 = (void*)0;
    (**g_190) = (*g_191);
    (**g_217) = (*g_218);
    (**g_217) = l_415;
    return p_3;
}







static char ** func_4(unsigned char p_5, char * p_6, struct S1 p_7)
{
    char **l_414 = &g_9;
    return l_414;
}







static struct S1 func_11(unsigned p_12, short p_13, union U4 p_14, int p_15, unsigned p_16)
{
    union U3 *l_178 = &g_50;
    union U3 **l_177 = &l_178;
    int l_179 = 9L;
    int *l_181 = &g_42;
    int **l_180 = &l_181;
    struct S1 *l_189 = &g_57;
    struct S1 **l_188 = &l_189;
    unsigned short *l_249 = &g_57.f1;
    union U2 *l_280 = &g_56;
    union U4 *l_362 = &g_122;
    struct S0 *l_387 = (void*)0;
    long long *l_405 = &g_176;
    union U3 *l_413 = &g_50;
    (*l_180) = func_19(((((void*)0 != l_177) != l_179) == p_16), p_14.f0, (+l_179));
    for (p_15 = 0; (p_15 >= 21); ++p_15)
    {
        long long l_208 = 1L;
        int l_220 = 0L;
        unsigned char l_236 = 0xBCL;
        struct S0 *l_310 = &g_80;
        union U2 *l_323 = &g_56;
        int *l_352 = (void*)0;
        struct S1 l_360 = {1L,0UL};
        struct S0 **l_388 = &l_387;
        for (g_80.f2 = 5; (g_80.f2 > (-30)); g_80.f2 = safe_sub_func_int32_t_s_s(g_80.f2, 5))
        {
            int *l_201 = (void*)0;
            int *l_209 = &l_179;
            int l_284 = (-2L);
            for (g_80.f1 = 0; (g_80.f1 == 36); g_80.f1 = safe_add_func_int32_t_s_s(g_80.f1, 4))
            {
                struct S1 ***l_192 = &g_190;
                int *l_210 = &g_122.f0;
                char l_237 = 0x3CL;
                int *l_242 = &g_122.f0;
                unsigned short *l_243 = &g_50.f1;
                union U3 *l_287 = &g_50;
                if (((l_188 == ((*l_192) = g_190)) <= 0x3498CC23DAE7EE4ALL))
                {
                    if (g_80.f8)
                    {
                        (*l_180) = (*l_180);
                    }
                    else
                    {
                        (*l_180) = &g_42;
                    }
                }
                else
                {
                    long long *l_211 = &g_56.f0;
                    int l_212 = (-5L);
                    (*l_180) = func_19((safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((g_80.f5 = ((**l_180) = (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(p_15, 7)), (func_39(&p_15) != func_39(l_201)))))), (safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(p_14.f0, 1)), ((*l_211) = (l_208 & (l_209 == (l_210 = (void*)0)))))))), l_208)), l_208, l_212);
                }
                if ((safe_sub_func_uint32_t_u_u(0x97FD67A2L, g_80.f5)))
                {
                    union U2 *l_215 = &g_56;
                    union U2 **l_216 = &l_215;
                    (*l_216) = l_215;
                    (**l_180) = 0xD341E3A3L;
                    l_220 = (func_39(&g_67) <= (g_80.f6 && (g_217 != &g_218)));
                }
                else
                {
                    short l_235 = 0L;
                    (***g_217) = ((-5L) | l_208);
                    (**g_218) = (safe_add_func_uint16_t_u_u(5UL, (safe_mul_func_int8_t_s_s((g_80.f3 & (safe_mod_func_uint32_t_u_u((!(g_156 | ((*g_219) & 8L))), (safe_add_func_int64_t_s_s((g_176 & p_15), (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_u((**l_180), 3)) != (func_39((**g_217)) == l_235)) != 1L) && g_80.f6), l_236)), l_237))))))), p_16))));
                    for (g_156 = 29; (g_156 > (-24)); g_156 = safe_sub_func_int64_t_s_s(g_156, 1))
                    {
                        (**g_218) = ((l_208 != func_39((*g_218))) || g_42);
                        (**g_218) = 0L;
                        return (**g_190);
                    }
                }
                if (((func_39(l_242) && (g_57.f0 < (((0xA146L & g_57.f1) != (*l_242)) | ((*l_243) = g_80.f1)))) & (**l_180)))
                {
                    short *l_246 = &g_80.f6;
                    unsigned short **l_250 = (void*)0;
                    unsigned short **l_251 = &l_243;
                    int l_262 = 0x3F422AACL;
                    unsigned char *l_269 = &g_50.f3;
                    (***g_217) = ((safe_add_func_uint8_t_u_u(((((*l_246) = ((*l_242) && (*l_242))) >= g_80.f1) & ((safe_add_func_int64_t_s_s((l_246 == ((*l_251) = l_249)), g_156)) != (safe_div_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s((*l_242), ((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((-1L), l_208)), p_13)), 4UL)) >= 0x9E38A552L))) || l_262), 0x44B8FFC6A774E767LL)))), p_12)) | 0xBCAAB667D2B290D5LL);
                    if ((safe_div_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(255UL, (safe_mul_func_uint8_t_u_u((((*l_246) = g_156) == g_42), (p_15 == ((*l_269) = (p_15 >= (p_12 & (-10L))))))))) && (safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((p_12 || (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((*l_269) = g_80.f6), (*g_9))), (*l_181))), l_262))) & 253UL), l_208)), p_14.f0))), 4L)))
                    {
                        union U2 **l_281 = (void*)0;
                        union U2 **l_282 = (void*)0;
                        union U2 **l_283 = &l_280;
                        (**l_180) = 0xD0F59D7EL;
                        (*l_283) = l_280;
                    }
                    else
                    {
                        return (*g_191);
                    }
                    (*l_180) = func_19(l_284, l_236, g_122.f0);
                }
                else
                {
                    struct S1 l_288 = {0x17BBL,0xD6DCL};
                    (*g_219) = p_16;
                    for (g_57.f0 = 0; (g_57.f0 > 23); g_57.f0 = safe_add_func_uint32_t_u_u(g_57.f0, 6))
                    {
                        (*g_218) = l_210;
                        (*l_177) = l_287;
                    }
                    return l_288;
                }
                if (p_15)
                    break;
            }
            if (l_220)
                continue;
        }
        for (p_14.f0 = 0; (p_14.f0 <= 23); p_14.f0 = safe_add_func_uint64_t_u_u(p_14.f0, 9))
        {
            int l_295 = (-1L);
            struct S0 l_299 = {-10L,18446744073709551615UL,0x79B6L,0L,5L,-3L,0xAB73L,0x13E7CBB95996FE7BLL,6L};
            union U4 *l_332 = &g_122;
            int ***l_339 = &g_218;
            struct S1 l_361 = {-4L,1UL};
        }
        (***g_217) = (p_15 & (p_13 = func_39((**g_217))));
        (*l_388) = l_387;
    }
    for (p_16 = 0; (p_16 == 24); p_16 = safe_add_func_int64_t_s_s(p_16, 5))
    {
        struct S0 **l_391 = (void*)0;
        struct S0 **l_392 = &g_90;
        g_393 = ((*l_392) = l_387);
        g_296 = &g_297;
    }
    if (func_39(func_19((**l_180), p_14.f0, g_50.f0)))
    {
        unsigned short l_402 = 0x17D2L;
        unsigned long long *l_406 = &g_80.f7;
        unsigned char *l_407 = &g_50.f3;
        int l_408 = (-9L);
        union U4 *l_410 = &g_122;
        if ((safe_div_func_int32_t_s_s(((**g_218) = ((*l_181) = (+p_16))), (p_14.f0 || (+(safe_lshift_func_int16_t_s_u(g_56.f0, ((safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((&g_122 == (void*)0) < 0xDD1987B8L), (l_408 = (0xB339EBD8L && (l_402 == (((*l_407) = ((((*l_406) = ((*g_315) = (safe_mod_func_uint64_t_u_u(((void*)0 == l_405), g_80.f1)))) != (-1L)) < 7L)) == 0UL)))))), g_80.f3)) ^ p_12))))))))
        {
            short l_409 = 0x1C1DL;
            (*g_219) = (l_409 ^ ((func_39(&p_15) <= (&g_156 != &g_10)) <= p_12));
        }
        else
        {
            union U4 **l_411 = &g_386;
            struct S1 *l_412 = &g_57;
            (*l_411) = l_410;
            (*g_190) = l_412;
        }
    }
    else
    {
        p_15 = (**g_218);
        (*l_177) = &g_50;
        (*l_177) = l_413;
    }
    return (**l_188);
}







static char ** func_17(unsigned short p_18)
{
    int l_23 = 0x5AF9F7C8L;
    int *l_41 = &g_42;
    struct S0 l_48 = {-1L,18446744073709551615UL,1L,0x7032F1EFL,0xE0L,0xDF7DC239L,0x8F15L,0xA3766593C394A737LL,-6L};
    char **l_58 = (void*)0;
    struct S1 l_144 = {0xD739L,65530UL};
    unsigned short *l_166 = &l_144.f1;
    unsigned short **l_165 = &l_166;
    unsigned short ***l_164 = &l_165;
    if (p_18)
    {
        char *l_26 = &g_10;
        int l_45 = 0x9AB8A87EL;
        union U2 *l_55 = &g_56;
        char *l_133 = &l_48.f0;
        char **l_132 = &l_133;
        int **l_143 = &l_41;
        struct S1 *l_145 = &l_144;
        (*l_143) = func_19(l_23, (safe_add_func_uint64_t_u_u((l_26 != ((*l_132) = func_27(func_30(((*l_55) = func_36((func_39(l_41) ^ (l_45 && (safe_mul_func_int8_t_s_s(l_45, g_42)))), l_48)), &g_9, g_57, l_58, &l_26), l_58))), p_18)), l_45);
        (*l_145) = l_144;
    }
    else
    {
        for (p_18 = 0; (p_18 > 51); p_18++)
        {
            for (g_80.f6 = (-5); (g_80.f6 < 5); ++g_80.f6)
            {
                union U4 *l_150 = (void*)0;
                union U4 **l_151 = &l_150;
                (*l_151) = l_150;
            }
        }
    }
    if ((p_18 >= p_18))
    {
        char **l_157 = &g_9;
        struct S0 l_160 = {0x6CL,0xDEFFE84FL,0xEDA7L,0L,5L,0x662417ACL,0xC07FL,0x19F4420CCC24DD98LL,4L};
        if ((safe_lshift_func_uint16_t_u_s(((*l_41) ^ p_18), (safe_unary_minus_func_int8_t_s(9L)))))
        {
            struct S0 l_155 = {0x36L,0xF147413AL,0xE429L,0x69BD42CCL,0L,5L,-2L,18446744073709551615UL,-6L};
            (*g_90) = l_155;
        }
        else
        {
            if (((func_39(&g_67) || ((g_156 = (!1UL)) && p_18)) || p_18))
            {
                return l_157;
            }
            else
            {
                (*g_90) = (*g_90);
                (*l_41) = (safe_div_func_uint16_t_u_u((g_56.f0 > 0x0514B5F7L), (~(*l_41))));
            }
        }
        (*g_90) = l_160;
        return l_157;
    }
    else
    {
        struct S0 l_161 = {0x2CL,1UL,0x81C3L,1L,0xFEL,8L,0xADE6L,0xCDFB547BDC28BEC3LL,7L};
        struct S0 *l_162 = (void*)0;
        int **l_163 = &l_41;
        l_161 = ((*g_90) = l_161);
        (*l_163) = &g_42;
    }
    (*l_164) = (void*)0;
    return l_58;
}







static int * func_19(char p_20, int p_21, short p_22)
{
    struct S1 l_136 = {-1L,0UL};
    int *l_141 = &g_42;
    for (g_57.f1 = (-22); (g_57.f1 < 38); ++g_57.f1)
    {
        struct S1 *l_137 = &l_136;
        struct S1 **l_138 = &l_137;
        unsigned short *l_142 = &l_136.f1;
        if (g_50.f3)
            break;
        (*l_137) = l_136;
        (*l_138) = &g_57;
        (*l_141) = (safe_div_func_uint16_t_u_u((p_20 ^ p_22), ((*l_142) = (g_50.f1 = func_39(l_141)))));
    }
    return &g_42;
}







static char * func_27(char * p_28, char ** p_29)
{
    int **l_125 = (void*)0;
    int ***l_126 = (void*)0;
    int ***l_127 = (void*)0;
    int ***l_128 = &l_125;
    union U3 *l_130 = (void*)0;
    union U3 **l_129 = &l_130;
    char *l_131 = &g_10;
    (*l_128) = l_125;
    (*l_129) = &g_50;
    return l_131;
}







static char * func_30(union U2 p_31, char ** p_32, struct S1 p_33, char ** p_34, char ** p_35)
{
    int **l_59 = (void*)0;
    int *l_60 = &g_42;
    union U3 *l_63 = (void*)0;
    struct S0 *l_81 = &g_80;
    l_60 = &g_42;
    (*l_60) = (p_33.f1 == ((*l_60) | (safe_rshift_func_uint16_t_u_s((&g_50 != l_63), 2))));
    for (g_10 = 0; (g_10 <= 27); g_10++)
    {
        int *l_66 = &g_67;
        struct S0 *l_79 = &g_80;
        union U4 *l_123 = (void*)0;
        if (((*l_66) = ((*l_60) = 0x7874D2D9L)))
        {
            int *l_89 = &g_67;
            struct S0 **l_106 = &g_90;
            for (p_33.f1 = (-12); (p_33.f1 <= 41); ++p_33.f1)
            {
                unsigned l_72 = 0xD7069838L;
                struct S0 ***l_104 = (void*)0;
                struct S0 ***l_105 = (void*)0;
                unsigned long long *l_111 = (void*)0;
                unsigned long long *l_112 = &g_80.f7;
                char *l_117 = &g_80.f8;
            }
            if ((*l_66))
                continue;
        }
        else
        {
            union U4 **l_124 = &l_123;
            for (g_80.f5 = 0; (g_80.f5 > 29); g_80.f5 = safe_add_func_uint32_t_u_u(g_80.f5, 1))
            {
                union U4 *l_121 = &g_122;
                union U4 **l_120 = &l_121;
                (*l_120) = (void*)0;
            }
            (*l_124) = l_123;
        }
    }
    return &g_10;
}







static union U2 func_36(unsigned long long p_37, struct S0 p_38)
{
    union U3 *l_49 = &g_50;
    union U3 **l_51 = (void*)0;
    union U3 **l_52 = (void*)0;
    union U3 **l_53 = (void*)0;
    union U2 l_54 = {0x7FAD540778D402A5LL};
    l_49 = l_49;
    return l_54;
}







static short func_39(int * p_40)
{
    int *l_43 = &g_42;
    int **l_44 = &l_43;
    (*l_44) = l_43;
    return (**l_44);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    transparent_crc(g_50.f3, "g_50.f3", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_57.f1, "g_57.f1", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
    transparent_crc(g_80.f1, "g_80.f1", print_hash_value);
    transparent_crc(g_80.f2, "g_80.f2", print_hash_value);
    transparent_crc(g_80.f3, "g_80.f3", print_hash_value);
    transparent_crc(g_80.f4, "g_80.f4", print_hash_value);
    transparent_crc(g_80.f5, "g_80.f5", print_hash_value);
    transparent_crc(g_80.f6, "g_80.f6", print_hash_value);
    transparent_crc(g_80.f7, "g_80.f7", print_hash_value);
    transparent_crc(g_80.f8, "g_80.f8", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_300.f0, "g_300.f0", print_hash_value);
    transparent_crc(g_300.f1, "g_300.f1", print_hash_value);
    transparent_crc(g_300.f2, "g_300.f2", print_hash_value);
    transparent_crc(g_300.f3, "g_300.f3", print_hash_value);
    transparent_crc(g_300.f4, "g_300.f4", print_hash_value);
    transparent_crc(g_300.f5, "g_300.f5", print_hash_value);
    transparent_crc(g_300.f6, "g_300.f6", print_hash_value);
    transparent_crc(g_300.f7, "g_300.f7", print_hash_value);
    transparent_crc(g_300.f8, "g_300.f8", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_745, "g_745", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    transparent_crc(g_841.f0, "g_841.f0", print_hash_value);
    transparent_crc(g_841.f1, "g_841.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
