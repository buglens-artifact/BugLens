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



static short g_8 = 0x290BL;
static int g_10 = 0xE41B66BAL;
static int *g_65[10][3][1] = {{{(void*)0},{&g_10},{&g_10}},{{(void*)0},{&g_10},{&g_10}},{{(void*)0},{&g_10},{&g_10}},{{(void*)0},{&g_10},{&g_10}},{{(void*)0},{&g_10},{&g_10}},{{(void*)0},{&g_10},{&g_10}},{{(void*)0},{&g_10},{&g_10}},{{(void*)0},{&g_10},{&g_10}},{{(void*)0},{&g_10},{&g_10}},{{(void*)0},{&g_10},{&g_10}}};
static int **g_64[3][3][10] = {{{(void*)0,(void*)0,&g_65[2][0][0],(void*)0,&g_65[6][2][0],&g_65[6][2][0],(void*)0,&g_65[2][0][0],(void*)0,(void*)0},{(void*)0,&g_65[6][2][0],&g_65[6][2][0],(void*)0,&g_65[6][2][0],(void*)0,&g_65[6][2][0],&g_65[2][0][0],&g_65[6][2][0],&g_65[6][2][0]},{(void*)0,&g_65[6][2][0],(void*)0,&g_65[6][2][0],&g_65[6][2][0],(void*)0,(void*)0,&g_65[6][2][0],&g_65[6][2][0],(void*)0}},{{&g_65[6][2][0],&g_65[6][2][0],(void*)0,(void*)0,&g_65[6][2][0],(void*)0,&g_65[6][2][0],(void*)0,&g_65[6][2][0],(void*)0},{(void*)0,&g_65[1][0][0],(void*)0,(void*)0,&g_65[2][0][0],(void*)0,&g_65[6][2][0],&g_65[6][2][0],(void*)0,&g_65[2][0][0]},{(void*)0,&g_65[6][2][0],&g_65[6][2][0],(void*)0,(void*)0,&g_65[6][2][0],(void*)0,&g_65[6][2][0],(void*)0,&g_65[6][2][0]}},{{(void*)0,&g_65[6][2][0],(void*)0,&g_65[6][2][0],(void*)0,&g_65[6][2][0],&g_65[6][2][0],(void*)0,(void*)0,&g_65[6][2][0]},{&g_65[6][2][0],&g_65[6][2][0],(void*)0,(void*)0,&g_65[6][2][0],&g_65[6][2][0],&g_65[2][0][0],&g_65[6][2][0],(void*)0,&g_65[6][2][0]},{&g_65[6][2][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_65[6][2][0],&g_65[2][0][0],&g_65[6][2][0],&g_65[6][2][0]}}};
static unsigned short g_99 = 65528UL;
static int g_191[10] = {0xE7687A61L,0L,0xE7687A61L,0xE7687A61L,0L,0xE7687A61L,0xE7687A61L,0L,0xE7687A61L,0xE7687A61L};
static char g_201[7][10] = {{0x73L,6L,0xEDL,(-3L),0x9CL,(-3L),0xEDL,6L,0x73L,4L},{6L,0xEDL,6L,0x73L,4L,4L,0x73L,6L,0xEDL,(-3L)},{0xEDL,0L,0L,0x73L,1L,(-3L),1L,0x73L,0L,0L},{(-1L),6L,(-3L),0L,1L,0x9CL,0x9CL,1L,0L,(-3L)},{1L,1L,0xEDL,(-1L),4L,0x9CL,0L,0x9CL,4L,(-1L)},{(-1L),6L,(-1L),0x9CL,0x73L,(-3L),0L,0L,(-3L),0x73L},{0xEDL,1L,1L,0xEDL,(-1L),4L,0x9CL,0L,0x9CL,4L}};
static short g_361 = 0x0009L;
static int *g_458 = (void*)0;
static int *g_549 = &g_191[6];
static int g_701[9] = {0x9463C004L,0x9463C004L,0x9463C004L,0x9463C004L,0x9463C004L,0x9463C004L,0x9463C004L,0x9463C004L,0x9463C004L};
static int *g_796[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int *g_894 = &g_10;
static char g_901[9] = {3L,3L,3L,3L,3L,3L,3L,3L,3L};
static int g_1023 = 6L;
static char g_1052 = (-7L);
static unsigned char g_1058 = 0xC4L;
static int *g_1109 = &g_1023;
static char g_1242 = 1L;



static int func_1(void);
static int * func_2(int p_3);
static int func_13(unsigned p_14, unsigned char p_15, int * p_16, int * p_17);
static int * func_18(int * p_19, int * p_20, int * p_21);
static int * func_22(unsigned p_23, int * p_24, unsigned short p_25, int * p_26, unsigned short p_27);
static int * func_29(char p_30, unsigned p_31, int * p_32);
static short func_40(unsigned p_41);
static unsigned char func_42(short p_43, unsigned p_44);
static int func_47(int * p_48, int * p_49, int p_50);
static int * func_51(unsigned short p_52, unsigned short p_53, int * p_54, int * p_55, int p_56);
static int func_1(void)
{
    int *l_9 = &g_10;
    int ***l_932 = &g_64[2][1][5];
    int *l_934[3];
    unsigned short l_963[10] = {65527UL,65527UL,0xBF4BL,65534UL,0xBF4BL,65527UL,65527UL,0xBF4BL,65534UL,0xBF4BL};
    unsigned l_967 = 0UL;
    unsigned char l_968 = 255UL;
    unsigned char l_970 = 0x16L;
    unsigned l_1002 = 0xECFDE133L;
    unsigned short l_1020 = 1UL;
    unsigned char l_1021 = 0xD2L;
    int *l_1024[3];
    int *l_1040 = &g_701[3];
    int l_1048 = 0xA31CAF53L;
    unsigned l_1057 = 1UL;
    int *l_1081 = &g_191[6];
    int *l_1087[6][8][4] = {{{&g_701[3],&g_1023,&g_701[8],&g_191[3]},{(void*)0,&g_701[7],&g_701[3],&g_701[7]},{&g_1023,&g_191[6],&g_1023,&g_701[2]},{&g_1023,&g_701[3],&g_10,&g_701[3]},{&g_701[3],&g_701[3],&g_701[8],&g_701[3]},{&g_701[3],&g_1023,&g_10,&g_191[2]},{&g_1023,&g_701[3],&g_1023,(void*)0},{&g_1023,&g_701[3],&g_701[3],&g_1023}},{{(void*)0,&g_1023,&g_701[3],&g_1023},{&g_191[2],&g_10,&g_1023,&g_701[3]},{&g_701[3],&g_701[8],&g_701[3],&g_701[3]},{&g_701[3],&g_10,&g_701[3],&g_1023},{&g_701[2],&g_1023,&g_191[6],&g_1023},{&g_701[7],&g_701[3],&g_701[7],(void*)0},{&g_191[3],&g_701[3],&g_701[1],&g_191[2]},{&g_1023,&g_1023,&g_191[2],&g_701[3]}},{{&g_701[3],&g_701[3],&g_191[2],&g_701[3]},{&g_1023,&g_701[3],&g_701[1],&g_701[2]},{&g_191[3],&g_191[6],&g_701[7],&g_701[7]},{&g_701[7],&g_701[7],&g_191[6],&g_191[3]},{&g_701[2],&g_701[1],&g_701[3],&g_1023},{&g_701[3],&g_191[2],&g_701[3],&g_701[3]},{&g_701[3],&g_191[2],&g_1023,&g_1023},{&g_191[2],&g_701[1],&g_701[3],&g_191[3]}},{{(void*)0,&g_701[7],(void*)0,&g_10},{&g_1023,&g_191[3],&g_701[3],&g_701[1]},{&g_701[8],&g_1023,&g_701[3],&g_701[3]},{(void*)0,&g_1023,&g_701[7],&g_701[3]},{(void*)0,&g_10,&g_701[3],&g_191[6]},{&g_701[8],&g_701[3],&g_701[3],&g_701[3]},{&g_1023,(void*)0,(void*)0,&g_1023},{&g_701[3],&g_701[3],&g_701[3],&g_701[8]}},{{&g_191[6],&g_701[3],&g_10,(void*)0},{&g_701[3],&g_701[7],&g_1023,(void*)0},{&g_701[3],&g_701[3],&g_1023,&g_701[8]},{&g_701[1],&g_701[3],&g_191[3],&g_1023},{&g_10,(void*)0,&g_10,&g_701[3]},{&g_701[2],&g_701[3],(void*)0,&g_191[6]},{&g_701[3],&g_10,&g_191[6],&g_701[3]},{&g_1023,&g_1023,&g_191[6],&g_701[3]}},{{&g_701[3],&g_1023,(void*)0,&g_701[1]},{&g_701[2],&g_191[3],&g_10,&g_10},{&g_10,&g_10,&g_191[3],&g_701[2]},{&g_701[1],(void*)0,&g_1023,&g_701[3]},{&g_701[3],&g_191[6],&g_1023,&g_1023},{&g_701[3],&g_191[6],&g_10,&g_701[3]},{&g_191[6],(void*)0,&g_701[3],&g_701[2]},{&g_701[3],&g_10,(void*)0,&g_10}}};
    int *l_1127 = &g_10;
    char l_1130[5][4][3];
    int l_1231 = (-1L);
    int *l_1257 = (void*)0;
    int *l_1274 = &g_191[5];
    int l_1275 = 0xB347D6D2L;
    unsigned short l_1291 = 1UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_934[i] = &g_191[9];
    for (i = 0; i < 3; i++)
        l_1024[i] = &g_1023;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
                l_1130[i][j][k] = 6L;
        }
    }
    g_894 = func_2((((safe_mul_func_int16_t_s_s((-1L), g_8)) | 4294967295UL) <= (l_9 == &g_10)));
    for (g_10 = 0; (g_10 >= (-9)); g_10 = safe_sub_func_uint8_t_u_u(g_10, 5))
    {
        return g_201[4][2];
    }
    for (g_361 = 5; (g_361 >= 2); g_361 -= 1)
    {
        unsigned l_902 = 0x72253DC3L;
        int *l_936 = &g_701[8];
        int ***l_971 = &g_64[2][1][9];
        char l_1056[6];
        int i;
        for (i = 0; i < 6; i++)
            l_1056[i] = 0x8DL;
    }
    if ((*g_549))
    {
        int *l_1066 = &g_701[3];
        int l_1105 = 0x99A00325L;
        int ***l_1106 = &g_64[2][1][5];
        for (g_8 = 0; (g_8 == (-29)); g_8 = safe_sub_func_uint16_t_u_u(g_8, 6))
        {
            int *l_1067[9] = {&g_191[5],&g_191[5],&g_191[5],&g_191[5],&g_191[5],&g_191[5],&g_191[5],&g_191[5],&g_191[5]};
            int *l_1073 = &g_701[5];
            char l_1080 = (-1L);
            short l_1082 = 1L;
            int i;
            for (g_1052 = 1; (g_1052 <= 8); g_1052 += 1)
            {
                int *l_1068[8];
                int **l_1069[3];
                unsigned short l_1071 = 65535UL;
                int l_1072 = 0L;
                int i;
                for (i = 0; i < 8; i++)
                    l_1068[i] = &g_1023;
                for (i = 0; i < 3; i++)
                    l_1069[i] = &g_65[4][0][0];
                l_934[0] = &g_191[g_1052];
                l_1067[6] = l_1066;
                l_1066 = func_22((*l_1066), l_1066, g_191[5], l_1066, ((g_901[6] & (safe_unary_minus_func_int32_t_s(((-8L) > func_13((*l_1066), (l_1071 < l_1072), l_1067[0], l_1073))))) && (*l_1073)));
                g_191[(g_1052 + 1)] = (safe_sub_func_int8_t_s_s(g_1058, ((&g_64[0][2][8] == (void*)0) | ((safe_div_func_int8_t_s_s(g_191[7], (~(((0x90919740L >= (*l_1066)) && func_13((*l_1073), l_1080, l_1066, l_1081)) ^ g_191[5])))) > l_1082))));
            }
            for (l_1080 = 0; (l_1080 <= 2); l_1080++)
            {
                unsigned l_1095 = 0xB02299A7L;
                int l_1096[3];
                int l_1097[10][4][6] = {{{0xB5F858FCL,0xDBF7B545L,0x6A048306L,0xE3D84382L,0xD34C680DL,0L},{0L,0xB4478C41L,0xDEA761CDL,(-10L),0xDBF7B545L,0x7D500049L},{0x0622086AL,0L,0x1C7BD7F4L,0x8EDB0BA3L,0x4B42FF7EL,0x139E1C98L},{(-10L),1L,0x456242FBL,(-1L),1L,(-1L)}},{{0xDEA761CDL,0x8EDB0BA3L,0L,(-1L),0xA5A87F99L,(-1L)},{0xDBF7B545L,(-9L),0L,(-10L),1L,0x8C5E6BD8L},{0L,1L,1L,0x4B42FF7EL,0x9557A8ABL,(-5L)},{0xB5F858FCL,0x1DF036CBL,(-2L),0xC64AC380L,0L,(-1L)}},{{0x505931FDL,0x810E77BCL,(-9L),0L,0x6E6D5F90L,(-1L)},{1L,0L,0xD34C680DL,0x077270C6L,(-1L),0x139E1C98L},{0x4A231046L,(-3L),(-10L),0xBC6B1557L,0xE065FA62L,0L},{(-9L),(-1L),0xA5A87F99L,(-1L),0xF04B4081L,0x87ABBE74L}},{{0xF4A6A024L,0L,0xBC6B1557L,1L,1L,0xBC6B1557L},{0x7D8AFCADL,0x7D8AFCADL,(-1L),0xCCD4A2D8L,0xF3C8D1AEL,1L},{7L,0x6E6D5F90L,(-9L),0x139E1C98L,(-1L),1L},{0x6CED8423L,(-10L),0x8EDB0BA3L,(-1L),0xDB980690L,0xDEA761CDL}},{{0xB5F858FCL,(-1L),1L,0xE1787C48L,0x6A048306L,(-5L)},{0xE1787C48L,0x6A048306L,(-5L),(-1L),(-2L),(-1L)},{0x077270C6L,0xA18EA574L,1L,0x493665C1L,0x2FEEC236L,(-1L)},{0x2FEEC236L,0L,(-1L),0x3C5AB4D3L,0xAEC546C2L,(-3L)}},{{1L,(-10L),0L,(-9L),0xDBF7B545L,0L},{(-1L),9L,(-1L),0x7D500049L,0xC56D9038L,0xAEC546C2L},{0xA18EA574L,0x8EDB0BA3L,6L,0x1BC17381L,0xD34C680DL,0xB5F858FCL},{0L,0L,0x456242FBL,0L,0xB5F858FCL,0L}},{{0xE1787C48L,0xB4478C41L,0x0622086AL,(-1L),7L,0L},{0x531BF342L,0x86F6B30BL,(-1L),(-9L),9L,1L},{(-1L),0x077270C6L,1L,0xBDDED7E8L,0x3C5AB4D3L,(-3L)},{(-10L),0L,(-1L),0xAC2AFFF8L,(-1L),0L}},{{0x8EDB0BA3L,0L,(-1L),1L,0xC64AC380L,(-10L)},{(-1L),1L,0x505931FDL,1L,0xD34C680DL,0xAC2AFFF8L},{0L,0L,1L,0xB4478C41L,(-10L),0L},{0xE8565577L,0xE3D84382L,0xCA331181L,9L,0x456242FBL,0L}},{{(-1L),0xE8565577L,(-1L),0xC64AC380L,(-1L),0xE8565577L},{0xA18EA574L,0L,0x99C64A4CL,0xF04B4081L,0x1DF036CBL,0L},{0x9557A8ABL,(-1L),0xDBF7B545L,(-1L),(-1L),0xBDDED7E8L},{(-1L),(-1L),1L,0x1C7BD7F4L,0x1DF036CBL,0x6E6D5F90L}},{{(-2L),0L,0xE065FA62L,(-9L),(-1L),0x3C5AB4D3L},{(-10L),0xE8565577L,9L,0L,0x456242FBL,(-10L)},{7L,0xE3D84382L,0x4325DCECL,(-1L),(-10L),(-9L)},{1L,(-9L),1L,(-10L),0xF3C8D1AEL,0x6A048306L}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1096[i] = 0xEA9DF13EL;
                for (l_1021 = 0; (l_1021 <= 8); ++l_1021)
                {
                    int **l_1088 = &l_1066;
                    (*l_1088) = l_1087[2][3][3];
                    if ((safe_sub_func_int16_t_s_s((g_701[3] | ((safe_div_func_uint32_t_u_u((l_1073 == (void*)0), g_8)) ^ (!(+l_1095)))), l_1096[2])))
                    {
                        l_1097[8][1][3] = l_1096[0];
                    }
                    else
                    {
                        (*l_1088) = l_1066;
                    }
                    for (l_1048 = 28; (l_1048 <= (-5)); l_1048--)
                    {
                        int *l_1104 = &g_701[3];
                        l_1097[8][1][3] = (0xB27FE5F7L <= (safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(8UL, g_1052)) >= 0x4EE6L) & (g_201[1][3] > ((void*)0 != l_1104))), 6)));
                        if (l_1105)
                            break;
                        (*l_1088) = l_1104;
                    }
                    return g_191[5];
                }
                if ((*l_1081))
                    break;
                if ((0xC418L & (l_1106 != (void*)0)))
                {
                    (*l_1106) = &l_1067[0];
                }
                else
                {
                    int *l_1107 = (void*)0;
                    int **l_1108 = &l_1087[5][5][0];
                    (*l_1108) = l_1107;
                    if (l_1097[8][1][3])
                        continue;
                    (*l_1108) = g_1109;
                }
                if ((*g_1109))
                    continue;
            }
        }
    }
    else
    {
        int *l_1112 = &g_1023;
        unsigned short l_1120 = 65534UL;
        unsigned char l_1169 = 8UL;
        unsigned l_1183 = 0xC525F563L;
        unsigned short l_1196 = 0x646FL;
        char l_1197 = 0x68L;
        unsigned l_1198[4][9] = {{8UL,4294967290UL,0x69F8287EL,0x69F8287EL,4294967290UL,8UL,0UL,0UL,0x69F8287EL},{0UL,0x806415D8L,8UL,0x69F8287EL,4294967287UL,0UL,0UL,4294967287UL,0x69F8287EL},{0x40860B75L,4294967290UL,0x40860B75L,8UL,4294967287UL,0x40860B75L,0UL,0x5478777CL,8UL},{0x40860B75L,4294967287UL,8UL,0x40860B75L,4294967290UL,0x40860B75L,8UL,4294967287UL,0x40860B75L}};
        int ***l_1281 = &g_64[2][1][5];
        int l_1292 = 0x18616EDCL;
        int i, j;
        if ((safe_rshift_func_int16_t_s_u((func_47(l_1112, l_1112, (*l_1112)) == (safe_div_func_uint8_t_u_u((!(safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int8_t_s_u(((void*)0 != (*l_932)), (safe_add_func_int16_t_s_s((l_1120 && g_191[5]), g_201[4][0])))) | 254UL)))), l_1120))), g_901[3])))
        {
            unsigned short l_1121 = 5UL;
            int *l_1124[4] = {&g_701[3],&g_701[3],&g_701[3],&g_701[3]};
            int *l_1125 = (void*)0;
            int ***l_1126 = &g_64[2][2][2];
            int ***l_1133[4][1][7] = {{{&g_64[1][2][1],&g_64[1][2][1],&g_64[1][2][1],&g_64[1][2][1],&g_64[1][2][1],&g_64[1][2][1],&g_64[1][2][1]}},{{&g_64[2][1][7],&g_64[2][1][7],&g_64[2][1][7],&g_64[2][1][7],&g_64[2][1][7],&g_64[2][1][7],&g_64[2][1][7]}},{{&g_64[1][2][1],&g_64[1][2][1],&g_64[1][2][1],&g_64[1][2][1],&g_64[1][2][1],&g_64[1][2][1],&g_64[1][2][1]}},{{&g_64[2][1][7],&g_64[2][1][7],&g_64[2][1][7],&g_64[2][1][7],&g_64[2][1][7],&g_64[2][1][7],&g_64[2][1][7]}}};
            unsigned short l_1143[7];
            unsigned short l_1161 = 0x4C6EL;
            int *l_1166 = &g_701[4];
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1143[i] = 65527UL;
            (*l_1112) = l_1121;
            for (l_1020 = 0; (l_1020 == 48); l_1020++)
            {
                int *l_1128 = &g_10;
                int **l_1129[6][8][5] = {{{&l_1124[0],&l_1024[1],&l_1081,&l_1024[1],&l_1124[0]},{&g_894,&g_65[5][0][0],&g_65[5][0][0],&g_894,&g_894},{&l_1087[2][3][3],&l_1024[1],&l_1087[2][3][3],&l_1024[2],&l_1087[2][3][3]},{&g_894,&g_894,&l_1128,&g_65[5][0][0],&g_894},{&l_1124[0],&l_1024[2],&l_1081,&l_1024[2],&l_1124[0]},{&g_894,&g_65[5][0][0],&l_1128,&g_894,&g_894},{&l_1087[2][3][3],&l_1024[2],&l_1087[2][3][3],&l_1024[1],&l_1087[2][3][3]},{&g_894,&g_894,&g_65[5][0][0],&g_65[5][0][0],&g_894}},{{&l_1124[0],&l_1024[1],&l_1081,&l_1024[1],&l_1124[0]},{&g_894,&g_65[5][0][0],&g_65[5][0][0],&g_894,&g_894},{&l_1087[2][3][3],&l_1024[1],&l_1087[2][3][3],&l_1024[2],&l_1087[2][3][3]},{&g_894,&g_894,&l_1128,&g_65[5][0][0],&g_894},{&l_1124[0],&l_1024[2],&l_1081,&l_1024[2],&l_1124[0]},{&g_894,&g_65[5][0][0],&l_1128,&g_894,&g_894},{&l_1087[2][3][3],&l_1024[2],&l_1087[2][3][3],&l_1024[1],&l_1087[2][3][3]},{&g_894,&g_894,&g_65[5][0][0],&g_65[5][0][0],&g_894}},{{&l_1124[0],&l_1024[1],&l_1081,&l_1024[1],&l_1124[0]},{&g_894,&g_65[5][0][0],&g_65[5][0][0],&g_894,&g_894},{&l_1087[2][3][3],&l_1024[1],&l_1087[2][3][3],&l_1024[2],&l_1087[2][3][3]},{&g_894,&g_894,&l_1128,&g_65[5][0][0],&g_894},{&l_1124[0],&l_1024[2],&l_1081,&l_1024[2],&l_1124[0]},{&g_894,&g_65[5][0][0],&l_1128,&g_894,&g_894},{&l_1087[2][3][3],&l_1024[2],&l_1087[2][3][3],&l_1024[1],&l_1087[2][3][3]},{&g_894,&g_894,&g_65[5][0][0],&g_65[5][0][0],&g_894}},{{&l_1124[0],&l_1024[1],&l_1081,&l_1024[1],&l_1124[0]},{&g_894,&g_65[5][0][0],&g_65[5][0][0],&g_894,&g_894},{&l_1087[2][3][3],&l_1024[1],&l_1087[2][3][3],&l_1024[2],&l_1087[2][3][3]},{&g_894,&g_894,&l_1128,&g_65[5][0][0],&g_894},{&l_1124[0],&l_1024[2],&l_1081,&l_1024[2],&l_1124[0]},{&g_894,&g_65[5][0][0],&l_1128,&g_894,&g_894},{&l_1087[2][3][3],&l_1024[2],&l_1087[2][3][3],&l_1024[1],&l_1087[2][3][3]},{&g_894,&g_894,&g_65[5][0][0],&g_65[5][0][0],&g_894}},{{&l_1124[0],&l_1024[1],&l_1081,&l_1024[1],&l_1124[0]},{&g_894,&g_65[5][0][0],&g_65[5][0][0],&g_894,&g_894},{&l_1087[2][3][3],&l_1024[1],&l_1087[2][3][3],&l_1024[2],&l_1087[2][3][3]},{&g_894,&g_894,&l_1128,&g_65[5][0][0],&g_894},{&l_1124[0],&l_1024[2],&l_1081,&l_1024[2],&l_1124[0]},{&g_894,&g_65[5][0][0],&l_1128,&g_894,&g_894},{&l_1087[2][3][3],&l_1024[2],&l_1087[2][3][3],&l_1024[1],&l_1087[2][3][3]},{&g_894,&g_894,&g_65[5][0][0],&g_65[5][0][0],&g_894}},{{&l_1124[0],&l_1024[1],&l_1081,&l_1024[1],&l_1124[0]},{&g_894,&g_65[5][0][0],&g_65[5][0][0],&g_894,&g_894},{&l_1087[2][3][3],&l_1024[1],&l_1087[2][3][3],&l_1024[2],&l_1087[2][3][3]},{&g_894,&g_894,&l_1128,&g_65[5][0][0],&g_894},{&l_1124[0],&l_1024[2],&l_1081,&l_1024[2],&l_1124[0]},{&g_894,&g_65[5][0][0],&l_1128,&g_894,&g_894},{&l_1087[2][3][3],&l_1024[2],&l_1087[2][3][3],&l_1024[1],&l_1087[2][3][3]},{&g_894,&g_894,&g_65[5][0][0],&g_65[5][0][0],&g_894}}};
                unsigned char l_1139 = 0UL;
                unsigned short l_1146[10];
                int i, j, k;
                for (i = 0; i < 10; i++)
                    l_1146[i] = 0x1B24L;
                l_1112 = l_1128;
                if (l_1130[4][3][1])
                    break;
                (*g_1109) = ((g_361 >= (*l_1112)) > (!(safe_lshift_func_int8_t_s_s((*l_1112), 3))));
                if (func_42(((void*)0 != l_1133[2][0][1]), g_201[4][0]))
                {
                    unsigned l_1138 = 4294967291UL;
                    int *l_1140 = &g_1023;
                    unsigned l_1159 = 4UL;
                    int l_1163 = (-1L);
                    for (g_8 = 0; (g_8 > (-27)); g_8--)
                    {
                        int *l_1144 = (void*)0;
                        l_1139 = (safe_rshift_func_uint16_t_u_u(l_1138, 10));
                        l_1144 = l_1144;
                        if ((*l_1140))
                            continue;
                    }
                    for (g_1023 = 1; (g_1023 <= 9); g_1023 += 1)
                    {
                        int *l_1145[7];
                        int *l_1160 = &g_701[7];
                        int **l_1162 = &l_1081;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1145[i] = (void*)0;
                        l_1145[6] = &g_191[g_1023];
                    }
                }
                else
                {
                    unsigned char l_1164[8] = {0UL,0xABL,0UL,0xABL,0UL,0xABL,0UL,0xABL};
                    int i;
                    if ((*g_549))
                    {
                        (*l_1081) = (*g_1109);
                        if ((*l_1081))
                            continue;
                    }
                    else
                    {
                        int *l_1165 = &g_1023;
                        l_1165 = func_2(l_1164[2]);
                        l_1166 = l_1112;
                    }
                }
            }
        }
        else
        {
            int *l_1170[4][2] = {{&g_191[1],(void*)0},{&g_191[1],(void*)0},{&g_191[1],(void*)0},{&g_191[1],(void*)0}};
            int ***l_1176 = &g_64[2][1][5];
            unsigned l_1179 = 0xF560F144L;
            int *l_1210 = &g_191[8];
            int *l_1220[8];
            int i, j;
            for (i = 0; i < 8; i++)
                l_1220[i] = &g_701[8];
            for (l_967 = (-1); (l_967 <= 48); l_967 = safe_add_func_uint32_t_u_u(l_967, 4))
            {
                int **l_1171 = &l_934[1];
                (*l_1127) = l_1169;
                (*l_1171) = l_1170[2][0];
                (*l_1171) = (void*)0;
                if (g_1052)
                    goto lbl_1188;
            }
lbl_1188:
            for (l_1057 = 0; (l_1057 != 13); l_1057++)
            {
                unsigned char l_1180 = 1UL;
            }
            if ((g_99 > ((safe_mul_func_int8_t_s_s((*l_1081), (&g_458 != (*l_1176)))) <= (((((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(((+((void*)0 == l_1176)) != (safe_mul_func_uint8_t_u_u((func_13((((((0x7A7EL != g_901[3]) && (l_1196 != g_8)) | 0x2D25CC55L) < 8L) ^ (*l_1112)), g_901[6], l_1024[1], l_1170[3][1]) & l_1197), g_1023))))), 1L)) || l_1198[2][5]) | 0xE7415848L) >= (*l_1112)) && (*l_1112)))))
            {
                short l_1199 = 4L;
                int *l_1219 = &g_701[3];
                unsigned l_1228 = 0x7158375FL;
                unsigned l_1232[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1232[i] = 0x318E353AL;
                (*g_1109) = (l_1199 & (l_1199 ^ ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((*g_1109), (safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_1176 == &g_64[2][1][5]), g_8)), 8)))), 7)) > func_13(((((-5L) && g_1052) > (safe_sub_func_int8_t_s_s(0xCAL, 9UL))) > g_10), g_191[5], l_1112, l_1210))));
                if (((func_13((safe_mul_func_uint16_t_u_u((l_1199 >= ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((*l_1112), 4)), (safe_rshift_func_int8_t_s_s(g_901[6], (l_1219 != l_1220[0]))))) <= (!(((((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int16_t_s_u(((0x6EAB4932L < (l_1228 <= (safe_rshift_func_int8_t_s_u(func_42(l_1231, (&g_64[2][1][5] == l_1176)), (*l_1219))))) < 0x51L), 7)))), g_1058)), 6)) <= (*l_1219)) ^ (-1L)) & g_1058) || l_1232[2])))), g_1052)), (*l_1112), l_1219, l_1112) && g_201[4][0]) | (*l_1112)))
                {
                    int *l_1233 = &g_10;
                    int l_1241 = 0x5D79634DL;
                    if (((*l_1112) && (&g_458 == (void*)0)))
                    {
                        int *l_1234 = &g_10;
                        int **l_1235 = &l_1220[0];
                        l_1112 = l_1233;
                        (*l_1210) = (*g_549);
                        (*l_1235) = l_1234;
                    }
                    else
                    {
                        int **l_1236 = &l_9;
                        (*l_1236) = func_2((*l_1233));
                        (*l_1233) = 0x573476D3L;
                        (*g_549) = (safe_add_func_int8_t_s_s((*l_1233), (safe_sub_func_uint16_t_u_u((*l_1233), l_1241))));
                        (*l_1236) = (*l_1236);
                    }
                    (*l_1219) = g_1242;
                    for (g_99 = 0; (g_99 != 35); g_99++)
                    {
                        int **l_1245 = &l_1087[2][3][3];
                        (*l_1245) = (void*)0;
                    }
                }
                else
                {
                    int **l_1248 = &l_1024[0];
                    for (l_1048 = (-30); (l_1048 <= (-21)); l_1048 = safe_add_func_uint16_t_u_u(l_1048, 3))
                    {
                        l_1248 = (void*)0;
                    }
                    for (l_968 = 0; (l_968 == 15); l_968++)
                    {
                        int **l_1251[8][5] = {{&l_1170[2][0],&l_1219,&l_1170[2][0],&l_1219,&l_1170[2][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1170[2][0],&l_1219,&l_1170[2][0],&l_1219,&l_1170[2][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1170[2][0],&l_1219,&l_1170[2][0],&l_1219,&l_1170[2][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1170[2][0],&l_1219,&l_1170[2][0],&l_1219,&l_1170[2][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j;
                        if (l_1048)
                            goto lbl_1188;
                        l_1127 = (void*)0;
                    }
                }
                (*l_1040) = (*l_1210);
                (*l_1040) = (((safe_rshift_func_int16_t_s_s(g_701[4], 6)) > g_191[5]) || ((void*)0 == &g_1109));
            }
            else
            {
                int **l_1256[9] = {&l_1220[0],(void*)0,&l_1220[0],(void*)0,&l_1220[0],(void*)0,&l_1220[0],(void*)0,&l_1220[0]};
                int i;
                l_1257 = l_1112;
            }
        }
        for (l_970 = 0; l_970 < 9; l_970 += 1)
        {
            g_901[l_970] = 0x04L;
        }
        (*g_1109) = (&g_796[5] != &l_1112);
        if (((func_40(func_42((*l_1112), (func_13((+2UL), g_1052, l_1127, l_934[0]) < g_10))) && g_201[5][2]) || 0x9DL))
        {
            int *l_1262 = (void*)0;
            unsigned l_1267 = 4294967295UL;
            for (l_1020 = 2; (l_1020 == 11); l_1020++)
            {
                unsigned char l_1260 = 4UL;
                int *l_1261 = (void*)0;
                int ***l_1272 = &g_64[0][0][2];
                int **l_1273[10][3][4] = {{{&g_549,&l_1087[2][3][3],&g_549,&g_549},{(void*)0,(void*)0,(void*)0,&l_1087[2][3][3]},{&l_1087[2][3][3],&g_549,(void*)0,&g_549}},{{(void*)0,&g_1109,&g_549,(void*)0},{&g_549,&g_1109,&g_1109,&g_549},{&g_1109,&g_549,(void*)0,&l_1087[2][3][3]}},{{&g_1109,(void*)0,&g_1109,&g_549},{&g_549,&l_1087[2][3][3],&g_549,&g_549},{(void*)0,(void*)0,(void*)0,&l_1087[2][3][3]}},{{&l_1087[2][3][3],&g_549,(void*)0,&g_549},{(void*)0,&g_1109,&g_549,(void*)0},{&g_549,&g_1109,&g_1109,&g_796[5]}},{{&g_549,&g_796[5],(void*)0,&g_1109},{&g_549,(void*)0,&g_549,&l_1087[2][3][3]},{&g_796[5],&g_1109,&l_1087[2][3][3],&l_1087[2][3][3]}},{{(void*)0,(void*)0,&g_549,&g_1109},{&g_1109,&g_796[5],&g_549,&g_796[5]},{(void*)0,&g_549,&l_1087[2][3][3],&g_549}},{{&g_796[5],&g_549,&g_549,&g_796[5]},{&g_549,&g_796[5],(void*)0,&g_1109},{&g_549,(void*)0,&g_549,&l_1087[2][3][3]}},{{&g_796[5],&g_1109,&l_1087[2][3][3],&l_1087[2][3][3]},{(void*)0,(void*)0,&g_549,&g_1109},{&g_1109,&g_796[5],&g_549,&g_796[5]}},{{(void*)0,&g_549,&l_1087[2][3][3],&g_549},{&g_796[5],&g_549,&g_549,&g_796[5]},{&g_549,&g_796[5],(void*)0,&g_1109}},{{&g_549,(void*)0,&g_549,&l_1087[2][3][3]},{&g_796[5],&g_1109,&l_1087[2][3][3],&l_1087[2][3][3]},{(void*)0,(void*)0,&g_549,&g_1109}}};
                int i, j, k;
                l_1274 = l_1262;
            }
            l_1275 = 0x35480A3CL;
        }
        else
        {
            int ***l_1278 = &g_64[2][1][5];
            int *l_1279[8] = {&g_10,&g_10,&g_191[8],&g_10,&g_10,&g_191[8],&g_10,&g_10};
            int **l_1293 = (void*)0;
            int **l_1294 = &l_1257;
            int i;
            if (((safe_add_func_int32_t_s_s(((l_1278 != l_932) || g_10), (l_1279[3] == l_1279[3]))) ^ g_901[3]))
            {
                int ***l_1280 = &g_64[0][0][0];
                int l_1282 = 0xD222EB2DL;
                (*g_1109) = l_1282;
                (*l_1274) = 0x2F09B513L;
            }
            else
            {
                int l_1283 = (-8L);
                int l_1290 = 0x36625378L;
                for (l_1021 = 0; (l_1021 <= 2); l_1021 += 1)
                {
                    int i;
                    if (l_1283)
                        break;
                }
                (*l_1081) = ((safe_lshift_func_uint8_t_u_u(((((void*)0 == &g_64[2][1][5]) <= (0xD39EL || ((*g_549) && (safe_mod_func_int32_t_s_s((g_1052 & (safe_sub_func_uint32_t_u_u(9UL, (l_1283 >= (*g_1109))))), 0xF13C4124L))))) ^ g_191[8]), g_201[3][0])) > l_1290);
            }
            if (l_1291)
            {
                return g_201[4][0];
            }
            else
            {
                (*l_1281) = &g_65[6][2][0];
            }
            (*l_1274) = l_1292;
            (*l_1294) = (void*)0;
        }
    }
    return g_901[2];
}







static int * func_2(int p_3)
{
    unsigned char l_33 = 0xB1L;
    int *l_882[9] = {&g_701[3],(void*)0,&g_701[3],&g_701[3],(void*)0,&g_701[3],&g_701[3],(void*)0,&g_701[3]};
    unsigned l_889 = 0xBA0CB5B5L;
    int ***l_890 = &g_64[2][1][5];
    int i;
    for (g_8 = (-13); (g_8 <= 26); g_8 = safe_add_func_uint32_t_u_u(g_8, 6))
    {
        int l_28 = 0xBBDEBF88L;
        int *l_34[6] = {&g_10,&g_10,&g_10,&g_10,&g_10,&g_10};
        unsigned char l_881[3][2] = {{0xE7L,0xE7L},{0xE7L,0xE7L},{0xE7L,0xE7L}};
        int i, j;
    }
    (*g_549) = (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(g_99, g_10)) && ((8UL && (safe_add_func_int32_t_s_s((l_889 == (l_890 != l_890)), ((safe_mod_func_int32_t_s_s((-1L), ((safe_unary_minus_func_uint16_t_u(g_701[3])) || (&g_65[6][2][0] == (void*)0)))) | g_191[1])))) || p_3)), g_99));
    return l_882[3];
}







static int func_13(unsigned p_14, unsigned char p_15, int * p_16, int * p_17)
{
    for (g_361 = 0; (g_361 <= (-5)); g_361--)
    {
        p_16 = p_17;
    }
    return p_15;
}







static int * func_18(int * p_19, int * p_20, int * p_21)
{
    int *l_700 = &g_191[0];
    int l_726 = 0x5624768AL;
    int *l_751[5][5][6] = {{{&g_701[3],(void*)0,&g_701[3],&g_701[3],&g_191[5],&g_191[7]},{&g_701[1],&g_191[5],&l_726,&g_701[3],&g_191[5],&l_726},{&g_701[3],&g_10,(void*)0,&g_701[3],&l_726,&g_701[3]},{&g_701[1],(void*)0,&g_701[1],&g_701[3],&g_701[3],&g_191[7]},{&g_701[3],&g_191[5],&g_10,&g_701[3],&g_701[3],&l_726}},{{&g_701[1],&g_10,(void*)0,&g_701[3],&l_726,&g_701[3]},{&g_701[3],(void*)0,&g_701[3],&g_701[3],&g_191[5],&g_191[7]},{&g_701[1],&g_191[5],&l_726,&g_701[3],&g_191[5],&l_726},{&g_701[3],&g_10,(void*)0,&g_701[3],&l_726,&g_701[3]},{&g_701[1],(void*)0,&g_701[1],&g_701[3],&g_701[3],&g_191[7]}},{{&g_701[3],&g_191[5],&g_10,&g_701[3],&g_701[3],&l_726},{&g_701[1],&g_10,(void*)0,&g_701[3],&l_726,&g_701[3]},{&g_701[3],(void*)0,&g_701[3],&g_701[3],&g_191[5],&g_191[7]},{&g_701[1],&g_191[5],&l_726,&g_701[3],&g_191[5],&l_726},{&g_701[3],&g_10,(void*)0,&g_701[3],&l_726,&g_191[7]}},{{&l_726,&g_10,&l_726,&g_191[7],&l_726,&l_726},{&g_10,(void*)0,(void*)0,&g_191[7],&g_191[5],&g_701[3]},{&l_726,&g_191[5],&g_701[1],&g_191[7],&g_191[5],&g_191[7]},{&g_10,&g_10,&g_10,&g_191[7],&l_726,&l_726},{&l_726,(void*)0,(void*)0,&g_191[7],&g_701[3],&g_701[3]}},{{&g_10,&g_191[5],&g_701[3],&g_191[7],&g_701[3],&g_191[7]},{&l_726,&g_10,&l_726,&g_191[7],&l_726,&l_726},{&g_10,(void*)0,(void*)0,&g_191[7],&g_191[5],&g_701[3]},{&l_726,&g_191[5],&g_701[1],&g_191[7],&g_191[5],&g_191[7]},{&g_10,&g_10,&g_10,&g_191[7],&l_726,&l_726}}};
    int ***l_856[8][3];
    int i, j, k;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
            l_856[i][j] = &g_64[0][0][4];
    }
    for (g_10 = 0; (g_10 <= 2); g_10 += 1)
    {
        int *l_702 = &g_191[5];
        int **l_703[9] = {&l_700,&g_65[6][2][0],&l_700,&l_700,&g_65[6][2][0],&l_700,&l_700,&g_65[6][2][0],&l_700};
        int l_745 = 5L;
        short l_795 = 0xE98FL;
        int l_810 = 0L;
        unsigned l_818 = 0xF79D8065L;
        int i;
        for (g_99 = 0; (g_99 <= 2); g_99 += 1)
        {
            int *l_699 = (void*)0;
            int i, j;
            l_699 = l_699;
            (*g_549) = (g_201[g_99][(g_10 + 7)] != g_10);
            (*l_700) = (l_700 == p_19);
            for (g_361 = 0; (g_361 <= 2); g_361 += 1)
            {
                int i, j, k;
                for (g_701[3] = 0; (g_701[3] <= 2); g_701[3] += 1)
                {
                    int i, j, k;
                    if ((*l_700))
                        break;
                    l_702 = l_700;
                    if ((*l_700))
                        continue;
                }
                p_20 = l_699;
                (*l_702) = (g_191[9] || 1L);
            }
        }
        p_21 = p_20;
        if ((*l_700))
            continue;
        for (g_361 = 0; (g_361 <= 2); g_361 += 1)
        {
            unsigned char l_704 = 0xA2L;
            unsigned char l_707 = 1UL;
            int *l_712 = (void*)0;
            short l_713[5][8][6] = {{{0xB96EL,2L,0xADEEL,0xADEEL,2L,0xB96EL},{0x7B0AL,(-1L),(-1L),0L,(-5L),0xB96EL},{(-1L),(-4L),0xADEEL,0x4CDAL,7L,0xADEEL},{(-1L),(-5L),0x4CDAL,0L,0x7FAAL,0L},{0x7B0AL,0xB96EL,8L,0L,0L,0L},{(-1L),0xADEEL,8L,(-1L),0xB96EL,0xDA90L},{0xDA90L,0L,0L,(-1L),0x4CDAL,0L},{(-1L),0x4CDAL,0L,0L,0x4CDAL,(-1L)}},{{8L,0L,1L,0xDA90L,0xB96EL,(-1L)},{1L,0xADEEL,0L,0L,0L,0L},{1L,0xB96EL,0L,0xDA90L,0x7B0AL,0xDA90L},{8L,0xB96EL,8L,0L,0L,0L},{(-1L),0xADEEL,8L,(-1L),0xB96EL,0xDA90L},{0xDA90L,0L,0L,(-1L),0x4CDAL,0L},{(-1L),0x4CDAL,0L,0L,0x4CDAL,(-1L)},{8L,0L,1L,0xDA90L,0xB96EL,(-1L)}},{{1L,0xADEEL,0L,0L,0L,0L},{1L,0xB96EL,0L,0xDA90L,0x7B0AL,0xDA90L},{8L,0xB96EL,8L,0L,0L,0L},{(-1L),0xADEEL,8L,(-1L),0xB96EL,0xDA90L},{8L,0x7B0AL,0L,(-6L),0xADEEL,0xDA90L},{(-6L),0xADEEL,0xDA90L,0xDA90L,0xADEEL,(-6L)},{(-1L),0x7B0AL,0L,8L,0L,(-6L)},{0L,0L,0xDA90L,0L,(-1L),0xDA90L}},{{0L,0L,0L,8L,0xB96EL,8L},{(-1L),0L,(-1L),0xDA90L,(-1L),0L},{(-6L),0L,(-1L),(-6L),0L,8L},{8L,0x7B0AL,0L,(-6L),0xADEEL,0xDA90L},{(-6L),0xADEEL,0xDA90L,0xDA90L,0xADEEL,(-6L)},{(-1L),0x7B0AL,0L,8L,0L,(-6L)},{0L,0L,0xDA90L,0L,(-1L),0xDA90L},{0L,0L,0L,8L,0xB96EL,8L}},{{(-1L),0L,(-1L),0xDA90L,(-1L),0L},{(-6L),0L,(-1L),(-6L),0L,8L},{8L,0x7B0AL,0L,(-6L),0xADEEL,0xDA90L},{(-6L),0xADEEL,0xDA90L,0xDA90L,0xADEEL,(-6L)},{7L,8L,(-4L),(-5L),(-6L),0xDDBDL},{(-4L),0xDA90L,0x7FAAL,(-1L),1L,0x7FAAL},{(-4L),(-6L),(-1L),(-5L),(-1L),(-5L)},{7L,(-6L),7L,0x7FAAL,1L,(-1L)}}};
            short l_724 = 0x2662L;
            short l_729 = 0xD1A0L;
            int *l_750 = &g_701[3];
            int i, j, k;
        }
        for (l_745 = 0; (l_745 <= 6); l_745 += 1)
        {
            unsigned l_774[9][10] = {{0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L},{0xF400FA32L,0xF400FA32L,0x554638D5L,0xF400FA32L,0xF400FA32L,0x554638D5L,0xF400FA32L,0xF400FA32L,0x554638D5L,0xF400FA32L},{0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L},{0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L},{0xF400FA32L,0xF400FA32L,0x554638D5L,0xF400FA32L,0xF400FA32L,0x554638D5L,0xF400FA32L,0xF400FA32L,0x554638D5L,0xF400FA32L},{0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L},{0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L},{0xF400FA32L,0xF400FA32L,0x554638D5L,0xF400FA32L,0xF400FA32L,0x554638D5L,0xF400FA32L,0xF400FA32L,0x554638D5L,0xF400FA32L},{0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L,0x9804A9A0L,0x9804A9A0L,0xF400FA32L}};
            unsigned l_799 = 0xF356B32CL;
            int *l_817 = &g_701[6];
            unsigned short l_835[9][10] = {{0xCE85L,0x6F4DL,0xCE85L,0xCE85L,0x6F4DL,0xCE85L,0xCE85L,0x6F4DL,0xCE85L,0xCE85L},{0x6F4DL,0x6F4DL,2UL,0x6F4DL,0x6F4DL,2UL,0x6F4DL,0x6F4DL,2UL,0x6F4DL},{0x6F4DL,0xCE85L,0xCE85L,0x6F4DL,0xCE85L,0xCE85L,0x6F4DL,0xCE85L,0xCE85L,0x6F4DL},{0xCE85L,0x6F4DL,0xCE85L,0xCE85L,0x6F4DL,0xCE85L,0xCE85L,0x6F4DL,0xCE85L,0xCE85L},{0x6F4DL,0x6F4DL,2UL,0x6F4DL,0x6F4DL,2UL,0x6F4DL,0x6F4DL,2UL,0x6F4DL},{0x6F4DL,0xCE85L,0xCE85L,0x6F4DL,0xCE85L,0xCE85L,0x6F4DL,0xCE85L,0xCE85L,0x6F4DL},{0xCE85L,0x6F4DL,0xCE85L,0xCE85L,0x6F4DL,0xCE85L,0xCE85L,0x6F4DL,0xCE85L,0xCE85L},{0x6F4DL,0x6F4DL,2UL,0x6F4DL,0x6F4DL,2UL,0xCE85L,0xCE85L,0x6F4DL,0xCE85L},{0xCE85L,2UL,2UL,0xCE85L,2UL,2UL,0xCE85L,2UL,2UL,0xCE85L}};
            int *l_857 = (void*)0;
            int i, j;
            (*l_700) = (*l_702);
            if ((((g_191[5] || (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(l_774[8][7], l_774[8][7])) & (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(4UL, ((*l_700) ^ 0x78L))), (*l_702))), g_8))), 0x480D707FL)), l_774[1][5])), g_201[6][7]))) && 0x83L) | 4294967292UL))
            {
                int *l_794 = &l_745;
                for (g_99 = 0; (g_99 <= 6); g_99 += 1)
                {
                    unsigned short l_787 = 0xC9D7L;
                    if ((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(l_787, ((g_701[3] <= 0xA59628C3L) ^ ((l_787 | (-9L)) <= (safe_mod_func_int8_t_s_s((((void*)0 == &p_20) > ((safe_rshift_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((((l_794 != p_20) >= l_795) != 6UL), 3L)) & 0x45L) || (-1L)), 6)) || 0x9AA5L)), 255UL)))))), g_191[9])) > (*l_794)), 5UL)))
                    {
                        return p_19;
                    }
                    else
                    {
                        return g_796[5];
                    }
                }
            }
            else
            {
                char l_823 = 0L;
                int l_837[10][1] = {{(-5L)},{0x1B85782AL},{0x1B85782AL},{(-5L)},{0x1B85782AL},{0x1B85782AL},{(-5L)},{0x1B85782AL},{0x1B85782AL},{(-5L)}};
                int i, j;
                if ((safe_add_func_int32_t_s_s(l_799, 0xF0405055L)))
                {
                    return p_19;
                }
                else
                {
                    unsigned l_819 = 0x030DE087L;
                    (*l_702) = (*p_19);
                    (*g_549) = (safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((g_8 >= (0xEB3D8C3CL <= (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_810, 1UL)), g_701[3])) > (safe_mod_func_uint32_t_u_u(g_8, (safe_rshift_func_int8_t_s_s(l_774[8][7], 6))))), (safe_mod_func_int8_t_s_s((l_817 != p_19), g_99)))))) == l_818), g_191[5])), l_819));
                }
                l_700 = l_817;
                if (((*l_702) | (safe_sub_func_int8_t_s_s(g_201[4][0], g_10))))
                {
                    for (l_726 = 2; (l_726 >= 0); l_726 -= 1)
                    {
                        int i, j, k;
                    }
                }
                else
                {
                    int l_822[3][2] = {{0x665DFD5AL,0x665DFD5AL},{0x5A63DEA4L,0x665DFD5AL},{0x665DFD5AL,0x5A63DEA4L}};
                    int **l_834 = &l_751[3][3][0];
                    int i, j;
                    if ((g_201[6][6] || (g_201[4][0] == (*l_817))))
                    {
                        unsigned l_828 = 1UL;
                        int ***l_829[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_829[i] = &l_703[8];
                        if (l_822[2][0])
                            break;
                        (*l_700) = (g_99 != ((l_823 & ((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_828, l_823)), (l_829[0] != (void*)0))) >= (safe_mul_func_uint8_t_u_u((!((l_834 != &p_21) != ((p_20 != p_19) == g_201[4][1]))), g_99)))) == l_835[3][5]));
                        (*g_549) = (-5L);
                    }
                    else
                    {
                        (*l_817) = (safe_unary_minus_func_int32_t_s((~(-1L))));
                        if ((*p_19))
                            continue;
                        if ((*l_817))
                            break;
                        l_837[4][0] = (*p_19);
                    }
                    if ((safe_div_func_int32_t_s_s((((*l_700) < (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_837[4][0] >= (safe_mul_func_int16_t_s_s(1L, 0x065CL))), (safe_lshift_func_uint8_t_u_s(g_191[5], 3)))), (safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((g_701[4] | (safe_mod_func_uint32_t_u_u((*l_817), (safe_rshift_func_uint8_t_u_u(((*l_817) > g_191[5]), 3))))), l_837[7][0])), 4))))) | g_191[5]), (*l_700))))
                    {
                        (*l_834) = p_21;
                    }
                    else
                    {
                        (*l_834) = p_20;
                        l_837[4][0] = (l_856[4][0] != &g_64[2][1][5]);
                    }
                    p_20 = l_857;
                    if ((((void*)0 != &g_65[6][2][0]) ^ (safe_mul_func_uint8_t_u_u(0xA0L, (safe_mul_func_uint16_t_u_u(((*l_700) ^ ((l_837[4][0] >= g_99) <= ((safe_lshift_func_int16_t_s_s(g_201[6][4], 5)) <= ((safe_rshift_func_uint16_t_u_s((~g_201[4][0]), 12)) < g_191[7])))), 1UL))))))
                    {
                        (*g_549) = (-9L);
                        (*g_549) = 0xC16F8C32L;
                        (*l_834) = p_20;
                        if ((*p_19))
                            break;
                    }
                    else
                    {
                        int *l_866[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_866[i] = &g_191[5];
                        p_21 = l_866[0];
                        (*p_21) = 0xF490C5ACL;
                    }
                }
                (*g_549) = ((~(safe_mod_func_uint8_t_u_u((p_21 == (void*)0), (safe_lshift_func_int8_t_s_s(l_837[4][0], 1))))) & g_99);
            }
            if ((*g_549))
                break;
        }
    }
    return p_19;
}







static int * func_22(unsigned p_23, int * p_24, unsigned short p_25, int * p_26, unsigned short p_27)
{
    int *l_632 = (void*)0;
    l_632 = p_26;
lbl_669:
    for (g_361 = 0; (g_361 < 5); g_361++)
    {
        unsigned l_645 = 0UL;
        (*p_26) = func_42(p_27, (safe_sub_func_uint8_t_u_u(func_42(g_8, func_47(p_26, p_26, (safe_div_func_int8_t_s_s(((&g_549 == &l_632) & p_25), (safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((*l_632), g_8)), 2)) >= l_645), g_361)))))), p_27)));
    }
    for (p_23 = 0; (p_23 == 56); p_23 = safe_add_func_int16_t_s_s(p_23, 7))
    {
        char l_648 = 0x4EL;
        unsigned short l_663 = 0UL;
        int ***l_664 = &g_64[2][1][5];
        int *l_668 = &g_191[5];
        short l_673 = 0xD6ADL;
        int *l_696 = (void*)0;
        (*g_549) = l_648;
        if ((((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((((safe_div_func_int32_t_s_s(l_648, ((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(l_663, l_663)), (l_664 != &g_64[0][1][2]))) && ((void*)0 == l_664)))) || 0xC6DBL) > (p_27 && 0L)), g_201[4][0])) >= g_10), g_191[5])), (-1L))) >= p_25) && (*l_632)))
        {
            int *l_667 = &g_191[4];
            for (g_99 = 16; (g_99 != 12); g_99 = safe_sub_func_uint8_t_u_u(g_99, 4))
            {
                (*l_632) = (*p_26);
                for (l_648 = 0; (l_648 <= 0); l_648 += 1)
                {
                    int i, j, k;
                    for (p_25 = 0; (p_25 <= 0); p_25 += 1)
                    {
                        int i, j, k;
                        return p_26;
                    }
                    if ((*p_26))
                        break;
                    if (g_8)
                        goto lbl_669;
                    (*l_668) = ((p_24 == (void*)0) <= (*p_26));
                }
                return p_24;
            }
            if (p_27)
                goto lbl_669;
            if (func_42(g_99, p_23))
            {
                int *l_672 = &g_191[5];
                int **l_678 = (void*)0;
                int **l_679 = &g_458;
                int *l_697 = &g_191[5];
                int l_698 = 0xB9FBD5A4L;
                for (g_10 = 11; (g_10 > (-1)); g_10--)
                {
                    p_26 = l_672;
                    return p_24;
                }
                (*l_679) = p_26;
                (*l_679) = l_667;
                if ((*p_26))
                    break;
            }
            else
            {
                return l_632;
            }
            if ((*p_26))
                break;
        }
        else
        {
            if ((*l_632))
                break;
        }
    }
    (*l_632) = (*p_26);
    return p_24;
}







static int * func_29(char p_30, unsigned p_31, int * p_32)
{
    int *l_35 = &g_10;
    char l_274 = 0x6FL;
    int ***l_461 = &g_64[0][2][8];
    int l_468 = 2L;
    int *l_542 = &g_10;
    int **l_613 = &g_65[6][0][0];
    int *l_631 = &g_191[0];
    if ((l_35 == (void*)0))
    {
        unsigned l_280 = 0x994EAE74L;
        short l_454 = 0x1F94L;
        int *l_480[9][10] = {{&g_191[5],&g_191[6],&g_191[6],&g_191[5],&g_191[5],(void*)0,&g_191[5],&g_191[5],&g_191[6],&g_191[6]},{&g_191[5],&g_191[6],&g_191[1],&g_10,&g_10,&g_191[1],&g_191[6],&g_191[5],&g_191[6],&g_191[1]},{(void*)0,&g_191[5],&g_10,&g_191[5],(void*)0,&g_191[1],&g_191[1],(void*)0,&g_191[5],&g_10},{&g_191[5],&g_191[5],&g_10,(void*)0,&g_191[5],(void*)0,&g_10,&g_191[5],&g_191[5],&g_10},{&g_191[5],(void*)0,&g_191[1],&g_191[1],(void*)0,&g_191[5],&g_10,&g_191[5],(void*)0,&g_191[1]},{&g_191[6],&g_191[5],&g_191[6],&g_191[1],&g_10,&g_10,&g_191[1],&g_191[6],&g_191[5],&g_191[6]},{&g_191[6],&g_191[5],&g_191[5],(void*)0,&g_191[5],&g_191[5],&g_191[5],&g_191[5],&g_191[5],&g_10},{&g_191[5],&g_191[5],&g_191[5],&g_191[5],&g_10,&g_191[6],&g_10,&g_191[5],&g_191[5],&g_191[5]},{&g_10,&g_191[5],(void*)0,&g_191[1],&g_191[1],(void*)0,&g_191[5],&g_10,&g_191[5],(void*)0}};
        int l_491 = 0L;
        int *l_515 = &g_191[8];
        unsigned l_517 = 7UL;
        char l_561 = 0x7DL;
        int ***l_579 = (void*)0;
        int i, j;
        if ((4294967295UL ^ ((safe_rshift_func_uint8_t_u_s(((&g_10 != (void*)0) || (safe_sub_func_int16_t_s_s(func_40((p_30 || func_42((8L >= (&g_10 != p_32)), (safe_mod_func_int32_t_s_s(func_47(&g_10, func_51((*l_35), g_8, p_32, &g_10, p_31), l_274), l_280))))), g_201[0][1]))), 2)) && 4L)))
        {
            unsigned char l_439 = 0x35L;
            int ***l_462 = &g_64[2][0][6];
            for (g_361 = 0; (g_361 <= 9); g_361 += 1)
            {
                int l_436 = 0xC7C77CAFL;
                unsigned char l_455 = 1UL;
                int **l_494 = &l_480[7][5];
                int i;
                if (g_191[g_361])
                {
                    int **l_456 = (void*)0;
                    int **l_457[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_457[i] = &g_65[6][2][0];
                    g_191[g_361] = ((((safe_mul_func_int8_t_s_s((0UL != l_436), p_30)) || g_10) != ((safe_mul_func_uint16_t_u_u((g_10 & (p_30 || (l_439 | 0xF1BCL))), (safe_rshift_func_uint16_t_u_s(65526UL, 7)))) == (*p_32))) == 0xB0L);
                    p_32 = &g_191[g_361];
                    (*p_32) = ((void*)0 == g_458);
                    (*p_32) = ((safe_add_func_int8_t_s_s((l_461 != l_462), ((void*)0 == p_32))) | (safe_div_func_int8_t_s_s(l_454, ((249UL > (g_361 != (safe_mod_func_int16_t_s_s(((void*)0 == p_32), l_455)))) | p_31))));
                }
                else
                {
                    int **l_467 = &l_35;
                    for (g_99 = 0; (g_99 <= 9); g_99 += 1)
                    {
                        int i;
                        g_191[g_99] = ((g_191[g_99] && (g_201[1][1] < l_280)) < (*p_32));
                        (*p_32) = l_455;
                    }
                    (*l_467) = (void*)0;
                    (*l_467) = &l_436;
                    (*p_32) = (p_31 || p_30);
                }
                for (g_10 = 2; (g_10 >= 0); g_10 -= 1)
                {
                    int *l_481 = (void*)0;
                    int i, j;
                    for (l_280 = 3; (l_280 <= 9); l_280 += 1)
                    {
                        int **l_479 = &l_35;
                        int i, j, k;
                        g_191[l_280] = (safe_lshift_func_uint8_t_u_s(g_201[g_10][l_280], (safe_sub_func_uint32_t_u_u(4294967295UL, (g_201[(g_10 + 2)][l_280] || (safe_lshift_func_int8_t_s_u((&g_64[g_10][g_10][l_280] != &g_64[g_10][g_10][g_361]), ((l_455 ^ (safe_sub_func_uint8_t_u_u(0xA2L, ((safe_sub_func_uint16_t_u_u(g_99, g_201[4][0])) || 0x7768L)))) > 0x685EL))))))));
                        (*l_479) = &l_436;
                        (*l_479) = p_32;
                        (*l_479) = l_480[6][1];
                    }
                    l_436 = g_201[(g_10 + 1)][g_361];
                    return l_481;
                }
            }
            (*l_461) = &p_32;
        }
        else
        {
            int *l_499 = &g_191[1];
            int **l_552 = (void*)0;
            (*p_32) = (safe_mul_func_int8_t_s_s(p_30, ((((!g_10) < (p_30 | (safe_rshift_func_uint8_t_u_s(((void*)0 != l_499), p_30)))) != (safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(6L, (!(safe_sub_func_int8_t_s_s(g_201[4][0], p_30))))), p_31))) < g_99)));
            for (l_454 = 0; (l_454 <= 6); l_454 += 1)
            {
                int *l_508[7][7][5] = {{{&g_10,&g_10,&g_191[8],&g_191[5],&g_10},{&g_10,&g_10,(void*)0,&g_10,&g_191[5]},{&g_191[5],&g_10,&g_10,&g_191[5],(void*)0},{&g_10,&g_10,&g_191[5],&g_191[5],&g_191[3]},{(void*)0,&g_10,&g_191[5],&g_10,&g_191[5]},{&g_10,&g_191[5],&g_10,&g_191[5],&g_10},{&g_191[5],&g_10,&g_10,&g_191[5],&g_191[5]}},{{&g_10,&g_10,&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10,&g_191[5],(void*)0},{(void*)0,&g_10,&g_10,&g_191[5],&g_191[5]},{&g_191[3],&g_10,&g_10,&g_10,&g_10},{&g_191[5],(void*)0,(void*)0,&g_191[5],&g_10},{&g_191[5],&g_10,(void*)0,&g_191[5],&g_10},{&g_191[5],&g_10,&g_10,&g_10,&g_191[3]}},{{(void*)0,(void*)0,&g_191[5],&g_10,&g_191[3]},{&g_191[5],(void*)0,(void*)0,&g_10,&g_191[5]},{(void*)0,&g_191[5],&g_191[5],(void*)0,&g_191[5]},{&g_10,&g_10,(void*)0,&g_10,&g_191[5]},{&g_10,(void*)0,&g_191[5],&g_10,&g_10},{&g_10,&g_10,&g_191[5],(void*)0,&g_191[5]},{&g_191[5],&g_191[5],&g_10,&g_10,&g_10}},{{&g_10,&g_191[5],&g_191[5],&g_10,&g_191[5]},{&g_191[8],&g_191[5],(void*)0,(void*)0,&g_10},{&g_10,&g_10,&g_10,&g_10,(void*)0},{(void*)0,&g_10,&g_10,&g_10,&g_191[5]},{&g_10,(void*)0,&g_10,(void*)0,&g_191[5]},{&g_10,&g_191[5],&g_191[5],&g_10,&g_191[8]},{&g_10,&g_191[5],(void*)0,&g_10,&g_10}},{{&g_191[5],(void*)0,&g_10,(void*)0,&g_10},{(void*)0,(void*)0,&g_191[5],&g_10,&g_191[3]},{&g_191[5],(void*)0,(void*)0,&g_10,&g_191[5]},{(void*)0,&g_191[5],&g_191[5],(void*)0,&g_191[5]},{&g_10,&g_10,(void*)0,&g_10,&g_191[5]},{&g_10,(void*)0,&g_10,&g_10,&g_191[5]},{(void*)0,&g_191[5],(void*)0,&g_191[5],(void*)0}},{{&g_191[5],(void*)0,&g_191[5],&g_10,&g_191[5]},{&g_10,&g_10,&g_191[5],&g_10,&g_191[5]},{&g_191[3],&g_191[3],&g_191[6],&g_191[5],&g_10},{&g_191[5],&g_191[5],&g_191[6],&g_10,&g_191[5]},{&g_10,&g_191[5],&g_191[5],&g_10,(void*)0},{&g_10,&g_10,&g_191[5],&g_191[5],(void*)0},{&g_10,&g_191[8],&g_191[8],&g_10,&g_10}},{{&g_191[5],&g_191[3],&g_10,&g_10,&g_10},{&g_191[8],(void*)0,&g_191[6],&g_191[5],&g_191[5]},{&g_10,&g_191[6],(void*)0,&g_10,&g_10},{&g_191[5],&g_10,(void*)0,&g_10,(void*)0},{&g_191[5],&g_10,&g_191[8],&g_191[5],&g_191[5]},{&g_191[5],&g_191[6],&g_191[6],&g_10,(void*)0},{&g_191[5],(void*)0,&g_10,&g_10,&g_191[5]}}};
                int i, j, k;
                for (l_280 = 0; (l_280 <= 6); l_280 += 1)
                {
                    int l_506 = 0x94C7BD57L;
                    int *l_507 = &g_191[5];
                    for (l_468 = 0; (l_468 <= 6); l_468 += 1)
                    {
                        int **l_509 = &g_65[2][1][0];
                        if ((*p_32))
                            break;
                        l_507 = p_32;
                        (*l_509) = l_508[0][4][3];
                        (*p_32) = ((*p_32) && ((void*)0 != &p_32));
                    }
                }
                (*p_32) = (*p_32);
                for (p_30 = 6; (p_30 >= 2); p_30 -= 1)
                {
                    int **l_510 = (void*)0;
                    int **l_511 = (void*)0;
                    int **l_512 = &g_458;
                    (*l_512) = (void*)0;
                    if ((*l_499))
                        continue;
                    (*l_515) = (safe_sub_func_uint16_t_u_u((((func_47(p_32, p_32, (*p_32)) && 2L) ^ g_99) < g_191[5]), p_30));
                }
            }
            for (l_274 = 2; (l_274 >= 0); l_274 -= 1)
            {
                int **l_518[8][7][4] = {{{&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0],&g_65[1][0][0]},{&g_65[6][2][0],&g_65[6][2][0],&l_35,&g_65[6][2][0]},{&g_65[6][2][0],&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0]},{&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0],&g_65[1][0][0]},{&g_65[6][2][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&l_35}},{{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&l_35},{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&l_35},{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]}},{{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&l_35},{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&l_35},{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]}},{{&l_35,&g_65[1][0][0],&l_35,&l_35},{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&l_35},{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&l_35}},{{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&l_35},{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&l_35},{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]}},{{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&l_35},{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&l_35},{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]}},{{&l_35,&g_65[1][0][0],&l_35,&l_35},{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&l_35},{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&l_35}},{{&g_65[1][0][0],&g_65[1][0][0],&g_65[6][2][0],&g_65[1][0][0]},{&g_65[1][0][0],&l_35,&l_35,&g_65[1][0][0]},{&l_35,&g_65[1][0][0],&l_35,&g_65[6][2][0]},{&l_35,&l_35,&g_65[1][0][0],&l_35},{&l_35,&g_65[6][2][0],&g_65[6][2][0],&l_35},{&g_65[6][2][0],&l_35,&g_65[6][2][0],&g_65[6][2][0]},{&l_35,&l_35,&g_65[1][0][0],&l_35}}};
                int i, j, k;
                p_32 = p_32;
                (*p_32) = ((void*)0 != &g_64[2][1][5]);
                for (l_280 = 0; (l_280 <= 2); l_280 += 1)
                {
                    unsigned l_520 = 0x1AD9B216L;
                    int *l_533 = (void*)0;
                    int ***l_555 = &l_518[0][4][1];
                    unsigned short l_560[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_560[i] = 0x4A36L;
                }
            }
        }
        for (g_361 = 0; (g_361 > (-3)); g_361--)
        {
            unsigned l_580 = 0x382FCDAAL;
            int ***l_594 = &g_64[2][1][1];
            unsigned l_607 = 2UL;
            int l_610 = 0x7F650998L;
        }
    }
    else
    {
        (*l_613) = (void*)0;
    }
    (*l_613) = l_631;
    return p_32;
}







static short func_40(unsigned p_41)
{
    int *l_396 = &g_10;
    int l_433 = 9L;
    if ((safe_unary_minus_func_uint32_t_u(((l_396 != l_396) && 0x3DF4E217L))))
    {
        int *l_397 = &g_191[5];
        int **l_398 = (void*)0;
        int **l_399 = (void*)0;
        int **l_400 = &l_397;
        (*l_400) = l_397;
        if ((safe_mod_func_uint16_t_u_u(0UL, (*l_396))))
        {
            int *l_403[8][6] = {{&g_191[8],&g_191[5],&g_191[5],&g_191[8],&g_191[5],&g_191[5]},{&g_191[8],&g_191[5],&g_191[5],&g_191[8],&g_191[5],&g_191[5]},{&g_191[8],&g_191[5],&g_191[5],&g_191[8],&g_191[5],&g_191[5]},{&g_191[8],&g_191[5],&g_191[5],&g_191[8],&g_191[5],&g_191[5]},{&g_191[8],&g_191[5],&g_191[5],&g_191[8],&g_191[5],&g_191[5]},{&g_191[8],&g_191[5],&g_191[5],&g_191[8],&g_191[5],&g_191[5]},{&g_191[8],&g_191[5],&g_191[5],&g_191[8],&g_191[5],&g_191[5]},{&g_191[8],&g_191[5],&g_191[5],&g_191[8],&g_191[5],&g_191[5]}};
            int i, j;
            (**l_400) = ((*l_400) != l_403[2][2]);
            (*l_400) = l_403[6][2];
        }
        else
        {
            unsigned char l_406 = 0xC3L;
            int *l_412[2][2];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_412[i][j] = &g_10;
            }
lbl_427:
            (*l_396) = (safe_add_func_uint32_t_u_u((&l_396 == (void*)0), l_406));
            if ((safe_rshift_func_int8_t_s_s((*l_396), 6)))
            {
                int l_411 = 0x7671CB16L;
                (*l_396) = (safe_lshift_func_int16_t_s_u(p_41, func_47(l_396, func_51(g_361, l_411, &l_411, l_412[0][0], ((0xA926L == 1L) & (((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(g_201[4][0], 5)), l_411)) && (*l_396)) > g_191[5]))), p_41)));
            }
            else
            {
                int *l_428[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_428[i] = &g_10;
                for (l_406 = 0; (l_406 < 18); l_406++)
                {
                    int ***l_419 = (void*)0;
                    int ***l_420 = &l_399;
                    (*l_420) = &g_65[8][2][0];
                    for (p_41 = 0; (p_41 < 28); p_41++)
                    {
                        (**l_400) = (safe_add_func_uint16_t_u_u(g_99, (~(safe_rshift_func_int16_t_s_s(0L, 14)))));
                        if (p_41)
                            break;
                    }
                    if (p_41)
                    {
                        if (g_8)
                            goto lbl_427;
                    }
                    else
                    {
                        (*l_400) = l_428[0];
                        (**l_420) = (**l_420);
                    }
                    return g_191[9];
                }
            }
        }
    }
    else
    {
        unsigned l_429 = 0x547AB530L;
        int *l_430 = &g_10;
        l_396 = l_430;
    }
    for (g_99 = 0; (g_99 != 14); g_99 = safe_add_func_int8_t_s_s(g_99, 1))
    {
        return p_41;
    }
    return l_433;
}







static unsigned char func_42(short p_43, unsigned p_44)
{
    int *l_281 = &g_191[2];
    int *l_297 = (void*)0;
    int l_300 = (-5L);
    int *l_308[6] = {&g_191[3],(void*)0,(void*)0,&g_191[3],(void*)0,(void*)0};
    int **l_355 = (void*)0;
    unsigned short l_360[3];
    int i;
    for (i = 0; i < 3; i++)
        l_360[i] = 65534UL;
    if ((((void*)0 != l_281) > 0x8EB8L))
    {
        int l_282[3];
        int i;
        for (i = 0; i < 3; i++)
            l_282[i] = 0xDA0CBBA4L;
        (*l_281) = ((l_282[0] ^ (safe_mod_func_uint32_t_u_u(g_191[5], (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s(((void*)0 != l_281))), 8))))) >= 255UL);
        return l_282[0];
    }
    else
    {
        int *l_288[8][3][1] = {{{&g_191[5]},{(void*)0},{&g_10}},{{(void*)0},{&g_191[5]},{(void*)0}},{{&g_10},{(void*)0},{&g_191[5]}},{{(void*)0},{&g_10},{(void*)0}},{{&g_191[5]},{(void*)0},{&g_10}},{{(void*)0},{&g_191[5]},{(void*)0}},{{&g_10},{(void*)0},{&g_191[5]}},{{(void*)0},{&g_10},{(void*)0}}};
        int *l_296 = &g_10;
        int i, j, k;
        l_281 = (void*)0;
        (*l_296) = p_44;
    }
    if (l_300)
    {
        unsigned l_303 = 4294967295UL;
        int *l_304 = &g_191[5];
        if ((safe_div_func_uint16_t_u_u(((&g_65[1][1][0] != (void*)0) | l_303), g_8)))
        {
            int **l_305[9][5][4] = {{{&g_65[0][0][0],(void*)0,&l_304,&g_65[1][2][0]},{&l_281,&g_65[6][2][0],&g_65[5][0][0],&l_304},{&l_297,&g_65[6][2][0],&g_65[3][1][0],&g_65[1][2][0]},{&g_65[6][2][0],(void*)0,&g_65[6][2][0],&l_297},{(void*)0,&l_297,&l_304,(void*)0}},{{(void*)0,&g_65[1][2][0],&l_304,&g_65[0][0][0]},{&g_65[6][2][0],(void*)0,&l_281,&l_304},{&g_65[5][0][0],&g_65[1][2][0],&g_65[5][0][0],&l_304},{&g_65[0][2][0],(void*)0,&l_304,&g_65[0][0][0]},{&l_281,(void*)0,(void*)0,(void*)0}},{{&l_304,&l_297,(void*)0,&g_65[5][0][0]},{&l_281,(void*)0,&l_304,&g_65[1][2][0]},{&g_65[0][2][0],&l_304,&g_65[5][0][0],&g_65[6][2][0]},{&g_65[5][0][0],&g_65[6][2][0],&l_281,(void*)0},{&g_65[6][2][0],(void*)0,&l_304,&l_297}},{{(void*)0,&l_304,&l_304,(void*)0},{(void*)0,&g_65[1][2][0],&g_65[6][2][0],&l_297},{&g_65[6][2][0],(void*)0,&g_65[3][1][0],&l_304},{&l_297,&l_297,&g_65[5][0][0],&l_304},{&l_281,(void*)0,&l_304,&l_297}},{{&l_281,&g_65[1][2][0],&g_65[6][2][0],(void*)0},{&l_297,&l_304,(void*)0,&l_297},{&g_65[6][2][0],(void*)0,&l_304,(void*)0},{&g_65[0][2][0],&g_65[6][2][0],&l_281,&g_65[6][2][0]},{&l_281,&l_281,&g_65[6][2][0],&g_65[6][2][0]}},{{&l_281,&l_297,(void*)0,&g_65[3][1][0]},{&g_65[5][0][0],(void*)0,&g_65[1][2][0],&g_65[5][0][0]},{&g_65[5][0][0],&l_304,(void*)0,&l_304},{&l_281,&g_65[5][0][0],&g_65[6][2][0],&g_65[6][2][0]},{&l_281,&l_304,&g_65[0][2][0],(void*)0}},{{&l_297,&l_281,&l_281,&l_304},{(void*)0,&g_65[6][2][0],&l_281,&l_281},{(void*)0,(void*)0,&l_297,&l_281},{(void*)0,&g_65[2][0][0],&l_281,&g_65[6][2][0]},{&g_65[6][2][0],&l_304,&g_65[3][1][0],&l_281}},{{&l_281,&l_304,&g_65[0][0][0],&g_65[6][2][0]},{&l_304,&g_65[2][0][0],(void*)0,&l_281},{&l_281,(void*)0,(void*)0,&l_281},{&g_65[5][0][0],&g_65[6][2][0],(void*)0,&l_304},{&l_304,&l_281,&g_65[6][2][0],(void*)0}},{{&g_65[3][1][0],&l_304,&g_65[3][1][0],&g_65[6][2][0]},{&l_297,&g_65[5][0][0],&l_297,&l_304},{(void*)0,&l_304,&l_281,&g_65[5][0][0]},{(void*)0,(void*)0,&l_281,&g_65[3][1][0]},{(void*)0,&l_297,&l_297,&g_65[6][2][0]}}};
            int i, j, k;
            l_297 = l_304;
        }
        else
        {
            unsigned l_316 = 4UL;
            int ***l_323 = &g_64[2][1][5];
            l_308[2] = l_304;
            for (l_300 = (-24); (l_300 <= (-28)); l_300 = safe_sub_func_uint8_t_u_u(l_300, 1))
            {
                int **l_315 = &l_308[2];
                int l_334 = (-1L);
                (*l_304) = (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((&g_65[3][1][0] == l_315), g_8)), (+((4UL | (g_191[1] ^ p_43)) <= l_316))));
                (*l_304) = (safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(l_316, (safe_sub_func_uint8_t_u_u(g_191[3], (((void*)0 == l_323) ^ p_43))))), (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(l_316, ((((((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((((((*l_304) || (safe_rshift_func_uint8_t_u_u(g_191[3], 7))) ^ 0x24L) < l_334) < g_8) || 0xB6661C08L), 7)), 1L)) != p_44) > g_191[5]) > g_201[1][2]) || 0x2706L) && g_99))) | 0x1D3EE78AL), 4))));
                for (l_334 = 5; (l_334 >= 1); l_334 -= 1)
                {
                    for (p_44 = 1; (p_44 <= 9); p_44 += 1)
                    {
                        int i;
                        (*l_315) = &g_191[(l_334 + 3)];
                    }
                    (*l_315) = (void*)0;
                }
            }
        }
        l_308[2] = l_304;
    }
    else
    {
        int *l_335 = (void*)0;
        int **l_336[6][2][8] = {{{&l_335,&l_308[2],&l_281,&g_65[6][2][0],&l_308[2],(void*)0,(void*)0,&l_297},{&g_65[6][2][0],&l_308[3],&l_308[2],&l_308[2],(void*)0,&g_65[0][1][0],&l_308[2],&l_308[3]}},{{&l_308[2],&l_281,(void*)0,&g_65[4][2][0],&l_281,(void*)0,&l_308[2],(void*)0},{(void*)0,&l_308[2],&l_281,&l_281,&g_65[4][2][0],(void*)0,&l_335,(void*)0}},{{&l_335,&l_281,(void*)0,&g_65[6][2][0],&l_281,&g_65[0][1][0],(void*)0,&l_281},{(void*)0,&l_308[2],&g_65[6][0][0],&l_297,(void*)0,&l_297,&g_65[6][0][0],&l_308[2]}},{{(void*)0,&g_65[6][0][0],(void*)0,&l_281,&l_308[2],&l_297,&l_281,&l_308[2]},{&g_65[6][2][0],&l_281,&g_65[6][2][0],&g_65[6][2][0],(void*)0,(void*)0,&l_281,&l_335}},{{&g_65[6][0][0],&g_65[6][2][0],(void*)0,&l_297,&l_297,&l_308[2],&g_65[6][0][0],(void*)0},{&l_297,&l_308[2],&g_65[6][0][0],(void*)0,&l_281,&l_281,(void*)0,&g_65[6][0][0]}},{{&l_281,&l_281,(void*)0,(void*)0,&l_308[2],(void*)0,&l_335,&l_281},{(void*)0,&l_308[3],&l_281,&g_65[6][0][0],&l_297,&l_297,&l_308[2],&l_281}}};
        unsigned char l_370[3][10] = {{0x05L,255UL,0x14L,0x9CL,0x9CL,0x14L,255UL,0x05L,255UL,0x14L},{0UL,0UL,255UL,0UL,0x9CL,0x05L,0x05L,0x9CL,0UL,255UL},{0UL,0UL,255UL,0x9CL,255UL,0x9CL,255UL,0UL,0UL,255UL}};
        int i, j, k;
        l_281 = l_335;
        for (p_44 = 2; (p_44 <= 6); p_44 += 1)
        {
            int *l_339 = &g_191[5];
            int *l_362 = (void*)0;
            int *l_375 = &g_191[5];
            if ((p_44 >= (p_44 && (!(*l_339)))))
            {
                int *l_342 = &g_191[6];
                (*l_339) = (((g_99 < (safe_rshift_func_int16_t_s_s(g_191[4], ((*l_339) ^ 0x73BCE260L)))) || g_191[1]) < 249UL);
                for (g_10 = 0; (g_10 <= 6); g_10 += 1)
                {
                    int *l_353 = &g_191[5];
                    for (p_43 = 6; (p_43 >= 1); p_43 -= 1)
                    {
                        int i, j;
                        g_191[(p_43 + 1)] = ((safe_mod_func_int32_t_s_s(((((safe_add_func_int32_t_s_s(g_201[g_10][p_43], (safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_201[p_44][(g_10 + 2)], g_191[(p_43 + 3)])), (safe_div_func_uint32_t_u_u(((g_191[(p_43 + 3)] & g_8) && p_43), g_191[(p_43 + 3)])))))) != (-6L)) <= 1UL) | p_44), p_44)) <= g_99);
                        if (p_43)
                            continue;
                    }
                    l_339 = l_353;
                    l_308[5] = l_339;
                }
                l_342 = l_342;
                return p_43;
            }
            else
            {
                (*l_339) = p_44;
            }
            if (p_44)
                break;
            for (l_300 = 0; (l_300 <= 6); l_300 += 1)
            {
                int **l_354 = &l_335;
                int i, j;
                l_355 = l_354;
                (*l_339) = func_47(l_339, l_339, (p_43 && 4294967295UL));
                for (g_99 = 0; (g_99 <= 6); g_99 += 1)
                {
                    int i;
                    (*l_354) = &g_191[g_99];
                    for (p_43 = 1; (p_43 >= 0); p_43 -= 1)
                    {
                        int i, j, k;
                        (*l_355) = l_362;
                        (*l_339) = p_44;
                        g_191[g_99] = (g_99 != ((void*)0 != &l_362));
                    }
                    (*l_339) = (safe_mul_func_uint16_t_u_u((p_44 == (safe_add_func_int16_t_s_s(((0x868164DCL <= (safe_unary_minus_func_uint32_t_u((safe_mod_func_uint16_t_u_u((((void*)0 != &g_65[6][2][0]) >= g_191[4]), (l_370[1][5] | ((g_201[4][0] & ((safe_rshift_func_int8_t_s_u(g_201[4][0], 3)) <= (((safe_mod_func_uint16_t_u_u((((g_191[8] < g_201[1][2]) ^ g_191[2]) || g_201[p_44][(p_44 + 3)]), g_10)) != 6L) | 4294967292UL))) | 0x8FF7L))))))) & p_44), 1L))), g_201[4][0]));
                    (*l_355) = (*l_355);
                }
                l_375 = (*l_355);
            }
            for (g_99 = 20; (g_99 > 33); ++g_99)
            {
                int ***l_378 = &l_336[3][1][2];
                int *l_379 = &g_191[7];
                (*l_378) = &l_362;
                l_379 = l_339;
                (*l_339) = (l_339 == l_375);
            }
        }
        for (g_99 = 0; (g_99 == 30); g_99 = safe_add_func_int8_t_s_s(g_99, 5))
        {
            char l_385[2][7][4] = {{{(-8L),0x52L,(-8L),0x7DL},{0x5DL,(-8L),0L,0x52L},{0x8FL,(-9L),0L,(-9L)},{0x5DL,0xABL,(-8L),1L},{(-8L),0xABL,1L,(-9L)},{1L,(-9L),0x5DL,0x52L},{1L,(-8L),1L,0x7DL}},{{(-8L),0x52L,(-8L),0x7DL},{0x5DL,(-8L),0L,0x52L},{0x8FL,(-9L),0L,(-9L)},{0x5DL,0xABL,(-8L),1L},{(-8L),0xABL,1L,(-9L)},{1L,(-9L),0x5DL,0x52L},{1L,(-8L),1L,0x7DL}}};
            int l_394 = 0x17A05B44L;
            int i, j, k;
            l_394 = (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(8L)), ((l_385[1][3][1] >= (((void*)0 == &g_65[6][2][0]) & ((0x24L != (safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_8, (safe_rshift_func_int8_t_s_u(g_10, (~(safe_rshift_func_uint8_t_u_u(p_43, ((&l_308[3] != &g_65[6][2][0]) ^ (-1L))))))))), 0x75L))) & l_385[1][4][3]))) | g_201[4][0])));
        }
        return p_44;
    }
    return p_44;
}







static int func_47(int * p_48, int * p_49, int p_50)
{
    int *l_278[3];
    int **l_279 = &l_278[1];
    int i;
    for (i = 0; i < 3; i++)
        l_278[i] = &g_191[4];
    for (p_50 = 0; (p_50 <= 9); ++p_50)
    {
        unsigned l_277 = 4UL;
        (*p_48) = l_277;
    }
    (*l_279) = l_278[2];
    return (**l_279);
}







static int * func_51(unsigned short p_52, unsigned short p_53, int * p_54, int * p_55, int p_56)
{
    unsigned short l_60[4][7];
    int **l_74 = &g_65[5][1][0];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
            l_60[i][j] = 0x85E3L;
    }
    for (p_56 = 0; (p_56 != (-20)); p_56 = safe_sub_func_int16_t_s_s(p_56, 3))
    {
        int l_59 = (-1L);
        char l_75 = 0xD7L;
        int *l_89 = &g_10;
        unsigned l_107 = 0x8B88EAD4L;
        if (((((&g_10 == &g_10) ^ g_8) && l_59) ^ p_56))
        {
            int *l_61 = &g_10;
            for (l_59 = 3; (l_59 >= 0); l_59 -= 1)
            {
                int **l_62 = (void*)0;
                int i, j;
                (*p_54) = 0x1F916744L;
                p_54 = l_61;
                (*l_61) = l_60[l_59][(l_59 + 1)];
            }
            if ((((!(safe_unary_minus_func_int8_t_s(((((void*)0 == g_64[2][1][5]) > (((safe_rshift_func_int16_t_s_s((g_8 <= (p_52 >= 0UL)), 4)) >= 0xB8CCL) ^ (safe_mul_func_int16_t_s_s((g_10 ^ (safe_mul_func_uint16_t_u_u((l_74 != &l_61), g_8))), l_75)))) & g_10)))) >= p_52) > (-5L)))
            {
                char l_80 = 0x71L;
                int *l_96 = &g_10;
                for (l_59 = (-29); (l_59 <= 3); l_59 = safe_add_func_uint16_t_u_u(l_59, 3))
                {
                    for (l_75 = 0; (l_75 < 13); l_75 = safe_add_func_int8_t_s_s(l_75, 9))
                    {
                        int *l_81 = &g_10;
                        (*p_55) = 8L;
                        if (l_80)
                            break;
                        return l_81;
                    }
                    (*p_55) = (*l_61);
                }
                if ((safe_rshift_func_uint8_t_u_u(((l_61 != p_54) >= g_8), p_53)))
                {
                    int *l_86 = (void*)0;
                    for (l_59 = (-29); (l_59 >= (-25)); l_59 = safe_add_func_int8_t_s_s(l_59, 1))
                    {
                        (*l_74) = p_54;
                    }
                    (*l_74) = (*l_74);
                    for (l_80 = 0; (l_80 <= 0); l_80 += 1)
                    {
                        if ((*p_55))
                            break;
                        if ((*p_54))
                            break;
                    }
                    (*l_74) = l_86;
                }
                else
                {
                    short l_93 = 0L;
                    for (l_59 = 0; (l_59 <= (-19)); l_59 = safe_sub_func_uint32_t_u_u(l_59, 6))
                    {
                        (*l_74) = l_89;
                        return p_54;
                    }
                    for (p_53 = 0; (p_53 < 57); p_53 = safe_add_func_uint8_t_u_u(p_53, 1))
                    {
                        unsigned l_92 = 1UL;
                        (*l_74) = p_54;
                        (*l_74) = p_54;
                        (*p_55) = (((*l_89) && l_92) <= p_52);
                        (*l_89) = 0xE0A50B65L;
                    }
                    if (((((void*)0 == p_55) | (*p_54)) >= (*p_55)))
                    {
                        (*l_74) = p_55;
                        if (l_93)
                            continue;
                        (*p_54) = ((safe_add_func_uint8_t_u_u(g_10, g_10)) ^ ((*l_89) && (*l_61)));
                    }
                    else
                    {
                        (*l_89) = (-8L);
                        (*l_74) = l_96;
                        if ((*p_55))
                            continue;
                        return p_55;
                    }
                    for (g_10 = 0; (g_10 <= (-19)); g_10--)
                    {
                        int *l_100 = &g_10;
                        (*l_74) = p_54;
                        if (g_99)
                            continue;
                        (*l_74) = l_100;
                        if ((*l_100))
                            continue;
                    }
                }
                (*l_89) = ((((void*)0 == &l_96) || ((safe_lshift_func_uint8_t_u_u(3UL, p_53)) ^ p_56)) == (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(g_8, 1L)), l_107)));
            }
            else
            {
                unsigned l_112 = 0xC6649A34L;
                for (p_53 = (-22); (p_53 != 24); p_53++)
                {
                    for (p_52 = (-29); (p_52 >= 26); p_52++)
                    {
                        unsigned char l_113 = 0UL;
                        p_55 = l_61;
                        (*l_74) = p_54;
                        (*l_61) = l_112;
                        (*l_89) = ((l_113 > p_52) >= (!(p_56 || ((((safe_div_func_int8_t_s_s((*l_89), p_56)) <= (p_53 <= g_8)) >= p_56) >= (safe_sub_func_int32_t_s_s((*p_54), (*p_54)))))));
                    }
                    for (g_99 = 0; (g_99 < 53); ++g_99)
                    {
                        if ((*p_54))
                            break;
                    }
                }
                (*l_61) = (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(l_112, 3)), (p_52 || l_112)));
            }
            (*l_61) = (*p_54);
        }
        else
        {
            unsigned short l_124 = 65535UL;
            if ((+0x5F9F9906L))
            {
                (*p_55) = l_124;
            }
            else
            {
                unsigned l_139[4];
                int *l_150 = &g_10;
                int i;
                for (i = 0; i < 4; i++)
                    l_139[i] = 1UL;
                (*l_89) = (*p_54);
                if ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((p_53 && (safe_mul_func_uint16_t_u_u(p_52, 3UL))), (p_53 <= ((safe_mul_func_int16_t_s_s((((255UL != p_53) && 253UL) != (~((((safe_mul_func_int16_t_s_s(l_139[0], p_52)) <= (-2L)) != p_52) & 0x9760D513L))), g_8)) && 0x0D90DC82L)))), (*l_89))) ^ l_139[0]), (-7L))), 4)))
                {
                    int l_142[10] = {0x32282D30L,0x32282D30L,0x32282D30L,0x32282D30L,0x32282D30L,0x32282D30L,0x32282D30L,0x32282D30L,0x32282D30L,0x32282D30L};
                    int i;
                    for (l_107 = (-17); (l_107 < 55); l_107 = safe_add_func_int8_t_s_s(l_107, 1))
                    {
                        (*p_54) = (l_142[2] != p_52);
                        (*p_55) = ((void*)0 == p_54);
                        return p_55;
                    }
                }
                else
                {
                    unsigned char l_145 = 0xBDL;
                    for (g_99 = (-26); (g_99 <= 60); ++g_99)
                    {
                        if (l_145)
                            break;
                        (*l_74) = p_54;
                        return p_55;
                    }
                }
                for (p_52 = 18; (p_52 == 32); ++p_52)
                {
                    for (p_53 = 0; p_53 < 10; p_53 += 1)
                    {
                        for (l_75 = 0; l_75 < 3; l_75 += 1)
                        {
                            for (l_124 = 0; l_124 < 1; l_124 += 1)
                            {
                                g_65[p_53][l_75][l_124] = (void*)0;
                            }
                        }
                    }
                }
                for (g_10 = (-9); (g_10 > (-18)); g_10 = safe_sub_func_uint8_t_u_u(g_10, 1))
                {
                    (*l_74) = l_150;
                }
            }
            return p_54;
        }
        (*p_55) = (*p_55);
    }
    for (p_56 = 0; (p_56 >= 7); p_56 = safe_add_func_uint32_t_u_u(p_56, 8))
    {
        unsigned short l_175[6] = {65528UL,65528UL,65528UL,65528UL,65528UL,65528UL};
        int *l_176 = (void*)0;
        int l_216 = 0x830702C5L;
        unsigned l_227 = 4UL;
        int i;
        if ((p_54 == p_55))
        {
            short l_174 = 7L;
            int ***l_189 = &g_64[2][1][5];
            for (p_53 = 19; (p_53 >= 4); --p_53)
            {
                int ***l_155 = &l_74;
                (*l_155) = &p_54;
            }
            for (g_99 = 0; (g_99 <= 23); g_99 = safe_add_func_int8_t_s_s(g_99, 2))
            {
                int l_158 = 0x70E6FC06L;
                unsigned short l_177[6][6][3] = {{{2UL,0xC45EL,0xF0F4L},{0x6970L,65527UL,0x398AL},{65532UL,0xC45EL,0UL},{65531UL,0x398AL,0x516BL},{0xC45EL,0xD84EL,0xD84EL},{0x6970L,65531UL,0x516BL}},{{0x94A5L,0xF0F4L,0UL},{0x9872L,0x06E3L,0x398AL},{1UL,2UL,1UL},{0x398AL,0x06E3L,0x9872L},{0UL,0xF0F4L,0x94A5L},{0x516BL,65531UL,0x6970L}},{{0xD84EL,0xD84EL,0xC45EL},{0x516BL,0x398AL,65531UL},{0UL,0xC45EL,65532UL},{0x398AL,65527UL,65527UL},{1UL,0UL,65532UL},{0x9872L,0x8B7BL,65531UL}},{{0x94A5L,0xAE4CL,0xC45EL},{0x6970L,0UL,0x6970L},{0xC45EL,0xAE4CL,0x94A5L},{65531UL,0x8B7BL,0x9872L},{65532UL,0UL,1UL},{65527UL,65527UL,0x398AL}},{{65532UL,0xC45EL,0UL},{65531UL,0x398AL,0x516BL},{0xC45EL,0xD84EL,0xD84EL},{0x6970L,65531UL,0x516BL},{0x94A5L,0xF0F4L,0UL},{0x9872L,0x06E3L,0x398AL}},{{1UL,2UL,1UL},{0x398AL,0x06E3L,0x9872L},{0UL,0xF0F4L,0x94A5L},{0x516BL,65527UL,0x516BL},{0xAE4CL,0xAE4CL,1UL},{0x181CL,0x6970L,65527UL}}};
                int i, j, k;
                (*p_54) = l_158;
                for (p_52 = 0; (p_52 <= 2); p_52 += 1)
                {
                    int i, j, k;
                    (*p_55) = (((safe_rshift_func_uint8_t_u_s(g_8, 0)) <= (safe_lshift_func_int8_t_s_u((g_99 == (safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_mul_func_uint16_t_u_u(((&g_64[p_52][p_52][(p_52 + 3)] != (void*)0) ^ (l_158 || ((void*)0 != &g_65[6][2][0]))), (safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((-1L), l_174)), l_174)) < l_175[4]), l_158)))))), 2L))), p_56))) == 0x56EFL);
                    for (p_53 = 0; (p_53 <= 0); p_53 += 1)
                    {
                        int i, j, k;
                        g_65[(p_52 + 7)][p_53][p_53] = l_176;
                    }
                    if (l_177[2][2][0])
                        break;
                }
            }
            for (p_52 = (-13); (p_52 >= 25); p_52 = safe_add_func_uint8_t_u_u(p_52, 8))
            {
                for (g_10 = 0; (g_10 != 6); ++g_10)
                {
                    int ***l_188 = &l_74;
                    int *l_190 = &g_191[5];
                    p_55 = p_54;
                }
                (*p_54) = (*p_55);
                (*l_74) = p_55;
                for (l_174 = 3; (l_174 >= 0); l_174 -= 1)
                {
                    int i;
                    l_176 = &g_191[(l_174 + 4)];
                }
            }
        }
        else
        {
            int **l_215 = &g_65[2][1][0];
            (*l_74) = (void*)0;
            for (g_99 = 0; (g_99 <= 0); g_99 += 1)
            {
                int l_192 = 0xB54A5956L;
                (*l_74) = (void*)0;
                for (p_53 = 0; (p_53 <= 0); p_53 += 1)
                {
                    int i, j, k;
                    if ((*p_54))
                        break;
                    if (l_192)
                        break;
                }
                return p_54;
            }
            for (g_10 = 13; (g_10 != (-22)); g_10--)
            {
                char l_204 = 1L;
                int l_228[3];
                int ***l_247 = &l_74;
                int *l_248 = &l_216;
                int i;
                for (i = 0; i < 3; i++)
                    l_228[i] = 0x45F0763AL;
            }
        }
        if (((0x2BA6L <= (p_55 != (*l_74))) & (safe_rshift_func_uint8_t_u_u(((void*)0 == p_55), 3))))
        {
            return p_54;
        }
        else
        {
            int *l_254 = (void*)0;
            short l_257 = (-1L);
            for (p_52 = 0; (p_52 == 46); ++p_52)
            {
                unsigned l_253 = 4294967291UL;
                for (g_99 = 0; (g_99 <= 2); g_99 += 1)
                {
                    int i, j, k;
                    (*l_74) = p_55;
                    if (l_253)
                    {
                        (*l_74) = l_254;
                    }
                    else
                    {
                        int i, j, k;
                        (*l_74) = p_55;
                        (*l_74) = (void*)0;
                    }
                    (*p_55) = (((g_8 < (&g_64[2][0][9] == (void*)0)) <= ((*p_55) != (l_253 & (*p_55)))) < ((p_53 != (g_201[4][0] <= (safe_mul_func_int8_t_s_s((g_191[5] == g_201[0][6]), l_60[3][6])))) | (*p_55)));
                }
                l_257 = (*p_55);
                (*p_55) = 0L;
            }
            for (p_53 = 0; (p_53 <= 3); p_53 += 1)
            {
                int i, j;
                (*p_55) = ((((0x3E6DL ^ (safe_sub_func_int8_t_s_s((&g_64[2][2][0] != (void*)0), 0xAAL))) < ((!((+(((0UL < l_60[p_53][p_53]) != (safe_sub_func_int8_t_s_s(l_257, g_191[9]))) < (((-1L) != g_191[9]) <= g_201[1][9]))) || 9L)) || (*p_55))) >= (*p_55)) && g_8);
                (*l_74) = p_55;
                return l_254;
            }
            for (g_10 = 0; (g_10 <= 6); g_10 += 1)
            {
                int l_262 = 0x82A85E6CL;
                int *l_263 = &g_191[5];
                unsigned l_270[7];
                int l_272 = 0x4E1413FFL;
                int i;
                for (i = 0; i < 7; i++)
                    l_270[i] = 3UL;
                (*l_263) = l_262;
            }
        }
        return p_55;
    }
    return (*l_74);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_191[i], "g_191[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_201[i][j], "g_201[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_361, "g_361", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_701[i], "g_701[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_901[i], "g_901[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1023, "g_1023", print_hash_value);
    transparent_crc(g_1052, "g_1052", print_hash_value);
    transparent_crc(g_1058, "g_1058", print_hash_value);
    transparent_crc(g_1242, "g_1242", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
