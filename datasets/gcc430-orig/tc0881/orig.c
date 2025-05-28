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
   unsigned f3;
   int f4;
};

struct S1 {
   unsigned f0 : 16;
};

struct S2 {
   unsigned char f0;
   char f1;
   int f2;
   struct S0 f3;
   unsigned f4;
   int f5;
   struct S0 f6;
};

struct S3 {
   signed f0 : 8;
   int f1;
   struct S1 f2;
   struct S0 f3;
   unsigned f4 : 30;
   int f5;
};


static int g_8 = 0x3880E033L;
static struct S1 g_14 = {188};
static struct S0 g_55 = {5UL,4L,5L,4294967295UL,0L};
static struct S3 g_77 = {7,0x735B57BDL,{243},{0x66FFE497L,0L,0x4854C362L,4294967295UL,0x93315705L},5282,0xDF68D343L};
static struct S1 *g_94 = &g_14;
static struct S1 **g_93 = &g_94;
static struct S2 g_99 = {0x76L,0L,-9L,{3UL,0x0EC7AF4AL,0x090D02F7L,0UL,-1L},1UL,0L,{8UL,-1L,0x0996282FL,0x70AA81E9L,0xA67FBDCDL}};
static struct S3 g_109 = {-7,3L,{226},{0x3A16EC97L,0L,0x99D399BDL,0x1FF75973L,1L},27138,0x022FCF30L};
static char g_110 = 0L;
static int *g_116 = (void*)0;
static int g_181 = 4L;
static struct S0 *g_262 = &g_55;
static struct S0 **g_261 = &g_262;
static struct S2 g_274 = {7UL,0x9AL,-7L,{0x3A5DB4D1L,-2L,-1L,1UL,0x22E39197L},1UL,0x09B7A1DBL,{4294967291UL,0x631262F9L,0x93F2EAD4L,0x9DE19689L,1L}};
static struct S3 *g_305 = &g_109;
static struct S3 **g_304 = &g_305;
static char g_320 = 0x8BL;
static int g_348 = (-6L);
static struct S0 g_361 = {0UL,0xCF303C48L,3L,0x70DFD6CCL,0xBDCC68B8L};
static struct S2 *g_367 = &g_99;
static struct S2 **g_366 = &g_367;
static int **g_430 = &g_116;
static int ***g_429 = &g_430;
static int g_558 = 0L;
static int g_648 = 1L;
static struct S1 g_696 = {205};
static struct S2 g_711 = {1UL,1L,-1L,{0x4A3398A2L,0x8836D279L,0x9C32077CL,0xCC4B09E1L,0x2326F58CL},0xFFC4BD3DL,-6L,{0xE82A3B38L,0xE298F7F4L,0xFF57F4B9L,0xD5F95463L,0x8F766EB0L}};
static unsigned g_859 = 0x3A6E4B11L;



static struct S1 func_1(void);
static int * func_2(int * p_3, int * p_4, unsigned p_5, int p_6);
static char func_11(struct S1 p_12, int * p_13);
static int * func_15(struct S0 p_16, int * p_17, unsigned short p_18, int * p_19);
static int * func_21(short p_22, int * p_23, unsigned short p_24, unsigned char p_25, unsigned char p_26);
static struct S3 func_27(int * p_28, int * p_29);
static struct S3 func_37(struct S2 p_38, struct S3 p_39, int * p_40, int * p_41);
static struct S2 func_42(int * p_43, char p_44, struct S1 p_45, int * p_46, int * p_47);
static unsigned char func_50(struct S1 p_51, struct S0 p_52, char p_53, char p_54);
static unsigned func_61(short p_62, int p_63);
static struct S1 func_1(void)
{
    int *l_7 = &g_8;
    struct S0 l_20 = {1UL,0L,-7L,4294967295UL,0x2CA335C2L};
    unsigned char l_117 = 0UL;
    int l_118 = 4L;
    int *l_293 = &g_99.f3.f1;
    struct S1 l_482 = {147};
    struct S0 l_489 = {4294967295UL,6L,-3L,0x9AE28DC0L,0x434A7E38L};
    char l_492 = (-8L);
    unsigned short l_540 = 65535UL;
    int *l_549 = (void*)0;
    int *l_571 = &g_8;
    char l_583 = 0xE0L;
    struct S1 l_585 = {17};
    struct S1 l_591 = {15};
    unsigned short l_620 = 4UL;
    struct S1 ***l_631 = &g_93;
    struct S3 l_646 = {14,0L,{98},{1UL,1L,0xE1837E61L,0xA3D54E31L,-4L},6712,0xB51F8862L};
    struct S2 *l_690 = &g_99;
    int *l_749 = &g_99.f3.f4;
    unsigned l_796 = 0x622EC68AL;
    int l_806 = 7L;
    struct S0 **l_896 = &g_262;
    struct S3 **l_907 = (void*)0;
    struct S0 l_917 = {0x6D9600B4L,0xB0CBB076L,0xB585E2CAL,0x84E121BDL,0xE08B7EEEL};
    (*g_430) = func_2(l_7, &g_8, (((safe_rshift_func_int8_t_s_u(func_11(g_14, func_15(l_20, func_21((func_27(&g_8, &g_8) , (((&g_8 != (((!((((**g_93) , (*l_7)) , (*l_7)) != 0xE7A3L)) & (*l_7)) , l_7)) , g_55.f1) & g_77.f4)), g_116, l_117, l_118, g_109.f5), g_109.f4, l_293)), (*l_293))) || 0x95L) > g_109.f5), g_274.f2);


    ;
    ;
    if (func_61(((l_482 , &g_94) == ((*g_262) , ((safe_mul_func_uint8_t_u_u(255UL, (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((((l_489 , (safe_mod_func_int32_t_s_s(((*l_293) <= (*l_293)), (*l_293)))) || (&l_482 == (void*)0)) || (-6L)), 3)), 0xBA5C8D76L)))) , &g_94))), g_55.f2))
    {
        struct S1 l_503 = {32};
        struct S3 *l_545 = &g_109;
        int l_570 = 0xE63E284FL;
        unsigned l_572 = 4294967286UL;
        int l_636 = 4L;
        struct S0 l_664 = {0x8F6345BBL,4L,-8L,4294967293UL,0x35BEC9F0L};
        struct S1 **l_686 = &g_94;
        (*l_293) ^= (g_99.f1 , l_492);
        if ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((!(((0x0931L <= ((safe_add_func_uint8_t_u_u(((!((((safe_sub_func_uint8_t_u_u(func_50(l_503, (**g_261), ((safe_add_func_int16_t_s_s((((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((g_274.f3.f4 == (-1L)), 2)), ((safe_sub_func_int32_t_s_s((((*g_429) == (void*)0) <= (*l_293)), g_109.f0)) <= l_503.f0))) , (*g_305)) , g_361.f0), (*l_7))) , (-1L)), l_503.f0), g_274.f3.f1)) , g_181) && (-3L)) , 0xC2L)) >= 0xDBL), (*l_7))) & (*l_7))) > 0x2DC3L) && g_77.f2.f0)) != 0x6DA1L), 7)) | 0L), g_55.f4)), 3)))
        {
            (*l_293) ^= l_503.f0;
        }
        else
        {
            int l_521 = 0x6BE7CBFDL;
            struct S1 l_522 = {117};
            struct S3 l_535 = {-11,1L,{149},{0x712750B9L,0xB3D16DE5L,0x718C1703L,0xCA74D3DAL,0x4FF980ABL},30188,-6L};
            (*l_293) = ((((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int16_t_s_u(((**g_261) , ((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_77.f4, 3)), l_521)) & g_77.f1)), 7)))) == (((safe_mul_func_int16_t_s_s(g_274.f6.f2, (safe_mul_func_uint16_t_u_u(g_99.f2, l_503.f0)))) && 0xA0ACL) == g_77.f3.f0)) <= (*l_293)) || (*l_293));
            (**g_429) = ((((0UL & (~g_77.f3.f2)) && (safe_rshift_func_int8_t_s_u((((safe_sub_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_535 , g_274.f3.f1), g_109.f3.f3)), (&g_14 != (l_482 , &l_503)))) , (0xD4E309ECL > l_503.f0)), g_77.f3.f1)) , 0xCFL) ^ 0x59L), (*l_7)))) , 0x22AE26D8L) , (*g_430));
        }
        if ((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_503.f0, l_540)), (safe_mod_func_uint16_t_u_u(func_50(l_503, (*g_262), (*l_7), g_99.f3.f4), (safe_lshift_func_int16_t_s_s(0x129BL, 1)))))))
        {
            unsigned l_546 = 1UL;
            struct S2 l_547 = {0xB0L,0xB8L,0xC32D9083L,{1UL,-1L,0xF8A6D137L,7UL,1L},0UL,1L,{4294967286UL,0x3E0F2ABEL,0x9CB19EC1L,0xBDCA3123L,0L}};
            struct S1 l_548 = {80};
            (*g_304) = l_545;
            (*l_293) = (l_546 , ((g_274.f0 , ((func_37(l_547, (*l_545), func_15((l_548 , l_489), l_549, (func_61(func_50(l_503, (*g_262), g_109.f3.f1, (*l_7)), l_503.f0) | 4294967287UL), (**g_429)), &l_118) , (*l_293)) || g_77.f3.f4)) <= l_503.f0));

            ;
            ;
        }
        else
        {
            struct S1 ***l_563 = &g_93;
            int l_582 = 8L;
            struct S1 l_627 = {109};
            int **l_651 = &l_293;
            struct S0 l_657 = {0x9D178DA1L,0x9C3853F1L,0x1DB53040L,6UL,0xDDC16E30L};
            struct S2 *l_661 = &g_274;
            for (l_489.f4 = 0; (l_489.f4 >= (-3)); l_489.f4 = safe_sub_func_int32_t_s_s(l_489.f4, 1))
            {
                int l_569 = 1L;
                for (g_274.f3.f0 = (-22); (g_274.f3.f0 != 49); g_274.f3.f0 = safe_add_func_int32_t_s_s(g_274.f3.f0, 5))
                {
                    return l_503;
                }
                for (g_361.f1 = 0; (g_361.f1 == (-23)); --g_361.f1)
                {
                    unsigned l_556 = 2UL;
                    int *l_557 = &g_361.f1;
                    unsigned l_559 = 0x2EE20901L;
                    struct S3 ***l_560 = &g_304;
                    if (l_556)
                    {
                        (*g_429) = (*g_429);
                        (**g_429) = l_557;

                        ;
                        (*l_293) &= l_503.f0;
                    }
                    else
                    {
                        if ((*l_557))
                            break;
                        if (g_558)
                            continue;
                        if (l_559)
                            continue;
                    }
                    (*l_560) = &g_305;
                    (*l_7) &= g_99.f4;
                    (*l_7) ^= (((void*)0 == l_563) | (((~(safe_unary_minus_func_int16_t_s(g_274.f2))) < func_61(g_109.f3.f3, l_503.f0)) != (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((+(*l_293)) , (-6L)) >= (-1L)), l_569)), 1))));
                }
                if (l_570)
                    continue;
                (*l_7) = 0xA152C66DL;
            }

            ;
            if (l_572)
            {
                struct S0 l_577 = {4294967295UL,-3L,5L,0x4BF9C8AAL,1L};
                struct S1 l_584 = {90};
                unsigned short l_628 = 9UL;
                if ((g_77.f3.f3 < (safe_sub_func_uint32_t_u_u(g_99.f3.f4, ((safe_add_func_int16_t_s_s((((~g_109.f2.f0) ^ (l_489 , (func_50(l_503, l_577, (+(safe_lshift_func_int16_t_s_u(((l_503.f0 != (safe_sub_func_uint16_t_u_u(g_274.f3.f4, (g_109.f3.f2 >= l_582)))) <= 0xCFEFA607L), 10))), g_109.f2.f0) || l_583))) | l_577.f0), g_77.f3.f0)) , l_572)))))
                {
                    (*l_293) |= l_572;
                    l_585 = l_584;
                    for (g_274.f3.f0 = 24; (g_274.f3.f0 > 41); g_274.f3.f0 = safe_add_func_uint16_t_u_u(g_274.f3.f0, 5))
                    {
                        unsigned short l_588 = 0xCD5DL;
                        l_588 = g_77.f3.f0;
                        (*l_7) = (safe_mul_func_uint16_t_u_u(g_109.f3.f0, (safe_add_func_int16_t_s_s(g_99.f3.f0, (safe_lshift_func_uint8_t_u_s(((*g_366) != (void*)0), l_588))))));
                        if (l_577.f1)
                            break;
                    }
                    (*l_7) = (+(safe_mul_func_uint16_t_u_u(g_361.f2, g_361.f2)));
                }
                else
                {
                    unsigned l_616 = 0xFC42AFB3L;
                    unsigned l_618 = 0x81F161E9L;
                    struct S1 l_629 = {154};
                    for (l_20.f3 = 0; (l_20.f3 != 21); l_20.f3++)
                    {
                        int l_617 = 0xBC6B8435L;
                        (*l_7) = ((&g_93 == &g_93) , (((safe_mul_func_int8_t_s_s((l_482 , (safe_sub_func_int32_t_s_s(9L, (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(g_361.f1, l_582)) ^ (safe_add_func_int8_t_s_s(0xEAL, ((safe_add_func_uint32_t_u_u(4294967295UL, (l_616 != l_617))) > l_616)))) > 1L), l_617)), g_109.f3.f2)), l_618))))), l_572)) || l_618) , l_584.f0));
                        (*l_293) ^= (safe_unary_minus_func_uint32_t_u(l_620));
                    }
                    for (g_274.f3.f3 = 0; (g_274.f3.f3 >= 9); g_274.f3.f3++)
                    {
                        struct S2 l_623 = {0xB3L,0xE3L,0x79CB9B70L,{4294967295UL,0x7F7927A9L,0x2EDE3A41L,4294967295UL,0x0A688FD7L},0x186A6062L,1L,{1UL,-1L,0x7FA20C12L,0xD028CE45L,0x75FC07F9L}};
                        struct S2 *l_624 = &l_623;
                        struct S0 l_630 = {1UL,0x34EE0964L,0x2B518C58L,0UL,0xF64106ADL};
                        (*l_624) = ((g_99.f3.f0 , (*l_7)) , l_623);
                        (*l_293) ^= (safe_rshift_func_uint16_t_u_s(g_77.f0, (((((((l_585 , ((l_627 , (l_628 , (func_50(l_629, l_630, l_629.f0, l_582) | l_577.f4))) , l_631)) == &g_93) == 0x80L) , g_77.f3.f1) , 0x0AA9L) , (-1L)) & 0UL)));
                        (**g_429) = (**g_429);
                    }
                }
                l_636 |= (l_570 || ((((((*l_293) , &g_94) != (void*)0) , ((((safe_mul_func_uint16_t_u_u((*l_293), ((g_274.f3.f1 , (6L <= ((safe_mul_func_int8_t_s_s(func_50(l_503, (*g_262), g_109.f5, l_503.f0), l_584.f0)) , 1UL))) == (-1L)))) && 0x635EL) < l_582) >= (*l_571))) || l_577.f3) , (*l_571)));
                (**g_429) = (**g_429);
            }
            else
            {
                int l_637 = (-10L);
                struct S3 l_638 = {3,1L,{234},{0x0B6337C6L,-7L,-2L,0x2BB54D2AL,0x4E2C8C9DL},27046,5L};
                struct S2 *l_662 = &g_99;
                int l_685 = 0xFE3A836AL;
                if (l_570)
                {
                    struct S0 l_647 = {0x4B523299L,0x3E4455B0L,7L,4294967295UL,5L};
                    if (l_637)
                    {
                        (*g_261) = (*g_261);
                        l_637 &= 0xAEBDBE6CL;
                        (*g_430) = &l_118;

                        ;
                        l_638 = (**g_304);
                    }
                    else
                    {
                        struct S0 l_639 = {4294967295UL,-5L,0x91B0FE93L,4294967295UL,0xCFD00E7FL};
                        struct S1 *l_640 = &l_482;
                        (**g_429) = func_15(l_639, (*g_430), g_274.f3.f1, (*g_430));

                        ;
                        (*l_640) = l_503;
                        l_647.f4 &= (((safe_sub_func_int16_t_s_s((g_99.f6.f3 | (g_99.f2 , g_14.f0)), ((safe_mul_func_int16_t_s_s(g_274.f3.f0, ((safe_unary_minus_func_int16_t_s(g_77.f2.f0)) , g_648))) <= (***g_429)))) < (-5L)) | (*g_116));
                        (*l_640) = l_638.f2;
                    }

                    ;
                }
                else
                {
                    int l_656 = 0xC905E255L;
                    struct S1 l_663 = {209};
                    (*l_7) = (safe_add_func_uint32_t_u_u((+((+((*g_429) == l_651)) >= ((0x7FL && l_636) || (safe_add_func_uint16_t_u_u(65535UL, (l_503 , ((safe_add_func_int8_t_s_s(0x4EL, ((((+(-6L)) , (g_14.f0 >= l_656)) , (-7L)) && g_348))) || (**l_651)))))))), g_361.f1));
                    if (((l_638.f3 , 0x46L) < ((((&g_304 != (l_657 , (void*)0)) , func_50(l_627, l_646.f3, g_274.f2, l_656)) , &l_503) != (void*)0)))
                    {
                        unsigned l_660 = 0x9F72B7C2L;
                        struct S0 l_665 = {1UL,0L,1L,0xCB790C08L,0x69B795ACL};
                        (**l_651) |= (safe_sub_func_uint32_t_u_u((g_99.f3.f3 , (func_50(l_503, ((l_638.f3.f4 & func_61(l_638.f3.f0, l_660)) , (*g_262)), g_274.f3.f2, l_656) < (*l_7))), l_660));
                        (**l_651) ^= ((l_661 == l_662) & ((l_638.f3.f4 != func_50(l_663, l_664, g_77.f2.f0, (*l_571))) , g_99.f2));
                        (*l_293) = (l_665 , (safe_mod_func_uint32_t_u_u(((func_61((**l_651), l_664.f2) , 0xB4L) , 0x471A31C4L), l_663.f0)));
                    }
                    else
                    {
                        unsigned short l_684 = 1UL;
                        (*l_293) = (((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((**l_651) & (g_274.f3.f4 > (l_663.f0 | ((safe_lshift_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(1UL, 8)), 14)), ((&l_661 != (void*)0) ^ func_61(g_99.f6.f2, l_684)))) != l_637) || l_663.f0) && g_361.f0), g_55.f2)) & 0UL)))), 11)) , g_109.f3.f0), g_274.f6.f3)), l_663.f0)) != 0x3BE4L) , (**l_651)) ^ g_99.f6.f1) >= (*l_293));
                    }
                }

                ;
                if ((l_664.f3 , ((((&g_367 == (func_61((0x10L | (((func_50(g_77.f2, (**g_261), (0L <= 0x7DL), g_77.f0) && g_77.f3.f1) <= l_664.f0) >= g_558)), l_685) , (void*)0)) , l_686) == &g_94) & 0xD1L)))
                {
                    (*l_571) ^= l_637;
                }
                else
                {
                    char l_689 = 0xD9L;
                    (*l_651) = (*g_430);

                    ;
                    (*g_261) = (*g_261);
                    if ((0UL >= (safe_rshift_func_int8_t_s_s(g_274.f3.f4, 4))))
                    {
                        return l_627;


                    }
                    else
                    {
                        (*l_651) = &l_118;

                        ;
                        (*l_7) = l_638.f3.f1;
                        (*l_571) &= l_689;
                    }

                    ;
                    (*l_651) = (*g_430);

                    ;
                }

                ;
                g_77.f2 = l_638.f2;
            }

            ;
            ;
            (**g_304) = func_37((*l_661), (**g_304), &l_118, &l_636);

            ;
            l_661 = l_690;

            ;
        }

        ;
        ;
        ;
    }
    else
    {
        struct S0 l_694 = {0xEFF731ACL,0x80BDB973L,0x605C7D62L,1UL,0xC81B30ECL};
        int *l_698 = (void*)0;
        char l_707 = 0x50L;
        struct S0 l_710 = {2UL,0x33F41587L,0xF77829CAL,6UL,1L};
        struct S2 l_720 = {1UL,-1L,0x40C62DADL,{4294967295UL,-9L,0x0B7CFF47L,0x38569275L,1L},0xF086961BL,1L,{4UL,-1L,-5L,0x18E0427DL,1L}};
        struct S1 l_734 = {22};
        struct S0 l_903 = {0xF8CC2E26L,0x07CEDD12L,0xB831A3A5L,1UL,0xA6AF1388L};
        if ((*l_293))
        {
            struct S1 l_693 = {107};
            int *l_695 = &g_109.f1;
            struct S3 l_697 = {-14,5L,{114},{0xDFA40CBFL,0x75878D56L,3L,8UL,0x78F2B09DL},23888,1L};
            struct S2 l_699 = {0xB8L,0xB0L,0x7FD48FE9L,{0xF5DC49FBL,8L,0L,2UL,0L},0x32F683B6L,-9L,{4294967290UL,0xF7E039D2L,0L,0x69C75B09L,0x37FB04A8L}};
            (*l_7) ^= (safe_rshift_func_uint8_t_u_s(g_77.f4, 3));
            if ((func_61(g_274.f3.f2, (*l_293)) <= g_55.f1))
            {
                int l_706 = 0xAC041D82L;
                struct S1 l_708 = {117};
                struct S2 l_709 = {0x06L,0L,0xA6A4673CL,{0xC36B32BDL,-1L,-1L,0x3F2C9991L,0x15B3AA46L},7UL,0xD5D0C41BL,{0UL,4L,0x5BAFE5CEL,0UL,0xA199F087L}};
                struct S3 *l_717 = &l_646;
                struct S3 ***l_723 = &g_304;
                (*l_293) = (safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((g_109.f2.f0 && (((void*)0 != &g_304) | func_50(g_109.f2, (l_709 , l_710), l_709.f3.f4, (*l_695)))) || 0xDFB0E68AL), 11)) > 7UL), 9UL)) ^ (-1L)), l_709.f6.f1));
                g_711 = (*l_690);
                for (g_55.f4 = (-2); (g_55.f4 > (-8)); --g_55.f4)
                {
                    struct S0 *l_714 = &l_694;
                    unsigned l_724 = 0x47471407L;
                    (*l_7) &= (*l_695);
                    (*l_571) ^= (((*g_261) != l_714) < (-8L));
                    if (((safe_mul_func_uint16_t_u_u(((void*)0 != l_717), (g_361.f2 , (safe_add_func_int16_t_s_s((g_711.f6.f0 <= (((~(&l_709 != (l_720 , (*g_366)))) > func_61((1UL >= ((((safe_lshift_func_uint16_t_u_s(((&g_304 != l_723) , (*l_7)), g_274.f1)) > l_724) , 0x9139177CL) , g_55.f3)), l_724)) >= g_109.f0)), (*l_7)))))) | 0x4AFD6E16L))
                    {
                        (*l_714) = (*g_262);
                    }
                    else
                    {
                        int l_725 = 0L;
                        (*l_293) = l_725;
                    }
                }
                return l_708;
            }
            else
            {
                int l_739 = 0xEEDBA013L;
                struct S1 l_744 = {87};
                struct S2 l_748 = {0x29L,0xF2L,4L,{4294967295UL,0x7CE04474L,2L,0xAFC6C5A6L,-3L},0xAC8C37C1L,1L,{0xA783EE90L,-4L,0xF836FB02L,1UL,0L}};
                int *l_750 = &g_99.f6.f1;
                struct S1 **l_755 = &g_94;
                if (((void*)0 == (*g_304)))
                {
                    (**g_261) = (*g_262);
                    (*g_93) = &l_693;

                    ;
                }
                else
                {
                    unsigned l_730 = 0UL;
                    (*l_293) ^= func_50(l_693, (*g_262), (((safe_mod_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((((((l_730 || g_109.f2.f0) == (((0x3F82702BL ^ (func_61(((safe_unary_minus_func_uint16_t_u(0x58C9L)) , (((safe_sub_func_int32_t_s_s(((void*)0 != &g_305), (!(*l_571)))) != 0UL) <= 7L)), (*l_571)) && 0L)) >= (-7L)) | g_274.f2)) != g_99.f3.f0) & 0x792F0472L) | g_711.f5), 0xC9018AA0L)) && 0xD3L), g_99.f6.f0)) > 0x6AL) >= g_711.f1), g_99.f3.f2);
                    (**g_261) = (**g_261);
                    return l_734;
                }

                ;
                for (g_711.f6.f2 = 0; (g_711.f6.f2 != (-8)); g_711.f6.f2--)
                {
                    (*g_430) = l_695;

                    ;
                    if ((*g_116))
                        continue;
                    (*l_571) = (safe_sub_func_uint32_t_u_u((l_739 | (*l_695)), (*l_695)));
                    for (l_739 = (-17); (l_739 != 27); l_739 = safe_add_func_int8_t_s_s(l_739, 9))
                    {
                        (*l_7) |= (*g_116);
                        (**g_429) = (**g_429);
                        (*l_7) = ((*g_429) != (*g_429));
                        (**g_304) = (**g_304);
                    }
                }

                ;
                if ((safe_mod_func_uint16_t_u_u(((g_77.f3.f0 ^ (g_99.f6.f1 <= ((0xB6CB3F9BL | (&g_430 != ((*l_571) , (l_744 , &g_430)))) < g_648))) < g_320), (-1L))))
                {
                    unsigned char l_756 = 0x11L;
                    struct S1 **l_757 = &g_94;
                    for (g_109.f3.f1 = 0; (g_109.f3.f1 != 15); g_109.f3.f1 = safe_add_func_uint32_t_u_u(g_109.f3.f1, 1))
                    {
                        struct S2 l_747 = {0xE6L,0x2BL,0x45AC6037L,{0UL,-1L,0L,0UL,0L},4294967295UL,0xF7F11AABL,{0x5C042DD3L,-1L,1L,0xA4C194CEL,0xC416EF68L}};
                        struct S3 *l_751 = &g_77;
                        (*l_751) = (*g_305);
                    }
                    (*l_750) = 0L;
                    for (g_711.f6.f3 = 0; (g_711.f6.f3 == 25); g_711.f6.f3 = safe_add_func_int8_t_s_s(g_711.f6.f3, 1))
                    {
                        unsigned char l_754 = 0xB0L;
                        (*l_7) = l_754;
                        (**l_631) = &l_734;

                        ;
                    }

                    ;
                    (*l_695) &= ((g_109.f5 , &g_94) == ((g_274.f0 && (l_755 != (l_756 , &g_94))) , l_757));
                }
                else
                {
                    struct S0 l_762 = {0xF261EA43L,0x570B917BL,0x49C358E6L,4294967289UL,0xBF8698FDL};
                    struct S1 l_768 = {94};
                    int *l_771 = (void*)0;
                    for (l_720.f5 = (-19); (l_720.f5 >= 22); l_720.f5 = safe_add_func_uint16_t_u_u(l_720.f5, 9))
                    {
                        (**g_429) = (*g_430);
                    }
                    (*l_749) = ((safe_lshift_func_int8_t_s_u((l_762 , (g_361.f1 > (safe_unary_minus_func_int32_t_s(l_762.f3)))), 5)) > (safe_mod_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(((((**g_261) , &g_304) == &g_304) == ((l_768 , (*l_750)) , ((*g_261) == (void*)0))), g_696.f0)) >= 0L), g_99.f6.f4)));
                    (**l_755) = (*g_94);
                    (*g_430) = func_21(((g_274.f6.f1 & (0UL > (((safe_mul_func_int16_t_s_s(func_11(l_768, (**g_429)), (*l_750))) , (func_61(g_99.f3.f3, (((l_695 == (**g_429)) > g_711.f3.f1) == l_762.f4)) , g_361.f3)) > 0xE8F6L))) > g_109.f3.f1), l_771, g_274.f6.f3, g_711.f6.f4, (*l_750));

                    ;
                    ;
                }

                ;
            }

            ;
            ;
            for (g_274.f4 = (-24); (g_274.f4 != 9); ++g_274.f4)
            {
                unsigned l_784 = 0x4A78B2F3L;
                unsigned short l_791 = 3UL;
                int l_795 = 0x96E6C15EL;
                for (l_694.f2 = (-17); (l_694.f2 == 23); l_694.f2 = safe_add_func_int32_t_s_s(l_694.f2, 7))
                {
                    (*l_749) |= (safe_add_func_int8_t_s_s(g_274.f6.f4, (safe_rshift_func_int16_t_s_s(g_55.f3, 9))));
                    (*l_293) &= (-10L);
                }
                for (l_492 = 5; (l_492 != (-24)); l_492--)
                {
                    unsigned l_787 = 4294967295UL;
                    for (l_620 = 0; (l_620 > 60); ++l_620)
                    {
                        if (l_784)
                            break;
                        (**l_631) = ((**g_304) , (*g_93));
                        (*l_293) = (-1L);
                    }
                    (*g_261) = &l_20;

                    ;
                    if ((((safe_add_func_int32_t_s_s(l_787, 0x14220C9BL)) < (((&g_430 != (void*)0) && l_787) | (4UL <= (((*l_749) >= (g_274.f3.f0 & (*l_571))) & g_711.f6.f1)))) < g_274.f5))
                    {
                        int l_790 = (-3L);
                        struct S0 *l_792 = &l_710;
                        (*l_7) = ((safe_rshift_func_int16_t_s_s((l_790 > 0UL), l_791)) || (((**g_304) , (*g_261)) != l_792));
                    }
                    else
                    {
                        (*g_304) = (*g_304);
                    }
                }
                l_795 &= (safe_lshift_func_uint16_t_u_u(func_11((***l_631), l_698), (*l_695)));
            }

            ;
        }
        else
        {
            int l_797 = 0xC6F2291DL;
            struct S1 l_803 = {189};
            struct S0 l_829 = {0xC02C45C3L,0x578A61F8L,4L,0x6DD807CCL,0x05A7CB35L};
            struct S2 l_882 = {0x1AL,9L,-4L,{0UL,0x3A6FCDECL,9L,1UL,-1L},4294967295UL,0xF18ADEF8L,{4294967293UL,-5L,0xCD5E36D4L,0xD232FB6DL,-5L}};
            unsigned l_894 = 3UL;
            struct S3 ***l_908 = (void*)0;
            struct S3 ***l_909 = &g_304;
            if (((*l_571) < (*l_293)))
            {
                l_797 &= l_796;
            }
            else
            {
                int l_802 = 0xB79AC929L;
                struct S1 l_818 = {229};
                struct S0 l_824 = {0UL,0x88027D71L,-1L,0x69878F37L,0x641C0838L};
                struct S0 **l_895 = &g_262;
                if ((((((safe_add_func_uint32_t_u_u(((l_797 == (safe_mul_func_int16_t_s_s((func_50(g_77.f2, l_646.f3, l_802, l_802) == func_61(func_61((l_803 , ((l_803.f0 , (safe_mul_func_int16_t_s_s((248UL <= 0x11L), g_274.f6.f4))) , (-1L))), l_803.f0), (*l_749))), g_109.f3.f0))) || 0xB188L), l_803.f0)) <= l_797) <= 0UL) ^ (*l_571)) < l_806))
                {
                    unsigned char l_817 = 0x2AL;
                    struct S1 l_823 = {82};
                    struct S1 **l_872 = &g_94;
                    (*l_7) = (((+g_77.f3.f2) || (g_274.f6.f0 && (safe_sub_func_uint32_t_u_u((((void*)0 != &l_646) <= ((safe_add_func_int16_t_s_s((!(safe_mod_func_uint16_t_u_u(0x4BC5L, g_274.f3.f4))), (~(g_55.f2 | 0xA9L)))) , ((void*)0 == &g_94))), 0x1713FC3CL)))) <= l_802);
                    for (g_711.f6.f1 = (-3); (g_711.f6.f1 >= 9); ++g_711.f6.f1)
                    {
                        (**g_429) = (*g_430);
                    }
                    if ((l_734 , l_817))
                    {
                        struct S1 l_832 = {247};
                        l_802 = func_50(l_818, l_646.f3, (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((func_50(l_823, l_824, (*l_293), (((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((l_829 , ((safe_lshift_func_int8_t_s_s(func_50(l_832, l_829, l_829.f0, g_361.f1), 7)) > l_829.f3)) & 0L), l_817)), g_99.f3.f1)) == 0x43L) & 0L)) != g_274.f3.f3), l_817)), l_832.f0)), g_348);
                        (*g_366) = l_690;

                        ;
                        (*l_293) |= ((safe_mod_func_uint16_t_u_u(((l_817 != (safe_mod_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(g_99.f3.f2, (safe_lshift_func_uint8_t_u_s((((((g_711.f6.f2 & ((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(((l_832.f0 , (safe_add_func_uint32_t_u_u(g_77.f3.f4, func_61(((safe_mod_func_uint32_t_u_u(func_61(func_61(g_274.f6.f3, (l_829.f3 == (safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(0x55E48D49L, (((func_61(((g_711.f6.f3 == g_274.f5) , g_109.f2.f0), g_361.f0) && g_711.f3.f4) >= l_832.f0) || 65533UL))), l_817)))), l_824.f3), (-7L))) > l_829.f1), l_817)))) , 0xA56BL), 13)) != l_824.f0) >= 0xE7B8L), g_711.f3.f2)), l_817)), l_829.f2)) == 1UL)) , (*l_7)) < l_824.f2) ^ g_109.f1) , g_99.f6.f4), 6)))) , 252UL), g_711.f6.f4))) || 0x66L), l_823.f0)) > l_829.f1);
                        g_859 = (safe_add_func_uint16_t_u_u((g_99.f6.f3 | l_823.f0), (!l_829.f3)));
                    }
                    else
                    {
                        struct S1 l_869 = {113};
                        int l_873 = 1L;
                        int *l_874 = &g_99.f6.f4;
                        (*l_7) = (func_61(g_77.f3.f3, (1L != g_348)) , (safe_mul_func_int8_t_s_s(l_824.f0, (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_s((func_50(l_869, (*g_262), (((safe_mul_func_int8_t_s_s((l_829.f2 , func_61((*l_571), l_823.f0)), g_558)) , l_872) != (void*)0), g_274.f0) | g_14.f0), 3)))) && l_873), l_817)), (*l_749))))));
                        (**g_429) = l_874;

                        ;
                    }

                    ;
                }
                else
                {
                    for (g_274.f6.f2 = 0; (g_274.f6.f2 <= 13); g_274.f6.f2++)
                    {
                        short l_881 = 0xDAE6L;
                        (*l_749) ^= (safe_sub_func_int32_t_s_s(((g_361.f0 && (*l_7)) , (safe_mul_func_uint16_t_u_u((l_881 | (*l_7)), (l_882 , (safe_mul_func_int16_t_s_s(l_881, g_77.f2.f0)))))), 0x5D9F0F27L));
                        return l_818;
                    }
                }

                ;
                if ((((((g_99.f6.f3 && (l_803.f0 ^ (safe_mul_func_uint16_t_u_u(g_109.f1, g_109.f2.f0)))) != (safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_uint8_t_u(g_274.f6.f1)) > g_99.f6.f3), 13))) && g_711.f6.f1) | l_882.f3.f0) && g_77.f3.f0))
                {
                    char l_890 = 0xFEL;
                    struct S0 l_893 = {0x32BCBF49L,-1L,0xE84463C6L,0UL,9L};
                    struct S3 *l_897 = (void*)0;
                    struct S1 l_898 = {181};
                    struct S1 *l_899 = &l_646.f2;
                    (**g_261) = (*g_262);
                    if ((g_99.f4 , l_890))
                    {
                        (*l_571) = ((safe_mod_func_uint8_t_u_u((~func_50(l_818, l_893, ((l_894 , (l_882.f6 , (0x2B05L != 0x7C6CL))) < ((((void*)0 == (*g_304)) > g_55.f1) ^ 0xBBE1L)), g_361.f0)), g_711.f0)) == 255UL);
                    }
                    else
                    {
                        (**l_895) = (((l_895 != (g_274.f2 , ((l_698 == (void*)0) , l_896))) <= ((g_99.f5 >= (*l_7)) && (l_897 != (*g_304)))) , l_720.f6);
                    }
                    (*l_899) = l_898;
                }
                else
                {
                    int *l_905 = &g_77.f3.f1;
                    struct S2 l_906 = {0xD1L,0x06L,0x633042E9L,{4294967295UL,0L,4L,0x11AA05BDL,-6L},0x3B09A3F5L,7L,{7UL,-1L,0x825517D4L,4294967290UL,0x7C6C2AB4L}};
                    for (g_77.f1 = 20; (g_77.f1 > 15); g_77.f1 = safe_sub_func_int8_t_s_s(g_77.f1, 2))
                    {
                        unsigned l_902 = 0UL;
                        (*l_293) = (*l_749);
                        if (l_882.f6.f2)
                            continue;
                        (*l_293) = l_902;
                        (*l_571) &= 0L;
                    }
                    (*l_690) = (*l_690);
                    (*l_905) &= ((((l_903 , (*g_366)) == (void*)0) , (safe_unary_minus_func_uint32_t_u((l_906 , g_274.f6.f0)))) || g_274.f6.f3);
                }
            }

            ;
            (*l_909) = l_907;

            ;
        }


        ;
        ;
        ;
    }

    ;
    ;
    ;
    ;
    if ((*l_749))
    {
        (*l_7) = (-1L);
    }
    else
    {
        struct S1 l_915 = {108};
        int l_916 = 3L;
        for (g_109.f3.f3 = 28; (g_109.f3.f3 == 55); g_109.f3.f3++)
        {
            struct S1 l_914 = {202};
            l_916 &= (g_99.f3.f0 == (g_99.f3.f3 <= (safe_rshift_func_uint8_t_u_u((l_914 , l_914.f0), (*l_749)))));
        }
    }
    (*l_571) = (g_109.f1 | (g_361.f0 || (9UL | func_50(l_591, l_917, (g_274.f1 || (l_896 == (void*)0)), (+func_50(l_482, (**g_261), g_77.f3.f1, g_361.f1))))));
    return l_591;



}







static int * func_2(int * p_3, int * p_4, unsigned p_5, int p_6)
{
    struct S1 l_300 = {20};
    struct S0 l_301 = {0xD4AC13DEL,0xB96FF82AL,0L,1UL,0x277E4071L};
    int *l_302 = &l_301.f4;
    unsigned char l_306 = 1UL;
    unsigned l_363 = 4294967289UL;
    struct S2 l_383 = {255UL,-1L,0x8D8AB632L,{4294967294UL,0x99DB5C2EL,0xD9B4B653L,1UL,-1L},0x5C962FDFL,0L,{0xBF1E5EDFL,-3L,5L,0x4EA887DBL,0xEB7C3B76L}};
    unsigned short l_384 = 65535UL;
    unsigned short l_394 = 0x7229L;
    struct S0 **l_399 = &g_262;
    int *l_450 = (void*)0;
    int *l_481 = &g_181;
    if (func_11(l_300, func_21(p_6, func_15(l_301, l_302, func_61((safe_unary_minus_func_int32_t_s(((void*)0 != g_304))), func_50(l_300, l_301, p_6, (*l_302))), &g_181), p_6, p_5, (*l_302))))
    {
        int l_319 = 0x9FE6252CL;
        struct S3 **l_330 = &g_305;
        struct S1 l_332 = {80};
        struct S0 l_341 = {8UL,1L,0x7532DF95L,0x9E69611AL,2L};
        int *l_372 = &g_109.f3.f4;
        unsigned l_382 = 0x1EC0BD15L;
        unsigned l_447 = 4294967295UL;
        if (func_61(func_50(l_300, (*g_262), p_6, (((l_300 , l_306) , (((*l_302) ^ (safe_lshift_func_int8_t_s_u(((0UL && (+(safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((l_319 != (*l_302)), (*l_302))), 4UL)) != g_320) , 0x9FL), 2)), p_6)), 0x8C88L)))) | 0xA5E3L), 3))) | 6UL)) || (*l_302))), l_319))
        {
            int *l_333 = &l_319;
            unsigned char l_336 = 0x85L;
            struct S1 l_339 = {152};
            struct S0 l_340 = {4294967294UL,-6L,9L,0xB552E1BDL,2L};
            struct S1 **l_351 = &g_94;
            for (g_99.f3.f2 = 0; (g_99.f3.f2 == 11); g_99.f3.f2 = safe_add_func_int16_t_s_s(g_99.f3.f2, 7))
            {
                struct S1 l_325 = {171};
                struct S0 l_331 = {0x7920A1B4L,-1L,-1L,4294967292UL,0x8E06C9E7L};
                struct S2 *l_334 = (void*)0;
                struct S2 *l_335 = &g_274;
                (*l_335) = func_42(func_21(g_109.f3.f1, &p_6, (safe_sub_func_uint32_t_u_u(((g_77.f0 < (&p_6 == &g_8)) == func_50((l_325 , ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((l_330 == (void*)0), 65535UL)), p_6)) , (**g_93))), l_331, p_5, l_319)), 0xED1DD206L)), p_5, g_181), l_319, l_332, l_333, &l_319);
                if (l_336)
                    continue;
                (*l_333) ^= ((*g_94) , (safe_sub_func_int8_t_s_s(g_109.f5, func_50(l_339, l_340, g_109.f5, p_6))));
                if (((((**g_93) , func_50(l_300, l_341, (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_274.f3.f0, 9)), (*p_4))), g_274.f2)) && (9UL != (safe_mod_func_int16_t_s_s(g_55.f4, 65527UL)))) , (*l_302)))
                {
                    (*p_3) &= g_320;
                    if (g_348)
                        break;
                    for (l_340.f2 = 5; (l_340.f2 <= (-24)); --l_340.f2)
                    {
                        struct S1 ***l_352 = &l_351;
                        (*l_352) = l_351;
                        return &g_348;


                    }
                    (*p_4) &= (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(255UL, g_77.f3.f0)), 10));
                }
                else
                {
                    struct S3 l_357 = {12,1L,{132},{2UL,1L,0L,6UL,0xDF32C4DBL},8297,0x2C43A242L};
                    struct S3 *l_371 = &g_109;
                    int **l_373 = (void*)0;
                    int **l_374 = &l_302;
                    (*g_305) = l_357;
                    (*g_304) = (*g_304);
                    for (l_357.f3.f1 = 18; (l_357.f3.f1 <= (-2)); l_357.f3.f1 = safe_sub_func_uint32_t_u_u(l_357.f3.f1, 6))
                    {
                        struct S1 l_360 = {140};
                        int *l_362 = &g_77.f3.f1;
                        struct S3 *l_370 = &g_109;
                        (*l_333) |= func_11(l_360, func_15(g_361, &g_181, p_6, l_362));
                        (*p_3) = ((((l_363 , 9UL) , (safe_add_func_uint8_t_u_u((g_274.f2 != g_109.f3.f2), (&l_335 != g_366)))) > (*p_4)) ^ ((safe_lshift_func_uint16_t_u_u(func_61(((((*l_333) <= func_61(g_77.f3.f0, (*l_302))) && 0UL) && (*l_333)), (*l_362)), 5)) < g_109.f1));
                        l_371 = l_370;
                        (*l_330) = (p_5 , (*g_304));
                    }
                    (*l_374) = l_372;

                    ;
                }
            }

            ;
        }
        else
        {
            int *l_377 = &l_341.f1;
            struct S3 ***l_389 = (void*)0;
            struct S0 l_417 = {1UL,-1L,-9L,0xE70F5803L,-1L};
            struct S0 l_449 = {0UL,4L,-8L,0xF1700FE0L,0x85ECF1FBL};
            struct S2 **l_461 = &g_367;
            (*p_3) |= (safe_rshift_func_int8_t_s_u(p_5, (((((**g_304) , (*l_372)) == ((((**g_304) , (void*)0) == (void*)0) | p_6)) > g_99.f1) , l_384)));
            (*l_377) = ((1UL < (!((g_77.f2.f0 | g_55.f3) & 65535UL))) ^ ((safe_mul_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_u((&g_304 != l_389), 6)) >= ((*l_302) < ((((((safe_mul_func_uint16_t_u_u(g_110, (safe_add_func_int32_t_s_s((func_61(p_6, g_99.f1) != 1L), g_77.f1)))) <= (*l_372)) || g_109.f3.f4) <= p_5) == 4L) | g_361.f1))) <= g_274.f1) , 0xA3CDL), (*l_302))) , g_274.f3.f0));
            l_394 ^= (*l_372);
            if ((1UL | g_181))
            {
                struct S0 **l_414 = &g_262;
                int l_415 = 0xFE8C0741L;
                unsigned l_416 = 0x4A2C315AL;
                unsigned l_428 = 1UL;
                (*l_377) &= (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((g_274.f0 != (*l_372)), ((p_5 && ((((l_399 == ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(0xCCL, ((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(0L, 11)), g_274.f2)) < (safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(0x9FL, p_5)) == (*l_302)), (*p_3)))))), 3)), p_5)) , l_414)) > (*l_372)) && p_6) , 0UL)) | l_415))) > (*l_302)), l_416));
                (*p_3) = l_416;
                if ((*p_4))
                {
                    return &g_181;


                }
                else
                {
                    int **l_418 = (void*)0;
                    int **l_419 = (void*)0;
                    int **l_420 = &l_372;
                    struct S1 l_423 = {92};
                    (*l_420) = func_15(l_417, &l_319, p_6, &g_8);

                    ;
                    l_415 &= ((safe_lshift_func_int8_t_s_s(0x35L, 3)) ^ (g_361.f4 , (0x548FL > (func_11(l_300, func_21((~((l_423 , (safe_add_func_int32_t_s_s(((*p_3) <= ((safe_mul_func_uint8_t_u_u(255UL, (l_428 <= (g_429 == (void*)0)))) , (**l_420))), 5L))) < g_77.f3.f0)), (*g_430), p_5, (*l_372), g_361.f3)) != p_6))));
                }

                ;
            }
            else
            {
                struct S1 ***l_433 = &g_93;
                int l_442 = 0xFC82B215L;
                struct S0 *l_460 = (void*)0;
                struct S2 **l_462 = &g_367;
                short l_468 = 3L;
                int l_475 = (-7L);
                (**l_399) = l_417;
                (*p_3) = ((func_61(g_77.f3.f3, (safe_sub_func_uint8_t_u_u((l_433 == (void*)0), (safe_lshift_func_uint16_t_u_u(func_61((safe_mul_func_uint16_t_u_u(g_274.f3.f0, ((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(0xD8L, p_6)), (0xC0A1L != (-6L)))) >= l_442))), l_442), p_5))))) == g_99.f6.f1) >= (*l_377));
                for (g_99.f3.f4 = 0; (g_99.f3.f4 < 16); g_99.f3.f4++)
                {
                    unsigned short l_448 = 0x6960L;
                    int *l_451 = (void*)0;
                    struct S0 l_458 = {0x4DBCA335L,0xC6A01FFEL,0xC01C9519L,4UL,-3L};
                    struct S2 l_459 = {0xFEL,2L,0x64482F09L,{0UL,6L,1L,4294967289UL,0x89F24AA2L},4294967295UL,3L,{0x0AE6CDF0L,2L,0x4E5154B1L,4294967295UL,0xE6B7770AL}};
                    struct S3 *l_463 = &g_109;
                    if ((*l_377))
                        break;
                    if ((((safe_rshift_func_uint8_t_u_u(func_50(((*l_302) , l_332), (*g_262), g_99.f0, l_447), (((-6L) == 0x8593L) , g_55.f4))) >= 0x957EL) , l_448))
                    {
                        (*g_430) = (*g_430);
                        (**g_429) = func_15(l_449, l_450, ((g_99.f6.f3 || 65529UL) ^ g_274.f6.f1), func_15((**g_261), l_451, g_109.f3.f0, (**g_429)));

                        ;
                    }
                    else
                    {
                        (*p_3) = (*p_4);
                        if ((*p_4))
                            break;
                        (**l_433) = &l_332;

                        ;
                        (*l_302) |= (safe_rshift_func_int16_t_s_s(g_361.f2, 1));
                    }
                    (*l_461) = (((safe_sub_func_int16_t_s_s(((p_5 , (((*p_4) || ((*g_261) == ((((safe_rshift_func_int8_t_s_u(g_109.f5, func_50((***l_433), l_458, p_6, l_442))) & (*l_377)) , l_459) , l_460))) , l_461)) == l_462), (-5L))) >= g_77.f1) , (void*)0);

                    ;
                    (*l_302) = ((func_61((0x3C9B7DA3L || (l_463 == (p_5 , l_463))), (safe_add_func_int32_t_s_s((p_5 <= p_6), (l_468 & ((safe_sub_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((l_341 , (func_50(((((safe_mul_func_uint8_t_u_u(g_99.f1, g_55.f1)) , g_77.f3.f1) || (*l_377)) , (*g_94)), (*g_262), p_6, g_99.f1) <= (*p_3))), (-3L))) , (-2L)), 0x3DL)) != p_6))))) || p_6) , l_475);
                }

                ;
                ;
                ;
                (*p_3) &= (safe_rshift_func_int8_t_s_s(((*l_372) > (safe_sub_func_int16_t_s_s(((*g_305) , 1L), (*l_372)))), (*l_302)));
            }

            ;
            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        (**g_429) = &l_319;

        ;
        (**g_429) = (*g_430);
    }
    else
    {
        int *l_480 = (void*)0;
        (*g_430) = l_450;
        return l_480;


    }



    ;
    ;
    return l_481;


}







static char func_11(struct S1 p_12, int * p_13)
{
    struct S1 *l_295 = &g_14;
    short l_296 = 1L;
    struct S0 l_297 = {4294967288UL,0L,0L,0x014B08F3L,0x9BEB5F73L};
    unsigned l_298 = 4294967289UL;
    int *l_299 = (void*)0;
    l_299 = func_21((((((*g_93) != l_295) & l_296) , g_77) , func_61(((func_50((l_296 , (**g_93)), l_297, func_61(func_50((*l_295), (*g_262), p_12.f0, p_12.f0), l_297.f4), l_297.f2) & (-1L)) , l_298), l_297.f1)), p_13, g_77.f3.f1, l_297.f0, p_12.f0);

    ;
    return p_12.f0;
}







static int * func_15(struct S0 p_16, int * p_17, unsigned short p_18, int * p_19)
{
    int *l_294 = &g_99.f3.f1;
    g_116 = (void*)0;

    ;
    return l_294;


}







static int * func_21(short p_22, int * p_23, unsigned short p_24, unsigned char p_25, unsigned char p_26)
{
    struct S1 l_119 = {253};
    struct S0 l_120 = {0UL,0xE034FB26L,1L,1UL,0L};
    int *l_121 = &g_99.f3.f4;
    int **l_122 = (void*)0;
    int *l_123 = &g_99.f3.f1;
    struct S1 **l_132 = &g_94;
    struct S3 l_232 = {13,1L,{193},{0x3441DD44L,9L,0x1C2DE788L,0x5F0558DBL,1L},16057,0x5512F6BAL};
    struct S2 l_287 = {0x58L,0L,0xDCEC532FL,{0xA15BA079L,0x25A3B67BL,0xCB1B677FL,0x2C741952L,0xADD9ADE9L},4294967286UL,0x4BB2D5A2L,{0x068C64CDL,0L,3L,4294967295UL,1L}};
    int *l_288 = &g_109.f3.f1;
    (*l_121) ^= (func_50(l_119, (g_55 , l_120), g_99.f6.f4, func_61(p_24, g_77.f5)) || g_99.f3.f1);
    l_123 = p_23;


    if ((func_61(((safe_mod_func_int16_t_s_s(0xFD4CL, ((safe_mod_func_uint32_t_u_u((!func_61(p_24, g_109.f3.f0)), (safe_rshift_func_int16_t_s_u(0x81E7L, (g_55.f0 , (safe_rshift_func_int8_t_s_u(((*l_121) && ((&g_94 == ((((!g_14.f0) >= 7L) , (-2L)) , l_132)) , p_25)), p_24))))))) | (*l_121)))) , (-2L)), g_99.f6.f4) <= p_22))
    {
        unsigned l_133 = 0x3DFB74B6L;
        struct S0 l_140 = {4294967293UL,4L,1L,0x68905619L,0x176A3A7DL};
        struct S1 l_161 = {247};
        struct S2 *l_196 = &g_99;
        int *l_206 = &g_99.f6.f4;
        struct S1 **l_231 = &g_94;
        unsigned l_239 = 4294967291UL;
        struct S2 l_263 = {0UL,2L,-1L,{4UL,0x282847CAL,0L,0x460E461BL,0x19AEA982L},0x5EE27049L,0x0830FC22L,{0xA634E0F1L,0x4706DB24L,-6L,1UL,0xA6E63B8EL}};
        (*l_121) = l_133;
        for (g_110 = 19; (g_110 != (-23)); g_110--)
        {
            unsigned l_158 = 0xAA36CE90L;
            unsigned l_180 = 4294967295UL;
            struct S0 *l_190 = &l_120;
            struct S1 l_193 = {240};
            int *l_199 = &l_120.f4;
            struct S2 l_207 = {251UL,1L,0xF358EDC4L,{1UL,0x70E3E7A4L,0x661240B9L,0xDE121EC4L,0xC4DE9560L},4294967294UL,0x98EE419AL,{0x6F4CCFCBL,4L,0xBAC16E79L,1UL,0xBAA96F94L}};
            struct S3 l_208 = {-14,0x16488FA2L,{68},{0xC74D67DDL,0x78301716L,9L,0x9304D937L,5L},5259,0xF9C4B727L};
            (*l_121) &= func_61(p_24, p_22);
            (*l_121) &= g_14.f0;
            for (g_99.f6.f4 = 15; (g_99.f6.f4 <= (-6)); g_99.f6.f4 = safe_sub_func_int32_t_s_s(g_99.f6.f4, 2))
            {
                struct S2 *l_151 = &g_99;
                int l_162 = 0xDCC67E5AL;
                struct S1 l_186 = {240};
                struct S0 l_188 = {0x6BFD68B0L,0L,-9L,0x346875B5L,0xE0F0C496L};
                (*l_121) = ((safe_rshift_func_uint16_t_u_s((l_140 , (safe_rshift_func_int16_t_s_s(0L, 15))), 1)) <= ((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_109.f5, g_109.f3.f1)), (*l_121))), 0xA428A3EDL)) || (safe_mod_func_int16_t_s_s((((&g_99 != l_151) > 1UL) | (*l_121)), g_99.f6.f0))));
                if (func_61(((safe_mul_func_uint16_t_u_u(g_55.f0, g_99.f6.f1)) != ((((**g_93) , p_26) >= (safe_sub_func_uint16_t_u_u(((**g_93) , (safe_mul_func_uint8_t_u_u(l_158, ((safe_lshift_func_int16_t_s_u((p_22 < p_26), 15)) != func_50(l_161, l_140, l_162, p_26))))), 0x984AL))) == l_158)), l_158))
                {
                    struct S0 *l_164 = &l_120;
                    struct S0 **l_163 = &l_164;
                    (*l_163) = &l_140;

                    ;
                }
                else
                {
                    struct S0 l_173 = {0x7B0DF1BFL,0x87C1ADADL,0xF0B0CE89L,4294967295UL,-10L};
                    int **l_194 = &g_116;
                    for (l_133 = 2; (l_133 != 10); ++l_133)
                    {
                        int **l_169 = &l_121;
                        int *l_170 = &g_99.f6.f1;
                    }
                    if ((((safe_rshift_func_uint8_t_u_u((l_173 , (safe_sub_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(g_77.f5, (p_24 <= (((**g_93) , l_140.f0) == ((*g_93) == (*g_93)))))) && p_24) & (safe_mul_func_int16_t_s_s(((((p_24 , g_99.f3.f3) != p_24) , l_158) != l_180), g_99.f6.f1))), l_173.f4))), g_77.f3.f4)) , &g_94) == (void*)0))
                    {
                        (*l_121) = g_181;
                        if (l_162)
                            continue;
                    }
                    else
                    {
                        struct S1 *l_187 = &l_186;
                        struct S0 *l_189 = &l_173;
                        (*l_121) = (safe_mod_func_uint32_t_u_u(0x49B77D7FL, (((*l_132) == (*g_93)) , func_50((**l_132), l_140, (safe_add_func_uint8_t_u_u(p_24, l_140.f0)), p_26))));
                        (*l_187) = ((**g_93) , l_186);
                        (*l_121) = func_61((((((l_188 , l_189) != l_190) <= p_25) < (p_24 != l_158)) , (func_50((*g_94), (*l_189), l_158, g_109.f3.f4) & 0x159EL)), l_188.f0);
                    }
                    (*l_121) |= ((l_173 , (((safe_rshift_func_uint16_t_u_u(65532UL, 0)) ^ func_50(l_193, (*l_190), g_77.f2.f0, l_140.f2)) != g_77.f5)) == 0x3DCDL);
                    (*l_194) = (void*)0;

                    ;
                }
                (*l_121) = ((safe_unary_minus_func_uint16_t_u((&g_99 != l_196))) >= func_61(g_99.f6.f1, (l_193 , (g_99 , (*l_199)))));
            }
            (*l_121) |= (func_37(l_207, l_208, l_199, p_23) , g_77.f4);

            ;
        }
        (*l_206) = ((((*l_206) , 0UL) , (p_26 <= (p_26 == ((safe_rshift_func_uint8_t_u_u(((*l_206) ^ (safe_rshift_func_int8_t_s_s(func_50((**l_132), l_140, (((*l_121) , (*l_206)) >= g_109.f0), (*l_121)), (*l_206)))), 7)) != (-1L))))) , p_25);
        for (g_77.f5 = 24; (g_77.f5 >= (-10)); g_77.f5 = safe_sub_func_uint16_t_u_u(g_77.f5, 1))
        {
            unsigned l_219 = 1UL;
            int ***l_220 = (void*)0;
            int ***l_221 = &l_122;
            struct S1 l_224 = {176};
            struct S0 l_225 = {1UL,-9L,0x7E13B280L,4294967293UL,0x4F6DBB4FL};
            int *l_233 = (void*)0;
            int *l_234 = &g_109.f3.f4;
            int *l_291 = (void*)0;
            int *l_292 = &g_274.f6.f1;
            (*l_121) &= ((safe_lshift_func_uint16_t_u_s(65532UL, g_181)) >= ((safe_lshift_func_int8_t_s_s(p_22, 0)) || (((func_50((**g_93), g_77.f3, ((l_120 , l_120) , (p_23 != &g_8)), l_219) >= p_24) , g_55.f1) & (*l_206))));
            (*l_221) = (void*)0;
            (*l_234) ^= (safe_sub_func_int16_t_s_s((func_50(l_224, l_225, g_77.f3.f3, (((func_37(g_99, l_232, &g_181, &g_181) , g_77.f0) == g_55.f0) == 65535UL)) <= (*l_206)), 0L));

            ;
            if (p_22)
            {
                unsigned l_246 = 0x123524ABL;
                struct S1 l_254 = {103};
                int *l_266 = (void*)0;
                for (l_225.f3 = (-24); (l_225.f3 <= 26); l_225.f3++)
                {
                    short l_247 = 0x4431L;
                    (*l_121) = ((g_55.f4 & p_24) >= p_26);
                    (*l_121) &= (((safe_lshift_func_uint8_t_u_s(0x15L, (g_109 , g_109.f3.f2))) <= ((((void*)0 == (*g_93)) | (~p_26)) || l_239)) != (g_77.f4 || p_26));
                    if ((p_26 | (safe_rshift_func_int16_t_s_s(p_22, 14))))
                    {
                        struct S0 *l_243 = (void*)0;
                        struct S0 **l_242 = &l_243;
                        (*l_242) = &g_55;

                        ;
                        (*l_206) = ((*l_196) , (safe_rshift_func_int8_t_s_u(p_25, 2)));
                    }
                    else
                    {
                        struct S3 *l_248 = (void*)0;
                        struct S3 *l_249 = &l_232;
                        (*l_234) |= (p_25 && l_246);
                        if (p_26)
                            break;
                        l_247 &= p_24;
                        (*l_249) = l_232;
                    }
                }
                if ((safe_lshift_func_int16_t_s_u((((l_246 > (safe_mul_func_int8_t_s_s(func_50(l_254, g_99.f6, (((((l_224 , ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(func_61((*l_234), (g_261 == &g_262)), p_26)), 3)), 0x6CL)) , l_263)) , &l_120) == (void*)0) > 4L) && p_22), (*l_206)), p_24))) && g_55.f2) == 8UL), 7)))
                {
                    (*l_234) = 0xBBA73491L;
                    if ((((void*)0 == p_23) ^ ((void*)0 == &g_8)))
                    {
                        (**g_261) = l_225;
                    }
                    else
                    {
                        unsigned l_264 = 0x7CBF5A23L;
                        struct S1 l_265 = {212};
                        l_234 = &g_181;

                        ;
                        if (l_264)
                            continue;
                        l_265 = (**l_231);
                    }

                    ;
                    (*l_206) ^= (g_109 , p_26);
                }
                else
                {
                    int **l_267 = &l_123;
                    struct S0 l_271 = {4294967295UL,-4L,0x3680C735L,4294967295UL,0x4317772AL};
                    struct S2 l_277 = {1UL,1L,8L,{0xEC9FC870L,0xC3DA878EL,0L,0x90FCF49BL,1L},4294967295UL,0L,{4294967295UL,0xBC05D2A4L,4L,0xF9F7F214L,0x37D37DEEL}};
                    (*l_267) = &g_181;

                    ;
                    for (g_99.f6.f0 = 0; (g_99.f6.f0 < 59); g_99.f6.f0++)
                    {
                        struct S2 **l_270 = &l_196;
                        struct S1 l_275 = {206};
                        int *l_276 = &l_140.f1;
                        struct S3 *l_280 = &g_109;
                        struct S3 **l_279 = &l_280;
                        struct S3 ***l_278 = &l_279;
                        (*l_270) = &g_99;
                        if ((**l_267))
                            continue;
                        (*l_123) &= func_50(l_224, l_271, (((((safe_add_func_int8_t_s_s((g_274 , 0x95L), ((g_109.f3.f1 , g_274.f6.f4) ^ g_109.f3.f4))) > p_22) , (((l_277 , (void*)0) == (void*)0) == (*l_206))) & g_55.f3) && 65535UL), p_25);
                        (*l_278) = (void*)0;

                        ;
                    }
                    (*l_267) = l_206;

                    ;
                }

                ;
                (*l_121) = (func_61(((func_61(((*l_196) , 0xD662L), (*l_206)) , 0x1D188F84L) | p_24), p_22) <= 65535UL);
            }
            else
            {
                for (l_287.f1 = 0; (l_287.f1 > (-19)); --l_287.f1)
                {
                    return l_291;


                }
                l_292 = &g_181;

                ;
            }

            ;
            ;
        }


    }
    else
    {
        return p_23;


    }


    (*l_121) &= (-4L);
    return &g_181;


}







static struct S3 func_27(int * p_28, int * p_29)
{
    unsigned char l_30 = 0xE9L;
    unsigned l_56 = 0x62EA1E67L;
    struct S1 l_96 = {80};
    int *l_97 = &g_77.f1;
    struct S1 *l_113 = (void*)0;
    struct S1 *l_114 = &g_77.f2;
    struct S3 l_115 = {4,0x973355EAL,{241},{0x34B4E14DL,-6L,0L,4294967288UL,0x8E4492BDL},14108,-9L};
    (*p_28) = (l_30 <= (safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((func_37(func_42((((safe_mul_func_uint8_t_u_u(((func_50(g_14, g_55, (l_56 ^ (&g_8 == p_28)), ((((safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((*p_29), (g_55.f1 | func_61(l_56, l_30)))) < 0xF88EL), 1UL)) , 0xA01C1786L) || 1UL) <= g_55.f3)) == g_77.f3.f3) & l_30), g_77.f1)) || l_56) , (void*)0), g_77.f3.f1, l_96, p_29, l_97), g_109, l_97, &g_8) , g_99.f6.f4), g_109.f0)), g_77.f3.f3)), 0x7C96881AL)));
    (*l_114) = (*g_94);
    return l_115;
}







static struct S3 func_37(struct S2 p_38, struct S3 p_39, int * p_40, int * p_41)
{
    struct S1 *l_111 = &g_14;
    struct S3 l_112 = {-12,1L,{217},{4294967291UL,0xDB076588L,0x1C0A70E4L,0x8E59B3DBL,0L},25766,-1L};
    (*p_40) = g_110;
    (*g_93) = l_111;

    ;
    return l_112;
}







static struct S2 func_42(int * p_43, char p_44, struct S1 p_45, int * p_46, int * p_47)
{
    struct S2 *l_98 = &g_99;
    int *l_100 = &g_77.f3.f4;
    l_98 = (g_55.f4 , l_98);
    l_100 = &g_8;

    ;
    (*p_47) = (((p_44 < (safe_add_func_int8_t_s_s((-1L), p_44))) && (*p_46)) & ((safe_lshift_func_uint8_t_u_u(((~((*l_100) == g_77.f2.f0)) | ((safe_rshift_func_uint8_t_u_u(((void*)0 != l_98), func_61((safe_rshift_func_uint8_t_u_s(((*l_100) > (*p_46)), 6)), g_55.f3))) & 0x6351EF71L)), p_44)) & g_99.f6.f2));
    return (*l_98);
}







static unsigned char func_50(struct S1 p_51, struct S0 p_52, char p_53, char p_54)
{
    unsigned l_82 = 4294967295UL;
    unsigned l_84 = 0x35FD513FL;
    struct S1 l_91 = {97};
    int *l_92 = &g_77.f3.f4;
    if (func_61(func_61(p_52.f4, p_52.f3), p_51.f0))
    {
        struct S3 l_69 = {1,0x7F4EAFE1L,{66},{9UL,0xD1A1A39BL,7L,0UL,4L},12762,0xEEAF0C93L};
        unsigned l_83 = 0x9D0C5B63L;
        struct S1 **l_95 = &g_94;
        for (p_52.f4 = 18; (p_52.f4 <= (-1)); p_52.f4 = safe_sub_func_int16_t_s_s(p_52.f4, 6))
        {
            int *l_71 = &g_55.f1;
            struct S1 *l_72 = &l_69.f2;
            (*l_71) ^= (p_52.f1 , (!(p_54 <= (p_53 > (((l_69 , func_61(g_55.f0, p_54)) > l_69.f2.f0) ^ (safe_unary_minus_func_uint32_t_u(0UL)))))));
            (*l_72) = g_14;
            p_52.f1 = ((p_52.f0 & g_55.f3) > ((safe_rshift_func_int8_t_s_s(((g_55.f4 & (((p_51.f0 && p_52.f2) == (safe_mul_func_int8_t_s_s(((g_77 , (safe_rshift_func_int16_t_s_u((~(1UL || func_61((((g_8 > ((safe_add_func_uint16_t_u_u((p_53 & l_82), 0xB5DFL)) && p_52.f1)) > p_51.f0) | 0x44L), g_77.f2.f0))), 3))) == g_77.f3.f3), l_83))) , (*l_71))) && g_77.f2.f0), 4)) , g_55.f2));
            if (l_69.f3.f0)
                break;
        }
        l_69.f1 = func_61(l_84, (func_61((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((+p_52.f0), (l_91 , ((void*)0 != l_92)))), 0xE558L)), g_77.f3.f0) | (((&p_51 == &p_51) < p_52.f0) <= g_8)));
        l_95 = g_93;
    }
    else
    {
        g_77.f3.f4 ^= p_53;
    }
    return (*l_92);
}







static unsigned func_61(short p_62, int p_63)
{
    struct S1 l_64 = {82};
    struct S1 *l_66 = &l_64;
    struct S1 **l_65 = &l_66;
    l_64 = l_64;
    (*l_65) = &g_14;

    ;
    return p_62;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_55.f1, "g_55.f1", print_hash_value);
    transparent_crc(g_55.f2, "g_55.f2", print_hash_value);
    transparent_crc(g_55.f3, "g_55.f3", print_hash_value);
    transparent_crc(g_55.f4, "g_55.f4", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2.f0, "g_77.f2.f0", print_hash_value);
    transparent_crc(g_77.f3.f0, "g_77.f3.f0", print_hash_value);
    transparent_crc(g_77.f3.f1, "g_77.f3.f1", print_hash_value);
    transparent_crc(g_77.f3.f2, "g_77.f3.f2", print_hash_value);
    transparent_crc(g_77.f3.f3, "g_77.f3.f3", print_hash_value);
    transparent_crc(g_77.f3.f4, "g_77.f3.f4", print_hash_value);
    transparent_crc(g_77.f4, "g_77.f4", print_hash_value);
    transparent_crc(g_77.f5, "g_77.f5", print_hash_value);
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_99.f1, "g_99.f1", print_hash_value);
    transparent_crc(g_99.f2, "g_99.f2", print_hash_value);
    transparent_crc(g_99.f3.f0, "g_99.f3.f0", print_hash_value);
    transparent_crc(g_99.f3.f1, "g_99.f3.f1", print_hash_value);
    transparent_crc(g_99.f3.f2, "g_99.f3.f2", print_hash_value);
    transparent_crc(g_99.f3.f3, "g_99.f3.f3", print_hash_value);
    transparent_crc(g_99.f3.f4, "g_99.f3.f4", print_hash_value);
    transparent_crc(g_99.f4, "g_99.f4", print_hash_value);
    transparent_crc(g_99.f5, "g_99.f5", print_hash_value);
    transparent_crc(g_99.f6.f0, "g_99.f6.f0", print_hash_value);
    transparent_crc(g_99.f6.f1, "g_99.f6.f1", print_hash_value);
    transparent_crc(g_99.f6.f2, "g_99.f6.f2", print_hash_value);
    transparent_crc(g_99.f6.f3, "g_99.f6.f3", print_hash_value);
    transparent_crc(g_99.f6.f4, "g_99.f6.f4", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_109.f2.f0, "g_109.f2.f0", print_hash_value);
    transparent_crc(g_109.f3.f0, "g_109.f3.f0", print_hash_value);
    transparent_crc(g_109.f3.f1, "g_109.f3.f1", print_hash_value);
    transparent_crc(g_109.f3.f2, "g_109.f3.f2", print_hash_value);
    transparent_crc(g_109.f3.f3, "g_109.f3.f3", print_hash_value);
    transparent_crc(g_109.f3.f4, "g_109.f3.f4", print_hash_value);
    transparent_crc(g_109.f4, "g_109.f4", print_hash_value);
    transparent_crc(g_109.f5, "g_109.f5", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_274.f0, "g_274.f0", print_hash_value);
    transparent_crc(g_274.f1, "g_274.f1", print_hash_value);
    transparent_crc(g_274.f2, "g_274.f2", print_hash_value);
    transparent_crc(g_274.f3.f0, "g_274.f3.f0", print_hash_value);
    transparent_crc(g_274.f3.f1, "g_274.f3.f1", print_hash_value);
    transparent_crc(g_274.f3.f2, "g_274.f3.f2", print_hash_value);
    transparent_crc(g_274.f3.f3, "g_274.f3.f3", print_hash_value);
    transparent_crc(g_274.f3.f4, "g_274.f3.f4", print_hash_value);
    transparent_crc(g_274.f4, "g_274.f4", print_hash_value);
    transparent_crc(g_274.f5, "g_274.f5", print_hash_value);
    transparent_crc(g_274.f6.f0, "g_274.f6.f0", print_hash_value);
    transparent_crc(g_274.f6.f1, "g_274.f6.f1", print_hash_value);
    transparent_crc(g_274.f6.f2, "g_274.f6.f2", print_hash_value);
    transparent_crc(g_274.f6.f3, "g_274.f6.f3", print_hash_value);
    transparent_crc(g_274.f6.f4, "g_274.f6.f4", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_361.f0, "g_361.f0", print_hash_value);
    transparent_crc(g_361.f1, "g_361.f1", print_hash_value);
    transparent_crc(g_361.f2, "g_361.f2", print_hash_value);
    transparent_crc(g_361.f3, "g_361.f3", print_hash_value);
    transparent_crc(g_361.f4, "g_361.f4", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    transparent_crc(g_648, "g_648", print_hash_value);
    transparent_crc(g_696.f0, "g_696.f0", print_hash_value);
    transparent_crc(g_711.f0, "g_711.f0", print_hash_value);
    transparent_crc(g_711.f1, "g_711.f1", print_hash_value);
    transparent_crc(g_711.f2, "g_711.f2", print_hash_value);
    transparent_crc(g_711.f3.f0, "g_711.f3.f0", print_hash_value);
    transparent_crc(g_711.f3.f1, "g_711.f3.f1", print_hash_value);
    transparent_crc(g_711.f3.f2, "g_711.f3.f2", print_hash_value);
    transparent_crc(g_711.f3.f3, "g_711.f3.f3", print_hash_value);
    transparent_crc(g_711.f3.f4, "g_711.f3.f4", print_hash_value);
    transparent_crc(g_711.f4, "g_711.f4", print_hash_value);
    transparent_crc(g_711.f5, "g_711.f5", print_hash_value);
    transparent_crc(g_711.f6.f0, "g_711.f6.f0", print_hash_value);
    transparent_crc(g_711.f6.f1, "g_711.f6.f1", print_hash_value);
    transparent_crc(g_711.f6.f2, "g_711.f6.f2", print_hash_value);
    transparent_crc(g_711.f6.f3, "g_711.f6.f3", print_hash_value);
    transparent_crc(g_711.f6.f4, "g_711.f6.f4", print_hash_value);
    transparent_crc(g_859, "g_859", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
