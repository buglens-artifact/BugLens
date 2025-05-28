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
   const unsigned short f0;
   signed f1 : 20;
   int f2;
   const unsigned f3;
   const char f4;
   unsigned f5;
   unsigned f6 : 16;
   int f7;
   const unsigned short f8;
   unsigned short f9;
};

struct S1 {
   unsigned f0 : 27;
   signed f1 : 26;
};

struct S2 {
   signed f0 : 2;
   unsigned f1 : 15;
   unsigned f2 : 2;
   signed f3 : 5;
   unsigned f4 : 14;
   unsigned f5 : 5;
   signed : 0;
};

struct S3 {
   struct S0 f0;
   struct S2 f1;
   char f2;
   unsigned f3 : 22;
   unsigned short f4;
};

struct S4 {
   unsigned char f0;
   unsigned : 0;
   const struct S3 f1;
   struct S0 f2;
   int f3;
   signed f4 : 6;
   unsigned f5;
   unsigned short f6;
   unsigned f7 : 21;
   struct S2 f8;
};


static unsigned short g_7 = 8UL;
static struct S2 g_55 = {0,118,0,2,50,2};
static int g_58 = 9L;
static int *g_57 = &g_58;
static int g_61 = 0x77F8201CL;
static char g_62[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
static short g_63 = 0L;
static char g_64 = 0xDBL;
static char g_65 = 0x50L;
static unsigned short g_66 = 0x2A9DL;
static unsigned g_79 = 0x68249875L;
static unsigned g_86 = 0xD36A7B67L;
static struct S4 g_90 = {0UL,{{0xBD16L,-229,1L,0x94F0C07EL,-1L,4294967287UL,246,-9L,0x466AL,5UL},{1,122,0,0,29,1},0L,655,0x590DL},{0x6859L,152,0xC1190EECL,6UL,3L,0x1533DA5EL,79,0xFE06BF84L,0xCCB6L,1UL},0L,6,4294967287UL,65535UL,55,{-0,78,0,-4,105,1}};
static int *g_118[2] = {&g_90.f2.f7,&g_90.f2.f7};
static struct S1 g_146 = {6212,-4224};
static struct S4 **g_147 = (void*)0;
static struct S3 g_153 = {{0UL,-196,0xCAA32A49L,0x0D67AFB2L,1L,4294967294UL,176,-1L,0xF748L,0xF4E8L},{0,33,0,1,85,1},-1L,1374,0x137EL};
static struct S3 *g_152 = &g_153;
static int g_215 = 0L;
static struct S1 *g_224 = &g_146;
static struct S1 **g_223 = &g_224;
static short g_290 = 9L;
static const struct S2 *g_292 = &g_90.f8;
static const struct S2 ** const g_291 = &g_292;



static const struct S1 func_1(void);
static unsigned func_10(struct S4 p_11, unsigned char p_12, const short p_13, struct S1 p_14, unsigned short p_15);
static struct S4 func_16(struct S1 p_17);
static struct S1 func_18(struct S0 p_19, unsigned short p_20, unsigned p_21, short p_22);
static struct S0 func_23(short p_24);
static const unsigned char func_30(struct S2 p_31, unsigned char p_32, unsigned p_33);
static struct S2 func_34(struct S4 p_35, const struct S0 p_36);
static const struct S0 func_38(unsigned short p_39, unsigned char p_40, short p_41);
static struct S4 func_44(unsigned short p_45, unsigned p_46, unsigned short p_47, unsigned short p_48);
static unsigned short func_49(unsigned short p_50);
static const struct S1 func_1(void)
{
    unsigned short l_25 = 0UL;
    short l_141 = 2L;
    int **l_142 = (void*)0;
    unsigned l_143 = 0xA3DFF51BL;
    const struct S2 ***l_293 = (void*)0;
    const struct S2 **l_295 = &g_292;
    const struct S2 ***l_294 = &l_295;
    const struct S1 l_296 = {7313,2134};
    g_290 |= (safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(((g_7 < (!(((safe_add_func_uint32_t_u_u(func_10(func_16(func_18(func_23(l_25), l_141, (g_62[0] || (l_141 | 0xB9L)), (((((void*)0 != l_142) , g_90.f8.f5) <= l_143) == g_90.f1.f1.f4))), g_90.f1.f1.f5, g_90.f7, (*g_224), g_90.f8.f4), g_90.f1.f0.f6)) <= 2UL) != l_25))) , g_61))), g_62[5])), g_90.f1.f0.f4));



    (*l_294) = g_291;
    return l_296;
}







static unsigned func_10(struct S4 p_11, unsigned char p_12, const short p_13, struct S1 p_14, unsigned short p_15)
{
    int **l_289 = &g_118[1];
    (*l_289) = &g_215;


    return (**l_289);
}







static struct S4 func_16(struct S1 p_17)
{
    struct S4 *l_149[8];
    struct S4 **l_148 = &l_149[2];
    int *l_150 = &g_58;
    int **l_151 = &l_150;
    struct S2 l_158 = {0,162,1,3,25,1};
    int l_217[5] = {7L,7L,7L,7L,7L};
    unsigned l_283 = 0xBFF95D8AL;
    int i;
    for (i = 0; i < 8; i++)
        l_149[i] = &g_90;
    (*g_57) = (g_147 == l_148);
    (*l_151) = l_150;
    if ((**l_151))
    {
        struct S3 **l_154[8] = {&g_152,&g_152,&g_152,&g_152,&g_152,&g_152,&g_152,&g_152};
        int i;
        g_152 = (g_90.f1 , g_152);
    }
    else
    {
        int l_159 = 0L;
        unsigned l_205 = 3UL;
        const struct S0 l_219 = {0x9FF4L,-295,0xD76C3EFBL,0xB689C319L,0xCBL,0xDFA9E28FL,217,-1L,0UL,1UL};
        int l_239 = 1L;
        struct S4 *** const l_259 = &l_148;
        struct S2 l_279[1][7][9] = {{{{-1,0,1,-1,32,4},{1,56,1,0,117,2},{1,56,1,0,117,2},{-1,0,1,-1,32,4},{-1,0,1,-1,32,4},{1,56,1,0,117,2},{1,56,1,0,117,2},{-1,0,1,-1,32,4},{-1,0,1,-1,32,4}},{{-0,64,1,0,90,3},{1,52,1,-4,52,1},{-0,64,1,0,90,3},{1,52,1,-4,52,1},{-0,64,1,0,90,3},{1,52,1,-4,52,1},{-0,64,1,0,90,3},{1,52,1,-4,52,1},{-0,64,1,0,90,3}},{{-1,0,1,-1,32,4},{-1,0,1,-1,32,4},{1,56,1,0,117,2},{1,56,1,0,117,2},{-1,0,1,-1,32,4},{-1,0,1,-1,32,4},{1,56,1,0,117,2},{1,56,1,0,117,2},{-1,0,1,-1,32,4}},{{-0,32,0,2,23,4},{1,52,1,-4,52,1},{-0,32,0,2,23,4},{1,52,1,-4,52,1},{-0,32,0,2,23,4},{1,52,1,-4,52,1},{-0,32,0,2,23,4},{1,52,1,-4,52,1},{-0,32,0,2,23,4}},{{-1,0,1,-1,32,4},{1,56,1,0,117,2},{1,56,1,0,117,2},{-1,0,1,-1,32,4},{-1,0,1,-1,32,4},{1,56,1,0,117,2},{1,56,1,0,117,2},{-1,0,1,-1,32,4},{-1,0,1,-1,32,4}},{{-0,64,1,0,90,3},{1,52,1,-4,52,1},{-0,64,1,0,90,3},{1,52,1,-4,52,1},{-0,64,1,0,90,3},{1,52,1,-4,52,1},{-0,64,1,0,90,3},{1,52,1,-4,52,1},{-0,64,1,0,90,3}},{{-1,0,1,-1,32,4},{-1,0,1,-1,32,4},{1,56,1,0,117,2},{1,56,1,0,117,2},{-1,0,1,-1,32,4},{-1,0,1,-1,32,4},{1,56,1,0,117,2},{1,56,1,0,117,2},{-1,0,1,-1,32,4}}}};
        int i, j, k;
        if ((((safe_div_func_int8_t_s_s((~(((safe_unary_minus_func_int32_t_s((((l_158 , &l_149[0]) != (void*)0) & l_159))) , (*l_150)) == g_90.f4)), (safe_div_func_uint32_t_u_u(func_49(g_90.f2.f6), (g_153.f1 , 6UL))))) || 0L) ^ g_90.f1.f0.f1))
        {
            const unsigned l_170[4][6][1] = {{{4294967286UL},{4UL},{5UL},{4UL},{4294967286UL},{4UL}},{{5UL},{4UL},{4294967286UL},{4UL},{5UL},{4UL}},{{4294967286UL},{4UL},{5UL},{4UL},{4294967286UL},{4UL}},{{5UL},{4UL},{4294967286UL},{4UL},{5UL},{4UL}}};
            struct S1 l_201 = {10111,-1066};
            struct S4 l_233 = {0x0EL,{{0xC7C5L,1010,0xDF935E8AL,4294967295UL,6L,0x611CC5E7L,198,0x72BF05E4L,65530UL,0xBA70L},{1,35,0,-3,102,2},0x42L,956,1UL},{65535UL,303,0x42B1254AL,0xA737E91FL,-1L,0xB9983F3DL,90,9L,0x5A8FL,0x0893L},0x6C36EFDCL,1,0UL,0x6B50L,283,{1,105,1,-4,57,3}};
            int *l_262 = &g_58;
            int i, j, k;
            for (g_90.f2.f9 = 4; (g_90.f2.f9 < 17); g_90.f2.f9 = safe_add_func_int8_t_s_s(g_90.f2.f9, 8))
            {
                struct S2 l_175[8] = {{0,165,0,0,108,2},{-1,127,1,-4,108,4},{0,165,0,0,108,2},{-1,127,1,-4,108,4},{0,165,0,0,108,2},{-1,127,1,-4,108,4},{0,165,0,0,108,2},{-1,127,1,-4,108,4}};
                int *l_183[1];
                struct S4 l_186 = {255UL,{{0x8A42L,486,7L,4294967291UL,0L,0xA15FA5D2L,88,1L,65535UL,0xA034L},{-1,123,0,0,114,2},7L,710,0UL},{0x869CL,-454,0xEAF0886DL,4294967295UL,4L,0xF3C9A2DEL,230,-1L,0x1F99L,0xEEA2L},-8L,-4,4294967294UL,0xE8B9L,28,{0,90,1,4,112,0}};
                struct S3 **l_202 = (void*)0;
                short l_236[1][10] = {{1L,0x8D4CL,0x8D4CL,1L,0x8D4CL,0x8D4CL,1L,0x8D4CL,0x8D4CL,1L}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_183[i] = &g_58;
                (*l_148) = (*l_148);
                if ((safe_add_func_int8_t_s_s(g_90.f2.f8, (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((l_170[1][3][0] || p_17.f1), (+((safe_lshift_func_uint16_t_u_u(0xCBB3L, g_90.f2.f6)) > p_17.f1)))) == (((-1L) && (l_170[1][3][0] > func_49(l_170[1][3][0]))) >= p_17.f0)), 1)))))
                {
                    int l_182[7][7] = {{0L,0x9EBF2FEBL,(-1L),(-2L),(-2L),(-1L),0x9EBF2FEBL},{0L,0x9EBF2FEBL,(-1L),(-2L),(-2L),(-1L),0xE8B87F2FL},{(-2L),0xE8B87F2FL,(-1L),(-1L),(-1L),(-1L),0xE8B87F2FL},{(-2L),0xE8B87F2FL,(-1L),(-1L),(-1L),(-1L),0xE8B87F2FL},{(-2L),0xE8B87F2FL,(-1L),(-1L),(-1L),(-1L),0xE8B87F2FL},{(-2L),0xE8B87F2FL,(-1L),(-1L),(-1L),(-1L),0xE8B87F2FL},{(-2L),0xE8B87F2FL,(-1L),(-1L),(-1L),(-1L),0xE8B87F2FL}};
                    int i, j;
                    for (g_66 = 0; (g_66 > 23); g_66 = safe_add_func_uint32_t_u_u(g_66, 3))
                    {
                        struct S2 *l_176 = &g_55;
                        int l_179 = 0xB9991152L;
                        (*l_176) = l_175[4];
                        l_175[4].f3 = (safe_sub_func_uint8_t_u_u(l_179, (safe_rshift_func_uint8_t_u_u(l_159, (p_17.f1 , p_17.f1)))));
                        if (l_182[1][3])
                            break;
                        l_183[0] = (*l_151);
                    }
                    for (g_79 = 0; (g_79 == 9); ++g_79)
                    {
                        return l_186;
                    }
                    if (p_17.f0)
                        continue;
                    (**l_151) = (safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((**l_151) > (safe_mul_func_int16_t_s_s(p_17.f0, (safe_mod_func_uint16_t_u_u(p_17.f1, (safe_lshift_func_int16_t_s_s(0xAD36L, 6))))))), p_17.f0)), ((safe_mod_func_uint8_t_u_u(p_17.f1, ((((l_201 , l_202) != l_202) ^ g_153.f0.f2) | g_90.f2.f7))) < (-1L)))), l_182[6][1]));
                }
                else
                {
                    char l_212 = (-1L);
                    struct S2 l_216[9][3][6] = {{{{-0,149,1,4,61,1},{1,98,0,-0,104,4},{0,43,0,-2,68,1},{1,98,0,-0,104,4},{-0,149,1,4,61,1},{0,144,1,2,5,1}},{{-0,86,1,3,102,2},{1,81,0,3,10,1},{0,43,0,-2,68,1},{-0,153,0,3,62,3},{-0,106,0,-4,27,3},{0,43,0,-2,68,1}},{{-0,106,0,-4,27,3},{-0,94,1,-2,103,3},{0,144,1,2,5,1},{1,81,0,3,10,1},{1,106,0,1,4,3},{0,43,0,-2,68,1}}},{{{1,81,0,3,10,1},{1,106,0,1,4,3},{0,43,0,-2,68,1},{-0,86,1,3,102,2},{-0,123,1,-0,33,2},{0,144,1,2,5,1}},{{1,106,0,1,4,3},{-0,149,1,4,61,1},{0,43,0,-2,68,1},{-0,94,1,-2,103,3},{-0,94,1,-2,103,3},{0,43,0,-2,68,1}},{{-0,153,0,3,62,3},{-0,153,0,3,62,3},{0,144,1,2,5,1},{-0,123,1,-0,33,2},{-0,86,1,3,102,2},{0,43,0,-2,68,1}}},{{{-0,123,1,-0,33,2},{-0,86,1,3,102,2},{0,43,0,-2,68,1},{1,106,0,1,4,3},{1,81,0,3,10,1},{0,144,1,2,5,1}},{{1,98,0,-0,104,4},{-0,123,1,-0,33,2},{0,43,0,-2,68,1},{-0,106,0,-4,27,3},{-0,153,0,3,62,3},{0,43,0,-2,68,1}},{{-0,94,1,-2,103,3},{-0,106,0,-4,27,3},{0,144,1,2,5,1},{-0,149,1,4,61,1},{1,98,0,-0,104,4},{0,43,0,-2,68,1}}},{{{-0,149,1,4,61,1},{1,98,0,-0,104,4},{0,43,0,-2,68,1},{1,98,0,-0,104,4},{-0,149,1,4,61,1},{-0,149,1,4,61,1}},{{-0,99,0,3,117,4},{0,160,1,-2,8,2},{1,81,0,3,10,1},{-1,33,0,-1,96,0},{-0,171,1,-1,91,2},{1,81,0,3,10,1}},{{-0,171,1,-1,91,2},{-1,88,1,2,101,0},{-0,149,1,4,61,1},{0,160,1,-2,8,2},{1,77,0,0,111,0},{1,81,0,3,10,1}}},{{{0,160,1,-2,8,2},{1,77,0,0,111,0},{1,81,0,3,10,1},{-0,99,0,3,117,4},{1,30,1,-0,10,3},{-0,149,1,4,61,1}},{{1,77,0,0,111,0},{-0,117,1,4,96,3},{1,81,0,3,10,1},{-1,88,1,2,101,0},{-1,88,1,2,101,0},{1,81,0,3,10,1}},{{-1,33,0,-1,96,0},{-1,33,0,-1,96,0},{-0,149,1,4,61,1},{1,30,1,-0,10,3},{-0,99,0,3,117,4},{1,81,0,3,10,1}}},{{{1,30,1,-0,10,3},{-0,99,0,3,117,4},{1,81,0,3,10,1},{1,77,0,0,111,0},{0,160,1,-2,8,2},{-0,149,1,4,61,1}},{{-0,142,1,-2,52,4},{1,30,1,-0,10,3},{1,81,0,3,10,1},{-0,171,1,-1,91,2},{-1,33,0,-1,96,0},{1,81,0,3,10,1}},{{-1,88,1,2,101,0},{-0,171,1,-1,91,2},{-0,149,1,4,61,1},{-0,117,1,4,96,3},{-0,142,1,-2,52,4},{1,81,0,3,10,1}}},{{{-0,117,1,4,96,3},{-0,142,1,-2,52,4},{1,81,0,3,10,1},{-0,142,1,-2,52,4},{-0,117,1,4,96,3},{-0,149,1,4,61,1}},{{-0,99,0,3,117,4},{0,160,1,-2,8,2},{1,81,0,3,10,1},{-1,33,0,-1,96,0},{-0,171,1,-1,91,2},{1,81,0,3,10,1}},{{-0,171,1,-1,91,2},{-1,88,1,2,101,0},{-0,149,1,4,61,1},{0,160,1,-2,8,2},{1,77,0,0,111,0},{1,81,0,3,10,1}}},{{{0,160,1,-2,8,2},{1,77,0,0,111,0},{1,81,0,3,10,1},{-0,99,0,3,117,4},{1,30,1,-0,10,3},{-0,149,1,4,61,1}},{{1,77,0,0,111,0},{-0,117,1,4,96,3},{1,81,0,3,10,1},{-1,88,1,2,101,0},{-1,88,1,2,101,0},{1,81,0,3,10,1}},{{-1,33,0,-1,96,0},{-1,33,0,-1,96,0},{-0,149,1,4,61,1},{1,30,1,-0,10,3},{-0,99,0,3,117,4},{1,81,0,3,10,1}}},{{{1,30,1,-0,10,3},{-0,99,0,3,117,4},{1,81,0,3,10,1},{1,77,0,0,111,0},{0,160,1,-2,8,2},{-0,149,1,4,61,1}},{{-0,142,1,-2,52,4},{1,30,1,-0,10,3},{1,81,0,3,10,1},{-0,171,1,-1,91,2},{-0,142,1,-2,52,4},{-0,106,0,-4,27,3}},{{-0,99,0,3,117,4},{1,77,0,0,111,0},{-0,94,1,-2,103,3},{-1,88,1,2,101,0},{0,160,1,-2,8,2},{-0,106,0,-4,27,3}}}};
                    int l_218 = 0L;
                    struct S1 *l_221 = &l_201;
                    struct S1 **l_220 = &l_221;
                    struct S1 ***l_222 = (void*)0;
                    int i, j, k;
                    g_223 = (((p_17.f0 >= (func_34(func_44(((((safe_div_func_int16_t_s_s((l_205 > (safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(l_212, (g_90.f1.f0.f4 & p_17.f0))), (((safe_add_func_int8_t_s_s((g_215 != ((((((func_30(l_216[8][0][2], p_17.f0, g_90.f1.f0.f2) , l_217[4]) <= l_170[1][3][0]) , l_159) | p_17.f0) > l_205) >= l_218)), 0x9FL)) >= 0x4A25CA21L) == l_201.f1))), p_17.f1))), 2L)) == g_153.f1.f4) & g_90.f6) , g_90.f1.f0.f9), l_216[8][0][2].f5, g_79, g_90.f8.f0), l_219) , p_17.f1)) > g_153.f4) , l_220);

                    ;
                    for (l_186.f2.f7 = 8; (l_186.f2.f7 >= 0); l_186.f2.f7 -= 1)
                    {
                        int i;
                        (*g_57) &= g_62[l_186.f2.f7];
                        if (g_62[l_186.f2.f7])
                            continue;
                        (**l_151) = (p_17.f0 == func_30(l_186.f1.f1, p_17.f1, (safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(g_90.f4, (safe_mul_func_int8_t_s_s(func_30(func_34(l_233, func_23(((safe_lshift_func_int8_t_s_s(p_17.f0, 6)) != p_17.f1))), p_17.f0, p_17.f0), 0x85L)))), 255UL)), l_236[0][0]))));
                    }
                    if (func_30(g_153.f1, (0x70L < ((g_153.f1.f0 < ((*g_152) , 0xB6B4L)) || ((0x43ECA00CL <= (safe_div_func_uint16_t_u_u((g_90.f1.f0.f7 >= 0xC12EL), g_90.f1.f0.f6))) > l_239))), g_90.f1.f1.f3))
                    {
                        return l_186;


                    }
                    else
                    {
                        struct S1 * const *l_242 = &g_224;
                        struct S3 l_248 = {{0xA4EBL,431,1L,0x4A2A40ABL,0x74L,0x7F0A3790L,204,8L,0x4127L,0x0A07L},{1,126,0,-1,40,2},-3L,646,0UL};
                        struct S4 ** const l_249 = &l_149[3];
                        struct S4 ***l_250 = (void*)0;
                        struct S4 ***l_251 = &l_148;
                        const struct S2 *l_256[10][1] = {{&l_216[8][0][2]},{&l_216[8][0][2]},{&l_158},{&l_216[8][0][2]},{&l_216[8][0][2]},{&l_158},{&l_216[8][0][2]},{&l_216[8][0][2]},{&l_158},{&l_216[8][0][2]}};
                        int i, j;
                        (**l_151) = (safe_lshift_func_int16_t_s_u((l_242 == &g_224), (safe_mod_func_uint32_t_u_u(func_30(l_233.f1.f1, l_212, func_49((safe_unary_minus_func_int16_t_s((safe_mod_func_int32_t_s_s((((g_90.f8.f5 , func_30(l_186.f1.f1, g_153.f4, p_17.f0)) <= g_90.f2.f1) > p_17.f0), p_17.f1)))))), 0xE5E474B9L))));
                        (*l_251) = (((func_30(l_233.f1.f1, l_219.f1, (&l_186 != (void*)0)) && (*l_150)) , l_248) , l_249);
                        (*g_57) |= p_17.f1;
                        (**l_151) ^= ((safe_rshift_func_uint8_t_u_u((func_49(p_17.f0) | (p_17.f1 == (safe_add_func_uint32_t_u_u(l_218, (l_175[2] , (l_216[8][0][2].f3 , ((void*)0 == l_256[1][0]))))))), 4)) || (l_219.f9 ^ 7UL));
                    }
                }
                (*l_150) = (safe_mul_func_int8_t_s_s(p_17.f1, g_90.f1.f1.f0));
                if (p_17.f1)
                    break;
            }


            (*l_150) &= ((void*)0 == l_259);
            for (g_63 = 0; (g_63 != 1); ++g_63)
            {
                (*l_151) = l_262;
            }
        }
        else
        {
            unsigned char l_273 = 254UL;
            unsigned l_278[2][3][4] = {{{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0UL,0UL},{4294967295UL,0UL,4294967295UL,1UL}},{{4294967295UL,0UL,1UL,1UL},{0UL,0UL,0UL,0UL},{0UL,4294967295UL,0UL,4294967295UL}}};
            int *l_280 = &g_90.f2.f2;
            int i, j, k;
            (*l_150) |= ((safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((*l_259) != &l_149[2]), 0x66L)) < (safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((0UL | p_17.f1), (g_90.f1.f1.f4 == (+(l_205 || g_90.f1.f0.f5))))), ((safe_mul_func_int16_t_s_s(g_90.f2.f0, 0L)) || g_90.f2.f6)))), l_273)) , 0xE7A2E879L);
            (*l_280) |= ((l_239 || (0L ^ p_17.f1)) || (safe_mul_func_int16_t_s_s((g_90.f8 , (safe_mod_func_int16_t_s_s(((void*)0 == &g_90), l_278[0][1][2]))), func_30(l_279[0][4][2], p_17.f1, p_17.f0))));
        }


    }


    if ((((((func_30(g_90.f1.f1, (safe_mul_func_int16_t_s_s((((p_17.f0 || (-1L)) >= g_215) , (9L ^ l_283)), (((safe_div_func_int32_t_s_s((-1L), (**l_151))) < ((p_17.f0 && 0xC0EC7540L) ^ (*l_150))) & 0xB6654BD8L))), (**l_151)) && (*l_150)) > g_7) >= 0x7B599ED7L) < g_86) == 0L))
    {
        if (p_17.f1)
        {
            g_57 = &g_58;
        }
        else
        {
            for (g_66 = 0; (g_66 == 26); g_66 = safe_add_func_uint32_t_u_u(g_66, 1))
            {
                (*l_151) = (*l_151);
            }
        }
    }
    else
    {
        struct S4 l_288 = {0x7EL,{{1UL,-236,7L,0xDE9F8228L,-1L,4294967295UL,91,0x49B3D710L,65534UL,1UL},{0,4,0,-2,98,4},0L,543,0x049EL},{65535UL,-995,0L,0x61177807L,-1L,0x86C76AD6L,178,0xB2B47FD7L,65535UL,0x92D1L},0xD5928DD1L,-3,4294967286UL,0xB739L,1170,{1,69,1,-3,98,0}};
        (*l_151) = (*l_151);
        return l_288;
    }
    return g_90;
}







static struct S1 func_18(struct S0 p_19, unsigned short p_20, unsigned p_21, short p_22)
{
    struct S4 *l_144 = (void*)0;
    struct S4 **l_145 = &l_144;
    (*l_145) = l_144;
    return g_146;
}







static struct S0 func_23(short p_24)
{
    unsigned l_29[4] = {4294967293UL,4294967293UL,4294967293UL,4294967293UL};
    struct S4 l_37 = {1UL,{{0x0341L,30,0x44AA8452L,2UL,0x53L,0xB7457E6EL,200,0L,0x3695L,7UL},{1,17,0,-4,24,1},0x2BL,814,0xAC75L},{65535UL,160,0xFF97477CL,0x84333342L,-1L,0UL,134,0xE8F17059L,5UL,3UL},0x97F862FEL,7,4294967295UL,9UL,1130,{-0,9,0,2,59,4}};
    int *l_140 = (void*)0;
    int i;
    l_37.f8.f0 = (safe_rshift_func_uint16_t_u_u(((((safe_unary_minus_func_uint8_t_u((l_29[1] <= ((func_30(func_34(l_37, func_38((p_24 > ((l_37.f2.f6 || (0x45D9FCA9L & (safe_lshift_func_uint16_t_u_s(p_24, (65535UL && (func_44(func_49((g_7 >= (safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s(g_7, p_24)) && g_7), g_7)))), g_7, p_24, l_37.f8.f4) , 0L)))))) < (-1L))), g_90.f1.f0.f5, l_37.f2.f0)), l_37.f2.f8, g_62[5]) || 0x85L) <= 4UL)))) , p_24) <= l_37.f1.f0.f6) && (-6L)), 12));
    return g_90.f1.f0;
}







static const unsigned char func_30(struct S2 p_31, unsigned char p_32, unsigned p_33)
{
    struct S2 *l_134 = &g_55;
    int l_135 = 0L;
    int *l_138 = &g_58;
    const unsigned l_139 = 0x6F7A0816L;
    (*l_134) = p_31;
    l_135 |= p_31.f1;
    (*l_138) = ((func_49((safe_rshift_func_uint8_t_u_s(0UL, 1))) & 253UL) < (0UL & g_90.f1.f0.f3));
    return l_139;
}







static struct S2 func_34(struct S4 p_35, const struct S0 p_36)
{
    for (g_90.f3 = 1; (g_90.f3 >= 0); g_90.f3 -= 1)
    {
        struct S3 l_128 = {{0x54B7L,986,0xAA42E91CL,1UL,1L,0UL,71,-1L,0UL,65528UL},{1,36,0,0,100,2},7L,106,1UL};
        int *l_133 = &l_128.f0.f2;
        int i;
        (*l_133) = (safe_mul_func_uint8_t_u_u((l_128 , (func_49((l_128.f1.f2 == (p_35.f1.f0.f4 > (safe_div_func_uint16_t_u_u((((p_35.f1.f1.f5 && ((func_49(p_35.f4) != g_90.f8.f0) ^ p_36.f9)) , (safe_mul_func_uint8_t_u_u(p_35.f2.f5, p_35.f8.f5))) && (-8L)), 0x71E8L))))) >= 4294967292UL)), 0xE1L));
        (*g_57) &= p_35.f2.f2;
        if ((*l_133))
            break;
    }
    return p_35.f1.f1;
}







static const struct S0 func_38(unsigned short p_39, unsigned char p_40, short p_41)
{
    unsigned short l_114 = 65534UL;
    struct S2 l_117 = {-0,163,0,-4,81,1};
    int **l_119 = &g_118[1];
    (*l_119) = ((((safe_rshift_func_uint8_t_u_u((((0x0982D639L & (safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_s(0x7AL, 2))))) <= (safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(0x62FA0CCBL, (safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((g_90.f1.f0.f3 >= (((~(safe_add_func_uint8_t_u_u(p_39, ((safe_add_func_uint8_t_u_u(((func_49(l_114) && (safe_mod_func_int16_t_s_s((((((l_117 , g_90.f1) , p_39) , 0x94E5E5AFL) & l_117.f4) > 0x41L), p_39))) && (-1L)), l_117.f1)) , l_117.f0)))) > 0x09D507F3L) > g_90.f2.f8)) || 4L), l_117.f5)), 6)))), l_117.f2))) & 1L), p_40)) == p_41) > 65535UL) , g_118[1]);
    (*g_57) = (safe_lshift_func_uint16_t_u_u((g_90.f2.f7 >= g_90.f2.f5), 7));
    (*l_119) = (*l_119);
    l_117.f3 |= func_49((((g_90 , ((+p_40) || p_39)) <= ((g_90.f1 , (safe_mul_func_int16_t_s_s((p_40 > (p_39 , g_7)), (**l_119)))) >= g_61)) & (-8L)));
    return g_90.f2;
}







static struct S4 func_44(unsigned short p_45, unsigned p_46, unsigned short p_47, unsigned short p_48)
{
    int l_69[4];
    int *l_71 = (void*)0;
    int l_73 = (-4L);
    int l_76[1];
    struct S1 l_82 = {11237,-8131};
    char l_84 = 0xA6L;
    struct S4 *l_89 = &g_90;
    int *l_93 = (void*)0;
    int *l_94 = &l_76[0];
    int i;
    for (i = 0; i < 4; i++)
        l_69[i] = (-1L);
    for (i = 0; i < 1; i++)
        l_76[i] = 0x0FE60D97L;
    if (l_69[2])
    {
        int *l_70 = &g_58;
        (*l_70) |= func_49(p_48);
        for (g_65 = 8; (g_65 >= 3); g_65 -= 1)
        {
            int **l_72 = &l_70;
            (*l_72) = l_71;

            ;
            for (g_58 = 0; (g_58 <= 8); g_58 += 1)
            {
                for (p_47 = 0; (p_47 <= 3); p_47 += 1)
                {
                    for (p_46 = 3; (p_46 <= 8); p_46 += 1)
                    {
                        int i;
                        if (g_62[g_58])
                            break;
                    }
                }
            }
        }

        ;
    }
    else
    {
        int *l_74 = &l_73;
        int *l_75 = (void*)0;
        int *l_77 = &g_58;
        int *l_78[1];
        struct S1 *l_83 = &l_82;
        int l_85 = 0xE9942918L;
        struct S4 **l_91 = (void*)0;
        struct S4 **l_92 = &l_89;
        int i;
        for (i = 0; i < 1; i++)
            l_78[i] = &g_58;
        g_79++;
        (*l_83) = l_82;
        g_86++;
        (*l_92) = l_89;
    }
    (*g_57) ^= p_48;
    (*l_94) &= (*g_57);
    (*l_94) = (safe_rshift_func_int16_t_s_u(((l_89 != &g_90) != func_49(p_48)), 11));
    return (*l_89);
}







static unsigned short func_49(unsigned short p_50)
{
    struct S2 *l_56 = &g_55;
    int **l_59[10][3][8] = {{{&g_57,&g_57,(void*)0,&g_57,&g_57,&g_57,&g_57,(void*)0},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{(void*)0,&g_57,&g_57,&g_57,(void*)0,&g_57,&g_57,&g_57}},{{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57}},{{&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0,(void*)0,(void*)0},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57}},{{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{(void*)0,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0,&g_57},{(void*)0,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0}},{{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,(void*)0,&g_57,(void*)0,(void*)0,&g_57},{&g_57,(void*)0,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57}},{{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{(void*)0,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0},{(void*)0,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57}},{{&g_57,&g_57,(void*)0,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,(void*)0,(void*)0,&g_57,&g_57,&g_57,&g_57,(void*)0},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0}},{{(void*)0,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0}},{{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0},{(void*)0,&g_57,&g_57,(void*)0,&g_57,(void*)0,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57}},{{(void*)0,(void*)0,&g_57,&g_57,&g_57,(void*)0,&g_57,&g_57},{&g_57,&g_57,&g_57,(void*)0,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0,(void*)0,&g_57}}};
    int l_60 = 0xFA74B5D4L;
    int i, j, k;
    (*l_56) = g_55;
    g_57 = g_57;
    --g_66;
    return g_55.f2;
}





int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_55.f1, "g_55.f1", print_hash_value);
    transparent_crc(g_55.f2, "g_55.f2", print_hash_value);
    transparent_crc(g_55.f3, "g_55.f3", print_hash_value);
    transparent_crc(g_55.f4, "g_55.f4", print_hash_value);
    transparent_crc(g_55.f5, "g_55.f5", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1.f0.f0, "g_90.f1.f0.f0", print_hash_value);
    transparent_crc(g_90.f1.f0.f1, "g_90.f1.f0.f1", print_hash_value);
    transparent_crc(g_90.f1.f0.f2, "g_90.f1.f0.f2", print_hash_value);
    transparent_crc(g_90.f1.f0.f3, "g_90.f1.f0.f3", print_hash_value);
    transparent_crc(g_90.f1.f0.f4, "g_90.f1.f0.f4", print_hash_value);
    transparent_crc(g_90.f1.f0.f5, "g_90.f1.f0.f5", print_hash_value);
    transparent_crc(g_90.f1.f0.f6, "g_90.f1.f0.f6", print_hash_value);
    transparent_crc(g_90.f1.f0.f7, "g_90.f1.f0.f7", print_hash_value);
    transparent_crc(g_90.f1.f0.f8, "g_90.f1.f0.f8", print_hash_value);
    transparent_crc(g_90.f1.f0.f9, "g_90.f1.f0.f9", print_hash_value);
    transparent_crc(g_90.f1.f1.f0, "g_90.f1.f1.f0", print_hash_value);
    transparent_crc(g_90.f1.f1.f1, "g_90.f1.f1.f1", print_hash_value);
    transparent_crc(g_90.f1.f1.f2, "g_90.f1.f1.f2", print_hash_value);
    transparent_crc(g_90.f1.f1.f3, "g_90.f1.f1.f3", print_hash_value);
    transparent_crc(g_90.f1.f1.f4, "g_90.f1.f1.f4", print_hash_value);
    transparent_crc(g_90.f1.f1.f5, "g_90.f1.f1.f5", print_hash_value);
    transparent_crc(g_90.f1.f2, "g_90.f1.f2", print_hash_value);
    transparent_crc(g_90.f1.f3, "g_90.f1.f3", print_hash_value);
    transparent_crc(g_90.f1.f4, "g_90.f1.f4", print_hash_value);
    transparent_crc(g_90.f2.f0, "g_90.f2.f0", print_hash_value);
    transparent_crc(g_90.f2.f1, "g_90.f2.f1", print_hash_value);
    transparent_crc(g_90.f2.f2, "g_90.f2.f2", print_hash_value);
    transparent_crc(g_90.f2.f3, "g_90.f2.f3", print_hash_value);
    transparent_crc(g_90.f2.f4, "g_90.f2.f4", print_hash_value);
    transparent_crc(g_90.f2.f5, "g_90.f2.f5", print_hash_value);
    transparent_crc(g_90.f2.f6, "g_90.f2.f6", print_hash_value);
    transparent_crc(g_90.f2.f7, "g_90.f2.f7", print_hash_value);
    transparent_crc(g_90.f2.f8, "g_90.f2.f8", print_hash_value);
    transparent_crc(g_90.f2.f9, "g_90.f2.f9", print_hash_value);
    transparent_crc(g_90.f3, "g_90.f3", print_hash_value);
    transparent_crc(g_90.f4, "g_90.f4", print_hash_value);
    transparent_crc(g_90.f5, "g_90.f5", print_hash_value);
    transparent_crc(g_90.f6, "g_90.f6", print_hash_value);
    transparent_crc(g_90.f7, "g_90.f7", print_hash_value);
    transparent_crc(g_90.f8.f0, "g_90.f8.f0", print_hash_value);
    transparent_crc(g_90.f8.f1, "g_90.f8.f1", print_hash_value);
    transparent_crc(g_90.f8.f2, "g_90.f8.f2", print_hash_value);
    transparent_crc(g_90.f8.f3, "g_90.f8.f3", print_hash_value);
    transparent_crc(g_90.f8.f4, "g_90.f8.f4", print_hash_value);
    transparent_crc(g_90.f8.f5, "g_90.f8.f5", print_hash_value);
    transparent_crc(g_146.f0, "g_146.f0", print_hash_value);
    transparent_crc(g_146.f1, "g_146.f1", print_hash_value);
    transparent_crc(g_153.f0.f0, "g_153.f0.f0", print_hash_value);
    transparent_crc(g_153.f0.f1, "g_153.f0.f1", print_hash_value);
    transparent_crc(g_153.f0.f2, "g_153.f0.f2", print_hash_value);
    transparent_crc(g_153.f0.f3, "g_153.f0.f3", print_hash_value);
    transparent_crc(g_153.f0.f4, "g_153.f0.f4", print_hash_value);
    transparent_crc(g_153.f0.f5, "g_153.f0.f5", print_hash_value);
    transparent_crc(g_153.f0.f6, "g_153.f0.f6", print_hash_value);
    transparent_crc(g_153.f0.f7, "g_153.f0.f7", print_hash_value);
    transparent_crc(g_153.f0.f8, "g_153.f0.f8", print_hash_value);
    transparent_crc(g_153.f0.f9, "g_153.f0.f9", print_hash_value);
    transparent_crc(g_153.f1.f0, "g_153.f1.f0", print_hash_value);
    transparent_crc(g_153.f1.f1, "g_153.f1.f1", print_hash_value);
    transparent_crc(g_153.f1.f2, "g_153.f1.f2", print_hash_value);
    transparent_crc(g_153.f1.f3, "g_153.f1.f3", print_hash_value);
    transparent_crc(g_153.f1.f4, "g_153.f1.f4", print_hash_value);
    transparent_crc(g_153.f1.f5, "g_153.f1.f5", print_hash_value);
    transparent_crc(g_153.f2, "g_153.f2", print_hash_value);
    transparent_crc(g_153.f3, "g_153.f3", print_hash_value);
    transparent_crc(g_153.f4, "g_153.f4", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
