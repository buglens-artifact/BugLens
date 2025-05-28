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
   char f0;
};


static char g_6 = (-3L);
static int g_17[4] = {(-3L),(-3L),(-3L),(-3L)};
static int g_60 = (-7L);
static int *g_59[3][10][2] = {{{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60}},{{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60}},{{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60}}};
static int *g_61 = &g_60;
static struct S0 g_66 = {0L};
static struct S0 *g_92 = &g_66;
static struct S0 **g_102 = &g_92;
static short g_114 = 0L;
static short g_116 = 0x5A9BL;
static short *g_115 = &g_116;
static unsigned **g_136 = (void*)0;
static unsigned ***g_135 = &g_136;
static int g_169 = 1L;
static int g_218 = 0xA750F617L;
static unsigned char g_228[1][2] = {{0x86L,0x86L}};
static int *g_240 = &g_17[1];
static int **g_250 = &g_61;
static int **g_251 = (void*)0;
static unsigned short g_282 = 0UL;
static unsigned g_292 = 1UL;
static int g_327 = (-1L);
static unsigned g_351[7] = {0x28290D2CL,0x05C99ABEL,0x28290D2CL,0x28290D2CL,0x05C99ABEL,0x28290D2CL,0x28290D2CL};
static unsigned char *g_382 = &g_228[0][0];
static short g_389 = 1L;
static char g_390 = 0xA1L;
static unsigned char **g_410 = (void*)0;
static unsigned g_420 = 0x3825F889L;
static unsigned char g_447 = 0xF3L;
static unsigned char *g_446 = &g_447;
static unsigned short g_514 = 0x0E71L;
static unsigned short g_516 = 2UL;
static int g_662 = 0x7D1A21EBL;
static int *g_661[9] = {&g_662,&g_662,(void*)0,&g_662,&g_662,(void*)0,&g_662,&g_662,(void*)0};
static short **g_698 = &g_115;
static unsigned short **g_788 = (void*)0;
static char *g_830 = &g_390;
static char **g_829[2] = {&g_830,&g_830};
static int g_936[1][2][9] = {{{1L,1L,0x829DA4BBL,9L,0x829DA4BBL,1L,1L,0x829DA4BBL,9L},{0xC879A299L,(-7L),0xC879A299L,0x829DA4BBL,0x829DA4BBL,0xC879A299L,(-7L),0xC879A299L,0x829DA4BBL}}};
static unsigned ****g_946 = &g_135;
static int *g_996 = &g_218;
static unsigned short g_1060 = 0UL;



static unsigned char func_1(void);
static int func_2(char p_3);
static unsigned short func_9(unsigned short p_10, unsigned p_11, unsigned p_12, unsigned p_13);
static int func_15(unsigned p_16);
static int * func_18(unsigned p_19, unsigned char p_20, char p_21, unsigned short p_22, int p_23);
static unsigned char func_24(int * p_25, int p_26, int * p_27);
static int func_28(short p_29, unsigned short p_30);
static unsigned short func_37(int * p_38, int * p_39, int * p_40, char p_41, unsigned p_42);
static int * func_43(unsigned short p_44, int p_45, int * p_46);
static short func_49(int p_50, int * p_51, unsigned char p_52, unsigned p_53, int * p_54);
static unsigned char func_1(void)
{
    int l_7 = 1L;
    unsigned l_14 = 4294967292UL;
    char l_987 = 1L;
    unsigned *l_988 = (void*)0;
    unsigned *l_989 = &g_420;
    int l_990[7][2][9] = {{{(-1L),0xA77FA39DL,0x40348278L,0xC6A4702CL,3L,0xBDB31056L,0x2A262D54L,0x2A262D54L,0xBDB31056L},{0x42366CB2L,0xA77FA39DL,0x4AA58494L,0xA77FA39DL,0x42366CB2L,0x50FDB37EL,0xEBE89EAFL,0x7FA2BFC3L,0xA77FA39DL}},{{0x2A262D54L,3L,(-6L),9L,0L,0x1137264BL,0x42D479A7L,(-6L),0x0809D031L},{(-1L),0xBBBE4621L,0xEBE89EAFL,0x4AA58494L,0x1137264BL,0x50FDB37EL,0xBBBE4621L,0x40348278L,(-6L)}},{{0xBDB31056L,1L,0xC2D534EDL,0x7FA2BFC3L,(-6L),(-2L),0xEBE89EAFL,(-2L),(-6L)},{(-2L),(-1L),(-1L),(-2L),0x1137264BL,(-1L),0x4AA58494L,0L,(-10L)}},{{8L,0x4AA58494L,0x50FDB37EL,(-6L),(-1L),(-1L),9L,0x95AC499BL,0x4AA58494L},{(-1L),0xFE8DD5C1L,0x95AC499BL,0xBBBE4621L,0x1137264BL,0L,0xA77FA39DL,0xA85B92D1L,0L}},{{(-1L),(-1L),9L,0L,(-6L),0xC6A4702CL,0xC6A4702CL,(-6L),0L},{(-10L),0x1137264BL,(-10L),0x7FA2BFC3L,9L,0x42D479A7L,0x7CB9A792L,(-10L),0x4AA58494L}},{{0L,(-1L),0x7FA2BFC3L,0x42D479A7L,0xEBE89EAFL,1L,(-1L),0x4AA58494L,(-10L)},{(-1L),(-6L),0x42366CB2L,0x7FA2BFC3L,(-1L),(-1L),9L,0L,(-6L)}},{{0L,0xA77FA39DL,0xA85B92D1L,0L,0x1137264BL,(-6L),0x1137264BL,0L,0xA85B92D1L},{8L,8L,9L,0xBBBE4621L,0x0809D031L,(-1L),0xC2D534EDL,0x4AA58494L,0x95AC499BL}}};
    unsigned char *l_1042 = &g_228[0][0];
    int *l_1045 = &g_17[1];
    short l_1046 = 0x064EL;
    int *l_1051[2];
    int *l_1052 = &l_990[1][1][2];
    unsigned l_1059[5][5] = {{4294967291UL,0x44334DE5L,2UL,0xF716C419L,0x44334DE5L},{1UL,2UL,2UL,1UL,4294967287UL},{4294967291UL,0xF716C419L,1UL,2UL,2UL},{1UL,0xF716C419L,1UL,4294967287UL,0xF716C419L},{2UL,0x08BAD30DL,4294967287UL,2UL,4294967287UL}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1051[i] = &g_936[0][0][4];
    (*g_996) = func_2((l_990[1][1][2] = (((safe_mul_func_uint16_t_u_u(((g_6 ^ l_7) != (safe_unary_minus_func_uint16_t_u((func_9(g_6, g_6, l_14, (l_990[1][1][2] = ((*l_989) = (func_15(l_14) | (safe_unary_minus_func_int8_t_s(l_987)))))) | g_6)))), l_7)) && l_987) > l_987)));


    ;

    ;
    ;
    ;
    (*g_996) = ((*g_240) = func_9((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((*g_115), l_7)), 4)), l_990[1][1][2], (((safe_mul_func_uint16_t_u_u(((*g_830) != l_987), ((safe_lshift_func_int8_t_s_s((l_1042 == l_1042), 5)) | ((*l_989) = ((func_24(((*g_250) = l_1045), (*l_1045), &l_990[4][0][5]) > l_1046) | (*l_1045)))))) < (*l_1045)) == (*l_1045)), (*l_1045)));


    (*g_240) = func_28((*g_115), (safe_lshift_func_uint16_t_u_u(((*l_1045) & (0xF7L < (((safe_mul_func_uint8_t_u_u((l_1059[1][3] = (func_24(l_1051[1], (*l_1045), l_1052) || (safe_add_func_int16_t_s_s(0xB6BEL, ((safe_mul_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u(((*l_1045) < (*g_996)), (*l_1052))) < (*l_1052)) & 1UL) || 255UL), (*l_1052))) & 0xACD07BD0L))))), g_1060)) > (*l_1052)) != 0UL))), 0)));


    ;
    return (*l_1045);
}







static int func_2(char p_3)
{
    int *l_1033 = &g_17[0];
    (*g_250) = l_1033;

    ;
    l_1033 = ((*g_250) = (void*)0);

    ;
    ;
    return p_3;
}







static unsigned short func_9(unsigned short p_10, unsigned p_11, unsigned p_12, unsigned p_13)
{
    struct S0 l_991 = {-1L};
    struct S0 *l_992 = (void*)0;
    struct S0 *l_993 = &g_66;
    unsigned ****l_994 = (void*)0;
    unsigned ****l_995[2];
    unsigned char l_1016 = 0xDBL;
    int *l_1017 = &g_662;
    int i;
    for (i = 0; i < 2; i++)
        l_995[i] = &g_135;
    (*l_993) = l_991;
    if (l_991.f0)
    {
        unsigned *l_1010 = &g_292;
        unsigned **l_1009 = &l_1010;
        int l_1011 = 1L;
        unsigned short *l_1025 = &g_514;
        unsigned short **l_1024[7] = {&l_1025,&l_1025,(void*)0,&l_1025,&l_1025,(void*)0,&l_1025};
        int i;
        (*g_250) = g_996;

        ;
        if (((l_1011 = ((safe_sub_func_int32_t_s_s((-9L), ((safe_mod_func_uint8_t_u_u((*g_382), (*g_830))) && 5L))) | (safe_lshift_func_int16_t_s_u((l_1011 == 0x0B216D58L), 6)))) >= (*l_1017)))
        {
            (*g_250) = &l_1011;

            ;
        }
        else
        {
            struct S0 l_1032 = {-10L};
            for (l_991.f0 = 16; (l_991.f0 != 24); l_991.f0 = safe_add_func_uint32_t_u_u(l_991.f0, 6))
            {
                struct S0 l_1031[3][8][6] = {{{{1L},{0x22L},{0xC2L},{1L},{0x81L},{0xAAL}},{{0x3EL},{0x21L},{0xCAL},{1L},{-1L},{0x30L}},{{0x9FL},{0x51L},{0x53L},{1L},{4L},{-4L}},{{0x78L},{0L},{-7L},{0x20L},{-1L},{1L}},{{-4L},{0xD4L},{0x7BL},{0x51L},{0x78L},{0x51L}},{{0x10L},{-7L},{0x10L},{0x78L},{0x3EL},{0L}},{{0xCBL},{1L},{1L},{0x81L},{-9L},{-1L}},{{-7L},{1L},{0x9FL},{0x81L},{0L},{0x78L}}},{{{0xCBL},{-1L},{0x10L},{0x78L},{0x8EL},{-4L}},{{0x10L},{0x9FL},{0x02L},{0x51L},{0xEEL},{0L}},{{-4L},{0x02L},{0x3EL},{0x20L},{0x99L},{1L}},{{0x78L},{0x81L},{0x51L},{1L},{1L},{-3L}},{{1L},{0xA2L},{0x16L},{1L},{-3L},{-1L}},{{0x7BL},{0x21L},{0xFCL},{0xD4L},{0xE3L},{-9L}},{{0x6DL},{1L},{0xE3L},{-4L},{-8L},{1L}},{{9L},{1L},{0xA2L},{0L},{-9L},{0x30L}}},{{{0xAAL},{4L},{0x8EL},{6L},{6L},{0x8EL}},{{0x9FL},{0x9FL},{0xC4L},{1L},{0x16L},{1L}},{{-1L},{1L},{-1L},{-7L},{0xFCL},{0xC4L}},{{-1L},{-1L},{-1L},{0x99L},{0x9FL},{1L}},{{0x53L},{0x99L},{0xC4L},{0x37L},{0x10L},{0x8EL}},{{0x37L},{0x10L},{0x8EL},{0x21L},{1L},{0x30L}},{{0xE9L},{0xCAL},{0xA2L},{0x8EL},{-1L},{1L}},{{-1L},{7L},{0xE3L},{-1L},{0x99L},{-9L}}}};
                int i, j, k;
                for (g_514 = 0; (g_514 != 48); ++g_514)
                {
                    short l_1029 = 5L;
                    int *l_1030 = &g_936[0][0][7];
                    for (g_60 = 0; (g_60 < 16); g_60 = safe_add_func_int32_t_s_s(g_60, 3))
                    {
                        unsigned short ***l_1026 = &l_1024[5];
                        (*l_1026) = l_1024[3];
                        (*g_240) = ((*g_996) = (4294967295UL < (((*g_830) = (safe_mul_func_uint16_t_u_u(l_1029, (!((*g_830) != (*l_1017)))))) | ((g_516 = (p_11 || ((((void*)0 != &g_946) | func_24(l_1030, p_10, &l_1011)) >= p_12))) < 0xFC90L))));
                    }
                }

                ;
                (*g_250) = (*g_250);
                l_1032 = l_1031[2][0][1];
                return l_1011;
            }
        }

        ;
    }
    else
    {
        (*g_250) = l_1017;

        ;
        return (*l_1017);
    }


    return p_11;
}







static int func_15(unsigned p_16)
{
    unsigned short l_55 = 0x0EF7L;
    int *l_360[4];
    struct S0 l_816 = {0x92L};
    char *l_828 = (void*)0;
    char **l_827 = &l_828;
    unsigned short *l_861 = &g_516;
    unsigned l_868 = 0UL;
    unsigned short *l_869 = &g_514;
    short l_870 = 0x695EL;
    struct S0 **l_881 = &g_92;
    unsigned *l_887 = &g_292;
    unsigned **l_886 = &l_887;
    unsigned l_963[8][9][3] = {{{0xD004455CL,0x2A8E47F9L,0x018A2BEEL},{0xBA8545A5L,0xFA9EC01EL,0x8EF551E6L},{4294967286UL,0x2A8E47F9L,4294967290UL},{0UL,0UL,0xB44BBD5AL},{0x450E2CB8L,0xBA8545A5L,0xBC523E8AL},{0x4ABA7635L,0x450E2CB8L,0x056E0B9CL},{4294967294UL,0x0784174AL,0xF300AF5EL},{0x41CA71A3L,4294967295UL,0x8EF551E6L},{0UL,0xBA8545A5L,0x49E36DE0L}},{{0x46E87DD7L,0x5DE16D56L,0x54EEEF69L},{0x57C650C1L,0x41CA71A3L,0x450E2CB8L},{4294967295UL,1UL,0UL},{0x550A3A77L,0xBC523E8AL,4294967288UL},{0UL,0x018A2BEEL,0xBC523E8AL},{0x375F3C8CL,0x191AA0D5L,0x2E5E60DAL},{0x8D6CA534L,0x056E0B9CL,0x8A377B0CL},{4294967288UL,7UL,2UL},{0x85F52969L,0x63BAAE7CL,0x75F809CCL}},{{0x1C009317L,0UL,0x75F809CCL},{0UL,4294967295UL,2UL},{0x04812642L,0xF1C730F7L,0x8A377B0CL},{0x95EEF5B0L,0x3B5EAFBCL,0x2E5E60DAL},{0x08C7A121L,4294967294UL,0xBC523E8AL},{4294967295UL,1UL,4294967288UL},{0UL,1UL,0UL},{0x5DE16D56L,0xF300AF5EL,0x450E2CB8L},{4294967292UL,0x558482CCL,0x54EEEF69L}},{{0xF165E870L,0xB5D6A149L,0x49E36DE0L},{0x74A2672EL,4294967288UL,0x8EF551E6L},{0x75F809CCL,0xE129EFDDL,0x22BB14FFL},{0x49E36DE0L,4294967295UL,0UL},{0x41CA71A3L,6UL,0x41CA71A3L},{4294967291UL,0x05F54B77L,0UL},{0x20AC61F4L,0xC7114100L,0x60386138L},{4294967289UL,0xA0D07CCDL,0xB5D6A149L},{0x0784174AL,4294967292UL,4294967290UL}},{{4294967289UL,0x74A2672EL,8UL},{0x20AC61F4L,0x57C650C1L,0xE129EFDDL},{4294967291UL,0x450E2CB8L,5UL},{0x41CA71A3L,4294967288UL,0x191AA0D5L},{1UL,5UL,1UL},{8UL,0x056E0B9CL,0xC40ECB3CL},{7UL,0x0F1A19B4L,0x269D4C32L},{0x60386138L,0xC40ECB3CL,0x63BAAE7CL},{0UL,0x2A8E47F9L,4294967295UL}},{{4294967291UL,0x2F8E67BDL,0x95EEF5B0L},{0x056E0B9CL,0UL,0xC7114100L},{0xD004455CL,4294967295UL,0x54EEEF69L},{0UL,4294967295UL,0x22BB14FFL},{0x20AC61F4L,6UL,0x43793240L},{4294967295UL,0x04812642L,0x450E2CB8L},{0xF165E870L,0x85F52969L,4294967295UL},{0x8D6CA534L,0x85F52969L,0x550A3A77L},{0x4ABA7635L,0x04812642L,0xF1C730F7L}},{{0x08C7A121L,6UL,4294967295UL},{0xF300AF5EL,4294967295UL,2UL},{1UL,4294967295UL,4294967290UL},{0x63BAAE7CL,0UL,0UL},{1UL,0x2F8E67BDL,0x46E87DD7L},{4294967292UL,0x2A8E47F9L,0UL},{0xC4572FB2L,0xC40ECB3CL,1UL},{0UL,0x0F1A19B4L,0x57C650C1L},{0x3B5EAFBCL,0x056E0B9CL,0xF300AF5EL}},{{0x1C009317L,5UL,1UL},{4294967295UL,0xFA9EC01EL,0x1C009317L},{4294967289UL,4294967289UL,0UL},{0x5D271F4FL,0xC4572FB2L,8UL},{0x550A3A77L,7UL,0x2003C069L},{0x092CD020L,0UL,4294967295UL},{0x558482CCL,0x550A3A77L,0x2003C069L},{0x04812642L,1UL,8UL},{0xF1C730F7L,4294967288UL,0x269D4C32L}}};
    struct S0 l_985[5][10] = {{{0xD7L},{0xC6L},{0xC6L},{0xD7L},{0xC6L},{0xC6L},{0xD7L},{0xC6L},{0xC6L},{0xD7L}},{{0xC6L},{0xD7L},{0xC6L},{0xC6L},{0xD7L},{0xC6L},{0xC6L},{0xD7L},{0xC6L},{0xC6L}},{{0xD7L},{0xD7L},{0L},{0xD7L},{0xD7L},{0L},{0xD7L},{0xD7L},{0L},{0xD7L}},{{0xD7L},{0xC6L},{0xC6L},{0xD7L},{0xC6L},{0xC6L},{0xD7L},{0xC6L},{0xC6L},{0xD7L}},{{0xC6L},{0xD7L},{0xC6L},{0xC6L},{0xD7L},{0xC6L},{0xC6L},{0xD7L},{0xC6L},{0xC6L}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_360[i] = (void*)0;
    for (p_16 = 0; (p_16 <= 3); p_16 += 1)
    {
        unsigned short *l_222 = &l_55;
        int **l_810 = (void*)0;
        int **l_811 = (void*)0;
        int **l_812 = (void*)0;
        int **l_813 = &g_661[4];
        char *l_853 = &g_6;
        int i;
    }
    if (((safe_rshift_func_int8_t_s_u(((((*l_869) = (safe_lshift_func_uint8_t_u_s(((*g_446) = (safe_add_func_int16_t_s_s((*g_115), ((*l_861) = 65534UL)))), ((*g_830) = ((safe_lshift_func_uint8_t_u_s(func_24((*g_250), p_16, l_360[1]), (safe_add_func_uint8_t_u_u(((((*g_240) = (-5L)) ^ p_16) > (safe_rshift_func_int16_t_s_s((p_16 || 0x9CL), p_16))), l_868)))) == (**g_698)))))) & p_16) < 4294967295UL), (*g_382))) != l_870))
    {
        int *l_871 = &g_60;
        unsigned char l_878[2][2] = {{1UL,1UL},{1UL,1UL}};
        struct S0 *l_879[5][10] = {{&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816},{&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816},{&l_816,&l_816,&g_66,&l_816,&l_816,&g_66,&l_816,&l_816,&g_66,&l_816},{&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816},{&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816,&l_816}};
        struct S0 ***l_880 = (void*)0;
        int i, j;
        (*g_250) = l_871;

        ;
        l_878[1][1] = (safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((*l_871), (((safe_lshift_func_int8_t_s_s(((*g_830) = p_16), 2)) ^ p_16) > p_16))), 14));
        (*g_102) = l_879[3][0];

        ;
        l_881 = &g_92;
    }
    else
    {
        struct S0 l_885 = {7L};
        for (g_218 = 28; (g_218 < 24); --g_218)
        {
            int *l_884[10][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_662,(void*)0,(void*)0,&g_662,&g_218,&g_662,(void*)0,(void*)0},{(void*)0,&g_218,(void*)0,(void*)0,&g_218,(void*)0,&g_218,(void*)0},{&g_662,&g_218,&g_662,(void*)0,(void*)0,&g_662,&g_218,&g_662},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_662,(void*)0,(void*)0,&g_662,&g_218,&g_662,(void*)0,(void*)0},{(void*)0,&g_218,(void*)0,(void*)0,&g_218,(void*)0,&g_218,(void*)0},{&g_662,&g_218,&g_662,(void*)0,(void*)0,&g_662,&g_218,&g_662},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            (*g_250) = l_884[4][0];
        }

        ;
        (**g_102) = l_885;
        l_885 = l_885;
    }

    ;
    ;
    if (((*g_240) = p_16))
    {
        int l_898 = 0xB1A2B40DL;
        int *l_908 = &g_662;
        struct S0 *l_948 = &g_66;
        unsigned l_962 = 0xDF33544AL;
        if (((void*)0 != l_886))
        {
            for (g_447 = 0; (g_447 < 32); g_447 = safe_add_func_uint32_t_u_u(g_447, 9))
            {
                int *l_890 = &g_17[2];
                (*g_250) = l_890;

                ;
                (**g_250) = (*g_61);
                if (p_16)
                    continue;
            }
            for (g_114 = 0; (g_114 <= (-10)); g_114 = safe_sub_func_int8_t_s_s(g_114, 4))
            {
                (*g_250) = l_887;

                ;
                (**l_881) = (**g_102);
                for (p_16 = (-27); (p_16 == 22); p_16 = safe_add_func_uint16_t_u_u(p_16, 3))
                {
                    return p_16;


                }
            }

            ;
        }
        else
        {
            unsigned short l_905 = 5UL;
            int *l_921[1];
            int i;
            for (i = 0; i < 1; i++)
                l_921[i] = &g_17[1];
            for (g_389 = (-26); (g_389 < (-30)); --g_389)
            {
                for (g_292 = 0; (g_292 <= 1); g_292 += 1)
                {
                    int l_897[3][5] = {{5L,3L,5L,5L,3L},{1L,(-7L),(-7L),1L,(-7L)},{5L,5L,3L,5L,5L}};
                    int i, j;
                    l_897[2][3] = (g_17[(g_292 + 2)] = g_17[g_292]);
                    for (g_60 = 0; (g_60 <= 1); g_60 += 1)
                    {
                        int i, j, k;
                        l_898 = g_17[(g_60 + 1)];
                    }
                }
                if (l_898)
                    continue;
                if (p_16)
                    break;
            }
            (*g_240) = ((p_16 > ((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((**g_698) && ((void*)0 != l_881)), 3)), (+((p_16 < func_24(l_908, p_16, l_908)) || 0xBCL)))) && (*l_908))) == p_16);

            ;
            if ((safe_lshift_func_int16_t_s_s(6L, p_16)))
            {
                struct S0 l_925 = {1L};
                int *l_928 = (void*)0;
                for (l_905 = 0; (l_905 <= 7); ++l_905)
                {
                    struct S0 ***l_924[2][10] = {{&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881},{&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881}};
                    unsigned char *l_926 = &g_228[0][0];
                    int *l_927 = &g_662;
                    int i, j;
                }
                (*g_92) = (**l_881);
                (*g_250) = l_928;
                (*l_908) = func_24(l_908, p_16, ((*g_250) = (void*)0));
            }
            else
            {
                (*g_240) = func_28(p_16, p_16);



                ;
                ;
            }



            ;
            ;
        }



        ;
        ;
        (*l_908) = 0xAE50A437L;
        if ((&g_698 == (void*)0))
        {
            char *l_931 = &g_390;
            int l_937 = 0xB403B3A7L;
            unsigned ****l_945 = (void*)0;
            struct S0 l_950[10] = {{2L},{2L},{0xA9L},{0xDBL},{0xA9L},{2L},{2L},{0xA9L},{0xDBL},{0xA9L}};
            int i;
            if (((safe_mul_func_uint16_t_u_u(((*g_830) || p_16), (&l_908 != (void*)0))) || (((*l_827) == l_931) > (((*l_908) || (safe_mul_func_int8_t_s_s((((p_16 && 0x150BL) != 0UL) == p_16), p_16))) & p_16))))
            {
                unsigned short l_938 = 0x5BF3L;
                unsigned char **l_939 = &g_446;
                unsigned *****l_942 = (void*)0;
                unsigned ****l_944[9][8][3] = {{{(void*)0,&g_135,&g_135},{&g_135,&g_135,(void*)0},{&g_135,&g_135,(void*)0},{&g_135,(void*)0,&g_135},{&g_135,&g_135,(void*)0},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135}},{{&g_135,(void*)0,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,(void*)0},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135}},{{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{(void*)0,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,(void*)0}},{{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,(void*)0},{&g_135,&g_135,&g_135},{&g_135,(void*)0,&g_135},{&g_135,&g_135,&g_135}},{{&g_135,&g_135,(void*)0},{&g_135,&g_135,&g_135},{&g_135,(void*)0,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{(void*)0,&g_135,(void*)0},{&g_135,(void*)0,&g_135},{&g_135,&g_135,&g_135}},{{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,(void*)0,&g_135},{&g_135,&g_135,&g_135},{(void*)0,&g_135,&g_135},{&g_135,&g_135,(void*)0},{&g_135,&g_135,&g_135}},{{&g_135,&g_135,&g_135},{&g_135,(void*)0,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135}},{{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,(void*)0},{&g_135,&g_135,&g_135},{(void*)0,(void*)0,&g_135},{&g_135,(void*)0,&g_135},{(void*)0,(void*)0,&g_135},{&g_135,&g_135,&g_135}},{{&g_135,&g_135,(void*)0},{&g_135,&g_135,&g_135},{&g_135,(void*)0,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135},{(void*)0,&g_135,&g_135},{(void*)0,&g_135,&g_135}}};
                unsigned *****l_943 = &l_944[5][1][0];
                char l_947 = 0x87L;
                int i, j, k;
                l_947 = ((((*l_931) = (*g_830)) | ((l_938 = ((g_936[0][0][4] ^ l_937) | p_16)) & ((&g_228[0][1] != ((*l_939) = &g_447)) >= (safe_rshift_func_uint8_t_u_u((((*l_943) = &g_135) != (g_946 = l_945)), ((g_389 < l_937) <= (*g_115))))))) > p_16);

                ;
                ;
                (*l_881) = l_948;

                ;
                return (*l_908);
            }
            else
            {
                struct S0 l_949[5] = {{0x5EL},{0x5EL},{0x5EL},{0x5EL},{0x5EL}};
                int i;
                for (l_816.f0 = 8; (l_816.f0 >= 0); l_816.f0 -= 1)
                {
                    int l_959 = 0xF7DE5D30L;
                    struct S0 **l_964 = &l_948;
                    int l_965[3];
                    unsigned short **l_968 = &l_861;
                    int l_969 = 9L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_965[i] = 0xF640B9B7L;
                    l_950[1] = ((*l_948) = l_949[4]);
                    (*g_240) = (safe_rshift_func_uint16_t_u_u(((*l_869) = (safe_lshift_func_int8_t_s_u(((*g_830) = (*g_830)), (((-2L) & (safe_rshift_func_uint16_t_u_u((0x2A346445L ^ (l_959 >= p_16)), 0))) < 0xA08DL)))), 2));
                    if (l_937)
                    {
                        (*g_240) = (p_16 >= p_16);
                        l_963[3][7][1] = l_962;
                        (*g_240) = ((void*)0 == l_964);
                        (*g_250) = func_18(((*l_908) = 1UL), l_965[2], ((safe_mul_func_uint16_t_u_u(g_327, l_949[4].f0)) <= (p_16 | (((void*)0 == l_968) == 0x3AL))), (p_16 && (*g_382)), p_16);

                        ;
                    }
                    else
                    {
                        l_950[4] = ((*l_948) = (*l_948));
                    }
                    for (l_937 = 0; (l_937 >= 0); l_937 -= 1)
                    {
                        int i;
                        l_360[(l_937 + 1)] = &g_218;
                        (*l_948) = l_950[8];
                    }
                    for (g_218 = 0; (g_218 >= 0); g_218 -= 1)
                    {
                        if ((*l_908))
                            break;
                        (**l_964) = (**l_964);
                    }
                }

                ;

            }

            ;

            l_360[3] = l_908;


        }
        else
        {
            int *l_970 = &g_662;
            (*g_250) = l_970;

            ;
            (*g_240) = (*l_908);
        }

        ;

        (*l_908) = ((void*)0 == g_788);
    }
    else
    {
        int l_972 = 6L;
        int l_981 = 0x8EDC135EL;
        int l_982 = (-1L);
        struct S0 l_983 = {0xBEL};
        for (g_169 = 6; (g_169 >= 1); g_169 -= 1)
        {
            int i;
            (*g_240) = g_351[g_169];
        }
        for (g_514 = 0; (g_514 <= 8); g_514 += 1)
        {
            short l_971[5] = {0x29E4L,0x29E4L,0x29E4L,0x29E4L,0x29E4L};
            int l_977 = 0xA95B50A9L;
            unsigned char *l_980 = &g_447;
            struct S0 *l_984[2][6][7] = {{{&l_816,&l_816,&g_66,&l_816,(void*)0,&l_983,(void*)0},{&l_816,&g_66,&l_816,&l_816,&g_66,(void*)0,(void*)0},{(void*)0,&l_983,&l_816,&l_983,(void*)0,(void*)0,&g_66},{&g_66,(void*)0,(void*)0,&g_66,&g_66,(void*)0,&l_816},{(void*)0,&g_66,&l_983,&g_66,(void*)0,&l_816,&g_66},{&g_66,&g_66,&l_983,&g_66,&l_983,&g_66,&g_66}},{{&l_816,&g_66,&l_816,&g_66,&l_816,&g_66,(void*)0},{(void*)0,&g_66,&l_983,&l_816,&g_66,&l_816,(void*)0},{&l_983,(void*)0,&l_816,&g_66,&g_66,&g_66,&l_816},{&l_816,&l_816,&l_983,&g_66,&g_66,(void*)0,(void*)0},{&g_66,&g_66,&l_983,&l_816,(void*)0,(void*)0,&g_66},{&g_66,(void*)0,(void*)0,&g_66,&g_66,(void*)0,&g_66}}};
            int i, j, k;
        }
    }



    ;

    ;
    ;
    return p_16;


}







static int * func_18(unsigned p_19, unsigned char p_20, char p_21, unsigned short p_22, int p_23)
{
    int *l_669 = &g_17[1];
    unsigned short l_672 = 0x0C21L;
    int l_675[3][3][7] = {{{0x5BD0700BL,1L,0xCA3E0CE3L,0x8F3F6716L,0xCA3E0CE3L,1L,0x5BD0700BL},{0x5BD0700BL,9L,(-6L),4L,1L,(-1L),0xCA3E0CE3L},{3L,9L,0xA167CC05L,0x830F1EC4L,0x76FB6943L,0x47F38A27L,9L}},{{0x76FB6943L,0x4C9A16E3L,(-6L),0x2413B52CL,(-1L),0x76FB6943L,(-1L)},{0xA167CC05L,0xCA3E0CE3L,0xCA3E0CE3L,4L,0x8F3F6716L,0x76FB6943L,(-1L)},{9L,0x4C9A16E3L,1L,0xF099C0C2L,0x80B4B6EDL,0x3018E8B3L,(-4L)}},{{0x3018E8B3L,0x80B4B6EDL,0xF099C0C2L,1L,0x4C9A16E3L,9L,(-1L)},{0x76FB6943L,0x8F3F6716L,4L,0x2B2C479BL,0x2B2C479BL,4L,0x8F3F6716L},{0x80B4B6EDL,0x8F3F6716L,0xA167CC05L,3L,(-6L),0x80B4B6EDL,0x2413B52CL}}};
    int *l_693 = (void*)0;
    struct S0 l_710 = {0x7AL};
    unsigned short l_733 = 65535UL;
    int *l_736 = &g_60;
    int *l_758 = &g_17[1];
    char *l_775 = &g_390;
    char **l_774 = &l_775;
    int *l_808 = &g_662;
    int *l_809 = &g_17[1];
    int i, j, k;
    if ((func_24(((*g_250) = l_669), (*l_669), &g_60) < (*g_382)))
    {
        unsigned l_676[7][6][6] = {{{4294967289UL,0UL,4294967295UL,0UL,4294967295UL,0x5E1B16F7L},{4294967295UL,4294967289UL,4294967295UL,1UL,1UL,4294967295UL},{4294967295UL,4294967295UL,0xB3CF177AL,0UL,4294967295UL,0x2FDFCC52L},{4294967289UL,4294967295UL,0x2AA98FFBL,0x008EB68CL,1UL,0xB3CF177AL},{0UL,4294967289UL,0x2AA98FFBL,0UL,4294967295UL,0x2FDFCC52L},{0UL,0UL,0xB3CF177AL,0UL,0UL,4294967295UL}},{{0UL,0UL,4294967295UL,0x008EB68CL,0UL,0x5E1B16F7L},{4294967289UL,0UL,4294967295UL,0UL,4294967295UL,0x5E1B16F7L},{4294967295UL,4294967289UL,4294967295UL,1UL,1UL,4294967295UL},{4294967295UL,4294967295UL,0xB3CF177AL,0UL,4294967295UL,0x2FDFCC52L},{4294967289UL,4294967295UL,0x2AA98FFBL,0x008EB68CL,0x008EB68CL,4294967295UL},{4294967295UL,0UL,0x5E1B16F7L,4294967295UL,1UL,0x2AA98FFBL}},{{4294967289UL,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x2FDFCC52L},{4294967295UL,4294967289UL,0x2FDFCC52L,0UL,4294967289UL,0xFE66DD63L},{0UL,4294967295UL,0xB3CF177AL,4294967289UL,1UL,0xFE66DD63L},{1UL,0UL,0x2FDFCC52L,0x008EB68CL,0x008EB68CL,0x2FDFCC52L},{1UL,1UL,4294967295UL,4294967289UL,4294967295UL,0x2AA98FFBL},{0UL,1UL,0x5E1B16F7L,0UL,0x008EB68CL,4294967295UL}},{{4294967295UL,0UL,0x5E1B16F7L,4294967295UL,1UL,0x2AA98FFBL},{4294967289UL,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x2FDFCC52L},{4294967295UL,4294967289UL,0x2FDFCC52L,0UL,4294967289UL,0xFE66DD63L},{0UL,4294967295UL,0xB3CF177AL,4294967289UL,1UL,0xFE66DD63L},{1UL,0UL,0x2FDFCC52L,0x008EB68CL,0x008EB68CL,0x2FDFCC52L},{1UL,1UL,4294967295UL,4294967289UL,4294967295UL,0x2AA98FFBL}},{{0UL,1UL,0x5E1B16F7L,0UL,0x008EB68CL,4294967295UL},{4294967295UL,0UL,0x5E1B16F7L,4294967295UL,1UL,0x2AA98FFBL},{4294967289UL,4294967295UL,4294967295UL,0x2A789145L,1UL,1UL},{0x2A789145L,1UL,1UL,0x4145B2DFL,1UL,4294967289UL},{4294967295UL,0x2A789145L,4294967295UL,1UL,0UL,4294967289UL},{0UL,4294967295UL,1UL,0xF08E850CL,0xF08E850CL,1UL}},{{0UL,0UL,4294967295UL,1UL,0x00AE4B68L,0x008EB68CL},{4294967295UL,0UL,0UL,0x4145B2DFL,0xF08E850CL,4294967295UL},{0x2A789145L,4294967295UL,0UL,0x2A789145L,0UL,0x008EB68CL},{1UL,0x2A789145L,4294967295UL,0x2A789145L,1UL,1UL},{0x2A789145L,1UL,1UL,0x4145B2DFL,1UL,4294967289UL},{4294967295UL,0x2A789145L,4294967295UL,1UL,0UL,4294967289UL}},{{0UL,4294967295UL,1UL,0xF08E850CL,0xF08E850CL,1UL},{0UL,0UL,4294967295UL,1UL,0x00AE4B68L,0x008EB68CL},{4294967295UL,0UL,0UL,0x4145B2DFL,0xF08E850CL,4294967295UL},{0x2A789145L,4294967295UL,0UL,0x2A789145L,0UL,0x008EB68CL},{1UL,0x2A789145L,4294967295UL,0x2A789145L,1UL,1UL},{0x2A789145L,1UL,1UL,0x4145B2DFL,1UL,4294967289UL}}};
        int *l_677 = &g_662;
        struct S0 l_689 = {0x63L};
        int i, j, k;
        (*g_102) = (void*)0;

        ;
        (*l_677) = ((safe_sub_func_int16_t_s_s((*g_115), 65535UL)) < 0xF0CBAB6BL);
        for (g_169 = 0; (g_169 != 8); g_169 = safe_add_func_uint8_t_u_u(g_169, 3))
        {
            struct S0 l_680 = {0xD0L};
            short **l_686[1][6][5] = {{{(void*)0,(void*)0,&g_115,(void*)0,&g_115},{&g_115,&g_115,&g_115,(void*)0,&g_115},{&g_115,&g_115,&g_115,(void*)0,&g_115},{&g_115,&g_115,&g_115,(void*)0,&g_115},{&g_115,&g_115,&g_115,(void*)0,&g_115},{&g_115,&g_115,&g_115,(void*)0,&g_115}}};
            struct S0 *l_711 = &l_710;
            int i, j, k;
            for (p_21 = 6; (p_21 >= 2); p_21 -= 1)
            {
                g_66 = l_680;
                return l_677;


            }
            if (((g_228[0][0] ^ (*g_115)) < ((g_516 && (*l_669)) || p_20)))
            {
                int *l_681 = &g_218;
                (*g_250) = l_681;
                (*g_250) = (void*)0;
                if ((*l_681))
                {
                    (*g_250) = l_677;
                    if (p_20)
                        break;
                    for (g_327 = 0; (g_327 > 29); g_327++)
                    {
                        int *l_684 = &g_17[3];
                        struct S0 l_685 = {0x1FL};
                        (*g_250) = (l_684 = l_681);

                        ;
                        (*g_250) = (void*)0;
                        g_66 = l_685;
                        (*l_684) = 1L;
                    }
                    for (g_218 = 0; (g_218 <= 2); g_218 += 1)
                    {
                        short ***l_687 = &l_686[0][0][2];
                        struct S0 *l_688[3][7] = {{&l_680,&l_680,&l_680,(void*)0,&g_66,&l_680,&g_66},{(void*)0,&g_66,&g_66,(void*)0,&l_680,(void*)0,(void*)0},{(void*)0,&g_66,&l_680,&l_680,&g_66,(void*)0,&g_66}};
                        int i, j;
                        (*l_687) = l_686[0][0][2];
                        l_689 = l_680;
                        if (g_17[(g_218 + 1)])
                            break;
                        g_17[(g_218 + 1)] = 0x22DBD9A4L;
                    }
                }
                else
                {
                    int *l_690 = (void*)0;
                    return l_690;


                }
                for (g_389 = 23; (g_389 <= (-17)); --g_389)
                {
                    int **l_703 = (void*)0;
                    int **l_704[1][6][7] = {{{&l_681,&g_661[4],&l_681,&g_661[3],&g_59[2][5][1],(void*)0,(void*)0},{&g_661[4],&g_59[2][5][1],&l_681,&l_681,&l_693,&l_681,&l_681},{&g_59[2][5][1],&g_59[2][5][1],&l_681,(void*)0,&l_677,(void*)0,&g_661[4]},{(void*)0,&g_59[2][5][1],&l_669,(void*)0,(void*)0,&l_669,&g_59[2][5][1]},{&l_669,&g_59[2][5][1],&g_59[2][5][1],&l_681,&l_677,&g_661[3],(void*)0},{&l_669,&g_661[4],&l_693,&g_59[2][5][1],&l_693,&g_661[4],&l_669}}};
                    int i, j, k;
                    if (((*l_669) = p_22))
                    {
                        return l_693;


                    }
                    else
                    {
                        short ***l_694 = (void*)0;
                        short ***l_695 = (void*)0;
                        short ***l_696 = (void*)0;
                        short ***l_697[4][1];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_697[i][j] = (void*)0;
                        }
                        g_698 = &g_115;
                    }
                    if (p_21)
                        break;
                    for (g_662 = 18; (g_662 >= 18); ++g_662)
                    {
                        struct S0 *l_701 = (void*)0;
                        struct S0 *l_702 = &l_680;
                        (*l_702) = l_689;
                    }
                    l_677 = ((*g_250) = l_693);

                    ;
                }
            }
            else
            {
                int *l_709[5][5][9] = {{{&g_17[3],&g_218,&g_60,&g_662,&g_662,&g_662,(void*)0,&g_17[0],&g_218},{&g_662,(void*)0,(void*)0,(void*)0,(void*)0,&g_218,&g_218,&g_17[1],&g_17[3]},{&g_17[0],&g_662,&g_218,&g_17[1],&g_17[1],&g_218,&g_662,&g_17[0],&g_17[3]},{&g_17[2],(void*)0,&g_662,&g_17[1],&g_60,&g_17[3],&g_218,(void*)0,&g_218},{&g_662,&g_218,&g_218,(void*)0,&g_17[2],&g_17[2],&g_17[2],&g_218,&g_17[3]}},{{&g_218,(void*)0,(void*)0,(void*)0,&g_17[2],(void*)0,(void*)0,&g_218,&g_17[3]},{(void*)0,&g_218,&g_218,&g_17[0],&g_60,(void*)0,&g_17[0],(void*)0,&g_218},{&g_218,&g_17[2],&g_17[3],&g_17[0],&g_17[1],(void*)0,&g_662,&g_218,&g_662},{&g_662,&g_17[0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_17[2],&g_17[2],&g_60,(void*)0,&g_17[1],&g_17[2],(void*)0,&g_17[2],&g_60}},{{&g_17[0],&g_218,&g_662,(void*)0,&g_218,&g_17[3],&g_662,&g_218,&g_17[3]},{&g_662,&g_218,&g_17[3],&g_218,(void*)0,(void*)0,&g_17[2],(void*)0,(void*)0},{&g_218,&g_662,(void*)0,&g_60,&g_17[2],&g_17[3],&g_17[1],&g_662,(void*)0},{&g_218,&g_17[1],&g_662,&g_218,&g_662,&g_662,&g_662,&g_17[0],(void*)0},{&g_17[0],(void*)0,&g_218,&g_17[1],&g_218,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_662,&g_218,&g_218,&g_218,&g_662,&g_662,(void*)0,&g_17[2],&g_662},{&g_662,&g_17[0],&g_17[3],&g_17[0],&g_17[2],&g_17[3],(void*)0,&g_218,&g_218},{&g_17[0],(void*)0,&g_17[2],(void*)0,(void*)0,&g_662,&g_218,&g_662,(void*)0},{&g_218,(void*)0,(void*)0,&g_17[2],(void*)0,(void*)0,(void*)0,&g_218,&g_60},{&g_218,&g_17[0],(void*)0,&g_17[2],&g_60,&g_662,&g_218,(void*)0,(void*)0}},{{(void*)0,&g_218,(void*)0,&g_218,&g_17[2],&g_17[3],(void*)0,&g_17[0],&g_662},{(void*)0,(void*)0,(void*)0,&g_17[0],&g_17[0],(void*)0,(void*)0,&g_17[3],&g_218},{&g_218,(void*)0,&g_60,&g_662,(void*)0,&g_218,&g_662,&g_17[1],(void*)0},{&g_17[2],&g_218,(void*)0,&g_218,&g_218,&g_218,&g_60,&g_218,&g_218},{&g_662,&g_218,&g_662,&g_60,&g_218,&g_17[0],(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                for (g_516 = 0; (g_516 <= 26); g_516++)
                {
                    for (g_327 = 0; (g_327 == 9); g_327 = safe_add_func_uint32_t_u_u(g_327, 1))
                    {
                        l_709[0][4][8] = l_669;
                    }
                }
            }
            (*l_711) = l_710;
        }



        ;
    }
    else
    {
        unsigned l_714 = 4294967295UL;
        short *l_726 = &g_116;
        unsigned l_762 = 1UL;
        int *l_771 = &g_60;
        (*l_669) = p_19;
        if ((((safe_rshift_func_int16_t_s_s(p_20, 12)) && l_714) < (safe_lshift_func_uint16_t_u_u((0x01L && 0xD8L), p_22))))
        {
            unsigned short l_719 = 0xD034L;
            int *l_720 = &g_218;
            struct S0 *l_723 = &g_66;
            if ((safe_add_func_int16_t_s_s((l_719 > (p_21 || ((*g_115) < (safe_mod_func_uint32_t_u_u(func_24(l_693, (*l_720), l_720), 4294967292UL))))), 65529UL)))
            {
                return l_720;


            }
            else
            {
                (*g_102) = l_723;

                ;
                (*l_669) = p_23;
            }

            ;
            (*l_720) = (safe_lshift_func_int16_t_s_s((*g_115), 9));
        }
        else
        {
            unsigned short l_727 = 0xD155L;
            unsigned short *l_730 = &g_516;
            unsigned short *l_731 = &g_514;
            int *l_732 = &g_218;
            (*l_669) = (((void*)0 != l_726) <= (((0x793E02C5L | l_714) & (((l_727 = (~255UL)) && g_420) != (safe_lshift_func_uint16_t_u_u((*l_669), ((*l_731) = ((*l_730) = 65532UL)))))) | p_22));
            return l_732;


        }

        ;
        if (l_733)
        {
            for (g_60 = 10; (g_60 > 24); g_60 = safe_add_func_int16_t_s_s(g_60, 5))
            {
                return l_736;


            }
        }
        else
        {
            short l_743 = 0xD77AL;
            char *l_751 = (void*)0;
            char **l_750 = &l_751;
            (*l_736) = (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(g_114, p_20)), (safe_lshift_func_int8_t_s_u((0xEAL & (p_21 && l_743)), ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((((*l_750) = &g_390) == (void*)0), l_743)), ((0x16L ^ p_23) && p_21))), 3)) & 0x8EL)))));

            ;
            (*l_669) = (safe_rshift_func_int16_t_s_u((-2L), 0));
        }
        for (l_672 = 19; (l_672 != 23); ++l_672)
        {
            unsigned char l_759 = 0x59L;
            unsigned short *l_765 = &g_282;
            int *l_766 = &g_218;
            int *l_779 = &g_60;
            for (l_714 = 0; (l_714 <= 41); ++l_714)
            {
                (*g_250) = l_758;
                (*l_758) = (l_759 = p_19);
            }
            (*g_250) = l_766;
            for (g_662 = 6; (g_662 >= 0); g_662 -= 1)
            {
                int *l_776 = &g_60;
                int i;
                (*g_250) = l_766;
                for (g_327 = (-1); (g_327 >= 15); ++g_327)
                {
                    int **l_780 = &g_59[0][3][0];
                    int *l_791 = &g_60;
                    (*l_780) = ((*g_250) = l_779);
                    for (p_21 = 2; (p_21 >= 0); p_21 -= 1)
                    {
                        int *l_781 = &g_662;
                        struct S0 l_782 = {-10L};
                        unsigned short **l_787 = &l_765;
                        int i, j, k;
                        (*g_92) = (**g_102);
                        (*g_250) = l_781;
                        (**g_102) = l_782;
                        (*l_791) = p_20;
                    }
                }



                return &g_662;


            }
            if (p_19)
                break;
        }
    }


    ;

    (*l_736) = (safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((*g_382) = func_28((*l_669), p_22)) < g_292), g_6)), 0xFB54L)) == 0xAAE2L), (-10L)));

    ;
    (*g_250) = l_758;
    l_809 = l_736;

    ;
    return l_693;


}







static unsigned char func_24(int * p_25, int p_26, int * p_27)
{
    int *l_663 = (void*)0;
    (*g_250) = l_663;
    return p_26;
}







static int func_28(short p_29, unsigned short p_30)
{
    unsigned l_437 = 0xB7B662EEL;
    unsigned char *l_444 = (void*)0;
    unsigned char **l_445[3][1][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&l_444,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_444,&l_444,&l_444,&l_444,(void*)0,&l_444,&l_444}},{{(void*)0,&l_444,(void*)0,(void*)0,(void*)0,(void*)0,&l_444,(void*)0}}};
    char *l_454 = &g_390;
    int *l_471 = (void*)0;
    struct S0 l_506 = {-1L};
    struct S0 *l_507[1];
    int l_582[7][8][4] = {{{(-2L),6L,0xEB86A71FL,0x5BF6291EL},{0xE93672E4L,8L,7L,0L},{(-1L),0xB42C9449L,(-1L),0xE8E74F60L},{0xB42C9449L,6L,(-2L),1L},{1L,0x317B286EL,0L,6L},{9L,0xE93672E4L,0L,9L},{1L,0x5BF6291EL,(-2L),0xA7A6CA38L},{0xB42C9449L,0x48E515B3L,(-1L),0xCB67CCEEL}},{{(-1L),0xCB67CCEEL,7L,0xED9845B8L},{0xE93672E4L,(-6L),0xEB86A71FL,0xA7A6CA38L},{(-2L),0xE8E74F60L,0x8ACC4969L,0x8B65B751L},{7L,(-6L),0xE8E74F60L,0xE8E74F60L},{0xADB45377L,0xADB45377L,1L,6L},{0xB42C9449L,0xE8E74F60L,7L,0xE93672E4L},{0x48E515B3L,0xA7A6CA38L,0xED9845B8L,7L},{1L,0xA7A6CA38L,(-7L),0xE93672E4L}},{{0xA7A6CA38L,0xE8E74F60L,0x317B286EL,6L},{(-1L),0xADB45377L,0x48E515B3L,0xE8E74F60L},{0x8B65B751L,(-6L),0xB2E5081BL,0x8B65B751L},{6L,0L,0x317B286EL,1L},{(-1L),0x0CAB9E08L,(-2L),0x8ACC4969L},{1L,(-2L),(-1L),(-2L)},{(-6L),9L,7L,1L},{8L,0xE93672E4L,0x8ACC4969L,7L}},{{0xADB45377L,(-6L),0xB2E672D9L,0x5BF6291EL},{0xADB45377L,7L,0x8ACC4969L,6L},{8L,0x5BF6291EL,7L,0L},{(-6L),0xA7A6CA38L,(-1L),0xADB45377L},{1L,(-1L),(-2L),0xE93672E4L},{(-1L),0x5BF6291EL,0x317B286EL,(-1L)},{6L,0xADB45377L,0xB2E5081BL,0x5BF6291EL},{0x8B65B751L,0x48E515B3L,0x48E515B3L,0x8B65B751L}},{{(-1L),0xE93672E4L,0x317B286EL,(-2L)},{0xA7A6CA38L,0x0CAB9E08L,(-7L),(-2L)},{1L,(-1L),1L,8L},{0x3C892472L,7L,(-1L),(-1L)},{(-1L),0x48E515B3L,0xB42C9449L,0x317B286EL},{0xED9845B8L,0x3C892472L,0xCA4E442AL,0L},{(-1L),0xED9845B8L,(-1L),0xB2E672D9L},{(-1L),0L,0xCB67CCEEL,0x48E515B3L}},{{9L,(-7L),1L,0xED9845B8L},{(-1L),(-2L),(-1L),0xB2E5081BL},{(-2L),0L,0xADB45377L,0xE8E74F60L},{0xE8E74F60L,(-1L),0x3C892472L,0L},{0xEB86A71FL,9L,0x3C892472L,0xEB86A71FL},{0xE8E74F60L,0x48E515B3L,0xADB45377L,(-1L)},{(-2L),(-2L),(-1L),8L},{(-1L),8L,1L,(-1L)}},{{9L,7L,0xCB67CCEEL,(-1L)},{(-1L),0xB2E5081BL,(-1L),0x317B286EL},{(-1L),9L,0xCA4E442AL,0xCA4E442AL},{0xED9845B8L,0xED9845B8L,0xB42C9449L,0xE8E74F60L},{(-1L),0xCA4E442AL,(-1L),0x48E515B3L},{0x3C892472L,(-2L),1L,(-1L)},{(-1L),(-2L),6L,0x48E515B3L},{(-2L),0xCA4E442AL,0x39A0BD93L,0xE8E74F60L}}};
    unsigned l_597[10] = {0xA893BD6CL,0xA893BD6CL,0xA893BD6CL,0xA893BD6CL,0xA893BD6CL,0xA893BD6CL,0xA893BD6CL,0xA893BD6CL,0xA893BD6CL,0xA893BD6CL};
    unsigned *l_605 = (void*)0;
    unsigned l_633 = 1UL;
    int *l_640 = &l_582[1][0][0];
    char l_646 = 0L;
    short l_650[10] = {0xDB46L,0xDB46L,(-6L),0xDB46L,0xDB46L,(-6L),0xDB46L,0xDB46L,(-6L),0xDB46L};
    int **l_658[8];
    int *l_659 = (void*)0;
    int l_660[6] = {0x27E0F0C8L,0x2AD97B92L,0x2AD97B92L,0x27E0F0C8L,0x2AD97B92L,0x2AD97B92L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_507[i] = &l_506;
    for (i = 0; i < 8; i++)
        l_658[i] = &l_640;
    if ((safe_sub_func_uint8_t_u_u((((*g_115) = l_437) <= ((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((*g_382) & (safe_rshift_func_int16_t_s_u((l_444 == (g_446 = l_444)), 12))), (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(p_30, p_29)), 8)), (!l_437))))), ((*l_454) = g_169))) ^ l_437)), 0x56L)))
    {
        int l_455 = 0xBBD69DC7L;
        int l_468 = 1L;
        int *l_472 = &l_468;
        unsigned l_489 = 5UL;
        unsigned char l_491 = 248UL;
        char l_492 = (-1L);
        unsigned ***l_495 = &g_136;
        struct S0 l_541 = {1L};
        struct S0 l_579[4] = {{6L},{6L},{6L},{6L}};
        int i;
        l_472 = ((*g_250) = &g_17[1]);

        ;
        for (g_282 = 0; (g_282 <= 3); g_282 += 1)
        {
            short **l_475 = (void*)0;
            short **l_476 = (void*)0;
            short **l_477 = &g_115;
            unsigned ****l_488 = &g_135;
            int l_490 = 4L;
            int l_496 = 0x8E63D487L;
            int i;
            (*l_472) = (+((*l_472) == (*l_472)));
            for (g_66.f0 = 0; (g_66.f0 <= 6); g_66.f0 += 1)
            {
                unsigned ***l_494[5][4][10] = {{{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136,(void*)0,(void*)0,(void*)0,(void*)0,&g_136,&g_136,&g_136},{&g_136,(void*)0,&g_136,&g_136,&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136}},{{&g_136,&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136,&g_136,(void*)0,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,(void*)0,&g_136},{&g_136,&g_136,(void*)0,&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136,&g_136},{&g_136,&g_136,(void*)0,&g_136,(void*)0,&g_136,&g_136,&g_136,&g_136,&g_136}},{{&g_136,(void*)0,&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136,(void*)0,(void*)0},{&g_136,&g_136,(void*)0,(void*)0,&g_136,&g_136,(void*)0,&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136},{(void*)0,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136}},{{(void*)0,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,(void*)0,(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136,&g_136},{(void*)0,&g_136,&g_136,&g_136,(void*)0,(void*)0,&g_136,&g_136,&g_136,&g_136}},{{&g_136,&g_136,(void*)0,&g_136,(void*)0,&g_136,&g_136,&g_136,&g_136,&g_136},{(void*)0,&g_136,&g_136,&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136,&g_136},{&g_136,&g_136,(void*)0,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136,(void*)0,(void*)0,&g_136,&g_136,&g_136}}};
                int i, j, k;
                l_471 = &g_60;

                ;
                l_496 = ((p_29 != p_30) <= ((((g_17[g_282] = (*l_472)) == 0UL) ^ ((safe_unary_minus_func_uint8_t_u((l_490 = (*g_382)))) == (((l_495 = l_494[3][0][3]) != &g_136) > ((g_447 | p_29) || 9UL)))) && (-6L)));
            }
        }

        ;
        ;
        for (g_282 = 0; (g_282 == 43); ++g_282)
        {
            struct S0 l_505 = {0x2EL};
            int l_532 = 0L;
            int *l_533 = (void*)0;
            unsigned ****l_542 = &l_495;
            for (g_66.f0 = 15; (g_66.f0 < (-13)); g_66.f0 = safe_sub_func_int32_t_s_s(g_66.f0, 1))
            {
                int l_509 = 0x3FEC6A30L;
                for (g_169 = 0; (g_169 < (-1)); g_169--)
                {
                    for (p_29 = 0; (p_29 != (-21)); p_29--)
                    {
                        struct S0 l_508 = {0x14L};
                        l_506 = l_505;
                        (*g_102) = (l_507[0] = &g_66);

                        ;
                        l_508 = l_505;
                    }
                }
                if ((((l_509 = ((*l_472) = p_30)) < p_30) && p_29))
                {
                    int *l_517 = &g_218;
                    for (l_455 = 0; (l_455 != (-7)); l_455 = safe_sub_func_int32_t_s_s(l_455, 3))
                    {
                        unsigned short *l_512 = (void*)0;
                        unsigned short *l_513 = &g_514;
                        unsigned short *l_515 = &g_516;
                        (*g_250) = &l_509;
                        (*l_472) = ((*l_472) ^ (((*l_513) = g_66.f0) <= ((*l_515) = 0x2781L)));
                    }



                    l_517 = &l_468;

                    ;
                }
                else
                {
                    int l_518 = 0x183FE73EL;
                    return l_518;
                }



            }


            for (g_516 = 24; (g_516 > 10); g_516--)
            {
                int *l_535 = (void*)0;
                char l_552 = 0L;
                int *l_573[5][5] = {{&l_468,&l_468,&g_60,&g_60,&l_468},{&g_218,(void*)0,&g_218,(void*)0,&g_218},{&l_468,&g_60,&g_60,&l_468,&l_468},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_468,&l_468,&g_60,&g_60,&l_468}};
                int i, j;
                for (l_468 = 0; (l_468 <= (-5)); l_468--)
                {
                    unsigned char l_530 = 0x75L;
                    char *l_531 = &l_506.f0;
                    int *l_534 = &g_17[1];
                    for (l_491 = 9; (l_491 > 7); l_491 = safe_sub_func_uint16_t_u_u(l_491, 1))
                    {
                        unsigned char l_525 = 4UL;
                        unsigned short *l_526 = (void*)0;
                        unsigned short *l_527 = &g_514;
                        int *l_536 = (void*)0;
                        l_536 = &l_532;

                        ;
                        (*g_250) = &l_532;
                        (*g_250) = &l_532;
                    }
                }
                for (g_447 = 0; (g_447 <= 4); g_447 = safe_add_func_uint16_t_u_u(g_447, 1))
                {
                    for (l_505.f0 = 0; (l_505.f0 == (-6)); --l_505.f0)
                    {
                        if (p_30)
                            break;
                    }
                    for (g_60 = 1; (g_60 >= 0); g_60 -= 1)
                    {
                        int i;
                        (*l_472) = g_351[(g_60 + 1)];
                        l_505 = l_541;
                    }
                }
                (*g_250) = l_535;
                if ((l_542 != &g_135))
                {
                    char l_545 = 0x83L;
                    int l_548 = 0xDE0D48E5L;
                    (*l_472) = (safe_add_func_int16_t_s_s((l_545 <= p_29), g_17[3]));
                    for (g_66.f0 = 0; (g_66.f0 < (-2)); --g_66.f0)
                    {
                        unsigned l_549[3][6][8] = {{{0xE20E0090L,0x7A1D1F94L,0x78949836L,0xA67D3E77L,0xBC206280L,4294967289UL,4294967293UL,4294967288UL},{0xE20E0090L,9UL,4294967289UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967289UL},{4294967295UL,4294967295UL,9UL,4294967294UL,0x7A1D1F94L,9UL,0x5988F221L,0x3DFAE343L},{0x10D85829L,0x78949836L,4294967293UL,9UL,0x7398F5DBL,4294967288UL,0xBC206280L,0x3DFAE343L},{0x78949836L,4294967289UL,0xA67D3E77L,4294967294UL,0xE20E0090L,4294967294UL,0xA67D3E77L,4294967288UL},{4294967289UL,4294967295UL,0x00E51292L,4294967295UL,0x5988F221L,0xEB407D83L,4294967288UL,0x0BD1878BL}},{{0x7A1D1F94L,0x78949836L,0xA67D3E77L,0xBC206280L,4294967289UL,4294967293UL,4294967288UL,9UL},{0xE20E0090L,0xBC206280L,0x00E51292L,0xEB407D83L,0xEB407D83L,0x00E51292L,0xBC206280L,0xE20E0090L},{0xEB407D83L,0x00E51292L,0xBC206280L,0xE20E0090L,0x10D85829L,4294967295UL,0x7A1D1F94L,0xA522300FL},{0xBC206280L,0xA67D3E77L,0x78949836L,0x7A1D1F94L,0xE20E0090L,4294967295UL,9UL,0x3DFAE343L},{4294967295UL,0x00E51292L,4294967295UL,4294967289UL,4294967295UL,0x00E51292L,4294967295UL,0x5988F221L},{0x3DFAE343L,0xBC206280L,4294967288UL,0x7398F5DBL,9UL,4294967293UL,0x78949836L,0x10D85829L}},{{4294967293UL,0x78949836L,0x7398F5DBL,0xA522300FL,9UL,0xEB407D83L,4294967289UL,4294967289UL},{0x3DFAE343L,4294967295UL,0x10D85829L,0x10D85829L,4294967295UL,0x3DFAE343L,9UL,4294967293UL},{4294967295UL,4294967288UL,4294967293UL,0x00E51292L,0xE20E0090L,0x0BD1878BL,4294967293UL,0xF5442B9CL},{0xBC206280L,0x7398F5DBL,9UL,0x00E51292L,0x10D85829L,4294967293UL,0xA67D3E77L,4294967293UL},{0xEB407D83L,0x10D85829L,0x7A1D1F94L,0x10D85829L,0xEB407D83L,0x78949836L,0xE20E0090L,0x00E51292L},{0xA67D3E77L,4294967289UL,0x78949836L,0x5988F221L,0x00E51292L,4294967293UL,4294967295UL,0x0BD1878BL}}};
                        int i, j, k;
                        if (p_29)
                            break;
                        (*l_472) = p_30;
                        l_549[2][1][2] = ((((*l_472) = 1UL) == l_548) ^ p_29);
                    }
                }
                else
                {
                    short l_553 = 0xB7ECL;
                    unsigned short l_554[3][10][8] = {{{65535UL,0x0EE4L,0x6329L,0xE26CL,65529UL,0x2CF5L,0x2CF5L,65529UL},{1UL,0xDB14L,0xDB14L,1UL,0x61E4L,0xC94FL,0x1581L,0UL},{1UL,0UL,1UL,0x3485L,0x0EE4L,65531UL,0x08BBL,0xFC9EL},{1UL,0UL,0xE26CL,0xC7CFL,0UL,0xC94FL,0x32DEL,0x5D38L},{0xDB6FL,0xDB14L,0x3CC6L,0xEFA8L,0xEDC5L,0x2CF5L,0xDB6FL,0xC94FL},{0UL,0x0EE4L,0x8227L,0x46D8L,0xDFF2L,1UL,0x08C2L,0x53FFL},{0x6329L,0x08BBL,0x32DEL,0xEDC5L,0x4F7EL,0x61E4L,0xA9D9L,0xB277L},{4UL,0x7195L,65535UL,0x53FFL,0xEDC5L,0xC7CFL,0x53FFL,1UL},{0x46D8L,65535UL,65531UL,65534UL,0UL,0x8227L,0x5D38L,0x0EE4L},{1UL,0x08C2L,0x3851L,0xE26CL,0x1581L,0x7195L,0xDB14L,8UL}},{{65534UL,0x2CF5L,65534UL,1UL,0x61E4L,1UL,0x3CC6L,1UL},{0xEDC5L,0x455CL,8UL,0x455CL,0xEDC5L,1UL,0x7195L,65534UL},{0x8227L,1UL,65533UL,0x1E45L,0UL,0xA097L,0UL,0x455CL},{0xC132L,1UL,65533UL,0x2CF5L,1UL,1UL,0x7195L,0x56C5L},{0UL,0xC7CFL,8UL,65534UL,0UL,8UL,0x3CC6L,65535UL},{65531UL,0x7195L,65535UL,0x5638L,0x2CF5L,65529UL,65533UL,0xC132L},{0x455CL,0UL,0x334DL,0UL,0x5638L,0xBD1AL,1UL,3UL},{1UL,0x32DEL,1UL,0xC7CFL,3UL,8UL,0x3851L,0x3CC6L},{3UL,0x3CC6L,0x8227L,65535UL,0xE26CL,0x2896L,1UL,0xE3EDL},{0xEC73L,1UL,0UL,0x6B19L,0xDCC5L,1UL,0x61E4L,0x8227L}},{{0x6B19L,0UL,0x1581L,0xC94FL,0x61E4L,1UL,0xDB14L,0xDB14L},{3UL,0x3851L,1UL,1UL,0x3851L,3UL,0UL,0x8EF5L},{0UL,5UL,65535UL,0xC132L,0x5638L,8UL,0xC94FL,0xDCC5L},{0xEC73L,0x2CF5L,0x4F7EL,65535UL,0x455CL,0xFC9EL,0x32DEL,0xE3EDL},{65535UL,0x455CL,1UL,65535UL,0x8EF5L,0x2896L,0xA097L,0x455CL},{0xEDC5L,1UL,65535UL,0x61E4L,65535UL,1UL,0xE26CL,0x5638L},{1UL,0x6329L,0x08BBL,0x32DEL,0xEDC5L,0x4F7EL,0x61E4L,0xA9D9L},{0x5638L,0x32DEL,1UL,5UL,65534UL,0x334DL,0xA097L,65534UL},{0UL,1UL,0x334DL,0UL,65533UL,1UL,0xC132L,1UL},{0xDB14L,0xE3EDL,0x4F7EL,0x3CC6L,0x7195L,0x08BBL,0x8EF5L,65535UL}}};
                    int *l_574 = (void*)0;
                    unsigned char **l_575 = &g_382;
                    int i, j, k;
                    for (l_437 = 11; (l_437 > 36); l_437 = safe_add_func_uint32_t_u_u(l_437, 5))
                    {
                        l_541 = l_541;
                        return l_552;



                    }
                    if ((l_553 = (~p_29)))
                    {
                        (*l_472) = l_554[0][2][5];
                    }
                    else
                    {
                        int l_566 = (-1L);
                        short *l_567 = &g_389;
                        unsigned *l_568 = &g_420;
                        unsigned short *l_571 = &g_514;
                        unsigned l_572 = 0UL;
                        (*l_472) = (((safe_add_func_int16_t_s_s(0L, (*g_115))) > ((((*l_568) = (((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((&g_516 != &p_30), ((((*l_567) = ((safe_unary_minus_func_uint32_t_u((p_29 < ((*g_115) == (*g_115))))) > (safe_rshift_func_int8_t_s_u(((((safe_rshift_func_uint8_t_u_s(((l_532 = p_29) > l_437), 3)) > (-1L)) | g_514) == l_566), 3)))) != p_30) ^ l_566))), (*g_382))) <= 0xCBACL) || p_30)) >= 0x8266EDDEL) <= p_30)) == p_29);
                        (*l_472) = (safe_sub_func_uint8_t_u_u(l_554[0][3][6], (((*l_571) = 0xB809L) || (-6L))));
                        l_574 = l_573[3][3];

                        ;
                        g_410 = l_575;

                        ;
                    }

                    ;
                    for (l_541.f0 = 0; (l_541.f0 <= (-24)); l_541.f0 = safe_sub_func_int32_t_s_s(l_541.f0, 6))
                    {
                        struct S0 l_578 = {-7L};
                        l_579[2] = l_578;
                    }
                }
            }



            return p_29;



        }
    }
    else
    {
        unsigned short l_596[9][8][3] = {{{0xBBEEL,0x5E94L,65530UL},{1UL,0xBD05L,65535UL},{0UL,0xD67BL,0x2A4EL},{65530UL,0x64ADL,65530UL},{0x2A4EL,0xD67BL,0UL},{65535UL,0xBD05L,1UL},{65530UL,0x5E94L,0xBBEEL},{65532UL,65532UL,65535UL}},{{65530UL,65531UL,0x20B2L},{65535UL,65535UL,65529UL},{0x2A4EL,1UL,0xA109L},{65530UL,65535UL,65529UL},{0UL,0x4A2BL,0xA109L},{0xBD05L,1UL,65530UL},{65530UL,0UL,65530UL},{65530UL,1UL,0xBD05L}},{{0xA109L,0x4A2BL,0x39EAL},{0x8F3EL,65532UL,65529UL},{1UL,0xD67BL,0xBBEEL},{0x8F3EL,65530UL,65532UL},{0xA109L,0x80CEL,1UL},{65530UL,0x9800L,0x9800L},{65530UL,1UL,1UL},{0xBD05L,0x64ADL,65532UL}},{{0x39EAL,1UL,0xBBEEL},{65529UL,0xE9F8L,65529UL},{0xBBEEL,1UL,0x39EAL},{65532UL,0x64ADL,0xBD05L},{1UL,1UL,65530UL},{0x9800L,0x9800L,65530UL},{1UL,0x80CEL,0xA109L},{65532UL,65530UL,0x8F3EL}},{{0xBBEEL,0xD67BL,1UL},{65529UL,65532UL,0x8F3EL},{0x39EAL,0x4A2BL,0xA109L},{0xBD05L,1UL,65530UL},{65530UL,0UL,65530UL},{65530UL,1UL,0xBD05L},{0xA109L,0x4A2BL,0x39EAL},{0x8F3EL,65532UL,65529UL}},{{1UL,0xD67BL,0xBBEEL},{0x8F3EL,65530UL,65532UL},{0xA109L,0x80CEL,1UL},{65530UL,0x9800L,0x9800L},{1UL,0x4A2BL,0UL},{65530UL,65529UL,0x64ADL},{0xBBEEL,65531UL,0xA109L},{0x9800L,0x8F3EL,0x9800L}},{{0xA109L,65531UL,0xBBEEL},{0x64ADL,65529UL,65530UL},{0UL,0x4A2BL,1UL},{0xE9F8L,0xE9F8L,65532UL},{0UL,1UL,0x2A37L},{0x64ADL,65532UL,1UL},{0xA109L,0UL,65527UL},{0x9800L,0x64ADL,1UL}},{{0xBBEEL,0x6025L,0x2A37L},{65530UL,65535UL,65532UL},{1UL,0x6E29L,1UL},{65532UL,65535UL,65530UL},{0x2A37L,0x6025L,0xBBEEL},{1UL,0x64ADL,0x9800L},{65527UL,0UL,0xA109L},{1UL,65532UL,0x64ADL}},{{0x2A37L,1UL,0UL},{65532UL,0xE9F8L,0xE9F8L},{1UL,0x4A2BL,0UL},{65530UL,65529UL,0x64ADL},{0xBBEEL,65531UL,0xA109L},{0x9800L,0x8F3EL,0x9800L},{0xA109L,65531UL,0xBBEEL},{0x64ADL,65529UL,65530UL}}};
        int l_598 = 0x8104C6D1L;
        int *l_599 = &g_218;
        int i, j, k;
        l_582[1][0][0] = (safe_add_func_int16_t_s_s((p_29 <= p_29), ((*g_115) = (*g_115))));
        for (g_218 = 0; (g_218 == 0); g_218 = safe_add_func_int32_t_s_s(g_218, 4))
        {
            int l_589[2];
            int l_592 = (-1L);
            unsigned short *l_593[7][2] = {{&g_282,&g_516},{&g_516,&g_282},{&g_516,&g_516},{&g_282,&g_516},{&g_516,&g_282},{&g_516,&g_516},{&g_282,&g_282}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_589[i] = 0x16119B03L;
            for (g_514 = 0; (g_514 != 5); g_514++)
            {
                return p_29;
            }
            l_598 = (((g_516 = (safe_mul_func_int16_t_s_s(((~l_589[1]) && (safe_rshift_func_int16_t_s_s(0x3A87L, 5))), l_592))) || (p_29 || (safe_sub_func_int32_t_s_s(((p_29 && g_351[3]) >= g_447), l_597[4])))) & (-2L));
            if (p_30)
                continue;
        }
        l_471 = (l_599 = &l_582[1][5][3]);

        ;
        ;
    }

    ;
    ;
    for (g_389 = 23; (g_389 <= 11); g_389--)
    {
        unsigned *l_603[6][3][6] = {{{&g_420,&l_597[4],&l_597[4],&l_597[6],&l_597[4],&l_597[4]},{&l_597[4],&l_597[1],&l_597[4],&g_420,&g_420,&l_597[4]},{&l_597[4],&l_597[4],(void*)0,&g_292,&l_597[4],&g_420}},{{&l_597[4],&l_597[4],&g_420,(void*)0,&g_420,&l_597[4]},{&l_597[4],&l_597[1],(void*)0,&l_597[4],&l_597[4],(void*)0},{&l_597[4],&l_597[4],&l_597[4],&l_597[4],&g_292,&l_597[4]}},{{&l_597[4],&g_420,(void*)0,(void*)0,&l_597[4],&l_597[4]},{&g_420,&l_597[4],(void*)0,&g_420,&l_597[4],&l_597[4]},{&l_597[4],&g_420,&l_597[4],(void*)0,&l_597[2],(void*)0}},{{(void*)0,&l_597[2],(void*)0,&l_597[4],&g_420,&l_597[4]},{&l_597[4],&l_597[4],&g_420,(void*)0,&l_597[4],&g_420},{&l_597[4],&l_597[4],(void*)0,(void*)0,&g_420,&l_597[4]}},{{&l_597[4],&g_292,&l_597[4],&l_597[4],&l_597[4],&l_597[4]},{(void*)0,&l_597[4],&l_597[4],(void*)0,&l_597[1],&l_597[4]},{&l_597[4],&g_420,(void*)0,&g_420,&l_597[4],&l_597[4]}},{{&g_420,&l_597[4],&g_292,&l_597[4],(void*)0,(void*)0},{&g_420,&l_597[4],&l_597[4],&g_420,&g_292,&g_420},{&l_597[4],&l_597[4],&g_420,&l_597[4],&l_597[4],&l_597[4]}}};
        unsigned **l_604[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int l_613 = 0x03E415A8L;
        int *l_624 = &l_613;
        int i, j, k;
        for (g_420 = 0; (g_420 <= 9); g_420 += 1)
        {
            struct S0 *l_602 = &g_66;
            int i;
            if (l_597[g_420])
                break;
            (*g_102) = l_602;

            ;
        }
        l_613 = (((l_605 = l_603[2][1][1]) != &g_292) == ((safe_unary_minus_func_uint32_t_u(p_30)) <= ((safe_mod_func_uint8_t_u_u(p_29, (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(l_613, 4)), 3)))) > (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_613, g_327)), p_30)), 8)))));
        if (p_30)
            continue;
        for (g_218 = 12; (g_218 < (-25)); --g_218)
        {
            int *l_625[4][2] = {{&l_582[1][0][0],&l_582[1][0][0]},{&l_582[1][0][0],&l_582[1][0][0]},{&l_582[1][0][0],&l_582[1][0][0]},{&l_582[1][0][0],&l_582[1][0][0]}};
            int i, j;
            l_625[3][1] = (l_624 = &l_613);


        }
    }

    ;
    if ((l_582[1][0][0] = ((void*)0 != &g_115)))
    {
        struct S0 **l_626 = &l_507[0];
        struct S0 *l_627[6];
        int l_630 = 0x4B744C01L;
        int l_634 = 0x764281D1L;
        unsigned *l_635 = (void*)0;
        unsigned *l_636 = &l_597[4];
        unsigned short *l_637[4] = {&g_282,&g_282,&g_282,&g_282};
        int i;
        for (i = 0; i < 6; i++)
            l_627[i] = &l_506;
        (*g_250) = &l_582[1][0][0];



        return p_30;



    }
    else
    {
        int *l_641 = &l_582[3][4][3];
        int **l_642 = (void*)0;
        int **l_643 = &g_59[1][6][0];
        char *l_647 = &l_506.f0;
        (*l_643) = &l_582[1][0][0];


        (*g_250) = (void*)0;
        for (g_327 = 0; (g_327 < (-11)); --g_327)
        {
            unsigned short *l_654 = &g_282;
            unsigned short **l_653 = &l_654;
            unsigned short ***l_655 = &l_653;
            (*l_655) = l_653;
        }
        for (g_116 = 0; (g_116 <= 19); ++g_116)
        {
            (*l_641) = p_29;
            (*l_640) = p_30;
        }
    }


    l_659 = ((*g_250) = &l_582[1][0][0]);



    ;
    return l_660[4];




}







static unsigned short func_37(int * p_38, int * p_39, int * p_40, char p_41, unsigned p_42)
{
    unsigned short l_361 = 65535UL;
    unsigned *l_362 = &g_292;
    int l_363 = (-8L);
    unsigned char *l_366[9] = {&g_228[0][0],&g_228[0][0],&g_228[0][0],&g_228[0][0],&g_228[0][0],&g_228[0][0],&g_228[0][0],&g_228[0][0],&g_228[0][0]};
    struct S0 l_403 = {0x04L};
    unsigned char **l_409 = (void*)0;
    unsigned l_433 = 7UL;
    int l_434 = (-10L);
    int i;
    if (l_363)
    {
        int l_367 = 0xD9D49372L;
        int *l_381[9][8] = {{&l_363,&l_363,&l_363,(void*)0,&g_17[0],&g_17[0],(void*)0,&l_363},{&l_363,&l_363,&g_17[0],&l_363,&g_17[2],&l_363,&g_17[0],&l_363},{&l_363,&l_363,(void*)0,&g_17[0],&g_17[0],(void*)0,&l_363,&l_363},{&l_363,(void*)0,&l_363,&l_363,&l_363,(void*)0,&l_363,&l_363},{(void*)0,&l_363,(void*)0,(void*)0,&l_363,(void*)0,&g_17[0],(void*)0},{&l_363,(void*)0,&g_17[0],(void*)0,&l_363,(void*)0,(void*)0,&l_363},{(void*)0,&l_363,&l_363,&l_363,(void*)0,&g_17[0],(void*)0,&l_363},{(void*)0,(void*)0,(void*)0,&l_363,&g_17[2],&g_17[2],&l_363,(void*)0},{(void*)0,(void*)0,&g_17[2],&g_17[0],&l_363,&g_17[0],&g_17[2],(void*)0}};
        struct S0 l_395 = {3L};
        char l_405 = 0x0AL;
        int i, j;
        (*g_250) = (*g_250);

        ;
        ;
        if ((p_42 ^ (safe_mul_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((~p_41), 0xFE291C01L)), l_363)) < 249UL), 0x12L))))
        {
            unsigned char *l_376 = (void*)0;
            int *l_377 = &g_218;
            int **l_378[2][1][4];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_378[i][j][k] = &g_59[0][1][0];
                }
            }
            g_59[2][5][1] = func_43((l_376 != l_376), ((p_40 = ((*g_250) = l_377)) != (void*)0), p_38);


            ;
            ;
            ;
            (*g_250) = p_38;
        }
        else
        {
            for (g_66.f0 = 0; (g_66.f0 >= 11); g_66.f0 = safe_add_func_uint16_t_u_u(g_66.f0, 8))
            {
                (*g_250) = l_381[2][0];
                l_363 = (*p_38);
            }

            ;
            ;
        }


        ;
        ;
        ;
        if (((((void*)0 != g_382) != (safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_41, (((*g_382) = 1UL) < (g_389 = ((safe_rshift_func_int16_t_s_u((*g_115), 14)) <= p_42))))), (((((g_390 = (l_363 = (p_42 != p_42))) != ((*g_115) != p_42)) ^ 1UL) == (*p_40)) < (*p_40))))) >= p_42))
        {
            unsigned l_396 = 0xB49BAC65L;
            int *l_398[7] = {(void*)0,(void*)0,&g_218,(void*)0,(void*)0,&g_218,(void*)0};
            struct S0 l_399 = {0x9EL};
            struct S0 *l_400 = (void*)0;
            struct S0 *l_401 = (void*)0;
            struct S0 *l_402[9] = {&l_399,&g_66,&l_399,&g_66,&l_399,&g_66,&l_399,&g_66,&l_399};
            int i;
            for (g_292 = 0; (g_292 <= 1); g_292 += 1)
            {
                struct S0 l_391 = {0x7EL};
                struct S0 *l_392 = &l_391;
                int *l_397 = &l_363;
                (*l_392) = l_391;
                for (g_282 = 0; (g_282 <= 1); g_282 += 1)
                {
                    int l_394 = 0x00EEA3EAL;
                    int i;
                    for (g_389 = 1; (g_389 >= 0); g_389 -= 1)
                    {
                        int **l_393 = &g_59[g_282][(g_282 + 7)][g_389];
                        int i, j, k;
                        (*l_393) = ((*g_250) = (*g_250));
                    }
                    l_394 = g_351[g_282];
                    (*g_102) = (*g_102);
                    for (p_41 = 1; (p_41 >= 0); p_41 -= 1)
                    {
                        int i, j, k;
                        l_363 = 0x07668F40L;
                        (*l_392) = l_395;
                        (*g_250) = l_397;
                        (*g_250) = l_398[1];
                    }
                }
            }


            l_403 = l_399;
        }
        else
        {
            int *l_404 = &g_60;
            short l_406 = 0xD374L;
            (*l_404) = ((l_405 <= (p_41 > (l_406 < (safe_mul_func_uint16_t_u_u(g_327, (*g_115)))))) >= (*g_382));
        }


    }
    else
    {
        unsigned short l_418 = 65535UL;
        int ***l_427 = &g_250;
        unsigned short l_428[9][9][1] = {{{0x6BDDL},{0xE029L},{65535UL},{0x7277L},{1UL},{1UL},{0x7277L},{65535UL},{0xE029L}},{{0x6BDDL},{0UL},{0x2EAAL},{0UL},{1UL},{0x7BC2L},{7UL},{4UL},{7UL}},{{0x7BC2L},{1UL},{0UL},{0x2EAAL},{0UL},{0x6BDDL},{0xE029L},{65535UL},{0x7277L}},{{1UL},{1UL},{0x7277L},{65535UL},{0xE029L},{0x6BDDL},{0UL},{0x2EAAL},{0UL}},{{1UL},{0x7BC2L},{7UL},{4UL},{7UL},{0x7BC2L},{1UL},{0UL},{0x2EAAL}},{{0UL},{0x6BDDL},{0xE029L},{65535UL},{0x7277L},{1UL},{1UL},{0x7277L},{65535UL}},{{0xE029L},{0x6BDDL},{0UL},{0x2EAAL},{0UL},{0x4FD2L},{65535UL},{1UL},{0x7277L}},{{1UL},{65535UL},{0x4FD2L},{7UL},{0xA06FL},{0x5D3FL},{0xB401L},{0x6BDDL},{0xD607L}},{{0UL},{7UL},{7UL},{0UL},{0xD607L},{0x6BDDL},{0xB401L},{0x5D3FL},{0xA06FL}}};
        unsigned short l_432 = 65534UL;
        int i, j, k;
        g_410 = (l_409 = &l_366[4]);

        ;
        ;
        (*g_102) = &l_403;

        ;
        for (l_361 = 0; (l_361 <= 0); l_361 += 1)
        {
            char *l_415 = (void*)0;
            int *l_419 = &g_60;
            struct S0 *l_430 = &g_66;
            int i;
            l_363 = ((65530UL != (safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((p_41 = p_41) & p_42), (safe_add_func_int32_t_s_s(((*l_419) = l_418), (g_420 || (safe_mul_func_uint8_t_u_u((l_361 && ((((*g_115) = ((p_42 | (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(l_403.f0, p_42)), p_42))) || 0x0052FD0EL)) >= l_403.f0) >= p_42)), p_42))))))), (-1L)))) <= p_42);
            (*l_419) = (*l_419);
            for (g_327 = 1; (g_327 >= 0); g_327 -= 1)
            {
                char l_431 = (-1L);
                (*g_102) = (*g_102);
                for (p_41 = 1; (p_41 >= 0); p_41 -= 1)
                {
                    int i, j, k;
                    (*g_250) = p_38;
                    for (g_169 = 0; (g_169 <= 8); g_169 += 1)
                    {
                        int **l_429 = &g_59[0][2][1];
                        int i, j;
                        (*g_250) = p_40;
                        (*l_429) = ((*g_250) = (*g_250));
                        (*g_102) = l_430;

                        ;
                        if (g_228[l_361][p_41])
                            continue;
                    }
                    l_432 = l_431;
                }
            }
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
    ;
    l_363 = l_433;
    l_403 = l_403;
    return l_434;






}







static int * func_43(unsigned short p_44, int p_45, int * p_46)
{
    struct S0 *l_223 = &g_66;
    int l_226[2];
    unsigned char *l_227[4] = {&g_228[0][0],&g_228[0][0],&g_228[0][0],&g_228[0][0]};
    int *l_235 = (void*)0;
    int **l_248 = &g_240;
    int ***l_249[9][5][5] = {{{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248}},{{&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248}},{{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,(void*)0,&l_248,(void*)0,&l_248},{(void*)0,&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,(void*)0,&l_248}},{{&l_248,&l_248,&l_248,(void*)0,(void*)0},{&l_248,&l_248,(void*)0,(void*)0,&l_248},{&l_248,&l_248,&l_248,(void*)0,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248}},{{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,(void*)0,&l_248},{&l_248,&l_248,&l_248,&l_248,(void*)0}},{{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,&l_248,(void*)0},{&l_248,(void*)0,&l_248,&l_248,&l_248}},{{(void*)0,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,(void*)0,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,(void*)0,(void*)0,&l_248}},{{&l_248,&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,&l_248,(void*)0},{(void*)0,&l_248,&l_248,&l_248,&l_248},{&l_248,(void*)0,&l_248,&l_248,&l_248},{&l_248,(void*)0,&l_248,&l_248,&l_248}},{{&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,(void*)0,(void*)0},{(void*)0,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,(void*)0,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248}}};
    unsigned ***l_252 = &g_136;
    unsigned ****l_253 = (void*)0;
    unsigned ****l_254 = &g_135;
    int l_297 = 0x9BEDD66AL;
    struct S0 l_321 = {0x25L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_226[i] = 0xAA639954L;
    if (((l_223 == l_223) >= (safe_mod_func_uint8_t_u_u((l_226[0] = (0UL | (*g_115))), 0x43L))))
    {
        g_59[2][9][1] = &l_226[1];


        l_226[1] = (g_114 && g_116);
    }
    else
    {
        struct S0 l_234 = {0L};
        l_226[1] = (*p_46);
        for (g_114 = 0; (g_114 <= 7); g_114 = safe_add_func_uint16_t_u_u(g_114, 6))
        {
            int *l_245 = (void*)0;
            for (p_45 = 0; (p_45 <= 3); p_45 += 1)
            {
                int *l_241 = (void*)0;
                int **l_246 = (void*)0;
                int **l_247 = &g_59[0][5][0];
                for (g_218 = 1; (g_218 >= 0); g_218 -= 1)
                {
                    struct S0 l_231 = {0x94L};
                    int *l_233 = &g_60;
                    int *l_244 = &l_226[1];
                    int i;
                    if ((+l_226[g_218]))
                    {
                        (*l_223) = l_231;
                    }
                    else
                    {
                        int *l_232 = (void*)0;
                        l_233 = l_232;

                        ;
                        l_234 = ((*l_223) = g_66);
                        l_235 = p_46;


                    }

                    ;
                    for (g_169 = 0; g_169 < 2; g_169 += 1)
                    {
                        l_226[g_169] = 0x628EA8F4L;
                    }
                    if (((*g_115) ^ (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((&g_218 != (void*)0), g_66.f0)), 65529UL))))
                    {
                        return g_240;


                    }
                    else
                    {
                        int **l_242 = (void*)0;
                        int **l_243[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_243[i] = &l_233;
                        l_241 = l_241;
                    }
                    (*l_244) = 1L;
                }
                (*l_247) = l_245;
            }


            return &g_17[2];


        }
        (*l_223) = l_234;
    }


    p_46 = p_46;
    if ((((g_250 = l_248) == (g_251 = &g_61)) & (l_252 == ((*l_254) = &g_136))))
    {
        int *l_255 = &g_218;
        return l_255;



    }
    else
    {
        unsigned char l_263[2];
        int l_268 = 5L;
        int ***l_272 = &g_251;
        int l_273[1];
        int l_285 = 0xBFDCEE5BL;
        unsigned char l_308 = 0x1FL;
        short l_309[7][8][4] = {{{0x9A04L,(-6L),0L,0L},{0x5326L,0x5326L,0x279FL,0xC0F8L},{0x5326L,0x32B6L,0L,0x5326L},{0x9A04L,0xC0F8L,0x9A04L,0L},{(-6L),0xC0F8L,0x279FL,0x5326L},{0xC0F8L,0x32B6L,0x32B6L,0xC0F8L},{0x9A04L,0x5326L,0x32B6L,0L},{0xC0F8L,(-6L),0x279FL,(-6L)}},{{(-6L),0x32B6L,0x9A04L,0x9A04L},{0x279FL,0x9A04L,0x1044L,0x1044L},{0x32B6L,0x32B6L,0xC0F8L,0L},{0x32B6L,0x04B8L,0x1044L,0x32B6L},{0x279FL,0L,0x279FL,0x1044L},{0x9A04L,0L,0xC0F8L,0x32B6L},{0L,0x04B8L,0x04B8L,0L},{0x279FL,0x32B6L,0x04B8L,0x1044L}},{{0L,0x9A04L,0xC0F8L,0x9A04L},{0x9A04L,0x04B8L,0x279FL,0x9A04L},{0x279FL,0x9A04L,0x1044L,0x1044L},{0x32B6L,0x32B6L,0xC0F8L,0L},{0x32B6L,0x04B8L,0x1044L,0x32B6L},{0x279FL,0L,0x279FL,0x1044L},{0x9A04L,0L,0xC0F8L,0x32B6L},{0L,0x04B8L,0x04B8L,0L}},{{0x279FL,0x32B6L,0x04B8L,0x1044L},{0L,0x9A04L,0xC0F8L,0x9A04L},{0x9A04L,0x04B8L,0x279FL,0x9A04L},{0x279FL,0x9A04L,0x1044L,0x1044L},{0x32B6L,0x32B6L,0xC0F8L,0L},{0x32B6L,0x04B8L,0x1044L,0x32B6L},{0x279FL,0L,0x279FL,0x1044L},{0x9A04L,0L,0xC0F8L,0x32B6L}},{{0L,0x04B8L,0x279FL,0x32B6L},{0x1044L,0x9A04L,0x279FL,0x04B8L},{0x32B6L,0L,0x5326L,0L},{0L,0x279FL,0x1044L,0L},{0x1044L,0L,0x04B8L,0x04B8L},{0x9A04L,0x9A04L,0x5326L,0x32B6L},{0x9A04L,0x279FL,0x04B8L,0x9A04L},{0x1044L,0x32B6L,0x1044L,0x04B8L}},{{0L,0x32B6L,0x5326L,0x9A04L},{0x32B6L,0x279FL,0x279FL,0x32B6L},{0x1044L,0x9A04L,0x279FL,0x04B8L},{0x32B6L,0L,0x5326L,0L},{0L,0x279FL,0x1044L,0L},{0x1044L,0L,0x04B8L,0x04B8L},{0x9A04L,0x9A04L,0x5326L,0x32B6L},{0x9A04L,0x279FL,0x04B8L,0x9A04L}},{{0x1044L,0x32B6L,0x1044L,0x04B8L},{0L,0x32B6L,0x5326L,0x9A04L},{0x32B6L,0x279FL,0x279FL,0x32B6L},{0x1044L,0x9A04L,0x279FL,0x04B8L},{0x32B6L,0L,0x5326L,0L},{0L,0x279FL,0x1044L,0L},{0x1044L,0L,0x04B8L,0x04B8L},{0x9A04L,0x9A04L,0x5326L,0x32B6L}}};
        int *l_311 = &l_297;
        struct S0 l_329 = {3L};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_263[i] = 2UL;
        for (i = 0; i < 1; i++)
            l_273[i] = 0x45E88E8FL;
        for (p_44 = (-13); (p_44 != 2); ++p_44)
        {
            struct S0 l_264 = {0xE3L};
            int l_283 = 0xCC2CD02EL;
            int l_284 = 0xE2035544L;
            short l_313 = (-1L);
        }
    }

    ;
    ;
    for (l_297 = 0; (l_297 > (-1)); l_297 = safe_sub_func_int16_t_s_s(l_297, 2))
    {
        (*g_102) = (void*)0;

        ;
    }
    return (*g_250);



}







static short func_49(int p_50, int * p_51, unsigned char p_52, unsigned p_53, int * p_54)
{
    unsigned l_56 = 0x34BD47CDL;
    int l_72[1][6];
    int *l_86 = &l_72[0][3];
    struct S0 **l_101 = &g_92;
    struct S0 l_105 = {0xCBL};
    unsigned short l_128 = 0x19F0L;
    int *l_146 = &l_72[0][0];
    unsigned *l_192 = &l_56;
    unsigned **l_191 = &l_192;
    int l_209 = 1L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_72[i][j] = 0xCC21D2CFL;
    }
    if ((*p_54))
    {
        unsigned char l_62 = 0xA5L;
        int l_77 = 0x65F31FD0L;
        int *l_80 = (void*)0;
        struct S0 *l_88 = &g_66;
        char l_100 = 1L;
        short l_173 = 0x5219L;
        if ((g_6 || ((-5L) == (p_53 >= l_56))))
        {
            int *l_58 = (void*)0;
            int **l_57[8][1][5] = {{{&l_58,&l_58,(void*)0,(void*)0,(void*)0}},{{&l_58,&l_58,&l_58,(void*)0,&l_58}},{{(void*)0,&l_58,(void*)0,(void*)0,(void*)0}},{{&l_58,&l_58,&l_58,(void*)0,&l_58}},{{(void*)0,&l_58,(void*)0,(void*)0,(void*)0}},{{&l_58,&l_58,&l_58,(void*)0,&l_58}},{{(void*)0,&l_58,(void*)0,(void*)0,(void*)0}},{{&l_58,&l_58,&l_58,(void*)0,&l_58}}};
            int *l_73 = (void*)0;
            unsigned l_78[9][2] = {{9UL,0xD9CD53D6L},{0xD9CD53D6L,9UL},{0xD9CD53D6L,0xD9CD53D6L},{9UL,0xD9CD53D6L},{0xD9CD53D6L,9UL},{0xD9CD53D6L,0xD9CD53D6L},{9UL,0xD9CD53D6L},{0xD9CD53D6L,9UL},{0xD9CD53D6L,0xD9CD53D6L}};
            unsigned **l_83 = (void*)0;
            int *l_95 = &l_72[0][0];
            struct S0 l_106[2] = {{2L},{2L}};
            int i, j, k;
            if (((g_59[2][5][1] = &p_50) == (g_61 = (void*)0)))
            {
                unsigned char *l_63 = &l_62;
                int l_74 = (-1L);
                if (((0xA5L || p_50) < ((*l_63) = (6L != l_62))))
                {
                    struct S0 *l_65[10] = {&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66};
                    struct S0 **l_64 = &l_65[0];
                    int i;
                    (*l_64) = (void*)0;
                    for (p_52 = 0; (p_52 == 3); ++p_52)
                    {
                        unsigned *l_71 = &l_56;
                        l_72[0][0] = (((*l_71) = (safe_mod_func_int8_t_s_s(l_62, g_60))) | g_60);
                        (*l_64) = (void*)0;
                        return g_6;


                    }
                    g_59[2][5][1] = l_73;


                    if (l_74)
                    {
                        g_66 = g_66;
                        g_59[0][2][0] = &g_17[2];


                    }
                    else
                    {
                        g_61 = &g_60;

                        ;
                    }


                    ;
                }
                else
                {
                    l_72[0][0] = (*p_51);
                }


                ;
                l_72[0][0] = (((l_74 = (l_78[3][1] = (l_77 = ((-3L) > (safe_lshift_func_uint8_t_u_s(0UL, l_62)))))) ^ (*p_54)) == g_17[1]);
            }
            else
            {
                int l_79 = 4L;
                int *l_108 = &l_72[0][2];
                unsigned *l_110 = &l_56;
                unsigned **l_109 = &l_110;
                if ((l_79 = 1L))
                {
                    unsigned *l_85 = &l_56;
                    unsigned **l_84 = &l_85;
                    l_80 = &p_50;

                    ;
                    for (l_77 = 24; (l_77 == (-15)); l_77--)
                    {
                        int *l_87[3][1];
                        struct S0 **l_89 = &l_88;
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_87[i][j] = &l_72[0][5];
                        }
                        l_84 = l_83;

                        ;
                        l_86 = &p_50;

                        ;
                        l_87[0][0] = (void*)0;


                        (*l_89) = l_88;
                    }

                    ;
                    ;
                    for (g_60 = 0; (g_60 <= (-7)); g_60 = safe_sub_func_int16_t_s_s(g_60, 6))
                    {
                        if ((*p_51))
                            break;
                        (*l_88) = g_66;
                    }
                    (*l_80) = (*l_80);
                }
                else
                {
                    if (((*l_86) = (*l_86)))
                    {
                        struct S0 *l_93 = &g_66;
                        struct S0 **l_94 = &l_88;
                        g_92 = (void*)0;

                        ;
                        (*l_94) = l_93;
                        l_95 = &p_50;

                        ;
                    }
                    else
                    {
                        int *l_96 = &l_72[0][0];
                        p_54 = (l_96 = &p_50);

                        ;
                        ;
                        return g_6;


                    }

                    ;
                    ;
                }

                ;
                ;
                ;
                ;
                for (g_60 = 0; (g_60 >= 0); g_60 -= 1)
                {
                    short l_97[6] = {0xFC62L,1L,0xFC62L,0xFC62L,1L,0xFC62L};
                    int l_103[4];
                    int *l_107 = &l_72[0][3];
                    int l_117 = 0x959E53F4L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_103[i] = 0L;
                    l_86 = (g_59[2][5][1] = &g_60);

                    ;
                    if (l_97[5])
                    {
                        char l_104 = 1L;
                        l_103[1] = (safe_lshift_func_int16_t_s_u(l_100, (l_101 != (g_102 = &g_92))));
                        if (l_104)
                            break;
                    }
                    else
                    {
                        return g_17[1];


                    }
                    if ((g_17[3] || l_79))
                    {
                        return p_53;


                    }
                    else
                    {
                        g_59[2][5][1] = &g_17[3];
                        (*l_95) = (*p_51);
                    }
                    if (l_103[1])
                    {
                        l_106[1] = l_105;
                        l_108 = l_107;
                    }
                    else
                    {
                        unsigned ***l_111 = &l_83;
                        int l_112 = 0L;
                        short *l_113[10][4][4] = {{{&l_97[5],&l_97[4],(void*)0,&l_97[5]},{&l_97[5],&l_97[4],&l_97[4],&l_97[5]},{&l_97[5],(void*)0,&l_97[5],&l_97[5]},{&l_97[5],(void*)0,(void*)0,(void*)0}},{{&l_97[5],&l_97[5],&l_97[5],&l_97[2]},{&l_97[5],(void*)0,&l_97[5],&l_97[5]},{(void*)0,&l_97[5],&l_97[0],&l_97[4]},{(void*)0,&l_97[5],&l_97[4],&l_97[5]}},{{&l_97[2],&l_97[1],&l_97[5],&l_97[4]},{&l_97[5],(void*)0,&l_97[1],&l_97[5]},{&l_97[5],&l_97[5],&l_97[5],(void*)0},{&l_97[3],&l_97[1],&l_97[5],&l_97[3]}},{{&l_97[5],&l_97[2],(void*)0,(void*)0},{&l_97[5],&l_97[4],&l_97[5],&l_97[5]},{&l_97[0],&l_97[5],&l_97[5],&l_97[0]},{&l_97[2],&l_97[5],&l_97[5],&l_97[2]}},{{&l_97[1],(void*)0,&l_97[1],(void*)0},{&l_97[1],&l_97[5],&l_97[5],(void*)0},{&l_97[5],(void*)0,(void*)0,&l_97[2]},{&l_97[5],&l_97[5],&l_97[5],&l_97[0]}},{{&l_97[4],&l_97[5],&l_97[5],&l_97[5]},{&l_97[2],&l_97[4],&l_97[5],(void*)0},{&l_97[5],&l_97[2],&l_97[0],&l_97[3]},{&l_97[5],&l_97[1],(void*)0,(void*)0}},{{(void*)0,&l_97[5],&l_97[4],&l_97[5]},{&l_97[0],(void*)0,&l_97[5],&l_97[4]},{&l_97[4],&l_97[1],&l_97[4],&l_97[5]},{&l_97[5],&l_97[5],&l_97[1],&l_97[4]}},{{&l_97[5],&l_97[5],&l_97[5],&l_97[5]},{&l_97[5],&l_97[4],&l_97[5],(void*)0},{&l_97[5],(void*)0,&l_97[5],&l_97[1]},{&l_97[3],&l_97[5],&l_97[0],&l_97[3]}},{{&l_97[5],&l_97[2],&l_97[5],&l_97[5]},{&l_97[5],&l_97[5],&l_97[5],(void*)0},{(void*)0,&l_97[5],(void*)0,&l_97[5]},{&l_97[5],&l_97[5],(void*)0,&l_97[5]}},{{&l_97[5],&l_97[1],&l_97[5],&l_97[5]},{&l_97[5],&l_97[2],&l_97[5],&l_97[5]},{&l_97[5],(void*)0,(void*)0,(void*)0},{&l_97[5],&l_97[3],(void*)0,&l_97[5]}}};
                        int i, j, k;
                        (*l_111) = l_109;

                        ;
                        (*l_107) = (*l_86);
                        if (l_112)
                            break;
                        (*l_108) = (((((g_114 = (*l_107)) < ((g_17[2] <= (l_103[1] = 0xA01EL)) ^ (((**l_109) = ((g_115 == l_113[5][0][0]) <= 0x5BL)) <= (l_117 = (*l_107))))) <= g_116) < (p_52 = g_17[1])) >= 0x64L);
                    }
                    for (g_114 = 0; (g_114 <= 0); g_114 += 1)
                    {
                        int i, j;
                        if (l_72[g_114][g_114])
                            break;
                        return p_52;


                    }
                }


                ;
                ;
            }


            ;
            ;

            ;
            ;
            ;
            for (l_56 = 0; (l_56 > 16); l_56++)
            {
                short l_124 = 0x99B7L;
            }
        }
        else
        {
            int **l_147 = &l_86;
            g_59[2][5][0] = &p_50;


            (*l_147) = &g_60;

            ;
        }


        ;
        ;
        ;
        ;
        if ((&p_54 != &g_59[0][4][0]))
        {
            int l_152 = (-1L);
            short *l_153 = (void*)0;
            unsigned ***l_162 = &g_136;
            struct S0 *l_189 = &l_105;
            int l_190[1][7][6] = {{{5L,0x63EB4B7AL,0x63EB4B7AL,5L,5L,0x63EB4B7AL},{5L,5L,0x63EB4B7AL,0x63EB4B7AL,5L,5L},{5L,0x63EB4B7AL,0x63EB4B7AL,5L,5L,0x63EB4B7AL},{5L,5L,0x63EB4B7AL,0x63EB4B7AL,5L,5L},{5L,0x63EB4B7AL,0x63EB4B7AL,5L,5L,0x63EB4B7AL},{5L,5L,0x63EB4B7AL,0x63EB4B7AL,5L,5L},{5L,0x63EB4B7AL,0x63EB4B7AL,5L,5L,0x63EB4B7AL}}};
            int i, j, k;
            if (((safe_sub_func_int32_t_s_s(((-3L) ^ (safe_add_func_int32_t_s_s((*p_51), ((*l_86) = l_152)))), 0UL)) < ((void*)0 == l_153)))
            {
                int l_172 = 0xD02991E0L;
                (*l_86) = (safe_add_func_uint32_t_u_u(p_50, ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((*l_146), 6)), (p_52 = (safe_add_func_int8_t_s_s((l_162 != (void*)0), ((((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(1UL, 2)), (safe_add_func_int8_t_s_s((&p_52 == (void*)0), ((*p_54) >= l_152))))) & g_169) ^ (-1L)) && (-1L))))))) & l_100)));
                p_54 = &p_50;

                ;
                l_173 = (safe_lshift_func_uint8_t_u_s(l_172, p_52));
            }
            else
            {
                unsigned short l_180 = 0xEFCCL;
                int l_184 = 0x14B02CD4L;
                unsigned *l_198 = &l_56;
                if ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((-1L), l_180)) > ((((safe_add_func_uint32_t_u_u(p_50, 0xEEC59925L)) >= ((safe_unary_minus_func_int16_t_s(((l_184 || (safe_sub_func_int8_t_s_s(l_152, ((l_184 >= ((safe_rshift_func_int8_t_s_s((l_189 != (*l_101)), 6)) < g_114)) | (*g_115))))) >= 0UL))) != (*l_86))) ^ l_152) <= (*g_115))), g_169)), 0x38069DB7L)))
                {
                    struct S0 l_194 = {0xB9L};
                    (*l_146) = ((&p_52 == (void*)0) & 0x93F9L);
                    if ((l_190[0][0][3] = (*p_54)))
                    {
                        int **l_193[5][3][9] = {{{&g_59[2][9][1],&g_61,&g_59[2][5][1],(void*)0,&g_61,&g_61,&l_146,&g_61,&g_61},{&l_86,(void*)0,(void*)0,&l_86,&g_59[2][5][1],&g_61,&g_59[0][5][1],&g_59[1][9][1],&l_80},{&l_146,&g_59[0][8][1],&g_61,&g_61,&g_61,&g_61,&g_59[0][8][1],&l_146,&g_59[2][5][1]}},{{&l_80,&g_59[2][5][1],&l_80,&l_80,&g_59[2][5][1],&g_59[1][9][1],&g_59[1][9][1],&g_59[2][5][1],&l_80},{&g_59[2][9][1],(void*)0,&g_59[2][9][1],&l_146,&g_59[0][8][1],&g_61,&l_86,&g_59[2][5][1],&g_59[2][5][1]},{(void*)0,&l_80,&g_59[0][4][0],&g_59[1][9][1],&g_59[0][4][0],&l_80,(void*)0,&g_59[0][5][1],&l_80}},{{&l_86,&g_61,&g_59[0][8][1],&l_146,&g_59[2][9][1],(void*)0,&g_59[2][9][1],&l_146,&g_59[0][8][1]},{&g_59[1][9][1],&g_59[1][9][1],&g_59[2][5][1],&l_80,&l_80,&g_59[2][5][1],&l_80,&g_59[0][5][1],&l_80},{&g_59[0][8][1],&g_61,&g_61,&g_61,&g_61,&g_59[0][8][1],&l_146,&g_59[2][5][1],&g_59[2][5][1]}},{{&g_59[0][5][1],&g_61,&g_59[2][5][1],&l_86,(void*)0,(void*)0,&l_86,&g_59[2][5][1],&g_61},{&g_61,&l_86,&g_59[0][8][1],&g_59[2][9][1],&g_61,&l_146,&l_146,&l_146,&l_146},{&l_80,&g_59[2][5][1],&g_59[0][4][0],&g_59[2][5][1],&l_80,&l_86,&l_80,&g_59[0][4][0],&l_80}},{{&g_59[2][9][1],&g_59[2][5][1],&l_146,&l_86,(void*)0,&l_86,&l_146,&g_59[2][5][1],&g_59[2][9][1]},{&g_59[2][5][1],(void*)0,&g_59[1][9][1],&l_80,&g_59[0][4][0],&l_86,&l_86,&l_86,&g_59[0][4][0]},{&g_61,&l_86,&l_86,&g_61,&l_86,&g_61,(void*)0,&g_59[2][5][1],&g_59[0][8][1]}}};
                        int i, j, k;
                        (*l_162) = l_191;

                        ;
                        (*l_88) = (*l_88);
                        g_61 = &g_60;

                        ;
                        (*l_189) = l_194;
                    }
                    else
                    {
                        int **l_195 = &l_146;
                        (*l_86) = (*p_54);
                        (*g_102) = (*g_102);
                        (*l_195) = &l_72[0][0];
                        (*l_195) = &p_50;

                        ;
                    }

                    ;
                    ;
                    for (g_169 = 1; (g_169 >= 0); g_169 -= 1)
                    {
                        if (l_190[0][2][2])
                            break;
                    }
                    for (g_60 = 16; (g_60 <= 1); g_60--)
                    {
                        (*l_146) = (-5L);
                    }
                }
                else
                {
                    unsigned l_203[7][7] = {{0x59A09FAEL,0x59A09FAEL,0x0DFA86E4L,0x59A09FAEL,0x59A09FAEL,0x0DFA86E4L,0x59A09FAEL},{0x59A09FAEL,0xEAEF1AE5L,0xEAEF1AE5L,0x59A09FAEL,0xEAEF1AE5L,0xEAEF1AE5L,0x59A09FAEL},{0xEAEF1AE5L,0x59A09FAEL,0xEAEF1AE5L,0xEAEF1AE5L,0x59A09FAEL,0xEAEF1AE5L,0xEAEF1AE5L},{0x59A09FAEL,0x59A09FAEL,0x0DFA86E4L,0x59A09FAEL,0x59A09FAEL,0x0DFA86E4L,0x59A09FAEL},{0x59A09FAEL,0xEAEF1AE5L,0xEAEF1AE5L,0x59A09FAEL,0xEAEF1AE5L,0xEAEF1AE5L,0x59A09FAEL},{0xEAEF1AE5L,0x59A09FAEL,0xEAEF1AE5L,0xEAEF1AE5L,0x59A09FAEL,0xEAEF1AE5L,0xEAEF1AE5L},{0x59A09FAEL,0x59A09FAEL,0x0DFA86E4L,0x59A09FAEL,0x59A09FAEL,0x0DFA86E4L,0x59A09FAEL}};
                    int l_206 = 0x778B0BB3L;
                    int i, j;
                    if ((l_206 = ((p_53 | (((void*)0 != l_198) >= ((safe_mul_func_int8_t_s_s((0xC553L && ((((((-1L) >= (safe_sub_func_uint8_t_u_u(p_52, (l_203[6][0] & (safe_lshift_func_int16_t_s_s((((*l_146) = (*p_54)) | p_50), 2)))))) <= l_152) && 0x5201L) || p_52) ^ p_50)), l_184)) > 0x35L))) == l_180)))
                    {
                        int **l_207[7][5][4] = {{{&g_61,&l_146,&l_146,&g_61},{&l_146,&g_61,&l_146,&l_146},{&g_61,&g_61,&g_59[0][5][1],&g_61},{&g_61,&l_146,&l_146,&g_61},{&l_146,&g_61,&l_146,&l_146}},{{&g_61,&g_61,&g_59[0][5][1],&g_61},{&g_61,&l_146,&l_146,&g_61},{&l_146,&g_61,&l_146,&l_146},{&g_61,&g_61,&g_59[0][5][1],&g_61},{&g_61,&l_146,&l_146,&g_61}},{{&l_146,&g_61,&l_146,&l_146},{&g_61,&g_61,&g_59[0][5][1],&g_61},{&g_61,&l_146,&l_146,&g_61},{&l_146,&g_61,&l_146,&l_146},{&g_61,&g_61,&g_59[0][5][1],&g_61}},{{&g_61,&l_146,&l_146,&g_61},{&l_146,&g_61,&l_146,&l_146},{&g_61,&g_61,&g_59[0][5][1],&g_61},{&g_61,&l_146,&l_146,&g_61},{&l_146,&g_61,&l_146,&l_146}},{{&g_61,&g_61,&g_59[0][5][1],&g_61},{&g_61,&l_146,&l_146,&g_61},{&l_146,&g_61,&l_146,&l_146},{&g_61,&g_61,&g_59[0][5][1],&g_61},{&g_61,&l_146,&l_146,&g_61}},{{&l_146,&g_61,&l_146,&l_146},{&g_61,&g_61,&g_59[0][5][1],&g_61},{&g_61,&l_146,&l_146,&l_146},{&g_59[0][5][1],&l_146,&g_59[0][5][1],&g_59[0][5][1]},{&l_146,&l_146,&g_61,&l_146}},{{&l_146,&g_59[0][5][1],&g_59[0][5][1],&l_146},{&g_59[0][5][1],&l_146,&g_59[0][5][1],&g_59[0][5][1]},{&l_146,&l_146,&g_61,&l_146},{&l_146,&g_59[0][5][1],&g_59[0][5][1],&l_146},{&g_59[0][5][1],&l_146,&g_59[0][5][1],&g_59[0][5][1]}}};
                        int i, j, k;
                        g_61 = &g_60;

                        ;
                    }
                    else
                    {
                        int **l_208[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_208[i] = &l_146;
                        p_51 = &g_60;

                        ;
                        p_54 = &g_60;

                        ;
                    }

                    ;
                    ;
                }

                ;
                ;
                ;
                ;
                (*l_146) = ((*g_115) != l_209);
            }

            ;
            ;
            ;
            ;
        }
        else
        {
            for (l_62 = 24; (l_62 >= 28); l_62 = safe_add_func_int32_t_s_s(l_62, 8))
            {
                int **l_212 = &l_146;
                (*l_212) = &g_60;

                ;
                if ((p_52 && ((*g_115) = ((*g_115) | (safe_mul_func_int8_t_s_s((**l_212), (*l_86)))))))
                {
                    for (p_52 = (-4); (p_52 != 57); p_52 = safe_add_func_uint8_t_u_u(p_52, 8))
                    {
                        int **l_217 = &g_59[1][5][1];
                        (*l_212) = (void*)0;

                        ;
                        (*l_217) = ((*l_212) = &g_17[0]);

                        ;
                    }

                    ;
                    for (l_128 = 0; (l_128 <= 0); l_128 += 1)
                    {
                        int i, j;
                        if (l_72[l_128][(l_128 + 3)])
                            break;
                        return p_53;


                    }
                }
                else
                {
                    return g_218;


                }

                ;
            }

            ;
            for (l_128 = 8; (l_128 != 5); --l_128)
            {
                for (l_209 = 0; l_209 < 3; l_209 += 1)
                {
                    for (g_169 = 0; g_169 < 10; g_169 += 1)
                    {
                        for (l_173 = 0; l_173 < 2; l_173 += 1)
                        {
                            g_59[l_209][g_169][l_173] = (void*)0;
                        }
                    }
                }
                (*l_86) = (*p_54);
            }
            p_54 = (l_80 = &g_218);

            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
    }
    else
    {
        int **l_221 = &l_146;
        (*g_61) = (*g_61);
        (*l_221) = &g_218;

        ;
    }

    ;
    ;

    ;
    ;
    ;
    ;
    ;
    return p_50;



}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_228[i][j], "g_228[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_351[i], "g_351[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_936[i][j][k], "g_936[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1060, "g_1060", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
