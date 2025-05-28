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
   unsigned char f1;
   unsigned f2;
   unsigned short f3;
   int f4;
   int f5;
   unsigned short f6;
   char f7;
   unsigned char f8;
};

union U1 {
   short f0;
   char f1;
};


static struct S0 g_7 = {65535UL,248UL,0x1D21F1EBL,0x2A83L,0xD26EC17EL,-4L,65535UL,0x96L,0x77L};
static struct S0 *g_6 = &g_7;
static unsigned g_10 = 4294967295UL;
static struct S0 g_24 = {0x7FC0L,255UL,1UL,65533UL,-8L,0L,0x2C4EL,0x0AL,0x17L};
static struct S0 *g_23 = &g_24;
static unsigned g_57 = 0x3202F603L;
static int g_66 = 0x005767A0L;
static int *g_68 = &g_66;
static int **g_67 = &g_68;
static union U1 g_117 = {-4L};
static union U1 *g_116 = &g_117;
static struct S0 *g_124 = (void*)0;
static struct S0 **g_123 = &g_124;
static int g_148 = 0x331E6C26L;
static unsigned *g_152 = (void*)0;
static unsigned **g_151 = &g_152;
static struct S0 **g_187 = &g_124;
static unsigned short *g_213 = &g_7.f0;
static unsigned short **g_212 = &g_213;
static unsigned short ***g_211 = &g_212;
static int g_284 = 0x6312C1E3L;
static unsigned short g_286 = 0x6611L;
static struct S0 *g_303 = (void*)0;
static struct S0 g_339 = {0UL,0x37L,3UL,0UL,0L,0x5DF68B05L,65535UL,0x9BL,247UL};
static int g_352 = (-10L);
static char **g_381 = (void*)0;
static unsigned g_400 = 0xDDFA5272L;
static unsigned char *g_497 = &g_339.f1;
static short g_532 = 1L;
static int g_539 = 0L;
static unsigned g_556 = 0UL;
static struct S0 *g_565 = (void*)0;
static unsigned g_585 = 4UL;



static short func_1(void);
static struct S0 * func_2(unsigned p_3, unsigned p_4, unsigned p_5);
static struct S0 * func_17(struct S0 * p_18, struct S0 * p_19, unsigned char p_20, int p_21);
static unsigned func_26(struct S0 * p_27, unsigned p_28);
static int func_32(union U1 p_33, int p_34, union U1 p_35, struct S0 ** p_36);
static union U1 func_38(struct S0 * p_39, unsigned p_40, union U1 p_41);
static struct S0 * func_42(unsigned p_43, struct S0 * p_44, int p_45);
static struct S0 * func_46(char p_47);
static int * func_48(struct S0 ** p_49);
static struct S0 ** func_50(short p_51, unsigned p_52, char p_53, char p_54);
static short func_1(void)
{
    struct S0 *l_8 = &g_7;
    int l_9 = (-1L);
    (*g_123) = func_2((g_6 == l_8), g_7.f1, l_9);

    ;
    ;

    ;
    ;
    ;

    ;
    ;
    return g_585;
}







static struct S0 * func_2(unsigned p_3, unsigned p_4, unsigned p_5)
{
    struct S0 *l_22 = &g_7;
    unsigned char l_474 = 0xFFL;
    union U1 l_475 = {0xA171L};
    short *l_510 = &g_117.f0;
    int **l_521 = &g_68;
    unsigned char ***l_540 = (void*)0;
    unsigned char l_546 = 0xFAL;
    unsigned *l_559 = &g_24.f2;
    unsigned short ***l_577 = (void*)0;
    g_10 = p_3;
    for (g_7.f4 = 24; (g_7.f4 >= (-6)); g_7.f4--)
    {
        int l_16 = 0L;
        struct S0 *l_25 = &g_7;
        int l_31 = 0x3C12D493L;
        unsigned char *l_499 = (void*)0;
        int l_506 = (-1L);
        struct S0 *l_507 = &g_24;
        if ((&g_7 != (void*)0))
        {
            struct S0 **l_13 = (void*)0;
            struct S0 **l_14 = &g_6;
            char l_15 = 8L;
            struct S0 **l_467 = &g_303;
            struct S0 *l_468 = (void*)0;
            int *l_469 = &l_31;
            union U1 l_476 = {-9L};
            union U1 **l_478 = &g_116;
            union U1 ***l_477 = &l_478;
            (*l_469) = ((((((*l_14) = &g_7) != &g_7) >= (l_16 = l_15)) | (((*l_467) = func_17((g_23 = l_22), l_25, p_4, ((0x7D77FC7DL || func_26(l_22, (safe_mod_func_int8_t_s_s((l_31 >= g_24.f5), p_3)))) | p_3))) != l_468)) > 0xFBA7L);

            ;
            ;


            ;

            ;
            ;
            (*g_68) = (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((l_474 ^ ((*l_469) <= 0x21L)), p_3)), 9UL));
            (*l_477) = &g_116;
            return l_22;


        }
        else
        {
            struct S0 *l_479 = (void*)0;
            char *l_490 = &l_475.f1;
            char **l_489 = &l_490;
            struct S0 l_492 = {0xBCCCL,1UL,0xFD9418C2L,0x2A27L,-1L,0x18A096DBL,65535UL,0x74L,0xE6L};
            int *l_511 = (void*)0;
            union U1 **l_549 = &g_116;
            if (p_4)
            {
                struct S0 **l_480 = &g_124;
                l_479 = l_479;
                (*g_67) = func_48(l_480);

                ;
                if (l_31)
                {
                    (*g_68) = (safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((!(*g_68)), (**g_67))), (((void*)0 != &l_474) > g_284)));
                    (*g_68) = ((p_4 || (((**g_212) = (0xFDA2L == p_5)) <= ((safe_sub_func_uint32_t_u_u((p_4 < (p_5 && (safe_add_func_uint32_t_u_u(p_5, ((0x63FF3509L & (l_489 != g_381)) || p_3))))), p_4)) == p_5))) >= 4294967295UL);
                    (**g_67) = p_4;
                }
                else
                {
                    struct S0 l_491 = {0UL,247UL,1UL,0xDB4AL,5L,0xC15DDF59L,0x6892L,0x12L,2UL};
                    l_491 = l_491;
                    (*g_67) = func_48(&l_25);
                    l_492 = (*g_23);
                }
                for (g_7.f2 = 4; (g_7.f2 > 20); ++g_7.f2)
                {
                    (**g_67) = 0xB9E65F1AL;
                    l_31 = (*g_68);
                }
            }
            else
            {
                struct S0 *l_502 = &g_7;
                union U1 l_503 = {-7L};
                for (g_339.f4 = (-23); (g_339.f4 >= (-27)); g_339.f4--)
                {
                    unsigned char **l_498 = &g_497;
                    int l_501 = (-2L);
                    union U1 l_504 = {0L};
                    struct S0 *l_505 = &l_492;
                    (*g_68) = (((*l_498) = g_497) == l_499);
                    l_25 = func_42(p_4, func_42((safe_unary_minus_func_int8_t_s(func_32(func_38(func_42(l_501, func_42(p_5, l_502, p_5), l_501), p_5, l_503), l_492.f2, l_504, &g_23))), l_505, p_4), l_506);

                    ;
                    ;
                    ;
                    l_507 = l_22;

                    ;
                }

                ;
                ;
            }

            ;
            ;
            for (l_475.f1 = 0; (l_475.f1 < 2); l_475.f1 = safe_add_func_uint16_t_u_u(l_475.f1, 2))
            {
                char l_537 = 0L;
                struct S0 *l_547 = &l_492;
                int *l_548 = &l_31;
            }
            (*l_549) = (void*)0;

            ;
        }

        ;

        ;
    }

    ;
    ;
    ;
        if (((((((((~((safe_add_func_uint32_t_u_u((**l_521), ((p_4 <= (((((void*)0 == &g_532) < ((*l_559) = ((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((!(&g_117 == (void*)0)) == g_556), (safe_add_func_uint16_t_u_u(p_5, ((**l_521) <= 0x8B9D4ABBL))))), p_5)) & (-3L)))) ^ 1L) & (***g_211))) || (**l_521)))) & (**l_521))) | (**l_521)) || (**g_67)) || g_400) & (**l_521)) || 8L) || p_3) ^ p_5))
    {
        int *l_560 = (void*)0;
        int *l_561 = (void*)0;
        int *l_562 = &g_66;
        struct S0 *l_566 = &g_24;
        int l_569 = 8L;
        int l_576 = 9L;
        unsigned short ****l_578 = (void*)0;
        unsigned short ****l_579 = &g_211;
        char *l_582 = &l_475.f1;
        char *l_583 = &g_339.f7;
        (*l_521) = func_48(&l_22);

        ;
        (*l_562) = ((**g_67) = (&g_117 == (void*)0));
        for (p_5 = 14; (p_5 >= 38); p_5 = safe_add_func_uint8_t_u_u(p_5, 4))
        {
            char l_570 = 0x1AL;
            union U1 l_571 = {0x210BL};
            (*l_562) = func_32(func_38(func_17(g_565, l_566, ((-8L) && (safe_mul_func_int16_t_s_s(((p_3 <= 0x8AL) == ((((p_4 & (*g_68)) || ((***g_211) = (***g_211))) < l_569) || 6UL)), (*l_562)))), g_339.f2), l_570, l_475), l_570, l_571, &l_566);

            ;
            if (l_571.f1)
                break;
            if ((**l_521))
                continue;
            (*l_22) = (*l_566);
        }
        l_566 = l_566;
    }
    else
    {
        int *l_584 = (void*)0;
        (*l_521) = l_584;

        ;
        (*l_521) = (*g_67);
    }

    ;
    (*g_6) = (*l_22);
    return l_22;


}







static struct S0 * func_17(struct S0 * p_18, struct S0 * p_19, unsigned char p_20, int p_21)
{
    struct S0 l_464 = {0xDF4BL,0UL,4294967295UL,1UL,0xCFA25ABAL,1L,0UL,0x34L,254UL};
    struct S0 *l_465 = &g_339;
    int **l_466 = (void*)0;
    (*l_465) = l_464;
    (*l_465) = (*p_19);
    g_68 = func_48(&l_465);

    ;
    return p_19;


}







static unsigned func_26(struct S0 * p_27, unsigned p_28)
{
    union U1 l_37 = {0xA52BL};
    unsigned *l_399 = &g_400;
    union U1 l_410 = {-6L};
    int **l_463 = &g_68;
    if (func_32(l_37, l_37.f1, (l_410 = func_38(func_42(l_37.f0, func_46(g_24.f0), g_7.f4), ((*l_399) = 0x350B8165L), l_37)), g_187))
    {
        return p_28;
    }
    else
    {
        unsigned char l_446 = 0xC5L;
        int l_447 = 0L;
        int l_453 = 0L;
        int **l_462 = &g_68;
        for (g_339.f2 = 0; (g_339.f2 < 7); ++g_339.f2)
        {
            union U1 l_440 = {-1L};
            for (g_117.f0 = 6; (g_117.f0 <= (-7)); g_117.f0 = safe_sub_func_uint8_t_u_u(g_117.f0, 4))
            {
                int l_428 = 0xA62F4CE8L;
                unsigned char l_429 = 0x79L;
                unsigned ***l_430 = &g_151;
                unsigned **l_432 = &g_152;
                unsigned ***l_431 = &l_432;
                int *l_437 = &g_66;
                union U1 l_441 = {8L};
                short *l_442 = (void*)0;
                short *l_443 = &l_441.f0;
                unsigned char *l_448 = &g_7.f8;
                (*g_68) = (((safe_lshift_func_uint16_t_u_u(0UL, 0)) && l_428) || (l_429 > (((*l_431) = ((*l_430) = (void*)0)) == (void*)0)));

                ;
                for (l_410.f1 = 0; (l_410.f1 >= 29); ++l_410.f1)
                {
                    if (p_28)
                        break;
                    for (g_24.f6 = 0; (g_24.f6 != 40); g_24.f6 = safe_add_func_uint8_t_u_u(g_24.f6, 7))
                    {
                        int **l_438 = &g_68;
                        union U1 **l_439 = &g_116;
                        (*l_438) = l_437;

                        ;
                        (*l_439) = &g_117;
                        if ((*g_68))
                            continue;
                    }
                    if (p_28)
                        continue;
                }
                if ((p_28 && ((*l_448) = (((*l_443) = func_32((*g_116), (*g_68), (l_441 = l_440), &g_124)) >= ((p_28 <= (l_447 = (safe_add_func_uint32_t_u_u(9UL, ((g_7.f2 && p_28) && l_446))))) | l_440.f1)))))
                {
                    for (l_447 = 29; (l_447 <= 14); l_447--)
                    {
                        int **l_451 = &l_437;
                        int l_452 = (-4L);
                        (*l_451) = (void*)0;

                        ;
                        l_453 = (l_452 || g_148);
                    }

                    ;
                }
                else
                {
                    for (g_24.f0 = 7; (g_24.f0 == 11); g_24.f0 = safe_add_func_int8_t_s_s(g_24.f0, 7))
                    {
                        short l_456 = 9L;
                        int *l_457 = &g_66;
                        int **l_458 = (void*)0;
                        struct S0 ***l_459 = &g_187;
                        (*g_68) = l_456;
                        g_68 = l_457;

                        ;
                        (*l_459) = &p_27;

                        ;
                    }
                }

                ;
                for (g_339.f7 = 21; (g_339.f7 > 10); --g_339.f7)
                {
                    if (l_453)
                        break;
                }
            }
        }

        ;
        ;
                (*g_68) = p_28;
        (*l_462) = &l_453;

        ;
    }



    ;

    ;
    ;
    ;
    ;
        (*l_463) = &g_148;

    ;
    return g_10;


}







static int func_32(union U1 p_33, int p_34, union U1 p_35, struct S0 ** p_36)
{
    union U1 **l_416 = &g_116;
    int **l_417 = &g_68;
    unsigned char *l_418 = &g_339.f8;
    unsigned char *l_419 = &g_339.f1;
    unsigned char l_420 = 255UL;
    int l_421 = 0L;
    for (g_339.f8 = 0; (g_339.f8 != 5); g_339.f8 = safe_add_func_int16_t_s_s(g_339.f8, 2))
    {
        unsigned l_413 = 0xC5DCF132L;
        int *l_414 = &g_66;
        int **l_415 = &g_68;
        (*l_414) = l_413;
        (*l_415) = &p_34;

        ;
        if ((*l_414))
            continue;
        (*l_415) = (void*)0;

        ;
    }

    ;
    (*l_416) = &g_117;

    ;
    (*l_417) = func_48(&g_124);

    ;
    l_421 = ((g_7.f5 || ((*l_419) = (g_10 <= ((*l_418) = 0xE3L)))) ^ (0x7AL <= (p_35.f0 != ((*g_68) = (l_420 && (**l_417))))));
    return (**l_417);
}







static union U1 func_38(struct S0 * p_39, unsigned p_40, union U1 p_41)
{
    unsigned short l_401 = 0xD798L;
    char *l_403 = (void*)0;
    char **l_402 = &l_403;
    unsigned *l_404 = (void*)0;
    unsigned *l_405 = &g_339.f2;
    int l_406 = (-8L);
    int *l_407 = (void*)0;
    int *l_408 = &g_66;
    union U1 l_409 = {0xD536L};
    l_406 = (((l_401 == (g_24.f2 ^ (l_402 != (void*)0))) >= g_352) && (l_401 <= ((*l_405) = 3UL)));
    (*l_408) = p_41.f1;
    return l_409;

    }







static struct S0 * func_42(unsigned p_43, struct S0 * p_44, int p_45)
{
    struct S0 *l_361 = &g_7;
    int l_366 = (-4L);
    unsigned short *l_380 = &g_24.f0;
    for (g_7.f6 = 24; (g_7.f6 >= 15); g_7.f6 = safe_sub_func_int8_t_s_s(g_7.f6, 1))
    {
        (*g_123) = l_361;

        ;
    }
    for (g_24.f4 = 0; (g_24.f4 <= 14); g_24.f4 = safe_add_func_int32_t_s_s(g_24.f4, 4))
    {
        int *l_367 = &g_66;
        (*l_367) = (safe_mod_func_int16_t_s_s((g_339.f2 != p_43), l_366));
        for (g_57 = (-20); (g_57 <= 58); g_57++)
        {
            short *l_370 = &g_117.f0;
            if ((((*l_370) = p_43) && (-1L)))
            {
                unsigned *l_373 = &g_57;
                unsigned char *l_374 = (void*)0;
                unsigned char *l_375 = &g_7.f1;
                int **l_376 = (void*)0;
                int **l_377 = (void*)0;
                int **l_378 = &l_367;
                (*l_367) = p_43;
                (*l_367) = ((l_373 != &g_10) <= (((*l_375) = g_24.f6) != p_43));
                (*l_378) = &l_366;

                ;
            }
            else
            {
                int **l_379 = &l_367;
                (*l_379) = l_367;
            }
        }

        ;
    }
    if ((l_366 == ((l_380 = l_380) != (void*)0)))
    {
        char ***l_382 = &g_381;
        (*l_382) = g_381;
    }
    else
    {
        unsigned l_383 = 18446744073709551613UL;
        char ***l_384 = (void*)0;
        unsigned char l_387 = 5UL;
        char *l_388 = &g_339.f7;
        unsigned char *l_397 = &g_339.f8;
        int *l_398 = &g_66;
        l_366 = ((l_383 >= ((l_384 == l_384) ^ (safe_lshift_func_uint16_t_u_s((((g_286 == 0x1DBAL) == l_366) > ((&g_152 != &g_152) && (l_383 && (-5L)))), l_366)))) < p_43);
        (*l_398) = (l_387 == (!(p_45 == (((l_366 = l_387) == ((*l_388) = 0x3BL)) && (safe_rshift_func_uint8_t_u_u(((*l_397) = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(65535UL, (safe_sub_func_int8_t_s_s(0x42L, g_7.f3)))), l_366))), g_7.f0))))));
    }
    return p_44;


}







static struct S0 * func_46(char p_47)
{
    int **l_293 = &g_68;
    struct S0 *l_294 = (void*)0;
    int *l_297 = &g_148;
    struct S0 *l_319 = &g_7;
    char l_355 = (-4L);
    union U1 **l_358 = &g_116;
    union U1 ***l_357 = &l_358;
    (*l_293) = func_48(func_50(p_47, (safe_lshift_func_uint8_t_u_s(((g_57 = g_7.f5) == p_47), 1)), p_47, g_7.f5));

    ;


    ;
    (*l_293) = func_48(&g_124);
    if ((l_294 == l_294))
    {
        unsigned short l_299 = 8UL;
        int *l_307 = &g_66;
        struct S0 *l_317 = &g_7;
        if ((((p_47 ^ p_47) > (g_24.f8 || (safe_rshift_func_int8_t_s_s(p_47, g_7.f4)))) >= 4294967295UL))
        {
            union U1 **l_298 = &g_116;
            (*l_293) = l_297;
            (*l_293) = (*l_293);
            (*g_68) = p_47;
            (*l_298) = &g_117;

            ;
        }
        else
        {
            unsigned short l_308 = 0UL;
            int *l_335 = &g_148;
            struct S0 *l_340 = &g_339;
            int **l_353 = &l_307;
            if ((l_299 > g_7.f3))
            {
                int ***l_300 = &l_293;
                struct S0 l_306 = {0xD2BCL,255UL,0xC2D9155AL,0x9D44L,-1L,-9L,0xBB76L,-1L,0x2BL};
                (*l_300) = &g_68;
                for (g_286 = 0; (g_286 > 56); g_286 = safe_add_func_uint16_t_u_u(g_286, 8))
                {
                    return g_303;


                }
                for (g_7.f5 = 2; (g_7.f5 <= 10); ++g_7.f5)
                {
                    l_306 = l_306;
                }
            }
            else
            {
                struct S0 **l_318 = &l_294;
                struct S0 **l_320 = &g_303;
                unsigned char *l_321 = &g_7.f8;
                unsigned char *l_326 = (void*)0;
                unsigned char *l_327 = &g_24.f1;
                (*l_293) = l_307;

                ;
                (*l_297) = (((p_47 & l_308) || (safe_rshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s(g_57, (safe_mod_func_uint16_t_u_u(((**l_293) | (safe_sub_func_uint8_t_u_u((*l_307), (~((*l_321) = (((*l_318) = l_317) != ((*l_320) = l_319))))))), (safe_lshift_func_uint8_t_u_u(((*l_327) = (safe_rshift_func_int16_t_s_u(1L, 5))), p_47)))))) & 0L) > 0x5B1CE934L), 2))) < 0xD461L);

                ;
                ;
                return l_319;


            }
            for (g_7.f7 = 0; (g_7.f7 < 8); ++g_7.f7)
            {
                int *l_330 = &g_66;
                (*l_293) = l_330;

                ;
                if ((+p_47))
                {
                    if (p_47)
                        break;
                }
                else
                {
                    (*l_293) = (void*)0;

                    ;
                    for (g_286 = 6; (g_286 < 57); g_286 = safe_add_func_int32_t_s_s(g_286, 8))
                    {
                        (*l_330) = g_117.f1;
                    }
                }

                ;
                for (g_24.f2 = 0; (g_24.f2 <= 40); g_24.f2 = safe_add_func_uint32_t_u_u(g_24.f2, 7))
                {
                    if (p_47)
                    {
                        unsigned char *l_338 = &g_7.f8;
                        l_335 = (*l_293);

                        ;
                        (*l_297) = (safe_mul_func_uint16_t_u_u((*g_213), (((*l_338) = (1L & ((*l_297) && 0xAC320A9FL))) | p_47)));
                    }
                    else
                    {
                        g_339 = (*l_319);
                        return l_340;


                    }

                    ;
                    if (g_148)
                    {
                        int l_351 = (-3L);
                        (*l_307) = (safe_rshift_func_uint16_t_u_s(p_47, ((**g_212) != ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((*l_307), 15)), (safe_lshift_func_uint8_t_u_u(l_351, 1)))) > (*l_297)))));
                        (*l_340) = (*l_340);
                    }
                    else
                    {
                        (*l_330) = 8L;
                        g_148 = g_352;
                        (*l_293) = l_307;

                        ;
                    }
                }
            }

            ;
            ;
            (*l_307) = p_47;
            (*l_353) = ((*l_293) = l_307);

            ;
        }

        ;
    }
    else
    {
        unsigned short **l_354 = (void*)0;
        union U1 **l_356 = &g_116;
        (*g_211) = l_354;

        ;
        (*g_68) = l_355;
        (*l_293) = (void*)0;

        ;
        (*l_356) = &g_117;

        ;
    }

    ;
    ;
    (*l_357) = &g_116;
    return l_319;


}







static int * func_48(struct S0 ** p_49)
{
    struct S0 l_290 = {0x4DDFL,0x40L,0x408B0A40L,0xD92DL,0x716DB553L,0xA47ABD0CL,65535UL,0x90L,0xA8L};
    struct S0 *l_291 = &g_24;
    int *l_292 = &g_148;
    (*l_291) = (l_290 = l_290);
    (*l_291) = (*l_291);
    return l_292;


}







static struct S0 ** func_50(short p_51, unsigned p_52, char p_53, char p_54)
{
    char l_58 = 0xA6L;
    int *l_65 = &g_66;
    int **l_64 = &l_65;
    int *l_103 = &g_66;
    struct S0 l_106 = {0x65DCL,255UL,0UL,65529UL,0x4DFDC5D4L,0x9989FA4EL,0x3F46L,0xCBL,0x03L};
    struct S0 l_176 = {0UL,1UL,0xA9757F06L,4UL,1L,0x1A66B95EL,1UL,0x36L,0x85L};
    short l_183 = 0L;
    int *l_192 = &g_148;
    int l_195 = 0xBD706A57L;
    struct S0 **l_210 = &g_124;
    short l_236 = 0x8198L;
    int *l_289 = &g_148;
    if (g_10)
    {
        struct S0 *l_61 = &g_24;
        int *l_69 = (void*)0;
        int l_92 = 0x2899D3D8L;
        struct S0 *l_107 = &g_24;
        if (l_58)
        {
            struct S0 *l_62 = &g_24;
            struct S0 **l_63 = &l_62;
            if ((safe_rshift_func_int16_t_s_u(((l_61 = &g_7) == ((*l_63) = l_62)), 12)))
            {
                (*l_62) = (*l_61);
                g_67 = l_64;

                ;
                (**l_63) = g_7;
            }
            else
            {
                (*g_67) = (*l_64);

                ;
            }

            ;
            ;
        }
        else
        {
            int *l_82 = &g_66;
            unsigned char *l_85 = (void*)0;
            unsigned char *l_86 = &g_24.f1;
            int l_87 = 0x5AC29F8DL;
            (*l_64) = l_69;

            ;
            if ((safe_mul_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(0L, (safe_mul_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((((g_10 ^ ((~(((p_51 ^ ((*l_86) = (p_51 < ((safe_add_func_int8_t_s_s(((l_82 = (void*)0) == ((*l_64) = (*l_64))), p_51)) | (65535UL != (((safe_sub_func_uint8_t_u_u(p_54, g_7.f4)) >= 4294967287UL) != g_24.f6)))))) & p_54) | l_87)) ^ g_24.f0)) && p_54) == g_7.f2) == g_7.f5), 4)), 1UL)) > p_54) < 0x64L), l_87)))) < g_24.f0), g_24.f3)))
            {
                unsigned short l_99 = 0xD0E1L;
                for (p_54 = (-13); (p_54 != (-12)); p_54 = safe_add_func_int8_t_s_s(p_54, 2))
                {
                    (**g_67) = ((**g_67) == (((safe_sub_func_uint16_t_u_u((l_92 >= (4294967295UL ^ g_10)), 65535UL)) && g_24.f3) <= ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((p_52 > (safe_rshift_func_uint16_t_u_s(((6UL != (g_7.f3 | l_99)) <= g_7.f4), 11))), g_10)), 5)) && (**g_67))));
                }
                for (g_7.f7 = 0; (g_7.f7 != (-12)); g_7.f7 = safe_sub_func_int32_t_s_s(g_7.f7, 1))
                {
                    struct S0 l_102 = {1UL,0xCBL,0xF9F6C923L,0UL,-1L,0x8C15133AL,0x3A0AL,5L,0x0AL};
                    g_24 = l_102;
                }
            }
            else
            {
                (**g_67) = (((void*)0 == l_103) >= (safe_add_func_int16_t_s_s(g_24.f8, p_54)));
            }

            ;
        }

        ;
        ;
        ;
        (*l_64) = (*l_64);
        (*l_107) = l_106;
        (*g_67) = (*g_67);

        ;
        ;
    }
    else
    {
        unsigned char l_108 = 2UL;
        unsigned l_113 = 0x0D6BF4B6L;
        int *l_121 = &g_66;
        union U1 **l_131 = &g_116;
        if ((*g_68))
        {
            (*l_64) = (*g_67);

            ;
            l_108 = ((**l_64) = 0xCBF8205CL);
            (*g_68) = p_53;
        }
        else
        {
            int *l_112 = (void*)0;
            struct S0 l_153 = {7UL,4UL,1UL,0xFB85L,0x13469999L,-1L,65530UL,0xD1L,6UL};
            for (g_7.f1 = 0; (g_7.f1 == 23); g_7.f1 = safe_add_func_uint16_t_u_u(g_7.f1, 4))
            {
                struct S0 *l_111 = &l_106;
                int *l_120 = &g_66;
                struct S0 **l_122 = &l_111;
                char l_146 = (-1L);
                (*l_111) = g_7;
            }
            if ((safe_lshift_func_uint16_t_u_s(p_51, 11)))
            {
                int *l_161 = &g_148;
                struct S0 *l_162 = &l_153;
                unsigned short *l_171 = (void*)0;
                unsigned short *l_172 = &g_7.f3;
                short *l_173 = &g_117.f0;
                unsigned short *l_174 = &l_153.f3;
                (*g_67) = l_161;

                ;
                (*l_162) = l_153;
                (*g_68) = ((g_24.f3 < (safe_mul_func_uint16_t_u_u(0xC472L, (l_121 != (*g_67))))) < (65535UL | ((*l_174) = (g_7.f8 < ((((*l_121) = (!p_52)) == (g_24.f1 & (((*l_173) = (safe_mul_func_uint16_t_u_u(((*l_172) = (safe_sub_func_int32_t_s_s((~l_153.f2), 0xB8701C1BL))), g_24.f2))) != 0xA221L))) > g_24.f7)))));
            }
            else
            {
                struct S0 l_175 = {5UL,0UL,3UL,0xBD2CL,0xF0F45DD7L,0xD4814448L,0xE5B7L,0x50L,247UL};
                (*g_67) = l_112;

                ;
                l_176 = l_175;
            }

            ;
        }

        ;
        ;
    }

    ;
    ;
    ;
    if ((safe_unary_minus_func_uint32_t_u(p_53)))
    {
        struct S0 l_178 = {1UL,0xB1L,0x781CC2B1L,0x82E6L,0x2C939D4BL,-2L,1UL,0x70L,0xC1L};
        struct S0 *l_179 = (void*)0;
        struct S0 *l_180 = &l_178;
        char l_202 = 0L;
        int *l_217 = &g_148;
        unsigned l_218 = 0x08D468FBL;
        (*l_180) = l_178;
        if ((safe_rshift_func_int16_t_s_s((l_178.f4 ^ ((p_54 == g_7.f0) | p_53)), p_51)))
        {
            int *l_205 = (void*)0;
            unsigned char l_231 = 0x74L;
            char *l_234 = (void*)0;
            char *l_235 = &l_178.f7;
            struct S0 l_247 = {1UL,0xD8L,0x8E576FCFL,65535UL,5L,6L,0UL,0x7AL,250UL};
            unsigned short ****l_250 = &g_211;
            struct S0 l_265 = {1UL,0x43L,0xA547C4C6L,5UL,6L,0xB4608C1FL,1UL,1L,0x4DL};
            if (l_183)
            {
                unsigned short l_184 = 0x798DL;
                struct S0 **l_186 = &l_179;
                unsigned *l_190 = &l_106.f2;
                int *l_193 = &g_66;
                unsigned short *l_197 = &g_7.f0;
                unsigned short **l_196 = &l_197;
                union U1 *l_199 = &g_117;
                unsigned short ****l_214 = &g_211;
                unsigned short ***l_216 = &l_196;
                unsigned short ****l_215 = &l_216;
                if (((*l_103) = l_184))
                {
                    int **l_185 = &l_103;
                    (*l_185) = ((*g_67) = (void*)0);

                    ;
                }
                else
                {
                    return g_187;



                }

                ;
                if ((safe_mod_func_int16_t_s_s(l_184, g_7.f0)))
                {
                    int *l_191 = &g_66;
                    struct S0 l_194 = {65533UL,0x09L,0x231F37C5L,65535UL,0xE1EA3A65L,0x83DE727DL,0x1D57L,0xE2L,0xF3L};
                    (*l_191) = ((void*)0 == l_190);
                    l_192 = l_190;

                    ;
                    l_193 = (*g_67);

                    ;
                    (*l_180) = l_194;
                }
                else
                {
                    unsigned char *l_201 = &g_24.f1;
                    (*g_67) = (*l_64);
                    if (l_195)
                    {
                        unsigned short ***l_198 = &l_196;
                        union U1 **l_200 = &l_199;
                        (*l_198) = l_196;
                        (*l_200) = l_199;
                    }
                    else
                    {
                        (*l_192) = l_178.f4;
                        (*l_64) = (void*)0;

                        ;
                    }
                    (*l_192) = ((((l_201 == (void*)0) > l_202) > g_24.f8) || p_51);
                }

                ;
                ;
                for (p_52 = (-4); (p_52 >= 12); p_52 = safe_add_func_uint32_t_u_u(p_52, 3))
                {
                    int **l_206 = &l_103;
                    (*l_206) = ((*l_64) = l_205);

                    ;
                    for (l_184 = 22; (l_184 > 48); l_184++)
                    {
                        struct S0 **l_209 = &l_179;
                        (*g_67) = (*l_206);
                        if (p_52)
                            break;
                        return l_210;



                    }
                }
                (*l_192) = ((((*l_214) = g_211) == ((*l_215) = &g_212)) && g_7.f0);

                ;
            }
            else
            {
                char *l_223 = &g_7.f7;
                unsigned char l_226 = 2UL;
                (*l_103) = (*l_103);
                (*g_67) = l_217;
                (*l_192) = (g_24.f7 == ((*l_217) | l_218));
                l_231 = (g_24.f2 < (((p_54 >= p_52) != (((safe_sub_func_uint8_t_u_u(p_52, (safe_sub_func_int8_t_s_s(((*l_223) = (~g_117.f1)), g_7.f5)))) < (safe_mul_func_int16_t_s_s(((l_226 < ((safe_mul_func_uint16_t_u_u((***g_211), ((safe_lshift_func_int16_t_s_u(g_10, (**g_212))) | p_51))) != 9UL)) > p_53), 0x7DBCL))) & l_226)) >= g_7.f4));
            }

            ;
            ;
            (*g_67) = (void*)0;
            (*l_192) = p_51;
            if ((g_148 = (safe_mod_func_int8_t_s_s(((*l_235) = ((*l_217) | g_24.f2)), ((0x3F45L <= l_236) | p_51)))))
            {
                short *l_239 = &l_236;
                int l_242 = 0x07945E16L;
                short *l_243 = &g_117.f0;
                struct S0 l_248 = {65535UL,6UL,0UL,0xE44FL,0xD2D9BE9AL,-1L,65531UL,0xABL,0x91L};
                unsigned short l_253 = 8UL;
                (*l_217) = 0x8493D40EL;
                if ((safe_add_func_uint32_t_u_u(((*l_217) < 0xD77FA01DL), ((((*l_239) = g_24.f0) != (((*l_243) = (safe_lshift_func_uint8_t_u_s(((((p_53 <= l_242) < (-1L)) != 0xD5B5896DL) != p_54), 3))) | ((**g_212) = (safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((((0xB58EL < g_7.f8) & (*l_217)) >= l_242))), (*l_217)))))) | 0x756EL))))
                {
                    int **l_249 = &l_217;
                    unsigned short *l_254 = &l_248.f3;
                    l_248 = l_247;
                    (*l_249) = ((*g_67) = (void*)0);

                    ;
                    l_242 = (+g_66);
                    (*l_192) = (((***g_211) = ((void*)0 == l_250)) <= (safe_sub_func_uint16_t_u_u((g_7.f6 = ((*l_254) = l_253)), ((!p_51) | l_248.f2))));
                }
                else
                {
                    unsigned ***l_260 = &g_151;
                    for (l_247.f7 = 23; (l_247.f7 != 15); --l_247.f7)
                    {
                        struct S0 l_257 = {0x2EF5L,0x72L,0x5E5902A9L,65535UL,0x93BE05BEL,-1L,8UL,1L,253UL};
                        (*g_67) = l_205;
                        (*g_67) = (*g_67);
                        (*l_180) = l_257;
                    }
                    for (l_178.f8 = (-6); (l_178.f8 == 46); ++l_178.f8)
                    {
                        return &g_124;



                    }
                    (*l_192) = p_54;
                    (*l_260) = (void*)0;

                    ;
                }

                ;
                ;
                for (l_106.f0 = (-23); (l_106.f0 != 43); l_106.f0 = safe_add_func_int8_t_s_s(l_106.f0, 7))
                {
                    for (g_7.f2 = 0; (g_7.f2 < 25); g_7.f2++)
                    {
                        (*l_64) = (*g_67);
                    }
                }
            }
            else
            {
                unsigned **l_272 = &g_152;
                int l_276 = (-8L);
                struct S0 *l_279 = &g_24;
                int **l_285 = &l_192;
                if ((*l_217))
                {
                    unsigned char l_266 = 0xBBL;
                    l_265 = l_265;
                    g_148 = l_266;
                }
                else
                {
                    unsigned short l_267 = 65535UL;
                    struct S0 *l_281 = (void*)0;
                    (*g_123) = &l_265;

                    ;
                    l_267 = (g_148 = (l_247.f6 ^ ((void*)0 != &l_103)));
                    if (g_7.f1)
                    {
                        (*l_217) = (safe_mul_func_uint16_t_u_u((p_53 == 0x765BL), (safe_sub_func_int16_t_s_s((g_117.f1 != ((void*)0 != l_272)), ((****l_250) = (***g_211))))));
                        (*l_210) = (*g_123);
                        (*l_192) = p_53;
                    }
                    else
                    {
                        int *l_273 = &g_66;
                        (*l_64) = l_273;

                        ;
                        (**g_187) = (*g_124);
                        (*l_65) = (safe_mul_func_uint8_t_u_u(((((*l_217) = g_7.f8) ^ (l_276 > ((safe_mod_func_uint16_t_u_u((*g_213), (**g_212))) != ((l_279 == (void*)0) <= ((((~(safe_unary_minus_func_int16_t_s(((void*)0 != l_281)))) ^ (safe_rshift_func_uint8_t_u_u(p_52, 6))) != g_284) || l_267))))) <= (*l_273)), g_24.f0));
                    }
                }

                ;
                (*l_180) = ((*l_279) = (l_265 = (*l_279)));
                (*l_64) = l_205;

                ;
                (*l_285) = ((*l_64) = (*g_67));

                ;
                ;
            }

            ;
            ;
            ;
            ;
        }
        else
        {
            (*l_103) = g_286;
            for (l_58 = (-18); (l_58 < 11); l_58 = safe_add_func_int8_t_s_s(l_58, 5))
            {
                (*l_103) = (*l_217);
            }
        }

        ;

        ;
        ;
        ;
    }
    else
    {
        return l_210;



    }

    ;

    ;
    ;
    (*g_67) = (*l_64);
    (*l_64) = l_289;

    ;
    return &g_124;



}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f1, "g_7.f1", print_hash_value);
    transparent_crc(g_7.f2, "g_7.f2", print_hash_value);
    transparent_crc(g_7.f3, "g_7.f3", print_hash_value);
    transparent_crc(g_7.f4, "g_7.f4", print_hash_value);
    transparent_crc(g_7.f5, "g_7.f5", print_hash_value);
    transparent_crc(g_7.f6, "g_7.f6", print_hash_value);
    transparent_crc(g_7.f7, "g_7.f7", print_hash_value);
    transparent_crc(g_7.f8, "g_7.f8", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    transparent_crc(g_24.f3, "g_24.f3", print_hash_value);
    transparent_crc(g_24.f4, "g_24.f4", print_hash_value);
    transparent_crc(g_24.f5, "g_24.f5", print_hash_value);
    transparent_crc(g_24.f6, "g_24.f6", print_hash_value);
    transparent_crc(g_24.f7, "g_24.f7", print_hash_value);
    transparent_crc(g_24.f8, "g_24.f8", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_117.f1, "g_117.f1", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_339.f0, "g_339.f0", print_hash_value);
    transparent_crc(g_339.f1, "g_339.f1", print_hash_value);
    transparent_crc(g_339.f2, "g_339.f2", print_hash_value);
    transparent_crc(g_339.f3, "g_339.f3", print_hash_value);
    transparent_crc(g_339.f4, "g_339.f4", print_hash_value);
    transparent_crc(g_339.f5, "g_339.f5", print_hash_value);
    transparent_crc(g_339.f6, "g_339.f6", print_hash_value);
    transparent_crc(g_339.f7, "g_339.f7", print_hash_value);
    transparent_crc(g_339.f8, "g_339.f8", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
