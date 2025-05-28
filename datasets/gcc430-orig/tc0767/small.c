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


struct S0 {
   int f0;
   int f1;
   int f2;
   const unsigned f3;
};


static int g_4 = 0x473EB905L;
static unsigned char g_13 = 0x3CL;
static int g_21 = (-1L);
static char g_23 = 0xE8L;
static int g_26 = (-8L);
static int g_28 = 0x63D62A04L;
static unsigned char *g_30 = &g_13;
static unsigned char * const * const g_29 = &g_30;
static short g_119 = 0x0A97L;
static unsigned short g_136 = 6UL;
static struct S0 g_153 = {0x0C5DEC46L,0x6AB569F1L,0x41B0B2ACL,1UL};
static unsigned char g_186 = 0xB6L;
static unsigned g_214 = 0xEEFDE0CEL;
static char g_249 = 0x10L;
static char g_296 = 0x07L;
static unsigned short g_309 = 0x3850L;
static unsigned char g_326 = 6UL;
static unsigned short g_329 = 1UL;
static char *g_335 = &g_296;
static unsigned g_391 = 0UL;
static const unsigned char *g_409 = (void*)0;
static struct S0 *g_427 = &g_153;
static struct S0 **g_426 = &g_427;
static unsigned short g_447 = 0xF8C3L;
static int g_482 = 9L;
static unsigned char g_537 = 0xB8L;
static int *g_597 = &g_482;
static int **g_596 = &g_597;
static const int g_602 = 0xFA0B42B6L;
static unsigned char * const **g_624 = (void*)0;
static unsigned char g_628 = 255UL;
static unsigned g_633 = 0x140D512DL;
static unsigned char g_645 = 248UL;
static const short g_675 = (-2L);
static short g_679 = 0xAB05L;
static char g_827 = 0xA8L;
static unsigned char g_829 = 0UL;
static unsigned g_877 = 0x28B04AB8L;
static short g_906 = 0L;
static unsigned short g_1013 = 65535UL;
static char g_1019 = 0x51L;
static unsigned short g_1039 = 65533UL;
static char g_1133 = 3L;
static unsigned g_1196 = 0x13B10A9FL;
static unsigned g_1410 = 0x23FC86DAL;
static unsigned short g_1512 = 65527UL;
static short g_1653 = 0x20CDL;
static char g_1675 = 0x77L;
static short g_1679 = 0x6176L;
static unsigned char g_1691 = 1UL;
static unsigned g_1817 = 0UL;
static unsigned short g_1833 = 0UL;
static unsigned char * const g_1929 = &g_186;
static unsigned char **g_1939 = &g_30;
static int g_1942 = 0x229DD79DL;
static unsigned char g_1993 = 0x62L;
static unsigned short g_2121 = 0x7FBCL;
static int *g_2135 = &g_1942;
static unsigned short *g_2144 = &g_2121;
static unsigned short **g_2143 = &g_2144;
static unsigned short ** const *g_2142 = &g_2143;
static unsigned short ** const g_2146 = (void*)0;
static unsigned short ** const *g_2145 = &g_2146;
static unsigned short ***g_2215 = &g_2143;
static const int *g_2303 = &g_21;



static unsigned short func_1(void);
static const int * func_33(int p_34, unsigned char * p_35, char p_36, unsigned char * const ** p_37);
static unsigned func_42(int * p_43, short p_44);
static int * func_45(char p_46, unsigned char p_47, int p_48, const char p_49, const char p_50);
static int * func_53(const int p_54, unsigned char * const p_55, unsigned char p_56);
static unsigned char func_57(char * p_58, char p_59, unsigned short p_60, int p_61);
static unsigned char func_62(char * p_63, unsigned char p_64);
static char * func_65(char p_66, const int p_67);
static short func_145(unsigned char p_146, const unsigned char * p_147, unsigned char * const * p_148);
static char func_149(struct S0 p_150, unsigned char p_151, char p_152);
static unsigned short func_1(void)
{
    int *l_3 = &g_4;
    int **l_2 = &l_3;
    unsigned char *l_11 = (void*)0;
    unsigned char *l_12 = &g_13;
    short l_16 = 0x17C7L;
    int *l_19 = &g_4;
    int *l_20 = &g_21;
    char *l_22 = &g_23;
    int *l_27 = &g_28;
    unsigned char * const *l_32 = &g_30;
    unsigned char * const **l_31 = &l_32;
    unsigned l_38 = 6UL;
    unsigned char **l_39 = &l_12;
    char *l_881 = &g_827;
    unsigned char l_888 = 0x93L;
    (*l_2) = (void*)0;
    (*l_27) = (safe_sub_func_int8_t_s_s(((((*l_19) = (safe_sub_func_uint8_t_u_u(g_4, (safe_lshift_func_uint8_t_u_s(((*l_12) = 0x62L), ((*l_22) = (safe_sub_func_uint32_t_u_u(4294967289UL, (l_16 && (2UL ^ (+((*l_20) = (safe_mul_func_uint32_t_u_u(4294967288UL, ((*l_2) == l_19))))))))))))))) <= (safe_mod_func_uint32_t_u_u((g_26 != 0xE4F78D7CL), g_26))) == g_26), g_26));
    (*l_31) = g_29;
    g_2303 = func_33(l_38, ((*l_39) = l_12), ((*l_22) = (safe_mul_func_uint8_t_u_u((0UL != (((*l_20) = (g_26 <= (func_42(((*g_596) = func_45(((*l_881) ^= (safe_sub_func_uint8_t_u_u(((((*l_2) == ((*g_596) = func_53(g_4, (**l_31), func_57(&g_23, (func_62(func_65(g_21, (*l_20)), (*l_20)) ^ g_28), (*l_19), g_119)))) >= g_26) <= 0x4FD3L), 0L))), g_26, (*l_19), g_119, (*l_19))), l_888) ^ 0x4CBE45F8L))) < (*l_19))), (-1L)))), g_624);
    return (*l_19);
}







static const int * func_33(int p_34, unsigned char * p_35, char p_36, unsigned char * const ** p_37)
{
    struct S0 * const *l_913 = &g_427;
    int l_917 = 1L;
    int l_942 = (-1L);
    int l_956 = (-1L);
    int l_976 = 0L;
    int l_991 = 1L;
    int l_1011 = 0x301B47ABL;
    int l_1012 = 0xE16E1ACFL;
    char *l_1027 = &g_296;
    struct S0 ***l_1084 = &g_426;
    int l_1289 = 9L;
    int l_1291 = 0xFF1CD098L;
    int l_1293 = 0x2E9F311AL;
    unsigned l_1343 = 0x4576F8F0L;
    int l_1559 = 0x6E1EA656L;
    const int *l_2044 = &l_1011;
    const int *l_2045 = &l_1289;
    const int *l_2046 = &l_942;
    const int *l_2047 = &g_4;
    unsigned l_2092 = 0UL;
    int * const *l_2110 = &g_597;
    int * const **l_2109 = &l_2110;
    unsigned char l_2117 = 248UL;
    unsigned short ***l_2131 = (void*)0;
    unsigned **l_2147 = (void*)0;
    const short l_2169 = (-9L);
    char *l_2188 = &g_1019;
    unsigned l_2189 = 0UL;
    unsigned char l_2196 = 0xBCL;
    char *l_2204 = &g_1675;
    int l_2209 = (-1L);
    short l_2222 = 0xED56L;
    short l_2226 = 0x3064L;
    unsigned short l_2240 = 0x3BB4L;
    unsigned char l_2275 = 255UL;
    char l_2294 = 0x9BL;
    const int *l_2302 = &l_917;
    if ((safe_lshift_func_int16_t_s_s(0x92F1L, (safe_unary_minus_func_int8_t_s(0L)))))
    {
        struct S0 ***l_912 = &g_426;
        int l_921 = 0xA31D291BL;
        int l_928 = (-6L);
        int l_943 = 0x05DA06DAL;
        int l_972 = 1L;
        int l_985 = 8L;
        int l_1001 = 0x58AF4F46L;
        int l_1007 = 0x77DAD889L;
        int l_1037 = 0x5A794570L;
        short l_1038 = 1L;
        for (g_13 = 0; (g_13 != 46); g_13 = safe_add_func_uint8_t_u_u(g_13, 3))
        {
            return (*g_596);
        }
        if (((9UL & (((*l_912) = &g_427) != l_913)) && 0x6FL))
        {
            int *l_914 = &g_4;
            int *l_915 = &g_482;
            int *l_916 = &g_4;
            int *l_918 = &g_4;
            int *l_919 = &g_153.f0;
            int *l_920 = &g_482;
            int *l_922 = &g_153.f2;
            int *l_923 = (void*)0;
            int *l_924 = &g_28;
            int *l_925 = &l_921;
            int *l_926 = &l_921;
            int *l_927 = (void*)0;
            int *l_929 = &g_4;
            int *l_930 = (void*)0;
            int *l_931 = &g_153.f0;
            int *l_932 = &g_21;
            int *l_933 = &l_928;
            int *l_934 = &g_482;
            int *l_935 = (void*)0;
            int *l_936 = &l_917;
            int *l_937 = (void*)0;
            int *l_938 = &g_21;
            int *l_939 = &g_482;
            int *l_940 = &g_28;
            int *l_941 = (void*)0;
            int *l_944 = (void*)0;
            int *l_945 = &l_928;
            int *l_946 = &g_21;
            int *l_947 = &g_153.f0;
            int *l_948 = &g_21;
            int *l_949 = &l_921;
            int *l_950 = &l_942;
            int *l_951 = (void*)0;
            int *l_952 = &l_943;
            int *l_953 = &l_943;
            int *l_954 = &g_482;
            int l_955 = 0x5B9A6DD8L;
            int *l_957 = &l_928;
            int *l_958 = &l_928;
            int *l_959 = &g_153.f0;
            int *l_960 = &l_942;
            int *l_961 = &g_482;
            int *l_962 = &l_942;
            int *l_963 = (void*)0;
            int *l_964 = &l_921;
            int *l_965 = &l_928;
            int l_966 = (-1L);
            int *l_967 = (void*)0;
            int *l_968 = &l_966;
            int *l_969 = &l_928;
            int *l_970 = (void*)0;
            int l_971 = (-10L);
            int *l_973 = (void*)0;
            int *l_974 = &l_966;
            int *l_975 = (void*)0;
            int *l_977 = &l_942;
            int *l_978 = &g_4;
            int *l_979 = &g_482;
            int *l_980 = &l_971;
            int *l_981 = (void*)0;
            int *l_982 = &g_28;
            int *l_983 = (void*)0;
            int *l_984 = &g_28;
            int *l_986 = &g_482;
            int *l_987 = &l_955;
            int *l_988 = (void*)0;
            int *l_989 = &l_928;
            int *l_990 = &l_956;
            int *l_992 = &l_942;
            int *l_993 = &l_976;
            int *l_994 = &l_966;
            int *l_995 = (void*)0;
            int *l_996 = &l_972;
            int *l_997 = &l_991;
            int *l_998 = &l_976;
            int *l_999 = &l_917;
            int *l_1000 = &g_21;
            int *l_1002 = &l_943;
            int *l_1003 = &l_955;
            int *l_1004 = (void*)0;
            int *l_1005 = &l_955;
            int *l_1006 = &l_976;
            int *l_1008 = &g_482;
            int *l_1009 = &l_972;
            int *l_1010 = &l_985;
            char * const l_1018 = &g_1019;
            char * const *l_1017 = &l_1018;
            char * const **l_1016 = &l_1017;
            const unsigned char l_1028 = 0UL;
            unsigned l_1029 = 0x76133DB7L;
            unsigned l_1031 = 0x3B2D0110L;
            g_1013--;
            if ((func_62(&g_827, (*g_30)) <= (g_186 > (((*l_1016) = &g_335) == (void*)0))))
            {
                char l_1024 = 0xA1L;
                unsigned char *l_1025 = &g_326;
                unsigned char *l_1026 = &g_186;
                (*l_987) = ((((*l_1018) = (g_326 & 0xA9DCL)) < p_36) == ((*l_931) = ((*g_30) = (*g_30))));
                l_1029 = ((safe_lshift_func_int16_t_s_u((((*l_1018) = (safe_mul_func_int16_t_s_s(((*g_30) != (p_35 != (void*)0)), g_26))) | ((*l_1026) = ((*l_1025) = l_1024))), func_62(func_65((func_62(l_1027, l_991) && l_985), l_1028), (*p_35)))) | p_34);
            }
            else
            {
                short l_1030 = 0xE0D1L;
                int l_1034 = 0L;
                int l_1035 = 1L;
                int l_1036 = (-1L);
                (*l_969) = l_1001;
                l_1031--;
                --g_1039;
            }
            (*l_965) |= (l_956 <= g_877);
        }
        else
        {
            unsigned short l_1066 = 5UL;
            for (l_921 = 0; (l_921 == 1); ++l_921)
            {
                int *l_1044 = (void*)0;
                int *l_1045 = &g_153.f2;
                int *l_1046 = (void*)0;
                int *l_1047 = &l_1037;
                int *l_1048 = (void*)0;
                int l_1049 = (-1L);
                int *l_1050 = &l_972;
                int *l_1051 = (void*)0;
                int *l_1052 = &g_153.f2;
                int *l_1053 = &g_28;
                int *l_1054 = &l_917;
                int *l_1055 = &g_28;
                int *l_1056 = (void*)0;
                int *l_1057 = &g_482;
                int *l_1058 = &l_972;
                int *l_1059 = &l_1011;
                int *l_1060 = &l_1037;
                int *l_1061 = &l_972;
                int *l_1062 = &l_991;
                int *l_1063 = &g_482;
                int *l_1064 = (void*)0;
                int *l_1065 = &g_28;
                l_1066++;
                (*l_1065) = (-1L);
                return (*g_596);
            }
        }
        (**g_596) = (safe_mul_func_int8_t_s_s(p_34, (safe_add_func_uint8_t_u_u(l_991, l_976))));
        (*g_597) = (**g_596);
    }
    else
    {
        unsigned l_1083 = 4294967291UL;
        int l_1114 = 7L;
        int l_1141 = 0x1EB8E845L;
        int l_1200 = 1L;
        int *l_1205 = &g_28;
        int *l_1206 = (void*)0;
        int *l_1207 = &g_21;
        int *l_1208 = &g_21;
        int *l_1209 = &g_4;
        int *l_1210 = &g_482;
        int *l_1211 = &g_28;
        int *l_1212 = &g_28;
        int *l_1213 = &g_153.f0;
        int *l_1214 = &l_976;
        int *l_1215 = &l_917;
        int *l_1216 = &l_991;
        int *l_1217 = &g_153.f0;
        int *l_1218 = &l_1012;
        int *l_1219 = &g_482;
        int *l_1220 = &g_482;
        int *l_1221 = &g_21;
        int *l_1222 = (void*)0;
        int *l_1223 = (void*)0;
        int *l_1224 = &g_4;
        int l_1225 = 0xD40BCE2EL;
        int *l_1226 = &l_1141;
        int *l_1227 = &l_917;
        int *l_1228 = &l_1225;
        int l_1229 = (-1L);
        int *l_1230 = &g_153.f2;
        int *l_1231 = &g_28;
        int *l_1232 = (void*)0;
        int *l_1233 = &l_1114;
        int *l_1234 = &g_153.f2;
        int *l_1235 = &l_976;
        int *l_1236 = (void*)0;
        int *l_1237 = &g_153.f0;
        int *l_1238 = &l_956;
        int *l_1239 = &g_482;
        int *l_1240 = &l_1229;
        int *l_1241 = (void*)0;
        int *l_1242 = &l_1011;
        int *l_1243 = &l_1200;
        int *l_1244 = &l_1141;
        int *l_1245 = (void*)0;
        int *l_1246 = &g_482;
        int *l_1247 = (void*)0;
        int *l_1248 = &g_21;
        int *l_1249 = &l_976;
        int *l_1250 = &l_976;
        int *l_1251 = &l_1200;
        int *l_1252 = &l_956;
        int *l_1253 = &l_991;
        int *l_1254 = &l_976;
        int l_1255 = (-9L);
        int *l_1256 = (void*)0;
        int *l_1257 = &l_1225;
        int *l_1258 = &l_1225;
        int *l_1259 = &l_1114;
        int *l_1260 = &l_942;
        int l_1261 = 0x20C6CBE8L;
        int *l_1262 = &l_1011;
        int *l_1263 = &g_482;
        int *l_1264 = &g_153.f2;
        int *l_1265 = (void*)0;
        int *l_1266 = &l_1229;
        int *l_1267 = &l_1261;
        int *l_1268 = &g_153.f2;
        int l_1269 = 0L;
        int *l_1270 = &l_991;
        int *l_1271 = (void*)0;
        int *l_1272 = &g_21;
        int *l_1273 = (void*)0;
        int *l_1274 = &l_1255;
        int *l_1275 = &l_942;
        int *l_1276 = (void*)0;
        int *l_1277 = (void*)0;
        int *l_1278 = &g_28;
        int *l_1279 = &g_21;
        int *l_1280 = (void*)0;
        int l_1281 = 0x32BE493BL;
        int *l_1282 = (void*)0;
        int *l_1283 = &g_28;
        int *l_1284 = &l_917;
        int *l_1285 = &l_1012;
        unsigned l_1286 = 0xC42960D6L;
        int *l_1290 = &l_991;
        int *l_1292 = &g_21;
        int *l_1294 = &l_1255;
        int *l_1295 = (void*)0;
        int *l_1296 = &g_153.f0;
        int *l_1297 = &l_1225;
        int *l_1298 = &l_1281;
        int *l_1299 = &l_1255;
        int *l_1300 = &l_1200;
        int *l_1301 = (void*)0;
        unsigned l_1302 = 0UL;
        (**g_596) = (l_1012 || (5L < (safe_sub_func_int8_t_s_s(l_1011, (safe_lshift_func_uint8_t_u_u((*p_35), 4))))));
        if (((9UL < ((safe_lshift_func_int16_t_s_u(((*g_30) && ((*p_35) = (g_326 && 0x9C49L))), 5)) <= ((0x94L & (--g_829)) == 0xB996L))) != (+((safe_mod_func_int32_t_s_s((l_1083 & (&l_913 == (l_1084 = &g_426))), (**g_596))) ^ 0xF2L))))
        {
            short *l_1091 = &g_119;
            (**g_596) = ((*g_597) ^ ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(0UL, (((safe_add_func_uint16_t_u_u((0x0744L | ((*l_1091) = p_36)), ((g_214 = (safe_add_func_int8_t_s_s(p_34, p_34))) == ((void*)0 == &g_335)))) && func_62(&g_249, l_1083)) || 0x80L))), 0x09L)) ^ (-1L)));
        }
        else
        {
            int *l_1094 = (void*)0;
            int *l_1095 = &g_153.f2;
            int *l_1096 = &l_991;
            int *l_1097 = (void*)0;
            int *l_1098 = &l_917;
            int *l_1099 = (void*)0;
            int *l_1100 = &g_28;
            int *l_1101 = (void*)0;
            int *l_1102 = &g_4;
            int *l_1103 = &g_153.f0;
            int *l_1104 = &g_28;
            int *l_1105 = (void*)0;
            int *l_1106 = &l_1011;
            int *l_1107 = &g_21;
            int *l_1108 = &l_956;
            int *l_1109 = &g_28;
            int *l_1110 = &l_976;
            int *l_1111 = &g_153.f0;
            int *l_1112 = (void*)0;
            int *l_1113 = &g_153.f0;
            int *l_1115 = &g_21;
            int l_1116 = 0x21B3913BL;
            int *l_1117 = &l_991;
            int *l_1118 = &l_1114;
            int *l_1119 = &l_1011;
            int *l_1120 = &g_153.f0;
            int *l_1121 = (void*)0;
            int l_1122 = 0x0A7F3B90L;
            int *l_1123 = &g_28;
            int *l_1124 = &l_942;
            int *l_1125 = &l_991;
            int l_1126 = 0xAC73CE3AL;
            int *l_1127 = &g_4;
            int *l_1128 = (void*)0;
            int *l_1129 = &l_1126;
            int *l_1130 = &g_21;
            int *l_1131 = (void*)0;
            int *l_1132 = (void*)0;
            int *l_1134 = (void*)0;
            int *l_1135 = &l_1012;
            int *l_1136 = (void*)0;
            int *l_1137 = &l_942;
            int *l_1138 = &l_942;
            int *l_1139 = &l_1126;
            int *l_1140 = &l_976;
            int *l_1142 = (void*)0;
            int *l_1143 = &l_956;
            int *l_1144 = &g_482;
            int *l_1145 = (void*)0;
            int *l_1146 = &g_28;
            int *l_1147 = &l_1126;
            int l_1148 = 1L;
            int *l_1149 = (void*)0;
            int *l_1150 = &l_991;
            int *l_1151 = (void*)0;
            int *l_1152 = (void*)0;
            int *l_1153 = &g_21;
            int *l_1154 = &l_1114;
            int *l_1155 = &g_153.f2;
            int *l_1156 = &l_942;
            int *l_1157 = &l_1011;
            int *l_1158 = &l_1012;
            int *l_1159 = &l_1011;
            int *l_1160 = &l_917;
            int *l_1161 = &l_991;
            int *l_1162 = &l_976;
            int *l_1163 = &g_21;
            int *l_1164 = &g_21;
            int *l_1165 = &g_4;
            int *l_1166 = (void*)0;
            int *l_1167 = &l_956;
            int *l_1168 = &l_991;
            int *l_1169 = &g_153.f2;
            int *l_1170 = &l_1148;
            int *l_1171 = &l_1122;
            int *l_1172 = &l_991;
            int *l_1173 = (void*)0;
            int *l_1174 = (void*)0;
            int *l_1175 = &l_917;
            int *l_1176 = (void*)0;
            int *l_1177 = &l_917;
            int *l_1178 = &l_976;
            int *l_1179 = (void*)0;
            int *l_1180 = &l_1011;
            int *l_1181 = &l_1122;
            int *l_1182 = &l_1141;
            int *l_1183 = &l_1126;
            int *l_1184 = &l_917;
            int *l_1185 = &g_21;
            int *l_1186 = &l_1148;
            int *l_1187 = &l_956;
            int *l_1188 = &l_917;
            int *l_1189 = &l_917;
            int *l_1190 = (void*)0;
            int *l_1191 = &g_153.f2;
            int *l_1192 = &g_28;
            int *l_1193 = &l_1114;
            int *l_1194 = &l_991;
            int *l_1195 = &l_1122;
            int l_1199 = 0x96DE90F9L;
            int *l_1201 = (void*)0;
            unsigned short l_1202 = 65530UL;
            g_1196++;
            --l_1202;
        }
        --l_1286;
        --l_1302;
    }
    (*g_596) = &p_34;
    if (p_36)
    {
        char *l_1309 = &g_1019;
        int l_1310 = (-7L);
        unsigned short *l_1315 = &g_329;
        short *l_1316 = &g_906;
        short *l_1317 = &g_679;
        const unsigned l_1318 = 4294967294UL;
        int *l_1320 = &g_482;
        int **l_1319 = &l_1320;
        unsigned short *l_1331 = &g_447;
        int *l_1332 = &g_21;
        int *l_1333 = &g_28;
        int *l_1334 = &l_1310;
        int *l_1335 = &g_4;
        int *l_1336 = (void*)0;
        int *l_1337 = &g_4;
        int *l_1338 = &l_1011;
        int *l_1339 = &l_1310;
        int *l_1340 = &g_482;
        int *l_1341 = &l_1289;
        int *l_1342 = &g_153.f2;
        int *l_1346 = &l_1011;
        int *l_1347 = &l_1310;
        int *l_1348 = &g_4;
        int *l_1349 = &l_1289;
        int *l_1350 = &g_153.f2;
        int *l_1351 = &l_1289;
        int *l_1352 = &l_1310;
        int *l_1353 = (void*)0;
        int *l_1354 = &l_1012;
        int *l_1355 = &l_1012;
        int *l_1356 = &l_1291;
        int *l_1357 = &l_1012;
        int *l_1358 = &l_1011;
        int *l_1359 = &l_942;
        int *l_1360 = (void*)0;
        int *l_1361 = &l_991;
        int *l_1362 = &l_1310;
        int *l_1363 = &g_21;
        int *l_1364 = &g_4;
        int *l_1365 = &l_1289;
        int *l_1366 = (void*)0;
        int *l_1367 = &g_4;
        int *l_1368 = (void*)0;
        int *l_1369 = (void*)0;
        int *l_1370 = (void*)0;
        int *l_1371 = (void*)0;
        int *l_1372 = &l_1289;
        int l_1373 = (-10L);
        int *l_1374 = &l_991;
        int l_1375 = 0L;
        int *l_1376 = &l_1289;
        int *l_1377 = &l_976;
        int *l_1378 = &l_1289;
        int *l_1379 = &l_956;
        int *l_1380 = &g_21;
        int l_1381 = 0x23586DEEL;
        int *l_1382 = &g_4;
        int *l_1383 = &l_1310;
        int l_1384 = 0xB65FF5D5L;
        int *l_1385 = &l_1373;
        int *l_1386 = &l_1012;
        int *l_1387 = &g_153.f0;
        int *l_1388 = &l_1293;
        int *l_1389 = &l_1384;
        int l_1390 = 0x4AA6C096L;
        int *l_1391 = &g_4;
        int *l_1392 = &g_482;
        int *l_1393 = &g_153.f0;
        int *l_1394 = &l_1390;
        int *l_1395 = &l_942;
        int *l_1396 = &l_956;
        int *l_1397 = &l_1373;
        int *l_1398 = (void*)0;
        int *l_1399 = &l_1293;
        int *l_1400 = &l_1293;
        int l_1401 = 0xD3EAED0CL;
        int *l_1402 = &l_1381;
        int *l_1403 = &g_482;
        int *l_1404 = (void*)0;
        int *l_1405 = &l_917;
        int *l_1406 = &g_28;
        int *l_1407 = &l_956;
        int *l_1408 = (void*)0;
        int *l_1409 = &g_28;
        (*l_1319) = ((*g_596) = func_45(p_36, (**g_29), ((safe_sub_func_int16_t_s_s(g_153.f0, ((*l_1317) = ((*l_1316) = (safe_add_func_uint8_t_u_u(func_62(l_1309, l_1310), (g_1133 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(l_917, ((*l_1315) &= p_36))), p_36))))))))) <= g_1019), p_36, l_1318));
        (*g_596) = func_53((0x1E31L || (((((safe_lshift_func_uint16_t_u_u(65530UL, (safe_mul_func_uint16_t_u_u(((*l_1315) = l_942), 65535UL)))) < (&g_249 == (void*)0)) & l_917) & ((safe_mod_func_int8_t_s_s(((p_36 == ((*l_1331) = (l_1289 || (**l_1319)))) | (-1L)), l_1011)) || 0xF2L)) < l_1289)), (*g_29), (*g_30));
        l_1343++;
        --g_1410;
    }
    else
    {
        unsigned l_1417 = 0x4A7E90F4L;
        unsigned *l_1422 = &l_1343;
        char *l_1423 = &g_249;
        char *l_1430 = (void*)0;
        int l_1443 = 2L;
        int l_1450 = 0x588075EEL;
        const struct S0 **l_1523 = (void*)0;
        int l_1620 = 0xE39DAC8AL;
        int l_1662 = 0x3D84D7E4L;
        unsigned char l_1697 = 0x05L;
        short *l_1925 = (void*)0;
        short **l_1924 = &l_1925;
        short ***l_1923 = &l_1924;
        const int *l_2003 = &g_1942;
        const int *l_2043 = &l_1011;
        if (((safe_rshift_func_int16_t_s_s(((*p_35) < ((*l_1423) &= (safe_mod_func_int32_t_s_s(((*p_35) | l_1417), ((*l_1422) = func_42(((*g_596) = func_45(((*l_1027) = ((0xB0BF21B4L < l_1417) == (safe_sub_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((g_447 < l_1417), ((*g_29) != (void*)0))) == (-5L)), g_326)))), (**g_29), l_1289, p_34, l_1417)), p_36)))))), 14)) < l_1011))
        {
            int l_1440 = (-1L);
            int l_1500 = 0L;
            int l_1505 = 0xB2D84205L;
            struct S0 * const *l_1522 = &g_427;
            struct S0 **l_1582 = &g_427;
            unsigned short *l_1844 = &g_447;
            short l_1845 = 1L;
            const int *l_1856 = &g_153.f0;
            int *l_2004 = &l_1289;
            int *l_2005 = (void*)0;
            int *l_2006 = &l_1011;
            int *l_2007 = &l_1291;
            int *l_2008 = (void*)0;
            int *l_2009 = &l_1450;
            int *l_2010 = &g_153.f2;
            int *l_2011 = &g_1942;
            int *l_2012 = &l_1505;
            int *l_2013 = &l_1289;
            int *l_2014 = (void*)0;
            int *l_2015 = (void*)0;
            int *l_2016 = &l_1500;
            int *l_2017 = (void*)0;
            int *l_2018 = &l_976;
            int *l_2019 = &g_482;
            int *l_2020 = (void*)0;
            int *l_2021 = &l_1505;
            int *l_2022 = (void*)0;
            int *l_2023 = &l_1500;
            int *l_2024 = &l_1293;
            int *l_2025 = &l_976;
            int *l_2026 = &l_1662;
            int *l_2027 = &g_153.f0;
            int *l_2028 = &l_1450;
            int *l_2029 = &l_1500;
            int *l_2030 = &l_1291;
            int *l_2031 = &g_1942;
            int *l_2032 = &g_482;
            int *l_2033 = (void*)0;
            int *l_2034 = &g_153.f0;
            int *l_2035 = (void*)0;
            int *l_2036 = &g_1942;
            unsigned short l_2037 = 1UL;
            for (g_4 = 0; (g_4 > 18); g_4++)
            {
                int *l_1427 = &l_1011;
                int **l_1426 = &l_1427;
                if (p_34)
                    break;
                (*l_1426) = ((*g_596) = &p_34);
            }
            if ((safe_mul_func_int8_t_s_s(((p_34 | 0L) != p_34), (g_23 < func_62(l_1430, (*p_35))))))
            {
                short l_1431 = 0xA1ABL;
                int *l_1432 = &g_482;
                int *l_1433 = &g_4;
                int *l_1434 = &l_917;
                int *l_1435 = &g_21;
                int *l_1436 = &g_28;
                int *l_1437 = &l_1291;
                int *l_1438 = &g_153.f2;
                int *l_1439 = &l_1012;
                int *l_1441 = &l_917;
                int *l_1442 = &l_917;
                int *l_1444 = &g_153.f2;
                int *l_1445 = &l_917;
                int *l_1446 = &l_942;
                int *l_1447 = &l_1011;
                int *l_1448 = &l_917;
                int *l_1449 = (void*)0;
                int *l_1451 = &g_153.f2;
                int *l_1452 = &l_1450;
                int *l_1453 = &l_1450;
                int *l_1454 = &l_1443;
                int *l_1455 = &l_1450;
                int *l_1456 = &g_21;
                int *l_1457 = &l_991;
                int *l_1458 = &l_1289;
                int *l_1459 = &l_1293;
                int *l_1460 = &l_1293;
                int *l_1461 = &l_1289;
                int *l_1462 = &l_917;
                int *l_1463 = &g_4;
                int *l_1464 = (void*)0;
                int *l_1465 = &l_942;
                int *l_1466 = &l_1293;
                int *l_1467 = &g_21;
                int *l_1468 = &l_976;
                int *l_1469 = (void*)0;
                int *l_1470 = (void*)0;
                int *l_1471 = &l_1450;
                int *l_1472 = &g_4;
                int *l_1473 = &l_956;
                int *l_1474 = &l_1293;
                int *l_1475 = &l_991;
                int *l_1476 = &g_482;
                int *l_1477 = &g_21;
                int *l_1478 = (void*)0;
                int *l_1479 = &l_1011;
                int *l_1480 = &g_21;
                int *l_1481 = (void*)0;
                int *l_1482 = (void*)0;
                int *l_1483 = &g_153.f2;
                int *l_1484 = &l_1291;
                int *l_1485 = &l_1443;
                int *l_1486 = (void*)0;
                int *l_1487 = (void*)0;
                int *l_1488 = &l_942;
                int *l_1489 = &l_1443;
                int *l_1490 = (void*)0;
                int *l_1491 = (void*)0;
                int *l_1492 = &l_917;
                int *l_1493 = &g_153.f2;
                int *l_1494 = &l_942;
                int *l_1495 = &l_1450;
                int *l_1496 = &l_1443;
                int *l_1497 = (void*)0;
                int *l_1498 = &l_976;
                int *l_1499 = &l_1443;
                int *l_1501 = &g_4;
                int *l_1502 = (void*)0;
                int *l_1503 = &g_28;
                int *l_1504 = (void*)0;
                int *l_1506 = &l_1012;
                int *l_1507 = &g_28;
                int *l_1508 = &l_917;
                int *l_1509 = &l_1450;
                int *l_1510 = &l_1505;
                int *l_1511 = &g_482;
                (*l_1432) |= func_149((*g_427), (*p_35), (+l_1431));
                --g_1512;
                for (g_4 = 0; (g_4 > (-29)); --g_4)
                {
                    short l_1517 = 0xA82BL;
                    (**l_1084) = (**l_1084);
                    if ((*g_597))
                        continue;
                    if (l_1517)
                        continue;
                }
                (*l_1472) ^= (**g_596);
            }
            else
            {
                const struct S0 ***l_1524 = &l_1523;
                int l_1550 = 8L;
                unsigned l_1575 = 4294967293UL;
                short **l_1578 = (void*)0;
                struct S0 **l_1581 = &g_427;
                int l_1684 = 0x2FCB04CBL;
                int l_1802 = (-10L);
                int l_1816 = 0x4798A011L;
                unsigned short *l_1843 = &g_447;
                unsigned short **l_1842 = &l_1843;
                int *l_1853 = &l_1443;
                int l_1864 = (-4L);
                int *l_1868 = &l_1293;
                int *l_1869 = &l_1500;
                int *l_1870 = &g_153.f2;
                int *l_1871 = &l_991;
                int *l_1872 = &l_1559;
                int *l_1873 = &l_976;
                int *l_1874 = &l_976;
                int *l_1875 = &l_1662;
                int *l_1876 = &l_1291;
                int *l_1877 = &l_1816;
                int *l_1878 = (void*)0;
                int *l_1879 = &l_976;
                int *l_1880 = &l_1011;
                int *l_1881 = &g_482;
                int *l_1882 = &g_153.f2;
                int *l_1883 = &l_1505;
                int *l_1884 = &g_153.f2;
                int *l_1885 = &g_153.f0;
                int *l_1886 = &g_21;
                int *l_1887 = &l_1816;
                int *l_1888 = &g_482;
                int *l_1889 = &l_1802;
                int *l_1890 = &l_1012;
                int *l_1891 = &g_4;
                int *l_1892 = &l_1559;
                int *l_1893 = &l_956;
                int *l_1894 = &l_1505;
                int *l_1895 = (void*)0;
                int *l_1896 = &l_1662;
                int *l_1897 = &l_956;
                int *l_1898 = &l_1620;
                int *l_1899 = &g_153.f0;
                int *l_1900 = &l_1012;
                int *l_1901 = &l_1500;
                int *l_1902 = &g_21;
                int *l_1903 = &l_956;
                int *l_1904 = &l_1293;
                int *l_1905 = &l_1289;
                int *l_1906 = &l_991;
                int *l_1907 = &l_1289;
                int *l_1908 = &l_956;
                int *l_1909 = &g_153.f2;
                unsigned l_1910 = 0xA833FFDDL;
                if ((((l_1500 && g_1196) >= ((p_36 > (-1L)) & ((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((*p_35), (l_1522 == ((*l_1524) = l_1523)))), func_42((*g_596), (safe_rshift_func_uint16_t_u_u(l_1505, p_36))))) == 0xC3L))) && 0x05FE76ACL))
                {
                    unsigned char l_1527 = 4UL;
                    unsigned l_1545 = 4294967286UL;
                    int l_1572 = 1L;
                    if (l_1527)
                    {
                        int *l_1528 = &l_1505;
                        int *l_1529 = &l_942;
                        int *l_1530 = (void*)0;
                        int *l_1531 = &l_976;
                        int *l_1532 = &g_153.f2;
                        int *l_1533 = &g_21;
                        int *l_1534 = (void*)0;
                        int *l_1535 = &g_4;
                        int *l_1536 = &l_1450;
                        int *l_1537 = (void*)0;
                        int *l_1538 = &l_956;
                        int *l_1539 = &g_21;
                        int *l_1540 = (void*)0;
                        int *l_1541 = &g_21;
                        int *l_1542 = &l_942;
                        int *l_1543 = (void*)0;
                        int *l_1544 = &g_153.f2;
                        unsigned short *l_1551 = &g_1013;
                        char **l_1556 = &l_1430;
                        short *l_1557 = (void*)0;
                        short *l_1558 = &g_679;
                        int *l_1560 = (void*)0;
                        int *l_1561 = &g_28;
                        int *l_1562 = &g_4;
                        int *l_1563 = &g_482;
                        int *l_1564 = &l_1289;
                        int *l_1565 = &l_1289;
                        int *l_1566 = &l_1293;
                        int *l_1567 = &l_1293;
                        int *l_1568 = &l_1289;
                        int *l_1569 = &g_28;
                        int *l_1570 = (void*)0;
                        int *l_1571 = &l_1550;
                        int l_1573 = 0x819E6C79L;
                        int *l_1574 = &l_1443;
                        ++l_1545;
                        l_1559 = (func_149((**l_913), (*p_35), ((*l_1544) != (((safe_rshift_func_uint8_t_u_s(l_1550, l_1450)) > (--(*l_1551))) | (safe_mod_func_int16_t_s_s(((*l_1558) = (func_62(((*l_1556) = &p_36), l_1527) && (p_34 < 0L))), p_34))))) & l_1450);
                        (*l_1535) |= p_34;
                        ++l_1575;
                    }
                    else
                    {
                        short ***l_1579 = &l_1578;
                        (*l_1579) = l_1578;
                    }
                    if (((*g_30) || ((**g_29) = l_1527)))
                    {
                        const int *l_1580 = (void*)0;
                        return l_1580;
                    }
                    else
                    {
                        struct S0 ***l_1583 = &l_1582;
                        (**g_596) = p_34;
                        (*g_596) = func_53(l_1500, (*g_29), (*p_35));
                        (*g_596) = func_53(((g_426 = l_1581) != ((*l_1583) = l_1582)), &l_1527, ((**g_29) = (*p_35)));
                    }
                }
                else
                {
                    const int *l_1584 = (void*)0;
                    int l_1588 = 0x134A4F38L;
                    int l_1609 = 1L;
                    int l_1610 = 0L;
                    int l_1668 = (-1L);
                    unsigned short l_1694 = 0UL;
                    int *l_1700 = &g_4;
                    int *l_1701 = &l_1668;
                    int *l_1702 = &l_1500;
                    int *l_1703 = &l_1684;
                    int *l_1704 = &l_956;
                    int *l_1705 = &l_1684;
                    int *l_1706 = &g_482;
                    int *l_1707 = (void*)0;
                    int *l_1708 = (void*)0;
                    int *l_1709 = &l_956;
                    int *l_1710 = &l_1550;
                    int *l_1711 = (void*)0;
                    int *l_1712 = &l_1293;
                    int *l_1713 = &g_4;
                    int *l_1714 = &l_976;
                    int *l_1715 = &l_1620;
                    int *l_1716 = &l_1012;
                    int *l_1717 = &l_1668;
                    int *l_1718 = &l_1609;
                    int *l_1719 = &l_942;
                    int *l_1720 = &l_1450;
                    int *l_1721 = &l_1289;
                    int *l_1722 = (void*)0;
                    int *l_1723 = &l_991;
                    int *l_1724 = (void*)0;
                    int *l_1725 = (void*)0;
                    int *l_1726 = &l_956;
                    int *l_1727 = &l_1012;
                    int *l_1728 = &l_1505;
                    int *l_1729 = &g_153.f0;
                    int *l_1730 = &g_153.f0;
                    int *l_1731 = (void*)0;
                    int *l_1732 = &l_1500;
                    int *l_1733 = &l_1450;
                    int *l_1734 = &l_1610;
                    int *l_1735 = &g_153.f2;
                    int *l_1736 = &l_1550;
                    int *l_1737 = &l_1620;
                    int *l_1738 = &l_1609;
                    int *l_1739 = &l_1291;
                    int *l_1740 = &l_1500;
                    int *l_1741 = &l_1550;
                    int *l_1742 = &g_21;
                    int *l_1743 = &l_1293;
                    int *l_1744 = (void*)0;
                    int *l_1745 = &l_1293;
                    int *l_1746 = &l_1293;
                    int *l_1747 = &g_4;
                    int *l_1748 = &l_956;
                    int *l_1749 = &l_1289;
                    int *l_1750 = &l_1609;
                    int *l_1751 = &l_1450;
                    int *l_1752 = &l_942;
                    int *l_1753 = &l_1291;
                    int *l_1754 = (void*)0;
                    int *l_1755 = (void*)0;
                    int *l_1756 = &l_976;
                    int *l_1757 = &l_1550;
                    int *l_1758 = &l_1620;
                    int *l_1759 = (void*)0;
                    int *l_1760 = &l_1500;
                    int *l_1761 = &l_956;
                    int *l_1762 = &l_1684;
                    int *l_1763 = &l_942;
                    int *l_1764 = &g_482;
                    int *l_1765 = &l_1011;
                    int *l_1766 = (void*)0;
                    int *l_1767 = &l_1668;
                    int *l_1768 = &l_1588;
                    int *l_1769 = (void*)0;
                    int *l_1770 = &g_153.f2;
                    int *l_1771 = &g_482;
                    int *l_1772 = &l_1662;
                    int *l_1773 = (void*)0;
                    int *l_1774 = (void*)0;
                    int *l_1775 = &l_1443;
                    int *l_1776 = &g_153.f0;
                    int *l_1777 = &g_153.f2;
                    int *l_1778 = &l_1291;
                    int *l_1779 = &g_28;
                    int *l_1780 = (void*)0;
                    int *l_1781 = &l_1609;
                    int *l_1782 = &l_976;
                    int *l_1783 = &g_21;
                    int *l_1784 = &g_4;
                    int *l_1785 = (void*)0;
                    int *l_1786 = (void*)0;
                    int *l_1787 = &l_1291;
                    int *l_1788 = &l_991;
                    int *l_1789 = &l_1610;
                    int *l_1790 = &l_1500;
                    int *l_1791 = &l_917;
                    int *l_1792 = &l_917;
                    int *l_1793 = (void*)0;
                    int *l_1794 = &l_1505;
                    int *l_1795 = &l_1662;
                    int *l_1796 = &l_1662;
                    int *l_1797 = (void*)0;
                    int *l_1798 = (void*)0;
                    int *l_1799 = &l_991;
                    int *l_1800 = &g_21;
                    int *l_1801 = (void*)0;
                    int *l_1803 = &l_1291;
                    int *l_1804 = &l_1012;
                    int *l_1805 = (void*)0;
                    int *l_1806 = &l_1610;
                    int *l_1807 = &g_21;
                    int *l_1808 = &l_917;
                    int *l_1809 = &l_1291;
                    int *l_1810 = (void*)0;
                    int *l_1811 = &l_1500;
                    int *l_1812 = &l_1620;
                    int *l_1813 = (void*)0;
                    int *l_1814 = &g_28;
                    int *l_1815 = &l_976;
                    (*g_597) &= l_1417;
                    if ((*g_597))
                    {
                        return l_1584;
                    }
                    else
                    {
                        int *l_1585 = &l_1291;
                        int *l_1586 = &l_1550;
                        int *l_1587 = &l_1289;
                        int *l_1589 = &l_942;
                        int *l_1590 = &g_28;
                        int *l_1591 = &l_1443;
                        int *l_1592 = &l_1443;
                        int *l_1593 = &l_1500;
                        int *l_1594 = &l_1505;
                        int *l_1595 = &l_1293;
                        int *l_1596 = &l_1559;
                        int *l_1597 = &g_153.f0;
                        int *l_1598 = (void*)0;
                        int *l_1599 = &l_1550;
                        int l_1600 = 0L;
                        int *l_1601 = &g_153.f2;
                        int *l_1602 = (void*)0;
                        int *l_1603 = &l_942;
                        int *l_1604 = &l_991;
                        int *l_1605 = (void*)0;
                        int *l_1606 = &l_1293;
                        int *l_1607 = &l_1450;
                        int *l_1608 = &g_153.f2;
                        int *l_1611 = &l_917;
                        int *l_1612 = &g_28;
                        int *l_1613 = &l_1450;
                        int *l_1614 = &g_153.f2;
                        int *l_1615 = &l_991;
                        int *l_1616 = &l_1600;
                        int *l_1617 = &g_153.f0;
                        int *l_1618 = (void*)0;
                        int *l_1619 = &g_482;
                        int *l_1621 = &l_976;
                        int *l_1622 = &l_1550;
                        int *l_1623 = &l_1011;
                        int *l_1624 = &g_482;
                        int *l_1625 = &g_21;
                        int *l_1626 = (void*)0;
                        int *l_1627 = &l_1443;
                        int *l_1628 = (void*)0;
                        int *l_1629 = (void*)0;
                        int *l_1630 = (void*)0;
                        int *l_1631 = &l_991;
                        int *l_1632 = &l_1609;
                        int *l_1633 = &l_1559;
                        int *l_1634 = &l_1588;
                        int *l_1635 = &l_1609;
                        int *l_1636 = (void*)0;
                        int *l_1637 = (void*)0;
                        int *l_1638 = &l_1610;
                        int *l_1639 = &g_4;
                        int *l_1640 = &l_1610;
                        int l_1641 = 0xAED11DE2L;
                        int *l_1642 = &l_1012;
                        int *l_1643 = &l_1011;
                        int *l_1644 = (void*)0;
                        int *l_1645 = (void*)0;
                        int *l_1646 = &l_1610;
                        int *l_1647 = &l_1443;
                        int *l_1648 = &l_1641;
                        int *l_1649 = &l_1600;
                        int *l_1650 = (void*)0;
                        int *l_1651 = &l_1588;
                        int *l_1652 = &g_153.f0;
                        int *l_1654 = &l_1588;
                        int *l_1655 = &g_21;
                        int *l_1656 = &l_1609;
                        int *l_1657 = &l_1588;
                        int *l_1658 = &g_153.f2;
                        int *l_1659 = (void*)0;
                        int *l_1660 = &l_1610;
                        int *l_1661 = &l_1609;
                        int *l_1663 = (void*)0;
                        int *l_1664 = &l_1641;
                        int *l_1665 = &l_1641;
                        int l_1666 = 0x139CA2DBL;
                        int *l_1667 = &g_153.f2;
                        int *l_1669 = (void*)0;
                        int *l_1670 = &g_153.f0;
                        int *l_1671 = &l_917;
                        int *l_1672 = &l_1443;
                        int *l_1673 = (void*)0;
                        int *l_1674 = &l_1289;
                        int *l_1676 = (void*)0;
                        int *l_1677 = &l_1289;
                        int *l_1678 = &g_153.f2;
                        int *l_1680 = &g_21;
                        int *l_1681 = &l_1620;
                        int *l_1682 = &l_991;
                        int *l_1683 = (void*)0;
                        int *l_1685 = &g_482;
                        int *l_1686 = &l_942;
                        int *l_1687 = &l_1550;
                        int *l_1688 = &g_153.f0;
                        int *l_1689 = (void*)0;
                        int *l_1690 = &l_1011;
                        ++g_1691;
                        l_1694--;
                        l_1697--;
                    }
                    g_1817++;
                    if (((*l_1702) = (*g_597)))
                    {
                        char l_1820 = 7L;
                        int l_1821 = 0L;
                        int l_1822 = (-1L);
                        int l_1823 = (-7L);
                        int l_1824 = 0x1FDB1548L;
                        int *l_1825 = (void*)0;
                        int *l_1826 = &g_482;
                        int *l_1827 = (void*)0;
                        int *l_1828 = &l_976;
                        int *l_1829 = &l_1821;
                        int *l_1830 = (void*)0;
                        int *l_1831 = &l_1012;
                        int *l_1832 = &l_1559;
                        l_1550 |= (p_36 && 0x20L);
                        g_1833--;
                        (*g_596) = &p_34;
                    }
                    else
                    {
                        (*g_596) = (*g_596);
                        (**g_596) = p_34;
                    }
                }
                if ((safe_sub_func_uint8_t_u_u(((l_1440 && (0L == p_36)) < 0x02L), p_34)))
                {
                    struct S0 l_1846 = {1L,0x84048EC3L,0x7D7A5DABL,0x9DD17AC7L};
                    int l_1847 = (-2L);
                    struct S0 *l_1849 = (void*)0;
                    struct S0 **l_1848 = &l_1849;
                    int *l_1850 = &l_1847;
                    const int *l_1855 = &l_1847;
                    l_1847 &= func_149(l_1846, l_1845, l_1684);
                    (*l_1850) |= ((p_36 ^ l_1440) >= ((*l_1582) == ((*l_1848) = &l_1846)));
                    for (g_1133 = 20; (g_1133 == 0); --g_1133)
                    {
                        const int *l_1854 = &l_942;
                        (*g_596) = (*g_596);
                        l_1853 = (*g_596);
                        return l_1856;
                    }
                }
                else
                {
                    unsigned char *l_1861 = &g_1691;
                    (*l_1853) = func_145((safe_sub_func_uint8_t_u_u(l_1417, ((*l_1861) = (++(*g_30))))), l_1861, &p_35);
                    for (l_1293 = 6; (l_1293 <= (-9)); --l_1293)
                    {
                        short l_1867 = 0xBFE6L;
                        if (l_1864)
                            break;
                        (*l_1853) = (((((*p_35) = (**g_29)) == ((0x0FA60F44L <= l_1443) & (safe_mul_func_int8_t_s_s((p_36 = l_1867), 0x1AL)))) & l_1697) & p_34);
                    }
                    (*g_596) = &p_34;
                }
                l_1910++;
                (*g_596) = func_53((p_34 > (((void*)0 != &g_29) >= (((void*)0 == (**l_1084)) > l_1417))), func_65((safe_lshift_func_int16_t_s_s((*l_1872), 7)), l_1443), (*l_1896));
            }
            if ((((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((~l_1620), (l_1923 != (void*)0))), (p_34 == func_149((**l_1582), (**g_29), l_1011)))), 0xA3E7L)) > p_36), l_1450)) && 9L) >= p_36))
            {
                const char l_1928 = 0x81L;
                unsigned char **l_1938 = &g_30;
                int l_1950 = (-6L);
                for (g_827 = 16; (g_827 != 7); g_827 = safe_sub_func_uint32_t_u_u(g_827, 6))
                {
                    unsigned l_1930 = 0UL;
                    if (p_36)
                    {
                        p_34 = p_34;
                        (*g_596) = func_53(p_34, (*g_29), l_1930);
                    }
                    else
                    {
                        int ***l_1933 = &g_596;
                        int *l_1936 = (void*)0;
                        int *l_1937 = &l_1559;
                        l_1500 ^= (safe_rshift_func_uint8_t_u_u(l_1450, 2));
                        (*l_1937) = ((((((*l_1933) = &g_597) != (void*)0) >= (*l_1856)) ^ (safe_mod_func_int16_t_s_s(l_956, (+0xEEB3L)))) || 0x0CL);
                    }
                }
                g_1939 = l_1938;
                if (l_956)
                {
                    int *l_1940 = (void*)0;
                    int *l_1941 = &l_991;
                    (*l_1941) |= ((g_153.f0 >= (l_1505 &= (*l_1856))) != func_62(&g_1675, (*p_35)));
                    l_1856 = (*g_596);
                    (*g_596) = &p_34;
                }
                else
                {
                    int *l_1943 = &g_4;
                    int l_1985 = 0x0A1F9BD6L;
                    (*l_1943) = g_1942;
                    (*l_1943) = (safe_sub_func_uint16_t_u_u(1UL, (safe_sub_func_uint32_t_u_u(l_1928, func_145((*g_1929), func_65(l_1697, (*l_1943)), &g_1929)))));
                    for (l_1011 = 0; (l_1011 >= 8); l_1011 = safe_add_func_uint8_t_u_u(l_1011, 2))
                    {
                        int *l_1951 = (void*)0;
                        int *l_1952 = &l_1443;
                        int *l_1953 = &l_1289;
                        int *l_1954 = &l_917;
                        int *l_1955 = &g_28;
                        int *l_1956 = &l_991;
                        int *l_1957 = &l_917;
                        int *l_1958 = (void*)0;
                        int *l_1959 = &l_1443;
                        int *l_1960 = (void*)0;
                        int *l_1961 = &l_1500;
                        int *l_1962 = (void*)0;
                        int *l_1963 = &g_482;
                        int *l_1964 = &g_28;
                        int *l_1965 = &g_482;
                        int *l_1966 = &l_1293;
                        int *l_1967 = &g_21;
                        int *l_1968 = &l_1443;
                        int *l_1969 = &l_1293;
                        int *l_1970 = &l_1012;
                        int *l_1971 = &g_21;
                        int *l_1972 = &l_1950;
                        int *l_1973 = &l_991;
                        int *l_1974 = &g_153.f0;
                        int *l_1975 = &l_976;
                        int *l_1976 = &l_942;
                        int *l_1977 = (void*)0;
                        int *l_1978 = &l_1443;
                        int *l_1979 = (void*)0;
                        int *l_1980 = &l_1505;
                        int *l_1981 = &g_482;
                        int *l_1982 = (void*)0;
                        int *l_1983 = &l_1291;
                        int *l_1984 = &l_1291;
                        int *l_1986 = (void*)0;
                        int *l_1987 = &l_1950;
                        int *l_1988 = &g_1942;
                        int *l_1989 = (void*)0;
                        int *l_1990 = &g_153.f0;
                        int *l_1991 = (void*)0;
                        int *l_1992 = (void*)0;
                        unsigned char *l_2002 = &g_829;
                        g_1993--;
                        (*l_1980) = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((*l_1943) < 0xEEC0645CL), (((*l_2002) = (safe_mod_func_int8_t_s_s(0L, ((*g_1929) |= ((**l_1938) = (*l_1943)))))) > (-1L)))), l_1620));
                    }
                    (*l_1943) ^= p_34;
                }
            }
            else
            {
                return l_2003;
            }
            l_2037--;
        }
        else
        {
            unsigned short *l_2041 = &g_309;
            unsigned short **l_2040 = &l_2041;
            unsigned short ***l_2042 = &l_2040;
            (*l_2042) = l_2040;
            return (*g_596);
        }
        return l_2047;
    }
    for (l_1289 = (-2); (l_1289 != 23); ++l_1289)
    {
        int *l_2050 = &l_942;
        int *l_2051 = &l_991;
        int *l_2052 = (void*)0;
        int *l_2053 = &l_1011;
        int *l_2054 = &g_21;
        int *l_2055 = (void*)0;
        int *l_2056 = &g_482;
        int *l_2057 = &l_1011;
        int *l_2058 = &l_942;
        int *l_2059 = &l_1291;
        int *l_2060 = (void*)0;
        int *l_2061 = &l_1293;
        int *l_2062 = &l_1011;
        int *l_2063 = &l_942;
        int *l_2064 = &l_942;
        int *l_2065 = &l_1293;
        int *l_2066 = &l_1291;
        int l_2067 = 0xDA8FFF56L;
        int *l_2068 = &l_1291;
        int *l_2069 = &l_942;
        int l_2070 = 0x76F677A1L;
        int *l_2071 = (void*)0;
        int *l_2072 = &l_1291;
        int *l_2073 = &l_991;
        int *l_2074 = &l_1012;
        int *l_2075 = &l_1291;
        int *l_2076 = &g_21;
        int *l_2077 = &g_21;
        int *l_2078 = &l_2067;
        int *l_2079 = &l_1011;
        int *l_2080 = &l_942;
        int *l_2081 = &g_21;
        int *l_2082 = &l_956;
        unsigned l_2083 = 0UL;
        char **l_2106 = (void*)0;
        char ***l_2105 = &l_2106;
        unsigned short *l_2127 = &g_309;
        unsigned short **l_2126 = &l_2127;
        short l_2202 = (-1L);
        struct S0 ** const l_2237 = &g_427;
        l_2083--;
        for (l_1012 = 6; (l_1012 != 21); l_1012++)
        {
            short *l_2095 = &g_679;
            const int l_2104 = (-1L);
            int ***l_2112 = &g_596;
            unsigned short *l_2125 = &g_309;
            unsigned short **l_2124 = &l_2125;
            unsigned *l_2149 = &g_1196;
            unsigned **l_2148 = &l_2149;
            int l_2186 = (-2L);
            int *l_2187 = (void*)0;
            unsigned *l_2192 = &l_2189;
            unsigned short l_2193 = 0x518AL;
            char *l_2287 = &g_1019;
        }
        if ((*g_2135))
        {
            unsigned char l_2295 = 0x49L;
            short *l_2298 = &g_1679;
            for (g_13 = 5; (g_13 >= 60); g_13 = safe_add_func_uint8_t_u_u(g_13, 6))
            {
                l_2295++;
            }
            (*l_2076) = (((*l_2298) |= p_34) <= (0xDA18L | g_1133));
        }
        else
        {
            short l_2299 = 0L;
            int l_2300 = (-3L);
            if ((*g_2135))
            {
                (*l_2056) = ((void*)0 == &g_335);
                (*l_2078) &= l_2299;
            }
            else
            {
                const int *l_2301 = &g_21;
                (*l_2073) = (*l_2053);
                l_2300 = p_36;
                (*g_596) = &l_2067;
                return l_2301;
            }
            (*l_2068) = (*l_2045);
        }
        (*l_2078) = p_36;
    }
    return (*g_596);
}







static unsigned func_42(int * p_43, short p_44)
{
    short *l_892 = &g_119;
    short *l_894 = &g_679;
    short **l_893 = &l_894;
    short *l_895 = &g_679;
    int *l_896 = &g_153.f0;
    int *l_897 = &g_21;
    int *l_898 = &g_153.f0;
    int l_899 = (-1L);
    int *l_900 = &g_482;
    int l_901 = 0xF2915EA3L;
    int *l_902 = &g_153.f2;
    unsigned short l_903 = 0x898DL;
    (*l_897) = ((*l_896) = ((*p_43) = (safe_add_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(((*l_895) ^= (p_44 | ((l_892 = &p_44) == ((*l_893) = &p_44)))))), (*p_43)))));
    l_903++;
    return g_906;
}







static int * func_45(char p_46, unsigned char p_47, int p_48, const char p_49, const char p_50)
{
    int *l_882 = &g_28;
    short *l_887 = &g_679;
    (*l_882) = p_49;
    p_48 = (safe_add_func_int16_t_s_s(0x2380L, ((*l_887) = (safe_lshift_func_int8_t_s_u(p_47, 3)))));
    return l_882;
}







static int * func_53(const int p_54, unsigned char * const p_55, unsigned char p_56)
{
    int *l_880 = (void*)0;
    (*g_596) = (void*)0;
    return l_880;
}







static unsigned char func_57(char * p_58, char p_59, unsigned short p_60, int p_61)
{
    unsigned short *l_139 = (void*)0;
    int *l_142 = &g_28;
    char *l_157 = &g_23;
    char **l_156 = &l_157;
    char *l_347 = &g_296;
    unsigned char l_348 = 255UL;
    unsigned char * const *l_349 = (void*)0;
    int l_685 = 2L;
    int l_724 = 0x08880F69L;
    int l_733 = 5L;
    int l_743 = 0x7C771FB4L;
    int l_762 = 1L;
    int l_791 = 0xA4E2ADE4L;
    int l_800 = 0x12D2855EL;
    int *l_836 = &g_21;
    int *l_837 = &l_733;
    int *l_838 = &g_482;
    int *l_839 = &g_21;
    int *l_840 = &l_685;
    int *l_841 = (void*)0;
    int *l_842 = (void*)0;
    int *l_843 = &l_733;
    int *l_844 = &l_800;
    int *l_845 = &l_762;
    int *l_846 = (void*)0;
    int *l_847 = &l_743;
    int *l_848 = &g_28;
    int *l_849 = &l_743;
    int *l_850 = &g_21;
    int *l_851 = &l_762;
    int *l_852 = &g_28;
    int *l_853 = &l_733;
    int *l_854 = &l_791;
    int *l_855 = &l_685;
    int *l_856 = (void*)0;
    int *l_857 = &l_733;
    int *l_858 = &l_733;
    int *l_859 = &g_21;
    int *l_860 = &g_482;
    int *l_861 = &g_28;
    int l_862 = (-1L);
    int *l_863 = &l_685;
    int *l_864 = &l_743;
    int *l_865 = &l_762;
    int *l_866 = &l_743;
    int *l_867 = &g_21;
    int *l_868 = (void*)0;
    int l_869 = (-9L);
    int *l_870 = &l_685;
    int l_871 = 0L;
    int *l_872 = &g_21;
    int *l_873 = &l_862;
    int *l_874 = &g_482;
    int *l_875 = &g_153.f2;
    int *l_876 = &l_871;
    (*l_142) = ((++p_60) >= 8UL);
    if (((safe_sub_func_int16_t_s_s(g_23, func_145(p_61, func_65((((*l_347) = func_149(g_153, (g_28 | (*l_142)), ((g_153.f2 && func_62(((*l_156) = func_65((&g_23 != &p_59), ((safe_mul_func_int16_t_s_s((0xA28E28B5L <= p_59), 0x499CL)) || 4294967292UL))), (*l_142))) && 65535UL))) && l_348), p_60), l_349))) | 0xCA9C5949L))
    {
        return p_61;
    }
    else
    {
        int l_667 = 0xAFD6F986L;
        unsigned l_670 = 1UL;
        int l_728 = 0x437353A0L;
        int l_753 = 0x56806F2AL;
        int l_758 = 4L;
        (*l_142) = (func_62(func_65(l_667, p_59), (l_667 != g_602)) >= (g_326 < ((*g_597) ^= (((*l_347) ^= 9L) == (safe_lshift_func_int8_t_s_s(l_670, 1))))));
        for (l_667 = 0; (l_667 > 23); l_667++)
        {
            const short *l_674 = &g_675;
            const short **l_673 = &l_674;
            short *l_677 = &g_119;
            short **l_676 = &l_677;
            int l_678 = 0x6003412AL;
            if ((+(((*l_673) = &g_119) == ((*l_676) = &g_119))))
            {
                l_678 ^= (**g_596);
                (**g_596) ^= l_670;
            }
            else
            {
                char l_684 = 0xB4L;
                char l_695 = 0x5DL;
                int l_710 = (-10L);
                int l_725 = 0L;
                int l_781 = 0L;
                int l_795 = (-1L);
                int l_809 = 1L;
                (*g_596) = (*g_596);
                if ((g_679 == g_447))
                {
                    int *l_680 = &g_153.f0;
                    int *l_681 = &l_678;
                    int l_682 = 0x60905694L;
                    int *l_683 = &l_682;
                    int *l_686 = &g_28;
                    int *l_687 = (void*)0;
                    int *l_688 = (void*)0;
                    int *l_689 = &l_685;
                    int *l_690 = &g_153.f0;
                    int *l_691 = &g_28;
                    int *l_692 = &g_28;
                    int *l_693 = &l_682;
                    int *l_694 = &g_482;
                    int *l_696 = &l_678;
                    int *l_697 = &g_28;
                    int *l_698 = &g_153.f0;
                    int *l_699 = (void*)0;
                    int *l_700 = &g_482;
                    int *l_701 = &g_21;
                    int *l_702 = &l_678;
                    int *l_703 = &l_685;
                    int *l_704 = (void*)0;
                    int *l_705 = &g_482;
                    int *l_706 = &l_678;
                    int *l_707 = (void*)0;
                    int *l_708 = (void*)0;
                    int *l_709 = (void*)0;
                    int *l_711 = &l_685;
                    int *l_712 = (void*)0;
                    int *l_713 = (void*)0;
                    int *l_714 = &l_678;
                    int *l_715 = &l_710;
                    int *l_716 = &l_682;
                    int *l_717 = &l_710;
                    int *l_718 = &g_21;
                    int *l_719 = &l_685;
                    int *l_720 = &g_153.f0;
                    int *l_721 = (void*)0;
                    int *l_722 = &l_685;
                    int *l_723 = (void*)0;
                    int *l_726 = &l_682;
                    int *l_727 = &g_153.f0;
                    int *l_729 = &g_153.f0;
                    int *l_730 = (void*)0;
                    int *l_731 = &g_482;
                    int *l_732 = &l_728;
                    int *l_734 = &l_710;
                    int *l_735 = &l_725;
                    int *l_736 = &l_678;
                    int *l_737 = &l_724;
                    int *l_738 = &l_678;
                    int *l_739 = &l_725;
                    int *l_740 = (void*)0;
                    int *l_741 = (void*)0;
                    int *l_742 = &g_153.f2;
                    int l_744 = 0x70246FB8L;
                    int *l_745 = &g_21;
                    int *l_746 = (void*)0;
                    int *l_747 = &l_724;
                    int l_748 = 0x186833A7L;
                    int *l_749 = &g_153.f0;
                    int *l_750 = &l_743;
                    int *l_751 = (void*)0;
                    int *l_752 = (void*)0;
                    int *l_754 = &l_748;
                    int *l_755 = &l_724;
                    int *l_756 = &l_733;
                    int *l_757 = &l_748;
                    int *l_759 = &l_748;
                    int *l_760 = &l_678;
                    int *l_761 = (void*)0;
                    int *l_763 = (void*)0;
                    int *l_764 = &l_725;
                    int *l_765 = &g_482;
                    int *l_766 = &l_762;
                    int *l_767 = &l_748;
                    int *l_768 = &g_153.f2;
                    int *l_769 = &l_728;
                    int *l_770 = &l_728;
                    int *l_771 = &l_728;
                    int *l_772 = &g_153.f0;
                    int *l_773 = (void*)0;
                    int *l_774 = &g_28;
                    int *l_775 = (void*)0;
                    int *l_776 = &l_733;
                    int *l_777 = &l_678;
                    int *l_778 = &g_153.f0;
                    int *l_779 = (void*)0;
                    int *l_780 = (void*)0;
                    int *l_782 = &l_753;
                    int *l_783 = &l_685;
                    int *l_784 = &l_762;
                    int *l_785 = &l_725;
                    int *l_786 = &l_685;
                    int *l_787 = &l_748;
                    int *l_788 = (void*)0;
                    int *l_789 = (void*)0;
                    int *l_790 = &l_685;
                    int *l_792 = &l_710;
                    int *l_793 = &g_28;
                    int *l_794 = &g_21;
                    int *l_796 = (void*)0;
                    int *l_797 = &g_28;
                    int *l_798 = &l_725;
                    int *l_799 = &l_781;
                    int *l_801 = &l_753;
                    int *l_802 = &l_682;
                    int *l_803 = &g_153.f0;
                    int *l_804 = &l_748;
                    int *l_805 = (void*)0;
                    int *l_806 = &l_733;
                    int *l_807 = &g_21;
                    int *l_808 = &g_153.f0;
                    int *l_810 = (void*)0;
                    int *l_811 = &l_744;
                    int *l_812 = &l_800;
                    int *l_813 = (void*)0;
                    int *l_814 = &l_710;
                    int *l_815 = &l_733;
                    int *l_816 = &l_795;
                    int *l_817 = &l_743;
                    int *l_818 = &l_795;
                    int *l_819 = (void*)0;
                    int *l_820 = &l_744;
                    int *l_821 = &l_724;
                    char l_822 = 0x66L;
                    int *l_823 = &l_728;
                    int *l_824 = &l_744;
                    int *l_825 = &l_795;
                    int *l_826 = &l_744;
                    int *l_828 = &g_28;
                    g_829--;
                    (*g_596) = (*g_596);
                    return p_59;
                }
                else
                {
                    if (p_60)
                        break;
                    for (l_733 = 0; (l_733 >= 6); l_733 = safe_add_func_int8_t_s_s(l_733, 7))
                    {
                        (*g_596) = &l_753;
                    }
                    for (g_296 = 0; (g_296 == 3); ++g_296)
                    {
                        if (l_678)
                            break;
                    }
                }
            }
        }
    }
    ++g_877;
    return p_61;
}







static unsigned char func_62(char * p_63, unsigned char p_64)
{
    int *l_69 = &g_28;
    int *l_70 = &g_21;
    int *l_71 = &g_28;
    int *l_72 = &g_21;
    int *l_73 = &g_28;
    int *l_74 = &g_21;
    int *l_75 = &g_21;
    int *l_76 = &g_21;
    int *l_77 = &g_28;
    int *l_78 = (void*)0;
    int *l_79 = (void*)0;
    int *l_80 = &g_21;
    int *l_81 = &g_21;
    int *l_82 = &g_21;
    int *l_83 = &g_28;
    int l_84 = 0x19B52D9BL;
    int *l_85 = &g_28;
    int *l_86 = &g_21;
    int *l_87 = &l_84;
    int *l_88 = &g_28;
    int *l_89 = (void*)0;
    int *l_90 = &g_21;
    int *l_91 = &g_21;
    int *l_92 = &l_84;
    int *l_93 = &g_28;
    int *l_94 = &g_21;
    int *l_95 = &g_21;
    int *l_96 = &g_21;
    int *l_97 = &g_28;
    int *l_98 = &g_21;
    int l_99 = 0xFCBD0D79L;
    int *l_100 = &l_99;
    int *l_101 = &l_99;
    int *l_102 = &l_99;
    int *l_103 = &g_21;
    int *l_104 = (void*)0;
    int *l_105 = (void*)0;
    int l_106 = (-3L);
    int *l_107 = &g_21;
    int *l_108 = (void*)0;
    int *l_109 = (void*)0;
    int *l_110 = &l_106;
    int *l_111 = &l_84;
    int l_112 = (-1L);
    int l_113 = 0L;
    int *l_114 = &l_113;
    int *l_115 = &g_21;
    int *l_116 = &g_21;
    int l_117 = 0L;
    int *l_118 = &l_106;
    int *l_120 = &l_99;
    int *l_121 = &l_112;
    int *l_122 = &g_28;
    int *l_123 = &g_28;
    int *l_124 = &l_106;
    int l_125 = 0x63C96AADL;
    int *l_126 = &g_21;
    int *l_127 = &l_99;
    int *l_128 = (void*)0;
    int *l_129 = (void*)0;
    int *l_130 = &l_84;
    int *l_131 = (void*)0;
    int *l_132 = &g_21;
    int *l_133 = &l_99;
    int *l_134 = &l_117;
    int *l_135 = &l_117;
    g_136--;
    return p_64;
}







static char * func_65(char p_66, const int p_67)
{
    char *l_68 = &g_23;
    return l_68;
}







static short func_145(unsigned char p_146, const unsigned char * p_147, unsigned char * const * p_148)
{
    int *l_350 = &g_28;
    int *l_351 = &g_153.f2;
    int l_352 = (-1L);
    int *l_353 = &g_153.f2;
    int *l_354 = (void*)0;
    int *l_355 = &g_28;
    int *l_356 = (void*)0;
    int l_357 = 1L;
    int *l_358 = &l_357;
    int *l_359 = &g_28;
    int *l_360 = &l_352;
    int *l_361 = (void*)0;
    int *l_362 = &g_21;
    int *l_363 = &l_352;
    int *l_364 = &g_21;
    int *l_365 = &l_352;
    int l_366 = 0x6FE94E43L;
    int l_367 = (-1L);
    int *l_368 = (void*)0;
    int *l_369 = &g_153.f0;
    int l_370 = 0x4B737966L;
    int *l_371 = &l_367;
    int *l_372 = &l_366;
    int *l_373 = &l_352;
    int *l_374 = &g_153.f2;
    int *l_375 = &g_153.f2;
    int *l_376 = (void*)0;
    int *l_377 = (void*)0;
    int *l_378 = &g_153.f2;
    int *l_379 = &l_370;
    int l_380 = 0xF7A0FFE6L;
    int *l_381 = &l_366;
    int *l_382 = &l_357;
    int *l_383 = &g_21;
    int l_384 = 0x5E1E2EF9L;
    int *l_385 = &l_367;
    int *l_386 = &g_153.f0;
    int *l_387 = &l_370;
    int *l_388 = &l_366;
    int *l_389 = &l_380;
    int *l_390 = &l_352;
    struct S0 l_394 = {0L,0xB7E16A7FL,0xE4C292AFL,6UL};
    short l_395 = 6L;
    int * const l_404 = (void*)0;
    unsigned l_406 = 4294967292UL;
    unsigned short l_425 = 65530UL;
    short l_457 = (-3L);
    unsigned char **l_612 = (void*)0;
    unsigned char ***l_611 = &l_612;
    unsigned l_663 = 4294967289UL;
    unsigned short l_666 = 65535UL;
    g_391++;
    (*l_386) = (-8L);
    if (((*l_390) = ((*l_351) = (p_146 ^ func_149(l_394, (*l_371), l_395)))))
    {
        char l_400 = 0L;
        unsigned short *l_403 = &g_136;
        int **l_405 = &l_368;
        (*l_364) = (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(0xEBL, l_400)), (((void*)0 != &g_335) && ((safe_mod_func_uint16_t_u_u(((*l_403) = func_62(&g_296, (*p_147))), g_391)) == ((l_400 < 0xAA033F47L) && l_400)))));
        (*l_405) = l_404;
        (*l_359) ^= l_406;
    }
    else
    {
        int *l_407 = (void*)0;
        int **l_408 = &l_372;
        unsigned char *l_410 = &g_13;
        unsigned char l_413 = 0x5DL;
        struct S0 *l_420 = &l_394;
        struct S0 **l_419 = &l_420;
        l_350 = &g_4;
        (*l_408) = l_407;
        if ((((+g_21) <= func_62(&g_23, ((g_409 = (void*)0) != l_410))) ^ ((safe_add_func_int8_t_s_s((*l_358), (!l_413))) | ((**g_29) ^= (p_146 == g_119)))))
        {
            int *l_414 = &l_357;
            struct S0 * const *l_421 = (void*)0;
            short *l_422 = (void*)0;
            short *l_423 = &l_395;
            (*l_362) |= func_62(&g_296, (*l_374));
            l_414 = ((*l_408) = &g_21);
            (*l_358) = (*l_414);
            (*l_414) |= ((*l_358) = (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((**g_29), (l_419 != l_421))) < (((*l_423) = p_146) & ((((l_407 == l_414) == ((g_249 < (safe_unary_minus_func_int8_t_s(func_62(l_410, ((func_62(l_410, (*l_373)) != g_391) || l_425))))) || p_146)) || p_146) >= (*g_30)))), 0x505FL)));
        }
        else
        {
            (*l_359) = ((void*)0 != g_426);
        }
    }
    for (g_136 = 0; (g_136 != 48); g_136++)
    {
        unsigned l_430 = 0x68CEC908L;
        int l_474 = (-1L);
        int l_540 = 0x7B0CDB7FL;
        const int *l_603 = (void*)0;
        unsigned char ***l_623 = &l_612;
        unsigned char *l_639 = (void*)0;
    }
    return l_666;
}







static char func_149(struct S0 p_150, unsigned char p_151, char p_152)
{
    short l_184 = 1L;
    int l_211 = 0x8A92953CL;
    unsigned char l_251 = 0x54L;
    int l_293 = 1L;
    char *l_341 = &g_23;
    int *l_345 = &g_4;
    int **l_344 = &l_345;
    int *l_346 = &g_28;
    for (p_150.f0 = 0; (p_150.f0 == 0); p_150.f0 = safe_add_func_int8_t_s_s(p_150.f0, 7))
    {
        short l_187 = (-10L);
        unsigned l_226 = 0x04092CE2L;
        int l_312 = 0xA9BA58C6L;
        int l_314 = 0x08559244L;
        int l_323 = 0L;
        int l_325 = 0x1F6D5568L;
        for (g_28 = 0; (g_28 < (-24)); g_28 = safe_sub_func_uint32_t_u_u(g_28, 9))
        {
            int *l_163 = (void*)0;
            int **l_162 = &l_163;
            char *l_177 = &g_23;
            unsigned char *l_185 = &g_186;
            const short l_252 = 0L;
            int l_303 = 0L;
            int l_315 = 0xA40BB980L;
            (*l_162) = (void*)0;
            if ((safe_sub_func_int16_t_s_s((((void*)0 != &p_151) != p_151), (safe_mod_func_uint8_t_u_u(func_62(&g_23, (safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((*g_30), 7)), ((safe_unary_minus_func_int32_t_s((safe_add_func_int8_t_s_s((((*l_185) = (func_62(l_177, p_150.f0) && ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(0L, l_184)), l_184)), 9)) > g_153.f1))) && 0x9FL), l_187)))) || 65534UL))) & l_184), g_21))), p_150.f1)))))
            {
                char l_313 = 0x35L;
                struct S0 **l_332 = (void*)0;
                struct S0 *l_334 = (void*)0;
                struct S0 **l_333 = &l_334;
                if (p_150.f3)
                    break;
                if (func_62(&p_152, (**g_29)))
                {
                    int l_194 = 0L;
                    int *l_201 = (void*)0;
                    int *l_202 = &g_153.f0;
                    char *l_217 = (void*)0;
                    unsigned l_235 = 0UL;
                    unsigned *l_244 = &g_214;
                    char *l_247 = (void*)0;
                    char *l_248 = &g_249;
                    unsigned short *l_250 = &g_136;
                    (*l_202) = (safe_rshift_func_int8_t_s_u(((&g_29 == &g_29) | (safe_mul_func_uint16_t_u_u(((g_21 <= ((safe_sub_func_uint32_t_u_u(5UL, l_194)) ^ g_23)) | ((safe_rshift_func_int8_t_s_u((p_150.f2 && (((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((&g_30 == (void*)0) <= (-8L)) == g_153.f1), 0x9F78L)), 0x68L)) < l_194) > p_151)), 5)) == g_13)), 1L))), 1));
                    for (l_194 = 0; (l_194 == 6); l_194 = safe_add_func_int8_t_s_s(l_194, 1))
                    {
                        int *l_205 = (void*)0;
                        int *l_206 = &g_21;
                        int *l_207 = &g_153.f2;
                        int *l_208 = &g_153.f0;
                        int *l_209 = &g_153.f2;
                        int *l_210 = &g_153.f2;
                        int *l_212 = &l_211;
                        int *l_213 = &l_211;
                        unsigned short *l_227 = &g_136;
                        short *l_228 = &l_184;
                        --g_214;
                        (*l_212) ^= (((*l_202) != g_23) < func_62(l_217, ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_13, ((safe_mod_func_int16_t_s_s(((*l_228) = ((safe_mul_func_uint8_t_u_u(l_226, 0x99L)) || ((*l_227) = func_62(&g_23, (*g_30))))), g_4)) ^ (-1L)))), 10)) != p_150.f2)));
                        (*l_207) &= g_153.f1;
                    }
                    p_150.f2 = (func_62(func_65((safe_mul_func_uint16_t_u_u((&l_184 == &l_187), (safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(l_235, ((((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((*l_202), (safe_add_func_uint16_t_u_u(((*l_250) = ((((*l_244) ^= (*l_202)) < p_150.f3) > (((*l_248) = (safe_add_func_uint16_t_u_u(65533UL, (-1L)))) || (p_152 |= p_150.f3)))), g_21)))), 255UL)), p_150.f3)) > l_251) || 0x475258A0L) | g_26))), 0x3A3AL)))), l_252), l_251) < p_150.f3);
                }
                else
                {
                    for (g_21 = (-11); (g_21 > (-3)); g_21 = safe_add_func_int8_t_s_s(g_21, 1))
                    {
                        int *l_255 = &g_153.f2;
                        int *l_256 = &l_211;
                        int *l_257 = &g_153.f0;
                        int *l_258 = &l_211;
                        int *l_259 = &l_211;
                        int *l_260 = &g_153.f0;
                        int *l_261 = &g_153.f2;
                        int *l_262 = &l_211;
                        int *l_263 = &l_211;
                        int l_264 = 0x456CBE95L;
                        int *l_265 = (void*)0;
                        int *l_266 = (void*)0;
                        int *l_267 = &g_153.f2;
                        int *l_268 = &g_153.f0;
                        int *l_269 = &l_211;
                        int *l_270 = &g_153.f0;
                        int *l_271 = &g_153.f0;
                        int *l_272 = &l_264;
                        int *l_273 = &l_264;
                        int *l_274 = &g_153.f2;
                        int *l_275 = &l_211;
                        int *l_276 = &g_153.f2;
                        int *l_277 = &g_153.f0;
                        int *l_278 = &l_211;
                        int *l_279 = &l_264;
                        int *l_280 = (void*)0;
                        int *l_281 = (void*)0;
                        int *l_282 = &g_153.f2;
                        int *l_283 = &g_153.f0;
                        int *l_284 = (void*)0;
                        int *l_285 = &l_264;
                        int *l_286 = &l_264;
                        int *l_287 = &g_153.f0;
                        int *l_288 = &l_211;
                        int *l_289 = (void*)0;
                        int *l_290 = &l_211;
                        int *l_291 = &l_211;
                        int *l_292 = &l_264;
                        int *l_294 = &l_264;
                        int *l_295 = &g_153.f2;
                        int *l_297 = &l_211;
                        int *l_298 = (void*)0;
                        int *l_299 = &g_153.f2;
                        int *l_300 = &g_153.f2;
                        int *l_301 = &g_153.f0;
                        int *l_302 = &l_264;
                        int *l_304 = &l_211;
                        int *l_305 = (void*)0;
                        int *l_306 = (void*)0;
                        int *l_307 = (void*)0;
                        int *l_308 = &l_293;
                        int *l_316 = &l_312;
                        int *l_317 = &l_315;
                        int *l_318 = &l_303;
                        int *l_319 = &l_314;
                        int *l_320 = (void*)0;
                        int *l_321 = &l_303;
                        int *l_322 = &l_303;
                        int *l_324 = &l_211;
                        g_309--;
                        --g_326;
                        ++g_329;
                        (*l_162) = &l_293;
                    }
                }
                (*l_333) = &g_153;
            }
            else
            {
                unsigned l_338 = 0x5E09DB5BL;
                char *l_340 = &g_23;
                char **l_339 = &l_340;
                char **l_342 = &l_341;
                unsigned short *l_343 = &g_309;
                l_293 = (((*l_343) &= ((l_177 != (g_335 = &p_152)) | (((safe_rshift_func_uint8_t_u_s((~l_338), 4)) >= func_62(((*l_339) = (void*)0), ((*g_30) = (func_62(((*l_342) = l_341), p_150.f2) > g_186)))) | 0x65D7L))) == (-10L));
            }
        }
    }
    (*l_344) = &g_28;
    (*l_344) = &g_21;
    (*l_346) &= (*l_345);
    return p_152;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_153.f0, "g_153.f0", print_hash_value);
    transparent_crc(g_153.f1, "g_153.f1", print_hash_value);
    transparent_crc(g_153.f2, "g_153.f2", print_hash_value);
    transparent_crc(g_153.f3, "g_153.f3", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_679, "g_679", print_hash_value);
    transparent_crc(g_827, "g_827", print_hash_value);
    transparent_crc(g_829, "g_829", print_hash_value);
    transparent_crc(g_877, "g_877", print_hash_value);
    transparent_crc(g_906, "g_906", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1019, "g_1019", print_hash_value);
    transparent_crc(g_1039, "g_1039", print_hash_value);
    transparent_crc(g_1133, "g_1133", print_hash_value);
    transparent_crc(g_1196, "g_1196", print_hash_value);
    transparent_crc(g_1410, "g_1410", print_hash_value);
    transparent_crc(g_1512, "g_1512", print_hash_value);
    transparent_crc(g_1653, "g_1653", print_hash_value);
    transparent_crc(g_1675, "g_1675", print_hash_value);
    transparent_crc(g_1679, "g_1679", print_hash_value);
    transparent_crc(g_1691, "g_1691", print_hash_value);
    transparent_crc(g_1817, "g_1817", print_hash_value);
    transparent_crc(g_1833, "g_1833", print_hash_value);
    transparent_crc(g_1942, "g_1942", print_hash_value);
    transparent_crc(g_1993, "g_1993", print_hash_value);
    transparent_crc(g_2121, "g_2121", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
