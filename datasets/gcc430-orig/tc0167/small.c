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



static int g_2[1] = {1L};
static unsigned short g_42 = 0x56D2L;
static char g_61[5] = {0xBDL,0xBDL,0xBDL,0xBDL,0xBDL};
static unsigned char g_66[7][8] = {{255UL,0UL,6UL,1UL,0x8DL,0x8DL,1UL,6UL},{0xD2L,0xD2L,8UL,255UL,250UL,255UL,6UL,255UL},{255UL,0x16L,0xD2L,250UL,1UL,255UL,0x93L,255UL},{0x16L,255UL,0x8DL,255UL,0x16L,1UL,8UL,6UL},{0x8DL,0x83L,0UL,1UL,0xB2L,250UL,1UL,255UL},{250UL,255UL,8UL,0xD2L,0xD2L,8UL,255UL,250UL},{0x93L,0x8DL,0x16L,255UL,255UL,1UL,1UL,8UL}};
static int g_70 = 0x5828E8BFL;
static int g_72 = 0x46C42882L;
static int g_73 = 0xA495B284L;
static unsigned g_96 = 0x4A5683E2L;
static char g_116[5] = {0x1DL,0x1DL,0x1DL,0x1DL,0x1DL};
static int *g_123 = &g_70;
static short g_158 = (-1L);
static unsigned char g_193 = 0x89L;
static unsigned g_196 = 0x8D7ED8B2L;
static unsigned short *g_199[4] = {&g_42,&g_42,&g_42,&g_42};
static unsigned short **g_198[5] = {&g_199[3],&g_199[3],&g_199[3],&g_199[3],&g_199[3]};
static short g_219[3][8][1] = {{{0L},{0xC192L},{0L},{0xC192L},{0L},{0xC192L},{0L},{0xC192L}},{{0L},{0xC192L},{0L},{0xC192L},{0L},{0xC192L},{0L},{0xC192L}},{{0L},{0xC192L},{0L},{0xC192L},{0L},{0xC192L},{0L},{0xC192L}}};
static int g_269 = 0xCD89572EL;
static char *g_303 = &g_116[1];
static char **g_302 = &g_303;
static unsigned short g_361[2][6] = {{65527UL,1UL,0x69B0L,0x69B0L,1UL,65527UL},{65535UL,65527UL,0x69B0L,65527UL,65535UL,65535UL}};
static unsigned g_383 = 0x3344512BL;
static unsigned *g_409 = &g_383;
static unsigned **g_408 = &g_409;
static unsigned ***g_407 = &g_408;
static unsigned ****g_406 = &g_407;
static int *g_417 = &g_72;
static unsigned char *g_451 = &g_66[3][3];
static unsigned char **g_450 = &g_451;
static unsigned char ***g_449 = &g_450;
static int **g_458 = &g_123;
static int ***g_457 = &g_458;
static short **g_472 = (void*)0;
static unsigned char g_510 = 0xF8L;
static unsigned char g_537[1][9][6] = {{{252UL,252UL,252UL,252UL,252UL,252UL},{252UL,252UL,252UL,252UL,252UL,252UL},{252UL,252UL,252UL,252UL,252UL,252UL},{252UL,252UL,252UL,252UL,252UL,252UL},{252UL,252UL,252UL,252UL,252UL,252UL},{252UL,252UL,252UL,252UL,252UL,252UL},{252UL,252UL,252UL,252UL,252UL,252UL},{252UL,252UL,252UL,252UL,252UL,252UL},{252UL,252UL,252UL,252UL,252UL,252UL}}};
static short *g_549 = &g_219[2][7][0];
static short g_635 = 2L;
static unsigned *g_652[10][6] = {{&g_196,&g_196,(void*)0,&g_196,&g_196,(void*)0},{&g_196,&g_196,(void*)0,&g_196,&g_196,(void*)0},{&g_196,&g_196,(void*)0,&g_196,&g_196,(void*)0},{&g_196,&g_196,(void*)0,&g_196,&g_196,(void*)0},{&g_196,&g_196,(void*)0,&g_196,&g_196,(void*)0},{&g_196,&g_196,(void*)0,&g_196,&g_196,(void*)0},{&g_196,&g_196,(void*)0,&g_196,&g_196,(void*)0},{&g_196,&g_196,(void*)0,&g_196,&g_196,(void*)0},{&g_196,&g_196,(void*)0,&g_196,&g_196,(void*)0},{&g_196,&g_196,(void*)0,&g_196,&g_196,(void*)0}};
static unsigned short g_681[9] = {65535UL,65535UL,1UL,65535UL,65535UL,1UL,65535UL,65535UL,1UL};
static short g_751[9] = {0x1094L,0x1094L,0x1094L,0x1094L,0x1094L,0x1094L,0x1094L,0x1094L,0x1094L};
static unsigned *****g_791 = &g_406;
static int *g_854 = &g_73;
static int **g_853 = &g_854;
static short ***g_883 = &g_472;
static int g_898 = 1L;
static int *g_1052 = &g_2[0];
static unsigned g_1136 = 0xD983CF35L;
static short g_1244 = 0x88D3L;
static unsigned ****g_1269 = (void*)0;
static unsigned *****g_1425 = &g_1269;
static unsigned g_1443[9] = {0xE61986F3L,0xE61986F3L,0xE61986F3L,0xE61986F3L,0xE61986F3L,0xE61986F3L,0xE61986F3L,0xE61986F3L,0xE61986F3L};
static int g_1478[7][2] = {{6L,1L},{1L,6L},{(-6L),(-5L)},{(-6L),6L},{1L,1L},{6L,(-6L)},{(-5L),(-6L)}};
static unsigned g_1509 = 0x2DF7D87AL;
static int g_1572 = 0x31D5A489L;
static char g_1631 = 0x05L;
static int *g_1716[5][10] = {{&g_1478[4][0],&g_72,&g_72,&g_1478[4][0],&g_72,&g_1478[4][0],&g_72,&g_72,&g_1478[4][0],(void*)0},{&g_70,&g_72,(void*)0,&g_70,&g_72,&g_1478[4][0],&g_72,&g_72,&g_1478[4][0],&g_72},{&g_70,&g_72,&g_72,&g_70,(void*)0,&g_1478[4][0],&g_72,&g_72,&g_1478[4][0],&g_72},{&g_1478[4][0],&g_72,&g_72,&g_1478[4][0],&g_72,&g_1478[4][0],&g_72,&g_72,&g_1478[4][0],(void*)0},{&g_70,&g_72,(void*)0,&g_70,&g_72,&g_1478[4][0],&g_72,&g_72,&g_1478[4][0],&g_72}};
static unsigned short g_1718 = 0x4259L;



static int func_1(void);
static int * func_5(int * p_6);
static unsigned func_7(int p_8);
static unsigned func_12(char p_13, char p_14, int * p_15, unsigned char p_16);
static int func_17(int * p_18, unsigned p_19);
static int * func_20(int p_21);
static int func_22(unsigned p_23);
static char func_26(unsigned short p_27, int * p_28, int * p_29, int * p_30);
static int * func_33(int * p_34, char p_35, short p_36);
static int * func_37(unsigned p_38, int * p_39, unsigned char p_40, int * p_41);
static int func_1(void)
{
    int l_517 = 0x041FA365L;
    char l_834 = (-1L);
    short ***l_1036 = &g_472;
    unsigned short l_1037[2][8][4] = {{{0xA5D2L,0x715FL,0x84A4L,65532UL},{0x2B8BL,0x84A4L,0x8584L,0x84A4L},{0x8584L,0x84A4L,0x2B8BL,65532UL},{0x84A4L,0x715FL,0xA5D2L,0x92BAL},{0x84A4L,0x7E4FL,0x7E4FL,0x84A4L},{0x84A4L,0UL,65535UL,0xA5D2L},{0x715FL,0x84A4L,65532UL,65529UL},{0x92BAL,0x2B8BL,0x92BAL,65529UL}},{{65532UL,0x84A4L,0x715FL,0xA5D2L},{65535UL,0UL,0x84A4L,0x84A4L},{0x7E4FL,0x7E4FL,0x84A4L,0x92BAL},{65535UL,0x8584L,0x715FL,0UL},{65532UL,0x715FL,0x92BAL,0x715FL},{0x92BAL,0x715FL,65532UL,0UL},{0x715FL,0x8584L,65535UL,0x92BAL},{0x84A4L,0x7E4FL,0x7E4FL,0x84A4L}}};
    int *l_1042 = &g_2[0];
    unsigned short ***l_1068 = &g_198[2];
    unsigned short l_1107 = 0xF285L;
    short l_1141[9] = {0x91E6L,(-1L),0x91E6L,(-1L),0x91E6L,(-1L),0x91E6L,(-1L),0x91E6L};
    char l_1179[1][1][5] = {{{0xCAL,0xCAL,0xCAL,0xCAL,0xCAL}}};
    unsigned l_1218 = 0x537BA9AEL;
    int *l_1232 = &g_898;
    unsigned **l_1236 = &g_652[5][4];
    unsigned ***l_1235 = &l_1236;
    unsigned ****l_1234 = &l_1235;
    short l_1237 = 0x65C1L;
    int l_1243 = 1L;
    unsigned l_1247 = 4294967287UL;
    int ***l_1294 = &g_853;
    unsigned short l_1403[4];
    int *l_1441 = &g_898;
    int *l_1442 = (void*)0;
    int *l_1446 = &g_2[0];
    unsigned char l_1455 = 0x8BL;
    unsigned l_1466 = 0x7ACCD4ACL;
    short l_1507 = (-1L);
    int l_1508 = 0xE4AFAE98L;
    unsigned short l_1518 = 65530UL;
    unsigned l_1528 = 0xF258A4A8L;
    unsigned short **l_1532 = &g_199[3];
    unsigned short l_1599[4];
    unsigned short *l_1610 = &l_1037[0][6][3];
    unsigned l_1613 = 1UL;
    int **l_1629[2];
    unsigned l_1630 = 4294967295UL;
    int l_1635 = 0x6A67AA05L;
    unsigned char ***l_1638 = &g_450;
    int l_1667 = (-1L);
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1403[i] = 6UL;
    for (i = 0; i < 4; i++)
        l_1599[i] = 65534UL;
    for (i = 0; i < 2; i++)
        l_1629[i] = &g_854;
    for (g_2[0] = 0; (g_2[0] > 11); g_2[0] = safe_add_func_int8_t_s_s(g_2[0], 7))
    {
        int l_11 = 0x46A1C17CL;
        int *l_608 = (void*)0;
    }
    (*l_1042) = (safe_mod_func_int32_t_s_s((((((*g_549) = (safe_rshift_func_int8_t_s_s(((void*)0 != l_1036), l_517))) & l_834) != (l_834 >= l_1037[0][6][1])) <= (safe_add_func_int8_t_s_s(func_7(((**g_302) , (safe_sub_func_int32_t_s_s((func_26(l_834, l_1042, l_1042, l_1042) <= 0x991E6F13L), (***g_407))))), 0x57L))), (*g_409)));

    ;
    if (((*l_1042) = (*l_1042)))
    {
        unsigned char l_1075 = 1UL;
        unsigned char **l_1077[1][7][6] = {{{&g_451,&g_451,&g_451,&g_451,&g_451,&g_451},{&g_451,&g_451,&g_451,&g_451,&g_451,&g_451},{&g_451,&g_451,&g_451,&g_451,&g_451,&g_451},{&g_451,&g_451,&g_451,&g_451,&g_451,&g_451},{&g_451,&g_451,&g_451,&g_451,&g_451,&g_451},{&g_451,&g_451,(void*)0,&g_451,(void*)0,(void*)0},{&g_451,(void*)0,(void*)0,&g_451,(void*)0,(void*)0}}};
        int l_1138[6][2] = {{2L,0L},{2L,2L},{0L,2L},{2L,0L},{2L,2L},{0L,2L}};
        int l_1193 = (-1L);
        short **l_1217 = &g_549;
        unsigned **l_1226 = &g_652[0][3];
        unsigned ***l_1225 = &l_1226;
        unsigned ****l_1224 = &l_1225;
        unsigned char l_1231 = 0x40L;
        unsigned l_1233[4][9][1] = {{{3UL},{0xAE1AEFFAL},{3UL},{3UL},{0xAE1AEFFAL},{3UL},{3UL},{0xAE1AEFFAL},{3UL}},{{3UL},{0xAE1AEFFAL},{3UL},{3UL},{0xAE1AEFFAL},{3UL},{3UL},{0xAE1AEFFAL},{3UL}},{{3UL},{0xAE1AEFFAL},{3UL},{3UL},{0xAE1AEFFAL},{3UL},{3UL},{0xAE1AEFFAL},{3UL}},{{3UL},{0xAE1AEFFAL},{3UL},{3UL},{0xAE1AEFFAL},{3UL},{3UL},{0xAE1AEFFAL},{3UL}}};
        char **l_1263 = (void*)0;
        int l_1292 = 4L;
        unsigned char l_1295 = 0x60L;
        unsigned short l_1310[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        unsigned ***l_1319 = &g_408;
        short l_1326 = 0xF44BL;
        int *l_1359 = &g_70;
        short l_1380[9][10] = {{0x8F99L,5L,(-5L),0x929DL,(-1L),0x6AC1L,0x929DL,(-1L),0x1349L,0x8F99L},{5L,0x8872L,(-1L),9L,0x8B9AL,5L,0x8B9AL,9L,(-1L),0x8872L},{0x4C84L,(-5L),0x8F99L,0x8872L,(-1L),0x9F3DL,0x1277L,(-1L),0x15F3L,8L},{(-1L),0x0776L,(-5L),(-1L),0x4C84L,0x929DL,0x1349L,9L,0L,(-1L)},{0x8B9AL,8L,0x0F7BL,9L,(-1L),0xD258L,5L,5L,0xD258L,(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),0L,9L,0x1349L,0x929DL,0x4C84L},{0x15F3L,(-1L),(-1L),0x6AC1L,0x8872L,0x9F3DL,(-1L),9L,0x929DL,(-1L)},{5L,0x1277L,0xDFB8L,(-1L),0x1277L,(-6L),(-1L),0x0776L,0xD258L,0x0776L},{(-1L),(-5L),0x15F3L,9L,0x15F3L,(-5L),(-1L),1L,0L,0x4C84L}};
        int i, j, k;
        for (g_158 = 0; (g_158 >= (-11)); --g_158)
        {
            unsigned char l_1051[2];
            int *l_1067 = &g_898;
            int i;
            for (i = 0; i < 2; i++)
                l_1051[i] = 0x14L;
            for (g_383 = 0; (g_383 > 21); g_383 = safe_add_func_uint8_t_u_u(g_383, 3))
            {
                short l_1050 = 0xF053L;
                unsigned *l_1055[8][3] = {{&g_383,&g_96,&g_96},{&g_383,&g_383,&g_383},{&g_383,(void*)0,&g_383},{&g_383,&g_383,&g_383},{&g_96,&g_96,&g_96},{&g_96,&g_383,&g_383},{&g_96,(void*)0,&g_96},{&g_96,&g_383,&g_96}};
                unsigned ****l_1066 = &g_407;
                int i, j;
                for (g_510 = 0; (g_510 == 26); g_510++)
                {
                    unsigned char l_1049 = 0x0EL;
                    int l_1056 = 0x9508C25DL;
                    l_1051[0] = (l_1049 || ((**g_450) = func_7(l_1050)));
                }
                (**g_457) = l_1067;

                ;
            }
            if ((***g_457))
                continue;
        }

        ;
        if ((*l_1042))
        {
            (*l_1042) = ((*l_1042) , (*g_123));
            (**g_458) = ((((void*)0 != l_1068) , 0L) > (safe_add_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((*g_549))), ((((void*)0 != l_1042) && ((void*)0 == (*g_406))) , (*g_303)))));
        }
        else
        {
            unsigned char l_1074 = 0x42L;
            int l_1088[1];
            int l_1157 = 1L;
            unsigned l_1178[10] = {0UL,0x44F86722L,0x7E3A76BFL,0x44F86722L,0UL,0UL,0x44F86722L,0x7E3A76BFL,0x44F86722L,0UL};
            short l_1180 = 0L;
            unsigned l_1183 = 0x6D70430CL;
            int *l_1188 = (void*)0;
            int i;
            for (i = 0; i < 1; i++)
                l_1088[i] = (-10L);
            (*g_123) = (*g_123);
            if ((*g_1052))
            {
                unsigned char **l_1076 = &g_451;
                for (g_196 = 8; (g_196 >= 30); g_196 = safe_add_func_uint8_t_u_u(g_196, 9))
                {
                    for (g_383 = 0; (g_383 <= 0); g_383 += 1)
                    {
                        return l_1074;
                    }
                    if (l_1075)
                        break;
                }
                (*g_458) = (*g_458);
                l_1077[0][2][2] = l_1076;
            }
            else
            {
                unsigned char l_1082 = 1UL;
                int *l_1085 = (void*)0;
                unsigned short l_1103 = 0x1CA7L;
                unsigned char l_1104 = 0x0BL;
                int l_1182 = (-4L);
                char *l_1184 = &g_116[1];
                short **l_1207 = &g_549;
                short ***l_1206 = &l_1207;
                short l_1210[10][7] = {{(-1L),0xA70DL,0L,0xA70DL,0L,7L,0xD6EEL},{7L,0xE9A9L,0L,(-1L),0x572EL,0L,0x572EL},{7L,0x572EL,0x572EL,7L,0x7938L,(-1L),0xA70DL},{0xD6EEL,(-1L),0L,0x7938L,0x7938L,0L,(-1L)},{0x7938L,0xD6EEL,0L,0xE9A9L,0x572EL,0xA70DL,0xA70DL},{0L,0xD6EEL,0x7938L,0xD6EEL,0L,0xE9A9L,0x572EL},{0L,(-1L),0xD6EEL,0xE9A9L,(-1L),0xE9A9L,0xD6EEL},{0x572EL,0x572EL,7L,0x7938L,(-1L),0xA70DL,0L},{0L,0xE9A9L,7L,7L,0xE9A9L,0L,(-1L)},{0L,7L,0xD6EEL,(-1L),(-1L),(-1L),(-1L)}};
                int *l_1211 = (void*)0;
                int *l_1212 = &l_1182;
                int i, j;
                for (g_73 = 0; (g_73 < (-26)); g_73 = safe_sub_func_uint16_t_u_u(g_73, 5))
                {
                    int *l_1086[4] = {&g_2[0],&g_2[0],&g_2[0],&g_2[0]};
                    int i;
                    for (g_196 = (-22); (g_196 != 13); g_196++)
                    {
                        int *l_1087 = &g_898;
                        l_1088[0] = (l_1075 <= ((*g_549) = func_26((l_1074 != ((((***g_449) , l_1082) , (+func_7((safe_sub_func_int32_t_s_s(l_1082, ((*l_1042) < 249UL)))))) < (((*l_1042) & (*l_1042)) && (*g_303)))), l_1085, l_1086[2], l_1087)));

                        ;
                        (**g_458) = ((((*l_1087) , (safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((*g_451), (((****g_406) = (***g_407)) != ((1UL <= ((*l_1042) = (safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(((*g_549) && (safe_sub_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((**g_302), ((~(+(l_1103 = ((**g_450) ^ (**g_302))))) != (((*l_1087) = (*l_1042)) | (*g_451))))), (-1L))) , 0xE2AAL) && 0x90E0L) ^ l_1074), 0x6A8EL))), (*l_1042))), l_1075)))) , (***g_457))))) || (*g_549)), l_1104))) >= l_1074) , 0x3AD03E75L);
                        return (*l_1042);
                    }
                }
                if ((safe_rshift_func_uint16_t_u_u(l_1107, 11)))
                {
                    unsigned char l_1124 = 0x64L;
                    for (l_1075 = (-12); (l_1075 > 33); l_1075++)
                    {
                        char l_1127[4][1][7] = {{{0x4AL,0x7DL,0L,0xB4L,0L,0x7DL,0x4AL}},{{0x4AL,0x7DL,0L,0xB4L,0L,0x7DL,0x4AL}},{{0x4AL,0x7DL,0L,0xB4L,0L,0x7DL,0x4AL}},{{0x4AL,0x7DL,0L,0x4AL,4L,(-9L),0x7DL}}};
                        int i, j, k;
                        (***g_457) = (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((+((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int8_t_s_u((**g_302), (safe_sub_func_int8_t_s_s(((0x79L == (safe_unary_minus_func_uint16_t_u(l_1104))) , ((safe_rshift_func_uint16_t_u_u(((((0x1F93CC43L > (safe_mod_func_uint8_t_u_u(0x6FL, (-7L)))) ^ ((*g_1052) ^ l_1082)) , (*l_1042)) , 9UL), l_1074)) || (*g_303))), 0xE5L)))))) , 0x18L)) > l_1124), 0x58L)), (*g_303)));
                        (*g_417) = (((safe_add_func_uint8_t_u_u((func_22(l_1127[0][0][3]) != l_1127[0][0][3]), (**g_450))) , 0UL) & ((((*g_303) = ((l_1074 ^ (*****g_791)) | ((~0x56L) , (-1L)))) == l_1124) & (*g_451)));

                        ;
                        (*g_417) = (((((*g_451) | (safe_lshift_func_int8_t_s_u((l_1075 & ((!(((*g_303) = (safe_rshift_func_uint16_t_u_s(l_1124, func_7((*g_854))))) , func_7((**g_853)))) | ((safe_sub_func_int16_t_s_s(0xFB8DL, (safe_rshift_func_int16_t_s_s(((void*)0 == &l_1088[0]), 11)))) , 65528UL))), (***g_449)))) , &g_853) == (void*)0) , g_1136);

                        ;
                    }
                }
                else
                {
                    int l_1137[4][8][3] = {{{3L,(-8L),3L},{5L,0xBB512E57L,0x3A84A264L},{0x68CE4EB5L,0x68CE4EB5L,(-2L)},{0L,0xBB512E57L,0xBB512E57L},{(-2L),(-8L),0x6F572FDDL},{0L,0xA1411297L,0L},{0x68CE4EB5L,(-2L),0x6F572FDDL},{5L,5L,0xBB512E57L}},{{3L,(-2L),(-2L)},{0xBB512E57L,0xA1411297L,0x3A84A264L},{3L,(-8L),3L},{5L,0xBB512E57L,0x3A84A264L},{0x68CE4EB5L,0x68CE4EB5L,(-2L)},{0L,0xBB512E57L,0xBB512E57L},{(-2L),(-8L),0x6F572FDDL},{0L,0xA1411297L,0L}},{{0x68CE4EB5L,(-2L),0x6F572FDDL},{5L,5L,0xBB512E57L},{3L,(-2L),(-2L)},{0xBB512E57L,0xA1411297L,0x3A84A264L},{3L,(-8L),3L},{5L,0xBB512E57L,0x3A84A264L},{0x68CE4EB5L,0x68CE4EB5L,(-2L)},{0L,0xBB512E57L,0xBB512E57L}},{{(-2L),(-8L),0x6F572FDDL},{0L,0xA1411297L,0L},{0x68CE4EB5L,(-2L),0x6F572FDDL},{5L,5L,0xBB512E57L},{3L,(-2L),(-2L)},{0xBB512E57L,0xA1411297L,0x3A84A264L},{3L,0x6F572FDDL,(-2L)},{0xA1411297L,5L,0L}}};
                    int l_1143 = 7L;
                    unsigned char l_1181 = 0x29L;
                    int i, j, k;
                    (**g_457) = (**g_457);
                    for (g_1136 = 0; (g_1136 <= 4); g_1136 += 1)
                    {
                        int l_1142 = 0x107A0868L;
                    }
                    if (((*g_303) , ((9L <= 0UL) , 0xD0D10A6FL)))
                    {
                        char *l_1154 = &g_61[1];
                        char *l_1155 = &l_834;
                        int l_1156 = (-1L);
                        (*g_1052) = (l_1075 & ((*g_417) < ((safe_lshift_func_uint16_t_u_s((!0xBEA9L), ((**g_302) < (((safe_rshift_func_uint8_t_u_s(((((safe_sub_func_int16_t_s_s((*g_549), (safe_lshift_func_uint8_t_u_s((0L & l_1137[3][2][0]), ((*l_1155) = ((*l_1154) = (l_1088[0] , func_7((l_1103 & 0xFA9EL))))))))) && l_1156) < (*g_409)) ^ (*g_451)), (*g_303))) != (*g_303)) , 0x02L)))) & l_1156)));

                        ;
                        (*l_1042) = (l_1157 & (l_1156 & ((safe_lshift_func_int8_t_s_s((2L ^ ((l_1075 , ((safe_lshift_func_int16_t_s_s(0xE32CL, ((*g_303) >= (func_17(((**g_457) = func_33((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_1088[0], ((safe_sub_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(l_1157, ((((safe_add_func_int16_t_s_s(((*g_549) = l_1178[9]), 0UL)) | 5UL) , l_1088[0]) && (*g_409)))), (*g_409))) || l_1156) , l_1075) , l_1179[0][0][4]), l_1180)) && 0x4130L))), 0x91L)), 2)) | l_1156) , (**g_457)), (*g_303), g_751[1])), (***g_407)) , 9UL)))) , l_1181)) != l_1137[3][2][0])), (*g_303))) != (*l_1042))));

                        ;
                    }
                    else
                    {
                        l_1182 = ((*l_1042) = ((*g_123) = 0x74FD7F09L));
                        (*g_417) = (*g_1052);
                        (*g_458) = ((**g_408) , (**g_457));
                        (**g_458) = (*l_1042);
                    }

                    ;
                    if ((*g_123))
                    {
                        char *l_1186 = (void*)0;
                        char **l_1185 = &l_1186;
                        int *l_1187[9][3][9] = {{{&g_70,&g_2[0],(void*)0,&l_1157,(void*)0,&g_898,&g_72,(void*)0,(void*)0},{&g_898,&g_72,(void*)0,&g_2[0],&l_1182,&l_1088[0],&g_898,&g_898,&l_1088[0]},{&g_72,&l_1143,&g_2[0],&l_1143,&g_72,&l_1088[0],&g_898,&l_1157,&l_1143}},{{&l_1088[0],&g_72,&g_2[0],&g_2[0],&g_898,(void*)0,&l_1143,&g_72,&g_898},{&g_2[0],&l_1088[0],&l_1157,&l_1143,&g_72,&l_1088[0],(void*)0,(void*)0,(void*)0},{&l_1088[0],&l_1088[0],&g_2[0],(void*)0,&l_1088[0],&l_1088[0],&g_2[0],&l_1182,(void*)0}},{{(void*)0,&l_1143,&g_72,(void*)0,&l_1088[0],&g_898,(void*)0,&g_72,&l_1088[0]},{(void*)0,(void*)0,&g_2[0],&l_1182,&g_2[0],&l_1182,&l_1088[0],&l_1182,&g_2[0]},{(void*)0,&g_898,&g_898,(void*)0,(void*)0,&l_1088[0],&l_1088[0],(void*)0,&g_72}},{{&g_2[0],&l_1182,&g_2[0],&g_2[0],&l_1182,&g_2[0],&g_70,&l_1157,&g_72},{(void*)0,(void*)0,&g_72,(void*)0,(void*)0,&l_1157,&l_1157,&g_2[0],(void*)0},{&l_1143,&g_2[0],&g_2[0],&g_70,&l_1088[0],&l_1182,&g_2[0],(void*)0,&l_1182}},{{(void*)0,&g_2[0],&l_1088[0],&g_70,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1143,&g_2[0],(void*)0,&g_72,&g_2[0],&g_2[0],&g_72,(void*)0},{&l_1182,(void*)0,&l_1182,(void*)0,&g_2[0],&g_2[0],&l_1088[0],&g_2[0],&g_2[0]}},{{&l_1182,&l_1157,&l_1182,&l_1182,&l_1088[0],&g_72,&g_2[0],(void*)0,&l_1143},{(void*)0,&l_1143,&g_2[0],(void*)0,&l_1182,&l_1143,&g_2[0],&g_72,(void*)0},{&g_72,&l_1088[0],(void*)0,(void*)0,(void*)0,&g_898,&g_72,&l_1143,&l_1088[0]}},{{(void*)0,&g_898,(void*)0,&g_70,&l_1088[0],&l_1157,(void*)0,&l_1182,(void*)0},{&l_1182,&l_1088[0],&l_1143,&g_70,&g_2[0],&l_1157,&g_2[0],&g_70,&l_1143},{&g_2[0],&g_2[0],(void*)0,(void*)0,&l_1088[0],&g_2[0],(void*)0,(void*)0,(void*)0}},{{&g_70,&l_1182,&l_1157,&g_72,&l_1088[0],&l_1157,&g_2[0],(void*)0,&l_1182},{(void*)0,(void*)0,&l_1088[0],&l_1157,&g_2[0],&g_2[0],(void*)0,&g_70,(void*)0},{&l_1157,&l_1088[0],(void*)0,&g_2[0],&l_1182,(void*)0,&g_70,&g_2[0],&g_2[0]}},{{&l_1088[0],(void*)0,&g_2[0],&g_2[0],&l_1088[0],&g_2[0],&g_2[0],(void*)0,&l_1182},{&g_70,(void*)0,&l_1088[0],&g_70,&l_1088[0],&l_1088[0],&g_70,&l_1088[0],(void*)0},{(void*)0,(void*)0,(void*)0,&g_72,&g_72,&l_1088[0],&g_898,(void*)0,&l_1157}}};
                        int i, j, k;
                        (*g_417) = (((l_1183 <= (((l_1074 ^ 0xC5L) ^ (5L && (*g_549))) > (func_12((((*g_302) = l_1184) != ((*l_1185) = &g_61[1])), (l_1183 & (0xD4L == (***g_449))), l_1187[6][0][3], l_1178[9]) == (*l_1042)))) || (-10L)) <= (*g_417));

                        ;
                        ;
                        l_1188 = &l_1182;

                        ;
                    }
                    else
                    {
                        (*g_417) = (safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((***g_457), (l_1193 = (***g_457)))), 3));
                    }

                    ;
                    ;
                }


                ;
                ;
                (*l_1212) = ((*g_417) = (safe_rshift_func_uint16_t_u_s((1L == ((**g_450) = (safe_add_func_int32_t_s_s(((*l_1042) = (((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((l_1138[5][1] & (((*g_549) = 0x2822L) || ((safe_add_func_uint8_t_u_u((((((void*)0 != &g_158) , (*g_883)) == ((*l_1206) = (*g_883))) , 0xADL), (safe_mod_func_int32_t_s_s((*g_417), (*l_1042))))) || (*l_1042)))), (*l_1042))) < g_96), l_1138[5][1])), l_1210[3][2])) , 0x8CL) , l_1085) != l_1188) & l_1138[5][1])), l_1138[3][0])))), l_1138[1][0])));

                ;
                if (((safe_sub_func_uint32_t_u_u(((****g_406) = l_1088[0]), ((+((***l_1068) = (*l_1042))) , (*g_1052)))) , 0xE4ADFD92L))
                {
                    return (*g_417);


                }
                else
                {
                    int **l_1219 = &l_1085;
                    (*l_1219) = ((**g_457) = l_1042);

                    ;
                    ;
                }

                ;
                ;
            }

            ;
            ;

            l_1042 = &l_1193;

            ;
        }

        ;
        ;
        ;
        if ((safe_rshift_func_uint16_t_u_s(((l_1193 = ((255UL | 0UL) != (*l_1042))) || ((safe_add_func_int32_t_s_s((~(l_1224 == ((*g_303) , ((safe_add_func_int32_t_s_s(((((((**g_408) = ((0xEB21L ^ ((*g_549) = (((safe_sub_func_uint32_t_u_u(((*g_303) , l_1138[5][1]), 0x62DC788CL)) , l_1138[4][0]) & (*l_1042)))) < (*g_417))) , (void*)0) != (void*)0) , l_1233[0][4][0]) , l_1193), (*g_417))) , l_1234)))), l_1237)) && l_1138[5][1])), g_510)))
        {
            (*g_458) = (*g_458);
        }
        else
        {
            unsigned short l_1242 = 0x7DFDL;
            unsigned *****l_1266 = &g_406;
            unsigned ****l_1267 = &l_1235;
            (**g_457) = (*g_458);
            (**g_457) = &l_1193;

            ;
            for (l_1218 = (-21); (l_1218 == 26); l_1218++)
            {
                if ((***g_457))
                    break;
                return l_1138[5][1];


            }
            if (((*l_1042) = (safe_add_func_uint16_t_u_u(((l_1242 > (65535UL <= ((!((*g_303) = (**g_302))) != 0x38L))) , l_1243), (*g_549)))))
            {
                (*g_458) = (void*)0;

                ;
                (*l_1232) = (*g_1052);
            }
            else
            {
                short l_1256 = (-1L);
                unsigned *****l_1264 = &g_406;
                int ***l_1293[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1293[i] = &g_853;
                l_1193 = (g_1244 | (safe_rshift_func_int8_t_s_u((((l_1247 || (safe_rshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s(((l_1242 < func_22((****g_406))) , (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_1256, 1)), (((l_1256 & (l_1242 , ((*l_1232) , l_1256))) == 0xF0770FEFL) <= 0x744DL)))), (*l_1232))) , l_1256) , l_1075), (**g_450)))) <= (*l_1042)) || 0x70L), l_1242)));

                ;
                if (((0x2841L == (safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((*l_1042), (safe_lshift_func_uint16_t_u_u(((((*g_883) != (*l_1036)) , &g_303) == l_1263), 6)))), func_22(l_1233[0][4][0])))) | (((**g_408) | 0x5DAB76F1L) , 0x4317544EL)))
                {
                    unsigned ******l_1265 = &g_791;
                    (**g_458) = (l_1075 , (((*l_1265) = l_1264) != l_1266));
                    for (l_1218 = 0; (l_1218 <= 3); l_1218 += 1)
                    {
                        unsigned *****l_1268 = &l_1234;
                        int *l_1270 = &l_1243;
                        unsigned **l_1280 = (void*)0;
                        unsigned **l_1281 = (void*)0;
                        unsigned *l_1283[2];
                        unsigned **l_1282 = &l_1283[0];
                        int **l_1284 = (void*)0;
                        int **l_1285 = &g_417;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1283[i] = (void*)0;
                        (*g_458) = (*g_458);
                    }
                }
                else
                {
                    unsigned l_1288[4];
                    int *l_1291 = &l_1243;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1288[i] = 9UL;
                    (*l_1291) = ((*l_1042) = (safe_sub_func_int16_t_s_s(((l_1288[0] <= ((((0x57L > ((safe_rshift_func_int16_t_s_s((65535UL && (*l_1232)), 9)) && (((void*)0 == &g_457) && (!((*g_451) ^ 0x18L))))) <= l_1242) , l_1292) && (*l_1042))) , (*l_1232)), l_1193)));
                    if ((***g_457))
                    {
                        (*l_1042) = (l_1293[0] == (l_1294 = (void*)0));

                        ;
                    }
                    else
                    {
                        return (**g_458);
                    }

                    ;
                    for (l_517 = 1; (l_517 >= 0); l_517 -= 1)
                    {
                        unsigned char l_1296 = 0x1CL;
                        int i;
                        (**g_457) = &l_1243;

                        ;
                        l_1295 = (*g_417);
                        (*l_1291) = ((*l_1232) = (func_26(l_1296, (*g_458), &l_1193, (**g_457)) ^ ((g_751[(l_517 + 2)] = (safe_lshift_func_uint8_t_u_u(l_1292, 2))) | (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((*g_303), 3)), 3)))));

                        ;
                        (*g_458) = &l_1243;

                        ;
                    }

                    ;
                }

                ;
                ;
                for (g_898 = 0; (g_898 != 14); ++g_898)
                {
                    (*g_458) = (((****g_406) & 0xF98ECC12L) , func_5((*g_458)));
                }

                ;
            }

            ;
            ;
        }

        ;
        ;
        if ((&l_1243 != (void*)0))
        {
            char **l_1307[1][5][1];
            int l_1311 = 0xF2B9BB0AL;
            int **l_1324[10][5][5] = {{{&g_854,(void*)0,(void*)0,&g_854,(void*)0},{&g_854,&g_854,&g_854,&g_854,&g_854},{&g_854,&g_854,&g_854,&g_854,&g_854},{&g_854,(void*)0,&g_854,&g_854,&g_854},{(void*)0,&g_854,(void*)0,(void*)0,&g_854}},{{&g_854,&g_854,&g_854,(void*)0,&g_854},{&g_854,(void*)0,&g_854,&g_854,&g_854},{&g_854,&g_854,&g_854,&g_854,&g_854},{&g_854,&g_854,(void*)0,(void*)0,(void*)0},{&g_854,&g_854,&g_854,&g_854,&g_854}},{{&g_854,(void*)0,&g_854,(void*)0,&g_854},{&g_854,(void*)0,&g_854,&g_854,&g_854},{(void*)0,(void*)0,(void*)0,&g_854,&g_854},{&g_854,&g_854,(void*)0,(void*)0,&g_854},{&g_854,&g_854,&g_854,(void*)0,&g_854}},{{&g_854,&g_854,(void*)0,&g_854,&g_854},{&g_854,(void*)0,(void*)0,&g_854,(void*)0},{&g_854,&g_854,&g_854,&g_854,&g_854},{&g_854,&g_854,&g_854,&g_854,&g_854},{&g_854,(void*)0,&g_854,&g_854,&g_854}},{{(void*)0,&g_854,(void*)0,(void*)0,&g_854},{&g_854,&g_854,&g_854,(void*)0,&g_854},{&g_854,(void*)0,&g_854,&g_854,&g_854},{&g_854,&g_854,&g_854,&g_854,&g_854},{&g_854,&g_854,(void*)0,(void*)0,(void*)0}},{{&g_854,&g_854,&g_854,&g_854,&g_854},{&g_854,(void*)0,&g_854,(void*)0,&g_854},{&g_854,(void*)0,&g_854,&g_854,&g_854},{(void*)0,(void*)0,(void*)0,&g_854,&g_854},{&g_854,&g_854,(void*)0,(void*)0,&g_854}},{{&g_854,&g_854,&g_854,(void*)0,&g_854},{&g_854,&g_854,(void*)0,&g_854,&g_854},{&g_854,(void*)0,(void*)0,&g_854,(void*)0},{&g_854,&g_854,&g_854,&g_854,&g_854},{&g_854,&g_854,&g_854,&g_854,&g_854}},{{&g_854,(void*)0,&g_854,&g_854,&g_854},{(void*)0,&g_854,(void*)0,(void*)0,&g_854},{&g_854,&g_854,&g_854,(void*)0,&g_854},{&g_854,(void*)0,&g_854,&g_854,&g_854},{&g_854,&g_854,&g_854,&g_854,&g_854}},{{&g_854,&g_854,(void*)0,(void*)0,(void*)0},{&g_854,&g_854,&g_854,&g_854,&g_854},{&g_854,(void*)0,&g_854,(void*)0,&g_854},{&g_854,(void*)0,&g_854,&g_854,&g_854},{(void*)0,(void*)0,(void*)0,&g_854,&g_854}},{{&g_854,&g_854,(void*)0,(void*)0,&g_854},{&g_854,&g_854,&g_854,(void*)0,&g_854},{&g_854,&g_854,(void*)0,&g_854,&g_854},{&g_854,(void*)0,(void*)0,&g_854,(void*)0},{&g_854,&g_854,&g_854,&g_854,&g_854}}};
            int l_1336[3];
            unsigned ****l_1342 = &l_1319;
            unsigned ****l_1344 = &g_407;
            int *l_1349[5];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1307[i][j][k] = &g_303;
                }
            }
            for (i = 0; i < 3; i++)
                l_1336[i] = (-1L);
            for (i = 0; i < 5; i++)
                l_1349[i] = (void*)0;
            for (l_517 = (-18); (l_517 < (-29)); l_517 = safe_sub_func_int16_t_s_s(l_517, 4))
            {
                int l_1308 = 0x4C7E6D58L;
                int *l_1334 = &g_2[0];
                int *l_1335 = &g_898;
                l_1307[0][0][0] = &g_303;
                if (((l_1308 == (*g_451)) > ((***l_1068) = l_1075)))
                {
                    int l_1309 = 1L;
                    if (l_1309)
                    {
                        (**g_457) = (**g_457);
                        (*g_458) = (**g_457);
                        return l_1310[4];


                    }
                    else
                    {
                        l_1311 = ((*g_417) = 0x24084113L);
                        return l_1309;


                    }
                }
                else
                {
                    char l_1312[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1312[i] = 1L;
                    if (l_1312[0])
                        break;
                    if (((safe_rshift_func_uint8_t_u_u(((**g_450) = l_1312[0]), 0)) , func_12((**g_302), ((*g_854) , 1L), (*g_458), ((((*g_451) = ((***g_449) | (**g_450))) , (-1L)) , 0x97L))))
                    {
                        char *l_1325 = &g_61[3];
                        (*g_1052) = 0xC3339BB3L;
                        (*l_1232) = ((l_1308 > (l_1311 != ((*l_1232) == l_1311))) >= (*l_1232));
                        (*g_417) = (safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s((((l_1319 == (**g_791)) | (safe_mod_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((l_1324[7][1][3] == &g_854), l_1308)) & (((*g_302) = (*g_302)) == l_1325)), l_1326))) > ((((safe_add_func_uint32_t_u_u((*g_409), 4L)) <= (*g_451)) , l_1308) || 0x2E5F65F6L)), (*g_451))), 0xB6L));
                    }
                    else
                    {
                        unsigned short *l_1333 = &g_681[8];
                        (*g_1052) = (((***g_449) | 0xB7L) && ((l_1311 ^ (safe_lshift_func_uint8_t_u_u((*g_451), (!l_1233[0][4][0])))) | l_1312[0]));
                        return l_1336[2];


                    }
                }
                if (l_1336[2])
                    break;
                (**g_457) = &l_1193;

                ;
            }

            ;
            if ((safe_unary_minus_func_uint32_t_u((**g_408))))
            {
                int *l_1338 = &g_70;
                unsigned l_1347 = 1UL;
                (*l_1042) = l_1336[2];
                for (l_1326 = 0; (l_1326 <= 0); l_1326 += 1)
                {
                    unsigned *l_1341 = (void*)0;
                    int l_1346 = 0L;
                    short l_1348[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1348[i] = 0x0F81L;
                    for (g_269 = 0; (g_269 <= 0); g_269 += 1)
                    {
                        int i, j;
                        l_1232 = &l_1243;

                        ;
                        (*l_1042) = l_1138[(l_1326 + 2)][g_269];
                        (**g_457) = l_1338;

                        ;
                    }
                    if ((safe_sub_func_int16_t_s_s((l_1341 != (void*)0), ((*g_549) = (*g_549)))))
                    {
                        unsigned *****l_1343 = &l_1342;
                        int *l_1345 = (void*)0;
                        int i;
                        l_1349[0] = func_33(((l_1310[6] | ((func_12((*g_303), ((~l_1311) != ((-8L) ^ (func_26((((*l_1343) = ((*g_791) = l_1342)) != l_1344), func_33(l_1345, (**g_302), l_1336[2]), l_1338, l_1341) && (*l_1232)))), &g_2[0], l_1346) <= l_1326) , l_1347)) , (**g_457)), l_1348[5], (*g_549));

                        ;
                        ;
                        (*g_123) = l_1075;
                    }
                    else
                    {
                        unsigned l_1356 = 0x76A484ECL;
                        (*g_1052) = (safe_lshift_func_int16_t_s_u((((***l_1068) = ((*g_549) >= ((((~(safe_mod_func_int16_t_s_s((*l_1338), l_1310[1]))) || func_7((*g_854))) > (*l_1338)) != (**g_450)))) | (((***g_407) = 1UL) , l_1356)), 9));
                        (**g_406) = (***g_791);
                    }
                    for (g_96 = 0; (g_96 <= 0); g_96 += 1)
                    {
                        (*g_458) = (*g_458);
                    }
                }

                ;
                ;
                ;

            }
            else
            {
                l_1193 = (*g_417);
            }

            ;
            ;
            ;

            (**g_457) = (**g_457);
        }
        else
        {
            unsigned char l_1364 = 0xEFL;
            int l_1365 = 1L;
            int *l_1367 = &g_2[0];
            l_1365 = (func_17(l_1359, (((***l_1068) = (*l_1359)) || ((***l_1068) = (safe_sub_func_uint8_t_u_u((***g_449), ((safe_lshift_func_uint16_t_u_u((l_1364 , (*l_1042)), 1)) ^ (**g_450))))))) , (*l_1232));

            ;
            ;
            if ((*l_1359))
            {
                int *l_1366 = &g_72;
                (**g_457) = l_1366;

                ;
            }
            else
            {
                unsigned l_1377 = 0x8C5B46ACL;
                unsigned l_1378 = 4294967287UL;
                l_1367 = ((*g_458) = &l_1193);

                ;
                ;
                for (l_1295 = 0; (l_1295 <= 5); l_1295 += 1)
                {
                    int l_1368[9][1];
                    int *l_1372 = &g_2[0];
                    int i, j;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1368[i][j] = (-5L);
                    }
                }
                for (l_1365 = 0; (l_1365 <= 8); l_1365 += 1)
                {
                    unsigned char l_1379 = 0xA3L;
                    (*l_1042) = (l_1379 && (func_12((*l_1359), (*l_1367), func_33(((*g_303) , (void*)0), ((l_1380[5][0] == 0x0EL) & (***g_449)), (*g_549)), (*g_451)) == l_1378));
                }

                ;
            }

            ;
            ;
        }

        ;
        ;
        ;
        ;
    }
    else
    {
        int *l_1386 = &g_70;
        unsigned char l_1391 = 0xF9L;
        int l_1445[9][9][3] = {{{4L,0x2307952CL,0L},{0x68F55A1DL,(-1L),0x7B98B32EL},{(-10L),0L,0xE642C7EAL},{0x270D5485L,0x68F55A1DL,0x7B98B32EL},{(-10L),0x6EFA0916L,0L},{0xBB077CD2L,(-9L),1L},{0xFF7025ACL,0xE642C7EAL,(-7L)},{0x4E2472E9L,0x4005513AL,1L},{0x8A19BF7FL,(-10L),0L}},{{1L,0xF0539EA2L,0x2FC7E33BL},{0x906B05C9L,0x8A19BF7FL,0L},{(-1L),0x3DCB5023L,(-7L)},{0xC5D2BDF6L,7L,0x89D02E33L},{0xA8BF67AAL,0x4FFA1CF3L,0x23A67341L},{7L,0x2307952CL,4L},{0L,0x2FC7E33BL,0L},{0L,0x66002A64L,0xE642C7EAL},{(-9L),0L,0x3DCB5023L}},{{(-10L),0L,(-7L)},{0xBB077CD2L,0x4E2472E9L,0L},{(-10L),0x32DA48EBL,0xA59E1D78L},{(-9L),0x4005513AL,(-1L)},{0L,1L,1L},{0L,0xB4393404L,0x2FC7E33BL},{7L,0L,0L},{0x4E2472E9L,0x4AA6B61DL,0x2FC7E33BL},{(-7L),0x4CD5BBD8L,2L}},{{0xF0539EA2L,0x270D5485L,(-1L)},{(-7L),0x89D02E33L,0xE642C7EAL},{(-1L),0xB4393404L,0x4AA6B61DL},{0xA0E96BB7L,0x1DDF456AL,0x66002A64L},{0xD8DB85C6L,(-1L),(-1L)},{0x906B05C9L,(-7L),0xFF7025ACL},{0x32F3F081L,0xBB077CD2L,0x6FC09A19L},{0xD7704FD4L,0L,0x2FB5FBCBL},{0x8E6C8FDAL,4L,(-1L)}},{{(-7L),0L,0xA0E96BB7L},{1L,0xBB077CD2L,(-9L)},{0x4CD5BBD8L,(-7L),1L},{0xCE321C69L,(-1L),0x4C91EFC0L},{(-7L),0x1DDF456AL,(-1L)},{(-9L),0xB4393404L,(-7L)},{0xC5D2BDF6L,0x89D02E33L,0x25FAAC89L},{0x4AA6B61DL,0x270D5485L,1L},{0L,0x4CD5BBD8L,0x66002A64L}},{{0xBB077CD2L,0x4AA6B61DL,1L},{0x66002A64L,0x183ACA82L,(-10L)},{0x32F3F081L,(-2L),0xD420FE2CL},{4L,4L,0x390EB79DL},{(-1L),4L,0xF0329117L},{4L,7L,(-7L)},{0x2CA4A084L,0xD8DB85C6L,(-9L)},{0x1DDF456AL,4L,(-7L)},{0xCE3A25A1L,(-7L),0xF0329117L}},{{(-7L),(-8L),0x390EB79DL},{0xB4393404L,(-9L),0xD420FE2CL},{0x2D92D78DL,0L,0xA1506628L},{0x4005513AL,(-1L),(-2L)},{(-8L),0x554C568BL,0x14CC5176L},{0x7B98B32EL,0x4005513AL,0x8E6C8FDAL},{(-1L),0x2307952CL,0xFB318B85L},{(-1L),(-10L),0xF0329117L},{0x2FB5FBCBL,2L,(-10L)}},{{(-10L),0x4AA6B61DL,1L},{0x4CD5BBD8L,0x14CC5176L,0x4CD5BBD8L},{0x8E6C8FDAL,0L,(-7L)},{0x6EFA0916L,0x4CD5BBD8L,0x2307952CL},{0x726ABD27L,(-2L),0x23A67341L},{(-10L),0L,(-10L)},{0x726ABD27L,(-1L),0xA8BF67AAL},{0x6EFA0916L,0L,0xA59E1D78L},{0x8E6C8FDAL,0xD420FE2CL,0L}},{{0x4CD5BBD8L,(-10L),0x14CC5176L},{(-10L),0x8E6C8FDAL,0xBB077CD2L},{0x2FB5FBCBL,0xC5D2BDF6L,0x89D02E33L},{(-1L),0x68F55A1DL,0x2FC7E33BL},{(-1L),0x390EB79DL,0xE642C7EAL},{0x7B98B32EL,0x4AA6B61DL,4L},{(-8L),1L,0xC5D2BDF6L},{0x4005513AL,0x3DCB5023L,(-7L)},{0L,(-8L),(-8L)}}};
        char l_1454[2][5] = {{(-6L),0x07L,0xAEL,0xAEL,0x07L},{(-6L),0x07L,0xAEL,0xAEL,0x07L}};
        int i, j, k;
        for (g_193 = 0; (g_193 < 1); ++g_193)
        {
            short l_1396 = 0x873BL;
            int l_1405 = 0x6E06261DL;
            int l_1413[5] = {0x8F3BDF4CL,0x8F3BDF4CL,0x8F3BDF4CL,0x8F3BDF4CL,0x8F3BDF4CL};
            unsigned *****l_1427 = &l_1234;
            unsigned ******l_1426 = &l_1427;
            unsigned l_1440 = 0xBE4C868DL;
            unsigned l_1444 = 1UL;
            unsigned short l_1453[9][7] = {{0x4E7BL,0x7831L,0x9EF6L,9UL,0x9EF6L,0x7831L,0x4E7BL},{0x54ACL,4UL,65535UL,1UL,0x7831L,0UL,0x54ACL},{0x4C6FL,4UL,65535UL,65528UL,0x7831L,9UL,0x4C6FL},{0x4C6FL,0UL,65535UL,65528UL,65535UL,0UL,0x4C6FL},{0x54ACL,4UL,65535UL,1UL,0x7831L,0UL,0x54ACL},{0x4C6FL,4UL,65535UL,65528UL,0x7831L,9UL,0x4C6FL},{0x4C6FL,0UL,65535UL,65528UL,65535UL,0UL,0x4C6FL},{0x54ACL,4UL,65535UL,1UL,0x7831L,0UL,0x54ACL},{0x4C6FL,4UL,65535UL,65528UL,0x7831L,9UL,0x4C6FL}};
            int i, j;
            for (g_635 = 0; (g_635 == (-13)); g_635 = safe_sub_func_int16_t_s_s(g_635, 6))
            {
                unsigned short l_1385 = 0xBC9FL;
                int **l_1387 = &l_1386;
                (*g_1052) = l_1385;
                (*g_458) = (*g_458);
                g_1052 = ((*l_1387) = ((*g_458) = l_1386));

                ;
                ;
                (**g_457) = (**g_457);
            }

            ;
            if (((***g_457) = (safe_unary_minus_func_int8_t_s((+0x0CL)))))
            {
                unsigned ****l_1399 = (void*)0;
                unsigned short *l_1404[3];
                int l_1412[2][2][7] = {{{0x08AEDB5DL,0x08AEDB5DL,0x08AEDB5DL,0x08AEDB5DL,0x08AEDB5DL,0x08AEDB5DL,0x08AEDB5DL},{(-4L),0L,(-4L),0L,(-4L),0L,(-4L)}},{{0x08AEDB5DL,0x08AEDB5DL,0x08AEDB5DL,0x08AEDB5DL,0x08AEDB5DL,0x08AEDB5DL,0x08AEDB5DL},{(-4L),0L,(-4L),0L,(-4L),0L,(-4L)}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1404[i] = &l_1037[0][6][1];
                (*g_417) = (safe_lshift_func_uint16_t_u_s((*l_1232), 12));
                (*g_458) = (*g_458);
                (***g_457) = (l_1391 >= (l_1412[0][0][5] = (safe_rshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((l_1396 >= (safe_rshift_func_uint8_t_u_s((g_1269 != (((***l_1294) = 0L) , l_1399)), (safe_mod_func_uint32_t_u_u((((***l_1068) = (safe_unary_minus_func_int32_t_s((*g_417)))) & (l_1405 = l_1403[2])), (((~(safe_sub_func_uint16_t_u_u((*l_1386), ((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((*l_1232), (**g_302))), 13)) || (*l_1232))))) <= l_1412[0][0][5]) , (*g_417))))))), (*g_549))) , (*l_1386)), l_1413[2]))));
                for (g_1136 = 0; (g_1136 <= 54); g_1136++)
                {
                    (*g_458) = (**g_457);
                }
            }
            else
            {
                int l_1416[9][4][4];
                int i, j, k;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_1416[i][j][k] = 0x7DA54441L;
                    }
                }
                (*l_1232) = (((*g_417) = (*l_1386)) ^ l_1416[5][2][0]);
            }
            (*l_1042) = func_7(((*g_854) = func_26(((safe_sub_func_int32_t_s_s((l_1444 = (((*g_549) = (((~0xE3DCL) || ((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((*l_1386) = (((((safe_add_func_int16_t_s_s(l_1413[1], (((((g_1425 = (void*)0) != ((*l_1426) = &g_1269)) && (func_26((safe_mod_func_uint16_t_u_u((((***l_1068) = 3UL) || 0x6565L), (safe_mod_func_int8_t_s_s(func_26((((safe_mod_func_uint16_t_u_u(4UL, (func_26(func_26((((*g_408) == ((((safe_sub_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((!((safe_rshift_func_uint8_t_u_u((func_26((((((*l_1042) ^ l_1405) & (***g_457)) ^ 0xE187L) , (*l_1386)), l_1386, l_1386, &l_1243) <= 0x390CL), l_1440)) , 0x51L)), 0xFBL)) , (***g_457)) , (*g_303)), 0x82L)) != l_1413[2]) ^ (*g_451)) , (void*)0)) || (*l_1042)), &l_1405, l_1386, l_1441), l_1442, &g_898, &l_1413[2]) , 1L))) < (**g_302)) | l_1391), l_1386, &l_1413[2], l_1386), 0x2BL)))), &l_1243, l_1386, l_1386) || 1UL)) != l_1405) & l_1413[2]))) < 2UL) || l_1440) & l_1391) , 0xFB016D58L)) , (*l_1386)), 0UL)), (**g_302))) , (*l_1386))) < 0x75FA9C38L)) < g_1443[0])), l_1445[1][1][1])) > (*g_303)), &l_1413[4], l_1446, &l_1405)));

            ;
            ;
            (*l_1441) = (((***g_407) || (safe_mod_func_uint8_t_u_u((((**g_302) = (((((****g_406) || 0x40B8340EL) > (((safe_lshift_func_int16_t_s_s((*l_1386), 4)) == (*g_549)) || (((safe_rshift_func_uint16_t_u_u(func_26((*l_1386), (**g_457), (**g_457), (**g_457)), l_1453[7][6])) , (**g_408)) , (*g_1052)))) == 1L) , (-2L))) != l_1454[0][1]), 0x05L))) == l_1455);
        }

        ;
        ;
        for (g_510 = 0; (g_510 <= 0); g_510 += 1)
        {
            unsigned l_1465 = 4294967295UL;
            unsigned ******l_1488 = &g_1425;
            int *l_1492 = &l_1243;
            unsigned short l_1502 = 1UL;
            (*g_417) = (safe_rshift_func_uint8_t_u_s((*l_1386), 2));
            for (g_42 = 0; (g_42 <= 0); g_42 += 1)
            {
                int l_1464 = 0xF477887FL;
                unsigned short *l_1467 = &l_1037[0][6][1];
                int *l_1468 = &g_72;
                if (((((((*l_1441) = (safe_add_func_uint32_t_u_u((**g_408), (safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(func_22(l_1464), (*g_1052))), (**g_302)))))) , (*g_457)) == (*g_457)) , ((*l_1467) = (((l_1465 , 2UL) && l_1466) != (*g_549)))) || (*g_549)))
                {
                    char l_1473 = 0xE1L;
                    (*g_458) = l_1468;

                    ;
                    if ((((void*)0 != (****g_791)) > (safe_add_func_int8_t_s_s((((*l_1232) = ((((**g_853) = ((*l_1468) & (safe_rshift_func_uint8_t_u_s((l_1473 , (((((*l_1232) , (*l_1386)) , func_33(func_33((*g_458), (*l_1232), (((-2L) && 248UL) | 65534UL)), (*l_1386), (*g_549))) != (void*)0) , (**g_450))), (*g_303))))) , l_1473) != (*l_1386))) || (*l_1386)), l_1465))))
                    {
                        (*g_458) = l_1386;
                    }
                    else
                    {
                        unsigned l_1479[6][5] = {{1UL,9UL,4294967291UL,9UL,1UL},{1UL,9UL,4294967291UL,9UL,1UL},{1UL,4294967291UL,1UL,4294967291UL,0xC13CED9DL},{0xC13CED9DL,4294967291UL,1UL,4294967291UL,0xC13CED9DL},{0xC13CED9DL,4294967291UL,1UL,4294967291UL,0xC13CED9DL},{0xC13CED9DL,4294967291UL,1UL,4294967291UL,0xC13CED9DL}};
                        int *l_1480[5];
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_1480[i] = (void*)0;
                        (**g_457) = func_33((**g_457), ((*l_1386) | (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((((g_1478[4][0] , (*g_409)) >= (4294967295UL || (*****g_791))) , (*g_303)), 3)), 2))), l_1479[3][2]);
                        (**g_457) = (void*)0;

                        ;
                        (**g_457) = l_1480[1];
                    }

                    ;
                }
                else
                {
                    char l_1491 = 0xACL;
                    for (g_635 = 0; (g_635 <= 0); g_635 += 1)
                    {
                        short *l_1485 = &l_1141[8];
                        short **l_1484 = &l_1485;
                        unsigned ******l_1487[10][7] = {{&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425},{&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425},{&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425},{&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425},{&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425},{&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425},{&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425},{&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425},{&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425},{&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425,&g_1425}};
                        unsigned *******l_1486 = &l_1487[6][6];
                        int l_1493 = 0x8B2453A5L;
                        int i, j, k;
                        (*g_458) = func_33((((+((*l_1467) = ((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_u((g_537[g_42][(g_42 + 5)][g_635] = g_537[g_635][(g_42 + 5)][(g_510 + 3)]), ((g_549 = &g_751[7]) == ((*l_1484) = &g_158)))))) , (((*l_1486) = &g_1425) != l_1488)))) & ((*l_1386) >= (((((((***g_449) & (((*l_1386) >= ((safe_sub_func_int32_t_s_s((*l_1441), (*g_409))) < (*g_409))) > (*l_1386))) , l_1491) < l_1465) , (*g_854)) , 0L) <= (**g_450)))) , l_1492), l_1491, l_1493);

                        ;
                        ;
                        ;
                        (**g_457) = l_1492;
                        (*l_1492) = (~0x3F816286L);
                        if ((*l_1232))
                            continue;
                    }

                    ;
                    if (l_1491)
                        continue;
                }

                ;
                for (g_70 = 0; (g_70 <= 0); g_70 += 1)
                {
                    short l_1505 = (-6L);
                    int i, j, k;
                    for (g_269 = 0; (g_269 <= 0); g_269 += 1)
                    {
                        int i, j, k;
                        (*l_1492) = g_219[g_70][(g_42 + 1)][g_510];
                    }
                    (**g_457) = (*g_458);
                    (**g_457) = func_33((*g_458), g_219[g_70][(g_42 + 3)][g_70], (*l_1386));
                    for (l_1464 = 4; (l_1464 <= 26); l_1464 = safe_add_func_uint32_t_u_u(l_1464, 1))
                    {
                        unsigned char *l_1506[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_1506[i] = &g_537[0][0][0];
                        (*l_1232) = (g_219[g_70][(g_42 + 3)][g_70] && (*l_1386));
                        (*g_417) = ((safe_lshift_func_uint16_t_u_u(g_219[g_70][(g_42 + 3)][g_70], (*l_1232))) , (safe_lshift_func_uint8_t_u_s((g_537[0][0][0] = (safe_add_func_uint8_t_u_u(((***g_449) = 0x3AL), ((l_1502 , (*l_1386)) , (((safe_sub_func_uint32_t_u_u(((*l_1441) >= ((-1L) & ((func_22(((*l_1492) , (*l_1042))) != 0x06FAL) || l_1505))), (*g_417))) >= (-1L)) && (***g_457)))))), (**g_302))));

                        ;
                    }
                }
                if ((*l_1468))
                    continue;
                (*g_417) = (*l_1468);
            }
        }

        ;
        ;
        (*l_1386) = (*l_1386);
    }



    ;
    ;
    ;

    ;
    ;
    ;
    ;
    if (l_1508)
    {
        unsigned l_1523 = 0xC4955979L;
        unsigned *l_1524 = (void*)0;
        unsigned *l_1525 = &g_1443[0];
        int **l_1526 = (void*)0;
        int **l_1527 = &g_417;
        (*l_1527) = ((**g_457) = (((g_1509 < (safe_sub_func_uint32_t_u_u(((((*l_1525) = (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(65529UL, (*g_549))), (safe_rshift_func_uint16_t_u_u(((*g_1052) == ((l_1518 != ((*l_1232) = (*g_417))) < ((safe_sub_func_uint8_t_u_u(((*g_1052) > ((*g_409) = ((safe_mod_func_int32_t_s_s((1L ^ (**g_408)), 0x36F4E8F5L)) ^ (*l_1446)))), (-1L))) | 0x815E9C32L))), l_1523))))) && (*l_1232)) ^ l_1523), 0UL))) , (*g_417)) , (void*)0));

        ;
        ;
        (*g_1052) = l_1528;
    }
    else
    {
        unsigned l_1531 = 0xE32DD4EAL;
        int l_1542 = 0x31C861B4L;
        short ***l_1546[7][7] = {{&g_472,&g_472,&g_472,&g_472,&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472,&g_472,&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472,&g_472,&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472,&g_472,&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472,&g_472,&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472,&g_472,&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472,&g_472,&g_472,&g_472,&g_472}};
        int *l_1592 = (void*)0;
        char l_1605[6][10][4] = {{{0x31L,0x80L,0xADL,(-1L)},{1L,0x9DL,0xADL,0x31L},{0x31L,0xF6L,1L,(-8L)},{(-1L),6L,0xC7L,0x3EL},{0xC7L,0x3EL,1L,0xF6L},{(-1L),1L,(-1L),(-1L)},{0x33L,0x33L,(-8L),6L},{1L,3L,0x05L,1L},{6L,(-8L),(-1L),0x05L},{(-8L),(-8L),0x9DL,1L}},{{(-8L),3L,1L,6L},{(-3L),0x33L,(-3L),(-1L)},{(-1L),1L,(-2L),0xF6L},{(-3L),(-1L),0xAAL,(-1L)},{0xADL,(-3L),(-8L),0x3EL},{0xF6L,(-8L),(-1L),3L},{(-1L),(-8L),1L,1L},{(-1L),6L,(-1L),2L},{0xF6L,1L,(-8L),0x78L},{0xADL,0x33L,0xAAL,1L}},{{0xC7L,(-1L),1L,(-1L)},{0x6EL,0xC7L,0xC7L,0x6EL},{(-10L),(-1L),(-3L),0x9DL},{0x3EL,0x31L,(-8L),(-2L)},{2L,1L,0x6EL,(-2L)},{(-3L),0x31L,0xADL,0x9DL},{0x33L,(-1L),2L,0x6EL},{0x05L,0xC7L,0x87L,(-1L)},{1L,(-1L),(-1L),1L},{0x80L,0x33L,0x80L,0x78L}},{{0xAAL,1L,0x33L,2L},{3L,6L,(-1L),1L},{(-3L),(-8L),(-1L),3L},{3L,(-8L),0x33L,0x3EL},{0xAAL,(-3L),0x80L,(-1L)},{0x80L,(-1L),(-1L),(-8L)},{1L,(-3L),0x87L,0x87L},{0x6EL,0x6EL,0x33L,0x78L},{(-1L),0x9DL,(-3L),(-3L)},{0x78L,(-2L),(-3L),(-3L)}},{{0x33L,(-2L),1L,(-3L)},{(-2L),0x9DL,(-1L),0x78L},{0xF6L,0x6EL,0x87L,1L},{(-3L),(-1L),0xADL,2L},{0x87L,1L,(-10L),1L},{(-3L),0x78L,2L,(-2L)},{(-8L),2L,(-8L),0xAAL},{1L,1L,6L,0x3EL},{1L,3L,(-8L),0x33L},{(-8L),0x3EL,2L,0x9DL}},{{(-3L),(-1L),(-10L),0xADL},{0x87L,(-8L),0xADL,0xF0L},{(-3L),0x87L,0x87L,(-3L)},{0xF6L,(-3L),(-1L),(-1L)},{(-2L),(-1L),1L,0x05L},{0x33L,0xADL,(-3L),0x05L},{0x78L,(-1L),(-3L),(-1L)},{(-1L),(-3L),0x33L,(-3L)},{0x6EL,0x87L,1L,0xF0L},{0x3EL,(-8L),(-3L),0xADL}}};
        unsigned short *l_1614[2];
        unsigned l_1712 = 0x527417B3L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1614[i] = &g_361[1][2];
        if (func_7((**g_853)))
        {
            unsigned short **l_1533 = &g_199[3];
            unsigned short ***l_1534 = (void*)0;
            unsigned short ***l_1535 = (void*)0;
            int l_1540 = 0x538FF689L;
            unsigned ****l_1541 = &g_407;
            char *l_1543[1][3];
            short ***l_1545 = &g_472;
            int *l_1549 = (void*)0;
            unsigned **l_1565 = &g_652[3][5];
            unsigned l_1653 = 0x1743321FL;
            unsigned *****l_1679 = &g_1269;
            int ***l_1680 = &l_1629[0];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1543[i][j] = (void*)0;
            }
            if ((((*g_303) , (**g_450)) | (safe_add_func_int8_t_s_s((l_1540 = (l_1531 & (((g_198[0] = l_1532) == (l_1533 = l_1533)) <= (((l_1542 = (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(l_1531, l_1540)) | ((l_1531 , l_1541) != l_1541)), (*l_1232)))) <= l_1531) >= (*g_303))))), (*l_1446)))))
            {
                int l_1544 = 0x2424A32FL;
                (**g_457) = (*g_458);
                (*l_1441) = 1L;
                (**g_457) = func_37((0x6C22L < ((**g_408) & ((l_1544 , ((*l_1446) | (((&g_854 != &g_854) && (((((*l_1441) , ((l_1545 == l_1546[4][1]) , &g_198[0])) == &g_198[0]) , 0x48L) , 0xCCC51931L)) , 1L))) < (*g_549)))), (**g_457), (**g_450), (*g_458));

                ;

            }
            else
            {
                unsigned l_1547 = 7UL;
                char **l_1550 = (void*)0;
                int ***l_1560 = &g_458;
                unsigned short l_1590 = 0xDC73L;
                int *l_1632 = &l_1508;
                if (((*l_1441) = l_1547))
                {
                    unsigned char l_1548 = 0xFCL;
                    (*l_1036) = (*g_883);
                    (*l_1441) = func_7(((**g_853) = l_1548));
                }
                else
                {
                    int l_1551[5] = {0x8350D263L,0x8350D263L,0x8350D263L,0x8350D263L,0x8350D263L};
                    unsigned char *l_1556 = &g_193;
                    short l_1602[6] = {0x064DL,0x064DL,0x064DL,0x064DL,0x064DL,0x064DL};
                    int i;
                    (*l_1446) = (func_26((l_1540 = (~((**l_1532) = l_1547))), l_1549, &l_1542, func_33(func_33((**g_457), (**g_302), (*l_1441)), ((void*)0 != l_1550), l_1551[3])) , (*g_123));
                    if (((65535UL == (safe_add_func_int32_t_s_s((*g_123), ((safe_lshift_func_uint16_t_u_u((*l_1232), (l_1547 && (***g_449)))) > (l_1540 = ((*l_1556) = l_1547)))))) >= l_1531))
                    {
                        int l_1557 = 0L;
                        (**g_457) = func_33(((func_17(&l_1540, l_1557) > l_1557) , (**g_457)), ((g_1244 = 0L) & (safe_add_func_int32_t_s_s((((**g_450) >= (***g_449)) && ((0x007568C4L < (*l_1232)) , 0xC8L)), (***g_407)))), l_1540);

                        ;
                        ;
                    }
                    else
                    {
                        unsigned short l_1566 = 65531UL;
                        int **l_1569[3];
                        int ***l_1591 = (void*)0;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1569[i] = &l_1446;
                        (*g_1052) = (65535UL != l_1547);
                        (**l_1560) = (((&g_458 == l_1560) == ((((***l_1560) , ((*g_409) = (safe_add_func_int8_t_s_s(((((safe_mod_func_int16_t_s_s((((*l_1235) = l_1565) != &g_652[0][3]), (*g_549))) & (l_1566 < (*g_549))) & (safe_mod_func_int32_t_s_s(((0x4FL | 0x9CL) != (-1L)), (*l_1446)))) , (-1L)), (***l_1560))))) , 0xBEL) <= 0x05L)) , (void*)0);

                        ;
                        g_1052 = ((*g_458) = (*g_458));

                        ;
                        (*l_1232) = func_22(func_26((safe_mod_func_uint16_t_u_u(g_1572, ((((***g_449) = (safe_lshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((((safe_unary_minus_func_int32_t_s((*g_417))) < func_7((((l_1551[2] != (*l_1446)) || ((**g_302) = 0x59L)) , 8L))) || (safe_mod_func_int16_t_s_s((*g_549), (***l_1560)))), l_1551[3])), (*g_417))), 10)) <= (*l_1446)), (*l_1441))), l_1590)) < l_1551[3]), (**g_450))) , l_1591) == (void*)0), 6))) == 0L) ^ g_1509))), l_1592, &l_1508, &l_1542));

                        ;
                    }

                    ;
                    ;
                    ;
                    for (g_96 = (-20); (g_96 == 18); g_96 = safe_add_func_int8_t_s_s(g_96, 1))
                    {
                        int l_1615 = 0xEBF542CDL;
                        int l_1624 = (-9L);
                        int **l_1627 = &g_854;
                        int ***l_1628 = &g_853;
                        (*l_1446) = (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s((((((l_1599[3] == 0xF5E0L) ^ ((safe_lshift_func_uint8_t_u_u((***g_449), (**g_450))) , (***g_449))) <= l_1605[0][6][2]) < 4294967286UL) ^ (**g_450)), 7)) <= (*l_1446)), 10));
                        (*l_1441) = ((safe_sub_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((((**l_1532) = l_1540) > (0UL || (**g_408))), ((((*g_123) | (((((l_1551[3] = (***g_407)) & (l_1610 != ((((((safe_lshift_func_uint8_t_u_s(((((**g_302) || (*g_451)) , (***g_457)) ^ 0x814910A9L), 5)) < l_1613) ^ (***l_1560)) , 4UL) < 0xD6L) , l_1614[1]))) , (**g_302)) , (*g_549)) && 0x94B8L)) & (*g_451)) ^ 65535UL))) < l_1615) & 1L), 0x1F58L)) , 0x5E778E11L);
                        (*g_458) = &l_1540;

                        ;
                        (***g_457) = ((*g_417) <= (***l_1560));
                    }
                }

                ;
                ;
                ;
            }

            ;

            ;
            ;
            (***g_457) = l_1540;
            for (g_196 = 0; (g_196 >= 60); g_196 = safe_add_func_uint8_t_u_u(g_196, 8))
            {
                unsigned short l_1636 = 0x37A4L;
                unsigned ******l_1643 = &g_1425;
                unsigned *******l_1642 = &l_1643;
                short l_1652 = 0xF95EL;
                (**g_458) = (l_1635 , l_1636);
                for (l_1531 = 0; (l_1531 <= 0); l_1531 += 1)
                {
                    unsigned char l_1641[8][10][2] = {{{255UL,0x22L},{0x5FL,1UL},{0x22L,0xC6L},{0UL,8UL},{0xA9L,1UL},{0x23L,0x22L},{0xB2L,0x8CL},{0x76L,0xC0L},{255UL,0x2BL},{1UL,255UL}},{{0UL,0x22L},{0xB2L,0xC1L},{0x16L,1UL},{0x00L,8UL},{0x5DL,0x5DL},{0xA9L,0x5FL},{0x5FL,0xC1L},{0xFCL,0x8CL},{0x74L,0xFCL},{1UL,0x18L}},{{1UL,0xFCL},{0x74L,0x8CL},{0xFCL,0xC1L},{0x5FL,0x5FL},{0xA9L,0x5DL},{0x5DL,8UL},{0x00L,1UL},{0x16L,0xC1L},{0xB2L,0x22L},{0UL,255UL}},{{1UL,0x2BL},{255UL,0xC0L},{0x76L,0x8CL},{0xB2L,0x22L},{0x23L,1UL},{0xA9L,8UL},{0UL,0xC6L},{0x22L,1UL},{0x5FL,0x22L},{255UL,0xA9L}},{{0UL,0xFCL},{255UL,7UL},{0UL,0xC0L},{0x74L,0x22L},{0xC6L,7UL},{0xC1L,0x23L},{0UL,0xD1L},{1UL,0xD1L},{0UL,0x23L},{0xC1L,7UL}},{{0xC6L,1UL},{0x18L,0x9FL},{0UL,0UL},{0x76L,0x5DL},{8UL,0UL},{0xC6L,0x18L},{0x22L,0x7DL},{1UL,0xD1L},{0x5FL,1UL},{0UL,0xB5L}},{{0xC1L,0x18L},{8UL,7UL},{0UL,0x9FL},{0x76L,1UL},{0x7DL,0xC6L},{8UL,1UL},{8UL,255UL},{0x92L,0x7DL},{0UL,1UL},{1UL,1UL}},{{0UL,0x23L},{0x22L,255UL},{0x5DL,7UL},{0x18L,0x5DL},{0x7DL,7UL},{0x7DL,0x5DL},{0x18L,7UL},{0x5DL,255UL},{0x22L,0x23L},{0UL,1UL}}};
                    unsigned ********l_1644 = &l_1642;
                    char l_1649 = 0L;
                    int i, j, k;
                    for (g_1631 = 0; (g_1631 <= 0); g_1631 += 1)
                    {
                        unsigned char ***l_1637 = &g_450;
                        unsigned char ****l_1639 = &l_1638;
                        int l_1640 = (-5L);
                        int i, j, k;
                        l_1640 = (((l_1637 = &g_450) == ((*l_1639) = l_1638)) > (l_1179[l_1531][l_1531][g_1631] <= l_1179[l_1531][l_1531][(l_1531 + 2)]));
                        return l_1179[g_1631][l_1531][(l_1531 + 4)];



                    }
                    (*g_458) = (**g_457);
                    l_1446 = (**g_457);
                }
                (**g_457) = func_33(&l_1540, (**g_302), l_1653);

                ;
                for (g_383 = 0; (g_383 == 16); g_383++)
                {
                    int l_1656[9] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
                    int *l_1668 = (void*)0;
                    unsigned *l_1669 = &g_1443[6];
                    int ****l_1674 = &l_1294;
                    int i;
                    if (l_1656[4])
                    {
                        unsigned l_1657 = 4294967295UL;
                        (*l_1441) = (*l_1232);
                        return l_1657;



                    }
                    else
                    {
                        unsigned **l_1658 = (void*)0;
                        (**l_1234) = l_1658;

                        ;
                        if (l_1656[5])
                            break;
                        (**g_457) = (*g_458);
                    }

                    ;
                    g_1478[4][0] = ((*g_417) = (safe_rshift_func_int8_t_s_s(((((g_791 = &g_406) != &g_406) == ((*l_1669) = (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((void*)0 == &l_1531), (((*g_409) > ((*l_1441) = func_26((((safe_mod_func_uint8_t_u_u(((***g_449) = func_26(l_1656[4], (**g_457), (*g_458), &l_1656[4])), (*l_1232))) | l_1667) , l_1636), l_1668, &g_2[0], &l_1243))) >= (***g_407)))), l_1636)))) & 249UL), 5)));

                    ;
                    (*g_458) = (**g_457);
                    (*l_1441) = ((*g_549) != (l_1636 <= ((*g_549) && (((**g_302) || (**g_302)) >= (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((((*l_1674) = &g_853) != ((((safe_add_func_int8_t_s_s((0x016E6AF4L >= ((((safe_lshift_func_uint16_t_u_s(((&g_1269 != (l_1679 = &g_1269)) != l_1605[0][6][2]), (*g_549))) , (*g_549)) ^ (*l_1446)) && l_1636)), 0xBAL)) <= (**g_450)) || (*g_549)) , l_1680)), (*g_417))), (*g_417)))))));
                }

                ;
            }

            ;
            ;
        }
        else
        {
            short l_1685 = 0xC67BL;
            int *l_1697 = &g_72;
            int **l_1715 = (void*)0;
            int **l_1717[9] = {&l_1441,&g_417,&l_1441,&g_417,&l_1441,&g_417,&l_1441,&g_417,&l_1441};
            int i;
            for (g_1244 = (-26); (g_1244 <= 16); g_1244 = safe_add_func_uint32_t_u_u(g_1244, 4))
            {
                char l_1695[6] = {1L,3L,3L,1L,3L,3L};
                unsigned char ****l_1698 = &g_449;
                char *l_1699 = (void*)0;
                char *l_1700[10][7][3] = {{{&g_1631,&l_1605[5][9][0],&l_1605[5][9][0]},{&g_61[3],&l_1605[0][6][2],&l_1179[0][0][4]},{(void*)0,&l_1605[0][6][2],(void*)0},{&l_1695[1],&l_1605[0][6][2],&l_1695[1]},{&l_1695[3],&l_1605[5][9][0],&l_1605[0][6][2]},{(void*)0,&l_1605[0][6][2],&g_1631},{&g_1631,&l_1605[0][6][2],&l_1605[5][9][0]}},{{&l_1179[0][0][4],&l_1605[0][6][2],&l_1695[1]},{(void*)0,&l_1605[5][9][0],(void*)0},{&g_61[3],&l_1605[0][6][2],&l_1605[3][6][2]},{&l_1695[3],&l_1605[0][6][2],&l_1605[0][6][2]},{&l_1605[0][6][2],&l_1605[0][6][2],&g_61[3]},{&g_1631,&l_1605[5][9][0],&l_1605[5][9][0]},{&g_61[3],&l_1605[0][6][2],&l_1179[0][0][4]}},{{(void*)0,&l_1605[0][6][2],(void*)0},{&l_1695[1],&l_1605[0][6][2],&l_1695[1]},{&l_1695[3],&l_1605[5][9][0],&l_1605[0][6][2]},{(void*)0,&l_1605[0][6][2],&g_1631},{&g_1631,&l_1605[0][6][2],&l_1605[5][9][0]},{&l_1179[0][0][4],&l_1605[0][6][2],&l_1695[1]},{(void*)0,&l_1605[5][9][0],(void*)0}},{{&g_61[3],&l_1605[0][6][2],&l_1605[3][6][2]},{&l_1695[3],&l_1605[0][6][2],&l_1605[0][6][2]},{&l_1605[0][6][2],&l_1605[0][6][2],&g_61[3]},{&g_1631,&l_1605[5][9][0],&l_1605[5][9][0]},{&g_61[3],&l_1605[0][6][2],&l_1179[0][0][4]},{(void*)0,&l_1605[0][6][2],(void*)0},{&l_1695[1],&l_1605[0][6][2],&l_1695[1]}},{{&l_1695[3],&l_1605[5][9][0],&l_1605[0][6][2]},{(void*)0,&l_1605[0][6][2],&g_1631},{&g_1631,&l_1605[0][6][2],&l_1605[5][9][0]},{&l_1179[0][0][4],(void*)0,&g_61[3]},{&l_1605[0][6][2],&l_1179[0][0][2],&l_834},{&g_1631,(void*)0,&g_61[3]},{(void*)0,&l_834,(void*)0}},{{&l_1695[1],(void*)0,&l_1179[0][0][4]},{&l_1179[0][0][4],&l_1179[0][0][2],&l_1179[0][0][2]},{&l_1179[0][0][4],(void*)0,(void*)0},{&l_1605[0][6][2],&l_834,&l_834},{&g_61[3],(void*)0,(void*)0},{(void*)0,&l_1179[0][0][2],(void*)0},{&l_1605[3][6][2],(void*)0,&l_834}},{{&l_1179[0][0][4],&l_834,&l_1179[0][0][2]},{&l_1695[1],(void*)0,&g_61[3]},{&l_1605[0][6][2],&l_1179[0][0][2],&l_834},{&g_1631,(void*)0,&g_61[3]},{(void*)0,&l_834,(void*)0},{&l_1695[1],(void*)0,&l_1179[0][0][4]},{&l_1179[0][0][4],&l_1179[0][0][2],&l_1179[0][0][2]}},{{&l_1179[0][0][4],(void*)0,(void*)0},{&l_1605[0][6][2],&l_834,&l_834},{&g_61[3],(void*)0,(void*)0},{(void*)0,&l_1179[0][0][2],(void*)0},{&l_1605[3][6][2],(void*)0,&l_834},{&l_1179[0][0][4],&l_834,&l_1179[0][0][2]},{&l_1695[1],(void*)0,&g_61[3]}},{{&l_1605[0][6][2],&l_1179[0][0][2],&l_834},{&g_1631,(void*)0,&g_61[3]},{(void*)0,&l_834,(void*)0},{&l_1695[1],(void*)0,&l_1179[0][0][4]},{&l_1179[0][0][4],&l_1179[0][0][2],&l_1179[0][0][2]},{&l_1179[0][0][4],(void*)0,(void*)0},{&l_1605[0][6][2],&l_834,&l_834}},{{&g_61[3],&l_1605[4][8][0],&g_61[3]},{&l_1179[0][0][4],(void*)0,&l_834},{&l_1179[0][0][4],&l_1605[4][8][0],&g_61[3]},{&l_1605[0][6][2],&l_1605[4][2][2],(void*)0},{&g_61[3],&l_1605[4][8][0],&l_1179[0][0][4]},{(void*)0,(void*)0,&l_1179[0][0][2]},{&l_1605[3][6][2],&l_1605[4][8][0],(void*)0}}};
                int l_1701 = 3L;
                int i, j, k;
                for (g_898 = 13; (g_898 <= 13); g_898++)
                {
                    short l_1688 = 0x05ADL;
                    if ((l_1685 >= (*g_549)))
                    {
                        char l_1693 = 1L;
                        int *l_1694[1][1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1694[i][j] = &g_70;
                        }
                        (**g_458) = (safe_lshift_func_int8_t_s_u(l_1688, 5));
                        (*g_1052) = (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((((**g_450) ^ func_26(l_1693, (*g_458), (**g_457), l_1694[0][0])) >= 1UL), 3)), l_1695[1]));
                    }
                    else
                    {
                        unsigned char l_1696 = 8UL;
                        (*g_458) = (*g_458);
                        if (l_1696)
                            break;
                        if ((***g_457))
                            break;
                        (*g_458) = l_1697;
                    }
                    if ((*g_123))
                        break;
                    (**g_457) = (**g_457);
                }
                (*l_1697) = (((((g_61[4] = ((**g_302) = func_7(((**g_853) = (((*l_1698) = &g_450) != (void*)0))))) < ((g_1631 = (l_1701 = (*l_1697))) && ((((*l_1697) >= (*l_1697)) , 0x4FA18ED6L) , ((((*l_1697) , ((safe_rshift_func_int8_t_s_s(g_1244, 7)) <= (*g_451))) < 2UL) ^ (*g_451))))) || 0x7E64L) , (void*)0) != &g_457);
            }
            (*l_1441) = (safe_mod_func_uint32_t_u_u((***g_407), (safe_lshift_func_int8_t_s_s(func_17(&l_1542, l_1542), (l_1685 ^ (((safe_sub_func_uint32_t_u_u((*l_1441), g_66[3][3])) > ((*l_1446) || ((*g_303) != (**g_302)))) && l_1712))))));

            ;
            ;
            (*l_1446) = (safe_sub_func_uint16_t_u_u((~(*l_1441)), (*l_1441)));
            g_1052 = ((((*g_458) = l_1697) != (l_1592 = (g_1716[0][1] = &g_2[0]))) , &l_1635);

            ;
            ;
            ;
        }




        ;
        ;

        ;
        return l_1712;



    }

    ;
    ;
    return g_1718;
}







static int * func_5(int * p_6)
{
    unsigned l_848 = 0x5C82C9E7L;
    int l_861 = 0xEC45A6C1L;
    int **l_944 = (void*)0;
    int *l_950 = &g_2[0];
    unsigned char **l_968 = &g_451;
    unsigned ***l_992 = &g_408;
    int ***l_1003 = &g_458;
    unsigned **l_1025 = (void*)0;
    unsigned ***l_1024 = &l_1025;
    for (g_73 = (-30); (g_73 != (-21)); g_73 = safe_add_func_uint16_t_u_u(g_73, 8))
    {
        unsigned l_852 = 4294967291UL;
        int l_864[10] = {0x2200FF2AL,0x2200FF2AL,0x2200FF2AL,0x2200FF2AL,0x2200FF2AL,0x2200FF2AL,0x2200FF2AL,0x2200FF2AL,0x2200FF2AL,0x2200FF2AL};
        int **l_943 = &g_854;
        int i;
        for (g_72 = (-12); (g_72 != (-15)); g_72 = safe_sub_func_uint8_t_u_u(g_72, 6))
        {
            short l_842 = 0x12CEL;
            unsigned l_847[1][5][2] = {{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}}};
            short **l_851 = &g_549;
            int i, j, k;
            (*g_458) = func_33((*g_458), (l_842 && (safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((((l_847[0][1][1] , (l_848 , (((((*g_303) = (safe_rshift_func_uint8_t_u_s((((****g_406) = (*g_409)) || l_847[0][1][0]), ((**g_450) , (l_848 && (&g_549 != l_851)))))) >= 0xB8L) > l_848) & 0x6DL))) , (*g_549)) <= l_842) & l_842) | 0xE8L), l_852)), 4))), l_842);
            if ((func_7(g_681[7]) >= (((***g_407) >= (g_853 == (void*)0)) || (((((safe_add_func_int16_t_s_s(1L, l_852)) == ((safe_mod_func_uint32_t_u_u(1UL, (safe_mod_func_int16_t_s_s((l_848 > l_852), (-2L))))) & 0x4462L)) , l_847[0][1][1]) & 0x74L) ^ (*p_6)))))
            {
                int *l_862 = (void*)0;
                l_861 = l_852;
                g_70 = l_852;
            }
            else
            {
                unsigned l_863[10] = {0x7F17615EL,0x7F17615EL,0x7F17615EL,0x7F17615EL,0x7F17615EL,0x7F17615EL,0x7F17615EL,0x7F17615EL,0x7F17615EL,0x7F17615EL};
                int i;
                l_864[5] = (*p_6);
                if (l_847[0][4][1])
                    break;
                if (l_848)
                    break;
            }

            ;
        }
    }
    (***g_457) = (***g_457);
    if ((*p_6))
    {
        short ****l_955[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int l_965[10] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
        unsigned l_966 = 0x06E4A868L;
        unsigned char **l_969 = &g_451;
        int i;
        (*g_883) = (void*)0;

        ;
        (**g_458) = (l_955[6] == &g_883);
        for (g_383 = 0; (g_383 <= 3); g_383 += 1)
        {
            int l_958 = 0L;
            int **l_967 = (void*)0;
            unsigned short *l_978 = &g_681[6];
            int i;
        }
    }
    else
    {
        unsigned short *l_1010 = &g_681[2];
        unsigned short *l_1011 = &g_42;
        int l_1014[6][1][10] = {{{(-9L),0x2169A00CL,0xB859FBB6L,0x2169A00CL,(-9L),0xB859FBB6L,1L,1L,0xB859FBB6L,(-9L)}},{{(-9L),0x45C7DFEEL,0x45C7DFEEL,(-9L),0x4A58ED08L,(-9L),(-9L),(-9L),0x4A58ED08L,(-9L)}},{{(-9L),(-9L),(-9L),0x4A58ED08L,(-9L),0x4D651CC9L,0x4D651CC9L,0x4A58ED08L,0x45B43095L,0xB859FBB6L}},{{0x45C7DFEEL,0x45C7DFEEL,(-9L),0x4A58ED08L,(-9L),(-9L),(-9L),0x4A58ED08L,(-9L),0x45C7DFEEL}},{{(-9L),0x4D651CC9L,0xB859FBB6L,(-9L),0x45B43095L,0x45B43095L,(-9L),0xB859FBB6L,0x4D651CC9L,(-9L)}},{{0xB859FBB6L,0x45C7DFEEL,0x4D651CC9L,0x45B43095L,0x45C7DFEEL,0x45B43095L,0x4D651CC9L,0x45C7DFEEL,0xB859FBB6L,0xB859FBB6L}}};
        unsigned ***l_1027[2];
        unsigned char l_1031 = 0xD9L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1027[i] = &l_1025;
        if (((*p_6) < ((((((*l_1011) = ((*l_1010) = (*l_950))) , (**g_408)) , (((*l_950) == (safe_lshift_func_uint16_t_u_s((***l_1003), 14))) , ((l_1014[4][0][2] != 0x06C8L) && (***g_449)))) , (l_1014[4][0][2] , (*****g_791))) != (*p_6))))
        {
            for (g_73 = 0; (g_73 <= 24); g_73++)
            {
                if ((*p_6))
                    break;
                (**g_457) = (**g_457);
            }
        }
        else
        {
            int l_1017 = 0x5432165FL;
            unsigned ***l_1021 = &g_408;
            char l_1022 = (-6L);
            int *l_1023 = &g_2[0];
            unsigned ****l_1026 = &l_1024;
            unsigned ****l_1028 = (void*)0;
            unsigned ****l_1029 = &l_1027[0];
            int *l_1030 = &l_1014[5][0][5];
            for (g_42 = 0; (g_42 <= 1); g_42 += 1)
            {
                int i;
                if (g_751[(g_42 + 2)])
                    break;
                for (l_848 = 0; (l_848 <= 5); l_848 += 1)
                {
                    int i, j;
                    (***g_457) = (1UL || g_361[g_42][g_42]);
                    p_6 = ((g_361[g_42][l_848] = l_1017) , (**g_457));
                    return p_6;


                }
            }
            (*l_1030) = ((*g_123) = (((*l_1026) = l_1024) != ((*l_1029) = l_1027[0])));
        }
        (*p_6) = l_1031;
    }
    return (**g_457);


}







static unsigned func_7(int p_8)
{
    int *l_835 = &g_72;
    (**g_457) = l_835;

    ;
    for (g_42 = 0; (g_42 < 58); ++g_42)
    {
        for (p_8 = 0; (p_8 <= 8); p_8 += 1)
        {
            for (g_96 = 0; (g_96 <= 8); g_96 += 1)
            {
                int i;
                return g_681[g_96];
            }
        }
    }
    (**g_457) = (*g_458);
    return (*l_835);
}







static unsigned func_12(char p_13, char p_14, int * p_15, unsigned char p_16)
{
    short l_609 = 0xD10EL;
    int ***l_610 = &g_458;
    short l_641 = (-1L);
    unsigned *****l_644 = &g_406;
    unsigned *l_651 = &g_196;
    int *l_678 = &g_70;
    char l_710[9];
    unsigned short **l_731 = &g_199[3];
    short l_732 = (-1L);
    char l_733 = 0xC3L;
    int l_734 = (-9L);
    short **l_760 = (void*)0;
    unsigned char l_764 = 8UL;
    unsigned char ***l_793 = &g_450;
    unsigned char l_823 = 1UL;
    int i;
    for (i = 0; i < 9; i++)
        l_710[i] = 1L;
    if (l_609)
    {
        int l_613[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        unsigned char l_614 = 0x5FL;
        int i;
        if ((((***g_407) != p_13) & l_614))
        {
            unsigned char l_615 = 6UL;
            int *l_616 = &l_613[6];
            (*l_616) = ((*g_409) & p_13);
        }
        else
        {
            (**l_610) = p_15;


        }


    }
    else
    {
        int l_619 = 0x9D819E6CL;
        int l_643 = (-5L);
        unsigned char *l_697 = &g_537[0][0][0];
        int **l_725 = &l_678;
        int *l_730 = &g_73;
        int **l_729 = &l_730;
        int l_758[7][3];
        int l_781 = (-1L);
        unsigned **l_788 = &g_409;
        unsigned short l_833 = 0x6382L;
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 3; j++)
                l_758[i][j] = (-4L);
        }
        for (p_14 = 0; (p_14 >= (-4)); p_14--)
        {
            unsigned short *l_625[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            int l_626 = 0L;
            int l_627 = 0x4194FC34L;
            unsigned l_630[6] = {0xB0B534E7L,0x749F0C00L,0x749F0C00L,0xB0B534E7L,0x749F0C00L,0x749F0C00L};
            unsigned l_638[6][3] = {{0x370FCFBDL,0x370FCFBDL,0x65FFBEA2L},{0x03709586L,0xF41C6D8EL,0x03709586L},{0x370FCFBDL,0x65FFBEA2L,0x65FFBEA2L},{4294967295UL,0xF41C6D8EL,4294967295UL},{0x370FCFBDL,0x370FCFBDL,0x65FFBEA2L},{0x03709586L,0xF41C6D8EL,0x03709586L}};
            short l_654[6];
            unsigned **l_665 = &g_652[0][0];
            unsigned short ***l_726[4][3][9] = {{{&g_198[2],&g_198[2],&g_198[2],&g_198[2],&g_198[1],&g_198[2],&g_198[0],&g_198[2],&g_198[1]},{&g_198[2],&g_198[2],&g_198[2],&g_198[1],&g_198[2],&g_198[2],&g_198[3],&g_198[2],&g_198[4]},{&g_198[2],&g_198[2],&g_198[2],&g_198[1],&g_198[1],&g_198[2],&g_198[1],&g_198[1],&g_198[2]}},{{&g_198[2],&g_198[2],(void*)0,&g_198[2],&g_198[1],&g_198[2],&g_198[2],&g_198[2],&g_198[2]},{(void*)0,&g_198[2],&g_198[3],&g_198[2],&g_198[2],&g_198[1],&g_198[2],(void*)0,&g_198[2]},{(void*)0,&g_198[3],(void*)0,&g_198[2],&g_198[2],&g_198[2],(void*)0,&g_198[3],(void*)0}},{{&g_198[1],&g_198[2],&g_198[2],&g_198[2],&g_198[2],(void*)0,(void*)0,&g_198[2],&g_198[2]},{(void*)0,(void*)0,&g_198[2],&g_198[2],(void*)0,(void*)0,&g_198[2],&g_198[3],&g_198[3]},{&g_198[1],&g_198[2],(void*)0,&g_198[2],(void*)0,&g_198[2],&g_198[1],&g_198[2],&g_198[2]}},{{(void*)0,&g_198[2],&g_198[2],&g_198[3],&g_198[2],&g_198[2],&g_198[2],&g_198[3],(void*)0},{(void*)0,&g_198[2],&g_198[2],&g_198[3],&g_198[2],&g_198[2],&g_198[2],&g_198[2],&g_198[2]},{&g_198[2],&g_198[4],&g_198[3],&g_198[4],&g_198[2],&g_198[2],&g_198[2],(void*)0,&g_198[2]}}};
            char l_741[6][8] = {{0x8BL,0x84L,0x84L,0x8BL,0x79L,0xF6L,0x78L,1L},{0xB9L,0x8BL,7L,0x78L,7L,0x8BL,0xB9L,0x3DL},{7L,0x8BL,0xB9L,0x3DL,0xF6L,0xF6L,0x3DL,0xB9L},{0x84L,0x84L,0x8BL,0x79L,0xF6L,0x78L,1L,0x78L},{7L,0xB9L,0x79L,0xB9L,7L,(-1L),0x84L,0x78L},{0xB9L,0xF6L,1L,0x79L,0x79L,1L,0xF6L,0xB9L}};
            unsigned short l_767 = 1UL;
            int *l_768 = &l_758[0][0];
            unsigned **l_784 = &l_651;
            unsigned **l_789 = &g_409;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_654[i] = (-10L);
            if (l_619)
                break;
            for (g_42 = 0; (g_42 == 5); ++g_42)
            {
                return (****g_406);
            }
        }
        p_15 = (**g_457);


        (*g_458) = (*g_458);
        for (g_383 = 29; (g_383 == 17); g_383--)
        {
            int *l_811 = (void*)0;
            int l_830 = 0L;
            for (g_73 = (-5); (g_73 > (-30)); --g_73)
            {
                for (p_13 = 0; (p_13 <= 1); p_13 += 1)
                {
                    unsigned short ***l_808 = &g_198[3];
                    int i, j;
                    if (g_361[p_13][(p_13 + 3)])
                        break;
                    (*l_808) = &g_199[2];
                }
                (**l_610) = (void*)0;

                ;
                (**l_725) = (safe_sub_func_int16_t_s_s((*g_549), p_14));
            }
            for (g_510 = 0; (g_510 <= 4); g_510 += 1)
            {
                unsigned l_820 = 0x666243CFL;
                int i;
                l_830 = (((((safe_rshift_func_uint8_t_u_s(p_16, (safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((***g_449), 1)) == (((safe_rshift_func_int8_t_s_u((((**l_725) = (**l_725)) & l_820), (safe_sub_func_uint32_t_u_u(((l_823 || ((safe_rshift_func_int8_t_s_u((0x98L ^ p_14), 5)) & ((g_116[g_510] = (safe_rshift_func_int16_t_s_s((*g_549), 8))) >= (((safe_add_func_int16_t_s_s((p_14 , 0L), p_14)) & 1L) , p_16)))) != p_13), (****g_406))))) , p_16) | p_13)), p_14)))) != l_619) > 0x14785DDEL) , l_820) && (*g_303));
                for (l_823 = 0; (l_823 <= 4); l_823 += 1)
                {
                    (*l_725) = (*l_725);
                }
            }
            p_15 = p_15;
        }
    }


    return p_16;
}







static int func_17(int * p_18, unsigned p_19)
{
    int *l_527 = &g_73;
    int **l_526 = &l_527;
    int l_535 = 0L;
    int *l_553 = &l_535;
    int *l_564 = &g_72;
    unsigned *****l_596 = (void*)0;
    for (g_193 = 0; (g_193 > 14); g_193 = safe_add_func_uint32_t_u_u(g_193, 8))
    {
        int *l_542 = &g_72;
        int *l_543 = &g_72;
        unsigned l_544 = 0x5BB803A3L;
        unsigned char l_565[3];
        unsigned char **l_570 = (void*)0;
        int i;
        for (i = 0; i < 3; i++)
            l_565[i] = 3UL;
        for (g_510 = 17; (g_510 == 40); g_510 = safe_add_func_uint32_t_u_u(g_510, 1))
        {
            int l_540[10][2][6] = {{{5L,0x44CFE688L,3L,0xD783B105L,(-7L),0xBEB13818L},{0xE1C4F50AL,0L,0x30F1F975L,0xB6AB5433L,(-7L),0x7488A5B8L}},{{0x7488A5B8L,0x44CFE688L,0L,3L,0x2F635F85L,0x1F6BC8BAL},{(-1L),5L,0x657AD4BAL,0x91E3107FL,0x79375C1BL,0x91E3107FL}},{{0x44CFE688L,(-5L),0x44CFE688L,(-1L),0xB6AB5433L,0xD05192ADL},{0x23B1C424L,3L,0x79375C1BL,5L,0xBEB13818L,0x657AD4BAL}},{{0xD05192ADL,0x1F6BC8BAL,9L,5L,0x7488A5B8L,(-1L)},{0x23B1C424L,(-5L),0L,9L,0x23B1C424L,0x44CFE688L}},{{0xBEB13818L,0xE1C4F50AL,0x1F6BC8BAL,(-7L),(-7L),0x1F6BC8BAL},{9L,9L,1L,0x79375C1BL,0x938935F5L,0xE1C4F50AL}},{{0x657AD4BAL,0x1F6BC8BAL,(-8L),0xD05192ADL,0L,1L},{0xB6AB5433L,0x657AD4BAL,(-8L),0x941AEE11L,9L,0xE1C4F50AL}},{{(-1L),0x941AEE11L,1L,(-8L),0x44CFE688L,0x1F6BC8BAL},{(-8L),0x44CFE688L,0x1F6BC8BAL,5L,0x1F6BC8BAL,0x44CFE688L}},{{0xD783B105L,0xD05192ADL,0L,0x30F1F975L,0xE1C4F50AL,9L},{0xE1C4F50AL,0xB6AB5433L,0x91E3107FL,(-5L),1L,0L}},{{(-7L),0xB6AB5433L,0x30F1F975L,0L,0xE1C4F50AL,0x938935F5L},{5L,0xD05192ADL,0xBEB13818L,0xE1C4F50AL,0x1F6BC8BAL,(-7L)}},{{0x23B1C424L,0x44CFE688L,0L,0L,0x44CFE688L,0x23B1C424L},{0L,0x941AEE11L,5L,0x2F635F85L,9L,0x657AD4BAL}}};
            int i, j, k;
            if (((*g_417) = (p_19 & (safe_unary_minus_func_int8_t_s((**g_302))))))
            {
                (**g_457) = (**g_457);
                return (*g_417);
            }
            else
            {
                int **l_525 = (void*)0;
                int ***l_528 = &l_526;
                int **l_530 = &l_527;
                int ***l_529 = &l_530;
                unsigned char *l_536[1];
                int **l_541 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_536[i] = &g_537[0][0][0];
                if ((*g_417))
                    break;
                (**g_457) = (*g_458);
                (**g_457) = (**g_457);
                (*g_417) = (safe_sub_func_int32_t_s_s((((l_525 != ((*l_529) = ((*l_528) = l_526))) > p_19) < ((safe_rshift_func_uint16_t_u_s(((((((((safe_sub_func_int32_t_s_s(l_540[7][1][5], (-1L))) > 0xC4AF6422L) == (***g_449)) | 0x05E6AB2EL) <= l_544) || 0xF9L) || 6L) < (***g_449)), 9)) , 0xC30B47CAL)), 0xB3BAEADBL));
            }
            if (l_540[1][1][5])
            {
                for (g_42 = 0; (g_42 > 8); g_42 = safe_add_func_uint8_t_u_u(g_42, 4))
                {
                    (*g_458) = (void*)0;

                    ;
                    if (l_535)
                        continue;
                }
                (**g_457) = p_18;


                return (*l_543);
            }
            else
            {
                int *l_554 = &g_70;
                short **l_556 = &g_549;
                for (g_96 = 14; (g_96 >= 4); g_96--)
                {
                    for (g_196 = 1; (g_196 <= 4); g_196 += 1)
                    {
                        (*g_458) = (*g_458);
                        g_472 = g_472;
                        return l_535;
                    }
                    (*l_542) = ((void*)0 == g_549);
                    for (g_42 = 0; (g_42 <= 1); g_42 += 1)
                    {
                        int **l_550 = (void*)0;
                        int **l_551 = (void*)0;
                        int **l_552[4][4][3] = {{{&g_417,(void*)0,&g_417},{(void*)0,&l_543,(void*)0},{&l_543,&l_543,&g_417},{&g_417,&l_543,&g_417}},{{&l_543,(void*)0,(void*)0},{(void*)0,&l_543,(void*)0},{&g_417,&l_543,(void*)0},{&g_417,&l_543,&g_417}},{{&g_417,(void*)0,&g_417},{(void*)0,&l_543,(void*)0},{&l_543,&l_543,&g_417},{&g_417,&l_543,&g_417}},{{&l_543,(void*)0,(void*)0},{(void*)0,&l_543,(void*)0},{&g_417,&l_543,(void*)0},{&g_417,&l_543,&g_417}}};
                        short ***l_555[9][4][3] = {{{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472}},{{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472}},{{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472}},{{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472}},{{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472}},{{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472}},{{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472}},{{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472}},{{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472}}};
                        int i, j, k;
                        l_554 = (l_553 = (g_417 = (p_18 = ((**g_457) = p_18))));



                        l_556 = (g_472 = &g_549);

                        ;
                    }





                    return l_540[0][0][1];
                }
                (*g_417) = ((safe_sub_func_uint16_t_u_u((((*g_549) || (*g_549)) | ((*l_553) && 7UL)), (-3L))) && (*l_553));
                (**g_457) = l_542;

                ;
            }

            ;
        }
    }
    return p_19;
}







static int * func_20(int p_21)
{
    unsigned char l_31 = 255UL;
    int *l_32 = &g_2[0];
    int l_45[4][3] = {{3L,3L,3L},{(-3L),0xCDE30ECAL,(-3L)},{3L,3L,3L},{(-3L),0xCDE30ECAL,(-3L)}};
    unsigned short **l_491 = &g_199[1];
    int l_492 = 1L;
    int *l_511[1][3][8] = {{{(void*)0,&g_72,&g_72,(void*)0,&g_72,&g_72,(void*)0,&g_72},{(void*)0,(void*)0,&g_2[0],(void*)0,(void*)0,&g_2[0],(void*)0,(void*)0},{&g_72,(void*)0,&g_72,&g_72,(void*)0,&g_72,&g_72,(void*)0}}};
    char **l_514 = &g_303;
    int i, j, k;
    if (func_22((safe_mod_func_int8_t_s_s(func_26(l_31, l_32, func_33(func_37(g_2[0], &g_2[0], ((((g_42 = p_21) || (safe_sub_func_int8_t_s_s(p_21, l_45[3][0]))) , p_21) , (((p_21 , 0x85L) != 1L) || g_2[0])), &g_2[0]), (*l_32), g_2[0]), l_32), 0xBCL))))
    {
        int *l_483 = (void*)0;
        if (p_21)
        {
            (*g_458) = (**g_457);
            (*g_417) = (*g_417);
        }
        else
        {
            return l_483;


        }
        (*g_417) = (***g_457);
    }
    else
    {
        int *l_484 = &g_2[0];
        short *l_493 = &g_219[2][4][0];
        l_32 = func_33(l_484, (safe_mod_func_uint32_t_u_u((~(*l_484)), ((*g_417) = (func_22((****g_406)) && (((safe_rshift_func_uint16_t_u_u(p_21, 3)) , (safe_lshift_func_uint8_t_u_u((((*l_493) = (p_21 && (l_491 == (l_492 , (void*)0)))) && (*l_32)), 1))) | (*l_32)))))), p_21);

        ;
        (*g_458) = l_484;

        ;
        for (g_70 = (-10); (g_70 >= 4); g_70++)
        {
            char **l_513 = &g_303;
            if ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((p_21 != (safe_unary_minus_func_int16_t_s(((*l_493) = (((void*)0 == (*g_449)) >= ((**l_491) = (safe_sub_func_int16_t_s_s((p_21 == (!(p_21 , p_21))), (((((safe_mod_func_uint32_t_u_u((p_21 <= 0L), p_21)) < 0L) , 4294967295UL) && 0UL) & p_21))))))))), 12)), p_21)))
            {
                for (g_72 = 5; (g_72 >= 0); g_72 -= 1)
                {
                    int *l_507 = (void*)0;
                    short **l_508[6][3] = {{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{(void*)0,&l_493,&l_493},{(void*)0,(void*)0,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493}};
                    int i, j;
                    if (g_66[(g_72 + 1)][(g_72 + 2)])
                    {
                        return l_507;


                    }
                    else
                    {
                        short ***l_509 = &l_508[5][0];
                        (*l_509) = l_508[4][0];
                        if (g_510)
                            break;
                        return l_511[0][2][5];


                    }
                }
                l_484 = func_33((**g_457), (**g_302), ((*l_493) = 0x36F0L));

                ;
            }
            else
            {
                unsigned l_512[4][10][3] = {{{0x52BA17DCL,0x8892AC53L,0x8892AC53L},{0xDE1EBE8AL,1UL,4294967293UL},{0UL,0x25EEDEFEL,0xDE1EBE8AL},{0x7180E244L,0UL,0x317FB293L},{0xA08C137DL,0UL,0x52BA17DCL},{0x6D113772L,0UL,0UL},{0xCA9A8349L,0x25EEDEFEL,0xACDC5553L},{4294967292UL,1UL,0xFF31C4A5L},{0xD4D6729FL,0x8892AC53L,0xAD5DA591L},{0x8892AC53L,0UL,0UL}},{{0x8892AC53L,0x6D113772L,4294967292UL},{0xD4D6729FL,0xD4D6729FL,0xA08C137DL},{4294967292UL,0x59EC7659L,0UL},{0xCA9A8349L,0xFBDA3A3EL,0UL},{0x6D113772L,0UL,1UL},{0xA08C137DL,0xCA9A8349L,0UL},{0x7180E244L,4294967293UL,0UL},{0UL,1UL,0xA08C137DL},{0xDE1EBE8AL,0UL,4294967292UL},{0x52BA17DCL,0xACDC5553L,0UL}},{{0x59EC7659L,0xACDC5553L,0xAD5DA591L},{0xFF31C4A5L,0UL,0xFF31C4A5L},{7UL,1UL,0xACDC5553L},{7UL,4294967293UL,0UL},{1UL,0xCA9A8349L,0x52BA17DCL},{0xACDC5553L,0UL,0x317FB293L},{1UL,0xFBDA3A3EL,0xDE1EBE8AL},{7UL,0x59EC7659L,4294967293UL},{7UL,0xD4D6729FL,0x8892AC53L},{0xFF31C4A5L,0x6D113772L,1UL}},{{0x59EC7659L,0UL,1UL},{0x52BA17DCL,0x8892AC53L,0xFF31C4A5L},{0x317FB293L,7UL,0xCA9A8349L},{0xD4D6729FL,7UL,0x317FB293L},{0x25EEDEFEL,1UL,0xAD5DA591L},{0x5034025AL,0xACDC5553L,4UL},{0x52BA17DCL,1UL,0x59EC7659L},{0x6D113772L,7UL,0x8892AC53L},{0x54011A1AL,7UL,0UL},{0xDE1EBE8AL,0xFF31C4A5L,0xFBDA3A3EL}}};
                int i, j, k;
                (*g_417) = (p_21 , (((**g_302) > 0xB7L) != ((*g_451) = func_22(l_512[3][8][1]))));

                ;
                l_514 = l_513;
                if (p_21)
                    break;
                (*g_417) = (*g_123);
            }
        }

        ;
        ;
        (*g_417) = ((p_21 != (*l_484)) & func_22((safe_lshift_func_uint16_t_u_u(func_22((*g_409)), 15))));

        ;
    }

    ;

    return (**g_457);


}







static int func_22(unsigned p_23)
{
    unsigned l_476[6][9] = {{0UL,0xE6296A7DL,0xD2269338L,0UL,0xD997F564L,0xEC1C26C5L,0xE6296A7DL,1UL,0x31EB8E84L},{0xEC1C26C5L,0xD997F564L,0UL,0xD2269338L,0xE6296A7DL,0UL,0xF3338A9EL,0xF3338A9EL,0UL},{4294967295UL,4UL,0x9770A496L,4UL,4294967295UL,4294967292UL,0xF3338A9EL,0x9770A496L,0UL},{0x31EB8E84L,0x5965E3F5L,4294967295UL,4294967292UL,8UL,0x31EB8E84L,0xE6296A7DL,0x49133440L,1UL},{0x73D39B78L,4294967295UL,0xD997F564L,0x49133440L,0UL,4294967292UL,4294967292UL,0UL,0x49133440L},{0xD2269338L,0xD174DA7EL,0xD2269338L,0x31EB8E84L,0UL,0UL,0xD174DA7EL,1UL,4UL}};
    int *l_477 = &g_2[0];
    short *l_480 = &g_219[0][0][0];
    short *l_481 = &g_158;
    unsigned l_482 = 0x5B97714CL;
    int i, j;
    l_477 = ((*g_458) = func_33((l_476[1][4] , l_477), (safe_add_func_uint16_t_u_u(p_23, ((*l_481) = ((*l_480) = ((*g_409) <= 0xE6EC0815L))))), l_482));

    ;
    (*g_458) = l_477;
    return (*l_477);
}







static char func_26(unsigned short p_27, int * p_28, int * p_29, int * p_30)
{
    char **l_473[2][9][7] = {{{(void*)0,&g_303,(void*)0,&g_303,(void*)0,&g_303,&g_303},{&g_303,&g_303,&g_303,&g_303,&g_303,&g_303,(void*)0},{(void*)0,&g_303,&g_303,&g_303,&g_303,&g_303,(void*)0},{&g_303,&g_303,&g_303,&g_303,&g_303,(void*)0,(void*)0},{&g_303,&g_303,(void*)0,&g_303,&g_303,&g_303,&g_303},{&g_303,&g_303,&g_303,&g_303,(void*)0,(void*)0,&g_303},{(void*)0,&g_303,&g_303,(void*)0,&g_303,&g_303,&g_303},{&g_303,&g_303,&g_303,&g_303,&g_303,&g_303,&g_303},{&g_303,&g_303,&g_303,&g_303,&g_303,&g_303,&g_303}},{{&g_303,&g_303,&g_303,(void*)0,&g_303,&g_303,&g_303},{(void*)0,&g_303,&g_303,&g_303,&g_303,(void*)0,&g_303},{&g_303,&g_303,(void*)0,&g_303,&g_303,&g_303,&g_303},{(void*)0,&g_303,&g_303,&g_303,(void*)0,&g_303,&g_303},{&g_303,&g_303,&g_303,&g_303,&g_303,&g_303,&g_303},{&g_303,&g_303,&g_303,&g_303,&g_303,(void*)0,(void*)0},{&g_303,&g_303,&g_303,&g_303,&g_303,(void*)0,&g_303},{&g_303,&g_303,&g_303,(void*)0,&g_303,&g_303,&g_303},{&g_303,(void*)0,(void*)0,&g_303,&g_303,&g_303,&g_303}}};
    int l_474 = 0x48D43D2CL;
    int *l_475 = &g_72;
    int i, j, k;
    (**g_458) = (~(((l_473[1][4][4] == l_473[0][1][4]) | (l_474 & l_474)) < l_474));
    l_475 = ((*g_458) = l_475);

    ;
    return p_27;
}







static int * func_33(int * p_34, char p_35, short p_36)
{
    unsigned short **l_340 = (void*)0;
    int *l_341 = &g_72;
    int **l_342 = &g_123;
    int *l_350[8][5] = {{&g_2[0],&g_2[0],&g_72,&g_72,&g_2[0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2[0],&g_72,&g_72,&g_2[0],&g_2[0]},{&g_72,(void*)0,&g_72,(void*)0,&g_72},{&g_2[0],&g_2[0],&g_72,&g_72,&g_2[0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2[0],&g_72,&g_72,&g_2[0],&g_2[0]},{&g_72,(void*)0,&g_72,(void*)0,&g_72}};
    int *l_437[4][1][9] = {{{&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70}},{{&g_70,(void*)0,&g_70,(void*)0,&g_70,(void*)0,&g_70,(void*)0,&g_70}},{{&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70}},{{&g_70,(void*)0,&g_70,(void*)0,&g_70,(void*)0,&g_70,(void*)0,&g_70}}};
    unsigned **l_442 = &g_409;
    int i, j, k;
    (*l_342) = &g_70;

    ;
    for (g_193 = 0; (g_193 < 51); g_193 = safe_add_func_int16_t_s_s(g_193, 9))
    {
        unsigned char l_349 = 255UL;
        int l_351 = 0L;
        unsigned l_371[5][4][7] = {{{4294967290UL,4294967286UL,4294967290UL,7UL,4294967286UL,0x7F6176D4L,0x7F6176D4L},{0xF5BB7B7CL,0xFB30D3B8L,0xBC22809DL,0xFB30D3B8L,0xF5BB7B7CL,0UL,0x8710AFC9L},{0x58F84376L,0x7F6176D4L,0x45772504L,0x58F84376L,0x45772504L,0x7F6176D4L,0x58F84376L},{0x51508238L,0x648D094BL,1UL,2UL,0x8710AFC9L,2UL,1UL}},{{0x58F84376L,0x58F84376L,4294967286UL,7UL,4294967290UL,4294967286UL,4294967290UL},{0xF5BB7B7CL,0xA309E457L,1UL,1UL,4294967293UL,0x378628B0L,0xF5BB7B7CL},{0x4021FD4FL,4294967290UL,0x45772504L,0x45772504L,4294967290UL,0x4021FD4FL,0x7F6176D4L},{0x2A39A75BL,1UL,0xBC22809DL,0x648D094BL,0x8710AFC9L,0UL,0xF5BB7B7CL}},{{4294967290UL,0x7F6176D4L,0x4021FD4FL,4294967290UL,0x45772504L,0x45772504L,4294967290UL},{0x51508238L,1UL,0x51508238L,2UL,0xF5BB7B7CL,0xA309E457L,1UL},{7UL,4294967290UL,4294967286UL,4294967290UL,7UL,4294967286UL,0x58F84376L},{0x8710AFC9L,0xA309E457L,4294967293UL,0x648D094BL,4294967293UL,0xA309E457L,0x8710AFC9L}},{{0x4021FD4FL,0x58F84376L,0x7F6176D4L,0x45772504L,0x58F84376L,0x45772504L,0x7F6176D4L},{0x8710AFC9L,0x648D094BL,0xBC22809DL,1UL,0x2A39A75BL,0UL,0x2A39A75BL},{7UL,0x7F6176D4L,0x4021FD4FL,0x58F84376L,0x7F6176D4L,0x45772504L,0x58F84376L},{4294967293UL,1UL,1UL,0xA309E457L,0xF5BB7B7CL,2UL,0x51508238L}},{{7UL,0x58F84376L,0x91ECEF29L,4294967290UL,4294967290UL,0x91ECEF29L,0x58F84376L},{0xF5BB7B7CL,0x378628B0L,4294967293UL,1UL,1UL,0xA309E457L,0xF5BB7B7CL},{0x45772504L,0x58F84376L,0x45772504L,0x7F6176D4L,0x58F84376L,0x4021FD4FL,0x4021FD4FL},{0x8710AFC9L,1UL,0x51F54939L,1UL,0x8710AFC9L,0x64FD3EC5L,0x2A39A75BL}}};
        char l_382 = 2L;
        int l_392 = 0x9CF4BC85L;
        int i, j, k;
    }
    return p_34;


}







static int * func_37(unsigned p_38, int * p_39, unsigned char p_40, int * p_41)
{
    unsigned short l_52 = 65533UL;
    int l_68 = 1L;
    int *l_76[3][4][10] = {{{&l_68,(void*)0,&g_72,&g_72,(void*)0,(void*)0,&g_72,(void*)0,&g_2[0],&l_68},{&g_2[0],&g_72,(void*)0,&g_72,(void*)0,&g_2[0],(void*)0,(void*)0,&g_70,&g_70},{(void*)0,(void*)0,&g_72,&g_72,&l_68,(void*)0,(void*)0,(void*)0,&g_2[0],&g_72},{&g_2[0],&g_2[0],&g_70,(void*)0,&g_70,(void*)0,&g_72,&l_68,&l_68,&g_72}},{{&l_68,&g_2[0],(void*)0,(void*)0,&g_2[0],&l_68,(void*)0,&g_2[0],(void*)0,&g_2[0]},{&g_2[0],&l_68,&g_2[0],&g_72,(void*)0,(void*)0,&g_2[0],&l_68,&l_68,&l_68},{(void*)0,&l_68,&l_68,&g_70,(void*)0,&g_2[0],&l_68,&g_2[0],&l_68,(void*)0},{&g_2[0],&l_68,&g_2[0],&l_68,(void*)0,(void*)0,&l_68,&g_2[0],(void*)0,&g_2[0]}},{{(void*)0,(void*)0,&l_68,(void*)0,(void*)0,&l_68,&g_70,&l_68,&g_72,&l_68},{(void*)0,&l_68,&l_68,(void*)0,&l_68,&l_68,(void*)0,(void*)0,&g_2[0],&g_2[0]},{&l_68,&g_70,&g_2[0],&g_2[0],(void*)0,(void*)0,&g_2[0],(void*)0,(void*)0,(void*)0},{&g_72,&g_70,&l_68,&g_72,&g_2[0],&g_2[0],(void*)0,&g_2[0],(void*)0,&l_68}}};
    char *l_82[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned l_83 = 0xA87E9A86L;
    int l_88 = 0x32714BD4L;
    int l_93 = 0L;
    unsigned char *l_164 = &g_66[3][3];
    unsigned char **l_163 = &l_164;
    unsigned short **l_212 = (void*)0;
    unsigned ***l_251 = (void*)0;
    short l_337[4][3][3] = {{{(-9L),(-9L),(-9L)},{(-1L),(-3L),(-1L)},{(-9L),(-9L),(-9L)}},{{(-1L),(-3L),(-1L)},{(-9L),(-9L),(-9L)},{(-1L),(-3L),(-1L)}},{{(-9L),(-9L),(-9L)},{(-1L),(-3L),(-1L)},{(-9L),(-9L),(-9L)}},{{(-1L),(-3L),(-1L)},{(-9L),(-9L),(-9L)},{(-1L),(-3L),(-1L)}}};
    int i, j, k;
    for (p_38 = (-10); (p_38 == 27); ++p_38)
    {
        short l_67 = 0x4A3CL;
        int **l_77 = &l_76[0][0][0];
        for (p_40 = 0; (p_40 < 31); p_40++)
        {
            short l_53 = 0L;
            char *l_60[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int l_62 = 3L;
            unsigned short *l_63 = &l_52;
            unsigned char *l_64 = (void*)0;
            unsigned char *l_65 = &g_66[3][3];
            int *l_69 = &g_70;
            int *l_71 = &g_72;
            int i;
            g_73 = ((safe_add_func_int32_t_s_s((l_52 <= (p_38 && g_2[0])), ((l_52 == l_52) || l_53))) , ((*l_71) = ((*l_69) = (safe_rshift_func_int8_t_s_s((l_68 = (((*l_65) = (((safe_sub_func_int32_t_s_s((((*l_63) = (((safe_add_func_int8_t_s_s((((l_62 = p_38) <= p_38) || g_2[0]), 0xFEL)) & 0L) <= p_40)) <= p_40), g_61[2])) & 0x60L) != l_53)) || l_67)), l_53)))));
            for (l_67 = 0; (l_67 < (-7)); l_67--)
            {
                return p_41;


            }
            if (g_61[3])
                break;
        }
        g_70 = ((void*)0 == &g_42);
        (*l_77) = (p_40 , &g_2[0]);
        g_72 = 0x6C5B50A7L;
    }
    if ((safe_sub_func_int32_t_s_s((g_66[1][0] > (l_83 = (&p_41 == &l_76[0][0][0]))), ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((((p_38 ^ g_61[3]) , (((((l_88 >= (safe_mod_func_uint32_t_u_u(p_38, (g_66[3][3] , (safe_lshift_func_int8_t_s_s((l_93 ^ 65535UL), 2)))))) < p_40) > g_72) , g_66[4][5]) && p_40)) | p_38), g_70)) & 0UL), (*p_39))) > (-10L)))))
    {
        int **l_94 = &l_76[0][1][6];
        unsigned *l_95[4][3] = {{(void*)0,(void*)0,&g_96},{&g_96,&g_96,&g_96},{&g_96,&g_96,&g_96},{&g_96,&g_96,&g_96}};
        unsigned short *l_113 = &l_52;
        int l_114 = 0xBEEF8982L;
        unsigned l_115 = 0x5D0453C8L;
        unsigned **l_155 = &l_95[3][1];
        unsigned char *l_236 = (void*)0;
        char **l_301 = (void*)0;
        int i, j;
        (*l_94) = &g_72;
        (*l_94) = (*l_94);
        if ((g_116[1] = (p_38 || (((g_96 = g_61[4]) && (g_72 = (g_70 = (safe_rshift_func_int8_t_s_s((((l_114 = (g_72 == (l_115 = (g_96 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(p_38, (safe_lshift_func_int8_t_s_s(p_40, 3)))), (0x0E0461AFL >= ((((safe_lshift_func_uint8_t_u_u(g_42, (((((*l_113) = (255UL >= (safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(p_40, 15)) , p_38), g_42)))) , (void*)0) == (void*)0) ^ g_73))) > p_38) > p_38) <= l_114)))), p_38)))))) ^ g_61[3]) == g_72), 6))))) <= (-1L)))))
        {
            int l_119 = 0x1F1203DBL;
            unsigned **l_124 = &l_95[1][1];
            int *l_126 = &l_88;
            int l_138 = 1L;
            unsigned short l_141 = 0x44C7L;
            char l_147 = 1L;
            unsigned short l_148 = 65535UL;
            unsigned l_174 = 0x55C8574BL;
            if (((safe_sub_func_int16_t_s_s(g_2[0], (p_38 == l_119))) >= p_40))
            {
                int *l_122 = &g_2[0];
                (*l_94) = &g_2[0];
                for (l_52 = (-26); (l_52 == 58); l_52++)
                {
                    (*l_94) = &g_2[0];
                    g_123 = l_122;

                    ;
                    for (l_88 = 1; (l_88 <= 4); l_88 += 1)
                    {
                        unsigned ***l_125 = &l_124;
                        (*l_94) = (void*)0;
                        g_123 = ((*l_94) = p_39);

                        ;
                        (*l_125) = l_124;
                        return &g_70;


                    }
                }

                ;
            }
            else
            {
                (*g_123) = 0x9DC94FE3L;
                (*l_94) = p_41;


                l_126 = &g_2[0];

                ;
                (*l_94) = &g_72;
            }


            ;
            ;
            if ((*p_41))
            {
                char l_133 = (-1L);
                unsigned char *l_136 = (void*)0;
                unsigned char *l_137 = &g_66[3][3];
                unsigned **l_156[7] = {&l_95[3][1],&l_95[3][1],&l_95[3][1],&l_95[3][1],&l_95[3][1],&l_95[3][1],&l_95[3][1]};
                unsigned char ***l_165 = (void*)0;
                unsigned char ***l_166 = &l_163;
                int i;
                if (((safe_add_func_int16_t_s_s(p_40, ((p_40 >= 0xE06FL) != (safe_add_func_uint8_t_u_u((g_2[0] < (g_116[0] == (p_40 & (safe_add_func_int16_t_s_s(0L, l_133))))), ((*l_137) = (safe_lshift_func_uint8_t_u_s(g_42, p_38)))))))) == (*g_123)))
                {
                    int l_144 = 0x2F77A17BL;
                    l_138 = l_133;
                    (*l_94) = p_39;
                    g_72 = (+(*g_123));
                    if ((((safe_sub_func_uint8_t_u_u((((g_70 = (l_141 == ((((l_133 < (l_144 = (safe_lshift_func_uint8_t_u_u(p_40, p_38)))) != (*l_126)) , g_61[3]) == (p_38 <= (g_73 || (safe_sub_func_int16_t_s_s(p_38, p_40))))))) | (-1L)) || l_147), g_2[0])) & l_148) >= 1L))
                    {
                        return &g_2[0];


                    }
                    else
                    {
                        return p_41;


                    }
                }
                else
                {
                    short *l_157 = &g_158;
                    int l_159[5][5];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_159[i][j] = 1L;
                    }
                    g_70 = ((safe_unary_minus_func_uint8_t_u(p_40)) & (g_96 , (g_61[3] = ((l_133 == l_133) | ((p_40 , (p_38 != 0x55D9L)) > (safe_unary_minus_func_int32_t_s((g_61[0] || (safe_lshift_func_uint16_t_u_s(p_38, g_72))))))))));
                    g_70 = (safe_lshift_func_int16_t_s_s(((*l_157) = (l_155 == l_156[6])), 6));
                    l_159[0][0] = (*g_123);
                    for (l_68 = (-28); (l_68 >= (-21)); l_68 = safe_add_func_int8_t_s_s(l_68, 8))
                    {
                        return p_41;


                    }
                }
                for (p_40 = 0; (p_40 <= 9); p_40 += 1)
                {
                    int *l_162 = &g_70;
                    return l_162;


                }
                (*l_166) = l_163;
            }
            else
            {
                (*l_94) = &g_2[0];
            }
            for (l_119 = 0; (l_119 <= 9); l_119 += 1)
            {
                unsigned l_175 = 0UL;
                int l_179[10][7][3] = {{{(-8L),6L,1L},{0x739138BCL,0xFE4C292AL,1L},{0L,(-1L),1L},{1L,0xEF69FDC4L,0x3FE31C6BL},{0xEF69FDC4L,3L,0L},{0x1E83D15DL,0L,7L},{0xD1322C40L,9L,0x14D0C5BBL}},{{(-1L),0x5D855D59L,0x29D880B6L},{9L,0x9D4EA33CL,1L},{0L,0xF25E2EDCL,5L},{0L,0xA6FFE6D5L,(-1L)},{9L,0L,0L},{(-1L),0L,0xDD4E207EL},{0xD1322C40L,(-5L),1L}},{{0x1E83D15DL,6L,0x9CC71544L},{0xEF69FDC4L,0x4FCCDD41L,1L},{1L,0x3FE31C6BL,0L},{0L,0xA6FFE6D5L,(-6L)},{0x739138BCL,0L,0L},{(-10L),1L,0xAEFE7210L},{0xA12F1922L,0x3E5C67DEL,1L}},{{0L,0L,(-1L)},{(-10L),(-8L),(-6L)},{0xDD4E207EL,1L,(-1L)},{1L,0xB9FED0C5L,(-5L)},{0xD1322C40L,0xDD4E207EL,(-1L)},{(-10L),2L,(-6L)},{0xFAC30EB2L,1L,(-1L)}},{{0xA6FFE6D5L,1L,1L},{0x7CBEC5B9L,0x5B5CE67DL,0xAEFE7210L},{1L,1L,1L},{1L,0xFE4C292AL,0L},{0xF674298DL,1L,1L},{(-8L),0xCDCC4997L,0x5D855D59L},{0x29D880B6L,(-8L),(-1L)}},{{1L,(-5L),(-1L)},{(-10L),(-2L),(-8L)},{1L,0xA6FFE6D5L,0x1F329292L},{(-1L),(-10L),(-8L)},{0xF674298DL,2L,7L},{7L,2L,0x1E83D15DL},{0x5B5CE67DL,(-10L),1L}},{{1L,0xA6FFE6D5L,0L},{0xB9FED0C5L,(-2L),0x3DB778E5L},{1L,(-5L),1L},{0x7586884AL,(-8L),0xA6FFE6D5L},{0xD1322C40L,0xCDCC4997L,1L},{0L,1L,0x1E83D15DL},{(-2L),0xFE4C292AL,(-1L)}},{{1L,1L,0L},{(-8L),0x5B5CE67DL,0x14D0C5BBL},{0xF674298DL,0L,0xF674298DL},{0xFE4C292AL,3L,0x9C45FBFBL},{0x74C4BF40L,0xB9FED0C5L,0x4FCCDD41L},{0xA536D6C3L,0xD1322C40L,1L},{7L,1L,0x641DE24AL}},{{0xA536D6C3L,8L,0x5D855D59L},{0x74C4BF40L,2L,0x9CC71544L},{0xFE4C292AL,1L,0x36154488L},{0xF674298DL,0L,(-1L)},{0xE7CE54ACL,9L,0x4FCCDD41L},{0L,1L,0x29D880B6L},{(-1L),5L,0xF25E2EDCL}},{{1L,0xA536D6C3L,0x3FE31C6BL},{0L,(-1L),0x58F199D2L},{0xFE4C292AL,0L,(-8L)},{(-10L),3L,0L},{1L,0xD1322C40L,0x3E5C67DEL},{(-1L),0x36154488L,(-2L)},{0x57C3E86AL,5L,0x5D855D59L}}};
                int i, j, k;
                for (g_72 = 0; (g_72 <= 2); g_72 += 1)
                {
                    int l_171 = 0x73037A74L;
                    int i, j;
                    (*l_94) = (g_123 = l_95[(g_72 + 1)][g_72]);

                    ;
                    for (l_141 = 0; (l_141 <= 9); l_141 += 1)
                    {
                        unsigned short *l_167 = (void*)0;
                        int l_170 = 0x672AF336L;
                        if ((*l_126))
                            break;
                        g_70 = (((*p_39) >= (l_167 == (void*)0)) < (safe_rshift_func_uint16_t_u_s(((g_66[3][3] & ((((((0x1B42956FL > ((g_70 < l_170) || (((((l_171 != (((l_170 <= g_116[4]) >= 0xDBL) || g_2[0])) , p_38) == (*l_126)) | p_38) <= g_72))) || g_2[0]) , l_170) ^ g_116[1]) < 0x2AL) > 1UL)) <= l_170), 8)));
                        (*l_94) = &l_138;
                        if ((*p_39))
                            break;
                    }
                    if (((safe_add_func_uint8_t_u_u(l_171, p_40)) , (*p_39)))
                    {
                        g_70 = (g_72 ^ 0x66197A97L);
                        if (l_174)
                            continue;
                        (*l_94) = &g_2[0];
                        l_175 = 0x214E0A7EL;
                    }
                    else
                    {
                        int l_178[6] = {0x7DADBB84L,9L,9L,0x7DADBB84L,9L,9L};
                        int i;
                        l_171 = (safe_mod_func_int32_t_s_s((*p_39), ((((((l_179[1][4][1] = (l_175 && l_178[3])) == p_38) < 2UL) < ((p_40 , (((*p_39) < (*l_126)) >= 0xD8998BE7L)) == l_178[3])) >= l_175) | g_66[4][1])));
                        l_138 = l_171;
                    }
                    l_171 = (*p_41);
                }
                for (g_70 = 9; (g_70 >= 0); g_70 -= 1)
                {
                    for (p_40 = 0; (p_40 <= 9); p_40 += 1)
                    {
                        (*l_94) = &l_138;
                    }
                    (*l_94) = p_39;
                    for (l_141 = 1; (l_141 <= 9); l_141 += 1)
                    {
                        l_114 = (*p_39);
                        p_39 = &g_2[0];

                        ;
                    }
                }
            }


            ;
            for (l_68 = 0; (l_68 <= 26); ++l_68)
            {
                unsigned **l_194 = &l_95[1][0];
                l_126 = &l_138;

                ;
                for (l_115 = 0; (l_115 == 21); l_115 = safe_add_func_int16_t_s_s(l_115, 8))
                {
                    unsigned *l_197 = &g_96;
                    unsigned short ***l_200 = &g_198[2];
                    for (l_174 = 0; (l_174 <= 6); l_174 += 1)
                    {
                        int l_184 = 1L;
                        unsigned char *l_191 = (void*)0;
                        unsigned char *l_192 = &g_193;
                        unsigned ***l_195 = &l_124;
                        int i, j;
                        l_184 = g_66[l_174][(l_174 + 1)];
                        g_70 = ((*l_126) = ((g_96 = 1UL) , ((safe_sub_func_int32_t_s_s(g_66[l_174][(l_174 + 1)], (&g_116[2] == ((g_96 = ((((p_38 , (g_96 , p_40)) >= ((-7L) || (safe_mod_func_int32_t_s_s((((safe_mod_func_uint8_t_u_u(g_116[1], ((+((*l_192) = g_66[3][3])) , g_72))) == p_38) < 0x7025L), 0xD901D547L)))) != 0x8C33L) <= 0xAF350A2BL)) , &l_147)))) && 0x6F70DEFBL)));
                        (*l_195) = l_194;
                        if ((*p_41))
                            continue;
                    }
                    (*l_94) = (((g_196 = (g_96 = p_40)) && (&g_96 == l_197)) , &g_2[0]);
                    (*l_200) = g_198[2];
                }
            }

            ;
        }
        else
        {
            unsigned l_205[5] = {0x582D2ECEL,0x582D2ECEL,0x582D2ECEL,0x582D2ECEL,0x582D2ECEL};
            unsigned short **l_214 = &g_199[3];
            int i;
            for (p_40 = 6; (p_40 <= 32); ++p_40)
            {
                char l_209 = 0x9FL;
                for (l_83 = 0; (l_83 <= 4); l_83 += 1)
                {
                    for (p_38 = 0; (p_38 <= 4); p_38 += 1)
                    {
                        int **l_203 = (void*)0;
                        int **l_204 = &g_123;
                        int i;
                        (*l_204) = ((*l_94) = p_41);


                        l_205[4] = g_116[p_38];
                        (*l_204) = p_41;
                    }
                }
                g_72 = (*g_123);
                (*l_94) = (*l_94);
                if ((g_66[1][3] > g_61[4]))
                {
                    for (l_114 = 0; (l_114 == 3); l_114 = safe_add_func_int32_t_s_s(l_114, 4))
                    {
                        unsigned l_208[8][3][9] = {{{3UL,8UL,0UL,0xC2EA9A85L,1UL,0xCF7E2846L,1UL,4UL,5UL},{0xE560F239L,4294967294UL,4294967290UL,0xD90A56F7L,4294967295UL,0xA62254FAL,1UL,1UL,4294967294UL},{0xA0A5BA7DL,4294967290UL,0x36717054L,0x608B5A75L,0x608B5A75L,0x36717054L,4294967290UL,0xA0A5BA7DL,1UL}},{{0x47C76043L,0x4C4CC263L,0x068A9C15L,0xEAA8DCA4L,0UL,1UL,9UL,0UL,0x608B5A75L},{4UL,1UL,0xCF7E2846L,1UL,0xC2EA9A85L,0UL,8UL,3UL,0x0262F688L},{0x746226BAL,0x2DD10499L,2UL,0x7654CDD8L,0xE560F239L,4294967295UL,4294967293UL,0xB9E0243BL,8UL}},{{0xD90A56F7L,0UL,0x2DD10499L,0UL,0xB9E0243BL,0x47C76043L,0x6749929EL,0x36717054L,4294967295UL},{4294967295UL,0UL,9UL,4UL,0x7654CDD8L,3UL,3UL,0x7654CDD8L,4UL},{0x6749929EL,0x2DD10499L,0x6749929EL,0xA0A5BA7DL,9UL,1UL,0xEAA8DCA4L,0xD90A56F7L,0x2DD10499L}},{{8UL,1UL,0xEAA8DCA4L,4294967293UL,0x3A5CBA99L,0x068A9C15L,0xD90A56F7L,8UL,0xCF7E2846L},{1UL,0x4C4CC263L,8UL,0xA0A5BA7DL,4294967295UL,4UL,0xBF066108L,0x47C76043L,0x608B5A75L},{0UL,0x36717054L,0UL,4UL,0x99CC1797L,0xA62254FAL,8UL,1UL,0xD90A56F7L}},{{0xB9E0243BL,8UL,0UL,0UL,0xE560F239L,0xA62254FAL,1UL,0xC2EA9A85L,0xC2EA9A85L},{0x0262F688L,4UL,0x2DD10499L,0x7654CDD8L,0x2DD10499L,1UL,0UL,0UL,0UL},{0xD90A56F7L,1UL,3UL,1UL,1UL,4294967295UL,0x608B5A75L,0x0262F688L,0xE560F239L}},{{4294967295UL,0x3A5CBA99L,0UL,0UL,0xA0A5BA7DL,0xEAA8DCA4L,0x7654CDD8L,0UL,0x3A5CBA99L},{2UL,1UL,0xA62254FAL,3UL,0xEAA8DCA4L,4294967295UL,4294967295UL,2UL,0x47C76043L},{1UL,0UL,4294967295UL,0x608B5A75L,0xCF7E2846L,0xCC728F5AL,4294967294UL,1UL,0x6749929EL}},{{1UL,3UL,0UL,0xCC728F5AL,1UL,1UL,1UL,0xCC728F5AL,0UL},{2UL,2UL,0xEAA8DCA4L,0xCF7E2846L,0x99CC1797L,0x36717054L,0xA0A5BA7DL,1UL,0xBF066108L},{4294967295UL,4294967290UL,9UL,0UL,4294967293UL,1UL,0UL,1UL,0xCC728F5AL}},{{0xD90A56F7L,1UL,0xEAA8DCA4L,4294967290UL,0UL,0x7654CDD8L,4294967295UL,0x0262F688L,1UL},{0UL,0UL,0UL,4294967295UL,3UL,0xEAA8DCA4L,0x4C4CC263L,4UL,0UL},{0xBF066108L,0UL,4294967295UL,3UL,3UL,0UL,3UL,0xBF066108L,3UL}}};
                        int i, j, k;
                        l_208[2][0][0] = (!(*p_39));
                    }
                    if (l_209)
                        continue;
                    for (g_70 = 2; (g_70 <= 6); g_70 += 1)
                    {
                        unsigned short ***l_213 = &g_198[2];
                        char *l_216 = &g_116[1];
                        char **l_215 = &l_216;
                        int i, j;
                        g_219[0][0][0] = ((safe_sub_func_int8_t_s_s((g_66[g_70][g_70] < ((l_209 , ((g_72 = (g_70 , ((g_96 = p_38) && (((*l_213) = l_212) != l_214)))) , l_82[(g_70 + 1)])) == ((*l_215) = l_82[g_70]))), (safe_mod_func_int8_t_s_s(1L, g_158)))) && p_40);

                        ;
                    }
                    (*l_94) = p_41;
                }
                else
                {
                    if ((*g_123))
                        break;
                }
            }



        }



        for (l_88 = 0; (l_88 >= 0); l_88++)
        {
            unsigned l_224 = 4294967295UL;
            int l_226 = 1L;
            int l_233 = 3L;
            unsigned char *l_237 = &g_66[3][3];
            int l_238 = 0L;
            unsigned char l_247 = 0xBBL;
            unsigned short l_300 = 65532UL;
            if ((*p_41))
            {
                int l_225 = 1L;
                int l_231 = 0x98514CCEL;
                int *l_248 = &g_73;
                unsigned ***l_249 = &l_155;
                unsigned ****l_250 = &l_249;
                unsigned ****l_252 = &l_251;
                l_225 = (safe_rshift_func_int8_t_s_u(l_224, ((g_61[3] = (l_226 = ((l_225 != 0xDBL) == p_40))) < (l_233 = ((((safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(0x413EBC94L, (l_231 = (*p_41)))), (*p_39))) , (((0L != (((safe_unary_minus_func_int16_t_s(((*p_39) == l_225))) >= l_225) & 0UL)) , 0xDB87A818L) , g_70)) < p_40) , p_38)))));
                if ((((l_231 = ((((g_219[0][0][0] != l_225) , ((*l_248) = ((safe_add_func_uint32_t_u_u(((p_40 == ((l_236 == l_237) , g_66[6][6])) <= ((l_238 < (safe_sub_func_int16_t_s_s(((l_225 < (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u(l_247, 0x017D1686L)) , 0x3FL) <= g_96) != l_225), g_96)), 3))) | l_225), p_38))) && p_40)), (-1L))) , 0x23A682E6L))) , g_42) & g_61[4])) , (*p_39)) ^ 0x9598FA45L))
                {
                    return &g_70;


                }
                else
                {
                    (*l_94) = &g_70;
                }
                if (((l_238 , ((*l_250) = l_249)) != ((*l_252) = l_251)))
                {
                    short l_283[6][2] = {{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L}};
                    int l_286 = 0x53A8C210L;
                    int *l_289[2][3] = {{&l_286,&l_286,&l_286},{&l_88,&l_88,&l_88}};
                    int i, j;
                    for (p_40 = 0; (p_40 <= 0); p_40 += 1)
                    {
                        int *l_270 = &l_226;
                        g_72 = (((((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_2[0], (safe_add_func_uint8_t_u_u(((l_247 && (safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((l_225 = (((safe_sub_func_int8_t_s_s(l_231, (safe_rshift_func_uint8_t_u_u(1UL, g_73)))) > ((((safe_add_func_int8_t_s_s(p_38, ((&g_96 != (g_269 , (*l_155))) || g_193))) , (*p_41)) <= g_66[3][3]) > p_40)) & l_226)), g_269)) & p_40) & l_238), p_38))) ^ (*p_39)), g_70)))), p_38)) | 2L) >= g_2[0]) < 0x09305815L) ^ l_231);
                        (*l_94) = l_270;
                        g_72 = (safe_lshift_func_uint8_t_u_u(0xC5L, (p_40 > ((safe_mod_func_int16_t_s_s(((l_225 = p_38) != g_2[0]), ((!(safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_40, (+(safe_add_func_uint32_t_u_u((((((safe_add_func_int8_t_s_s((l_283[5][1] , ((safe_unary_minus_func_uint8_t_u(((*l_270) && (safe_unary_minus_func_uint8_t_u(252UL))))) <= ((p_40 != l_283[2][0]) > p_38))), 252UL)) | p_40) != p_38) < g_158) == l_283[5][0]), p_38))))), p_38))) || g_116[1]))) < 0x752941ABL))));
                    }


                    l_286 = 0xF0F10777L;
                    for (g_193 = 0; (g_193 == 57); ++g_193)
                    {
                        l_289[1][2] = p_39;
                    }


                    for (g_73 = 15; (g_73 < (-9)); g_73 = safe_sub_func_int8_t_s_s(g_73, 5))
                    {
                        g_70 = l_226;
                    }
                }
                else
                {
                    (*l_94) = p_41;
                    (*l_94) = p_39;
                }


            }
            else
            {
                int *l_293[3];
                int **l_292 = &l_293[0];
                int *l_295 = &g_269;
                int **l_294 = &l_295;
                int i;
                for (i = 0; i < 3; i++)
                    l_293[i] = &l_238;
                g_72 = (((*l_292) = l_95[3][1]) != ((*l_294) = &g_73));


                ;
                if ((*p_41))
                    break;
            }


            l_233 = (((g_61[3] = (((((p_38 ^ p_38) > l_224) || (safe_sub_func_uint32_t_u_u((~(0xBB0CL < ((safe_rshift_func_uint16_t_u_u(l_238, ((*l_113) = 0x75DAL))) | (l_300 , p_40)))), ((l_226 = ((*g_303) = (((((l_301 != g_302) == 5L) , p_40) , 0UL) , p_38))) ^ p_38)))) , p_40) , p_38)) < l_233) || g_70);
            g_72 = (l_233 = (g_73 || (((safe_add_func_uint8_t_u_u(5UL, (safe_add_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(p_40, ((safe_lshift_func_int16_t_s_u(((void*)0 == &l_233), l_238)) != (safe_add_func_uint32_t_u_u((g_96 = (safe_add_func_int32_t_s_s((*p_39), 0L))), (*p_39)))))) , (*g_303)) ^ 0xA8L), (*p_41))))) <= l_224) <= 0xDBEEL)));
        }
    }
    else
    {
        int **l_316 = (void*)0;
        int **l_317 = (void*)0;
        int **l_318 = &g_123;
        int l_336[8][5] = {{0x7AE552D7L,0x17FFF112L,0x6F2F8CF5L,4L,0x9538BAE1L},{(-1L),0xFC9AD38FL,(-2L),0xBB3791D0L,0xE27B8753L},{0x46948929L,0x17FFF112L,0x17FFF112L,0x46948929L,0x51EF8290L},{0x11FBB4A3L,0x7AE552D7L,0x17FFF112L,0x6F2F8CF5L,4L},{0x6F2F8CF5L,1L,(-2L),(-1L),0x17FFF112L},{0xFC9AD38FL,0x11FBB4A3L,0x6F2F8CF5L,0x6F2F8CF5L,0x11FBB4A3L},{0x9538BAE1L,0xA693D1BCL,1L,0x46948929L,0x11FBB4A3L},{1L,0xE27B8753L,0x7AE552D7L,0xBB3791D0L,0x17FFF112L}};
        int i, j;
        (*l_318) = p_39;

        ;
        for (g_73 = 0; (g_73 > (-30)); g_73 = safe_sub_func_uint8_t_u_u(g_73, 8))
        {
            short *l_325 = &g_219[0][0][0];
            short *l_326[9][8][3] = {{{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,(void*)0},{&g_158,&g_158,&g_158},{(void*)0,&g_158,(void*)0},{&g_158,&g_158,(void*)0},{&g_158,&g_158,(void*)0}},{{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158},{(void*)0,&g_158,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158}},{{&g_158,&g_158,&g_158},{(void*)0,(void*)0,&g_158},{&g_158,(void*)0,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158},{(void*)0,&g_158,&g_158},{&g_158,&g_158,(void*)0},{&g_158,&g_158,&g_158}},{{&g_158,&g_158,&g_158},{(void*)0,&g_158,(void*)0},{&g_158,(void*)0,(void*)0},{&g_158,(void*)0,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158}},{{&g_158,&g_158,(void*)0},{(void*)0,&g_158,&g_158},{&g_158,&g_158,(void*)0},{&g_158,&g_158,&g_158},{&g_158,&g_158,(void*)0},{(void*)0,(void*)0,&g_158},{&g_158,(void*)0,(void*)0},{&g_158,&g_158,&g_158}},{{&g_158,&g_158,&g_158},{(void*)0,&g_158,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158},{(void*)0,&g_158,&g_158}},{{&g_158,&g_158,&g_158},{(void*)0,(void*)0,(void*)0},{&g_158,&g_158,&g_158},{(void*)0,(void*)0,&g_158},{&g_158,&g_158,&g_158},{&g_158,(void*)0,(void*)0},{&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158}},{{(void*)0,&g_158,&g_158},{&g_158,&g_158,(void*)0},{&g_158,&g_158,&g_158},{&g_158,(void*)0,&g_158},{&g_158,&g_158,&g_158},{&g_158,(void*)0,(void*)0},{&g_158,&g_158,&g_158},{&g_158,(void*)0,&g_158}},{{&g_158,&g_158,&g_158},{&g_158,(void*)0,&g_158},{(void*)0,&g_158,&g_158},{(void*)0,&g_158,&g_158},{&g_158,&g_158,&g_158},{(void*)0,&g_158,(void*)0},{&g_158,&g_158,(void*)0},{(void*)0,(void*)0,&g_158}}};
            int l_327 = 0xAE26F982L;
            int i, j, k;
            (*l_318) = ((safe_rshift_func_uint16_t_u_u(((*g_123) , p_38), 10)) , p_39);
            (*l_318) = (*l_318);
            l_337[3][1][1] = ((0xD1L & p_40) != (0x2904L != (((safe_mod_func_int32_t_s_s((((*g_303) | ((((*l_325) = p_38) != (l_327 = 0xF089L)) && (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((**l_318), 11)), ((**l_163) = (safe_add_func_int8_t_s_s(((~(*p_41)) == (safe_sub_func_int32_t_s_s((*g_123), 0x7146322EL))), p_38))))))) || l_336[1][3]), 4294967295UL)) && p_40) || 0xD7L)));
        }
    }



    return &g_72;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_66[i][j], "g_66[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_116[i], "g_116[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_219[i][j][k], "g_219[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_269, "g_269", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_361[i][j], "g_361[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_537[i][j][k], "g_537[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_635, "g_635", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_681[i], "g_681[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_751[i], "g_751[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_898, "g_898", print_hash_value);
    transparent_crc(g_1136, "g_1136", print_hash_value);
    transparent_crc(g_1244, "g_1244", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1443[i], "g_1443[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1478[i][j], "g_1478[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1509, "g_1509", print_hash_value);
    transparent_crc(g_1572, "g_1572", print_hash_value);
    transparent_crc(g_1631, "g_1631", print_hash_value);
    transparent_crc(g_1718, "g_1718", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
