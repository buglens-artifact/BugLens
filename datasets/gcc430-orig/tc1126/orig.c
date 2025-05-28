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
   short f0;
   volatile short f1;
   short f2;
};

union U1 {
   char f0;
   volatile char * f1;
   struct S0 f2;
   unsigned char f3;
   unsigned f4;
};

union U2 {
   unsigned f0;
   unsigned f1;
   unsigned short f2;
   unsigned f3;
};

union U3 {
   volatile char * f0;
   volatile struct S0 f1;
   int f2;
   volatile char f3;
};

union U4 {
   volatile unsigned char f0;
   struct S0 f1;
};

union U5 {
   volatile short f0;
   unsigned f1;
   volatile struct S0 f2;
   volatile int f3;
   volatile unsigned f4;
};

union U6 {
   char * f0;
   struct S0 f1;
};


static unsigned char g_2 = 251UL;
static volatile union U6 g_7 = {0};
static char g_9 = 0x40L;
static char *g_8 = &g_9;
static union U2 g_28 = {0xD9FABAF1L};
static int g_49 = 0x764E38B1L;
static int *g_80 = (void*)0;
static int **g_79 = &g_80;
static int g_97 = (-1L);
static union U5 g_107 = {1L};
static union U3 g_124 = {0};
static union U5 g_149 = {0xD15EL};
static union U3 g_195 = {0};
static union U3 g_218 = {0};
static union U5 g_230 = {1L};
static union U5 g_232 = {6L};
static int **g_234 = (void*)0;
static struct S0 g_237 = {-2L,0L,0x3FB2L};
static union U5 g_267 = {0x892BL};
static volatile union U3 g_271 = {0};
static volatile union U3 *g_270 = &g_271;
static unsigned g_273 = 0x60A45B53L;
static union U6 g_275 = {0};
static union U6 *g_274 = &g_275;
static union U5 g_300 = {0L};
static union U6 g_303 = {0};
static union U6 g_337 = {0};
static volatile int g_341 = 0L;
static volatile int *g_340 = &g_341;
static int *g_356 = (void*)0;
static unsigned char g_357 = 0xEFL;
static unsigned g_374 = 4294967295UL;
static union U4 g_405 = {1UL};
static union U4 g_435 = {1UL};
static int g_450 = 0xC676644AL;
static volatile union U1 g_466 = {1L};
static volatile union U1 *g_465 = &g_466;
static volatile union U3 **g_504 = &g_270;
static volatile union U3 ***g_503 = &g_504;
static union U3 g_515 = {0};
static unsigned char g_521 = 250UL;
static union U5 g_537 = {9L};
static union U3 g_543 = {0};
static volatile union U5 g_546 = {1L};
static volatile union U5 *g_545 = &g_546;
static volatile union U5 **g_544 = &g_545;
static union U5 g_549 = {0xE15AL};
static union U5 g_556 = {0x8046L};
static struct S0 g_568 = {0x32BAL,1L,0x38BFL};
static struct S0 g_570 = {0xC013L,-1L,-7L};
static union U4 g_574 = {4UL};
static union U4 *g_573 = &g_574;
static union U4 **g_572 = &g_573;
static int g_586 = 0xFCFFF122L;
static short g_612 = 0L;
static union U3 g_620 = {0};
static union U6 g_644 = {0};
static union U4 g_659 = {0xEDL};
static unsigned short g_667 = 0x8FDAL;
static int g_670 = 7L;
static union U6 g_731 = {0};
static union U4 g_740 = {0xDFL};
static char g_782 = 1L;
static union U5 g_786 = {0L};
static union U3 g_802 = {0};
static union U3 g_805 = {0};
static union U5 g_830 = {-4L};
static struct S0 g_862 = {0x3712L,1L,0x59A5L};
static volatile struct S0 **g_871 = (void*)0;
static struct S0 g_977 = {0L,1L,0x386EL};
static union U4 g_999 = {1UL};
static int g_1003 = 0xCDCB6E36L;
static union U4 g_1058 = {0x5CL};
static union U1 g_1096 = {0L};
static unsigned g_1145 = 0xA288FC7BL;
static unsigned short g_1149 = 8UL;
static int g_1157 = 0x19D5617BL;
static union U1 g_1159 = {0x1AL};
static char g_1206 = 0xD8L;
static unsigned short g_1211 = 8UL;
static volatile struct S0 g_1213 = {0x3D14L,0x4B98L,0L};
static volatile struct S0 *g_1212 = &g_1213;
static unsigned g_1231 = 1UL;
static unsigned short g_1237 = 0x022BL;
static union U6 g_1268 = {0};
static volatile int g_1283 = 5L;
static unsigned char g_1296 = 250UL;
static struct S0 g_1320 = {-3L,0x4A87L,7L};
static struct S0 g_1337 = {0x2432L,-1L,0x6CACL};
static volatile union U5 g_1353 = {0x28F9L};
static volatile struct S0 g_1359 = {0xFC43L,0xC9CFL,0x588BL};
static union U4 g_1376 = {0UL};
static struct S0 g_1379 = {7L,0x6EA3L,0x3186L};
static struct S0 g_1380 = {-10L,-10L,-6L};
static struct S0 g_1390 = {0xFB50L,2L,5L};
static struct S0 g_1393 = {-1L,-10L,0x1299L};
static union U2 **g_1410 = (void*)0;
static struct S0 g_1417 = {0xB258L,0x1451L,-1L};
static volatile union U1 g_1425 = {0xE8L};
static struct S0 g_1467 = {0L,0x41D6L,0xB9DEL};
static volatile union U4 g_1483 = {0x2FL};
static union U6 g_1486 = {0};
static struct S0 g_1495 = {-1L,0x48B8L,1L};
static volatile struct S0 g_1496 = {0xD00FL,1L,1L};
static union U6 g_1527 = {0};
static union U5 g_1529 = {0x5EC2L};
static volatile union U4 g_1531 = {255UL};
static union U1 g_1537 = {-8L};
static volatile struct S0 g_1541 = {-10L,0xAC0AL,-1L};
static struct S0 g_1553 = {0xDC00L,0xC2A2L,3L};



static struct S0 func_1(void);
static unsigned short func_11(char p_12);
static int * func_14(unsigned char p_15, int * p_16, unsigned char p_17, unsigned char p_18);
static int * func_19(int p_20, int * p_21, unsigned char p_22, char * p_23);
static unsigned func_30(char * p_31);
static char * func_32(unsigned p_33, unsigned p_34, unsigned p_35, unsigned short p_36);
static int ** func_42(int * p_43, unsigned p_44, int * p_45, char * p_46, int * p_47);
static char * func_50(int p_51, int ** p_52, unsigned p_53, unsigned short p_54);
static int func_55(unsigned short p_56, int ** p_57);
static unsigned char func_66(unsigned char p_67, unsigned p_68, unsigned p_69, char * p_70);
static struct S0 func_1(void)
{
    char *l_10 = &g_9;
    int l_13 = 0x5051ACAEL;
    short l_1316 = 0L;
    int l_1336 = 0x9A1FEC8CL;
    unsigned char l_1342 = 0x14L;
    struct S0 *l_1385 = &g_568;
    int **l_1428 = (void*)0;
    unsigned l_1490 = 1UL;
    unsigned l_1518 = 1UL;
    unsigned char l_1526 = 0x80L;
    if (g_2)
    {
        unsigned l_1271 = 0UL;
        int l_1297 = 0x13828D7EL;
        unsigned char l_1352 = 0x9CL;
        struct S0 *l_1384 = &g_568;
        int ***l_1396 = (void*)0;
        unsigned l_1426 = 0xC116CD99L;
        char *l_1427 = (void*)0;
        if ((safe_rshift_func_uint8_t_u_s((g_2 ^ (((safe_lshift_func_uint16_t_u_u(((g_7 , g_8) != l_10), 3)) >= func_11((l_13 | (l_10 != &g_9)))) < (g_465 != (void*)0))), l_1271)))
        {
            int l_1273 = 0xF6A15706L;
            char *l_1286 = &g_1159.f0;
            unsigned char l_1287 = 255UL;
            int ***l_1314 = &g_234;
            int l_1358 = 0xEC74F062L;
            if (((safe_unary_minus_func_uint8_t_u(l_1273)) | 0xAB0AL))
            {
                unsigned char l_1274 = 3UL;
                char *l_1307 = &g_782;
                int **l_1312 = &g_356;
                if (((((+((**g_544) , (l_1274 || ((*g_465) , g_670)))) , ((safe_mod_func_int32_t_s_s((!l_1273), (safe_add_func_uint32_t_u_u(func_66(l_1271, l_1274, l_13, l_1286), l_1287)))) || 6UL)) | 0x693ABA99L) <= g_2))
                {
                    int *l_1298 = &g_670;
                    int **l_1299 = (void*)0;
                    int **l_1300 = &g_356;
                    l_1297 ^= (safe_div_func_uint32_t_u_u(0xE06CFD6AL, (safe_div_func_int32_t_s_s((g_568.f1 >= ((((safe_lshift_func_int16_t_s_s((l_1274 < (((g_274 != g_274) || (g_1206 , l_1274)) < g_450)), 5)) , g_1206) , (void*)0) == (void*)0)), (*g_356)))));
                    (*l_1300) = l_1298;
                }
                else
                {
                    short l_1315 = 0x0D46L;
                    union U3 *l_1318 = &g_805;
                    for (g_862.f2 = 0; (g_862.f2 == 6); g_862.f2 = safe_add_func_uint8_t_u_u(g_862.f2, 3))
                    {
                        unsigned l_1313 = 0xAB0DE41FL;
                        int l_1317 = 0x74FD6F61L;
                        union U3 **l_1319 = &l_1318;
                        (*g_356) = (safe_rshift_func_int8_t_s_u(func_66(g_546.f0, l_1271, g_1157, l_10), l_1317));
                        (*l_1319) = l_1318;
                        return g_1320;
                    }
                }
            }
            else
            {
                unsigned l_1334 = 0xDE4D1049L;
                (*g_80) = l_1316;
                if ((*g_340))
                {
                    int **l_1321 = &g_80;
                    int l_1335 = 0x56D3E059L;
                    (*l_1321) = &l_1297;
                    if ((g_862.f2 > ((void*)0 != &g_1212)))
                    {
                        (*g_80) |= (((**g_504) , (safe_div_func_uint8_t_u_u(g_659.f0, ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(l_1316, g_862.f2)), (l_13 <= (*g_8)))) | l_1316)))) >= l_1336);
                        return (*g_1212);
                    }
                    else
                    {
                        (*g_340) = (0xE3L & ((g_28 , &g_274) != (void*)0));
                        (*g_340) &= l_1271;
                        return g_1337;
                    }
                }
                else
                {
                    int l_1343 = 0x310E0D35L;
                    int *l_1354 = (void*)0;
                    int *l_1355 = &g_1157;
                    (*l_1355) ^= (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((l_1342 && (l_1343 && (safe_add_func_uint32_t_u_u(g_1003, (*g_80))))), (safe_mod_func_uint8_t_u_u((~(!(safe_add_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s((l_1334 && l_1352), 14)) , ((g_1353 , (&g_1206 != (g_670 , (void*)0))) == l_1334)) | l_1316), g_28.f2)))), g_1211)))), g_1296));
                    for (g_28.f2 = 0; (g_28.f2 != 44); g_28.f2 = safe_add_func_uint8_t_u_u(g_28.f2, 3))
                    {
                        l_1358 = (&l_1297 != &g_341);
                    }
                }
                (*g_1212) = g_1359;
            }
        }
        else
        {
            union U1 **l_1377 = (void*)0;
            char l_1378 = 0x89L;
            union U2 l_1383 = {0x1BBD8797L};
            unsigned l_1412 = 0xD480EE3BL;
            int *l_1424 = &g_97;
            int ***l_1429 = &g_234;
            if ((safe_rshift_func_uint8_t_u_u(g_659.f0, 0)))
            {
                unsigned short l_1370 = 0xE8E9L;
                if (((safe_lshift_func_uint16_t_u_s((!(safe_rshift_func_int16_t_s_u((((0x1BL != (safe_lshift_func_int8_t_s_u((g_149.f0 && (*g_356)), 2))) ^ g_1320.f0) , (safe_add_func_uint8_t_u_u((((l_1370 , &g_573) != &g_573) > (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u((safe_mod_func_int16_t_s_s(((((l_1370 , (((g_1376 , 0xA01A67EDL) || (*g_340)) , l_1377)) == &g_465) || l_1297) , 0L), g_1003)))), 4))), l_1378))), 2))), l_1378)) || 0xD6L))
                {
                    g_1380 = g_1379;
                    l_1297 ^= (l_1370 <= 0x2BC2L);
                    (*g_340) &= (*g_80);
                    if ((safe_lshift_func_uint16_t_u_u(8UL, 8)))
                    {
                        (*g_340) |= ((l_1383 , l_1384) == l_1385);
                    }
                    else
                    {
                        (*g_80) = (safe_lshift_func_uint16_t_u_s(g_1213.f0, 0));
                    }
                }
                else
                {
                    (*l_1384) = (*l_1385);
                    (*g_544) = (*g_544);
                    for (l_1336 = 19; (l_1336 != 21); l_1336 = safe_add_func_int8_t_s_s(l_1336, 1))
                    {
                        return g_1390;
                    }
                }
            }
            else
            {
                union U2 *l_1395 = &g_28;
                union U2 **l_1394 = &l_1395;
                int l_1422 = 1L;
                unsigned char l_1423 = 0x5FL;
lbl_1399:
                for (g_1058.f1.f0 = 0; (g_1058.f1.f0 >= (-7)); g_1058.f1.f0 = safe_sub_func_uint16_t_u_u(g_1058.f1.f0, 1))
                {
                    return g_1393;
                }
                (*l_1394) = &l_1383;
                if (((((void*)0 == l_1396) ^ 0x6875694DL) ^ (safe_sub_func_int16_t_s_s((0L || ((void*)0 != &g_1096)), g_405.f0))))
                {
                    unsigned short l_1411 = 7UL;
                    if (g_49)
                        goto lbl_1399;
                    (*g_80) |= ((((safe_rshift_func_uint8_t_u_s(g_1359.f2, (*g_8))) , (!(safe_rshift_func_uint16_t_u_s((g_1096.f0 < ((-4L) && ((safe_div_func_int8_t_s_s((l_1383.f0 || g_1359.f2), (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((*g_8), ((l_1336 , ((l_1342 || g_1231) , g_1410)) != (void*)0))), l_1411)))) >= l_1383.f2))), l_1412)))) && l_1411) && 0UL);
                    (*g_80) = (-1L);
                    for (g_740.f1.f2 = 0; (g_740.f1.f2 >= (-4)); g_740.f1.f2--)
                    {
                        (*g_340) &= (safe_sub_func_int16_t_s_s((l_1411 || ((void*)0 != &g_1320)), g_568.f2));
                    }
                }
                else
                {
                    return g_1417;
                }
                (*g_80) = (g_570.f1 & ((((((0x54CAL == (safe_rshift_func_uint8_t_u_s(0x03L, 6))) <= (*g_356)) < (((65535UL || ((safe_lshift_func_uint8_t_u_s(l_1422, (*g_8))) & (g_1390.f0 , l_1423))) && 0x00A0L) , 0x31B11383L)) <= (*g_356)) , g_667) < 0x9EC0L));
            }
            (*l_1429) = l_1428;
        }
        (*g_340) = 0x19FC010EL;
        (*g_80) |= 0xC928A95EL;
        (*g_340) ^= (0x456CE3C6L | (safe_add_func_uint16_t_u_u((l_1342 , g_1096.f3), l_13)));
    }
    else
    {
        char *l_1443 = (void*)0;
        int l_1444 = 2L;
        unsigned l_1451 = 0xAB2D820CL;
        unsigned short l_1456 = 0x4EE5L;
        int **l_1491 = &g_356;
        union U1 *l_1519 = &g_1159;
        union U2 *l_1544 = &g_28;
        if ((safe_sub_func_uint8_t_u_u(g_237.f0, (g_1231 || ((*g_340) <= func_55((&g_573 != (void*)0), &g_80))))))
        {
            short l_1434 = 0x13A9L;
            int *l_1457 = &l_13;
            union U2 *l_1460 = &g_28;
            int *l_1463 = &g_586;
            struct S0 **l_1466 = &l_1385;
            int l_1481 = 0x2018AAFDL;
            int **l_1515 = &l_1463;
            (*g_340) = (l_1434 | (((safe_add_func_int32_t_s_s(l_1434, 4L)) , (safe_add_func_int8_t_s_s((((*g_573) , ((safe_lshift_func_uint16_t_u_u(g_28.f3, 4)) & l_1434)) != g_1157), (g_1003 , func_66(func_55((safe_div_func_uint8_t_u_u(255UL, 255UL)), &g_80), g_1379.f2, g_2, l_1443))))) & l_1444));
            (*l_1457) |= (g_556.f0 , (safe_div_func_uint32_t_u_u(func_30(func_32(g_230.f0, (safe_rshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((l_1451 , g_1393.f2) <= ((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((+l_1434) & ((func_55(g_1417.f2, &g_80) | 65532UL) <= l_1434)) , 0x4EL), l_1444)), g_568.f0)) > 1UL)), l_1456)) ^ l_1451), 0)), l_1456, g_1206)), 4UL)));
            (*l_1463) ^= ((((g_570.f1 <= func_66((safe_add_func_uint8_t_u_u((((*l_1457) , (+0x21L)) ^ (*l_1457)), (0xCCD5L > (&g_28 != l_1460)))), g_612, (((safe_div_func_uint32_t_u_u((l_1456 > 1UL), g_1390.f2)) >= 0x41L) ^ 0x79L), &g_9)) >= (*l_1457)) && 4294967295UL) || 1UL);
            if ((safe_lshift_func_int16_t_s_u(g_1213.f2, (((g_2 && (*l_1457)) , l_1466) != (void*)0))))
            {
lbl_1469:
                (*g_1212) = (*g_1212);
                return g_1467;
            }
            else
            {
                union U2 **l_1468 = &l_1460;
                int l_1488 = (-3L);
                unsigned short l_1489 = 0UL;
                (*l_1468) = (void*)0;
                if (g_1231)
                    goto lbl_1469;
                for (l_13 = 13; (l_13 < (-19)); l_13 = safe_sub_func_int32_t_s_s(l_13, 7))
                {
                    unsigned char l_1482 = 0x14L;
                    unsigned l_1492 = 1UL;
                    if ((safe_lshift_func_int8_t_s_s((*l_1457), 1)))
                    {
                        unsigned l_1474 = 0xD14F8F19L;
                        if ((*g_340))
                            break;
                        (*g_340) = l_1474;
                        if ((*l_1463))
                            continue;
                    }
                    else
                    {
                        return (*g_1212);
                    }
                    for (l_1336 = 14; (l_1336 != 5); l_1336 = safe_sub_func_uint8_t_u_u(l_1336, 2))
                    {
                        short l_1487 = (-8L);
                        (*l_1463) &= func_55((+(safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u(l_1481, l_1482)) != l_1444), 5))), l_1491);
                        (*g_340) &= l_1492;
                    }
                    (*g_340) |= l_1316;
                    if ((*g_340))
                        break;
                }
                if (((l_1489 > (*l_1463)) != ((void*)0 != &g_1206)))
                {
                    char l_1505 = 0x03L;
                    int **l_1517 = &g_80;
                    union U1 **l_1520 = &l_1519;
                    (**l_1466) = g_1495;
                    (*g_1212) = g_1496;
                    if ((safe_add_func_int8_t_s_s((g_568.f0 , (safe_add_func_int8_t_s_s((((g_1237 & (*l_1457)) & ((safe_rshift_func_int8_t_s_u((((l_1505 && ((((*l_1463) < (&g_9 == &g_9)) || (l_1505 == (l_1489 != g_1376.f0))) <= 0x4B490505L)) ^ (*l_1457)) & g_273), g_1320.f0)) != 9UL)) , 0x47L), g_612))), g_1159.f0)))
                    {
                        int l_1514 = 0L;
                        (*l_1463) ^= ((safe_sub_func_uint16_t_u_u(g_1213.f0, g_568.f0)) > func_55((safe_lshift_func_int16_t_s_s(func_55(func_66((*l_1457), l_1514, l_1488, &l_1505), l_1515), 0)), &g_356));
                        (*g_572) = (void*)0;
                    }
                    else
                    {
                        unsigned char l_1516 = 255UL;
                        (*l_1517) = func_14(((l_1488 >= g_1237) == (g_28.f1 >= (+func_55(l_1518, &g_356)))), (*l_1515), g_556.f0, g_1467.f2);
                    }
                    (*l_1520) = l_1519;
                }
                else
                {
                    union U6 **l_1525 = &g_274;
                    unsigned l_1528 = 0x75E35BA2L;
                    union U2 **l_1530 = &l_1460;
                    if (((((safe_div_func_uint32_t_u_u((((+(-1L)) == ((safe_lshift_func_uint8_t_u_s((((~1L) ^ (*l_1457)) >= (((void*)0 == l_1525) <= l_1526)), 1)) <= ((&g_572 == &g_572) != ((g_1527 , (void*)0) != (void*)0)))) != l_1528), 0xFF486E76L)) && (-1L)) , 4294967295UL) , 0x1CDF2C07L))
                    {
                        union U1 *l_1536 = &g_1537;
                        (*g_504) = (**g_503);
                        (*l_1463) &= ((g_1529 , l_1530) != (void*)0);
                        (*l_1457) &= (((g_1531 , (*g_274)) , ((void*)0 == l_1525)) >= ((safe_sub_func_int8_t_s_s((**l_1515), ((((safe_mod_func_int16_t_s_s(g_1390.f0, l_1488)) & (((void*)0 == l_1536) , l_1488)) < l_1528) >= l_1489))) || l_1489));
                    }
                    else
                    {
                        short l_1540 = 0xF4E5L;
                        (**l_1466) = (*g_1212);
                        l_1540 ^= (safe_lshift_func_int16_t_s_u((-1L), 0));
                    }
                    (*l_1385) = g_1541;
                }
            }
        }
        else
        {
            union U2 **l_1545 = &l_1544;
            for (g_374 = 0; (g_374 != 45); g_374 = safe_add_func_int8_t_s_s(g_374, 8))
            {
                return (*l_1385);
            }
            (*l_1545) = l_1544;
        }
        (*g_340) = 0xC7BD71A5L;
        for (g_659.f1.f2 = 0; (g_659.f1.f2 < (-27)); --g_659.f1.f2)
        {
            short l_1548 = 0x9584L;
            char ***l_1549 = (void*)0;
            char ***l_1550 = (void*)0;
            char **l_1552 = &l_1443;
            char ***l_1551 = &l_1552;
            (*g_340) &= l_1548;
            (*l_1551) = &g_8;
        }
        (*g_340) = ((g_1376 , &g_465) != &g_465);
    }
    return g_1553;
}







static unsigned short func_11(char p_12)
{
    unsigned char l_29 = 255UL;
    int *l_669 = &g_670;
    unsigned char l_745 = 0x9BL;
    int **l_1251 = &g_80;
    int l_1262 = 1L;
    union U4 *l_1265 = (void*)0;
    char *l_1266 = &g_1096.f0;
    union U6 *l_1267 = &g_1268;
    union U6 **l_1269 = (void*)0;
    union U6 **l_1270 = &l_1267;
    (*l_1251) = func_14(g_2, func_19(((safe_lshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((g_28 , p_12) || (l_29 != func_30(func_32(g_28.f3, ((((safe_mod_func_int8_t_s_s((0xA6DFE160L >= (safe_unary_minus_func_int8_t_s((((p_12 > ((p_12 <= ((safe_lshift_func_int16_t_s_u(((1L | p_12) != g_28.f1), l_29)) == l_29)) ^ g_28.f3)) , 0L) ^ l_29)))), 9L)) & l_29) , (void*)0) != (void*)0), g_28.f1, l_29)))), 247UL)) && p_12), 4)) < g_237.f2), l_669, (*l_669), &g_9), g_9, l_745);
    (**l_1251) = ((&l_669 != ((safe_mod_func_uint32_t_u_u((**l_1251), (g_1003 , (safe_lshift_func_uint8_t_u_s(((((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s(func_66(((((safe_lshift_func_uint8_t_u_u((l_1262 , (**l_1251)), ((safe_rshift_func_uint16_t_u_u(((l_1265 != (((**l_1251) && 0xCEC1ABC0L) , l_1265)) == g_586), (*l_669))) == g_586))) == (-5L)) | p_12) , p_12), g_570.f2, g_667, l_1266), p_12)), (**l_1251))) , 0UL) , p_12) ^ p_12), 2))))) , &l_669)) <= p_12);
    (*l_1270) = l_1267;
    return p_12;
}







static int * func_14(unsigned char p_15, int * p_16, unsigned char p_17, unsigned char p_18)
{
    int *l_746 = &g_450;
    int **l_747 = &g_356;
    unsigned char l_760 = 0x03L;
    union U3 *l_804 = &g_805;
    union U3 **l_803 = &l_804;
    char *l_859 = &g_9;
    char **l_901 = &g_8;
    char ***l_900 = &l_901;
    union U2 l_905 = {4294967295UL};
    struct S0 *l_976 = &g_977;
    struct S0 **l_975 = &l_976;
    struct S0 ***l_974 = &l_975;
    char l_995 = 2L;
    unsigned l_1004 = 0x6C5E1C1EL;
    char l_1017 = (-3L);
    int *l_1025 = &g_450;
    union U6 **l_1035 = &g_274;
    struct S0 **l_1135 = &l_976;
    unsigned char l_1152 = 255UL;
    union U1 *l_1158 = &g_1159;
    unsigned char l_1177 = 7UL;
    unsigned l_1193 = 0xB2358B03L;
    short l_1238 = 0x0F2FL;
    (*l_747) = l_746;
    return p_16;
}







static int * func_19(int p_20, int * p_21, unsigned char p_22, char * p_23)
{
    int *l_671 = &g_49;
    union U2 l_686 = {8UL};
    char l_724 = (-1L);
    union U6 *l_730 = &g_731;
    union U4 *l_739 = &g_740;
    (*l_671) &= (*p_21);
    if ((*l_671))
    {
        (*g_572) = (void*)0;
    }
    else
    {
        union U4 ***l_678 = &g_572;
        int l_679 = (-7L);
        short l_725 = (-7L);
        int l_726 = 1L;
        union U6 **l_732 = (void*)0;
        union U6 **l_733 = (void*)0;
        union U6 **l_734 = &l_730;
        (*l_671) ^= (*p_21);
        if ((((*p_23) || (((((p_20 , (safe_add_func_uint32_t_u_u(((*l_671) < ((*l_671) , (~(((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_357, ((void*)0 != l_678))), 0x3AF9L)) > (func_66(g_450, l_679, l_679, &g_9) , l_679)) & 0x6F75L)))), 0L))) <= 0x6EL) || 0UL) <= p_20) != l_679)) > g_450))
        {
            union U6 **l_695 = &g_274;
            for (g_49 = 0; (g_49 < 25); ++g_49)
            {
                (*g_504) = (*g_504);
                if (l_679)
                    continue;
            }
            (*l_671) = (safe_div_func_int16_t_s_s((g_273 || (safe_div_func_uint16_t_u_u((g_465 == (l_686 , g_465)), (p_20 ^ ((safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((*l_671), ((safe_sub_func_int32_t_s_s((l_695 == &g_274), ((safe_unary_minus_func_uint8_t_u(((p_22 ^ (*p_23)) | (*l_671)))) , g_2))) & 0x2A8AL))), g_568.f2)), 12)) == (*l_671)))))), (*l_671)));
            if (p_20)
                goto lbl_700;
        }
        else
        {
lbl_700:
            for (l_686.f0 = 0; (l_686.f0 != 46); l_686.f0 = safe_add_func_uint16_t_u_u(l_686.f0, 5))
            {
                int *l_699 = &g_450;
                return l_699;
            }
            for (g_230.f1 = 0; (g_230.f1 != 13); g_230.f1 = safe_add_func_uint16_t_u_u(g_230.f1, 9))
            {
                char ***l_703 = (void*)0;
                char **l_705 = &g_8;
                char ***l_704 = &l_705;
                int ***l_706 = &g_79;
                (*l_704) = &g_8;
                (*l_706) = &p_21;
                (**l_706) = &l_679;
                if ((***l_706))
                    continue;
            }
            for (g_521 = 0; (g_521 != 37); g_521 = safe_add_func_int32_t_s_s(g_521, 9))
            {
                unsigned char l_713 = 1UL;
                int *l_728 = &g_670;
                for (g_435.f1.f2 = 3; (g_435.f1.f2 == 1); g_435.f1.f2 = safe_sub_func_uint16_t_u_u(g_435.f1.f2, 9))
                {
                    unsigned char l_714 = 0x2AL;
                    union U6 **l_729 = &g_274;
                    if ((safe_add_func_int32_t_s_s(0x389A1FC0L, ((~(+l_713)) , l_714))))
                    {
                        (*p_21) = ((((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(((*p_21) >= (safe_lshift_func_uint8_t_u_u(0x1DL, 2))), p_20)), (safe_unary_minus_func_uint16_t_u((safe_mod_func_uint8_t_u_u((g_9 != (((*l_671) | ((((!((((-8L) || ((*g_8) | (l_714 == ((l_724 >= l_725) >= (*p_23))))) | (*p_23)) || (-2L))) && p_20) ^ p_22) , l_714)) <= (*l_671))), (-1L))))))) & 0x01836717L) != p_20) < p_22);
                        if (l_679)
                            continue;
                        (*l_671) |= (l_726 , l_726);
                    }
                    else
                    {
                        int l_727 = 0x5B4FE923L;
                        (*l_671) = ((+(p_20 | (p_20 , p_20))) , l_713);
                        if (l_727)
                            break;
                        return l_728;
                    }
                    (*l_729) = g_274;
                    if ((*l_728))
                        continue;
                }
            }
            (*l_734) = l_730;
        }
    }
lbl_744:
    if ((safe_unary_minus_func_int32_t_s((*l_671))))
    {
        int *l_738 = &g_450;
        for (g_28.f1 = 0; (g_28.f1 < 32); g_28.f1++)
        {
            (*l_671) = 0x84DAF9ECL;
        }
        return l_738;
    }
    else
    {
        int l_741 = 0x083266EFL;
        (*g_572) = l_739;
        l_741 = (func_55(g_570.f0, &p_21) | ((l_671 == l_671) ^ p_22));
    }
    for (g_273 = 0; (g_273 == 10); g_273 = safe_add_func_int32_t_s_s(g_273, 8))
    {
        if (g_273)
            goto lbl_744;
        (*g_572) = (*g_572);
    }
    return l_671;
}







static unsigned func_30(char * p_31)
{
    unsigned l_471 = 0x6C9633A9L;
    int **l_490 = (void*)0;
    union U3 *l_514 = &g_515;
    union U3 **l_513 = &l_514;
    union U3 ***l_512 = &l_513;
    union U5 *l_548 = &g_549;
    union U5 **l_547 = &l_548;
    struct S0 *l_567 = &g_568;
    char l_654 = 0x35L;
    char l_663 = 0x41L;
    int l_666 = (-1L);
    int l_668 = 7L;
    if (((g_49 || g_237.f2) , 0L))
    {
        int *l_453 = &g_49;
        unsigned l_478 = 0x5BACD07CL;
        unsigned short l_480 = 1UL;
        union U3 **l_496 = (void*)0;
        union U3 ***l_495 = &l_496;
        unsigned char l_497 = 0xF0L;
        int l_505 = 0x32297713L;
        union U4 ***l_583 = &g_572;
        char *l_588 = (void*)0;
        union U2 l_607 = {4294967294UL};
lbl_483:
        (*g_79) = l_453;
        for (g_267.f1 = (-27); (g_267.f1 <= 44); g_267.f1++)
        {
            int *l_456 = &g_450;
            short l_479 = 0x62F4L;
            (*l_453) = func_55((*l_453), &l_453);
            l_456 = l_453;
            (*g_80) = ((safe_div_func_uint16_t_u_u((((*l_456) , (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((((((func_66((safe_mod_func_uint16_t_u_u((g_465 != g_465), (~(((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(l_471, g_374)), (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((*g_80), (safe_add_func_int32_t_s_s(((*l_456) < 0x084BD076L), l_478)))), (*l_456))))) | (*l_456)) < (*l_456))))), (*l_456), g_273, p_31) & (-1L)) , g_2) > l_471) < 0x4852D773L) == l_471), 1)), (*g_8)))) & l_471), l_479)) | l_480);
            for (g_273 = 0; (g_273 == 30); g_273 = safe_add_func_int16_t_s_s(g_273, 9))
            {
                unsigned short l_487 = 6UL;
                if (l_479)
                    goto lbl_483;
                (*g_80) = (safe_unary_minus_func_uint8_t_u((((*p_31) <= ((*g_8) | (-1L))) & ((safe_add_func_uint8_t_u_u((l_487 < (safe_add_func_int8_t_s_s(((g_28 , g_237.f0) || ((l_490 == (((safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((g_237.f2 & ((l_495 == &l_496) == (*l_456))), l_487)) >= 65535UL), 0xCB706350L)) , 0x83L) , l_490)) ^ l_497)), (*l_453)))), (-8L))) < g_267.f1))));
            }
        }
        if (func_55(((65532UL && g_9) || func_55(g_237.f0, &g_356)), l_490))
        {
            union U2 l_502 = {4294967287UL};
            char *l_550 = &g_9;
            struct S0 *l_569 = &g_570;
            int l_589 = 0x388D5597L;
            if ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((l_502 , g_503) == (g_28.f0 , &g_504)) && 0xA44EL), 7)), g_2)))
            {
                unsigned l_518 = 0x9EC2B914L;
                union U5 *l_555 = &g_556;
                int l_571 = 0x8267B111L;
                l_505 &= (*g_80);
                for (l_502.f0 = 0; (l_502.f0 >= 57); ++l_502.f0)
                {
                    int ***l_508 = &g_234;
                    int l_511 = 0L;
                    (*l_453) = func_55((l_508 == ((safe_mod_func_uint8_t_u_u(((l_511 , g_9) , g_237.f2), (g_357 , 0x91L))) , &g_234)), ((g_97 == (l_512 != &g_504)) , l_490));
                    return g_2;
                }
                if ((((safe_mod_func_int8_t_s_s(((l_518 | (((safe_sub_func_uint16_t_u_u(g_450, 1UL)) , func_66((*l_453), (((*g_80) || 0x8411B8F8L) , g_237.f0), (&g_79 != &g_234), &g_9)) | l_502.f0)) <= l_518), l_502.f1)) == 246UL) >= g_521))
                {
                    unsigned char l_522 = 0xA8L;
                    return l_522;
                }
                else
                {
                    char l_527 = 0xDDL;
                    int **l_530 = &g_356;
                    union U5 *l_536 = &g_537;
                    union U5 **l_535 = &l_536;
                    union U3 *l_542 = &g_543;
                    (*l_535) = (((safe_div_func_int16_t_s_s((((*l_453) < (safe_add_func_uint16_t_u_u((func_55((func_55(l_527, &g_80) , (safe_lshift_func_int16_t_s_s(g_357, 2))), l_530) , ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(func_55(g_2, l_490), (**g_79))), 2)) < 0L)), g_28.f3))) == 1UL), 1UL)) ^ 0x5446F44CL) , (void*)0);
                    (*g_80) = (safe_add_func_uint32_t_u_u(func_66(func_66(g_273, (g_237.f0 | func_55(((safe_lshift_func_int16_t_s_s((l_502.f3 >= (*l_453)), 6)) , (g_28.f0 && ((**g_503) == l_542))), (((g_544 != l_547) >= (-3L)) , (void*)0))), g_521, l_550), g_237.f0, l_471, &g_9), 0x1065A1CFL));
                    for (g_28.f0 = 0; (g_28.f0 <= 17); g_28.f0++)
                    {
                        union U1 *l_554 = (void*)0;
                        union U1 **l_553 = &l_554;
                        l_553 = (void*)0;
                        (*l_547) = l_555;
                    }
                    l_571 &= (safe_rshift_func_int16_t_s_s((((*g_8) , 0xD0527272L) , func_55(((safe_sub_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((**g_79), (safe_sub_func_uint32_t_u_u((g_49 == g_97), g_450)))) >= (g_97 <= l_518)), (safe_div_func_uint16_t_u_u(((g_2 , l_567) != l_569), g_357)))) , g_237.f0), &g_80)), g_267.f1));
                }
            }
            else
            {
                union U4 ***l_575 = &g_572;
                int l_587 = (-3L);
                (*l_575) = g_572;
                if (((void*)0 != &g_274))
                {
                    return g_568.f2;
                }
                else
                {
                    union U6 **l_576 = &g_274;
                    (*l_576) = g_274;
                }
                for (l_502.f2 = 3; (l_502.f2 < 54); l_502.f2 = safe_add_func_int16_t_s_s(l_502.f2, 8))
                {
                    if ((*g_80))
                        break;
                    (**l_575) = (**l_575);
                }
                l_589 &= (func_66(((((*p_31) == (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((l_575 != l_583) & (((((void*)0 != (*l_547)) <= (*l_453)) >= (g_586 < 0xA8C79D10L)) ^ l_587)), l_502.f2)), 0))) <= 0x7AL) , l_502.f2), g_570.f0, l_502.f2, l_588) || (**g_79));
            }
            for (g_405.f1.f0 = 0; (g_405.f1.f0 >= 9); g_405.f1.f0 = safe_add_func_int16_t_s_s(g_405.f1.f0, 1))
            {
                return g_570.f0;
            }
        }
        else
        {
            int l_598 = 0x4C41A387L;
            int *l_601 = &g_450;
            (*l_601) ^= (safe_add_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((*l_453), 11)) | (0xA2CF343AL ^ ((func_66((*l_453), g_570.f0, l_598, p_31) > (safe_mod_func_int32_t_s_s((*l_453), l_598))) != 255UL))), 0x852E956BL)) < 0xFBL) , g_568.f2), 0x2112L));
            (*l_601) = ((safe_rshift_func_uint8_t_u_s((*l_453), 7)) , (safe_unary_minus_func_int8_t_s((((safe_add_func_uint32_t_u_u((l_607 , (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((((l_471 | ((*l_453) | (0x97L && (*p_31)))) <= (*l_601)) && func_55((*l_453), &l_453)) | 0L) <= 1UL), (*l_453))), g_612))), (*l_601))) & (*p_31)) , (*l_601)))));
        }
    }
    else
    {
        union U3 *l_619 = &g_620;
        int l_621 = (-7L);
        char **l_628 = &g_8;
        int *l_645 = &g_586;
        for (g_232.f1 = 0; (g_232.f1 != 18); g_232.f1 = safe_add_func_int8_t_s_s(g_232.f1, 9))
        {
            char l_615 = 0x27L;
            union U6 **l_618 = &g_274;
            int *l_627 = (void*)0;
            if (l_615)
                break;
            l_621 = (((safe_mod_func_int8_t_s_s(2L, (((void*)0 == l_618) , (*p_31)))) , (*g_504)) == l_619);
            l_621 = (l_615 < 4294967291UL);
            if (l_615)
            {
                int l_622 = 5L;
                int *l_646 = (void*)0;
                int *l_647 = &g_450;
                if (func_66(g_521, l_622, ((g_97 , ((func_55(l_615, l_490) != g_570.f2) >= g_570.f0)) >= g_521), &g_9))
                {
                    unsigned short l_629 = 65535UL;
                    l_628 = l_628;
                    if (l_629)
                        continue;
                }
                else
                {
                    int l_637 = 0x01FD1574L;
                    unsigned short l_642 = 0xB5BCL;
                    union U6 *l_643 = &g_644;
                    if (l_622)
                    {
                        l_622 = ((safe_sub_func_int32_t_s_s((((((l_622 , (safe_sub_func_uint16_t_u_u(65526UL, ((*g_8) < (g_568.f0 < (((l_622 == (safe_unary_minus_func_uint16_t_u(l_637))) ^ ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(l_642, (l_621 && (func_55(g_28.f2, &g_80) ^ l_615)))), 2)) || 0xF6L)) & (*g_8))))))) , (void*)0) != l_643) ^ 0UL) & 0xCB9AL), g_28.f2)) , 0x7A6C1F45L);
                        l_637 = l_621;
                        return g_49;
                    }
                    else
                    {
                        l_645 = &l_622;
                        (*g_79) = l_627;
                        (*l_645) ^= (-1L);
                        return g_374;
                    }
                }
                (*l_647) ^= (6L || func_55((*l_645), ((g_232.f1 & 0xAA4158B8L) , &g_80)));
            }
            else
            {
                unsigned l_655 = 6UL;
                union U4 *l_658 = &g_659;
                unsigned short l_665 = 65535UL;
                l_621 &= ((l_627 == &g_97) != (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((func_66(l_654, g_612, (l_655 ^ g_570.f0), &l_654) , l_655), (*l_645))), (-9L))), (*l_645))));
                for (g_568.f0 = 0; (g_568.f0 >= 1); g_568.f0++)
                {
                    union U4 *l_662 = (void*)0;
                    int l_664 = 0xF4E37D57L;
                    (*g_572) = l_658;
                    for (g_28.f3 = 0; (g_28.f3 > 25); g_28.f3++)
                    {
                        l_662 = (*g_572);
                        if (l_663)
                            continue;
                    }
                    l_664 &= l_655;
                }
                (*l_645) ^= l_655;
                (*l_645) |= l_665;
            }
        }
        l_666 = ((*p_31) , 0x9AFF7103L);
    }
    l_666 = g_667;
    l_666 |= l_663;
    l_668 ^= l_666;
    return l_666;
}







static char * func_32(unsigned p_33, unsigned p_34, unsigned p_35, unsigned short p_36)
{
    int *l_48 = &g_49;
    int l_62 = (-1L);
    int **l_451 = &g_356;
    char *l_452 = &g_9;
    l_451 = func_42(l_48, (*l_48), l_48, func_50((func_55((((safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((((*l_48) < (g_28.f0 & (p_35 , (&l_48 != (void*)0)))) , (l_62 < p_36)), (-1L))), 0xB70E9AFBL)) || (*g_8)) > g_9), &l_48) | 0xC4E31865L), &g_80, (*l_48), g_49), (*g_79));
    return l_452;
}







static int ** func_42(int * p_43, unsigned p_44, int * p_45, char * p_46, int * p_47)
{
    unsigned short l_110 = 0x7482L;
    char *l_111 = &g_9;
    union U5 **l_112 = (void*)0;
    union U3 *l_123 = &g_124;
    int **l_157 = &g_80;
    int **l_158 = &g_80;
    union U4 *l_287 = (void*)0;
    short l_289 = 2L;
    union U6 *l_336 = &g_337;
    char l_428 = 0L;
    unsigned l_448 = 4294967290UL;
    int *l_449 = &g_450;
    if ((func_66(l_110, (0x20CAD133L < g_97), p_44, l_111) != (g_28.f0 && (l_112 == (void*)0))))
    {
        unsigned short l_119 = 65535UL;
        char *l_122 = &g_9;
        int l_139 = 8L;
        int **l_176 = &g_80;
        int *l_177 = &l_139;
        union U2 l_193 = {4294967295UL};
        unsigned l_215 = 0xF4EA760EL;
        union U3 *l_217 = &g_218;
        unsigned l_265 = 7UL;
        int **l_277 = &l_177;
        l_123 = ((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_119 , func_55((safe_mod_func_uint32_t_u_u(0x06646FD8L, ((l_110 || (p_44 , (p_44 > (p_44 > func_66((&g_80 == (void*)0), (~l_119), l_110, l_122))))) || l_110))), &g_80)), 0x46L)), g_28.f3)), l_119)) , l_123);
        (*p_45) &= ((((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((+(safe_sub_func_uint8_t_u_u((((0UL == 0xF1B91DFBL) , (safe_add_func_int16_t_s_s(((g_28.f1 <= (p_44 != (safe_rshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(0x71L, (safe_rshift_func_int16_t_s_s(l_119, 1)))) ^ (l_139 , 0x5DL)), l_119)))) , (-1L)), 0x5CB1L))) , p_44), 0xD4L))) ^ l_110), l_139)), g_97)) > (*p_46)) , p_44) , 0xBEFBA41DL);
        if (((p_44 > g_49) >= g_2))
        {
            unsigned l_142 = 0x692E2E77L;
            union U2 l_152 = {0xF2DF7396L};
            int **l_155 = &g_80;
            union U3 *l_163 = (void*)0;
            char l_164 = 0L;
            for (g_107.f1 = 26; (g_107.f1 <= 24); g_107.f1 = safe_sub_func_int32_t_s_s(g_107.f1, 9))
            {
                union U5 *l_148 = &g_149;
                union U5 **l_147 = &l_148;
                if (l_142)
                {
                    (*p_43) &= l_110;
                    (*p_45) = ((g_28.f0 , p_47) == (void*)0);
                }
                else
                {
                    int *l_156 = &l_139;
                    (*l_156) &= (safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_147 == (void*)0), (l_110 ^ 0L))), (((*p_46) , (safe_add_func_uint16_t_u_u((((*g_8) , func_55((l_152 , ((0x7CL | (safe_lshift_func_int8_t_s_u(1L, 7))) < g_28.f2)), l_155)) && 0L), (-4L)))) , 1L)));
                    return l_157;
                }
            }
            (*p_45) = func_66(func_55(l_139, l_158), (((*p_46) | (*p_46)) , (safe_div_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u(((((*p_45) < 0x28CFD866L) > (((void*)0 != l_163) ^ (*g_8))) , g_28.f0), p_44)) , 0xA0L) , l_164) , p_44), p_44))), p_44, p_46);
            if (l_110)
            {
                int ***l_168 = &l_155;
                (*p_43) ^= (-3L);
                for (g_149.f1 = 0; (g_149.f1 != 4); g_149.f1 = safe_add_func_int32_t_s_s(g_149.f1, 7))
                {
                    int ***l_167 = &l_157;
                    (*p_45) = (*p_45);
                    (*l_167) = &g_80;
                    (*p_45) ^= (&g_79 == l_168);
                }
                (*l_155) = (*g_79);
            }
            else
            {
                int *l_169 = &g_97;
                (*l_169) ^= (*p_43);
            }
        }
        else
        {
            (*p_45) |= (p_44 , ((void*)0 == p_46));
        }
        if ((0xA6FFL || (((g_28.f0 > (safe_mod_func_int32_t_s_s(5L, (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u(func_55(g_28.f0, l_176), 5)) & (*p_43)), ((p_43 == l_177) & (*l_177))))))) <= g_28.f2) >= g_28.f3)))
        {
            unsigned l_180 = 0xF7CC7A65L;
            int **l_183 = &g_80;
            unsigned short l_189 = 1UL;
            union U3 *l_192 = (void*)0;
            int l_209 = (-1L);
            union U5 *l_229 = &g_230;
            unsigned l_255 = 4294967290UL;
            (*l_177) ^= func_55(((((p_44 < (((p_47 != (void*)0) >= (((((safe_lshift_func_int8_t_s_u((*p_46), 5)) != func_55(p_44, &g_80)) >= g_28.f0) & p_44) != 0xD92CL)) ^ l_180)) , 0x1DL) | g_49) , g_49), &g_80);
            if (((safe_add_func_int16_t_s_s((l_111 == p_46), g_2)) > g_28.f3))
            {
                return l_183;
            }
            else
            {
                union U3 *l_194 = &g_195;
                int l_208 = (-9L);
                char *l_223 = &g_9;
                union U5 **l_233 = &l_229;
                unsigned l_264 = 0x8F5056CAL;
                union U6 **l_276 = &g_274;
lbl_263:
                for (l_119 = 0; (l_119 > 3); l_119++)
                {
                    unsigned l_188 = 0x2FA25C20L;
                    int ***l_210 = &g_79;
                    (*l_177) &= ((~(safe_add_func_int32_t_s_s(l_188, (l_188 && func_66(func_55((+(l_189 , ((safe_add_func_int32_t_s_s((l_192 != (l_193 , l_194)), (safe_div_func_uint16_t_u_u(2UL, (safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_44, ((*p_46) ^ g_97))), 1UL)))))) <= g_97))), &g_80), p_44, g_28.f0, &g_9))))) || g_28.f1);
                    (*p_43) = (&g_79 == ((safe_rshift_func_int8_t_s_u(((((safe_sub_func_uint8_t_u_u((g_97 | l_208), l_209)) || l_188) & ((0xEF975B77L ^ 0xADAE2510L) != ((g_49 != ((g_28.f0 , l_208) > 0x66F7L)) ^ g_97))) || 253UL), p_44)) , l_210));
                    if ((*p_43))
                        continue;
                    (*l_177) |= 0L;
                }
                if ((*p_45))
                {
                    short l_216 = 0xAB10L;
                    (*l_177) = 0x12E1E692L;
                    if (((safe_sub_func_uint16_t_u_u((g_2 != (safe_div_func_int32_t_s_s((0xD5L < (-4L)), (g_28.f1 , p_44)))), ((*g_79) == p_45))) , func_66(p_44, (func_66((((p_44 , (void*)0) != &g_79) , l_215), p_44, p_44, &g_9) != p_44), l_216, &g_9)))
                    {
                        (*p_43) = func_55((g_28.f2 <= ((*g_8) || (*g_8))), &g_80);
                    }
                    else
                    {
                        (*l_176) = (*g_79);
                    }
                    (*l_177) = (func_66(((void*)0 == l_217), g_49, p_44, &g_9) || (p_44 || (safe_div_func_int32_t_s_s((((l_216 , 1L) , p_44) , 6L), g_9))));
                    for (l_209 = 0; (l_209 > (-11)); l_209 = safe_sub_func_int32_t_s_s(l_209, 6))
                    {
                        (*p_45) ^= (l_223 != (void*)0);
                    }
                }
                else
                {
                    unsigned short l_224 = 0x4063L;
                    union U5 *l_231 = &g_232;
                    short l_246 = 0L;
                    int l_256 = 0x29FFD0D4L;
                    int **l_261 = &g_80;
                    union U3 **l_268 = &l_217;
                    if ((((l_224 , func_55(((safe_mod_func_int8_t_s_s(func_55(((safe_lshift_func_uint16_t_u_u(l_208, (l_229 != l_231))) > (func_66(p_44, (((p_44 >= p_44) != ((((0UL <= (((l_112 == l_233) || (-3L)) | g_28.f2)) > p_44) >= 0L) , 0x45E37A98L)) | (-8L)), p_44, p_46) & (*p_43))), g_234), g_28.f0)) ^ (*l_177)), &g_80)) , l_224) >= g_28.f0))
                    {
                        g_234 = &p_47;
                    }
                    else
                    {
                        short l_235 = 1L;
                        struct S0 *l_236 = &g_237;
                        struct S0 **l_238 = (void*)0;
                        struct S0 **l_239 = &l_236;
                        (*p_45) ^= l_235;
                        (*l_239) = l_236;
                        (*g_79) = (*l_158);
                        p_43 = &l_208;
                    }
                    if (((safe_lshift_func_uint16_t_u_s(0xB90BL, (safe_lshift_func_int8_t_s_s(func_66(p_44, (safe_add_func_uint8_t_u_u(l_246, (p_44 == (safe_mod_func_uint32_t_u_u((&g_79 != ((((safe_sub_func_int32_t_s_s((((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_255, ((*l_177) && (g_2 == 0x5F2BL)))), (*p_46))) < g_49) | 7UL), g_9)) && p_44) == 0x995AL) , &l_176)), 1L))))), g_28.f1, &g_9), (*g_8))))) && p_44))
                    {
                        l_256 ^= l_224;
                    }
                    else
                    {
                        unsigned l_257 = 0x0168392CL;
                        int l_262 = 0xCD115146L;
                        l_262 = ((l_257 & 0UL) && ((safe_unary_minus_func_int8_t_s((*p_46))) < (safe_rshift_func_int8_t_s_u(func_55(g_237.f2, l_261), (*l_177)))));
                        (*g_79) = p_47;
                    }
                    if (l_224)
                        goto lbl_263;
                    if ((l_264 , l_265))
                    {
                        union U5 *l_266 = &g_267;
                        union U3 ***l_269 = &l_268;
                        volatile union U3 **l_272 = &g_270;
                        (*l_233) = l_266;
                        (*p_43) = 0x321D8D08L;
                        (*l_269) = l_268;
                        (*l_272) = g_270;
                    }
                    else
                    {
                        (*l_176) = (void*)0;
                        (*p_43) = (*p_43);
                        g_273 ^= func_66(p_44, l_264, g_237.f2, p_46);
                        (*p_43) = (p_45 == (*g_79));
                    }
                }
                (*l_276) = g_274;
                return l_157;
            }
        }
        else
        {
            int l_283 = 0x87638CCCL;
            union U3 **l_292 = &l_217;
            union U5 *l_299 = &g_300;
            if ((*p_43))
            {
                unsigned l_278 = 0x334BC5BCL;
                (**l_277) &= l_278;
                (*p_43) &= (+0xAE938D7FL);
                return &g_80;
            }
            else
            {
                for (g_28.f3 = 28; (g_28.f3 < 11); g_28.f3 = safe_sub_func_uint16_t_u_u(g_28.f3, 9))
                {
                    int l_284 = 9L;
                    l_284 = (safe_rshift_func_int16_t_s_u((!0xB7B8L), l_283));
                }
            }
            for (g_97 = (-12); (g_97 >= 20); g_97++)
            {
                union U4 **l_288 = &l_287;
                (*l_288) = l_287;
            }
            if ((*p_45))
            {
                char l_301 = 0x4FL;
                struct S0 *l_304 = (void*)0;
                int **l_308 = &l_177;
                if (((+1UL) , l_289))
                {
                    unsigned l_305 = 4294967286UL;
                    (**l_277) &= (*p_43);
                    for (l_215 = 0; (l_215 > 28); l_215++)
                    {
                        union U6 *l_302 = &g_303;
                        (*l_177) ^= func_66(((void*)0 == l_292), g_28.f2, (((safe_lshift_func_uint16_t_u_s((0UL | l_283), (safe_div_func_uint16_t_u_u((((void*)0 != l_299) ^ ((((p_44 == ((((((0xAF7D2044L && l_283) , 0x83L) | l_301) ^ g_49) , (void*)0) == l_302)) , l_304) == (void*)0) , (*g_8))), g_237.f2)))) ^ 0L) > l_305), &g_9);
                    }
                    for (g_28.f0 = 26; (g_28.f0 <= 57); ++g_28.f0)
                    {
                        (*p_45) = (g_49 & ((void*)0 != &p_43));
                    }
                }
                else
                {
                    return &g_80;
                }
            }
            else
            {
                for (g_28.f1 = 0; (g_28.f1 >= 35); g_28.f1++)
                {
                    for (l_193.f3 = 22; (l_193.f3 > 31); l_193.f3++)
                    {
                        int *l_313 = &l_283;
                        (*g_79) = l_313;
                        (*l_313) = ((void*)0 == &p_45);
                        (*g_79) = (g_28 , (*g_79));
                        (*l_277) = (((*p_46) , g_28) , (void*)0);
                    }
                    return &g_80;
                }
            }
        }
    }
    else
    {
        int l_314 = 0L;
        unsigned char l_323 = 5UL;
        char *l_390 = &g_9;
        int l_391 = 0x79812D82L;
lbl_392:
        g_97 |= (*p_45);
        l_314 ^= (*p_43);
        for (l_289 = (-4); (l_289 >= (-24)); l_289 = safe_sub_func_uint32_t_u_u(l_289, 8))
        {
            char l_321 = 0xBEL;
            union U2 l_322 = {0x904BBDF9L};
            char l_335 = 0x01L;
            int l_339 = 0xA1375911L;
            int **l_398 = &g_80;
            int **l_401 = &g_356;
            union U4 *l_404 = &g_405;
            if (func_66((((l_314 != g_49) <= (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(func_55(l_321, &g_80), (((l_322 , (*p_43)) , g_2) , l_323))) < 0x78E2BD87L), l_314))) , p_44), g_2, l_314, l_111))
            {
                unsigned short l_326 = 0UL;
                union U2 l_387 = {0xEEF62F0AL};
                if (((safe_div_func_int32_t_s_s(l_326, (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((((((l_314 >= 0xC7L) > (safe_rshift_func_uint8_t_u_u(l_326, 6))) , g_270) != (void*)0) > ((void*)0 == (*g_79))), func_55(l_335, &g_80))), 5)))) , l_322.f1))
                {
                    union U6 **l_338 = &g_274;
                    volatile int **l_342 = &g_340;
                    int l_347 = 0L;
                    (*l_338) = l_336;
                    l_339 = l_314;
                    (*l_342) = g_340;
                    (*p_43) = (l_326 , ((func_66(((!(safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((0x806DCF74L != ((((l_347 >= ((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((*p_46), (((safe_lshift_func_uint8_t_u_u(func_66(p_44, (safe_lshift_func_int16_t_s_u(func_55((func_55(p_44, &g_80) , 0x0985L), &g_80), g_28.f2)), l_326, &g_9), l_326)) >= 0x5A984FCCL) == 0xA29FL))), (-6L))) , l_322.f2)) ^ g_28.f3) >= 0xC492EAA6L) , 5UL)), l_322.f2)), l_347))) , p_44), p_44, p_44, &g_9) >= 4294967287UL) , 8L));
                }
                else
                {
                    short l_365 = 1L;
                    union U2 l_375 = {0x75D4B7CBL};
                    l_365 |= (p_44 , ((((g_356 == p_47) ^ (*p_45)) , (p_44 <= ((g_357 >= (safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint16_t_u(((safe_sub_func_uint16_t_u_u(l_326, (l_322.f1 == (safe_add_func_int32_t_s_s((*p_45), 0x164FB981L))))) >= p_44))), p_44))) , 0L))) || g_2));
                    if ((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((g_28.f1 , (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s(p_44, 6)) , g_237.f0), 4))), 5)), l_323)))
                    {
                        return &g_80;
                    }
                    else
                    {
                        unsigned char l_376 = 255UL;
                        (*p_45) |= 1L;
                        (*l_157) = (*g_79);
                        (*p_43) = (*p_43);
                        (*p_43) = (g_374 <= ((((p_47 != (l_375 , &l_339)) , (p_44 > ((func_66(l_326, g_28.f3, p_44, &g_9) >= (-8L)) || 0xB41BL))) && 8L) >= l_376));
                    }
                }
                l_391 ^= func_66((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((!0L), (safe_lshift_func_uint16_t_u_u((l_387 , func_55((((safe_sub_func_int32_t_s_s(((l_323 , ((p_44 & l_314) | p_44)) != ((void*)0 == &p_43)), l_323)) != g_49) | l_387.f1), &g_80)), 4)))), p_44)) > g_357), g_49)), 1UL)), g_357, g_28.f0, l_390);
                (*p_45) |= l_323;
                if (l_387.f1)
                    goto lbl_392;
            }
            else
            {
                union U1 *l_394 = (void*)0;
                union U1 **l_393 = &l_394;
                int l_395 = 0x1C4D4D5FL;
                (*l_393) = (void*)0;
                if (func_55(func_66(l_395, g_374, p_44, func_50((safe_lshift_func_uint16_t_u_u(g_374, 6)), l_398, (safe_div_func_int8_t_s_s(0L, (l_395 && g_237.f0))), g_273)), l_401))
                {
                    for (l_322.f3 = 0; (l_322.f3 > 58); l_322.f3++)
                    {
                        return &g_80;
                    }
                }
                else
                {
                    (*p_43) |= l_395;
                    (*p_45) = 0x2D6D32D3L;
                }
            }
            l_287 = l_404;
        }
    }
    l_428 |= (safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((g_237.f2 <= ((~(safe_sub_func_int32_t_s_s(((!((safe_add_func_uint8_t_u_u(((*p_45) , (safe_mod_func_uint32_t_u_u(((g_97 , (safe_mod_func_int8_t_s_s(((((safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s((&l_123 != ((safe_add_func_uint8_t_u_u(p_44, (((safe_lshift_func_uint8_t_u_s(((((l_123 != l_123) <= ((safe_div_func_int32_t_s_s(l_289, (p_44 ^ l_110))) != (*p_46))) , (-1L)) || g_9), 0)) , g_357) && g_9))) , &l_123)), p_44)), (*p_45))) ^ (*p_46)) , (void*)0) == (void*)0), (*p_46)))) && g_237.f0), (*p_43)))), 255UL)) & (*p_46))) , l_110), (-3L)))) || l_289)) == 0x25A85B84L) & (*p_46)), 3)), g_97));
    for (g_28.f1 = 12; (g_28.f1 == 38); g_28.f1++)
    {
        union U4 *l_434 = &g_435;
        int l_440 = (-1L);
        char *l_441 = &g_9;
        int *l_443 = &l_440;
        (*p_43) = 0x96008A21L;
        for (g_237.f0 = 0; (g_237.f0 != (-9)); --g_237.f0)
        {
            union U2 l_433 = {0x12B05DB9L};
            int l_442 = 0x535A7AD6L;
            (*l_157) = p_43;
            l_442 &= (((l_433 , l_434) == l_434) & ((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((1UL < p_44), l_440)), (g_357 != p_44))) && func_66(g_28.f1, l_433.f1, p_44, l_441)));
        }
        (*l_443) |= (*p_43);
    }
    (*l_449) |= (safe_add_func_uint32_t_u_u(func_66((((safe_sub_func_int32_t_s_s(l_110, l_448)) < (g_237.f0 <= (4L > ((*p_46) & g_49)))) , (g_28.f1 , func_66((p_44 | (((*p_45) , l_428) != (*p_46))), g_97, g_97, &g_9))), g_49, g_28.f1, &g_9), 0x9501DDF9L));
    return &g_356;
}







static char * func_50(int p_51, int ** p_52, unsigned p_53, unsigned short p_54)
{
    char *l_101 = &g_9;
    int l_104 = 0L;
    int l_105 = 0xD60A67ACL;
    union U5 *l_106 = &g_107;
    union U5 **l_108 = (void*)0;
    union U5 **l_109 = &l_106;
    l_105 &= (safe_rshift_func_uint8_t_u_s((((((*g_8) != func_66(g_28.f2, g_28.f1, p_51, l_101)) && p_54) || p_51) & (safe_add_func_int8_t_s_s(l_104, 0UL))), 3));
    (*l_109) = l_106;
    return l_101;
}







static int func_55(unsigned short p_56, int ** p_57)
{
    char l_65 = 1L;
    int *l_78 = &g_49;
    int **l_77 = &l_78;
    int *l_98 = &g_97;
    (*l_98) = (safe_add_func_uint8_t_u_u((l_65 , (func_66((safe_sub_func_int16_t_s_s(0x1BC1L, g_28.f0)), (((safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((p_57 != l_77) , ((0UL ^ ((p_56 , ((p_56 , p_57) == g_79)) == 0xEEDAL)) <= p_56)), 6)) == 0x0145L), p_56)) & 0x68L) & (*l_78)), g_2, &l_65) | (*g_8))), (*l_78)));
    return (**l_77);
}







static unsigned char func_66(unsigned char p_67, unsigned p_68, unsigned p_69, char * p_70)
{
    for (p_69 = 0; (p_69 > 9); p_69 = safe_add_func_uint16_t_u_u(p_69, 3))
    {
        int l_87 = 1L;
        int *l_96 = &g_97;
        if (p_69)
            break;
        (*l_96) = (safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((0x38L || ((p_69 | (l_87 != (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s(((safe_div_func_int32_t_s_s(g_9, ((0x7ED8L && p_67) || g_28.f3))) != (p_69 ^ p_67)), p_69)) ^ 255UL), g_49)), 14)))) , 1L)), 0x6FL)), 0x8DL));
        if ((*l_96))
            break;
    }
    return g_49;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_28.f2, "g_28.f2", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_230.f0, "g_230.f0", print_hash_value);
    transparent_crc(g_232.f0, "g_232.f0", print_hash_value);
    transparent_crc(g_237.f0, "g_237.f0", print_hash_value);
    transparent_crc(g_237.f1, "g_237.f1", print_hash_value);
    transparent_crc(g_237.f2, "g_237.f2", print_hash_value);
    transparent_crc(g_267.f0, "g_267.f0", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_300.f0, "g_300.f0", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_405.f0, "g_405.f0", print_hash_value);
    transparent_crc(g_435.f0, "g_435.f0", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_466.f0, "g_466.f0", print_hash_value);
    transparent_crc(g_466.f3, "g_466.f3", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_537.f0, "g_537.f0", print_hash_value);
    transparent_crc(g_546.f0, "g_546.f0", print_hash_value);
    transparent_crc(g_549.f0, "g_549.f0", print_hash_value);
    transparent_crc(g_556.f0, "g_556.f0", print_hash_value);
    transparent_crc(g_568.f0, "g_568.f0", print_hash_value);
    transparent_crc(g_568.f1, "g_568.f1", print_hash_value);
    transparent_crc(g_568.f2, "g_568.f2", print_hash_value);
    transparent_crc(g_570.f0, "g_570.f0", print_hash_value);
    transparent_crc(g_570.f1, "g_570.f1", print_hash_value);
    transparent_crc(g_570.f2, "g_570.f2", print_hash_value);
    transparent_crc(g_574.f0, "g_574.f0", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_659.f0, "g_659.f0", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    transparent_crc(g_740.f0, "g_740.f0", print_hash_value);
    transparent_crc(g_782, "g_782", print_hash_value);
    transparent_crc(g_786.f0, "g_786.f0", print_hash_value);
    transparent_crc(g_830.f0, "g_830.f0", print_hash_value);
    transparent_crc(g_862.f0, "g_862.f0", print_hash_value);
    transparent_crc(g_862.f1, "g_862.f1", print_hash_value);
    transparent_crc(g_862.f2, "g_862.f2", print_hash_value);
    transparent_crc(g_977.f0, "g_977.f0", print_hash_value);
    transparent_crc(g_977.f1, "g_977.f1", print_hash_value);
    transparent_crc(g_977.f2, "g_977.f2", print_hash_value);
    transparent_crc(g_999.f0, "g_999.f0", print_hash_value);
    transparent_crc(g_1003, "g_1003", print_hash_value);
    transparent_crc(g_1058.f0, "g_1058.f0", print_hash_value);
    transparent_crc(g_1096.f0, "g_1096.f0", print_hash_value);
    transparent_crc(g_1096.f3, "g_1096.f3", print_hash_value);
    transparent_crc(g_1145, "g_1145", print_hash_value);
    transparent_crc(g_1149, "g_1149", print_hash_value);
    transparent_crc(g_1157, "g_1157", print_hash_value);
    transparent_crc(g_1159.f0, "g_1159.f0", print_hash_value);
    transparent_crc(g_1159.f3, "g_1159.f3", print_hash_value);
    transparent_crc(g_1206, "g_1206", print_hash_value);
    transparent_crc(g_1211, "g_1211", print_hash_value);
    transparent_crc(g_1213.f0, "g_1213.f0", print_hash_value);
    transparent_crc(g_1213.f1, "g_1213.f1", print_hash_value);
    transparent_crc(g_1213.f2, "g_1213.f2", print_hash_value);
    transparent_crc(g_1231, "g_1231", print_hash_value);
    transparent_crc(g_1237, "g_1237", print_hash_value);
    transparent_crc(g_1283, "g_1283", print_hash_value);
    transparent_crc(g_1296, "g_1296", print_hash_value);
    transparent_crc(g_1320.f0, "g_1320.f0", print_hash_value);
    transparent_crc(g_1320.f1, "g_1320.f1", print_hash_value);
    transparent_crc(g_1320.f2, "g_1320.f2", print_hash_value);
    transparent_crc(g_1337.f0, "g_1337.f0", print_hash_value);
    transparent_crc(g_1337.f1, "g_1337.f1", print_hash_value);
    transparent_crc(g_1337.f2, "g_1337.f2", print_hash_value);
    transparent_crc(g_1353.f0, "g_1353.f0", print_hash_value);
    transparent_crc(g_1359.f0, "g_1359.f0", print_hash_value);
    transparent_crc(g_1359.f1, "g_1359.f1", print_hash_value);
    transparent_crc(g_1359.f2, "g_1359.f2", print_hash_value);
    transparent_crc(g_1376.f0, "g_1376.f0", print_hash_value);
    transparent_crc(g_1379.f0, "g_1379.f0", print_hash_value);
    transparent_crc(g_1379.f1, "g_1379.f1", print_hash_value);
    transparent_crc(g_1379.f2, "g_1379.f2", print_hash_value);
    transparent_crc(g_1380.f0, "g_1380.f0", print_hash_value);
    transparent_crc(g_1380.f1, "g_1380.f1", print_hash_value);
    transparent_crc(g_1380.f2, "g_1380.f2", print_hash_value);
    transparent_crc(g_1390.f0, "g_1390.f0", print_hash_value);
    transparent_crc(g_1390.f1, "g_1390.f1", print_hash_value);
    transparent_crc(g_1390.f2, "g_1390.f2", print_hash_value);
    transparent_crc(g_1393.f0, "g_1393.f0", print_hash_value);
    transparent_crc(g_1393.f1, "g_1393.f1", print_hash_value);
    transparent_crc(g_1393.f2, "g_1393.f2", print_hash_value);
    transparent_crc(g_1417.f0, "g_1417.f0", print_hash_value);
    transparent_crc(g_1417.f1, "g_1417.f1", print_hash_value);
    transparent_crc(g_1417.f2, "g_1417.f2", print_hash_value);
    transparent_crc(g_1425.f0, "g_1425.f0", print_hash_value);
    transparent_crc(g_1425.f3, "g_1425.f3", print_hash_value);
    transparent_crc(g_1467.f0, "g_1467.f0", print_hash_value);
    transparent_crc(g_1467.f1, "g_1467.f1", print_hash_value);
    transparent_crc(g_1467.f2, "g_1467.f2", print_hash_value);
    transparent_crc(g_1483.f0, "g_1483.f0", print_hash_value);
    transparent_crc(g_1495.f0, "g_1495.f0", print_hash_value);
    transparent_crc(g_1495.f1, "g_1495.f1", print_hash_value);
    transparent_crc(g_1495.f2, "g_1495.f2", print_hash_value);
    transparent_crc(g_1496.f0, "g_1496.f0", print_hash_value);
    transparent_crc(g_1496.f1, "g_1496.f1", print_hash_value);
    transparent_crc(g_1496.f2, "g_1496.f2", print_hash_value);
    transparent_crc(g_1529.f0, "g_1529.f0", print_hash_value);
    transparent_crc(g_1531.f0, "g_1531.f0", print_hash_value);
    transparent_crc(g_1537.f0, "g_1537.f0", print_hash_value);
    transparent_crc(g_1537.f3, "g_1537.f3", print_hash_value);
    transparent_crc(g_1541.f0, "g_1541.f0", print_hash_value);
    transparent_crc(g_1541.f1, "g_1541.f1", print_hash_value);
    transparent_crc(g_1541.f2, "g_1541.f2", print_hash_value);
    transparent_crc(g_1553.f0, "g_1553.f0", print_hash_value);
    transparent_crc(g_1553.f1, "g_1553.f1", print_hash_value);
    transparent_crc(g_1553.f2, "g_1553.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
