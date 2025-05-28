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
   int f1;
   unsigned char f2;
   unsigned f3;
   int f4;
};

union U1 {
   unsigned short f0;
   int f1;
};


static int g_7 = 0x7BB00868L;
static int g_43[10] = {4L,8L,0L,0L,8L,4L,8L,0L,0L,8L};
static int *g_60 = &g_43[4];
static int * const *g_59 = &g_60;
static union U1 g_78 = {0xBF5EL};
static union U0 g_102[5][9] = {{{0UL},{0x4EF461E6L},{0x5697B4E6L},{0x5697B4E6L},{0x4EF461E6L},{0UL},{0xA9463023L},{0xA9463023L},{0UL}},{{0xA4A7B592L},{0x0783B079L},{8UL},{0x0783B079L},{0xA4A7B592L},{0x0783B079L},{8UL},{0x0783B079L},{0xA4A7B592L}},{{0x4EF461E6L},{0x5697B4E6L},{0x5697B4E6L},{0x4EF461E6L},{0UL},{0xA9463023L},{0xA9463023L},{0UL},{0x4EF461E6L}},{{0xF7867F40L},{0x0783B079L},{0xF7867F40L},{0x6C5BE011L},{0xF7867F40L},{0x0783B079L},{0xF7867F40L},{0x6C5BE011L},{0xF7867F40L}},{{0x4EF461E6L},{0x4EF461E6L},{0xA9463023L},{0x5697B4E6L},{0UL},{0UL},{0x5697B4E6L},{0xA9463023L},{0x4EF461E6L}}};
static char g_125[8][5] = {{0x8EL,0x8EL,2L,(-1L),5L},{(-8L),0xC6L,0xEBL,0xEBL,0xC6L},{5L,0xDCL,0xC2L,5L,(-5L)},{0x9DL,0xC6L,0x6BL,0xC6L,0x9DL},{0xC2L,0x8EL,0xDCL,(-5L),0x8EL},{0x9DL,0xD0L,0xD0L,0x9DL,0xEBL},{5L,(-1L),2L,0x8EL,0x8EL},{(-8L),0x9DL,(-8L),0xEBL,0x9DL}};
static int *g_162[6][2] = {{&g_102[4][6].f1,&g_102[4][6].f1},{&g_102[4][6].f1,&g_102[4][6].f1},{&g_102[4][6].f1,&g_102[4][6].f1},{&g_102[4][6].f1,&g_102[4][6].f1},{&g_102[4][6].f1,&g_102[4][6].f1},{&g_102[4][6].f1,&g_102[4][6].f1}};
static int **g_161 = &g_162[3][0];
static union U0 *g_213 = (void*)0;
static const int g_309[3][2][3] = {{{0L,0xA3B2545CL,0xA3B2545CL},{0xC7959007L,0x22CC9B3CL,0x22CC9B3CL}},{{0L,0xA3B2545CL,0xA3B2545CL},{0xC7959007L,0x22CC9B3CL,0x22CC9B3CL}},{{0L,0xA3B2545CL,0xA3B2545CL},{0xC7959007L,0x22CC9B3CL,0x22CC9B3CL}}};
static const union U1 g_401 = {0UL};
static unsigned char g_404 = 0UL;
static int g_441 = 9L;
static int g_450 = 9L;
static union U0 *g_537 = &g_102[4][6];
static char g_631 = 4L;
static union U0 g_756 = {0x8CB3812BL};
static unsigned g_774[2] = {0x90C82E0EL,0x90C82E0EL};
static unsigned char g_817 = 0xC0L;
static short g_882 = 0x533AL;
static union U1 *g_885 = &g_78;



static unsigned short func_1(void);
static char func_5(short p_6);
static short func_10(unsigned char p_11, const union U1 p_12, const unsigned p_13);
static const unsigned short func_16(unsigned char p_17, char p_18, char p_19, unsigned p_20, union U0 p_21);
static int func_22(union U0 p_23, unsigned char p_24, unsigned p_25, unsigned char p_26, char p_27);
static union U0 func_28(unsigned char p_29, short p_30, unsigned short p_31, unsigned short p_32);
static unsigned char func_35(union U1 p_36, unsigned p_37, const char p_38, unsigned p_39, short p_40);
static int * func_54(int * const * p_55, union U1 p_56, union U1 p_57, int * p_58);
static union U1 func_61(const int p_62, unsigned p_63, short p_64);
static unsigned short func_65(int p_66, int ** p_67, union U0 p_68, char p_69);
static unsigned short func_1(void)
{
    unsigned l_2 = 4294967295UL;
    int *** const l_812[7] = {&g_161,&g_161,&g_161,&g_161,&g_161,&g_161,&g_161};
    unsigned char l_813 = 255UL;
    char l_814 = 0x5FL;
    char l_815 = (-1L);
    unsigned l_831 = 0xCE827317L;
    unsigned l_840 = 0xBDAE6B6BL;
    int l_878 = 1L;
    char l_880[2];
    char l_881[8];
    union U1 l_888 = {0UL};
    union U1 **l_890[4] = {&g_885,&g_885,&g_885,&g_885};
    unsigned l_894 = 1UL;
    unsigned char l_895[8][6] = {{0x33L,0x33L,1UL,1UL,0x33L,0x33L},{0x33L,1UL,1UL,0x33L,0x33L,1UL},{0x33L,0x33L,1UL,1UL,0x33L,0x33L},{0x33L,1UL,1UL,0x33L,0x33L,1UL},{0x33L,0x33L,1UL,1UL,0x33L,0x33L},{0x33L,1UL,1UL,0x33L,0x33L,1UL},{0x33L,0x33L,1UL,1UL,0x33L,0x33L},{0x33L,1UL,1UL,0x33L,0x33L,1UL}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_880[i] = (-5L);
    for (i = 0; i < 8; i++)
        l_881[i] = (-6L);
    if (((0x6F6DL || l_2) >= (((((l_2 != (safe_sub_func_int8_t_s_s(func_5(g_7), g_756.f3))) > (((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_756.f4, ((((((void*)0 == l_812[5]) < 1UL) || 0x38L) && l_813) ^ g_756.f1))), 0)) && l_814) != l_815)) || 0x07EFBEDBL) != g_7) < g_756.f3)))
    {
        (**g_161) &= 7L;

            }
    else
    {
        unsigned short l_816[10] = {0x64C3L,0x42D1L,0x64C3L,0x64C3L,0x42D1L,0x64C3L,0x64C3L,0x42D1L,0x64C3L,0x64C3L};
        int i;
        (**g_59) = l_816[0];
        (**g_161) &= l_816[0];

            }

    ;

    if ((g_401.f0 | ((void*)0 == l_812[3])))
    {
        unsigned char l_818 = 1UL;
        int **l_819 = &g_162[3][0];
        union U0 l_820 = {9UL};
        int l_821 = 0L;
        int l_822 = 0xA8255F12L;
        union U0 l_823 = {4294967295UL};
        union U0 **l_827[4] = {&g_537,&g_537,&g_537,&g_537};
        unsigned short l_860 = 0xFB21L;
        union U0 l_862 = {0x6841055FL};
        char l_872 = 0xF3L;
        int i;
lbl_824:
        l_822 |= (g_817 != (0x89L < func_65(l_818, l_819, l_820, l_821)));
        (*l_819) = (*g_161);
        if ((g_756.f0 | g_43[3]))
        {
            if (l_820.f0)
                goto lbl_824;
        }
        else
        {
            unsigned short l_825 = 65527UL;
            int l_826 = (-9L);
            union U0 ***l_828 = &l_827[2];
            int l_850[10][10] = {{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}};
            unsigned short l_853 = 0x4821L;
            union U0 l_866[9] = {{4294967292UL},{0x41BB042AL},{4294967292UL},{4294967292UL},{0x41BB042AL},{4294967292UL},{4294967292UL},{0x41BB042AL},{4294967292UL}};
            short l_867 = 1L;
            int i, j;
            l_826 |= l_825;
lbl_856:
            (*l_828) = l_827[2];
            (**l_819) = l_825;
            for (g_756.f0 = (-27); (g_756.f0 == 47); g_756.f0 = safe_add_func_uint16_t_u_u(g_756.f0, 8))
            {
                const int *l_841[7];
                char l_849[3][10][4] = {{{0x28L,0xD5L,0x82L,0xEFL},{0x64L,0x22L,1L,1L},{0x26L,0x64L,0x26L,0L},{0x82L,2L,0xDBL,0x22L},{0xEFL,0x26L,1L,2L},{1L,1L,1L,0x82L},{0xD5L,2L,0x64L,0x64L},{1L,1L,0xEFL,0x05L},{0xEFL,0x05L,0L,0xEFL},{0xEFL,0x26L,1L,0L}},{{1L,0x26L,0x28L,0xEFL},{0x26L,0x05L,1L,0x05L},{1L,1L,0x22L,0x64L},{1L,2L,2L,0x82L},{0x64L,2L,0x26L,0x22L},{0x64L,0xEFL,2L,0xDBL},{1L,0x22L,0x22L,1L},{1L,0xEFL,1L,0xD3L},{0x26L,0xDBL,0x28L,0xD5L},{1L,0x82L,1L,0xD5L}},{{0xEFL,0xDBL,0L,0xD3L},{0xEFL,0xEFL,0xEFL,1L},{1L,0x22L,0x64L,0xDBL},{0xD5L,0xEFL,0xD3L,0x22L},{0x05L,2L,0xD3L,0x82L},{0xD5L,2L,0x64L,0x64L},{1L,1L,0xEFL,0x05L},{0xEFL,0x05L,0L,0xEFL},{0xEFL,0x26L,1L,0L},{1L,0x26L,0x64L,1L}}};
                int l_851 = 0L;
                unsigned short l_869 = 0x9C0EL;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_841[i] = &g_43[3];
                if (l_831)
                {
                    int l_839[6] = {(-10L),0L,(-10L),(-10L),0L,(-10L)};
                    int i;
                    for (l_822 = (-18); (l_822 <= (-25)); --l_822)
                    {
                        int l_834[3][6][7] = {{{0xD0B4BD5EL,1L,0x8C29B169L,0x167B0B51L,0L,0x77EDE6B1L,0xE8BFB637L},{0x9BFA79AEL,0x3A8F2E35L,(-4L),0x70DDA91BL,0x8634B67FL,0xECD466B9L,0L},{0xECD466B9L,1L,0x9BFA79AEL,0xC3DA0B2AL,0x00F9CE76L,(-7L),2L},{1L,0x928759A9L,0x00F9CE76L,(-4L),0x133DD36DL,0L,(-1L)},{0L,0x8C29B169L,0xE62A8B02L,(-4L),1L,0x236A59C0L,0x574A6D95L},{0x5DECE7CCL,(-6L),0x24687182L,0xC3DA0B2AL,0xC4199AEBL,0x1A8B1C84L,0x236A59C0L}},{{(-3L),0xCA83748FL,0L,0x70DDA91BL,0L,0xCA83748FL,(-3L)},{0x3A8F2E35L,1L,0x53EA7314L,0x167B0B51L,(-7L),(-1L),1L},{0xF973714BL,0x1A8B1C84L,0x167B0B51L,0xD0B4BD5EL,0x9BFA79AEL,(-3L),1L},{(-4L),0L,0x53EA7314L,5L,0x70DDA91BL,0xC3DA0B2AL,1L},{0x1A8B1C84L,0xB276EB42L,0L,1L,0xC48EACCCL,0x8634B67FL,(-7L)},{0x3B78143CL,0x70DDA91BL,0x24687182L,0xF973714BL,4L,0xC4199AEBL,0x00F9CE76L}},{{(-4L),0x236A59C0L,0xE62A8B02L,0x3B78143CL,0x3B78143CL,1L,0L},{1L,0xE8BFB637L,1L,0x5DCE0E6EL,1L,(-1L),(-4L)},{1L,0xC4199AEBL,2L,0xCA83748FL,0x70DDA91BL,0L,0L},{0x00F9CE76L,1L,0x5DECE7CCL,1L,0x00F9CE76L,0x5DCE0E6EL,(-3L)},{1L,0x53EA7314L,0x167B0B51L,(-7L),(-1L),1L,(-9L)},{0x928759A9L,0x24687182L,0L,(-7L),0x133DD36DL,0x033E528CL,0xECD466B9L}}};
                        const int **l_842 = &l_841[1];
                        int **l_843 = &g_60;
                        int i, j, k;
                        if (l_834[0][4][6])
                            break;
                        (*l_842) = l_841[5];
                        (*l_843) = (*g_59);
                        return l_825;
                    }
                    for (l_813 = 0; (l_813 != 56); l_813 = safe_add_func_int16_t_s_s(l_813, 1))
                    {
                        char l_846[4][10] = {{0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L},{0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L},{0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L},{0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L}};
                        int l_847 = 0xDDCF682BL;
                        int l_848 = (-1L);
                        int l_852[5] = {0x19A2BB6AL,0x19A2BB6AL,0x19A2BB6AL,0x19A2BB6AL,0x19A2BB6AL};
                        int i, j;
                        l_853--;
                        if (l_818)
                            goto lbl_856;
                        (*g_161) = (*g_161);
                    }
                    if (l_839[5])
                        break;
                    for (l_825 = 0; (l_825 < 53); ++l_825)
                    {
                        short l_859 = 1L;
                        l_859 &= 1L;
                        (**g_59) = l_860;
                        if (l_859)
                            continue;
                    }
                }
                else
                {
                    union U0 *l_865 = &l_820;
                    int l_868 = 1L;
                    if (l_825)
                    {
                        int **l_861 = &g_60;
                        (*g_60) = ((func_65(g_756.f0, l_861, (*g_537), g_756.f4) <= l_826) == l_850[6][1]);
                    }
                    else
                    {
                        (**g_161) = l_867;
                        l_869++;
                        (**g_59) = l_872;
                    }
                }
                (*g_60) = ((&g_162[1][1] != &g_162[3][0]) && ((((g_756.f2 < (-1L)) & 0x6E6AL) != 0UL) <= 0UL));
                if (l_826)
                    continue;
            }
        }
    }
    else
    {
        short l_877 = 7L;
        l_877 ^= 0x187F2A10L;
        (**g_59) = l_877;
        for (g_817 = 0; (g_817 <= 1); g_817 += 1)
        {
            int i;
            return g_774[g_817];
        }
    }
    if (l_878)
    {
        int l_879 = 0xFCE2DE26L;
        const unsigned l_883 = 1UL;
        (**g_59) = l_883;
    }
    else
    {
        union U1 *l_884[1][2];
        int * const *l_886 = &g_60;
        union U1 l_887 = {65531UL};
        int *l_889 = &g_441;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_884[i][j] = &g_78;
        }
        (**g_59) = (&g_756 == (void*)0);
        g_885 = l_884[0][1];
        l_889 = func_54(l_886, l_887, l_888, (*g_161));

                ;
        (**g_161) = (**l_886);
    }
    l_895[6][3] |= ((!(((g_7 | (0xECL == ((l_890[2] != (void*)0) && (safe_rshift_func_uint8_t_u_s(((&g_102[4][6] == &g_102[2][7]) == (safe_unary_minus_func_int16_t_s(g_774[1]))), 6))))) || (l_894 > (0xEBL ^ 1UL))) == 0x9BDCD6DCL)) == g_756.f0);
    return g_43[3];
}







static char func_5(short p_6)
{
    int l_33 = (-10L);
    int l_34 = 0L;
    union U1 l_41 = {0xA4F2L};
    union U0 l_111[4][2][5] = {{{{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL}},{{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL}}},{{{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL}},{{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL}}},{{{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL}},{{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL}}},{{{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL}},{{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL},{0xA15260EEL}}}};
    int *l_440 = &g_441;
    short l_453[10] = {0xC54DL,0xF59AL,0x0DEBL,0xF59AL,0xC54DL,0xC54DL,0xF59AL,0x0DEBL,0xF59AL,0xC54DL};
    unsigned l_457 = 4294967292UL;
    int l_527[9][4][6] = {{{1L,1L,(-10L),5L,0x30BEB468L,6L},{0xF2392FF2L,8L,8L,0x231FB0C3L,0xCD8B463FL,0x7A66A818L},{0xCD8B463FL,0x4D828967L,0x15129DA4L,0xF0CBC0B1L,0x44DBB93AL,0xFAD99998L},{0x26EB6A0CL,0x086A6E33L,0L,5L,0x3F057F65L,2L}},{{1L,0x75832D1CL,0x0E3B8627L,0x7D80CB69L,0xF0CBC0B1L,0xCB925D2FL},{9L,(-1L),0xF1432BBDL,0x3BFAD4B7L,0xEABF47A8L,0x59BF8368L},{0x231FB0C3L,0x22B246FDL,0xEF667D50L,9L,(-8L),(-10L)},{0xFE4A1D62L,0x30BEB468L,0L,0x6C78A627L,2L,0x3BFAD4B7L}},{{0x0E3B8627L,1L,0xCD8B463FL,(-4L),0xCD8B463FL,1L},{8L,0x0E3B8627L,0x09B32AE6L,0xCB925D2FL,0xEDD3F0F5L,0xB7471E1DL},{0x40545CD0L,8L,0x15129DA4L,0x0E3B8627L,(-1L),0x4D828967L},{8L,8L,1L,0x819F1446L,0xEDD3F0F5L,0x7D80CB69L}},{{0L,0x22B246FDL,0xFE4A1D62L,0x4D6E5A41L,0xCB925D2FL,0x3B2AC945L},{(-1L),0x0DA4D09AL,0xFAD99998L,0x0FC036BFL,0xF1432BBDL,(-8L)},{0x0DA4D09AL,(-1L),0x90AB6A94L,0x231FB0C3L,(-1L),0x3F057F65L},{1L,0x3F057F65L,0x44DBB93AL,0x3B2AC945L,0xEF667D50L,0x68D69B74L}},{{0L,6L,0x30BEB468L,5L,(-10L),1L},{0x44DBB93AL,0xEC2B68ABL,0L,(-1L),0x086A6E33L,0x4D828967L},{0x269B9DEDL,0x72D78B01L,8L,0x30BEB468L,0x6C78A627L,5L},{0x4D6E5A41L,8L,0x7A66A818L,(-5L),0xCB925D2FL,0x0E3B8627L}},{{(-1L),0x4D6E5A41L,0x7D80CB69L,0x68D69B74L,(-1L),0xB7471E1DL},{0x66132A06L,0x3B2AC945L,0x231FB0C3L,0x231FB0C3L,0x3B2AC945L,0x66132A06L},{8L,0x68D69B74L,0x40545CD0L,1L,0x72D78B01L,0L},{0xCB925D2FL,0x22B246FDL,0x30BEB468L,0xFAD99998L,0x7D80CB69L,(-4L)}},{{0xCB925D2FL,0x6BCB8234L,0xFAD99998L,1L,8L,0xF1432BBDL},{8L,0x72D78B01L,0x269B9DEDL,0L,0x21408BD7L,0xCD8B463FL},{0xF1432BBDL,0x59BF8368L,0x90AB6A94L,0x4D828967L,0x4D6E5A41L,0L},{0x7D80CB69L,0x29707EE6L,0x21408BD7L,0x0E3B8627L,0xFAD99998L,0xEF667D50L}},{{(-1L),0x09B32AE6L,0xEC2B68ABL,0xCB925D2FL,0x7D80CB69L,0xF1432BBDL},{(-4L),0x3B2AC945L,1L,0x7D80CB69L,5L,0x0E3B8627L},{(-8L),0x30BEB468L,0xEF667D50L,0L,0xC47672E8L,0L},{0L,(-8L),0xC47672E8L,0L,0x3BFAD4B7L,0x15129DA4L}},{{(-8L),0x66132A06L,0x30BEB468L,0L,0x26EB6A0CL,8L},{(-1L),5L,(-8L),(-2L),0x68D69B74L,(-10L)},{(-10L),(-1L),0x21408BD7L,(-1L),(-10L),0x40545CD0L},{1L,(-10L),0x72D78B01L,0x44DBB93AL,0x09B32AE6L,0xF2392FF2L}}};
    const unsigned l_542 = 0x4C4F757BL;
    const unsigned char l_548[3] = {0xD5L,0xD5L,0xD5L};
    short l_558 = 5L;
    unsigned short l_580 = 0x1FBFL;
    int *** const l_616 = &g_161;
    int l_625[8][5] = {{0x65EE501AL,0x1F9E1F1DL,0x7FD2EE9BL,0x6F3B708FL,1L},{1L,0L,0x524B3818L,0x524B3818L,0L},{0x65EE501AL,0x1F9E1F1DL,0x7FD2EE9BL,0x6F3B708FL,1L},{1L,0L,0x524B3818L,0x524B3818L,0L},{0x65EE501AL,0x1F9E1F1DL,0x7FD2EE9BL,0x6F3B708FL,1L},{1L,0L,0x524B3818L,0x524B3818L,1L},{0x7FD2EE9BL,(-2L),1L,0x2B19199BL,0x65EE501AL},{0x524B3818L,1L,4L,4L,1L}};
    unsigned char l_705[9][7][4] = {{{0xC8L,0x72L,0UL,0x5AL},{255UL,0xCBL,0x1BL,0x21L},{0x09L,0xBEL,0x7DL,0UL},{0x4BL,2UL,0xB5L,0x16L},{0xEDL,0xC0L,4UL,0xB1L},{1UL,247UL,1UL,3UL},{0x78L,1UL,0xE3L,0x78L}},{{0xB1L,0xFBL,0xB8L,0UL},{247UL,0xB1L,0x26L,255UL},{0x7DL,249UL,0xAFL,0x30L},{0x39L,0x5AL,0x39L,0UL},{1UL,0UL,0x16L,0x37L},{0x4BL,0x99L,0x4BL,0UL},{0x47L,0UL,0x4BL,250UL}},{{0x4BL,0xAFL,0x16L,0xF4L},{1UL,0x1CL,0x39L,0x09L},{0x39L,0x09L,0xAFL,0x72L},{0x7DL,0x58L,0x26L,248UL},{247UL,250UL,0xB8L,0x4BL},{0xB1L,1UL,0xE3L,0UL},{0x78L,0UL,1UL,0UL}},{{1UL,0xBAL,0x02L,0xFBL},{255UL,1UL,0xFBL,0UL},{0x16L,0xC8L,0x37L,0UL},{0xF0L,0xE3L,8UL,255UL},{0x78L,3UL,1UL,0xE5L},{8UL,0x35L,0xC0L,0UL},{1UL,0UL,0x5AL,0xAAL}},{{0xB8L,0x48L,0x86L,0x09L},{1UL,0UL,255UL,0xABL},{0x47L,253UL,3UL,1UL},{0xBAL,0x39L,248UL,0x72L},{0xC8L,0xFBL,0x35L,3UL},{0x99L,0xB2L,0UL,0x89L},{0x2DL,0x72L,0x72L,0x2DL}},{{0x4BL,8UL,0xF0L,0x86L},{0x21L,0xF3L,0xC8L,0x78L},{0xB5L,0UL,0x26L,0x78L},{0xE3L,0xF3L,0UL,0x86L},{250UL,8UL,0UL,0x2DL},{0x56L,0x72L,0x3BL,0x89L},{0UL,0xB2L,250UL,3UL}},{{0x1CL,0xFBL,251UL,0x72L},{0x02L,0x39L,0UL,1UL},{0xC0L,253UL,0x30L,0xABL},{0UL,0x86L,0xABL,0x1BL},{0x1BL,0xF4L,8UL,248UL},{0xABL,0UL,0xE3L,249UL},{0x02L,255UL,0x37L,0x4BL}},{{0x86L,0xBDL,0xC0L,247UL},{0x30L,1UL,0x1CL,0x86L},{0x16L,0xB2L,0x21L,0x72L},{0x3BL,0x37L,0x30L,0UL},{1UL,0x78L,0UL,0UL},{0x74L,0x3BL,0xC8L,1UL},{0xBDL,3UL,0x72L,250UL}},{{253UL,0xD2L,0xF4L,0x2DL},{0UL,250UL,1UL,0xFBL},{1UL,8UL,0x56L,8UL},{0xFBL,255UL,255UL,0xE5L},{1UL,0xE9L,0UL,0xB8L},{0UL,1UL,0x24L,0xEDL},{0UL,0xA5L,0UL,0xBDL}}};
    union U0 **l_763 = &g_213;
    int **l_772 = &g_162[1][1];
    unsigned short l_807[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_807[i] = 2UL;
    (*l_440) |= ((((safe_mod_func_int16_t_s_s((func_10((safe_add_func_uint16_t_u_u(func_16(g_7, g_7, g_7, ((func_22(func_28((7UL > l_33), l_34, g_7, (0x74L ^ func_35(l_41, l_41.f0, g_7, g_7, g_7))), l_34, p_6, l_34, g_102[4][6].f3) && 5L) ^ 0x89L), l_111[3][1][2]), g_102[4][6].f1)), g_401, p_6) < l_111[3][1][2].f0), l_111[3][1][2].f1)) != 251UL) > g_309[0][0][1]) && l_111[3][1][2].f3);

    ;

    g_450 ^= (func_35(g_401, (safe_add_func_uint8_t_u_u(((void*)0 != &l_41), (safe_mod_func_uint16_t_u_u(((((*l_440) | (func_35(l_41, (*l_440), func_10(p_6, func_61((safe_mod_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(8UL, (p_6 && (*l_440)))) > (*l_440)), 0x93006345L)), g_441, (*l_440)), p_6), (*l_440), (*l_440)) | (*l_440))) && 0x7CFE6EF8L) >= p_6), g_125[6][4])))), p_6, g_125[6][4], g_309[2][1][0]) && 0xCFL);
    for (g_78.f1 = 1; (g_78.f1 >= 0); g_78.f1 -= 1)
    {
        union U0 l_455[7] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
        int **l_456 = &g_162[3][0];
        union U1 *l_478 = &g_78;
        union U1 **l_477 = &l_478;
        int l_492 = (-1L);
        int l_493 = 0x6B5A8A02L;
        int l_494 = 0xE82C4FE2L;
        unsigned short l_544 = 65535UL;
        int l_570 = 0x9BB01159L;
        int l_571 = 1L;
        int l_576[9];
        short l_644 = (-1L);
        int l_658 = 0x362BA5A2L;
        int l_661 = 0L;
        int l_703[2];
        short l_715 = 0x678CL;
        int i;
        for (i = 0; i < 9; i++)
            l_576[i] = (-1L);
        for (i = 0; i < 2; i++)
            l_703[i] = 0x1CDAB6BDL;
    }

        (*g_60) = (**g_161);

        return (**l_772);
}







static short func_10(unsigned char p_11, const union U1 p_12, const unsigned p_13)
{
    int *l_407 = &g_102[4][6].f1;
    int l_433 = (-10L);
    if ((0x8722L | (safe_add_func_int8_t_s_s(g_102[4][6].f3, ((g_404 & (safe_add_func_int32_t_s_s(p_13, 0x72AB0E2CL))) != ((*g_59) != l_407))))))
    {
        int *l_429 = &g_102[4][6].f1;
lbl_412:
        (*l_407) |= (safe_rshift_func_int8_t_s_s((p_11 <= 0xD40C6E26L), 1));
        for (g_404 = 0; (g_404 >= 34); g_404++)
        {
            unsigned l_413 = 0xF279DEE3L;
            union U1 *l_432 = (void*)0;
            union U1 **l_431 = &l_432;
            if (p_13)
                goto lbl_412;
            if (l_413)
                continue;
            (*g_161) = l_407;
            for (g_78.f0 = 0; (g_78.f0 >= 42); g_78.f0++)
            {
                unsigned short l_416[7];
                int *l_430[3];
                int i;
                for (i = 0; i < 7; i++)
                    l_416[i] = 1UL;
                for (i = 0; i < 3; i++)
                    l_430[i] = (void*)0;
                l_416[0]++;
                for (l_413 = 0; (l_413 <= 4); l_413 += 1)
                {
                    int i, j;
                    for (p_11 = 0; (p_11 <= 4); p_11 += 1)
                    {
                        int i, j;
                        (*g_161) = l_407;
                        l_433 ^= ((((((safe_add_func_int16_t_s_s((-8L), g_125[(l_413 + 3)][l_413])) | p_12.f0) ^ 0UL) ^ p_13) <= (safe_add_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s(((l_429 == l_430[0]) >= ((((0UL >= (((void*)0 != l_431) | 0x9FF075A1L)) <= 0xB9D2F506L) | (**g_161)) & p_13)), g_43[3])) != 0x0F8C5A12L), 7)) | p_12.f0) < g_125[6][4]), 0x6F87L)) | g_102[4][6].f3), l_413))) > l_413);
                    }
                    if (g_125[(l_413 + 3)][l_413])
                        continue;
                    if (p_13)
                        break;
                }
                if (p_11)
                {
                    unsigned l_436 = 4294967295UL;
                    if (l_433)
                        goto lbl_412;
                    if ((safe_mod_func_uint16_t_u_u(g_102[4][6].f3, g_78.f0)))
                    {
                        l_436 = 1L;
                        return g_401.f0;
                    }
                    else
                    {
                        (*l_429) = l_413;
                        if (p_13)
                            break;
                        return p_12.f0;
                    }
                }
                else
                {
                    return g_102[4][6].f0;
                }
            }
        }
    }
    else
    {
        unsigned l_437 = 4294967293UL;
        l_437--;
    }
    return (*l_407);
}







static const unsigned short func_16(unsigned char p_17, char p_18, char p_19, unsigned p_20, union U0 p_21)
{
    int *l_114 = &g_102[4][6].f4;
    int l_196[1];
    union U0 l_226 = {4294967292UL};
    int l_243[2][4][9] = {{{0L,6L,(-1L),(-1L),6L,0L,9L,0L,6L},{0L,5L,5L,0L,(-1L),6L,(-1L),6L,(-1L)},{0L,0L,0x4ABC8373L,9L,5L,9L,0x4ABC8373L,0L,0L},{(-1L),6L,0L,9L,0L,6L,(-1L),(-1L),6L}},{{9L,6L,0x4ABC8373L,6L,9L,(-1L),(-1L),9L,6L},{(-1L),0L,(-1L),(-1L),0x4ABC8373L,0x4ABC8373L,(-1L),(-1L),0L},{0L,(-1L),(-1L),0x4ABC8373L,0x4ABC8373L,(-1L),(-1L),0L,(-1L)},{6L,9L,(-1L),(-1L),9L,6L,0x4ABC8373L,6L,9L}}};
    union U1 l_248 = {0x66AFL};
    int l_336 = 0xFC1CBABDL;
    char l_342 = 0x1DL;
    unsigned l_347 = 4294967295UL;
    unsigned short l_351 = 1UL;
    unsigned char l_360 = 255UL;
    unsigned char l_378 = 249UL;
    int *l_394 = &l_248.f1;
    int *l_395 = &l_196[0];
    int *l_396[4][6] = {{&g_43[1],&g_43[1],&l_196[0],&g_43[1],&g_43[1],&l_196[0]},{&g_43[1],&g_43[1],&l_196[0],&g_43[1],&g_43[1],&l_196[0]},{&g_43[1],&g_43[1],&l_196[0],&g_43[1],&g_43[1],&l_196[0]},{&g_43[1],&g_43[1],&l_196[0],&g_43[1],&g_43[1],&l_196[0]}};
    short l_397[2];
    unsigned l_398 = 4294967286UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_196[i] = 1L;
    for (i = 0; i < 2; i++)
        l_397[i] = (-10L);
    for (p_21.f0 = 0; (p_21.f0 <= 4); p_21.f0 += 1)
    {
        int * const l_112 = &g_43[3];
        int **l_113[1];
        union U0 l_163 = {0x2F0C718AL};
        unsigned char l_178 = 0x6FL;
        unsigned short l_218[7][7] = {{0xC787L,0xC787L,0UL,0UL,0xC787L,0x3B58L,0UL},{1UL,65529UL,1UL,0UL,1UL,65529UL,1UL},{0xD6D5L,0UL,0x9B3AL,0xD6D5L,0xC787L,0x9B3AL,0x9B3AL},{0UL,0UL,0xA9BFL,0UL,0UL,0x0AF7L,0UL},{0xC787L,0xD6D5L,0x9B3AL,0UL,0xD6D5L,0xD6D5L,0UL},{1UL,0UL,1UL,65529UL,1UL,65529UL,1UL},{0xC787L,0UL,0UL,0xC787L,0xC787L,0UL,0UL}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_113[i] = &g_60;
        l_114 = l_112;

        ;
        for (g_78.f0 = 0; (g_78.f0 <= 4); g_78.f0 += 1)
        {
            const int l_126 = (-1L);
            int **l_146 = &g_60;
            int l_164 = 0xB9BCF21FL;
            int l_197 = 0x7918DDF3L;
        }
    }

    ;
    if (func_65(p_19, &l_114, func_28((*l_114), (*l_114), ((*l_114) > ((((*l_114) < (func_22(p_21, g_43[3], (*l_114), (*l_114), g_102[4][6].f3) != (*l_114))) & 0x98F8L) > (*l_114))), g_102[4][6].f0), l_243[1][0][2]))
    {
        unsigned l_244 = 1UL;
        int * const *l_245[6] = {(void*)0,&l_114,&l_114,(void*)0,&l_114,&l_114};
        int *l_249 = &g_102[4][6].f4;
        int l_260[9][1][3] = {{{0x2F704F95L,0x3126E455L,0x2F704F95L}},{{(-4L),(-4L),(-4L)}},{{0x2F704F95L,0x3126E455L,0x2F704F95L}},{{(-4L),(-4L),(-4L)}},{{0x2F704F95L,0x3126E455L,0x2F704F95L}},{{(-4L),(-4L),(-4L)}},{{0x2F704F95L,0x3126E455L,0x2F704F95L}},{{(-4L),(-4L),(-4L)}},{{0x2F704F95L,0x3126E455L,0x2F704F95L}}};
        union U1 l_269 = {65535UL};
        union U1 *l_344 = &l_269;
        union U1 **l_343 = &l_344;
        int i, j, k;
        (*g_161) = func_54(&l_114, func_61((((g_43[2] == (l_244 && func_22(g_102[3][6], (((*l_114) >= func_22(p_21, p_21.f4, p_17, (((((*l_114) > 0x2BDCCD84L) < p_20) || 0x8DL) ^ (*l_114)), p_18)) <= g_102[4][6].f4), g_125[2][2], p_19, p_20))) ^ (*l_114)) || g_78.f0), l_244, g_7), g_78, (*g_161));

        ;

        (*g_161) = func_54(l_245[4], func_61((~0x659DCB3FL), (safe_sub_func_int16_t_s_s((((((func_65(((&l_245[4] == &g_59) < (g_125[2][2] == ((*l_114) != g_125[2][3]))), &l_114, g_102[3][5], p_21.f0) >= 0x3212L) == (*l_114)) && p_21.f4) & g_102[4][6].f1) & g_102[4][6].f3), p_19)), (*l_114)), l_248, l_249);
        for (p_21.f3 = (-4); (p_21.f3 <= 43); ++p_21.f3)
        {
            char l_261 = 8L;
            const char l_276 = 0x0DL;
            int *l_363 = &g_43[8];
        }

                for (l_226.f3 = 0; (l_226.f3 >= 15); ++l_226.f3)
        {
            return p_20;
        }

            }
    else
    {
        return (*l_114);
    }

    ;

        --l_398;
    return g_43[2];
}







static int func_22(union U0 p_23, unsigned char p_24, unsigned p_25, unsigned char p_26, char p_27)
{
    int l_110 = 0L;
    for (p_26 = 0; (p_26 > 21); p_26++)
    {
        int *l_107 = &g_78.f1;
        int *l_108 = &g_78.f1;
        int *l_109 = &g_78.f1;
        l_110 |= (safe_add_func_int8_t_s_s((g_102[4][6].f3 >= ((1UL == (~p_23.f4)) && (**g_59))), g_7));
    }
    return l_110;
}







static union U0 func_28(unsigned char p_29, short p_30, unsigned short p_31, unsigned short p_32)
{
    int *l_101 = &g_43[3];
    g_60 = l_101;

    ;
    (*l_101) = p_30;
    return g_102[4][6];

    }







static unsigned char func_35(union U1 p_36, unsigned p_37, const char p_38, unsigned p_39, short p_40)
{
    int *l_42 = &g_43[3];
    int **l_44 = &l_42;
    int l_49 = 0x393632CAL;
    int l_50 = 0xA341A463L;
    union U0 l_70 = {0UL};
    (*l_44) = l_42;
    for (p_36.f1 = (-9); (p_36.f1 < (-3)); p_36.f1++)
    {
        int l_47 = 0x0D6158F8L;
        int *l_48[5];
        unsigned l_51[5] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL};
        int **l_99 = &l_48[3];
        int i;
        for (i = 0; i < 5; i++)
            l_48[i] = (void*)0;
        ++l_51[1];
        (*l_44) = func_54(g_59, func_61(g_43[3], p_37, (func_65(g_43[2], &l_48[1], l_70, g_43[4]) <= 0xFCA1L)), g_78, &g_43[3]);

                (*l_99) = (*g_59);


        (**l_44) = (g_43[3] || (safe_unary_minus_func_int32_t_s((-1L))));
    }

        return g_43[3];
}







static int * func_54(int * const * p_55, union U1 p_56, union U1 p_57, int * p_58)
{
    int *l_82 = &g_78.f1;
    char l_84 = 2L;
    int **l_86[9] = {&l_82,&l_82,&l_82,&l_82,&l_82,&l_82,&l_82,&l_82,&l_82};
    int ***l_85 = &l_86[4];
    unsigned l_96 = 0xD62FFE2AL;
    union U0 l_97 = {0UL};
    unsigned char l_98[6][4][5] = {{{0x13L,0x11L,0x88L,0x11L,0x13L},{255UL,1UL,250UL,250UL,1UL},{0x13L,250UL,250UL,0x13L,250UL},{255UL,250UL,0x13L,250UL,250UL}},{{0x88L,250UL,0x88L,0UL,250UL},{250UL,0x65L,0UL,250UL,0UL},{250UL,250UL,0x13L,250UL,255UL},{0x88L,255UL,0UL,0UL,255UL}},{{255UL,0x65L,0x88L,255UL,0UL},{250UL,255UL,0x13L,255UL,250UL},{0x88L,250UL,0x65L,0UL,250UL},{250UL,0x65L,0x65L,250UL,0UL}},{{255UL,250UL,0x13L,250UL,250UL},{0x88L,250UL,0x88L,0UL,250UL},{250UL,0x65L,0UL,250UL,0UL},{250UL,250UL,0x13L,250UL,255UL}},{{0x88L,255UL,0UL,0UL,255UL},{255UL,0x65L,0x88L,255UL,0UL},{250UL,255UL,0x13L,255UL,250UL},{0x88L,250UL,0x65L,0UL,250UL}},{{250UL,0x65L,0x65L,250UL,0UL},{255UL,250UL,0x13L,250UL,250UL},{0UL,250UL,0UL,0x65L,250UL},{255UL,0x88L,0x65L,255UL,0x65L}}};
    int i, j, k;
    for (g_78.f1 = 0; (g_78.f1 < (-21)); g_78.f1 = safe_sub_func_uint16_t_u_u(g_78.f1, 8))
    {
        int **l_83[5];
        int i;
        for (i = 0; i < 5; i++)
            l_83[i] = &g_60;
        g_60 = l_82;

        ;
        if (l_84)
            continue;
    }

    (*l_85) = &l_82;
    for (g_78.f1 = 0; (g_78.f1 <= (-6)); g_78.f1--)
    {
        int **l_89 = &l_82;
        union U0 l_90 = {0x9D621DD8L};
        unsigned l_93 = 0x59947D9BL;
        l_93 |= ((l_89 != &g_60) || (((func_65(g_43[6], &p_58, l_90, g_7) & (safe_rshift_func_uint8_t_u_s((**l_89), g_43[3]))) | p_56.f0) && 1UL));
    }
    l_98[0][3][3] &= (((safe_rshift_func_uint16_t_u_u(g_43[8], (***l_85))) | (func_65(l_96, &g_60, l_97, g_43[3]) | g_7)) == g_43[5]);
    return &g_43[5];


}







static union U1 func_61(const int p_62, unsigned p_63, short p_64)
{
    union U1 l_79 = {6UL};
    for (p_64 = 0; (p_64 < 13); p_64++)
    {
        short l_73 = (-5L);
        int **l_74 = &g_60;
        int ***l_75 = &l_74;
        if (l_73)
            break;
        (*l_75) = l_74;
        for (p_63 = (-7); (p_63 <= 11); p_63 = safe_add_func_int32_t_s_s(p_63, 2))
        {
            return g_78;

                    }
    }
    g_60 = (*g_59);
    return l_79;

    }







static unsigned short func_65(int p_66, int ** p_67, union U0 p_68, char p_69)
{
    return g_43[9];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_43[i], "g_43[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_125[i][j], "g_125[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_309[i][j][k], "g_309[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_401.f0, "g_401.f0", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_756.f0, "g_756.f0", print_hash_value);
    transparent_crc(g_756.f1, "g_756.f1", print_hash_value);
    transparent_crc(g_756.f2, "g_756.f2", print_hash_value);
    transparent_crc(g_756.f3, "g_756.f3", print_hash_value);
    transparent_crc(g_756.f4, "g_756.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_774[i], "g_774[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_817, "g_817", print_hash_value);
    transparent_crc(g_882, "g_882", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
