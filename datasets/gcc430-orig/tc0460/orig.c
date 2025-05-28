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


union U0 {
   long long f0;
   unsigned short f1;
};

union U1 {
   char f0;
};

union U2 {
   const unsigned char f0;
   const char * f1;
   unsigned f2 : 5;
};


static int g_4 = 1L;
static char g_20 = 0xA3L;
static char *g_19 = &g_20;
static unsigned short g_32 = 1UL;
static char g_41 = 0x5FL;
static int *g_64 = &g_4;
static int **g_63 = &g_64;
static int g_71 = (-4L);
static const int **g_73 = (void*)0;
static unsigned char g_87 = 0x43L;
static int g_104 = 0L;
static union U1 g_106 = {0xE9L};
static union U1 *g_105 = &g_106;
static unsigned char g_121 = 247UL;
static unsigned g_129 = 0UL;
static char g_133 = 0x9AL;
static int g_136 = 0x69DFF36FL;
static short g_138 = 0x776CL;
static const unsigned long long g_144 = 0UL;
static unsigned char g_146 = 1UL;
static char g_147 = 0L;
static unsigned char g_149 = 0UL;
static int * const *g_157 = &g_64;
static union U2 g_172 = {255UL};
static int g_187 = 0x1D30752CL;
static unsigned g_197 = 0x12C82440L;
static long long g_204 = 0L;
static unsigned long long g_218 = 0x865F0A685D562BBFLL;
static unsigned long long *g_217 = &g_218;
static unsigned long long **g_216 = &g_217;
static unsigned short g_250 = 0x12EBL;
static short g_259 = (-4L);
static unsigned ***g_338 = (void*)0;
static long long g_351 = 0L;
static const int *g_354 = &g_104;
static unsigned g_358 = 0x20F516C4L;
static union U0 g_362 = {6L};
static int *g_399 = (void*)0;
static unsigned g_429 = 0x14DD71B6L;
static short *g_439 = &g_259;
static short * const *g_438 = &g_439;
static unsigned long long *g_456 = &g_218;
static unsigned long long ** const g_455 = &g_456;
static unsigned long long ** const *g_454 = &g_455;
static unsigned short *g_655 = &g_32;
static unsigned short **g_654 = &g_655;
static long long *g_689 = &g_204;
static long long ** const g_688 = &g_689;
static union U2 *g_825 = &g_172;
static union U2 **g_824 = &g_825;
static const unsigned char *g_845 = (void*)0;
static const unsigned char **g_844 = &g_845;
static const unsigned char ***g_843 = &g_844;
static unsigned short ***g_914 = (void*)0;
static unsigned short ****g_913 = &g_914;



static int func_1(void);
static int func_5(union U1 p_6, int p_7, int * p_8, int * p_9);
static union U1 func_10(const unsigned char p_11, long long p_12);
static const unsigned char func_13(unsigned long long p_14, char * p_15, union U1 p_16, int * p_17, short p_18);
static union U1 func_21(unsigned char p_22, union U0 p_23, int * const p_24);
static int * func_27(long long p_28, unsigned char p_29, int * p_30);
static int * func_33(char p_34, int * p_35, const int * p_36, char * p_37, int p_38);
static unsigned long long func_42(unsigned p_43, int * const p_44, char * p_45);
static int func_49(long long p_50);
static unsigned short func_52(int * p_53, unsigned long long p_54, const int ** p_55, char p_56);
static int func_1(void)
{
    unsigned char l_2 = 1UL;
    int *l_3 = &g_4;
    unsigned char l_31 = 0xEDL;
    const int *l_39 = &g_4;
    char *l_40 = &g_41;
    unsigned char *l_440 = &g_149;
    int *l_441 = (void*)0;
    int *l_442 = &g_187;
    union U0 l_443 = {1L};
    int *l_989 = &g_187;
    short l_990 = 0x2D77L;
    union U1 l_1013 = {0xA3L};
    int **l_1014 = (void*)0;
    int **l_1015 = &l_989;
    int l_1016 = 0x2CE63F4FL;
    (*l_3) = l_2;
    if (func_5(func_10(func_13((*l_3), g_19, func_21((((*l_442) = (((*l_440) &= ((safe_rshift_func_uint8_t_u_u((l_3 == ((*g_63) = func_27((g_32 = l_31), g_4, func_33(((*g_19) = (*g_19)), &g_4, l_39, l_40, g_4)))), (*l_3))) && g_133)) < 0xEEL)) ^ (*l_3)), l_443, l_442), l_3, (*l_3)), g_133), g_133, l_442, g_399))
    {
        union U1 l_988 = {-1L};
        union U0 **l_991 = (void*)0;
        union U0 *l_993 = &l_443;
        union U0 **l_992 = &l_993;
        unsigned l_1000 = 1UL;
        int *l_1003 = &g_104;
        (*g_63) = l_442;
        l_990 &= (safe_sub_func_uint16_t_u_u(l_988.f0, l_988.f0));
        (*l_992) = &g_362;
        (*g_63) = (*g_63);
    }
    else
    {
        int *l_1004 = (void*)0;
        int l_1010 = 8L;
        unsigned long long l_1011 = 0UL;
        char *l_1012 = &g_133;
        (*g_63) = l_1004;
        for (l_443.f0 = (-3); (l_443.f0 > 2); ++l_443.f0)
        {
            char l_1007 = 1L;
            (*l_442) ^= ((l_1007 | l_1007) <= (*g_655));
            (*l_442) = l_1007;
            l_989 = (void*)0;
        }
    }
    (*l_442) |= (-1L);
    (*l_1015) = (*g_157);
    return l_1016;
}







static int func_5(union U1 p_6, int p_7, int * p_8, int * p_9)
{
    unsigned long long **l_871 = &g_217;
    const int l_872 = (-7L);
    int l_873 = 0L;
    char *l_879 = &g_20;
    long long * const *l_933 = &g_689;
    int l_946 = 7L;
    unsigned *l_951 = &g_358;
    unsigned * const *l_950 = &l_951;
    int *l_971 = &g_71;
    const int **l_977 = &g_354;
    const unsigned short l_984 = 65535UL;
    (*g_824) = (*g_824);
    (*p_8) ^= ((*g_454) != l_871);
    if ((l_873 = (l_872 & (*g_689))))
    {
        int l_876 = 0x48292A65L;
        int l_885 = 0x35FBADEBL;
        for (g_358 = 0; (g_358 == 20); g_358 = safe_add_func_uint64_t_u_u(g_358, 5))
        {
            int **l_877 = &g_399;
            unsigned char *** const l_878 = (void*)0;
            short *l_880 = (void*)0;
            short **l_881 = &g_439;
            short *l_883 = &g_259;
            short **l_882 = &l_883;
            const int **l_884 = &g_354;
            (*p_8) = l_876;
            (*l_877) = (*g_157);
            l_885 &= (*g_354);
        }
    }
    else
    {
        int l_886 = 0x4A9221FBL;
        const int *l_887 = &g_71;
        char *l_888 = &g_41;
        int ***l_889 = &g_63;
        int **l_890 = &g_399;
        int *l_947 = (void*)0;
        int l_953 = 9L;
        unsigned long long **l_967 = &g_217;
        int l_970 = 0x3C65C335L;
        unsigned *l_978 = &g_197;
        int *l_979 = &l_946;
        unsigned l_985 = 0xC84F8755L;
        (*l_890) = (*g_157);
        if ((l_873 = (*p_8)))
        {
            int *l_908 = (void*)0;
            const int **l_909 = &g_354;
            int *l_937 = &g_4;
            if ((*p_8))
            {
                short l_893 = 0xC5BDL;
                int l_905 = (-8L);
                (*l_890) = p_9;
                if ((safe_sub_func_uint32_t_u_u((((*g_439) |= p_6.f0) | l_893), 0x434E30CBL)))
                {
                    int l_900 = 1L;
                    short l_910 = 0L;
                    (*p_8) = ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u(l_900, ((*g_655) || l_900))), 0)), ((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((p_6.f0 <= ((((l_905 == (safe_rshift_func_uint16_t_u_s((func_52(p_8, (*g_217), l_909, l_872) <= (*g_655)), 10))) == l_873) ^ p_7) <= (**g_438))), l_910)), 1)) ^ l_873))) > p_6.f0);
                    for (g_146 = 0; (g_146 < 31); g_146++)
                    {
                        unsigned short ** const *l_916 = &g_654;
                        unsigned short ** const **l_915 = &l_916;
                        unsigned char *l_923 = (void*)0;
                        unsigned char *l_924 = &g_87;
                        (*p_8) ^= (g_913 == l_915);
                        (**l_889) = (**l_889);
                        (*g_64) = (g_338 != (void*)0);
                        return (*g_354);
                    }
                }
                else
                {
                    long long *l_929 = &g_351;
                    short l_930 = 0xE319L;
                    if ((p_7 > (safe_rshift_func_uint16_t_u_u((+(*g_655)), (safe_mul_func_uint16_t_u_u((l_873 > ((!(l_893 == 0x32L)) || p_7)), 0x9822L))))))
                    {
                        (*p_8) ^= l_873;
                        l_930 ^= 0xF3396B99L;
                    }
                    else
                    {
                        int *l_931 = &l_873;
                        (*l_931) ^= (*g_354);
                        (*l_931) = ((**g_688) < (*g_689));
                    }
                }
            }
            else
            {
                const int *l_932 = &l_886;
                long long * const **l_934 = (void*)0;
                long long * const **l_935 = &l_933;
                union U1 **l_936 = &g_105;
                (*l_909) = p_9;
                (*l_936) = (void*)0;
            }
            (*l_937) ^= ((**g_688) > ((*p_8) < l_873));
            l_946 = ((*p_8) = (((l_872 || (*p_8)) <= 0x7F1251DC8EE22A4CLL) < (((safe_mul_func_int8_t_s_s(((*g_19) = (((l_873 |= (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(func_52((*l_890), (*l_887), &l_887, p_7), 0x1AL)) != (*p_8)), (*p_8))), 0L))) < l_872) || 0xDFE9DF3FE06C80DBLL)), 0UL)) < (*p_8)) > (***g_454))));
            l_947 = (*g_157);
        }
        else
        {
            int *l_956 = (void*)0;
            int *l_972 = &l_886;
            (*l_890) = p_9;
            for (g_104 = 0; (g_104 >= (-28)); g_104 = safe_sub_func_int64_t_s_s(g_104, 9))
            {
                unsigned * const **l_952 = &l_950;
                unsigned char *l_961 = &g_121;
                unsigned char *l_962 = &g_146;
                unsigned long long **l_968 = &g_217;
                int l_969 = 1L;
                (*l_952) = l_950;
                (*p_8) |= l_953;
                (*l_890) = l_956;
                l_971 = ((*g_63) = (*g_63));
            }
            (*l_890) = l_956;
            (*l_972) |= (*p_8);
        }
        (*l_979) ^= (safe_rshift_func_uint8_t_u_s(p_7, ((safe_sub_func_int32_t_s_s((*p_8), ((*l_978) &= ((**l_950) = func_49(func_52(p_9, ((**g_455) &= 18446744073709551615UL), l_977, p_6.f0)))))) >= p_6.f0)));
        (*p_8) = (safe_rshift_func_uint8_t_u_s(((g_20 == ((safe_sub_func_int32_t_s_s(func_52((*g_63), (***g_454), &g_354, (l_984 & 255UL)), p_6.f0)) ^ ((*l_888) &= 0xB0L))) >= p_7), l_985));
    }
    return (*p_8);
}







static union U1 func_10(const unsigned char p_11, long long p_12)
{
    return g_106;
}







static const unsigned char func_13(unsigned long long p_14, char * p_15, union U1 p_16, int * p_17, short p_18)
{
    short l_444 = 0x6AEBL;
    int l_459 = (-1L);
    unsigned short **l_463 = (void*)0;
    char l_473 = 0xBFL;
    int l_486 = (-1L);
    const int **l_495 = &g_354;
    unsigned l_535 = 18446744073709551606UL;
    int * const l_603 = &g_4;
    int l_615 = 6L;
    unsigned char l_630 = 248UL;
    const unsigned short *l_644 = &g_32;
    int *l_718 = &g_104;
    char **l_725 = (void*)0;
    union U2 *l_750 = (void*)0;
    int **l_764 = &l_718;
    long long l_794 = 6L;
    const unsigned char ***l_846 = &g_844;
    const short l_870 = (-1L);
    if (l_444)
    {
        unsigned l_449 = 4294967289UL;
        int *l_450 = (void*)0;
        unsigned *l_482 = &l_449;
        unsigned **l_481 = &l_482;
        unsigned ***l_480 = &l_481;
        for (g_187 = (-23); (g_187 >= 25); g_187 = safe_add_func_int64_t_s_s(g_187, 6))
        {
            unsigned long long ** const *l_453 = &g_216;
            short **l_457 = (void*)0;
            short **l_458 = &g_439;
            unsigned short *l_460 = &g_362.f1;
            int l_468 = 9L;
            (*g_63) = p_17;
        }
        (*l_495) = p_17;
        return p_16.f0;
    }
    else
    {
        int * const l_523 = &l_486;
        int *l_530 = &g_104;
        const int *l_536 = &g_187;
        char *l_537 = &g_106.f0;
        int l_577 = 2L;
        const int **l_580 = (void*)0;
        unsigned short * const **l_585 = (void*)0;
        unsigned short *l_648 = &g_362.f1;
        unsigned l_693 = 0x8A807CEEL;
        unsigned *l_761 = (void*)0;
        unsigned *l_762 = (void*)0;
        unsigned *l_763 = &g_197;
        for (g_362.f1 = 0; (g_362.f1 != 15); g_362.f1 = safe_add_func_uint8_t_u_u(g_362.f1, 4))
        {
            int l_518 = (-4L);
            short **l_519 = &g_439;
            unsigned short *l_522 = &g_250;
            char *l_534 = &g_20;
        }
        if (((safe_mod_func_uint32_t_u_u((**l_495), ((**l_495) & g_204))) < (**l_495)))
        {
            unsigned l_555 = 1UL;
            int * const l_574 = &g_187;
            for (g_259 = (-29); (g_259 < (-20)); g_259 = safe_add_func_int8_t_s_s(g_259, 3))
            {
                long long *l_554 = &g_351;
                int l_562 = 0x8293C637L;
                if (((safe_sub_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((0xB8699B60L & g_250), (g_149 | ((*g_217) = (*g_217))))), 0xF731EFFEL)) ^ ((*l_554) = (safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((**l_495), 0xA1EA0FC77DC72003LL)), (*l_530))))) && ((*p_15) || g_104)), (-9L))) == l_555))
                {
                    char l_573 = 0x06L;
                    for (l_555 = 0; (l_555 >= 50); l_555++)
                    {
                        unsigned *l_563 = &g_197;
                        int l_568 = 0x4BF43E6FL;
                        (*l_523) = func_52(p_17, (((*l_563) = (l_562 &= (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(1L, l_555)), 0x7D0FL)))) && (safe_add_func_uint32_t_u_u(((*l_563) = (safe_rshift_func_int8_t_s_u((l_568 ^ (0x04D07659L >= (safe_add_func_uint16_t_u_u((p_18 & ((safe_mul_func_int8_t_s_s(l_573, l_573)) == (**g_438))), 0xDD74L)))), 4))), 1UL))), &g_354, (*g_19));
                        (*l_523) |= (**g_63);
                    }
                }
                else
                {
                    if (l_562)
                        break;
                    p_17 = l_574;
                }
                (*p_17) &= (-1L);
            }
            (*l_495) = l_530;
        }
        else
        {
            long long *l_578 = &g_204;
            long long **l_579 = &l_578;
            const int ***l_581 = &l_580;
            const int ***l_582 = &g_73;
            int * const l_583 = &l_486;
            union U1 **l_645 = &g_105;
            unsigned long long * const *l_679 = (void*)0;
            unsigned l_706 = 0x63A2B1A4L;
            (*l_523) &= (safe_add_func_int64_t_s_s(l_577, (((*l_579) = l_578) == (void*)0)));
            if (func_52(p_17, (**l_495), ((*l_582) = ((*l_581) = l_580)), (*g_19)))
            {
                char *l_584 = &g_133;
                unsigned short ***l_586 = &l_463;
                unsigned short ****l_587 = (void*)0;
                unsigned short ****l_588 = &l_586;
                union U2 *l_599 = &g_172;
                union U2 **l_598 = &l_599;
                union U2 *l_601 = &g_172;
                union U2 **l_600 = &l_601;
                (*p_17) &= (*l_583);
                if ((l_585 == ((*l_588) = l_586)))
                {
                    char l_595 = 0xACL;
                    if ((safe_rshift_func_int16_t_s_s((p_16.f0 == p_16.f0), 5)))
                    {
                        unsigned char *l_591 = &g_121;
                        (**g_63) = (((*l_591) ^= p_16.f0) < p_16.f0);
                        (*l_530) |= (*p_17);
                        (*p_17) &= 0x31416431L;
                    }
                    else
                    {
                        unsigned long long l_594 = 0x54AA61C2187E7F92LL;
                        (*l_523) ^= (safe_sub_func_uint8_t_u_u(l_594, p_14));
                        (*l_530) |= (**g_63);
                        (**g_63) = l_595;
                    }
                }
                else
                {
                    for (g_121 = 0; (g_121 != 27); g_121++)
                    {
                        return p_14;
                    }
                    (**g_157) &= (*g_354);
                }
                (*l_600) = ((*l_598) = &g_172);
            }
            else
            {
                union U1 **l_602 = &g_105;
                int l_605 = (-1L);
                unsigned short ***l_614 = &l_463;
                short l_624 = 0x41E4L;
                (*l_523) |= (((*l_602) = &p_16) == &g_106);
                if ((*p_17))
                {
                    int **l_604 = (void*)0;
                    int ***l_611 = (void*)0;
                    int ****l_610 = &l_611;
                    unsigned *l_627 = &g_358;
                    unsigned short *l_635 = &g_362.f1;
                    char *l_639 = &g_133;
                    p_17 = l_603;
                    if (((1L || l_605) >= (((*p_17) == (1L | ((((p_16.f0 | (l_605 ^ ((safe_mod_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((&g_73 != ((*l_610) = &l_604)), ((~((*p_15) < 0x32L)) & g_358))) && l_605), (*l_603))) ^ 0xD1CDAE9A9C805CA0LL))) == 1L) & 0x0CC3L) | p_18))) != p_14)))
                    {
                        (*p_17) |= 1L;
                        return l_605;
                    }
                    else
                    {
                        short *l_616 = &g_138;
                        (**g_63) = ((((*l_523) = (l_614 == (void*)0)) <= (((*g_439) && l_615) < 7L)) > ((((&g_172 == &g_172) > 18446744073709551613UL) >= ((*l_616) = ((*l_603) || 0L))) > (-1L)));
                        p_17 = (void*)0;
                    }
                    if ((safe_rshift_func_uint16_t_u_s((((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u(p_16.f0)), (safe_rshift_func_uint8_t_u_s(((((g_197 == l_624) < 0xE537L) | ((*l_627) = (~(safe_rshift_func_uint8_t_u_s(l_605, (*g_19)))))) != 0xEBL), (*g_19))))) || (*g_217)) & p_18), (**l_495))))
                    {
                        return p_16.f0;
                    }
                    else
                    {
                        char *l_628 = &g_106.f0;
                        int l_629 = 0x48C63D22L;
                        int * const l_636 = (void*)0;
                        int **l_637 = (void*)0;
                        int **l_638 = &g_64;
                        (*l_583) |= l_629;
                        (**g_157) = (l_630 > p_16.f0);
                        (**g_157) |= ((0x96B3FBC7D90080D6LL && p_16.f0) & (safe_sub_func_int8_t_s_s((((((*p_15) | (((l_624 >= (0xC2A938EAL ^ ((safe_sub_func_int8_t_s_s((*g_19), g_129)) <= g_147))) != p_18) == g_358)) < l_624) != g_41) != (*g_354)), (*g_19))));
                    }
                }
                else
                {
                    union U0 *l_643 = &g_362;
                    union U0 **l_642 = &l_643;
                    for (g_87 = (-1); (g_87 == 25); g_87++)
                    {
                        (**g_157) = (+((void*)0 != l_642));
                        (*l_530) &= ((*l_523) |= (*p_17));
                    }
                }
                (*g_63) = p_17;
                return g_351;
            }
            if (((!(g_197 && (&p_16 == ((*l_645) = &p_16)))) ^ (-1L)))
            {
                unsigned short **l_649 = &l_648;
                unsigned char *l_652 = &l_630;
                int l_667 = (-1L);
                if (((safe_sub_func_int8_t_s_s((*g_19), (((*l_649) = l_648) != l_644))) || (safe_rshift_func_uint8_t_u_u(((*l_652) = p_18), p_18))))
                {
                    const int *l_653 = &g_187;
                    l_653 = (*l_495);
                    (*g_64) ^= 0x1C40D58FL;
                    g_654 = g_654;
                }
                else
                {
                    for (l_473 = 0; (l_473 != 11); l_473 = safe_add_func_uint64_t_u_u(l_473, 9))
                    {
                        unsigned l_664 = 0x33D840C3L;
                        (*l_530) ^= ((safe_mul_func_int8_t_s_s(((*g_19) = ((*l_583) > (0UL | ((safe_mul_func_uint8_t_u_u((p_16.f0 > (!(l_664 &= p_16.f0))), (safe_sub_func_uint32_t_u_u(0x8FC9CEF4L, (g_4 <= 0xCEB9FF07L))))) <= l_667)))), (safe_add_func_uint64_t_u_u(p_18, 0x8375D71700494A7CLL)))) || p_16.f0);
                        if ((*g_64))
                            continue;
                        (*l_523) &= (-1L);
                    }
                }
            }
            else
            {
                unsigned long long l_670 = 18446744073709551612UL;
                unsigned char *l_671 = &l_630;
                const int *l_677 = &g_187;
                union U0 *l_708 = &g_362;
                union U0 **l_709 = &l_708;
                (*l_530) |= l_670;
                if (((+(((**g_438) == (**g_438)) | p_16.f0)) | (*g_439)))
                {
                    char **l_676 = &l_537;
                    int l_678 = 9L;
                    l_678 = ((safe_add_func_uint64_t_u_u(func_52((*g_63), (*g_217), &g_354, (*g_19)), (*g_217))) | 1UL);
                    (**g_63) |= (l_679 == (void*)0);
                    if ((p_18 == ((0xCC1EL != (safe_mod_func_int32_t_s_s(((l_678 = (safe_rshift_func_int8_t_s_u(0xFCL, 7))) >= ((safe_sub_func_int16_t_s_s((p_18 > 255UL), 0x2350L)) > (*g_19))), 0x345ED482L))) <= 0xFBC3F3265F740A3ALL)))
                    {
                        unsigned long long l_692 = 0x6CF1FEEF1FF588B5LL;
                        (*l_495) = p_17;
                        (*l_530) ^= (safe_rshift_func_int16_t_s_u(l_692, l_693));
                    }
                    else
                    {
                        (*l_583) ^= (*p_17);
                        (*l_523) &= (*l_603);
                        (*l_495) = l_677;
                        (**g_157) &= (safe_sub_func_int8_t_s_s((*g_19), (*g_19)));
                    }
                    return p_14;
                }
                else
                {
                    long long l_701 = 1L;
                    for (g_197 = 0; (g_197 > 32); g_197++)
                    {
                        union U1 ***l_698 = &l_645;
                        (*g_63) = p_17;
                        if ((*p_17))
                            break;
                        (*l_523) = (**g_63);
                        (*l_698) = &g_105;
                    }
                    (*p_17) = (safe_lshift_func_uint8_t_u_u(l_701, 1));
                }
                for (g_204 = 0; (g_204 == (-12)); g_204--)
                {
                    unsigned char l_707 = 0x64L;
                    for (g_197 = 0; (g_197 < 36); g_197 = safe_add_func_int64_t_s_s(g_197, 9))
                    {
                        (**g_63) ^= l_706;
                        (*l_523) &= func_49((**g_688));
                    }
                    (**g_63) ^= l_707;
                    (*l_583) ^= (**g_157);
                }
                (*l_709) = l_708;
            }
            for (g_20 = (-24); (g_20 >= 26); g_20++)
            {
                unsigned char l_726 = 0x45L;
                int l_747 = 1L;
                if ((*p_17))
                {
                    union U0 *l_713 = &g_362;
                    union U0 **l_712 = &l_713;
                    int l_735 = 0x98C032A5L;
                    int l_743 = 0x9D6F7713L;
                    (*l_712) = &g_362;
                    for (l_615 = 0; (l_615 < (-14)); l_615--)
                    {
                        union U2 *l_717 = &g_172;
                        union U2 **l_716 = &l_717;
                        (*l_716) = &g_172;
                        (*l_583) &= ((*g_64) = ((*l_530) & 0L));
                        p_17 = ((*g_63) = l_718);
                    }
                    if ((safe_rshift_func_uint8_t_u_u(((*g_217) < (safe_lshift_func_uint8_t_u_s((((*g_64) = (&p_15 == l_725)) && (!l_726)), 7))), (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((p_16.f0 <= (**g_455)), (*g_456))), (**g_688))) <= ((safe_sub_func_int64_t_s_s((~(l_735 | 9UL)), p_18)) ^ (*l_536))), 5)))))
                    {
                        unsigned short *l_742 = &g_250;
                        (*l_523) &= ((safe_mul_func_uint16_t_u_u((**g_654), (*g_655))) != (g_187 <= ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((*l_742) = (~(!((*l_648) = (**g_654))))), func_49((**g_688)))), (l_743 ^= (g_187 >= l_735)))) | (**g_455))));
                        if (l_735)
                            continue;
                    }
                    else
                    {
                        char *l_746 = &g_106.f0;
                        (*l_583) ^= (*p_17);
                    }
                }
                else
                {
                    if (((*l_523) &= (l_747 &= (*p_17))))
                    {
                        (*l_603) = func_49(((((*g_19) < (((-5L) & (func_49(p_14) && 0UL)) < ((&g_362 != (void*)0) >= (-1L)))) >= (*p_17)) < 1UL));
                        (*l_495) = &l_747;
                        (*l_495) = (*g_63);
                        (*l_523) &= (*g_354);
                    }
                    else
                    {
                        union U2 **l_751 = &l_750;
                        (*l_751) = l_750;
                    }
                    if ((*p_17))
                        continue;
                }
                (*p_17) = (safe_unary_minus_func_int64_t_s((*g_689)));
                (*l_523) = 0x42612D2DL;
            }
        }
        (*l_718) = (((((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((**g_654) = (safe_mul_func_int16_t_s_s((&p_17 == &g_64), 0xBC2FL))), 0)), (safe_add_func_uint16_t_u_u(p_16.f0, (0xB8L | g_187))))) ^ 4294967295UL) != (*g_689)) || (((*l_763) = p_16.f0) <= (-5L))) != p_18);
        (*p_17) = ((*l_536) | (*l_530));
    }
    (*l_764) = (*g_157);
    for (g_187 = (-8); (g_187 <= 6); g_187 = safe_add_func_int64_t_s_s(g_187, 8))
    {
        unsigned l_767 = 0xDF29677EL;
        int *l_768 = (void*)0;
        int *l_769 = &g_71;
        unsigned char **l_796 = (void*)0;
        unsigned long long l_802 = 0UL;
        long long l_852 = 1L;
        (*l_769) &= ((*l_603) = l_767);
        if ((*p_17))
        {
            const int **l_791 = (void*)0;
            const int l_795 = 0x3E33EDAFL;
            int *l_811 = &g_4;
            if ((p_16.f0 & (p_14 | ((((p_16.f0 & (safe_mul_func_int16_t_s_s((*g_439), (safe_lshift_func_int8_t_s_u((*p_15), 6))))) != (*g_19)) & 0L) != 0UL))))
            {
                short l_792 = 0x3FF5L;
                int l_803 = 6L;
                union U2 **l_810 = &l_750;
                const int **l_812 = (void*)0;
                for (g_20 = 26; (g_20 >= (-20)); g_20--)
                {
                    unsigned char ***l_797 = &l_796;
                    for (g_149 = 0; (g_149 <= 36); ++g_149)
                    {
                        unsigned *l_786 = &g_358;
                        int l_790 = 0x51CF2148L;
                        const int **l_793 = &g_354;
                        (*l_769) = ((0xA7F53E82C4FE22ABLL != func_52(p_17, (**l_495), l_793, (*p_15))) || l_794);
                        (*l_603) ^= 1L;
                        return l_795;
                    }
                    (*l_797) = l_796;
                    (*l_764) = (*l_764);
                }
                if ((*l_769))
                    continue;
                l_803 = (((***g_454) = (safe_mul_func_int16_t_s_s(l_792, ((*g_655) != (l_802 |= 6UL))))) | 0x6BED6FDAB6075C6BLL);
                if ((safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((*g_456) = (safe_mul_func_int16_t_s_s((&g_172 == ((*l_810) = (void*)0)), ((**g_438) = func_52(l_811, (*g_456), l_812, (*g_19)))))), p_18)), 0x97L)))
                {
                    (*g_64) = (*g_354);
                }
                else
                {
                    long long l_813 = 0xA84F09C21F0B54B9LL;
                    const union U0 *l_826 = &g_362;
                    const union U0 **l_827 = (void*)0;
                    const union U0 **l_828 = &l_826;
                    (**g_157) = (!(l_813 < 0x3D9129B0135F05E7LL));
                    for (l_630 = 0; (l_630 >= 29); ++l_630)
                    {
                        unsigned char *l_820 = (void*)0;
                        unsigned char *l_821 = (void*)0;
                        unsigned *l_823 = &g_197;
                        unsigned **l_822 = &l_823;
                        (**g_63) = ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((!l_813), 1)), (l_803 = l_813))) < (*g_19));
                        l_803 = (((*l_822) = (void*)0) == p_17);
                    }
                    (*l_769) &= ((l_810 == g_824) && (*l_811));
                    (*l_828) = l_826;
                }
            }
            else
            {
                (*l_769) |= (*p_17);
            }
            return (*l_769);
        }
        else
        {
            unsigned l_833 = 0x580A9E6FL;
            int *l_847 = (void*)0;
            unsigned l_848 = 0UL;
            int l_849 = (-3L);
            union U0 *l_856 = (void*)0;
            for (g_138 = 0; (g_138 > 4); g_138 = safe_add_func_uint16_t_u_u(g_138, 2))
            {
                unsigned long long l_836 = 5UL;
                const unsigned char *l_842 = &g_172.f0;
                const unsigned char **l_841 = &l_842;
                const unsigned char ***l_840 = &l_841;
                const unsigned char ****l_839 = &l_840;
                union U0 **l_857 = &l_856;
                unsigned *l_867 = &g_358;
                unsigned **l_866 = &l_867;
                unsigned ***l_868 = &l_866;
                int l_869 = 5L;
                (*l_603) = (l_849 ^= (safe_lshift_func_uint16_t_u_s(l_833, ((safe_mul_func_int16_t_s_s((**g_438), l_848)) || (*p_15)))));
                for (g_129 = 5; (g_129 <= 33); ++g_129)
                {
                    long long ** const l_853 = &g_689;
                    long long **l_855 = (void*)0;
                    long long ***l_854 = &l_855;
                    l_852 = (*p_17);
                    (*l_854) = l_853;
                }
                (*l_857) = l_856;
                l_869 = (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((&l_764 == (void*)0), ((p_14 | ((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(0x73L, p_14)), 3)) > ((*g_19) <= 248UL)) <= (p_14 || ((((*l_868) = l_866) == (void*)0) ^ p_18))) && (*p_17))) ^ 2UL))) == (*p_17)), (*g_655)));
            }
        }
    }
    return l_870;
}







static union U1 func_21(unsigned char p_22, union U0 p_23, int * const p_24)
{
    (*p_24) &= ((p_23.f0 > 1UL) == (((void*)0 != g_338) >= 0xD085FCC1L));
    (*p_24) ^= 1L;
    return (*g_105);
}







static int * func_27(long long p_28, unsigned char p_29, int * p_30)
{
    unsigned l_406 = 0UL;
    unsigned short *l_413 = &g_250;
    int l_416 = 0x44ED1E39L;
    int l_425 = 0xE53AC29CL;
    unsigned l_430 = 7UL;
    int *l_432 = &g_71;
    l_416 &= func_52(p_30, ((*g_217) = l_406), &g_354, (safe_mul_func_uint16_t_u_u(((((safe_mod_func_uint64_t_u_u((l_406 && 0x46BBL), p_29)) < ((((safe_rshift_func_uint16_t_u_s(((*l_413) &= l_406), 14)) || ((3L > (safe_lshift_func_uint16_t_u_s(g_362.f0, 11))) < l_406)) && l_406) > 251UL)) != l_406) != 0x14L), l_406)));
    (*g_63) = (void*)0;
    if (p_28)
    {
        unsigned char *l_428 = &g_149;
        int l_431 = 0x8059B3C1L;
        union U1 **l_435 = &g_105;
        union U1 *l_437 = &g_106;
        union U1 **l_436 = &l_437;
        (*g_63) = l_432;
        for (g_362.f0 = (-21); (g_362.f0 == (-29)); g_362.f0 = safe_sub_func_uint64_t_u_u(g_362.f0, 4))
        {
            (**g_63) = p_28;
        }
        (**g_157) = (*l_432);
        (*l_436) = ((*l_435) = &g_106);
    }
    else
    {
        (*g_63) = (void*)0;
    }
    g_438 = g_438;
    return p_30;
}







static int * func_33(char p_34, int * p_35, const int * p_36, char * p_37, int p_38)
{
    int *l_47 = &g_4;
    int **l_46 = &l_47;
    char *l_48 = (void*)0;
    int *l_293 = &g_71;
    unsigned short *l_306 = (void*)0;
    union U1 *l_309 = &g_106;
    long long l_349 = 0x50A0527C21566154LL;
    int l_386 = 0L;
    unsigned *l_401 = &g_358;
    unsigned **l_400 = &l_401;
    (*l_293) = (func_42(g_4, ((*l_46) = (void*)0), l_48) && p_34);
    if (((*l_293) ^= 0x832F596BL))
    {
        int *l_304 = &g_104;
        for (g_147 = (-24); (g_147 < (-15)); ++g_147)
        {
            const int *l_297 = &g_71;
            const int **l_296 = &l_297;
            int *l_333 = &g_4;
            if ((*p_36))
                break;
        }
        (*l_304) |= 0L;
    }
    else
    {
        unsigned long long l_335 = 2UL;
        (*l_293) = 4L;
        p_38 = ((*l_293) |= l_335);
        (*l_293) = ((void*)0 != &g_106);
    }
    for (g_259 = 0; (g_259 < 17); g_259++)
    {
        unsigned short l_341 = 65526UL;
        short *l_350 = &g_138;
        int l_360 = 0x496A5FA5L;
        unsigned *l_367 = &g_197;
        unsigned char l_369 = 0xE6L;
        const int **l_384 = (void*)0;
        unsigned long long l_398 = 1UL;
        unsigned ***l_402 = (void*)0;
        unsigned ***l_403 = (void*)0;
        unsigned ***l_404 = &l_400;
        unsigned **l_405 = &l_401;
    }
    (*l_46) = (*g_63);
    return (*g_63);
}







static unsigned long long func_42(unsigned p_43, int * const p_44, char * p_45)
{
    unsigned l_51 = 0xDAACDA2AL;
    int *l_102 = (void*)0;
    int *l_103 = &g_104;
    union U1 **l_107 = (void*)0;
    union U1 **l_108 = &g_105;
    const int **l_109 = (void*)0;
    const char *l_119 = &g_106.f0;
    union U0 *l_125 = (void*)0;
    const union U2 *l_171 = &g_172;
    (*l_103) &= func_49(l_51);
    (*l_108) = g_105;
    if (func_52(l_103, p_43, l_109, (0x3B01F688L > g_106.f0)))
    {
        unsigned long long l_110 = 0UL;
        union U1 *l_122 = &g_106;
        short *l_168 = &g_138;
        unsigned long long *l_169 = (void*)0;
        unsigned long long *l_170 = &l_110;
        int l_221 = (-1L);
        unsigned l_248 = 0xA5283708L;
        l_110 ^= (!(-9L));
        for (l_110 = 0; (l_110 == 51); ++l_110)
        {
            union U1 *l_123 = &g_106;
            int *l_124 = (void*)0;
            int l_128 = (-6L);
            short l_139 = 0L;
            (*g_63) = (void*)0;
            for (g_71 = 3; (g_71 >= 5); g_71++)
            {
                short l_150 = 0x7AC8L;
                int *l_159 = (void*)0;
                for (g_87 = (-15); (g_87 >= 47); ++g_87)
                {
                    unsigned char *l_120 = &g_121;
                    int l_127 = 0xEF15EDA0L;
                }
                (*g_63) = l_159;
            }
        }
        if ((safe_mul_func_int8_t_s_s(((((*l_103) > (safe_add_func_uint16_t_u_u(p_43, (safe_add_func_uint64_t_u_u(((((safe_rshift_func_uint16_t_u_s(g_147, p_43)) <= (0x1133990FFCBD1596LL && 0x57E9C8C07AB760D9LL)) >= ((*l_168) = g_144)) ^ ((*l_170) |= (g_129 != g_144))), g_146))))) == p_43) | (*g_19)), (*l_103))))
        {
            const union U2 **l_173 = &l_171;
            (*l_173) = l_171;
        }
        else
        {
            int *l_184 = (void*)0;
            unsigned long long *l_185 = &l_110;
            int *l_186 = &g_187;
            const unsigned l_207 = 0UL;
            unsigned *l_257 = &g_197;
            (*l_186) &= ((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_43, (((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(g_138, (safe_rshift_func_uint16_t_u_u((func_52(l_184, ((void*)0 == l_185), l_109, l_110) ^ (l_110 >= 5L)), p_43)))), p_43)) <= (-10L)) >= 0xBD4A44B5L))), g_144)) >= g_104);
            for (g_129 = 9; (g_129 >= 37); g_129 = safe_add_func_uint32_t_u_u(g_129, 3))
            {
                short l_212 = 0x58DEL;
                (*l_103) = (safe_add_func_int16_t_s_s(p_43, (safe_rshift_func_uint16_t_u_s(g_187, 7))));
                if ((safe_sub_func_uint16_t_u_u(g_4, 1UL)))
                {
                    unsigned *l_196 = &g_197;
                    long long *l_202 = (void*)0;
                    long long *l_203 = &g_204;
                    (*l_103) = func_52(l_103, g_136, g_73, (((*l_170) |= (((*l_196) = p_43) == (safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((*l_203) = (&g_149 != p_45)), ((func_49((safe_mul_func_int16_t_s_s(0x15D3L, (*l_186)))) ^ p_43) >= l_207))), p_43)))) == g_172.f0));
                }
                else
                {
                    unsigned l_213 = 0x87C1246BL;
                    const union U2 *l_214 = &g_172;
                    if ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((0x49AC581DL || l_212), p_43)), func_49(l_213))))
                    {
                        return g_121;
                    }
                    else
                    {
                        const union U2 **l_215 = &l_171;
                        unsigned long long **l_220 = &g_217;
                        unsigned long long ***l_219 = &l_220;
                        (*l_215) = l_214;
                        if (l_213)
                            break;
                        (*l_219) = (g_216 = &l_169);
                    }
                }
                l_221 &= (*g_64);
            }
            if ((*g_64))
            {
                unsigned long long l_224 = 18446744073709551615UL;
                (*l_103) |= (((-9L) && (*l_186)) | (safe_mul_func_uint16_t_u_u((func_49(l_224) != ((*l_170) = p_43)), l_221)));
                for (l_224 = 0; (l_224 != 42); ++l_224)
                {
                    if ((*l_186))
                        break;
                }
                (*l_186) = p_43;
            }
            else
            {
                const unsigned char l_246 = 0xC7L;
                char *l_247 = &g_106.f0;
                unsigned short *l_249 = &g_250;
                int **l_263 = &l_102;
                l_102 = p_44;
                if (((~l_110) >= (safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(p_43, (safe_add_func_uint16_t_u_u(((*l_249) = ((safe_add_func_int16_t_s_s((6UL && 0x3542F59D8B5C60B7LL), p_43)) ^ (g_146 &= ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((g_71 | (~((0x19L & (((*l_247) |= (l_110 & (((safe_rshift_func_int8_t_s_s(l_246, (*g_19))) == 0x1D393908CA692669LL) & 0L))) <= (-1L))) < p_43))), g_133)), 0x32L)), l_248)))), (-7L))) >= l_246)))), g_144)))), (*g_19)))))
                {
                    short *l_258 = &g_259;
                    unsigned char *l_260 = &g_87;
                    int l_261 = 0xB0AB9F43L;
                    (*l_103) = (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((p_43 & ((*l_258) |= (((*l_168) = ((safe_lshift_func_uint16_t_u_u((l_184 == (l_257 = (void*)0)), 6)) > (*l_103))) == g_20))) || (g_129 || g_129)), (((g_250 |= (((*l_260) |= l_246) | g_20)) < p_43) < g_218))), l_261));
                    (*l_186) &= ((*l_103) = ((*g_217) & func_49((((*l_103) || p_43) <= l_246))));
                }
                else
                {
                    int *l_262 = &l_221;
                    l_262 = p_44;
                }
                (*l_263) = ((*g_63) = (void*)0);
                return l_248;
            }
        }
    }
    else
    {
        union U1 **l_273 = &g_105;
        int l_274 = (-6L);
        unsigned l_277 = 0xDE91D9FEL;
        unsigned l_283 = 18446744073709551607UL;
        union U2 **l_288 = (void*)0;
        unsigned short *l_289 = &g_250;
        unsigned *l_290 = &g_197;
        unsigned *l_291 = &l_277;
        int l_292 = 0xD3EC5925L;
        for (g_250 = (-27); (g_250 < 36); ++g_250)
        {
            unsigned ***l_266 = (void*)0;
            unsigned *l_269 = &g_197;
            unsigned **l_268 = &l_269;
            unsigned ***l_267 = &l_268;
            const union U2 **l_270 = &l_171;
            (*l_267) = (void*)0;
            (*l_270) = l_171;
            l_274 = (safe_sub_func_uint64_t_u_u(((void*)0 == l_273), p_43));
            for (g_187 = 17; (g_187 == (-22)); --g_187)
            {
                int **l_278 = &g_64;
                l_277 = 0x0B0FB132L;
                (*l_278) = (*g_157);
            }
        }
        (*g_63) = (void*)0;
        l_292 &= (!((*l_103) = (l_274 & ((*l_291) = ((*l_290) &= (safe_add_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((**g_216), (func_49((safe_rshift_func_int8_t_s_u(((((*l_289) = func_52(l_103, (*g_217), l_109, (!(safe_sub_func_uint8_t_u_u(p_43, (l_288 == (void*)0)))))) >= l_277) ^ l_283), 6))) ^ g_129))) ^ g_146), p_43)))))));
    }
    return p_43;
}







static int func_49(long long p_50)
{
    int ***l_65 = (void*)0;
    int **l_66 = (void*)0;
    int **l_67 = &g_64;
    char *l_68 = &g_41;
    int *l_69 = (void*)0;
    int *l_70 = &g_71;
    int l_72 = 0L;
    (*l_70) = (((((func_52(&g_4, (safe_sub_func_uint8_t_u_u(p_50, (((((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((((*l_70) = (((l_66 = g_63) == (l_67 = l_67)) || (l_68 != &g_41))) < p_50) == (l_72 != (**g_63))), 4294967295UL)) || g_20), (-2L))) < 7L) ^ 0x04DCF746B3257B06LL) & g_20) ^ 65535UL))), g_73, p_50) <= g_41) && (**l_67)) < 8UL) && g_71) & p_50);
    return (*g_64);
}







static unsigned short func_52(int * p_53, unsigned long long p_54, const int ** p_55, char p_56)
{
    char l_78 = 0xA1L;
    int *l_79 = &g_4;
    unsigned char *l_86 = &g_87;
    int *l_90 = &g_71;
    int l_101 = 0xD6FA87DCL;
    l_78 |= (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(g_4, p_56)), 1UL));
    (*g_63) = l_79;
    (*l_90) = (safe_mod_func_uint8_t_u_u(((*g_19) >= ((*l_86) = (safe_lshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s(0xA6A1E05BF5EF7B60LL, p_56)), 2)))), (safe_rshift_func_uint16_t_u_s(p_56, p_56))));
    (*l_90) = (safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(p_54, (!(((safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(0xB40AL, (*l_79))) > (*l_90)), (safe_rshift_func_int8_t_s_u(1L, 5)))) & ((*l_79) > 0x4FL)) || (*g_19))))) >= (+((((*l_90) <= 0x32D1299DL) && l_101) <= (*g_64)))), g_20));
    return g_71;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_106.f0, "g_106.f0", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_172.f0, "g_172.f0", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_362.f1, "g_362.f1", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
