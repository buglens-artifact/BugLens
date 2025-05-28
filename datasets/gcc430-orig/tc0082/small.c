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



static long long g_9 = 0xCEAFD94FE5F36F6DLL;
static unsigned long long g_10 = 0xD00693E9323D1BCALL;
static int g_32 = 9L;
static int *g_36 = &g_32;
static int g_55 = 0L;
static long long g_66 = 3L;
static unsigned g_68 = 0x0F4B430FL;
static char g_73 = 0xB6L;
static unsigned long long g_77 = 18446744073709551606UL;
static unsigned long long *g_79 = &g_10;
static unsigned long long * const *g_78 = &g_79;
static int *g_94 = &g_55;
static long long g_99 = 0x5BEA6296EF6A07EBLL;
static short g_125 = 0xE302L;
static unsigned char g_127 = 0x76L;
static int g_132 = 0L;
static const long long g_144 = 0x92153B372D1EC869LL;
static unsigned char g_199 = 0x1CL;
static char g_227 = 0L;
static char g_232 = (-1L);
static char g_264 = 0x95L;
static unsigned *g_304 = &g_68;
static unsigned **g_303 = &g_304;
static unsigned long long g_340 = 9UL;
static unsigned char ** const g_349 = (void*)0;
static unsigned g_364 = 0x7C5824AAL;
static unsigned short g_367 = 0x885BL;
static long long *g_412 = &g_66;
static long long **g_411 = &g_412;
static long long g_479 = 0x11EB9AEA71C1B7A6LL;
static unsigned **g_539 = &g_304;
static long long g_557 = 0L;
static long long **g_620 = &g_412;
static long long *g_667 = &g_479;



static char func_1(void);
static const long long func_4(long long p_5, unsigned p_6, short p_7);
static int * func_11(unsigned char p_12, char p_13, long long * p_14);
static long long * func_15(short p_16);
static short func_17(long long * p_18, unsigned p_19, unsigned char p_20, unsigned char p_21);
static int * const func_25(unsigned long long p_26, long long p_27, unsigned char p_28);
static unsigned long long * func_37(int ** p_38, long long * p_39, int p_40, unsigned long long p_41, unsigned char p_42);
static int ** func_43(unsigned long long * p_44);
static long long * func_50(unsigned short p_51);
static unsigned long long * const * func_59(int * const p_60);
static char func_1(void)
{
    long long *l_8 = &g_9;
    unsigned *l_695 = (void*)0;
    unsigned **l_694 = &l_695;
    unsigned ***l_696 = (void*)0;
    unsigned **l_698 = &l_695;
    unsigned ***l_697 = &l_698;
    const int l_699 = 0xBEEA0E83L;
    int *l_700 = &g_32;
    int **l_701 = &g_36;
    (*l_700) = ((safe_add_func_int64_t_s_s(func_4(((*l_8) = 8L), g_10, g_10), (l_694 == ((*l_697) = &l_695)))) | l_699);


    ;


lbl_708:
    (*l_701) = &g_32;

    ;
    for (g_264 = (-3); (g_264 > (-10)); g_264--)
    {
        (*l_701) = (*l_701);
        for (g_132 = (-30); (g_132 > 10); g_132 = safe_add_func_int16_t_s_s(g_132, 6))
        {
            unsigned **l_712 = &l_695;
            int l_720 = 1L;
            for (g_232 = 0; (g_232 == 8); ++g_232)
            {
                unsigned **l_711 = &l_695;
                int *l_713 = &g_132;
                if (g_232)
                    goto lbl_708;
                (*l_701) = (void*)0;

                ;
                for (g_68 = (-24); (g_68 != 45); g_68 = safe_add_func_int16_t_s_s(g_68, 3))
                {
                    l_712 = ((*l_697) = l_711);
                    (*l_701) = l_713;

                    ;
                    for (g_73 = (-22); (g_73 > (-5)); ++g_73)
                    {
                        int *l_716 = (void*)0;
                        int **l_717 = &l_716;
                        (*l_717) = ((*l_701) = l_716);

                        ;
                        (*l_701) = &g_32;

                        ;
                    }

                    ;
                    g_36 = &g_132;

                    ;
                }

                ;
            }
            for (g_127 = 0; (g_127 == 9); g_127 = safe_add_func_int8_t_s_s(g_127, 8))
            {
                l_720 = (*g_94);
            }
        }
    }

    ;
    return g_32;
}







static const long long func_4(long long p_5, unsigned p_6, short p_7)
{
    int l_22 = (-3L);
    short *l_234 = &g_125;
    int **l_693 = &g_94;
    (*l_693) = func_11((((0x7BB0L > (p_7 = 0xBB4AL)) != p_6) | p_6), ((&g_9 == (void*)0) > (g_9 > p_5)), func_15(((*l_234) = func_17(&g_9, l_22, g_10, p_5))));


    ;


    (*g_94) = 0x9AD63CF4L;
    (*l_693) = (*l_693);
    return p_5;
}







static int * func_11(unsigned char p_12, char p_13, long long * p_14)
{
    int l_245 = 0x895B54F2L;
    unsigned long long **l_247 = (void*)0;
    unsigned long long ***l_246 = &l_247;
    short l_263 = 0xF369L;
    char *l_292 = &g_227;
    const char l_328 = 0xE3L;
    long long *l_372 = &g_66;
    char l_392 = 0L;
    char l_405 = (-10L);
    unsigned *l_413 = &g_68;
    short l_416 = 5L;
    char l_470 = 5L;
    char l_486 = 0x73L;
    int *l_533 = &g_32;
    unsigned char l_589 = 254UL;
    unsigned short *l_593 = &g_367;
    unsigned l_600 = 3UL;
    if (p_12)
    {
        unsigned char l_248 = 0x12L;
        const int *l_249 = &l_245;
        const int **l_250 = &l_249;
        (*g_36) = (l_248 = ((p_12 == l_245) & (&g_78 != l_246)));
        (*l_250) = l_249;
    }
    else
    {
        const unsigned l_253 = 1UL;
        int l_260 = (-9L);
        unsigned char *l_335 = &g_199;
        int **l_399 = &g_94;
        unsigned l_518 = 0UL;
        long long *l_573 = &g_9;
        int l_581 = 0xCF1B0A72L;
    }
    if ((((g_66 | ((*l_593) = p_13)) & (!((g_264 >= (safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((*l_533) ^ (safe_add_func_uint16_t_u_u(l_600, ((safe_rshift_func_int16_t_s_s((p_13 > ((void*)0 == l_372)), ((*l_533) > g_32))) > (*p_14))))), p_13)), (*l_533)))) > p_12))) < (*l_533)))
    {
        char *l_603 = &g_232;
        int l_604 = 0x28CDF75FL;
        long long **l_605 = &l_372;
        int l_614 = 0x156BA6A3L;
        int *l_615 = &g_32;
        unsigned ***l_617 = &g_539;
        (*l_533) = (((*l_292) = (&g_79 == &g_79)) | (((*l_603) = g_340) & l_604));
        (*l_533) = (*l_533);
        if ((((p_12 <= p_12) == 1UL) ^ p_12))
        {
            int **l_606 = (void*)0;
            int **l_607 = &l_533;
            int **l_608 = &g_94;
            int *l_613 = &l_604;
            (*l_608) = ((*l_607) = &g_32);

            ;
            l_615 = func_25((**g_78), ((safe_rshift_func_uint8_t_u_u(((*l_533) || (4294967290UL != ((*l_613) = (*g_36)))), (g_127 = 1UL))) <= ((*l_603) = (*l_533))), l_614);
            (*g_94) = p_13;
        }
        else
        {
            short *l_616 = &g_125;
            int l_618 = 4L;
            int l_642 = 0L;
            if (((((**g_539) = ((*l_615) = (*g_304))) ^ (p_13 < ((*l_616) = 1L))) != ((*g_79) >= 0xE5374D0C007682DELL)))
            {
                short l_627 = 0xB159L;
                int *l_631 = &l_618;
                if ((65535UL <= ((l_617 == l_617) == l_618)))
                {
                    (*g_36) = 7L;
                }
                else
                {
                    long long ***l_619 = &g_411;
                    unsigned *l_626 = &g_364;
                    unsigned **l_625 = &l_626;
                    int **l_634 = (void*)0;
                    int **l_635 = &l_631;
                    if (((((g_620 = ((*l_619) = &p_14)) != (void*)0) != ((safe_mod_func_int64_t_s_s((safe_add_func_int64_t_s_s((-1L), ((**g_78) = (&g_364 != ((*l_625) = &g_364))))), p_13)) | (*l_615))) != l_627))
                    {
                        unsigned l_628 = 1UL;
                        (*l_615) = 0xA5127BBCL;
                        (*l_615) = l_628;
                    }
                    else
                    {
                        int **l_629 = (void*)0;
                        int **l_630 = &g_36;
                        (*l_630) = &g_132;

                        ;
                        g_94 = (g_36 = l_631);

                        ;
                        ;
                        (**l_630) = (((**g_539) = ((safe_mod_func_uint16_t_u_u((g_349 != (void*)0), (-10L))) < 0x98L)) && 0xFA86E6F8L);
                    }

                    ;
                    ;
                    ;
                    ;
                    (*l_635) = l_626;

                    ;
                    (*g_36) = ((g_479 | ((((*l_616) = p_13) != p_13) & p_12)) >= p_12);
                    for (g_73 = 17; (g_73 > 24); ++g_73)
                    {
                        return &g_55;






                    }
                }

                ;
                ;
                ;
                ;
                ;
                return &g_55;






            }
            else
            {
                int *l_655 = &g_132;
                if ((((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(l_642, (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((*l_413) = (l_618 = 0x279DEE3EL)), (safe_sub_func_uint64_t_u_u(((*g_79) = p_12), 1L)))), 12)) ^ g_479) || (**g_620)), (7UL < l_642))), (((g_127 < 0x4F3AL) >= p_13) & p_13))))), 0UL)) || p_12) < (*g_36)))
                {
                    int **l_657 = (void*)0;
                    int **l_658 = &g_94;
                    for (g_73 = 0; (g_73 != 0); g_73 = safe_add_func_int64_t_s_s(g_73, 6))
                    {
                        int **l_656 = &g_36;
                        (*l_656) = l_655;

                        ;
                        (*l_656) = &g_32;

                        ;
                    }
                    (*l_658) = &g_55;

                    ;
                }
                else
                {
                    unsigned long long l_668 = 1UL;
                    unsigned l_678 = 0UL;
                    if ((*g_36))
                    {
                        int **l_669 = &g_94;
                        (*l_669) = &l_618;

                        ;
                        (*l_655) = (safe_mod_func_int32_t_s_s(func_17(((*g_620) = (*g_620)), (*l_615), (*l_655), p_12), (safe_sub_func_uint16_t_u_u(g_144, g_144))));

                        ;
                        return &g_32;



                    }
                    else
                    {
                        long long l_681 = 8L;
                        int **l_682 = &g_94;
                        int **l_683 = &l_615;
                        (*l_682) = &g_132;

                        ;
                        (*l_533) = p_12;
                        (*l_683) = ((*l_682) = &l_245);

                        ;
                        ;
                    }

                    ;
                    ;
                }

                ;
                ;
                for (l_618 = 0; (l_618 == 8); l_618 = safe_add_func_int64_t_s_s(l_618, 2))
                {
                    int **l_686 = &l_615;
                    (*l_686) = &g_132;

                    ;
                    return &g_132;



                }
                return &g_132;



            }
        }

        ;
    }
    else
    {
        int *l_689 = &g_132;
        (*l_689) = ((*l_533) = (safe_rshift_func_uint8_t_u_u((*l_533), 4)));
        for (g_77 = 0; (g_77 < 57); ++g_77)
        {
            unsigned l_692 = 0x07859ACCL;
            if (l_692)
                break;
        }
    }
    l_533 = &g_55;

    ;
    return &g_55;


}







static long long * func_15(short p_16)
{
    unsigned *l_241 = &g_68;
    unsigned **l_240 = &l_241;
    long long *l_244 = &g_66;
    for (g_55 = 0; (g_55 >= 21); g_55++)
    {
        int *l_237 = (void*)0;
        int **l_238 = &g_94;
        int *l_239 = &g_132;
        unsigned ***l_242 = (void*)0;
        unsigned ***l_243 = &l_240;
        (*l_238) = l_237;

        ;
        (*l_239) = p_16;
        (*l_243) = l_240;
    }
    return l_244;


}







static short func_17(long long * p_18, unsigned p_19, unsigned char p_20, unsigned char p_21)
{
    int l_161 = 0L;
    int * const l_166 = (void*)0;
    long long l_167 = 7L;
    unsigned long long l_191 = 18446744073709551615UL;
    int **l_209 = &g_94;
    if (p_21)
    {
        int *l_156 = &g_55;
        for (p_21 = (-25); (p_21 <= 5); p_21++)
        {
            unsigned long long *l_29 = &g_10;
            int l_30 = (-8L);
            int **l_155 = &g_36;
            (*l_155) = func_25(((*l_29) = g_10), g_9, l_30);

            ;
            (*l_155) = l_156;

            ;
        }
        (*g_94) = (safe_add_func_uint16_t_u_u(((*g_94) <= (((((safe_mod_func_int16_t_s_s((p_19 > p_20), l_161)) != (safe_sub_func_uint32_t_u_u(p_20, 1UL))) <= (safe_rshift_func_uint8_t_u_s(l_161, (g_68 >= (l_166 == l_166))))) || l_167) == (-1L))), g_68));
        (*g_36) = p_21;
    }
    else
    {
        unsigned long long l_168 = 18446744073709551615UL;
        unsigned char *l_171 = &g_127;
        int *l_174 = &g_132;
        int **l_200 = (void*)0;
        (*g_94) = (((l_161 || ((g_66 | l_168) >= p_20)) & ((0UL ^ ((((((void*)0 != l_171) && (*g_36)) && (&g_99 != p_18)) <= (**g_78)) == 1L)) != 0xE864F27CL)) >= p_19);
        (*g_94) = (-6L);
        for (g_66 = (-1); (g_66 == (-1)); g_66++)
        {
            short l_182 = (-1L);
            char l_183 = 0xCDL;
            if (((void*)0 != l_174))
            {
                int *l_175 = &g_132;
                int **l_176 = &l_175;
                g_94 = l_175;

                ;
                (*l_176) = l_166;

                ;
                for (l_168 = 0; (l_168 >= 26); l_168 = safe_add_func_uint16_t_u_u(l_168, 8))
                {
                    for (g_68 = 17; (g_68 <= 44); ++g_68)
                    {
                        int **l_181 = &l_175;
                        (*g_36) = (*g_94);
                        (*l_181) = l_166;
                        if (p_19)
                            break;
                        (*l_174) = p_20;
                    }
                    if (l_182)
                    {
                        return (*l_174);
                    }
                    else
                    {
                        if ((*g_36))
                            break;
                        (*l_176) = &g_132;

                        ;
                        return l_183;
                    }
                }
            }
            else
            {
                int l_188 = 0xD215D55BL;
                unsigned char *l_198 = &g_199;
                (*g_36) = (g_127 <= (safe_sub_func_int16_t_s_s((!0L), (((safe_rshift_func_uint8_t_u_u(l_188, 7)) < (safe_sub_func_int64_t_s_s(l_191, (g_99 || ((safe_lshift_func_uint8_t_u_u(((*l_198) = (((*g_79) = (safe_add_func_int32_t_s_s(p_21, 2L))) <= (safe_rshift_func_uint8_t_u_s(l_183, 1)))), 1)) <= (p_21 && p_20)))))) >= 0x969AL))));
            }
        }


        g_94 = l_174;

        ;
    }


    (*g_36) = (safe_lshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(0x6DL, g_99)) == g_125), (safe_rshift_func_uint8_t_u_u(((18446744073709551608UL && p_19) <= ((3UL <= g_125) && g_66)), 5))));
    if (((*g_36) = (safe_lshift_func_uint8_t_u_u(p_20, (p_20 && (((*l_209) = (void*)0) == (void*)0))))))
    {
        int l_210 = 3L;
        (*g_36) = (((g_127 <= l_210) || l_210) || (safe_mod_func_int8_t_s_s(p_21, 9L)));
    }
    else
    {
        char *l_219 = &g_73;
        char *l_226 = &g_227;
        unsigned long long *l_230 = (void*)0;
        char *l_231 = &g_232;
        int l_233 = 0x38836213L;
        l_233 = ((*g_36) = (safe_add_func_uint64_t_u_u(p_21, (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((*l_219) = 0xD5L) > ((*g_36) > (g_32 && (safe_rshift_func_int8_t_s_s((-10L), 2))))), (g_99 > (safe_rshift_func_int8_t_s_u(((*l_226) = (safe_lshift_func_uint8_t_u_s(g_99, 3))), 3))))), (safe_sub_func_uint8_t_u_u((((((*l_231) = ((void*)0 == l_230)) & g_9) ^ l_233) || (*g_36)), g_144)))))));
        (*g_36) = l_233;
    }


    return p_21;
}







static int * const func_25(unsigned long long p_26, long long p_27, unsigned char p_28)
{
    int *l_31 = &g_32;
    (*l_31) = (1L >= g_9);
    for (g_32 = 0; (g_32 == (-29)); g_32 = safe_sub_func_uint32_t_u_u(g_32, 9))
    {
        return &g_32;


    }
    if ((255UL && g_10))
    {
        int **l_35 = (void*)0;
        unsigned long long *l_45 = &g_10;
        unsigned long long **l_151 = &l_45;
        g_36 = &g_32;

        ;
        (*l_31) = (((*l_151) = func_37(func_43(l_45), func_50(g_9), (safe_rshift_func_int16_t_s_u((0x23L | g_10), p_27)), (g_99 = p_28), g_10)) != (void*)0);

        ;
        g_36 = &g_55;

        ;
        for (g_68 = 2; (g_68 > 5); ++g_68)
        {
            int **l_154 = &g_36;
            (*l_154) = &g_55;
            if ((*l_31))
                break;
        }
    }
    else
    {
        return l_31;


    }

    ;
    (*g_36) = (*g_36);
    return l_31;


}







static unsigned long long * func_37(int ** p_38, long long * p_39, int p_40, unsigned long long p_41, unsigned char p_42)
{
    const int l_103 = 0x34BCD012L;
    int l_141 = (-1L);
    unsigned long long *l_150 = &g_10;
lbl_145:
    for (g_32 = 3; (g_32 < (-9)); g_32 = safe_sub_func_uint32_t_u_u(g_32, 2))
    {
        int *l_102 = &g_55;
        l_102 = &g_32;

        ;
        if (l_103)
        {
            int *l_104 = (void*)0;
            int *l_105 = &g_55;
            (*l_105) = (*g_36);
            for (g_99 = (-1); (g_99 > 22); g_99 = safe_add_func_uint32_t_u_u(g_99, 5))
            {
                int *l_133 = &g_55;
                if ((*g_94))
                    break;
                for (g_77 = 0; (g_77 >= 36); g_77++)
                {
                    int **l_110 = &g_94;
                    int *l_111 = &g_55;
                    l_111 = ((*l_110) = ((*p_38) = (*p_38)));

                    ;
                    ;
                }
                if (g_99)
                    goto lbl_145;
            }
            return &g_77;


        }
        else
        {
            unsigned long long l_136 = 0x5260EE2FB047B2A2LL;
            int **l_140 = (void*)0;
            for (g_125 = 0; (g_125 >= (-5)); --g_125)
            {
                int *l_137 = &g_132;
                int **l_139 = &g_36;
                int ***l_138 = &l_139;
                if ((*g_94))
                    break;
                (*l_137) = l_136;
                (*l_138) = p_38;
                l_140 = func_43(&g_10);

                ;
            }

            ;
            l_141 = (*l_102);
            for (p_42 = 0; (p_42 <= 1); p_42++)
            {
                (*p_38) = &g_32;
            }
        }
        p_40 = g_144;
    }
    for (g_132 = 5; (g_132 == (-3)); g_132--)
    {
        (*g_94) = ((void*)0 == &g_68);
        (*g_94) = ((void*)0 != &p_42);
    }
    for (g_127 = 0; (g_127 < 33); g_127++)
    {
        return &g_77;


    }
    (*p_38) = &g_32;
    return l_150;


}







static int ** func_43(unsigned long long * p_44)
{
    int **l_47 = &g_36;
    int ***l_46 = &l_47;
    int **l_49 = &g_36;
    int ***l_48 = &l_49;
    (*l_48) = ((*l_46) = &g_36);
    (*l_47) = &g_32;

    ;
    return &g_36;


}







static long long * func_50(unsigned short p_51)
{
    unsigned char l_58 = 0UL;
    int * const l_61 = &g_55;
    long long *l_96 = &g_9;
    for (g_32 = 0; (g_32 != (-11)); --g_32)
    {
        int *l_54 = &g_55;
        unsigned long long * const **l_95 = &g_78;
        (*l_54) = g_9;
        l_58 = ((safe_lshift_func_uint16_t_u_u(g_9, 8)) || p_51);
        (*l_95) = func_59(l_61);
    }
    return l_96;


}







static unsigned long long * const * func_59(int * const p_60)
{
    short l_64 = 0L;
    long long *l_65 = &g_66;
    unsigned *l_67 = &g_68;
    char *l_71 = (void*)0;
    char *l_72 = &g_73;
    unsigned long long *l_76 = &g_77;
    int l_92 = 0xE0C605F7L;
    unsigned l_93 = 0xF6402D6FL;
    if ((safe_lshift_func_int16_t_s_u((((*l_65) = (l_64 && g_10)) <= g_55), (((*l_76) = ((((*l_67) = l_64) != 8L) ^ (l_64 & ((safe_rshift_func_uint16_t_u_u(4UL, (((*l_72) = g_55) < ((safe_add_func_uint64_t_u_u(6UL, g_55)) || 0x19AB6322L)))) | l_64)))) >= g_55))))
    {
        return g_78;


    }
    else
    {
        int **l_80 = (void*)0;
        int *l_82 = &g_32;
        int **l_81 = &l_82;
        (*l_81) = l_67;

        ;
    }
    if (g_66)
    {
        const int l_85 = 0L;
        int l_88 = 0x84DAEA48L;
        (*p_60) = (!6L);
        (*p_60) = ((((p_60 == &g_32) && (safe_sub_func_uint32_t_u_u(6UL, (l_85 >= (safe_add_func_int16_t_s_s((g_9 != (l_88 = l_85)), ((-6L) & g_77))))))) & ((-3L) & l_64)) && 0x0454F8DAL);
    }
    else
    {
        int **l_89 = (void*)0;
        int *l_91 = &g_55;
        int **l_90 = &l_91;
        (*l_90) = p_60;
        l_93 = ((l_92 = g_55) <= ((void*)0 != &g_32));
        g_94 = &g_32;

        ;
    }
    return &g_79;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
