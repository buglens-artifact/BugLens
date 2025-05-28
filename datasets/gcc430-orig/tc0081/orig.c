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
   unsigned char f1;
   char f2;
   char f3;
   unsigned short f4;
   unsigned f5;
   char f6;
   unsigned char f7;
};

struct S1 {
   short f0;
   unsigned short f1;
   unsigned char f2;
   char f3;
   unsigned f4;
   struct S0 f5;
};


static int g_2[9][4] = {{0xD9EE1C97L,1L,1L,0xD9EE1C97L},{1L,0xD9EE1C97L,0xED9BA07EL,(-7L)},{1L,0xED9BA07EL,1L,0x285FAAFEL},{0xD9EE1C97L,(-7L),0x285FAAFEL,0x285FAAFEL},{0xED9BA07EL,0xED9BA07EL,1L,(-7L)},{(-7L),0xD9EE1C97L,1L,0xD9EE1C97L},{0xED9BA07EL,1L,0x285FAAFEL,1L},{0xD9EE1C97L,1L,1L,0xD9EE1C97L},{1L,0xD9EE1C97L,0xED9BA07EL,(-7L)}};
static int g_52 = 0x858521EBL;
static int g_53 = 0x19AD364BL;
static int g_82 = (-2L);
static int *g_81 = &g_82;
static int g_89 = 0L;
static unsigned g_90 = 0x22502BEAL;
static unsigned g_95[1] = {1UL};
static short g_109 = 7L;
static short g_112 = 0x75EBL;
static unsigned g_114 = 5UL;
static char g_124 = 0xE4L;
static struct S1 g_140 = {-10L,0x566DL,255UL,-1L,1UL,{0x014FL,0x95L,3L,0x3CL,1UL,0x9BEEC060L,0x09L,2UL}};
static int g_146 = (-1L);
static unsigned short g_147[7][9][2] = {{{0UL,0UL},{4UL,0UL},{0UL,1UL},{65535UL,0xA565L},{4UL,0UL},{4UL,0x74FAL},{4UL,0UL},{0x3216L,4UL},{0UL,0x74FAL}},{{1UL,1UL},{0x3216L,1UL},{1UL,0x74FAL},{0UL,4UL},{0x3216L,0UL},{4UL,0x74FAL},{4UL,0UL},{0x3216L,4UL},{0UL,0x74FAL}},{{1UL,1UL},{0x3216L,1UL},{1UL,0x74FAL},{0UL,4UL},{0x3216L,0UL},{4UL,0x74FAL},{4UL,0UL},{0x3216L,4UL},{0UL,0x74FAL}},{{1UL,1UL},{0x3216L,1UL},{1UL,0x74FAL},{0UL,4UL},{0x3216L,0UL},{4UL,0x74FAL},{4UL,0UL},{0x3216L,4UL},{0UL,0x74FAL}},{{1UL,1UL},{0x3216L,1UL},{1UL,0x74FAL},{0UL,4UL},{0x3216L,0UL},{4UL,0x74FAL},{4UL,0UL},{0x3216L,4UL},{0UL,0x74FAL}},{{1UL,1UL},{0x3216L,1UL},{1UL,0x74FAL},{0UL,4UL},{0x3216L,0UL},{4UL,0x74FAL},{4UL,0UL},{0x0E93L,0UL},{1UL,0x3216L}},{{4UL,4UL},{0x0E93L,4UL},{4UL,0x3216L},{1UL,0UL},{0x0E93L,1UL},{0UL,0x3216L},{0UL,1UL},{0x0E93L,0UL},{1UL,0x3216L}}};
static struct S0 *g_150 = (void*)0;
static int g_158 = (-6L);
static int g_159 = (-4L);
static unsigned char g_160 = 9UL;
static unsigned g_192 = 1UL;
static unsigned char g_207 = 0x36L;
static int **g_228 = &g_81;
static int ***g_227 = &g_228;
static unsigned g_236 = 0UL;
static struct S1 *g_310 = &g_140;
static short g_393 = 0xD54FL;
static unsigned char g_394 = 0UL;
static unsigned char *g_457 = &g_160;
static int g_497 = 0x050F4D02L;
static unsigned g_498 = 0xC15E5BBDL;
static unsigned short g_510[9][2] = {{4UL,4UL},{0xC083L,4UL},{4UL,0xC083L},{4UL,4UL},{0xC083L,4UL},{4UL,0xC083L},{4UL,4UL},{0xC083L,4UL},{4UL,0xC083L}};
static unsigned short g_526 = 0UL;
static unsigned char ** const *g_565 = (void*)0;
static unsigned char **g_568[1] = {&g_457};
static unsigned char ***g_567 = &g_568[0];
static unsigned g_570 = 1UL;
static int g_640 = 0x13B05A4BL;
static int g_641 = 0x112E5F26L;
static unsigned char g_643 = 0xABL;
static char g_659 = 0x7FL;
static short g_661[5][4] = {{1L,6L,6L,1L},{6L,1L,6L,6L},{1L,1L,0x8272L,1L},{1L,6L,6L,1L},{6L,1L,6L,6L}};
static unsigned g_664 = 6UL;
static int g_734[8] = {0x3590E82CL,0x3590E82CL,0xAD66D335L,0x3590E82CL,0x3590E82CL,0xAD66D335L,0x3590E82CL,0x3590E82CL};
static int g_736 = 0L;
static unsigned g_738 = 0UL;
static unsigned g_770 = 7UL;
static int g_794 = 0xBFA38196L;
static const struct S1 g_806 = {0L,4UL,253UL,-7L,0x80563863L,{0xC887L,0x44L,-8L,0xC9L,0x6930L,1UL,0xDDL,0UL}};
static unsigned char g_834 = 1UL;
static short g_868 = 0x5D99L;
static const char ***g_877 = (void*)0;
static unsigned g_941[5][6][1] = {{{1UL},{0x93B937BCL},{1UL},{0x93B937BCL},{1UL},{0x93B937BCL}},{{1UL},{0x93B937BCL},{1UL},{0x93B937BCL},{1UL},{0x93B937BCL}},{{1UL},{0x93B937BCL},{1UL},{0x93B937BCL},{1UL},{0x93B937BCL}},{{1UL},{0x93B937BCL},{1UL},{0x93B937BCL},{1UL},{0x93B937BCL}},{{1UL},{0x93B937BCL},{1UL},{0x93B937BCL},{1UL},{0x93B937BCL}}};
static unsigned char g_990 = 0xD8L;
static const struct S1 *g_991[3][9][4] = {{{&g_806,&g_140,(void*)0,&g_806},{&g_806,&g_806,&g_806,&g_806},{&g_806,&g_140,&g_806,&g_806},{&g_140,&g_806,&g_140,&g_806},{&g_806,&g_140,(void*)0,&g_806},{&g_806,&g_806,&g_806,&g_806},{&g_806,&g_140,&g_806,&g_806},{&g_140,&g_806,&g_140,&g_806},{&g_806,&g_140,(void*)0,&g_806}},{{&g_806,&g_806,&g_806,&g_806},{&g_806,&g_140,&g_806,&g_806},{&g_140,&g_806,&g_140,&g_806},{&g_806,&g_140,(void*)0,&g_806},{&g_806,&g_806,&g_806,&g_806},{&g_806,&g_140,&g_806,&g_806},{&g_140,&g_806,&g_140,&g_806},{&g_806,&g_140,(void*)0,&g_806},{&g_806,&g_806,&g_806,&g_806}},{{&g_806,&g_140,&g_806,&g_806},{&g_140,&g_806,&g_140,&g_806},{&g_806,&g_140,(void*)0,&g_806},{&g_806,&g_806,&g_806,&g_806},{&g_806,&g_140,&g_806,&g_806},{&g_140,&g_806,&g_140,&g_806},{&g_806,&g_140,(void*)0,&g_806},{&g_806,&g_806,&g_806,&g_806},{&g_806,&g_140,&g_806,&g_806}}};
static short g_1051 = 0x867BL;
static const char *g_1074 = &g_806.f5.f6;
static const char **g_1073 = &g_1074;
static unsigned *g_1083 = &g_664;
static unsigned **g_1082 = &g_1083;
static unsigned g_1154[3] = {0UL,0UL,0UL};
static unsigned char g_1165 = 1UL;
static struct S0 g_1173[2] = {{0xE450L,0xE9L,0x3DL,0xD3L,6UL,0x7DE58B47L,7L,3UL},{0xE450L,0xE9L,0x3DL,0xD3L,6UL,0x7DE58B47L,7L,3UL}};
static unsigned g_1201 = 4294967295UL;
static struct S0 **g_1213 = &g_150;
static unsigned g_1304[5][7][5] = {{{9UL,9UL,4294967295UL,0x9BC719B2L,4294967292UL},{0x4C236D9BL,0x9BC719B2L,0UL,0x03DBCC46L,1UL},{0x25E4FB93L,0UL,4294967286UL,4294967292UL,4294967292UL},{0x19C4B8FAL,4294967286UL,4294967286UL,0x19C4B8FAL,0x7B04717AL},{0x03DBCC46L,0x4C236D9BL,0UL,0UL,0UL},{4294967289UL,1UL,4294967295UL,0x7B04717AL,0x4C236D9BL},{0UL,4294967286UL,8UL,0UL,4294967292UL}},{{4294967292UL,0UL,4294967295UL,0x19C4B8FAL,9UL},{4294967289UL,9UL,4294967292UL,4294967292UL,9UL},{0x9BC719B2L,9UL,0x25E4FB93L,0x03DBCC46L,4294967292UL},{1UL,0x03DBCC46L,0UL,0x9BC719B2L,0x4C236D9BL},{0x25E4FB93L,4294967292UL,9UL,4294967292UL,0UL},{1UL,4294967286UL,4294967291UL,1UL,0x7B04717AL},{0x9BC719B2L,0x19C4B8FAL,0UL,4294967292UL,4294967292UL}},{{4294967289UL,0x19C4B8FAL,4294967289UL,0x7B04717AL,0x7B04717AL},{4294967291UL,4294967293UL,4294967290UL,9UL,0x27AD59B7L},{9UL,4294967291UL,0x19C4B8FAL,8UL,4294967289UL},{0UL,0x25E4FB93L,4294967290UL,0x27AD59B7L,0x25E4FB93L},{0x25E4FB93L,0x58DCE26BL,0UL,4294967295UL,0x27AD59B7L},{4294967292UL,4294967295UL,0x4C236D9BL,4294967295UL,4294967292UL},{4294967295UL,9UL,0xA22DFC0CL,0x27AD59B7L,4294967286UL}},{{8UL,4294967293UL,0x58DCE26BL,8UL,4294967290UL},{4294967295UL,0x7B04717AL,0x4C236D9BL,9UL,4294967286UL},{0UL,8UL,4294967295UL,4294967290UL,4294967292UL},{4294967286UL,4294967293UL,0x27AD59B7L,4294967291UL,0x27AD59B7L},{4294967286UL,4294967286UL,0x19C4B8FAL,0x7B04717AL,0x25E4FB93L},{0UL,4294967289UL,0x8311C1CDL,0x27AD59B7L,4294967289UL},{4294967295UL,0x58DCE26BL,2UL,4294967289UL,0x27AD59B7L}},{{8UL,4294967289UL,0x4C236D9BL,0x25E4FB93L,0x7B04717AL},{4294967295UL,4294967286UL,4294967293UL,0x27AD59B7L,4294967291UL},{4294967292UL,4294967293UL,4294967293UL,4294967292UL,4294967290UL},{0x25E4FB93L,8UL,0x4C236D9BL,4294967286UL,9UL},{0UL,0x7B04717AL,2UL,4294967290UL,8UL},{9UL,4294967293UL,0x8311C1CDL,4294967286UL,0x27AD59B7L},{0x25E4FB93L,4294967289UL,4294967292UL,4294967291UL,8UL}}};
static struct S0 g_1369 = {0x0BF4L,0xE1L,-2L,0L,1UL,0UL,0x37L,0x03L};
static unsigned short g_1526 = 65527UL;
static unsigned char g_1550 = 247UL;
static char g_1552 = (-1L);
static int g_1581[4][2][10] = {{{0x54FA3081L,0L,(-5L),0xBE8D84C9L,1L,0xF3A24576L,0xF3A24576L,1L,0xBE8D84C9L,(-5L)},{0xF3A24576L,0xF3A24576L,1L,0xBE8D84C9L,(-5L),0L,0x54FA3081L,0x0C8CB501L,0x54FA3081L,0L}},{{0xF960648EL,1L,0x280CB640L,1L,0xF960648EL,9L,0x54FA3081L,0xF3A24576L,(-7L),(-7L)},{0xBE8D84C9L,0xF3A24576L,0xFA033713L,0L,0L,0xFA033713L,0xF3A24576L,0xBE8D84C9L,0x280CB640L,(-7L)}},{{0x0C8CB501L,0L,0xF3A24576L,0L,0xF960648EL,0x54FA3081L,0xF960648EL,0L,0xF3A24576L,0L},{0xFA033713L,9L,0xF3A24576L,0xF960648EL,(-5L),0L,0xBE8D84C9L,0xBE8D84C9L,0L,(-5L)}},{{(-7L),0xFA033713L,0xFA033713L,(-7L),1L,0L,0x0C8CB501L,0xF3A24576L,(-5L),0xF3A24576L},{0xFA033713L,0x54FA3081L,0x280CB640L,0xF3A24576L,0x280CB640L,0x54FA3081L,0xFA033713L,0x0C8CB501L,(-5L),9L}}};
static int g_1619 = (-1L);
static int g_1644 = (-1L);
static int g_1657 = 0L;
static struct S1 g_1668[1][6][10] = {{{{-1L,65535UL,1UL,-9L,4294967288UL,{4UL,253UL,7L,7L,0xB5D4L,0xAE271A14L,0L,252UL}},{0x26BBL,0xB864L,0UL,1L,0x1F7FF305L,{7UL,9UL,-10L,-1L,0x531AL,0x98A79EB8L,-5L,0x2FL}},{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}},{-1L,65535UL,1UL,-9L,4294967288UL,{4UL,253UL,7L,7L,0xB5D4L,0xAE271A14L,0L,252UL}},{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}},{0x26BBL,0xB864L,0UL,1L,0x1F7FF305L,{7UL,9UL,-10L,-1L,0x531AL,0x98A79EB8L,-5L,0x2FL}},{-1L,65535UL,1UL,-9L,4294967288UL,{4UL,253UL,7L,7L,0xB5D4L,0xAE271A14L,0L,252UL}},{1L,65535UL,0xDBL,2L,0x39E93A98L,{65535UL,0x01L,0x3BL,0xAEL,5UL,0xA977F2DAL,0L,0xE5L}},{1L,65535UL,0xDBL,2L,0x39E93A98L,{65535UL,0x01L,0x3BL,0xAEL,5UL,0xA977F2DAL,0L,0xE5L}},{-1L,65535UL,1UL,-9L,4294967288UL,{4UL,253UL,7L,7L,0xB5D4L,0xAE271A14L,0L,252UL}}},{{-1L,65528UL,0x67L,-6L,0x684AE4F9L,{65535UL,0x48L,0L,0x0FL,9UL,4294967294UL,-7L,5UL}},{1L,65535UL,0xDBL,2L,0x39E93A98L,{65535UL,0x01L,0x3BL,0xAEL,5UL,0xA977F2DAL,0L,0xE5L}},{0xDED5L,0UL,255UL,8L,0x56EA16C6L,{0xD8C2L,0x60L,0x30L,-4L,0xA8C3L,4294967295UL,-6L,249UL}},{0xDED5L,0UL,255UL,8L,0x56EA16C6L,{0xD8C2L,0x60L,0x30L,-4L,0xA8C3L,4294967295UL,-6L,249UL}},{1L,65535UL,0xDBL,2L,0x39E93A98L,{65535UL,0x01L,0x3BL,0xAEL,5UL,0xA977F2DAL,0L,0xE5L}},{-1L,65528UL,0x67L,-6L,0x684AE4F9L,{65535UL,0x48L,0L,0x0FL,9UL,4294967294UL,-7L,5UL}},{0x88A5L,1UL,255UL,0xA0L,4294967287UL,{0xFD85L,255UL,6L,-10L,0xD2E3L,0UL,-1L,0xF6L}},{1L,65535UL,0xDBL,2L,0x39E93A98L,{65535UL,0x01L,0x3BL,0xAEL,5UL,0xA977F2DAL,0L,0xE5L}},{0x88A5L,1UL,255UL,0xA0L,4294967287UL,{0xFD85L,255UL,6L,-10L,0xD2E3L,0UL,-1L,0xF6L}},{-1L,65528UL,0x67L,-6L,0x684AE4F9L,{65535UL,0x48L,0L,0x0FL,9UL,4294967294UL,-7L,5UL}}},{{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}},{1L,65535UL,0xDBL,2L,0x39E93A98L,{65535UL,0x01L,0x3BL,0xAEL,5UL,0xA977F2DAL,0L,0xE5L}},{0x84B4L,65535UL,247UL,1L,0x6184E952L,{0xAE9CL,7UL,0xD7L,-1L,0UL,0xE8A154D9L,0xB0L,0x46L}},{1L,65535UL,0xDBL,2L,0x39E93A98L,{65535UL,0x01L,0x3BL,0xAEL,5UL,0xA977F2DAL,0L,0xE5L}},{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}},{0x84B4L,65535UL,247UL,1L,0x6184E952L,{0xAE9CL,7UL,0xD7L,-1L,0UL,0xE8A154D9L,0xB0L,0x46L}},{0x26BBL,0xB864L,0UL,1L,0x1F7FF305L,{7UL,9UL,-10L,-1L,0x531AL,0x98A79EB8L,-5L,0x2FL}},{0x26BBL,0xB864L,0UL,1L,0x1F7FF305L,{7UL,9UL,-10L,-1L,0x531AL,0x98A79EB8L,-5L,0x2FL}},{0x84B4L,65535UL,247UL,1L,0x6184E952L,{0xAE9CL,7UL,0xD7L,-1L,0UL,0xE8A154D9L,0xB0L,0x46L}},{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}}},{{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}},{0x88A5L,1UL,255UL,0xA0L,4294967287UL,{0xFD85L,255UL,6L,-10L,0xD2E3L,0UL,-1L,0xF6L}},{0x88A5L,1UL,255UL,0xA0L,4294967287UL,{0xFD85L,255UL,6L,-10L,0xD2E3L,0UL,-1L,0xF6L}},{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}},{0xDED5L,0UL,255UL,8L,0x56EA16C6L,{0xD8C2L,0x60L,0x30L,-4L,0xA8C3L,4294967295UL,-6L,249UL}},{-1L,65528UL,0x67L,-6L,0x684AE4F9L,{65535UL,0x48L,0L,0x0FL,9UL,4294967294UL,-7L,5UL}},{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}},{-1L,65528UL,0x67L,-6L,0x684AE4F9L,{65535UL,0x48L,0L,0x0FL,9UL,4294967294UL,-7L,5UL}},{0xDED5L,0UL,255UL,8L,0x56EA16C6L,{0xD8C2L,0x60L,0x30L,-4L,0xA8C3L,4294967295UL,-6L,249UL}},{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}}},{{-1L,65528UL,0x67L,-6L,0x684AE4F9L,{65535UL,0x48L,0L,0x0FL,9UL,4294967294UL,-7L,5UL}},{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}},{-1L,65528UL,0x67L,-6L,0x684AE4F9L,{65535UL,0x48L,0L,0x0FL,9UL,4294967294UL,-7L,5UL}},{0xDED5L,0UL,255UL,8L,0x56EA16C6L,{0xD8C2L,0x60L,0x30L,-4L,0xA8C3L,4294967295UL,-6L,249UL}},{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}},{0x88A5L,1UL,255UL,0xA0L,4294967287UL,{0xFD85L,255UL,6L,-10L,0xD2E3L,0UL,-1L,0xF6L}},{0x88A5L,1UL,255UL,0xA0L,4294967287UL,{0xFD85L,255UL,6L,-10L,0xD2E3L,0UL,-1L,0xF6L}},{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}},{0xDED5L,0UL,255UL,8L,0x56EA16C6L,{0xD8C2L,0x60L,0x30L,-4L,0xA8C3L,4294967295UL,-6L,249UL}},{-1L,65528UL,0x67L,-6L,0x684AE4F9L,{65535UL,0x48L,0L,0x0FL,9UL,4294967294UL,-7L,5UL}}},{{0x26BBL,0xB864L,0UL,1L,0x1F7FF305L,{7UL,9UL,-10L,-1L,0x531AL,0x98A79EB8L,-5L,0x2FL}},{0x26BBL,0xB864L,0UL,1L,0x1F7FF305L,{7UL,9UL,-10L,-1L,0x531AL,0x98A79EB8L,-5L,0x2FL}},{0x84B4L,65535UL,247UL,1L,0x6184E952L,{0xAE9CL,7UL,0xD7L,-1L,0UL,0xE8A154D9L,0xB0L,0x46L}},{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}},{1L,65535UL,0xDBL,2L,0x39E93A98L,{65535UL,0x01L,0x3BL,0xAEL,5UL,0xA977F2DAL,0L,0xE5L}},{0x84B4L,65535UL,247UL,1L,0x6184E952L,{0xAE9CL,7UL,0xD7L,-1L,0UL,0xE8A154D9L,0xB0L,0x46L}},{1L,65535UL,0xDBL,2L,0x39E93A98L,{65535UL,0x01L,0x3BL,0xAEL,5UL,0xA977F2DAL,0L,0xE5L}},{8L,65530UL,246UL,8L,4294967295UL,{0x9A69L,0x23L,5L,0L,0UL,4294967295UL,-4L,0x55L}},{0x84B4L,65535UL,247UL,1L,0x6184E952L,{0xAE9CL,7UL,0xD7L,-1L,0UL,0xE8A154D9L,0xB0L,0x46L}},{0x26BBL,0xB864L,0UL,1L,0x1F7FF305L,{7UL,9UL,-10L,-1L,0x531AL,0x98A79EB8L,-5L,0x2FL}}}}};
static char g_1691 = 0x32L;
static unsigned g_1697 = 4294967295UL;
static unsigned char g_1700 = 0UL;



static int func_1(void);
static unsigned char func_5(char p_6, struct S1 p_7, const struct S1 p_8);
static char func_12(unsigned p_13, int p_14, short p_15);
static int func_17(char p_18, unsigned short p_19, unsigned p_20);
static short func_42(unsigned p_43, const unsigned char p_44, unsigned p_45);
static int * func_60(short p_61, int * p_62, unsigned char p_63, const struct S1 p_64);
static int * func_67(int * const * p_68);
static int ** func_70(struct S0 p_71);
static struct S0 func_72(unsigned p_73, unsigned short p_74, int ** p_75);
static int ** func_77(int * p_78, int * p_79);
static int func_1(void)
{
    unsigned l_11[9][6][3] = {{{4294967295UL,0UL,0x8307B364L},{0xCD3E5C7DL,0xA1D127A4L,0x16E074F0L},{4294967291UL,0xE9F9034EL,0x00F4D4E2L},{0UL,0x1E173482L,4294967295UL},{0x6658D83FL,1UL,3UL},{0xE9F9034EL,0xB999C826L,0xC3C737ECL}},{{0x889B05F6L,0xCE376A95L,8UL},{0xD9490441L,0UL,0xA1D127A4L},{0x00F4D4E2L,0xC3C737ECL,0xA1D127A4L},{0xD8E1CE43L,0xD742CC32L,8UL},{0xD791F9E6L,4294967288UL,0xC3C737ECL},{0x64C11610L,1UL,3UL}},{{4294967295UL,5UL,4294967295UL},{0UL,0x3D5AB883L,0x00F4D4E2L},{4294967287UL,4294967295UL,0x16E074F0L},{0x0BDE8AFFL,0xF7F2F1E7L,4294967287UL},{0xE4F9F010L,2UL,0x20C256FAL},{4294967288UL,1UL,1UL}},{{0x1E173482L,3UL,0xF7F2F1E7L},{0xDC75DF64L,0xD791F9E6L,0x889B05F6L},{4294967295UL,0UL,0xC3C737ECL},{4294967295UL,0x1E173482L,0xC0A10336L},{1UL,0UL,0xD742CC32L},{0x6658D83FL,0xD791F9E6L,0UL}},{{1UL,3UL,4294967295UL},{4294967290UL,1UL,4294967288UL},{0xE9F9034EL,2UL,0xF21DDBC7L},{0x0BDE8AFFL,0xF7F2F1E7L,9UL},{1UL,0x2BF390F3L,0UL},{4294967288UL,0x767C8FA1L,3UL}},{{0x767C8FA1L,0xD9490441L,0xE9F9034EL},{0x3D5AB883L,0x0BDE8AFFL,0xD791F9E6L},{0UL,1UL,0xCD3E5C7DL},{0UL,4294967291UL,0x89C1C50DL},{1UL,0xB999C826L,1UL},{1UL,0UL,0UL}},{{0UL,0x0BA2C160L,0x00F4D4E2L},{0UL,0x4415E40CL,4UL},{0x3D5AB883L,0xCD3E5C7DL,0xEF4FC6A3L},{0x767C8FA1L,0UL,0x2BF390F3L},{4294967288UL,1UL,4294967288UL},{1UL,0UL,0x0BDE8AFFL}},{{0x0BDE8AFFL,0UL,0x17C927DBL},{0xE9F9034EL,0x17C927DBL,0UL},{4294967290UL,4294967290UL,5UL},{1UL,0x89C1C50DL,4294967295UL},{0x6658D83FL,3UL,4294967291UL},{0UL,0x8F781BE2L,4294967295UL}},{{3UL,4294967295UL,9UL},{0x0BDE8AFFL,0x20C256FAL,3UL},{0x59BAAA4FL,4294967290UL,0x20C256FAL},{0xD791F9E6L,0x64C11610L,0UL},{0UL,4294967295UL,4294967292UL},{4294967288UL,0UL,2UL}}};
    unsigned short l_16 = 0x6825L;
    const struct S1 l_1563 = {0x7112L,65535UL,0x62L,0x9DL,4294967295UL,{0UL,0xA8L,0x7DL,-9L,0xF368L,0UL,-7L,0UL}};
    int l_1641[2][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L}};
    struct S0 **l_1642 = &g_150;
    int *l_1651 = &g_89;
    int **l_1652[2];
    struct S0 *l_1653 = &g_1173[1];
    int * const l_1656 = &g_1657;
    int * const *l_1655 = &l_1656;
    int * const **l_1654 = &l_1655;
    int *l_1658 = &g_2[1][2];
    unsigned l_1665 = 0xCBEE7C7BL;
    struct S1 l_1703 = {0x8392L,65535UL,255UL,0xDDL,4294967295UL,{0xCA63L,8UL,0x64L,0x63L,0xE5D0L,0x89F8F3A5L,-1L,0UL}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1652[i] = &g_81;
    for (g_2[7][1] = (-5); (g_2[7][1] <= 1); ++g_2[7][1])
    {
        unsigned char *l_1549 = &g_1550;
        char *l_1551 = &g_1552;
        int l_1561[6][4] = {{0x6210ED2CL,0x6210ED2CL,(-2L),(-2L)},{0x6210ED2CL,0x6210ED2CL,(-2L),(-2L)},{0x6210ED2CL,0x6210ED2CL,(-2L),(-2L)},{0x6210ED2CL,0x6210ED2CL,(-2L),(-2L)},{0x6210ED2CL,0x6210ED2CL,(-2L),(-2L)},{0x6210ED2CL,0x6210ED2CL,(-2L),(-2L)}};
        struct S1 l_1562 = {0x9EB2L,0xDCC4L,0x88L,0L,4294967292UL,{0x062BL,0UL,9L,1L,5UL,4294967294UL,0L,0x89L}};
        int *l_1639 = (void*)0;
        int *l_1640[1];
        struct S0 **l_1643 = &g_150;
        unsigned char l_1645 = 0x05L;
        struct S1 **l_1648 = &g_310;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1640[i] = &g_82;
    }
    l_1658 = func_67(((*l_1654) = func_70(((*l_1653) = func_72((safe_div_func_uint32_t_u_u(((l_1651 = (void*)0) != (*g_228)), l_11[5][1][0])), g_806.f5.f4, l_1652[1])))));
    for (l_16 = 0; (l_16 != 26); ++l_16)
    {
        unsigned l_1677 = 0UL;
        unsigned l_1688 = 0xB56E0F5BL;
        struct S0 l_1690 = {0xA0BFL,0x5AL,0xAFL,0x6CL,0x3EEEL,4294967295UL,0x3DL,1UL};
        int l_1693[6] = {4L,4L,4L,4L,4L,4L};
        struct S1 l_1705 = {0x20D1L,0x6AF6L,0xDAL,0x9FL,0UL,{0xC7C2L,9UL,0x78L,0xCBL,0UL,0xA611EE55L,1L,0x56L}};
        int i;
        for (g_52 = 29; (g_52 != 20); g_52 = safe_sub_func_uint16_t_u_u(g_52, 5))
        {
            int l_1676[3][6];
            struct S0 l_1689 = {1UL,250UL,0L,3L,0xB26FL,7UL,0xACL,0xDAL};
            int l_1695 = 1L;
            struct S1 *l_1704[2];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 6; j++)
                    l_1676[i][j] = 0L;
            }
            for (i = 0; i < 2; i++)
                l_1704[i] = &g_1668[0][4][6];
            for (g_140.f5.f2 = (-1); (g_140.f5.f2 <= (-1)); g_140.f5.f2 = safe_add_func_uint16_t_u_u(g_140.f5.f2, 1))
            {
                unsigned char l_1669 = 0xABL;
                int l_1692 = (-3L);
                for (g_146 = 0; (g_146 <= 3); g_146 += 1)
                {
                    char *l_1684 = (void*)0;
                    char *l_1685[5][1][5] = {{{&g_1668[0][4][6].f3,&g_140.f5.f6,&g_1668[0][4][6].f3,&g_1552,&g_1552}},{{&g_1668[0][4][6].f3,&g_140.f5.f6,&g_1668[0][4][6].f3,&g_1552,&g_1552}},{{&g_1668[0][4][6].f3,&g_140.f5.f6,&g_1668[0][4][6].f3,&g_1552,&g_1552}},{{&g_1668[0][4][6].f3,&g_140.f5.f6,&g_1668[0][4][6].f3,&g_1552,&g_1552}},{{&g_1668[0][4][6].f3,&g_140.f5.f6,&g_1668[0][4][6].f3,&g_1552,&g_1552}}};
                    int l_1694 = 0x7C483BC4L;
                    int l_1696 = 0xF067BD2FL;
                    int i, j, k;
                    l_1665--;
                    (*l_1658) = g_1304[(g_146 + 1)][(g_146 + 2)][g_146];
                    for (g_236 = 0; (g_236 <= 0); g_236 += 1)
                    {
                        g_1668[0][4][6] = (*g_310);
                        if (g_1304[(g_146 + 1)][(g_146 + 2)][g_146])
                            break;
                        return l_1669;
                    }
                    if ((l_1688 &= ((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(l_1676[1][1], l_1677)), ((g_661[g_146][g_146] = ((safe_div_func_int32_t_s_s(5L, l_1677)) <= (safe_mul_func_uint8_t_u_u(((***g_567) == (g_1668[0][4][6].f3 = (safe_lshift_func_int8_t_s_u(l_1676[1][1], l_1669)))), (*l_1656))))) != (safe_mod_func_uint32_t_u_u((*g_1083), l_1676[1][5]))))), 1L)) && (*g_457))))
                    {
                        l_1690 = l_1689;
                        --g_1697;
                    }
                    else
                    {
                        ++g_1700;
                        return g_1581[3][0][4];
                    }
                }
                (*l_1656) = l_1693[0];
            }
            g_1668[0][2][8] = ((*g_310) = l_1703);
            if (l_1693[4])
                break;
        }
        (*g_310) = l_1705;
        (*l_1658) = ((void*)0 == &g_1083);
        (*g_310) = (*g_310);
    }
    return g_1369.f5;
}







static unsigned char func_5(char p_6, struct S1 p_7, const struct S1 p_8)
{
    short l_1564 = 7L;
    int *l_1565 = (void*)0;
    int *l_1566 = &g_497;
    int l_1574 = 0xAAC9C8BEL;
    int l_1575 = 3L;
    int l_1576 = (-1L);
    int l_1577 = 0x34C450B3L;
    int l_1579 = 0L;
    int l_1580[1];
    int l_1586[9];
    int l_1587 = 0L;
    unsigned l_1591[4] = {4UL,4UL,4UL,4UL};
    const char ***l_1630 = &g_1073;
    unsigned short *l_1631 = &g_510[7][1];
    char *l_1635 = &g_1173[1].f3;
    char **l_1634 = &l_1635;
    unsigned *l_1636 = &g_1369.f5;
    int i;
    for (i = 0; i < 1; i++)
        l_1580[i] = 1L;
    for (i = 0; i < 9; i++)
        l_1586[i] = 0L;
    (*l_1566) = l_1564;
    if (p_8.f3)
    {
        int *l_1567 = &g_497;
        int *l_1568 = &g_497;
        int *l_1569 = &g_497;
        int *l_1570 = &g_82;
        int *l_1571 = (void*)0;
        int *l_1572 = &g_497;
        int *l_1573[2];
        char l_1578 = 0x8CL;
        unsigned short l_1582 = 0x4F8BL;
        char l_1585 = 0x18L;
        short l_1588 = (-1L);
        char l_1589 = 0x15L;
        int l_1590 = 0L;
        unsigned l_1601 = 0x372D1C5DL;
        int i;
        for (i = 0; i < 2; i++)
            l_1573[i] = &g_82;
        ++l_1582;
        l_1591[1]++;
        for (l_1576 = 17; (l_1576 <= (-8)); l_1576 = safe_sub_func_int32_t_s_s(l_1576, 3))
        {
            short l_1598 = 0x9338L;
            char *l_1602 = &g_140.f5.f3;
            int l_1603 = (-3L);
            short l_1608[7] = {0x5A61L,0x5A61L,0x5A61L,0x5A61L,0x5A61L,0x5A61L,0x5A61L};
            struct S0 *l_1612 = &g_1173[1];
            int l_1613 = 0x3ED3862EL;
            int l_1614 = 0x12E86ACBL;
            int l_1620[7] = {0x29091D06L,0x29091D06L,0x29091D06L,0x29091D06L,0x29091D06L,0x29091D06L,0x29091D06L};
            int i;
            if ((l_1603 = (((l_1598 > 0x40A5L) == (((safe_sub_func_int16_t_s_s(((*g_457) && l_1601), p_7.f5.f4)) | p_8.f5.f2) >= ((*l_1602) = 8L))) <= (*l_1567))))
            {
                unsigned short l_1606 = 3UL;
                for (g_834 = (-2); (g_834 != 11); g_834 = safe_add_func_uint32_t_u_u(g_834, 1))
                {
                    l_1573[1] = func_67((*g_227));
                }
                (*l_1566) ^= (p_7.f2 < ((*g_1082) == (*g_1082)));
                l_1606 = ((*l_1567) = (l_1575 &= (*l_1566)));
                if (p_7.f5.f1)
                    break;
            }
            else
            {
                const unsigned short l_1607 = 65535UL;
                int l_1615 = 3L;
                int l_1617 = 0x8AF4F881L;
                int l_1618 = 0x69AEC602L;
                unsigned l_1621 = 1UL;
                if (l_1607)
                    break;
                if (l_1607)
                {
                    unsigned l_1609 = 0x92771E90L;
                    (*l_1572) ^= (-1L);
                    ++l_1609;
                    (*g_1213) = l_1612;
                }
                else
                {
                    int l_1616 = 0xA902403FL;
                    l_1621++;
                }
            }
            return l_1620[5];
        }
    }
    else
    {
        char l_1624 = 0x1EL;
        struct S1 l_1625 = {-1L,1UL,0UL,0x38L,4294967295UL,{0x44D5L,0x48L,6L,-1L,0xA325L,4294967291UL,0x95L,0x13L}};
        l_1624 = ((*l_1566) = p_7.f5.f6);
        l_1625 = p_8;
    }
    (*l_1566) |= (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((*l_1631) = ((l_1630 = l_1630) == &g_1073)), func_17((*g_1074), (safe_lshift_func_uint16_t_u_u(p_8.f5.f0, ((void*)0 != l_1634))), ((*l_1636) = 4294967289UL)))), (safe_add_func_uint32_t_u_u(p_8.f2, (-1L)))));
    return (***g_567);
}







static char func_12(unsigned p_13, int p_14, short p_15)
{
    unsigned char l_33 = 0x62L;
    unsigned char *l_1370 = &g_990;
    const int l_1371 = 0x0E3AE62EL;
    int l_1548 = 1L;
    l_1548 = (!func_17(((g_2[7][2] > (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((((((*g_1083) = (safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(l_33, 1)), (safe_div_func_int32_t_s_s(0x56FF37E3L, l_33)))) > (safe_div_func_int16_t_s_s((0x12D4L < (safe_mod_func_uint8_t_u_u(((*l_1370) ^= (0x85C7EEBEL > ((p_13 && (safe_mod_func_int16_t_s_s(l_33, func_42((g_53 &= (safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((g_52 = ((((-8L) <= 0xE3B40BBFL) ^ g_2[7][1]) | l_33)) || l_33), l_33)), l_33)), 4))), g_2[7][1], p_15)))) & 0xCA1DL))), p_15))), p_15))), l_33))) || p_13) ^ l_33) < 2UL), p_15)) != 1L) && l_1371), l_33)), 0x539BL))) | p_15), p_15, g_806.f5.f7));
    return (*g_1074);
}







static int func_17(char p_18, unsigned short p_19, unsigned p_20)
{
    short *l_1374 = &g_109;
    int l_1375 = 1L;
    int l_1402 = 0x19A01C25L;
    int l_1411[1][5][5] = {{{0L,0x43EA28BAL,0x43EA28BAL,0L,0x43EA28BAL},{0x63CD360EL,0x63CD360EL,0x275B69A3L,0x63CD360EL,0x63CD360EL},{0x43EA28BAL,0L,0x43EA28BAL,0x43EA28BAL,0L},{0x63CD360EL,(-1L),(-1L),0x63CD360EL,(-1L)},{0L,0L,0L,0L,0L}}};
    unsigned char l_1412 = 0UL;
    const short l_1415[2] = {0x24A5L,0x24A5L};
    int l_1463 = 0xC01063D5L;
    int l_1467 = 0L;
    char l_1479 = 0xF8L;
    struct S0 l_1546 = {65528UL,0xBBL,1L,-1L,0x3065L,4294967293UL,0x44L,0xDAL};
    struct S0 *l_1547 = &g_1173[1];
    int i, j, k;
    if ((0x80324973L & (l_1375 = (~(safe_rshift_func_int16_t_s_s(((*l_1374) |= ((p_18 ^ g_140.f5.f5) | (8L < 0x78L))), p_18))))))
    {
        unsigned short l_1376 = 65535UL;
        int l_1378 = 0x578C3D11L;
        int l_1379 = (-9L);
        int l_1380 = 0xE10A37BDL;
        int l_1381 = 0x7D1AFF71L;
        int l_1382 = 0L;
        unsigned l_1405 = 0x05CEB8D5L;
        short l_1428 = 0xF67CL;
        short l_1431[6][3] = {{0L,0L,0L},{(-1L),(-7L),(-1L)},{0L,0L,0L},{(-1L),(-7L),(-1L)},{0L,0L,0L},{(-1L),(-7L),(-1L)}};
        int l_1476[1][8] = {{1L,1L,1L,1L,1L,1L,1L,1L}};
        struct S1 l_1508 = {1L,1UL,249UL,0x57L,4294967295UL,{0x257BL,0x32L,0x1FL,-8L,5UL,0x786ADCEBL,2L,0UL}};
        unsigned char **l_1519[10] = {&g_457,&g_457,&g_457,&g_457,&g_457,&g_457,&g_457,&g_457,&g_457,&g_457};
        int *l_1527 = &g_736;
        int i, j;
lbl_1528:
        for (g_82 = 0; (g_82 <= 4); g_82 += 1)
        {
            int *l_1377[8][3][10] = {{{&l_1375,(void*)0,&l_1375,&g_82,&g_734[4],&g_82,&g_734[4],&g_82,&l_1375,(void*)0},{(void*)0,&l_1375,&l_1375,&g_497,(void*)0,&l_1375,&l_1375,&g_82,&g_497,&g_2[7][1]},{&g_497,&g_2[6][3],&g_734[4],(void*)0,&l_1375,&l_1375,&g_734[4],(void*)0,&l_1375,&g_82}},{{&l_1375,&l_1375,(void*)0,(void*)0,&g_2[7][1],&g_82,(void*)0,&l_1375,(void*)0,&g_2[6][3]},{&g_2[0][0],&g_2[5][2],&g_497,&l_1375,&g_2[7][1],&l_1375,&g_497,&g_2[5][2],&g_2[0][0],&g_82},{&g_2[7][1],(void*)0,&g_89,&l_1375,(void*)0,&g_2[0][0],&g_82,&g_82,&g_497,&g_497}},{{&g_89,&g_497,&l_1375,&l_1375,&l_1375,&l_1375,&g_497,&g_89,&g_2[0][0],&g_734[4]},{&g_497,&g_82,&l_1375,&l_1375,(void*)0,&g_497,&l_1375,&l_1375,(void*)0,&l_1375},{&l_1375,&l_1375,&l_1375,(void*)0,&l_1375,&l_1375,&l_1375,&g_89,&l_1375,&g_2[5][2]}},{{(void*)0,&g_82,&l_1375,&g_734[4],&l_1375,&l_1375,&g_89,&g_82,&g_82,&g_89},{(void*)0,&g_82,&g_89,&g_89,&g_82,(void*)0,&l_1375,&g_2[5][2],&g_2[7][1],&l_1375},{&g_2[5][2],&l_1375,&g_497,(void*)0,&g_734[4],&g_497,&l_1375,&l_1375,&l_1375,&g_497}},{{&g_2[5][2],&l_1375,&l_1375,&l_1375,&g_497,&g_734[4],(void*)0,&g_497,&l_1375,&g_2[5][2]},{&g_734[4],(void*)0,&g_497,&l_1375,&g_2[5][2],(void*)0,(void*)0,(void*)0,(void*)0,&g_2[5][2]},{&l_1375,&l_1375,&l_1375,&l_1375,&g_497,&g_89,&g_2[0][0],&g_734[4],&g_2[7][1],(void*)0}},{{&g_2[6][3],&g_497,&l_1375,(void*)0,&g_2[7][1],&g_2[0][0],&l_1375,&g_2[0][0],&g_2[7][1],(void*)0},{(void*)0,&g_2[6][3],(void*)0,&l_1375,(void*)0,&g_82,&g_2[7][1],(void*)0,(void*)0,&l_1375},{&l_1375,&g_82,&g_497,&l_1375,(void*)0,&g_2[5][2],&g_2[5][2],(void*)0,&l_1375,&g_497}},{{&l_1375,&l_1375,(void*)0,&l_1375,(void*)0,&g_2[6][3],&g_497,&g_2[0][0],(void*)0,&g_89},{&g_2[5][2],&g_2[7][1],&l_1375,&g_734[4],&g_497,(void*)0,&g_497,&g_734[4],&l_1375,&g_2[7][1]},{(void*)0,&l_1375,&l_1375,&l_1375,&g_89,&l_1375,&g_2[5][2],(void*)0,&l_1375,&g_2[0][0]}},{{&l_1375,&g_82,&g_497,&g_2[7][1],&l_1375,&l_1375,&g_497,&g_89,(void*)0,(void*)0},{&l_1375,&l_1375,&g_497,&g_89,&g_2[0][0],&g_734[4],&g_2[7][1],(void*)0,(void*)0,&g_82},{&g_2[6][3],&g_82,&l_1375,&l_1375,&g_2[0][0],&l_1375,&l_1375,&g_82,&g_2[6][3],(void*)0}}};
            unsigned l_1383 = 0x33BC39F5L;
            int i, j, k;
            (*g_228) = &g_82;
            l_1376 ^= (***g_227);
            l_1383++;
            for (g_192 = 0; (g_192 <= 1); g_192 += 1)
            {
                unsigned short *l_1396[10] = {&g_1369.f4,&g_1369.f4,&g_1369.f4,&g_1369.f4,&g_1369.f4,&g_1369.f4,&g_1369.f4,&g_1369.f4,&g_1369.f4,&g_1369.f4};
                int l_1397[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1397[i] = 0xFDAEAAABL;
                (*g_228) = &l_1375;
                for (g_124 = 1; (g_124 >= 0); g_124 -= 1)
                {
                    struct S0 l_1386 = {0x197BL,0UL,0L,0L,0x8DADL,0xC622708CL,0x3DL,0UL};
                    struct S0 *l_1387 = &g_1173[1];
                    int i, j, k;
                    if (g_1304[g_82][g_124][g_192])
                        break;
                    for (g_659 = 1; (g_659 >= 0); g_659 -= 1)
                    {
                        int i, j, k;
                        (**g_228) = (&l_1377[(g_82 + 1)][g_192][g_659] != (*g_227));
                        (*g_310) = (*g_310);
                        (*g_81) ^= g_1304[g_82][(g_82 + 1)][g_82];
                    }
                    (*l_1387) = l_1386;
                    for (g_664 = 0; (g_664 <= 2); g_664 += 1)
                    {
                        int i, j, k;
                        return g_1304[(g_124 + 2)][(g_124 + 2)][(g_124 + 3)];
                    }
                }
                (**g_228) = (&g_228 == (void*)0);
                for (g_1369.f7 = 0; (g_1369.f7 <= 4); g_1369.f7 += 1)
                {
                    int l_1399 = 1L;
                    int l_1400 = 1L;
                    int l_1403 = 0x4B3D298FL;
                    int l_1404 = (-10L);
                    int i, j, k;
                }
            }
        }
        if (g_114)
        {
            char l_1429 = (-1L);
            int *l_1430 = &g_734[4];
            (*l_1430) = (((***g_567) |= 0x7BL) | (((*l_1374) = (safe_add_func_uint32_t_u_u(0x61DCFABCL, (*g_1083)))) || ((g_140.f5.f0++) == (safe_sub_func_uint8_t_u_u(l_1379, (p_20 || (l_1411[0][2][1] != (safe_sub_func_int32_t_s_s((g_1165 != ((safe_mul_func_int8_t_s_s(l_1428, ((0xA8328F47L <= (*g_1083)) ^ l_1429))) < (*g_1083))), p_20)))))))));
        }
        else
        {
            int l_1438 = 0L;
            int l_1439[6][1][3] = {{{0x1A345A03L,0x1A345A03L,0x1A345A03L}},{{0xB19D1833L,0xB19D1833L,0xB19D1833L}},{{0x1A345A03L,0x1A345A03L,0x1A345A03L}},{{0xB19D1833L,0xB19D1833L,0xB19D1833L}},{{0x1A345A03L,0x1A345A03L,0x1A345A03L}},{{0xB19D1833L,0xB19D1833L,0xB19D1833L}}};
            unsigned short l_1441 = 65535UL;
            int l_1444[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1444[i] = 0xF3BCDE8CL;
            for (g_140.f5.f1 = 0; (g_140.f5.f1 <= 7); g_140.f5.f1 += 1)
            {
                int l_1440[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1440[i] = 0x039C8878L;
                (*g_228) = &g_734[g_140.f5.f1];
                if ((l_1431[4][2] = (g_734[g_140.f5.f1] = 0x91915E3BL)))
                {
                    int *l_1432 = &g_82;
                    int *l_1433 = &l_1379;
                    int *l_1434 = &g_734[g_140.f5.f1];
                    int *l_1435 = &l_1380;
                    int *l_1436 = &g_736;
                    int *l_1437[7] = {&l_1375,&g_497,&l_1375,&l_1375,&g_497,&l_1375,&l_1375};
                    int i;
                    --l_1441;
                    for (g_659 = 2; (g_659 <= 7); g_659 += 1)
                    {
                        int i;
                        (**g_227) = &g_734[g_140.f5.f1];
                        return p_18;
                    }
                    return l_1444[0];
                }
                else
                {
                    int l_1464 = 0x20033308L;
                    int l_1465 = (-3L);
                    int l_1466 = 0L;
                    int l_1468 = 5L;
                    int l_1469 = 0L;
                    int l_1470 = 0x2E22E984L;
                    int l_1471 = 7L;
                    int l_1472 = 0xCD9153A4L;
                    int l_1473 = 1L;
                    int l_1474 = 5L;
                    int l_1475 = (-1L);
                    int l_1477 = 7L;
                    int l_1478 = 0xA5BA0877L;
                    int l_1480 = 8L;
                    int l_1481 = 0x8283C94AL;
                    int l_1482 = (-7L);
                    int l_1483 = 0L;
                    int l_1484[2];
                    unsigned short *l_1505 = &g_140.f5.f0;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1484[i] = 0xCDB88804L;
                    if ((**g_228))
                    {
                        int *l_1452 = &l_1411[0][1][1];
                        g_734[g_140.f5.f1] = l_1405;
                        (*l_1452) |= ((~((safe_mod_func_uint16_t_u_u(l_1375, g_736)) & 0x283EDB76L)) != ((safe_div_func_int32_t_s_s((p_18 > p_19), 0x74D80F3DL)) & ((*g_81) = (safe_add_func_uint16_t_u_u(((+g_160) & 6L), (safe_unary_minus_func_int16_t_s(p_18)))))));
                        return (**g_228);
                    }
                    else
                    {
                        int *l_1453 = &g_640;
                        int *l_1454 = &l_1378;
                        int *l_1455 = &l_1438;
                        int l_1456 = 5L;
                        int *l_1457 = &l_1440[3];
                        int *l_1458 = &l_1456;
                        int *l_1459 = &l_1382;
                        int *l_1460 = (void*)0;
                        int *l_1461 = &l_1379;
                        int *l_1462[8][4] = {{&g_734[g_140.f5.f1],&l_1381,&g_734[g_140.f5.f1],&l_1381},{&g_734[g_140.f5.f1],&l_1381,&g_734[g_140.f5.f1],&l_1381},{&g_734[g_140.f5.f1],&l_1381,&g_734[g_140.f5.f1],&l_1381},{&g_734[g_140.f5.f1],&l_1381,&g_734[g_140.f5.f1],&l_1381},{&g_734[g_140.f5.f1],&l_1381,&g_734[g_140.f5.f1],&l_1381},{&g_734[g_140.f5.f1],&l_1381,&g_734[g_140.f5.f1],&l_1381},{&g_734[g_140.f5.f1],&l_1381,&g_734[g_140.f5.f1],&l_1381},{&g_734[g_140.f5.f1],&l_1381,&g_734[g_140.f5.f1],&l_1381}};
                        unsigned l_1485 = 0xF6DC25ABL;
                        char *l_1488 = &g_1369.f6;
                        int i, j;
                        l_1485--;
                        (*l_1461) ^= (((*l_1488) = p_20) | (0x13BFL >= p_20));
                        (**g_228) |= (safe_mul_func_uint8_t_u_u(p_19, l_1440[3]));
                    }
                    l_1478 |= (safe_lshift_func_int8_t_s_s((((*l_1505) = (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(65535UL, 4)) == (safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(p_19, 1)) <= ((*g_1074) ^ p_18)), (safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s(0xACL, p_20)), 15))))), p_18))) < ((safe_div_func_uint32_t_u_u(((((*g_1074) && (-1L)) == p_19) >= (*g_81)), l_1441)) != p_19)), p_19));
                }
            }
            (*g_310) = l_1508;
            return l_1441;
        }
        (*l_1527) ^= (safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((((safe_sub_func_int32_t_s_s(0x9998DA54L, p_20)) || (g_109 >= ((void*)0 == l_1519[2]))) < (safe_div_func_uint32_t_u_u((--(*g_1083)), l_1381))) == p_18), (safe_lshift_func_int16_t_s_u(g_806.f5.f3, l_1411[0][4][2])))), l_1508.f4)), g_1526));
        if (l_1379)
            goto lbl_1528;
    }
    else
    {
        unsigned char l_1533 = 0xDDL;
        char *l_1542 = &g_1173[1].f2;
        int l_1543 = 0x89BB8F0AL;
        l_1543 &= p_19;
        for (g_641 = 2; (g_641 < (-19)); g_641--)
        {
            return g_664;
        }
    }
    (*l_1547) = l_1546;
    return p_19;
}







static short func_42(unsigned p_43, const unsigned char p_44, unsigned p_45)
{
    int l_56 = 0xA2B7F3A4L;
    struct S0 l_57[7] = {{65526UL,0xB2L,0xF7L,0xA1L,0xA89CL,0x68EBBCFAL,0xF8L,0xFCL},{65526UL,0xB2L,0xF7L,0xA1L,0xA89CL,0x68EBBCFAL,0xF8L,0xFCL},{65526UL,0xB2L,0xF7L,0xA1L,0xA89CL,0x68EBBCFAL,0xF8L,0xFCL},{65526UL,0xB2L,0xF7L,0xA1L,0xA89CL,0x68EBBCFAL,0xF8L,0xFCL},{65526UL,0xB2L,0xF7L,0xA1L,0xA89CL,0x68EBBCFAL,0xF8L,0xFCL},{65526UL,0xB2L,0xF7L,0xA1L,0xA89CL,0x68EBBCFAL,0xF8L,0xFCL},{65526UL,0xB2L,0xF7L,0xA1L,0xA89CL,0x68EBBCFAL,0xF8L,0xFCL}};
    int *l_828 = &g_640;
    int l_1108[3];
    unsigned short l_1116 = 1UL;
    int *l_1134 = &g_82;
    unsigned l_1136 = 1UL;
    struct S1 l_1157 = {-3L,0xFE5CL,0UL,0xFDL,0x87C06F65L,{0x284EL,255UL,0xB5L,8L,0x3FA3L,9UL,0x7AL,0xFBL}};
    struct S0 **l_1214 = &g_150;
    int l_1235 = 6L;
    int l_1252 = (-1L);
    char *l_1253 = &l_1157.f5.f2;
    int l_1308 = 0x9B4EC88CL;
    short l_1345[7][9][4] = {{{0xFA14L,0x3A79L,0xC0D3L,0x7F59L},{0L,8L,(-1L),0L},{0x0139L,0L,0x9B6DL,0L},{0L,(-1L),0L,(-1L)},{0L,0x9B6DL,0xBAA8L,0x3A79L},{0x9B6DL,0L,0x0139L,0x876CL},{0x7F59L,0L,(-9L),0x7F59L},{0x7F59L,0L,0x0139L,1L},{0x9B6DL,0x7F59L,0xBAA8L,1L}},{{0L,0L,0L,0L},{0L,(-1L),0x9B6DL,1L},{0x0139L,0x3A79L,(-1L),(-1L)},{0L,0L,0xC0D3L,0L},{0xFA14L,0x571DL,0x9B6DL,0x3A79L},{0xBAA8L,(-1L),0x876CL,0x9B6DL},{0L,(-1L),0x6E6AL,0x3A79L},{(-1L),0x571DL,0x0139L,0L},{(-1L),0L,8L,(-1L)}},{{0x7F59L,0x3A79L,2L,1L},{(-1L),(-1L),0xBAA8L,0L},{0x876CL,0L,0x876CL,1L},{0L,0x7F59L,(-8L),1L},{0xFA14L,0L,(-1L),0x7F59L},{8L,0L,0L,0x6E6AL},{0x571DL,(-1L),0L,0x0139L},{0x4DFCL,(-9L),0x6E6AL,8L},{0x6E6AL,8L,1L,2L}},{{8L,(-1L),0L,0xBAA8L},{0x876CL,7L,7L,0x876CL},{0L,0x0139L,0xA897L,(-8L)},{8L,0x876CL,1L,(-1L)},{0xBAA8L,0L,0x6E6AL,(-1L)},{1L,0x876CL,(-9L),(-8L)},{0x571DL,0x0139L,0L,0x876CL},{0L,7L,0L,0xBAA8L},{0xA897L,(-1L),(-9L),2L}},{{0x4DFCL,8L,0L,8L},{0xBAA8L,(-9L),1L,0x0139L},{(-9L),(-1L),0xA897L,0x6E6AL},{0x876CL,0L,0x3A79L,0x876CL},{0x876CL,2L,0xA897L,0x9B6DL},{(-9L),0x876CL,1L,0xC0D3L},{0xBAA8L,1L,0L,(-1L)},{0x4DFCL,0L,(-9L),0x9B6DL},{0xA897L,0x0139L,0L,0L}},{{0L,0L,0L,0xBAA8L},{0x571DL,2L,(-9L),0x0139L},{2L,(-1L),7L,2L},{0L,(-1L),0xFA14L,(-1L)},{(-1L),0x6E6AL,0L,0L},{(-9L),1L,0L,(-9L)},{8L,(-1L),0L,0x571DL},{(-1L),(-9L),2L,0x9B6DL},{7L,0x4DFCL,7L,(-8L)}},{{0x0139L,8L,0L,0x571DL},{0x876CL,0xC0D3L,(-9L),8L},{0L,1L,(-9L),7L},{0x876CL,0xBAA8L,0L,(-1L)},{0x0139L,2L,7L,(-1L)},{7L,(-1L),2L,0xC0D3L},{(-1L),0xBAA8L,0L,0L},{8L,0L,0L,8L},{(-9L),(-1L),0L,0xA897L}}};
    unsigned l_1346 = 0xDB29CB48L;
    unsigned char **l_1363[8][1];
    struct S0 *l_1368[8] = {(void*)0,(void*)0,&g_1173[0],(void*)0,(void*)0,&g_1173[0],(void*)0,(void*)0};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1108[i] = 0x15C20E96L;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
            l_1363[i][j] = &g_457;
    }
    if ((safe_mod_func_int8_t_s_s((g_53 != (l_56 > l_56)), l_56)))
    {
        short l_829 = 6L;
        int *l_1107 = &g_82;
        int l_1114 = 0x3261C893L;
        int l_1115 = 0x663BBDAEL;
        const struct S1 l_1133[10][7] = {{{-3L,0xD956L,0UL,0x03L,4294967291UL,{0UL,0xB1L,0x6AL,0xB1L,0x2AFCL,0x521E53D2L,0L,0UL}},{0x1036L,0x0E66L,0x7CL,0x7BL,0x2FD4ABC6L,{7UL,0UL,0xE2L,0x73L,4UL,0x9BE70EE8L,0L,1UL}},{0x69E1L,0x90D5L,0x07L,0L,4294967288UL,{0x0E14L,0x13L,8L,9L,0xE6BAL,4UL,2L,0x8CL}},{0x7564L,1UL,255UL,5L,4294967295UL,{0x93E9L,0UL,0x39L,-5L,0x72A2L,4294967295UL,0x91L,1UL}},{0x09C4L,0UL,0x2DL,-7L,4294967295UL,{0x8754L,0x68L,1L,0xA4L,0xE922L,4UL,0L,0xABL}},{0xB57EL,0UL,1UL,0L,0x2B555D1BL,{0x5997L,0x31L,-8L,0L,65533UL,4294967295UL,0L,0UL}},{0xB57EL,0UL,1UL,0L,0x2B555D1BL,{0x5997L,0x31L,-8L,0L,65533UL,4294967295UL,0L,0UL}}},{{0x09C4L,0UL,0x2DL,-7L,4294967295UL,{0x8754L,0x68L,1L,0xA4L,0xE922L,4UL,0L,0xABL}},{0xC951L,0x16F4L,4UL,-9L,0xCCBB8297L,{65530UL,0x4CL,8L,-1L,0x2FFEL,0xEA3274B7L,0L,0xD0L}},{0x1497L,0x39F2L,253UL,-2L,0x82DA1E36L,{0x5275L,0x77L,0x59L,-3L,0xA7D0L,0x62A33D16L,0x3EL,0UL}},{0xC951L,0x16F4L,4UL,-9L,0xCCBB8297L,{65530UL,0x4CL,8L,-1L,0x2FFEL,0xEA3274B7L,0L,0xD0L}},{0x09C4L,0UL,0x2DL,-7L,4294967295UL,{0x8754L,0x68L,1L,0xA4L,0xE922L,4UL,0L,0xABL}},{0L,0xC560L,0x6FL,-1L,6UL,{65535UL,255UL,1L,0L,65535UL,4294967295UL,7L,0xAEL}},{1L,0x97E2L,0x58L,5L,0xEB3A3197L,{65535UL,0UL,1L,0xA9L,1UL,0xA5B81FACL,-6L,246UL}}},{{0xDAB5L,0x2994L,0xABL,0x8EL,0x84A6E1DBL,{0UL,1UL,-5L,1L,0x4037L,0x6922905DL,-1L,1UL}},{0xB57EL,0UL,1UL,0L,0x2B555D1BL,{0x5997L,0x31L,-8L,0L,65533UL,4294967295UL,0L,0UL}},{0x7564L,1UL,255UL,5L,4294967295UL,{0x93E9L,0UL,0x39L,-5L,0x72A2L,4294967295UL,0x91L,1UL}},{1L,0x97E2L,0x58L,5L,0xEB3A3197L,{65535UL,0UL,1L,0xA9L,1UL,0xA5B81FACL,-6L,246UL}},{0x16EFL,0UL,0x2DL,-5L,0UL,{0x6B3EL,0x41L,-6L,9L,9UL,0x9BB52742L,0x94L,4UL}},{0x1305L,65535UL,1UL,0L,0UL,{0x4162L,1UL,0xC4L,1L,65535UL,0xFB08CEC3L,-8L,0x25L}},{0xDAB5L,0x2994L,0xABL,0x8EL,0x84A6E1DBL,{0UL,1UL,-5L,1L,0x4037L,0x6922905DL,-1L,1UL}}},{{0x69E1L,0x90D5L,0x07L,0L,4294967288UL,{0x0E14L,0x13L,8L,9L,0xE6BAL,4UL,2L,0x8CL}},{0xDAB5L,0x2994L,0xABL,0x8EL,0x84A6E1DBL,{0UL,1UL,-5L,1L,0x4037L,0x6922905DL,-1L,1UL}},{0x1305L,65535UL,1UL,0L,0UL,{0x4162L,1UL,0xC4L,1L,65535UL,0xFB08CEC3L,-8L,0x25L}},{5L,65534UL,0x1FL,0x02L,0x03804625L,{0UL,0UL,0xC0L,0xA3L,0xDDCCL,5UL,0x06L,0xE9L}},{0x1305L,65535UL,1UL,0L,0UL,{0x4162L,1UL,0xC4L,1L,65535UL,0xFB08CEC3L,-8L,0x25L}},{0x6E19L,0xECDDL,0xF6L,0L,0x0CAFA9B7L,{1UL,249UL,0x5FL,0x7CL,0x2DFBL,0xE3F551CBL,0xABL,0x37L}},{-6L,1UL,254UL,1L,0x84CA4FB9L,{65532UL,0xEAL,0x54L,0L,6UL,1UL,0x59L,1UL}}},{{0x5874L,0x90E2L,0x2CL,-6L,0x29B80698L,{1UL,0xC5L,0x98L,1L,7UL,0xA834EA70L,-5L,0xDDL}},{0x1305L,65535UL,1UL,0L,0UL,{0x4162L,1UL,0xC4L,1L,65535UL,0xFB08CEC3L,-8L,0x25L}},{0x09C4L,0UL,0x2DL,-7L,4294967295UL,{0x8754L,0x68L,1L,0xA4L,0xE922L,4UL,0L,0xABL}},{0x16EFL,0UL,0x2DL,-5L,0UL,{0x6B3EL,0x41L,-6L,9L,9UL,0x9BB52742L,0x94L,4UL}},{-8L,0x9B58L,247UL,1L,4294967286UL,{0UL,0x32L,0x8FL,1L,65535UL,1UL,0xB5L,7UL}},{0x1036L,0x0E66L,0x7CL,0x7BL,0x2FD4ABC6L,{7UL,0UL,0xE2L,0x73L,4UL,0x9BE70EE8L,0L,1UL}},{-8L,0x9B58L,247UL,1L,4294967286UL,{0UL,0x32L,0x8FL,1L,65535UL,1UL,0xB5L,7UL}}},{{0x16EFL,0UL,0x2DL,-5L,0UL,{0x6B3EL,0x41L,-6L,9L,9UL,0x9BB52742L,0x94L,4UL}},{-6L,1UL,254UL,1L,0x84CA4FB9L,{65532UL,0xEAL,0x54L,0L,6UL,1UL,0x59L,1UL}},{-6L,1UL,254UL,1L,0x84CA4FB9L,{65532UL,0xEAL,0x54L,0L,6UL,1UL,0x59L,1UL}},{0x16EFL,0UL,0x2DL,-5L,0UL,{0x6B3EL,0x41L,-6L,9L,9UL,0x9BB52742L,0x94L,4UL}},{0x6E19L,0xECDDL,0xF6L,0L,0x0CAFA9B7L,{1UL,249UL,0x5FL,0x7CL,0x2DFBL,0xE3F551CBL,0xABL,0x37L}},{0L,0xC560L,0x6FL,-1L,6UL,{65535UL,255UL,1L,0L,65535UL,4294967295UL,7L,0xAEL}},{-1L,0x3733L,0xE0L,0x48L,4294967295UL,{0x1371L,2UL,-3L,0L,0x4629L,0UL,0L,0UL}}},{{0x1497L,0x39F2L,253UL,-2L,0x82DA1E36L,{0x5275L,0x77L,0x59L,-3L,0xA7D0L,0x62A33D16L,0x3EL,0UL}},{-3L,0xD956L,0UL,0x03L,4294967291UL,{0UL,0xB1L,0x6AL,0xB1L,0x2AFCL,0x521E53D2L,0L,0UL}},{0L,0xB522L,0xD4L,-1L,4294967289UL,{0xCAEBL,0xD4L,0L,1L,0x6D6FL,0xA6030652L,0x35L,0UL}},{5L,65534UL,0x1FL,0x02L,0x03804625L,{0UL,0UL,0xC0L,0xA3L,0xDDCCL,5UL,0x06L,0xE9L}},{-3L,0xD956L,0UL,0x03L,4294967291UL,{0UL,0xB1L,0x6AL,0xB1L,0x2AFCL,0x521E53D2L,0L,0UL}},{1L,0x476CL,0x13L,7L,0UL,{0x65BEL,255UL,-1L,1L,65535UL,0x0D504F37L,-10L,255UL}},{0xCDACL,0x1288L,0xC3L,0xD1L,4294967286UL,{65529UL,252UL,0x73L,0xF5L,0x202EL,0UL,0xC9L,8UL}}},{{-8L,0x9B58L,247UL,1L,4294967286UL,{0UL,0x32L,0x8FL,1L,65535UL,1UL,0xB5L,7UL}},{0x7564L,1UL,255UL,5L,4294967295UL,{0x93E9L,0UL,0x39L,-5L,0x72A2L,4294967295UL,0x91L,1UL}},{0x1036L,0x0E66L,0x7CL,0x7BL,0x2FD4ABC6L,{7UL,0UL,0xE2L,0x73L,4UL,0x9BE70EE8L,0L,1UL}},{0x1305L,65535UL,1UL,0L,0UL,{0x4162L,1UL,0xC4L,1L,65535UL,0xFB08CEC3L,-8L,0x25L}},{0xB57EL,0UL,1UL,0L,0x2B555D1BL,{0x5997L,0x31L,-8L,0L,65533UL,4294967295UL,0L,0UL}},{0x1036L,0x0E66L,0x7CL,0x7BL,0x2FD4ABC6L,{7UL,0UL,0xE2L,0x73L,4UL,0x9BE70EE8L,0L,1UL}},{-1L,0x3733L,0xE0L,0x48L,4294967295UL,{0x1371L,2UL,-3L,0L,0x4629L,0UL,0L,0UL}}},{{0x69E1L,0x90D5L,0x07L,0L,4294967288UL,{0x0E14L,0x13L,8L,9L,0xE6BAL,4UL,2L,0x8CL}},{0xCDACL,0x1288L,0xC3L,0xD1L,4294967286UL,{65529UL,252UL,0x73L,0xF5L,0x202EL,0UL,0xC9L,8UL}},{0x1497L,0x39F2L,253UL,-2L,0x82DA1E36L,{0x5275L,0x77L,0x59L,-3L,0xA7D0L,0x62A33D16L,0x3EL,0UL}},{-8L,0x9B58L,247UL,1L,4294967286UL,{0UL,0x32L,0x8FL,1L,65535UL,1UL,0xB5L,7UL}},{5L,65534UL,0x1FL,0x02L,0x03804625L,{0UL,0UL,0xC0L,0xA3L,0xDDCCL,5UL,0x06L,0xE9L}},{5L,65534UL,0x1FL,0x02L,0x03804625L,{0UL,0UL,0xC0L,0xA3L,0xDDCCL,5UL,0x06L,0xE9L}},{-8L,0x9B58L,247UL,1L,4294967286UL,{0UL,0x32L,0x8FL,1L,65535UL,1UL,0xB5L,7UL}}},{{0x1497L,0x39F2L,253UL,-2L,0x82DA1E36L,{0x5275L,0x77L,0x59L,-3L,0xA7D0L,0x62A33D16L,0x3EL,0UL}},{0x16EFL,0UL,0x2DL,-5L,0UL,{0x6B3EL,0x41L,-6L,9L,9UL,0x9BB52742L,0x94L,4UL}},{0x1497L,0x39F2L,253UL,-2L,0x82DA1E36L,{0x5275L,0x77L,0x59L,-3L,0xA7D0L,0x62A33D16L,0x3EL,0UL}},{0x6E19L,0xECDDL,0xF6L,0L,0x0CAFA9B7L,{1UL,249UL,0x5FL,0x7CL,0x2DFBL,0xE3F551CBL,0xABL,0x37L}},{0x7564L,1UL,255UL,5L,4294967295UL,{0x93E9L,0UL,0x39L,-5L,0x72A2L,4294967295UL,0x91L,1UL}},{1L,7UL,5UL,0xC0L,0xCEF084C7L,{0UL,0UL,0L,0x93L,5UL,2UL,1L,2UL}},{-6L,1UL,254UL,1L,0x84CA4FB9L,{65532UL,0xEAL,0x54L,0L,6UL,1UL,0x59L,1UL}}}};
        int *l_1135 = &g_497;
        char l_1137 = 0x0DL;
        int i, j;
        for (p_45 = 1; (p_45 <= 6); p_45 += 1)
        {
            int *l_58[2];
            int l_1102 = 0x231448A3L;
            int i;
            for (i = 0; i < 2; i++)
                l_58[i] = &g_2[7][1];
            for (p_43 = 0; (p_43 <= 6); p_43 += 1)
            {
                int * const *l_69 = &l_58[0];
                int *l_832 = (void*)0;
                unsigned l_1093[10] = {1UL,1UL,0xCACBCB43L,1UL,1UL,0xCACBCB43L,1UL,1UL,0xCACBCB43L,1UL};
                int l_1109 = (-1L);
                int l_1110 = 0xED7F45EAL;
                int l_1111 = 0x7035980FL;
                int l_1112 = (-1L);
                int l_1113 = 0x0FE9165DL;
                int i;
                for (l_56 = 0; (l_56 <= 6); l_56 += 1)
                {
                    int **l_59 = &l_58[1];
                    unsigned char ***l_1092 = (void*)0;
                    unsigned short *l_1097[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1097[i] = &g_140.f5.f4;
                    (*l_59) = l_58[1];
                    for (g_53 = 6; (g_53 >= 0); g_53 -= 1)
                    {
                        unsigned *l_830 = &g_770;
                        unsigned *l_831 = &g_738;
                        unsigned char *l_833 = &g_834;
                        int *l_1089 = &g_734[5];
                        l_1089 = func_60((((*l_831) = ((*l_830) ^= (safe_div_func_int32_t_s_s((&g_2[4][0] == ((*l_59) = (l_828 = func_67(l_69)))), l_829)))) >= l_829), l_832, ((*l_833)--), g_806);
                        g_82 = (safe_sub_func_int16_t_s_s((&g_568[0] != l_1092), p_43));
                        return l_829;
                    }
                }
                if ((+(***g_227)))
                {
                    (**g_227) = l_1107;
                }
                else
                {
                    for (g_124 = 6; (g_124 >= 0); g_124 -= 1)
                    {
                        (*g_81) = (*l_1107);
                    }
                }
                l_1116--;
                for (g_736 = 0; (g_736 <= 6); g_736 += 1)
                {
                    for (l_1109 = 6; (l_1109 >= 2); l_1109 -= 1)
                    {
                        short *l_1121 = &g_393;
                        (*l_828) = (safe_sub_func_int16_t_s_s(0L, ((*l_1121) = (p_44 ^ p_44))));
                    }
                    (*g_228) = (**g_227);
                    if (((p_45 < (**g_1073)) || p_43))
                    {
                        short l_1122 = 0x797BL;
                        return l_1122;
                    }
                    else
                    {
                        (*g_81) = (p_44 >= p_43);
                        (*l_828) ^= (**g_228);
                    }
                }
            }
            (*l_1107) &= (safe_mul_func_int16_t_s_s(p_44, (*l_828)));
            (**g_228) = (~((*l_828) &= (*l_1107)));
        }
        (**g_228) = (safe_div_func_uint16_t_u_u(((*l_828) < ((safe_div_func_uint32_t_u_u(((*l_1107) && ((((*g_1074) != (((*l_1135) ^= ((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((&g_150 == (void*)0), (*l_1107))), 0x8CL)) && ((l_1134 = (*g_228)) != l_1135))) == p_44)) >= 0x161B6A3CL) < l_1136)), (-10L))) <= (*l_828))), (*l_828)));
        return l_1137;
    }
    else
    {
        unsigned l_1138 = 0xB5ED2876L;
        int l_1142[4] = {0L,0L,0L,0L};
        char l_1146 = 1L;
        unsigned *l_1170[3];
        struct S0 l_1172 = {0x1615L,0xBBL,0xC6L,0x6DL,0UL,5UL,1L,0x5FL};
        int l_1223 = 0L;
        unsigned short l_1224 = 0x2437L;
        int i;
        for (i = 0; i < 3; i++)
            l_1170[i] = &g_114;
        ++l_1138;
        if ((**g_228))
        {
            unsigned l_1141[7][10] = {{0x4FB2AB91L,1UL,1UL,0x4FB2AB91L,1UL,0x4FB2AB91L,1UL,1UL,0x4FB2AB91L,1UL},{0x4FB2AB91L,1UL,1UL,0x4FB2AB91L,1UL,0x4FB2AB91L,1UL,1UL,0x4FB2AB91L,1UL},{0x4FB2AB91L,1UL,1UL,0x4FB2AB91L,1UL,0x4FB2AB91L,1UL,1UL,0x4FB2AB91L,1UL},{0x4FB2AB91L,1UL,1UL,0x4FB2AB91L,1UL,1UL,8UL,8UL,1UL,1UL},{1UL,8UL,8UL,1UL,1UL,1UL,8UL,8UL,1UL,1UL},{1UL,8UL,8UL,1UL,1UL,1UL,8UL,8UL,1UL,1UL},{1UL,8UL,8UL,1UL,1UL,1UL,8UL,8UL,1UL,1UL}};
            int i, j;
            (*g_228) = (void*)0;
            (*l_1134) &= (l_1142[3] = l_1141[4][5]);
            (*l_828) = (l_1142[3] = p_43);
            (**g_227) = (**g_227);
        }
        else
        {
            int *l_1143 = (void*)0;
            int *l_1144 = &l_1108[2];
            int *l_1145 = &g_82;
            int *l_1147 = &l_1108[2];
            int *l_1148 = &g_82;
            int *l_1149 = (void*)0;
            int *l_1150 = &l_1108[2];
            int *l_1151 = &g_82;
            int *l_1152[4] = {&g_497,&g_497,&g_497,&g_497};
            int l_1153 = 1L;
            int i;
            --g_1154[1];
            (*g_310) = l_1157;
        }
        for (p_45 = 12; (p_45 <= 54); p_45 = safe_add_func_uint32_t_u_u(p_45, 7))
        {
            char l_1160 = 9L;
            int l_1185[7][6] = {{(-8L),0x3230C596L,0x0162EA06L,0x0162EA06L,0x3230C596L,(-8L)},{0x82B1D3C1L,(-8L),0x1D0D54BCL,0x3230C596L,0x1D0D54BCL,(-8L)},{0x1D0D54BCL,0x82B1D3C1L,0x0162EA06L,(-1L),(-1L),0x0162EA06L},{0x1D0D54BCL,0x1D0D54BCL,(-1L),0x3230C596L,0xACA2173DL,0x3230C596L},{0x82B1D3C1L,0x1D0D54BCL,0x82B1D3C1L,0x0162EA06L,(-1L),(-1L)},{(-8L),0x82B1D3C1L,0x82B1D3C1L,(-8L),0x1D0D54BCL,0x3230C596L},{0x3230C596L,(-8L),(-1L),(-8L),0x3230C596L,0x0162EA06L}};
            int l_1187 = 0L;
            char l_1195[4][2];
            int l_1197[5];
            char l_1200 = (-1L);
            const int l_1219 = 0x48BF513EL;
            int **l_1230[2];
            struct S0 l_1231 = {0xEEA3L,1UL,0xEEL,0x95L,65534UL,0x0079C9F2L,-5L,255UL};
            int l_1310[5];
            short *l_1344 = &g_109;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1195[i][j] = 0L;
            }
            for (i = 0; i < 5; i++)
                l_1197[i] = (-2L);
            for (i = 0; i < 2; i++)
                l_1230[i] = &g_81;
            for (i = 0; i < 5; i++)
                l_1310[i] = 1L;
        }
        if ((safe_lshift_func_int8_t_s_s((**g_1073), (l_1172.f2 ^ 1L))))
        {
            for (g_140.f5.f2 = 10; (g_140.f5.f2 > (-5)); --g_140.f5.f2)
            {
                if (p_43)
                {
                    return p_45;
                }
                else
                {
                    struct S0 l_1355 = {9UL,0x45L,0xB7L,-3L,0x43B7L,0x6B0D5208L,-1L,0UL};
                    l_1355 = l_1355;
                    for (g_160 = 0; g_160 < 1; g_160 += 1)
                    {
                        g_568[g_160] = &g_457;
                    }
                    if (p_45)
                        continue;
                }
                for (l_1157.f2 = (-28); (l_1157.f2 >= 40); ++l_1157.f2)
                {
                    for (g_641 = 0; g_641 < 3; g_641 += 1)
                    {
                        l_1108[g_641] = 0x7132D81AL;
                    }
                    (*l_1134) = p_45;
                }
                (*l_828) = 0xE51A170EL;
                (*l_828) = 4L;
            }
        }
        else
        {
            (*g_228) = (**g_227);
        }
    }
    (*g_228) = &l_1308;
    g_1369 = (g_1173[1] = (g_140.f5 = func_72((**g_1082), (((((safe_mod_func_int16_t_s_s(0xBFC0L, ((-1L) || (((safe_unary_minus_func_int8_t_s((((*l_828) & (safe_rshift_func_uint8_t_u_s((&g_112 == &g_109), ((void*)0 != l_1363[2][0])))) == ((safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s((((-2L) != 0xEF7AF54FL) != p_44), 0x41006B2AL)) && (*l_1134)), (*l_828))) & p_44)))) ^ p_43) ^ (*l_1134))))) > 1UL) ^ (*g_1074)) ^ 0x95330900L) >= 0xA3L), &l_828)));
    return g_140.f5.f0;
}







static int * func_60(short p_61, int * p_62, unsigned char p_63, const struct S1 p_64)
{
    unsigned short l_839 = 2UL;
    short l_842 = 0xA48FL;
    int l_848 = 0x6AAEB244L;
    short *l_849 = &g_109;
    short l_923 = 0xE12FL;
    int l_932 = (-1L);
    int l_933[2];
    unsigned char l_975 = 0UL;
    char *l_1006[9][3] = {{(void*)0,&g_124,&g_124},{&g_124,&g_140.f5.f6,&g_124},{(void*)0,(void*)0,&g_124},{&g_659,&g_140.f5.f6,&g_659},{(void*)0,&g_124,&g_124},{&g_124,&g_140.f5.f6,&g_124},{(void*)0,(void*)0,&g_124},{&g_659,&g_140.f5.f6,&g_659},{(void*)0,&g_124,&g_124}};
    int l_1008 = 0xDD1B78C2L;
    unsigned char l_1014[4][8] = {{0x10L,0x09L,0x10L,0xE3L,0x23L,0xF6L,249UL,249UL},{249UL,0xD6L,0x61L,0x61L,0xD6L,249UL,0x23L,0xC0L},{249UL,0xDBL,0x92L,0xD6L,0x23L,0xD6L,0x92L,0xDBL},{0x10L,0x92L,0xF6L,0xD6L,0xC0L,0xE3L,0xE3L,0xC0L}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_933[i] = 0x8594BD9BL;
    if (((p_61 <= (safe_add_func_uint16_t_u_u(l_839, g_770))) | ((safe_rshift_func_uint16_t_u_s(l_839, p_64.f4)) > l_842)))
    {
        unsigned short *l_847[6] = {&g_147[6][6][0],&g_147[6][6][0],&g_147[6][6][0],&g_147[6][6][0],&g_147[6][6][0],&g_147[6][6][0]};
        struct S0 l_851[8] = {{0UL,0xB4L,-1L,0x7AL,65535UL,1UL,-1L,255UL},{0UL,0xB4L,-1L,0x7AL,65535UL,1UL,-1L,255UL},{0UL,0xB4L,-1L,0x7AL,65535UL,1UL,-1L,255UL},{0UL,0xB4L,-1L,0x7AL,65535UL,1UL,-1L,255UL},{0UL,0xB4L,-1L,0x7AL,65535UL,1UL,-1L,255UL},{0UL,0xB4L,-1L,0x7AL,65535UL,1UL,-1L,255UL},{0UL,0xB4L,-1L,0x7AL,65535UL,1UL,-1L,255UL},{0UL,0xB4L,-1L,0x7AL,65535UL,1UL,-1L,255UL}};
        int l_890 = 0x1D29C45CL;
        unsigned char l_897 = 2UL;
        int l_916 = 0xDB35B804L;
        int *l_937[8][3] = {{&g_82,&l_916,&g_82},{&g_734[4],&g_82,&g_82},{(void*)0,&l_916,(void*)0},{&g_734[4],&g_734[4],&g_82},{&g_82,&l_916,&g_82},{&g_734[4],&g_82,&g_82},{(void*)0,&l_916,(void*)0},{&g_734[4],&g_734[4],&g_82}};
        unsigned l_954 = 4294967287UL;
        unsigned l_999 = 1UL;
        unsigned char ***l_1033 = &g_568[0];
        struct S1 * const *l_1045 = &g_310;
        unsigned *l_1048 = &g_95[0];
        int i, j;
    }
    else
    {
        unsigned l_1061[8][1][2] = {{{0xA9F729CFL,0x6C424911L}},{{1UL,0x6C424911L}},{{0xA9F729CFL,0x6C424911L}},{{1UL,0x6C424911L}},{{0xA9F729CFL,0x6C424911L}},{{1UL,0x6C424911L}},{{0xA9F729CFL,0x6C424911L}},{{1UL,0x6C424911L}}};
        int *l_1065 = &l_848;
        struct S0 * const l_1067 = &g_140.f5;
        int l_1076 = 0x868372FFL;
        unsigned **l_1085[4][4];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                l_1085[i][j] = &g_1083;
        }
        for (g_159 = 0; (g_159 != 23); ++g_159)
        {
            int *l_1052 = &l_932;
            int *l_1053 = &g_82;
            int *l_1054 = &g_640;
            int *l_1055 = &l_848;
            int *l_1056 = (void*)0;
            int *l_1057 = (void*)0;
            int *l_1058 = &g_89;
            int *l_1059 = (void*)0;
            int *l_1060[9][4][7] = {{{(void*)0,&g_2[7][1],&l_848,&g_2[7][1],(void*)0,&g_2[7][1],&l_933[1]},{&l_933[1],&g_640,&g_734[2],&g_2[7][1],&g_2[7][1],&l_848,&l_933[1]},{(void*)0,(void*)0,&g_734[4],(void*)0,&g_2[7][1],&g_2[0][0],&g_89},{&l_933[1],&g_2[7][1],&g_497,&l_848,&l_933[1],&l_932,&l_848}},{{(void*)0,(void*)0,&l_933[1],&l_932,&g_2[7][1],(void*)0,&g_734[4]},{&l_848,&l_933[1],&g_2[7][1],(void*)0,&g_2[7][1],(void*)0,&g_2[7][1]},{&g_2[7][1],&g_2[7][1],&l_848,&l_932,&g_734[4],&l_932,&l_933[1]},{&l_848,&g_734[2],&g_2[1][3],&g_640,&g_640,&g_2[1][3],(void*)0}},{{&g_734[4],&g_89,&g_2[7][1],&l_933[1],&g_734[4],&g_2[0][0],&g_82},{&l_933[1],&g_497,&l_933[1],(void*)0,&g_2[7][1],&g_89,&l_933[1]},{&l_932,&g_2[0][0],&g_2[7][1],(void*)0,&g_2[7][1],&g_640,(void*)0},{&g_734[2],&l_933[1],&g_640,&g_640,&l_933[1],&g_734[2],&l_932}},{{&l_933[1],&g_640,&g_2[5][0],&l_932,&g_2[7][1],&g_734[4],&g_2[7][1]},{&l_933[1],&g_734[5],&g_497,&g_736,&l_933[1],&g_734[2],&g_2[7][1]},{&l_933[0],&g_2[0][0],&l_848,&g_89,&g_82,&g_736,&g_2[7][1]},{&g_2[7][1],&g_82,&l_933[1],&g_2[7][1],&g_736,&l_933[1],&l_848}},{{(void*)0,&g_89,&g_2[7][1],&g_2[7][1],&g_2[7][1],&g_2[7][1],&g_2[7][1]},{&l_933[1],&g_2[7][1],&l_933[1],&l_932,&l_933[0],&g_82,&g_89},{&l_933[1],(void*)0,&l_932,&g_89,&l_933[1],&g_734[4],&g_82},{&l_933[0],&l_933[1],&g_734[5],&g_640,&g_89,&g_82,&g_2[7][1]}},{{&l_932,&l_932,&g_2[7][1],(void*)0,&g_2[0][0],&g_2[7][1],&l_848},{&g_82,&g_2[3][1],&g_2[7][1],&l_932,&g_734[2],&l_933[1],&g_640},{&g_640,&g_736,&l_848,&l_932,&l_848,&g_736,&g_640},{&g_82,&g_2[1][3],&g_89,&l_933[1],&l_933[0],&g_734[2],&g_734[4]}},{{&l_932,&g_640,&l_932,&g_2[0][0],&g_640,&g_89,(void*)0},{&g_2[7][1],&g_82,&g_89,&g_640,&g_734[5],&l_933[1],&l_933[0]},{&g_2[7][1],&g_89,&l_848,&g_2[7][1],&g_82,&g_2[5][0],&g_2[7][1]},{&g_2[7][1],&g_2[1][3],&l_933[1],&g_82,&g_640,&l_848,&g_640}},{{&g_2[7][1],(void*)0,(void*)0,&g_2[7][1],&l_933[0],&g_2[7][1],&l_933[1]},{&g_2[7][1],&g_82,&g_89,&g_89,&g_2[3][1],&g_734[2],&g_89},{(void*)0,&g_82,&g_640,&g_640,&l_933[1],(void*)0,&l_933[1]},{&l_932,&l_933[1],&g_82,&l_848,&g_734[5],&g_89,&g_640}},{{&l_848,&l_933[1],&l_933[0],(void*)0,&l_932,&g_89,&g_2[7][1]},{&g_2[7][1],(void*)0,&l_848,&g_2[1][3],&g_2[1][3],&l_848,(void*)0},{(void*)0,&g_2[5][0],&l_848,(void*)0,&l_848,&g_2[7][1],&g_2[0][0]},{&g_734[2],&l_932,&g_734[5],&g_497,&g_736,&l_933[1],&g_734[2]}}};
            unsigned l_1064 = 9UL;
            int i, j, k;
            ++l_1061[4][0][0];
            if ((p_64.f4 <= p_64.f1))
            {
                (*l_1053) = (g_140.f3 & l_1064);
                (*g_228) = l_1065;
            }
            else
            {
                int l_1066[7] = {0xB91A5628L,0xB91A5628L,0xB91A5628L,0xB91A5628L,0xB91A5628L,0xB91A5628L,0xB91A5628L};
                struct S0 **l_1068 = &g_150;
                const char *l_1070[3];
                const char **l_1069[4][7] = {{&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2]},{&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2]},{&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2]},{&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2],&l_1070[2]}};
                const char ***l_1071 = (void*)0;
                const char ***l_1072 = (void*)0;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1070[i] = (void*)0;
                if (l_1066[4])
                    break;
                (*l_1068) = l_1067;
                g_1073 = l_1069[2][0];
            }
            for (g_794 = 1; (g_794 >= 0); g_794 -= 1)
            {
                int l_1075 = 0x152ADFA5L;
                unsigned l_1077 = 5UL;
                l_1077++;
                for (g_659 = 0; (g_659 <= 1); g_659 += 1)
                {
                    return l_1056;
                }
                for (g_570 = 0; (g_570 <= 1); g_570 += 1)
                {
                    int i, j, k;
                    (*g_310) = (*g_310);
                    if (g_147[(g_794 + 4)][(g_794 + 2)][g_794])
                    {
                        struct S0 **l_1081 = (void*)0;
                        struct S0 ***l_1080 = &l_1081;
                        (*l_1080) = &g_150;
                    }
                    else
                    {
                        unsigned ***l_1084[9];
                        int **l_1086 = (void*)0;
                        int **l_1087 = &l_1065;
                        int **l_1088 = &l_1056;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1084[i] = (void*)0;
                        l_1085[3][2] = (g_1082 = g_1082);
                        (*l_1088) = ((*l_1087) = ((*g_228) = &l_1076));
                        return p_62;
                    }
                    (**g_227) = p_62;
                }
            }
            if ((*l_1065))
                continue;
        }
        l_1065 = func_67(func_70(p_64.f5));
    }
    return (**g_227);
}







static int * func_67(int * const * p_68)
{
    unsigned l_76[5][7][7] = {{{0x0B3FD2CFL,4294967295UL,0UL,0UL,4294967295UL,0x0B3FD2CFL,0xDD4AC9C9L},{0x5DA63383L,0xBA6EED5AL,0xCF4EE93DL,0x0BCF6136L,0x4D92DB27L,0xCF4EE93DL,4294967289UL},{4294967295UL,0xDD4AC9C9L,0x1C1FAE94L,1UL,0UL,0x645EBEAAL,1UL},{0x0B3FD2CFL,0xBA6EED5AL,0x9F6D150EL,8UL,0UL,4294967295UL,4294967295UL},{0UL,4294967295UL,0xCF4EE93DL,4294967295UL,0UL,4294967289UL,0x4D92DB27L},{0x8E47B431L,4294967295UL,8UL,0x4D92DB27L,0UL,0xDD4AC9C9L,0x8E47B431L},{0x9F6D150EL,0x8E47B431L,0xDD4AC9C9L,0UL,0x4D92DB27L,8UL,4294967295UL}},{{0x8E47B431L,0x4D92DB27L,4294967289UL,0UL,4294967295UL,0xCF4EE93DL,4294967295UL},{0UL,4294967295UL,4294967295UL,0UL,8UL,0x9F6D150EL,0xBA6EED5AL},{0x0B3FD2CFL,1UL,0x645EBEAAL,0UL,1UL,0x1C1FAE94L,0xDD4AC9C9L},{4294967295UL,4294967289UL,0xCF4EE93DL,0x4D92DB27L,0x0BCF6136L,0xCF4EE93DL,0xBA6EED5AL},{0x5DA63383L,0xDD4AC9C9L,0x0B3FD2CFL,4294967295UL,0UL,0UL,4294967295UL},{0x0B3FD2CFL,0UL,0x0B3FD2CFL,8UL,4294967289UL,4294967292UL,4294967295UL},{0x0BCF6136L,4294967289UL,0x847A0C8EL,0UL,0x4D92DB27L,0xDABD80E4L,0x5DA63383L}},{{1UL,0x1C1FAE94L,0xDD4AC9C9L,4294967295UL,4294967292UL,0x9F6D150EL,1UL},{8UL,4294967295UL,0x1C1FAE94L,4294967292UL,0x5DA63383L,4294967292UL,0x1C1FAE94L},{4294967295UL,4294967295UL,0xDABD80E4L,0x0BCF6136L,4294967289UL,0x847A0C8EL,0UL},{0x4D92DB27L,0x1C1FAE94L,0x0B3FD2CFL,0x4D92DB27L,4294967295UL,0x645EBEAAL,0x0BCF6136L},{0UL,4294967289UL,4294967295UL,4294967292UL,4294967289UL,8UL,0x0B3FD2CFL},{0UL,0x8E47B431L,0x847A0C8EL,0x5DA63383L,0x5DA63383L,0x847A0C8EL,0x8E47B431L},{0UL,0x0B3FD2CFL,8UL,4294967289UL,4294967292UL,4294967295UL,4294967289UL}},{{0UL,0x0BCF6136L,0x645EBEAAL,4294967295UL,0x4D92DB27L,0x0B3FD2CFL,0x1C1FAE94L},{0x4D92DB27L,0UL,0x847A0C8EL,4294967289UL,0x0BCF6136L,0xDABD80E4L,4294967295UL},{4294967295UL,0x1C1FAE94L,4294967292UL,0x5DA63383L,4294967292UL,0x1C1FAE94L,4294967295UL},{8UL,1UL,0x9F6D150EL,4294967292UL,4294967295UL,0xDD4AC9C9L,0x1C1FAE94L},{1UL,0x5DA63383L,0xDABD80E4L,0x4D92DB27L,0UL,0x847A0C8EL,4294967289UL},{0x0BCF6136L,0x1C1FAE94L,0x9F6D150EL,0x0BCF6136L,0xAD0BAEE1L,0x847A0C8EL,4294967292UL},{0x847A0C8EL,0x645EBEAAL,0x6C131537L,0x6C131537L,0x645EBEAAL,0x847A0C8EL,0xCF4EE93DL}},{{8UL,0xDD4AC9C9L,0x4D92DB27L,0x1C1FAE94L,0x0B3FD2CFL,0x4D92DB27L,4294967295UL},{0x645EBEAAL,0xCF4EE93DL,1UL,0UL,0x6C131537L,0x3C997210L,0UL},{0x847A0C8EL,0xDD4AC9C9L,0xDABD80E4L,0xAD0BAEE1L,4294967292UL,4294967288UL,4294967288UL},{4294967292UL,0x645EBEAAL,0x4D92DB27L,0x645EBEAAL,4294967292UL,0x8E47B431L,0x0B3FD2CFL},{0x9F6D150EL,4294967288UL,0xAD0BAEE1L,0x0B3FD2CFL,0x6C131537L,0xCF4EE93DL,0x9F6D150EL},{0xDABD80E4L,0x9F6D150EL,0xCF4EE93DL,0x6C131537L,0x0B3FD2CFL,0xAD0BAEE1L,4294967288UL},{0x9F6D150EL,0x0B3FD2CFL,0x8E47B431L,4294967292UL,0x645EBEAAL,0x4D92DB27L,0x645EBEAAL}}};
    int *l_80[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_80[i] = &g_2[7][1];
    (*g_227) = func_70(func_72(g_53, l_76[0][6][5], func_77((g_81 = l_80[3]), l_80[3])));
    return l_80[4];
}







static int ** func_70(struct S0 p_71)
{
    short l_713 = 0x5415L;
    int *l_714 = &g_640;
    int l_715 = 0xACDA1D16L;
    int *l_716 = &l_715;
    int l_717 = 0xA126435AL;
    int *l_718 = &g_89;
    int *l_719 = &g_89;
    int *l_720 = &g_497;
    int *l_721 = (void*)0;
    int l_722 = 0x3BCDA63FL;
    int *l_723 = (void*)0;
    int *l_724[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned char l_725 = 247UL;
    int l_737 = (-1L);
    struct S0 *l_749 = (void*)0;
    unsigned short l_800 = 0x6610L;
    struct S1 *l_803 = &g_140;
    const struct S1 *l_805 = &g_806;
    unsigned **l_813 = (void*)0;
    unsigned char l_815[2][9][10] = {{{0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L},{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL},{0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L},{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL},{0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L},{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL}},{{0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L},{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL},{0xB4L,1UL,1UL,1UL,0xB4L,1UL,1UL,0xB4L,1UL,1UL},{0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L},{0xB4L,1UL,1UL,0xB4L,1UL,1UL,0xB4L,1UL,1UL,0xB4L},{1UL,0xB4L,1UL,1UL,0xB4L,1UL,1UL,0xB4L,1UL,1UL},{0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L,0xB4L,1UL,0xB4L},{0xB4L,1UL,1UL,0xB4L,1UL,1UL,0xB4L,1UL,1UL,0xB4L}}};
    int i, j, k;
    l_725++;
    if (((*l_716) ^= p_71.f0))
    {
        char l_728 = 0x63L;
        int l_729 = (-3L);
        int l_730[5][10] = {{4L,0x566EB00BL,(-9L),0x566EB00BL,4L,0x566EB00BL,(-9L),0x566EB00BL,4L,0x566EB00BL},{1L,0x566EB00BL,1L,0x14BFC3CEL,1L,0x566EB00BL,1L,0x14BFC3CEL,1L,0x566EB00BL},{4L,0x14BFC3CEL,(-9L),0x14BFC3CEL,4L,0x14BFC3CEL,(-9L),0x14BFC3CEL,4L,0x14BFC3CEL},{1L,0x14BFC3CEL,1L,0x566EB00BL,1L,0x14BFC3CEL,1L,0x566EB00BL,1L,0x14BFC3CEL},{4L,0x566EB00BL,(-9L),0x566EB00BL,4L,0x566EB00BL,(-9L),0x566EB00BL,4L,0x566EB00BL}};
        unsigned l_731[1];
        int l_735 = 0x7DC764D9L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_731[i] = 4294967295UL;
        l_731[0]--;
        --g_738;
    }
    else
    {
        int *l_751 = &g_82;
        short l_755[7][3] = {{0xE345L,0xE345L,0xE345L},{0xC26EL,0xC26EL,0xC26EL},{0xE345L,0xE345L,0xE345L},{0xC26EL,0xC26EL,0xC26EL},{0xE345L,0xE345L,0xE345L},{0xC26EL,0xC26EL,0xC26EL},{0xE345L,0xE345L,0xE345L}};
        int l_757 = 0L;
        int l_759 = (-6L);
        int l_764 = (-4L);
        int l_769 = 2L;
        int i, j;
        for (g_82 = 0; (g_82 <= 0); g_82 += 1)
        {
            const short *l_747[6][3][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            const short **l_746 = &l_747[3][1][1];
            const short ***l_745[6][2][9] = {{{&l_746,&l_746,(void*)0,&l_746,&l_746,&l_746,&l_746,(void*)0,&l_746},{&l_746,&l_746,(void*)0,(void*)0,(void*)0,&l_746,&l_746,&l_746,(void*)0}},{{&l_746,(void*)0,(void*)0,&l_746,&l_746,(void*)0,&l_746,&l_746,&l_746},{&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,&l_746}},{{&l_746,&l_746,(void*)0,(void*)0,&l_746,&l_746,(void*)0,(void*)0,&l_746},{(void*)0,&l_746,(void*)0,&l_746,(void*)0,&l_746,(void*)0,&l_746,(void*)0}},{{&l_746,(void*)0,(void*)0,&l_746,&l_746,(void*)0,(void*)0,&l_746,&l_746},{&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,&l_746}},{{&l_746,&l_746,(void*)0,(void*)0,&l_746,&l_746,(void*)0,(void*)0,&l_746},{(void*)0,&l_746,(void*)0,&l_746,(void*)0,&l_746,(void*)0,&l_746,(void*)0}},{{&l_746,(void*)0,(void*)0,&l_746,&l_746,(void*)0,(void*)0,&l_746,&l_746},{&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,&l_746}}};
            int l_761 = 0x7B33763FL;
            int l_768[2][7][4] = {{{0x4103BD1CL,(-1L),0xF0847590L,0xF0847590L},{0x922B8333L,0x922B8333L,(-1L),(-1L)},{(-1L),0x4103BD1CL,(-1L),0x4103BD1CL},{0x922B8333L,0x4103BD1CL,(-1L),0xF0847590L},{0xA9AFE82AL,0x4103BD1CL,0x4103BD1CL,0xA9AFE82AL},{0x4103BD1CL,0xA9AFE82AL,(-1L),0x97C717C6L},{0x4103BD1CL,(-1L),0x4103BD1CL,(-1L)}},{{0xA9AFE82AL,0x97C717C6L,(-1L),(-1L)},{(-1L),(-1L),0xF0847590L,0x97C717C6L},{0x97C717C6L,0xA9AFE82AL,0xF0847590L,0xA9AFE82AL},{(-1L),0x4103BD1CL,(-1L),0xF0847590L},{0xA9AFE82AL,0x4103BD1CL,0x4103BD1CL,0xA9AFE82AL},{0x4103BD1CL,0xA9AFE82AL,(-1L),0x97C717C6L},{0x4103BD1CL,(-1L),0x4103BD1CL,(-1L)}}};
            const struct S1 **l_804[3];
            int **l_827 = (void*)0;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_804[i] = (void*)0;
            for (g_236 = 0; (g_236 <= 7); g_236 += 1)
            {
                unsigned short *l_748 = &g_147[6][8][1];
                unsigned l_752 = 4294967295UL;
                int l_762[9] = {0x5921EEF5L,0x5921EEF5L,0x5921EEF5L,0x5921EEF5L,0x5921EEF5L,0x5921EEF5L,0x5921EEF5L,0x5921EEF5L,0x5921EEF5L};
                int **l_773 = &l_714;
                unsigned char l_787 = 0xDCL;
                unsigned l_795 = 0xAAEBE736L;
                int i;
            }
        }
        (**g_227) = (**g_227);
    }
    return (*g_227);
}







static struct S0 func_72(unsigned p_73, unsigned short p_74, int ** p_75)
{
    int l_342 = 0L;
    char *l_343 = &g_140.f5.f2;
    int l_368 = 0x690D6E4BL;
    int l_372 = (-2L);
    int l_391 = 0L;
    unsigned l_404[10] = {0x16FBC5D3L,0x16FBC5D3L,4294967295UL,0x16FBC5D3L,0x16FBC5D3L,4294967295UL,0x16FBC5D3L,0x16FBC5D3L,4294967295UL,0x16FBC5D3L};
    int *l_467 = &l_368;
    short ***l_482 = (void*)0;
    struct S0 l_547[7][6][4] = {{{{0UL,255UL,1L,0xE7L,0x7CD8L,0x2F991252L,0xFEL,253UL},{65528UL,8UL,0xD1L,4L,0x67EDL,4294967295UL,0xD4L,0UL},{65535UL,3UL,0x81L,1L,65535UL,0xC2D1741EL,-1L,250UL},{0UL,0xE0L,0xC7L,0x30L,0x1F9CL,0UL,-5L,0UL}},{{0UL,255UL,1L,0xE7L,0x7CD8L,0x2F991252L,0xFEL,253UL},{0x0D08L,0xBCL,1L,0x3AL,65535UL,0xB1D3F37EL,0x58L,0UL},{65528UL,8UL,0xD1L,4L,0x67EDL,4294967295UL,0xD4L,0UL},{1UL,1UL,1L,0xD3L,65531UL,0UL,2L,0x4FL}},{{65535UL,2UL,0xFBL,0xD1L,0x3EB1L,0UL,0x7FL,0UL},{0UL,0xE0L,0xC7L,0x30L,0x1F9CL,0UL,-5L,0UL},{0UL,0xE0L,0xC7L,0x30L,0x1F9CL,0UL,-5L,0UL},{65535UL,2UL,0xFBL,0xD1L,0x3EB1L,0UL,0x7FL,0UL}},{{0x0D9EL,0xEEL,0L,1L,0UL,0x43100514L,1L,0UL},{65535UL,246UL,0L,-8L,0xB86FL,4294967293UL,0x58L,0xFDL},{65535UL,2UL,0xFBL,0xD1L,0x3EB1L,0UL,0x7FL,0UL},{65531UL,0UL,0x3BL,0L,0x196EL,0x60416B39L,1L,0x13L}},{{65535UL,3UL,0x81L,1L,65535UL,0xC2D1741EL,-1L,250UL},{1UL,1UL,1L,0xD3L,65531UL,0UL,2L,0x4FL},{3UL,0x61L,0L,0L,1UL,0xFB7F2EA3L,0xF2L,0x10L},{0UL,0xE5L,0xD0L,0x28L,65528UL,0xB7C0F2B5L,1L,6UL}},{{0x6E54L,0xEDL,0x19L,-9L,65534UL,4294967295UL,0x4CL,0xA8L},{0x9972L,0UL,0xE6L,0x2EL,8UL,0x2E166325L,0x0BL,0UL},{0x0EF6L,0UL,0x34L,0xCAL,0UL,4294967289UL,0L,1UL},{0UL,0xE5L,0xD0L,0x28L,65528UL,0xB7C0F2B5L,1L,6UL}}},{{{65535UL,246UL,0L,-8L,0xB86FL,4294967293UL,0x58L,0xFDL},{1UL,1UL,1L,0xD3L,65531UL,0UL,2L,0x4FL},{0x6D00L,0x48L,0L,0L,1UL,1UL,-10L,0xFAL},{65531UL,0UL,0x3BL,0L,0x196EL,0x60416B39L,1L,0x13L}},{{0x0D08L,0xBCL,1L,0x3AL,65535UL,0xB1D3F37EL,0x58L,0UL},{65535UL,246UL,0L,-8L,0xB86FL,4294967293UL,0x58L,0xFDL},{0x0D08L,0xBCL,1L,0x3AL,65535UL,0xB1D3F37EL,0x58L,0UL},{65535UL,2UL,0xFBL,0xD1L,0x3EB1L,0UL,0x7FL,0UL}},{{0x0EF6L,0UL,0x34L,0xCAL,0UL,4294967289UL,0L,1UL},{0UL,0xE0L,0xC7L,0x30L,0x1F9CL,0UL,-5L,0UL},{0x6D00L,0x48L,0L,0L,1UL,1UL,-10L,0xFAL},{0x0EF6L,0UL,0x34L,0xCAL,0UL,4294967289UL,0L,1UL}},{{0x0D9EL,0xEEL,0L,1L,0UL,0x43100514L,1L,0UL},{0x07BDL,0x4AL,0L,-1L,0x13FAL,4294967295UL,6L,7UL},{1UL,1UL,1L,0xD3L,65531UL,0UL,2L,0x4FL},{0x9972L,0UL,0xE6L,0x2EL,8UL,0x2E166325L,0x0BL,0UL}},{{0xC628L,255UL,0x6CL,1L,0xC898L,0xE935E905L,0x04L,0x50L},{0x0D08L,0xBCL,1L,0x3AL,65535UL,0xB1D3F37EL,0x58L,0UL},{1UL,1UL,1L,0xD3L,65531UL,0UL,2L,0x4FL},{65531UL,0UL,0x3BL,0L,0x196EL,0x60416B39L,1L,0x13L}},{{0x0D9EL,0xEEL,0L,1L,0UL,0x43100514L,1L,0UL},{0UL,0xE5L,0xD0L,0x28L,65528UL,0xB7C0F2B5L,1L,6UL},{0x6D00L,0x48L,0L,0L,1UL,1UL,-10L,0xFAL},{0x6D00L,0x48L,0L,0L,1UL,1UL,-10L,0xFAL}}},{{{3UL,0x61L,0L,0L,1UL,0xFB7F2EA3L,0xF2L,0x10L},{3UL,0x61L,0L,0L,1UL,0xFB7F2EA3L,0xF2L,0x10L},{0x07BDL,0x4AL,0L,-1L,0x13FAL,4294967295UL,6L,7UL},{0xC628L,255UL,0x6CL,1L,0xC898L,0xE935E905L,0x04L,0x50L}},{{0x07BDL,0x4AL,0L,-1L,0x13FAL,4294967295UL,6L,7UL},{0xC628L,255UL,0x6CL,1L,0xC898L,0xE935E905L,0x04L,0x50L},{0x6E54L,0xEDL,0x19L,-9L,65534UL,4294967295UL,0x4CL,0xA8L},{65535UL,2UL,0xFBL,0xD1L,0x3EB1L,0UL,0x7FL,0UL}},{{65535UL,2UL,0xFBL,0xD1L,0x3EB1L,0UL,0x7FL,0UL},{0xE679L,0x70L,0xFCL,0xE8L,0x8A1AL,5UL,0xE6L,0xF9L},{3UL,0x61L,0L,0L,1UL,0xFB7F2EA3L,0xF2L,0x10L},{0x6E54L,0xEDL,0x19L,-9L,65534UL,4294967295UL,0x4CL,0xA8L}},{{65535UL,246UL,0L,-8L,0xB86FL,4294967293UL,0x58L,0xFDL},{0xE679L,0x70L,0xFCL,0xE8L,0x8A1AL,5UL,0xE6L,0xF9L},{0UL,255UL,1L,0xE7L,0x7CD8L,0x2F991252L,0xFEL,253UL},{65535UL,2UL,0xFBL,0xD1L,0x3EB1L,0UL,0x7FL,0UL}},{{0xE679L,0x70L,0xFCL,0xE8L,0x8A1AL,5UL,0xE6L,0xF9L},{0xC628L,255UL,0x6CL,1L,0xC898L,0xE935E905L,0x04L,0x50L},{65535UL,3UL,0x81L,1L,65535UL,0xC2D1741EL,-1L,250UL},{0xC628L,255UL,0x6CL,1L,0xC898L,0xE935E905L,0x04L,0x50L}},{{0UL,0xE0L,0xC7L,0x30L,0x1F9CL,0UL,-5L,0UL},{3UL,0x61L,0L,0L,1UL,0xFB7F2EA3L,0xF2L,0x10L},{0x9972L,0UL,0xE6L,0x2EL,8UL,0x2E166325L,0x0BL,0UL},{0x6D00L,0x48L,0L,0L,1UL,1UL,-10L,0xFAL}}},{{{65535UL,3UL,0x81L,1L,65535UL,0xC2D1741EL,-1L,250UL},{0UL,0xE5L,0xD0L,0x28L,65528UL,0xB7C0F2B5L,1L,6UL},{0x0D08L,0xBCL,1L,0x3AL,65535UL,0xB1D3F37EL,0x58L,0UL},{65531UL,0UL,0x3BL,0L,0x196EL,0x60416B39L,1L,0x13L}},{{0x6D00L,0x48L,0L,0L,1UL,1UL,-10L,0xFAL},{0x0D08L,0xBCL,1L,0x3AL,65535UL,0xB1D3F37EL,0x58L,0UL},{0xE679L,0x70L,0xFCL,0xE8L,0x8A1AL,5UL,0xE6L,0xF9L},{0x9972L,0UL,0xE6L,0x2EL,8UL,0x2E166325L,0x0BL,0UL}},{{0x6D00L,0x48L,0L,0L,1UL,1UL,-10L,0xFAL},{0x07BDL,0x4AL,0L,-1L,0x13FAL,4294967295UL,6L,7UL},{0x0D08L,0xBCL,1L,0x3AL,65535UL,0xB1D3F37EL,0x58L,0UL},{0x0EF6L,0UL,0x34L,0xCAL,0UL,4294967289UL,0L,1UL}},{{65535UL,3UL,0x81L,1L,65535UL,0xC2D1741EL,-1L,250UL},{0x9972L,0UL,0xE6L,0x2EL,8UL,0x2E166325L,0x0BL,0UL},{0x9972L,0UL,0xE6L,0x2EL,8UL,0x2E166325L,0x0BL,0UL},{65535UL,3UL,0x81L,1L,65535UL,0xC2D1741EL,-1L,250UL}},{{0UL,0xE0L,0xC7L,0x30L,0x1F9CL,0UL,-5L,0UL},{65535UL,2UL,0xFBL,0xD1L,0x3EB1L,0UL,0x7FL,0UL},{65535UL,3UL,0x81L,1L,65535UL,0xC2D1741EL,-1L,250UL},{1UL,1UL,1L,0xD3L,65531UL,0UL,2L,0x4FL}},{{0xE679L,0x70L,0xFCL,0xE8L,0x8A1AL,5UL,0xE6L,0xF9L},{0x0EF6L,0UL,0x34L,0xCAL,0UL,4294967289UL,0L,1UL},{0UL,255UL,1L,0xE7L,0x7CD8L,0x2F991252L,0xFEL,253UL},{0x0D9EL,0xEEL,0L,1L,0UL,0x43100514L,1L,0UL}}},{{{65535UL,246UL,0L,-8L,0xB86FL,4294967293UL,0x58L,0xFDL},{65531UL,0UL,0x3BL,0L,0x196EL,0x60416B39L,1L,0x13L},{3UL,0x61L,0L,0L,1UL,0xFB7F2EA3L,0xF2L,0x10L},{0x0D9EL,0xEEL,0L,1L,0UL,0x43100514L,1L,0UL}},{{65535UL,2UL,0xFBL,0xD1L,0x3EB1L,0UL,0x7FL,0UL},{0x0EF6L,0UL,0x34L,0xCAL,0UL,4294967289UL,0L,1UL},{0x6E54L,0xEDL,0x19L,-9L,65534UL,4294967295UL,0x4CL,0xA8L},{1UL,1UL,1L,0xD3L,65531UL,0UL,2L,0x4FL}},{{0x07BDL,0x4AL,0L,-1L,0x13FAL,4294967295UL,6L,7UL},{65535UL,2UL,0xFBL,0xD1L,0x3EB1L,0UL,0x7FL,0UL},{0x07BDL,0x4AL,0L,-1L,0x13FAL,4294967295UL,6L,7UL},{65535UL,3UL,0x81L,1L,65535UL,0xC2D1741EL,-1L,250UL}},{{3UL,0x61L,0L,0L,1UL,0xFB7F2EA3L,0xF2L,0x10L},{0x9972L,0UL,0xE6L,0x2EL,8UL,0x2E166325L,0x0BL,0UL},{0x6D00L,0x48L,0L,0L,1UL,1UL,-10L,0xFAL},{0x0EF6L,0UL,0x34L,0xCAL,0UL,4294967289UL,0L,1UL}},{{0x0D9EL,0xEEL,0L,1L,0UL,0x43100514L,1L,0UL},{0x07BDL,0x4AL,0L,-1L,0x13FAL,4294967295UL,6L,7UL},{1UL,1UL,1L,0xD3L,65531UL,0UL,2L,0x4FL},{0x9972L,0UL,0xE6L,0x2EL,8UL,0x2E166325L,0x0BL,0UL}},{{0xC628L,255UL,0x6CL,1L,0xC898L,0xE935E905L,0x04L,0x50L},{0x0D08L,0xBCL,1L,0x3AL,65535UL,0xB1D3F37EL,0x58L,0UL},{1UL,1UL,1L,0xD3L,65531UL,0UL,2L,0x4FL},{65531UL,0UL,0x3BL,0L,0x196EL,0x60416B39L,1L,0x13L}}},{{{0x0D9EL,0xEEL,0L,1L,0UL,0x43100514L,1L,0UL},{0UL,0xE5L,0xD0L,0x28L,65528UL,0xB7C0F2B5L,1L,6UL},{0x6D00L,0x48L,0L,0L,1UL,1UL,-10L,0xFAL},{0x6D00L,0x48L,0L,0L,1UL,1UL,-10L,0xFAL}},{{3UL,0x61L,0L,0L,1UL,0xFB7F2EA3L,0xF2L,0x10L},{3UL,0x61L,0L,0L,1UL,0xFB7F2EA3L,0xF2L,0x10L},{0x07BDL,0x4AL,0L,-1L,0x13FAL,4294967295UL,6L,7UL},{0xC628L,255UL,0x6CL,1L,0xC898L,0xE935E905L,0x04L,0x50L}},{{0x07BDL,0x4AL,0L,-1L,0x13FAL,4294967295UL,6L,7UL},{0UL,0xE0L,0xC7L,0x30L,0x1F9CL,0UL,-5L,0UL},{65535UL,3UL,0x81L,1L,65535UL,0xC2D1741EL,-1L,250UL},{65528UL,8UL,0xD1L,4L,0x67EDL,4294967295UL,0xD4L,0UL}},{{65528UL,8UL,0xD1L,4L,0x67EDL,4294967295UL,0xD4L,0UL},{0x07BDL,0x4AL,0L,-1L,0x13FAL,4294967295UL,6L,7UL},{0x6E54L,0xEDL,0x19L,-9L,65534UL,4294967295UL,0x4CL,0xA8L},{65535UL,3UL,0x81L,1L,65535UL,0xC2D1741EL,-1L,250UL}},{{0xE679L,0x70L,0xFCL,0xE8L,0x8A1AL,5UL,0xE6L,0xF9L},{0x07BDL,0x4AL,0L,-1L,0x13FAL,4294967295UL,6L,7UL},{65535UL,246UL,0L,-8L,0xB86FL,4294967293UL,0x58L,0xFDL},{65528UL,8UL,0xD1L,4L,0x67EDL,4294967295UL,0xD4L,0UL}},{{0x07BDL,0x4AL,0L,-1L,0x13FAL,4294967295UL,6L,7UL},{0UL,0xE0L,0xC7L,0x30L,0x1F9CL,0UL,-5L,0UL},{0x0D08L,0xBCL,1L,0x3AL,65535UL,0xB1D3F37EL,0x58L,0UL},{0UL,0xE0L,0xC7L,0x30L,0x1F9CL,0UL,-5L,0UL}}},{{{1UL,1UL,1L,0xD3L,65531UL,0UL,2L,0x4FL},{0x6E54L,0xEDL,0x19L,-9L,65534UL,4294967295UL,0x4CL,0xA8L},{0x0EF6L,0UL,0x34L,0xCAL,0UL,4294967289UL,0L,1UL},{65535UL,2UL,0xFBL,0xD1L,0x3EB1L,0UL,0x7FL,0UL}},{{0x0D08L,0xBCL,1L,0x3AL,65535UL,0xB1D3F37EL,0x58L,0UL},{0x9972L,0UL,0xE6L,0x2EL,8UL,0x2E166325L,0x0BL,0UL},{0UL,0xE5L,0xD0L,0x28L,65528UL,0xB7C0F2B5L,1L,6UL},{3UL,0x61L,0L,0L,1UL,0xFB7F2EA3L,0xF2L,0x10L}},{{65535UL,2UL,0xFBL,0xD1L,0x3EB1L,0UL,0x7FL,0UL},{0UL,0xE5L,0xD0L,0x28L,65528UL,0xB7C0F2B5L,1L,6UL},{0x07BDL,0x4AL,0L,-1L,0x13FAL,4294967295UL,6L,7UL},{0x0EF6L,0UL,0x34L,0xCAL,0UL,4294967289UL,0L,1UL}},{{65535UL,2UL,0xFBL,0xD1L,0x3EB1L,0UL,0x7FL,0UL},{0x0D9EL,0xEEL,0L,1L,0UL,0x43100514L,1L,0UL},{0UL,0xE5L,0xD0L,0x28L,65528UL,0xB7C0F2B5L,1L,6UL},{0x6D00L,0x48L,0L,0L,1UL,1UL,-10L,0xFAL}},{{0x0D08L,0xBCL,1L,0x3AL,65535UL,0xB1D3F37EL,0x58L,0UL},{0x0EF6L,0UL,0x34L,0xCAL,0UL,4294967289UL,0L,1UL},{0x0EF6L,0UL,0x34L,0xCAL,0UL,4294967289UL,0L,1UL},{0x0D08L,0xBCL,1L,0x3AL,65535UL,0xB1D3F37EL,0x58L,0UL}},{{1UL,1UL,1L,0xD3L,65531UL,0UL,2L,0x4FL},{65528UL,8UL,0xD1L,4L,0x67EDL,4294967295UL,0xD4L,0UL},{0x0D08L,0xBCL,1L,0x3AL,65535UL,0xB1D3F37EL,0x58L,0UL},{0UL,255UL,1L,0xE7L,0x7CD8L,0x2F991252L,0xFEL,253UL}}}};
    int l_710 = 0x4CDC6F7FL;
    int i, j, k;
    if ((((*l_343) = l_342) || 7L))
    {
        int *l_344 = &g_2[0][1];
        unsigned short l_373 = 0x3FEFL;
        int l_383[2];
        short ***l_481 = (void*)0;
        unsigned char **l_515 = &g_457;
        int ***l_518 = &g_228;
        int i;
        for (i = 0; i < 2; i++)
            l_383[i] = 0xD4301B96L;
        (**g_227) = l_344;
        (*g_228) = (*g_228);
        for (g_140.f5.f1 = 0; (g_140.f5.f1 > 55); g_140.f5.f1 = safe_add_func_uint8_t_u_u(g_140.f5.f1, 3))
        {
            int l_347 = 0L;
            int l_382 = 0x7FE72FF6L;
            int l_385 = 0L;
            int l_388[10][6][3] = {{{(-2L),0xCEFD5815L,(-1L)},{0x836F794DL,0x7C51F61BL,0xCEFD5815L},{8L,3L,0x2C8EC39CL},{0x968DE9E0L,0x8F6991D9L,0x752152C6L},{8L,4L,9L},{0x836F794DL,0x2C8EC39CL,0L}},{{(-2L),0x7C51F61BL,0x81528362L},{(-5L),0x81528362L,0x81528362L},{0x968DE9E0L,0xE521C8E4L,0L},{9L,0L,9L},{0L,0x8A12C193L,0x752152C6L},{0x280769B2L,0x7C51F61BL,0x2C8EC39CL}},{{0x9AF5E792L,0x8A12C193L,0xCEFD5815L},{0x968DE9E0L,0L,(-1L)},{0x8BD2AA82L,0xE521C8E4L,9L},{0x8FED2C1FL,0x81528362L,7L},{0x8FED2C1FL,0x7C51F61BL,3L},{0x8BD2AA82L,0x2C8EC39CL,0x8A12C193L}},{{0x968DE9E0L,4L,0x27E93FF8L},{0x81528362L,0xDDB08EBDL,1L},{4L,0xF7D0F967L,0x27E93FF8L},{0xE521C8E4L,0xA205CD6EL,0x04C6FC83L},{0xCEFD5815L,5L,0xF7D0F967L},{(-1L),0x2C24C430L,0x2F33B187L}},{{0x8A12C193L,0x2C24C430L,1L},{0xF0860BC7L,5L,0L},{0x8F6991D9L,0xA205CD6EL,5L},{0x2C8EC39CL,0xF7D0F967L,0L},{(-1L),0xDDB08EBDL,1L},{0x2C8EC39CL,(-2L),1L}},{{0x8F6991D9L,0L,0x496B3881L},{0xF0860BC7L,0xA205CD6EL,0x766F39B9L},{0x8A12C193L,0x766F39B9L,0x766F39B9L},{(-1L),(-1L),0x496B3881L},{0xCEFD5815L,0xAC3F7EE1L,1L},{0xE521C8E4L,0x04C6FC83L,1L}},{{4L,0xA205CD6EL,0L},{0x81528362L,0x04C6FC83L,5L},{(-1L),0xAC3F7EE1L,0L},{3L,(-1L),1L},{0L,0x766F39B9L,0x2F33B187L},{0L,0xA205CD6EL,0xF7D0F967L}},{{3L,0L,0x04C6FC83L},{(-1L),(-2L),0x27E93FF8L},{0x81528362L,0xDDB08EBDL,1L},{4L,0xF7D0F967L,0x27E93FF8L},{0xE521C8E4L,0xA205CD6EL,0x04C6FC83L},{0xCEFD5815L,5L,0xF7D0F967L}},{{(-1L),0x2C24C430L,0x2F33B187L},{0x8A12C193L,0x2C24C430L,1L},{0xF0860BC7L,5L,(-6L)},{0x81528362L,(-5L),0x27E93FF8L},{7L,0L,0x2F33B187L},{0xAF59C020L,0x766F39B9L,(-8L)}},{{7L,0x04C6FC83L,(-2L)},{0x81528362L,0x2F33B187L,0xD0DF29F2L},{0xCEFD5815L,(-5L),0x496B3881L},{0x752152C6L,0x496B3881L,0x496B3881L},{0xAF59C020L,0L,0xD0DF29F2L},{0L,0xF7D0F967L,(-2L)}}};
            struct S0 l_413 = {0UL,0xEFL,0x53L,1L,0x2B9DL,0xD9C32233L,0xE2L,0UL};
            char *l_445 = &g_140.f5.f6;
            struct S1 l_468[1] = {{1L,0x3F07L,255UL,0xE5L,0xA7C1E0A8L,{0x7F17L,0x1CL,0xCAL,0x5AL,1UL,8UL,-1L,1UL}}};
            short *l_480 = &g_109;
            short **l_479 = &l_480;
            short ***l_478 = &l_479;
            int i, j, k;
        }
        for (g_146 = 0; (g_146 != 12); ++g_146)
        {
            g_82 &= (((*l_343) = (safe_add_func_int8_t_s_s(g_510[4][0], (*g_457)))) == ((((safe_sub_func_int32_t_s_s(0xA403D06DL, (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s(((p_74 >= p_74) != ((*l_467) &= (**g_228))), (safe_rshift_func_uint8_t_u_u(0xFDL, 4)))), g_140.f5.f3)), ((safe_div_func_uint32_t_u_u((g_510[5][0] == 0xAEL), g_140.f5.f7)) && p_73))), 10)))) && (*l_467)) == 0UL) != 0x1BL));
            return l_547[0][0][0];
        }
    }
    else
    {
        unsigned short l_557 = 0xCB85L;
        const short *l_626 = &g_112;
        int l_634[10] = {0xD3A29086L,0x9E33EEBAL,0x9E33EEBAL,0xD3A29086L,0x44AFF257L,0xD3A29086L,0x9E33EEBAL,0x9E33EEBAL,0xD3A29086L,0x44AFF257L};
        int *l_681 = &l_372;
        unsigned l_705 = 4294967295UL;
        int i;
        for (l_372 = (-9); (l_372 != (-27)); l_372 = safe_sub_func_uint8_t_u_u(l_372, 2))
        {
            unsigned l_550 = 4294967293UL;
            struct S0 l_562 = {65535UL,1UL,1L,0L,0x67E4L,4294967292UL,0L,0x09L};
            const short *l_596 = (void*)0;
            const struct S1 *l_603 = &g_140;
            unsigned char l_606 = 0UL;
            int l_637 = 0xF21ACC3EL;
            int l_639 = 0xF6FC9FB9L;
            l_550--;
            for (g_140.f5.f0 = 0; (g_140.f5.f0 == 1); ++g_140.f5.f0)
            {
                short l_587[9][3] = {{0xAE5BL,0xAE5BL,0x4CACL},{(-1L),(-1L),0xB1E7L},{0xAE5BL,0xAE5BL,0x4CACL},{(-1L),(-1L),0xB1E7L},{0xAE5BL,0xAE5BL,0x4CACL},{(-1L),(-1L),0xB1E7L},{0xAE5BL,0xAE5BL,0x4CACL},{(-1L),(-1L),0xB1E7L},{0xAE5BL,0xAE5BL,0x4CACL}};
                int l_588 = 0x1554CD75L;
                int i, j;
                for (g_82 = 1; (g_82 >= 0); g_82 -= 1)
                {
                    int *l_555 = &g_89;
                    int *l_556 = (void*)0;
                    int i, j, k;
                    --l_557;
                    if (g_147[(g_82 + 4)][(g_82 + 1)][g_82])
                    {
                        struct S0 l_560 = {0x3CC5L,7UL,0x0CL,0x3FL,0x3336L,0x6B7CC2A7L,0x03L,0x1DL};
                        struct S0 *l_561[10][3] = {{&g_140.f5,&g_140.f5,&g_140.f5},{&l_547[0][0][0],&l_560,&g_140.f5},{&l_560,&l_547[0][0][0],&g_140.f5},{&g_140.f5,&g_140.f5,&g_140.f5},{&l_547[0][0][0],&l_560,&g_140.f5},{&l_560,&l_547[0][0][0],&g_140.f5},{&g_140.f5,&g_140.f5,&g_140.f5},{&l_547[0][0][0],&l_560,&g_140.f5},{&l_560,&l_547[0][0][0],&g_140.f5},{&g_140.f5,&g_140.f5,&l_560}};
                        unsigned char ** const **l_566 = &g_565;
                        unsigned char ****l_569 = &g_567;
                        int i, j, k;
                        l_562 = l_560;
                        (*l_555) &= (safe_mul_func_uint16_t_u_u((g_147[(g_82 + 4)][(g_82 + 6)][g_82] = l_562.f6), (((*l_566) = g_565) == ((*l_569) = g_567))));
                        g_570 ^= ((***g_567) >= l_560.f0);
                        (*g_228) = l_556;
                    }
                    else
                    {
                        unsigned char l_589 = 0xC9L;
                        short *l_590 = (void*)0;
                        short *l_591 = &g_112;
                        int l_592 = 9L;
                        l_592 |= (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((*l_591) = (safe_unary_minus_func_int16_t_s((((safe_mod_func_int8_t_s_s(0L, l_562.f4)) & (safe_mod_func_uint32_t_u_u((((safe_unary_minus_func_int16_t_s((safe_mod_func_int8_t_s_s(p_74, (safe_add_func_uint16_t_u_u((((p_73 | p_73) || (((**g_228) ^ (l_587[6][1] = ((safe_mod_func_int8_t_s_s((*l_555), (*l_555))) < l_562.f6))) || g_140.f5.f0)) > 65535UL), l_588)))))) | 0x3585L) > l_589), (**g_228)))) && g_497)))), 3)), (*g_81)));
                        return l_562;
                    }
                    (*l_555) ^= (safe_mod_func_uint16_t_u_u(((***g_567) | (safe_unary_minus_func_int8_t_s(g_52))), ((&g_393 == l_596) || (p_74 = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(g_82, 6)), 0x4ED4L)) <= (*l_467))))));
                    return g_140.f5;
                }
                for (g_192 = 0; (g_192 != 50); g_192++)
                {
                    const struct S1 **l_604 = &l_603;
                    char l_605[10] = {0x25L,0x25L,0x25L,0x25L,0x25L,0x25L,0x25L,0x25L,0x25L,0x25L};
                    int l_609[6][7][6] = {{{0xEC32A62EL,1L,0xA429751DL,5L,3L,0L},{0x235D63E7L,(-1L),0x6C462463L,0x81ADAA88L,(-1L),6L},{(-7L),(-1L),0L,(-5L),0xA77B1D8AL,(-2L)},{(-1L),(-3L),1L,0x8744671DL,0x5D28C39EL,3L},{0L,0L,0x3379B82CL,0L,0L,0x649CEFE8L},{0xA3DFAFB6L,(-5L),0x1B3DD44EL,0x0AC4F2EAL,0x7CBB0003L,0x8744671DL},{(-2L),(-4L),(-2L),0xD4551096L,(-1L),0xF69BF7ECL}},{{6L,0xA77B1D8AL,0L,(-2L),7L,6L},{0x6C462463L,6L,(-4L),0x81ADAA88L,0L,1L},{0xB0ACB9AFL,0xA3DFAFB6L,0L,(-2L),0x7F58C3A0L,6L},{5L,(-1L),0xD4551096L,0L,0x5D0065DBL,0xB930806EL},{0x84A39545L,0xD3256617L,0x3379B82CL,0x3379B82CL,0xD3256617L,0x84A39545L},{(-3L),(-3L),6L,0xB9D8FCB3L,(-2L),(-5L)},{1L,0xC9D3A6C6L,1L,4L,0xA429751DL,0L}},{{6L,0x18A9ADBDL,1L,(-1L),0x7CBB0003L,0x2F8C57CEL},{0x8744671DL,(-1L),(-1L),0x0AC4F2EAL,1L,0L},{0xBDFB8DBDL,(-3L),0xF565C4C4L,0x18796EB5L,7L,0xBE6B3A94L},{0xA3DFAFB6L,0L,0xFF824AF1L,0xC4D1DF34L,0xC9D3A6C6L,0xB9D8FCB3L},{0x4EE3D49EL,0x40EC099BL,0L,0L,(-1L),(-1L)},{0L,0xBDFB8DBDL,0xA429751DL,0L,0x18A9ADBDL,(-5L)},{(-1L),0x649CEFE8L,(-5L),(-1L),0xF69BF7ECL,(-2L)}},{{(-1L),0x3780470DL,0L,0L,0xEC32A62EL,0xC9D3A6C6L},{(-7L),0xA526A0D1L,0xB0ACB9AFL,0x5D0065DBL,1L,(-1L)},{0x18796EB5L,8L,0x649CEFE8L,7L,6L,2L},{2L,0x789D47FDL,(-2L),(-5L),(-3L),0x5D28C39EL},{(-8L),2L,0xB9D8FCB3L,0L,0x2F8C57CEL,1L},{(-2L),0x0B88D494L,0x9655D204L,0xA3DFAFB6L,0xD4551096L,7L},{2L,0x8744671DL,0L,(-2L),4L,(-1L)}},{{(-1L),0xD4551096L,0L,0x1D80B0ECL,0x1B3DD44EL,0x34C5D3A1L},{0x8744671DL,4L,0x90D7B3D5L,0x1CBD9329L,(-2L),(-2L)},{0xC9D3A6C6L,0x5D28C39EL,0x0AC4F2EAL,0xA3DFAFB6L,(-1L),0x3379B82CL},{0xF69BF7ECL,(-4L),(-2L),(-4L),0xF69BF7ECL,4L},{0x5D4D2C4CL,1L,0L,1L,0x3379B82CL,1L},{0xB9D8FCB3L,(-1L),1L,1L,0x3D8276ABL,1L},{7L,0x5D0065DBL,0L,0xAFCD3F9AL,(-1L),4L}},{{0x3D8276ABL,0xBDFB8DBDL,(-2L),0L,0L,0x3379B82CL},{0x1350D34DL,0x18796EB5L,0x0AC4F2EAL,0x18A9ADBDL,(-2L),0xDE03A444L},{0x40EC099BL,(-2L),0x5D28C39EL,(-3L),(-5L),(-2L)},{1L,0L,6L,2L,8L,0xA526A0D1L},{0xBE6B3A94L,3L,0x3780470DL,(-1L),0x3379B82CL,(-3L)},{0L,0x6C462463L,0xBDFB8DBDL,0xFF824AF1L,0x055CA78DL,0x40EC099BL},{3L,0L,4L,0xDE03A444L,0L,(-1L)}}};
                    int i, j, k;
                    (*l_604) = l_603;
                    if (((void*)0 != &g_140))
                    {
                        (*l_467) ^= 1L;
                    }
                    else
                    {
                        if (l_605[9])
                            break;
                    }
                    if (l_606)
                        break;
                    for (g_90 = 0; (g_90 != 57); g_90 = safe_add_func_int16_t_s_s(g_90, 7))
                    {
                        (**g_227) = (**g_227);
                        l_609[4][2][0] ^= (*g_81);
                    }
                }
            }
            for (g_124 = 4; (g_124 >= 27); g_124 = safe_add_func_int16_t_s_s(g_124, 4))
            {
                int l_642 = (-1L);
                if (p_73)
                {
                    unsigned short l_628[5] = {65531UL,65531UL,65531UL,65531UL,65531UL};
                    int l_633 = 0xB511A253L;
                    int i;
                    (*l_467) ^= l_562.f5;
                    for (g_112 = (-4); (g_112 != 27); g_112 = safe_add_func_int32_t_s_s(g_112, 4))
                    {
                        unsigned short *l_620 = (void*)0;
                        unsigned short *l_621[8][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                        const short **l_627 = &l_626;
                        int *l_635 = &g_497;
                        int i, j;
                        (*l_467) |= (~1L);
                        (*l_635) ^= (safe_mod_func_int8_t_s_s(((safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s((+g_140.f5.f7), g_89)), (*l_467))) & (p_74 = p_73)), (+(safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((l_634[9] &= (((l_628[2] = (l_596 != ((*l_627) = l_626))) < (safe_mul_func_int8_t_s_s((p_73 < (((safe_mod_func_uint8_t_u_u(l_562.f6, (l_562.f2 && g_394))) > l_633) > g_114)), (*l_467)))) || 0xA16CL)), p_73)), 5)))));
                    }
                }
                else
                {
                    int *l_636 = &g_89;
                    int *l_638[4][1][9] = {{{&l_368,&l_634[1],&g_89,&l_637,&l_368,&g_89,&l_634[1],&l_391,&l_637}},{{(void*)0,&g_89,&g_89,&l_637,&g_2[7][1],&l_391,&g_2[7][1],&l_637,&g_89}},{{&l_637,&l_637,(void*)0,&l_637,(void*)0,&g_89,&g_89,&l_637,&g_2[7][1]}},{{&g_89,&l_634[1],&l_391,&l_637,&l_391,&l_391,&l_637,&l_391,&l_634[1]}}};
                    int i, j, k;
                    ++g_643;
                }
                if ((*l_467))
                    break;
            }
        }
        for (g_90 = 0; (g_90 <= 0); g_90 += 1)
        {
            int l_662 = 0x20083135L;
            unsigned char **l_693 = &g_457;
            unsigned short l_700 = 1UL;
            int i;
            l_634[(g_90 + 6)] &= g_95[g_90];
            for (l_368 = 0; (l_368 >= 0); l_368 -= 1)
            {
                unsigned char l_646[4] = {1UL,1UL,1UL,1UL};
                int l_654 = (-1L);
                int l_657 = 0L;
                int l_658 = 0x418F8445L;
                int l_660 = 5L;
                int *l_679 = &l_654;
                unsigned short l_680 = 0UL;
                int i;
                l_372 = l_646[1];
                for (g_114 = 0; (g_114 <= 0); g_114 += 1)
                {
                    int l_649[1];
                    int l_655 = 0xBB943659L;
                    int l_656 = 0x5B042FE6L;
                    int l_663[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_649[i] = 3L;
                    for (i = 0; i < 1; i++)
                        l_663[i] = (-1L);
                    l_649[0] ^= (safe_mul_func_int16_t_s_s((0UL & g_140.f3), 0x0255L));
                    for (g_140.f0 = 0; (g_140.f0 >= 0); g_140.f0 -= 1)
                    {
                        int *l_650 = &l_634[(g_90 + 6)];
                        int *l_651 = &g_82;
                        int *l_652 = &l_391;
                        int *l_653[5] = {&l_391,&l_391,&l_391,&l_391,&l_391};
                        int i;
                        (*l_650) |= (*l_467);
                        --g_664;
                    }
                }
            }
        }
    }
    return l_547[3][2][2];
}







static int ** func_77(int * p_78, int * p_79)
{
    int **l_83 = &g_81;
    int **l_130 = &g_81;
    int l_191 = (-4L);
    struct S0 l_197 = {0UL,0x86L,1L,0x49L,0x9DCBL,0UL,1L,0x9BL};
    const struct S1 **l_279 = (void*)0;
    const char *l_291 = (void*)0;
    char *l_306 = &g_124;
    char * const *l_305 = &l_306;
    const struct S0 *l_326 = &l_197;
    const struct S0 **l_325 = &l_326;
    (*l_83) = p_78;
    for (g_82 = 0; (g_82 <= (-2)); g_82--)
    {
        char l_88 = 4L;
        int *l_93 = &g_89;
        char l_94 = 0L;
        struct S1 *l_139[7] = {&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140};
        int l_155 = 8L;
        int l_180 = 0xE813D76FL;
        int i;
        if ((safe_add_func_uint16_t_u_u((l_88 == l_88), l_88)))
        {
            ++g_90;
        }
        else
        {
            short *l_108 = &g_109;
            short *l_110 = (void*)0;
            short *l_111[4];
            int l_113 = 0x6F037352L;
            int l_157[6][7] = {{8L,0xEF49E9CAL,4L,1L,0x7B63B490L,0x7B63B490L,1L},{0xC908BB06L,0x56D7480FL,0xC908BB06L,0xEF49E9CAL,1L,1L,8L},{0x56D7480FL,0x188D16BFL,0xC908BB06L,4L,0x4B41F84FL,4L,0xC908BB06L},{1L,1L,4L,0x2D4355F6L,0xA2BACBEAL,1L,0x56D7480FL},{0x2D4355F6L,1L,0x7B63B490L,1L,1L,0x7B63B490L,1L},{0x7B63B490L,0x188D16BFL,1L,0xC908BB06L,0xA2BACBEAL,0xEF49E9CAL,0x2D4355F6L}};
            struct S0 l_166 = {2UL,251UL,0L,1L,0x3E6DL,0xA6AC587CL,-1L,1UL};
            int **l_169 = (void*)0;
            int i, j;
            for (i = 0; i < 4; i++)
                l_111[i] = &g_112;
            l_93 = &g_89;
            if ((((g_95[0] = l_94) ^ g_53) != ((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(g_2[7][3], (**l_83))) <= g_90), (**l_83))) | (g_114 |= ((safe_mul_func_int16_t_s_s((l_113 &= ((*l_108) |= ((safe_mul_func_int16_t_s_s((*l_93), ((safe_add_func_int16_t_s_s(0x005BL, (safe_add_func_int8_t_s_s(g_82, (**l_83))))) != (*l_93)))) < (*l_93)))), 4UL)) != (**l_83))))))
            {
                int *l_115 = &l_113;
                (*l_115) ^= ((*l_93) = 0x0C72D929L);
                g_81 = &g_89;
                (*l_115) ^= ((**l_83) >= (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_109, 15)), g_2[7][1])));
                (*l_83) = l_93;
            }
            else
            {
                g_89 = (((safe_lshift_func_uint8_t_u_u(l_113, (g_124 = ((safe_mod_func_uint16_t_u_u(g_53, g_90)) && 0x450F0C8DL)))) || (((**l_83) > (**l_83)) && (l_113 | (safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((!g_89), 4UL)), 12))))) && g_2[7][1]);
            }
            if ((*p_78))
            {
                const int **l_142 = (void*)0;
                if ((**l_83))
                {
                    int **l_129 = &l_93;
                    for (g_52 = 0; (g_52 <= 3); g_52 += 1)
                    {
                        return l_130;
                    }
                }
                else
                {
                    const int *l_131 = &g_2[2][3];
                    const int **l_132 = (void*)0;
                    const int **l_133 = (void*)0;
                    const int **l_134 = &l_131;
                    (*l_134) = l_131;
                    for (g_109 = (-11); (g_109 > (-2)); g_109 = safe_add_func_uint8_t_u_u(g_109, 2))
                    {
                        (*l_134) = (*l_134);
                    }
                    for (g_112 = (-20); (g_112 == 8); g_112 = safe_add_func_uint16_t_u_u(g_112, 5))
                    {
                        struct S1 **l_141 = &l_139[0];
                        const int ***l_143 = &l_133;
                        (*l_134) = p_78;
                        (*l_141) = l_139[4];
                        (*l_143) = l_142;
                    }
                }
            }
            else
            {
                if ((safe_rshift_func_int16_t_s_s((**l_130), 4)))
                {
                    g_147[6][6][0]--;
                    for (g_140.f5.f6 = 0; (g_140.f5.f6 <= 1); g_140.f5.f6 += 1)
                    {
                        struct S0 **l_151 = &g_150;
                        (*l_151) = g_150;
                    }
                    for (g_140.f5.f2 = 0; (g_140.f5.f2 == 26); ++g_140.f5.f2)
                    {
                        short *l_154 = &g_140.f0;
                        (*l_93) |= ((void*)0 == l_154);
                    }
                }
                else
                {
                    short l_175 = 0xBB03L;
                    for (g_140.f1 = 0; (g_140.f1 <= 0); g_140.f1 += 1)
                    {
                        int *l_156[8][2][2] = {{{&g_2[8][0],&g_82},{&g_82,&l_113}},{{&g_2[8][0],&g_2[8][0]},{&l_113,&g_2[8][0]}},{{&g_2[8][0],&l_113},{&g_2[8][0],&g_2[8][0]}},{{&l_113,&g_2[8][0]},{&g_2[8][0],&l_113}},{{&g_2[8][0],&g_2[8][0]},{&l_113,&g_2[8][0]}},{{&g_2[8][0],&l_113},{&g_2[8][0],&g_2[8][0]}},{{&l_113,&g_2[8][0]},{&g_2[8][0],&l_113}},{{&g_2[8][0],&g_2[8][0]},{&l_113,&g_2[8][0]}}};
                        int **l_163 = (void*)0;
                        int **l_164 = (void*)0;
                        int **l_165[8] = {&l_156[0][1][1],&l_156[0][1][1],&l_156[0][1][1],&l_156[0][1][1],&l_156[0][1][1],&l_156[0][1][1],&l_156[0][1][1],&l_156[0][1][1]};
                        int i, j, k;
                        g_160--;
                        p_79 = ((*l_83) = p_79);
                    }
                    l_166 = g_140.f5;
                    for (l_166.f6 = (-2); (l_166.f6 == 13); l_166.f6 = safe_add_func_uint8_t_u_u(l_166.f6, 5))
                    {
                        return l_169;
                    }
                    if (((g_53 >= g_112) < (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(g_53, 1UL)), (&p_79 != (void*)0)))))
                    {
                        short l_174 = (-7L);
                        (*l_93) = (l_174 &= (*l_93));
                        return &g_81;
                    }
                    else
                    {
                        l_175 = (g_140.f5.f0 <= g_159);
                    }
                }
            }
        }
        if ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((**l_130), 1)), l_180)))
        {
            char l_213 = 0x9AL;
            if ((*g_81))
            {
                int *l_181 = &l_180;
                int *l_182 = (void*)0;
                int *l_183 = &l_155;
                int *l_184 = &l_155;
                int *l_185 = &g_89;
                int *l_186 = &l_155;
                int *l_187 = &g_89;
                int *l_188 = &l_180;
                int *l_189 = (void*)0;
                int *l_190[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_190[i] = &l_155;
                g_140 = g_140;
                --g_192;
            }
            else
            {
                (*l_93) ^= (-3L);
                for (g_52 = (-8); (g_52 < 7); ++g_52)
                {
                    int *l_210[1];
                    short *l_211[2][4][1] = {{{&g_140.f0},{&g_140.f0},{(void*)0},{&g_140.f0}},{{&g_140.f0},{(void*)0},{&g_140.f0},{&g_140.f0}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_210[i] = &g_89;
                    if (((*l_93) = 1L))
                    {
                        struct S0 *l_198[10][7] = {{&l_197,&l_197,&g_140.f5,&g_140.f5,&l_197,&g_140.f5,(void*)0},{&g_140.f5,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197},{&g_140.f5,&g_140.f5,&g_140.f5,&l_197,&l_197,&g_140.f5,&l_197},{&l_197,&l_197,&l_197,&l_197,&g_140.f5,&g_140.f5,&g_140.f5},{&l_197,&g_140.f5,&g_140.f5,&g_140.f5,&l_197,&l_197,&g_140.f5},{&l_197,&l_197,&l_197,&g_140.f5,&l_197,&g_140.f5,&g_140.f5},{&g_140.f5,&g_140.f5,&l_197,&l_197,&g_140.f5,&g_140.f5,&l_197},{&g_140.f5,&l_197,(void*)0,&g_140.f5,&g_140.f5,&l_197,&l_197},{&g_140.f5,&l_197,&l_197,&l_197,&g_140.f5,&l_197,&g_140.f5},{&g_140.f5,&g_140.f5,&l_197,(void*)0,(void*)0,&l_197,&g_140.f5}};
                        int *l_199 = &l_191;
                        int *l_200 = (void*)0;
                        int *l_201 = (void*)0;
                        int *l_202 = &l_155;
                        int *l_203 = &l_155;
                        int *l_204 = (void*)0;
                        int *l_205 = &g_89;
                        int *l_206[3];
                        short **l_212 = &l_211[0][3][0];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_206[i] = &l_191;
                        g_140.f5 = l_197;
                        g_207++;
                        (*l_83) = l_210[0];
                        (*g_81) |= ((((*l_212) = l_211[0][3][0]) != &g_112) != (0x56L > l_213));
                    }
                    else
                    {
                        return &g_81;
                    }
                    (*l_93) |= 0x3443E91BL;
                }
            }
            return l_83;
        }
        else
        {
            int ***l_229 = &g_228;
            int l_234 = 0x772C287CL;
            int l_235[8][9][3] = {{{0L,0x879814F5L,0xB33A0128L},{0x96B88E8AL,0x7306D39FL,(-4L)},{(-6L),0xB5881AEEL,0x0A5AFFB3L},{0x76E8CC18L,0xF20BE43BL,0x995AE576L},{0x5507AC6EL,0x21FB1132L,0xF750B455L},{0xE5635FC2L,0xB0F5AFB2L,0xF43FE7EDL},{0xB4E28337L,0x72A1215FL,0xB4E28337L},{(-1L),1L,0x96B88E8AL},{0x72A1215FL,(-6L),(-10L)}},{{(-1L),0x633ADEF6L,5L},{0xC234C242L,(-1L),0L},{(-1L),(-1L),(-1L)},{0x72A1215FL,0x2FFA6EF5L,0x573BEA54L},{(-1L),4L,0x95D76302L},{0xB4E28337L,0xF512955AL,0x4C22DBCCL},{0xE5635FC2L,0x6EC92A06L,4L},{0x5507AC6EL,(-1L),0xB5881AEEL},{0x76E8CC18L,(-1L),(-2L)}},{{(-6L),(-10L),0xF512955AL},{0x96B88E8AL,0x5A282962L,(-1L)},{0L,0x4C22DBCCL,0x256F5496L},{0x156F240AL,0xBB033FFBL,0xF20BE43BL},{9L,0x66EDB109L,0L},{(-1L),5L,0x156F240AL},{(-8L),(-8L),1L},{0xBB033FFBL,0xD6868DB9L,(-5L)},{(-1L),0x166E0729L,(-6L)}},{{0xF43FE7EDL,0x4F3CDA21L,(-8L)},{0x0A5AFFB3L,(-1L),(-6L)},{0xE5635FC2L,(-2L),(-5L)},{(-6L),0xD30F81C4L,0x28B3A168L},{6L,(-4L),0x8C49E032L},{(-10L),0x573BEA54L,0L},{(-8L),(-3L),(-1L)},{(-1L),0x26EAED4DL,8L},{(-3L),0x76E8CC18L,0x995AE576L}},{{(-1L),8L,0x4C22DBCCL},{0x583E332AL,0xBB033FFBL,0x96B88E8AL},{0L,0xF750B455L,0x2FFA6EF5L},{0x96B88E8AL,(-5L),0x6EC92A06L},{0x810F0F39L,0xF512955AL,0xDAF40BCFL},{0xB989850AL,0x0094E7ECL,0x0094E7ECL},{(-6L),(-6L),0L},{0x32A84E0CL,0xF43FE7EDL,0xE5635FC2L},{0xBE7C3BE6L,(-6L),0x21FB1132L}},{{0x236462B7L,0x9750AC28L,(-3L)},{0L,(-6L),0L},{8L,0xF43FE7EDL,(-1L)},{0x256F5496L,(-6L),0xF750B455L},{0x6EC92A06L,0x0094E7ECL,0x236462B7L},{0x166E0729L,0xF512955AL,0x677F0AD5L},{2L,(-5L),5L},{0x56802493L,0xF750B455L,0L},{4L,0xBB033FFBL,0L}},{{(-5L),8L,(-6L)},{(-2L),0x76E8CC18L,0x7867CC06L},{0x879814F5L,0x26EAED4DL,0xF512955AL},{0x76E8CC18L,0x0094E7ECL,0x32A84E0CL},{9L,0x28B3A168L,0x66EDB109L},{4L,(-1L),4L},{(-1L),0x2C8CAAABL,0x0A5AFFB3L},{(-1L),(-3L),0x9750AC28L},{0xB5881AEEL,0x72A1215FL,(-8L)}},{{0xBB033FFBL,(-4L),0x95D76302L},{0xB5881AEEL,0L,(-6L)},{(-1L),(-1L),0xE5635FC2L},{(-1L),0x56802493L,0x2FFA6EF5L},{4L,(-3L),0x583E332AL},{9L,0x3A697CB4L,0x56802493L},{0x76E8CC18L,8L,5L},{0x4C22DBCCL,(-1L),0L},{(-3L),2L,(-3L)}}};
            short *l_252 = (void*)0;
            short **l_251 = &l_252;
            const struct S0 l_257 = {65530UL,0x36L,-1L,1L,0x5C2FL,0xE0FFC3ADL,1L,255UL};
            struct S0 l_258 = {0xF525L,0x29L,6L,0x47L,3UL,0UL,8L,0UL};
            int i, j, k;
            if ((*p_78))
            {
                struct S0 *l_214 = &l_197;
                (*l_214) = l_197;
                if ((*p_78))
                    continue;
            }
            else
            {
                unsigned l_219[1][2];
                int l_230 = (-5L);
                short **l_253 = (void*)0;
                int **l_264 = &l_93;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_219[i][j] = 8UL;
                }
                for (g_140.f4 = 0; (g_140.f4 <= 26); g_140.f4 = safe_add_func_int32_t_s_s(g_140.f4, 1))
                {
                    unsigned l_222 = 4294967295UL;
                    char l_226 = 1L;
                    int *l_231 = (void*)0;
                    int *l_232 = (void*)0;
                    int *l_233[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    char *l_239 = &g_124;
                    int l_250 = (-10L);
                    int i;
                    if ((*p_78))
                    {
                        (*l_130) = &g_89;
                        (*g_81) |= (safe_mul_func_int8_t_s_s(g_2[2][1], 255UL));
                        (*l_130) = (*l_130);
                    }
                    else
                    {
                        unsigned *l_223 = &l_222;
                        (*l_83) = &g_2[5][1];
                        l_230 = ((((*l_223) = ((--l_219[0][0]) == ((&g_81 != (void*)0) != l_222))) >= (l_226 || (g_227 == l_229))) != ((void*)0 == p_79));
                        (*l_130) = (**g_227);
                    }
                    --g_236;
                    if (((*l_93) && (((((((*l_239) = g_147[4][0][1]) >= (*l_93)) && ((g_140.f5.f0 > ((~0xA573A4F6L) <= ((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((*l_93), (g_114 |= (**l_83)))), (((l_230 = ((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s((&l_155 == (*l_83)), l_250)), (-1L))) > 0xFBL)) > 0x4348006EL) ^ (*l_93)))) > 254UL))) & 1UL)) | (***l_229)) > g_207) == l_219[0][0])))
                    {
                        short ***l_254 = &l_253;
                        unsigned *l_255 = &g_114;
                        unsigned short l_256 = 7UL;
                        l_256 |= (((*l_255) &= ((***l_229) | (l_251 == ((*l_254) = l_253)))) != 0xBBB0D997L);
                        l_258 = l_257;
                        (**g_227) = p_78;
                    }
                    else
                    {
                        if ((*p_78))
                            break;
                    }
                    return (*g_227);
                }
                for (g_140.f0 = 0; (g_140.f0 <= 0); g_140.f0 += 1)
                {
                    struct S1 * const l_262[9][7][4] = {{{(void*)0,&g_140,&g_140,&g_140},{&g_140,(void*)0,&g_140,&g_140},{(void*)0,&g_140,&g_140,&g_140},{&g_140,&g_140,&g_140,&g_140},{(void*)0,&g_140,&g_140,&g_140},{&g_140,&g_140,&g_140,&g_140},{&g_140,(void*)0,&g_140,&g_140}},{{(void*)0,&g_140,&g_140,&g_140},{&g_140,(void*)0,&g_140,&g_140},{(void*)0,&g_140,&g_140,&g_140},{&g_140,&g_140,&g_140,(void*)0},{(void*)0,&g_140,&g_140,&g_140},{&g_140,&g_140,(void*)0,&g_140},{&g_140,&g_140,&g_140,(void*)0}},{{(void*)0,&g_140,&g_140,(void*)0},{(void*)0,&g_140,&g_140,&g_140},{&g_140,&g_140,&g_140,&g_140},{(void*)0,&g_140,&g_140,(void*)0},{(void*)0,&g_140,&g_140,&g_140},{&g_140,&g_140,(void*)0,&g_140},{&g_140,&g_140,&g_140,(void*)0}},{{(void*)0,&g_140,&g_140,(void*)0},{(void*)0,&g_140,&g_140,&g_140},{&g_140,&g_140,&g_140,&g_140},{(void*)0,&g_140,&g_140,(void*)0},{(void*)0,&g_140,&g_140,&g_140},{&g_140,&g_140,(void*)0,&g_140},{&g_140,&g_140,&g_140,(void*)0}},{{(void*)0,&g_140,&g_140,(void*)0},{(void*)0,&g_140,&g_140,&g_140},{&g_140,&g_140,&g_140,&g_140},{(void*)0,&g_140,&g_140,(void*)0},{(void*)0,&g_140,&g_140,&g_140},{&g_140,&g_140,(void*)0,&g_140},{&g_140,(void*)0,(void*)0,&g_140}},{{&g_140,&g_140,&g_140,&g_140},{&g_140,(void*)0,&g_140,&g_140},{&g_140,&g_140,&g_140,&g_140},{&g_140,&g_140,&g_140,(void*)0},{&g_140,&g_140,(void*)0,&g_140},{(void*)0,&g_140,&g_140,&g_140},{(void*)0,(void*)0,(void*)0,&g_140}},{{&g_140,&g_140,&g_140,&g_140},{&g_140,(void*)0,&g_140,&g_140},{&g_140,&g_140,&g_140,&g_140},{&g_140,&g_140,&g_140,(void*)0},{&g_140,&g_140,(void*)0,&g_140},{(void*)0,&g_140,&g_140,&g_140},{(void*)0,(void*)0,(void*)0,&g_140}},{{&g_140,&g_140,&g_140,&g_140},{&g_140,(void*)0,&g_140,&g_140},{&g_140,&g_140,&g_140,&g_140},{&g_140,&g_140,&g_140,(void*)0},{&g_140,&g_140,(void*)0,&g_140},{(void*)0,&g_140,&g_140,&g_140},{(void*)0,(void*)0,(void*)0,&g_140}},{{&g_140,&g_140,&g_140,&g_140},{&g_140,(void*)0,&g_140,&g_140},{&g_140,&g_140,(void*)0,&g_140},{&g_140,&g_140,&g_140,&g_140},{&g_140,&g_140,&g_140,&g_140},{&g_140,&g_140,&g_140,(void*)0},{&g_140,&g_140,&g_140,(void*)0}}};
                    int **l_263 = &g_81;
                    int i, j, k;
                    if (((*l_93) = ((safe_div_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((l_262[0][1][1] != &g_140))), g_95[g_140.f0])) <= (***l_229))))
                    {
                        return l_263;
                    }
                    else
                    {
                        return (*l_229);
                    }
                }
            }
            (*l_93) = (safe_div_func_uint32_t_u_u(4294967293UL, (safe_add_func_uint16_t_u_u((((1UL > ((safe_add_func_int32_t_s_s(((+(safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((*l_93), ((safe_mul_func_uint16_t_u_u((0xF16C2306L ^ (*l_93)), g_147[6][6][0])) > (***l_229)))), 5))) || ((void*)0 == l_279)), (**l_130))) ^ g_140.f2)) <= 255UL) != (*p_79)), 0x8517L))));
        }
        for (g_140.f5.f6 = (-18); (g_140.f5.f6 == 9); ++g_140.f5.f6)
        {
            const int l_286 = 8L;
            unsigned *l_287 = &g_95[0];
            int l_288[5][8][6] = {{{1L,5L,0L,7L,0x92D4B6FAL,0x7B5C51C6L},{0x819C18BAL,1L,0x738C1A0CL,8L,(-2L),0xD309D12FL},{0x51CAA546L,0x0275CEDEL,0x949D9212L,(-1L),0x738C1A0CL,0x8BBA5172L},{0L,0L,(-1L),0xA8EAFBACL,0L,1L},{7L,2L,0xB26B4A26L,0xB26B4A26L,2L,7L},{9L,0L,0x85C1A024L,1L,0L,0x7B5C51C6L},{0x80D2039CL,(-1L),0xC1E4EE88L,0xC355B61EL,(-1L),1L},{0x80D2039CL,6L,0xC355B61EL,1L,0xF02643BFL,0x4CCB4D26L}},{{9L,0L,0x40468612L,0xB26B4A26L,(-1L),0xDFE08E61L},{7L,0x04852DBEL,0xA4CF7806L,0xA8EAFBACL,0x6EE20DBAL,0xF02643BFL},{0L,0x4B15C6B0L,(-4L),(-1L),0x77D0F535L,0L},{0x51CAA546L,0xC1E4EE88L,0x4B15C6B0L,8L,8L,0x80D2039CL},{0x819C18BAL,6L,1L,7L,0L,(-1L)},{0x819C18BAL,(-1L),0x6FB0A4E4L,(-3L),4L,7L},{0x15853585L,0L,(-1L),0L,0x40468612L,4L},{0L,0xA8EAFBACL,0x7B5C51C6L,0L,0xE840700BL,(-1L)}},{{0x2C53F303L,4L,(-1L),6L,1L,4L},{4L,(-1L),6L,(-4L),0L,0x9C888121L},{0xD309D12FL,1L,0x85C1A024L,(-3L),(-1L),0x8BBA5172L},{0xB4FA1322L,0xC1E4EE88L,1L,4L,1L,0xA8EAFBACL},{(-1L),(-10L),0L,(-10L),(-1L),0L},{8L,0L,(-1L),0x9C888121L,1L,(-2L)},{(-6L),2L,0x04852DBEL,0L,0xA4CF7806L,(-2L)},{0L,0x99F57404L,(-1L),0x97FB2388L,0xA8EAFBACL,0L}},{{0xA4CF7806L,0L,0L,0xE367F9ACL,0xF02643BFL,0xA8EAFBACL},{7L,0L,1L,0x85C1A024L,0x51CAA546L,0x8BBA5172L},{0x691EEC03L,0xB26B4A26L,0x85C1A024L,(-1L),0x738C1A0CL,0x9C888121L},{0x9896BE9DL,0xF02643BFL,6L,(-1L),0xB26B4A26L,4L},{0L,0xD309D12FL,(-1L),6L,7L,(-1L)},{(-1L),9L,(-1L),8L,1L,0xD309D12FL},{0x368BAE3AL,0x8BBA5172L,0x2C53F303L,0x99F57404L,(-1L),1L},{0x91765340L,0xC355B61EL,0x80D2039CL,0xA4CF7806L,0xE367F9ACL,(-10L)}},{{0xAA981A23L,0xA3173BE6L,(-1L),0L,0x8BBA5172L,(-4L)},{0L,1L,1L,0x04852DBEL,0L,7L},{(-1L),4L,(-1L),(-1L),0x77D0F535L,0x819C18BAL},{0x40468612L,0xD309D12FL,0x9C888121L,1L,0x4B15C6B0L,0x4B15C6B0L},{0L,0x51CAA546L,0x51CAA546L,0L,0xA3173BE6L,4L},{(-10L),0xF48C37F4L,0xB4FA1322L,0L,0x949D9212L,(-1L)},{0L,1L,0x8BBA5172L,0x9896BE9DL,0x949D9212L,5L},{8L,0xF48C37F4L,0x04852DBEL,0x0275CEDEL,0xA3173BE6L,0xE840700BL}}};
            const char **l_292 = (void*)0;
            const char **l_293 = &l_291;
            int l_296 = (-1L);
            int i, j, k;
            l_296 = (safe_sub_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u((g_53 & l_286), ((*l_287) = g_147[6][6][0]))) == l_288[4][0][4]) >= (safe_mul_func_uint8_t_u_u(((&g_124 == ((*l_293) = l_291)) & (g_140.f5.f6 || ((safe_mul_func_int16_t_s_s((*l_93), g_140.f3)) ^ (**l_130)))), 0xBBL))), (-1L)));
            (*l_83) = (**g_227);
        }
    }
    for (g_90 = 0; (g_90 <= 0); g_90 += 1)
    {
        int *l_303[4];
        const struct S0 **l_327 = &l_326;
        int i;
        for (i = 0; i < 4; i++)
            l_303[i] = &g_89;
    }
    return (*g_227);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_140.f3, "g_140.f3", print_hash_value);
    transparent_crc(g_140.f4, "g_140.f4", print_hash_value);
    transparent_crc(g_140.f5.f0, "g_140.f5.f0", print_hash_value);
    transparent_crc(g_140.f5.f1, "g_140.f5.f1", print_hash_value);
    transparent_crc(g_140.f5.f2, "g_140.f5.f2", print_hash_value);
    transparent_crc(g_140.f5.f3, "g_140.f5.f3", print_hash_value);
    transparent_crc(g_140.f5.f4, "g_140.f5.f4", print_hash_value);
    transparent_crc(g_140.f5.f5, "g_140.f5.f5", print_hash_value);
    transparent_crc(g_140.f5.f6, "g_140.f5.f6", print_hash_value);
    transparent_crc(g_140.f5.f7, "g_140.f5.f7", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_147[i][j][k], "g_147[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_510[i][j], "g_510[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_640, "g_640", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_659, "g_659", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_661[i][j], "g_661[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_664, "g_664", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_734[i], "g_734[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_736, "g_736", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_770, "g_770", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_806.f0, "g_806.f0", print_hash_value);
    transparent_crc(g_806.f1, "g_806.f1", print_hash_value);
    transparent_crc(g_806.f2, "g_806.f2", print_hash_value);
    transparent_crc(g_806.f3, "g_806.f3", print_hash_value);
    transparent_crc(g_806.f4, "g_806.f4", print_hash_value);
    transparent_crc(g_806.f5.f0, "g_806.f5.f0", print_hash_value);
    transparent_crc(g_806.f5.f1, "g_806.f5.f1", print_hash_value);
    transparent_crc(g_806.f5.f2, "g_806.f5.f2", print_hash_value);
    transparent_crc(g_806.f5.f3, "g_806.f5.f3", print_hash_value);
    transparent_crc(g_806.f5.f4, "g_806.f5.f4", print_hash_value);
    transparent_crc(g_806.f5.f5, "g_806.f5.f5", print_hash_value);
    transparent_crc(g_806.f5.f6, "g_806.f5.f6", print_hash_value);
    transparent_crc(g_806.f5.f7, "g_806.f5.f7", print_hash_value);
    transparent_crc(g_834, "g_834", print_hash_value);
    transparent_crc(g_868, "g_868", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_941[i][j][k], "g_941[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_990, "g_990", print_hash_value);
    transparent_crc(g_1051, "g_1051", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1154[i], "g_1154[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1165, "g_1165", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1173[i].f0, "g_1173[i].f0", print_hash_value);
        transparent_crc(g_1173[i].f1, "g_1173[i].f1", print_hash_value);
        transparent_crc(g_1173[i].f2, "g_1173[i].f2", print_hash_value);
        transparent_crc(g_1173[i].f3, "g_1173[i].f3", print_hash_value);
        transparent_crc(g_1173[i].f4, "g_1173[i].f4", print_hash_value);
        transparent_crc(g_1173[i].f5, "g_1173[i].f5", print_hash_value);
        transparent_crc(g_1173[i].f6, "g_1173[i].f6", print_hash_value);
        transparent_crc(g_1173[i].f7, "g_1173[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1201, "g_1201", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1304[i][j][k], "g_1304[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1369.f0, "g_1369.f0", print_hash_value);
    transparent_crc(g_1369.f1, "g_1369.f1", print_hash_value);
    transparent_crc(g_1369.f2, "g_1369.f2", print_hash_value);
    transparent_crc(g_1369.f3, "g_1369.f3", print_hash_value);
    transparent_crc(g_1369.f4, "g_1369.f4", print_hash_value);
    transparent_crc(g_1369.f5, "g_1369.f5", print_hash_value);
    transparent_crc(g_1369.f6, "g_1369.f6", print_hash_value);
    transparent_crc(g_1369.f7, "g_1369.f7", print_hash_value);
    transparent_crc(g_1526, "g_1526", print_hash_value);
    transparent_crc(g_1550, "g_1550", print_hash_value);
    transparent_crc(g_1552, "g_1552", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_1581[i][j][k], "g_1581[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1619, "g_1619", print_hash_value);
    transparent_crc(g_1644, "g_1644", print_hash_value);
    transparent_crc(g_1657, "g_1657", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_1668[i][j][k].f0, "g_1668[i][j][k].f0", print_hash_value);
                transparent_crc(g_1668[i][j][k].f1, "g_1668[i][j][k].f1", print_hash_value);
                transparent_crc(g_1668[i][j][k].f2, "g_1668[i][j][k].f2", print_hash_value);
                transparent_crc(g_1668[i][j][k].f3, "g_1668[i][j][k].f3", print_hash_value);
                transparent_crc(g_1668[i][j][k].f4, "g_1668[i][j][k].f4", print_hash_value);
                transparent_crc(g_1668[i][j][k].f5.f0, "g_1668[i][j][k].f5.f0", print_hash_value);
                transparent_crc(g_1668[i][j][k].f5.f1, "g_1668[i][j][k].f5.f1", print_hash_value);
                transparent_crc(g_1668[i][j][k].f5.f2, "g_1668[i][j][k].f5.f2", print_hash_value);
                transparent_crc(g_1668[i][j][k].f5.f3, "g_1668[i][j][k].f5.f3", print_hash_value);
                transparent_crc(g_1668[i][j][k].f5.f4, "g_1668[i][j][k].f5.f4", print_hash_value);
                transparent_crc(g_1668[i][j][k].f5.f5, "g_1668[i][j][k].f5.f5", print_hash_value);
                transparent_crc(g_1668[i][j][k].f5.f6, "g_1668[i][j][k].f5.f6", print_hash_value);
                transparent_crc(g_1668[i][j][k].f5.f7, "g_1668[i][j][k].f5.f7", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1691, "g_1691", print_hash_value);
    transparent_crc(g_1697, "g_1697", print_hash_value);
    transparent_crc(g_1700, "g_1700", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
