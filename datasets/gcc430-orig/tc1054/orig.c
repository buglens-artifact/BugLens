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
   signed f1 : 1;
};

union U1 {
   unsigned char f0;
   signed f1 : 16;
};

union U2 {
   unsigned char f0;
   unsigned f1 : 29;
   char * f2;
};


static unsigned char g_6 = 8UL;
static long long g_18 = 0x5D870A3267E6AA16LL;
static unsigned short g_55 = 1UL;
static int g_60 = 0L;
static int *g_59 = &g_60;
static union U2 g_63 = {255UL};
static union U2 *g_62 = &g_63;
static long long g_69 = (-4L);
static unsigned g_76 = 4294967287UL;
static char g_90 = 1L;
static unsigned short *g_98 = &g_55;
static unsigned short **g_97 = &g_98;
static int g_118 = 9L;
static int *g_119 = &g_60;
static union U1 *g_125 = (void*)0;
static union U2 *g_142 = &g_63;
static union U0 g_178 = {1L};
static unsigned char *g_206 = &g_63.f0;
static union U1 **g_256 = &g_125;
static union U1 g_270 = {0xAFL};
static char *g_287 = &g_90;
static unsigned *g_359 = &g_76;
static unsigned **g_358 = &g_359;
static unsigned long long g_374 = 0UL;
static unsigned g_379 = 0xF6092038L;
static short g_439 = (-3L);
static union U0 *g_498 = (void*)0;
static union U0 **g_497 = &g_498;
static unsigned long long g_541 = 18446744073709551613UL;
static long long **g_557 = (void*)0;
static long long ***g_556 = &g_557;
static int g_567 = 0xF56DB81EL;
static unsigned char g_648 = 0UL;
static unsigned char *g_647 = &g_648;



static int func_1(void);
static unsigned char func_7(char p_8, char * p_9, unsigned char * p_10, char * p_11, unsigned char * p_12);
static char * func_15(unsigned short p_16, unsigned char * p_17);
static unsigned char * func_19(short p_20);
static short func_21(unsigned p_22);
static long long func_25(unsigned char * p_26, unsigned p_27);
static unsigned char func_29(unsigned long long p_30, unsigned char * p_31);
static unsigned func_34(unsigned short p_35, unsigned char * p_36, char * p_37, char * p_38);
static unsigned char * func_39(char * p_40, unsigned char * p_41, unsigned long long p_42);
static char * func_43(unsigned char p_44, unsigned char * p_45, union U1 p_46, unsigned p_47);
static int func_1(void)
{
    unsigned short l_4 = 0UL;
    unsigned char *l_5 = &g_6;
    long long l_14 = (-1L);
    unsigned char **l_630 = &g_206;
    int *l_665 = &g_60;
    (*l_665) = ((safe_add_func_uint8_t_u_u(((*l_5) = l_4), func_7((safe_unary_minus_func_int64_t_s(l_14)), func_15(g_18, ((*l_630) = func_19(l_4))), g_647, g_647, &g_648))) & l_4);
    return g_90;
}







static unsigned char func_7(char p_8, char * p_9, unsigned char * p_10, char * p_11, unsigned char * p_12)
{
    unsigned char *l_663 = &g_63.f0;
    int l_664 = 1L;
    for (g_567 = (-21); (g_567 > 19); g_567 = safe_add_func_uint16_t_u_u(g_567, 7))
    {
        union U2 *l_651 = &g_63;
        int *l_652 = &g_118;
        int *l_653 = &g_60;
        int **l_655 = &g_119;
        int ***l_654 = &l_655;
        char **l_660 = &g_287;
        l_651 = l_651;
        if (p_8)
            continue;
        (*l_653) = ((*l_652) = 0x2D9222CCL);
        if ((((1UL <= (((((*l_654) = (void*)0) == &l_652) | (p_8 = (+(safe_rshift_func_uint8_t_u_u(((*g_647) = (((safe_add_func_uint64_t_u_u((&p_8 != ((*l_660) = (void*)0)), func_34(((safe_add_func_uint8_t_u_u(func_34((func_34(p_8, l_663, &g_90, l_663) || l_664), &g_648, &g_90, &g_90), 0xD1L)) & p_8), &g_648, &g_90, &g_90))) & p_8) ^ (*l_652))), 0))))) & l_664)) | (*l_652)) != l_664))
        {
            (*l_653) = ((*l_652) = p_8);
            (*l_652) = l_664;
        }
        else
        {
            return (*p_12);
        }
    }
    return (*p_10);
}







static char * func_15(unsigned short p_16, unsigned char * p_17)
{
    unsigned l_631 = 0x39AD116CL;
    char l_632 = (-5L);
    unsigned *l_637 = &g_76;
    unsigned short l_640 = 7UL;
    unsigned short l_641 = 0x71E6L;
    int *l_642 = (void*)0;
    int *l_643 = &g_567;
    (*l_643) = (l_631 != l_640);
    (*l_643) = 0x010EC9DFL;
    for (g_60 = 25; (g_60 <= (-2)); --g_60)
    {
        int **l_646 = &l_643;
        (*l_646) = &g_118;
        if (p_16)
            continue;
        (*l_643) = (**l_646);
    }
    (*l_643) = 3L;
    return p_17;
}







static unsigned char * func_19(short p_20)
{
    unsigned char *l_28 = (void*)0;
    int l_52 = (-1L);
    unsigned short *l_53 = (void*)0;
    unsigned short *l_54 = &g_55;
    union U1 l_56 = {0x1DL};
    if (((func_21((safe_add_func_int64_t_s_s(func_25(l_28, (g_18 == func_29(((safe_lshift_func_int16_t_s_s(0L, 8)) && func_34(g_18, func_39(func_43((g_18 || (safe_sub_func_int16_t_s_s(p_20, ((*l_54) = (safe_mod_func_uint16_t_u_u(g_18, l_52)))))), l_28, l_56, l_56.f0), g_206, g_18), l_28, g_206)), l_28))), p_20))) <= l_56.f0) == l_52))
    {
        int **l_627 = &g_59;
        int *l_628 = (void*)0;
        int *l_629 = &g_118;
        (*l_627) = &g_567;
        (*l_629) = func_25(g_206, (**l_627));
    }
    else
    {
        return g_287;
    }
    g_567 = func_29(l_56.f0, g_287);
    return l_28;
}







static short func_21(unsigned p_22)
{
    int **l_605 = &g_119;
    char **l_610 = (void*)0;
    char **l_611 = &g_287;
    char *l_612 = &g_90;
    union U2 **l_615 = &g_142;
    char l_618 = 0x3AL;
    union U1 l_625 = {0x32L};
    int *l_626 = &g_60;
    (*l_605) = &g_567;
    g_119 = (*l_605);
    (**l_605) = (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((((*l_611) = &g_90) == l_612), 4)) != ((!((**l_605) != p_22)) && (safe_add_func_uint16_t_u_u(((void*)0 == l_615), (safe_rshift_func_uint16_t_u_s((**g_97), (**l_605))))))), func_34(p_22, l_612, &g_90, &g_90)));
    (*l_626) = (0x82L > (l_618 | ((safe_add_func_uint16_t_u_u(0xD0EEL, p_22)) == (safe_sub_func_int8_t_s_s(((0x79B24927L | (safe_lshift_func_int8_t_s_s(2L, func_25(l_612, (**l_605))))) != g_567), p_22)))));
    return p_22;
}







static long long func_25(unsigned char * p_26, unsigned p_27)
{
    int l_500 = 0xB7896BA1L;
    unsigned l_501 = 0x71C1A902L;
    union U0 *l_515 = &g_178;
    unsigned *l_525 = &g_76;
    long long *l_555 = &g_69;
    long long **l_554 = &l_555;
    long long ***l_553 = &l_554;
    unsigned short **l_578 = &g_98;
    for (p_27 = (-14); (p_27 != 17); ++p_27)
    {
        int l_491 = (-1L);
        unsigned short ***l_499 = &g_97;
        unsigned char *l_510 = &g_63.f0;
        unsigned l_512 = 4294967289UL;
        union U0 *l_514 = &g_178;
        short l_563 = 0xBB72L;
        int l_565 = 0x14A060F0L;
        if (((*g_206) | (func_29(l_491, g_206) && (*g_206))))
        {
            short *l_493 = &g_439;
            short **l_492 = &l_493;
            short ***l_494 = &l_492;
            (*l_494) = l_492;
        }
        else
        {
            short *l_511 = &g_439;
            int l_513 = 0x551B6253L;
            if (((safe_add_func_uint16_t_u_u((+(((void*)0 != g_497) >= (((void*)0 != l_499) <= l_500))), l_501)) ^ (safe_mod_func_int16_t_s_s((((*l_510) = (safe_mul_func_int16_t_s_s(((*l_511) = (safe_rshift_func_uint16_t_u_s(((g_55 > func_34(((safe_mod_func_uint64_t_u_u((((0x51F5FFA1521E2DD4LL > func_29(g_60, p_26)) == 0x382C4D35L) >= l_501), 5L)) | 0L), l_510, &g_90, &g_90)) < p_27), l_501))), l_512))) <= l_513), (-1L)))))
            {
                (*g_497) = l_514;
            }
            else
            {
                return l_513;
            }
        }
        if (p_27)
        {
            union U0 **l_516 = &l_515;
            int **l_517 = &g_119;
            char *l_590 = (void*)0;
            (*l_516) = ((*g_497) = l_515);
            (*l_517) = &l_500;
            for (g_178.f0 = 0; (g_178.f0 != 4); g_178.f0 = safe_add_func_uint8_t_u_u(g_178.f0, 5))
            {
                union U1 ***l_521 = &g_256;
                union U1 ****l_520 = &l_521;
                int *l_543 = &l_491;
                unsigned short **l_577 = &g_98;
                if ((((*l_520) = (void*)0) == (void*)0))
                {
                    for (g_90 = 0; (g_90 >= (-4)); --g_90)
                    {
                        (*l_517) = &g_118;
                        (*l_517) = &g_118;
                    }
                }
                else
                {
                    int **l_524 = &g_59;
                    unsigned long long *l_540 = &g_541;
                    unsigned char *l_562 = &g_63.f0;
                    int *l_564 = &g_118;
                    (*l_517) = &g_118;
                    (*l_524) = ((*l_517) = &l_500);
                    if ((((p_27 & ((~0L) > (4UL >= ((l_525 = ((*g_358) = (*g_358))) == (void*)0)))) | g_374) == ((**l_524) = (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0x62L, ((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((((+(safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((*l_540) = ((safe_add_func_uint16_t_u_u((*g_98), g_118)) < p_27)), 0xB0F44A99A04B6D0CLL)), (**l_524)))) == p_27) != 1UL), l_491)), 1)) <= p_27))), l_491)))))
                    {
                        if ((**l_517))
                            break;
                    }
                    else
                    {
                        union U2 **l_542 = &g_142;
                        long long **l_550 = (void*)0;
                        long long ***l_549 = &l_550;
                        long long ****l_548 = &l_549;
                        long long ***l_552 = &l_550;
                        long long ****l_551 = &l_552;
                        (*l_542) = &g_63;
                        (*l_517) = ((*l_524) = l_543);
                        (**l_524) = (((safe_lshift_func_int8_t_s_u((((*l_551) = ((*l_548) = (void*)0)) != (g_556 = l_553)), (0xDD1DL ^ ((*l_543) && (safe_mul_func_uint8_t_u_u(l_512, 250UL)))))) == ((**g_97) = ((*g_206) <= (safe_add_func_uint16_t_u_u(((p_26 != l_562) > (*l_543)), g_439))))) && l_563);
                        (**l_517) = (0UL && 0x252574A73589DB1ALL);
                    }
                    l_565 = ((*l_564) = (((*l_543) = g_374) > p_27));
                }
                if ((*g_119))
                {
                    int **l_566 = (void*)0;
                    g_59 = ((*l_517) = &g_118);
                    (*l_517) = &g_60;
                    if ((*g_119))
                    {
                        return g_567;
                    }
                    else
                    {
                        long long l_568 = 0x2388ACF6BE4726A6LL;
                        char **l_569 = &g_287;
                        char l_570 = 0xBAL;
                        unsigned long long *l_579 = (void*)0;
                        unsigned long long *l_580 = &g_374;
                        union U0 ***l_581 = &g_497;
                        (*l_543) = func_34(((*g_98) = ((**l_517) = ((l_568 <= g_76) | (~0xCA18L)))), g_206, ((*l_569) = (void*)0), &g_90);
                        (**l_517) = (p_27 >= l_570);
                        (*g_59) = (safe_add_func_int64_t_s_s((l_500 && 0x7FDE957BF9E56529LL), ((*l_580) = (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(l_501, ((((*l_499) = l_577) == l_578) >= p_27))), (((((((*l_543) | (l_569 != &g_287)) && 65533UL) > 0xC3L) >= (*g_59)) | p_27) < l_570))))));
                        (*l_581) = &g_498;
                    }
                }
                else
                {
                    (*l_517) = &l_500;
                    if ((safe_rshift_func_int8_t_s_u(p_27, 2)))
                    {
                        return p_27;
                    }
                    else
                    {
                        long long **l_584 = &l_555;
                        char *l_589 = (void*)0;
                        char **l_588 = &l_589;
                        int *l_591 = &g_567;
                        (*l_553) = l_584;
                        (**l_517) = (safe_rshift_func_uint16_t_u_s(0x90E2L, (safe_unary_minus_func_uint16_t_u(func_34(((**g_97) = func_29(g_270.f1, p_26)), g_206, ((*l_588) = (void*)0), l_590)))));
                        (*l_517) = l_591;
                        (*l_517) = &g_60;
                    }
                    (*l_517) = (*l_517);
                }
                for (l_501 = 0; (l_501 <= 1); ++l_501)
                {
                    long long l_594 = 0x3A14165B2EF04D9FLL;
                    (*l_543) = l_500;
                    (**l_517) = l_500;
                    if (l_594)
                        break;
                }
                l_491 = ((*g_119) = (l_501 <= l_512));
            }
        }
        else
        {
            union U1 *l_600 = &g_270;
            union U1 **l_599 = &l_600;
            int *l_603 = &g_60;
            int *l_604 = &l_491;
            (*l_604) = (((*l_603) = (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((*g_256) == ((*l_599) = (void*)0)), (safe_sub_func_int16_t_s_s(g_178.f0, ((*g_98) = func_34((*g_98), p_26, &g_90, &g_90)))))), g_270.f1))) && p_27);
            (*l_604) = 0x1D6F6295L;
        }
    }
    return p_27;
}







static unsigned char func_29(unsigned long long p_30, unsigned char * p_31)
{
    unsigned char *l_487 = &g_63.f0;
    int l_488 = 1L;
    g_270.f1 = ((safe_unary_minus_func_int8_t_s((safe_sub_func_int32_t_s_s((func_34(p_30, l_487, &g_90, (g_287 = (void*)0)) || func_34(l_488, l_487, p_31, l_487)), 3UL)))) >= l_488);
    return (*g_206);
}







static unsigned func_34(unsigned short p_35, unsigned char * p_36, char * p_37, char * p_38)
{
    int *l_483 = &g_118;
    l_483 = l_483;
    return p_35;
}







static unsigned char * func_39(char * p_40, unsigned char * p_41, unsigned long long p_42)
{
    unsigned short l_292 = 0xC5C6L;
    int l_307 = 1L;
    union U2 *l_349 = &g_63;
    unsigned long long l_350 = 18446744073709551615UL;
    int l_362 = 1L;
    unsigned char *l_390 = &g_270.f0;
    unsigned short l_393 = 0x91A3L;
    union U1 l_394 = {252UL};
    char **l_410 = &g_287;
    char l_431 = 0L;
    int *l_442 = (void*)0;
    long long *l_453 = &g_18;
    if (p_42)
    {
        unsigned *l_291 = &g_76;
        unsigned **l_290 = &l_291;
        int l_295 = 0x59846D02L;
        l_295 = ((safe_lshift_func_int8_t_s_u(((&g_76 == ((*l_290) = &g_76)) & g_270.f0), 3)) >= (l_292 > (safe_mul_func_uint16_t_u_u(p_42, 0x205DL))));
        for (g_60 = 0; (g_60 == 0); g_60++)
        {
            short l_308 = 0x83EEL;
            int *l_322 = (void*)0;
            for (g_270.f0 = 0; (g_270.f0 != 56); g_270.f0 = safe_add_func_uint16_t_u_u(g_270.f0, 1))
            {
                long long *l_304 = (void*)0;
                long long *l_305 = &g_69;
                int l_306 = 5L;
                l_307 = (safe_rshift_func_int16_t_s_u((g_178.f0 <= (safe_add_func_int64_t_s_s(((*l_305) = g_76), g_60))), (l_295 ^ l_306)));
                if (l_308)
                {
                    union U2 *l_317 = (void*)0;
                    int l_318 = 1L;
                    unsigned long long l_321 = 18446744073709551609UL;
                    if ((safe_mod_func_int32_t_s_s((g_118 = (safe_rshift_func_uint16_t_u_u(((**g_97) = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(((void*)0 != l_317), l_307)), 6))), 0))), ((*l_291) = l_318))))
                    {
                        int *l_319 = (void*)0;
                        int *l_320 = (void*)0;
                        l_295 = p_42;
                        l_307 = p_42;
                        l_321 = (!l_306);
                        if (l_306)
                            break;
                    }
                    else
                    {
                        int **l_323 = &l_322;
                        (*l_323) = l_322;
                    }
                }
                else
                {
                    if (p_42)
                        break;
                }
            }
            if (l_308)
                break;
        }
    }
    else
    {
        long long *l_327 = &g_69;
        long long **l_326 = &l_327;
        int l_332 = 0L;
        union U1 *l_383 = &g_270;
        union U1 *l_384 = &g_270;
        for (l_292 = 0; (l_292 < 39); l_292++)
        {
            long long ***l_328 = &l_326;
            union U2 **l_329 = (void*)0;
            (*l_328) = l_326;
            g_142 = &g_63;
            if (p_42)
            {
                unsigned char *l_333 = (void*)0;
                unsigned char *l_334 = &g_270.f0;
                int l_338 = 1L;
                l_338 = (((safe_rshift_func_int8_t_s_u((l_332 != g_63.f0), 1)) == (((p_42 <= (((*l_334) = (*g_206)) <= (((*l_327) = ((safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u(((-5L) || (*p_40)), l_332)))) || g_178.f0)) >= p_42))) >= (*g_287)) > 0xD692D81DL)) ^ l_332);
            }
            else
            {
                unsigned char *l_347 = &g_270.f0;
                union U2 *l_348 = &g_63;
                int l_351 = 0xB5B6F9CEL;
                l_351 = ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(0xF3FEL, ((safe_lshift_func_uint8_t_u_u(((g_18 | g_118) | (p_42 > (~(safe_mul_func_uint8_t_u_u(((*g_206) = ((((*l_347) = (*g_206)) < (l_348 == l_349)) && p_42)), 1L))))), l_350)) ^ p_42))), (-1L))) > l_351);
            }
        }
        for (l_307 = 0; (l_307 <= (-7)); l_307 = safe_sub_func_uint64_t_u_u(l_307, 5))
        {
            char l_357 = 0L;
            int l_368 = 0xF5783FD7L;
            int l_385 = 0L;
            int *l_387 = &l_362;
            int **l_388 = (void*)0;
            int **l_389 = &g_119;
            for (g_55 = 20; (g_55 != 29); g_55++)
            {
                unsigned short l_356 = 0xCF46L;
                int **l_361 = (void*)0;
                unsigned long long l_367 = 0xBB3E879FE9B06FFBLL;
                int *l_386 = &l_362;
                if (l_356)
                {
                    union U1 ***l_360 = &g_256;
                    unsigned short *l_363 = &l_356;
                    int l_366 = 0xCF3D8B43L;
                    union U2 **l_369 = &g_62;
                    l_357 = p_42;
                    l_368 = (((g_358 == (void*)0) && ((*g_287) = (((*l_360) = &g_125) != (void*)0))) <= ((!(((((*l_363) = (l_362 = ((void*)0 == l_361))) <= (l_292 != (((safe_mod_func_int64_t_s_s(l_366, l_367)) > p_42) >= p_42))) >= l_366) ^ p_42)) >= 255UL));
                    (*l_369) = &g_63;
                    for (l_332 = 0; (l_332 == 6); l_332 = safe_add_func_uint64_t_u_u(l_332, 1))
                    {
                        int *l_372 = &l_368;
                        unsigned long long *l_373 = &l_350;
                        int *l_380 = (void*)0;
                        int *l_381 = &g_60;
                        (*l_372) = p_42;
                        if (l_366)
                            break;
                        (*l_381) = ((*l_372) = (((*l_373) = (*l_372)) > (((~(p_42 & 0xEF081A47L)) && (l_357 & g_374)) | (safe_add_func_uint16_t_u_u(l_366, ((safe_mod_func_int16_t_s_s(g_270.f0, g_379)) && (*p_40)))))));
                        g_119 = &l_332;
                    }
                }
                else
                {
                    int **l_382 = &g_119;
                    (*l_382) = &l_368;
                    (*l_382) = &l_332;
                    g_119 = (g_59 = &g_118);
                    l_384 = l_383;
                }
                (*l_386) = l_385;
            }
            (*l_387) = (p_42 < p_42);
            (*l_389) = &l_368;
        }
        return l_390;
    }
    if (l_307)
    {
        union U1 *l_395 = &l_394;
        char **l_396 = &g_287;
        int *l_399 = &g_60;
        union U2 *l_408 = &g_63;
        unsigned char *l_416 = (void*)0;
        (*l_399) = (~((-1L) <= (safe_mul_func_uint16_t_u_u((&g_90 != ((*l_396) = p_40)), ((~(*p_40)) && (safe_lshift_func_int16_t_s_s(g_374, 1)))))));
        for (l_362 = (-15); (l_362 < (-29)); l_362 = safe_sub_func_uint64_t_u_u(l_362, 6))
        {
            int *l_405 = &g_60;
            for (g_178.f0 = 0; (g_178.f0 >= 1); g_178.f0 = safe_add_func_int32_t_s_s(g_178.f0, 2))
            {
                int *l_404 = &l_362;
                l_405 = l_404;
            }
            (*l_399) = (p_42 ^ (*l_405));
            if ((*l_399))
                continue;
            for (g_60 = (-6); (g_60 <= (-26)); g_60 = safe_sub_func_uint8_t_u_u(g_60, 2))
            {
                union U2 **l_409 = &g_62;
                char ***l_411 = (void*)0;
                char ***l_412 = &l_396;
                int *l_413 = &l_307;
                (*l_409) = l_408;
                (*l_412) = l_410;
                (*l_413) = p_42;
                l_405 = (void*)0;
            }
        }
        (*l_399) = l_350;
        if (((void*)0 == p_40))
        {
            (*l_399) = p_42;
            for (g_118 = (-30); (g_118 <= (-14)); g_118 = safe_add_func_int64_t_s_s(g_118, 6))
            {
                return l_416;
            }
        }
        else
        {
            int **l_419 = &g_59;
            int **l_420 = &g_119;
            (*l_399) = (l_362 && p_42);
            (*l_399) = (safe_lshift_func_uint16_t_u_s(0xFFB8L, g_63.f0));
            (*l_420) = ((*l_419) = &l_362);
            for (l_350 = (-12); (l_350 >= 59); ++l_350)
            {
                int l_423 = 0L;
                l_423 = (*g_119);
                if (p_42)
                    continue;
                (*g_119) = p_42;
            }
        }
    }
    else
    {
        int *l_429 = &g_60;
        unsigned long long l_445 = 18446744073709551615UL;
        int l_464 = 1L;
        int **l_482 = &g_59;
        for (l_307 = 0; (l_307 == (-18)); l_307--)
        {
            union U2 *l_430 = (void*)0;
            for (g_60 = 0; (g_60 < 3); ++g_60)
            {
                int **l_428 = &g_119;
                (*l_428) = &g_118;
                (*l_428) = l_429;
                l_430 = &g_63;
            }
            (*l_429) = l_431;
            for (l_394.f0 = (-5); (l_394.f0 != 57); ++l_394.f0)
            {
                short *l_438 = &g_439;
                int *l_440 = (void*)0;
                int *l_441 = &l_362;
                for (g_178.f0 = 9; (g_178.f0 > (-23)); g_178.f0 = safe_sub_func_int8_t_s_s(g_178.f0, 7))
                {
                    int **l_436 = (void*)0;
                    int **l_437 = &l_429;
                    (*l_429) = (*l_429);
                    (*l_437) = l_429;
                }
                (*l_441) = (((*g_98) & ((*l_438) = (((*l_429) = p_42) < p_42))) <= (**g_97));
            }
            l_442 = (void*)0;
        }
        l_307 = (g_55 >= p_42);
        if ((safe_rshift_func_uint8_t_u_s(((*g_206) = (~l_445)), 4)))
        {
            long long **l_446 = (void*)0;
            long long ***l_447 = (void*)0;
            long long ***l_448 = &l_446;
            int **l_449 = (void*)0;
            int **l_450 = &l_429;
            union U2 **l_456 = (void*)0;
            short *l_457 = &g_439;
            int *l_458 = &l_362;
            (*l_448) = l_446;
            (*l_450) = &l_307;
            l_394.f1 = ((*l_458) = ((safe_add_func_int16_t_s_s(((*l_457) = ((**g_97) & (((void*)0 != l_453) > ((g_69 = (*l_429)) || (((*g_359) = l_362) && ((*l_429) = (safe_sub_func_int64_t_s_s(p_42, ((void*)0 != l_456))))))))), p_42)) || (*g_98)));
            (*l_450) = l_429;
        }
        else
        {
            unsigned char l_459 = 0x48L;
            int l_461 = 0x3B6ED61AL;
            if (l_459)
            {
                union U1 *l_460 = &g_270;
                (*g_256) = l_460;
                (*l_429) = (l_461 = p_42);
            }
            else
            {
                short l_469 = 0xA58EL;
                int **l_481 = &l_429;
                if (((safe_add_func_int8_t_s_s((l_464 ^ ((safe_rshift_func_int8_t_s_u((*p_40), (safe_sub_func_int32_t_s_s(l_469, (*g_359))))) >= (*l_429))), (*g_287))) ^ ((*g_206) = l_459)))
                {
                    int **l_470 = &l_429;
                    (*l_429) = p_42;
                    (*l_470) = &l_461;
                    (*l_470) = (*l_470);
                }
                else
                {
                    int **l_471 = &g_119;
                    (*l_471) = &l_461;
                    for (g_379 = (-16); (g_379 >= 58); ++g_379)
                    {
                        return l_390;
                    }
                }
                for (l_350 = 0; (l_350 >= 23); l_350 = safe_add_func_int64_t_s_s(l_350, 5))
                {
                    int *l_476 = &l_464;
                    int **l_477 = &g_59;
                    char **l_480 = &g_287;
                    (*l_477) = (l_476 = &g_118);
                    if ((*g_59))
                        continue;
                    (**l_477) = 0x1278764AL;
                    (*l_476) = (safe_sub_func_int64_t_s_s((-6L), (&g_287 == l_480)));
                }
                (*l_481) = &l_461;
            }
        }
        (*l_482) = &l_362;
    }
    return l_390;
}







static char * func_43(unsigned char p_44, unsigned char * p_45, union U1 p_46, unsigned p_47)
{
    short l_80 = 0x7F66L;
    int l_108 = 0x95BD6605L;
    unsigned long long l_122 = 0x6C1C926A5A418E4ALL;
    unsigned l_130 = 0x849B7D65L;
    short l_194 = 0x0513L;
    union U1 **l_254 = (void*)0;
    int *l_286 = &l_108;
    for (p_46.f0 = (-17); (p_46.f0 > 22); p_46.f0 = safe_add_func_uint8_t_u_u(p_46.f0, 7))
    {
        int *l_61 = &g_60;
        union U2 **l_64 = &g_62;
        l_61 = g_59;
        (*l_64) = g_62;
    }
    if (p_44)
    {
        long long *l_68 = &g_69;
        unsigned *l_74 = (void*)0;
        unsigned *l_75 = &g_76;
        int l_79 = 0x3E09E13AL;
        union U0 *l_177 = &g_178;
        int l_245 = 0xDBAEEB66L;
        union U2 *l_251 = &g_63;
        if (((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int64_t_s(((*l_68) = 5L))), 3)) < ((*g_59) = (safe_lshift_func_uint8_t_u_s(((g_63.f0 & ((0xF4AEDF2FL | ((*l_75) = ((safe_sub_func_int8_t_s_s((p_44 > 4L), p_46.f0)) < p_47))) && ((safe_rshift_func_uint8_t_u_u(((g_63.f0 >= g_55) | 0x453D47EBL), 4)) && 1L))) <= l_79), l_80)))))
        {
            for (l_80 = 0; (l_80 <= (-7)); l_80 = safe_sub_func_int32_t_s_s(l_80, 8))
            {
                int **l_83 = (void*)0;
                int **l_84 = (void*)0;
                int *l_86 = &l_79;
                int **l_85 = &l_86;
                char *l_89 = &g_90;
                unsigned short *l_120 = &g_55;
                unsigned short **l_121 = &l_120;
                (*l_85) = (g_59 = &g_60);
            }
        }
        else
        {
            char *l_144 = &g_90;
            int l_169 = 0xF0D96589L;
            int **l_191 = &g_119;
            if ((l_108 || l_122))
            {
                int l_147 = (-1L);
                char *l_152 = &g_90;
                int *l_175 = (void*)0;
                for (p_44 = 9; (p_44 > 43); ++p_44)
                {
                    union U1 **l_126 = &g_125;
                    char *l_127 = &g_90;
                    (*g_119) = (+(*g_59));
                    (*l_126) = g_125;
                    return l_127;
                }
                if ((*g_59))
                {
                    short l_133 = 0xB213L;
                    unsigned long long *l_134 = &l_122;
                    int **l_139 = &g_59;
                    (*g_59) = (safe_mul_func_int8_t_s_s(p_46.f0, l_130));
                    if ((((safe_sub_func_int8_t_s_s((l_79 | ((*l_134) = l_133)), (safe_mul_func_int8_t_s_s(l_133, (safe_mod_func_uint8_t_u_u(((g_118 != ((void*)0 == l_139)) < (((+g_90) > (**l_139)) | (safe_lshift_func_int16_t_s_s(l_79, l_79)))), 6L)))))) >= 0x8759D8E9L) || (*g_59)))
                    {
                        union U2 **l_143 = &g_62;
                        (*l_139) = (*l_139);
                        (*l_143) = g_142;
                    }
                    else
                    {
                        return l_144;
                    }
                    (*g_119) = (safe_sub_func_int64_t_s_s((g_76 == ((*l_68) = g_60)), (-4L)));
                    (*g_119) = (l_147 = (*g_119));
                }
                else
                {
                    int **l_148 = &g_59;
                    (*l_148) = (void*)0;
                    for (p_46.f0 = (-11); (p_46.f0 != 12); ++p_46.f0)
                    {
                        int *l_151 = &g_60;
                        (*l_148) = l_151;
                        return l_152;
                    }
                }
                if ((!(0x63B3A314L >= p_46.f0)))
                {
                    int *l_174 = &l_169;
                    (*l_174) = ((((((safe_rshift_func_uint8_t_u_u(g_118, 1)) == g_76) || (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(0x72D1L, 14)), (safe_sub_func_int32_t_s_s((!((*g_119) = ((l_79 > ((safe_mod_func_int8_t_s_s(0xCFL, (safe_rshift_func_int8_t_s_s(l_169, 0)))) | (safe_mul_func_int16_t_s_s(6L, (safe_mul_func_uint16_t_u_u(l_169, (*g_98))))))) || (**g_97)))), l_108)))), p_47)), p_47))) || 0x01AA1EC439117408LL) == p_44) > p_47);
                    return &g_90;
                }
                else
                {
                    int **l_176 = &g_119;
                    (*l_176) = l_175;
                }
            }
            else
            {
                union U0 **l_179 = (void*)0;
                union U0 **l_180 = &l_177;
                unsigned *l_181 = &l_130;
                (*l_180) = l_177;
                if ((p_47 ^ ((*l_181) = ((*l_75) = (g_178.f0 & g_90)))))
                {
                    union U2 **l_182 = &g_142;
                    (*l_182) = &g_63;
                }
                else
                {
                    char *l_190 = &g_90;
                    (*g_119) = (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(g_76, 3)), (safe_mul_func_int8_t_s_s(((*l_144) = (safe_unary_minus_func_int32_t_s((*g_119)))), g_55))));
                    return l_190;
                }
            }
            (*l_191) = &l_79;
            for (p_47 = (-2); (p_47 > 30); ++p_47)
            {
                unsigned char *l_207 = &g_63.f0;
                union U0 **l_217 = &l_177;
                int l_220 = 0x98E47A8FL;
                int l_223 = 0x7B958418L;
                unsigned short ***l_258 = &g_97;
            }
        }
        p_46.f1 = l_79;
    }
    else
    {
        int l_277 = 0xF9674B01L;
        for (p_44 = 0; (p_44 > 29); p_44 = safe_add_func_uint8_t_u_u(p_44, 8))
        {
            int **l_261 = &g_119;
            (*l_261) = &g_118;
            (**l_261) = (*g_119);
        }
    }
    (*g_256) = (*g_256);
    l_286 = &l_108;
    return g_287;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_178.f0, "g_178.f0", print_hash_value);
    transparent_crc(g_270.f1, "g_270.f1", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_648, "g_648", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
