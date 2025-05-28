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
   volatile short f0;
};

union U1 {
   int f0;
   const unsigned f1;
   const int f2;
   char * const volatile f3;
   short f4;
};


static volatile int g_3 = 0x5A9C4C8DL;
static int g_4[1][10] = {{0x91C5534BL,0x91C5534BL,0x91C5534BL,0x91C5534BL,0x91C5534BL,0x91C5534BL,0x91C5534BL,0x91C5534BL,0x91C5534BL,0x91C5534BL}};
static char *g_49[1] = {(void*)0};
static char g_51 = (-8L);
static int g_55[3][9][6] = {{{0x633EF28FL,0x4F412F3AL,0xA061FA46L,0L,0x633EF28FL,(-1L)},{1L,0x6798564DL,7L,0L,7L,0x6798564DL},{0x633EF28FL,0x2DC6606AL,0xC4855F07L,0x6798564DL,(-1L),0L},{0L,(-1L),7L,0xF6F6D779L,(-1L),0x1F903A79L},{(-1L),(-1L),0xA061FA46L,(-1L),(-1L),0L},{1L,0x2DC6606AL,0L,0x1F903A79L,7L,0x2DC6606AL},{(-1L),0x6798564DL,0xC4855F07L,0x2DC6606AL,0x633EF28FL,0x2DC6606AL},{0L,0x4F412F3AL,0L,0L,(-1L),0L},{0x633EF28FL,0L,0xA061FA46L,0x4F412F3AL,0x633EF28FL,0x1F903A79L}},{{1L,0L,7L,0x4F412F3AL,7L,0L},{0x633EF28FL,0xF6F6D779L,0xC4855F07L,0L,(-1L),0x6798564DL},{0L,0x1F903A79L,7L,0x2DC6606AL,(-1L),(-1L)},{(-1L),0x1F903A79L,0xA061FA46L,0x1F903A79L,(-1L),0x4F412F3AL},{1L,0xF6F6D779L,0L,(-1L),7L,0xF6F6D779L},{(-1L),0L,0xC4855F07L,0xF6F6D779L,0x633EF28FL,0xF6F6D779L},{0L,0L,0L,0x6798564DL,(-1L),0x4F412F3AL},{0x633EF28FL,0x4F412F3AL,0xA061FA46L,0L,0x633EF28FL,(-1L)},{1L,0x6798564DL,7L,0L,7L,0x6798564DL}},{{0x633EF28FL,0x2DC6606AL,0xC4855F07L,0x6798564DL,(-1L),0L},{0L,(-1L),7L,0xF6F6D779L,(-1L),0x1F903A79L},{(-1L),(-1L),0xA061FA46L,(-1L),(-1L),0L},{1L,0x2DC6606AL,0L,0x1F903A79L,7L,0x2DC6606AL},{(-1L),0x6798564DL,0xC4855F07L,0x2DC6606AL,0x633EF28FL,0x2DC6606AL},{0L,0x4F412F3AL,0L,0L,(-1L),0L},{0x633EF28FL,0L,0xA061FA46L,0x4F412F3AL,0x633EF28FL,0x1F903A79L},{1L,0L,7L,0x4F412F3AL,7L,0L},{0x633EF28FL,0xF6F6D779L,0xC4855F07L,0L,(-1L),0x6798564DL}}};
static volatile union U1 g_85 = {6L};
static int g_89 = 0x77405739L;
static int *g_102 = &g_89;
static int ** volatile g_101 = &g_102;
static union U0 g_104 = {1L};
static union U0 *g_106[2] = {&g_104,&g_104};
static union U0 ** volatile g_105 = &g_106[1];
static const volatile union U1 g_113 = {0x9369D405L};
static int ** volatile g_119 = &g_102;
static union U0 **g_124[5][7][5] = {{{&g_106[0],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[0]},{&g_106[1],&g_106[0],&g_106[1],&g_106[1],&g_106[0]},{&g_106[0],&g_106[1],&g_106[1],&g_106[0],&g_106[1]},{&g_106[1],&g_106[0],&g_106[1],&g_106[0],&g_106[1]}},{{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[0],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]}},{{&g_106[1],&g_106[0],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[0],&g_106[1],&g_106[1]},{&g_106[1],&g_106[0],&g_106[0],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[0],&g_106[1],&g_106[1],&g_106[1]}},{{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[0],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[0],&g_106[1],&g_106[1]},{&g_106[1],&g_106[0],&g_106[0],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]}},{{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[0],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[0],&g_106[0],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[0]},{&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]},{&g_106[1],&g_106[1],&g_106[1],&g_106[0],&g_106[1]}}};
static union U0 *** volatile g_123 = &g_124[0][0][4];
static int ** volatile g_129 = &g_102;
static volatile int * volatile g_131 = &g_3;
static int ** volatile g_147 = &g_102;
static union U0 g_154 = {6L};
static int ** volatile g_156 = &g_102;
static int ** volatile g_162[6][4][10] = {{{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102,(void*)0,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,(void*)0,&g_102,(void*)0,(void*)0,(void*)0,&g_102,(void*)0,&g_102},{(void*)0,&g_102,&g_102,&g_102,&g_102,(void*)0,(void*)0,&g_102,&g_102,(void*)0}},{{&g_102,&g_102,&g_102,&g_102,&g_102,(void*)0,&g_102,(void*)0,&g_102,&g_102},{(void*)0,&g_102,(void*)0,(void*)0,&g_102,(void*)0,&g_102,&g_102,(void*)0,(void*)0},{&g_102,&g_102,&g_102,(void*)0,&g_102,(void*)0,&g_102,&g_102,&g_102,&g_102},{&g_102,(void*)0,&g_102,&g_102,(void*)0,&g_102,&g_102,&g_102,&g_102,(void*)0}},{{(void*)0,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102},{(void*)0,(void*)0,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,(void*)0,&g_102},{&g_102,&g_102,&g_102,(void*)0,&g_102,&g_102,(void*)0,&g_102,(void*)0,(void*)0},{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102}},{{&g_102,(void*)0,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,(void*)0,&g_102,&g_102,(void*)0,&g_102,&g_102,(void*)0},{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,(void*)0,(void*)0,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102}},{{&g_102,&g_102,(void*)0,(void*)0,&g_102,&g_102,(void*)0,&g_102,&g_102,(void*)0},{(void*)0,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102,(void*)0,&g_102,&g_102,&g_102,&g_102},{(void*)0,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102}},{{&g_102,&g_102,&g_102,&g_102,(void*)0,&g_102,(void*)0,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,(void*)0,&g_102,&g_102,(void*)0},{(void*)0,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,(void*)0}}};
static union U1 g_167 = {0xE06BE9B9L};
static int ** volatile g_169 = &g_102;
static unsigned short g_186 = 1UL;
static int g_198 = (-6L);
static int * volatile g_213 = (void*)0;
static union U0 g_214[2] = {{0x3EE8L},{0x3EE8L}};
static int ** volatile g_221 = &g_102;
static volatile union U1 g_243 = {0xC631CB2DL};
static int * const volatile g_258 = &g_55[0][0][0];
static union U0 g_262 = {0L};
static volatile union U1 g_264[3] = {{-1L},{-1L},{-1L}};
static union U1 g_267 = {0xB98DA613L};
static union U1 g_270[7][9][4] = {{{{-1L},{-7L},{0xDE261AEEL},{-1L}},{{0L},{-4L},{-6L},{-1L}},{{-2L},{-7L},{0x134D324BL},{0x68AEEBF0L}},{{-2L},{-1L},{-1L},{0L}},{{0x73957DEBL},{-1L},{0x704929BFL},{-9L}},{{6L},{0xE9515FB0L},{0L},{-2L}},{{0x6A29B00BL},{0L},{-2L},{0x5B964CB0L}},{{0x00C7D32CL},{2L},{0x5EF0559BL},{0x8D7EE5ECL}},{{0xC55A45B1L},{-4L},{-1L},{0x60FE3E48L}}},{{{0x67C20CE6L},{0x7F5B7600L},{0L},{0x00C7D32CL}},{{0x00C7D32CL},{0x60FE3E48L},{0x56E77CEEL},{-1L}},{{-1L},{-1L},{1L},{0xDE006D20L}},{{-4L},{0L},{3L},{-2L}},{{-1L},{-5L},{0x8525718FL},{-6L}},{{0L},{0xB1D9C952L},{0xF56E5E30L},{1L}},{{0xF7520031L},{0x79778BE3L},{-1L},{0x704929BFL}},{{0x7F5B7600L},{0xDE261AEEL},{6L},{-8L}},{{0xDE261AEEL},{0xB1D9C952L},{0xDE006D20L},{2L}}},{{{6L},{-1L},{0xAFEEC57FL},{-2L}},{{-1L},{1L},{1L},{0x5E6FC164L}},{{0x7EEF1BC8L},{-1L},{0x7EEF1BC8L},{-5L}},{{0x5E6FC164L},{0x134D324BL},{-4L},{0x00C7D32CL}},{{-1L},{1L},{0x7F7B9D44L},{0x134D324BL}},{{-1L},{-4L},{0x7F7B9D44L},{0L}},{{-1L},{-6L},{-4L},{0x5B964CB0L}},{{0x5E6FC164L},{-1L},{0x7EEF1BC8L},{-1L}},{{0x7EEF1BC8L},{-1L},{1L},{0xC55A45B1L}}},{{{-1L},{0x8D7EE5ECL},{0xAFEEC57FL},{-1L}},{{6L},{1L},{0xDE006D20L},{5L}},{{0xDE261AEEL},{0x3E0678FFL},{6L},{-1L}},{{0L},{0x5E6FC164L},{-1L},{-1L}},{{6L},{0L},{0xDE261AEEL},{1L}},{{-5L},{0x134D324BL},{1L},{0x8525718FL}},{{0x68AEEBF0L},{-1L},{0x5729E085L},{5L}},{{0x00C7D32CL},{1L},{0x7EEF1BC8L},{0x7F5B7600L}},{{1L},{-1L},{0xDE006D20L},{-2L}}},{{{-1L},{0x5B964CB0L},{-1L},{-1L}},{{5L},{0x48A5093EL},{-1L},{-1L}},{{0xB879C429L},{0L},{-2L},{0x56E77CEEL}},{{-1L},{-1L},{0x73957DEBL},{0x68AEEBF0L}},{{-8L},{0xF56E5E30L},{0x7EEF1BC8L},{0x8D7EE5ECL}},{{0x48A5093EL},{0xB1D9C952L},{6L},{6L}},{{0x68AEEBF0L},{0x68AEEBF0L},{0x117913F1L},{0x5B964CB0L}},{{-1L},{-1L},{0xDE261AEEL},{0x134D324BL}},{{1L},{-2L},{1L},{0xDE261AEEL}}},{{{0L},{-2L},{-7L},{0x134D324BL}},{{-2L},{-1L},{0L},{0x5B964CB0L}},{{1L},{0x68AEEBF0L},{-5L},{6L}},{{0xF7520031L},{0xB1D9C952L},{-4L},{0x8D7EE5ECL}},{{0x6A29B00BL},{0xF56E5E30L},{-1L},{0x68AEEBF0L}},{{0L},{-1L},{0x48A5093EL},{0x56E77CEEL}},{{0x7F5B7600L},{0L},{0xF4191A83L},{-1L}},{{0L},{0x48A5093EL},{0xC55A45B1L},{-1L}},{{1L},{0x5B964CB0L},{0x73957DEBL},{-1L}}},{{{0x7F7B9D44L},{0x7EEF1BC8L},{0x134D324BL},{-1L}},{{0x60FE3E48L},{-3L},{-2L},{2L}},{{0L},{0xC55A45B1L},{0xF4191A83L},{0L}},{{0x48A5093EL},{0xF56E5E30L},{0x68AEEBF0L},{0x5EF0559BL}},{{0x8525718FL},{-2L},{0L},{0x7EEF1BC8L}},{{0x3E4EA625L},{-5L},{-3L},{-1L}},{{0L},{0x56E77CEEL},{-1L},{0x5EF0559BL}},{{0xC55A45B1L},{-10L},{-4L},{1L}},{{0x965C8278L},{0xC55A45B1L},{0x117913F1L},{0xE9515FB0L}}}};
static union U0 g_271[8] = {{0x6E2AL},{0x6E2AL},{0x5A91L},{0x6E2AL},{0x6E2AL},{0x5A91L},{0x6E2AL},{0x6E2AL}};
static union U0 g_274 = {0x6C6DL};
static int ** volatile g_286[4][2][8] = {{{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,(void*)0,&g_102,&g_102,&g_102,&g_102}},{{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102}},{{&g_102,&g_102,&g_102,&g_102,&g_102,(void*)0,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102,(void*)0,&g_102,&g_102}},{{(void*)0,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102},{(void*)0,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102}}};
static union U0 g_289 = {1L};
static union U0 g_290 = {0xB72BL};
static volatile union U1 g_322 = {1L};
static const union U0 g_343 = {1L};
static const volatile union U1 g_346 = {7L};
static volatile char *g_366 = (void*)0;
static volatile char **g_365[7][9] = {{(void*)0,&g_366,&g_366,&g_366,(void*)0,&g_366,&g_366,&g_366,(void*)0},{(void*)0,&g_366,&g_366,&g_366,&g_366,&g_366,&g_366,(void*)0,(void*)0},{(void*)0,&g_366,(void*)0,&g_366,(void*)0,&g_366,(void*)0,&g_366,(void*)0},{(void*)0,&g_366,&g_366,&g_366,&g_366,(void*)0,&g_366,&g_366,(void*)0},{(void*)0,&g_366,&g_366,&g_366,(void*)0,&g_366,&g_366,&g_366,(void*)0},{&g_366,&g_366,&g_366,&g_366,(void*)0,&g_366,&g_366,(void*)0,&g_366},{(void*)0,&g_366,(void*)0,&g_366,(void*)0,&g_366,(void*)0,&g_366,(void*)0}};
static volatile char ** volatile *g_364 = &g_365[5][1];
static union U1 *g_384[6] = {(void*)0,(void*)0,&g_267,(void*)0,(void*)0,&g_267};
static union U1 **g_383 = &g_384[3];
static union U1 *** volatile g_382 = &g_383;
static volatile union U0 g_444[2] = {{0x5BCEL},{0x5BCEL}};
static volatile union U0 g_450 = {-5L};
static volatile union U0 g_459[3][3][3] = {{{{0x9342L},{0x9342L},{0xF267L}},{{0x7722L},{0L},{0x7722L}},{{0x9342L},{0xF267L},{0xF267L}}},{{{0xC5B8L},{0L},{0xC5B8L}},{{0x9342L},{0x9342L},{0xF267L}},{{0x7722L},{0L},{0x7722L}}},{{{0x9342L},{0xF267L},{0xF267L}},{{0xC5B8L},{0L},{0xC5B8L}},{{0x9342L},{0x9342L},{0xF267L}}}};
static volatile union U0 g_497 = {0x14CFL};
static union U0 g_503[7][5][7] = {{{{1L},{-1L},{0x1DFFL},{0L},{0xA0F4L},{0x8C3FL},{0xDCA0L}},{{0xCCD2L},{0xB324L},{1L},{0x2659L},{0x09F5L},{0x6EC7L},{0xD32BL}},{{0x9B78L},{0x5908L},{0x74B8L},{-5L},{6L},{0x280FL},{0x41AFL}},{{0xD292L},{0xCEC2L},{0xB324L},{1L},{-1L},{0L},{-1L}},{{0x32CCL},{1L},{1L},{0x32CCL},{-4L},{4L},{0L}}},{{{-10L},{0x67A1L},{0L},{0x9604L},{-2L},{0x073CL},{0xB324L}},{{-1L},{0x52B5L},{0x8049L},{-8L},{-1L},{0x05D2L},{0L}},{{0xCEC2L},{1L},{0xC70CL},{1L},{0x91B4L},{0xD292L},{-1L}},{{-9L},{-10L},{-1L},{0x105EL},{0x74B8L},{-5L},{0x41AFL}},{{0L},{0x073CL},{2L},{0x56B2L},{0x7A19L},{6L},{0xD32BL}}},{{{0L},{-1L},{0L},{0x74B8L},{0x1B0BL},{-5L},{0xDCA0L}},{{0x4582L},{-7L},{0xA5C2L},{0x4CF2L},{0x4CF2L},{0xA5C2L},{-7L}},{{0x5908L},{0x32CCL},{0xB2DAL},{0x280FL},{0x9B78L},{-5L},{-1L}},{{0x2659L},{0xD32BL},{6L},{0x7A19L},{0x56B2L},{2L},{0x073CL}},{{4L},{0xBBE6L},{1L},{0x280FL},{-1L},{0x5908L},{-5L}}},{{{0xD292L},{0x073CL},{1L},{0x4CF2L},{0xE6B8L},{0x4582L},{0x5C1DL}},{{-1L},{0x52B5L},{0xA0F4L},{0x297FL},{0xD10AL},{-8L},{0L}},{{1L},{0xE89AL},{0x136CL},{0x54AEL},{0xB324L},{0L},{0xA5C2L}},{{-1L},{0xD10AL},{-5L},{0xF216L},{0x1DFFL},{0x3DF0L},{0x3DF0L}},{{0xD8BAL},{0x136CL},{0xCCD2L},{0x136CL},{0xD8BAL},{1L},{0xE89AL}}},{{{0x32CCL},{-4L},{4L},{0L},{-9L},{0x62DCL},{-10L}},{{0x4CF2L},{-10L},{0x8271L},{0xD32BL},{0x073CL},{0x56B2L},{-2L}},{{0x32CCL},{0L},{0x74B8L},{0x3DF0L},{0x1B0BL},{-4L},{0xAB7DL}},{{0xD8BAL},{0xED50L},{1L},{-1L},{1L},{0x2659L},{1L}},{{-1L},{6L},{0L},{0xFA8CL},{0L},{9L},{-5L}}},{{{0x218FL},{0x9604L},{-1L},{-1L},{0xA5C2L},{6L},{0xD8BAL}},{{9L},{0xDCA0L},{0L},{0x9B78L},{1L},{0x9B78L},{0L}},{{-7L},{-7L},{0x7A19L},{0xC70CL},{0xB324L},{0x77EAL},{-1L}},{{-1L},{1L},{1L},{0x1DFFL},{-1L},{-1L},{-10L}},{{0x073CL},{0xED50L},{-7L},{1L},{0xB324L},{1L},{-10L}}},{{{-5L},{0x297FL},{0x9B78L},{0x62DCL},{1L},{0x8C3FL},{0x761CL}},{{0x5C1DL},{0xC70CL},{0x136CL},{1L},{0xA5C2L},{2L},{0L}},{{0L},{0xAB7DL},{6L},{0x41AFL},{0x8C3FL},{0xFA8CL},{0xBBE6L}},{{0xA5C2L},{1L},{1L},{0xE6B8L},{0L},{-1L},{0x30CEL}},{{0x3DF0L},{0xB2DAL},{-10L},{-10L},{0xB2DAL},{0x3DF0L},{0xF216L}}}};
static const int *g_505[3][8] = {{&g_55[0][0][0],&g_55[0][0][0],&g_267.f2,(void*)0,&g_270[5][5][2].f2,(void*)0,&g_267.f2,&g_55[0][0][0]},{&g_55[0][0][0],&g_55[2][1][2],&g_4[0][3],&g_267.f2,&g_267.f2,&g_4[0][3],&g_55[2][1][2],&g_55[0][0][0]},{&g_55[2][1][2],&g_89,&g_55[0][0][0],(void*)0,&g_55[0][0][0],&g_89,&g_55[2][1][2],&g_55[2][1][2]}};
static const int **g_510 = &g_505[1][5];
static const int *** volatile g_509[2][8][2] = {{{&g_510,&g_510},{&g_510,&g_510},{&g_510,&g_510},{&g_510,&g_510},{&g_510,&g_510},{&g_510,&g_510},{&g_510,&g_510},{&g_510,&g_510}},{{&g_510,&g_510},{&g_510,&g_510},{&g_510,&g_510},{&g_510,&g_510},{&g_510,&g_510},{&g_510,&g_510},{&g_510,&g_510},{&g_510,&g_510}}};
static const int *** volatile g_511 = &g_510;
static union U1 g_527 = {0x4604E601L};
static union U1 g_528 = {0x700D1B67L};
static union U0 g_550 = {5L};
static volatile short g_559 = 0L;
static const union U1 g_614 = {-3L};
static volatile union U0 g_637 = {0xF61EL};
static union U0 g_638 = {-4L};
static int *g_672[5] = {&g_4[0][2],&g_4[0][2],&g_4[0][2],&g_4[0][2],&g_4[0][2]};
static volatile union U0 g_673[4] = {{-1L},{-1L},{-1L},{-1L}};
static volatile union U1 g_676 = {0x3B15509CL};
static union U1 *** volatile g_677[8] = {&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383};
static union U1 *** const volatile g_678 = (void*)0;
static union U1 *** volatile g_679[2] = {(void*)0,(void*)0};
static union U1 *** volatile g_680 = &g_383;
static union U1 *g_734 = &g_167;
static volatile union U0 g_741 = {0x9730L};
static union U1 g_745[9][8] = {{{0L},{1L},{1L},{0L},{0xF5CD213CL},{0xD5D11CFAL},{-10L},{0L}},{{0L},{0x4E975CCDL},{0x3B6722DCL},{0L},{0L},{0L},{-1L},{1L}},{{0x0AB3A19BL},{0x4E975CCDL},{0L},{-10L},{0L},{0xD5D11CFAL},{0x4E975CCDL},{0xD5D11CFAL}},{{0x53D38075L},{1L},{-6L},{1L},{0x53D38075L},{-1L},{0L},{-6L}},{{2L},{0x53D38075L},{0xD2FF6074L},{0x3B6722DCL},{0L},{0x8BA4DAFFL},{-1L},{1L}},{{8L},{-10L},{0xD2FF6074L},{0L},{1L},{0xD2FF6074L},{-1L},{-1L}},{{2L},{0x3B6722DCL},{-6L},{-6L},{0x3B6722DCL},{2L},{0L},{0xD5D11CFAL}},{{0xD2FF6074L},{1L},{-10L},{0x53D38075L},{-1L},{1L},{1L},{0L}},{{0x4E975CCDL},{2L},{0xD5D11CFAL},{0x53D38075L},{-1L},{0L},{-1L},{0xD5D11CFAL}}};
static volatile union U1 g_758 = {0x8C4FA310L};
static union U1 g_762 = {0xC84D88B6L};
static union U0 g_769 = {0L};
static union U0 *** volatile g_782 = (void*)0;
static volatile union U0 g_789 = {0L};
static int *g_845 = &g_89;
static volatile union U0 g_848 = {1L};
static union U0 g_871 = {0L};
static unsigned short g_878 = 4UL;
static volatile union U0 g_883 = {0x8EC1L};
static union U1 g_907 = {0L};
static union U1 g_909 = {6L};
static char g_911 = (-7L);
static union U1 g_919 = {5L};
static volatile union U0 g_924 = {-9L};
static union U1 g_928 = {0xC4774574L};
static volatile union U1 g_981[3] = {{0x6DC1BD7BL},{0x6DC1BD7BL},{0x6DC1BD7BL}};
static unsigned g_1000[6][3] = {{1UL,8UL,8UL},{0xC649FF8AL,4294967295UL,0xC649FF8AL},{1UL,1UL,8UL},{0xCBD56531L,4294967295UL,0xCBD56531L},{1UL,8UL,8UL},{0xC649FF8AL,4294967295UL,0xC649FF8AL}};
static const union U1 g_1013 = {0x1CE173DDL};
static union U1 g_1014 = {1L};
static unsigned g_1015 = 0UL;
static union U1 g_1021 = {0L};
static const union U1 g_1022 = {5L};
static union U1 g_1060 = {0x502729F1L};
static union U0 *** const volatile g_1076[8] = {&g_124[0][0][4],&g_124[0][0][4],&g_124[0][0][4],&g_124[0][0][4],&g_124[0][0][4],&g_124[0][0][4],&g_124[0][0][4],&g_124[0][0][4]};
static union U1 g_1116 = {0xBB2DE62BL};
static union U1 *g_1115[5][5][3] = {{{&g_1021,&g_907,&g_527},{&g_1014,&g_1116,&g_267},{&g_1021,&g_1021,&g_1116},{&g_745[0][7],&g_167,&g_928},{&g_907,&g_1021,&g_907}},{{(void*)0,&g_1116,&g_167},{&g_527,&g_907,&g_907},{&g_167,&g_1021,&g_928},{(void*)0,&g_527,&g_1116},{&g_167,&g_267,&g_267}},{{&g_527,(void*)0,&g_527},{(void*)0,&g_267,(void*)0},{&g_907,&g_527,&g_1116},{(void*)0,&g_1116,&g_745[0][7]},{&g_1116,&g_527,(void*)0}},{{(void*)0,(void*)0,&g_928},{&g_1116,&g_1116,&g_527},{(void*)0,&g_1021,&g_1014},{&g_527,&g_1116,&g_527},{&g_745[0][7],(void*)0,&g_267}},{{&g_928,&g_527,&g_527},{&g_267,&g_1116,&g_1014},{&g_907,&g_928,&g_527},{&g_267,&g_528,&g_928},{&g_928,&g_907,(void*)0}}};
static const int ***g_1129 = &g_510;
static volatile union U1 g_1156 = {0x9B46D49BL};
static union U1 g_1192 = {0x4EE03035L};
static volatile union U1 g_1218 = {0xE381C013L};
static volatile union U1 g_1248 = {0xECA29683L};
static union U1 g_1263 = {-10L};
static union U1 g_1320 = {0L};
static union U1 g_1361[9] = {{0xC5191281L},{0x6F368554L},{0xC5191281L},{0x6F368554L},{0xC5191281L},{0x6F368554L},{0xC5191281L},{0x6F368554L},{0xC5191281L}};
static union U1 g_1370 = {0L};
static union U0 ** volatile g_1376 = &g_106[0];
static union U1 g_1383 = {1L};



static union U1 func_1(void);
static const int * func_5(int * p_6, char * p_7, int * p_8);
static int * func_11(int * p_12, int p_13, short p_14, short p_15);
static int * func_32(const unsigned short p_33, int * p_34, unsigned p_35, char p_36, char * p_37);
static const unsigned short func_38(unsigned short p_39, unsigned short p_40, int * p_41, char * p_42);
static unsigned short func_43(unsigned char p_44);
static union U0 func_45(char * p_46, char * p_47, int * p_48);
static int * func_58(int p_59, char * p_60, char p_61, short p_62);
static unsigned char func_63(unsigned short p_64, short p_65, unsigned p_66);
static int func_70(int * p_71, int p_72, const int p_73);
static union U1 func_1(void)
{
    char l_2[1];
    const int *l_1374 = &g_55[1][6][2];
    short l_1379 = 0xB8E0L;
    union U1 ***l_1380[7][2][10] = {{{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383},{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383}},{{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383},{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383}},{{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383},{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383}},{{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383},{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383}},{{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383},{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383}},{{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383},{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383}},{{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383},{&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383,&g_383}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2[i] = (-1L);
    for (g_4[0][2] = 0; (g_4[0][2] <= 0); g_4[0][2] += 1)
    {
        int *l_9 = &g_4[0][7];
        char *l_10 = &l_2[0];
        const int **l_1373[2];
        union U0 *l_1375 = &g_550;
        int i;
        for (i = 0; i < 2; i++)
            l_1373[i] = &g_505[2][5];
    }
    (*g_102) = (safe_add_func_uint32_t_u_u((l_1379 , 0x6E557FEBL), (l_1380[3][0][1] == (((safe_lshift_func_uint8_t_u_u(1UL, 7)) , (*l_1374)) , l_1380[1][0][5]))));
    return g_1383;


    }







static const int * func_5(int * p_6, char * p_7, int * p_8)
{
    short l_1264 = 7L;
    int **l_1277[10][4] = {{&g_845,&g_102,&g_845,&g_845},{&g_102,&g_102,&g_102,&g_102},{&g_102,&g_845,&g_845,&g_102},{&g_845,&g_102,&g_845,&g_845},{&g_102,&g_102,&g_102,&g_102},{&g_102,&g_845,&g_845,&g_102},{&g_845,&g_102,&g_845,&g_845},{&g_102,&g_102,&g_102,&g_102},{&g_102,&g_845,&g_845,&g_102},{&g_845,&g_102,&g_845,&g_845}};
    int *** const l_1276 = &l_1277[2][0];
    union U0 *l_1303 = &g_262;
    char *l_1341 = &g_51;
    char l_1355 = 5L;
    unsigned l_1360 = 4294967295UL;
    int *l_1362 = &g_4[0][2];
    int * const l_1363 = &g_55[0][0][0];
    int **l_1364 = &g_672[0];
    int l_1367 = 0x7885E67DL;
    char l_1371 = 0x84L;
    unsigned short l_1372 = 6UL;
    int i, j;
    if (func_43(l_1264))
    {
        unsigned l_1271 = 0x36ADAF32L;
        (*g_845) = ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((l_1271 == 1UL), 15)), (*p_7))), (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(l_1264, 8)), ((l_1271 , l_1276) != &l_1277[0][2]))))) | 0UL);
    }
    else
    {
        const unsigned l_1278 = 0x34AB3E0CL;
        union U0 *l_1305 = &g_503[0][0][1];
        int l_1313 = (-7L);
        union U1 *l_1318 = (void*)0;
        unsigned short l_1326 = 0UL;
        union U0 ***l_1327 = &g_124[0][0][4];
        union U1 **l_1336[5][2][1] = {{{&g_384[3]},{&g_384[3]}},{{(void*)0},{&g_1115[2][2][0]}},{{(void*)0},{&g_384[3]}},{{&g_384[3]},{(void*)0}},{{&g_1115[2][2][0]},{(void*)0}}};
        int i, j, k;
        (*g_156) = p_6;

        ;
        (*p_8) = (l_1278 == l_1278);
        for (g_878 = 0; (g_878 > 3); g_878 = safe_add_func_int16_t_s_s(g_878, 5))
        {
            unsigned l_1283[2];
            const int *l_1354 = &g_528.f2;
            int i;
            for (i = 0; i < 2; i++)
                l_1283[i] = 4294967292UL;
            (*p_8) = (safe_lshift_func_uint8_t_u_s((func_38((0x24L == func_38((l_1278 , l_1283[0]), g_459[1][0][1].f0, &g_89, &g_911)), (g_528.f4 & (*p_6)), &g_4[0][2], p_7) != l_1283[0]), 1));
        }
        return p_8;


    }






    (**l_1276) = ((((*p_6) == (safe_add_func_uint8_t_u_u(0xD7L, (safe_add_func_int8_t_s_s((-1L), (*p_7)))))) != l_1360) , (g_1361[5] , ((g_907.f2 && ((*l_1276) != (*l_1276))) , l_1362)));

    ;
    (*l_1364) = l_1363;


    (*l_1363) = (*p_8);
    return p_6;


}







static int * func_11(int * p_12, int p_13, short p_14, short p_15)
{
    int l_22 = 0L;
    int *l_27 = &l_22;
    union U0 **l_899 = (void*)0;
    short l_900[7][3] = {{(-1L),0xBA99L,1L},{0xBA99L,(-1L),(-1L)},{1L,(-1L),0x1799L},{0x1A64L,0xBA99L,0x008DL},{1L,1L,0x008DL},{0xBA99L,0x1A64L,0x1799L},{(-1L),1L,(-1L)}};
    short l_901 = 0x6EDEL;
    unsigned short l_978 = 7UL;
    char *l_994[5][9][5] = {{{&g_911,&g_911,&g_911,(void*)0,&g_911},{&g_911,&g_51,&g_911,&g_51,&g_911},{(void*)0,&g_51,&g_51,(void*)0,&g_911},{&g_911,&g_911,&g_911,&g_51,&g_51},{&g_911,&g_51,(void*)0,&g_911,&g_911},{&g_51,&g_911,&g_911,&g_911,&g_51},{&g_51,&g_51,&g_51,&g_51,(void*)0},{&g_51,&g_51,&g_911,&g_51,&g_51},{(void*)0,&g_911,&g_911,&g_51,&g_911}},{{&g_51,&g_911,&g_51,&g_911,&g_51},{&g_51,&g_911,&g_911,&g_911,&g_911},{&g_51,(void*)0,&g_51,&g_51,&g_911},{&g_911,&g_51,&g_911,&g_911,&g_911},{&g_51,&g_51,&g_51,&g_51,&g_51},{&g_911,&g_51,&g_911,&g_51,&g_911},{&g_911,&g_51,&g_51,&g_911,&g_51},{&g_911,(void*)0,&g_51,&g_51,(void*)0},{(void*)0,&g_911,(void*)0,&g_51,&g_51}},{{&g_911,(void*)0,&g_911,&g_911,&g_911},{&g_911,&g_911,&g_51,&g_51,&g_51},{&g_911,&g_51,&g_911,&g_911,&g_911},{&g_51,&g_51,(void*)0,&g_911,&g_911},{&g_911,&g_911,&g_51,&g_51,&g_51},{&g_911,&g_51,&g_51,&g_51,&g_51},{&g_911,&g_911,&g_911,&g_51,&g_911},{&g_51,&g_911,&g_51,&g_911,&g_911},{&g_911,&g_51,&g_911,&g_51,&g_911}},{{&g_51,&g_51,&g_911,&g_51,&g_911},{&g_911,(void*)0,&g_51,(void*)0,&g_911},{&g_51,&g_911,&g_911,&g_911,&g_911},{&g_911,&g_51,&g_911,&g_51,&g_911},{&g_51,(void*)0,&g_911,&g_911,&g_911},{&g_51,&g_51,(void*)0,&g_911,&g_911},{&g_911,&g_51,&g_911,&g_911,&g_911},{(void*)0,(void*)0,&g_911,(void*)0,&g_911},{&g_911,&g_51,&g_51,&g_911,&g_911}},{{&g_911,&g_911,&g_911,&g_911,&g_51},{&g_51,&g_51,&g_51,&g_911,&g_911},{&g_911,&g_911,&g_911,&g_51,&g_911},{&g_911,&g_911,&g_51,&g_911,&g_51},{&g_911,&g_911,&g_911,(void*)0,&g_911},{&g_911,&g_51,&g_51,&g_51,&g_51},{&g_911,&g_51,&g_911,&g_51,&g_911},{&g_51,&g_51,&g_911,&g_911,&g_51},{(void*)0,(void*)0,&g_911,(void*)0,&g_911}}};
    union U1 **l_1030 = &g_384[3];
    unsigned char l_1132[7][3] = {{254UL,254UL,0x4CL},{7UL,0xF4L,7UL},{254UL,0x4CL,0x4CL},{255UL,0xF4L,255UL},{254UL,254UL,0x4CL},{7UL,0xF4L,7UL},{254UL,0x4CL,0x4CL}};
    char l_1146 = 0xD3L;
    unsigned l_1240 = 1UL;
    const char *l_1255 = (void*)0;
    int l_1262 = 0x99BBA1F2L;
    int i, j, k;
    (*l_27) = (~((safe_mod_func_uint32_t_u_u(((l_22 != l_22) , (l_22 ^ (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_15, 0x1DD2L)), 9)))), (g_4[0][4] ^ (p_14 & l_22)))) == (l_22 & g_4[0][2])));
    for (l_22 = (-9); (l_22 != 3); l_22 = safe_add_func_uint8_t_u_u(l_22, 6))
    {
        union U0 *l_794 = (void*)0;
        union U0 **l_793 = &l_794;
        int l_816 = 0xD62777F7L;
        int ** const l_882 = &g_672[0];
        int ** const *l_881 = &l_882;
        char *l_884 = &g_51;
        unsigned l_898 = 0UL;
        unsigned l_916[4][7] = {{3UL,0xE5E8521DL,3UL,0xE5E8521DL,3UL,0xE5E8521DL,3UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{3UL,0xE5E8521DL,3UL,0xE5E8521DL,3UL,0xE5E8521DL,3UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL}};
        union U1 *l_927 = &g_928;
        short l_935 = 1L;
        union U1 ***l_990 = (void*)0;
        int l_995 = (-1L);
        union U0 **l_1075 = &g_106[1];
        int i, j;
        for (p_14 = 0; (p_14 <= 15); p_14 = safe_add_func_uint8_t_u_u(p_14, 1))
        {
            unsigned short l_792 = 0x0DFEL;
            int *l_815 = &g_4[0][2];
            char *l_817 = (void*)0;
            g_3 = 0x550E3526L;
        }
    }
    for (p_13 = 0; (p_13 <= (-19)); p_13--)
    {
        int l_1125 = 2L;
        char *l_1126 = &g_911;
        char l_1127 = 0xD3L;
        int *l_1128[1];
        union U1 * const **l_1138 = (void*)0;
        unsigned l_1155 = 6UL;
        unsigned short l_1161[1];
        unsigned l_1170 = 4294967291UL;
        char *l_1204[3];
        const union U1 *l_1249 = &g_267;
        int **l_1261 = &g_102;
        int ***l_1260[2];
        int i;
        for (i = 0; i < 1; i++)
            l_1128[i] = &l_22;
        for (i = 0; i < 1; i++)
            l_1161[i] = 0x31B4L;
        for (i = 0; i < 3; i++)
            l_1204[i] = &g_911;
        for (i = 0; i < 2; i++)
            l_1260[i] = &l_1261;
    }
    return (*g_169);


}







static int * func_32(const unsigned short p_33, int * p_34, unsigned p_35, char p_36, char * p_37)
{
    union U1 *l_821 = &g_745[7][1];
    int l_823 = 0x8AA6E1BBL;
    int l_824 = 0x9E396A49L;
    int l_853 = 7L;
    char * const *l_856 = &g_49[0];
    char * const **l_855 = &l_856;
    for (p_35 = 0; (p_35 <= 7); p_35 += 1)
    {
        union U1 *l_818[6] = {&g_528,&g_528,&g_528,&g_528,&g_528,&g_528};
        int l_820 = 0x9D390AB1L;
        char *l_872 = (void*)0;
        unsigned l_880[6] = {8UL,5UL,8UL,8UL,5UL,8UL};
        int i;
        (*g_510) = (void*)0;
        for (g_51 = 1; (g_51 >= 0); g_51 -= 1)
        {
            const int l_819[2][9][4] = {{{0x78D86CC5L,0x863DDFFCL,0x56AB04D4L,0L},{1L,0x863DDFFCL,0x863DDFFCL,1L},{0x863DDFFCL,1L,0x78D86CC5L,0x359B9672L},{0x863DDFFCL,0x78D86CC5L,0x863DDFFCL,0x56AB04D4L},{1L,0x359B9672L,0x56AB04D4L,0x56AB04D4L},{0x78D86CC5L,0x78D86CC5L,0L,0x359B9672L},{0x359B9672L,1L,0L,1L},{0x78D86CC5L,1L,0x359B9672L,0x56AB04D4L},{0x750BF2ADL,1L,1L,0x750BF2ADL}},{{1L,0x750BF2ADL,0L,0x863DDFFCL},{1L,0L,1L,0x359B9672L},{0x750BF2ADL,0x863DDFFCL,0x359B9672L,0x359B9672L},{0L,0L,0x56AB04D4L,0x863DDFFCL},{0x863DDFFCL,0x750BF2ADL,0x56AB04D4L,0x750BF2ADL},{0L,1L,0x359B9672L,0x56AB04D4L},{0x750BF2ADL,1L,1L,0x750BF2ADL},{1L,0x750BF2ADL,0L,0x863DDFFCL},{1L,0L,1L,0x359B9672L}}};
            char *l_846[5];
            union U0 ***l_870 = &g_124[0][0][4];
            unsigned short l_875[9];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_846[i] = &g_51;
            for (i = 0; i < 9; i++)
                l_875[i] = 65528UL;
            l_818[3] = l_818[2];
            for (p_36 = 1; (p_36 >= 0); p_36 -= 1)
            {
                int i, j, k;
                l_820 = l_819[0][2][0];
            }
            if ((*p_34))
                break;
            for (p_36 = 1; (p_36 >= 0); p_36 -= 1)
            {
                int *l_843 = (void*)0;
                short l_847 = 0x6AC3L;
                int l_864[8][7] = {{0x1C486C4AL,0x652C55D3L,0L,0x1B286A82L,0L,0x9E8C2464L,0L},{0x1FE8A152L,0x75338D62L,(-8L),(-8L),0x75338D62L,0x1FE8A152L,0L},{0x1C486C4AL,0x652C55D3L,0L,0x1B286A82L,0L,0x9E8C2464L,0L},{0x1FE8A152L,0x75338D62L,(-8L),(-8L),0x75338D62L,0x1FE8A152L,0L},{0x1C486C4AL,0x652C55D3L,0L,0x1B286A82L,0L,0x9E8C2464L,0L},{0x1FE8A152L,0x75338D62L,(-8L),(-8L),0x75338D62L,0x1FE8A152L,0L},{0x1C486C4AL,0x652C55D3L,0L,0x1B286A82L,0L,0x9E8C2464L,0L},{0x1FE8A152L,0x75338D62L,(-8L),(-8L),0L,0x75338D62L,1L}};
                int i, j, k;
                if ((*p_34))
                {
                    union U1 *l_822 = (void*)0;
                    l_822 = l_821;

                    ;
                    l_824 = l_823;
                }
                else
                {
                    char l_832[6][7] = {{0x04L,3L,0x04L,3L,0x04L,3L,0x04L},{0L,0L,0L,0L,0L,0L,0L},{0x04L,3L,0x04L,3L,0x04L,3L,0x04L},{0L,0L,0L,0L,0L,0L,0L},{0x04L,3L,0x04L,3L,0x04L,3L,0x04L},{0L,0L,0L,0L,0L,0L,0L}};
                    unsigned short l_844 = 65529UL;
                    const unsigned l_854[8] = {0x4E30E6A1L,0xDA5A4A04L,0xDA5A4A04L,0x4E30E6A1L,0xDA5A4A04L,0xDA5A4A04L,0x4E30E6A1L,0xDA5A4A04L};
                    int i, j;
                    for (g_89 = 0; (g_89 <= 1); g_89 += 1)
                    {
                        char l_831 = 0x32L;
                        (*g_510) = func_58(((func_38((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((g_528.f4 && (safe_mod_func_uint32_t_u_u((((l_831 , l_832[4][1]) == (safe_add_func_uint16_t_u_u(p_35, (safe_sub_func_int16_t_s_s(1L, (func_38(l_819[0][2][0], (safe_div_func_uint32_t_u_u((!(safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(func_38(l_832[0][4], g_104.f0, l_843, &g_51), p_33)), l_844))), l_844)), g_845, l_846[1]) < l_847)))))) , 4294967295UL), 0xE46BD29FL))) >= p_36), g_89)), 12)), p_35, &l_824, &g_51) != 0UL) ^ 255UL), &l_831, l_832[3][2], g_167.f4);
                    }
                    if ((g_848 , ((*p_34) > ((((g_264[2].f0 , (void*)0) != l_855) | l_823) && g_243.f1))))
                    {
                        char l_859[3][7] = {{2L,2L,2L,2L,2L,2L,2L},{0L,0L,0L,0L,0L,0L,0L},{2L,2L,2L,2L,2L,2L,2L}};
                        int i, j;
                        (*g_845) = (*p_34);
                        if ((*g_131))
                            continue;
                        (*g_845) = (safe_mod_func_uint8_t_u_u((g_322.f1 & g_267.f1), l_859[2][6]));
                        (*g_131) = (g_267.f1 ^ (safe_add_func_int16_t_s_s(((l_819[1][5][1] , (safe_sub_func_int16_t_s_s((g_459[1][0][1].f0 | l_844), l_823))) > l_820), p_35)));
                    }
                    else
                    {
                        (*g_845) = 0x0551837CL;
                        l_864[1][4] = (*p_34);
                    }
                    for (l_847 = 0; (l_847 <= 7); l_847 += 1)
                    {
                        char l_869 = (-8L);
                        (*g_510) = func_58(p_36, (p_36 , &g_51), l_819[0][2][0], ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(0xA3L, p_33)), (((!(l_824 , (((*g_845) , &g_365[5][1]) != &g_365[5][1]))) != 0x80L) == 1UL))) >= l_869));
                        (*g_845) = (l_870 == &g_124[0][0][4]);
                        if (l_853)
                            continue;
                    }
                    (*g_510) = func_58((4294967295UL == (g_871 , 0xB45B9907L)), l_872, (p_35 > ((*p_34) && p_36)), l_824);
                }
                if ((*p_34))
                    continue;
                for (l_853 = 0; (l_853 <= 7); l_853 += 1)
                {
                    unsigned l_879 = 0x6B630BC2L;
                    for (g_198 = 2; (g_198 >= 0); g_198 -= 1)
                    {
                        int i, j, k;
                        (*g_510) = func_58(((((safe_lshift_func_uint16_t_u_u((((l_875[6] , (l_820 || l_853)) & func_63(p_36, g_186, l_820)) <= (safe_add_func_int16_t_s_s(p_35, ((1UL | 0x1B2CL) ^ g_878)))), p_35)) != 0xCC5DL) & 0x26DACC6FL) , l_879), &g_51, l_820, l_880[1]);
                        g_55[p_36][(g_51 + 6)][(g_51 + 1)] = (((&g_365[5][0] != (void*)0) == l_824) ^ 0UL);
                        (*g_510) = &l_819[0][7][3];
                    }
                    for (g_89 = 0; (g_89 <= 7); g_89 += 1)
                    {
                        (*g_131) = (func_38(g_637.f0, g_762.f2, &g_4[0][2], l_846[1]) && p_33);
                        return p_34;



                    }
                }
            }


        }
    }
    return p_34;


}







static const unsigned short func_38(unsigned short p_39, unsigned short p_40, int * p_41, char * p_42)
{
    unsigned char l_797 = 248UL;
    int l_813 = 0xF3EE811CL;
    int *l_814[7][7] = {{&g_4[0][1],&g_198,&g_89,&g_198,&g_4[0][1],&g_55[0][0][0],&g_55[0][0][0]},{&g_55[2][7][3],&g_4[0][6],&g_55[0][0][0],&g_4[0][6],&g_55[2][7][3],&g_4[0][9],&g_4[0][9]},{&g_4[0][1],&g_198,&g_89,&g_198,&g_4[0][1],&g_55[0][0][0],&g_55[0][0][0]},{(void*)0,&g_89,&g_4[0][9],&g_89,(void*)0,&g_55[2][7][3],&g_55[2][7][3]},{&g_198,(void*)0,&g_55[0][0][0],(void*)0,&g_198,&g_4[0][1],&g_4[0][1]},{(void*)0,&g_89,&g_4[0][9],&g_89,(void*)0,&g_55[2][7][3],&g_55[2][7][3]},{&g_198,(void*)0,&g_55[0][0][0],(void*)0,&g_198,&g_4[0][1],&g_4[0][1]}};
    int i, j;
    for (p_40 = 4; (p_40 > 8); ++p_40)
    {
        int *l_798 = (void*)0;
        if (l_797)
            break;
        (*g_510) = l_798;
        if (l_797)
            break;
    }
    (*g_131) = ((safe_sub_func_uint16_t_u_u(65529UL, ((l_797 ^ ((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((l_797 > (safe_lshift_func_int16_t_s_u(l_797, g_758.f2))), (safe_add_func_uint16_t_u_u(0UL, (safe_mod_func_uint16_t_u_u(((((p_39 || (((((l_813 > (-1L)) != p_39) , p_40) , l_813) >= p_40)) ^ l_797) > g_186) >= g_527.f4), 0x2A64L)))))), p_39)) >= p_40)) | p_40))) != p_40);
    return p_40;
}







static unsigned short func_43(unsigned char p_44)
{
    char *l_50 = &g_51;
    int *l_52 = &g_4[0][3];
    int * volatile *l_295 = &g_102;
    union U0 *l_312[10] = {&g_214[0],(void*)0,(void*)0,&g_214[0],&g_214[0],&g_214[0],(void*)0,(void*)0,&g_214[0],&g_214[0]};
    unsigned char l_316 = 251UL;
    union U1 *l_330 = &g_270[5][5][2];
    union U1 **l_329 = &l_330;
    const char *l_363 = &g_51;
    const char **l_362 = &l_363;
    const char ***l_361 = &l_362;
    unsigned l_412[5];
    const int l_420 = (-3L);
    unsigned short l_445 = 65535UL;
    const union U0 *l_485 = &g_289;
    const union U0 **l_484[9] = {&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485};
    const union U0 ***l_483[4][5] = {{&l_484[4],&l_484[4],&l_484[4],&l_484[4],&l_484[4]},{&l_484[3],&l_484[2],&l_484[3],&l_484[2],&l_484[3]},{&l_484[4],&l_484[4],&l_484[4],&l_484[4],&l_484[4]},{&l_484[3],&l_484[2],&l_484[3],&l_484[2],&l_484[3]}};
    const int l_501[3] = {(-9L),(-9L),(-9L)};
    char l_514 = 0xEDL;
    int l_515 = 0xF0056F20L;
    unsigned short l_601 = 0x7755L;
    int *l_703[6][5] = {{&g_4[0][9],(void*)0,&g_55[2][7][4],&g_55[0][3][1],&g_55[0][3][1]},{&g_55[0][3][1],&g_89,&g_55[0][3][1],&g_55[0][0][0],&g_55[0][0][0]},{&g_55[2][7][4],(void*)0,&g_4[0][9],&g_55[0][0][0],&g_55[0][0][0]},{&g_198,&g_55[2][3][1],&g_55[2][3][1],&g_198,&g_55[0][3][1]},{&g_89,&g_198,&g_4[0][9],&g_55[0][0][0],(void*)0},{&g_55[0][0][0],&g_55[2][3][1],&g_89,&g_55[2][3][1],&g_55[0][0][0]}};
    unsigned l_726 = 1UL;
    const char l_781[7][3][8] = {{{0xA3L,(-1L),0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L)},{0xA3L,(-1L),0x35L,(-1L),0xA3L,7L,0xA3L,(-1L)},{0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L),0x05L,(-1L)}},{{0xA3L,(-1L),0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L)},{0xA3L,(-1L),0x35L,(-1L),0xA3L,7L,0xA3L,(-1L)},{0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L),0x05L,(-1L)}},{{0xA3L,(-1L),0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L)},{0xA3L,(-1L),0x35L,(-1L),0xA3L,7L,0xA3L,(-1L)},{0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L),0x05L,(-1L)}},{{0xA3L,(-1L),0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L)},{0xA3L,(-1L),0x35L,(-1L),0xA3L,7L,0xA3L,(-1L)},{0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L),0x05L,(-1L)}},{{0xA3L,(-1L),0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L)},{0xA3L,(-1L),0x35L,(-1L),0xA3L,7L,0xA3L,(-1L)},{0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L),0x05L,(-1L)}},{{0xA3L,(-1L),0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L)},{0xA3L,(-1L),0x35L,(-1L),0xA3L,7L,0xA3L,(-1L)},{0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L),0x05L,(-1L)}},{{0xA3L,(-1L),0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L)},{0xA3L,(-1L),0x35L,(-1L),0xA3L,7L,0xA3L,(-1L)},{0x05L,(-1L),0x05L,(-1L),0xA3L,(-1L),0x05L,(-1L)}}};
    union U0 **l_783[10] = {&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]};
    short l_788[1][8] = {{0x0F9BL,0L,0x0F9BL,0L,0x0F9BL,0L,0x0F9BL,0L}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_412[i] = 0x2E2E6C88L;
    if ((func_45(g_49[0], l_50, l_52) , (((func_63(p_44, (((g_290 , (+(safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((0xF491L > g_167.f1) > g_198), 4)), 0L)))) <= p_44) , 0xC61DL), p_44) ^ 0x17L) , (*l_52)) ^ 0x5DL)))
    {
        int l_300 = 0L;
        unsigned short l_305 = 1UL;
        union U0 **l_313 = &g_106[1];
        l_295 = &g_213;

        ;
        (*l_313) = (func_63(g_89, p_44, (((safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(l_300, 1)) < (safe_add_func_uint16_t_u_u(p_44, (safe_div_func_uint32_t_u_u(g_113.f1, l_300))))), (l_305 ^ (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((*l_52), l_305)), g_4[0][6])) && g_167.f0), 13))))) || 1L) ^ 255UL)) , l_312[5]);


    }
    else
    {
        short l_314 = (-5L);
        int l_315 = 0x1F03AA0DL;
        l_315 = l_314;
    }



    ;
    if ((((l_316 , (((safe_unary_minus_func_int32_t_s(((*l_52) != ((p_44 ^ (safe_mod_func_uint16_t_u_u((*l_52), 1L))) | 0x7DL)))) >= ((p_44 && g_85.f0) > g_167.f1)) || p_44)) <= 1L) == p_44))
    {
        int l_323 = 7L;
        int *l_324 = &g_55[2][2][1];
        char *l_342 = &g_51;
        union U0 ** const *l_357 = &g_124[0][2][1];
        int l_360 = 0L;
        int *l_367 = &g_198;
        int *l_460[2][9][6] = {{{&l_360,&g_89,&g_55[2][0][0],&l_360,&g_55[2][0][0],&g_89},{&g_4[0][2],&g_89,(void*)0,&g_4[0][2],&g_55[2][0][0],&g_55[2][0][0]},{(void*)0,&g_89,&g_89,(void*)0,&g_55[2][0][0],(void*)0},{&l_360,&g_89,&g_55[2][0][0],&l_360,&g_55[2][0][0],&g_89},{&g_4[0][2],&g_89,(void*)0,&g_4[0][2],&g_55[2][0][0],&g_55[2][0][0]},{(void*)0,&g_89,&g_89,(void*)0,&g_55[2][0][0],(void*)0},{&l_360,&g_89,&g_55[2][0][0],&l_360,&g_55[2][0][0],&g_89},{&g_4[0][2],&g_89,(void*)0,&g_4[0][2],&g_55[2][0][0],&g_55[2][0][0]},{(void*)0,&g_89,&g_89,(void*)0,&g_55[2][0][0],(void*)0}},{{&l_360,&g_89,&g_55[2][0][0],&l_360,&g_55[2][0][0],&g_89},{&g_4[0][2],&g_89,(void*)0,&g_4[0][2],&g_55[2][0][0],&g_55[2][0][0]},{(void*)0,&g_89,&g_89,(void*)0,&g_55[2][0][0],(void*)0},{&l_360,&g_89,&g_55[2][0][0],&l_360,&g_55[2][0][0],&g_89},{&g_4[0][2],&g_89,(void*)0,&g_4[0][2],&g_55[2][0][0],&g_55[2][0][0]},{(void*)0,&g_89,&g_89,(void*)0,&g_55[2][0][0],(void*)0},{&l_360,&g_89,&g_55[2][0][0],&l_360,&g_55[2][0][0],&g_89},{(void*)0,(void*)0,&g_55[2][0][0],(void*)0,&g_89,&g_89},{&l_360,(void*)0,(void*)0,&l_360,&g_89,&g_55[2][0][0]}}};
        union U0 * const *l_512 = &l_312[5];
        int i, j, k;
        if ((((((l_323 & (g_270[5][5][2].f4 || p_44)) < (g_267.f4 <= 0xB779L)) <= (*l_52)) == (*l_324)) <= 0x66L))
        {
            int l_332 = (-1L);
            for (p_44 = 0; (p_44 == 54); p_44 = safe_add_func_int16_t_s_s(p_44, 8))
            {
                union U1 * const *l_331 = &l_330;
                int l_333[6][2] = {{0xB4442B03L,0xB4442B03L},{0xB4442B03L,0xB4442B03L},{0xB4442B03L,0xB4442B03L},{0xB4442B03L,0xB4442B03L},{0xB4442B03L,0xB4442B03L},{0xB4442B03L,0xB4442B03L}};
                int i, j;
                l_333[2][1] = (safe_sub_func_int32_t_s_s(0xAEDDC00BL, (((l_329 != l_331) || l_332) > (func_63((*l_324), (p_44 , (l_333[2][1] <= ((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((0L != func_63(p_44, g_264[2].f0, p_44)) | 0x1AL), (*l_324))), 0x7FC44B10L)), (*l_52))) != 1L))), l_332) , (*l_324)))));
            }
            for (l_323 = (-20); (l_323 >= (-11)); l_323 = safe_add_func_int32_t_s_s(l_323, 8))
            {
                return l_332;
            }
            if (func_63(p_44, func_63((&g_51 == (g_343 , &g_51)), p_44, g_270[5][5][2].f1), p_44))
            {
                unsigned char l_347 = 247UL;
                for (g_198 = (-3); (g_198 > 22); g_198++)
                {
                    for (l_332 = 0; (l_332 <= 3); l_332 += 1)
                    {
                        unsigned l_348 = 1UL;
                        (*l_324) = (g_346 , func_63(p_44, l_347, g_243.f4));
                        (*l_324) = (g_322.f2 || l_348);
                    }
                }
                (*l_295) = (void*)0;
                for (g_186 = 0; (g_186 < 55); g_186 = safe_add_func_int8_t_s_s(g_186, 6))
                {
                    short l_351 = 0x6A46L;
                    (*l_324) = l_351;
                    return l_351;
                }
            }
            else
            {
                unsigned l_354 = 4UL;
                for (g_51 = 24; (g_51 < (-21)); --g_51)
                {
                    if ((*l_324))
                        break;
                    if (l_354)
                        break;
                }
                l_332 = ((safe_lshift_func_uint16_t_u_s((l_357 != l_357), 1)) <= g_270[5][5][2].f0);
                if ((g_267.f0 , ((+(((0L && p_44) && (((l_332 <= (safe_lshift_func_uint16_t_u_u(((((g_4[0][1] == ((!g_243.f2) & (l_332 == ((g_270[5][5][2].f1 | g_267.f4) | l_332)))) | p_44) || l_360) | (*l_324)), 2))) , l_361) == g_364)) ^ p_44)) | 0xAC96L)))
                {
                    (*l_324) = (*l_324);
                }
                else
                {
                    (*l_295) = l_367;


                    ;
                }


                ;
                for (g_51 = 7; (g_51 != (-24)); g_51--)
                {
                    for (l_360 = (-12); (l_360 != (-1)); ++l_360)
                    {
                        (*l_324) = p_44;
                    }
                }
            }


            ;
            (*l_367) = ((void*)0 != &l_330);
        }
        else
        {
            unsigned short l_377 = 7UL;
            int l_380 = 0x2B2E516BL;
            union U1 ** const l_381 = (void*)0;
            char **l_400[2][7][7] = {{{&l_342,&l_50,&l_342,&l_50,&l_342,&l_50,&l_342},{&l_50,&l_50,&l_50,&l_50,&l_50,&l_50,&l_50},{&l_342,&l_50,&l_342,&l_50,&l_342,&l_50,&l_342},{&l_50,&l_50,&l_50,&l_50,&l_50,&l_50,&l_50},{&l_342,&l_50,&l_342,&l_50,&l_342,&l_50,&l_342},{&l_50,&l_50,&l_50,&l_50,&l_50,&l_50,&l_50},{&l_342,&l_50,&l_342,&l_50,&l_342,&l_50,&l_342}},{{&l_50,&l_50,&l_50,&l_50,&l_50,&l_50,&l_50},{&l_342,&l_50,&l_342,&l_50,&l_342,&l_50,&l_342},{&l_50,&l_50,&l_50,&l_50,&l_50,&l_50,&l_50},{&l_342,&l_50,&l_342,&l_50,&l_342,&l_50,&l_342},{&l_50,&l_50,&l_50,&l_50,&l_50,&l_50,&l_50},{&l_342,&l_50,&l_342,&l_50,&l_342,&l_50,&l_342},{&l_50,&l_50,&l_50,&l_50,&l_50,&l_50,&l_50}}};
            int i, j, k;
            if ((*g_258))
            {
                int l_376 = (-1L);
                (*l_324) = (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_376 >= (l_377 != (safe_div_func_uint8_t_u_u(func_63(p_44, p_44, l_376), g_270[5][5][2].f2)))), (((g_270[5][5][2].f1 | l_380) < p_44) < l_380))), p_44));
            }
            else
            {
                char l_394 = 1L;
                const char l_395[2][2][3] = {{{0x94L,0x94L,0xB1L},{0x94L,0x94L,0xB1L}},{{0x94L,0x94L,0xB1L},{0x94L,0x94L,0xB1L}}};
                union U1 ***l_401 = (void*)0;
                const int l_413 = 0xC02263DAL;
                int i, j, k;
                (*l_295) = &l_380;


                ;
                (*g_382) = l_381;

                ;
                if (func_63((&l_381 == &l_381), (((safe_unary_minus_func_uint16_t_u((*l_52))) , (p_44 < (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(0xF7EAL, 3)) <= g_322.f2), (safe_rshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(p_44, l_394)) ^ ((((&g_106[0] == (void*)0) , l_395[1][1][1]) == l_395[0][0][1]) , 4294967295UL)), 10)))))) , p_44), g_198))
                {
                    (*l_367) = (1L >= (((p_44 , ((g_4[0][3] || (safe_lshift_func_uint16_t_u_u(2UL, 3))) , l_400[1][3][2])) != (*g_364)) < g_167.f0));
                }
                else
                {
                    char *l_402 = &l_394;
                    int l_419 = 0xD905F723L;
                    if (((((l_401 == l_401) == ((((**l_329) , l_52) == ((l_402 != ((p_44 | (safe_mod_func_uint16_t_u_u(0x528DL, (safe_lshift_func_int16_t_s_u(g_267.f4, (safe_unary_minus_func_int32_t_s(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_55[2][3][1], p_44)), l_412[2])) && p_44)))))))) , (void*)0)) , &g_55[1][5][3])) , l_413)) & 0x3AD5L) >= p_44))
                    {
                        union U1 ***l_414 = &g_383;
                        unsigned l_421 = 4294967295UL;
                        (*l_367) = ((((l_414 == &l_381) , 0xE9L) == p_44) , (0x75232A7DL | (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((g_198 && p_44) | (*l_367)) || p_44), l_421)), g_270[5][5][2].f2))));
                    }
                    else
                    {
                        const char *l_425 = &g_51;
                        (*l_295) = func_58((p_44 ^ (safe_sub_func_uint8_t_u_u(((((safe_unary_minus_func_uint8_t_u(((g_264[2].f0 , (((void*)0 != l_425) , (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_89, 6)), 1L)))) & (safe_div_func_uint16_t_u_u(g_4[0][2], (safe_div_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((g_55[1][3][2] & g_4[0][0]), 0x4CA1L)) || (*l_52)), p_44))))))) > p_44) ^ 0x89L) != 0x57L), 0xA2L))), &g_51, p_44, g_270[5][5][2].f0);
                        (*l_295) = &l_419;


                        ;
                        (*l_295) = &l_419;
                        (*l_295) = &l_419;
                    }


                    ;
                    for (l_394 = 0; (l_394 <= 3); l_394 += 1)
                    {
                        (*l_367) = l_395[1][1][1];
                        (**l_357) = (*g_105);
                    }
                    (**l_357) = (*g_105);
                }


                (*l_329) = &g_167;

                ;
            }



            ;
            ;
            (*l_367) = ((((safe_rshift_func_uint8_t_u_s(((void*)0 == l_357), 2)) | (*l_324)) < 0xB7L) & func_63((safe_sub_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(1L, ((safe_sub_func_uint8_t_u_u(((p_44 < 0x07L) & ((g_444[1] , (g_243.f2 < 0UL)) , 0x6C3FL)), 0xEFL)) & (*l_52)))) <= g_55[0][0][0]), p_44)), l_445, g_270[5][5][2].f2));
            (*l_324) = (g_264[2].f1 ^ 6L);
            if ((safe_sub_func_uint8_t_u_u((0xA7070576L != (((g_459[1][0][1] , l_460[0][8][3]) != &l_380) , g_51)), l_377)))
            {
                int l_461 = 0x55F90A5DL;
                (*l_324) = 0L;
                for (l_323 = 1; (l_323 >= 0); l_323 -= 1)
                {
                    unsigned char l_468[4][6][5] = {{{0xAFL,1UL,1UL,0xAFL,251UL},{0xE8L,0x14L,254UL,255UL,0x21L},{0x58L,250UL,0x22L,0x17L,1UL},{5UL,0xE8L,255UL,255UL,0xE8L},{0UL,7UL,1UL,0xAFL,255UL},{1UL,0xE3L,0x14L,0x82L,254UL}},{{7UL,0xE5L,0x28L,0x8EL,0x8EL},{1UL,0x0CL,1UL,9UL,0x27L},{0UL,1UL,0x17L,7UL,0x05L},{5UL,0x82L,0x21L,0x14L,0x85L},{0x58L,0x05L,0x17L,0x05L,0x58L},{0xE8L,0x38L,255UL,5UL,0xE3L}},{{7UL,0x28L,0UL,0x05L,1UL},{0x14L,255UL,0xE3L,0x38L,0xE3L},{0x05L,0x05L,251UL,0UL,0x8EL},{0xE3L,0xE8L,0x21L,3UL,251UL},{0x68L,0xE5L,1UL,1UL,0xB2L},{0x32L,0xE8L,0xE8L,0x32L,1UL}},{{0x28L,0x05L,255UL,0x8EL,0x22L},{0x21L,255UL,254UL,0x14L,0xE8L},{0xE5L,0x28L,0x8EL,0x8EL,0x28L},{251UL,0x38L,0x27L,0x32L,9UL},{0x58L,0xB2L,0x05L,1UL,255UL},{0x38L,0x0CL,0x85L,3UL,3UL}}};
                    int i, j, k;
                    if ((p_44 & l_461))
                    {
                        int l_471 = 4L;
                        int i;
                        (*l_324) = ((g_346.f2 <= ((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((&g_444[l_323] == g_106[l_323]) >= (((p_44 , ((safe_lshift_func_uint8_t_u_s(l_468[3][0][4], (safe_mod_func_uint32_t_u_u((l_471 & ((*l_52) == (safe_div_func_uint16_t_u_u((+(!(g_267.f2 , (safe_mod_func_int32_t_s_s(p_44, 1L))))), (-5L))))), p_44)))) ^ (*l_52))) != p_44) , p_44)), g_198)), g_55[0][0][0])) == p_44)) | 1UL);
                    }
                    else
                    {
                        return g_450.f0;



                    }
                    (*l_367) = p_44;
                    (*l_367) = p_44;
                    for (g_51 = 1; (g_51 >= 0); g_51 -= 1)
                    {
                        int l_476 = 1L;
                        (*l_295) = (void*)0;
                        (*l_295) = (l_476 , &l_380);
                        if (p_44)
                            continue;
                        (*l_324) = (safe_add_func_uint32_t_u_u((((safe_div_func_uint32_t_u_u((((safe_div_func_uint32_t_u_u((p_44 ^ ((void*)0 == l_483[1][4])), l_461)) > (((void*)0 != &l_381) , l_380)) , p_44), (safe_sub_func_uint32_t_u_u((p_44 , p_44), (-8L))))) || g_289.f0) >= g_167.f4), g_4[0][7]));
                    }
                }
            }
            else
            {
                unsigned char l_498 = 0UL;
                const int *l_504 = &g_198;
                if (l_377)
                {
                    char *l_502 = (void*)0;
                    for (l_377 = (-2); (l_377 != 32); l_377 = safe_add_func_int8_t_s_s(l_377, 9))
                    {
                        unsigned l_490[9][3] = {{0xAA72FD7FL,0xCFA4AB0EL,0x3F4A7716L},{0xCFA4AB0EL,0xAA72FD7FL,0x3F4A7716L},{1UL,1UL,0x3F4A7716L},{0xAA72FD7FL,0xCFA4AB0EL,0x3F4A7716L},{0xCFA4AB0EL,0xAA72FD7FL,0x3F4A7716L},{1UL,1UL,0x3F4A7716L},{0xAA72FD7FL,0xCFA4AB0EL,0x3F4A7716L},{0xCFA4AB0EL,0xAA72FD7FL,0x3F4A7716L},{1UL,1UL,0x3F4A7716L}};
                        int i, j;
                        (*l_367) = 1L;
                        return l_490[3][0];



                    }
                    (*l_367) = p_44;
                    for (l_360 = 0; l_360 < 2; l_360 += 1)
                    {
                        union U0 tmp = {0x0AC7L};
                        g_214[l_360] = tmp;
                    }
                    (*l_295) = func_58((safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((+(*l_52)), g_264[2].f1)) != p_44), (-1L))), p_44)), l_502, p_44, g_167.f1);
                }
                else
                {
                    union U1 *l_508 = &g_167;
                    g_505[2][5] = (g_503[0][2][5] , l_504);


                    for (l_445 = (-3); (l_445 < 59); l_445++)
                    {
                        (*l_329) = l_508;

                        ;
                        (*l_367) = (-3L);
                        (*l_295) = &l_380;
                    }
                }


            }


        }



        ;
        ;

        (*g_511) = &g_505[1][4];
        (*l_367) = (*l_324);
        l_512 = l_512;
    }
    else
    {
        int *l_513[7] = {&g_55[0][5][0],&g_55[0][5][0],&g_55[0][5][0],&g_55[0][5][0],&g_55[0][5][0],&g_55[0][5][0],&g_55[0][5][0]};
        int i;
        l_513[4] = l_513[2];
        l_514 = p_44;
        l_515 = (*g_258);
        l_515 = 0x966CF98FL;
    }



    ;
    ;

    if ((*l_52))
    {
        int *l_516 = &g_55[0][0][0];
        char l_539 = 0xC7L;
        (*g_510) = l_516;
        for (g_51 = 1; (g_51 > 22); g_51 = safe_add_func_uint8_t_u_u(g_51, 9))
        {
            union U1 *l_526[2][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_527,&g_527,&g_527,&g_527,&g_527,&g_527,&g_527,&g_527,&g_527}};
            char *l_529 = &l_514;
            char l_534 = 7L;
            char *l_537[10];
            int l_540 = 9L;
            int * const *l_545 = &l_52;
            int * const **l_544 = &l_545;
            int i, j;
            for (i = 0; i < 10; i++)
                l_537[i] = &g_51;
            for (l_514 = 2; (l_514 <= 6); l_514 += 1)
            {
                int *l_519 = (void*)0;
                for (g_198 = 1; (g_198 >= 0); g_198 -= 1)
                {
                    int i, j, k;
                    (*l_516) = (*l_516);
                    for (g_186 = 0; (g_186 <= 6); g_186 += 1)
                    {
                        (*l_516) = (*g_258);
                        if (p_44)
                            break;
                    }
                    for (l_316 = 1; (l_316 <= 5); l_316 += 1)
                    {
                        int i;
                        g_384[l_316] = g_384[l_316];
                    }
                }
                for (g_89 = 6; (g_89 >= 0); g_89 -= 1)
                {
                    (*g_510) = l_519;
                }
            }
            (*l_516) = (((safe_mod_func_uint16_t_u_u(((-9L) & (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(g_290.f0, 65528UL)), 3))), 0x9FAEL)) | ((+((void*)0 == l_526[1][4])) , ((void*)0 == (*l_362)))) || (l_529 == (void*)0));
            for (l_445 = 3; (l_445 <= 9); l_445 += 1)
            {
                unsigned short l_538 = 0x683DL;
                const char **l_543 = (void*)0;
                int *l_574 = (void*)0;
                int i;
                (*g_510) = func_58((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_s(func_63((~g_528.f2), l_538, g_55[1][8][3]), 1)) | 0xDCL), 7)), &g_51, l_539, l_540);
                (*g_510) = ((((safe_mod_func_int32_t_s_s(l_540, (l_540 | (((void*)0 != l_543) ^ p_44)))) == ((&g_221 != l_544) > (0xD09F3888L & p_44))) | 0x77L) , l_516);
                if ((l_538 && (&l_312[l_445] != &l_312[l_445])))
                {
                    int l_582 = 0xD56603A4L;
                    int *l_583[3][2] = {{&l_540,&l_540},{&l_540,&l_540},{&l_540,&l_540}};
                    int i, j;
                    (*l_516) = ((safe_div_func_uint8_t_u_u(p_44, p_44)) != ((g_550 , (((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((*l_516) , (safe_sub_func_uint8_t_u_u((*l_516), (*l_516)))), 0)) & 5L), 5)) == 0xB0L) , l_538)) != (-8L)));
                    (*l_516) = ((safe_lshift_func_int16_t_s_u(((((g_343.f0 < g_167.f0) || 0xDB3D7B39L) != (1UL == 0L)) != ((***l_544) , (*l_52))), 4)) == ((p_44 & (safe_div_func_uint32_t_u_u(g_167.f0, 0x0D8B6239L))) , l_538));
                    if (p_44)
                    {
                        union U1 ***l_564 = &l_329;
                        int l_569[8] = {0xD37402DEL,0xAEED52E0L,0xAEED52E0L,0xD37402DEL,0xAEED52E0L,0xAEED52E0L,0xD37402DEL,0xAEED52E0L};
                        const char l_581 = 0xA0L;
                        int i;
                        (*l_564) = (*g_382);

                        ;
                        (*g_510) = (void*)0;
                        (*l_516) = (((((safe_sub_func_int16_t_s_s(p_44, ((p_44 >= (*l_516)) <= p_44))) || p_44) | (*l_516)) & 0L) , (-2L));
                        (*l_516) = 0L;
                    }
                    else
                    {
                        (*l_295) = ((*l_330) , l_574);
                        (*l_516) = p_44;
                        (*g_510) = l_583[2][1];


                        return g_289.f0;


                    }

                    ;
                    l_583[2][1] = (**l_544);


                }
                else
                {
                    for (l_539 = 12; (l_539 > 17); ++l_539)
                    {
                        int **l_586 = &l_574;
                        (*l_586) = (*l_545);

                        ;
                    }

                    ;
                    (*l_516) = 9L;
                }

                ;
            }
        }

        ;
    }
    else
    {
        unsigned short l_587 = 0x06E8L;
        unsigned l_590 = 7UL;
        const short l_603 = 5L;
        char *l_635 = &g_51;
        int *l_636 = &g_4[0][5];
        const unsigned short l_739[7][1] = {{3UL},{3UL},{3UL},{3UL},{3UL},{3UL},{3UL}};
        unsigned short l_740[6][2];
        union U1 ***l_742 = &g_383;
        int l_743[3][9] = {{0x7AEE9795L,0L,0x7AEE9795L,0x5A6B9DA7L,0x5A6B9DA7L,0x7AEE9795L,0L,0x7AEE9795L,0x5A6B9DA7L},{0xAAD99060L,0x95B1DC4FL,0x95B1DC4FL,0xAAD99060L,0x920AA01BL,0xAAD99060L,0x95B1DC4FL,0x95B1DC4FL,0xAAD99060L},{(-1L),0x5A6B9DA7L,(-3L),0x5A6B9DA7L,(-1L),(-1L),0x5A6B9DA7L,(-3L),0x5A6B9DA7L}};
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
                l_740[i][j] = 65530UL;
        }
        (*l_295) = func_58(l_587, &g_51, (p_44 == (*l_52)), l_587);
        if ((safe_lshift_func_int8_t_s_s((p_44 || l_590), 4)))
        {
            int l_597 = 0x17BB37BBL;
            int l_611 = 0x640F0D59L;
            const union U1 *l_613 = &g_614;
            const int *l_626 = &g_198;
            char *l_670[3][6][5] = {{{&g_51,&g_51,&l_514,&g_51,&g_51},{&g_51,&g_51,&l_514,&l_514,&l_514},{&g_51,&g_51,(void*)0,&l_514,&l_514},{(void*)0,&l_514,&l_514,&g_51,&l_514},{&l_514,&l_514,&l_514,(void*)0,&g_51},{&l_514,&l_514,&l_514,(void*)0,&l_514}},{{&l_514,&l_514,&l_514,&l_514,&l_514},{&g_51,&g_51,&g_51,&g_51,&l_514},{(void*)0,&g_51,&g_51,&g_51,&l_514},{&l_514,&l_514,&l_514,&l_514,&g_51},{&l_514,(void*)0,&g_51,&g_51,(void*)0},{&l_514,(void*)0,(void*)0,&g_51,&g_51}},{{&g_51,&l_514,&g_51,&l_514,&g_51},{(void*)0,&l_514,&g_51,(void*)0,(void*)0},{&g_51,&l_514,&g_51,&l_514,&g_51},{&l_514,(void*)0,&l_514,(void*)0,(void*)0},{&l_514,&l_514,&l_514,&g_51,&g_51},{&l_514,(void*)0,&l_514,(void*)0,&l_514}}};
            int l_735 = 3L;
            int i, j, k;
            l_597 = func_63((safe_rshift_func_uint16_t_u_s(p_44, p_44)), g_528.f4, (safe_div_func_uint16_t_u_u(5UL, (safe_add_func_int16_t_s_s(0xAFE9L, 5L)))));
            for (l_316 = (-6); (l_316 != 15); l_316 = safe_add_func_uint8_t_u_u(l_316, 4))
            {
                char l_600 = 0x94L;
                unsigned short l_602 = 0UL;
                unsigned short l_641 = 65531UL;
                int *l_642 = &g_55[0][0][0];
                if (l_600)
                {
                    int *l_612[8][5] = {{&g_4[0][6],&g_55[0][0][0],&g_4[0][2],&g_4[0][4],&g_89},{&g_55[0][6][1],&g_4[0][6],&g_4[0][2],&g_89,&g_55[0][0][0]},{&g_55[0][5][1],&g_4[0][2],&g_89,&g_55[0][0][0],&g_89},{&g_89,&g_89,&l_515,&g_4[0][2],&g_198},{&g_89,&g_89,&g_198,&g_89,&g_55[0][0][0]},{&g_55[0][5][1],&l_611,&g_55[0][0][0],&g_198,&g_4[0][4]},{&g_55[0][6][1],&g_89,&g_89,&g_4[0][2],&g_198},{&g_55[0][0][0],&g_55[0][0][0],&g_89,&l_515,&g_4[0][2]}};
                    int i, j;
                    for (l_590 = 0; (l_590 != 1); l_590 = safe_add_func_int32_t_s_s(l_590, 4))
                    {
                        char l_608[5][3][7] = {{{(-1L),0xBBL,0L,0L,0x39L,0L,0L},{0xABL,0xABL,0x2EL,0x0AL,0x59L,0xF8L,0xD6L},{0x16L,(-1L),1L,0x4CL,0L,0x1EL,0xF4L}},{{0x0CL,0x73L,0xABL,0x43L,0x59L,0L,0x0AL},{1L,0xA9L,0x39L,(-1L),0x39L,0xA9L,1L},{0x0AL,0L,0x59L,0x43L,0xABL,0x73L,0x0CL}},{{0xF4L,0x1EL,0L,0x4CL,1L,(-1L),0x16L},{0xD6L,0xF8L,0x59L,0x0AL,0x2EL,0xABL,0xABL},{0L,0L,0x39L,0L,0L,0xBBL,(-1L)}},{{1L,0xF8L,0xABL,0L,0x43L,0xD6L,0x43L},{0L,0x1EL,1L,0x6FL,0x55L,0xE5L,0x3CL},{1L,0L,0x2EL,0L,0x0CL,0x0CL,0L}},{{0L,0xA9L,0L,0xE5L,0x39L,0xE5L,(-1L)},{0x43L,0L,0x0AL,1L,0x2EL,1L,0x0AL},{0x39L,0L,0x3CL,0x4CL,0xF4L,0xE5L,0L}}};
                        int *l_609 = (void*)0;
                        int *l_610[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_610[i] = &g_89;
                        l_611 = (safe_sub_func_uint8_t_u_u(l_608[4][1][3], (0xD7L != p_44)));
                        (*g_510) = l_612[5][2];
                    }
                    l_613 = (void*)0;

                    ;
                }
                else
                {
                    for (l_600 = 1; (l_600 >= 0); l_600 -= 1)
                    {
                        int l_625 = 0xEA43F176L;
                        (*l_295) = func_58(p_44, ((safe_div_func_uint16_t_u_u((l_587 | ((safe_sub_func_uint16_t_u_u(0xFE87L, ((safe_rshift_func_int8_t_s_u(func_63(((p_44 , g_322.f2) ^ (p_44 ^ ((safe_lshift_func_uint8_t_u_u((g_527.f0 > (safe_rshift_func_int16_t_s_u(1L, 4))), (0x7AL <= p_44))) | 4294967288UL))), (*l_52), p_44), 6)) ^ p_44))) == p_44)), p_44)) , (void*)0), p_44, l_625);
                        if (p_44)
                            break;
                        l_626 = (*g_510);
                    }
                }
                (*l_642) = ((((safe_add_func_uint8_t_u_u((safe_div_func_int8_t_s_s((p_44 <= func_63(p_44, (safe_add_func_int8_t_s_s((!(safe_sub_func_int32_t_s_s(l_587, (g_637 , (((g_638 , (safe_lshift_func_uint16_t_u_s(l_641, (*l_636)))) & (*l_636)) ^ g_167.f4))))), g_267.f4)), l_600)), 0x60L)), (*l_52))) <= 4UL) >= l_602) < l_611);
                if (p_44)
                    break;
                if ((*l_52))
                    break;
            }


            ;
            ;
            if ((6L && func_63((((*l_636) != 0x06L) , (safe_div_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u((p_44 >= p_44), (*l_636))) == p_44), l_597)) <= (*l_636)), 0x7A820F3FL))), (*l_636), p_44)))
            {
                unsigned l_655[4] = {0x6586A40CL,0x6586A40CL,0x6586A40CL,0x6586A40CL};
                int *l_662 = &g_198;
                char *l_671 = &g_51;
                union U0 ***l_684 = &g_124[1][1][1];
                int *l_715 = (void*)0;
                int i;
                (*l_662) = ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((p_44 != ((!g_262.f0) && l_655[0])) < g_267.f2) | ((1L != 0x67F102A4L) <= ((safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((((-5L) > (safe_lshift_func_int16_t_s_s((l_636 != (*g_510)), p_44))) || p_44) & 0x26L), g_527.f4)) ^ g_528.f2), p_44)) < g_528.f0))), g_51)), 2)) != g_270[5][5][2].f0);
                if ((g_559 < (p_44 | ((0xC72355B9L > ((safe_sub_func_int8_t_s_s(((~p_44) == ((((*l_662) < (safe_sub_func_uint32_t_u_u((p_44 <= 0UL), 0x3792E91CL))) , 0x6E7CL) | (*l_662))), g_186)) >= 0L)) != (*l_52)))))
                {
                    int *l_667[6][6] = {{&g_89,&g_89,&l_611,&l_611,&g_89,&g_89},{&g_89,&l_611,&l_611,&g_89,&g_89,&l_611},{&g_89,&g_89,&l_611,&l_611,&g_89,&g_89},{&g_89,&l_611,&l_611,&g_89,&g_89,&l_611},{&g_89,&g_89,&l_611,&l_611,&g_89,&g_89},{&g_89,&l_611,&l_611,&g_89,&g_89,&l_611}};
                    int i, j;
                    (*g_510) = l_636;
                    if ((((*l_636) > p_44) <= 0UL))
                    {
                        short l_681 = 0x079FL;
                        unsigned l_685 = 0xFED43BBDL;
                        (*l_295) = l_667[5][5];



                        (*l_662) = (safe_div_func_uint16_t_u_u(((void*)0 != &l_662), (((-3L) >= (*g_258)) && ((g_673[0] , (safe_div_func_int32_t_s_s((g_676 , 0xB9F4E6CEL), g_198))) >= g_270[5][5][2].f0))));
                        (*g_680) = &l_330;

                        ;
                        (*l_295) = func_58(l_681, &g_51, ((*l_330) , (g_270[5][5][2].f4 || (((((p_44 , (func_63(((g_450.f0 , &l_635) == ((safe_sub_func_uint8_t_u_u((l_684 != (p_44 , &g_124[3][6][2])), (*l_662))) , &g_49[0])), (*l_52), (*l_662)) == g_267.f0)) < 0xAEBEDAE1L) > (*l_662)) , (*l_662)) != p_44))), l_685);
                    }
                    else
                    {
                        (*l_662) = 0x0F957ED1L;
                    }



                    ;
                    (*l_662) = (*g_258);
                }
                else
                {
                    unsigned char l_701[1];
                    const unsigned l_702 = 0x83EA6BD1L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_701[i] = 1UL;
                    for (l_611 = 20; (l_611 > (-5)); --l_611)
                    {
                        char l_688 = 0x8AL;
                        (*g_510) = func_58((p_44 , g_673[0].f0), (((-7L) == ((g_55[1][0][0] & l_688) >= ((safe_sub_func_uint32_t_u_u(p_44, ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u((*l_636), 6)) > ((((safe_mod_func_uint16_t_u_u((p_44 != (safe_mod_func_int8_t_s_s(0xD6L, g_186))), 0x0A9BL)) & 0xA51ACF9BL) , g_167.f4) , g_267.f0)), 0)), (-4L))) && g_527.f0))) , p_44))) , (void*)0), p_44, l_701[0]);
                        if (l_702)
                            break;
                        (*g_131) = ((*l_636) > (*l_636));
                    }
                    (*g_510) = l_703[1][2];
                }



                ;
                (*g_510) = (p_44 , func_58(p_44, l_670[0][2][4], p_44, ((((safe_unary_minus_func_uint8_t_u(0UL)) || (safe_lshift_func_int8_t_s_s((g_322.f1 && (g_267.f2 == ((0xCBL & ((g_527.f4 , p_44) | p_44)) <= g_243.f0))), 3))) > g_270[5][5][2].f0) < 0x40F50F79L)));
                (*l_662) = ((g_527.f1 , (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((*l_636), (*l_662))), (*l_636))) , func_63((*l_636), (safe_div_func_uint8_t_u_u(0x38L, g_346.f1)), p_44)), 5UL))) ^ p_44);
            }
            else
            {
                unsigned l_722[2];
                char *l_725 = &l_514;
                union U1 *l_733 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_722[i] = 0x92F8204EL;
                l_726 = ((&l_635 == (*l_361)) , (safe_div_func_uint16_t_u_u(((g_85.f0 & (0x2469E634L < (safe_mod_func_int16_t_s_s(l_722[0], 1L)))) | (p_44 < (((-1L) ^ ((safe_add_func_uint32_t_u_u(((((l_635 == l_725) && l_722[0]) ^ (*l_636)) <= 0xA41CL), p_44)) != 0x4E4EDBDDL)) > p_44))), g_614.f0)));
                (*l_295) = ((l_722[0] < ((safe_lshift_func_uint8_t_u_u(g_322.f1, 0)) != 65527UL)) , func_58(((safe_div_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((l_733 == (l_611 , g_734)), (*l_636))) >= (*g_258)), g_198)) != g_267.f4), l_725, l_735, p_44));
            }



            ;
            for (l_515 = 13; (l_515 < (-15)); l_515--)
            {
                int *l_738 = &g_89;
                l_735 = p_44;
                (*g_510) = l_738;
                l_743[0][2] = (func_63((l_740[3][1] ^ (p_44 , p_44)), (*l_636), g_267.f1) , (*l_636));
            }
        }
        else
        {
            short l_744 = 0x151AL;
            int l_753 = 0xC7BB470CL;
            if (l_744)
            {
                char l_746 = (-5L);
                char l_747[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_747[i] = 0xE2L;
                l_747[4] = (g_745[7][1] , l_746);
            }
            else
            {
                unsigned char l_752 = 0xACL;
                union U1 *l_761[1];
                int *l_763 = &l_753;
                union U0 *l_768 = &g_769;
                char *l_776 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_761[i] = &g_762;
                (*g_510) = func_58(g_290.f0, &g_51, p_44, p_44);
                for (p_44 = 0; (p_44 >= 45); ++p_44)
                {
                    for (g_89 = (-2); (g_89 == (-4)); --g_89)
                    {
                        l_753 = l_752;
                        (*l_295) = func_58((safe_lshift_func_uint16_t_u_u(1UL, p_44)), &l_514, (*l_636), (safe_add_func_uint8_t_u_u((0UL ^ ((g_264[2].f0 , ((((!(g_758 , ((*l_636) <= (safe_mod_func_uint8_t_u_u(g_614.f4, p_44))))) , (*l_329)) != l_761[0]) & p_44)) < p_44)), (*l_636))));
                    }
                    (*g_510) = l_763;


                    if (((*l_636) , ((safe_mod_func_uint16_t_u_u(g_167.f1, p_44)) > 1UL)))
                    {
                        int *l_770[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_770[i] = &g_4[0][6];
                        (*g_510) = (void*)0;
                        (*l_295) = l_770[1];



                        return (*l_636);


                    }
                    else
                    {
                        const unsigned short l_775 = 0x6F9EL;
                        (*l_295) = &l_753;



                        (*l_763) = (safe_lshift_func_uint16_t_u_u(((0x1AB2L | (safe_sub_func_int8_t_s_s((0x7382L | g_459[1][0][1].f0), (((((l_775 , (**l_361)) == l_776) , (*l_636)) == (p_44 & p_44)) >= 0xE42C4773L)))) & p_44), 11));
                        return g_346.f2;




                    }
                }
            }
            l_753 = (*l_636);
        }



        ;

        (*l_295) = &l_743[0][2];



    }



    ;
    ;

    if ((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(l_781[2][0][4], 15)) <= ((0xD5L & ((((*g_382) != ((&l_295 == &g_510) , &l_330)) , 0x516BL) & 0x6835L)) != ((0L <= p_44) | g_167.f4))), p_44)))
    {
        unsigned l_784 = 0x6EE7A32EL;
        (*l_295) = (void*)0;
        l_783[4] = (*g_123);
        l_784 = p_44;
    }
    else
    {
        int *l_787 = (void*)0;
        unsigned l_790 = 0x917AAECCL;
        unsigned short l_791 = 0x3C14L;
        for (l_515 = 24; (l_515 < 12); --l_515)
        {
            return p_44;



        }
        (*g_510) = (g_789 , func_58(func_63(g_274.f0, l_790, g_89), &g_51, p_44, l_791));
    }
    return g_346.f4;



}







static union U0 func_45(char * p_46, char * p_47, int * p_48)
{
    int l_67[9] = {0x656345D1L,0x656345D1L,0x656345D1L,0x656345D1L,0x656345D1L,0x656345D1L,0x656345D1L,0x656345D1L,0x656345D1L};
    char l_244 = 1L;
    int l_280 = 0x4D40C044L;
    union U0 *l_283 = &g_262;
    int **l_288 = &g_102;
    int i;
    for (g_51 = 0; (g_51 < 1); ++g_51)
    {
        const unsigned short l_76 = 0xC693L;
        int **l_190 = &g_102;
        if ((*p_48))
            break;
        for (g_55[0][0][0] = 7; (g_55[0][0][0] >= (-27)); --g_55[0][0][0])
        {
            int l_134 = (-1L);
            int **l_189 = &g_102;
            (*l_189) = func_58(g_4[0][7], &g_51, ((func_63(l_67[0], ((safe_mod_func_int32_t_s_s(func_70(&g_4[0][2], ((*p_48) , ((void*)0 == &g_51)), (g_55[0][0][0] || (safe_rshift_func_uint16_t_u_u(l_76, 10)))), 0xD168D339L)) , l_134), g_4[0][2]) ^ (*p_47)) != l_134), l_134);

            ;
        }
        (*l_190) = p_48;


    }
    for (g_186 = 0; (g_186 <= 42); g_186 = safe_add_func_uint16_t_u_u(g_186, 4))
    {
        unsigned l_193[3][9] = {{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0x8BD6EBF7L,0x8BD6EBF7L,0x8BD6EBF7L,0x8BD6EBF7L,0x8BD6EBF7L,0x8BD6EBF7L,0x8BD6EBF7L,0x8BD6EBF7L,0x8BD6EBF7L},{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL}};
        union U0 *l_196[9][10][2] = {{{(void*)0,&g_104},{&g_104,&g_104},{(void*)0,&g_104},{&g_104,(void*)0},{&g_104,&g_104},{&g_104,(void*)0},{&g_104,&g_104},{(void*)0,&g_104},{&g_104,(void*)0},{&g_104,&g_104}},{{&g_104,(void*)0},{&g_104,&g_104},{(void*)0,&g_104},{&g_104,(void*)0},{&g_104,&g_104},{&g_104,(void*)0},{&g_104,&g_104},{(void*)0,&g_104},{&g_104,(void*)0},{&g_104,&g_104}},{{&g_104,(void*)0},{&g_104,&g_104},{(void*)0,&g_104},{&g_104,(void*)0},{&g_104,&g_104},{&g_104,(void*)0},{&g_104,&g_104},{(void*)0,&g_104},{&g_104,(void*)0},{&g_104,&g_104}},{{&g_104,(void*)0},{&g_104,&g_104},{(void*)0,&g_104},{&g_104,(void*)0},{&g_104,&g_104},{&g_104,(void*)0},{&g_104,&g_104},{(void*)0,&g_104},{&g_104,(void*)0},{&g_104,&g_104}},{{&g_104,(void*)0},{&g_104,&g_104},{(void*)0,&g_104},{&g_104,(void*)0},{&g_104,&g_104},{&g_104,(void*)0},{&g_104,&g_104},{(void*)0,&g_104},{&g_104,(void*)0},{&g_104,&g_104}},{{&g_104,(void*)0},{&g_104,(void*)0},{(void*)0,(void*)0},{&g_104,(void*)0},{&g_104,&g_104},{&g_104,(void*)0},{&g_104,(void*)0},{(void*)0,(void*)0},{&g_104,(void*)0},{&g_104,&g_104}},{{&g_104,(void*)0},{&g_104,(void*)0},{(void*)0,(void*)0},{&g_104,(void*)0},{&g_104,&g_104},{&g_104,(void*)0},{&g_104,(void*)0},{(void*)0,(void*)0},{&g_104,(void*)0},{&g_104,&g_104}},{{&g_104,(void*)0},{&g_104,(void*)0},{(void*)0,(void*)0},{&g_104,(void*)0},{&g_104,&g_104},{&g_104,(void*)0},{&g_104,(void*)0},{(void*)0,(void*)0},{&g_104,(void*)0},{&g_104,&g_104}},{{&g_104,(void*)0},{&g_104,(void*)0},{(void*)0,(void*)0},{&g_104,(void*)0},{&g_104,&g_104},{&g_104,(void*)0},{&g_104,(void*)0},{(void*)0,(void*)0},{&g_104,(void*)0},{&g_104,&g_104}}};
        int *l_200 = &l_67[8];
        int l_201 = (-2L);
        int l_265 = (-1L);
        union U1 *l_269 = &g_270[5][5][2];
        int l_279 = 0x311E0355L;
        int i, j, k;
    }
    (*l_288) = &l_67[0];

    ;
    (**l_288) = (*g_131);
    return g_289;


    }







static int * func_58(int p_59, char * p_60, char p_61, short p_62)
{
    int *l_188 = (void*)0;
    return l_188;


}







static unsigned char func_63(unsigned short p_64, short p_65, unsigned p_66)
{
    short l_144[5] = {0L,0L,0L,0L,0L};
    union U0 *l_153 = &g_154;
    unsigned short l_157 = 0UL;
    int l_158 = (-1L);
    int l_168 = (-10L);
    int *l_185 = &g_89;
    int *l_187 = &l_168;
    int i;
    for (p_66 = (-25); (p_66 > 28); p_66++)
    {
        int l_141 = 0x741F5D68L;
        union U0 **l_164[1];
        int **l_183 = (void*)0;
        int **l_184[6][6][1] = {{{&g_102},{&g_102},{&g_102},{&g_102},{&g_102},{&g_102}},{{&g_102},{&g_102},{&g_102},{&g_102},{&g_102},{&g_102}},{{&g_102},{&g_102},{&g_102},{&g_102},{&g_102},{&g_102}},{{&g_102},{&g_102},{&g_102},{&g_102},{&g_102},{&g_102}},{{&g_102},{&g_102},{&g_102},{&g_102},{&g_102},{&g_102}},{{&g_102},{&g_102},{&g_102},{&g_102},{&g_102},{&g_102}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_164[i] = &g_106[1];
        for (g_89 = 0; (g_89 >= 0); g_89 -= 1)
        {
            int *l_145 = &l_141;
            int l_166 = 1L;
            union U0 *l_170[6] = {&g_104,&g_104,&g_104,&g_104,&g_104,&g_104};
            int l_178 = 0xF75EF2A8L;
            int i;
            (*l_145) = ((safe_add_func_int8_t_s_s((((g_85 , (safe_lshift_func_uint16_t_u_u(0x318DL, 8))) >= l_141) < (safe_lshift_func_int8_t_s_u(l_144[4], (0UL ^ 0x681B6975L)))), p_64)) ^ l_144[4]);
            if (p_64)
                continue;
            for (p_64 = 0; (p_64 <= 4); p_64 += 1)
            {
                int l_148 = 0x7B20451BL;
                int *l_159 = &g_55[0][0][0];
                for (p_65 = 0; (p_65 <= 4); p_65 += 1)
                {
                    int l_152 = 1L;
                    int i, j, k;
                    if ((&g_124[p_65][(p_64 + 1)][p_64] == (void*)0))
                    {
                        int *l_146 = &g_55[0][0][0];
                        (*g_129) = l_146;

                        ;
                        (*g_147) = (*g_129);
                        (*l_145) = p_65;
                        (*l_145) = ((!((l_148 , (g_89 < p_66)) , ((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int16_t_s((0xB0L > l_148))), (p_66 , (*l_146)))) > (((((l_152 < (-9L)) == (*l_145)) , (*g_129)) != (void*)0) | p_65)))) | l_144[3]);
                    }
                    else
                    {
                        int **l_155 = (void*)0;
                        int i, j, k;
                        l_152 = ((*g_105) == l_153);
                        (*l_145) = p_66;
                        (*g_156) = &l_152;

                        ;
                    }

                    ;
                    for (l_148 = 0; (l_148 <= 4); l_148 += 1)
                    {
                        int **l_160 = (void*)0;
                        int **l_161 = (void*)0;
                        int **l_163 = &g_102;
                        l_158 = l_157;
                        (*l_163) = l_159;

                        ;
                        (*l_163) = &l_152;

                        ;
                    }
                }
                for (l_158 = 4; (l_158 >= 0); l_158 -= 1)
                {
                    for (l_148 = 0; (l_148 <= 4); l_148 += 1)
                    {
                        int **l_165 = &g_102;
                        (*l_145) = (l_164[0] == (*g_123));
                        (*l_165) = (void*)0;

                        ;
                    }
                    if ((*l_145))
                        break;
                    for (l_148 = 3; (l_148 >= 0); l_148 -= 1)
                    {
                        int i, j, k;
                        (*l_145) = p_66;
                        (*l_145) = l_166;
                        return g_4[0][2];


                    }
                }
                if ((0x2F14L > (g_167 , g_55[0][0][0])))
                {
                    if (l_168)
                        break;
                    (*g_156) = &l_158;

                    ;
                    (*g_169) = &l_166;

                    ;
                    l_170[1] = (**g_123);
                }
                else
                {
                    unsigned char l_177[2];
                    int *l_182 = &l_166;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_177[i] = 0x7DL;
                    (*l_145) = (l_157 >= (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((1UL != ((l_141 , p_64) < ((safe_mod_func_uint8_t_u_u(l_177[0], ((l_177[1] >= ((void*)0 == &g_49[0])) & (l_170[1] == l_153)))) , g_85.f1))), l_177[1])), 1UL)));
                    if (l_178)
                        break;
                    (*l_145) = (safe_rshift_func_int16_t_s_u(g_113.f0, 3));
                    for (l_148 = 4; (l_148 >= 0); l_148 -= 1)
                    {
                        int **l_181 = &l_159;
                        int i, j, k;
                        (*l_145) = (l_153 != (void*)0);
                        (*l_181) = (void*)0;

                        ;
                        (*l_181) = l_182;

                        ;
                    }

                    ;
                }

                ;
            }



        }
        l_185 = (void*)0;

        ;
        if (p_64)
            break;
        l_185 = (void*)0;
    }

    ;
    (*l_187) = g_186;
    return g_55[0][0][0];
}







static int func_70(int * p_71, int p_72, const int p_73)
{
    unsigned l_82 = 4294967295UL;
    int l_94 = (-1L);
    char * const *l_97 = &g_49[0];
    for (p_72 = 0; (p_72 <= (-15)); p_72 = safe_sub_func_uint16_t_u_u(p_72, 6))
    {
        char **l_79 = &g_49[0];
        char ***l_80 = (void*)0;
        char ***l_81 = &l_79;
        union U0 *l_103 = &g_104;
        union U0 ** const *l_126 = &g_124[1][1][2];
        (*l_81) = (g_51 , l_79);
        if (l_82)
        {
            int *l_88 = &g_89;
            (*l_88) = (safe_sub_func_uint8_t_u_u((g_85 , (p_73 , p_72)), (p_72 == (safe_mod_func_uint32_t_u_u(l_82, g_55[0][0][0])))));
            return (*p_71);


        }
        else
        {
            char **l_98 = (void*)0;
            int l_114 = 1L;
            union U0 *l_120 = &g_104;
            (*l_81) = (*l_81);
            if ((((safe_div_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(l_94, p_72)) == p_73), (safe_rshift_func_int8_t_s_u(l_82, l_82)))) ^ p_72) , (((l_97 == l_98) , (safe_div_func_int16_t_s_s(0x91B2L, g_89))) > 0L)))
            {
                unsigned short l_117 = 65527UL;
                int *l_122 = &l_94;
                (*g_101) = &g_89;

                ;
                (*g_105) = l_103;
                if ((safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((g_4[0][4] , p_72), g_89)), (((((safe_sub_func_int8_t_s_s(((g_85 , g_113) , l_94), p_73)) , g_85.f1) >= ((0x71DFL && g_4[0][2]) == 0x6425L)) , 0x0C33ADB5L) , l_114))))
                {
                    int l_118 = 0x1D5E08CEL;
                    union U0 **l_121 = &g_106[1];
                    (*g_102) = ((!((safe_div_func_int32_t_s_s(l_117, ((**g_105) , (l_118 || (**g_101))))) | g_55[0][0][0])) != 0xFB82L);
                    (*g_119) = p_71;


                    (*l_121) = l_120;
                }
                else
                {
                    (*g_119) = l_122;

                    ;
                }


                for (l_117 = 0; (l_117 <= 1); l_117 += 1)
                {
                    char l_125 = 0L;
                    for (l_114 = 1; (l_114 >= 0); l_114 -= 1)
                    {
                        int * const l_127 = (void*)0;
                        int **l_128 = &l_122;
                        int i;
                    }
                }
            }
            else
            {
                unsigned char l_133 = 0xA9L;
                (*g_129) = p_71;


                for (l_94 = 0; (l_94 <= 4); l_94 += 1)
                {
                    unsigned l_130[4] = {0x407C9B67L,0x407C9B67L,0x407C9B67L,0x407C9B67L};
                    volatile int * volatile *l_132 = &g_131;
                    int i;
                    l_130[2] = (g_113.f4 >= p_72);
                    (*l_132) = g_131;
                    for (g_89 = 0; (g_89 >= 0); g_89 -= 1)
                    {
                        int i, j, k;
                        p_71 = p_71;
                        g_124[l_94][(g_89 + 4)][g_89] = g_124[l_94][(l_94 + 1)][l_94];
                        if (l_133)
                            continue;
                        return l_82;
                    }
                }
            }


        }


    }


    return l_94;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_55[i][j][k], "g_55[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_85.f4, "g_85.f4", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_113.f0, "g_113.f0", print_hash_value);
    transparent_crc(g_113.f1, "g_113.f1", print_hash_value);
    transparent_crc(g_113.f2, "g_113.f2", print_hash_value);
    transparent_crc(g_113.f4, "g_113.f4", print_hash_value);
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_167.f0, "g_167.f0", print_hash_value);
    transparent_crc(g_167.f1, "g_167.f1", print_hash_value);
    transparent_crc(g_167.f2, "g_167.f2", print_hash_value);
    transparent_crc(g_167.f4, "g_167.f4", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_214[i].f0, "g_214[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_243.f0, "g_243.f0", print_hash_value);
    transparent_crc(g_243.f1, "g_243.f1", print_hash_value);
    transparent_crc(g_243.f2, "g_243.f2", print_hash_value);
    transparent_crc(g_243.f4, "g_243.f4", print_hash_value);
    transparent_crc(g_262.f0, "g_262.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_264[i].f0, "g_264[i].f0", print_hash_value);
        transparent_crc(g_264[i].f1, "g_264[i].f1", print_hash_value);
        transparent_crc(g_264[i].f2, "g_264[i].f2", print_hash_value);
        transparent_crc(g_264[i].f4, "g_264[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_267.f0, "g_267.f0", print_hash_value);
    transparent_crc(g_267.f1, "g_267.f1", print_hash_value);
    transparent_crc(g_267.f2, "g_267.f2", print_hash_value);
    transparent_crc(g_267.f4, "g_267.f4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_270[i][j][k].f0, "g_270[i][j][k].f0", print_hash_value);
                transparent_crc(g_270[i][j][k].f1, "g_270[i][j][k].f1", print_hash_value);
                transparent_crc(g_270[i][j][k].f2, "g_270[i][j][k].f2", print_hash_value);
                transparent_crc(g_270[i][j][k].f4, "g_270[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_271[i].f0, "g_271[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_274.f0, "g_274.f0", print_hash_value);
    transparent_crc(g_289.f0, "g_289.f0", print_hash_value);
    transparent_crc(g_290.f0, "g_290.f0", print_hash_value);
    transparent_crc(g_322.f0, "g_322.f0", print_hash_value);
    transparent_crc(g_322.f1, "g_322.f1", print_hash_value);
    transparent_crc(g_322.f2, "g_322.f2", print_hash_value);
    transparent_crc(g_322.f4, "g_322.f4", print_hash_value);
    transparent_crc(g_343.f0, "g_343.f0", print_hash_value);
    transparent_crc(g_346.f0, "g_346.f0", print_hash_value);
    transparent_crc(g_346.f1, "g_346.f1", print_hash_value);
    transparent_crc(g_346.f2, "g_346.f2", print_hash_value);
    transparent_crc(g_346.f4, "g_346.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_444[i].f0, "g_444[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_450.f0, "g_450.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_459[i][j][k].f0, "g_459[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_497.f0, "g_497.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_503[i][j][k].f0, "g_503[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_527.f0, "g_527.f0", print_hash_value);
    transparent_crc(g_527.f1, "g_527.f1", print_hash_value);
    transparent_crc(g_527.f2, "g_527.f2", print_hash_value);
    transparent_crc(g_527.f4, "g_527.f4", print_hash_value);
    transparent_crc(g_528.f0, "g_528.f0", print_hash_value);
    transparent_crc(g_528.f1, "g_528.f1", print_hash_value);
    transparent_crc(g_528.f2, "g_528.f2", print_hash_value);
    transparent_crc(g_528.f4, "g_528.f4", print_hash_value);
    transparent_crc(g_550.f0, "g_550.f0", print_hash_value);
    transparent_crc(g_559, "g_559", print_hash_value);
    transparent_crc(g_614.f0, "g_614.f0", print_hash_value);
    transparent_crc(g_614.f1, "g_614.f1", print_hash_value);
    transparent_crc(g_614.f2, "g_614.f2", print_hash_value);
    transparent_crc(g_614.f4, "g_614.f4", print_hash_value);
    transparent_crc(g_637.f0, "g_637.f0", print_hash_value);
    transparent_crc(g_638.f0, "g_638.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_673[i].f0, "g_673[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_676.f0, "g_676.f0", print_hash_value);
    transparent_crc(g_676.f1, "g_676.f1", print_hash_value);
    transparent_crc(g_676.f2, "g_676.f2", print_hash_value);
    transparent_crc(g_676.f4, "g_676.f4", print_hash_value);
    transparent_crc(g_741.f0, "g_741.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_745[i][j].f0, "g_745[i][j].f0", print_hash_value);
            transparent_crc(g_745[i][j].f1, "g_745[i][j].f1", print_hash_value);
            transparent_crc(g_745[i][j].f2, "g_745[i][j].f2", print_hash_value);
            transparent_crc(g_745[i][j].f4, "g_745[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_758.f0, "g_758.f0", print_hash_value);
    transparent_crc(g_758.f1, "g_758.f1", print_hash_value);
    transparent_crc(g_758.f2, "g_758.f2", print_hash_value);
    transparent_crc(g_758.f4, "g_758.f4", print_hash_value);
    transparent_crc(g_762.f0, "g_762.f0", print_hash_value);
    transparent_crc(g_762.f1, "g_762.f1", print_hash_value);
    transparent_crc(g_762.f2, "g_762.f2", print_hash_value);
    transparent_crc(g_762.f4, "g_762.f4", print_hash_value);
    transparent_crc(g_769.f0, "g_769.f0", print_hash_value);
    transparent_crc(g_789.f0, "g_789.f0", print_hash_value);
    transparent_crc(g_848.f0, "g_848.f0", print_hash_value);
    transparent_crc(g_871.f0, "g_871.f0", print_hash_value);
    transparent_crc(g_878, "g_878", print_hash_value);
    transparent_crc(g_883.f0, "g_883.f0", print_hash_value);
    transparent_crc(g_907.f0, "g_907.f0", print_hash_value);
    transparent_crc(g_907.f1, "g_907.f1", print_hash_value);
    transparent_crc(g_907.f2, "g_907.f2", print_hash_value);
    transparent_crc(g_907.f4, "g_907.f4", print_hash_value);
    transparent_crc(g_909.f0, "g_909.f0", print_hash_value);
    transparent_crc(g_909.f1, "g_909.f1", print_hash_value);
    transparent_crc(g_909.f2, "g_909.f2", print_hash_value);
    transparent_crc(g_909.f4, "g_909.f4", print_hash_value);
    transparent_crc(g_911, "g_911", print_hash_value);
    transparent_crc(g_919.f0, "g_919.f0", print_hash_value);
    transparent_crc(g_919.f1, "g_919.f1", print_hash_value);
    transparent_crc(g_919.f2, "g_919.f2", print_hash_value);
    transparent_crc(g_919.f4, "g_919.f4", print_hash_value);
    transparent_crc(g_924.f0, "g_924.f0", print_hash_value);
    transparent_crc(g_928.f0, "g_928.f0", print_hash_value);
    transparent_crc(g_928.f1, "g_928.f1", print_hash_value);
    transparent_crc(g_928.f2, "g_928.f2", print_hash_value);
    transparent_crc(g_928.f4, "g_928.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_981[i].f0, "g_981[i].f0", print_hash_value);
        transparent_crc(g_981[i].f1, "g_981[i].f1", print_hash_value);
        transparent_crc(g_981[i].f2, "g_981[i].f2", print_hash_value);
        transparent_crc(g_981[i].f4, "g_981[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1000[i][j], "g_1000[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1013.f0, "g_1013.f0", print_hash_value);
    transparent_crc(g_1013.f1, "g_1013.f1", print_hash_value);
    transparent_crc(g_1013.f2, "g_1013.f2", print_hash_value);
    transparent_crc(g_1013.f4, "g_1013.f4", print_hash_value);
    transparent_crc(g_1014.f0, "g_1014.f0", print_hash_value);
    transparent_crc(g_1014.f1, "g_1014.f1", print_hash_value);
    transparent_crc(g_1014.f2, "g_1014.f2", print_hash_value);
    transparent_crc(g_1014.f4, "g_1014.f4", print_hash_value);
    transparent_crc(g_1015, "g_1015", print_hash_value);
    transparent_crc(g_1021.f0, "g_1021.f0", print_hash_value);
    transparent_crc(g_1021.f1, "g_1021.f1", print_hash_value);
    transparent_crc(g_1021.f2, "g_1021.f2", print_hash_value);
    transparent_crc(g_1021.f4, "g_1021.f4", print_hash_value);
    transparent_crc(g_1022.f0, "g_1022.f0", print_hash_value);
    transparent_crc(g_1022.f1, "g_1022.f1", print_hash_value);
    transparent_crc(g_1022.f2, "g_1022.f2", print_hash_value);
    transparent_crc(g_1022.f4, "g_1022.f4", print_hash_value);
    transparent_crc(g_1060.f0, "g_1060.f0", print_hash_value);
    transparent_crc(g_1060.f1, "g_1060.f1", print_hash_value);
    transparent_crc(g_1060.f2, "g_1060.f2", print_hash_value);
    transparent_crc(g_1060.f4, "g_1060.f4", print_hash_value);
    transparent_crc(g_1116.f0, "g_1116.f0", print_hash_value);
    transparent_crc(g_1116.f1, "g_1116.f1", print_hash_value);
    transparent_crc(g_1116.f2, "g_1116.f2", print_hash_value);
    transparent_crc(g_1116.f4, "g_1116.f4", print_hash_value);
    transparent_crc(g_1156.f0, "g_1156.f0", print_hash_value);
    transparent_crc(g_1156.f1, "g_1156.f1", print_hash_value);
    transparent_crc(g_1156.f2, "g_1156.f2", print_hash_value);
    transparent_crc(g_1156.f4, "g_1156.f4", print_hash_value);
    transparent_crc(g_1192.f0, "g_1192.f0", print_hash_value);
    transparent_crc(g_1192.f1, "g_1192.f1", print_hash_value);
    transparent_crc(g_1192.f2, "g_1192.f2", print_hash_value);
    transparent_crc(g_1192.f4, "g_1192.f4", print_hash_value);
    transparent_crc(g_1218.f0, "g_1218.f0", print_hash_value);
    transparent_crc(g_1218.f1, "g_1218.f1", print_hash_value);
    transparent_crc(g_1218.f2, "g_1218.f2", print_hash_value);
    transparent_crc(g_1218.f4, "g_1218.f4", print_hash_value);
    transparent_crc(g_1248.f0, "g_1248.f0", print_hash_value);
    transparent_crc(g_1248.f1, "g_1248.f1", print_hash_value);
    transparent_crc(g_1248.f2, "g_1248.f2", print_hash_value);
    transparent_crc(g_1248.f4, "g_1248.f4", print_hash_value);
    transparent_crc(g_1263.f0, "g_1263.f0", print_hash_value);
    transparent_crc(g_1263.f1, "g_1263.f1", print_hash_value);
    transparent_crc(g_1263.f2, "g_1263.f2", print_hash_value);
    transparent_crc(g_1263.f4, "g_1263.f4", print_hash_value);
    transparent_crc(g_1320.f0, "g_1320.f0", print_hash_value);
    transparent_crc(g_1320.f1, "g_1320.f1", print_hash_value);
    transparent_crc(g_1320.f2, "g_1320.f2", print_hash_value);
    transparent_crc(g_1320.f4, "g_1320.f4", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1361[i].f0, "g_1361[i].f0", print_hash_value);
        transparent_crc(g_1361[i].f1, "g_1361[i].f1", print_hash_value);
        transparent_crc(g_1361[i].f2, "g_1361[i].f2", print_hash_value);
        transparent_crc(g_1361[i].f4, "g_1361[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1370.f0, "g_1370.f0", print_hash_value);
    transparent_crc(g_1370.f1, "g_1370.f1", print_hash_value);
    transparent_crc(g_1370.f2, "g_1370.f2", print_hash_value);
    transparent_crc(g_1370.f4, "g_1370.f4", print_hash_value);
    transparent_crc(g_1383.f0, "g_1383.f0", print_hash_value);
    transparent_crc(g_1383.f1, "g_1383.f1", print_hash_value);
    transparent_crc(g_1383.f2, "g_1383.f2", print_hash_value);
    transparent_crc(g_1383.f4, "g_1383.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
