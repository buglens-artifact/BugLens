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
   volatile unsigned f0;
   const unsigned f1;
   int f2;
   int f3;
   char f4;
   unsigned f5;
   volatile unsigned f6;
   unsigned f7;
};

struct S1 {
   const volatile struct S0 f0;
   const volatile int f1;
   short f2;
};

struct S2 {
   const unsigned char f0;
   const unsigned char f1;
   int f2;
};

union U3 {
   const unsigned f0;
   const short f1;
};


static unsigned char g_56 = 250UL;
static int g_59 = 0xE89B93B3L;
static const struct S1 g_77 = {{1UL,4294967295UL,0xF1D91A4AL,0x155EA0D0L,0x06L,0x37BAD6E3L,4294967295UL,0xCE4CA00AL},0x4084F7CBL,0xC1D3L};
static volatile struct S0 g_78 = {0x253E45BDL,4294967290UL,0x0910B8B7L,-1L,8L,0x22819455L,4294967286UL,0xB022B26CL};
static int *g_81 = &g_59;
static int **g_80 = &g_81;
static struct S0 g_84 = {0UL,0x3DE179BCL,0x383A24CDL,-2L,0x20L,1UL,0x0E7A9F47L,0UL};
static struct S0 g_100 = {0x02B323ECL,0UL,0xFF2A7570L,1L,0x44L,1UL,0x7EE3387EL,1UL};
static const struct S0 *g_99 = &g_100;
static union U3 g_112 = {7UL};
static volatile struct S1 g_129 = {{0xD51DFD2EL,4294967287UL,0xB6490890L,0x13F68E75L,0x45L,6UL,2UL,4294967287UL},1L,0x2F55L};
static struct S2 g_149 = {0x82L,1UL,-2L};
static unsigned short g_171 = 0x7B70L;
static struct S1 g_187 = {{1UL,0UL,0L,0xFEA7228BL,0xA3L,0x9CDAB9F7L,4294967289UL,0x2EFA27BBL},5L,2L};
static volatile struct S0 g_206 = {1UL,0x1EE3AC00L,0xCCE6538CL,0x09A4D5CBL,0x6CL,0xB2D7C546L,4294967293UL,0UL};
static struct S0 g_210 = {0xC584D33CL,4294967289UL,-2L,7L,4L,4294967295UL,0xC93FC3FCL,0xF47AD6A6L};
static struct S1 g_252 = {{4294967287UL,0UL,1L,0x4A1050D8L,-6L,0x5A50C07DL,4294967294UL,0UL},0xB0C404CDL,0x1E72L};
static struct S1 * const g_251 = &g_252;
static struct S1 * const *g_250 = &g_251;
static struct S1 g_278 = {{0UL,0x9FC42630L,0x8740A228L,0x55FF8D06L,1L,0x2CB2800CL,4294967286UL,0x8462B848L},0xA243535FL,0L};
static struct S1 g_279 = {{0x895E1FFEL,0x74AE8C91L,9L,0x127F6004L,0x64L,0xC5116D43L,0x8F841643L,0x7F8B4A4EL},-6L,0xE708L};
static unsigned g_352 = 0x3CCA9ACFL;
static volatile struct S1 g_379 = {{4294967295UL,4UL,0xD25C51A1L,0x8A96B655L,8L,4294967291UL,4294967295UL,1UL},0xDA3BD2F8L,0L};
static union U3 *g_387 = (void*)0;
static union U3 * const *g_386 = &g_387;
static struct S1 g_425 = {{0x35BDAD22L,0xCE88BC9AL,0L,0x617CCD04L,0x9EL,0x16EEC3FBL,0UL,0x9AF5E4E2L},-7L,-9L};
static volatile unsigned g_441 = 4294967292UL;
static struct S1 g_444 = {{1UL,0UL,0L,0xD2FCDA56L,0x0EL,4294967291UL,0xCC7E63A4L,4294967286UL},0L,5L};
static struct S2 g_446 = {246UL,0x63L,0x2B6B0734L};
static struct S1 g_455 = {{7UL,7UL,-3L,0x9565110DL,1L,7UL,0UL,1UL},1L,0xCAC5L};
static union U3 g_504 = {1UL};
static struct S1 g_508 = {{0x5BB6677CL,0xDAA343B2L,0xD90E90DBL,0xB756D7C9L,0x47L,0xF680B5AEL,4294967291UL,0x89DB7D52L},0x1C398B60L,-10L};
static struct S1 g_553 = {{4294967295UL,0x0E2B3679L,0L,1L,1L,0x3CD0CEE6L,1UL,1UL},0xDCAC31AFL,-1L};
static union U3 g_572 = {0x29A57F10L};
static struct S0 g_648 = {0x357F9B73L,7UL,0L,0x6A9EB457L,0L,4294967294UL,0xE78E06A2L,0x57B5C834L};
static struct S1 g_658 = {{4294967295UL,4294967290UL,0xC0CB393EL,0L,0x4BL,6UL,4294967295UL,0x51390641L},0xF41C204FL,0xF802L};
static char g_667 = 0xDAL;
static struct S1 *g_751 = &g_425;
static struct S1 **g_750 = &g_751;
static unsigned char g_781 = 0x9EL;



static char func_1(void);
static char func_3(int p_4, short p_5, struct S2 p_6);
static unsigned func_12(struct S2 p_13, int p_14, unsigned p_15, int p_16, unsigned short p_17);
static struct S1 func_18(short p_19, struct S2 p_20, const int p_21, unsigned short p_22, unsigned p_23);
static short func_24(unsigned char p_25, const unsigned short p_26, unsigned char p_27, unsigned char p_28);
static union U3 func_29(unsigned char p_30, union U3 p_31, const struct S2 p_32, struct S2 p_33, const unsigned p_34);
static unsigned short func_37(const int p_38, int p_39, short p_40, unsigned p_41);
static int func_42(unsigned char p_43, int p_44, unsigned short p_45, unsigned short p_46);
static unsigned char func_47(int p_48, unsigned p_49, unsigned short p_50);
static char func_51(unsigned p_52, char p_53, unsigned char p_54, char p_55);
static char func_1(void)
{
    unsigned char l_9 = 0x72L;
    unsigned char l_57 = 0UL;
    unsigned l_92 = 6UL;
    union U3 l_101 = {0UL};
    const struct S2 l_102 = {0x35L,0xF3L,0L};
    int l_456 = 0x43DBAF13L;
    short l_457 = 0x2B70L;
    int *l_561 = (void*)0;
    int *l_562 = &g_84.f3;
    unsigned char l_589 = 1UL;
    unsigned char l_590 = 0x2BL;
    const unsigned short l_598 = 7UL;
    struct S0 * const l_613 = &g_210;
    short l_653 = 0x9F3EL;
    struct S1 *l_657 = &g_658;
    unsigned char l_686 = 0xE6L;
    short l_720 = 9L;
    struct S2 l_748 = {1UL,1UL,-1L};
    short l_807 = (-10L);
    int ***l_812 = &g_80;
    (*l_562) = (safe_unary_minus_func_int8_t_s(func_3((((safe_div_func_uint16_t_u_u(l_9, (safe_mod_func_int8_t_s_s((0xF4FFL || (l_9 > func_12((func_18(func_24((func_29((safe_lshift_func_uint16_t_u_s(func_37(func_42(func_47((((((func_51(l_9, l_9, g_56, l_57) > (((safe_mod_func_int32_t_s_s((l_57 ^ 0L), l_57)) , 4294967295UL) <= 0x42DCBDEDL)) > 0x97C3L) > 4294967294UL) != l_9) , 0xC8E11F31L), l_9, g_59), l_57, l_57, l_57), g_84.f7, l_92, g_84.f1), 13)), l_101, l_102, l_102, l_102.f1) , 1UL), g_100.f2, g_112.f1, g_112.f0), g_149, g_149.f1, g_149.f2, g_210.f2) , l_102), g_252.f2, l_456, l_457, l_102.f0))), l_101.f0)))) <= g_56) == g_504.f0), l_57, l_102)));



    ;
    for (g_149.f2 = 5; (g_149.f2 >= 22); g_149.f2 = safe_add_func_uint16_t_u_u(g_149.f2, 8))
    {
        volatile unsigned l_565 = 0xADE0AA5DL;
        int l_568 = 0xE298B7EFL;
        struct S1 *l_575 = &g_444;
        const int *l_580 = &g_210.f3;
        const int **l_579 = &l_580;
        const int *** const l_578 = &l_579;
        union U3 l_587 = {0x0062A4D2L};
        union U3 l_588 = {0xFAE9AD4CL};
        l_565 = g_508.f1;
        if (func_51((l_102 , g_206.f7), (safe_mod_func_uint16_t_u_u((0x8E11L > (l_568 && l_568)), g_446.f0)), g_84.f5, l_568))
        {
            unsigned char l_583 = 1UL;
            for (g_100.f3 = 3; (g_100.f3 <= 24); g_100.f3 = safe_add_func_uint8_t_u_u(g_100.f3, 1))
            {
                union U3 *l_571 = &g_572;
                int *l_581 = &g_100.f3;
                int l_584 = (-9L);
                l_571 = (*g_386);

                ;
                for (g_553.f2 = 0; (g_553.f2 != (-14)); g_553.f2 = safe_sub_func_int32_t_s_s(g_553.f2, 4))
                {
                    struct S1 **l_576 = &l_575;
                    int l_577 = 0x9952A223L;
                    (*l_576) = l_575;
                    if (((&g_80 == (l_577 , l_578)) && l_577))
                    {
                        (**l_578) = l_581;

                        ;
                        if ((*l_580))
                            continue;
                        return (**l_579);
                    }
                    else
                    {
                        int l_582 = 0xB60548C2L;
                        (**l_578) = l_581;

                        ;
                        return l_582;
                    }
                }
                (*l_562) = (((((*l_581) && (safe_rshift_func_uint8_t_u_s(g_553.f0.f2, 3))) ^ g_278.f2) , &g_210) == g_99);
            }

            ;
        }
        else
        {
            struct S1 **l_591 = &l_575;
            if ((*l_580))
                break;
            (*l_591) = (*g_250);

            ;
            (*l_579) = (*l_579);
        }

        ;
        ;
        (*l_562) = (safe_rshift_func_int16_t_s_u(g_129.f0.f7, 1));
    }
    for (g_56 = (-19); (g_56 > 26); g_56 = safe_add_func_uint16_t_u_u(g_56, 7))
    {
        const unsigned short l_599 = 65535UL;
        const union U3 l_602 = {0x037BBB02L};
        struct S0 *l_646 = (void*)0;
        int ** const l_660 = &l_562;
        struct S2 l_710 = {0x6FL,8UL,6L};
        unsigned l_712 = 0x7987132FL;
        struct S1 **l_747 = &l_657;
        unsigned short l_749 = 65532UL;
        const int l_752 = 0xB0C1AF16L;
        unsigned short l_762 = 0x4D64L;
        struct S2 *l_794 = &g_149;
        struct S2 **l_793 = &l_794;
        if ((2L == (+(safe_div_func_int32_t_s_s((((g_444.f0.f4 , g_77.f0.f4) > 0xACL) <= 0x978C7138L), 0x431E254FL)))))
        {
            union U3 **l_619 = (void*)0;
            union U3 ***l_618 = &l_619;
            int l_628 = 1L;
            int l_629 = (-4L);
            struct S2 l_630 = {0x6DL,1UL,0L};
            struct S1 **l_670 = (void*)0;
            const int *l_702 = &l_628;
            const int **l_701 = &l_702;
            int *l_732 = &l_710.f2;
            struct S0 *l_753 = &g_648;
            char l_772 = 0xCAL;
            for (g_100.f4 = 0; (g_100.f4 == 27); ++g_100.f4)
            {
                int **l_649 = &l_561;
                g_99 = l_613;

                ;
                if (func_3(((safe_mod_func_int32_t_s_s((g_352 != (safe_mul_func_uint16_t_u_u(((l_618 != &g_386) || (-1L)), (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(g_129.f0.f6, 4)) && g_210.f7), (safe_sub_func_int16_t_s_s((6UL ^ (((safe_add_func_int16_t_s_s(g_77.f2, l_628)) && g_100.f2) > g_252.f2)), g_446.f1))))))), g_455.f2)) | l_599), l_629, l_630))
                {
                    int l_639 = 0xB6A3B96EL;
                    struct S0 *l_647 = &g_648;
                    (*l_562) = (g_446 , (safe_add_func_uint8_t_u_u(((-1L) < (safe_mul_func_uint16_t_u_u(((g_379.f0.f6 ^ func_51(l_602.f1, (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(g_508.f2, l_639)), 0x91F63469L)), g_210.f4, ((safe_sub_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(func_3(((&g_386 != (void*)0) & (*l_562)), g_504.f1, l_102), 0x79EF8D67L)), l_639)) != l_599) != l_602.f1), l_599)) , g_572.f0))) <= 1L), 0x398BL))), (*l_562))));
                    (*l_562) = (&g_80 != &g_80);
                    l_647 = l_646;

                    ;
                }
                else
                {
                    struct S2 **l_654 = (void*)0;
                    struct S2 *l_656 = &g_446;
                    struct S2 **l_655 = &l_656;
                    (*l_562) = (g_553.f0.f3 == func_3(func_3((l_649 == (g_100.f4 , &g_81)), (0UL == ((safe_add_func_int16_t_s_s((-2L), (((void*)0 == &g_387) && (safe_unary_minus_func_uint8_t_u(255UL))))) ^ g_149.f0)), g_446), l_653, l_102));
                    if ((*l_562))
                        continue;
                    (*l_649) = (*l_649);
                    (*l_655) = &g_446;
                }
                if (l_602.f1)
                    continue;
                (*l_562) = (*l_562);
            }
            if (l_602.f1)
            {
                unsigned l_659 = 4294967293UL;
                l_657 = (*g_250);

                ;
                if (l_602.f1)
                    break;
                (*l_562) = l_659;
                if (l_602.f0)
                    continue;
            }
            else
            {
                int *l_661 = (void*)0;
                struct S0 *l_663 = &g_100;
                const struct S1 **l_673 = (void*)0;
                union U3 l_681 = {0x357AE4DBL};
                unsigned l_731 = 0x38BC804EL;
                if ((((*g_99) , l_660) != l_660))
                {
                    int *l_662 = &l_628;
                    struct S0 **l_664 = &l_663;
                    l_662 = l_661;

                    ;
                    (*l_664) = l_663;
                    (**l_660) = func_12(g_446, (safe_div_func_uint32_t_u_u((**l_660), g_455.f0.f6)), (g_667 && ((((((safe_rshift_func_int16_t_s_u(g_210.f3, (0xA0L ^ g_112.f0))) , l_670) == ((safe_mul_func_uint8_t_u_u((&g_99 != &g_99), g_100.f2)) , l_673)) | 0xB2L) == g_648.f5) | g_648.f7)), g_210.f7, l_630.f1);
                    (*l_660) = &g_59;

                    ;
                }
                else
                {
                    if ((safe_mod_func_int8_t_s_s(l_630.f2, g_455.f0.f2)))
                    {
                        return g_149.f0;
                    }
                    else
                    {
                        struct S2 **l_676 = (void*)0;
                        struct S2 *l_678 = &g_149;
                        struct S2 **l_677 = &l_678;
                        (*l_677) = &g_446;

                        ;
                    }
                }
                if (g_77.f0.f3)
                {
                    short l_687 = (-9L);
                    int l_709 = 0x33CBB6BFL;
                    if ((**l_660))
                    {
                        int *l_688 = &l_629;
                        (*l_562) = l_687;
                        l_688 = l_661;

                        ;
                    }
                    else
                    {
                        volatile struct S0 *l_690 = &g_206;
                        volatile struct S0 **l_689 = &l_690;
                        (*l_660) = l_561;

                        ;
                        (*l_689) = &g_78;

                        ;
                    }

                    ;
                    (*l_660) = (*l_660);
                    if ((safe_div_func_uint32_t_u_u(0x7157C142L, 0x03798CDCL)))
                    {
                        (*l_660) = (void*)0;

                        ;
                    }
                    else
                    {
                        unsigned short l_711 = 0xE1BCL;
                        int *l_717 = &g_210.f3;
                        union U3 **l_718 = &g_387;
                        g_210.f3 = (~((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((g_379.f0.f0 | (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(g_100.f5, (g_149.f2 >= func_51((l_701 == &g_81), func_3((**l_701), (~((safe_add_func_uint32_t_u_u(g_100.f5, (safe_add_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(l_709, func_3(g_352, g_149.f2, l_710))) && l_711), (**l_701))))) >= g_100.f1)), g_446), l_712, l_687)))) < g_648.f1), l_711))), 0UL)), 7)) && l_711));
                        (*l_717) = ((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((&g_386 != (g_149 , &g_386)), g_78.f0)), g_648.f1)) <= (l_711 >= l_711)) | func_51(g_504.f1, g_648.f1, g_648.f2, l_687)) ^ l_687);
                        (*l_718) = (*g_386);
                        (*l_660) = &g_59;

                        ;
                    }

                    ;
                }
                else
                {
                    struct S1 **l_719 = &l_657;
                    int l_722 = 0x7365F6D0L;
                    unsigned l_723 = 0xE9BA2C0EL;
                    struct S2 l_730 = {0xABL,0x58L,0L};
                    (*l_719) = (*g_250);

                    ;
                    (**l_660) = ((l_720 > 0x09EE096FL) , ((func_12(g_446, (((l_722 & g_352) <= g_129.f0.f4) & (*l_702)), g_252.f2, g_446.f2, g_648.f4) != 0L) , (-1L)));
                    (*l_562) = (g_279.f0.f4 , ((safe_lshift_func_uint16_t_u_s((g_508.f2 ^ (g_129.f0.f3 , (0xA6L != (safe_mod_func_uint8_t_u_u((g_455.f0.f3 >= (&l_101 == ((func_3(l_723, ((**l_701) <= (safe_div_func_uint32_t_u_u((*l_702), g_446.f1))), l_730) >= l_731) , &l_101))), 0xC8L))))), 8)) ^ g_100.f4));
                }

                ;
            }

            ;
            (*l_732) = 0x93498FE5L;
            if ((safe_sub_func_uint16_t_u_u((((((l_710 , (safe_sub_func_uint16_t_u_u(g_187.f0.f0, ((safe_div_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(251UL, (safe_sub_func_uint16_t_u_u((!((func_3((l_670 != (l_710.f1 , l_747)), g_504.f1, l_748) | (*l_732)) , 5UL)), g_667)))), 5)), 0L)) >= 0x5527L) & g_352), (*l_702))) == g_100.f2)))) && l_749) , g_750) == &l_657) <= 0xDDF7CCFDL), l_752)))
            {
                struct S0 **l_754 = &l_646;
                (*l_754) = l_753;

                ;
                (*l_754) = (void*)0;

                ;
                return g_553.f0.f0;
            }
            else
            {
                int l_761 = 0xA50CA8DEL;
                int l_763 = 1L;
                g_446.f2 = (((!((safe_sub_func_int16_t_s_s(g_444.f0.f4, (g_553.f2 || ((safe_mod_func_int16_t_s_s(((((void*)0 != &g_386) ^ (g_572 , func_3((g_84.f3 == ((safe_add_func_int32_t_s_s((**l_701), ((l_761 >= ((g_187.f2 > 0L) | l_761)) > l_762))) < 1L)), g_648.f3, g_446))) ^ g_444.f2), g_84.f1)) < 0xD29FA86CL)))) & g_572.f1)) && l_763) , g_129.f0.f6);
                (*l_660) = &l_763;

                ;
                (*l_562) = (safe_mul_func_int8_t_s_s((((g_206.f3 & ((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(g_84.f7, ((safe_mod_func_int32_t_s_s((*l_702), func_51((**l_660), g_658.f2, l_772, (safe_mod_func_int32_t_s_s((*l_702), ((func_51(((safe_mul_func_uint16_t_u_u(g_572.f1, (**l_701))) , g_100.f4), g_112.f1, (**l_660), g_446.f1) > l_761) && 0xA1E7617DL)))))) & 0x8DB2L))), (**l_701))) || (**l_660))) , &g_59) == l_561), g_187.f2));
                (*l_660) = &g_59;

                ;
            }

            ;
        }
        else
        {
            int l_777 = (-2L);
            int *l_779 = &l_777;
            (*l_562) = l_777;
            (*g_750) = (*g_750);
            if ((safe_unary_minus_func_int32_t_s((g_379.f0.f4 ^ ((void*)0 != &g_80)))))
            {
                int *l_780 = &g_100.f3;
                l_779 = &l_777;
                (*l_660) = l_780;

                ;
                if (g_781)
                    continue;
            }
            else
            {
                unsigned char l_788 = 249UL;
                (*l_562) = (safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((**l_660) >= (g_129.f0.f0 < (*l_779))), (func_51((l_602 , (safe_lshift_func_int16_t_s_u(((g_648.f3 , 0L) > (&g_80 == &g_80)), ((*l_562) | g_210.f1)))), (*l_779), g_84.f5, l_788) ^ (*l_779)))), 0x6C70L));
                (*l_660) = l_562;
                for (g_455.f2 = 28; (g_455.f2 != (-6)); --g_455.f2)
                {
                    unsigned l_791 = 4294967295UL;
                    union U3 **l_792 = &g_387;
                    if (l_791)
                        break;
                    (*l_792) = (*g_386);
                }
            }
            (*l_562) = (**l_660);
        }
        (*l_793) = &g_149;
        (**l_660) = ((((safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((**l_660), (safe_rshift_func_int8_t_s_u((0L == 8UL), (**l_660))))), 1UL)), 0x1C74L)) < (!(safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_807, ((safe_rshift_func_int8_t_s_u(func_51(g_78.f6, (safe_mod_func_uint32_t_u_u(((((void*)0 != l_812) , 0x8EL) > g_112.f1), 6L)), g_149.f1, g_504.f1), g_149.f2)) , 0x29L))), g_112.f1)))) ^ (-10L)) , 0x475DE2C9L);
        (**l_660) = (-1L);
    }

    ;
    ;
    ;
    return g_84.f1;
}







static char func_3(int p_4, short p_5, struct S2 p_6)
{
    unsigned l_558 = 0UL;
    struct S2 *l_559 = &g_446;
    struct S2 **l_560 = &l_559;
    (*l_560) = ((p_6.f0 > 4294967295UL) , l_559);
    return l_558;
}







static unsigned func_12(struct S2 p_13, int p_14, unsigned p_15, int p_16, unsigned short p_17)
{
    struct S0 *l_458 = &g_84;
    struct S0 **l_459 = &l_458;
    int *l_460 = &g_210.f3;
    int **l_461 = &l_460;
    const struct S2 *l_462 = &g_446;
    unsigned short l_475 = 65527UL;
    const union U3 *l_503 = &g_504;
    unsigned char l_539 = 0x1BL;
    unsigned short l_549 = 1UL;
    struct S1 *l_551 = &g_187;
    int l_557 = 1L;
    (*l_459) = l_458;
    (*l_461) = l_460;
    (*l_461) = (g_129.f1 , (*l_461));
    if (p_15)
    {
        int *l_465 = (void*)0;
        unsigned l_497 = 0xD1CF75D6L;
        struct S0 *l_501 = &g_84;
        (**l_461) = 1L;
        (*l_460) = (((*g_99) , &g_446) != l_462);
        for (p_16 = 23; (p_16 > (-10)); --p_16)
        {
            const unsigned short l_466 = 1UL;
            int l_511 = (-8L);
            int ***l_512 = &g_80;
            (*l_461) = l_465;

            ;
            (*l_461) = (p_16 , (l_466 , l_465));
            for (g_100.f5 = 0; (g_100.f5 >= 54); ++g_100.f5)
            {
                int *l_480 = &g_84.f3;
                unsigned l_505 = 0x953533F1L;
                if (((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(l_475, (((void*)0 == &g_251) ^ ((safe_sub_func_uint32_t_u_u(((((safe_div_func_uint8_t_u_u(g_84.f7, func_51(g_129.f2, p_13.f2, g_210.f2, (g_210.f2 && (-7L))))) , (void*)0) != (void*)0) | (-1L)), 0xA85570AEL)) >= p_13.f2)))) , p_13.f1), 0x11L)), p_13.f0)) > p_13.f0))
                {
                    int **l_489 = &l_460;
                    union U3 **l_493 = &g_387;
                    union U3 ***l_492 = &l_493;
                    if ((&l_458 == (void*)0))
                    {
                        unsigned char l_481 = 253UL;
                        short l_486 = (-5L);
                        (*l_461) = l_480;

                        ;
                        (*l_480) = (l_481 | ((-3L) | (safe_add_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s(g_455.f0.f6, p_13.f1)) , l_486) || ((safe_mod_func_uint16_t_u_u((p_17 ^ ((+((&l_480 != l_489) | (safe_rshift_func_int16_t_s_s(g_100.f7, (*l_480))))) >= p_16)), 1UL)) < (**l_461))), 0x9D366E8AL))));
                    }
                    else
                    {
                        (*l_480) = p_13.f2;
                        (*l_480) = p_13.f2;
                    }

                    ;
                    (*l_492) = (void*)0;

                    ;
                    return g_77.f2;


                }
                else
                {
                    char l_494 = (-1L);
                    union U3 l_498 = {0UL};
                    l_494 = 0x36F54A07L;
                    (*l_480) = (l_494 ^ ((safe_mod_func_uint32_t_u_u((p_13.f0 <= l_497), p_16)) && (p_13.f0 != (l_498 , (&g_387 != (void*)0)))));
                    for (g_210.f2 = 0; (g_210.f2 > 1); ++g_210.f2)
                    {
                        const union U3 *l_502 = &l_498;
                        (*l_459) = l_501;
                        l_503 = l_502;

                        ;
                        l_505 = 0x413D1CE4L;
                    }


                }
                (*l_480) = ((g_508.f0.f0 == g_444.f2) , 0x8B8B6F64L);
                l_511 = (safe_lshift_func_uint8_t_u_s(0x27L, 7));
            }
            (*l_512) = (g_187.f0.f3 , &l_460);

            ;
        }


        ;

        return p_13.f0;


    }
    else
    {
        unsigned short l_520 = 65535UL;
        int l_542 = 1L;
        unsigned short l_550 = 0x2D79L;
        struct S1 *l_552 = &g_553;
        int *l_554 = (void*)0;
        int *l_555 = &g_149.f2;
        struct S1 **l_556 = &l_551;
        (*l_461) = ((p_13.f1 <= ((safe_mod_func_int32_t_s_s((((safe_unary_minus_func_int8_t_s(((*g_250) != (void*)0))) <= 0xBBF9L) && (p_17 || (safe_sub_func_uint8_t_u_u(g_425.f0.f1, (safe_lshift_func_int16_t_s_u(1L, func_51(p_13.f1, g_504.f1, g_446.f1, g_84.f2))))))), p_13.f2)) && 0x6B9DCE84L)) , (void*)0);

        ;
        p_13.f2 = ((l_520 && 0x372F684EL) || (safe_add_func_uint32_t_u_u(p_13.f0, (((((safe_lshift_func_uint8_t_u_u(0xF3L, (g_78.f0 >= ((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_int32_t_s_s(0x66B29A4DL, ((safe_sub_func_int16_t_s_s(g_112.f0, (((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0xD8L, (l_520 , 0x81L))), 1L)), p_14)) <= l_520) , (-1L)))) > p_13.f2))), p_14)), l_539)) == p_16)))) , 0x92L) , l_520) | 0x161275F9L) < p_13.f1))));
        (*l_555) = ((((func_51((g_77.f0.f2 , 0x8D0E2C79L), l_520, g_77.f2, (safe_lshift_func_int16_t_s_s(g_187.f2, 2))) > func_51(g_100.f4, l_542, ((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((((l_549 >= l_520) && p_13.f1) >= l_520) <= g_504.f1), 0x33FFL)), g_77.f2)), g_210.f7)) <= l_550), g_84.f7)) ^ p_13.f0) , l_551) != l_552);
        (*l_556) = l_552;

        ;
    }

    ;
    ;
    return l_557;
}







static struct S1 func_18(short p_19, struct S2 p_20, const int p_21, unsigned short p_22, unsigned p_23)
{
    union U3 *l_231 = (void*)0;
    int l_232 = 4L;
    int l_273 = 0x62547E73L;
    int l_275 = 0x141716ACL;
    int *l_299 = (void*)0;
    struct S0 *l_322 = (void*)0;
    int *l_330 = &g_100.f3;
    int ***l_349 = &g_80;
    unsigned short l_428 = 0x4B75L;
    unsigned l_437 = 0x4D82CF4FL;
    int l_440 = 0x7799A8B8L;
    const char l_451 = 9L;
    unsigned short l_454 = 0x17C9L;
    if (l_232)
    {
        int *l_235 = &g_210.f3;
        if (l_232)
        {
            struct S2 *l_234 = &g_149;
            struct S2 **l_233 = &l_234;
            (*l_233) = &g_149;
            (*g_80) = l_235;

            ;
        }
        else
        {
            (*g_80) = (*g_80);
            (*l_235) = p_20.f2;
        }

        ;
    }
    else
    {
        struct S2 *l_239 = (void*)0;
        struct S2 **l_238 = &l_239;
        unsigned char l_249 = 0x41L;
        union U3 l_254 = {4294967295UL};
        const int *l_281 = &g_210.f3;
        const int **l_280 = &l_281;
        int l_298 = 0x3B3BA48CL;
        struct S0 **l_325 = (void*)0;
        char l_356 = 1L;
        int l_448 = (-1L);
        for (g_84.f3 = 0; (g_84.f3 > 27); ++g_84.f3)
        {
            int l_253 = (-8L);
            const struct S2 l_255 = {8UL,0xACL,1L};
            unsigned char l_274 = 0xAEL;
            if ((g_187.f2 < p_19))
            {
                int l_268 = 0x76EE4DCEL;
                int *l_276 = (void*)0;
                int *l_277 = &g_59;
                (*l_277) = (safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(l_254.f0, (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((g_187.f0.f2 < p_20.f2) < g_84.f4), l_275)), p_22)))), p_19));
            }
            else
            {
                return g_278;
            }
            (*g_80) = (*g_80);
            return g_279;
        }
        (*l_280) = &p_21;

        ;
        if (p_21)
        {
            int *l_282 = (void*)0;
            int *l_283 = &g_84.f3;
            (*l_283) = func_51(((void*)0 == l_231), p_23, p_23, p_21);
        }
        else
        {
            int *l_284 = &g_59;
            int l_350 = (-1L);
            int l_369 = (-2L);
            struct S1 *l_424 = &g_425;
            int l_427 = 0L;
            if ((g_78.f4 > p_20.f2))
            {
                unsigned short l_297 = 65526UL;
                (*l_280) = l_284;

                ;
                (*l_284) = (safe_mod_func_uint32_t_u_u((p_20.f1 | (g_278.f0.f3 || (safe_add_func_uint16_t_u_u((g_210.f4 , g_206.f4), g_100.f1)))), g_112.f0));
                (*l_284) = l_297;
                (*g_80) = (void*)0;

                ;
            }
            else
            {
                unsigned char l_321 = 3UL;
                const union U3 l_355 = {2UL};
                int *l_364 = &l_275;
                if (p_22)
                {
                    union U3 **l_300 = &l_231;
                    (*l_284) = l_298;
                    if ((g_129.f0.f6 & g_112.f0))
                    {
                        l_299 = (void*)0;
                    }
                    else
                    {
                        return (*g_251);
                    }
                    (*l_300) = &g_112;

                    ;
                    (*l_284) = (-4L);
                }
                else
                {
                    int *l_301 = (void*)0;
                    l_301 = (void*)0;
                    return (*g_251);
                }

                ;
                for (l_249 = 0; (l_249 != 15); l_249 = safe_add_func_uint16_t_u_u(l_249, 8))
                {
                    int l_316 = 5L;
                    (*l_280) = (*g_80);

                    ;
                    (*l_284) = (safe_rshift_func_uint8_t_u_u(p_19, ((safe_add_func_int16_t_s_s((0x71L | (&l_281 == (void*)0)), p_20.f0)) , ((p_20.f2 > g_129.f0.f5) > (safe_div_func_uint8_t_u_u(func_51(p_23, (safe_mul_func_uint16_t_u_u(func_51(p_20.f1, p_23, p_19, p_20.f1), g_84.f2)), p_23, g_149.f0), p_19))))));
                    (*l_284) = (safe_mul_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u((l_321 != 1L), l_321)) & (-1L)) , (void*)0) != l_322), 0x8CL));
                }

                ;
                if ((p_20.f2 < (0xC2L & (((l_325 != &l_322) , 0x4EA7L) <= g_278.f0.f4))))
                {
                    struct S0 *l_329 = &g_210;
                    (*g_80) = (((safe_lshift_func_uint16_t_u_s(((&g_149 != (void*)0) < (safe_unary_minus_func_int16_t_s((&g_210 != l_329)))), 15)) , g_278.f2) , l_330);

                    ;
                }
                else
                {
                    char l_345 = 0x2EL;
                    int ***l_348 = &g_80;
                    unsigned char l_351 = 0xC3L;
                    (*g_80) = (*g_80);
                    (*l_330) = (safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((~(safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((*l_284), ((safe_lshift_func_int16_t_s_u(p_20.f1, (l_345 >= ((**g_250) , (safe_rshift_func_int8_t_s_s(l_345, (func_51((l_321 , l_321), (l_348 != l_349), g_278.f0.f3, p_21) , g_206.f4))))))) > l_350))), 0)), l_351))), (-6L))), g_352)), 0x4C00L));
                }
                if (p_20.f0)
                {
                    const struct S2 * const l_359 = &g_149;
                    for (g_278.f2 = 18; (g_278.f2 == 15); g_278.f2--)
                    {
                        const struct S2 *l_361 = (void*)0;
                        const struct S2 **l_360 = &l_361;
                        (*l_360) = l_359;

                        ;
                    }
                    for (g_210.f4 = 0; (g_210.f4 <= (-3)); g_210.f4--)
                    {
                        (*l_280) = l_364;

                        ;
                        (*g_80) = (*g_80);
                    }

                    ;
                }
                else
                {
                    int l_372 = 0x8A07E256L;
                    for (l_273 = (-11); (l_273 > 21); ++l_273)
                    {
                        char l_370 = 0x66L;
                        struct S0 **l_371 = &l_322;
                        (*l_238) = &g_149;

                        ;
                        (*l_284) = ((((safe_rshift_func_int16_t_s_u(4L, l_369)) && (((p_20.f2 , 0xB4996438L) <= p_20.f0) > p_20.f1)) , p_19) , l_372);
                    }

                    ;
                    (*g_80) = &l_369;

                    ;
                    (*g_81) = (**g_80);
                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
            ;
            if (p_19)
            {
                unsigned char l_373 = 0xB8L;
                int *l_376 = &g_210.f3;
                if ((0xFBL <= (!((((p_20 , (*g_99)) , g_279.f0.f4) | ((0x0FL == (l_373 & ((safe_rshift_func_int16_t_s_u(0L, p_20.f0)) <= p_23))) , g_77.f2)) & g_84.f7))))
                {
                    (**l_349) = l_376;

                    ;
                }
                else
                {
                    union U3 **l_388 = &l_231;
                    struct S1 *l_426 = (void*)0;
                    int ***l_430 = (void*)0;
                    if ((safe_lshift_func_int8_t_s_u((!(p_20.f1 == 0x48CEB18DL)), (g_379 , (safe_div_func_int16_t_s_s(p_20.f1, (*l_284)))))))
                    {
                        unsigned l_395 = 4294967286UL;
                        (*l_284) = ((*l_284) || 4294967295UL);
                        (*l_376) = (p_20.f2 < 1UL);
                        return (*g_251);


                    }
                    else
                    {
                        int **l_396 = &l_376;
                        union U3 **l_397 = &g_387;
                        (*l_349) = l_396;

                        ;
                        (*l_397) = (*g_386);
                        (*l_396) = (**l_349);
                    }

                    ;
                    if ((safe_mul_func_uint16_t_u_u(((((safe_sub_func_uint8_t_u_u(p_20.f0, ((safe_sub_func_uint32_t_u_u((p_20.f2 >= (g_56 >= 0xFFL)), ((p_21 == ((safe_mod_func_uint32_t_u_u(4294967289UL, func_47((((safe_lshift_func_int8_t_s_s(g_379.f2, ((safe_rshift_func_int8_t_s_u(((func_51((safe_sub_func_int8_t_s_s((p_20.f0 && (safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((l_424 != l_426), p_20.f1)), p_21)) | g_84.f2), p_20.f1)), p_22)) && 0UL) ^ g_425.f2), p_19))), 0x38L)), p_21, p_20.f0, p_22) , (*g_386)) == (*g_386)), g_84.f1)) && g_171))) ^ (*l_376)) >= p_22), p_20.f0, p_20.f1))) || p_23)) <= p_22))) > p_21))) == l_427) , p_19) ^ g_171), l_428)))
                    {
                        unsigned l_429 = 0x278A158EL;
                        (**g_80) = l_429;
                    }
                    else
                    {
                        (***l_349) = p_21;
                    }
                    (*l_376) = ((safe_lshift_func_int8_t_s_u(p_21, g_441)) | (**g_80));
                    (***l_349) = (safe_sub_func_uint16_t_u_u(g_77.f0.f0, ((void*)0 == &l_254)));
                }

                ;
                ;
            }
            else
            {
                struct S2 *l_445 = &g_446;
                unsigned l_447 = 4294967293UL;
                if (p_19)
                {
                    (*l_280) = &p_21;

                    ;
                    (*l_280) = (p_20 , &l_369);

                    ;
                    return g_444;


                }
                else
                {
                    l_445 = &g_149;

                    ;
                    (*l_280) = (*g_80);

                    ;
                    (*l_280) = (void*)0;

                    ;
                    (**l_349) = ((0xFEL == p_20.f2) , (*g_80));
                }

                ;
                ;
                (*l_280) = (*g_80);

                ;
                (*l_280) = &p_21;

                ;
                l_448 = (+l_447);
            }

            ;

        }



        ;
        ;
        ;
        (*l_280) = (*l_280);
    }



    ;
    (*l_330) = ((safe_mul_func_uint16_t_u_u((0xCB8A5D56L >= (0x8CL > p_21)), g_78.f5)) , g_252.f0.f6);
    return g_455;
}







static short func_24(unsigned char p_25, const unsigned short p_26, unsigned char p_27, unsigned char p_28)
{
    const unsigned l_113 = 7UL;
    union U3 l_126 = {4294967293UL};
    struct S0 *l_128 = (void*)0;
    struct S0 **l_127 = &l_128;
    const unsigned char l_159 = 1UL;
    struct S2 l_170 = {0xA2L,0x32L,0x04EE4DB1L};
    unsigned char l_175 = 0xFDL;
    struct S1 *l_218 = (void*)0;
    struct S1 **l_217 = &l_218;
    (*g_81) = (((func_37(l_113, g_100.f6, ((safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(p_27, 5)) && (g_100.f5 == 1L)), (safe_div_func_int16_t_s_s(((void*)0 != g_99), (safe_rshift_func_uint8_t_u_u(((0UL ^ (l_113 || l_113)) > l_113), 0)))))) , g_100.f5), p_26) <= 0x6261E54EL) || 4294967290UL) != 0x257E1E0AL);
    if ((safe_rshift_func_int8_t_s_u(((l_113 || l_113) || (((safe_mul_func_int16_t_s_s((((l_126 , (void*)0) != (((g_84.f1 , &g_112) != ((!1L) , &g_112)) , l_127)) <= (-1L)), p_26)) < 1L) | (-6L))), g_100.f3)))
    {
        union U3 *l_130 = &l_126;
        union U3 **l_131 = &l_130;
        (*g_80) = (g_129 , (*g_80));
        (*l_131) = l_130;
    }
    else
    {
        struct S0 * const l_132 = &g_84;
        struct S0 **l_133 = &l_128;
        int l_140 = 0x4F2F6EF9L;
        int l_198 = 0x71180782L;
        union U3 l_201 = {0xDFD8EE76L};
        (*l_133) = l_132;

        ;
        (*g_80) = (void*)0;

        ;
        for (g_100.f2 = (-27); (g_100.f2 == (-1)); g_100.f2++)
        {
            struct S2 * const l_180 = &l_170;
            const int l_184 = 0xDC6A2FA3L;
            const int *l_200 = &g_59;
            const int **l_199 = &l_200;
            struct S0 **l_214 = &l_128;
            if (((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((255UL >= p_26), ((g_129.f2 , (p_28 != ((safe_mod_func_int32_t_s_s(p_28, (safe_sub_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(g_100.f6, 0xA3B3L)) , &l_128) != &g_99) || p_26), l_126.f1)))) && (-9L)))) <= (-4L)))) , 254UL), 5)) <= 0xB3L))
            {
                struct S2 *l_148 = &g_149;
                struct S2 **l_147 = &l_148;
                int l_150 = 7L;
                int *l_151 = &g_59;
                (*l_147) = (void*)0;

                ;
                (*l_151) = l_150;
            }
            else
            {
                unsigned short l_174 = 0xE182L;
                char l_176 = 0L;
                union U3 *l_177 = (void*)0;
                short l_195 = (-6L);
                for (p_27 = (-6); (p_27 == 49); p_27++)
                {
                    int *l_154 = (void*)0;
                    int *l_155 = (void*)0;
                    int *l_156 = (void*)0;
                    int *l_157 = (void*)0;
                    int *l_158 = &g_59;
                    (*l_158) = p_26;
                    if ((l_176 ^ g_129.f0.f5))
                    {
                        union U3 **l_178 = &l_177;
                        (*l_178) = l_177;
                    }
                    else
                    {
                        int *l_181 = &g_149.f2;
                        (*g_80) = (((safe_unary_minus_func_uint8_t_u(253UL)) , ((void*)0 == l_180)) , l_181);

                        ;
                    }
                    for (l_175 = 0; (l_175 < 38); ++l_175)
                    {
                        if (l_184)
                            break;
                    }
                    if (l_140)
                    {
                        unsigned char l_185 = 0x99L;
                        l_185 = ((g_149 , 0x5A2B16FEL) >= l_184);
                    }
                    else
                    {
                        struct S1 *l_186 = &g_187;
                        struct S1 **l_188 = &l_186;
                        (*l_127) = (void*)0;

                        ;
                        (*l_188) = l_186;
                        (*l_158) = (((safe_sub_func_uint32_t_u_u(g_84.f6, p_27)) , (safe_sub_func_int32_t_s_s((g_100.f3 | (((((safe_sub_func_uint32_t_u_u(g_100.f7, (((*g_99) , func_51(g_129.f0.f6, ((((p_27 , l_195) && (safe_div_func_uint16_t_u_u((l_170.f2 != l_198), g_112.f1))) , g_149.f1) != p_27), p_28, g_100.f5)) == l_170.f0))) < p_26) , (*l_158)) < g_84.f1) == g_84.f2)), l_184))) && 1UL);
                    }
                }

                ;
                ;
                return g_77.f0.f3;
            }
            (*l_199) = &l_184;

            ;
            if ((*l_200))
            {
                (*g_80) = (l_201 , (*g_80));
            }
            else
            {
                struct S0 *l_209 = &g_210;
                struct S2 l_211 = {0xD4L,0xC9L,0L};
                struct S1 *l_216 = &g_187;
                struct S1 **l_215 = &l_216;
                if ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((g_206 , 7UL), ((safe_sub_func_uint32_t_u_u((l_209 == ((func_51(g_100.f1, p_27, p_28, g_210.f7) , l_211) , (void*)0)), g_100.f2)) ^ 0x31L))), l_211.f2)))
                {
                    short l_223 = (-1L);
                    int *l_224 = &g_59;
                    (*l_199) = (void*)0;

                    ;
                    (*l_224) = ((0xF436L < p_28) , (~(safe_mod_func_uint32_t_u_u(((l_214 == ((l_215 != l_217) , l_214)) , ((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0x6BL, 0UL)), l_170.f0)) || (-4L))), l_223))));
                }
                else
                {
                    union U3 *l_226 = &g_112;
                    union U3 **l_225 = &l_226;
                    (*l_225) = &g_112;
                }

                ;
            }

            ;
        }
    }

    ;
    ;
    return g_78.f6;
}







static union U3 func_29(unsigned char p_30, union U3 p_31, const struct S2 p_32, struct S2 p_33, const unsigned p_34)
{
    char l_107 = 0x50L;
    struct S2 l_108 = {1UL,254UL,0x2812A6D4L};
    int *l_109 = &g_100.f3;
    union U3 *l_111 = &g_112;
    union U3 **l_110 = &l_111;
    (*l_109) = (func_47(p_34, g_77.f0.f2, (((safe_div_func_int32_t_s_s((((p_32.f0 <= p_32.f1) , ((safe_sub_func_uint32_t_u_u(l_107, l_107)) , l_108)) , 3L), p_33.f2)) | (*g_81)) ^ p_31.f1)) && 0UL);
    (*l_110) = &p_31;

    ;
    (*g_80) = l_109;

    ;
    return g_112;

    }







static unsigned short func_37(const int p_38, int p_39, short p_40, unsigned p_41)
{
    int l_97 = 0L;
    const struct S0 *l_98 = &g_84;
    (*g_81) = (*g_81);
    l_97 = (safe_mul_func_uint8_t_u_u(g_77.f0.f6, (safe_div_func_uint32_t_u_u(l_97, g_84.f5))));
    g_99 = l_98;

    ;
    return g_84.f1;
}







static int func_42(unsigned char p_43, int p_44, unsigned short p_45, unsigned short p_46)
{
    int *l_89 = (void*)0;
    for (g_84.f5 = 6; (g_84.f5 <= 10); g_84.f5 = safe_add_func_uint8_t_u_u(g_84.f5, 1))
    {
        int *l_88 = &g_59;
        (*g_80) = (*g_80);
        (*g_81) = (((l_88 != l_89) || (+(*l_88))) == (safe_add_func_int32_t_s_s(((p_44 && (p_44 != p_45)) > ((((p_44 != (func_51((g_59 & (g_77.f0 , (**g_80))), (*l_88), g_84.f4, p_43) >= g_84.f3)) < p_45) , g_78.f5) >= p_44)), p_44)));
        return p_43;
    }
    return g_84.f3;
}







static unsigned char func_47(int p_48, unsigned p_49, unsigned short p_50)
{
    int *l_62 = &g_59;
    const struct S0 *l_83 = &g_84;
    const struct S0 **l_85 = &l_83;
    (*l_62) = g_56;
    for (p_50 = 0; (p_50 > 8); p_50++)
    {
        int l_79 = (-1L);
        int ***l_82 = &g_80;
        (*l_62) = (((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((~g_56) && (safe_add_func_int16_t_s_s(g_56, (&p_48 != ((safe_div_func_int32_t_s_s((g_59 , (safe_rshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((func_51((0x6DFF6173L ^ (g_77 , (func_51((p_50 , (g_78 , 2UL)), p_48, g_56, l_79) >= p_49))), p_50, l_79, (*l_62)) != p_48), 0x35L)) & g_56), 11))), g_59)) , &l_79))))), g_56)), (-1L))) , 8UL) || p_50);
        (*l_82) = g_80;
        (**l_82) = (*g_80);
        (***l_82) = (~3L);
    }
    (*l_85) = l_83;
    return g_84.f1;
}







static char func_51(unsigned p_52, char p_53, unsigned char p_54, char p_55)
{
    int *l_58 = &g_59;
    l_58 = l_58;
    return g_59;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_77.f0.f0, "g_77.f0.f0", print_hash_value);
    transparent_crc(g_77.f0.f1, "g_77.f0.f1", print_hash_value);
    transparent_crc(g_77.f0.f2, "g_77.f0.f2", print_hash_value);
    transparent_crc(g_77.f0.f3, "g_77.f0.f3", print_hash_value);
    transparent_crc(g_77.f0.f4, "g_77.f0.f4", print_hash_value);
    transparent_crc(g_77.f0.f5, "g_77.f0.f5", print_hash_value);
    transparent_crc(g_77.f0.f6, "g_77.f0.f6", print_hash_value);
    transparent_crc(g_77.f0.f7, "g_77.f0.f7", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2, "g_77.f2", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_78.f1, "g_78.f1", print_hash_value);
    transparent_crc(g_78.f2, "g_78.f2", print_hash_value);
    transparent_crc(g_78.f3, "g_78.f3", print_hash_value);
    transparent_crc(g_78.f4, "g_78.f4", print_hash_value);
    transparent_crc(g_78.f5, "g_78.f5", print_hash_value);
    transparent_crc(g_78.f6, "g_78.f6", print_hash_value);
    transparent_crc(g_78.f7, "g_78.f7", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_84.f3, "g_84.f3", print_hash_value);
    transparent_crc(g_84.f4, "g_84.f4", print_hash_value);
    transparent_crc(g_84.f5, "g_84.f5", print_hash_value);
    transparent_crc(g_84.f6, "g_84.f6", print_hash_value);
    transparent_crc(g_84.f7, "g_84.f7", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_100.f1, "g_100.f1", print_hash_value);
    transparent_crc(g_100.f2, "g_100.f2", print_hash_value);
    transparent_crc(g_100.f3, "g_100.f3", print_hash_value);
    transparent_crc(g_100.f4, "g_100.f4", print_hash_value);
    transparent_crc(g_100.f5, "g_100.f5", print_hash_value);
    transparent_crc(g_100.f6, "g_100.f6", print_hash_value);
    transparent_crc(g_100.f7, "g_100.f7", print_hash_value);
    transparent_crc(g_112.f0, "g_112.f0", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_129.f0.f0, "g_129.f0.f0", print_hash_value);
    transparent_crc(g_129.f0.f1, "g_129.f0.f1", print_hash_value);
    transparent_crc(g_129.f0.f2, "g_129.f0.f2", print_hash_value);
    transparent_crc(g_129.f0.f3, "g_129.f0.f3", print_hash_value);
    transparent_crc(g_129.f0.f4, "g_129.f0.f4", print_hash_value);
    transparent_crc(g_129.f0.f5, "g_129.f0.f5", print_hash_value);
    transparent_crc(g_129.f0.f6, "g_129.f0.f6", print_hash_value);
    transparent_crc(g_129.f0.f7, "g_129.f0.f7", print_hash_value);
    transparent_crc(g_129.f1, "g_129.f1", print_hash_value);
    transparent_crc(g_129.f2, "g_129.f2", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_149.f1, "g_149.f1", print_hash_value);
    transparent_crc(g_149.f2, "g_149.f2", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_187.f0.f0, "g_187.f0.f0", print_hash_value);
    transparent_crc(g_187.f0.f1, "g_187.f0.f1", print_hash_value);
    transparent_crc(g_187.f0.f2, "g_187.f0.f2", print_hash_value);
    transparent_crc(g_187.f0.f3, "g_187.f0.f3", print_hash_value);
    transparent_crc(g_187.f0.f4, "g_187.f0.f4", print_hash_value);
    transparent_crc(g_187.f0.f5, "g_187.f0.f5", print_hash_value);
    transparent_crc(g_187.f0.f6, "g_187.f0.f6", print_hash_value);
    transparent_crc(g_187.f0.f7, "g_187.f0.f7", print_hash_value);
    transparent_crc(g_187.f1, "g_187.f1", print_hash_value);
    transparent_crc(g_187.f2, "g_187.f2", print_hash_value);
    transparent_crc(g_206.f0, "g_206.f0", print_hash_value);
    transparent_crc(g_206.f1, "g_206.f1", print_hash_value);
    transparent_crc(g_206.f2, "g_206.f2", print_hash_value);
    transparent_crc(g_206.f3, "g_206.f3", print_hash_value);
    transparent_crc(g_206.f4, "g_206.f4", print_hash_value);
    transparent_crc(g_206.f5, "g_206.f5", print_hash_value);
    transparent_crc(g_206.f6, "g_206.f6", print_hash_value);
    transparent_crc(g_206.f7, "g_206.f7", print_hash_value);
    transparent_crc(g_210.f0, "g_210.f0", print_hash_value);
    transparent_crc(g_210.f1, "g_210.f1", print_hash_value);
    transparent_crc(g_210.f2, "g_210.f2", print_hash_value);
    transparent_crc(g_210.f3, "g_210.f3", print_hash_value);
    transparent_crc(g_210.f4, "g_210.f4", print_hash_value);
    transparent_crc(g_210.f5, "g_210.f5", print_hash_value);
    transparent_crc(g_210.f6, "g_210.f6", print_hash_value);
    transparent_crc(g_210.f7, "g_210.f7", print_hash_value);
    transparent_crc(g_252.f0.f0, "g_252.f0.f0", print_hash_value);
    transparent_crc(g_252.f0.f1, "g_252.f0.f1", print_hash_value);
    transparent_crc(g_252.f0.f2, "g_252.f0.f2", print_hash_value);
    transparent_crc(g_252.f0.f3, "g_252.f0.f3", print_hash_value);
    transparent_crc(g_252.f0.f4, "g_252.f0.f4", print_hash_value);
    transparent_crc(g_252.f0.f5, "g_252.f0.f5", print_hash_value);
    transparent_crc(g_252.f0.f6, "g_252.f0.f6", print_hash_value);
    transparent_crc(g_252.f0.f7, "g_252.f0.f7", print_hash_value);
    transparent_crc(g_252.f1, "g_252.f1", print_hash_value);
    transparent_crc(g_252.f2, "g_252.f2", print_hash_value);
    transparent_crc(g_278.f0.f0, "g_278.f0.f0", print_hash_value);
    transparent_crc(g_278.f0.f1, "g_278.f0.f1", print_hash_value);
    transparent_crc(g_278.f0.f2, "g_278.f0.f2", print_hash_value);
    transparent_crc(g_278.f0.f3, "g_278.f0.f3", print_hash_value);
    transparent_crc(g_278.f0.f4, "g_278.f0.f4", print_hash_value);
    transparent_crc(g_278.f0.f5, "g_278.f0.f5", print_hash_value);
    transparent_crc(g_278.f0.f6, "g_278.f0.f6", print_hash_value);
    transparent_crc(g_278.f0.f7, "g_278.f0.f7", print_hash_value);
    transparent_crc(g_278.f1, "g_278.f1", print_hash_value);
    transparent_crc(g_278.f2, "g_278.f2", print_hash_value);
    transparent_crc(g_279.f0.f0, "g_279.f0.f0", print_hash_value);
    transparent_crc(g_279.f0.f1, "g_279.f0.f1", print_hash_value);
    transparent_crc(g_279.f0.f2, "g_279.f0.f2", print_hash_value);
    transparent_crc(g_279.f0.f3, "g_279.f0.f3", print_hash_value);
    transparent_crc(g_279.f0.f4, "g_279.f0.f4", print_hash_value);
    transparent_crc(g_279.f0.f5, "g_279.f0.f5", print_hash_value);
    transparent_crc(g_279.f0.f6, "g_279.f0.f6", print_hash_value);
    transparent_crc(g_279.f0.f7, "g_279.f0.f7", print_hash_value);
    transparent_crc(g_279.f1, "g_279.f1", print_hash_value);
    transparent_crc(g_279.f2, "g_279.f2", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_379.f0.f0, "g_379.f0.f0", print_hash_value);
    transparent_crc(g_379.f0.f1, "g_379.f0.f1", print_hash_value);
    transparent_crc(g_379.f0.f2, "g_379.f0.f2", print_hash_value);
    transparent_crc(g_379.f0.f3, "g_379.f0.f3", print_hash_value);
    transparent_crc(g_379.f0.f4, "g_379.f0.f4", print_hash_value);
    transparent_crc(g_379.f0.f5, "g_379.f0.f5", print_hash_value);
    transparent_crc(g_379.f0.f6, "g_379.f0.f6", print_hash_value);
    transparent_crc(g_379.f0.f7, "g_379.f0.f7", print_hash_value);
    transparent_crc(g_379.f1, "g_379.f1", print_hash_value);
    transparent_crc(g_379.f2, "g_379.f2", print_hash_value);
    transparent_crc(g_425.f0.f0, "g_425.f0.f0", print_hash_value);
    transparent_crc(g_425.f0.f1, "g_425.f0.f1", print_hash_value);
    transparent_crc(g_425.f0.f2, "g_425.f0.f2", print_hash_value);
    transparent_crc(g_425.f0.f3, "g_425.f0.f3", print_hash_value);
    transparent_crc(g_425.f0.f4, "g_425.f0.f4", print_hash_value);
    transparent_crc(g_425.f0.f5, "g_425.f0.f5", print_hash_value);
    transparent_crc(g_425.f0.f6, "g_425.f0.f6", print_hash_value);
    transparent_crc(g_425.f0.f7, "g_425.f0.f7", print_hash_value);
    transparent_crc(g_425.f1, "g_425.f1", print_hash_value);
    transparent_crc(g_425.f2, "g_425.f2", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_444.f0.f0, "g_444.f0.f0", print_hash_value);
    transparent_crc(g_444.f0.f1, "g_444.f0.f1", print_hash_value);
    transparent_crc(g_444.f0.f2, "g_444.f0.f2", print_hash_value);
    transparent_crc(g_444.f0.f3, "g_444.f0.f3", print_hash_value);
    transparent_crc(g_444.f0.f4, "g_444.f0.f4", print_hash_value);
    transparent_crc(g_444.f0.f5, "g_444.f0.f5", print_hash_value);
    transparent_crc(g_444.f0.f6, "g_444.f0.f6", print_hash_value);
    transparent_crc(g_444.f0.f7, "g_444.f0.f7", print_hash_value);
    transparent_crc(g_444.f1, "g_444.f1", print_hash_value);
    transparent_crc(g_444.f2, "g_444.f2", print_hash_value);
    transparent_crc(g_446.f0, "g_446.f0", print_hash_value);
    transparent_crc(g_446.f1, "g_446.f1", print_hash_value);
    transparent_crc(g_446.f2, "g_446.f2", print_hash_value);
    transparent_crc(g_455.f0.f0, "g_455.f0.f0", print_hash_value);
    transparent_crc(g_455.f0.f1, "g_455.f0.f1", print_hash_value);
    transparent_crc(g_455.f0.f2, "g_455.f0.f2", print_hash_value);
    transparent_crc(g_455.f0.f3, "g_455.f0.f3", print_hash_value);
    transparent_crc(g_455.f0.f4, "g_455.f0.f4", print_hash_value);
    transparent_crc(g_455.f0.f5, "g_455.f0.f5", print_hash_value);
    transparent_crc(g_455.f0.f6, "g_455.f0.f6", print_hash_value);
    transparent_crc(g_455.f0.f7, "g_455.f0.f7", print_hash_value);
    transparent_crc(g_455.f1, "g_455.f1", print_hash_value);
    transparent_crc(g_455.f2, "g_455.f2", print_hash_value);
    transparent_crc(g_504.f0, "g_504.f0", print_hash_value);
    transparent_crc(g_504.f1, "g_504.f1", print_hash_value);
    transparent_crc(g_508.f0.f0, "g_508.f0.f0", print_hash_value);
    transparent_crc(g_508.f0.f1, "g_508.f0.f1", print_hash_value);
    transparent_crc(g_508.f0.f2, "g_508.f0.f2", print_hash_value);
    transparent_crc(g_508.f0.f3, "g_508.f0.f3", print_hash_value);
    transparent_crc(g_508.f0.f4, "g_508.f0.f4", print_hash_value);
    transparent_crc(g_508.f0.f5, "g_508.f0.f5", print_hash_value);
    transparent_crc(g_508.f0.f6, "g_508.f0.f6", print_hash_value);
    transparent_crc(g_508.f0.f7, "g_508.f0.f7", print_hash_value);
    transparent_crc(g_508.f1, "g_508.f1", print_hash_value);
    transparent_crc(g_508.f2, "g_508.f2", print_hash_value);
    transparent_crc(g_553.f0.f0, "g_553.f0.f0", print_hash_value);
    transparent_crc(g_553.f0.f1, "g_553.f0.f1", print_hash_value);
    transparent_crc(g_553.f0.f2, "g_553.f0.f2", print_hash_value);
    transparent_crc(g_553.f0.f3, "g_553.f0.f3", print_hash_value);
    transparent_crc(g_553.f0.f4, "g_553.f0.f4", print_hash_value);
    transparent_crc(g_553.f0.f5, "g_553.f0.f5", print_hash_value);
    transparent_crc(g_553.f0.f6, "g_553.f0.f6", print_hash_value);
    transparent_crc(g_553.f0.f7, "g_553.f0.f7", print_hash_value);
    transparent_crc(g_553.f1, "g_553.f1", print_hash_value);
    transparent_crc(g_553.f2, "g_553.f2", print_hash_value);
    transparent_crc(g_572.f0, "g_572.f0", print_hash_value);
    transparent_crc(g_572.f1, "g_572.f1", print_hash_value);
    transparent_crc(g_648.f0, "g_648.f0", print_hash_value);
    transparent_crc(g_648.f1, "g_648.f1", print_hash_value);
    transparent_crc(g_648.f2, "g_648.f2", print_hash_value);
    transparent_crc(g_648.f3, "g_648.f3", print_hash_value);
    transparent_crc(g_648.f4, "g_648.f4", print_hash_value);
    transparent_crc(g_648.f5, "g_648.f5", print_hash_value);
    transparent_crc(g_648.f6, "g_648.f6", print_hash_value);
    transparent_crc(g_648.f7, "g_648.f7", print_hash_value);
    transparent_crc(g_658.f0.f0, "g_658.f0.f0", print_hash_value);
    transparent_crc(g_658.f0.f1, "g_658.f0.f1", print_hash_value);
    transparent_crc(g_658.f0.f2, "g_658.f0.f2", print_hash_value);
    transparent_crc(g_658.f0.f3, "g_658.f0.f3", print_hash_value);
    transparent_crc(g_658.f0.f4, "g_658.f0.f4", print_hash_value);
    transparent_crc(g_658.f0.f5, "g_658.f0.f5", print_hash_value);
    transparent_crc(g_658.f0.f6, "g_658.f0.f6", print_hash_value);
    transparent_crc(g_658.f0.f7, "g_658.f0.f7", print_hash_value);
    transparent_crc(g_658.f1, "g_658.f1", print_hash_value);
    transparent_crc(g_658.f2, "g_658.f2", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_781, "g_781", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
