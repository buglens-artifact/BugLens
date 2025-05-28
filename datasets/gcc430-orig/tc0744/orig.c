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



static int g_6 = (-4L);
static int g_82 = 2L;
static const int * volatile * volatile g_85 = (void*)0;
static int *g_89 = &g_82;
static int * volatile *g_88 = &g_89;
static int g_94[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
static volatile int g_112 = 0xADD72F77L;
static volatile int g_113 = 0xFF1065C7L;
static int g_114 = 0x75621C9AL;
static volatile int g_115 = 0x85EFCBABL;
static int g_116 = 0x48D1DFF6L;
static int * volatile g_141 = &g_116;
static int **g_156 = &g_89;
static int *** volatile g_155[10][8] = {{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156},{(void*)0,&g_156,&g_156,(void*)0,(void*)0,(void*)0,&g_156,&g_156},{&g_156,(void*)0,&g_156,&g_156,(void*)0,&g_156,(void*)0,&g_156},{(void*)0,(void*)0,(void*)0,&g_156,&g_156,(void*)0,(void*)0,(void*)0},{&g_156,&g_156,&g_156,&g_156,&g_156,(void*)0,&g_156,(void*)0},{(void*)0,(void*)0,&g_156,(void*)0,&g_156,(void*)0,(void*)0,&g_156},{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156},{&g_156,&g_156,(void*)0,(void*)0,&g_156,&g_156,&g_156,(void*)0},{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156},{(void*)0,&g_156,(void*)0,&g_156,(void*)0,(void*)0,&g_156,(void*)0}};
static volatile unsigned g_158 = 0UL;
static int ** volatile g_174 = &g_89;
static const short g_207 = (-1L);
static int * volatile g_247 = &g_94[2];
static unsigned char g_263 = 1UL;
static unsigned g_406 = 4294967292UL;
static const int *g_416[1] = {&g_94[5]};
static const int ** volatile g_415 = &g_416[0];
static const int ** volatile g_521 = &g_416[0];
static int * volatile g_539 = &g_114;
static int *** const g_569 = &g_156;
static int * volatile g_595 = &g_82;
static unsigned g_702 = 8UL;
static int * volatile g_745 = &g_114;
static int ** volatile g_809 = &g_89;
static int * const *g_822[4] = {&g_89,&g_89,&g_89,&g_89};
static int * const ** volatile g_821 = &g_822[3];
static int ** volatile g_823 = &g_89;
static int ** volatile g_863 = &g_89;
static int * volatile g_904 = &g_116;
static const int ** volatile g_905 = (void*)0;
static const int ** volatile g_925 = &g_416[0];
static int *g_931[7][2][8] = {{{&g_6,&g_94[4],&g_94[2],&g_6,&g_94[4],&g_116,&g_6,&g_6},{&g_6,&g_94[7],(void*)0,&g_94[4],(void*)0,&g_94[2],&g_116,&g_6}},{{&g_6,&g_114,(void*)0,&g_94[2],(void*)0,&g_116,&g_94[2],&g_116},{&g_94[7],&g_94[2],&g_6,&g_94[2],&g_94[7],&g_94[4],&g_116,&g_114}},{{&g_6,&g_114,&g_94[2],&g_114,&g_82,&g_6,&g_94[2],&g_94[2]},{&g_114,&g_116,&g_94[2],&g_94[6],&g_94[4],&g_82,&g_116,&g_82}},{{&g_114,&g_114,&g_114,&g_94[4],&g_94[7],(void*)0,&g_94[6],&g_6},{&g_94[6],(void*)0,&g_6,&g_116,&g_6,&g_6,&g_116,&g_6}},{{(void*)0,(void*)0,&g_116,(void*)0,&g_6,(void*)0,&g_94[7],&g_116},{&g_6,&g_6,&g_94[2],&g_94[2],&g_6,&g_6,(void*)0,&g_116}},{{&g_6,&g_116,&g_82,(void*)0,&g_116,&g_114,&g_6,&g_6},{&g_6,&g_94[2],(void*)0,&g_116,&g_116,&g_94[6],(void*)0,&g_6}},{{&g_6,(void*)0,&g_6,&g_94[4],&g_6,(void*)0,&g_6,&g_82},{&g_94[2],&g_94[7],&g_94[4],&g_116,&g_114,&g_6,(void*)0,&g_94[6]}}};
static const int ** volatile g_955[2] = {&g_416[0],&g_416[0]};
static const int ** volatile g_956 = (void*)0;
static int * const g_980 = &g_94[2];
static unsigned char g_994 = 0x6EL;
static int g_1037 = (-1L);
static char g_1039 = 0x4AL;
static char g_1058 = 0xB5L;



static short func_1(void);
static unsigned short func_4(short p_5);
static int func_10(char p_11, unsigned char p_12, short p_13, unsigned p_14, const unsigned short p_15);
static unsigned short func_18(int p_19, unsigned p_20, unsigned char p_21);
static unsigned char func_26(unsigned p_27, unsigned p_28, unsigned short p_29, int p_30);
static char func_31(unsigned short p_32, int p_33, int p_34);
static unsigned char func_35(unsigned short p_36, unsigned p_37, unsigned p_38, unsigned p_39, short p_40);
static int func_48(unsigned short p_49);
static unsigned short func_52(unsigned char p_53, const unsigned char p_54, const int p_55, int p_56, const char p_57);
static const char func_58(unsigned char p_59, unsigned short p_60, unsigned short p_61, unsigned p_62);
static short func_1(void)
{
    unsigned char l_887 = 0xBDL;
    char l_888 = 0xD9L;
    const int * const l_889[8] = {&g_116,&g_116,&g_116,&g_116,&g_116,&g_116,&g_116,&g_116};
    unsigned short l_891[7][3];
    int ***l_917 = &g_156;
    const int *l_963 = &g_94[4];
    short l_1044 = 0x9E17L;
    int l_1048[1];
    short l_1108 = 4L;
    const int *l_1110 = &g_114;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
            l_891[i][j] = 0x1BDDL;
    }
    for (i = 0; i < 1; i++)
        l_1048[i] = 0x78CA429AL;
    if (((safe_mul_func_int16_t_s_s(0xADA4L, ((0x5AB3L | func_4(g_6)) == g_207))) || (safe_sub_func_int8_t_s_s(l_887, l_887))))
    {
        short l_890 = 0x796FL;
        const int *l_924[1];
        unsigned l_936 = 4294967287UL;
        const unsigned short l_978[2][5][6] = {{{0x6F64L,65532UL,65535UL,1UL,65527UL,0x36D0L},{65532UL,0UL,0x71E9L,0xD34BL,65527UL,65535UL},{65535UL,65532UL,1UL,0UL,65529UL,9UL},{0x04BFL,0x6F64L,0x0B7EL,65529UL,65532UL,65529UL},{1UL,65535UL,1UL,65534UL,6UL,65532UL}},{{1UL,0x71E9L,65532UL,1UL,0x9ED2L,65526UL},{65532UL,0UL,65527UL,1UL,65528UL,65534UL},{1UL,65535UL,0x6F64L,65534UL,0UL,0x36D0L},{1UL,0xD34BL,1UL,65529UL,65529UL,1UL},{65534UL,65534UL,7UL,0x71E9L,65532UL,0xD34BL}}};
        int l_979 = 0L;
        int ***l_982 = &g_156;
        unsigned l_1016 = 4294967288UL;
        int l_1073 = 0xDF657215L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_924[i] = &g_82;
        if (((0UL >= ((((l_888 , (*g_809)) == l_889[3]) != ((void*)0 != &g_88)) <= (((func_58((func_4(g_207) || (-8L)), l_890, l_890, g_114) >= g_207) , l_890) <= l_891[5][2]))) , 6L))
        {
            unsigned char l_894 = 0x5CL;
            int ***l_916 = (void*)0;
            const int *l_937 = &g_94[3];
            int l_938 = 0xB0EA1B0CL;
            int *l_951 = &g_114;
            char l_1003 = (-1L);
            if ((g_115 < ((func_58(g_6, g_94[2], (l_890 && ((g_82 > 6L) < func_10(g_702, (((g_207 & ((((safe_lshift_func_uint8_t_u_s((0x61D77495L <= 9UL), 7)) , g_94[2]) ^ 0x4F7BL) && g_702)) && 1L) || l_894), g_116, g_94[1], g_114))), l_894) , l_889[3]) != (*g_156))))
            {
                unsigned char l_899 = 247UL;
                const int **l_906 = &g_416[0];
                (*g_904) = func_26((safe_sub_func_uint32_t_u_u(g_207, (**g_521))), g_207, ((safe_sub_func_uint32_t_u_u(l_899, (((l_894 , l_890) , (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((l_894 && g_263), 0)), 0x7CL))) && l_890))) ^ 0x35L), l_894);
                (*l_906) = (*g_415);
            }
            else
            {
                unsigned l_907 = 0xE1619267L;
                int *l_921 = &g_94[2];
                const int l_945 = (-3L);
                unsigned l_964 = 4294967295UL;
                int ** const *l_985 = &g_156;
                if (func_26(g_82, (((-1L) & l_907) & (func_10(l_890, ((safe_mod_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_u(func_4((safe_lshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s(((0x56DBL | (l_916 != l_917)) < (~(((((safe_unary_minus_func_uint16_t_u((safe_add_func_uint16_t_u_u(((***l_917) ^ ((~(func_4((!g_406)) > g_702)) , 4294967290UL)), 0x0BA1L)))) >= 0UL) , 5L) >= l_890) < g_116))), 0xFC1BL)) , g_115), 6))), l_907)) & g_94[2]) > (***g_569)) && g_115), g_94[2])) , 0xF1L), g_406, g_114, l_907) & g_406)), l_890, l_890))
                {
                    (*g_156) = l_921;
                    return g_115;
                }
                else
                {
                    short l_941 = (-7L);
                    unsigned l_942 = 0x623C8E4DL;
                    unsigned l_946[3][4];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_946[i][j] = 4294967295UL;
                    }
                    for (l_887 = (-21); (l_887 < 41); l_887 = safe_add_func_int32_t_s_s(l_887, 1))
                    {
                        (*g_925) = l_924[0];
                    }
                    (*l_921) = ((void*)0 == (*g_821));
                    l_938 = func_26((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((g_116 & ((g_113 | 0x9D13L) || g_6)), 7)), (g_702 , ((safe_unary_minus_func_int16_t_s(((**g_569) != g_931[1][1][1]))) , (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((l_936 > ((g_406 , (*g_156)) == l_937)), 0x12L)), g_406)))))), g_82, g_94[5], g_94[6]);
                    (*l_921) = (((safe_mul_func_uint8_t_u_u(((func_58(l_941, func_10((((*l_937) & l_942) != (((g_82 & (safe_add_func_int8_t_s_s((((*g_569) == ((*g_247) , (*l_917))) || func_4(l_941)), g_263))) < g_406) != g_82)), (*l_937), g_94[2], g_94[2], l_945), g_6, g_114) , l_942) ^ g_702), (*l_937))) == g_94[2]) >= l_946[0][2]);
                }
                if ((~(safe_lshift_func_int16_t_s_s(0x5195L, (((safe_sub_func_int8_t_s_s((*l_937), ((*g_88) != l_951))) , (*l_951)) == 0xF0L)))))
                {
                    int *l_952[9] = {&l_938,&l_938,&l_938,&l_938,&l_938,&l_938,&l_938,&l_938,&l_938};
                    const int **l_958 = &g_416[0];
                    int i;
                    (*g_88) = (*g_88);
                    (**l_917) = l_952[5];
                    if ((safe_sub_func_uint8_t_u_u((g_94[0] , (*l_951)), ((**g_156) || (+(*l_951))))))
                    {
                        return (*l_921);
                    }
                    else
                    {
                        const int **l_957 = &l_937;
                        (*l_957) = &l_945;
                    }
                    (*l_958) = l_924[0];
                }
                else
                {
                    short l_961 = 1L;
                    (*g_88) = (*g_174);
                    for (g_702 = (-23); (g_702 <= 49); g_702++)
                    {
                        const int **l_962[5][3] = {{(void*)0,&g_416[0],(void*)0},{&l_937,&l_937,&l_937},{(void*)0,&g_416[0],(void*)0},{&l_937,&l_937,&l_937},{(void*)0,&g_416[0],(void*)0}};
                        int i, j;
                        (*l_921) = (-1L);
                        (*l_921) = (*g_904);
                        if (l_961)
                            continue;
                        l_963 = l_924[0];
                    }
                    if (l_964)
                    {
                        short l_975 = 6L;
                        (*l_921) = (((safe_sub_func_uint16_t_u_u(func_58(l_961, func_58((((func_26((safe_mul_func_int8_t_s_s((((*g_821) != (void*)0) | func_4((((safe_mod_func_uint32_t_u_u(g_263, (safe_mul_func_uint16_t_u_u(((0x80L <= ((safe_rshift_func_int16_t_s_s((l_975 , (safe_mul_func_int8_t_s_s((*l_963), (func_4(g_406) , g_82)))), g_207)) <= l_975)) , (*l_921)), l_978[1][1][0])))) , g_207) , g_114))), (*l_951))), g_116, (*l_921), g_82) && l_975) == g_406) | g_406), g_207, l_979, (*l_951)), g_207, g_6), g_406)) , (*l_951)) | 0x09463B27L);
                        return g_158;
                    }
                    else
                    {
                        const int **l_981 = &l_963;
                        unsigned char l_988 = 255UL;
                        (*g_174) = g_980;
                        (*l_981) = (*g_925);
                        if (g_207)
                            goto lbl_989;
lbl_989:
                        (**g_88) = ((l_982 != ((safe_lshift_func_int8_t_s_u(l_961, 0)) , ((0xC663L <= (((*l_937) | (-1L)) > (0x1AD58259L & 0xE65D50E8L))) , l_985))) ^ ((safe_mod_func_int32_t_s_s(0xDD9891E5L, g_114)) <= l_988));
                        return g_113;
                    }
                }
            }
            (*g_980) = (g_94[2] && g_263);
            if (((~((safe_mul_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((0x08L >= g_94[2]), (*l_951))) & 3UL), g_702)) || (l_917 != &g_156))) <= ((((*l_963) | ((((*l_951) , g_6) && (-1L)) && 255UL)) >= g_82) < 6UL)))
            {
                (*g_88) = (*g_156);
                (**l_982) = (void*)0;
            }
            else
            {
                int l_995 = 0L;
                int * const **l_1014 = &g_822[0];
                unsigned short l_1015 = 0x1C16L;
                (*l_951) = ((((g_702 && g_115) && g_994) , ((void*)0 != (*g_569))) != (l_995 | g_94[0]));
                (*g_980) = l_995;
                for (g_994 = 16; (g_994 > 31); g_994++)
                {
                    int *l_1000 = (void*)0;
                    unsigned l_1008[6][2][7] = {{{0x14A3E481L,4294967288UL,0x14A3E481L,0x14A3E481L,4294967288UL,0x14A3E481L,0x14A3E481L},{0UL,0x251C283EL,0x489425AEL,0x251C283EL,0UL,0UL,0UL}},{{4294967288UL,0x14A3E481L,0x14A3E481L,4294967288UL,0x14A3E481L,0x14A3E481L,4294967288UL},{4294967295UL,0x251C283EL,4294967295UL,0x8291E256L,0UL,0x8291E256L,4294967295UL}},{{4294967288UL,4294967288UL,0xD53F3F45L,4294967288UL,4294967288UL,0xD53F3F45L,4294967288UL},{0UL,0x8291E256L,4294967295UL,0x251C283EL,4294967295UL,0x8291E256L,0UL}},{{0x14A3E481L,4294967288UL,0x14A3E481L,0x14A3E481L,4294967288UL,0x14A3E481L,0x14A3E481L},{0UL,0x251C283EL,0x489425AEL,0x251C283EL,0UL,0UL,0UL}},{{4294967288UL,0x14A3E481L,0x14A3E481L,4294967288UL,0x14A3E481L,0x14A3E481L,4294967288UL},{4294967295UL,0x251C283EL,4294967295UL,0x8291E256L,0UL,0x8291E256L,4294967295UL}},{{4294967288UL,4294967288UL,0xD53F3F45L,4294967288UL,4294967288UL,0xD53F3F45L,4294967288UL},{0UL,0x8291E256L,4294967295UL,0x251C283EL,4294967295UL,0x8291E256L,0UL}}};
                    unsigned l_1011[10][3][2] = {{{0x2640804FL,4294967287UL},{4294967287UL,0xFC921B81L},{0UL,4294967289UL}},{{0xFC921B81L,4294967289UL},{0UL,0xFC921B81L},{4294967287UL,4294967287UL}},{{0x2640804FL,4294967295UL},{0UL,4294967295UL},{4294967295UL,4294967289UL}},{{0xE325FA5BL,4294967295UL},{4294967287UL,0x2640804FL},{4294967287UL,4294967295UL}},{{0xE325FA5BL,4294967289UL},{4294967295UL,4294967295UL},{0UL,4294967295UL}},{{0x2640804FL,4294967287UL},{4294967287UL,0xFC921B81L},{0UL,4294967289UL}},{{0xFC921B81L,4294967289UL},{0UL,0xFC921B81L},{4294967287UL,4294967287UL}},{{0x2640804FL,0x2640804FL},{0xFC921B81L,1UL},{0x2640804FL,0x230C8FB0L}},{{1UL,0x2640804FL},{4294967295UL,1UL},{4294967295UL,0x2640804FL}},{{1UL,0x230C8FB0L},{0x2640804FL,1UL},{0xFC921B81L,0x2640804FL}}};
                    char l_1012 = 1L;
                    int i, j, k;
                    (*g_980) = (+((l_1000 != (void*)0) || (((safe_mod_func_int32_t_s_s(l_1003, (((((((0x4E77L == g_94[2]) , (*l_963)) != (((safe_sub_func_int16_t_s_s(g_263, g_207)) >= 0x16L) >= 0UL)) >= g_263) >= l_995) | 0xF9A6L) || 0x49B8L))) >= 0x78L) <= (*l_951))));
                    for (g_702 = 0; (g_702 <= 2); g_702 += 1)
                    {
                        int i, j;
                        return l_891[(g_702 + 1)][g_702];
                    }
                    if ((safe_mod_func_uint16_t_u_u(g_114, l_1008[3][0][6])))
                    {
                        (*g_156) = (**l_982);
                    }
                    else
                    {
                        unsigned l_1013 = 0x4C899F96L;
                        (*l_951) = ((safe_mul_func_int8_t_s_s(((g_6 , (void*)0) == l_1014), l_1015)) , l_1016);
                        (*l_951) = 0x0215B70DL;
                        if ((**g_925))
                            break;
                    }
                }
            }
            for (l_890 = (-3); (l_890 > (-4)); l_890 = safe_sub_func_int8_t_s_s(l_890, 6))
            {
                (*l_951) = (g_207 & g_82);
                return g_94[2];
            }
        }
        else
        {
            int l_1031 = 0x825C3CA8L;
            int *l_1046 = (void*)0;
            unsigned char l_1089[6][6][7] = {{{1UL,0xF4L,0xFDL,0x82L,0x82L,0xFDL,0xF4L},{1UL,0xF4L,0xFDL,0x82L,0x82L,0xFDL,0xF4L},{1UL,0xF4L,0xFDL,0x82L,0x82L,0xFDL,0xF4L},{1UL,0xF4L,0xFDL,0x82L,0x82L,0xFDL,0xF4L},{1UL,0xF4L,0xFDL,0x82L,0x82L,0xFDL,0xF4L},{1UL,0xF4L,0xFDL,0x82L,0x82L,0xFDL,0xF4L}},{{1UL,0xF4L,0xFDL,0x82L,0x82L,0xFDL,0xF4L},{1UL,0xF4L,0xFDL,0x82L,0x82L,0xFDL,0xF4L},{1UL,0xF4L,0xFDL,0x82L,0x82L,0xFDL,0xF4L},{1UL,0xF4L,0xFDL,0x82L,0x82L,0xFDL,0xF4L},{1UL,0xF4L,0xFDL,0x82L,0x82L,0xFDL,0xF4L},{1UL,0xF4L,250UL,0xFDL,0xFDL,250UL,255UL}},{{0x82L,255UL,250UL,0xFDL,0xFDL,250UL,255UL},{0x82L,255UL,250UL,0xFDL,0xFDL,250UL,255UL},{0x82L,255UL,250UL,0xFDL,0xFDL,250UL,255UL},{0x82L,255UL,250UL,0xFDL,0xFDL,250UL,255UL},{0x82L,255UL,250UL,0xFDL,0xFDL,250UL,255UL},{0x82L,255UL,250UL,0xFDL,0xFDL,250UL,255UL}},{{0x82L,255UL,250UL,0xFDL,0xFDL,250UL,255UL},{0x82L,255UL,250UL,0xFDL,0xFDL,250UL,255UL},{0x82L,255UL,250UL,0xFDL,0xFDL,250UL,255UL},{0x82L,255UL,250UL,0xFDL,0xFDL,250UL,255UL},{0x82L,255UL,250UL,0xFDL,0xFDL,250UL,255UL},{0x82L,255UL,250UL,0xFDL,0xFDL,250UL,255UL}},{{0x82L,255UL,250UL,0xFDL,0xFDL,250UL,250UL},{0x75L,250UL,0x82L,1UL,1UL,0x82L,250UL},{0x75L,250UL,0x82L,1UL,1UL,0x82L,250UL},{0x75L,250UL,0x82L,1UL,1UL,0x82L,250UL},{0x75L,250UL,0x82L,1UL,1UL,0x82L,250UL},{0x75L,250UL,0x82L,1UL,1UL,0x82L,250UL}},{{0x75L,250UL,0x82L,1UL,1UL,0x82L,250UL},{0x75L,250UL,0x82L,1UL,1UL,0x82L,250UL},{0x75L,250UL,0x82L,1UL,1UL,0x82L,250UL},{0x75L,250UL,0x82L,1UL,1UL,0x82L,250UL},{0x75L,250UL,0x82L,1UL,1UL,0x82L,250UL},{0x75L,250UL,0x82L,1UL,1UL,0x82L,250UL}}};
            const int *l_1111 = &l_979;
            int i, j, k;
            for (g_114 = 0; (g_114 <= 2); g_114 += 1)
            {
                int l_1032 = 0x7C31253DL;
                unsigned char l_1045 = 252UL;
                int i;
            }
            if (l_1048[0])
            {
                short l_1054 = 0xC79EL;
                const int ** const l_1060[6] = {&g_416[0],&l_924[0],&g_416[0],&g_416[0],&l_924[0],&g_416[0]};
                unsigned short l_1086 = 1UL;
                int l_1097 = 1L;
                int i;
                for (g_6 = 3; (g_6 >= (-2)); g_6 = safe_sub_func_uint32_t_u_u(g_6, 3))
                {
                    unsigned short l_1051 = 0x90EBL;
                    short l_1059[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1059[i] = 0x8CFDL;
                    for (g_406 = 0; (g_406 <= 1); g_406 += 1)
                    {
                        if (l_1051)
                            break;
                    }
                }
                if (func_58((250UL != g_1039), g_116, ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(l_1073, (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((func_4(((safe_rshift_func_uint16_t_u_s(0UL, ((l_1060[0] != (func_10((g_114 , (safe_lshift_func_int16_t_s_s(g_994, (safe_sub_func_int32_t_s_s(func_52(g_1039, g_115, g_207, g_1039, g_6), 1L))))), g_263, g_994, g_702, g_702) , (void*)0)) < g_994))) , g_94[2])) , g_94[3]) < g_406), 4)), l_1086)), 0xD6C5L)))), 0x98L)), g_116)), 4)) , 0xBC5AL), g_114))
                {
                    const unsigned l_1096 = 0xE7DABDD1L;
                    int l_1098[6] = {0x6A1C525EL,0x6A1C525EL,0x6A1C525EL,0x6A1C525EL,0x6A1C525EL,0x6A1C525EL};
                    int *l_1103 = &l_1097;
                    int i;
                    if (((0x3834L > (g_94[5] >= ((((safe_lshift_func_int16_t_s_s((g_406 , (0UL || l_1089[0][3][1])), (0xA74DL > func_58(func_58((g_115 , (safe_mod_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((func_4((+(((safe_rshift_func_uint8_t_u_u(g_207, 5)) & func_58(((*g_89) || g_115), g_702, g_994, (***l_917))) & 0xB9910ED8L))) & g_6), 255UL)) <= l_1096), 1UL))), g_263, g_114, g_263), (*l_963), (*l_963), g_263)))) , g_406) , 1UL) < g_702))) & l_1097))
                    {
                        return l_1098[0];
                    }
                    else
                    {
                        l_1103 = ((~((***l_917) == (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(g_82, 0)), 4)))) , (*g_809));
                        (**g_88) = (**g_156);
                    }
                    for (l_890 = 0; (l_890 == 24); ++l_890)
                    {
                        (**l_917) = (*g_823);
                        (***l_917) = (*g_539);
                        if ((**g_415))
                            continue;
                    }
                    for (g_82 = 0; (g_82 >= 14); ++g_82)
                    {
                        l_1108 = ((void*)0 != (*g_569));
                    }
                }
                else
                {
lbl_1109:
                    (**l_982) = (*g_156);
                }
                if (l_936)
                    goto lbl_1109;
                (***l_982) = 0x0FFFD3BCL;
            }
            else
            {
                (**g_569) = (**l_917);
            }
            l_1111 = l_1110;
        }
    }
    else
    {
        return (*l_1110);
    }
    return g_702;
}







static unsigned short func_4(short p_5)
{
    int l_7[2];
    int l_533 = 0x1F25EC14L;
    int * const l_808 = &g_94[2];
    unsigned short l_862 = 6UL;
    int i;
    for (i = 0; i < 2; i++)
        l_7[i] = 3L;
    return p_5;
}







static int func_10(char p_11, unsigned char p_12, short p_13, unsigned p_14, const unsigned short p_15)
{
    return p_14;
}







static unsigned short func_18(int p_19, unsigned p_20, unsigned char p_21)
{
    unsigned l_534 = 4294967292UL;
    const int *l_546[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int l_556 = 0x8FA47114L;
    short l_678 = 0x17C6L;
    int * const *l_701 = (void*)0;
    int * const **l_700 = &l_701;
    short l_721 = 6L;
    unsigned short l_804 = 0x3100L;
    int *l_805[8][6] = {{&g_82,&l_556,&g_82,&l_556,&g_82,&l_556},{&g_116,&l_556,&g_116,&l_556,&g_116,&l_556},{&g_82,&l_556,&g_82,&l_556,&g_82,&l_556},{&g_116,&l_556,&g_116,&l_556,&g_116,&l_556},{&g_82,&l_556,&g_82,&l_556,&g_82,&l_556},{&g_116,&l_556,&g_116,&l_556,&g_116,&l_556},{&g_82,&l_556,&g_82,&l_556,&g_82,&l_556},{&g_116,&l_556,&g_116,&l_556,&g_116,&l_556}};
    int i, j;
lbl_608:
    if (((((!l_534) > l_534) & l_534) , ((-1L) > ((l_534 != (safe_mul_func_uint16_t_u_u(g_112, (safe_mul_func_uint16_t_u_u(p_21, l_534))))) , 65535UL))))
    {
        int l_551 = 0L;
        int *l_554 = &g_6;
        (*g_539) = (p_20 >= g_263);
        for (g_82 = 0; (g_82 <= 0); g_82 += 1)
        {
            int i;
            g_94[(g_82 + 8)] = (safe_mul_func_uint16_t_u_u(g_94[(g_82 + 8)], g_114));
            g_94[(g_82 + 8)] = (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_94[(g_82 + 8)], p_21)), g_116));
            l_546[0] = g_416[g_82];
            if ((*g_141))
                break;
        }
        (*g_156) = ((65527UL <= ((safe_add_func_uint16_t_u_u((p_19 | ((((&l_546[0] == (void*)0) | (l_551 || ((func_58(l_551, ((safe_mul_func_uint16_t_u_u((0L | func_31(func_31((l_551 , g_94[6]), p_20, p_19), p_21, p_21)), p_20)) != l_551), l_551, g_94[2]) != 1UL) >= 0xCE1FE26FL))) | p_19) ^ p_19)), g_116)) , l_551)) , l_554);
    }
    else
    {
        char l_555 = 7L;
        l_556 = l_555;
        return g_94[6];
    }
    for (g_263 = 0; (g_263 > 53); ++g_263)
    {
        unsigned l_563 = 8UL;
        int **l_634 = &g_89;
        unsigned l_669[9];
        const char l_670 = 0L;
        int l_685 = 6L;
        unsigned short l_699 = 0UL;
        unsigned char l_720 = 0x9FL;
        const int l_725 = 0x5E8C1646L;
        int l_758 = 0x79946640L;
        int *l_792 = &g_114;
        int i;
        for (i = 0; i < 9; i++)
            l_669[i] = 0x3F2AFD6AL;
        for (p_20 = 0; (p_20 >= 17); p_20++)
        {
            unsigned l_570 = 0xDE319464L;
            const int **l_579 = &g_416[0];
            unsigned l_592 = 4294967287UL;
            int **l_650[10][10][2] = {{{&g_89,(void*)0},{&g_89,&g_89},{(void*)0,&g_89},{&g_89,(void*)0},{&g_89,&g_89},{&g_89,(void*)0},{&g_89,&g_89},{&g_89,&g_89},{&g_89,(void*)0},{&g_89,(void*)0}},{{&g_89,&g_89},{&g_89,&g_89},{&g_89,(void*)0},{&g_89,&g_89},{&g_89,(void*)0},{&g_89,&g_89},{(void*)0,&g_89},{&g_89,(void*)0},{&g_89,(void*)0},{(void*)0,&g_89}},{{&g_89,&g_89},{&g_89,&g_89},{(void*)0,(void*)0},{&g_89,(void*)0},{&g_89,&g_89},{&g_89,&g_89},{(void*)0,&g_89},{&g_89,(void*)0},{&g_89,(void*)0},{&g_89,(void*)0}},{{&g_89,&g_89},{&g_89,&g_89},{&g_89,&g_89},{&g_89,&g_89},{&g_89,(void*)0},{&g_89,(void*)0},{&g_89,(void*)0},{&g_89,&g_89},{(void*)0,&g_89},{&g_89,&g_89}},{{&g_89,(void*)0},{&g_89,&g_89},{(void*)0,&g_89},{&g_89,(void*)0},{&g_89,&g_89},{(void*)0,&g_89},{&g_89,(void*)0},{&g_89,&g_89},{&g_89,&g_89},{(void*)0,&g_89}},{{&g_89,(void*)0},{&g_89,(void*)0},{&g_89,(void*)0},{&g_89,&g_89},{&g_89,&g_89},{&g_89,&g_89},{&g_89,&g_89},{&g_89,(void*)0},{&g_89,(void*)0},{&g_89,(void*)0}},{{&g_89,&g_89},{(void*)0,&g_89},{&g_89,&g_89},{&g_89,(void*)0},{&g_89,&g_89},{(void*)0,&g_89},{&g_89,(void*)0},{&g_89,&g_89},{(void*)0,&g_89},{&g_89,(void*)0}},{{&g_89,(void*)0},{&g_89,&g_89},{&g_89,&g_89},{&g_89,&g_89},{&g_89,&g_89},{&g_89,(void*)0},{&g_89,(void*)0},{&g_89,&g_89},{&g_89,&g_89},{&g_89,(void*)0}},{{&g_89,(void*)0},{&g_89,&g_89},{&g_89,&g_89},{&g_89,&g_89},{&g_89,&g_89},{&g_89,(void*)0},{&g_89,(void*)0},{&g_89,&g_89},{(void*)0,(void*)0},{(void*)0,&g_89}},{{(void*)0,(void*)0},{(void*)0,&g_89},{&g_89,(void*)0},{&g_89,(void*)0},{&g_89,&g_89},{&g_89,&g_89},{&g_89,&g_89},{&g_89,&g_89},{&g_89,(void*)0},{&g_89,(void*)0}}};
            int ** const *l_653 = &l_650[4][9][1];
            int i, j, k;
            for (g_116 = 29; (g_116 == (-8)); g_116--)
            {
                int *l_564 = &g_94[2];
                (*l_564) = l_563;
                for (p_19 = 0; (p_19 < (-11)); p_19--)
                {
                    l_570 = (p_19 <= (g_569 != (void*)0));
                }
            }
            (*l_579) = (((((((l_570 != (safe_mul_func_int8_t_s_s((+l_570), 0x8CL))) > (safe_mod_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(g_82, (safe_add_func_uint32_t_u_u(l_563, g_94[2])))) , ((*g_569) != (void*)0)), p_21))) && 1L) <= p_19) || 1UL) != 0UL) , (*g_521));
        }
        (*g_156) = &p_19;
        (*g_156) = (void*)0;
        if (l_669[4])
        {
            unsigned l_703 = 4294967295UL;
            int *l_752 = &g_94[3];
            int *l_762 = &l_556;
            if ((safe_mod_func_int16_t_s_s((0xDDA089ADL ^ (g_114 , (safe_sub_func_uint32_t_u_u(((p_21 != (safe_add_func_uint8_t_u_u((l_699 , 255UL), g_114))) >= func_26((l_700 != &l_634), (0x63A8L && p_21), p_19, g_702)), p_21)))), l_703)))
            {
                unsigned l_722 = 0x1B473BD3L;
                for (l_678 = 0; (l_678 == (-29)); --l_678)
                {
                    char l_726 = 0L;
                    int *l_742 = &g_82;
                    p_19 = ((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0x8BL, g_113)), ((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(func_58(((((safe_mul_func_uint16_t_u_u((((void*)0 != &p_19) , 0UL), ((safe_rshift_func_uint8_t_u_u(g_263, l_563)) ^ g_114))) , (void*)0) != (void*)0) <= 0L), g_82, l_720, l_721), 0xD6D785EBL)), p_21)), 65535UL)) || p_20))) && p_19);
                    if (func_26((((l_722 & (safe_sub_func_uint16_t_u_u(0x698DL, l_725))) > (((p_19 > l_726) > ((safe_add_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(p_21, p_21)) >= 0x3F59E911L), p_19)) <= p_21)) , g_112)) >= 0xCFA0L), p_20, p_21, g_702))
                    {
                        return p_20;
                    }
                    else
                    {
                        unsigned l_741[7] = {0x96024B26L,0xFC39B966L,0x96024B26L,0x96024B26L,0xFC39B966L,0x96024B26L,0x96024B26L};
                        int i;
                        l_741[0] = (safe_add_func_int8_t_s_s(g_82, p_20));
                        p_19 = p_20;
                        (*g_88) = l_742;
                    }
                    (*g_156) = &p_19;
                }
                (*g_745) = (safe_add_func_uint16_t_u_u(2UL, 0L));
            }
            else
            {
                for (g_114 = (-4); (g_114 <= 11); g_114++)
                {
                    int *l_749 = &l_556;
                    if (g_207)
                        goto lbl_608;
                    for (p_19 = 1; (p_19 <= 6); p_19 += 1)
                    {
                        unsigned l_748[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_748[i] = 0xA8477354L;
                        l_748[0] = (g_112 , 0xA521B65DL);
                        if (p_20)
                            continue;
                        l_546[p_19] = l_749;
                        if ((*g_745))
                            continue;
                    }
                    p_19 = p_21;
                }
            }
            for (l_720 = (-19); (l_720 == 47); l_720++)
            {
                (**g_569) = (void*)0;
            }
            l_752 = &p_19;
            for (l_534 = 0; (l_534 >= 44); ++l_534)
            {
                char l_755[9][8][3] = {{{0L,0L,0xEDL},{0L,0L,0x4BL},{0x2FL,5L,7L},{1L,1L,0x5CL},{5L,0L,0x7FL},{0xA7L,1L,0x5CL},{0x1CL,0x86L,7L},{5L,1L,0x4BL}},{{0xA7L,0L,0xEDL},{5L,(-5L),0xCEL},{0x5DL,0x63L,0x12L},{0x10L,(-7L),0L},{0xABL,(-1L),1L},{5L,0x24L,0x5BL},{0xF7L,0xD0L,1L},{0xD0L,(-1L),(-4L)}},{{0xA4L,0x5DL,1L},{0L,0x00L,0x5BL},{9L,0xC0L,1L},{0xA4L,0xECL,0L},{0xD2L,0x6FL,0x12L},{(-7L),0x97L,0x12L},{5L,0x5DL,0L},{(-1L),0xABL,1L}},{{0x60L,0xD2L,0x5BL},{0x5DL,0x24L,1L},{0xD2L,0xABL,(-4L)},{0x51L,0xF7L,1L},{1L,0x63L,0x5BL},{0L,0x6FL,1L},{0x51L,0L,0L},{0x24L,0x1EL,0x12L}},{{0xF7L,0x00L,0x12L},{0x60L,0xF7L,0L},{0x50L,0x50L,1L},{0x10L,0xD0L,0x5BL},{(-7L),0xD2L,1L},{0x24L,0x50L,(-4L)},{0x3EL,(-7L),1L},{9L,0x97L,0x5BL}},{{1L,0x1EL,1L},{0x3EL,0xDEL,1L},{0x5DL,(-2L),0xE3L},{0x97L,0x3EL,0xE3L},{0x6FL,0x63L,1L},{0xECL,0xDEL,0L},{0xC0L,0xF7L,(-3L)},{0x00L,0x5DL,5L}},{{0x5DL,0xDEL,0x71L},{(-1L),0x97L,5L},{0xD0L,0xA4L,(-3L)},{0x24L,(-2L),0L},{(-1L),0x10L,1L},{(-7L),(-8L),0xE3L},{0x63L,0x51L,0xE3L},{0xC0L,0x97L,1L}},{{0xDEL,0xECL,0L},{0x1EL,(-7L),(-3L)},{0x97L,0xF7L,5L},{(-7L),0xECL,0x71L},{0x50L,0x00L,5L},{0xD2L,0x3EL,(-3L)},{0xD0L,(-8L),0L},{0x50L,0x60L,1L}},{{0xF7L,0xD6L,0xE3L},{0x00L,0xA4L,0xE3L},{0x1EL,0x00L,1L},{0L,0L,0L},{0x6FL,0x5DL,(-3L)},{0x63L,(-7L),5L},{0xF7L,0L,0x71L},{0xABL,0x63L,5L}}};
                int **l_761[10][9] = {{&g_89,&l_752,&g_89,&g_89,&l_752,&g_89,(void*)0,&g_89,&l_752},{&g_89,&g_89,&l_752,&g_89,&g_89,&l_752,&l_752,&l_752,&g_89},{&g_89,(void*)0,(void*)0,&g_89,&l_752,&g_89,(void*)0,&g_89,&l_752},{(void*)0,&l_752,(void*)0,&l_752,&l_752,&l_752,&l_752,&l_752,(void*)0},{&l_752,&l_752,&g_89,(void*)0,&l_752,&g_89,&g_89,(void*)0,&g_89},{&g_89,&g_89,&l_752,&l_752,&g_89,&l_752,&l_752,&g_89,&g_89},{&l_752,&g_89,&g_89,&g_89,&l_752,(void*)0,(void*)0,&g_89,&g_89},{&l_752,&g_89,(void*)0,&g_89,(void*)0,&g_89,&l_752,&g_89,&l_752},{&l_752,&l_752,(void*)0,&g_89,&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&l_752,&l_752,&l_752,&g_89,&g_89,&l_752,&g_89,&g_89}};
                int i, j, k;
                (*l_752) = (g_702 , (l_755[0][0][0] > (((((((safe_rshift_func_int16_t_s_u(0x1E53L, 13)) >= (l_758 | ((safe_mul_func_int16_t_s_s(g_82, p_19)) > p_19))) & ((**g_569) == (*l_634))) < 0UL) , l_761[5][4]) != l_634) >= g_94[2])));
                (**g_569) = l_762;
            }
        }
        else
        {
            int l_763 = 0x38C1BDFEL;
            const int *l_764 = &g_114;
            short l_775 = 0x595AL;
            int *l_779 = &l_763;
            int ***l_793 = &l_634;
            if (l_763)
            {
                int **l_769[3][4][5] = {{{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89}},{{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89}},{{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89}}};
                const unsigned l_774 = 4294967293UL;
                int i, j, k;
                l_764 = (*g_521);
                (*g_88) = (*g_88);
                p_19 = ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((g_112 && p_20) , p_19), 6)), l_775)) || 0xABL);
            }
            else
            {
                unsigned l_776 = 1UL;
                (*g_595) = (**g_415);
                return l_776;
            }
            for (p_21 = 2; (p_21 > 25); p_21++)
            {
                const int **l_780 = &l_764;
                l_779 = (*l_634);
                (*l_780) = (*g_415);
            }
            for (l_720 = 24; (l_720 <= 46); l_720 = safe_add_func_int8_t_s_s(l_720, 5))
            {
                int ***l_783 = &g_156;
                int *l_784 = &l_556;
                (*l_784) = (&l_634 != l_783);
            }
            l_763 = ((safe_unary_minus_func_uint32_t_u((((0x87D98E64L & (*g_141)) & (safe_add_func_int32_t_s_s((-7L), (((safe_rshift_func_int8_t_s_s(((void*)0 == (*l_634)), ((*l_764) >= (safe_lshift_func_int8_t_s_s((g_82 , (l_792 == (void*)0)), (*l_764)))))) , l_793) != (void*)0)))) == (-1L)))) != p_19);
        }
    }
    p_19 = (((func_58((func_26(g_115, g_94[1], ((safe_lshift_func_int8_t_s_u(func_58((((((p_21 != (safe_add_func_int32_t_s_s(func_58(((g_82 , ((safe_add_func_uint8_t_u_u(248UL, (safe_rshift_func_int8_t_s_u(p_19, (((safe_add_func_uint32_t_u_u(((((g_116 && (((void*)0 != &l_701) || p_21)) < 0xFCL) & 0x9C56E0AEL) < 0xEAL), p_20)) , p_20) >= g_114))))) >= 65535UL)) , g_406), g_116, g_114, g_263), g_6))) > g_6) > 0xB3L) == 0UL) & p_19), l_804, p_19, g_114), p_21)) <= 0xA131E439L), g_94[3]) | g_406), p_21, p_20, g_114) , g_94[6]) || g_114) | g_116);
    (*g_88) = l_805[0][1];
    return g_263;
}







static unsigned char func_26(unsigned p_27, unsigned p_28, unsigned short p_29, int p_30)
{
    int ** const l_524 = &g_89;
    unsigned l_532 = 0xCF4C5A29L;
    (*g_521) = (*g_415);
    if ((0xC02F9299L && (**g_521)))
    {
        (*g_156) = (void*)0;
    }
    else
    {
        int *l_531[3][5] = {{&g_94[0],(void*)0,&g_94[6],(void*)0,&g_94[0]},{&g_94[0],(void*)0,&g_94[6],(void*)0,&g_94[0]},{&g_94[0],(void*)0,&g_94[6],(void*)0,&g_94[0]}};
        int i, j;
        for (p_30 = (-15); (p_30 != 29); p_30++)
        {
            int ***l_525 = &g_156;
            int *l_526 = &g_94[7];
            (*l_525) = (p_27 , l_524);
            (*g_88) = l_526;
            (*g_89) = (((safe_mul_func_int16_t_s_s(g_158, (safe_mod_func_int16_t_s_s(((!(g_114 | ((func_58(((((***l_525) , 0x7329E1C7L) == ((*l_524) == (void*)0)) >= ((func_58((((((*l_524) == l_531[2][2]) && p_29) && p_28) && (***l_525)), g_116, l_532, p_28) , (*g_156)) != (**l_525))), g_116, g_207, p_29) & 0xB2A9L) , 0x5B62A287L))) ^ (-1L)), p_30)))) , (void*)0) != &l_531[2][2]);
            return g_115;
        }
        (*g_88) = (p_29 , l_531[2][4]);
    }
    return p_30;
}







static char func_31(unsigned short p_32, int p_33, int p_34)
{
    unsigned l_267[4][5][1] = {{{0x74EE3F9EL},{0x16D66131L},{4294967295UL},{0x16D66131L},{0x74EE3F9EL}},{{4294967295UL},{0xB53C18DBL},{0xB53C18DBL},{4294967295UL},{0x74EE3F9EL}},{{0x16D66131L},{4294967295UL},{0x16D66131L},{0x74EE3F9EL},{4294967295UL}},{{0xB53C18DBL},{0xB53C18DBL},{4294967295UL},{0x74EE3F9EL},{0x16D66131L}}};
    int l_278 = 2L;
    unsigned l_280 = 0x317F4E93L;
    int ***l_291 = &g_156;
    short l_308[7] = {0x0A46L,0x0A46L,0x0A46L,0x0A46L,0x0A46L,0x0A46L,0x0A46L};
    int * volatile l_335 = &g_82;
    unsigned short l_410 = 0xA0E5L;
    unsigned short l_518 = 2UL;
    int i, j, k;
lbl_443:
    if (l_267[3][3][0])
    {
        unsigned l_270 = 1UL;
        const int *l_296 = &g_6;
        const int ** const l_295[8] = {&l_296,&l_296,&l_296,&l_296,&l_296,&l_296,&l_296,&l_296};
        int i;
        (*g_156) = &p_33;
        for (g_114 = 5; (g_114 > (-11)); --g_114)
        {
            unsigned l_273[3];
            int **l_294[8] = {&g_89,&g_89,&g_89,&g_89,&g_89,&g_89,&g_89,&g_89};
            int *l_320[9][7] = {{&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82},{(void*)0,&g_114,(void*)0,&g_114,(void*)0,&g_114,(void*)0},{&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82},{(void*)0,&g_114,(void*)0,&g_114,(void*)0,&g_114,(void*)0},{&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82},{(void*)0,&g_114,(void*)0,&g_114,(void*)0,&g_114,(void*)0},{&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82},{(void*)0,&g_114,(void*)0,&g_114,(void*)0,&g_114,(void*)0},{&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82}};
            short l_363 = 0x6E64L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_273[i] = 0xD2FC28A9L;
        }
        (**l_291) = (void*)0;
        (*g_88) = (**l_291);
    }
    else
    {
        unsigned short l_401[9][10][2] = {{{65533UL,0UL},{0x3C98L,0UL},{0x09ACL,0UL},{4UL,0x3C98L},{0xECA4L,0xC753L},{0xADF3L,0x5CB0L},{1UL,1UL},{0x8D19L,2UL},{0x3378L,0x4BD2L},{1UL,0UL}},{{0x156FL,2UL},{0xECA4L,0x8D19L},{0xECA4L,2UL},{0x156FL,0UL},{2UL,0x3043L},{4UL,0x8E6EL},{65526UL,0UL},{0UL,0xECA4L},{0xB79AL,0x3C98L},{1UL,0x12BEL}},{{0x2D63L,0x7BFDL},{0UL,0x5221L},{0x12BEL,0x579DL},{0UL,0x5CB0L},{0x7D46L,65527UL},{1UL,1UL},{0x8D19L,7UL},{65533UL,1UL},{0x5CB0L,0xA6DCL},{0UL,0xB79AL}},{{0x3043L,0x3378L},{0x69A6L,0x6F24L},{65527UL,0x6F24L},{0x69A6L,0x3378L},{0x3043L,0xB79AL},{0UL,0xA6DCL},{0x5CB0L,1UL},{65533UL,7UL},{0x8D19L,1UL},{1UL,65527UL}},{{0x7D46L,0x5CB0L},{0UL,0x579DL},{0x12BEL,0x5221L},{0UL,0x7BFDL},{0x2D63L,0x12BEL},{1UL,0x3C98L},{0xB79AL,0xECA4L},{0UL,0UL},{65526UL,0x8E6EL},{4UL,0x3043L}},{{2UL,0UL},{0x156FL,2UL},{0xECA4L,0x8D19L},{0xECA4L,2UL},{0x156FL,0UL},{2UL,0x3043L},{4UL,0x8E6EL},{65526UL,4UL},{4UL,0xADF3L},{0x12BEL,0x4BD2L}},{{0xB79AL,0x3043L},{0x1245L,0x2D63L},{65533UL,0UL},{0x3043L,0UL},{0x6F24L,4UL},{0UL,1UL},{0x7BFDL,0x5221L},{1UL,0x69A6L},{0x8E6EL,0xB79AL},{4UL,0x09ACL}},{{0x8D19L,0x12BEL},{0xECA4L,0x5128L},{0x3378L,0UL},{1UL,0UL},{0x3378L,0x5128L},{0xECA4L,0x12BEL},{0x8D19L,0x09ACL},{4UL,0xB79AL},{0x8E6EL,0x69A6L},{1UL,0x5221L}},{{0x7BFDL,1UL},{0UL,4UL},{0x6F24L,0UL},{0x3043L,0UL},{65533UL,0x2D63L},{0x1245L,0x3043L},{0xB79AL,0x4BD2L},{0x12BEL,0xADF3L},{4UL,4UL},{2UL,0xA6DCL}}};
        int **l_402 = (void*)0;
        int i, j, k;
        for (g_113 = 0; g_113 < 10; g_113 += 1)
        {
            for (g_114 = 0; g_114 < 8; g_114 += 1)
            {
                g_155[g_113][g_114] = (void*)0;
            }
        }
        if ((*l_335))
        {
            (*g_156) = &p_34;
            for (g_263 = 0; (g_263 == 49); g_263 = safe_add_func_uint8_t_u_u(g_263, 8))
            {
                (*l_335) = l_401[8][8][0];
            }
            (*g_88) = &p_34;
            (*l_335) = ((65535UL < ((l_402 != (g_6 , l_402)) && 0xCD75C92EL)) , p_32);
        }
        else
        {
            (*l_335) = (safe_sub_func_uint8_t_u_u(g_6, g_112));
            if (g_6)
                goto lbl_405;
lbl_405:
            (*g_156) = &p_33;
            (**g_88) = 0x6335F981L;
        }
    }
    if ((*l_335))
    {
        short l_409[4];
        const int *l_414[10] = {&g_94[8],&g_94[2],&g_94[2],&g_94[8],&g_82,&g_94[8],&g_94[2],&g_94[2],&g_94[8],&g_82};
        int l_442 = 0x35E9DDB8L;
        int l_448[9];
        short l_486 = (-7L);
        int i;
        for (i = 0; i < 4; i++)
            l_409[i] = 0x42A4L;
        for (i = 0; i < 9; i++)
            l_448[i] = 0xE551F967L;
        if ((g_406 > (safe_mul_func_int16_t_s_s(p_32, (-9L)))))
        {
            unsigned l_413 = 4294967295UL;
            (*l_335) = p_34;
        }
        else
        {
            int *l_457 = (void*)0;
            int *** const l_462[9][9] = {{(void*)0,(void*)0,&g_156,(void*)0,(void*)0,&g_156,(void*)0,(void*)0,&g_156},{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156},{&g_156,&g_156,(void*)0,(void*)0,(void*)0,&g_156,(void*)0,&g_156,&g_156},{&g_156,&g_156,&g_156,&g_156,(void*)0,(void*)0,&g_156,&g_156,&g_156},{(void*)0,&g_156,&g_156,&g_156,&g_156,&g_156,(void*)0,(void*)0,&g_156},{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156},{(void*)0,&g_156,&g_156,(void*)0,&g_156,(void*)0,&g_156,&g_156,(void*)0},{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,(void*)0,&g_156,&g_156},{&g_156,(void*)0,(void*)0,&g_156,(void*)0,&g_156,&g_156,&g_156,&g_156}};
            int *l_474 = &l_442;
            int **l_517[2][10] = {{&l_457,&l_474,(void*)0,&l_474,&l_457,&l_474,&l_474,&l_457,&l_474,(void*)0},{&l_457,&l_457,(void*)0,&l_457,&g_89,&l_457,(void*)0,&l_457,&l_457,(void*)0}};
            int i, j;
lbl_502:
            for (g_263 = 0; (g_263 < 3); ++g_263)
            {
                int ***l_456 = (void*)0;
                char l_468 = 0x58L;
                (*g_88) = ((&g_174 != l_456) , l_457);
                for (p_34 = 0; (p_34 != 25); p_34 = safe_add_func_uint16_t_u_u(p_34, 5))
                {
                    char l_467 = 0xBCL;
                    char l_473 = 1L;
                    p_33 = (safe_mod_func_uint32_t_u_u(func_58((!(0UL < ((void*)0 == &l_414[8]))), (g_113 , (l_456 == l_462[6][8])), func_58((((safe_mul_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(func_58(g_94[0], func_58(p_34, p_33, g_207, l_467), l_467, p_32), p_34)) <= p_34) , p_32), l_468)) , 0L) >= p_33), p_34, p_32, p_32), p_34), p_33));
                    (*g_88) = ((g_82 || (((0x57AE0B87L > (0x79697BE9L & (safe_sub_func_uint16_t_u_u(p_32, (*l_335))))) , (~(safe_rshift_func_int16_t_s_u(p_33, 5)))) , (7L || l_473))) , l_474);
                }
                for (g_406 = 0; (g_406 <= 7); g_406 += 1)
                {
                    unsigned char l_481 = 255UL;
                    p_34 = (safe_mod_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(g_207, ((safe_lshift_func_int8_t_s_u((0xFF487429L & (p_34 || 255UL)), l_481)) , 0xDAL))) || g_6), g_207));
                    if ((safe_rshift_func_uint8_t_u_s(((p_33 , (safe_mod_func_uint32_t_u_u(func_58(l_481, (((g_263 == 0x2EFDL) , (safe_lshift_func_uint16_t_u_u(g_113, 4))) > (func_58((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(p_33)), (safe_rshift_func_int8_t_s_s(0x1DL, g_263)))), p_33)), g_82, g_207, g_263) || l_481)), g_114, g_114), p_34))) , l_481), p_33)))
                    {
                        return p_33;
                    }
                    else
                    {
                        (*l_474) = p_34;
                        if (p_34)
                            continue;
                    }
                }
            }
            for (p_33 = 0; (p_33 < 14); ++p_33)
            {
                unsigned l_498 = 0x20FEF92FL;
                int *** const l_499 = &g_156;
                int *l_505 = (void*)0;
                (*l_335) = p_34;
                for (g_114 = 20; (g_114 < 24); g_114 = safe_add_func_uint32_t_u_u(g_114, 8))
                {
                    int **l_506 = &l_457;
                    int l_507 = 0x71E435FCL;
                    for (l_442 = 0; (l_442 >= 0); l_442 -= 1)
                    {
                        int i, j, k;
                        if (g_406)
                            goto lbl_502;
                        (*l_335) = l_267[l_442][(l_442 + 2)][l_442];
                        return g_158;
                    }
                    if (((p_33 | ((*l_499) == ((!(&p_34 != l_505)) , l_506))) || l_507))
                    {
                        (*l_506) = &p_34;
                        if (g_82)
                            goto lbl_443;
                    }
                    else
                    {
                        char l_510 = 0x30L;
                        (*l_506) = (p_34 , &p_33);
                        (*l_335) = (((((safe_mod_func_int16_t_s_s(func_58(p_33, ((**l_506) , p_33), l_510, p_33), g_112)) | 1UL) , 0xC57D891EL) , p_33) <= p_33);
                    }
                    (*g_88) = &p_33;
                }
                (*l_474) = (safe_sub_func_uint16_t_u_u(g_113, (&l_414[9] != ((((safe_mul_func_int16_t_s_s(0x48FFL, g_6)) ^ (safe_mul_func_uint16_t_u_u(p_33, ((-1L) & p_34)))) , func_58((*l_474), func_58(g_94[2], g_406, g_207, g_116), g_94[5], g_6)) , (void*)0))));
                (**l_499) = ((0x8BL >= ((void*)0 != l_517[0][6])) , (void*)0);
            }
        }
        l_442 = (l_518 || 0x7DE78668L);
        (*g_88) = &p_34;
        (**g_88) = (safe_add_func_uint16_t_u_u((+0xA3E3L), p_33));
    }
    else
    {
        (*g_88) = (**l_291);
    }
    (*l_335) = (-1L);
    (*g_156) = (*g_156);
    return p_34;
}







static unsigned char func_35(unsigned short p_36, unsigned p_37, unsigned p_38, unsigned p_39, short p_40)
{
    const unsigned short l_75[2] = {0UL,0UL};
    unsigned l_80 = 9UL;
    unsigned char l_258 = 0x4FL;
    const unsigned short l_264[8][4][3] = {{{65533UL,0x5206L,0xED9AL},{65533UL,1UL,1UL},{0xDB90L,0xDEA7L,1UL},{0xDEA7L,0xDEA7L,3UL}},{{0x23C6L,1UL,0x5206L},{0xF4DCL,0x71D9L,3UL},{7UL,0x442AL,1UL},{1UL,0xF4DCL,3UL}},{{7UL,0xFBDCL,0x5206L},{0xDEA7L,7UL,65533UL},{0xA435L,7UL,7UL},{0xA435L,65533UL,7UL}},{{0xDEA7L,0x5206L,0xFBDCL},{7UL,3UL,0xF4DCL},{1UL,1UL,0x442AL},{7UL,3UL,0x71D9L}},{{0xF4DCL,0x5206L,1UL},{0x23C6L,65533UL,65533UL},{65533UL,7UL,65533UL},{0x88C0L,7UL,1UL}},{{1UL,0xFBDCL,0x71D9L},{0xDB90L,0xF4DCL,0x442AL},{0xFBDCL,0x442AL,0xF4DCL},{0xDB90L,0x71D9L,0xFBDCL}},{{1UL,1UL,7UL},{0x88C0L,65533UL,7UL},{65533UL,65533UL,65533UL},{0x23C6L,1UL,0x5206L}},{{0xF4DCL,0x71D9L,3UL},{7UL,0x442AL,1UL},{1UL,0xF4DCL,3UL},{7UL,0xFBDCL,0x5206L}}};
    const int l_265 = 0L;
    int l_266 = (-2L);
    int i, j, k;
    (*g_247) = func_48(((safe_lshift_func_uint16_t_u_u(func_52(g_6, p_40, (func_58((((((safe_sub_func_uint16_t_u_u(65533UL, (safe_sub_func_uint16_t_u_u((p_39 != (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(1UL, p_37)), 5))), ((safe_sub_func_uint8_t_u_u(((((((safe_add_func_uint8_t_u_u((p_36 , l_75[0]), (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((g_6 , p_38), l_75[0])), 1L)))) | g_6) >= p_40) < l_75[0]) | g_6) <= g_6), l_75[0])) >= l_80))))) , p_40) == p_36) >= 0x3037L) ^ g_6), l_75[0], g_6, g_6) < 255UL), g_6, p_40), 3)) >= p_38));
    l_266 = (p_39 >= (safe_add_func_int16_t_s_s(p_38, l_75[0])));
    return p_40;
}







static int func_48(unsigned short p_49)
{
    int l_140[5] = {0xE2B5FF26L,0xE2B5FF26L,0xE2B5FF26L,0xE2B5FF26L,0xE2B5FF26L};
    int *l_159 = &g_94[6];
    int **l_243 = &g_89;
    int i;
    for (p_49 = 0; (p_49 <= 8); p_49 += 1)
    {
        unsigned char l_129[4][2] = {{0xF7L,1UL},{1UL,0xF7L},{1UL,1UL},{0xF7L,1UL}};
        int **l_145 = &g_89;
        char l_151 = 0L;
        int i, j;
        for (g_82 = 0; (g_82 <= 8); g_82 += 1)
        {
            int l_136 = 5L;
            int *l_142[4][7][7] = {{{(void*)0,&g_94[0],&l_140[2],&g_94[0],(void*)0,&l_140[2],&g_116},{(void*)0,&g_94[2],&g_116,&g_82,(void*)0,&l_140[3],&l_140[2]},{&g_116,(void*)0,&l_140[4],&l_140[2],&l_140[4],(void*)0,&g_116},{(void*)0,&g_82,&g_6,(void*)0,&g_94[2],&g_94[2],&g_116},{(void*)0,&l_140[2],&g_94[2],&g_94[3],&l_140[0],&g_94[3],&g_94[2]},{&g_94[2],&g_94[2],&g_6,&g_116,&l_140[2],&g_116,(void*)0},{&g_114,&l_140[1],&l_140[4],(void*)0,&g_94[2],&g_94[0],&g_94[2]}},{{&g_94[8],&g_94[4],&g_116,(void*)0,&l_140[2],&g_6,&g_94[2]},{&l_140[0],&l_140[2],&l_140[2],&l_140[4],&l_140[0],&l_140[1],&g_116},{&g_116,&g_94[2],&g_82,&g_82,&g_94[2],&g_116,&g_94[2]},{&g_116,(void*)0,&g_114,&l_140[1],&l_140[4],(void*)0,&g_94[2]},{&l_140[3],&g_82,&g_94[2],&g_94[8],(void*)0,&g_94[2],(void*)0},{&l_140[0],(void*)0,&g_94[2],(void*)0,(void*)0,&l_140[2],&g_94[2]},{(void*)0,&g_94[2],&g_94[2],&g_116,&l_140[3],&l_140[3],&g_116}},{{&g_114,&l_140[2],&g_114,(void*)0,&g_94[2],&l_140[4],&g_116},{&g_94[2],&g_94[4],(void*)0,&g_94[8],&g_116,&g_6,&l_140[2]},{(void*)0,&l_140[1],&l_140[2],&l_140[1],(void*)0,&l_140[4],&g_116},{&l_140[2],&g_94[2],&g_94[4],&g_82,&g_94[8],&l_140[3],&g_6},{&g_116,&l_140[2],&l_140[4],&l_140[4],&l_140[4],&l_140[2],&g_116},{&l_140[2],&g_82,&l_140[2],(void*)0,&g_94[2],&g_94[2],&g_94[4]},{(void*)0,(void*)0,&g_94[2],(void*)0,&l_140[0],(void*)0,&g_94[2]}},{{&g_94[2],&g_94[2],&l_140[2],&g_116,(void*)0,&g_116,&g_82},{&g_114,&g_94[0],&l_140[4],&g_94[3],&g_94[2],&l_140[1],&g_94[2]},{(void*)0,&g_94[4],&g_94[4],(void*)0,(void*)0,&g_6,&g_94[2]},{&l_140[0],&l_140[4],&l_140[2],&l_140[2],&l_140[0],&g_94[0],&g_116},{&l_140[3],&g_94[2],(void*)0,&g_82,&g_94[2],&g_116,&g_94[2]},{&g_116,&g_94[3],&g_114,&g_94[0],&l_140[4],&g_94[3],&g_94[2]},{&g_116,&g_82,&g_94[2],&g_94[8],&g_94[8],&g_94[2],&g_82}}};
            int i, j, k;
            for (g_114 = 6; (g_114 >= 1); g_114 -= 1)
            {
                int i;
                g_94[p_49] = ((void*)0 == &g_88);
                for (g_116 = (-15); (g_116 < (-8)); ++g_116)
                {
                    return g_94[p_49];
                }
                for (g_116 = 8; (g_116 >= 3); g_116 -= 1)
                {
                    int i;
                    g_94[(g_114 + 1)] = g_94[g_116];
                    (*g_88) = &g_94[(g_114 + 1)];
                }
                if (((p_49 >= g_6) < g_94[p_49]))
                {
                    short l_139 = 0xE02EL;
                    if (p_49)
                    {
                        (*g_141) = ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_6, (((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_129[2][0], (safe_mul_func_int16_t_s_s(p_49, g_112)))), ((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((l_136 , (g_114 == 0L)), (safe_lshift_func_int16_t_s_u((g_6 == g_116), 6)))), p_49)) <= l_139))) >= 0L) == 0x7CC9L))), g_116)), g_94[p_49])) | l_140[2]);
                        (*g_88) = l_142[3][5][4];
                    }
                    else
                    {
                        const unsigned l_148[7] = {4294967295UL,0xF98DCA0FL,4294967295UL,4294967295UL,0xF98DCA0FL,4294967295UL,4294967295UL};
                        int i;
                        (*g_88) = ((safe_sub_func_int8_t_s_s((l_145 == ((0x3366FBB5L || (1UL == (((((p_49 >= (((g_94[2] > 4294967287UL) && g_115) , l_148[6])) , (safe_add_func_int16_t_s_s(((0x0EB54A4BL && g_94[2]) , g_82), p_49))) ^ g_116) || p_49) > g_114))) , &g_89)), l_151)) , &g_94[p_49]);
                        (*g_88) = (*g_88);
                        return p_49;
                    }
                }
                else
                {
                    unsigned l_154 = 0x4F5BEE32L;
                    for (l_136 = 17; (l_136 < (-14)); l_136 = safe_sub_func_int16_t_s_s(l_136, 3))
                    {
                        int ***l_157 = &g_156;
                        l_154 = 0xE4F05509L;
                        (*l_157) = &g_89;
                        if (g_158)
                            break;
                        return l_154;
                    }
                    if (p_49)
                        break;
                }
            }
            return p_49;
        }
        for (g_114 = 8; (g_114 >= 0); g_114 -= 1)
        {
            int i;
            for (g_116 = 8; (g_116 >= 0); g_116 -= 1)
            {
                int i;
                (*l_145) = &g_94[p_49];
                if (l_151)
                    goto lbl_244;
                for (g_82 = 0; (g_82 <= 4); g_82 += 1)
                {
                    if (p_49)
                        break;
                    (*g_88) = (*g_156);
                    if (g_94[p_49])
                        break;
                }
                l_159 = (*l_145);
            }
            g_94[g_114] = (*g_141);
            for (g_82 = 7; (g_82 >= 0); g_82 -= 1)
            {
                short l_172[1];
                int * const l_173 = &g_114;
                int i;
                for (i = 0; i < 1; i++)
                    l_172[i] = (-2L);
                (*g_88) = (*l_145);
            }
        }
    }
lbl_244:
    for (g_116 = 0; (g_116 > (-14)); g_116 = safe_sub_func_uint32_t_u_u(g_116, 9))
    {
        unsigned short l_181[5][6][1] = {{{0xED90L},{0xED90L},{0x1069L},{0xED90L},{0xED90L},{0x1069L}},{{0xED90L},{0xED90L},{0x1069L},{0xED90L},{0xED90L},{0x1069L}},{{0xED90L},{0xED90L},{0x1069L},{0xED90L},{0xED90L},{0x1069L}},{{0xED90L},{0xED90L},{0x1069L},{0xED90L},{0xED90L},{0x1069L}},{{0xED90L},{0xED90L},{0x1069L},{0xED90L},{0xED90L},{0x1069L}}};
        int l_204[1][8] = {{0xAC941988L,0xAC941988L,0xAC941988L,0xAC941988L,0xAC941988L,0xAC941988L,0xAC941988L,0xAC941988L}};
        int ** const l_217 = &g_89;
        int i, j, k;
    }
    for (g_116 = 0; (g_116 != (-19)); g_116 = safe_sub_func_uint32_t_u_u(g_116, 1))
    {
        (**g_88) = 0x81E04204L;
        for (p_49 = 2; (p_49 <= 8); p_49 += 1)
        {
            int i;
            return g_94[p_49];
        }
    }
    return (**g_88);
}







static unsigned short func_52(unsigned char p_53, const unsigned char p_54, const int p_55, int p_56, const char p_57)
{
    int *l_87 = &g_82;
    const int l_111 = 0x5642E063L;
    for (p_56 = 0; (p_56 == 21); p_56 = safe_add_func_uint16_t_u_u(p_56, 7))
    {
        const int * volatile * volatile *l_86[5][1] = {{(void*)0},{&g_85},{(void*)0},{&g_85},{(void*)0}};
        int i, j;
        g_85 = g_85;
        l_87 = l_87;
        (**g_88) = ((((*l_87) , ((((void*)0 == g_85) , g_6) , g_85)) != g_88) != ((-1L) | (*l_87)));
    }
    for (g_82 = (-26); (g_82 >= 20); g_82++)
    {
        char l_92 = (-8L);
        int *l_93 = &g_94[2];
        (*l_93) = l_92;
    }
    (**g_88) = ((g_94[7] || (safe_mod_func_uint16_t_u_u(func_58((((g_94[2] , ((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((0x22L ^ ((safe_rshift_func_int16_t_s_s(((*l_87) & g_94[3]), 12)) , p_53)), 1)), ((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(0xA45D3122L, ((*l_87) && (0x1AD8L < g_82)))), p_57)), 10)) , p_55))) , 0UL)) & 0x7EB5F43EL) , 255UL), g_94[2], (*l_87), g_6), l_111))) , 0L);
    (*g_89) = 1L;
    return p_54;
}







static const char func_58(unsigned char p_59, unsigned short p_60, unsigned short p_61, unsigned p_62)
{
    int *l_81 = &g_82;
    (*l_81) = g_6;
    return g_82;
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
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_94[i], "g_94[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_994, "g_994", print_hash_value);
    transparent_crc(g_1037, "g_1037", print_hash_value);
    transparent_crc(g_1039, "g_1039", print_hash_value);
    transparent_crc(g_1058, "g_1058", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
