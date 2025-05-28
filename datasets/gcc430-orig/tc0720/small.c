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
   const int f0;
   unsigned char f1;
   unsigned short f2;
   const short f3;
   unsigned f4;
   unsigned short f5;
   unsigned f6;
   const unsigned f7;
   int f8;
   short f9;
};

struct S1 {
   int f0;
   unsigned f1;
   const unsigned f2;
   unsigned f3;
   unsigned f4;
   struct S0 f5;
   unsigned short f6;
   const unsigned char f7;
   int f8;
   unsigned short f9;
};


static char g_7 = (-5L);
static struct S1 *g_34 = (void*)0;
static int g_45 = 0x0E848967L;
static struct S1 g_53 = {0xADB5D230L,0xB6311140L,0xE7762969L,4294967294UL,4UL,{0x27815014L,247UL,7UL,0xFCA4L,0xBAB92A1DL,0x6B9EL,0x499E98C5L,4294967294UL,0x200138D7L,0xFBAEL},0x4FD5L,254UL,0x51C18CC9L,0x7F7AL};
static int * const g_71 = (void*)0;
static int *g_82[7] = {&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8};
static struct S0 * const g_113 = &g_53.f5;
static struct S1 *g_181 = (void*)0;
static struct S0 g_214 = {0x9FDFB362L,0UL,1UL,0x6DFEL,0x36F4B36EL,0xFF39L,4294967290UL,1UL,-1L,0xA7FDL};
static const struct S0 *g_213 = &g_214;
static struct S0 * const *g_232 = &g_113;
static struct S0 * const ** const g_231 = &g_232;
static int *g_300 = &g_53.f8;
static int **g_358 = (void*)0;
static int ***g_357[10] = {&g_358,&g_358,&g_358,&g_358,&g_358,&g_358,&g_358,&g_358,&g_358,&g_358};
static struct S0 g_404 = {0x837FDD56L,1UL,0UL,1L,2UL,0x0D8EL,1UL,0xFBE20377L,0x1BBE68C7L,1L};
static int *g_432 = &g_53.f8;
static int g_458 = 1L;
static const int *g_523[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static unsigned g_564 = 0x4C9A8CFAL;
static int *g_632 = &g_53.f0;



static struct S0 func_1(void);
static unsigned func_4(short p_5, unsigned char p_6);
static int func_9(int p_10, short p_11, unsigned p_12, int p_13);
static const char func_24(char p_25, unsigned p_26);
static unsigned func_27(unsigned p_28, unsigned char p_29);
static struct S1 * func_30(struct S1 * p_31, unsigned char p_32, struct S1 * p_33);
static char func_39(char p_40, unsigned short p_41, struct S1 * p_42);
static unsigned short func_46(struct S1 * p_47, struct S1 * p_48, unsigned p_49, unsigned char p_50, char p_51);
static struct S1 * func_54(unsigned p_55, int p_56, const struct S0 p_57);
static int * func_60(unsigned short p_61);
static struct S0 func_1(void)
{
    unsigned l_8[5][8] = {{0x1320F2D6L,0xC4DDB84CL,0xC4DDB84CL,0x1320F2D6L,4294967293UL,0x1320F2D6L,0xC4DDB84CL,0xC4DDB84CL},{0xC4DDB84CL,4294967293UL,7UL,7UL,4294967293UL,0xC4DDB84CL,4294967293UL,7UL},{0x1320F2D6L,4294967293UL,0x1320F2D6L,0xC4DDB84CL,0xC4DDB84CL,0x1320F2D6L,4294967293UL,0x1320F2D6L},{4294967293UL,0UL,0x1320F2D6L,0UL,4294967293UL,4294967293UL,0UL,0x1320F2D6L},{4294967293UL,4294967293UL,0UL,0x1320F2D6L,0UL,4294967293UL,4294967293UL,0UL}};
    unsigned l_483[2];
    struct S1 *l_490 = (void*)0;
    unsigned l_491 = 9UL;
    char l_505 = 0xADL;
    int l_513[3];
    int *l_516[7] = {(void*)0,&g_45,&g_45,(void*)0,&g_45,&g_45,(void*)0};
    int *l_555 = &l_513[2];
    unsigned l_561 = 1UL;
    unsigned short l_563 = 0xA1EAL;
    struct S0 *l_570[9] = {&g_214,&g_404,&g_214,&g_214,&g_404,&g_214,&g_214,&g_404,&g_214};
    struct S0 ** const l_569 = &l_570[5];
    struct S0 ** const *l_568 = &l_569;
    unsigned l_575 = 0x8113A185L;
    char l_580 = 0L;
    unsigned l_586 = 0x80BA704DL;
    short l_626 = (-3L);
    unsigned short l_627 = 65527UL;
    int **l_646 = (void*)0;
    int **l_647 = (void*)0;
    int **l_648 = &l_516[3];
    struct S0 l_649[2] = {{5L,0xE2L,0x34E3L,7L,4UL,0x8D93L,0xF952ECD1L,0UL,0xE8EEF08CL,0x1B09L},{5L,0xE2L,0x34E3L,7L,4UL,0x8D93L,0xF952ECD1L,0UL,0xE8EEF08CL,0x1B09L}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_483[i] = 4294967295UL;
    for (i = 0; i < 3; i++)
        l_513[i] = 1L;
    if ((safe_rshift_func_int8_t_s_u(((func_4(g_7, ((1L | l_8[4][0]) ^ (func_9(l_8[2][4], (safe_mul_func_int8_t_s_s(g_7, (((((safe_add_func_uint32_t_u_u((+(safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(func_24(g_7, func_27(g_7, g_7)), 3)), l_8[1][7])), (-1L)))), g_53.f5.f3)) == 1L) && l_8[4][0]) && 0x36L) > g_214.f9))), g_53.f7, l_8[4][0]) > l_8[4][0]))) & l_8[4][2]) == 0UL), 0)))
    {
        return (**g_232);
    }
    else
    {
        int * const *l_482 = &g_82[3];
        int * const **l_481 = &l_482;
        (*l_481) = (void*)0;
    }
    (*g_300) = (l_483[0] & func_39(((l_483[0] ^ ((1L < 0x6EF1L) & l_8[0][6])) <= l_483[1]), ((l_8[4][0] & (safe_lshift_func_int16_t_s_u(g_53.f3, (safe_rshift_func_uint8_t_u_u(g_53.f0, 7))))) <= g_53.f5.f0), &g_53));
    if (((l_483[0] & 0x85L) == g_214.f1))
    {
        unsigned char l_493 = 0UL;
        struct S0 l_501 = {0L,0x40L,65530UL,0xCCB8L,0xC973C285L,0x16D0L,9UL,4294967295UL,0x79B48A4BL,0x7D18L};
        short l_512 = 0xA028L;
        struct S1 **l_542 = (void*)0;
        struct S0 ***l_547 = (void*)0;
        struct S1 *l_550 = &g_53;
        int l_551[1][8];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
                l_551[i][j] = 1L;
        }
        if ((0xC6AB26D6L && 4294967292UL))
        {
            struct S0 l_492 = {0xF487A3D6L,0x1EL,1UL,0xAC28L,0x53A4C4E3L,65534UL,0x2B847695L,0x9385A851L,4L,-9L};
            return l_492;
        }
        else
        {
            char l_502[3];
            int **l_503 = &g_300;
            int i;
            for (i = 0; i < 3; i++)
                l_502[i] = (-1L);
            (*g_300) ^= l_493;
            for (g_53.f8 = 0; (g_53.f8 > 21); g_53.f8 = safe_add_func_int16_t_s_s(g_53.f8, 7))
            {
                struct S1 **l_496 = &g_34;
                int l_504 = 0x3B54D6EAL;
                (*l_496) = &g_53;
                (*g_300) = l_493;
                if (l_8[4][0])
                {
                    struct S1 *l_497 = &g_53;
                    if ((g_404.f2 != g_214.f9))
                    {
                        struct S0 **l_498 = (void*)0;
                        struct S0 *l_500 = &g_404;
                        struct S0 **l_499 = &l_500;
                        (*l_496) = l_497;
                        if (l_491)
                            break;
                        (*l_499) = (*g_232);
                    }
                    else
                    {
                        return l_501;
                    }
                    if (l_502[0])
                        continue;
                    (**l_503) |= (((void*)0 == l_503) < g_214.f5);
                }
                else
                {
                    l_505 ^= l_504;
                }
            }
        }
        for (g_404.f5 = 0; (g_404.f5 <= 55); g_404.f5++)
        {
            l_513[2] = (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((0x45L | l_512), g_53.f1)), 0x74C09857L));
            (*g_300) ^= (g_404.f7 && 0xDCB65591L);
        }
        if ((safe_rshift_func_int8_t_s_u(l_513[2], 1)))
        {
            int **l_517 = &g_82[3];
            (*l_517) = l_516[3];
        }
        else
        {
            struct S1 *l_533 = &g_53;
            int l_536 = 0x8E04B44DL;
            struct S0 *l_539 = &g_404;
            for (l_501.f2 = 28; (l_501.f2 > 57); l_501.f2 = safe_add_func_int8_t_s_s(l_501.f2, 5))
            {
                const int *l_522 = (void*)0;
                for (g_53.f8 = 0; (g_53.f8 <= 9); g_53.f8++)
                {
                    unsigned char l_530[7] = {0x5DL,0UL,0UL,0x5DL,0UL,0UL,0x5DL};
                    struct S1 *l_537 = &g_53;
                    int **l_538 = &g_432;
                    int i;
                    g_523[0][2] = l_522;
                    (*g_300) = (safe_add_func_uint32_t_u_u(4294967295UL, (safe_sub_func_uint32_t_u_u(0xF8184A59L, func_39(func_39((safe_mul_func_int16_t_s_s(l_530[6], (!((l_530[0] >= (safe_add_func_int16_t_s_s((l_533 != l_490), g_53.f1))) & (func_39((((safe_rshift_func_int16_t_s_s(g_404.f6, g_53.f5.f2)) < 0x03L) < 0x5E430D57L), l_501.f7, &g_53) || l_536))))), g_7, l_537), g_53.f6, &g_53)))));
                    (*l_538) = &l_536;
                    g_213 = l_539;
                }
                if (l_501.f9)
                    break;
            }
            (*g_300) ^= (safe_rshift_func_uint8_t_u_u(255UL, ((void*)0 != l_542)));
        }
        for (g_53.f1 = 2; (g_53.f1 <= 9); g_53.f1 += 1)
        {
            int *l_543 = &l_513[0];
            int **l_544 = &l_543;
            struct S0 *l_553 = &g_53.f5;
            struct S1 *l_558 = &g_53;
            struct S1 **l_565 = &g_34;
            (*l_544) = l_543;
            l_551[0][3] ^= (g_7 ^ ((**l_544) <= ((safe_lshift_func_uint8_t_u_s(((func_24((((void*)0 == l_547) || func_39((safe_sub_func_int32_t_s_s((*g_300), g_53.f5.f3)), l_501.f4, l_550)), g_214.f3) == g_404.f0) < g_53.f5.f0), g_53.f5.f7)) >= 0x33B659FAL)));
            for (g_45 = 0; (g_45 <= 9); g_45 += 1)
            {
                int l_552 = 5L;
                if ((l_552 == (g_214.f6 == 0xED1A0BC1L)))
                {
                    struct S0 **l_554[7] = {&l_553,&l_553,&l_553,&l_553,&l_553,&l_553,&l_553};
                    int l_562 = (-1L);
                    int i;
                    g_213 = l_553;
                    (*l_544) = l_555;
                    l_552 &= ((safe_sub_func_uint8_t_u_u(((g_458 || (**l_544)) & 0x680DL), l_562)) < l_501.f4);
                }
                else
                {
                    int *l_567 = &l_551[0][0];
                    for (g_404.f6 = 2; (g_404.f6 <= 9); g_404.f6 += 1)
                    {
                        struct S1 ***l_566 = &l_565;
                        if (g_564)
                            break;
                        (*l_566) = l_565;
                        if (l_552)
                            continue;
                    }
                    l_567 = (*l_544);
                    (*l_567) ^= (0xB21C5543L & ((void*)0 != l_568));
                }
            }
        }
    }
    else
    {
        unsigned l_573 = 0x212535AEL;
        int l_574 = (-7L);
        short l_589 = (-9L);
        struct S1 *l_594 = &g_53;
        int l_599 = 2L;
        int l_635 = 5L;
        struct S0 *l_643[2];
        int i;
        for (i = 0; i < 2; i++)
            l_643[i] = &g_53.f5;
        l_574 = (safe_rshift_func_uint16_t_u_u((l_573 < (&g_232 == &g_232)), g_214.f1));
        if (l_575)
        {
            unsigned short l_581 = 0x55BAL;
            int *l_607 = &l_574;
            int l_610 = (-9L);
            const unsigned l_642 = 0x01C05BFCL;
            (*g_300) = (*g_300);
            for (g_53.f5.f4 = 0; (g_53.f5.f4 == 26); g_53.f5.f4 = safe_add_func_int8_t_s_s(g_53.f5.f4, 5))
            {
                unsigned l_595 = 0x15C0A884L;
                if (l_581)
                {
                    int **l_584 = (void*)0;
                    int **l_585 = &g_82[2];
                    if (l_581)
                        break;
                    (*l_555) = (((safe_mod_func_int32_t_s_s(l_574, g_404.f2)) < (g_53.f8 < g_404.f9)) & l_574);
                    (*l_585) = &l_513[1];
                    for (l_575 = 0; (l_575 <= 0); l_575 += 1)
                    {
                        const int **l_587 = &g_523[l_575][(l_575 + 2)];
                        int i, j;
                        (*l_555) &= (l_586 >= 1L);
                        g_523[l_575][(l_575 + 2)] = g_523[l_575][(l_575 + 2)];
                        (*l_587) = g_523[l_575][(l_575 + 1)];
                    }
                }
                else
                {
                    struct S0 **l_588 = &l_570[5];
                    int l_596 = 0L;
                    (*l_588) = (*g_232);
                    l_589 = ((void*)0 == &l_574);
                    (*g_300) = ((safe_add_func_uint16_t_u_u((l_581 <= ((l_594 == (void*)0) < (0x46760895L | g_214.f4))), ((((l_595 != (l_596 <= g_53.f5.f5)) & (safe_sub_func_int16_t_s_s(l_573, 0UL))) >= g_53.f5.f7) == g_404.f9))) <= g_214.f4);
                }
                if (l_599)
                    break;
            }
            for (l_563 = 0; (l_563 != 9); l_563 = safe_add_func_uint16_t_u_u(l_563, 6))
            {
                int **l_602 = &g_82[3];
                int l_623 = 0xF64085D2L;
                if (l_581)
                {
                    (*l_555) = 0L;
                }
                else
                {
                    (*l_555) = 4L;
                }
                (*l_602) = (void*)0;
                (*l_607) = (~(((safe_add_func_uint8_t_u_u(5UL, (safe_lshift_func_uint16_t_u_u((0x99L == (l_607 != (void*)0)), 8)))) ^ (*l_555)) ^ 0x051C929FL));
                for (g_564 = 9; (g_564 > 22); ++g_564)
                {
                    char l_620 = 3L;
                    if ((*l_607))
                    {
                        unsigned short l_615 = 0x8150L;
                        (*l_607) |= l_610;
                        (*l_607) ^= func_24(((((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(g_214.f7, g_214.f7)), g_404.f5)) > (l_615 | (0L || (65527UL == (safe_rshift_func_int8_t_s_u(((*g_231) != (*g_231)), ((safe_add_func_int32_t_s_s((65528UL ^ g_214.f1), (-1L))) <= (*l_555)))))))) ^ 0L) > l_589), l_615);
                        (*l_607) = (*g_300);
                        l_516[3] = &l_599;
                    }
                    else
                    {
                        l_627 ^= ((((func_24(g_404.f5, g_53.f4) < g_404.f3) > 5UL) ^ l_626) | 0xE1A4L);
                    }
                    for (g_53.f3 = 0; (g_53.f3 <= 1); g_53.f3 += 1)
                    {
                        int i;
                        if (l_483[g_53.f3])
                            break;
                        if (l_483[g_53.f3])
                            continue;
                        (*g_632) |= (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(l_620, g_53.f1)), 7L));
                    }
                    (*l_602) = &l_513[2];
                    (*g_632) = (((safe_add_func_uint16_t_u_u((!((g_564 | (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((**g_231) != (*g_232)) <= (safe_lshift_func_int8_t_s_s(l_642, 1))), 0xFEL)), 247UL))) >= 1L)), g_53.f8)) ^ l_620) >= g_404.f0);
                }
            }
            (*l_569) = l_643[1];
        }
        else
        {
            (*g_300) |= (safe_lshift_func_int16_t_s_s(0x56BEL, 12));
        }
    }
    (*l_648) = &l_513[2];
    return l_649[1];
}







static unsigned func_4(short p_5, unsigned char p_6)
{
    int *l_460 = &g_45;
    for (g_7 = 0; (g_7 <= 6); g_7 += 1)
    {
        unsigned char l_454[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
        struct S1 *l_473[3][5] = {{&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53}};
        unsigned char l_475 = 0x97L;
        int i, j;
        (*g_300) |= l_454[2];
        for (g_53.f6 = 0; (g_53.f6 <= 6); g_53.f6 += 1)
        {
            int *l_455 = &g_53.f8;
            struct S1 *l_457[1][10][4] = {{{&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53}}};
            int i, j, k;
            for (g_53.f3 = 0; (g_53.f3 <= 5); g_53.f3 += 1)
            {
                struct S1 *l_456 = (void*)0;
                int l_459 = (-1L);
                short l_476 = 0xD8C3L;
                int i;
                if (l_454[g_53.f3])
                {
                    int i;
                    for (g_53.f5.f9 = 1; (g_53.f5.f9 <= 6); g_53.f5.f9 += 1)
                    {
                        return p_5;
                    }
                    g_82[(g_53.f3 + 1)] = l_455;
                    l_459 |= p_6;
                }
                else
                {
                    int *l_461 = &l_459;
                    l_461 = l_460;
                    for (g_53.f1 = 0; (g_53.f1 <= 5); g_53.f1 += 1)
                    {
                        unsigned l_464 = 0xD3C9E120L;
                        struct S1 *l_474 = &g_53;
                        (*g_300) = (p_5 == p_5);
                        return g_214.f5;
                    }
                }
            }
            (*l_455) ^= (*l_460);
        }
    }
    (*l_460) = (p_6 | p_5);
    return g_53.f5.f4;
}







static int func_9(int p_10, short p_11, unsigned p_12, int p_13)
{
    int l_416 = 0L;
    int *l_422 = &g_53.f8;
    if ((safe_mod_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((0L >= (g_53.f5.f4 && (~0x7CL))), (safe_lshift_func_int16_t_s_u(0xA57FL, 9)))) || p_13), (*g_300))))
    {
        int **l_412[6] = {&g_82[2],&g_82[1],&g_82[1],&g_82[2],&g_82[1],&g_82[1]};
        int ***l_413 = &l_412[2];
        struct S1 *l_430 = &g_53;
        int l_436 = 0xD8C9C1CAL;
        int i;
        (*g_300) = p_11;
        (*l_413) = l_412[3];
        for (g_214.f4 = 0; (g_214.f4 < 53); ++g_214.f4)
        {
            return l_416;
        }
        for (g_404.f9 = 0; (g_404.f9 < 25); g_404.f9 = safe_add_func_uint32_t_u_u(g_404.f9, 9))
        {
            struct S1 *l_425[3];
            int l_452 = (-1L);
            int i;
            for (i = 0; i < 3; i++)
                l_425[i] = &g_53;
            for (g_53.f0 = (-22); (g_53.f0 != 6); g_53.f0 = safe_add_func_int16_t_s_s(g_53.f0, 1))
            {
                int *l_421 = &g_53.f0;
                (*g_300) = 0xD1FC7F73L;
                l_422 = l_421;
                for (g_53.f4 = (-20); (g_53.f4 <= 32); ++g_53.f4)
                {
                    struct S1 *l_426 = &g_53;
                    int l_429 = 0x180F38FBL;
                    unsigned char l_431[10] = {8UL,0x8EL,0x8EL,8UL,0x8EL,0x8EL,8UL,0x8EL,0x8EL,8UL};
                    struct S0 *l_451[7][7][5] = {{{(void*)0,(void*)0,&g_53.f5,&g_404,&g_214},{&g_214,&g_404,(void*)0,&g_404,&g_404},{(void*)0,&g_404,&g_53.f5,&g_404,&g_214},{(void*)0,&g_214,&g_404,&g_404,&g_404},{&g_214,&g_404,&g_214,&g_53.f5,&g_404},{(void*)0,&g_53.f5,&g_53.f5,&g_53.f5,(void*)0},{&g_53.f5,&g_214,&g_404,&g_214,&g_214}},{{&g_53.f5,(void*)0,(void*)0,&g_214,&g_214},{&g_214,&g_214,&g_404,&g_214,&g_214},{&g_214,&g_214,&g_214,&g_214,(void*)0},{&g_214,&g_53.f5,&g_214,&g_404,&g_404},{&g_214,(void*)0,&g_404,&g_53.f5,&g_404},{&g_214,&g_53.f5,&g_214,&g_214,&g_214},{&g_404,&g_404,(void*)0,&g_53.f5,&g_53.f5}},{{(void*)0,&g_53.f5,&g_214,&g_404,(void*)0},{&g_214,&g_214,&g_214,&g_404,&g_404},{&g_53.f5,&g_404,&g_53.f5,&g_53.f5,&g_404},{(void*)0,&g_214,&g_404,&g_53.f5,&g_214},{&g_214,&g_404,&g_53.f5,&g_214,&g_214},{&g_53.f5,(void*)0,&g_404,&g_214,&g_214},{(void*)0,(void*)0,&g_53.f5,&g_53.f5,&g_214}},{{&g_53.f5,&g_214,&g_214,(void*)0,&g_404},{&g_404,(void*)0,&g_214,(void*)0,&g_404},{&g_214,&g_404,(void*)0,&g_404,&g_404},{&g_53.f5,&g_404,&g_404,&g_214,(void*)0},{(void*)0,(void*)0,&g_404,(void*)0,&g_53.f5},{&g_404,&g_214,&g_404,&g_404,&g_214},{&g_214,(void*)0,&g_214,&g_214,&g_404}},{{(void*)0,(void*)0,&g_404,&g_214,&g_53.f5},{&g_404,&g_404,(void*)0,(void*)0,&g_404},{(void*)0,&g_214,(void*)0,&g_214,&g_214},{&g_214,&g_404,(void*)0,&g_404,&g_214},{&g_404,&g_404,(void*)0,&g_404,&g_214},{&g_404,&g_214,&g_214,(void*)0,&g_404},{&g_404,&g_404,&g_404,&g_53.f5,&g_404}},{{&g_404,&g_53.f5,&g_404,&g_404,&g_214},{&g_214,&g_404,(void*)0,&g_404,&g_53.f5},{&g_214,&g_214,&g_214,&g_214,&g_53.f5},{(void*)0,&g_53.f5,&g_53.f5,&g_214,&g_214},{&g_214,&g_214,&g_404,&g_404,&g_214},{&g_214,&g_53.f5,&g_214,&g_214,(void*)0},{&g_53.f5,&g_214,(void*)0,&g_214,&g_53.f5}},{{&g_214,&g_404,&g_53.f5,&g_404,(void*)0},{&g_53.f5,&g_53.f5,(void*)0,&g_404,&g_214},{&g_214,&g_53.f5,(void*)0,&g_53.f5,&g_53.f5},{&g_404,&g_214,(void*)0,(void*)0,(void*)0},{&g_53.f5,(void*)0,(void*)0,&g_404,&g_214},{&g_214,(void*)0,&g_53.f5,(void*)0,&g_53.f5},{(void*)0,(void*)0,(void*)0,&g_53.f5,&g_404}}};
                    struct S0 **l_450 = &l_451[0][5][4];
                    int i, j, k;
                    if ((((func_39(p_12, p_11, l_425[0]) ^ (l_426 != (void*)0)) <= 0x6C4EL) & ((safe_lshift_func_uint8_t_u_s(l_429, p_13)) < g_214.f6)))
                    {
                        struct S1 *l_433 = &g_53;
                        const int l_447 = 0x8154D8D8L;
                        g_432 = &p_13;
                        (*g_300) = p_10;
                        (*g_300) = (~0L);
                    }
                    else
                    {
                        struct S0 *l_449 = (void*)0;
                        struct S0 **l_448 = &l_449;
                        (*g_432) ^= ((*l_421) == (*l_422));
                        if (l_452)
                            continue;
                        (*g_300) = 0x3BA10BEDL;
                    }
                    return p_13;
                }
                (*g_300) ^= p_11;
            }
        }
    }
    else
    {
        short l_453 = 0L;
        return l_453;
    }
    return (*l_422);
}







static const char func_24(char p_25, unsigned p_26)
{
    char l_339[2];
    struct S1 *l_341 = &g_53;
    int ***l_359 = &g_358;
    struct S0 *l_380 = &g_53.f5;
    int l_402[7];
    int i;
    for (i = 0; i < 2; i++)
        l_339[i] = (-1L);
    for (i = 0; i < 7; i++)
        l_402[i] = 0x72F0C999L;
    for (g_214.f6 = 0; (g_214.f6 <= 6); g_214.f6 += 1)
    {
        int l_340 = 0xB04EF031L;
        struct S0 *l_371[6][10] = {{&g_53.f5,&g_53.f5,(void*)0,&g_53.f5,&g_214,&g_214,&g_53.f5,(void*)0,&g_53.f5,&g_53.f5},{(void*)0,&g_53.f5,&g_214,(void*)0,&g_53.f5,(void*)0,&g_214,&g_53.f5,&g_214,&g_214},{(void*)0,&g_214,(void*)0,&g_53.f5,&g_53.f5,(void*)0,&g_214,(void*)0,(void*)0,(void*)0},{&g_53.f5,&g_214,(void*)0,&g_53.f5,(void*)0,&g_214,&g_53.f5,&g_214,&g_214,&g_53.f5},{&g_214,(void*)0,(void*)0,(void*)0,(void*)0,&g_214,&g_214,(void*)0,&g_214,&g_214},{&g_214,(void*)0,(void*)0,(void*)0,&g_214,(void*)0,&g_53.f5,&g_53.f5,(void*)0,&g_214}};
        struct S0 **l_370 = &l_371[0][6];
        struct S0 ***l_369[6][3][4] = {{{&l_370,&l_370,&l_370,&l_370},{&l_370,&l_370,&l_370,&l_370},{&l_370,&l_370,&l_370,&l_370}},{{&l_370,&l_370,&l_370,&l_370},{&l_370,&l_370,&l_370,&l_370},{&l_370,&l_370,&l_370,&l_370}},{{&l_370,&l_370,&l_370,&l_370},{&l_370,&l_370,&l_370,&l_370},{&l_370,&l_370,&l_370,&l_370}},{{&l_370,&l_370,&l_370,&l_370},{&l_370,&l_370,&l_370,&l_370},{&l_370,&l_370,&l_370,&l_370}},{{&l_370,&l_370,&l_370,&l_370},{&l_370,&l_370,&l_370,&l_370},{&l_370,&l_370,&l_370,&l_370}},{{&l_370,&l_370,&l_370,&l_370},{&l_370,&l_370,&l_370,&l_370},{&l_370,&l_370,&l_370,&l_370}}};
        unsigned char l_387 = 5UL;
        int i, j, k;
        g_82[g_214.f6] = (void*)0;
        if ((g_53.f5.f2 && (safe_lshift_func_uint8_t_u_s((l_339[1] && l_340), 1))))
        {
            struct S1 **l_342[3][9] = {{&g_181,(void*)0,(void*)0,&g_181,(void*)0,(void*)0,&g_181,(void*)0,(void*)0},{&g_181,&l_341,&l_341,&l_341,&l_341,&l_341,&g_181,&l_341,&l_341},{&g_181,(void*)0,(void*)0,&g_181,(void*)0,(void*)0,&g_181,(void*)0,(void*)0}};
            int i, j;
            if (p_26)
                break;
            l_341 = l_341;
            (*g_300) &= 0x3D36C170L;
        }
        else
        {
            int l_351 = 0x07F39E33L;
            int l_374 = 0x56E91215L;
            int **l_386 = (void*)0;
            struct S0 * const *l_390 = &l_371[5][6];
            int *l_394 = &g_53.f8;
            short l_405 = (-8L);
            (*g_300) = ((p_26 | (g_53.f5.f7 > (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((~g_214.f2), (safe_add_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(p_26, l_351)) <= g_53.f2), ((safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s(l_339[1], (safe_mul_func_int16_t_s_s(((((g_357[2] == l_359) >= 4294967286UL) && 3UL) | 0L), p_25)))))) ^ p_25))))), p_25)))) == 0x333D8C60L);
            if (((void*)0 == (*g_232)))
            {
                int *l_364 = &g_53.f8;
                (*l_364) ^= ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_26, g_53.f0)), func_39(p_26, ((0x49L != p_26) & (p_26 || p_26)), l_341))) & 0x99ED336EL);
                for (g_53.f5.f5 = 0; (g_53.f5.f5 <= 1); g_53.f5.f5 += 1)
                {
                    int i;
                    return l_339[g_53.f5.f5];
                }
                l_374 &= (((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((l_340 > g_53.f5.f3) != ((void*)0 != l_369[2][2][2])), ((p_26 == (safe_mod_func_int8_t_s_s(3L, ((func_39(g_53.f5.f8, l_351, &g_53) & p_26) | l_351)))) ^ 1L))), p_26)) | 0L) == l_351);
            }
            else
            {
                const unsigned l_379 = 0xC6118E1CL;
                int ** const l_385[10][5][5] = {{{&g_82[3],&g_82[3],(void*)0,&g_82[2],(void*)0},{&g_300,&g_82[g_214.f6],&g_82[g_214.f6],&g_300,&g_82[3]},{&g_82[3],&g_82[4],&g_82[2],&g_82[g_214.f6],&g_300},{&g_300,&g_82[3],(void*)0,&g_300,(void*)0},{&g_82[g_214.f6],&g_300,&g_82[3],&g_82[g_214.f6],&g_82[g_214.f6]}},{{&g_82[3],&g_82[6],&g_82[5],&g_82[3],&g_82[0]},{&g_82[3],&g_82[g_214.f6],(void*)0,(void*)0,&g_300},{&g_82[1],&g_300,(void*)0,&g_82[g_214.f6],&g_300},{&g_82[3],&g_82[0],(void*)0,&g_82[g_214.f6],(void*)0},{(void*)0,(void*)0,&g_82[g_214.f6],&g_82[g_214.f6],&g_82[3]}},{{&g_82[4],&g_82[6],&g_82[3],&g_82[1],&g_82[3]},{&g_300,(void*)0,(void*)0,(void*)0,&g_82[3]},{(void*)0,&g_82[1],&g_82[2],&g_82[2],(void*)0},{&g_82[3],&g_82[3],&g_82[2],(void*)0,(void*)0},{&g_300,&g_82[4],&g_82[g_214.f6],&g_300,&g_300}},{{(void*)0,(void*)0,(void*)0,&g_300,&g_300},{(void*)0,&g_300,(void*)0,(void*)0,&g_82[4]},{&g_82[g_214.f6],&g_82[3],(void*)0,(void*)0,(void*)0},{&g_300,&g_300,&g_300,&g_300,&g_82[6]},{(void*)0,&g_82[0],&g_82[g_214.f6],&g_82[g_214.f6],(void*)0}},{{&g_82[g_214.f6],&g_82[g_214.f6],&g_82[3],&g_82[3],&g_82[3]},{(void*)0,&g_82[g_214.f6],&g_82[g_214.f6],&g_82[g_214.f6],(void*)0},{(void*)0,(void*)0,&g_82[g_214.f6],&g_300,&g_82[1]},{&g_82[5],&g_82[0],&g_82[g_214.f6],(void*)0,&g_82[g_214.f6]},{(void*)0,&g_82[0],&g_82[3],(void*)0,&g_82[3]}},{{&g_82[0],&g_82[g_214.f6],(void*)0,&g_300,&g_300},{&g_82[g_214.f6],&g_82[1],&g_82[2],&g_300,(void*)0},{&g_82[g_214.f6],(void*)0,&g_300,(void*)0,&g_300},{&g_300,&g_82[3],&g_300,&g_82[1],&g_82[0]},{&g_82[3],&g_82[1],&g_300,(void*)0,(void*)0}},{{&g_300,&g_300,&g_82[3],(void*)0,&g_82[3]},{(void*)0,(void*)0,&g_300,(void*)0,&g_82[3]},{&g_82[3],&g_300,&g_300,(void*)0,&g_82[3]},{&g_82[2],&g_82[g_214.f6],&g_82[g_214.f6],(void*)0,&g_82[g_214.f6]},{&g_82[3],&g_82[3],&g_82[1],&g_300,&g_82[2]}},{{&g_300,(void*)0,&g_300,&g_82[0],&g_300},{&g_300,&g_82[3],&g_82[0],&g_82[g_214.f6],&g_300},{&g_82[6],&g_300,(void*)0,&g_82[g_214.f6],(void*)0},{&g_82[g_214.f6],&g_82[g_214.f6],&g_82[3],&g_82[3],&g_82[4]},{(void*)0,(void*)0,&g_82[6],(void*)0,(void*)0}},{{&g_82[g_214.f6],(void*)0,&g_300,&g_82[4],&g_82[g_214.f6]},{(void*)0,(void*)0,(void*)0,&g_300,&g_82[g_214.f6]},{&g_82[g_214.f6],&g_82[g_214.f6],(void*)0,&g_300,&g_300},{&g_82[3],&g_300,&g_300,&g_300,&g_82[5]},{(void*)0,&g_82[3],&g_82[3],&g_82[2],&g_300}},{{(void*)0,(void*)0,&g_82[3],(void*)0,&g_82[3]},{(void*)0,&g_82[3],&g_82[g_214.f6],&g_82[3],&g_82[g_214.f6]},{&g_82[g_214.f6],&g_82[g_214.f6],(void*)0,(void*)0,&g_82[g_214.f6]},{(void*)0,&g_300,&g_82[3],&g_82[6],(void*)0},{&g_300,(void*)0,(void*)0,(void*)0,&g_82[g_214.f6]}}};
                char l_401 = (-8L);
                struct S0 *l_403[4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_403[i] = &g_404;
                if ((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(0xA4L, l_379)), (l_380 == (*g_232)))))
                {
                    const int *l_381 = (void*)0;
                    const int **l_382 = &l_381;
                    (*l_382) = l_381;
                    for (g_214.f2 = 2; (g_214.f2 <= 9); g_214.f2 += 1)
                    {
                        return g_214.f1;
                    }
                    (*g_300) &= (-2L);
                }
                else
                {
                    for (g_53.f4 = 0; (g_53.f4 >= 10); g_53.f4 = safe_add_func_int8_t_s_s(g_53.f4, 3))
                    {
                        (*g_300) = (!(((l_385[2][3][1] == l_386) != p_25) | l_387));
                    }
                }
                for (g_214.f1 = 0; (g_214.f1 > 14); g_214.f1 = safe_add_func_uint16_t_u_u(g_214.f1, 1))
                {
                    unsigned short l_391 = 1UL;
                    int ***l_392 = (void*)0;
                    const int *l_393 = &g_45;
                    (*g_300) = ((*g_231) == l_390);
                    (*g_300) = (g_53.f5.f6 < ((p_25 & 0xD0L) <= p_25));
                    l_402[3] = ((l_393 != l_394) > (0xCFL && (safe_sub_func_uint8_t_u_u((&g_53 != &g_53), (safe_add_func_uint8_t_u_u((&l_370 == &g_232), (((((((safe_sub_func_int16_t_s_s((~0L), p_26)) && p_26) == p_26) == l_401) < 4294967295UL) ^ p_26) == p_26)))))));
                    l_403[3] = l_380;
                }
                for (l_387 = 0; l_387 < 4; l_387 += 1)
                {
                    l_403[l_387] = &g_53.f5;
                }
            }
            (*l_394) ^= (l_405 == ((!((l_359 == (void*)0) ^ ((void*)0 == &l_370))) <= g_214.f9));
        }
    }
    return g_53.f5.f3;
}







static unsigned func_27(unsigned p_28, unsigned char p_29)
{
    struct S1 *l_52 = &g_53;
    int l_58 = (-7L);
    const struct S0 l_59 = {1L,3UL,0x3CB4L,3L,0UL,65535UL,0x9618DE77L,0UL,0x3DAD933BL,0x5185L};
    struct S1 **l_336[5][5][10] = {{{(void*)0,&l_52,&g_34,&g_34,&g_181,&g_34,&g_34,&g_34,&l_52,(void*)0},{&l_52,&l_52,&g_181,(void*)0,&g_181,&g_181,&l_52,&g_181,&g_34,&g_181},{(void*)0,&g_34,&l_52,&g_181,&l_52,&g_34,(void*)0,(void*)0,&g_34,&l_52},{&g_181,&g_34,&g_34,(void*)0,&l_52,&l_52,(void*)0,&l_52,&g_181,(void*)0},{&l_52,&g_34,&g_34,&g_34,&g_34,&g_34,(void*)0,&l_52,&l_52,(void*)0}},{{&l_52,&g_34,&l_52,&l_52,(void*)0,&g_34,&l_52,&g_34,&g_34,&l_52},{&l_52,&l_52,&g_181,&g_181,&l_52,(void*)0,&g_34,&g_181,&l_52,&l_52},{&l_52,&l_52,&l_52,(void*)0,(void*)0,&g_181,&g_34,&g_34,&g_181,&l_52},{&g_34,&g_34,&g_34,&g_34,&g_34,(void*)0,(void*)0,(void*)0,&l_52,&l_52},{(void*)0,&l_52,&l_52,&g_181,(void*)0,&l_52,&g_34,(void*)0,&l_52,&g_181}},{{&l_52,&g_34,&g_34,&g_34,(void*)0,(void*)0,(void*)0,&g_181,&g_181,(void*)0},{(void*)0,&g_34,&g_34,&g_181,&g_181,&l_52,&l_52,&g_181,&g_34,&l_52},{&l_52,(void*)0,(void*)0,&g_34,&l_52,(void*)0,&l_52,(void*)0,&g_181,(void*)0},{&l_52,(void*)0,&g_181,&g_181,&g_181,&l_52,&g_181,&g_181,&g_181,(void*)0},{&g_181,&l_52,&g_34,(void*)0,(void*)0,&g_34,&l_52,&l_52,&g_34,(void*)0}},{{&g_34,&g_34,&l_52,&l_52,&g_34,&g_34,&l_52,&g_181,&g_34,&g_34},{&g_181,&g_34,&g_181,&g_181,(void*)0,&l_52,&g_181,&g_34,&g_181,&l_52},{&l_52,&g_34,&l_52,&g_34,&l_52,&g_181,&g_181,&g_181,&g_181,&l_52},{&l_52,&l_52,&g_181,&g_181,&g_34,&g_181,&g_181,&l_52,&g_34,&g_34},{&g_181,&g_34,&l_52,&l_52,&l_52,&l_52,&g_34,&g_181,&g_34,&l_52}},{{&g_34,&l_52,&g_181,&g_34,&g_34,&g_34,&g_34,&g_181,&l_52,&l_52},{&g_181,&l_52,&g_181,&g_34,&l_52,&g_181,&g_181,&g_181,&g_34,&g_181},{&g_34,(void*)0,&l_52,&l_52,&g_34,&l_52,&g_181,&l_52,(void*)0,&g_181},{&g_181,&g_181,&g_181,&g_181,&g_181,&l_52,&g_34,&g_181,&l_52,&l_52},{&g_181,&l_52,&g_34,&l_52,&l_52,&g_181,&g_34,(void*)0,&g_34,&g_181}}};
    int i, j, k;
    g_181 = func_30(g_34, (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(func_39((((-5L) > 0x5BL) > g_7), g_7, g_34), (func_46(l_52, func_54(l_58, g_53.f5.f9, l_59), g_214.f6, l_59.f3, g_7) > 1UL))), p_28)), l_52);
    return p_29;
}







static struct S1 * func_30(struct S1 * p_31, unsigned char p_32, struct S1 * p_33)
{
    int **l_335[4];
    int i;
    for (i = 0; i < 4; i++)
        l_335[i] = (void*)0;
    g_82[3] = (void*)0;
    g_300 = &g_45;
    for (g_53.f3 = 0; g_53.f3 < 4; g_53.f3 += 1)
    {
        l_335[g_53.f3] = (void*)0;
    }
    return p_31;
}







static char func_39(char p_40, unsigned short p_41, struct S1 * p_42)
{
    unsigned char l_43 = 0xDEL;
    int *l_44 = &g_45;
    (*l_44) = l_43;
    return p_41;
}







static unsigned short func_46(struct S1 * p_47, struct S1 * p_48, unsigned p_49, unsigned char p_50, char p_51)
{
    struct S0 *l_332 = (void*)0;
    int l_333 = (-4L);
    int *l_334 = (void*)0;
    (*g_300) ^= (safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((p_51 ^ (safe_lshift_func_uint8_t_u_u((l_332 == l_332), (((l_333 > l_333) || 1UL) <= ((p_49 >= g_53.f5.f0) <= p_50))))), l_333)) >= l_333), l_333));
    l_334 = &l_333;
    return p_50;
}







static struct S1 * func_54(unsigned p_55, int p_56, const struct S0 p_57)
{
    unsigned short l_62 = 0UL;
    int **l_301 = (void*)0;
    int **l_302 = &g_82[0];
    int *l_305 = &g_53.f0;
    (*l_302) = func_60(l_62);
    (*l_302) = l_305;
    for (g_53.f9 = (-7); (g_53.f9 >= 22); g_53.f9 = safe_add_func_int32_t_s_s(g_53.f9, 4))
    {
        int *l_310 = &g_53.f8;
        struct S1 *l_321 = &g_53;
        (*l_302) = l_310;
        for (g_53.f0 = 0; (g_53.f0 > (-12)); --g_53.f0)
        {
            unsigned char l_313 = 0x32L;
            int *l_320 = (void*)0;
            l_313 = p_57.f2;
            for (g_53.f5.f2 = 0; (g_53.f5.f2 <= 12); g_53.f5.f2++)
            {
                if (((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(p_57.f4, 255UL)), ((*g_300) > l_313))) == g_53.f5.f5))
                {
                    (*g_300) = (+(*l_310));
                    if ((g_71 == l_320))
                    {
                        (*l_302) = g_300;
                    }
                    else
                    {
                        return l_321;
                    }
                    (*g_300) &= p_57.f4;
                }
                else
                {
                    for (l_313 = 2; (l_313 <= 8); l_313 = safe_add_func_uint32_t_u_u(l_313, 9))
                    {
                        (*g_300) = (safe_mul_func_uint16_t_u_u(p_56, g_53.f8));
                    }
                    return &g_53;
                }
            }
        }
    }
    return &g_53;
}







static int * func_60(unsigned short p_61)
{
    int *l_63[5][10] = {{&g_53.f8,&g_53.f0,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f0,&g_53.f8,&g_53.f8,&g_53.f8},{&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f0,&g_53.f0,&g_53.f8},{&g_53.f8,&g_53.f0,&g_53.f8,&g_53.f8,&g_53.f0,&g_53.f8,&g_53.f0,&g_53.f0,&g_53.f0,&g_53.f8},{&g_53.f8,&g_53.f0,&g_53.f8,&g_53.f0,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8},{&g_53.f8,&g_53.f0,&g_53.f0,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8,&g_53.f8}};
    struct S1 *l_68 = &g_53;
    int l_76 = (-1L);
    unsigned l_90[5][8] = {{0x4B525832L,0x6CF3CB91L,0x7E59D863L,0x7E59D863L,0x6CF3CB91L,0x4B525832L,0x235086CDL,0x4B525832L},{0x6CF3CB91L,0x4B525832L,0x235086CDL,0x4B525832L,0x6CF3CB91L,0x7E59D863L,0x7E59D863L,0x6CF3CB91L},{0x4B525832L,0x7EFE7B18L,0x7EFE7B18L,0x4B525832L,0x52EBB0BEL,0x6CF3CB91L,0x52EBB0BEL,0x4B525832L},{0x7EFE7B18L,0x52EBB0BEL,0x7EFE7B18L,0x7E59D863L,0x235086CDL,0x235086CDL,0x7E59D863L,0x7EFE7B18L},{0x52EBB0BEL,0x52EBB0BEL,0x235086CDL,0x6CF3CB91L,8UL,0x6CF3CB91L,0x235086CDL,0x52EBB0BEL}};
    int **l_106[7] = {(void*)0,(void*)0,&g_82[3],(void*)0,(void*)0,&g_82[3],(void*)0};
    int ***l_105 = &l_106[2];
    int l_130[8][9][3] = {{{0xA0D05BA9L,0xE8C81394L,0x68D3076AL},{9L,2L,0x02F554A1L},{0xFE5D68E8L,0x4D89940AL,1L},{0x0D32EC22L,0x666DC25BL,1L},{0x3489FCF5L,1L,9L},{0x705E6A08L,(-3L),9L},{0xC884FDEEL,7L,(-6L)},{0xE5596EFEL,0L,5L},{0x7BE1BD84L,0x0D32EC22L,0x09F72DD0L}},{{0x6CBC8B4DL,0x5B31AE2FL,0xC884FDEEL},{5L,1L,1L},{(-10L),7L,1L},{(-3L),0xC721D3E5L,(-5L)},{2L,0x1DE3861BL,0xA0D05BA9L},{(-3L),0x0B5A70E1L,(-10L)},{5L,0x1DE3861BL,0x543E80CAL},{0xF3A3E21FL,0xC721D3E5L,(-5L)},{1L,7L,0x68D3076AL}},{{0x4D89940AL,1L,0xA0D05BA9L},{0x7BE1BD84L,0x5B31AE2FL,0xF3A3E21FL},{(-5L),0x0D32EC22L,0xC884FDEEL},{0x0D32EC22L,0L,(-1L)},{0x68D3076AL,7L,1L},{2L,0x801A31D2L,0x09F72DD0L},{2L,0xF50615D4L,0x0D32EC22L},{0x68D3076AL,(-2L),(-10L)},{0x0D32EC22L,0L,(-5L)}},{{(-5L),0xC721D3E5L,(-3L)},{0x7BE1BD84L,0xF3A3E21FL,(-6L)},{0x4D89940AL,0x4D89940AL,0x0D32EC22L},{1L,0x0D32EC22L,0xF3A3E21FL},{0xF3A3E21FL,1L,1L},{5L,0L,0xE5596EFEL},{(-3L),0xF3A3E21FL,1L},{2L,0x4393044EL,0xF3A3E21FL},{(-3L),0x1DE3861BL,0x0D32EC22L}},{{(-10L),0x9C59BD72L,(-6L)},{5L,0L,(-3L)},{0x666DC25BL,(-6L),0x5B31AE2FL},{9L,0x666DC25BL,(-1L)},{0x9C59BD72L,(-3L),0x09F72DD0L},{0xFE5D68E8L,0xF3A3E21FL,0x4393044EL},{0xC721D3E5L,0xF3A3E21FL,0L},{(-5L),(-3L),0x0B5A70E1L},{0xE5596EFEL,0x666DC25BL,0xFE5D68E8L}},{{1L,(-6L),(-10L)},{0xA0D05BA9L,0x3489FCF5L,0x6CBC8B4DL},{0L,0xC884FDEEL,0L},{(-5L),1L,0x5B31AE2FL},{0x666DC25BL,0x68D3076AL,0xA0D05BA9L},{0L,(-10L),(-1L)},{(-3L),(-2L),0x6CBC8B4DL},{0L,0xF3A3E21FL,0xC721D3E5L},{0x666DC25BL,0x09F72DD0L,0xF50615D4L}},{{(-5L),(-3L),(-3L)},{0L,(-10L),0xFE5D68E8L},{0xA0D05BA9L,(-10L),0x4393044EL},{1L,0x3489FCF5L,7L},{0xE5596EFEL,1L,0x4D89940AL},{(-5L),0xB0B2C2AFL,0xA0D05BA9L},{0xC721D3E5L,(-6L),0xA0D05BA9L},{0xFE5D68E8L,0x801A31D2L,0x4D89940AL},{0x9C59BD72L,(-2L),7L}},{{9L,0x09F72DD0L,0x4393044EL},{0x666DC25BL,(-5L),0xFE5D68E8L},{7L,(-3L),(-3L)},{(-1L),0x801A31D2L,0xF50615D4L},{1L,(-10L),0xC721D3E5L},{5L,1L,0x6CBC8B4DL},{0xE5596EFEL,1L,9L},{(-1L),5L,0x68D3076AL},{(-3L),0x7BE1BD84L,0x96879FC7L}}};
    const struct S0 *l_178 = (void*)0;
    struct S1 *l_280 = (void*)0;
    unsigned l_281 = 6UL;
    unsigned char l_282 = 255UL;
    int i, j, k;
    if ((((l_63[1][8] != l_63[1][8]) != (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_53.f5.f3, 3)), ((l_68 != &g_53) | (safe_mul_func_int16_t_s_s(p_61, (p_61 != (g_71 == l_63[2][6])))))))) <= 65534UL))
    {
        unsigned l_72 = 0x98D9B3EEL;
        g_53.f8 = (((+p_61) > l_72) && (safe_unary_minus_func_uint32_t_u(p_61)));
        for (g_53.f5.f9 = 4; (g_53.f5.f9 >= 0); g_53.f5.f9 -= 1)
        {
            int *l_74 = &g_53.f0;
            int **l_75 = &l_63[3][7];
            (*l_75) = l_74;
            for (g_53.f3 = 1; (g_53.f3 <= 4); g_53.f3 += 1)
            {
                int i, j;
                (*l_74) = l_76;
                for (g_53.f9 = 0; (g_53.f9 <= 4); g_53.f9 += 1)
                {
                    if (l_72)
                        break;
                    if (p_61)
                        continue;
                    if (g_53.f5.f8)
                        continue;
                }
            }
        }
    }
    else
    {
        unsigned l_87 = 4294967287UL;
        int l_88 = 0L;
        short l_89 = 0L;
        int *l_116 = (void*)0;
        struct S1 *l_142[2][10] = {{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53}};
        char l_162 = (-5L);
        struct S0 * const l_183 = &g_53.f5;
        int l_239 = 0L;
        int i, j;
        for (g_53.f3 = 29; (g_53.f3 != 14); g_53.f3 = safe_sub_func_uint16_t_u_u(g_53.f3, 4))
        {
            int *l_79 = (void*)0;
            int **l_80 = &l_63[4][0];
            int ***l_81 = &l_80;
            (*l_80) = l_79;
            (*l_81) = &l_63[2][0];
            g_53.f0 &= p_61;
            return g_82[3];
        }
        l_88 = (((+((0x9CCAL || (safe_rshift_func_int8_t_s_u((p_61 <= p_61), g_53.f5.f6))) & ((p_61 || (255UL ^ (((safe_sub_func_int32_t_s_s((p_61 && (l_68 != &g_53)), p_61)) <= g_53.f5.f8) != g_53.f8))) | l_87))) != l_88) && l_89);
        for (g_53.f5.f5 = 0; (g_53.f5.f5 <= 6); g_53.f5.f5 += 1)
        {
            int l_97 = 4L;
            struct S1 *l_110 = &g_53;
            struct S0 *l_158 = &g_53.f5;
            struct S0 **l_157 = &l_158;
            int i;
            l_88 ^= p_61;
            if (l_90[4][4])
                break;
            for (g_53.f5.f9 = 6; (g_53.f5.f9 >= 0); g_53.f5.f9 -= 1)
            {
                char l_95 = (-8L);
                unsigned l_96 = 0UL;
                if ((g_53.f5.f1 < (((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(g_53.f5.f8, l_95)), 1)) != g_53.f1) <= p_61)))
                {
                    l_97 &= (l_96 >= l_96);
                }
                else
                {
                    short l_98 = 1L;
                    l_98 &= l_87;
                }
            }
        }
        for (l_87 = 20; (l_87 < 27); l_87++)
        {
            unsigned char l_206 = 251UL;
            int l_207 = 0L;
            int l_208 = 0xA1EA45FBL;
            struct S0 *l_230 = &g_214;
            struct S0 **l_229 = &l_230;
            struct S0 ***l_228 = &l_229;
            unsigned l_278 = 4UL;
            int l_279 = (-1L);
            for (g_53.f5.f2 = 18; (g_53.f5.f2 == 7); g_53.f5.f2 = safe_sub_func_uint8_t_u_u(g_53.f5.f2, 4))
            {
                const struct S0 *l_211 = &g_53.f5;
                int l_223[6][9][3] = {{{0x28834A9DL,0x07B98909L,0x07B98909L},{7L,0x0D4DAC23L,7L},{0x28834A9DL,0x28834A9DL,0x07B98909L},{6L,0x0D4DAC23L,6L},{0x28834A9DL,0x07B98909L,0x07B98909L},{7L,0x0D4DAC23L,7L},{0x28834A9DL,0x28834A9DL,0x07B98909L},{6L,0x0D4DAC23L,6L},{0x28834A9DL,0x07B98909L,0x07B98909L}},{{7L,0x0D4DAC23L,7L},{0x28834A9DL,0x28834A9DL,0x07B98909L},{6L,0x0D4DAC23L,6L},{0x28834A9DL,0x07B98909L,0x07B98909L},{7L,0x0D4DAC23L,7L},{0x28834A9DL,0x28834A9DL,0x07B98909L},{6L,0x0D4DAC23L,6L},{0x28834A9DL,0x07B98909L,0x07B98909L},{7L,0x0D4DAC23L,7L}},{{0x28834A9DL,0x28834A9DL,0x07B98909L},{6L,0x0D4DAC23L,6L},{0x28834A9DL,0x07B98909L,0x07B98909L},{7L,0x0D4DAC23L,7L},{0x28834A9DL,0x28834A9DL,0x07B98909L},{6L,0x0D4DAC23L,6L},{0x28834A9DL,0x07B98909L,0x07B98909L},{7L,0x0D4DAC23L,7L},{0x28834A9DL,0x28834A9DL,0x07B98909L}},{{6L,0x0D4DAC23L,6L},{0x28834A9DL,0x07B98909L,0x07B98909L},{7L,0x0D4DAC23L,7L},{0x28834A9DL,0x28834A9DL,0x07B98909L},{6L,0x0D4DAC23L,6L},{0x28834A9DL,0x07B98909L,0x07B98909L},{7L,0x0D4DAC23L,7L},{0x28834A9DL,0x28834A9DL,0x07B98909L},{6L,0x0D4DAC23L,6L}},{{0x28834A9DL,0x07B98909L,0x07B98909L},{7L,0x0D4DAC23L,7L},{0x28834A9DL,0x28834A9DL,0x07B98909L},{6L,0x0D4DAC23L,6L},{0x28834A9DL,0x07B98909L,0x07B98909L},{7L,0x0D4DAC23L,7L},{0x28834A9DL,0x28834A9DL,0x07B98909L},{6L,0x0D4DAC23L,6L},{0x28834A9DL,0x07B98909L,0x07B98909L}},{{7L,0x0D4DAC23L,7L},{0x28834A9DL,0x28834A9DL,0x07B98909L},{6L,0x0D4DAC23L,6L},{0x28834A9DL,0x07B98909L,0x07B98909L},{7L,0x0D4DAC23L,7L},{0x28834A9DL,0x28834A9DL,0x07B98909L},{6L,0x0D4DAC23L,6L},{0x28834A9DL,0x07B98909L,0x07B98909L},{7L,0x0D4DAC23L,7L}}};
                int i, j, k;
                l_207 = (((p_61 <= l_206) > l_206) && g_53.f6);
                l_208 = p_61;
                if (p_61)
                {
                    for (g_53.f1 = 0; (g_53.f1 > 13); ++g_53.f1)
                    {
                        const struct S0 **l_212[5];
                        const struct S0 ***l_215 = &l_212[2];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_212[i] = &l_211;
                        g_213 = l_211;
                        if (l_206)
                            continue;
                        (*l_215) = &g_213;
                    }
                    for (g_214.f5 = (-19); (g_214.f5 <= 15); g_214.f5++)
                    {
                        unsigned char l_220[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_220[i] = 0xB7L;
                        l_220[2] = (safe_lshift_func_int16_t_s_u(p_61, p_61));
                        l_208 ^= (-1L);
                        if (p_61)
                            break;
                        g_82[2] = &l_88;
                    }
                }
                else
                {
                    l_88 = ((0x73102DFBL != p_61) && (safe_lshift_func_int8_t_s_s((&g_82[5] == &l_116), 6)));
                    l_223[5][3][0] = (-4L);
                    for (g_53.f5.f9 = 25; (g_53.f5.f9 < (-25)); g_53.f5.f9 = safe_sub_func_uint16_t_u_u(g_53.f5.f9, 3))
                    {
                        l_208 ^= p_61;
                    }
                }
            }
            l_88 ^= ((safe_sub_func_uint16_t_u_u((p_61 > (p_61 ^ 0x5FB6L)), 0x8450L)) < (l_228 == g_231));
            if ((l_208 < p_61))
            {
                int l_244 = 0L;
                int l_264 = 0x412EDE8CL;
                for (l_207 = 0; (l_207 != 13); l_207 = safe_add_func_uint32_t_u_u(l_207, 1))
                {
                    int * const **l_243 = (void*)0;
                    if ((9L <= (p_61 & l_207)))
                    {
                        int *l_235 = &g_53.f8;
                        int *l_236 = &g_53.f8;
                        int l_263 = 0L;
                        l_236 = l_235;
                        l_244 &= (+(((safe_mul_func_uint8_t_u_u(l_239, ((p_61 >= (safe_unary_minus_func_int32_t_s((*l_235)))) ^ (g_214.f9 || (safe_rshift_func_int8_t_s_u(((void*)0 == l_243), ((p_61 >= 4UL) != p_61))))))) < 5L) | 255UL));
                        l_263 |= (p_61 & (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(((0x6FL < (safe_mul_func_int8_t_s_s(((*l_236) ^ (g_53.f5.f1 < p_61)), (safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((p_61 != g_214.f2), (safe_add_func_uint8_t_u_u(g_53.f5.f3, ((safe_sub_func_uint16_t_u_u((*l_235), g_53.f8)) && g_53.f0))))), p_61)) >= 0UL), (*l_235)))))) > p_61), 1L)), 6)), g_214.f6)));
                    }
                    else
                    {
                        (*l_105) = &g_82[3];
                    }
                    l_264 |= (l_244 < l_244);
                    g_82[5] = &l_239;
                }
            }
            else
            {
                unsigned char l_273 = 0x1EL;
                l_279 &= (safe_lshift_func_uint8_t_u_u(((g_53.f5.f4 ^ g_53.f5.f2) != ((safe_rshift_func_uint8_t_u_u(g_53.f5.f0, (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_208, l_273)), l_207)))) != (safe_mod_func_int32_t_s_s((l_206 != (safe_rshift_func_int16_t_s_u((g_53.f5.f8 < ((((((4294967289UL ^ 0L) == 0UL) != 0x8B8FF587L) | g_214.f0) | p_61) >= 1UL)), l_278))), 4294967295UL)))), 5));
            }
        }
    }
    l_281 |= ((void*)0 == l_280);
    l_282 ^= 0x6522CDCEL;
    for (g_53.f5.f1 = 0; (g_53.f5.f1 != 8); g_53.f5.f1 = safe_add_func_int32_t_s_s(g_53.f5.f1, 3))
    {
        int l_285 = 0xA39597B6L;
        int l_286 = (-5L);
        int *l_292 = &g_53.f8;
        l_286 &= l_285;
        for (g_214.f2 = 0; (g_214.f2 >= 43); g_214.f2 = safe_add_func_int32_t_s_s(g_214.f2, 2))
        {
            unsigned short l_295 = 65535UL;
            for (g_53.f5.f8 = 2; (g_53.f5.f8 >= 0); --g_53.f5.f8)
            {
                int *l_291 = &l_76;
                l_292 = l_291;
                (*l_292) = p_61;
                (*l_291) ^= p_61;
            }
            (*l_292) = (((0x3DL == (((((((safe_add_func_int8_t_s_s(g_214.f4, ((l_295 ^ (g_53.f5.f4 & (g_214.f8 & (safe_mul_func_uint16_t_u_u(((*l_292) > p_61), (safe_mul_func_int16_t_s_s(l_295, ((~0x497DL) <= 0x2DB5L)))))))) >= (*l_292)))) && g_53.f5.f2) == 4294967288UL) == 65535UL) && p_61) <= (*l_292)) & 0x6EBA7E83L)) || g_214.f8) & p_61);
        }
    }
    return g_300;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
    transparent_crc(g_53.f1, "g_53.f1", print_hash_value);
    transparent_crc(g_53.f2, "g_53.f2", print_hash_value);
    transparent_crc(g_53.f3, "g_53.f3", print_hash_value);
    transparent_crc(g_53.f4, "g_53.f4", print_hash_value);
    transparent_crc(g_53.f5.f0, "g_53.f5.f0", print_hash_value);
    transparent_crc(g_53.f5.f1, "g_53.f5.f1", print_hash_value);
    transparent_crc(g_53.f5.f2, "g_53.f5.f2", print_hash_value);
    transparent_crc(g_53.f5.f3, "g_53.f5.f3", print_hash_value);
    transparent_crc(g_53.f5.f4, "g_53.f5.f4", print_hash_value);
    transparent_crc(g_53.f5.f5, "g_53.f5.f5", print_hash_value);
    transparent_crc(g_53.f5.f6, "g_53.f5.f6", print_hash_value);
    transparent_crc(g_53.f5.f7, "g_53.f5.f7", print_hash_value);
    transparent_crc(g_53.f5.f8, "g_53.f5.f8", print_hash_value);
    transparent_crc(g_53.f5.f9, "g_53.f5.f9", print_hash_value);
    transparent_crc(g_53.f6, "g_53.f6", print_hash_value);
    transparent_crc(g_53.f7, "g_53.f7", print_hash_value);
    transparent_crc(g_53.f8, "g_53.f8", print_hash_value);
    transparent_crc(g_53.f9, "g_53.f9", print_hash_value);
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_214.f1, "g_214.f1", print_hash_value);
    transparent_crc(g_214.f2, "g_214.f2", print_hash_value);
    transparent_crc(g_214.f3, "g_214.f3", print_hash_value);
    transparent_crc(g_214.f4, "g_214.f4", print_hash_value);
    transparent_crc(g_214.f5, "g_214.f5", print_hash_value);
    transparent_crc(g_214.f6, "g_214.f6", print_hash_value);
    transparent_crc(g_214.f7, "g_214.f7", print_hash_value);
    transparent_crc(g_214.f8, "g_214.f8", print_hash_value);
    transparent_crc(g_214.f9, "g_214.f9", print_hash_value);
    transparent_crc(g_404.f0, "g_404.f0", print_hash_value);
    transparent_crc(g_404.f1, "g_404.f1", print_hash_value);
    transparent_crc(g_404.f2, "g_404.f2", print_hash_value);
    transparent_crc(g_404.f3, "g_404.f3", print_hash_value);
    transparent_crc(g_404.f4, "g_404.f4", print_hash_value);
    transparent_crc(g_404.f5, "g_404.f5", print_hash_value);
    transparent_crc(g_404.f6, "g_404.f6", print_hash_value);
    transparent_crc(g_404.f7, "g_404.f7", print_hash_value);
    transparent_crc(g_404.f8, "g_404.f8", print_hash_value);
    transparent_crc(g_404.f9, "g_404.f9", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
