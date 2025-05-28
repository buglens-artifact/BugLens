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
   unsigned f1 : 15;
   unsigned f2;
   unsigned char f3;
   unsigned char f4;
};


static int g_3 = 0x2D4EA680L;
static int *g_15 = &g_3;
static int **g_14 = &g_15;
static unsigned g_23 = 18446744073709551615UL;
static long long g_25 = (-1L);
static int g_26 = 0xEC58F553L;
static unsigned g_39 = 4294967295UL;
static long long g_45 = 0x39F3C5A4A104ACD6LL;
static char g_50 = 0x92L;
static unsigned short g_77 = 1UL;
static int g_80 = 0L;
static unsigned g_99 = 4294967292UL;
static int g_102 = 0x57D2A19DL;
static unsigned g_103 = 0xBB1342F2L;
static int *g_108 = &g_80;
static struct S0 g_134 = {1UL,151,0UL,9UL,3UL};
static long long *g_146 = &g_45;
static long long **g_145 = &g_146;
static unsigned long long g_185 = 5UL;
static unsigned long long g_187 = 18446744073709551608UL;
static short g_189 = 0x1870L;
static char g_191 = 1L;
static char *g_190 = &g_191;
static long long g_228 = 1L;
static int **g_240 = &g_108;
static char **g_347 = &g_190;
static short g_382 = 1L;
static unsigned long long *g_489 = (void*)0;
static unsigned long long **g_488 = &g_489;
static short g_501 = 0x5AA2L;
static int **g_601 = (void*)0;
static unsigned *g_659 = &g_134.f2;
static long long ***g_666 = (void*)0;
static long long ****g_665 = &g_666;
static char g_698 = 0x28L;
static short *g_707 = &g_501;
static short **g_706 = &g_707;
static unsigned g_722 = 18446744073709551615UL;
static unsigned short g_833 = 1UL;
static int g_851 = (-1L);
static unsigned char **g_925 = (void*)0;
static unsigned long long g_952 = 0UL;
static struct S0 g_1016 = {18446744073709551615UL,22,3UL,0x31L,0x25L};
static int **g_1020 = &g_15;
static unsigned long long g_1043 = 1UL;
static int g_1096 = (-1L);
static struct S0 *g_1115 = &g_1016;
static struct S0 **g_1114 = &g_1115;
static unsigned short **g_1166 = (void*)0;
static short g_1185 = 0x7912L;
static struct S0 g_1228 = {0x6064D5F0L,9,9UL,0x6BL,0xE1L};
static unsigned g_1243 = 4294967294UL;
static int g_1290 = 0xA1368DFCL;
static int g_1298 = 0x693E9F01L;
static unsigned short ****g_1371 = (void*)0;



static int func_1(void);
static int func_5(unsigned char p_6, int ** p_7);
static int * func_10(int * p_11, int ** p_12, int * p_13);
static int * func_19(int * p_20, int ** p_21, char p_22);
static char func_29(long long * p_30);
static long long ** func_32(unsigned p_33, long long * p_34, int * p_35, unsigned p_36, int ** p_37);
static long long * func_40(unsigned short p_41);
static int * func_43(int p_44);
static struct S0 func_51(int ** p_52, unsigned * p_53, struct S0 p_54, int p_55, int p_56);
static int ** func_57(unsigned p_58, unsigned p_59);
static int func_1(void)
{
    int *l_2 = &g_3;
    int **l_4 = &l_2;
    int l_725 = 0x31DA2A13L;
    long long *l_738 = &g_45;
    unsigned long long ***l_740 = &g_488;
    unsigned char l_749 = 0x47L;
    short l_754 = (-1L);
    int l_758 = (-1L);
    int l_775 = 0xC7CBDE48L;
    unsigned l_780 = 0UL;
    unsigned char l_801 = 0x4AL;
    unsigned short l_834 = 0x3922L;
    int **l_897 = &g_15;
    long long l_907 = 0L;
    long long ***l_923 = &g_145;
    unsigned short l_961 = 0x9258L;
    unsigned *l_983 = (void*)0;
    long long l_1001 = 0xC8C6029B5A612931LL;
    char l_1002 = 0x53L;
    unsigned short l_1003 = 4UL;
    unsigned short l_1005 = 65535UL;
    char l_1019 = 0x20L;
    char l_1031 = 0xA3L;
    unsigned long long l_1077 = 0x99EBA9C274146E46LL;
    unsigned l_1097 = 0x1AE5C7E0L;
    struct S0 l_1107 = {0UL,50,4294967292UL,8UL,0UL};
    unsigned l_1126 = 1UL;
    struct S0 **l_1130 = &g_1115;
    short **l_1152 = (void*)0;
    int *l_1216 = &l_725;
    unsigned l_1217 = 0x7B0EEEBDL;
    long long *****l_1218 = &g_665;
    unsigned l_1229 = 4294967287UL;
    char l_1240 = 0xE0L;
    int l_1263 = 0x32D70582L;
    unsigned l_1269 = 0xD4E91FE5L;
    unsigned long long l_1302 = 7UL;
    unsigned l_1345 = 1UL;
    short l_1347 = 0x29FEL;
    int l_1349 = 0x053CC975L;
    (*l_4) = l_2;
    if (func_5(g_3, &l_2))
    {
        unsigned short l_702 = 0x7AABL;
        int l_726 = 0L;
        unsigned char l_739 = 6UL;
        unsigned l_741 = 18446744073709551615UL;
        unsigned short *l_744 = (void*)0;
        unsigned short *l_745 = &l_702;
        int l_746 = 0L;
        unsigned l_750 = 0xE3CAB8DEL;
        unsigned short l_753 = 0x818BL;
        unsigned char *l_755 = (void*)0;
        unsigned char *l_756 = &g_134.f3;
        struct S0 l_785 = {3UL,171,4UL,0xFFL,0x12L};
        long long *l_791 = &g_25;
        int **l_850 = (void*)0;
        char **l_936 = &g_190;
        short l_974 = 1L;
        unsigned char l_1004 = 0x4CL;
        struct S0 l_1006 = {0x4B66C704L,94,0x3D836D23L,3UL,0x8FL};
        long long *l_1012 = &g_45;
        for (g_185 = 0; (g_185 >= 55); g_185++)
        {
            long long l_703 = 0xEB2E24CA425A7515LL;
            unsigned *l_710 = &g_39;
            long long l_711 = 0x6A8C86F4010609C2LL;
            int **l_729 = &g_108;
            if ((l_702 ^ ((((-2L) ^ ((**g_706) = ((((((l_703 ^= (0xFBF1L ^ (-7L))) , (+g_50)) , (safe_div_func_int32_t_s_s((g_706 != (void*)0), ((((*l_710) &= ((((safe_mod_func_int64_t_s_s(l_702, 0x81E457E4930D67B9LL)) < l_703) , g_501) , (*g_659))) == (*g_15)) | (**g_706))))) <= 0x284FCCE6L) && 0xA8E54D1BL) , l_711))) , (**g_347)) , g_134.f1)))
            {
                unsigned l_718 = 0UL;
                int **l_719 = &g_15;
                for (g_134.f4 = (-5); (g_134.f4 == 2); g_134.f4 = safe_add_func_int8_t_s_s(g_134.f4, 8))
                {
                    int l_724 = (-2L);
                    for (g_191 = 0; (g_191 <= 21); ++g_191)
                    {
                        return g_3;
                    }
                    if (l_711)
                        break;
                    for (g_39 = 0; (g_39 < 44); g_39++)
                    {
                        unsigned short l_723 = 7UL;
                        l_718 &= ((*g_190) >= (-1L));
                    }
                }
            }
            else
            {
                int l_730 = 7L;
                for (g_80 = 9; (g_80 == 28); g_80++)
                {
                    (*l_729) = func_10((*g_14), l_729, ((*l_729) = (*g_14)));

                    ;
                    if ((**g_14))
                    {
                        (**g_14) &= (0x45B6C2B0L && l_730);
                    }
                    else
                    {
                        int l_733 = 4L;
                        (*l_729) = (*l_4);
                        (*g_15) = (safe_sub_func_uint16_t_u_u(l_733, (*g_707)));
                        (**g_14) |= (((l_733 && g_382) , (void*)0) == (void*)0);
                    }
                }
            }
            (**g_14) ^= 0xFE144DA4L;
        }

        ;
        (**g_14) |= ((l_746 ^= (safe_mod_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(g_187, ((*l_745) = ((l_739 = (**g_347)) ^ (((((void*)0 == l_740) , (l_741 , ((safe_sub_func_uint8_t_u_u(0xA5L, (l_726 > (g_77 = (l_702 , l_741))))) == 0xE36BL))) || g_45) ^ g_45))))) & 4L), g_134.f0))) >= 0xF1A4E1B7L);
        if ((**g_14))
        {
            unsigned l_757 = 0x71856C42L;
            short l_759 = 8L;
            int l_779 = (-5L);
            int l_781 = 5L;
            unsigned l_783 = 0x3BE57385L;
            unsigned l_867 = 18446744073709551606UL;
            char ***l_880 = (void*)0;
            unsigned l_902 = 4294967289UL;
            long long ***l_918 = (void*)0;
            struct S0 l_941 = {0x1A1BC92FL,103,0UL,6UL,247UL};
            unsigned short l_942 = 1UL;
            unsigned char l_954 = 0UL;
            short l_955 = 0x1408L;
            if (l_746)
            {
                (*g_15) = 0xA4B14510L;
                (*l_4) = func_43(g_134.f0);

                ;
            }
            else
            {
                unsigned short *l_764 = (void*)0;
                unsigned short *l_765 = (void*)0;
                unsigned char l_782 = 252UL;
                int **l_784 = &l_2;
                short l_793 = (-1L);
                (*g_15) = ((((~((l_702 != l_757) & (&g_134 == &g_134))) < l_758) , 1UL) < (g_77 ^= ((g_501 , l_759) & ((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((*g_190) = (0x3A66L | (**g_706))), g_26)), g_99)) != 0x18B4L))));
                for (g_50 = 0; (g_50 == (-21)); g_50--)
                {
                    unsigned l_774 = 0UL;
                    struct S0 *l_786 = &g_134;
                    struct S0 *l_787 = (void*)0;
                    struct S0 *l_788 = &l_785;
                    (*l_788) = ((*l_786) = l_785);
                    if ((0x882E3C8E2927732ELL < l_774))
                    {
                        (*g_14) = (*g_14);
                    }
                    else
                    {
                        (**g_14) ^= ((**g_706) >= l_726);
                    }
                }
                for (l_785.f0 = 0; (l_785.f0 != 25); ++l_785.f0)
                {
                    int l_792 = 0xD2CC59CDL;
                    unsigned long long *l_796 = &g_187;
                    int l_797 = (-1L);
                    unsigned char *l_798 = &l_782;
                    (*g_15) ^= ((*g_659) ^ l_783);
                }
                (*l_784) = &l_726;

                ;
            }

            ;
            for (g_228 = 0; (g_228 != 13); g_228 = safe_add_func_int16_t_s_s(g_228, 5))
            {
                short l_835 = 0x2617L;
                unsigned *l_836 = (void*)0;
                unsigned *l_837 = &l_780;
                if (l_801)
                    break;
            }
            (**l_4) = ((safe_add_func_uint16_t_u_u((*l_2), g_189)) || ((*l_745) = (safe_lshift_func_uint8_t_u_s(((**l_4) != l_750), 3))));
            if ((g_187 & g_45))
            {
                long long **l_852 = &g_146;
                int l_856 = (-1L);
                char ***l_882 = &g_347;
                struct S0 l_898 = {0xD13F58BBL,57,0x8B291B56L,5UL,4UL};
                if (((*l_2) ^= (-1L)))
                {
                    for (l_785.f0 = 0; (l_785.f0 == 29); ++l_785.f0)
                    {
                        (**g_14) = (safe_mul_func_int8_t_s_s((-8L), (**g_347)));
                    }
                    return g_134.f0;
                }
                else
                {
                    int l_853 = 0xF40781AFL;
                    int l_883 = 0x006952EAL;
                    int l_884 = 0x5B8E9A27L;
                    struct S0 l_886 = {18446744073709551608UL,159,0x80B0525BL,0xD6L,0x39L};
                    int l_894 = (-6L);
                    l_856 &= (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((**g_347), ((((((**g_706) = g_851) < ((void*)0 != l_852)) != l_853) || (((safe_sub_func_uint32_t_u_u(((*g_659) = (*g_659)), ((((+l_853) || 4294967292UL) ^ l_757) && 1UL))) >= (*g_707)) , (**g_14))) , (*g_190)))), g_228));
                    (**l_4) = (g_102 == 1L);
                    if ((safe_rshift_func_int16_t_s_u(1L, l_759)))
                    {
                        char l_865 = 0x41L;
                        int l_866 = 0xFC6F553FL;
                        (**l_4) = (safe_mod_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s((**g_347), (g_134 , ((l_866 ^= (safe_div_func_int16_t_s_s(((0xABF2DE41L | (l_853 <= ((4UL ^ ((l_865 ^ ((*g_659) = (l_865 , l_759))) > l_856)) >= l_856))) == g_103), (*l_2)))) >= l_867)))) <= g_26) <= 0x5A2EL), l_853));
                    }
                    else
                    {
                        unsigned l_872 = 0xD800C3F1L;
                        char ***l_879 = (void*)0;
                        char ****l_881 = &l_880;
                        unsigned l_885 = 1UL;
                        int *l_887 = &g_102;
                        long long *l_895 = &g_228;
                        int **l_896 = (void*)0;
                        struct S0 *l_899 = &l_886;
                        l_884 = (l_883 &= (safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s((l_779 < l_872), (safe_sub_func_uint8_t_u_u((l_781 = ((safe_rshift_func_uint8_t_u_s((8UL && (safe_mul_func_int8_t_s_s(l_781, l_856))), (l_879 != (l_882 = ((*l_881) = l_880))))) , 1UL)), 0xF0L)))), 9UL)));

                        ;
                        (*g_15) |= l_885;
                        (*l_897) = func_10((l_886 , func_19(l_887, l_896, (**g_347))), l_897, (*g_14));

                        ;
                        (*l_899) = l_898;
                    }

                    ;
                    ;
                }

                ;
                ;
                (*l_2) |= (((safe_add_func_uint8_t_u_u(l_902, ((safe_sub_func_int64_t_s_s(l_867, l_783)) < (*g_659)))) <= 0xF1L) < 1UL);
                (*l_4) = &l_746;

                ;
            }
            else
            {
                unsigned long long l_916 = 0x32B8DDDCC876DA54LL;
                long long ***l_917 = (void*)0;
                int l_935 = 0x471F263CL;
                struct S0 l_943 = {0x7FD5ADCAL,32,1UL,0x4FL,252UL};
                unsigned char l_953 = 252UL;
                (*g_15) = ((!(safe_lshift_func_int16_t_s_u(l_907, 9))) >= ((*g_659) |= ((**l_4) & ((-5L) == (l_916 = (safe_mul_func_uint8_t_u_u(g_851, (((*g_190) | (safe_lshift_func_int16_t_s_s(((**l_4) != (*g_707)), (safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s((*g_707), g_189)) ^ 0x68L), g_134.f0))))) >= 4UL))))))));
                (*g_14) = (*l_897);
                if ((**l_897))
                {
                    unsigned long long **l_919 = &g_489;
                    char *l_922 = (void*)0;
                    long long ***l_924 = &g_145;
                    int l_928 = 1L;
                    unsigned long long l_933 = 3UL;
                    unsigned **l_938 = (void*)0;
                    unsigned **l_939 = (void*)0;
                    unsigned **l_940 = &g_659;
                    if ((~((**g_14) = ((**l_897) >= (((((g_134.f2 , (*l_2)) , l_917) == ((*g_665) = l_918)) & ((*l_740) == l_919)) , (safe_mul_func_uint16_t_u_u((l_922 == l_922), g_187)))))))
                    {
                        (*g_15) &= 0xE83005E7L;
                        (*l_2) ^= ((l_924 = (l_923 = (*g_665))) == (void*)0);

                        ;
                        ;
                        (**l_4) = (**g_14);
                    }
                    else
                    {
                        int l_934 = (-1L);
                        char ***l_937 = &l_936;
                        l_935 |= ((g_925 == (void*)0) , (((safe_mul_func_uint8_t_u_u((l_928 &= (**l_4)), ((**g_706) < (!(safe_rshift_func_int16_t_s_u(0xE777L, 14)))))) >= ((safe_sub_func_uint8_t_u_u(((*g_190) , g_77), ((*l_2) , (**g_347)))) == l_933)) >= l_934));
                        (*l_937) = l_936;
                        (*g_15) &= l_916;
                    }

                    ;
                    ;
                    l_943 = (g_134 , g_134);
                    for (g_23 = 0; (g_23 <= 19); g_23++)
                    {
                        (*l_897) = func_43(l_935);
                        if ((*g_15))
                            continue;
                        if ((**l_4))
                            break;
                    }
                }
                else
                {
                    int **l_948 = &g_108;
                    struct S0 l_951 = {0x3DEE9177L,129,6UL,8UL,0xFFL};
                    (*l_4) = ((*g_14) = (((*l_738) = (+((((0x88D8L | ((((((~(((safe_mod_func_int16_t_s_s(((g_952 ^= ((g_134 , (*l_2)) , (**l_4))) | (**l_4)), 0xBC36L)) && (*g_659)) | (-1L))) && (**l_897)) <= l_953) & (*g_15)) , l_954) ^ (*l_2))) == l_955) || (-6L)) != l_753))) , (void*)0));

                    ;
                    ;
                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
        }
        else
        {
            unsigned short l_956 = 0xA84AL;
            unsigned char *l_966 = &l_749;
            unsigned char *l_967 = (void*)0;
            unsigned char *l_968 = &l_785.f3;
            unsigned long long l_969 = 0x5EE446396764F146LL;
            unsigned l_985 = 0xC1DE9047L;
            int **l_993 = &g_108;
            if ((l_956 != (l_969 >= g_185)))
            {
                long long *l_970 = &l_907;
                int l_971 = 0xAADCD47BL;
                (**g_14) ^= l_971;
            }
            else
            {
                unsigned long long l_984 = 0x63E7327F4C80792BLL;
                int *l_986 = &l_726;
                g_102 = ((*g_15) = (safe_div_func_uint64_t_u_u(g_833, g_25)));
                (*g_15) ^= l_974;
                (*l_986) ^= ((*g_707) >= (((void*)0 != (*g_706)) && (safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((**g_347) & (safe_mod_func_int16_t_s_s((g_833 & ((g_77 ^= (safe_mul_func_int8_t_s_s(0xECL, (l_785 , (((((l_956 , ((((*g_659) |= ((((*l_745) |= ((l_983 == &g_23) > g_103)) , (void*)0) == (*g_488))) <= (-8L)) , l_984)) == (**g_347)) , l_969) | 0x0DL) && (-1L)))))) , l_984)), l_985))), 1L)), (**l_897)))));
            }
            for (g_187 = 0; (g_187 < 14); ++g_187)
            {
                unsigned *l_994 = (void*)0;
                int l_1007 = 0L;
                unsigned long long *l_1011 = &l_969;
                (**l_897) |= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((l_785 , l_1004), l_1005)), g_185));
                (**g_14) ^= ((((l_1006 , (~g_191)) == (65532UL < (0x68L < ((g_185 <= l_1007) & ((g_134 , ((~((*l_1011) = (safe_unary_minus_func_int8_t_s((safe_mul_func_int8_t_s_s((**g_347), (**g_347))))))) < l_753)) != l_1007))))) , l_1012) == (*g_145));
            }
        }

        ;
        ;
        ;
    }
    else
    {
        struct S0 l_1013 = {0xEBD37D29L,59,0x033BBC55L,0x96L,0x77L};
        struct S0 *l_1014 = (void*)0;
        struct S0 *l_1015 = &g_134;
        int ***l_1021 = (void*)0;
        int ***l_1022 = (void*)0;
        int ***l_1023 = &g_240;
        long long *l_1024 = (void*)0;
        unsigned short l_1025 = 0xC19CL;
        int *l_1026 = &g_102;
        unsigned l_1051 = 0x8C91999BL;
        int l_1100 = 8L;
        char **l_1146 = &g_190;
        unsigned l_1178 = 0xDC8D2D23L;
        unsigned l_1200 = 0x76988C4CL;
        unsigned long long l_1202 = 0x0268ED4BF8F0F248LL;
        g_1016 = ((*l_1015) = l_1013);
        (*l_1026) &= ((**l_897) , (l_1025 |= (*g_15)));
        if (((safe_rshift_func_uint8_t_u_s((((*g_659) > 0x1BEF5678L) ^ (safe_mod_func_int8_t_s_s(l_1031, (safe_sub_func_int16_t_s_s((g_26 && (((*g_707) = ((*g_190) >= 1L)) < (((safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(g_134.f4, ((safe_unary_minus_func_int8_t_s(((**g_1020) >= (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(((**l_897) , (**g_347)), 7)), 5))))) | (**l_897)))), (*l_1026))) | g_1043) <= g_80))), 0x914DL))))), (**l_897))) , 0L))
        {
            long long l_1048 = 8L;
            unsigned char *l_1064 = &l_749;
            int l_1065 = 9L;
            int **l_1093 = (void*)0;
            unsigned short l_1148 = 0xE055L;
            if ((safe_mod_func_uint32_t_u_u((*g_659), 0x8DF719E9L)))
            {
                unsigned l_1066 = 4294967293UL;
                short l_1076 = 0L;
                long long *l_1103 = &l_907;
                int l_1129 = 0x5AD8F5DBL;
                if (l_1066)
                {
                    long long *l_1067 = &g_45;
                    int l_1069 = 0x606F06EEL;
                    (**g_1020) = ((l_1066 >= ((safe_unary_minus_func_int16_t_s(l_1069)) & ((((*l_1026) ^ (safe_add_func_int8_t_s_s(0xD6L, (**g_347)))) || (safe_add_func_int16_t_s_s((l_1076 ^ ((**g_347) <= ((*l_1064) = 0xECL))), g_80))) >= 18446744073709551610UL))) || l_1077);
                    if (((safe_add_func_uint16_t_u_u(0x3AB0L, (safe_rshift_func_int16_t_s_u(((void*)0 != &l_1025), 0)))) < (l_1065 == (safe_unary_minus_func_int16_t_s((l_1048 < (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_1064) |= (safe_add_func_uint16_t_u_u((((**g_347) >= g_851) ^ (l_1069 , ((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((l_1069 == 247UL), l_1069)), 0xD9L)) <= g_1016.f4))), g_1016.f4))), 7)), 0xFCE7L))))))))
                    {
                        long long *l_1104 = &l_907;
                        int l_1105 = 6L;
                        (*l_4) = func_19(func_19(((*l_4) = func_10((*g_14), l_1093, func_43(l_1069))), l_1093, l_1069), (((safe_lshift_func_int8_t_s_s(4L, g_1096)) | l_1069) , l_1093), l_1097);

                        ;
                        (*l_2) = (safe_mul_func_uint16_t_u_u(l_1100, (safe_div_func_int16_t_s_s(0x975BL, l_1105))));
                        g_1016 = g_134;
                        (**g_1020) = 0L;
                    }
                    else
                    {
                        (*l_4) = (*g_14);

                        ;
                        (*l_4) = func_10((*g_14), &g_108, ((*l_4) = (void*)0));

                        ;
                    }

                    ;
                }
                else
                {
                    long long **l_1106 = &l_1103;
                    int l_1108 = (-1L);
                    struct S0 **l_1113 = &l_1015;
                    struct S0 ***l_1116 = (void*)0;
                    struct S0 ***l_1117 = &g_1114;
                    (*g_108) |= ((*g_145) == ((*l_1106) = func_40((*l_1026))));

                    ;
                    if (((**g_347) == ((l_1108 ^= (l_1076 != (l_1107 , g_45))) , (safe_add_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(g_1016.f1, l_1108)), ((l_1113 != ((*l_1117) = g_1114)) , ((((void*)0 == &l_1113) | (**g_14)) , 0L)))))))
                    {
                        long long *l_1121 = &g_45;
                        int l_1127 = (-1L);
                        unsigned long long *l_1128 = &l_1077;
                        (*g_1020) = ((safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(((*g_659) = (l_1065 ^ (safe_add_func_uint8_t_u_u(g_952, (safe_rshift_func_uint16_t_u_s(g_80, (g_185 ^ (((**g_347) , (void*)0) != ((l_1129 = ((*l_1128) = (l_1126 , (((l_1127 , g_103) <= g_1016.f1) , l_1108)))) , (void*)0))))))))))) > l_1127), l_1127)) , (*g_1020));
                    }
                    else
                    {
                        return g_45;
                    }
                }

                ;
                ;
                (*l_1026) ^= ((*g_108) = (*g_15));
                l_1130 = &l_1014;

                ;
            }
            else
            {
                int l_1133 = 0x7EDD389EL;
                unsigned long long l_1147 = 18446744073709551615UL;
                if ((safe_mod_func_uint8_t_u_u((*l_1026), (l_1133 = (*g_190)))))
                {
                    (**l_897) = (*g_108);
                    (*g_1114) = (*g_1114);
                }
                else
                {
                    (*l_897) = ((*l_4) = func_43(g_50));

                    ;
                }

                ;
                (**l_897) = (*g_108);
                (*g_15) = (safe_lshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((-1L), (safe_div_func_uint8_t_u_u(((((*l_1026) |= (((safe_lshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((l_1147 || l_1148), (-7L))), 12)) , 0xCD0DAB41L) & (*g_659))) , 1UL) != l_1133), g_39)))) != (-1L)), 7));
                return g_1016.f3;
            }

            ;
            ;
            for (l_1051 = 26; (l_1051 != 36); ++l_1051)
            {
                short ***l_1151 = &g_706;
                (*l_1130) = (*g_1114);

                ;
                (*l_897) = func_43((((*l_1151) = &g_707) != l_1152));
            }

            ;
        }
        else
        {
            short l_1172 = 0xA51BL;
            int **l_1186 = &g_15;
            unsigned long long *l_1198 = &l_1077;
            g_80 = (safe_mod_func_uint64_t_u_u(((*l_1026) | (0xB3A99711A3E18178LL && ((~((*g_15) = (**g_14))) , (**l_897)))), g_1096));
            for (l_1013.f3 = 0; (l_1013.f3 < 14); l_1013.f3++)
            {
                unsigned char l_1161 = 1UL;
                unsigned short l_1165 = 0x987FL;
                int l_1168 = 8L;
                unsigned long long *l_1177 = &g_185;
                int *l_1187 = &l_1168;
                unsigned l_1204 = 4UL;
                long long **l_1206 = &l_1024;
                if (((void*)0 != &g_706))
                {
                    short l_1164 = 3L;
                    if (((*g_15) &= 0x3F189AC6L))
                    {
                        unsigned short *l_1157 = &l_961;
                        int **l_1158 = &l_1026;
                        unsigned short ***l_1167 = &g_1166;
                        g_706 = ((((g_134.f1 , (g_25 , l_1158)) == &g_108) >= ((safe_sub_func_int64_t_s_s(l_1161, (safe_rshift_func_uint16_t_u_u((l_1164 <= g_1096), l_1165)))) > 3UL)) , l_1152);

                        ;
                        (*l_1167) = g_1166;
                        (**l_1158) = (**g_1020);
                        l_1168 &= ((*g_15) = (*l_1026));
                    }
                    else
                    {
                        short l_1169 = 0L;
                        l_1169 ^= 1L;
                        (*g_14) = (*l_897);
                    }
                    (*g_1115) = (**g_1114);
                }
                else
                {
                    (**g_14) = (*g_15);
                }
                if ((((((*l_1026) , (l_1172 , (~(((g_189 , 9UL) ^ (-1L)) != 0x731BL)))) < ((*l_1177) = ((safe_lshift_func_uint8_t_u_s(((*g_707) <= ((g_23 > 0x8AL) == l_1165)), l_1168)) >= l_1168))) > l_1161) && l_1168))
                {
                    (*l_1130) = (*g_1114);
                }
                else
                {
                    if ((**g_1020))
                        break;
                }
                if (l_1178)
                {
                    unsigned char l_1183 = 1UL;
                    int l_1184 = (-5L);
                    l_1187 = func_19(func_43(((safe_sub_func_uint32_t_u_u((*g_659), (((~((safe_sub_func_int8_t_s_s(((l_1183 , (*l_1026)) ^ (((((l_1168 &= ((*g_659) > ((*l_1026) , (*g_108)))) != 0x7BL) && l_1165) == 0xEA0A6D275DF9A1F5LL) <= l_1184)), (-7L))) >= l_1161)) , 0x48D51A41L) >= g_1185))) >= 0xFF3F4DCAD57EF644LL)), l_1186, (*g_190));

                    ;
                }
                else
                {
                    unsigned long long *l_1199 = &g_1043;
                    int l_1205 = 0x4FB97BADL;
                    unsigned short *l_1211 = (void*)0;
                    for (l_834 = 0; (l_834 <= 58); l_834 = safe_add_func_uint64_t_u_u(l_834, 7))
                    {
                        unsigned char *l_1195 = &g_1016.f4;
                        unsigned char **l_1194 = &l_1195;
                        unsigned short *l_1201 = &l_1003;
                        int l_1203 = 0xF195F468L;
                        l_1206 = func_32(((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((*g_707), 9)) >= 1UL), 6UL)) , (*g_659)), l_1198, (*g_1020), (*g_659), &g_15);

                        ;
                        (*l_4) = (*g_1020);

                        ;
                        if ((*g_15))
                            continue;
                    }

                    ;
                    (*l_4) = (((*l_1199) = ((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((l_1205 = g_698), 4)), (((+((((*g_1020) = func_19(&l_1168, &g_15, ((**l_1146) = ((safe_div_func_uint64_t_u_u((((safe_mod_func_int16_t_s_s((*l_1187), (-10L))) < 0xAF28L) <= (-3L)), 0x34C531E49A219330LL)) == (**g_347))))) == l_1216) & (*l_1187))) , 0xC4L) < (*l_1187)))) <= (*l_1187))) , (*g_1020));

                    ;
                }

                ;
                ;
            }

            ;
            ;
        }

        ;
        ;
        ;
        ;
    }


    ;
    ;
    ;

    ;
    ;

    (**g_1114) = (**g_1114);
    if ((l_1217 , (((*l_1218) = &l_923) != (void*)0)))
    {
        unsigned *l_1221 = (void*)0;
        unsigned *l_1222 = &g_1016.f0;
        unsigned short ***l_1224 = &g_1166;
        unsigned short ****l_1223 = &l_1224;
        int l_1227 = 1L;
        unsigned l_1253 = 0xFA753E2AL;
        struct S0 l_1254 = {0x226C8368L,94,1UL,255UL,255UL};
        if ((safe_mul_func_uint8_t_u_u(((((*l_1222) = g_25) , ((*l_1223) = &g_1166)) == &g_1166), 6UL)))
        {
            int l_1232 = (-1L);
            int l_1237 = 0x209C4310L;
            char l_1238 = 1L;
            (*l_897) = l_1222;

            ;
            (*l_1216) = ((safe_add_func_int16_t_s_s((l_1227 && (((*g_1115) = g_1228) , ((l_1229 <= (((**l_897) != 0xB3519E62L) , ((((*g_707) = (safe_mod_func_uint64_t_u_u((l_1237 |= (l_1232 > (!(l_1232 >= 1L)))), l_1238))) < g_1228.f1) | 0x8BA4L))) | l_1232))), g_833)) && (*g_190));
        }
        else
        {
            unsigned *l_1239 = &l_1217;
            int *l_1252 = &l_758;
            (*g_1115) = l_1254;
        }

        ;
    }
    else
    {
        unsigned char *l_1260 = (void*)0;
        int l_1262 = 0L;
        int l_1281 = (-1L);
        long long *l_1282 = (void*)0;
        struct S0 l_1312 = {1UL,125,1UL,248UL,0xD4L};
        int *l_1335 = &g_102;
        unsigned short l_1336 = 7UL;
        int *l_1346 = &l_1262;
        short l_1363 = 0x249EL;
        unsigned char **l_1373 = &l_1260;
        unsigned char ***l_1372 = &l_1373;
        unsigned char ***l_1374 = (void*)0;
        unsigned char ***l_1375 = (void*)0;
        unsigned char **l_1376 = &l_1260;
        for (g_722 = 0; (g_722 < 29); g_722 = safe_add_func_uint8_t_u_u(g_722, 8))
        {
            unsigned short l_1257 = 0xD7EFL;
            unsigned char *l_1261 = &l_1107.f3;
            int l_1264 = (-1L);
            unsigned short *l_1272 = &l_1005;
            unsigned short *l_1273 = (void*)0;
            unsigned short *l_1274 = &l_834;
            int **l_1331 = &l_2;
            struct S0 l_1332 = {0x42277C9CL,7,0x236B6C70L,255UL,0x29L};
            unsigned char l_1334 = 248UL;
            l_1264 = (l_1257 == (((((((*g_707) = (*g_707)) ^ (l_1257 ^ (*l_1216))) != l_1257) , (((*l_1261) &= (((safe_div_func_uint64_t_u_u((((!0x48L) == 0x8AL) || (((l_1260 != l_1261) ^ (*g_659)) || (*g_659))), g_50)) & l_1262) , l_1262)) <= (*l_1216))) >= l_1263) < g_1016.f4));
            if ((safe_mod_func_uint64_t_u_u(g_1016.f4, 0xA6977C9DAE0E0D0DLL)))
            {
                int *l_1283 = &g_3;
                unsigned char l_1289 = 0UL;
                char l_1293 = 0xBEL;
                struct S0 l_1319 = {0xC526D6A3L,137,4294967295UL,0x04L,0xF2L};
                unsigned l_1330 = 7UL;
                if ((g_134.f0 & ((*l_1274) = l_1257)))
                {
                    (*l_897) = l_1283;

                    ;
                }
                else
                {
                    int ***l_1288 = &g_14;
                    for (l_1097 = 0; (l_1097 > 17); l_1097++)
                    {
                        (*l_1283) ^= ((*g_707) != 0x81F4L);
                        (*l_1283) &= l_1262;
                        (*l_1216) &= ((safe_rshift_func_int16_t_s_u(0x8F5DL, (((void*)0 != l_1288) != ((*g_659) ^= (7L ^ l_1289))))) , (g_1290 > 4294967289UL));
                    }
                }
                if ((safe_lshift_func_uint8_t_u_s((l_1293 , (safe_sub_func_int16_t_s_s(((*g_707) = ((~((!(safe_add_func_uint8_t_u_u((l_1281 == l_1262), ((*l_1283) || 0UL)))) & 6UL)) < 0xE03DE59F49298C5CLL)), l_1257))), g_1298)))
                {
                    long long l_1301 = 1L;
                    int l_1311 = (-7L);
                    (*l_897) = (((l_1264 <= l_1281) , (safe_mul_func_int8_t_s_s((!((l_1301 != l_1302) , (safe_lshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s((-1L), (*g_190))) > (*g_659)), 2)))), 0x80L))) , (void*)0);

                    ;
                    (*g_1020) = (void*)0;
                    (**g_1114) = l_1312;
                }
                else
                {
                    int l_1315 = 0L;
                    int l_1318 = 0xC69070ECL;
                    long long *****l_1328 = &g_665;
                    unsigned *l_1329 = &l_1107.f0;
                    if ((((((*g_1115) , l_1264) && (-1L)) , 0x9BB556CAA9AF7D5FLL) == g_25))
                    {
                        struct S0 l_1320 = {0x67EE8755L,17,0x8A87AD33L,0x00L,0UL};
                        l_1320 = l_1319;
                    }
                    else
                    {
                        unsigned long long l_1321 = 18446744073709551607UL;
                        (*g_14) = &l_1318;

                        ;
                        if ((**g_14))
                            break;

                        return l_1321;



                    }
                    l_1332 = (((-8L) && (l_1315 || (&g_15 == (((safe_div_func_int8_t_s_s(0x39L, (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((((((l_1328 == ((*l_1283) , &g_665)) , ((*l_1329) = g_1298)) , (void*)0) == (void*)0) || (*l_1283)) == 1UL), g_99)), 0UL)))) , l_1330) , l_1331)))) , (*g_1115));
                }
                (*l_1216) = 0x93988097L;
                (*g_14) = func_43(g_99);
            }
            else
            {
                int *l_1333 = (void*)0;
                (*g_1020) = ((*l_4) = (*g_1020));

                ;
                if (l_1334)
                    continue;
            }
        }


        g_80 |= ((*l_1335) = ((*l_1216) = l_1312.f0));
        if (l_1336)
        {
            int l_1343 = 0x34F50B57L;
            for (g_1290 = 0; (g_1290 < (-12)); g_1290--)
            {
                unsigned long long l_1344 = 18446744073709551613UL;
                (*l_1216) |= ((*l_1335) >= ((g_1016.f2 < (-1L)) < (*l_1335)));
                (*l_897) = (((*l_1335) = (-2L)) , &l_1262);

                ;
                (**g_14) = (&g_1114 == &g_1114);
            }


            l_1345 ^= l_1343;
        }
        else
        {
            int l_1348 = 0x1D391D3AL;
            char *l_1364 = &l_1002;
            int l_1365 = 3L;
            (*g_14) = &l_1262;

            ;
            l_1348 = ((**l_897) = (((*l_1335) = (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(l_1348, ((l_1365 = (safe_unary_minus_func_uint32_t_u(((safe_sub_func_uint16_t_u_u(((((*g_707) = l_1348) && (safe_add_func_int8_t_s_s(((*l_1364) ^= (~((safe_mul_func_uint8_t_u_u((g_1243 ^ ((l_1363 ^ (0UL >= (*g_190))) | g_1096)), (*l_1216))) >= 9UL))), (*l_1346)))) > (*g_659)), (*l_1346))) || (*g_15))))) > 0x5106EAECL))), 9L))) <= (*g_659)));
            for (l_1312.f0 = 0; (l_1312.f0 <= 5); l_1312.f0++)
            {
                int l_1368 = 9L;
                (*g_14) = (*l_897);
                return l_1368;



            }
            (*l_4) = (*l_897);

            ;
        }



        (*l_1216) &= ((((*l_738) = 1L) , ((safe_add_func_int32_t_s_s(((((((((void*)0 != g_1371) , g_925) != (l_1376 = ((*l_1372) = g_925))) , (safe_div_func_uint8_t_u_u(0x42L, ((((*g_707) , &g_1115) == &g_1115) && 9UL)))) | 0x80E3L) || (*l_1346)) ^ (*l_1346)), (*g_659))) | (*l_1346))) ^ (*g_659));

        ;
        ;
    }


    ;
    return g_1228.f1;


}







static int func_5(unsigned char p_6, int ** p_7)
{
    long long *l_24 = &g_25;
    int l_600 = 0x7B63D270L;
    int **l_697 = &g_108;
    int l_699 = 0x178BEB20L;
    l_699 &= ((**g_14) = (((0x17E5C285L == (p_6 , p_6)) | ((((((*p_7) = func_10((*p_7), g_14, (*g_14))) == ((*l_697) = func_19(((g_26 = (!((*l_24) = g_23))) , ((safe_mul_func_uint8_t_u_u(((func_29(l_24) && 246UL) < l_600), l_600)) , (void*)0)), g_601, p_6))) || p_6) , g_228) > g_698)) > g_698));


    ;
    ;

    (*g_15) &= p_6;
    return (**l_697);
}







static int * func_10(int * p_11, int ** p_12, int * p_13)
{
    int *l_18 = (void*)0;
    for (g_3 = 0; (g_3 > (-28)); --g_3)
    {
        if ((**g_14))
            break;
    }
    return l_18;


}







static int * func_19(int * p_20, int ** p_21, char p_22)
{
    unsigned l_602 = 1UL;
    unsigned long long *l_605 = &g_185;
    int l_612 = 0xE7A8B4A6L;
    int l_613 = 1L;
    int *l_616 = &g_102;
    unsigned short *l_637 = &g_77;
    struct S0 l_648 = {18446744073709551615UL,89,0xF1E78B46L,0x1DL,249UL};
    long long ***l_664 = &g_145;
    long long ****l_663 = &l_664;
    l_613 ^= (((l_602 , p_22) <= (-1L)) == (((!((*l_605) = (safe_add_func_uint16_t_u_u(1UL, p_22)))) && (0xB476EC481428103ALL >= (l_602 >= ((safe_add_func_int8_t_s_s(l_602, (safe_rshift_func_int16_t_s_s(((l_612 = (safe_mod_func_uint16_t_u_u(p_22, l_602))) & p_22), p_22)))) > l_602)))) > p_22));
    (*l_616) = (l_602 | (g_189 > l_602));
    for (g_501 = 0; (g_501 != (-28)); --g_501)
    {
        short l_621 = 0x8EF3L;
        unsigned char *l_635 = &g_134.f4;
        unsigned char **l_634 = &l_635;
        short *l_636 = &g_189;
        int *l_638 = &g_26;
        int *l_639 = &l_613;
        struct S0 l_640 = {0x00C165BAL,125,0xD9C48C49L,253UL,0UL};
        struct S0 *l_641 = &g_134;
        short **l_649 = &l_636;
        unsigned long long **l_654 = &l_605;
        unsigned long long ***l_655 = &l_654;
        char ***l_660 = &g_347;
    }
    return (*g_14);


}







static char func_29(long long * p_30)
{
    int l_31 = 0xB8846B51L;
    struct S0 *l_461 = &g_134;
    int **l_467 = &g_15;
    char l_473 = 0xBAL;
    unsigned long long l_476 = 0x2D1835A0E910793ALL;
    long long ***l_511 = &g_145;
    unsigned *l_518 = &g_99;
    if (l_31)
    {
        unsigned *l_38 = &g_39;
        char *l_48 = (void*)0;
        char *l_49 = &g_50;
        struct S0 l_203 = {0x0500D59FL,126,0xD59E5908L,1UL,249UL};
        int **l_450 = &g_15;
        long long ***l_454 = &g_145;
        int **l_462 = &g_108;
        unsigned char l_485 = 250UL;
        int l_487 = 1L;
        int l_499 = 0x8B5F7B8FL;
        unsigned long long l_521 = 6UL;
        struct S0 l_525 = {0x2BD2B96DL,74,0xCFA25ABAL,3UL,0xF2L};
        (*l_454) = func_32((((*l_38) = (!g_25)) , 0x8E5161E3L), func_40(g_26), func_43(((g_45 = 0UL) || (0x5533F2A6ADD33D73LL & (safe_rshift_func_int8_t_s_u(l_31, ((((*l_49) = 0x35L) == ((func_51(func_57(g_25, g_45), l_38, l_203, l_203.f4, l_31) , g_134.f4) != 0xA4F2D4D634411993LL)) >= l_31)))))), l_31, l_450);

        ;
        ;

        if ((g_77 & (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((((safe_sub_func_uint16_t_u_u(l_31, g_77)) , &l_203) != l_461) & (((*l_462) = (*g_14)) != (void*)0)), 1)), (safe_mul_func_int16_t_s_s(((**g_347) , (((((safe_mul_func_uint16_t_u_u((((((l_467 = l_467) != (void*)0) < l_31) & l_31) && 0xECL), l_31)) == (*p_30)) , 1UL) <= (*p_30)) >= (-1L))), g_26))))))
        {
            unsigned l_472 = 4294967288UL;
            int **l_474 = &g_108;
            int **l_475 = (void*)0;
            unsigned char *l_477 = &l_203.f4;
            char l_484 = 0x53L;
            unsigned char *l_486 = &l_203.f3;
            unsigned long long ***l_490 = &g_488;
            l_31 = (0x824FF3ADL >= ((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_472 = (&l_38 == (void*)0)), l_473)), g_25)) > ((g_134.f4 , l_474) != l_475)));
            l_31 = (l_487 = (((*l_477) = ((0L || g_134.f3) >= l_476)) & ((*l_486) ^= (safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((safe_sub_func_uint64_t_u_u(g_382, ((*p_30) &= (g_382 != 0xB65DL)))) || l_484) ^ (65527UL < (l_485 | l_485))), 0x8A3AL)), (**g_347))))));
            (*l_490) = g_488;
        }
        else
        {
            unsigned l_500 = 0UL;
            int l_513 = 0L;
            struct S0 l_524 = {0UL,42,4294967286UL,0x71L,0xB6L};
            if (((safe_lshift_func_uint8_t_u_s(g_134.f2, (safe_rshift_func_uint8_t_u_u(1UL, ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((g_134.f1 , (l_499 , (1L <= ((l_500 == (g_382 <= l_500)) | (-7L))))), g_23)), (*g_190))) & l_500))))) , g_501))
            {
                char l_506 = 0x35L;
                int l_510 = 0L;
                int **l_517 = &g_108;
                struct S0 l_522 = {8UL,47,1UL,255UL,0UL};
                (*l_461) = (*l_461);
                for (g_23 = 16; (g_23 == 57); g_23++)
                {
                    for (l_473 = 25; (l_473 == (-5)); l_473 = safe_sub_func_int16_t_s_s(l_473, 1))
                    {
                        unsigned long long ***l_507 = &g_488;
                        unsigned *l_512 = &l_203.f0;
                        l_513 |= (l_506 >= (~(((*l_507) = &g_489) != (((*l_512) = (safe_rshift_func_int16_t_s_s(((((l_510 > 65535UL) == (0x48L <= (*g_190))) , ((void*)0 != l_511)) , 0L), 6))) , &g_489))));
                        (*l_462) = (*l_450);
                    }
                }
                for (g_103 = 0; (g_103 > 1); g_103++)
                {
                    int *l_516 = &g_102;
                    int l_523 = 0x1CBC5008L;
                    struct S0 l_526 = {0xF984D086L,54,0x4AD75C8BL,7UL,0x0BL};
                    struct S0 *l_527 = &l_522;
                    (*l_516) = l_510;
                    (*l_527) = ((*l_461) = l_526);
                    (*l_516) = (safe_add_func_uint64_t_u_u(l_524.f0, ((-6L) | 1UL)));
                    if (l_524.f3)
                        break;
                }
            }
            else
            {
                long long l_544 = 0x0E26671C1E499AFBLL;
                int l_545 = 0L;
                unsigned short *l_546 = (void*)0;
                unsigned short *l_547 = (void*)0;
                unsigned short *l_548 = &g_77;
                short *l_551 = &g_501;
                int *l_552 = &g_102;
                for (g_99 = 21; (g_99 < 4); g_99 = safe_sub_func_int8_t_s_s(g_99, 1))
                {
                    (*l_461) = g_134;
                }
                (*l_552) = (safe_sub_func_uint32_t_u_u((l_513 ^= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(65535UL, ((safe_div_func_uint64_t_u_u(((g_23 |= g_191) , (safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(((~(*g_190)) || (l_544 == l_500)), ((*l_548) = (l_545 &= l_524.f2)))), ((g_134.f4 == l_500) < (safe_mul_func_int16_t_s_s(((*l_551) |= g_382), (-1L))))))), 0xF8BF4BCD085BA993LL)) , 0xEE2DL))), 7))), 0xB51DBB9EL));
            }
            for (g_102 = 0; (g_102 <= 23); g_102++)
            {
                short l_555 = 0x8C48L;
                int l_556 = 0x31EB68D2L;
                char ***l_557 = &g_347;
                l_513 &= l_555;
                l_556 = 0xEC0EB8D5L;
                (*l_557) = &g_190;
            }
            return l_513;
        }

        ;
        for (l_521 = 0; (l_521 >= 42); ++l_521)
        {
            int *l_560 = (void*)0;
            int l_561 = 0L;
            unsigned char *l_586 = &l_525.f4;
            long long l_588 = 1L;
            int *l_589 = &l_561;
            (*l_462) = l_560;

            ;
            if (l_561)
            {
                short *l_570 = &g_382;
                int l_575 = 0L;
                long long *l_587 = &g_228;
                l_487 = (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(((*l_518) |= g_189), (((*l_570) |= l_561) & (safe_sub_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(l_575, (safe_sub_func_int16_t_s_s((((-7L) ^ (((safe_sub_func_uint8_t_u_u(((**g_347) , (safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s(0xC0EEL, (safe_add_func_int64_t_s_s((*p_30), ((*l_587) = ((void*)0 != l_586)))))), (*p_30)))), (*g_190))) & l_575) ^ l_588)) != g_26), 0xEFFFL)))), g_189))))) , l_476) != l_473), g_185)), (*g_190))), (*g_190)));
                (*l_462) = (*l_450);

                ;
                return (*g_190);
            }
            else
            {
                (*l_462) = (void*)0;
            }
            (*l_589) = 7L;
            if ((*l_589))
                break;
        }

        ;
        (*l_462) = (*l_467);

        ;
    }
    else
    {
        int *l_591 = &g_80;
        int **l_590 = &l_591;
        unsigned short l_592 = 65535UL;
        int *l_593 = &g_102;
        int l_594 = 0xFDE29D66L;
        int *l_599 = &l_594;
        (*l_590) = ((*g_240) = (*g_240));
        (*g_240) = (g_134 , (*g_240));
        (*l_593) ^= (*l_591);
        (*l_599) |= ((*l_591) ^ (65535UL | (safe_mod_func_int16_t_s_s(g_134.f4, (safe_add_func_int32_t_s_s((g_501 >= 0x7FL), ((*l_593) = (*l_593))))))));
    }

    ;
    ;

    l_31 &= (-1L);
    return (*g_190);
}







static long long ** func_32(unsigned p_33, long long * p_34, int * p_35, unsigned p_36, int ** p_37)
{
    short l_451 = (-1L);
    int *l_452 = &g_80;
    int l_453 = (-4L);
    l_453 ^= ((*l_452) = l_451);
    return &g_146;


}







static long long * func_40(unsigned short p_41)
{
    long long *l_42 = &g_25;
    return l_42;


}







static int * func_43(int p_44)
{
    int l_433 = 0L;
    unsigned char l_434 = 0xBFL;
    char **l_439 = &g_190;
    unsigned char *l_440 = &g_134.f3;
    int l_441 = 0xE6D12B43L;
    int *l_442 = &g_102;
    int **l_443 = &l_442;
    long long ***l_444 = &g_145;
    long long ****l_445 = (void*)0;
    long long ****l_446 = (void*)0;
    long long ****l_447 = &l_444;
    long long ***l_448 = &g_145;
    int *l_449 = &l_433;
    l_434 |= l_433;
    (*l_442) |= ((l_441 |= ((*l_440) &= ((safe_mul_func_uint16_t_u_u(l_434, l_433)) , (safe_rshift_func_uint8_t_u_s(((void*)0 != l_439), 3))))) || g_50);
    (*l_443) = (void*)0;

    ;
    (*l_449) &= (((*l_447) = l_444) == (l_448 = &g_145));
    return (*g_14);


}







static struct S0 func_51(int ** p_52, unsigned * p_53, struct S0 p_54, int p_55, int p_56)
{
    unsigned l_209 = 0xC7BFA83AL;
    int l_212 = (-7L);
    long long ***l_326 = &g_145;
    int l_369 = 1L;
    int *l_409 = &l_369;
    int l_429 = 0x84613669L;
    for (g_99 = 0; (g_99 > 46); g_99 = safe_add_func_int8_t_s_s(g_99, 3))
    {
        int *l_206 = (void*)0;
        unsigned char *l_210 = &g_134.f4;
        unsigned char *l_211 = &g_134.f3;
        int *l_213 = &g_80;
        long long *l_232 = (void*)0;
        (*p_52) = l_206;

        ;
        if ((!(((*l_213) &= (((((4294967295UL > p_54.f1) , (p_54.f0 , ((*l_210) = (safe_mod_func_int64_t_s_s((*g_146), (l_209 = g_185)))))) >= (!((*l_211) = (g_189 && g_187)))) != p_54.f2) == l_212)) <= g_134.f0)))
        {
            struct S0 *l_214 = &g_134;
            int l_236 = 0xCEAB9BFDL;
            if (p_54.f4)
                break;
            (*l_214) = g_134;
            for (p_54.f0 = (-23); (p_54.f0 <= 46); p_54.f0 = safe_add_func_int64_t_s_s(p_54.f0, 8))
            {
                long long *l_227 = &g_228;
                int l_229 = 0xA47AEA75L;
                long long **l_233 = (void*)0;
                long long *l_235 = &g_25;
                long long **l_234 = &l_235;
                int *l_237 = &g_102;
                (*l_237) |= (safe_lshift_func_uint8_t_u_s(((((safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((*l_211) = (safe_mul_func_int16_t_s_s((!(((p_54.f3 < ((*l_227) = (!((**g_145) |= (*l_213))))) | g_25) , l_229)), p_54.f0))), ((safe_sub_func_int64_t_s_s((p_56 ^ 0x35A5BBF8L), (l_232 != ((*l_234) = (void*)0)))) , p_56))) ^ l_236), 255UL)) <= 1UL) | p_55) , 0x49L), 6));

                ;
                (*l_237) &= (safe_rshift_func_uint8_t_u_s((0x40L ^ g_80), p_55));
            }
        }
        else
        {
            g_240 = &l_206;

            ;
            (*l_213) ^= 1L;
            g_102 &= 1L;
            if (l_209)
                break;

        }


    }

    ;

    if (l_209)
    {
        unsigned long long l_250 = 18446744073709551615UL;
        int l_301 = (-1L);
        int l_302 = (-3L);
        unsigned char l_343 = 0x1CL;
        struct S0 l_345 = {1UL,35,0x009A4825L,249UL,1UL};
        short l_366 = (-7L);
        int l_367 = 0x98E1627DL;
        unsigned short *l_368 = &g_77;
        if ((safe_mod_func_uint8_t_u_u(g_185, l_209)))
        {
            int l_243 = 0xF5E1EA3AL;
            int **l_267 = &g_15;
            unsigned char l_312 = 0x0CL;
            unsigned long long l_330 = 0x5BF4506700EAA7C0LL;
            if ((9UL == l_243))
            {
                char l_251 = 0xABL;
                (*p_52) = (((((-1L) != (safe_add_func_uint32_t_u_u((p_54.f2 |= g_191), (safe_mul_func_int8_t_s_s((0x1BCCL < p_56), (+p_56)))))) ^ (safe_rshift_func_uint16_t_u_u(l_250, 10))) ^ 3L) , (l_251 , (*p_52)));
                if (l_250)
                {
                    unsigned long long l_269 = 1UL;
                    long long *l_278 = (void*)0;
                    int l_279 = 0x6D626AAEL;
                    if (((*g_190) && (~g_187)))
                    {
                        int *l_252 = (void*)0;
                        (*p_52) = l_252;

                        ;
                    }
                    else
                    {
                        unsigned short l_268 = 7UL;
                        short *l_270 = &g_189;
                        int *l_272 = &g_80;
                        p_56 &= (((g_134.f4 , p_54.f4) < (safe_mod_func_int32_t_s_s((((void*)0 != (*g_145)) || (safe_lshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s(((*l_270) = (safe_div_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((*g_190) = ((safe_sub_func_int64_t_s_s(((**g_145) = (**g_145)), (safe_add_func_int16_t_s_s(((void*)0 != l_267), (((!(g_80 , g_23)) < p_54.f0) , l_268))))) ^ l_268)), g_228)) , l_269), p_55))), 2UL)) || l_209), 2))), p_55))) | g_185);
                        (*l_272) = (safe_unary_minus_func_int32_t_s((p_54.f2 > (l_269 <= (l_209 || g_191)))));
                    }
                    for (g_189 = 0; (g_189 == (-13)); g_189 = safe_sub_func_int64_t_s_s(g_189, 2))
                    {
                        int *l_277 = &l_212;
                        (*l_277) ^= (safe_mod_func_uint16_t_u_u(p_54.f1, p_55));
                        (*p_52) = (*l_267);

                        ;
                    }
                    if (((*g_146) & (l_279 ^= p_56)))
                    {
                        return g_134;
                    }
                    else
                    {
                        unsigned *l_283 = &l_209;
                        unsigned **l_282 = &l_283;
                        short *l_294 = &g_189;
                        unsigned short *l_299 = &g_77;
                        int l_305 = 0x38901DACL;
                        long long *l_313 = &g_228;
                        l_301 = ((((*l_282) = &g_99) == ((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((l_250 , (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(g_26, ((*l_294) &= l_250))), (*g_190)))), (+g_134.f1))) >= (safe_lshift_func_uint16_t_u_u(0xEE51L, 12))), (safe_sub_func_uint16_t_u_u(((*l_299) = g_228), ((safe_unary_minus_func_uint32_t_u(((4L | l_250) & l_250))) & p_55))))), g_134.f1)) , &l_209)) == 0L);

                        ;
                        l_302 = (((g_134.f2 <= 0xECD07D77L) > l_212) >= l_212);
                        p_55 = (((*l_313) &= ((((safe_mul_func_uint8_t_u_u(p_54.f4, (g_134.f2 > p_54.f0))) , l_250) >= g_134.f0) && (l_305 | ((*g_190) &= (safe_rshift_func_int16_t_s_s(g_80, (safe_add_func_uint16_t_u_u(1UL, (safe_mod_func_int64_t_s_s((*g_146), l_312)))))))))) != g_134.f1);
                    }
                }
                else
                {
                    unsigned char *l_316 = &l_312;
                    int *l_317 = &g_102;
                    (*l_317) |= ((~(safe_lshift_func_uint8_t_u_s(l_251, p_54.f3))) ^ ((*l_316) &= (l_251 >= p_56)));
                    (*p_52) = (*g_14);

                    ;
                }
                if (p_55)
                {
                    unsigned char l_318 = 0x16L;
                    int *l_319 = &g_80;
                    (*p_52) = (*g_14);

                    ;
                    (*l_319) = (l_318 < g_23);
                }
                else
                {
                    for (g_102 = 0; (g_102 != 24); ++g_102)
                    {
                        return g_134;
                    }
                }
            }
            else
            {
                unsigned short l_327 = 0x2EF5L;
                int *l_342 = &g_80;
                (*p_52) = (void*)0;

                ;
                (*p_52) = (*g_14);

                ;
                if (((safe_mul_func_int16_t_s_s((-10L), g_134.f0)) & (&l_250 != ((**g_145) , func_40(((((safe_div_func_int64_t_s_s((&g_145 != l_326), ((((((l_327 , (void*)0) == &g_99) & g_191) < 0x64E4L) < p_56) , l_212))) <= g_134.f2) || l_327) > 0x31ABC1FECEB42ADALL))))))
                {
                    unsigned long long l_333 = 18446744073709551615UL;
                    int **l_338 = &g_108;
                    unsigned short *l_339 = &l_327;
                    p_56 |= (safe_sub_func_uint16_t_u_u(l_330, ((*l_339) = ((p_52 != (l_338 = &g_108)) ^ 65529UL))));
                    for (g_102 = 0; (g_102 > (-26)); g_102 = safe_sub_func_int8_t_s_s(g_102, 8))
                    {
                        (*l_338) = &l_212;

                        ;
                        (**l_338) = (**p_52);
                        (*p_52) = l_342;

                        ;
                    }

                    ;
                    (*p_52) = (*p_52);
                }
                else
                {
                    l_302 |= l_343;
                }

                ;
                if ((*l_342))
                {
                    return g_134;
                }
                else
                {
                    unsigned char l_344 = 0UL;
                    (*l_342) = (*l_342);
                    p_56 = ((*l_342) = l_344);
                    l_345 = g_134;
                    l_302 &= l_344;
                }
            }
        }
        else
        {
            char **l_346 = &g_190;
            g_347 = l_346;
        }
        l_369 ^= (g_134.f2 >= (safe_mod_func_uint16_t_u_u(((*l_368) |= ((l_212 || (safe_lshift_func_uint8_t_u_s(((((**g_347) , ((g_99 = 1UL) < (!((((safe_div_func_uint16_t_u_u(0UL, (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((g_102 , ((g_191 ^ l_302) | (((safe_rshift_func_int16_t_s_u((((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(l_345.f2, p_54.f2)), l_345.f0)) , l_366) ^ 0x9487L), l_301)) <= 0x8548L) && p_55))), p_56)) , l_367), l_212)) , g_134.f0), l_212)))) < (-7L)) | g_185) == l_209)))) == 0UL) == l_209), (**g_347)))) <= 4294967295UL)), 0x1C10L)));
        (*p_52) = (*p_52);
    }
    else
    {
        unsigned short l_372 = 0UL;
        short *l_379 = (void*)0;
        short *l_380 = &g_189;
        short *l_381 = &g_382;
        struct S0 l_385 = {18446744073709551615UL,66,0xB6BF4324L,252UL,0x5DL};
        long long ***l_395 = (void*)0;
        unsigned l_430 = 1UL;
        l_369 |= (((**g_145) , g_134.f4) || (safe_sub_func_int16_t_s_s(((*l_381) = ((*l_380) = ((p_53 == (((l_372 , l_212) || (safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((l_372 , 0xBF02L), g_191)) , (((safe_mul_func_int16_t_s_s(l_372, l_372)) != 0L) >= l_372)), l_372))) , (void*)0)) < p_54.f2))), g_191)));
        if (((l_209 , ((**l_326) = (void*)0)) != (void*)0))
        {
            for (g_99 = 0; (g_99 > 49); g_99++)
            {
                return l_385;
            }
        }
        else
        {
            short l_392 = (-10L);
            long long ****l_396 = &l_326;
            int l_397 = 1L;
            int *l_402 = (void*)0;
            int *l_410 = &l_397;
            unsigned short *l_431 = &g_77;
            unsigned char l_432 = 3UL;
            l_397 ^= (l_385.f3 || ((p_54.f0 <= (safe_add_func_int16_t_s_s(l_209, (((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_392, l_212)), (safe_sub_func_int64_t_s_s((((*l_396) = l_395) == (l_209 , l_395)), l_392)))) | 0xD687L) <= g_23)))) || 0UL));

            ;
            if ((~((*l_410) = ((safe_mul_func_int8_t_s_s(p_54.f2, p_54.f4)) == (l_397 , ((safe_add_func_int32_t_s_s((g_102 = (p_55 < g_134.f2)), ((safe_div_func_int32_t_s_s(((((g_45 |= ((g_80 != ((*g_190) ^= (g_134 , (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_25, ((l_409 = &l_397) == &l_212))), 11))))) & p_54.f3)) ^ l_385.f2) != 0x46L) , p_54.f1), p_54.f4)) , 0x67D461E5L))) | l_209))))))
            {
                return g_134;
            }
            else
            {
                (*p_52) = (*p_52);
                for (g_45 = 0; (g_45 < (-8)); g_45 = safe_sub_func_int8_t_s_s(g_45, 2))
                {
                    (*p_52) = (*p_52);
                    for (g_134.f0 = 0; (g_134.f0 < 19); g_134.f0 = safe_add_func_int32_t_s_s(g_134.f0, 8))
                    {
                        unsigned short l_426 = 0UL;
                        (*p_52) = (*p_52);
                        if (p_55)
                            break;
                        (*p_52) = ((safe_div_func_uint32_t_u_u(((safe_unary_minus_func_int64_t_s(((p_54 , ((((safe_add_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(p_54.f3, (((p_54 , p_54.f2) , p_54.f3) , g_80))) | ((p_55 & ((((**g_347) &= (safe_div_func_uint8_t_u_u((g_80 < l_426), 0x3DL))) , 0L) , p_56)) ^ 0xC5FF1E02231B2748LL)), (*l_410))) != 0x9F228F18FD0311AFLL), (*l_409))) , g_134) , 0x5495FA754648E599LL) <= p_54.f0)) == p_56))) , g_134.f0), g_134.f0)) , (void*)0);

                        ;
                    }
                }
                for (l_385.f0 = 28; (l_385.f0 == 44); l_385.f0 = safe_add_func_uint8_t_u_u(l_385.f0, 7))
                {
                    if (l_429)
                        break;
                }
                l_432 = ((l_430 != ((*l_409) = ((g_25 , (*l_409)) & (((void*)0 == l_431) <= 0xB6D6A342L)))) , (p_54.f0 , ((*l_410) > l_385.f3)));
            }

            ;
        }

        ;
        ;

    }

    ;
    ;

    return p_54;
}







static int ** func_57(unsigned p_58, unsigned p_59)
{
    unsigned l_64 = 0x54C62B41L;
    char l_75 = (-1L);
    char *l_76 = &l_75;
    int *l_78 = (void*)0;
    int *l_79 = &g_80;
    int l_89 = 0L;
    unsigned *l_98 = &g_99;
    int l_100 = 0L;
    int *l_101 = &g_102;
    struct S0 l_140 = {18446744073709551609UL,31,1UL,1UL,8UL};
    unsigned l_151 = 0xFDC5FA4BL;
    char l_194 = 0x3AL;
    unsigned l_198 = 0x6EEABB79L;
    (*l_79) &= (p_58 != (((safe_sub_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u(g_23, l_64)) || l_64) & (safe_sub_func_uint8_t_u_u(g_23, ((safe_add_func_int32_t_s_s((g_77 ^= ((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(0x6747L, ((l_64 | p_59) != (safe_sub_func_int8_t_s_s(((*l_76) = l_75), 254UL))))), 0x3E67B33DL)) || (-1L))), l_64)) < g_23)))), g_23)) < (-8L)) , 18446744073709551615UL));
    if (((0xF15F1D34L < (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(l_89, (safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((*l_79), 7)) ^ ((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(g_80, ((((*l_98) = g_23) | p_59) <= 1L))), ((((*l_101) = (l_100 |= p_58)) | (g_103 = ((&g_15 == (void*)0) < 0x6173B00CL))) , g_45))) || (*l_101))), (-6L))))) | 0x5A07F58EL), p_59)), g_45)), g_25))) , 0x0DD06798L))
    {
        int *l_114 = &l_100;
        unsigned char l_129 = 0x60L;
        struct S0 l_133 = {0UL,161,0UL,0xBFL,0x20L};
        short l_137 = 0x6AE2L;
        long long l_175 = 0xDA80D186C8CC7008LL;
        for (g_23 = 0; (g_23 < 13); g_23 = safe_add_func_uint8_t_u_u(g_23, 7))
        {
            int **l_106 = (void*)0;
            int **l_107 = &l_78;
            int l_136 = 0x4B6F1E52L;
            struct S0 l_141 = {0x7A75AA8EL,180,0UL,0x98L,1UL};
            long long **l_147 = &g_146;
            unsigned char l_150 = 9UL;
            int l_165 = 1L;
            g_108 = ((*l_107) = (*g_14));

            ;
            ;
            for (g_77 = 0; (g_77 >= 16); g_77 = safe_add_func_int32_t_s_s(g_77, 9))
            {
                long long *l_113 = &g_45;
                int l_132 = 0x1BCE71E8L;
                if (((*l_79) = (((*l_113) = (safe_lshift_func_int8_t_s_s((g_103 | p_59), (*l_79)))) && p_58)))
                {
                    (*l_107) = l_114;

                    ;
                }
                else
                {
                    unsigned long long l_130 = 18446744073709551613UL;
                    struct S0 *l_135 = &l_133;
                    if ((safe_unary_minus_func_int64_t_s(g_77)))
                    {
                        unsigned long long l_128 = 0x5289E610DA34DBBDLL;
                        int l_131 = 0xFA4E93F4L;
                        (*l_114) = p_59;
                        (*l_101) ^= (safe_lshift_func_int8_t_s_u(0xA6L, (safe_sub_func_int16_t_s_s((((*l_98) |= ((p_59 == ((*g_14) == (*g_14))) , (safe_mod_func_int64_t_s_s(g_26, (g_23 ^ ((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(l_128, g_25)), ((l_129 , 0x85B88FC9L) , p_59))) != l_128)))))) , g_45), l_130))));
                        l_131 = 0L;
                        (*l_107) = (void*)0;

                        ;
                    }
                    else
                    {
                        (*l_101) |= l_132;
                        (*l_107) = (*g_14);

                        ;
                        (*l_101) |= (*l_114);
                    }

                    ;
                    (*l_135) = (g_134 = l_133);
                }
            }

            ;
            l_137 |= ((*l_101) = l_136);
            for (l_89 = 0; (l_89 < (-14)); l_89--)
            {
                unsigned *l_154 = &l_133.f2;
                int l_172 = (-3L);
                if (p_58)
                {
                    long long ***l_142 = (void*)0;
                    long long **l_144 = (void*)0;
                    long long ***l_143 = &l_144;
                    int l_160 = (-1L);
                    l_141 = l_140;
                    (*l_101) &= (((*l_143) = (void*)0) != g_145);
                    g_145 = l_147;
                    for (l_129 = 0; (l_129 != 41); l_129 = safe_add_func_uint32_t_u_u(l_129, 7))
                    {
                        int l_159 = 0xA63A172FL;
                        struct S0 *l_161 = &l_140;
                        (*l_79) ^= (l_150 & ((((((p_59 , l_151) < (safe_div_func_int64_t_s_s((*l_114), p_58))) , (g_134 , (!((l_154 == (void*)0) != (safe_sub_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_u((g_134.f4 , g_102), p_59)) != g_26) || l_159) | g_45), g_25)))))) <= l_160) | 0x1CAF8AA5L) , g_103));
                        (*l_161) = g_134;
                        (*l_101) = ((-5L) & l_160);
                    }
                }
                else
                {
                    (*l_79) = (safe_lshift_func_uint8_t_u_s(g_134.f1, ((safe_unary_minus_func_int8_t_s(g_45)) , p_58)));
                }
                l_165 = p_59;
                (*l_79) = ((p_58 & p_59) , (((*l_101) |= (safe_sub_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(0x9BL, (safe_mod_func_int16_t_s_s((((*l_114) != 4294967295UL) <= (l_172 , (safe_add_func_int64_t_s_s((*l_79), (l_175 || (l_172 ^= g_134.f1)))))), g_77)))), g_77))) <= (*l_79)));
            }
        }

        ;
        ;
    }
    else
    {
        unsigned long long *l_184 = &g_185;
        unsigned long long *l_186 = &g_187;
        short *l_188 = &g_189;
        int l_197 = (-1L);
        (*g_108) = ((*l_101) , (safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((*l_79), (((((*l_188) = ((safe_mod_func_int64_t_s_s((**g_145), ((*l_186) = ((*l_184) = g_103)))) >= g_134.f2)) , (void*)0) != g_190) , ((((safe_rshift_func_int16_t_s_s(l_194, 11)) | ((safe_mod_func_uint64_t_u_u(l_197, p_58)) , l_198)) != g_103) , p_59)))) , 1UL), (-9L))), p_59)));
        (*g_108) |= (safe_add_func_uint8_t_u_u(2UL, ((*g_190) = (*g_190))));
        for (g_134.f2 = (-15); (g_134.f2 <= 8); ++g_134.f2)
        {
            return &g_108;


        }
    }

    ;
    ;
    return &g_108;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_134.f0, "g_134.f0", print_hash_value);
    transparent_crc(g_134.f1, "g_134.f1", print_hash_value);
    transparent_crc(g_134.f2, "g_134.f2", print_hash_value);
    transparent_crc(g_134.f3, "g_134.f3", print_hash_value);
    transparent_crc(g_134.f4, "g_134.f4", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_698, "g_698", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    transparent_crc(g_833, "g_833", print_hash_value);
    transparent_crc(g_851, "g_851", print_hash_value);
    transparent_crc(g_952, "g_952", print_hash_value);
    transparent_crc(g_1016.f0, "g_1016.f0", print_hash_value);
    transparent_crc(g_1016.f1, "g_1016.f1", print_hash_value);
    transparent_crc(g_1016.f2, "g_1016.f2", print_hash_value);
    transparent_crc(g_1016.f3, "g_1016.f3", print_hash_value);
    transparent_crc(g_1016.f4, "g_1016.f4", print_hash_value);
    transparent_crc(g_1043, "g_1043", print_hash_value);
    transparent_crc(g_1096, "g_1096", print_hash_value);
    transparent_crc(g_1185, "g_1185", print_hash_value);
    transparent_crc(g_1228.f0, "g_1228.f0", print_hash_value);
    transparent_crc(g_1228.f1, "g_1228.f1", print_hash_value);
    transparent_crc(g_1228.f2, "g_1228.f2", print_hash_value);
    transparent_crc(g_1228.f3, "g_1228.f3", print_hash_value);
    transparent_crc(g_1228.f4, "g_1228.f4", print_hash_value);
    transparent_crc(g_1243, "g_1243", print_hash_value);
    transparent_crc(g_1290, "g_1290", print_hash_value);
    transparent_crc(g_1298, "g_1298", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
