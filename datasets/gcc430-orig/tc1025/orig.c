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
   char f0;
   unsigned f1;
};

union U1 {
   unsigned short f0;
   int f1;
};


static char g_2 = 0x85L;
static int g_4 = 0L;
static union U1 g_7 = {0x3E93L};
static int g_35 = (-5L);
static union U0 g_42 = {0xE1L};
static union U0 *g_41 = &g_42;
static unsigned char g_62 = 0x6AL;
static union U0 g_77 = {0x6FL};
static unsigned short g_88 = 0UL;
static int g_133 = 1L;
static union U0 **g_137 = (void*)0;
static short g_151 = 1L;
static unsigned char *g_157 = &g_62;
static unsigned char **g_156 = &g_157;
static unsigned g_158 = 0x68EA8FD6L;
static unsigned char g_184 = 255UL;
static unsigned g_218 = 1UL;
static short g_242 = 0xB3CBL;
static short g_254 = 0x9831L;
static unsigned g_280 = 0x9AD04334L;
static short g_282 = (-3L);
static unsigned g_297 = 0x63974108L;
static union U1 *g_358 = (void*)0;
static union U1 **g_357 = &g_358;
static unsigned char *g_370 = (void*)0;
static char g_412 = 0x5FL;
static char *g_439 = (void*)0;
static char **g_438 = &g_439;
static int *g_461 = &g_35;
static union U1 g_526 = {0x07E8L};
static int g_627 = (-3L);
static unsigned short g_630 = 5UL;
static char *g_683 = (void*)0;
static short *g_701 = &g_254;
static short **g_700 = &g_701;
static unsigned char g_744 = 1UL;
static char g_820 = 0x44L;
static short ***g_879 = &g_700;
static short ****g_878 = &g_879;
static unsigned g_955 = 18446744073709551610UL;
static unsigned g_960 = 0x45CC10E1L;
static unsigned short *g_991 = (void*)0;
static unsigned short **g_990 = &g_991;



static int func_1(void);
static int func_5(union U1 p_6);
static int * func_12(unsigned p_13, char p_14, unsigned char p_15, int * p_16);
static char func_22(int p_23, unsigned short p_24, unsigned p_25, int * p_26, unsigned short p_27);
static union U0 * func_36(unsigned short p_37, char p_38, int * p_39);
static int * func_46(int * p_47, int p_48, union U0 ** p_49);
static int func_55(unsigned char p_56, unsigned p_57, unsigned short p_58, unsigned p_59);
static int ** func_65(short p_66, union U0 ** p_67, unsigned short p_68, unsigned short p_69, char p_70);
static short func_71(union U0 p_72, union U0 * p_73, int * p_74, char p_75, union U0 p_76);
static int * func_79(short p_80, union U0 * p_81, unsigned short p_82, unsigned p_83);
static int func_1(void)
{
    int *l_3 = &g_4;
    int *l_954 = &g_526.f1;
    union U0 *l_1020 = (void*)0;
    int l_1032 = 0x3A50271CL;
    union U1 l_1043 = {0x3AD6L};
lbl_963:
    (*l_3) |= g_2;
    if ((g_955 &= ((func_5(g_7) == g_412) | ((((*l_954) = ((safe_lshift_func_int8_t_s_u((g_630 >= (safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((*g_157) ^= (safe_add_func_uint16_t_u_u((1L <= 0xB73D9C54L), (g_282 < g_412)))), (safe_sub_func_int16_t_s_s((****g_878), (***g_879))))) > 0x204F310DL), 0xBAE08723L))), 2)) > (*l_3))) < (*l_3)) | (*l_3)))))
    {
        int l_956 = 0x3170294CL;
        union U0 l_957 = {1L};
        int *l_959 = (void*)0;
        unsigned char **l_968 = &g_157;
        union U1 l_976 = {0x663AL};
        (*g_461) &= 0L;
        if ((l_956 < l_956))
        {
            union U0 **l_958 = &g_41;
            union U0 *l_961 = &g_77;
            int l_962 = 0x62421A74L;
            (*l_3) ^= l_962;
            (**g_878) = (**g_878);
            g_526.f1 |= (*g_461);
            if (g_62)
                goto lbl_963;
        }
        else
        {
            int *l_964 = &g_4;
            int **l_965 = &l_959;
            unsigned char ***l_969 = &g_156;
            unsigned short l_970 = 2UL;
            (*l_965) = l_964;

            ;
            (*g_461) ^= (safe_add_func_uint16_t_u_u((((*l_969) = l_968) != &g_157), l_970));
            g_461 = l_954;

            ;
        }

        ;
        ;
        (*l_954) = (((*l_954) | (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(((safe_rshift_func_int8_t_s_u((((**g_156) = (**g_156)) > (*l_3)), 1)) || (*g_157)))), 4))) == ((void*)0 == &g_879));
    }
    else
    {
        unsigned short l_994 = 0x059EL;
        union U0 *l_1024 = &g_42;
        int l_1042 = 0xF7D274C0L;
        int *l_1044 = &l_1032;
        if ((*g_461))
        {
            int **l_977 = &l_954;
            (*l_977) = &g_35;

            ;
        }
        else
        {
            char l_978 = 0L;
            int *l_998 = &g_7.f1;
            union U0 *l_1028 = &g_42;
            unsigned short l_1040 = 0x0046L;
            int **l_1047 = &g_461;
            if (l_978)
            {
                unsigned short *l_987 = &g_630;
                unsigned short **l_986 = &l_987;
                (*g_461) ^= (safe_lshift_func_int8_t_s_s(0x28L, 4));
                for (g_218 = 20; (g_218 < 48); g_218 = safe_add_func_int16_t_s_s(g_218, 9))
                {
                    unsigned short l_997 = 0x2C55L;
                    int l_999 = 0x95F73A62L;
                    if ((*g_461))
                    {
                        int l_983 = 0x2C1D875BL;
                        unsigned short ***l_988 = (void*)0;
                        unsigned short ***l_989 = &l_986;
                        int *l_1000 = (void*)0;
                        int *l_1001 = &g_627;
                        (*l_998) ^= (*g_461);
                    }
                    else
                    {
                        int l_1002 = 0x340923EAL;
                        (*l_954) ^= l_1002;
                        (*g_461) = (safe_sub_func_uint16_t_u_u(g_627, (*g_701)));
                        (*g_357) = (*g_357);
                    }
                }
            }
            else
            {
                int *l_1005 = &g_35;
                int **l_1041 = &l_1005;
                g_461 = l_1005;

                ;
                for (g_526.f1 = 0; (g_526.f1 == (-2)); g_526.f1 = safe_sub_func_uint16_t_u_u(g_526.f1, 8))
                {
                    unsigned *l_1012 = &g_297;
                    int l_1013 = (-6L);
                    union U0 **l_1021 = (void*)0;
                    union U0 **l_1022 = (void*)0;
                    union U0 **l_1023 = &l_1020;
                    union U0 **l_1025 = (void*)0;
                    union U0 **l_1026 = (void*)0;
                    union U0 **l_1027 = &l_1024;
                    int **l_1029 = &l_1005;
                    unsigned short *l_1039 = &g_630;
                    (*l_1029) = func_79(((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(((*l_1012) = l_994), l_1013)), (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((*g_157), ((safe_mod_func_uint16_t_u_u(l_994, (*l_1005))) == ((((*l_1023) = l_1020) != ((*l_1027) = l_1024)) <= 1UL)))), ((0x29L | l_1013) || (*l_1005)))))) != l_994), l_1028, (*l_1005), g_744);

                    ;
                    if ((*g_461))
                        continue;
                    l_1013 = (((**l_1029) = (*g_461)) | ((((*l_998) != (l_994 || (**g_700))) & (((safe_mod_func_int8_t_s_s(g_630, ((**g_156) = (**g_156)))) == 0x4EL) & 0x13E3L)) < 5L));
                    (*l_3) ^= ((l_1040 ^= ((*g_461) < (*l_1005))) | (*g_461));
                }

                ;
                l_1042 = ((void*)0 != l_1041);
            }

            ;
            (*l_1047) = &g_4;

            ;
        }

        ;
        ;
    }

        ;
    ;
    return (*l_3);
}







static int func_5(union U1 p_6)
{
    int *l_30 = &g_7.f1;
    int l_882 = 0L;
    union U0 *l_884 = &g_77;
    unsigned char *l_904 = &g_184;
    unsigned short l_925 = 0x64F2L;
    int *l_939 = &g_133;
    unsigned l_940 = 18446744073709551609UL;
    unsigned l_941 = 4294967287UL;
    int **l_942 = (void*)0;
    int **l_943 = &l_939;
    for (g_7.f1 = 0; (g_7.f1 < 21); ++g_7.f1)
    {
        char l_17 = (-1L);
        int *l_33 = &g_4;
        short l_837 = 7L;
        for (g_2 = (-13); (g_2 <= (-18)); g_2--)
        {
            unsigned char l_31 = 250UL;
            int l_32 = 8L;
            int *l_838 = &g_7.f1;
            int **l_870 = &l_30;
        }
        (*g_461) = (safe_rshift_func_int16_t_s_s(((*l_33) || p_6.f0), 13));
    }

    for (g_77.f1 = (-25); (g_77.f1 >= 11); g_77.f1 = safe_add_func_int32_t_s_s(g_77.f1, 8))
    {
        unsigned short l_903 = 0x1894L;
        union U0 *l_909 = &g_42;
        unsigned short *l_911 = &l_903;
        int l_924 = 0xDBB93A85L;
        if (((****g_878) || (((safe_rshift_func_uint8_t_u_s(l_903, 6)) <= p_6.f0) == (l_904 == l_904))))
        {
            unsigned *l_905 = &g_297;
            unsigned *l_906 = &g_218;
            (*l_30) ^= (((*l_906) = ((*l_905) ^= 4294967295UL)) >= g_133);
        }
        else
        {
            union U0 *l_910 = &g_42;
            for (g_280 = 0; (g_280 > 40); g_280 = safe_add_func_int32_t_s_s(g_280, 9))
            {
                l_910 = l_909;
            }
        }
        (*g_461) ^= p_6.f0;
        (*g_461) |= (((*l_911) = l_903) == (safe_lshift_func_uint16_t_u_u((g_88 | (safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((p_6.f0 || (p_6.f0 || p_6.f0)) <= (*l_30)), (p_6.f0 | p_6.f0))), (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((((*g_701) <= 0UL) != g_42.f0), (*l_30))), l_924)))), g_77.f0))), 9)));
    }

    (*l_943) = (g_461 = func_79(l_925, &g_77, p_6.f0, g_280));

    ;
    return (*g_461);
}







static int * func_12(unsigned p_13, char p_14, unsigned char p_15, int * p_16)
{
    unsigned short l_839 = 1UL;
    int *l_840 = &g_35;
    unsigned *l_841 = &g_42.f1;
    unsigned *l_842 = (void*)0;
    unsigned short *l_851 = &g_526.f0;
    unsigned short *l_852 = &l_839;
    unsigned l_853 = 9UL;
    unsigned **l_859 = (void*)0;
    unsigned ***l_858 = &l_859;
    (*l_840) |= l_839;
    (*l_840) ^= (*p_16);
    if ((p_15 & g_280))
    {
        char *l_860 = &g_42.f0;
        int l_861 = 0xAAD127C3L;
        union U1 *l_862 = (void*)0;
lbl_863:
        (*l_840) = (l_853 || ((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((l_858 != &l_859) || ((*l_860) &= p_13)), 4)), l_861)) < l_861));
        (*g_357) = l_862;

        ;
        if (p_15)
            goto lbl_863;
        l_861 = 0L;
    }
    else
    {
        char l_864 = (-2L);
        int **l_868 = (void*)0;
        int **l_869 = &l_840;
        (*l_840) |= l_864;
        for (g_62 = 0; (g_62 != 26); g_62 = safe_add_func_uint16_t_u_u(g_62, 2))
        {
            int *l_867 = (void*)0;
            return l_867;


        }
        (*l_869) = p_16;

        ;
    }

    ;
    return p_16;


}







static char func_22(int p_23, unsigned short p_24, unsigned p_25, int * p_26, unsigned short p_27)
{
    int *l_34 = &g_35;
    union U0 **l_836 = &g_41;
    (*l_34) ^= ((*p_26) = (*p_26));
    (*l_836) = func_36(p_24, p_27, l_34);

    ;
    ;

    return (*l_34);
}







static union U0 * func_36(unsigned short p_37, char p_38, int * p_39)
{
    union U0 *l_40 = (void*)0;
    union U0 **l_43 = &g_41;
    union U0 *l_45 = &g_42;
    union U0 **l_44 = &l_45;
    int *l_50 = &g_7.f1;
    int **l_557 = &l_50;
    union U1 ***l_562 = &g_357;
    union U1 ***l_564 = &g_357;
    union U1 ****l_563 = &l_564;
    unsigned short l_565 = 0x4FC9L;
    unsigned *l_566 = &g_297;
    short l_668 = (-1L);
    int l_673 = (-1L);
    char *l_682 = (void*)0;
    short **l_690 = (void*)0;
    short ***l_689 = &l_690;
    union U1 ***l_714 = &g_357;
    unsigned l_745 = 3UL;
    (*p_39) = (l_40 != ((*l_44) = ((*l_43) = g_41)));
    (*l_557) = func_46(l_50, g_4, &l_40);

    ;

    (*l_50) = (~(**l_557));
    if (((**l_557) = (safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((l_562 != ((*l_563) = (void*)0)) < (*l_50)), (*p_39))), ((*l_566) = ((*l_50) >= ((**l_557) != (0L < l_565))))))))
    {
        int l_575 = (-1L);
        union U1 ***l_589 = &g_357;
        union U1 ****l_590 = &l_562;
        int l_606 = (-1L);
        int l_628 = 1L;
        int l_662 = 0L;
lbl_586:
        for (g_412 = (-23); (g_412 < 28); ++g_412)
        {
            int l_578 = (-1L);
            for (g_158 = (-24); (g_158 == 45); g_158++)
            {
                union U1 **l_571 = &g_358;
                int l_576 = 0x9CB4D59CL;
                union U1 *l_583 = &g_526;
                if ((((*l_562) = l_571) == (void*)0))
                {
                    unsigned char l_577 = 0x00L;
                    if ((*p_39))
                        break;
                    if ((*l_50))
                    {
                        int l_574 = 0x0427F134L;
                        int *l_579 = &l_576;
                        char *l_580 = &g_77.f0;
                        (*l_579) = ((((g_88 ^ ((*p_39) = (**l_557))) <= l_574) | (l_575 < l_576)) <= (l_577 < l_578));
                        if ((*p_39))
                            break;
                        (*p_39) = (((*l_580) = l_575) ^ (l_576 | (g_282 != g_4)));
                    }
                    else
                    {
                        (*p_39) |= 0xD06EDF1CL;
                        if (g_133)
                            goto lbl_586;
                    }
                    if (l_575)
                        break;
                    for (l_576 = 2; (l_576 > 0); --l_576)
                    {
                        (**l_557) = l_575;
                        (**l_557) = l_578;
                    }
                }
                else
                {
                    (**l_557) = (*p_39);
                    (*g_357) = l_583;

                    ;
                    (*l_50) &= (-1L);
                    for (g_35 = 23; (g_35 == 28); g_35++)
                    {
                        (*l_557) = (*l_557);
                        g_4 |= ((((**g_156) = 7UL) != 0UL) ^ g_7.f1);
                        if ((*p_39))
                            continue;
                    }
                }
            }
        }
        if (((**l_557) != (safe_add_func_uint8_t_u_u(p_38, (((*l_563) = l_589) != ((*l_590) = &g_357))))))
        {
            unsigned l_605 = 0x13D03F30L;
            unsigned short *l_637 = &g_526.f0;
            int *l_640 = &g_35;
            (*p_39) |= l_575;
            for (g_526.f0 = 0; (g_526.f0 < 37); g_526.f0 = safe_add_func_int16_t_s_s(g_526.f0, 3))
            {
                unsigned char l_607 = 0xCFL;
                int l_619 = 0x7C95A084L;
                for (p_37 = 0; (p_37 == 14); p_37++)
                {
                    return &g_42;


                }
                for (g_297 = 5; (g_297 < 57); ++g_297)
                {
                    unsigned l_612 = 0xDEF4633BL;
                    for (g_133 = 0; (g_133 > 18); g_133++)
                    {
                        (*l_50) = 0x31E770A2L;
                    }
                    if ((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((*l_50), (*l_50))), (g_88 == 0x1376L))))
                    {
                        l_606 = (safe_sub_func_uint16_t_u_u(l_605, 0x2812L));
                        if ((*p_39))
                            break;
                        (*p_39) |= l_607;
                        if ((*p_39))
                            break;
                    }
                    else
                    {
                        union U0 *l_613 = &g_77;
                        unsigned **l_618 = &l_566;
                        char *l_622 = &g_42.f0;
                        int *l_629 = &g_4;
                        (**l_557) &= 1L;
                        l_619 = ((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(l_607, (&l_605 != ((*l_618) = func_79(l_612, l_613, p_37, ((+(safe_lshift_func_int16_t_s_s(g_184, (g_42.f0 | ((2L | (safe_rshift_func_uint8_t_u_s(p_38, 4))) & (*p_39)))))) || l_606)))))), 1)) ^ 0x1CL);

                        ;
                        (*l_629) |= (((p_38 && (safe_rshift_func_int8_t_s_s(((*l_622) ^= l_606), 4))) <= (0x1BL != (((p_37 ^ (l_619 != 65531UL)) >= g_627) >= (((*p_39) = (*p_39)) > l_628)))) < l_607);
                        (*l_43) = (*l_43);
                    }
                }
            }

            ;
            l_640 = func_79(g_630, ((*l_44) = (*l_44)), g_7.f0, ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((*g_157), (safe_lshift_func_uint16_t_u_s(((*l_637) = (p_37 = p_37)), 0)))), (safe_sub_func_int8_t_s_s(p_38, (6L == l_575))))) | l_605));

            ;
        }
        else
        {
            unsigned l_641 = 0x1204D076L;
            unsigned *l_642 = &g_280;
            (*l_50) = l_575;
            return (*l_43);


        }

        ;
        ;
        l_662 |= ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s((((*p_39) && 3L) == p_38), g_280)), (**g_156))), (safe_unary_minus_func_uint32_t_u((p_37 & (safe_mod_func_uint16_t_u_u((((!(safe_mod_func_int8_t_s_s(p_37, (safe_lshift_func_uint8_t_u_u(p_37, 1))))) < (~l_606)) != 0x002BL), 0x8D0DL))))))), (**l_557))) == 0x6348L);
    }
    else
    {
        int l_665 = 0x6F3A13FBL;
        unsigned l_671 = 0x6AAD5CEFL;
        int l_672 = (-5L);
        short *l_674 = &g_151;
        char *l_675 = &g_412;
        short **l_688 = &l_674;
        short ***l_687 = &l_688;
        union U0 *l_695 = &g_77;
        union U0 *l_741 = &g_42;
        int l_834 = (-5L);
        if (((safe_add_func_int32_t_s_s(l_665, (*p_39))) > (safe_add_func_int16_t_s_s((((l_668 > ((((l_671 = (safe_rshift_func_uint16_t_u_s((p_38 < p_37), 9))) != ((*l_675) = ((l_672 &= ((*l_50) && l_665)) == (g_242 &= ((*l_674) |= l_673))))) || 0x44L) == p_37)) >= (-1L)) || p_38), 0x7B8BL))))
        {
            (*l_50) = (**l_557);
        }
        else
        {
            unsigned short l_676 = 0xBDD4L;
            short *l_677 = &g_242;
            unsigned l_694 = 0x6CDCC869L;
            union U0 *l_702 = (void*)0;
            int l_716 = 0xEAC0C169L;
            char ***l_736 = &g_438;
            if (l_676)
            {
                short **l_686 = &l_677;
                short ***l_685 = &l_686;
                short ****l_684 = &l_685;
                union U0 *l_691 = &g_42;
                (*p_39) &= ((l_674 == l_677) != (safe_sub_func_int16_t_s_s((&g_370 != (void*)0), (safe_sub_func_int32_t_s_s(((l_675 = ((*g_438) = l_682)) == (g_683 = l_682)), (((*l_684) = (void*)0) == (l_689 = l_687)))))));

                ;
                ;
                ;
                if ((p_38 && (((*g_157) |= ((safe_add_func_int16_t_s_s(l_676, l_672)) ^ l_694)) && p_38)))
                {
                    return l_695;


                }
                else
                {
                    (*p_39) = (safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(p_38, (((*l_689) = g_700) != (void*)0))) > 0x75C981B6L), 1));

                    ;
                }

                ;
            }
            else
            {
                return l_702;


            }

            ;
            ;
            ;
            if (((*p_39) || ((g_62 | p_37) && p_38)))
            {
                char l_705 = 1L;
                unsigned short *l_708 = &g_7.f0;
                unsigned short *l_709 = &g_630;
                union U0 l_733 = {0L};
                union U0 *l_746 = &g_77;
                int l_758 = 0x06345ED4L;
                int l_782 = 9L;
lbl_783:
                if ((4294967295UL != (safe_sub_func_uint16_t_u_u((l_705 != (((7L != ((*l_709) = (l_705 <= (safe_sub_func_uint16_t_u_u(p_38, (l_708 != l_708)))))) != (((*l_677) = p_38) != ((*p_39) & (*p_39)))) != p_37)), p_37))))
                {
                    short ****l_725 = &l_687;
                    union U0 l_728 = {0L};
                    int *l_748 = (void*)0;
                    for (g_297 = (-6); (g_297 != 27); g_297 = safe_add_func_uint32_t_u_u(g_297, 6))
                    {
                        unsigned short l_715 = 1UL;
                        short ****l_721 = &l_687;
                        short *****l_720 = &l_721;
                        short *****l_722 = (void*)0;
                        short ****l_724 = &l_689;
                        short *****l_723 = &l_724;
                        (*p_39) ^= (&g_683 == &g_683);
                        (*l_50) = (g_133 |= (((safe_lshift_func_int8_t_s_u(p_38, ((((*l_563) = l_714) == (void*)0) <= (((*g_157) &= l_715) ^ p_37)))) <= ((*l_50) || (l_716 = l_676))) > p_37));

                        ;
                        (*p_39) |= (safe_rshift_func_uint8_t_u_s(l_672, 4));
                        (*p_39) |= ((safe_unary_minus_func_uint16_t_u((0UL != (((*l_723) = ((*l_720) = (void*)0)) == l_725)))) ^ l_672);

                        ;
                        ;
                    }
                    if ((safe_rshift_func_uint16_t_u_s(g_2, 0)))
                    {
                        int l_742 = 0xCEB9FF07L;
                        int *l_743 = &l_665;
                        (*l_743) &= (safe_lshift_func_int8_t_s_s((l_716 & ((*p_39) = (((&g_438 != l_736) && ((****l_725) = (safe_add_func_int8_t_s_s(((((*l_562) != &g_358) || (l_728.f0 != l_705)) | p_38), (**l_557))))) <= p_37))), l_742));
                    }
                    else
                    {
                        (*l_50) = g_254;
                    }
                    if (((g_744 == (**l_557)) > l_665))
                    {
                        union U0 *l_747 = &l_728;
                        l_746 = &l_733;

                        ;
                        return &g_42;


                    }
                    else
                    {
                        int *l_749 = (void*)0;
                        g_461 = &g_35;

                        ;
                        l_665 |= ((*l_50) = (*g_461));
                    }

                    ;
                }
                else
                {
                    (*p_39) |= l_733.f0;
                }
                (*l_50) = ((**g_156) == (*g_157));
                (**l_557) &= l_758;
                for (l_716 = 0; (l_716 <= 24); l_716 = safe_add_func_uint8_t_u_u(l_716, 9))
                {
                    unsigned l_763 = 0xECB77272L;
                    int l_770 = 0x1A47F8B5L;
                    if (((*l_50) = (safe_sub_func_uint32_t_u_u((**l_557), ((l_763 && (((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((~l_672) == ((((*p_39) <= (l_716 < ((safe_rshift_func_int8_t_s_s((l_665 = l_672), l_733.f0)) | p_38))) | p_37) <= 0x4DL)), 2)), (*l_50))) > (*g_157)) || l_758)) ^ l_733.f0)))))
                    {
                        l_770 = g_627;
                    }
                    else
                    {
                        int *l_778 = (void*)0;
                        int *l_779 = (void*)0;
                        int *l_780 = &l_758;
                        int *l_781 = &g_133;
                        g_133 = (0xFC9683E8L ^ ((*l_566) = 4294967295UL));
                        l_665 &= (((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u(0x0BL)) ^ ((*p_39) & 0x86753899L)), g_627)) ^ (l_671 || (l_782 = (((*l_781) = ((*l_780) = (~(l_676 <= ((safe_sub_func_int8_t_s_s(p_38, 0x4CL)) != (((safe_rshift_func_uint8_t_u_u(((g_42.f0 < l_671) || 1L), 0)) & p_37) < g_7.f1)))))) <= 0x836CCC6EL)))) > l_716);
                        if (g_4)
                            goto lbl_783;
                        (*l_50) ^= g_254;
                    }
                }
            }
            else
            {
                union U0 *l_786 = &g_77;
                int l_795 = 0x415C76B6L;
                for (l_665 = 10; (l_665 > 22); ++l_665)
                {
                    (*l_557) = p_39;

                    ;
                    if (g_297)
                    {
                        union U0 *l_787 = &g_77;
                        int l_788 = 0x1398337AL;
                        (*l_43) = l_786;

                        ;
                        (*l_50) = (((l_672 = g_282) | (((((p_37 > ((***l_687) ^= ((*l_44) != l_787))) | (l_788 & p_38)) & (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(p_38, p_37)), (safe_mod_func_uint16_t_u_u(g_158, 1UL))))) < 0xF1L) && 5UL)) || l_795);
                    }
                    else
                    {
                        int *l_798 = &l_672;
                        (*l_798) = ((**l_557) = (safe_add_func_uint8_t_u_u(253UL, l_716)));
                        (*l_798) &= ((*p_39) = (*p_39));
                    }
                }

                ;
            }

            ;
            ;
            l_716 = (l_665 && p_38);
        }

        ;
        ;
        ;
        ;
        ;
        for (g_526.f1 = 7; (g_526.f1 > 11); g_526.f1 = safe_add_func_uint8_t_u_u(g_526.f1, 1))
        {
            unsigned short l_801 = 65531UL;
            unsigned l_802 = 0xC9516C82L;
            if (l_801)
            {
                unsigned l_805 = 0xB2083721L;
                int l_811 = 0xB6110D46L;
                char l_826 = 7L;
                if (l_802)
                {
                    int l_810 = 1L;
                    unsigned short *l_812 = (void*)0;
                    unsigned short *l_813 = &l_801;
                    int **l_814 = (void*)0;
                    int **l_815 = &g_461;
                    int **l_816 = (void*)0;
                    int *l_817 = &l_665;
                    for (p_37 = 16; (p_37 != 46); p_37 = safe_add_func_uint16_t_u_u(p_37, 5))
                    {
                        short l_806 = (-1L);
                        if (l_805)
                            break;
                        if (l_806)
                            continue;
                    }
                    for (g_158 = (-24); (g_158 != 18); g_158 = safe_add_func_uint32_t_u_u(g_158, 2))
                    {
                        (*l_557) = &g_133;

                        ;
                        (*l_557) = &g_35;

                        ;
                    }
                    l_811 ^= (l_810 = (safe_unary_minus_func_uint32_t_u(((*l_566) |= g_412))));
                    (*l_817) &= (*p_39);
                }
                else
                {
                    union U0 ***l_818 = &l_44;
                    (*p_39) = (*p_39);
                    if ((*l_50))
                        continue;
                    if ((l_802 != (((*l_818) = &g_41) != &l_741)))
                    {
                        unsigned l_819 = 4294967295UL;
                        char *l_821 = &g_77.f0;
                        unsigned short *l_822 = &g_88;
                        unsigned short *l_823 = &l_565;
                        unsigned short *l_824 = &l_801;
                        unsigned *l_825 = &l_802;
                        int *l_827 = &l_672;
                        l_826 ^= (*p_39);
                        (*l_827) &= (*p_39);
                    }
                    else
                    {
                        unsigned *l_829 = &g_280;
                        unsigned **l_828 = &l_829;
                        unsigned ***l_830 = &l_828;
                        unsigned ***l_831 = (void*)0;
                        unsigned **l_833 = (void*)0;
                        unsigned ***l_832 = &l_833;
                        (*l_50) = (**l_557);
                        (*l_832) = ((*l_830) = l_828);

                        ;
                        (*p_39) = (*p_39);
                    }

                    ;
                    if (l_672)
                        break;
                }
                (*p_39) = l_834;
                g_133 |= ((*l_50) ^= l_802);
                (**l_557) = (*p_39);
            }
            else
            {
                union U0 *l_835 = &g_42;
                return l_835;


            }
        }

        ;
        (**l_557) = l_672;
    }

    ;
    ;
    ;
    ;
    ;

    return &g_42;


}







static int * func_46(int * p_47, int p_48, union U0 ** p_49)
{
    int l_60 = 0x632CAC24L;
    int *l_532 = &g_526.f1;
    int *l_533 = &g_133;
    for (g_4 = 5; (g_4 >= 25); g_4 = safe_add_func_int8_t_s_s(g_4, 8))
    {
        int *l_529 = &g_35;
        for (g_42.f1 = (-6); (g_42.f1 != 58); g_42.f1 = safe_add_func_uint16_t_u_u(g_42.f1, 1))
        {
            return &g_4;


        }

    }
    (*l_533) |= (*g_461);
    for (g_297 = 0; (g_297 >= 22); ++g_297)
    {
        unsigned short l_540 = 0x44C4L;
        char ***l_546 = &g_438;
        int **l_556 = &g_461;
        for (g_88 = 0; (g_88 < 41); g_88++)
        {
            char *l_545 = &g_77.f0;
            int l_553 = (-1L);
            (*l_533) &= (safe_lshift_func_int8_t_s_u(l_540, (((*g_461) || ((*l_532) = ((0x35993273L & (safe_add_func_int32_t_s_s((0xA7L && 0x15L), (((*l_545) = 0x97L) == (l_546 != (void*)0))))) < (*g_461)))) == g_297)));
            (*g_461) |= (safe_lshift_func_int16_t_s_s(0x84C3L, (!(safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((void*)0 == p_49), l_553)), 4)))));
            for (g_184 = 12; (g_184 >= 36); g_184 = safe_add_func_int32_t_s_s(g_184, 2))
            {
                (*l_533) &= (*g_461);
                (*l_533) ^= l_540;
            }
        }
        (*l_556) = &p_48;

        ;
    }

    ;
    (*l_533) ^= (*g_461);
    return &g_35;



}







static int func_55(unsigned char p_56, unsigned p_57, unsigned short p_58, unsigned p_59)
{
    unsigned char *l_61 = &g_62;
    union U0 *l_78 = &g_77;
    int l_84 = 3L;
    unsigned short *l_85 = (void*)0;
    unsigned short *l_86 = (void*)0;
    unsigned short *l_87 = &g_88;
    int *l_90 = &g_4;
    int **l_89 = &l_90;
    int ***l_527 = (void*)0;
    int ***l_528 = &l_89;
    if ((0L > ((*l_61) ^= g_42.f1)))
    {
        return g_4;
    }
    else
    {
        union U0 **l_63 = &g_41;
        int l_64 = (-1L);
        l_64 ^= (l_63 != &g_41);
    }
    (*l_528) = func_65(func_71(g_77, l_78, func_79(g_7.f1, l_78, ((*l_87) = (p_58 = l_84)), (p_56 && (0L || (l_89 != &l_90)))), p_56, (*g_41)), &l_78, (**l_89), g_7.f1, (**l_89));

        ;
    ;
    ;
    ;
    return p_59;
}







static int ** func_65(short p_66, union U0 ** p_67, unsigned short p_68, unsigned short p_69, char p_70)
{
    union U0 *l_413 = &g_77;
    union U1 *l_417 = (void*)0;
    int l_423 = 1L;
    char **l_440 = &g_439;
    int **l_485 = &g_461;
    union U1 ***l_487 = &g_357;
    unsigned *l_509 = &g_218;
    unsigned short **l_511 = (void*)0;
    unsigned l_522 = 0x5B78EF11L;
    for (g_184 = (-23); (g_184 > 6); g_184 = safe_add_func_int8_t_s_s(g_184, 7))
    {
        unsigned l_414 = 0x212B7B61L;
        for (g_218 = 0; (g_218 <= 11); g_218 = safe_add_func_uint8_t_u_u(g_218, 7))
        {
            int *l_416 = &g_4;
            int **l_415 = &l_416;
            (*l_415) = func_79(g_412, l_413, l_414, g_242);

            ;
            (**l_415) ^= p_68;
        }
    }
    if (g_242)
        goto lbl_418;
lbl_418:
    (*g_357) = l_417;
    if ((safe_mod_func_uint8_t_u_u((~(~(safe_rshift_func_int8_t_s_s(p_66, p_70)))), l_423)))
    {
        short l_468 = 0xD607L;
        union U0 l_491 = {0xD3L};
        for (g_282 = 0; (g_282 >= 14); ++g_282)
        {
            int *l_426 = &g_133;
            char *l_429 = &g_2;
            char **l_428 = &l_429;
            char ***l_427 = &l_428;
            (*l_426) = 0xEBAD6D55L;
            if (g_4)
                continue;
        }
        if ((*g_461))
        {
            if (((*g_461) = ((safe_unary_minus_func_int32_t_s((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((l_468 != l_468), 0)), 0x580ACE38L)))) & p_70)))
            {
                return l_485;


            }
            else
            {
                union U1 ***l_486 = &g_357;
                union U0 l_489 = {0xEFL};
                if (((l_486 = &g_357) == l_487))
                {
                    (*g_461) ^= p_69;
                }
                else
                {
                    unsigned l_488 = 6UL;
                    union U0 *l_490 = &l_489;
                    int *l_492 = &g_133;
                    int *l_493 = &l_423;
                    (*l_493) = ((*l_492) = ((**l_485) &= (l_488 & l_489.f0)));
                }
            }
        }
        else
        {
            (*l_485) = (*l_485);
        }
        return &g_461;


    }
    else
    {
        int ***l_504 = &l_485;
        union U0 l_516 = {8L};
        int *l_517 = &g_4;
        union U1 *l_525 = &g_526;
        l_423 &= (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(g_7.f1, (***l_504))) ^ p_68) != (***l_504)), g_62)), 1UL)) <= g_158), (***l_504)));
        if ((***l_504))
        {
            union U0 l_507 = {9L};
            unsigned *l_508 = &g_297;
            unsigned **l_510 = &l_509;
            unsigned short *l_513 = &g_7.f0;
            unsigned short **l_512 = &l_513;
            short *l_520 = &g_254;
            short **l_521 = &l_520;
            int **l_523 = &l_517;
            (**l_485) ^= p_68;
            (*g_461) = (safe_rshift_func_uint16_t_u_u(p_66, (**l_485)));
            if (g_62)
                goto lbl_524;
            return &g_461;


        }
        else
        {
lbl_524:
            (**l_485) = p_69;
            (*g_461) = (p_69 | ((*l_517) | (***l_504)));
        }
        l_525 = ((**l_487) = (void*)0);

        ;
    }
    return l_485;


}







static short func_71(union U0 p_72, union U0 * p_73, int * p_74, char p_75, union U0 p_76)
{
    int l_146 = 0L;
    int l_167 = 1L;
    int *l_195 = &g_35;
    unsigned short l_209 = 0UL;
    short l_361 = 0x3695L;
    union U0 ***l_371 = (void*)0;
    unsigned char *l_407 = &g_62;
    if (g_42.f0)
    {
        union U0 **l_136 = &g_41;
        short *l_159 = &g_151;
        int l_178 = 2L;
        union U1 *l_185 = &g_7;
        int l_219 = 1L;
        if (((*p_74) = 2L))
        {
            unsigned l_138 = 0UL;
            unsigned char *l_155 = (void*)0;
            unsigned char **l_154 = &l_155;
            union U0 *l_160 = &g_77;
            g_137 = l_136;

            ;
            if (l_138)
            {
                unsigned char l_145 = 0xF9L;
                g_35 |= (*p_74);
                for (g_35 = (-28); (g_35 >= 20); g_35 = safe_add_func_uint8_t_u_u(g_35, 6))
                {
                    short *l_149 = (void*)0;
                    short *l_150 = &g_151;
                    (*p_74) = (safe_mod_func_int16_t_s_s(g_62, (safe_mod_func_uint16_t_u_u(((l_145 & l_146) <= (g_62 & ((((*l_150) = p_76.f0) || (safe_rshift_func_int16_t_s_s(((l_154 == g_156) & (p_72.f0 >= l_146)), p_76.f1))) < p_75))), p_75))));
                    if ((((void*)0 != &g_41) <= (*g_157)))
                    {
                        g_158 &= (*p_74);
                    }
                    else
                    {
                        (*p_74) &= ((void*)0 != l_159);
                    }
                }
                (*p_74) = g_42.f0;
            }
            else
            {
                int *l_162 = &g_35;
                int **l_161 = &l_162;
                (*p_74) = (*p_74);
                (*l_161) = func_79(g_42.f0, l_160, g_62, p_72.f0);

                ;
                (*l_136) = (*l_136);
            }
            g_35 |= (safe_add_func_int8_t_s_s((((*p_74) >= 0xB28FCC98L) | (l_138 > (&p_72 != ((*g_137) = l_160)))), (safe_add_func_int16_t_s_s(g_42.f0, ((*l_159) ^= g_7.f0)))));

            ;
            (*p_74) ^= (l_167 = g_7.f1);
        }
        else
        {
lbl_283:
            for (l_146 = 27; (l_146 >= 5); l_146 = safe_sub_func_int16_t_s_s(l_146, 1))
            {
                if (g_4)
                {
                    short l_181 = 0x25EAL;
                    char *l_182 = &g_42.f0;
                    unsigned char *l_183 = &g_184;
                    if ((l_146 | ((*l_183) ^= (g_2 | (safe_sub_func_uint8_t_u_u(((**g_156) <= ((*l_182) ^= ((((*p_74) <= (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_7.f0, (p_76.f0 < ((g_151 < (l_178 |= 0x5EL)) != (safe_sub_func_uint8_t_u_u(((void*)0 == p_74), l_181)))))), p_76.f1)) ^ 0x455DL), p_76.f0))) | g_158) | p_75))), g_2))))))
                    {
                        union U1 **l_186 = &l_185;
                        (*l_186) = l_185;
                        (*p_74) &= l_146;
                    }
                    else
                    {
                        unsigned l_191 = 4294967295UL;
                        int *l_194 = &l_178;
                        if (g_2)
                            break;
                        (*l_194) |= (safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((l_191 == (safe_sub_func_uint32_t_u_u(0x8D7B0DA7L, (*p_74)))), g_184)), 5L));
                    }

                    return g_2;
                }
                else
                {
                    int l_196 = 4L;
                    union U0 *l_197 = &g_77;
                    int **l_198 = &l_195;
                    g_35 = (l_195 == (void*)0);
                    l_196 = g_158;
                    (*l_198) = func_79(l_178, l_197, p_72.f0, g_133);

                    ;
                    (*p_74) = ((safe_sub_func_int32_t_s_s(1L, ((*p_74) <= (g_88 < (g_133 >= g_77.f0))))) <= (*g_157));
                }

                ;
            }

lbl_255:
            (*p_74) |= (safe_sub_func_int16_t_s_s(l_178, g_42.f0));
        }

        ;
        ;
        ;
        (*l_195) = g_7.f0;
        for (g_42.f1 = 0; (g_42.f1 < 13); g_42.f1 = safe_add_func_int16_t_s_s(g_42.f1, 3))
        {
            int **l_207 = &l_195;
            (*l_207) = p_74;

            ;
        }

        if ((safe_unary_minus_func_int8_t_s(l_178)))
        {
lbl_210:
            (*l_195) = l_209;
        }
        else
        {
            unsigned char l_216 = 248UL;
            unsigned short *l_223 = (void*)0;
            int l_236 = 0x438CBB9BL;
            short l_265 = 0xFEEEL;
            short **l_286 = &l_159;
            union U0 **l_299 = &g_41;
            union U0 *l_305 = (void*)0;
            int *l_323 = &g_35;
            if ((((((void*)0 != &g_77) >= g_158) & g_42.f1) || g_77.f0))
            {
                int l_261 = 0xB575C4E6L;
                unsigned short *l_264 = &g_88;
                if (g_151)
                    goto lbl_210;
                for (g_151 = 0; (g_151 >= 23); ++g_151)
                {
                    unsigned short **l_222 = (void*)0;
                    unsigned short **l_224 = (void*)0;
                    unsigned short *l_226 = (void*)0;
                    unsigned short **l_225 = &l_226;
                    int *l_227 = &g_35;
                    char *l_234 = &g_77.f0;
                    union U1 **l_235 = &l_185;
                    int **l_269 = &l_195;
                    for (g_184 = 10; (g_184 == 55); g_184 = safe_add_func_uint8_t_u_u(g_184, 6))
                    {
                        int *l_215 = &l_178;
                        unsigned *l_217 = &g_218;
                        int *l_220 = &l_167;
                        (*l_220) &= ((l_219 = (((*l_215) |= (*p_74)) | ((*l_217) |= l_216))) ^ p_76.f1);
                        (*l_195) = 0x6F271719L;
                    }
                    l_178 ^= ((*l_227) |= ((*p_74) |= (safe_unary_minus_func_uint16_t_u((&g_88 == ((*l_225) = (l_223 = &l_209)))))));

                    ;
                    ;
                    if ((l_236 = ((((safe_rshift_func_uint8_t_u_s((**g_156), (safe_sub_func_int8_t_s_s(0L, (**g_156))))) < ((6L != ((*l_234) |= (((void*)0 != l_195) > g_42.f0))) <= (*l_227))) <= ((void*)0 == l_235)) > (*l_195))))
                    {
                        int **l_237 = &l_227;
                        (*l_237) = &g_35;
                    }
                    else
                    {
                        unsigned *l_238 = &g_218;
                        short *l_241 = &g_242;
                        short *l_253 = &g_254;
                        int l_260 = 0xC118C142L;
                        int *l_266 = (void*)0;
                        int *l_267 = (void*)0;
                        int *l_268 = &l_167;
                        (*l_195) = (*p_74);
                        (*p_74) = ((((((*l_238) = g_88) || (l_236 = ((safe_mod_func_uint16_t_u_u(5UL, ((*l_241) &= (~(g_88 || l_178))))) == (safe_sub_func_int16_t_s_s(0x9419L, (safe_rshift_func_int8_t_s_u(((*l_234) = ((*l_227) = (safe_add_func_uint16_t_u_u(g_7.f1, ((*l_253) = ((safe_mod_func_uint8_t_u_u((l_219 <= (*p_74)), (safe_rshift_func_uint8_t_u_u(p_76.f1, (**g_156))))) >= (-4L))))))), (*g_157)))))))) || p_76.f1) || 65529UL) || g_7.f0);
                        if (g_42.f0)
                            goto lbl_255;
                        (*l_268) &= ((g_151 != (safe_sub_func_int8_t_s_s(((g_218 >= (g_35 = ((safe_lshift_func_uint16_t_u_s(l_260, 12)) || (~(l_219 = (~l_261)))))) <= p_72.f0), ((safe_lshift_func_uint16_t_u_s(((*l_226) = 0x99FBL), (((*p_74) = (&g_88 == l_264)) <= l_265))) > l_178)))) | l_261);
                    }
                    (*l_269) = &g_133;

                    ;
                }

                ;
                (*l_195) |= g_88;
            }
            else
            {
                unsigned char l_281 = 0x53L;
                short ***l_287 = &l_286;
                unsigned *l_288 = &g_218;
                int l_298 = (-4L);
                if ((*p_74))
                {
                    g_282 |= (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(p_76.f0, ((*l_195) = (safe_mod_func_int16_t_s_s(p_76.f0, (safe_rshift_func_int16_t_s_s(((0xADL && (p_76.f1 >= g_280)) > l_281), (g_77.f0 ^ g_218)))))))), (g_158 || 1L))), p_76.f0));
                }
                else
                {
                    if (p_72.f0)
                        goto lbl_283;
                    for (g_280 = 0; (g_280 > 43); g_280++)
                    {
                        g_133 = g_133;
                        return g_4;
                    }
                }
                (*l_287) = l_286;
                if (((*p_74) &= (((*l_288) = g_254) < (-1L))))
                {
                    unsigned char l_291 = 0UL;
                    unsigned *l_296 = &g_297;
                    int l_308 = 1L;
                    int **l_317 = &l_195;
                    if ((safe_add_func_int8_t_s_s((0L ^ (l_291 = (*g_157))), (((*l_296) &= (safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(g_282, 10)) | (p_76.f1 < (-1L))), g_218))) != p_76.f0))))
                    {
                        union U0 ***l_300 = &g_137;
                        (*p_74) |= g_218;
                        l_298 |= (*p_74);
                        (*l_300) = l_299;

                        ;
                    }
                    else
                    {
                        int *l_303 = (void*)0;
                        int *l_304 = &l_298;
                        (*l_304) ^= (safe_rshift_func_uint8_t_u_s(0xC6L, (*l_195)));
                        (*l_304) ^= (((*g_157) = l_178) >= (l_303 == (p_74 = func_79(g_218, l_305, g_158, g_254))));
                    }
                    (*p_74) ^= ((safe_rshift_func_uint8_t_u_u(l_308, (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((+l_308), (safe_sub_func_int16_t_s_s(5L, (p_72.f0 >= l_265))))), p_75)))) || (safe_lshift_func_uint8_t_u_u((*g_157), l_265)));
                    l_308 &= (*l_195);
                    (*l_317) = p_74;

                    ;
                }
                else
                {
                    return p_76.f0;
                }

                ;
            }

            ;
            for (g_282 = 19; (g_282 == (-30)); --g_282)
            {
                int **l_320 = (void*)0;
                int **l_321 = &l_195;
                union U0 *l_322 = (void*)0;
                (*l_321) = (void*)0;

                ;
                (*l_136) = l_322;

                ;
            }

            ;
            ;
            (*l_323) = ((*p_74) ^= g_88);
        }

        ;
        ;
    }
    else
    {
        union U0 *l_324 = &g_42;
        int l_330 = 6L;
        int **l_331 = &l_195;
        char *l_355 = (void*)0;
        (*l_331) = func_79(((void*)0 == &g_7), l_324, g_280, (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(((void*)0 != &g_242))), ((*g_157) |= (safe_add_func_int32_t_s_s((&g_137 != (void*)0), (l_330 && p_76.f0)))))));

        ;
        if (g_280)
        {
            short *l_332 = &g_282;
            int l_333 = (-3L);
            int l_356 = 4L;
            (*l_195) = (((*l_332) = g_7.f0) ^ g_4);
            if (l_333)
            {
                unsigned short *l_335 = &g_88;
                unsigned short **l_334 = &l_335;
                char *l_342 = &g_42.f0;
                char **l_341 = &l_342;
                int *l_344 = &l_333;
                union U0 ***l_372 = (void*)0;
                if ((((*l_334) = &l_209) == (void*)0))
                {
                    int l_336 = 0xA0D6759DL;
                    g_35 = l_336;
                    for (l_146 = 16; (l_146 <= 19); l_146 = safe_add_func_int32_t_s_s(l_146, 7))
                    {
                        g_133 = g_280;
                    }
                    (**l_331) = l_336;
                }
                else
                {
                    union U1 **l_360 = &g_358;
                    union U1 ***l_359 = &l_360;
                    for (g_35 = 0; (g_35 < 18); g_35++)
                    {
                        char ***l_343 = &l_341;
                        (*l_343) = l_341;
                        if (g_184)
                            continue;
                        (*l_344) = (((*l_331) = l_344) != p_74);

                        ;
                        (*p_74) &= (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((p_76.f1 || (safe_rshift_func_uint8_t_u_u((**g_156), 7))), ((**l_331) && ((***l_343) &= (safe_lshift_func_uint8_t_u_u((((g_254 != 0x7810L) | ((((*l_195) = (!(safe_add_func_uint16_t_u_u((g_62 ^ ((g_2 && ((**l_334) = (((l_355 = &g_2) != (void*)0) >= p_76.f0))) && 0xCF27L)), g_7.f1)))) <= g_7.f1) < l_356)) <= g_35), 2)))))), 7));
                    }

                    ;
                    ;
                    l_361 = (p_76.f0 || (g_357 != ((*l_359) = &g_358)));
                    (*l_331) = &g_133;

                    ;
                }

                ;
                ;
                p_74 = &g_133;
                (*p_74) = ((g_254 ^ (*p_74)) < (((((**g_156) = (safe_mod_func_int16_t_s_s(0L, (safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_62, ((safe_rshift_func_int16_t_s_u(g_2, ((*g_156) != (g_370 = l_355)))) != ((l_371 != l_372) ^ 3UL)))), (**l_331)))))) > l_333) > 0x5181L) & p_72.f0));

                ;
                (*p_74) |= (g_297 ^ 0xD35FC89FL);
            }
            else
            {
                return p_72.f0;
            }

            ;
            ;
        }
        else
        {
            int *l_379 = &l_330;
            int *l_380 = &l_167;
            union U0 *l_383 = &g_42;
            char **l_384 = &l_355;
            int **l_398 = &l_379;
            char *l_406 = &g_77.f0;
            for (g_88 = (-8); (g_88 != 3); g_88 = safe_add_func_uint8_t_u_u(g_88, 5))
            {
                (*l_331) = p_74;

                ;
                if (g_4)
                {
                    union U0 **l_375 = &l_324;
                    (*l_375) = &p_72;

                    ;
                }
                else
                {
                    int *l_376 = &g_133;
                    l_376 = p_74;
                    for (g_242 = 19; (g_242 > (-16)); g_242 = safe_sub_func_uint16_t_u_u(g_242, 1))
                    {
                        (*l_195) = (-1L);
                        (*p_74) = (*p_74);
                        (*l_331) = p_74;

                        ;
                        (*l_331) = &l_167;

                        ;
                    }

                    ;
                    (*l_331) = l_379;

                    ;
                }

                ;
            }

            ;
            ;
            (*l_380) |= (*l_195);
            for (p_76.f1 = 0; (p_76.f1 <= 49); p_76.f1++)
            {
                char ***l_385 = (void*)0;
                char ***l_386 = &l_384;
                char l_397 = 0x33L;
                char l_402 = 0xBFL;
                (*l_331) = &g_4;

                ;
                (*l_379) |= 4L;
                (*l_331) = func_79(p_75, l_383, (**l_331), ((p_72.f0 >= (g_2 <= ((**l_331) < p_76.f1))) & (((&l_355 == ((*l_386) = l_384)) | (*l_379)) < p_75)));

                ;
                for (g_42.f0 = (-27); (g_42.f0 == (-15)); g_42.f0 = safe_add_func_int16_t_s_s(g_42.f0, 5))
                {
                    int ***l_399 = &l_398;
                    short *l_400 = &g_151;
                    union U0 *l_401 = &g_42;
                    (*l_331) = p_74;
                    if ((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((g_77.f0 = 3L), (((*l_400) ^= (p_75 > (safe_lshift_func_uint8_t_u_s(((**g_156) = ((safe_sub_func_int8_t_s_s(l_397, 1UL)) ^ (((*l_399) = l_398) == &l_195))), 7)))) <= (*l_195)))) && (*l_380)), g_218)))
                    {
                        (**l_399) = func_79(p_76.f0, l_401, l_402, g_77.f0);

                        ;
                        (**l_398) ^= (p_72.f0 && 0x4DF3L);
                        if ((*p_74))
                            break;
                    }
                    else
                    {
                        union U1 *l_403 = (void*)0;
                        (*g_357) = l_403;
                        (**l_399) = &g_35;

                        ;
                    }

                    ;
                }
            }

            ;
            (**l_398) = ((*l_380) ^= ((safe_rshift_func_int8_t_s_s(p_76.f0, ((*l_406) = (*l_195)))) ^ (l_407 == l_406)));
        }

        ;
        ;
        ;
        ;
        (*p_74) = g_242;
        (*l_331) = &g_35;

        ;
    }

    ;
    ;
    ;
    ;
    return g_151;
}







static int * func_79(short p_80, union U0 * p_81, unsigned short p_82, unsigned p_83)
{
    unsigned char l_95 = 0x49L;
    int l_98 = 0x0A61B3E2L;
    unsigned char l_113 = 0xBFL;
    union U0 **l_126 = &g_41;
    int *l_135 = &g_35;
    int **l_134 = &l_135;
    if (((safe_add_func_int32_t_s_s((0x52C43DA4L < (safe_add_func_int32_t_s_s(l_95, l_95))), (safe_sub_func_uint32_t_u_u(g_35, (l_98 = g_77.f0))))) != l_95))
    {
        char l_101 = 0x74L;
        int *l_104 = &g_35;
        unsigned char **l_107 = (void*)0;
        unsigned char *l_109 = (void*)0;
        unsigned char **l_108 = &l_109;
        unsigned char *l_112 = &l_95;
        (*l_104) &= (safe_sub_func_uint32_t_u_u(l_101, ((safe_mod_func_uint8_t_u_u(l_95, g_2)) || p_82)));
        l_98 = (g_7.f1 >= ((g_88 != ((*l_112) = (((((*l_104) = (0xD1L || (((*l_108) = &l_95) == &g_62))) < 4294967292UL) == (&l_104 == (void*)0)) ^ (safe_sub_func_int16_t_s_s((((0x296EF6A0L < p_83) == 0xDAD4DBF7L) > 0x62FFE2AAL), 65535UL))))) != l_113));

        ;
    }
    else
    {
        unsigned char l_118 = 0x79L;
        unsigned short *l_125 = &g_88;
        int *l_131 = (void*)0;
        int *l_132 = &g_133;
        (*l_132) &= (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_118, (safe_sub_func_uint32_t_u_u((g_77.f0 != (g_35 | (safe_lshift_func_int8_t_s_s((((*l_125) = g_4) == (((l_126 != (void*)0) <= ((safe_add_func_uint32_t_u_u((((~(safe_mod_func_uint32_t_u_u((p_80 <= (l_113 < p_80)), l_98))) != l_118) & 4294967295UL), p_83)) == 0x1BL)) <= l_113)), 4)))), 0x306C0CD1L)))), p_80));
    }
    (*l_134) = &g_4;

    ;
    return &g_133;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f1, "g_7.f1", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_526.f0, "g_526.f0", print_hash_value);
    transparent_crc(g_526.f1, "g_526.f1", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_744, "g_744", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_955, "g_955", print_hash_value);
    transparent_crc(g_960, "g_960", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
