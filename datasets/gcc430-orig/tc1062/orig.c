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
   unsigned f0 : 11;
   unsigned f1 : 20;
   int f2;
   signed f3 : 14;
};

struct S1 {
   signed f0 : 28;
   signed f1 : 17;
};


static int g_18 = 3L;
static short g_41 = 0x7A9BL;
static struct S1 g_59 = {-15646,91};
static struct S0 g_69 = {17,169,1L,-31};
static short *g_71 = &g_41;
static short **g_70 = &g_71;
static char g_81 = 0xF2L;
static int g_98 = (-2L);
static int *g_97 = &g_98;
static struct S0 g_101 = {41,124,1L,-44};
static unsigned short g_147 = 0xC386L;
static unsigned short *g_150 = &g_147;
static unsigned char g_152 = 0x11L;
static unsigned char g_154 = 0x49L;
static short *g_183 = (void*)0;
static unsigned g_204 = 4294967295UL;
static unsigned g_206 = 0xB4F352AAL;
static int *g_219 = &g_98;
static unsigned *g_229 = &g_206;
static unsigned **g_228 = &g_229;
static short g_233 = 0xC0A4L;
static unsigned short g_234 = 0x6018L;
static struct S0 g_235 = {14,990,0x2DD3FA25L,-105};
static char *g_239 = &g_81;
static char **g_238 = &g_239;
static short *g_289 = &g_233;



static int func_1(void);
static char func_5(unsigned long long p_6, short p_7, unsigned char p_8, unsigned p_9, unsigned p_10);
static unsigned char func_15(unsigned char p_16, int p_17);
static char func_19(unsigned p_20, struct S1 p_21);
static long long func_24(unsigned p_25, short p_26, struct S0 p_27, int p_28);
static char func_31(long long p_32, short p_33, int p_34, short p_35, char p_36);
static unsigned long long func_45(int p_46);
static int func_47(short * p_48, int p_49, long long p_50, short * p_51, short * p_52);
static short * func_53(short * p_54, short * p_55, unsigned char p_56, struct S1 p_57, short * p_58);
static short * func_65(short * p_66, struct S0 p_67);
static int func_1(void)
{
    unsigned char l_4 = 0x6BL;
    short *l_39 = (void*)0;
    short *l_40 = &g_41;
    int l_42 = 1L;
    unsigned short l_217 = 0x8A9BL;
    int *l_221 = &g_69.f2;
    int *l_232 = &g_98;
    short l_292 = 0x9DA5L;
    short l_301 = 0x5214L;
    unsigned l_306 = 0UL;
    int l_311 = 0x380ACB09L;
    short *l_312 = &g_233;
    l_301 = ((*l_232) = (safe_mod_func_int64_t_s_s(4L, (l_4 ^ func_5(((((-1L) >= 3UL) >= l_4) & (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(func_15(g_18, (((*g_239) = func_19(((safe_add_func_int64_t_s_s(func_24((g_233 = ((((*l_232) = (((*l_221) = ((safe_add_func_uint16_t_u_u((func_31((safe_lshift_func_uint8_t_u_s((((((g_18 >= (l_42 = ((*l_40) = l_4))) && (safe_sub_func_uint64_t_u_u(func_45(((*l_221) = func_47((l_39 = func_53(&g_41, &g_41, g_41, g_59, &g_41)), l_42, l_217, g_183, l_40))), 0xDDA54EEA5D277E2DLL))) == l_217) || 251UL) & g_18), 0)), g_59.f0, g_69.f0, g_69.f3, g_59.f1) ^ g_69.f0), g_69.f0)) & l_4)) < l_217)) && (*l_221)) != g_69.f1)), g_234, g_235, g_235.f1), g_69.f3)) || (*l_221)), g_59)) == g_234)), g_69.f1)), g_69.f1))), l_292, g_69.f0, g_69.f3, g_69.f0)))));

    ;
    ;

    ;

    ;
    (*l_232) = (safe_rshift_func_uint8_t_u_s(((*l_232) <= ((((*l_221) & ((safe_mul_func_int16_t_s_s(((l_306 = (*g_289)) && (((*g_229) = ((func_47(&l_292, ((safe_lshift_func_int16_t_s_u(0x9246L, (g_101.f0 | 0x19E41943C4930A91LL))) && ((*l_221) | (safe_add_func_int16_t_s_s(func_5(g_235.f2, (*l_221), g_101.f1, (*l_232), l_311), (*l_232))))), g_101.f3, &l_301, l_312) > (*l_221)) < g_233)) && (*l_221))), g_235.f0)) >= (*l_221))) != g_69.f0) != (*l_232))), (*g_239)));
    return (*l_232);
}







static char func_5(unsigned long long p_6, short p_7, unsigned char p_8, unsigned p_9, unsigned p_10)
{
    int *l_293 = (void*)0;
    int **l_294 = &l_293;
    unsigned char *l_297 = &g_152;
    unsigned long long l_298 = 0UL;
    struct S0 *l_299 = (void*)0;
    int *l_300 = (void*)0;
    (*l_294) = l_293;
    if ((safe_rshift_func_uint8_t_u_u(((*l_297) = (p_9 & (0x6EL ^ (*g_239)))), func_24(l_298, ((void*)0 != l_299), g_235, g_235.f2))))
    {
        (*l_294) = &g_18;

        ;
        l_299 = &g_69;

        ;
        (*l_294) = l_300;

        ;
    }
    else
    {
        return p_10;
    }

    ;
    (*l_294) = &g_98;

    ;
    return (*l_293);
}







static unsigned char func_15(unsigned char p_16, int p_17)
{
    int *l_246 = &g_18;
    unsigned long long l_253 = 0x3259E9505AA5BBA2LL;
    unsigned char *l_254 = &g_154;
    short *l_290 = (void*)0;
    unsigned char l_291 = 0xB4L;
    (*l_246) = p_16;
    l_246 = &g_18;
    if ((safe_mul_func_int8_t_s_s((0x955504D00D91C5D0LL && (safe_mod_func_int16_t_s_s(0xD735L, (safe_mul_func_int16_t_s_s((+(-6L)), l_253))))), ((*l_254) = g_81))))
    {
        struct S0 *l_255 = (void*)0;
        struct S0 *l_256 = &g_101;
        char **l_257 = (void*)0;
        char ***l_258 = (void*)0;
        char ***l_259 = &g_238;
        int l_268 = 0xF84ECE7DL;
        short *l_269 = (void*)0;
        (*l_256) = g_69;
        if ((((*l_259) = l_257) == (void*)0))
        {
            struct S1 l_260 = {5362,93};
            struct S1 *l_261 = &g_59;
            struct S1 *l_262 = &l_260;
            (*l_256) = (*l_256);
            (*l_262) = ((*l_261) = l_260);
        }
        else
        {
            int *l_265 = (void*)0;
            int **l_267 = &l_265;
            short **l_283 = (void*)0;
            for (g_147 = 0; (g_147 == 24); g_147++)
            {
                int **l_266 = &g_219;
                (*l_266) = l_265;

                ;
            }


            (*l_267) = (void*)0;
            if (((*l_246) = func_47((*g_70), ((*g_228) == l_265), ((p_17 = (0x665EL >= l_268)) != (*l_246)), l_269, (*g_70))))
            {
                return p_16;
            }
            else
            {
                struct S1 l_279 = {14985,106};
                int l_280 = (-1L);
                for (g_101.f2 = 12; (g_101.f2 < 22); g_101.f2++)
                {
                    unsigned l_274 = 1UL;
                    for (g_69.f2 = 0; (g_69.f2 != (-27)); g_69.f2 = safe_sub_func_uint64_t_u_u(g_69.f2, 4))
                    {
                        unsigned short *l_275 = (void*)0;
                        unsigned short *l_276 = (void*)0;
                        unsigned short *l_277 = &g_147;
                        int l_281 = 0x1D17AEBFL;
                        struct S0 **l_282 = &l_255;
                        p_17 = ((l_280 = ((-8L) == ((((*l_254) = 0xC3L) || p_16) <= (((*l_277) = l_274) & func_19((safe_unary_minus_func_int64_t_s(0x10A6EAA2CC3962B6LL)), l_279))))) && ((((*l_277) = (l_279.f0 ^ (~l_268))) || 0x5CCBL) || l_281));
                        if (p_16)
                            break;
                        (*l_282) = l_255;
                        (*l_267) = &g_18;

                        ;
                    }
                }

                ;
                (*l_246) = (l_283 != &g_183);
                g_97 = &l_268;

                ;
                (*l_267) = &l_268;

                ;
            }

            ;

            ;
        }

        ;
        ;
        (*l_246) = (safe_unary_minus_func_int64_t_s((safe_rshift_func_uint8_t_u_s(p_17, p_17))));
    }
    else
    {
        int **l_287 = &l_246;
        short *l_288 = (void*)0;
        (*l_246) = (*l_246);
        (*l_287) = &p_17;

        ;
        (*l_246) = func_47((l_288 = l_288), (**l_287), (((**g_228) = 0x43421533L) | (**l_287)), g_289, l_290);


    }


    ;
    ;
    return l_291;
}







static char func_19(unsigned p_20, struct S1 p_21)
{
    struct S0 *l_242 = &g_235;
    int *l_243 = (void*)0;
    int **l_244 = &l_243;
    int **l_245 = &g_97;
    (*l_242) = g_69;
    (*l_245) = ((*l_244) = l_243);

    ;
    return p_21.f1;
}







static long long func_24(unsigned p_25, short p_26, struct S0 p_27, int p_28)
{
    int *l_236 = (void*)0;
    int *l_237 = &g_101.f2;
    char ***l_240 = &g_238;
    int l_241 = (-1L);
    (*l_237) = (0UL | 0x5E46L);
    (*l_240) = g_238;
    (*l_237) = g_59.f1;
    return l_241;
}







static char func_31(long long p_32, short p_33, int p_34, short p_35, char p_36)
{
    unsigned *l_224 = &g_206;
    unsigned *l_226 = &g_206;
    unsigned **l_225 = &l_226;
    int l_227 = 0x88F903EAL;
    unsigned ***l_230 = &g_228;
    int *l_231 = &g_101.f2;
    (*l_231) = (safe_sub_func_uint32_t_u_u(((l_224 == ((*l_225) = l_224)) <= l_227), (((*l_230) = g_228) != &g_229)));
    return p_35;
}







static unsigned long long func_45(int p_46)
{
    return p_46;
}







static int func_47(short * p_48, int p_49, long long p_50, short * p_51, short * p_52)
{
    int **l_218 = &g_97;
    long long l_220 = 0x59A9D03927B1F488LL;
    p_49 = (~(+p_49));
    g_219 = ((*l_218) = &p_49);

    ;
    ;
    (*l_218) = (void*)0;

    ;
    return l_220;


}







static short * func_53(short * p_54, short * p_55, unsigned char p_56, struct S1 p_57, short * p_58)
{
    unsigned char l_62 = 0UL;
    short *l_68 = (void*)0;
    short **l_181 = &l_68;
    short **l_182 = &g_71;
    struct S0 l_191 = {26,971,0x9B62C093L,89};
    int *l_197 = &g_101.f2;
    unsigned short **l_201 = (void*)0;
    int *l_208 = &l_191.f2;
    p_57.f0 = (safe_add_func_int64_t_s_s(l_62, (safe_mod_func_int16_t_s_s((((*l_182) = ((*l_181) = func_65(l_68, g_69))) != g_183), g_18))));

    ;
    ;
    ;
    ;
    for (g_69.f2 = 12; (g_69.f2 <= 12); g_69.f2 = safe_add_func_int64_t_s_s(g_69.f2, 5))
    {
        struct S0 *l_192 = &l_191;
        int *l_193 = (void*)0;
        int **l_194 = (void*)0;
        int **l_195 = &g_97;
        int **l_196 = (void*)0;
        unsigned short **l_200 = (void*)0;
        unsigned short ***l_202 = &l_201;
        unsigned *l_203 = &g_204;
        unsigned *l_205 = &g_206;
        short *l_207 = &g_41;
        for (g_147 = (-20); (g_147 >= 43); g_147 = safe_add_func_int32_t_s_s(g_147, 7))
        {
            int *l_188 = &g_98;
            struct S1 *l_190 = &g_59;
            struct S1 **l_189 = &l_190;
            (*l_188) = p_57.f1;
            (*l_189) = &p_57;

            ;
            (*l_188) = (&g_98 == &g_98);
        }
        (*l_192) = l_191;
        l_197 = ((*l_195) = l_193);

        ;
        ;
        if ((safe_mod_func_uint32_t_u_u(((*l_205) = ((*l_203) = (l_200 != ((*l_202) = l_201)))), p_56)))
        {
            return l_207;


        }
        else
        {
            int ***l_209 = (void*)0;
            int ***l_210 = &l_195;
            (*l_195) = l_208;

            ;
            (*l_208) = (((*l_210) = &g_97) != (void*)0);
        }

        ;
    }

    ;
    ;
    for (g_101.f2 = 0; (g_101.f2 == 0); g_101.f2 = safe_add_func_uint32_t_u_u(g_101.f2, 5))
    {
        struct S1 l_213 = {-8873,-39};
        int *l_214 = &g_18;
        int **l_215 = &l_208;
        short *l_216 = &g_41;
        l_213 = g_59;
        (*l_215) = l_214;

        ;
        return l_216;



    }
    return p_58;



}







static short * func_65(short * p_66, struct S0 p_67)
{
    unsigned short l_72 = 8UL;
    struct S1 *l_90 = (void*)0;
    int *l_106 = &g_69.f2;
    unsigned short *l_146 = &g_147;
    g_70 = g_70;
    if ((l_72 != l_72))
    {
        int **l_73 = (void*)0;
        int *l_75 = (void*)0;
        int **l_74 = &l_75;
        char *l_80 = &g_81;
        (*l_74) = &g_18;

        ;
        if ((safe_mod_func_uint32_t_u_u((((p_67.f0 & (0x9CL && ((safe_mod_func_int16_t_s_s(p_67.f3, 65535UL)) <= (((*l_80) = p_67.f0) || l_72)))) >= g_69.f2) || (((safe_lshift_func_int16_t_s_u((*g_71), 4)) & (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(g_81, l_72)), g_18)), 5))) != (**l_74))), g_69.f3)))
        {
            struct S1 **l_91 = (void*)0;
            struct S1 **l_92 = &l_90;
            int *l_103 = &g_101.f2;
            (*l_92) = l_90;
            for (g_69.f2 = 14; (g_69.f2 != 7); g_69.f2--)
            {
                struct S0 *l_96 = (void*)0;
                struct S0 **l_95 = &l_96;
                int l_99 = (-4L);
                short *l_100 = &g_41;
                (*l_95) = &p_67;

                ;
                g_97 = &g_18;

                ;
                if ((g_41 <= ((*l_80) = p_67.f0)))
                {
                    if ((l_99 == (((*g_70) = (void*)0) == l_100)))
                    {
                        g_101 = p_67;
                    }
                    else
                    {
                        int *l_102 = &l_99;
                        (*l_102) = p_67.f0;
                        l_103 = (void*)0;

                        ;
                    }

                    ;
                    (*l_96) = g_101;
                }
                else
                {
                    int **l_104 = (void*)0;
                    int **l_105 = &g_97;
                    (*l_74) = (void*)0;

                    ;
                    (*l_105) = ((*l_74) = (void*)0);

                    ;
                }

                ;
            }

            ;
            ;
            ;
            ;
            (*l_74) = l_106;

            ;
            (*l_75) = p_67.f2;
        }
        else
        {
            unsigned l_109 = 0UL;
            int **l_135 = &l_75;
            for (g_98 = 5; (g_98 >= 15); g_98++)
            {
                unsigned short l_115 = 1UL;
                int l_120 = 1L;
                (*l_106) = l_109;
                (*l_74) = &g_98;

                ;
                for (g_81 = (-12); (g_81 < (-20)); g_81 = safe_sub_func_uint32_t_u_u(g_81, 5))
                {
                    struct S0 *l_113 = &g_69;
                    struct S0 **l_112 = &l_113;
                    short ***l_114 = &g_70;
                    int l_119 = 0xCAF05E37L;
                    int **l_137 = &l_75;
                    (*l_112) = &g_101;

                    ;
                    if ((l_115 = ((((*l_114) = &g_71) == (void*)0) <= (**l_74))))
                    {
                        int *l_116 = &g_18;
                        (*l_74) = l_116;

                        ;
                        l_120 = ((safe_lshift_func_uint16_t_u_u(l_119, (*l_106))) >= g_101.f0);
                    }
                    else
                    {
                        int ***l_136 = &l_73;
                        struct S1 **l_140 = &l_90;
                        (*l_74) = &l_120;

                        ;
                        (*l_106) = ((l_119 < (l_109 > (safe_add_func_uint8_t_u_u((0x780EC7D236808710LL >= (safe_sub_func_int16_t_s_s(1L, (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_120 = (g_101.f3 > (l_109 > (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((*l_136) = l_135) == l_137), (((safe_mod_func_uint64_t_u_u(p_67.f3, g_59.f0)) > p_67.f0) <= (*l_106)))), 11)), g_98))))), 6)), 5))))), g_69.f2)))) && 1UL);

                        ;
                        (*l_140) = l_90;
                    }

                    ;
                    (*l_137) = &g_98;

                    ;
                }
            }

            ;
            ;
        }

        ;
        ;
        ;
        ;
        return (*g_70);


    }
    else
    {
        int *l_141 = &g_101.f2;
        int **l_142 = &l_141;
        unsigned char l_156 = 1UL;
        struct S1 **l_166 = &l_90;
        short *l_169 = &g_41;
        struct S1 l_179 = {-12511,-243};
        (*l_142) = l_141;
        if ((l_106 == ((*l_142) = &g_18)))
        {
            unsigned short *l_145 = &l_72;
            unsigned short *l_149 = &g_147;
            unsigned short **l_148 = &l_149;
            unsigned char *l_151 = &g_152;
            unsigned char *l_153 = &g_154;
            int l_155 = (-6L);
            if ((((((*l_153) = (+((*l_151) = (safe_mul_func_uint16_t_u_u(((*l_145) = 1UL), ((*g_71) = ((l_146 == (g_150 = ((*l_148) = p_66))) | g_101.f0))))))) <= 253UL) < (g_81 == 0x0DL)) & (((l_155 == l_156) == g_147) == (*l_141))))
            {
                int *l_159 = (void*)0;
                if ((l_155 <= ((void*)0 == &g_59)))
                {
                    char l_160 = 1L;
                    for (g_101.f2 = 0; (g_101.f2 != (-26)); g_101.f2 = safe_sub_func_int32_t_s_s(g_101.f2, 1))
                    {
                        struct S1 **l_167 = &l_90;
                        int l_168 = 0x537EA6E2L;
                        (*l_142) = l_159;

                        ;
                        (*l_106) = l_160;
                        (*g_97) = ((safe_add_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(l_160)), ((g_152 & (safe_sub_func_uint8_t_u_u(((-9L) != (((*l_106) || (((0xBDL <= l_160) <= g_69.f3) ^ p_67.f3)) && (l_166 == l_167))), 0L))) >= l_168))) <= l_168);
                    }

                    ;
                    return l_169;


                }
                else
                {
                    (*l_106) = (*g_97);
                    return p_66;


                }
            }
            else
            {
                unsigned short *l_177 = &g_147;
                int l_178 = 1L;
                for (p_67.f2 = 0; (p_67.f2 == (-15)); --p_67.f2)
                {
                    for (l_155 = 0; (l_155 >= 26); l_155 = safe_add_func_uint8_t_u_u(l_155, 6))
                    {
                        struct S0 *l_174 = &g_101;
                        (*l_174) = p_67;
                        (*l_142) = l_106;

                        ;
                        (*l_106) = (*g_97);
                        (*l_141) = ((safe_lshift_func_int8_t_s_s(((void*)0 == l_177), g_18)) != l_178);
                    }
                    if ((*g_97))
                        continue;
                }

                ;
            }

            ;
            ;
            ;
            (*l_142) = l_106;

            ;
            return (*g_70);


        }
        else
        {
            struct S1 *l_180 = &l_179;
            (*l_142) = (void*)0;

            ;
            (*l_180) = l_179;
            (*l_142) = l_106;

            ;
            (*l_142) = (*l_142);
        }

        ;
    }
    (*l_106) = p_67.f3;
    return (*g_70);


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_69.f1, "g_69.f1", print_hash_value);
    transparent_crc(g_69.f2, "g_69.f2", print_hash_value);
    transparent_crc(g_69.f3, "g_69.f3", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_101.f0, "g_101.f0", print_hash_value);
    transparent_crc(g_101.f1, "g_101.f1", print_hash_value);
    transparent_crc(g_101.f2, "g_101.f2", print_hash_value);
    transparent_crc(g_101.f3, "g_101.f3", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_235.f0, "g_235.f0", print_hash_value);
    transparent_crc(g_235.f1, "g_235.f1", print_hash_value);
    transparent_crc(g_235.f2, "g_235.f2", print_hash_value);
    transparent_crc(g_235.f3, "g_235.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
