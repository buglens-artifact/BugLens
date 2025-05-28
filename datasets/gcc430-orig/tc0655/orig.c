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
   unsigned f0 : 3;
   unsigned f1 : 14;
   signed f2 : 25;
   signed : 0;
   unsigned f3 : 17;
   unsigned f4 : 6;
   unsigned f5 : 13;
   short f6;
};

union U1 {
   char * f0;
   short f1;
};

union U2 {
   short f0;
   int f1;
   unsigned short f2;
};

union U3 {
   unsigned f0;
};

union U4 {
   unsigned f0 : 29;
   unsigned f1;
};

union U5 {
   char * f0;
   char * f1;
   char * f2;
   unsigned char f3;
};


static int g_2 = 1L;
static union U4 g_11 = {1UL};
static union U4 *g_10 = &g_11;
static int g_38 = 1L;
static union U5 g_43 = {0};
static unsigned g_61 = 1UL;
static union U4 g_82 = {0x3CB4EA99L};
static unsigned short g_87[4][4][10] = {{{0xF6B0L,8UL,65532UL,65532UL,8UL,0xF6B0L,0x7256L,0x0902L,65532UL,0x7256L},{0UL,8UL,6UL,0x0902L,8UL,0xF2BFL,8UL,0x0902L,6UL,8UL},{0UL,0x7256L,65532UL,0x0902L,0x7256L,0xF6B0L,8UL,65532UL,65532UL,8UL},{0xF6B0L,8UL,65532UL,65532UL,8UL,0xF6B0L,0x7256L,0x0902L,65532UL,0x7256L}},{{0UL,8UL,6UL,0x0902L,8UL,0xF2BFL,65532UL,0x5C30L,65528UL,65532UL},{0x5EA3L,6UL,65530UL,0x5C30L,6UL,0xAE34L,65532UL,65530UL,65530UL,65532UL},{0xAE34L,65532UL,65530UL,65530UL,65532UL,0xAE34L,6UL,0x5C30L,65530UL,6UL},{0x5EA3L,65532UL,65528UL,0x5C30L,65532UL,0UL,65532UL,0x5C30L,65528UL,65532UL}},{{0x5EA3L,6UL,65530UL,0x5C30L,6UL,0xAE34L,65532UL,65530UL,65530UL,65532UL},{0xAE34L,65532UL,65530UL,65530UL,65532UL,0xAE34L,6UL,0x5C30L,65530UL,6UL},{0x5EA3L,65532UL,65528UL,0x5C30L,65532UL,0UL,65532UL,0x5C30L,65528UL,65532UL},{0x5EA3L,6UL,65530UL,0x5C30L,6UL,0xAE34L,65532UL,65530UL,65530UL,65532UL}},{{0xAE34L,65532UL,65530UL,65530UL,65532UL,0xAE34L,6UL,0x5C30L,65530UL,6UL},{0x5EA3L,65532UL,65528UL,0x5C30L,65532UL,0UL,65532UL,0x5C30L,65528UL,65532UL},{0x5EA3L,0xAE34L,6UL,0x7256L,0xAE34L,65530UL,0x5EA3L,6UL,6UL,0x5EA3L},{65530UL,0x5EA3L,6UL,6UL,0x5EA3L,65530UL,0xAE34L,0x7256L,6UL,0xAE34L}}};
static unsigned char g_92 = 0x4CL;
static char g_98 = 0xE1L;
static short g_101 = 0x0458L;
static union U5 g_109 = {0};
static union U5 *g_108 = &g_109;
static const int *g_118 = &g_2;
static const int **g_117[8][3] = {{(void*)0,(void*)0,(void*)0},{&g_118,&g_118,&g_118},{(void*)0,(void*)0,(void*)0},{&g_118,&g_118,&g_118},{(void*)0,(void*)0,(void*)0},{&g_118,&g_118,&g_118},{(void*)0,(void*)0,(void*)0},{&g_118,&g_118,&g_118}};
static int g_119 = 0x79F83FA7L;
static union U2 g_127 = {0x983EL};
static struct S0 g_146 = {0,18,3160,201,3,25,0xC70EL};
static struct S0 *g_160 = &g_146;
static struct S0 *g_161 = &g_146;
static const unsigned g_167 = 0UL;
static union U1 g_169[8] = {{0},{0},{0},{0},{0},{0},{0},{0}};
static union U3 g_293 = {0xBC088E69L};
static union U3 *g_292 = &g_293;
static union U3 **g_291 = &g_292;
static struct S0 g_299 = {0,100,-4491,207,0,2,0L};
static struct S0 g_316 = {0,105,838,161,3,46,1L};
static union U1 *g_333 = &g_169[7];
static struct S0 **g_356 = &g_161;
static union U4 *g_373[8][10] = {{(void*)0,(void*)0,(void*)0,&g_82,&g_82,&g_11,&g_11,&g_82,(void*)0,&g_82},{&g_11,(void*)0,&g_11,&g_82,&g_11,(void*)0,(void*)0,(void*)0,(void*)0,&g_11},{&g_82,&g_82,&g_82,&g_82,&g_82,(void*)0,(void*)0,&g_11,(void*)0,&g_82},{&g_11,&g_11,(void*)0,&g_82,(void*)0,&g_11,&g_82,(void*)0,(void*)0,(void*)0},{(void*)0,&g_11,&g_11,&g_82,&g_82,(void*)0,&g_82,&g_82,&g_11,&g_11},{&g_11,(void*)0,&g_82,(void*)0,&g_11,(void*)0,&g_82,&g_82,&g_11,&g_11},{&g_82,&g_82,&g_82,(void*)0,&g_82,&g_11,(void*)0,(void*)0,&g_11,&g_82},{(void*)0,&g_82,&g_82,(void*)0,&g_11,&g_11,&g_82,&g_82,&g_11,&g_11}};
static int *g_413[3][5][10] = {{{&g_2,(void*)0,&g_2,&g_2,(void*)0,(void*)0,&g_2,&g_2,(void*)0,&g_2},{&g_127.f1,&g_2,&g_2,(void*)0,&g_2,&g_2,&g_2,(void*)0,(void*)0,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,(void*)0,&g_2,&g_2},{&g_2,&g_2,(void*)0,&g_2,(void*)0,&g_2,(void*)0,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_127.f1,(void*)0,&g_2,&g_2,&g_2,(void*)0,&g_127.f1,&g_2}},{{&g_2,(void*)0,(void*)0,&g_2,&g_2,(void*)0,(void*)0,(void*)0,(void*)0,&g_2},{&g_2,&g_2,(void*)0,&g_2,(void*)0,&g_2,&g_2,&g_2,(void*)0,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,(void*)0,(void*)0},{&g_2,(void*)0,&g_2,&g_2,(void*)0,&g_2,&g_2,(void*)0,&g_2,&g_2},{(void*)0,(void*)0,&g_2,(void*)0,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2}},{{(void*)0,&g_127.f1,(void*)0,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,(void*)0,(void*)0,(void*)0,&g_2,&g_2,&g_2,&g_2,&g_127.f1,(void*)0},{&g_2,(void*)0,&g_2,&g_2,(void*)0,(void*)0,&g_2,(void*)0,(void*)0,&g_2},{&g_127.f1,&g_2,&g_127.f1,&g_2,&g_2,(void*)0,&g_2,(void*)0,&g_2,&g_2},{(void*)0,&g_2,&g_2,(void*)0,&g_2,(void*)0,(void*)0,(void*)0,&g_2,&g_2}}};
static int *g_415 = (void*)0;
static unsigned char g_454 = 2UL;
static union U2 *g_489 = &g_127;
static char g_682 = 0xF2L;
static int g_688 = 5L;
static union U1 g_717 = {0};
static union U4 g_722 = {0xDEE63883L};
static char g_724 = 0x41L;
static union U4 **g_761 = &g_373[6][4];
static union U4 ***g_760[2][2] = {{&g_761,&g_761},{&g_761,&g_761}};



static union U2 func_1(void);
static union U4 * func_5(union U4 * p_6, union U5 p_7, union U3 p_8, int p_9);
static union U5 func_12(union U4 * p_13, union U5 p_14, unsigned short p_15);
static union U4 * func_16(union U4 * p_17, union U4 * p_18, char * p_19, char * p_20, char * p_21);
static union U4 * func_22(union U3 p_23, union U4 * p_24, union U4 p_25, char * p_26);
static union U3 func_27(union U2 p_28, union U4 * p_29, union U1 p_30, union U1 p_31, short p_32);
static union U2 func_33(short p_34, short p_35);
static union U2 func_47(const unsigned p_48, unsigned p_49, union U3 p_50, short p_51, union U4 p_52);
static union U3 func_53(union U1 p_54);
static union U1 func_55(union U4 * p_56, union U4 * p_57, unsigned char p_58);
static union U2 func_1(void)
{
    unsigned l_44[7][1];
    union U4 *l_60[10][9] = {{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11}};
    union U4 l_550 = {0x0DB57EDEL};
    union U1 l_718 = {0};
    char *l_731 = &g_724;
    char l_763 = 1L;
    const union U5 l_788 = {0};
    int *l_800 = &g_2;
    union U4 **l_814 = &g_373[1][1];
    union U2 l_817 = {1L};
    union U1 *l_826 = &g_169[7];
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_44[i][j] = 0xC5C6A81DL;
    }
    for (g_2 = 0; (g_2 == (-22)); g_2 = safe_sub_func_int16_t_s_s(g_2, 1))
    {
        union U4 *l_59 = &g_11;
        int l_670 = 0x54DEB67EL;
        char *l_723 = &g_724;
        union U5 l_734[2] = {{0},{0}};
        union U3 l_738 = {1UL};
        union U4 **l_742 = &g_373[2][3];
        unsigned l_759 = 0UL;
        int l_773 = 0x350ADCAEL;
        int l_785 = 1L;
        union U4 ***l_813[8] = {(void*)0,&g_761,&g_761,(void*)0,&g_761,&g_761,(void*)0,&g_761};
        union U4 *l_815 = &g_11;
        struct S0 l_816 = {0,3,5518,317,6,4,-2L};
        int *l_822 = &g_127.f1;
        int *l_823 = &l_785;
        union U1 l_824[5][3] = {{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}};
        int **l_825[1][9] = {{&l_823,&l_823,(void*)0,&l_823,&l_823,(void*)0,&l_823,&l_823,(void*)0}};
        int i, j;
        (*l_742) = func_5(g_10, func_12((l_59 = func_16(&g_11, func_22(func_27(func_33(((safe_add_func_int8_t_s_s(((g_38 = 0xF261L) && (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((g_43 , 1L) < ((l_44[1][0] , (safe_lshift_func_int8_t_s_u((func_47(l_44[1][0], l_44[1][0], func_53(func_55(l_59, l_60[7][0], g_61)), l_44[1][0], l_550) , 3L), 1))) > 4294967294UL)), g_61)), 0x92L))), 0x5BL)) & 0x6BL), l_670), l_59, g_717, l_718, g_688), l_59, g_722, l_723), l_731, l_723, &g_724)), l_734[0], l_550.f0), l_738, g_293.f0);
        for (l_550.f1 = 0; (l_550.f1 >= 13); l_550.f1 = safe_add_func_uint8_t_u_u(l_550.f1, 9))
        {
            char l_747 = 0xCEL;
            union U2 **l_752 = &g_489;
            int l_755 = 0L;
            unsigned *l_756 = &g_722.f1;
            short *l_757 = &g_316.f6;
            int *l_758 = (void*)0;
            int *l_762[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            struct S0 l_768 = {1,49,3470,211,0,42,-1L};
            unsigned l_809 = 0UL;
            int i;
        }
        l_814 = ((*g_489) , (void*)0);
    }
    l_826 = &g_169[6];
    (*l_800) = (*g_118);
    return (*g_489);
}







static union U4 * func_5(union U4 * p_6, union U5 p_7, union U3 p_8, int p_9)
{
    union U3 l_739[1] = {{4294967295UL}};
    struct S0 l_740[5] = {{1,32,-2004,153,1,26,-1L},{1,32,-2004,153,1,26,-1L},{1,32,-2004,153,1,26,-1L},{1,32,-2004,153,1,26,-1L},{1,32,-2004,153,1,26,-1L}};
    int *l_741 = &g_688;
    int i;
    (*l_741) = (((l_739[0] , l_740[3]) , p_9) <= p_9);
    return p_6;
}







static union U5 func_12(union U4 * p_13, union U5 p_14, unsigned short p_15)
{
    int *l_735 = (void*)0;
    int **l_736 = (void*)0;
    int **l_737 = &g_415;
    (*l_737) = l_735;
    return (*g_108);
}







static union U4 * func_16(union U4 * p_17, union U4 * p_18, char * p_19, char * p_20, char * p_21)
{
    int *l_732[4] = {&g_127.f1,&g_127.f1,&g_127.f1,&g_127.f1};
    union U3 *l_733 = (void*)0;
    int i;
    l_732[1] = l_732[3];
    (*g_291) = l_733;
    return p_17;
}







static union U4 * func_22(union U3 p_23, union U4 * p_24, union U4 p_25, char * p_26)
{
    unsigned l_725 = 0xAE242392L;
    unsigned char *l_728[4][4][10] = {{{&g_92,&g_92,&g_454,&g_454,&g_92,&g_454,&g_92,&g_454,&g_454,&g_92},{&g_454,&g_92,&g_92,(void*)0,&g_92,&g_454,&g_92,(void*)0,&g_92,&g_92},{&g_454,&g_92,&g_92,&g_92,&g_92,&g_92,&g_454,&g_454,&g_454,&g_454},{&g_454,(void*)0,&g_92,&g_92,&g_92,&g_92,&g_92,&g_92,(void*)0,&g_454}},{{&g_454,&g_454,&g_92,&g_92,&g_92,&g_454,&g_92,(void*)0,(void*)0,&g_92},{&g_454,&g_454,&g_454,&g_92,&g_454,&g_92,&g_92,&g_92,&g_454,&g_454},{&g_454,&g_92,&g_92,&g_92,&g_454,&g_454,(void*)0,&g_454,&g_92,&g_92},{&g_92,&g_454,&g_454,&g_92,&g_92,&g_454,&g_454,&g_92,&g_454,&g_92}},{{&g_454,&g_454,&g_454,&g_92,&g_92,&g_92,&g_92,&g_92,&g_454,&g_92},{&g_92,&g_92,&g_454,&g_92,&g_454,&g_92,&g_92,&g_92,&g_454,&g_92},{&g_454,(void*)0,&g_454,&g_92,&g_92,&g_454,&g_92,&g_454,&g_454,&g_92},{&g_454,(void*)0,&g_92,&g_92,(void*)0,&g_454,&g_92,&g_92,&g_454,&g_454}},{{&g_92,&g_92,&g_92,&g_454,&g_92,&g_454,&g_92,&g_454,&g_92,&g_454},{&g_92,&g_454,&g_454,&g_454,&g_92,&g_454,&g_454,&g_92,&g_92,&g_454},{&g_454,&g_454,&g_92,&g_92,&g_454,&g_454,(void*)0,(void*)0,&g_454,&g_92},{&g_454,&g_92,&g_92,&g_454,&g_454,&g_92,&g_454,&g_92,&g_454,&g_454}}};
    int l_729[6][3][4] = {{{0L,0x3F24A5A0L,0L,(-1L)},{0L,0x1860A4C9L,0L,0x4DD5A04DL},{0xEAE561ABL,(-1L),0xEE5BBDB5L,(-1L)}},{{0x1860A4C9L,0L,1L,(-1L)},{9L,0xEAE561ABL,1L,0x3F24A5A0L},{0x1860A4C9L,0L,0xEE5BBDB5L,1L}},{{0xEAE561ABL,0L,0L,0xEAE561ABL},{0L,0xEAE561ABL,0L,9L},{0L,0x1860A4C9L,0x9513B5E1L,(-1L)}},{{0xEAE561ABL,9L,0x4DD5A04DL,(-1L)},{0L,0x1860A4C9L,1L,9L},{(-1L),0xEAE561ABL,0xDE18AF7AL,0xEAE561ABL}},{{0x1860A4C9L,0L,0x4DD5A04DL,1L},{0x3F24A5A0L,0L,0L,0x3F24A5A0L},{0L,0xEAE561ABL,0xA1D6763BL,(-1L)}},{{0L,0L,0L,(-1L)},{0x3F24A5A0L,(-1L),0x4DD5A04DL,0x4DD5A04DL},{0x1860A4C9L,0x1860A4C9L,0xDE18AF7AL,(-1L)}}};
    int *l_730 = &g_688;
    int i, j, k;
    (*l_730) = ((0xC21B5449L || (l_725 >= l_725)) < (safe_lshift_func_uint8_t_u_s(((p_23.f0 || ((l_725 < (*p_26)) < ((l_729[0][0][0] = l_725) != (g_92 = g_127.f1)))) <= ((*g_160) , 0x64L)), 1)));
    for (g_61 = 0; g_61 < 3; g_61 += 1)
    {
        for (g_119 = 0; g_119 < 5; g_119 += 1)
        {
            for (g_92 = 0; g_92 < 10; g_92 += 1)
            {
                g_413[g_61][g_119][g_92] = (void*)0;
            }
        }
    }
    return &g_82;
}







static union U3 func_27(union U2 p_28, union U4 * p_29, union U1 p_30, union U1 p_31, short p_32)
{
    const unsigned l_719[7][4] = {{0x2CD9AEC0L,4294967295UL,0x2CD9AEC0L,4294967295UL},{0x2CD9AEC0L,4294967295UL,0x2CD9AEC0L,4294967295UL},{0x2CD9AEC0L,4294967295UL,0x2CD9AEC0L,4294967295UL},{0x2CD9AEC0L,4294967295UL,0x2CD9AEC0L,4294967295UL},{0x2CD9AEC0L,4294967295UL,0x2CD9AEC0L,4294967295UL},{0x2CD9AEC0L,4294967295UL,0x2CD9AEC0L,4294967295UL},{0x2CD9AEC0L,4294967295UL,0x2CD9AEC0L,4294967295UL}};
    struct S0 l_720[5] = {{1,73,-459,120,3,8,0xAA41L},{1,73,-459,120,3,8,0xAA41L},{1,73,-459,120,3,8,0xAA41L},{1,73,-459,120,3,8,0xAA41L},{1,73,-459,120,3,8,0xAA41L}};
    union U3 l_721 = {3UL};
    int i, j;
    (*g_160) = ((g_316.f2 ^ l_719[5][2]) , l_720[4]);
    return l_721;
}







static union U2 func_33(short p_34, short p_35)
{
    int *l_671 = &g_127.f1;
    unsigned l_679 = 0xAFEB8A81L;
    struct S0 l_715 = {0,82,5746,172,1,77,1L};
    (*l_671) = (g_316.f3 > g_167);
    for (g_127.f1 = 0; (g_127.f1 != (-7)); --g_127.f1)
    {
        int *l_674 = (void*)0;
        union U1 l_677[2][6] = {{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}};
        int l_678 = 0x952E01A7L;
        char *l_680 = &g_98;
        char *l_681 = &g_682;
        union U4 l_683[9][5][5] = {{{{0x7BEC90D8L},{0x026401EAL},{0x5374603BL},{4294967286UL},{0x2CE92BDCL}},{{0x5D9121A2L},{0x03F9E551L},{0xE6EBB65FL},{0x13F1F53AL},{0xC42FA2C2L}},{{4294967290UL},{4294967286UL},{0xFF52526CL},{0x7BEC90D8L},{3UL}},{{0xC42FA2C2L},{0xDE49FAA2L},{1UL},{0x0C5EDBAFL},{0xE6EBB65FL}},{{0xAB871195L},{4294967287UL},{0x2CAC7F90L},{0UL},{0x34DEBAC6L}}},{{{4294967287UL},{4294967290UL},{4294967295UL},{4294967287UL},{4294967295UL}},{{0xE9CF1489L},{5UL},{4294967295UL},{4294967287UL},{4294967291UL}},{{0x2B4CDB77L},{0x83E34910L},{4294967293UL},{4294967288UL},{0x5374603BL}},{{0x2B4CDB77L},{0UL},{7UL},{0UL},{0UL}},{{0xE9CF1489L},{1UL},{0UL},{3UL},{0x69691925L}}},{{{4294967287UL},{4294967288UL},{4294967286UL},{4294967291UL},{0UL}},{{0xAB871195L},{4294967295UL},{4294967287UL},{4294967295UL},{4294967287UL}},{{0xC42FA2C2L},{0xC42FA2C2L},{0x34DEBAC6L},{0x5CCBCAB8L},{4294967286UL}},{{7UL},{4294967287UL},{0x2CE92BDCL},{4294967286UL},{0xFE177DC3L}},{{4294967295UL},{1UL},{7UL},{4294967287UL},{0xBF62FEC4L}}},{{{1UL},{4294967287UL},{0UL},{9UL},{3UL}},{{0UL},{0x2B4CDB77L},{1UL},{0x5374603BL},{0x2CAC7F90L}},{{0xDE49FAA2L},{7UL},{0x5D9121A2L},{0x2F0B2FD4L},{0xC42FA2C2L}},{{3UL},{0xAB871195L},{1UL},{0xE6EBB65FL},{4294967291UL}},{{1UL},{1UL},{4294967288UL},{0x026401EAL},{4294967295UL}}},{{{0xE9CF1489L},{4294967288UL},{4294967290UL},{1UL},{4294967287UL}},{{0xE6EBB65FL},{1UL},{4294967290UL},{1UL},{0x5CCBCAB8L}},{{0x7BEC90D8L},{0UL},{4294967288UL},{0x6DE84ECEL},{0xAC9A3676L}},{{0x2CE92BDCL},{7UL},{1UL},{4294967290UL},{4294967295UL}},{{0x03F9E551L},{4294967295UL},{0x5D9121A2L},{3UL},{0x6DE84ECEL}}},{{{0x5B08E079L},{1UL},{1UL},{0x5B08E079L},{1UL}},{{0x2CAC7F90L},{4294967287UL},{0UL},{9UL},{7UL}},{{4294967295UL},{4294967293UL},{7UL},{0xAC9A3676L},{4294967289UL}},{{0x83E34910L},{4294967289UL},{0x2CE92BDCL},{9UL},{0xBC0F003EL}},{{0x13F1F53AL},{0xC42FA2C2L},{0x34DEBAC6L},{0x5B08E079L},{1UL}}},{{{0UL},{0x03F9E551L},{0x2CA1878EL},{3UL},{0xE6EBB65FL}},{{1UL},{0UL},{4294967287UL},{0xBC0F003EL},{0x5CCBCAB8L}},{{0UL},{0x5374603BL},{4294967295UL},{4294967291UL},{0xFE177DC3L}},{{0x95AB087DL},{0x5CCBCAB8L},{0x5374603BL},{4294967295UL},{4294967288UL}},{{0xE6EBB65FL},{7UL},{0UL},{0xAB871195L},{4294967288UL}}},{{{9UL},{0x03F9E551L},{4294967291UL},{0UL},{0xFE177DC3L}},{{0x6BA6B2C7L},{0UL},{0x5B08E079L},{4294967295UL},{0x5CCBCAB8L}},{{0x41344BDEL},{7UL},{1UL},{1UL},{4294967295UL}},{{4294967291UL},{0UL},{0UL},{0UL},{0UL}},{{1UL},{0xFE177DC3L},{0x2CA1878EL},{0x13F1F53AL},{0x41344BDEL}}},{{{0x2F0B2FD4L},{0x5B08E079L},{9UL},{0x83E34910L},{0x0C5EDBAFL}},{{0xBC0F003EL},{0x6BA6B2C7L},{4294967287UL},{4294967295UL},{1UL}},{{0x2F0B2FD4L},{4294967295UL},{0x6DE84ECEL},{0x2CAC7F90L},{0x8F15A7A4L}},{{1UL},{4294967287UL},{0UL},{0x5B08E079L},{4294967291UL}},{{4294967291UL},{1UL},{0x41344BDEL},{0x03F9E551L},{0x5686267AL}}}};
        int l_712 = 0xB81C8397L;
        int i, j, k;
        l_674 = (void*)0;
        if ((safe_mod_func_int32_t_s_s((g_293.f0 && (g_2 < ((p_35 , ((~(((((p_35 , (l_677[0][0] , (p_34 & (l_678 == ((*l_681) = ((*l_680) = l_679)))))) == (p_34 >= 255UL)) >= p_35) , l_683[1][3][4]) , (*l_671))) & (*l_671))) , (*l_671)))), p_35)))
        {
            char l_684 = (-1L);
            int *l_687[2];
            int l_689 = 0xACBD3518L;
            unsigned short *l_706[2][9] = {{&g_127.f2,&g_127.f2,&g_127.f2,&g_127.f2,&g_87[1][1][0],&g_127.f2,&g_127.f2,&g_127.f2,&g_127.f2},{(void*)0,&g_127.f2,&g_87[0][1][9],&g_127.f2,(void*)0,(void*)0,&g_127.f2,&g_87[0][1][9],&g_127.f2}};
            unsigned short * const *l_705 = &l_706[0][8];
            int i, j;
            for (i = 0; i < 2; i++)
                l_687[i] = &g_688;
            l_689 = (l_684 <= (safe_mod_func_int16_t_s_s(0xE3B6L, 65534UL)));
            for (l_679 = 0; (l_679 < 10); l_679++)
            {
                short *l_699 = &g_146.f6;
                int l_700 = 0x89C7462AL;
                unsigned *l_708 = &l_679;
                unsigned **l_707 = &l_708;
                unsigned short **l_709 = &l_706[0][8];
                unsigned short ***l_710 = &l_709;
                unsigned char *l_711 = &g_454;
                l_712 = (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(((*l_699) = (p_34 & (safe_add_func_uint32_t_u_u((*l_671), (-8L))))))) || l_700), (safe_add_func_uint8_t_u_u(((*l_711) = (safe_rshift_func_int16_t_s_s((l_705 != ((*l_710) = ((&g_167 != ((*l_707) = (void*)0)) , l_709))), ((p_35 >= l_700) == p_35)))), p_35)))) & 1L), 9));
            }
            for (g_101 = 0; (g_101 == 15); g_101++)
            {
                if (p_34)
                    break;
                (*g_161) = l_715;
                if (p_34)
                    break;
            }
        }
        else
        {
            struct S0 l_716 = {1,117,-2713,131,3,25,0x56F6L};
            l_716 = ((*g_489) , ((*g_161) = l_715));
        }
    }
    return (*g_489);
}







static union U2 func_47(const unsigned p_48, unsigned p_49, union U3 p_50, short p_51, union U4 p_52)
{
    int *l_551[10] = {&g_127.f1,&g_127.f1,&g_127.f1,&g_127.f1,&g_127.f1,&g_127.f1,&g_127.f1,&g_127.f1,&g_127.f1,&g_127.f1};
    int l_552 = 3L;
    union U1 l_555 = {0};
    struct S0 l_558 = {1,22,-4825,257,1,35,0x5A85L};
    union U4 *l_578 = &g_11;
    int * const l_581[4][8] = {{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,(void*)0,&g_2,&g_2,&g_2,&g_2,(void*)0,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2}};
    union U3 **l_593[10][8][3] = {{{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,(void*)0},{(void*)0,&g_292,&g_292},{(void*)0,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292}},{{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{(void*)0,&g_292,&g_292},{&g_292,&g_292,(void*)0},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292}},{{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,(void*)0,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,(void*)0,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292}},{{&g_292,(void*)0,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,(void*)0,&g_292},{&g_292,&g_292,(void*)0},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,(void*)0}},{{&g_292,(void*)0,&g_292},{&g_292,&g_292,(void*)0},{&g_292,(void*)0,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,(void*)0},{&g_292,&g_292,&g_292},{(void*)0,&g_292,&g_292},{&g_292,&g_292,&g_292}},{{&g_292,&g_292,&g_292},{&g_292,(void*)0,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{(void*)0,(void*)0,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292}},{{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,(void*)0},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292}},{{&g_292,&g_292,&g_292},{(void*)0,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,(void*)0,&g_292}},{{&g_292,&g_292,&g_292},{(void*)0,&g_292,&g_292},{&g_292,&g_292,&g_292},{(void*)0,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292}},{{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,(void*)0},{(void*)0,&g_292,(void*)0},{&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292},{&g_292,&g_292,(void*)0},{&g_292,&g_292,&g_292}}};
    union U2 l_604[4][4][8] = {{{{0L},{0L},{-1L},{0x0EC4L},{2L},{0L},{0xF233L},{0L}},{{0L},{0x0EC4L},{3L},{0x0EC4L},{0L},{0x4C9AL},{-1L},{0L}},{{2L},{0L},{3L},{0x4C9AL},{2L},{0x4C9AL},{3L},{0L}},{{2L},{0x4C9AL},{3L},{0L},{2L},{0x4C9AL},{-1L},{0x4C9AL}}},{{{2L},{0L},{0xF233L},{0L},{2L},{0x0EC4L},{-1L},{0L}},{{2L},{0L},{3L},{0x4C9AL},{2L},{0x4C9AL},{3L},{0L}},{{2L},{0x4C9AL},{3L},{0L},{2L},{0x4C9AL},{-1L},{0x4C9AL}},{{2L},{0L},{0xF233L},{0L},{2L},{0x0EC4L},{-1L},{0L}}},{{{2L},{0L},{3L},{0x4C9AL},{2L},{0x4C9AL},{3L},{0L}},{{2L},{0x4C9AL},{3L},{0L},{2L},{0x4C9AL},{-1L},{0x4C9AL}},{{2L},{0L},{0xF233L},{0L},{2L},{0x0EC4L},{-1L},{0L}},{{2L},{0L},{3L},{0x4C9AL},{2L},{0x4C9AL},{3L},{0L}}},{{{2L},{0x4C9AL},{3L},{0L},{2L},{0x4C9AL},{-1L},{0x4C9AL}},{{2L},{0L},{0xF233L},{0L},{2L},{0x0EC4L},{-1L},{0L}},{{2L},{0L},{3L},{0x4C9AL},{2L},{0x4C9AL},{3L},{0L}},{{2L},{0x4C9AL},{3L},{0L},{2L},{0x4C9AL},{-1L},{0x4C9AL}}}};
    int * const l_653 = (void*)0;
    int i, j, k;
    l_551[8] = l_551[3];
lbl_594:
    l_552 = p_50.f0;
    if ((safe_add_func_uint16_t_u_u((l_555 , p_49), (g_299.f3 > p_52.f0))))
    {
        int **l_560 = &g_413[2][4][0];
        int **l_561 = &g_415;
        unsigned l_565 = 0xAEB9B8A8L;
        union U4 *l_592 = &g_11;
        for (g_38 = 23; (g_38 != 26); g_38 = safe_add_func_uint32_t_u_u(g_38, 8))
        {
            struct S0 l_559 = {1,96,2189,258,3,53,0x0A62L};
            l_559 = ((*g_160) = l_558);
        }
        (*l_561) = ((*l_560) = l_551[3]);
        for (g_11.f1 = 0; (g_11.f1 <= 7); g_11.f1 += 1)
        {
            short *l_562 = &g_169[7].f1;
            int l_566 = 0x0340DCCBL;
            unsigned char *l_573 = &g_454;
            unsigned char *l_574 = &g_109.f3;
            int l_575 = 0x29E48580L;
            unsigned l_579 = 0x8E64998EL;
            union U1 **l_583[10];
            int i;
            for (i = 0; i < 10; i++)
                l_583[i] = &g_333;
            (*g_160) = l_558;
            if (p_48)
                break;
            l_575 = (((*l_562) = p_52.f0) < (safe_mod_func_int32_t_s_s(l_565, ((l_566 || (safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((+0x79L), p_49)), (l_566 = (p_48 > (safe_add_func_uint8_t_u_u(((*l_574) = ((*l_573) = p_50.f0)), ((l_566 != (g_82.f0 ^ g_11.f1)) <= g_146.f2)))))))) , l_566))));
            for (l_565 = 0; (l_565 <= 7); l_565 += 1)
            {
                union U4 l_576 = {0x34A78290L};
                int i, j;
                for (g_127.f2 = 1; (g_127.f2 <= 7); g_127.f2 += 1)
                {
                    union U4 *l_577 = &g_11;
                    const char l_580[3] = {0x6CL,0x6CL,0x6CL};
                    int **l_582 = &g_413[1][1][8];
                    int i;
                    for (l_575 = 0; (l_575 <= 7); l_575 += 1)
                    {
                        int i, j;
                        l_566 = (((l_576 , l_577) == (g_316.f4 , l_578)) , l_579);
                    }
                    (*l_582) = (l_580[0] , (g_169[g_127.f2] , l_581[1][6]));
                }
                l_575 = (((void*)0 == l_583[3]) ^ (safe_lshift_func_uint16_t_u_s(((*g_118) | (p_50 , (safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((0x6149L && (((((func_55(&l_576, (g_373[l_565][g_11.f1] = l_592), (4294967295UL & (0xABL | l_576.f0))) , l_593[8][4][0]) == (void*)0) | g_2) & 0x53L) || 0L)), 0)), g_316.f3)), g_316.f3)))), 7)));
            }
        }
    }
    else
    {
        unsigned short l_595 = 0UL;
        int l_601[10][7] = {{0x4FF26D33L,(-1L),0xCBD0DE1BL,(-1L),(-1L),0xCBD0DE1BL,(-1L)},{0L,0xAF9C5489L,0x093BC552L,0x14ECFFDBL,0xAF9C5489L,0x17C42482L,0xD101F5FDL},{9L,(-1L),1L,9L,(-1L),9L,1L},{(-8L),(-8L),0x644D87BEL,0x14ECFFDBL,0L,1L,(-8L)},{0x8019819AL,1L,(-1L),(-1L),0x0C9DDC45L,0x0C9DDC45L,(-1L)},{(-5L),0xD101F5FDL,(-5L),0x17C42482L,0L,(-5L),0xAF9C5489L},{(-1L),(-1L),(-1L),0L,(-1L),0x9E83BED4L,(-1L)},{0x369DE9D6L,0x17C42482L,0x17C42482L,0x369DE9D6L,0xAF9C5489L,(-5L),0L},{0x0C9DDC45L,0x8019819AL,1L,(-1L),(-1L),0x0C9DDC45L,0x0C9DDC45L},{(-8L),0L,(-8L),0L,(-8L),1L,0L}};
        int l_603 = (-9L);
        int l_621 = 0x783005C1L;
        short *l_624 = &g_299.f6;
        int l_625 = 0x232F9093L;
        int *l_627 = &l_625;
        const unsigned l_656 = 0x6179B44EL;
        char l_658[5][5][3] = {{{0xCBL,0xE6L,0xBCL},{1L,(-2L),(-3L)},{(-3L),0L,(-3L)},{(-1L),0L,0x16L},{0L,(-8L),0xA7L}},{{0x37L,0x31L,0xCBL},{(-8L),0xCBL,0x31L},{0x37L,0xA7L,(-8L)},{0L,0x16L,0L},{(-1L),(-3L),0L}},{{(-3L),(-3L),(-2L)},{0xDAL,0x16L,0x25L},{0x31L,0xA7L,0x41L},{0L,0xCBL,0xBCL},{0x16L,0x31L,0x41L}},{{0L,(-8L),0x25L},{0L,0L,(-2L)},{0xE6L,0L,0L},{0xE6L,(-2L),0L},{0L,0x25L,(-8L)}},{{0L,0x41L,0x31L},{0x16L,0xBCL,0xCBL},{0L,0x41L,0xA7L},{0x31L,0x25L,0x16L},{0xDAL,(-2L),(-3L)}}};
        struct S0 l_665 = {0,103,766,278,2,46,4L};
        struct S0 *l_668 = &l_558;
        union U2 l_669 = {0x9EC3L};
        int i, j, k;
        if (p_51)
        {
            struct S0 l_596 = {0,115,2782,303,3,59,0L};
            unsigned short *l_599 = &g_87[3][0][2];
            unsigned char *l_600 = &g_92;
            if (g_316.f4)
                goto lbl_594;
            l_601[1][0] = (l_595 | ((*l_600) = (l_596 , (safe_rshift_func_int16_t_s_u((+((*g_489) , l_596.f4)), ((*l_599) = 0x0DF9L))))));
            l_603 = ((p_48 > g_127.f2) == (safe_unary_minus_func_int16_t_s((g_299.f1 && (l_601[6][0] = (p_49 ^ g_146.f5))))));
        }
        else
        {
            return l_604[3][1][5];
        }
        if (((safe_rshift_func_int8_t_s_s((l_601[1][0] = (safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_603 = p_49), p_48)), p_51))), ((((void*)0 == &l_604[3][0][4]) != ((safe_sub_func_int16_t_s_s((l_625 = ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((*l_624) = ((((((l_621 = (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(p_52.f0, p_52.f0)), 5))) ^ (safe_sub_func_uint16_t_u_u(l_595, (-3L)))) && p_50.f0) != 0x5AL) | (-10L)) || 0x10L)), 10)), p_48)) == g_146.f0)), p_51)) || p_49)) & (-1L)))) , 3L))
        {
            int **l_626[7][3][1] = {{{&g_413[1][1][8]},{&l_551[7]},{&g_413[1][1][8]}},{{&l_551[7]},{&g_413[1][1][8]},{&l_551[7]}},{{&g_413[1][1][8]},{&l_551[7]},{&g_413[1][1][8]}},{{&l_551[7]},{&g_413[1][1][8]},{&l_551[7]}},{{&g_413[1][1][8]},{&l_551[7]},{&g_413[1][1][8]}},{{&l_551[7]},{&g_413[1][1][8]},{&l_551[7]}},{{&g_413[1][1][8]},{&l_551[7]},{&g_413[1][1][8]}}};
            int i, j, k;
            l_627 = l_551[3];
        }
        else
        {
            (*g_161) = (*g_160);
        }
        (*g_356) = (*g_356);
        for (g_11.f1 = 0; (g_11.f1 <= 2); g_11.f1 += 1)
        {
            union U3 *l_628 = &g_293;
            int *l_629 = &l_601[6][4];
            int **l_630 = &g_415;
            union U5 l_640 = {0};
            short l_642 = (-6L);
            struct S0 l_645 = {1,56,509,213,1,12,0xFFEEL};
            unsigned l_652 = 4294967295UL;
            union U2 l_664 = {0x00CAL};
            (*g_291) = l_628;
            (*l_630) = l_629;
            for (g_127.f0 = 0; (g_127.f0 <= 2); g_127.f0 += 1)
            {
                int l_631 = (-3L);
                union U5 **l_641 = &g_108;
                unsigned short *l_643[1][4];
                int l_644 = 0xC630D4A6L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_643[i][j] = (void*)0;
                }
                if (((((g_316.f6 != l_631) == (((((l_644 = (safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((*g_415) | ((**l_630) >= (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_640 , ((l_641 != &g_108) > (p_51 == p_48))), p_49)), l_642)))), 4294967295UL)) & p_51), 255UL))) , p_52.f0) > 0L) , 0x57L) < g_454)) < 0xDEL) != 65526UL))
                {
                    (*l_629) = (*g_415);
                    (*g_161) = l_645;
                }
                else
                {
                    short l_646 = 0x1191L;
                    union U1 **l_647 = &g_333;
                    int l_657 = 6L;
                    (**l_630) = l_646;
                    (*l_647) = (void*)0;
                    for (l_558.f6 = 28; (l_558.f6 >= (-21)); l_558.f6 = safe_sub_func_int16_t_s_s(l_558.f6, 9))
                    {
                        union U4 **l_650 = &g_373[6][4];
                        union U4 **l_651 = &l_578;
                        int **l_654 = &l_551[3];
                        (*l_651) = ((*l_650) = &p_52);
                        (*l_629) = l_652;
                        (*l_654) = l_653;
                        (*g_415) = p_49;
                    }
                    if ((*g_118))
                    {
                        l_657 = (l_646 >= (safe_unary_minus_func_int32_t_s((0xE6L >= ((*g_489) , l_656)))));
                        (**l_630) = (((*g_292) , 0UL) == p_48);
                        if ((*g_415))
                            break;
                        l_658[0][4][2] = (g_316.f3 & (p_48 < g_299.f1));
                    }
                    else
                    {
                        unsigned short **l_659 = &l_643[0][1];
                        struct S0 *l_660 = &g_316;
                        int *l_661 = &l_601[1][0];
                        (**l_630) = ((p_50 , (p_48 , &g_87[3][0][2])) == ((*l_659) = &g_87[3][0][2]));
                        (*l_660) = ((*g_161) = (**g_356));
                        (*l_630) = l_661;
                    }
                }
                (*l_630) = (*l_630);
                for (g_38 = 0; (g_38 != (-11)); g_38--)
                {
                    return l_664;
                }
                (*g_161) = (p_52 , l_665);
            }
            for (g_119 = (-7); (g_119 != 26); ++g_119)
            {
                l_668 = (*g_356);
                return l_669;
            }
        }
    }
    return (*g_489);
}







static union U3 func_53(union U1 p_54)
{
    char l_208 = 9L;
    union U3 l_223 = {0UL};
    int l_230 = 0x5286ADEAL;
    int l_270[1][5];
    union U2 l_306 = {4L};
    unsigned char *l_307[2][9][7] = {{{(void*)0,&g_92,(void*)0,(void*)0,(void*)0,&g_92,&g_92},{&g_92,(void*)0,(void*)0,&g_92,&g_92,&g_92,&g_92},{(void*)0,&g_92,&g_92,(void*)0,&g_92,&g_92,(void*)0},{&g_92,&g_92,&g_92,&g_92,&g_92,&g_92,(void*)0},{(void*)0,(void*)0,&g_92,&g_92,(void*)0,&g_92,&g_92},{(void*)0,&g_92,&g_92,(void*)0,(void*)0,&g_92,&g_92},{&g_92,&g_92,&g_92,(void*)0,(void*)0,&g_92,(void*)0},{&g_92,(void*)0,&g_92,(void*)0,(void*)0,&g_92,&g_92},{&g_92,&g_92,(void*)0,(void*)0,&g_92,&g_92,&g_92}},{{&g_92,&g_92,(void*)0,(void*)0,&g_92,(void*)0,&g_92},{(void*)0,(void*)0,&g_92,&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92,&g_92,(void*)0,(void*)0,&g_92},{&g_92,&g_92,&g_92,(void*)0,&g_92,(void*)0,(void*)0},{(void*)0,(void*)0,&g_92,&g_92,&g_92,&g_92,&g_92},{&g_92,&g_92,(void*)0,&g_92,(void*)0,&g_92,(void*)0},{&g_92,(void*)0,(void*)0,(void*)0,&g_92,(void*)0,&g_92},{&g_92,&g_92,(void*)0,(void*)0,(void*)0,&g_92,&g_92},{&g_92,&g_92,(void*)0,(void*)0,&g_92,&g_92,(void*)0}}};
    union U2 *l_312 = &g_127;
    union U2 **l_311[6][3][6] = {{{(void*)0,&l_312,&l_312,&l_312,&l_312,&l_312},{(void*)0,&l_312,(void*)0,&l_312,&l_312,(void*)0},{&l_312,&l_312,&l_312,&l_312,&l_312,&l_312}},{{&l_312,(void*)0,&l_312,&l_312,&l_312,&l_312},{&l_312,&l_312,&l_312,&l_312,&l_312,&l_312},{&l_312,(void*)0,&l_312,&l_312,(void*)0,&l_312}},{{&l_312,&l_312,&l_312,&l_312,&l_312,&l_312},{&l_312,&l_312,&l_312,&l_312,(void*)0,&l_312},{&l_312,(void*)0,&l_312,(void*)0,(void*)0,&l_312}},{{(void*)0,&l_312,&l_312,&l_312,(void*)0,(void*)0},{(void*)0,&l_312,(void*)0,&l_312,&l_312,&l_312},{(void*)0,&l_312,&l_312,&l_312,&l_312,(void*)0}},{{(void*)0,&l_312,&l_312,&l_312,&l_312,&l_312},{&l_312,&l_312,&l_312,&l_312,&l_312,&l_312},{&l_312,&l_312,&l_312,(void*)0,&l_312,&l_312}},{{&l_312,&l_312,&l_312,&l_312,&l_312,&l_312},{&l_312,(void*)0,(void*)0,(void*)0,(void*)0,&l_312},{&l_312,(void*)0,(void*)0,(void*)0,&l_312,&l_312}}};
    unsigned l_327 = 0xE0326B28L;
    struct S0 l_334 = {0,66,4039,360,4,61,-1L};
    union U4 *l_371 = &g_11;
    unsigned l_392[4];
    unsigned l_408[4][2] = {{1UL,4294967292UL},{1UL,1UL},{4294967292UL,1UL},{1UL,4294967292UL}};
    int *l_429 = (void*)0;
    union U5 *l_444 = &g_109;
    union U3 *l_451 = (void*)0;
    union U3 *l_453 = &g_293;
    union U3 **l_452 = &l_453;
    short *l_455[2][2];
    struct S0 ***l_476 = (void*)0;
    unsigned l_547 = 0x41EA5FCBL;
    union U3 l_549 = {1UL};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_270[i][j] = 0x4213E9DEL;
    }
    for (i = 0; i < 4; i++)
        l_392[i] = 0x438EFCEFL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_455[i][j] = &g_299.f6;
    }
    if ((safe_mod_func_uint8_t_u_u(l_208, (g_146.f2 || ((safe_unary_minus_func_int16_t_s(g_38)) < 0xF435L)))))
    {
        const int *l_210 = &g_2;
        const int **l_211 = &l_210;
        (*l_211) = l_210;
        (*l_211) = (*l_211);
        for (g_38 = 0; (g_38 > 19); g_38 = safe_add_func_int16_t_s_s(g_38, 1))
        {
            int *l_216 = &g_127.f1;
            (*l_216) = (safe_mod_func_uint32_t_u_u((g_11.f0 = (**l_211)), (*g_118)));
        }
        (*l_211) = (*l_211);
    }
    else
    {
        struct S0 l_217 = {0,53,1364,40,6,40,6L};
        union U1 *l_219 = &g_169[7];
        union U1 **l_218 = &l_219;
        union U1 **l_220 = (void*)0;
        union U1 *l_222 = &g_169[3];
        union U1 **l_221 = &l_222;
        (*g_160) = (p_54 , l_217);
        (*l_221) = ((*l_218) = &g_169[3]);
        return l_223;
    }
    for (g_82.f1 = (-2); (g_82.f1 == 46); g_82.f1 = safe_add_func_uint8_t_u_u(g_82.f1, 4))
    {
        unsigned short l_226 = 65535UL;
        int *l_231 = &g_127.f1;
        struct S0 *l_296 = &g_146;
        struct S0 *l_335[6] = {&g_299,&g_299,&g_299,&g_299,&g_299,&g_299};
        union U2 *l_344 = (void*)0;
        int l_348 = 0xCF70D31CL;
        union U1 *l_370[7];
        union U2 ***l_378 = &l_311[0][0][4];
        const union U1 **l_384 = (void*)0;
        unsigned char l_403 = 251UL;
        unsigned char l_426 = 0UL;
        int i;
        for (i = 0; i < 7; i++)
            l_370[i] = &g_169[7];
    }
    if ((g_2 >= (safe_mod_func_int32_t_s_s((((l_408[2][0] , (((*l_452) = ((*g_291) = (l_451 = &l_223))) == ((*l_371) , &l_223))) >= (l_230 = ((g_454 < 0x10F369EBL) & (g_146.f5 = g_146.f4)))) > ((-1L) <= l_334.f0)), l_408[3][0]))))
    {
        int l_460 = 0x6BD788C1L;
        union U4 *l_467 = &g_11;
        union U3 l_498 = {0x349D6D33L};
        union U3 *l_500[1][5][7] = {{{&l_223,&l_223,&g_293,&l_223,&l_223,&g_293,&l_223},{&l_223,&g_293,&g_293,&l_223,&g_293,&g_293,&l_223},{&g_293,&l_223,&g_293,&g_293,&l_223,&g_293,&g_293},{&l_223,&l_223,&g_293,&l_223,&l_223,&g_293,&l_223},{&l_223,&g_293,&g_293,&l_223,&g_293,&g_293,&l_223}}};
        int *l_509 = &g_127.f1;
        const int l_519 = (-9L);
        short *l_531[5] = {&g_101,&g_101,&g_101,&g_101,&g_101};
        union U2 *l_539 = &g_127;
        int i, j, k;
        if (((l_334.f2 = ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(0L, 4)), 14)) & (0x4E42L | (l_460 >= ((safe_lshift_func_int8_t_s_s((((*g_161) = l_334) , (g_316.f4 ^ ((~(safe_sub_func_uint16_t_u_u(g_92, g_101))) == l_460))), 4)) , ((safe_lshift_func_int16_t_s_s((func_55(l_467, l_371, g_101) , g_167), l_230)) != l_460)))))) , l_460))
        {
            int l_468[5];
            int *l_469 = &l_306.f1;
            int *l_470 = &g_127.f1;
            int i;
            for (i = 0; i < 5; i++)
                l_468[i] = 0x5E9E4BCEL;
            (*l_470) = ((*l_469) = l_468[4]);
            (*l_470) = (-2L);
        }
        else
        {
            unsigned char l_473 = 4UL;
            unsigned *l_474[6][6][7] = {{{(void*)0,(void*)0,(void*)0,&l_408[0][1],&g_82.f1,&l_408[2][0],(void*)0},{(void*)0,(void*)0,&l_408[0][1],&g_82.f1,&l_408[0][1],&l_408[0][0],&l_408[0][1]},{&g_82.f1,&l_408[1][1],&g_82.f1,&g_82.f1,&g_82.f1,&g_82.f1,&l_408[0][0]},{&l_408[0][1],&g_82.f1,&g_82.f1,&l_408[1][1],&g_82.f1,&g_82.f1,(void*)0},{&l_408[0][0],&g_82.f1,&g_82.f1,&l_408[1][0],&g_82.f1,&l_408[0][1],&g_82.f1},{&l_408[0][1],&g_82.f1,(void*)0,&l_408[0][1],(void*)0,&g_82.f1,(void*)0}},{{&l_408[0][1],&l_408[0][1],&l_408[0][0],&l_408[0][1],&g_82.f1,&g_82.f1,(void*)0},{&l_408[0][1],&g_82.f1,&g_82.f1,&l_408[0][1],&l_408[0][1],&g_82.f1,&g_82.f1},{&g_82.f1,&l_408[0][0],(void*)0,(void*)0,&l_408[2][0],&l_408[0][1],&l_408[0][1]},{&g_82.f1,&g_82.f1,&l_408[0][1],&g_82.f1,&g_82.f1,(void*)0,&l_408[3][0]},{&g_82.f1,&l_408[1][1],&l_408[0][1],(void*)0,&l_408[0][1],(void*)0,&l_408[0][1]},{&l_408[0][1],&l_408[3][0],(void*)0,&l_408[0][1],(void*)0,&l_408[2][1],&l_408[0][1]}},{{&l_408[0][1],&g_82.f1,&l_408[0][1],&l_408[0][1],&l_408[0][1],&g_82.f1,(void*)0},{&l_408[2][1],&l_408[0][1],&l_408[0][1],&l_408[0][1],&l_408[0][1],&l_408[0][0],&l_408[2][1]},{(void*)0,&g_82.f1,&g_82.f1,&l_408[0][1],&l_408[0][0],&l_408[2][1],&l_408[0][1]},{(void*)0,&l_408[0][1],(void*)0,&l_408[0][1],(void*)0,&g_82.f1,&l_408[0][1]},{&l_408[0][1],&l_408[1][0],&l_408[2][1],&l_408[2][1],&l_408[1][0],&l_408[0][1],&g_82.f1},{&l_408[0][1],&l_408[0][1],&l_408[2][1],&g_82.f1,&l_408[0][1],&g_82.f1,&l_408[1][1]}},{{(void*)0,(void*)0,&g_82.f1,&g_82.f1,&l_408[0][1],&l_408[0][1],&l_408[0][1]},{&g_82.f1,&l_408[0][1],&l_408[0][1],&l_408[1][1],(void*)0,&g_82.f1,(void*)0},{&l_408[0][1],&l_408[1][0],(void*)0,&l_408[3][0],&l_408[0][1],(void*)0,(void*)0},{&g_82.f1,&l_408[0][1],&l_408[2][1],&l_408[0][0],&l_408[0][1],&l_408[0][1],&g_82.f1},{&l_408[0][1],&g_82.f1,&l_408[2][0],&g_82.f1,&l_408[3][0],&l_408[0][1],(void*)0},{&g_82.f1,&l_408[3][0],&g_82.f1,&l_408[0][1],&g_82.f1,&g_82.f1,&g_82.f1}},{{&l_408[1][0],&l_408[3][1],&l_408[0][1],&l_408[0][1],&l_408[0][1],&g_82.f1,&l_408[0][1]},{&l_408[0][1],&l_408[0][1],&l_408[0][1],&l_408[0][1],(void*)0,&g_82.f1,&l_408[0][1]},{&l_408[0][1],&g_82.f1,(void*)0,(void*)0,(void*)0,&l_408[0][0],&l_408[1][0]},{&l_408[0][1],&l_408[0][1],&g_82.f1,&g_82.f1,&l_408[1][1],&l_408[3][0],&l_408[0][1]},{&l_408[3][1],&l_408[1][0],&l_408[0][1],&l_408[0][1],(void*)0,(void*)0,(void*)0},{&l_408[0][1],&l_408[0][1],(void*)0,(void*)0,&g_82.f1,&l_408[0][1],&l_408[0][0]}},{{(void*)0,&l_408[2][1],(void*)0,&l_408[0][1],&g_82.f1,(void*)0,&g_82.f1},{&l_408[0][0],&l_408[0][1],&g_82.f1,&l_408[0][1],(void*)0,(void*)0,&l_408[3][0]},{&l_408[0][1],&l_408[3][1],&l_408[0][1],&g_82.f1,(void*)0,&l_408[0][0],&l_408[0][1]},{&g_82.f1,&g_82.f1,&l_408[0][1],&l_408[0][1],&l_408[0][0],&l_408[0][1],&l_408[0][1]},{&l_408[2][0],&l_408[2][0],&l_408[3][1],&l_408[0][0],&l_408[0][1],&g_82.f1,&l_408[2][1]},{&l_408[0][1],&g_82.f1,&l_408[0][0],&l_408[1][1],&l_408[0][1],&g_82.f1,&g_82.f1}}};
            struct S0 ***l_475 = (void*)0;
            int l_479 = 0x38C0D7D3L;
            int l_481 = (-7L);
            int l_491 = 0x72D28923L;
            unsigned l_494 = 1UL;
            union U3 l_495 = {1UL};
            union U3 **l_505 = (void*)0;
            union U4 l_520 = {0xF67057A4L};
            const union U5 l_535 = {0};
            int i, j, k;
            if ((((((safe_lshift_func_int8_t_s_s(l_473, 0)) & l_460) || (g_316.f5 = (g_82.f0 = g_127.f2))) , (l_476 = l_475)) == (void*)0))
            {
                char *l_480[8][1][10] = {{{&l_208,(void*)0,(void*)0,&l_208,(void*)0,(void*)0,&l_208,(void*)0,(void*)0,&l_208}},{{(void*)0,&l_208,(void*)0,(void*)0,&l_208,(void*)0,(void*)0,&l_208,(void*)0,(void*)0}},{{&l_208,&l_208,&g_98,&l_208,&l_208,&g_98,&l_208,&l_208,&g_98,&l_208}},{{&l_208,(void*)0,(void*)0,&l_208,(void*)0,(void*)0,&l_208,(void*)0,(void*)0,&l_208}},{{(void*)0,&l_208,(void*)0,(void*)0,&l_208,(void*)0,(void*)0,&l_208,(void*)0,(void*)0}},{{&l_208,&l_208,&g_98,&l_208,&l_208,&g_98,&l_208,&l_208,&g_98,&l_208}},{{&l_208,(void*)0,(void*)0,&l_208,(void*)0,(void*)0,&l_208,(void*)0,(void*)0,&l_208}},{{(void*)0,&l_208,(void*)0,(void*)0,&l_208,(void*)0,(void*)0,&l_208,(void*)0,(void*)0}}};
                int l_484[2][2];
                int *l_490[10] = {&l_484[1][0],&l_484[1][0],&l_484[1][0],&l_484[1][0],&l_484[1][0],&l_484[1][0],&l_484[1][0],&l_484[1][0],&l_484[1][0],&l_484[1][0]};
                union U3 *l_499 = &l_495;
                union U2 l_508 = {6L};
                unsigned l_512[2];
                int **l_515[3][7][9] = {{{&g_413[2][1][3],&l_490[3],&l_490[3],&g_413[2][1][3],&l_490[3],&l_490[3],&g_413[2][1][3],&l_490[3],&l_490[3]},{&g_415,(void*)0,&g_413[2][1][3],(void*)0,&g_413[2][1][3],(void*)0,&g_415,(void*)0,&g_413[2][1][3]},{&g_413[2][1][3],&l_490[3],&l_490[3],&g_413[2][1][3],&l_490[3],&l_490[3],&g_413[2][1][3],&l_490[3],&l_490[3]},{&g_415,(void*)0,&g_413[2][1][3],(void*)0,&g_413[2][1][3],(void*)0,&g_415,(void*)0,&g_413[2][1][3]},{&g_413[2][1][3],&l_490[3],&l_490[3],&g_413[2][1][3],&g_415,&g_415,&l_490[3],&g_415,&g_415},{&g_413[2][1][3],&l_490[2],&g_413[0][4][6],(void*)0,&g_413[0][4][6],&l_490[2],&g_413[2][1][3],&l_490[2],&g_413[0][4][6]},{&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415}},{{&g_413[2][1][3],&l_490[2],&g_413[0][4][6],(void*)0,&g_413[0][4][6],&l_490[2],&g_413[2][1][3],&l_490[2],&g_413[0][4][6]},{&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415},{&g_413[2][1][3],&l_490[2],&g_413[0][4][6],(void*)0,&g_413[0][4][6],&l_490[2],&g_413[2][1][3],&l_490[2],&g_413[0][4][6]},{&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415},{&g_413[2][1][3],&l_490[2],&g_413[0][4][6],(void*)0,&g_413[0][4][6],&l_490[2],&g_413[2][1][3],&l_490[2],&g_413[0][4][6]},{&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415},{&g_413[2][1][3],&l_490[2],&g_413[0][4][6],(void*)0,&g_413[0][4][6],&l_490[2],&g_413[2][1][3],&l_490[2],&g_413[0][4][6]}},{{&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415},{&g_413[2][1][3],&l_490[2],&g_413[0][4][6],(void*)0,&g_413[0][4][6],&l_490[2],&g_413[2][1][3],&l_490[2],&g_413[0][4][6]},{&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415},{&g_413[2][1][3],&l_490[2],&g_413[0][4][6],(void*)0,&g_413[0][4][6],&l_490[2],&g_413[2][1][3],&l_490[2],&g_413[0][4][6]},{&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415},{&g_413[2][1][3],&l_490[2],&g_413[0][4][6],(void*)0,&g_413[0][4][6],&l_490[2],&g_413[2][1][3],&l_490[2],&g_413[0][4][6]},{&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415,&l_490[3],&g_415,&g_415}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_484[i][j] = 0xA579E85EL;
                }
                for (i = 0; i < 2; i++)
                    l_512[i] = 0UL;
                l_491 = (((l_460 = (safe_sub_func_int8_t_s_s((l_481 = (l_479 = l_473)), ((safe_mod_func_int16_t_s_s((-1L), l_484[1][0])) == (p_54.f1 = (!g_127.f0)))))) && ((((*l_451) = (**g_291)) , g_87[3][0][2]) , (((((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((((&g_127 == (g_489 = g_489)) & l_460) , p_54.f1) > 0x271C434FL), l_460)), p_54.f1)) >= g_82.f0) == g_87[2][3][0]) , g_146.f6) , p_54.f1))) || 1L);
                if (((p_54.f1 , p_54.f1) != (((l_473 >= l_460) , ((safe_rshift_func_int16_t_s_u((l_491 = (l_460 != (g_146.f0 , p_54.f1))), 9)) <= (+(((l_460 | (g_167 == 0x4713L)) , p_54.f1) >= g_299.f4)))) || p_54.f1)))
                {
                    union U2 *l_496 = &g_127;
                    if (l_494)
                    {
                        l_306.f1 = (l_460 = p_54.f1);
                        if (g_146.f6)
                            goto lbl_497;
                        l_481 = p_54.f1;
                    }
                    else
                    {
                        return l_495;
                    }
                    l_491 = ((l_460 = p_54.f1) & g_146.f4);
                    if ((l_460 & g_316.f1))
                    {
lbl_497:
                        l_496 = &g_127;
                        (*l_452) = (*g_291);
                    }
                    else
                    {
                        return l_498;
                    }
                    l_500[0][1][3] = ((*g_291) = l_499);
                }
                else
                {
                    short *l_501 = (void*)0;
                    int l_502 = (-1L);
                    l_230 = (((void*)0 != l_501) | (l_502 >= (+(safe_mod_func_int8_t_s_s((((*g_108) , ((*g_161) , &l_499)) != l_505), (safe_rshift_func_int8_t_s_s((((*g_161) , l_508) , 0x50L), 4)))))));
                    l_509 = &l_460;
                }
                for (g_101 = 9; (g_101 < 25); g_101 = safe_add_func_uint32_t_u_u(g_101, 4))
                {
                    unsigned short l_513 = 65535UL;
                    union U3 l_514 = {4294967295UL};
                    l_513 = l_512[1];
                    return l_514;
                }
                l_509 = &l_460;
            }
            else
            {
                int l_516 = 0x8E98236AL;
                int l_534 = 6L;
                int **l_536 = &g_413[0][3][9];
                (*l_509) = ((*l_509) < (l_516 && ((safe_rshift_func_uint16_t_u_s((l_519 || (g_38 != (l_520 , l_516))), (*l_509))) >= ((g_146.f6 = (0x223DL != ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(l_516, (*l_509))), 0xBF617A8EL)) & (*l_509)))) | 0x996DL))));
                (*l_536) = (((+(safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((-5L) > g_127.f2) > (l_534 = (((*l_312) , g_299.f6) >= (((safe_lshift_func_int16_t_s_u(((void*)0 == l_531[3]), 12)) , ((safe_add_func_int8_t_s_s((g_299.f6 ^ l_516), ((2L < (*l_509)) && l_495.f0))) != l_516)) < 0xD02DDDC7L)))), 7)), 7))) , l_535) , &l_230);
                (*l_509) = l_534;
                for (l_520.f1 = 28; (l_520.f1 < 23); --l_520.f1)
                {
                    (*l_536) = &l_491;
                    for (l_208 = 0; (l_208 >= 0); l_208 -= 1)
                    {
                        l_539 = &g_127;
                    }
                    if (l_479)
                        continue;
                }
            }
        }
    }
    else
    {
        union U2 l_542 = {1L};
        union U3 l_548 = {0xEF19F807L};
        l_334.f2 = ((safe_lshift_func_int16_t_s_u((l_542 , (((safe_sub_func_uint16_t_u_u(g_146.f4, (((void*)0 != &g_160) , ((~(0x994DL < ((&l_408[3][1] != ((*l_371) , &l_408[3][1])) > ((safe_rshift_func_int8_t_s_u((((*g_10) , g_127.f2) > l_542.f0), l_547)) , l_334.f0)))) , 0x12A8L)))) > 0xB3L) >= (-1L))), l_334.f2)) || 0x0F7C01EBL);
        return l_548;
    }
    return l_549;
}







static union U1 func_55(union U4 * p_56, union U4 * p_57, unsigned char p_58)
{
    int *l_63 = &g_2;
    int **l_62 = &l_63;
    int l_78[3][1][6] = {{{0L,1L,1L,0L,1L,1L}},{{0L,1L,1L,0L,1L,1L}},{{0L,1L,1L,0L,1L,1L}}};
    const struct S0 l_90 = {1,9,-4916,267,4,50,0x4E0BL};
    union U4 *l_104 = &g_82;
    union U4 **l_106 = &g_10;
    short *l_148[2][1];
    struct S0 *l_158 = &g_146;
    union U1 *l_168 = &g_169[7];
    char *l_188 = &g_98;
    unsigned char l_203 = 255UL;
    int *l_204 = &g_127.f1;
    int *l_205 = &l_78[0][0][3];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_148[i][j] = &g_146.f6;
    }
    (*l_62) = &g_2;
    for (p_58 = 0; (p_58 >= 35); ++p_58)
    {
        int l_68[1][4][8] = {{{0L,0x27815014L,0x300B6311L,7L,0L,0L,7L,0x300B6311L},{0L,0L,0L,0L,7L,0x69FBC0AEL,0L,7L},{0x469F41AFL,7L,0x27815014L,0x469F41AFL,0x40AE7762L,0x469F41AFL,0x27815014L,7L},{0L,0L,0x864ADB5DL,0x469F41AFL,0L,0x69FBC0AEL,0x300B6311L,0x864ADB5DL}}};
        union U4 * const l_81 = &g_82;
        union U4 * const *l_80 = &l_81;
        union U4 * const **l_79 = &l_80;
        union U4 * const *l_84 = &l_81;
        union U4 * const **l_83 = &l_84;
        unsigned char *l_91 = &g_92;
        char *l_97 = &g_98;
        unsigned *l_99 = &g_82.f1;
        short *l_100[2][6][5] = {{{&g_101,&g_101,(void*)0,(void*)0,&g_101},{&g_101,(void*)0,&g_101,(void*)0,&g_101},{&g_101,&g_101,(void*)0,&g_101,(void*)0},{&g_101,&g_101,(void*)0,(void*)0,&g_101},{(void*)0,(void*)0,&g_101,&g_101,(void*)0},{&g_101,(void*)0,&g_101,&g_101,&g_101}},{{(void*)0,&g_101,(void*)0,&g_101,&g_101},{(void*)0,(void*)0,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,(void*)0,(void*)0},{(void*)0,&g_101,&g_101,&g_101,&g_101},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_101,(void*)0,&g_101}}};
        union U5 *l_107 = &g_43;
        struct S0 l_170 = {0,103,4155,237,3,11,-2L};
        unsigned char l_182[6] = {0x63L,0x63L,9UL,0x63L,0x63L,9UL};
        union U1 *l_193 = &g_169[7];
        int i, j, k;
        if (g_61)
            break;
    }
    (*l_158) = (*g_160);
    (*l_205) = ((*l_204) = ((safe_mod_func_uint8_t_u_u((g_38 | g_92), 252UL)) >= (((**l_62) < (p_58 | (**l_62))) & (l_203 , 0x4FC3L))));
    return g_169[7];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_82.f0, "g_82.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_87[i][j][k], "g_87[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f2, "g_127.f2", print_hash_value);
    transparent_crc(g_146.f0, "g_146.f0", print_hash_value);
    transparent_crc(g_146.f1, "g_146.f1", print_hash_value);
    transparent_crc(g_146.f2, "g_146.f2", print_hash_value);
    transparent_crc(g_146.f3, "g_146.f3", print_hash_value);
    transparent_crc(g_146.f4, "g_146.f4", print_hash_value);
    transparent_crc(g_146.f5, "g_146.f5", print_hash_value);
    transparent_crc(g_146.f6, "g_146.f6", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_293.f0, "g_293.f0", print_hash_value);
    transparent_crc(g_299.f0, "g_299.f0", print_hash_value);
    transparent_crc(g_299.f1, "g_299.f1", print_hash_value);
    transparent_crc(g_299.f2, "g_299.f2", print_hash_value);
    transparent_crc(g_299.f3, "g_299.f3", print_hash_value);
    transparent_crc(g_299.f4, "g_299.f4", print_hash_value);
    transparent_crc(g_299.f5, "g_299.f5", print_hash_value);
    transparent_crc(g_299.f6, "g_299.f6", print_hash_value);
    transparent_crc(g_316.f0, "g_316.f0", print_hash_value);
    transparent_crc(g_316.f1, "g_316.f1", print_hash_value);
    transparent_crc(g_316.f2, "g_316.f2", print_hash_value);
    transparent_crc(g_316.f3, "g_316.f3", print_hash_value);
    transparent_crc(g_316.f4, "g_316.f4", print_hash_value);
    transparent_crc(g_316.f5, "g_316.f5", print_hash_value);
    transparent_crc(g_316.f6, "g_316.f6", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_682, "g_682", print_hash_value);
    transparent_crc(g_688, "g_688", print_hash_value);
    transparent_crc(g_722.f0, "g_722.f0", print_hash_value);
    transparent_crc(g_724, "g_724", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
