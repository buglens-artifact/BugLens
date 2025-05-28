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



static int g_5 = (-1L);
static short g_30 = 0xBF4DL;
static unsigned g_79[8] = {4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL};
static unsigned char g_88 = 1UL;
static int g_98 = 0x746A6ECCL;
static volatile unsigned char g_104[6][1] = {{0xF0L},{255UL},{0xF0L},{0xF0L},{255UL},{0xF0L}};
static short g_119 = 0x8767L;
static volatile short g_123[2][10][8] = {{{0xE934L,(-7L),0L,0x3856L,7L,1L,(-10L),0x843DL},{1L,(-2L),0x9DFFL,0L,0x2C61L,0xE825L,0xBEEEL,0L},{0L,(-1L),0x1101L,0x0D30L,1L,0L,0x8F99L,0x3856L},{0L,0xD574L,0xAED5L,(-2L),0xB575L,0x590BL,0xD2ACL,0x0A8DL},{0x8F99L,0x6B6EL,1L,0x76C5L,0xA476L,0x7418L,(-7L),1L},{(-6L),0xA476L,1L,0xE825L,(-7L),0L,0L,(-7L)},{0x843DL,(-1L),(-1L),0x843DL,0x40D6L,(-1L),0x6B6EL,9L},{1L,0x8638L,0x325AL,1L,0x0D30L,0xE4F1L,0x1101L,9L},{0x9DFFL,0x8638L,0x350BL,1L,0x76C5L,(-1L),0x97C0L,0L},{0xA476L,(-1L),(-8L),0x4358L,(-1L),0L,0x76C5L,(-8L)}},{{0x6E98L,0xA476L,0xE934L,0x0A8DL,1L,0x7418L,0xD574L,0x4358L},{0x1E6DL,0x6B6EL,8L,0x350BL,0x1101L,9L,0x5FBEL,0x76C5L},{1L,0xB2FCL,(-8L),0x590BL,0xB2FCL,9L,0x8638L,1L},{0xB575L,0x1101L,0L,(-7L),0x6B6EL,0xBEEEL,0x1101L,0L},{1L,1L,1L,8L,0xA476L,(-1L),1L,0x0A8DL},{0xD574L,(-1L),(-1L),0x590BL,(-1L),(-1L),0xD574L,(-8L)},{0x1101L,0x590BL,1L,0x8638L,0x6B6EL,(-7L),0x0A8DL,0xAED5L},{0xE825L,0x4358L,(-6L),(-1L),0x6B6EL,0xE825L,8L,0xD574L},{0x1101L,0x5FBEL,0x97C0L,0xAED5L,(-1L),0x97C0L,0x76C5L,0xCDA0L},{0xB575L,0x0A8DL,0x2C61L,1L,0L,6L,0xAED5L,0x6E98L}}};
static volatile short *g_122 = &g_123[0][7][6];
static volatile short **g_121 = &g_122;
static volatile short *** volatile g_120 = &g_121;
static short *g_132 = &g_119;
static short **g_131 = &g_132;
static short ***g_130 = &g_131;
static volatile char g_137 = 0xA2L;
static char g_142 = 0xB2L;
static volatile unsigned g_147 = 0x08C6B94EL;
static volatile unsigned char g_152 = 1UL;
static unsigned g_159[1][5] = {{4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL}};
static int g_162[3] = {0L,0L,0L};
static int *g_163 = &g_98;
static int g_196[10] = {(-1L),0L,0L,(-1L),0L,0L,(-1L),0L,0L,(-1L)};
static short g_226 = 0xE7C3L;
static unsigned g_241 = 0x70ADE472L;
static unsigned g_245 = 1UL;
static unsigned short g_250[9] = {0xDE6AL,0x59B2L,0xDE6AL,0xDE6AL,0x59B2L,0xDE6AL,0xDE6AL,0x59B2L,0xDE6AL};
static int ** volatile g_289 = &g_163;
static int ** volatile g_290 = (void*)0;
static int ** volatile g_292 = &g_163;
static unsigned short *g_324 = &g_250[3];
static unsigned char * volatile *g_328 = (void*)0;
static int g_340 = 0x15AACC03L;
static int *g_373 = (void*)0;
static int * volatile g_409 = &g_196[0];
static unsigned g_473 = 4294967295UL;
static volatile char g_497 = (-1L);
static unsigned *g_542 = (void*)0;
static unsigned **g_541 = &g_542;
static int g_600 = 1L;
static volatile unsigned short g_611[1][5][2] = {{{0xEC13L,0xEC13L},{0xEC13L,0xEC13L},{0xEC13L,0xEC13L},{0xEC13L,0xEC13L},{0xEC13L,0xEC13L}}};
static int ** volatile g_659 = &g_373;
static int ** volatile g_676 = &g_373;
static int ** volatile g_692 = (void*)0;
static unsigned char * volatile ** volatile g_758[8][10][2] = {{{&g_328,&g_328},{&g_328,&g_328},{&g_328,(void*)0},{(void*)0,&g_328},{&g_328,&g_328},{(void*)0,(void*)0},{&g_328,&g_328},{&g_328,&g_328},{&g_328,(void*)0},{&g_328,&g_328}},{{&g_328,&g_328},{&g_328,(void*)0},{(void*)0,&g_328},{&g_328,(void*)0},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328}},{{&g_328,&g_328},{&g_328,(void*)0},{&g_328,(void*)0},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328}},{{&g_328,(void*)0},{&g_328,(void*)0},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,(void*)0}},{{&g_328,(void*)0},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,(void*)0},{&g_328,(void*)0}},{{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,(void*)0},{&g_328,(void*)0},{&g_328,&g_328}},{{&g_328,&g_328},{&g_328,(void*)0},{&g_328,&g_328},{&g_328,(void*)0},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328}},{{&g_328,(void*)0},{&g_328,&g_328},{&g_328,(void*)0},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,&g_328},{&g_328,(void*)0}}};
static unsigned char * volatile ** volatile g_759 = &g_328;
static int ** volatile g_788 = &g_163;
static unsigned char *g_862 = (void*)0;
static unsigned char **g_861 = &g_862;
static unsigned char ***g_860 = &g_861;
static unsigned char ****g_859 = &g_860;
static unsigned ** volatile * volatile g_883 = &g_541;
static unsigned ** volatile * volatile * volatile g_882 = &g_883;
static volatile unsigned * volatile * volatile * volatile *g_884 = (void*)0;
static int g_885 = 0xB8C86BFDL;
static char g_890 = 8L;
static int * volatile g_910 = &g_340;
static int * volatile g_925 = &g_340;
static unsigned short g_934 = 4UL;
static unsigned g_936 = 3UL;



static char func_1(void);
static int * func_6(unsigned p_7, int * p_8, unsigned short p_9);
static unsigned func_10(unsigned short p_11, int * p_12, unsigned p_13, int * p_14);
static int * func_15(int p_16, int p_17, unsigned char p_18);
static int func_31(int p_32, int * p_33, unsigned p_34, unsigned p_35, short * p_36);
static unsigned func_42(int * p_43, int p_44, unsigned char p_45, short * p_46, short p_47);
static int * func_48(unsigned short p_49, int p_50, short * p_51);
static unsigned short func_52(int * p_53, int p_54, char p_55, unsigned short p_56);
static unsigned func_63(int p_64, short ** p_65, int * p_66, short * p_67, unsigned p_68);
static short ** func_69(int p_70, int p_71, short p_72, int p_73);
static char func_1(void)
{
    int *l_4[5][9][4] = {{{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5}},{{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5}},{{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5}},{{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5}},{{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5}}};
    int l_28 = 0xB101EB64L;
    short *l_29 = &g_30;
    int **l_772 = &g_163;
    int **l_773 = (void*)0;
    int **l_774[10] = {(void*)0,&g_163,(void*)0,&g_163,(void*)0,&g_163,(void*)0,&g_163,(void*)0,&g_163};
    int *l_775 = &g_98;
    unsigned char *l_928[10][7][3] = {{{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,(void*)0},{&g_88,&g_88,&g_88}},{{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{(void*)0,&g_88,(void*)0},{&g_88,&g_88,&g_88},{&g_88,(void*)0,&g_88}},{{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}},{{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{(void*)0,&g_88,&g_88},{&g_88,&g_88,&g_88},{(void*)0,(void*)0,&g_88},{&g_88,&g_88,&g_88},{(void*)0,(void*)0,&g_88}},{{&g_88,&g_88,&g_88},{&g_88,(void*)0,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}},{{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{(void*)0,&g_88,&g_88},{&g_88,&g_88,&g_88},{(void*)0,(void*)0,&g_88},{&g_88,&g_88,&g_88},{(void*)0,(void*)0,&g_88}},{{&g_88,&g_88,&g_88},{&g_88,(void*)0,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}},{{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,(void*)0,(void*)0},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,(void*)0}},{{&g_88,&g_88,&g_88},{(void*)0,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,(void*)0,(void*)0},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}},{{(void*)0,&g_88,(void*)0},{&g_88,&g_88,&g_88},{&g_88,(void*)0,(void*)0},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,(void*)0}}};
    unsigned short l_929 = 65535UL;
    unsigned short *l_933 = &g_934;
    unsigned char l_935 = 6UL;
    int i, j, k;
    g_5 |= (safe_lshift_func_int16_t_s_u((-5L), 9));
    (*l_772) = func_6(func_10(((l_775 = func_15(g_5, (g_5 | (safe_sub_func_int32_t_s_s((l_4[4][5][2] == (void*)0), ((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_s(g_5, g_5)) | ((*l_29) = (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint32_t_u_u((l_4[4][5][2] == &g_5), l_28)))))), g_5)) ^ 0xAC3A6081L)))), g_5)) == (void*)0), g_542, g_600, g_542), g_542, g_600);
    g_936 &= (((*l_933) &= ((safe_add_func_uint8_t_u_u((1UL > (((l_929 = 252UL) && 0xF9L) | g_473)), (safe_unary_minus_func_int32_t_s((safe_sub_func_uint16_t_u_u(((*g_324) = (*g_324)), g_123[1][7][2])))))) == func_42(&g_196[6], g_98, (~3UL), l_29, (*g_132)))) , l_935);
    return g_890;
}







static int * func_6(unsigned p_7, int * p_8, unsigned short p_9)
{
    int l_789 = 0x0FA767BCL;
    char *l_798 = (void*)0;
    short l_827 = (-3L);
    int l_835 = 0x2402DE8AL;
    int l_850 = 4L;
    int l_853 = 0L;
    unsigned short l_854 = 0x906BL;
    (*g_788) = p_8;
    if (l_789)
    {
        char *l_796 = &g_142;
        char **l_797 = (void*)0;
        int l_801 = 0xE8894CEEL;
        short *l_802 = &g_226;
        int *l_803 = &g_600;
        char l_804 = 1L;
        int *l_805[4] = {&g_5,&g_5,&g_5,&g_5};
        int l_806 = (-1L);
        int i;
        l_806 |= (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((p_7 == ((p_7 && ((((((func_42((*g_659), g_473, l_801, &g_119, l_801) || p_9) != p_9) || l_789) && 0x7EE3B699L) && 0x7EL) , l_804)) < 0UL)), 0x4BL)), 0xD992L));
    }
    else
    {
        unsigned l_811 = 4294967295UL;
        int l_824 = 0x71847579L;
        int l_851 = 0x5E0A33C3L;
        unsigned ***l_904 = &g_541;
        unsigned ****l_903 = &l_904;
        int l_912 = 0x8CC8BECBL;
        for (g_241 = 0; (g_241 <= 0); g_241 += 1)
        {
            unsigned char *l_809[10] = {&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88};
            int l_810 = (-1L);
            unsigned *l_825 = &g_245;
            unsigned *l_826 = (void*)0;
            int *l_828 = &g_5;
            int l_838 = 0x58895A99L;
            int l_840 = (-6L);
            int l_879 = 0xAC27A7D0L;
            int i;
        }
        return (*g_676);
    }
    (*g_925) = (safe_mod_func_int8_t_s_s(g_226, 0x97L));
    return (*g_676);
}







static unsigned func_10(unsigned short p_11, int * p_12, unsigned p_13, int * p_14)
{
    int *l_776 = &g_196[2];
    int *l_777 = &g_196[3];
    int *l_778 = &g_196[5];
    int *l_779 = &g_340;
    int *l_780 = &g_5;
    int *l_781 = &g_98;
    int *l_782 = &g_340;
    int *l_783[5][2][4] = {{{&g_196[5],&g_98,&g_196[5],&g_5},{&g_340,&g_98,&g_5,&g_5}},{{&g_98,&g_98,(void*)0,&g_98},{&g_98,&g_340,(void*)0,&g_340}},{{&g_98,&g_196[5],&g_5,(void*)0},{&g_340,&g_196[5],&g_196[5],&g_340}},{{&g_5,&g_98,&g_340,(void*)0},{&g_5,&g_340,&g_5,&g_98}},{{&g_98,(void*)0,&g_98,&g_98},{&g_340,&g_340,(void*)0,(void*)0}}};
    int l_784 = 1L;
    unsigned short l_785 = 65531UL;
    int i, j, k;
    --l_785;
    return g_5;
}







static int * func_15(int p_16, int p_17, unsigned char p_18)
{
    unsigned char l_39 = 255UL;
    int *l_57 = &g_5;
    short *l_341 = &g_30;
    int l_639 = 0x21BB0050L;
    int l_640[6] = {0L,0L,0L,0L,0L,0L};
    unsigned l_641 = 0x9610B8F5L;
    unsigned ***l_649 = &g_541;
    int l_665 = 0xDAD8258EL;
    char l_666[10][10] = {{0xE8L,0xF2L,0x2EL,(-1L),1L,0x9BL,0xDAL,(-10L),8L,(-6L)},{(-5L),0L,(-2L),0xA5L,0xDAL,0x2AL,(-1L),0xC4L,0L,1L},{0xE9L,(-10L),0x22L,8L,0L,(-1L),1L,1L,(-1L),0L},{0xDFL,1L,1L,0xDFL,0x43L,0L,0x24L,0x28L,1L,0xC4L},{0x24L,(-2L),(-6L),(-7L),(-9L),0L,1L,0x24L,1L,(-1L)},{1L,0xE8L,0x2AL,0xDFL,0xF2L,0x9BL,0L,0L,(-1L),0x2AL},{0x22L,7L,0xFBL,8L,0x52L,0xF2L,(-9L),0x43L,0L,0xDAL},{0x56L,0xF2L,(-1L),0x64L,0x1FL,1L,0xA5L,1L,0x1FL,0x64L},{(-10L),0xFBL,(-10L),0xF2L,0L,(-6L),(-1L),0xE8L,0xFBL,0x56L},{0xDFL,1L,0xFBL,0xE9L,(-7L),0xD1L,0x56L,0xE8L,0L,0x16L}};
    unsigned char *l_726 = &g_88;
    unsigned char **l_725[5][8][6] = {{{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,(void*)0},{&l_726,&l_726,&l_726,&l_726,&l_726,(void*)0},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,(void*)0,&l_726,&l_726,&l_726},{(void*)0,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,(void*)0,&l_726,&l_726,&l_726}},{{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,(void*)0,(void*)0,&l_726,&l_726},{&l_726,&l_726,&l_726,(void*)0,&l_726,&l_726},{&l_726,&l_726,(void*)0,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,(void*)0,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,&l_726,(void*)0,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726}},{{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,(void*)0,&l_726,(void*)0,(void*)0,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,(void*)0,(void*)0,&l_726},{(void*)0,(void*)0,&l_726,&l_726,&l_726,&l_726}},{{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,(void*)0,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,(void*)0,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{(void*)0,&l_726,&l_726,&l_726,(void*)0,(void*)0},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726}},{{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,(void*)0,&l_726,&l_726},{(void*)0,&l_726,&l_726,&l_726,&l_726,(void*)0},{(void*)0,&l_726,&l_726,&l_726,&l_726,(void*)0},{(void*)0,&l_726,&l_726,(void*)0,&l_726,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726},{&l_726,&l_726,&l_726,&l_726,&l_726,&l_726}}};
    int *l_771 = &g_196[8];
    int i, j, k;
    if (func_31((((safe_rshift_func_uint8_t_u_u((l_39 & (g_30 | ((safe_lshift_func_int8_t_s_s((func_42(func_48(func_52(l_57, (*l_57), (*l_57), g_5), g_30, l_341), p_17, p_16, l_341, g_30) == 0x251CAB27L), 4)) || (*g_324)))), p_17)) == p_18) >= 0xF6L), l_57, g_30, p_16, l_341))
    {
        int *l_636 = (void*)0;
        int *l_637 = &g_5;
        int *l_638[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        short *l_648[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned l_654[1];
        char *l_657[2][6] = {{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142}};
        int *l_658 = &g_196[2];
        int i, j;
        for (i = 0; i < 1; i++)
            l_654[i] = 0UL;
        l_641--;
        for (g_340 = (-6); (g_340 < (-13)); g_340 = safe_sub_func_uint8_t_u_u(g_340, 9))
        {
            int *l_647 = &g_196[5];
            for (p_17 = 0; (p_17 <= 9); p_17 += 1)
            {
                int i;
                g_196[p_17] |= 0x2B05F5F2L;
            }
            for (g_245 = 2; (g_245 <= 7); g_245 += 1)
            {
                for (g_241 = 0; (g_241 <= 8); g_241 += 1)
                {
                    unsigned ****l_650 = &l_649;
                    unsigned ***l_652 = (void*)0;
                    unsigned ****l_651 = &l_652;
                    int l_653 = 3L;
                    int i;
                    l_653 = (((((safe_unary_minus_func_uint32_t_u((g_250[g_241] > g_250[(g_245 + 1)]))) < func_42(l_647, g_79[g_245], p_16, l_648[5], ((((*l_650) = l_649) != ((*l_651) = &g_541)) , (**g_121)))) , g_250[(g_245 + 1)]) == p_17) & 0x8BDBECD5L);
                }
            }
            if (l_654[0])
                continue;
            (*l_647) = (*g_409);
        }
        (*g_659) = (((((safe_sub_func_uint16_t_u_u((*g_324), (l_657[1][4] == ((***g_120) , &g_497)))) , p_17) ^ p_17) <= 0xC0L) , l_658);
        for (l_641 = 0; l_641 < 1; l_641 += 1)
        {
            for (g_245 = 0; g_245 < 5; g_245 += 1)
            {
                for (p_18 = 0; p_18 < 2; p_18 += 1)
                {
                    g_611[l_641][g_245][p_18] = 1UL;
                }
            }
        }
    }
    else
    {
        int *l_662 = &g_196[7];
        char *l_667 = &g_142;
        short *l_705 = &g_119;
        unsigned ***l_711 = &g_541;
        int l_734 = 0xA15CCFF8L;
        int l_735 = (-1L);
        int l_736[10];
        unsigned char l_738 = 0x71L;
        int i;
        for (i = 0; i < 10; i++)
            l_736[i] = 2L;
        if ((safe_add_func_int8_t_s_s(((*l_667) ^= func_42(l_662, ((*l_662) > (*l_57)), (l_666[6][1] &= ((0xFBE019ABL && (*l_662)) , (safe_lshift_func_uint16_t_u_u((((void*)0 == &g_541) ^ (*l_57)), (((((p_17 , l_665) >= 0UL) && p_18) , 1UL) && p_18))))), l_341, (**g_121))), (*l_662))))
        {
            short *l_675 = &g_119;
            unsigned char *l_678 = (void*)0;
            unsigned char **l_677 = &l_678;
            int l_687 = 0L;
            unsigned *l_688 = &g_159[0][2];
            int l_691 = 5L;
            (*g_676) = func_48((safe_unary_minus_func_uint32_t_u((((p_16 >= (safe_sub_func_uint8_t_u_u(((*l_662) > (((*l_675) = (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(p_16, (func_42((*g_659), g_159[0][3], ((void*)0 != &l_666[6][1]), l_675, ((*g_132) ^ p_18)) , (*g_324)))), p_17))) >= p_18)), (*l_57)))) , 0xAAE468E6L) || 0UL))), (*l_57), l_675);
            l_57 = func_48((0x26D7L == (&p_18 == ((*l_677) = &p_18))), (safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((0x3450241FL | (safe_sub_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((*l_662) = ((*l_667) ^= (*l_662))), l_687)) , ((*l_662) | ((*g_409) != ((++(*l_688)) > (((*g_132) || (*g_324)) & p_17))))), l_687))), 2)) , (*g_409)) , 0x6EL), l_691)), l_341);
        }
        else
        {
            int l_698 = 6L;
            short **l_704 = &l_341;
            int *l_710[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int l_737 = 1L;
            int l_745[7][2] = {{0x1C3F34DBL,(-1L)},{0x538F9388L,0xF0DB5C09L},{0x538F9388L,(-1L)},{0x1C3F34DBL,0x1C3F34DBL},{(-1L),0x538F9388L},{0xF0DB5C09L,0x538F9388L},{(-1L),0x1C3F34DBL}};
            unsigned l_756 = 0xE6B45163L;
            int l_757 = 3L;
            int i, j;
            if (p_18)
            {
                unsigned char l_712 = 0UL;
                int *l_723 = &l_640[1];
                unsigned short l_729[7][3] = {{0x304CL,0x8D73L,0x304CL},{0x304CL,0x8D73L,0x304CL},{0x304CL,0x8D73L,0x304CL},{0x304CL,0x8D73L,0x304CL},{0x304CL,0x8D73L,0x304CL},{0x304CL,0x8D73L,0x304CL},{0x304CL,0x8D73L,0x304CL}};
                int l_732[10][9][2] = {{{0xE4A5F9A1L,5L},{1L,9L},{5L,(-1L)},{0xBD590771L,1L},{0xDC22AB80L,7L},{7L,6L},{8L,(-10L)},{5L,0xBD590771L},{8L,0x038A15E0L}},{{(-1L),0x038A15E0L},{8L,0xBD590771L},{5L,(-10L)},{8L,6L},{7L,7L},{0xDC22AB80L,1L},{0xBD590771L,(-1L)},{5L,9L},{1L,5L}},{{0xE4A5F9A1L,0x4FCE7ACEL},{0xE4A5F9A1L,5L},{1L,9L},{5L,(-1L)},{5L,0x0D1148B8L},{(-1L),0x0B75324DL},{0x0B75324DL,9L},{0x038A15E0L,6L},{0x4FCE7ACEL,5L}},{{1L,(-10L)},{0xDC22AB80L,(-10L)},{1L,5L},{0x4FCE7ACEL,6L},{0x038A15E0L,9L},{0x0B75324DL,0x0B75324DL},{(-1L),0x0D1148B8L},{5L,0xDC22AB80L},{0xBD590771L,8L}},{{0x0D1148B8L,0xBD590771L},{5L,7L},{5L,0xBD590771L},{0x0D1148B8L,8L},{0xBD590771L,0xDC22AB80L},{5L,0x0D1148B8L},{(-1L),0x0B75324DL},{0x0B75324DL,9L},{0x038A15E0L,6L}},{{0x4FCE7ACEL,5L},{1L,(-10L)},{0xDC22AB80L,(-10L)},{1L,5L},{0x4FCE7ACEL,6L},{0x038A15E0L,9L},{0x0B75324DL,0x0B75324DL},{(-1L),0x0D1148B8L},{5L,0xDC22AB80L}},{{0xBD590771L,8L},{0x0D1148B8L,0xBD590771L},{5L,7L},{5L,0xBD590771L},{0x0D1148B8L,8L},{0xBD590771L,0xDC22AB80L},{5L,0x0D1148B8L},{(-1L),0x0B75324DL},{0x0B75324DL,9L}},{{0x038A15E0L,6L},{0x4FCE7ACEL,5L},{1L,(-10L)},{0xDC22AB80L,(-10L)},{1L,5L},{0x4FCE7ACEL,6L},{0x038A15E0L,7L},{0xE4A5F9A1L,0xE4A5F9A1L},{9L,0x038A15E0L}},{{0xDC22AB80L,6L},{(-1L),0x0B75324DL},{0x038A15E0L,(-1L)},{0x0D1148B8L,0x01CE220BL},{0x0D1148B8L,(-1L)},{0x038A15E0L,0x0B75324DL},{(-1L),6L},{0xDC22AB80L,0x038A15E0L},{9L,0xE4A5F9A1L}},{{0xE4A5F9A1L,7L},{0xBD590771L,0x4FCE7ACEL},{(-1L),0xDC22AB80L},{8L,5L},{6L,5L},{8L,0xDC22AB80L},{(-1L),0x4FCE7ACEL},{0xBD590771L,7L},{0xE4A5F9A1L,0xE4A5F9A1L}}};
                int l_748 = (-5L);
                int i, j, k;
                if ((safe_unary_minus_func_uint32_t_u((*l_57))))
                {
                    int *l_703 = &l_639;
                    (*l_703) = (safe_rshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((+p_18), ((p_16 && 65535UL) != (*g_324)))) , p_17), 1));
                    for (g_241 = 29; (g_241 != 18); g_241--)
                    {
                        (*l_662) = 0L;
                    }
                }
                else
                {
                    for (p_18 = (-19); (p_18 >= 9); p_18 = safe_add_func_int16_t_s_s(p_18, 1))
                    {
                        return l_710[0];
                    }
                }
                if ((((~((*g_324) = 65535UL)) == (((void*)0 != l_711) ^ (*l_57))) < ((((l_712 != (((*l_57) , p_16) > (safe_rshift_func_int8_t_s_u(((*l_667) = p_16), 7)))) && (*l_662)) || p_16) | g_123[1][0][2])))
                {
                    int l_720 = (-5L);
                    short *l_724 = (void*)0;
                    unsigned short l_727 = 0xFD91L;
                    int l_728 = 2L;
                    for (p_18 = 0; (p_18 >= 47); p_18++)
                    {
                        short l_719 = 0xB5CDL;
                        int *l_721 = &g_162[2];
                        short **l_722 = &l_341;
                        (*l_662) ^= 1L;
                        l_728 = (+((p_18 == ((*l_662) = (l_720 |= (safe_mod_func_int16_t_s_s(l_719, ((*l_705) = p_17)))))) , ((((p_17 == l_727) < p_18) & 0x83L) && 0xABL)));
                        (*l_57) &= l_729[1][2];
                    }
                    for (g_245 = 0; (g_245 <= 9); g_245 += 1)
                    {
                        int **l_730[5][10] = {{&g_373,&g_373,&g_373,&g_373,(void*)0,&g_373,&g_373,&g_373,&g_373,(void*)0},{&g_373,&g_373,&g_373,&g_373,(void*)0,&g_373,&g_373,&g_373,&g_373,(void*)0},{&g_373,&g_373,&g_373,&g_373,(void*)0,&g_373,&g_373,&g_373,&g_373,(void*)0},{&g_373,&g_373,&g_373,&g_373,(void*)0,&g_373,&g_373,&g_373,&g_373,(void*)0},{&g_373,&g_373,&g_373,&g_373,(void*)0,&g_373,&g_373,&g_373,&g_373,(void*)0}};
                        int i, j;
                        (*l_57) &= g_196[g_245];
                        (*g_676) = (*g_659);
                    }
                }
                else
                {
                    int l_731 = 0x80D4F09BL;
                    int l_733[6][4][1] = {{{9L},{(-2L)},{9L},{(-2L)}},{{9L},{(-2L)},{9L},{(-2L)}},{{9L},{(-2L)},{9L},{(-2L)}},{{9L},{(-2L)},{9L},{(-2L)}},{{9L},{(-2L)},{9L},{(-2L)}},{{9L},{(-2L)},{9L},{(-2L)}}};
                    int i, j, k;
                    l_738--;
                }
                for (g_473 = 13; (g_473 <= 25); g_473 = safe_add_func_uint8_t_u_u(g_473, 1))
                {
                    int l_749 = 0L;
                    unsigned *l_750[3];
                    int l_751 = 1L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_750[i] = &g_79[3];
                    l_751 ^= (safe_add_func_uint8_t_u_u((*l_662), ((0L && l_745[2][1]) , (((g_245 = (g_162[1] <= ((*l_726) = (safe_mod_func_uint8_t_u_u((l_748 > (((*l_57) < ((l_749 && (**g_121)) <= (8L <= (-8L)))) , p_16)), 0x1FL))))) <= p_17) || 0x1CL))));
                }
            }
            else
            {
                short l_754 = 0x9A78L;
                unsigned short l_755[9][6][3] = {{{0x790FL,0x7472L,0UL},{0UL,0UL,0x36C4L},{65535UL,0x7472L,0x7472L},{0x36C4L,0x01C7L,65535UL},{65535UL,0UL,65535UL},{0UL,0x36C4L,65535UL}},{{0x790FL,0x790FL,0x7472L},{65532UL,0x36C4L,0x36C4L},{0x7472L,0UL,0UL},{65532UL,0x01C7L,65532UL},{0x790FL,0x7472L,0UL},{0UL,0UL,0x36C4L}},{{65535UL,0x7472L,0x7472L},{0x36C4L,0x01C7L,65535UL},{65535UL,0UL,65535UL},{0UL,0x36C4L,65535UL},{0x790FL,0x790FL,0x7472L},{65532UL,0x36C4L,0x36C4L}},{{0x7472L,0UL,0UL},{65532UL,0x01C7L,65532UL},{0x790FL,0x7472L,0UL},{0UL,0UL,0x36C4L},{65535UL,0x7472L,0x7472L},{0x36C4L,0x01C7L,65535UL}},{{65535UL,0UL,65535UL},{0UL,0UL,65532UL},{0UL,0UL,0x790FL},{0x36C4L,0UL,0UL},{0x790FL,0UL,65535UL},{0x36C4L,65535UL,0x36C4L}},{{0UL,0x790FL,65535UL},{0x01C7L,0x01C7L,0UL},{0x7472L,0x790FL,0x790FL},{0UL,65535UL,65532UL},{0x7472L,0UL,0x7472L},{0x01C7L,0UL,65532UL}},{{0UL,0UL,0x790FL},{0x36C4L,0UL,0UL},{0x790FL,0UL,65535UL},{0x36C4L,65535UL,0x36C4L},{0UL,0x790FL,65535UL},{0x01C7L,0x01C7L,0UL}},{{0x7472L,0x790FL,0x790FL},{0UL,65535UL,65532UL},{0x7472L,0UL,0x7472L},{0x01C7L,0UL,65532UL},{0UL,0UL,0x790FL},{0x36C4L,0UL,0UL}},{{0x790FL,0UL,65535UL},{0x36C4L,65535UL,0x36C4L},{0UL,0x790FL,65535UL},{0x01C7L,0x01C7L,0UL},{0x7472L,0x790FL,0x790FL},{0UL,65535UL,65532UL}}};
                int i, j, k;
                (*l_662) |= ((l_754 = (safe_rshift_func_uint16_t_u_u((*g_324), 13))) , ((l_755[1][3][2] | l_756) & l_757));
            }
            (*g_759) = g_328;
        }
    }
    for (g_473 = 0; (g_473 <= 8); g_473 += 1)
    {
        unsigned short l_760[10][2][10] = {{{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}}};
        int *l_761 = &l_640[3];
        unsigned char ***l_762 = &l_725[1][7][2];
        short *l_768[3];
        int l_769 = 0xE04DDC6CL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_768[i] = &g_30;
        for (l_39 = 0; (l_39 <= 8); l_39 += 1)
        {
            short **l_766 = (void*)0;
            for (p_17 = 0; (p_17 <= 8); p_17 += 1)
            {
                unsigned char ****l_763 = (void*)0;
                unsigned char ***l_765 = &l_725[0][2][1];
                unsigned char ****l_764 = &l_765;
                int *l_767[8] = {&l_640[3],&l_640[3],&l_640[3],&l_640[3],&l_640[3],&l_640[3],&l_640[3],&l_640[3]};
                char l_770 = (-5L);
                int i;
                for (g_226 = 0; (g_226 <= 8); g_226 += 1)
                {
                    l_760[2][0][4] &= 0x36B24C77L;
                    for (g_119 = 6; (g_119 >= 2); g_119 -= 1)
                    {
                        return (*g_659);
                    }
                }
                l_769 = (((l_762 == ((*l_764) = (void*)0)) <= ((&g_409 == (void*)0) != (0x2E46BE11L > g_250[g_473]))) , ((*l_761) = p_18));
                if (l_770)
                    continue;
            }
        }
    }
    return l_771;
}







static int func_31(int p_32, int * p_33, unsigned p_34, unsigned p_35, short * p_36)
{
    unsigned short l_399 = 65535UL;
    short ***l_406 = &g_131;
    int l_416 = (-6L);
    int l_441 = 0L;
    int l_462 = 0x40E7C898L;
    int l_469 = 0xE4A38CEDL;
    int l_472 = 0xD12EC648L;
    char l_494 = 0xF6L;
    unsigned *l_540 = &g_79[7];
    unsigned **l_539 = &l_540;
    short l_549 = (-7L);
    short *l_550 = &g_30;
    unsigned char l_584 = 0UL;
    char l_621 = 1L;
    int l_627 = 1L;
    int l_628 = (-1L);
    int l_629[10] = {1L,(-1L),1L,1L,(-1L),1L,1L,(-1L),1L,1L};
    int i;
    for (p_35 = 0; (p_35 <= 2); p_35 += 1)
    {
        int l_420 = 0xA76938A6L;
        char l_426[6];
        int l_459 = 0x114B12DDL;
        int l_460 = 0x554933AEL;
        int l_461[1];
        int *l_492 = &l_472;
        unsigned l_498 = 1UL;
        int *l_499 = &l_462;
        short *l_506 = &g_226;
        int i;
        for (i = 0; i < 6; i++)
            l_426[i] = 0xEEL;
        for (i = 0; i < 1; i++)
            l_461[i] = 0L;
        (*p_33) &= ((safe_sub_func_uint8_t_u_u((((g_162[p_35] && (*g_324)) >= p_35) , (((l_399 == p_32) < l_399) <= (((p_32 ^ (safe_rshift_func_uint8_t_u_s(g_162[p_35], 4))) , (((*p_36) | 0x6F35L) > 0x82L)) ^ g_162[p_35]))), 0UL)) < (***g_120));
        (*g_409) = ((*p_33) = ((*p_36) && (safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s((*p_33), ((void*)0 != l_406))), (safe_rshift_func_uint16_t_u_u((&p_36 == (*g_120)), 0))))));
        for (g_226 = (-18); (g_226 <= (-20)); g_226 = safe_sub_func_uint8_t_u_u(g_226, 1))
        {
            unsigned short l_415[3];
            int *l_417 = &g_196[5];
            unsigned char l_442 = 1UL;
            int l_453 = 0x8126FFD2L;
            int l_456[2];
            short l_470 = 0x166BL;
            unsigned *l_505 = (void*)0;
            unsigned **l_504[2][2] = {{&l_505,&l_505},{&l_505,&l_505}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_415[i] = 65535UL;
            for (i = 0; i < 2; i++)
                l_456[i] = 0x3DA0F1B8L;
            for (g_98 = 13; (g_98 > 29); g_98++)
            {
                int l_414 = (-1L);
                for (g_30 = 0; (g_30 <= 9); g_30 += 1)
                {
                    int i;
                    l_417 = func_48(((((g_79[(p_35 + 2)] , g_79[p_35]) & g_79[(p_35 + 2)]) || ((g_162[p_35] | g_79[(p_35 + 2)]) < (((!(g_196[g_30] = l_414)) , (l_415[0] != (l_414 != g_159[0][0]))) && l_416))) <= g_250[2]), (*p_33), p_36);
                }
            }
            for (l_416 = 0; (l_416 < (-7)); --l_416)
            {
                int l_423 = 0xE9D10375L;
                int l_455 = (-1L);
                int l_458 = 0xA6AC42CAL;
                int l_463 = (-7L);
                int l_464[2];
                int l_465 = 0x25237769L;
                int l_466 = 3L;
                int l_468 = 0x563B01BEL;
                int l_471[5] = {0L,0L,0L,0L,0L};
                int *l_489 = &g_5;
                short *l_496[2];
                int *l_500[7];
                unsigned short **l_503 = &g_324;
                int i;
                for (i = 0; i < 2; i++)
                    l_464[i] = (-6L);
                for (i = 0; i < 2; i++)
                    l_496[i] = (void*)0;
                for (i = 0; i < 7; i++)
                    l_500[i] = &g_162[2];
            }
            return (*p_33);
        }
        return l_462;
    }
    for (g_226 = 0; (g_226 != 10); g_226 = safe_add_func_int8_t_s_s(g_226, 7))
    {
        unsigned short l_523 = 0x8787L;
        short *l_526 = (void*)0;
        int **l_527 = &g_373;
        unsigned char l_533 = 0x7CL;
        unsigned *l_538 = &g_159[0][4];
        unsigned **l_537 = &l_538;
        unsigned ***l_536[1];
        unsigned l_547[4] = {2UL,2UL,2UL,2UL};
        short *l_548 = &g_30;
        int l_578[9][3][6] = {{{1L,0x40B3492EL,0xAD375EABL,(-1L),0xC6D30612L,(-8L)},{(-1L),0xC6D30612L,(-8L),0x8FE55D74L,0xC6D30612L,0x40B3492EL},{0xF8CD56BCL,0x40B3492EL,0x55DF994CL,1L,0x55DF994CL,0x40B3492EL}},{{(-1L),0xA2329BF9L,(-8L),0xE120C59CL,0xAD375EABL,(-8L)},{(-1L),0x55DF994CL,0xAD375EABL,1L,(-6L),0xC6D30612L},{0xF8CD56BCL,0x55DF994CL,0xA2329BF9L,0x8FE55D74L,0xAD375EABL,0xAD375EABL}},{{(-1L),0xA2329BF9L,0xA2329BF9L,(-1L),0x55DF994CL,0xC6D30612L},{1L,0x40B3492EL,0xAD375EABL,(-1L),0xC6D30612L,(-8L)},{(-1L),0xC6D30612L,(-8L),0x8FE55D74L,0xC6D30612L,0x40B3492EL}},{{0xF8CD56BCL,0x40B3492EL,0x55DF994CL,1L,0x55DF994CL,0x40B3492EL},{(-1L),0xA2329BF9L,(-8L),0xE120C59CL,6L,(-1L)},{0x40B3492EL,5L,6L,0xAD375EABL,(-10L),(-1L)}},{{(-8L),5L,1L,0x55DF994CL,6L,6L},{0xC6D30612L,1L,1L,0xC6D30612L,5L,(-1L)},{0xAD375EABL,0x9A4072BEL,6L,0xC6D30612L,(-1L),(-1L)}},{{0xC6D30612L,(-1L),(-1L),0x55DF994CL,(-1L),0x9A4072BEL},{(-8L),0x9A4072BEL,5L,0xAD375EABL,5L,0x9A4072BEL},{0x40B3492EL,1L,(-1L),(-6L),6L,(-1L)}},{{0x40B3492EL,5L,6L,0xAD375EABL,(-10L),(-1L)},{(-8L),5L,1L,0x55DF994CL,6L,6L},{0xC6D30612L,1L,1L,0xC6D30612L,5L,(-1L)}},{{0xAD375EABL,0x9A4072BEL,6L,0xC6D30612L,(-1L),(-1L)},{0xC6D30612L,(-1L),(-1L),0x55DF994CL,(-1L),0x9A4072BEL},{(-8L),0x9A4072BEL,5L,0xAD375EABL,5L,0x9A4072BEL}},{{0x40B3492EL,1L,(-1L),(-6L),6L,(-1L)},{0x40B3492EL,5L,6L,0xAD375EABL,(-10L),(-1L)},{(-8L),5L,1L,0xAD375EABL,(-1L),(-1L)}}};
        unsigned short **l_618 = &g_324;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_536[i] = &l_537;
        for (g_245 = 10; (g_245 > 58); ++g_245)
        {
            int *l_522[5][7][3] = {{{&l_441,&l_441,&g_340},{&l_441,&g_5,&l_462},{&l_472,&g_196[5],&g_196[5]},{&l_441,&l_441,(void*)0},{&l_441,(void*)0,(void*)0},{&l_472,(void*)0,&l_441},{&l_469,&g_98,&g_98}},{{(void*)0,(void*)0,&l_462},{&g_196[5],(void*)0,(void*)0},{&g_5,&l_441,&g_5},{(void*)0,&g_196[5],&l_462},{&g_5,&g_5,&g_5},{&g_5,&l_441,(void*)0},{(void*)0,&g_340,&l_462}},{{&g_196[5],&g_196[8],&g_98},{&l_462,&l_441,&l_441},{&g_196[5],&g_196[5],(void*)0},{(void*)0,&l_462,(void*)0},{&g_5,&l_462,&g_196[5]},{&g_5,&l_462,&l_462},{(void*)0,&l_462,&g_340}},{{&g_5,&l_462,&g_5},{&g_196[5],&g_196[5],&l_469},{(void*)0,&l_441,&l_462},{&l_469,&g_196[8],&l_469},{&l_472,&g_340,&g_5},{&l_441,&l_441,&g_340},{&l_441,&g_5,&l_462}},{{&l_472,&g_196[5],&g_196[5]},{&l_441,&l_441,(void*)0},{&l_441,(void*)0,(void*)0},{&l_462,&l_462,&l_441},{&g_5,(void*)0,&g_340},{&l_462,&l_462,(void*)0},{&l_469,&l_441,(void*)0}}};
            int i, j, k;
            ++l_523;
        }
        (*l_527) = func_48(p_34, (*p_33), l_526);
        if ((safe_unary_minus_func_uint16_t_u(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((l_533 ^ func_42(((*l_527) = func_48((*g_324), (safe_sub_func_int32_t_s_s(((l_539 = (void*)0) == (g_541 = &l_540)), 0xA9B4B674L)), ((func_42(func_48((*g_324), ((func_42(&p_32, (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(l_547[1], 15)), ((l_462 ^ 0x47E1CDA5L) || (*g_324)))), p_35, p_36, (**g_121)) | l_547[2]) , (*g_409)), p_36), p_32, p_34, l_548, l_549) & 0x2095CAE0L) , l_550))), p_32, p_35, p_36, (*g_132))), l_441)), 1L)) , p_35))))
        {
            int l_565 = 0xCEE6C72AL;
            int l_579 = (-6L);
            int l_580 = 0L;
            int l_581 = 0x396DC2CBL;
            int l_583 = 0xBF33D6B8L;
            unsigned ***l_590 = (void*)0;
            short *l_620[5][1][3] = {{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}}};
            int i, j, k;
            (*p_33) |= 5L;
            for (l_441 = 19; (l_441 <= 28); l_441 = safe_add_func_uint16_t_u_u(l_441, 7))
            {
                unsigned l_557 = 1UL;
                short ****l_558 = &l_406;
                int l_582 = (-1L);
                unsigned ***l_593[9][8] = {{&l_537,&l_539,(void*)0,&l_537,&l_537,&l_537,&l_537,(void*)0},{&g_541,&g_541,&l_537,&l_537,&l_537,&l_537,&l_537,&l_537},{(void*)0,&l_537,(void*)0,&l_537,&l_537,&l_539,&l_539,&l_537},{&l_537,&l_539,&l_539,&l_537,&l_537,(void*)0,&l_537,(void*)0},{&l_537,&l_537,&l_537,&l_537,&l_537,&l_537,&g_541,&g_541},{(void*)0,&l_537,&l_537,&l_537,&l_537,(void*)0,&l_539,&l_537},{&g_541,&l_539,&l_537,&g_541,&l_537,&l_539,&g_541,(void*)0},{&l_537,&l_537,&l_537,&g_541,&g_541,&l_537,&l_537,&l_537},{(void*)0,&g_541,&l_539,&l_537,&l_537,&l_539,(void*)0,&l_537}};
                unsigned ***l_594 = &l_537;
                unsigned short **l_619 = &g_324;
                int i, j;
            }
        }
        else
        {
            int *l_622 = &g_98;
            int *l_623 = &l_441;
            int *l_624 = (void*)0;
            int *l_625 = &g_5;
            int *l_626[5] = {&l_469,&l_469,&l_469,&l_469,&l_469};
            short l_630 = 1L;
            unsigned char l_631 = 0UL;
            int i;
            if (l_549)
                break;
            if ((*p_33))
                continue;
            l_631--;
            for (l_549 = 0; (l_549 <= 9); l_549 += 1)
            {
                int i;
                l_629[l_549] = (safe_sub_func_uint32_t_u_u(p_35, p_34));
            }
        }
        (*p_33) ^= (l_627 < ((**g_121) ^ p_35));
    }
    return (*g_409);
}







static unsigned func_42(int * p_43, int p_44, unsigned char p_45, short * p_46, short p_47)
{
    int *l_374 = &g_98;
    int *l_375 = &g_340;
    int l_376 = 0x7F9EC9A9L;
    int *l_377 = (void*)0;
    int *l_378 = &g_5;
    int *l_379 = &g_98;
    int *l_380 = &g_196[5];
    int *l_381 = (void*)0;
    int *l_382 = (void*)0;
    int *l_383 = (void*)0;
    int l_384 = 7L;
    int l_385 = 0x0EB540D9L;
    int *l_386 = &l_384;
    int *l_387 = (void*)0;
    int *l_388[1][4];
    short l_389 = 0xAF13L;
    char l_390 = 0x31L;
    short l_391 = (-8L);
    unsigned l_392 = 0UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_388[i][j] = &l_385;
    }
    l_392--;
    (*l_379) = (safe_rshift_func_uint8_t_u_u(p_45, 5));
    return (*l_379);
}







static int * func_48(unsigned short p_49, int p_50, short * p_51)
{
    char *l_342[3];
    int **l_343 = &g_163;
    int i;
    for (i = 0; i < 3; i++)
        l_342[i] = &g_142;
    (*l_343) = ((g_142 = p_50) , &p_50);
    for (g_88 = 11; (g_88 >= 31); g_88 = safe_add_func_uint8_t_u_u(g_88, 3))
    {
        char **l_361 = &l_342[0];
        int l_362[2];
        int *l_363 = (void*)0;
        int *l_364 = &g_98;
        int *l_365 = &g_196[5];
        int *l_366 = &g_340;
        int *l_367 = &g_340;
        int *l_368 = &g_98;
        int *l_369[2];
        unsigned l_370[1][3][9] = {{{0x5AF86F4BL,4294967287UL,0x4DC64E51L,4294967287UL,0x5AF86F4BL,0x4DC64E51L,0xD49A9988L,0xD49A9988L,0x4DC64E51L},{0x5AF86F4BL,4294967287UL,0x4DC64E51L,4294967287UL,0x5AF86F4BL,0x4DC64E51L,0xD49A9988L,0xD49A9988L,0x4DC64E51L},{0x5AF86F4BL,4294967287UL,0x4DC64E51L,4294967287UL,0x5AF86F4BL,0x4DC64E51L,0xD49A9988L,0xD49A9988L,0x4DC64E51L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_362[i] = 0xDF33D620L;
        for (i = 0; i < 2; i++)
            l_369[i] = &l_362[0];
        for (p_50 = (-19); (p_50 >= 12); p_50++)
        {
            for (g_340 = 0; (g_340 <= (-21)); --g_340)
            {
                unsigned l_358 = 0xEDD2B8BDL;
                for (g_5 = 0; (g_5 >= (-29)); g_5--)
                {
                    int *l_352 = &g_98;
                    return l_352;
                }
                for (g_245 = (-10); (g_245 < 11); g_245 = safe_add_func_uint16_t_u_u(g_245, 4))
                {
                    int *l_355 = &g_196[5];
                    int *l_356 = &g_98;
                    int *l_357[10] = {&g_196[1],&g_196[1],&g_196[1],&g_196[1],&g_196[1],&g_196[1],&g_196[1],&g_196[1],&g_196[1],&g_196[1]};
                    int i;
                    (*l_343) = &p_50;
                    l_358++;
                }
            }
        }
        (*l_343) = ((((*l_361) = l_342[0]) != &g_142) , (l_362[0] , (*g_292)));
        (*l_343) = (*g_292);
        l_370[0][1][3]--;
    }
    return g_373;
}







static unsigned short func_52(int * p_53, int p_54, char p_55, unsigned short p_56)
{
    short *l_60 = &g_30;
    short **l_59[8][3][5] = {{{&l_60,(void*)0,&l_60,&l_60,&l_60},{&l_60,(void*)0,&l_60,&l_60,(void*)0},{&l_60,&l_60,&l_60,&l_60,&l_60}},{{&l_60,&l_60,&l_60,(void*)0,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,(void*)0}},{{&l_60,&l_60,&l_60,&l_60,&l_60},{(void*)0,&l_60,&l_60,(void*)0,(void*)0},{(void*)0,&l_60,(void*)0,&l_60,&l_60}},{{(void*)0,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,(void*)0,&l_60,&l_60}},{{&l_60,&l_60,&l_60,&l_60,(void*)0},{&l_60,&l_60,(void*)0,&l_60,&l_60},{(void*)0,&l_60,&l_60,&l_60,&l_60}},{{&l_60,&l_60,&l_60,&l_60,(void*)0},{&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60}},{{&l_60,(void*)0,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60}},{{&l_60,&l_60,&l_60,&l_60,(void*)0},{&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,(void*)0,&l_60,&l_60}}};
    short ***l_58 = &l_59[1][0][1];
    unsigned *l_78[1][7] = {{&g_79[4],&g_79[4],&g_79[4],&g_79[4],&g_79[4],&g_79[4],&g_79[4]}};
    int l_80 = 0xFF24264AL;
    int l_81 = 0xBC8CA929L;
    int l_86 = 0xF3BB579AL;
    unsigned char *l_87 = &g_88;
    int l_89[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
    int l_90 = 0xACF1929BL;
    int l_91[9][4][5] = {{{9L,3L,(-1L),0L,3L},{0L,0xDD146F18L,0xFBA4BDACL,0x1475AC35L,0xDD146F18L},{(-1L),9L,0xF89738BBL,0xF89738BBL,9L},{0x1475AC35L,0xBB00F610L,0xE8228F8FL,1L,0xBB00F610L}},{{0L,9L,6L,1L,9L},{2L,0L,0xE8228F8FL,0xE8228F8FL,0L},{0L,0x291505FFL,0xF89738BBL,1L,0x291505FFL},{0x1475AC35L,0L,0x3987EDF5L,1L,0L}},{{(-1L),9L,0xF89738BBL,0xF89738BBL,9L},{0x1475AC35L,0xBB00F610L,0xE8228F8FL,1L,0xBB00F610L},{0L,9L,6L,1L,9L},{2L,0L,0xE8228F8FL,0xE8228F8FL,0L}},{{0L,0x291505FFL,0xF89738BBL,1L,0x291505FFL},{0x1475AC35L,0L,0x3987EDF5L,1L,0L},{(-1L),9L,0xF89738BBL,0xF89738BBL,9L},{0x1475AC35L,0xBB00F610L,0xE8228F8FL,1L,0xBB00F610L}},{{0L,9L,6L,1L,9L},{2L,0L,0xE8228F8FL,0xE8228F8FL,0L},{0L,0x291505FFL,0xF89738BBL,1L,0x291505FFL},{0x1475AC35L,0L,0x3987EDF5L,1L,0L}},{{(-1L),9L,0xF89738BBL,0xF89738BBL,9L},{0xAF75FBD2L,0x3987EDF5L,(-4L),0xFE07384CL,0x3987EDF5L},{2L,0xF89738BBL,(-1L),3L,0xF89738BBL},{0L,0xE8228F8FL,(-4L),(-4L),0xE8228F8FL}},{{2L,6L,7L,3L,6L},{0xAF75FBD2L,0xE8228F8FL,0xDD146F18L,0xFE07384CL,0xE8228F8FL},{0x86F270ADL,0xF89738BBL,7L,7L,0xF89738BBL},{0xAF75FBD2L,0x3987EDF5L,(-4L),0xFE07384CL,0x3987EDF5L}},{{2L,0xF89738BBL,(-1L),3L,0xF89738BBL},{0L,0xE8228F8FL,(-4L),(-4L),0xE8228F8FL},{2L,6L,7L,3L,6L},{0xAF75FBD2L,0xE8228F8FL,0xDD146F18L,0xFE07384CL,0xE8228F8FL}},{{0x86F270ADL,0xF89738BBL,7L,7L,0xF89738BBL},{0xAF75FBD2L,0x3987EDF5L,(-4L),0xFE07384CL,0x3987EDF5L},{2L,0xF89738BBL,(-1L),3L,0xF89738BBL},{0L,0xE8228F8FL,(-4L),(-4L),0xE8228F8FL}}};
    unsigned char l_92 = 0x29L;
    int l_93 = 4L;
    int *l_339 = &g_340;
    int i, j, k;
    (*l_58) = (void*)0;
    (*l_339) |= (((0xEC6C0484L && (g_30 <= (safe_mod_func_uint32_t_u_u(func_63(g_5, func_69(p_56, (safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((-5L), (((l_81 = (l_80 |= p_54)) != ((l_91[8][2][1] &= ((l_89[5] &= ((safe_add_func_uint8_t_u_u(p_55, ((*l_87) = (safe_rshift_func_uint8_t_u_u((l_86 && l_86), l_86))))) != 0L)) | l_90)) | g_5)) , l_92))) < l_93), 255UL)), p_55, p_55), &g_5, &g_30, g_5), l_92)))) , 4294967295UL) | 0xC93BDCDDL);
    return (*l_339);
}







static unsigned func_63(int p_64, short ** p_65, int * p_66, short * p_67, unsigned p_68)
{
    int l_198 = 2L;
    int l_202[5] = {(-7L),(-7L),(-7L),(-7L),(-7L)};
    unsigned char l_207 = 0xE2L;
    int l_232 = (-1L);
    unsigned l_285 = 1UL;
    unsigned l_335[5][4][5] = {{{4294967295UL,1UL,1UL,4294967295UL,4294967295UL},{0x01EF4C16L,2UL,0x01EF4C16L,0x5343D123L,2UL},{4294967295UL,4294967287UL,4294967294UL,4294967295UL,4294967294UL},{0UL,1UL,0UL,0UL,2UL}},{{4294967294UL,1UL,4294967287UL,4294967287UL,1UL},{2UL,0x01EF4C16L,0x5343D123L,2UL,0x3D9831F8L},{4294967295UL,1UL,4294967295UL,1UL,4294967295UL},{0x5343D123L,1UL,0x01EF4C16L,0x3D9831F8L,1UL}},{{4294967295UL,0x602348A5L,0x602348A5L,4294967295UL,4294967287UL},{2UL,0UL,0UL,1UL,1UL},{4294967294UL,4294967295UL,4294967294UL,4294967287UL,4294967295UL},{1UL,0x01EF4C16L,0x3D9831F8L,1UL,0x3D9831F8L}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,1UL},{0x5343D123L,2UL,0x3D9831F8L,0x3D9831F8L,2UL},{1UL,0x602348A5L,4294967294UL,1UL,4294967287UL},{0UL,2UL,0UL,2UL,0UL}},{{4294967294UL,4294967295UL,0x602348A5L,4294967287UL,4294967295UL},{0UL,0x01EF4C16L,0x01EF4C16L,0UL,0x3D9831F8L},{1UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0x5343D123L,0UL,0x5343D123L,0x3D9831F8L,0UL}}};
    int i, j, k;
    if (((*p_66) = l_198))
    {
        int *l_199 = &g_196[4];
        int *l_200 = &g_196[5];
        int *l_201[6] = {&g_5,&g_5,&g_5,&g_5,&g_5,&g_5};
        int l_203 = 0L;
        unsigned short l_204 = 65535UL;
        int i;
        l_204++;
        if ((l_207 != 0L))
        {
            int **l_208 = &l_200;
            int l_219[5][3][4] = {{{3L,0L,0x8F1CD69EL,0xD05F3529L},{0xB3D72312L,1L,0xCB1EAC38L,(-2L)},{3L,0x66A6A9CAL,1L,1L}},{{(-2L),(-2L),0xB3D72312L,0L},{0x458F5FF7L,0xB3D72312L,0x62E55FA1L,3L},{1L,0xB1641BD3L,0x8F1CD69EL,0x62E55FA1L}},{{0x62E55FA1L,0xB1641BD3L,(-2L),3L},{0xB1641BD3L,0xB3D72312L,0xB1641BD3L,0L},{0x66A6A9CAL,(-2L),0xD05F3529L,1L}},{{0xFA422619L,0x66A6A9CAL,0L,(-2L)},{3L,1L,0L,0xCB1EAC38L},{0xFA422619L,0xD05F3529L,0xD05F3529L,0xFA422619L}},{{0x66A6A9CAL,3L,0xB1641BD3L,0xA543894AL},{0xB1641BD3L,0xA543894AL,(-2L),1L},{0x62E55FA1L,3L,0x8F1CD69EL,1L}}};
            int l_220[6];
            unsigned char *l_237 = &l_207;
            unsigned char **l_236 = &l_237;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_220[i] = (-1L);
            (*l_208) = &g_196[5];
            l_220[4] ^= ((safe_lshift_func_uint16_t_u_u((+(safe_rshift_func_int8_t_s_u((p_64 ^ (((((0x0DCBC0DAL > (g_196[5] || ((((safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((!p_68), p_64)), (*l_199))) , (!(*l_200))), (g_119 ^ g_137))) >= g_5) ^ (**l_208)) != 3L))) , p_64) , l_219[3][2][2]) , g_104[3][0]) != p_64)), 5))), p_68)) == 0xA71A3699L);
            for (l_204 = 0; (l_204 <= 0); l_204 += 1)
            {
                unsigned l_229 = 0x9D35C18BL;
                int l_233[4] = {1L,1L,1L,1L};
                int l_244 = 2L;
                int i;
                for (g_88 = 0; (g_88 <= 0); g_88 += 1)
                {
                    int l_240[6];
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_240[i] = 0L;
                    if (g_159[g_88][(g_88 + 3)])
                    {
                        (*l_208) = &g_98;
                        (*l_208) = &g_196[5];
                        (*l_208) = (*l_208);
                        (*p_66) = (-1L);
                    }
                    else
                    {
                        short *l_225 = &g_226;
                        char *l_234 = (void*)0;
                        char *l_235 = &g_142;
                        (*l_208) = (((safe_sub_func_int16_t_s_s(l_202[3], ((0x7A33L && (((*g_132) <= (safe_lshift_func_int16_t_s_s(((*l_225) = g_159[g_88][(g_88 + 3)]), 10))) <= ((*l_235) = (safe_rshift_func_int16_t_s_s((((*p_66) > l_229) , (l_233[2] = (safe_add_func_uint16_t_u_u(((g_137 , (l_232 = g_162[1])) >= (*g_132)), p_68)))), 3))))) >= 0x94D6L))) , g_123[0][0][3]) , p_66);
                        (**l_208) = g_159[g_88][(g_88 + 3)];
                    }
                    for (l_198 = 0; (l_198 <= 0); l_198 += 1)
                    {
                        unsigned char ***l_238 = &l_236;
                        int l_239 = 0xD0F7886DL;
                        (*l_238) = l_236;
                        g_241--;
                        if (l_244)
                            break;
                    }
                    ++g_245;
                }
                for (g_245 = 0; (g_245 <= 0); g_245 += 1)
                {
                    int l_248 = 0x42CA0AF4L;
                    unsigned short *l_249 = &g_250[4];
                    unsigned short l_253 = 0xB4EDL;
                    g_163 = ((*l_208) = (void*)0);
                    for (g_142 = 0; (g_142 <= 0); g_142 += 1)
                    {
                        (*p_66) = l_233[1];
                    }
                    (*l_199) = (((*l_249) = l_248) || (safe_sub_func_uint32_t_u_u(((g_196[8] , g_104[0][0]) , (!g_88)), (l_253 & (l_198 , l_233[2])))));
                }
            }
            for (g_226 = 4; (g_226 > 2); g_226 = safe_sub_func_uint32_t_u_u(g_226, 2))
            {
                return g_226;
            }
        }
        else
        {
            return p_68;
        }
    }
    else
    {
        unsigned short l_260 = 65535UL;
        int l_278 = 0x4B34C819L;
        int l_280[6];
        unsigned char *l_321 = (void*)0;
        unsigned short *l_323 = &g_250[4];
        unsigned short **l_322[8][6][5] = {{{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_323,&l_323,&l_323,&l_323,&l_323},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_280[i] = 0xC64AD36BL;
        for (l_207 = 0; (l_207 >= 13); l_207 = safe_add_func_int32_t_s_s(l_207, 7))
        {
            unsigned short *l_261[9] = {&g_250[8],&l_260,&g_250[8],&g_250[8],&l_260,&g_250[8],&g_250[8],&l_260,&g_250[8]};
            int l_262 = 0xB74DEAF2L;
            short **l_263 = &g_132;
            int l_275[7][5][5] = {{{1L,0x1DBEBF95L,0x889A831BL,(-3L),0xFE86878FL},{0xBF5E0FD3L,0L,1L,2L,0x889A831BL},{0x8F184546L,9L,0xA95927A8L,0xCB92070DL,0L},{0x30E20BCBL,0xB0CE8A82L,0x92BCE646L,9L,0x92BCE646L},{(-3L),(-3L),0xACA37043L,0x9DCE2DD5L,6L}},{{0L,1L,(-3L),8L,0xA95927A8L},{1L,3L,(-6L),0x30E20BCBL,0L},{0x99FC5A76L,1L,0L,0x92BCE646L,0x8D38B644L},{0L,(-3L),0x6934789DL,(-1L),3L},{0L,0xB0CE8A82L,(-1L),0x9CB8B082L,0x94A519DDL}},{{(-1L),9L,0xCC0637CDL,0L,(-3L)},{0xCB92070DL,0L,2L,0xBF5E0FD3L,0x62BF705EL},{0xFC59C9FEL,0x1DBEBF95L,1L,(-1L),0x62BF705EL},{0xCC0637CDL,0x62BF705EL,8L,(-3L),(-3L)},{0x92BCE646L,(-3L),8L,0xFE86878FL,(-1L)}},{{0L,1L,0x94A519DDL,(-3L),(-3L)},{0x6055E22EL,2L,0x6055E22EL,0x92BCE646L,0x1DBEBF95L},{8L,0xB9206231L,0x7676AEA6L,0x9CB8B082L,0x30E20BCBL},{1L,0x6055E22EL,0x30E20BCBL,0x8D38B644L,0x0A5F733AL},{0x8D38B644L,0xBF5E0FD3L,0x7676AEA6L,0x30E20BCBL,(-6L)}},{{0xFE86878FL,0xD27760F3L,0x6055E22EL,0L,0xB9206231L},{(-3L),0xB0CE8A82L,0x94A519DDL,2L,0xFC59C9FEL},{0xFC59C9FEL,(-6L),1L,0x6055E22EL,(-3L)},{0xD27760F3L,0x99FC5A76L,0xCB92070DL,0xFBC8AC43L,1L},{0L,0x7676AEA6L,0xCC0637CDL,(-1L),0x6055E22EL}},{{0L,0x804988C3L,8L,(-6L),(-1L)},{0xD27760F3L,1L,0x62BF705EL,1L,8L},{0xFC59C9FEL,0xFBE857C8L,0x59E138D6L,7L,0x99FC5A76L},{(-3L),0x9DCE2DD5L,0x9DCE2DD5L,(-3L),6L},{0xFE86878FL,0x8D38B644L,0xFC59C9FEL,1L,0L}},{{0x8D38B644L,0x94A519DDL,0L,0x7676AEA6L,0L},{1L,8L,0x4E592116L,1L,0xA95927A8L},{8L,0x9CB8B082L,0xFE86878FL,(-3L),0xB0CE8A82L},{0x6055E22EL,0L,0xB9206231L,7L,0x6055E22EL},{2L,0L,0x6934789DL,1L,0x9CB8B082L}}};
            int i, j, k;
            (*p_66) ^= (((safe_lshift_func_uint16_t_u_s(g_196[0], l_260)) > (l_198 , (p_68 & ((l_202[1] = p_64) & (((g_250[1] ^= 0xC57FL) == l_232) >= p_64))))) | (l_262 > l_260));
            for (p_64 = 8; (p_64 >= 1); p_64 -= 1)
            {
                int l_269 = 1L;
                int l_270 = 0x3A67FCE7L;
                int l_271 = 1L;
                int l_273 = (-8L);
                int l_274 = 0xA6FAE5F7L;
                int l_276 = 0xE81CB5ADL;
                int l_279[9];
                int l_282 = 0x5DB3D0EAL;
                int **l_291 = (void*)0;
                int **l_293 = (void*)0;
                int *l_295 = &l_262;
                int **l_294 = &l_295;
                int i;
                for (i = 0; i < 9; i++)
                    l_279[i] = 0xEA668F69L;
                for (l_262 = 6; (l_262 >= 0); l_262 -= 1)
                {
                    int l_268 = 0L;
                    int l_277 = 0xAF53ABEAL;
                    int l_283 = 0x8899B706L;
                    int l_284[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
                    int i;
                    (*p_66) = (g_250[p_64] != ((**l_263) = (l_263 == &p_67)));
                    for (g_226 = 24; (g_226 < 20); g_226--)
                    {
                        int *l_266 = &l_202[2];
                        int *l_267[6][3][10] = {{{&g_5,(void*)0,(void*)0,&g_98,&l_202[1],&g_5,(void*)0,&l_202[2],&l_232,&l_262},{&g_196[5],&l_262,(void*)0,&l_262,&g_196[5],&g_5,&g_5,&g_5,&g_5,&g_196[5]},{&g_5,&g_5,&g_5,&g_5,(void*)0,&g_196[4],&l_232,&g_5,&g_196[5],&g_5}},{{&l_262,(void*)0,&l_262,&g_196[5],&g_196[4],&l_202[2],&g_5,&l_232,&g_196[5],&l_232},{&g_98,(void*)0,(void*)0,&g_5,(void*)0,(void*)0,&g_98,&l_202[1],&g_5,(void*)0},{&g_5,&g_196[5],&l_202[2],&l_262,&g_5,(void*)0,&g_5,&g_98,&l_232,&l_202[1]}},{{(void*)0,&g_196[5],(void*)0,&g_98,&l_262,&l_262,&g_98,(void*)0,&g_196[5],(void*)0},{&g_5,(void*)0,&g_5,&g_5,&g_98,&g_98,&g_5,&l_262,&g_5,(void*)0},{&g_5,&g_196[4],(void*)0,&g_196[5],&l_262,&g_98,&g_5,&g_98,&l_262,&g_196[5]}},{{&l_262,&g_196[0],&l_262,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_5,&g_196[5]},{&g_196[0],(void*)0,&g_5,&g_5,(void*)0,&l_262,&l_202[2],(void*)0,(void*)0,&l_202[2]},{&l_232,&g_5,&l_262,&l_262,&g_5,&l_232,(void*)0,&g_98,&g_196[5],&g_5}},{{&g_196[4],&l_202[1],(void*)0,&g_196[0],&g_5,&g_5,&l_262,&g_5,&g_98,&g_5},{&g_196[4],&l_202[2],&g_5,&l_232,&g_196[5],&l_232,&g_5,&l_202[2],&g_196[4],&g_196[5]},{&l_232,&g_5,&l_202[2],&g_196[4],&g_196[5],&l_262,(void*)0,&l_262,&g_196[5],&g_5}},{{&g_196[0],(void*)0,&l_202[1],&g_196[4],&g_196[5],(void*)0,(void*)0,&g_196[5],&g_196[4],&l_202[1]},{&l_262,&l_262,&g_5,&l_232,(void*)0,&g_98,&g_196[5],&g_5,&g_98,(void*)0},{&g_5,&g_5,(void*)0,&g_196[0],&g_5,&l_202[2],&g_5,&g_98,&g_5,&l_202[2]}}};
                        char l_272[3][7][9] = {{{0xDDL,0L,0xDDL,8L,0x07L,0x07L,8L,0xDDL,0L},{(-4L),(-1L),(-1L),(-3L),(-3L),(-1L),(-1L),(-4L),(-1L)},{(-6L),(-1L),8L,8L,(-1L),(-6L),0x07L,(-6L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-4L),4L,(-4L),(-1L),(-1L)},{0L,0L,0x07L,(-1L),0x8EL,(-1L),0x07L,0L,0L},{(-1L),(-1L),(-4L),4L,(-4L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-6L),0x07L,(-6L),(-1L),8L,8L,(-1L),(-6L)}},{{(-1L),(-4L),(-1L),(-1L),(-3L),(-3L),(-1L),(-1L),(-4L)},{0L,0xDDL,8L,0x07L,0x07L,8L,0xDDL,0L,0xDDL},{(-1L),4L,(-1L),(-1L),4L,(-1L),(-3L),(-1L),4L},{(-1L),8L,8L,(-1L),(-6L),0x07L,(-6L),(-1L),8L},{(-1L),(-1L),(-9L),(-3L),(-1L),(-3L),(-9L),(-1L),(-1L)},{8L,(-1L),(-6L),0x07L,(-6L),(-1L),8L,8L,(-1L)},{(-3L),4L,(-9L),4L,(-3L),(-4L),(-4L),(-3L),4L}},{{8L,(-6L),8L,0L,0x8EL,0x8EL,0L,8L,(-6L)},{(-1L),(-1L),(-4L),(-9L),(-9L),(-4L),(-1L),(-1L),(-1L)},{(-1L),0x07L,0L,0L,0x07L,(-1L),0x8EL,(-1L),0x07L},{4L,(-1L),(-1L),4L,(-1L),(-3L),(-1L),4L,(-1L)},{(-6L),(-6L),0x8EL,0x07L,0xDDL,0x07L,0x8EL,(-6L),(-6L)},{(-1L),4L,(-1L),(-3L),(-1L),4L,(-1L),(-1L),4L},{0x07L,(-1L),0x8EL,(-1L),0x07L,0x07L,0x07L,8L,0xDDL}}};
                        short l_281 = 0L;
                        int **l_288 = &g_163;
                        int i, j, k;
                        g_196[5] &= ((0x980935E2L | ((*p_66) = (*p_66))) & g_98);
                        --l_285;
                        (*l_288) = (void*)0;
                        if (l_277)
                            continue;
                    }
                    (*g_289) = p_66;
                }
                (*g_292) = p_66;
                (*l_294) = ((*g_292) = (l_275[4][2][1] , &l_202[0]));
            }
            for (g_226 = 0; (g_226 == 28); ++g_226)
            {
                unsigned char l_307 = 0xBFL;
                for (g_241 = 0; (g_241 == 16); g_241 = safe_add_func_int32_t_s_s(g_241, 3))
                {
                    int **l_300 = &g_163;
                    int *l_310[4][10][6] = {{{&l_280[2],&g_196[5],&l_202[0],(void*)0,&l_280[4],&l_280[4]},{&l_280[4],&g_5,&g_5,&l_280[4],&l_202[2],&l_262},{&l_262,&l_280[2],&l_202[2],&l_275[3][1][2],&l_202[0],(void*)0},{&l_275[5][4][3],(void*)0,&l_280[2],&l_280[3],&l_202[0],&g_196[6]},{&l_202[2],&l_280[2],&l_280[4],&l_280[2],&l_202[2],&l_280[3]},{&l_280[2],&g_5,(void*)0,&l_262,&l_280[4],&l_275[5][4][3]},{(void*)0,&g_196[5],&l_202[2],&g_5,&g_196[2],&l_275[5][4][3]},{&l_280[3],&g_196[6],(void*)0,(void*)0,&g_196[6],&l_280[3]},{&g_196[2],&l_275[3][1][2],&l_280[4],&l_202[0],&l_280[2],&g_196[6]},{&l_275[3][1][2],&l_202[2],&l_280[2],&l_202[2],(void*)0,(void*)0}},{{&l_275[3][1][2],&l_262,&l_202[2],&l_202[0],&l_202[2],&l_262},{&g_196[2],&l_280[2],&g_5,(void*)0,&l_262,&l_280[4]},{&l_280[3],&l_262,&l_202[0],&g_5,&l_275[5][4][3],&l_202[2]},{(void*)0,&l_262,&g_196[5],&l_262,&l_262,&g_196[5]},{&l_280[2],&l_280[2],&l_262,&l_280[2],&l_202[2],&l_275[3][1][2]},{&l_202[2],&l_280[2],(void*)0,&g_196[2],&l_202[0],&l_280[2]},{&l_275[3][1][2],&l_202[2],(void*)0,&l_280[4],(void*)0,&l_280[4]},{&l_280[2],&l_280[4],&l_280[2],&l_202[2],&l_280[3],&l_262},{&l_202[2],&l_280[3],&l_262,&l_202[0],&g_5,&l_275[5][4][3]},{&g_196[6],&l_262,&l_262,&l_202[0],&l_202[2],&l_202[2]}},{{&l_202[2],(void*)0,(void*)0,&l_202[2],&l_202[2],&l_280[2]},{&l_280[2],&g_196[6],&l_275[5][4][3],&l_280[4],&l_262,(void*)0},{&l_275[3][1][2],&l_202[0],(void*)0,&g_196[2],&l_262,&l_280[3]},{&l_202[2],&g_196[6],&l_202[2],&g_196[6],&l_202[2],&g_196[2]},{(void*)0,(void*)0,&l_202[2],&l_280[2],&l_202[2],&l_275[3][1][2]},{&l_202[2],&l_262,&l_202[2],(void*)0,&g_5,&l_275[3][1][2]},{&g_196[2],&l_280[3],&l_202[2],&l_202[2],&l_280[3],&g_196[2]},{&g_5,&l_280[4],&l_202[2],&l_262,(void*)0,&l_280[3]},{&l_280[4],&l_202[2],(void*)0,&l_275[5][4][3],&l_202[0],(void*)0},{&l_280[4],&l_280[2],&l_275[5][4][3],&l_262,&l_275[5][4][3],&l_280[2]}},{{&g_5,(void*)0,(void*)0,&l_202[2],&l_280[2],&l_202[2]},{&g_196[2],&g_196[2],(void*)0,&l_280[2],&l_202[2],&l_202[2]},{&l_280[4],&g_196[2],&l_280[3],&l_202[2],&l_202[2],&l_280[3]},{&l_275[5][4][3],&l_275[5][4][3],&g_196[2],&g_5,&l_202[2],&g_196[5]},{&l_280[2],&l_202[2],&l_275[3][1][2],&l_202[0],(void*)0,&g_196[2]},{&l_202[2],&l_280[2],&l_275[3][1][2],&g_196[5],&l_275[5][4][3],&g_196[5]},{&g_196[2],&g_196[5],&g_196[2],&l_262,(void*)0,&l_280[3]},{&l_262,(void*)0,&l_280[3],(void*)0,&l_262,&l_202[2]},{&g_5,&l_280[3],(void*)0,(void*)0,&l_262,&l_262},{&l_262,&l_280[2],&l_280[2],&l_262,&l_280[2],&l_202[2]}}};
                    char *l_311 = &g_142;
                    int i, j, k;
                    (*l_300) = (void*)0;
                    for (g_119 = 0; (g_119 < 29); g_119 = safe_add_func_uint32_t_u_u(g_119, 9))
                    {
                        int *l_303 = &g_5;
                        int *l_304 = &g_5;
                        int *l_305 = &g_98;
                        int *l_306[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_306[i] = &g_196[5];
                        (*l_300) = (*l_300);
                        ++l_307;
                        if ((*p_66))
                            continue;
                    }
                    l_202[2] &= (*p_66);
                    if (((p_68 , (((l_232 , (l_311 = &g_142)) == (void*)0) && (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((((((*l_300) = (void*)0) != p_66) || ((*g_289) == p_66)) ^ (~(safe_lshift_func_int16_t_s_u((l_280[2] || l_260), 7)))) , l_280[2]) && g_162[1]), g_196[5])), 0x34L)))) < l_307))
                    {
                        (*l_300) = (void*)0;
                    }
                    else
                    {
                        return p_68;
                    }
                }
            }
        }
        for (g_245 = (-3); (g_245 < 30); g_245++)
        {
            short l_320 = 2L;
            if (l_320)
                break;
        }
        if (((0xB947L && ((&g_88 == l_321) >= (*p_67))) & ((*g_132) = ((((l_280[2] == ((p_64 , p_66) != (void*)0)) && ((g_324 = &g_250[7]) != (void*)0)) , g_104[3][0]) & g_79[4]))))
        {
            int *l_329 = &g_5;
            int *l_330 = &l_232;
            int *l_331 = &g_5;
            int *l_332 = &g_196[5];
            int *l_333 = &l_202[2];
            int *l_334[3];
            int i;
            for (i = 0; i < 3; i++)
                l_334[i] = &l_280[5];
            for (g_241 = 0; (g_241 <= 2); g_241 += 1)
            {
                int **l_325 = (void*)0;
                int **l_326 = (void*)0;
                int **l_327 = &g_163;
                int i;
                (*l_327) = &l_202[g_241];
                (*p_66) &= (g_328 != &l_321);
                if ((**g_289))
                    continue;
            }
            l_280[5] |= l_198;
            ++l_335[4][0][3];
        }
        else
        {
            int **l_338 = (void*)0;
            (*g_292) = p_66;
        }
    }
    return l_202[2];
}







static short ** func_69(int p_70, int p_71, short p_72, int p_73)
{
    short l_108 = 0xB328L;
    int *l_127 = (void*)0;
    short ***l_135 = &g_131;
    int l_144[1][8][7] = {{{0L,0x400ABD0BL,0L,(-1L),(-1L),0L,0x400ABD0BL},{0L,0x400ABD0BL,0L,(-1L),(-1L),0L,0x400ABD0BL},{0L,0x400ABD0BL,0L,(-1L),(-1L),0L,0x400ABD0BL},{0L,0x400ABD0BL,0L,(-1L),(-1L),0L,0x400ABD0BL},{0L,0x400ABD0BL,0L,(-1L),(-1L),0L,0x400ABD0BL},{0L,0x400ABD0BL,0L,(-1L),(-1L),0L,0x400ABD0BL},{0xEF98C019L,0L,0L,0xD3B1C7E4L,0xD3B1C7E4L,0L,0L},{0xEF98C019L,0L,0L,0xD3B1C7E4L,0xD3B1C7E4L,0L,0L}}};
    int l_146 = 0x918AE130L;
    unsigned *l_187 = &g_159[0][1];
    unsigned **l_186 = &l_187;
    short **l_197 = &g_132;
    int i, j, k;
    for (p_73 = 22; (p_73 > 24); p_73 = safe_add_func_int16_t_s_s(p_73, 1))
    {
        int *l_96 = (void*)0;
        int *l_97 = &g_98;
        int *l_99 = &g_98;
        int *l_100 = &g_98;
        int *l_101 = &g_98;
        int *l_102 = &g_98;
        int *l_103 = &g_98;
        short l_107 = 0xC719L;
        unsigned char *l_109 = (void*)0;
        unsigned char *l_110 = (void*)0;
        unsigned char *l_111 = &g_88;
        short *l_117[4];
        short **l_116 = &l_117[0];
        short ***l_115 = &l_116;
        unsigned *l_185 = &g_79[4];
        unsigned **l_184 = &l_185;
        int i;
        for (i = 0; i < 4; i++)
            l_117[i] = &l_108;
        ++g_104[3][0];
        if (g_5)
            continue;
        if ((((*l_111) = (p_72 && (l_107 && l_108))) , g_104[0][0]))
        {
            short *l_114[6] = {&l_107,&l_107,&l_107,&l_107,&l_107,&l_107};
            int l_126 = 1L;
            int i;
            for (l_108 = 25; (l_108 > (-21)); --l_108)
            {
                short ***l_118 = &l_116;
                (*l_101) ^= ((((l_114[3] == &g_30) || 2UL) == ((l_118 = l_115) != ((g_119 & (+g_79[4])) , g_120))) != (0x17685C13L <= (safe_add_func_uint32_t_u_u(p_72, l_126))));
            }
        }
        else
        {
            short ****l_133 = (void*)0;
            short ****l_134[8][7][4] = {{{&l_115,&l_115,&l_115,&l_115},{&l_115,&l_115,&g_130,&g_130},{&l_115,&l_115,(void*)0,&g_130},{&l_115,&l_115,&g_130,&g_130},{&l_115,&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115,(void*)0},{&l_115,&l_115,&g_130,&l_115}},{{&l_115,&l_115,&l_115,&l_115},{&l_115,&l_115,(void*)0,(void*)0},{&g_130,&l_115,&l_115,&l_115},{&g_130,&l_115,(void*)0,&l_115},{&l_115,&l_115,&l_115,&g_130},{&l_115,&l_115,&g_130,&l_115},{&l_115,&l_115,&l_115,&l_115}},{{&l_115,&g_130,&l_115,(void*)0},{&l_115,&l_115,&g_130,&l_115},{&l_115,&l_115,(void*)0,&l_115},{&l_115,&l_115,&g_130,(void*)0},{&l_115,&g_130,&l_115,&l_115},{&l_115,(void*)0,&l_115,&l_115},{(void*)0,&l_115,(void*)0,&l_115}},{{&l_115,&g_130,&l_115,&l_115},{&g_130,(void*)0,&l_115,&g_130},{&g_130,&l_115,&l_115,&l_115},{&g_130,&l_115,&l_115,&l_115},{&l_115,&l_115,(void*)0,&l_115},{(void*)0,&l_115,&l_115,&l_115},{&l_115,&l_115,&g_130,&l_115}},{{&l_115,(void*)0,&l_115,&l_115},{(void*)0,&l_115,(void*)0,&l_115},{&l_115,&l_115,&l_115,&l_115},{&l_115,(void*)0,&l_115,&l_115},{&g_130,&l_115,(void*)0,&l_115},{&l_115,&l_115,&l_115,&l_115},{&l_115,&l_115,&g_130,&l_115}},{{(void*)0,&l_115,&l_115,&l_115},{&l_115,&l_115,&g_130,&g_130},{&l_115,(void*)0,&l_115,&l_115},{(void*)0,&g_130,&g_130,&l_115},{&l_115,&l_115,&l_115,&l_115},{&l_115,(void*)0,(void*)0,&l_115},{&g_130,&l_115,&l_115,&l_115}},{{&l_115,&l_115,&l_115,(void*)0},{(void*)0,&g_130,&l_115,(void*)0},{&l_115,&g_130,&l_115,&g_130},{&l_115,&l_115,&l_115,&l_115},{(void*)0,&l_115,&g_130,&l_115},{&l_115,&l_115,&l_115,&l_115},{&g_130,&l_115,&g_130,(void*)0}},{{&l_115,&l_115,&g_130,&l_115},{&g_130,&l_115,&g_130,&g_130},{&l_115,(void*)0,&g_130,&g_130},{&g_130,&g_130,&l_115,(void*)0},{&l_115,(void*)0,&g_130,&g_130},{(void*)0,(void*)0,&l_115,&l_115},{&l_115,&l_115,&l_115,&l_115}}};
            unsigned char l_136 = 247UL;
            int l_141 = 1L;
            int l_145 = 0xA7E50284L;
            unsigned l_176 = 0xFDAC8820L;
            int i, j, k;
            l_127 = (void*)0;
            (*l_97) = g_5;
            if ((g_123[0][7][6] || ((l_135 = g_130) != (((*l_111) = (l_136 <= g_5)) , &l_116))))
            {
                int *l_138 = (void*)0;
                int *l_139 = &g_98;
                int *l_140 = &g_98;
                int *l_143[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int i, j;
                if (p_71)
                    break;
                g_147--;
                for (l_107 = 3; (l_107 >= 0); l_107 -= 1)
                {
                    short l_155 = 0x80E7L;
                    short **l_156 = (void*)0;
                    if ((0x031382D9L == ((safe_lshift_func_uint8_t_u_s(248UL, 1)) <= p_73)))
                    {
                        g_152--;
                        p_71 ^= ((*l_102) = l_155);
                        if (g_104[5][0])
                            continue;
                        return l_156;
                    }
                    else
                    {
                        if (p_73)
                            break;
                        (*l_99) = (-5L);
                    }
                    for (p_72 = 0; (p_72 <= 3); p_72 += 1)
                    {
                        (*l_97) = ((safe_mod_func_uint16_t_u_u(p_70, g_123[1][3][0])) , (p_73 & 0xDC658C38L));
                        (*l_100) = ((~p_70) , ((--g_159[0][3]) >= (g_162[1] = g_142)));
                        g_163 = &p_71;
                    }
                    (*g_163) = (((g_152 ^ l_136) | 0UL) >= (safe_unary_minus_func_int16_t_s(((***l_115) &= 0x5FE6L))));
                }
            }
            else
            {
                unsigned l_179 = 1UL;
                for (g_119 = 18; (g_119 > 3); g_119 = safe_sub_func_uint32_t_u_u(g_119, 1))
                {
                    unsigned char l_193[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_193[i][j] = 0xFAL;
                    }
                    if ((safe_add_func_uint32_t_u_u(g_104[2][0], (((*l_115) = (*l_115)) == ((*l_102) , (void*)0)))))
                    {
                        unsigned *l_180 = (void*)0;
                        unsigned *l_181 = &g_79[4];
                        (*g_120) = (*g_120);
                        (*g_163) = ((0x1B26D052L >= (safe_add_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(((*l_111) = ((*g_163) && (*l_103))), (+g_147))) != (((safe_unary_minus_func_uint8_t_u(p_70)) ^ g_142) ^ (+g_79[4]))) , ((((*l_181) = (l_176 , ((safe_lshift_func_uint16_t_u_u(((g_119 != g_123[0][7][6]) < l_179), 7)) == (*g_163)))) ^ 0UL) >= p_73)), p_71))) < 65535UL);
                        (*l_97) = (safe_mod_func_int8_t_s_s(g_119, p_72));
                    }
                    else
                    {
                        char *l_190 = &g_142;
                        int *l_194 = (void*)0;
                        int *l_195 = &l_141;
                        l_186 = l_184;
                        (*l_195) |= (safe_rshift_func_int16_t_s_s((l_193[0][0] |= ((((***l_115) = (((*l_190) &= (g_104[3][0] ^ (*l_103))) >= (((l_136 || (*g_132)) ^ (p_71 , l_176)) , 0xCDL))) | (safe_mod_func_uint32_t_u_u((l_179 == (p_72 , g_79[3])), (*g_163)))) != (*g_132))), 7));
                    }
                    g_196[5] ^= (p_70 >= (*l_102));
                }
            }
            (*l_99) = (((*g_130) = (*l_115)) == (void*)0);
        }
    }
    return l_197;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_79[i], "g_79[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_104[i][j], "g_104[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_119, "g_119", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_123[i][j][k], "g_123[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_159[i][j], "g_159[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_162[i], "g_162[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_196[i], "g_196[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_250[i], "g_250[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_611[i][j][k], "g_611[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_885, "g_885", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_934, "g_934", print_hash_value);
    transparent_crc(g_936, "g_936", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
