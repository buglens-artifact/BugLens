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
   int f1;
   int f2;
   unsigned char f3;
   unsigned short f4;
   int f5;
   int f6;
};

union U1 {
   int f0;
   unsigned f1;
   unsigned f2;
   unsigned char f3;
   int f4;
};

union U2 {
   short f0;
   unsigned f1;
};

union U3 {
   const unsigned char f0;
   struct S0 f1;
};


static unsigned g_6 = 0UL;
static char g_19 = 0xA1L;
static unsigned g_23 = 0x5DC64F6BL;
static struct S0 g_111 = {0x2E61FFE8L,0x44A6599FL,5L,0x9CL,0xCD8DL,0x4273138BL,0x8E619AEFL};
static unsigned char g_113 = 0x6FL;
static union U3 g_116 = {0x4EL};
static union U1 g_124 = {1L};
static char g_231 = 0x4DL;
static struct S0 g_242 = {0xDECE06B3L,-2L,-4L,0x6BL,0UL,0xAE7E2266L,-3L};
static union U2 g_256 = {1L};
static unsigned g_283 = 0UL;
static unsigned char g_301[7] = {0xC6L,0xC6L,0xC6L,0xC6L,0xC6L,0xC6L,0xC6L};
static short g_344[4][4][8] = {{{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L}}};
static unsigned g_417 = 0xD61B08C7L;
static unsigned short g_422 = 1UL;
static unsigned g_459 = 9UL;
static int g_717 = 0x88812B20L;
static int g_939[8][8] = {{(-5L),(-10L),(-6L),4L,(-5L),4L,(-6L),(-10L)},{(-5L),4L,(-6L),(-10L),(-5L),(-10L),(-6L),4L},{(-5L),(-10L),(-6L),4L,(-5L),4L,(-6L),(-10L)},{(-5L),4L,(-6L),(-10L),(-5L),(-10L),(-6L),4L},{(-5L),(-10L),(-6L),4L,(-5L),4L,(-6L),(-10L)},{(-5L),4L,(-6L),(-10L),(-5L),(-10L),(-6L),4L},{(-5L),(-10L),(-6L),4L,(-5L),4L,(-6L),(-10L)},{(-5L),4L,(-6L),(-10L),(-5L),(-10L),(-6L),4L}};
static unsigned g_1013 = 0UL;
static char g_1134 = 0L;
static union U3 g_1135[7][4] = {{{1UL},{0xA5L},{0xF4L},{0x59L}},{{0x93L},{0xA5L},{0xA5L},{0x93L}},{{0xA5L},{0x93L},{1UL},{0x46L}},{{0xA5L},{1UL},{0xA5L},{0xF4L}},{{0x93L},{0x46L},{0xF4L},{0xF4L}},{{1UL},{1UL},{0x59L},{0x46L}},{{0x46L},{0x93L},{0x59L},{0x93L}}};
static unsigned char g_1209 = 0x52L;
static unsigned g_1216 = 0UL;
static union U3 g_1238 = {0x92L};
static unsigned g_1260 = 8UL;
static unsigned char g_1393 = 0xE2L;



static unsigned char func_1(void);
static union U3 func_8(unsigned p_9, union U1 p_10, short p_11, unsigned short p_12, int p_13);
static const int func_37(short p_38, unsigned char p_39, union U3 p_40);
static short func_41(int p_42, unsigned char p_43, int p_44, short p_45);
static int func_46(union U2 p_47, union U2 p_48, int p_49, union U3 p_50);
static union U2 func_51(unsigned p_52, unsigned p_53, unsigned char p_54);
static unsigned func_55(const char p_56, unsigned p_57, unsigned short p_58, union U3 p_59);
static struct S0 func_81(const union U1 p_82, union U3 p_83, unsigned short p_84, union U1 p_85);
static unsigned short func_97(union U3 p_98, int p_99, const union U2 p_100);
static union U3 func_101(int p_102, unsigned p_103, unsigned p_104, unsigned char p_105, union U1 p_106);
static unsigned char func_1(void)
{
    unsigned l_18 = 0x421DD2EBL;
    int l_20 = (-10L);
    union U1 l_21 = {7L};
    int l_1023 = 1L;
    int l_1025 = 0x49388F2DL;
    union U3 l_1026 = {253UL};
    char l_1027 = 1L;
    union U2 l_1035 = {-9L};
    union U1 l_1036 = {-1L};
    const struct S0 l_1045[7] = {{7UL,0x9C3714ECL,0x9935666EL,0x84L,0x261CL,0xFE4C5334L,0x99B044E5L},{7UL,0x9C3714ECL,0x9935666EL,0x84L,0x261CL,0xFE4C5334L,0x99B044E5L},{7UL,0x9C3714ECL,0x9935666EL,0x84L,0x261CL,0xFE4C5334L,0x99B044E5L},{7UL,0x9C3714ECL,0x9935666EL,0x84L,0x261CL,0xFE4C5334L,0x99B044E5L},{7UL,0x9C3714ECL,0x9935666EL,0x84L,0x261CL,0xFE4C5334L,0x99B044E5L},{7UL,0x9C3714ECL,0x9935666EL,0x84L,0x261CL,0xFE4C5334L,0x99B044E5L},{7UL,0x9C3714ECL,0x9935666EL,0x84L,0x261CL,0xFE4C5334L,0x99B044E5L}};
    union U2 l_1048[8] = {{0x253AL},{0x253AL},{0x253AL},{0x253AL},{0x253AL},{0x253AL},{0x253AL},{0x253AL}};
    int l_1059 = (-5L);
    unsigned short l_1073 = 65532UL;
    unsigned short l_1145 = 0xB987L;
    unsigned l_1156 = 4294967295UL;
    union U3 l_1183 = {0x91L};
    unsigned l_1319[9][6];
    short l_1329[8][7] = {{0xCAFEL,1L,0x877BL,0x80B4L,(-1L),0L,0L},{0x62C8L,(-1L),(-3L),(-1L),0x62C8L,(-9L),0xCAFEL},{(-7L),1L,0L,1L,0x62C8L,0xCAFEL,0x62C8L},{1L,9L,9L,1L,(-1L),1L,(-7L)},{(-7L),1L,(-1L),1L,9L,9L,1L},{0x62C8L,0xCAFEL,0x62C8L,1L,0L,1L,(-7L)},{0xCAFEL,(-9L),0x62C8L,(-1L),(-3L),(-1L),0x62C8L},{0L,0L,(-1L),0x80B4L,0x877BL,1L,0xCAFEL}};
    union U2 l_1365[5] = {{-8L},{-8L},{-8L},{-8L},{-8L}};
    const union U1 l_1412 = {0x35310963L};
    struct S0 l_1413 = {0x410F2809L,0x582AFC95L,0xB051E7B6L,5UL,0x2B77L,0x8ECFDC66L,-1L};
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
            l_1319[i][j] = 1UL;
    }
    if ((((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s(g_6, 5)) != (g_6 && (g_1013 = (((safe_unary_minus_func_uint32_t_u(g_6)) , func_8(((safe_add_func_int8_t_s_s((-1L), (((g_19 = (safe_mod_func_int16_t_s_s(0x4E3FL, l_18))) , 0xD664087AL) >= ((l_20 , g_6) == g_6)))) , g_19), l_21, l_20, l_21.f0, g_6)) , g_113)))), 3)) >= l_21.f0) | g_111.f5))
    {
        unsigned l_1014 = 0xBB5CE6DDL;
        union U3 l_1024 = {0UL};
        int l_1028 = 9L;
        union U1 l_1038 = {2L};
        struct S0 l_1082 = {0x054B4905L,0x5DE6FFAEL,0x4B7C9C8DL,255UL,1UL,0L,-6L};
        int l_1127 = 1L;
        union U2 l_1132 = {0L};
        union U3 l_1133 = {251UL};
        int l_1174 = 0xABD3DA8CL;
        unsigned char l_1207 = 0x01L;
        short l_1241 = 0x4FFDL;
        struct S0 l_1275[5] = {{4294967291UL,0xF466345AL,0x8B0557CDL,1UL,0xC45AL,0x184600DCL,0xA7621489L},{4294967291UL,0xF466345AL,0x8B0557CDL,1UL,0xC45AL,0x184600DCL,0xA7621489L},{4294967291UL,0xF466345AL,0x8B0557CDL,1UL,0xC45AL,0x184600DCL,0xA7621489L},{4294967291UL,0xF466345AL,0x8B0557CDL,1UL,0xC45AL,0x184600DCL,0xA7621489L},{4294967291UL,0xF466345AL,0x8B0557CDL,1UL,0xC45AL,0x184600DCL,0xA7621489L}};
        struct S0 l_1276 = {0xFF707B88L,0L,0x16321344L,249UL,1UL,0x477B0DF7L,0x685407FBL};
        int l_1364 = 0xA17EB3C7L;
        int i;
        l_1028 = ((g_116 , (l_1024.f1.f6 = (((g_242.f3 && l_1014) >= func_37(((((l_21.f3 || (((safe_lshift_func_int16_t_s_s(g_116.f0, ((l_21.f4 = (l_21.f1 & ((safe_add_func_int8_t_s_s((l_1014 && (safe_mod_func_uint8_t_u_u((+func_37((safe_add_func_int32_t_s_s((l_1023 = (func_101(l_18, l_21.f3, l_21.f1, g_242.f0, g_124) , g_242.f0)), l_21.f0)), g_939[7][1], l_1024)), 6L))), g_116.f0)) , l_1014))) & l_20))) , g_256) , l_1024.f0)) , g_23) && l_1024.f0) | g_301[0]), l_1025, l_1026)) ^ l_1024.f0))) == l_1027);
        if ((safe_lshift_func_uint8_t_u_u((l_1023 ^ (safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((4294967295UL & ((l_1024.f1.f6 = (+(~func_46(g_256, l_1035, ((0xC69BL >= func_37(g_242.f6, (l_21.f0 , l_20), l_1026)) < 246UL), g_116)))) & 0L)) || g_344[1][1][6]), 1UL)), l_21.f1))), 6)))
        {
            int l_1037 = 1L;
            int l_1051 = 0xC02C6B75L;
            union U1 l_1052[4][2][6] = {{{{-6L},{0xEC7B8C31L},{0xEC7B8C31L},{-6L},{0xEC7B8C31L},{0xEC7B8C31L}},{{-6L},{0xEC7B8C31L},{0xEC7B8C31L},{-6L},{0xEC7B8C31L},{0xEC7B8C31L}}},{{{-6L},{0xEC7B8C31L},{0xEC7B8C31L},{-6L},{0xEC7B8C31L},{0xEC7B8C31L}},{{-6L},{0xEC7B8C31L},{0xEC7B8C31L},{-6L},{0xEC7B8C31L},{0xEC7B8C31L}}},{{{-6L},{0xEC7B8C31L},{0xEC7B8C31L},{-6L},{0xEC7B8C31L},{0xEC7B8C31L}},{{-6L},{0xEC7B8C31L},{0xEC7B8C31L},{-6L},{0xEC7B8C31L},{0xEC7B8C31L}}},{{{-6L},{0xEC7B8C31L},{0xEC7B8C31L},{-6L},{0xEC7B8C31L},{0xEC7B8C31L}},{{-6L},{0xEC7B8C31L},{0xEC7B8C31L},{-6L},{0xEC7B8C31L},{0xEC7B8C31L}}}};
            unsigned short l_1053[3][7][2] = {{{65531UL,0x8F74L},{65528UL,65535UL},{65535UL,65528UL},{0x8F74L,65531UL},{0x8F74L,65528UL},{65535UL,65535UL},{65528UL,0x8F74L}},{{65531UL,0x8F74L},{65528UL,65535UL},{65535UL,65528UL},{0x8F74L,65531UL},{0x8F74L,65528UL},{65535UL,65535UL},{65528UL,0x8F74L}},{{65531UL,0x8F74L},{65528UL,65535UL},{65535UL,65528UL},{0x8F74L,65531UL},{0x8F74L,65528UL},{65535UL,65535UL},{65528UL,0x8F74L}}};
            int i, j, k;
            g_111 = func_81((l_1036 = l_21), l_1026, l_1037, l_1038);
            g_124.f0 = ((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((g_344[2][3][3] = ((safe_mul_func_int8_t_s_s((l_1045[4] , (l_1028 = l_1037)), (((safe_sub_func_int32_t_s_s(func_46(l_1048[0], g_256, g_301[5], func_101((func_81(g_124, g_116, ((safe_rshift_func_uint8_t_u_u(((l_1051 = 0x92EFL) || (l_1051 = g_283)), l_1037)) >= l_1014), g_124) , 2L), l_1027, g_111.f5, l_1014, l_1052[0][0][2])), l_1036.f0)) >= l_1053[2][0][0]) == g_344[3][3][2]))) ^ l_1038.f2)), g_717)) <= g_417), l_1052[0][0][2].f0)) , 0L);
        }
        else
        {
            unsigned short l_1056 = 0x50B5L;
            const struct S0 l_1060 = {1UL,0xECF46C77L,0xDF3EBDE2L,0x91L,0x02B0L,1L,0xF2018AAFL};
            struct S0 l_1061 = {3UL,0xF1225F99L,0xFBD5CD3DL,0x26L,0x76C7L,0x939CBBD2L,0xD1A19CEFL};
lbl_1066:
            l_1038.f0 = (safe_mul_func_uint8_t_u_u((l_1056 && (safe_mul_func_int16_t_s_s(l_1014, l_1059))), 0x42L));
            l_1061 = l_1060;
            for (l_1038.f1 = 28; (l_1038.f1 == 34); l_1038.f1++)
            {
                for (l_1024.f1.f3 = 13; (l_1024.f1.f3 >= 23); l_1024.f1.f3 = safe_add_func_int8_t_s_s(l_1024.f1.f3, 6))
                {
                    g_111.f1 = l_21.f2;
                }
                if (l_21.f3)
                    goto lbl_1066;
            }
        }
lbl_1112:
        l_1028 = (((g_124.f1 = l_1045[4].f5) , ((safe_sub_func_int16_t_s_s(((g_124 , func_55(g_113, (safe_lshift_func_uint8_t_u_s((l_1048[1] , (safe_add_func_uint16_t_u_u(l_1038.f4, l_1038.f1))), func_55(g_111.f1, g_124.f3, ((l_1038.f3 ^ 3UL) <= g_301[5]), l_1024))), l_1073, l_1024)) >= 0x5066L), l_1036.f3)) <= g_301[5])) > 65531UL);
        for (l_21.f3 = 0; (l_21.f3 <= 6); l_21.f3 += 1)
        {
            int l_1083 = 1L;
            struct S0 l_1092 = {0xA529ABAAL,0xEF56E363L,0xACE05E76L,0UL,0UL,0xBA212680L,-2L};
            union U2 l_1098 = {0x1F01L};
            unsigned l_1099[6];
            union U3 l_1109 = {0xD7L};
            const union U1 l_1131 = {1L};
            int l_1171[1];
            unsigned l_1175 = 0x402DB684L;
            const unsigned char l_1388 = 0xA0L;
            int i;
            for (i = 0; i < 6; i++)
                l_1099[i] = 0x7C03E57BL;
            for (i = 0; i < 1; i++)
                l_1171[i] = 0xE0CF5214L;
            if ((g_256 , (g_301[l_21.f3] != ((safe_lshift_func_int16_t_s_s(l_1027, 3)) || ((l_1036.f0 = (safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_u(((l_1038.f4 = g_301[l_21.f3]) == (g_242.f4 | (g_124.f3 = (g_301[1] && 0xBCL)))), 9))))) && l_1038.f0)))))
            {
                const union U1 l_1079 = {8L};
                unsigned short l_1084 = 1UL;
                struct S0 l_1111[5] = {{0x05A09DA6L,0x3695849BL,-8L,248UL,0UL,3L,0x6AE42418L},{0x05A09DA6L,0x3695849BL,-8L,248UL,0UL,3L,0x6AE42418L},{0x05A09DA6L,0x3695849BL,-8L,248UL,0UL,3L,0x6AE42418L},{0x05A09DA6L,0x3695849BL,-8L,248UL,0UL,3L,0x6AE42418L},{0x05A09DA6L,0x3695849BL,-8L,248UL,0UL,3L,0x6AE42418L}};
                int i;
                g_242 = l_1082;
                for (l_1023 = 0; (l_1023 <= 3); l_1023 += 1)
                {
                    unsigned l_1085 = 0x6675FBD3L;
                    const union U1 l_1091 = {-7L};
                    for (l_1038.f1 = 0; (l_1038.f1 <= 3); l_1038.f1 += 1)
                    {
                        int i, j, k;
                        l_1083 = g_344[l_1038.f1][l_1038.f1][l_21.f3];
                        g_242 = g_242;
                        g_242.f2 = g_939[6][3];
                        return l_1084;
                    }
                    if (l_1085)
                    {
                        l_1026.f1.f2 = (1L == l_1036.f1);
                    }
                    else
                    {
                        union U2 l_1088 = {0L};
                        if (g_242.f1)
                            break;
                        g_242.f6 = (((+(l_1036.f4 = (((safe_lshift_func_int16_t_s_s(g_6, 0)) & func_37((((l_1079 , l_1045[4].f4) >= l_1085) , l_1036.f4), ((((g_301[4] <= (l_1026.f1.f2 = (!((l_1082 , l_1092) , 0x47L)))) | 2UL) >= l_1091.f3) , g_111.f4), g_116)) > l_1082.f0))) && l_1026.f0) , g_242.f1);
                        if (l_1092.f6)
                            break;
                        return g_242.f2;
                    }
                    for (l_1026.f1.f0 = 0; (l_1026.f1.f0 <= 3); l_1026.f1.f0 += 1)
                    {
                        unsigned l_1093 = 4294967291UL;
                        if (l_1093)
                            break;
                        g_116.f1.f1 = ((safe_sub_func_int8_t_s_s(g_111.f3, l_1079.f2)) , g_242.f5);
                        return l_1093;
                    }
                    for (l_1026.f1.f0 = 0; (l_1026.f1.f0 <= 3); l_1026.f1.f0 += 1)
                    {
                        char l_1108[1];
                        union U1 l_1110 = {0x5B6C1ECAL};
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1108[i] = (-1L);
                        l_1111[1] = ((safe_add_func_uint8_t_u_u((g_242.f3 = l_1099[4]), 0x2AL)) , l_1082);
                    }
                }
                if (l_20)
                    goto lbl_1112;
                l_1026.f1.f6 = ((l_1045[4].f5 && (0x66L | (-5L))) < l_1079.f2);
            }
            else
            {
                unsigned short l_1119 = 65532UL;
                union U2 l_1126[9] = {{7L},{7L},{7L},{7L},{7L},{7L},{7L},{7L},{7L}};
                int l_1128 = (-7L);
                int i;
                l_1128 = (safe_mod_func_uint8_t_u_u((((g_256 , 2L) , l_1127) == g_124.f3), g_113));
                g_111.f1 = 1L;
            }
            l_1133.f1 = func_81((g_124 = ((g_242.f6 | (g_116 , func_37((((((g_344[0][3][2] = (safe_mul_func_int16_t_s_s((g_1134 = (g_113 & func_37(g_111.f2, ((+((g_116.f1.f4 = g_111.f1) | l_1099[4])) > ((g_256 , (l_1127 = ((l_1131 , l_1132) , g_242.f0))) >= g_111.f5)), l_1133))), 8L))) <= g_19) , l_1035.f0) || g_242.f0) == 4L), g_256.f0, l_1133))) , l_1131)), g_1135[0][3], g_242.f5, l_1038);
            for (l_1026.f1.f4 = 0; (l_1026.f1.f4 <= 6); l_1026.f1.f4 += 1)
            {
                char l_1142[10][4][6] = {{{2L,0x64L,0xDCL,1L,0L,0x53L},{1L,0L,0x53L,6L,0x90L,0x1CL},{0xB3L,0L,0x75L,0x1CL,0x90L,6L},{0x90L,2L,0xDCL,0x8BL,0x64L,1L}},{{0x1CL,0xDCL,0x75L,1L,0xE7L,0x56L},{0x1CL,0x8BL,1L,0x8BL,0x1CL,0x64L},{0x90L,0x64L,0xE7L,0x1CL,0x56L,0L},{6L,1L,0x56L,0x64L,0L,0L}},{{0x53L,0xE7L,0xE7L,0x53L,1L,0x64L},{0L,0xB3L,1L,2L,0x8BL,0x56L},{1L,6L,0x75L,1L,0x8BL,1L},{0xDCL,0xB3L,0xDCL,3L,1L,6L}},{{0x64L,0xE7L,0x1CL,0x56L,0L,1L},{2L,1L,3L,0x56L,0x56L,3L},{0x64L,0x64L,0xB3L,3L,0x1CL,0xDCL},{0xDCL,0x8BL,0x64L,1L,0xE7L,0xB3L}},{{1L,0xDCL,0x64L,2L,0x64L,0xDCL},{0L,2L,0xB3L,0x53L,0x90L,3L},{0x53L,0x90L,3L,0x8BL,0xE7L,0xDCL},{1L,3L,0x56L,0x56L,3L,1L}},{{3L,1L,0x1CL,6L,0x8BL,0xB3L},{0x56L,0x1CL,0xE7L,0x64L,0x90L,0x75L},{0x56L,6L,0x64L,6L,0x56L,0x8BL},{3L,0x8BL,0x90L,0x56L,0x75L,0x53L}},{{1L,0xB3L,0x75L,0x8BL,0x53L,0x53L},{2L,0x90L,0x90L,2L,0xDCL,0x8BL},{0x53L,1L,0x64L,1L,6L,0x75L},{0x64L,1L,0xE7L,0xB3L,6L,0xB3L}},{{0x1CL,1L,0x1CL,0L,0xDCL,1L},{0x8BL,0x90L,0x56L,0x75L,0x53L,0xDCL},{1L,0xB3L,0L,0x75L,0x75L,0L},{0x8BL,0x8BL,1L,0L,0x56L,0x1CL}},{{0x1CL,6L,0x8BL,0xB3L,0x90L,1L},{0x64L,0x1CL,0x8BL,1L,0x8BL,0x1CL},{0x53L,1L,1L,0L,0xE7L,0x90L},{0L,0xE7L,0x90L,1L,0x56L,0xB3L}},{{0x8BL,0xE7L,0xDCL,0xDCL,0xE7L,0x8BL},{0xE7L,0x53L,1L,0x64L,1L,6L},{0xDCL,1L,0x56L,2L,0x75L,0x1CL},{0xDCL,0x64L,2L,0x64L,0xDCL,1L}}};
                int l_1172 = 0L;
                char l_1176[9] = {0x82L,0x82L,(-1L),0x82L,0x82L,(-1L),0x82L,0x82L,(-1L)};
                union U1 l_1222[9] = {{-6L},{-6L},{-6L},{-6L},{-6L},{-6L},{-6L},{-6L},{-6L}};
                int i, j, k;
            }
            for (l_1026.f1.f2 = 1; (l_1026.f1.f2 <= 7); l_1026.f1.f2 += 1)
            {
                const unsigned l_1277[6] = {0xAEDFBD09L,0xAEDFBD09L,0UL,0xAEDFBD09L,0xAEDFBD09L,0UL};
                int l_1330[9][9] = {{0x6C9F925CL,0x6F4C7C16L,(-2L),0xFBDFAB0AL,3L,1L,0x18FC2CD6L,0x39AE3C3AL,0x6F4C7C16L},{0xFBDFAB0AL,1L,0xA2240038L,7L,0x26C121F2L,0x4A349A07L,0xA5D21496L,0x8886749EL,7L},{0x6C9F925CL,3L,0x18FC2CD6L,9L,0L,0x46558C7EL,0L,0x18FC2CD6L,(-2L)},{(-7L),(-10L),0x1A1C8CBAL,0L,0L,0x1A1C8CBAL,(-10L),(-7L),0x18FC2CD6L},{6L,0xFBDFAB0AL,0x8886749EL,0x26C121F2L,0x18FC2CD6L,1L,9L,0x0EEC94C1L,(-10L)},{0L,7L,1L,0x0EEC94C1L,0L,9L,0xA2240038L,0xF6429E98L,7L},{0xA2240038L,0L,0L,0x6C9F925CL,0x50D5E47BL,0x39AE3C3AL,0x4A349A07L,0x46558C7EL,0x46558C7EL},{6L,0L,0xA2240038L,0x6C9F925CL,0xA2240038L,0L,6L,7L,0xF6429E98L},{(-10L),9L,0xA5D21496L,0x0EEC94C1L,0x39AE3C3AL,0x26C121F2L,0xFBDFAB0AL,(-10L),0x0EEC94C1L}};
                union U1 l_1345[6][4][7] = {{{{7L},{0L},{0L},{1L},{-10L},{0xAF028184L},{1L}},{{0L},{-4L},{0x7F5E6C1BL},{1L},{-1L},{1L},{0xAF028184L}},{{0xAF028184L},{-6L},{-4L},{1L},{0x730EAA17L},{0xEB05F4C7L},{-1L}},{{0xEB05F4C7L},{-8L},{-2L},{0x36502155L},{4L},{0L},{0L}}},{{{0xFC76C9B1L},{0xFDFCD82DL},{-8L},{0xFDFCD82DL},{0xFC76C9B1L},{0xE5AB01B4L},{0x42CFD6E4L}},{{-10L},{0x0C693E12L},{0L},{0x719DDF68L},{-1L},{0L},{0xEB05F4C7L}},{{-1L},{-5L},{0xFDFCD82DL},{0x42CFD6E4L},{-4L},{-1L},{-2L}},{{-10L},{0x719DDF68L},{0xFC76C9B1L},{0L},{0x7F5E6C1BL},{-10L},{-1L}}},{{{0xD155235EL},{0L},{0x1414B403L},{-4L},{0L},{0x4F543BF7L},{-1L}},{{-1L},{-1L},{0L},{-3L},{0xFF678995L},{-7L},{0L}},{{-4L},{0xAF028184L},{0x719DDF68L},{1L},{0xFDFCD82DL},{-1L},{0x956C5820L}},{{0L},{1L},{0x0C693E12L},{0xEB05F4C7L},{0xFDFCD82DL},{0x719DDF68L},{1L}}},{{{0x4F543BF7L},{3L},{0xDFD0DEB7L},{1L},{0xFF678995L},{1L},{-1L}},{{0x5F0CD93DL},{1L},{0L},{0x7F5E6C1BL},{0L},{-1L},{-2L}},{{0x4995615AL},{0x7F5E6C1BL},{0xE5AB01B4L},{0xE5AB01B4L},{0x7F5E6C1BL},{0x4995615AL},{3L}},{{0x0C693E12L},{-1L},{0x472FCD6DL},{0xFDF01DF0L},{-1L},{0xDFD0DEB7L},{0L}}},{{{-4L},{0x719DDF68L},{0x36502155L},{-8L},{0x956C5820L},{-1L},{1L}},{{1L},{-1L},{4L},{-1L},{0xD155235EL},{0L},{0x1414B403L}},{{0L},{0x7F5E6C1BL},{-10L},{-1L},{-2L},{0xFDF01DF0L},{-7L}},{{0x36502155L},{1L},{-3L},{-2L},{0L},{0x730EAA17L},{0xAEFE8B27L}}},{{{0x9FA2498FL},{3L},{0L},{-1L},{0xDFD0DEB7L},{0xB3DE19E0L},{1L}},{{0L},{4L},{0x4F543BF7L},{0x1414B403L},{-6L},{0xFF678995L},{0xC3444AF7L}},{{-1L},{-1L},{0x36502155L},{-1L},{0x4F543BF7L},{1L},{-7L}},{{-2L},{-3L},{-2L},{-1L},{-5L},{0x719DDF68L},{-4L}}}};
                struct S0 l_1376 = {4294967295UL,8L,0x1BDAEDCFL,247UL,0xC4AFL,-1L,-1L};
                int i, j, k;
                g_124.f4 = ((((l_1277[5] | l_1277[5]) , 7UL) || g_283) <= l_1028);
                for (g_116.f1.f1 = 3; (g_116.f1.f1 >= 0); g_116.f1.f1 -= 1)
                {
                    struct S0 l_1278 = {0x4B8F6371L,0xB733D0BCL,0x77CE1DF5L,255UL,0x13DDL,1L,0x809C139EL};
                    l_1278 = (l_1183.f1 = g_111);
                    l_1278.f1 = (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(0xABB4L, ((l_1276.f4 > g_242.f1) != (safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(0x77L, (func_37(g_344[1][1][6], (safe_lshift_func_int8_t_s_u(func_37((safe_mul_func_int16_t_s_s(g_1216, func_37(l_1278.f0, (safe_sub_func_uint8_t_u_u((g_124.f3 = g_111.f4), (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_113, 4)), l_1278.f2)))), g_116))), g_113, g_116), 6)), g_1135[0][3]) && l_1133.f1.f5))), 4)) , l_1024) , l_1278.f2), g_1216))))), l_1092.f5));
                }
                for (l_1133.f1.f5 = 6; (l_1133.f1.f5 >= 1); l_1133.f1.f5 -= 1)
                {
                    unsigned char l_1309 = 0x59L;
                    int l_1326 = 0x139A8685L;
                    if ((g_256 , l_1277[5]))
                    {
                        unsigned l_1318 = 0xF835BDBAL;
                        g_124.f0 = ((((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(g_113, (0x389D820BL && ((safe_rshift_func_uint8_t_u_u((func_37(g_939[6][3], (g_111.f5 > (g_242.f3 = (+(((g_113 <= l_1318) < g_242.f1) != l_1276.f6)))), g_116) , g_6), 2)) || 0xEBL)))), 7)), l_1045[4].f4)) || l_1027) ^ 0xF9L) | l_1082.f6);
                    }
                    else
                    {
                        if (g_113)
                            break;
                        if (g_113)
                            break;
                    }
                    for (l_1309 = 0; (l_1309 <= 7); l_1309 += 1)
                    {
                        int i;
                        g_116.f1.f1 = (g_1135[0][3].f1.f1 = (((l_1319[2][5] & l_1309) | ((l_1127 && (safe_lshift_func_int8_t_s_s(g_459, 7))) , ((safe_mod_func_uint32_t_u_u(func_37((l_1023 = (safe_mod_func_int32_t_s_s(l_1277[5], (-8L)))), g_242.f5, g_1135[5][0]), 0xF07EC615L)) > g_1135[0][3].f0))) < 0x3D9C5AFAL));
                        l_1326 = ((l_1277[5] || g_111.f1) == l_1277[5]);
                        g_242.f2 = (safe_mul_func_uint16_t_u_u((g_116.f1.f4 = (~l_1048[l_21.f3].f0)), 9UL));
                    }
                }
                if (l_1277[4])
                {
                    for (l_1025 = 7; (l_1025 >= 0); l_1025 -= 1)
                    {
                        g_1238.f1 = l_1275[3];
                    }
                }
                else
                {
                    g_116.f1.f1 = 0x3EF0F5DEL;
                    l_1036.f4 = (g_1135[0][3].f1.f2 = 0xFEDFEABAL);
                }
                for (g_1260 = 1; (g_1260 <= 7); g_1260 += 1)
                {
                    union U2 l_1332[6] = {{-8L},{-8L},{-8L},{-8L},{-8L},{-8L}};
                    union U1 l_1375 = {0x551F23E6L};
                    short l_1385 = (-1L);
                    int i;
                    for (l_1024.f1.f4 = 0; (l_1024.f1.f4 <= 3); l_1024.f1.f4 += 1)
                    {
                        int l_1350 = 0x9FFFD5F1L;
                        int i, j, k;
                        l_1038.f0 = ((l_1092.f1 = (l_1131.f2 , 0x0814L)) > g_231);
                        l_1276.f2 = (safe_rshift_func_uint16_t_u_u(0x0682L, ((~(safe_lshift_func_int16_t_s_u((l_1277[5] & (l_1183.f1.f6 = g_422)), ((g_1135[0][3].f0 == ((safe_mod_func_int8_t_s_s((g_111.f2 ^ (safe_add_func_uint32_t_u_u(((l_1350 > g_301[5]) , 0UL), 0x4B447A2FL))), g_242.f5)) != g_1209)) | 0x64CBL)))) && l_1345[2][0][0].f2)));
                        if (g_417)
                            break;
                    }
                    if ((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(g_113, l_1099[4])), ((safe_rshift_func_int8_t_s_u((g_6 , (l_1109.f1.f1 = (safe_rshift_func_int8_t_s_s(g_717, l_1330[8][5])))), 2)) | g_111.f5))))
                    {
                        unsigned short l_1363[6] = {0UL,0UL,65535UL,0UL,0UL,65535UL};
                        int i;
                        if (l_1025)
                            goto lbl_1112;
                        if (g_242.f5)
                            continue;
                        g_116.f1.f6 = l_1330[8][5];
                        g_1135[0][3].f1.f2 = l_1345[2][0][0].f2;
                    }
                    else
                    {
                        unsigned l_1366 = 3UL;
                        int l_1367 = 1L;
                        union U1 l_1374 = {0xD7E15CAEL};
                        l_1376 = g_242;
                        g_242 = g_242;
                    }
                    for (g_111.f0 = 0; (g_111.f0 <= 7); g_111.f0 += 1)
                    {
                        l_1036.f4 = (g_242.f5 , ((safe_sub_func_uint32_t_u_u(0UL, (l_1375.f0 = (g_124.f3 || g_231)))) & (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(l_1385, (safe_mod_func_int8_t_s_s(l_1092.f6, (g_19 = l_1083))))) , l_1376.f5), 2)), ((g_1238.f1.f2 = (g_242.f6 & (-1L))) , 255UL)))));
                        g_116.f1 = g_111;
                    }
                    if (l_1388)
                        continue;
                }
            }
        }
    }
    else
    {
        int l_1394 = (-2L);
        int l_1411[5];
        struct S0 l_1415 = {0x9E4D13CEL,-1L,7L,0xE5L,65534UL,0x10292B04L,5L};
        struct S0 l_1416[6][5][6] = {{{{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L}},{{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L}},{{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L}},{{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL}},{{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L}}},{{{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L}},{{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L}},{{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L}},{{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL}},{{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L}}},{{{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL}},{{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL}},{{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL}},{{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L}},{{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL}}},{{{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL}},{{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL}},{{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL}},{{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L}},{{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL}}},{{{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL}},{{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL}},{{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL}},{{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L}},{{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL}}},{{{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL}},{{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{0xB07D0CA1L,-1L,0xDF4223C5L,1UL,65535UL,-1L,7L}},{{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL}},{{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967295UL,0x6F44CAD5L,0xB6F278F8L,0x8FL,65534UL,0xF2A44D9EL,1L},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L}},{{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{4294967295UL,0xE36EAE37L,0x9AD8AC39L,255UL,65527UL,0xEFD1071FL,0xB978642CL},{4294967287UL,0x00BC058AL,-1L,4UL,65533UL,0x2CB461DAL,-8L},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL},{0x3B892262L,0x94C8FD0AL,0x7197192CL,0xFFL,4UL,1L,0x7A4778DDL}}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1411[i] = 0x0C3E8525L;
        l_1394 = (65526UL || ((safe_add_func_int32_t_s_s(g_242.f2, g_124.f3)) && ((safe_lshift_func_uint8_t_u_s(func_41(g_1393, l_1045[4].f4, g_111.f5, ((g_283 = g_124.f3) , g_111.f5)), 7)) && 0xC5L)));
        if (l_1025)
            goto lbl_1414;
        if ((l_1394 ^ g_242.f5))
        {
            int l_1409 = 0x316DBA23L;
            int l_1410[6] = {0x67E07F2EL,0x67E07F2EL,0x67E07F2EL,0x67E07F2EL,0x67E07F2EL,0x67E07F2EL};
            int i;
            l_1411[1] = (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((l_1410[0] = ((safe_rshift_func_uint8_t_u_u((g_256 , (l_1036.f0 = g_1238.f0)), 3)) > ((l_1319[2][5] > (safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((g_116.f1.f4 = (g_124.f2 <= (func_37(((0x62BAL != g_301[5]) & g_19), g_1393, g_1238) > 0xC8E576E6L))), l_1394)), l_1409))) <= g_242.f2))), l_1409)), 0x13L));
        }
        else
        {
            l_1413 = func_81(l_1412, l_1183, g_124.f1, g_124);
lbl_1414:
            g_242.f6 = 0x51164625L;
            l_1026.f1.f6 = 0x62120E0FL;
            l_1416[2][0][5] = l_1415;
        }
    }
    g_111.f6 = (safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(0x2AL, (0x6C1EL & 3UL))) || (l_1026 , ((((!0x6214BCD1L) & (safe_add_func_uint32_t_u_u((l_1329[1][4] || (safe_mul_func_uint16_t_u_u((l_1319[2][5] >= 0xF7L), 0xD352L))), g_417))) != g_111.f2) > 0xD3023C2DL))), g_113));
    return g_1260;
}







static union U3 func_8(unsigned p_9, union U1 p_10, short p_11, unsigned short p_12, int p_13)
{
    unsigned short l_22 = 0x089CL;
    const unsigned char l_60 = 255UL;
    union U3 l_61 = {9UL};
    union U1 l_889 = {0L};
    char l_963 = 0xD4L;
    struct S0 l_1001 = {0UL,1L,0L,2UL,0x468DL,-1L,0xF0918C0AL};
    const union U2 l_1012 = {-4L};
    g_23 = l_22;
    for (p_12 = (-22); (p_12 > 4); p_12++)
    {
        const char l_32 = 0xADL;
        union U1 l_553[8][5] = {{{0L},{0L},{-1L},{0x4A885673L},{0L}},{{0L},{0x49AB7FCFL},{0x3658C40DL},{0xB588F509L},{0x6415E577L}},{{0x96D71C37L},{0x4A885673L},{0x4A885673L},{0x96D71C37L},{0x49AB7FCFL}},{{0x6415E577L},{0x4A885673L},{-1L},{8L},{0x96D71C37L}},{{0xB588F509L},{0x49AB7FCFL},{0x6415E577L},{-7L},{0x3B939370L}},{{-1L},{0L},{0x3731C6C6L},{8L},{8L}},{{0L},{0xB588F509L},{0L},{0x96D71C37L},{-1L}},{{0L},{-2L},{-7L},{0xB588F509L},{-1L}}};
        int l_792 = 9L;
        struct S0 l_941 = {0xC452682AL,0L,0x3DD85851L,0xDDL,65535UL,0xFFC0EA54L,0xD922462EL};
        union U3 l_981[9] = {{0xA5L},{0x7EL},{0x7EL},{0xA5L},{0x7EL},{0x7EL},{0xA5L},{0x7EL},{0x7EL}};
        int i, j;
        for (p_9 = 0; (p_9 <= 43); p_9 = safe_add_func_uint32_t_u_u(p_9, 1))
        {
            int l_554 = 0x6F2A707AL;
            union U2 l_772 = {3L};
            union U3 l_773 = {1UL};
            struct S0 l_890 = {3UL,-1L,0x0D96932AL,0x8AL,65535UL,0x0565872BL,0x97A49E7BL};
            union U1 l_938 = {0L};
            unsigned short l_940[7] = {0xDAE7L,65530UL,65530UL,0xDAE7L,65530UL,65530UL,0xDAE7L};
            int i;
            if (g_23)
                break;
        }
        g_242 = l_1001;
    }
    l_1001.f1 = (g_111.f6 = (safe_mod_func_uint32_t_u_u(0xF6EAAD48L, (safe_lshift_func_uint8_t_u_u(0xCAL, (safe_rshift_func_uint16_t_u_s((0L ^ g_422), (p_11 = 0xDFF5L))))))));
    l_1001.f1 = (l_889.f3 >= (0x4773L || (safe_lshift_func_int16_t_s_s((((p_11 > g_717) & l_22) == 1UL), 8))));
    return l_61;
}







static const int func_37(short p_38, unsigned char p_39, union U3 p_40)
{
    const int l_815 = 6L;
    int l_827 = 0xC1113AD5L;
    union U2 l_838 = {0L};
    unsigned char l_841[6][7][2] = {{{0x2CL,1UL},{1UL,0xB4L},{1UL,0x2CL},{0x8EL,1UL},{0UL,1UL},{0x8EL,0x8AL},{0x90L,0x9EL}},{{0UL,0UL},{0x8AL,0x4DL},{0x2CL,0x8EL},{0x4DL,0xEAL},{0xA0L,0x4DL},{1UL,1UL},{1UL,0x4DL}},{{0xA0L,0xEAL},{0x4DL,0x8EL},{0x2CL,0x4DL},{0x8AL,0UL},{0UL,0x9EL},{0x90L,0x8AL},{1UL,1UL}},{{0x4DL,1UL},{1UL,0x8AL},{0x90L,0x9EL},{0UL,0UL},{0x8AL,0x4DL},{0x2CL,0x8EL},{0x4DL,0xEAL}},{{0xA0L,0x4DL},{1UL,1UL},{1UL,0x4DL},{0xA0L,0xEAL},{0x4DL,0x8EL},{0x2CL,0x4DL},{0x8AL,0UL}},{{0UL,0x9EL},{0x90L,0x8AL},{1UL,1UL},{0x4DL,1UL},{1UL,0x8AL},{0x90L,0x9EL},{0UL,0UL}}};
    struct S0 l_882 = {1UL,0x97C080F1L,-1L,0x77L,0xFF12L,0x24BBB7FCL,-4L};
    int i, j, k;
    for (p_40.f1.f5 = 0; (p_40.f1.f5 != (-22)); p_40.f1.f5--)
    {
        struct S0 l_804 = {0xA61A38ACL,1L,0xF0CF6B82L,255UL,0x387EL,0x848F38D2L,-1L};
        g_111 = l_804;
    }
    for (g_231 = 0; (g_231 >= 11); g_231++)
    {
        char l_807 = 0xBDL;
        struct S0 l_829 = {0UL,-1L,0x09AEE684L,0xFEL,1UL,8L,0x1C8B87AEL};
        union U1 l_834 = {0L};
        struct S0 l_887 = {0xB8473402L,0xB9CD2A0BL,0x2304CA79L,0x5BL,0xB822L,0xA7F2622AL,0x6BB17682L};
    }
    return l_841[5][1][0];
}







static short func_41(int p_42, unsigned char p_43, int p_44, short p_45)
{
    int l_795 = 0x464262D1L;
    char l_798 = 0x78L;
    const union U2 l_799[5][7][7] = {{{{6L},{4L},{0x4F72L},{0x3A75L},{0x5FD1L},{2L},{0L}},{{-1L},{0L},{8L},{1L},{1L},{6L},{0L}},{{6L},{0x3A75L},{-1L},{1L},{0xDBFEL},{6L},{0x5FD1L}},{{1L},{1L},{0xC3BAL},{-1L},{1L},{0xC901L},{0x75FCL}},{{-5L},{0L},{0x5BEAL},{0x1BD4L},{6L},{2L},{0x96B7L}},{{1L},{0L},{-5L},{-1L},{1L},{0L},{-10L}},{{0x0E5DL},{5L},{-1L},{-6L},{-8L},{0x0DFDL},{-8L}}},{{{0L},{0xC5D8L},{0xC5D8L},{0L},{-1L},{0x85E3L},{-1L}},{{0x45C2L},{0x3BDDL},{0x96B7L},{0x5BEAL},{-8L},{1L},{0x3BDDL}},{{0x7116L},{0xC3BAL},{1L},{0x4B30L},{-1L},{0xE0C5L},{-1L}},{{0xDBFEL},{0xBE24L},{0x18C0L},{0L},{0x0DFDL},{-7L},{-8L}},{{8L},{-1L},{0xD5D0L},{0xDDB3L},{0xD825L},{0x4B30L},{-10L}},{{9L},{-4L},{0x0E5DL},{0x18C0L},{-2L},{4L},{0x96B7L}},{{0L},{0xC97CL},{0x9AF5L},{0xFB57L},{0x4B30L},{0L},{0x75FCL}}},{{{2L},{0x0E5DL},{-1L},{0x538EL},{0x3BDDL},{0x3BDDL},{0x538EL}},{{0L},{0x5639L},{0L},{-1L},{0x4CB8L},{-5L},{0x63D2L}},{{0L},{0x63B7L},{-1L},{-1L},{0x3A75L},{0x0E5DL},{0x2F6BL}},{{0x8A21L},{0L},{0xC901L},{0xC3BAL},{0xDDB3L},{0x4CB8L},{0xC97CL}},{{0xC31CL},{5L},{0xD2ABL},{0x18C0L},{2L},{0xD593L},{0x63B7L}},{{0x0E05L},{0L},{0x85E3L},{0x6E56L},{0x7A40L},{-1L},{0L}},{{0x0DFDL},{0x2F6BL},{0x538EL},{1L},{0xD2ABL},{0x0E5DL},{0x05A2L}}},{{{0x75FCL},{0x82CFL},{-5L},{0L},{-1L},{0L},{0xDDB3L}},{{6L},{1L},{0x7931L},{0x96B7L},{-1L},{0x96B7L},{0x7931L}},{{6L},{6L},{0x7116L},{-5L},{0L},{0L},{-1L}},{{-2L},{1L},{0x18C0L},{-5L},{-1L},{-2L},{0x45C2L}},{{0x4CB8L},{0xE5C0L},{0xC5D8L},{0x4FFAL},{0L},{0xCA0CL},{0xD5D0L}},{{2L},{-1L},{0xDBFEL},{0L},{-1L},{6L},{1L}},{{0xC5D8L},{0x7116L},{0x75FCL},{0x9AF5L},{-1L},{0x8A21L},{-1L}}},{{{0xC31CL},{-1L},{0x3BDDL},{4L},{0xD2ABL},{0x67A1L},{5L}},{{-1L},{0xC97CL},{0x92B7L},{0x7116L},{0x7A40L},{0x5639L},{1L}},{{-4L},{0xDBA8L},{6L},{-7L},{-7L},{0x5BEAL},{2L}},{{0x92B7L},{0L},{0x63D2L},{0L},{0xE0C5L},{1L},{0x4FFAL}},{{-1L},{0xB728L},{-7L},{0xDBA8L},{1L},{0x05A2L},{4L}},{{0x8A21L},{1L},{0x551EL},{0L},{0x85E3L},{0x9AF5L},{0xCA0CL}},{{0x1BD4L},{4L},{-8L},{-7L},{0x0DFDL},{0L},{0x18C0L}}}};
    union U3 l_800 = {0UL};
    unsigned l_801 = 4294967295UL;
    int i, j, k;
    l_801 = ((((g_242.f1 < ((safe_mod_func_uint32_t_u_u(l_795, g_242.f6)) || (p_42 = l_795))) > (p_44 != (p_44 != g_23))) , (g_19 = (safe_mul_func_uint8_t_u_u(l_798, func_55((l_799[4][4][1] , l_798), g_124.f2, l_799[4][4][1].f0, l_800))))) , 0x75912966L);
    return l_799[4][4][1].f0;
}







static int func_46(union U2 p_47, union U2 p_48, int p_49, union U3 p_50)
{
    const union U1 l_774[8] = {{0x332C76A9L},{-1L},{-1L},{0x332C76A9L},{-1L},{-1L},{0x332C76A9L},{-1L}};
    union U2 l_775 = {-2L};
    int i;
    p_50.f1 = func_81(l_774[2], g_116, g_242.f5, (l_775 , l_774[2]));
    for (g_116.f1.f3 = (-24); (g_116.f1.f3 != 25); g_116.f1.f3 = safe_add_func_uint8_t_u_u(g_116.f1.f3, 1))
    {
        unsigned short l_785 = 0x84C8L;
        int l_790 = 0xD6975148L;
        int l_791 = 0x985BACE8L;
        l_791 = (safe_rshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_s((p_50 , (safe_unary_minus_func_uint8_t_u((g_256.f0 ^ (((safe_add_func_int32_t_s_s(g_344[1][1][6], l_774[2].f2)) || l_785) , (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((l_790 = (((p_50.f1.f3 = ((((p_50.f1.f1 != g_242.f6) >= g_459) != p_50.f1.f5) && l_785)) < g_422) > 0xF628L)) <= g_6) <= l_774[2].f2), g_111.f3)), p_47.f0))))))), 7)) ^ g_417) != g_111.f2), 6));
    }
    return l_774[2].f3;
}







static union U2 func_51(unsigned p_52, unsigned p_53, unsigned char p_54)
{
    short l_555[8][4][5] = {{{(-1L),0x1727L,(-1L),(-9L),0x8630L},{0x8630L,0x2C5CL,3L,(-9L),0xE5EFL},{1L,0x0887L,9L,0x1727L,0x8630L},{1L,(-9L),0L,0xF724L,(-1L)}},{{0x8630L,0x0887L,0L,7L,(-2L)},{(-1L),0x2C5CL,9L,0xF724L,(-2L)},{(-1L),0x1727L,3L,0x1727L,(-1L)},{(-1L),0x1727L,(-1L),(-9L),0x8630L}},{{0x8630L,0x2C5CL,3L,(-9L),0xE5EFL},{1L,0x0887L,9L,0x1727L,0x8630L},{1L,(-9L),0L,0xF724L,(-1L)},{0x8630L,(-1L),5L,0xE5EFL,0xD3CFL}},{{2L,1L,0x30BBL,0x8630L,0xD3CFL},{0x31C7L,(-1L),1L,(-1L),0x31C7L},{2L,(-1L),0x8430L,(-2L),9L},{9L,1L,1L,(-2L),0x789FL}},{{1L,(-1L),0x30BBL,(-1L),9L},{1L,(-2L),5L,0x8630L,0x31C7L},{9L,(-1L),5L,0xE5EFL,0xD3CFL},{2L,1L,0x30BBL,0x8630L,0xD3CFL}},{{0x31C7L,(-1L),1L,(-1L),0x31C7L},{2L,(-1L),0x8430L,(-2L),9L},{9L,1L,1L,(-2L),0x789FL},{1L,(-1L),0x30BBL,(-1L),9L}},{{1L,(-2L),5L,0x8630L,0x31C7L},{9L,(-1L),5L,0xE5EFL,0xD3CFL},{2L,1L,0x30BBL,0x8630L,0xD3CFL},{0x31C7L,(-1L),1L,(-1L),0x31C7L}},{{2L,(-1L),0x8430L,(-2L),9L},{9L,1L,1L,(-2L),0x789FL},{1L,(-6L),1L,0x9A1EL,0x3D9BL},{0x0887L,0x30BBL,0x31C7L,0xC4DEL,0xF724L}}};
    int l_556 = 0xE505350FL;
    const unsigned l_598 = 4294967292UL;
    char l_624 = 2L;
    int l_627 = 3L;
    struct S0 l_642 = {0xFCB9467FL,0x40E6C38CL,-5L,249UL,1UL,6L,-1L};
    union U2 l_657 = {1L};
    union U1 l_667[6][3] = {{{0L},{0L},{0L}},{{-10L},{-10L},{-10L}},{{0L},{0L},{0L}},{{-10L},{-10L},{-10L}},{{0L},{0L},{0L}},{{-10L},{-10L},{-10L}}};
    int i, j, k;
    l_556 = ((g_113 , g_242) , l_555[1][3][1]);
lbl_678:
    for (g_242.f3 = (-4); (g_242.f3 <= 37); g_242.f3 = safe_add_func_uint8_t_u_u(g_242.f3, 5))
    {
        unsigned l_594 = 4294967294UL;
        int l_612 = 1L;
        int l_613[7][5][3] = {{{0x2C56B33AL,0x4825C154L,0x9D14331EL},{0L,0x32D4A2E9L,0x85EF4EECL},{0xDD39AD79L,0x65291A9DL,(-5L)},{0xB4DB8664L,0x32D4A2E9L,0x9C73FB98L},{0x85EF4EECL,0x4825C154L,0xDD39AD79L}},{{0x275B76DDL,6L,0x20C74DB7L},{0x20C74DB7L,0xB4DB8664L,0x20C74DB7L},{0xCE429A1BL,0L,0xDD39AD79L},{0x317050E8L,0x9D14331EL,0x9C73FB98L},{(-2L),0x85EF4EECL,(-5L)}},{{0x9D14331EL,(-5L),0x85EF4EECL},{(-2L),0x9C73FB98L,0x9D14331EL},{0x317050E8L,0xDD39AD79L,0L},{0xCE429A1BL,0x20C74DB7L,0xB4DB8664L},{0x20C74DB7L,0x20C74DB7L,6L}},{{0x275B76DDL,0xDD39AD79L,0x4825C154L},{0x85EF4EECL,0x9C73FB98L,0x32D4A2E9L},{0xB4DB8664L,(-5L),0x65291A9DL},{0xDD39AD79L,0x85EF4EECL,0x32D4A2E9L},{0L,0x9D14331EL,0x4825C154L}},{{0x2C56B33AL,0L,6L},{(-1L),0xB4DB8664L,0xB4DB8664L},{(-1L),6L,1L},{0x20C74DB7L,0x9C73FB98L,0x2C56B33AL},{1L,6L,0xBF5A88D7L}},{{0xB4DB8664L,0xDD39AD79L,0x85EF4EECL},{0x32D4A2E9L,6L,9L},{0xBF5A88D7L,0x9C73FB98L,0xB4DB8664L},{0x65291A9DL,0x317050E8L,(-2L)},{(-2L),0x32D4A2E9L,(-2L)}},{{0x7F250C5FL,1L,0xB4DB8664L},{0L,0x2C56B33AL,9L},{0xCE429A1BL,0xBF5A88D7L,0x85EF4EECL},{0x2C56B33AL,0x85EF4EECL,0xBF5A88D7L},{0xCE429A1BL,9L,0x2C56B33AL}}};
        int i, j, k;
        for (g_111.f1 = 11; (g_111.f1 > 15); g_111.f1 = safe_add_func_uint32_t_u_u(g_111.f1, 4))
        {
            if (g_417)
                break;
        }
        if ((((255UL && (safe_add_func_uint16_t_u_u((g_422 = (((g_256 , g_256.f0) , (safe_rshift_func_int8_t_s_s((((g_111.f4 = (4UL != ((l_555[1][3][1] && 6L) & ((g_116.f1.f0 = g_23) >= p_53)))) || g_242.f2) || g_242.f1), g_344[1][1][6]))) < p_53)), g_111.f5))) >= 0x2B79L) ^ 0L))
        {
            int l_571 = (-9L);
            unsigned short l_577 = 0x4A81L;
            int l_578[5];
            int i;
            for (i = 0; i < 5; i++)
                l_578[i] = (-1L);
            if ((g_283 && p_52))
            {
                int l_576 = 0xF9F45E62L;
                l_578[1] = (safe_add_func_uint32_t_u_u((!((safe_lshift_func_int16_t_s_s(((g_124.f2 = 0xCD74F8FEL) , (safe_sub_func_int8_t_s_s(l_556, (g_111.f5 && 0x994FL)))), ((l_571 == ((safe_mod_func_int16_t_s_s(((((safe_mul_func_int16_t_s_s(p_53, ((g_344[1][1][6] = ((g_116.f1.f0 = ((0x2AL <= (((0x8FA9L == ((((p_52 ^ g_344[3][1][4]) > p_52) , p_53) || p_53)) || l_576) == l_577)) > p_54)) >= g_111.f6)) > g_113))) || g_231) && 0x206DL) , 0x2908L), l_576)) != p_52)) == p_54))) , p_54)), 4294967294UL));
                if (l_577)
                    continue;
                l_578[1] = (g_116.f1.f6 = ((g_231 = (safe_lshift_func_uint16_t_u_s((p_52 , (safe_sub_func_int32_t_s_s(l_571, (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(g_124.f2, (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint16_t_u(0x532EL)), (g_113 != l_576))))), (g_256 , 1UL)))))), (safe_mul_func_int8_t_s_s((+0xEAL), p_53))))) >= g_124.f1));
            }
            else
            {
                return g_256;
            }
            l_556 = (g_242.f2 = p_54);
            g_116.f1.f6 = p_52;
        }
        else
        {
            unsigned l_614 = 0x63171A03L;
            g_242.f6 = (safe_mod_func_uint8_t_u_u(g_242.f6, l_594));
            for (g_283 = 0; (g_283 >= 28); g_283 = safe_add_func_uint16_t_u_u(g_283, 4))
            {
                char l_597 = 0x11L;
                int l_601[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_601[i] = 0xA6328E51L;
                l_601[0] = (l_597 || (p_52 == (~(((g_124.f4 && (l_555[5][2][0] < (p_53 || g_242.f5))) == ((~(0x8229L ^ (((l_598 > (safe_add_func_int8_t_s_s((l_556 = (l_594 , 0L)), l_597))) ^ (-1L)) && p_54))) < g_344[1][1][4])) , 1UL))));
                l_613[6][1][1] = ((g_242.f4 ^ (g_111.f6 >= ((p_54 != l_594) >= (g_124 , p_52)))) >= (safe_mod_func_uint8_t_u_u((((g_111.f3 ^ (safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(p_53, (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((l_612 = g_111.f2), 12)), p_54)))) <= p_54), 0x0D2BL))) <= l_597) & l_555[0][0][3]), p_54)));
                for (g_242.f0 = 0; (g_242.f0 <= 0); g_242.f0 += 1)
                {
                    for (g_19 = 0; (g_19 <= 0); g_19 += 1)
                    {
                        int i;
                        if (l_601[g_242.f0])
                            break;
                    }
                    for (g_256.f0 = 0; (g_256.f0 <= 0); g_256.f0 += 1)
                    {
                        return g_256;
                    }
                }
            }
            l_614 = l_555[1][3][1];
        }
    }
    for (g_111.f2 = 3; (g_111.f2 >= 0); g_111.f2 -= 1)
    {
        unsigned char l_615 = 0x3CL;
        union U3 l_634[2] = {{4UL},{4UL}};
        const union U2 l_636[5][1] = {{{-2L}},{{1L}},{{-2L}},{{1L}},{{-2L}}};
        struct S0 l_709[9][5] = {{{4294967295UL,0x6344FBE7L,-10L,0xD1L,0x2298L,0xAA1FCB58L,1L},{0xE1816B22L,0x7B98FD63L,-4L,0x9EL,65535UL,0xA6A21EB9L,0x8F58A010L},{4294967288UL,1L,0x9AA17109L,247UL,0UL,0xC74C9441L,-4L},{0x18B53827L,1L,0x627CDDEEL,0UL,0x1F75L,-1L,0x1B845DCDL},{0UL,0x0482E065L,1L,1UL,0x1DE7L,0L,0L}},{{0xEB74FCFEL,0xE45A50A5L,0xEF1B67D0L,255UL,0x3FF4L,1L,0x307956ECL},{0xE91AD854L,-1L,0x513F7B34L,1UL,65535UL,1L,0L},{0x4B6EFA7DL,1L,0x501458D5L,0x35L,65531UL,0xBBB95E08L,0x6912B13BL},{0UL,0x0482E065L,1L,1UL,0x1DE7L,0L,0L},{0UL,-1L,0x402CE3E9L,0x0DL,0x74F5L,0x2F404C37L,0x86B6CDD6L}},{{4294967295UL,0x6344FBE7L,-10L,0xD1L,0x2298L,0xAA1FCB58L,1L},{0xEB74FCFEL,0xE45A50A5L,0xEF1B67D0L,255UL,0x3FF4L,1L,0x307956ECL},{0UL,-1L,0x402CE3E9L,0x0DL,0x74F5L,0x2F404C37L,0x86B6CDD6L},{0xEB74FCFEL,0xE45A50A5L,0xEF1B67D0L,255UL,0x3FF4L,1L,0x307956ECL},{4294967295UL,0x6344FBE7L,-10L,0xD1L,0x2298L,0xAA1FCB58L,1L}},{{4294967295UL,0xCC19B377L,0x3FD463E0L,0xCCL,0x56A4L,-1L,0x1FE16A4AL},{0UL,-1L,2L,253UL,0x0105L,0xB25B1C41L,0x7BF2CCBAL},{0UL,-1L,0x402CE3E9L,0x0DL,0x74F5L,0x2F404C37L,0x86B6CDD6L},{0x4B6EFA7DL,1L,0x501458D5L,0x35L,65531UL,0xBBB95E08L,0x6912B13BL},{4294967292UL,0L,-5L,0x9EL,65529UL,1L,0x72369E11L}},{{0x18B53827L,1L,0x627CDDEEL,0UL,0x1F75L,-1L,0x1B845DCDL},{0x594E28A8L,0xE6ABB3FDL,0x8E4C7975L,1UL,0xC183L,0x2E507484L,0x7FCA81CCL},{0x4B6EFA7DL,1L,0x501458D5L,0x35L,65531UL,0xBBB95E08L,0x6912B13BL},{2UL,0x26E87AA9L,3L,0x70L,0xFDE5L,4L,3L},{4294967286UL,-5L,0x43F3A408L,0x06L,0x983FL,0L,-5L}},{{4294967286UL,-5L,0x43F3A408L,0x06L,0x983FL,0L,-5L},{4294967295UL,0x6344FBE7L,-10L,0xD1L,0x2298L,0xAA1FCB58L,1L},{4294967288UL,1L,0x9AA17109L,247UL,0UL,0xC74C9441L,-4L},{0UL,-1L,2L,253UL,0x0105L,0xB25B1C41L,0x7BF2CCBAL},{4294967292UL,0L,-5L,0x9EL,65529UL,1L,0x72369E11L}},{{0UL,-1L,0x402CE3E9L,0x0DL,0x74F5L,0x2F404C37L,0x86B6CDD6L},{2UL,0x26E87AA9L,3L,0x70L,0xFDE5L,4L,3L},{2UL,0x26E87AA9L,3L,0x70L,0xFDE5L,4L,3L},{0UL,-1L,0x402CE3E9L,0x0DL,0x74F5L,0x2F404C37L,0x86B6CDD6L},{4294967295UL,0x6344FBE7L,-10L,0xD1L,0x2298L,0xAA1FCB58L,1L}},{{4294967292UL,0L,-5L,0x9EL,65529UL,1L,0x72369E11L},{2UL,0x26E87AA9L,3L,0x70L,0xFDE5L,4L,3L},{0xEC7AA178L,0x5B09B305L,0xF5939155L,0x8AL,0UL,-9L,0xB7793556L},{0xE1816B22L,0x7B98FD63L,-4L,0x9EL,65535UL,0xA6A21EB9L,0x8F58A010L},{0UL,-1L,0x402CE3E9L,0x0DL,0x74F5L,0x2F404C37L,0x86B6CDD6L}},{{0UL,-1L,2L,253UL,0x0105L,0xB25B1C41L,0x7BF2CCBAL},{4294967295UL,0x6344FBE7L,-10L,0xD1L,0x2298L,0xAA1FCB58L,1L},{4294967292UL,0L,-5L,0x9EL,65529UL,1L,0x72369E11L},{0x09E68049L,0x16949C50L,-7L,0x81L,65526UL,0x9B2C27E9L,0x4D5AAE7DL},{0UL,0x0482E065L,1L,1UL,0x1DE7L,0L,0L}}};
        int i, j;
        g_111.f6 = (g_417 || l_615);
        l_556 = (-1L);
        if ((l_627 = (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(0xC611L, ((l_556 = (safe_add_func_int8_t_s_s(g_301[5], (0xCB67A6AEL == l_624)))) && ((l_556 = (~((g_111.f6 = g_111.f5) > p_54))) < ((7UL && 0L) || (((safe_mul_func_int16_t_s_s(g_242.f2, 0x74DCL)) , l_615) && 65535UL)))))) >= p_54), g_111.f1)), p_54))))
        {
            union U1 l_635[3] = {{1L},{1L},{1L}};
            int i;
            g_116.f1.f1 = (0x47L ^ (safe_sub_func_uint32_t_u_u(g_301[4], ((((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(l_615, l_635[0].f1)), (safe_rshift_func_int16_t_s_u(((((p_53 == l_615) | l_636[4][0].f0) && p_53) | g_124.f4), p_54)))) != 0xC924L) >= p_53) >= l_636[4][0].f0))));
        }
        else
        {
            unsigned l_641 = 0x466B94D7L;
            int l_651 = 0xB61D14BBL;
            struct S0 l_652 = {0UL,1L,0x2913F155L,0x0BL,65535UL,3L,-1L};
            l_641 = (safe_rshift_func_uint8_t_u_s((l_634[1].f0 < l_556), 2));
            g_111.f6 = (((l_652.f3 < 0xE29AL) , p_54) | g_231);
        }
        for (g_116.f1.f2 = 3; (g_116.f1.f2 >= 0); g_116.f1.f2 -= 1)
        {
            unsigned char l_663 = 0xBAL;
            int l_664[3];
            int l_674 = 1L;
            struct S0 l_703 = {0x8C31D12DL,0xBDA71F47L,0x705103D6L,0xD8L,0xA2EFL,0x98D8E0C9L,-2L};
            struct S0 l_711 = {0x598B20E5L,0xDD84F4B5L,0xCFE13005L,2UL,0x7C23L,-2L,0xBA5EB198L};
            int l_716 = 0x4FC1EF2FL;
            union U3 l_763 = {0x1FL};
            int i;
            for (i = 0; i < 3; i++)
                l_664[i] = 0x36D08109L;
            l_634[1].f1.f2 = (safe_sub_func_uint16_t_u_u(p_54, ((safe_add_func_int16_t_s_s(0x18CFL, (l_657 , (l_664[0] = (p_54 , (((safe_sub_func_uint8_t_u_u(((l_642.f3 && (((safe_unary_minus_func_uint8_t_u(p_54)) != p_52) && (safe_rshift_func_uint16_t_u_s((g_422 = g_124.f2), 12)))) ^ l_663), 251UL)) || g_231) , 6UL)))))) ^ p_54)));
            if (g_111.f3)
                break;
            l_674 = (l_664[1] = (l_667[0][0].f4 = (safe_lshift_func_int16_t_s_u(((p_54 , (g_422 != (((g_256 , 0x3825L) , (l_667[0][0] , g_417)) && (safe_sub_func_uint16_t_u_u(p_54, (safe_rshift_func_int8_t_s_s(((~g_242.f5) < (safe_mul_func_uint16_t_u_u(l_663, g_111.f5))), p_52))))))) & 0UL), 2))));
            for (g_113 = 0; (g_113 <= 3); g_113 += 1)
            {
                int l_675 = 9L;
                int i, j, k;
                if (p_53)
                {
                    unsigned char l_693[3][6][10] = {{{0x4AL,0UL,0UL,0xF5L,0UL,0x2AL,255UL,1UL,0x40L,4UL},{4UL,0x28L,255UL,253UL,0xC6L,1UL,1UL,255UL,255UL,5UL},{0xE7L,0x40L,0x1BL,0x0BL,1UL,252UL,0x6CL,0x28L,0x28L,0x6CL},{0UL,0UL,0x27L,0x27L,0UL,0UL,251UL,255UL,5UL,1UL},{0xE9L,0xF5L,6UL,251UL,253UL,0xD9L,6UL,252UL,249UL,0x83L},{0xE9L,0x1DL,0xF5L,1UL,0x6CL,0UL,0x83L,1UL,0xC6L,0xD9L}},{{0UL,0x83L,1UL,0xC6L,0xD9L,252UL,0x40L,0x96L,251UL,0xB9L},{0xE7L,8UL,1UL,249UL,5UL,1UL,255UL,0UL,253UL,251UL},{4UL,0xFFL,250UL,0x6CL,255UL,0x2AL,0x6CL,0xE7L,8UL,1UL},{8UL,252UL,0xC4L,250UL,0xB9L,0xDDL,255UL,251UL,1UL,0xB0L},{0x9AL,0xC4L,0x2AL,1UL,255UL,1UL,253UL,255UL,0xDDL,1UL},{1UL,0UL,255UL,255UL,0xDDL,255UL,255UL,0UL,1UL,0x6CL}},{{251UL,0x1CL,251UL,2UL,255UL,255UL,255UL,8UL,249UL,0x6AL},{6UL,1UL,1UL,2UL,255UL,255UL,4UL,255UL,1UL,0UL},{0UL,8UL,0x57L,255UL,1UL,0xEDL,6UL,0xC6L,0xDDL,0x27L},{247UL,0xC6L,1UL,1UL,0UL,8UL,0x4AL,250UL,255UL,1UL},{0xF5L,255UL,0x27L,255UL,251UL,0x96L,0xB0L,0UL,0xB9L,0xD9L},{255UL,6UL,0x18L,0x83L,4UL,0x6CL,252UL,1UL,0UL,250UL}}};
                    int l_698 = (-1L);
                    union U2 l_705 = {1L};
                    struct S0 l_710 = {4294967295UL,-2L,0x92C9D047L,1UL,1UL,0x7C95A2FFL,0x07F347C4L};
                    int i, j, k;
                    l_675 = p_53;
                    if ((g_23 & (l_636[4][0].f0 < g_422)))
                    {
                        short l_676 = 0x980EL;
                        struct S0 l_677 = {1UL,0xBFA341D9L,-1L,255UL,1UL,-9L,0xDB367ECFL};
                        int i, j, k;
                        if (l_676)
                            break;
                        l_634[1].f1 = l_677;
                        if (g_111.f6)
                            goto lbl_678;
                        g_242.f6 = (((0x64L > (((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((g_301[1] = g_301[3]), 0)), (p_52 || ((1L && ((safe_add_func_int16_t_s_s((g_111.f3 || (l_675 && (g_111.f3 = (((safe_add_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u(((l_555[(g_111.f2 + 3)][g_113][g_113] = p_54) <= ((safe_add_func_int32_t_s_s((~0x1264DB79L), (safe_mod_func_int8_t_s_s(((l_675 = l_675) <= g_113), 246UL)))) != p_52)), l_677.f1)) > g_283) | g_124.f0), 0xD0E7FA02L)) >= 0x723FA081L) ^ 0x7C228A46L)))), p_54)) & 0xBE37L)) == l_693[1][5][8])))) && g_6) , l_675)) ^ 0L) >= p_52);
                    }
                    else
                    {
                        unsigned short l_704 = 0x43F4L;
                        l_667[0][0].f4 = ((g_301[6] = ((l_642 = g_111) , (l_556 = (safe_lshift_func_int16_t_s_u((g_242.f2 == p_53), ((!g_301[5]) && (((safe_mod_func_int8_t_s_s((l_627 = ((((l_698 = 0xC5E5L) , l_674) , 1L) < 0xCD0783F2L)), (g_124.f1 , p_52))) < g_111.f1) & g_242.f3))))))) & l_615);
                        l_698 = (l_615 != (safe_add_func_uint32_t_u_u(p_53, (l_675 == (((l_664[0] = l_675) >= (~(((safe_mod_func_int8_t_s_s((((g_23 ^ ((l_703 , g_6) & l_615)) <= (-1L)) , (-7L)), p_54)) , p_52) != l_693[1][5][8]))) , 252UL)))));
                        l_704 = ((g_242 , (p_54 | g_111.f0)) & l_636[4][0].f0);
                        return l_705;
                    }
                    if (g_124.f0)
                    {
                        unsigned short l_708 = 0x2924L;
                        l_708 = ((g_124.f0 = p_52) == (safe_lshift_func_int8_t_s_s(g_422, 5)));
                        g_242 = g_111;
                        return g_256;
                    }
                    else
                    {
                        l_703 = l_709[6][3];
                    }
                    if ((l_698 = (g_111 , 2L)))
                    {
                        l_703 = g_242;
                        g_242.f2 = p_54;
                    }
                    else
                    {
                        l_711 = (l_710 = l_703);
                    }
                }
                else
                {
                    int l_726 = 0L;
                    g_111.f1 = (g_242.f6 = (safe_mul_func_int8_t_s_s((l_709[6][3].f4 | (((safe_rshift_func_uint8_t_u_s(((g_23 & (0x765CL > (g_111.f0 <= (l_711.f1 ^ 255UL)))) < (l_716 = ((l_627 , g_417) <= l_675))), p_52)) <= g_717) , 3UL)), p_52)));
                    l_642.f1 = ((safe_lshift_func_uint16_t_u_s(g_124.f3, (safe_add_func_int32_t_s_s((6L | (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_726 > (l_726 && (((g_242.f1 = (((+(g_301[5] = (0x52L || (safe_mul_func_uint16_t_u_u(65534UL, p_53))))) & 0xAFL) | (safe_mod_func_int8_t_s_s(l_709[6][3].f3, g_6)))) | g_111.f2) == 3UL))), l_709[6][3].f0)), 0UL))), g_111.f2)))) && 0L);
                    if (l_642.f3)
                        continue;
                    l_642 = l_709[6][3];
                }
                g_242 = ((safe_sub_func_uint8_t_u_u((l_598 <= l_667[0][0].f3), g_111.f6)) , l_709[7][1]);
                for (l_556 = 0; (l_556 == (-2)); --l_556)
                {
                    unsigned l_743[9] = {0xCE5DAAD9L,0xCE5DAAD9L,0xCE5DAAD9L,0xCE5DAAD9L,0xCE5DAAD9L,0xCE5DAAD9L,0xCE5DAAD9L,0xCE5DAAD9L,0xCE5DAAD9L};
                    int l_754[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_754[i] = 0xF37040A3L;
                    l_667[0][0].f4 = ((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((+(l_711.f1 = (g_242.f3 >= p_54))), (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((l_743[0] , l_711.f5) & (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((p_52 && ((p_53 & (g_422 = ((l_709[6][3].f1 = (safe_lshift_func_int8_t_s_s(g_6, (safe_mod_func_uint16_t_u_u(g_242.f3, l_675))))) == p_53))) ^ l_743[0])), 0xE35358FEL)), l_615))), 0x5AL)), 2)))), p_53)) | 0xF9A449A4L);
                    l_754[1] = ((((l_709[1][4] , g_124.f4) == (~(g_23 = l_709[6][3].f1))) >= p_54) >= (!(g_242.f2 > (4294967295UL == (g_113 & (safe_rshift_func_uint8_t_u_s((5L != l_743[0]), 1)))))));
                }
                for (g_256.f1 = 25; (g_256.f1 == 60); ++g_256.f1)
                {
                    short l_764 = 8L;
                    int l_771 = 0x9E0238F0L;
                    g_242.f2 = ((l_634[1].f1.f1 = ((l_709[6][3].f6 , (l_764 = (g_459 = (l_642.f6 = ((p_53 | (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_54, ((p_54 | (safe_sub_func_uint8_t_u_u(0xA8L, (l_763 , g_111.f3)))) & (g_124.f3 >= (l_711.f6 = p_53))))), g_124.f2))) >= g_231))))) & 0x8874CC73L)) | p_54);
                    if ((safe_add_func_int32_t_s_s(g_242.f5, (g_124.f1 = 4294967295UL))))
                    {
                        g_242 = l_642;
                    }
                    else
                    {
                        if (l_703.f2)
                            goto lbl_678;
                        l_709[6][3].f1 = ((0L | p_53) >= ((l_634[1] , (g_113 != (g_124.f3 , (safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((5UL || l_764), 0)) ^ (((g_111.f3 & g_242.f4) && l_556) ^ l_709[6][3].f3)), 0x1F17L))))) > l_675));
                        l_771 = (~l_764);
                    }
                    l_642 = g_242;
                    l_709[6][3].f2 = p_54;
                }
            }
        }
    }
    return l_657;
}







static unsigned func_55(const char p_56, unsigned p_57, unsigned short p_58, union U3 p_59)
{
    unsigned char l_62[10][5] = {{249UL,0x77L,249UL,0x77L,249UL},{0UL,9UL,9UL,0UL,0UL},{0xCFL,0x77L,0xCFL,0x77L,0xCFL},{0UL,0UL,9UL,9UL,0UL},{249UL,0x77L,249UL,0x77L,249UL},{0UL,9UL,9UL,0UL,0UL},{0xCFL,0x77L,0xCFL,0x77L,0xCFL},{0UL,0UL,9UL,9UL,0UL},{249UL,0x77L,249UL,0x77L,249UL},{0UL,9UL,9UL,0UL,0UL}};
    int l_76 = 0L;
    const union U1 l_86 = {-7L};
    unsigned l_87 = 4294967290UL;
    int l_423 = 1L;
    struct S0 l_461 = {4294967286UL,-8L,0x1754A097L,0x52L,0x8BA5L,0xFB5BD1C8L,1L};
    unsigned l_469 = 0x46EE8276L;
    const union U2 l_531[7] = {{9L},{3L},{3L},{9L},{3L},{3L},{9L}};
    const int l_532 = 1L;
    int i, j;
    for (p_58 = 1; (p_58 <= 4); p_58 += 1)
    {
        int l_67 = (-1L);
        int l_365 = (-8L);
        union U1 l_377 = {0xD20B801BL};
        struct S0 l_507 = {0x09D04F41L,0xF4F56EBEL,0x513A6947L,246UL,0x3252L,0x534D3ED2L,0x20C61622L};
        for (p_59.f1.f1 = 0; (p_59.f1.f1 <= 4); p_59.f1.f1 += 1)
        {
            int l_68 = 0xE30E5DEFL;
            int l_71 = (-1L);
            short l_374[5] = {0x409DL,0x409DL,0x409DL,0x409DL,0x409DL};
            union U2 l_380 = {-3L};
            int i, j;
            l_71 = ((((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0xF4A3CA5AL, (-10L))), (+((((-1L) || (l_68 = l_67)) == (1UL || (safe_add_func_int32_t_s_s(l_71, (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((l_76 = (g_6 > l_62[6][4])), ((l_365 = (safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((func_81(l_86, p_59, l_87, l_86) , 1L), p_58)), l_71))) & g_301[0]))), 0L)))))) != 0xEDL)))) && 0xB2L) > g_111.f1) | p_57);
            for (g_283 = 1; (g_283 <= 4); g_283 += 1)
            {
                struct S0 l_373[7][7] = {{{0x5590639CL,0xC8C4852DL,9L,0xB1L,1UL,1L,0L},{0x2A14C2DEL,0L,0x27220EA2L,248UL,0x6C27L,0x84BD0766L,0x62521261L},{0x5590639CL,0xC8C4852DL,9L,0xB1L,1UL,1L,0L},{0x2A14C2DEL,0L,0x27220EA2L,248UL,0x6C27L,0x84BD0766L,0x62521261L},{0x5590639CL,0xC8C4852DL,9L,0xB1L,1UL,1L,0L},{0x2A14C2DEL,0L,0x27220EA2L,248UL,0x6C27L,0x84BD0766L,0x62521261L},{0x5590639CL,0xC8C4852DL,9L,0xB1L,1UL,1L,0L}},{{0x39D9F19DL,-1L,0x12B20DABL,0xF3L,65535UL,0xBB7C4726L,1L},{0x68A8FD14L,0x21350F02L,0x34F03400L,0x4BL,0x2902L,0xD309B8BCL,2L},{0x68A8FD14L,0x21350F02L,0x34F03400L,0x4BL,0x2902L,0xD309B8BCL,2L},{0x39D9F19DL,-1L,0x12B20DABL,0xF3L,65535UL,0xBB7C4726L,1L},{0x39D9F19DL,-1L,0x12B20DABL,0xF3L,65535UL,0xBB7C4726L,1L},{0x68A8FD14L,0x21350F02L,0x34F03400L,0x4BL,0x2902L,0xD309B8BCL,2L},{0x68A8FD14L,0x21350F02L,0x34F03400L,0x4BL,0x2902L,0xD309B8BCL,2L}},{{0x43C9068DL,8L,-1L,0xBBL,0UL,-10L,5L},{0x2A14C2DEL,0L,0x27220EA2L,248UL,0x6C27L,0x84BD0766L,0x62521261L},{0x43C9068DL,8L,-1L,0xBBL,0UL,-10L,5L},{0x2A14C2DEL,0L,0x27220EA2L,248UL,0x6C27L,0x84BD0766L,0x62521261L},{0x43C9068DL,8L,-1L,0xBBL,0UL,-10L,5L},{0x2A14C2DEL,0L,0x27220EA2L,248UL,0x6C27L,0x84BD0766L,0x62521261L},{0x43C9068DL,8L,-1L,0xBBL,0UL,-10L,5L}},{{0x39D9F19DL,-1L,0x12B20DABL,0xF3L,65535UL,0xBB7C4726L,1L},{0x39D9F19DL,-1L,0x12B20DABL,0xF3L,65535UL,0xBB7C4726L,1L},{0x68A8FD14L,0x21350F02L,0x34F03400L,0x4BL,0x2902L,0xD309B8BCL,2L},{0x68A8FD14L,0x21350F02L,0x34F03400L,0x4BL,0x2902L,0xD309B8BCL,2L},{0x39D9F19DL,-1L,0x12B20DABL,0xF3L,65535UL,0xBB7C4726L,1L},{0x39D9F19DL,-1L,0x12B20DABL,0xF3L,65535UL,0xBB7C4726L,1L},{0x68A8FD14L,0x21350F02L,0x34F03400L,0x4BL,0x2902L,0xD309B8BCL,2L}},{{0x5590639CL,0xC8C4852DL,9L,0xB1L,1UL,1L,0L},{0x2A14C2DEL,0L,0x27220EA2L,248UL,0x6C27L,0x84BD0766L,0x62521261L},{0x5590639CL,0xC8C4852DL,9L,0xB1L,1UL,1L,0L},{0x2A14C2DEL,0L,0x27220EA2L,248UL,0x6C27L,0x84BD0766L,0x62521261L},{0x5590639CL,0xC8C4852DL,9L,0xB1L,1UL,1L,0L},{0x2A14C2DEL,0L,0x27220EA2L,248UL,0x6C27L,0x84BD0766L,0x62521261L},{0x5590639CL,0xC8C4852DL,9L,0xB1L,1UL,1L,0L}},{{0x39D9F19DL,-1L,0x12B20DABL,0xF3L,65535UL,0xBB7C4726L,1L},{0x68A8FD14L,0x21350F02L,0x34F03400L,0x4BL,0x2902L,0xD309B8BCL,2L},{0x68A8FD14L,0x21350F02L,0x34F03400L,0x4BL,0x2902L,0xD309B8BCL,2L},{0x39D9F19DL,-1L,0x12B20DABL,0xF3L,65535UL,0xBB7C4726L,1L},{0x39D9F19DL,-1L,0x12B20DABL,0xF3L,65535UL,0xBB7C4726L,1L},{0x68A8FD14L,0x21350F02L,0x34F03400L,0x4BL,0x2902L,0xD309B8BCL,2L},{0x68A8FD14L,0x21350F02L,0x34F03400L,0x4BL,0x2902L,0xD309B8BCL,2L}},{{0x43C9068DL,8L,-1L,0xBBL,0UL,-10L,5L},{0x2A14C2DEL,0L,0x27220EA2L,248UL,0x6C27L,0x84BD0766L,0x62521261L},{0x43C9068DL,8L,-1L,0xBBL,0UL,-10L,5L},{0x2A14C2DEL,0L,0x27220EA2L,248UL,0x6C27L,0x84BD0766L,0x62521261L},{0x43C9068DL,8L,-1L,0xBBL,0UL,-10L,5L},{0x2A14C2DEL,0L,0x27220EA2L,248UL,0x6C27L,0x84BD0766L,0x62521261L},{0x43C9068DL,8L,-1L,0xBBL,0UL,-10L,5L}}};
                const union U2 l_428 = {0x5AEEL};
                int i, j;
                for (g_116.f1.f1 = 3; (g_116.f1.f1 >= 0); g_116.f1.f1 -= 1)
                {
                    unsigned l_368 = 1UL;
                    for (g_111.f6 = 3; (g_111.f6 >= 0); g_111.f6 -= 1)
                    {
                        short l_391[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_391[i] = 0x4485L;
                        g_242.f1 = ((((safe_mul_func_int16_t_s_s((l_76 = (l_68 = (p_59 , g_124.f1))), l_368)) != p_57) >= (l_67 = (safe_add_func_int16_t_s_s(0x9CB7L, (safe_mul_func_uint8_t_u_u((((l_373[3][3] , 1UL) > ((l_71 , (l_374[0] && 0x00L)) > 65535UL)) || l_365), 255UL)))))) | g_111.f6);
                        g_111.f2 = ((((safe_lshift_func_int16_t_s_u(((g_124 = l_377) , (l_391[9] = (safe_lshift_func_int8_t_s_u((l_380 , ((((safe_add_func_int8_t_s_s((l_377.f3 & p_56), (safe_mul_func_uint8_t_u_u(g_23, (safe_add_func_uint16_t_u_u((l_373[3][3].f1 = (safe_rshift_func_uint16_t_u_u(p_56, 12))), ((safe_mod_func_int8_t_s_s((g_242.f0 <= g_111.f6), p_57)) & g_111.f6))))))) ^ l_71) , l_373[3][3].f3) && g_344[1][1][6])), 0)))), 6)) >= g_111.f5) < p_57) <= 1UL);
                        return l_67;
                    }
                    return g_242.f3;
                }
                for (g_242.f2 = 3; (g_242.f2 >= 0); g_242.f2 -= 1)
                {
                    unsigned l_408[9] = {6UL,4294967295UL,6UL,6UL,4294967295UL,6UL,6UL,4294967295UL,6UL};
                    int i;
                    if ((p_59 , (l_408[3] = (safe_mul_func_uint8_t_u_u((p_59.f0 > l_374[2]), (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((((g_113 | g_242.f3) , p_57) ^ ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((0xB4L <= ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(g_111.f0, 0)) <= g_124.f1), p_56)) || l_62[5][0])), 0x9DL)) , p_56), p_56)) == g_242.f3)), 12)) != g_242.f6), p_58)), g_111.f6)))))))
                    {
                        return g_6;
                    }
                    else
                    {
                        if (l_86.f3)
                            break;
                    }
                }
                for (g_256.f1 = 0; (g_256.f1 <= 4); g_256.f1 += 1)
                {
                    int i, j;
                    l_373[3][3].f6 = (safe_rshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_u((l_423 = (safe_add_func_uint8_t_u_u((g_301[(g_256.f1 + 1)] | ((safe_sub_func_int32_t_s_s((g_417 = p_59.f0), p_57)) ^ (safe_rshift_func_int16_t_s_s((l_76 = g_242.f1), 6)))), ((safe_mod_func_int32_t_s_s(((g_124.f2 = (((g_242.f6 ^ (l_62[(g_256.f1 + 5)][g_256.f1] = p_58)) == (p_58 <= g_422)) < g_23)) >= 0xD9BAEF49L), g_301[5])) < p_57)))), p_57)) | p_59.f0) , g_111.f6), l_86.f2));
                }
                l_373[3][3].f6 = (safe_mul_func_uint16_t_u_u(l_380.f0, p_56));
            }
            if (p_57)
                continue;
        }
        for (g_124.f0 = 1; (g_124.f0 <= 4); g_124.f0 += 1)
        {
            int l_437 = 0x419A5377L;
            int l_439 = 0xAAAE3DEFL;
            char l_464 = (-3L);
            struct S0 l_516 = {0UL,-3L,0x8298CE9CL,255UL,0UL,-8L,0x9DFF110DL};
            int i, j;
            if (l_62[(p_58 + 2)][g_124.f0])
                break;
            for (g_116.f1.f4 = 0; (g_116.f1.f4 <= 4); g_116.f1.f4 += 1)
            {
                union U1 l_431 = {0x5347A290L};
                struct S0 l_460 = {4294967295UL,0L,4L,247UL,0xAE03L,0xE652AC1BL,3L};
                for (g_23 = 1; (g_23 <= 4); g_23 += 1)
                {
                    unsigned l_447 = 0x6281ACA3L;
                    struct S0 l_449 = {0UL,0L,0xD3494672L,0xE3L,65535UL,0L,-2L};
                }
                if (l_461.f2)
                    break;
            }
            if (g_124.f0)
            {
                const unsigned short l_497 = 0UL;
                int l_501 = (-1L);
                union U1 l_504 = {0x35339CCFL};
                struct S0 l_513[1][2] = {{{0x370FCE42L,-1L,0x06D4F5B7L,0x0FL,7UL,0x3DE5CAB9L,-9L},{0x370FCE42L,-1L,0x06D4F5B7L,0x0FL,7UL,0x3DE5CAB9L,-9L}}};
                int i, j;
                for (g_116.f1.f5 = 0; (g_116.f1.f5 <= 6); g_116.f1.f5 += 1)
                {
                    int l_498 = (-1L);
                    int i, j;
                }
                g_242 = g_111;
                if (p_56)
                    continue;
                for (p_59.f1.f6 = 1; (p_59.f1.f6 <= 4); p_59.f1.f6 += 1)
                {
                    struct S0 l_514 = {0xF4BFC2FAL,-7L,-1L,0xF2L,0UL,-10L,-10L};
                    g_116.f1.f1 = g_344[1][1][6];
                    l_514 = l_513[0][1];
                    for (g_111.f4 = 0; (g_111.f4 <= 4); g_111.f4 += 1)
                    {
                        struct S0 l_515 = {0x30E17634L,3L,0x6BF41C57L,0xCCL,65528UL,1L,0x532D907DL};
                        l_515 = (l_514 , l_513[0][0]);
                        l_516 = l_514;
                        l_461 = g_111;
                    }
                    l_461.f6 = (safe_add_func_uint16_t_u_u(l_514.f4, ((safe_add_func_uint16_t_u_u(l_507.f4, 0x5B67L)) <= p_58)));
                }
            }
            else
            {
                g_116.f1.f1 = (l_516.f4 != g_301[3]);
            }
            l_507 = l_461;
        }
    }
    if ((safe_add_func_uint8_t_u_u(255UL, l_532)))
    {
        struct S0 l_545 = {4294967287UL,0xBB25CC48L,1L,1UL,65529UL,0x17827654L,0xDB368BF8L};
        for (g_116.f1.f2 = (-27); (g_116.f1.f2 < (-2)); ++g_116.f1.f2)
        {
            unsigned short l_535 = 0xB638L;
            int l_541 = 0xE938FD4DL;
            int l_542[10][1][3] = {{{1L,1L,0x4D6524E6L}},{{0L,0x456DF00FL,0x5E3819C3L}},{{0xD7618493L,1L,0xD7618493L}},{{0xB556509BL,0L,8L}},{{0xC221FF2FL,0xD7618493L,0xD7618493L}},{{8L,0xB556509BL,0x5E3819C3L}},{{1L,0xC221FF2FL,0x4D6524E6L}},{{8L,8L,0x75DDABBCL}},{{0xC221FF2FL,1L,0x662544B0L}},{{0xB556509BL,8L,0xB556509BL}}};
            int i, j, k;
            if (g_231)
                break;
            for (g_111.f3 = 0; (g_111.f3 <= 4); g_111.f3 += 1)
            {
                int l_543[9] = {0xB0B98E63L,0L,0xB0B98E63L,0L,0xB0B98E63L,0L,0xB0B98E63L,0L,0xB0B98E63L};
                int l_544 = 3L;
                int i;
                for (g_111.f1 = 3; (g_111.f1 >= 1); g_111.f1 -= 1)
                {
                    short l_536 = 0xFCCAL;
                    if (g_19)
                        break;
                    l_536 = (p_58 ^ ((p_59.f1.f0 = p_57) != (l_535 = g_283)));
                }
                l_544 = (l_543[7] = (safe_mul_func_int16_t_s_s((l_542[4][0][2] = (l_541 = (safe_add_func_uint8_t_u_u(g_124.f3, (p_57 > 1L))))), g_6)));
                g_242.f2 = ((0UL > ((l_461.f6 = (g_124 , (l_545 , 65535UL))) == (p_58 = (safe_sub_func_int8_t_s_s(l_86.f2, (l_542[4][0][2] = (((l_545.f5 != (g_242.f1 , l_86.f1)) || l_545.f6) > g_283))))))) == g_242.f6);
            }
        }
    }
    else
    {
        union U2 l_548 = {0xEA45L};
        const union U1 l_549[9] = {{0L},{0x289E33AFL},{0x289E33AFL},{0L},{0x289E33AFL},{0x289E33AFL},{0L},{0x289E33AFL},{0x289E33AFL}};
        struct S0 l_552 = {0xC356F8D4L,0x633873DDL,6L,251UL,0UL,0xF69B760AL,0xEFF4FBE4L};
        int i;
        l_461 = ((p_57 < p_57) , (l_548 , (l_552 = func_81(l_549[5], func_101(p_56, l_549[5].f2, l_86.f0, (~(safe_add_func_uint8_t_u_u(0UL, ((g_242.f1 = g_124.f2) & g_256.f0)))), l_549[5]), p_58, g_124))));
        p_59.f1.f6 = (l_461 , l_549[5].f4);
    }
    return l_461.f3;
}







static struct S0 func_81(const union U1 p_82, union U3 p_83, unsigned short p_84, union U1 p_85)
{
    unsigned short l_96 = 0x3608L;
    short l_107 = 0x4FABL;
    const union U2 l_117[7][10] = {{{0x6CDBL},{0x6CDBL},{0xE596L},{-2L},{0xEB65L},{0x4226L},{5L},{0xEF4CL},{1L},{0x921EL}},{{0xEF4CL},{8L},{5L},{0x7E36L},{0x1FA0L},{0x7E36L},{5L},{8L},{0xEF4CL},{0x6CDBL}},{{0x67FDL},{0x6CDBL},{1L},{0xEB65L},{0x921EL},{1L},{0x4226L},{8L},{8L},{0x4226L}},{{0x7E36L},{-2L},{0x921EL},{0x921EL},{-2L},{0x7E36L},{0L},{0x0B68L},{0x6CDBL},{0xEB65L}},{{0xEB65L},{8L},{0x1FA0L},{0xE596L},{0x67FDL},{0x28A7L},{0x7E36L},{0x28A7L},{0x67FDL},{0xE596L}},{{0xEB65L},{0x28A7L},{0xEB65L},{1L},{0x4226L},{0x7E36L},{0xE596L},{5L},{0x1FA0L},{0x0B68L}},{{0x7E36L},{0xE596L},{5L},{0x1FA0L},{0x0B68L},{0x0B68L},{0x1FA0L},{5L},{0xE596L},{0x7E36L}}};
    int l_249 = (-1L);
    union U3 l_277 = {255UL};
    struct S0 l_308 = {0xF1E06772L,0x4FD6F100L,1L,0UL,0xFF40L,0x7BFC1412L,9L};
    union U2 l_310 = {-6L};
    union U1 l_343 = {0x0E55E12DL};
    int i, j;
    for (p_84 = 0; (p_84 == 50); p_84 = safe_add_func_uint8_t_u_u(p_84, 5))
    {
        char l_250 = 0xEAL;
        int l_255 = 0x16D84DE3L;
        int l_262 = 0xB8728311L;
        unsigned l_263[8][1] = {{0x0C761E94L},{0xD2A354E8L},{0xD2A354E8L},{0x0C761E94L},{0xD2A354E8L},{0xD2A354E8L},{0x0C761E94L},{0xD2A354E8L}};
        struct S0 l_284 = {0xF9344E71L,0x6FB48145L,-8L,0x8EL,0x102AL,0x8289FCA1L,1L};
        struct S0 l_285 = {0x082DB463L,0L,0x36C5F9EFL,0x66L,65531UL,0x414E5680L,0L};
        union U2 l_296[9] = {{0xEAA6L},{0xEAA6L},{0xEAA6L},{0xEAA6L},{0xEAA6L},{0xEAA6L},{0xEAA6L},{0xEAA6L},{0xEAA6L}};
        int i, j;
    }
    for (l_277.f1.f0 = 0; (l_277.f1.f0 < 1); l_277.f1.f0 = safe_add_func_uint16_t_u_u(l_277.f1.f0, 2))
    {
        unsigned short l_330 = 1UL;
        struct S0 l_333 = {0x7B16EFF2L,0x12A0DE9BL,1L,0xE3L,65526UL,3L,0xA8E9C823L};
        struct S0 l_334 = {4294967291UL,0xDE085E61L,3L,0x68L,0x14C9L,-1L,0xB28332D1L};
        union U1 l_342 = {-1L};
        p_85.f4 = ((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((((g_242.f0 = p_85.f3) > (p_83.f1.f2 = g_124.f0)) != ((safe_rshift_func_uint8_t_u_u(g_242.f4, 5)) | ((safe_add_func_int32_t_s_s((1UL ^ (0x7D17L != ((safe_mul_func_int16_t_s_s((l_249 = (g_256 , (safe_mul_func_int16_t_s_s((p_85.f4 ^ (0x912D41C4L ^ ((((((p_85.f2 , l_330) != 0x82283E13L) > p_82.f0) , p_85.f1) | g_124.f4) != p_85.f0))), g_124.f1)))), g_111.f4)) || p_85.f3))), p_82.f4)) <= l_308.f0))), p_85.f0)) == l_96), g_124.f4)) && l_249);
        for (l_308.f0 = (-18); (l_308.f0 != 10); l_308.f0 = safe_add_func_int16_t_s_s(l_308.f0, 1))
        {
            unsigned l_336 = 4294967295UL;
            struct S0 l_346 = {0xAC56A93AL,0x14B00371L,1L,0xD8L,0UL,0x59A091B0L,0x25A85B84L};
            l_334 = (l_333 = l_308);
            if ((p_85.f0 = l_277.f0))
            {
                int l_335 = 1L;
                l_336 = l_335;
                p_83.f1 = g_242;
            }
            else
            {
                const int l_347[4][2] = {{0xA2179DD7L,0xA2179DD7L},{0xA2179DD7L,0xA2179DD7L},{0xA2179DD7L,0xA2179DD7L},{0xA2179DD7L,0xA2179DD7L}};
                int i, j;
                if (l_308.f4)
                    break;
                p_83.f1 = (g_116.f1 = g_242);
                if (l_333.f6)
                {
                    for (l_333.f0 = 0; (l_333.f0 != 6); l_333.f0 = safe_add_func_uint16_t_u_u(l_333.f0, 8))
                    {
                        int l_341 = 0xD52459EBL;
                        int l_345 = 0x87EE97CDL;
                        g_242 = (((safe_lshift_func_int16_t_s_s((p_83.f1 , ((p_85.f0 | p_83.f1.f0) | (((l_341 = l_117[0][9].f0) <= ((l_343 = l_342) , (((g_111.f2 = (1L && p_82.f2)) == ((g_344[1][1][6] | (((l_343.f1 != 0xC207L) && 1L) | g_242.f3)) >= g_344[1][1][6])) > g_344[0][0][1]))) > l_334.f0))), 14)) | l_345) , l_346);
                    }
                    return g_111;
                }
                else
                {
                    unsigned short l_364 = 0x29EAL;
                    if (l_347[0][1])
                    {
                        l_333 = p_83.f1;
                        g_242.f6 = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((p_82.f2 || l_347[1][1]) >= l_346.f1), (safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(l_308.f2, ((g_116.f1.f0 | (((l_347[2][1] , ((safe_add_func_uint32_t_u_u(p_83.f1.f2, ((l_364 = ((g_124.f2 = 0UL) && (g_111.f6 = g_116.f1.f1))) > p_83.f1.f0))) | 0x957C8F7EL)) , p_85.f0) != p_82.f3)) | l_346.f2))), g_231)))) >= p_84), 8UL)), l_308.f5)), l_308.f3)), l_334.f6));
                        if (g_116.f1.f4)
                            break;
                    }
                    else
                    {
                        if (g_283)
                            break;
                        if (p_85.f0)
                            break;
                    }
                    g_111.f6 = g_111.f4;
                }
            }
            p_83.f1 = (g_116.f1 = p_83.f1);
        }
        if (g_242.f2)
            continue;
        g_111.f2 = (l_334.f2 >= ((g_242.f2 = p_82.f1) <= 0x08928BFDL));
    }
    return g_242;
}







static unsigned short func_97(union U3 p_98, int p_99, const union U2 p_100)
{
    const char l_120 = 0L;
    int l_138 = 0x49F6EF7EL;
    int l_143[2][10] = {{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L}};
    const struct S0 l_162 = {1UL,0x32144ED8L,-1L,0xA0L,65535UL,-3L,9L};
    const union U3 l_210 = {0xA9L};
    const unsigned l_216 = 0x653AFABAL;
    struct S0 l_233 = {0xDADD7E3CL,0x6B9BC0EEL,0x41AB9D19L,247UL,65535UL,0x30D8BC59L,0L};
    unsigned l_241 = 0x3CDA8923L;
    int i, j;
    if ((safe_add_func_int8_t_s_s(l_120, 248UL)))
    {
        unsigned l_123 = 0x756FC104L;
        char l_125[3][8] = {{0x35L,0x9BL,0x9BL,0x35L,0x35L,0x9BL,0x9BL,0x35L},{0x35L,0x9BL,0x9BL,0x35L,0x35L,0x9BL,0x9BL,0x35L},{0x35L,0x9BL,0x9BL,0x35L,0x35L,0x9BL,0x9BL,0x35L}};
        int l_126 = 8L;
        int l_127 = 1L;
        struct S0 l_132 = {4294967286UL,-5L,-1L,0x81L,0x2F04L,0x58BA9B0DL,0x559458B2L};
        int i, j;
        g_116.f1.f6 = ((l_120 , ((l_127 = (safe_sub_func_uint16_t_u_u((l_123 & p_98.f0), (g_111.f4 < (((g_124 , (((4294967295UL >= l_125[1][0]) & p_98.f0) < (l_126 = ((0L < 0xD206L) && 0xFDL)))) <= l_120) <= l_120))))) == p_98.f0)) ^ p_100.f0);
        if ((safe_mod_func_uint32_t_u_u(p_98.f0, (g_124.f1 = ((safe_rshift_func_uint16_t_u_s(g_124.f1, (p_98.f0 & p_98.f0))) ^ (p_99 & ((-8L) > g_124.f0)))))))
        {
            struct S0 l_133 = {0x51E2D6ACL,0xD7FBB02AL,-4L,0xF0L,5UL,0x20143C86L,1L};
            union U3 l_151 = {252UL};
            for (g_111.f5 = 2; (g_111.f5 >= 0); g_111.f5 -= 1)
            {
                int l_136 = 0x49DBEB4CL;
                union U2 l_137 = {1L};
                struct S0 l_161[1] = {{0xDE09C51CL,1L,0x2409C126L,255UL,1UL,-4L,-3L}};
                unsigned short l_176 = 0x7C3CL;
                int i;
                g_116.f1.f2 = 4L;
                l_132 = (l_133 = l_132);
                l_138 = (l_132.f2 >= ((safe_sub_func_int32_t_s_s(((p_100.f0 , (~(p_98.f1.f0 = l_136))) < g_124.f3), p_100.f0)) ^ (l_137 , l_137.f0)));
            }
            p_98.f1 = l_162;
            g_116.f1 = p_98.f1;
            return p_98.f1.f6;
        }
        else
        {
            p_98.f1 = l_162;
        }
        g_116.f1.f6 = ((safe_add_func_uint16_t_u_u(0xB97BL, g_111.f3)) && ((safe_rshift_func_uint16_t_u_s(((-1L) ^ g_111.f5), (safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((((g_19 = (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((g_116 , (safe_mul_func_uint8_t_u_u((l_162.f5 < g_111.f0), g_124.f1))), (l_132.f2 = p_98.f1.f2))), p_98.f1.f6))) , l_210) , 0xBDA8L), p_98.f1.f0)), 6)) , p_100.f0), g_124.f2)))) == 0x64L));
    }
    else
    {
        struct S0 l_213 = {0x8063154AL,7L,1L,0x08L,0x2362L,0xD71A1B54L,0xD56D9DE8L};
        unsigned l_240[9] = {3UL,5UL,3UL,5UL,3UL,5UL,3UL,5UL,3UL};
        int i;
        for (g_116.f1.f5 = 0; (g_116.f1.f5 != 14); g_116.f1.f5++)
        {
            char l_219[8] = {3L,3L,3L,3L,3L,3L,3L,3L};
            int l_224 = 0L;
            int l_232 = 0xC9CA45F4L;
            int i;
            p_98.f1.f1 = 0xB854CE0AL;
            l_213 = l_162;
            for (g_124.f1 = 0; (g_124.f1 > 46); g_124.f1 = safe_add_func_int32_t_s_s(g_124.f1, 1))
            {
                unsigned short l_220[8] = {65528UL,0x4003L,65528UL,65528UL,0x4003L,65528UL,65528UL,0x4003L};
                int l_222 = 0x37CAFADEL;
                int i;
                if (((g_113 = (~(!(g_6 , (l_216 & (safe_mul_func_uint8_t_u_u(g_116.f0, g_19))))))) != (l_219[6] , l_220[7])))
                {
                    short l_221 = (-1L);
                    const short l_223 = 0xFD21L;
                    p_98.f1.f1 = ((l_221 , (l_222 = (-1L))) < (((p_99 > (l_232 = ((((l_213.f6 | l_223) > (l_219[6] == (((l_224 = 0xB4A01BD5L) < (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((0x42A2D73BL & (safe_mul_func_int8_t_s_s(((g_231 = (p_99 , g_124.f0)) && p_100.f0), g_111.f0))), p_98.f0)), 0x5FL))) == g_111.f5))) == p_100.f0) > l_220[7]))) , 65529UL) | g_23));
                    l_233 = g_111;
                }
                else
                {
                    l_213.f6 = (g_111.f6 = g_113);
                    for (l_222 = 0; l_222 < 2; l_222 += 1)
                    {
                        for (l_233.f6 = 0; l_233.f6 < 10; l_233.f6 += 1)
                        {
                            l_143[l_222][l_233.f6] = 0x37CC3164L;
                        }
                    }
                }
            }
            for (g_111.f3 = 0; (g_111.f3 <= 1); g_111.f3 += 1)
            {
                int i, j;
                l_143[g_111.f3][(g_111.f3 + 1)] = (((l_224 = (safe_lshift_func_int16_t_s_s(l_143[g_111.f3][(g_111.f3 + 7)], (((((p_98.f1.f3 = ((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_143[g_111.f3][(g_111.f3 + 4)], l_240[1])), l_213.f1)) || ((l_233.f6 = l_143[g_111.f3][(g_111.f3 + 4)]) >= (g_111.f5 , p_98.f0)))) ^ (0xBACBL & ((l_241 , l_240[1]) , g_124.f2))) == 8UL) ^ g_111.f3) , p_98.f0)))) | l_162.f3) < (-9L));
                g_242 = g_111;
            }
        }
        for (g_111.f4 = 0; (g_111.f4 > 21); g_111.f4 = safe_add_func_int16_t_s_s(g_111.f4, 7))
        {
            g_242 = g_111;
            p_98.f1.f2 = (safe_rshift_func_int8_t_s_u((!g_231), 2));
            p_98.f1.f1 = (safe_sub_func_uint32_t_u_u(g_23, p_100.f0));
        }
    }
    return p_99;
}







static union U3 func_101(int p_102, unsigned p_103, unsigned p_104, unsigned char p_105, union U1 p_106)
{
    union U3 l_112[9] = {{0x2DL},{0x2DL},{0x2DL},{0x2DL},{0x2DL},{0x2DL},{0x2DL},{0x2DL},{0x2DL}};
    int i;
    for (p_102 = 27; (p_102 == 5); --p_102)
    {
        struct S0 l_110[4] = {{0xF78F0145L,-1L,0L,0x8CL,0x34FFL,0x31764C7FL,0x53ACC8D4L},{0xF78F0145L,-1L,0L,0x8CL,0x34FFL,0x31764C7FL,0x53ACC8D4L},{0xF78F0145L,-1L,0L,0x8CL,0x34FFL,0x31764C7FL,0x53ACC8D4L},{0xF78F0145L,-1L,0L,0x8CL,0x34FFL,0x31764C7FL,0x53ACC8D4L}};
        int i;
        g_111 = l_110[2];
        return l_112[0];
    }
    p_106.f0 = (l_112[0].f1.f1 = ((g_113 | ((0xF57B8DD8L ^ (g_111.f1 = (p_102 = l_112[0].f0))) & 65535UL)) ^ (safe_add_func_uint32_t_u_u(l_112[0].f0, l_112[0].f0))));
    return g_116;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    transparent_crc(g_111.f2, "g_111.f2", print_hash_value);
    transparent_crc(g_111.f3, "g_111.f3", print_hash_value);
    transparent_crc(g_111.f4, "g_111.f4", print_hash_value);
    transparent_crc(g_111.f5, "g_111.f5", print_hash_value);
    transparent_crc(g_111.f6, "g_111.f6", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_124.f3, "g_124.f3", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_242.f0, "g_242.f0", print_hash_value);
    transparent_crc(g_242.f1, "g_242.f1", print_hash_value);
    transparent_crc(g_242.f2, "g_242.f2", print_hash_value);
    transparent_crc(g_242.f3, "g_242.f3", print_hash_value);
    transparent_crc(g_242.f4, "g_242.f4", print_hash_value);
    transparent_crc(g_242.f5, "g_242.f5", print_hash_value);
    transparent_crc(g_242.f6, "g_242.f6", print_hash_value);
    transparent_crc(g_256.f0, "g_256.f0", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_301[i], "g_301[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_344[i][j][k], "g_344[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_717, "g_717", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_939[i][j], "g_939[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1134, "g_1134", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1135[i][j].f0, "g_1135[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1209, "g_1209", print_hash_value);
    transparent_crc(g_1216, "g_1216", print_hash_value);
    transparent_crc(g_1260, "g_1260", print_hash_value);
    transparent_crc(g_1393, "g_1393", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
