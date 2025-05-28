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
   unsigned f0;
   volatile unsigned f1;
   volatile int f2;
   unsigned short f3;
   int f4;
};


static unsigned g_10 = 1UL;
static volatile int g_37 = 0x213AABDCL;
static volatile int g_38[4] = {0x1FFDE63BL,0x1FFDE63BL,0x1FFDE63BL,0x1FFDE63BL};
static int g_68 = 0xDBC40293L;
static struct S0 g_72 = {0x6AF73E89L,0x2A224D52L,0L,65529UL,0L};
static int *g_73[6][4] = {{&g_68,(void*)0,(void*)0,&g_68},{&g_68,(void*)0,(void*)0,&g_68},{&g_68,(void*)0,(void*)0,&g_68},{&g_68,(void*)0,(void*)0,&g_68},{&g_68,(void*)0,(void*)0,&g_68},{&g_68,(void*)0,(void*)0,&g_68}};
static struct S0 *g_119 = &g_72;
static struct S0 **g_118 = &g_119;
static unsigned short g_143 = 0xD254L;
static volatile struct S0 g_215 = {0x673FFDFAL,4294967295UL,0L,65528UL,0xA37C6CF8L};
static volatile struct S0 g_216 = {0x6E48C6A7L,0xAEF1AE50L,0x9A09FAE6L,0x1700L,0x336FF1FBL};
static volatile char g_245 = 0x8FL;
static struct S0 g_276 = {0UL,4294967295UL,0xED1A2A8AL,0xF0C4L,0L};
static struct S0 g_277 = {0x00737D8DL,0xBF796855L,-1L,4UL,0xD284AD6DL};
static int g_289 = 0L;
static struct S0 g_351 = {1UL,4294967295UL,-2L,0xD2B8L,0xC484FBF1L};
static struct S0 g_352 = {1UL,0x09EB5BE3L,0L,65532UL,0xD9222CCBL};
static struct S0 g_353 = {4294967292UL,1UL,0xCCB4F9CFL,0x12D9L,8L};
static struct S0 g_354 = {4294967295UL,0UL,9L,65535UL,0xF0417CCAL};
static struct S0 g_355 = {0x5EFDCAA5L,2UL,0L,0UL,1L};
static struct S0 g_356 = {0x628D2FF0L,0UL,1L,0x591DL,1L};
static struct S0 g_357 = {4294967291UL,0UL,0L,65526UL,1L};
static struct S0 g_358 = {0xF5649298L,0xB77F9737L,5L,65533UL,0xF06E90CAL};
static struct S0 g_359 = {0x55CD829BL,4294967294UL,0x3AE6A61DL,0x3DDAL,0L};
static struct S0 g_360[4] = {{0x9491D6E6L,0x1D817BE3L,1L,1UL,0L},{0x9491D6E6L,0x1D817BE3L,1L,1UL,0L},{0x9491D6E6L,0x1D817BE3L,1L,1UL,0L},{0x9491D6E6L,0x1D817BE3L,1L,1UL,0L}};
static struct S0 g_361 = {4294967291UL,0x8F7BE9AFL,0x26459372L,1UL,0x30840ECFL};
static struct S0 g_362 = {0x0EB82280L,4294967295UL,0xBC157B25L,65535UL,0x8D474819L};
static struct S0 g_363 = {0xA381EEB8L,0x9F02853FL,4L,0x429FL,0xE573C5D9L};
static struct S0 g_364 = {0x3C4E6A35L,0xAF043076L,0x8F40139EL,65535UL,1L};
static struct S0 g_365[6] = {{0xE1C75638L,1UL,0x429A58EBL,0xB49BL,1L},{4294967286UL,7UL,0L,1UL,-8L},{4294967286UL,7UL,0L,1UL,-8L},{0xE1C75638L,1UL,0x429A58EBL,0xB49BL,1L},{4294967286UL,7UL,0L,1UL,-8L},{4294967286UL,7UL,0L,1UL,-8L}};
static struct S0 g_366 = {0x72B04C28L,0xA470E8DBL,-10L,65535UL,0x613B4B87L};
static struct S0 g_367 = {4294967295UL,0xDE0ABF59L,0L,65529UL,-3L};
static struct S0 g_368 = {0UL,0x2A6517F6L,-6L,0x8296L,0x08F95DF0L};
static struct S0 g_369 = {2UL,0UL,0x6AB8AE6DL,0x4C99L,0x815BB668L};
static struct S0 g_370 = {0xBCE63F29L,4294967292UL,0x8C1E5F62L,0xF246L,7L};
static struct S0 g_371 = {4294967295UL,0x3884A26DL,-10L,1UL,5L};
static struct S0 g_372 = {0x00F6E89CL,4294967295UL,-1L,0x7E23L,0x825F8899L};
static struct S0 g_373 = {0xD4918056L,6UL,0xEAB6CAB2L,65535UL,-1L};
static struct S0 g_374[5][3][4] = {{{{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{4294967294UL,1UL,0xC6BDDD89L,0UL,-5L},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}},{{6UL,0x73AF02DDL,0x2F254E21L,0xAE74L,0x1527A616L},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}},{{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{4294967294UL,1UL,0xC6BDDD89L,0UL,-5L},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}}},{{{6UL,0x73AF02DDL,0x2F254E21L,0xAE74L,0x1527A616L},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}},{{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{4294967294UL,1UL,0xC6BDDD89L,0UL,-5L},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}},{{6UL,0x73AF02DDL,0x2F254E21L,0xAE74L,0x1527A616L},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}}},{{{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{4294967294UL,1UL,0xC6BDDD89L,0UL,-5L},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}},{{6UL,0x73AF02DDL,0x2F254E21L,0xAE74L,0x1527A616L},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}},{{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{4294967294UL,1UL,0xC6BDDD89L,0UL,-5L},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}}},{{{6UL,0x73AF02DDL,0x2F254E21L,0xAE74L,0x1527A616L},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}},{{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{4294967294UL,1UL,0xC6BDDD89L,0UL,-5L},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}},{{6UL,0x73AF02DDL,0x2F254E21L,0xAE74L,0x1527A616L},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}}},{{{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{4294967294UL,1UL,0xC6BDDD89L,0UL,-5L},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}},{{6UL,0x73AF02DDL,0x2F254E21L,0xAE74L,0x1527A616L},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}},{{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{0x7CF498C6L,4294967291UL,0L,0x66FAL,0xE356220AL},{4294967294UL,1UL,0xC6BDDD89L,0UL,-5L},{0xD6B166CBL,0UL,0x784F828AL,1UL,0x27B0052FL}}}};
static struct S0 g_375 = {4294967295UL,2UL,1L,65534UL,0L};
static struct S0 g_376 = {1UL,4294967295UL,-6L,0xB984L,0x9F6C7DE9L};
static short g_476 = (-6L);
static volatile int *g_556 = (void*)0;
static volatile struct S0 g_557 = {4294967295UL,0UL,0xB450ACACL,65529UL,-3L};
static int g_709 = 1L;
static struct S0 g_710 = {4294967295UL,0xF4172C9BL,0xA2B40D13L,65533UL,0x7934AAC5L};
static volatile struct S0 g_767 = {9UL,0xC1DE82A2L,0x862D1F11L,0x60A8L,0x44E28D99L};
static volatile struct S0 g_768 = {4294967295UL,0x1837A869L,0L,1UL,0xF40DE5E0L};
static volatile int g_803 = 0xA0894ACDL;
static volatile struct S0 g_815 = {0UL,0x30F36ABEL,0L,1UL,0L};
static struct S0 g_847 = {4294967295UL,0xBFB6ACF7L,0x37109AC4L,65535UL,7L};
static struct S0 g_868 = {0x2D163F9BL,0x479668D4L,0x0E19AA2CL,0xE64BL,1L};
static struct S0 g_885 = {0x6372C910L,0xCBE27C50L,0L,0x0BA1L,0x307698BDL};
static struct S0 g_904 = {4294967292UL,0xCDE722A9L,-9L,65533UL,1L};
static char g_916 = (-9L);



static unsigned short func_1(void);
static unsigned char func_4(char p_5, unsigned p_6, int p_7, unsigned char p_8, short p_9);
static short func_16(unsigned p_17);
static int func_22(char p_23, int p_24);
static char func_25(short p_26, unsigned p_27, int p_28, int p_29);
static char func_30(unsigned p_31, unsigned p_32, unsigned p_33);
static short func_34(unsigned char p_35);
static int * func_39(unsigned char p_40);
static unsigned func_46(int p_47, short p_48, int * p_49);
static int * func_50(unsigned p_51, unsigned short p_52);
static unsigned short func_1(void)
{
    unsigned short l_13 = 65527UL;
    int l_687 = (-10L);
    char l_691 = 0x43L;
    int l_765 = 0x0E730A49L;
    struct S0 *l_775 = &g_358;
    int l_802[8][8] = {{0x59977FEAL,0xE4AA62ACL,0x24537140L,0L,0x24537140L,0xE4AA62ACL,0x59977FEAL,0x716446A1L},{0x22AD7B02L,0x8881891AL,0x046C3FE7L,3L,0x3C903175L,0xF7358457L,(-4L),(-5L)},{1L,(-4L),3L,0L,0x3C903175L,(-1L),0L,0L},{0x22AD7B02L,0x24537140L,(-5L),(-5L),0x24537140L,0x22AD7B02L,(-2L),1L},{0x59977FEAL,0x046C3FE7L,1L,0xE4AA62ACL,0x3D3FF11BL,0L,0xF7358457L,(-5L)},{0x8881891AL,3L,(-2L),0x8881891AL,0L,0L,(-5L),0L},{0x3C903175L,0L,(-1L),0L,0x3C903175L,(-2L),1L,0xE4AA62ACL},{1L,0L,(-4L),0x716446A1L,0xE4AA62ACL,0xF7358457L,0x59977FEAL,0L}};
    int l_818 = 0x472F43FEL;
    int l_857[3];
    unsigned short l_889 = 0UL;
    unsigned l_899[3];
    int **l_907[7][8][4] = {{{&g_73[1][2],&g_73[3][1],(void*)0,(void*)0},{&g_73[1][3],(void*)0,&g_73[5][2],&g_73[3][1]},{&g_73[3][0],&g_73[1][2],&g_73[2][0],&g_73[3][1]},{(void*)0,&g_73[3][0],&g_73[3][1],(void*)0},{&g_73[1][3],&g_73[3][1],&g_73[3][1],(void*)0},{&g_73[5][1],&g_73[3][1],&g_73[4][0],&g_73[3][0]},{(void*)0,(void*)0,(void*)0,&g_73[3][1]},{(void*)0,&g_73[3][1],&g_73[3][1],&g_73[3][1]}},{{&g_73[3][1],(void*)0,&g_73[1][2],&g_73[3][1]},{&g_73[3][1],&g_73[5][1],&g_73[1][2],&g_73[3][1]},{&g_73[3][1],(void*)0,&g_73[3][1],&g_73[3][1]},{(void*)0,&g_73[4][0],(void*)0,&g_73[2][1]},{(void*)0,&g_73[2][1],&g_73[4][0],&g_73[3][1]},{&g_73[5][1],&g_73[3][1],&g_73[3][1],&g_73[3][1]},{&g_73[1][3],&g_73[3][1],&g_73[3][1],&g_73[3][1]},{(void*)0,&g_73[5][1],&g_73[2][0],&g_73[2][0]}},{{&g_73[3][0],&g_73[3][0],&g_73[5][2],&g_73[3][1]},{&g_73[1][3],&g_73[2][0],(void*)0,(void*)0},{&g_73[1][2],(void*)0,&g_73[4][0],&g_73[3][1]},{(void*)0,(void*)0,&g_73[3][1],&g_73[1][2]},{(void*)0,&g_73[2][0],&g_73[3][1],&g_73[2][0]},{&g_73[3][1],&g_73[4][0],&g_73[0][3],&g_73[2][0]},{&g_73[1][2],&g_73[4][0],&g_73[3][1],&g_73[1][2]},{&g_73[2][0],&g_73[2][3],&g_73[3][1],(void*)0}},{{(void*)0,&g_73[3][1],&g_73[3][1],&g_73[2][1]},{(void*)0,&g_73[3][1],&g_73[2][1],&g_73[3][1]},{&g_73[4][0],&g_73[5][2],&g_73[3][1],(void*)0},{&g_73[3][1],&g_73[1][2],&g_73[2][1],&g_73[3][1]},{&g_73[4][0],&g_73[4][0],(void*)0,&g_73[3][1]},{&g_73[4][0],&g_73[3][1],&g_73[2][1],&g_73[2][0]},{&g_73[3][1],&g_73[3][1],&g_73[3][1],&g_73[2][3]},{&g_73[4][0],(void*)0,&g_73[2][1],&g_73[4][0]}},{{(void*)0,(void*)0,&g_73[3][1],&g_73[1][2]},{(void*)0,&g_73[3][1],&g_73[3][1],&g_73[3][1]},{&g_73[2][0],&g_73[4][0],&g_73[3][1],&g_73[3][1]},{&g_73[1][2],&g_73[0][3],&g_73[0][3],&g_73[1][2]},{&g_73[3][1],&g_73[1][2],&g_73[3][1],&g_73[3][1]},{(void*)0,&g_73[3][1],&g_73[3][1],&g_73[3][1]},{(void*)0,&g_73[2][1],&g_73[5][2],&g_73[3][1]},{&g_73[0][3],&g_73[3][1],&g_73[3][1],&g_73[3][1]}},{{&g_73[3][1],&g_73[1][2],&g_73[1][3],&g_73[1][2]},{&g_73[4][0],&g_73[0][3],&g_73[2][0],&g_73[3][1]},{&g_73[3][1],&g_73[4][0],&g_73[3][1],&g_73[2][0]},{(void*)0,&g_73[1][2],&g_73[2][1],&g_73[4][0]},{&g_73[3][1],&g_73[3][1],&g_73[2][1],&g_73[3][1]},{&g_73[3][1],(void*)0,&g_73[3][1],&g_73[0][3]},{(void*)0,&g_73[1][2],&g_73[3][1],&g_73[3][1]},{&g_73[3][1],&g_73[5][2],&g_73[5][2],&g_73[1][2]}},{{&g_73[3][1],&g_73[3][1],&g_73[5][2],&g_73[3][1]},{&g_73[3][1],&g_73[4][0],&g_73[3][1],&g_73[2][0]},{(void*)0,&g_73[3][1],&g_73[3][1],&g_73[3][1]},{&g_73[3][1],&g_73[3][1],&g_73[2][1],&g_73[3][1]},{&g_73[3][1],&g_73[1][2],&g_73[2][1],&g_73[2][0]},{(void*)0,&g_73[0][3],&g_73[3][1],(void*)0},{&g_73[5][2],&g_73[3][1],&g_73[2][3],&g_73[2][3]},{&g_73[3][1],&g_73[3][1],(void*)0,&g_73[3][1]}}};
    char l_912 = 8L;
    unsigned char l_915 = 0x72L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_857[i] = 0x91DD87A7L;
    for (i = 0; i < 3; i++)
        l_899[i] = 4294967295UL;
    l_765 ^= (((safe_add_func_uint8_t_u_u(func_4(g_10, g_10, (safe_add_func_int8_t_s_s(g_10, ((l_13 > (safe_mod_func_int16_t_s_s(func_16((safe_sub_func_int8_t_s_s(l_13, (safe_mod_func_int32_t_s_s(func_22(func_25((((l_13 ^ 0x974EL) >= ((func_30((l_13 > func_34(l_13)), g_368.f4, g_363.f4) != l_13) >= 1L)) == 3UL), g_369.f3, l_687, g_276.f4), l_691), g_368.f4))))), l_691))) < l_691))), g_375.f0, l_687), (-1L))) | l_13) <= l_687);
    for (g_375.f0 = 0; (g_375.f0 <= 3); g_375.f0 += 1)
    {
        int l_778[4][3] = {{0x6D84106DL,0x02A341B1L,0x39506521L},{0x6D84106DL,0x6D84106DL,0x02A341B1L},{0x17E75183L,0x02A341B1L,0x02A341B1L},{0x02A341B1L,0x024168C6L,0x39506521L}};
        int l_807 = (-2L);
        int *l_830[2][9] = {{&g_68,&l_687,&l_807,&l_687,&g_68,&g_709,&g_709,&g_68,&l_687},{(void*)0,&l_778[1][1],(void*)0,&g_709,&l_807,&l_807,&g_709,(void*)0,&l_778[1][1]}};
        unsigned char l_838[9];
        int *l_839[3][9] = {{&l_765,&l_765,&l_807,&l_765,&l_765,&l_765,&l_765,&l_807,&l_765},{&l_765,(void*)0,&l_778[1][1],&l_778[1][1],&l_807,&l_765,&l_807,&l_778[1][1],&l_778[1][1]},{(void*)0,(void*)0,&l_765,&l_778[1][1],&l_765,(void*)0,(void*)0,&l_765,&l_778[1][1]}};
        int l_863 = (-10L);
        unsigned l_887 = 0UL;
        int l_917 = 1L;
        unsigned l_918 = 0UL;
        int i, j;
        for (i = 0; i < 9; i++)
            l_838[i] = 1UL;
        if (((safe_unary_minus_func_int8_t_s(1L)) < g_38[g_375.f0]))
        {
            int *l_771[7] = {(void*)0,&g_709,&g_709,(void*)0,&g_709,&g_709,(void*)0};
            struct S0 **l_772[4] = {&g_119,&g_119,&g_119,&g_119};
            short l_806 = (-1L);
            int *l_813 = &l_765;
            int i;
            g_768 = g_767;
            l_687 = (g_38[g_375.f0] == (safe_add_func_int32_t_s_s(l_765, 0xEBCB2EFEL)));
            g_38[g_375.f0] |= (l_772[1] == (void*)0);
            if (((safe_rshift_func_int16_t_s_s((((void*)0 == l_775) != g_38[g_375.f0]), 7)) <= ((l_687 >= (g_351.f3 | (safe_sub_func_int16_t_s_s(((l_778[1][1] && (safe_add_func_int32_t_s_s(l_13, l_778[1][1]))) || (safe_mod_func_uint32_t_u_u(0x00764889L, 4294967290UL))), g_352.f0)))) | g_351.f3)))
            {
                int l_785 = (-4L);
                if (l_778[3][0])
                {
                    short l_791 = 2L;
                    for (g_366.f4 = 2; (g_366.f4 >= 0); g_366.f4 -= 1)
                    {
                        int l_786 = 0x6FD5A8F0L;
                        l_791 = (g_375.f0 ^ ((safe_add_func_int32_t_s_s((g_359.f0 ^ (+(func_25(g_557.f4, (g_353.f3 || (l_687 < (l_785 > l_786))), (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_357.f3, l_778[1][1])), g_353.f3)), l_786) <= l_778[1][1]))), g_353.f0)) ^ 0x99L));
                    }
                }
                else
                {
                    int l_792 = 0L;
                    l_807 |= (((l_792 == (l_785 != (safe_sub_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((((&g_119 != &g_119) == 252UL) || (~(safe_unary_minus_func_uint32_t_u((safe_lshift_func_int8_t_s_u(func_4(l_778[1][1], ((safe_mod_func_uint16_t_u_u(l_802[2][7], g_803)) && (safe_rshift_func_uint8_t_u_s((((l_792 != g_372.f4) != g_215.f0) | l_785), 5))), l_792, l_691, l_778[1][0]), 5)))))), g_363.f0)) || l_687), g_376.f4)))) ^ l_806) < 0xF16FL);
                }
                return l_785;
            }
            else
            {
                short l_811 = (-9L);
                int *l_819 = (void*)0;
                int **l_840 = &g_73[3][1];
                for (l_691 = 2; (l_691 >= 0); l_691 -= 1)
                {
                    unsigned l_810 = 0x90BD6308L;
                    struct S0 *l_820[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_820[i] = &g_373;
                    if (((((g_362.f1 || (safe_sub_func_uint16_t_u_u(func_16((func_4(l_810, g_68, l_811, g_356.f4, g_357.f4) != (0x5A8F1074L <= (0UL <= l_691)))), g_358.f4))) && g_375.f0) | l_810) & 0UL))
                    {
                        int *l_812[1];
                        int **l_814 = &l_812[0];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_812[i] = &l_765;
                        g_73[3][1] = l_812[0];
                        (*l_775) = (*g_119);
                        (*l_814) = l_813;
                    }
                    else
                    {
                        (*l_775) = g_815;
                    }
                    if ((safe_lshift_func_uint16_t_u_s(l_818, 12)))
                    {
                        (*l_813) = l_811;
                        return g_768.f3;
                    }
                    else
                    {
                        l_819 = &g_68;
                        (*l_819) |= 0x1B432BEEL;
                    }
                    for (g_352.f0 = 0; (g_352.f0 <= 2); g_352.f0 += 1)
                    {
                        int i, j, k;
                        l_820[0] = &g_374[l_691][g_352.f0][g_352.f0];
                        g_374[g_375.f0][l_691][(g_352.f0 + 1)] = (*g_119);
                        (*l_819) = func_22((g_356.f3 >= (safe_unary_minus_func_int16_t_s(g_373.f4))), l_13);
                    }
                }
                if ((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((l_819 != &g_37) > ((g_353.f4 < (*l_813)) ^ (func_22(g_367.f0, (safe_rshift_func_int16_t_s_u(((&l_772[0] == (void*)0) | g_355.f4), 11))) | g_375.f3))), 0x78AAL)) >= 0x7AE767AAL), 0xE61EL)), 3)))
                {
                    l_830[0][5] = (void*)0;
                }
                else
                {
                    (*l_813) &= ((safe_lshift_func_int16_t_s_s((func_22(((safe_unary_minus_func_int32_t_s(l_811)) > (safe_rshift_func_uint8_t_u_u((&g_38[3] != (void*)0), g_365[4].f0))), (g_353.f4 < g_370.f2)) != (((l_13 >= (safe_lshift_func_int8_t_s_s(0L, 3))) ^ g_351.f4) > g_366.f3)), g_365[4].f3)) > l_818);
                }
                (*l_840) = l_839[2][8];
                g_73[3][1] = &g_709;
            }
        }
        else
        {
            int l_846 = 0x4722319DL;
            int l_850 = 0x426A8F82L;
            int l_856[3][7] = {{0x415E1DEDL,0x415E1DEDL,0x2A21C5AAL,0xC6D7BCC1L,0x2A21C5AAL,0x415E1DEDL,0x415E1DEDL},{0xE75AE4C6L,0x42F748BDL,9L,0x42F748BDL,0xE75AE4C6L,0xE75AE4C6L,0x42F748BDL},{0xD847D847L,1L,0xD847D847L,0x2A21C5AAL,0x2A21C5AAL,0xD847D847L,1L}};
            short l_858 = 0xFC44L;
            unsigned char l_860 = 255UL;
            volatile int *l_903 = &g_72.f2;
            int i, j;
            for (g_369.f3 = 0; (g_369.f3 > 16); ++g_369.f3)
            {
                unsigned short l_843 = 0x66E1L;
                int l_855 = 0x6F3A3BF3L;
                struct S0 **l_895 = &l_775;
                unsigned char l_898 = 0xDAL;
                volatile int **l_901 = (void*)0;
                volatile int **l_902 = (void*)0;
                if (l_843)
                    break;
                if ((safe_lshift_func_int8_t_s_u((l_846 & 0x17DFL), (((0x36C8520AL | g_351.f1) && l_691) == (-1L)))))
                {
                    char l_851 = 0L;
                    int l_852[3][9][3] = {{{9L,0x0D2086C8L,5L},{0xBC33BD06L,0x0D2086C8L,(-1L)},{0L,(-5L),0x2AEF8540L},{0L,0L,0L},{0L,(-4L),0x3522BB53L},{0xBC33BD06L,0L,0x3522BB53L},{9L,0x3522BB53L,0L},{(-2L),(-1L),0x2AEF8540L},{0x3522BB53L,0x3522BB53L,(-1L)}},{{(-5L),0L,5L},{(-5L),(-4L),(-2L)},{0x3522BB53L,0L,0L},{(-2L),(-5L),(-2L)},{9L,0x0D2086C8L,5L},{0xBC33BD06L,0x0D2086C8L,(-1L)},{0L,(-5L),0x2AEF8540L},{5L,(-4L),(-4L)},{(-4L),0L,0x2AEF8540L}},{{(-5L),0x0D2086C8L,0x2AEF8540L},{0L,0x2AEF8540L,(-4L)},{9L,0xBC33BD06L,(-1L)},{0x2AEF8540L,0x2AEF8540L,0xBC33BD06L},{(-2L),0x0D2086C8L,0x3522BB53L},{(-2L),0L,9L},{0x2AEF8540L,(-4L),0x0D2086C8L},{9L,(-2L),9L},{0L,0L,0x3522BB53L}}};
                    int i, j, k;
                    (*g_119) = g_847;
                    for (g_355.f3 = 18; (g_355.f3 < 57); ++g_355.f3)
                    {
                        short l_853 = 0x7544L;
                        int l_854 = 0xD5C9C8B3L;
                        int l_859[1][3];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_859[i][j] = 2L;
                        }
                        l_860--;
                    }
                }
                else
                {
                    volatile int **l_864 = &g_556;
                    int l_886[9][9][3] = {{{1L,0L,0x3BED3A73L},{(-9L),(-9L),1L},{0x52ED913BL,0xC3137B26L,1L},{0xC3137B26L,0x68EDD969L,0x3BED3A73L},{9L,0x05533055L,0xA7C053FEL},{0xE7AF3461L,0xC3137B26L,0x3BED3A73L},{1L,0xE7AF3461L,1L},{9L,2L,1L},{0L,(-1L),0x3BED3A73L}},{{(-3L),0x68EDD969L,0xA7C053FEL},{(-9L),2L,0x3BED3A73L},{0xE7AF3461L,1L,1L},{(-3L),0L,1L},{2L,0x05533055L,0x3BED3A73L},{0x52ED913BL,(-1L),0xA7C053FEL},{1L,0L,0x3BED3A73L},{(-9L),(-9L),1L},{0x52ED913BL,0xC3137B26L,1L}},{{0xC3137B26L,0x68EDD969L,0x3BED3A73L},{9L,0x05533055L,0xA7C053FEL},{0xE7AF3461L,0xC3137B26L,(-3L)},{0xD360E1E6L,(-1L),1L},{(-10L),(-10L),1L},{5L,0xBD7A4724L,(-3L)},{0x08D92F3AL,0xB6AEE94DL,0xC3137B26L},{0x500427FFL,(-10L),(-3L)},{(-1L),0xD360E1E6L,1L}},{{0x08D92F3AL,5L,1L},{(-10L),1L,(-3L)},{0x53C4C8ADL,0xBD7A4724L,0xC3137B26L},{0xD360E1E6L,5L,(-3L)},{0x500427FFL,0x500427FFL,1L},{0x53C4C8ADL,0x92551319L,1L},{0x92551319L,0xB6AEE94DL,(-3L)},{(-10L),1L,0xC3137B26L},{(-1L),0x92551319L,(-3L)}},{{0xD360E1E6L,(-1L),1L},{(-10L),(-10L),1L},{5L,0xBD7A4724L,(-3L)},{0x08D92F3AL,0xB6AEE94DL,0xC3137B26L},{0x500427FFL,(-10L),(-3L)},{(-1L),0xD360E1E6L,1L},{0x08D92F3AL,5L,1L},{(-10L),1L,(-3L)},{0x53C4C8ADL,0xBD7A4724L,0xC3137B26L}},{{0xD360E1E6L,5L,(-3L)},{0x500427FFL,0x500427FFL,1L},{0x53C4C8ADL,0x92551319L,1L},{0x92551319L,0xB6AEE94DL,(-3L)},{(-10L),1L,0xC3137B26L},{(-1L),0x92551319L,(-3L)},{0xD360E1E6L,(-1L),1L},{(-10L),(-10L),9L},{0x3E933BFEL,(-10L),0x05533055L}},{{1L,0x92551319L,(-1L)},{0x53C4C8ADL,(-10L),0x05533055L},{0x08D92F3AL,(-10L),9L},{1L,0x3E933BFEL,9L},{(-10L),5L,0x05533055L},{0xBD7A4724L,(-10L),(-1L)},{(-10L),0x3E933BFEL,0x05533055L},{0x53C4C8ADL,0x53C4C8ADL,9L},{0xBD7A4724L,4L,9L}},{{4L,0x92551319L,0x05533055L},{0xB6AEE94DL,5L,(-1L)},{0x08D92F3AL,4L,0x05533055L},{(-10L),0x08D92F3AL,9L},{0xB6AEE94DL,(-10L),9L},{0x3E933BFEL,(-10L),0x05533055L},{1L,0x92551319L,(-1L)},{0x53C4C8ADL,(-10L),0x05533055L},{0x08D92F3AL,(-10L),9L}},{{1L,0x3E933BFEL,9L},{(-10L),5L,0x05533055L},{0xBD7A4724L,(-10L),(-1L)},{(-10L),0x3E933BFEL,0x05533055L},{0x53C4C8ADL,0x53C4C8ADL,9L},{0xBD7A4724L,4L,9L},{4L,0x92551319L,0x05533055L},{0xB6AEE94DL,5L,(-1L)},{0x08D92F3AL,4L,0x05533055L}}};
                    int *l_900[6];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_900[i] = (void*)0;
                    (*l_864) = &g_38[3];
                    for (g_355.f0 = 6; (g_355.f0 > 50); g_355.f0 = safe_add_func_uint32_t_u_u(g_355.f0, 2))
                    {
                        (*g_556) = (safe_unary_minus_func_uint16_t_u(g_215.f4));
                        (*l_864) = &g_38[3];
                        if ((*g_556))
                            break;
                        (*g_119) = g_868;
                    }
                    if (l_843)
                    {
                        int **l_869 = &g_73[1][1];
                        struct S0 *l_884 = &g_885;
                        unsigned l_888 = 4294967289UL;
                        int l_890 = 0x8AD8F049L;
                        (*l_869) = &g_68;
                        l_890 ^= (safe_sub_func_uint32_t_u_u(l_843, ((((safe_add_func_uint8_t_u_u(func_25(g_366.f2, ((((safe_sub_func_uint8_t_u_u(g_369.f0, ((l_856[2][5] > (g_368.f0 > ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((g_370.f3 & (safe_lshift_func_uint16_t_u_s(((((((0x21L && (-9L)) ^ ((safe_rshift_func_int8_t_s_s(((void*)0 == l_884), g_369.f4)) > l_886[4][6][1])) == l_887) != (-1L)) ^ 0x1394L) | 0x473BL), l_843))), 7)) <= 1UL), 2)) & 0x78L))) ^ l_818))) < l_888) == l_889) && l_846), l_886[4][6][1], l_886[3][1][0]), 255UL)) < 0xC19BL) | 0xF7D7L) | 8UL)));
                    }
                    else
                    {
                        l_900[5] = &l_765;
                    }
                    l_855 &= (*g_556);
                }
                l_903 = &g_37;
            }
            (*g_119) = g_904;
            l_850 |= (*l_903);
            l_850 &= (*l_903);
        }
        g_916 = (safe_add_func_int8_t_s_s(g_815.f2, (((((l_907[6][2][1] == &g_556) ^ g_354.f3) ^ ((-7L) != ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(g_356.f3, 2)), (~l_912))) & (safe_sub_func_uint8_t_u_u((g_369.f4 == ((void*)0 == &g_556)), g_885.f4))))) == l_915) <= g_277.f4)));
        l_918 = l_917;
    }
    return g_353.f2;
}







static unsigned char func_4(char p_5, unsigned p_6, int p_7, unsigned char p_8, short p_9)
{
    struct S0 **l_741 = &g_119;
    int *l_747 = &g_709;
    unsigned l_754 = 0xC7960AC4L;
    unsigned l_761 = 0UL;
    if ((safe_add_func_int32_t_s_s((&g_119 != l_741), 0xAB57C3F8L)))
    {
        char l_746 = 0xF3L;
        char l_759 = 0x82L;
        int *l_760 = &g_709;
        int *l_764 = &g_68;
        (*l_747) &= (((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(0UL, g_357.f0)), 12)) | func_25((p_9 == p_8), g_370.f2, ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_9, p_6)), l_754)), 4)) <= 0xEF5799C5L), p_9)) | g_72.f4);
        (*l_764) ^= ((*l_747) == ((safe_sub_func_int16_t_s_s(p_5, (safe_sub_func_int8_t_s_s(g_216.f3, l_761)))) < (safe_add_func_uint32_t_u_u(((((((*l_760) <= 0x1E460F6BL) > p_6) >= g_373.f4) != g_359.f4) < (-8L)), (-1L)))));
    }
    else
    {
        (*l_747) = p_9;
    }
    for (g_373.f1 = 0; g_373.f1 < 6; g_373.f1 += 1)
    {
        for (g_710.f1 = 0; g_710.f1 < 4; g_710.f1 += 1)
        {
            g_73[g_373.f1][g_710.f1] = &g_68;
        }
    }
    return (*l_747);
}







static short func_16(unsigned p_17)
{
    unsigned short l_727 = 0xE718L;
    int l_731 = 0x46BB1450L;
    unsigned short l_735 = 65531UL;
    int *l_738 = &g_709;
    for (g_363.f3 = 0; (g_363.f3 == 29); g_363.f3 = safe_add_func_int8_t_s_s(g_363.f3, 9))
    {
        unsigned char l_723 = 0x06L;
        int l_728 = 0x7846EBE8L;
        int l_729 = 0L;
        int l_730 = 0x77FA39D2L;
        int l_732 = 0x64B5C2D5L;
        int l_733 = (-1L);
        int l_734 = 0x2A262D54L;
        if ((g_355.f2 && l_723))
        {
            for (g_351.f3 = 0; (g_351.f3 <= 3); g_351.f3 += 1)
            {
                volatile int **l_724 = &g_556;
                int i;
                (*l_724) = &g_38[g_351.f3];
                if (g_38[g_351.f3])
                    continue;
                g_38[g_351.f3] = g_38[g_351.f3];
                if (p_17)
                    continue;
            }
        }
        else
        {
            char l_725 = 0x86L;
            int *l_726[6][8] = {{&g_68,&g_68,&g_709,&g_709,&g_709,&g_68,&g_68,&g_709},{&g_68,&g_709,&g_68,&g_709,&g_709,&g_709,&g_68,&g_68},{&g_68,&g_709,&g_68,&g_68,&g_709,&g_68,&g_709,&g_68},{&g_709,&g_709,&g_709,&g_68,&g_68,&g_709,&g_709,&g_709},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68}};
            int i, j;
            l_727 |= l_725;
            if (p_17)
                break;
            l_735--;
            l_738 = l_726[2][2];
        }
        (*l_738) ^= (-10L);
    }
    return (*l_738);
}







static int func_22(char p_23, int p_24)
{
    int l_699[2][8][8] = {{{1L,0x2AE3C392L,0xBD21632EL,0x3E41BF92L,0x7387114CL,(-1L),0x7387114CL,0x3E41BF92L},{0xBD21632EL,0xA79A2A62L,0xBD21632EL,0xDC4AF236L,0x51129060L,0xBD13DDE1L,0xDDEB3BCCL,0x2AE3C392L},{0x7387114CL,0xA79A2A62L,0x51129060L,(-1L),0x3CE7C2D1L,(-1L),0x51129060L,0xA79A2A62L},{0x7387114CL,0x2AE3C392L,0xDDEB3BCCL,0xBD13DDE1L,0x51129060L,0xDC4AF236L,0xBD21632EL,0xA79A2A62L},{0xBD21632EL,0x3E41BF92L,0x7387114CL,(-1L),0x7387114CL,0x3E41BF92L,0xBD21632EL,0x2AE3C392L},{1L,(-1L),0xDDEB3BCCL,0xDC4AF236L,0x4EFC892EL,0x3E41BF92L,0x51129060L,0x3E41BF92L},{0x4EFC892EL,0x3E41BF92L,0x51129060L,0x3E41BF92L,0x4EFC892EL,0xDC4AF236L,0xDDEB3BCCL,(-1L)},{1L,0x3E41BF92L,1L,0x53194FD2L,0x51129060L,0x2AE3C392L,0x51129060L,0x53194FD2L}},{{1L,0xBD13DDE1L,1L,(-1L),0xDDEB3BCCL,0xDC4AF236L,0x4EFC892EL,0x3E41BF92L},{0x51129060L,0xBD13DDE1L,0xDDEB3BCCL,0x2AE3C392L,0x7387114CL,0x2AE3C392L,0xDDEB3BCCL,0xBD13DDE1L},{0x51129060L,0x3E41BF92L,0x4EFC892EL,0xDC4AF236L,0xDDEB3BCCL,(-1L),1L,0xBD13DDE1L},{1L,0x53194FD2L,0x51129060L,0x2AE3C392L,0x51129060L,0x53194FD2L,1L,0x3E41BF92L},{0x3CE7C2D1L,0x2AE3C392L,0x4EFC892EL,(-1L),0xBD21632EL,0x53194FD2L,0xDDEB3BCCL,0x53194FD2L},{0xBD21632EL,0x53194FD2L,0xDDEB3BCCL,0x53194FD2L,0xBD21632EL,(-1L),0x4EFC892EL,0x2AE3C392L},{0x3CE7C2D1L,0x3E41BF92L,1L,0x53194FD2L,0x51129060L,0x2AE3C392L,0x51129060L,0x53194FD2L},{1L,0xBD13DDE1L,1L,(-1L),0xDDEB3BCCL,0xDC4AF236L,0x4EFC892EL,0x3E41BF92L}}};
    short l_700 = (-9L);
    unsigned short l_708 = 0x040EL;
    int *l_711 = (void*)0;
    int *l_712 = &g_709;
    int l_713 = 0x96587811L;
    int *l_714 = &g_68;
    int *l_715 = &g_709;
    int *l_716[6][3][3] = {{{&g_68,(void*)0,&l_713},{(void*)0,&g_709,&g_68},{&l_713,(void*)0,&l_713}},{{&l_713,(void*)0,&g_68},{(void*)0,&g_709,&l_713},{&g_68,&g_709,&g_68}},{{&g_709,(void*)0,&l_713},{&g_68,(void*)0,&l_713},{(void*)0,&l_713,(void*)0}},{{&l_713,(void*)0,&l_713},{&l_713,&g_709,&g_68},{(void*)0,&g_68,&l_713}},{{&g_68,&g_68,(void*)0},{&l_713,&g_709,&g_709},{&g_68,(void*)0,&g_709}},{{(void*)0,&l_713,(void*)0},{&l_713,(void*)0,&l_713},{&l_713,&g_709,&g_68}}};
    char l_717[8][7] = {{1L,0xE5L,1L,1L,0xE5L,1L,1L},{0x9CL,0x9CL,0x30L,0x9CL,0x9CL,0x30L,0x9CL},{0xE5L,1L,1L,0xE5L,1L,1L,0xE5L},{0xF7L,0x9CL,0xF7L,0xF7L,0x9CL,0xF7L,0xF7L},{0xE5L,0xE5L,1L,0xE5L,0xE5L,1L,0xE5L},{0x9CL,0xF7L,0xF7L,0x9CL,0xF7L,0xF7L,0x9CL},{1L,0xE5L,1L,1L,0xE5L,1L,1L},{0x9CL,0x9CL,0x30L,0x9CL,0x9CL,0x30L,0x9CL}};
    unsigned short l_718 = 1UL;
    int i, j, k;
    for (g_355.f4 = (-5); (g_355.f4 >= (-26)); --g_355.f4)
    {
        g_73[3][1] = &p_24;
        if (p_23)
            continue;
    }
    for (g_370.f0 = (-5); (g_370.f0 > 42); ++g_370.f0)
    {
        return p_24;
    }
    if ((0x14L && g_359.f0))
    {
        int *l_696[6][5][1] = {{{(void*)0},{&g_68},{(void*)0},{(void*)0},{&g_68}},{{(void*)0},{&g_68},{&g_68},{(void*)0},{&g_68}},{{&g_68},{(void*)0},{&g_68},{(void*)0},{(void*)0}},{{(void*)0},{&g_68},{&g_68},{&g_68},{&g_68}},{{(void*)0},{(void*)0},{(void*)0},{&g_68},{(void*)0}},{{&g_68},{(void*)0},{&g_68},{(void*)0},{(void*)0}}};
        int **l_707 = &l_696[4][0][0];
        int i, j, k;
        p_24 ^= 5L;
        l_700 = (0xAEL < (safe_add_func_uint16_t_u_u(p_23, (p_23 && l_699[1][3][1]))));
        (*l_707) = l_696[4][0][0];
        g_709 |= func_30(g_369.f0, l_708, p_23);
    }
    else
    {
        (*g_119) = g_710;
    }
    --l_718;
    return (*l_715);
}







static char func_25(short p_26, unsigned p_27, int p_28, int p_29)
{
    for (g_277.f3 = 18; (g_277.f3 <= 59); g_277.f3 = safe_add_func_int32_t_s_s(g_277.f3, 5))
    {
        int *l_690[10][7] = {{&g_68,(void*)0,&g_68,&g_68,(void*)0,&g_68,(void*)0},{(void*)0,&g_68,&g_68,(void*)0,(void*)0,(void*)0,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,(void*)0,&g_68,&g_68,&g_68,&g_68,(void*)0},{&g_68,(void*)0,&g_68,&g_68,(void*)0,&g_68,(void*)0},{&g_68,&g_68,&g_68,&g_68,(void*)0,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{(void*)0,(void*)0,(void*)0,&g_68,&g_68,(void*)0,(void*)0}};
        int i, j;
        p_29 = p_26;
    }
    return g_359.f2;
}







static char func_30(unsigned p_31, unsigned p_32, unsigned p_33)
{
    struct S0 *l_662 = &g_376;
    int *l_670 = &g_68;
    int l_672 = 3L;
    int l_682 = 0xDAABFA65L;
    int l_683[1][5][9] = {{{(-1L),0L,1L,1L,0x5C9A78FFL,0x358249CCL,0x8E485553L,0x2AFAB632L,1L},{1L,0x358249CCL,0L,(-3L),1L,0x8C9E42D0L,0xF51967D1L,(-1L),1L},{0x11ABE317L,(-1L),(-3L),0x13C62C28L,0L,0L,0x13C62C28L,(-3L),(-1L)},{1L,1L,0xF51967D1L,0L,0x5C9A78FFL,0L,1L,0x8C9E42D0L,0x11ABE317L},{1L,0x13C62C28L,1L,1L,(-3L),0x8C9E42D0L,(-3L),1L,1L}}};
    int i, j, k;
    for (g_355.f0 = 0; (g_355.f0 < 31); ++g_355.f0)
    {
        unsigned short l_659[6][6][5] = {{{0x1302L,0xB20CL,2UL,2UL,0xB20CL},{0x1302L,0xB20CL,2UL,2UL,0xB20CL},{0x1302L,0xB20CL,2UL,2UL,0xB20CL},{0x1302L,0xB20CL,2UL,2UL,0xB20CL},{0x1302L,0xB20CL,2UL,2UL,0xB20CL},{0x1302L,0xB20CL,2UL,2UL,0xB20CL}},{{0x1302L,0xB20CL,2UL,2UL,0xB20CL},{0x1302L,0xB20CL,2UL,2UL,0xB20CL},{0x1302L,0xB20CL,2UL,2UL,0xB20CL},{0x1302L,0xB20CL,2UL,2UL,0xB20CL},{0x1302L,0xB20CL,2UL,2UL,0xB20CL},{0x1302L,0x1302L,0x1066L,0x1066L,0x1302L}},{{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L}},{{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L}},{{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L},{2UL,0x1302L,0x1066L,0x1066L,0x1302L}},{{2UL,0x1066L,0xB20CL,0xB20CL,0x1066L},{65532UL,0x1066L,0xB20CL,0xB20CL,0x1066L},{65532UL,0x1066L,0xB20CL,0xB20CL,0x1066L},{65532UL,0x1066L,0xB20CL,0xB20CL,0x1066L},{65532UL,0x1066L,0xB20CL,0xB20CL,0x1066L},{65532UL,0x1066L,0xB20CL,0xB20CL,0x1066L}}};
        unsigned short l_660 = 0xEE6CL;
        struct S0 *l_661[10][6][4] = {{{(void*)0,&g_374[4][1][2],&g_370,(void*)0},{&g_358,&g_277,&g_277,&g_277},{&g_370,&g_370,&g_351,&g_374[4][1][2]},{(void*)0,&g_376,&g_362,&g_358},{(void*)0,&g_375,(void*)0,&g_362},{&g_277,&g_375,&g_351,&g_358}},{{&g_375,&g_376,&g_365[4],&g_374[4][1][2]},{&g_352,&g_370,&g_374[4][1][2],&g_277},{&g_374[3][1][2],&g_277,&g_376,(void*)0},{&g_365[0],&g_374[4][1][2],(void*)0,(void*)0},{&g_351,&g_352,(void*)0,(void*)0},{&g_369,&g_359,&g_352,&g_277}},{{&g_360[1],(void*)0,&g_361,&g_358},{&g_376,&g_374[4][1][2],&g_362,&g_365[4]},{&g_276,(void*)0,&g_352,&g_353},{&g_373,&g_372,&g_373,&g_276},{&g_374[4][1][2],&g_351,&g_376,&g_357},{&g_276,&g_276,(void*)0,&g_352}},{{&g_367,&g_372,(void*)0,(void*)0},{&g_276,(void*)0,&g_376,&g_353},{&g_375,&g_374[3][1][2],&g_372,(void*)0},{&g_372,(void*)0,&g_369,(void*)0},{&g_277,&g_374[4][1][2],&g_374[4][1][2],(void*)0},{(void*)0,&g_372,&g_372,&g_376}},{{(void*)0,&g_365[0],(void*)0,&g_351},{&g_353,&g_352,&g_376,&g_355},{&g_352,&g_374[4][1][2],&g_374[2][1][1],&g_372},{&g_373,&g_353,&g_357,&g_367},{&g_365[0],(void*)0,(void*)0,&g_365[0]},{&g_369,&g_360[1],&g_277,&g_358}},{{(void*)0,&g_361,&g_367,(void*)0},{&g_370,&g_371,&g_374[4][1][2],(void*)0},{&g_367,&g_361,&g_276,&g_358},{&g_374[3][1][2],&g_360[1],&g_358,&g_365[0]},{&g_376,(void*)0,&g_370,&g_367},{&g_374[4][1][2],&g_353,&g_376,&g_372}},{{&g_376,&g_374[4][1][2],&g_376,&g_355},{&g_358,&g_352,&g_375,&g_351},{&g_277,&g_365[0],&g_361,&g_376},{&g_360[0],&g_372,(void*)0,(void*)0},{(void*)0,&g_374[4][1][2],&g_360[1],&g_365[4]},{&g_374[2][1][1],&g_369,&g_365[4],&g_369}},{{&g_277,(void*)0,&g_358,&g_367},{&g_375,&g_376,&g_357,&g_372},{&g_370,&g_358,&g_357,&g_352},{&g_370,&g_376,&g_357,&g_372},{&g_375,&g_352,&g_358,&g_357},{&g_277,&g_375,&g_365[4],&g_355}},{{&g_374[2][1][1],(void*)0,&g_360[1],&g_361},{&g_351,&g_376,&g_352,&g_276},{&g_357,&g_352,&g_374[2][1][1],&g_362},{&g_361,&g_351,&g_276,(void*)0},{&g_374[3][1][2],(void*)0,&g_351,&g_353},{&g_277,&g_373,&g_353,&g_357}},{{&g_365[0],&g_362,&g_372,&g_372},{&g_353,&g_353,&g_276,&g_373},{(void*)0,&g_370,&g_374[4][1][2],(void*)0},{(void*)0,&g_372,&g_353,&g_374[4][1][2]},{&g_372,&g_372,&g_374[4][1][2],(void*)0},{&g_372,&g_370,&g_361,&g_373}}};
        int *l_663 = (void*)0;
        int l_681 = 0x98E2A0B5L;
        unsigned short l_684 = 3UL;
        int i, j, k;
        if (((safe_sub_func_uint32_t_u_u((p_33 & ((l_659[1][3][0] != g_351.f3) <= l_660)), 0x983D7437L)) || g_359.f3))
        {
            unsigned short l_667 = 65532UL;
            int **l_671 = &g_73[3][1];
            for (g_143 = 0; (g_143 <= 3); g_143 += 1)
            {
                int **l_664 = &l_663;
                (*l_664) = l_663;
                for (g_363.f4 = 0; (g_363.f4 <= 3); g_363.f4 += 1)
                {
                    int *l_665 = (void*)0;
                    int *l_666[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_666[i] = &g_68;
                    g_38[g_363.f4] = ((l_663 == (void*)0) <= 9L);
                    l_667--;
                    if (l_667)
                        break;
                    if (p_32)
                        continue;
                }
            }
            (*l_671) = l_670;
            if ((*l_670))
                continue;
        }
        else
        {
            int *l_673 = &g_68;
            int *l_674 = &l_672;
            int *l_675 = &l_672;
            int *l_676 = &l_672;
            int *l_677 = &l_672;
            int *l_678 = &g_68;
            int *l_679 = (void*)0;
            int *l_680[2];
            int i;
            for (i = 0; i < 2; i++)
                l_680[i] = &l_672;
            l_684++;
            (*g_119) = (*g_119);
        }
        g_118 = &g_119;
    }
    return p_33;
}







static short func_34(unsigned char p_35)
{
    unsigned l_36[8][7][4] = {{{0x32ADAA23L,1UL,0x3EC3E1B8L,0x98EF544BL},{1UL,4UL,0x42796A45L,0x5B7518DBL},{4294967295UL,1UL,0xBD47CDD5L,0x43B9C309L},{0xBD47CDD5L,0x43B9C309L,0x43B9C309L,0xBD47CDD5L},{4294967295UL,0x98EF544BL,0xF8F5063FL,0x3EC3E1B8L},{0x5B7518DBL,0x42796A45L,4UL,1UL},{0xBD47CDD5L,4294967295UL,0x71DB9567L,1UL}},{{1UL,0x42796A45L,1UL,0x3EC3E1B8L},{1UL,0x98EF544BL,0x5B7518DBL,1UL},{4294967295UL,0x7D2AE857L,4294967295UL,0x7D2AE857L},{0x5B7518DBL,1UL,4UL,0xF8F5063FL},{0xE10EF7D5L,4294967295UL,0x98EF544BL,4UL},{1UL,0x43B9C309L,1UL,0x71DB9567L},{1UL,0x3EC3E1B8L,0x98EF544BL,1UL}},{{0xE10EF7D5L,0x71DB9567L,4UL,0x5B7518DBL},{0x5B7518DBL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0x5B7518DBL,4UL},{1UL,0x32ADAA23L,1UL,0x98EF544BL},{1UL,0x5B7518DBL,0x71DB9567L,1UL},{0xBD47CDD5L,0x5B7518DBL,4UL,0x98EF544BL},{0x5B7518DBL,0x32ADAA23L,0xF8F5063FL,4UL}},{{1UL,4294967295UL,0x7D2AE857L,4294967295UL},{1UL,4294967295UL,1UL,0x5B7518DBL},{0xC0EC0DCEL,0x71DB9567L,0x3EC3E1B8L,1UL},{4294967288UL,0x3EC3E1B8L,1UL,0x71DB9567L},{0x5B7518DBL,0x43B9C309L,1UL,4UL},{4294967288UL,4294967295UL,0x3EC3E1B8L,0xF8F5063FL},{0xC0EC0DCEL,1UL,1UL,0x7D2AE857L}},{{0x3EC3E1B8L,0xBD47CDD5L,0xBD47CDD5L,0x3EC3E1B8L},{4294967295UL,4294967295UL,1UL,4294967288UL},{0xE10EF7D5L,1UL,0xC0EC0DCEL,1UL},{0x42796A45L,0x32ADAA23L,1UL,1UL},{0x71DB9567L,1UL,0x3EC3E1B8L,4294967288UL},{0x98EF544BL,4294967295UL,0xE10EF7D5L,0x3EC3E1B8L},{0x32ADAA23L,0xBD47CDD5L,1UL,0xBD47CDD5L}},{{0xE10EF7D5L,4294967295UL,1UL,1UL},{0x43B9C309L,0x32ADAA23L,4294967295UL,0xC0EC0DCEL},{0x7D2AE857L,4UL,0x3EC3E1B8L,1UL},{0x7D2AE857L,4294967288UL,4294967295UL,0x3EC3E1B8L},{0x43B9C309L,1UL,1UL,0xE10EF7D5L},{0xE10EF7D5L,4UL,1UL,1UL},{0x32ADAA23L,0x32ADAA23L,0xE10EF7D5L,1UL}},{{0x98EF544BL,0xF8F5063FL,0x3EC3E1B8L,4294967295UL},{0x71DB9567L,0xE10EF7D5L,1UL,0x3EC3E1B8L},{0x42796A45L,0xE10EF7D5L,0xC0EC0DCEL,4294967295UL},{0xE10EF7D5L,0xF8F5063FL,1UL,1UL},{4294967295UL,0x32ADAA23L,0xBD47CDD5L,1UL},{0x3EC3E1B8L,4UL,0x3EC3E1B8L,0xE10EF7D5L},{0x5B7518DBL,1UL,4294967288UL,0x3EC3E1B8L}},{{1UL,4294967288UL,1UL,1UL},{0xE10EF7D5L,4UL,1UL,0xC0EC0DCEL},{1UL,0x32ADAA23L,4294967288UL,1UL},{0xF8F5063FL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{0x98EF544BL,0xC0EC0DCEL,0x43B9C309L,1UL},{1UL,4294967288UL,0x32ADAA23L,1UL}}};
    int **l_604[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int *l_605 = &g_68;
    unsigned l_612 = 0x5051F9FCL;
    int *l_613 = &g_68;
    short l_627 = 1L;
    short l_632 = (-2L);
    int i, j, k;
    for (p_35 = 0; p_35 < 8; p_35 += 1)
    {
        for (g_37 = 0; g_37 < 7; g_37 += 1)
        {
            for (g_38[3] = 0; g_38[3] < 4; g_38[3] += 1)
            {
                l_36[p_35][g_37][g_38[3]] = 1UL;
            }
        }
    }
    l_605 = func_39(l_36[4][4][3]);
    if ((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(l_612, ((g_143 || ((safe_mod_func_uint32_t_u_u(p_35, ((safe_unary_minus_func_int8_t_s(0xF4L)) | (safe_mod_func_int32_t_s_s((&g_118 == (void*)0), g_215.f4))))) & 0x2EL)) > (*l_605)))) && p_35), 1)), 0UL)))
    {
        volatile int **l_621 = &g_556;
        (*l_621) = &g_37;
    }
    else
    {
        char l_626 = 0L;
        int *l_630 = &g_68;
        unsigned short l_631 = 65526UL;
        int l_633 = 0L;
        unsigned char l_652 = 0xDFL;
        if ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((&g_119 != (void*)0), l_626)), ((((g_359.f0 & p_35) | g_358.f4) == (*l_630)) > l_632))))
        {
            l_633 |= (*l_630);
            (**g_118) = (**g_118);
        }
        else
        {
            char l_634[2][10][3] = {{{(-7L),(-7L),(-7L)},{9L,9L,9L},{(-7L),(-7L),(-7L)},{9L,9L,9L},{(-7L),(-7L),(-7L)},{9L,9L,9L},{(-7L),(-7L),(-7L)},{9L,9L,9L},{(-7L),(-7L),(-7L)},{9L,9L,9L}},{{(-7L),(-7L),(-7L)},{9L,9L,9L},{(-7L),(-7L),(-7L)},{9L,9L,9L},{(-7L),(-7L),(-7L)},{9L,9L,9L},{(-7L),(-7L),(-7L)},{9L,9L,9L},{(-7L),(-7L),(-7L)},{9L,9L,9L}}};
            struct S0 **l_635 = (void*)0;
            int l_649[4] = {0x05E21902L,0x05E21902L,0x05E21902L,0x05E21902L};
            int i, j, k;
            (*l_630) |= p_35;
            for (g_72.f3 = 0; (g_72.f3 <= 3); g_72.f3 += 1)
            {
                int l_639 = 0x44512847L;
                if ((g_72.f4 || l_634[0][6][1]))
                {
                    struct S0 ***l_636 = &g_118;
                    struct S0 *l_637 = &g_360[2];
                    (*l_636) = l_635;
                    (*l_637) = (*g_119);
                    if (p_35)
                        continue;
                }
                else
                {
                    unsigned l_638 = 4294967295UL;
                    for (g_277.f3 = 0; (g_277.f3 <= 3); g_277.f3 += 1)
                    {
                        return l_638;
                    }
                    for (g_362.f2 = 0; g_362.f2 < 4; g_362.f2 += 1)
                    {
                        l_604[g_362.f2] = (void*)0;
                    }
                    if (l_639)
                        continue;
                }
                return g_362.f1;
            }
            l_649[3] |= ((safe_lshift_func_uint16_t_u_u(p_35, (0xBB02E31FL < ((&l_605 == (void*)0) < (safe_sub_func_int16_t_s_s(((safe_unary_minus_func_uint8_t_u((!(safe_lshift_func_int16_t_s_s(g_216.f2, (!(g_352.f4 & l_634[0][6][1]))))))) | (safe_lshift_func_int8_t_s_s((*l_613), p_35))), g_365[4].f4)))))) >= p_35);
        }
        (*l_630) &= (1L != (&l_605 == &g_73[5][3]));
        for (l_631 = 0; (l_631 < 30); ++l_631)
        {
            l_652++;
        }
    }
    return p_35;
}







static int * func_39(unsigned char p_40)
{
    int l_53 = (-1L);
    int **l_523 = &g_73[3][1];
    int l_525[4] = {3L,3L,3L,3L};
    unsigned short l_589[10] = {0x4EF7L,0x30FCL,0x30FCL,0x4EF7L,0x30FCL,0x30FCL,0x4EF7L,0UL,0UL,0x30FCL};
    char l_598 = 0x10L;
    int i;
    if ((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(func_46(p_40, g_10, func_50(((l_53 || (l_53 < (l_53 || (safe_mod_func_int32_t_s_s(0x34309E95L, p_40))))) > (safe_mod_func_int32_t_s_s(g_37, (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_10, 0x62DA72DFL)), g_10))))), p_40)), 0xF09A8C35L)), 3)))))
    {
        int l_499 = 7L;
        struct S0 ***l_500 = &g_118;
        unsigned char l_505 = 0x04L;
        unsigned char l_506[6] = {0x3DL,0x3DL,0x3DL,0x3DL,0x3DL,0x3DL};
        int *l_507 = &g_68;
        short l_532 = 3L;
        int l_577[10] = {(-1L),6L,6L,(-1L),(-3L),(-1L),6L,6L,(-1L),(-3L)};
        int l_582 = 3L;
        char l_583 = 0xE3L;
        char l_584 = 1L;
        int l_586 = (-1L);
        int l_587 = 0x12135EABL;
        int l_588[9] = {2L,2L,2L,2L,2L,2L,2L,2L,2L};
        int i;
        (*l_507) |= ((((p_40 <= (p_40 < (l_499 < (p_40 & (safe_mod_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u(l_505, g_373.f1)) || 5L) >= g_355.f4), p_40)))))) != 0x3661B370L) > l_506[3]) || (-5L));
        for (g_376.f0 = 13; (g_376.f0 == 14); g_376.f0 = safe_add_func_int8_t_s_s(g_376.f0, 3))
        {
            char l_512 = 4L;
            int *l_520 = &g_68;
            int l_550 = (-1L);
            struct S0 ***l_554 = &g_118;
            int l_567 = 1L;
            int l_571 = 0x11295CDDL;
            int l_578[2][2][1];
            unsigned short l_599 = 0UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_578[i][j][k] = 0x19131801L;
                }
            }
            for (g_363.f3 = (-23); (g_363.f3 == 39); g_363.f3 = safe_add_func_int32_t_s_s(g_363.f3, 7))
            {
                int *l_518 = &g_68;
                int l_568 = 0x35BD0700L;
                int l_569 = 0x2B2C479BL;
                int l_579 = 1L;
                int l_580 = 0x2BC26D76L;
                int l_581[6] = {0L,0L,0xFD2D0393L,0L,0L,0xFD2D0393L};
                int *l_592 = &l_581[5];
                int *l_593 = &l_587;
                int *l_594 = &l_579;
                int *l_595 = &l_588[1];
                int *l_596 = &l_580;
                int *l_597[7] = {&l_567,&l_567,(void*)0,&l_567,&l_567,(void*)0,&l_567};
                int i;
                if (l_512)
                {
                    short l_515 = 0x5902L;
                    for (l_505 = (-27); (l_505 == 27); ++l_505)
                    {
                        if (l_515)
                            break;
                    }
                    for (g_364.f4 = 0; (g_364.f4 < (-14)); g_364.f4 = safe_sub_func_uint32_t_u_u(g_364.f4, 3))
                    {
                        int **l_519[8][8] = {{&g_73[3][1],&l_507,&l_518,(void*)0,&l_507,&g_73[3][1],&l_507,&l_518},{&l_518,(void*)0,(void*)0,&g_73[3][1],(void*)0,&g_73[3][1],(void*)0,(void*)0},{&g_73[4][3],&l_507,&l_518,&l_518,&g_73[3][1],(void*)0,&l_507,(void*)0},{(void*)0,&g_73[3][1],&g_73[5][1],&l_507,&g_73[4][3],&g_73[4][3],&l_507,&g_73[5][1]},{&l_507,&l_507,&l_518,(void*)0,&g_73[3][1],&l_518,(void*)0,&l_518},{&g_73[3][1],&l_518,(void*)0,&l_518,&l_507,&g_73[5][1],&l_507,&l_518},{&l_518,&l_518,&l_518,(void*)0,&g_73[4][2],(void*)0,&l_518,(void*)0},{&l_507,(void*)0,&g_73[4][3],(void*)0,&l_507,&l_518,&l_518,&l_507}};
                        int i, j;
                        l_520 = l_518;
                    }
                    (*l_518) = (l_515 || (8UL || (safe_lshift_func_uint16_t_u_u((&g_73[3][1] != l_523), 6))));
                }
                else
                {
                    int *l_524[6][3][7] = {{{(void*)0,&g_68,(void*)0,(void*)0,&g_68,(void*)0,(void*)0},{&l_499,&g_68,&l_499,&g_68,&l_499,&g_68,&l_499},{&g_68,(void*)0,(void*)0,&g_68,(void*)0,(void*)0,&g_68}},{{&l_499,&g_68,&l_499,&l_499,&l_499,&l_499,&l_499},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{&l_499,&l_499,&l_499,&g_68,&l_499,&l_499,&l_499}},{{(void*)0,&g_68,(void*)0,(void*)0,&g_68,(void*)0,(void*)0},{&l_499,&g_68,&l_499,&g_68,&l_499,&g_68,&l_499},{&g_68,(void*)0,(void*)0,&g_68,(void*)0,(void*)0,&g_68}},{{&l_499,&g_68,&l_499,&l_499,&l_499,&l_499,&l_499},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{&l_499,&l_499,&l_499,&g_68,&l_499,&l_499,&l_499}},{{(void*)0,&g_68,&g_68,&g_68,(void*)0,&g_68,&g_68},{&l_499,&l_499,&l_499,&l_499,&l_499,&g_68,&l_499},{(void*)0,&g_68,&g_68,(void*)0,&g_68,&g_68,(void*)0}},{{&l_499,&l_499,&l_499,&g_68,&l_499,&g_68,&l_499},{(void*)0,(void*)0,&g_68,(void*)0,(void*)0,&g_68,(void*)0},{&l_499,&g_68,&l_499,&l_499,&l_499,&g_68,&l_499}}};
                    int i, j, k;
                    l_525[2] &= (*l_518);
                    for (g_352.f3 = 24; (g_352.f3 <= 46); ++g_352.f3)
                    {
                        (*l_520) = (safe_add_func_int8_t_s_s((-1L), g_374[4][1][2].f0));
                    }
                }
                if (p_40)
                {
                    unsigned l_542 = 0xF21E255EL;
                    for (g_369.f4 = 13; (g_369.f4 > 27); g_369.f4++)
                    {
                        unsigned l_541 = 1UL;
                        char l_543 = 5L;
                        (*l_507) &= l_542;
                        (*l_507) ^= l_543;
                        l_550 ^= (safe_sub_func_uint32_t_u_u(((g_38[2] > ((p_40 < (4294967295UL ^ (g_363.f0 & ((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_72.f0, g_353.f3)), p_40)) || l_542)))) == ((-1L) >= g_357.f4))) != p_40), (*l_507)));
                        (**l_500) = (*g_118);
                    }
                    if ((*l_518))
                        continue;
                }
                else
                {
                    unsigned short l_555 = 0x1558L;
                    int l_565 = 4L;
                    int l_566 = 0x53934B92L;
                    int l_570 = 0x18E8B386L;
                    int l_572 = 0xE0668AD2L;
                    int l_573 = 0x52AEA52EL;
                    int l_574 = (-10L);
                    int l_575 = 1L;
                    int l_576 = 0xD29C7FDDL;
                    int l_585[6] = {0x03EC771CL,0x03EC771CL,0x03EC771CL,0x03EC771CL,0x03EC771CL,0x03EC771CL};
                    int i;
                    (*l_520) = (safe_unary_minus_func_int16_t_s(g_367.f4));
                    for (g_367.f3 = 0; (g_367.f3 <= 55); ++g_367.f3)
                    {
                        g_556 = &g_38[1];
                        if (p_40)
                            continue;
                        (***l_554) = g_557;
                    }
                    for (g_143 = 0; (g_143 != 27); g_143 = safe_add_func_int8_t_s_s(g_143, 1))
                    {
                        unsigned l_562 = 4294967286UL;
                        volatile int **l_563 = &g_556;
                        int *l_564[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_564[i] = &l_499;
                        (*l_563) = &g_38[1];
                        l_589[8]--;
                        return &g_68;
                    }
                }
                (*l_523) = l_592;
                l_599--;
            }
        }
    }
    else
    {
        volatile int **l_602 = (void*)0;
        volatile int **l_603 = &g_556;
        (*l_603) = &g_38[3];
    }
    l_525[2] ^= p_40;
    return &g_68;
}







static unsigned func_46(int p_47, short p_48, int * p_49)
{
    int l_74[1];
    short l_164 = (-1L);
    struct S0 **l_178 = (void*)0;
    int **l_207 = (void*)0;
    short l_238 = 5L;
    short l_240 = 0xAA5AL;
    unsigned l_304 = 0xC88198EAL;
    volatile int *l_316 = &g_37;
    int l_349 = 0x40F76129L;
    unsigned short l_377[4] = {0xB631L,0xB631L,0xB631L,0xB631L};
    int l_479 = 6L;
    unsigned l_482 = 0xCFA452D2L;
    int *l_488 = &g_68;
    int *l_489 = &l_74[0];
    int *l_490 = &l_74[0];
    int *l_491 = &g_68;
    int *l_492 = &l_74[0];
    int *l_493 = &l_479;
    int *l_494[3][2][4] = {{{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68}},{{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68}},{{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68}}};
    char l_495 = 0xD7L;
    unsigned char l_496 = 0xFEL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_74[i] = 0x24F91E2CL;
    if (l_74[0])
    {
        int l_75 = (-3L);
        char l_99 = (-1L);
        struct S0 *l_104 = (void*)0;
        struct S0 **l_103 = &l_104;
        struct S0 **l_117 = &l_104;
        int l_140 = 1L;
        unsigned char l_180 = 0x27L;
        unsigned l_292 = 0x8366C3AEL;
        int *l_333[10][6] = {{&l_74[0],&l_74[0],(void*)0,(void*)0,&l_74[0],&l_74[0]},{&l_74[0],(void*)0,(void*)0,&l_74[0],&l_74[0],(void*)0},{&l_74[0],&l_74[0],(void*)0,(void*)0,&l_74[0],&l_74[0]},{&l_74[0],(void*)0,(void*)0,&l_74[0],&l_74[0],(void*)0},{&l_74[0],&l_74[0],(void*)0,(void*)0,&l_74[0],&l_74[0]},{&l_74[0],(void*)0,(void*)0,&l_74[0],&l_74[0],(void*)0},{&l_74[0],&l_74[0],(void*)0,(void*)0,&l_74[0],&l_74[0]},{&l_74[0],(void*)0,(void*)0,&l_74[0],&l_74[0],(void*)0},{&l_74[0],&l_74[0],(void*)0,(void*)0,&l_74[0],&l_74[0]},{&l_74[0],(void*)0,(void*)0,&l_74[0],&l_74[0],(void*)0}};
        unsigned short l_434 = 1UL;
        int i, j;
        if (l_75)
        {
            unsigned char l_86 = 1UL;
            int l_87 = 0x7F868666L;
            unsigned l_120 = 0UL;
            if (((((g_10 == (safe_lshift_func_int16_t_s_s(p_47, (0x26A5L == (0x97682755L < ((safe_sub_func_uint16_t_u_u(p_48, g_72.f1)) && p_47)))))) > (safe_rshift_func_int16_t_s_u(((p_47 ^ 7L) >= g_68), p_48))) ^ p_48) <= l_75))
            {
                char l_82 = 0xBDL;
                int *l_83 = &l_75;
                (*l_83) &= ((l_82 | g_72.f2) & l_74[0]);
                l_87 ^= (safe_sub_func_uint8_t_u_u((p_47 == l_86), (g_72.f4 != g_10)));
            }
            else
            {
                unsigned l_92 = 0UL;
                for (l_75 = 3; (l_75 >= 0); l_75 -= 1)
                {
                    char l_89 = 0xB4L;
                    int *l_102 = &l_87;
                    int *l_108 = &l_87;
                    for (g_68 = 0; (g_68 <= 3); g_68 += 1)
                    {
                        int *l_88 = (void*)0;
                        int *l_90 = &l_74[0];
                        int *l_91 = &l_87;
                        volatile int *l_96 = &g_37;
                        volatile int **l_95 = &l_96;
                        int i;
                        --l_92;
                        (*l_95) = &g_38[g_68];
                    }
                    (*l_102) ^= ((safe_add_func_int8_t_s_s(l_92, l_99)) || ((g_10 == p_47) != (safe_rshift_func_int8_t_s_s(((((p_48 | (((((l_89 == 0x3A31L) >= (((65535UL >= (g_72.f2 & 0xE2C0L)) < 0x4DL) == p_48)) & l_74[0]) <= l_89) & g_72.f0)) == 0xB3FC626DL) || 9L) <= p_48), 5))));
                    for (g_72.f3 = 0; (g_72.f3 <= 3); g_72.f3 += 1)
                    {
                        int **l_107[4][9][7] = {{{&g_73[1][0],(void*)0,&g_73[3][1],&g_73[5][3],(void*)0,(void*)0,(void*)0},{&g_73[5][3],&l_102,&l_102,&g_73[5][3],&g_73[1][1],(void*)0,&l_102},{(void*)0,(void*)0,&g_73[3][1],&l_102,(void*)0,&l_102,&l_102},{(void*)0,&l_102,(void*)0,(void*)0,(void*)0,(void*)0,&l_102},{&g_73[3][1],&l_102,(void*)0,(void*)0,&l_102,&l_102,(void*)0},{(void*)0,&g_73[5][3],(void*)0,&g_73[1][1],&l_102,&g_73[2][0],&l_102},{&l_102,&g_73[3][1],(void*)0,(void*)0,&l_102,&g_73[3][1],&g_73[1][0]},{(void*)0,&l_102,&g_73[3][1],(void*)0,&l_102,&g_73[2][0],(void*)0},{&g_73[3][1],&l_102,(void*)0,&g_73[3][1],&g_73[2][0],&g_73[3][1],(void*)0}},{{&l_102,&l_102,&g_73[5][3],&g_73[1][1],(void*)0,&l_102,(void*)0},{&g_73[3][1],(void*)0,(void*)0,&g_73[3][1],&g_73[4][1],&l_102,&g_73[1][1]},{(void*)0,(void*)0,&g_73[4][1],&g_73[3][1],(void*)0,&g_73[3][1],(void*)0},{(void*)0,&l_102,&l_102,&g_73[2][0],&g_73[2][0],&l_102,&l_102},{(void*)0,(void*)0,&g_73[3][1],(void*)0,&g_73[3][1],&g_73[4][1],(void*)0},{(void*)0,&g_73[1][1],&l_102,&g_73[4][1],&g_73[3][1],(void*)0,(void*)0},{&g_73[3][1],(void*)0,&l_102,(void*)0,&g_73[1][1],&g_73[5][3],&l_102},{&l_102,(void*)0,&g_73[3][1],&g_73[2][0],&g_73[3][1],(void*)0,&l_102},{&g_73[3][1],&l_102,&g_73[0][1],&g_73[3][1],&l_102,&g_73[3][1],(void*)0}},{{&l_102,&g_73[2][0],&g_73[5][3],&g_73[3][1],(void*)0,&l_102,(void*)0},{&g_73[1][1],(void*)0,&g_73[0][1],&g_73[1][1],&g_73[4][1],(void*)0,&l_102},{(void*)0,&l_102,&g_73[3][1],&g_73[3][1],&l_102,(void*)0,(void*)0},{(void*)0,&g_73[3][1],&l_102,&l_102,&l_102,(void*)0,&l_102},{&g_73[3][1],(void*)0,&g_73[3][1],&l_102,&g_73[0][1],(void*)0,&l_102},{&g_73[3][1],&l_102,&g_73[4][1],(void*)0,&g_73[2][0],&l_102,&l_102},{&g_73[2][0],&g_73[3][1],(void*)0,&g_73[3][1],&g_73[2][0],&g_73[1][0],(void*)0},{(void*)0,&l_102,(void*)0,(void*)0,&g_73[0][1],(void*)0,(void*)0},{&g_73[4][1],(void*)0,(void*)0,&g_73[0][1],(void*)0,(void*)0,&l_102}},{{(void*)0,(void*)0,&g_73[1][0],&g_73[2][0],&g_73[3][1],(void*)0,&g_73[3][1]},{&g_73[2][0],&l_102,&l_102,&g_73[2][0],(void*)0,&g_73[4][1],&l_102},{&g_73[3][1],&l_102,(void*)0,&g_73[0][1],&l_102,&g_73[3][1],(void*)0},{&g_73[3][1],&l_102,(void*)0,(void*)0,&l_102,(void*)0,&l_102},{&g_73[1][1],(void*)0,&g_73[3][1],&g_73[3][1],&g_73[0][1],&g_73[0][1],&g_73[3][1]},{&g_73[3][1],&g_73[2][0],&g_73[3][1],(void*)0,&l_102,&g_73[3][1],&l_102},{&l_102,&g_73[1][1],(void*)0,&l_102,&l_102,&g_73[1][0],(void*)0},{(void*)0,&l_102,(void*)0,&l_102,&g_73[0][1],&g_73[3][1],(void*)0},{&g_73[4][1],&l_102,&l_102,(void*)0,&g_73[3][1],(void*)0,&l_102}}};
                        int i, j, k;
                        l_102 = func_50(((l_74[0] <= ((void*)0 == l_103)) | (safe_rshift_func_int8_t_s_s(l_74[0], 0))), l_92);
                    }
                    (*l_108) &= l_75;
                }
                return p_48;
            }
            if (l_74[0])
            {
                short l_111 = 0x21BCL;
                for (l_86 = 0; (l_86 > 45); l_86 = safe_add_func_uint8_t_u_u(l_86, 1))
                {
                    int *l_116[4][9][5] = {{{&g_68,&l_74[0],&l_74[0],&g_68,&l_74[0]},{&l_87,&l_75,(void*)0,&g_68,&g_68},{(void*)0,&l_74[0],(void*)0,&l_75,&l_87},{&l_87,&l_75,&l_74[0],&l_87,(void*)0},{&g_68,&l_75,&l_74[0],&g_68,(void*)0},{(void*)0,&l_74[0],&g_68,&l_75,&l_87},{&l_75,&g_68,&l_87,&l_75,(void*)0},{&l_75,&l_74[0],(void*)0,&l_74[0],(void*)0},{&g_68,&g_68,&g_68,&g_68,(void*)0}},{{&l_87,&l_87,&l_75,&l_74[0],&g_68},{&l_75,&l_75,&l_87,&l_87,(void*)0},{&l_87,&g_68,(void*)0,&l_74[0],&g_68},{(void*)0,&l_74[0],&l_75,&g_68,&l_87},{&l_74[0],&l_74[0],&l_87,&l_74[0],&l_74[0]},{&l_87,&l_87,(void*)0,&l_75,&l_74[0]},{&g_68,(void*)0,&l_74[0],&l_75,&l_75},{&l_75,&l_87,&l_75,&g_68,&l_75},{(void*)0,(void*)0,&l_75,&l_87,(void*)0}},{{&g_68,&l_75,&l_74[0],&l_87,&l_75},{&l_75,&l_75,(void*)0,&l_75,&l_87},{&l_75,&l_75,&g_68,&l_75,&g_68},{&l_75,&l_74[0],&l_75,(void*)0,&g_68},{&l_87,&g_68,&l_75,&l_75,&l_87},{(void*)0,&l_87,(void*)0,&g_68,(void*)0},{&l_74[0],&l_74[0],&l_75,&l_87,&l_75},{(void*)0,&g_68,&l_74[0],&g_68,(void*)0},{&l_87,&l_75,(void*)0,&l_87,&l_87}},{{&l_74[0],&l_75,&l_75,&l_74[0],&g_68},{&l_74[0],(void*)0,&l_74[0],&l_75,&l_87},{&l_75,&l_74[0],&l_74[0],&l_75,(void*)0},{&l_87,&l_87,(void*)0,(void*)0,&l_75},{(void*)0,(void*)0,(void*)0,&l_74[0],(void*)0},{&l_75,&l_75,&l_75,&g_68,&l_87},{&l_75,&l_87,&l_87,&g_68,&g_68},{&l_75,(void*)0,&l_75,&g_68,&g_68},{(void*)0,&l_74[0],&l_74[0],(void*)0,&l_87}}};
                    int **l_121 = &g_73[3][1];
                    int i, j, k;
                    l_74[0] ^= (l_111 && (safe_rshift_func_uint16_t_u_u(((p_47 | p_48) >= (3UL || g_72.f0)), ((safe_rshift_func_int8_t_s_s((((g_38[3] || ((1L || (p_48 != ((void*)0 != l_116[0][7][4]))) == g_72.f3)) > g_10) <= p_47), p_48)) == 0x902CEC10L))));
                    (*l_121) = func_50((!p_48), (g_72.f4 <= (l_74[0] > ((l_117 != g_118) && ((p_47 && l_120) && ((g_38[3] == g_72.f4) ^ l_111))))));
                    return g_72.f2;
                }
            }
            else
            {
                unsigned char l_130 = 0UL;
                struct S0 **l_135[4] = {&l_104,&l_104,&l_104,&l_104};
                int *l_146[9][3][1] = {{{&g_68},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{&l_74[0]}},{{(void*)0},{(void*)0},{(void*)0}},{{&l_74[0]},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{&l_74[0]}},{{(void*)0},{(void*)0},{(void*)0}},{{&l_74[0]},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{&l_74[0]}},{{(void*)0},{(void*)0},{(void*)0}}};
                int i, j, k;
                if ((safe_lshift_func_uint16_t_u_u(((p_48 | g_68) > (-1L)), 0)))
                {
                    int **l_126 = &g_73[3][1];
                    int *l_129[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_129[i] = (void*)0;
                    for (g_72.f4 = (-7); (g_72.f4 == (-16)); g_72.f4 = safe_sub_func_uint32_t_u_u(g_72.f4, 6))
                    {
                        return g_72.f3;
                    }
                    (*l_126) = p_49;
                    for (g_72.f3 = 0; (g_72.f3 > 30); g_72.f3 = safe_add_func_int32_t_s_s(g_72.f3, 3))
                    {
                        (*l_126) = func_50(g_72.f2, p_48);
                        (*l_126) = &g_68;
                    }
                    l_130++;
                }
                else
                {
                    for (l_99 = (-28); (l_99 <= (-27)); l_99++)
                    {
                        int *l_136 = &l_75;
                        (*l_136) ^= (l_135[1] == &g_119);
                    }
                    for (l_75 = (-29); (l_75 < 11); l_75++)
                    {
                        int *l_139 = (void*)0;
                        l_140 &= l_74[0];
                        return l_130;
                    }
                    for (l_99 = 3; (l_99 >= 0); l_99 -= 1)
                    {
                        return p_47;
                    }
                    for (l_75 = 8; (l_75 != (-4)); l_75--)
                    {
                        l_87 = (+p_47);
                    }
                }
                l_74[0] = (g_143 >= (safe_add_func_int8_t_s_s(p_48, g_68)));
            }
            for (p_48 = 0; (p_48 == (-22)); --p_48)
            {
                int l_149 = 0x90BC55D5L;
                int l_161 = 0xF9AD4D96L;
                for (p_47 = 3; (p_47 >= 0); p_47 -= 1)
                {
                    unsigned char l_153[7] = {0x1FL,0x1FL,0x1FL,0x1FL,0x1FL,0x1FL,0x1FL};
                    int i, j;
                    if (((l_149 & g_72.f4) >= g_38[1]))
                    {
                        int **l_150 = &g_73[3][1];
                        int *l_160[3][5];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_160[i][j] = &l_74[0];
                        }
                        (*l_150) = g_73[p_47][p_47];
                        l_161 = ((safe_add_func_int8_t_s_s((((l_153[6] >= l_86) || (&g_73[p_47][p_47] != (void*)0)) > ((safe_lshift_func_uint16_t_u_s(g_72.f1, 11)) == ((l_153[1] & g_72.f3) | (!l_153[1])))), (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_48 < p_47), 65529UL)), g_72.f4)))) == (-10L));
                    }
                    else
                    {
                        l_140 ^= ((p_47 & (safe_sub_func_int8_t_s_s(0x18L, (g_72.f2 > l_164)))) || (g_72.f0 == 0x2EL));
                    }
                    if (l_153[6])
                        break;
                }
                if (l_99)
                    break;
                if (l_87)
                    continue;
            }
        }
        else
        {
            char l_177 = 6L;
            struct S0 **l_179[3];
            int l_199[10];
            int i;
            for (i = 0; i < 3; i++)
                l_179[i] = (void*)0;
            for (i = 0; i < 10; i++)
                l_199[i] = 1L;
            if ((safe_lshift_func_int8_t_s_s((0xA1D5L & ((l_74[0] != 5UL) == ((4294967295UL >= (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(l_177, ((l_177 > ((p_48 >= ((l_178 != l_179[1]) ^ 1L)) != g_38[3])) ^ l_180))), (-9L))), g_72.f0)), p_47))) ^ p_48))), 5)))
            {
                int **l_204 = &g_73[3][1];
                if ((7UL & g_72.f4))
                {
                    int *l_187 = &l_75;
                    (*l_187) ^= (((1UL >= g_68) < (safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(3UL, (p_47 ^ (l_179[1] != (void*)0)))), ((((safe_sub_func_uint32_t_u_u(((p_48 > ((+l_177) == g_37)) != p_48), l_74[0])) > 0x4BL) | 0xD4L) >= p_48)))) | g_10);
                }
                else
                {
                    int l_198 = 0xDF005D3DL;
                    struct S0 *l_202 = &g_72;
                    if ((safe_rshift_func_int16_t_s_u((~g_72.f2), 8)))
                    {
                        int *l_192 = (void*)0;
                        int *l_193 = &g_68;
                        (*l_193) |= ((l_74[0] < (safe_add_func_uint8_t_u_u((0x0A3237C0L >= p_48), (p_47 | g_38[3])))) >= (&g_68 != l_192));
                        return l_99;
                    }
                    else
                    {
                        int **l_203[6] = {&g_73[3][1],&g_73[3][1],&g_73[3][1],&g_73[3][1],&g_73[3][1],&g_73[3][1]};
                        int i;
                        l_199[1] &= (safe_mod_func_int16_t_s_s(g_143, (safe_add_func_uint8_t_u_u(l_198, l_177))));
                        p_49 = func_50((((0UL & g_72.f3) >= (safe_add_func_int8_t_s_s(((~((void*)0 != l_202)) || (((l_75 >= p_47) || p_47) <= p_48)), (g_143 || 0xD2C0L)))) <= p_47), p_48);
                        l_199[1] |= p_47;
                    }
                }
                (*l_204) = (void*)0;
            }
            else
            {
                int l_208[5] = {1L,1L,1L,1L,1L};
                unsigned char l_242 = 0xEAL;
                int l_270 = (-6L);
                unsigned l_271 = 0UL;
                int i;
                if ((safe_sub_func_uint32_t_u_u((((l_207 == (void*)0) | l_208[3]) == (safe_lshift_func_int16_t_s_u((((safe_mod_func_uint16_t_u_u(g_72.f1, l_164)) & 0x404CL) || ((((-2L) ^ p_48) && (0UL == p_47)) > 0xF9CEL)), 12))), p_48)))
                {
                    char l_219 = 0x42L;
                    unsigned short l_229[6][10] = {{0x2F8CL,0x095AL,65530UL,0xA05CL,65535UL,65535UL,0xA05CL,65530UL,0x095AL,0x2F8CL},{65530UL,0x8AC1L,0x095AL,0x361AL,0x9FC7L,65535UL,65530UL,0x2F8CL,65535UL,0x095AL},{0x8AC1L,0x2F8CL,0UL,0x8AC1L,0x9FC7L,0xC847L,0x9FC7L,0x8AC1L,0UL,0x2F8CL},{0x9FC7L,65530UL,65535UL,0xB076L,65535UL,65535UL,0x2F8CL,0x095AL,65530UL,0xA05CL},{0x361AL,0x8AC1L,65535UL,65535UL,0x5C8FL,65535UL,65535UL,0x5C8FL,65535UL,65535UL},{0x9FC7L,0x9FC7L,0x7186L,0x2F8CL,0x9FC7L,0UL,0xA05CL,0xB076L,5UL,0xA05CL}};
                    int l_241 = (-6L);
                    int i, j;
                    for (g_72.f3 = 26; (g_72.f3 < 22); g_72.f3 = safe_sub_func_uint16_t_u_u(g_72.f3, 1))
                    {
                        int **l_220 = &g_73[3][1];
                        g_216 = g_215;
                        l_219 &= (safe_add_func_int16_t_s_s(g_216.f0, g_72.f4));
                        (*l_220) = &g_68;
                        (*l_220) = p_49;
                    }
                    for (g_143 = 0; (g_143 >= 8); g_143++)
                    {
                        int *l_236 = (void*)0;
                        int *l_237 = &l_74[0];
                        (*l_237) = (safe_rshift_func_uint8_t_u_u((0x06FFBB3FL >= (((safe_add_func_int8_t_s_s(0x8DL, (g_215.f3 ^ ((safe_lshift_func_int8_t_s_u((0L & g_72.f0), 3)) > (l_229[0][2] <= g_10))))) | (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((g_10 != 0xA4L) || p_47), 5)) & l_99), 15)), g_143))) != l_199[1])), l_208[3]));
                    }
                    if (l_238)
                    {
                        int *l_239[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_239[i] = &l_208[4];
                        (*l_103) = (*l_117);
                        ++l_242;
                        l_75 = g_245;
                    }
                    else
                    {
                        return p_47;
                    }
                }
                else
                {
                    unsigned l_255[6] = {0xF999C134L,0x1115CFEDL,0x1115CFEDL,0xF999C134L,0x1115CFEDL,0x1115CFEDL};
                    int *l_266 = (void*)0;
                    int *l_267 = &l_199[3];
                    int *l_268 = (void*)0;
                    int *l_269[9][9] = {{&l_140,&g_68,&l_140,&g_68,&l_140,&g_68,&l_140,&g_68,&l_140},{&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0]},{&l_140,&g_68,&l_140,&g_68,&l_140,&g_68,&l_140,&g_68,&l_140},{&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0]},{&l_140,&g_68,&l_140,&g_68,&l_140,&g_68,&l_140,&g_68,&l_140},{&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0]},{&l_140,&g_68,&l_140,&g_68,&l_140,&g_68,&l_140,&g_68,&l_140},{&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[0]},{&l_140,&g_68,&l_140,&g_68,&l_140,&g_68,&l_140,&g_68,&l_140}};
                    int **l_274 = &l_269[2][8];
                    int i, j;
                    if ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(g_215.f0, l_242)), (0x20FCL | (safe_lshift_func_uint8_t_u_s(l_208[3], (0xCC902690L & (p_47 ^ 255UL))))))))
                    {
                        int l_254 = 0xDE88E6AFL;
                        int **l_262 = &g_73[3][1];
                        volatile int *l_264 = &g_216.f2;
                        volatile int **l_263 = &l_264;
                        (*l_262) = func_50((g_215.f4 < (safe_mod_func_uint16_t_u_u(((((p_48 == l_254) ^ (l_255[1] == g_72.f4)) ^ l_255[1]) == (safe_add_func_int16_t_s_s((((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(p_47, l_254)), (g_10 <= 0x41L))) | l_199[1]) & g_10), g_72.f4))), l_99))), l_177);
                        (*l_263) = &g_37;
                        (*l_262) = func_50(p_48, g_38[3]);
                        (*l_264) = l_255[1];
                    }
                    else
                    {
                        return g_216.f3;
                    }
                    for (l_242 = 0; (l_242 <= 3); l_242 += 1)
                    {
                        unsigned char l_265[4][1][1];
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_265[i][j][k] = 255UL;
                            }
                        }
                        if (l_265[3][0][0])
                            break;
                    }
                    l_271--;
                    (*l_274) = &l_75;
                }
                return p_48;
            }
        }
        if (p_48)
        {
            int *l_275 = &l_74[0];
            (*l_275) &= 0x1D6B3C65L;
            if ((0x35L || (g_68 ^ ((*l_275) <= 0x6BL))))
            {
                g_277 = g_276;
                for (l_99 = 0; (l_99 <= 3); l_99 += 1)
                {
                    struct S0 **l_284[5][3] = {{&g_119,&g_119,&l_104},{&l_104,&l_104,&g_119},{(void*)0,&g_119,&g_119},{&g_119,&l_104,&l_104},{(void*)0,&l_104,(void*)0}};
                    int i, j;
                    for (g_277.f0 = 0; (g_277.f0 <= 3); g_277.f0 += 1)
                    {
                        return g_72.f1;
                    }
                    (*l_275) ^= (!(safe_sub_func_int32_t_s_s(0xD71BC48CL, (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((&l_104 == l_284[4][2]) < g_277.f1), (0xB624L <= (safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u((g_289 == (g_277.f0 >= p_48)), ((safe_sub_func_int32_t_s_s(((((250UL ^ g_289) || l_180) < 0xAB45L) != (-1L)), 4294967293UL)) & p_48))) && p_47), 9))))) >= g_289), g_277.f3)))));
                    (*l_275) |= l_292;
                    for (g_143 = 0; (g_143 <= 0); g_143 += 1)
                    {
                        int i;
                        return l_74[g_143];
                    }
                }
            }
            else
            {
                char l_300[8][7][4] = {{{0xB7L,0x2CL,0x95L,0L},{0x2CL,0x81L,0xB1L,0xB7L},{1L,0x8AL,0x8AL,1L},{1L,0L,0xB1L,5L},{0x2CL,1L,0x95L,0xBEL},{0xB7L,2L,0xB7L,0xBEL},{0x95L,1L,0x2CL,5L}},{{0xB1L,0L,1L,1L},{0x8AL,0x8AL,1L,0xB7L},{0xB1L,0x81L,0x2CL,0L},{0x95L,0x2CL,0xB7L,0x2CL},{0xB7L,0x2CL,0x95L,0L},{0x2CL,0x81L,0xB1L,0xB7L},{1L,0x8AL,0x8AL,1L}},{{1L,0L,0xB1L,5L},{0x2CL,1L,0x95L,0xBEL},{0xB7L,2L,0xB7L,0xBEL},{0x95L,1L,0x2CL,5L},{0xB1L,0L,1L,1L},{0x8AL,0x8AL,1L,0xB7L},{0xB1L,0xB7L,0x81L,0xBEL}},{{0L,0x81L,0x8AL,0x81L},{0x8AL,0x81L,0L,0xBEL},{0x81L,0xB7L,1L,0x8AL},{0x2CL,2L,2L,0x2CL},{0x2CL,0xBEL,1L,0xB1L},{0x81L,0x2CL,0L,5L},{0x8AL,0x95L,0x8AL,5L}},{{0L,0x2CL,0x81L,0xB1L},{1L,0xBEL,0x2CL,0x2CL},{2L,2L,0x2CL,0x8AL},{1L,0xB7L,0x81L,0xBEL},{0L,0x81L,0x8AL,0x81L},{0x8AL,0x81L,0L,0xBEL},{0x81L,0xB7L,1L,0x8AL}},{{0x2CL,2L,2L,0x2CL},{0x2CL,0xBEL,1L,0xB1L},{0x81L,0x2CL,0L,5L},{0x8AL,0x95L,0x8AL,5L},{0L,0x2CL,0x81L,0xB1L},{1L,0xBEL,0x2CL,0x2CL},{2L,2L,0x2CL,0x8AL}},{{1L,0xB7L,0x81L,0xBEL},{0L,0x81L,0x8AL,0x81L},{0L,2L,0xB1L,1L},{2L,0x95L,0xB7L,0L},{0x8AL,0xBEL,0xBEL,0x8AL},{0x8AL,1L,0xB7L,0x81L},{2L,0x8AL,0xB1L,0x2CL}},{{0L,5L,0L,0x2CL},{0xB1L,0x8AL,2L,0x81L},{0xB7L,1L,0x8AL,0x8AL},{0xBEL,0xBEL,0x8AL,0L},{0xB7L,0x95L,2L,1L},{0xB1L,2L,0L,2L},{0L,2L,0xB1L,1L}}};
                int i, j, k;
                for (p_47 = 9; (p_47 >= 8); --p_47)
                {
                    struct S0 **l_299 = &g_119;
                    for (l_292 = 8; (l_292 == 4); l_292 = safe_sub_func_int16_t_s_s(l_292, 6))
                    {
                        (*l_275) = 0x73BF1479L;
                    }
                    (*l_275) &= 1L;
                    (*l_275) = (safe_add_func_int32_t_s_s((l_299 != (void*)0), g_245));
                    if (l_300[4][3][2])
                        break;
                }
            }
        }
        else
        {
            int *l_303[6][4][8] = {{{&l_74[0],&l_74[0],&l_75,&l_74[0],&l_75,&g_68,&g_68,&l_74[0]},{(void*)0,&g_68,&l_75,&l_75,(void*)0,(void*)0,(void*)0,&l_75},{&l_75,(void*)0,&l_75,&g_68,(void*)0,(void*)0,&l_75,&g_68},{&l_75,&g_68,(void*)0,(void*)0,&g_68,&g_68,(void*)0,(void*)0}},{{&l_75,&l_74[0],&l_74[0],&g_68,(void*)0,&g_68,&l_74[0],&l_74[0]},{&l_75,&l_74[0],(void*)0,&g_68,(void*)0,&g_68,&l_140,(void*)0},{&l_74[0],(void*)0,(void*)0,&l_74[0],(void*)0,&l_74[0],(void*)0,(void*)0},{&g_68,&l_74[0],&g_68,&l_75,&g_68,&l_74[0],&g_68,&g_68}},{{&g_68,&l_74[0],&g_68,&g_68,&l_75,&l_74[0],&l_75,&l_74[0]},{(void*)0,(void*)0,&l_74[0],(void*)0,&l_75,&l_75,(void*)0,&l_75},{&g_68,&l_74[0],(void*)0,&l_74[0],&g_68,&g_68,(void*)0,&l_75},{&g_68,&l_74[0],(void*)0,(void*)0,(void*)0,(void*)0,&l_75,&l_74[0]}},{{&l_74[0],&g_68,(void*)0,&g_68,(void*)0,&g_68,(void*)0,&g_68},{(void*)0,(void*)0,(void*)0,&l_75,&l_75,&g_68,(void*)0,(void*)0},{(void*)0,&g_68,&l_74[0],&l_74[0],&l_140,(void*)0,&l_75,(void*)0},{(void*)0,&l_74[0],&g_68,&g_68,&l_75,&g_68,&g_68,&l_74[0]}},{{(void*)0,&l_74[0],&g_68,&g_68,(void*)0,&l_75,(void*)0,(void*)0},{&l_74[0],(void*)0,(void*)0,&l_74[0],(void*)0,&l_74[0],(void*)0,&l_74[0]},{(void*)0,(void*)0,&l_75,&l_74[0],&l_75,(void*)0,(void*)0,&l_74[0]},{&l_75,(void*)0,(void*)0,&l_74[0],(void*)0,(void*)0,&g_68,(void*)0}},{{&l_140,&g_68,(void*)0,&g_68,(void*)0,&l_74[0],&l_75,&l_74[0]},{&l_75,(void*)0,&g_68,(void*)0,&l_75,(void*)0,&l_140,&l_74[0]},{(void*)0,(void*)0,&l_75,&g_68,&g_68,&l_74[0],(void*)0,(void*)0},{(void*)0,(void*)0,&l_75,&l_74[0],&l_140,&g_68,&l_140,&l_74[0]}}};
            int **l_305[7];
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_305[i] = &g_73[2][2];
            l_304 = ((safe_lshift_func_int16_t_s_u(0x8784L, 14)) < ((p_47 && p_47) && (l_303[4][1][3] != p_49)));
            g_73[3][1] = func_50(g_277.f4, g_276.f4);
            l_178 = l_178;
            l_140 ^= l_292;
        }
        if ((((safe_mod_func_uint16_t_u_u(65535UL, 0x4C78L)) <= 0xBF29982BL) | p_48))
        {
            volatile int *l_315[6];
            volatile int **l_314[6] = {&l_315[1],&l_315[1],&l_315[1],&l_315[1],&l_315[1],&l_315[1]};
            int i;
            for (i = 0; i < 6; i++)
                l_315[i] = (void*)0;
            for (g_276.f0 = 0; (g_276.f0 < 53); g_276.f0 = safe_add_func_int32_t_s_s(g_276.f0, 1))
            {
                if (p_47)
                    break;
                for (g_276.f3 = 6; (g_276.f3 >= 34); g_276.f3 = safe_add_func_uint32_t_u_u(g_276.f3, 6))
                {
                    int *l_312 = (void*)0;
                    int *l_313 = &l_75;
                    (*l_313) &= l_99;
                }
            }
            l_316 = &g_38[3];
        }
        else
        {
            unsigned char l_319 = 1UL;
            int *l_331 = &g_68;
            int l_336[7];
            struct S0 *l_350[8][5][6] = {{{(void*)0,(void*)0,&g_364,&g_371,&g_366,&g_376},{(void*)0,&g_365[4],&g_374[4][1][2],(void*)0,&g_353,&g_376},{(void*)0,&g_367,&g_364,&g_374[4][1][2],&g_370,&g_357},{&g_353,(void*)0,&g_361,(void*)0,(void*)0,&g_368},{&g_354,(void*)0,(void*)0,&g_376,&g_375,&g_362}},{{&g_361,&g_360[0],&g_372,&g_372,&g_360[0],&g_361},{&g_374[4][1][2],&g_362,&g_363,(void*)0,&g_369,&g_359},{(void*)0,&g_361,&g_376,&g_351,&g_366,(void*)0},{(void*)0,&g_375,&g_351,&g_367,&g_370,&g_363},{&g_365[4],&g_369,&g_360[0],&g_364,&g_357,&g_361}},{{&g_352,(void*)0,&g_375,&g_366,&g_372,&g_365[4]},{&g_370,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_364,&g_370,&g_365[4],&g_373,&g_368},{(void*)0,&g_359,&g_353,&g_362,&g_358,(void*)0},{&g_363,&g_359,&g_366,(void*)0,&g_373,(void*)0}},{{&g_355,&g_364,&g_362,&g_371,(void*)0,&g_356},{&g_353,(void*)0,&g_363,&g_361,&g_372,&g_371},{&g_359,(void*)0,&g_369,&g_357,&g_357,&g_369},{&g_369,&g_369,(void*)0,&g_358,&g_370,&g_372},{&g_361,&g_375,(void*)0,(void*)0,&g_366,(void*)0}},{{(void*)0,&g_361,(void*)0,&g_353,&g_369,&g_372},{(void*)0,&g_353,(void*)0,&g_373,&g_351,&g_369},{&g_373,&g_351,&g_369,&g_374[4][1][2],&g_359,(void*)0},{&g_357,&g_374[4][1][2],&g_354,&g_372,&g_353,&g_372},{&g_353,(void*)0,&g_353,&g_360[0],&g_355,&g_363}},{{(void*)0,(void*)0,(void*)0,&g_354,&g_363,&g_359},{(void*)0,&g_375,(void*)0,&g_354,(void*)0,&g_360[0]},{(void*)0,&g_353,(void*)0,&g_360[0],(void*)0,&g_368},{&g_353,(void*)0,&g_362,&g_372,&g_370,&g_358},{&g_357,&g_355,(void*)0,&g_365[4],&g_352,&g_352}},{{(void*)0,&g_351,&g_351,(void*)0,&g_365[4],&g_354},{&g_355,&g_356,&g_369,(void*)0,(void*)0,&g_362},{(void*)0,(void*)0,&g_366,(void*)0,(void*)0,&g_376},{&g_352,&g_356,&g_370,&g_375,&g_365[4],(void*)0},{&g_361,&g_351,&g_357,&g_373,&g_352,(void*)0}},{{&g_376,&g_355,&g_372,&g_352,&g_370,&g_351},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_371,&g_353,&g_373,&g_356,(void*)0,(void*)0},{&g_354,&g_375,&g_358,(void*)0,&g_354,(void*)0},{(void*)0,&g_368,(void*)0,&g_375,&g_371,(void*)0}}};
            struct S0 *l_409 = &g_358;
            unsigned short l_451 = 0x3AFFL;
            unsigned char l_468 = 0x54L;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_336[i] = 0L;
            for (g_143 = 0; (g_143 <= 3); g_143 += 1)
            {
                char l_324 = 0xE1L;
                int *l_325 = &l_140;
                int **l_328 = &l_325;
                int l_335[8];
                unsigned l_339 = 0xBD542BDAL;
                int i;
                for (i = 0; i < 8; i++)
                    l_335[i] = 0x60D75D45L;
                (*l_325) ^= ((safe_sub_func_uint8_t_u_u(l_319, ((safe_sub_func_int8_t_s_s(0xD7L, (safe_mod_func_int32_t_s_s(l_180, l_324)))) != ((((((void*)0 == &g_37) ^ 0xA647725EL) > (~(g_215.f2 < l_75))) == l_99) > g_277.f0)))) || l_324);
                (*l_328) = func_50((safe_mod_func_uint16_t_u_u((&p_49 == &l_325), p_48)), (*l_325));
                for (g_72.f0 = 0; (g_72.f0 <= 3); g_72.f0 += 1)
                {
                    int l_338 = 0xD67A228AL;
                    int i, j;
                    if (((((p_47 <= (safe_rshift_func_int16_t_s_s(l_140, 4))) && (&g_73[(g_72.f0 + 2)][g_143] != &g_73[(g_143 + 1)][g_72.f0])) >= l_99) == p_47))
                    {
                        l_75 &= p_47;
                        (*l_316) = (p_48 != l_319);
                        g_73[3][1] = l_331;
                        if (p_48)
                            continue;
                    }
                    else
                    {
                        struct S0 ***l_332[10][5] = {{&l_178,&l_178,&l_117,&l_117,&l_103},{&l_117,&l_103,&l_103,&l_103,&l_103},{&l_103,&g_118,&l_117,&l_103,&l_103},{&l_117,&l_103,&l_117,&l_103,&l_117},{&l_117,&l_178,&g_118,&l_103,&l_178},{&l_117,&g_118,&g_118,&l_117,&l_103},{&l_103,&l_117,&l_117,&l_178,&l_178},{&l_117,&l_117,&l_117,&l_103,&l_117},{&l_178,&g_118,&l_103,&l_178,&l_103},{&l_178,&l_178,&l_117,&l_117,&l_103}};
                        int l_334 = 0x7B07FBC5L;
                        int l_337[2][1][7] = {{{1L,0x5F78BC29L,1L,(-1L),(-1L),1L,0x5F78BC29L}},{{(-1L),0x5F78BC29L,0L,0L,0x5F78BC29L,(-1L),0x5F78BC29L}}};
                        int i, j, k;
                        l_103 = l_178;
                        (*l_328) = l_333[3][1];
                        l_339++;
                    }
                    return p_47;
                }
                (*l_316) |= (p_48 <= p_48);
            }
            if (((void*)0 == &g_73[3][1]))
            {
                unsigned l_419 = 4294967292UL;
                int l_442 = 0x2815D426L;
                int l_443 = (-5L);
                int l_448 = 0x79C13270L;
                int l_449 = (-1L);
                if ((safe_mod_func_int8_t_s_s((&l_333[2][5] == &g_73[4][1]), (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(((*l_316) == (((safe_rshift_func_uint16_t_u_s(g_276.f4, 14)) == ((l_349 || g_277.f0) > (g_143 > ((*l_117) != l_350[7][0][1])))) || p_47)))), g_68)))))
                {
                    if (l_377[1])
                    {
                        unsigned l_378[9] = {4294967288UL,4294967289UL,4294967288UL,4294967289UL,4294967288UL,4294967289UL,4294967288UL,4294967289UL,4294967288UL};
                        int i;
                        l_378[4]++;
                    }
                    else
                    {
                        int **l_381 = &g_73[3][2];
                        (*l_381) = p_49;
                        (*l_381) = &l_336[1];
                        (*l_316) |= (*l_331);
                    }
                    for (l_349 = 0; (l_349 > 21); l_349++)
                    {
                        int l_384 = 0xB8EEB56EL;
                        (*l_331) ^= (g_352.f2 && l_384);
                        (*l_331) |= (safe_add_func_uint32_t_u_u((g_372.f1 <= g_359.f0), l_384));
                    }
                }
                else
                {
                    unsigned l_399[3][10] = {{0xB8FC1A20L,0x5B680364L,0xA48810ABL,0x5B680364L,0xB8FC1A20L,0xB8FC1A20L,0x5B680364L,0xA48810ABL,0x5B680364L,0xB8FC1A20L},{0xB8FC1A20L,0x5B680364L,0xA48810ABL,0xB8FC1A20L,0UL,0UL,0xB8FC1A20L,0x161C96B1L,0xB8FC1A20L,0UL},{0UL,0xB8FC1A20L,0x161C96B1L,0xB8FC1A20L,0UL,0UL,0xB8FC1A20L,0x161C96B1L,0xB8FC1A20L,0UL}};
                    int l_400 = 0x393B3513L;
                    short l_418 = 0L;
                    int i, j;
                    if (((safe_lshift_func_int16_t_s_s((((((&g_119 == &g_119) ^ (g_370.f0 < (!g_359.f3))) == 0x15E94974L) | (safe_rshift_func_int16_t_s_u(g_277.f4, 0))) < (g_366.f2 <= (safe_add_func_uint32_t_u_u((((*g_118) != (*g_118)) <= p_47), 4294967291UL)))), 8)) >= g_362.f0))
                    {
                        int **l_393 = &g_73[3][1];
                        (*l_316) |= (*l_331);
                        (*l_393) = p_49;
                        (*l_316) |= (safe_sub_func_uint16_t_u_u(p_48, p_48));
                    }
                    else
                    {
                        volatile int **l_396 = &l_316;
                        (*l_396) = &g_38[3];
                    }
                    if (((safe_rshift_func_uint8_t_u_s(l_399[2][6], (&g_68 != p_49))) && l_400))
                    {
                        int **l_401 = (void*)0;
                        int **l_402 = &g_73[3][1];
                        (*l_402) = p_49;
                        (*l_402) = func_50(g_356.f0, ((safe_add_func_uint32_t_u_u(p_48, (~((((safe_rshift_func_uint8_t_u_s(((*l_331) < (0xD33F4DE4L & (*l_316))), ((safe_lshift_func_int16_t_s_u(g_376.f0, g_369.f4)) & p_48))) | (l_399[2][6] && 65535UL)) == g_370.f4) != 4294967291UL)))) <= 65532UL));
                        g_73[3][1] = (void*)0;
                        (*l_402) = func_50(g_360[0].f1, l_399[0][3]);
                    }
                    else
                    {
                        (*l_316) = (l_409 != l_350[0][1][0]);
                        l_419 |= (safe_add_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((0xB4L < 0x24L) & (*l_331)), ((((&l_316 != &p_49) & (g_375.f2 & (safe_mod_func_uint8_t_u_u(g_352.f4, (safe_lshift_func_uint16_t_u_u(p_48, 7)))))) <= 1UL) ^ 0x94L))) != p_47), l_418));
                    }
                    for (g_352.f3 = 0; (g_352.f3 < 22); ++g_352.f3)
                    {
                        g_73[3][1] = (void*)0;
                        l_336[6] &= ((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((g_38[3] != (*l_331)), (((safe_add_func_uint32_t_u_u(p_48, p_47)) && (g_355.f4 < (((((void*)0 == (*l_117)) || p_48) | (((safe_sub_func_uint32_t_u_u(l_419, 0xC8924899L)) >= p_48) != 4294967295UL)) >= p_48))) != g_373.f3))), p_47)) || 1L);
                    }
                    (*l_331) ^= ((safe_add_func_uint8_t_u_u(p_48, (g_371.f0 != ((1L >= l_434) <= p_48)))) ^ (safe_rshift_func_uint8_t_u_u((~(safe_add_func_int8_t_s_s((0L >= ((void*)0 == &g_119)), 0xFFL))), g_368.f3)));
                }
                p_49 = func_50(l_419, g_367.f4);
                for (g_351.f0 = 22; (g_351.f0 != 7); g_351.f0 = safe_sub_func_int32_t_s_s(g_351.f0, 8))
                {
                    short l_441[3];
                    int l_444 = 0x86022B31L;
                    int l_445 = 0xFE378949L;
                    int l_446[2][7][2] = {{{0xE0090EBCL,0xCE0BD187L},{0xE0090EBCL,0xE0090EBCL},{0xCE0BD187L,0xE0090EBCL},{0xE0090EBCL,0xCE0BD187L},{0xE0090EBCL,0xE0090EBCL},{0xCE0BD187L,0xE0090EBCL},{0xE0090EBCL,0xCE0BD187L}},{{0xE0090EBCL,0xE0090EBCL},{0xCE0BD187L,0xE0090EBCL},{0xE0090EBCL,0xCE0BD187L},{0xE0090EBCL,0xE0090EBCL},{0xCE0BD187L,0xE0090EBCL},{0xE0090EBCL,0xCE0BD187L},{0xE0090EBCL,0xE0090EBCL}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_441[i] = 0x5A53L;
                    for (g_367.f4 = 3; (g_367.f4 >= 0); g_367.f4 -= 1)
                    {
                        int l_447 = 0L;
                        int l_450 = 3L;
                        int i;
                        g_38[g_367.f4] = (l_419 >= (((p_47 || 4L) == g_37) >= g_359.f4));
                        l_451++;
                    }
                    for (l_240 = 0; (l_240 != 6); l_240 = safe_add_func_int16_t_s_s(l_240, 1))
                    {
                        volatile int **l_456 = (void*)0;
                        volatile int **l_457 = &l_316;
                        (*l_457) = &g_38[0];
                        (*l_457) = &g_37;
                    }
                    l_449 |= ((safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((g_376.f0 ^ (safe_add_func_int16_t_s_s((-8L), p_48))) | (*l_331)), g_367.f4)), 4)) < l_443) ^ (safe_sub_func_int32_t_s_s(0L, (l_468 ^ p_48)))), p_47)) > l_444);
                }
            }
            else
            {
                int l_469 = 1L;
                int l_470 = 0x7083CBA3L;
                int l_471 = 0x7F230437L;
                int l_472 = 0x0C8B65B7L;
                int l_473 = 0x081BE95CL;
                int l_474 = (-2L);
                int l_475 = 0xA3FCB67CL;
                int l_477 = 0xF82673A5L;
                int l_478 = 3L;
                int l_480 = 0xDE65356EL;
                int l_481 = (-1L);
                ++l_482;
            }
        }
        (*l_316) = p_48;
    }
    else
    {
        for (g_72.f3 = 0; (g_72.f3 <= 39); g_72.f3 = safe_add_func_int32_t_s_s(g_72.f3, 9))
        {
            unsigned char l_487 = 0x93L;
            if (l_487)
                break;
            return g_354.f3;
        }
    }
    --l_496;
    (*l_316) ^= (*l_488);
    return g_277.f3;
}







static int * func_50(unsigned p_51, unsigned short p_52)
{
    short l_62 = 5L;
    int *l_67 = &g_68;
    struct S0 **l_69 = (void*)0;
    struct S0 *l_71 = &g_72;
    struct S0 **l_70 = &l_71;
    (*l_67) = ((l_62 | (safe_rshift_func_int16_t_s_u((+((l_62 || p_52) ^ (p_51 != (((void*)0 != &g_37) & l_62)))), ((g_37 > (l_62 >= p_52)) >= l_62)))) != 0L);
    (*l_70) = (void*)0;
    return g_73[3][1];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_38[i], "g_38[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_72.f3, "g_72.f3", print_hash_value);
    transparent_crc(g_72.f4, "g_72.f4", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_215.f1, "g_215.f1", print_hash_value);
    transparent_crc(g_215.f2, "g_215.f2", print_hash_value);
    transparent_crc(g_215.f3, "g_215.f3", print_hash_value);
    transparent_crc(g_215.f4, "g_215.f4", print_hash_value);
    transparent_crc(g_216.f0, "g_216.f0", print_hash_value);
    transparent_crc(g_216.f1, "g_216.f1", print_hash_value);
    transparent_crc(g_216.f2, "g_216.f2", print_hash_value);
    transparent_crc(g_216.f3, "g_216.f3", print_hash_value);
    transparent_crc(g_216.f4, "g_216.f4", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_276.f0, "g_276.f0", print_hash_value);
    transparent_crc(g_276.f1, "g_276.f1", print_hash_value);
    transparent_crc(g_276.f2, "g_276.f2", print_hash_value);
    transparent_crc(g_276.f3, "g_276.f3", print_hash_value);
    transparent_crc(g_276.f4, "g_276.f4", print_hash_value);
    transparent_crc(g_277.f0, "g_277.f0", print_hash_value);
    transparent_crc(g_277.f1, "g_277.f1", print_hash_value);
    transparent_crc(g_277.f2, "g_277.f2", print_hash_value);
    transparent_crc(g_277.f3, "g_277.f3", print_hash_value);
    transparent_crc(g_277.f4, "g_277.f4", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_351.f0, "g_351.f0", print_hash_value);
    transparent_crc(g_351.f1, "g_351.f1", print_hash_value);
    transparent_crc(g_351.f2, "g_351.f2", print_hash_value);
    transparent_crc(g_351.f3, "g_351.f3", print_hash_value);
    transparent_crc(g_351.f4, "g_351.f4", print_hash_value);
    transparent_crc(g_352.f0, "g_352.f0", print_hash_value);
    transparent_crc(g_352.f1, "g_352.f1", print_hash_value);
    transparent_crc(g_352.f2, "g_352.f2", print_hash_value);
    transparent_crc(g_352.f3, "g_352.f3", print_hash_value);
    transparent_crc(g_352.f4, "g_352.f4", print_hash_value);
    transparent_crc(g_353.f0, "g_353.f0", print_hash_value);
    transparent_crc(g_353.f1, "g_353.f1", print_hash_value);
    transparent_crc(g_353.f2, "g_353.f2", print_hash_value);
    transparent_crc(g_353.f3, "g_353.f3", print_hash_value);
    transparent_crc(g_353.f4, "g_353.f4", print_hash_value);
    transparent_crc(g_354.f0, "g_354.f0", print_hash_value);
    transparent_crc(g_354.f1, "g_354.f1", print_hash_value);
    transparent_crc(g_354.f2, "g_354.f2", print_hash_value);
    transparent_crc(g_354.f3, "g_354.f3", print_hash_value);
    transparent_crc(g_354.f4, "g_354.f4", print_hash_value);
    transparent_crc(g_355.f0, "g_355.f0", print_hash_value);
    transparent_crc(g_355.f1, "g_355.f1", print_hash_value);
    transparent_crc(g_355.f2, "g_355.f2", print_hash_value);
    transparent_crc(g_355.f3, "g_355.f3", print_hash_value);
    transparent_crc(g_355.f4, "g_355.f4", print_hash_value);
    transparent_crc(g_356.f0, "g_356.f0", print_hash_value);
    transparent_crc(g_356.f1, "g_356.f1", print_hash_value);
    transparent_crc(g_356.f2, "g_356.f2", print_hash_value);
    transparent_crc(g_356.f3, "g_356.f3", print_hash_value);
    transparent_crc(g_356.f4, "g_356.f4", print_hash_value);
    transparent_crc(g_357.f0, "g_357.f0", print_hash_value);
    transparent_crc(g_357.f1, "g_357.f1", print_hash_value);
    transparent_crc(g_357.f2, "g_357.f2", print_hash_value);
    transparent_crc(g_357.f3, "g_357.f3", print_hash_value);
    transparent_crc(g_357.f4, "g_357.f4", print_hash_value);
    transparent_crc(g_358.f0, "g_358.f0", print_hash_value);
    transparent_crc(g_358.f1, "g_358.f1", print_hash_value);
    transparent_crc(g_358.f2, "g_358.f2", print_hash_value);
    transparent_crc(g_358.f3, "g_358.f3", print_hash_value);
    transparent_crc(g_358.f4, "g_358.f4", print_hash_value);
    transparent_crc(g_359.f0, "g_359.f0", print_hash_value);
    transparent_crc(g_359.f1, "g_359.f1", print_hash_value);
    transparent_crc(g_359.f2, "g_359.f2", print_hash_value);
    transparent_crc(g_359.f3, "g_359.f3", print_hash_value);
    transparent_crc(g_359.f4, "g_359.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_360[i].f0, "g_360[i].f0", print_hash_value);
        transparent_crc(g_360[i].f1, "g_360[i].f1", print_hash_value);
        transparent_crc(g_360[i].f2, "g_360[i].f2", print_hash_value);
        transparent_crc(g_360[i].f3, "g_360[i].f3", print_hash_value);
        transparent_crc(g_360[i].f4, "g_360[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_361.f0, "g_361.f0", print_hash_value);
    transparent_crc(g_361.f1, "g_361.f1", print_hash_value);
    transparent_crc(g_361.f2, "g_361.f2", print_hash_value);
    transparent_crc(g_361.f3, "g_361.f3", print_hash_value);
    transparent_crc(g_361.f4, "g_361.f4", print_hash_value);
    transparent_crc(g_362.f0, "g_362.f0", print_hash_value);
    transparent_crc(g_362.f1, "g_362.f1", print_hash_value);
    transparent_crc(g_362.f2, "g_362.f2", print_hash_value);
    transparent_crc(g_362.f3, "g_362.f3", print_hash_value);
    transparent_crc(g_362.f4, "g_362.f4", print_hash_value);
    transparent_crc(g_363.f0, "g_363.f0", print_hash_value);
    transparent_crc(g_363.f1, "g_363.f1", print_hash_value);
    transparent_crc(g_363.f2, "g_363.f2", print_hash_value);
    transparent_crc(g_363.f3, "g_363.f3", print_hash_value);
    transparent_crc(g_363.f4, "g_363.f4", print_hash_value);
    transparent_crc(g_364.f0, "g_364.f0", print_hash_value);
    transparent_crc(g_364.f1, "g_364.f1", print_hash_value);
    transparent_crc(g_364.f2, "g_364.f2", print_hash_value);
    transparent_crc(g_364.f3, "g_364.f3", print_hash_value);
    transparent_crc(g_364.f4, "g_364.f4", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_365[i].f0, "g_365[i].f0", print_hash_value);
        transparent_crc(g_365[i].f1, "g_365[i].f1", print_hash_value);
        transparent_crc(g_365[i].f2, "g_365[i].f2", print_hash_value);
        transparent_crc(g_365[i].f3, "g_365[i].f3", print_hash_value);
        transparent_crc(g_365[i].f4, "g_365[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_366.f0, "g_366.f0", print_hash_value);
    transparent_crc(g_366.f1, "g_366.f1", print_hash_value);
    transparent_crc(g_366.f2, "g_366.f2", print_hash_value);
    transparent_crc(g_366.f3, "g_366.f3", print_hash_value);
    transparent_crc(g_366.f4, "g_366.f4", print_hash_value);
    transparent_crc(g_367.f0, "g_367.f0", print_hash_value);
    transparent_crc(g_367.f1, "g_367.f1", print_hash_value);
    transparent_crc(g_367.f2, "g_367.f2", print_hash_value);
    transparent_crc(g_367.f3, "g_367.f3", print_hash_value);
    transparent_crc(g_367.f4, "g_367.f4", print_hash_value);
    transparent_crc(g_368.f0, "g_368.f0", print_hash_value);
    transparent_crc(g_368.f1, "g_368.f1", print_hash_value);
    transparent_crc(g_368.f2, "g_368.f2", print_hash_value);
    transparent_crc(g_368.f3, "g_368.f3", print_hash_value);
    transparent_crc(g_368.f4, "g_368.f4", print_hash_value);
    transparent_crc(g_369.f0, "g_369.f0", print_hash_value);
    transparent_crc(g_369.f1, "g_369.f1", print_hash_value);
    transparent_crc(g_369.f2, "g_369.f2", print_hash_value);
    transparent_crc(g_369.f3, "g_369.f3", print_hash_value);
    transparent_crc(g_369.f4, "g_369.f4", print_hash_value);
    transparent_crc(g_370.f0, "g_370.f0", print_hash_value);
    transparent_crc(g_370.f1, "g_370.f1", print_hash_value);
    transparent_crc(g_370.f2, "g_370.f2", print_hash_value);
    transparent_crc(g_370.f3, "g_370.f3", print_hash_value);
    transparent_crc(g_370.f4, "g_370.f4", print_hash_value);
    transparent_crc(g_371.f0, "g_371.f0", print_hash_value);
    transparent_crc(g_371.f1, "g_371.f1", print_hash_value);
    transparent_crc(g_371.f2, "g_371.f2", print_hash_value);
    transparent_crc(g_371.f3, "g_371.f3", print_hash_value);
    transparent_crc(g_371.f4, "g_371.f4", print_hash_value);
    transparent_crc(g_372.f0, "g_372.f0", print_hash_value);
    transparent_crc(g_372.f1, "g_372.f1", print_hash_value);
    transparent_crc(g_372.f2, "g_372.f2", print_hash_value);
    transparent_crc(g_372.f3, "g_372.f3", print_hash_value);
    transparent_crc(g_372.f4, "g_372.f4", print_hash_value);
    transparent_crc(g_373.f0, "g_373.f0", print_hash_value);
    transparent_crc(g_373.f1, "g_373.f1", print_hash_value);
    transparent_crc(g_373.f2, "g_373.f2", print_hash_value);
    transparent_crc(g_373.f3, "g_373.f3", print_hash_value);
    transparent_crc(g_373.f4, "g_373.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_374[i][j][k].f0, "g_374[i][j][k].f0", print_hash_value);
                transparent_crc(g_374[i][j][k].f1, "g_374[i][j][k].f1", print_hash_value);
                transparent_crc(g_374[i][j][k].f2, "g_374[i][j][k].f2", print_hash_value);
                transparent_crc(g_374[i][j][k].f3, "g_374[i][j][k].f3", print_hash_value);
                transparent_crc(g_374[i][j][k].f4, "g_374[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_375.f0, "g_375.f0", print_hash_value);
    transparent_crc(g_375.f1, "g_375.f1", print_hash_value);
    transparent_crc(g_375.f2, "g_375.f2", print_hash_value);
    transparent_crc(g_375.f3, "g_375.f3", print_hash_value);
    transparent_crc(g_375.f4, "g_375.f4", print_hash_value);
    transparent_crc(g_376.f0, "g_376.f0", print_hash_value);
    transparent_crc(g_376.f1, "g_376.f1", print_hash_value);
    transparent_crc(g_376.f2, "g_376.f2", print_hash_value);
    transparent_crc(g_376.f3, "g_376.f3", print_hash_value);
    transparent_crc(g_376.f4, "g_376.f4", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_557.f0, "g_557.f0", print_hash_value);
    transparent_crc(g_557.f1, "g_557.f1", print_hash_value);
    transparent_crc(g_557.f2, "g_557.f2", print_hash_value);
    transparent_crc(g_557.f3, "g_557.f3", print_hash_value);
    transparent_crc(g_557.f4, "g_557.f4", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    transparent_crc(g_710.f0, "g_710.f0", print_hash_value);
    transparent_crc(g_710.f1, "g_710.f1", print_hash_value);
    transparent_crc(g_710.f2, "g_710.f2", print_hash_value);
    transparent_crc(g_710.f3, "g_710.f3", print_hash_value);
    transparent_crc(g_710.f4, "g_710.f4", print_hash_value);
    transparent_crc(g_767.f0, "g_767.f0", print_hash_value);
    transparent_crc(g_767.f1, "g_767.f1", print_hash_value);
    transparent_crc(g_767.f2, "g_767.f2", print_hash_value);
    transparent_crc(g_767.f3, "g_767.f3", print_hash_value);
    transparent_crc(g_767.f4, "g_767.f4", print_hash_value);
    transparent_crc(g_768.f0, "g_768.f0", print_hash_value);
    transparent_crc(g_768.f1, "g_768.f1", print_hash_value);
    transparent_crc(g_768.f2, "g_768.f2", print_hash_value);
    transparent_crc(g_768.f3, "g_768.f3", print_hash_value);
    transparent_crc(g_768.f4, "g_768.f4", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_815.f0, "g_815.f0", print_hash_value);
    transparent_crc(g_815.f1, "g_815.f1", print_hash_value);
    transparent_crc(g_815.f2, "g_815.f2", print_hash_value);
    transparent_crc(g_815.f3, "g_815.f3", print_hash_value);
    transparent_crc(g_815.f4, "g_815.f4", print_hash_value);
    transparent_crc(g_847.f0, "g_847.f0", print_hash_value);
    transparent_crc(g_847.f1, "g_847.f1", print_hash_value);
    transparent_crc(g_847.f2, "g_847.f2", print_hash_value);
    transparent_crc(g_847.f3, "g_847.f3", print_hash_value);
    transparent_crc(g_847.f4, "g_847.f4", print_hash_value);
    transparent_crc(g_868.f0, "g_868.f0", print_hash_value);
    transparent_crc(g_868.f1, "g_868.f1", print_hash_value);
    transparent_crc(g_868.f2, "g_868.f2", print_hash_value);
    transparent_crc(g_868.f3, "g_868.f3", print_hash_value);
    transparent_crc(g_868.f4, "g_868.f4", print_hash_value);
    transparent_crc(g_885.f0, "g_885.f0", print_hash_value);
    transparent_crc(g_885.f1, "g_885.f1", print_hash_value);
    transparent_crc(g_885.f2, "g_885.f2", print_hash_value);
    transparent_crc(g_885.f3, "g_885.f3", print_hash_value);
    transparent_crc(g_885.f4, "g_885.f4", print_hash_value);
    transparent_crc(g_904.f0, "g_904.f0", print_hash_value);
    transparent_crc(g_904.f1, "g_904.f1", print_hash_value);
    transparent_crc(g_904.f2, "g_904.f2", print_hash_value);
    transparent_crc(g_904.f3, "g_904.f3", print_hash_value);
    transparent_crc(g_904.f4, "g_904.f4", print_hash_value);
    transparent_crc(g_916, "g_916", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
