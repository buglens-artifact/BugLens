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
   unsigned short f0;
   const unsigned short f1;
   unsigned f2;
   int f3;
   unsigned f4;
   short f5;
   char f6;
   int f7;
};

struct S1 {
   unsigned f0 : 2;
   short f1;
   unsigned f2 : 7;
   const signed f3 : 9;
   signed f4 : 20;
   signed f5 : 26;
};


static int g_5[6] = {0x34111D01L,0xE974A520L,0x34111D01L,0x34111D01L,0xE974A520L,0x34111D01L};
static struct S0 g_19 = {0UL,0UL,4294967295UL,0xD2AC30BCL,0x0BECC33BL,-1L,0x15L,8L};
static struct S1 g_46[10][2] = {{{0,0L,1,9,-835,6778},{1,1L,6,-15,284,1256}},{{0,0xB8EFL,1,16,919,-3743},{1,0x2651L,1,5,450,4315}},{{1,1L,6,-15,284,1256},{1,0x2651L,1,5,450,4315}},{{0,0xB8EFL,1,16,919,-3743},{1,1L,6,-15,284,1256}},{{0,0L,1,9,-835,6778},{0,0L,1,9,-835,6778}},{{0,0L,1,9,-835,6778},{1,1L,6,-15,284,1256}},{{0,0xB8EFL,1,16,919,-3743},{1,0x2651L,1,5,450,4315}},{{1,1L,6,-15,284,1256},{1,0x2651L,1,5,450,4315}},{{0,0xB8EFL,1,16,919,-3743},{1,1L,6,-15,284,1256}},{{0,0L,1,9,-835,6778},{0,0L,1,9,-835,6778}}};
static int * const g_74[5] = {&g_19.f3,&g_19.f3,&g_19.f3,&g_19.f3,&g_19.f3};
static int * const *g_73 = &g_74[2];
static struct S0 *g_79[1] = {(void*)0};
static struct S0 ** const g_78 = &g_79[0];
static int *g_115[7] = {&g_19.f3,&g_19.f3,&g_19.f3,&g_19.f3,&g_19.f3,&g_19.f3,&g_19.f3};
static int g_151 = 0x94F36023L;
static const short g_191 = 0x05CBL;
static int g_214[10] = {0x3C09BFC3L,0x3C09BFC3L,(-1L),1L,(-1L),0x3C09BFC3L,0x3C09BFC3L,0x3C09BFC3L,(-2L),0x3C09BFC3L};
static struct S0 g_224 = {1UL,0x20DDL,0xB0E59E16L,0x0E59279DL,0x0BB389C6L,9L,1L,0L};
static const struct S0 *g_223 = &g_224;
static const struct S1 *g_268 = (void*)0;
static struct S1 g_270 = {1,0xE172L,7,1,1021,8157};
static struct S1 g_327[1][8] = {{{0,0x9D50L,10,6,-170,1691},{0,0x9D50L,10,6,-170,1691},{0,0x9D50L,10,6,-170,1691},{0,0x9D50L,10,6,-170,1691},{0,0x9D50L,10,6,-170,1691},{0,0x9D50L,10,6,-170,1691},{0,0x9D50L,10,6,-170,1691},{0,0x9D50L,10,6,-170,1691}}};
static int **g_348[7][3][8] = {{{&g_115[2],&g_115[5],&g_115[5],(void*)0,&g_115[2],&g_115[6],&g_115[5],(void*)0},{(void*)0,&g_115[0],&g_115[0],&g_115[5],&g_115[1],&g_115[5],(void*)0,&g_115[5]},{&g_115[4],&g_115[5],(void*)0,&g_115[5],&g_115[5],&g_115[2],&g_115[2],(void*)0}},{{&g_115[3],(void*)0,(void*)0,&g_115[2],&g_115[0],&g_115[0],(void*)0,&g_115[5]},{(void*)0,&g_115[5],&g_115[6],&g_115[5],&g_115[5],&g_115[0],&g_115[3],&g_115[6]},{&g_115[5],&g_115[6],&g_115[5],&g_115[5],&g_115[2],&g_115[4],&g_115[5],&g_115[5]}},{{&g_115[5],(void*)0,&g_115[3],&g_115[3],(void*)0,&g_115[5],&g_115[1],&g_115[0]},{&g_115[6],&g_115[5],&g_115[2],(void*)0,&g_115[6],&g_115[4],&g_115[5],&g_115[4]},{&g_115[3],&g_115[5],&g_115[5],(void*)0,(void*)0,&g_115[4],(void*)0,&g_115[0]}},{{&g_115[1],(void*)0,(void*)0,&g_115[3],(void*)0,&g_115[6],(void*)0,&g_115[5]},{(void*)0,(void*)0,&g_115[5],&g_115[5],&g_115[5],&g_115[6],&g_115[4],&g_115[5]},{&g_115[5],(void*)0,&g_115[0],&g_115[0],&g_115[5],&g_115[5],&g_115[6],(void*)0}},{{&g_115[0],(void*)0,(void*)0,&g_115[0],&g_115[4],&g_115[5],&g_115[5],(void*)0},{&g_115[0],&g_115[0],&g_115[0],&g_115[3],&g_115[2],&g_115[4],&g_115[5],(void*)0},{&g_115[5],&g_115[5],&g_115[5],(void*)0,&g_115[5],&g_115[5],&g_115[5],&g_115[5]}},{{&g_115[5],&g_115[3],&g_115[5],&g_115[5],(void*)0,&g_115[1],&g_115[0],&g_115[5]},{&g_115[0],&g_115[6],&g_115[5],&g_115[5],(void*)0,(void*)0,&g_115[5],(void*)0},{&g_115[5],&g_115[2],&g_115[1],&g_115[5],&g_115[5],(void*)0,&g_115[5],&g_115[6]}},{{&g_115[5],&g_115[5],(void*)0,&g_115[5],&g_115[2],&g_115[5],&g_115[3],&g_115[4]},{&g_115[0],&g_115[5],&g_115[3],&g_115[0],&g_115[4],&g_115[0],&g_115[6],&g_115[5]},{&g_115[0],&g_115[3],&g_115[0],(void*)0,&g_115[5],&g_115[5],&g_115[5],(void*)0}}};
static int ***g_347 = &g_348[1][2][7];
static struct S1 g_372 = {1,0xBF1FL,5,19,-328,-2752};
static const int *g_402 = &g_151;
static char g_438 = (-1L);
static int *g_449 = &g_151;
static unsigned char g_461[1][4][1] = {{{0x9CL},{0x73L},{0x9CL},{0x73L}}};



static unsigned func_1(void);
static char func_8(const int p_9, char p_10);
static int func_11(struct S1 p_12, struct S1 p_13, const struct S1 p_14);
static struct S1 func_15(unsigned p_16, struct S0 p_17, unsigned p_18);
static int func_21(int * p_22, int * p_23, const struct S1 p_24, int p_25);
static int * func_26(const int * const p_27);
static int * const func_28(int * p_29, char p_30, int * p_31, int * const p_32);
static char func_33(const unsigned short p_34, int p_35, unsigned p_36, int * p_37);
static const int * func_38(int * p_39, struct S0 p_40, int * p_41, unsigned char p_42);
static int * func_43(unsigned char p_44, struct S1 p_45);
static unsigned func_1(void)
{
    const char l_2 = 1L;
    struct S1 l_341[2] = {{1,0x1C0AL,4,21,180,-5890},{1,0x1C0AL,4,21,180,-5890}};
    int *l_342[3][1];
    char l_350 = 0x72L;
    struct S0 *l_357 = &g_224;
    struct S0 *l_362 = &g_19;
    unsigned l_380 = 0x37E64523L;
    short l_383[4][10] = {{0xCE08L,0L,0L,0x26B5L,0L,4L,0L,0xD165L,1L,0x3C2FL},{0x52B7L,0xD977L,0x52B7L,0L,1L,0L,1L,0xBCF9L,0x3C2FL,0x26B5L},{0x26B5L,0L,0x7107L,0L,0xBCF9L,0xCE08L,0xCE08L,0xBCF9L,0L,0x7107L},{4L,4L,0x52B7L,0x0020L,0x3C2FL,0xD977L,(-1L),0xD165L,0xBCF9L,0L}};
    const int *l_400 = &g_5[4];
    unsigned l_405 = 0x384494DBL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_342[i][j] = (void*)0;
    }
    if (l_2)
    {
        const struct S1 l_257 = {1,1L,10,6,-23,-229};
        unsigned char l_340 = 1UL;
        struct S0 * const l_356 = (void*)0;
        int *l_376[10][9][2] = {{{&g_224.f3,&g_224.f3},{&g_5[2],&g_214[2]},{(void*)0,&g_151},{&g_214[9],&g_19.f3},{&g_19.f3,&g_5[2]},{&g_224.f3,&g_214[2]},{&g_214[2],&g_214[2]},{(void*)0,&g_224.f3},{&g_5[2],&g_5[2]}},{{&g_151,&g_224.f3},{&g_19.f3,(void*)0},{&g_5[5],&g_224.f3},{&g_214[9],&g_214[9]},{&g_214[2],&g_5[3]},{&g_224.f3,&g_224.f3},{&g_151,&g_5[5]},{&g_214[7],(void*)0},{(void*)0,&g_224.f3}},{{&g_151,(void*)0},{&g_5[2],&g_214[6]},{&g_214[0],&g_214[0]},{&g_224.f3,(void*)0},{&g_224.f3,&g_5[5]},{&g_151,(void*)0},{&g_5[2],&g_151},{&g_214[2],&g_224.f3},{&g_214[2],&g_151}},{{&g_5[2],(void*)0},{&g_151,&g_5[5]},{&g_224.f3,(void*)0},{&g_224.f3,&g_5[0]},{&g_5[0],&g_214[3]},{(void*)0,&g_19.f3},{&g_5[2],&g_151},{(void*)0,&g_151},{&g_151,&g_5[2]}},{{&g_19.f3,&g_224.f3},{&g_224.f3,(void*)0},{(void*)0,&g_5[2]},{&g_151,&g_151},{(void*)0,&g_151},{&g_5[3],&g_5[5]},{&g_224.f3,&g_151},{&g_151,&g_224.f3},{&g_214[0],(void*)0}},{{&g_5[2],(void*)0},{&g_5[2],&g_19.f3},{&g_5[2],&g_5[3]},{&g_5[2],&g_151},{&g_19.f3,&g_224.f3},{&g_151,&g_224.f3},{&g_151,&g_214[2]},{&g_214[6],&g_214[7]},{(void*)0,(void*)0}},{{&g_5[2],&g_151},{&g_214[4],&g_224.f3},{&g_214[2],&g_214[2]},{&g_214[9],&g_5[3]},{&g_224.f3,&g_224.f3},{&g_224.f3,&g_5[2]},{&g_214[2],&g_224.f3},{&g_224.f3,&g_5[2]},{&g_214[0],&g_5[3]}},{{(void*)0,&g_214[6]},{&g_214[9],&g_214[7]},{(void*)0,&g_214[2]},{&g_214[2],&g_19.f3},{&g_5[2],&g_19.f3},{&g_214[2],&g_214[2]},{(void*)0,&g_214[7]},{&g_214[9],&g_214[6]},{(void*)0,&g_5[3]}},{{&g_214[0],&g_5[2]},{&g_224.f3,&g_224.f3},{&g_214[2],&g_5[2]},{&g_224.f3,&g_224.f3},{&g_224.f3,&g_5[3]},{&g_214[9],&g_214[2]},{&g_214[4],&g_224.f3},{&g_214[2],(void*)0},{&g_5[2],&g_5[2]}},{{&g_214[7],&g_214[0]},{&g_224.f3,&g_214[4]},{(void*)0,(void*)0},{(void*)0,&g_224.f3},{&g_5[5],(void*)0},{&g_19.f3,&g_214[2]},{&g_214[7],&g_19.f3},{&g_214[2],(void*)0},{&g_214[9],&g_151}}};
        struct S1 l_388 = {0,1L,2,-18,711,7029};
        int l_403[2][5] = {{0xF0B213FFL,0xF0B213FFL,0L,0xF0B213FFL,0xF0B213FFL},{0xBA438DEEL,0xF0B213FFL,0xBA438DEEL,0xBA438DEEL,0xF0B213FFL}};
        int i, j, k;
        if ((0xB143E95AL & (((l_2 & (safe_lshift_func_uint8_t_u_s(l_2, 0))) >= (g_5[2] == (safe_mul_func_int8_t_s_s(func_8(func_11(func_15(g_5[4], g_19, g_19.f4), g_46[9][1], l_257), g_5[2]), g_270.f0)))) >= l_340)))
        {
            unsigned short l_345[9][9] = {{0x200BL,0x2DFBL,0xE9F5L,0x63C6L,0xFCC4L,0x3EB1L,0x63C6L,0UL,0UL},{65535UL,0x2DFBL,0UL,0x200BL,0xFCC4L,0xFCC4L,0x200BL,0UL,0x2DFBL},{0x63C6L,0x2DFBL,0x81F2L,65535UL,0xFCC4L,0x6722L,65535UL,0UL,65534UL},{0x200BL,0x2DFBL,0xE9F5L,0x63C6L,0xFCC4L,0x3EB1L,0x63C6L,0UL,0UL},{65535UL,0x2DFBL,0UL,0x200BL,0xFCC4L,0xFCC4L,0x200BL,0UL,0x2DFBL},{0x63C6L,0x2DFBL,0x81F2L,65535UL,0xFCC4L,0x6722L,65535UL,0UL,65534UL},{0x200BL,0x2DFBL,0xE9F5L,0x63C6L,0xFCC4L,0x3EB1L,0x63C6L,0UL,0xE9F5L},{65528UL,0UL,0xFCC4L,0xA13EL,65534UL,65534UL,0xA13EL,0xFCC4L,0UL},{0xEEFFL,0UL,0x6722L,65528UL,65534UL,0UL,65528UL,0xFCC4L,0x81F2L}};
            int *l_346[9][2][7] = {{{&g_214[2],(void*)0,(void*)0,&g_214[2],&g_214[2],&g_19.f3,&g_19.f3},{&g_5[3],&g_19.f3,&g_214[1],&g_214[2],&g_214[2],&g_214[1],&g_19.f3}},{{&g_214[2],&g_5[3],&g_5[3],&g_214[7],(void*)0,&g_19.f3,&g_19.f3},{&g_5[3],&g_5[3],&g_214[2],&g_5[3],&g_5[3],&g_214[7],(void*)0}},{{&g_214[1],&g_19.f3,&g_5[3],&g_214[7],&g_224.f3,&g_214[7],&g_5[3]},{(void*)0,(void*)0,&g_214[2],&g_214[2],&g_19.f3,&g_19.f3,&g_214[1]}},{{&g_214[1],&g_214[7],&g_214[2],&g_214[2],&g_214[7],&g_214[1],&g_224.f3},{&g_5[3],&g_214[2],&g_5[3],&g_224.f3,&g_19.f3,&g_19.f3,&g_224.f3}},{{&g_214[2],&g_214[2],&g_214[2],&g_19.f3,&g_224.f3,&g_5[3],&g_214[1]},{&g_5[3],&g_214[2],&g_5[3],&g_19.f3,&g_5[3],&g_214[2],&g_5[3]}},{{&g_214[2],&g_214[7],&g_214[1],&g_224.f3,(void*)0,&g_5[3],&g_214[7]},{&g_214[2],&g_214[7],&g_214[7],&g_214[2],&g_5[3],&g_214[2],&g_214[2]}},{{(void*)0,&g_214[2],&g_19.f3,&g_5[3],&g_5[3],&g_19.f3,&g_214[2]},{&g_5[3],(void*)0,&g_224.f3,&g_214[1],&g_214[7],&g_214[2],&g_214[2]}},{{&g_224.f3,(void*)0,&g_5[3],(void*)0,&g_224.f3,&g_214[1],&g_214[7]},{&g_19.f3,&g_214[2],(void*)0,&g_214[1],&g_5[3],&g_214[1],(void*)0}},{{&g_214[7],&g_214[7],&g_214[2],&g_5[3],&g_214[2],&g_214[2],&g_19.f3},{&g_19.f3,&g_214[1],&g_214[2],&g_214[2],&g_214[1],&g_19.f3,&g_5[3]}}};
            int **l_366 = &g_115[5];
            const struct S0 *l_378 = &g_224;
            struct S1 l_385 = {1,0x750FL,9,5,131,-5821};
            int ***l_386 = (void*)0;
            int *l_452[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j, k;
            if ((**g_73))
            {
                int ***l_349 = (void*)0;
                (**g_73) = (+((safe_div_func_int8_t_s_s(l_257.f4, l_345[6][1])) > ((void*)0 != l_346[4][1][5])));
                l_350 = (g_347 == l_349);
                (**g_73) = (**g_73);
            }
            else
            {
                int l_351 = (-1L);
                (**g_73) = l_351;
            }
            if ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(g_327[0][1].f5, (l_356 == l_357))), (safe_rshift_func_int8_t_s_u(((l_257.f5 != l_257.f1) ^ (&g_19 == &g_224)), g_19.f0)))))
            {
                unsigned l_363 = 4UL;
                struct S1 *l_371 = &g_372;
                int *l_374[1][7] = {{&g_151,&g_151,&g_214[7],&g_151,&g_151,&g_214[7],&g_151}};
                struct S0 *l_379 = &g_224;
                int i, j;
                if ((safe_rshift_func_int8_t_s_u((~((void*)0 != l_362)), (0xF4L && 246UL))))
                {
                    unsigned l_364 = 0xC257F06EL;
                    int l_365 = (-4L);
                    l_363 = (g_46[1][1].f4 & g_46[1][1].f3);
                    l_365 = ((l_257.f1 == l_363) <= l_364);
                }
                else
                {
                    l_366 = (*g_347);
                }
                for (g_224.f4 = 28; (g_224.f4 < 60); g_224.f4 = safe_add_func_int16_t_s_s(g_224.f4, 9))
                {
                    int *l_373 = &g_19.f3;
                    char l_381[6][2] = {{0x70L,0x70L},{0x70L,0x70L},{0x70L,0x70L},{0x70L,0x70L},{0x70L,0x70L},{0x70L,0x70L}};
                    struct S0 **l_382 = &l_379;
                    int i, j;
                    for (g_270.f1 = (-30); (g_270.f1 < (-16)); g_270.f1 = safe_add_func_uint8_t_u_u(g_270.f1, 7))
                    {
                        unsigned char l_375 = 1UL;
                        int **l_377 = &l_373;
                        l_371 = &g_327[0][1];
                        (*l_377) = l_376[5][7][0];
                        (**g_73) = ((l_378 == l_379) > l_380);
                        (*l_377) = func_43(l_381[3][1], l_341[1]);
                    }
                    (*l_382) = l_356;
                    if (l_383[0][2])
                    {
                        unsigned char l_384 = 247UL;
                        return l_384;
                    }
                    else
                    {
                        return g_327[0][1].f4;
                    }
                }
            }
            else
            {
                struct S0 l_387[3] = {{1UL,4UL,0x48E0D7D3L,0xCA30BF9FL,0x1C0D050EL,0L,-5L,0x8F39A730L},{1UL,4UL,0x48E0D7D3L,0xCA30BF9FL,0x1C0D050EL,0L,-5L,0x8F39A730L},{1UL,4UL,0x48E0D7D3L,0xCA30BF9FL,0x1C0D050EL,0L,-5L,0x8F39A730L}};
                int * const *l_404 = &l_342[0][0];
                unsigned short l_428 = 0x35B6L;
                int i;
                if ((g_224.f0 | (((l_386 != (void*)0) > (((g_270.f5 || ((l_387[0].f2 < 253UL) & g_46[1][1].f0)) & g_270.f3) && 0x70545C59L)) != g_224.f4)))
                {
                    int l_393 = 0x5016C90EL;
                    for (g_224.f5 = 0; (g_224.f5 <= 8); g_224.f5 += 1)
                    {
                        const int **l_401[3][5] = {{&l_400,&l_400,&l_400,&l_400,&l_400},{&l_400,&l_400,&l_400,&l_400,&l_400},{&l_400,&l_400,&l_400,&l_400,&l_400}};
                        int i, j;
                        (**g_73) = (safe_mod_func_int8_t_s_s(g_151, 0xA4L));
                        g_402 = l_400;
                    }
                    for (g_19.f0 = 0; (g_19.f0 <= 2); g_19.f0 += 1)
                    {
                        (**g_73) = l_403[1][3];
                        l_405 = (l_404 == (void*)0);
                    }
                }
                else
                {
                    int **l_406 = &l_342[1][0];
                    unsigned char l_407 = 0xA5L;
                    unsigned short l_417 = 5UL;
                    (*l_406) = (*g_73);
                    if (l_407)
                    {
                        int *l_410 = &g_224.f3;
                        struct S0 ***l_418 = (void*)0;
                        struct S0 **l_420 = (void*)0;
                        struct S0 ***l_419 = &l_420;
                        (*l_366) = (*g_73);
                        (**g_73) = (g_224.f3 <= (safe_sub_func_uint8_t_u_u(g_327[0][1].f3, g_19.f2)));
                        (**g_73) = l_417;
                        (*l_419) = (void*)0;
                    }
                    else
                    {
                        const int * const l_427 = &g_151;
                        (**g_73) = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(g_5[2], g_224.f6)), 14)), 0));
                        (*l_366) = l_376[8][1][1];
                        l_428 = 0xDCEC0575L;
                    }
                }
                for (l_385.f1 = 0; (l_385.f1 <= 17); ++l_385.f1)
                {
                    unsigned char l_431[8];
                    struct S1 *l_437[9][9] = {{&g_327[0][1],&l_341[1],&g_372,(void*)0,&l_388,&g_46[1][1],(void*)0,&l_341[1],&g_372},{&l_385,&g_270,(void*)0,&g_270,(void*)0,(void*)0,&g_327[0][1],(void*)0,(void*)0},{(void*)0,&l_341[1],&g_270,(void*)0,(void*)0,&g_270,&l_341[1],(void*)0,(void*)0},{(void*)0,&l_341[0],&g_327[0][1],&g_327[0][1],&g_372,&g_270,(void*)0,&l_341[1],(void*)0},{&g_46[1][1],&g_372,(void*)0,&g_46[1][1],&g_327[0][1],&l_341[1],&g_372,(void*)0,(void*)0},{&l_388,(void*)0,&g_270,(void*)0,&g_372,&g_372,(void*)0,&g_270,(void*)0},{&l_388,(void*)0,(void*)0,&g_372,&l_341[1],&g_327[0][1],&g_46[1][1],(void*)0,&g_372},{&g_46[1][1],(void*)0,&l_341[1],(void*)0,&g_270,&g_372,&g_327[0][1],&g_327[0][1],&l_341[0]},{(void*)0,(void*)0,(void*)0,&l_341[1],&g_270,(void*)0,(void*)0,&g_270,&l_341[1]}};
                    struct S1 **l_436 = &l_437[4][7];
                    int i, j;
                    for (i = 0; i < 8; i++)
                        l_431[i] = 1UL;
                    (**g_73) = ((l_431[7] && ((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((~g_191), (g_224.f3 > (l_431[4] != g_372.f2)))), ((void*)0 == l_436))) >= g_438)) || 0UL);
                }
                (*g_449) = (safe_sub_func_uint8_t_u_u(g_270.f4, ((safe_mul_func_int8_t_s_s(((*l_400) & g_46[1][1].f3), g_270.f1)) && g_372.f4)));
            }
            if (((safe_div_func_int16_t_s_s((-1L), g_327[0][1].f3)) & g_327[0][1].f5))
            {
                const int * const l_457 = &g_5[2];
                int **l_458 = &l_346[4][1][6];
                (*l_458) = l_376[5][7][0];
                return g_19.f0;
            }
            else
            {
                const int * const l_459 = (void*)0;
                int **l_460 = &l_452[0];
                int *l_471 = &g_5[2];
                (*l_460) = l_376[7][8][1];
                if (g_461[0][1][0])
                {
                    unsigned char l_462[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_462[i] = 8UL;
                    l_462[5] = (**g_73);
                }
                else
                {
                    int **l_463[2][3] = {{&g_115[0],&g_115[0],&g_115[0]},{&g_115[4],&g_115[4],&g_115[4]}};
                    int **l_464 = &l_342[2][0];
                    int i, j;
                    (*l_464) = (*g_73);
                    (*g_449) = (**g_73);
                    for (g_224.f3 = 0; (g_224.f3 < 27); g_224.f3++)
                    {
                        int l_472[5][3][5] = {{{0x6C91F04BL,6L,0x6343E382L,0x9CB8E36EL,0x6343E382L},{0x8F5825BCL,0x8F5825BCL,(-1L),(-5L),0x8F5825BCL},{0xE85950A9L,0x9CB8E36EL,0xF7A12CA1L,0L,0xE85950A9L}},{{0xACD3C7C2L,(-1L),(-1L),0xACD3C7C2L,0x9BDDC05BL},{0x6343E382L,6L,0x6C91F04BL,6L,0x6343E382L},{0x9BDDC05BL,0xACD3C7C2L,(-1L),(-1L),0xACD3C7C2L}},{{0xE85950A9L,0L,0xF7A12CA1L,6L,0xF7A12CA1L},{0xACD3C7C2L,0xB15341CCL,(-5L),0xACD3C7C2L,0xACD3C7C2L},{(-1L),6L,(-1L),0L,0x6343E382L}},{{0xACD3C7C2L,0x9BDDC05BL,(-1L),0xB15341CCL,0x9BDDC05BL},{0xE85950A9L,6L,0xE898E9E7L,6L,0xE85950A9L},{0x9BDDC05BL,0xB15341CCL,(-1L),0x9BDDC05BL,0xACD3C7C2L}},{{0x6343E382L,0L,(-1L),6L,(-1L)},{0xACD3C7C2L,0xACD3C7C2L,(-5L),0xB15341CCL,0xACD3C7C2L},{0xF7A12CA1L,6L,0xF7A12CA1L,0L,0xE85950A9L}}};
                        int l_473 = 0x0B8FC5D5L;
                        int i, j, k;
                        l_473 = (safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((g_19.f4 <= g_46[1][1].f5), 0x3E78EBC6L)), l_472[3][1][2]));
                        return g_19.f6;
                    }
                }
                (*l_460) = func_43(((g_19.f4 || g_438) != g_19.f6), l_257);
            }
        }
        else
        {
            (*g_449) = (g_327[0][1].f5 | (*g_402));
        }
    }
    else
    {
        int **l_474 = (void*)0;
        int **l_475 = &g_115[1];
        (*l_475) = l_342[0][0];
    }
    return (*l_400);
}







static char func_8(const int p_9, char p_10)
{
    const unsigned l_330 = 0xE2175B5EL;
    int l_331 = 5L;
    l_331 = l_330;
    if (p_10)
    {
        int *l_334 = &l_331;
        int **l_335 = &g_115[4];
        (*l_334) = (safe_lshift_func_uint16_t_u_s(g_270.f3, (l_334 != (*g_73))));
        (*l_335) = (*g_73);
        (*l_335) = (*l_335);
    }
    else
    {
        int l_338 = 0x1C465790L;
        int **l_339[4][2];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_339[i][j] = &g_115[1];
        }
        for (g_224.f4 = 0; (g_224.f4 < 56); ++g_224.f4)
        {
            return l_338;
        }
        g_115[2] = &l_338;
    }
    return p_9;
}







static int func_11(struct S1 p_12, struct S1 p_13, const struct S1 p_14)
{
    const int **l_298 = (void*)0;
    const int ***l_297 = &l_298;
    char l_309 = (-9L);
    unsigned short l_323 = 0x255DL;
    struct S1 * const l_325 = &g_46[9][0];
    const int * const l_328 = &g_5[3];
    int **l_329 = &g_115[5];
    for (g_19.f3 = 0; (g_19.f3 != (-21)); g_19.f3 = safe_sub_func_uint32_t_u_u(g_19.f3, 1))
    {
        unsigned short l_275 = 0x74DEL;
        unsigned l_280 = 0xB9342A3FL;
        unsigned short l_322 = 0x479EL;
        int *l_324 = &g_214[2];
        struct S1 *l_326 = &g_327[0][1];
        for (g_224.f3 = 4; (g_224.f3 >= 1); g_224.f3 -= 1)
        {
            unsigned l_263 = 3UL;
            unsigned short l_284 = 1UL;
            const unsigned l_305 = 0UL;
            int *l_311 = &g_151;
            for (g_224.f6 = 5; (g_224.f6 >= 0); g_224.f6 -= 1)
            {
                unsigned l_281 = 0xBB893B69L;
                int * const * const *l_299 = &g_73;
                int l_306 = (-8L);
                int l_307 = 0L;
                for (g_151 = 0; (g_151 <= 6); g_151 += 1)
                {
                    unsigned l_262 = 1UL;
                    int l_304[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_304[i] = (-4L);
                    p_12.f4 = ((~(+l_262)) && ((&g_115[g_224.f3] != (void*)0) == 1L));
                    if (l_263)
                    {
                        int **l_264[1][7][3] = {{{&g_115[2],&g_115[6],&g_115[6]},{&g_115[3],&g_115[(g_224.f6 + 1)],&g_115[(g_224.f6 + 1)]},{&g_115[2],&g_115[6],&g_115[6]},{&g_115[3],&g_115[(g_224.f6 + 1)],&g_115[(g_224.f6 + 1)]},{&g_115[2],&g_115[6],&g_115[6]},{&g_115[3],&g_115[(g_224.f6 + 1)],&g_115[(g_224.f6 + 1)]},{&g_115[2],&g_115[6],&g_115[6]}}};
                        int **l_265 = &g_115[3];
                        int i, j, k;
                        (*l_265) = (*g_73);
                        if (p_14.f4)
                            continue;
                        if (l_263)
                            break;
                        return l_263;
                    }
                    else
                    {
                        const struct S1 *l_267 = (void*)0;
                        const struct S1 **l_266[3];
                        struct S1 *l_269 = &g_270;
                        int *l_271 = (void*)0;
                        int *l_272[5][8] = {{(void*)0,&g_214[8],&g_214[8],(void*)0,&g_214[8],&g_214[8],(void*)0,&g_214[8]},{(void*)0,(void*)0,&g_151,(void*)0,(void*)0,&g_151,(void*)0,(void*)0},{&g_214[8],(void*)0,&g_214[8],&g_214[8],(void*)0,&g_214[8],&g_214[8],(void*)0},{(void*)0,&g_214[8],&g_214[8],(void*)0,&g_214[8],&g_214[8],(void*)0,&g_214[8]},{(void*)0,(void*)0,&g_151,(void*)0,(void*)0,&g_151,(void*)0,(void*)0}};
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_266[i] = &l_267;
                        g_268 = &p_14;
                        p_12.f5 = (p_12.f3 <= p_12.f5);
                        l_269 = (void*)0;
                        p_13.f5 = p_14.f2;
                    }
                    if (((~(p_13.f2 | (safe_sub_func_int32_t_s_s(l_275, p_12.f2)))) >= (p_13.f3 & ((safe_rshift_func_uint16_t_u_s(0xE76DL, g_270.f5)) == (p_12.f1 != (65535UL != ((safe_div_func_int32_t_s_s(l_280, l_281)) == 0x57AB407BL)))))))
                    {
                        return p_12.f5;
                    }
                    else
                    {
                        int i;
                        g_115[g_151] = (void*)0;
                    }
                    if ((safe_lshift_func_uint16_t_u_s(((l_284 ^ (p_14.f0 | p_14.f4)) ^ (safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((g_46[1][1].f2 & (((l_284 != (safe_sub_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((l_297 != l_299), (***l_299))), (safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(4294967295UL, g_19.f5)) == p_12.f2), l_304[0])))) | l_305), g_224.f2))) | g_5[2]) != g_224.f5)), g_224.f0)), l_306))), 10)))
                    {
                        int **l_308 = &g_115[g_224.f3];
                        l_307 = 0L;
                        (*l_308) = (*g_73);
                        (*l_308) = (*l_308);
                        l_307 = l_309;
                    }
                    else
                    {
                        short l_310 = (-4L);
                        return l_310;
                    }
                }
            }
            (*l_311) = 0x1E4F2EB8L;
        }
        (*l_324) = (p_14.f3 && ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((g_46[1][1].f1 && ((p_12.f5 < (p_12.f5 <= (((safe_mul_func_int8_t_s_s((l_322 < g_46[1][1].f4), l_323)) && g_224.f4) == (0x5FL == (-1L))))) && 0UL)) < p_13.f4), g_151)), p_13.f0)) <= 0x84L));
        l_326 = l_325;
        if (p_12.f0)
            break;
    }
    (*l_329) = func_26(l_328);
    return g_224.f5;
}







static struct S1 func_15(unsigned p_16, struct S0 p_17, unsigned p_18)
{
    int *l_20 = &g_19.f3;
    int *l_192[2];
    const struct S1 l_193 = {0,-10L,3,-11,-719,-5963};
    int i;
    for (i = 0; i < 2; i++)
        l_192[i] = &g_5[2];
    (*l_20) = p_17.f1;
    (*l_20) = func_21(func_26(func_28(&g_5[2], (!func_33(p_16, (*l_20), g_5[4], &g_5[2])), &g_5[2], l_20)), l_192[1], l_193, p_17.f5);
    return l_193;
}







static int func_21(int * p_22, int * p_23, const struct S1 p_24, int p_25)
{
    int l_218 = 0x08BEB247L;
    struct S1 *l_247 = &g_46[1][1];
    struct S1 **l_246[4] = {&l_247,&l_247,&l_247,&l_247};
    struct S0 **l_255 = (void*)0;
    int i;
    for (g_19.f2 = 0; (g_19.f2 < 5); g_19.f2++)
    {
        int l_196 = 1L;
        int **l_198 = &g_115[5];
        int ***l_197 = &l_198;
        if (l_196)
            break;
        (*l_197) = &p_23;
    }
    if ((*p_22))
    {
        char l_199 = 0L;
        return l_199;
    }
    else
    {
        const struct S0 * const l_222 = &g_19;
        const int l_254[5] = {0xD40EA4F8L,0xD40EA4F8L,0xD40EA4F8L,0xD40EA4F8L,0xD40EA4F8L};
        int i;
        for (g_151 = 0; (g_151 <= 0); g_151 += 1)
        {
            unsigned short l_200 = 1UL;
            char l_208 = 9L;
            int *l_217 = &g_5[2];
            int **l_221[1];
            int i;
            for (i = 0; i < 1; i++)
                l_221[i] = (void*)0;
            for (g_19.f3 = 4; (g_19.f3 >= 0); g_19.f3 -= 1)
            {
                int i;
                l_200 = 0x32EF967DL;
                for (g_19.f0 = 0; (g_19.f0 <= 0); g_19.f0 += 1)
                {
                    unsigned l_205 = 0x1D3EE78AL;
                    l_208 = (safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s(l_205, (safe_rshift_func_int8_t_s_u(6L, 5)))), g_19.f5));
                }
                for (g_19.f0 = 0; (g_19.f0 <= 0); g_19.f0 += 1)
                {
                    for (g_19.f6 = 0; (g_19.f6 >= 0); g_19.f6 -= 1)
                    {
                        unsigned l_209 = 0xDB1BDB28L;
                        int *l_213 = &g_214[2];
                        (*l_213) = ((0x9D240A8BL ^ l_209) & (safe_lshift_func_uint16_t_u_u((~(safe_unary_minus_func_int32_t_s(0x181C5730L))), 11)));
                        (*l_213) = (safe_add_func_uint16_t_u_u(((*g_73) == l_217), (l_218 || g_19.f0)));
                    }
                    for (g_19.f7 = 0; (g_19.f7 >= 0); g_19.f7 -= 1)
                    {
                        int *l_219 = &g_214[2];
                        int **l_220 = &g_115[1];
                        (*l_219) = l_218;
                        (*l_220) = l_217;
                    }
                }
            }
            g_115[5] = (*g_73);
            g_223 = l_222;
            for (g_224.f5 = 0; (g_224.f5 >= 0); g_224.f5 -= 1)
            {
                unsigned l_229 = 1UL;
                for (g_19.f5 = 0; (g_19.f5 <= 0); g_19.f5 += 1)
                {
                    unsigned char l_232 = 0x0BL;
                    (*p_22) = 0L;
                    (*p_22) = (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((p_24.f2 & l_229), ((safe_rshift_func_int8_t_s_s(p_25, 7)) && 0xEE89L))) || l_232), 3));
                    for (g_19.f0 = 0; (g_19.f0 <= 0); g_19.f0 += 1)
                    {
                        struct S0 *l_233 = &g_224;
                        int i;
                        g_79[g_19.f0] = l_233;
                    }
                    if ((*p_22))
                        continue;
                }
                for (g_19.f0 = 0; (g_19.f0 <= 0); g_19.f0 += 1)
                {
                    return l_229;
                }
                if ((((g_19.f7 && (((safe_lshift_func_uint8_t_u_s(p_24.f5, 5)) || ((l_229 | (safe_add_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(g_224.f7, 2)) > 0UL) || l_218), p_24.f3))) & p_24.f4)) ^ g_5[1])) | p_24.f3) & (*p_23)))
                {
                    return (*p_22);
                }
                else
                {
                    unsigned l_256 = 4294967293UL;
                    (*p_22) = (safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s((*p_22), (safe_mul_func_uint16_t_u_u((0L == 0x48L), l_254[4])))), (((void*)0 != l_255) == l_256)));
                }
                (*p_22) = 0x3FB84D6BL;
            }
        }
    }
    return (*p_23);
}







static int * func_26(const int * const p_27)
{
    const char l_166 = 0xB1L;
    struct S1 l_180 = {1,0xF3E8L,7,18,463,-4105};
    int *l_181 = &g_19.f3;
    int *l_184 = &g_19.f3;
    (*l_181) = (((((safe_rshift_func_int8_t_s_u((g_46[1][1].f4 || 0UL), 4)) ^ 0x6B7CL) > g_19.f5) != 0x37L) < 0L);
    for (g_19.f6 = 6; (g_19.f6 >= 2); g_19.f6 -= 1)
    {
        for (g_19.f4 = 0; (g_19.f4 <= 6); g_19.f4 += 1)
        {
            int i;
            g_115[g_19.f4] = g_115[g_19.f4];
            (**g_73) = (*p_27);
        }
    }
    (**g_73) = (safe_add_func_int16_t_s_s((*l_181), ((l_184 != (void*)0) >= (&g_74[2] != &p_27))));
    (*l_181) = (~(safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((g_19.f1 || (((void*)0 == (*g_73)) >= g_191)), 4)), (*l_181))));
    return l_184;
}







static int * const func_28(int * p_29, char p_30, int * p_31, int * const p_32)
{
    unsigned l_154 = 0x41894450L;
    struct S0 *l_157 = &g_19;
    for (p_30 = 0; (p_30 <= 6); p_30 += 1)
    {
        const struct S1 *l_141 = &g_46[1][1];
        const struct S1 **l_142 = (void*)0;
        const struct S1 **l_143 = &l_141;
        struct S0 **l_144 = &g_79[0];
        (*l_143) = l_141;
        if ((l_144 == (void*)0))
        {
            for (g_19.f3 = 4; (g_19.f3 >= 0); g_19.f3 -= 1)
            {
                int i;
                for (g_19.f0 = 0; (g_19.f0 <= 0); g_19.f0 += 1)
                {
                    int **l_152 = &g_115[5];
                    for (g_19.f2 = 0; (g_19.f2 <= 6); g_19.f2 += 1)
                    {
                        unsigned l_147[9][10][2] = {{{0x6CC78ED1L,3UL},{3UL,0x6CC78ED1L},{3UL,3UL},{0x6CC78ED1L,3UL},{3UL,0x6CC78ED1L},{3UL,3UL},{0x6CC78ED1L,3UL},{3UL,0x6CC78ED1L},{3UL,3UL},{0x6CC78ED1L,3UL}},{{3UL,0x6CC78ED1L},{3UL,3UL},{0x6CC78ED1L,3UL},{3UL,0x6CC78ED1L},{3UL,3UL},{0x6CC78ED1L,3UL},{3UL,0x6CC78ED1L},{3UL,3UL},{0x6CC78ED1L,3UL},{3UL,0x6CC78ED1L}},{{3UL,3UL},{0x6CC78ED1L,3UL},{3UL,0x6CC78ED1L},{3UL,3UL},{0x6CC78ED1L,3UL},{3UL,0x6CC78ED1L},{3UL,3UL},{0x6CC78ED1L,3UL},{3UL,0x6CC78ED1L},{0x6CC78ED1L,0x6CC78ED1L}},{{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L}},{{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L}},{{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L}},{{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L}},{{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L}},{{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L},{0x9BBD2351L,0x6CC78ED1L},{0x6CC78ED1L,0x9BBD2351L},{0x6CC78ED1L,0x6CC78ED1L}}};
                        int *l_150 = &g_151;
                        int i, j, k;
                        (*l_150) = (safe_sub_func_uint8_t_u_u(0x54L, ((!l_147[8][1][0]) < (safe_lshift_func_int16_t_s_u(1L, 0)))));
                        (*l_150) = (g_115[g_19.f2] == (*g_73));
                    }
                    (*l_152) = (*g_73);
                    if ((*p_32))
                        break;
                }
                g_115[(g_19.f3 + 2)] = g_115[p_30];
            }
        }
        else
        {
            struct S0 l_153 = {3UL,0x3355L,4294967293UL,1L,0xEC19C680L,-1L,0xC3L,0x2CC20BC8L};
            const int *l_156 = &g_19.f3;
            const int **l_155 = &l_156;
            (*l_155) = func_38(p_29, l_153, &g_151, l_154);
        }
    }
    l_157 = l_157;
    for (g_19.f3 = 0; (g_19.f3 <= (-2)); g_19.f3 = safe_sub_func_uint16_t_u_u(g_19.f3, 9))
    {
        return (*g_73);
    }
    for (p_30 = 5; (p_30 >= 1); p_30 -= 1)
    {
        short l_163 = 0x7304L;
        for (g_19.f6 = 5; (g_19.f6 >= 0); g_19.f6 -= 1)
        {
            struct S0 l_160 = {65526UL,0x8F4DL,0x1A9F0981L,8L,4294967295UL,0L,0L,0x68577CA1L};
            for (l_154 = 0; (l_154 <= 6); l_154 += 1)
            {
                int **l_161 = &g_115[5];
                int i;
                (*l_161) = (*g_73);
            }
            (*p_32) = (!(p_30 > ((safe_unary_minus_func_uint8_t_u(((3UL < (*p_32)) | l_160.f4))) || (1UL | l_163))));
            for (g_19.f5 = 4; (g_19.f5 >= 0); g_19.f5 -= 1)
            {
                int i;
                (**g_73) = (!(*p_29));
                if (l_163)
                    break;
            }
            (*p_32) = (*p_29);
        }
    }
    return (*g_73);
}







static char func_33(const unsigned short p_34, int p_35, unsigned p_36, int * p_37)
{
    struct S0 l_58[6][9][4] = {{{{65535UL,0x312DL,0UL,0xBD3CCC17L,8UL,0x22B3L,-10L,0x522227AEL},{0UL,65535UL,4294967286UL,0x40D8D5C7L,0UL,0L,-1L,0xDDC6D73AL},{1UL,0x6DA9L,4294967295UL,-6L,8UL,0x5085L,-1L,0x9FC79B81L},{1UL,65530UL,0UL,0x17620666L,0xC64D3B61L,0x4672L,0x87L,0x74882178L}},{{0xC693L,0x630EL,0x3E797ADAL,0x46393907L,4294967295UL,-9L,-1L,1L},{0x892BL,0x0E8EL,0xE9D000C4L,0xEBD0F648L,0x2BCF3F1EL,8L,-1L,0xE113701FL},{0UL,65535UL,4294967286UL,0x40D8D5C7L,0UL,0L,-1L,0xDDC6D73AL},{0xB232L,0xF5C2L,0xDFD1F3BDL,0x260C4036L,0x84AEC7FBL,-2L,1L,0x5E97E3D8L}},{{0xA586L,65534UL,0x72065D45L,0L,0x7D125F7AL,-8L,0xCEL,-8L},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L},{0xBA7DL,65534UL,0xE36B0200L,-4L,0x6C577B3FL,0x85D6L,-1L,1L},{0xC693L,0x630EL,0x3E797ADAL,0x46393907L,4294967295UL,-9L,-1L,1L}},{{0xBA7DL,65534UL,0xE36B0200L,-4L,0x6C577B3FL,0x85D6L,-1L,1L},{0xC693L,0x630EL,0x3E797ADAL,0x46393907L,4294967295UL,-9L,-1L,1L},{0x5939L,0xA591L,0x0C45E751L,0L,0xF606E3EFL,-6L,0x39L,-1L},{0xF1E8L,1UL,0x7AA3393FL,0x80110037L,8UL,-6L,-8L,0x16D00E5BL}},{{0xE1CEL,8UL,0UL,0L,0x1CAAAA38L,1L,0xEDL,0x55874C7DL},{1UL,65530UL,0UL,0x17620666L,0xC64D3B61L,0x4672L,0x87L,0x74882178L},{1UL,65530UL,0UL,0x17620666L,0xC64D3B61L,0x4672L,0x87L,0x74882178L},{0xE1CEL,8UL,0UL,0L,0x1CAAAA38L,1L,0xEDL,0x55874C7DL}},{{0xF750L,0xB1CAL,0UL,0x68EC69D3L,0xB54A5956L,0x61A9L,-1L,-9L},{0xC8C6L,0x0854L,0UL,0xB709881DL,1UL,0L,0x91L,0L},{0xA586L,65534UL,0x72065D45L,0L,0x7D125F7AL,-8L,0xCEL,-8L},{0UL,0xEE90L,0xB4F1E68EL,0x0F11B2BDL,4294967295UL,-1L,1L,3L}},{{1UL,65535UL,0x127CA5F8L,1L,4UL,0xF5C4L,0xDAL,-1L},{0x5939L,0xA591L,0x0C45E751L,0L,0xF606E3EFL,-6L,0x39L,-1L},{0xE1CEL,8UL,0UL,0L,0x1CAAAA38L,1L,0xEDL,0x55874C7DL},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L}},{{1UL,0xFC89L,4294967290UL,0x3B1EF438L,0xDA900576L,0xFF89L,0x9AL,0x46CE155FL},{0xD427L,1UL,0x34BD0913L,0x082F4DE9L,4294967290UL,0x1D0AL,1L,0L},{0xC693L,0x630EL,0x3E797ADAL,0x46393907L,4294967295UL,-9L,-1L,1L},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L}},{{0xCCACL,1UL,0x4F12CA17L,-1L,0x9D0F7BDBL,2L,4L,1L},{0x5939L,0xA591L,0x0C45E751L,0L,0xF606E3EFL,-6L,0x39L,-1L},{0x4137L,65529UL,5UL,0L,7UL,0x347FL,0xDBL,0x2431EA72L},{0UL,0xEE90L,0xB4F1E68EL,0x0F11B2BDL,4294967295UL,-1L,1L,3L}}},{{{1UL,65530UL,0UL,0x17620666L,0xC64D3B61L,0x4672L,0x87L,0x74882178L},{0xC8C6L,0x0854L,0UL,0xB709881DL,1UL,0L,0x91L,0L},{0xCCACL,1UL,0x4F12CA17L,-1L,0x9D0F7BDBL,2L,4L,1L},{0xE1CEL,8UL,0UL,0L,0x1CAAAA38L,1L,0xEDL,0x55874C7DL}},{{0x08B2L,0x0BBFL,0x1896133EL,0L,4294967294UL,0x8BF5L,0xF5L,1L},{1UL,65530UL,0UL,0x17620666L,0xC64D3B61L,0x4672L,0x87L,0x74882178L},{0x5AB7L,0x03ABL,1UL,0xB3893834L,0x192FD70EL,-10L,0x66L,0x297EED7DL},{0xF1E8L,1UL,0x7AA3393FL,0x80110037L,8UL,-6L,-8L,0x16D00E5BL}},{{0UL,65535UL,4294967286UL,0x40D8D5C7L,0UL,0L,-1L,0xDDC6D73AL},{0xC693L,0x630EL,0x3E797ADAL,0x46393907L,4294967295UL,-9L,-1L,1L},{65535UL,0xAE80L,4294967292UL,0x8B48F969L,8UL,0xAD2AL,3L,4L},{0xC693L,0x630EL,0x3E797ADAL,0x46393907L,4294967295UL,-9L,-1L,1L}},{{65535UL,65535UL,5UL,0x7680494BL,6UL,-3L,1L,0xD6AB5507L},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L},{0xD427L,1UL,0x34BD0913L,0x082F4DE9L,4294967290UL,0x1D0AL,1L,0L},{0xB232L,0xF5C2L,0xDFD1F3BDL,0x260C4036L,0x84AEC7FBL,-2L,1L,0x5E97E3D8L}},{{65535UL,65534UL,0UL,0xD768DB52L,3UL,8L,0L,-7L},{0x892BL,0x0E8EL,0xE9D000C4L,0xEBD0F648L,0x2BCF3F1EL,8L,-1L,0xE113701FL},{0xB232L,0xF5C2L,0xDFD1F3BDL,0x260C4036L,0x84AEC7FBL,-2L,1L,0x5E97E3D8L},{1UL,65530UL,0UL,0x17620666L,0xC64D3B61L,0x4672L,0x87L,0x74882178L}},{{0xF1E8L,1UL,0x7AA3393FL,0x80110037L,8UL,-6L,-8L,0x16D00E5BL},{0UL,65535UL,4294967286UL,0x40D8D5C7L,0UL,0L,-1L,0xDDC6D73AL},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L},{0x29B9L,65535UL,0xACF3047BL,-7L,0xF40A761EL,-1L,0x69L,-1L}},{{0xF1E8L,1UL,0x7AA3393FL,0x80110037L,8UL,-6L,-8L,0x16D00E5BL},{1UL,0xFC89L,4294967290UL,0x3B1EF438L,0xDA900576L,0xFF89L,0x9AL,0x46CE155FL},{0xB232L,0xF5C2L,0xDFD1F3BDL,0x260C4036L,0x84AEC7FBL,-2L,1L,0x5E97E3D8L},{65535UL,65534UL,0UL,0xD768DB52L,3UL,8L,0L,-7L}},{{65535UL,65534UL,0UL,0xD768DB52L,3UL,8L,0L,-7L},{0x29B9L,65535UL,0xACF3047BL,-7L,0xF40A761EL,-1L,0x69L,-1L},{0xD427L,1UL,0x34BD0913L,0x082F4DE9L,4294967290UL,0x1D0AL,1L,0L},{0x08B2L,0x0BBFL,0x1896133EL,0L,4294967294UL,0x8BF5L,0xF5L,1L}},{{0x29B9L,65535UL,0xACF3047BL,-7L,0xF40A761EL,-1L,0x69L,-1L},{1UL,65535UL,0x127CA5F8L,1L,4UL,0xF5C4L,0xDAL,-1L},{65535UL,65535UL,5UL,0x7680494BL,6UL,-3L,1L,0xD6AB5507L},{0x08B2L,0x0BBFL,0x1896133EL,0L,4294967294UL,0x8BF5L,0xF5L,1L}}},{{{0xD427L,1UL,0x34BD0913L,0x082F4DE9L,4294967290UL,0x1D0AL,1L,0L},{65535UL,65535UL,5UL,0x7680494BL,6UL,-3L,1L,0xD6AB5507L},{0xCCACL,1UL,0x4F12CA17L,-1L,0x9D0F7BDBL,2L,4L,1L},{0xCCACL,1UL,0x4F12CA17L,-1L,0x9D0F7BDBL,2L,4L,1L}},{{0xF1E8L,1UL,0x7AA3393FL,0x80110037L,8UL,-6L,-8L,0x16D00E5BL},{0xF1E8L,1UL,0x7AA3393FL,0x80110037L,8UL,-6L,-8L,0x16D00E5BL},{0x5939L,0xA591L,0x0C45E751L,0L,0xF606E3EFL,-6L,0x39L,-1L},{0xC693L,0x630EL,0x3E797ADAL,0x46393907L,4294967295UL,-9L,-1L,1L}},{{1UL,0x6DA9L,4294967295UL,-6L,8UL,0x5085L,-1L,0x9FC79B81L},{0xC8C6L,0x0854L,0UL,0xB709881DL,1UL,0L,0x91L,0L},{0x5AB7L,0x03ABL,1UL,0xB3893834L,0x192FD70EL,-10L,0x66L,0x297EED7DL},{0xAF76L,0x7910L,5UL,0x96EF0398L,9UL,0x3F97L,3L,0L}},{{0x5939L,0xA591L,0x0C45E751L,0L,0xF606E3EFL,-6L,0x39L,-1L},{0xE1CEL,8UL,0UL,0L,0x1CAAAA38L,1L,0xEDL,0x55874C7DL},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L},{0x5AB7L,0x03ABL,1UL,0xB3893834L,0x192FD70EL,-10L,0x66L,0x297EED7DL}},{{65535UL,0x312DL,0UL,0xBD3CCC17L,8UL,0x22B3L,-10L,0x522227AEL},{0xE1CEL,8UL,0UL,0L,0x1CAAAA38L,1L,0xEDL,0x55874C7DL},{0xF750L,0xB1CAL,0UL,0x68EC69D3L,0xB54A5956L,0x61A9L,-1L,-9L},{0xAF76L,0x7910L,5UL,0x96EF0398L,9UL,0x3F97L,3L,0L}},{{0xE1CEL,8UL,0UL,0L,0x1CAAAA38L,1L,0xEDL,0x55874C7DL},{0xC8C6L,0x0854L,0UL,0xB709881DL,1UL,0L,0x91L,0L},{0x08B2L,0x0BBFL,0x1896133EL,0L,4294967294UL,0x8BF5L,0xF5L,1L},{0xC693L,0x630EL,0x3E797ADAL,0x46393907L,4294967295UL,-9L,-1L,1L}},{{0UL,65535UL,4294967286UL,0x40D8D5C7L,0UL,0L,-1L,0xDDC6D73AL},{0xF1E8L,1UL,0x7AA3393FL,0x80110037L,8UL,-6L,-8L,0x16D00E5BL},{1UL,0x6DA9L,4294967295UL,-6L,8UL,0x5085L,-1L,0x9FC79B81L},{0xCCACL,1UL,0x4F12CA17L,-1L,0x9D0F7BDBL,2L,4L,1L}},{{0xF750L,0xB1CAL,0UL,0x68EC69D3L,0xB54A5956L,0x61A9L,-1L,-9L},{65535UL,65535UL,5UL,0x7680494BL,6UL,-3L,1L,0xD6AB5507L},{65535UL,65534UL,0UL,0xD768DB52L,3UL,8L,0L,-7L},{0x08B2L,0x0BBFL,0x1896133EL,0L,4294967294UL,0x8BF5L,0xF5L,1L}},{{0xC8C6L,0x0854L,0UL,0xB709881DL,1UL,0L,0x91L,0L},{1UL,65535UL,0x127CA5F8L,1L,4UL,0xF5C4L,0xDAL,-1L},{0xC8C6L,0x0854L,0UL,0xB709881DL,1UL,0L,0x91L,0L},{0xF1E8L,1UL,0x7AA3393FL,0x80110037L,8UL,-6L,-8L,0x16D00E5BL}}},{{{0x08B2L,0x0BBFL,0x1896133EL,0L,4294967294UL,0x8BF5L,0xF5L,1L},{0x4137L,65529UL,5UL,0L,7UL,0x347FL,0xDBL,0x2431EA72L},{0xD427L,1UL,0x34BD0913L,0x082F4DE9L,4294967290UL,0x1D0AL,1L,0L},{0xA586L,65534UL,0x72065D45L,0L,0x7D125F7AL,-8L,0xCEL,-8L}},{{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L},{65535UL,0x312DL,0UL,0xBD3CCC17L,8UL,0x22B3L,-10L,0x522227AEL},{0UL,0xEE90L,0xB4F1E68EL,0x0F11B2BDL,4294967295UL,-1L,1L,3L},{0x4137L,65529UL,5UL,0L,7UL,0x347FL,0xDBL,0x2431EA72L}},{{0xBA7DL,65534UL,0xE36B0200L,-4L,0x6C577B3FL,0x85D6L,-1L,1L},{0xD427L,1UL,0x34BD0913L,0x082F4DE9L,4294967290UL,0x1D0AL,1L,0L},{0UL,0xEE90L,0xB4F1E68EL,0x0F11B2BDL,4294967295UL,-1L,1L,3L},{1UL,0x6DA9L,4294967295UL,-6L,8UL,0x5085L,-1L,0x9FC79B81L}},{{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L},{0xC693L,0x630EL,0x3E797ADAL,0x46393907L,4294967295UL,-9L,-1L,1L},{0xD427L,1UL,0x34BD0913L,0x082F4DE9L,4294967290UL,0x1D0AL,1L,0L},{1UL,0xFC89L,4294967290UL,0x3B1EF438L,0xDA900576L,0xFF89L,0x9AL,0x46CE155FL}},{{0x08B2L,0x0BBFL,0x1896133EL,0L,4294967294UL,0x8BF5L,0xF5L,1L},{65535UL,0xAE80L,4294967292UL,0x8B48F969L,8UL,0xAD2AL,3L,4L},{0xC8C6L,0x0854L,0UL,0xB709881DL,1UL,0L,0x91L,0L},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L}},{{0xC8C6L,0x0854L,0UL,0xB709881DL,1UL,0L,0x91L,0L},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L},{65535UL,65534UL,0UL,0xD768DB52L,3UL,8L,0L,-7L},{0x9DF1L,0x6C9FL,4294967292UL,0x63B0CC83L,4294967295UL,0x3583L,0x91L,4L}},{{0xF750L,0xB1CAL,0UL,0x68EC69D3L,0xB54A5956L,0x61A9L,-1L,-9L},{1UL,0x6DA9L,4294967295UL,-6L,8UL,0x5085L,-1L,0x9FC79B81L},{1UL,0x6DA9L,4294967295UL,-6L,8UL,0x5085L,-1L,0x9FC79B81L},{0xF750L,0xB1CAL,0UL,0x68EC69D3L,0xB54A5956L,0x61A9L,-1L,-9L}},{{0UL,65535UL,4294967286UL,0x40D8D5C7L,0UL,0L,-1L,0xDDC6D73AL},{0xAF76L,0x7910L,5UL,0x96EF0398L,9UL,0x3F97L,3L,0L},{0x08B2L,0x0BBFL,0x1896133EL,0L,4294967294UL,0x8BF5L,0xF5L,1L},{0x892BL,0x0E8EL,0xE9D000C4L,0xEBD0F648L,0x2BCF3F1EL,8L,-1L,0xE113701FL}},{{0xE1CEL,8UL,0UL,0L,0x1CAAAA38L,1L,0xEDL,0x55874C7DL},{65535UL,65534UL,0UL,0xD768DB52L,3UL,8L,0L,-7L},{0xF750L,0xB1CAL,0UL,0x68EC69D3L,0xB54A5956L,0x61A9L,-1L,-9L},{65535UL,0xAE80L,4294967292UL,0x8B48F969L,8UL,0xAD2AL,3L,4L}}},{{{65535UL,0x312DL,0UL,0xBD3CCC17L,8UL,0x22B3L,-10L,0x522227AEL},{1UL,65530UL,0UL,0x17620666L,0xC64D3B61L,0x4672L,0x87L,0x74882178L},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L},{65535UL,0xAE80L,4294967292UL,0x8B48F969L,8UL,0xAD2AL,3L,4L}},{{0x5939L,0xA591L,0x0C45E751L,0L,0xF606E3EFL,-6L,0x39L,-1L},{65535UL,65534UL,0UL,0xD768DB52L,3UL,8L,0L,-7L},{0x5AB7L,0x03ABL,1UL,0xB3893834L,0x192FD70EL,-10L,0x66L,0x297EED7DL},{0x892BL,0x0E8EL,0xE9D000C4L,0xEBD0F648L,0x2BCF3F1EL,8L,-1L,0xE113701FL}},{{1UL,0x6DA9L,4294967295UL,-6L,8UL,0x5085L,-1L,0x9FC79B81L},{0xAF76L,0x7910L,5UL,0x96EF0398L,9UL,0x3F97L,3L,0L},{0x5939L,0xA591L,0x0C45E751L,0L,0xF606E3EFL,-6L,0x39L,-1L},{0xF750L,0xB1CAL,0UL,0x68EC69D3L,0xB54A5956L,0x61A9L,-1L,-9L}},{{0xF1E8L,1UL,0x7AA3393FL,0x80110037L,8UL,-6L,-8L,0x16D00E5BL},{1UL,0x6DA9L,4294967295UL,-6L,8UL,0x5085L,-1L,0x9FC79B81L},{0xCCACL,1UL,0x4F12CA17L,-1L,0x9D0F7BDBL,2L,4L,1L},{0x9DF1L,0x6C9FL,4294967292UL,0x63B0CC83L,4294967295UL,0x3583L,0x91L,4L}},{{0xD427L,1UL,0x34BD0913L,0x082F4DE9L,4294967290UL,0x1D0AL,1L,0L},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L},{65535UL,65535UL,5UL,0x7680494BL,6UL,-3L,1L,0xD6AB5507L},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L}},{{0xAF76L,0x7910L,5UL,0x96EF0398L,9UL,0x3F97L,3L,0L},{0xBA7DL,65534UL,0xE36B0200L,-4L,0x6C577B3FL,0x85D6L,-1L,1L},{0x08B2L,0x0BBFL,0x1896133EL,0L,4294967294UL,0x8BF5L,0xF5L,1L},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L}},{{1UL,65530UL,0UL,0x17620666L,0xC64D3B61L,0x4672L,0x87L,0x74882178L},{1UL,0xFC89L,4294967290UL,0x3B1EF438L,0xDA900576L,0xFF89L,0x9AL,0x46CE155FL},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L},{0xF1E8L,1UL,0x7AA3393FL,0x80110037L,8UL,-6L,-8L,0x16D00E5BL}},{{0x892BL,0x0E8EL,0xE9D000C4L,0xEBD0F648L,0x2BCF3F1EL,8L,-1L,0xE113701FL},{0xA586L,65534UL,0x72065D45L,0L,0x7D125F7AL,-8L,0xCEL,-8L},{0xBA7DL,65534UL,0xE36B0200L,-4L,0x6C577B3FL,0x85D6L,-1L,1L},{1UL,65535UL,0x127CA5F8L,1L,4UL,0xF5C4L,0xDAL,-1L}},{{0x892BL,0x0E8EL,0xE9D000C4L,0xEBD0F648L,0x2BCF3F1EL,8L,-1L,0xE113701FL},{65535UL,0xAE80L,4294967292UL,0x8B48F969L,8UL,0xAD2AL,3L,4L},{65535UL,0xA753L,4294967292UL,1L,9UL,0xC8C3L,0L,0L},{1UL,65530UL,0UL,0x17620666L,0xC64D3B61L,0x4672L,0x87L,0x74882178L}}},{{{1UL,65530UL,0UL,0x17620666L,0xC64D3B61L,0x4672L,0x87L,0x74882178L},{1UL,65535UL,0x127CA5F8L,1L,4UL,0xF5C4L,0xDAL,-1L},{0x08B2L,0x0BBFL,0x1896133EL,0L,4294967294UL,0x8BF5L,0xF5L,1L},{0UL,0xEE90L,0xB4F1E68EL,0x0F11B2BDL,4294967295UL,-1L,1L,3L}},{{0xAF76L,0x7910L,5UL,0x96EF0398L,9UL,0x3F97L,3L,0L},{0x5AB7L,0x03ABL,1UL,0xB3893834L,0x192FD70EL,-10L,0x66L,0x297EED7DL},{0xC8C6L,0x0854L,0UL,0xB709881DL,1UL,0L,0x91L,0L},{1UL,0x6DA9L,4294967295UL,-6L,8UL,0x5085L,-1L,0x9FC79B81L}},{{0xA586L,65534UL,0x72065D45L,0L,0x7D125F7AL,-8L,0xCEL,-8L},{0xC8C6L,0x0854L,0UL,0xB709881DL,1UL,0L,0x91L,0L},{0xF750L,0xB1CAL,0UL,0x68EC69D3L,0xB54A5956L,0x61A9L,-1L,-9L},{0xF750L,0xB1CAL,0UL,0x68EC69D3L,0xB54A5956L,0x61A9L,-1L,-9L}},{{0UL,0xEE90L,0xB4F1E68EL,0x0F11B2BDL,4294967295UL,-1L,1L,3L},{0UL,0xEE90L,0xB4F1E68EL,0x0F11B2BDL,4294967295UL,-1L,1L,3L},{0UL,65535UL,4294967286UL,0x40D8D5C7L,0UL,0L,-1L,0xDDC6D73AL},{1UL,0xFC89L,4294967290UL,0x3B1EF438L,0xDA900576L,0xFF89L,0x9AL,0x46CE155FL}},{{0xF1E8L,1UL,0x7AA3393FL,0x80110037L,8UL,-6L,-8L,0x16D00E5BL},{0x29B9L,65535UL,0xACF3047BL,-7L,0xF40A761EL,-1L,0x69L,-1L},{0xE1CEL,8UL,0UL,0L,0x1CAAAA38L,1L,0xEDL,0x55874C7DL},{0x4137L,65529UL,5UL,0L,7UL,0x347FL,0xDBL,0x2431EA72L}},{{0UL,65535UL,4294967286UL,0x40D8D5C7L,0UL,0L,-1L,0xDDC6D73AL},{0xCCACL,1UL,0x4F12CA17L,-1L,0x9D0F7BDBL,2L,4L,1L},{65535UL,0x312DL,0UL,0xBD3CCC17L,8UL,0x22B3L,-10L,0x522227AEL},{0xE1CEL,8UL,0UL,0L,0x1CAAAA38L,1L,0xEDL,0x55874C7DL}},{{65535UL,0xAE80L,4294967292UL,0x8B48F969L,8UL,0xAD2AL,3L,4L},{0xCCACL,1UL,0x4F12CA17L,-1L,0x9D0F7BDBL,2L,4L,1L},{0x5939L,0xA591L,0x0C45E751L,0L,0xF606E3EFL,-6L,0x39L,-1L},{0x4137L,65529UL,5UL,0L,7UL,0x347FL,0xDBL,0x2431EA72L}},{{0xCCACL,1UL,0x4F12CA17L,-1L,0x9D0F7BDBL,2L,4L,1L},{0x29B9L,65535UL,0xACF3047BL,-7L,0xF40A761EL,-1L,0x69L,-1L},{1UL,0x6DA9L,4294967295UL,-6L,8UL,0x5085L,-1L,0x9FC79B81L},{1UL,0xFC89L,4294967290UL,0x3B1EF438L,0xDA900576L,0xFF89L,0x9AL,0x46CE155FL}},{{65535UL,65534UL,0UL,0xD768DB52L,3UL,8L,0L,-7L},{0UL,0xEE90L,0xB4F1E68EL,0x0F11B2BDL,4294967295UL,-1L,1L,3L},{0xF1E8L,1UL,0x7AA3393FL,0x80110037L,8UL,-6L,-8L,0x16D00E5BL},{0xF750L,0xB1CAL,0UL,0x68EC69D3L,0xB54A5956L,0x61A9L,-1L,-9L}}}};
    int *l_59[1];
    unsigned char l_66 = 0xF0L;
    const int **l_100 = (void*)0;
    const int **l_101 = (void*)0;
    const int *l_103[3];
    const int **l_102 = &l_103[0];
    int *l_140 = &l_58[0][2][0].f3;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_59[i] = &g_5[2];
    for (i = 0; i < 3; i++)
        l_103[i] = &g_5[5];
    (*l_102) = func_38(func_43(g_19.f4, g_46[1][1]), l_58[0][2][0], l_59[0], (((safe_mod_func_uint16_t_u_u((!(p_36 & (safe_mul_func_uint16_t_u_u(l_66, 0L)))), (((*p_37) & g_19.f0) || p_35))) == g_46[1][1].f2) & 0UL));
    for (g_19.f2 = (-26); (g_19.f2 > 60); g_19.f2++)
    {
        struct S0 *l_108[5][6][5] = {{{&l_58[0][2][0],&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19},{&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0],&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19},{&l_58[0][2][0],&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19}},{{&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0],&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19},{&l_58[0][2][0],&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19},{&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0],&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19}},{{&l_58[0][2][0],&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19},{&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0],&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19},{&l_58[0][2][0],&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19}},{{&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0],&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19},{&l_58[0][2][0],&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19},{&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0],&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19}},{{&l_58[0][2][0],&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19},{&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0],&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19},{&l_58[0][2][0],&l_58[0][2][0],&g_19,&g_19,&l_58[0][2][0]},{&g_19,&l_58[1][7][2],&g_19,&l_58[1][7][2],&g_19}}};
        int *l_119[10][4] = {{&l_58[0][2][0].f3,&g_5[2],&l_58[0][2][0].f3,&g_19.f3},{&g_19.f3,(void*)0,&g_5[4],&g_19.f3},{(void*)0,&g_19.f3,&g_5[2],(void*)0},{&g_19.f3,&g_5[2],&g_5[2],&g_5[2]},{(void*)0,(void*)0,&g_5[4],&g_5[3]},{&g_19.f3,&g_19.f3,&l_58[0][2][0].f3,(void*)0},{&l_58[0][2][0].f3,(void*)0,&g_19.f3,&l_58[0][2][0].f3},{(void*)0,(void*)0,&g_5[4],(void*)0},{(void*)0,&g_19.f3,&g_5[2],&g_5[3]},{&g_19.f3,(void*)0,&g_19.f3,&g_5[2]}};
        int i, j, k;
        for (g_19.f4 = 0; (g_19.f4 > 41); g_19.f4++)
        {
            int l_114[1];
            int l_135[6] = {0xED7C616BL,0xED7C616BL,0xED7C616BL,0xED7C616BL,0xED7C616BL,0xED7C616BL};
            int i;
            for (i = 0; i < 1; i++)
                l_114[i] = (-1L);
            if ((*p_37))
            {
                (*g_78) = l_108[1][4][3];
            }
            else
            {
                short l_111 = 2L;
                int **l_117 = &g_115[4];
                for (g_19.f6 = 19; (g_19.f6 <= (-8)); --g_19.f6)
                {
                    struct S0 *l_116[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_116[i] = (void*)0;
                    if (((l_111 <= (safe_mod_func_int16_t_s_s(g_19.f4, g_46[1][1].f1))) || (l_114[0] <= ((*p_37) ^ (**g_73)))))
                    {
                        (*l_102) = (void*)0;
                        (**g_73) = (&g_79[0] == &g_79[0]);
                        g_115[5] = (void*)0;
                    }
                    else
                    {
                        (**g_73) = (l_116[1] != (*g_78));
                        if ((*p_37))
                            continue;
                        if ((*p_37))
                            break;
                    }
                }
                (*l_117) = (*g_73);
            }
            for (g_19.f5 = 2; (g_19.f5 >= 0); g_19.f5 -= 1)
            {
                unsigned l_120[8][5] = {{0x12BE0C65L,0x12BE0C65L,0x12BE0C65L,0x12BE0C65L,0x12BE0C65L},{0x202E7330L,0x052B5274L,0x202E7330L,0x052B5274L,0x202E7330L},{0x12BE0C65L,0x12BE0C65L,0x12BE0C65L,0x12BE0C65L,0x12BE0C65L},{0x202E7330L,0x052B5274L,0x202E7330L,0x052B5274L,0x202E7330L},{0x12BE0C65L,0x12BE0C65L,0x12BE0C65L,0x12BE0C65L,0x12BE0C65L},{0x202E7330L,0x052B5274L,0x202E7330L,0x052B5274L,0x202E7330L},{0x12BE0C65L,0x12BE0C65L,0x12BE0C65L,0x12BE0C65L,0x12BE0C65L},{0x202E7330L,0x052B5274L,0x202E7330L,0x052B5274L,0x202E7330L}};
                struct S0 **l_138 = (void*)0;
                int *l_139 = &g_5[1];
                int i, j;
                for (g_19.f0 = 0; (g_19.f0 <= 0); g_19.f0 += 1)
                {
                    int i;
                    if ((*p_37))
                    {
                        struct S0 l_118 = {65535UL,1UL,0x9E9086A2L,0x0795231DL,0xC2A05BACL,0xDDDAL,0L,2L};
                        int i;
                        l_103[g_19.f5] = p_37;
                        l_135[5] = ((+((void*)0 != g_115[g_19.f5])) || (safe_lshift_func_int16_t_s_u(((void*)0 == &p_37), (((safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s((g_19.f1 | (g_46[1][1].f0 <= (((p_35 >= (((safe_mul_func_uint8_t_u_u((g_46[1][1].f4 >= (safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(4UL, 0x42388C2AL)) & l_120[7][2]), 1)), p_34))), 0x83L)) ^ p_36) && g_19.f2)) & g_19.f3) & 0xFFE66ED0L))), p_36)), l_114[0])) || (*p_37)) && 0x5BL))));
                    }
                    else
                    {
                        int i;
                        (**g_73) = (!((void*)0 != &g_115[5]));
                        (**g_73) = (p_36 < (safe_sub_func_int32_t_s_s((l_138 == &g_79[0]), ((void*)0 == (*g_78)))));
                        l_59[g_19.f0] = l_139;
                        (**g_73) = (*p_37);
                    }
                }
                (**g_73) = (((+(g_19.f7 & ((*p_37) > (*p_37)))) & p_35) && p_34);
                (**g_73) = (*p_37);
                l_140 = (*g_73);
            }
        }
    }
    return g_19.f3;
}







static const int * func_38(int * p_39, struct S0 p_40, int * p_41, unsigned char p_42)
{
    unsigned l_67 = 0x1F73C2BBL;
    int *l_68 = &g_19.f3;
    struct S0 **l_98[4];
    int **l_99 = &l_68;
    int i;
    for (i = 0; i < 4; i++)
        l_98[i] = &g_79[0];
    (*l_68) = l_67;
    if (g_19.f3)
    {
        unsigned char l_77 = 0x44L;
        if ((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((g_73 != &g_74[2]), (((((&l_68 == (void*)0) && (safe_mul_func_int8_t_s_s(l_77, ((void*)0 == g_78)))) < (*l_68)) & (safe_lshift_func_int16_t_s_u((p_40.f3 <= (*l_68)), 0))) && p_40.f6))), (**g_73))))
        {
            int l_82 = 0x767623DBL;
            int **l_83 = (void*)0;
            int **l_84 = &l_68;
            (*l_68) = (**g_73);
            l_82 = (*p_41);
            (*l_84) = p_39;
            (**g_73) = ((*l_68) & p_40.f5);
        }
        else
        {
            (*l_68) = l_77;
        }
    }
    else
    {
        int **l_89[1];
        int i;
        for (i = 0; i < 1; i++)
            l_89[i] = (void*)0;
        for (p_40.f0 = 0; (p_40.f0 <= 0); p_40.f0 += 1)
        {
            int **l_85 = (void*)0;
            int **l_86 = &l_68;
            (**g_73) = 0x3B8E4AF2L;
            (*l_86) = (*g_73);
        }
        for (p_40.f0 = 0; (p_40.f0 != 24); p_40.f0++)
        {
            return &g_5[2];
        }
        p_41 = l_68;
        (*l_68) = (safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u((&g_73 != &l_89[0]), (safe_mul_func_int8_t_s_s((-8L), (&g_79[0] != l_98[0]))))), p_40.f0)), (((g_46[1][1].f5 >= (0x56CEAAE5L | 0x509E7058L)) && (-3L)) != p_42)));
    }
    (*l_99) = p_41;
    return p_41;
}







static int * func_43(unsigned char p_44, struct S1 p_45)
{
    int l_47[8][2];
    int *l_53[8];
    int **l_57 = &l_53[1];
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
            l_47[i][j] = (-1L);
    }
    for (i = 0; i < 8; i++)
        l_53[i] = &g_19.f3;
    for (g_19.f6 = 1; (g_19.f6 >= 0); g_19.f6 -= 1)
    {
        int l_48 = (-5L);
        int *l_50 = &l_47[2][1];
        int * const *l_49 = &l_50;
        int **l_52[5][7][2] = {{{&l_50,&l_50},{&l_50,&l_50},{&l_50,&l_50},{&l_50,&l_50},{&l_50,&l_50},{(void*)0,&l_50},{(void*)0,(void*)0}},{{&l_50,(void*)0},{&l_50,(void*)0},{(void*)0,&l_50},{(void*)0,&l_50},{&l_50,&l_50},{&l_50,&l_50},{&l_50,&l_50}},{{&l_50,&l_50},{&l_50,&l_50},{(void*)0,&l_50},{(void*)0,(void*)0},{&l_50,(void*)0},{&l_50,(void*)0},{(void*)0,&l_50}},{{(void*)0,&l_50},{&l_50,&l_50},{&l_50,&l_50},{&l_50,&l_50},{&l_50,&l_50},{&l_50,&l_50},{(void*)0,&l_50}},{{(void*)0,(void*)0},{&l_50,(void*)0},{&l_50,(void*)0},{(void*)0,&l_50},{(void*)0,&l_50},{&l_50,&l_50},{&l_50,&l_50}}};
        int i, j, k;
        for (p_44 = 0; (p_44 <= 1); p_44 += 1)
        {
            int * const **l_51 = &l_49;
            int i, j;
            l_47[g_19.f6][g_19.f6] = l_47[(p_44 + 2)][p_44];
            if (l_48)
                break;
            (*l_51) = l_49;
        }
        l_53[5] = &g_5[2];
        l_53[5] = (void*)0;
        l_53[7] = (void*)0;
        for (l_48 = 1; (l_48 >= 0); l_48 -= 1)
        {
            struct S0 **l_54 = (void*)0;
            struct S0 *l_56 = (void*)0;
            struct S0 **l_55 = &l_56;
            (*l_55) = &g_19;
        }
    }
    (*l_57) = &g_5[1];
    return &g_5[5];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_19.f1, "g_19.f1", print_hash_value);
    transparent_crc(g_19.f2, "g_19.f2", print_hash_value);
    transparent_crc(g_19.f3, "g_19.f3", print_hash_value);
    transparent_crc(g_19.f4, "g_19.f4", print_hash_value);
    transparent_crc(g_19.f5, "g_19.f5", print_hash_value);
    transparent_crc(g_19.f6, "g_19.f6", print_hash_value);
    transparent_crc(g_19.f7, "g_19.f7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_46[i][j].f0, "g_46[i][j].f0", print_hash_value);
            transparent_crc(g_46[i][j].f1, "g_46[i][j].f1", print_hash_value);
            transparent_crc(g_46[i][j].f2, "g_46[i][j].f2", print_hash_value);
            transparent_crc(g_46[i][j].f3, "g_46[i][j].f3", print_hash_value);
            transparent_crc(g_46[i][j].f4, "g_46[i][j].f4", print_hash_value);
            transparent_crc(g_46[i][j].f5, "g_46[i][j].f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_214[i], "g_214[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_224.f0, "g_224.f0", print_hash_value);
    transparent_crc(g_224.f1, "g_224.f1", print_hash_value);
    transparent_crc(g_224.f2, "g_224.f2", print_hash_value);
    transparent_crc(g_224.f3, "g_224.f3", print_hash_value);
    transparent_crc(g_224.f4, "g_224.f4", print_hash_value);
    transparent_crc(g_224.f5, "g_224.f5", print_hash_value);
    transparent_crc(g_224.f6, "g_224.f6", print_hash_value);
    transparent_crc(g_224.f7, "g_224.f7", print_hash_value);
    transparent_crc(g_270.f0, "g_270.f0", print_hash_value);
    transparent_crc(g_270.f1, "g_270.f1", print_hash_value);
    transparent_crc(g_270.f2, "g_270.f2", print_hash_value);
    transparent_crc(g_270.f3, "g_270.f3", print_hash_value);
    transparent_crc(g_270.f4, "g_270.f4", print_hash_value);
    transparent_crc(g_270.f5, "g_270.f5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_327[i][j].f0, "g_327[i][j].f0", print_hash_value);
            transparent_crc(g_327[i][j].f1, "g_327[i][j].f1", print_hash_value);
            transparent_crc(g_327[i][j].f2, "g_327[i][j].f2", print_hash_value);
            transparent_crc(g_327[i][j].f3, "g_327[i][j].f3", print_hash_value);
            transparent_crc(g_327[i][j].f4, "g_327[i][j].f4", print_hash_value);
            transparent_crc(g_327[i][j].f5, "g_327[i][j].f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_372.f0, "g_372.f0", print_hash_value);
    transparent_crc(g_372.f1, "g_372.f1", print_hash_value);
    transparent_crc(g_372.f2, "g_372.f2", print_hash_value);
    transparent_crc(g_372.f3, "g_372.f3", print_hash_value);
    transparent_crc(g_372.f4, "g_372.f4", print_hash_value);
    transparent_crc(g_372.f5, "g_372.f5", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_461[i][j][k], "g_461[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
