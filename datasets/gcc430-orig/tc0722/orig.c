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



static int g_12 = 0x543BEB71L;
static unsigned char g_19 = 0UL;
static unsigned char g_40 = 255UL;
static int g_50 = 0x795C380AL;
static unsigned short g_55 = 0UL;
static unsigned char g_63 = 1UL;
static unsigned g_69 = 0x8E23095CL;
static volatile short g_104 = 0xA068L;
static int g_107 = 0x2E49D2A5L;
static short g_114 = 0xEEA3L;
static short g_123 = (-3L);
static volatile unsigned g_132 = 1UL;
static volatile char g_139 = 0L;
static volatile unsigned short g_140 = 0x6DBBL;
static short g_164 = 4L;
static unsigned char g_171 = 0UL;
static volatile int g_201 = (-8L);
static volatile char g_225 = 8L;
static char g_238 = 1L;
static short g_242 = 0xDE28L;
static volatile short g_287 = 0x7B8FL;
static volatile unsigned short g_291 = 1UL;
static unsigned short ***g_349 = (void*)0;
static volatile int g_355 = 0L;
static unsigned char g_375 = 0xA3L;
static unsigned g_454 = 1UL;
static volatile unsigned g_601 = 1UL;
static volatile unsigned short g_637 = 0UL;
static int *g_655 = &g_50;
static unsigned char g_662 = 246UL;
static unsigned char *g_661 = &g_662;
static unsigned short *g_671 = &g_55;
static volatile unsigned g_763 = 0xF117D2C4L;
static volatile unsigned g_771 = 0x01114489L;
static unsigned g_813 = 4294967294UL;
static char g_834 = (-1L);
static unsigned short g_968 = 1UL;
static short g_979 = 0xC01DL;
static unsigned **g_980 = (void*)0;
static unsigned g_999 = 7UL;
static int g_1008 = (-1L);
static volatile unsigned *g_1036 = &g_601;
static volatile unsigned **g_1035 = &g_1036;



static short func_1(void);
static int func_2(int p_3);
static unsigned char func_6(unsigned char p_7, int p_8, unsigned p_9, short p_10, unsigned short p_11);
static unsigned short func_13(unsigned p_14);
static unsigned char func_22(unsigned char * p_23);
static unsigned char * func_24(int p_25, int p_26);
static int func_27(unsigned char * p_28, unsigned p_29, char p_30, unsigned char * p_31, unsigned p_32);
static unsigned char * func_33(unsigned p_34, unsigned char * p_35, unsigned char p_36, unsigned short p_37, unsigned p_38);
static unsigned char * func_41(unsigned char * p_42, unsigned char p_43, unsigned char * p_44);
static unsigned char * func_45(unsigned p_46);
static short func_1(void)
{
    unsigned l_1006 = 0UL;
    int *l_1007 = &g_1008;
    (*l_1007) = func_2((safe_lshift_func_uint8_t_u_s(func_6(g_12, ((-6L) < ((0x3292C5EBL | g_12) != (func_13((~g_12)) <= (((*l_1007) = (((safe_lshift_func_uint16_t_u_u(0xEC6CL, 9)) != ((1UL < ((((safe_lshift_func_int16_t_s_s(l_1006, g_12)) < 0xE55B18B5L) > l_1006) != l_1006)) <= g_662)) == g_662)) > g_12)))), g_12, g_12, g_662), g_12)));


    ;
    return g_132;
}







static int func_2(int p_3)
{
    unsigned short l_1033 = 0x2A59L;
    int *l_1034 = &g_50;
    int *l_1037 = &g_1008;
    (*l_1034) ^= (l_1033 ^= (g_349 != (void*)0));
    (*l_1037) &= (((void*)0 == g_1035) ^ (*l_1034));
    return (*l_1037);
}







static unsigned char func_6(unsigned char p_7, int p_8, unsigned p_9, short p_10, unsigned short p_11)
{
    unsigned char l_1009 = 0x18L;
    unsigned char *l_1012 = &g_375;
    int l_1015 = 0L;
    unsigned *l_1016 = (void*)0;
    unsigned *l_1017 = (void*)0;
    unsigned *l_1018 = &g_454;
    int l_1021 = (-4L);
    int *l_1022 = &g_1008;
    int *l_1023 = &g_107;
    unsigned *l_1025 = &g_999;
    unsigned **l_1024 = &l_1025;
    (*l_1023) = ((*l_1022) = (l_1009 == (0xF4A5F1E0L ^ func_13((!(((safe_mod_func_uint8_t_u_u((func_27(l_1012, p_10, (l_1015 = (safe_lshift_func_int8_t_s_u(p_9, l_1009))), func_33(((*l_1018)--), &p_7, (*g_661), l_1009, l_1009), l_1009) <= g_55), (*g_661))) <= l_1021) | 0x130A7D56L))))));
    if ((*l_1022))
    {
lbl_1026:
        (*l_1022) ^= ((void*)0 != l_1024);
    }
    else
    {
        if (g_454)
            goto lbl_1026;
    }
    (*l_1023) |= p_8;
    for (g_55 = 5; (g_55 <= 40); g_55 = safe_add_func_uint32_t_u_u(g_55, 5))
    {
        volatile int *l_1030 = &g_201;
        volatile int **l_1029 = &l_1030;
        int *l_1031 = &l_1021;
        int **l_1032 = &l_1022;
        (*l_1029) = &g_201;
        (*l_1032) = l_1031;

        ;
    }

    ;
    return (*g_661);
}







static unsigned short func_13(unsigned p_14)
{
    unsigned char *l_39 = &g_40;
    int l_47 = (-6L);
    unsigned l_826 = 0x2684B9D6L;
    int l_890 = 0xBF76927BL;
    int l_896 = 0x2173ECC3L;
    int l_926 = 2L;
    int l_942 = (-1L);
    char l_986 = 0xCEL;
    int l_989 = 0x7C5FFF9BL;
    short *l_990 = &g_123;
    short *l_997 = (void*)0;
    short *l_998 = &g_979;
    for (p_14 = 0; (p_14 <= 50); p_14 = safe_add_func_uint32_t_u_u(p_14, 4))
    {
        unsigned char *l_17 = (void*)0;
        unsigned char *l_18 = &g_19;
        unsigned char **l_174 = &l_17;
        unsigned char *l_374 = &g_375;
        int l_376 = (-6L);
        int *l_785 = (void*)0;
        int *l_786 = &g_107;
        unsigned short **l_790 = &g_671;
        unsigned char *l_850 = &g_662;
        int l_892 = 0xB1CB31A4L;
        int l_922 = 1L;
        int l_930 = 5L;
        int l_936 = (-4L);
        int l_950 = 0L;
        if ((~((*l_786) = (((((*l_18) = g_12) > (safe_rshift_func_uint8_t_u_s(func_22(func_24(func_27(func_33(((void*)0 == l_39), func_41(func_45(l_47), g_12, ((*l_174) = l_39)), (((*l_374) |= g_12) && p_14), p_14, l_376), l_47, p_14, g_661, g_12), l_376)), 5))) ^ l_376) == p_14))))
        {
            unsigned char l_789 = 0x36L;
            unsigned short ***l_791 = &l_790;
            unsigned char *l_794 = &g_19;
            unsigned *l_795 = &g_454;
            if ((safe_lshift_func_uint16_t_u_u(((p_14 || (l_789 && (((*l_791) = l_790) == (void*)0))) || l_47), (p_14 >= (safe_rshift_func_uint8_t_u_u((+func_27(l_794, (--(*l_795)), p_14, func_41(func_41(func_45(p_14), p_14, l_39), (*g_661), l_39), p_14)), 2))))))
            {
                int **l_798 = (void*)0;
                int **l_799 = (void*)0;
                int **l_800 = &l_786;
                (*l_800) = (void*)0;

                ;
                (*l_800) = &g_50;

                ;
            }
            else
            {
                unsigned short *l_817 = &g_55;
                unsigned char l_818 = 0xA6L;
                int *l_846 = (void*)0;
                unsigned short l_853 = 0UL;
                for (g_171 = 0; (g_171 < 31); g_171 = safe_add_func_uint8_t_u_u(g_171, 1))
                {
                    unsigned short *l_808 = &g_55;
                    unsigned *l_809 = &g_69;
                    unsigned *l_812 = &g_813;
                    unsigned char *l_814 = (void*)0;
                    int l_819 = 5L;
                    if (func_27(&g_63, g_40, ((safe_mod_func_uint32_t_u_u(((((safe_unary_minus_func_int32_t_s(g_104)) > ((g_238 |= (0L ^ 1UL)) > p_14)) & ((*l_808) &= (~(safe_lshift_func_int8_t_s_s(4L, 3))))) < 0x40L), (--(*l_809)))) == ((*l_812) = p_14)), l_814, g_50))
                    {
                        int *l_820 = &g_50;
                        if (p_14)
                            break;
                        (*l_820) = (l_819 = (g_107 = (safe_sub_func_uint32_t_u_u(g_454, ((l_817 == (void*)0) == (g_355 == l_818))))));
                    }
                    else
                    {
                        unsigned **l_821 = (void*)0;
                        unsigned **l_822 = &l_795;
                        char *l_823 = &g_238;
                        char *l_833 = &g_834;
                        int *l_835 = &l_376;
                        int **l_836 = &g_655;
                        (*l_835) &= (((*l_823) = (l_812 != ((*l_822) = &p_14))) == (safe_mod_func_int32_t_s_s(((l_826 != (p_14 >= 65535UL)) && (((safe_rshift_func_uint16_t_u_s(((((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((*l_786), func_27(&g_40, l_47, ((*l_833) |= g_123), l_823, g_355))), p_14)) >= 0x96F0AF87L) ^ p_14) || (*l_786)), 13)) > p_14) <= p_14)), p_14)));

                        ;
                        (*l_836) = &l_819;

                        ;
                        (*l_786) = p_14;
                        if ((*g_655))
                            break;

                    }


                }

                ;
                if (((*l_786) &= p_14))
                {
                    for (g_19 = (-25); (g_19 >= 50); g_19 = safe_add_func_uint8_t_u_u(g_19, 3))
                    {
                        int **l_843 = &g_655;
                        (*l_786) = (safe_mod_func_uint16_t_u_u(((*l_817) = (safe_rshift_func_int8_t_s_u(l_818, 5))), g_123));
                        if (g_164)
                            break;
                        if (l_826)
                            break;
                        (*l_843) = &l_376;

                        ;
                    }


                    for (g_834 = 0; (g_834 != (-10)); --g_834)
                    {
                        (*l_786) = 0x080916BCL;
                    }
                }
                else
                {
                    int **l_847 = &g_655;
                    (*l_786) &= p_14;
                    (*l_847) = l_846;

                    ;
                    (*l_786) |= p_14;
                    (*l_786) = p_14;
                }


                (*l_791) = (*l_791);
                l_47 |= ((safe_sub_func_uint16_t_u_u(p_14, ((~(+p_14)) ^ func_22(&g_63)))) || func_27(l_850, p_14, l_789, l_39, p_14));
            }


            ;
            ;
        }
        else
        {
            short l_920 = 0x8DB6L;
            int l_941 = 0x6DE320A7L;
            int l_951 = (-6L);
            unsigned **l_981 = (void*)0;
            unsigned *l_984 = &g_454;
            unsigned **l_983 = &l_984;
            for (g_454 = 0; (g_454 == 57); g_454++)
            {
                (*l_786) |= (safe_lshift_func_int8_t_s_s(1L, 5));
            }
            for (g_171 = 0; (g_171 != 2); ++g_171)
            {
                int *l_860 = (void*)0;
                int *l_861 = &l_47;
                int l_862 = 0x24AA342DL;
                int *l_863 = &g_50;
                int *l_864 = &g_107;
                int *l_865 = &l_862;
                int *l_866 = &l_376;
                int *l_867 = &l_47;
                int *l_868 = (void*)0;
                int *l_869 = &g_107;
                int *l_870 = &g_107;
                int *l_871 = &l_47;
                int *l_872 = &g_107;
                int *l_873 = &g_107;
                int *l_874 = &l_47;
                int *l_875 = &l_376;
                int *l_876 = (void*)0;
                int *l_877 = (void*)0;
                int *l_878 = &l_376;
                int *l_879 = &l_376;
                int *l_880 = &g_107;
                int *l_881 = &g_107;
                int *l_882 = &l_862;
                int *l_883 = (void*)0;
                int *l_884 = (void*)0;
                int *l_885 = &l_862;
                int *l_886 = &g_50;
                int *l_887 = &l_862;
                int l_888 = 4L;
                int *l_889 = (void*)0;
                int *l_891 = &g_50;
                int *l_893 = (void*)0;
                int *l_894 = &g_107;
                int *l_895 = (void*)0;
                int *l_897 = &l_47;
                int *l_898 = &g_107;
                int *l_899 = (void*)0;
                int *l_900 = &l_862;
                int *l_901 = &g_107;
                int *l_902 = (void*)0;
                int *l_903 = &l_892;
                int *l_904 = &l_376;
                int *l_905 = &l_896;
                int *l_906 = &l_892;
                int *l_907 = &l_888;
                int *l_908 = &l_892;
                int *l_909 = &g_50;
                int *l_910 = &l_888;
                int *l_911 = (void*)0;
                int *l_912 = &l_896;
                int *l_913 = (void*)0;
                int *l_914 = &g_50;
                int *l_915 = &l_376;
                int *l_916 = &g_107;
                int *l_917 = (void*)0;
                int *l_918 = &g_50;
                int *l_919 = (void*)0;
                int *l_921 = &g_107;
                int *l_923 = &l_376;
                int *l_924 = &l_888;
                int *l_925 = &l_888;
                int *l_927 = &g_107;
                int *l_928 = &l_892;
                int *l_929 = &l_926;
                int *l_931 = &l_930;
                int *l_932 = &g_50;
                int *l_933 = &l_890;
                int *l_934 = (void*)0;
                int *l_935 = (void*)0;
                int *l_937 = &l_922;
                int *l_938 = &l_890;
                int *l_939 = &l_896;
                int *l_940 = &l_376;
                int *l_943 = &l_936;
                int *l_944 = (void*)0;
                int *l_945 = &g_107;
                int *l_946 = &l_47;
                int *l_947 = &l_892;
                int l_948 = 0xB34576F9L;
                int *l_949 = (void*)0;
                int l_952 = 1L;
                int *l_953 = &l_948;
                int *l_954 = &l_890;
                int *l_955 = (void*)0;
                int *l_956 = &l_952;
                int *l_957 = &l_952;
                int *l_958 = &l_930;
                int *l_959 = &g_107;
                int *l_960 = &l_941;
                int *l_961 = (void*)0;
                int *l_962 = &l_890;
                int *l_963 = &l_950;
                int l_964 = 0x8AD8FBCBL;
                int *l_965 = &g_107;
                int *l_966 = (void*)0;
                int *l_967 = (void*)0;
                unsigned char *l_971 = &g_171;
                unsigned short *l_974 = &g_55;
                unsigned ***l_982 = &l_981;
                char *l_985 = &g_238;
                g_968--;
                (*l_910) = func_27(l_971, (safe_lshift_func_int16_t_s_s((*l_940), ((((*l_974) = func_22(l_971)) <= (safe_add_func_uint8_t_u_u((l_926 = (((*l_985) = ((safe_lshift_func_int16_t_s_s(p_14, (g_979 == (g_834 = g_968)))) || (g_980 != (l_983 = ((*l_982) = l_981))))) && l_986)), 0xABL))) < l_951))), g_40, (*l_174), g_171);

                ;
                return p_14;
            }
        }


        ;
        ;
        ;
    }
    l_896 &= (g_999 = ((l_890 || g_164) < ((safe_mod_func_uint32_t_u_u((0x80B7L <= ((*l_990) &= (l_989 ^ g_375))), (safe_lshift_func_int16_t_s_u(((*l_998) = func_27(func_24(g_201, (safe_mod_func_uint8_t_u_u((((0x5EL <= 0x42L) <= (l_926 ^= (safe_rshift_func_int8_t_s_s((0x5A9529CCL <= p_14), 3)))) && 0x30645BB6L), (*g_661)))), l_986, g_55, l_39, p_14)), l_47)))) != l_989)));

    ;
    return l_986;
}







static unsigned char func_22(unsigned char * p_23)
{
    char l_777 = 0x2CL;
    short l_780 = 0xDA03L;
    unsigned char *l_783 = &g_40;
    int l_784 = 0x02124D56L;
    l_784 &= (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_777, ((l_780 & 0UL) == ((safe_rshift_func_int8_t_s_u(l_780, 6)) ^ l_780)))), func_27(&g_375, l_777, l_777, l_783, g_63)));
    return l_777;
}







static unsigned char * func_24(int p_25, int p_26)
{
    unsigned short **l_669 = (void*)0;
    unsigned short **l_670 = (void*)0;
    unsigned short *l_672 = &g_55;
    int l_673 = 0xD20C3A44L;
    int *l_674 = &g_50;
    int *l_675 = (void*)0;
    int *l_676 = (void*)0;
    int *l_677 = &l_673;
    int *l_678 = &g_107;
    int *l_679 = &g_50;
    int *l_680 = &l_673;
    int *l_681 = &g_50;
    int *l_682 = &g_107;
    int *l_683 = &g_50;
    int *l_684 = &g_50;
    int *l_685 = &g_50;
    int *l_686 = &l_673;
    int *l_687 = &l_673;
    int *l_688 = &g_107;
    int *l_689 = &l_673;
    int *l_690 = &l_673;
    int *l_691 = &g_107;
    int l_692 = 1L;
    int *l_693 = &g_107;
    int *l_694 = &g_107;
    int l_695 = 0xF8DC90A0L;
    int *l_696 = (void*)0;
    int *l_697 = &g_50;
    int *l_698 = &l_695;
    int *l_699 = &g_50;
    int *l_700 = &l_692;
    int *l_701 = &g_50;
    int *l_702 = &g_107;
    int *l_703 = &l_695;
    int *l_704 = &g_50;
    int *l_705 = &l_673;
    int *l_706 = &l_692;
    int *l_707 = &g_50;
    int l_708 = 6L;
    int *l_709 = &l_692;
    int *l_710 = &l_673;
    int *l_711 = &l_673;
    int *l_712 = (void*)0;
    int *l_713 = &g_107;
    int *l_714 = &l_692;
    int *l_715 = &l_695;
    int *l_716 = &g_50;
    int *l_717 = &l_708;
    int *l_718 = &l_692;
    int *l_719 = &g_50;
    int *l_720 = &l_692;
    int l_721 = 0x8253EB22L;
    int *l_722 = (void*)0;
    int *l_723 = (void*)0;
    int *l_724 = &g_107;
    int l_725 = 1L;
    int *l_726 = &l_708;
    int *l_727 = &g_50;
    int *l_728 = &l_708;
    int *l_729 = &l_708;
    int l_730 = 0xBF7C6804L;
    int *l_731 = &l_730;
    int *l_732 = &l_721;
    int *l_733 = &l_725;
    int l_734 = 0x15EF98A9L;
    int *l_735 = (void*)0;
    int *l_736 = &l_734;
    int *l_737 = &l_692;
    int *l_738 = &l_730;
    int *l_739 = &l_692;
    int l_740 = 1L;
    int *l_741 = (void*)0;
    int *l_742 = &g_50;
    int *l_743 = &l_730;
    int *l_744 = &l_673;
    int *l_745 = (void*)0;
    int *l_746 = &l_725;
    int *l_747 = (void*)0;
    int *l_748 = &l_721;
    int l_749 = 1L;
    int l_750 = 0L;
    int *l_751 = &l_721;
    int *l_752 = &l_692;
    int *l_753 = &g_107;
    int *l_754 = &l_721;
    int *l_755 = &l_740;
    int *l_756 = &l_725;
    int *l_757 = &l_721;
    int *l_758 = &g_50;
    int *l_759 = &l_740;
    int *l_760 = &l_730;
    int *l_761 = (void*)0;
    int l_762 = 0xC5AAA70DL;
    unsigned char *l_770 = &g_375;
    int **l_772 = &l_700;
    (*l_674) ^= (safe_lshift_func_uint16_t_u_u(((g_671 = (void*)0) != l_672), l_673));

    ;
    g_763--;
    for (p_25 = 0; (p_25 < 26); p_25++)
    {
        int *l_768 = &l_708;
        unsigned *l_769 = &g_454;
        (*l_731) = (*l_727);
        g_655 = l_768;

        ;
        (*l_739) = func_27(&g_63, ((*l_769) &= (&l_768 != &g_655)), g_763, l_770, p_25);
        if (g_771)
            continue;
    }


    (*l_772) = &l_721;

    ;
    return &g_662;



}







static int func_27(unsigned char * p_28, unsigned p_29, char p_30, unsigned char * p_31, unsigned p_32)
{
    unsigned l_665 = 0xBF4BDEB0L;
    int *l_666 = &g_50;
    (*l_666) = (0xF07F4685L ^ (safe_mod_func_uint16_t_u_u(l_665, l_665)));
    (*l_666) = ((&g_50 != l_666) ^ (*l_666));
    (*l_666) |= p_32;
    return g_55;
}







static unsigned char * func_33(unsigned p_34, unsigned char * p_35, unsigned char p_36, unsigned short p_37, unsigned p_38)
{
    unsigned l_377 = 6UL;
    unsigned char *l_379 = (void*)0;
    unsigned char **l_378 = &l_379;
    short *l_380 = &g_242;
    short *l_381 = &g_164;
    char *l_382 = &g_238;
    int l_398 = 0x7CDCCD75L;
    int l_419 = 0x1F5AF660L;
    int l_600 = 0xB0E9BF2FL;
    char l_642 = 0L;
    l_377 = g_40;
    if (((((*l_382) = ((((((void*)0 != l_378) || ((*l_380) ^= p_38)) | (l_377 >= ((*l_381) = l_377))) | 3L) & l_377)) && (safe_lshift_func_int16_t_s_s((p_38 && (safe_lshift_func_int8_t_s_u(p_34, 3))), g_242))) | p_37))
    {
        unsigned l_428 = 4UL;
        int l_432 = (-10L);
        for (g_63 = 18; (g_63 == 33); ++g_63)
        {
            if (g_238)
                break;
        }
        for (p_38 = 0; (p_38 < 37); p_38 = safe_add_func_int8_t_s_s(p_38, 7))
        {
            int *l_391 = &g_50;
            int **l_392 = (void*)0;
            int **l_393 = (void*)0;
            int **l_394 = &l_391;
            int *l_395 = &g_107;
            int *l_396 = &g_50;
            int *l_397 = &g_107;
            int *l_399 = &g_107;
            int *l_400 = &g_50;
            int *l_401 = &l_398;
            int *l_402 = (void*)0;
            int *l_403 = (void*)0;
            int *l_404 = &g_107;
            int *l_405 = &l_398;
            int *l_406 = &g_107;
            int *l_407 = &g_50;
            int *l_408 = &g_50;
            int *l_409 = &l_398;
            int *l_410 = &g_107;
            int *l_411 = &l_398;
            int *l_412 = &l_398;
            int *l_413 = &l_398;
            int *l_414 = &l_398;
            int *l_415 = &l_398;
            int *l_416 = (void*)0;
            int *l_417 = &g_107;
            int *l_418 = &g_107;
            int *l_420 = &l_398;
            int *l_421 = &l_419;
            int l_422 = 0xA8D3F645L;
            int *l_423 = &l_419;
            int *l_424 = &l_419;
            int *l_425 = &g_107;
            int *l_426 = &l_398;
            int *l_427 = &g_50;
            unsigned short ****l_431 = &g_349;
            (*l_394) = l_391;
            l_428++;
            l_432 |= ((*l_409) &= ((*l_397) = (((*l_431) = g_349) != (void*)0)));
            (*l_394) = &l_398;

            ;
        }
        for (l_398 = 0; (l_398 < (-19)); --l_398)
        {
            if (p_38)
                break;
        }
    }
    else
    {
        unsigned short l_435 = 0x9E91L;
        int l_460 = 0L;
        int l_489 = 0xE6FC6E75L;
        int l_495 = (-7L);
        int l_502 = (-1L);
        if (g_238)
        {
            int *l_441 = &g_50;
            int l_513 = 0xAED7060AL;
            unsigned l_525 = 0xC4620BABL;
            int l_582 = 0xA5A1738AL;
            int l_595 = 0x5E658F83L;
            int *l_604 = &g_50;
            int *l_605 = &l_419;
            int *l_606 = &l_489;
            int *l_607 = &g_107;
            int *l_608 = &l_600;
            int *l_609 = &l_600;
            int *l_610 = (void*)0;
            int *l_611 = (void*)0;
            int *l_612 = &g_50;
            int *l_613 = &l_460;
            int *l_614 = &l_600;
            int *l_615 = &g_50;
            int *l_616 = &l_513;
            int *l_617 = &l_489;
            int *l_618 = &l_489;
            int *l_619 = (void*)0;
            int *l_620 = &l_595;
            int *l_621 = &g_107;
            int *l_622 = &l_582;
            int *l_623 = &l_513;
            int *l_624 = &l_460;
            int *l_625 = &l_489;
            int *l_626 = &l_460;
            int *l_627 = &l_495;
            int *l_628 = &l_502;
            int *l_629 = &l_489;
            int l_630 = 0x037EF742L;
            int *l_631 = &l_630;
            int *l_632 = &l_582;
            int *l_633 = &l_630;
            int *l_634 = &l_630;
            int *l_635 = &l_398;
            int *l_636 = &l_495;
            if (g_104)
            {
                unsigned l_452 = 0UL;
                if ((0xAE0E4194L >= l_435))
                {
                    char l_436 = 1L;
                    l_419 ^= (l_436 ^ (safe_rshift_func_int16_t_s_u(g_114, l_435)));
                    for (l_436 = 0; (l_436 < 24); l_436++)
                    {
                        int **l_442 = (void*)0;
                        int **l_443 = &l_441;
                        (*l_443) = l_441;
                    }
                }
                else
                {
                    unsigned char l_453 = 0xD7L;
                    int **l_455 = &l_441;
                    g_454 ^= (g_132 ^ ((safe_mod_func_uint32_t_u_u((p_36 < g_123), (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(((&p_38 != (void*)0) <= g_107), 14)), 6)), (l_452 != l_453))))) ^ (*l_441)));
                    (*l_455) = &l_419;

                    ;
                }

                ;
            }
            else
            {
                int **l_456 = &l_441;
                int l_538 = 1L;
                int l_576 = 0x9CD8ABC4L;
                (*l_456) = l_441;
                for (g_123 = 0; (g_123 >= (-16)); --g_123)
                {
                    short l_459 = 1L;
                    int l_475 = 0L;
                    int l_509 = 0x454ED2D8L;
                    if (p_34)
                    {
                        int *l_461 = &g_107;
                        int *l_462 = &l_460;
                        int *l_463 = &l_419;
                        int *l_464 = &l_398;
                        int *l_465 = &g_107;
                        int *l_466 = &l_398;
                        int *l_467 = &l_460;
                        int *l_468 = &l_460;
                        int *l_469 = &g_107;
                        int *l_470 = &l_460;
                        int *l_471 = &l_419;
                        int *l_472 = (void*)0;
                        int *l_473 = &l_419;
                        int *l_474 = &g_50;
                        int *l_476 = &l_460;
                        int *l_477 = &g_50;
                        int *l_478 = &l_475;
                        int *l_479 = &l_460;
                        int *l_480 = &l_475;
                        int *l_481 = &g_107;
                        int *l_482 = &l_419;
                        int *l_483 = &l_460;
                        int *l_484 = &l_419;
                        int *l_485 = &l_460;
                        int *l_486 = &g_107;
                        int *l_487 = &l_460;
                        int l_488 = 0x7E3AB259L;
                        int *l_490 = &g_107;
                        int *l_491 = &l_419;
                        int *l_492 = &l_460;
                        int *l_493 = (void*)0;
                        int l_494 = 0x3059B5D6L;
                        int *l_496 = &l_475;
                        int *l_497 = &l_494;
                        int *l_498 = &g_107;
                        int *l_499 = &l_495;
                        int *l_500 = &l_495;
                        int *l_501 = (void*)0;
                        int *l_503 = &l_495;
                        int *l_504 = (void*)0;
                        int *l_505 = (void*)0;
                        int *l_506 = &l_495;
                        int *l_507 = &l_495;
                        int *l_508 = &l_398;
                        int *l_510 = (void*)0;
                        int *l_511 = (void*)0;
                        int *l_512 = &l_398;
                        int l_514 = 0xBB8485BAL;
                        int *l_515 = &l_398;
                        int *l_516 = &l_489;
                        int *l_517 = &l_489;
                        int *l_518 = (void*)0;
                        int *l_519 = &l_495;
                        int *l_520 = &l_398;
                        int *l_521 = (void*)0;
                        int *l_522 = &g_50;
                        int *l_523 = (void*)0;
                        int *l_524 = &l_509;
                        g_50 = 0xBA70B083L;
                        l_525--;
                        (*l_456) = &g_107;

                        ;
                        (*l_479) ^= g_454;
                    }
                    else
                    {
                        int *l_528 = &l_513;
                        int *l_529 = &l_419;
                        int *l_530 = &l_495;
                        int *l_531 = &l_398;
                        int *l_532 = &l_502;
                        int *l_533 = &l_489;
                        int *l_534 = (void*)0;
                        int *l_535 = (void*)0;
                        int *l_536 = &l_513;
                        int *l_537 = &g_50;
                        int *l_539 = &l_475;
                        int *l_540 = &l_489;
                        int *l_541 = &g_107;
                        int *l_542 = &l_460;
                        int *l_543 = &l_513;
                        int *l_544 = &l_538;
                        int *l_545 = &l_513;
                        int *l_546 = &l_398;
                        int *l_547 = &g_50;
                        int l_548 = 0xF3F77006L;
                        int *l_549 = &l_398;
                        int *l_550 = &g_50;
                        int *l_551 = &l_495;
                        int *l_552 = (void*)0;
                        int *l_553 = &g_107;
                        int *l_554 = &l_475;
                        int *l_555 = &l_419;
                        int *l_556 = &l_502;
                        int *l_557 = &l_548;
                        int *l_558 = &l_502;
                        int *l_559 = &l_495;
                        int *l_560 = &g_107;
                        int *l_561 = (void*)0;
                        int *l_562 = &l_538;
                        int *l_563 = (void*)0;
                        int *l_564 = &l_489;
                        int *l_565 = &l_489;
                        int *l_566 = &l_489;
                        int *l_567 = &l_509;
                        int *l_568 = &l_513;
                        int *l_569 = &l_513;
                        int *l_570 = &l_513;
                        int *l_571 = (void*)0;
                        int *l_572 = (void*)0;
                        int *l_573 = &l_475;
                        int *l_574 = &l_502;
                        int *l_575 = (void*)0;
                        int *l_577 = &l_538;
                        int *l_578 = (void*)0;
                        int *l_579 = (void*)0;
                        int *l_580 = &l_419;
                        int *l_581 = &l_538;
                        int *l_583 = (void*)0;
                        int *l_584 = &g_50;
                        int *l_585 = &g_107;
                        int *l_586 = &l_502;
                        int *l_587 = &l_548;
                        int *l_588 = &l_489;
                        int *l_589 = &l_460;
                        int *l_590 = &l_398;
                        int *l_591 = &l_548;
                        int *l_592 = &l_489;
                        int *l_593 = &l_582;
                        int *l_594 = &l_495;
                        int *l_596 = (void*)0;
                        int *l_597 = &l_538;
                        int *l_598 = (void*)0;
                        int *l_599 = &l_548;
                        if (l_460)
                            break;
                        ++g_601;
                    }
                }

                ;
            }

            ;
            g_637++;
        }
        else
        {
            int *l_643 = &l_600;
            int *l_649 = &g_50;
            (*l_643) |= (safe_mod_func_int32_t_s_s(l_642, p_38));
            if (((*l_643) ^= (safe_lshift_func_uint8_t_u_u(g_140, 0))))
            {
                if ((l_460 || g_287))
                {
                    (*l_643) = (safe_sub_func_uint32_t_u_u(p_36, l_398));
                }
                else
                {
                    int **l_648 = &l_643;
                    l_649 = ((*l_648) = l_643);

                    ;
                    (*l_649) = (l_419 <= g_40);
                }

                ;
                for (g_123 = (-27); (g_123 != (-28)); --g_123)
                {
                    unsigned l_652 = 0x015147F8L;
                    (*l_649) &= l_652;
                }
            }
            else
            {
                int *l_653 = &l_419;
                int **l_654 = (void*)0;
                g_655 = l_653;

                ;
            }

            ;

        }


        for (g_375 = (-22); (g_375 > 30); ++g_375)
        {
            volatile int **l_658 = (void*)0;
            volatile int *l_660 = &g_201;
            volatile int **l_659 = &l_660;
            (*l_659) = &g_201;
            return &g_63;



        }
        return &g_375;



    }
    return &g_63;


}







static unsigned char * func_41(unsigned char * p_42, unsigned char p_43, unsigned char * p_44)
{
    volatile int *l_175 = (void*)0;
    unsigned *l_179 = &g_69;
    int l_198 = 0x642676EBL;
    int l_217 = 0L;
    int l_220 = 0xF5D19879L;
    int l_259 = 0x2A8B94E1L;
    int l_289 = (-1L);
    unsigned l_310 = 0x555DEF73L;
    unsigned l_335 = 4294967293UL;
    char l_371 = 0xFDL;
    int *l_372 = &l_198;
    unsigned char *l_373 = &g_171;
lbl_357:
    g_50 = g_104;
    for (g_164 = 0; (g_164 >= 10); ++g_164)
    {
        unsigned *l_178 = &g_69;
        unsigned **l_180 = &l_179;
        int l_188 = (-1L);
        int l_231 = (-1L);
        short l_270 = (-1L);
        int *l_307 = &l_289;
        int **l_306 = &l_307;
        unsigned l_326 = 0x20E4BD68L;
        unsigned char *l_350 = &g_63;
        g_107 ^= (l_178 != ((*l_180) = l_179));
        if ((((*p_44) = (safe_unary_minus_func_uint16_t_u(((g_50 & (safe_rshift_func_int16_t_s_u((-1L), 14))) && g_12)))) | (*p_42)))
        {
            char l_189 = 3L;
            int l_258 = 0x05669B83L;
            for (g_50 = 0; (g_50 >= (-30)); g_50--)
            {
                int *l_186 = &g_107;
                int *l_187 = &g_107;
                int *l_190 = &l_188;
                int *l_191 = &g_107;
                int *l_192 = &l_188;
                int *l_193 = &g_107;
                int *l_194 = (void*)0;
                int *l_195 = &g_107;
                int *l_196 = &l_188;
                int *l_197 = &l_188;
                int *l_199 = (void*)0;
                int *l_200 = &g_107;
                int *l_202 = (void*)0;
                int *l_203 = &l_198;
                int *l_204 = &l_198;
                int *l_205 = &g_107;
                int *l_206 = (void*)0;
                int *l_207 = &g_107;
                int *l_208 = &l_198;
                int *l_209 = &l_198;
                int *l_210 = &l_188;
                int *l_211 = &l_188;
                int *l_212 = (void*)0;
                int *l_213 = &l_198;
                int *l_214 = &g_107;
                int *l_215 = (void*)0;
                int *l_216 = (void*)0;
                int *l_218 = &g_107;
                int l_219 = (-1L);
                int *l_221 = &g_107;
                int *l_222 = &l_219;
                int *l_223 = &l_217;
                int *l_224 = &g_107;
                int *l_226 = &l_219;
                int *l_227 = &l_219;
                int *l_228 = &l_188;
                int *l_229 = (void*)0;
                int *l_230 = &l_198;
                int *l_232 = &l_217;
                int *l_233 = &l_220;
                int *l_234 = &l_188;
                int *l_235 = &l_198;
                int *l_236 = (void*)0;
                int *l_237 = &l_217;
                int *l_239 = (void*)0;
                int *l_240 = (void*)0;
                int *l_241 = &l_231;
                int *l_243 = &l_219;
                int *l_244 = &l_198;
                int *l_245 = (void*)0;
                int *l_246 = (void*)0;
                int *l_247 = &g_107;
                int *l_248 = &l_220;
                int *l_249 = &l_198;
                int *l_250 = &l_217;
                int *l_251 = &g_107;
                int *l_252 = &l_219;
                int *l_253 = &l_217;
                int *l_254 = &l_231;
                int *l_255 = &l_231;
                int *l_256 = &l_198;
                int *l_257 = &l_198;
                int *l_260 = &l_219;
                int *l_261 = (void*)0;
                int *l_262 = &g_107;
                int *l_263 = &l_259;
                int *l_264 = &g_107;
                int *l_265 = &l_217;
                int *l_266 = &g_107;
                int *l_267 = &l_219;
                int *l_268 = &l_188;
                int *l_269 = (void*)0;
                int *l_271 = &l_259;
                int *l_272 = &l_217;
                int *l_273 = &l_220;
                int *l_274 = &l_220;
                int *l_275 = &l_220;
                int *l_276 = &l_258;
                int *l_277 = &l_258;
                int *l_278 = &l_231;
                int *l_279 = &l_220;
                int *l_280 = &l_198;
                int *l_281 = &l_198;
                int *l_282 = &l_231;
                int *l_283 = &l_217;
                int *l_284 = &l_188;
                int *l_285 = &l_217;
                int *l_286 = &l_198;
                int *l_288 = &l_188;
                int *l_290 = &l_258;
                int **l_294 = &l_222;
                ++g_291;
                (*l_294) = &l_220;

                ;
            }
            if (p_43)
                continue;
            if (l_258)
                continue;
        }
        else
        {
            unsigned l_301 = 9UL;
            int l_314 = 0L;
            if ((g_132 ^ p_43))
            {
                int *l_295 = &l_217;
                int *l_296 = &l_231;
                int *l_297 = &l_231;
                int *l_298 = &l_217;
                int *l_299 = (void*)0;
                int *l_300 = &l_231;
                (*l_295) = 0x4B1F90EDL;
                --l_301;
                (*l_300) ^= l_188;
            }
            else
            {
                int *l_305 = &l_198;
                int **l_304 = &l_305;
                short l_336 = (-9L);
                (*l_304) = &l_188;

                ;
                (*l_304) = &g_107;

                ;
                if ((l_306 != (void*)0))
                {
                    unsigned l_313 = 0x823EF36BL;
                    (**l_304) = (safe_add_func_int32_t_s_s(((*p_44) != (g_139 == (&p_44 != (void*)0))), l_310));
                    if (g_69)
                        break;
                    for (g_114 = 13; (g_114 <= 9); --g_114)
                    {
                        (*l_307) ^= 0x26EBD826L;
                        if (l_313)
                            continue;
                    }
                }
                else
                {
                    unsigned l_337 = 0x11CE4DD9L;
                    l_314 = 0L;
                    for (g_107 = 11; (g_107 > (-9)); --g_107)
                    {
                        unsigned l_325 = 4294967289UL;
                        unsigned short *l_340 = &g_55;
                        unsigned short **l_339 = &l_340;
                        unsigned short ***l_341 = &l_339;
                        g_50 = (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_325, l_326)), (safe_sub_func_int16_t_s_s((-2L), (((*p_44)++) && (g_164 != (((safe_mod_func_uint8_t_u_u(l_335, g_171)) & l_336) && l_337))))))), (safe_unary_minus_func_int8_t_s(p_43)))), 0UL));
                        (*l_341) = l_339;
                    }
                    (*l_306) = &g_107;

                    ;
                }

                ;
            }

            ;
            if (p_43)
            {
                int *l_342 = &l_198;
                (*l_306) = l_342;

                ;
            }
            else
            {
                for (l_326 = 0; (l_326 < 20); l_326 = safe_add_func_uint16_t_u_u(l_326, 9))
                {
                    unsigned l_347 = 0x3A053FBEL;
                    unsigned short ***l_348 = (void*)0;
                    for (g_40 = 0; (g_40 >= 18); g_40 = safe_add_func_int16_t_s_s(g_40, 9))
                    {
                        g_50 = g_291;
                        if (p_43)
                            break;
                        if (l_347)
                            continue;
                    }
                    (*l_307) &= (l_348 == (g_349 = l_348));
                    return l_350;


                }
            }

            ;
            for (g_50 = 0; (g_50 <= 25); g_50++)
            {
                int l_356 = 0xFCF51EDEL;
                for (l_259 = 4; (l_259 == (-27)); l_259--)
                {
                    if (g_355)
                        break;
                    if ((**l_306))
                        break;
                    if (l_356)
                        continue;
                }
                if (l_198)
                    goto lbl_357;
                l_231 ^= ((**l_306) = 0L);
            }
        }

        ;
        for (p_43 = 0; (p_43 == 44); ++p_43)
        {
            unsigned char l_360 = 0x79L;
            (*l_307) = l_360;
        }
    }
    (*l_372) = ((safe_mod_func_int32_t_s_s(p_43, ((safe_add_func_int8_t_s_s(l_259, (*p_44))) && (!((*p_42) = (g_50 <= p_43)))))) | (((safe_mod_func_uint32_t_u_u((g_225 == (g_238 > (safe_rshift_func_uint8_t_u_u((((l_371 = l_198) > (p_43 >= 0x08D7938CL)) && p_43), l_259)))), p_43)) & g_238) <= (*p_44)));
    return l_373;


}







static unsigned char * func_45(unsigned p_46)
{
    unsigned char *l_48 = &g_40;
    int *l_49 = &g_50;
    int l_51 = (-6L);
    unsigned short *l_54 = &g_55;
    unsigned char l_58 = 0UL;
    int l_108 = 1L;
    int l_116 = 0x2A0C022AL;
    int l_135 = 0xA9921A3EL;
    int l_136 = 0x10A6DD69L;
    int l_137 = 6L;
    int l_138 = 9L;
    int *l_143 = &l_116;
    int *l_144 = &l_135;
    int *l_145 = &l_135;
    int *l_146 = &l_136;
    int *l_147 = &l_51;
    int *l_148 = &g_50;
    int *l_149 = &l_137;
    int *l_150 = (void*)0;
    int *l_151 = &l_138;
    int *l_152 = (void*)0;
    int *l_153 = (void*)0;
    int *l_154 = &l_138;
    int *l_155 = &g_107;
    int *l_156 = (void*)0;
    int *l_157 = &l_135;
    int *l_158 = &g_107;
    int *l_159 = (void*)0;
    int *l_160 = &g_107;
    int *l_161 = &l_116;
    int *l_162 = &l_135;
    int *l_163 = &l_138;
    int *l_165 = &l_108;
    int *l_166 = &g_50;
    int *l_167 = &l_137;
    int *l_168 = &l_136;
    int *l_169 = (void*)0;
    int *l_170 = &l_51;
    l_51 = ((*l_49) = (l_48 != &g_40));
    (*l_49) = (((void*)0 != &g_50) | ((*l_54) ^= (safe_lshift_func_int16_t_s_s((*l_49), 1))));
    for (l_51 = 0; (l_51 < 26); l_51 = safe_add_func_int32_t_s_s(l_51, 6))
    {
        unsigned *l_68 = &g_69;
        int l_70 = (-1L);
        int *l_71 = &g_50;
        int *l_72 = &g_50;
        int *l_73 = (void*)0;
        int *l_74 = &g_50;
        int *l_75 = (void*)0;
        int *l_76 = &g_50;
        int *l_77 = (void*)0;
        int *l_78 = (void*)0;
        int *l_79 = &g_50;
        int *l_80 = (void*)0;
        int *l_81 = &g_50;
        int *l_82 = &g_50;
        int *l_83 = &l_70;
        int *l_84 = (void*)0;
        int *l_85 = &l_70;
        int *l_86 = &g_50;
        int *l_87 = &l_70;
        int *l_88 = &g_50;
        int l_89 = (-1L);
        int *l_90 = &l_70;
        int *l_91 = &l_70;
        int *l_92 = &g_50;
        int *l_93 = &l_89;
        int *l_94 = (void*)0;
        int *l_95 = &l_70;
        int l_96 = (-1L);
        int *l_97 = &l_70;
        int *l_98 = &l_89;
        int l_99 = 0x88C4B507L;
        int *l_100 = &l_89;
        int *l_101 = (void*)0;
        int *l_102 = (void*)0;
        int *l_103 = &l_96;
        int *l_105 = &l_96;
        int *l_106 = &g_50;
        int *l_109 = &l_70;
        int *l_110 = (void*)0;
        int *l_111 = (void*)0;
        int l_112 = 0x26829A6EL;
        int *l_113 = (void*)0;
        int *l_115 = &l_96;
        int *l_117 = &l_116;
        int *l_118 = &l_116;
        int *l_119 = &l_70;
        int *l_120 = &l_108;
        int *l_121 = &l_70;
        int *l_122 = &g_50;
        int *l_124 = &l_116;
        int *l_125 = &l_116;
        int *l_126 = (void*)0;
        int *l_127 = &l_96;
        int *l_128 = &l_70;
        int *l_129 = &l_89;
        int *l_130 = (void*)0;
        int *l_131 = &l_70;
        if (p_46)
            break;
        (*l_49) = (l_58 > ((*l_48) = (safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((1UL | g_40), ((*l_68) &= ((p_46 == (g_63 |= (*l_49))) || ((p_46 >= (g_40 & (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((0x53L < p_46), p_46)), g_63)))) < g_12))))), (*l_49)))));
        ++g_132;
        --g_140;
    }
    ++g_171;
    return &g_63;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_601, "g_601", print_hash_value);
    transparent_crc(g_637, "g_637", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_813, "g_813", print_hash_value);
    transparent_crc(g_834, "g_834", print_hash_value);
    transparent_crc(g_968, "g_968", print_hash_value);
    transparent_crc(g_979, "g_979", print_hash_value);
    transparent_crc(g_999, "g_999", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
