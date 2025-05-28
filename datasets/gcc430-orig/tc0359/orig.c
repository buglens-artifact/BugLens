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



static unsigned g_2 = 0x8D4081C2L;
static int g_16[9] = {0x335C22C9L,0x335C22C9L,0x335C22C9L,0x335C22C9L,0x335C22C9L,0x335C22C9L,0x335C22C9L,0x335C22C9L,0x335C22C9L};
static int g_91 = 0x9845F054L;
static char g_93[6] = {0xDCL,0xDCL,0xDCL,0xDCL,0xDCL,0xDCL};
static int *g_119[7][4][9] = {{{(void*)0,&g_91,(void*)0,&g_16[4],(void*)0,&g_16[4],(void*)0,&g_16[4],(void*)0},{(void*)0,(void*)0,&g_16[5],&g_16[2],&g_16[5],(void*)0,(void*)0,&g_16[5],&g_16[2]},{&g_16[4],&g_91,&g_16[4],&g_16[4],(void*)0,&g_16[4],(void*)0,&g_16[4],(void*)0},{&g_91,&g_16[5],&g_16[5],&g_91,&g_16[2],&g_16[5],(void*)0,(void*)0,&g_16[5]}},{{(void*)0,(void*)0,&g_16[4],(void*)0,(void*)0,&g_91,&g_91,&g_16[4],&g_91},{(void*)0,&g_16[2],&g_91,&g_91,&g_16[2],(void*)0,&g_16[2],&g_91,&g_91},{(void*)0,&g_91,&g_91,&g_16[4],&g_91,&g_91,(void*)0,(void*)0,&g_16[4]},{&g_16[5],&g_16[2],&g_16[5],(void*)0,(void*)0,&g_16[5],&g_16[2],&g_16[5],(void*)0}},{{(void*)0,(void*)0,&g_91,&g_16[4],(void*)0,&g_16[4],&g_91,(void*)0,(void*)0},{(void*)0,(void*)0,&g_91,(void*)0,(void*)0,(void*)0,(void*)0,&g_91,(void*)0},{&g_91,&g_16[4],&g_16[4],&g_16[4],(void*)0,(void*)0,(void*)0,&g_16[4],&g_16[4]},{(void*)0,(void*)0,(void*)0,&g_91,(void*)0,(void*)0,(void*)0,(void*)0,&g_91}},{{(void*)0,&g_16[4],(void*)0,(void*)0,&g_91,&g_16[4],(void*)0,&g_16[4],&g_91},{&g_16[5],(void*)0,(void*)0,&g_16[5],&g_16[2],&g_16[5],(void*)0,(void*)0,&g_16[5]},{(void*)0,&g_16[4],(void*)0,&g_16[4],(void*)0,&g_16[4],&g_16[4],&g_91,&g_16[4]},{&g_91,(void*)0,(void*)0,(void*)0,(void*)0,&g_91,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_16[4],&g_16[4],&g_91,&g_16[4],&g_16[4],(void*)0,&g_16[4],(void*)0},{&g_16[2],(void*)0,&g_16[2],&g_91,&g_91,&g_16[2],(void*)0,&g_16[2],&g_91},{(void*)0,&g_16[4],&g_16[4],&g_16[4],&g_91,&g_16[4],&g_16[4],&g_16[4],(void*)0},{&g_16[5],&g_91,(void*)0,&g_91,&g_16[5],&g_16[5],&g_91,(void*)0,&g_91}},{{&g_16[4],(void*)0,(void*)0,&g_91,&g_91,&g_16[4],&g_91,&g_91,(void*)0},{&g_16[5],&g_16[5],&g_91,(void*)0,&g_91,&g_16[5],&g_16[5],&g_91,(void*)0},{(void*)0,(void*)0,(void*)0,&g_16[4],&g_16[4],&g_16[4],&g_91,&g_16[4],&g_16[4]},{&g_16[2],&g_91,&g_91,&g_16[2],(void*)0,&g_16[2],&g_91,&g_91,&g_16[2]}},{{(void*)0,&g_16[4],(void*)0,&g_16[4],(void*)0,&g_16[4],(void*)0,&g_16[4],(void*)0},{&g_16[5],(void*)0,&g_16[2],&g_16[2],(void*)0,&g_16[5],(void*)0,&g_16[2],&g_16[2]},{&g_91,(void*)0,(void*)0,&g_16[4],(void*)0,(void*)0,&g_91,&g_16[4],(void*)0},{&g_91,(void*)0,&g_91,&g_16[5],&g_16[5],&g_91,(void*)0,&g_91,&g_16[5]}}};
static unsigned char g_127 = 255UL;
static unsigned g_161 = 0UL;
static short g_202 = 0xB5A7L;
static int g_255 = 0L;
static int **g_276 = &g_119[2][1][0];
static char g_299[8] = {0x52L,(-8L),0x52L,(-8L),0x52L,(-8L),0x52L,(-8L)};
static unsigned char g_307 = 0xC5L;
static int *g_309 = &g_16[4];
static unsigned char g_452 = 254UL;
static unsigned char g_752 = 0xC9L;
static const int *g_757[2] = {(void*)0,(void*)0};
static int *g_909 = &g_16[4];
static int g_988 = 0x0764B585L;
static short g_1005 = 0L;



static unsigned func_1(void);
static short func_19(const int * p_20);
static int func_21(unsigned char p_22, int * const p_23, unsigned p_24, unsigned p_25);
static int func_26(int * p_27, unsigned p_28, int * p_29, int * const p_30, int p_31);
static int * func_32(int p_33, const int p_34, int * p_35, int * p_36);
static int * func_42(unsigned p_43, unsigned p_44, unsigned char p_45);
static int * const func_46(const char p_47);
static unsigned short func_58(unsigned p_59, int p_60, int * p_61, char p_62);
static char func_72(int p_73, int * p_74, const int * p_75);
static int * const func_82(short p_83);
static unsigned func_1(void)
{
    short l_3[7];
    unsigned l_14 = 5UL;
    int *l_15 = &g_16[4];
    const unsigned short l_1004 = 65535UL;
    int l_1027[8][8] = {{1L,0x1670ABF5L,1L,5L,0xDA586C0CL,(-6L),(-6L),0x1205D7A5L},{0xB3D24C4EL,0xDA586C0CL,(-1L),(-6L),(-6L),(-1L),0xDA586C0CL,0xB3D24C4EL},{0xB3D24C4EL,5L,(-1L),1L,0xDA586C0CL,2L,(-1L),2L},{1L,0xF300C969L,0x1205D7A5L,0xF300C969L,1L,2L,0x1670ABF5L,0xDA586C0CL},{(-6L),5L,0xF300C969L,0x50FEE965L,(-1L),(-1L),0x50FEE965L,0xF300C969L},{0xDA586C0CL,0xDA586C0CL,0xF300C969L,0xB3D24C4EL,(-1L),(-6L),0x1670ABF5L,(-6L)},{(-1L),0x1670ABF5L,0x1205D7A5L,0xDA586C0CL,0x1205D7A5L,0x1670ABF5L,(-1L),0x1670ABF5L},{1L,5L,0xDA586C0CL,(-6L),(-6L),0x1205D7A5L,0x1205D7A5L,(-6L)}};
    unsigned l_1054[7] = {0xCA39D8C1L,0xCA39D8C1L,0xCA39D8C1L,0xCA39D8C1L,0xCA39D8C1L,0xCA39D8C1L,0xCA39D8C1L};
    char l_1055 = 0x06L;
    int * const *l_1061 = &g_119[1][2][2];
    int * const **l_1060 = &l_1061;
    int *l_1062 = (void*)0;
    int *l_1063 = &g_988;
    unsigned l_1064 = 1UL;
    int i, j;
    for (i = 0; i < 7; i++)
        l_3[i] = 8L;
    (*l_15) = (g_2 && (l_3[4] , (((safe_add_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((g_2 , ((l_3[4] != ((g_2 == l_3[3]) > (0xE0L == (safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((-3L), (safe_rshift_func_int16_t_s_u(l_14, l_14)))) > g_2), 0x359BL))))) & g_2)), g_2)) & g_2), g_2)) == (-1L)) , 0xABB7L)));
    if (g_16[4])
    {
        int *l_994[2][5][10] = {{{&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8]},{&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8]},{&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8]},{&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8]},{&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8]}},{{&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8]},{&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8]},{&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8]},{&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8]},{&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8],&g_16[8]}}};
        int l_1002[2];
        unsigned l_1045 = 1UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1002[i] = 0xD38656DDL;
        (*l_15) = (safe_div_func_int16_t_s_s(func_19((func_21((*l_15), &g_16[4], g_16[2], (g_16[2] <= g_16[4])) , (void*)0)), (g_307 && (-10L))));
        if (((safe_lshift_func_int8_t_s_u((((((safe_rshift_func_uint16_t_u_s(func_26(&g_255, ((!((((*l_15) || ((*l_15) >= ((g_255 != (*l_15)) > 0x36497CCAL))) || (8L || (&g_276 != &g_276))) | 0x78D2C65CL)) , 2UL), l_994[0][4][8], &g_91, (*g_309)), 7)) , g_2) >= (*l_15)) , &g_276) != (void*)0), (*l_15))) ^ (*g_909)))
        {
            short l_995 = 0xB28EL;
            int * const l_1003[3] = {(void*)0,(void*)0,(void*)0};
            int i;
            for (l_14 = 0; (l_14 <= 1); l_14 += 1)
            {
                unsigned l_1012 = 4294967288UL;
                int i;
                g_16[(l_14 + 7)] = ((g_16[(l_14 + 1)] || (l_995 | g_16[4])) , (*l_15));
                if ((*l_15))
                {
                    int l_1006 = (-9L);
                    int i;
                    g_276 = &g_909;
                    g_16[(l_14 + 2)] = (**g_276);
                    if ((*g_309))
                        break;
                    l_1006 |= func_72(g_299[2], (*g_276), (g_307 , (*g_276)));
                }
                else
                {
                    for (g_161 = 0; (g_161 <= 8); g_161 += 1)
                    {
                        int ***l_1007 = &g_276;
                        (*l_1007) = &g_119[2][0][2];
                    }
                    return g_16[4];
                }
                for (g_202 = 1; (g_202 >= 0); g_202 -= 1)
                {
                    int l_1013 = 0L;
                    l_1013 |= (((safe_div_func_int8_t_s_s(g_255, g_91)) ^ (*l_15)) , (safe_sub_func_uint8_t_u_u(l_1012, 0x39L)));
                    for (g_1005 = 1; (g_1005 >= 0); g_1005 -= 1)
                    {
                        unsigned l_1022 = 2UL;
                        l_1027[6][1] |= func_21((safe_add_func_uint8_t_u_u(g_16[8], (safe_sub_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(255UL, (&g_276 == (void*)0))) , ((*g_309) <= (((safe_add_func_uint16_t_u_u(((l_1022 || (safe_lshift_func_uint8_t_u_s(func_21((safe_add_func_int32_t_s_s((-5L), 1UL)), &g_16[(l_14 + 7)], g_16[5], (*l_15)), 1))) < 0x81L), g_2)) , g_202) , (*g_309)))), g_202)))), (*g_276), g_127, g_127);
                        (*g_309) = (**g_276);
                        if (l_1022)
                            continue;
                        return g_299[2];
                    }
                    return g_307;
                }
            }
        }
        else
        {
            int l_1030 = 0x673653E6L;
            char l_1037 = 0x32L;
            int **l_1038[9][2] = {{&g_909,&g_909},{(void*)0,&g_909},{&g_909,&l_994[0][4][8]},{&l_994[0][0][2],&g_909},{(void*)0,&l_994[0][0][2]},{&g_909,&l_994[0][4][8]},{&g_909,&l_994[0][0][2]},{(void*)0,&g_909},{&l_994[0][0][2],&l_994[0][4][8]}};
            int i, j;
            g_757[1] = func_42((~(4294967286UL == (((safe_rshift_func_uint16_t_u_s(l_1030, g_452)) & ((*g_309) > (safe_rshift_func_uint8_t_u_s((func_26(&l_1027[6][6], (safe_mod_func_int16_t_s_s((+g_299[2]), (safe_div_func_int16_t_s_s(l_1037, l_1030)))), l_994[0][4][8], l_994[0][1][2], (*l_15)) , l_1037), g_1005)))) == (*l_15)))), l_1030, g_1005);
        }
        (*l_15) = (+(safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((8UL == (safe_div_func_uint32_t_u_u(func_26(func_32(((&l_1027[6][1] != l_994[1][1][9]) & (g_752 , (l_1045 <= (g_202 > (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((0xF504L < (7UL | ((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(func_21(g_202, &g_91, g_161, g_452), 4)), g_299[4])) , l_1054[4]))), l_1055)), g_307)))))), g_16[4], &g_91, &g_255), g_16[4], l_994[0][4][8], &g_16[8], (*l_15)), (*l_15)))), (*l_15))), 13)));
    }
    else
    {
        return (*l_15);
    }
    (*l_1063) ^= (g_91 | (((((((safe_add_func_uint8_t_u_u(247UL, g_91)) , l_1060) != &g_276) , 6L) > ((*l_15) >= (*l_15))) > g_255) & (*g_909)));
    return l_1064;
}







static short func_19(const int * p_20)
{
    unsigned l_41 = 0xC9FF7503L;
    int *l_453 = &g_91;
    int *l_986 = (void*)0;
    int *l_987 = &g_988;
    int **l_989[10][10] = {{&l_453,&g_119[3][0][6],(void*)0,&l_453,&l_453,&l_987,&l_453,&l_453,(void*)0,&g_119[3][0][6]},{&g_309,&g_309,&l_987,&l_453,&g_119[1][2][2],&g_309,&l_453,&g_309,&g_119[1][2][2],&l_453},{&g_309,&l_453,&g_309,&g_309,&l_453,&g_309,&g_309,&g_119[3][0][6],&g_309,&g_309},{&g_309,&g_119[3][0][6],(void*)0,&g_119[3][0][6],&g_309,&l_987,&l_453,&g_119[3][0][6],&l_986,&g_119[3][0][6]},{&l_453,&g_309,&g_309,&l_453,&g_309,&g_309,&l_453,&g_309,&g_309,&g_119[3][0][6]},{&g_119[1][2][2],&l_453,&l_987,&g_309,&g_309,&g_309,&l_987,&l_453,&g_119[1][2][2],&g_309},{&l_453,&l_453,(void*)0,&g_119[3][0][6],&l_453,(void*)0,&l_453,&g_119[3][0][6],(void*)0,&l_453},{&g_309,&g_309,&l_987,&g_119[3][0][6],&g_119[1][2][2],&g_309,&l_453,&g_309,&g_119[1][2][2],&g_119[3][0][6]},{&g_309,&g_119[3][0][6],&g_309,&g_309,&l_453,&g_309,&g_309,&l_453,&g_309,&g_309},{&g_309,&l_453,(void*)0,&l_453,&g_309,(void*)0,&l_453,&l_453,&l_986,&l_453}};
    int i, j;
    (*l_987) &= func_26(func_32((safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(func_21(l_41, func_42(func_21(l_41, func_46(l_41), g_299[2], (safe_lshift_func_uint16_t_u_u(g_91, ((((&g_309 == &p_20) >= l_41) > (-1L)) < g_161)))), l_41, l_41), g_161, g_161), g_452)), l_41)), l_41, l_453, l_453), g_2, l_453, l_453, (*l_453));
    (*g_909) = (*g_909);
    p_20 = func_42(((&p_20 == (void*)0) , (((((*l_987) , (0x9EL && 0xC3L)) || ((g_299[2] < (func_26(func_42((*l_987), (((((-2L) < (*l_987)) <= 0xC7L) != (*l_987)) , 4294967295UL), (*l_987)), g_202, &g_16[1], &g_255, (*l_987)) , 0L)) | (*l_453))) , (*l_987)) >= (*l_987))), g_307, (*l_453));
    return g_93[0];
}







static int func_21(unsigned char p_22, int * const p_23, unsigned p_24, unsigned p_25)
{
    return p_25;
}







static int func_26(int * p_27, unsigned p_28, int * p_29, int * const p_30, int p_31)
{
    const int *l_456 = &g_91;
    const int **l_455[7] = {&l_456,(void*)0,(void*)0,&l_456,(void*)0,(void*)0,&l_456};
    const int ***l_457 = &l_455[6];
    short l_479 = (-1L);
    int *l_490 = (void*)0;
    unsigned char l_500 = 0UL;
    int l_597 = 1L;
    int * const l_656 = (void*)0;
    int **l_729 = &l_490;
    short l_779 = (-1L);
    short l_800 = 0x4142L;
    unsigned l_931 = 2UL;
    const int * const *l_948[1][7] = {{&l_456,&l_456,&l_456,&l_456,&l_456,&l_456,&l_456}};
    const int * const **l_947 = &l_948[0][5];
    char l_966 = 0x55L;
    int i, j;
    (*l_457) = l_455[6];
    return (*g_309);
}







static int * func_32(int p_33, const int p_34, int * p_35, int * p_36)
{
    int *l_454 = &g_16[7];
    l_454 = l_454;
    return p_35;
}







static int * func_42(unsigned p_43, unsigned p_44, unsigned char p_45)
{
    int *l_451[2][2][5] = {{{&g_91,&g_91,&g_255,&g_16[4],&g_16[3]},{&g_16[4],&g_255,&g_255,&g_16[4],&g_91}},{{&g_16[4],&g_16[4],&g_16[6],&g_16[6],&g_16[4]},{&g_91,&g_255,&g_16[6],&g_255,&g_255}}};
    int i, j, k;
    return l_451[1][0][2];
}







static int * const func_46(const char p_47)
{
    char l_48 = 0L;
    int *l_49 = &g_16[4];
    unsigned short l_335 = 0x1C2EL;
    char l_383 = (-1L);
    short l_402 = 0xB3C7L;
    short l_445 = 0x32F9L;
    (*l_49) = l_48;
    for (l_48 = 0; (l_48 > 24); l_48 = safe_add_func_int8_t_s_s(l_48, 5))
    {
        unsigned l_69 = 0x6851CC0DL;
        int ***l_325 = &g_276;
        int *l_334 = &g_91;
        int l_336 = 0x42CD6622L;
    }
    if ((*l_49))
    {
        char l_378 = (-1L);
        int *l_379[1][1][9] = {{{&g_16[4],&g_16[4],&g_16[4],&g_16[4],&g_16[4],&g_16[4],&g_16[4],&g_16[4],&g_16[4]}}};
        int ***l_403 = &g_276;
        int i, j, k;
        (*g_276) = l_49;
        for (g_255 = 0; (g_255 > (-8)); g_255--)
        {
            unsigned short l_377 = 0UL;
            int l_397 = 0L;
            int ***l_418 = &g_276;
            for (g_202 = (-26); (g_202 > (-10)); g_202 = safe_add_func_uint16_t_u_u(g_202, 2))
            {
                return l_49;
            }
            (*g_309) ^= 0xB7D06C7DL;
            if (((65535UL == g_16[2]) | (safe_rshift_func_uint8_t_u_s((((*l_49) == (*l_49)) , (l_377 | p_47)), 6))))
            {
                int *l_382 = &g_16[4];
                l_383 |= ((safe_lshift_func_uint16_t_u_s(g_255, ((g_16[3] <= g_16[4]) ^ func_72(g_127, l_382, l_379[0][0][8])))) && (*g_309));
            }
            else
            {
                char l_394[3];
                int l_422 = 0x304EA887L;
                int l_426 = 0xEC4534D0L;
                int i;
                for (i = 0; i < 3; i++)
                    l_394[i] = (-1L);
                if (l_377)
                    break;
                for (g_127 = (-16); (g_127 < 46); g_127 = safe_add_func_uint16_t_u_u(g_127, 2))
                {
                    int l_393 = 0xD20231A9L;
                    for (g_202 = 0; (g_202 >= 0); g_202 -= 1)
                    {
                        int ***l_386 = &g_276;
                        int i, j, k;
                        (*l_386) = &l_379[g_202][g_202][(g_202 + 8)];
                        (*l_49) ^= (safe_rshift_func_uint8_t_u_u((&g_276 != &g_276), 4));
                        l_397 &= (~((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((p_47 , ((-1L) >= ((*l_49) >= ((~l_393) >= (l_394[2] | 0UL))))), 65535UL)), (safe_lshift_func_uint16_t_u_u(p_47, (((*l_49) <= 0x56231797L) > 0x6DL))))) , l_377));
                    }
                    if ((((((safe_sub_func_uint32_t_u_u((!(g_161 < (~(safe_add_func_uint8_t_u_u((l_397 >= p_47), g_93[4]))))), ((-9L) > (*g_309)))) != p_47) < (l_402 <= g_127)) , l_403) == l_403))
                    {
                        int ***l_419 = &g_276;
                        (*l_49) = ((((p_47 , p_47) < (safe_rshift_func_int16_t_s_s((g_16[4] , (safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(l_393, (((((safe_div_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s(func_21((l_418 != l_419), (**l_419), ((*l_49) < p_47), g_127), (*l_49))) && p_47) , l_394[1]), 0x3F03L)), 0x06D3L)) > 0x3335L) > 4UL) , p_47) ^ l_394[0]))), 0x94B52D4FL)), (*l_49)))), 9))) , 0x56DBFC58L) != p_47);
                        l_422 |= (safe_mod_func_uint8_t_u_u(p_47, ((*l_49) , func_72(p_47, (*g_276), l_49))));
                    }
                    else
                    {
                        int *l_425 = &l_422;
                        int ***l_427 = &g_276;
                        (*l_49) = ((p_47 & ((0xB9L < p_47) < (((safe_mod_func_int16_t_s_s(((6UL | l_426) , p_47), g_255)) , 0xC95CL) | g_2))) ^ l_393);
                        (*l_425) = ((&g_276 == l_427) & g_299[2]);
                    }
                }
            }
        }
    }
    else
    {
        int l_442[2];
        int i;
        for (i = 0; i < 2; i++)
            l_442[i] = 0x2E89AD5EL;
        for (g_255 = 0; (g_255 < 17); ++g_255)
        {
            unsigned short l_443 = 0xEB56L;
            int ** const l_444 = &g_119[1][2][2];
            int *l_446 = (void*)0;
            int *l_447 = &l_442[0];
            char l_448 = (-2L);
            (*l_447) ^= (((safe_add_func_int32_t_s_s((((-1L) < ((*l_49) , p_47)) != ((safe_lshift_func_uint8_t_u_u((p_47 | ((((((((((((((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(3UL, (p_47 ^ p_47))), p_47)) ^ g_91) , (-1L)) , g_202) == 0x8F80A254L), p_47)), 255UL)) == (*l_49)) == 0L) , g_91) , p_47) , l_443) , l_444) != &g_119[2][3][8]) ^ l_445) ^ 6L) & p_47) , (void*)0) == &g_276) & (-2L))), g_93[2])) , (*l_49))), g_16[4])) > 0xCB2E47D2L) | g_127);
            l_448 = (l_442[1] < (g_299[2] >= 0x31CEL));
            (*g_276) = (*g_276);
        }
    }
    return l_49;
}







static unsigned short func_58(unsigned p_59, int p_60, int * p_61, char p_62)
{
    unsigned l_76 = 0x15B62742L;
    int *l_77 = &g_16[4];
    int l_140 = 0xE851EC27L;
    unsigned short l_141 = 65535UL;
    int l_148[1];
    int l_275 = 0x6A5F1134L;
    int *l_323 = &g_16[0];
    int i;
    for (i = 0; i < 1; i++)
        l_148[i] = 0L;
    if ((0x79L >= (safe_lshift_func_int8_t_s_u((!func_72(l_76, l_77, ((((g_16[0] & (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(g_16[7], func_21(((func_21(g_16[8], func_82(p_59), (((p_59 && (*l_77)) , (void*)0) != &p_60), g_2) >= 0UL) | 0x51L), l_77, g_16[4], g_16[4]))) != (*p_61)), g_2))) > g_2) == 0x2EL) , &g_16[4]))), 7))))
    {
        unsigned char l_98 = 0UL;
        int l_116 = 0xB3BF0D08L;
        int **l_143 = &g_119[0][3][5];
        unsigned short l_203 = 1UL;
        for (g_91 = 1; (g_91 <= 5); g_91 += 1)
        {
            int * const l_109 = (void*)0;
            int l_142 = 0xB2AD6262L;
            int i;
            if ((safe_rshift_func_int16_t_s_s(g_93[g_91], (func_21((safe_div_func_uint8_t_u_u((l_98 , (safe_rshift_func_int16_t_s_u(p_59, 6))), l_98)), &g_91, (((safe_add_func_int16_t_s_s((func_72(g_93[g_91], ((safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(g_93[1], func_21(p_59, l_109, p_59, p_59))), 4294967295UL)), g_91)) , (void*)0), &g_16[8]) ^ (*l_77)), 1L)) , p_60) , g_93[0]), p_60) >= (*l_77)))))
            {
                int **l_134 = &l_77;
                for (p_59 = 0; (p_59 <= 5); p_59 += 1)
                {
                    int *l_114 = (void*)0;
                    unsigned short l_115 = 1UL;
                    unsigned l_133 = 0x99D89CF6L;
                    l_116 = ((p_60 , ((void*)0 == l_77)) , (safe_lshift_func_uint8_t_u_s(0x06L, (!((g_91 < (safe_lshift_func_uint16_t_u_u((((*p_61) , (l_114 == (void*)0)) , (((p_62 == p_60) != p_59) , 7UL)), l_115))) != 1UL)))));
                    for (p_62 = 5; (p_62 >= 0); p_62 -= 1)
                    {
                        const char l_126[3][3][5] = {{{5L,0x64L,0x64L,5L,0x2CL},{7L,0x6FL,0x6FL,0L,0xA9L},{0x64L,0x20L,0x20L,0x64L,(-3L)}},{{0L,0x6FL,0x6FL,0L,0xA9L},{0x64L,0x20L,0x20L,0x64L,(-3L)},{0L,0x6FL,0x6FL,0L,0xA9L}},{{0x64L,0x20L,0x20L,0x64L,(-3L)},{0L,0x6FL,0x6FL,0L,0xA9L},{0x64L,0x20L,0x20L,0x64L,(-3L)}}};
                        int *l_128 = &l_116;
                        int i, j, k;
                        if (g_2)
                            break;
                        (*l_128) = (safe_mod_func_int32_t_s_s(((l_98 , g_119[1][2][2]) == (void*)0), (safe_div_func_int16_t_s_s(((((safe_add_func_int32_t_s_s(((func_21(g_2, &g_16[4], (safe_sub_func_uint32_t_u_u(g_16[0], (l_98 & p_60))), (*l_77)) || (*l_77)) | l_126[2][1][4]), (*l_77))) , p_59) != g_127) >= p_62), g_91))));
                        (*l_128) = (~(*l_77));
                        (*l_128) &= ((~((safe_sub_func_uint8_t_u_u(g_93[2], (safe_rshift_func_int16_t_s_u(p_60, 7)))) , func_72(g_2, &l_116, &p_60))) > p_59);
                    }
                    return l_133;
                }
                g_119[1][0][2] = &g_16[3];
                (*l_134) = &p_60;
            }
            else
            {
                unsigned char l_137 = 255UL;
                p_60 = (*p_61);
                g_119[5][2][7] = &p_60;
                l_142 = (((*p_61) <= (((safe_add_func_int16_t_s_s(l_137, p_60)) , &g_119[1][2][8]) == &p_61)) , (0xBB118774L & ((safe_sub_func_uint32_t_u_u(l_140, (func_21(g_16[3], &g_16[4], l_98, l_141) , 0x88347750L))) , p_60)));
                l_148[0] &= ((l_143 == l_143) > (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((&g_16[4] == (void*)0) != p_60) & p_59), p_59)), 9)));
            }
            for (p_60 = 5; (p_60 >= 0); p_60 -= 1)
            {
                unsigned l_157 = 4294967287UL;
                int * const l_158 = &l_148[0];
                for (l_76 = 0; (l_76 <= 5); l_76 += 1)
                {
                    char l_159 = 0x98L;
                    int **l_160 = &g_119[3][0][4];
                    for (g_2 = 0; (g_2 <= 5); g_2 += 1)
                    {
                        int *l_149 = &l_116;
                        int i;
                        (*l_149) = g_93[g_2];
                        (*l_149) = (-4L);
                        if ((*p_61))
                            continue;
                        l_159 &= func_21((g_127 & (((65535UL || ((*l_149) & (&p_61 != (void*)0))) | p_62) > (((((safe_add_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(p_60, (*p_61))) < ((safe_unary_minus_func_int32_t_s(((~((((safe_sub_func_uint8_t_u_u((l_157 , 0xA0L), 0UL)) , 1UL) < 0x51C6L) || g_93[3])) , (*p_61)))) > 0xA684L)) >= 0x6AL), (*l_77))) > 1UL) || g_91) , &p_60) == (void*)0))), l_158, (*l_158), p_60);
                    }
                    for (l_140 = 5; (l_140 >= 0); l_140 -= 1)
                    {
                        (*l_143) = (p_62 , (void*)0);
                        l_116 = (l_160 == &p_61);
                        return g_161;
                    }
                    if ((*p_61))
                        break;
                }
            }
            p_60 = (*p_61);
        }
        for (l_98 = 0; (l_98 <= 51); l_98 = safe_add_func_int32_t_s_s(l_98, 6))
        {
            int **l_164 = &g_119[1][3][8];
            int l_180[10][10][2] = {{{0L,0xF1E3D128L},{0xED1E9F69L,0x37C4823AL},{0xED1E9F69L,0xF1E3D128L},{0L,1L},{0xF1E3D128L,5L},{0L,4L},{(-7L),0x672E1157L},{0x672E1157L,0xED1E9F69L},{0xF259C87DL,(-1L)},{0x1E7EE258L,0x7D90806AL}},{{0x5414BF27L,(-1L)},{(-1L),0x4D5C3D96L},{0x7D90806AL,8L},{1L,0x9AA81E76L},{7L,0x7D8D9C53L},{0xD58AA3BBL,(-1L)},{0x37C4823AL,0x2B1258CBL},{0x8A3C79E3L,0x1E7EE258L},{0x9AA81E76L,1L},{0xC6E64710L,0xF259C87DL}},{{5L,0x40381DB1L},{(-1L),0xE0F32CBDL},{0x7D8D9C53L,0xE0F32CBDL},{(-1L),0x40381DB1L},{5L,0xF259C87DL},{0xC6E64710L,1L},{0x9AA81E76L,0x1E7EE258L},{0x8A3C79E3L,0x2B1258CBL},{0x37C4823AL,(-1L)},{7L,0x2B1258CBL}},{{1L,0xED1E9F69L},{0x499049CAL,0xD58AA3BBL},{0L,0x40381DB1L},{0x4D5C3D96L,0xC6E64710L},{0x37C4823AL,0L},{0x672E1157L,0x7D90806AL},{0x45A2E4B3L,0x1E7EE258L},{(-1L),(-1L)},{0x8A3C79E3L,0xE0F32CBDL},{0xB5483873L,(-7L)}},{{4L,0x499049CAL},{0xE7A2A0CFL,4L},{0x1E7EE258L,(-7L)},{0x1E7EE258L,4L},{0xE7A2A0CFL,0x499049CAL},{4L,(-7L)},{0xB5483873L,0xE0F32CBDL},{0x8A3C79E3L,(-1L)},{(-1L),0x1E7EE258L},{0x45A2E4B3L,0x7D90806AL}},{{0x672E1157L,0L},{0x37C4823AL,0xC6E64710L},{0x4D5C3D96L,0x40381DB1L},{0L,0xD58AA3BBL},{0x499049CAL,0xED1E9F69L},{1L,0x2B1258CBL},{7L,(-1L)},{(-7L),(-1L)},{1L,0x672E1157L},{0xED1E9F69L,(-3L)}},{{0x1CE971FEL,0x45A2E4B3L},{(-7L),0L},{0x9AA81E76L,0x7D8D9C53L},{0x2B1258CBL,0x7D8D9C53L},{0x9AA81E76L,0L},{(-7L),0x45A2E4B3L},{0x1CE971FEL,(-3L)},{0xED1E9F69L,0x672E1157L},{1L,(-1L)},{(-7L),(-1L)}},{{7L,0x2B1258CBL},{1L,0xED1E9F69L},{0x499049CAL,0xD58AA3BBL},{0L,0x40381DB1L},{0x4D5C3D96L,0xC6E64710L},{0x37C4823AL,0L},{0x45A2E4B3L,5L},{0L,0xF259C87DL},{0x5414BF27L,0x5414BF27L},{4L,(-3L)}},{{(-1L),0x1E7EE258L},{1L,0x7D8D9C53L},{8L,1L},{0xF259C87DL,0xF1E3D128L},{0xF259C87DL,1L},{8L,0x7D8D9C53L},{1L,0x1E7EE258L},{(-1L),(-3L)},{4L,0x5414BF27L},{0x5414BF27L,0xF259C87DL}},{{0L,5L},{0x45A2E4B3L,(-7L)},{0x28545625L,0x37C4823AL},{1L,0x499049CAL},{(-7L),(-1L)},{0x7D8D9C53L,0xB5483873L},{0x1CE971FEL,(-1L)},{0xC6E64710L,0x40381DB1L},{0xF1E3D128L,0x9AA81E76L},{0xE0F32CBDL,0x45A2E4B3L}}};
            const char l_188[8][8][4] = {{{1L,0L,0L,0xB0L},{0x16L,0x2FL,0xB9L,0L},{0L,0x4DL,0xB9L,(-8L)},{0x16L,(-1L),0L,3L},{1L,0x4DL,1L,0x2FL},{1L,0x2FL,0L,1L},{0x16L,0L,0xB9L,0x2FL},{0L,3L,0xB9L,3L}},{{0x16L,0x4AL,0L,(-8L)},{1L,3L,1L,0L},{1L,0L,0L,0xB0L},{0x16L,0x2FL,0xB9L,3L},{0xB9L,0L,0x16L,(-1L)},{1L,0xB0L,0xB9L,0x4AL},{0L,0L,0L,(-8L)},{0L,(-8L),0xB9L,0x4DL}},{{1L,3L,0x16L,(-8L)},{0xB9L,0x2FL,0x16L,0x4AL},{1L,1L,0xB9L,(-1L)},{0L,0x2FL,0L,3L},{0L,3L,0xB9L,3L},{1L,(-8L),0x16L,3L},{0xB9L,0L,0x16L,(-1L)},{1L,0xB0L,0xB9L,0x4AL}},{{0L,0L,0L,(-8L)},{0L,(-8L),0xB9L,0x4DL},{1L,3L,0x16L,(-8L)},{0xB9L,0x2FL,0x16L,0x4AL},{1L,1L,0xB9L,(-1L)},{0L,0x2FL,0L,3L},{0L,3L,0xB9L,3L},{1L,(-8L),0x16L,3L}},{{0xB9L,0L,0x16L,(-1L)},{1L,0xB0L,0xB9L,0x4AL},{0L,0L,0L,(-8L)},{0L,(-8L),0xB9L,3L},{0L,1L,0L,0xB0L},{1L,(-1L),0L,0x4DL},{0L,0L,1L,3L},{0xB9L,(-1L),0xB9L,1L}},{{0xB9L,1L,1L,(-8L)},{0L,0xB0L,0L,1L},{1L,0x4AL,0L,3L},{0L,0x2FL,1L,0x4DL},{0xB9L,0x4AL,0xB9L,0xB0L},{0xB9L,0xB0L,1L,3L},{0L,1L,0L,0xB0L},{1L,(-1L),0L,0x4DL}},{{0L,0L,1L,3L},{0xB9L,(-1L),0xB9L,1L},{0xB9L,1L,1L,(-8L)},{0L,0xB0L,0L,1L},{1L,0x4AL,0L,3L},{0L,0x2FL,1L,0x4DL},{0xB9L,0x4AL,0xB9L,0xB0L},{0xB9L,0xB0L,1L,3L}},{{0L,1L,0L,0xB0L},{1L,(-1L),0L,0x4DL},{0L,0L,1L,3L},{0xB9L,(-1L),0x16L,0x4DL},{0x16L,0x4DL,0L,(-1L)},{0xB9L,3L,0L,0x4DL},{0L,1L,0L,0x2FL},{0xB9L,(-8L),0L,0L}}};
            int *l_201 = &l_116;
            int **l_222 = &l_77;
            char l_294 = 1L;
            short l_306 = 0x4CF9L;
            int i, j, k;
        }
        return p_60;
    }
    else
    {
        int l_313 = 8L;
        short l_316 = 0L;
        if ((*l_77))
        {
            int l_311[2][4] = {{0x023DBF51L,0x023DBF51L,0x023DBF51L,0x023DBF51L},{0x023DBF51L,0x023DBF51L,0x023DBF51L,0x023DBF51L}};
            int i, j;
            for (g_91 = 0; (g_91 <= 7); g_91 += 1)
            {
                int *l_308[4][10][6] = {{{&l_148[0],&g_255,&l_148[0],(void*)0,&g_16[4],&g_16[1]},{&g_16[2],&l_148[0],&l_148[0],&g_255,&g_16[4],&l_148[0]},{&g_16[4],&g_255,&g_16[1],(void*)0,&g_16[1],&g_255},{(void*)0,&g_16[1],&g_255,&g_16[4],&l_148[0],&l_148[0]},{&g_255,&l_148[0],&l_148[0],&g_16[2],(void*)0,&l_148[0]},{(void*)0,&l_148[0],&g_255,&l_148[0],&l_148[0],&g_91},{&g_255,&g_16[1],&g_16[4],&g_16[4],&g_16[1],&g_255},{&l_148[0],&g_255,&g_16[2],&g_91,&g_16[4],&g_16[4]},{&l_148[0],&l_148[0],&g_255,&l_148[0],&g_16[4],&g_255},{&l_148[0],&g_255,&l_148[0],&g_91,&l_148[0],&g_16[4]}},{{&l_148[0],&g_16[4],(void*)0,&g_16[4],&l_148[0],&g_255},{&g_255,&g_16[2],&l_148[0],&g_16[4],&l_148[0],&g_255},{&l_148[0],&l_148[0],&g_16[2],(void*)0,&l_148[0],&g_255},{&g_16[1],&g_16[4],&g_255,&g_16[4],&l_148[0],&l_148[0]},{&l_148[0],&l_148[0],&l_148[0],&l_148[0],&g_16[1],(void*)0},{&g_16[4],&g_255,&g_16[4],&g_16[1],&g_255,&l_148[0]},{(void*)0,&g_16[2],&l_148[0],&l_148[0],&g_255,&g_16[4]},{&g_16[4],&g_255,(void*)0,&g_255,&g_16[1],&g_255},{&l_148[0],&l_148[0],&l_148[0],&g_91,&l_148[0],&g_255},{&g_255,&g_16[4],&l_148[0],&l_148[0],&l_148[0],&g_255}},{{&g_16[4],&l_148[0],&g_16[4],&l_148[0],&l_148[0],&g_91},{&g_255,(void*)0,&g_16[1],&g_91,&g_91,&g_16[1]},{&l_148[0],&l_148[0],&g_91,&g_255,&g_16[1],&g_16[4]},{&g_16[4],&l_148[0],&g_16[1],&l_148[0],(void*)0,&g_91},{(void*)0,&g_16[4],&g_16[1],&g_16[1],&l_148[0],&g_16[4]},{&g_16[4],&g_16[1],&g_91,&l_148[0],&g_91,&g_16[1]},{&l_148[0],&g_91,&g_16[1],&g_16[4],(void*)0,&g_91},{&g_16[1],&g_16[1],&g_16[4],&l_148[0],&g_91,&g_255},{&g_91,&g_255,&l_148[0],&g_91,&g_16[4],&g_16[2]},{&g_16[4],&g_255,&l_148[0],&l_148[0],&g_255,&g_16[4]}},{{&l_148[0],(void*)0,&l_148[0],&g_16[2],&l_148[0],&g_255},{(void*)0,&g_91,&g_16[1],&l_148[0],&g_255,&l_148[0]},{(void*)0,&l_148[0],&l_148[0],&g_16[2],&g_255,&g_255},{&l_148[0],&l_148[0],&g_91,&l_148[0],&l_148[0],&g_16[1]},{&g_16[4],&l_148[0],&g_255,&g_91,(void*)0,&l_148[0]},{&g_91,&g_16[1],&l_148[0],&l_148[0],&g_16[1],&l_148[0]},{(void*)0,&l_148[0],&g_255,&g_255,&g_16[1],&g_16[1]},{&g_16[1],&g_91,&g_91,&g_16[1],(void*)0,&g_255},{&g_255,&g_255,&l_148[0],(void*)0,&g_16[2],&l_148[0]},{&l_148[0],&l_148[0],&g_16[1],&g_91,&g_16[2],&g_255}}};
                int i, j, k;
                p_60 = (&g_276 != (void*)0);
                for (g_127 = 0; (g_127 <= 5); g_127 += 1)
                {
                    unsigned l_310[6] = {1UL,0x8FDC17C3L,0x8FDC17C3L,1UL,0x8FDC17C3L,0x8FDC17C3L};
                    int i;
                    (*g_276) = g_309;
                    p_60 |= 0x2C58376AL;
                    for (p_59 = 0; (p_59 <= 3); p_59 += 1)
                    {
                        int i;
                        l_310[3] = g_299[(p_59 + 4)];
                    }
                }
                l_311[1][0] ^= 0x0AED3F06L;
                for (g_307 = 0; (g_307 <= 7); g_307 += 1)
                {
                    for (l_76 = 0; (l_76 <= 5); l_76 += 1)
                    {
                        unsigned l_312 = 4294967291UL;
                        l_312 = (*p_61);
                        return g_91;
                    }
                    l_313 ^= (*p_61);
                }
            }
            l_313 = (((safe_sub_func_uint32_t_u_u(p_62, ((func_21(g_307, func_82(l_316), g_307, ((safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((g_307 < (p_59 && (&l_313 == &p_60))), 0x1BL)), p_59)) || 0xDFABL)) == g_16[7]) , g_93[1]))) , l_323) == &l_148[0]);
        }
        else
        {
            (*g_276) = &p_60;
        }
    }
    p_60 ^= ((*g_276) == &p_60);
    return (*l_323);
}







static char func_72(int p_73, int * p_74, const int * p_75)
{
    int l_92 = 0L;
    l_92 = (*p_75);
    return g_16[4];
}







static int * const func_82(short p_83)
{
    char l_84 = 0L;
    int *l_89 = &g_16[8];
    int *l_90 = &g_91;
    (*l_90) = ((p_83 || l_84) <= (!(((safe_lshift_func_uint8_t_u_u(func_21(g_16[4], &g_16[6], g_16[4], g_16[4]), (safe_mod_func_int8_t_s_s((((l_89 == (void*)0) , (-1L)) , p_83), 4UL)))) >= 1L) ^ g_2)));
    (*l_90) |= ((*l_89) ^ g_16[5]);
    return &g_16[4];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_16[i], "g_16[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_93[i], "g_93[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_299[i], "g_299[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_752, "g_752", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1005, "g_1005", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
