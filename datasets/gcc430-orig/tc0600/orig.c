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
   unsigned char f2;
   char f3;
   unsigned f4;
   int f5;
   unsigned f6;
   unsigned f7;
   int f8;
   int f9;
};


static unsigned g_7 = 1UL;
static struct S0 g_24 = {0x00CAL,0xC47AA296L,1UL,5L,18446744073709551608UL,-1L,4294967290UL,0xB300A9E1L,4L,1L};
static char g_38 = 0L;
static int *g_66 = &g_24.f1;
static unsigned char g_74 = 0x7AL;
static unsigned char *g_73 = &g_74;
static struct S0 g_81 = {1UL,-3L,0x92L,0L,18446744073709551615UL,7L,0x48D0B90EL,0x15E6AD31L,0xF5451114L,-6L};
static char *g_99 = &g_81.f3;
static int *g_115 = &g_81.f5;
static char g_118 = (-6L);
static char g_156 = 1L;
static struct S0 g_172 = {4UL,-3L,0x80L,0x48L,18446744073709551615UL,4L,0x4CEE3A2DL,18446744073709551615UL,5L,0xEF3277B4L};
static unsigned g_219 = 3UL;
static int ***g_254 = (void*)0;
static int *g_301 = &g_172.f5;
static unsigned short *g_327 = &g_81.f0;
static int g_352 = 0L;
static char g_405 = (-1L);
static unsigned char **g_421 = &g_73;
static unsigned char ***g_420 = &g_421;
static int *g_458 = &g_172.f5;
static unsigned *g_546 = &g_219;
static unsigned **g_545 = &g_546;
static char **g_570 = (void*)0;
static char ***g_569 = &g_570;
static unsigned short **g_634 = (void*)0;
static struct S0 g_681 = {9UL,-2L,0xF7L,0xB3L,0x73425EBCL,0x0FBC24D6L,0xFDF94095L,0UL,0L,0x452EC9B6L};
static unsigned g_726 = 0xA09898DCL;
static char *g_753 = &g_681.f3;
static struct S0 g_763 = {0UL,7L,251UL,0xA3L,1UL,0x28421033L,0x9D50031FL,18446744073709551615UL,0x4865DD8DL,-1L};



static int func_1(void);
static int func_2(unsigned p_3, unsigned p_4, int p_5, int p_6);
static unsigned char func_8(struct S0 p_9);
static struct S0 func_10(int p_11, unsigned char p_12);
static int func_19(int p_20, struct S0 p_21, unsigned p_22, unsigned p_23);
static unsigned func_39(char * p_40, struct S0 p_41, unsigned char * p_42);
static char * func_43(unsigned short p_44, unsigned char * p_45, short p_46, char * p_47);
static int * func_49(struct S0 p_50, int p_51, unsigned char * p_52, char * p_53, int p_54);
static char * func_56(short p_57, unsigned char p_58);
static short func_59(int p_60, char p_61, int * p_62, int * p_63, unsigned char * p_64);
static int func_1(void)
{
    int l_15 = 0x667F5AEEL;
    int l_29 = (-7L);
    unsigned *l_210 = &g_81.f6;
    struct S0 l_418 = {0x8CBAL,0L,255UL,0x08L,0xF1A0015FL,0x12614E63L,0x19E799C7L,0UL,0xD812651CL,0xF98D5605L};
    char *l_525 = &g_118;
    unsigned short l_526 = 0x0AE5L;
    int **l_542 = (void*)0;
    char ***l_571 = &g_570;
    int *l_625 = (void*)0;
    int *l_626 = &l_418.f5;
    char l_627 = 0x2EL;
    int l_649 = 0xC3C16623L;
    unsigned char *l_660 = &g_74;
    unsigned char l_682 = 0x40L;
    int *l_704 = (void*)0;
    unsigned l_708 = 18446744073709551614UL;
    unsigned char ***l_725 = &g_421;
    unsigned char *l_754 = &g_81.f2;
    short l_760 = (-5L);
    struct S0 *l_764 = &g_763;
    char *l_767 = (void*)0;
    int **l_768 = &g_115;
    if (func_2((((g_7 >= func_8(func_10((g_7 == (g_7 >= (safe_lshift_func_int16_t_s_s(l_15, (((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(((*l_210) = (g_7 < func_19(g_7, g_24, ((g_24.f1 ^ (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(l_29, 13)) == l_29), g_24.f6))) | 0UL), l_29))))), l_29)) || g_81.f8) , l_15))))), l_15))) > g_24.f3) && (-10L)), g_24.f8, g_24.f7, g_24.f8))
    {
        short l_412 = (-1L);
        unsigned char *l_419 = (void*)0;
        int l_427 = 0xB9554B73L;
        int *l_439 = &l_418.f5;
        short l_459 = 0xE778L;
        struct S0 l_468 = {65530UL,0x89D67758L,0x9DL,0x19L,0x2A829275L,0xC5CC25C5L,0xA1FC2F4EL,18446744073709551615UL,1L,-1L};
        int l_473 = 8L;
        int l_475 = 0xAD7B503AL;
        int ***l_579 = (void*)0;
        unsigned l_600 = 0UL;
        unsigned short l_601 = 0xA5ECL;
        unsigned short **l_633 = &g_327;
        int *l_705 = &g_24.f5;
        for (g_81.f3 = 0; (g_81.f3 <= (-21)); g_81.f3--)
        {
            unsigned l_411 = 0x5F2B4DD0L;
            struct S0 l_417 = {0UL,0x9DBF062FL,0x7FL,0xD1L,0xFCC0BAF0L,0xED23CC18L,0UL,0x28A1C0AFL,-10L,0L};
            int l_430 = 3L;
            int *l_434 = &g_172.f1;
            unsigned short l_469 = 65530UL;
            (*g_301) = l_411;
            if (((l_412 != (((*g_301) = (safe_add_func_uint16_t_u_u(0xB23AL, g_7))) == (safe_sub_func_int32_t_s_s(l_411, (func_8(l_417) < func_8(l_418)))))) , ((*g_73) & (*g_99))))
            {
                unsigned char ****l_422 = &g_420;
                int l_423 = (-10L);
                struct S0 *l_424 = &l_418;
                char *l_433 = &g_118;
                int *l_435 = (void*)0;
                short l_472 = 0x8167L;
                (*g_301) = ((((*l_422) = g_420) == &g_421) >= l_423);
                (*l_424) = (g_24 = g_172);
                if (((65529UL <= (!0L)) , (safe_lshift_func_uint8_t_u_u((l_427 | (g_172.f8 ^ l_412)), 6))))
                {
                    int **l_436 = &g_66;
                    (*l_436) = l_435;

                    ;
                }
                else
                {
                    for (g_352 = 14; (g_352 == (-22)); g_352 = safe_sub_func_int8_t_s_s(g_352, 4))
                    {
                        (*g_301) = 0xDD522698L;
                    }
                    l_439 = l_439;
                    for (g_81.f8 = 0; (g_81.f8 <= 17); g_81.f8++)
                    {
                        int *l_442 = &l_418.f5;
                        (*g_301) = (*g_301);
                        l_442 = l_210;

                        ;
                        (*l_424) = g_172;
                    }
                }
                for (g_24.f8 = 5; (g_24.f8 == (-27)); g_24.f8--)
                {
                    unsigned *l_457 = &g_172.f7;
                    for (g_24.f0 = 0; (g_24.f0 > 36); ++g_24.f0)
                    {
                        (*l_424) = g_172;
                        g_172 = g_172;
                        (*l_439) = 0xDC921ABDL;
                    }
                    if ((1L && l_423))
                    {
                        unsigned l_451 = 4294967294UL;
                        int **l_452 = &g_66;
                        unsigned *l_456 = &l_417.f4;
                        unsigned **l_455 = &l_456;
                        (*g_301) = ((safe_rshift_func_int16_t_s_s(g_81.f3, ((*g_301) || (safe_lshift_func_uint8_t_u_u((~((*g_327) || (*g_327))), (*l_434)))))) < l_451);
                        (*l_452) = l_439;

                        ;
                        l_459 = (g_81.f3 && func_59((safe_sub_func_int16_t_s_s(1L, l_418.f2)), (((*l_455) = &g_219) != l_457), g_458, (*l_452), (**g_420)));


                        ;
                    }
                    else
                    {
                        short **l_460 = (void*)0;
                        short *l_462 = (void*)0;
                        short **l_461 = &l_462;
                        (*l_439) = ((((g_327 != ((*l_461) = (void*)0)) <= (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((func_8(l_418) , (((*l_210) = 0x10EB170FL) , (l_469 || 4294967295UL))), (*g_99))), l_418.f2)) | l_418.f8) , (*l_434))) == (*l_434)) | 0x71L);
                    }
                    for (g_24.f2 = 0; (g_24.f2 < 7); ++g_24.f2)
                    {
                        g_172 = l_468;
                        (*l_424) = (((*l_433) = l_472) , g_81);
                        (*l_424) = l_417;
                    }
                }
            }
            else
            {
                short l_476 = 0xD7B2L;
                int l_487 = 0xFD7F4A68L;
                int *l_488 = (void*)0;
                struct S0 *l_491 = (void*)0;
                struct S0 **l_490 = &l_491;
                if (l_473)
                {
                    (*l_439) = ((*g_458) = (safe_unary_minus_func_uint32_t_u(((*l_210) = ((*g_73) || (*l_439))))));
                }
                else
                {
                    int l_477 = 0xBB4B7038L;
                    short *l_486 = &l_476;
                    int **l_489 = &g_115;
                    (*l_439) = func_2((l_475 , (((*l_486) = ((l_476 , ((*l_434) ^ (*g_301))) & (l_477 , ((safe_rshift_func_int16_t_s_s((!(-1L)), 5)) == ((safe_lshift_func_uint16_t_u_u(((g_172.f8 | (*l_434)) , (safe_rshift_func_uint8_t_u_u((l_418.f0 , (*g_73)), l_476))), l_418.f7)) < 0xE18B6252L))))) > 0xAF7AL)), l_418.f1, g_81.f4, l_487);
                    (*l_489) = l_488;

                    ;
                    (*l_439) = (*g_301);
                }
                (*l_490) = &l_468;

                ;
            }
        }


        if (l_418.f5)
        {
            int *l_492 = &l_418.f8;
            struct S0 l_493 = {0xA572L,0L,4UL,0xEAL,0xAC4D55F4L,-1L,0UL,18446744073709551611UL,0L,0L};
            struct S0 *l_494 = &l_418;
            short *l_496 = &l_459;
            short **l_495 = &l_496;
            short **l_497 = (void*)0;
            char *l_498 = &l_493.f3;
            int **l_499 = &g_458;
            int **l_500 = (void*)0;
            int **l_501 = &g_66;
            (*l_501) = ((*l_499) = l_210);

            ;
            ;
        }
        else
        {
            struct S0 *l_502 = &l_468;
            struct S0 **l_503 = &l_502;
            int l_522 = (-8L);
            unsigned char *l_523 = &l_418.f2;
            unsigned **l_548 = &g_546;
            char **l_568 = &g_99;
            int l_587 = (-9L);
            unsigned short *l_595 = &g_24.f0;
            int *l_629 = &g_24.f1;
            int *l_667 = (void*)0;
            (*l_503) = l_502;
            for (g_74 = 0; (g_74 > 3); g_74 = safe_add_func_int16_t_s_s(g_74, 2))
            {
                for (g_81.f1 = 0; (g_81.f1 < (-12)); g_81.f1--)
                {
                    int *l_508 = (void*)0;
                    int **l_509 = &l_439;
                    (*l_509) = l_508;

                    ;
                    (*l_509) = l_439;
                }
            }

            ;
            if ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((l_468.f1 , (func_8((*l_502)) & (*g_458))), ((**g_421) = (((safe_rshift_func_int16_t_s_s(0xBB18L, 10)) | (safe_lshift_func_int8_t_s_u((((safe_rshift_func_int16_t_s_u((((*g_327) = (*g_327)) , g_24.f1), 6)) == (((*l_210) = ((***g_420) , (+(safe_lshift_func_int8_t_s_s((5UL <= (*g_99)), 1))))) && l_29)) & 4L), 2))) != (*g_458))))) ^ l_15), (-1L))))
            {
                unsigned l_524 = 0x15054DA6L;
                int **l_527 = &g_458;
                char **l_530 = &l_525;
                struct S0 l_531 = {65532UL,0x9BDA8BE4L,0xFFL,0x91L,18446744073709551606UL,1L,4294967287UL,0x82471B8AL,0x01FF698FL,0xA8280FFAL};
                char *l_532 = (void*)0;
                char *l_533 = &g_172.f3;
                (*l_527) = g_458;
                (*l_527) = (void*)0;

                ;
                (*g_301) = (safe_lshift_func_uint8_t_u_s((***g_420), 3));
            }
            else
            {
                short l_565 = 0x613FL;
                char *l_589 = (void*)0;
                unsigned *l_606 = (void*)0;
                unsigned *l_607 = &g_24.f6;
                int *l_618 = &l_418.f5;
                short l_643 = (-3L);
                struct S0 l_664 = {0x7867L,0x9309B526L,0x27L,0xACL,18446744073709551607UL,7L,0xBC0E8463L,5UL,1L,0xDFFE3071L};
                if ((*g_458))
                {
                    return l_522;


                }
                else
                {
                    for (g_81.f9 = 0; (g_81.f9 != (-27)); --g_81.f9)
                    {
                        unsigned ***l_547 = (void*)0;
                        int **l_549 = (void*)0;
                        int **l_550 = &g_458;
                        int *l_551 = &l_522;
                        l_548 = g_545;
                        l_551 = ((*l_550) = g_301);

                        ;
                    }
                }
                for (g_24.f0 = (-15); (g_24.f0 == 20); g_24.f0 = safe_add_func_uint16_t_u_u(g_24.f0, 3))
                {
                    int l_562 = (-1L);
                    unsigned l_592 = 2UL;
                    short *l_593 = (void*)0;
                    short *l_594 = &l_412;
                    if ((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(g_219, ((*g_327) = (safe_add_func_uint8_t_u_u((**g_421), (safe_sub_func_uint16_t_u_u((0xAC4F36B9L & g_352), (g_172 , (*g_327))))))))), (func_8(g_24) >= (l_418.f9 & g_172.f0)))))
                    {
                        (*g_458) = (l_562 , (safe_add_func_uint8_t_u_u((!255UL), ((((***g_420) = (***g_420)) != ((((l_565 , (safe_rshift_func_uint16_t_u_u(func_8(l_418), 7))) > (func_8(l_468) , (249UL & 0xF7L))) ^ 0x2AAEE6A0L) ^ (*g_301))) & l_565))));
                        return l_562;


                    }
                    else
                    {
                        char ****l_572 = &l_571;
                        int l_580 = (-5L);
                        struct S0 l_588 = {0UL,2L,1UL,0x84L,18446744073709551615UL,2L,0UL,18446744073709551607UL,1L,8L};
                        if (l_522)
                            break;
                        l_522 = ((g_172.f1 , l_568) == &l_525);
                        l_580 = (((g_569 = (void*)0) != (g_24 , ((*l_572) = l_571))) != (func_8((l_468 = ((safe_rshift_func_uint16_t_u_u(func_8((((((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_579 != (void*)0), (l_580 == (safe_mod_func_uint32_t_u_u(((*g_420) == (*g_420)), (*g_458)))))), (*g_327))) >= 1L) <= g_172.f0) < (-2L)) , g_24)), 1)) , g_24))) && l_565));

                        ;
                        g_24.f5 = ((*g_458) = ((((safe_rshift_func_int8_t_s_u((*g_99), (!(safe_mod_func_uint32_t_u_u(l_562, ((*g_327) || (*g_327))))))) , l_568) != &g_99) == g_172.f8));
                    }

                    ;
                    (*g_458) = (*g_458);
                }

                ;
                if (((safe_add_func_uint8_t_u_u(((((*l_210) = (safe_lshift_func_uint8_t_u_u(l_522, 7))) & (l_601 = l_600)) , (***g_420)), (((*g_327) <= ((safe_sub_func_int8_t_s_s((((*l_607) = ((((func_8(l_468) || ((*l_525) = l_565)) >= (((*g_73) && ((safe_sub_func_uint8_t_u_u(((((g_172.f6 || l_565) , (**g_545)) , g_81.f8) >= 0UL), 246UL)) == (*g_327))) || l_587)) >= 0x2CL) , l_565)) > (-2L)), l_565)) , (*g_327))) , 0xBCL))) || l_522))
                {
                    short l_612 = (-7L);
                    int **l_613 = &g_458;
                    (*l_613) = g_546;

                    ;
                    if (((safe_add_func_int32_t_s_s(0x5F000933L, ((-1L) & g_172.f2))) != 2UL))
                    {
                        unsigned l_616 = 4294967286UL;
                        int *l_617 = &g_24.f5;
                        (*g_458) = l_616;
                        g_115 = (void*)0;

                        ;
                        l_618 = l_617;

                        ;
                        (*l_503) = &g_24;

                        ;
                    }
                    else
                    {
                        (*l_613) = g_301;

                        ;
                        (*l_613) = (*l_613);
                        (*l_502) = l_418;
                    }

                    ;
                    ;
                    ;
                    return (*g_458);


                }
                else
                {
                    unsigned char ****l_619 = &g_420;
                    unsigned char *****l_620 = &l_619;
                    int l_630 = 0L;
                    if (((((((((*l_620) = l_619) == &g_420) < func_2((safe_lshift_func_int16_t_s_u(((((*l_618) , (void*)0) == (((**l_548) = (((((*g_301) != (*l_618)) || l_627) , (-1L)) != g_24.f2)) , (void*)0)) || (*l_618)), 3)), l_587, g_172.f5, l_522)) | g_172.f4) , (*g_327)) , 0x2300L) , (*l_626)))
                    {
                        int **l_628 = &l_626;
                        (*l_628) = (void*)0;

                        ;
                    }
                    else
                    {
                        l_629 = &l_522;

                        ;
                        return l_630;


                    }

                    ;
                    (*l_503) = &g_172;

                    ;
                }

                ;
                ;
                for (g_352 = 0; (g_352 >= (-2)); --g_352)
                {
                    unsigned ***l_644 = &l_548;
                    struct S0 l_650 = {65533UL,0x487E6C6BL,0x75L,0xB9L,3UL,1L,0xE415B730L,0x8DB30259L,2L,0L};
                    char *l_661 = &g_38;
                    int *l_662 = &l_650.f1;
                    g_634 = l_633;

                    ;
                }

                ;
            }

            ;
            ;
            ;
            ;
            ;
            if (l_682)
            {
                unsigned l_694 = 0x1F894D51L;
                int l_701 = 4L;
                int *l_706 = &l_468.f1;
                for (g_81.f5 = 0; (g_81.f5 > 1); g_81.f5 = safe_add_func_uint8_t_u_u(g_81.f5, 1))
                {
                    int l_687 = 0x7B03571EL;
                    int *l_689 = &l_15;
                    int **l_688 = &l_689;
                    int *l_691 = &g_172.f8;
                    int **l_690 = &l_691;
                    struct S0 *l_695 = &g_24;
                    int **l_707 = &g_115;
                    if ((safe_rshift_func_uint8_t_u_s(0xEEL, (((((l_687 == (((*l_688) = &g_352) == ((*l_690) = (void*)0))) | g_172.f8) , (g_681.f1 > ((*l_629) = (((safe_add_func_int32_t_s_s(((1UL | (+(&l_468 == ((*l_503) = &g_681)))) == l_687), 0xCD76B111L)) & l_687) , l_694)))) != (*g_327)) < g_681.f9))))
                    {
                        int **l_696 = &l_626;
                        l_695 = &l_468;

                        ;
                        (*l_696) = g_301;

                        ;
                        if ((*l_626))
                            continue;
                        l_687 = (func_2(g_172.f6, g_172.f9, g_172.f9, l_694) | (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((**g_421), (l_701 , (func_8(g_81) < (**l_696))))) | (**l_696)), 1L)));
                    }
                    else
                    {
                        int **l_702 = (void*)0;
                        int **l_703 = &l_667;
                        (*l_703) = &l_687;

                        ;
                        l_705 = l_704;

                        ;
                        g_458 = ((*l_703) = g_458);

                        ;
                    }

                    ;
                    ;
                    ;
                    ;
                    (*l_629) = l_694;
                    (*l_707) = l_706;

                    ;
                }


                ;
                ;
                ;
                ;
                return l_708;



            }
            else
            {
                unsigned short l_709 = 0x6929L;
                int l_717 = 1L;
                int *l_722 = (void*)0;
                struct S0 *l_755 = &g_81;
                if ((((((*g_301) > (*l_705)) ^ g_352) , (***g_420)) >= (*g_73)))
                {
                    short l_733 = 9L;
                    short *l_734 = &l_412;
                    char *l_739 = &l_418.f3;
                    struct S0 l_740 = {0x100FL,0xC22771E8L,0x1CL,-1L,0xFE774970L,0L,9UL,18446744073709551612UL,-1L,-1L};
                    char l_741 = 0xB3L;
                    for (l_459 = 0; (l_459 == (-14)); --l_459)
                    {
                        return (*g_301);


                    }
                    (*g_301) = ((((l_725 == (g_726 , &g_421)) , &g_327) == (((*l_210) = ((safe_add_func_uint32_t_u_u(((~((((((((*l_734) = (safe_rshift_func_uint16_t_u_s(((*l_595) = func_8(g_24)), g_172.f7))) <= 0UL) != (*g_99)) == 0xB9BBL) || (*g_327)) || (*g_301)) , (*g_73))) ^ (*g_99)), l_733)) & l_717)) , &g_327)) | 0x31L);
                    (*l_502) = g_24;
                    for (l_473 = 0; (l_473 >= 29); l_473 = safe_add_func_uint16_t_u_u(l_473, 1))
                    {
                        int l_744 = 0x0D63EB7EL;
                        if (l_744)
                            break;
                    }
                }
                else
                {
                    unsigned char l_750 = 255UL;
                    for (g_352 = 0; (g_352 >= (-14)); g_352 = safe_sub_func_uint32_t_u_u(g_352, 3))
                    {
                        int **l_747 = &l_705;
                        g_458 = g_458;
                        (*l_747) = g_458;

                        ;
                    }

                    ;
                    for (g_681.f6 = (-2); (g_681.f6 != 56); g_681.f6 = safe_add_func_uint16_t_u_u(g_681.f6, 9))
                    {
                        (*l_503) = &g_81;

                        ;
                    }

                    ;
                    return l_750;


                }
                (*g_301) = (safe_lshift_func_int16_t_s_s((((*l_705) == ((*g_301) != g_172.f2)) != (*g_73)), g_681.f6));
                (*l_755) = ((*l_502) = l_418);
            }
        }


        ;
        ;
        ;
        ;
        ;
    }
    else
    {
        return (*g_301);
    }



    ;
    ;
    ;
    ;
    (*l_768) = &l_649;

    ;
    return (*g_301);



}







static int func_2(unsigned p_3, unsigned p_4, int p_5, int p_6)
{
    char l_400 = 0x4BL;
    struct S0 l_403 = {0x9DAFL,7L,0xCFL,9L,18446744073709551615UL,0xA4502591L,0xFA61CDEDL,0xDBFA3BDAL,-1L,0x473788A0L};
    struct S0 *l_406 = &l_403;
    struct S0 *l_407 = (void*)0;
    struct S0 *l_408 = &g_24;
    for (g_24.f1 = (-29); (g_24.f1 > 11); ++g_24.f1)
    {
        int **l_391 = &g_66;
        struct S0 l_404 = {2UL,0L,0x34L,0x95L,18446744073709551615UL,-1L,0UL,2UL,0xD7D847DFL,-5L};
        (*l_391) = &p_6;

        ;
        (*g_66) = (safe_mod_func_int8_t_s_s((((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(l_400, 12)), (safe_rshift_func_uint16_t_u_u(l_400, 12)))), (*g_327))) ^ ((g_172.f0 = (l_403 , (*g_327))) <= 0x25E7L)) || (p_6 | g_81.f1)), (((func_8(l_404) , 1UL) < (*g_73)) & 0x0CB6L)));
        if (g_405)
            continue;
        (*l_391) = &p_6;
    }


    (*l_408) = ((*l_406) = g_81);
    return p_6;


}







static unsigned char func_8(struct S0 p_9)
{
    unsigned char l_388 = 7UL;
    return l_388;
}







static struct S0 func_10(int p_11, unsigned char p_12)
{
    struct S0 *l_215 = &g_81;
    int l_216 = 0xB2A3436EL;
    char **l_240 = &g_99;
    int **l_258 = &g_115;
    int ***l_257 = &l_258;
    unsigned short *l_328 = (void*)0;
    unsigned char *l_340 = &g_81.f2;
    unsigned *l_358 = &g_172.f6;
    unsigned **l_357 = &l_358;
    unsigned char l_375 = 0xECL;
    if ((safe_add_func_int32_t_s_s((*g_115), (safe_mod_func_uint16_t_u_u((((void*)0 == l_215) | (!l_216)), (((safe_sub_func_uint32_t_u_u(p_12, (((*g_99) = (((*g_99) , 0x9DL) ^ ((*g_115) ^ 0xCC8D63AEL))) & g_172.f2))) ^ l_216) ^ g_219))))))
    {
        unsigned *l_226 = &g_172.f6;
        unsigned char **l_231 = (void*)0;
        unsigned char **l_232 = &g_73;
        int l_233 = 0x7E22023EL;
        unsigned char ***l_238 = &l_231;
        unsigned char ***l_239 = &l_232;
        char **l_242 = &g_99;
        char ***l_241 = &l_242;
        char l_274 = 0xB7L;
        int **l_275 = &g_66;
        struct S0 l_277 = {1UL,1L,0xF7L,0xA1L,0x23E1FFD4L,-4L,0xAECF41E2L,0xE91B169CL,0xB4B79774L,-1L};
        unsigned l_304 = 0x6D9E32C1L;
        unsigned short l_354 = 65528UL;
        (*l_239) = ((*l_238) = ((((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u((~((*g_73) = (*g_73))), 5)) && (l_226 != &g_7)), 7)), 7)) | (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(0xB0L, 3)), (((l_231 == l_232) != (l_233 < p_11)) , (safe_add_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(((*g_115) != 0UL), 0xA2BDL)) , g_219) , g_24.f6), 0x2955L)))))) && 0xB541L) , (void*)0));

        ;
        if (((p_11 <= (l_240 == ((*l_241) = &g_99))) ^ l_216))
        {
            short l_248 = (-4L);
            struct S0 *l_266 = &g_172;
            int l_276 = 0L;
            int *l_279 = (void*)0;
            unsigned char *l_282 = &l_277.f2;
            int l_329 = 1L;
            if ((!(p_11 , ((*g_115) = func_39((*l_242), (((*g_73) = p_12) , (*l_215)), ((((0xB743L != (p_12 < ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((*g_99), 5)), (safe_unary_minus_func_int8_t_s(l_216)))) && l_248))) == 65535UL) < p_12) , g_73))))))
            {
                char **l_251 = &g_99;
                char ***l_252 = &l_240;
                unsigned *l_253 = &g_172.f4;
                int ****l_255 = (void*)0;
                int ****l_256 = &g_254;
                unsigned char l_265 = 254UL;
                l_233 = (((l_216 | (((*l_241) = l_251) != (g_24 , ((*l_252) = (void*)0)))) | (((*l_256) = (((*l_253) = l_216) , g_254)) == l_257)) , (safe_mod_func_int32_t_s_s((+((l_215 == ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(p_12, p_11)), p_11)) , l_266)) || p_11)), l_248)));

                ;
                (**l_258) = (-6L);
                for (g_219 = 0; (g_219 == 5); g_219++)
                {
                    int l_281 = (-9L);
                }
                (*g_115) = (-3L);
            }
            else
            {
                unsigned short l_300 = 0xCD83L;
                int *l_310 = &g_24.f1;
                for (l_277.f3 = 0; (l_277.f3 != (-13)); l_277.f3 = safe_sub_func_int32_t_s_s(l_277.f3, 3))
                {
                    struct S0 l_297 = {0x9725L,0x4D96CFDBL,0x25L,0xCDL,1UL,0x6989875FL,0x92B58059L,18446744073709551615UL,0x451AA7E5L,0L};
                    int *l_303 = &g_172.f1;
                    for (g_172.f3 = 0; (g_172.f3 < (-6)); --g_172.f3)
                    {
                        char *l_289 = &g_38;
                        unsigned *l_292 = &l_277.f7;
                        unsigned *l_293 = &g_81.f7;
                        unsigned *l_294 = &g_172.f7;
                        int l_302 = (-1L);
                        (*g_115) = (safe_lshift_func_int8_t_s_u((((((*g_73) <= ((*l_289) = ((**l_240) = (p_12 >= p_11)))) && (safe_mod_func_int32_t_s_s(((!l_304) | 6L), p_12))) , 1UL) && g_24.f8), (*g_73)));
                        (**l_258) = p_12;
                        (*l_215) = (*l_266);
                        (*l_303) = (safe_sub_func_uint32_t_u_u(g_24.f4, (*g_115)));
                    }
                    if (p_11)
                    {
                        int *l_309 = &l_277.f1;
                        (*g_301) = (safe_mod_func_uint8_t_u_u((*g_73), (*g_73)));
                        (*l_275) = l_303;

                        ;
                        (*l_258) = l_309;

                        ;
                    }
                    else
                    {
                        return (*l_266);
                    }

                    ;
                    ;
                    (*l_258) = l_310;

                    ;
                    for (l_297.f1 = (-7); (l_297.f1 <= 1); l_297.f1 = safe_add_func_uint32_t_u_u(l_297.f1, 7))
                    {
                        char *l_313 = &g_156;
                        short *l_314 = &l_248;
                        (*l_310) = (((func_39(l_313, g_24, &g_74) == ((*l_314) = (4294967291UL < p_12))) ^ 65535UL) ^ ((*l_303) = (((safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s((safe_rshift_func_int8_t_s_s((*l_303), 7)))), p_12)) ^ p_12), p_12)) & 65535UL) ^ 0xBDBB9429L)));


                        if (p_11)
                            continue;
                    }


                }


                ;
                if (((*l_310) = (-1L)))
                {
                    unsigned l_324 = 0x7A03E219L;
                    unsigned short *l_325 = (void*)0;
                    unsigned short **l_326 = (void*)0;
                    short *l_332 = &l_248;
                    (*l_266) = (*l_215);
                    (*g_115) = (*g_115);
                    (*l_215) = ((*l_266) = g_24);
                    (**l_257) = g_301;

                    ;
                }
                else
                {
                    (***l_257) = (*l_310);
                }

                ;
                (*l_275) = &l_329;

                ;
            }


            ;
            ;
        }
        else
        {
            struct S0 l_335 = {0x7D32L,0x782F27B9L,0x7DL,0L,2UL,3L,9UL,1UL,0x072930ECL,0xA89D96C7L};
            unsigned short *l_339 = &l_277.f0;
            unsigned char *l_344 = (void*)0;
            int *l_351 = &l_216;
            for (l_277.f8 = (-26); (l_277.f8 == 2); l_277.f8++)
            {
                struct S0 l_336 = {0x06B0L,-6L,1UL,-10L,18446744073709551615UL,0xF8A62B8CL,0x00561AD3L,18446744073709551606UL,1L,0xDE73E263L};
                char *l_343 = (void*)0;
                unsigned char *l_361 = (void*)0;
                l_336 = ((*l_215) = l_335);
                if ((((~(((+((safe_add_func_int32_t_s_s((l_339 == (void*)0), 0L)) , g_172.f2)) > p_12) , 0x16A63AFEL)) , (void*)0) != l_339))
                {
                    struct S0 l_345 = {65529UL,1L,0x3CL,0x49L,8UL,8L,0UL,0xC8E5519FL,0x23FB4920L,0x52468624L};
                    unsigned l_350 = 1UL;
                    int *l_353 = (void*)0;
                    (*l_275) = l_353;

                    ;
                    if (((*l_240) != (void*)0))
                    {
                        g_172 = l_335;
                        if (p_11)
                            break;
                        (**l_257) = (*l_275);

                        ;
                    }
                    else
                    {
                        unsigned short l_355 = 1UL;
                        (*l_215) = l_336;
                        (*l_215) = l_345;
                        if (l_336.f4)
                            continue;
                        if (l_355)
                            continue;
                    }
                }
                else
                {
                    unsigned ***l_359 = (void*)0;
                    unsigned ***l_360 = &l_357;
                    int *l_362 = &g_24.f5;
                    (*l_360) = (((safe_unary_minus_func_uint16_t_u((((*l_215) = l_336) , 0UL))) , ((void*)0 == &l_275)) , l_357);
                    if ((*g_301))
                        continue;
                    (*l_258) = (*l_258);
                    (*l_258) = l_362;

                    ;
                }
                for (l_335.f6 = (-16); (l_335.f6 < 38); l_335.f6 = safe_add_func_uint8_t_u_u(l_335.f6, 5))
                {
                    (*g_301) = 0xCE710D72L;
                    if (l_277.f8)
                        break;
                }
            }


            ;
        }


        ;
        ;
        (*g_301) = p_12;
        (*g_301) = ((safe_lshift_func_uint8_t_u_s((*g_73), (safe_lshift_func_uint8_t_u_u(((*g_301) || g_156), ((7UL ^ ((**l_242) = (safe_add_func_uint8_t_u_u(l_274, (+(*g_73)))))) ^ ((safe_mod_func_uint32_t_u_u(p_12, ((((safe_add_func_uint8_t_u_u(((void*)0 == &p_12), l_277.f1)) , p_12) , p_11) , l_375))) , 65531UL)))))) , p_11);
    }
    else
    {
        char **l_382 = &g_99;
        int l_383 = 0x142D2C3EL;
        short l_384 = 0xC805L;
        struct S0 **l_385 = (void*)0;
        (*g_115) = (8L <= (safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u((l_383 = (p_12 , ((**l_240) = ((safe_rshift_func_uint16_t_u_s(((l_382 != l_382) | func_39((*l_240), g_24, &g_74)), 9)) || ((***l_257) & 0x94L))))), 3)) > l_384) , (*g_115)), p_12)));
        l_215 = l_215;
        for (g_24.f6 = (-15); (g_24.f6 <= 12); g_24.f6++)
        {
            (*l_258) = &l_383;

            ;
            if (p_11)
                continue;
        }

        ;
    }



    ;
    return (*l_215);
}







static int func_19(int p_20, struct S0 p_21, unsigned p_22, unsigned p_23)
{
    unsigned char *l_32 = &g_24.f2;
    char *l_37 = &g_38;
    unsigned short l_48 = 0xF9D9L;
    int *l_208 = (void*)0;
    int *l_209 = &g_172.f1;
    (*l_209) = (~(safe_lshift_func_int8_t_s_u(((((*l_32) = (3UL < g_24.f4)) < g_24.f3) == ((safe_add_func_int16_t_s_s((((((0x7779E46EL == ((safe_rshift_func_int8_t_s_s(((((((((*l_37) = 0x58L) == 0x2BL) >= (l_32 != (g_24.f9 , (func_39(func_43(l_48, l_37, p_21.f4, l_37), p_21, l_32) , (void*)0)))) || l_48) == l_48) , 0xB052L) | 2UL), 0)) || 0x05L)) & p_21.f3) == p_20) <= p_21.f1) != p_21.f4), 0x9901L)) | p_21.f7)), p_22)));


    return (*g_115);
}







static unsigned func_39(char * p_40, struct S0 p_41, unsigned char * p_42)
{
    char l_186 = 0L;
    unsigned *l_189 = &g_7;
    unsigned char *l_190 = &g_74;
    int **l_191 = (void*)0;
    int **l_192 = &g_66;
    struct S0 l_193 = {65535UL,0x69AD26FAL,4UL,1L,0UL,0xE438FE63L,1UL,18446744073709551615UL,-1L,0x82CA4FB3L};
    struct S0 *l_194 = &g_81;
    short l_204 = 0x7B44L;
    short l_207 = 0x3A84L;
    (*l_192) = l_189;

    ;
    (*l_194) = l_193;
    for (g_172.f3 = 0; (g_172.f3 >= 7); g_172.f3 = safe_add_func_uint8_t_u_u(g_172.f3, 9))
    {
        unsigned *l_199 = &g_24.f6;
        int l_201 = 0xA2908B59L;
        int *l_205 = &l_193.f5;
        unsigned char *l_206 = &g_81.f2;
        (*l_192) = g_115;

        ;
        (*l_205) = func_59(((((*g_73) <= (((safe_add_func_int8_t_s_s((**l_192), (((*l_199) = p_41.f4) , ((*g_99) = (+0x8CL))))) <= (((safe_unary_minus_func_uint32_t_u(((p_41.f3 = (**l_192)) , ((p_41.f8 , l_201) | (l_201 || ((*l_206) = ((((*l_205) = (safe_sub_func_uint8_t_u_u(l_204, (**l_192)))) != p_41.f1) >= 9L))))))) != g_81.f4) ^ (**l_192))) != 0x19188B84L)) > 0xEFL) | l_207), (**l_192), &l_201, (*l_192), l_190);


    }


    return g_24.f0;
}







static char * func_43(unsigned short p_44, unsigned char * p_45, short p_46, char * p_47)
{
    struct S0 l_55 = {9UL,7L,255UL,0xCDL,0x2FFD363BL,1L,8UL,0x4B380B77L,0xB032F891L,0x98557C7BL};
    int *l_65 = &l_55.f5;
    int *l_68 = &g_24.f5;
    int **l_67 = &l_68;
    int **l_69 = (void*)0;
    int **l_70 = (void*)0;
    int *l_72 = &g_24.f1;
    int **l_71 = &l_72;
    short l_92 = (-5L);
    struct S0 *l_183 = &g_81;
    (*l_71) = func_49(l_55, g_24.f9, p_47, (g_99 = func_56(func_59(l_55.f9, l_55.f0, l_65, ((*l_71) = ((*l_67) = (g_66 = (g_24.f1 , g_66)))), p_45), l_92)), p_46);


    ;
    ;
    (*l_183) = l_55;
    g_172 = ((*l_183) = (*l_183));
    (*l_67) = (void*)0;

    ;
    return p_47;


}







static int * func_49(struct S0 p_50, int p_51, unsigned char * p_52, char * p_53, int p_54)
{
    int *l_110 = &g_81.f5;
    unsigned char *l_128 = (void*)0;
    unsigned *l_137 = (void*)0;
    int l_146 = 1L;
    struct S0 l_177 = {0x96A2L,0x9F80F1B6L,1UL,0L,1UL,0x14BFD0F7L,0UL,0xFBB508EAL,0xA6AB5360L,2L};
    g_81.f1 = p_50.f2;
    for (p_50.f6 = (-26); (p_50.f6 >= 53); ++p_50.f6)
    {
        short l_123 = 0x63D3L;
        char *l_153 = (void*)0;
        char *l_154 = &g_118;
        char *l_155 = &g_156;
        int *l_161 = &g_24.f5;
        for (p_50.f0 = 0; (p_50.f0 > 51); p_50.f0 = safe_add_func_uint32_t_u_u(p_50.f0, 5))
        {
            int *l_126 = (void*)0;
            for (g_24.f5 = 0; (g_24.f5 == (-6)); g_24.f5 = safe_sub_func_int16_t_s_s(g_24.f5, 8))
            {
                unsigned l_124 = 18446744073709551612UL;
                int *l_127 = &g_81.f5;
                for (p_50.f1 = (-20); (p_50.f1 != (-4)); ++p_50.f1)
                {
                    int **l_114 = &l_110;
                    unsigned *l_116 = &g_81.f6;
                    char *l_117 = &g_118;
                    for (g_81.f1 = 0; (g_81.f1 == (-12)); g_81.f1--)
                    {
                        int **l_111 = &g_66;
                        (*l_111) = l_110;

                        ;
                        if ((*l_110))
                            continue;
                    }
                    if ((safe_add_func_int8_t_s_s((0x1E483D77L || (((((*l_114) = &p_51) != g_115) > ((*l_116) = 0UL)) , p_50.f8)), ((*l_117) = ((*g_99) = 5L)))))
                    {
                        char l_125 = (-1L);
                        unsigned l_129 = 0x4F6A9ED7L;
                        (*l_110) = (safe_lshift_func_int16_t_s_u(l_123, g_81.f5));
                        l_129 = (*l_110);
                        (*l_127) = 0x58788910L;
                    }
                    else
                    {
                        unsigned **l_136 = &l_116;
                        short *l_142 = (void*)0;
                        short *l_143 = &l_123;
                        if ((**l_114))
                            break;
                        (**l_114) = (safe_sub_func_int16_t_s_s(((*l_143) = ((*g_99) , (safe_sub_func_uint16_t_u_u(p_50.f0, (safe_sub_func_uint8_t_u_u((((*l_136) = &g_7) == (l_137 = l_127)), (((*g_99) < (*l_110)) , (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(p_50.f3, 4)), ((p_50.f8 & 0x2090DF5CL) < 0x71L)))))))))), g_24.f0));

                        ;
                        ;
                        g_66 = &p_51;

                        ;
                        return l_127;



                    }
                }
            }
        }
        for (g_81.f0 = 0; (g_81.f0 >= 6); g_81.f0++)
        {
            if ((*g_115))
                break;
        }
        if ((((l_146 > g_81.f8) , (0x51L < (p_51 , (((safe_add_func_int8_t_s_s((*p_53), (safe_sub_func_int32_t_s_s((*l_110), ((safe_sub_func_uint16_t_u_u((((*l_154) = 0x9AL) & ((*l_155) = (-1L))), ((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((*g_99), 255UL)), g_81.f4)) , g_81.f6))) >= (*l_110)))))) | 0x25F2L) | 1UL)))) < (*p_53)))
        {
            int **l_162 = &g_66;
            struct S0 *l_163 = &g_81;
            (*l_162) = l_161;

            ;
            (*l_163) = p_50;
        }
        else
        {
            int *l_169 = &g_81.f1;
            int **l_176 = &l_169;
            struct S0 *l_178 = &l_177;
            for (g_81.f7 = 4; (g_81.f7 <= 17); g_81.f7++)
            {
                unsigned *l_168 = &g_7;
                int l_175 = 0x40611769L;
                if (p_50.f8)
                {
                    (*l_161) = (((l_161 == l_168) != p_54) && (*p_53));
                    if ((*g_115))
                    {
                        return l_169;



                    }
                    else
                    {
                        if (p_50.f5)
                            break;
                    }
                }
                else
                {
                    int **l_170 = &l_110;
                    struct S0 *l_171 = &g_172;
                    (*l_170) = l_110;
                    (*l_171) = p_50;
                }
                for (g_81.f0 = 0; (g_81.f0 <= 46); g_81.f0++)
                {
                    if ((*g_115))
                        break;
                    if (l_175)
                        break;
                }
            }
            (*l_176) = &p_51;

            ;
            (*l_176) = (*l_176);
            (*l_178) = l_177;
        }
        for (l_123 = 16; (l_123 < (-8)); l_123 = safe_sub_func_uint16_t_u_u(l_123, 5))
        {
            int **l_181 = &l_161;
            int **l_182 = &g_115;
            (*l_182) = ((*l_181) = g_115);

            ;
            return g_115;



        }
    }


    ;
    return g_115;



}







static char * func_56(short p_57, unsigned char p_58)
{
    int *l_95 = &g_24.f5;
    int **l_96 = (void*)0;
    int **l_97 = &l_95;
    char *l_98 = &g_81.f3;
    for (g_81.f2 = 14; (g_81.f2 >= 59); g_81.f2 = safe_add_func_uint8_t_u_u(g_81.f2, 8))
    {
        g_66 = l_95;

        ;
    }
    (*l_97) = l_95;
    (**l_97) = p_58;
    return l_98;


}







static short func_59(int p_60, char p_61, int * p_62, int * p_63, unsigned char * p_64)
{
    unsigned char *l_75 = &g_74;
    int l_80 = 1L;
    int l_82 = 0xC41C9606L;
    (*g_66) = (g_73 != l_75);
    for (g_74 = 0; (g_74 != 4); g_74 = safe_add_func_uint32_t_u_u(g_74, 6))
    {
        return g_24.f7;
    }
    if (((*g_66) = (((*g_66) == 0x67548BA0L) , (safe_rshift_func_uint16_t_u_s((((p_61 , g_7) | ((l_80 = 0L) <= (g_24.f9 != g_24.f6))) , (~((g_81 , p_61) , p_61))), l_82)))))
    {
        int **l_83 = &g_66;
        (*l_83) = g_66;
    }
    else
    {
        int *l_84 = &g_81.f5;
        int **l_85 = &l_84;
        char *l_88 = &g_24.f3;
        char **l_87 = &l_88;
        char ***l_86 = &l_87;
        int ***l_91 = &l_85;
        (*l_85) = l_84;
        (*l_86) = (void*)0;

        ;
        for (g_81.f5 = (-15); (g_81.f5 != (-15)); g_81.f5 = safe_add_func_int8_t_s_s(g_81.f5, 8))
        {
            return g_81.f9;
        }
        (*l_91) = &l_84;
    }
    g_66 = &p_60;

    ;
    return g_81.f1;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    transparent_crc(g_24.f3, "g_24.f3", print_hash_value);
    transparent_crc(g_24.f4, "g_24.f4", print_hash_value);
    transparent_crc(g_24.f5, "g_24.f5", print_hash_value);
    transparent_crc(g_24.f6, "g_24.f6", print_hash_value);
    transparent_crc(g_24.f7, "g_24.f7", print_hash_value);
    transparent_crc(g_24.f8, "g_24.f8", print_hash_value);
    transparent_crc(g_24.f9, "g_24.f9", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
    transparent_crc(g_81.f1, "g_81.f1", print_hash_value);
    transparent_crc(g_81.f2, "g_81.f2", print_hash_value);
    transparent_crc(g_81.f3, "g_81.f3", print_hash_value);
    transparent_crc(g_81.f4, "g_81.f4", print_hash_value);
    transparent_crc(g_81.f5, "g_81.f5", print_hash_value);
    transparent_crc(g_81.f6, "g_81.f6", print_hash_value);
    transparent_crc(g_81.f7, "g_81.f7", print_hash_value);
    transparent_crc(g_81.f8, "g_81.f8", print_hash_value);
    transparent_crc(g_81.f9, "g_81.f9", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_172.f0, "g_172.f0", print_hash_value);
    transparent_crc(g_172.f1, "g_172.f1", print_hash_value);
    transparent_crc(g_172.f2, "g_172.f2", print_hash_value);
    transparent_crc(g_172.f3, "g_172.f3", print_hash_value);
    transparent_crc(g_172.f4, "g_172.f4", print_hash_value);
    transparent_crc(g_172.f5, "g_172.f5", print_hash_value);
    transparent_crc(g_172.f6, "g_172.f6", print_hash_value);
    transparent_crc(g_172.f7, "g_172.f7", print_hash_value);
    transparent_crc(g_172.f8, "g_172.f8", print_hash_value);
    transparent_crc(g_172.f9, "g_172.f9", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_681.f0, "g_681.f0", print_hash_value);
    transparent_crc(g_681.f1, "g_681.f1", print_hash_value);
    transparent_crc(g_681.f2, "g_681.f2", print_hash_value);
    transparent_crc(g_681.f3, "g_681.f3", print_hash_value);
    transparent_crc(g_681.f4, "g_681.f4", print_hash_value);
    transparent_crc(g_681.f5, "g_681.f5", print_hash_value);
    transparent_crc(g_681.f6, "g_681.f6", print_hash_value);
    transparent_crc(g_681.f7, "g_681.f7", print_hash_value);
    transparent_crc(g_681.f8, "g_681.f8", print_hash_value);
    transparent_crc(g_681.f9, "g_681.f9", print_hash_value);
    transparent_crc(g_726, "g_726", print_hash_value);
    transparent_crc(g_763.f0, "g_763.f0", print_hash_value);
    transparent_crc(g_763.f1, "g_763.f1", print_hash_value);
    transparent_crc(g_763.f2, "g_763.f2", print_hash_value);
    transparent_crc(g_763.f3, "g_763.f3", print_hash_value);
    transparent_crc(g_763.f4, "g_763.f4", print_hash_value);
    transparent_crc(g_763.f5, "g_763.f5", print_hash_value);
    transparent_crc(g_763.f6, "g_763.f6", print_hash_value);
    transparent_crc(g_763.f7, "g_763.f7", print_hash_value);
    transparent_crc(g_763.f8, "g_763.f8", print_hash_value);
    transparent_crc(g_763.f9, "g_763.f9", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
