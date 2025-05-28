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
   signed f0 : 19;
   unsigned f1 : 28;
   signed f2 : 14;
   signed f3 : 2;
   signed f4 : 9;
   signed f5 : 28;
   signed f6 : 10;
   signed f7 : 23;
   int f8;
   signed f9 : 14;
};


static unsigned g_4[1] = {4294967286UL};
static unsigned g_7 = 0xF90A2337L;
static struct S0 g_29 = {-343,9898,76,-0,-16,-5942,-6,-934,1L,98};
static unsigned short g_50 = 0UL;
static unsigned short g_55 = 0xF517L;
static unsigned short g_74 = 7UL;
static int g_77 = 0x3394210AL;
static int g_83 = 0L;
static int *g_86 = (void*)0;
static unsigned g_88[6][6] = {{0x37C2AE6BL,4294967292UL,0x37C2AE6BL,4UL,0UL,0UL},{0x8FDA5E0CL,0x37C2AE6BL,0x37C2AE6BL,0x8FDA5E0CL,4294967292UL,0x8822BDA6L},{0x8822BDA6L,0x8FDA5E0CL,0UL,0x8FDA5E0CL,0x8822BDA6L,4UL},{0x8FDA5E0CL,0x8822BDA6L,4UL,4UL,0x8822BDA6L,0x8FDA5E0CL},{0x37C2AE6BL,0x8FDA5E0CL,4294967292UL,0x8822BDA6L,4294967292UL,0x8FDA5E0CL},{4294967292UL,0x37C2AE6BL,4UL,0UL,0UL,4UL}};
static unsigned char g_90 = 0UL;
static short g_115 = 7L;
static unsigned short g_119[10][5] = {{0xD409L,0xD409L,0UL,0xD409L,0xD409L},{6UL,0xD409L,6UL,6UL,6UL},{6UL,0UL,0UL,6UL,0UL},{6UL,6UL,0xD409L,6UL,6UL},{0UL,6UL,0UL,0UL,6UL},{6UL,0UL,0UL,6UL,0UL},{6UL,6UL,0xD409L,6UL,6UL},{0UL,6UL,0UL,0UL,6UL},{6UL,0UL,0UL,6UL,0UL},{6UL,6UL,0xD409L,6UL,6UL}};
static char g_126 = 1L;
static struct S0 g_130 = {283,2606,-87,1,1,-12036,-28,339,-1L,18};
static int g_151 = 0xEB312766L;
static unsigned g_152 = 4294967295UL;
static unsigned short *g_189 = &g_55;
static unsigned short ***g_197 = (void*)0;
static unsigned char g_209[10] = {254UL,1UL,254UL,254UL,1UL,254UL,254UL,1UL,254UL,254UL};
static const unsigned char g_218 = 255UL;
static int g_221 = 0xF20A964BL;
static unsigned short *g_224 = &g_119[0][0];
static unsigned short *g_225[9] = {&g_119[0][0],&g_119[0][0],&g_119[0][0],&g_119[0][0],&g_119[0][0],&g_119[0][0],&g_119[0][0],&g_119[0][0],&g_119[0][0]};
static unsigned short g_237[8][7] = {{65532UL,0UL,0x2D8DL,0x556BL,0x5621L,1UL,0x5621L},{1UL,0xD16BL,0xD16BL,1UL,0xC28EL,0xFB45L,4UL},{1UL,0xDE83L,0x2D8DL,0x33A5L,0x33A5L,0x2D8DL,0xDE83L},{0xC28EL,0UL,0xF204L,65535UL,0xD16BL,4UL,4UL},{1UL,1UL,0x33A5L,1UL,1UL,0UL,0x5621L},{1UL,0xC28EL,0xFB45L,4UL,65535UL,4UL,0xFB45L},{1UL,1UL,1UL,0x5621L,0x33A5L,0x556BL,65532UL},{1UL,4UL,0UL,0UL,4UL,1UL,65535UL}};
static char g_291 = 0L;
static unsigned short g_294 = 0x32C7L;
static unsigned g_414 = 1UL;
static const int *g_426 = &g_83;
static const int **g_425 = &g_426;
static const int ***g_424 = &g_425;
static unsigned short * const g_432 = &g_237[6][4];
static char g_438 = (-9L);
static unsigned char g_439 = 0x4AL;
static struct S0 g_447 = {-141,6152,-44,-1,9,14509,26,-1737,0xFCE8534AL,26};
static const struct S0 g_454 = {-638,11345,82,-1,20,9063,-19,968,0x43A5B179L,-74};
static char g_475 = 0xF4L;
static char ***g_597 = (void*)0;
static char g_603[4][2][10] = {{{(-1L),0x88L,(-1L),0x66L,1L,(-7L),0x66L,(-1L),0x17L,(-1L)},{(-1L),0x0FL,0x19L,1L,0x88L,0xBEL,(-1L),(-1L),0xBEL,0x88L}},{{0x0FL,(-1L),(-1L),0x0FL,0x17L,0x81L,0x88L,0xAEL,(-1L),(-1L)},{0x17L,(-1L),0x66L,(-7L),1L,0x66L,(-1L),0x88L,(-1L),0x66L}},{{1L,0x0FL,0x1FL,0x0FL,1L,2L,0x23L,1L,0xBEL,1L},{0x88L,0x17L,(-7L),1L,5L,0x81L,1L,0x17L,0x17L,1L}},{{0xAEL,1L,0x66L,0x66L,1L,0xAEL,(-7L),0x0FL,0x81L,0x66L},{(-1L),0x88L,1L,0x23L,1L,(-1L),0x17L,0x66L,0x0FL,0x66L}}};
static unsigned g_604 = 8UL;
static unsigned g_630 = 4294967290UL;
static struct S0 g_650 = {-59,5508,125,-0,-21,4531,-1,1150,0L,-63};
static int g_688 = 0x4D027EE7L;
static int **g_736 = (void*)0;
static int ***g_735 = &g_736;
static char g_787 = 0xFFL;
static unsigned short g_788 = 1UL;
static unsigned *g_807 = &g_7;
static unsigned **g_806 = &g_807;
static unsigned *g_812[10][7][3] = {{{&g_4[0],&g_4[0],&g_4[0]},{&g_4[0],(void*)0,&g_630},{&g_414,(void*)0,&g_604},{&g_630,&g_604,(void*)0},{&g_414,&g_414,&g_604},{&g_414,&g_604,&g_630},{&g_4[0],&g_414,&g_4[0]}},{{&g_630,(void*)0,(void*)0},{&g_604,&g_630,(void*)0},{(void*)0,(void*)0,&g_4[0]},{&g_4[0],(void*)0,&g_630},{(void*)0,&g_604,(void*)0},{&g_604,&g_152,&g_152},{&g_630,&g_4[0],(void*)0}},{{&g_4[0],&g_4[0],(void*)0},{&g_414,(void*)0,&g_152},{&g_414,&g_4[0],&g_4[0]},{&g_630,(void*)0,&g_604},{&g_414,&g_4[0],&g_604},{&g_4[0],&g_4[0],(void*)0},{&g_4[0],&g_152,&g_4[0]}},{{(void*)0,&g_604,&g_4[0]},{&g_4[0],(void*)0,&g_414},{&g_604,(void*)0,&g_4[0]},{(void*)0,&g_630,&g_4[0]},{(void*)0,(void*)0,(void*)0},{&g_4[0],&g_414,&g_604},{(void*)0,&g_604,&g_604}},{{&g_414,&g_414,&g_4[0]},{&g_604,&g_604,&g_152},{&g_414,&g_4[0],&g_604},{&g_604,&g_604,&g_604},{&g_630,(void*)0,(void*)0},{&g_414,&g_630,(void*)0},{&g_4[0],(void*)0,&g_604}},{{(void*)0,&g_4[0],(void*)0},{&g_414,(void*)0,&g_630},{(void*)0,&g_630,&g_604},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_604,(void*)0},{&g_4[0],&g_4[0],&g_414},{(void*)0,&g_604,(void*)0}},{{&g_414,&g_4[0],&g_414},{&g_152,(void*)0,(void*)0},{(void*)0,&g_414,(void*)0},{&g_152,&g_630,&g_604},{(void*)0,&g_152,&g_630},{&g_630,(void*)0,(void*)0},{&g_4[0],&g_630,&g_604}},{{&g_630,&g_630,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_152,(void*)0,&g_604},{(void*)0,&g_4[0],&g_604},{&g_152,&g_414,&g_4[0]},{&g_414,&g_4[0],(void*)0},{(void*)0,&g_414,&g_604}},{{&g_4[0],&g_4[0],(void*)0},{(void*)0,(void*)0,&g_414},{(void*)0,(void*)0,&g_414},{(void*)0,&g_630,&g_604},{&g_414,&g_630,&g_4[0]},{(void*)0,(void*)0,(void*)0},{&g_630,&g_4[0],&g_604}},{{&g_630,&g_604,&g_630},{(void*)0,(void*)0,&g_4[0]},{(void*)0,&g_152,&g_414},{(void*)0,&g_4[0],&g_414},{(void*)0,&g_414,&g_630},{(void*)0,(void*)0,&g_414},{(void*)0,&g_4[0],&g_4[0]}}};
static unsigned **g_811 = &g_812[3][2][1];
static unsigned g_824 = 0x8119860EL;
static unsigned char g_835 = 0UL;
static int *g_847[8][3] = {{&g_447.f8,&g_650.f8,&g_650.f8},{&g_151,&g_650.f8,(void*)0},{&g_447.f8,&g_650.f8,&g_650.f8},{&g_151,&g_650.f8,(void*)0},{&g_447.f8,&g_650.f8,&g_650.f8},{&g_151,&g_650.f8,(void*)0},{&g_447.f8,&g_650.f8,&g_650.f8},{&g_151,&g_650.f8,(void*)0}};
static int **g_846 = &g_847[3][2];
static struct S0 *g_876 = (void*)0;
static unsigned g_938[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static short g_978 = 8L;
static unsigned g_979 = 4294967294UL;
static unsigned short g_989[4] = {0x50B4L,0x50B4L,0x50B4L,0x50B4L};
static char **g_1022 = (void*)0;
static short g_1052 = 0L;



static unsigned func_1(void);
static unsigned short func_10(short p_11, unsigned short p_12, unsigned p_13, int p_14, unsigned char p_15);
static unsigned short func_23(struct S0 p_24, struct S0 p_25, unsigned char p_26, unsigned char p_27, const int p_28);
static const unsigned char func_32(unsigned p_33, const unsigned char p_34, int p_35, int p_36);
static const char func_37(short p_38, int p_39);
static short func_41(unsigned short p_42, struct S0 p_43);
static unsigned short func_44(unsigned short p_45, struct S0 p_46, unsigned short p_47, const unsigned short p_48);
static struct S0 func_56(unsigned char p_57, short p_58, char p_59, struct S0 p_60);
static unsigned short func_63(unsigned short * const p_64, unsigned short * p_65, int p_66);
static unsigned char func_67(unsigned short * p_68, unsigned p_69, char p_70, unsigned short * p_71, char p_72);
static unsigned func_1(void)
{
    int l_18 = (-7L);
    unsigned l_40 = 4294967295UL;
    unsigned short *l_49 = &g_50;
    unsigned short *l_53 = (void*)0;
    unsigned short *l_54 = &g_55;
    unsigned short *l_73 = &g_74;
    unsigned char *l_89[9] = {&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90};
    struct S0 l_95 = {-194,7715,112,-0,-18,13919,-10,110,5L,-121};
    unsigned short l_653[2][7][8] = {{{65535UL,65535UL,0x1CCDL,0x9A75L,65532UL,0x9A75L,0x1CCDL,65535UL},{0x1CCDL,0x3061L,5UL,0x786EL,65532UL,65535UL,65532UL,0x786EL},{65535UL,0x3061L,65535UL,65535UL,0x1CCDL,0x9A75L,65532UL,0x9A75L},{0x48E0L,65535UL,0x48E0L,0x786EL,65535UL,0x9A75L,5UL,0xB342L},{65535UL,0x9A75L,5UL,0xB342L,5UL,0x9A75L,65535UL,0x786EL},{65532UL,0x786EL,5UL,0x3061L,0x1CCDL,0x3061L,5UL,0x786EL},{5UL,65535UL,0x48E0L,0xB342L,0x1CCDL,0x786EL,0x1CCDL,0xB342L}},{{65532UL,65535UL,65532UL,0x786EL,5UL,0x3061L,0x1CCDL,0x3061L},{65535UL,0x786EL,0x48E0L,0x786EL,65535UL,0x9A75L,5UL,0xB342L},{65535UL,0x9A75L,5UL,0xB342L,5UL,0x9A75L,65535UL,0x786EL},{65532UL,0x786EL,5UL,0x3061L,0x1CCDL,0x3061L,5UL,0x786EL},{5UL,65535UL,0x48E0L,0xB342L,0x1CCDL,0x786EL,0x1CCDL,0xB342L},{65532UL,65535UL,65532UL,0x786EL,5UL,0x3061L,0x1CCDL,0x3061L},{65535UL,0x786EL,0x48E0L,0x786EL,65535UL,0x9A75L,5UL,0xB342L}}};
    char l_655 = (-1L);
    const unsigned char l_771 = 0x85L;
    int *l_772 = &g_77;
    int l_784 = 0x5FE75C81L;
    int l_786[4][2][5];
    const char l_829 = (-10L);
    unsigned short l_830 = 65526UL;
    unsigned l_831 = 0xE3BB14F7L;
    struct S0 l_856 = {498,15538,53,0,21,3855,23,350,6L,122};
    short l_857 = 0xD3BBL;
    unsigned char l_866[10][7][3] = {{{0UL,0x24L,9UL},{0UL,9UL,0x42L},{9UL,255UL,0x28L},{0x13L,1UL,0x13L},{0x1CL,1UL,0x4EL},{0UL,0x2BL,1UL},{0xB8L,1UL,6UL}},{{1UL,1UL,255UL},{0xB8L,0x7BL,0xB8L},{0UL,252UL,255UL},{0x1CL,0UL,6UL},{0x13L,252UL,1UL},{6UL,0x7BL,0x4EL},{0x13L,1UL,0x13L}},{{0x1CL,1UL,0x4EL},{0UL,0x2BL,1UL},{0xB8L,1UL,6UL},{1UL,1UL,255UL},{0xB8L,0x7BL,0xB8L},{0UL,252UL,255UL},{0x1CL,0UL,6UL}},{{0x13L,252UL,1UL},{6UL,0x7BL,0x4EL},{0x13L,1UL,0x13L},{0x1CL,1UL,0x4EL},{0UL,0x2BL,1UL},{0xB8L,1UL,6UL},{1UL,1UL,255UL}},{{0xB8L,0x7BL,0xB8L},{0UL,252UL,255UL},{0x1CL,0UL,6UL},{0x13L,252UL,1UL},{6UL,0x7BL,0x4EL},{0x13L,1UL,0x13L},{0x1CL,1UL,0x4EL}},{{0x13L,0x42L,255UL},{0x08L,0xE1L,0x4EL},{255UL,252UL,0UL},{0x08L,1UL,0x08L},{0x13L,0UL,0UL},{0xB8L,0UL,0x4EL},{8UL,0UL,255UL}},{{0x4EL,1UL,0x1CL},{8UL,252UL,8UL},{0xB8L,0xE1L,0x1CL},{0x13L,0x42L,255UL},{0x08L,0xE1L,0x4EL},{255UL,252UL,0UL},{0x08L,1UL,0x08L}},{{0x13L,0UL,0UL},{0xB8L,0UL,0x4EL},{8UL,0UL,255UL},{0x4EL,1UL,0x1CL},{8UL,252UL,8UL},{0xB8L,0xE1L,0x1CL},{0x13L,0x42L,255UL}},{{0x08L,0xE1L,0x4EL},{255UL,252UL,0UL},{0x08L,1UL,0x08L},{0x13L,0UL,0UL},{0xB8L,0UL,0x4EL},{8UL,0UL,255UL},{0x4EL,1UL,0x1CL}},{{8UL,252UL,8UL},{0xB8L,0xE1L,0x1CL},{0x13L,0x42L,255UL},{0x08L,0xE1L,0x8FL},{9UL,0UL,0x18L},{255UL,0x8BL,255UL},{0x08L,0x13L,0x18L}}};
    unsigned short *l_943 = &g_50;
    unsigned ***l_956[1];
    struct S0 l_1004 = {-606,1564,0,-1,-4,-11416,-18,-1684,0L,65};
    const unsigned l_1017 = 0x1B3B8388L;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
                l_786[i][j][k] = 6L;
        }
    }
    for (i = 0; i < 1; i++)
        l_956[i] = (void*)0;
    if ((safe_sub_func_int32_t_s_s((((g_4[0]--) < g_7) ^ (safe_add_func_uint16_t_u_u(func_10(g_7, (g_7 <= ((*l_772) = (safe_mod_func_int32_t_s_s(((l_18 , l_18) , (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((func_23(g_29, ((safe_add_func_uint8_t_u_u(func_32((func_37(l_40, ((((l_653[1][4][4] ^= func_41(func_44(((*l_54) = ((*l_49)++)), func_56((safe_rshift_func_uint16_t_u_s(func_63((((((g_90 = func_67(l_73, (safe_add_func_uint16_t_u_u((((g_77 = g_29.f3) ^ l_18) <= l_18), 1L)), g_29.f7, l_49, g_29.f1)) & 1UL) == l_18) ^ g_29.f3) , (void*)0), &g_74, g_29.f9), 11)), g_29.f2, l_18, l_95), g_29.f5, g_29.f5), g_29)) & 65535UL) != l_95.f7) , g_650.f4)) >= (-1L)), g_650.f6, l_655, g_454.f4), 1L)) , g_650), l_95.f2, l_95.f8, l_95.f0) <= l_655), 0x0AL)), l_771))), l_771)))), g_454.f9, g_650.f5, g_454.f1), g_650.f6))), l_40)))
    {
        (*l_772) = (-7L);
lbl_884:
        if (g_414)
            goto lbl_828;
    }
    else
    {
        for (g_130.f8 = 9; (g_130.f8 >= 0); g_130.f8 -= 1)
        {
            int i;
            return g_209[g_130.f8];
        }
    }

    ;
    ;
    ;

lbl_828:
    for (g_630 = (-7); (g_630 > 32); g_630++)
    {
        int l_781 = 8L;
        int l_782[4][6] = {{0xD6C2CCE7L,0xD6C2CCE7L,(-1L),0x5CEF8EAAL,(-1L),0xD6C2CCE7L},{(-1L),0x23715DBCL,0x5CEF8EAAL,0x5CEF8EAAL,0x23715DBCL,(-1L)},{0xD6C2CCE7L,(-1L),0x5CEF8EAAL,(-1L),0xD6C2CCE7L,0xD6C2CCE7L},{1L,(-1L),(-1L),1L,0x23715DBCL,1L}};
        int ***l_822 = &g_736;
        int i, j;
        for (g_221 = 0; (g_221 > (-21)); g_221 = safe_sub_func_int16_t_s_s(g_221, 9))
        {
            char l_783 = 0x48L;
            int l_785 = 0x6A368DE4L;
            int ***l_820 = &g_736;
            struct S0 l_825 = {-228,11829,57,-1,-11,-4701,13,-1773,0xEDDD0847L,-75};
            for (g_74 = (-9); (g_74 >= 5); ++g_74)
            {
                int *l_779 = &g_83;
                int *l_780[10][10] = {{&g_83,&g_83,&g_83,&g_77,&g_77,&g_83,(void*)0,&g_77,&g_77,&g_77},{&g_77,&g_83,&g_83,&g_77,&g_77,&g_83,&g_83,&g_77,&g_77,&g_77},{&g_77,(void*)0,&g_83,&g_77,&g_77,&g_83,&g_83,&g_83,&g_77,&g_77},{&g_83,&g_83,&g_83,&g_77,&g_77,&g_83,(void*)0,&g_77,&g_77,&g_77},{&g_77,&g_83,&g_83,&g_77,&g_77,&g_83,&g_83,&g_77,&g_77,&g_77},{&g_77,(void*)0,&g_83,&g_77,&g_77,&g_83,&g_83,&g_83,&g_77,&g_77},{&g_83,&g_77,(void*)0,&g_77,(void*)0,(void*)0,&g_77,&g_83,&g_77,&g_77},{&g_83,&g_77,&g_77,(void*)0,(void*)0,&g_77,&g_77,&g_83,&g_83,(void*)0},{&g_83,&g_77,(void*)0,(void*)0,&g_77,(void*)0,&g_77,(void*)0,&g_77,(void*)0},{(void*)0,&g_77,(void*)0,&g_77,(void*)0,(void*)0,&g_77,&g_83,&g_77,&g_77}};
                unsigned char l_793 = 0x09L;
                unsigned *l_805 = &g_88[3][1];
                unsigned **l_804 = &l_805;
                int i, j;
                g_788++;
                for (l_18 = 0; (l_18 < 3); l_18 = safe_add_func_int8_t_s_s(l_18, 9))
                {
                    unsigned ***l_808 = &g_806;
                    const int l_819[7][6] = {{4L,4L,0xA6B4FE83L,4L,4L,0xA6B4FE83L},{4L,4L,0xA6B4FE83L,4L,4L,0xA6B4FE83L},{4L,4L,0xA6B4FE83L,4L,4L,0xA6B4FE83L},{4L,4L,0xA6B4FE83L,4L,4L,0xA6B4FE83L},{4L,4L,0xA6B4FE83L,4L,4L,0xA6B4FE83L},{4L,4L,0xA6B4FE83L,4L,4L,0xA6B4FE83L},{4L,4L,0xA6B4FE83L,4L,4L,0xA6B4FE83L}};
                    int ****l_821 = &g_735;
                    struct S0 l_823 = {530,13101,-89,-1,-2,-6041,-24,-2755,1L,7};
                    int i, j;
                    --l_793;
                }
            }
        }
    }
    if (func_32(((*l_772) = (!(*l_772))), l_829, g_454.f8, (l_830 < ((**g_806) & l_831))))
    {
        unsigned char l_834[3];
        int i;
        for (i = 0; i < 3; i++)
            l_834[i] = 0UL;
        (*l_772) = (((safe_rshift_func_int16_t_s_s((g_835 = func_23(func_56((*l_772), (*l_772), (l_834[0] < 0L), l_95), ((((*l_772) != (((void*)0 != (*g_806)) , l_834[0])) >= l_834[1]) , l_95), g_29.f8, l_834[2], g_787)), g_55)) ^ g_454.f0) & l_653[1][4][4]);
    }
    else
    {
        unsigned l_842 = 1UL;
        int l_864[10][1][1] = {{{0x38AA0B6DL}},{{(-4L)}},{{0x38AA0B6DL}},{{(-4L)}},{{0x38AA0B6DL}},{{(-4L)}},{{0x38AA0B6DL}},{{(-4L)}},{{0x38AA0B6DL}},{{(-4L)}}};
        unsigned char l_870 = 0x45L;
        char l_897[8];
        short l_977 = (-7L);
        unsigned *l_997 = (void*)0;
        const unsigned *l_998 = &l_831;
        char *l_1021 = &l_897[1];
        char **l_1020 = &l_1021;
        char l_1029 = (-1L);
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_897[i] = 0x7EL;
lbl_873:
        for (g_650.f8 = 0; (g_650.f8 < (-29)); g_650.f8--)
        {
            short l_841 = (-1L);
            struct S0 **l_845 = (void*)0;
            int l_863[7][3] = {{0xD3A52A8DL,(-3L),0xD3A52A8DL},{0x6FC0C47CL,0x6FC0C47CL,0x0CF47DE2L},{0xE3DB6981L,(-3L),0xE3DB6981L},{0x6FC0C47CL,0x0CF47DE2L,0x0CF47DE2L},{0xD3A52A8DL,(-3L),0xD3A52A8DL},{0x6FC0C47CL,0x6FC0C47CL,0x0CF47DE2L},{0xE3DB6981L,(-3L),0xE3DB6981L}};
            const unsigned l_865 = 0xD3279E54L;
            int *l_867 = &g_77;
            int *l_868 = &l_864[5][0][0];
            int *l_869[4] = {&l_863[5][2],&l_863[5][2],&l_863[5][2],&l_863[5][2]};
            int i, j;
            for (g_438 = 0; (g_438 <= 0); g_438 += 1)
            {
                char l_840[7] = {3L,3L,3L,3L,3L,3L,3L};
                struct S0 l_852[2] = {{-278,571,16,1,-19,16022,14,837,0x5C2028D2L,-116},{-278,571,16,1,-19,16022,14,837,0x5C2028D2L,-116}};
                int i;
                for (g_604 = 0; (g_604 <= 0); g_604 += 1)
                {
                    int *l_838 = &l_786[3][1][2];
                    int *l_839[6][3][3] = {{{&g_77,&g_77,&l_786[3][1][2]},{(void*)0,&l_786[2][0][0],&l_786[2][0][0]},{&l_786[3][1][2],&l_786[1][1][0],&l_786[3][1][2]}},{{(void*)0,&l_786[1][0][3],(void*)0},{&g_77,&l_786[3][1][2],&l_786[3][1][2]},{&l_786[1][0][4],&l_786[1][0][4],&l_786[2][0][0]}},{{&l_786[3][1][2],&l_786[3][1][2],&l_786[3][1][2]},{&l_786[2][0][0],&l_786[1][0][3],&g_77},{&l_786[3][1][2],&l_786[1][1][0],&l_786[3][1][2]}},{{&l_786[1][0][4],&l_786[2][0][0],&g_77},{&g_77,&g_77,&l_786[3][1][2]},{(void*)0,&l_786[2][0][0],&l_786[2][0][0]}},{{&l_786[3][1][2],&l_786[1][1][0],&l_786[3][1][2]},{(void*)0,&l_786[1][0][3],(void*)0},{&g_77,&l_786[3][1][2],&l_786[3][1][2]}},{{&l_786[1][0][4],&l_786[1][0][4],&l_786[2][0][0]},{&l_786[3][1][2],&l_786[3][1][2],&l_786[3][1][2]},{&l_786[2][0][0],&l_786[1][0][3],&g_77}}};
                    int i, j, k;
                    --l_842;
                    if (g_29.f6)
                        goto lbl_873;
                    (*l_772) = 5L;
                }
                l_852[1].f6 = l_866[0][3][0];
            }
            if (l_864[5][0][0])
                continue;
            ++l_870;
        }
        if (((*l_772) = (**g_425)))
        {
            int *l_877 = &g_83;
            char l_898[7] = {0x9CL,0x6FL,0x9CL,0x9CL,0x6FL,0x9CL,0x9CL};
            int l_933 = 1L;
            int l_936 = 0xA8762142L;
            int l_937[3];
            unsigned ** const *l_957 = &g_806;
            unsigned short *l_958 = &g_50;
            short l_975[9][4][6] = {{{0x8DEEL,(-4L),0x8DEEL,3L,0xD470L,1L},{0xFAA1L,0x3C6AL,(-5L),0x0FACL,0x3613L,0x8DEEL},{0L,(-4L),0L,0x0FACL,0x0FACL,0L},{0xFAA1L,0xFAA1L,0xD470L,0L,(-5L),0x32EDL}},{{0x32EDL,0xE378L,0xFAA1L,(-4L),0x3C6AL,0xD470L},{0xB4DDL,0x32EDL,0xFAA1L,0L,0xFAA1L,0x32EDL},{0x3613L,0L,0xD470L,1L,3L,0L},{1L,3L,0L,0xFAA1L,0x6393L,0x8DEEL}},{{1L,3L,(-5L),(-5L),3L,1L},{3L,0L,0x32EDL,0xE378L,0xFAA1L,(-4L)},{(-5L),0x32EDL,0x6393L,0xB4DDL,0x3C6AL,0x0FACL},{(-5L),0xE378L,0xB4DDL,0xE378L,(-5L),0xFAA1L}},{{3L,0xFAA1L,0x3C6AL,(-5L),0x0FACL,0x3613L},{1L,(-4L),0x0FACL,0xFAA1L,0x3613L,0x3613L},{1L,0x3C6AL,0x3C6AL,1L,0x8DEEL,0xFAA1L},{0x3613L,0xD470L,0xB4DDL,0L,0xE378L,0x0FACL}},{{0xB4DDL,1L,0x6393L,(-4L),0xB4DDL,0xE378L},{0xD470L,1L,0xD470L,0x3C6AL,(-4L),0xFAA1L},{0L,0x0FACL,0x8DEEL,0x32EDL,3L,(-4L)},{0x3613L,0xE378L,0x3C6AL,0x32EDL,0x32EDL,0x3C6AL}},{{0L,0L,1L,0x3C6AL,0x8DEEL,0xD470L},{0xD470L,0xB4DDL,0L,0xE378L,0x0FACL,1L},{1L,0xD470L,0L,0x3613L,0L,0xD470L},{3L,0x3613L,1L,0L,0x6393L,0x3C6AL}},{{0L,0x6393L,0x3C6AL,0L,(-5L),(-4L)},{0xFAA1L,0x6393L,0x8DEEL,0x8DEEL,0x6393L,0xFAA1L},{0x6393L,0x3613L,0xD470L,0xB4DDL,0L,0xE378L},{0x8DEEL,0xD470L,(-5L),1L,0x0FACL,0x32EDL}},{{0x8DEEL,0xB4DDL,1L,0xB4DDL,0x8DEEL,0L},{0x6393L,0L,0x0FACL,0x8DEEL,0x32EDL,3L},{0xFAA1L,0xE378L,0x32EDL,0L,3L,3L},{0L,0x0FACL,0x0FACL,0L,(-4L),0L}},{{3L,1L,1L,0x3613L,0xFAA1L,(-5L)},{0L,0xE378L,0x0FACL,1L,0xFAA1L,1L},{0x8DEEL,(-4L),0x8DEEL,3L,0xD470L,0xE378L},{0xB4DDL,0x6393L,0x32EDL,(-5L),0L,0xD470L}}};
            unsigned l_976[7][6] = {{1UL,0x079F4988L,0xF3625DD2L,0x079F4988L,1UL,1UL},{4294967292UL,0x079F4988L,0x079F4988L,4294967292UL,0xA052843EL,4294967292UL},{4294967292UL,0xA052843EL,4294967292UL,0x079F4988L,0x079F4988L,4294967292UL},{1UL,1UL,0x079F4988L,0xF3625DD2L,0x079F4988L,1UL},{0x079F4988L,0xA052843EL,0xF3625DD2L,0xF3625DD2L,0xA052843EL,0x079F4988L},{1UL,0x079F4988L,0xF3625DD2L,0x079F4988L,1UL,1UL},{4294967292UL,0x079F4988L,0x079F4988L,4294967292UL,0xA052843EL,4294967292UL}};
            int l_1028[7] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_937[i] = (-9L);
            for (l_842 = 19; (l_842 != 30); l_842 = safe_add_func_uint32_t_u_u(l_842, 7))
            {
                g_876 = (void*)0;

                ;
            }
            (**g_424) = l_877;

            ;
            for (g_650.f8 = (-25); (g_650.f8 == (-19)); g_650.f8 = safe_add_func_int32_t_s_s(g_650.f8, 4))
            {
                int l_885[10][2] = {{0x1DAA88FAL,0x767F11B2L},{0x1DAA88FAL,0x1DAA88FAL},{0x767F11B2L,0x1DAA88FAL},{0x1DAA88FAL,0x767F11B2L},{0x1DAA88FAL,0x1DAA88FAL},{0x767F11B2L,0x1DAA88FAL},{0x1DAA88FAL,0x767F11B2L},{0x1DAA88FAL,0x1DAA88FAL},{0x767F11B2L,0x1DAA88FAL},{0x1DAA88FAL,0x767F11B2L}};
                unsigned char l_887 = 0x6CL;
                int ***l_912[4][8][5] = {{{(void*)0,&g_736,&g_736,&g_736,(void*)0},{&g_736,&g_736,&g_736,&g_736,&g_736},{(void*)0,&g_736,(void*)0,&g_736,(void*)0},{&g_736,&g_736,&g_736,&g_736,&g_736},{&g_736,&g_736,&g_736,&g_736,&g_736},{&g_736,&g_736,&g_736,&g_736,&g_736},{(void*)0,&g_736,&g_736,&g_736,(void*)0},{&g_736,&g_736,&g_736,&g_736,&g_736}},{{&g_736,&g_736,&g_736,&g_736,&g_736},{&g_736,&g_736,&g_736,&g_736,&g_736},{(void*)0,&g_736,(void*)0,&g_736,(void*)0},{&g_736,&g_736,&g_736,&g_736,&g_736},{&g_736,&g_736,(void*)0,&g_736,&g_736},{&g_736,&g_736,&g_736,&g_736,&g_736},{(void*)0,&g_736,(void*)0,&g_736,(void*)0},{&g_736,&g_736,&g_736,&g_736,&g_736}},{{&g_736,&g_736,&g_736,&g_736,&g_736},{&g_736,&g_736,&g_736,&g_736,&g_736},{(void*)0,&g_736,&g_736,&g_736,(void*)0},{&g_736,&g_736,&g_736,&g_736,&g_736},{&g_736,&g_736,&g_736,&g_736,&g_736},{&g_736,&g_736,&g_736,&g_736,&g_736},{(void*)0,&g_736,(void*)0,&g_736,(void*)0},{&g_736,&g_736,&g_736,&g_736,&g_736}},{{&g_736,&g_736,(void*)0,&g_736,&g_736},{&g_736,&g_736,&g_736,&g_736,&g_736},{(void*)0,&g_736,(void*)0,&g_736,(void*)0},{&g_736,&g_736,&g_736,&g_736,&g_736},{&g_736,&g_736,&g_736,&g_736,&g_736},{&g_736,&g_736,&g_736,&g_736,&g_736},{(void*)0,&g_736,&g_736,&g_736,(void*)0},{&g_736,&g_736,&g_736,&g_736,&g_736}}};
                int i, j, k;
                (*l_772) = (-6L);
                for (g_77 = 22; (g_77 >= 8); g_77 = safe_sub_func_int32_t_s_s(g_77, 1))
                {
                    int l_886 = 0x76477C0CL;
                    for (g_438 = 0; (g_438 <= (-7)); g_438 = safe_sub_func_uint8_t_u_u(g_438, 7))
                    {
                        unsigned l_888[6][9] = {{4294967293UL,0UL,0xBAEE9FA2L,0x537F8071L,4294967295UL,0x041F8E24L,0x041F8E24L,4294967295UL,0x537F8071L},{4294967293UL,0x85BE0F8BL,4294967293UL,0x041F8E24L,0x1A4F0358L,0xBAEE9FA2L,0xDDA47CAAL,0xDDA47CAAL,0xBAEE9FA2L},{0xBAEE9FA2L,0UL,4294967293UL,0UL,0xBAEE9FA2L,0x537F8071L,4294967295UL,0x041F8E24L,0x041F8E24L},{0UL,7UL,0xBAEE9FA2L,0x041F8E24L,0xBAEE9FA2L,7UL,0UL,0x1A4F0358L,1UL},{0xDDA47CAAL,0x85BE0F8BL,4294967295UL,0xDDA47CAAL,0UL,0xDDA47CAAL,4294967295UL,0x85BE0F8BL,1UL},{4294967293UL,0xDDA47CAAL,1UL,0UL,0x537F8071L,0x1A4F0358L,0x537F8071L,0UL,1UL}};
                        int i, j;
                        if (g_29.f2)
                            goto lbl_884;

                        if (l_885[4][1])
                            continue;
                        (*l_877) &= (l_886 , (-2L));
                        l_888[3][5] &= (l_887 == l_886);
                    }
                }
            }
            for (g_447.f8 = 2; (g_447.f8 >= 0); g_447.f8 -= 1)
            {
                short *l_919 = &g_115;
                int l_926 = 0L;
                int l_927 = 0x22221BF1L;
                int l_931 = 0L;
                int l_934 = (-1L);
                int l_935[8][10][3] = {{{0xC540088FL,1L,(-3L)},{0x944EFAD4L,0xB3E448D5L,1L},{1L,0x6CD170B5L,0xFEE09847L},{0x1849D97CL,0xA52BC871L,1L},{0xA52BC871L,6L,0x7E0E14A9L},{(-1L),(-4L),(-4L)},{(-1L),0L,0x6B647470L},{0x250E485EL,0L,0x08AD4A46L},{0x2AA1E694L,4L,0x68EEF520L},{0xC1DAD848L,4L,8L}},{{0x8EE2BCD9L,4L,6L},{0x6400C66CL,0L,0x8EE2BCD9L},{0xC509707BL,0L,0L},{(-5L),(-4L),0x79BF9F1FL},{0x152E7A76L,6L,0xF97AB9CEL},{4L,0xA52BC871L,0x250E485EL},{(-7L),0x6CD170B5L,0x920A3085L},{0xE52C94C2L,0xB3E448D5L,0xDE23F863L},{9L,1L,0x3F8E6AD0L},{1L,0xB6E0790CL,(-1L)}},{{8L,0xC8BC2F47L,0x2E03E72EL},{6L,6L,0xA52BC871L},{(-6L),(-6L),0xC8BC2F47L},{1L,0x1849D97CL,0x69C8EC7CL},{2L,0xFEE09847L,0x69C8EC7CL},{0xB1DE5B15L,(-1L),0xC8BC2F47L},{0x250E485EL,(-1L),4L},{0x944EFAD4L,0x429809AAL,0xE52C94C2L},{0x7E0E14A9L,0x152E7A76L,2L},{(-10L),0L,6L}},{{0x6D5E19A0L,(-1L),(-4L)},{0x920A3085L,0L,0x79BF9F1FL},{(-3L),0x6CD170B5L,0xC1DAD848L},{0L,0xE52C94C2L,1L},{0xFEE09847L,(-1L),(-4L)},{0xD9C9893CL,0x1849D97CL,0xD9C9893CL},{0xF97AB9CEL,(-3L),8L},{0x7221D195L,(-4L),1L},{0xF9A21F0CL,1L,7L},{0x429809AAL,0xB3E448D5L,0x4F39F3ECL}},{{0xF9A21F0CL,0xA52BC871L,4L},{0x7221D195L,4L,6L},{0xF97AB9CEL,0xB1DE5B15L,(-1L)},{0xD9C9893CL,9L,0x743B06A7L},{0xFEE09847L,(-10L),0x152E7A76L},{0L,2L,1L},{(-3L),1L,(-1L)},{0x920A3085L,0xC509707BL,0x250E485EL},{0x6D5E19A0L,8L,0x023CA7A5L},{(-10L),(-7L),0x429809AAL}},{{0x7E0E14A9L,0xDD86BE1AL,0xC509707BL},{0x944EFAD4L,0xD9C9893CL,0x2AA1E694L},{0x250E485EL,6L,1L},{0x6400C66CL,0xC8BC2F47L,0xB3E448D5L},{0x6B647470L,0xC8BC2F47L,0x08AD4A46L},{0xB6E0790CL,6L,0x8EE2BCD9L},{0xDD86BE1AL,0xD9C9893CL,0xDE23F863L},{(-6L),0xDD86BE1AL,(-6L)},{0x4F39F3ECL,0x72523DD7L,0L},{0xE52C94C2L,0x68EEF520L,0x2AA1E694L}},{{(-3L),2L,0x429809AAL},{1L,1L,0xE52C94C2L},{0xFEE09847L,0x4AF21265L,(-8L)},{1L,1L,0xDE23F863L},{0x7E0E14A9L,(-8L),1L},{(-4L),(-4L),(-1L)},{0x6B647470L,0x6400C66CL,0x79BF9F1FL},{0x08AD4A46L,(-1L),(-3L)},{0x68EEF520L,1L,0xFEE09847L},{8L,0x08AD4A46L,(-3L)}},{{6L,0xC1DAD848L,0x79BF9F1FL},{0x8EE2BCD9L,1L,(-1L)},{0L,(-3L),1L},{0x79BF9F1FL,0x920A3085L,0xDE23F863L},{0xF97AB9CEL,(-4L),(-8L)},{0x250E485EL,(-6L),0xE52C94C2L},{0x920A3085L,6L,0x429809AAL},{0xDE23F863L,(-6L),0x2AA1E694L},{0x3F8E6AD0L,0x2AA1E694L,0L},{(-1L),4L,(-6L)}}};
                struct S0 **l_954 = &g_876;
                int i, j, k;
                if (((safe_lshift_func_uint8_t_u_s(((((*l_919) = 5L) < func_37((0x69L & (g_650 , ((((*l_877) , (safe_sub_func_uint32_t_u_u(((4294967295UL != (((safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(0x7F2CL, l_926)) ^ (*l_877)), l_926)) , 65532UL) & (*g_224))) && 0xCBC7C576L), (**g_425)))) != 0x989BL) , 0x29L))), (*l_772))) != g_447.f0), (*l_877))) <= g_447.f8))
                {
                    int *l_928 = &g_77;
                    int *l_929 = (void*)0;
                    int l_930 = 5L;
                    int *l_932[3][3];
                    struct S0 **l_953 = (void*)0;
                    struct S0 ***l_952[3][3][2] = {{{(void*)0,&l_953},{(void*)0,&l_953},{(void*)0,&l_953}},{{(void*)0,&l_953},{(void*)0,&l_953},{(void*)0,&l_953}},{{(void*)0,&l_953},{(void*)0,&l_953},{(void*)0,&l_953}}};
                    const int l_955 = (-9L);
                    unsigned short *l_961 = &g_788;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_932[i][j] = &g_83;
                    }
                    g_938[1]--;
                    if (((*l_772) = (safe_mod_func_uint32_t_u_u(4294967293UL, func_67(l_943, (safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((((&g_876 == (l_954 = &g_876)) && g_4[0]) && (*l_772)), 14)), (*l_877))) && ((*g_426) != (l_955 >= g_126))) , l_956[0]) == l_957), l_864[7][0][0])), (*l_928))), (*l_877), l_958, g_650.f8)))))
                    {
                        char l_962 = 0L;
                        l_962 = ((((safe_mod_func_int16_t_s_s(0L, (*g_432))) != (*l_877)) , l_961) != &g_237[6][4]);
                    }
                    else
                    {
                        (*g_425) = (*g_425);
                        (*l_772) = ((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((g_788 ^ (safe_add_func_int16_t_s_s(0xACE4L, (--(*l_54))))) <= ((0xB21078C7L | (safe_lshift_func_uint16_t_u_u((g_447.f9 != (safe_rshift_func_uint16_t_u_u(((*g_224) = ((l_919 == l_961) ^ (4UL < (((*l_772) == ((**g_806) = ((l_975[1][3][0] ^= l_864[5][0][0]) | l_976[4][0]))) && (***g_424))))), 2))), 7))) <= l_935[6][6][1])), (*l_928))), 0x46L)) < (*l_877));
                        return l_935[6][6][1];


                    }
                    ++g_979;
                }
                else
                {
                    unsigned short l_982 = 65535UL;
                    int l_985 = 0xF38F03B8L;
                    int l_986 = 0xABDF72C7L;
                    short l_988 = 2L;
                    for (l_831 = 0; (l_831 <= 2); l_831 += 1)
                    {
                        int *l_983 = &l_931;
                        int *l_984[7] = {&l_934,&l_786[3][1][2],&l_786[3][1][2],&l_934,&l_786[3][1][2],&l_786[3][1][2],&l_934};
                        char l_987 = 9L;
                        int i;
                        if (l_982)
                            break;
                        --g_989[1];
                    }
                    return (*l_772);


                }
                for (g_835 = 0; (g_835 <= 2); g_835 += 1)
                {
                    struct S0 l_996 = {719,13572,-58,-0,21,8534,27,-1625,0L,-115};
                    const unsigned **l_999 = &l_998;
                    int *l_1005 = &l_786[3][1][3];
                    int ***l_1012[2];
                    int ****l_1011 = &l_1012[1];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1012[i] = &g_846;
                    (*l_772) = (((+func_10(g_29.f2, (*g_189), (*l_772), l_864[5][0][0], ((--(**g_806)) ^ (0UL >= l_977)))) | ((l_957 != &g_806) , (*g_224))) <= 0L);
                    (*l_1005) &= (func_32(l_864[5][0][0], g_50, ((((safe_lshift_func_uint8_t_u_u((l_996 , g_650.f8), 2)) , l_997) == ((*l_999) = l_998)) || ((safe_rshift_func_int8_t_s_u((func_56((safe_rshift_func_int8_t_s_s(func_41((*l_772), l_95), l_935[4][0][1])), g_29.f3, l_927, l_1004) , 0x14L), g_119[9][2])) >= g_447.f5)), l_935[4][7][2]) < l_927);

                    ;
                    if (((*l_772) |= (safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((void*)0 == l_957), (safe_unary_minus_func_int16_t_s(((((((*l_1011) = (void*)0) != &g_846) > 7L) && g_787) == (--(*g_189))))))), 4))))
                    {
                        if ((***g_424))
                            break;
                    }
                    else
                    {
                        struct S0 l_1018[9][2][1] = {{{{-327,12435,-34,-1,1,4159,-5,-2689,-7L,118}},{{-636,8649,22,1,-15,-6276,2,1320,0x9A15CD87L,17}}},{{{-327,12435,-34,-1,1,4159,-5,-2689,-7L,118}},{{-636,8649,22,1,-15,-6276,2,1320,0x9A15CD87L,17}}},{{{-327,12435,-34,-1,1,4159,-5,-2689,-7L,118}},{{-636,8649,22,1,-15,-6276,2,1320,0x9A15CD87L,17}}},{{{-327,12435,-34,-1,1,4159,-5,-2689,-7L,118}},{{-636,8649,22,1,-15,-6276,2,1320,0x9A15CD87L,17}}},{{{-327,12435,-34,-1,1,4159,-5,-2689,-7L,118}},{{-636,8649,22,1,-15,-6276,2,1320,0x9A15CD87L,17}}},{{{-327,12435,-34,-1,1,4159,-5,-2689,-7L,118}},{{-636,8649,22,1,-15,-6276,2,1320,0x9A15CD87L,17}}},{{{-327,12435,-34,-1,1,4159,-5,-2689,-7L,118}},{{-636,8649,22,1,-15,-6276,2,1320,0x9A15CD87L,17}}},{{{-327,12435,-34,-1,1,4159,-5,-2689,-7L,118}},{{-636,8649,22,1,-15,-6276,2,1320,0x9A15CD87L,17}}},{{{-327,12435,-34,-1,1,4159,-5,-2689,-7L,118}},{{-636,8649,22,1,-15,-6276,2,1320,0x9A15CD87L,17}}}};
                        int *l_1019 = &l_933;
                        int i, j, k;
                        (*l_772) = (+l_935[3][1][2]);
                        (*l_1019) ^= ((safe_rshift_func_int8_t_s_u((((**g_806) &= ((func_63(g_225[(g_447.f8 + 3)], l_919, ((&g_130 == (func_56(((((((*l_877) = (*l_1005)) , &l_975[8][1][1]) == ((l_842 , ((g_447.f9 < ((void*)0 == &l_842)) || l_1017)) , (void*)0)) < 65531UL) ^ 2UL), g_650.f3, (*l_772), l_1018[5][1][0]) , &l_1018[5][1][0])) && (*l_1005))) > l_937[0]) && 0x89L)) && (*g_807)), g_454.f0)) & g_209[8]);

                        ;
                    }


                    for (l_936 = 2; (l_936 >= 0); l_936 -= 1)
                    {
                        unsigned short *l_1025[9];
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_1025[i] = &g_50;
                        g_130.f3 = ((((0UL < (l_866[(g_835 + 1)][g_835][g_835] < (g_29.f0 <= ((*l_1005) <= (***g_424))))) < (((g_1022 = l_1020) != ((safe_rshift_func_int8_t_s_s((func_63(g_225[(g_447.f8 + 3)], l_1025[4], func_10((safe_lshift_func_uint16_t_u_s(l_931, l_1028[4])), l_1029, (*l_772), (*g_426), g_454.f6)) , 0x42L), 0)) , (void*)0)) <= g_237[0][4])) | (*l_1005)) != (*l_1005));

                        ;
                        ;
                    }
                }
            }

            ;
        }
        else
        {
            unsigned l_1030 = 0x667B5372L;
            struct S0 **l_1033 = &g_876;
            struct S0 *l_1035 = &l_95;
            struct S0 **l_1034 = &l_1035;
            int l_1047[10] = {0x6A6D0560L,0x6A6D0560L,0x6A6D0560L,0x6A6D0560L,0x6A6D0560L,0x6A6D0560L,0x6A6D0560L,0x6A6D0560L,0x6A6D0560L,0x6A6D0560L};
            unsigned l_1051 = 0x8F970741L;
            int i;
            l_1030++;
            (**g_424) = (**g_424);
            (*l_1034) = ((*l_1033) = &g_29);

            ;
            ;
            for (g_475 = 0; (g_475 != 24); ++g_475)
            {
                unsigned char l_1050 = 0x2FL;
                (**l_1034) = func_56((func_23((*g_876), (*g_876), (safe_rshift_func_int16_t_s_u(((*l_772) == g_454.f2), 14)), g_151, ((65535UL >= (((65527UL <= (l_1030 == 0x55181CF3L)) || g_604) != l_842)) ^ g_824)) , 0x43L), l_897[5], g_978, l_95);
                for (g_294 = (-15); (g_294 == 46); ++g_294)
                {
                    short *l_1044 = (void*)0;
                    short *l_1045 = (void*)0;
                    short *l_1046[10][6] = {{&g_115,&g_115,&l_857,&g_115,&g_978,&g_978},{(void*)0,&g_115,&g_115,(void*)0,(void*)0,&g_115},{&g_978,(void*)0,&l_977,(void*)0,&l_977,&l_857},{&l_977,&g_115,&g_115,&g_115,&l_977,&g_115},{(void*)0,(void*)0,(void*)0,&l_857,(void*)0,&g_115},{&g_115,&g_115,&g_978,&l_857,&g_978,(void*)0},{(void*)0,&g_115,&l_857,&l_857,&l_857,&l_857},{&g_115,&g_115,(void*)0,&l_857,&g_978,(void*)0},{(void*)0,&l_977,&g_115,&g_115,&g_115,(void*)0},{&l_977,(void*)0,&g_115,(void*)0,&g_115,(void*)0}};
                    int i, j;
                    if (l_771)
                        goto lbl_884;

                    if ((safe_sub_func_int32_t_s_s((*g_426), (0x62L <= (((l_1047[7] = (-6L)) | 65535UL) , ((safe_lshift_func_int16_t_s_u(g_29.f9, (((((l_1050 <= func_37(l_1050, l_864[8][0][0])) , (*g_807)) >= (*g_807)) <= l_1051) >= 0xFCL))) == (*g_432)))))))
                    {
                        int l_1053 = (-1L);
                        l_1053 = (g_1052 , (!0x129B17F3L));
                    }
                    else
                    {
                        return (*l_772);


                    }
                }
            }
        }
        if (l_95.f8)
            goto lbl_873;
    }
    return (*l_772);
}







static unsigned short func_10(short p_11, unsigned short p_12, unsigned p_13, int p_14, unsigned char p_15)
{
    return p_15;
}







static unsigned short func_23(struct S0 p_24, struct S0 p_25, unsigned char p_26, unsigned char p_27, const int p_28)
{
    int *l_659[5];
    struct S0 l_683 = {701,10169,25,0,17,2264,-1,-2766,0x3411ED91L,122};
    unsigned char l_698 = 1UL;
    unsigned short *l_729 = &g_55;
    int ** const *l_734 = (void*)0;
    const char l_761 = 0xF8L;
    int i;
    for (i = 0; i < 5; i++)
        l_659[i] = &g_77;
    for (g_447.f8 = 0; (g_447.f8 == 2); g_447.f8 = safe_add_func_int16_t_s_s(g_447.f8, 1))
    {
        short l_664 = 0L;
        int l_666 = 0x3416407FL;
        int l_667 = 8L;
        int l_668[4][5][7] = {{{0L,0xF9488A68L,0xDAB832B8L,0x782FB99EL,0L,0x52AFE9BAL,0xB8456F11L},{0x2B7CDCC3L,0x08C41FC4L,(-2L),0xF9488A68L,0x9517C918L,0x52AFE9BAL,3L},{3L,0x5D01B00AL,(-2L),0xCDAE87D4L,0x56614619L,(-1L),(-1L)},{0L,(-1L),0x5405E8D7L,(-1L),0L,0x2B7CDCC3L,0x59CBEC51L},{0xE293A76CL,(-5L),0x31EE94DFL,4L,(-1L),(-2L),3L}},{{0x31EE94DFL,1L,0xCDAE87D4L,0x89B7030EL,0x906A82FAL,0xCB319FA1L,0x942AE431L},{0xE293A76CL,4L,0L,1L,0x1C6574B8L,0x2AB4CFCDL,0xE293A76CL},{0L,1L,0xD0944975L,0x59CBEC51L,0L,0xDAB832B8L,(-2L)},{3L,1L,0x1489A66BL,0xD0944975L,1L,0x10247FEEL,(-5L)},{0x7FB9FFB1L,0x08C41FC4L,0xF9488A68L,0x749F5646L,4L,0x3148FAAAL,0xD5B3E336L}},{{(-1L),0L,0x52AFE9BAL,0x749F5646L,0x1F353DD5L,0x31EE94DFL,0x906A82FAL},{1L,0x5D01B00AL,0xCDAE87D4L,0xD0944975L,(-2L),(-5L),0x30359392L},{1L,8L,(-5L),0x59CBEC51L,0x5D01B00AL,0xB8456F11L,0x5D01B00AL},{1L,3L,3L,1L,1L,0x9517C918L,(-1L)},{(-1L),(-8L),(-2L),0x89B7030EL,1L,(-5L),0x6A39B61BL}},{{0xD5B3E336L,0x1C6574B8L,0x47BEE00AL,0xD5B3E336L,8L,0x1EAC9A92L,(-1L)},{0xE293A76CL,0x6A39B61BL,(-2L),8L,0x6A39B61BL,0xDAB832B8L,(-3L)},{0xDAB832B8L,1L,0x10247FEEL,0x52AFE9BAL,7L,3L,0x1F353DD5L},{1L,(-1L),0x4BABD1B6L,0L,(-1L),(-1L),7L},{(-1L),0x89B7030EL,0xD0944975L,0x906A82FAL,0x1D442EF8L,0xD0944975L,1L}}};
        unsigned * const l_697 = &g_88[1][0];
        int *l_719 = (void*)0;
        struct S0 *l_767 = (void*)0;
        struct S0 *l_768[9] = {&g_130,&g_130,&g_130,&g_130,&g_130,&g_130,&g_130,&g_130,&g_130};
        int i, j, k;
        if ((*g_426))
        {
            char l_660 = (-2L);
            int l_662[6] = {6L,0xCCB7F284L,6L,6L,0xCCB7F284L,6L};
            int l_669 = (-10L);
            unsigned *l_675[10][4] = {{&g_88[1][0],&g_7,&g_7,&g_88[4][0]},{&g_88[1][0],&g_88[1][0],(void*)0,&g_7},{&g_88[1][0],(void*)0,&g_88[1][0],&g_7},{(void*)0,&g_88[1][0],&g_88[1][0],&g_88[4][0]},{&g_7,&g_7,&g_88[1][0],&g_88[1][0]},{&g_88[1][5],&g_88[1][5],&g_88[1][0],&g_88[1][0]},{&g_7,&g_7,&g_88[1][0],&g_7},{(void*)0,&g_88[1][0],&g_88[1][0],&g_88[1][0]},{&g_88[1][0],&g_88[1][0],(void*)0,&g_7},{&g_88[1][0],&g_7,&g_7,&g_88[1][0]}};
            char *l_709[9][6] = {{(void*)0,&g_291,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_603[1][1][7],&g_291,&g_126,&g_126,&g_291},{&g_475,&g_475,&g_438,&g_291,&g_126,(void*)0},{&g_126,&g_603[1][1][7],(void*)0,&g_291,&g_603[1][1][7],&g_438},{&g_475,&g_126,(void*)0,&g_126,&g_475,(void*)0},{&g_475,&g_126,&g_438,&g_475,&g_603[1][1][7],&g_291},{&g_475,&g_603[1][1][7],&g_291,&g_126,&g_126,&g_291},{&g_475,&g_475,&g_438,&g_291,&g_126,(void*)0},{&g_126,&g_603[1][1][7],(void*)0,&g_291,&g_603[1][1][7],&g_438}};
            char **l_708 = &l_709[1][4];
            struct S0 l_713 = {-287,10092,-0,-0,-2,3238,16,2310,0x0D693A94L,-78};
            const int *l_717[9][9][1] = {{{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77}},{{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77}},{{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77}},{{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77}},{{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77}},{{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77}},{{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77}},{{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77}},{{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77},{&g_77}}};
            int i, j, k;
            (*g_425) = l_659[0];

            ;
            for (g_439 = 1; (g_439 <= 4); g_439 += 1)
            {
                int l_663[6] = {8L,8L,0L,8L,8L,0L};
                int l_665 = (-8L);
                unsigned short l_670 = 0x618BL;
                int i, j;
                g_130.f5 |= g_119[(g_439 + 3)][g_439];
                for (g_83 = 4; (g_83 >= 0); g_83 -= 1)
                {
                    int l_661[9][8][2] = {{{(-7L),0L},{0x8E412178L,(-7L)},{0xAB3C8DF0L,(-1L)},{(-7L),(-7L)},{(-1L),0xAB3C8DF0L},{(-7L),0x8E412178L},{0L,(-7L)},{9L,0L}},{{0xAB3C8DF0L,9L},{0xAB3C8DF0L,0L},{9L,(-7L)},{0L,0x8E412178L},{(-7L),0xAB3C8DF0L},{(-1L),(-7L)},{(-7L),(-1L)},{0xAB3C8DF0L,(-7L)}},{{0x8E412178L,0L},{(-7L),9L},{0L,0xAB3C8DF0L},{9L,0xAB3C8DF0L},{0L,9L},{(-7L),0L},{0x8E412178L,(-7L)},{0xAB3C8DF0L,(-1L)}},{{(-7L),(-7L)},{(-1L),0xAB3C8DF0L},{(-7L),0x8E412178L},{0L,(-7L)},{1L,0xDCF6D889L},{9L,0L},{9L,0xDCF6D889L},{1L,0x8E412178L}},{{0xDCF6D889L,0x363106E5L},{(-10L),9L},{0xE115D51EL,0x8E412178L},{0x8E412178L,0xE115D51EL},{9L,(-10L)},{0x363106E5L,0xDCF6D889L},{0x8E412178L,1L},{0xDCF6D889L,9L}},{{0L,9L},{0xDCF6D889L,1L},{0x8E412178L,0xDCF6D889L},{0x363106E5L,(-10L)},{9L,0xE115D51EL},{0x8E412178L,0x8E412178L},{0xE115D51EL,9L},{(-10L),0x363106E5L}},{{0xDCF6D889L,0x8E412178L},{1L,0xDCF6D889L},{9L,0L},{9L,0xDCF6D889L},{1L,0x8E412178L},{0xDCF6D889L,0x363106E5L},{(-10L),9L},{0xE115D51EL,0x8E412178L}},{{0x8E412178L,0xE115D51EL},{9L,(-10L)},{0x363106E5L,0xDCF6D889L},{0x8E412178L,1L},{0xDCF6D889L,9L},{0L,9L},{0xDCF6D889L,1L},{0x8E412178L,0xDCF6D889L}},{{0x363106E5L,(-10L)},{9L,0xE115D51EL},{0x8E412178L,0x8E412178L},{0xE115D51EL,9L},{(-10L),0x363106E5L},{0xDCF6D889L,0x8E412178L},{1L,0xDCF6D889L},{9L,0L}}};
                    struct S0 *l_682[9] = {&g_650,&g_650,&g_29,&g_650,&g_650,&g_29,&g_650,&g_650,&g_29};
                    int i, j, k;
                    if (g_119[g_439][g_83])
                        break;
                    ++l_670;
                    l_683 = func_56((safe_sub_func_int8_t_s_s((((&g_88[(g_83 + 1)][g_83] != l_675[9][3]) , 0x4AL) | (((safe_lshift_func_uint8_t_u_u((p_24.f6 >= (g_130.f0 < p_25.f9)), 4)) | (0x48L && ((safe_div_func_int16_t_s_s(g_130.f3, 0xEF02L)) | 0UL))) >= 0x0049L)), 3UL)), p_25.f5, l_664, g_454);
                    for (l_669 = 0; (l_669 <= 4); l_669 += 1)
                    {
                        int i, j;
                        p_24.f5 &= (((safe_lshift_func_uint16_t_u_u((g_119[(g_83 + 3)][g_439] = (func_32(g_454.f8, g_604, g_688, (***g_424)) != ((g_197 = g_197) != (void*)0))), p_24.f2)) , &l_660) != (void*)0);
                        return l_662[1];
                    }
                }
            }
            for (g_294 = 0; (g_294 >= 47); g_294 = safe_add_func_uint8_t_u_u(g_294, 8))
            {
                char l_703 = 0x48L;
                int l_718 = 0x269AD9E7L;
                if ((p_24.f6 && func_41((+((*g_432) ^= 0x7F71L)), (g_29.f5 , g_130))))
                {
                    return p_24.f4;
                }
                else
                {
                    l_668[2][4][4] = (g_29.f3 , l_668[3][2][3]);
                    if ((**g_425))
                        break;
                }
                for (p_24.f8 = 21; (p_24.f8 < (-23)); p_24.f8 = safe_sub_func_int16_t_s_s(p_24.f8, 5))
                {
                    unsigned l_714[3][9];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_714[i][j] = 0x2503CBD1L;
                    }
                    for (g_83 = 4; (g_83 < 2); g_83--)
                    {
                        char ** const l_710 = &l_709[1][5];
                        int l_711[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        int l_712 = 0xB836AA0AL;
                        int i;
                        (*g_425) = ((safe_sub_func_int8_t_s_s(l_668[3][2][3], (&g_7 == l_697))) , (*g_425));
                        p_25 = (p_24.f2 , func_56(l_698, (safe_add_func_uint32_t_u_u((g_29.f1 = (safe_rshift_func_uint16_t_u_u(l_703, (safe_sub_func_int8_t_s_s(0x74L, ((void*)0 == &g_439)))))), (safe_sub_func_int8_t_s_s((l_712 = (p_25.f9 > ((!(l_711[3] = (((l_708 == l_710) & g_447.f5) , 0UL))) || g_447.f0))), 0xCFL)))), l_664, l_713));
                        l_714[2][8]--;
                        p_25.f7 |= 0x5A8826BAL;
                    }
                    l_717[0][7][0] = (*g_425);
                    l_718 &= (6L != l_703);
                }
            }
        }
        else
        {
            unsigned short l_720 = 0UL;
            int ** const l_733 = &l_659[1];
            int ** const *l_732[5];
            int ***l_738 = &g_736;
            struct S0 l_741 = {566,9862,-9,-1,-10,-900,-18,586,0x126E3928L,0};
            short l_742 = 1L;
            int i;
            for (i = 0; i < 5; i++)
                l_732[i] = &l_733;
            for (l_698 = 1; (l_698 <= 4); l_698 += 1)
            {
                int l_740 = 1L;
                struct S0 l_756 = {-721,12421,-4,-1,8,-14231,22,2778,0x9FD5EFACL,33};
                int i;
                if (g_209[(l_698 + 5)])
                    break;
                for (g_74 = 1; (g_74 <= 4); g_74 += 1)
                {
                    int i;
                    l_719 = (l_659[l_698] = l_659[l_698]);

                    ;
                    for (g_650.f8 = 3; (g_650.f8 >= 0); g_650.f8 -= 1)
                    {
                        int **l_723 = &g_86;
                        int i, j, k;
                        l_720--;
                        (*g_425) = ((*l_723) = l_659[g_650.f8]);

                        ;
                        ;
                        return l_668[g_650.f8][g_650.f8][(g_74 + 2)];
                    }
                }
                for (l_720 = 0; (l_720 <= 3); l_720 += 1)
                {
                    unsigned char l_728 = 0xD7L;
                    struct S0 l_749[10] = {{26,418,9,0,-10,-1040,-30,624,0x122B4657L,-5},{26,418,9,0,-10,-1040,-30,624,0x122B4657L,-5},{-512,963,33,-1,-10,12342,-27,-2142,0x735D88EDL,-37},{26,418,9,0,-10,-1040,-30,624,0x122B4657L,-5},{26,418,9,0,-10,-1040,-30,624,0x122B4657L,-5},{-512,963,33,-1,-10,12342,-27,-2142,0x735D88EDL,-37},{26,418,9,0,-10,-1040,-30,624,0x122B4657L,-5},{26,418,9,0,-10,-1040,-30,624,0x122B4657L,-5},{-512,963,33,-1,-10,12342,-27,-2142,0x735D88EDL,-37},{26,418,9,0,-10,-1040,-30,624,0x122B4657L,-5}};
                    unsigned char *l_752 = (void*)0;
                    unsigned char *l_753[4][8][4] = {{{&g_90,&g_209[8],&l_698,&l_698},{&g_90,&l_698,&g_90,&l_698},{&g_90,&g_209[2],(void*)0,(void*)0},{&g_90,&g_90,&g_90,&g_90},{&g_90,(void*)0,&l_698,(void*)0},{&g_90,(void*)0,(void*)0,&g_439},{&l_728,&g_90,&g_439,&l_698},{&l_728,&l_728,&l_728,&l_728}},{{&l_728,&l_728,&g_209[8],&l_728},{&l_698,&g_439,&g_209[2],&g_90},{&g_90,&g_439,&l_728,&g_90},{&g_209[8],&g_439,&g_90,&l_728},{(void*)0,&l_728,&g_90,&l_728},{&g_90,&l_728,(void*)0,&l_698},{(void*)0,&g_90,&l_728,&g_439},{&g_90,(void*)0,&g_90,(void*)0}},{{(void*)0,(void*)0,(void*)0,&g_90},{&l_698,&g_90,&l_698,(void*)0},{&g_209[8],&g_209[2],&l_698,(void*)0},{(void*)0,&g_90,&g_90,&g_90},{&l_728,(void*)0,&g_439,&g_439},{&g_439,&g_439,&g_209[8],&g_90},{&l_698,&l_698,(void*)0,(void*)0},{&l_728,&l_728,(void*)0,(void*)0}},{{&g_90,&l_728,&l_698,&g_209[8]},{(void*)0,&g_90,&g_209[8],&l_698},{(void*)0,&g_90,(void*)0,&g_209[8]},{&g_90,&l_728,&l_698,(void*)0},{&g_90,&l_728,(void*)0,(void*)0},{&g_209[8],&l_698,&g_90,&g_90},{(void*)0,&g_439,&l_728,&g_439},{&l_698,(void*)0,&g_90,&g_90}}};
                    int i, j, k;
                    for (g_115 = 0; (g_115 <= 3); g_115 += 1)
                    {
                        int ****l_737[4][10] = {{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735}};
                        int *l_739 = &g_151;
                        int i, j, k;
                        (**g_424) = &l_668[l_720][l_698][l_720];

                        ;
                        g_447.f9 = (p_25.f7 , (p_24.f8 ^ (safe_mod_func_int32_t_s_s(((**l_733) ^= ((func_37(((safe_rshift_func_uint8_t_u_s(l_728, func_63(&l_720, l_729, (l_740 = ((*l_739) &= (safe_add_func_int16_t_s_s(g_209[(l_698 + 5)], ((((((((l_734 = l_732[3]) != (l_738 = g_735)) , (1UL <= g_447.f7)) == 0UL) , (void*)0) == (void*)0) ^ 0x36C1D8C6L) >= g_152)))))))) <= g_209[(l_698 + 5)]), p_25.f9) , g_237[6][4]) > g_454.f2)), p_25.f4))));

                        ;
                        ;
                    }

                    ;
                    g_29 = func_56(l_668[l_720][l_698][(l_698 + 2)], ((0UL != (l_741 , l_742)) & (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_728, (((l_749[6] , (g_209[(l_698 + 5)] | (++(*g_432)))) < (g_439 = (**l_733))) || ((*l_697)--)))), 4)), (((~func_32(l_668[l_720][l_698][(l_698 + 2)], g_604, g_74, (**g_425))) , p_27) < p_24.f2)))), g_475, l_756);

                    ;
                    p_24.f5 = (+((**l_733) = (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(l_761, 4)), (l_740 = 0x87F30E0AL)))));
                    for (g_74 = 0; (g_74 > 3); ++g_74)
                    {
                        unsigned short l_764[9] = {7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL};
                        int i;
                        ++l_764[2];
                        if (p_25.f9)
                            continue;
                    }
                }
            }


            ;
        }

        ;
        p_24 = func_56(g_454.f9, p_24.f9, p_27, func_56((&l_664 != &g_115), func_32(p_24.f8, g_447.f7, p_25.f9, (*g_426)), p_25.f1, p_24));

        ;
        for (g_130.f8 = 0; (g_130.f8 <= 3); ++g_130.f8)
        {
            if ((***g_424))
                break;
        }
    }


    return p_24.f5;
}







static const unsigned char func_32(unsigned p_33, const unsigned char p_34, int p_35, int p_36)
{
    const int *l_656[5];
    int i;
    for (i = 0; i < 5; i++)
        l_656[i] = &g_77;
    (*g_425) = l_656[3];

    ;
    return g_414;
}







static const char func_37(short p_38, int p_39)
{
    const int *l_654 = &g_83;
    l_654 = (**g_424);


    return p_39;
}







static short func_41(unsigned short p_42, struct S0 p_43)
{
    int l_457 = 0xD6AC9870L;
    struct S0 l_458 = {-502,2907,0,1,18,6935,-17,-2299,0x40CF9CB1L,94};
    int l_459[6][4][4] = {{{0xE6488AB8L,(-6L),1L,0xA7A63DD0L},{0x139EDFA6L,0x64A40914L,0x64A40914L,0x139EDFA6L},{0xA7A63DD0L,1L,(-6L),0xE6488AB8L},{0xE669B91EL,1L,(-1L),0x64A40914L}},{{(-6L),0x351DA55FL,(-10L),0x64A40914L},{0x11FF991BL,1L,0x463A6208L,0xE6488AB8L},{(-1L),1L,0L,0x139EDFA6L},{0xCA5CD651L,0x64A40914L,0xCA5CD651L,0xA7A63DD0L}},{{0x815BC292L,(-6L),0xFF190953L,0xE669B91EL},{1L,(-1L),0xE669B91EL,(-6L)},{0x463A6208L,(-10L),0xE669B91EL,0x11FF991BL},{1L,0x463A6208L,0xFF190953L,(-1L)}},{{0x815BC292L,0L,0xCA5CD651L,0xCA5CD651L},{0xCA5CD651L,0xCA5CD651L,0L,0x815BC292L},{(-1L),0xFF190953L,0x463A6208L,1L},{0x11FF991BL,0xE669B91EL,(-10L),0x463A6208L}},{{(-6L),0xE669B91EL,(-1L),1L},{0xE669B91EL,0xFF190953L,(-6L),0x815BC292L},{0xA7A63DD0L,0xCA5CD651L,0x64A40914L,0xCA5CD651L},{0x139EDFA6L,0L,1L,(-1L)}},{{0xE6488AB8L,0x463A6208L,1L,0x11FF991BL},{0x64A40914L,(-10L),0x351DA55FL,(-6L)},{0x64A40914L,0L,(-1L),0xA3CB6E05L},{1L,0x64A40914L,(-1L),8L}}};
    unsigned short *l_460[7];
    char *l_461 = &g_291;
    struct S0 *l_462 = (void*)0;
    struct S0 *l_463 = &g_130;
    unsigned l_516 = 0x0D4638A2L;
    short l_565 = 0x0A31L;
    unsigned *l_617 = &g_88[1][0];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_460[i] = &g_237[7][4];
    (*l_463) = func_56(g_414, (p_43.f7 && ((*l_461) = ((!(safe_rshift_func_uint8_t_u_s(p_43.f0, 4))) != func_67((p_43.f0 , &g_294), g_119[0][0], p_43.f7, l_460[4], l_458.f8)))), l_458.f5, l_458);
    for (g_439 = 0; (g_439 <= 6); g_439 += 1)
    {
        unsigned short l_465 = 0UL;
        short l_469[9][6][4] = {{{(-1L),(-1L),5L,0x1B1EL},{(-1L),0x322FL,0L,(-1L)},{(-3L),(-1L),(-9L),(-1L)},{0L,(-7L),(-1L),0x322FL},{1L,0x9D42L,1L,0L},{0xD30FL,(-3L),0xD2B1L,0L}},{{0L,6L,(-3L),0x17BEL},{0xD2B1L,9L,0L,1L},{(-2L),0xF8D2L,7L,(-1L)},{(-8L),9L,(-7L),4L},{(-7L),0x8101L,(-2L),(-8L)},{(-5L),0xEA4BL,0L,2L}},{{0xBC46L,0L,0x0F12L,0L},{(-8L),0xBC46L,(-1L),0xBC46L},{0xB507L,0L,(-1L),0x17C8L},{(-3L),(-1L),0xEA4BL,0xCFE5L},{(-9L),0L,(-1L),1L},{(-9L),0x388AL,0xEA4BL,6L}},{{(-3L),1L,(-1L),(-7L)},{0xB507L,(-8L),(-1L),0xD2B1L},{(-8L),(-3L),0x0F12L,0L},{0xBC46L,0L,0L,(-1L)},{0x17C8L,9L,5L,0xEA4BL},{0L,0x17BEL,0xEA4BL,(-8L)}},{{5L,0x3B6DL,0x0F12L,0xE370L},{5L,0L,(-3L),0L},{(-7L),0xD2B1L,0x09C0L,(-1L)},{9L,0x388AL,(-7L),5L},{(-8L),0xE370L,0xD30FL,6L},{0x322FL,(-3L),0xD2B1L,0xB507L}},{{(-9L),0L,0L,(-9L)},{9L,(-1L),(-8L),0L},{4L,(-7L),0L,0L},{0xD2B1L,0x322FL,(-3L),0L},{(-3L),(-7L),0xF8D2L,0L},{0x1B1EL,(-1L),6L,(-9L)}},{{0L,0L,0x363EL,0xB507L},{0xEA4BL,(-3L),0xDB98L,6L},{(-8L),0xE370L,0xCEA8L,5L},{(-8L),0x388AL,0L,(-1L)},{2L,0xD2B1L,9L,0L},{0xBAB4L,0L,0x388AL,0xE370L}},{{0xE370L,0x3B6DL,0L,(-8L)},{(-7L),0x17BEL,0x87EDL,0xEA4BL},{0L,9L,2L,0x9D42L},{0xDB98L,(-7L),1L,0xBAB4L},{0L,(-1L),(-7L),(-9L)},{(-1L),0L,(-1L),9L}},{{(-9L),0xD2B1L,0L,4L},{9L,0x7FDAL,(-5L),0xD2B1L},{0xDB98L,0xBC46L,(-5L),(-3L)},{9L,0x3B6DL,0L,0x1B1EL},{(-9L),1L,(-1L),0L},{(-1L),0L,(-7L),0xEA4BL}}};
        int *l_476 = &g_77;
        int l_501 = 0xDAA080D9L;
        unsigned char l_504 = 0UL;
        const int *l_520 = &l_459[4][1][0];
        struct S0 l_599[1][3] = {{{-658,5246,71,-1,-13,-8341,-22,-2415,1L,-78},{-658,5246,71,-1,-13,-8341,-22,-2415,1L,-78},{-658,5246,71,-1,-13,-8341,-22,-2415,1L,-78}}};
        unsigned char l_612 = 3UL;
        int l_629 = 0L;
        int i, j, k;
        (*g_425) = (**g_424);
        (*l_463) = g_130;
        for (g_83 = 0; (g_83 <= 6); g_83 += 1)
        {
            unsigned *l_464 = (void*)0;
            short *l_466 = &g_115;
            int *l_474 = &l_459[4][1][0];
            short l_481 = 0xE293L;
            unsigned char l_489[9];
            int l_500 = 0xF252E4C1L;
            int l_502 = 0xA801A292L;
            short l_563 = 0xB0C7L;
            int l_602 = 1L;
            int i, j;
            for (i = 0; i < 9; i++)
                l_489[i] = 0x26L;
        }
        return g_29.f4;
    }
    for (g_130.f8 = 22; (g_130.f8 <= 6); --g_130.f8)
    {
        return g_29.f6;
    }
    return p_43.f4;
}







static unsigned short func_44(unsigned short p_45, struct S0 p_46, unsigned short p_47, const unsigned short p_48)
{
    unsigned short l_114 = 0x7B1AL;
    int l_124 = 0xFA26FBF5L;
    unsigned l_156[5][2];
    int **l_173 = &g_86;
    unsigned char l_226 = 0xE2L;
    int l_235 = 0xE7F53028L;
    struct S0 *l_241 = (void*)0;
    unsigned short * const l_246 = (void*)0;
    unsigned short l_258 = 65529UL;
    int l_292 = 0xAC29C0D1L;
    int l_293 = 0x7E884DB1L;
    int l_325 = 0x71E8F414L;
    unsigned l_349 = 9UL;
    int l_366 = 5L;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_156[i][j] = 0UL;
    }
    for (p_47 = 0; (p_47 <= 5); p_47 += 1)
    {
        int l_113 = 2L;
        unsigned l_145 = 0xF1A4D47DL;
        int l_146 = (-1L);
        char l_149 = 0x3FL;
        int l_150[4][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),0xB72AD158L,(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
        int l_155 = 0x70242F93L;
        int i, j;
        for (g_55 = 0; (g_55 <= 5); g_55 += 1)
        {
            short l_116 = 0xE49CL;
            int *l_117 = &g_77;
            int i, j;
            (*l_117) ^= (safe_add_func_uint32_t_u_u(((+(safe_div_func_int8_t_s_s(func_63((g_88[g_55][p_47] , &g_55), (g_29.f9 , &p_45), (g_115 = (safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((((g_88[g_55][p_47] ^ ((g_90 < ((safe_add_func_int32_t_s_s(((p_46.f9 >= l_113) , l_114), g_88[g_55][p_47])) , 0x4CL)) == l_114)) , 0x7136L) ^ p_46.f9) ^ p_46.f9) , p_46.f5), 0x32L)), p_47)))), p_47))) , l_116), g_7));
        }
        for (g_83 = 4; (g_83 >= 0); g_83 -= 1)
        {
            int *l_118[9] = {&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77};
            unsigned short l_131 = 0x1998L;
            int i;
            g_119[0][0] = p_45;
            for (p_45 = 1; (p_45 <= 5); p_45 += 1)
            {
                unsigned short l_132 = 65526UL;
                int ** const l_139[9][6] = {{&l_118[1],&l_118[3],(void*)0,&l_118[4],&l_118[3],&l_118[4]},{&l_118[4],&l_118[4],&l_118[4],&l_118[4],&l_118[4],&g_86},{&l_118[1],&l_118[2],&l_118[4],&g_86,&g_86,&l_118[5]},{&l_118[1],&l_118[5],&l_118[4],&l_118[4],&l_118[5],&l_118[1]},{&l_118[4],&l_118[4],&l_118[4],&l_118[4],&l_118[4],(void*)0},{&l_118[1],&g_86,&l_118[4],&g_86,&l_118[2],&l_118[1]},{&l_118[4],&g_86,&l_118[5],&l_118[4],&g_86,&g_86},{&g_86,&l_118[5],&l_118[4],&l_118[4],(void*)0,&l_118[4]},{&l_118[4],&l_118[4],&l_118[4],&l_118[5],&l_118[4],&l_118[4]}};
                int i, j;
            }
            p_46.f6 = (l_146 ^= (l_145 = l_124));
            if ((g_29.f1 | g_130.f6))
            {
                int l_147 = 0x5A891E9DL;
                int l_148[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_148[i] = 0x9452628CL;
                ++g_152;
                return l_148[6];
            }
            else
            {
                for (g_130.f8 = 5; (g_130.f8 >= 0); g_130.f8 -= 1)
                {
                    return l_155;
                }
            }
        }
    }
    if (l_156[2][0])
    {
        int * const l_182 = &g_77;
        int l_234 = 1L;
        unsigned short *l_244 = &g_237[4][2];
        unsigned char l_245 = 0xF7L;
        for (l_124 = (-16); (l_124 == 11); l_124 = safe_add_func_int8_t_s_s(l_124, 1))
        {
            unsigned short *l_171 = &g_119[0][0];
            struct S0 *l_172 = &g_29;
            int **l_174 = &g_86;
            int l_183 = 1L;
            short l_233 = 0L;
            int l_236 = 1L;
        }
    }
    else
    {
        unsigned char *l_251[8][1][2] = {{{&l_226,&l_226}},{{&l_226,&l_226}},{{&l_226,&l_226}},{{&l_226,&l_226}},{{&l_226,&l_226}},{{&l_226,&l_226}},{{&l_226,&l_226}},{{&l_226,&l_226}}};
        const char *l_269 = &g_126;
        const char **l_268 = &l_269;
        int *l_270[6][3] = {{&g_77,(void*)0,&g_77},{&l_124,&g_83,&g_83},{(void*)0,(void*)0,(void*)0},{&l_124,&l_124,&g_83},{&g_77,(void*)0,&g_77},{&l_124,&g_83,&g_83}};
        unsigned l_285 = 0xBDB669D9L;
        int l_288 = 0xEA3C8304L;
        unsigned short **l_314 = &g_224;
        unsigned short *l_324 = (void*)0;
        char l_413[3][6][8] = {{{0L,0x20L,0xA7L,7L,0L,0x2CL,0x62L,1L},{4L,0L,0x20L,0x1EL,0L,0xB1L,0x62L,0x56L},{0x23L,0x1EL,0xA7L,0x2CL,0L,0x23L,(-1L),(-1L)},{0L,0x23L,(-1L),(-1L),0x23L,0L,0x2CL,0xA7L},{(-1L),0xF5L,0x56L,0x62L,0xB1L,0L,0x1EL,0x20L},{0x0CL,(-1L),0x9DL,0xB8L,4L,0x20L,0x0CL,(-1L)}},{{0L,4L,(-4L),(-7L),0x31L,0x0CL,0x31L,(-7L)},{0x62L,(-1L),0x62L,4L,0x23L,0xF5L,0L,(-1L)},{0x20L,9L,0xB1L,0x56L,0xB4L,(-7L),0x23L,0x9DL},{0x20L,0L,0xA7L,0x0CL,0x23L,7L,0x9DL,(-4L)},{0x62L,0x20L,0x23L,0x31L,0x31L,0x23L,0x20L,0x62L},{0L,0xB8L,0x2CL,0L,4L,1L,(-4L),0xB1L}},{{9L,(-1L),0x20L,0x23L,0L,1L,5L,0xA7L},{(-4L),0xB8L,0xB4L,0x9DL,0L,0x23L,0x2CL,0x23L},{0xA7L,0x20L,0L,0x20L,0xA7L,7L,0L,0x2CL},{5L,0L,0x0CL,(-4L),0x1EL,(-7L),(-1L),0x20L},{0x31L,9L,0x0CL,5L,0x20L,0xF5L,0L,0xB4L},{0x1EL,(-1L),0x62L,(-4L),0x20L,0x20L,(-4L),0x62L}}};
        int l_427 = 1L;
        struct S0 **l_442 = (void*)0;
        unsigned short ***l_448 = (void*)0;
        int i, j, k;
        (*l_173) = ((**l_173) , &g_83);
        if ((safe_sub_func_uint8_t_u_u(((((-1L) == (g_209[9] = ((*g_189) && p_46.f2))) != ((safe_sub_func_uint8_t_u_u((0xFCBA1A65L != func_63(&l_114, &l_114, (**l_173))), (g_90 |= ((p_45 <= g_77) > 0x18F7L)))) <= g_29.f4)) >= 0x2DADL), 0UL)))
        {
            unsigned char l_261 = 0xD2L;
            const char **l_266 = (void*)0;
            unsigned short * const l_276 = &g_55;
            int l_284 = 0xCD0BB927L;
            int l_286 = 0x320127E5L;
            for (p_47 = 14; (p_47 == 36); p_47 = safe_add_func_int32_t_s_s(p_47, 7))
            {
                (*g_86) = ((safe_mod_func_uint8_t_u_u((l_258++), l_261)) & ((void*)0 != &g_77));
            }
            for (l_258 = (-23); (l_258 == 31); l_258++)
            {
                int *l_271 = (void*)0;
                int l_289[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_289[i][j] = 0xCC1E68B1L;
                }
                if ((*g_86))
                {
                    unsigned char l_273 = 1UL;
                    int l_287[9][10][1] = {{{0x7E480CF2L},{(-10L)},{0xE66BCB5DL},{0L},{(-10L)},{1L},{0x866832C6L},{1L},{(-10L)},{0L}},{{0xE66BCB5DL},{(-10L)},{0x7E480CF2L},{(-8L)},{0x7E480CF2L},{(-10L)},{0xE66BCB5DL},{0L},{(-10L)},{1L}},{{0x866832C6L},{1L},{(-10L)},{0L},{0xE66BCB5DL},{(-10L)},{0x7E480CF2L},{(-8L)},{0x7E480CF2L},{(-10L)}},{{0xE66BCB5DL},{0L},{(-10L)},{1L},{0x866832C6L},{1L},{(-10L)},{0L},{0xE66BCB5DL},{(-10L)}},{{0x7E480CF2L},{(-8L)},{0x7E480CF2L},{(-10L)},{0xE66BCB5DL},{0L},{(-10L)},{1L},{0x866832C6L},{1L}},{{(-10L)},{0L},{0xE66BCB5DL},{(-10L)},{0x7E480CF2L},{(-8L)},{0x7E480CF2L},{(-10L)},{0xE66BCB5DL},{0L}},{{(-10L)},{1L},{0x866832C6L},{1L},{(-10L)},{0L},{0xE66BCB5DL},{(-10L)},{0x7E480CF2L},{(-8L)}},{{0x7E480CF2L},{(-10L)},{0xE66BCB5DL},{0L},{(-10L)},{1L},{0x866832C6L},{1L},{(-10L)},{0L}},{{0xE66BCB5DL},{(-10L)},{0x7E480CF2L},{(-8L)},{0x7E480CF2L},{(-10L)},{0xE66BCB5DL},{0L},{(-10L)},{(-8L)}}};
                    int i, j, k;
                    for (g_77 = 0; (g_77 != 8); ++g_77)
                    {
                        const char ***l_267[3][1][5];
                        int l_272 = 0xA59E4277L;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 5; k++)
                                    l_267[i][j][k] = &l_266;
                            }
                        }
                        l_268 = l_266;

                        ;
                        l_271 = l_270[2][0];

                        ;
                        return l_272;
                    }
                    l_273 &= p_46.f9;
                    for (g_151 = (-12); (g_151 != 24); g_151 = safe_add_func_int16_t_s_s(g_151, 5))
                    {
                        char *l_283 = &g_126;
                        int l_290 = 0x5ECB414FL;
                        g_130.f7 = ((0xA9F9L <= func_63(l_276, &l_258, (safe_add_func_int8_t_s_s((g_221 , (l_284 = ((*l_283) = ((g_130.f2 & p_46.f3) , (safe_mod_func_uint32_t_u_u(((*g_86) ^ ((~l_261) != (((((safe_rshift_func_int8_t_s_s(((p_46.f2 != p_46.f7) == 0xCAB5L), g_55)) , 0L) >= p_46.f5) <= 0xA9C7EA6EL) <= (*g_189)))), g_130.f0)))))), l_285)))) >= p_46.f5);

                        ;
                        --g_294;
                        if (p_46.f5)
                            continue;
                    }
                }
                else
                {
                    for (l_114 = 0; (l_114 != 27); ++l_114)
                    {
                        return (**l_173);
                    }
                }
                g_86 = &g_77;

                ;
                (*g_86) = p_46.f8;
                if (l_284)
                    continue;
            }

            ;
        }
        else
        {
            int *l_301[9][7][1] = {{{&l_292},{(void*)0},{&l_293},{&l_293},{&l_235},{&g_77},{&l_235}},{{&l_293},{&l_293},{(void*)0},{&l_292},{&g_83},{&l_124},{(void*)0}},{{&g_77},{&l_235},{(void*)0},{&l_235},{&g_77},{(void*)0},{&l_124}},{{&g_83},{&l_292},{(void*)0},{&l_293},{&l_293},{&l_235},{&g_77}},{{&l_235},{&l_293},{&l_293},{(void*)0},{&l_292},{&g_83},{&l_124}},{{(void*)0},{&g_77},{&l_235},{(void*)0},{&l_235},{&g_77},{(void*)0}},{{&l_124},{&g_83},{&l_292},{(void*)0},{&l_293},{&l_293},{&l_235}},{{&g_77},{&l_235},{&l_293},{&l_293},{(void*)0},{&l_292},{&g_83}},{{&l_124},{(void*)0},{&g_77},{&l_235},{(void*)0},{&l_235},{&g_77}}};
            unsigned short ***l_315 = (void*)0;
            unsigned short **l_317 = &g_225[2];
            unsigned short ***l_316 = &l_317;
            unsigned short ***l_318 = (void*)0;
            unsigned short **l_320 = &g_225[7];
            unsigned short ***l_319 = &l_320;
            unsigned short l_323 = 1UL;
            int l_326[6] = {0x3F3E8B01L,0x3F3E8B01L,(-1L),0x3F3E8B01L,0x3F3E8B01L,(-1L)};
            int l_339 = 0x06E186EDL;
            unsigned l_372 = 0UL;
            unsigned l_388 = 4294967295UL;
            short l_393 = 5L;
            unsigned short * const l_416 = &g_119[0][0];
            unsigned l_428 = 0x0C79545CL;
            struct S0 l_446 = {215,1018,-110,1,1,15999,4,295,-1L,-63};
            unsigned short l_449 = 0x45A7L;
            int i, j, k;
            for (g_126 = 0; (g_126 < 8); g_126++)
            {
                l_270[0][1] = l_301[7][1][0];
            }


            g_130.f0 |= (safe_add_func_int32_t_s_s(p_46.f1, ((safe_add_func_uint8_t_u_u((g_209[7] = (safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_46.f8, ((l_314 != ((*l_319) = ((*l_316) = (void*)0))) , (g_294 > func_67(&g_294, func_67(&g_74, (((-8L) && ((safe_rshift_func_uint16_t_u_u(((0x7BL ^ l_323) >= 65535UL), (*g_224))) != p_46.f7)) , p_46.f8), p_45, (*l_314), g_130.f6), p_46.f4, l_324, g_88[1][0]))))), l_325)), l_326[1])) || p_46.f3), 0xA02E60B7L))), p_46.f6)) > p_46.f6)));

            ;
            ;
            ;
            for (l_258 = (-28); (l_258 <= 38); ++l_258)
            {
                unsigned short l_338 = 1UL;
                int l_367 = 0x660FD851L;
                unsigned *l_379 = &l_285;
                int **l_397 = (void*)0;
                int l_430 = 1L;
                char *l_431 = &g_291;
                for (g_221 = (-16); (g_221 == (-24)); g_221 = safe_sub_func_uint32_t_u_u(g_221, 8))
                {
                    unsigned short * const l_336 = &g_74;
                    unsigned short *l_337 = &l_114;
                    unsigned short l_342[7];
                    unsigned *l_347 = &l_156[4][1];
                    unsigned *l_348 = &g_88[3][1];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_342[i] = 0x6865L;
                    for (l_124 = 2; (l_124 >= 0); l_124 -= 1)
                    {
                        unsigned short *l_335[9][2] = {{&g_294,&g_294},{&g_294,&g_294},{&g_294,&g_294},{&g_294,&g_294},{&g_294,&g_294},{&g_294,&g_294},{&g_294,&g_294},{&g_294,&g_294},{&g_294,&g_294}};
                        short *l_340 = &g_115;
                        int l_341[7] = {0L,0L,0L,0L,0L,0L,0L};
                        int i, j;
                        g_130.f0 = (((safe_lshift_func_int8_t_s_u(g_88[(l_124 + 3)][l_124], (&g_291 != (*l_268)))) != (((g_88[(l_124 + 1)][l_124] >= p_46.f5) || ((*l_340) = (safe_mod_func_uint8_t_u_u(((l_339 = (p_46.f0 ^ (!(func_67(l_335[6][1], p_46.f0, func_63((p_46 , l_336), (*l_314), g_291), l_337, l_338) && g_130.f6)))) | g_218), 1L)))) || p_46.f5)) == 2UL);
                        l_342[3]--;
                    }
                    p_46 = func_56((((safe_lshift_func_uint16_t_u_s(0x2539L, (!g_83))) , (func_67(&p_45, ((*l_348) = ((*l_347) &= (func_63(&p_47, (p_46.f8 , &g_50), g_74) < 0xF1L))), g_130.f1, &l_342[3], p_46.f2) || 0xC7AD4AB2L)) == p_46.f0), p_46.f3, l_349, p_46);
                    l_367 &= ((((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((safe_add_func_int16_t_s_s(g_88[5][0], ((*g_224) ^= p_46.f0))) && ((safe_rshift_func_uint16_t_u_s(1UL, g_130.f0)) , (safe_sub_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u(p_46.f0, (((safe_mul_func_int16_t_s_s(g_209[8], ((l_342[6] ^ g_29.f2) > ((safe_add_func_int8_t_s_s((l_366 == p_46.f5), 0L)) , 0x13D9L)))) | 0x6FL) || g_29.f8))) , g_29.f6) >= p_46.f3), 0x78D93BE3L)))) == p_46.f2), l_342[3])), l_338)) , 0x5C9201CDL) , g_55) >= p_48);
                }
                if ((safe_sub_func_uint16_t_u_u((+p_46.f4), ((g_209[8] |= (safe_div_func_uint8_t_u_u(((0UL != l_372) , ((-9L) == ((g_152 = ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_74, 1)), (safe_sub_func_uint16_t_u_u(p_46.f0, (!(*g_189)))))) , (g_29 , ((*l_379)++)))) , (safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((g_130.f4 == p_46.f7) != l_338) < p_46.f9), l_388)), p_46.f1)), (-1L)))))), g_90))) < g_83))))
                {
                    unsigned short l_389 = 65535UL;
                    l_389 |= (g_83 |= (g_130.f7 = (-9L)));
                    g_130.f2 ^= (p_46.f7 |= (safe_lshift_func_uint16_t_u_u((0x52L != g_7), 6)));
                }
                else
                {
                    short l_392[6][1][5] = {{{3L,6L,3L,6L,3L}},{{0x4C62L,0x0844L,0x0844L,0x4C62L,0x4C62L}},{{0x567DL,6L,0x567DL,6L,0x567DL}},{{0x4C62L,0x4C62L,0x0844L,0x0844L,0x4C62L}},{{3L,6L,3L,6L,3L}},{{0x4C62L,0x0844L,0x0844L,0x4C62L,0x4C62L}}};
                    unsigned l_415 = 0UL;
                    unsigned short *l_421[10][3] = {{&g_119[0][0],&g_237[6][4],&g_119[0][0]},{&l_114,&g_237[6][1],&g_237[6][1]},{&g_119[0][0],&g_237[6][4],&g_119[0][0]},{&l_114,&g_237[6][1],&g_237[6][1]},{&g_119[0][0],&g_237[6][4],&g_119[0][0]},{&l_114,&g_237[6][1],&g_237[6][1]},{&g_119[0][0],&g_237[6][4],&g_119[0][0]},{&l_114,&g_237[6][1],&g_237[6][1]},{&g_119[0][0],&g_237[6][4],&g_119[0][0]},{&l_114,&g_237[6][1],&g_237[6][1]}};
                    int l_429 = 0x74C6900EL;
                    int i, j, k;
                    p_46.f5 ^= l_392[2][0][3];
                    if (l_393)
                    {
                        char l_394 = 1L;
                        p_46.f4 |= g_55;
                        if (l_394)
                            continue;
                    }
                    else
                    {
                        return l_392[2][0][3];
                    }
                    for (l_293 = 19; (l_293 > (-7)); l_293--)
                    {
                        int ***l_398 = &l_173;
                        (*l_398) = l_397;

                        ;
                    }

                    ;
                    if ((l_392[0][0][4] | (g_151 > ((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((func_63(&p_47, (*l_314), p_46.f2) , (((*g_86) || (g_29.f9 <= ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(l_413[2][5][4], g_50)), 1L)), g_115)), p_46.f6)), 0)) , g_88[5][2]))) <= l_392[1][0][1])) != g_115), g_414)), g_151)) == l_415))))
                    {
                        return p_46.f6;
                    }
                    else
                    {
                        unsigned short *l_417 = &g_50;
                        unsigned *l_418[9][8][3] = {{{&g_7,&l_156[3][1],&l_372},{&l_372,&l_388,&l_388},{&l_415,&g_7,&l_372},{&l_156[1][0],&l_415,&l_415},{&g_7,&l_156[0][0],&l_415},{&l_349,&l_349,&l_372},{&l_156[2][0],&l_372,(void*)0},{&l_372,&l_372,&g_88[0][2]}},{{(void*)0,&l_372,&l_372},{&g_7,&l_349,&g_7},{&l_372,&l_156[0][0],&g_7},{&l_372,&l_415,&g_88[1][0]},{&l_372,&l_415,&l_372},{&l_349,(void*)0,&l_415},{&l_372,&l_415,&l_156[2][0]},{(void*)0,(void*)0,&l_372}},{{&g_7,&l_156[0][0],&l_156[2][0]},{&l_349,&l_372,(void*)0},{&l_372,&l_156[3][1],&g_7},{&l_156[1][0],&l_349,(void*)0},{(void*)0,&l_156[2][0],&l_156[2][0]},{&l_388,&l_349,&l_372},{&l_372,(void*)0,&l_156[2][0]},{&l_372,&g_88[0][2],&l_415}},{{&l_156[2][0],&l_372,&l_372},{&l_372,&g_88[0][2],&g_7},{&l_415,(void*)0,&l_415},{&g_88[0][2],&l_349,&l_349},{&l_156[0][0],&l_156[2][0],&l_372},{&g_7,&l_349,&g_88[1][0]},{&g_7,&l_156[3][1],&l_372},{&g_7,&l_372,&l_156[1][0]}},{{&l_156[0][0],&l_156[0][0],(void*)0},{&g_88[0][2],(void*)0,&l_388},{&l_415,&l_415,&l_156[0][0]},{&l_372,(void*)0,&g_7},{&l_156[2][0],&l_415,&l_156[0][0]},{&l_372,&l_388,&l_388},{&l_372,&g_7,(void*)0},{&l_388,&l_372,&l_156[1][0]}},{{(void*)0,&g_7,&l_372},{&l_156[1][0],&l_372,&g_88[1][0]},{&l_372,&g_7,&l_372},{&l_349,&l_372,&g_7},{&l_372,&l_156[2][0],&l_372},{&l_372,&g_88[0][2],&g_7},{&g_7,&l_372,&l_156[2][0]},{&l_156[1][0],&l_372,&l_388}},{{&g_7,&l_372,&l_156[0][0]},{&l_372,&l_372,&l_388},{&l_372,&l_415,&g_7},{&g_7,&l_372,&l_372},{&l_156[3][1],(void*)0,&l_372},{(void*)0,&g_7,&l_372},{&g_7,&g_7,&g_7},{&l_372,&l_156[1][0],&l_388}},{{(void*)0,&g_88[1][0],&l_156[0][0]},{&l_349,&l_415,&l_388},{&l_156[0][0],&l_156[3][1],&l_156[2][0]},{(void*)0,&l_415,&g_7},{&l_372,&g_88[1][0],&l_372},{&l_415,&l_156[1][0],&g_7},{&l_415,&g_7,&g_7},{&g_7,&g_7,&l_388}},{{&l_156[2][0],(void*)0,&l_372},{&g_7,&l_372,(void*)0},{&l_415,&l_415,&g_88[1][0]},{&l_415,&l_372,&g_88[0][2]},{&l_372,&l_372,&l_415},{(void*)0,&l_372,&g_88[1][0]},{&l_156[0][0],&l_372,&l_415},{&l_349,&g_88[0][2],&g_88[0][2]}}};
                        int i, j, k;
                        l_430 = ((p_46.f2 > ((l_429 = (func_63(l_416, l_417, ((p_46.f1 = p_46.f1) == (safe_sub_func_uint32_t_u_u(((func_63(&p_45, l_421[2][2], ((safe_sub_func_uint8_t_u_u(((g_424 = g_424) == (void*)0), p_47)) ^ p_47)) == l_427) | g_119[7][4]), l_428)))) && l_415)) && 0xCCE898F2L)) <= l_367);
                        if (p_46.f1)
                            break;
                        return p_46.f5;
                    }
                }
                (**g_424) = (((*l_431) = (g_126 , 0x92L)) , (**g_424));
                if (func_63(g_432, (*l_314), p_46.f0))
                {
                    for (p_46.f8 = 15; (p_46.f8 == 18); ++p_46.f8)
                    {
                        return (**l_173);
                    }
                }
                else
                {
                    int l_435 = 0L;
                    int l_436 = 1L;
                    int l_437 = 0x1460715CL;
                    --g_439;
                    if (l_436)
                        continue;
                    (**l_173) &= (p_46.f0 && (l_442 != &l_241));
                    for (l_226 = 0; (l_226 != 54); l_226++)
                    {
                        int l_445 = 0xCA385497L;
                        (**l_173) ^= p_47;
                        g_447 = (g_130 = func_56(p_48, l_445, (func_63(&p_47, &l_338, (((*g_86) = ((p_46.f8 , l_379) == &g_152)) && ((*g_86) |= p_46.f4))) , p_45), l_446));
                        if ((***g_424))
                            break;
                        (*g_86) &= (&l_314 != l_448);
                    }
                }

                ;
            }

            ;
            ++l_449;
        }

        ;
        ;

        for (g_447.f8 = 0; (g_447.f8 > (-6)); g_447.f8 = safe_sub_func_int16_t_s_s(g_447.f8, 6))
        {
            (**g_424) = (void*)0;

            ;
            return p_47;
        }
        p_46 = g_454;
    }

    ;
    ;
    return (*g_432);
}







static struct S0 func_56(unsigned char p_57, short p_58, char p_59, struct S0 p_60)
{
    int *l_100 = &g_83;
    int **l_101 = (void*)0;
    int **l_102 = &l_100;
    for (g_90 = 0; (g_90 >= 39); g_90 = safe_add_func_uint16_t_u_u(g_90, 3))
    {
        struct S0 l_98 = {55,2627,67,-1,12,2410,-5,-2452,-4L,58};
        struct S0 *l_99 = &l_98;
        (*l_99) = l_98;
    }
    (*l_102) = l_100;
    return g_29;
}







static unsigned short func_63(unsigned short * const p_64, unsigned short * p_65, int p_66)
{
    int *l_91 = &g_83;
    int **l_92 = (void*)0;
    int **l_93 = (void*)0;
    int **l_94 = &g_86;
    (*l_94) = l_91;

    ;
    (**l_94) ^= (g_29 , 0x6C3C0C88L);
    return g_29.f3;
}







static unsigned char func_67(unsigned short * p_68, unsigned p_69, char p_70, unsigned short * p_71, char p_72)
{
    int *l_84[6][10] = {{&g_77,(void*)0,&g_83,&g_77,&g_83,(void*)0,&g_77,&g_77,&g_77,&g_77},{(void*)0,&g_77,&g_83,&g_83,&g_77,(void*)0,(void*)0,&g_77,(void*)0,(void*)0},{&g_83,&g_77,&g_77,&g_77,&g_83,&g_77,(void*)0,(void*)0,&g_77,&g_83},{&g_83,(void*)0,(void*)0,&g_83,&g_83,(void*)0,&g_83,(void*)0,&g_83,&g_83},{(void*)0,&g_83,(void*)0,&g_83,&g_83,(void*)0,(void*)0,&g_83,&g_83,(void*)0},{(void*)0,(void*)0,&g_77,&g_83,&g_77,&g_77,&g_77,&g_83,&g_77,(void*)0}};
    int **l_85 = (void*)0;
    char l_87 = 0x2AL;
    int i, j;
    for (p_69 = (-26); (p_69 <= 7); ++p_69)
    {
        int *l_81 = &g_77;
        int **l_80 = &l_81;
        int *l_82 = &g_83;
        (*l_80) = &g_77;
        (**l_80) = p_72;
        (**l_80) |= 0x49608984L;
        (*l_82) &= ((**l_80) = (p_69 > (0L != g_77)));
    }
    g_86 = l_84[3][1];
    l_87 |= g_77;
    return g_88[1][0];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
    transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
    transparent_crc(g_29.f2, "g_29.f2", print_hash_value);
    transparent_crc(g_29.f3, "g_29.f3", print_hash_value);
    transparent_crc(g_29.f4, "g_29.f4", print_hash_value);
    transparent_crc(g_29.f5, "g_29.f5", print_hash_value);
    transparent_crc(g_29.f6, "g_29.f6", print_hash_value);
    transparent_crc(g_29.f7, "g_29.f7", print_hash_value);
    transparent_crc(g_29.f8, "g_29.f8", print_hash_value);
    transparent_crc(g_29.f9, "g_29.f9", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_88[i][j], "g_88[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_119[i][j], "g_119[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_130.f0, "g_130.f0", print_hash_value);
    transparent_crc(g_130.f1, "g_130.f1", print_hash_value);
    transparent_crc(g_130.f2, "g_130.f2", print_hash_value);
    transparent_crc(g_130.f3, "g_130.f3", print_hash_value);
    transparent_crc(g_130.f4, "g_130.f4", print_hash_value);
    transparent_crc(g_130.f5, "g_130.f5", print_hash_value);
    transparent_crc(g_130.f6, "g_130.f6", print_hash_value);
    transparent_crc(g_130.f7, "g_130.f7", print_hash_value);
    transparent_crc(g_130.f8, "g_130.f8", print_hash_value);
    transparent_crc(g_130.f9, "g_130.f9", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_209[i], "g_209[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_237[i][j], "g_237[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_447.f0, "g_447.f0", print_hash_value);
    transparent_crc(g_447.f1, "g_447.f1", print_hash_value);
    transparent_crc(g_447.f2, "g_447.f2", print_hash_value);
    transparent_crc(g_447.f3, "g_447.f3", print_hash_value);
    transparent_crc(g_447.f4, "g_447.f4", print_hash_value);
    transparent_crc(g_447.f5, "g_447.f5", print_hash_value);
    transparent_crc(g_447.f6, "g_447.f6", print_hash_value);
    transparent_crc(g_447.f7, "g_447.f7", print_hash_value);
    transparent_crc(g_447.f8, "g_447.f8", print_hash_value);
    transparent_crc(g_447.f9, "g_447.f9", print_hash_value);
    transparent_crc(g_454.f0, "g_454.f0", print_hash_value);
    transparent_crc(g_454.f1, "g_454.f1", print_hash_value);
    transparent_crc(g_454.f2, "g_454.f2", print_hash_value);
    transparent_crc(g_454.f3, "g_454.f3", print_hash_value);
    transparent_crc(g_454.f4, "g_454.f4", print_hash_value);
    transparent_crc(g_454.f5, "g_454.f5", print_hash_value);
    transparent_crc(g_454.f6, "g_454.f6", print_hash_value);
    transparent_crc(g_454.f7, "g_454.f7", print_hash_value);
    transparent_crc(g_454.f8, "g_454.f8", print_hash_value);
    transparent_crc(g_454.f9, "g_454.f9", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_603[i][j][k], "g_603[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_604, "g_604", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_650.f0, "g_650.f0", print_hash_value);
    transparent_crc(g_650.f1, "g_650.f1", print_hash_value);
    transparent_crc(g_650.f2, "g_650.f2", print_hash_value);
    transparent_crc(g_650.f3, "g_650.f3", print_hash_value);
    transparent_crc(g_650.f4, "g_650.f4", print_hash_value);
    transparent_crc(g_650.f5, "g_650.f5", print_hash_value);
    transparent_crc(g_650.f6, "g_650.f6", print_hash_value);
    transparent_crc(g_650.f7, "g_650.f7", print_hash_value);
    transparent_crc(g_650.f8, "g_650.f8", print_hash_value);
    transparent_crc(g_650.f9, "g_650.f9", print_hash_value);
    transparent_crc(g_688, "g_688", print_hash_value);
    transparent_crc(g_787, "g_787", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    transparent_crc(g_824, "g_824", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_938[i], "g_938[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_978, "g_978", print_hash_value);
    transparent_crc(g_979, "g_979", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_989[i], "g_989[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1052, "g_1052", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
