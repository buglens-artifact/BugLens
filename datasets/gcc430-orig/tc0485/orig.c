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



static unsigned g_8 = 0xCFE04822L;
static int g_17[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
static char g_31 = 2L;
static int *g_67 = &g_17[2];
static int ** volatile g_66[2] = {&g_67,&g_67};
static unsigned char g_149[6][8] = {{0x54L,255UL,0xF5L,255UL,0x54L,0UL,0UL,0xADL},{0xF5L,0UL,0x9FL,1UL,0UL,1UL,1UL,255UL},{1UL,0UL,0x9FL,247UL,247UL,0x9FL,0UL,1UL},{0UL,0xB7L,0xF5L,0xADL,0xB4L,0UL,0x6BL,0x9FL},{255UL,1UL,0xB4L,0UL,247UL,0UL,247UL,0UL},{255UL,0xF5L,255UL,0x54L,0UL,0UL,0xADL,0x6BL}};
static char g_233[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
static int ** const volatile g_269[5] = {&g_67,&g_67,&g_67,&g_67,&g_67};
static const int *g_294[5] = {&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2]};
static const int ** volatile g_293[4] = {&g_294[3],&g_294[3],&g_294[3],&g_294[3]};
static const int ** volatile g_295 = &g_294[3];
static volatile unsigned g_492 = 4294967286UL;
static unsigned short g_493 = 0x7E45L;
static const int ** volatile g_538 = &g_294[2];
static int **g_599[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int g_629 = 0L;
static const int ** volatile g_744 = &g_294[3];
static int g_763 = 5L;
static const int **g_792 = &g_294[1];
static const int *** volatile g_791 = &g_792;
static volatile char g_852 = 0x19L;
static unsigned g_855 = 0UL;
static short g_932[6] = {(-3L),3L,(-3L),(-3L),3L,(-3L)};
static unsigned g_977 = 0x0B465164L;
static int g_988 = 8L;



static char func_1(void);
static unsigned char func_4(int p_5, char p_6, char p_7);
static char func_10(short p_11, short p_12);
static unsigned func_13(unsigned char p_14);
static char func_24(char p_25, unsigned p_26, unsigned short p_27);
static int * func_32(short p_33);
static char func_37(const int p_38, const int * const p_39, int p_40, int * p_41, short p_42);
static unsigned short func_45(int * p_46, int p_47, unsigned p_48, int p_49, unsigned short p_50);
static int * func_51(int * const p_52, int p_53, const int * p_54, int * p_55, unsigned p_56);
static const int * func_58(unsigned p_59, int * p_60, const int * p_61);
static char func_1(void)
{
    unsigned short l_9[3][1][8] = {{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}}};
    const unsigned l_982[5][6][7] = {{{4294967295UL,0xE78E4139L,0xD626448EL,1UL,4294967295UL,1UL,4294967295UL},{0xA69897F9L,0xD54C5CCAL,0xD54C5CCAL,0xA69897F9L,0x8610A1DCL,4294967289UL,0xEA63B1ADL},{3UL,4294967295UL,0xC53E5847L,0xFD4160BDL,0xC0A019E8L,0UL,0x7C5AAF03L},{4294967293UL,0UL,1UL,4294967293UL,4294967287UL,0xA69897F9L,7UL},{0xEF12E114L,4294967295UL,0xC53E5847L,0xE78E4139L,0x7C5AAF03L,0x83124403L,7UL},{1UL,0xA5543EE4L,1UL,4294967291UL,4294967289UL,0xD54C5CCAL,1UL}},{{4294967295UL,0x8B4DCEA6L,4294967295UL,0UL,0UL,0UL,4294967288UL},{0xEA63B1ADL,0xA5543EE4L,4294967293UL,0xE72905B6L,0xE72905B6L,4294967293UL,0xA5543EE4L},{4294967288UL,4294967295UL,4294967290UL,0UL,0x554A0FA9L,0UL,4294967292UL},{0x4F0E906AL,4294967291UL,1UL,0xA69897F9L,0UL,5UL,7UL},{4294967290UL,0x1FF5886CL,4294967292UL,0UL,4294967295UL,0xD3D11A98L,0xFED285FDL},{4294967287UL,7UL,4294967287UL,0xE72905B6L,1UL,0xEA63B1ADL,0x8610A1DCL}},{{0x60983940L,1UL,7UL,0UL,3UL,4294967295UL,4294967295UL},{7UL,0xDF36CB46L,5UL,4294967291UL,0UL,0xEA63B1ADL,0xEA63B1ADL},{0xAD536155L,0xE78E4139L,0UL,0xE78E4139L,0xAD536155L,0xD3D11A98L,0UL},{4294967287UL,1UL,0xA69897F9L,4294967293UL,0xEA63B1ADL,5UL,0xD54C5CCAL},{0xC0A019E8L,0xD3D11A98L,0x60983940L,4294967287UL,4294967288UL,0UL,4294967288UL},{4294967287UL,0xD54C5CCAL,0xEA63B1ADL,1UL,0xEA63B1ADL,0xD54C5CCAL,4294967287UL}},{{0xD626448EL,7UL,0UL,0xA15DD80FL,0x99592A08L,0xE78E4139L,7UL},{0xDF36CB46L,4294967291UL,0xA5543EE4L,7UL,1UL,1UL,5UL},{3UL,1UL,0UL,0x8B4DCEA6L,4294967295UL,0x8B4DCEA6L,0UL},{0x4F0E906AL,0x4F0E906AL,0xEA63B1ADL,7UL,0x4214B6F2L,4294967287UL,0xA69897F9L},{4294967295UL,4294967295UL,3UL,0UL,7UL,1UL,0x60983940L},{0xE72905B6L,0UL,4294967287UL,4294967293UL,0x4214B6F2L,0x8610A1DCL,0x4214B6F2L}},{{4294967292UL,0UL,7UL,0xBADE66B7L,4294967295UL,0xEFB77CABL,4294967295UL},{4294967293UL,4294967287UL,0UL,0xE72905B6L,1UL,5UL,7UL},{0UL,1UL,0x7C5AAF03L,7UL,0x99592A08L,0UL,4294967295UL},{7UL,0xEA63B1ADL,0x4F0E906AL,0x4F0E906AL,0xEA63B1ADL,7UL,0x4214B6F2L},{0x117B4F92L,0UL,0x71AD6BB0L,1UL,0xC0A019E8L,0xD3D11A98L,0x60983940L},{7UL,0xA5543EE4L,4294967291UL,0xDF36CB46L,4294967293UL,4294967287UL,0xA69897F9L}}};
    int *l_984 = &g_763;
    int *l_985 = &g_17[2];
    int *l_986 = &g_17[6];
    int *l_987[5];
    unsigned l_989 = 4294967291UL;
    char l_998[3];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_987[i] = &g_763;
    for (i = 0; i < 3; i++)
        l_998[i] = (-4L);
    (*l_984) |= ((safe_rshift_func_uint8_t_u_u(func_4(g_8, l_9[0][0][7], (l_9[0][0][7] & ((l_9[0][0][7] != (func_10(l_9[0][0][6], g_8) , (((safe_lshift_func_uint8_t_u_u(((g_149[3][2] && l_9[0][0][7]) , 0x81L), l_9[1][0][4])) , 0xC146L) == g_8))) || l_982[1][1][2]))), 0)) < l_9[0][0][7]);
    (*g_792) = l_984;
    ++l_989;
    (*g_67) = ((func_4(g_763, g_17[2], ((g_932[4] , (~((safe_rshift_func_int8_t_s_s(((((***g_791) <= 6UL) , ((((void*)0 != &g_269[2]) < ((safe_sub_func_uint8_t_u_u(((void*)0 == &g_295), g_492)) > l_998[1])) , (void*)0)) == &g_294[3]), g_855)) != (*l_985)))) && g_763)) | 5UL) , (*l_985));
    return g_977;
}







static unsigned char func_4(int p_5, char p_6, char p_7)
{
    int l_983 = 1L;
    (*g_67) = (**g_792);
    return l_983;
}







static char func_10(short p_11, short p_12)
{
    char l_15 = 6L;
    int *l_16[2][2][6] = {{{&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2]},{&g_17[2],&g_17[2],&g_17[2],&g_17[0],&g_17[0],&g_17[2]}},{{&g_17[2],&g_17[2],&g_17[0],(void*)0,&g_17[0],&g_17[2]},{&g_17[0],&g_17[2],(void*)0,(void*)0,&g_17[2],&g_17[0]}}};
    int i, j, k;
    g_17[4] = (p_12 && func_13(l_15));
    for (l_15 = 0; (l_15 >= (-16)); l_15--)
    {
        char l_20 = 0x1DL;
        int l_21 = 0x422D5FBAL;
        l_21 = l_20;
        l_21 |= func_13(((((g_17[2] && ((safe_add_func_int8_t_s_s((func_24((0UL && (safe_rshift_func_uint16_t_u_u(func_13(((l_20 >= p_12) <= (safe_unary_minus_func_uint16_t_u(g_31)))), 2))), p_11, l_20) == p_12), g_977)) ^ p_12)) > g_977) | 0x77673B98L) , p_12));
    }
    for (p_12 = (-3); (p_12 <= (-13)); p_12 = safe_sub_func_int8_t_s_s(p_12, 6))
    {
        if ((**g_744))
            break;
    }
    return p_12;
}







static unsigned func_13(unsigned char p_14)
{
    return g_8;
}







static char func_24(char p_25, unsigned p_26, unsigned short p_27)
{
    int *l_36[6][8] = {{(void*)0,(void*)0,&g_17[2],(void*)0,&g_17[2],(void*)0,(void*)0,(void*)0},{&g_17[2],&g_17[2],(void*)0,(void*)0,&g_17[7],(void*)0,&g_17[4],&g_17[0]},{&g_17[0],&g_17[2],(void*)0,&g_17[2],&g_17[7],&g_17[7],&g_17[2],(void*)0},{&g_17[2],&g_17[2],(void*)0,&g_17[0],&g_17[2],(void*)0,(void*)0,&g_17[2]},{(void*)0,&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2]},{&g_17[2],&g_17[0],&g_17[7],&g_17[0],&g_17[2],&g_17[6],(void*)0,(void*)0}};
    const int *l_975 = &g_763;
    int i, j;
lbl_976:
    (*g_792) = func_32((safe_sub_func_uint8_t_u_u(((void*)0 != l_36[4][7]), ((func_37(p_26, l_36[4][7], (g_17[2] , (((0x2F33BC6CL & ((p_25 , (void*)0) != &g_17[1])) && 0L) && g_17[2])), l_36[4][7], p_26) == p_26) && p_27))));
    for (g_855 = 21; (g_855 != 15); g_855 = safe_sub_func_int16_t_s_s(g_855, 7))
    {
        int *l_973 = &g_17[2];
        int l_974 = 0xF35CD4F4L;
        (*l_973) = (safe_unary_minus_func_int8_t_s(((p_26 >= func_45(l_36[2][5], ((safe_sub_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s(p_25, ((safe_mod_func_uint32_t_u_u(g_932[4], p_25)) || 0L))) == p_27) ^ ((~(safe_rshift_func_uint8_t_u_s(p_25, (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(func_45(l_973, (*l_973), g_233[2], g_17[3], g_149[3][3]), g_932[5])), 5UL))))) && p_25)) | l_974), p_26)) , (*l_973)), g_629, g_149[4][1], g_492)) ^ p_27)));
        l_975 = l_36[4][7];
    }
    if (p_27)
        goto lbl_976;
    return p_25;
}







static int * func_32(short p_33)
{
    int *l_957 = &g_17[2];
    return l_957;
}







static char func_37(const int p_38, const int * const p_39, int p_40, int * p_41, short p_42)
{
    int l_57 = 0xD8C20E5EL;
    int *l_62[7][7][5] = {{{&g_17[4],&g_17[2],&g_17[2],&g_17[1],(void*)0},{&g_17[2],&g_17[2],(void*)0,&g_17[3],(void*)0},{&g_17[3],&g_17[2],(void*)0,&g_17[4],(void*)0},{&g_17[2],&g_17[2],&g_17[2],(void*)0,&g_17[2]},{&g_17[2],&g_17[2],(void*)0,&g_17[2],&g_17[2]},{&g_17[4],&g_17[2],&g_17[2],&g_17[8],&g_17[2]},{&g_17[0],&g_17[2],&g_17[2],&g_17[2],&g_17[2]}},{{&g_17[2],&g_17[2],&g_17[4],&g_17[2],&g_17[4]},{&g_17[2],&g_17[2],&g_17[2],&g_17[4],&g_17[3]},{&g_17[2],&g_17[2],&g_17[2],(void*)0,&g_17[2]},{&g_17[2],&g_17[2],&g_17[3],&g_17[8],&g_17[2]},{&g_17[0],&g_17[2],&g_17[2],&g_17[2],&g_17[2]},{&g_17[2],&g_17[2],&g_17[4],&g_17[2],&g_17[4]},{&g_17[2],&g_17[2],&g_17[2],&g_17[4],&g_17[3]}},{{&g_17[2],&g_17[2],&g_17[2],(void*)0,&g_17[2]},{&g_17[2],&g_17[2],&g_17[3],&g_17[8],&g_17[2]},{&g_17[0],&g_17[2],&g_17[2],&g_17[2],&g_17[2]},{&g_17[2],&g_17[2],&g_17[4],&g_17[2],&g_17[4]},{&g_17[2],&g_17[2],&g_17[2],&g_17[4],&g_17[3]},{&g_17[2],&g_17[2],&g_17[2],(void*)0,&g_17[2]},{&g_17[2],&g_17[2],&g_17[3],&g_17[8],&g_17[2]}},{{&g_17[0],&g_17[2],&g_17[2],&g_17[2],&g_17[2]},{&g_17[2],&g_17[2],&g_17[4],&g_17[2],&g_17[4]},{&g_17[2],&g_17[2],&g_17[2],&g_17[4],&g_17[3]},{&g_17[2],&g_17[2],&g_17[2],(void*)0,&g_17[2]},{(void*)0,&g_17[2],&g_17[2],&g_17[0],&g_17[8]},{&g_17[2],&g_17[2],&g_17[8],&g_17[2],(void*)0},{(void*)0,&g_17[2],&g_17[4],&g_17[2],&g_17[4]}},{{&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2]},{(void*)0,&g_17[2],(void*)0,&g_17[2],&g_17[2]},{(void*)0,&g_17[2],&g_17[2],&g_17[0],&g_17[8]},{&g_17[2],&g_17[2],&g_17[8],&g_17[2],(void*)0},{(void*)0,&g_17[2],&g_17[4],&g_17[2],&g_17[4]},{&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2]},{(void*)0,&g_17[2],(void*)0,&g_17[2],&g_17[2]}},{{(void*)0,&g_17[2],&g_17[2],&g_17[0],&g_17[8]},{&g_17[2],&g_17[2],&g_17[8],&g_17[2],(void*)0},{(void*)0,&g_17[2],&g_17[4],&g_17[2],&g_17[4]},{&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2]},{(void*)0,&g_17[2],(void*)0,&g_17[2],&g_17[2]},{(void*)0,&g_17[2],&g_17[2],&g_17[0],&g_17[8]},{&g_17[2],&g_17[2],&g_17[8],&g_17[2],(void*)0}},{{(void*)0,&g_17[2],&g_17[4],&g_17[2],&g_17[4]},{&g_17[2],&g_17[2],&g_17[2],&g_17[2],(void*)0},{&g_17[4],&g_17[2],&g_17[2],&g_17[3],(void*)0},{&g_17[2],&g_17[2],(void*)0,&g_17[4],&g_17[2]},{&g_17[3],&g_17[2],&g_17[2],(void*)0,&g_17[2]},{&g_17[2],&g_17[2],(void*)0,&g_17[2],(void*)0},{&g_17[2],&g_17[2],(void*)0,&g_17[1],(void*)0}}};
    unsigned char l_398 = 0x47L;
    char l_399 = 0xDAL;
    int *l_400 = &g_17[2];
    unsigned short l_423 = 7UL;
    unsigned l_458 = 0UL;
    unsigned l_472 = 0x5DF8D07CL;
    const int l_586 = 0xD9FB59B8L;
    short l_587 = 0x8304L;
    short l_634 = 0x83A2L;
    int l_658 = 0x137DD82BL;
    unsigned l_681[8][8][4] = {{{4294967295UL,0UL,0UL,4294967295UL},{0UL,4294967295UL,0xF114D325L,0x8F4F1E82L},{0UL,0xF114D325L,0UL,0xD284FA07L},{4294967295UL,0x8F4F1E82L,0xD284FA07L,0xD284FA07L},{0xF114D325L,0xF114D325L,0x3D65AE93L,0x8F4F1E82L},{0x8F4F1E82L,4294967295UL,0x3D65AE93L,4294967295UL},{0xF114D325L,0UL,0xD284FA07L,0x3D65AE93L},{4294967295UL,0UL,0UL,4294967295UL}},{{0UL,4294967295UL,0xF114D325L,0x8F4F1E82L},{0UL,0xF114D325L,0UL,0xD284FA07L},{4294967295UL,0x8F4F1E82L,0xD284FA07L,0xD284FA07L},{0xF114D325L,0xF114D325L,0x3D65AE93L,0x8F4F1E82L},{0x8F4F1E82L,4294967295UL,0x3D65AE93L,4294967295UL},{0xF114D325L,0UL,0xD284FA07L,0x3D65AE93L},{4294967295UL,0UL,0UL,4294967295UL},{0UL,4294967295UL,0xF114D325L,0x8F4F1E82L}},{{0UL,0xF114D325L,0UL,0xD284FA07L},{4294967295UL,0x8F4F1E82L,0x8F4F1E82L,0x8F4F1E82L},{0x3D65AE93L,0x3D65AE93L,0xD284FA07L,0UL},{0UL,0x65BB4902L,0xD284FA07L,0x65BB4902L},{0x3D65AE93L,4294967295UL,0x8F4F1E82L,0xD284FA07L},{0x65BB4902L,4294967295UL,4294967295UL,0x65BB4902L},{4294967295UL,0x65BB4902L,0x3D65AE93L,0UL},{4294967295UL,0x3D65AE93L,4294967295UL,0x8F4F1E82L}},{{0x65BB4902L,0UL,0x8F4F1E82L,0x8F4F1E82L},{0x3D65AE93L,0x3D65AE93L,0xD284FA07L,0UL},{0UL,0x65BB4902L,0xD284FA07L,0x65BB4902L},{0x3D65AE93L,4294967295UL,0x8F4F1E82L,0xD284FA07L},{0x65BB4902L,4294967295UL,4294967295UL,0x65BB4902L},{4294967295UL,0x65BB4902L,0x3D65AE93L,0UL},{4294967295UL,0x3D65AE93L,4294967295UL,0x8F4F1E82L},{0x65BB4902L,0UL,0x8F4F1E82L,0x8F4F1E82L}},{{0x3D65AE93L,0x3D65AE93L,0xD284FA07L,0UL},{0UL,0x65BB4902L,0xD284FA07L,0x65BB4902L},{0x3D65AE93L,4294967295UL,0x8F4F1E82L,0xD284FA07L},{0x65BB4902L,4294967295UL,4294967295UL,0x65BB4902L},{4294967295UL,0x65BB4902L,0x3D65AE93L,0UL},{4294967295UL,0x3D65AE93L,4294967295UL,0x8F4F1E82L},{0x65BB4902L,0UL,0x8F4F1E82L,0x8F4F1E82L},{0x3D65AE93L,0x3D65AE93L,0xD284FA07L,0UL}},{{0UL,0x65BB4902L,0xD284FA07L,0x65BB4902L},{0x3D65AE93L,0x8F4F1E82L,0x3D65AE93L,0xF114D325L},{0UL,0x8F4F1E82L,0x8F4F1E82L,0UL},{0x8F4F1E82L,0UL,0x65BB4902L,0xD284FA07L},{0x8F4F1E82L,0x65BB4902L,0x8F4F1E82L,0x3D65AE93L},{0UL,0xD284FA07L,0x3D65AE93L,0x3D65AE93L},{0x65BB4902L,0x65BB4902L,0xF114D325L,0xD284FA07L},{0xD284FA07L,0UL,0xF114D325L,0UL}},{{0x65BB4902L,0x8F4F1E82L,0x3D65AE93L,0xF114D325L},{0UL,0x8F4F1E82L,0x8F4F1E82L,0UL},{0x8F4F1E82L,0UL,0x65BB4902L,0xD284FA07L},{0x8F4F1E82L,0x65BB4902L,0x8F4F1E82L,0x3D65AE93L},{0UL,0xD284FA07L,0x3D65AE93L,0x3D65AE93L},{0x65BB4902L,0x65BB4902L,0xF114D325L,0xD284FA07L},{0xD284FA07L,0UL,0xF114D325L,0UL},{0x65BB4902L,0x8F4F1E82L,0x3D65AE93L,0xF114D325L}},{{0UL,0x8F4F1E82L,0x8F4F1E82L,0UL},{0x8F4F1E82L,0UL,0x65BB4902L,0xD284FA07L},{0x8F4F1E82L,0x65BB4902L,0x8F4F1E82L,0x3D65AE93L},{0UL,0xD284FA07L,0x3D65AE93L,0x3D65AE93L},{0x65BB4902L,0x65BB4902L,0xF114D325L,0xD284FA07L},{0xD284FA07L,0UL,0xF114D325L,0UL},{0x65BB4902L,0x8F4F1E82L,0x3D65AE93L,0xF114D325L},{0UL,0x8F4F1E82L,0x8F4F1E82L,0UL}}};
    int *l_733 = &g_17[5];
    int ***l_793 = &g_599[2];
    char l_814[10] = {0xCBL,0L,0xA2L,0xA2L,0xCBL,0xA2L,0xCBL,0x77L,0x77L,0xCBL};
    unsigned char l_863 = 0UL;
    int ***l_953 = &g_599[3];
    int i, j, k;
    return g_855;
}







static unsigned short func_45(int * p_46, int p_47, unsigned p_48, int p_49, unsigned short p_50)
{
    unsigned l_339[8] = {6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL};
    int * const l_340 = (void*)0;
    unsigned short l_349[2];
    int l_364 = 0x5142E84AL;
    int l_373 = (-6L);
    int l_374[8] = {8L,8L,8L,8L,8L,8L,8L,8L};
    unsigned l_376 = 0xFAE6FB5EL;
    unsigned l_385 = 0x89D11616L;
    int i;
    for (i = 0; i < 2; i++)
        l_349[i] = 0xD723L;
    if ((((l_339[3] , (l_340 == l_340)) , g_149[3][2]) & func_13(((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(0x2935L, 7)), p_49)) != (-2L)), ((safe_rshift_func_uint8_t_u_s(g_31, 2)) | (((p_49 & l_349[0]) < p_47) || g_17[4])))) , g_17[7]))))
    {
        short l_365[2];
        int l_366 = 0xB2E43DBFL;
        int *l_367 = (void*)0;
        int *l_368 = &g_17[2];
        int *l_369 = &g_17[3];
        int *l_370 = &l_364;
        int *l_371 = &g_17[2];
        int *l_372[1][8][9] = {{{&g_17[2],(void*)0,(void*)0,(void*)0,&g_17[2],&g_17[2],(void*)0,(void*)0,(void*)0},{&l_364,&g_17[6],&g_17[1],&g_17[0],(void*)0,&l_364,(void*)0,&g_17[0],&g_17[1]},{&g_17[2],&g_17[2],(void*)0,(void*)0,(void*)0,&g_17[2],&g_17[2],(void*)0,(void*)0},{&g_17[2],&g_17[6],&g_17[2],&l_364,&l_364,&l_364,(void*)0,&l_364,&l_364},{&g_17[2],(void*)0,(void*)0,&g_17[2],&l_364,&g_17[2],(void*)0,(void*)0,&g_17[2]},{&g_17[2],&l_364,&g_17[1],&l_364,&g_17[2],&g_17[7],&l_364,&g_17[0],&l_364},{(void*)0,&l_364,(void*)0,(void*)0,&l_364,(void*)0,&l_364,(void*)0,(void*)0},{&g_17[2],&g_17[7],&l_364,&g_17[0],&l_364,&g_17[7],&g_17[2],&l_364,&g_17[1]}}};
        int l_375 = 0L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_365[i] = 0xE624L;
        for (p_47 = (-29); (p_47 == 10); p_47++)
        {
            int *l_352 = &g_17[0];
            int l_353 = 1L;
            (*l_352) = ((((&p_47 == l_352) , l_353) , ((0xB6L <= (~(safe_mod_func_int32_t_s_s((safe_div_func_int32_t_s_s((((-9L) || ((((safe_rshift_func_int8_t_s_u(((void*)0 == &l_352), 6)) <= ((p_48 && (g_17[6] >= g_233[6])) && (*l_352))) ^ 0x8FL) >= l_364)) != l_339[6]), l_365[1])), 0x15A9680DL)))) , (*l_352))) , 0xAD531985L);
        }
        l_376++;
    }
    else
    {
        unsigned l_383 = 0xEA69118AL;
        int *l_384 = &l_373;
        (*l_384) = (safe_mod_func_uint8_t_u_u((p_50 > ((safe_add_func_uint8_t_u_u((~(func_13((l_383 ^ (+l_383))) , (l_384 == l_384))), (*l_384))) > l_385)), (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(g_17[2], 1)), 1L))));
        (*l_384) = 0x2F265E66L;
    }
    return g_233[6];
}







static int * func_51(int * const p_52, int p_53, const int * p_54, int * p_55, unsigned p_56)
{
    int *l_84 = &g_17[3];
    int *l_85 = &g_17[2];
    int *l_86 = (void*)0;
    int *l_87[10] = {&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2],&g_17[2]};
    short l_88 = (-1L);
    int l_89 = 0xAAA48D7FL;
    short l_90 = 8L;
    unsigned char l_91[7] = {254UL,254UL,254UL,254UL,254UL,254UL,254UL};
    unsigned l_101 = 1UL;
    const int *l_102 = (void*)0;
    unsigned l_160 = 0xBE92DA70L;
    unsigned l_161[3];
    int l_232[2];
    int *l_250 = &g_17[2];
    int *l_271[2][2][6] = {{{&l_232[1],&g_17[2],&g_17[2],&l_232[1],(void*)0,&l_232[1]},{&l_232[1],&l_232[1],&g_17[2],&l_232[1],&l_232[1],&g_17[2]}},{{&l_232[1],&l_232[1],&g_17[2],&g_17[2],&l_232[1],&l_232[1]},{&g_17[2],&l_232[1],(void*)0,&l_232[1],(void*)0,&l_232[1]}}};
    unsigned short l_329 = 0UL;
    int *l_337 = &l_232[1];
    int *l_338 = (void*)0;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_161[i] = 0x96784529L;
    for (i = 0; i < 2; i++)
        l_232[i] = 0x7E6AB817L;
    --l_91[3];
lbl_332:
    for (g_31 = 25; (g_31 >= (-14)); --g_31)
    {
        int l_131 = 1L;
        int l_140[6][3] = {{(-4L),(-4L),(-5L)},{(-2L),(-2L),0L},{(-4L),(-4L),(-5L)},{(-2L),(-2L),0L},{(-4L),(-4L),(-5L)},{(-2L),(-2L),0L}};
        int l_201 = 0x51D62543L;
        int l_234 = 0x9C755FA3L;
        int *l_249 = &l_131;
        unsigned l_291 = 3UL;
        int *l_328 = &l_232[1];
        int i, j;
        if ((*l_84))
        {
            int **l_100[2];
            int l_132 = 0x977C5290L;
            int l_178 = 0x12E56D97L;
            unsigned l_244[3][1];
            int i, j;
            for (i = 0; i < 2; i++)
                l_100[i] = &l_87[2];
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_244[i][j] = 0UL;
            }
            for (p_53 = 0; (p_53 < 27); ++p_53)
            {
                short l_109[2][3];
                const char l_130 = 0xE4L;
                int l_139 = 0xFE5C00C7L;
                int l_144 = 9L;
                int l_145[5][4][5] = {{{6L,1L,0xDDEB08E1L,0x4199CF0CL,(-7L)},{0L,0x0394C607L,(-1L),(-8L),0xC330AEBBL},{(-7L),1L,0xD8CA7F0EL,0x0D45DD20L,0xD8CA7F0EL},{(-7L),(-7L),(-1L),1L,0x50CD27CEL}},{{0L,1L,0x233F4ACBL,0xD8CA7F0EL,1L},{6L,0x3FFEB0AAL,1L,1L,0xD8CA7F0EL},{0x0394C607L,1L,0xDDEB08E1L,0x50CD27CEL,1L},{(-1L),(-7L),1L,0x6EE0FF88L,0x50CD27CEL}},{{0x0D45DD20L,1L,1L,0x0D45DD20L,1L},{1L,0x4199CF0CL,0L,6L,1L},{0xD8CA7F0EL,(-7L),0x233F4ACBL,1L,0x4199CF0CL},{1L,1L,0x3FFEB0AAL,6L,0x6EE0FF88L}},{{0x50CD27CEL,1L,(-1L),0x0D45DD20L,0x0394C607L},{0xD8CA7F0EL,0x0394C607L,0x6EE0FF88L,0x6EE0FF88L,0x0394C607L},{0xC330AEBBL,0L,(-8L),1L,0x6EE0FF88L},{(-7L),1L,0L,0xC330AEBBL,0x4199CF0CL}},{{(-8L),0x50CD27CEL,0L,0x6EE0FF88L,1L},{(-7L),1L,(-1L),(-7L),1L},{0xC330AEBBL,0x0D45DD20L,0L,0x50CD27CEL,0x50CD27CEL},{0xD8CA7F0EL,0x0D45DD20L,0xD8CA7F0EL,1L,(-7L)}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_109[i][j] = (-6L);
                }
                for (l_90 = 18; (l_90 >= (-7)); l_90 = safe_sub_func_uint16_t_u_u(l_90, 6))
                {
                    l_100[1] = (void*)0;
                    p_54 = l_87[7];
                    (*l_85) = (func_13(g_17[8]) <= (((g_17[2] != ((safe_lshift_func_int8_t_s_u(p_56, (func_13(p_53) <= (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(p_56, p_56)), 5))))) , g_17[2])) >= p_56) , g_17[2]));
                }
                if (l_109[0][2])
                    break;
                (*l_84) = (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((0x65L && (((safe_mod_func_int16_t_s_s(g_17[0], (safe_add_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s((p_53 & func_13((((((p_56 <= (safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(p_56, (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(func_13(p_56), (*l_85))), (0x83L && 0x35L))))), l_130))) >= l_131) && g_17[5]) ^ 0xD7125C51L) , p_56))), l_109[0][2])) , g_8) , l_132), g_17[8])) , 0x55L), p_56)))) || (*p_54)) , g_17[2])) , (-1L)), 65535UL)), 0xF3EEL));
                if (func_13((p_56 , ((((~p_56) , g_31) & g_31) , ((safe_div_func_uint16_t_u_u(g_31, (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((g_8 > p_56), p_56)), p_56)))) <= g_17[2])))))
                {
                    short l_141 = 0x75F7L;
                    int l_142 = 0xCB596987L;
                    int l_143 = (-5L);
                    int l_146 = 1L;
                    int l_147 = (-1L);
                    int l_148 = 0x8BF7B596L;
                    unsigned l_164 = 4294967295UL;
                    char l_167 = 0x78L;
                    g_149[3][2]++;
                    if (l_148)
                    {
                        (*l_85) = ((void*)0 != &l_147);
                        (*l_84) = (safe_lshift_func_int16_t_s_u(g_8, func_13((((((safe_sub_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u(((func_13(p_53) <= l_131) >= g_17[2]), ((safe_add_func_uint8_t_u_u(0UL, p_56)) , p_53))) | g_149[5][3]) < l_141) , p_53), 0x31L)) && l_160) == 0x17L) , l_140[4][2]) , 0xDDL))));
                        return l_86;
                    }
                    else
                    {
                        int l_162 = (-3L);
                        int l_163[10][2][9] = {{{(-1L),0xD04161D7L,0xEFBD567DL,0x91B9568FL,0xC260BCB5L,3L,6L,0x5E5D6FC0L,3L},{(-9L),(-1L),3L,2L,0xC260BCB5L,0x375361B7L,0x7ADB6671L,0xE09F5BEAL,(-5L)}},{{0x4D68D3CEL,(-7L),0L,0xABB9593EL,0x5E5D6FC0L,0x598B75F5L,0L,0x9BE1A63AL,0x51EB76DFL},{2L,0x70353347L,0xC260BCB5L,0x481C7AF7L,0xA1A9F441L,0x375361B7L,0x7BBF6FE1L,(-1L),(-1L)}},{{0x7BBF6FE1L,1L,0L,1L,0L,1L,0x7BBF6FE1L,0xFB04359EL,0L},{0x9BE1A63AL,0xD03CFEF6L,0x241E3A87L,0xD53BC850L,6L,(-9L),1L,(-1L),1L}},{{0x375361B7L,0x6E27D556L,0x73FBF912L,0xE09F5BEAL,(-4L),1L,(-1L),0xFB04359EL,0x65F59FADL},{0x0F6EF4EAL,(-1L),0xCAEB4B55L,0x375361B7L,0x73FBF912L,8L,0x598B75F5L,(-1L),0x65F59FADL}},{{0xC260BCB5L,0L,1L,0x70353347L,0x65F59FADL,0x3DCB5AACL,0x9BE1A63AL,0x327F2DC7L,1L},{(-5L),1L,0x327F2DC7L,0x9BE1A63AL,0x3DCB5AACL,0x65F59FADL,0x70353347L,1L,0L}},{{0xC260BCB5L,0x65F59FADL,(-1L),0x598B75F5L,8L,0x73FBF912L,0x375361B7L,0xCAEB4B55L,(-1L)},{0x0F6EF4EAL,0x65F59FADL,0xFB04359EL,(-1L),1L,(-4L),0xE09F5BEAL,0x73FBF912L,0x6E27D556L}},{{0x375361B7L,1L,(-1L),1L,(-9L),6L,0xD53BC850L,0x241E3A87L,0xD03CFEF6L},{0x9BE1A63AL,0L,0xFB04359EL,0x7BBF6FE1L,1L,0L,1L,0L,1L}},{{0x7BBF6FE1L,(-1L),(-1L),(-7L),0x7AA3E9DAL,1L,0xA1A9F441L,0xA90754DDL,0x73FBF912L},{0x52832AB4L,(-1L),8L,0L,(-6L),7L,(-5L),0xFB04359EL,1L}},{{0x598B75F5L,(-9L),(-1L),0x51EB76DFL,0x7AA3E9DAL,0xA90754DDL,0x52832AB4L,0xD03CFEF6L,0x6E27D556L},{0xE09F5BEAL,0xD03CFEF6L,7L,0x7BBF6FE1L,0xD03CFEF6L,0xA90754DDL,0x81C1D833L,1L,5L}},{{0xFEED02C2L,0x73FBF912L,(-4L),0x0F6EF4EAL,0L,7L,0L,0x6E27D556L,0xCAEB4B55L},{0xC260BCB5L,1L,0x3DCB5AACL,(-2L),1L,1L,0x81C1D833L,(-9L),0x241E3A87L}}};
                        int i, j, k;
                        (*l_85) = l_161[0];
                        l_164--;
                        l_131 ^= func_13(l_163[4][1][6]);
                    }
                    if (l_167)
                    {
                        p_54 = l_87[8];
                    }
                    else
                    {
                        if ((*p_52))
                            break;
                    }
                    l_142 &= (g_149[5][6] , (((func_13(g_149[3][2]) & (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((p_53 ^ (l_131 , (g_8 , (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(g_149[3][2], p_56)), 13))))), (g_17[2] , l_109[0][2]))), l_178)), g_17[7]))) & 1L) != (*p_54)));
                }
                else
                {
                    for (l_90 = 0; (l_90 == 19); ++l_90)
                    {
                        int *l_181 = &l_145[3][2][1];
                        return l_85;
                    }
                }
            }
            for (p_53 = (-3); (p_53 < (-23)); --p_53)
            {
                short l_186 = 0xACF4L;
                int l_200 = 1L;
                int l_202[4] = {0L,0L,0L,0L};
                unsigned short l_235 = 0x3F75L;
                int *l_260 = (void*)0;
                int i;
                if ((safe_rshift_func_uint8_t_u_u((func_13(p_53) || l_186), 5)))
                {
                    int **l_187[2];
                    unsigned l_196[2][7] = {{0x73E76294L,4294967290UL,0x17528EB4L,4294967288UL,0x17528EB4L,4294967290UL,0x73E76294L},{0x73E76294L,4294967290UL,0x17528EB4L,4294967288UL,0x17528EB4L,4294967290UL,0x73E76294L}};
                    int *l_248[6][5] = {{&l_140[0][1],(void*)0,&l_140[0][1],(void*)0,&l_140[0][1]},{&l_131,&l_131,&l_131,&l_131,&l_131},{&l_140[0][1],(void*)0,&l_140[0][1],(void*)0,&l_140[0][1]},{&l_131,&l_131,&l_131,&l_131,&l_131},{&l_140[0][1],(void*)0,&l_140[0][1],(void*)0,&l_140[0][1]},{&l_131,&l_131,&l_131,&l_131,&l_131}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_187[i] = (void*)0;
                    l_187[1] = ((p_56 , 0x52L) , (void*)0);
                    if ((!(safe_lshift_func_int16_t_s_u(l_140[2][2], (((safe_sub_func_uint8_t_u_u(func_13(g_149[1][6]), 0UL)) | (safe_div_func_int8_t_s_s(((func_13((safe_rshift_func_uint8_t_u_u(g_17[7], (p_53 >= (l_196[1][3] == (safe_add_func_uint8_t_u_u(p_53, 0x8BL))))))) & g_8) <= l_140[4][2]), g_149[3][2]))) | g_31)))))
                    {
                        int *l_199 = &g_17[2];
                        l_86 = &p_53;
                        return l_199;
                    }
                    else
                    {
                        unsigned l_203 = 0x0620FB37L;
                        if ((*p_52))
                            break;
                        --l_203;
                        l_140[4][2] &= ((safe_unary_minus_func_int8_t_s((safe_sub_func_int16_t_s_s(((*l_84) <= p_56), (safe_add_func_int32_t_s_s(0x366E722CL, 6UL)))))) == ((+(&g_67 != &g_67)) > (((!(safe_mod_func_uint16_t_u_u((((!((safe_lshift_func_uint16_t_u_u((((void*)0 == l_87[7]) , (g_31 <= g_8)), g_17[8])) || g_17[2])) | l_203) & (-7L)), (*l_85)))) , p_56) , 0UL)));
                    }
                    if ((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((((safe_mod_func_uint32_t_u_u(1UL, (safe_lshift_func_uint16_t_u_s(((func_13(p_56) && p_53) , 0x0887L), 12)))) && p_56) > ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_56, (func_13(((safe_mod_func_uint16_t_u_u(func_13(l_200), p_56)) > (*l_85))) != 0x90F1L))), g_31)), (*p_54))) , 1UL)) , l_202[2]), l_201)), p_56)))
                    {
                        int l_231[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                        int i;
                        --l_235;
                        (*l_85) = (*p_54);
                        (*l_84) = ((safe_mod_func_uint32_t_u_u(((-9L) == g_8), (g_233[6] , l_231[5]))) | ((safe_div_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(p_56, p_56)) >= (g_149[1][1] || func_13(g_233[6]))) && 9L), g_149[3][2])) , l_140[5][0]));
                        ++l_244[1][0];
                    }
                    else
                    {
                        int *l_247 = &l_140[4][2];
                        return l_250;
                    }
                    if (l_178)
                        goto lbl_332;
                    for (l_235 = 0; (l_235 <= 0); l_235 += 1)
                    {
                        l_249 = (void*)0;
                    }
                }
                else
                {
                    int *l_256[2][8][10] = {{{&l_202[0],&l_140[4][2],&l_202[0],&l_140[4][2],&l_202[0],&g_17[2],&l_202[2],(void*)0,&l_202[0],&l_232[0]},{(void*)0,&g_17[2],&g_17[2],&l_140[4][2],(void*)0,(void*)0,&l_140[3][1],(void*)0,(void*)0,&l_140[4][2]},{&l_202[0],&g_17[2],&l_202[0],&l_232[0],&l_202[0],(void*)0,&l_202[2],&g_17[2],&l_202[0],&l_140[4][2]},{(void*)0,&l_140[4][2],&g_17[2],&l_232[0],(void*)0,&g_17[2],&l_140[3][1],&g_17[2],(void*)0,&l_232[0]},{&l_202[0],&l_140[4][2],&l_202[0],&l_140[4][2],&l_202[0],&g_17[2],&l_202[2],(void*)0,&l_202[0],&l_232[0]},{(void*)0,&g_17[2],&g_17[2],&l_140[4][2],(void*)0,(void*)0,&l_140[3][1],(void*)0,(void*)0,&l_140[4][2]},{&l_202[0],&g_17[2],&l_202[0],&l_232[0],&l_202[0],(void*)0,&l_202[2],&g_17[2],&l_202[0],&l_140[4][2]},{(void*)0,&l_140[4][2],&g_17[2],&l_232[0],(void*)0,&g_17[2],&l_140[3][1],&g_17[2],(void*)0,&l_232[0]}},{{&l_202[0],&l_140[4][2],&l_202[0],&g_17[2],&l_232[0],&l_140[4][2],&l_202[0],&g_17[2],&l_232[0],&l_200},{&l_232[0],&l_140[4][2],&l_140[3][1],&g_17[2],(void*)0,&g_17[2],&l_232[1],&g_17[2],(void*)0,&g_17[2]},{&l_202[2],&l_140[4][2],&l_202[2],&l_200,&l_232[0],&g_17[2],&l_202[0],&l_140[4][2],&l_232[0],&g_17[2]},{&l_232[0],&l_232[0],&l_140[3][1],&l_200,(void*)0,&l_140[4][2],&l_232[1],&l_140[4][2],(void*)0,&l_200},{&l_202[2],&l_232[0],&l_202[2],&g_17[2],&l_232[0],&l_140[4][2],&l_202[0],&g_17[2],&l_232[0],&l_200},{&l_232[0],&l_140[4][2],&l_140[3][1],&g_17[2],(void*)0,&g_17[2],&l_232[1],&g_17[2],(void*)0,&g_17[2]},{&l_202[2],&l_140[4][2],&l_202[2],&l_200,&l_232[0],&g_17[2],&l_202[0],&l_140[4][2],&l_232[0],&g_17[2]},{&l_232[0],&l_232[0],&l_140[3][1],&l_200,(void*)0,&l_140[4][2],&l_232[1],&l_140[4][2],(void*)0,&l_200}}};
                    int *l_257 = (void*)0;
                    int i, j, k;
                    if (l_202[2])
                        break;
                    if ((func_13(g_17[5]) < (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(p_56, 4)), (&p_53 != &p_53)))))
                    {
                        int *l_255 = &l_140[2][2];
                        (*l_84) &= func_13(p_53);
                        return l_257;
                    }
                    else
                    {
                        int *l_258[10][5] = {{(void*)0,(void*)0,&l_140[2][2],&l_200,(void*)0},{(void*)0,(void*)0,&l_200,(void*)0,&l_140[4][2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_202[2],(void*)0,&l_140[2][2],&l_202[2]},{(void*)0,&l_200,(void*)0,&l_140[4][2],(void*)0},{&l_140[4][2],&l_140[4][2],&l_202[2],&l_202[2],&l_140[2][2]},{(void*)0,(void*)0,&l_202[2],(void*)0,(void*)0},{&l_140[2][2],&l_202[2],(void*)0,&l_202[2],&l_140[2][2]},{&l_202[2],(void*)0,&l_140[2][2],&l_140[2][2],&l_140[4][2]},{&l_202[2],&l_140[4][2],(void*)0,&l_140[5][2],&l_140[5][2]}};
                        int *l_259 = &l_131;
                        int i, j;
                        return l_260;
                    }
                }
                if ((*p_54))
                    continue;
            }
        }
        else
        {
            unsigned char l_268[1];
            int *l_272[5];
            const int *l_292 = &l_232[1];
            unsigned char l_322 = 0x41L;
            unsigned short l_325 = 0UL;
            int i;
            for (i = 0; i < 1; i++)
                l_268[i] = 1UL;
            for (i = 0; i < 5; i++)
                l_272[i] = (void*)0;
            if ((*p_52))
            {
                int *l_270[6][5][7] = {{{&l_131,&l_140[4][2],&l_140[4][2],&l_232[1],&l_140[1][2],&g_17[4],(void*)0},{&l_232[1],&l_232[1],(void*)0,&l_140[4][2],&g_17[0],&g_17[2],&g_17[0]},{&l_232[1],&g_17[0],&l_232[1],&l_140[4][2],&l_140[4][2],&g_17[7],&l_140[4][2]},{&l_131,&l_232[1],&l_232[1],&l_131,&l_232[0],&g_17[2],(void*)0},{&l_232[0],&g_17[2],&l_232[1],&g_17[5],&g_17[0],&l_140[4][1],&g_17[6]}},{{&g_17[2],&l_140[4][2],&g_17[0],&l_232[1],&g_17[2],&g_17[2],(void*)0},{(void*)0,&g_17[2],&g_17[8],&g_17[2],(void*)0,&l_232[1],&l_140[4][2]},{&g_17[2],&l_140[4][2],&l_232[1],(void*)0,&l_140[4][2],&g_17[2],&g_17[0]},{&g_17[0],&g_17[0],&l_140[1][2],&l_232[0],&g_17[2],&g_17[2],(void*)0},{&l_140[4][2],&g_17[5],&g_17[7],&g_17[6],&l_232[1],&g_17[6],&g_17[7]}},{{&l_140[5][1],&l_140[5][1],&l_140[4][2],&l_140[4][2],&l_232[1],&l_140[4][2],&l_232[1]},{&g_17[2],&g_17[0],&l_232[1],&g_17[4],(void*)0,&g_17[6],&l_232[1]},{&l_232[1],&l_131,&l_140[4][2],&g_17[0],&l_232[1],&l_232[1],(void*)0},{&l_140[1][2],&l_232[1],&g_17[8],&g_17[0],&l_232[1],&l_232[1],&l_232[1]},{&l_140[5][2],&g_17[2],&l_140[4][1],&g_17[2],&l_140[4][2],&g_17[2],&l_140[5][1]}},{{&g_17[6],&l_232[1],&l_140[5][2],&g_17[2],&g_17[2],&l_140[4][2],&l_140[4][2]},{&l_232[1],&g_17[0],&g_17[2],&g_17[0],&g_17[2],&g_17[0],&l_232[1]},{&g_17[2],&l_140[1][0],&g_17[2],&g_17[0],&l_140[5][1],&g_17[8],&g_17[2]},{&l_232[1],&l_140[4][2],(void*)0,&g_17[4],&l_140[1][2],&l_232[1],&l_140[4][2]},{&l_131,&l_232[1],&g_17[2],&l_140[4][2],&l_232[1],&l_131,&g_17[2]}},{{&g_17[0],(void*)0,&g_17[2],&g_17[6],&g_17[4],&l_140[1][0],&l_232[1]},{&g_17[6],&g_17[2],&l_140[5][2],&l_232[1],(void*)0,&g_17[2],&l_140[4][1]},{&g_17[7],&g_17[2],&l_140[4][1],&g_17[2],&l_232[1],&l_140[5][2],&l_140[5][2]},{&l_232[1],&l_232[1],(void*)0,&l_232[1],&l_232[1],&l_140[4][2],&g_17[2]},{&l_232[1],&g_17[6],&g_17[2],&l_232[1],&l_232[1],&l_131,&g_17[7]}},{{(void*)0,&g_17[2],&g_17[0],&l_232[0],&l_140[4][2],&g_17[0],&l_140[1][2]},{&l_232[1],&l_232[1],&l_232[0],&g_17[0],&l_140[4][2],&l_232[1],&g_17[2]},{&l_232[1],&l_232[1],&l_140[4][2],&l_140[4][2],&g_17[2],&g_17[7],&g_17[2]},{&l_140[4][2],&l_131,&g_17[0],&l_232[1],&g_17[7],&l_232[1],&g_17[2]},{&g_17[2],&g_17[7],&l_140[1][2],&g_17[2],&g_17[2],&g_17[2],&g_17[2]}}};
                int i, j, k;
                for (l_90 = 0; (l_90 > 23); l_90++)
                {
                    short l_265 = 0L;
                    (*l_249) = (((((((safe_mod_func_uint16_t_u_u((+(&p_53 != (void*)0)), 0x51AAL)) , (l_265 != ((safe_div_func_int16_t_s_s((((&p_53 != (((g_149[3][2] >= g_233[6]) || ((l_268[0] & g_149[4][1]) , l_265)) , (void*)0)) > p_53) , 1L), 0x9D18L)) != (*l_84)))) , &p_55) == &g_67) , &l_249) == &g_67) , (*l_85));
                }
                l_270[1][3][0] = &p_53;
                return l_272[3];
            }
            else
            {
                int **l_273 = &g_67;
                (*l_273) = &l_140[4][2];
            }
            for (p_53 = 0; (p_53 <= 1); p_53 += 1)
            {
                char l_280 = (-4L);
                const int l_305 = 0L;
                int l_320[1][6] = {{0L,0L,0L,0L,0L,0L}};
                int i, j;
                if (((safe_div_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((*p_54), 0xAB543D73L)) > g_149[3][2]), 9L)) != (safe_rshift_func_uint16_t_u_s(((g_8 < (((!((((*l_249) || ((l_272[4] == l_272[3]) <= l_280)) <= g_233[2]) & g_8)) || 0x16D8A703L) < p_53)) ^ 0UL), p_53))))
                {
                    char l_288 = (-6L);
                    int *l_307 = (void*)0;
                    for (l_90 = 1; (l_90 >= 0); l_90 -= 1)
                    {
                        int * const l_281 = (void*)0;
                        l_249 = l_281;
                        (*l_85) = (*g_67);
                        (*g_67) = ((((safe_add_func_uint8_t_u_u((0L & (g_233[0] <= (func_13(((0xFAL == (safe_rshift_func_uint8_t_u_u(p_53, func_13(p_53)))) || (*p_52))) , (safe_mod_func_int32_t_s_s(l_288, 0xF08F745AL))))), g_149[5][5])) <= (*g_67)) & g_17[2]) , (*p_52));
                    }
                    (*g_295) = func_58(p_53, (p_53 , l_272[4]), func_58((safe_lshift_func_int8_t_s_s(l_291, 1)), &l_140[4][2], l_292));
                    if ((((safe_sub_func_uint16_t_u_u(65528UL, g_149[2][2])) || 0x258D435CL) , (*p_54)))
                    {
                        char l_304[9] = {0xFDL,0xFDL,0x56L,0xFDL,0xFDL,0x56L,0xFDL,0xFDL,0x56L};
                        int l_306 = 0x49209506L;
                        int i;
                        l_306 &= ((func_13(func_13((safe_div_func_uint16_t_u_u((((*p_54) ^ (0UL & (!((((&p_54 == (void*)0) <= 8UL) > (((((((g_17[8] & (safe_div_func_uint8_t_u_u((!((g_233[5] , p_53) , ((0L <= p_53) , 0x6DL))), g_17[2]))) > l_304[8]) ^ (*p_52)) , (*p_54)) != l_288) == l_305) >= p_56)) < g_149[3][2])))) == g_31), (-1L))))) == 4UL) ^ l_304[8]);
                        return l_272[4];
                    }
                    else
                    {
                        return l_307;
                    }
                }
                else
                {
                    unsigned short l_308 = 0x1587L;
                    int *l_315 = &l_140[5][0];
                    (*g_67) &= (*p_52);
                    for (l_89 = 0; (l_89 <= 1); l_89 += 1)
                    {
                        int i;
                        l_308++;
                    }
                    for (l_101 = 0; (l_101 >= 48); ++l_101)
                    {
                        (*p_52) &= (func_13((g_31 ^ g_233[0])) , (safe_lshift_func_uint16_t_u_s(0xB8A4L, 3)));
                        return l_272[1];
                    }
                    for (l_234 = (-3); (l_234 <= (-4)); --l_234)
                    {
                        int l_318 = (-3L);
                        int l_319 = 0xEA663EB9L;
                        int l_321[4] = {0x8343BF57L,0x8343BF57L,0x8343BF57L,0x8343BF57L};
                        int i;
                        (*l_315) = 0x5610E7EFL;
                        (*l_315) = ((*l_249) != g_149[3][2]);
                        ++l_322;
                    }
                }
                l_325--;
            }
            return l_272[3];
        }
        l_329--;
        (*l_85) ^= func_13(p_53);
    }
    (*p_52) = ((p_53 & (safe_sub_func_uint8_t_u_u((((void*)0 != &p_53) ^ func_13((p_56 < ((safe_add_func_uint16_t_u_u(func_13((p_56 > ((((((g_17[2] && 0xA522L) , (*g_295)) != (void*)0) , &p_52) != &g_294[3]) | (*l_250)))), 0x1D19L)) , g_17[2])))), 0x0CL))) < (*p_52));
    return l_338;
}







static const int * func_58(unsigned p_59, int * p_60, const int * p_61)
{
    int *l_65 = &g_17[6];
    int **l_71 = &g_67;
    for (p_59 = 12; (p_59 != 36); p_59 = safe_add_func_uint32_t_u_u(p_59, 4))
    {
        int **l_68 = &l_65;
        (*l_68) = l_65;
        (*g_67) = (safe_lshift_func_uint16_t_u_s(65535UL, 15));
        if ((**l_68))
            break;
    }
    (*g_67) = ((&p_61 != (void*)0) , (((&l_65 != &l_65) ^ p_59) <= ((void*)0 != l_65)));
    (*l_71) = p_60;
    return p_61;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_31, "g_31", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_149[i][j], "g_149[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_233[i], "g_233[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_493, "g_493", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_852, "g_852", print_hash_value);
    transparent_crc(g_855, "g_855", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_932[i], "g_932[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_977, "g_977", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
