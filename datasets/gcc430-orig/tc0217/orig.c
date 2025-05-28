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
   short f0;
   short f1;
   unsigned f2;
   int f3;
   const int f4;
   short f5;
   unsigned char f6;
   unsigned short f7;
   char f8;
};

struct S1 {
   unsigned short f0;
   const unsigned f1;
   unsigned f2;
   const char f3;
   const unsigned char f4;
};

struct S2 {
   unsigned char f0;
   unsigned f1;
   struct S1 f2;
   const int f3;
   int f4;
   unsigned f5;
   unsigned f6;
};

struct S3 {
   int f0;
   struct S2 f1;
   unsigned f2;
   const unsigned f3;
   struct S0 f4;
   char f5;
   short f6;
   short f7;
   int f8;
};

struct S4 {
   int f0;
   const unsigned f1;
   int f2;
   unsigned f3;
   short f4;
   struct S2 f5;
   const struct S1 f6;
   unsigned short f7;
   char f8;
};

struct S5 {
   int f0;
   const short f1;
   const unsigned char f2;
   unsigned char f3;
   unsigned short f4;
};

struct S6 {
   unsigned char f0;
   struct S2 f1;
   unsigned short f2;
   const char f3;
   const short f4;
   const int f5;
   unsigned f6;
   unsigned f7;
   struct S0 f8;
};


static struct S1 g_2 = {8UL,0x8EA5F34BL,6UL,-1L,6UL};
static unsigned g_30 = 0xAF2C41E7L;
static int g_46 = 0xB3C324F1L;
static int *g_45 = &g_46;
static struct S6 g_54 = {0x4CL,{0x81L,0x23569536L,{0x4B77L,0xFD1935D6L,1UL,-9L,255UL},1L,1L,0x2D36C477L,9UL},4UL,0L,-2L,0xB34D1E50L,0x5DEC9E90L,4UL,{0x92ABL,-5L,1UL,0xEC2AC01EL,0x5C98E270L,-5L,0x38L,0x13FDL,0x60L}};
static struct S6 *g_53 = &g_54;
static struct S6 g_56 = {1UL,{0xADL,9UL,{0x9327L,6UL,0x713FB69FL,-1L,0xB2L},1L,0xFDD8A099L,0xB685524DL,1UL},0x5681L,0xFFL,-1L,-1L,4294967287UL,6UL,{0x4926L,0xBA49L,0x677AA029L,0x2269D596L,0L,0x3445L,1UL,0xBC30L,0x89L}};
static struct S0 *g_98 = &g_56.f8;
static struct S0 g_104 = {9L,0x3C7CL,0xFD43417BL,0xAFA02BDAL,0x2A215982L,1L,0x48L,0xFF0DL,-1L};
static const int g_111 = 0xFD341B89L;
static const int *g_110 = &g_111;
static struct S3 g_119 = {0L,{0xC7L,0xD5BA451DL,{3UL,0xFD79E2B9L,4294967292UL,1L,0x2CL},-1L,0x03E04847L,4294967289UL,4294967295UL},0x927BDF23L,0x6724EC48L,{0xF612L,0L,0x364FACB0L,-1L,1L,0x0020L,0x51L,0xD38BL,0L},1L,4L,0x2AFDL,0x560A1D96L};
static unsigned char *g_149 = &g_104.f6;
static unsigned char **g_148 = &g_149;
static struct S5 g_175 = {1L,0x2A49L,0x46L,249UL,0x54D8L};
static struct S1 g_191 = {0x9031L,0x194BB3C6L,0xBCCF5C31L,0L,0xAAL};
static struct S1 *g_190 = &g_191;
static struct S5 g_202 = {0xAE7BCCAAL,0x314BL,0x9BL,0x3EL,65535UL};
static struct S5 *g_201 = &g_202;
static struct S4 g_221 = {0xF69C2A56L,4294967288UL,-10L,9UL,2L,{252UL,4294967295UL,{2UL,0UL,0x656C4C73L,0x8AL,0x26L},0x7A7DE28FL,6L,4294967293UL,1UL},{0xB577L,0x7DF0D530L,0xFB551B8BL,0x6BL,252UL},0x569DL,0x78L};
static short *g_285 = &g_104.f1;
static struct S5 ***g_286 = (void*)0;
static unsigned short *g_301 = &g_56.f8.f7;
static unsigned short **g_300 = &g_301;
static char *g_323 = &g_119.f4.f8;
static char **g_322 = &g_323;
static unsigned g_328 = 1UL;
static unsigned char g_348 = 0x86L;
static const unsigned char g_352 = 0UL;
static struct S2 *g_401 = (void*)0;
static struct S6 ***g_525 = (void*)0;
static struct S1 g_542 = {65534UL,1UL,0x24CAEF59L,0x76L,1UL};
static struct S6 g_677 = {0UL,{0xEFL,0UL,{7UL,0xB7264E23L,0xB878E805L,0x12L,5UL},-9L,0xAF853FB1L,4294967295UL,0x33E13D42L},1UL,1L,0xAC72L,0xB6B6C63AL,0UL,8UL,{0x57E9L,0xFB94L,4294967287UL,3L,-5L,0x7803L,0UL,0xE368L,0L}};



static int func_1(void);
static struct S0 * func_3(const short p_4, unsigned short p_5);
static unsigned char func_7(unsigned char p_8, struct S2 p_9);
static struct S2 func_11(struct S0 p_12, int p_13, struct S0 * p_14, struct S4 p_15, struct S0 * p_16);
static struct S0 func_17(struct S5 p_18);
static unsigned short func_22(struct S0 * p_23, short p_24, const struct S0 * const p_25);
static struct S0 * func_26(unsigned char p_27);
static int * func_31(unsigned char p_32);
static short func_33(const struct S6 p_34);
static unsigned func_35(const char p_36, const short p_37);
static int func_1(void)
{
    const int l_6 = (-6L);
    struct S0 **l_691 = &g_98;
    (*l_691) = (g_2 , func_3(l_6, g_2.f3));

    ;
    ;
    ;

    ;
    ;
    return (*g_45);
}







static struct S0 * func_3(const short p_4, unsigned short p_5)
{
    unsigned l_10 = 0x6F444694L;
    struct S5 l_19 = {5L,0x9B61L,2UL,248UL,65529UL};
    unsigned l_476 = 4294967294UL;
    struct S0 *l_477 = &g_104;
    struct S4 l_478 = {0x6EF5D354L,0xF73A05CBL,0x21088C18L,1UL,0x8CFAL,{8UL,3UL,{65535UL,0x6942BF8EL,0xF6FE72E2L,-1L,255UL},1L,1L,0x26513E2CL,0x54E89FD8L},{0UL,0UL,0UL,1L,0xE5L},0xADB6L,6L};
    int *l_686 = (void*)0;
    int *l_687 = &g_119.f8;
    struct S4 **l_688 = (void*)0;
    struct S4 *l_690 = &l_478;
    struct S4 **l_689 = &l_690;
    (*l_687) = ((func_7(l_10, func_11(func_17(l_19), ((0x494DBC19L <= (safe_mod_func_uint8_t_u_u((*g_149), 253UL))) == ((safe_lshift_func_int8_t_s_s((-3L), 6)) & (l_19.f4 == (safe_mul_func_int16_t_s_s(((((g_175 , p_4) || l_19.f0) != 2UL) , p_4), l_476))))), l_477, l_478, l_477)) > l_476) | g_677.f1.f6);

    ;
    ;

    ;
    ;
    (*l_689) = &l_478;
    return &g_104;


}







static unsigned char func_7(unsigned char p_8, struct S2 p_9)
{
    int **l_558 = &g_45;
    unsigned char l_562 = 0x0AL;
    char *l_568 = &g_221.f8;
    struct S0 l_579 = {0L,0xC35DL,4294967295UL,0xAD03DED5L,0xB1A535FDL,0L,251UL,0x25EDL,-1L};
    unsigned short l_580 = 0x7B27L;
    struct S5 l_589 = {1L,-7L,1UL,0xD8L,0xFD60L};
    unsigned l_619 = 0x1A522DC9L;
    struct S3 l_660 = {7L,{249UL,1UL,{0xD9CDL,4UL,0UL,5L,0x6AL},1L,2L,0UL,4294967294UL},8UL,4294967288UL,{0x9D9DL,0xB533L,0UL,0x7150F918L,1L,9L,3UL,1UL,0x48L},5L,-8L,0x4641L,1L};
    struct S2 *l_667 = &g_119.f1;
    struct S6 l_683 = {249UL,{251UL,1UL,{65535UL,0xE79CC23FL,0xC32D3200L,-10L,1UL},1L,0x4369418CL,0x478960A6L,0x9E5E2DC9L},1UL,-1L,0x6DCCL,0xA651EB8EL,0xCC1AD08BL,0xB4C11250L,{0L,0xB22BL,0x8BE1ABF8L,0xA353BB13L,0xD03EA157L,-9L,0xE2L,1UL,0xDAL}};
    (*l_558) = func_31(((**g_148) = p_9.f1));

    ;
    for (g_119.f1.f2.f0 = (-22); (g_119.f1.f2.f0 > 40); g_119.f1.f2.f0 = safe_add_func_uint16_t_u_u(g_119.f1.f2.f0, 2))
    {
        unsigned short l_561 = 0x60E8L;
        struct S4 *l_565 = (void*)0;
        char *l_567 = &g_119.f4.f8;
        char **l_566 = &l_567;
        char **l_569 = (void*)0;
        char **l_570 = (void*)0;
        char **l_571 = &l_568;
        unsigned *l_572 = &g_328;
        struct S4 **l_573 = &l_565;
        int *l_574 = (void*)0;
        struct S2 l_590 = {0x46L,4294967294UL,{0UL,0x3C85FC86L,0x7EE0ABC0L,0x2EL,1UL},-1L,0xC6DD861AL,0UL,0UL};
        struct S5 l_595 = {-1L,1L,0x9EL,9UL,65526UL};
        struct S0 **l_603 = &g_98;
        const int *l_615 = &g_54.f8.f3;
        const struct S6 l_620 = {0x75L,{255UL,0UL,{0xF933L,0x08F0C906L,0xF3F6106CL,0x13L,1UL},-9L,0x8A5C716EL,0xED215209L,4294967295UL},1UL,-1L,0L,0xB9D50C60L,0xFAEC8065L,0UL,{0L,1L,1UL,-1L,0x82DB7443L,-1L,0UL,0xDABEL,0x11L}};
        struct S1 **l_630 = &g_190;
        int *l_666 = &l_595.f0;
    }
    if (func_35((**l_558), (safe_mod_func_int16_t_s_s((**l_558), (**l_558)))))
    {
        struct S6 *l_672 = &g_56;
        struct S6 **l_673 = (void*)0;
        struct S6 **l_674 = (void*)0;
        struct S6 **l_675 = (void*)0;
        struct S6 *l_676 = &g_677;
        struct S1 *l_678 = &g_54.f1.f2;
        struct S1 **l_679 = &g_190;
        struct S1 **l_680 = &l_678;
        int *l_684 = &g_119.f8;
        l_676 = (g_53 = l_672);

        ;
        ;
        (*l_680) = ((*l_679) = l_678);

        ;
        g_56.f1.f4 = ((**l_558) = (safe_add_func_uint8_t_u_u(249UL, 5UL)));
        (*l_684) = (l_683 , (func_33((*g_53)) != 0x4AE9A9DFL));

        ;
    }
    else
    {
        int *l_685 = &l_660.f0;
        (*l_685) = func_33(l_683);

        ;
    }

    ;
    ;
    ;
    return p_9.f0;
}







static struct S2 func_11(struct S0 p_12, int p_13, struct S0 * p_14, struct S4 p_15, struct S0 * p_16)
{
    struct S2 **l_515 = &g_401;
    int l_548 = 0x698DBB70L;
    const struct S6 l_553 = {251UL,{0xE1L,0UL,{65535UL,0x3EA1F8DDL,4294967287UL,-7L,255UL},0L,0x7C5CB3BDL,4294967292UL,4294967295UL},0x70B7L,0x1FL,0x9EEAL,0x83C53D2EL,0xB54765E7L,0xEC938991L,{0xC786L,1L,0xC12995DEL,-7L,0x441937A6L,-1L,0xEDL,0xF0A4L,0x06L}};
    for (p_15.f2 = (-12); (p_15.f2 >= 17); p_15.f2++)
    {
        unsigned short l_492 = 1UL;
        char ***l_506 = &g_322;
        struct S6 ***l_521 = (void*)0;
        struct S1 *l_541 = &g_542;
        char l_549 = 0L;
        if (p_15.f6.f3)
        {
            const struct S3 *l_545 = &g_119;
            int *l_550 = &g_221.f5.f4;
            for (g_175.f0 = 25; (g_175.f0 >= 13); g_175.f0 = safe_sub_func_int16_t_s_s(g_175.f0, 6))
            {
                struct S2 *l_496 = &g_54.f1;
                int l_503 = 5L;
                int *l_505 = &g_119.f1.f4;
                if (((*g_45) = (safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((p_12.f7 & g_56.f0), (**g_148))), (**g_148)))))
                {
                    int **l_487 = &g_45;
                    const int **l_488 = &g_110;
                    const struct S6 l_491 = {0x3AL,{0x1FL,0x49FDF0E9L,{9UL,0x8EC34C39L,4294967293UL,0xDAL,1UL},0xA17DFEC0L,0x7532FE5EL,0x50D4D9ADL,7UL},65534UL,8L,0x74C2L,-4L,0UL,4294967293UL,{0x7E96L,0x96DDL,0x616DB7A3L,0x22A571AAL,0xF79F1CB2L,0x1730L,0x4AL,0x28C2L,-1L}};
                    (*l_487) = func_31(((*g_149) = (**g_148)));

                    ;
                    (*l_488) = &g_111;

                    ;
                    if ((safe_mod_func_int8_t_s_s(0x96L, 0x5AL)))
                    {
                        unsigned *l_493 = (void*)0;
                        unsigned *l_494 = &g_119.f1.f6;
                        int *l_495 = &g_119.f4.f3;
                        struct S2 **l_497 = (void*)0;
                        struct S2 **l_498 = &g_401;
                        struct S3 *l_499 = &g_119;
                        struct S3 **l_500 = &l_499;
                        struct S1 **l_501 = &g_190;
                        (*l_495) = (p_15.f5.f4 = (func_33(l_491) != (p_15.f3 = ((*l_494) = l_492))));

                        ;
                        (*l_498) = l_496;

                        ;
                        (*l_500) = l_499;
                        (*l_501) = &g_2;

                        ;
                    }
                    else
                    {
                        unsigned short l_502 = 0x8E28L;
                        l_503 = ((*g_45) = l_502);
                    }

                    ;
                }
                else
                {
                    int **l_504 = (void*)0;
                    l_505 = func_31(p_15.f6.f0);

                    ;
                }

                ;
            }
            (*g_45) = (((void*)0 != l_506) & p_15.f6.f2);
            for (g_54.f0 = 14; (g_54.f0 < 6); g_54.f0 = safe_sub_func_int16_t_s_s(g_54.f0, 1))
            {
                const unsigned char l_516 = 246UL;
                struct S6 ****l_522 = &l_521;
                struct S6 ***l_524 = (void*)0;
                struct S6 ****l_523 = &l_524;
                struct S2 *l_540 = &g_56.f1;
                if ((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((*g_301), 13)) && ((void*)0 == l_515)) || p_15.f6.f4), l_516)), (((safe_rshift_func_int8_t_s_s(((((p_15.f5 , 0x1369L) < (safe_mul_func_uint16_t_u_u(func_35((((*l_523) = ((*l_522) = l_521)) == g_525), p_12.f3), p_15.f2))) == p_15.f7) > (**g_300)), p_15.f5.f2.f2)) | p_15.f6.f1) ^ 0xCEA7L))))
                {
                    short l_535 = 0x362CL;
                    for (g_56.f2 = 21; (g_56.f2 != 2); g_56.f2 = safe_sub_func_uint8_t_u_u(g_56.f2, 3))
                    {
                        struct S0 **l_533 = &g_98;
                        struct S0 ***l_532 = &l_533;
                        const struct S6 l_534 = {0x5EL,{6UL,4294967286UL,{0xDB52L,9UL,0xD1533BEDL,-4L,0xFEL},-1L,0xA8D9F21FL,4294967291UL,0xC3F81B04L},0x96F1L,0xB2L,-4L,-5L,0UL,4294967292UL,{0L,0x1F76L,4294967291UL,0x4E367F79L,1L,1L,0UL,6UL,0x26L}};
                        unsigned *l_536 = &g_56.f6;
                        int *l_537 = &g_119.f8;
                        int **l_538 = (void*)0;
                        int **l_539 = &l_537;
                        (*l_537) = (((p_15 , l_516) > (safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((((*l_532) = &g_98) != (void*)0) == p_12.f7), ((func_33(l_534) < ((*l_536) = ((+l_535) , 4294967294UL))) | p_12.f2))), p_13))) >= (-1L));
                        if (p_15.f5.f3)
                            break;
                        (*l_539) = func_31(p_12.f5);

                        ;
                    }
                    (*l_515) = l_540;

                    ;
                    g_190 = (l_541 = &g_191);

                    ;
                    ;
                    for (p_13 = 0; (p_13 != 5); p_13 = safe_add_func_int32_t_s_s(p_13, 3))
                    {
                        const struct S3 **l_546 = &l_545;
                        int l_547 = (-1L);
                        (*l_546) = l_545;
                        l_547 = p_12.f5;
                    }
                }
                else
                {
                    (*g_45) = l_492;
                    p_13 = l_548;
                }
                if (l_549)
                    continue;
                (*l_515) = (void*)0;

                ;
            }

            ;
            (*l_550) = ((*g_45) = p_15.f5.f6);
        }
        else
        {
            int *l_554 = &g_104.f3;
            int *l_555 = &g_54.f8.f3;
            (*l_555) = ((*l_554) = ((((**g_300) < ((*g_190) , ((safe_mul_func_uint8_t_u_u((p_15.f1 | (0x81D57EF8L <= func_33(l_553))), ((*g_323) = p_12.f2))) ^ 250UL))) == 65534UL) <= 0x08L));
        }

        ;
    }


    ;
    ;
    for (g_56.f7 = 18; (g_56.f7 >= 35); ++g_56.f7)
    {
        (*g_45) = 0xF654211EL;
    }
    return g_56.f1;
}







static struct S0 func_17(struct S5 p_18)
{
    int l_115 = 0x90784F3FL;
    const struct S6 l_120 = {0x8EL,{0x21L,0x4E969EF0L,{5UL,4294967288UL,1UL,-6L,255UL},-1L,0xEF351D79L,0xC9B6659CL,0x81E7944DL},0x970CL,0x73L,0x8853L,1L,4294967290UL,4294967295UL,{-5L,0x6DFAL,0xAC640EFCL,-1L,-7L,0x9096L,0xFEL,0x41CEL,0x96L}};
    int *l_127 = &g_119.f1.f4;
    int **l_128 = &l_127;
    unsigned short *l_129 = &g_56.f2;
    struct S4 l_136 = {0x7E32B0C3L,0x814F9EFFL,-1L,4294967295UL,-6L,{255UL,4294967295UL,{8UL,0x0FD4907AL,1UL,0x98L,0xFBL},0x52BCB22FL,0x480493E7L,0x09DDD6F6L,1UL},{0x8748L,4294967287UL,0x74F29AA2L,1L,0UL},0x0F72L,0L};
    unsigned char * const l_141 = &g_56.f8.f6;
    unsigned char * const *l_140 = &l_141;
    unsigned char **l_153 = &g_149;
    struct S0 *l_166 = (void*)0;
    const unsigned char l_235 = 0x3EL;
    short l_238 = 0L;
    struct S0 *l_261 = &g_119.f4;
    struct S6 *l_311 = &g_54;
    unsigned char l_319 = 255UL;
    const struct S0 * const l_416 = &g_104;
    unsigned *l_420 = &g_30;
    unsigned **l_419 = &l_420;
    struct S3 *l_459 = (void*)0;
    struct S3 **l_458 = &l_459;
    char * const *l_466 = &g_323;
    char * const **l_465 = &l_466;
    struct S0 l_469 = {0L,0x2F34L,0xB5B707F0L,0xB5CCA8AEL,-1L,0x0597L,4UL,65530UL,0L};
    for (p_18.f4 = 0; (p_18.f4 <= 9); p_18.f4 = safe_add_func_int16_t_s_s(p_18.f4, 1))
    {
        char l_101 = 0xDCL;
        short *l_102 = &g_54.f8.f0;
        const struct S0 * const l_103 = &g_104;
        int *l_116 = &g_56.f8.f3;
        (*l_116) = ((0x330FL < g_2.f2) & (func_22(func_26(g_2.f2), ((*l_102) = l_101), l_103) && ((safe_add_func_uint32_t_u_u((((l_115 || (g_56.f8.f5 == l_101)) && 0x57ACE02BL) > g_54.f8.f8), l_115)) , p_18.f0)));


    }

    ;

    if (((safe_mod_func_uint32_t_u_u(((g_119 , func_22(((((func_33(l_120) ^ 0xA35DL) & (safe_mul_func_int16_t_s_s((g_119 , 0x9369L), (safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((*l_129) = ((g_54.f1 , (l_120.f8 , ((*l_128) = l_127))) != &g_111)), p_18.f0)) == g_56.f3), p_18.f4))))) , (*g_53)) , &g_104), g_119.f1.f4, &g_104)) >= l_120.f1.f2.f2), p_18.f1)) < g_104.f8))
    {
        int l_130 = 1L;
        const struct S6 l_133 = {246UL,{253UL,0xDFA2A7B0L,{8UL,4294967295UL,4294967290UL,0xDDL,255UL},0x69C6987DL,-5L,4294967295UL,8UL},0x38DFL,0xD1L,-9L,0x7EC4DDADL,0xDD46AAC3L,0x27199927L,{0L,0x57EFL,8UL,1L,-1L,0x6FD8L,0x33L,0UL,0x22L}};
        unsigned l_137 = 0xD5561ADEL;
        unsigned char **l_180 = &g_149;
        char *l_183 = (void*)0;
        int l_203 = 0x40BBFAF3L;
        struct S5 l_205 = {0x107BA0E5L,0xFC07L,246UL,0x57L,65531UL};
        struct S3 l_236 = {0L,{0x94L,0x7F389543L,{0x1519L,4294967292UL,0x8E5B3D8CL,0x3DL,0x21L},1L,-1L,0xF3AAF64CL,0x364BA101L},0x34B46BF9L,0xCEEF5B24L,{0x6DCCL,0L,0x6DFC6391L,0x6B8FB7B2L,-1L,0x309EL,0x7AL,9UL,0L},1L,0L,0x84C7L,0x6095963CL};
        int *l_252 = &l_236.f1.f4;
        unsigned l_260 = 0x2C7D1E4DL;
        struct S0 *l_264 = &g_104;
        short *l_284 = &g_54.f8.f0;
        struct S5 *l_288 = &l_205;
        const struct S5 l_362 = {-1L,0L,255UL,0x6CL,0x5C1AL};
        struct S2 *l_402 = &g_54.f1;
        const struct S6 l_431 = {0x3BL,{0xDCL,1UL,{8UL,1UL,0x8501E517L,0L,255UL},0x20BBECF7L,0x9ABA5912L,0x6E3C59CDL,4294967287UL},0x4357L,0x95L,-9L,0x97956FA7L,0UL,1UL,{1L,0xF9E3L,0x8959F242L,0xE4AFBCB5L,-1L,0x61C3L,255UL,6UL,0xE9L}};
        if (((*g_98) , (((*l_127) < ((l_130 && ((safe_lshift_func_uint8_t_u_u(l_130, func_33(l_133))) , (((*l_129) = (safe_add_func_int16_t_s_s(p_18.f2, ((l_136 , ((void*)0 != &l_127)) == l_137)))) ^ 65535UL))) , (*l_127))) != 0x0A5AL)))
        {
            unsigned char ** const l_147 = (void*)0;
            int l_167 = 9L;
            struct S6 * const l_171 = &g_54;
            const struct S4 l_208 = {0x8E1BFBA2L,0UL,0x9C743024L,0UL,0x5562L,{255UL,5UL,{65533UL,0UL,4294967293UL,0L,255UL},1L,-10L,0x7D87FD60L,0xBD42E03EL},{0xB345L,0UL,0x1C3836FFL,0L,255UL},0UL,0x8FL};
            struct S3 l_216 = {1L,{0x53L,0xD646BEEDL,{0x1973L,4294967287UL,4294967288UL,0x26L,1UL},1L,0xC63DF845L,0x019ACC03L,4294967292UL},0x941986A9L,0UL,{8L,0x68A6L,0xDACA1B0BL,0x837F0132L,0x518DC319L,0xD9D1L,0x9BL,0UL,-1L},0xC3L,8L,0x95A8L,1L};
            const struct S0 * const l_266 = &l_216.f4;
            const char l_275 = 0x64L;
            unsigned short l_276 = 0xFF30L;
            struct S5 ***l_287 = (void*)0;
            struct S1 **l_292 = &g_190;
            const unsigned char *l_351 = &g_352;
            const struct S3 *l_355 = (void*)0;
            const struct S3 **l_354 = &l_355;
            struct S4 *l_356 = &g_221;
            short l_361 = 0x1912L;
            for (g_56.f6 = 0; (g_56.f6 != 18); ++g_56.f6)
            {
                unsigned char * const **l_142 = &l_140;
                unsigned char **l_150 = (void*)0;
                unsigned char ***l_151 = (void*)0;
                unsigned char ***l_152 = &g_148;
                char *l_168 = &g_104.f8;
                const char *l_182 = &g_56.f1.f2.f3;
                const char **l_181 = &l_182;
                char **l_184 = (void*)0;
                char **l_185 = &l_183;
                struct S4 l_194 = {-1L,4294967287UL,0xE8B6F4C6L,0x71ABB76BL,-4L,{0UL,0x65A340AFL,{0x7372L,0x4AA46725L,0x84AE966BL,-7L,6UL},3L,0L,4294967295UL,0x562337D7L},{65530UL,0x0DBBB141L,4UL,-1L,0xBFL},0xD3B3L,-3L};
                struct S1 **l_247 = &g_190;
                char l_248 = 0x5EL;
                int *l_253 = &l_216.f1.f4;
                struct S6 *l_265 = (void*)0;
                (*l_142) = l_140;
            }
            if ((*l_252))
            {
                struct S6 **l_312 = (void*)0;
                struct S6 **l_313 = &l_311;
                char *l_314 = &g_56.f8.f8;
                int l_326 = (-8L);
                int l_327 = (-4L);
                if (((*l_252) = (safe_add_func_uint8_t_u_u((p_18.f3 < 9UL), (safe_mul_func_uint16_t_u_u((((*g_285) ^ (safe_mul_func_int8_t_s_s(((*l_314) = ((((*l_313) = l_311) == (((*g_53) , l_120) , (void*)0)) != (0x3FB5A29FL >= 0x29240AD3L))), 0x20L))) ^ 0x54L), 0xCAD7L))))))
                {
                    char **l_324 = &g_323;
                    char ***l_325 = &l_324;
                    g_328 = (safe_add_func_uint16_t_u_u((**l_128), ((safe_mul_func_uint8_t_u_u(((l_319 <= (safe_mul_func_uint8_t_u_u(((p_18.f3 = (((l_326 = (g_322 == ((*l_325) = l_324))) , l_183) == ((*g_322) = (*g_322)))) || (1L >= p_18.f2)), p_18.f4))) == 3L), l_327)) > 0xEB0B07FAL)));
                }
                else
                {
                    const unsigned l_337 = 0x72A57CDBL;
                    unsigned *l_346 = &l_136.f5.f6;
                    short l_347 = 0xDAC9L;
                    for (g_221.f5.f4 = 0; (g_221.f5.f4 == (-17)); --g_221.f5.f4)
                    {
                        struct S6 **l_331 = (void*)0;
                        struct S6 ***l_332 = &l_313;
                        struct S3 *l_334 = &l_216;
                        struct S3 **l_333 = &l_334;
                        (*l_332) = l_331;

                        ;
                        (*l_333) = &l_216;
                        (*l_252) = ((((*g_285) && ((!((safe_sub_func_uint32_t_u_u((l_327 != l_216.f4.f4), (0x15L && ((g_104.f8 > g_54.f6) <= (*g_285))))) != (((((*g_323) = ((*l_314) = 0xC2L)) > l_337) , (void*)0) != (void*)0))) , p_18.f4)) >= (*l_252)) , 0xE5590363L);
                    }

                    ;
                    (*l_127) = (safe_sub_func_int16_t_s_s(5L, (l_216.f4.f3 = ((safe_mul_func_uint16_t_u_u(p_18.f3, (-1L))) | ((**l_292) , ((safe_rshift_func_uint8_t_u_u(((0xDBC2BC29L < ((*l_346) = l_216.f4.f2)) && g_221.f5.f1), l_347)) ^ ((func_33(l_133) > 0xB4AFF16DL) <= 0x06L)))))));
                }

                ;
            }
            else
            {
                const short l_349 = 0x57E9L;
                const struct S0 l_350 = {-2L,1L,2UL,-1L,0xA7CFC120L,4L,0UL,0xFED7L,0x9CL};
                unsigned char *l_353 = &g_56.f1.f0;
                int l_358 = (-4L);
                g_348 = 2L;
                (*g_45) = func_35(l_349, p_18.f4);
                (*l_128) = (void*)0;

                ;
                if ((((l_351 = (l_350 , (*g_148))) != l_353) < func_35((251UL > 0UL), (*g_285))))
                {
                    struct S4 **l_357 = &l_356;
                    (*l_128) = func_31((p_18.f1 , ((void*)0 != l_354)));

                    ;
                    (*l_357) = l_356;
                }
                else
                {
                    (*l_128) = &l_167;

                    ;
                    l_358 = 0x232F920EL;
                    (*l_128) = &l_203;

                    ;
                }

                ;
                ;
            }

            ;
            ;
            (*l_128) = func_31(func_35((safe_mod_func_int32_t_s_s(l_361, (((**l_128) | 1UL) ^ 0L))), (l_362 , (*g_285))));

            ;
            for (g_56.f6 = 0; (g_56.f6 > 8); ++g_56.f6)
            {
                const unsigned char l_365 = 0x39L;
                (*l_127) = (*g_45);
                (*g_45) = func_35(l_365, p_18.f3);
            }
        }
        else
        {
            struct S6 **l_375 = (void*)0;
            struct S6 ***l_374 = &l_375;
            const struct S0 * const l_376 = &l_120.f8;
            int l_403 = 0x2449341EL;
            unsigned l_411 = 4294967287UL;
            struct S0 *l_415 = &g_56.f8;
            const unsigned l_432 = 0UL;
            unsigned l_440 = 0xF1600EFCL;
            unsigned short l_460 = 1UL;
            struct S3 **l_468 = &l_459;
            p_18.f0 = ((*l_127) = p_18.f4);
            (*g_45) = ((((*g_45) | (safe_rshift_func_uint8_t_u_s(p_18.f1, 1))) && (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(((&g_53 == ((*l_374) = &g_53)) == func_22(&g_104, p_18.f2, l_376)), p_18.f0)) == (-4L)) ^ 1UL), (*l_252))), 0x8F53L))) ^ 0xD0L);

            ;
            for (l_236.f1.f2.f0 = 0; (l_236.f1.f2.f0 <= 20); l_236.f1.f2.f0 = safe_add_func_int32_t_s_s(l_236.f1.f2.f0, 3))
            {
                const struct S5 *l_380 = &l_362;
                const struct S5 **l_379 = &l_380;
                struct S1 l_400 = {0xE359L,1UL,0UL,0xFDL,0x6CL};
                struct S2 l_447 = {0x28L,0x82944D84L,{65531UL,0x30631D7EL,0x5B4DA3F9L,-3L,255UL},0xD7F3A473L,0x32D81B39L,0x3FEB64B9L,0x2C9F82D4L};
                unsigned **l_461 = &l_420;
                if ((((p_18.f4 , ((((void*)0 == l_379) && (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s((((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((!(safe_add_func_int8_t_s_s(func_35((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((*g_323), ((safe_sub_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(p_18.f0, (((l_400 , p_18.f2) , g_401) == l_402))) , 0x1A9DL), (**g_300))) , (*g_323)) | 0xCFL), 65528UL)) || 0xAAE5L))), l_403)), (*l_127)), (**g_148)))), 12)) == (**g_300)), 5)) == p_18.f4) , 0x89A5L))), 11))) > 0x1923C483L)) != 0UL) != 1UL))
                {
                    struct S4 *l_404 = &l_136;
                    struct S4 **l_405 = (void*)0;
                    struct S4 **l_406 = &l_404;
                    struct S0 l_408 = {0x1E17L,0xCC15L,0xED46774AL,0xBB8BBE3EL,-7L,0L,255UL,0x11CBL,0L};
                    unsigned *l_412 = &l_136.f5.f6;
                    (*l_406) = l_404;
                    if ((safe_unary_minus_func_uint32_t_u((l_408 , (((safe_lshift_func_int16_t_s_u(l_411, 13)) < ((p_18 , g_54.f6) >= ((*l_412) = p_18.f0))) & (*l_252))))))
                    {
                        unsigned ***l_421 = &l_419;
                        (*l_252) = ((safe_rshift_func_uint16_t_u_s(0x28EFL, func_22(l_415, (*g_285), l_416))) <= ((((((safe_rshift_func_int16_t_s_u(p_18.f2, 11)) && l_408.f2) ^ ((1UL >= (*g_323)) | 4L)) > p_18.f3) , g_119.f4.f6) | l_400.f4));
                        (*l_127) = (0xEF21L <= (*l_127));
                        (*l_421) = l_419;
                        (*g_45) = ((**l_128) = (-10L));
                    }
                    else
                    {
                        struct S0 **l_422 = &l_166;
                        struct S0 **l_423 = &l_415;
                        (*l_423) = ((*l_422) = l_415);

                        ;
                    }
                    (*l_406) = (void*)0;

                    ;
                }
                else
                {
                    (*l_127) = (*g_45);
                }
                if (((safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(g_56.f8.f4)), (func_33(l_431) && func_35(l_432, (+((0x6959E3EAL & (((safe_unary_minus_func_int16_t_s(func_33((*g_53)))) & ((*l_129) = ((*g_301) = (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(((void*)0 != g_286), l_440)) ^ (*g_323)) | p_18.f2), 0x0BB0L)), l_411))))) != 0xAB64B1ADL)) >= (*l_252))))))), 0x78L)), 65535UL)) && (*l_252)))
                {
                    for (g_119.f1.f1 = 0; (g_119.f1.f1 != 40); ++g_119.f1.f1)
                    {
                        unsigned short l_452 = 0x52BCL;
                        int *l_453 = &g_202.f0;
                        (*l_453) = ((*l_252) = ((*l_127) = (2L & ((*l_264) , (safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(p_18.f1, func_33((*g_53)))) >= p_18.f4), (l_447 , (((((**g_322) = (*l_252)) <= (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((*g_149) ^ l_452), 0)), g_221.f5.f1))) < p_18.f3) , (*g_285)))))))));
                    }
                }
                else
                {
                    int *l_454 = &l_136.f5.f4;
                    struct S3 *l_457 = &l_236;
                    struct S3 **l_456 = &l_457;
                    struct S3 ***l_455 = &l_456;
                    unsigned ***l_462 = &l_419;
                    (*l_128) = l_454;

                    ;
                    (*l_462) = (((((*l_455) = (g_54.f1.f2.f2 , (void*)0)) == l_458) || ((*l_454) = (p_18.f0 = l_460))) , l_461);

                    ;
                    for (g_56.f1.f0 = 0; (g_56.f1.f0 != 2); g_56.f1.f0 = safe_add_func_int32_t_s_s(g_56.f1.f0, 3))
                    {
                        char * const ***l_467 = &l_465;
                        (*l_455) = (((((*l_467) = l_465) == (void*)0) , p_18) , l_468);

                        ;
                    }

                    ;
                    (*l_252) = (*g_45);
                }
                if (p_18.f2)
                    break;
            }

            ;
            ;
        }

        ;
        ;
    }
    else
    {
        (*g_45) = ((*l_127) = (*g_45));
    }


    ;
    ;
    (*l_127) = (-5L);
    return l_469;
}







static unsigned short func_22(struct S0 * p_23, short p_24, const struct S0 * const p_25)
{
    struct S1 *l_105 = &g_2;
    struct S1 **l_106 = &l_105;
    struct S2 l_107 = {251UL,0UL,{0x74A2L,0x506B0F82L,4294967295UL,0x0EL,0xDCL},0xB63D1979L,0x441F9110L,0x65574E9DL,0x38A0F698L};
    struct S4 l_108 = {0L,1UL,0xB74F9B40L,0xF3023DF1L,0L,{0x60L,9UL,{0UL,0xD6D3DB75L,1UL,0xFDL,255UL},0x92663875L,0x3E32F461L,0xB06F0957L,0UL},{5UL,0xCB53B084L,4294967294UL,0x0AL,0xE9L},0UL,-1L};
    const int *l_109 = &l_108.f5.f3;
    const int **l_112 = &l_109;
    (*l_106) = l_105;
    (*l_112) = (g_110 = ((func_35(g_54.f8.f3, g_56.f1.f3) , ((l_107 , l_108) , (**l_106))) , l_109));

    ;
    return g_56.f1.f2.f1;


}







static struct S0 * func_26(unsigned char p_27)
{
    int *l_90 = &g_54.f8.f3;
    struct S6 l_93 = {0x58L,{250UL,0x10B938EFL,{7UL,0xAA39097EL,4294967295UL,-1L,0xABL},-4L,0xB79693F4L,1UL,0UL},0xA46DL,0x38L,-7L,-1L,4294967295UL,0x41C5C58DL,{0x16B2L,-4L,0UL,0xAEF5F9DBL,-1L,2L,246UL,5UL,-5L}};
    char *l_94 = &g_54.f8.f8;
    short l_95 = 0xC1ADL;
    unsigned char *l_96 = &g_54.f0;
    struct S0 *l_97 = &l_93.f8;
    for (g_2.f0 = 0; (g_2.f0 < 37); ++g_2.f0)
    {
        int **l_77 = &g_45;
        g_30 = 0xF859E226L;
        (*l_77) = func_31(g_2.f1);

        ;
        (*g_45) = (0x8C49L > g_2.f0);
    }
    if (((*g_45) = (safe_lshift_func_uint8_t_u_s(((*l_96) = (safe_sub_func_int16_t_s_s(((-1L) || (safe_sub_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(9L, (((((safe_sub_func_uint16_t_u_u(g_30, (safe_mul_func_int8_t_s_s((((void*)0 != l_90) , ((*l_94) = (safe_rshift_func_int16_t_s_u((((l_93 , ((((l_93.f1 , &l_90) == (g_54.f1 , &g_45)) < p_27) , g_54.f1.f6)) && 0x996BL) & (*g_45)), (*l_90))))), p_27)))) , l_95) < p_27) , p_27) == g_54.f1.f3))) == (*l_90)), g_56.f1.f2.f1))), 0x931DL))), p_27))))
    {
        return g_98;


    }
    else
    {
        for (g_56.f1.f0 = 0; (g_56.f1.f0 >= 25); g_56.f1.f0 = safe_add_func_int32_t_s_s(g_56.f1.f0, 2))
        {
            return g_98;


        }
    }
    return g_98;


}







static int * func_31(unsigned char p_32)
{
    int l_40 = 0x977B08CCL;
    struct S4 l_47 = {2L,0x8F203DA9L,0xB9B40DC3L,0x05A4DEA9L,7L,{255UL,0x81B99281L,{0xE285L,1UL,0UL,0x96L,0xC9L},0xB4649573L,-10L,0x3D9EB36BL,0UL},{0xC08CL,8UL,0xDC2D20EAL,-7L,0xDEL},0xCA88L,1L};
    const struct S3 l_48 = {0x3687EAF6L,{0x50L,0x42C135D3L,{0x9A7CL,0x710A75E5L,0UL,0x9CL,255UL},0x320E232AL,0xA6E09213L,4294967295UL,4294967286UL},3UL,2UL,{0xA374L,0x02D4L,4UL,0xC2CD367FL,0x908204A9L,0x0E05L,255UL,0UL,0x01L},0x54L,-1L,0x7BB1L,7L};
    short *l_49 = &l_47.f4;
    const struct S6 l_50 = {0x1EL,{0x10L,1UL,{0xA94DL,0UL,0x38EC9152L,2L,0x29L},-1L,-1L,0xC122574FL,0x60B1AE64L},65530UL,0L,0x1A25L,0x917A8246L,0x2FDCC554L,4294967295UL,{0x045DL,1L,9UL,3L,-1L,-1L,0xD7L,0x0777L,0x38L}};
    int *l_76 = &g_54.f1.f4;
    l_47.f2 = ((func_33((func_35((((safe_mul_func_uint8_t_u_u(l_40, g_2.f3)) == p_32) , (safe_sub_func_uint16_t_u_u((l_40 < p_32), p_32))), ((*l_49) = (safe_mod_func_uint8_t_u_u((g_45 != (l_47 , (((l_48 , &l_40) != &g_46) , (void*)0))), l_48.f6)))) , l_50)) , g_54.f8.f3) < l_50.f8.f3);
    return l_76;


}







static short func_33(const struct S6 p_34)
{
    struct S6 *l_55 = &g_56;
    int *l_57 = &g_46;
    const struct S2 l_69 = {255UL,0x66888E9BL,{0UL,1UL,1UL,0x1CL,0x6AL},-9L,0x50B7EC4DL,0x3155C3D3L,0UL};
    for (g_46 = 0; (g_46 >= 23); ++g_46)
    {
        int **l_58 = &g_45;
        int l_70 = 0x0C78BC37L;
        short *l_71 = &g_56.f8.f0;
        int *l_72 = (void*)0;
        int *l_73 = (void*)0;
        int *l_74 = &l_70;
        unsigned char l_75 = 7UL;
        l_55 = g_53;
        (*l_58) = l_57;

        ;
        l_75 = (safe_rshift_func_uint8_t_u_s((((*l_74) = ((safe_mod_func_int32_t_s_s((func_35(p_34.f4, ((*l_71) = ((**l_58) | (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(func_35(p_34.f8.f1, (*l_57)), (safe_sub_func_int8_t_s_s(((((((0xF0L | ((p_34 , 0UL) == (+func_35(p_34.f1.f6, g_54.f1.f2.f4)))) , l_69) , l_70) < p_34.f1.f5) | (-1L)) == (**l_58)), 6UL)))), 3))))) , 9L), g_56.f8.f6)) | p_34.f8.f6)) >= (*l_57)), 7));
    }

    ;
    return (*l_57);
}







static unsigned func_35(const char p_36, const short p_37)
{
    return g_2.f0;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
    transparent_crc(g_2.f2, "g_2.f2", print_hash_value);
    transparent_crc(g_2.f3, "g_2.f3", print_hash_value);
    transparent_crc(g_2.f4, "g_2.f4", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_54.f1.f0, "g_54.f1.f0", print_hash_value);
    transparent_crc(g_54.f1.f1, "g_54.f1.f1", print_hash_value);
    transparent_crc(g_54.f1.f2.f0, "g_54.f1.f2.f0", print_hash_value);
    transparent_crc(g_54.f1.f2.f1, "g_54.f1.f2.f1", print_hash_value);
    transparent_crc(g_54.f1.f2.f2, "g_54.f1.f2.f2", print_hash_value);
    transparent_crc(g_54.f1.f2.f3, "g_54.f1.f2.f3", print_hash_value);
    transparent_crc(g_54.f1.f2.f4, "g_54.f1.f2.f4", print_hash_value);
    transparent_crc(g_54.f1.f3, "g_54.f1.f3", print_hash_value);
    transparent_crc(g_54.f1.f4, "g_54.f1.f4", print_hash_value);
    transparent_crc(g_54.f1.f5, "g_54.f1.f5", print_hash_value);
    transparent_crc(g_54.f1.f6, "g_54.f1.f6", print_hash_value);
    transparent_crc(g_54.f2, "g_54.f2", print_hash_value);
    transparent_crc(g_54.f3, "g_54.f3", print_hash_value);
    transparent_crc(g_54.f4, "g_54.f4", print_hash_value);
    transparent_crc(g_54.f5, "g_54.f5", print_hash_value);
    transparent_crc(g_54.f6, "g_54.f6", print_hash_value);
    transparent_crc(g_54.f7, "g_54.f7", print_hash_value);
    transparent_crc(g_54.f8.f0, "g_54.f8.f0", print_hash_value);
    transparent_crc(g_54.f8.f1, "g_54.f8.f1", print_hash_value);
    transparent_crc(g_54.f8.f2, "g_54.f8.f2", print_hash_value);
    transparent_crc(g_54.f8.f3, "g_54.f8.f3", print_hash_value);
    transparent_crc(g_54.f8.f4, "g_54.f8.f4", print_hash_value);
    transparent_crc(g_54.f8.f5, "g_54.f8.f5", print_hash_value);
    transparent_crc(g_54.f8.f6, "g_54.f8.f6", print_hash_value);
    transparent_crc(g_54.f8.f7, "g_54.f8.f7", print_hash_value);
    transparent_crc(g_54.f8.f8, "g_54.f8.f8", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_56.f1.f0, "g_56.f1.f0", print_hash_value);
    transparent_crc(g_56.f1.f1, "g_56.f1.f1", print_hash_value);
    transparent_crc(g_56.f1.f2.f0, "g_56.f1.f2.f0", print_hash_value);
    transparent_crc(g_56.f1.f2.f1, "g_56.f1.f2.f1", print_hash_value);
    transparent_crc(g_56.f1.f2.f2, "g_56.f1.f2.f2", print_hash_value);
    transparent_crc(g_56.f1.f2.f3, "g_56.f1.f2.f3", print_hash_value);
    transparent_crc(g_56.f1.f2.f4, "g_56.f1.f2.f4", print_hash_value);
    transparent_crc(g_56.f1.f3, "g_56.f1.f3", print_hash_value);
    transparent_crc(g_56.f1.f4, "g_56.f1.f4", print_hash_value);
    transparent_crc(g_56.f1.f5, "g_56.f1.f5", print_hash_value);
    transparent_crc(g_56.f1.f6, "g_56.f1.f6", print_hash_value);
    transparent_crc(g_56.f2, "g_56.f2", print_hash_value);
    transparent_crc(g_56.f3, "g_56.f3", print_hash_value);
    transparent_crc(g_56.f4, "g_56.f4", print_hash_value);
    transparent_crc(g_56.f5, "g_56.f5", print_hash_value);
    transparent_crc(g_56.f6, "g_56.f6", print_hash_value);
    transparent_crc(g_56.f7, "g_56.f7", print_hash_value);
    transparent_crc(g_56.f8.f0, "g_56.f8.f0", print_hash_value);
    transparent_crc(g_56.f8.f1, "g_56.f8.f1", print_hash_value);
    transparent_crc(g_56.f8.f2, "g_56.f8.f2", print_hash_value);
    transparent_crc(g_56.f8.f3, "g_56.f8.f3", print_hash_value);
    transparent_crc(g_56.f8.f4, "g_56.f8.f4", print_hash_value);
    transparent_crc(g_56.f8.f5, "g_56.f8.f5", print_hash_value);
    transparent_crc(g_56.f8.f6, "g_56.f8.f6", print_hash_value);
    transparent_crc(g_56.f8.f7, "g_56.f8.f7", print_hash_value);
    transparent_crc(g_56.f8.f8, "g_56.f8.f8", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_104.f1, "g_104.f1", print_hash_value);
    transparent_crc(g_104.f2, "g_104.f2", print_hash_value);
    transparent_crc(g_104.f3, "g_104.f3", print_hash_value);
    transparent_crc(g_104.f4, "g_104.f4", print_hash_value);
    transparent_crc(g_104.f5, "g_104.f5", print_hash_value);
    transparent_crc(g_104.f6, "g_104.f6", print_hash_value);
    transparent_crc(g_104.f7, "g_104.f7", print_hash_value);
    transparent_crc(g_104.f8, "g_104.f8", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_119.f1.f0, "g_119.f1.f0", print_hash_value);
    transparent_crc(g_119.f1.f1, "g_119.f1.f1", print_hash_value);
    transparent_crc(g_119.f1.f2.f0, "g_119.f1.f2.f0", print_hash_value);
    transparent_crc(g_119.f1.f2.f1, "g_119.f1.f2.f1", print_hash_value);
    transparent_crc(g_119.f1.f2.f2, "g_119.f1.f2.f2", print_hash_value);
    transparent_crc(g_119.f1.f2.f3, "g_119.f1.f2.f3", print_hash_value);
    transparent_crc(g_119.f1.f2.f4, "g_119.f1.f2.f4", print_hash_value);
    transparent_crc(g_119.f1.f3, "g_119.f1.f3", print_hash_value);
    transparent_crc(g_119.f1.f4, "g_119.f1.f4", print_hash_value);
    transparent_crc(g_119.f1.f5, "g_119.f1.f5", print_hash_value);
    transparent_crc(g_119.f1.f6, "g_119.f1.f6", print_hash_value);
    transparent_crc(g_119.f2, "g_119.f2", print_hash_value);
    transparent_crc(g_119.f3, "g_119.f3", print_hash_value);
    transparent_crc(g_119.f4.f0, "g_119.f4.f0", print_hash_value);
    transparent_crc(g_119.f4.f1, "g_119.f4.f1", print_hash_value);
    transparent_crc(g_119.f4.f2, "g_119.f4.f2", print_hash_value);
    transparent_crc(g_119.f4.f3, "g_119.f4.f3", print_hash_value);
    transparent_crc(g_119.f4.f4, "g_119.f4.f4", print_hash_value);
    transparent_crc(g_119.f4.f5, "g_119.f4.f5", print_hash_value);
    transparent_crc(g_119.f4.f6, "g_119.f4.f6", print_hash_value);
    transparent_crc(g_119.f4.f7, "g_119.f4.f7", print_hash_value);
    transparent_crc(g_119.f4.f8, "g_119.f4.f8", print_hash_value);
    transparent_crc(g_119.f5, "g_119.f5", print_hash_value);
    transparent_crc(g_119.f6, "g_119.f6", print_hash_value);
    transparent_crc(g_119.f7, "g_119.f7", print_hash_value);
    transparent_crc(g_119.f8, "g_119.f8", print_hash_value);
    transparent_crc(g_175.f0, "g_175.f0", print_hash_value);
    transparent_crc(g_175.f1, "g_175.f1", print_hash_value);
    transparent_crc(g_175.f2, "g_175.f2", print_hash_value);
    transparent_crc(g_175.f3, "g_175.f3", print_hash_value);
    transparent_crc(g_175.f4, "g_175.f4", print_hash_value);
    transparent_crc(g_191.f0, "g_191.f0", print_hash_value);
    transparent_crc(g_191.f1, "g_191.f1", print_hash_value);
    transparent_crc(g_191.f2, "g_191.f2", print_hash_value);
    transparent_crc(g_191.f3, "g_191.f3", print_hash_value);
    transparent_crc(g_191.f4, "g_191.f4", print_hash_value);
    transparent_crc(g_202.f0, "g_202.f0", print_hash_value);
    transparent_crc(g_202.f1, "g_202.f1", print_hash_value);
    transparent_crc(g_202.f2, "g_202.f2", print_hash_value);
    transparent_crc(g_202.f3, "g_202.f3", print_hash_value);
    transparent_crc(g_202.f4, "g_202.f4", print_hash_value);
    transparent_crc(g_221.f0, "g_221.f0", print_hash_value);
    transparent_crc(g_221.f1, "g_221.f1", print_hash_value);
    transparent_crc(g_221.f2, "g_221.f2", print_hash_value);
    transparent_crc(g_221.f3, "g_221.f3", print_hash_value);
    transparent_crc(g_221.f4, "g_221.f4", print_hash_value);
    transparent_crc(g_221.f5.f0, "g_221.f5.f0", print_hash_value);
    transparent_crc(g_221.f5.f1, "g_221.f5.f1", print_hash_value);
    transparent_crc(g_221.f5.f2.f0, "g_221.f5.f2.f0", print_hash_value);
    transparent_crc(g_221.f5.f2.f1, "g_221.f5.f2.f1", print_hash_value);
    transparent_crc(g_221.f5.f2.f2, "g_221.f5.f2.f2", print_hash_value);
    transparent_crc(g_221.f5.f2.f3, "g_221.f5.f2.f3", print_hash_value);
    transparent_crc(g_221.f5.f2.f4, "g_221.f5.f2.f4", print_hash_value);
    transparent_crc(g_221.f5.f3, "g_221.f5.f3", print_hash_value);
    transparent_crc(g_221.f5.f4, "g_221.f5.f4", print_hash_value);
    transparent_crc(g_221.f5.f5, "g_221.f5.f5", print_hash_value);
    transparent_crc(g_221.f5.f6, "g_221.f5.f6", print_hash_value);
    transparent_crc(g_221.f6.f0, "g_221.f6.f0", print_hash_value);
    transparent_crc(g_221.f6.f1, "g_221.f6.f1", print_hash_value);
    transparent_crc(g_221.f6.f2, "g_221.f6.f2", print_hash_value);
    transparent_crc(g_221.f6.f3, "g_221.f6.f3", print_hash_value);
    transparent_crc(g_221.f6.f4, "g_221.f6.f4", print_hash_value);
    transparent_crc(g_221.f7, "g_221.f7", print_hash_value);
    transparent_crc(g_221.f8, "g_221.f8", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_542.f0, "g_542.f0", print_hash_value);
    transparent_crc(g_542.f1, "g_542.f1", print_hash_value);
    transparent_crc(g_542.f2, "g_542.f2", print_hash_value);
    transparent_crc(g_542.f3, "g_542.f3", print_hash_value);
    transparent_crc(g_542.f4, "g_542.f4", print_hash_value);
    transparent_crc(g_677.f0, "g_677.f0", print_hash_value);
    transparent_crc(g_677.f1.f0, "g_677.f1.f0", print_hash_value);
    transparent_crc(g_677.f1.f1, "g_677.f1.f1", print_hash_value);
    transparent_crc(g_677.f1.f2.f0, "g_677.f1.f2.f0", print_hash_value);
    transparent_crc(g_677.f1.f2.f1, "g_677.f1.f2.f1", print_hash_value);
    transparent_crc(g_677.f1.f2.f2, "g_677.f1.f2.f2", print_hash_value);
    transparent_crc(g_677.f1.f2.f3, "g_677.f1.f2.f3", print_hash_value);
    transparent_crc(g_677.f1.f2.f4, "g_677.f1.f2.f4", print_hash_value);
    transparent_crc(g_677.f1.f3, "g_677.f1.f3", print_hash_value);
    transparent_crc(g_677.f1.f4, "g_677.f1.f4", print_hash_value);
    transparent_crc(g_677.f1.f5, "g_677.f1.f5", print_hash_value);
    transparent_crc(g_677.f1.f6, "g_677.f1.f6", print_hash_value);
    transparent_crc(g_677.f2, "g_677.f2", print_hash_value);
    transparent_crc(g_677.f3, "g_677.f3", print_hash_value);
    transparent_crc(g_677.f4, "g_677.f4", print_hash_value);
    transparent_crc(g_677.f5, "g_677.f5", print_hash_value);
    transparent_crc(g_677.f6, "g_677.f6", print_hash_value);
    transparent_crc(g_677.f7, "g_677.f7", print_hash_value);
    transparent_crc(g_677.f8.f0, "g_677.f8.f0", print_hash_value);
    transparent_crc(g_677.f8.f1, "g_677.f8.f1", print_hash_value);
    transparent_crc(g_677.f8.f2, "g_677.f8.f2", print_hash_value);
    transparent_crc(g_677.f8.f3, "g_677.f8.f3", print_hash_value);
    transparent_crc(g_677.f8.f4, "g_677.f8.f4", print_hash_value);
    transparent_crc(g_677.f8.f5, "g_677.f8.f5", print_hash_value);
    transparent_crc(g_677.f8.f6, "g_677.f8.f6", print_hash_value);
    transparent_crc(g_677.f8.f7, "g_677.f8.f7", print_hash_value);
    transparent_crc(g_677.f8.f8, "g_677.f8.f8", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
