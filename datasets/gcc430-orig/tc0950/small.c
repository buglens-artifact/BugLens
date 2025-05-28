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
   const char f0;
   int f1;
   unsigned short f2;
   int f3;
   short f4;
};


static unsigned g_3 = 0xED080C17L;
static short g_19[6] = {0L,0x1A09L,0L,0L,0x1A09L,0L};
static int g_21 = 0xC0DCEE05L;
static volatile unsigned g_24 = 4294967287UL;
static char g_79 = 0x5FL;
static char *g_78 = &g_79;
static unsigned char g_85 = 0UL;
static int g_116 = 0xF62EB7B5L;
static int *g_122 = (void*)0;
static unsigned short g_132 = 5UL;
static unsigned g_144 = 0x475B274BL;
static unsigned g_179 = 0x4BC14809L;
static unsigned char g_199 = 4UL;
static int g_220 = (-1L);
static unsigned short g_221 = 1UL;
static int g_240 = 0xE52BEC05L;
static volatile unsigned g_248 = 0x87E7BF93L;
static volatile unsigned *g_247 = &g_248;
static volatile unsigned **g_246 = &g_247;
static int ****g_288 = (void*)0;
static unsigned short *g_297[1] = {(void*)0};
static unsigned short **g_296 = &g_297[0];
static unsigned g_304 = 0xB2292007L;
static int g_308[7][5][4] = {{{0xB3017861L,0x20FB83DAL,0x26EF9ED5L,0x20FB83DAL},{0xB3017861L,0x8AF96AB8L,(-7L),0x20FB83DAL},{(-7L),0x20FB83DAL,(-7L),0x8AF96AB8L},{0xB3017861L,0x20FB83DAL,0x26EF9ED5L,0x20FB83DAL},{0xB3017861L,0x8AF96AB8L,(-7L),0x20FB83DAL}},{{(-7L),0x20FB83DAL,(-7L),0x8AF96AB8L},{0xB3017861L,0x20FB83DAL,0x26EF9ED5L,0x20FB83DAL},{0xB3017861L,0x8AF96AB8L,(-7L),0x20FB83DAL},{(-7L),0x20FB83DAL,(-7L),0x8AF96AB8L},{0xB3017861L,0x20FB83DAL,0x26EF9ED5L,0x8AF96AB8L}},{{(-7L),9L,0x26EF9ED5L,0x8AF96AB8L},{0x26EF9ED5L,0x8AF96AB8L,0x26EF9ED5L,9L},{(-7L),0x8AF96AB8L,0xB3017861L,0x8AF96AB8L},{(-7L),9L,0x26EF9ED5L,0x8AF96AB8L},{0x26EF9ED5L,0x8AF96AB8L,0x26EF9ED5L,9L}},{{(-7L),0x8AF96AB8L,0xB3017861L,0x8AF96AB8L},{(-7L),9L,0x26EF9ED5L,0x8AF96AB8L},{0x26EF9ED5L,0x8AF96AB8L,0x26EF9ED5L,9L},{(-7L),0x8AF96AB8L,0xB3017861L,0x8AF96AB8L},{(-7L),9L,0x26EF9ED5L,0x8AF96AB8L}},{{0x26EF9ED5L,0x8AF96AB8L,0x26EF9ED5L,9L},{(-7L),0x8AF96AB8L,0xB3017861L,0x8AF96AB8L},{(-7L),9L,0x26EF9ED5L,0x8AF96AB8L},{0x26EF9ED5L,0x8AF96AB8L,0x26EF9ED5L,9L},{(-7L),0x8AF96AB8L,0xB3017861L,0x8AF96AB8L}},{{(-7L),9L,0x26EF9ED5L,0x8AF96AB8L},{0x26EF9ED5L,0x8AF96AB8L,0x26EF9ED5L,9L},{(-7L),0x8AF96AB8L,0xB3017861L,0x8AF96AB8L},{(-7L),9L,0x26EF9ED5L,0x8AF96AB8L},{0x26EF9ED5L,0x8AF96AB8L,0x26EF9ED5L,9L}},{{(-7L),0x8AF96AB8L,0xB3017861L,0x8AF96AB8L},{(-7L),9L,0x26EF9ED5L,0x8AF96AB8L},{0x26EF9ED5L,0x8AF96AB8L,0x26EF9ED5L,9L},{(-7L),0x8AF96AB8L,0xB3017861L,0x8AF96AB8L},{(-7L),9L,0x26EF9ED5L,0x8AF96AB8L}}};
static volatile union U0 g_310 = {-6L};
static const volatile union U0 *g_309 = &g_310;
static char g_324[1] = {0L};
static union U0 g_331[4][4][3] = {{{{0x86L},{0x86L},{0x0BL}},{{0x0FL},{0x5EL},{0x38L}},{{0x0FL},{0x62L},{0x2CL}},{{0x86L},{-1L},{0x5EL}}},{{{0x2CL},{0x0FL},{0x2CL}},{{0xF0L},{0xDCL},{0x38L}},{{0x5CL},{0xDCL},{0x0BL}},{{-1L},{0x0FL},{0xE7L}}},{{{0L},{-1L},{-1L}},{{-1L},{0x62L},{0x86L}},{{0x5CL},{0x5EL},{0x86L}},{{0xF0L},{0x86L},{-1L}}},{{{0x2CL},{0x0BL},{0xE7L}},{{0x86L},{0x86L},{0x0BL}},{{0x0FL},{0x5EL},{0x38L}},{{0x0FL},{0x62L},{0x2CL}}}};
static union U0 g_333 = {-1L};
static unsigned g_403 = 0xA7D39667L;
static unsigned g_404 = 5UL;
static unsigned g_426 = 0xDB7B880FL;
static short g_590 = 0L;
static unsigned short *g_651 = &g_132;
static int g_658 = 0xD2287604L;
static const int *g_708 = &g_308[3][4][1];
static volatile int g_752 = 0x3BE88CE2L;
static volatile int g_753 = (-9L);
static volatile int *g_751[4] = {&g_752,&g_752,&g_752,&g_752};
static volatile int **g_750 = &g_751[0];
static volatile int ***g_749 = &g_750;
static char * const *g_777 = (void*)0;
static union U0 g_830 = {0xA1L};
static union U0 *g_829 = &g_830;
static int g_905 = 0x6CDDFFFEL;
static int *g_904 = &g_905;
static unsigned g_908 = 0UL;
static volatile unsigned g_977 = 4294967295UL;



static short func_1(void);
static short func_11(unsigned char p_12, unsigned char p_13, unsigned char p_14);
static const int func_36(int * p_37, int p_38, int * p_39, int * p_40);
static int * func_41(short p_42, short p_43);
static unsigned func_53(const int * p_54, union U0 p_55);
static const int * func_56(int * p_57, int p_58);
static unsigned func_61(int * p_62, char * p_63, int p_64, char p_65, unsigned p_66);
static char * func_67(short p_68, int p_69, const int * p_70, char * p_71, char * p_72);
static unsigned short func_88(int p_89, unsigned short p_90);
static unsigned short func_94(unsigned char * p_95, int * p_96, short p_97);
static short func_1(void)
{
    char l_2[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    const int l_6[6] = {0L,0x8DEE21AFL,0x8DEE21AFL,0L,0x8DEE21AFL,0x8DEE21AFL};
    char l_15 = 1L;
    int l_16 = 0x7FEAE215L;
    unsigned l_30[9][3][4] = {{{4294967295UL,0x1FA7BB34L,0x405B7518L,4294967288UL},{0x9A81FFDEL,8UL,4294967288UL,4294967295UL},{0x9A81FFDEL,8UL,0x405B7518L,0x405B7518L}},{{4294967295UL,4294967295UL,0UL,1UL},{0x44BD1A6FL,0UL,4294967294UL,0x2646899DL},{0x405B7518L,0x910C3349L,0UL,4294967294UL}},{{4294967294UL,0UL,0x2646899DL,0x44BD1A6FL},{0UL,0x9A81FFDEL,0UL,0x1FA7BB34L},{0UL,0x2646899DL,4294967288UL,0xA498A597L}},{{1UL,0UL,0x1FA7BB34L,0x2646899DL},{0x44BD1A6FL,6UL,0x1FA7BB34L,0x910C3349L},{1UL,4294967288UL,4294967288UL,1UL}},{{0UL,0x44BD1A6FL,0UL,4294967294UL},{0UL,4294967294UL,0x2646899DL,6UL},{0x3E8AF804L,4294967295UL,0x405B7518L,6UL}},{{0xA498A597L,4294967294UL,0x3E8AF804L,4294967294UL},{8UL,0x44BD1A6FL,0x9A81FFDEL,1UL},{0x2646899DL,4294967288UL,0xA498A597L,0x910C3349L}},{{4294967295UL,6UL,0x910C3349L,0x2646899DL},{4294967295UL,0UL,0xA498A597L,0xA498A597L},{0x2646899DL,0x2646899DL,0x9A81FFDEL,0x1FA7BB34L}},{{8UL,0x9A81FFDEL,0x3E8AF804L,0x44BD1A6FL},{0xA498A597L,0UL,0x405B7518L,0x3E8AF804L},{0x3E8AF804L,0UL,0x2646899DL,0x44BD1A6FL}},{{0UL,0x9A81FFDEL,0UL,0x1FA7BB34L},{0UL,0x2646899DL,4294967288UL,0xA498A597L},{1UL,0UL,0x1FA7BB34L,0x2646899DL}}};
    int l_811 = 0xA48E69D1L;
    int **l_961 = &g_122;
    int ***l_960 = &l_961;
    int ****l_959[10];
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_959[i] = &l_960;
    g_3 = l_2[4];
    if (((safe_add_func_int32_t_s_s((((l_6[0] || (safe_sub_func_uint16_t_u_u(((0x0764L <= (((safe_rshift_func_int16_t_s_s((0xE713E19FL || l_2[4]), 5)) ^ 1UL) == (func_11((g_3 ^ l_15), l_2[1], (l_16 = ((g_3 == 1UL) && g_3))) && g_19[1]))) != l_6[0]), l_6[0]))) ^ l_6[4]) ^ g_21), (-6L))) ^ g_21))
    {
        int l_29 = 0x563CFEBDL;
        int *l_31 = &l_16;
        char *l_52 = &l_2[4];
        const int *l_77[1][10][6] = {{{&l_6[0],&l_6[0],&g_21,&l_29,&l_29,&g_21},{&l_29,&l_29,&g_21,&g_21,(void*)0,(void*)0},{(void*)0,(void*)0,&l_16,&g_21,&l_29,&g_21},{&l_29,(void*)0,&l_16,&g_21,&l_16,(void*)0},{&g_21,&g_21,&g_21,&l_6[0],&g_21,&l_16},{&l_6[0],&g_21,&l_16,&l_16,&l_16,(void*)0},{&l_6[0],&g_21,&l_29,&l_29,&g_21,&l_6[0]},{&g_21,&g_21,(void*)0,(void*)0,&l_16,&g_21},{&l_29,(void*)0,&l_16,&l_29,&l_29,&l_6[5]},{&l_29,(void*)0,&l_29,(void*)0,&l_29,&l_16}}};
        int **l_903 = &l_31;
        int l_907 = (-10L);
        int i, j, k;
        (*l_31) = (safe_mod_func_int32_t_s_s(0L, func_11(l_15, l_29, (l_30[6][1][3] = l_29))));
        g_908 ^= (safe_add_func_uint32_t_u_u((0xCDE333B8L && ((safe_add_func_int8_t_s_s((func_11(g_24, (+(func_36(((*l_903) = func_41((!(g_19[3] = (l_811 |= (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((*l_52) |= (*l_31)), (l_6[4] == func_53(func_56(&g_21, ((safe_sub_func_uint32_t_u_u((*l_31), func_61(&g_21, func_67(l_6[0], (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(0x65F3L, g_19[0])), 1UL)), l_77[0][7][2], g_78, &l_15), g_19[2], g_19[2], l_16))) == 5L)), g_331[0][2][0])))), (-5L))), 0)), 7))))), g_331[0][2][0].f0)), g_830.f0, &l_29, g_904) & (*g_904))), l_907) < l_16), l_16)) || l_2[4])), g_830.f0));

        ;
        ;

        ;


        ;
        for (l_15 = 0; (l_15 <= 2); l_15 += 1)
        {
            union U0 **l_909[5] = {&g_829,&g_829,&g_829,&g_829,&g_829};
            int i;
            g_829 = &g_331[3][1][0];

            ;
            return g_116;
        }
    }
    else
    {
        int *l_910 = (void*)0;
        int *l_911 = &g_905;
        int *l_912 = &l_16;
        int *l_913 = &g_331[0][2][0].f1;
        int *l_914 = &g_658;
        int *l_915 = (void*)0;
        int *l_916 = &l_811;
        int *l_917 = &g_308[2][2][3];
        int *l_918 = &g_308[6][4][3];
        int *l_919 = &g_905;
        int *l_920 = &g_21;
        int *l_921 = &g_240;
        int *l_922 = (void*)0;
        int *l_923 = &g_658;
        int *l_924 = (void*)0;
        int *l_925[7] = {(void*)0,(void*)0,&g_905,(void*)0,(void*)0,&g_905,(void*)0};
        unsigned char l_926 = 0xEDL;
        union U0 *l_936 = (void*)0;
        int i;
        l_926--;
        (**g_750) |= (((void*)0 != &l_2[4]) || (*l_916));
        for (g_908 = 6; (g_908 != 58); ++g_908)
        {
            if ((*g_708))
                break;
        }
        l_811 ^= (safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((***g_749) >= ((safe_unary_minus_func_uint16_t_u(0UL)) <= ((+0L) < ((void*)0 == l_936)))), ((g_221 >= 4294967288UL) ^ l_30[4][0][3]))), (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((func_94(&g_85, &l_811, g_21) > l_30[6][1][3]), 65535UL)), 0UL)), g_333.f0))));
    }

    ;

    ;


    ;
    for (g_830.f4 = (-4); (g_830.f4 != (-29)); g_830.f4 = safe_sub_func_int8_t_s_s(g_830.f4, 6))
    {
        int *l_953[1][4];
        int l_967[8][3];
        unsigned l_976 = 8UL;
        unsigned l_978 = 0x01DF81FEL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_953[i][j] = &g_21;
        }
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 3; j++)
                l_967[i][j] = 0x06ADD338L;
        }
        if ((+l_16))
        {
            unsigned l_947 = 0x7D7564DAL;
            int *l_954 = &g_308[6][4][3];
            int l_957[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
            int i;
            for (l_15 = 0; (l_15 < 4); ++l_15)
            {
                unsigned char l_958 = 255UL;
                l_947++;
                for (l_947 = 0; (l_947 < 37); l_947++)
                {
                    unsigned char *l_952 = &g_85;
                    int **l_955 = &l_954;
                    char l_956 = 1L;
                    l_957[0] = (((((*l_952) = g_905) >= ((func_36(l_953[0][0], (g_3 ^ g_905), ((*l_955) = l_954), &l_811) & l_947) < ((*g_247) | l_947))) > l_956) || l_2[0]);
                    return g_590;
                }
                return l_958;
            }
        }
        else
        {
            int l_966 = 4L;
            (*g_904) &= ((l_959[6] != (void*)0) == (((--g_908) || l_966) <= ((&g_199 != (void*)0) > ((9L <= (l_967[4][0] < l_966)) == ((safe_mod_func_int8_t_s_s(l_966, g_830.f2)) && 0x8D1D1518L)))));
            (*g_904) ^= func_88(l_966, l_966);
            for (g_132 = 0; (g_132 < 7); g_132 = safe_add_func_uint32_t_u_u(g_132, 1))
            {
                (*g_904) |= l_966;
            }
        }
        l_978 = ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(l_976, g_977)) >= g_19[2]), 13)) > ((*g_904) = (*g_904)));
    }

    return g_658;
}







static short func_11(unsigned char p_12, unsigned char p_13, unsigned char p_14)
{
    int *l_20 = &g_21;
    int *l_22 = &g_21;
    int *l_23[5] = {&g_21,&g_21,&g_21,&g_21,&g_21};
    int i;
    g_19[2] ^= (safe_add_func_int32_t_s_s(0xAA237F4AL, 4294967295UL));
    ++g_24;
    return g_3;
}







static const int func_36(int * p_37, int p_38, int * p_39, int * p_40)
{
    unsigned l_906 = 0UL;
    (*p_39) ^= func_88((*p_40), l_906);
    return l_906;
}







static int * func_41(short p_42, short p_43)
{
    char **l_813 = &g_78;
    char ***l_812 = &l_813;
    char ****l_814 = &l_812;
    char *** const l_815 = &l_813;
    unsigned short l_816 = 0x0F85L;
    union U0 *l_817 = &g_331[0][2][0];
    union U0 **l_818 = &l_817;
    int l_820 = 0x32C259B8L;
    int *l_859 = &g_116;
    unsigned char *l_862 = &g_85;
    int l_873 = (-6L);
    g_240 = (l_816 ^= (((*l_814) = l_812) != l_815));
    (*l_818) = l_817;
    if (p_43)
    {
        int *l_819 = &g_240;
        return l_819;


    }
    else
    {
        unsigned l_826 = 0x56D8B84EL;
        int l_845 = (-8L);
        unsigned short ** const *l_851 = (void*)0;
        unsigned short ** const ** const l_850 = &l_851;
        int *l_869 = &g_308[6][4][3];
        unsigned *l_870 = &g_426;
        unsigned l_899[3];
        int i;
        for (i = 0; i < 3; i++)
            l_899[i] = 0xF9B54796L;
        for (g_199 = 0; (g_199 <= 0); g_199 += 1)
        {
            int *l_823[2];
            union U0 *l_828 = &g_333;
            unsigned l_856 = 1UL;
            int i;
            for (i = 0; i < 2; i++)
                l_823[i] = &g_333.f1;
            l_820 = (g_19[(g_199 + 5)] & g_19[(g_199 + 5)]);
            if ((g_331[0][2][0].f1 = func_94(&g_85, &l_820, (safe_add_func_uint32_t_u_u((g_21 && p_42), p_43)))))
            {
                for (g_333.f4 = 5; (g_333.f4 >= 0); g_333.f4 -= 1)
                {
                    l_826 = (safe_sub_func_int8_t_s_s(l_820, (0x14L > g_221)));
                }

            }
            else
            {
                short l_834 = 3L;
                int l_835 = 0x548BD405L;
                const unsigned short **l_849 = (void*)0;
                const unsigned short ***l_848 = &l_849;
                const unsigned short ****l_847 = &l_848;
                const unsigned char *l_853 = &g_85;
                unsigned char l_863 = 249UL;
                if ((l_820 != (&l_820 != l_823[1])))
                {
                    const int **l_827 = &g_708;
                    (*l_827) = func_56(&g_21, ((&g_331[1][0][0] == ((*l_818) = (void*)0)) >= p_42));

                    ;
                    ;
                    for (g_21 = 5; (g_21 >= 0); g_21 -= 1)
                    {
                        unsigned char l_831 = 0UL;
                        g_829 = l_828;

                        ;
                        if (l_831)
                            continue;
                        l_835 = (safe_add_func_int8_t_s_s((-9L), (g_19[5] || (l_834 && l_820))));
                    }

                    ;
                }
                else
                {
                    unsigned char *l_838 = &g_85;
                    for (g_590 = 5; (g_590 >= 1); g_590 -= 1)
                    {
                        if (p_42)
                            break;
                    }
                    l_835 ^= (safe_sub_func_uint8_t_u_u((0x47L && ((*l_838) = 0x17L)), g_220));
                    l_835 = (l_820 = p_43);
                }

                ;
                ;
                for (l_816 = 0; (l_816 <= 0); l_816 += 1)
                {
                    unsigned short l_839 = 0x4352L;
                    int l_844 = 0L;
                    l_845 = ((((func_88(l_820, l_839) == p_43) ^ (((safe_sub_func_int8_t_s_s(l_816, (safe_lshift_func_uint16_t_u_u((p_43 & ((((g_830.f0 == (g_85 = (((p_43 | g_324[0]) ^ p_43) < p_43))) && l_844) | (-6L)) || 0x91L)), p_42)))) && p_43) & 0x6CL)) >= (*g_651)) && p_42);
                }
                if ((g_331[0][2][0].f1 = p_43))
                {
                    short l_852 = 1L;
                    unsigned char *l_854 = &g_85;
                    int l_855 = 1L;
                    for (g_220 = 0; (g_220 <= 3); g_220 += 1)
                    {
                        int l_846 = 0L;
                        if (l_846)
                            break;
                        l_852 |= (l_847 != l_850);
                        (*l_815) = &g_78;
                    }
                    l_820 ^= ((p_43 <= l_852) ^ (l_853 != l_854));
                    --l_856;
                    return l_859;


                }
                else
                {
                    int l_864 = 0x7BF582CBL;
                    for (g_179 = 0; (g_179 <= 5); g_179 += 1)
                    {
                        int i;
                        (*l_859) = ((safe_add_func_int8_t_s_s(p_43, (p_43 | ((+p_43) < ((*g_651) = func_94(l_862, l_823[g_199], g_403)))))) >= ((l_863 ^ ((p_42 <= 0xA4L) < l_864)) != p_42));
                        (*l_859) ^= (g_297[g_199] != g_297[g_199]);
                        (*l_859) = l_845;
                    }
                }
                return l_823[0];


            }

            (*l_859) = (*l_859);
            if (l_845)
                break;
        }
        l_845 = (safe_add_func_int8_t_s_s((*l_859), (l_873 = (safe_rshift_func_uint8_t_u_u((l_845 >= (((*l_869) = (l_820 = l_826)) == ((*l_870)--))), 6)))));
        (**g_749) = (void*)0;


        for (g_333.f4 = 0; (g_333.f4 <= 12); g_333.f4++)
        {
            int *l_888 = (void*)0;
            int **l_902 = &l_869;
        }

    }


    (*l_859) |= p_43;
    return &g_220;


}







static unsigned func_53(const int * p_54, union U0 p_55)
{
    unsigned short l_610 = 65526UL;
    int l_669[5] = {0xFD4AA452L,0xFD4AA452L,0xFD4AA452L,0xFD4AA452L,0xFD4AA452L};
    char l_679[1];
    int *l_690[1][7][3] = {{{&g_308[0][3][3],(void*)0,&g_658},{(void*)0,&g_308[0][3][3],&g_308[0][3][3]},{&g_658,&g_308[0][3][3],&l_669[3]},{(void*)0,(void*)0,&g_240},{&g_658,&g_658,&g_240},{(void*)0,(void*)0,&g_658},{&l_669[3],(void*)0,&l_669[3]}}};
    int l_706 = 0x1DA0805FL;
    unsigned l_707[6][9] = {{0x77008B67L,0x7C1018A2L,0x77008B67L,0x7C1018A2L,0x77008B67L,0x7C1018A2L,0x77008B67L,0x7C1018A2L,0x77008B67L},{0x7A121348L,0x84174A56L,0x84174A56L,0x7A121348L,0x7A121348L,0x84174A56L,0x84174A56L,0x7A121348L,0x7A121348L},{2UL,0x7C1018A2L,2UL,0x7C1018A2L,2UL,0x7C1018A2L,2UL,0x7C1018A2L,2UL},{0x7A121348L,0x7A121348L,0x84174A56L,0x84174A56L,0x7A121348L,0x7A121348L,0x84174A56L,0x84174A56L,0x7A121348L},{0x77008B67L,0x7C1018A2L,0x77008B67L,0x7C1018A2L,0x77008B67L,0x7C1018A2L,0x77008B67L,0x7C1018A2L,0x77008B67L},{0x7A121348L,0x84174A56L,0x84174A56L,0x7A121348L,0x7A121348L,0x84174A56L,0x84174A56L,0x7A121348L,0x7A121348L}};
    int l_804 = 1L;
    int **l_806 = &l_690[0][0][0];
    int ***l_805 = &l_806;
    int ****l_807 = &l_805;
    char l_810 = 0x3FL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_679[i] = 0xD3L;
    if (l_610)
    {
        int *l_620 = (void*)0;
        int *l_633[4];
        unsigned l_681[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        char *l_691 = &g_324[0];
        unsigned short **l_694 = &g_297[0];
        unsigned char *l_699 = &g_85;
        union U0 *l_741 = &g_331[0][2][0];
        int i;
        for (i = 0; i < 4; i++)
            l_633[i] = (void*)0;
        for (g_179 = 0; (g_179 <= 18); g_179 = safe_add_func_uint32_t_u_u(g_179, 5))
        {
            unsigned l_617[5];
            unsigned *l_626[1];
            unsigned **l_625 = &l_626[0];
            unsigned char *l_627 = &g_85;
            unsigned short *l_650 = &g_221;
            int l_659 = 0x2377C7BFL;
            int l_666[1];
            int i;
            for (i = 0; i < 5; i++)
                l_617[i] = 0x6314EC4FL;
            for (i = 0; i < 1; i++)
                l_626[i] = &g_144;
            for (i = 0; i < 1; i++)
                l_666[i] = (-8L);
            if (((void*)0 == &p_55))
            {
                int *l_613 = (void*)0;
                int *l_614 = &g_116;
                int *l_615 = (void*)0;
                int *l_616[10][10] = {{&g_21,(void*)0,&g_220,(void*)0,&g_220,&g_220,(void*)0,&g_220,(void*)0,&g_21},{&g_116,&g_220,&g_308[5][2][1],(void*)0,&g_220,&g_21,&g_220,&g_308[6][4][3],&g_308[6][4][3],&g_308[3][0][0]},{&g_220,&g_21,(void*)0,&g_220,&g_220,(void*)0,&g_240,&g_220,&g_240,&g_21},{&g_220,&g_220,&g_21,&g_308[6][4][3],&g_116,(void*)0,&g_21,&g_308[5][2][1],&g_220,(void*)0},{&g_116,&g_220,&g_240,&g_308[6][4][3],(void*)0,&g_308[6][4][3],&g_116,&g_220,&g_116,&g_220},{&g_220,&g_116,(void*)0,(void*)0,(void*)0,&g_116,&g_220,&g_220,&g_308[2][1][0],&g_308[3][3][3]},{&g_220,(void*)0,(void*)0,&g_116,&g_308[2][1][0],(void*)0,&g_220,&g_308[6][4][3],(void*)0,&g_220},{(void*)0,(void*)0,&g_220,&g_220,&g_308[4][0][1],&g_116,&g_220,&g_308[3][3][3],&g_116,&g_308[6][0][3]},{(void*)0,&g_116,&g_116,&g_21,&g_21,(void*)0,&g_116,&g_308[4][0][1],(void*)0,&g_308[6][1][2]},{&g_308[5][3][0],&g_220,&g_220,(void*)0,&g_308[6][4][3],(void*)0,&g_21,&g_21,(void*)0,&g_308[6][4][3]}};
                int i, j;
                l_617[2]--;
                g_122 = l_620;

                ;
            }
            else
            {
                int l_632 = (-7L);
                int *l_661 = &g_220;
                int l_663 = 0L;
                int l_664 = 0xD2E360C0L;
                int l_668 = 0x5BA6C557L;
                int l_672[4] = {(-9L),(-9L),(-9L),(-9L)};
                int i;
                for (g_199 = (-30); (g_199 != 59); g_199 = safe_add_func_uint8_t_u_u(g_199, 6))
                {
                    unsigned l_644 = 4294967290UL;
                    int l_645 = 5L;
                    int l_665[3][5] = {{0x49B43130L,0x49B43130L,0x2A5054C2L,0xA212FA9BL,0x2A5054C2L},{0x49B43130L,0x49B43130L,0x2A5054C2L,0xA212FA9BL,0x2A5054C2L},{0x49B43130L,0x49B43130L,0x2A5054C2L,0xA212FA9BL,0x2A5054C2L}};
                    int i, j;
                    if ((safe_add_func_uint8_t_u_u(((void*)0 != l_625), ((l_627 == &g_85) | (((safe_sub_func_int32_t_s_s((g_221 == (safe_sub_func_int16_t_s_s((-3L), p_55.f0))), (l_632 != g_308[6][4][3]))) ^ 0x18656AF6L) | l_632)))))
                    {
                        p_54 = l_633[2];

                        ;
                    }
                    else
                    {
                        unsigned char l_642 = 0x81L;
                        int l_643 = 0x735B4FA0L;
                        union U0 *l_647 = &g_333;
                        union U0 **l_646 = &l_647;
                        g_308[6][4][3] |= (safe_rshift_func_int16_t_s_s((~(-1L)), (((safe_sub_func_int32_t_s_s((0xDA258F09L | 0x650C8617L), (0x5FC8L > p_55.f0))) && (((-4L) & (l_644 &= (safe_sub_func_int32_t_s_s(l_617[0], (l_643 = l_642))))) ^ (func_88(l_610, l_645) >= 4L))) && l_610)));
                        (*l_646) = &g_331[1][1][1];

                        ;
                    }
                    for (p_55.f2 = 17; (p_55.f2 == 14); p_55.f2 = safe_sub_func_uint8_t_u_u(p_55.f2, 9))
                    {
                        int * const ****l_652 = (void*)0;
                        int * const l_657 = &g_658;
                        int * const *l_656 = &l_657;
                        int * const **l_655[6];
                        int * const ***l_654 = &l_655[1];
                        int * const ****l_653 = &l_654;
                        int **l_660[4];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_655[i] = &l_656;
                        for (i = 0; i < 4; i++)
                            l_660[i] = &l_633[2];
                        l_659 |= ((0UL < ((l_650 != g_651) == (g_288 != ((*l_653) = (void*)0)))) == p_55.f2);

                        ;
                        l_661 = &g_116;

                        ;
                    }

                                        if ((*l_661))
                    {
                        unsigned short l_662 = 2UL;
                        if (l_662)
                            break;
                    }
                    else
                    {
                        char l_667 = 0L;
                        int l_670 = (-1L);
                        int l_671 = 1L;
                        int l_673 = 8L;
                        int l_674 = 0xE3F710FAL;
                        int l_675 = 0L;
                        int l_676 = (-6L);
                        int l_677 = 4L;
                        int l_678 = (-1L);
                        int l_680 = 6L;
                        const int *l_685 = &g_658;
                        const int **l_684[7][4][4] = {{{&l_685,(void*)0,&l_685,&l_685},{&l_685,&l_685,(void*)0,&l_685},{&l_685,&l_685,&l_685,&l_685},{&l_685,&l_685,(void*)0,&l_685}},{{&l_685,&l_685,&l_685,&l_685},{&l_685,&l_685,&l_685,&l_685},{&l_685,&l_685,(void*)0,&l_685},{&l_685,&l_685,&l_685,&l_685}},{{&l_685,&l_685,&l_685,&l_685},{&l_685,&l_685,&l_685,&l_685},{&l_685,&l_685,(void*)0,&l_685},{&l_685,&l_685,&l_685,&l_685}},{{&l_685,&l_685,&l_685,&l_685},{&l_685,&l_685,(void*)0,&l_685},{&l_685,&l_685,&l_685,&l_685},{&l_685,&l_685,&l_685,&l_685}},{{&l_685,&l_685,&l_685,&l_685},{&l_685,&l_685,(void*)0,&l_685},{&l_685,&l_685,&l_685,&l_685},{&l_685,&l_685,&l_685,&l_685}},{{&l_685,&l_685,(void*)0,&l_685},{&l_685,&l_685,&l_685,&l_685},{&l_685,&l_685,&l_685,&l_685},{&l_685,&l_685,&l_685,&l_685}},{{&l_685,&l_685,(void*)0,&l_685},{&l_685,&l_685,&l_685,&l_685},{&l_685,(void*)0,(void*)0,(void*)0},{&l_685,&l_685,&l_685,&l_685}}};
                        int i, j, k;
                        l_681[2]--;
                        p_54 = p_54;
                    }
                }

                ;
                for (g_132 = 0; (g_132 <= 0); g_132 += 1)
                {
                    int i;
                    (*l_661) = (p_55.f1 = l_666[g_132]);

                                        if (l_679[0])
                        continue;
                }
            }
            l_666[0] &= (p_55.f1 = ((safe_add_func_int8_t_s_s(p_55.f0, (&l_610 == &g_132))) >= 1UL));

                    }

        ;
        g_658 ^= l_679[0];
        g_708 = func_56(&l_669[1], (safe_mod_func_int8_t_s_s(0x0DL, l_707[2][6])));

        ;
        ;
        for (g_333.f3 = 3; (g_333.f3 >= 0); g_333.f3 -= 1)
        {
            unsigned short l_709 = 65527UL;
            l_709 = 0x69B5805BL;
            if (l_709)
                break;
            if ((((*g_651)++) != g_144))
            {
                l_620 = &l_669[4];

                ;
            }
            else
            {
                int **l_712 = &l_690[0][5][0];
                (*l_712) = (void*)0;
                (*l_712) = &g_116;
            }
            for (g_403 = 0; (g_403 <= 3); g_403 += 1)
            {
                unsigned l_719 = 0xE583BEBFL;
                short *l_726 = &g_590;
                int l_727[3][5][2] = {{{0x6F454A55L,0x5B17453BL},{0xD5C55F53L,0xF3A5B3DEL},{0x774B8AEEL,0x91CB6D3FL},{(-1L),1L},{1L,0x6F454A55L}},{{0x95B50A91L,0x6F454A55L},{1L,1L},{(-1L),0x91CB6D3FL},{0x774B8AEEL,0xF3A5B3DEL},{0xD5C55F53L,0x5B17453BL}},{{0x6F454A55L,0xD5C55F53L},{9L,0xDF475E15L},{9L,0xD5C55F53L},{0x6F454A55L,0x5B17453BL},{0xD5C55F53L,0xF3A5B3DEL}}};
                int l_730 = 0xB87FE063L;
                unsigned short **l_735[8][8] = {{&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651},{&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651},{&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651},{&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651},{&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651},{&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651},{&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651},{&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651}};
                int i, j, k;
                if (((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((p_55.f0 < (safe_mod_func_int32_t_s_s((*g_708), (((*l_726) = ((p_55.f0 > (l_719 > (l_709 & (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u((~(((((4294967293UL > p_55.f0) ^ (&g_324[0] != (void*)0)) >= g_3) != g_79) || g_404)), p_55.f0)) <= p_55.f0), l_709)), 0x89EEL))))) | 0x7DBD0D44L)) || 1UL)))), 1)), p_55.f0)) & (*g_708)))
                {
                    g_708 = &g_658;

                    ;
                    for (g_144 = 0; (g_144 <= 3); g_144 += 1)
                    {
                        int i, j, k;
                        if (g_308[(g_403 + 1)][g_144][g_333.f3])
                            break;
                    }
                    if (p_55.f0)
                        break;
                }
                else
                {
                    short *l_736[3][6][1] = {{{&g_19[4]},{&g_19[1]},{&g_19[4]},{&g_19[0]},{(void*)0},{&g_19[0]}},{{&g_19[4]},{&g_19[1]},{&g_19[4]},{&g_19[0]},{(void*)0},{&g_19[0]}},{{&g_19[4]},{&g_19[1]},{&g_19[4]},{&g_19[0]},{(void*)0},{&g_19[0]}}};
                    unsigned l_737 = 0xC3B16EA8L;
                    int i, j, k;
                    l_730 = (((l_727[2][1][1] ^= l_709) & (safe_rshift_func_uint16_t_u_s(5UL, 6))) <= g_333.f2);
                    l_737 = (safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_55.f0, (((*l_691) &= (((g_19[2] = ((*l_726) = (((+(&g_297[0] != l_735[5][5])) & (((((func_94(l_691, &l_669[1], p_55.f0) > p_55.f0) <= l_709) == l_709) && g_658) < g_331[0][2][0].f0)) != l_709))) | 0xD240L) != l_709)) > p_55.f0))), l_709));
                    for (g_79 = 3; (g_79 >= 0); g_79 -= 1)
                    {
                        unsigned short l_738 = 0x7B30L;
                        union U0 **l_742 = &l_741;
                        ++l_738;
                        (*l_742) = l_741;
                    }
                }
                for (p_55.f2 = 0; (p_55.f2 <= 3); p_55.f2 += 1)
                {
                    int l_743[8] = {0x0C0B196BL,1L,0x0C0B196BL,1L,0x0C0B196BL,1L,0x0C0B196BL,1L};
                    int i, j, k;
                    l_743[7] ^= g_308[(g_403 + 3)][g_403][g_403];
                }

                            }
        }

        ;

        ;
    }
    else
    {
        const unsigned l_746 = 0x54D4003DL;
        int l_758 = 0x341B19CFL;
        char * const *l_776 = (void*)0;
        char **l_779 = (void*)0;
        unsigned char *l_784 = &g_199;
        int l_794 = 0L;
        int l_798 = 0x6F1E5B18L;
        for (g_221 = 0; (g_221 <= 19); g_221++)
        {
            const int l_754 = 0xE37483A4L;
            int l_755 = 0x3EDB225EL;
            char l_793 = 1L;
            if ((*g_708))
            {
                int **l_748 = (void*)0;
                int ***l_747[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                unsigned char l_760 = 251UL;
                int i, j;
                if ((0xDBE2L & ((l_746 & (((func_88((((g_590 = (0L & (p_55.f1 = (l_747[0][4] != g_749)))) >= 7L) ^ l_754), (((0xF40DL != (*g_651)) == g_19[3]) || 0x2BBEL)) == l_754) > 0xC70320D1L) & 0L)) > l_754)))
                {
                    char l_756 = 1L;
                    int l_757 = 0x18024168L;
                    int l_759 = 0x2F78D550L;
                    ++l_760;
                    for (g_426 = 0; (g_426 != 32); ++g_426)
                    {
                        g_708 = &l_669[1];

                        ;
                    }

                    ;
                    p_55.f1 &= (*g_708);
                }
                else
                {
                    unsigned char *l_769 = &g_85;
                    char * const **l_778 = &l_776;
                    int l_785 = 0x713ADC0BL;
                    int l_786 = 0x6ED66259L;
                    union U0 *l_788[2];
                    union U0 **l_787 = &l_788[0];
                    union U0 *l_790 = &g_331[2][1][2];
                    union U0 **l_789 = &l_790;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_788[i] = &g_331[3][3][1];
                    l_786 = (+(safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((+(++(*l_769))), (safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_u((((*l_778) = (g_777 = l_776)) == l_779), 15)) > (safe_mod_func_int32_t_s_s((l_785 &= ((l_755 = ((safe_add_func_int32_t_s_s((!((0UL && ((&g_199 != (void*)0) > func_94(l_784, &l_758, g_308[6][4][3]))) == l_758)), g_132)) & g_304)) && p_55.f0)), 0x1D5BFE08L))) == p_55.f2) > p_55.f0), g_308[3][0][0])))) == 4UL), p_55.f0)));
                    (*l_789) = ((*l_787) = &p_55);


                    ;
                }

                                ;
                return g_324[0];


            }
            else
            {
                int l_795[4][9] = {{0x26C7CB61L,0x26C7CB61L,(-2L),0xFFA99B2FL,2L,4L,1L,0xC39AB70BL,1L},{0x26C7CB61L,(-9L),4L,4L,(-9L),0x26C7CB61L,0xFFA99B2FL,8L,(-1L)},{0xC39AB70BL,(-3L),(-2L),(-1L),(-9L),(-9L),(-1L),(-2L),(-3L)},{(-9L),0x4668E604L,0x26C7CB61L,0L,2L,(-3L),0xFFA99B2FL,0xFFA99B2FL,(-3L)}};
                int l_796 = 0x106B7288L;
                int l_797 = 0x48BE03E6L;
                int i, j;
                for (g_404 = 21; (g_404 == 52); g_404 = safe_add_func_int16_t_s_s(g_404, 1))
                {
                    unsigned l_799 = 4294967294UL;
                    --l_799;
                }
            }
            return p_55.f0;
        }
    }

    ;
    ;

    ;
    p_55.f1 = ((safe_rshift_func_uint8_t_u_s((func_88(g_220, l_804) >= ((((*l_807) = l_805) == &g_750) ^ (safe_rshift_func_int8_t_s_s((p_55.f0 >= ((((*g_651) = p_55.f0) || l_810) && p_55.f0)), p_55.f0)))), g_199)) >= (-3L));

        return g_324[0];



}







static const int * func_56(int * p_57, int p_58)
{
    union U0 *l_544 = &g_333;
    union U0 **l_545 = &l_544;
    int l_562 = 0xDE97FB6DL;
    int l_564 = 0L;
    int l_565 = 0x9BEC6437L;
    int l_566 = 0x457B4888L;
    int l_567[5][10][2] = {{{0x9D516C35L,0xFA9CAE84L},{5L,9L},{0xFA9CAE84L,(-8L)},{0xC6E60966L,(-5L)},{0xB06061CFL,(-8L)},{(-8L),0xA534C485L},{1L,9L},{1L,0x3207761BL},{0x51392E5EL,0xA534C485L},{1L,0xC6E60966L}},{{0x01C19DB2L,(-10L)},{9L,1L},{0xD74D1745L,0x667EC344L},{(-1L),0xD74D1745L},{0x51392E5EL,5L},{0xC6E60966L,(-10L)},{(-1L),(-5L)},{(-10L),1L},{0x3207761BL,4L},{0x01C19DB2L,1L}},{{0xC6E60966L,0xDB35AF4FL},{9L,0x667EC344L},{(-1L),0x667EC344L},{9L,0xDB35AF4FL},{0xC6E60966L,1L},{0x01C19DB2L,4L},{0x3207761BL,1L},{(-10L),(-5L)},{(-1L),(-10L)},{0xC6E60966L,5L}},{{0x51392E5EL,0xD74D1745L},{(-1L),0x667EC344L},{0xD74D1745L,1L},{9L,(-10L)},{0x01C19DB2L,0xC6E60966L},{1L,0xDB35AF4FL},{0x3207761BL,(-5L)},{(-1L),0xFA9CAE84L},{9L,0xDB35AF4FL},{0x51392E5EL,0x51392E5EL}},{{0x01C19DB2L,0xD74D1745L},{9L,1L},{4L,0xFA9CAE84L},{(-1L),4L},{1L,5L},{1L,4L},{(-1L),0xFA9CAE84L},{4L,1L},{9L,0xD74D1745L},{0x01C19DB2L,0x51392E5EL}}};
    char l_569 = 0xFAL;
    short l_570 = 0x3E54L;
    unsigned short l_572 = 0xEDF1L;
    int l_575 = 0x546DB77BL;
    unsigned **l_595 = (void*)0;
    unsigned ***l_594[9] = {&l_595,&l_595,&l_595,&l_595,&l_595,&l_595,&l_595,&l_595,&l_595};
    char **l_606 = &g_78;
    int i, j, k;
    (*l_545) = l_544;
    if ((*p_57))
    {
        int *l_546 = &g_240;
        int *l_547 = (void*)0;
        int *l_548 = (void*)0;
        int *l_549 = (void*)0;
        int *l_550 = &g_331[0][2][0].f1;
        int *l_551 = &g_333.f1;
        int *l_552 = &g_308[1][1][2];
        int *l_553 = &g_240;
        int *l_554 = &g_116;
        int *l_555 = &g_331[0][2][0].f1;
        int *l_556 = &g_116;
        int *l_557 = &g_331[0][2][0].f1;
        int *l_558 = (void*)0;
        int *l_559 = &g_21;
        int *l_560 = &g_116;
        int l_561[4][5] = {{0x867232F6L,0xE762E199L,0xB03473FAL,0x867232F6L,0xB03473FAL},{0xE762E199L,0xE762E199L,(-1L),0xB03473FAL,0x77162EB8L},{(-4L),0x77162EB8L,1L,1L,0x77162EB8L},{0x77162EB8L,0x48553C1FL,(-4L),0x77162EB8L,1L}};
        int *l_563[10][6] = {{&g_220,&g_308[5][2][2],(void*)0,&g_308[5][2][2],&g_220,&g_21},{&g_240,&g_308[5][2][2],&g_116,&g_308[5][2][2],&g_240,&g_21},{&g_220,&g_308[5][2][2],(void*)0,&g_308[5][2][2],&g_220,&g_21},{&g_240,&g_308[5][2][2],&g_116,&g_308[5][2][2],&g_240,&g_21},{&g_220,&g_308[5][2][2],(void*)0,&g_308[5][2][2],&g_220,&g_21},{&g_240,&g_308[5][2][2],&g_116,&g_308[5][2][2],&g_240,&g_21},{&g_220,&g_308[5][2][2],(void*)0,&g_308[5][2][2],&g_220,&g_21},{&g_240,&g_308[5][2][2],&g_116,&g_308[5][2][2],&g_240,&g_21},{&g_220,&g_308[5][2][2],(void*)0,&g_308[5][2][2],&g_220,&g_21},{&g_240,&g_308[5][2][2],&g_116,&g_308[5][2][2],&g_240,&g_21}};
        int l_568 = 0xAD2D03E4L;
        int l_571 = 0xDE82DCBBL;
        unsigned l_576 = 0x681312DFL;
        int l_586 = 0x1C5EAD42L;
        short l_588 = 2L;
        int i, j;
        l_572--;
        ++l_576;
        for (g_3 = 0; (g_3 <= 0); g_3 += 1)
        {
            unsigned l_579 = 0UL;
            int l_587[5];
            int l_589 = 0x5EF7EB05L;
            unsigned short l_591[5][3][2] = {{{3UL,3UL},{65535UL,3UL},{3UL,65535UL}},{{3UL,3UL},{65535UL,3UL},{3UL,65535UL}},{{3UL,3UL},{65535UL,3UL},{3UL,65535UL}},{{3UL,3UL},{65535UL,3UL},{3UL,65535UL}},{{3UL,3UL},{65535UL,3UL},{3UL,65535UL}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_587[i] = 0x299665A3L;
            ++l_579;
            for (g_144 = 0; (g_144 <= 0); g_144 += 1)
            {
                int l_585[4][8][8] = {{{0x5BBBF206L,0x01422AC4L,2L,0xCC6E4108L,(-1L),0xDA627542L,0x9E944F48L,9L},{0x1F1C6554L,1L,1L,0x693E556AL,0xDDDB354BL,(-8L),0x98A4C3F4L,0xDDDB354BL},{0x717C4B96L,0xC7AC720BL,0x4120FF6FL,0x717C4B96L,1L,(-2L),9L,(-8L)},{0x01422AC4L,0x3382DB90L,(-9L),0xBB00DFB7L,1L,(-1L),0xF57B4BA0L,0xC083E754L},{(-1L),(-3L),0x98A4C3F4L,(-1L),0x67A4B037L,0xE02C5F1FL,8L,0xB4DD5587L},{0xCC6E4108L,0xC7AC720BL,0L,1L,0x4120FF6FL,1L,0x87742D70L,(-1L)},{9L,(-1L),0L,0xA77AC919L,1L,0xDA627542L,1L,0xA77AC919L},{0xA5939197L,0x89C7133EL,0xA5939197L,0xE02C5F1FL,0x66E9E9C3L,0x87FBDDA5L,0L,(-1L)}},{{0x5D50CDF5L,0x98A4C3F4L,0xC7AC720BL,0x77384A26L,0xE1787E5BL,(-1L),0x66E9E9C3L,0xBACBDBC0L},{0x5D50CDF5L,(-1L),(-6L),1L,0x66E9E9C3L,0x629BE1B3L,0x9E944F48L,(-3L)},{0xA5939197L,0xDDDB354BL,(-3L),1L,1L,2L,0xD1B2FBC2L,(-1L)},{0xDED0BC72L,0x2B9D89C6L,0x0A98438BL,0xF6297457L,0x451CA106L,0x65C61433L,0xF6297457L,1L},{(-1L),(-3L),1L,0x87FBDDA5L,0x98A4C3F4L,0xA77AC919L,(-1L),0x1F1C6554L},{0x629BE1B3L,(-10L),0xFF1236F7L,0L,5L,(-7L),0x65C61433L,0xDED0BC72L},{0xA5939197L,0xE6CE00D2L,0L,0L,0x0A98438BL,0L,(-1L),1L},{0xF6297457L,(-1L),0x3382DB90L,1L,0L,0x5BBBF206L,0x1F1C6554L,(-3L)}},{{(-9L),3L,1L,0x0A98438BL,1L,1L,(-8L),3L},{0xD6F33647L,0L,(-1L),0x693E556AL,0xEF54F452L,0x22874A4BL,0xE1787E5BL,1L},{(-3L),1L,0xA77AC919L,0x9A9562A7L,0xD6F33647L,(-1L),0x87FBDDA5L,5L},{0xDA627542L,0x9A9562A7L,0L,1L,0xBACBDBC0L,(-9L),(-8L),(-1L)},{8L,0xD1B2FBC2L,0xEC019F1BL,0xC7AC720BL,0L,0xE6CE00D2L,0xDED0BC72L,(-1L)},{0L,(-3L),0x3382DB90L,(-2L),(-2L),0x3382DB90L,(-3L),0L},{1L,0xC7AC720BL,(-6L),0xEC019F1BL,0x32FDBD95L,1L,2L,4L},{0xE1787E5BL,0xDA627542L,0x0A98438BL,(-1L),6L,1L,0x693E556AL,0x249FE966L}},{{0xA5939197L,1L,0xD46F434FL,0x98A4C3F4L,3L,0x717C4B96L,1L,0xDED0BC72L},{0x249FE966L,5L,(-10L),0xE6CE00D2L,0x32FDBD95L,0x22874A4BL,1L,(-10L)},{(-1L),1L,1L,5L,1L,0xEC019F1BL,(-1L),(-7L)},{8L,0x4120FF6FL,1L,0xE02C5F1FL,0xDED0BC72L,0xBB00DFB7L,0xC6C0FB9BL,0x1F1C6554L},{0xEF54F452L,3L,0L,(-6L),(-1L),0x451CA106L,(-9L),1L},{0xBACBDBC0L,(-6L),6L,0x1F1C6554L,1L,0xDA627542L,0L,8L},{3L,0xF6297457L,0xBB00DFB7L,0L,(-1L),(-3L),(-2L),0xE02C5F1FL},{0x249FE966L,0x8B4038F1L,0x22874A4BL,0x2B9D89C6L,0x8B4038F1L,0xFF1236F7L,0x6F5655CBL,0L}}};
                int i, j, k;
                for (l_570 = 0; (l_570 <= 5); l_570 += 1)
                {
                    union U0 *l_582 = (void*)0;
                    int *l_583 = (void*)0;
                    int **l_584 = &l_563[8][2];
                    (*l_545) = l_582;

                    ;
                    (*l_584) = l_583;
                }
                --l_591[2][0][0];
                for (g_85 = 0; (g_85 <= 0); g_85 += 1)
                {
                    for (g_179 = 0; (g_179 <= 5); g_179 += 1)
                    {
                        int i;
                        (*p_57) ^= (g_324[g_85] && g_19[(g_3 + 1)]);
                    }
                }
            }
        }

        ;
    }
    else
    {
        (*p_57) = 0xC5F04698L;
    }

    ;
    if ((((void*)0 == l_594[0]) >= p_58))
    {
        int **l_596 = &g_122;
        (*l_596) = p_57;


    }
    else
    {
        char l_600 = 0L;
        char **l_605[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        char **l_607 = (void*)0;
        const int *l_608[6][4][2] = {{{&l_566,&g_333.f1},{&l_566,(void*)0},{&g_308[3][2][2],&l_566},{(void*)0,&g_333.f1}},{{&g_116,&g_116},{&g_308[3][2][2],&g_333.f1},{&g_333.f1,&g_308[6][4][3]},{&l_564,&g_308[3][2][2]}},{{(void*)0,&l_564},{&g_308[3][2][2],&g_308[6][4][3]},{&g_308[3][2][2],&l_564},{(void*)0,&g_308[3][2][2]}},{{&l_564,&g_308[6][4][3]},{&g_333.f1,&g_333.f1},{(void*)0,&g_333.f1},{&g_333.f1,&g_308[6][4][3]}},{{&l_564,&g_308[3][2][2]},{(void*)0,&l_564},{&g_308[3][2][2],&g_308[6][4][3]},{&g_308[3][2][2],&l_564}},{{(void*)0,&g_308[3][2][2]},{&l_564,&g_308[6][4][3]},{&g_333.f1,&g_333.f1},{(void*)0,&g_333.f1}}};
        int i, j, k;
        for (g_426 = 0; (g_426 == 39); g_426 = safe_add_func_int16_t_s_s(g_426, 5))
        {
            char l_599 = 1L;
            const int *l_609 = &g_333.f1;
            if ((l_599 && 0x007EL))
            {
                if (l_600)
                    break;
                for (l_599 = 3; (l_599 >= 0); l_599 -= 1)
                {
                    return p_57;


                }
            }
            else
            {
                for (g_221 = 0; (g_221 != 58); ++g_221)
                {
                    int *l_603 = (void*)0;
                    int *l_604 = &l_564;
                    (*l_604) ^= (*p_57);
                }
                for (g_333.f3 = 0; (g_333.f3 <= 0); g_333.f3 += 1)
                {
                    (*l_545) = &g_331[0][2][0];

                    ;
                    (*p_57) = (l_605[0] != (l_607 = l_606));

                    ;
                    for (g_590 = 7; (g_590 >= 0); g_590 -= 1)
                    {
                        return l_609;


                    }
                    for (g_403 = 3; (g_403 <= 8); g_403 += 1)
                    {
                        return p_57;


                    }
                }

            }
        }

        ;
        ;
    }


    ;
    return &g_21;


}







static unsigned func_61(int * p_62, char * p_63, int p_64, char p_65, unsigned p_66)
{
    unsigned l_278[10][1][3] = {{{4UL,9UL,0xE7484E07L}},{{4294967293UL,0x19F9FF22L,4294967293UL}},{{4294967289UL,7UL,4294967294UL}},{{3UL,7UL,0x735DEF5FL}},{{9UL,0x19F9FF22L,0x604263C3L}},{{0x8B4767ECL,9UL,9UL}},{{9UL,1UL,4UL}},{{3UL,0xE7484E07L,4UL}},{{4294967289UL,4UL,9UL}},{{4294967293UL,0x735DEF5FL,0x604263C3L}}};
    unsigned short *l_279 = &g_132;
    int **l_320 = &g_122;
    int ***l_319 = &l_320;
    int ****l_318 = &l_319;
    char *l_322 = &g_79;
    union U0 *l_332 = &g_333;
    unsigned l_339 = 0xE30D7236L;
    int l_359 = 1L;
    int l_360 = 0L;
    int l_363 = 0x5C7441C2L;
    int l_371 = 0xA647725EL;
    int l_373 = 0L;
    int l_374[10];
    unsigned char l_381[10][10][1] = {{{1UL},{252UL},{2UL},{0xD6L},{1UL},{1UL},{0xD6L},{1UL},{0xD6L},{1UL}},{{1UL},{0xD6L},{2UL},{252UL},{1UL},{1UL},{252UL},{2UL},{0xD6L},{1UL}},{{1UL},{0xD6L},{1UL},{0xD6L},{1UL},{1UL},{0xD6L},{2UL},{1UL},{0xB0L}},{{0xB0L},{1UL},{0xD4L},{1UL},{5UL},{0xB0L},{1UL},{249UL},{1UL},{0xB0L}},{{5UL},{1UL},{0xD4L},{1UL},{0xB0L},{0xB0L},{1UL},{0xD4L},{1UL},{5UL}},{{0xB0L},{1UL},{249UL},{1UL},{0xB0L},{5UL},{1UL},{0xD4L},{1UL},{0xB0L}},{{0xB0L},{1UL},{0xD4L},{1UL},{5UL},{0xB0L},{1UL},{249UL},{1UL},{0xB0L}},{{5UL},{1UL},{0xD4L},{1UL},{0xB0L},{0xB0L},{1UL},{0xD4L},{1UL},{5UL}},{{0xB0L},{1UL},{249UL},{1UL},{0xB0L},{5UL},{1UL},{0xD4L},{1UL},{0xB0L}},{{0xB0L},{1UL},{0xD4L},{1UL},{5UL},{0xB0L},{1UL},{249UL},{1UL},{0xB0L}}};
    short l_409[8][10][3] = {{{0L,0x3BD3L,0x3BD3L},{0L,1L,0L},{0xFE5EL,0x8D0AL,0x5446L},{0x0628L,(-1L),1L},{0xD7ABL,(-4L),0L},{(-1L),(-1L),0x0C8DL},{0L,0x8D0AL,0L},{(-1L),1L,0x37D5L},{0L,(-6L),(-1L)},{0x46F7L,0L,0L}},{{(-6L),(-4L),0L},{0x0417L,0x0417L,0x42E4L},{0L,0L,7L},{1L,0L,(-1L)},{(-4L),0x25D4L,0L},{0x42E4L,1L,(-1L)},{0L,0xD7ABL,7L},{(-1L),1L,0x42E4L},{(-5L),7L,0L},{0xABEAL,1L,0L}},{{0L,0x8DC5L,(-1L)},{1L,(-1L),1L},{0xF892L,8L,0x8DC5L},{0x00BAL,6L,0L},{0x8D0AL,1L,0L},{1L,(-1L),0L},{0x8D0AL,0xE1DDL,(-5L)},{0x00BAL,0xCB4FL,6L},{0xF892L,0L,(-6L)},{1L,0x448BL,1L}},{{0L,1L,8L},{0xABEAL,0x46F7L,0x46F7L},{(-5L),0x8D0AL,0xD7ABL},{(-1L),0L,1L},{0L,1L,9L},{0x42E4L,0L,0xABEAL},{(-4L),1L,1L},{1L,0L,1L},{0L,0x8D0AL,(-1L)},{0x0417L,0x46F7L,0L}},{{(-1L),0L,0x8DC5L},{1L,0xABEAL,0x0C8DL},{(-5L),(-5L),0L},{0x0C8DL,(-1L),0x0417L},{(-4L),0L,0xFE5EL},{0xABEAL,0x42E4L,1L},{0L,(-4L),0xFE5EL},{0L,1L,0x0417L},{0L,0L,0L},{0L,0x0417L,0x0C8DL}},{{0x3BD3L,(-6L),0x8DC5L},{(-1L),0x46F7L,0L},{1L,0L,1L},{0L,0x12D9L,0x46F7L},{0xD7ABL,1L,0L},{(-6L),0x448BL,1L},{(-6L),0xFE5EL,(-1L)},{(-6L),(-1L),0L},{0xD7ABL,7L,1L},{0L,1L,1L}},{{1L,0L,0L},{(-1L),0xCB4FL,0x12D9L},{0x3BD3L,(-1L),(-1L)},{0L,(-6L),1L},{0L,0L,9L},{0L,0x7008L,0x2275L},{0L,0x8DC5L,0x3BD3L},{0xABEAL,0x7008L,0xCB4FL},{(-4L),0L,(-6L)},{0x0C8DL,(-6L),0x0628L}},{{(-5L),(-1L),0xE1DDL},{1L,1L,0L},{0xE1DDL,0x8DC5L,1L},{1L,1L,0x0417L},{1L,(-4L),0L},{0L,0x12D9L,(-1L)},{0x8DC5L,7L,0x8D0AL},{0x0417L,0L,(-1L)},{1L,0L,0L},{0xABEAL,(-6L),0x0417L}}};
    unsigned l_497 = 2UL;
    short *l_541[4] = {&g_331[0][2][0].f4,&g_331[0][2][0].f4,&g_331[0][2][0].f4,&g_331[0][2][0].f4};
    char **l_542 = &l_322;
    unsigned short ***l_543 = &g_296;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_374[i] = 8L;
    if (((g_19[2] = l_278[3][0][0]) > (l_278[3][0][0] <= ((*l_279) = (l_278[7][0][1] ^ (*g_78))))))
    {
        (*p_62) = (func_94(&g_85, &g_240, (p_65 <= (++(*l_279)))) >= (-1L));
    }
    else
    {
        short l_291[8][1] = {{0x6AF5L},{0x337EL},{0x6AF5L},{0x337EL},{0x6AF5L},{0x337EL},{0x6AF5L},{0x337EL}};
        int *l_292 = &g_21;
        unsigned l_300 = 4294967289UL;
        int *** const *l_341[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int *** const * const *l_340 = &l_341[0];
        unsigned l_405 = 0UL;
        int l_410 = 1L;
        const unsigned short *l_433 = &g_132;
        unsigned l_455 = 0x965C2F2BL;
        int i, j;
        for (g_3 = 0; (g_3 > 8); g_3 = safe_add_func_uint16_t_u_u(g_3, 2))
        {
            unsigned short *l_284 = &g_221;
            unsigned short *l_285[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int *****l_289 = &g_288;
            unsigned char *l_290 = &g_85;
            int *l_307 = &g_21;
            int i;
            if (((&g_221 == (l_285[2] = (l_284 = &g_132))) < ((safe_lshift_func_uint8_t_u_u(g_144, ((*l_290) = (func_88((~((void*)0 == &g_85)), g_179) == (((*l_289) = g_288) != (void*)0))))) < l_291[7][0])))
            {
                int **l_293 = &l_292;
                unsigned short **l_295[4][3][4] = {{{&l_285[1],&l_285[4],&l_285[1],&l_285[4]},{&l_285[1],&l_285[4],&l_285[1],&l_285[4]},{&l_285[1],&l_285[4],&l_285[1],&l_285[4]}},{{&l_285[1],&l_285[4],&l_285[1],&l_285[4]},{&l_285[1],&l_285[4],&l_285[1],&l_285[4]},{&l_285[1],&l_285[4],&l_285[1],&l_285[4]}},{{&l_285[1],&l_285[4],&l_285[1],&l_285[4]},{&l_285[1],&l_285[4],&l_285[1],&l_285[4]},{&l_285[1],&l_285[4],&l_285[1],&l_285[4]}},{{&l_285[1],&l_285[4],&l_285[1],&l_285[4]},{&l_285[1],&l_285[4],&l_285[1],&l_285[4]},{&l_285[1],&l_285[4],&l_285[1],&l_285[4]}}};
                unsigned short ***l_294[10][7][3] = {{{&l_295[1][2][3],&l_295[2][1][0],&l_295[0][0][0]},{&l_295[0][1][1],&l_295[0][1][1],&l_295[1][2][3]},{&l_295[3][0][2],&l_295[1][2][3],&l_295[0][0][0]},{&l_295[0][1][1],&l_295[3][2][1],&l_295[0][1][1]},{&l_295[3][0][3],&l_295[0][1][1],&l_295[1][2][1]},{&l_295[3][2][1],&l_295[0][0][1],&l_295[0][1][1]},{(void*)0,&l_295[3][0][2],&l_295[0][0][0]}},{{(void*)0,(void*)0,&l_295[1][2][3]},{&l_295[2][1][0],&l_295[0][1][1],&l_295[0][0][0]},{(void*)0,(void*)0,&l_295[0][1][1]},{&l_295[0][1][1],&l_295[3][0][3],&l_295[1][2][1]},{&l_295[0][1][1],(void*)0,&l_295[0][1][1]},{&l_295[0][1][1],(void*)0,&l_295[0][0][0]},{&l_295[0][1][1],&l_295[0][1][1],&l_295[1][2][3]}},{{(void*)0,(void*)0,&l_295[0][0][0]},{&l_295[0][0][1],&l_295[0][1][1],&l_295[0][1][1]},{&l_295[0][1][1],&l_295[0][1][1],&l_295[1][2][1]},{(void*)0,&l_295[0][1][1],&l_295[0][1][1]},{&l_295[1][2][3],&l_295[2][1][0],&l_295[0][0][0]},{&l_295[0][1][1],&l_295[0][1][1],&l_295[1][2][3]},{&l_295[3][0][2],&l_295[1][2][3],&l_295[0][0][0]}},{{&l_295[0][1][1],&l_295[3][2][1],&l_295[0][1][1]},{&l_295[3][0][3],&l_295[0][1][1],&l_295[1][2][1]},{&l_295[3][2][1],&l_295[0][0][1],&l_295[0][1][1]},{(void*)0,&l_295[3][0][2],&l_295[0][0][0]},{(void*)0,(void*)0,&l_295[1][2][3]},{&l_295[2][1][0],&l_295[0][1][1],&l_295[0][0][0]},{(void*)0,(void*)0,&l_295[0][1][1]}},{{&l_295[0][1][1],&l_295[3][0][3],&l_295[1][2][1]},{&l_295[0][1][1],(void*)0,&l_295[0][1][1]},{&l_295[0][1][1],(void*)0,&l_295[0][1][1]},{(void*)0,&l_295[0][1][1],&l_295[0][0][1]},{(void*)0,(void*)0,&l_295[0][1][1]},{&l_295[0][0][3],&l_295[0][1][1],&l_295[0][1][1]},{&l_295[2][2][0],&l_295[2][2][0],(void*)0}},{{&l_295[0][1][1],&l_295[0][1][1],&l_295[0][1][1]},{&l_295[0][1][1],&l_295[3][1][1],&l_295[0][1][1]},{&l_295[0][1][1],(void*)0,&l_295[0][0][1]},{&l_295[1][1][2],&l_295[0][1][1],&l_295[0][1][1]},{&l_295[0][1][1],&l_295[0][2][3],&l_295[0][1][1]},{&l_295[0][1][1],(void*)0,(void*)0},{&l_295[0][2][3],&l_295[0][0][3],&l_295[0][1][1]}},{{(void*)0,&l_295[1][1][2],&l_295[0][1][1]},{&l_295[0][1][1],&l_295[0][1][1],&l_295[0][0][1]},{&l_295[3][1][1],(void*)0,&l_295[0][1][1]},{&l_295[0][1][1],&l_295[0][1][1],&l_295[0][1][1]},{(void*)0,&l_295[0][1][1],(void*)0},{&l_295[0][1][1],&l_295[0][1][1],&l_295[0][1][1]},{(void*)0,(void*)0,&l_295[0][1][1]}},{{(void*)0,&l_295[0][1][1],&l_295[0][0][1]},{(void*)0,(void*)0,&l_295[0][1][1]},{&l_295[0][0][3],&l_295[0][1][1],&l_295[0][1][1]},{&l_295[2][2][0],&l_295[2][2][0],(void*)0},{&l_295[0][1][1],&l_295[0][1][1],&l_295[0][1][1]},{&l_295[0][1][1],&l_295[3][1][1],&l_295[0][1][1]},{&l_295[0][1][1],(void*)0,&l_295[0][0][1]}},{{&l_295[1][1][2],&l_295[0][1][1],&l_295[0][1][1]},{&l_295[0][1][1],&l_295[0][2][3],&l_295[0][1][1]},{&l_295[0][1][1],(void*)0,(void*)0},{&l_295[0][2][3],&l_295[0][0][3],&l_295[0][1][1]},{(void*)0,&l_295[1][1][2],&l_295[0][1][1]},{&l_295[0][1][1],&l_295[0][1][1],&l_295[0][0][1]},{&l_295[3][1][1],(void*)0,&l_295[0][1][1]}},{{&l_295[0][1][1],&l_295[0][1][1],&l_295[0][1][1]},{(void*)0,&l_295[3][1][1],&l_295[3][0][3]},{&l_295[0][1][1],&l_295[0][1][1],&l_295[0][1][1]},{(void*)0,(void*)0,&l_295[0][1][1]},{&l_295[0][1][1],&l_295[0][2][3],&l_295[0][1][1]},{(void*)0,&l_295[0][1][1],&l_295[0][1][1]},{(void*)0,&l_295[0][1][1],&l_295[0][1][1]}}};
                int i, j, k;
                (*l_293) = l_292;
                g_296 = (void*)0;

                ;
            }
            else
            {
                g_122 = p_62;

                ;
            }

            ;

            if (((*p_62) == (l_300 < p_66)))
            {
                unsigned short l_321 = 65535UL;
                char *l_323 = &g_324[0];
                unsigned *l_328 = &g_144;
                for (g_79 = 0; (g_79 >= 0); g_79 -= 1)
                {
                    int *l_301 = (void*)0;
                    int *l_302 = &g_220;
                    int *l_303[3][9] = {{&g_116,&g_116,&g_240,&g_116,&g_116,&g_116,&g_116,&g_240,&g_116},{&g_240,&g_240,&g_240,&g_240,&g_240,&g_240,&g_240,&g_240,&g_240},{&g_116,&g_116,&g_116,&g_240,&g_116,&g_116,&g_116,&g_116,&g_240}};
                    const volatile union U0 **l_311 = &g_309;
                    int i, j;
                    g_304++;
                    for (p_64 = 0; (p_64 >= 0); p_64 -= 1)
                    {
                        p_62 = l_307;
                    }
                    g_308[6][4][3] |= 0xC6A43272L;
                    (*l_311) = g_309;
                    for (g_304 = 0; (g_304 <= 0); g_304 += 1)
                    {
                        int i, j, k;
                        if (l_291[(g_79 + 1)][g_79])
                            break;
                        return l_278[(g_304 + 7)][g_79][g_304];
                    }
                }
                if ((func_94(func_67(((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((void*)0 != &g_296), 11)), (safe_lshift_func_uint16_t_u_s(func_94(func_67(l_278[4][0][1], (((*l_289) = (*l_289)) != l_318), p_62, &p_65, l_322), &g_308[6][4][3], g_308[1][0][1]), 15)))) || 0xAA9DL), p_66, &g_220, p_63, l_323), &g_308[5][0][1], l_321) && p_66))
                {
                    unsigned **l_329 = &l_328;
                    for (p_66 = 0; (p_66 > 59); p_66++)
                    {
                        int *l_327 = &g_308[4][3][2];
                        (*p_62) = g_308[6][4][3];
                        (*l_319) = &p_62;

                        ;
                        l_327 = l_292;

                        ;
                        (*p_62) = (*p_62);
                    }
                    (*p_62) |= (((*l_329) = l_328) == l_307);
                    if ((*p_62))
                        continue;
                }
                else
                {
                    union U0 * const l_330 = &g_331[0][2][0];
                    l_332 = l_330;

                    ;
                }
            }
            else
            {
                unsigned l_336[9] = {0xACD87D66L,0xACD87D66L,3UL,0xACD87D66L,0xACD87D66L,3UL,0xACD87D66L,0xACD87D66L,3UL};
                unsigned *l_342[8] = {&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144};
                int i;
                if (((safe_lshift_func_int8_t_s_u(func_88(func_94(p_63, l_292, (0xC1A9024EL <= (p_63 == &g_85))), l_336[4]), (!((p_64 && 0xEADCL) > p_66)))) | 1UL))
                {
                    for (g_333.f4 = (-13); (g_333.f4 < 19); g_333.f4 = safe_add_func_uint32_t_u_u(g_333.f4, 2))
                    {
                        return p_65;
                    }

                    (*l_320) = p_62;
                }
                else
                {
                    l_339 ^= (*p_62);
                    if ((*l_292))
                        break;
                }
                (*l_307) = func_94(func_67((((void*)0 != l_340) & (((*l_284) = 65528UL) && p_64)), ((((*l_307) = 0xB653837CL) | g_116) < g_19[2]), (**l_319), &g_324[0], &g_79), p_62, p_65);
                g_308[3][0][1] &= ((*p_62) & (-1L));
                (*p_62) = (*l_307);
            }
        }

        ;
        ;
        ;
        ;
        if (((*p_62) = (*p_62)))
        {
            unsigned char l_343 = 1UL;
            l_343--;
        }
        else
        {
            unsigned short ***l_350[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            unsigned short ***l_352[7][5][4] = {{{&g_296,(void*)0,(void*)0,&g_296},{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296},{(void*)0,&g_296,&g_296,&g_296}},{{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,(void*)0},{&g_296,&g_296,&g_296,&g_296}},{{&g_296,&g_296,&g_296,(void*)0},{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296},{&g_296,(void*)0,&g_296,&g_296}},{{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296},{&g_296,(void*)0,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296}},{{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,(void*)0},{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,(void*)0},{&g_296,&g_296,&g_296,&g_296}},{{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296},{&g_296,(void*)0,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296}},{{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,(void*)0,(void*)0},{&g_296,&g_296,&g_296,&g_296},{&g_296,(void*)0,&g_296,&g_296}}};
            unsigned short ****l_351 = &l_352[4][1][0];
            short *l_353 = &g_19[5];
            int l_356 = (-1L);
            short l_358 = 0x48ECL;
            int l_370 = (-8L);
            int l_377 = 0x025E0DA8L;
            int l_378 = 0x45ABC60EL;
            int l_380 = (-1L);
            unsigned l_412 = 0x61D33DDAL;
            int ****l_420 = &l_319;
            char *l_462 = &g_324[0];
            unsigned l_486 = 0x8A29DDACL;
            int l_495 = 0x86452E8FL;
            short l_500 = 0L;
            unsigned *l_535 = (void*)0;
            unsigned **l_534[10] = {&l_535,(void*)0,(void*)0,&l_535,(void*)0,&l_535,(void*)0,(void*)0,&l_535,(void*)0};
            unsigned char l_536 = 0UL;
            int i, j, k;
            if (((safe_lshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(0xA6L, (l_350[5] != ((*l_351) = &g_296)))) != ((*l_353) = g_324[0])), 0)) != (p_65 || p_65)))
            {
                int l_354 = (-6L);
                int l_355 = 0xABCF7D55L;
                int l_357 = 0L;
                int l_408 = (-10L);
                unsigned short *l_432 = &g_333.f2;
                for (g_333.f3 = 5; (g_333.f3 >= 0); g_333.f3 -= 1)
                {
                    int l_361 = 0xF2594DD1L;
                    int l_362 = 0x7F7DE83CL;
                    unsigned l_364 = 2UL;
                    int l_372[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_372[i] = 0xDF443716L;
                    l_364--;
                    (*l_320) = (void*)0;
                    (*l_320) = &g_308[6][4][3];
                    for (l_359 = 0; (l_359 <= 0); l_359 += 1)
                    {
                        unsigned l_367 = 4294967292UL;
                        int l_375 = 0x327D8690L;
                        int l_376 = 0x79C26755L;
                        int l_379 = 0x7995A961L;
                        --l_367;
                        if (p_64)
                            continue;
                        --l_381[7][9][0];
                        p_62 = &l_378;

                        ;
                    }
                }

                ;
                ;
                for (p_66 = 0; (p_66 <= 0); p_66 += 1)
                {
                    char l_402 = 8L;
                    int l_406[10];
                    int *****l_419[1];
                    unsigned char *l_423 = (void*)0;
                    unsigned char *l_424 = (void*)0;
                    unsigned char *l_425 = (void*)0;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_406[i] = 0xC13ABD7DL;
                    for (i = 0; i < 1; i++)
                        l_419[i] = &l_318;
                }
                g_308[5][2][3] |= ((*l_292) |= ((l_432 = l_432) != l_433));
            }
            else
            {
                unsigned *l_435 = (void*)0;
                unsigned **l_434 = &l_435;
                unsigned **l_437[5][7][6] = {{{&l_435,(void*)0,(void*)0,(void*)0,&l_435,&l_435},{&l_435,(void*)0,(void*)0,&l_435,(void*)0,&l_435},{(void*)0,(void*)0,&l_435,(void*)0,&l_435,&l_435},{&l_435,&l_435,(void*)0,(void*)0,&l_435,&l_435},{&l_435,&l_435,(void*)0,&l_435,&l_435,&l_435},{&l_435,&l_435,&l_435,&l_435,&l_435,&l_435},{&l_435,&l_435,&l_435,&l_435,&l_435,&l_435}},{{&l_435,&l_435,(void*)0,(void*)0,&l_435,(void*)0},{&l_435,&l_435,&l_435,(void*)0,&l_435,&l_435},{(void*)0,&l_435,(void*)0,&l_435,&l_435,(void*)0},{&l_435,&l_435,(void*)0,&l_435,&l_435,(void*)0},{&l_435,&l_435,(void*)0,&l_435,&l_435,(void*)0},{&l_435,&l_435,(void*)0,(void*)0,&l_435,(void*)0},{(void*)0,(void*)0,(void*)0,&l_435,&l_435,&l_435}},{{&l_435,&l_435,&l_435,&l_435,(void*)0,&l_435},{&l_435,&l_435,&l_435,&l_435,&l_435,&l_435},{&l_435,&l_435,&l_435,&l_435,&l_435,&l_435},{(void*)0,&l_435,&l_435,(void*)0,&l_435,(void*)0},{&l_435,&l_435,&l_435,&l_435,&l_435,&l_435},{&l_435,&l_435,&l_435,&l_435,&l_435,&l_435},{&l_435,&l_435,&l_435,&l_435,&l_435,&l_435}},{{&l_435,&l_435,&l_435,&l_435,(void*)0,&l_435},{&l_435,&l_435,&l_435,&l_435,&l_435,&l_435},{(void*)0,(void*)0,&l_435,&l_435,&l_435,&l_435},{(void*)0,&l_435,&l_435,&l_435,&l_435,(void*)0},{(void*)0,&l_435,&l_435,&l_435,&l_435,&l_435},{(void*)0,&l_435,&l_435,(void*)0,&l_435,&l_435},{&l_435,&l_435,(void*)0,&l_435,&l_435,&l_435}},{{(void*)0,&l_435,&l_435,&l_435,&l_435,&l_435},{&l_435,&l_435,&l_435,(void*)0,&l_435,(void*)0},{(void*)0,&l_435,&l_435,&l_435,&l_435,&l_435},{&l_435,(void*)0,&l_435,(void*)0,&l_435,(void*)0},{&l_435,(void*)0,&l_435,&l_435,&l_435,&l_435},{&l_435,&l_435,&l_435,&l_435,&l_435,&l_435},{(void*)0,&l_435,(void*)0,&l_435,&l_435,&l_435}}};
                unsigned ***l_436 = &l_437[3][0][2];
                int l_444 = 0L;
                unsigned *l_453 = (void*)0;
                unsigned *l_454[2];
                int l_475 = 0xF47A50B4L;
                int l_478 = 0L;
                int l_480 = 0x5B4D9BEBL;
                int l_481[5] = {1L,1L,1L,1L,1L};
                short l_501 = (-8L);
                unsigned l_502 = 4294967295UL;
                int ****l_508 = &l_319;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_454[i] = &l_412;
                (*p_62) = (*p_62);
                if (((((l_434 != ((*l_436) = (void*)0)) == ((func_88((p_65 ^ ((l_444 = ((safe_mod_func_uint32_t_u_u(((p_64 && ((*g_78) = 0x88L)) != (safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((l_444 && (safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int8_t_s_s(g_85, 6)) || (safe_lshift_func_uint8_t_u_s((((*l_292) ^= (!(safe_sub_func_uint8_t_u_u(251UL, (&g_288 != &g_288))))) != 0L), 0))) ^ p_65), 6))) == g_199), g_404)), 13))), p_66)) > 0x97D0669EL)) != g_240)), l_455) < 0xCEL) == p_64)) >= 65535UL) || (*p_63)))
                {
                    short l_477[1];
                    int l_491 = (-4L);
                    int l_494[2][1];
                    int *****l_507 = &l_420;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_477[i] = 1L;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_494[i][j] = 0L;
                    }
                    if ((*p_62))
                    {
                        char **l_463 = &g_78;
                        char **l_464 = (void*)0;
                        char **l_465 = (void*)0;
                        int l_472 = 0xAB1D15E5L;
                        int l_473 = 0L;
                        int l_474 = 0x687097D6L;
                        int l_476 = 0x6BA50CA5L;
                        int l_479 = 0xADAA5248L;
                        int l_482 = 6L;
                        unsigned short l_483 = 0xAC51L;
                        short *l_492 = &g_333.f4;
                        short *l_493 = &l_409[3][7][1];
                        int l_496 = 0x9086085DL;
                        (*p_62) = (safe_rshift_func_uint8_t_u_u((((l_480 ^= ((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u((l_462 == (p_63 = ((*l_463) = (void*)0))), (safe_rshift_func_uint8_t_u_u((((*l_492) = func_88(func_94(l_462, &g_308[6][4][3], ((*l_493) = (safe_sub_func_int16_t_s_s(((*l_492) = ((*l_353) = (p_66 & (((--(*l_279)) < (--l_483)) == (func_88((p_64 || ((l_486 = p_65) == (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((l_491 = (((*p_62) |= 4L) && g_426)), 5)), p_66)))), p_66) ^ g_199))))), p_64)))), p_66)) || 1UL), 5)))) ^ p_64), p_65)) > p_66)) || 8L) && p_66), g_331[0][2][0].f0));

                        ;
                        ;
                        l_497++;
                        ++l_502;
                    }
                    else
                    {
                        g_308[6][4][3] = (-1L);
                    }

                    ;

                    l_380 ^= ((safe_lshift_func_uint16_t_u_u(((&g_221 == (void*)0) ^ 0x1033F385L), (l_378 |= (((*l_507) = &l_319) != (l_508 = l_508))))) < (func_88((l_356 ^= (*p_62)), (*l_292)) && (0xDE11331BL && (-1L))));
                }
                else
                {
                    if ((*p_62))
                    {
                        (***l_508) = p_62;
                        (*l_292) ^= (-1L);
                    }
                    else
                    {
                        unsigned short l_509 = 0xDF8CL;
                        unsigned char *l_520 = &l_381[7][9][0];
                        int l_527 = 7L;
                        g_333.f1 = (*p_62);

                        (*p_62) = (l_509 &= (p_64 & 1UL));
                        l_536 |= (((safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((*p_62), (g_333.f4 <= (((*p_62) | (((safe_rshift_func_uint16_t_u_s((l_527 = ((!(safe_add_func_uint8_t_u_u((6L > (g_426--)), (--(*l_520))))) != (safe_add_func_int16_t_s_s(p_65, (safe_rshift_func_int16_t_s_u(p_66, 0)))))), (g_333.f0 >= (g_19[2] |= ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(((l_534[6] != &g_247) && p_65), 12)) != 4294967290UL), 3)), 10)) || p_66))))) >= 255UL) == (*p_62))) & 0UL)))) | 0xF2L), 0xAABFL)) & (-6L)) != p_65);
                    }
                    (*p_62) |= (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(0xEBC6L, 9)), 4));
                }

                ;

            }

            ;
            ;
            ;

        }

        ;
        ;


    }

    ;
    ;


    ;
    ;
    ;
    l_373 = (65535UL >= func_88((6UL & (func_94(&l_381[8][3][0], &g_308[3][4][1], (g_333.f4 = g_144)) < (&g_324[0] == ((*l_542) = &p_65)))), ((void*)0 == l_543)));

    ;
    return g_331[0][2][0].f0;
}







static char * func_67(short p_68, int p_69, const int * p_70, char * p_71, char * p_72)
{
    unsigned char *l_82 = (void*)0;
    unsigned char *l_83 = (void*)0;
    unsigned char *l_84 = &g_85;
    int l_91 = (-3L);
    unsigned short l_141 = 0UL;
    int l_145 = 0x5431493BL;
    int **l_161 = (void*)0;
    short l_185[10];
    int l_218 = 0x1C9418E7L;
    int l_219[1][7] = {{0x954F1852L,(-3L),0x954F1852L,0x954F1852L,(-3L),0x954F1852L,0x954F1852L}};
    unsigned char l_258 = 0x05L;
    int l_273 = 0x3009E131L;
    int i, j;
    for (i = 0; i < 10; i++)
        l_185[i] = 0x3A5BL;
    if ((safe_rshift_func_uint8_t_u_u(((*l_84) = g_19[2]), (safe_sub_func_int16_t_s_s(p_68, func_88(l_91, (safe_add_func_uint16_t_u_u((((p_72 == l_84) > (-10L)) < (*p_71)), func_94(p_72, &l_91, l_91)))))))))
    {
        int *l_142[4][9][2] = {{{&g_21,&g_21},{&l_91,&g_21},{&g_21,&g_116},{&g_21,(void*)0},{&l_91,&g_21},{(void*)0,&g_116},{(void*)0,&g_21},{&l_91,(void*)0},{&g_21,&g_116}},{{&g_21,&g_21},{&l_91,&g_21},{&g_21,&g_116},{&g_21,(void*)0},{&l_91,&g_21},{(void*)0,&g_116},{(void*)0,&l_91},{&g_116,&l_91},{&l_91,&g_116}},{{&g_116,&g_116},{&g_116,&g_116},{&g_116,&g_116},{&l_91,&l_91},{&g_116,&l_91},{&l_91,&g_116},{&l_91,&l_91},{&g_116,&l_91},{&l_91,&g_116}},{{&g_116,&g_116},{&g_116,&g_116},{&g_116,&g_116},{&l_91,&l_91},{&g_116,&l_91},{&l_91,&g_116},{&l_91,&l_91},{&g_116,&l_91},{&l_91,&g_116}}};
        int l_143 = (-7L);
        int **l_227[10];
        unsigned char *l_241[2];
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_227[i] = &l_142[3][2][1];
        for (i = 0; i < 2; i++)
            l_241[i] = (void*)0;
        l_145 = (safe_mod_func_int8_t_s_s(((l_91 = (l_91 != func_88(l_91, l_141))) && p_69), ((p_68 <= l_143) ^ (3UL < g_144))));
        if (((*g_78) <= 0L))
        {
            const int **l_151 = (void*)0;
            const int *l_153 = (void*)0;
            const int **l_152[9][2] = {{&l_153,&l_153},{&l_153,&l_153},{&l_153,&l_153},{&l_153,&l_153},{&l_153,&l_153},{&l_153,&l_153},{&l_153,&l_153},{&l_153,&l_153},{&l_153,&l_153}};
            unsigned char *l_154 = &g_85;
            int l_155[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_155[i] = 0x485A9B4FL;
            for (l_145 = 0; (l_145 > (-7)); l_145--)
            {
                unsigned l_148 = 0x4CF0FE1AL;
                if (p_68)
                    break;
                l_148++;
            }
            p_70 = p_70;
            l_155[0] = (g_79 ^ func_94(l_154, &l_145, l_145));
        }
        else
        {
            unsigned l_160[4][3];
            int l_162 = 3L;
            char *l_191 = &g_79;
            int l_194 = (-7L);
            int l_198 = 0x017CA1D5L;
            int **l_209 = &l_142[3][7][1];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 3; j++)
                    l_160[i][j] = 0UL;
            }
            if ((l_162 = ((((*p_71) |= (safe_rshift_func_uint8_t_u_u(l_160[0][2], 5))) == (l_141 < p_69)) != ((g_19[0] != (&g_85 == (void*)0)) <= (&g_122 != l_161)))))
            {
                unsigned l_182 = 0x995D8928L;
                int l_195 = 0x045DDD74L;
                int l_196[5][9][5] = {{{(-10L),(-10L),0xDDED1B2FL,(-10L),(-10L)},{5L,(-10L),5L,5L,(-10L)},{(-10L),5L,5L,(-10L),5L},{(-10L),(-10L),0xDDED1B2FL,(-10L),(-10L)},{5L,(-10L),5L,5L,(-10L)},{(-10L),5L,5L,(-10L),5L},{(-10L),(-10L),0xDDED1B2FL,(-10L),(-10L)},{5L,(-10L),5L,5L,(-10L)},{(-10L),5L,5L,(-10L),5L}},{{(-10L),(-10L),0xDDED1B2FL,(-10L),(-10L)},{5L,(-10L),5L,5L,(-10L)},{(-10L),5L,5L,(-10L),5L},{(-10L),(-10L),0xDDED1B2FL,(-10L),(-10L)},{5L,(-10L),5L,5L,(-10L)},{(-10L),5L,5L,(-10L),5L},{(-10L),(-10L),0xDDED1B2FL,(-10L),(-10L)},{5L,(-10L),5L,5L,(-10L)},{(-10L),5L,5L,(-10L),5L}},{{(-10L),(-10L),0xDDED1B2FL,(-10L),(-10L)},{5L,(-10L),5L,5L,(-10L)},{(-10L),5L,5L,(-10L),5L},{(-10L),(-10L),0xDDED1B2FL,(-10L),(-10L)},{5L,(-10L),5L,5L,(-10L)},{(-10L),5L,5L,(-10L),5L},{(-10L),(-10L),0xDDED1B2FL,(-10L),(-10L)},{5L,(-10L),5L,5L,(-10L)},{(-10L),5L,0xDDED1B2FL,5L,0xDDED1B2FL}},{{5L,5L,(-10L),5L,5L},{0xDDED1B2FL,5L,0xDDED1B2FL,0xDDED1B2FL,5L},{5L,0xDDED1B2FL,0xDDED1B2FL,5L,0xDDED1B2FL},{5L,5L,(-10L),5L,5L},{0xDDED1B2FL,5L,0xDDED1B2FL,0xDDED1B2FL,5L},{5L,0xDDED1B2FL,0xDDED1B2FL,5L,0xDDED1B2FL},{5L,5L,(-10L),5L,5L},{0xDDED1B2FL,5L,0xDDED1B2FL,0xDDED1B2FL,5L},{5L,0xDDED1B2FL,0xDDED1B2FL,5L,0xDDED1B2FL}},{{5L,5L,(-10L),5L,5L},{0xDDED1B2FL,5L,0xDDED1B2FL,0xDDED1B2FL,5L},{5L,0xDDED1B2FL,0xDDED1B2FL,5L,0xDDED1B2FL},{5L,5L,(-10L),5L,5L},{0xDDED1B2FL,5L,0xDDED1B2FL,0xDDED1B2FL,5L},{5L,0xDDED1B2FL,0xDDED1B2FL,5L,0xDDED1B2FL},{5L,5L,(-10L),5L,5L},{0xDDED1B2FL,5L,0xDDED1B2FL,0xDDED1B2FL,5L},{5L,0xDDED1B2FL,0xDDED1B2FL,5L,0xDDED1B2FL}}};
                int **l_207 = &l_142[3][7][1];
                int i, j, k;
                for (p_68 = 0; (p_68 >= (-23)); --p_68)
                {
                    unsigned char l_167 = 0xBEL;
                    int *l_171 = &l_162;
                    unsigned l_178 = 4294967295UL;
                    for (g_85 = (-9); (g_85 < 24); g_85 = safe_add_func_uint8_t_u_u(g_85, 1))
                    {
                        short l_170 = 0x468AL;
                        int **l_172 = &l_142[2][5][0];
                        unsigned *l_177 = &g_144;
                        l_167++;
                        if (l_170)
                            break;
                        (*l_172) = l_171;
                        g_21 &= ((safe_sub_func_int8_t_s_s((l_178 |= (l_160[0][2] && ((*l_171) |= (safe_rshift_func_int16_t_s_u(g_116, ((g_79 & ((*l_177) = g_116)) & g_79)))))), (*p_71))) & (g_179 = g_19[3]));
                    }
                    (*l_171) ^= p_68;
                    for (g_79 = 0; (g_79 > (-16)); g_79 = safe_sub_func_int32_t_s_s(g_79, 5))
                    {
                        unsigned l_186 = 4294967295UL;
                        l_182++;
                        --l_186;
                        if (g_132)
                            continue;
                    }
                }


                if (g_132)
                {
                    unsigned short l_193 = 0xC4BFL;
                    int l_197 = 0x82E6EA6DL;
                    g_21 = (safe_sub_func_uint16_t_u_u(((void*)0 != l_191), (&g_132 == &l_141)));
                    if ((l_160[0][2] < p_68))
                    {
                        int l_192 = 0x01278691L;
                        l_193 = l_192;
                    }
                    else
                    {
                        int ***l_208[2];
                        unsigned short *l_212 = &g_132;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_208[i] = &l_207;
                        g_199--;
                        l_195 ^= (g_21 = 2L);
                        l_145 = (((*l_212) = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint8_t_u(((((l_161 == (l_209 = l_207)) ^ (p_68 & g_3)) <= p_68) == ((*l_84) = (p_69 && p_68))))) > (safe_lshift_func_int8_t_s_s((0xC71BL & g_79), (*p_72)))), g_132)), 2))) == g_19[1]);
                    }
                }
                else
                {
                    const int *l_214 = &l_196[3][4][0];
                    const int **l_213 = &l_214;
                    int l_217 = 0x66877007L;
                    (*l_213) = p_70;


                    l_217 = (g_116 = (((*l_84) = p_68) >= (safe_rshift_func_int8_t_s_u((0UL != ((*p_71) = (*p_71))), p_69))));
                }
                g_221--;
            }
            else
            {
                int ***l_224 = &l_161;
                int **l_226 = &l_142[3][7][1];
                int ***l_225[2];
                unsigned *l_230 = &g_144;
                unsigned short *l_235 = &l_141;
                int * const l_239 = &g_240;
                int * const *l_238[9] = {&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239};
                int * const **l_237 = &l_238[6];
                int * const ***l_236 = &l_237;
                short l_252 = 0xD29EL;
                short l_256 = 0x3627L;
                int i;
                for (i = 0; i < 2; i++)
                    l_225[i] = &l_226;
                (*l_239) &= ((((*l_224) = l_209) != (l_227[9] = &g_122)) ^ (safe_rshift_func_int16_t_s_u(0xFF6AL, ((((*l_230) = l_91) < (safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((((*l_235) = 0x306BL) && ((((*l_236) = (void*)0) != (void*)0) & (p_69 | func_94(l_241[0], &g_240, p_68)))), (*g_78))) | p_69), (*g_78)))) && 0L))));

                ;

                ;
                for (l_91 = 0; (l_91 != 22); l_91++)
                {
                    unsigned char *l_244 = (void*)0;
                    int *l_245 = (void*)0;
                    int l_250 = 3L;
                    char l_251 = (-3L);
                    if (func_94(l_244, l_245, g_240))
                    {
                        return p_72;


                    }
                    else
                    {
                        volatile unsigned ***l_249 = &g_246;
                        (*l_249) = g_246;
                        (*l_239) ^= g_21;
                        if (g_221)
                            continue;
                        if ((*l_239))
                            continue;
                    }
                    (*l_209) = l_245;
                    if (l_250)
                        break;
                    if (l_251)
                    {
                        unsigned short l_253 = 8UL;
                        l_253--;
                    }
                    else
                    {
                        const int l_257 = 0x29FC7D4BL;
                        (*l_239) = l_256;
                        (*l_239) = l_257;
                        if (g_221)
                            break;
                    }
                }
            }


            ;

        }


        ;

    }
    else
    {
        int *l_259 = &l_218;
        const int *l_261 = &g_240;
        const int **l_260 = &l_261;
        (*l_259) &= l_258;
        (*l_260) = p_70;


    }


    for (l_141 = (-7); (l_141 == 4); ++l_141)
    {
        int l_271 = (-8L);
        int *l_272[3][9] = {{&l_145,&g_116,&l_145,&g_116,&l_145,(void*)0,&l_219[0][0],(void*)0,(void*)0},{&g_116,&g_240,&l_145,(void*)0,&l_145,&g_240,&g_116,&g_240,&l_218},{&l_219[0][1],&l_218,&g_116,(void*)0,&g_240,(void*)0,&g_116,&l_218,&l_219[0][1]}};
        int i, j;
        for (g_221 = 1; (g_221 <= 5); g_221 += 1)
        {
            int l_264 = 1L;
            unsigned short *l_265[5][1][6] = {{{(void*)0,&g_132,(void*)0,&g_132,(void*)0,&g_132}},{{(void*)0,&g_132,(void*)0,&g_132,(void*)0,&g_132}},{{(void*)0,&g_132,(void*)0,&g_132,(void*)0,&g_132}},{{(void*)0,&g_132,(void*)0,&g_132,(void*)0,&g_132}},{{(void*)0,&g_132,(void*)0,&g_132,(void*)0,&g_132}}};
            int l_266 = 0x21E8FEB3L;
            int *l_267 = (void*)0;
            int *l_268 = &g_21;
            int i, j, k;
            (*l_268) |= (((l_264 = (g_19[g_221] != g_19[g_221])) | 65535UL) >= (l_266 = 0UL));
        }
        l_219[0][1] = (safe_lshift_func_uint8_t_u_u(l_271, 0));
        if (l_271)
            break;
        l_273 &= l_271;
    }
    p_70 = &g_220;

    ;
    for (g_144 = (-21); (g_144 <= 33); g_144 = safe_add_func_int16_t_s_s(g_144, 9))
    {
        const int *l_277 = &g_240;
        const int **l_276 = &l_277;
        (*l_276) = p_70;

        ;
    }
    return &g_79;


}







static unsigned short func_88(int p_89, unsigned short p_90)
{
    unsigned char l_106 = 252UL;
    int *l_125 = &g_116;
    int l_133 = 0xF453539CL;
    if (((void*)0 != &g_79))
    {
        unsigned l_99[8];
        int *l_100 = &g_21;
        int *l_101 = &g_21;
        int *l_102 = (void*)0;
        int *l_103 = &g_21;
        int *l_104 = &g_21;
        int *l_105[4] = {&g_21,&g_21,&g_21,&g_21};
        char *l_135 = &g_79;
        int i;
        for (i = 0; i < 8; i++)
            l_99[i] = 0x5D205C6CL;
        for (g_79 = 0; g_79 < 8; g_79 += 1)
        {
            l_99[g_79] = 0x95B7CA3BL;
        }
        --l_106;
        if ((((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((p_90 < ((-1L) < 6L)), l_106)), p_90)) <= 0xD9L) ^ g_3))
        {
            unsigned l_113[6][7] = {{3UL,3UL,3UL,3UL,3UL,3UL,3UL},{0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L},{3UL,3UL,3UL,3UL,3UL,3UL,3UL},{0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L},{3UL,3UL,3UL,3UL,3UL,3UL,3UL},{0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L,0x8E1F03B4L}};
            int i, j;
            --l_113[1][3];
        }
        else
        {
            unsigned char *l_128 = &l_106;
            l_105[0] = &g_21;
            g_116 &= g_21;
            for (p_89 = 0; (p_89 < 27); p_89 = safe_add_func_uint8_t_u_u(p_89, 8))
            {
                int *l_123[6][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                for (g_79 = 0; (g_79 > 16); g_79 = safe_add_func_uint16_t_u_u(g_79, 5))
                {
                    unsigned short l_129[7];
                    int l_130 = 0xC65C41F2L;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_129[i] = 1UL;
                    if (p_90)
                    {
                        int **l_121[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_121[i] = (void*)0;
                        g_122 = &p_89;

                        ;
                        g_122 = (l_123[1][3] = l_123[1][0]);

                        ;
                    }
                    else
                    {
                        int **l_124 = (void*)0;
                        unsigned short *l_131[10][10] = {{&g_132,(void*)0,&g_132,&g_132,(void*)0,&g_132,&g_132,(void*)0,&g_132,&g_132},{&g_132,&g_132,&g_132,(void*)0,(void*)0,&g_132,&g_132,&g_132,&g_132,&g_132},{&g_132,&g_132,(void*)0,&g_132,&g_132,&g_132,&g_132,(void*)0,&g_132,&g_132},{&g_132,&g_132,&g_132,&g_132,&g_132,(void*)0,&g_132,&g_132,(void*)0,&g_132},{&g_132,(void*)0,&g_132,&g_132,&g_132,&g_132,(void*)0,&g_132,&g_132,&g_132},{&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132},{&g_132,&g_132,&g_132,&g_132,&g_132,(void*)0,&g_132,&g_132,&g_132,&g_132},{(void*)0,(void*)0,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,(void*)0},{&g_132,(void*)0,&g_132,&g_132,&g_132,&g_132,&g_132,(void*)0,&g_132,(void*)0},{&g_132,(void*)0,&g_132,(void*)0,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132}};
                        int i, j;
                        l_125 = &p_89;

                        ;
                        (*l_100) = (l_133 |= func_94(&l_106, &g_116, (safe_lshift_func_int16_t_s_u(((g_116 >= (func_94(l_128, &p_89, (l_129[1] = (*l_125))) >= p_90)) & (l_130 = l_130)), p_89))));
                        return g_21;
                    }

                    ;
                    return g_3;
                }
            }
        }
        (*l_100) = (safe_unary_minus_func_int8_t_s(((*l_104) > (&g_79 != l_135))));
    }
    else
    {
        unsigned char *l_136 = (void*)0;
        unsigned char *l_137 = &l_106;
        int l_138[9] = {5L,0x1281BCF5L,5L,0x1281BCF5L,5L,0x1281BCF5L,5L,0x1281BCF5L,5L};
        int i;
        l_138[3] |= (((*l_137) = 0x2FL) > p_89);
    }
    return p_90;
}







static unsigned short func_94(unsigned char * p_95, int * p_96, short p_97)
{
    unsigned short l_98[2];
    int i;
    for (i = 0; i < 2; i++)
        l_98[i] = 0UL;
    for (g_21 = 1; (g_21 >= 0); g_21 -= 1)
    {
        int i;
        return l_98[g_21];
    }
    return l_98[0];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_19[i], "g_19[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_308[i][j][k], "g_308[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_310.f0, "g_310.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_324[i], "g_324[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_331[i][j][k].f0, "g_331[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_333.f0, "g_333.f0", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_752, "g_752", print_hash_value);
    transparent_crc(g_753, "g_753", print_hash_value);
    transparent_crc(g_830.f0, "g_830.f0", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    transparent_crc(g_908, "g_908", print_hash_value);
    transparent_crc(g_977, "g_977", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
