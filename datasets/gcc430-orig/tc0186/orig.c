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


union U0 {
   unsigned f0;
   unsigned f1;
   unsigned short f2;
   unsigned char f3;
   unsigned f4;
};


static char g_12[3][1][10] = {{{0xCEL,(-1L),(-1L),0xCEL,(-1L),0xACL,(-1L),0xCEL,(-1L),(-1L)}},{{(-1L),(-1L),(-2L),0L,0L,(-2L),(-1L),(-1L),(-1L),(-2L)}},{{0xACL,0xCEL,0L,0xCEL,0xACL,(-2L),(-2L),0xACL,0xCEL,0L}}};
static union U0 g_46 = {4294967292UL};
static int g_49 = 0x2966B911L;
static int g_79 = 0L;
static int g_82 = 0x58A82D85L;
static const int *g_88 = (void*)0;
static const int **g_107 = (void*)0;
static char g_160[6] = {8L,8L,8L,8L,8L,8L};
static int *g_273 = &g_49;
static union U0 *g_276 = (void*)0;
static char g_370[6][8] = {{8L,0L,0L,8L,(-1L),0x38L,0x38L,(-1L)},{8L,0L,0L,8L,(-1L),0x38L,0x38L,(-1L)},{8L,0L,0L,8L,(-1L),0x38L,0x38L,(-1L)},{8L,0L,0L,8L,(-1L),0x38L,0x38L,(-1L)},{8L,0L,0L,8L,(-1L),0x38L,0x38L,(-1L)},{8L,0L,0L,8L,(-1L),0x38L,0x38L,(-1L)}};
static union U0 * const *g_413 = &g_276;
static union U0 g_534 = {4294967291UL};
static unsigned g_615[3] = {4294967291UL,4294967291UL,4294967291UL};
static int *g_668 = &g_49;
static const int *g_830 = &g_82;
static char g_975 = 0L;
static const int *g_991 = &g_79;



static short func_1(void);
static int func_4(unsigned short p_5, unsigned p_6, int p_7, unsigned char p_8, unsigned short p_9);
static char func_14(unsigned short p_15, union U0 p_16, short p_17, short p_18);
static char func_27(short p_28, unsigned char p_29, unsigned short p_30, const char p_31, int p_32);
static short func_33(unsigned char p_34, unsigned char p_35, const unsigned p_36, const int p_37, short p_38);
static int * func_39(char p_40, union U0 p_41, union U0 p_42, unsigned p_43, union U0 p_44);
static int * func_50(unsigned p_51, unsigned char p_52, int p_53, int * p_54);
static union U0 func_55(int * p_56, unsigned short p_57, int * p_58);
static int * func_59(int * p_60);
static int * func_61(int * p_62, short p_63, int * p_64, int * p_65);
static short func_1(void)
{
    short l_13[1];
    int l_773 = 0x8782D809L;
    union U0 l_796 = {0xAAF2AFC7L};
    unsigned short l_997 = 0x14C6L;
    int *l_1005 = &g_82;
    union U0 **l_1007 = &g_276;
    union U0 ***l_1006 = &l_1007;
    int l_1018[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int **l_1019 = &l_1005;
    unsigned l_1022 = 0x9D0FDC75L;
    int i;
    for (i = 0; i < 1; i++)
        l_13[i] = 0xA5DEL;
    (*l_1005) = (safe_add_func_int32_t_s_s(func_4((((safe_lshift_func_uint8_t_u_s(g_12[2][0][6], 1)) & ((l_13[0] && ((func_14((safe_add_func_int8_t_s_s(0x24L, ((((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((func_27(((((func_33(g_12[0][0][3], l_13[0], l_13[0], g_12[2][0][6], g_12[2][0][6]) , l_13[0]) , g_370[1][3]) == l_13[0]) && g_615[0]), l_13[0], l_13[0], l_13[0], l_773) && (-1L)), 0xF0L)), 7L)), 1UL)) && g_49) > g_615[2]) != g_615[0]))), l_796, l_773, g_12[1][0][7]) == l_796.f3) <= l_997)) >= l_773)) | 1L), l_13[0], l_796.f0, g_615[0], l_13[0]), g_370[2][0]));
    (*l_1019) = l_1005;
    (*l_1005) = (*l_1005);
    return (**l_1019);
}







static int func_4(unsigned short p_5, unsigned p_6, int p_7, unsigned char p_8, unsigned short p_9)
{
    int **l_998 = (void*)0;
    int l_1001 = (-4L);
    int *l_1004[3];
    int i;
    for (i = 0; i < 3; i++)
        l_1004[i] = &g_79;
    g_82 = ((((l_998 != l_998) & g_82) <= ((255UL < g_975) == (safe_rshift_func_int16_t_s_s(l_1001, (0UL <= (safe_sub_func_uint16_t_u_u((g_615[0] == 0x4771A4EDL), g_12[2][0][1]))))))) | (-8L));
    g_79 = (*g_830);
    return p_5;
}







static char func_14(unsigned short p_15, union U0 p_16, short p_17, short p_18)
{
    char l_823 = (-1L);
    unsigned short l_826 = 0xE0C9L;
    union U0 *l_857 = &g_46;
    char l_861 = (-1L);
    int ***l_862 = (void*)0;
    unsigned short l_871 = 65527UL;
    int *l_872 = &g_79;
    unsigned short l_959[4][10][6] = {{{0x2094L,65535UL,65533UL,0x74AFL,0xF6B1L,0x0D67L},{5UL,65535UL,0x8CD2L,65533UL,1UL,1UL},{0x8567L,0xCA48L,0xE17FL,5UL,0xD835L,8UL},{65530UL,0x58B6L,65532UL,0x0D67L,0xBFF4L,0xBBF2L},{0xE17FL,0x4326L,1UL,1UL,0x4326L,0xE17FL},{65533UL,0xFA19L,65535UL,0xF440L,0UL,9UL},{9UL,0x17CAL,65531UL,0UL,0x7661L,0x486AL},{9UL,1UL,0UL,0xF440L,2UL,0x2094L},{0x69CDL,0x17CAL,0UL,0x8CD2L,0x4B0BL,0xE17FL},{0x486AL,0xD835L,0x094AL,6UL,65535UL,0x69CDL}},{{0x8484L,65533UL,0x74AFL,0xF440L,0xD835L,1UL},{0x2094L,0UL,0x8484L,0x69CDL,65535UL,8UL},{0xF440L,65530UL,0x8567L,0xBBF2L,1UL,9UL},{65535UL,65530UL,6UL,65532UL,65535UL,0x2094L},{0xC5E8L,0UL,0xBBF2L,65528UL,0xD835L,0xD410L},{0x8567L,65533UL,65535UL,0xE17FL,65535UL,65528UL},{65531UL,0xD835L,1UL,1UL,0x4B0BL,1UL},{1UL,0x17CAL,0x5A43L,0xE50CL,1UL,1UL},{0xE17FL,0xBFF4L,0xF440L,0xD66CL,0xFD43L,0x5A43L},{5UL,0x59E7L,0xF440L,0x8567L,0x17CAL,1UL}},{{0xC710L,0xF6B1L,0x5A43L,65531UL,0UL,1UL},{65531UL,0UL,1UL,65533UL,3UL,65528UL},{0x8CD2L,0x8844L,65535UL,0xD410L,0xFA19L,0xD410L},{0xBBF2L,65535UL,0xBBF2L,8UL,0x00C7L,0x2094L},{65532UL,1UL,0xCA90L,0x0EC1L,65535UL,1UL},{1UL,0x094AL,2UL,0x0EC1L,0xF440L,0UL},{65532UL,0x8567L,65535UL,0UL,0x2094L,0x3663L},{0xC608L,65532UL,0UL,7UL,0x8484L,0x9CB8L},{0x2046L,0xC5E8L,1UL,0x1B45L,0x486AL,65527UL},{0x72E2L,65526UL,0xCD61L,0x72E2L,0x69CDL,0x0EC1L}},{{1UL,0xD410L,65533UL,2UL,7UL,0UL},{9UL,0xD66CL,1UL,65532UL,7UL,0xB235L},{65527UL,0xD410L,0x6685L,0x70C0L,0x69CDL,0xA662L},{1UL,65526UL,0x2046L,3UL,0x486AL,2UL},{0xB235L,0xC5E8L,7UL,65527UL,0x8484L,0xCD61L},{2UL,65532UL,0xA662L,0xCE4AL,0x2094L,0x72E2L},{7UL,0x8567L,3UL,0xA638L,0xF440L,0xCA90L},{0x0EC1L,0x094AL,0x9CB8L,0xC608L,65535UL,0xCA90L},{65530UL,1UL,3UL,0x9CB8L,0xC5E8L,0x72E2L},{65527UL,7UL,0xA662L,65530UL,0x8567L,65533UL}}};
    const unsigned char l_967 = 0UL;
    union U0 **l_978 = &g_276;
    union U0 ***l_977 = &l_978;
    int *l_979 = &g_79;
    int i, j, k;
    for (p_16.f4 = 22; (p_16.f4 != 46); p_16.f4 = safe_add_func_uint16_t_u_u(p_16.f4, 8))
    {
        int l_822 = 0x83E17523L;
        union U0 l_824 = {0xE7C14C12L};
        int *l_825 = &g_82;
        unsigned l_849 = 0xB0B22F86L;
        int * const *l_855 = &g_668;
        int * const **l_854 = &l_855;
        unsigned l_856[6][7] = {{0x704D6F96L,1UL,0x704D6F96L,0xADDF0587L,0xC92AD874L,0x9DA00A47L,4294967291UL},{4294967292UL,4294967295UL,0x155900D3L,0x155900D3L,4294967295UL,4294967292UL,4294967295UL},{0x704D6F96L,0xADDF0587L,0xC92AD874L,0x9DA00A47L,4294967291UL,0x9DA00A47L,0xC92AD874L},{0UL,0UL,4294967292UL,0x155900D3L,4294967292UL,0UL,0UL},{0xA5295EB4L,0xADDF0587L,0xB315FEFBL,0xADDF0587L,0xA5295EB4L,5UL,0xC92AD874L},{0x8FB47686L,4294967295UL,0x8FB47686L,4294967292UL,4294967292UL,0x8FB47686L,4294967295UL}};
        int i, j;
        (*l_825) = (safe_sub_func_uint8_t_u_u(l_824.f4, g_82));
        if ((l_826 > l_826))
        {
            unsigned char l_833 = 0x51L;
            if (p_16.f3)
            {
                int **l_827[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_827[i] = &g_273;
                g_273 = &l_822;
                (*l_825) = ((g_615[1] , 0x232CL) == l_823);
            }
            else
            {
                for (g_46.f3 = 0; (g_46.f3 < 16); ++g_46.f3)
                {
                    const int **l_831 = (void*)0;
                    const int **l_832 = &g_88;
                    int *l_842 = &g_79;
                    (*l_832) = g_830;
                    (*l_825) = (l_833 || (safe_lshift_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((p_16 , 0xE8L), (func_55(l_842, (safe_lshift_func_uint16_t_u_u((((*g_830) ^ (*l_825)) < p_16.f4), (safe_add_func_uint32_t_u_u(0x94B2B8AFL, (safe_sub_func_int8_t_s_s(p_15, 0x0DL)))))), &g_82) , l_849))), 6)) < 0xF22DL), p_18)) | 0x42AEC042L) , 0xDFL), g_534.f3)));
                }
                if (l_833)
                    break;
            }
            l_857 = ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(p_17, 7)), p_17)) , &p_16);
        }
        else
        {
            char l_858 = 0xBFL;
            return l_858;
        }
    }
    (*l_872) = p_16.f4;
    if (((safe_add_func_int16_t_s_s((*l_872), (l_872 != &g_79))) , (g_49 == (p_18 , (0x063C52C6L >= ((p_18 , &l_872) == (void*)0))))))
    {
        unsigned short l_886 = 65533UL;
        int *l_887 = &g_82;
        union U0 **l_902 = &l_857;
        union U0 ***l_901 = &l_902;
        const unsigned l_909 = 4294967292UL;
        int *l_931 = (void*)0;
        int ***l_942 = (void*)0;
        unsigned char l_956 = 255UL;
        unsigned l_973[10][8][3] = {{{0xD9C31A15L,0xD9C31A15L,0x40B3BB7BL},{0xD9C31A15L,0x6FA03047L,0UL},{0UL,0UL,0xE10E536FL},{0UL,0x9DA35C39L,0UL},{5UL,0UL,0xE10E536FL},{0x781593C6L,0x2EE4E260L,0UL},{0x40B3BB7BL,0x17781B56L,0x40B3BB7BL},{0xA5121F21L,0x17781B56L,4UL}},{{4UL,0x2EE4E260L,0x9DA35C39L},{0x17781B56L,0UL,0xD9C31A15L},{0xD0D79337L,0x9DA35C39L,1UL},{0x17781B56L,0UL,0xD26CCB69L},{4UL,0x6FA03047L,0x6FA03047L},{0xA5121F21L,0xD9C31A15L,0x6FA03047L},{0x40B3BB7BL,0xD0D79337L,0xD26CCB69L},{0x781593C6L,0x40B3BB7BL,1UL}},{{5UL,4294967293UL,0xD9C31A15L},{0UL,0xD0D79337L,0x40B3BB7BL},{4294967289UL,0x2EE4E260L,0UL},{0xE10E536FL,0xE10E536FL,0xD0D79337L},{0xE10E536FL,4294967293UL,0xD26CCB69L},{4294967289UL,0xD9C31A15L,0UL},{0xD26CCB69L,0x40B3BB7BL,4294967289UL},{0x17781B56L,4294967289UL,0UL}},{{0xA5121F21L,0x781593C6L,0xD26CCB69L},{0xD0D79337L,4UL,0xD0D79337L},{0x6FA03047L,4UL,0UL},{0UL,0x781593C6L,0x40B3BB7BL},{4UL,4294967289UL,0xE10E536FL},{0x2EE4E260L,0x40B3BB7BL,0UL},{4UL,0xD9C31A15L,5UL},{0UL,4294967293UL,4294967293UL}},{{0x6FA03047L,0xE10E536FL,4294967293UL},{0xD0D79337L,0x2EE4E260L,5UL},{0xA5121F21L,0xD0D79337L,0UL},{0x17781B56L,1UL,0xE10E536FL},{0xD26CCB69L,0xD0D79337L,0x40B3BB7BL},{4294967289UL,0x2EE4E260L,0UL},{0xE10E536FL,0xE10E536FL,0xD0D79337L},{0xE10E536FL,4294967293UL,0xD26CCB69L}},{{4294967289UL,0xD9C31A15L,0UL},{0xD26CCB69L,0x40B3BB7BL,4294967289UL},{0x17781B56L,4294967289UL,0UL},{0xA5121F21L,0x781593C6L,0xD26CCB69L},{0xD0D79337L,4UL,0xD0D79337L},{0x6FA03047L,4UL,0UL},{0UL,0x781593C6L,0x40B3BB7BL},{4UL,4294967289UL,0xE10E536FL}},{{0x2EE4E260L,0x40B3BB7BL,0UL},{4UL,0xD26CCB69L,0UL},{0x40B3BB7BL,0xD9C31A15L,0xD9C31A15L},{0UL,5UL,0xD9C31A15L},{0xA5121F21L,0x6FA03047L,0UL},{1UL,0xA5121F21L,0UL},{4294967289UL,0xE10E536FL,5UL},{4UL,0xA5121F21L,0x781593C6L}},{{0xD0D79337L,0x6FA03047L,0x40B3BB7BL},{5UL,5UL,0xA5121F21L},{5UL,0xD9C31A15L,4UL},{0xD0D79337L,0xD26CCB69L,0x17781B56L},{4UL,0x781593C6L,0xD0D79337L},{4294967289UL,0xD0D79337L,0x17781B56L},{1UL,4294967293UL,4UL},{0xA5121F21L,0x9DA35C39L,0xA5121F21L}},{{0UL,0x9DA35C39L,0x40B3BB7BL},{0x40B3BB7BL,4294967293UL,0x781593C6L},{0x9DA35C39L,0xD0D79337L,5UL},{0x6FA03047L,0x781593C6L,0UL},{0x9DA35C39L,0xD26CCB69L,0UL},{0x40B3BB7BL,0xD9C31A15L,0xD9C31A15L},{0UL,5UL,0xD9C31A15L},{0xA5121F21L,0x6FA03047L,0UL}},{{1UL,0xA5121F21L,0UL},{4294967289UL,0xE10E536FL,5UL},{4UL,0xA5121F21L,0x781593C6L},{0xD0D79337L,0x6FA03047L,0x40B3BB7BL},{5UL,5UL,0xA5121F21L},{5UL,0xD9C31A15L,4UL},{0xD0D79337L,0xD26CCB69L,0x17781B56L},{4UL,0x781593C6L,0xD0D79337L}}};
        int i, j, k;
        for (l_861 = 0; (l_861 >= 24); l_861++)
        {
            short l_880 = 0L;
            const union U0 *l_900 = &g_46;
            const union U0 **l_899 = &l_900;
            const union U0 ***l_898[8] = {&l_899,&l_899,&l_899,&l_899,&l_899,&l_899,&l_899,&l_899};
            unsigned short l_907[7] = {0x3C3DL,0UL,0UL,0x3C3DL,0UL,0UL,0x3C3DL};
            char l_908[6] = {0L,0L,0L,0L,0L,0L};
            short l_910 = 0x1D41L;
            int *l_920[2][1][3];
            union U0 l_929 = {4294967286UL};
            int **l_941 = (void*)0;
            int ***l_940 = &l_941;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_920[i][j][k] = &g_79;
                }
            }
            if ((safe_mod_func_uint16_t_u_u(g_534.f3, p_16.f2)))
            {
                return p_16.f3;
            }
            else
            {
                char l_879 = (-1L);
                l_879 = (*l_872);
                if (l_880)
                    continue;
                if (p_16.f2)
                    continue;
                for (g_534.f3 = 0; (g_534.f3 >= 42); g_534.f3++)
                {
                    int *l_883 = &g_79;
                    g_273 = l_883;
                    (*l_872) = (safe_div_func_uint8_t_u_u((l_886 , (p_16.f4 <= g_46.f3)), 0xE8L));
                }
            }
            l_887 = &g_79;
        }
        (*l_887) = ((((!p_17) , (safe_unary_minus_func_int16_t_s(0x6277L))) > 0xCAF4E8D8L) == (*l_887));
        if ((*l_872))
        {
            int l_960[7] = {0x0175A412L,(-7L),0x0175A412L,0x0175A412L,(-7L),0x0175A412L,0x0175A412L};
            int i;
            (*l_902) = ((g_49 & p_16.f3) , (void*)0);
        }
        else
        {
            (*l_887) = p_16.f1;
        }
        for (g_534.f0 = 0; (g_534.f0 > 57); g_534.f0++)
        {
            int l_976[3][1][6] = {{{(-4L),0xCC0E7645L,(-4L),0xF6748DD9L,0xF6748DD9L,(-4L)}},{{0x7965EFADL,0x7965EFADL,0xF6748DD9L,(-1L),0xF6748DD9L,0x7965EFADL}},{{0xF6748DD9L,0xCC0E7645L,(-1L),(-1L),0xCC0E7645L,0xF6748DD9L}}};
            int *l_980 = (void*)0;
            int i, j, k;
            for (l_871 = 1; (l_871 <= 5); l_871 += 1)
            {
                unsigned char l_974 = 0UL;
                union U0 l_985 = {0x9C0FA8FCL};
                int *l_987 = (void*)0;
                if ((safe_lshift_func_int16_t_s_s(0L, 14)))
                {
                    int l_972 = 0xB44C37CAL;
                    int **l_981 = &g_273;
                    for (p_17 = 0; (p_17 <= 2); p_17 += 1)
                    {
                        int i;
                        (*l_872) = ((((g_615[p_17] , ((safe_lshift_func_uint16_t_u_s(((g_160[l_871] || (g_534.f1 < l_967)) , ((((p_18 & (p_15 , (((((-1L) >= ((((safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(p_17, 0xBBL)) | p_15), 1L)) <= l_972) || (*l_872)) >= (-9L))) > g_534.f4) <= l_973[8][6][1]) & p_16.f2))) && g_79) < p_18) ^ 0x848008BDL)), p_17)) ^ l_974)) != g_975) && 2UL) >= p_16.f1);
                    }
                    (*l_872) = (((((p_16.f3 , (void*)0) == (l_976[0][0][1] , l_977)) < 0x2A814313L) | p_16.f3) , ((((l_976[0][0][1] , (l_976[0][0][1] && ((g_82 && p_18) != g_370[1][6]))) , 0x27FAB9B9L) < p_18) , (-8L)));
                    (*l_981) = &l_972;
                }
                else
                {
                    union U0 * const l_983 = &g_46;
                    int l_986 = 0x1F85DD8EL;
                    for (p_16.f0 = 0; (p_16.f0 <= 5); p_16.f0 += 1)
                    {
                        int *l_982 = (void*)0;
                        int *l_984 = &g_49;
                        int i;
                        l_986 = (l_982 == ((((void*)0 != l_983) , l_985) , (void*)0));
                        (*l_984) = (0x039AL >= (func_55(&l_986, ((((-7L) & ((((g_534.f4 , (p_16.f0 <= (*l_984))) != (g_534 , ((void*)0 != l_862))) , p_16.f3) <= p_16.f4)) < g_534.f2) , p_18), &g_79) , g_160[0]));
                    }
                }
                if (p_16.f1)
                    break;
                for (l_956 = 0; (l_956 <= 2); l_956 += 1)
                {
                    int **l_988 = &g_668;
                    (*l_988) = l_987;
                    (*l_887) = (((safe_mul_func_int8_t_s_s(g_46.f3, (g_991 != (void*)0))) <= (safe_mod_func_int16_t_s_s(g_12[2][0][6], (g_534.f0 , (safe_sub_func_uint16_t_u_u(((((g_615[2] , (*g_991)) & p_16.f3) > (p_16.f0 <= p_16.f2)) == (*g_830)), p_16.f2)))))) || (-1L));
                }
            }
        }
    }
    else
    {
        int **l_996 = &l_979;
        (*l_996) = &g_82;
    }
    return p_15;
}







static char func_27(short p_28, unsigned char p_29, unsigned short p_30, const char p_31, int p_32)
{
    short l_778 = 0xFDB7L;
    union U0 l_779 = {0UL};
    const unsigned l_782 = 0xB2F16A33L;
    int l_783 = (-1L);
    int l_784 = (-1L);
    union U0 **l_795 = &g_276;
    (*g_668) = ((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(8UL, l_778)), (&g_273 == (void*)0))) >= (((l_779 , (0x4EL == (safe_sub_func_uint16_t_u_u((0x7AL >= (l_784 & 4294967295UL)), 65535UL)))) != 0UL) ^ g_370[5][1]));
    for (g_46.f3 = 0; (g_46.f3 == 16); ++g_46.f3)
    {
        int ** const *l_791 = (void*)0;
        (*g_668) = l_782;
        for (g_534.f0 = 0; (g_534.f0 <= 5); g_534.f0 += 1)
        {
            int **l_793[7][6][3] = {{{&g_273,&g_273,&g_273},{(void*)0,&g_668,&g_668},{&g_273,(void*)0,&g_668},{&g_668,(void*)0,&g_668},{(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668}},{{&g_668,&g_273,&g_668},{&g_273,&g_668,&g_668},{&g_668,&g_668,&g_668},{&g_273,&g_668,&g_668},{&g_668,&g_668,&g_273},{&g_668,&g_273,(void*)0}},{{(void*)0,&g_668,&g_273},{&g_668,(void*)0,(void*)0},{&g_273,&g_273,&g_273},{(void*)0,&g_668,&g_668},{&g_273,(void*)0,&g_668},{&g_668,&g_668,&g_668}},{{&g_668,&g_273,&g_668},{&g_668,&g_273,&g_668},{(void*)0,&g_668,&g_668},{&g_668,&g_668,&g_668},{&g_668,&g_273,&g_273},{&g_668,&g_668,&g_668}},{{(void*)0,&g_273,&g_668},{&g_668,&g_668,&g_668},{&g_668,&g_273,&g_668},{&g_273,&g_668,&g_668},{&g_668,&g_668,&g_668},{&g_668,&g_273,&g_668}},{{&g_668,&g_273,&g_273},{&g_273,&g_668,&g_668},{&g_668,&g_273,&g_668},{&g_668,&g_273,&g_668},{&g_668,&g_668,&g_668},{&g_668,&g_668,&g_668}},{{(void*)0,&g_273,&g_273},{&g_668,&g_668,&g_668},{&g_668,&g_273,&g_668},{&g_668,&g_668,&g_668},{&g_668,&g_273,&g_668},{&g_273,&g_668,&g_668}}};
            int ***l_792 = &l_793[4][4][1];
            int i, j, k;
            (*g_668) = (g_160[g_534.f0] < (+((safe_sub_func_int16_t_s_s((0xE3L || (((safe_rshift_func_uint16_t_u_u(g_160[g_534.f0], 3)) || (l_791 != l_792)) , p_31)), (g_534.f2 != (&g_107 == l_791)))) | 4294967291UL)));
        }
        for (p_28 = 0; (p_28 <= 5); p_28 += 1)
        {
            int **l_794 = &g_668;
            for (l_779.f1 = 0; (l_779.f1 <= 5); l_779.f1 += 1)
            {
                int i, j;
                return g_370[l_779.f1][(l_779.f1 + 1)];
            }
            (*l_794) = &l_783;
        }
    }
    (*g_668) = (l_795 == &g_276);
    return p_32;
}







static short func_33(unsigned char p_34, unsigned char p_35, const unsigned p_36, const int p_37, short p_38)
{
    union U0 l_45 = {4294967295UL};
    int *l_530 = (void*)0;
    const union U0 *l_552 = &l_45;
    const union U0 **l_551 = &l_552;
    char l_595 = 0L;
    int **l_623 = &l_530;
    short l_706[3];
    short l_740 = 0xBDA1L;
    int i;
    for (i = 0; i < 3; i++)
        l_706[i] = 0x5152L;
    l_530 = func_39(p_35, l_45, g_46, g_46.f1, l_45);
    (*l_530) = (&g_273 != &g_273);
    for (g_46.f4 = 1; (g_46.f4 <= 5); g_46.f4 += 1)
    {
        unsigned l_546 = 8UL;
        for (p_34 = 0; (p_34 <= 5); p_34 += 1)
        {
            unsigned l_537[9] = {0xDE5A4281L,0xDE5A4281L,0xDE5A4281L,0xDE5A4281L,0xDE5A4281L,0xDE5A4281L,0xDE5A4281L,0xDE5A4281L,0xDE5A4281L};
            int *l_547 = &g_79;
            int i;
            for (p_35 = 0; (p_35 <= 5); p_35 += 1)
            {
                int i, j;
                if (g_370[p_35][(p_35 + 1)])
                    break;
            }
            for (p_35 = 0; (p_35 <= 5); p_35 += 1)
            {
                int l_535 = 0xF85DDF61L;
                for (l_45.f1 = 1; (l_45.f1 <= 5); l_45.f1 += 1)
                {
                    union U0 *l_533 = &g_534;
                    int i, j;
                    if (g_370[p_35][l_45.f1])
                        break;
                    for (g_82 = 0; (g_82 <= 5); g_82 += 1)
                    {
                        int i;
                        return g_160[p_35];
                    }
                    for (g_49 = 1; (g_49 <= 5); g_49 += 1)
                    {
                        union U0 **l_532 = &g_276;
                        union U0 ***l_531[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int *l_536 = &g_82;
                        int i;
                        g_413 = &g_276;
                        l_533 = (*g_413);
                        (*l_536) = l_535;
                        g_276 = (void*)0;
                    }
                }
                if ((*g_273))
                    continue;
                for (g_534.f4 = 0; (g_534.f4 <= 5); g_534.f4 += 1)
                {
                    union U0 *l_542 = &g_46;
                    if (((0xF4749A87L <= l_537[8]) == (safe_lshift_func_uint16_t_u_s((0x43L <= (g_82 && (safe_div_func_uint16_t_u_u(l_537[8], ((*l_530) || p_36))))), 13))))
                    {
                        return l_537[8];
                    }
                    else
                    {
                        union U0 **l_543 = (void*)0;
                        union U0 **l_544 = (void*)0;
                        union U0 **l_545 = &l_542;
                        if (l_537[2])
                            break;
                        (*l_545) = l_542;
                    }
                    for (g_82 = 5; (g_82 >= 0); g_82 -= 1)
                    {
                        int **l_548 = &g_273;
                        if (l_546)
                            break;
                        (*l_548) = l_547;
                        if (p_37)
                            continue;
                    }
                }
            }
        }
        return p_34;
    }
    if (((p_37 != g_534.f3) , p_36))
    {
        short l_554 = 0xBF4FL;
        int *l_562 = (void*)0;
        union U0 l_584 = {0UL};
        unsigned l_613 = 4294967293UL;
        unsigned l_618 = 0UL;
        const int *l_626 = &g_82;
        int ***l_684[4] = {&l_623,&l_623,&l_623,&l_623};
        int i;
        (*l_530) = (251UL > (*l_530));
        if (((p_37 , ((g_49 , p_35) < p_37)) & ((*l_530) && 1UL)))
        {
            const short l_565[8][1] = {{0xA92DL},{0xA92DL},{1L},{0xA92DL},{1L},{0x4735L},{1L},{1L}};
            const int *l_579 = (void*)0;
            short l_622[6];
            int i, j;
            for (i = 0; i < 6; i++)
                l_622[i] = 0L;
            for (g_79 = (-20); (g_79 < (-7)); g_79 = safe_add_func_uint8_t_u_u(g_79, 5))
            {
                int *l_553 = &g_82;
                (*l_553) = (l_551 != &l_552);
                (*l_553) = l_554;
            }
            for (p_34 = 0; (p_34 <= 5); p_34 += 1)
            {
                const int **l_555[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_555[i] = &g_88;
                (*l_530) = (g_160[p_34] < p_34);
                g_88 = &p_37;
                for (l_45.f0 = 0; (l_45.f0 <= 5); l_45.f0 += 1)
                {
                    int i, j;
                    for (g_534.f1 = 0; (g_534.f1 <= 5); g_534.f1 += 1)
                    {
                        int i, j;
                        if (g_370[p_34][(l_45.f0 + 2)])
                            break;
                    }
                    (*g_273) = g_370[p_34][p_34];
                    for (l_554 = 0; (l_554 <= 5); l_554 += 1)
                    {
                        const int ***l_556 = &l_555[3];
                        (*l_556) = l_555[1];
                        return g_12[1][0][3];
                    }
                }
            }
            if ((0x74L <= l_554))
            {
                int **l_574 = &g_273;
                for (g_46.f3 = 17; (g_46.f3 != 30); g_46.f3 = safe_add_func_int8_t_s_s(g_46.f3, 2))
                {
                    for (g_79 = 19; (g_79 != 6); g_79--)
                    {
                        const short l_561 = 0x0C96L;
                        int *l_563 = &g_82;
                        int **l_564[9] = {&l_530,(void*)0,&l_530,(void*)0,&l_530,(void*)0,&l_530,(void*)0,&l_530};
                        int i;
                        g_49 = ((p_35 ^ l_561) >= g_534.f0);
                        l_562 = l_562;
                        (*l_551) = (void*)0;
                        g_273 = l_563;
                    }
                    return p_36;
                }
                (*g_273) = l_565[5][0];
                for (g_46.f2 = 0; (g_46.f2 > 17); ++g_46.f2)
                {
                    unsigned l_570[2][8] = {{0x1097AF00L,0x1097AF00L,0x1097AF00L,0x1097AF00L,0x1097AF00L,0x1097AF00L,0x1097AF00L,0x1097AF00L},{0x1097AF00L,0x1097AF00L,0x1097AF00L,0x1097AF00L,0x1097AF00L,0x1097AF00L,0x1097AF00L,0x1097AF00L}};
                    int *l_583 = &g_49;
                    int i, j;
                }
            }
            else
            {
                unsigned l_600 = 4294967295UL;
                const int *l_609 = (void*)0;
                int *l_614 = &g_49;
                for (l_45.f1 = 1; (l_45.f1 <= 5); l_45.f1 += 1)
                {
                    unsigned short l_589 = 65533UL;
                    for (g_46.f4 = 0; (g_46.f4 <= 5); g_46.f4 += 1)
                    {
                        if ((*g_273))
                            break;
                        if (p_36)
                            continue;
                    }
                    for (p_38 = 5; (p_38 >= 0); p_38 -= 1)
                    {
                        int l_590 = (-1L);
                        union U0 l_591 = {0x6E4435F6L};
                        const int **l_592 = &l_579;
                        (*l_592) = &p_37;
                        (*g_273) = (safe_sub_func_int32_t_s_s(l_595, (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_530 != &p_37), ((l_600 && (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(p_36, ((**l_592) | p_38))), (safe_div_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(g_46.f4, 4)) > g_12[2][0][6]), g_534.f4))))) , p_36))), p_35))));
                    }
                }
                l_609 = &p_37;
                if ((*l_609))
                {
                    for (l_45.f0 = 0; (l_45.f0 >= 15); l_45.f0 = safe_add_func_uint16_t_u_u(l_45.f0, 1))
                    {
                        unsigned l_612 = 4294967288UL;
                        int * const l_616 = (void*)0;
                        int **l_617 = &l_530;
                        (*l_617) = l_616;
                    }
                    return l_618;
                }
                else
                {
                    char l_619 = 1L;
                    l_579 = &p_37;
                }
                (*l_530) = ((safe_lshift_func_int8_t_s_u(g_82, 0)) & l_622[1]);
            }
            l_623 = &l_562;
        }
        else
        {
            char l_624 = 1L;
            int **l_630[4];
            union U0 **l_674[10][7][3] = {{{&g_276,(void*)0,&g_276},{&g_276,&g_276,(void*)0},{&g_276,&g_276,&g_276},{&g_276,&g_276,(void*)0},{(void*)0,&g_276,&g_276},{&g_276,(void*)0,&g_276},{(void*)0,&g_276,&g_276}},{{&g_276,(void*)0,&g_276},{&g_276,(void*)0,(void*)0},{&g_276,(void*)0,(void*)0},{&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276},{(void*)0,&g_276,(void*)0}},{{&g_276,&g_276,&g_276},{(void*)0,&g_276,&g_276},{&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276},{&g_276,(void*)0,(void*)0},{&g_276,(void*)0,&g_276},{&g_276,(void*)0,&g_276}},{{&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276},{&g_276,&g_276,(void*)0},{&g_276,(void*)0,&g_276},{&g_276,&g_276,&g_276},{&g_276,&g_276,(void*)0},{&g_276,&g_276,&g_276}},{{&g_276,(void*)0,&g_276},{&g_276,&g_276,&g_276},{(void*)0,&g_276,&g_276},{&g_276,(void*)0,&g_276},{&g_276,&g_276,&g_276},{&g_276,&g_276,(void*)0},{(void*)0,&g_276,&g_276}},{{&g_276,&g_276,&g_276},{(void*)0,&g_276,&g_276},{&g_276,(void*)0,&g_276},{(void*)0,&g_276,(void*)0},{&g_276,&g_276,&g_276},{(void*)0,(void*)0,&g_276},{&g_276,&g_276,&g_276}},{{&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276},{(void*)0,&g_276,(void*)0},{&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276},{&g_276,&g_276,(void*)0}},{{(void*)0,&g_276,&g_276},{(void*)0,&g_276,&g_276},{(void*)0,&g_276,&g_276},{&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276},{&g_276,(void*)0,(void*)0}},{{&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276},{(void*)0,&g_276,(void*)0},{(void*)0,&g_276,&g_276},{&g_276,&g_276,(void*)0},{&g_276,&g_276,(void*)0},{&g_276,(void*)0,&g_276}},{{&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276},{(void*)0,(void*)0,&g_276},{&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276},{(void*)0,&g_276,&g_276}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_630[i] = &l_530;
            l_624 = (*g_273);
            if ((g_46.f1 , p_35))
            {
                return (**l_623);
            }
            else
            {
                int *l_625 = (void*)0;
                if (p_35)
                {
                    g_88 = l_625;
                    l_626 = &p_37;
                }
                else
                {
                    unsigned l_627 = 0x579260DDL;
                    int * const *l_631 = &l_625;
                    (**l_623) = ((*l_626) & (l_627 == (p_36 ^ (p_37 > (((0xFEE2A1BFL > 1L) , l_630[2]) != l_631)))));
                    if ((p_36 || p_34))
                    {
                        int l_632 = 0x909C5AE2L;
                        return l_632;
                    }
                    else
                    {
                        char l_641[8][7][4] = {{{1L,0xE5L,1L,7L},{0L,(-9L),(-7L),4L},{0x5FL,1L,1L,0x5FL},{0L,0xD9L,(-10L),0xFFL},{0xDDL,9L,0xF0L,1L},{0x7FL,2L,1L,1L},{0x08L,9L,(-10L),0xFFL}},{{0x63L,0xD9L,0xD0L,0x5FL},{0x50L,1L,0xCAL,4L},{0x0BL,(-9L),0x7FL,7L},{0L,0xE5L,0x80L,2L},{0L,4L,1L,9L},{(-1L),2L,0L,0xF0L},{1L,8L,1L,1L}},{{1L,(-10L),1L,4L},{0x48L,0xBBL,(-1L),0x57L},{(-7L),1L,0xE8L,0x48L},{0xB6L,0L,0xBBL,0xEBL},{0xDDL,1L,(-9L),0xA0L},{(-4L),0L,0xF0L,0L},{(-3L),0x63L,0L,0x08L}},{{0xD9L,0xCAL,(-8L),(-1L)},{0x57L,0xA0L,0xC0L,(-10L)},{0x63L,0x65L,0x63L,0L},{7L,0xE9L,0xA0L,4L},{1L,0L,1L,0xE9L},{0xCFL,0L,1L,(-3L)},{1L,0x79L,0xA0L,0x99L}},{{7L,4L,0x63L,2L},{0x63L,2L,0xC0L,0xD0L},{0x57L,0x63L,(-8L),(-1L)},{0xD9L,(-1L),0L,0L},{(-3L),(-1L),0xF0L,0xB6L},{(-4L),0L,(-9L),0L},{0xDDL,(-9L),0xBBL,8L}},{{0xB6L,0x0BL,0L,0L},{0L,0xB6L,0xC0L,0L},{(-8L),1L,4L,0x79L},{(-10L),2L,1L,(-7L)},{0x23L,0L,7L,0L},{0xC0L,0xA5L,4L,0x80L},{9L,1L,0xEBL,1L}},{{0xBBL,0L,(-1L),1L},{0xD9L,0xA5L,0xF0L,0xF0L},{(-1L),(-1L),0xB6L,0x65L},{2L,0x5AL,(-3L),4L},{0L,0L,1L,(-3L)},{(-1L),0L,0x0BL,4L},{0L,0x5AL,4L,0x65L}},{{0x57L,(-1L),1L,0xF0L},{0x08L,0xA5L,1L,1L},{8L,0L,0x5BL,1L},{0x99L,1L,0L,0x80L},{0x22L,0xA5L,0x99L,0L},{0x3BL,0L,0L,(-7L)},{4L,2L,0xD0L,0x79L}}};
                        union U0 l_642[6][2] = {{{0UL},{0UL}},{{0xECBB8876L},{0xECBB8876L}},{{0xECBB8876L},{0UL}},{{0UL},{0x7D366B5BL}},{{0UL},{0x7D366B5BL}},{{0UL},{0UL}}};
                        int i, j, k;
                        (*g_273) = (4294967295UL || ((safe_lshift_func_uint8_t_u_u(g_615[1], (safe_lshift_func_int16_t_s_s((((func_55(&g_49, (((*l_626) | ((p_35 , (((((safe_lshift_func_uint16_t_u_u(65535UL, ((g_615[0] , p_34) == (g_46.f2 || p_37)))) ^ g_79) >= g_370[1][3]) >= l_641[3][4][0]) , (*g_413))) != (void*)0)) ^ p_38), l_562) , l_642[1][0]) , 0xDAE9E2F4L) <= 4L), 0)))) != g_160[5]));
                        (**l_623) = ((safe_add_func_int16_t_s_s((g_534.f3 >= l_642[1][0].f4), g_46.f4)) , (p_38 & (safe_mod_func_uint16_t_u_u(((g_82 & 0L) < (p_34 ^ p_35)), ((((-5L) | g_370[2][3]) , (*l_530)) , g_534.f1)))));
                    }
                }
                (*l_530) = (2L < ((+((safe_mod_func_uint8_t_u_u(((0x1F85E5ACL > (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(g_370[1][3], (g_615[0] | (*l_626)))), p_35))) >= p_38), p_36)) , g_12[2][0][6])) != g_534.f0));
                for (l_584.f1 = 0; (l_584.f1 <= 55); ++l_584.f1)
                {
                    return g_615[0];
                }
                if (p_37)
                {
                    (*l_530) = (((p_36 && ((void*)0 == &g_88)) < p_38) == p_37);
                }
                else
                {
                    char l_667 = 0x92L;
                    short l_677[3][9] = {{0x5478L,0L,0x5478L,0x5478L,0L,0x5478L,0x5478L,0L,0x5478L},{0x5764L,0x2254L,0x5764L,0xDBB0L,0xC512L,0xDBB0L,0x5764L,0x2254L,0x5764L},{0x5478L,0L,0x5478L,0x5478L,0L,0x5478L,0x5478L,0L,0x5478L}};
                    int i, j;
                    (*g_273) = ((-1L) && (safe_rshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((*g_273) > p_35), 1UL)) && (((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(p_35, (safe_add_func_uint32_t_u_u((&l_551 == (void*)0), ((&g_88 != (g_46.f0 , &l_625)) >= p_34))))), p_36)) , &g_79) == &p_37)), g_160[4])));
                    for (g_46.f2 = (-1); (g_46.f2 == 20); g_46.f2 = safe_add_func_uint16_t_u_u(g_46.f2, 3))
                    {
                        int l_669 = 0xCA6832FBL;
                        const int **l_670 = &l_626;
                        const union U0 **l_673 = &l_552;
                        (*l_670) = &p_37;
                        (*l_530) = (((safe_add_func_uint8_t_u_u((l_673 == l_674[2][0][0]), (safe_sub_func_uint32_t_u_u(((**l_673) , (&g_49 == (*l_623))), l_677[1][7])))) , ((g_82 != p_37) || (g_49 && 0xF2B4L))) ^ l_677[2][6]);
                    }
                    for (l_584.f2 = 0; l_584.f2 < 3; l_584.f2 += 1)
                    {
                        for (g_534.f1 = 0; g_534.f1 < 9; g_534.f1 += 1)
                        {
                            l_677[l_584.f2][g_534.f1] = 0x5A04L;
                        }
                    }
                }
            }
        }
        if ((*l_626))
        {
            int *l_683 = &g_49;
            union U0 l_705 = {1UL};
            for (l_584.f4 = 0; (l_584.f4 >= 60); l_584.f4 = safe_add_func_int8_t_s_s(l_584.f4, 4))
            {
                union U0 l_682 = {0xD19B02A5L};
                int ***l_685[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_685[i] = &l_623;
                for (l_45.f0 = 0; (l_45.f0 > 47); ++l_45.f0)
                {
                    int *l_686 = (void*)0;
                    int *l_687 = (void*)0;
                    g_273 = l_687;
                    for (l_595 = 2; (l_595 >= 0); l_595 -= 1)
                    {
                        unsigned l_692 = 9UL;
                        int i, j;
                        l_683 = func_50((((g_615[l_595] <= (g_370[l_595][(l_595 + 4)] || (((safe_div_func_int32_t_s_s((((g_82 , g_49) || g_79) ^ (!((((safe_add_func_int32_t_s_s(g_370[l_595][(l_595 + 4)], (*g_668))) != ((g_615[0] , &l_552) == (void*)0)) < g_46.f2) < p_34))), g_370[1][3])) >= 249UL) > 1UL))) , (**l_551)) , l_692), g_534.f3, p_38, &g_82);
                        if ((*g_668))
                            break;
                    }
                    return g_79;
                }
            }
            for (g_534.f3 = 16; (g_534.f3 > 7); g_534.f3 = safe_sub_func_int16_t_s_s(g_534.f3, 1))
            {
                const int *l_717 = (void*)0;
                unsigned l_743[10][6][3] = {{{0x8805FD4EL,0xF88DEDF4L,0x63B13FC9L},{6UL,0x4A3DF39AL,0x3586E7FDL},{1UL,0x8805FD4EL,0x63B13FC9L},{5UL,2UL,4294967290UL},{0x72B5A0BAL,0x3586E7FDL,0x9262A862L},{0xE66AA51CL,4294967291UL,0xD6F3641BL}},{{2UL,0x63B13FC9L,1UL},{0xF9974166L,1UL,0xB1A50201L},{0xE095DF67L,1UL,0xF0B4DB5AL},{0xE095DF67L,5UL,2UL},{0xF9974166L,1UL,0UL},{2UL,1UL,1UL}},{{0xE66AA51CL,4294967295UL,0x251B3EE1L},{0x72B5A0BAL,5UL,4294967295UL},{5UL,0x835B6297L,1UL},{1UL,4294967292UL,6UL},{6UL,0x835B6297L,4294967291UL},{0x8805FD4EL,5UL,1UL}},{{1UL,4294967295UL,4294967292UL},{4294967290UL,1UL,0x72B5A0BAL},{0x988B5457L,1UL,0x55115F97L},{0x9262A862L,5UL,0UL},{0x54F0E32FL,1UL,0UL},{0xF88DEDF4L,0x72B5A0BAL,4294967290UL}},{{2UL,0x2F7CC91BL,0xF0B4DB5AL},{4294967288UL,6UL,4294967288UL},{0x8805FD4EL,0x2A3B5221L,0xF88DEDF4L},{4294967292UL,0x54F0E32FL,6UL},{0UL,0xF9974166L,0x835B6297L},{0x251B3EE1L,1UL,0xE095DF67L}},{{0UL,0x4A3DF39AL,0x55115F97L},{4294967292UL,0x49A11D56L,1UL},{0x8805FD4EL,0xD6F3641BL,0UL},{4294967288UL,1UL,4294967295UL},{2UL,5UL,0x54F0E32FL},{0x4A3DF39AL,4294967290UL,4294967291UL}},{{5UL,4294967290UL,0x8805FD4EL},{4294967295UL,5UL,0x72B5A0BAL},{5UL,1UL,0x5B85C10EL},{0xD6F3641BL,0xD6F3641BL,4294967295UL},{0x72B5A0BAL,0x49A11D56L,0xD6F3641BL},{0xF9974166L,0x4A3DF39AL,0x2F7CC91BL}},{{0x835B6297L,1UL,0x2A3B5221L},{0UL,0xF9974166L,0x2F7CC91BL},{1UL,0x54F0E32FL,0xD6F3641BL},{0xF0B4DB5AL,0x2A3B5221L,4294967295UL},{0x3586E7FDL,6UL,0x5B85C10EL},{0x54F0E32FL,0x2F7CC91BL,0x72B5A0BAL}},{{0UL,0x72B5A0BAL,0x8805FD4EL},{0xE66AA51CL,0xF88DEDF4L,4294967291UL},{0xE66AA51CL,0x9262A862L,0x54F0E32FL},{0UL,0x251B3EE1L,4294967295UL},{0x54F0E32FL,0UL,0UL},{0x3586E7FDL,2UL,1UL}},{{0xF0B4DB5AL,1UL,0x55115F97L},{4294967295UL,0xF0B4DB5AL,1UL},{2UL,0x8805FD4EL,0x72B5A0BAL},{0x72B5A0BAL,0xF0B4DB5AL,1UL},{0x2A3B5221L,4294967295UL,6UL},{0UL,0xD6F3641BL,0x8805FD4EL}}};
                int i, j, k;
                for (p_35 = (-5); (p_35 == 20); ++p_35)
                {
                    int l_707 = 0x3639FB41L;
                    union U0 ** const *l_712 = (void*)0;
                    union U0 **l_718 = (void*)0;
                    union U0 **l_719 = &g_276;
                    (*g_668) = ((((p_35 || (safe_div_func_int32_t_s_s((((((g_46.f2 == g_370[3][5]) | ((p_34 , (safe_sub_func_int32_t_s_s(p_37, (((((safe_sub_func_uint32_t_u_u((l_705 , (0x147B7219L <= l_706[2])), (*l_683))) | 0L) , (void*)0) == (void*)0) == p_35)))) && (*l_683))) != (*l_683)) , (-1L)) , (*g_273)), l_707))) != 0L) > l_707) & p_37);
                    if ((~((safe_div_func_int32_t_s_s((((safe_sub_func_int32_t_s_s(((*g_413) == ((((g_12[2][0][6] , l_712) == (void*)0) == (*l_530)) , (*g_413))), (*l_683))) ^ ((*g_273) < (*l_626))) & 0x0DC3AE14L), (*l_626))) && p_38)))
                    {
                        (*g_668) = p_37;
                    }
                    else
                    {
                        (*l_683) = (*g_668);
                    }
                    for (l_584.f3 = 0; (l_584.f3 >= 8); l_584.f3++)
                    {
                        int *l_715 = &g_49;
                        const int *l_716 = &g_82;
                        l_717 = l_716;
                    }
                    (*l_719) = (*g_413);
                }
                for (l_705.f0 = (-22); (l_705.f0 != 5); l_705.f0++)
                {
                    for (g_49 = 0; (g_49 == (-15)); --g_49)
                    {
                        union U0 l_731 = {0x5848704CL};
                        g_82 = (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((0x5DF67443L ^ (g_46.f3 & g_46.f2)) , ((safe_div_func_uint32_t_u_u(((((safe_unary_minus_func_uint32_t_u(g_46.f3)) < p_36) , (l_731 , (safe_add_func_int16_t_s_s(p_35, ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(l_740, (safe_div_func_int32_t_s_s(((p_35 || (*l_530)) > g_160[0]), 0x7D1BFE0FL)))) ^ p_38) >= p_37), 65535UL)), l_731.f4)) , p_38))))) , g_46.f3), p_35)) , g_79)), g_160[3])) || l_743[2][5][2]), g_160[0]));
                    }
                    (*g_273) = (-2L);
                    return g_79;
                }
                return p_37;
            }
            for (g_534.f3 = 0; (g_534.f3 != 29); ++g_534.f3)
            {
                const int **l_746 = &l_626;
                (*l_623) = (void*)0;
                (*l_746) = &p_37;
            }
        }
        else
        {
            unsigned l_758 = 0x0D629336L;
            const int **l_759 = &l_626;
            (*l_759) = &p_37;
            (*l_530) = (4294967288UL < p_34);
        }
        return p_38;
    }
    else
    {
        int **l_762 = &g_668;
        const int **l_771 = (void*)0;
        const int **l_772[9][3][9] = {{{&g_88,&g_88,&g_88,(void*)0,(void*)0,&g_88,(void*)0,&g_88,&g_88},{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,(void*)0,&g_88,&g_88},{&g_88,(void*)0,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88}},{{&g_88,&g_88,&g_88,(void*)0,&g_88,&g_88,&g_88,&g_88,&g_88},{&g_88,&g_88,(void*)0,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88}},{{(void*)0,(void*)0,(void*)0,&g_88,(void*)0,&g_88,&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,(void*)0,(void*)0},{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,(void*)0,&g_88}},{{&g_88,&g_88,&g_88,&g_88,&g_88,(void*)0,&g_88,&g_88,&g_88},{&g_88,(void*)0,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88,&g_88,&g_88,(void*)0,&g_88,&g_88,&g_88}},{{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88,&g_88,(void*)0,&g_88,&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88,&g_88,(void*)0,&g_88,(void*)0,&g_88,&g_88}},{{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88},{&g_88,(void*)0,&g_88,(void*)0,&g_88,(void*)0,&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,(void*)0,&g_88,&g_88}},{{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88},{&g_88,&g_88,(void*)0,&g_88,&g_88,&g_88,&g_88,(void*)0,&g_88}},{{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88,&g_88,(void*)0,&g_88,(void*)0,&g_88,&g_88},{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88}},{{&g_88,&g_88,&g_88,&g_88,(void*)0,&g_88,&g_88,(void*)0,&g_88},{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88},{(void*)0,&g_88,(void*)0,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88}}};
        int i, j, k;
        (**l_623) = (*g_668);
        (*l_530) = (((safe_rshift_func_uint16_t_u_u((&g_273 == l_762), 9)) & ((safe_rshift_func_uint16_t_u_s(p_37, 10)) > (safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(p_36, 5)) , (**l_762)), (+((void*)0 != (*l_623))))), ((*l_623) == (*l_762)))))) , p_36);
        g_88 = (p_37 , &p_37);
    }
    return p_38;
}







static int * func_39(char p_40, union U0 p_41, union U0 p_42, unsigned p_43, union U0 p_44)
{
    char l_47[6];
    int *l_74[5];
    unsigned short l_261 = 0xE280L;
    char l_271 = 0x21L;
    unsigned l_315[9][3][6] = {{{0xD2311282L,5UL,9UL,9UL,5UL,0xD2311282L},{0xD2311282L,0x25A2756DL,0x39A49C07L,9UL,0x25A2756DL,9UL},{0xD2311282L,0UL,0xD2311282L,9UL,0UL,0x39A49C07L}},{{0xD2311282L,5UL,9UL,9UL,5UL,0xD2311282L},{0xD2311282L,0x25A2756DL,0x39A49C07L,9UL,0x39A49C07L,0xCB4EECB2L},{0x90FFD3EEL,9UL,0x90FFD3EEL,0xCB4EECB2L,9UL,0xBDFC57C4L}},{{0x90FFD3EEL,0xD2311282L,0xCB4EECB2L,0xCB4EECB2L,0xD2311282L,0x90FFD3EEL},{0x90FFD3EEL,0x39A49C07L,0xBDFC57C4L,0xCB4EECB2L,0x39A49C07L,0xCB4EECB2L},{0x90FFD3EEL,9UL,0x90FFD3EEL,0xCB4EECB2L,9UL,0xBDFC57C4L}},{{0x90FFD3EEL,0xD2311282L,0xCB4EECB2L,0xCB4EECB2L,0xD2311282L,0x90FFD3EEL},{0x90FFD3EEL,0x39A49C07L,0xBDFC57C4L,0xCB4EECB2L,0x39A49C07L,0xCB4EECB2L},{0x90FFD3EEL,9UL,0x90FFD3EEL,0xCB4EECB2L,9UL,0xBDFC57C4L}},{{0x90FFD3EEL,0xD2311282L,0xCB4EECB2L,0xCB4EECB2L,0xD2311282L,0x90FFD3EEL},{0x90FFD3EEL,0x39A49C07L,0xBDFC57C4L,0xCB4EECB2L,0x39A49C07L,0xCB4EECB2L},{0x90FFD3EEL,9UL,0x90FFD3EEL,0xCB4EECB2L,9UL,0xBDFC57C4L}},{{0x90FFD3EEL,0xD2311282L,0xCB4EECB2L,0xCB4EECB2L,0xD2311282L,0x90FFD3EEL},{0x90FFD3EEL,0x39A49C07L,0xBDFC57C4L,0xCB4EECB2L,0x39A49C07L,0xCB4EECB2L},{0x90FFD3EEL,9UL,0x90FFD3EEL,0xCB4EECB2L,9UL,0xBDFC57C4L}},{{0x90FFD3EEL,0xD2311282L,0xCB4EECB2L,0xCB4EECB2L,0xD2311282L,0x90FFD3EEL},{0x90FFD3EEL,0x39A49C07L,0xBDFC57C4L,0xCB4EECB2L,0x39A49C07L,0xCB4EECB2L},{0x90FFD3EEL,9UL,0x90FFD3EEL,0xCB4EECB2L,0x39A49C07L,0x90FFD3EEL}},{{0xCB4EECB2L,9UL,0xBDFC57C4L,0xBDFC57C4L,9UL,0xCB4EECB2L},{0xCB4EECB2L,0xD2311282L,0x90FFD3EEL,0xBDFC57C4L,0xD2311282L,0xBDFC57C4L},{0xCB4EECB2L,0x39A49C07L,0xCB4EECB2L,0xBDFC57C4L,0x39A49C07L,0x90FFD3EEL}},{{0xCB4EECB2L,9UL,0xBDFC57C4L,0xBDFC57C4L,9UL,0xCB4EECB2L},{0xCB4EECB2L,0xD2311282L,0x90FFD3EEL,0xBDFC57C4L,0xD2311282L,0xBDFC57C4L},{0xCB4EECB2L,0x39A49C07L,0xCB4EECB2L,0xBDFC57C4L,0x39A49C07L,0x90FFD3EEL}}};
    unsigned l_390[2];
    int l_391 = (-1L);
    int l_438 = 0x4CC71B1DL;
    int **l_502 = (void*)0;
    int ***l_501 = &l_502;
    int *l_505[3][6][4] = {{{(void*)0,&g_79,(void*)0,(void*)0},{&l_438,&l_438,(void*)0,(void*)0},{&l_438,&g_82,(void*)0,&l_438},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_79,(void*)0,(void*)0,&l_438},{(void*)0,&g_82,&g_82,(void*)0}},{{(void*)0,&l_438,&g_82,(void*)0},{(void*)0,&g_79,(void*)0,&g_79},{&g_79,&g_82,(void*)0,&g_79},{(void*)0,&g_79,(void*)0,(void*)0},{&l_438,&l_438,(void*)0,(void*)0},{&l_438,&g_82,(void*)0,&l_438}},{{(void*)0,(void*)0,(void*)0,(void*)0},{&g_79,(void*)0,(void*)0,&l_438},{(void*)0,&g_79,&g_79,(void*)0},{(void*)0,&g_82,&g_79,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_79,(void*)0,(void*)0}}};
    int l_515[9] = {0x5BAB80C9L,0x5BAB80C9L,0x5BAB80C9L,0x5BAB80C9L,0x5BAB80C9L,0x5BAB80C9L,0x5BAB80C9L,0x5BAB80C9L,0x5BAB80C9L};
    unsigned short l_523 = 0xC914L;
    union U0 **l_529 = &g_276;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_47[i] = 0x23L;
    for (i = 0; i < 5; i++)
        l_74[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_390[i] = 4294967292UL;
    if (l_47[5])
    {
        int l_70 = 0x7BE62782L;
        unsigned l_223[1];
        int i;
        for (i = 0; i < 1; i++)
            l_223[i] = 4294967286UL;
        for (g_46.f3 = 0; (g_46.f3 <= 5); g_46.f3 += 1)
        {
            int *l_48[5][4] = {{&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49}};
            int i, j;
            g_49 = l_47[g_46.f3];
            if (p_43)
                continue;
            for (p_41.f2 = 1; (p_41.f2 <= 5); p_41.f2 += 1)
            {
                const int l_73 = 0L;
                int *l_141 = &l_70;
                int **l_217 = &l_141;
            }
        }
    }
    else
    {
        char l_249 = 0x42L;
        unsigned char l_253 = 0x30L;
        int l_255 = 0L;
        int **l_277 = &l_74[3];
        if ((safe_rshift_func_uint8_t_u_s(p_44.f2, 3)))
        {
            int **l_240 = &l_74[3];
            (*l_240) = (void*)0;
        }
        else
        {
            char l_252 = 9L;
            unsigned char l_254 = 0UL;
            int *l_262 = &l_255;
            l_255 = (safe_div_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((+((p_41.f0 ^ (((safe_sub_func_int16_t_s_s(0L, g_12[2][0][6])) && 4294967295UL) == (l_249 != (safe_div_func_uint16_t_u_u((((((p_42.f3 && (0x2AADL ^ p_41.f4)) ^ 0L) ^ l_249) , 1L) , l_249), 0x1998L))))) <= (-5L))), p_44.f4)), l_252)) == g_46.f3) || l_253), l_254));
            for (p_42.f0 = (-13); (p_42.f0 >= 39); p_42.f0 = safe_add_func_int16_t_s_s(p_42.f0, 4))
            {
                int *l_258 = &l_255;
                int **l_263[8] = {&l_74[3],&l_74[3],&l_74[3],&l_74[3],&l_74[3],&l_74[3],&l_74[3],&l_74[3]};
                short l_267 = 0xB66CL;
                int i;
                l_74[3] = l_262;
                for (g_79 = (-9); (g_79 == (-2)); ++g_79)
                {
                    int *l_266[4] = {&g_79,&g_79,&g_79,&g_79};
                    int i;
                    l_266[3] = &g_79;
                    g_82 = (l_267 | g_79);
                }
                for (l_254 = 0; (l_254 != 42); l_254 = safe_add_func_uint16_t_u_u(l_254, 1))
                {
                    unsigned char l_270 = 0xCCL;
                    if (p_41.f4)
                    {
                        if (p_44.f4)
                            break;
                        (*l_258) = l_270;
                        (*l_262) = l_270;
                        (*l_262) = l_271;
                    }
                    else
                    {
                        unsigned short l_272[3][1];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_272[i][j] = 1UL;
                        }
                        if (l_272[0][0])
                            break;
                        (*l_258) = l_270;
                        g_273 = func_59(&g_49);
                        (*g_273) = (&l_255 == (void*)0);
                    }
                }
                return &g_49;
            }
            for (p_42.f1 = 1; (p_42.f1 <= 5); p_42.f1 += 1)
            {
                union U0 *l_275 = &g_46;
                union U0 **l_274[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_274[i] = &l_275;
                g_276 = &g_46;
                for (p_41.f1 = 1; (p_41.f1 <= 5); p_41.f1 += 1)
                {
                    return &g_82;
                }
            }
        }
        (*l_277) = func_50(p_44.f4, p_41.f3, p_42.f3, &g_79);
    }
    for (p_41.f4 = 0; (p_41.f4 <= 4); p_41.f4 += 1)
    {
        union U0 * const *l_288 = &g_276;
        char l_328 = (-1L);
        char l_358 = 0xDCL;
        char l_433 = 0x32L;
        const short l_450 = 0xFAFFL;
        union U0 **l_473 = &g_276;
        char l_479 = 0xC7L;
        unsigned l_488 = 4294967290UL;
        const int * const *l_504 = (void*)0;
        const int * const **l_503 = &l_504;
        int i;
        l_74[p_41.f4] = l_74[p_41.f4];
        if (p_41.f0)
            continue;
    }
    if (p_42.f2)
    {
        (*g_273) = (-1L);
    }
    else
    {
        int *l_524 = &g_49;
        int *l_525 = &l_391;
        int **l_526 = &l_74[3];
        (*l_526) = l_525;
        for (p_44.f0 = 0; (p_44.f0 != 16); ++p_44.f0)
        {
            (*g_273) = (p_41.f0 && 0x00E2L);
        }
    }
    (*g_273) = ((void*)0 == l_529);
    return &g_79;
}







static int * func_50(unsigned p_51, unsigned char p_52, int p_53, int * p_54)
{
    char l_146 = 3L;
    char l_153 = 0xBBL;
    int *l_194 = &g_49;
    int **l_216 = &l_194;
    if ((0x81C0L & (((~((~(safe_add_func_uint8_t_u_u(1UL, l_146))) > ((g_79 , ((safe_div_func_uint8_t_u_u((((((l_146 , 0xC78C8CD5L) < (safe_div_func_uint16_t_u_u(g_12[2][0][6], ((safe_add_func_uint16_t_u_u(g_82, (g_79 , l_153))) | p_51)))) , l_146) , &g_46) == &g_46), l_146)) , 65535UL)) >= 0x9D7EL))) | 0xBB49EDB2L) | 3L)))
    {
        g_88 = &g_49;
        (*p_54) = (-7L);
    }
    else
    {
        int *l_155 = &g_49;
        int **l_154 = &l_155;
        (*l_154) = &p_53;
        return &g_49;
    }
    if ((*p_54))
    {
        int l_163 = (-1L);
        union U0 * const l_164 = &g_46;
        for (g_79 = 22; (g_79 < (-9)); g_79 = safe_sub_func_uint32_t_u_u(g_79, 8))
        {
            int *l_162 = (void*)0;
            int **l_161 = &l_162;
            for (g_82 = (-22); (g_82 <= 6); g_82++)
            {
                for (p_51 = 0; p_51 < 6; p_51 += 1)
                {
                    g_160[p_51] = 0x36L;
                }
                if ((*p_54))
                    break;
            }
            (*l_161) = &p_53;
        }
        (*p_54) = (((((l_163 == 0UL) < p_51) , (l_164 != (void*)0)) , (((l_163 > (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(l_163, ((p_53 & (p_52 != p_53)) <= g_12[0][0][0]))) , 0x06AFL), 2)), p_52))) & l_163) || 3L)) > l_163);
    }
    else
    {
        char l_190[1][7][6] = {{{8L,8L,(-1L),(-10L),(-1L),8L},{(-1L),6L,(-10L),(-10L),6L,(-1L)},{8L,(-1L),(-10L),(-1L),8L,8L},{(-1L),(-1L),(-1L),(-1L),6L,(-1L)},{(-1L),6L,(-1L),(-1L),(-1L),(-1L)},{8L,8L,(-1L),(-10L),(-1L),8L},{(-1L),6L,(-10L),8L,(-1L),(-10L)}}};
        union U0 **l_207 = (void*)0;
        union U0 *l_208 = (void*)0;
        int i, j, k;
        for (p_51 = 0; (p_51 > 40); ++p_51)
        {
            char l_191[6][3] = {{2L,1L,2L},{(-9L),(-9L),(-9L)},{2L,1L,2L},{(-9L),(-9L),(-9L)},{2L,1L,2L},{(-9L),(-9L),(-9L)}};
            int i, j;
            for (l_153 = 25; (l_153 >= (-13)); l_153 = safe_sub_func_int16_t_s_s(l_153, 9))
            {
                unsigned char l_187 = 0x37L;
                int *l_193 = &g_82;
                int **l_192[1][9][9] = {{{(void*)0,&l_193,&l_193,&l_193,&l_193,&l_193,(void*)0,(void*)0,&l_193},{&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{(void*)0,&l_193,(void*)0,&l_193,&l_193,(void*)0,&l_193,(void*)0,&l_193},{&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{&l_193,&l_193,&l_193,&l_193,(void*)0,&l_193,&l_193,&l_193,(void*)0},{&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{(void*)0,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,(void*)0,(void*)0}}};
                int i, j, k;
                (*p_54) = (4294967292UL & ((safe_lshift_func_uint16_t_u_u((g_12[0][0][7] < ((g_49 > p_51) >= (safe_rshift_func_int8_t_s_s(((l_153 | (g_49 == (safe_mod_func_int16_t_s_s((((((safe_div_func_int8_t_s_s(((((safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(l_187, (((safe_div_func_uint16_t_u_u(p_53, (l_153 , 0x5307L))) <= g_49) , 7L))) , p_51), p_51)) != 0xE09C777CL) | 0xD1554CC1L) <= 0UL), l_190[0][1][5])) , l_191[1][1]) || l_191[1][1]) | g_79) >= p_53), g_79)))) <= l_190[0][1][5]), 4)))), 7)) && l_190[0][1][5]));
                g_88 = &p_53;
            }
            for (g_79 = 2; (g_79 >= 0); g_79 -= 1)
            {
                char l_202 = 1L;
                int *l_205[4];
                unsigned short l_206 = 1UL;
                int i;
                for (i = 0; i < 4; i++)
                    l_205[i] = &g_49;
                for (g_82 = 2; (g_82 >= 0); g_82 -= 1)
                {
                    for (l_153 = 2; (l_153 >= 0); l_153 -= 1)
                    {
                        int **l_195 = &l_194;
                        int i, j;
                        (*l_195) = l_194;
                        (*l_194) = (safe_rshift_func_int16_t_s_u(l_191[(g_79 + 2)][l_153], 7));
                    }
                }
                (*l_194) = l_190[0][3][5];
                for (l_202 = 0; l_202 < 1; l_202 += 1)
                {
                    for (l_146 = 0; l_146 < 7; l_146 += 1)
                    {
                        for (g_49 = 0; g_49 < 6; g_49 += 1)
                        {
                            l_190[l_202][l_146][g_49] = 0x0BL;
                        }
                    }
                }
                if (l_206)
                    break;
            }
        }
        l_208 = &g_46;
    }
    for (g_49 = 1; (g_49 == 17); g_49 = safe_add_func_int8_t_s_s(g_49, 3))
    {
        union U0 l_213[1] = {{0x73E29750L}};
        int i;
        for (p_52 = 0; (p_52 < 43); p_52++)
        {
            short l_215 = 3L;
            l_215 = (l_213[0] , (safe_unary_minus_func_int8_t_s(g_49)));
        }
        (*p_54) = (g_46 , (&g_88 != (void*)0));
    }
    (*l_216) = &p_53;
    return &g_79;
}







static union U0 func_55(int * p_56, unsigned short p_57, int * p_58)
{
    unsigned short l_133[7][1] = {{0x21A3L},{0xD3F6L},{0xD3F6L},{0x21A3L},{0xD3F6L},{0xD3F6L},{0x21A3L}};
    union U0 * const l_134 = &g_46;
    union U0 *l_136 = &g_46;
    union U0 **l_135 = &l_136;
    int * const l_137 = &g_49;
    int *l_139 = &g_82;
    int **l_138 = &l_139;
    union U0 l_140[9] = {{0xF177B599L},{0xF177B599L},{0xF177B599L},{0xF177B599L},{0xF177B599L},{0xF177B599L},{0xF177B599L},{0xF177B599L},{0xF177B599L}};
    int i, j;
    (*p_56) = l_133[6][0];
    (*l_135) = l_134;
    (*l_138) = l_137;
    return l_140[6];
}







static int * func_59(int * p_60)
{
    unsigned l_101[1][1];
    unsigned char l_123 = 248UL;
    int *l_132 = (void*)0;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_101[i][j] = 0x72B4CD96L;
    }
    if ((safe_lshift_func_uint8_t_u_s((l_101[0][0] & l_101[0][0]), 5)))
    {
        int l_117 = (-4L);
        union U0 l_128 = {0xFBFD2E02L};
        if ((*p_60))
        {
            int *l_103 = &g_79;
            int **l_102[6][9] = {{&l_103,&l_103,&l_103,&l_103,&l_103,(void*)0,&l_103,&l_103,(void*)0},{&l_103,&l_103,&l_103,&l_103,&l_103,&l_103,&l_103,&l_103,(void*)0},{&l_103,&l_103,(void*)0,&l_103,&l_103,&l_103,&l_103,&l_103,&l_103},{&l_103,&l_103,&l_103,&l_103,&l_103,&l_103,&l_103,&l_103,(void*)0},{&l_103,&l_103,&l_103,&l_103,&l_103,(void*)0,&l_103,&l_103,(void*)0},{&l_103,&l_103,(void*)0,&l_103,&l_103,(void*)0,&l_103,&l_103,(void*)0}};
            int i, j;
            p_60 = p_60;
            (*p_60) = (l_101[0][0] , (-7L));
        }
        else
        {
            const unsigned l_131 = 0UL;
            for (g_82 = 12; (g_82 > 26); g_82++)
            {
                const int ***l_106[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_106[i] = (void*)0;
                g_107 = &g_88;
                for (g_79 = 14; (g_79 < (-6)); g_79 = safe_sub_func_uint8_t_u_u(g_79, 1))
                {
                    const unsigned l_122 = 4294967295UL;
                    (*g_107) = (*g_107);
                    (*p_60) = (((g_46.f3 != ((safe_unary_minus_func_int8_t_s((g_82 < (((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((l_117 && (safe_lshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s(l_101[0][0], (*p_60))), l_122))), 4)), 8UL)) | l_123) || (p_60 == (void*)0))))) , 0L)) , 1UL) | 0xA0849DA6L);
                    if ((*p_60))
                        break;
                    for (l_123 = 0; (l_123 != 20); ++l_123)
                    {
                        (*p_60) = ((g_46.f3 & (safe_rshift_func_uint8_t_u_u(((*g_107) == p_60), g_79))) >= 0x45L);
                        (*p_60) = (l_128 , (((g_12[2][0][6] >= 9UL) > (g_49 , ((g_12[2][0][6] >= (~((((g_49 , (safe_rshift_func_int8_t_s_u(((*g_107) != p_60), 2))) ^ l_101[0][0]) , (-6L)) & l_123))) != g_49))) && l_131));
                    }
                }
                if (l_123)
                    break;
            }
            (*p_60) = (*p_60);
            l_132 = p_60;
        }
    }
    else
    {
        (*p_60) = ((void*)0 == &p_60);
        return &g_79;
    }
    (*p_60) = (g_12[0][0][8] | (g_79 , 0xADF1L));
    return &g_49;
}







static int * func_61(int * p_62, short p_63, int * p_64, int * p_65)
{
    int *l_85 = &g_49;
    for (g_49 = 0; (g_49 >= 2); g_49 = safe_add_func_int32_t_s_s(g_49, 4))
    {
        int **l_94 = &l_85;
        for (p_63 = 0; (p_63 == 17); p_63++)
        {
            int *l_92 = &g_49;
            if ((*p_62))
            {
                const int *l_90 = &g_49;
                const int **l_91 = &l_90;
                for (g_79 = 0; (g_79 <= 18); ++g_79)
                {
                    const int **l_89 = &g_88;
                    for (g_82 = (-30); (g_82 < (-12)); g_82 = safe_add_func_uint8_t_u_u(g_82, 6))
                    {
                        int **l_86 = (void*)0;
                        int **l_87 = (void*)0;
                        p_64 = l_85;
                    }
                    (*l_89) = g_88;
                }
                (*l_91) = l_90;
                g_79 = (*l_90);
            }
            else
            {
                int **l_93 = &l_92;
                (*l_93) = l_92;
            }
        }
        if ((*l_85))
            continue;
        if ((*p_64))
            continue;
        (*l_94) = &g_49;
    }
    (*l_85) = (((l_85 == p_64) != ((*l_85) && 0x7F9CD946L)) , ((((*p_62) || (*l_85)) ^ (safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(g_12[1][0][7], (+((((p_63 , g_46) , &l_85) != &g_88) == 0xAF7CL)))), 0x7DL))) <= (*l_85)));
    return p_62;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_12[i][j][k], "g_12[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_46.f3, "g_46.f3", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_160[i], "g_160[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_370[i][j], "g_370[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_534.f3, "g_534.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_615[i], "g_615[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_975, "g_975", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
