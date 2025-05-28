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
   unsigned f0 : 27;
   unsigned f1;
   unsigned f2 : 6;
   unsigned f3 : 18;
   unsigned f4 : 17;
   unsigned f5 : 27;
   const signed f6 : 18;
   signed f7 : 4;
};

union U1 {
   int f0;
};


static int g_5 = 2L;
static short g_30 = 0x09BAL;
static char g_36 = 0x12L;
static unsigned g_50 = 0xBD791F9EL;
static struct S0 g_64 = {762,0x8169B41DL,3,412,42,5017,-93,2};
static int g_89 = (-1L);
static unsigned char g_134 = 0xD5L;
static unsigned short g_165 = 65534UL;
static union U1 g_174 = {0x0A16214FL};
static union U1 *g_173 = &g_174;
static union U1 ***g_198 = (void*)0;
static int g_208 = 1L;
static unsigned g_209 = 0xE490029EL;
static char g_238 = 2L;
static int g_279 = 0x480F3EF4L;
static unsigned g_294 = 0xED00F019L;
static unsigned char g_298 = 247UL;
static struct S0 *g_316 = &g_64;
static struct S0 **g_315 = &g_316;
static int *g_325 = &g_208;
static int **g_324 = &g_325;
static int ***g_323 = &g_324;
static union U1 **g_329 = &g_173;
static unsigned char g_463 = 246UL;
static char g_561 = 0xB3L;
static unsigned short g_573 = 0x985CL;
static unsigned short g_676 = 0x75E7L;
static const union U1 *g_686 = &g_174;
static int g_787 = 0x27FDB582L;
static int g_803 = 0x3F67FE72L;
static unsigned char g_804 = 252UL;



static int func_1(void);
static int * func_2(int * p_3);
static struct S0 * func_53(int p_54, int p_55, int * p_56, char p_57, char p_58);
static short func_59(struct S0 * p_60, unsigned p_61, struct S0 * p_62);
static unsigned func_67(unsigned p_68, char p_69, short p_70);
static unsigned char func_75(const struct S0 * p_76);
static const struct S0 * func_77(int * p_78, unsigned p_79, int * p_80, const unsigned p_81, int * p_82);
static int * func_83(struct S0 * p_84, int p_85, struct S0 * p_86, struct S0 * p_87);
static struct S0 func_139(char p_140, short p_141, struct S0 p_142, const struct S0 * const p_143);
static struct S0 func_144(struct S0 * p_145, unsigned p_146, struct S0 * p_147, int p_148);
static int func_1(void)
{
    int *l_4 = &g_5;
    struct S0 *l_856 = (void*)0;
    union U1 *l_857 = &g_174;
    unsigned l_860 = 4294967295UL;
    int *l_861 = &g_174.f0;
    int *l_862 = &g_5;
    int l_863 = 8L;
    int *l_864 = &g_89;
    int *l_865 = &g_89;
    int *l_866 = &g_208;
    int l_867 = (-2L);
    int *l_868 = &g_89;
    int *l_869 = &g_5;
    int *l_870 = &g_279;
    int l_871 = 0x0BD9BE98L;
    int *l_872 = &l_863;
    int *l_873 = &g_787;
    int *l_874 = &g_89;
    int *l_875 = &g_208;
    int l_876 = (-9L);
    int *l_877 = &g_5;
    int *l_878 = &g_5;
    int l_879 = 0x33DE619AL;
    int *l_880 = &l_879;
    int *l_881 = &g_5;
    int *l_882 = &g_208;
    int *l_883 = &l_863;
    int *l_884 = (void*)0;
    unsigned l_885 = 0x4C12483FL;
    l_4 = func_2(l_4);
    (*l_4) = (safe_sub_func_uint8_t_u_u((g_64.f7 != (g_64.f4 , (1L <= func_59(l_856, (l_857 == l_857), func_53(((g_804 & (safe_add_func_uint16_t_u_u(g_174.f0, ((func_59((*g_315), l_860, l_856) , g_174.f0) ^ 0x4FL)))) , 0L), (*l_4), l_4, (*l_4), (*l_4)))))), g_64.f5));
    --l_885;
    return (*l_4);
}







static int * func_2(int * p_3)
{
    int *l_6 = &g_5;
    int *l_7 = &g_5;
    int *l_8 = &g_5;
    int *l_9 = &g_5;
    int *l_10 = &g_5;
    int *l_11 = &g_5;
    int *l_12 = &g_5;
    int *l_13 = &g_5;
    int *l_14 = (void*)0;
    int *l_15 = &g_5;
    int *l_16 = (void*)0;
    int *l_17 = &g_5;
    int *l_18 = (void*)0;
    int *l_19 = &g_5;
    int l_20 = 0L;
    int *l_21 = (void*)0;
    int *l_22 = &l_20;
    int *l_23 = &g_5;
    int *l_24 = (void*)0;
    int *l_25 = &l_20;
    int *l_26 = &g_5;
    int *l_27 = &g_5;
    int *l_28 = &g_5;
    int *l_29 = (void*)0;
    int *l_31 = &l_20;
    int l_32 = 0x6A7F4EA1L;
    int *l_33 = &l_20;
    int *l_34 = &g_5;
    int *l_35 = &l_20;
    int *l_37 = &l_32;
    int *l_38 = &g_5;
    int *l_39 = &g_5;
    int *l_40 = &g_5;
    int *l_41 = &l_20;
    int *l_42 = &g_5;
    int *l_43 = &g_5;
    int *l_44 = &l_32;
    int *l_45 = &g_5;
    int *l_46 = &l_20;
    int *l_47 = (void*)0;
    int l_48 = 0L;
    int *l_49 = &l_48;
    struct S0 *l_63 = &g_64;
    struct S0 **l_815 = &l_63;
    const unsigned l_823 = 4294967295UL;
    union U1 *l_836 = (void*)0;
    char l_837 = 0xECL;
    g_50++;
    (*l_42) = g_5;
    (*l_815) = func_53(((((*l_43) && func_59(l_63, (safe_mod_func_int8_t_s_s(((!(func_67((*l_10), (*l_39), ((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((((*l_35) > ((~((-9L) < 255UL)) ^ (func_75(func_77(func_83(&g_64, (*p_3), &g_64, l_63), (*l_40), &l_20, (*l_7), p_3)) && g_463))) , g_787), (*l_12))), (*p_3))) != (*l_15))) || 0x262596E1L)) , (*l_44)), (*l_33))), &g_64)) && (*l_43)) , (*l_23)), (*p_3), p_3, (*l_19), (*l_45));
    if (func_75((*l_815)))
    {
        int l_816 = 0x91661B09L;
        const union U1 l_846 = {0L};
        unsigned l_847 = 0UL;
        (*l_40) = ((((func_67(g_561, l_816, ((safe_rshift_func_uint8_t_u_u(((*l_45) , (((*l_49) == func_67((*l_46), (safe_mod_func_uint16_t_u_u((0x7DL ^ 0UL), g_64.f3)), (safe_mod_func_uint16_t_u_u((*l_31), (*l_40))))) ^ (*l_34))), 4)) & g_64.f4)) & l_816) > (*p_3)) , g_174.f0) & l_823);
        (*l_9) = (safe_sub_func_int16_t_s_s((func_67((safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((((((g_294 , (safe_mod_func_uint16_t_u_u(func_67((*l_27), g_174.f0, g_298), ((safe_sub_func_uint8_t_u_u((((l_836 != (void*)0) && g_238) , (*l_45)), 0x2CL)) , l_837)))) , g_64.f7) , 1UL) == 0UL) | g_64.f6), 0x94D402D4L)) <= 0x105DE155L), g_36)), l_816)), l_816, l_816) < g_64.f7), g_64.f6));
        (*g_324) = (((*l_6) && func_67((*l_40), (2UL || (*l_35)), ((*l_27) > (((((safe_div_func_int16_t_s_s(((safe_add_func_int16_t_s_s(1L, (l_816 <= g_463))) , (safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((((l_846 , l_847) , (*l_10)) >= g_64.f6) , l_847), 0x14947395L)), 1L))), l_816)) & (*l_13)) < (*p_3)) , (*l_27)) | 0L)))) , &l_816);
        (*g_324) = ((safe_sub_func_uint8_t_u_u((((-2L) & (!((*g_323) == (void*)0))) ^ (((*l_25) != 0UL) <= func_59((*l_815), g_294, (*l_815)))), g_238)) , (**g_323));
    }
    else
    {
        int *l_850 = &g_174.f0;
        unsigned short l_851 = 0x0F0DL;
        (*g_324) = (void*)0;
        (**g_323) = l_850;
        l_851 |= (*p_3);
        (*g_325) &= 0x20BAB50FL;
    }
    return &g_89;
}







static struct S0 * func_53(int p_54, int p_55, int * p_56, char p_57, char p_58)
{
    return (*g_315);
}







static short func_59(struct S0 * p_60, unsigned p_61, struct S0 * p_62)
{
    char l_814 = 0x60L;
    l_814 ^= (~0x7D6D14A0L);
    return g_64.f4;
}







static unsigned func_67(unsigned p_68, char p_69, short p_70)
{
    union U1 * const l_807 = &g_174;
    int l_808 = 0x804EB03DL;
    const struct S0 *l_811 = &g_64;
    int *l_812 = (void*)0;
    int *l_813 = &g_174.f0;
    l_808 = (l_807 == l_807);
    (*l_813) = (safe_div_func_uint8_t_u_u(l_808, func_75(((*l_807) , l_811))));
    return p_70;
}







static unsigned char func_75(const struct S0 * p_76)
{
    union U1 *l_689 = &g_174;
    int *l_690 = &g_279;
    int *l_691 = (void*)0;
    int *l_692 = &g_279;
    int *l_693 = &g_89;
    int *l_694 = &g_208;
    int *l_695 = &g_89;
    int *l_696 = &g_89;
    int *l_697 = &g_174.f0;
    int l_698 = (-3L);
    int *l_699 = &l_698;
    int *l_700 = &g_208;
    int *l_701 = (void*)0;
    int l_702 = (-2L);
    int *l_703 = &g_174.f0;
    int *l_704 = &l_698;
    int *l_705 = &l_702;
    int *l_706 = &g_89;
    int l_707 = (-6L);
    int *l_708 = &g_279;
    int *l_709 = &g_174.f0;
    int *l_710 = &g_208;
    int *l_711 = &g_89;
    int *l_712 = &l_707;
    int *l_713 = &l_702;
    int *l_714 = (void*)0;
    int *l_715 = &l_707;
    int *l_716 = &g_279;
    int l_717 = 8L;
    int *l_718 = &g_279;
    int *l_719 = &g_208;
    int *l_720 = (void*)0;
    int l_721 = 0xD7EB02DBL;
    int *l_722 = &l_698;
    int l_723 = (-10L);
    int *l_724 = &g_208;
    int *l_725 = &g_89;
    int l_726 = 0x1D6E8670L;
    int l_727 = 0xDE6A4385L;
    int l_728 = 1L;
    int *l_729 = &g_89;
    int *l_730 = &l_707;
    int *l_731 = &g_279;
    int *l_732 = &l_721;
    int *l_733 = &l_702;
    int *l_734 = &g_89;
    int *l_735 = &l_728;
    int *l_736 = &g_279;
    int *l_737 = (void*)0;
    int l_738 = (-1L);
    int *l_739 = &l_727;
    int *l_740 = &l_698;
    int *l_741 = &l_726;
    int *l_742 = (void*)0;
    int *l_743 = &l_723;
    int l_744 = 0x536A53D2L;
    int *l_745 = &l_717;
    int *l_746 = &l_727;
    int *l_747 = &g_174.f0;
    int *l_748 = &l_727;
    int *l_749 = &l_738;
    int *l_750 = (void*)0;
    int *l_751 = (void*)0;
    int *l_752 = &l_721;
    int l_753 = 0xB596BDCCL;
    int *l_754 = &l_717;
    int *l_755 = (void*)0;
    int *l_756 = &l_726;
    int *l_757 = (void*)0;
    int l_758 = 0xBD77C711L;
    int l_759 = 0x3F83425BL;
    int *l_760 = (void*)0;
    int *l_761 = &l_707;
    int l_762 = 1L;
    int *l_763 = &l_738;
    int *l_764 = (void*)0;
    int *l_765 = (void*)0;
    int *l_766 = &l_721;
    int l_767 = 6L;
    int *l_768 = &l_758;
    int *l_769 = &g_208;
    int *l_770 = &g_208;
    int l_771 = 6L;
    int *l_772 = (void*)0;
    int l_773 = 1L;
    int *l_774 = &g_208;
    int *l_775 = &l_738;
    int *l_776 = &l_771;
    int *l_777 = &l_744;
    int *l_778 = &l_767;
    int *l_779 = &l_721;
    int *l_780 = &l_773;
    int *l_781 = &l_771;
    int l_782 = 1L;
    int *l_783 = (void*)0;
    int *l_784 = &l_698;
    int *l_785 = &l_727;
    int *l_786 = &g_208;
    int *l_788 = &l_782;
    int *l_789 = &g_208;
    int l_790 = 7L;
    int *l_791 = &l_773;
    int l_792 = 3L;
    int *l_793 = &l_758;
    int *l_794 = &l_767;
    int *l_795 = &l_790;
    int *l_796 = &l_782;
    int *l_797 = &l_698;
    int *l_798 = (void*)0;
    int l_799 = (-7L);
    int *l_800 = &l_707;
    int l_801 = 0x3F93BFE9L;
    int *l_802 = &l_759;
    l_689 = l_689;
    g_804--;
    return g_36;
}







static const struct S0 * func_77(int * p_78, unsigned p_79, int * p_80, const unsigned p_81, int * p_82)
{
    unsigned char l_363 = 250UL;
    int ***l_368 = (void*)0;
    const unsigned short l_372 = 0x5B4EL;
    const struct S0 *l_376 = &g_64;
    int l_383 = 0x06D2CD21L;
    int l_395 = 0L;
    int l_461 = 0xB8542A95L;
    int l_554 = 0x3BE65349L;
    union U1 *l_578 = &g_174;
    int l_621 = 0x3433ED34L;
    struct S0 *l_687 = &g_64;
    struct S0 *l_688 = &g_64;
    if (((l_363 && g_298) ^ (safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((p_81 , (l_368 == ((safe_unary_minus_func_int8_t_s((safe_sub_func_uint8_t_u_u(p_79, ((g_64.f1 & g_165) | (*p_80)))))) , (void*)0))), 9UL)), l_372))))
    {
        short l_375 = 0xF291L;
        (*p_78) = (safe_mod_func_int8_t_s_s(l_375, p_79));
        return l_376;
    }
    else
    {
        const char l_379 = 0x21L;
        int l_382 = 0xFE7ED3B3L;
        int l_384 = 4L;
        int l_401 = 4L;
        const union U1 *l_577 = &g_174;
        int l_646 = (-6L);
        int l_647 = (-2L);
        unsigned l_679 = 4294967295UL;
        for (g_89 = 0; (g_89 != (-16)); g_89 = safe_sub_func_int8_t_s_s(g_89, 8))
        {
            unsigned l_380 = 6UL;
            int l_381 = 0xC2428196L;
            int l_415 = 0xD498514BL;
            struct S0 ***l_468 = &g_315;
            g_174.f0 = l_379;
            if (l_380)
            {
                (*g_324) = (void*)0;
                l_381 = (*p_78);
            }
            else
            {
                int *l_385 = (void*)0;
                int *l_386 = &g_174.f0;
                int *l_387 = &g_174.f0;
                int *l_388 = &g_208;
                int *l_389 = &l_381;
                int *l_390 = &l_382;
                int *l_391 = &l_381;
                int *l_392 = &l_383;
                int *l_393 = &l_382;
                int *l_394 = &g_174.f0;
                int *l_396 = &g_174.f0;
                int *l_397 = &l_395;
                int *l_398 = &g_174.f0;
                int *l_399 = &l_382;
                int *l_400 = &l_383;
                int l_402 = 0x981C66F5L;
                int *l_403 = &l_402;
                int *l_404 = &l_381;
                int *l_405 = &g_279;
                int *l_406 = &l_383;
                int *l_407 = &l_395;
                int *l_408 = (void*)0;
                int *l_409 = &l_401;
                int *l_410 = &l_401;
                int *l_411 = &l_395;
                int *l_412 = &l_395;
                int *l_413 = &l_384;
                int *l_414 = &l_381;
                int *l_416 = &l_401;
                int *l_417 = &l_381;
                int *l_418 = &l_382;
                int *l_419 = (void*)0;
                int l_420 = (-2L);
                int *l_421 = &g_279;
                int *l_422 = &g_174.f0;
                int *l_423 = &g_208;
                int *l_424 = &l_382;
                int *l_425 = &l_395;
                int *l_426 = (void*)0;
                int *l_427 = &l_395;
                int *l_428 = &g_174.f0;
                int *l_429 = &l_384;
                int *l_430 = (void*)0;
                int *l_431 = (void*)0;
                int *l_432 = &l_401;
                int *l_433 = &l_382;
                int *l_434 = &l_384;
                int l_435 = 4L;
                int *l_436 = (void*)0;
                int *l_437 = &g_279;
                int *l_438 = &l_401;
                int *l_439 = &g_279;
                int *l_440 = (void*)0;
                int *l_441 = &l_415;
                int *l_442 = &g_279;
                int *l_443 = &l_395;
                int *l_444 = (void*)0;
                int *l_445 = &l_382;
                int *l_446 = &l_435;
                int *l_447 = &g_279;
                int *l_448 = &l_381;
                int *l_449 = &l_415;
                int *l_450 = &l_383;
                int *l_451 = &l_415;
                int *l_452 = (void*)0;
                int *l_453 = &l_401;
                int *l_454 = &l_382;
                int *l_455 = &g_208;
                int *l_456 = (void*)0;
                int *l_457 = (void*)0;
                int *l_458 = &l_381;
                int *l_459 = &l_395;
                int *l_460 = &l_395;
                int *l_462 = &l_382;
                g_463++;
            }
            if ((+l_379))
            {
                int l_479 = (-1L);
                int l_492 = 1L;
                int *l_579 = &g_279;
                if (((p_79 || l_380) , l_381))
                {
                    int *l_469 = &l_381;
                    (*l_469) = (safe_sub_func_uint8_t_u_u(g_64.f2, ((void*)0 == l_468)));
                }
                else
                {
                    int l_470 = (-1L);
                    int **l_576 = &g_325;
                    if (((1UL | ((void*)0 == (*g_315))) || 0x0F06L))
                    {
                        l_470 ^= l_380;
                        l_415 = (g_279 || l_384);
                    }
                    else
                    {
                        short l_471 = (-6L);
                        int *l_472 = &l_461;
                        int l_473 = (-3L);
                        int *l_474 = &l_382;
                        int *l_475 = &g_208;
                        int *l_476 = &l_470;
                        int *l_477 = &l_382;
                        int *l_478 = &l_383;
                        int *l_480 = &l_384;
                        int *l_481 = (void*)0;
                        int *l_482 = &l_473;
                        int *l_483 = &l_470;
                        int *l_484 = &l_384;
                        int *l_485 = &l_461;
                        int *l_486 = &l_383;
                        int *l_487 = &l_381;
                        int *l_488 = &l_473;
                        int *l_489 = &l_395;
                        int *l_490 = &l_384;
                        int *l_491 = &g_279;
                        int *l_493 = &g_174.f0;
                        int *l_494 = &l_473;
                        int *l_495 = &l_470;
                        int *l_496 = &l_401;
                        int *l_497 = (void*)0;
                        int *l_498 = &l_383;
                        int *l_499 = &g_208;
                        int *l_500 = &l_382;
                        int *l_501 = &l_473;
                        int *l_502 = &l_473;
                        int *l_503 = &l_395;
                        int *l_504 = (void*)0;
                        int *l_505 = &l_395;
                        int *l_506 = &g_279;
                        int *l_507 = &l_461;
                        int *l_508 = &l_382;
                        int l_509 = 0x363157A5L;
                        int *l_510 = (void*)0;
                        int *l_511 = (void*)0;
                        int *l_512 = &l_382;
                        int *l_513 = (void*)0;
                        int *l_514 = (void*)0;
                        int *l_515 = &l_384;
                        int l_516 = 0x85176C9AL;
                        int *l_517 = &l_382;
                        int *l_518 = &l_383;
                        int *l_519 = &l_473;
                        int *l_520 = &l_395;
                        int *l_521 = &l_509;
                        int *l_522 = &l_401;
                        int *l_523 = &l_383;
                        int *l_524 = &l_384;
                        int *l_525 = &l_473;
                        int *l_526 = (void*)0;
                        int *l_527 = &l_384;
                        int *l_528 = (void*)0;
                        int *l_529 = (void*)0;
                        int *l_530 = &l_395;
                        int *l_531 = &l_381;
                        int *l_532 = &l_384;
                        int *l_533 = &l_381;
                        int *l_534 = &l_395;
                        int l_535 = 0x0EDA4B80L;
                        int *l_536 = &l_401;
                        int *l_537 = &l_492;
                        int *l_538 = (void*)0;
                        int *l_539 = &l_535;
                        int *l_540 = &l_381;
                        int *l_541 = (void*)0;
                        int *l_542 = &l_470;
                        int *l_543 = &l_492;
                        int *l_544 = (void*)0;
                        int *l_545 = (void*)0;
                        int *l_546 = &l_461;
                        int *l_547 = &l_401;
                        int *l_548 = &l_401;
                        int *l_549 = &l_461;
                        int *l_550 = &l_473;
                        int *l_551 = (void*)0;
                        int *l_552 = &l_384;
                        int *l_553 = &g_279;
                        int l_555 = 0xC6B06F44L;
                        int *l_556 = (void*)0;
                        int *l_557 = &l_555;
                        int *l_558 = &l_381;
                        int *l_559 = &g_279;
                        int *l_560 = (void*)0;
                        int *l_562 = &l_470;
                        int *l_563 = &l_535;
                        int *l_564 = (void*)0;
                        int *l_565 = &l_554;
                        int *l_566 = (void*)0;
                        int *l_567 = &l_461;
                        int *l_568 = &l_383;
                        int *l_569 = (void*)0;
                        int *l_570 = &l_401;
                        int *l_571 = &l_382;
                        int *l_572 = &g_279;
                        (*g_324) = (((+l_381) < g_463) , p_80);
                        ++g_573;
                        if ((*p_78))
                            break;
                    }
                    (*g_323) = l_576;
                }
                (*l_579) = (l_577 == l_578);
                (*l_579) ^= (-10L);
            }
            else
            {
                int *l_580 = &l_384;
                int *l_581 = &l_383;
                int *l_582 = &g_174.f0;
                int *l_583 = (void*)0;
                int *l_584 = &l_554;
                int *l_585 = &l_395;
                int *l_586 = &l_384;
                int *l_587 = (void*)0;
                int *l_588 = &l_383;
                int *l_589 = &l_383;
                int *l_590 = &l_401;
                int *l_591 = &l_415;
                int *l_592 = &l_395;
                int *l_593 = &l_381;
                int *l_594 = (void*)0;
                int *l_595 = &l_415;
                int *l_596 = &l_395;
                int *l_597 = (void*)0;
                int *l_598 = &l_415;
                int *l_599 = &l_461;
                int *l_600 = &l_384;
                int l_601 = (-1L);
                int *l_602 = &g_279;
                int *l_603 = &l_383;
                int *l_604 = (void*)0;
                int *l_605 = (void*)0;
                int *l_606 = &l_461;
                int l_607 = 0x4AFBBC11L;
                int *l_608 = (void*)0;
                int *l_609 = &g_208;
                int *l_610 = &l_461;
                int *l_611 = &l_383;
                int *l_612 = (void*)0;
                int *l_613 = (void*)0;
                int *l_614 = (void*)0;
                int *l_615 = &l_401;
                int *l_616 = &g_208;
                int *l_617 = &l_381;
                int *l_618 = &l_395;
                int *l_619 = (void*)0;
                int *l_620 = &l_607;
                int *l_622 = &l_415;
                int *l_623 = &l_554;
                int *l_624 = &l_415;
                int *l_625 = (void*)0;
                int *l_626 = &l_554;
                int *l_627 = &l_395;
                int *l_628 = &g_279;
                int *l_629 = (void*)0;
                int *l_630 = &g_279;
                int *l_631 = &l_381;
                int *l_632 = &g_174.f0;
                int *l_633 = &l_601;
                int *l_634 = &l_415;
                int *l_635 = &l_383;
                int *l_636 = &l_601;
                int *l_637 = &l_395;
                int *l_638 = &l_607;
                int *l_639 = &l_401;
                int *l_640 = &g_208;
                int *l_641 = &l_554;
                int *l_642 = (void*)0;
                int *l_643 = &g_208;
                int *l_644 = &l_395;
                int *l_645 = &l_382;
                int *l_648 = &l_554;
                int *l_649 = &l_607;
                int *l_650 = (void*)0;
                int *l_651 = (void*)0;
                int *l_652 = &l_554;
                int *l_653 = (void*)0;
                int *l_654 = &l_621;
                int *l_655 = &g_279;
                int *l_656 = &l_382;
                int *l_657 = &l_646;
                int *l_658 = &l_384;
                int *l_659 = &l_401;
                int l_660 = 1L;
                int *l_661 = &l_384;
                int *l_662 = (void*)0;
                int l_663 = 4L;
                int *l_664 = &l_461;
                int *l_665 = &l_382;
                int *l_666 = &g_174.f0;
                int *l_667 = &l_647;
                int *l_668 = (void*)0;
                int *l_669 = &g_279;
                int *l_670 = &l_554;
                int *l_671 = (void*)0;
                int *l_672 = &l_382;
                int *l_673 = &l_415;
                int *l_674 = &l_607;
                int *l_675 = &g_174.f0;
                (**g_323) = p_82;
                if ((***g_323))
                    continue;
                ++g_676;
                --l_679;
            }
        }
        for (l_646 = 0; (l_646 != (-12)); l_646 = safe_sub_func_int8_t_s_s(l_646, 2))
        {
            for (l_621 = 0; (l_621 >= 23); l_621 = safe_add_func_int32_t_s_s(l_621, 1))
            {
                (*p_78) = (-1L);
            }
        }
        g_686 = l_577;
    }
    l_578 = (void*)0;
    p_80 = p_78;
    return (*g_315);
}







static int * func_83(struct S0 * p_84, int p_85, struct S0 * p_86, struct S0 * p_87)
{
    int *l_88 = &g_89;
    int *l_90 = (void*)0;
    int *l_91 = &g_89;
    int l_92 = 0x81B93497L;
    int l_93 = 0xF9E1C210L;
    int *l_94 = &g_89;
    int *l_95 = &l_92;
    int *l_96 = (void*)0;
    int *l_97 = &l_92;
    int *l_98 = &g_89;
    int *l_99 = (void*)0;
    int *l_100 = &l_93;
    int *l_101 = &l_92;
    int *l_102 = &g_89;
    int *l_103 = &g_89;
    int *l_104 = &l_93;
    int *l_105 = &l_92;
    int *l_106 = &l_93;
    int *l_107 = &g_89;
    int *l_108 = &l_93;
    int *l_109 = &g_89;
    int *l_110 = &g_89;
    int *l_111 = &l_93;
    int *l_112 = &l_93;
    int *l_113 = &l_93;
    int *l_114 = (void*)0;
    int *l_115 = &l_92;
    int *l_116 = &l_92;
    int *l_117 = (void*)0;
    int *l_118 = (void*)0;
    int *l_119 = &l_92;
    int *l_120 = &l_93;
    int l_121 = (-3L);
    int l_122 = 0x1BB39D90L;
    int *l_123 = &l_121;
    int *l_124 = &l_122;
    int *l_125 = &l_121;
    int *l_126 = &l_121;
    int *l_127 = &l_93;
    int *l_128 = &l_122;
    int *l_129 = &g_89;
    int l_130 = 0L;
    int *l_131 = &l_121;
    int *l_132 = &l_121;
    int *l_133 = &l_92;
    struct S0 *l_151 = (void*)0;
    union U1 *l_220 = (void*)0;
    struct S0 ***l_334 = &g_315;
    char l_350 = 0xC2L;
    int l_358 = 9L;
    unsigned short l_359 = 0x39C1L;
    int *l_362 = &g_89;
    g_134--;
    if ((safe_add_func_int8_t_s_s((func_139((p_85 , g_64.f0), ((func_144(&g_64, (g_50 , (safe_lshift_func_uint8_t_u_u(p_85, p_85))), l_151, (((((safe_add_func_uint16_t_u_u((*l_116), g_89)) && 0x530E041BL) < (*l_125)) & (-3L)) | 0x34FEB13CL)) , p_87) != p_86), g_64, &g_64) , g_64.f4), (*l_108))))
    {
        char l_156 = 9L;
        int l_157 = 0L;
        int l_205 = 1L;
        unsigned l_318 = 0xF9EE3258L;
        if (l_156)
        {
            unsigned l_172 = 0xBABBD54EL;
            union U1 **l_200 = &g_173;
            union U1 ***l_199 = &l_200;
            struct S0 l_203 = {2729,0UL,6,46,259,2036,-61,-0};
            int *l_206 = &g_174.f0;
            short l_207 = 0x814EL;
            int **l_212 = &l_107;
            if ((l_157 < p_85))
            {
                unsigned l_158 = 2UL;
                int **l_197 = &l_128;
                union U1 l_204 = {0xA52E2A0AL};
                if (l_158)
                {
                    union U1 **l_175 = (void*)0;
                    union U1 **l_176 = &g_173;
                    int l_181 = 0xD0BAEE16L;
                    unsigned short l_184 = 1UL;
                    if (g_64.f6)
                    {
                        int **l_164 = &l_91;
                        (*l_88) = p_85;
                        (*l_132) = (safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_64.f1, (0x38L == g_64.f5))), (safe_unary_minus_func_uint8_t_u(g_64.f0))));
                        (*l_164) = &g_5;
                        return &g_89;
                    }
                    else
                    {
                        const int **l_168 = (void*)0;
                        int **l_169 = &l_103;
                        int ***l_170 = (void*)0;
                        int ***l_171 = &l_169;
                        g_165++;
                        (*l_169) = (void*)0;
                        (*l_171) = &l_117;
                        (*l_116) |= l_172;
                    }
                    (*l_176) = g_173;
                    (*l_94) = (safe_div_func_int8_t_s_s((l_158 , (safe_rshift_func_uint8_t_u_s(l_181, 2))), (safe_rshift_func_uint8_t_u_u((l_184 >= 0L), 1))));
                }
                else
                {
                    union U1 **l_186 = &g_173;
                    union U1 ***l_185 = &l_186;
                    (*l_105) |= 3L;
                    (*l_111) = g_50;
                    (*l_185) = &g_173;
                    (*l_123) &= (g_36 <= (safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(0x96L, (safe_rshift_func_uint8_t_u_s(p_85, 2)))), l_156)));
                }
                (*l_131) ^= (((safe_lshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((l_197 == ((((g_198 == l_199) , (safe_sub_func_uint32_t_u_u((0x22L > g_36), (l_203 , (1UL > (l_203.f4 , (((l_204 , (void*)0) == (void*)0) , p_85))))))) , l_205) , l_197)) >= p_85), 1L)) >= 0xE7L), 1)) == (*l_88)) == p_85);
                (*l_197) = l_206;
                (*l_108) &= ((((l_157 & g_64.f5) > (p_85 >= p_85)) != (*l_129)) > (*l_110));
            }
            else
            {
                (*l_109) ^= (g_134 >= p_85);
                p_85 = g_50;
            }
            (*l_120) = 0xE0C72D92L;
            ++g_209;
            (*l_212) = &g_208;
        }
        else
        {
            int **l_213 = &l_106;
            union U1 **l_221 = &g_173;
            int l_235 = 0xD8E9D5C4L;
            int l_257 = (-8L);
            int l_285 = (-8L);
            int l_292 = 0x2AC20AD1L;
            (*l_213) = &l_157;
            (*l_102) = (p_85 ^ (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(0UL, (safe_sub_func_int8_t_s_s(((void*)0 != l_220), p_85)))), l_156)));
            (*l_221) = l_220;
            if ((safe_rshift_func_int8_t_s_u(((g_64.f5 < (!((0xC5L | (safe_unary_minus_func_int32_t_s(g_64.f2))) || ((p_85 == (**l_213)) || g_30)))) ^ (**l_213)), 3)))
            {
                union U1 l_227 = {0L};
                int l_245 = 0L;
                int l_297 = 0x27E3E6D3L;
                (*l_101) |= g_30;
                for (l_157 = 0; (l_157 >= (-26)); l_157--)
                {
                    (*l_129) &= (l_227 , (-1L));
                }
                if ((func_144(&g_64, l_227.f0, l_151, l_205) , 0L))
                {
                    short l_237 = 0x38A7L;
                    int l_250 = (-1L);
                    int l_267 = 0x3769B55EL;
                    if ((*l_116))
                    {
                        struct S0 *l_234 = &g_64;
                        int l_236 = (-6L);
                        int *l_239 = (void*)0;
                        int *l_240 = &l_130;
                        int *l_241 = &l_157;
                        int *l_242 = &l_121;
                        int *l_243 = &l_121;
                        int *l_244 = &l_93;
                        int *l_246 = &l_157;
                        int *l_247 = &l_157;
                        int *l_248 = &l_130;
                        int *l_249 = &l_235;
                        int *l_251 = &g_174.f0;
                        int *l_252 = (void*)0;
                        int *l_253 = (void*)0;
                        int *l_254 = &l_92;
                        int *l_255 = &l_245;
                        int *l_256 = &l_235;
                        int *l_258 = (void*)0;
                        int *l_259 = &g_208;
                        int *l_260 = &l_122;
                        int *l_261 = &g_174.f0;
                        int *l_262 = &l_157;
                        int *l_263 = &l_227.f0;
                        int *l_264 = &l_236;
                        int *l_265 = &l_227.f0;
                        int *l_266 = &l_157;
                        int *l_268 = &l_121;
                        int *l_269 = &l_250;
                        int *l_270 = (void*)0;
                        int *l_271 = &l_130;
                        int l_272 = 0L;
                        int *l_273 = &l_93;
                        int *l_274 = (void*)0;
                        int *l_275 = &l_157;
                        int *l_276 = (void*)0;
                        int *l_277 = &l_130;
                        int *l_278 = &g_174.f0;
                        int *l_280 = &l_235;
                        int *l_281 = &l_250;
                        int *l_282 = &g_279;
                        int *l_283 = (void*)0;
                        int *l_284 = &g_89;
                        int *l_286 = &l_235;
                        int *l_287 = &l_285;
                        int *l_288 = (void*)0;
                        int *l_289 = (void*)0;
                        int *l_290 = &l_250;
                        int *l_291 = &l_267;
                        int *l_293 = &g_208;
                        (*l_109) = (safe_mod_func_uint8_t_u_u(9UL, (((p_85 && l_205) , p_85) && (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(l_227.f0, 1)), (func_144((p_85 , (void*)0), g_89, l_234, p_85) , g_64.f4))))));
                        --g_294;
                        (*l_104) &= (&g_174 == (void*)0);
                        --g_298;
                    }
                    else
                    {
                        short l_301 = 7L;
                        struct S0 *l_306 = &g_64;
                        l_297 = (l_301 && (4294967295UL >= (g_36 == (safe_mod_func_uint32_t_u_u(p_85, (((safe_add_func_int32_t_s_s(l_156, ((&g_64 == l_306) || (p_85 <= g_64.f5)))) , l_237) , p_85))))));
                    }
                    for (g_36 = 2; (g_36 < 24); ++g_36)
                    {
                        unsigned char l_313 = 255UL;
                        unsigned l_314 = 0x46092D1FL;
                        (*l_102) ^= (safe_div_func_int8_t_s_s((p_85 >= l_297), (((safe_lshift_func_uint16_t_u_u((g_64.f0 <= g_294), l_313)) && 0xAEL) && l_314)));
                        if (g_174.f0)
                            break;
                    }
                }
                else
                {
                    struct S0 ***l_317 = &g_315;
                    (*l_133) = g_64.f5;
                    (*l_317) = (g_50 , g_315);
                }
                (*l_124) ^= (*l_127);
            }
            else
            {
                unsigned short l_321 = 65534UL;
                (*l_132) &= g_238;
                if ((**l_213))
                {
                    short l_322 = 0xD303L;
                    (*l_213) = (l_318 , (*l_213));
                    for (g_174.f0 = 0; (g_174.f0 == 23); g_174.f0++)
                    {
                        return &g_89;
                    }
                    g_208 |= l_321;
                    (*l_88) ^= l_322;
                }
                else
                {
                    union U1 ***l_328 = &l_221;
                    (*l_105) = (((void*)0 != g_323) >= (safe_rshift_func_int16_t_s_u(l_321, 8)));
                    (*l_328) = &l_220;
                    (**g_323) = (**g_323);
                }
                g_329 = l_221;
            }
        }
        (*l_97) &= (((p_85 || (safe_add_func_int32_t_s_s((&l_220 != &l_220), l_318))) , ((((safe_rshift_func_int16_t_s_s(0x174AL, 0)) <= (*l_107)) & l_205) , &g_315)) != (void*)0);
        (*g_324) = &l_122;
    }
    else
    {
        struct S0 * const *l_336 = &l_151;
        struct S0 * const **l_335 = &l_336;
        int l_343 = 0x6BC8FAACL;
        const struct S0 *** const l_344 = (void*)0;
        unsigned l_351 = 1UL;
        union U1 **l_354 = &g_173;
        (*l_109) ^= (p_85 != (*l_100));
        if (((((l_334 == (g_165 , l_335)) == ((safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s(0x0347L, p_85)) | (((&g_316 == (void*)0) , ((safe_rshift_func_int16_t_s_s((l_343 || (0x349FBC64L ^ 4294967293UL)), 5)) , 0x0AL)) & 0x6EL)), 3)) == g_64.f5)) , p_85) | l_343))
        {
            (***g_323) &= l_343;
        }
        else
        {
            short l_348 = 1L;
            int l_349 = 0x4CAE694BL;
            if ((g_64.f2 ^ (l_344 != l_334)))
            {
                int *l_347 = &l_93;
                for (p_85 = 0; (p_85 >= 4); p_85 = safe_add_func_uint32_t_u_u(p_85, 3))
                {
                    union U1 ***l_355 = (void*)0;
                    union U1 ***l_356 = (void*)0;
                    union U1 ***l_357 = &g_329;
                    (*g_324) = l_347;
                    ++l_351;
                    if (p_85)
                        continue;
                    (*l_357) = l_354;
                }
            }
            else
            {
                (*l_115) &= 0xB989850AL;
                (*g_324) = (**g_323);
            }
        }
    }
    p_85 = (*l_97);
    l_359++;
    return l_362;
}







static struct S0 func_139(char p_140, short p_141, struct S0 p_142, const struct S0 * const p_143)
{
    return (*p_143);
}







static struct S0 func_144(struct S0 * p_145, unsigned p_146, struct S0 * p_147, int p_148)
{
    unsigned l_154 = 3UL;
    struct S0 l_155 = {2210,1UL,1,305,172,4182,-131,-0};
    l_154 = p_146;
    return l_155;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
    transparent_crc(g_64.f4, "g_64.f4", print_hash_value);
    transparent_crc(g_64.f5, "g_64.f5", print_hash_value);
    transparent_crc(g_64.f6, "g_64.f6", print_hash_value);
    transparent_crc(g_64.f7, "g_64.f7", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_174.f0, "g_174.f0", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_787, "g_787", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
