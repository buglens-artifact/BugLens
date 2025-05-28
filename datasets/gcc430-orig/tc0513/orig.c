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
   char * const f0;
   char f1;
};

union U1 {
   short f0;
};

union U2 {
   const char f0;
};


static int g_11 = 0xBD085C9EL;
static char g_20[3] = {0x17L,0x17L,0x17L};
static union U0 g_30 = {0};
static int g_53 = 1L;
static int g_62 = 0xA1DC7E90L;
static union U2 g_68 = {0x3CL};
static char g_73 = 6L;
static unsigned g_74 = 0x33FFCD55L;
static char g_80 = 0xE3L;
static unsigned g_82 = 1UL;
static unsigned g_92 = 0xEA335EF5L;
static char g_93 = 0x5CL;
static union U1 g_97 = {0x6C9FL};
static int *g_108 = (void*)0;
static int g_110[3][1] = {{1L},{1L},{1L}};
static unsigned g_116[2][8][5] = {{{0xC3633543L,0x9F286226L,0xC3633543L,0xC3633543L,0x9F286226L},{0xFA81E3AFL,4294967295UL,4294967295UL,0xFA81E3AFL,4294967295UL},{0x9F286226L,0x9F286226L,0x64BFD8C3L,0x9F286226L,0x9F286226L},{4294967295UL,0xFA81E3AFL,4294967295UL,4294967295UL,0xFA81E3AFL},{0x9F286226L,0xC3633543L,0xC3633543L,0x9F286226L,0xC3633543L},{0xFA81E3AFL,0xFA81E3AFL,0x4AF182F5L,0xFA81E3AFL,0xFA81E3AFL},{0xC3633543L,0x9F286226L,0xC3633543L,0xC3633543L,0x9F286226L},{0xFA81E3AFL,4294967295UL,4294967295UL,0xFA81E3AFL,4294967295UL}},{{0xC3633543L,0xC3633543L,0x9F286226L,0xC3633543L,0xC3633543L},{0x4AF182F5L,4294967295UL,0x4AF182F5L,0x4AF182F5L,4294967295UL},{0xC3633543L,0x64BFD8C3L,0x64BFD8C3L,0xC3633543L,0x64BFD8C3L},{4294967295UL,4294967295UL,0xFA81E3AFL,4294967295UL,4294967295UL},{0x64BFD8C3L,0xC3633543L,0x64BFD8C3L,0x64BFD8C3L,0xC3633543L},{4294967295UL,0x4AF182F5L,0x4AF182F5L,4294967295UL,0x4AF182F5L},{0xC3633543L,0xC3633543L,0x9F286226L,0xC3633543L,0xC3633543L},{0x4AF182F5L,4294967295UL,0x4AF182F5L,0x4AF182F5L,4294967295UL}}};
static int *g_121 = &g_62;
static unsigned char g_125 = 0x8FL;
static unsigned char g_135 = 2UL;
static int g_139 = 0x979EA24BL;
static char g_140 = 0xDEL;
static short g_141 = 0x4898L;
static unsigned g_143[4][5] = {{4294967294UL,4294967294UL,0x70F0C57FL,0x2A3EB5BAL,0UL},{0x85155932L,4294967295UL,4294967295UL,0x85155932L,4294967294UL},{0x85155932L,0x2A3EB5BAL,7UL,7UL,0x2A3EB5BAL},{4294967294UL,4294967295UL,7UL,0x70F0C57FL,0x70F0C57FL}};
static const int g_147[4][2][2] = {{{0x2A718D19L,(-1L)},{0x83F7990DL,0xF9B34B0AL}},{{(-1L),0xF9B34B0AL},{0x83F7990DL,(-1L)}},{{0x2A718D19L,0x2A718D19L},{0x2A718D19L,(-1L)}},{{0x83F7990DL,0xF9B34B0AL},{(-1L),0xF9B34B0AL}}};
static unsigned g_157 = 0xD96C67E9L;
static unsigned g_168 = 4294967295UL;
static unsigned g_194 = 1UL;
static int g_217 = 0x14B3650AL;
static unsigned char g_232 = 0x18L;
static unsigned g_286 = 0xDCEB1211L;
static int *g_378 = &g_110[2][0];
static int **g_377 = &g_378;
static int ***g_376[4] = {&g_377,&g_377,&g_377,&g_377};
static int g_386 = 0x1EE88E77L;
static unsigned g_395 = 4294967295UL;
static unsigned short g_407 = 0x3EEDL;
static int g_422[4][6][4] = {{{3L,0xB286FDEDL,0x281D4548L,0x63DF6AF8L},{(-1L),0x2DB57278L,0xBBC0EFA7L,0x3063821AL},{0L,0xFA08B508L,0L,1L},{(-1L),0x42B7FE28L,1L,0xE8F932CAL},{0x42B7FE28L,1L,0L,0x2DB57278L},{0xFCD1ABB9L,0x281D4548L,0L,1L}},{{1L,0xB286FDEDL,0xFA08B508L,0xFA08B508L},{0L,0L,0L,(-1L)},{0L,0x181AF071L,(-1L),0x4E1739EFL},{0L,0x3063821AL,1L,(-1L)},{0xFCD1ABB9L,0x3063821AL,(-1L),0x4E1739EFL},{0x3063821AL,0x181AF071L,3L,(-1L)}},{{0x07931BB2L,0L,0x281D4548L,0xFA08B508L},{0x42B7FE28L,0xB286FDEDL,0x29CF1B3CL,1L},{0x2DB57278L,0x281D4548L,1L,0x2DB57278L},{0x07931BB2L,1L,0xFA08B508L,0xE8F932CAL},{0x4E1739EFL,(-1L),(-1L),(-1L)},{0L,(-1L),0xE8F932CAL,0x6B910900L}},{{0L,0xDEC01186L,0L,0xE8F932CAL},{0x2DB57278L,0x3063821AL,0L,0L},{0x1EE99DB3L,0x281D4548L,3L,0x3063821AL},{1L,(-1L),3L,0xFA08B508L},{0x1EE99DB3L,0xFCD1ABB9L,0L,0L},{0x2DB57278L,0x181AF071L,0L,1L}}};
static unsigned g_423 = 0x4C16D5E2L;
static union U0 *g_430[4][5][4] = {{{(void*)0,&g_30,(void*)0,(void*)0},{&g_30,&g_30,(void*)0,&g_30},{&g_30,(void*)0,(void*)0,&g_30},{(void*)0,&g_30,(void*)0,(void*)0},{(void*)0,(void*)0,&g_30,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_30,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_30,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_30,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_30,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_30,(void*)0}}};
static const int g_444 = 0xFF8FB47CL;
static union U2 **g_491 = (void*)0;
static union U2 *g_494[8] = {&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68};
static union U2 ** const g_493 = &g_494[1];
static unsigned char g_498 = 9UL;
static union U0 g_589 = {0};
static unsigned char g_590 = 252UL;
static char g_624 = 0xC7L;
static int g_625 = 0x6F535B9AL;
static short g_628 = 0x062DL;
static short g_629 = (-1L);
static unsigned short g_630 = 65532UL;
static unsigned short g_639 = 0x32FCL;



static char func_1(void);
static unsigned char func_4(unsigned p_5, int p_6, union U0 p_7, int p_8, const char p_9);
static union U0 func_12(char * p_13, const char * p_14, unsigned p_15, int p_16);
static char func_26(union U1 p_27, union U0 p_28);
static int * func_31(int * p_32, unsigned char p_33, char p_34);
static const int * func_37(union U1 p_38, int * p_39, char * p_40, int p_41);
static union U1 func_42(int p_43, unsigned char p_44);
static unsigned func_47(int * p_48, int p_49);
static int func_55(const unsigned char p_56, unsigned p_57);
static int * func_58(int p_59);
static char func_1(void)
{
    short l_10 = 0xF90EL;
    const char *l_19 = &g_20[1];
    unsigned char l_21 = 0x45L;
    union U1 l_29 = {0L};
    char *l_371 = &g_20[1];
    unsigned char *l_384 = &g_125;
    int l_385 = 0xA5012171L;
    union U0 l_389 = {0};
    unsigned l_390 = 1UL;
    int l_394 = 0xAD8483F4L;
    unsigned char l_405 = 252UL;
    int *** const l_450 = &g_377;
    unsigned char l_463 = 0x42L;
    union U0 l_557 = {0};
    int l_563 = 0x5B2AB40DL;
    unsigned char l_582[5][9] = {{0xB7L,252UL,255UL,252UL,0xB7L,0UL,1UL,0xC4L,0xC4L},{252UL,0x5CL,0xB7L,0xC4L,0xB7L,0x5CL,252UL,0x39L,0xFCL},{247UL,0xFCL,252UL,0UL,247UL,0xC4L,0xFCL,255UL,0x5CL},{252UL,0xC4L,0x5CL,247UL,0x16L,0UL,0x16L,247UL,0x5CL},{0x16L,0x16L,252UL,1UL,255UL,0x39L,0x5CL,0x39L,255UL}};
    union U2 ***l_618 = &g_491;
    int l_626 = (-8L);
    int l_627[7][6][3] = {{{0xD92639E9L,(-5L),0x43A7DEE8L},{0x3B22BD36L,0x3B22BD36L,0xB0AF2E55L},{1L,1L,0xC950978BL},{0x3B22BD36L,(-1L),0x2C87BD04L},{0xD92639E9L,1L,0x43A7DEE8L},{(-8L),0x3B22BD36L,0x2C87BD04L}},{{1L,(-5L),0xC950978BL},{(-8L),(-1L),0xB0AF2E55L},{0xD92639E9L,(-5L),0x43A7DEE8L},{0x3B22BD36L,0x3B22BD36L,0xB0AF2E55L},{1L,1L,0xC950978BL},{0x3B22BD36L,(-1L),0x2C87BD04L}},{{0xD92639E9L,1L,0x43A7DEE8L},{(-8L),0x3B22BD36L,0x2C87BD04L},{1L,(-5L),0xC950978BL},{(-8L),(-1L),0xB0AF2E55L},{0xD92639E9L,(-5L),0x43A7DEE8L},{0x3B22BD36L,0x3B22BD36L,0xB0AF2E55L}},{{1L,1L,0xC950978BL},{0x3B22BD36L,(-1L),0x2C87BD04L},{0xD92639E9L,1L,0x43A7DEE8L},{(-8L),0x3B22BD36L,0x2C87BD04L},{1L,(-5L),0xC950978BL},{(-8L),(-1L),0xB0AF2E55L}},{{(-4L),1L,0xF1A67992L},{0xC524BADCL,0xC524BADCL,(-3L)},{0xCB77A90DL,0xE360FDADL,1L},{0xC524BADCL,0x43191F45L,(-1L)},{(-4L),0xE360FDADL,0xF1A67992L},{0x479B5217L,0xC524BADCL,(-1L)}},{{0xCB77A90DL,1L,1L},{0x479B5217L,0x43191F45L,(-3L)},{(-4L),1L,0xF1A67992L},{0xC524BADCL,0xC524BADCL,(-3L)},{0xCB77A90DL,0xE360FDADL,1L},{0xC524BADCL,0x43191F45L,(-1L)}},{{(-4L),0xE360FDADL,0xF1A67992L},{0x479B5217L,0xC524BADCL,(-1L)},{0xCB77A90DL,1L,1L},{0x479B5217L,0x43191F45L,(-3L)},{(-4L),1L,0xF1A67992L},{0xC524BADCL,0xC524BADCL,(-3L)}}};
    int *l_642[9] = {&l_385,(void*)0,&l_385,(void*)0,&l_385,(void*)0,&l_385,(void*)0,&l_385};
    int i, j, k;
    (*g_121) = (safe_div_func_uint8_t_u_u((l_385 = ((*l_384) = func_4(l_10, g_11, func_12((((g_11 <= (safe_add_func_int16_t_s_s(((l_21 &= ((void*)0 == l_19)) == (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0x2AL, 0)), (+func_26(l_29, g_30))))), 65533UL))) && g_147[2][0][0]) , l_371), &g_20[1], g_20[1], g_11), l_29.f0, l_29.f0))), g_147[0][1][1]));
    (*g_121) = 0xC95E53CCL;
    if ((g_386 | (((safe_rshift_func_int16_t_s_s((g_30 , (((func_4(l_29.f0, (g_139 <= l_21), (l_29.f0 , l_389), l_10, l_385) ^ 1L) , 65532UL) >= 0L)), 14)) <= g_97.f0) > l_390)))
    {
        int l_391[10][8][2] = {{{0xC7DA0AB8L,0x4A63BB35L},{(-1L),0xD05DC4E1L},{0x4A63BB35L,4L},{0x1EC5A4D2L,0x583004FEL},{0x3A240FA4L,0xC0FE9D4DL},{0xC0FE9D4DL,0x1A733E4BL},{1L,0L},{(-9L),0L}},{{0x3145CBE6L,0xD05DC4E1L},{0x6A582A75L,0xD2BDD0B4L},{(-7L),0L},{1L,0x3145CBE6L},{(-1L),0x3A240FA4L},{0xD2BDD0B4L,1L},{(-9L),1L},{0xD05DC4E1L,0xC0FE9D4DL}},{{0x1A733E4BL,(-1L)},{0x4A63BB35L,6L},{1L,0x656CE504L},{0x7AEB7259L,0xD2BDD0B4L},{0x871C56A9L,0L},{0x55962D47L,0x4388C200L},{1L,0x7AEB7259L},{0x583004FEL,8L}},{{0L,0xC7B480B5L},{1L,(-2L)},{0x71D06CBEL,0L},{(-1L),2L},{8L,0xFBBA16F1L},{(-8L),0x656CE504L},{4L,8L},{1L,0x44216700L}},{{0x13715692L,0xC3E73E67L},{1L,4L},{0x871C56A9L,0x4A63BB35L},{0x44216700L,0xC7DA0AB8L},{(-8L),(-2L)},{0xD2BDD0B4L,(-1L)},{2L,(-1L)},{0xD2BDD0B4L,(-2L)}},{{(-8L),0xC7DA0AB8L},{0x44216700L,0x4A63BB35L},{0x871C56A9L,4L},{1L,0xC3E73E67L},{0x13715692L,0x44216700L},{1L,8L},{4L,0x656CE504L},{(-8L),0xFBBA16F1L}},{{8L,2L},{(-1L),0L},{0x71D06CBEL,(-2L)},{1L,0xC7B480B5L},{0L,8L},{0x583004FEL,0x7AEB7259L},{1L,0x4388C200L},{0x55962D47L,0L}},{{0x871C56A9L,0xD2BDD0B4L},{0x7AEB7259L,0x656CE504L},{1L,6L},{0x4A63BB35L,(-1L)},{0L,(-1L)},{0x71D06CBEL,0xFBBA16F1L},{0x0F40DD39L,1L},{0x44216700L,0xD2BDD0B4L}},{{3L,(-1L)},{0L,0L},{0L,2L},{0x1EC5A4D2L,0x55962D47L},{(-1L),1L},{1L,0x7ED4D81FL},{0x1A733E4BL,0x28E07A74L},{6L,6L}},{{0xCAD7FDC3L,0x3A240FA4L},{0x9A499215L,0x6A582A75L},{0xC81D43D3L,0x55962D47L},{3L,0xC81D43D3L},{1L,1L},{1L,0xC81D43D3L},{3L,0x55962D47L},{0xC81D43D3L,0x6A582A75L}}};
        int *l_392 = &g_62;
        int *l_393[9][7] = {{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11}};
        int i, j, k;
        --g_395;
    }
    else
    {
        int **l_404 = &g_108;
        unsigned short *l_406 = &g_407;
        int l_408 = 0xACB07AECL;
        union U0 l_409[6][2] = {{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}};
        int l_420[10][4] = {{0xB39624D6L,1L,0L,0L},{0x26032137L,0x26032137L,0xB39624D6L,0L},{0x71F85479L,1L,0x71F85479L,0xB39624D6L},{0x71F85479L,0xB39624D6L,0xB39624D6L,0x71F85479L},{0x26032137L,0xB39624D6L,0L,0xB39624D6L},{0xB39624D6L,1L,0L,0L},{0x26032137L,0x26032137L,0xB39624D6L,0L},{0x71F85479L,1L,0x71F85479L,0xB39624D6L},{0x71F85479L,0xB39624D6L,0xB39624D6L,0x71F85479L},{0x26032137L,0xB39624D6L,0L,0xB39624D6L}};
        int ***l_448 = (void*)0;
        unsigned l_451 = 0xA2B06BDCL;
        short l_478 = 0x7FF2L;
        short l_496[1];
        short l_542 = 0L;
        union U2 l_551 = {1L};
        union U0 l_581 = {0};
        const int *l_594 = &g_444;
        const int **l_593 = &l_594;
        unsigned short l_608 = 8UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_496[i] = 0x07B7L;
        for (g_97.f0 = 2; (g_97.f0 >= 0); g_97.f0 -= 1)
        {
            (*g_121) ^= 1L;
        }
        if (((safe_rshift_func_uint16_t_u_s(((safe_div_func_uint8_t_u_u(g_82, g_147[3][1][1])) | g_140), func_4(((safe_rshift_func_int16_t_s_u(((func_47(((*l_404) = &l_385), l_405) , (*g_121)) < l_29.f0), ((*l_406) = (((0x02F5L && 2UL) < (*g_121)) < 0x08D911FEL)))) || 0xDFEFL), l_408, l_409[2][1], l_10, l_29.f0))) && 247UL))
        {
            int l_418 = 0L;
            int l_421 = 0x4853EBDBL;
lbl_454:
            for (g_82 = 0; (g_82 < 54); g_82 = safe_add_func_int16_t_s_s(g_82, 2))
            {
                int *l_412 = &g_11;
                int *l_413 = &g_11;
                int *l_414 = &l_385;
                int *l_415 = &g_217;
                int *l_416 = &g_62;
                int *l_417[3][7] = {{&g_139,&g_139,&g_139,&g_139,&g_139,&g_139,&g_139},{&l_385,&l_385,&l_385,&l_385,&l_385,&l_385,&l_385},{&g_139,&g_139,&g_139,&g_139,&g_139,&g_139,&g_139}};
                short l_419 = 0L;
                int i, j;
                (*l_404) = &g_62;
                if (g_139)
                    goto lbl_454;
                g_423--;
                for (g_97.f0 = (-26); (g_97.f0 == 14); g_97.f0 = safe_add_func_uint32_t_u_u(g_97.f0, 6))
                {
                    union U2 *l_433 = &g_68;
                    union U2 **l_432 = &l_433;
                    const int *l_443 = &g_444;
                    const int **l_442 = &l_443;
                    int *l_446 = (void*)0;
                    int **l_445 = &l_446;
                    int ****l_447[9] = {(void*)0,&g_376[3],(void*)0,(void*)0,&g_376[3],(void*)0,(void*)0,&g_376[3],(void*)0};
                    union U0 l_449 = {0};
                    int i;
                    for (l_405 = 0; (l_405 <= 13); l_405 = safe_add_func_int8_t_s_s(l_405, 1))
                    {
                        unsigned l_431 = 0UL;
                        g_430[2][3][1] = &g_30;
                        (*l_414) &= ((((*l_406) |= ((**l_404) < g_386)) ^ g_217) == (0xD8L != l_431));
                        if ((*g_108))
                            break;
                    }
                    (*l_432) = &g_68;
                    (*g_108) = (safe_lshift_func_int16_t_s_s((-7L), ((((safe_lshift_func_uint8_t_u_u((l_394 = ((safe_add_func_int8_t_s_s(g_74, ((((safe_add_func_uint16_t_u_u((((*l_442) = (*g_377)) == ((*l_445) = (*g_377))), g_386)) && ((func_4(((g_376[1] = &l_445) == (l_448 = (g_68 , &g_377))), l_21, l_449, (*g_121), l_421) || (*g_121)) , g_444)) , l_450) != (void*)0))) , 0xACL)), l_421)) & g_93) || (*g_108)) > g_139)));
                }
                l_451--;
            }
            (**l_404) ^= (safe_lshift_func_int8_t_s_s((-9L), 1));
        }
        else
        {
            unsigned char l_457 = 1UL;
            return l_457;
        }
        for (g_157 = 0; (g_157 >= 7); g_157 = safe_add_func_uint16_t_u_u(g_157, 3))
        {
            unsigned short l_474[8] = {0x15E6L,65533UL,0x15E6L,65533UL,0x15E6L,65533UL,0x15E6L,65533UL};
            int l_482 = 5L;
            int l_483 = 1L;
            union U0 l_515 = {0};
            union U0 **l_528 = &g_430[2][3][1];
            short l_546 = 0L;
            unsigned char l_552 = 0xB6L;
            int **l_553 = &g_121;
            union U2 l_556 = {-1L};
            int *** const * const l_558 = &l_448;
            int l_566 = (-1L);
            int l_610 = 2L;
            unsigned char l_612 = 254UL;
            int i;
        }
    }
    g_139 &= (l_557 , (*g_121));
    return g_116[0][4][3];
}







static unsigned char func_4(unsigned p_5, int p_6, union U0 p_7, int p_8, const char p_9)
{
    unsigned short l_383 = 65535UL;
    return l_383;
}







static union U0 func_12(char * p_13, const char * p_14, unsigned p_15, int p_16)
{
    union U0 l_372[6][2] = {{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}};
    union U2 *l_375 = &g_68;
    unsigned *l_381[10][6][1] = {{{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74}},{{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74}},{{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74}},{{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74}},{{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74}},{{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74}},{{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74}},{{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74}},{{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74}},{{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74},{&g_143[2][2]},{&g_74}}};
    int l_382 = 0x3E91399AL;
    int i, j, k;
    (*g_121) = (l_372[3][1] , (g_135 , (g_168 <= ((g_97 , (l_375 != ((0xACEA4BFBL & (g_376[1] != ((+(safe_add_func_int32_t_s_s(p_15, p_15))) , (void*)0))) , (void*)0))) != g_143[1][3]))));
    l_382 = ((*g_121) = func_55(((((*g_121) &= (1UL == (l_381[7][4][0] != (void*)0))) >= l_382) , (~0x7DL)), g_147[0][1][0]));
    return l_372[3][1];
}







static char func_26(union U1 p_27, union U0 p_28)
{
    int *l_35 = (void*)0;
    union U2 l_36 = {1L};
    char *l_46[2][2][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int *l_50 = &g_11;
    int l_51 = 0x5C59C3F9L;
    int *l_52[10] = {(void*)0,(void*)0,&g_53,(void*)0,(void*)0,&g_53,(void*)0,(void*)0,&g_53,(void*)0};
    const int *l_367 = &g_147[2][0][0];
    const int **l_366 = &l_367;
    const int **l_368 = (void*)0;
    const int *l_369 = &l_51;
    int *l_370[2][2][4] = {{{(void*)0,&g_139,&g_217,(void*)0},{(void*)0,&g_217,(void*)0,&g_139}},{{&g_139,(void*)0,&g_139,(void*)0},{&l_51,&l_51,&g_139,(void*)0}}};
    int i, j, k;
    l_369 = ((*l_366) = func_31(l_35, (p_27.f0 || (+(l_36 , ((l_36 , func_37(func_42((safe_unary_minus_func_int8_t_s((((void*)0 != l_46[0][0][0]) && (func_47(l_50, (g_53 = l_51)) && 0UL)))), g_20[2]), &g_11, l_46[0][0][0], (*l_50))) != &l_51)))), g_20[1]));
    g_217 ^= ((*g_121) = (g_125 ^ g_140));
    return g_143[2][2];
}







static int * func_31(int * p_32, unsigned char p_33, char p_34)
{
    int *l_321 = (void*)0;
    unsigned short l_324 = 0x381FL;
    char *l_328 = &g_73;
    char **l_327[4];
    char *l_329 = &g_80;
    unsigned *l_332 = &g_194;
    int l_335 = 0L;
    unsigned char *l_348[3];
    unsigned l_351 = 0x32BE6095L;
    const union U2 *l_352 = &g_68;
    int *l_353 = (void*)0;
    int *l_354 = (void*)0;
    int *l_355 = (void*)0;
    int *l_356 = &g_110[0][0];
    int *l_365 = &l_335;
    int i;
    for (i = 0; i < 4; i++)
        l_327[i] = &l_328;
    for (i = 0; i < 3; i++)
        l_348[i] = &g_125;
    for (g_53 = 0; (g_53 >= 13); g_53 = safe_add_func_int32_t_s_s(g_53, 3))
    {
        return l_321;
    }
    g_139 |= ((safe_mod_func_uint32_t_u_u(g_116[0][4][3], l_324)) , ((func_47(func_58(((safe_add_func_uint8_t_u_u((g_93 <= ((l_329 = &p_34) == &g_20[1])), (((safe_mod_func_uint32_t_u_u((((*g_121) = p_34) > ((++(*l_332)) == 0xC24447FEL)), 4294967295UL)) >= (!func_47(p_32, g_110[2][0]))) > (-7L)))) || l_324)), l_324) >= p_33) || g_143[2][1]));
    if ((((l_335 = (*g_121)) == (safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((safe_div_func_uint16_t_u_u((((safe_add_func_int16_t_s_s(func_47(p_32, ((*l_356) = ((safe_rshift_func_uint8_t_u_u((g_125--), l_351)) > (&g_68 == l_352)))), g_116[0][4][0])) <= (l_324 & (safe_rshift_func_uint16_t_u_u(g_53, 3)))) , p_34), 65526UL)) && p_34), 10)), p_34)), (-1L)))) <= g_53))
    {
        (*g_121) = (p_33 || g_97.f0);
    }
    else
    {
        short l_361 = 0x0BC0L;
        unsigned char *l_362 = &g_232;
        (*g_121) = ((-1L) == (((safe_add_func_int16_t_s_s(l_361, g_135)) , (&p_33 == l_362)) == (p_34 > (l_361 < (p_33 || (safe_lshift_func_uint8_t_u_s(func_47(&l_335, p_33), p_34)))))));
    }
    (*l_365) ^= (*g_121);
    return &g_139;
}







static const int * func_37(union U1 p_38, int * p_39, char * p_40, int p_41)
{
    int *l_225 = &g_217;
    int *l_226 = &g_62;
    int l_227 = 0x24E20385L;
    int *l_228 = (void*)0;
    int *l_229 = &g_139;
    int *l_230[7][5] = {{&g_139,&g_139,&g_139,&l_227,&g_62},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_62,&g_139,&g_139,&g_139,&g_62},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_62,&l_227,&g_139,&g_139,&g_139},{(void*)0,(void*)0,&g_139,(void*)0,(void*)0},{&g_139,&g_139,&g_139,&l_227,&g_62}};
    char l_231 = 1L;
    int l_237 = 0L;
    char l_254 = 0xC4L;
    short l_255 = 0x086EL;
    int *l_313 = &g_217;
    int i, j;
    g_232--;
    if ((safe_rshift_func_uint8_t_u_u((((+l_237) == (p_38.f0 & (safe_lshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(0UL, (l_255 = (safe_div_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(g_116[1][2][0], ((((*l_229) >= 0x4DC2EF21L) ^ (0xF9CFB4EEL & (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s((*l_226), func_47(&p_41, p_41))) | (*p_39)), 5)), (*l_229))))) ^ l_254))) == g_110[2][0]), (-3L)))))) < 0x55L), g_82)) | p_41), (*l_229))))) || g_141), 1)))
    {
        unsigned l_256 = 0UL;
        ++l_256;
    }
    else
    {
        int **l_259 = (void*)0;
        int ***l_260 = &l_259;
        int ***l_261 = (void*)0;
        int *l_264 = &g_53;
        int **l_263 = &l_264;
        int ***l_262 = &l_263;
        int l_271 = 0xECE64AD6L;
        union U0 l_275 = {0};
        int *l_318 = (void*)0;
lbl_289:
        (*l_262) = ((*l_260) = l_259);
        for (p_38.f0 = 3; (p_38.f0 >= 0); p_38.f0 -= 1)
        {
            int *l_280 = &l_237;
            int l_282 = (-1L);
            union U2 *l_299 = &g_68;
            union U2 **l_298 = &l_299;
            int **l_317[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (g_82 = 0; (g_82 <= 3); g_82 += 1)
            {
                unsigned short l_265 = 0xEC75L;
                union U0 l_302 = {0};
                int *l_306 = &g_62;
                for (g_217 = 0; (g_217 <= 3); g_217 += 1)
                {
                    int i, j;
                    (*l_226) = g_143[g_82][(g_82 + 1)];
                    for (g_62 = 0; (g_62 <= 1); g_62 += 1)
                    {
                        short *l_274 = &l_255;
                        int i, j, k;
                        l_265 = func_47(l_230[(g_217 + 2)][(g_82 + 1)], (g_116[g_62][(p_38.f0 + 2)][(g_62 + 3)] , p_38.f0));
                        (*l_229) = ((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(p_41)), ((safe_add_func_int32_t_s_s((((*l_274) &= (l_271 >= ((safe_mod_func_uint8_t_u_u(p_38.f0, g_143[g_82][(g_82 + 1)])) ^ (-1L)))) > (func_47(l_230[(g_217 + 2)][(g_82 + 1)], (((((l_275 , func_47(&g_62, (safe_mod_func_int8_t_s_s((g_73 = (safe_lshift_func_uint8_t_u_u(func_47(l_280, g_53), g_147[0][1][1]))), 0xA3L)))) < g_125) == (*g_121)) || (*l_226)) & 0xEFC6L)) , p_41)), 4294967286UL)) || g_116[0][4][3]))) || (*l_280));
                        if ((*p_39))
                            break;
                    }
                }
                for (g_135 = 0; (g_135 <= 3); g_135 += 1)
                {
                    int l_283 = 1L;
                    int l_284 = 0xA6FE4625L;
                    int l_285 = 1L;
                    union U2 l_303 = {1L};
                    int i, j;
                    for (l_227 = 2; (l_227 >= 0); l_227 -= 1)
                    {
                        int **l_281 = &l_228;
                        int i, j;
                        if (g_143[l_227][g_82])
                            break;
                        (*l_281) = &l_227;
                        g_286++;
                        if (l_254)
                            goto lbl_289;
                    }
                    (*g_121) &= ((safe_div_func_uint8_t_u_u((func_47(&g_62, (g_143[g_135][p_38.f0] , (g_232 <= p_38.f0))) != ((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((((p_38.f0 , ((*l_280) = (safe_add_func_uint16_t_u_u(g_140, ((void*)0 != l_298))))) | 0xD218EFC8L) >= (*l_225)) != 0x2CL), g_110[1][0])) || 0UL), 1)) , p_38.f0)), g_147[3][0][1])) <= (*l_229));
                    (*l_298) = (func_47(((safe_add_func_uint16_t_u_u(g_73, (l_302 , func_47((func_47(&g_217, (l_303 , (safe_add_func_int32_t_s_s((*g_121), func_47(l_306, p_38.f0))))) , &g_62), (*l_225))))) , (void*)0), p_41) , &g_68);
                }
                (*l_280) = (safe_lshift_func_uint8_t_u_s((l_271 ^ (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((*l_229), (((0x590ADC0FL || (!0x46AEDE69L)) , func_47(l_313, p_41)) <= ((&g_62 == &g_139) > (*l_225))))), 65535UL))), 3));
            }
            for (g_97.f0 = (-23); (g_97.f0 != 0); ++g_97.f0)
            {
                const int *l_316[8] = {&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62};
                int i;
                return &g_147[2][0][0];
            }
            l_318 = (l_271 , &p_41);
            (*l_318) = (*p_39);
        }
    }
    (*g_121) ^= 0xAE7726E6L;
    return &g_62;
}







static union U1 func_42(int p_43, unsigned char p_44)
{
    unsigned l_91 = 4294967295UL;
    int *l_200 = &g_62;
    unsigned short l_212 = 0UL;
    const int l_218 = 3L;
    union U2 *l_219 = &g_68;
    char *l_220 = &g_140;
    int l_221[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    int *l_222 = &g_110[2][0];
    int **l_223 = (void*)0;
    int **l_224 = &g_108;
    int i;
    for (g_53 = 2; (g_53 >= 0); g_53 -= 1)
    {
        int l_90 = 1L;
        int i;
        (*g_121) = func_55(g_20[g_53], func_47(func_58(g_20[g_53]), (safe_add_func_uint32_t_u_u(((void*)0 != &g_20[g_53]), (((((safe_sub_func_int8_t_s_s((l_90 ^= p_44), (g_93 ^= ((l_91 , (g_92 = func_47(((+(l_91 >= ((0x106FL && l_91) , g_80))) , &g_11), g_20[g_53]))) > g_20[g_53])))) < 65532UL) != p_44) < p_43) || g_11)))));
        if (p_43)
        {
            union U1 l_199 = {0xA84FL};
            for (g_139 = 0; (g_139 == (-27)); g_139--)
            {
                for (l_90 = 0; (l_90 != 26); l_90++)
                {
                    const int *l_198 = &g_139;
                    const int **l_197 = &l_198;
                    for (g_82 = 0; (g_82 < 37); g_82++)
                    {
                        int *l_177 = &g_62;
                        int *l_178 = &g_62;
                        int *l_179 = &g_62;
                        int *l_180 = (void*)0;
                        int *l_181 = &g_62;
                        int *l_182 = &g_62;
                        int *l_183 = &g_62;
                        int *l_184 = &g_62;
                        int *l_185 = (void*)0;
                        int *l_186 = &g_62;
                        int *l_187 = &g_62;
                        int *l_188 = &g_62;
                        int *l_189 = &g_62;
                        int *l_190 = (void*)0;
                        int *l_191 = (void*)0;
                        int *l_192 = (void*)0;
                        int *l_193[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_193[i] = &g_62;
                        g_194--;
                        return g_97;
                    }
                    (*l_197) = &g_147[2][0][0];
                    (*l_197) = (*l_197);
                }
                return l_199;
            }
        }
        else
        {
            unsigned *l_203 = &g_157;
            l_200 = func_58(g_143[2][2]);
            (*g_121) ^= ((safe_lshift_func_int8_t_s_s(((void*)0 == &g_121), p_43)) == ((*l_203) = g_53));
        }
    }
    for (g_141 = (-4); (g_141 <= 27); g_141++)
    {
        unsigned char l_208 = 0x9DL;
        short *l_209 = (void*)0;
        int l_210 = 0x57B76DF0L;
        int *l_211 = &g_139;
        int *l_215 = &g_110[2][0];
        int *l_216 = &g_217;
        (*l_216) ^= func_47(&g_62, ((*l_215) = (((l_210 = l_208) | (((*l_211) ^= (*g_121)) > (g_157 = (p_44 , (l_212 && (0x4CF03032L || (safe_lshift_func_uint8_t_u_s(func_47(l_200, ((void*)0 == l_209)), p_43)))))))) , g_53)));
    }
    (*l_224) = func_58(((*l_222) = func_55(p_43, ((l_221[0] |= (((*l_200) ^ ((p_43 > ((*l_220) ^= (func_47(&g_11, (l_218 & ((g_97 , &g_68) == l_219))) <= (*l_200)))) | 0x3591L)) > 0x15D1E8AEL)) <= g_168))));
    return g_97;
}







static unsigned func_47(int * p_48, int p_49)
{
    int l_54 = 1L;
    return l_54;
}







static int func_55(const unsigned char p_56, unsigned p_57)
{
    int *l_96[9][10][2] = {{{(void*)0,&g_11},{&g_11,(void*)0},{&g_62,&g_62},{&g_62,&g_62},{&g_11,&g_11},{&g_62,&g_11},{&g_11,&g_62},{&g_62,&g_62},{&g_62,(void*)0},{&g_11,&g_11}},{{(void*)0,&g_11},{(void*)0,(void*)0},{&g_62,&g_62},{&g_62,(void*)0},{(void*)0,&g_11},{(void*)0,&g_11},{&g_11,(void*)0},{&g_62,&g_11},{&g_11,&g_62},{&g_62,(void*)0}},{{&g_62,(void*)0},{&g_62,&g_62},{&g_11,&g_11},{(void*)0,&g_62},{&g_62,&g_11},{&g_62,(void*)0},{(void*)0,&g_62},{&g_11,(void*)0},{&g_11,&g_62},{(void*)0,(void*)0}},{{&g_62,&g_11},{&g_62,&g_62},{(void*)0,&g_11},{&g_11,&g_62},{&g_62,(void*)0},{&g_62,(void*)0},{&g_62,&g_62},{&g_11,&g_11},{(void*)0,&g_62},{&g_62,&g_11}},{{&g_62,(void*)0},{(void*)0,&g_62},{&g_11,(void*)0},{&g_11,&g_62},{(void*)0,(void*)0},{&g_62,&g_11},{&g_62,&g_62},{(void*)0,&g_11},{&g_11,&g_62},{&g_62,(void*)0}},{{&g_62,(void*)0},{&g_62,&g_62},{&g_11,&g_11},{(void*)0,&g_62},{&g_62,&g_11},{&g_62,(void*)0},{(void*)0,&g_62},{&g_11,(void*)0},{&g_11,&g_62},{(void*)0,(void*)0}},{{&g_62,&g_11},{&g_62,&g_62},{(void*)0,&g_11},{&g_11,&g_62},{&g_62,(void*)0},{&g_11,&g_62},{(void*)0,&g_11},{&g_62,&g_62},{(void*)0,(void*)0},{(void*)0,&g_62}},{{(void*)0,&g_62},{&g_11,(void*)0},{&g_62,(void*)0},{&g_62,(void*)0},{&g_11,&g_62},{(void*)0,&g_62},{(void*)0,(void*)0},{(void*)0,&g_62},{&g_62,&g_11},{(void*)0,&g_62}},{{&g_11,&g_62},{(void*)0,&g_11},{&g_62,&g_62},{(void*)0,(void*)0},{(void*)0,&g_62},{(void*)0,&g_62},{&g_11,(void*)0},{&g_62,(void*)0},{&g_62,(void*)0},{&g_11,&g_62}}};
    union U2 *l_105 = &g_68;
    char *l_161 = &g_20[1];
    int i, j, k;
    for (p_57 = 0; (p_57 <= 2); p_57 += 1)
    {
        union U2 *l_104 = (void*)0;
        unsigned l_106 = 0x9528C71BL;
        int l_111 = (-3L);
        union U1 *l_130[1][4];
        int *l_153 = &g_139;
        int l_167 = 0xDE08B522L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_130[i][j] = (void*)0;
        }
        for (g_82 = 0; (g_82 <= 2); g_82 += 1)
        {
            unsigned l_103[3];
            int l_123 = 5L;
            const int *l_146[2][9] = {{(void*)0,&g_147[2][0][0],&g_147[1][0][0],&g_147[0][1][0],&g_147[1][0][0],&g_147[2][0][0],(void*)0,(void*)0,&g_147[2][0][0]},{&g_147[0][1][0],&g_147[2][0][0],&g_147[0][1][1],&g_147[2][0][0],&g_147[0][1][0],&g_147[2][0][0],&g_147[2][0][0],&g_147[0][1][0],&g_147[2][0][0]}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_103[i] = 0UL;
            for (g_74 = 0; (g_74 <= 2); g_74 += 1)
            {
                int *l_94 = &g_11;
                union U1 *l_98 = &g_97;
                int l_138 = 0x8DDAE6ADL;
                int l_142 = (-4L);
                const int *l_149 = &l_123;
                const int **l_148 = &l_149;
                int i;
            }
        }
        if (g_20[p_57])
            continue;
        for (g_141 = 2; (g_141 >= 0); g_141 -= 1)
        {
            int **l_150 = (void*)0;
            const int *l_152 = &g_147[2][0][0];
            const int **l_151[10] = {&l_152,&l_152,&l_152,&l_152,&l_152,&l_152,&l_152,&l_152,&l_152,&l_152};
            int l_156 = 0x52396328L;
            int i;
            l_153 = (void*)0;
            for (g_82 = 0; (g_82 <= 2); g_82 += 1)
            {
                unsigned char l_166 = 0x19L;
                if ((*g_121))
                    break;
                l_96[1][0][0] = &g_62;
                for (g_93 = 2; (g_93 >= 0); g_93 -= 1)
                {
                    int l_160 = 0L;
                    for (g_92 = 0; (g_92 <= 2); g_92 += 1)
                    {
                        short l_154[6];
                        int l_155[1];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_154[i] = 0x9F2AL;
                        for (i = 0; i < 1; i++)
                            l_155[i] = 0xFB7190DCL;
                        (*g_121) = l_154[2];
                        if ((*g_121))
                            break;
                        --g_157;
                        (*g_121) = l_160;
                    }
                }
                l_167 = (g_157 && (g_30 , (((l_161 != (g_97 , &g_20[p_57])) & func_47(&l_156, p_56)) && ((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_57, 1L)), p_57)) & l_166))));
            }
            if ((*g_121))
                continue;
        }
        --g_168;
    }
    return p_56;
}







static int * func_58(int p_59)
{
    union U1 l_60[1][9] = {{{-1L},{0xD8A6L},{-1L},{-1L},{0xD8A6L},{-1L},{-1L},{0xD8A6L},{-1L}}};
    int l_63[10][10][2] = {{{0xBE72F236L,(-7L)},{0x354D1843L,0x354D1843L},{0x354D1843L,(-7L)},{0xBE72F236L,(-1L)},{0x354D1843L,0x9BB816E1L},{(-7L),0x354D1843L},{(-1L),(-1L)},{(-1L),0x354D1843L},{(-7L),0x9BB816E1L},{0x354D1843L,0x9BB816E1L}},{{(-7L),0x354D1843L},{(-1L),(-1L)},{(-1L),0x354D1843L},{(-7L),0x9BB816E1L},{0x354D1843L,0x9BB816E1L},{(-7L),0x354D1843L},{(-1L),(-1L)},{(-1L),0x354D1843L},{(-7L),0x9BB816E1L},{0x354D1843L,0x9BB816E1L}},{{(-7L),0x354D1843L},{(-1L),(-1L)},{(-1L),0x354D1843L},{(-7L),0x9BB816E1L},{0x354D1843L,0x9BB816E1L},{(-7L),0x354D1843L},{(-1L),(-1L)},{(-1L),0x354D1843L},{(-7L),0x9BB816E1L},{0x354D1843L,0x9BB816E1L}},{{(-7L),0x354D1843L},{(-1L),(-1L)},{(-1L),0x354D1843L},{(-7L),0x9BB816E1L},{0x354D1843L,0x9BB816E1L},{(-7L),0x354D1843L},{(-1L),(-1L)},{(-1L),0x354D1843L},{(-7L),0x9BB816E1L},{0x354D1843L,0x9BB816E1L}},{{(-7L),0x354D1843L},{(-1L),(-1L)},{(-1L),0x354D1843L},{(-7L),0x9BB816E1L},{0x354D1843L,0x9BB816E1L},{(-7L),0x354D1843L},{(-1L),(-1L)},{(-1L),0x354D1843L},{(-7L),0x9BB816E1L},{0x354D1843L,0x9BB816E1L}},{{(-7L),0x354D1843L},{(-1L),(-1L)},{(-7L),0xBE72F236L},{0x9BB816E1L,0x354D1843L},{0xBE72F236L,0x354D1843L},{0x9BB816E1L,0xBE72F236L},{(-7L),(-7L)},{(-7L),0xBE72F236L},{0x9BB816E1L,0x354D1843L},{0xBE72F236L,0x354D1843L}},{{0x9BB816E1L,0xBE72F236L},{(-7L),(-7L)},{(-7L),0xBE72F236L},{0x9BB816E1L,0x354D1843L},{0xBE72F236L,0x354D1843L},{0x9BB816E1L,0xBE72F236L},{(-7L),(-7L)},{(-7L),0xBE72F236L},{0x9BB816E1L,0x354D1843L},{0xBE72F236L,0x354D1843L}},{{0x9BB816E1L,0xBE72F236L},{(-7L),(-7L)},{(-7L),0xBE72F236L},{0x9BB816E1L,0x354D1843L},{0xBE72F236L,0x354D1843L},{0x9BB816E1L,0xBE72F236L},{(-7L),(-7L)},{(-7L),0xBE72F236L},{0x9BB816E1L,0x354D1843L},{0xBE72F236L,0x354D1843L}},{{0x9BB816E1L,0xBE72F236L},{(-7L),(-7L)},{(-7L),0xBE72F236L},{0x9BB816E1L,0x354D1843L},{0xBE72F236L,0x354D1843L},{0x9BB816E1L,0xBE72F236L},{(-7L),(-7L)},{(-7L),0xBE72F236L},{0x9BB816E1L,0x354D1843L},{0xBE72F236L,0x354D1843L}},{{0x9BB816E1L,0xBE72F236L},{(-7L),(-7L)},{(-7L),0xBE72F236L},{0x9BB816E1L,0x354D1843L},{0xBE72F236L,0x354D1843L},{0x9BB816E1L,0xBE72F236L},{(-7L),(-7L)},{(-7L),0xBE72F236L},{0x9BB816E1L,0x354D1843L},{0xBE72F236L,(-1L)}}};
    unsigned l_64 = 0x5A6EDB5BL;
    int i, j, k;
    for (p_59 = 0; (p_59 <= 0); p_59 += 1)
    {
        int *l_61[4][1];
        union U2 *l_67 = &g_68;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_61[i][j] = &g_62;
        }
        l_64--;
        for (g_62 = 0; (g_62 >= 0); g_62 -= 1)
        {
            union U2 **l_69 = (void*)0;
            union U2 *l_71 = &g_68;
            union U2 **l_70 = &l_71;
            union U2 *l_72 = (void*)0;
            union U2 *l_85 = (void*)0;
            l_72 = ((*l_70) = (l_67 = l_67));
            g_74++;
            for (g_73 = 0; (g_73 <= 0); g_73 += 1)
            {
                for (l_64 = 0; (l_64 <= 0); l_64 += 1)
                {
                    int l_78 = 0xCE9D1BBAL;
                    int i, j;
                    if (func_47(l_61[(g_73 + 1)][g_62], p_59))
                    {
                        int l_77 = 0L;
                        int i, j;
                        l_77 = g_53;
                    }
                    else
                    {
                        int l_79 = (-1L);
                        int l_81 = 0x3C80536DL;
                        int i, j;
                        ++g_82;
                        l_85 = l_67;
                        return &g_62;
                    }
                    if (g_53)
                        continue;
                    return &g_62;
                }
                return &g_62;
            }
        }
    }
    return &g_11;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_20[i], "g_20[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_110[i][j], "g_110[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_116[i][j][k], "g_116[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_143[i][j], "g_143[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_147[i][j][k], "g_147[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_422[i][j][k], "g_422[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
