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
   int f0;
   unsigned f1;
   short f2;
   const unsigned char f3;
   unsigned f4;
};


static union U0 g_24 = {0x0F746E33L};
static union U0 *g_23 = &g_24;
static unsigned short g_75 = 0xA7ABL;
static unsigned g_81 = 0UL;
static unsigned short g_82 = 0xEDD6L;
static int g_94[2] = {9L,9L};
static int *g_93 = &g_94[1];
static int **g_107 = &g_93;
static char g_124 = 0x44L;
static char g_126 = 0x6CL;
static unsigned char g_169 = 255UL;
static short g_197 = 0x1E51L;
static unsigned g_209 = 0x23EF68EAL;
static unsigned g_212[4][8] = {{1UL,4294967288UL,4294967288UL,1UL,4294967288UL,4294967288UL,1UL,4294967288UL},{1UL,1UL,0x337E6803L,1UL,1UL,0x337E6803L,1UL,1UL},{4294967288UL,1UL,4294967288UL,4294967288UL,1UL,4294967288UL,4294967288UL,1UL},{1UL,4294967288UL,4294967288UL,1UL,4294967288UL,4294967288UL,1UL,4294967288UL}};
static unsigned short g_226[6] = {65533UL,65533UL,65533UL,65533UL,65533UL,65533UL};
static int *g_230 = (void*)0;
static union U0 g_257 = {0xB2B74988L};
static union U0 *g_256[6][6] = {{&g_24,(void*)0,&g_24,&g_257,&g_257,&g_24},{&g_257,&g_257,(void*)0,&g_257,&g_257,(void*)0},{&g_257,&g_257,(void*)0,&g_257,&g_257,(void*)0},{&g_257,&g_257,(void*)0,&g_257,&g_257,(void*)0},{&g_257,&g_257,(void*)0,&g_257,&g_257,(void*)0},{&g_257,&g_257,(void*)0,&g_257,&g_257,(void*)0}};
static int g_315 = 1L;
static int g_317 = 0x39D9E98FL;
static short g_404[6][8] = {{0xD66CL,0x49A8L,0x7AD2L,(-6L),0xF1EFL,(-6L),0x7AD2L,0x49A8L},{0L,0x49A8L,0x7B2CL,0x7AD2L,0xD4B8L,0x1AD2L,(-1L),(-1L)},{0x7B2CL,0L,(-6L),(-6L),0L,0x7B2CL,(-1L),0xF1EFL},{0x7D51L,(-6L),0x7B2CL,0x1AD2L,0x7AD2L,0xD66CL,0x7AD2L,0x1AD2L},{0x7AD2L,0xD66CL,0x7AD2L,0x1AD2L,0x7B2CL,(-6L),0x7D51L,0xF1EFL},{(-1L),0x7B2CL,0L,(-6L),(-6L),0L,0x7B2CL,(-1L)}};
static int *g_414 = &g_94[1];
static unsigned char *g_463 = &g_169;
static unsigned char **g_462 = &g_463;
static short **g_472 = (void*)0;
static unsigned char g_485[10] = {0x9EL,0x9EL,0x9EL,0x9EL,0x9EL,0x9EL,0x9EL,0x9EL,0x9EL,0x9EL};
static const unsigned short *g_496 = &g_82;
static const unsigned short **g_495 = &g_496;
static unsigned g_590 = 0x1E3664CCL;
static short *g_616[1][5] = {{&g_197,&g_197,&g_197,&g_197,&g_197}};
static short **g_615 = &g_616[0][2];
static union U0 g_633 = {0x05E0FE0EL};
static const int g_662 = (-1L);
static const unsigned char *g_677 = (void*)0;
static const unsigned char **g_676 = &g_677;
static const unsigned char ***g_675 = &g_676;
static const unsigned char ****g_674 = &g_675;
static const union U0 g_728[10][3][3] = {{{{0x187ABE0FL},{0xE425E296L},{0x187ABE0FL}},{{0x37D2BB98L},{0xECBA3305L},{0xF9963021L}},{{0xFFFF4F77L},{1L},{-1L}}},{{{1L},{1L},{0L}},{{0xFFFF4F77L},{0x3351B6F7L},{0x8BD4F872L}},{{0x37D2BB98L},{0L},{0L}}},{{{0x73DA883BL},{0x2A9C2F45L},{0x21008FAEL}},{{0L},{0x37D2BB98L},{0L}},{{0x187ABE0FL},{-5L},{0x8BD4F872L}}},{{{0xF9963021L},{-10L},{0L}},{{-1L},{0xC79AD46EL},{-1L}},{{0L},{-10L},{0xF9963021L}}},{{{0x8BD4F872L},{-5L},{0x187ABE0FL}},{{0L},{0x37D2BB98L},{0L}},{{0x21008FAEL},{0x2A9C2F45L},{0x73DA883BL}}},{{{0L},{0L},{0x37D2BB98L}},{{0x8BD4F872L},{0x3351B6F7L},{0xFFFF4F77L}},{{0L},{1L},{1L}}},{{{-1L},{1L},{0xFFFF4F77L}},{{0xF9963021L},{0xECBA3305L},{0x37D2BB98L}},{{0x187ABE0FL},{0L},{0x73DA883BL}}},{{{0L},{1L},{0L}},{{0x73DA883BL},{0L},{0x187ABE0FL}},{{0x37D2BB98L},{0xECBA3305L},{0xF9963021L}}},{{{0xFFFF4F77L},{1L},{-1L}},{{1L},{1L},{0L}},{{0xFFFF4F77L},{0x3351B6F7L},{0x8BD4F872L}}},{{{0x37D2BB98L},{0L},{0L}},{{0x73DA883BL},{0x2A9C2F45L},{0x21008FAEL}},{{0L},{0x37D2BB98L},{0L}}}};
static const union U0 *g_727 = &g_728[2][2][0];
static union U0 g_781 = {0L};
static unsigned short *g_788 = &g_82;



static unsigned char func_1(void);
static union U0 * func_2(char p_3, union U0 * p_4, unsigned short p_5, union U0 * p_6);
static unsigned func_12(union U0 * p_13, unsigned p_14, union U0 * p_15, union U0 * p_16, unsigned char p_17);
static union U0 * func_18(union U0 * p_19, unsigned char p_20, unsigned char p_21, union U0 * p_22);
static unsigned char func_25(union U0 * p_26);
static const unsigned short func_34(unsigned p_35, char p_36, union U0 * p_37);
static unsigned func_40(union U0 * p_41, union U0 * p_42, union U0 * p_43, int p_44, union U0 * p_45);
static union U0 * func_46(unsigned p_47, const union U0 * p_48, union U0 p_49, unsigned p_50, unsigned p_51);
static union U0 func_53(union U0 * p_54, int p_55, int p_56, union U0 * p_57);
static int * func_65(int * p_66, char p_67);
static unsigned char func_1(void)
{
    char l_7[9];
    int l_52 = 0x7BC6200DL;
    unsigned l_58 = 0x0F61949FL;
    union U0 *l_59 = (void*)0;
    unsigned short l_764 = 65531UL;
    union U0 **l_785 = &g_23;
    unsigned short *l_787 = &l_764;
    union U0 *l_799 = (void*)0;
    int i;
    for (i = 0; i < 9; i++)
        l_7[i] = 0x25L;
    (*l_785) = func_2(((l_7[4] < (((l_7[7] == ((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((3UL && (func_12(func_18(g_23, func_25(((safe_unary_minus_func_int8_t_s((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(func_34((safe_mul_func_uint8_t_u_u(g_24.f3, ((g_24.f2 || func_40(func_46(l_52, &g_24, func_53(&g_24, g_24.f4, l_58, l_59), g_257.f1, g_257.f0), l_59, l_59, g_24.f0, l_59)) < g_24.f0))), l_52, &g_24), l_58)) ^ l_7[2]) || g_169), 9)), 1L)))) , &g_24)), l_52, g_23), l_52, g_23, g_23, l_764) <= g_662)), l_764)), l_58)) != g_662)) == l_58) <= l_764)) , g_633.f1), g_23, l_52, g_23);

        ;
    ;


        for (g_209 = 0; (g_209 <= 5); g_209 += 1)
    {
        char *l_786 = &l_7[2];
        union U0 **l_791 = &g_256[5][2];
        union U0 **l_792 = &l_59;
        int *l_793 = &g_781.f0;
        int l_800 = 0L;
        int i;
        (*g_107) = l_793;

        ;
        for (g_257.f2 = 0; (g_257.f2 <= 5); g_257.f2 += 1)
        {
            char l_798[1][3];
            union U0 *l_801[9][7][4] = {{{&g_633,&g_257,&g_633,&g_24},{&g_633,&g_257,&g_24,&g_633},{&g_633,&g_24,&g_24,&g_633},{&g_633,&g_257,&g_257,&g_633},{&g_257,(void*)0,&g_633,&g_633},{&g_633,&g_633,&g_24,&g_633},{(void*)0,(void*)0,&g_633,&g_633}},{{&g_24,&g_257,&g_257,&g_633},{&g_633,&g_24,&g_24,&g_24},{&g_257,&g_257,&g_24,&g_257},{&g_257,&g_633,&g_257,&g_633},{&g_633,&g_24,&g_633,&g_24},{&g_633,&g_633,&g_257,&g_633},{&g_257,&g_24,&g_24,&g_257}},{{&g_257,&g_257,&g_24,&g_24},{&g_633,&g_633,&g_257,&g_24},{&g_24,&g_24,&g_633,&g_257},{(void*)0,&g_257,&g_24,&g_633},{&g_633,&g_257,&g_633,&g_257},{&g_257,&g_24,&g_257,&g_24},{&g_633,&g_633,&g_24,&g_24}},{{&g_633,&g_257,&g_633,&g_257},{(void*)0,&g_24,&g_633,&g_633},{&g_257,&g_633,&g_633,&g_24},{&g_257,&g_24,&g_633,&g_633},{&g_257,&g_633,&g_633,&g_257},{&g_24,&g_24,(void*)0,&g_24},{(void*)0,&g_24,&g_24,(void*)0}},{{&g_24,&g_633,&g_257,&g_633},{&g_257,&g_633,&g_633,&g_257},{&g_633,(void*)0,&g_24,&g_257},{&g_257,&g_633,(void*)0,&g_633},{&g_257,&g_633,&g_257,(void*)0},{(void*)0,&g_24,&g_633,&g_24},{&g_257,&g_24,&g_633,&g_257}},{{&g_633,(void*)0,&g_633,&g_633},{&g_24,&g_24,(void*)0,&g_24},{&g_24,&g_633,&g_633,(void*)0},{&g_633,&g_24,&g_633,&g_257},{&g_257,&g_257,&g_633,&g_633},{(void*)0,(void*)0,&g_257,&g_633},{&g_257,&g_257,(void*)0,&g_633}},{{&g_257,&g_257,&g_24,(void*)0},{&g_633,&g_257,&g_633,&g_633},{&g_257,&g_257,&g_257,&g_633},{&g_24,(void*)0,&g_24,&g_633},{(void*)0,&g_257,(void*)0,&g_257},{&g_24,&g_24,&g_633,(void*)0},{(void*)0,&g_633,&g_257,&g_24}},{{&g_257,&g_24,&g_257,&g_24},{&g_24,&g_257,(void*)0,&g_24},{&g_257,&g_633,&g_633,&g_633},{&g_633,&g_633,&g_633,&g_633},{&g_257,(void*)0,&g_24,(void*)0},{&g_633,&g_257,&g_24,&g_257},{&g_633,&g_257,&g_24,&g_257}},{{&g_24,&g_257,&g_633,(void*)0},{&g_633,(void*)0,&g_633,&g_633},{&g_257,&g_633,&g_257,&g_633},{&g_633,&g_633,(void*)0,&g_24},{&g_24,&g_257,(void*)0,&g_24},{&g_24,&g_633,&g_633,&g_24},{&g_24,(void*)0,(void*)0,&g_633}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_798[i][j] = 0L;
            }
            (*g_414) = (+((safe_add_func_uint8_t_u_u(((*l_793) = (g_169 > (safe_add_func_int16_t_s_s(((l_7[4] <= l_798[0][1]) >= 0x4D9FB3CDL), ((func_40(((*l_792) = ((*l_785) = (*l_785))), (((*l_793) = g_209) , &g_781), ((*l_791) = func_2(g_212[1][1], l_799, l_800, l_801[2][6][3])), g_590, &g_257) , (**g_462)) > (**g_462)))))), l_798[0][1])) > l_7[2]));

            ;
            ;
                    }

        ;
                for (g_781.f2 = 4; (g_781.f2 >= 0); g_781.f2 -= 1)
        {
            char l_814 = 0x92L;
            unsigned char l_815[9] = {0xC2L,0xC2L,0xC2L,0xC2L,0xC2L,0xC2L,0xC2L,0xC2L,0xC2L};
            union U0 *l_816 = (void*)0;
            int i;
            for (g_126 = 0; (g_126 <= 5); g_126 += 1)
            {
                union U0 *l_802 = (void*)0;
                int l_812 = 3L;
                unsigned char *l_813 = &g_485[0];
                int i, j;
                (*g_414) = (func_53(func_2(((*l_786) = l_7[(g_126 + 1)]), func_2(g_226[3], l_802, ((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((~((safe_mod_func_uint32_t_u_u((~(func_25(func_2((0x91L | (((((**g_462) = ((l_812 || (+l_52)) & (l_764 < (*g_496)))) != (l_813 != l_813)) , l_812) <= g_728[2][2][0].f2)), (*l_785), (*g_496), &g_257)) == 4294967290UL)), l_814)) != 0L)))), 5)) ^ l_764) < l_812), 65535UL)) & l_815[5]), 7)) != 0UL), l_816), (**g_495), l_802), l_812, l_815[5], (*l_792)) , (*g_414));
                (*g_107) = (*g_107);
            }
        }
    }

    ;
    ;

        return l_52;
}







static union U0 * func_2(char p_3, union U0 * p_4, unsigned short p_5, union U0 * p_6)
{
    union U0 * const l_780 = &g_781;
    union U0 * const *l_779 = &l_780;
    union U0 * const **l_778 = &l_779;
    int l_782 = (-1L);
    union U0 *l_783 = (void*)0;
    union U0 **l_784 = &l_783;
    (*l_784) = ((((&p_6 != ((*l_778) = &g_256[5][5])) , l_782) , func_25(p_6)) , l_783);

    ;
    return &g_781;


}







static unsigned func_12(union U0 * p_13, unsigned p_14, union U0 * p_15, union U0 * p_16, unsigned char p_17)
{
    int l_765 = (-8L);
    union U0 *l_766 = &g_24;
    unsigned *l_767 = &g_633.f1;
    unsigned short *l_770[7];
    unsigned short **l_769 = &l_770[3];
    unsigned short ***l_768 = &l_769;
    char *l_771 = &g_124;
    int i;
    for (i = 0; i < 7; i++)
        l_770[i] = &g_226[3];
    (*g_107) = ((((*l_767) = ((p_17 | (((((*l_771) = (((p_14 , p_17) , (void*)0) == l_768)) < l_765) < g_404[2][7]) <= p_14)) <= l_765)) | g_728[2][2][0].f0) , l_767);

    ;
    (*g_93) = (safe_sub_func_uint16_t_u_u((p_17 & (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((*g_496), p_14)), 0x41CE714CL))), (**g_495)));
    return l_765;
}







static union U0 * func_18(union U0 * p_19, unsigned char p_20, unsigned char p_21, union U0 * p_22)
{
    unsigned l_608 = 0x3726A269L;
    union U0 l_609 = {0xEA56B209L};
    unsigned *l_610 = &g_209;
    short **l_611 = (void*)0;
    short ***l_612 = &l_611;
    short *l_614 = &g_197;
    short **l_613[1];
    int l_617 = 0x84F2CC51L;
    int *l_621 = &g_94[1];
    unsigned l_629[8][4] = {{0x2CC872B2L,0xE68DF770L,0xE68DF770L,0x2CC872B2L},{0xE68DF770L,0x2CC872B2L,4UL,0x8159DD8CL},{0xE68DF770L,4UL,0xE68DF770L,0x40B1FF45L},{0x2CC872B2L,0x8159DD8CL,0x40B1FF45L,0x40B1FF45L},{4UL,4UL,0x49EEDA3DL,0x8159DD8CL},{0x8159DD8CL,0x2CC872B2L,0x49EEDA3DL,0x2CC872B2L},{4UL,0xE68DF770L,0x40B1FF45L,0x49EEDA3DL},{0x2CC872B2L,0xE68DF770L,0xE68DF770L,0x2CC872B2L}};
    union U0 *l_632 = &g_633;
    unsigned char **l_666 = &g_463;
    int l_717 = 0L;
    const short *l_720 = &g_404[1][6];
    int *l_749 = (void*)0;
    unsigned short *l_759 = &g_75;
    unsigned short **l_758 = &l_759;
    int l_760 = (-1L);
    int *l_761 = &g_317;
    int l_762[7][9] = {{1L,0x418C98ADL,0L,1L,(-1L),(-2L),0xF5C75DB2L,(-2L),(-1L)},{(-10L),8L,8L,(-10L),(-1L),3L,0x6D6E9CE1L,(-1L),0x6D6E9CE1L},{0xF5C75DB2L,(-1L),0L,0L,(-1L),0xF5C75DB2L,(-1L),0x418C98ADL,0x1F3B8D0AL},{0x802CF01BL,3L,(-1L),(-1L),(-1L),(-1L),3L,0x802CF01BL,(-1L)},{0x1F3B8D0AL,0L,(-5L),(-1L),(-1L),(-1L),(-1L),(-5L),0L},{(-1L),0x802CF01BL,0x5F5398F7L,(-1L),8L,0x6D6E9CE1L,0x6D6E9CE1L,8L,(-1L)},{1L,6L,1L,(-2L),(-1L),0x1F3B8D0AL,0xF5C75DB2L,0xF5C75DB2L,0x1F3B8D0AL}};
    union U0 *l_763[6] = {&l_609,&g_633,&l_609,&l_609,&g_633,&l_609};
    int i, j;
    for (i = 0; i < 1; i++)
        l_613[i] = &l_614;
    if ((safe_unary_minus_func_uint32_t_u(func_34((((safe_add_func_int8_t_s_s(func_34(p_21, l_608, (l_609 , &g_24)), (0UL == (((*l_610) = l_609.f4) > (l_617 = ((((*l_612) = l_611) != (g_615 = l_613[0])) && 0UL)))))) , 1UL) && p_21), g_212[3][4], g_23))))
    {
        unsigned l_624 = 9UL;
        unsigned short *l_630[3][7];
        int l_631 = (-9L);
        union U0 *l_669 = &g_633;
        union U0 ***l_672 = (void*)0;
        unsigned l_697 = 1UL;
        int l_744 = (-9L);
        int *l_746 = &l_717;
        int **l_747 = (void*)0;
        int **l_748 = &l_746;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 7; j++)
                l_630[i][j] = &g_226[3];
        }
        for (g_81 = 0; (g_81 != 43); g_81 = safe_add_func_uint8_t_u_u(g_81, 3))
        {
            int *l_620 = &g_257.f0;
            l_621 = l_620;

            ;
            if ((*l_620))
                continue;
        }

        ;
        l_632 = (((l_631 = ((*l_614) = (safe_add_func_uint16_t_u_u((l_624 != l_624), ((*l_621) = (l_624 & (safe_lshift_func_uint8_t_u_s((*l_621), ((safe_sub_func_int32_t_s_s((l_629[0][2] == (((**g_462) = (**g_462)) >= 0x22L)), (l_624 | ((*g_496) | 0xAB44L)))) ^ 0x3FL))))))))) , (*g_23)) , (void*)0);

                ;
        for (g_24.f2 = (-18); (g_24.f2 > (-1)); ++g_24.f2)
        {
            short l_665 = 1L;
            union U0 **l_670 = &l_632;
            int l_671 = 9L;
            int l_715 = 0x466F3723L;
            int l_716 = 0x7A4A0AA8L;
            for (g_257.f1 = 0; (g_257.f1 <= 5); g_257.f1 += 1)
            {
                short l_652[3];
                int l_655 = 0xC8444876L;
                int i;
                for (i = 0; i < 3; i++)
                    l_652[i] = 0x2494L;
                for (g_633.f0 = 5; (g_633.f0 >= 0); g_633.f0 -= 1)
                {
                    int *l_644[8] = {(void*)0,&l_609.f0,(void*)0,(void*)0,&l_609.f0,(void*)0,(void*)0,&l_609.f0};
                    int i;
                    for (l_609.f0 = 5; (l_609.f0 >= 1); l_609.f0 -= 1)
                    {
                        (*g_414) = 0xE3392ED3L;
                        return p_22;




                    }

                                        if ((g_226[g_257.f1] < (safe_add_func_int32_t_s_s(g_226[g_633.f0], (((safe_add_func_int32_t_s_s((*l_621), p_21)) & (((*g_463) != 0xA3L) || 2L)) != (safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(g_226[g_633.f0], p_20)), p_20)))))))
                    {
                        unsigned char ** const **l_645 = (void*)0;
                        unsigned char ** const **l_646 = (void*)0;
                        unsigned char ** const l_649 = (void*)0;
                        unsigned char ** const *l_648 = &l_649;
                        unsigned char ** const **l_647 = &l_648;
                        unsigned char ***l_651 = (void*)0;
                        unsigned char ****l_650 = &l_651;
                        (*g_107) = l_644[5];

                        ;
                        (*g_414) = (((*l_647) = &g_462) == ((*l_650) = &g_462));

                        ;
                        ;
                        l_652[0] = p_21;
                        if ((*l_621))
                            continue;
                    }
                    else
                    {
                        char l_658 = 0x00L;
                        int *l_659 = &g_317;
                        const int *l_661 = &g_662;
                        const int **l_660 = &l_661;
                        const int *l_664 = &g_94[1];
                        const int **l_663 = &l_664;
                        (*g_414) = (*g_414);
                        (*l_663) = (((safe_rshift_func_uint16_t_u_u(((l_655 = (**g_615)) , (*g_496)), (**g_495))) > (-1L)) , ((*l_660) = (((safe_add_func_int16_t_s_s(l_658, ((func_40((((*l_659) = p_20) , &g_257), p_22, p_19, g_226[5], &g_24) || p_21) ^ 0xFF1B1D0DL))) & 4294967287UL) , &l_655)));

                        ;
                        ;
                        ;
                    }

                    ;
                    if (p_21)
                        continue;
                }


                (*g_414) = l_665;
                (*g_107) = &l_631;

                ;
            }

                        (*l_621) = ((void*)0 == l_666);

                        if ((((l_671 = ((safe_add_func_int32_t_s_s(l_665, 4294967288UL)) , (l_665 || ((((*l_670) = l_669) == (p_20 , (void*)0)) == func_25(&g_633))))) , l_672) == (void*)0))
            {
                short l_673 = 0xEF29L;
                int *l_688[8][1][2] = {{{&g_633.f0,(void*)0}},{{&l_609.f0,(void*)0}},{{&g_633.f0,(void*)0}},{{&l_609.f0,(void*)0}},{{&g_633.f0,(void*)0}},{{&l_609.f0,(void*)0}},{{&g_633.f0,(void*)0}},{{&l_609.f0,(void*)0}}};
                short l_703 = (-6L);
                char *l_714[9] = {(void*)0,&g_124,(void*)0,&g_124,(void*)0,&g_124,(void*)0,&g_124,(void*)0};
                union U0 *l_723[4] = {&g_257,&g_257,&g_257,&g_257};
                int i, j, k;
                if (l_673)
                {
                    unsigned short l_686[6] = {0x8005L,0x8005L,0x091DL,0x8005L,0x8005L,0x091DL};
                    int *l_687 = (void*)0;
                    int i;
                    (*l_621) = (func_25(p_22) <= l_631);
                    for (g_590 = 0; (g_590 <= 1); g_590 += 1)
                    {
                        int i;
                        (*g_107) = &g_94[g_590];

                        ;
                        (*g_107) = l_688[3][0][1];

                        ;
                        (*l_621) = p_21;
                    }


                    return &g_24;




                }
                else
                {
                    unsigned l_692 = 4UL;
                    for (l_609.f2 = 17; (l_609.f2 != 21); ++l_609.f2)
                    {
                        char *l_691[7] = {&g_126,&g_126,&g_126,&g_126,&g_126,&g_126,&g_126};
                        int i;
                        (*g_107) = &l_617;

                        ;
                        (**g_107) = l_692;
                    }
                    if (p_20)
                        continue;
                    l_609.f0 = (safe_sub_func_uint32_t_u_u(((**g_495) | (1UL >= (((*l_621) = ((safe_mod_func_int8_t_s_s(((l_697 , &l_688[3][0][1]) != ((safe_add_func_uint16_t_u_u(l_671, (**g_615))) , (void*)0)), (((*g_463) = l_671) && 6UL))) | p_21)) ^ p_20))), l_671));

                                        for (g_82 = 8; (g_82 == 7); g_82 = safe_sub_func_uint16_t_u_u(g_82, 4))
                    {
                        int *l_702 = (void*)0;
                        (*g_107) = l_702;

                        ;
                        if (l_703)
                            continue;
                    }
                }

                                if (((0xEE18DEABL && ((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(func_25((*l_670)), ((*p_22) , (l_671 == l_665)))), ((safe_mod_func_int16_t_s_s((((l_716 = ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((p_20 || (l_715 = 0x10L)), 8L)), 2)) , 1UL)) && p_20) > p_21), p_21)) || 8L))) , 0x372A8D5FL)) == l_717))
                {
                    (*g_414) = 0L;
                    for (l_716 = 0; (l_716 < (-28)); --l_716)
                    {
                        (*l_621) = (((((*g_615) = (*g_615)) != l_720) , (void*)0) == (void*)0);
                        return p_19;




                    }
                }
                else
                {
                    if ((safe_add_func_int32_t_s_s(p_21, func_40(&l_609, p_19, p_19, p_20, &g_633))))
                    {
                        const union U0 **l_726 = (void*)0;
                        int l_729 = 0x167C92FAL;
                        (*l_621) = (((((safe_sub_func_int32_t_s_s(func_40(p_19, (func_53(l_723[1], p_20, l_729, &g_24) , (void*)0), p_19, p_21, &g_24), p_20)) && l_665) > 0L) != p_21) , (*g_414));
                        (*g_414) = ((p_21 <= (**g_462)) && (**g_615));
                    }
                    else
                    {
                        unsigned l_732[2][5] = {{4294967291UL,0x2E80832CL,0x2E80832CL,4294967291UL,0x2E80832CL},{4294967291UL,4294967291UL,0x4F02239FL,4294967291UL,4294967291UL}};
                        int i, j;
                        (*g_107) = (void*)0;

                        ;
                        l_671 = (((((&l_666 == (void*)0) >= (safe_add_func_int32_t_s_s(0xBF37E12FL, l_732[0][4]))) || (*g_463)) != (p_21 = ((((((g_197 > (func_53(&g_633, g_226[4], ((g_81 < 0x91L) <= l_732[0][4]), &l_609) , 9L)) > (-5L)) , 0x7542L) ^ 8L) , 2L) < g_315))) > 0UL);
                        return &g_633;



                    }

                    ;
                }
                for (l_671 = 6; (l_671 >= 0); l_671 -= 1)
                {
                    (*l_621) = l_697;
                    (*g_107) = l_688[3][0][1];

                    ;
                    (*g_414) = p_21;
                    (*g_107) = &l_631;

                    ;
                }
            }
            else
            {
                short **l_743 = &g_616[0][1];
                int l_745 = (-9L);
                l_746 = &l_631;

                ;
                (*g_107) = &g_94[1];

                ;
            }
            if ((*l_746))
                break;
        }


                ;
        ;
        (*l_748) = ((*g_107) = (void*)0);

        ;
        ;
    }
    else
    {
        (*l_621) = (*g_414);
    }

        ;
    ;
    ;
    g_24.f0 = ((*l_621) = (-8L));

        (*l_621) = (safe_add_func_int16_t_s_s(((*l_614) = (safe_sub_func_uint8_t_u_u((*g_463), func_40(p_19, &l_609, &l_609, (l_629[0][2] , (((safe_rshift_func_uint16_t_u_s(0UL, (!(((safe_mod_func_int8_t_s_s((((((*l_761) = (((l_614 != ((*l_758) = l_614)) , ((l_760 != p_20) < p_20)) <= 0UL)) , (**g_615)) , l_762[4][3]) && 0x01FA0122L), 0x58L)) == p_20) != p_20)))) , p_21) , 0L)), l_763[1])))), p_21));

    ;
    ;
    return p_19;



}







static unsigned char func_25(union U0 * p_26)
{
    unsigned char l_604 = 255UL;
    (*g_414) = l_604;
    return l_604;
}







static const unsigned short func_34(unsigned p_35, char p_36, union U0 * p_37)
{
    unsigned l_461 = 1UL;
    int *l_569 = &g_94[0];
    const unsigned l_592 = 0UL;
    union U0 *l_598 = &g_257;
    union U0 **l_603 = &g_256[5][5];
    for (g_257.f1 = 23; (g_257.f1 < 55); g_257.f1 = safe_add_func_int16_t_s_s(g_257.f1, 1))
    {
        unsigned l_469[9][10] = {{4294967290UL,0x3622A38EL,0x4A12D04DL,4294967295UL,0UL,0UL,0x7BEECD8AL,0x3622A38EL,0UL,0UL},{0x11E0BCFCL,0UL,1UL,0x3622A38EL,0x3622A38EL,1UL,0UL,0x11E0BCFCL,6UL,4294967290UL},{0x3622A38EL,0x7BEECD8AL,0UL,0UL,4294967295UL,0x4A12D04DL,0x3622A38EL,4294967290UL,4294967295UL,0x3622A38EL},{4294967295UL,0x06284500L,0UL,4294967295UL,0x06284500L,4294967290UL,0x4A12D04DL,0x11E0BCFCL,0x4A12D04DL,4294967290UL},{0UL,4294967290UL,1UL,4294967290UL,0UL,0x5471BC23L,0UL,0x3622A38EL,0x5471BC23L,0x13F28D15L},{0x13F28D15L,0x7BEECD8AL,0x4A12D04DL,0x13F28D15L,0UL,0UL,0x66ABAF1CL,4294967295UL,4294967295UL,0x13F28D15L},{4294967295UL,0x13F28D15L,4294967290UL,0x7BEECD8AL,0x3622A38EL,0UL,0UL,0x3622A38EL,0x7BEECD8AL,0UL},{4294967290UL,4294967290UL,4294967289UL,0x1B037790L,0x66ABAF1CL,0x92CB66C6L,0UL,0UL,4294967289UL,0x06284500L},{0x13F28D15L,4294967295UL,0x9C774613L,0UL,0x87F8DDB0L,0x4A12D04DL,0UL,4294967295UL,0UL,0x13F28D15L}};
        int l_486 = 0xE2B3784BL;
        union U0 *l_499 = &g_257;
        int *l_508 = (void*)0;
        int i, j;
        (*g_107) = (void*)0;

        ;
        for (g_124 = 0; (g_124 != (-16)); g_124 = safe_sub_func_uint32_t_u_u(g_124, 2))
        {
            unsigned char **l_464 = &g_463;
            int l_470 = 8L;
            if ((*g_414))
            {
                char *l_471 = &g_126;
                short *l_474 = &g_257.f2;
                short **l_473 = &l_474;
                int *l_475 = &l_470;
                unsigned char *l_484[8][7] = {{&g_485[9],&g_485[4],&g_485[9],&g_485[4],&g_485[9],&g_485[9],&g_485[4]},{&g_485[7],&g_485[1],&g_485[7],&g_485[4],&g_485[4],&g_485[7],&g_485[1]},{&g_485[4],&g_485[1],&g_485[9],&g_485[9],&g_485[1],&g_485[4],&g_485[1]},{&g_485[7],&g_485[4],&g_485[4],&g_485[7],&g_485[1],&g_485[7],&g_485[4]},{&g_485[9],&g_485[9],&g_485[4],&g_485[9],&g_485[4],&g_485[9],&g_485[9]},{&g_485[9],&g_485[4],&g_485[9],&g_485[4],&g_485[9],&g_485[9],&g_485[4]},{&g_485[7],&g_485[1],&g_485[7],&g_485[4],&g_485[4],&g_485[7],&g_485[1]},{&g_485[4],&g_485[1],&g_485[9],&g_485[9],&g_485[1],&g_485[4],&g_485[1]}};
                int i, j;
                for (g_126 = 5; (g_126 >= 1); g_126 -= 1)
                {
                    (*g_414) = (l_461 = p_35);
                    l_464 = g_462;
                    (*g_414) = 0x8E2DC144L;
                    (*g_414) = p_35;
                }
                (*l_475) = ((*g_414) = (safe_sub_func_int32_t_s_s(((l_461 < (safe_sub_func_uint8_t_u_u(p_35, l_469[8][9]))) == ((void*)0 != &g_404[1][6])), ((((g_212[2][7] ^ ((p_36 , (((((*l_471) = l_470) || 1UL) < g_94[1]) || p_36)) ^ p_36)) == l_461) , g_472) == l_473))));
                (*l_475) = ((*g_414) = p_36);
                l_486 = (func_53(p_37, (*l_475), (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((*l_475), 6)) , (((*g_414) = ((safe_lshift_func_uint8_t_u_s(0xD4L, (((**l_464) = 255UL) , p_35))) || ((safe_rshift_func_uint8_t_u_s((!1UL), 4)) >= (*g_414)))) || ((g_485[9] = ((*g_463) = (&l_464 == &g_462))) != l_470))), l_469[4][9])), &g_257) , (-10L));
            }
            else
            {
                unsigned l_491 = 4UL;
                for (g_24.f4 = (-23); (g_24.f4 > 33); ++g_24.f4)
                {
                    short *l_492 = &g_404[3][6];
                    if ((safe_mod_func_uint8_t_u_u((g_81 == (!(g_257.f3 && ((*l_492) = (l_491 , 0x6BEDL))))), p_36)))
                    {
                        unsigned *l_497 = &l_469[5][9];
                        unsigned *l_498[10][7][3] = {{{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209}},{{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0}},{{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209}},{{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0}},{{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209}},{{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0}},{{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209}},{{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0}},{{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209}},{{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0},{&g_209,&g_24.f4,&g_209},{(void*)0,(void*)0,(void*)0}}};
                        int i, j, k;
                        (*g_414) = (((g_124 && ((**l_464) = (p_36 , (safe_lshift_func_int16_t_s_u((-1L), (g_495 != (void*)0)))))) <= (p_35 = ((*l_497) = p_35))) && l_470);
                    }
                    else
                    {
                        union U0 **l_500[9][2] = {{&g_256[5][5],(void*)0},{&g_256[5][5],&g_256[5][5]},{(void*)0,&g_256[5][5]},{&g_256[5][5],(void*)0},{&g_256[5][5],&g_23},{(void*)0,&g_256[5][5]},{&g_23,(void*)0},{&g_23,&g_256[5][5]},{(void*)0,&g_23}};
                        int i, j;
                        (*g_414) = ((p_37 = l_499) == (void*)0);

                        ;
                        (*g_414) = (safe_mod_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s((g_226[3] = (**g_495)), 15)) , (~(safe_rshift_func_uint16_t_u_u((**g_495), 4)))) ^ g_315), p_36));
                    }
                    l_508 = func_65(func_65(&l_486, p_36), ((p_36 != (safe_unary_minus_func_uint8_t_u((**g_462)))) , p_36));

                    ;
                    (*g_414) = l_470;
                }

                                (*g_414) = l_469[4][8];
            }
        }

        ;
        (*g_414) = 1L;
    }

        ;
    if (p_35)
    {
        unsigned l_510 = 0xBBF3798FL;
        int l_511 = 0L;
        union U0 *l_545 = (void*)0;
        int *l_550 = &g_94[0];
        for (g_257.f4 = 0; (g_257.f4 <= 5); g_257.f4 += 1)
        {
            short ***l_509 = &g_472;
            (*l_509) = g_472;
            for (g_24.f0 = 5; (g_24.f0 >= 0); g_24.f0 -= 1)
            {
                int i;
                (*g_414) = g_226[g_257.f4];
                if (l_510)
                    continue;
                l_511 = ((*g_414) = p_36);
            }

                    }

                (*g_107) = &l_511;

        ;
        if (((*g_414) = p_35))
        {
            short *l_514 = (void*)0;
            int *l_521 = &g_94[1];
            short l_538 = (-4L);
            int *l_541 = (void*)0;
            int *l_542 = &g_24.f0;
            (*g_414) = ((safe_sub_func_int16_t_s_s((g_404[5][6] = g_94[1]), (safe_add_func_int32_t_s_s((p_36 == ((((p_36 & g_82) <= (safe_lshift_func_uint8_t_u_s(0UL, 0))) || (((*g_93) < l_461) <= p_35)) && ((((**g_107) & 4294967295UL) || p_36) && p_36))), g_315)))) != (-1L));
            for (g_24.f1 = 0; (g_24.f1 > 51); ++g_24.f1)
            {
                (*g_107) = l_521;

                ;
            }

                        ;
            if ((+p_36))
            {
                unsigned char l_537[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_537[i] = 0UL;
                for (g_24.f1 = 0; (g_24.f1 <= 23); g_24.f1++)
                {
                    if ((*g_414))
                        break;
                    for (g_257.f4 = 0; (g_257.f4 >= 49); ++g_257.f4)
                    {
                        union U0 *l_527 = &g_257;
                        union U0 **l_536 = &g_256[3][0];
                        int *l_539 = &l_511;
                        (*l_539) = ((*g_414) = (safe_unary_minus_func_int32_t_s(func_40(&g_257, p_37, l_527, ((!(func_40(p_37, ((*l_536) = ((safe_sub_func_int32_t_s_s((*g_93), (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((p_36 || (l_461 | (*l_521))) || (safe_sub_func_uint8_t_u_u((**g_462), p_35))), (*g_463))), 6)))) , (void*)0)), &g_257, (*l_521), p_37) , l_537[1])) == l_538), &g_24))));

                        ;
                        (*g_107) = (*g_107);
                    }

                    ;
                    (*g_107) = l_521;

                    ;
                    if (l_510)
                        continue;
                }
            }
            else
            {
                const int l_540[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                int i;
                return l_540[6];


            }
            (*l_542) = ((**g_107) = p_35);

                    }
        else
        {
            return p_35;


        }

                ;
        for (g_169 = 0; (g_169 >= 36); g_169 = safe_add_func_uint16_t_u_u(g_169, 2))
        {
            short l_552 = 0L;
            (*g_107) = (*g_107);
        }
    }
    else
    {
        int *l_597 = (void*)0;
        for (g_169 = 0; (g_169 > 23); g_169 = safe_add_func_uint8_t_u_u(g_169, 7))
        {
            l_569 = ((*g_107) = (void*)0);

            ;
            ;
        }

        ;
        for (g_24.f2 = (-6); (g_24.f2 <= 19); ++g_24.f2)
        {
            union U0 *l_599[3];
            unsigned short *l_602 = &g_75;
            int i;
            for (i = 0; i < 3; i++)
                l_599[i] = &g_24;
            (*g_107) = l_569;

            ;
            (*g_107) = l_597;

            ;
        }
        (*g_414) = ((+(p_35 <= p_36)) , 0xCF3E7538L);
    }

        ;
    (*l_603) = &g_24;
    return p_36;
}







static unsigned func_40(union U0 * p_41, union U0 * p_42, union U0 * p_43, int p_44, union U0 * p_45)
{
    int *l_451 = &g_24.f0;
    unsigned char *l_454 = &g_169;
    char *l_455 = (void*)0;
    char *l_456 = &g_124;
    (*g_107) = l_451;

    ;
    (*g_414) = (safe_rshift_func_int8_t_s_s((p_44 ^ p_44), ((*l_456) = ((void*)0 == l_454))));
    return p_44;
}







static union U0 * func_46(unsigned p_47, const union U0 * p_48, union U0 p_49, unsigned p_50, unsigned p_51)
{
    int *l_269[10] = {&g_94[1],&g_94[1],&g_94[1],&g_94[0],&g_94[1],&g_94[1],&g_94[1],&g_94[1],&g_94[0],&g_94[1]};
    unsigned short *l_270 = &g_226[3];
    unsigned char *l_275 = &g_169;
    int **l_276 = &l_269[4];
    unsigned char **l_284[6][2][7] = {{{&l_275,&l_275,&l_275,(void*)0,&l_275,&l_275,(void*)0},{&l_275,&l_275,&l_275,(void*)0,&l_275,(void*)0,&l_275}},{{&l_275,&l_275,&l_275,(void*)0,&l_275,&l_275,(void*)0},{&l_275,&l_275,&l_275,(void*)0,&l_275,(void*)0,&l_275}},{{&l_275,&l_275,&l_275,(void*)0,&l_275,&l_275,(void*)0},{&l_275,&l_275,&l_275,(void*)0,&l_275,(void*)0,&l_275}},{{&l_275,&l_275,&l_275,(void*)0,&l_275,&l_275,(void*)0},{&l_275,&l_275,&l_275,(void*)0,&l_275,(void*)0,&l_275}},{{&l_275,&l_275,&l_275,&l_275,(void*)0,(void*)0,&l_275},{&l_275,(void*)0,&l_275,(void*)0,&l_275,(void*)0,&l_275}},{{&l_275,&l_275,&l_275,&l_275,(void*)0,(void*)0,&l_275},{&l_275,(void*)0,&l_275,(void*)0,&l_275,(void*)0,&l_275}}};
    int l_285 = (-1L);
    const unsigned l_356 = 1UL;
    union U0 *l_450 = (void*)0;
    int i, j, k;
    (*l_276) = func_65(((*l_276) = ((*g_107) = func_65(func_65(func_65(((*g_107) = func_65(l_269[4], ((&l_269[6] == (((*l_270) = 0xE654L) , &l_269[1])) < (((p_47 && (((safe_mod_func_int16_t_s_s((p_51 , ((g_257.f0 = (safe_add_func_int32_t_s_s(((**g_107) = (*g_93)), (((*l_275) = g_257.f0) ^ (g_24.f1 || 0xE6L))))) > p_49.f1)), 1L)) < p_49.f2) >= 0x58L)) < 4L) , g_257.f2)))), p_49.f4), g_24.f4), g_24.f1))), g_124);

    ;
    for (p_49.f0 = 0; (p_49.f0 > (-6)); p_49.f0 = safe_sub_func_uint32_t_u_u(p_49.f0, 4))
    {
        union U0 *l_281 = &g_24;
        unsigned char **l_282 = &l_275;
        unsigned char ***l_283[1];
        int i;
        for (i = 0; i < 1; i++)
            l_283[i] = (void*)0;
        (*g_107) = func_65((*g_107), (p_49.f0 , p_49.f4));
        for (g_209 = 0; (g_209 <= 1); g_209 += 1)
        {
            for (g_126 = 0; (g_126 <= 1); g_126 += 1)
            {
                int i;
                (**g_107) = (safe_mod_func_uint32_t_u_u(0x53021139L, g_94[g_126]));

                return l_281;


            }
        }
        l_284[1][0][5] = l_282;
    }
    if (l_285)
    {
        unsigned short l_295 = 0x2E38L;
        unsigned char **l_318 = &l_275;
        unsigned char **l_320 = (void*)0;
        int l_350 = (-7L);
        int l_353 = 0xE9DCE7C9L;
        int **l_366 = &g_93;
        unsigned short **l_373[9] = {&l_270,&l_270,&l_270,&l_270,&l_270,&l_270,&l_270,&l_270,&l_270};
        int *l_386 = &g_24.f0;
        int i;
        for (g_126 = (-3); (g_126 == 25); ++g_126)
        {
            int l_288 = (-1L);
            int l_296 = 0x6452AC40L;
            (*g_107) = func_65(func_65((l_288 , (*g_107)), p_51), p_51);
        }
        (*g_107) = func_65(((*g_107) = (*g_107)), g_24.f4);
        for (p_49.f0 = 0; (p_49.f0 >= 22); p_49.f0++)
        {
            const int *l_306 = &l_285;
            int l_311 = (-5L);
            unsigned short *l_327 = &g_82;
            char *l_348 = (void*)0;
            char *l_349[7][3][7] = {{{&g_126,&g_126,&g_124,&g_126,&g_124,&g_126,&g_126},{(void*)0,&g_126,(void*)0,&g_124,&g_126,&g_124,&g_126},{(void*)0,&g_126,&g_124,&g_126,(void*)0,&g_126,&g_124}},{{&g_126,&g_126,(void*)0,&g_126,(void*)0,&g_126,&g_126},{&g_124,&g_126,&g_124,&g_126,&g_126,&g_126,&g_126},{&g_124,&g_126,&g_126,&g_124,(void*)0,(void*)0,&g_124}},{{(void*)0,&g_126,&g_124,&g_126,(void*)0,&g_126,&g_124},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126,&g_124},{&g_126,&g_126,&g_124,&g_126,&g_124,&g_126,&g_126}},{{&g_126,&g_126,&g_124,&g_124,&g_124,&g_124,&g_126},{(void*)0,&g_126,&g_124,&g_126,(void*)0,&g_126,&g_124},{&g_124,&g_126,&g_124,&g_126,&g_126,&g_126,&g_126}},{{&g_124,&g_126,&g_124,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_124,&g_126,(void*)0,(void*)0},{(void*)0,&g_126,&g_124,&g_126,(void*)0,&g_126,&g_124}},{{(void*)0,&g_126,&g_126,&g_126,&g_124,&g_126,(void*)0},{&g_126,&g_126,&g_124,&g_126,&g_124,&g_126,&g_126},{(void*)0,&g_126,(void*)0,&g_124,&g_126,&g_124,&g_126}},{{(void*)0,&g_126,&g_124,&g_126,(void*)0,&g_126,&g_124},{&g_126,&g_126,(void*)0,&g_126,(void*)0,&g_126,&g_126},{&g_124,&g_126,&g_124,&g_126,&g_126,&g_126,&g_126}}};
            unsigned char l_363 = 246UL;
            union U0 *l_389 = &g_257;
            int i, j, k;
            for (g_257.f0 = 18; (g_257.f0 > 21); g_257.f0++)
            {
                const unsigned short l_303[9] = {0x2CD6L,0x2CD6L,0x2CD6L,0x2CD6L,0x2CD6L,0x2CD6L,0x2CD6L,0x2CD6L,0x2CD6L};
                int *l_330 = &g_94[1];
                int l_340[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_340[i] = 0x2DB1C902L;
                if ((safe_add_func_uint32_t_u_u(g_257.f3, l_303[1])))
                {
                    union U0 **l_308 = &g_256[5][5];
                    int *l_314 = &g_315;
                    int *l_316 = &g_317;
                    unsigned char ***l_319[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_319[i] = (void*)0;
                    for (g_126 = 0; (g_126 == (-7)); g_126 = safe_sub_func_uint8_t_u_u(g_126, 5))
                    {
                        const int **l_307 = &l_306;
                        (*l_307) = l_306;
                    }
                    (*l_308) = &p_49;
                    l_311 = (safe_add_func_int32_t_s_s((p_49.f2 , 0x9F9E21FBL), 8UL));
                    l_320 = (((*l_316) = ((*l_314) = (safe_lshift_func_int16_t_s_u(p_49.f0, 0)))) , l_318);

                    ;
                }
                else
                {
                    char l_341[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_341[i] = 0x26L;
                    if ((g_94[1] = (safe_rshift_func_uint16_t_u_s(l_295, (((g_81 && (~((safe_rshift_func_uint8_t_u_u(g_212[1][1], p_49.f0)) || ((((safe_sub_func_int16_t_s_s((l_270 != l_327), p_49.f4)) && p_49.f4) < (safe_sub_func_uint16_t_u_u((*l_306), (-1L)))) && p_49.f4)))) ^ g_317) <= 5L)))))
                    {
                        unsigned char l_337 = 255UL;
                        g_94[1] = ((g_257.f0 && p_49.f4) | 0UL);
                        (*g_107) = func_65(l_330, (**l_276));

                        ;
                        (*l_276) = func_65(func_65((*g_107), (safe_add_func_int16_t_s_s((((((safe_mul_func_uint16_t_u_u((&g_197 != (void*)0), ((safe_rshift_func_int8_t_s_u(l_337, g_24.f1)) >= g_24.f3))) != 0UL) >= g_81) < (safe_sub_func_int32_t_s_s((**g_107), (*l_330)))) != g_24.f4), (*l_330)))), l_340[1]);
                    }
                    else
                    {
                        l_341[3] = p_49.f0;
                    }
                    for (p_50 = (-6); (p_50 <= 18); p_50 = safe_add_func_uint8_t_u_u(p_50, 4))
                    {
                        char *l_344 = &g_124;
                        int l_345 = 0x926CAD5DL;
                        (*l_276) = func_65((*g_107), ((*l_344) = (g_257.f1 , (*l_330))));
                        if (l_345)
                            continue;
                        (*g_107) = (*g_107);
                    }
                }
            }
            if ((&g_230 != ((((((((g_126 = 0x57L) && ((((safe_mod_func_int8_t_s_s((l_350 = g_24.f4), (*l_306))) >= ((*g_93) || p_51)) , (((*l_275) = (253UL && (((safe_rshift_func_uint8_t_u_u(((((l_353 | (((safe_rshift_func_uint8_t_u_s(g_82, 5)) | p_49.f1) , 0x95C57823L)) && g_126) == g_94[1]) , 0xA3L), 2)) ^ (*l_306)) >= l_356))) || g_226[3])) ^ g_24.f4)) == 0x82A49DD9L) || p_47) , p_49.f4) ^ g_315) && p_50) , &l_269[4])))
            {
                l_311 = (*g_93);
                for (g_197 = 0; (g_197 <= 3); g_197 = safe_add_func_int16_t_s_s(g_197, 5))
                {
                    (*l_366) = func_65(((*l_276) = (*g_107)), (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_363, 5)), (safe_lshift_func_uint8_t_u_u(g_81, (l_366 != &g_230))))));
                }
                (*l_276) = (*g_107);
            }
            else
            {
                int l_367 = 0x601CE15DL;
                if (l_367)
                    break;
            }
            for (g_257.f0 = 0; (g_257.f0 <= (-12)); g_257.f0 = safe_sub_func_int16_t_s_s(g_257.f0, 9))
            {
                unsigned short ***l_370 = (void*)0;
                unsigned short **l_372 = &l_327;
                unsigned short ***l_371[3];
                int * const l_379 = (void*)0;
                int l_407 = 0x1F00632BL;
                int *l_409 = &l_350;
                int i;
                for (i = 0; i < 3; i++)
                    l_371[i] = &l_372;
                l_373[3] = &l_270;
                if ((*g_93))
                {
                    int *l_374 = &g_94[1];
                    unsigned *l_375 = (void*)0;
                    unsigned *l_376[8] = {&g_212[1][1],&g_212[1][1],&g_212[1][1],&g_212[1][1],&g_212[1][1],&g_212[1][1],&g_212[1][1],&g_212[1][1]};
                    int **l_380 = (void*)0;
                    int i;
                    (*l_276) = ((g_212[1][1] = ((l_374 = &l_311) == (*l_276))) , (*l_366));

                    ;
                    l_311 = (safe_rshift_func_uint8_t_u_s(((*l_275) = g_124), 3));
                    (*g_107) = l_379;

                    ;
                }
                else
                {
                    int l_388[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_388[i] = 0x23CCDCFFL;
                    g_94[0] = (+(-1L));
                    for (l_311 = 29; (l_311 <= 17); l_311 = safe_sub_func_uint32_t_u_u(l_311, 6))
                    {
                        const short l_383 = 0xF4F5L;
                        unsigned *l_387 = &g_209;
                        (*l_366) = func_65(func_65((p_49.f1 , (*g_107)), (((g_124 = (((*l_327) = ((4294967286UL > (l_383 != (+(safe_lshift_func_uint16_t_u_u(3UL, (((void*)0 == l_318) <= (((*l_387) = (((((*l_276) = func_65((*g_107), (g_126 = ((*g_23) , 0x43L)))) != l_386) > l_383) , 4294967292UL)) < p_49.f2))))))) | g_315)) == (*l_386))) ^ l_383) & g_226[3])), l_388[1]);
                        l_388[0] = 0x4F3C083DL;
                    }
                    (*l_366) = (g_226[5] , func_65((*l_366), g_257.f4));
                }

                ;
                if (p_49.f4)
                {
                    return l_389;



                }
                else
                {
                    unsigned l_405 = 4294967295UL;
                    int l_406 = (-7L);
                    unsigned short **l_413 = (void*)0;
                    if ((safe_sub_func_int8_t_s_s(0x26L, 0x47L)))
                    {
                        short *l_402 = &g_197;
                        short *l_403 = &g_404[1][6];
                        union U0 *l_408 = &g_257;
                        l_406 = (safe_mod_func_uint8_t_u_u(((((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((p_49.f3 , &l_270) != (void*)0), ((g_126 > 7L) | 4UL))), (((safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(g_257.f3, ((*l_403) = ((*l_402) = g_94[1])))) & g_94[0]), p_47)) , 0x57C57673L) & p_50))) == p_49.f0) < g_226[2]) != (-7L)), l_405));
                        l_407 = p_47;
                        return l_408;



                    }
                    else
                    {
                        unsigned short **l_412 = &l_327;
                        (*l_276) = func_65(l_409, (g_257.f1 , (safe_rshift_func_uint16_t_u_u(((*l_327) = 0xA4D3L), (p_49.f2 != ((l_412 != l_413) != 250UL))))));


                    }


                    return &g_24;



                }
            }
        }


        ;
        (*l_366) = g_414;

        ;
    }
    else
    {
        char l_433 = 0xB9L;
        int l_435 = (-1L);
        union U0 l_436 = {0x65F2AC9AL};
        union U0 *l_449 = &g_257;
        for (p_49.f4 = 0; (p_49.f4 <= 5); p_49.f4 += 1)
        {
            short *l_418 = &g_257.f2;
            short **l_417 = &l_418;
            int l_424 = 0L;
            (*g_107) = func_65(func_65((*l_276), (g_94[1] <= (((*l_417) = ((*g_93) , &g_404[1][6])) != &g_197))), (safe_rshift_func_uint8_t_u_u(0xE8L, 1)));

            ;
            for (g_257.f0 = 0; (g_257.f0 <= 1); g_257.f0 += 1)
            {
                unsigned short l_423[9];
                unsigned *l_434[6] = {(void*)0,&g_24.f1,&g_24.f1,(void*)0,&g_24.f1,&g_24.f1};
                int i;
                for (i = 0; i < 9; i++)
                    l_423[i] = 8UL;
                (*g_414) = (safe_rshift_func_uint8_t_u_s((l_423[8] < ((((l_424 & (safe_add_func_int16_t_s_s(((((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((g_212[3][0] = ((g_82 <= (safe_sub_func_int8_t_s_s((l_433 ^ g_212[1][4]), g_317))) ^ 1L)) , &l_276) != (l_435 , &g_107)), 3)), g_81)) , l_436) , p_51) || p_49.f1), 0x5CDCL))) != 0x76A0829CL) > g_209) | g_24.f4)), 4));
                for (g_81 = 0; (g_81 <= 1); g_81 += 1)
                {
                    (*g_414) = (safe_sub_func_int16_t_s_s(l_423[8], (safe_mod_func_uint8_t_u_u(253UL, p_50))));
                }
                (*l_276) = (p_51 , &l_435);
                (*g_414) = (*g_93);
                for (l_436.f4 = 0; (l_436.f4 <= 5); l_436.f4 += 1)
                {
                    int l_447 = (-8L);
                    int i, j, k;
                    (*g_414) = 0xAA26E078L;
                }

                            }
        }

        ;

        return l_449;



    }

    ;

    return l_450;



}







static union U0 func_53(union U0 * p_54, int p_55, int p_56, union U0 * p_57)
{
    int *l_68 = &g_24.f0;
    int l_127 = 1L;
    char *l_179 = &g_124;
    union U0 *l_255[7];
    int **l_258 = &g_230;
    int i;
    for (i = 0; i < 7; i++)
        l_255[i] = &g_24;
    for (p_55 = 0; (p_55 == (-5)); p_55 = safe_sub_func_int16_t_s_s(p_55, 6))
    {
        return (*g_23);

            }
    for (p_56 = (-17); (p_56 > (-12)); ++p_56)
    {
        int l_69 = 0xA6F4DAD2L;
        int **l_105 = &l_68;
        int l_128 = 0x3E424006L;
        char l_150 = 0xAEL;
        union U0 **l_187[7] = {&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23};
        union U0 ***l_186 = &l_187[5];
        char *l_190[8] = {&l_150,&l_150,&l_150,&l_150,&l_150,&l_150,&l_150,&l_150};
        unsigned *l_191 = &g_81;
        union U0 **l_207 = (void*)0;
        unsigned char *l_263 = &g_169;
        int *l_268[3];
        int i;
        for (i = 0; i < 3; i++)
            l_268[i] = &l_128;
    }
    return (*p_54);

    }







static int * func_65(int * p_66, char p_67)
{
    unsigned char l_72 = 0UL;
    union U0 *l_73 = (void*)0;
    unsigned short *l_74 = &g_75;
    int l_76 = 0xC9FC22F7L;
    int l_77 = 0x06E71EBDL;
    unsigned *l_80 = &g_81;
    int l_83 = 0x9AD1DC2CL;
    l_83 = ((l_77 = ((safe_rshift_func_uint16_t_u_u(l_72, ((*l_74) = ((&g_24 != l_73) ^ g_24.f3)))) | ((l_76 = g_24.f1) > (-1L)))) < (safe_add_func_int16_t_s_s((g_24.f3 <= 1L), (g_82 = (((*l_80) = p_67) > g_24.f3)))));
    return p_66;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    transparent_crc(g_24.f3, "g_24.f3", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_94[i], "g_94[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_212[i][j], "g_212[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_226[i], "g_226[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_404[i][j], "g_404[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_485[i], "g_485[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_633.f0, "g_633.f0", print_hash_value);
    transparent_crc(g_633.f1, "g_633.f1", print_hash_value);
    transparent_crc(g_633.f2, "g_633.f2", print_hash_value);
    transparent_crc(g_633.f3, "g_633.f3", print_hash_value);
    transparent_crc(g_633.f4, "g_633.f4", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_728[i][j][k].f0, "g_728[i][j][k].f0", print_hash_value);
                transparent_crc(g_728[i][j][k].f1, "g_728[i][j][k].f1", print_hash_value);
                transparent_crc(g_728[i][j][k].f2, "g_728[i][j][k].f2", print_hash_value);
                transparent_crc(g_728[i][j][k].f3, "g_728[i][j][k].f3", print_hash_value);
                transparent_crc(g_728[i][j][k].f4, "g_728[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_781.f2, "g_781.f2", print_hash_value);
    transparent_crc(g_781.f3, "g_781.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
