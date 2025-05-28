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
   const char f0;
};


static int g_12 = 5L;
static int g_34 = (-1L);
static struct S0 g_62 = {-1L};
static struct S0 *g_73 = &g_62;
static struct S0 **g_72 = &g_73;
static int **g_83 = (void*)0;
static unsigned short g_87 = 65529UL;
static unsigned g_98 = 0UL;
static unsigned short g_100 = 0xCD18L;
static char g_126 = 0xBDL;
static char g_128 = (-4L);
static int g_141 = 0xCAD1337AL;
static unsigned char g_150 = 0xAFL;
static unsigned char g_152 = 0xD5L;
static unsigned g_165 = 4294967292UL;
static short g_172 = 0x2A76L;
static unsigned short *g_256 = &g_87;
static unsigned short **g_255 = &g_256;
static unsigned short g_286 = 0x4003L;
static int *g_299 = &g_12;
static int **g_298 = &g_299;
static int **g_313 = &g_299;
static int *g_315 = &g_12;
static unsigned short g_362 = 1UL;
static struct S0 ***g_379 = &g_72;
static struct S0 ****g_378 = &g_379;
static struct S0 *****g_377 = &g_378;
static volatile unsigned char g_394 = 255UL;
static int ***g_405 = (void*)0;
static int g_451 = 0x9C2FFAA0L;
static struct S0 g_500 = {0x16L};
static unsigned *g_516 = &g_98;
static unsigned **g_515 = &g_516;
static volatile short g_529 = 1L;
static volatile short *g_528 = &g_529;
static volatile short * const *g_527 = &g_528;
static char g_539 = 1L;
static short g_565 = 0x2E60L;
static const unsigned g_599 = 0x7611BAE3L;
static struct S0 g_661 = {0xC7L};
static int *g_662 = &g_451;
static volatile int g_672 = 0L;
static volatile short * const **g_772 = &g_527;
static volatile short * const ***g_771 = &g_772;
static const unsigned short *g_788 = &g_362;
static const unsigned short **g_787 = &g_788;
static const unsigned short *** const g_786 = &g_787;
static const unsigned short *** const *g_785 = &g_786;
static const unsigned short *** const **g_784 = &g_785;
static volatile unsigned char *g_921 = (void*)0;
static volatile unsigned char **g_920 = &g_921;
static char g_927 = (-1L);
static unsigned char *g_986 = &g_150;
static unsigned char **g_985 = &g_986;
static const struct S0 *g_1026 = &g_661;
static const struct S0 **g_1025 = &g_1026;
static unsigned short g_1045 = 4UL;
static unsigned g_1107 = 0x9C85E6DFL;
static const int g_1220 = 0x7E6ADDD5L;
static char *g_1236 = &g_128;
static char **g_1235 = &g_1236;
static char ***g_1234 = &g_1235;
static int g_1249 = 1L;
static unsigned g_1290 = 4294967291UL;
static const char **g_1450 = (void*)0;
static const char ***g_1449 = &g_1450;
static int *g_1465 = (void*)0;
static volatile unsigned g_1471 = 0xFC6958CFL;
static volatile unsigned *g_1490 = &g_1471;
static volatile unsigned **g_1489 = &g_1490;
static unsigned short ***** const *g_1497 = (void*)0;
static const int g_1581 = 0x7D1168F3L;
static struct S0 g_1601 = {0x52L};



static char func_1(void);
static int func_2(unsigned p_3, struct S0 p_4, int p_5, unsigned short p_6);
static struct S0 func_8(struct S0 p_9, short p_10);
static unsigned short func_15(unsigned char p_16, int p_17, short p_18, char p_19);
static unsigned func_22(unsigned p_23, char p_24, unsigned p_25, unsigned p_26);
static struct S0 * const func_29(unsigned p_30);
static int func_37(unsigned char p_38, unsigned char p_39, short p_40);
static unsigned short func_41(int * p_42, struct S0 p_43, unsigned char p_44, short p_45);
static struct S0 func_47(int * const p_48, int * p_49, unsigned char p_50, short p_51, unsigned short p_52);
static const short func_56(unsigned p_57, int p_58, struct S0 * p_59, int * p_60);
static char func_1(void)
{
    char l_7 = 1L;
    struct S0 l_11 = {0xF0L};
    unsigned char l_550 = 255UL;
    unsigned l_994 = 4UL;
    int *l_1002 = &g_34;
    unsigned short ***l_1007 = (void*)0;
    unsigned short ****l_1006 = &l_1007;
    unsigned short *****l_1005 = &l_1006;
    unsigned short ******l_1004 = &l_1005;
    short l_1009 = (-1L);
    struct S0 **l_1024 = &g_73;
    unsigned l_1034 = 0x4D7FCA81L;
    unsigned char l_1058 = 0xDEL;
    short **l_1076 = (void*)0;
    short ***l_1075 = &l_1076;
    short ****l_1074 = &l_1075;
    unsigned l_1146 = 0x1099A8DDL;
    unsigned l_1157 = 8UL;
    int l_1176 = 1L;
    unsigned char **l_1202 = &g_986;
    struct S0 l_1203 = {0L};
    char l_1217 = 0xE5L;
    int *l_1222 = &l_1176;
    int l_1256 = 0xF9AEDE09L;
    unsigned l_1303 = 0UL;
    char l_1316 = (-1L);
    unsigned short **l_1383 = (void*)0;
    int l_1389 = 0xE8E907BCL;
    unsigned **l_1441 = &g_516;
    int * const l_1464 = &g_34;
    char l_1494 = 0xD2L;
    unsigned char l_1496 = 0x18L;
    const unsigned l_1555 = 0x831C4883L;
    short l_1556 = 3L;
    int l_1559 = 0x25B6C1ECL;
    short l_1561 = 0x0261L;
    char l_1620 = 0xFCL;
    if (((func_2(l_7, func_8(l_11, (((*g_516) = ((g_12 != (safe_sub_func_int8_t_s_s(g_12, (0xACL > (1L != func_15(l_11.f0, l_7, (safe_mod_func_uint32_t_u_u(func_22(g_12, g_12, l_7, l_7), l_11.f0)), l_550)))))) == 0UL)) < l_550)), l_550, (**g_787)) < l_994) || 0xA68EL))
    {
        char l_1003 = 8L;
        unsigned char *l_1008 = &g_152;
        int l_1010 = 0x8D210F97L;
        int *l_1011 = &g_34;
        (*l_1002) = (((safe_mul_func_uint8_t_u_u((((*g_788) , ((safe_unary_minus_func_int32_t_s((+(l_1010 = (((*l_1008) = ((**g_985) = (((safe_rshift_func_uint8_t_u_u(((***g_786) , (safe_add_func_uint8_t_u_u(((*g_986) >= func_41(l_1002, (((****g_378) , ((l_1003 , ((l_1004 == ((255UL | (((*g_256) = (((*l_1002) , (*l_1002)) , 0xF281L)) | (*g_788))) , &g_784)) , 0UL)) ^ l_1003)) , l_11), (*l_1002), (**g_527))), (*g_986)))), 1)) == l_1003) , 0UL))) | l_1009))))) ^ l_1003)) ^ (*l_1002)), 0xE0L)) ^ 65535UL) != 0x1FE16A4AL);
        l_1011 = l_1002;
    }
    else
    {
        char l_1014 = 1L;
        short *l_1015 = &g_565;
        struct S0 l_1061 = {0x56L};
        int l_1063 = 0xB6AF84E1L;
        int l_1089 = (-2L);
        unsigned short ****l_1114 = &l_1007;
        struct S0 ****l_1123 = &g_379;
        char *l_1137 = &l_7;
        int *l_1160 = &g_12;
        short l_1179 = 4L;
        short ****l_1196 = (void*)0;
        (*g_662) = ((*g_315) | (**g_515));
        if ((safe_add_func_uint16_t_u_u((((*l_1015) = l_1014) ^ (****g_785)), (**g_787))))
        {
            int l_1018 = 0x81DD6344L;
            (*g_315) = (*l_1002);
            for (g_927 = 0; (g_927 < (-22)); g_927--)
            {
                return l_1018;
            }
            (*g_313) = &l_1018;

            ;
            for (g_100 = 0; (g_100 > 23); g_100++)
            {
                unsigned l_1021 = 0xCF165014L;
                return l_1021;


            }
        }
        else
        {
            const struct S0 ***l_1027 = &g_1025;
            unsigned char *l_1030 = &l_550;
            int l_1031 = 0x06A55D8DL;
            short l_1057 = 1L;
            short *** const l_1079 = &l_1076;
            char *l_1082 = &g_126;
            char **l_1081 = &l_1082;
            int **l_1100 = (void*)0;
            (*g_313) = (void*)0;

            ;
            if (((safe_sub_func_uint16_t_u_u(((((*g_528) && 0x7E66L) , 0x8D0DL) , (l_1024 != ((*l_1027) = g_1025))), ((safe_mul_func_uint16_t_u_u((**g_255), 1L)) && 65530UL))) >= (*l_1002)))
            {
                unsigned *l_1052 = &l_994;
                int l_1060 = 1L;
                int l_1086 = 0x58FEC338L;
                if ((safe_lshift_func_int8_t_s_s((((((*g_256) = l_1034) , ((**g_377) == (**g_377))) == (safe_rshift_func_int16_t_s_s((~((****g_378) , (((safe_rshift_func_uint8_t_u_s((((((*l_1052) = ((((*g_516) = (safe_mul_func_uint8_t_u_u(0x43L, (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(0xCBL, g_1045)), ((safe_mod_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((*l_1002), ((safe_mod_func_int8_t_s_s((g_98 | (**g_985)), g_500.f0)) & (**g_515)))) != 0x83L) == l_1014), l_1014)) == l_1031)))))) != l_1014) | g_128)) == (*l_1002)) >= 2L) | 0xB9L), 4)) , 0xEBL) == (*l_1002)))), 11))) , (-1L)), g_672)))
                {
                    (*l_1002) = (*g_315);
                }
                else
                {
                    int *l_1059 = &g_141;
                    int l_1062 = 0x43F0F68CL;
                    (*g_313) = l_1052;

                    ;
                    if (((func_2(func_15(((safe_mul_func_int8_t_s_s(0x57L, ((**g_985) = (func_22((**g_515), g_128, g_500.f0, func_2(((((*l_1059) = (safe_sub_func_int8_t_s_s((0xCC6D2BB8L != (((l_1031 < l_1057) , ((((0x81L <= (*g_986)) <= 0x7E7AL) | g_34) , &g_141)) == l_1002)), l_1058))) , l_1060) , 0xDF283C6FL), l_1061, (*g_315), (****g_785))) , 1UL)))) , (**g_985)), (**g_298), g_34, g_12), (*g_73), l_1061.f0, l_1062) >= (-10L)) | (***g_786)))
                    {
                        int *l_1064 = &g_12;
                        l_1063 = l_1061.f0;
                        (*g_298) = l_1064;

                        ;
                    }
                    else
                    {
                        short **l_1073 = &l_1015;
                        short ***l_1072 = &l_1073;
                        short ****l_1071 = &l_1072;
                        int l_1080 = 0xA00C57ACL;
                        (*g_298) = &l_1063;

                        ;
                        (*g_662) = (safe_mul_func_uint16_t_u_u(3UL, func_15((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((*l_1030) = (l_1031 = (((*l_1015) = (&g_772 == (l_1074 = l_1071))) > (safe_mul_func_int16_t_s_s((l_1062 | 0x47L), (l_1079 != &l_1076)))))), l_1014)), 13)), (*g_662), l_1080, g_126)));


                        ;
                    }



                }



                if (l_1057)
                {
                    char ***l_1083 = &l_1081;
                    (*l_1083) = l_1081;
                    return g_141;


                }
                else
                {
                    (*g_662) = l_1060;
                }
                (*g_315) = l_1089;
            }
            else
            {
                int **l_1098 = (void*)0;
                int ***l_1099 = &l_1098;
                unsigned *l_1101 = (void*)0;
                unsigned *l_1102 = &l_1034;
                unsigned short ****l_1115 = &l_1007;
                int *l_1122 = &g_34;
                (*g_662) = func_22(((*l_1102) = (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((*l_1002), (((**g_515) = func_41((*g_313), (***g_379), ((*l_1002) , ((l_1031 <= ((safe_add_func_uint8_t_u_u(((*g_986) = l_1057), g_152)) ^ (((safe_lshift_func_uint8_t_u_s((*l_1002), 5)) , ((*l_1099) = l_1098)) != l_1100))) > 246UL)), (*l_1002))) || (*l_1002)))), 0x73L))), l_1063, g_362, g_500.f0);
                if (((*g_315) = ((*g_662) = (safe_add_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_s(func_22((*g_516), (g_1107 , (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((*l_1002), ((safe_mul_func_int16_t_s_s((l_1114 == ((*l_1005) = l_1115)), (safe_sub_func_int32_t_s_s(l_1089, (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((((func_41(l_1122, (***l_1027), func_41((*g_298), (*g_1026), (**g_985), (*g_528)), l_1063) < 0x86C1F170L) , g_100) , (*l_1002)) < (-1L)) != g_172), 0UL)), (*l_1002))))))) >= 2UL))) , 252UL), (*g_986)))), g_451, (*g_516)), 1)) , l_1123) != (*g_377)) >= 0xFEL), (*g_516))))))
                {
                    struct S0 *l_1124 = &g_500;
                    (****g_377) = l_1124;

                    ;
                }
                else
                {
                    short l_1127 = 0x8D77L;
                    for (g_362 = (-27); (g_362 <= 21); g_362++)
                    {
                        (*l_1122) = 0x32670EA2L;
                        return g_599;
                    }
                    if ((!l_1127))
                    {
                        (*g_313) = l_1002;

                        ;
                    }
                    else
                    {
                        unsigned l_1128 = 1UL;
                        (*g_315) = (g_362 | ((*g_986) | l_1128));
                        (*g_313) = (*g_313);
                        (*g_298) = (*g_298);
                    }

                    ;
                    (*g_313) = &l_1031;

                    ;
                    return g_451;


                }

                ;
            }

            ;


        }

        ;


        if (((*g_315) = (safe_mul_func_int8_t_s_s((!(func_47(l_1002, &l_1089, l_1089, (***g_772), ((*l_1002) = (safe_rshift_func_int8_t_s_u((&l_1075 != (void*)0), 7)))) , l_1061.f0)), ((*l_1137) = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(g_661.f0, 1)) <= g_661.f0), g_1107)))))))
        {
            return g_672;


        }
        else
        {
            int *l_1138 = (void*)0;
            (*g_313) = l_1138;

            ;
        }


        ;
        for (g_927 = 0; (g_927 < (-4)); g_927--)
        {
            unsigned short l_1150 = 0x7C1FL;
            int *l_1158 = &g_451;
            unsigned l_1180 = 4294967295UL;
            char **l_1181 = &l_1137;
            for (l_7 = 0; (l_7 == 24); ++l_7)
            {
                int *l_1143 = &g_12;
                int *l_1144 = (void*)0;
                int *l_1145 = &l_1089;
                (*g_298) = (*g_313);
                (*g_313) = l_1143;

                ;
                (*l_1145) = (((((((*l_1002) = ((*g_315) = ((*g_662) = 0L))) , (*g_377)) == (void*)0) <= (*g_986)) , 0L) , (*g_662));
            }
        }

        ;
    }

    ;



    (*l_1002) = ((safe_add_func_int32_t_s_s(((*g_788) == (**g_255)), (*l_1002))) , ((*l_1002) ^ ((safe_mul_func_uint16_t_u_u(((*l_1002) > ((((0UL != (*l_1002)) != (*g_516)) | (l_1202 != l_1202)) | (**g_527))), (****g_785))) >= g_927)));
    (*g_313) = &l_1176;

    ;
    if (func_2((**g_515), (**l_1024), (*l_1002), ((**g_985) || ((((((**g_298) = ((*g_986) ^ ((void*)0 != (*l_1024)))) , (func_41(&l_1176, l_1203, (*g_986), (*l_1002)) <= (*l_1002))) == (**g_515)) | (*l_1002)) >= (-8L)))))
    {
        unsigned char l_1206 = 251UL;
        char l_1215 = 0L;
        short *l_1216 = &g_172;
        int l_1218 = 0xBFC6A207L;
        struct S0 l_1219 = {0x23L};
        unsigned l_1297 = 4294967295UL;
        unsigned short l_1307 = 0xAC27L;
        struct S0 **l_1333 = &g_73;
        unsigned l_1344 = 4294967287UL;
        unsigned short l_1417 = 0UL;
        int *l_1432 = &l_1218;
        unsigned l_1495 = 4294967295UL;
        if ((((safe_rshift_func_int16_t_s_s((((*l_1002) | (func_2(((func_22((*l_1002), l_1206, g_661.f0, (**g_515)) != (((*g_662) = ((*g_299) = (safe_lshift_func_int8_t_s_s(func_2(((l_1218 = func_22((((*l_1002) && (safe_mod_func_uint32_t_u_u(((l_1217 = (safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((((*l_1216) = ((((((*g_378) = (**g_377)) == &l_1024) == l_1215) >= (*l_1002)) && 1UL)) , (*l_1002)), 0x42EEA824L)), (****g_771)))) > g_165), (-5L)))) && 0x42L), g_565, (*l_1002), l_1215)) , l_1206), l_1219, (*l_1002), (*l_1002)), g_1045)))) == 4294967293UL)) != 0UL), (**g_1025), l_1215, l_1215) , l_1215)) <= (*l_1002)), l_1206)) | g_1220) < 65526UL))
        {
            int *l_1221 = &g_12;
            int l_1257 = 0x8AAC58A6L;
            int * const l_1317 = &l_1176;
            char ***l_1340 = &g_1235;
            (*g_662) = (((void*)0 == &g_927) <= (*l_1002));
            l_1222 = l_1221;

            ;
            (*g_313) = &l_1218;

            ;
            for (l_1217 = 0; (l_1217 < 16); l_1217 = safe_add_func_int8_t_s_s(l_1217, 4))
            {
                int l_1229 = 0x28906F51L;
                const unsigned l_1243 = 0x3563D14AL;
                unsigned char l_1247 = 1UL;
                unsigned short l_1268 = 5UL;
                int l_1304 = 0xF087288EL;
                unsigned char l_1309 = 249UL;
                unsigned short l_1328 = 0x86BCL;
                struct S0 **l_1331 = &g_73;
                char l_1334 = (-1L);
            }
        }
        else
        {
            unsigned l_1379 = 4294967291UL;
            int *l_1388 = &g_1249;
            int l_1404 = 0x96B097C2L;
            char l_1416 = 1L;
            struct S0 l_1421 = {0xAEL};
            unsigned l_1446 = 7UL;
            char ***l_1452 = (void*)0;
            int *l_1463 = &l_1404;
            unsigned *l_1470 = &l_1146;
            unsigned short *****l_1518 = &l_1006;
            if ((*g_662))
            {
                short l_1359 = 0x0DC5L;
                const unsigned short *l_1380 = (void*)0;
                int l_1382 = 0xD3968134L;
                unsigned char ***l_1395 = &g_985;
                unsigned char ****l_1394 = &l_1395;
                int l_1406 = 7L;
                unsigned l_1415 = 0x5576B703L;
                (*g_662) = (func_15(l_1359, (*g_662), (***g_772), ((l_1215 & ((-8L) ^ 0x456DL)) || 0x0596BF15L)) | l_1359);


                if (func_41(&l_1218, (***g_379), (*g_986), (safe_unary_minus_func_uint16_t_u((*l_1002)))))
                {
                    short l_1361 = 0x42D4L;
                    unsigned char *l_1362 = (void*)0;
                    unsigned char *l_1363 = &l_1058;
                    unsigned *l_1366 = &l_1157;
                    unsigned char *l_1381 = &l_1206;
                    if ((((*g_1236) | (((*l_1363) = (l_1361 < ((**g_985) = (*g_986)))) | (l_1382 = ((*l_1381) = (((func_2((l_1361 == ((*g_315) && 0xD40C6242L)), (**l_1333), (*g_315), (**g_787)) ^ 0x646BEC74L) != 4L) , 0x0CL))))) || 0UL))
                    {
                        (*l_1222) = l_1379;
                    }
                    else
                    {
                        (*g_313) = l_1366;

                        ;
                        (*g_662) = l_1307;
                    }


                }
                else
                {
                    unsigned char *** const *l_1396 = &l_1395;
                    const int l_1403 = 1L;
                    unsigned *l_1405 = (void*)0;
                    int l_1411 = 0L;
                    int *l_1414 = &l_1218;
                    if ((((*g_1236) ^ (*g_986)) , 0x3094A447L))
                    {
                        int **l_1407 = &g_662;
                        int *l_1408 = &l_1176;
                        (*l_1407) = ((*g_313) = ((**g_515) , &l_1218));

                        ;
                        ;
                        (*l_1407) = l_1408;

                        ;
                        (**l_1407) = (*g_315);
                    }
                    else
                    {
                        g_662 = (g_315 = ((*g_298) = &l_1176));

                        ;
                        ;
                        ;
                        l_1404 = ((((**g_515) = (*l_1002)) <= 4294967293UL) , (**g_298));
                        (*g_313) = &l_1218;

                        ;
                    }

                    ;
                    ;
                    ;
                    (*g_298) = ((((**g_1235) = func_2((l_1379 & (*l_1222)), func_47((*g_313), (*g_313), (l_1411 = ((**g_985) = (safe_mod_func_int8_t_s_s(0L, (***g_1234))))), (safe_sub_func_int8_t_s_s(((&l_1218 == (g_315 = l_1414)) , (2L & 0x786DCAE3L)), l_1415)), l_1416), l_1417, (*****g_784))) & l_7) , &l_1382);


                    ;
                    ;
                    (*g_298) = (*g_313);
                }


                ;
                ;
            }
            else
            {
                short l_1418 = 0xC958L;
                short l_1428 = 0x7B1CL;
                int *l_1431 = &g_34;
                const char ****l_1451 = &g_1449;
                char ****l_1453 = (void*)0;
                char ****l_1454 = &g_1234;
                unsigned *l_1457 = &l_994;
                int l_1458 = 6L;
                unsigned *l_1459 = (void*)0;
                unsigned *l_1460 = &l_1157;
                if (l_1418)
                {
                    char l_1429 = 0x89L;
                    int l_1445 = 0x8961428CL;
                    if ((0UL & ((****g_785) , func_2((safe_lshift_func_int8_t_s_s((l_1421 , ((**g_515) , func_37((*g_986), l_1418, (+0x6C69L)))), (safe_add_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(l_1428, l_1418)), 0x34022CF8L)) && (**g_985)) ^ 0x8EL), 0UL)))), (**l_1333), (*g_662), l_1429))))
                    {
                        int *l_1430 = &l_1389;
                        (*g_313) = (void*)0;

                        ;
                        (*g_313) = l_1430;

                        ;
                    }
                    else
                    {
                        unsigned *l_1436 = (void*)0;
                        unsigned **l_1435 = &l_1436;
                        unsigned ***l_1442 = &l_1441;
                        unsigned ***l_1443 = (void*)0;
                        unsigned ***l_1444 = &g_515;
                        l_1432 = l_1431;

                        ;
                        l_1445 = ((((**g_985) = (*l_1432)) && (safe_sub_func_uint32_t_u_u((l_1432 == ((*l_1435) = (void*)0)), (((*l_1432) = (safe_mod_func_uint16_t_u_u((*l_1432), (safe_rshift_func_uint8_t_u_u((((*l_1444) = ((*l_1442) = l_1441)) == &g_516), ((*l_1002) >= 0xC62FA846L)))))) , (*g_315))))) >= (****g_771));
                    }

                    ;
                    ;
                    return l_1446;


                }
                else
                {
                    (*g_315) = (((**g_1234) = (*g_1235)) == ((((**g_985) <= (*g_986)) <= ((void*)0 != &l_1333)) , &l_1416));
                }
                (*g_1025) = (*g_1025);
            }


            ;
            ;
            if (((*g_315) != (((**g_255) = (safe_mul_func_uint16_t_u_u((func_41(l_1463, func_47(l_1464, g_1465, (*g_986), ((*g_516) >= (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((((((*l_1464) ^ (g_1290 = ((*l_1470) = ((*g_528) <= func_41(((*g_298) = &l_1218), (*****g_377), (**g_985), g_98))))) && (*g_256)) , (*l_1222)) || (*l_1002)), 5)), 8))), (*l_1432)), (*g_986), (*l_1432)) && 247UL), (*l_1432)))) ^ g_565)))
            {
                struct S0 *l_1484 = &l_1421;
                int l_1485 = 1L;
                (**g_298) = g_1471;
                (*g_662) = ((((*l_1432) = ((*l_1432) || (safe_rshift_func_int16_t_s_s((((*g_73) , (safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(((l_1485 = ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((*g_256), (4294967294UL & (*l_1432)))), 0)) == l_1485)) <= (*l_1463)), (*g_528))) || 4294967291UL), g_599))) == (*g_299)), g_150)))) || (*l_1463)) | (*l_1002));
                return l_1485;




            }
            else
            {
                int *l_1486 = (void*)0;
                l_1486 = (*g_313);

                ;
                if ((0x2A77085DL < (safe_rshift_func_uint16_t_u_u((****g_785), ((*l_1463) , ((func_37((**g_985), (*l_1222), ((*l_1463) && (-5L))) , g_1489) == (void*)0))))))
                {
                    unsigned char l_1493 = 0x6CL;
                    unsigned short ***** const **l_1498 = &g_1497;
                    (*g_662) = (*l_1432);
                    (*g_313) = (*g_313);
                    (*g_299) = (((*l_1432) > ((*l_1216) = l_1495)) != l_1496);
                    (*g_299) = (((&g_784 == ((*l_1498) = g_1497)) == (((~(**g_985)) < ((*g_771) == (((*l_1216) = (*l_1432)) , (*g_771)))) >= (safe_lshift_func_uint16_t_u_u((((*g_256) = (***g_786)) | (*l_1486)), ((*l_1002) | (*g_1236)))))) , (*l_1486));
                }
                else
                {
                    unsigned char l_1501 = 0x15L;
                    (*l_1464) = l_1501;
                    (*g_299) = (+0x1103AC6FL);
                    for (l_550 = 0; (l_550 < 14); l_550 = safe_add_func_uint8_t_u_u(l_550, 9))
                    {
                        const unsigned char l_1504 = 0xEEL;
                        (*g_315) = l_1504;
                    }
                    l_1463 = ((*g_313) = &l_1389);

                    ;
                    ;
                }

                ;
                ;
            }


            ;
            ;
            for (l_1496 = 0; (l_1496 >= 22); ++l_1496)
            {
                const unsigned char l_1509 = 253UL;
                (*l_1432) = (*g_315);
                (*g_298) = ((safe_sub_func_int16_t_s_s(0x94B9L, (l_1509 == (*l_1432)))) , (*g_313));
                for (l_1389 = 0; (l_1389 == 19); l_1389++)
                {
                    unsigned short l_1514 = 65535UL;
                    int l_1515 = 0xC6E9FDD4L;
                    char ****l_1523 = &l_1452;
                    unsigned short l_1526 = 65528UL;
                    (*l_1002) = (safe_lshift_func_int16_t_s_u(((*g_516) == (l_1514 = (*l_1463))), (l_1509 != l_1515)));
                    (*l_1464) = (*l_1463);
                }
            }
        }

        ;
        ;
        ;
        ;
    }
    else
    {
        int *l_1527 = (void*)0;
        struct S0 l_1530 = {4L};
        struct S0 l_1531 = {-9L};
        int l_1538 = (-1L);
        int l_1566 = (-7L);
        unsigned l_1593 = 2UL;
        unsigned short l_1594 = 0UL;
        (*g_298) = l_1527;

        ;
        (*g_662) = (*l_1222);
        if (((func_2((*g_516), ((safe_mod_func_uint8_t_u_u((*g_986), func_41(&l_1389, l_1530, (**g_985), (*l_1002)))) , l_1531), (safe_mul_func_int16_t_s_s((+(safe_sub_func_uint8_t_u_u(((*l_1464) , 0x58L), l_1531.f0))), 0L)), (**g_255)) >= 0UL) != (**g_515)))
        {
            unsigned l_1543 = 4294967295UL;
            unsigned short *l_1544 = (void*)0;
            int *l_1568 = &g_34;
            int l_1595 = 8L;
            (*l_1464) = ((safe_sub_func_uint32_t_u_u(((**g_515) = l_1543), (l_1544 == l_1544))) == (*l_1002));
            (*g_298) = &l_1389;

            ;
            if ((safe_lshift_func_uint16_t_u_u(((void*)0 == &g_298), (((((*l_1464) <= (safe_sub_func_uint16_t_u_u(((((((func_8((****g_378), ((**g_1489) , ((((l_1543 , (safe_mod_func_int8_t_s_s(((((safe_mod_func_int8_t_s_s((l_1543 < (((safe_rshift_func_int8_t_s_s((0x4C082A59L != ((((&l_1256 == &l_1256) , l_1543) & l_1543) == (*l_1222))), 5)) == l_1543) >= (**g_298))), l_1538)) , 0xF9EE054CL) <= (*l_1222)) , l_1555), l_1530.f0))) , 0x0BL) >= 0x01L) || 3UL))) , 0x09A07C03L) < 0xA0DD772AL) , 1L) , 0x7ADBB6D7L) & (*g_516)) & (*l_1464)), (**g_255)))) , l_1543) != 1UL) == (-7L)))))
            {
                int l_1560 = 0x05A09DA6L;
                const unsigned char **l_1564 = (void*)0;
                const unsigned char ***l_1563 = &l_1564;
                const unsigned char ****l_1562 = &l_1563;
                const unsigned char *****l_1565 = &l_1562;
                int *l_1567 = &l_1256;
                int *l_1578 = &l_1559;
                unsigned l_1592 = 0UL;
                (*l_1222) = (l_1543 , (((*g_315) , (*l_1002)) != 0xAAL));
                (*l_1002) = ((**g_1235) ^ l_1556);
                (*g_313) = (*g_298);
                if (((((*l_1567) = (safe_sub_func_int8_t_s_s(((*g_1236) = l_1561), (l_1566 = ((((*l_1565) = l_1562) == (void*)0) != (*g_516)))))) , l_1543) , (*l_1464)))
                {
                    struct S0 l_1573 = {-5L};
                    l_1222 = l_1568;

                    ;
                    (*g_298) = &l_1176;

                    ;
                    (**g_298) = (safe_lshift_func_uint16_t_u_u((0x3FD6L || (((((safe_add_func_uint8_t_u_u((*l_1568), ((**g_255) , (*l_1568)))) == (((**g_377) = (**g_377)) != (l_1573 , &l_1024))) < (safe_rshift_func_int8_t_s_u(0x8FL, 7))) , (l_1560 , (*g_516))) ^ (*l_1568))), 0));
                    for (l_1538 = 27; (l_1538 != 25); --l_1538)
                    {
                        l_1578 = &l_1538;

                        ;
                    }

                    ;
                }
                else
                {
                    short l_1582 = (-2L);
                    int **l_1589 = &l_1568;
                    if ((safe_sub_func_uint8_t_u_u((!0x2BL), (*l_1002))))
                    {
                        (*g_72) = (**g_379);
                        (*l_1568) = (0xA202L < (((**g_515) = (*l_1568)) > g_1581));
                        return l_1582;


                    }
                    else
                    {
                        int *l_1583 = &l_1389;
                        (*g_298) = &l_1538;

                        ;
                        l_1583 = (*g_298);

                        ;
                        (**g_298) = ((*g_986) != ((void*)0 != (**g_771)));
                    }

                    ;
                    (**g_298) = ((**g_515) & (safe_add_func_int32_t_s_s(func_37(((*g_986) = (**g_985)), (safe_unary_minus_func_uint32_t_u(((((0L > ((*l_1222) = (func_47((*g_313), ((*l_1589) = &l_1176), ((9UL & (*g_516)) >= ((safe_lshift_func_int8_t_s_s((l_1543 , func_37(((l_1592 , (**g_515)) > l_1593), l_1594, (**g_527))), 2)) ^ (*l_1578))), g_62.f0, (**g_787)) , (*l_1578)))) , (*l_1568)) ^ 0UL) == l_1595))), g_12), (-3L))));


                    ;
                }

                ;
                ;
                ;
                ;
            }
            else
            {
                struct S0 *l_1600 = &g_1601;
                int l_1602 = 5L;
                (**g_313) = (l_1602 = ((safe_lshift_func_uint16_t_u_s(0xA2ECL, 7)) , (((*****g_377) , ((*g_1236) ^ (*l_1464))) > (**g_985))));
            }

            ;
            ;
            ;
            return (***g_1234);


        }
        else
        {
            int * const l_1605 = &g_451;
            int l_1606 = 0xCC85EAD0L;
            l_1527 = (void*)0;
            (*l_1002) = (*g_662);
            if (((*****g_784) > (func_41((*g_298), func_8((**g_72), (safe_add_func_int8_t_s_s(0x15L, ((func_47(l_1605, &l_1389, (l_1530.f0 , (*g_986)), (***g_772), (*l_1222)) , 4294967293UL) , (*l_1605))))), (*g_986), l_1606) | (**g_515))))
            {
                struct S0 *l_1607 = &g_1601;
                (*g_1025) = l_1607;

                ;
            }
            else
            {
                unsigned char l_1619 = 0x8FL;
                (*g_662) = (((void*)0 == &l_1606) & ((**g_515) = (*l_1605)));
                for (l_1494 = (-10); (l_1494 != (-3)); ++l_1494)
                {
                    unsigned l_1616 = 1UL;
                    if (l_1616)
                    {
                        int *l_1617 = &l_1538;
                        (*g_313) = &l_1538;

                        ;
                        l_1617 = (*g_313);
                        (*g_1025) = (*g_1025);
                    }
                    else
                    {
                        int **l_1618 = (void*)0;
                        g_662 = ((*g_298) = &l_1606);

                        ;
                        ;
                        (*g_313) = (*g_298);
                        (*g_313) = &l_1389;

                        ;
                    }

                    ;
                    ;
                    return (***g_1234);



                }
                (*l_1605) = func_41(((*g_298) = (void*)0), (*g_1026), ((*****g_377) , (**g_985)), (0x2310L < l_1619));
            }


            ;
        }


        ;
    }



    ;
    ;
    ;
    return l_1620;



}







static int func_2(unsigned p_3, struct S0 p_4, int p_5, unsigned short p_6)
{
    char l_893 = 0xCFL;
    struct S0 *l_894 = &g_62;
    int l_896 = 0x1AED1250L;
    unsigned short **l_940 = &g_256;
    unsigned short **l_942 = &g_256;
    int *l_957 = &l_896;
    for (p_6 = 0; (p_6 <= 43); p_6 = safe_add_func_uint8_t_u_u(p_6, 1))
    {
        unsigned char l_883 = 253UL;
        int l_890 = (-4L);
        short *l_895 = &g_172;
        int l_915 = (-1L);
        unsigned short **l_941 = (void*)0;
        unsigned char **l_988 = (void*)0;
        int *l_993 = &l_915;
        l_890 = ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(0x47C2L, (l_883 , ((!((safe_sub_func_int8_t_s_s(((**g_515) , 0x74L), g_672)) > ((safe_mod_func_uint32_t_u_u((l_883 , ((((safe_mul_func_int16_t_s_s(0xB43BL, l_883)) & (p_6 || (****g_785))) , p_4.f0) , (*g_516))), 0x03956E22L)) != p_4.f0))) , 0x918DL)))), 0xAFL)), 3)) || p_3);
        if (p_6)
            break;
        (*g_662) = (func_22((safe_rshift_func_uint8_t_u_s(((**g_787) >= ((*g_516) < 0x8A01531BL)), 4)), l_890, ((l_896 = (((*g_662) = (3L && l_893)) && ((((*l_895) = (l_883 <= ((-2L) | ((l_894 != (*g_72)) <= 2UL)))) || 5L) <= 0x371AE5C2L))) > (***g_772)), l_893) == l_893);
    }
    return (*g_315);
}







static struct S0 func_8(struct S0 p_9, short p_10)
{
    unsigned l_864 = 0x7327ABF5L;
    short *l_865 = &g_172;
    struct S0 **l_872 = &g_73;
    struct S0 *****l_873 = &g_378;
    char *l_874 = &g_128;
    l_864 = 0x9B275B76L;
    (*g_315) = ((*g_662) = (g_100 | (((*l_865) = 0xC5F7L) , (safe_mod_func_uint16_t_u_u((*g_788), (safe_add_func_uint16_t_u_u(((+((((safe_mod_func_int8_t_s_s(((*l_874) = ((((l_872 == (***g_377)) , &g_378) != (l_864 , l_873)) ^ l_864)), 0xF7L)) != 0xA4439EECL) | 1L) || 65535UL)) , l_864), p_10)))))));
    return (*****l_873);
}







static unsigned short func_15(unsigned char p_16, int p_17, short p_18, char p_19)
{
    int l_553 = 1L;
    int l_562 = 0x14BA9D99L;
    struct S0 *l_572 = &g_500;
    const unsigned short *l_645 = &g_286;
    const unsigned short **l_644 = &l_645;
    const unsigned short ***l_643 = &l_644;
    const unsigned short ****l_642 = &l_643;
    short l_700 = 0x93B8L;
    int *l_735 = &l_562;
    int l_783 = 0x8C890953L;
    unsigned **l_841 = &g_516;
    unsigned short ***l_859 = &g_255;
    unsigned short ****l_858 = &l_859;
    unsigned short *****l_857 = &l_858;
    struct S0 *****l_860 = (void*)0;
    for (g_539 = (-28); (g_539 == 23); g_539++)
    {
        unsigned char l_554 = 255UL;
        int *l_557 = &g_451;
        short *l_558 = &g_172;
        struct S0 l_561 = {0xA4L};
        short *l_563 = (void*)0;
        int l_564 = (-10L);
        int *l_566 = &g_141;
        struct S0 ****l_665 = &g_379;
        unsigned **l_734 = &g_516;
        unsigned char *l_755 = &l_554;
        unsigned char **l_754 = &l_755;
        unsigned l_775 = 0xBC6094B7L;
        unsigned l_776 = 0xB760AEEFL;
    }
    for (l_562 = (-24); (l_562 == 0); ++l_562)
    {
        int l_803 = 8L;
        p_17 = (func_37((safe_rshift_func_uint16_t_u_s((***g_786), ((safe_rshift_func_int8_t_s_s(((0x855FL || ((((func_37(l_803, func_37((l_803 && ((void*)0 != (*g_515))), g_286, (+((safe_sub_func_int32_t_s_s(6L, func_41((*g_298), (*g_73), l_803, p_16))) , (*l_735)))), (*l_735)) && 0xF396L) , (*g_784)) == (*g_784)) == p_18)) , p_18), l_803)) < g_126))), p_19, (***g_772)) , 0xCDCF11DCL);
        for (g_100 = 0; (g_100 != 8); g_100 = safe_add_func_int32_t_s_s(g_100, 3))
        {
            unsigned char *l_810 = &g_152;
            unsigned *l_811 = &g_165;
            (*g_662) = func_22(p_17, (safe_mul_func_int8_t_s_s(g_362, (-3L))), ((*l_811) = (((*l_810) = ((g_100 , ((**g_255) >= (((*l_572) , ((g_34 , ((p_19 & ((l_803 , 0L) >= g_12)) <= g_141)) | (*l_735))) , l_803))) <= 255UL)) != p_16)), (**g_515));
        }
    }
    if ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(1L, 1)), ((*g_256) = (((*g_516) = p_19) , (p_19 , (***g_786)))))), (*g_315))), 15)))
    {
        char *l_822 = (void*)0;
        char *l_823 = &g_128;
        int l_840 = 8L;
        short *l_842 = &g_172;
        int l_843 = 0L;
        int *l_844 = &l_562;
        (*g_662) = (safe_lshift_func_int8_t_s_s(((*l_823) = 0L), (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((*l_842) = (((safe_mul_func_int8_t_s_s(0x18L, (p_19 & (l_840 = func_37((*l_735), (p_16 = ((((safe_mul_func_uint8_t_u_u((p_17 >= (safe_rshift_func_uint8_t_u_s(((((**g_527) && func_37((safe_add_func_uint8_t_u_u(0xA7L, (*l_735))), g_672, p_17)) < g_98) >= (*l_735)), 1))), 0x15L)) & 1UL) , g_172) , p_16)), g_565))))) , l_841) == l_841)) >= l_843), 4)), (-4L))), (*l_735))), (**g_255)))));
        (*g_298) = l_844;

        ;
    }
    else
    {
        short l_851 = 0x6753L;
        unsigned short ***l_856 = &g_255;
        unsigned short ****l_855 = &l_856;
        unsigned short *****l_854 = &l_855;
        struct S0 *l_861 = (void*)0;
        int *l_862 = &g_12;
        unsigned short l_863 = 0UL;
        p_17 = ((((safe_rshift_func_uint8_t_u_u((g_394 , (safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(l_851, (*l_735))) <= (****g_785)), l_863))), 4)) && p_16) == (****g_785)) , p_18);
    }


    return p_17;


}







static unsigned func_22(unsigned p_23, char p_24, unsigned p_25, unsigned p_26)
{
    unsigned short l_549 = 8UL;
    for (p_23 = (-5); (p_23 <= 18); p_23++)
    {
        unsigned char l_31 = 249UL;
        struct S0 **l_545 = &g_73;
    }
    return l_549;
}







static struct S0 * const func_29(unsigned p_30)
{
    int *l_32 = (void*)0;
    int *l_33 = &g_34;
    unsigned l_130 = 0UL;
    char l_344 = 0L;
    unsigned short **l_365 = &g_256;
    unsigned l_367 = 0x6B8FFD3DL;
    const unsigned short l_368 = 1UL;
    struct S0 l_382 = {-1L};
    unsigned short ***l_414 = (void*)0;
    unsigned *l_440 = &g_98;
    const short *l_457 = (void*)0;
    short l_469 = 0xFED8L;
    short l_498 = (-9L);
    unsigned char **l_519 = (void*)0;
    short *l_534 = &g_172;
    short **l_533 = &l_534;
    short ***l_532 = &l_533;
    char *l_542 = &g_128;
    char *l_543 = &l_344;
    unsigned l_544 = 0xE6C88EC1L;
    (*l_33) = 0x6FF18EE8L;
    if ((safe_rshift_func_int8_t_s_u(0x9EL, 3)))
    {
        const unsigned char l_46 = 251UL;
        int * const l_53 = &g_34;
        struct S0 *l_61 = &g_62;
        const int *l_347 = (void*)0;
        const int **l_346 = &l_347;
        const int ***l_345 = &l_346;
        short *l_348 = &g_172;
        struct S0 ***l_352 = &g_72;
        int l_355 = (-6L);
        unsigned char l_381 = 0xDDL;
        struct S0 l_385 = {1L};
        int l_400 = 0xB0985CDAL;
        char * const l_410 = &g_126;
        unsigned short l_421 = 0xDA9DL;
        l_344 = func_37(p_30, (0xB8L >= (func_41(l_32, ((l_46 >= p_30) , func_47(l_53, l_33, p_30, (safe_sub_func_int16_t_s_s(func_56(g_34, g_12, l_61, &g_34), p_30)), p_30)), l_130, p_30) && p_30)), p_30);


        if (((**g_72) , p_30))
        {
            short l_351 = (-5L);
            struct S0 ****l_353 = &l_352;
            struct S0 l_354 = {0x1EL};
            struct S0 *****l_358 = &l_353;
            struct S0 l_359 = {1L};
            int *l_366 = &l_355;
            unsigned l_371 = 0x39F2672DL;
            char *l_411 = &l_344;
            int l_413 = (-7L);
            l_355 = (0xF9A6L | (safe_mul_func_uint8_t_u_u((l_351 , (((((*l_33) = ((((*l_353) = l_352) != (void*)0) <= (((p_30 > p_30) , ((0x50C7L && g_165) , func_41(l_33, l_354, l_351, g_141))) & l_354.f0))) < p_30) > (**g_313)) | 0x9FL)), 6L)));
            (*l_53) = p_30;
            (*l_33) = ((p_30 , l_367) ^ 0x39L);
            if ((&g_128 != &l_344))
            {
                int l_376 = 0xABD0178EL;
                if (l_368)
                {
                    (*l_53) = 0xAF278419L;
                }
                else
                {
                    int * const l_380 = (void*)0;
                    char *l_386 = &g_126;
                    for (p_30 = 0; (p_30 != 18); p_30 = safe_add_func_uint32_t_u_u(p_30, 2))
                    {
                        unsigned char *l_374 = &g_152;
                        int l_375 = (-1L);
                        (*l_53) = l_371;
                        l_376 = ((p_30 > ((*l_348) = (p_30 == ((g_362 && (((*l_374) = (safe_rshift_func_int8_t_s_u(0L, (((*l_366) = (((void*)0 == &l_346) >= p_30)) <= p_30)))) == 0UL)) == l_375)))) < p_30);
                        (*l_33) = (g_377 == (l_382 , (void*)0));
                        (*l_366) = (g_362 , p_30);
                    }
                    (*l_366) = (safe_sub_func_int8_t_s_s(((*l_386) = func_41(((*g_298) = &l_376), l_385, p_30, func_41(&l_355, l_382, g_126, p_30))), g_150));

                    ;
                    return (****l_358);



                }
                (*l_366) = (*l_366);
            }
            else
            {
                int *l_389 = (void*)0;
                for (l_351 = 0; (l_351 > 8); l_351 = safe_add_func_uint16_t_u_u(l_351, 8))
                {
                    int l_395 = 0L;
                    (*g_313) = (void*)0;

                    ;
                    if (p_30)
                        break;
                    (**l_345) = ((*g_298) = l_389);
                    (*l_33) = (g_286 < (safe_add_func_uint16_t_u_u((((((*g_256) , 1UL) ^ (((safe_mul_func_uint16_t_u_u((g_87 , g_394), ((*l_348) = (l_395 , p_30)))) || (safe_add_func_uint8_t_u_u(p_30, (safe_add_func_int8_t_s_s((*l_33), 0xA1L))))) , p_30)) < (*l_53)) & l_400), 5L)));
                }


                for (l_371 = 0; (l_371 == 10); l_371 = safe_add_func_int8_t_s_s(l_371, 5))
                {
                    if (p_30)
                        break;
                }
                if ((((safe_lshift_func_int16_t_s_s(p_30, 3)) | ((g_405 = (void*)0) != (void*)0)) ^ (+p_30)))
                {
                    (*l_366) = p_30;
                    (*l_33) = p_30;
                }
                else
                {
                    const char *l_412 = &g_128;
                    struct S0 ****l_417 = &g_379;
                    int l_433 = 0x2658273AL;
                    char l_434 = 1L;
                    if ((((safe_sub_func_uint16_t_u_u((**g_255), ((!(safe_lshift_func_int16_t_s_s(((*l_366) , func_41(l_389, (***l_352), (((void*)0 == l_410) & (((l_411 == l_412) == p_30) , g_150)), g_98)), 1))) > 0x42L))) <= (*l_366)) | (*l_53)))
                    {
                        unsigned short ****l_415 = (void*)0;
                        unsigned short ****l_416 = &l_414;
                        int l_420 = 7L;
                        struct S0 *l_432 = &l_354;
                        l_413 = (~((*l_33) = ((*l_366) = (*l_366))));
                        (*l_53) = 0xE18AEF84L;
                        (*l_366) = ((((((*l_416) = l_414) != &g_255) , (*g_377)) == l_417) ^ (safe_mul_func_uint16_t_u_u(l_420, ((p_30 != 0xD1L) , (-1L)))));
                        (*l_53) = l_433;
                    }
                    else
                    {
                        (*l_53) = (g_34 <= l_434);
                        (*l_33) = 3L;
                    }
                }
            }


        }
        else
        {
            (*l_53) = (*g_315);
            (*l_53) = p_30;
            (*g_298) = (*g_313);
        }


        for (g_172 = 0; (g_172 <= 29); g_172 = safe_add_func_int8_t_s_s(g_172, 2))
        {
            int *l_437 = &g_34;
            l_437 = l_33;
        }
    }
    else
    {
        unsigned *l_438 = &g_98;
        unsigned **l_439 = (void*)0;
        short *l_441 = &g_172;
        int *l_450 = &g_451;
        struct S0 * const l_468 = &l_382;
        (*l_450) = ((*l_33) = ((((g_286 , ((l_440 = l_438) == l_438)) || g_150) == ((void*)0 != l_441)) , (safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((0x491FL == (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_30, 3)), (!((**g_298) || g_12))))) || p_30), g_98)) , (**g_255)), 0xE4B6L))));
        for (g_98 = (-21); (g_98 == 53); g_98++)
        {
            unsigned l_460 = 7UL;
            struct S0 l_463 = {6L};
            int *l_472 = (void*)0;
            struct S0 l_473 = {0x88L};
            unsigned char l_475 = 0xE8L;
            unsigned char l_491 = 9UL;
            struct S0 *l_499 = &g_500;
            struct S0 ****l_510 = (void*)0;
            for (g_126 = 0; (g_126 != 11); ++g_126)
            {
                unsigned l_456 = 0x5736D977L;
                const short **l_458 = (void*)0;
                const short **l_459 = &l_457;
                int *l_466 = (void*)0;
                struct S0 *l_501 = &l_382;
                unsigned **l_514 = &l_440;
            }
            for (g_172 = 17; (g_172 == 7); --g_172)
            {
                int *l_526 = &g_34;
                (*l_450) = (safe_mod_func_uint16_t_u_u(65535UL, (*l_450)));
                (*l_526) = (safe_sub_func_int32_t_s_s(func_41(l_526, (*l_499), g_152, p_30), 4294967295UL));
                return (****g_377);


            }
        }
    }



    (*l_33) = (6L ^ (safe_mod_func_uint32_t_u_u((p_30 >= ((**l_533) = ((((g_100 = ((&g_527 == l_532) , (g_362 = ((*g_256) = (**g_255))))) | (safe_rshift_func_int16_t_s_s((g_141 && ((*l_543) = ((*l_542) = ((safe_sub_func_uint8_t_u_u((g_539 <= 0xA7L), (+(safe_lshift_func_int8_t_s_s(p_30, (*l_33)))))) | 0x1FB111B9L)))), 14))) , l_544) , 0x8A3FL))), 0x099A9A05L)));
    (*g_313) = (*g_313);
    return (***g_378);


}







static int func_37(unsigned char p_38, unsigned char p_39, short p_40)
{
    unsigned short l_317 = 0x59DBL;
    int *l_322 = &g_34;
    short *l_324 = (void*)0;
    short *l_325 = (void*)0;
    short *l_326 = &g_172;
    unsigned short *l_329 = &g_286;
    int l_330 = (-3L);
    int *l_339 = &l_330;
    struct S0 *l_341 = &g_62;
    l_317 = 0x95909B31L;
    if ((safe_sub_func_int32_t_s_s(((*l_322) = (safe_sub_func_uint8_t_u_u(0x64L, p_39))), ((g_152 && ((p_40 != (safe_unary_minus_func_uint32_t_u((((*l_326) = ((*g_256) >= p_39)) == ((*g_256) == (l_330 = (!(((safe_mul_func_uint16_t_u_u(((*l_329) = (((l_317 , 1L) == 1L) <= 0xB9247CF0L)), p_40)) > (**g_255)) , p_38)))))))) >= g_141)) | g_62.f0))))
    {
        int *l_340 = &g_12;
        int *l_342 = &l_330;
        (*l_322) = ((g_286 , ((0x3C7E615FL & (**g_298)) == (safe_add_func_int32_t_s_s((p_39 , (*g_299)), p_39)))) != 255UL);
        (*l_322) = (*l_342);
    }
    else
    {
        unsigned l_343 = 0UL;
        l_343 = (p_38 | p_39);
    }
    return p_40;
}







static unsigned short func_41(int * p_42, struct S0 p_43, unsigned char p_44, short p_45)
{
    int *l_131 = &g_12;
    int **l_132 = &l_131;
    unsigned l_166 = 1UL;
    struct S0 *l_183 = &g_62;
    const short *l_197 = &g_172;
    int *l_218 = &g_34;
    (*l_132) = l_131;
    for (p_44 = 27; (p_44 < 27); p_44 = safe_add_func_int32_t_s_s(p_44, 2))
    {
        int *l_135 = &g_12;
        struct S0 *l_217 = (void*)0;
        char *l_268 = (void*)0;
        (*l_132) = l_135;
        for (g_128 = 0; (g_128 <= 21); ++g_128)
        {
            struct S0 *l_173 = (void*)0;
            int l_178 = 0x4BEFBA41L;
            unsigned char l_259 = 0x30L;
            struct S0 *l_314 = &g_62;
            int *l_316 = &l_178;
        }
        if ((*g_315))
            break;
    }
    return (*g_256);
}







static struct S0 func_47(int * const p_48, int * p_49, unsigned char p_50, short p_51, unsigned short p_52)
{
    int l_103 = 0x95669DD8L;
    unsigned short *l_104 = (void*)0;
    unsigned short *l_105 = &g_100;
    int ***l_120 = &g_83;
    int ***l_121 = (void*)0;
    int *l_124 = &l_103;
    int **l_123 = &l_124;
    int ***l_122 = &l_123;
    char *l_125 = &g_126;
    char *l_127 = &g_128;
    struct S0 l_129 = {0xA0L};
    (*p_48) = (+(((p_51 = ((safe_add_func_uint32_t_u_u(0xCB10B3F4L, (((*l_105) = l_103) & (((safe_sub_func_uint32_t_u_u(p_51, (&g_72 == ((g_98 == (p_50 < (((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0x4C7FL, (safe_add_func_int16_t_s_s(l_103, l_103)))), g_12)) > g_87) | (*p_48)))) , (void*)0)))) | 65530UL) , g_98)))) | 9L)) , l_103) > l_103));
    (*l_124) = (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((*l_125) = ((safe_rshift_func_uint16_t_u_s((((*l_122) = ((*l_120) = (g_100 , &p_49))) == (void*)0), (p_51 && p_51))) == (*l_124))), p_50)), (((g_34 = ((((*l_124) == (((*l_127) = p_51) | 2UL)) <= g_62.f0) , 0xBF56F3C4L)) != p_51) == p_50)));

    ;
    ;
    return l_129;


}







static const short func_56(unsigned p_57, int p_58, struct S0 * p_59, int * p_60)
{
    unsigned char l_71 = 0UL;
    int *l_89 = &g_34;
    int **l_88 = &l_89;
    struct S0 ***l_96 = &g_72;
    unsigned *l_97 = &g_98;
    unsigned short *l_99 = &g_100;
    for (p_57 = 0; (p_57 <= 31); p_57 = safe_add_func_int8_t_s_s(p_57, 1))
    {
        struct S0 *l_68 = &g_62;
        struct S0 **l_67 = &l_68;
        struct S0 ***l_74 = &g_72;
        const int l_75 = (-6L);
        for (g_34 = 0; (g_34 < 18); g_34 = safe_add_func_int8_t_s_s(g_34, 3))
        {
            l_67 = &p_59;

            ;
        }

        ;
        (*p_60) = (safe_sub_func_uint32_t_u_u(g_12, ((248UL >= (l_71 , g_62.f0)) & (((*l_74) = g_72) != &g_73))));
        return l_75;
    }
    for (p_57 = 0; (p_57 > 7); ++p_57)
    {
        int *l_78 = &g_12;
        int **l_79 = (void*)0;
        int **l_80 = &l_78;
        unsigned short *l_86 = &g_87;
        (*l_80) = l_78;
        (*p_60) = (((248UL == (safe_sub_func_int32_t_s_s(g_12, ((void*)0 != g_83)))) , g_62.f0) || (p_58 | (g_12 , (safe_sub_func_uint16_t_u_u(((*l_86) = (p_58 , g_34)), p_58)))));
    }
    (*l_88) = &g_34;
    (*p_60) = (safe_mul_func_int16_t_s_s((!(safe_sub_func_uint32_t_u_u(0UL, g_87))), (p_58 <= ((((-6L) && ((p_58 != ((*l_99) = ((safe_add_func_uint16_t_u_u((*l_89), ((&g_72 != l_96) > ((*l_97) = p_57)))) != (*p_60)))) >= (*l_89))) || 4L) , (**l_88)))));
    return g_98;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_500.f0, "g_500.f0", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_661.f0, "g_661.f0", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_1045, "g_1045", print_hash_value);
    transparent_crc(g_1107, "g_1107", print_hash_value);
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1249, "g_1249", print_hash_value);
    transparent_crc(g_1290, "g_1290", print_hash_value);
    transparent_crc(g_1471, "g_1471", print_hash_value);
    transparent_crc(g_1581, "g_1581", print_hash_value);
    transparent_crc(g_1601.f0, "g_1601.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
