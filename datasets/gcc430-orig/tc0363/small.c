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



static volatile int g_13 = (-1L);
static volatile int *g_12 = &g_13;
static int g_24 = 9L;
static int *g_23 = &g_24;
static unsigned char g_30 = 1UL;
static int g_32 = (-6L);
static char g_34 = 0L;
static unsigned g_58[2][4] = {{8UL, 8UL, 8UL, 8UL}, {8UL, 8UL, 8UL, 8UL}};
static int g_76 = 0L;
static int *g_75[2] = {&g_76, &g_76};
static int *g_87 = &g_24;
static int *g_94 = (void*)0;
static unsigned g_102 = 5UL;
static int ** volatile g_107 = &g_87;
static int ** volatile g_108 = &g_87;
static unsigned g_125 = 4294967295UL;
static unsigned short g_129[9] = {0xA667L, 0xC601L, 0xA667L, 0xC601L, 0xA667L, 0xC601L, 0xA667L, 0xC601L, 0xA667L};
static char g_138 = (-8L);
static int ***g_188 = (void*)0;
static int **g_190 = (void*)0;
static int ***g_189 = &g_190;
static short g_199 = 0x26B5L;
static short g_218 = (-8L);
static char *g_233 = &g_34;
static char * volatile * volatile g_232 = &g_233;
static unsigned char g_242 = 0x54L;
static unsigned char g_393 = 0xE8L;
static short g_416 = (-1L);
static unsigned *g_420 = (void*)0;
static unsigned short * volatile * volatile g_424 = (void*)0;
static char *g_459 = &g_34;
static int ** volatile g_476 = &g_23;
static int g_495 = 0L;
static unsigned short *g_547 = &g_129[6];
static unsigned short **g_546 = &g_547;
static unsigned short *** volatile g_548 = &g_546;
static int *g_560 = &g_495;
static int *g_595 = &g_32;
static int ** volatile g_650 = &g_595;
static unsigned short g_761[1][9] = {{0x4280L, 0UL, 0x4280L, 0UL, 0x4280L, 0UL, 0x4280L, 0UL, 0x4280L}};
static int ** volatile g_772 = &g_23;
static volatile int g_826 = 0xAF469DA1L;
static volatile int *g_825 = &g_826;



static unsigned short func_1(void);
static unsigned char func_2(int * p_3, char p_4, unsigned short p_5);
static unsigned func_6(unsigned char p_7, short p_8);
static int * func_14(short p_15);
static int * func_16(int p_17, int p_18, char p_19, int p_20);
static unsigned func_21(int * p_22);
static int func_37(int p_38, unsigned short p_39, int * p_40, unsigned char p_41);
static unsigned char func_45(int p_46, unsigned p_47, int p_48);
static unsigned func_68(short p_69, int * p_70, unsigned * p_71, unsigned short p_72);
static unsigned char func_77(int * p_78, unsigned * p_79, unsigned p_80);
static unsigned short func_1(void)
{
    int l_9 = (-2L);
    int *l_31 = &g_32;
    int *l_35 = (void*)0;
    char l_36 = 0x00L;
    int **l_823 = &g_23;
    int **l_824 = &l_31;
    unsigned *l_837 = &g_58[1][1];
    int *l_839[4][4][8] = {{{&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}, {&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}, {&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}, {&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}}, {{&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}, {&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}, {&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}, {&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}}, {{&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}, {&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}, {&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}, {&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}}, {{&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}, {&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}, {&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}, {&g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32, &g_32}}};
    int l_864 = 0x72E805B2L;
    char **l_865 = &g_459;
    char ***l_866 = &l_865;
    unsigned char *l_867 = (void*)0;
    unsigned char *l_868 = &g_393;
    int **l_871[8] = {&l_35, &l_35, &g_75[0], &l_35, &l_35, &g_75[0], &l_35, &l_35};
    int i, j, k;
    (*l_823) = ((func_2((func_6(l_9, ((safe_sub_func_uint32_t_u_u(((*l_837) = ((l_9 != (g_12 != ((*l_824) = func_14((((*l_824) = func_16(g_13, (l_36 = (func_21(g_23) == ((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((g_34 = ((((*l_31) = g_30) , (((safe_unary_minus_func_uint8_t_u((*l_31))) | (*l_31)) && (-10L))) != 8L)), 7UL)), (-5L))) >= g_30))), l_9, l_9)) != g_825))))) >= 1L)), 0x2749F564L)) == g_761[0][3])) , l_839[1][0][4]), g_761[0][2], g_761[0][0]) , 4L) , (void*)0);

    ;


    ;


    ;
    ;
    (*l_824) = (*l_824);
    (**l_824) = ((safe_div_func_int32_t_s_s((*g_595), (**g_650))) < (**l_824));
    for (g_102 = 0; (g_102 >= 30); g_102 = safe_add_func_int16_t_s_s(g_102, 7))
    {
        (*g_12) = (**g_650);
        if ((*l_31))
            continue;
    }
    return (*g_547);
}







static unsigned char func_2(int * p_3, char p_4, unsigned short p_5)
{
    int **l_840 = &g_595;
    char *l_851 = &g_34;
    char *l_852[8];
    short l_853 = 0x06A8L;
    short *l_854 = (void*)0;
    short *l_855[1];
    int l_856 = 0x6F118A1EL;
    unsigned l_859 = 0xE94DF608L;
    unsigned *l_860 = &l_859;
    char l_861 = 1L;
    int i;
    for (i = 0; i < 8; i++)
        l_852[i] = &g_138;
    for (i = 0; i < 1; i++)
        l_855[i] = &g_199;
    (*l_840) = p_3;

    ;
    (*g_12) = (((safe_div_func_int16_t_s_s(((((g_125 = (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((p_5 = ((((l_856 = ((**l_840) = (safe_mul_func_uint16_t_u_u((l_851 == (l_852[5] = l_851)), l_853)))) && func_6(((safe_add_func_int32_t_s_s((*p_3), 0x69203D51L)) , ((*g_233) , (((*p_3) = l_859) || ((*l_860) = (func_21(p_3) ^ g_13))))), l_861)) || p_4) ^ l_853)), l_853)), 0)), p_4))) , p_4) , 1L) , g_58[1][2]), p_4)) , (**l_840)) || (*p_3));



    return p_5;
}







static unsigned func_6(unsigned char p_7, short p_8)
{
    int *l_838 = &g_32;
    l_838 = l_838;
    return g_242;
}







static int * func_14(short p_15)
{
    short l_831[5] = {0xA9AAL, 0xBDF6L, 0xA9AAL, 0xBDF6L, 0xA9AAL};
    int l_834 = (-4L);
    int l_835 = 0x8F978400L;
    int *l_836 = &g_32;
    int i;
    l_835 = (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(p_15, (l_831[4] = (*g_233)))), (g_13 , ((l_834 = ((safe_mul_func_int8_t_s_s((l_834 , l_834), (l_834 >= 0x43L))) > ((g_761[0][3] , (void*)0) == &g_424))) , g_138))));
    return l_836;


}







static int * func_16(int p_17, int p_18, char p_19, int p_20)
{
    int *l_44 = &g_32;
    unsigned *l_57 = &g_58[0][1];
    unsigned l_59 = 0x3CE71799L;
    unsigned short *l_699 = &g_129[0];
    int l_762 = 0x0D9DA1E1L;
    unsigned l_763 = 0xB0079722L;
    unsigned short l_765 = 0xEF7EL;
    int *l_790 = &g_76;
    unsigned short **l_821 = (void*)0;
    int **l_822 = &g_23;
    if (func_37((safe_rshift_func_uint8_t_u_u((func_21(l_44) , func_45((((*l_57) = ((safe_mod_func_int8_t_s_s((-1L), (func_21(l_44) , g_34))) ^ (safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(4294967295UL, (0x8DL < (safe_mul_func_uint16_t_u_u((0xF3E4L < p_19), 0xFA0BL))))), g_13)))) && 4294967295UL), g_34, l_59)), p_17)), g_218, l_57, p_19))
    {
        unsigned **l_694 = &g_420;
        unsigned ***l_693 = &l_694;
        short *l_697[7] = {&g_416, &g_416, &g_416, &g_416, &g_416, &g_416, &g_416};
        int *l_698 = &g_24;
        short l_708 = 0x041FL;
        unsigned short **l_738[8] = {&l_699, (void*)0, &l_699, (void*)0, &l_699, (void*)0, &l_699, (void*)0};
        unsigned short **l_739 = &l_699;
        int i;
        (*g_12) = (*l_44);
        if ((((safe_sub_func_int8_t_s_s(((*g_12) > (p_18 || 0xDAL)), (p_17 >= 0x02L))) || (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((((*l_693) = &g_420) != &l_57), 2)) > (safe_rshift_func_int16_t_s_u(((*l_44) = p_19), func_68(p_20, l_698, &g_58[0][1], (**g_546))))), g_393))) == p_18))
        {
            int *l_702 = &g_24;
            char **l_707 = &g_233;
            char ***l_706 = &l_707;
            char ****l_705 = &l_706;
            (*g_560) = (*l_698);
            (*l_698) = ((g_199 = 0x3160L) , ((void*)0 == l_699));
            if (((safe_rshift_func_uint16_t_u_u(func_21(l_702), 14)) , (((*l_702) = ((p_18 , 247UL) > (safe_mod_func_uint16_t_u_u((p_17 ^ (((l_705 != (void*)0) <= ((-2L) > p_17)) > g_495)), g_30)))) || 0x14A0DD26L)))
            {
                int **l_709[3];
                int *l_713[7][4][4] = {{{&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}}, {{&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}}, {{&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}}, {{&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}}, {{&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}}, {{&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}}, {{&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76}}};
                unsigned l_728 = 0x3F5AC0A7L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_709[i] = &g_560;
                l_698 = &p_20;

                ;
                for (l_59 = 15; (l_59 < 40); l_59 = safe_add_func_uint8_t_u_u(l_59, 1))
                {
                    int **l_712[6];
                    unsigned ***l_717 = (void*)0;
                    int l_718 = 0L;
                    int l_725 = 1L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_712[i] = (void*)0;
                    if ((&g_76 != (l_713[4][3][0] = (void*)0)))
                    {
                        int *l_714 = &g_24;
                        l_698 = l_714;

                        ;
                        (*l_702) = p_18;
                    }
                    else
                    {
                        (*g_12) = (((*l_44) = ((p_18 && ((void*)0 != l_717)) <= (func_68(((((g_58[0][1] > (l_718 ^ 0x0FL)) < (((((**g_232) & p_20) , ((*l_44) = (0x4B0764AEL || 0UL))) , p_20) , 255UL)) ^ l_718) != p_17), l_57, l_57, l_718) , 0xB95FL))) , (-9L));
                        (*l_702) = (7UL ^ l_718);
                    }
                    if (((*l_44) = (*g_595)))
                    {
                        return (*g_650);




                    }
                    else
                    {
                        unsigned short **l_737 = (void*)0;
                        unsigned short ***l_740 = (void*)0;
                        unsigned char *l_741 = (void*)0;
                        (*g_560) = func_45(func_21(&l_718), (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((p_17 == ((*g_12) > (safe_mul_func_uint8_t_u_u(l_725, (safe_rshift_func_uint16_t_u_s((*g_547), 12)))))), (g_125 <= p_17))), (*g_459))), p_19);

                        ;

                        ;
                        if (l_728)
                            continue;


                        (*g_476) = ((safe_add_func_int32_t_s_s((((*g_232) != &p_19) > (*l_44)), (safe_add_func_int8_t_s_s(((*g_233) = 5L), (g_393 = (p_20 <= ((safe_div_func_int8_t_s_s((0x46B3L > (*l_702)), (((safe_div_func_uint16_t_u_u((((l_738[1] = l_737) != (g_546 = l_739)) , 65528UL), 9UL)) < p_20) , 8UL))) , (-10L)))))))) , &p_20);

                        ;
                        ;
                    }

                    ;

                    ;
                    ;
                    l_44 = &p_20;

                    ;
                }


                ;

                ;
                ;
                l_44 = &p_20;

                ;
            }
            else
            {
                return l_702;


            }


            ;

            ;
            ;
        }
        else
        {
            int *l_742 = &g_495;
            int **l_743[3][4][6] = {{{&g_560, &g_23, (void*)0, &l_742, &l_742, (void*)0}, {&g_560, &g_23, (void*)0, &l_742, &l_742, (void*)0}, {&g_560, &g_23, (void*)0, &l_742, &l_742, (void*)0}, {&g_560, &g_23, (void*)0, &l_742, &l_742, (void*)0}}, {{&g_560, &g_23, (void*)0, &l_742, &l_742, (void*)0}, {&g_560, &g_23, (void*)0, &l_742, &l_742, (void*)0}, {&g_560, &g_23, (void*)0, &l_742, &l_742, (void*)0}, {&g_560, &g_23, (void*)0, &l_742, &l_742, (void*)0}}, {{&g_560, &g_23, (void*)0, &l_742, &l_742, (void*)0}, {&g_560, &g_23, (void*)0, &l_742, &l_742, (void*)0}, {&g_560, &g_23, (void*)0, &l_742, &l_742, (void*)0}, {&g_560, &g_23, (void*)0, &l_742, &l_742, (void*)0}}};
            int i, j, k;
            (*g_476) = (l_44 = l_742);

            ;
            ;
        }


        ;

        ;
        ;
        return l_57;




    }
    else
    {
        unsigned char *l_748 = (void*)0;
        int l_753 = 2L;
        unsigned short *l_760[6][6][5] = {{{&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}}, {{&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}}, {{&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}}, {{&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}}, {{&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}}, {{&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}, {&g_129[5], &g_761[0][6], (void*)0, &g_129[8], &g_761[0][3]}}};
        int l_764 = (-1L);
        unsigned *l_771 = &g_58[0][1];
        int i, j, k;
        if ((l_764 = (p_20 = ((safe_mod_func_int16_t_s_s(g_129[8], (safe_mul_func_uint8_t_u_u((((*l_44) = ((*g_560) & p_20)) | ((l_763 = (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(0x09EFL, 0xBCE8L)), ((l_753 = g_416) , (((safe_sub_func_uint16_t_u_u(((-7L) & 0x556CA83FL), (l_762 = (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_18, (-2L))), 2))))) , p_19) & l_753))))) == l_764)), 255UL)))) , 0xECFACB44L))))
        {
            unsigned char l_779 = 0xD4L;
            int l_798 = 0L;
            int *l_819[4];
            int i;
            for (i = 0; i < 4; i++)
                l_819[i] = &l_753;
            if (l_765)
            {
                char l_797[8][8][3] = {{{4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}}, {{4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}}, {{4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}}, {{4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}}, {{4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}}, {{4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}}, {{4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}}, {{4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}, {4L, 0xF2L, 0x85L}}};
                unsigned short l_800 = 7UL;
                int *l_801[7] = {&l_764, &l_764, &l_764, &l_764, &l_764, &l_764, &l_764};
                int i, j, k;
                (*g_12) = (safe_unary_minus_func_int16_t_s((4294967289UL && ((((3UL | (8L ^ p_20)) || (safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((((*l_44) , 0xB9L) , p_17) , (*l_44)), p_17)), p_20))) , (*l_44)) , (*g_23)))));
                (*g_772) = ((*g_650) = &l_762);

                ;
                ;
                (*g_107) = &l_764;

                ;
                for (g_102 = (-4); (g_102 > 4); g_102 = safe_add_func_uint32_t_u_u(g_102, 1))
                {
                    int **l_788 = &g_75[0];
                    int **l_789 = (void*)0;
                    unsigned *l_799 = &g_58[1][1];
                    int *l_820 = &l_753;
                    (*g_595) = (*g_12);
                    (*g_87) = ((*g_560) = (safe_rshift_func_uint16_t_u_s((8L > (safe_div_func_uint32_t_u_u((((!l_779) | (safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s((func_68((safe_add_func_uint32_t_u_u(((l_798 = (!((p_17 > (g_30 = 0xBEL)) >= ((l_764 = g_495) , ((l_790 = l_44) != ((safe_mul_func_uint8_t_u_u((((l_797[6][5][1] = (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(0x87L, g_495)), l_779))) <= (*l_44)) , g_393), p_19)) , &g_76)))))) && (*l_44)), l_753)), &l_762, l_799, p_19) & (-1L)), p_19)), g_495)), 2))) >= g_199), l_800))), l_753)));

                    ;
                    if (p_18)
                    {
                        int *l_802[6] = {&l_764, &l_764, &l_762, &l_764, &l_764, &l_762};
                        int i;
                        return l_799;





                    }
                    else
                    {
                        short l_817 = 0x0770L;
                        int l_818 = 0x032DFF10L;
                        (*l_44) = (p_17 == (safe_rshift_func_int8_t_s_s(((*g_459) && ((**g_232) <= (l_818 = ((1L ^ ((((safe_sub_func_uint16_t_u_u((+(safe_unary_minus_func_uint32_t_u((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(func_21(&l_798), 1)) && (*g_560)), (safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(0x0CL)), ((((*g_595) = (l_817 != 0L)) , 0xDDF30DD6L) , 1UL))))), p_20))))), p_17)) , p_20) || 2L) ^ 0xCBL)) <= (*g_233))))), 3)));

                        ;
                        p_20 = ((l_801[0] = &p_20) != ((*g_107) = (*g_772)));

                        ;

                        return l_799;





                    }
                }
            }
            else
            {
                return (*g_650);


            }

            ;
            ;
            ;
        }
        else
        {
            l_821 = (*g_548);

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
    ;
    (*l_822) = (void*)0;

    ;
    return (*g_772);



}







static unsigned func_21(int * p_22)
{
    unsigned short l_25 = 7UL;
    (*p_22) = ((+l_25) , (p_22 != (g_23 = p_22)));


    return l_25;
}







static int func_37(int p_38, unsigned short p_39, int * p_40, unsigned char p_41)
{
    unsigned short *l_237 = &g_129[8];
    unsigned short **l_236 = &l_237;
    unsigned short ***l_235 = &l_236;
    unsigned char *l_240 = &g_30;
    unsigned char *l_241[7][5] = {{(void*)0, &g_242, (void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0, &g_242, (void*)0}};
    int l_243 = 4L;
    int *l_250[9] = {&g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76};
    int l_252[4][7][9] = {{{0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}}, {{0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}}, {{0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}}, {{0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}, {0x9F128CB9L, 7L, (-3L), 0x21921C0DL, 1L, 0x647660EAL, 0x59654CD3L, 1L, 0x59654CD3L}}};
    int *l_267 = &l_252[0][1][3];
    unsigned l_303[4][1][7] = {{{4294967291UL, 4294967291UL, 4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL, 4294967291UL}}, {{4294967291UL, 4294967291UL, 4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL, 4294967291UL}}, {{4294967291UL, 4294967291UL, 4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL, 4294967291UL}}, {{4294967291UL, 4294967291UL, 4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL, 4294967291UL}}};
    int ***l_331 = (void*)0;
    unsigned short l_390 = 0x453AL;
    char **l_419 = &g_233;
    unsigned short l_471 = 65533UL;
    short l_516[9][4] = {{(-1L), 0xE504L, (-1L), 0xE504L}, {(-1L), 0xE504L, (-1L), 0xE504L}, {(-1L), 0xE504L, (-1L), 0xE504L}, {(-1L), 0xE504L, (-1L), 0xE504L}, {(-1L), 0xE504L, (-1L), 0xE504L}, {(-1L), 0xE504L, (-1L), 0xE504L}, {(-1L), 0xE504L, (-1L), 0xE504L}, {(-1L), 0xE504L, (-1L), 0xE504L}, {(-1L), 0xE504L, (-1L), 0xE504L}};
    char ***l_537 = &l_419;
    short l_580 = 6L;
    unsigned l_622 = 1UL;
    int *l_637 = &g_24;
    int *l_663 = &l_252[2][2][6];
    int i, j, k;
    (*l_235) = (void*)0;

    ;
    if (((9L != ((0x8EDF1D7FL | p_39) < ((g_199 = p_39) <= func_21(((*g_107) = p_40))))) < ((safe_mul_func_uint8_t_u_u(((p_41 = ((*l_240) = p_38)) ^ (l_243 || (safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((-1L), l_243)), p_39)))), l_243)) < 6UL)))
    {
        int *l_251[10] = {&g_24, &g_32, &g_24, &g_32, &g_24, &g_32, &g_24, &g_32, &g_24, &g_32};
        int ****l_253[2][9] = {{&g_189, &g_188, &g_189, &g_188, &g_189, &g_188, &g_189, &g_188, &g_189}, {&g_189, &g_188, &g_189, &g_188, &g_189, &g_188, &g_189, &g_188, &g_189}};
        int *l_256 = &l_243;
        unsigned l_261[10][7][3] = {{{0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}}, {{0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}}, {{0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}}, {{0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}}, {{0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}}, {{0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}}, {{0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}}, {{0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}}, {{0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}}, {{0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}, {0xCBA1A656L, 0x8418D95EL, 1UL}}};
        short l_264 = 1L;
        unsigned short ***l_272 = &l_236;
        unsigned l_282 = 0xE4E01B56L;
        unsigned l_324 = 1UL;
        short l_361 = (-1L);
        int *l_362 = &l_243;
        unsigned l_366 = 1UL;
        unsigned *l_412 = &l_303[3][0][6];
        unsigned l_413 = 7UL;
        char **l_417 = &g_233;
        int l_439 = (-1L);
        int i, j, k;
        if ((0x36A6L ^ (((safe_div_func_int8_t_s_s(((void*)0 == &g_242), g_58[0][1])) & ((((l_252[0][1][3] = (((void*)0 == &g_125) || p_39)) , (void*)0) == l_253[0][0]) , 0x10EE6A99L)) & p_38)))
        {
            (*g_107) = &l_243;

            ;
        }
        else
        {
            short l_265 = 0xD0BBL;
            short l_266 = 0x69D9L;
            (*g_107) = p_40;
            l_266 = (l_243 = (safe_add_func_uint8_t_u_u(func_68(p_39, (func_45((func_21((p_39 , (l_256 = &l_252[0][1][3]))) <= p_38), ((((((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((g_138 && ((*l_240) = l_261[9][6][0])), (safe_mod_func_uint16_t_u_u((p_38 , p_39), g_24)))), 0L)) || g_138) >= (-1L)) > (-10L)) >= l_264) , 1UL), (*p_40)) , (void*)0), l_250[0], g_242), l_265)));

            ;

            ;
            ;
            (*g_108) = p_40;

            ;
            (**g_108) = func_21(p_40);

            ;
        }


        ;
        ;
        l_267 = &l_252[1][4][2];
        for (g_199 = 0; (g_199 != 23); g_199++)
        {
            short *l_275 = &l_264;
            int l_278[7] = {0xAB4F9B28L, (-1L), 0xAB4F9B28L, (-1L), 0xAB4F9B28L, (-1L), 0xAB4F9B28L};
            int l_291 = (-1L);
            int l_310[10][9][2] = {{{(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}}, {{(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}}, {{(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}}, {{(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}}, {{(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}}, {{(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}}, {{(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}}, {{(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}}, {{(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}}, {{(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}, {(-1L), 0x5C4304CCL}}};
            unsigned *l_357 = &g_102;
            int *l_363 = &g_32;
            char **l_371 = &g_233;
            char ***l_370 = &l_371;
            int i, j, k;
            (*l_256) = p_39;
        }
        if ((0L | l_413))
        {
            char ***l_418 = &l_417;
            unsigned short ***l_429 = &l_236;
            int *l_430 = &l_252[1][5][4];
            if ((&g_58[0][1] != (g_420 = (((g_416 = ((*l_237) = g_24)) == ((((*l_418) = l_417) != l_419) > (+g_34))) , &l_303[3][0][6]))))
            {
                short *l_432 = &l_264;
                (*g_87) = (p_38 | g_393);
                for (p_38 = 0; (p_38 == 3); p_38 = safe_add_func_uint8_t_u_u(p_38, 6))
                {
                    unsigned short **l_423 = &l_237;
                    for (g_32 = 4; (g_32 >= 1); g_32 -= 1)
                    {
                        (*g_87) = (l_423 != g_424);
                    }
                    (*g_87) = ((((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((*g_12) , p_39), 3)), 0x67L)) ^ (~1UL)) , l_429) == (void*)0);
                    l_430 = p_40;

                    ;
                }

                ;
                (*g_12) = (safe_unary_minus_func_int16_t_s(((*l_432) = ((void*)0 == &g_188))));
                (*g_23) = (safe_mod_func_int8_t_s_s(((((void*)0 != &l_236) >= (*l_430)) >= (**g_232)), (*g_233)));
            }
            else
            {
                int l_453 = 2L;
                if ((1L <= l_439))
                {
                    int **l_444 = &l_430;
                    (*g_23) = (*g_23);
                    l_430 = (*g_107);

                    ;
                    l_453 = (safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((void*)0 == l_444) != (safe_div_func_int16_t_s_s((4294967295UL & (((safe_div_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((p_39 <= ((!0xC9711037L) != p_41)), ((0xA31D04D4L >= (safe_mul_func_uint16_t_u_u(p_41, (((l_453 <= (*l_430)) || (*l_267)) | (-6L))))) != 0xDAL))) | p_38), g_30)) < 1L) && 0x315CL)), (*l_267)))), (*g_87))), l_453));
                }
                else
                {
                    int *l_454 = &l_252[0][1][3];
                    l_454 = (l_267 = p_40);

                    ;
                    ;
                }

                ;
                ;
                for (g_102 = 4; (g_102 < 45); ++g_102)
                {
                    (*l_362) = (safe_add_func_int32_t_s_s(((*l_267) = 0xC43A5B17L), (((*g_420) , (*g_232)) != (g_459 = (*l_419)))));
                    (*l_267) = (!p_39);
                    return p_38;




                }
            }

            ;
            ;
            ;
        }
        else
        {
            int *l_462 = (void*)0;
            for (g_102 = 0; (g_102 <= 7); g_102 = safe_add_func_int32_t_s_s(g_102, 5))
            {
                if (p_41)
                    break;
            }
            l_267 = p_40;

            ;
            l_462 = (*g_108);

            ;
        }

        ;
        ;
    }
    else
    {
        unsigned l_480 = 0x03E098ACL;
        char **l_498 = &g_459;
        char ***l_515 = (void*)0;
        short *l_539 = &g_199;
        int *l_541 = (void*)0;
        for (g_76 = 1; (g_76 <= 8); g_76 += 1)
        {
            int *l_475 = &l_252[0][1][3];
            int **l_487 = (void*)0;
            int **l_488 = &l_267;
            int i;
            for (p_39 = 0; (p_39 <= 1); p_39 += 1)
            {
                short *l_472 = &g_416;
                int i, j;
                (*g_12) = (g_129[g_76] > 0x37L);
                (*l_267) = ((255UL != (((safe_mod_func_uint16_t_u_u(g_129[(p_39 + 1)], (((0x463A6208L && (safe_sub_func_uint8_t_u_u((0x1DA55F15L < 0xD1A290FBL), ((g_58[p_39][(p_39 + 1)] | (safe_rshift_func_int16_t_s_s(((*l_472) = (safe_add_func_int16_t_s_s((l_471 , g_32), p_39))), g_129[(p_39 + 1)]))) , 0xDDL)))) > (*g_233)) , (-3L)))) == 65535UL) , p_41)) != g_125);
                if (p_41)
                    break;
            }
            for (l_243 = 8; (l_243 >= 0); l_243 -= 1)
            {
                int *l_482 = &g_32;
                int i;
                if ((safe_add_func_int32_t_s_s(g_129[g_76], func_21(p_40))))
                {
                    (*g_476) = l_475;

                    ;
                }
                else
                {
                    unsigned char l_477[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_477[i] = 1UL;
                    for (g_125 = 2; (g_125 <= 8); g_125 += 1)
                    {
                        int *l_481[8] = {&g_32, &g_24, &g_32, &g_24, &g_32, &g_24, &g_32, &g_24};
                        int i;
                        if (l_477[0])
                            break;
                        (*g_87) = (safe_rshift_func_uint8_t_u_s((l_480 && ((**g_232) <= func_21(p_40))), 6));
                        (*g_23) = (**g_107);
                        l_481[1] = (*g_107);


                    }
                }
                for (l_471 = 1; (l_471 <= 8); l_471 += 1)
                {
                    l_482 = p_40;

                    ;
                }

                ;
            }

            ;
            (*g_12) = (safe_mul_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(func_21(((*l_488) = p_40)), g_129[g_76])) , (safe_div_func_uint32_t_u_u((g_129[g_76] > ((g_199 = ((safe_mod_func_uint8_t_u_u((((+(safe_lshift_func_int8_t_s_u(0x6BL, ((g_495 = (p_38 <= (g_393 == (func_21(p_40) , 0L)))) ^ 0x21D2L)))) && l_480) <= 0xB1L), 0x2FL)) <= p_41)) > g_76)), 4294967295UL))), g_24));

            ;
            ;
            (*l_267) = (p_38 >= (0xA6F5L <= ((((*l_475) , l_498) != (void*)0) <= (safe_lshift_func_int16_t_s_s(((p_38 & ((safe_div_func_uint32_t_u_u(((1UL == (((g_199 , 4294967295UL) && g_393) <= (*g_23))) & 0x1CC1C9E6L), 4294967290UL)) & p_39)) , g_13), 2)))));
        }

        ;
        if ((((safe_mul_func_int8_t_s_s(l_480, (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_480 , ((*l_237) = 0UL)), (safe_sub_func_uint16_t_u_u(((void*)0 != &l_241[5][2]), ((0xF457AF73L | l_480) == ((~l_480) == ((l_419 = ((*p_40) , l_498)) == &g_459))))))), g_58[0][1])), p_41)), 0x280DB3CBL)))) >= l_516[2][2]) ^ p_41))
        {
            int *l_524 = (void*)0;
            short *l_531 = &l_516[2][2];
            char ***l_536 = (void*)0;
            if (p_38)
            {
                unsigned l_523[6] = {0x92F15FF7L, 0x92F15FF7L, 0UL, 0x92F15FF7L, 0x92F15FF7L, 0UL};
                volatile int l_526 = (-6L);
                int l_535[1];
                unsigned short * volatile * volatile *l_540 = &g_424;
                int i;
                for (i = 0; i < 1; i++)
                    l_535[i] = 0x273527A8L;
                for (g_125 = 19; (g_125 > 34); g_125++)
                {
                    int *l_519 = &l_252[0][1][3];
                    l_519 = p_40;

                    ;
                    if ((*g_12))
                        continue;
                }
                for (g_34 = 16; (g_34 == (-20)); --g_34)
                {
                    unsigned *l_522 = (void*)0;
                    if (((p_38 ^ ((*l_267) >= (((void*)0 == &g_30) , (**g_476)))) || (l_523[0] = 4294967295UL)))
                    {
                        l_524 = (void*)0;

                        ;
                    }
                    else
                    {
                        int *l_525 = &l_243;
                        l_525 = (*g_107);

                        ;
                        (*g_23) = p_38;
                        l_526 = (*g_12);
                        l_524 = p_40;

                        ;
                    }
                    for (l_243 = 0; (l_243 >= 1); l_243 = safe_add_func_int8_t_s_s(l_243, 8))
                    {
                        short **l_532 = &l_531;
                        char ****l_538 = &l_537;
                        (*g_87) = (0x75L > (((*l_532) = l_531) == ((func_21(p_40) ^ (safe_add_func_uint32_t_u_u(g_495, ((l_535[0] , l_536) == ((*l_538) = l_537))))) , l_539)));
                    }
                }

                ;
                (*l_540) = g_424;
                (*l_267) = (**g_107);
            }
            else
            {
                unsigned char l_551 = 0x6EL;
                int l_554[8] = {0L, 0x1755649EL, 0L, 0x1755649EL, 0L, 0x1755649EL, 0L, 0x1755649EL};
                int i;
                l_541 = (*g_476);

                ;
                l_267 = l_541;

                ;
                for (l_471 = 0; (l_471 > 33); l_471 = safe_add_func_uint16_t_u_u(l_471, 4))
                {
                    return (*l_541);
                }
                for (g_199 = 14; (g_199 <= 27); g_199++)
                {
                    int **l_555 = &l_267;
                    (*g_108) = (void*)0;

                    ;
                    (*g_548) = ((*l_235) = g_546);

                    ;
                    (*g_107) = (*g_476);

                    ;
                }

                ;
            }

            ;
            ;
            ;
        }
        else
        {
            unsigned **l_571[10][2][1];
            int l_579[6][3][4] = {{{(-4L), 1L, 0x8A26EFB5L, (-8L)}, {(-4L), 1L, 0x8A26EFB5L, (-8L)}, {(-4L), 1L, 0x8A26EFB5L, (-8L)}}, {{(-4L), 1L, 0x8A26EFB5L, (-8L)}, {(-4L), 1L, 0x8A26EFB5L, (-8L)}, {(-4L), 1L, 0x8A26EFB5L, (-8L)}}, {{(-4L), 1L, 0x8A26EFB5L, (-8L)}, {(-4L), 1L, 0x8A26EFB5L, (-8L)}, {(-4L), 1L, 0x8A26EFB5L, (-8L)}}, {{(-4L), 1L, 0x8A26EFB5L, (-8L)}, {(-4L), 1L, 0x8A26EFB5L, (-8L)}, {(-4L), 1L, 0x8A26EFB5L, (-8L)}}, {{(-4L), 1L, 0x8A26EFB5L, (-8L)}, {(-4L), 1L, 0x8A26EFB5L, (-8L)}, {(-4L), 1L, 0x8A26EFB5L, (-8L)}}, {{(-4L), 1L, 0x8A26EFB5L, (-8L)}, {(-4L), 1L, 0x8A26EFB5L, (-8L)}, {(-4L), 1L, 0x8A26EFB5L, (-8L)}}};
            int i, j, k;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_571[i][j][k] = &g_420;
                }
            }
            for (l_390 = 0; (l_390 <= 31); l_390 = safe_add_func_int32_t_s_s(l_390, 3))
            {
                if ((*g_87))
                    break;
            }
            for (g_34 = 0; (g_34 <= 12); g_34 = safe_add_func_int32_t_s_s(g_34, 4))
            {
                unsigned *l_561 = &l_303[3][0][6];
                int l_564 = 0x4DBD6997L;
                char **l_584[6][9] = {{&g_233, &g_459, &g_233, &g_459, &g_459, &g_459, &g_459, &g_459, &g_233}, {&g_233, &g_459, &g_233, &g_459, &g_459, &g_459, &g_459, &g_459, &g_233}, {&g_233, &g_459, &g_233, &g_459, &g_459, &g_459, &g_459, &g_459, &g_233}, {&g_233, &g_459, &g_233, &g_459, &g_459, &g_459, &g_459, &g_459, &g_233}, {&g_233, &g_459, &g_233, &g_459, &g_459, &g_459, &g_459, &g_459, &g_233}, {&g_233, &g_459, &g_233, &g_459, &g_459, &g_459, &g_459, &g_459, &g_233}};
                int i, j;
                g_560 = p_40;

                ;
                if ((((*l_561) = ((void*)0 == l_541)) || (-1L)))
                {
                    char l_562[1];
                    unsigned *l_574[5][3] = {{&g_58[0][1], (void*)0, &l_303[3][0][6]}, {&g_58[0][1], (void*)0, &l_303[3][0][6]}, {&g_58[0][1], (void*)0, &l_303[3][0][6]}, {&g_58[0][1], (void*)0, &l_303[3][0][6]}, {&g_58[0][1], (void*)0, &l_303[3][0][6]}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_562[i] = 0x2AL;
                    if ((((*g_233) != (l_562[0] | ((safe_unary_minus_func_int16_t_s((l_564 ^ 0x79L))) , (&g_218 == l_539)))) > (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((*l_561) = l_564) || (*g_12)), (((**g_546) , &g_420) != l_571[9][1][0]))), (*g_459))), p_38))))
                    {
                        (*g_23) = ((safe_add_func_int8_t_s_s((-1L), ((0xB45CL && func_68(p_39, (*g_476), l_574[0][2], (*g_547))) , (safe_div_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(l_579[0][2][0], (**g_546))) ^ l_580), g_495))))) > p_41);
                    }
                    else
                    {
                        if (p_38)
                            break;
                    }
                }
                else
                {
                    char **l_583 = &g_233;
                    (*g_12) = (safe_sub_func_int32_t_s_s((0x08L <= ((g_242 , (~((l_583 = l_583) != l_584[5][3]))) > (**g_232))), (0UL ^ 0x1AL)));
                }
            }

            ;
            (*g_560) = ((((((**g_108) , 0x5A2AL) , (0xE1D5L >= (((safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(p_41, p_39)) , (**g_107)), (safe_sub_func_int32_t_s_s((0xA1A0L || (p_39 & ((safe_mod_func_uint8_t_u_u(g_199, p_39)) >= p_38))), g_24)))) , (***g_548)) && p_39))) | (*g_233)) && 4294967289UL) > p_39);
        }

        ;
        ;
        ;
        ;
        return p_38;
    }

    ;

    ;
    ;
    ;
    for (g_24 = 0; (g_24 <= 13); ++g_24)
    {
        l_267 = g_595;

        ;
    }

    ;
    for (g_102 = 0; (g_102 != 35); g_102++)
    {
        int *l_616 = (void*)0;
        unsigned char l_636[9] = {1UL, 0x55L, 1UL, 0x55L, 1UL, 0x55L, 1UL, 0x55L, 1UL};
        char ****l_657 = &l_537;
        int i;
    }
    return (*g_595);




}







static unsigned char func_45(int p_46, unsigned p_47, int p_48)
{
    int *l_224 = &g_76;
    int l_225 = 0x64CDA43AL;
    unsigned l_230 = 4294967295UL;
    char * volatile * volatile *l_234 = &g_232;
    if (((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(0x212AL, (safe_sub_func_uint32_t_u_u(func_68(((0xA5L > ((safe_div_func_int16_t_s_s((0x3B05E262L <= ((g_75[0] = g_23) == ((0x28L >= func_77(&g_76, (g_58[0][1] , &g_58[0][0]), (~(((-1L) || 65535UL) ^ g_58[0][1])))) , l_224))), g_199)) < p_47)) != p_48), l_224, g_23, l_225), l_225)))) & 0x3BL), l_230)), 0L)) > g_218))
    {
        l_225 = 0x6C30A758L;
    }
    else
    {
        int *l_231 = &g_32;
        (*g_107) = l_231;

        ;
    }


    ;
    (*l_234) = g_232;
    return g_13;
}







static unsigned func_68(short p_69, int * p_70, unsigned * p_71, unsigned short p_72)
{
    int l_229 = 0L;
    for (g_76 = 0; (g_76 == (-25)); g_76--)
    {
        int l_228 = 0x32489128L;
        return l_228;
    }
    return l_229;
}







static unsigned char func_77(int * p_78, unsigned * p_79, unsigned p_80)
{
    short l_83 = 0L;
    int l_84[4][5] = {{(-1L), 1L, 0x7CCF76E5L, 0x7CCF76E5L, 1L}, {(-1L), 1L, 0x7CCF76E5L, 0x7CCF76E5L, 1L}, {(-1L), 1L, 0x7CCF76E5L, 0x7CCF76E5L, 1L}, {(-1L), 1L, 0x7CCF76E5L, 0x7CCF76E5L, 1L}};
    unsigned l_103 = 4294967288UL;
    int *l_104 = &g_32;
    int *l_200[4];
    unsigned short *l_221 = &g_129[8];
    int **l_223[4] = {&g_23, &l_200[2], &g_23, &l_200[2]};
    int i, j;
    for (i = 0; i < 4; i++)
        l_200[i] = &g_24;
    if ((safe_mul_func_int8_t_s_s(l_83, l_84[3][1])))
    {
        int *l_86 = (void*)0;
        int **l_85 = &l_86;
        (*l_85) = (void*)0;
        (*g_12) = p_80;
        if (l_83)
        {
            (*g_23) = ((void*)0 == &g_58[0][3]);
        }
        else
        {
            (*l_85) = (g_87 = &g_32);

            ;
            ;
        }

        ;
        for (g_34 = 0; (g_34 <= 3); g_34 += 1)
        {
            int *l_92 = &g_76;
            int **l_93[5][8] = {{&l_92, &l_92, &l_92, &l_92, &l_92, (void*)0, &l_92, (void*)0}, {&l_92, &l_92, &l_92, &l_92, &l_92, (void*)0, &l_92, (void*)0}, {&l_92, &l_92, &l_92, &l_92, &l_92, (void*)0, &l_92, (void*)0}, {&l_92, &l_92, &l_92, &l_92, &l_92, (void*)0, &l_92, (void*)0}, {&l_92, &l_92, &l_92, &l_92, &l_92, (void*)0, &l_92, (void*)0}};
            int l_95 = 1L;
            unsigned char *l_96 = &g_30;
            unsigned *l_101 = &g_102;
            int i, j;
            l_84[0][0] = (safe_mod_func_uint32_t_u_u(((+(safe_sub_func_int8_t_s_s(((g_94 = l_92) == (l_95 , p_78)), ((*l_96) = g_30)))) , (safe_mod_func_uint32_t_u_u((*p_79), ((*l_101) = ((-1L) & (((safe_mod_func_uint16_t_u_u(((0L || (g_13 && (p_80 > g_58[1][1]))) <= g_30), g_24)) , g_32) < l_83)))))), g_58[0][1]));

            ;
            for (g_24 = 3; (g_24 >= 0); g_24 -= 1)
            {
                int i, j;
                l_95 = (l_103 = ((*g_23) = 0xA1441E23L));
                l_104 = &l_84[g_24][g_34];

                ;
                (*l_85) = p_79;

                ;
                l_84[g_24][g_34] = (((*l_96) = (safe_rshift_func_int8_t_s_s(0x7FL, 0))) , (*g_12));
                for (g_76 = 1; (g_76 >= 0); g_76 -= 1)
                {
                    (*l_104) = ((**l_85) = (-5L));
                }
            }
        }

        ;
        ;
    }
    else
    {
        (*l_104) = p_80;
    }

    ;
    (*g_107) = p_78;

    ;
    for (g_32 = 0; (g_32 <= 1); g_32 += 1)
    {
        char l_126 = 0xE9L;
        char l_174 = 7L;
        int l_179 = (-3L);
        int l_197 = 0L;
        (*g_108) = (*g_107);
        (*g_87) = (safe_mod_func_int32_t_s_s((*l_104), (p_80 , g_13)));
        for (g_76 = 0; (g_76 <= 1); g_76 += 1)
        {
            int **l_112 = &g_23;
            int ***l_111 = &l_112;
            int **l_113 = &g_94;
            char *l_222 = &l_174;
            (*l_111) = (void*)0;

            ;
            for (p_80 = 0; (p_80 <= 1); p_80 += 1)
            {
                unsigned l_139[10][4][6] = {{{0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}}, {{0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}}, {{0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}}, {{0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}}, {{0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}}, {{0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}}, {{0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}}, {{0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}}, {{0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}}, {{0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}, {0x0373D2EFL, 9UL, 0xB0E7A368L, 0xF39A9842L, 0x5B7FF5A8L, 0x71E4E035L}}};
                int l_153 = 0xC5A92DAEL;
                int i, j, k;
                for (g_30 = 0; (g_30 <= 1); g_30 += 1)
                {
                    int ***l_114 = &l_113;
                    int l_148[4][3][7] = {{{0x13EA481BL, 0L, 1L, (-5L), 3L, 0x6E4CB239L, 0x3C7BDA22L}, {0x13EA481BL, 0L, 1L, (-5L), 3L, 0x6E4CB239L, 0x3C7BDA22L}, {0x13EA481BL, 0L, 1L, (-5L), 3L, 0x6E4CB239L, 0x3C7BDA22L}}, {{0x13EA481BL, 0L, 1L, (-5L), 3L, 0x6E4CB239L, 0x3C7BDA22L}, {0x13EA481BL, 0L, 1L, (-5L), 3L, 0x6E4CB239L, 0x3C7BDA22L}, {0x13EA481BL, 0L, 1L, (-5L), 3L, 0x6E4CB239L, 0x3C7BDA22L}}, {{0x13EA481BL, 0L, 1L, (-5L), 3L, 0x6E4CB239L, 0x3C7BDA22L}, {0x13EA481BL, 0L, 1L, (-5L), 3L, 0x6E4CB239L, 0x3C7BDA22L}, {0x13EA481BL, 0L, 1L, (-5L), 3L, 0x6E4CB239L, 0x3C7BDA22L}}, {{0x13EA481BL, 0L, 1L, (-5L), 3L, 0x6E4CB239L, 0x3C7BDA22L}, {0x13EA481BL, 0L, 1L, (-5L), 3L, 0x6E4CB239L, 0x3C7BDA22L}, {0x13EA481BL, 0L, 1L, (-5L), 3L, 0x6E4CB239L, 0x3C7BDA22L}}};
                    int **l_170[9] = {(void*)0, (void*)0, &g_87, (void*)0, (void*)0, &g_87, (void*)0, (void*)0, &g_87};
                    int i, j, k;
                    (*l_114) = l_113;
                    for (l_103 = 0; (l_103 <= 1); l_103 += 1)
                    {
                        int i, j;
                        return g_58[l_103][(g_30 + 1)];
                    }
                    for (l_103 = 0; (l_103 <= 1); l_103 += 1)
                    {
                        short *l_123 = &l_83;
                        unsigned *l_124[5][4] = {{&g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125}};
                        unsigned short *l_127 = (void*)0;
                        unsigned short *l_128 = &g_129[8];
                        char *l_136 = &g_34;
                        char *l_137 = &g_138;
                        int i, j;
                        l_139[5][3][0] = (safe_div_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s(((*l_123) = ((safe_mul_func_uint16_t_u_u(g_58[p_80][g_32], 0xC835L)) , (safe_rshift_func_int16_t_s_s(g_58[g_30][(g_30 + 1)], 5)))), ((*l_128) = ((l_126 = (0xE41FL < g_58[g_30][(g_30 + 1)])) , p_80)))) & p_80) == (safe_sub_func_int8_t_s_s(((*l_137) = ((*l_136) = (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(0xEF31L, g_125)), g_58[p_80][g_32])))), p_80))), 1L));
                        (*g_12) = (safe_div_func_int16_t_s_s(0L, (l_153 = (((safe_add_func_int32_t_s_s(p_80, ((safe_div_func_int16_t_s_s((*l_104), (safe_mod_func_int8_t_s_s(p_80, (l_148[2][1][2] , l_148[1][0][5]))))) >= (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(1UL, 0)), (((*l_123) = 0x6A86L) == p_80)))))) , p_80) ^ 0x74086701L))));
                    }
                    for (g_138 = 1; (g_138 >= 0); g_138 -= 1)
                    {
                        unsigned short l_154 = 65528UL;
                        unsigned *l_155[6][9] = {{&g_102, &g_102, (void*)0, (void*)0, &g_102, &g_102, &g_102, (void*)0, (void*)0}, {&g_102, &g_102, (void*)0, (void*)0, &g_102, &g_102, &g_102, (void*)0, (void*)0}, {&g_102, &g_102, (void*)0, (void*)0, &g_102, &g_102, &g_102, (void*)0, (void*)0}, {&g_102, &g_102, (void*)0, (void*)0, &g_102, &g_102, &g_102, (void*)0, (void*)0}, {&g_102, &g_102, (void*)0, (void*)0, &g_102, &g_102, &g_102, (void*)0, (void*)0}, {&g_102, &g_102, (void*)0, (void*)0, &g_102, &g_102, &g_102, (void*)0, (void*)0}};
                        int l_156 = 8L;
                        unsigned short *l_173 = &g_129[8];
                        int i, j;
                        l_154 = p_80;
                        l_174 = ((l_156 = (g_58[g_76][p_80] = l_154)) > (g_13 != (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((((safe_unary_minus_func_int32_t_s((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((p_80 , (((g_102 = g_32) , (safe_add_func_uint16_t_u_u((l_154 >= (l_170[6] == &g_87)), ((*l_173) = (~(safe_rshift_func_uint16_t_u_s(((p_80 < (*l_104)) == (*g_23)), l_153))))))) ^ 0UL)) > 0x60A8L), p_80)), g_30)))) == p_80) || g_34), 8L)) , 0L), (*g_23))), g_30))));
                    }
                }
                return p_80;
            }
        }
    }
    (*g_107) = (void*)0;

    ;
    return g_125;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_58[i][j], "g_58[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_129[i], "g_129[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_761[i][j], "g_761[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_826, "g_826", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
