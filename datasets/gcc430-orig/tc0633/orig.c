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



static short g_2 = 0xE0CFL;
static int g_5 = 0x94F37831L;
static int * const g_70 = &g_5;
static int * const *g_69 = &g_70;
static int *g_83 = &g_5;
static int **g_82 = &g_83;
static int g_84 = 0x9480DD00L;
static int g_88 = (-6L);
static int g_95 = 0L;
static char g_102 = 4L;
static unsigned short g_105[2] = {0x2995L,0x2995L};
static short g_132 = (-1L);
static int g_134 = 0L;
static char g_136 = 1L;
static int *g_172 = (void*)0;
static int **g_171 = &g_172;
static unsigned short g_192 = 65531UL;
static int g_198 = 0x33C22A31L;
static unsigned short g_205 = 0x8251L;
static unsigned g_241 = 4294967288UL;
static short * const g_266 = &g_132;
static short * const *g_265 = &g_266;
static unsigned char g_272 = 255UL;
static unsigned char * const g_271 = &g_272;
static short g_341 = 0xC6F6L;
static short *g_347[9][6][4] = {{{&g_2,&g_2,&g_341,&g_341},{&g_132,&g_2,&g_341,(void*)0},{&g_2,&g_132,&g_2,&g_341},{&g_2,&g_132,&g_2,(void*)0},{&g_132,&g_2,&g_341,&g_341},{&g_132,&g_2,&g_2,&g_2}},{{&g_2,&g_132,&g_2,&g_2},{&g_2,&g_2,&g_341,&g_341},{&g_132,&g_2,&g_341,(void*)0},{&g_2,&g_132,&g_2,&g_341},{&g_2,&g_132,&g_2,(void*)0},{&g_132,&g_132,(void*)0,&g_341}},{{&g_132,&g_2,&g_2,&g_341},{&g_132,&g_132,&g_341,&g_341},{&g_2,&g_2,&g_132,&g_341},{&g_132,&g_132,&g_132,&g_341},{&g_2,&g_132,&g_341,&g_132},{&g_132,&g_132,&g_2,&g_341}},{{&g_132,&g_132,(void*)0,&g_341},{&g_132,&g_2,&g_2,&g_341},{&g_132,&g_132,&g_341,&g_341},{&g_2,&g_2,&g_132,&g_341},{&g_132,&g_132,&g_132,&g_341},{&g_2,&g_132,&g_341,&g_132}},{{&g_132,&g_132,&g_2,&g_341},{&g_132,&g_132,(void*)0,&g_341},{&g_132,&g_2,&g_2,&g_341},{&g_132,&g_132,&g_341,&g_341},{&g_2,&g_2,&g_132,&g_341},{&g_132,&g_132,&g_132,&g_341}},{{&g_2,&g_132,&g_341,&g_132},{&g_132,&g_132,&g_2,&g_341},{&g_132,&g_132,(void*)0,&g_341},{&g_132,&g_2,&g_2,&g_341},{&g_132,&g_132,&g_341,&g_341},{&g_132,&g_132,&g_341,&g_2}},{{&g_132,&g_132,&g_341,&g_2},{&g_132,&g_132,&g_341,&g_341},{&g_132,&g_132,&g_341,&g_2},{&g_132,&g_132,&g_132,&g_2},{&g_132,&g_132,&g_341,&g_341},{&g_132,&g_132,&g_341,&g_341}},{{&g_132,&g_132,&g_341,&g_2},{&g_132,&g_132,&g_341,&g_2},{&g_132,&g_132,&g_341,&g_341},{&g_132,&g_132,&g_341,&g_2},{&g_132,&g_132,&g_132,&g_2},{&g_132,&g_132,&g_341,&g_341}},{{&g_132,&g_132,&g_341,&g_341},{&g_132,&g_132,&g_341,&g_2},{&g_132,&g_132,&g_341,&g_2},{&g_132,&g_132,&g_341,&g_341},{&g_132,&g_132,&g_341,&g_2},{&g_132,&g_132,&g_132,&g_2}}};
static const char g_355 = (-5L);
static char *g_371[3][3][3] = {{{&g_136,&g_136,&g_136},{&g_136,&g_102,&g_136},{&g_102,&g_136,&g_136}},{{&g_136,&g_136,(void*)0},{&g_102,&g_102,&g_136},{&g_136,&g_136,&g_136}},{{&g_102,&g_136,&g_136},{(void*)0,&g_102,(void*)0},{(void*)0,&g_102,&g_102}}};
static char **g_370[3][4][6] = {{{&g_371[2][0][0],(void*)0,(void*)0,&g_371[2][0][0],(void*)0,(void*)0},{&g_371[2][0][0],(void*)0,(void*)0,&g_371[2][0][0],(void*)0,(void*)0},{&g_371[2][0][0],(void*)0,(void*)0,&g_371[2][0][0],(void*)0,(void*)0},{&g_371[2][0][0],(void*)0,(void*)0,&g_371[2][0][0],(void*)0,(void*)0}},{{&g_371[2][0][0],(void*)0,(void*)0,&g_371[2][0][0],(void*)0,(void*)0},{&g_371[2][0][0],(void*)0,(void*)0,&g_371[2][0][0],(void*)0,(void*)0},{&g_371[2][0][0],(void*)0,(void*)0,&g_371[2][0][0],(void*)0,(void*)0},{&g_371[2][0][0],(void*)0,(void*)0,&g_371[2][0][0],(void*)0,(void*)0}},{{&g_371[2][0][0],(void*)0,(void*)0,&g_371[2][0][0],(void*)0,(void*)0},{&g_371[2][0][0],(void*)0,(void*)0,&g_371[2][0][0],(void*)0,(void*)0},{&g_371[2][0][0],(void*)0,(void*)0,&g_371[2][0][0],(void*)0,(void*)0},{&g_371[2][0][0],(void*)0,(void*)0,&g_371[2][0][0],(void*)0,(void*)0}}};
static char g_413[9][10] = {{0L,0xC0L,(-10L),0L,(-1L),(-1L),0L,(-10L),0xC0L,0L},{(-10L),0x24L,0xC0L,(-1L),0x24L,0xC0L,(-10L),0L,(-1L),(-1L)},{0L,0x24L,0x46L,0L,0L,0x46L,0x24L,0L,0x46L,0L},{0L,(-10L),0xC0L,0L,0xC0L,(-10L),0L,(-1L),(-1L),0L},{(-1L),0L,0xC0L,0xC0L,0L,(-1L),(-10L),0L,(-10L),(-1L)},{0x24L,0L,0x46L,0L,0x24L,0x46L,0L,0L,0x46L,0x24L},{0x24L,(-10L),(-10L),0x24L,0xC0L,(-1L),0x24L,(-1L),0xC0L,0x24L},{(-1L),0x24L,(-1L),0xC0L,0x24L,(-10L),(-10L),0x24L,0xC0L,(-1L)},{0L,0L,0x46L,0x24L,0L,0x46L,0L,0x24L,0x46L,0L}};
static int *g_421 = (void*)0;
static unsigned g_426 = 0UL;
static const unsigned *g_440 = &g_241;
static const unsigned **g_439 = &g_440;
static const short g_545 = 0x10BBL;
static unsigned g_550 = 4294967295UL;
static unsigned g_620 = 0UL;
static int ***g_644 = (void*)0;
static int ****g_643 = &g_644;
static int ***** const g_642 = &g_643;
static unsigned short g_704 = 0x4DBDL;
static unsigned char g_706 = 0x6BL;
static unsigned short *g_756 = &g_704;
static unsigned char g_786 = 2UL;
static int **g_791 = &g_421;
static unsigned char *g_810 = &g_786;
static unsigned char **g_809 = &g_810;
static char g_970 = 0xE6L;
static unsigned *g_1101 = &g_550;
static unsigned short g_1110 = 65535UL;
static int g_1130 = 0L;
static unsigned char g_1146 = 1UL;
static char g_1172[4] = {0xCBL,0xCBL,0xCBL,0xCBL};
static const int g_1185 = 0x346BFFACL;



static unsigned short func_1(void);
static short func_10(char p_11, unsigned short p_12, int p_13, int p_14);
static unsigned short func_19(int * p_20, unsigned p_21, int * p_22, unsigned p_23, int p_24);
static int * func_25(int p_26, int * p_27, int p_28, int p_29);
static int func_30(int p_31, unsigned char p_32, int * p_33, int * p_34, unsigned p_35);
static char func_40(int * p_41);
static unsigned short func_53(unsigned p_54, int p_55, unsigned short p_56, short p_57);
static int func_62(const int p_63, unsigned short p_64);
static char func_71(unsigned short p_72, int ** p_73, int * p_74, unsigned char p_75);
static int func_79(int ** p_80, int p_81);
static unsigned short func_1(void)
{
    int *l_3 = (void*)0;
    int *l_4 = &g_5;
    unsigned l_654 = 0x92FA73A2L;
    char l_655[2][2][10] = {{{0xB7L,0xB7L,(-1L),(-8L),0x07L,1L,3L,(-2L),(-7L),1L},{(-2L),0L,3L,0x4BL,9L,0x4BL,0x07L,0xB7L,0xAAL,0x1CL}},{{3L,0x1CL,1L,0xAFL,1L,0x94L,0x4BL,(-2L),(-2L),0x4BL},{0xB7L,3L,0xAFL,0xAFL,3L,0xB7L,(-8L),0x94L,0xAAL,(-1L)}}};
    int *l_713 = &g_134;
    short l_714 = 0x862CL;
    short l_993 = 0x4E70L;
    unsigned char l_1082 = 0xF3L;
    unsigned short l_1087 = 65532UL;
    unsigned char *l_1150 = &l_1082;
    unsigned char ***l_1153 = (void*)0;
    int **l_1161 = &g_172;
    int *l_1175 = &g_88;
    char l_1184 = (-1L);
    char l_1186 = (-9L);
    unsigned short **l_1190 = (void*)0;
    unsigned short ***l_1189 = &l_1190;
    int l_1201[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1201[i] = 0x76AC5B0CL;
    (*l_4) = g_2;
    if (((((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((g_5 == (((((((func_10(g_5, ((safe_lshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_u(((((*g_810) = (((g_2 > g_2) > ((void*)0 == &g_5)) ^ func_19(func_25((g_5 > ((func_30(g_2, (*l_4), &g_5, &g_5, g_5) ^ l_654) || (*l_4))), (*g_82), (*l_4), l_655[1][1][4]), g_205, l_713, l_714, (*l_713)))) | (*l_4)) && 4294967291UL), 1)) <= l_993) && (-1L)), (*l_4))) >= 0UL), (*l_4), (*l_4)) != l_1082) >= (*l_4)) > 0L) >= 0x945FF66AL) <= (*g_70)) || 0UL) == (-10L))) && 0x39L), (*l_4))), (*l_4))) >= 7L) & 0xD3DB98D3L) && (*l_4)))
    {
        char *l_1083 = &g_413[6][6];
        int l_1111[7][10][3] = {{{(-6L),9L,0x6FE68DB0L},{0x336F4C82L,0x6FE68DB0L,0x858C8A48L},{0x3E022586L,(-1L),1L},{0x6FE68DB0L,0x6FE68DB0L,(-1L)},{0xC7F60EDEL,9L,0x83E068F9L},{0xC7F60EDEL,0x32E85E65L,0x3E022586L},{0x6FE68DB0L,0x858C8A48L,9L},{0x3E022586L,0xC7F60EDEL,0x3E022586L},{0x336F4C82L,0x9F8AC6D7L,0x83E068F9L},{(-6L),0x9F8AC6D7L,(-1L)}},{{0x858C8A48L,0xC7F60EDEL,1L},{(-1L),0x858C8A48L,0x858C8A48L},{0x858C8A48L,0x32E85E65L,0x6FE68DB0L},{(-6L),9L,0x6FE68DB0L},{0x336F4C82L,0x6FE68DB0L,0x858C8A48L},{0x3E022586L,(-1L),1L},{0x6FE68DB0L,0x6FE68DB0L,(-1L)},{0xC7F60EDEL,9L,0x83E068F9L},{0xC7F60EDEL,0x32E85E65L,0x3E022586L},{0x6FE68DB0L,0x858C8A48L,9L}},{{0x3E022586L,0xC7F60EDEL,0x3E022586L},{0x336F4C82L,0x9F8AC6D7L,0x83E068F9L},{(-6L),0x9F8AC6D7L,(-1L)},{0x858C8A48L,0xC7F60EDEL,1L},{0x83E068F9L,0x32E85E65L,0x32E85E65L},{0x32E85E65L,(-1L),1L},{0xC7F60EDEL,0x9F8AC6D7L,1L},{9L,1L,0x32E85E65L},{0x336F4C82L,(-6L),(-1L)},{1L,1L,(-6L)}},{{0x3E022586L,0x9F8AC6D7L,0x6FE68DB0L},{0x3E022586L,(-1L),0x336F4C82L},{1L,0x32E85E65L,0x9F8AC6D7L},{0x336F4C82L,0x3E022586L,0x336F4C82L},{9L,0x858C8A48L,0x6FE68DB0L},{0xC7F60EDEL,0x858C8A48L,(-6L)},{0x32E85E65L,0x3E022586L,(-1L)},{0x83E068F9L,0x32E85E65L,0x32E85E65L},{0x32E85E65L,(-1L),1L},{0xC7F60EDEL,0x9F8AC6D7L,1L}},{{9L,1L,0x32E85E65L},{0x336F4C82L,(-6L),(-1L)},{1L,1L,(-6L)},{0x3E022586L,0x9F8AC6D7L,0x6FE68DB0L},{0x3E022586L,(-1L),0x336F4C82L},{1L,0x32E85E65L,0x9F8AC6D7L},{0x336F4C82L,0x3E022586L,0x336F4C82L},{9L,0x858C8A48L,0x6FE68DB0L},{0xC7F60EDEL,0x858C8A48L,(-6L)},{0x32E85E65L,0x3E022586L,(-1L)}},{{0x83E068F9L,0x32E85E65L,0x32E85E65L},{0x32E85E65L,(-1L),1L},{0xC7F60EDEL,0x9F8AC6D7L,1L},{9L,1L,0x32E85E65L},{0x336F4C82L,(-6L),(-1L)},{1L,1L,0xC7F60EDEL},{0x336F4C82L,0x858C8A48L,1L},{0x336F4C82L,0x83E068F9L,9L},{(-1L),(-1L),0x858C8A48L},{9L,0x336F4C82L,9L}},{{0x9F8AC6D7L,0x32E85E65L,1L},{0x3E022586L,0x32E85E65L,0xC7F60EDEL},{(-1L),0x336F4C82L,(-6L)},{0x6FE68DB0L,(-1L),(-1L)},{(-1L),0x83E068F9L,(-1L)},{0x3E022586L,0x858C8A48L,(-1L)},{0x9F8AC6D7L,(-1L),(-1L)},{9L,0xC7F60EDEL,(-6L)},{(-1L),(-1L),0xC7F60EDEL},{0x336F4C82L,0x858C8A48L,1L}}};
        int l_1138 = 0xB5674DEFL;
        const unsigned l_1152 = 1UL;
        char *l_1168 = &g_136;
        int i, j, k;
        (*l_713) = ((void*)0 != l_1083);
        if (((**g_69) = ((*l_4) & (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((((*l_1083) = (!0x5CL)) >= (*g_271)))), g_545)))))
        {
            const unsigned short l_1098 = 1UL;
            int *l_1113 = (void*)0;
            int **l_1117 = &l_713;
            if (l_1087)
            {
                int **l_1088[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1088[i] = &l_3;
                (**g_69) = (l_1088[2] == &g_83);
                (*l_4) = 3L;
                for (l_654 = 9; (l_654 >= 49); l_654 = safe_add_func_uint32_t_u_u(l_654, 1))
                {
                    return g_105[0];
                }
                (*g_70) = (~(**g_69));
            }
            else
            {
                char l_1091 = 1L;
                (*g_70) = l_1091;
            }
            for (g_786 = 0; (g_786 >= 30); g_786++)
            {
                unsigned char l_1116 = 0xFCL;
                int **l_1120 = &g_83;
                unsigned short *l_1121 = &g_192;
                unsigned short *l_1122 = &g_205;
                (*g_82) = l_4;

                ;
                for (g_241 = 26; (g_241 < 48); g_241 = safe_add_func_uint16_t_u_u(g_241, 3))
                {
                    unsigned char ***l_1096[1][5];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_1096[i][j] = &g_809;
                    }
                }
                if (((**g_82) ^ ((safe_add_func_int16_t_s_s((l_1116 <= func_71(l_1116, (l_1117 = &g_421), (*g_82), (((*l_1122) = (((*l_1083) = (safe_sub_func_int16_t_s_s(0L, ((*l_1121) = ((**l_1120) ^ (*g_1101)))))) || l_1098)) == (-1L)))), 0xB72DL)) > (*l_4))))
                {
                    char l_1126 = 0xD4L;
                    int *l_1135 = (void*)0;
                    int *l_1136[4][7][6] = {{{&l_1111[6][2][2],&g_5,&g_88,&g_88,&g_5,(void*)0},{&g_84,&g_88,(void*)0,&g_84,&g_5,&g_84},{&g_84,&g_5,&g_84,&g_5,&g_5,&g_84},{&l_1111[6][2][2],&g_5,(void*)0,&g_84,&g_88,(void*)0},{&g_88,&l_1111[4][2][0],&g_88,(void*)0,&g_5,(void*)0},{&g_5,&g_5,&g_88,&g_5,&g_5,(void*)0},{(void*)0,&g_5,(void*)0,&g_84,&l_1111[4][2][0],&g_84}},{{&g_84,&l_1111[4][2][0],&g_84,&g_5,&g_5,&g_84},{&g_5,&l_1111[6][2][2],(void*)0,&g_88,&g_5,&g_84},{(void*)0,&g_88,(void*)0,&l_1111[6][2][2],&g_5,&l_1111[0][3][0]},{(void*)0,&g_88,(void*)0,&g_84,&g_84,&g_84},{&l_1111[4][2][0],(void*)0,&l_1111[0][3][0],&l_1111[4][2][0],&g_88,&g_5},{&l_1111[4][2][0],&g_88,&g_5,&g_88,&g_88,&g_5},{(void*)0,(void*)0,&l_1111[0][3][0],&g_5,(void*)0,&g_84}},{{&g_84,&g_5,(void*)0,&g_5,&g_88,&l_1111[0][3][0]},{&g_84,&g_84,(void*)0,&g_88,(void*)0,&g_84},{&g_5,&g_88,&l_1111[0][3][0],&l_1111[4][2][0],&g_5,&g_5},{&l_1111[4][2][0],&g_5,&g_5,(void*)0,&g_84,&g_5},{&g_84,&g_84,&l_1111[0][3][0],&l_1111[6][2][2],&g_88,&g_84},{&g_88,&g_5,(void*)0,&g_5,&g_5,&l_1111[0][3][0]},{&g_84,(void*)0,(void*)0,(void*)0,&g_84,&g_84}},{{&l_1111[4][2][0],&g_84,&l_1111[0][3][0],&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_84,(void*)0,&g_5},{&g_84,&g_84,&l_1111[0][3][0],&g_5,&g_84,&g_84},{(void*)0,&g_88,(void*)0,&l_1111[6][2][2],&l_1111[4][2][0],&g_84},{&g_134,&g_134,&l_1111[4][2][0],&g_5,&l_1111[6][5][0],&g_88},{&l_1111[4][2][0],(void*)0,&g_84,&l_1111[4][2][0],&g_134,&g_84},{&l_1111[4][2][0],&g_134,&g_84,&g_134,&g_134,&g_84}}};
                    short *l_1137[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1137[i] = &g_341;
                    for (g_84 = 2; (g_84 >= 0); g_84 -= 1)
                    {
                        unsigned l_1123 = 0x081F0862L;
                        (**g_82) = (((void*)0 != (*g_82)) ^ (*g_1101));
                        if (l_1123)
                            break;
                    }
                    (*l_713) = ((**g_69) = (safe_rshift_func_uint16_t_u_s((*l_713), (((*l_1083) = l_1126) && (((*g_266) = (safe_mod_func_int32_t_s_s((*g_83), ((*g_1101) = 0x7E129F9FL)))) & (1UL || ((safe_unary_minus_func_int8_t_s(g_1130)) >= (l_1111[0][1][2] | ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((((l_1138 = ((g_84 = l_1126) != (**g_439))) & l_1111[6][0][1]) | (*l_713)), (*l_713))), 1L)) >= g_198)))))))));
                }
                else
                {
                    if ((**g_82))
                        break;
                    (*l_1117) = &l_1111[4][2][0];

                    ;
                    (*l_1117) = l_713;

                    ;
                    (*l_1120) = (*g_791);

                    ;
                }

                ;
                ;
            }

            ;
            return g_341;
        }
        else
        {
            unsigned l_1160 = 0xC9E438D1L;
            for (g_84 = 2; (g_84 >= 0); g_84 -= 1)
            {
                unsigned short l_1143 = 0x707FL;
                unsigned char *l_1147 = &g_786;
                unsigned char *l_1149 = &g_706;
                int l_1163 = 7L;
                for (l_993 = 2; (l_993 >= 0); l_993 -= 1)
                {
                    unsigned char **l_1148 = (void*)0;
                    int l_1151[9][2] = {{0x8F26C578L,(-3L)},{(-1L),1L},{(-1L),(-3L)},{0x8F26C578L,0x8F26C578L},{(-3L),(-1L)},{1L,(-1L)},{(-3L),0x8F26C578L},{0x8F26C578L,(-3L)},{(-1L),1L}};
                    int **l_1162 = &g_83;
                    int i, j;
                }
                if (l_1160)
                    break;
                return g_1172[1];
            }
        }
        (*g_82) = &l_1138;

        ;
        l_3 = (void*)0;
    }
    else
    {
        unsigned short **l_1174[3];
        unsigned short ***l_1173 = &l_1174[1];
        unsigned l_1178 = 0x4C5450FFL;
        unsigned *l_1183 = &g_620;
        unsigned *l_1192 = (void*)0;
        unsigned **l_1191 = &l_1192;
        int l_1199 = 0L;
        int l_1200[1];
        int *l_1202[5][4] = {{&l_1200[0],&l_1200[0],(void*)0,&l_1200[0]},{&l_1200[0],(void*)0,(void*)0,&l_1200[0]},{(void*)0,&l_1200[0],(void*)0,(void*)0},{&l_1200[0],&l_1200[0],(void*)0,&l_1200[0]},{&l_1200[0],(void*)0,(void*)0,&l_1200[0]}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_1174[i] = &g_756;
        for (i = 0; i < 1; i++)
            l_1200[i] = 1L;
        (*g_82) = func_25((((*l_1173) = &g_756) == &g_756), func_25((*l_4), l_1175, ((*l_713) = (safe_sub_func_uint16_t_u_u(((l_1178 >= (safe_mul_func_uint8_t_u_u(((*l_713) <= 1UL), (-9L)))) > 65535UL), l_1178))), (*l_1175)), (**g_69), l_1178);

        ;
        (*g_70) = ((l_1178 | (g_1185 >= ((*g_266) = (safe_sub_func_uint32_t_u_u((*g_1101), ((void*)0 == l_1189)))))) <= (l_1178 < (((*l_713) = ((((*l_1191) = l_1183) == (void*)0) > (((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_1200[0] = l_1199), 0x22L)), l_1178)), 0xF3L)) < l_1201[4]) != (*l_1175)))) & 0x400BL)));

        ;
        (*g_791) = l_1202[3][2];

        ;
    }



    ;
    return g_105[1];
}







static short func_10(char p_11, unsigned short p_12, int p_13, int p_14)
{
    int l_1001 = 0x1AB27E12L;
    int *l_1014 = &g_134;
    const unsigned short l_1019 = 0xFBD3L;
    unsigned char **l_1028 = &g_810;
    int l_1045 = 9L;
    unsigned l_1071[10] = {0xC78E9137L,0xC78E9137L,0xC78E9137L,0xC78E9137L,0xC78E9137L,0xC78E9137L,0xC78E9137L,0xC78E9137L,0xC78E9137L,0xC78E9137L};
    int i;
    for (p_13 = 0; (p_13 <= 3); p_13 += 1)
    {
        short l_1005 = (-2L);
        int l_1008[2][3][7] = {{{0xE442A19CL,0xE442A19CL,(-3L),0L,1L,0L,(-3L)},{0xE442A19CL,0xE442A19CL,(-3L),0L,1L,0L,(-3L)},{0xE442A19CL,0xE442A19CL,(-3L),0L,1L,0L,(-3L)}},{{0xE442A19CL,0xE442A19CL,(-3L),0L,1L,0L,0x05D3D7E0L},{(-3L),(-3L),0x05D3D7E0L,0xD4A2B942L,0xE442A19CL,0xD4A2B942L,0x05D3D7E0L},{(-3L),(-3L),0x05D3D7E0L,0xD4A2B942L,0xE442A19CL,0xD4A2B942L,0x05D3D7E0L}}};
        int **l_1011 = &g_172;
        int *l_1013 = &l_1008[1][2][0];
        int i, j, k;
        for (g_198 = 0; (g_198 <= 3); g_198 += 1)
        {
            int l_1006 = 0x32061987L;
            unsigned *l_1007 = (void*)0;
            int *l_1009 = (void*)0;
            int *l_1010 = &g_88;
            for (p_14 = 1; (p_14 >= 0); p_14 -= 1)
            {
                int i;
                return g_105[p_14];


            }
            (*l_1010) = func_62((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_u(l_1001, ((**g_809) = (safe_unary_minus_func_uint32_t_u((l_1008[1][2][0] = (!(safe_mul_func_int8_t_s_s((l_1005 == ((*g_271) = ((l_1006 & 0UL) >= p_11))), p_13))))))))))), (p_13 > 1L))), l_1005)), l_1005);
            for (g_136 = 1; (g_136 >= 0); g_136 -= 1)
            {
                if (p_14)
                    break;
                return p_12;


            }
        }
        for (p_11 = 0; (p_11 <= 3); p_11 += 1)
        {
            int *l_1012 = &g_134;
            if (((void*)0 == l_1011))
            {
                (*g_791) = l_1012;

                ;
            }
            else
            {
                (*g_82) = (l_1013 = &p_14);

                ;
                ;
                for (g_192 = 0; (g_192 <= 3); g_192 += 1)
                {
                    (*g_791) = (*g_791);
                    l_1014 = ((*g_791) = l_1014);

                    ;
                }
            }
            for (g_136 = 3; (g_136 >= 0); g_136 -= 1)
            {
                unsigned short l_1015 = 0xE327L;
                int l_1018 = 0L;
                unsigned *l_1020[5];
                unsigned char *** const l_1025 = &g_809;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1020[i] = &g_241;
                (*g_791) = func_25(((*l_1013) ^ (l_1015 != (safe_mul_func_int8_t_s_s(((l_1019 | (l_1018 = ((*l_1014) != (*l_1013)))) | (*g_266)), (*l_1014))))), &l_1008[1][2][0], l_1015, p_12);


                ;
                (*g_791) = func_25((*g_70), ((*g_82) = (void*)0), p_13, ((*l_1012) = ((safe_sub_func_int8_t_s_s(l_1015, (**g_809))) != (((p_13 && (func_30((safe_mul_func_int8_t_s_s(func_30((*l_1012), p_13, &p_14, (*g_791), g_198), p_12)), p_11, &l_1008[0][0][5], &l_1008[1][2][0], (*l_1013)) == (*l_1014))) == p_13) != 0x10L))));
                (*g_791) = func_25(((void*)0 != l_1025), &p_14, (*l_1013), p_13);
            }
            (*g_82) = &p_14;

            ;
        }

        ;
    }


    if (p_14)
    {
        unsigned l_1026 = 9UL;
        char *l_1027 = &g_136;
        int l_1031 = 0x1E23BF63L;
        (*l_1014) = 1L;
        (*l_1014) = (((*l_1027) = l_1026) | func_62((l_1028 == l_1028), (safe_add_func_int32_t_s_s((((p_11 == p_13) > 0UL) || (l_1031 = (*l_1014))), p_12))));
    }
    else
    {
        int l_1038 = (-1L);
        int l_1080 = 0x1D4915A5L;
        int l_1081[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1081[i] = 0x259F8204L;
        for (g_136 = (-10); (g_136 == 6); g_136++)
        {
            unsigned short *l_1054 = &g_105[0];
            int *l_1055 = &l_1038;
            unsigned char l_1056 = 0UL;
            (*l_1014) = (safe_lshift_func_uint16_t_u_s((((*l_1055) = ((safe_rshift_func_uint16_t_u_u(l_1038, (safe_rshift_func_uint8_t_u_u(0x3DL, func_62((4L < (safe_sub_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(l_1045, (p_13 != (*l_1014)))) ^ l_1038) ^ (-1L)), 5UL))), l_1038))))) >= 0x52C1L)) | l_1056), 4));
        }
        for (g_132 = 1; (g_132 >= 0); g_132 -= 1)
        {
            int *l_1057[5][6][6] = {{{(void*)0,&l_1045,&g_5,&g_84,&g_84,&l_1045},{&g_88,&g_5,&g_88,&l_1045,&l_1045,&l_1045},{&l_1045,(void*)0,&g_84,&g_88,&g_88,&g_84},{&l_1045,&l_1045,(void*)0,&g_84,(void*)0,(void*)0},{&g_84,&g_84,&g_5,&g_5,&g_5,(void*)0},{&g_88,&g_84,&g_5,(void*)0,&l_1045,(void*)0}},{{&g_84,(void*)0,(void*)0,&g_5,&l_1045,&g_84},{&g_5,&l_1045,&g_84,&l_1045,&g_84,&l_1045},{&g_134,&g_5,&g_88,(void*)0,(void*)0,&l_1045},{(void*)0,&g_88,&g_5,&g_5,(void*)0,&g_5},{&g_88,&g_88,(void*)0,&g_88,(void*)0,(void*)0},{&l_1045,&g_5,&l_1045,(void*)0,&g_84,&g_88}},{{&l_1045,&l_1045,&g_5,&g_5,&l_1045,&l_1045},{&l_1038,(void*)0,&l_1045,&g_84,&g_88,&g_5},{&g_84,&g_5,&g_5,&g_5,(void*)0,&g_5},{&g_84,&g_88,&g_5,&g_84,&l_1045,&l_1045},{&l_1045,&g_88,&g_5,(void*)0,&g_5,&g_88},{&g_88,&g_5,&g_134,&g_5,&g_88,(void*)0}},{{&l_1045,&g_88,&g_88,&l_1045,&g_5,&g_84},{&g_5,&g_88,&l_1045,&g_88,&g_5,&g_84},{&g_5,(void*)0,&g_88,&g_88,&l_1045,(void*)0},{&g_5,&g_84,&g_134,&l_1045,&g_88,&g_88},{&l_1038,&g_5,&g_5,&l_1038,(void*)0,&l_1045},{&g_5,(void*)0,&g_5,&g_134,&g_84,&g_5}},{{(void*)0,&g_84,&g_5,&l_1045,&g_84,&g_5},{&g_5,(void*)0,&l_1045,(void*)0,(void*)0,&g_88},{&g_88,&g_5,(void*)0,&g_5,&g_88,&g_5},{(void*)0,&g_84,(void*)0,&g_88,&l_1045,&l_1045},{&l_1045,(void*)0,&g_88,&g_5,&g_5,(void*)0},{&l_1045,&g_88,&g_5,&g_88,(void*)0,&g_134}}};
            unsigned char *l_1069 = &g_786;
            int i, j, k;
            l_1038 = 0L;
            for (p_13 = 1; (p_13 >= 0); p_13 -= 1)
            {
                unsigned l_1066 = 4294967286UL;
                (*g_791) = ((*g_82) = l_1057[0][1][4]);

                ;
                for (p_12 = 0; (p_12 <= 1); p_12 += 1)
                {
                    short *l_1064 = (void*)0;
                    short *l_1065[1][6][6] = {{{&g_341,&g_341,&g_2,&g_341,&g_341,&g_341},{&g_341,&g_341,&g_341,&g_341,&g_341,&g_341},{&g_341,&g_341,&g_2,&g_341,&g_341,&g_341},{&g_341,&g_341,&g_341,&g_341,&g_341,&g_341},{&g_341,&g_341,&g_2,&g_341,&g_341,&g_341},{&g_341,&g_341,&g_341,&g_341,&g_341,&g_341}}};
                    const int l_1070[10][7] = {{0L,(-8L),1L,0x10EB6F78L,(-8L),6L,(-8L)},{1L,0x651B594CL,0x651B594CL,1L,0x94B09837L,0x36C97D66L,0L},{0xA45856F7L,0x3855A586L,0x651B594CL,(-1L),0L,0xA45856F7L,0xA45856F7L},{0x3855A586L,0L,1L,0L,0x3855A586L,0L,0L},{1L,0x94B09837L,0x36C97D66L,0L,0x651B594CL,0x36C97D66L,(-8L)},{0x651B594CL,(-8L),(-1L),(-1L),(-8L),0x651B594CL,0x94B09837L},{1L,0L,6L,1L,(-8L),0x74A0FB6EL,0L},{0x3855A586L,0xA45856F7L,0x651B594CL,0x10EB6F78L,0x651B594CL,0xA45856F7L,0x94B09837L},{(-4L),0xA45856F7L,0x74A0FB6EL,0L,0x94B09837L,(-4L),0L},{0x651B594CL,(-1L),0L,0xA45856F7L,0xA45856F7L,0L,(-1L)}};
                    int i, j, k;
                    g_88 = ((**g_439) == (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((p_12 || p_14), (l_1066 = (safe_sub_func_int32_t_s_s(p_11, (0xDD07L == (l_1038 = ((*l_1014) = (-1L))))))))), (safe_sub_func_uint8_t_u_u(((void*)0 == l_1069), ((((**g_809) = ((p_13 != (**g_439)) == l_1070[4][3])) == l_1071[1]) | p_11))))));
                }
            }
        }


        ;
        l_1081[0] = (safe_sub_func_uint32_t_u_u(((void*)0 == (*g_809)), (safe_rshift_func_uint16_t_u_u(0UL, ((((l_1038 = (safe_mul_func_uint16_t_u_u(0xAAF3L, (l_1080 = (safe_mul_func_int16_t_s_s((p_12 ^ (p_13 > func_62(p_12, p_12))), p_11)))))) <= p_13) >= 0x4A785EF8L) > 1UL)))));
    }



    return p_14;



}







static unsigned short func_19(int * p_20, unsigned p_21, int * p_22, unsigned p_23, int p_24)
{
    int **l_721 = &g_421;
    int l_722[4][5] = {{1L,7L,1L,1L,7L},{1L,7L,1L,1L,7L},{1L,7L,1L,1L,7L},{1L,7L,1L,1L,7L}};
    unsigned short *l_727 = &g_205;
    unsigned char *l_746[9][8] = {{&g_706,(void*)0,&g_706,&g_706,&g_272,&g_272,(void*)0,(void*)0},{(void*)0,&g_272,&g_272,&g_272,&g_272,(void*)0,&g_272,(void*)0},{(void*)0,&g_272,&g_272,&g_272,&g_272,&g_272,&g_272,&g_272},{&g_706,&g_272,&g_272,&g_272,(void*)0,&g_706,&g_706,(void*)0},{&g_272,(void*)0,(void*)0,&g_272,&g_706,&g_272,&g_706,(void*)0},{&g_272,&g_272,&g_272,&g_706,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272,&g_272,&g_272,&g_272},{(void*)0,(void*)0,&g_272,&g_706,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272,&g_706,(void*)0,&g_272}};
    unsigned char **l_745 = &l_746[6][4];
    unsigned l_775[2];
    char **l_779 = (void*)0;
    const unsigned short l_794 = 65527UL;
    unsigned short l_956 = 0x0AF2L;
    unsigned l_973 = 0UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_775[i] = 4294967292UL;
    if (((*g_70) | (safe_lshift_func_int16_t_s_s((*g_266), (safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((((l_721 == l_721) || (4294967292UL <= l_722[3][3])) <= (safe_rshift_func_uint8_t_u_u(((*g_271) = ((safe_add_func_uint16_t_u_u(((*l_727) = l_722[2][2]), p_21)) ^ ((*p_22) = ((safe_rshift_func_int8_t_s_s(((!((!(safe_add_func_int32_t_s_s((*p_22), 0x4A6E2466L))) == l_722[3][3])) ^ 0xD534L), 4)) & l_722[3][3])))), p_24))), g_550)), g_102))))))
    {
        unsigned char l_734 = 0xB0L;
        int l_748 = 0x895D2622L;
        for (g_84 = (-8); (g_84 <= 28); g_84++)
        {
            unsigned char **l_739 = (void*)0;
            unsigned char *l_740 = &g_706;
            int *l_747 = &g_134;
            unsigned char l_749 = 252UL;
            l_734 = 0x4558F635L;
            (*p_22) = (((safe_mul_func_uint16_t_u_u((((p_24 || (((**g_439) && ((safe_sub_func_uint16_t_u_u(0x2FA9L, p_23)) | ((&g_706 != (l_740 = &l_734)) & l_734))) < (safe_add_func_int16_t_s_s(((*g_266) = (safe_lshift_func_int8_t_s_s(func_30((*g_70), func_30((l_745 == (void*)0), (*g_271), p_22, l_747, p_24), p_22, &g_5, g_198), 5))), l_748)))) > l_749) || p_24), (*l_747))) <= 0x13L) || 65531UL);

            ;
        }
    }
    else
    {
        unsigned l_763 = 4294967287UL;
        int *l_767 = &g_134;
        char **l_776 = &g_371[0][2][2];
        unsigned l_815 = 0UL;
        unsigned short *l_891 = &g_192;
        unsigned *l_949 = (void*)0;
        for (g_241 = 0; (g_241 < 36); g_241++)
        {
            unsigned short *l_754[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            unsigned short **l_755 = &l_727;
            int l_757 = 0x052FC459L;
            int i;
            (*p_20) = (safe_lshift_func_uint16_t_u_u(p_23, ((g_756 = ((*l_755) = l_754[4])) != &g_704)));

            ;
            ;
            return l_757;
        }
        for (p_21 = 0; (p_21 >= 11); p_21 = safe_add_func_int32_t_s_s(p_21, 9))
        {
            int *l_762[8] = {&g_95,(void*)0,&g_95,(void*)0,&g_95,(void*)0,&g_95,(void*)0};
            int l_766 = 0x50204332L;
            char *l_768 = &g_102;
            int *l_800 = &g_88;
            unsigned short *l_805[4];
            int ** const *l_859 = &g_171;
            int i;
            for (i = 0; i < 4; i++)
                l_805[i] = (void*)0;
        }
        for (g_620 = 10; (g_620 >= 54); ++g_620)
        {
            int l_893 = (-1L);
            int *l_895 = &g_5;
            short *l_897 = &g_341;
            unsigned char *l_899 = &g_786;
            int ** const l_933[3][1] = {{(void*)0},{(void*)0},{(void*)0}};
            unsigned short l_986 = 0x557FL;
            int i, j;
            if ((*l_767))
            {
                short l_878 = 0x050BL;
                int l_880 = 0x679E39B4L;
                int **l_894 = (void*)0;
                unsigned l_898 = 0x7BD426DFL;
                (*g_791) = (void*)0;

                ;
                if ((*p_22))
                {
                    short *l_873 = &g_341;
                    short *l_879[9];
                    int *l_892 = &g_84;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_879[i] = &l_878;
                    (*g_82) = func_25((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((*l_892), (*g_271))), 0)), (*g_791), (*l_767), (*l_767));

                    ;
                    ;
                }
                else
                {
                    unsigned char l_913 = 3UL;
                    int l_922 = 1L;
                    for (g_198 = 1; (g_198 >= 0); g_198 -= 1)
                    {
                        short * const l_896 = &g_341;
                        int i;
                        (*l_721) = func_25(l_775[g_198], (*g_791), ((*g_756) != (p_21 == ((*l_891) = ((*g_271) & (l_896 == l_897))))), p_24);


                        ;
                        if ((**l_721))
                            continue;
                        if (l_898)
                            break;
                    }

                    ;
                    for (g_192 = 0; (g_192 <= 2); g_192 += 1)
                    {
                        (*l_721) = p_22;

                        ;
                        (*g_82) = ((*g_791) = p_20);

                        ;
                        ;
                    }
                    if ((l_899 != (void*)0))
                    {
                        (*p_22) = 0xDC47023BL;
                        (*l_721) = func_25((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s((*p_20), ((void*)0 == (*g_642)))))) > ((*g_266) = (~p_21))), ((+(safe_lshift_func_uint16_t_u_u((*g_756), (*g_756)))) | (*l_767)))), (*l_721), l_913, p_21);


                        ;
                        return (*g_756);
                    }
                    else
                    {
                        unsigned char l_916 = 1UL;
                        int ***l_921[9][4][5] = {{{&g_82,&g_82,&l_894,&l_721,&l_721},{&g_82,&l_721,&l_894,(void*)0,&l_721},{&g_82,&l_894,&g_791,&g_82,&l_721},{&g_82,(void*)0,(void*)0,&l_894,&l_721}},{{&l_721,&g_82,&l_721,&g_82,&l_721},{&g_82,&g_82,&l_894,&l_721,&l_721},{&g_82,&l_721,&l_894,(void*)0,&l_721},{&g_82,&l_894,&g_791,&g_82,&l_721}},{{&g_82,(void*)0,(void*)0,&l_894,&l_721},{&l_721,&g_82,&l_721,&g_82,&l_721},{&g_82,&g_82,&l_894,&l_721,&l_721},{&g_82,&l_721,&l_894,(void*)0,&l_721}},{{&g_82,&l_894,&g_791,&g_82,&l_721},{&l_894,&g_82,&g_82,&g_82,&g_82},{&g_82,&g_82,&g_791,&g_82,&g_82},{&g_791,&l_721,(void*)0,&g_82,&g_82}},{{&l_721,&g_82,&g_791,&g_82,&g_82},{&g_791,&g_82,&l_894,&l_721,&g_82},{&l_894,&g_82,&g_82,&g_82,&g_82},{&g_82,&g_82,&g_791,&g_82,&g_82}},{{&g_791,&l_721,(void*)0,&g_82,&g_82},{&l_721,&g_82,&g_791,&g_82,&g_82},{&g_791,&g_82,&l_894,&l_721,&g_82},{&l_894,&g_82,&g_82,&g_82,&g_82}},{{&g_82,&g_82,&g_791,&g_82,&g_82},{&g_791,&l_721,(void*)0,&g_82,&g_82},{&l_721,&g_82,&g_791,&g_82,&g_82},{&g_791,&g_82,&l_894,&l_721,&g_82}},{{&l_894,&g_82,&g_82,&g_82,&g_82},{&g_82,&g_82,&g_791,&g_82,&g_82},{&g_791,&l_721,(void*)0,&g_82,&g_82},{&l_721,&g_82,&g_791,&g_82,&g_82}},{{&l_721,(void*)0,&g_82,&l_894,&l_894},{&g_82,&g_791,&g_791,(void*)0,&l_894},{&l_894,&g_82,&g_791,&g_82,&l_894},{&g_82,&l_894,&l_894,&g_791,&l_894}}};
                        unsigned *l_934 = &l_775[1];
                        int i, j, k;
                        (*p_22) = (*g_70);
                        (*l_721) = func_25(func_30((*l_895), (safe_lshift_func_uint16_t_u_u(l_916, 13)), l_767, p_22, (safe_mod_func_int8_t_s_s((l_922 = (safe_sub_func_int32_t_s_s(((*g_266) > (*g_756)), p_21))), p_23))), (*g_791), (*g_70), p_21);


                        ;
                        (*p_22) = (safe_mul_func_uint8_t_u_u((*g_271), func_30((safe_add_func_uint32_t_u_u((g_550 = (**l_721)), (*p_20))), (l_922 || (safe_sub_func_int8_t_s_s(((*l_767) & (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u(((l_933[0][0] != l_933[0][0]) ^ ((*l_934) = (**g_439))), func_30((*g_70), (**g_809), l_767, (*g_791), g_88))) ^ (*g_756)), 13))), p_24))), l_767, p_22, g_413[4][5])));
                        if ((*p_20))
                            continue;
                    }


                    ;
                }


                ;
            }
            else
            {
                unsigned *l_941 = &l_815;
                unsigned *l_942 = &l_763;
                unsigned *l_943 = &g_550;
                int l_960 = 0xC6BAA666L;
                int l_963 = 0x2637D694L;
                int l_964 = 0xC50AB231L;
                unsigned l_974 = 0xEEF2E995L;
                if (((-3L) & (+((*l_943) = ((*l_942) = ((*l_941) = (safe_lshift_func_uint16_t_u_s(func_62((*p_20), ((safe_mod_func_uint8_t_u_u(((**g_439) >= (~(*l_895))), func_30((*l_895), ((safe_sub_func_uint32_t_u_u((**g_439), (*l_767))) >= (*g_440)), p_20, p_22, (*l_895)))) ^ 65535UL)), (**g_265)))))))))
                {
                    unsigned l_950 = 0x4B522869L;
                    int l_957 = (-6L);
                    if ((*l_767))
                    {
                        char *l_948 = &g_413[2][3];
                        int **l_951 = &g_421;
                        (*p_22) = (((*l_897) = (safe_mul_func_uint8_t_u_u(0xA3L, (-6L)))) || ((*g_756) = ((*g_810) || 255UL)));
                        if ((*p_20))
                            continue;
                        (*l_951) = (*g_69);

                        ;
                        (*g_791) = func_25((*l_767), p_22, ((-1L) ^ (safe_sub_func_int8_t_s_s(l_950, ((p_23 > (safe_lshift_func_int8_t_s_s((l_957 = l_956), 7))) > ((**l_951) || (((safe_lshift_func_uint8_t_u_u((l_960 ^ (((safe_rshift_func_uint16_t_u_u((l_963 && 0L), p_21)) & (**l_951)) == (*g_271))), 2)) <= 1L) | l_964)))))), p_21);


                        ;
                    }
                    else
                    {
                        (*p_20) = ((*l_767) = (-1L));
                        (*p_20) = ((*p_22) = (*p_22));
                    }
                    for (g_706 = (-20); (g_706 >= 47); ++g_706)
                    {
                        short l_967 = 8L;
                        (*g_791) = p_20;

                        ;
                        return l_967;
                    }
                    (*l_721) = p_22;

                    ;
                    if ((safe_rshift_func_int8_t_s_u(g_970, 7)))
                    {
                        (*g_421) = l_964;
                        if ((**l_721))
                            break;
                    }
                    else
                    {
                        return p_21;
                    }
                }
                else
                {
                    unsigned l_975 = 0UL;
                    for (g_192 = 9; (g_192 == 48); ++g_192)
                    {
                        (*p_20) = func_62(func_62((*p_22), func_30((249UL >= (*l_767)), (+246UL), (*g_791), p_20, g_132)), l_973);
                        (*p_20) = l_974;
                        if (l_975)
                            continue;
                    }
                    return p_23;
                }

                ;
                for (g_706 = 0; (g_706 >= 57); g_706++)
                {
                    int l_978 = (-1L);
                    int l_980 = (-5L);
                    l_978 = (*p_20);
                    if ((~(*p_22)))
                    {
                        int **l_979 = &g_83;
                        if ((*l_895))
                            break;
                        (*l_979) = (*g_69);

                        ;
                    }
                    else
                    {
                        if ((*g_421))
                            break;
                        (*l_721) = (void*)0;

                        ;
                        return l_980;
                    }

                    ;
                    return (*l_767);
                }
                for (g_786 = 0; (g_786 <= 36); ++g_786)
                {
                    char l_992 = 1L;
                }
            }
        }


        ;
    }


    ;
    (*g_791) = p_22;

    ;
    (*g_82) = p_20;

    ;
    return (**l_721);
}







static int * func_25(int p_26, int * p_27, int p_28, int p_29)
{
    int l_657 = (-6L);
    int **l_666 = &g_172;
    int *l_669 = (void*)0;
    int *l_710 = &g_84;
    int *l_711[7][2] = {{&g_84,&l_657},{&g_84,&g_84},{(void*)0,(void*)0},{&g_84,&g_84},{&l_657,&g_84},{&g_84,(void*)0},{(void*)0,&g_84}};
    int *l_712 = &g_84;
    int i, j;
    for (g_192 = 0; (g_192 <= 3); g_192 += 1)
    {
        int **l_656 = &g_421;
        int * const *l_661 = &g_172;
        int * const **l_660[2][4][1] = {{{(void*)0},{(void*)0},{&l_661},{(void*)0}},{{(void*)0},{&l_661},{(void*)0},{(void*)0}}};
        short *l_701 = &g_2;
        int l_708 = 0x3E02164AL;
        int i, j, k;
        (*l_656) = (*g_69);

        ;
        for (g_241 = 0; (g_241 <= 3); g_241 += 1)
        {
            short l_667 = 0xFE0DL;
        }
    }
    (*l_710) = (l_657 = (l_666 == (void*)0));
    (*g_82) = &l_657;

    ;
    return l_712;



}







static int func_30(int p_31, unsigned char p_32, int * p_33, int * p_34, unsigned p_35)
{
    int *l_400[10][6][4] = {{{(void*)0,&g_5,&g_84,&g_84},{&g_5,&g_88,(void*)0,&g_134},{(void*)0,&g_88,&g_88,(void*)0},{(void*)0,(void*)0,&g_84,&g_5},{&g_134,&g_88,&g_5,(void*)0},{&g_134,&g_84,&g_5,&g_84}},{{&g_5,(void*)0,&g_84,&g_84},{&g_88,&g_88,&g_134,&g_88},{(void*)0,&g_84,&g_5,&g_5},{&g_134,&g_84,&g_84,&g_84},{&g_88,&g_134,&g_88,(void*)0},{&g_84,&g_134,&g_134,&g_84}},{{&g_84,&g_5,(void*)0,&g_88},{&g_88,&g_134,&g_5,&g_5},{&g_5,(void*)0,&g_88,&g_5},{(void*)0,&g_88,&g_88,&g_5},{(void*)0,&g_134,&g_88,(void*)0},{&g_84,(void*)0,&g_5,&g_88}},{{(void*)0,&g_88,&g_84,&g_84},{&g_84,&g_134,(void*)0,&g_88},{&g_134,(void*)0,(void*)0,&g_5},{&g_84,&g_84,&g_88,&g_88},{&g_5,&g_88,&g_84,(void*)0},{(void*)0,&g_5,&g_88,&g_5}},{{(void*)0,(void*)0,&g_84,&g_88},{&g_5,&g_5,&g_5,&g_134},{&g_5,&g_5,(void*)0,&g_88},{(void*)0,&g_84,(void*)0,&g_5},{&g_84,(void*)0,&g_134,&g_84},{&g_5,&g_88,&g_5,&g_84}},{{&g_5,&g_84,&g_88,&g_5},{(void*)0,&g_84,&g_84,&g_134},{&g_88,&g_5,&g_88,&g_5},{&g_84,&g_88,&g_134,(void*)0},{&g_88,&g_84,&g_5,(void*)0},{&g_84,&g_5,(void*)0,&g_84}},{{(void*)0,&g_5,&g_5,&g_84},{(void*)0,&g_84,&g_88,&g_5},{(void*)0,&g_5,&g_5,&g_88},{(void*)0,&g_88,(void*)0,(void*)0},{&g_5,&g_134,&g_5,&g_88},{&g_88,&g_88,&g_84,&g_134}},{{(void*)0,&g_88,&g_84,&g_84},{&g_88,&g_84,&g_5,(void*)0},{&g_5,&g_5,(void*)0,&g_84},{(void*)0,&g_84,&g_5,&g_88},{(void*)0,&g_84,&g_88,&g_5},{&g_84,&g_5,&g_5,(void*)0}},{{&g_134,&g_5,&g_88,&g_134},{(void*)0,&g_5,&g_5,&g_88},{&g_5,(void*)0,&g_5,&g_134},{&g_134,&g_5,&g_84,&g_88},{&g_84,(void*)0,&g_88,&g_88},{&g_84,&g_84,&g_84,&g_5}},{{&g_5,&g_5,&g_5,(void*)0},{&g_88,&g_5,&g_88,&g_5},{&g_88,&g_84,&g_84,&g_134},{&g_84,&g_84,&g_134,&g_88},{(void*)0,&g_88,&g_88,(void*)0},{&g_134,(void*)0,&g_84,&g_134}}};
    int l_449 = (-1L);
    const unsigned char *l_504 = &g_272;
    const unsigned char **l_503 = &l_504;
    char **l_532 = &g_371[2][0][0];
    short l_533 = 0xF494L;
    unsigned short l_555 = 0x0277L;
    unsigned short *l_604 = &g_205;
    unsigned short **l_603 = &l_604;
    int l_610 = (-1L);
    int *****l_640[3];
    unsigned l_650 = 0x8FAE6F99L;
    int *l_653 = (void*)0;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_640[i] = (void*)0;
    for (p_32 = (-27); (p_32 > 57); p_32 = safe_add_func_int8_t_s_s(p_32, 9))
    {
        unsigned char l_392 = 0x6BL;
        int **l_399[5][8][6] = {{{&g_83,(void*)0,&g_83,&g_83,&g_83,&g_83},{(void*)0,(void*)0,&g_83,&g_83,&g_83,(void*)0},{&g_83,(void*)0,&g_83,&g_83,(void*)0,&g_83},{(void*)0,&g_83,&g_83,&g_83,(void*)0,(void*)0},{&g_83,&g_83,&g_83,&g_83,(void*)0,&g_83},{&g_83,(void*)0,&g_83,&g_83,&g_83,&g_83},{(void*)0,(void*)0,&g_83,&g_83,&g_83,(void*)0},{&g_83,(void*)0,&g_83,&g_83,(void*)0,&g_83}},{{(void*)0,&g_83,&g_83,&g_83,(void*)0,(void*)0},{&g_83,&g_83,&g_83,&g_83,(void*)0,&g_83},{&g_83,(void*)0,&g_83,&g_83,&g_83,&g_83},{(void*)0,(void*)0,&g_83,&g_83,&g_83,(void*)0},{&g_83,(void*)0,&g_83,&g_83,(void*)0,&g_83},{(void*)0,&g_83,&g_83,&g_83,(void*)0,(void*)0},{&g_83,&g_83,&g_83,&g_83,(void*)0,&g_83},{&g_83,(void*)0,&g_83,&g_83,&g_83,&g_83}},{{(void*)0,(void*)0,&g_83,&g_83,&g_83,&g_83},{&g_83,&g_83,(void*)0,(void*)0,&g_83,&g_83},{&g_83,&g_83,(void*)0,&g_83,&g_83,&g_83},{(void*)0,&g_83,&g_83,(void*)0,&g_83,(void*)0},{(void*)0,&g_83,(void*)0,&g_83,&g_83,(void*)0},{&g_83,&g_83,&g_83,(void*)0,&g_83,&g_83},{&g_83,&g_83,(void*)0,(void*)0,&g_83,&g_83},{&g_83,&g_83,(void*)0,&g_83,&g_83,&g_83}},{{(void*)0,&g_83,&g_83,(void*)0,&g_83,(void*)0},{(void*)0,&g_83,(void*)0,&g_83,&g_83,(void*)0},{&g_83,&g_83,&g_83,(void*)0,&g_83,&g_83},{&g_83,&g_83,(void*)0,(void*)0,&g_83,&g_83},{&g_83,&g_83,(void*)0,&g_83,&g_83,&g_83},{(void*)0,&g_83,&g_83,(void*)0,&g_83,(void*)0},{(void*)0,&g_83,(void*)0,&g_83,&g_83,(void*)0},{&g_83,&g_83,&g_83,(void*)0,&g_83,&g_83}},{{&g_83,&g_83,(void*)0,(void*)0,(void*)0,&g_83},{&g_83,&g_83,(void*)0,&g_83,&g_83,&g_83},{&g_83,&g_83,&g_83,&g_83,(void*)0,&g_83},{&g_83,(void*)0,&g_83,&g_83,&g_83,&g_83},{&g_83,&g_83,&g_83,(void*)0,&g_83,&g_83},{&g_83,(void*)0,(void*)0,(void*)0,(void*)0,&g_83},{&g_83,&g_83,(void*)0,&g_83,&g_83,&g_83},{&g_83,&g_83,&g_83,&g_83,(void*)0,&g_83}}};
        unsigned l_401 = 0xFC319441L;
        unsigned char l_445 = 0x6AL;
        int l_568 = 0xC1497FCEL;
        char *l_600 = (void*)0;
        int i, j, k;
    }
    return (*p_34);
}







static char func_40(int * p_41)
{
    int *l_50 = &g_5;
    int *l_391 = &g_88;
    (*l_391) = (((g_5 == (safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((void*)0 != l_50) | (g_5 || (*l_50))), 3)), (((safe_sub_func_int16_t_s_s(((func_53(g_5, (*l_50), (*l_50), (*l_50)) >= (*l_50)) > (*p_41)), 0x70DCL)) | 1L) ^ g_2))), (*l_50))), 0))) == 248UL) && (*l_50));


    return (*l_391);
}







static unsigned short func_53(unsigned p_54, int p_55, unsigned short p_56, short p_57)
{
    int *l_68[7][6][4] = {{{&g_5,(void*)0,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5,&g_5},{(void*)0,&g_5,(void*)0,(void*)0},{&g_5,&g_5,&g_5,&g_5}},{{&g_5,&g_5,(void*)0,&g_5},{&g_5,(void*)0,(void*)0,(void*)0},{&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,(void*)0},{&g_5,(void*)0,&g_5,&g_5}},{{(void*)0,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5,(void*)0},{(void*)0,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5}},{{&g_5,(void*)0,&g_5,&g_5},{&g_5,&g_5,(void*)0,&g_5},{&g_5,&g_5,(void*)0,(void*)0},{&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,(void*)0},{(void*)0,(void*)0,&g_5,&g_5}},{{&g_5,&g_5,(void*)0,&g_5},{&g_5,(void*)0,(void*)0,(void*)0},{&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,(void*)0,&g_5}},{{(void*)0,(void*)0,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,(void*)0},{(void*)0,&g_5,(void*)0,(void*)0},{(void*)0,&g_5,&g_5,&g_5},{(void*)0,&g_5,(void*)0,&g_5}},{{(void*)0,&g_5,&g_5,&g_5},{&g_5,(void*)0,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,(void*)0,&g_5},{&g_5,&g_5,&g_5,(void*)0},{&g_5,&g_5,(void*)0,(void*)0}}};
    int **l_67[10][4][1] = {{{&l_68[1][2][3]},{&l_68[5][1][3]},{&l_68[6][5][1]},{(void*)0}},{{&l_68[1][2][3]},{(void*)0},{&l_68[6][5][1]},{&l_68[5][1][3]}},{{&l_68[1][2][3]},{&l_68[1][2][3]},{&l_68[1][2][3]},{&l_68[5][1][3]}},{{&l_68[6][5][1]},{(void*)0},{&l_68[1][2][3]},{(void*)0}},{{&l_68[6][5][1]},{&l_68[5][1][3]},{&l_68[1][2][3]},{&l_68[1][2][3]}},{{&l_68[1][2][3]},{&l_68[5][1][3]},{&l_68[6][5][1]},{(void*)0}},{{&l_68[1][2][3]},{(void*)0},{&l_68[6][5][1]},{&l_68[5][1][3]}},{{&l_68[1][2][3]},{&l_68[1][2][3]},{&l_68[1][2][3]},{&l_68[5][1][3]}},{{&l_68[6][5][1]},{(void*)0},{&l_68[1][2][3]},{(void*)0}},{{&l_68[6][5][1]},{&l_68[5][1][3]},{&l_68[1][2][3]},{&l_68[1][2][3]}}};
    const int l_78 = 1L;
    char *l_101 = &g_102;
    unsigned short *l_103 = (void*)0;
    unsigned short *l_104 = &g_105[0];
    char l_137 = 0xCDL;
    char *l_151[6] = {&g_136,&g_136,&g_136,&g_136,&g_136,&g_136};
    const unsigned char l_206 = 8UL;
    int l_215 = 0xA4FFD792L;
    int l_252 = (-1L);
    short *l_297 = &g_2;
    short ** const l_296 = &l_297;
    unsigned char *l_332 = &g_272;
    unsigned char **l_331 = &l_332;
    char l_337 = 0xEBL;
    short *l_340 = &g_341;
    int **l_345 = &l_68[1][2][3];
    short **l_346[7] = {&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340};
    int i, j, k;
    for (p_56 = 0; (p_56 >= 37); ++p_56)
    {
        int *l_61 = &g_5;
        int **l_60 = &l_61;
        (*l_60) = (void*)0;

        ;
    }
    if ((!func_62(p_57, ((*l_104) = (safe_add_func_uint8_t_u_u((l_67[5][1][0] != g_69), ((*l_101) = func_71((safe_mul_func_uint8_t_u_u(l_78, (func_79(g_82, (g_5 == (g_84 = p_56))) < 0x2634890BL))), &l_68[1][2][3], (*g_82), p_54))))))))
    {
        int l_119[3];
        const short l_133 = 0x8315L;
        int *l_160[7][8] = {{&l_119[2],&g_84,&g_84,&l_119[2],&g_5,&g_5,&g_5,&l_119[2]},{&g_84,&g_5,&g_84,&l_119[2],(void*)0,(void*)0,&l_119[2],&g_84},{&g_5,&g_5,(void*)0,&g_5,&g_5,&g_84,&l_119[2],(void*)0},{(void*)0,&l_119[2],&g_5,&l_119[2],&l_119[2],&g_5,&l_119[2],(void*)0},{&l_119[2],&g_134,(void*)0,&g_84,(void*)0,&g_134,&l_119[2],&l_119[2]},{&g_134,&g_84,&g_5,&g_5,&g_84,&g_134,&l_119[2],&g_134},{&g_84,&g_134,&l_119[2],&g_134,&g_84,&g_5,&g_5,&g_84}};
        unsigned char l_236 = 1UL;
        unsigned *l_263 = &g_241;
        int i, j;
        for (i = 0; i < 3; i++)
            l_119[i] = 9L;
        if ((safe_add_func_uint32_t_u_u((g_88 | (l_119[2] || p_54)), 0xF4B2D4C7L)))
        {
            short l_130 = 0xFC3CL;
            short *l_131 = &g_132;
            char *l_135 = &g_136;
            int * const l_154 = &l_119[2];
            int **l_176 = &l_160[4][0];
            unsigned char l_188 = 0x09L;
            int l_214 = 0x94D02D65L;
            unsigned l_216 = 4294967288UL;
            unsigned *l_239 = (void*)0;
            unsigned *l_240 = &g_241;
            unsigned char l_244 = 250UL;
            int ***l_248 = &g_171;
            int ****l_247 = &l_248;
            unsigned short l_257 = 5UL;
            int l_264 = 0x302B8FD3L;
            short * const *l_269 = &l_131;
            if ((safe_add_func_uint8_t_u_u((!((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((*l_135) = (g_134 = ((*l_101) = (l_119[2] < (((((g_105[1] ^ (((safe_add_func_int8_t_s_s((+(g_84 <= (&p_56 != &g_105[1]))), ((248UL || (safe_lshift_func_uint16_t_u_u(p_55, l_130))) <= ((*l_131) = 0L)))) | l_133) == l_119[2])) >= 0x35L) < g_102) && g_88) & p_55))))) || p_55), l_137)), p_56)) ^ g_95)), g_88)))
            {
                short l_146 = 0x9DE1L;
                int l_157 = (-1L);
                for (p_56 = (-4); (p_56 < 6); p_56++)
                {
                    const int *l_158 = &g_88;
                    const int **l_159 = &l_158;
                    g_88 = (safe_mod_func_int32_t_s_s((*g_70), (safe_mul_func_int8_t_s_s((l_130 | ((void*)0 != (*g_82))), (((safe_rshift_func_uint8_t_u_u(l_146, 6)) ^ (safe_mul_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(1L, (p_55 | p_55))) <= (g_136 = ((l_151[1] = &g_136) != &l_137))), p_57))) == g_84)))));
                    if ((safe_lshift_func_int8_t_s_u(g_132, 6)))
                    {
                        int **l_155 = (void*)0;
                        int **l_156 = &l_68[1][5][1];
                        (*l_156) = l_154;
                        l_157 = (**g_82);
                    }
                    else
                    {
                        (*g_82) = l_154;

                        ;
                    }
                    (*l_159) = l_158;
                }


                ;
                l_160[5][3] = ((*g_82) = l_160[2][3]);

                ;
                for (g_102 = 0; (g_102 <= 1); g_102 += 1)
                {
                    if (((-1L) <= (g_84 < p_54)))
                    {
                        int **l_161 = &l_68[5][3][0];
                        int **l_162 = (void*)0;
                        int **l_163 = &l_160[0][4];
                        (*l_161) = l_154;
                        (*l_163) = l_154;
                    }
                    else
                    {
                        int *l_168 = &l_157;
                        int **l_169[4] = {&l_68[2][3][3],&l_68[2][3][3],&l_68[2][3][3],&l_68[2][3][3]};
                        int **l_170 = &l_160[0][7];
                        int ***l_173 = (void*)0;
                        int ***l_174 = &g_171;
                        int i;
                        (*l_154) = (safe_sub_func_uint16_t_u_u(0x3117L, (safe_rshift_func_int16_t_s_s(0xCBD7L, 5))));
                        l_168 = l_154;

                        ;
                        (*l_170) = (*g_69);
                        (*l_174) = g_171;
                    }
                    if (p_54)
                        break;
                    return p_56;


                }
            }
            else
            {
                short l_185 = 0x1822L;
                unsigned char *l_191[10][4] = {{&l_188,&l_188,&l_188,&l_188},{&l_188,&l_188,&l_188,&l_188},{&l_188,&l_188,&l_188,&l_188},{(void*)0,&l_188,&l_188,(void*)0},{(void*)0,&l_188,&l_188,&l_188},{&l_188,(void*)0,&l_188,(void*)0},{&l_188,&l_188,&l_188,(void*)0},{&l_188,(void*)0,&l_188,&l_188},{&l_188,&l_188,(void*)0,(void*)0},{&l_188,&l_188,(void*)0,&l_188}};
                int **l_199[8][10] = {{&l_160[5][4],&l_160[5][4],(void*)0,(void*)0,(void*)0,&l_160[5][4],&l_160[5][4],(void*)0,(void*)0,(void*)0},{&l_160[5][4],&l_160[5][4],(void*)0,(void*)0,(void*)0,&l_160[2][5],&l_160[2][5],&l_160[5][4],(void*)0,&l_160[5][4]},{&l_160[2][5],&l_160[2][5],&l_160[5][4],(void*)0,&l_160[5][4],&l_160[2][5],&l_160[2][5],&l_160[5][4],(void*)0,&l_160[5][4]},{&l_160[2][5],&l_160[2][5],&l_160[5][4],(void*)0,&l_160[5][4],&l_160[2][5],&l_160[2][5],&l_160[5][4],(void*)0,&l_160[5][4]},{&l_160[2][5],&l_160[2][5],&l_160[5][4],(void*)0,&l_160[5][4],&l_160[2][5],&l_160[2][5],&l_160[5][4],(void*)0,&l_160[5][4]},{&l_160[2][5],&l_160[2][5],&l_160[5][4],(void*)0,&l_160[5][4],&l_160[2][5],&l_160[2][5],&l_160[5][4],(void*)0,&l_160[5][4]},{&l_160[2][5],&l_160[2][5],&l_160[5][4],(void*)0,&l_160[5][4],&l_160[2][5],&l_160[2][5],&l_160[5][4],(void*)0,&l_160[5][4]},{&l_160[2][5],&l_160[2][5],&l_160[5][4],(void*)0,&l_160[5][4],&l_160[2][5],&l_160[2][5],&l_160[5][4],(void*)0,&l_160[5][4]}};
                int i, j;
                for (g_136 = 0; (g_136 <= 0); g_136 += 1)
                {
                    int **l_175 = &l_160[2][3];
                    int i;
                    (*g_82) = (void*)0;

                    ;
                    if (l_119[g_136])
                        continue;
                    (*l_175) = l_154;
                    for (p_54 = 0; (p_54 <= 2); p_54 += 1)
                    {
                        int i;
                        if (p_55)
                            break;
                        l_119[(g_136 + 2)] = l_185;
                    }
                }

                ;
                if (((((safe_sub_func_uint8_t_u_u(l_185, p_55)) >= 2L) >= (((*l_131) = ((p_54 | p_55) || (p_56 >= (g_192 = (safe_rshift_func_uint8_t_u_u((0x80324DE1L == l_185), 1)))))) > 1UL)) && g_95))
                {
                    int l_200 = 0x077F640AL;
                    if ((*g_70))
                    {
                        return p_57;
                    }
                    else
                    {
                        int **l_193 = &l_68[1][2][3];
                        (*l_193) = (*g_69);
                        (*g_82) = &l_119[0];

                        ;
                    }

                    ;
                    for (g_132 = 19; (g_132 < 8); g_132--)
                    {
                        (**g_82) = (((g_198 = (safe_add_func_uint16_t_u_u(g_136, g_95))) <= p_56) || (0x61L == g_102));
                    }
                    (*l_176) = (void*)0;
                    if (l_200)
                    {
                        (*l_154) = (g_102 | p_54);
                    }
                    else
                    {
                        (*g_82) = &l_200;

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned l_207 = 1UL;
                    if ((func_62(((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((g_205 = ((*l_154) = g_95)), (((-9L) || (0x82L || (g_192 == l_206))) ^ ((l_207 == p_55) >= ((void*)0 != &g_172))))), p_54)) >= 1UL), p_54) & p_55))
                    {
                        int l_217 = 0x012FAD6EL;
                        l_216 = (((*l_154) >= (l_207 >= (safe_lshift_func_int16_t_s_u(p_54, 15)))) != (safe_rshift_func_uint8_t_u_s(l_215, 5)));
                        l_217 = ((*l_154) = (p_56 ^ p_57));
                        (*l_176) = (void*)0;
                    }
                    else
                    {
                        int * const **l_218 = &g_69;
                        (*l_218) = &g_70;
                    }
                }


                for (p_55 = 0; (p_55 < 29); ++p_55)
                {
                    int ***l_224 = &g_171;
                    int ****l_223 = &l_224;
                    int l_226 = 0L;
                    for (p_57 = 0; (p_57 <= (-14)); p_57 = safe_sub_func_uint16_t_u_u(p_57, 5))
                    {
                        if (p_56)
                            break;
                        return g_84;


                    }
                    if ((((*l_223) = (void*)0) != &g_171))
                    {
                        int l_225[4] = {(-7L),(-7L),(-7L),(-7L)};
                        int i;
                        l_225[0] = ((*l_154) = (-1L));
                    }
                    else
                    {
                        int *l_227 = (void*)0;
                        int **l_228[1];
                        int **l_229 = &l_160[2][3];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_228[i] = &l_68[1][2][3];
                        l_226 = (g_136 <= 0x5E31L);
                        l_227 = &l_226;

                        ;
                        (*l_229) = (*g_69);
                    }

                    ;
                }
            }



            (*l_154) = ((safe_rshift_func_int8_t_s_u((((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(0x20L, func_62((*g_70), p_54))) & ((*l_131) = ((!l_236) && ((*l_240) = (safe_sub_func_uint32_t_u_u((~p_56), g_5)))))), ((*l_135) = ((safe_lshift_func_uint16_t_u_s(p_55, p_56)) ^ p_54)))) <= p_56) != l_244), 4)) & p_56);
            for (p_54 = (-19); (p_54 == 23); p_54++)
            {
                int *l_260 = &g_134;
                for (l_137 = 2; (l_137 <= 6); l_137 += 1)
                {
                    unsigned **l_261 = &l_239;
                    unsigned **l_262[3][7][2] = {{{&l_240,(void*)0},{&l_240,(void*)0},{&l_240,&l_240},{&l_240,&l_240},{&l_240,(void*)0},{&l_240,(void*)0},{&l_240,&l_240}},{{&l_240,&l_240},{&l_240,(void*)0},{&l_240,(void*)0},{&l_240,&l_240},{&l_240,&l_240},{&l_240,(void*)0},{&l_240,(void*)0}},{{&l_240,&l_240},{&l_240,&l_240},{&l_240,(void*)0},{&l_240,(void*)0},{&l_240,&l_240},{&l_240,&l_240},{&l_240,(void*)0}}};
                    short * const **l_267 = (void*)0;
                    short * const **l_268[7] = {&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265};
                    int i, j, k;
                    for (l_216 = 2; (l_216 <= 6); l_216 += 1)
                    {
                        int *****l_249 = &l_247;
                        int i, j;
                        (*l_154) = (((*l_249) = l_247) != (void*)0);
                        l_160[l_216][l_137] = (*l_176);
                    }
                    if ((safe_rshift_func_int8_t_s_u(((*l_135) = ((g_5 & (0UL | ((*l_131) = p_55))) || ((*l_240) = func_62(((((safe_lshift_func_uint8_t_u_s(0x01L, 4)) & 1L) | ((*l_104) = (g_105[0] < p_54))) | l_257), g_192)))), g_192)))
                    {
                        int *l_258 = &l_252;
                        int **l_259 = &l_68[1][2][3];
                        l_258 = l_258;
                        if ((*l_154))
                            break;
                        (*l_259) = (*g_69);
                        (*l_176) = (*l_176);
                    }
                    else
                    {
                        l_260 = ((*g_82) = ((*l_176) = (void*)0));

                        ;
                        ;
                        return p_56;
                    }
                    l_264 = ((((*l_261) = &p_54) != (l_263 = l_160[2][0])) ^ ((void*)0 != &g_171));

                    ;
                    ;
                    l_269 = g_265;

                    ;
                }
                if (p_57)
                    continue;
                for (g_192 = 0; (g_192 <= 3); g_192 += 1)
                {
                    unsigned char *l_270 = &l_236;
                    int **l_278[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    for (p_57 = 0; p_57 < 7; p_57 += 1)
                    {
                        for (g_132 = 0; g_132 < 6; g_132 += 1)
                        {
                            for (g_84 = 0; g_84 < 4; g_84 += 1)
                            {
                                l_68[p_57][g_132][g_84] = &g_134;
                            }
                        }
                    }
                    if ((func_62(((247UL && (l_270 == g_271)) < (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s((*l_260))) ^ p_56), 255UL)), 5))), (*l_260)) || 0x4FE7L))
                    {
                        int *l_279 = (void*)0;
                        (*l_260) = p_55;
                        if (p_55)
                            continue;
                        (*g_82) = l_279;

                        ;
                    }
                    else
                    {
                        (*l_260) = (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(func_62((*l_260), p_57), 0)), p_56));
                    }
                    for (g_134 = 3; (g_134 >= 0); g_134 -= 1)
                    {
                        int i, j, k;
                        if ((*l_260))
                            break;
                    }
                }
            }


            ;
            ;
            ;
        }
        else
        {
            int **l_284 = &l_68[1][2][3];
            (*g_82) = (*g_82);
            (*l_284) = (*g_69);
        }



        ;
    }
    else
    {
        unsigned l_289 = 8UL;
        unsigned l_294[9] = {6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL};
        int l_295 = 0x88223CB4L;
        int l_298 = 0xE412BC67L;
        int **l_315[6][3][2] = {{{&l_68[1][2][3],&l_68[1][0][3]},{&l_68[1][2][3],&g_83},{&l_68[3][5][0],&g_83}},{{&l_68[1][2][3],&l_68[1][0][3]},{&l_68[1][2][3],&g_83},{&l_68[3][5][0],&g_83}},{{&l_68[1][2][3],&l_68[1][0][3]},{&l_68[1][2][3],&g_83},{&l_68[3][5][0],&g_83}},{{&l_68[1][2][3],&l_68[1][0][3]},{&l_68[1][2][3],&g_83},{&l_68[3][5][0],&g_83}},{{&l_68[1][2][3],&l_68[1][0][3]},{&l_68[1][2][3],&g_83},{&l_68[3][5][0],&g_83}},{{&l_68[1][2][3],&l_68[1][0][3]},{&l_68[1][2][3],&g_83},{&l_68[3][5][0],&g_83}}};
        int i, j, k;
        if ((((((safe_rshift_func_int8_t_s_u(g_5, 3)) <= func_62((((safe_mul_func_int16_t_s_s((65535UL | l_289), (**g_265))) <= (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_5, (p_56 = ((void*)0 != &g_205)))), l_294[1]))) <= (-1L)), g_132)) < (*g_271)) == l_294[1]) & l_295))
        {
            l_298 = ((void*)0 == l_296);
        }
        else
        {
            unsigned l_299 = 0x21EF034BL;
            int l_300 = (-4L);
            int l_326 = 0x147520D1L;
            l_300 = l_299;
            g_134 = (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(func_62((p_55 || p_57), g_241), 0)) != 4294967288UL), p_57));
            for (g_192 = 0; (g_192 <= 0); g_192 += 1)
            {
                unsigned char l_317[8][10] = {{0x9DL,0x75L,0xF8L,246UL,0xF8L,0x75L,0x9DL,0x75L,0xF8L,246UL},{1UL,246UL,1UL,0x75L,0x8FL,0x75L,1UL,246UL,1UL,0x75L},{0x9DL,246UL,0xADL,246UL,0xF8L,246UL,0xF8L,0x75L,0x9DL,0x75L},{1UL,255UL,1UL,0x75L,1UL,255UL,1UL,255UL,1UL,0x75L},{0xADL,0x75L,0xADL,255UL,0xF8L,255UL,0xADL,0x75L,0xADL,255UL},{1UL,0x75L,0x8FL,0x75L,1UL,246UL,1UL,0x75L,0x8FL,0x75L},{0xF8L,255UL,0xADL,0x75L,0xADL,255UL,0xF8L,255UL,0xADL,0x75L},{1UL,0x75L,1UL,255UL,1UL,255UL,1UL,0x75L,1UL,255UL}};
                int *l_318 = &l_252;
                char l_327 = 0xD9L;
                int l_330 = 0xC6C1C092L;
                int i, j;
                for (l_300 = 0; (l_300 <= 0); l_300 += 1)
                {
                    int *l_316 = &g_84;
                    for (l_295 = 0; (l_295 >= 0); l_295 -= 1)
                    {
                        int i, j, k;
                        l_316 = (*g_82);

                        ;
                    }

                    ;
                    for (g_95 = 0; (g_95 >= 0); g_95 -= 1)
                    {
                        if (l_317[0][7])
                            break;
                    }
                }
                for (p_54 = 0; (p_54 <= 0); p_54 += 1)
                {
                    int l_321 = 0x981E6126L;
                    l_318 = (*g_82);

                    ;
                    for (g_132 = 0; (g_132 >= 0); g_132 -= 1)
                    {
                        int *l_322 = (void*)0;
                        int i, j, k;
                        l_321 = (((g_84 ^ (((-10L) & (*g_266)) != ((*l_104) = p_57))) <= (safe_rshift_func_uint8_t_u_s(((*g_271) = (0x2548L <= p_56)), (p_57 & p_55)))) && (((!((+p_55) == (*g_271))) < g_105[0]) > (*l_318)));
                        l_322 = (void*)0;
                        (*g_82) = l_318;
                    }
                }

                ;
                for (g_88 = 14; (g_88 <= 18); g_88++)
                {
                    unsigned char l_325[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_325[i] = 0xD6L;
                    l_325[3] = (**g_69);
                    for (g_132 = 0; (g_132 <= 5); g_132 += 1)
                    {
                        int i;
                        l_326 = (l_300 = l_325[(g_192 + 4)]);
                        l_327 = (+p_56);
                        if ((**g_69))
                            continue;
                        if (l_300)
                            continue;
                    }
                    for (g_134 = (-24); (g_134 == (-22)); g_134 = safe_add_func_uint8_t_u_u(g_134, 6))
                    {
                        l_330 = l_326;
                    }
                }
                if (p_54)
                    break;
            }
        }
    }



    if (((~((((*l_331) = &g_272) != &g_272) || (safe_mul_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((*g_266), l_337)) | ((**l_331) = (p_57 >= (*g_271)))) == (**g_265)), ((*l_340) = (safe_mod_func_int8_t_s_s(p_57, p_57))))))) || 0L))
    {
        unsigned short l_342 = 9UL;
        int l_343 = (-3L);
        l_343 = (l_342 >= p_55);
        l_343 = (*g_70);
        (*g_82) = &l_343;

        ;
        (*g_82) = (*g_82);
    }
    else
    {
        int *l_344[3][6] = {{&l_252,&l_252,(void*)0,&l_252,&l_252,(void*)0},{&l_252,&l_252,(void*)0,&l_252,&l_252,(void*)0},{&l_252,&l_252,(void*)0,&l_252,&l_252,(void*)0}};
        int i, j;
        l_344[2][2] = l_344[2][3];
        g_84 = ((p_56 & p_55) & (*g_70));
    }
    if ((g_102 != (g_192 & ((g_347[1][4][3] = ((*l_296) = (*l_296))) == (void*)0))))
    {
        short l_348[8] = {0xB440L,0xB440L,0x96B0L,0xB440L,0xB440L,0x96B0L,0xB440L,0xB440L};
        char *l_351 = &g_136;
        char **l_352 = &l_101;
        const char *l_354 = &g_355;
        const char **l_353 = &l_354;
        const char *l_357 = &g_355;
        const char **l_356 = &l_357;
        int **l_362 = &l_68[1][2][3];
        int i;
        g_88 = ((l_348[0] & (safe_sub_func_uint16_t_u_u((((p_55 | p_54) < l_348[0]) ^ g_241), 0x2C5AL))) | p_55);
        (*l_362) = (*g_69);
        (*l_362) = (void*)0;
    }
    else
    {
        short l_365 = 0x94F5L;
        int l_374 = 0L;
        g_88 = ((safe_add_func_uint8_t_u_u(1UL, (g_2 & ((p_57 < (l_365 != (~(((safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((-1L), l_365)) || p_55), ((*l_104) = 0UL))) < ((p_56 | (*g_266)) <= (*g_70))) ^ l_365)))) != p_55)))) <= g_205);
        for (g_84 = 3; (g_84 >= 0); g_84 -= 1)
        {
            for (p_55 = 3; (p_55 >= 0); p_55 -= 1)
            {
                return p_57;
            }
            for (g_205 = 0; (g_205 <= 3); g_205 += 1)
            {
                char ***l_372 = &g_370[0][1][5];
                int l_373[5];
                int l_390 = 9L;
                int i;
                for (i = 0; i < 5; i++)
                    l_373[i] = 0x4F9F8EC1L;
                (*l_372) = g_370[0][1][5];
                for (p_56 = 0; (p_56 <= 3); p_56 += 1)
                {
                    int i, j, k;
                    l_374 = l_373[0];
                    for (g_132 = 0; (g_132 <= 3); g_132 += 1)
                    {
                        unsigned *l_377 = &g_241;
                        g_134 = (((*l_101) = (((safe_lshift_func_uint8_t_u_s(((((*l_377) = 0UL) == g_272) <= 0x3267L), p_56)) || ((safe_lshift_func_int16_t_s_u((p_57 = (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((g_272 || (p_54 ^ ((safe_mod_func_int32_t_s_s((-8L), l_373[4])) == (safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((l_390 = (p_54 && 0x0CA1D77BL)) | 1L), 0x543D71F0L)), 6))))) >= 0xC5FBBC69L) >= (*g_70)), 3)), 252UL))), p_55)) | 1UL)) ^ 0xE0482155L)) <= 0x37L);
                    }
                }
            }
        }
    }
    return g_205;
}







static int func_62(const int p_63, unsigned short p_64)
{
    int *l_106 = &g_88;
    unsigned short l_116 = 0x2D86L;
    if (((*l_106) = p_64))
    {
        int *l_107 = &g_5;
        (*g_82) = l_107;

        ;
    }
    else
    {
        const int *l_109 = &g_5;
        const int **l_108 = &l_109;
        char *l_110[4] = {&g_102,&g_102,&g_102,&g_102};
        int *l_111 = &g_84;
        int i;
        (*l_108) = &p_63;

        ;
        (*l_108) = l_106;

        ;
        (*l_111) = ((*l_106) = (l_110[1] != (void*)0));
        l_116 = (0L | ((*l_111) && (safe_lshift_func_uint8_t_u_u(0UL, ((*l_109) | g_105[0])))));
    }
    return p_63;
}







static char func_71(unsigned short p_72, int ** p_73, int * p_74, unsigned char p_75)
{
    int *l_90[9][4] = {{&g_88,&g_5,&g_84,&g_5},{&g_88,&g_84,&g_84,&g_5},{&g_84,&g_5,&g_84,&g_84},{&g_88,&g_5,&g_84,&g_5},{&g_88,&g_84,&g_84,&g_5},{&g_84,&g_5,&g_84,&g_84},{&g_88,&g_5,&g_84,&g_5},{&g_88,&g_84,&g_84,&g_5},{&g_84,&g_5,&g_84,&g_84}};
    unsigned char l_91[7];
    int ***l_99 = &g_82;
    int *l_100 = &g_95;
    int i, j;
    for (i = 0; i < 7; i++)
        l_91[i] = 0x10L;
    if ((*g_70))
    {
        unsigned short l_89 = 0UL;
        int *l_94 = &g_95;
        int l_96 = 0x8DED04CEL;
        l_89 = (p_75 < (**g_69));
        (*p_73) = l_90[1][2];


        (*p_73) = (*p_73);
        l_96 = (l_91[5] > (safe_sub_func_uint8_t_u_u((((*g_70) & (((g_2 != p_72) || (&g_83 == (void*)0)) <= p_75)) >= ((func_79(&g_83, ((*l_94) = (-1L))) ^ 1L) <= l_89)), g_2)));
    }
    else
    {
        int l_97 = (-1L);
        int l_98 = 1L;
        l_98 = (l_97 = (*p_74));
        l_98 = (**g_82);
    }


    g_84 = (*p_74);
    return (***l_99);
}







static int func_79(int ** p_80, int p_81)
{
    int l_85[6][3] = {{0x159332C3L,0xA47622B4L,0xA47622B4L},{0xA47622B4L,(-1L),(-8L)},{0x159332C3L,(-1L),0x159332C3L},{(-1L),0xA47622B4L,(-8L)},{(-1L),(-1L),0xA47622B4L},{0x159332C3L,0xA47622B4L,0xA47622B4L}};
    int i, j;
    for (g_84 = 0; (g_84 <= 2); g_84 += 1)
    {
        int *l_86 = (void*)0;
        int *l_87 = &g_88;
        (*l_87) = (**g_82);
        for (g_88 = 0; (g_88 <= 2); g_88 += 1)
        {
            int i, j;
            return l_85[(g_88 + 2)][g_88];
        }
    }
    return (**p_80);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_105[i], "g_105[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_413[i][j], "g_413[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_545, "g_545", print_hash_value);
    transparent_crc(g_550, "g_550", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_704, "g_704", print_hash_value);
    transparent_crc(g_706, "g_706", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    transparent_crc(g_970, "g_970", print_hash_value);
    transparent_crc(g_1110, "g_1110", print_hash_value);
    transparent_crc(g_1130, "g_1130", print_hash_value);
    transparent_crc(g_1146, "g_1146", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1172[i], "g_1172[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1185, "g_1185", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
