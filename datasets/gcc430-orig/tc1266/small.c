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
   unsigned f0;
   volatile int f1;
   volatile unsigned char f2;
   unsigned char f3;
   const volatile int f4;
   short f5;
   unsigned char f6;
};


static int g_11 = 0xC2A82A10L;
static short g_12 = (-10L);
static char g_15 = 0x46L;
static unsigned g_17 = 4294967295UL;
static int g_58 = 0x1325A46EL;
static short g_60 = 0x1FD2L;
static unsigned char g_76 = 4UL;
static char g_84 = (-1L);
static int * const volatile g_98 = &g_11;
static int *g_104 = &g_58;
static unsigned char g_136 = 255UL;
static unsigned g_138 = 4294967295UL;
static int * const volatile ** volatile g_142 = (void*)0;
static int * const volatile *g_144 = &g_104;
static int * const volatile ** volatile g_143 = &g_144;
static unsigned g_163 = 0xD3A23B2AL;
static volatile unsigned short g_188 = 1UL;
static volatile unsigned short * volatile g_187 = &g_188;
static unsigned short g_215 = 65530UL;
static unsigned short g_217 = 0xABA9L;
static unsigned *g_223 = &g_17;
static unsigned **g_222 = &g_223;
static volatile struct S0 g_246 = {0x9C87D36BL,0x9A323961L,0x58L,0x2BL,0x258CBBCEL,0xA71EL,0xFDL};
static volatile struct S0 *g_245 = &g_246;
static volatile struct S0 ** volatile g_247 = &g_245;
static volatile char g_250 = (-1L);
static volatile unsigned char *g_287 = &g_246.f2;
static volatile unsigned char **g_286 = &g_287;
static int * volatile g_293 = &g_11;
static volatile struct S0 ** volatile g_312 = &g_245;
static int **g_326 = (void*)0;
static int ***g_325 = &g_326;
static unsigned char *g_351 = (void*)0;
static unsigned char **g_350 = &g_351;
static unsigned char *** const volatile g_349 = &g_350;
static unsigned short g_360 = 1UL;
static int ** volatile g_381 = &g_104;
static int ** volatile g_390 = &g_104;
static unsigned g_424 = 0x8C71D38BL;
static unsigned g_509 = 1UL;
static unsigned short g_535 = 65535UL;
static int ** volatile g_537 = &g_104;
static struct S0 g_542 = {1UL,0xE8822B88L,0x54L,0x18L,0xF8DC5B90L,1L,0xE7L};
static int g_557 = 0L;
static struct S0 *g_575 = &g_542;
static struct S0 ** volatile g_574 = &g_575;
static struct S0 ** volatile g_614 = &g_575;
static unsigned short *g_681 = &g_215;
static unsigned short **g_680 = &g_681;
static unsigned short **g_683 = &g_681;
static const struct S0 g_724 = {0xD5FCBF1AL,0L,246UL,0x5AL,0x3C012761L,0xAAEDL,8UL};
static const struct S0 g_726 = {9UL,-4L,0xC3L,0xE0L,0L,0xA6B7L,8UL};
static int * volatile g_750 = &g_557;
static const unsigned **g_757 = (void*)0;
static struct S0 g_764 = {0UL,0xAC9D4FE3L,246UL,0xDBL,0x0875E408L,0xB6F3L,0xB6L};
static int g_778 = 0xE410B4E7L;
static int g_894 = 0xECC1B9D6L;
static int g_897 = 0L;
static unsigned char g_1038 = 255UL;
static int ** volatile g_1039 = &g_104;
static int ** volatile g_1049 = (void*)0;
static int ** volatile g_1051 = (void*)0;
static int ** volatile g_1053 = &g_104;
static const volatile unsigned char g_1085 = 0UL;
static volatile unsigned char ** const volatile g_1121 = (void*)0;
static unsigned g_1128 = 4294967295UL;
static volatile unsigned short **** const volatile g_1137 = (void*)0;
static short * const g_1146 = &g_12;
static short * const * volatile g_1145 = &g_1146;
static char *g_1174 = (void*)0;
static char **g_1173 = &g_1174;
static char **g_1176 = &g_1174;
static int g_1179 = 0x94CEEC41L;
static int * volatile g_1182 = &g_557;



static char func_1(void);
static short func_2(short p_3, const int p_4, unsigned char p_5, unsigned p_6);
static int func_18(short p_19, unsigned p_20);
static char func_24(int p_25, unsigned * p_26);
static int func_28(unsigned * p_29, int p_30, int p_31, unsigned * p_32);
static unsigned * func_33(int p_34, int p_35, int * p_36, unsigned * p_37);
static int * func_38(unsigned p_39, unsigned p_40, unsigned p_41, unsigned p_42, short p_43);
static int func_49(int p_50, const short p_51, unsigned char p_52, unsigned short p_53, unsigned p_54);
static short func_65(short * p_66, const unsigned char p_67, char p_68, int * p_69, unsigned p_70);
static const short func_71(unsigned p_72);
static char func_1(void)
{
    unsigned char l_9 = 1UL;
    int *l_10 = &g_11;
    unsigned *l_16 = &g_17;
    int *l_1184 = &g_897;
    int **l_1185 = &g_104;
    (*l_1184) ^= (func_2(((l_9 >= (((*l_10) = (-7L)) != g_12)) | g_12), ((void*)0 != l_10), (((safe_rshift_func_int8_t_s_u((g_15 |= l_9), 4)) > g_12) | (((*l_16) = (g_12 >= 0xF4D39D98L)) ^ 0xDBF0CF86L)), g_12) <= (-1L));

    ;

    (*l_1185) = (*g_1039);
    (*l_1185) = (*g_390);
    return (*l_10);
}







static short func_2(short p_3, const int p_4, unsigned char p_5, unsigned p_6)
{
    unsigned *l_27 = &g_17;
    unsigned char **l_697 = &g_351;
    unsigned char *l_699 = &g_542.f6;
    unsigned char **l_698 = &l_699;
    int l_700 = 0x9EC429AFL;
    struct S0 *l_1183 = (void*)0;
    (*g_1182) = func_18((safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_s(func_24(p_5, l_27), ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(g_542.f6, 0x17L)) < (safe_lshift_func_int8_t_s_s(g_509, 3))) && ((((*l_698) = ((*l_697) = g_351)) == (void*)0) || ((g_542.f3 >= l_700) > 0x26L))), p_6)), 8)) != p_6))))), p_4);

    ;

    ;
    l_1183 = l_1183;
    return p_4;
}







static int func_18(short p_19, unsigned p_20)
{
    short l_703 = 0x60BDL;
    int l_707 = 0x119DF868L;
    int *l_716 = (void*)0;
    unsigned **l_756 = &g_223;
    struct S0 *l_763 = &g_764;
    int *l_820 = &g_58;
    unsigned *l_851 = &g_509;
    unsigned l_872 = 0UL;
    int l_910 = (-1L);
    unsigned l_924 = 0x9842A07CL;
    short *l_945 = &l_703;
    int *l_966 = &l_707;
    unsigned short **l_1000 = (void*)0;
    int l_1054 = 1L;
    struct S0 **l_1087 = &g_575;
    struct S0 ***l_1086 = &l_1087;
    unsigned char ** const l_1092 = (void*)0;
    unsigned short ***l_1139 = &l_1000;
    unsigned short ****l_1138 = &l_1139;
    unsigned l_1181 = 0x65BE8448L;
    for (g_217 = 24; (g_217 <= 32); g_217++)
    {
        unsigned char l_745 = 255UL;
        int l_751 = 7L;
        unsigned *l_772 = &g_138;
        int *l_821 = &g_557;
        unsigned short l_848 = 65528UL;
        const unsigned l_901 = 0x21AA973AL;
        unsigned short * const *l_908 = &g_681;
        unsigned short * const **l_907 = &l_908;
        int **l_969 = &l_716;
        char l_1042 = 1L;
        unsigned char **l_1080 = &g_351;
        int *l_1090 = (void*)0;
        int l_1106 = (-8L);
        short *l_1132 = &g_60;
        unsigned char l_1149 = 0UL;
    }
    return l_1181;
}







static char func_24(int p_25, unsigned * p_26)
{
    short *l_44 = &g_12;
    const int l_55 = 1L;
    int *l_56 = (void*)0;
    int *l_57 = &g_58;
    short *l_59 = &g_60;
    unsigned l_61 = 1UL;
    unsigned **l_669 = &g_223;
    unsigned short l_679 = 0x8352L;
    unsigned short ***l_682 = &g_680;
    unsigned short **l_685 = &g_681;
    unsigned short ***l_684 = &l_685;
    unsigned char *l_688 = &g_136;
    p_25 = func_28(((*l_669) = func_33(g_17, g_11, func_38((p_25 || g_11), g_11, (((((*l_44) = p_25) && ((safe_mul_func_int16_t_s_s(((*l_59) ^= ((*l_44) = (safe_mul_func_uint8_t_u_u(255UL, (p_25 < ((*l_57) = func_49(g_17, l_55, p_25, g_15, (*p_26)))))))), g_11)) != 0UL)) == 0xB1BEL) || g_58), l_55, l_61), &g_17)), g_542.f3, p_25, p_26);

    ;

    p_25 = ((safe_rshift_func_uint8_t_u_u((l_679 && (((g_683 = ((*l_682) = g_680)) == ((*l_684) = &g_681)) < (safe_mod_func_int16_t_s_s(0x0239L, 0x223EL)))), 6)) <= ((*l_688) = p_25));
    return p_25;
}







static int func_28(unsigned * p_29, int p_30, int p_31, unsigned * p_32)
{
    short l_672 = 0xFBE6L;
    unsigned *l_673 = &g_542.f0;
    int l_674 = 0xE1F281B2L;
    l_674 = p_30;
    return l_674;
}







static unsigned * func_33(int p_34, int p_35, int * p_36, unsigned * p_37)
{
    unsigned short l_63 = 0x3ADFL;
    short l_64 = (-1L);
    int l_425 = 0x927B1464L;
    int l_426 = 1L;
    unsigned l_435 = 2UL;
    int *l_447 = &g_11;
    unsigned l_486 = 1UL;
    unsigned l_633 = 0xB33C0940L;
    unsigned char l_634 = 0UL;
    struct S0 *l_637 = (void*)0;
    struct S0 **l_658 = &g_575;
    char l_663 = 2L;
    unsigned ***l_666 = &g_222;
    if ((g_11 == l_63))
    {
        unsigned l_421 = 0x6A6F4B9AL;
        unsigned *l_422 = (void*)0;
        unsigned *l_423 = &g_424;
        short *l_472 = &g_12;
        int l_513 = 0x2DED6B33L;
        if ((l_64 && func_65(&g_60, (l_426 = (func_71(g_12) >= (((*l_423) = (l_421 == l_64)) <= (l_425 &= 0xC7CBF5A2L)))), l_421, p_36, l_421)))
        {
            short *l_450 = &g_60;
            char *l_457 = &g_84;
            unsigned short *l_458 = &l_63;
            unsigned short *l_459 = &g_217;
            short l_460 = 3L;
            int l_478 = (-1L);
            int *l_512 = &l_426;
            for (p_35 = (-13); (p_35 != 8); p_35 = safe_add_func_int16_t_s_s(p_35, 6))
            {
                int *l_430 = &l_426;
                int *l_431 = (void*)0;
                int *l_432 = &l_425;
                (*l_432) &= ((*l_430) |= func_71(p_34));
                for (g_138 = 0; (g_138 <= 47); ++g_138)
                {
                    const unsigned l_446 = 0x99631262L;
                    (*l_432) = l_435;
                    (*l_430) = (((*g_223) || (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_35, func_49((*p_36), l_421, (safe_rshift_func_int16_t_s_u(g_163, 0)), ((*g_98) | ((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((*g_222) == p_37), l_446)), p_35)) || l_446)), (**g_222)))), p_34))) | (*p_37));
                    if ((*g_293))
                        break;
                }
            }
            p_36 = &l_426;

            ;
            l_447 = p_37;

            ;
            if ((!(safe_mod_func_int16_t_s_s(((*g_287) ^ func_65(l_450, p_35, g_15, p_37, ((((safe_mul_func_int16_t_s_s(l_421, ((*l_459) = ((*l_458) &= (((+(safe_lshift_func_uint8_t_u_s((*l_447), p_35))) ^ ((*l_457) = (0xCB22DB01L || 0x9A113FE0L))) >= l_421))))) | l_460) < 0UL) | 1L))), 0x78EAL))))
            {
                unsigned l_469 = 4294967294UL;
                short *l_473 = &g_12;
                unsigned char *l_487 = &g_136;
                int l_500 = (-8L);
                unsigned char l_506 = 6UL;
                if ((*l_447))
                {
                    for (g_360 = 0; (g_360 >= 14); g_360 = safe_add_func_uint8_t_u_u(g_360, 3))
                    {
                        (**g_144) = (safe_sub_func_uint8_t_u_u((l_421 >= ((void*)0 == &g_245)), (safe_mul_func_int16_t_s_s(l_421, (*g_187)))));
                    }
                    if (l_421)
                    {
                        (*p_36) = (*p_36);
                        return l_447;


                    }
                    else
                    {
                        (*p_36) |= ((~((void*)0 != &g_138)) > p_34);
                    }
                    for (g_12 = (-3); (g_12 > 23); g_12 = safe_add_func_int16_t_s_s(g_12, 1))
                    {
                        (*g_104) |= l_469;
                    }
                    p_36 = p_36;
                }
                else
                {
                    int *l_474 = &l_425;
                    int *l_477 = &l_425;
                    int **l_479 = &l_447;
                    (*l_479) = func_38(l_421, p_34, (safe_rshift_func_uint8_t_u_u(func_65(&g_12, (*l_447), func_65((l_473 = l_472), p_34, g_246.f3, l_474, (safe_div_func_uint32_t_u_u((((*g_222) != (void*)0) && (*g_223)), 4UL))), l_477, l_478), 0)), l_421, g_76);

                    ;
                    for (l_425 = (-22); (l_425 > 15); ++l_425)
                    {
                        unsigned char * const l_488 = &g_136;
                        unsigned * const *l_496 = &l_422;
                        unsigned * const **l_495 = &l_496;
                        unsigned * const ***l_497 = &l_495;
                        unsigned *l_498 = &g_163;
                        unsigned *l_499 = &g_138;
                        int l_503 = 0xBA04E9CBL;
                        short *l_511 = &l_64;
                        (*l_479) = func_38((*l_447), p_34, (g_11 ^ (safe_sub_func_int8_t_s_s((((g_76 == (l_472 == l_472)) != l_486) && 65533UL), (l_487 == l_488)))), (*p_37), g_246.f5);
                        (*l_447) = (0x13L && ((safe_lshift_func_int8_t_s_u((p_35 | ((safe_add_func_int8_t_s_s(g_215, (0x4CEAL != p_35))) | (func_71((l_500 = ((*l_499) |= ((*l_498) = (safe_lshift_func_uint16_t_u_s((((*l_497) = l_495) == (void*)0), l_421)))))) != g_136))), 7)) | g_136));
                        (**g_144) = (**g_381);
                        (*p_36) ^= ((l_503 || ((!(safe_add_func_uint32_t_u_u((l_506 != (safe_mul_func_int16_t_s_s(func_49((*g_293), p_35, g_509, ((safe_unary_minus_func_uint32_t_u(((*g_223) = ((func_65(l_511, p_34, ((void*)0 == l_474), l_512, (*g_223)) < g_217) == 0x14L)))) && (*l_477)), l_421), 6UL))), (*l_474)))) == g_424)) & p_35);
                    }
                }

                ;
                l_513 &= (((g_246.f6 | (*l_447)) && 0xB08BL) || p_34);
                (*l_447) = (safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((*l_457) = ((safe_rshift_func_uint8_t_u_u((**g_286), 7)) & l_513)) || (safe_mod_func_int8_t_s_s((p_35 < p_34), (*l_512)))), 0xC43F277EL)), (safe_add_func_int16_t_s_s(p_34, p_35))));
            }
            else
            {
                char **l_530 = &l_457;
                unsigned char *l_533 = &g_76;
                short *l_534 = (void*)0;
                int **l_536 = (void*)0;
                (*g_537) = func_38(((safe_lshift_func_int16_t_s_u((g_535 = func_49((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((*l_530) = &g_15) != (void*)0), 7)), func_65(l_472, (((*l_533) = (safe_sub_func_int32_t_s_s((*p_36), (*l_447)))) != l_513), (((*l_458) = (0x64FC45FEL != (g_246.f6 <= ((*l_459) ^= func_65(l_534, p_35, g_424, p_37, (**g_222)))))) || (-10L)), &l_425, (*p_37)))), g_12, l_513, g_84, (*p_37))), (*l_512))) | (*g_223)), p_35, l_421, (*g_223), g_360);

                ;
            }

            ;
            ;
        }
        else
        {
            char l_538 = 1L;
            l_538 &= (*g_98);
        }

        ;

        ;
        return (*g_222);


    }
    else
    {
        struct S0 *l_541 = &g_542;
        int l_546 = 0x42263454L;
        int l_556 = 8L;
        const char l_558 = 0x4BL;
        const int *l_599 = &g_557;
        const int **l_598 = &l_599;
        const int ***l_597 = &l_598;
        const int ****l_596 = &l_597;
        unsigned short l_615 = 0x443FL;
        unsigned short *l_661 = &g_360;
        unsigned short *l_662 = &l_63;
        unsigned *l_664 = &g_138;
        unsigned *l_665 = &l_633;
        for (p_35 = (-2); (p_35 != 7); p_35++)
        {
            short *l_543 = &l_64;
            struct S0 * const l_573 = &g_542;
            int * const *l_582 = &l_447;
            int * const **l_581 = &l_582;
            const int l_600 = (-7L);
        }
        for (g_215 = (-17); (g_215 >= 33); ++g_215)
        {
            const struct S0 *l_638 = &g_542;
            int **l_645 = &g_104;
            l_546 = (l_637 != l_638);
            if ((***l_597))
                continue;
            p_36 = func_38(p_35, g_246.f5, (~(safe_rshift_func_uint8_t_u_u((*l_447), ((void*)0 == (*g_222))))), (0xEEB5D9E2L && (*l_447)), g_509);
            for (g_535 = 9; (g_535 <= 30); g_535++)
            {
                unsigned short *l_646 = (void*)0;
                unsigned short *l_647 = (void*)0;
                unsigned short *l_648 = &l_63;
                unsigned ***l_649 = &g_222;
                if ((*p_36))
                    break;
                (***l_596) = func_38(g_215, ((safe_add_func_uint32_t_u_u((0xB5B9L > ((*l_648) = (((*l_447) = ((void*)0 == l_645)) & ((**g_144) = (-1L))))), (&g_223 == ((*l_649) = &g_223)))) || (safe_sub_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(func_71(p_34), 0x15L)), p_34)) || g_542.f0), g_509))), p_34, p_34, p_35);

                ;
                if ((*p_36))
                    break;
            }
        }


        ;
        (***l_596) = func_38(p_34, p_34, ((*l_665) ^= (safe_mod_func_uint16_t_u_u(func_71(((*l_664) |= (((*l_447) <= (*l_599)) || func_65(&g_12, (&l_541 == (l_658 = (void*)0)), (safe_lshift_func_int8_t_s_s((l_663 ^= (((*l_662) |= ((*l_661) = 65535UL)) ^ g_84)), 4)), (*g_381), (**g_222))))), g_136))), l_425, p_35);

        ;
        ;
    }


    ;
    if ((((*l_666) = &g_223) != (void*)0))
    {
        (*g_381) = (void*)0;

        ;
    }
    else
    {
        for (g_138 = 0; (g_138 != 57); ++g_138)
        {
            return (**l_666);


        }
    }

    ;
    return (**l_666);


}







static int * func_38(unsigned p_39, unsigned p_40, unsigned p_41, unsigned p_42, short p_43)
{
    int *l_62 = &g_58;
    return l_62;


}







static int func_49(int p_50, const short p_51, unsigned char p_52, unsigned short p_53, unsigned p_54)
{
    return g_17;
}







static short func_65(short * p_66, const unsigned char p_67, char p_68, int * p_69, unsigned p_70)
{
    unsigned char l_427 = 1UL;
    (*g_104) &= l_427;
    return g_163;
}







static const short func_71(unsigned p_72)
{
    unsigned char *l_75 = &g_76;
    const int l_81 = 0x62742912L;
    int l_82 = 5L;
    char *l_83 = &g_84;
    unsigned short l_126 = 7UL;
    unsigned short *l_216 = &g_217;
    int l_219 = 0x552D6EEAL;
    unsigned **l_226 = &g_223;
    unsigned short l_236 = 1UL;
    int *l_275 = &l_82;
    unsigned l_358 = 0xF0046A04L;
    int l_359 = 0L;
    unsigned l_418 = 0x72C3C677L;
    short l_420 = (-3L);
    if (func_49((safe_sub_func_uint8_t_u_u(((*l_75) = g_12), p_72)), p_72, g_17, ((safe_lshift_func_int8_t_s_u(((*l_83) &= func_49((safe_mul_func_uint16_t_u_u(l_81, g_17)), g_15, (l_82 |= (p_72 && (~l_81))), p_72, g_60)), 7)) < p_72), g_60))
    {
        short l_87 = 0x2DA4L;
        for (g_12 = (-11); (g_12 != (-9)); g_12 = safe_add_func_uint16_t_u_u(g_12, 4))
        {
            unsigned short l_94 = 65534UL;
            unsigned short *l_95 = (void*)0;
            unsigned short *l_96 = &l_94;
            int l_97 = 0x8B939845L;
            int *l_99 = &g_11;
            (*g_98) = func_49(l_87, (safe_add_func_uint32_t_u_u((((p_72 | g_15) | ((*l_75) = l_87)) <= ((p_72 == (safe_div_func_uint16_t_u_u(((*l_96) = (safe_add_func_uint8_t_u_u(((l_81 <= func_49(p_72, p_72, g_12, g_17, l_94)) >= g_15), p_72))), g_17))) < g_11)), l_97)), p_72, l_97, g_11);
            g_104 = func_38(g_84, g_12, func_49(((*l_99) = 1L), (l_82 = (-1L)), g_76, (((safe_lshift_func_uint16_t_u_s(((*l_96) = ((safe_sub_func_int32_t_s_s(((((void*)0 == &g_58) <= (g_15 ^ 0L)) && l_87), g_58)) < g_76)), p_72)) <= p_72) && 4294967288UL), l_87), p_72, p_72);
            if ((*g_104))
                break;
        }
    }
    else
    {
        unsigned char *l_107 = &g_76;
        int l_112 = 0L;
        unsigned char l_135 = 0UL;
        char l_137 = 0x01L;
        int **l_147 = &g_104;
        int *** const l_146 = &l_147;
        const unsigned * const l_167 = &g_17;
        int l_168 = 6L;
        unsigned short **l_239 = &l_216;
        char l_263 = 0x57L;
        unsigned ***l_323 = &l_226;
        const char l_347 = (-1L);
        unsigned **l_367 = &g_223;
        (*g_104) = (p_72 && ((safe_mul_func_int8_t_s_s((l_107 != l_83), (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_112, (((l_83 == (void*)0) ^ ((p_72 != func_49(((*g_104) ^= (safe_sub_func_uint32_t_u_u((l_107 != (void*)0), l_112))), p_72, p_72, l_81, g_15)) == p_72)) <= 0x12C2F3D1L))), 1UL)))) && g_17));
        for (g_15 = 0; (g_15 > (-20)); g_15 = safe_sub_func_uint8_t_u_u(g_15, 9))
        {
            unsigned *l_119 = &g_17;
            int l_120 = 1L;
            int *l_121 = &l_82;
            int l_134 = 0L;
            unsigned l_191 = 6UL;
            unsigned ***l_232 = &l_226;
        }
        for (l_219 = 3; (l_219 <= 0); l_219--)
        {
            char l_255 = 0xA7L;
            short *l_260 = &g_60;
            int l_289 = 0x9E949263L;
            l_82 |= ((safe_mod_func_uint32_t_u_u(func_49(l_255, ((((*l_107) = ((func_49((**g_144), (g_136 ^ (g_58 < (&g_215 == &l_126))), p_72, ((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((*l_260) ^= 0L), (safe_add_func_uint16_t_u_u(l_255, (*g_187))))), 6)) < (**l_147)), p_72) && (*g_187)) | (***l_146))) & p_72) == (-6L)), (**l_147), g_136, l_263), l_255)) <= g_11);
            for (g_12 = 0; (g_12 < (-9)); g_12 = safe_sub_func_uint32_t_u_u(g_12, 1))
            {
                int l_266 = 0xA460BA7DL;
                unsigned *l_267 = &g_138;
                unsigned *l_274 = &g_163;
                int l_282 = 5L;
                unsigned l_305 = 0x28B8FE84L;
            }
        }
        if (p_72)
        {
            int ****l_327 = &g_325;
            (*g_104) &= (&g_144 == ((*l_327) = g_325));
        }
        else
        {
            const short l_340 = 0xD76DL;
            int l_343 = 0x96D4F435L;
            short *l_344 = (void*)0;
            short *l_345 = (void*)0;
            short *l_346 = &g_60;
            unsigned char *l_357 = &g_76;
            unsigned short **l_391 = &l_216;
            int l_401 = 0x17611C71L;
            unsigned l_409 = 1UL;
            unsigned char ***l_419 = &g_350;
            if (func_49((func_49(p_72, ((*l_346) = (safe_mod_func_int32_t_s_s(((*l_275) = ((**g_144) = (((safe_rshift_func_uint16_t_u_s(p_72, 4)) < (safe_add_func_int8_t_s_s(0xCBL, 0xA4L))) >= (safe_mod_func_int16_t_s_s(((l_343 ^= (((*g_187) > g_215) > ((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((l_340 <= ((safe_mul_func_int16_t_s_s(0xA50CL, (((*l_146) = ((*g_325) = (*g_325))) == (void*)0))) & 1UL)), 1)), 0xFE23A00BL)) >= p_72))) >= 0x5EB8L), 0xB164L))))), p_72))), p_72, g_15, (*g_223)) || l_112), l_347, g_12, g_163, (*g_223)))
            {
                unsigned char ***l_348 = (void*)0;
                int l_356 = 3L;
                unsigned **l_365 = (void*)0;
                unsigned ***l_366 = (void*)0;
                short *l_375 = (void*)0;
                int *l_380 = (void*)0;
                (*g_349) = &l_75;

                ;
                (**g_144) = (((p_72 ^ 0x3CFFL) || ((*l_275) = func_49(func_49((safe_mul_func_uint8_t_u_u(254UL, (safe_div_func_uint16_t_u_u(l_356, (255UL ^ ((*l_83) = (l_357 == l_357))))))), g_246.f5, func_49(l_358, g_215, l_359, p_72, p_72), g_360, (**g_222)), p_72, p_72, p_72, (**g_222)))) ^ (-4L));
                if (func_49(((safe_add_func_uint8_t_u_u(((((*l_346) = (*l_275)) | (((((*l_323) = l_365) == (l_367 = l_365)) != (((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((((safe_unary_minus_func_int32_t_s(p_72)) ^ l_356) & (func_49((((safe_add_func_int16_t_s_s((l_359 ^= g_138), (safe_mul_func_uint16_t_u_u(p_72, (p_72 || ((**g_222) = p_72)))))) >= 0UL) == p_72), p_72, p_72, (*l_275), (*l_275)) <= 1UL)), (*l_275))) <= p_72), g_246.f5)) & p_72) != (*l_275))) <= l_340)) != (*l_275)), g_215)) & (-5L)), g_138, l_343, p_72, p_72))
                {
                    if ((safe_rshift_func_int16_t_s_u(p_72, l_356)))
                    {
                        l_380 = &l_356;

                        ;
                    }
                    else
                    {
                        return g_246.f1;


                    }

                    ;
                }
                else
                {
                    char *l_382 = &l_137;
                    char **l_383 = (void*)0;
                    char **l_384 = &l_83;
                    int l_389 = 0x4D5922BEL;
                    (*g_381) = &l_356;

                    ;
                    (*l_275) = ((**g_144) = p_72);
                    (*g_390) = func_38(((g_246.f5 ^ g_138) >= (l_382 == ((*l_384) = &g_84))), (safe_lshift_func_uint8_t_u_u(0x2DL, ((*l_75) = (g_60 != ((safe_rshift_func_uint16_t_u_u(0x9E63L, 0)) && ((*g_223) | (~(g_84 & 0x1028L)))))))), p_72, l_340, l_389);

                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                (**g_144) &= (l_391 != (void*)0);
                for (l_343 = 0; (l_343 < (-21)); --l_343)
                {
                    int l_400 = (-1L);
                    l_401 ^= (safe_div_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((((!(safe_lshift_func_int8_t_s_s((1UL || func_49((*g_104), (&p_72 != &g_138), p_72, p_72, p_72)), 0))) || ((p_72 > l_400) < p_72)) <= g_58), 11)) == (-2L)), (*g_287)));
                    for (g_84 = 1; (g_84 != 3); ++g_84)
                    {
                        unsigned short *l_408 = &g_360;
                        unsigned short l_415 = 0x982BL;
                        (**g_144) = (safe_lshift_func_int16_t_s_u(((0x527632B6L < (((l_216 = (*l_391)) == (void*)0) <= 0x4AL)) == ((g_15 ^ func_49((safe_add_func_uint8_t_u_u(((((*l_408) = l_400) < p_72) > g_246.f4), (0x72L < p_72))), g_217, l_409, p_72, p_72)) > 0xE6L)), 14));
                        (*g_293) = ((l_343 > ((~(safe_unary_minus_func_int16_t_s((g_246.f3 | 0x18L)))) != 0x0F67431AL)) & ((((((*l_275) ^ 0x7FL) > ((safe_mul_func_int8_t_s_s((*l_275), (safe_rshift_func_uint8_t_u_u(p_72, 0)))) & ((0x1E9E2BA9L & l_400) <= 65534UL))) && 0UL) > l_415) != 0x27049D08L));
                    }
                }
                (*g_104) = 9L;
            }

            ;
            ;

            ;
            l_359 |= (safe_add_func_uint32_t_u_u((l_418 | func_49((p_72 == (((*g_223) >= (*g_223)) | func_49(((1L && (*g_223)) || ((*l_275) != ((*l_346) ^= ((((*l_419) = &l_107) != &l_75) == (***g_143))))), p_72, p_72, p_72, (*l_275)))), p_72, l_420, g_11, p_72)), 0x0FE7DAA4L));


        }

        ;
        ;

        ;
    }

    ;

    return p_72;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2, "g_246.f2", print_hash_value);
    transparent_crc(g_246.f3, "g_246.f3", print_hash_value);
    transparent_crc(g_246.f4, "g_246.f4", print_hash_value);
    transparent_crc(g_246.f5, "g_246.f5", print_hash_value);
    transparent_crc(g_246.f6, "g_246.f6", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_542.f0, "g_542.f0", print_hash_value);
    transparent_crc(g_542.f1, "g_542.f1", print_hash_value);
    transparent_crc(g_542.f2, "g_542.f2", print_hash_value);
    transparent_crc(g_542.f3, "g_542.f3", print_hash_value);
    transparent_crc(g_542.f4, "g_542.f4", print_hash_value);
    transparent_crc(g_542.f5, "g_542.f5", print_hash_value);
    transparent_crc(g_542.f6, "g_542.f6", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_724.f0, "g_724.f0", print_hash_value);
    transparent_crc(g_724.f1, "g_724.f1", print_hash_value);
    transparent_crc(g_724.f2, "g_724.f2", print_hash_value);
    transparent_crc(g_724.f3, "g_724.f3", print_hash_value);
    transparent_crc(g_724.f4, "g_724.f4", print_hash_value);
    transparent_crc(g_724.f5, "g_724.f5", print_hash_value);
    transparent_crc(g_724.f6, "g_724.f6", print_hash_value);
    transparent_crc(g_726.f0, "g_726.f0", print_hash_value);
    transparent_crc(g_726.f1, "g_726.f1", print_hash_value);
    transparent_crc(g_726.f2, "g_726.f2", print_hash_value);
    transparent_crc(g_726.f3, "g_726.f3", print_hash_value);
    transparent_crc(g_726.f4, "g_726.f4", print_hash_value);
    transparent_crc(g_726.f5, "g_726.f5", print_hash_value);
    transparent_crc(g_726.f6, "g_726.f6", print_hash_value);
    transparent_crc(g_764.f0, "g_764.f0", print_hash_value);
    transparent_crc(g_764.f1, "g_764.f1", print_hash_value);
    transparent_crc(g_764.f2, "g_764.f2", print_hash_value);
    transparent_crc(g_764.f3, "g_764.f3", print_hash_value);
    transparent_crc(g_764.f4, "g_764.f4", print_hash_value);
    transparent_crc(g_764.f5, "g_764.f5", print_hash_value);
    transparent_crc(g_764.f6, "g_764.f6", print_hash_value);
    transparent_crc(g_778, "g_778", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    transparent_crc(g_1038, "g_1038", print_hash_value);
    transparent_crc(g_1085, "g_1085", print_hash_value);
    transparent_crc(g_1128, "g_1128", print_hash_value);
    transparent_crc(g_1179, "g_1179", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
