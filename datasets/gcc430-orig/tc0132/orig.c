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
   int f0;
   int f1;
   char f2;
   unsigned char f3;
   unsigned char f4;
   unsigned short f5;
   unsigned f6;
   const unsigned char f7;
   const char f8;
};


static const short g_2 = (-6L);
static const struct S0 g_36 = {0x702B6816L,0xB2B29335L,0x09L,5UL,0x48L,0x24E2L,0x8C51F7EEL,0x45L,0xBBL};
static struct S0 g_68 = {0xF019D465L,1L,0xD7L,253UL,0x47L,8UL,1UL,0x41L,0x79L};
static struct S0 *g_67[9][5] = {{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68}};
static struct S0 **g_66 = &g_67[1][0];
static int *g_103 = &g_68.f0;
static int **g_102 = &g_103;
static int g_144 = 1L;
static int g_304 = 0L;
static int g_464 = 0L;
static struct S0 ** const g_597 = (void*)0;
static struct S0 g_725[8] = {{5L,0x8D11BE8EL,0x61L,0xB0L,254UL,0x6A7DL,8UL,0UL,0xC5L},{5L,0x8D11BE8EL,0x61L,0xB0L,254UL,0x6A7DL,8UL,0UL,0xC5L},{-2L,0x42FDE8AFL,0x13L,0x36L,0x72L,0x6338L,0x6B9766CAL,249UL,0xF1L},{-2L,0x42FDE8AFL,0x13L,0x36L,0x72L,0x6338L,0x6B9766CAL,249UL,0xF1L},{5L,0x8D11BE8EL,0x61L,0xB0L,254UL,0x6A7DL,8UL,0UL,0xC5L},{-2L,0x42FDE8AFL,0x13L,0x36L,0x72L,0x6338L,0x6B9766CAL,249UL,0xF1L},{-2L,0x42FDE8AFL,0x13L,0x36L,0x72L,0x6338L,0x6B9766CAL,249UL,0xF1L},{5L,0x8D11BE8EL,0x61L,0xB0L,254UL,0x6A7DL,8UL,0UL,0xC5L}};
static struct S0 **g_835[10][5][5] = {{{&g_67[8][0],&g_67[1][0],&g_67[1][0],&g_67[8][0],&g_67[1][1]},{&g_67[1][0],&g_67[1][0],&g_67[1][0],&g_67[6][2],&g_67[1][0]},{&g_67[6][3],(void*)0,&g_67[8][1],&g_67[3][3],&g_67[3][1]},{(void*)0,&g_67[1][0],(void*)0,&g_67[6][2],&g_67[1][0]},{&g_67[1][0],&g_67[3][1],&g_67[1][2],&g_67[8][0],&g_67[1][0]}},{{&g_67[1][0],&g_67[6][4],&g_67[1][0],(void*)0,&g_67[6][2]},{&g_67[8][1],(void*)0,&g_67[3][3],&g_67[5][0],&g_67[1][0]},{&g_67[1][0],&g_67[1][0],&g_67[1][0],&g_67[3][0],&g_67[0][4]},{&g_67[6][3],&g_67[1][0],&g_67[1][1],&g_67[8][0],&g_67[1][3]},{&g_67[1][0],&g_67[1][0],&g_67[1][0],&g_67[1][0],(void*)0}},{{&g_67[1][0],(void*)0,(void*)0,&g_67[1][0],&g_67[3][3]},{&g_67[4][1],&g_67[0][4],&g_67[4][2],&g_67[5][4],&g_67[5][2]},{&g_67[6][1],&g_67[1][0],&g_67[1][0],&g_67[1][0],&g_67[6][1]},{&g_67[5][4],&g_67[4][0],&g_67[7][4],&g_67[1][0],(void*)0},{&g_67[4][0],&g_67[1][0],&g_67[3][1],&g_67[6][3],(void*)0}},{{&g_67[1][0],&g_67[2][2],&g_67[1][0],&g_67[4][0],(void*)0},{&g_67[3][1],&g_67[6][3],&g_67[8][0],&g_67[1][0],&g_67[6][1]},{(void*)0,(void*)0,&g_67[1][0],&g_67[1][0],&g_67[1][0]},{&g_67[3][1],&g_67[8][3],&g_67[1][0],&g_67[3][3],&g_67[1][0]},{(void*)0,&g_67[1][0],(void*)0,&g_67[1][0],&g_67[2][2]}},{{&g_67[8][3],&g_67[8][0],(void*)0,&g_67[1][1],&g_67[1][0]},{&g_67[1][0],&g_67[1][0],&g_67[1][0],&g_67[1][0],(void*)0},{&g_67[1][0],&g_67[1][0],&g_67[3][2],(void*)0,&g_67[3][1]},{&g_67[1][0],&g_67[1][0],(void*)0,&g_67[4][2],&g_67[1][0]},{&g_67[1][0],&g_67[6][3],&g_67[1][0],&g_67[1][0],&g_67[6][3]}},{{&g_67[1][0],&g_67[5][2],&g_67[1][0],&g_67[7][4],&g_67[1][1]},{&g_67[2][3],&g_67[1][0],&g_67[1][0],&g_67[3][1],&g_67[1][0]},{(void*)0,&g_67[1][0],&g_67[3][0],&g_67[1][0],(void*)0},{&g_67[2][3],(void*)0,&g_67[1][0],&g_67[8][0],&g_67[1][0]},{&g_67[1][0],&g_67[4][1],&g_67[1][0],&g_67[1][0],&g_67[3][0]}},{{&g_67[1][0],&g_67[3][3],&g_67[1][2],&g_67[3][1],&g_67[1][0]},{&g_67[1][0],&g_67[1][0],(void*)0,&g_67[4][0],&g_67[4][3]},{&g_67[1][0],(void*)0,&g_67[4][0],(void*)0,&g_67[6][3]},{&g_67[1][0],&g_67[8][3],(void*)0,&g_67[4][2],&g_67[6][4]},{&g_67[8][3],&g_67[1][0],&g_67[1][0],&g_67[3][1],&g_67[5][4]}},{{(void*)0,&g_67[1][0],&g_67[1][0],&g_67[1][0],&g_67[3][3]},{&g_67[3][1],&g_67[1][0],(void*)0,&g_67[1][0],&g_67[2][3]},{&g_67[1][0],&g_67[1][0],&g_67[6][4],(void*)0,&g_67[3][3]},{(void*)0,(void*)0,&g_67[1][2],&g_67[0][4],&g_67[1][0]},{&g_67[1][0],&g_67[2][2],&g_67[3][2],&g_67[5][2],&g_67[1][0]}},{{&g_67[1][3],(void*)0,&g_67[1][0],&g_67[2][3],&g_67[5][0]},{&g_67[4][0],&g_67[1][0],&g_67[6][2],&g_67[4][0],&g_67[2][2]},{&g_67[1][0],&g_67[5][4],&g_67[3][2],&g_67[1][0],&g_67[6][3]},{(void*)0,&g_67[3][4],&g_67[1][0],&g_67[1][0],&g_67[1][0]},{&g_67[1][1],(void*)0,&g_67[1][0],&g_67[6][3],&g_67[1][0]}},{{&g_67[1][0],&g_67[1][0],&g_67[6][2],(void*)0,&g_67[1][0]},{(void*)0,&g_67[1][0],&g_67[3][1],&g_67[3][3],(void*)0},{&g_67[8][2],&g_67[2][1],&g_67[1][0],&g_67[6][4],&g_67[1][0]},{&g_67[1][0],&g_67[4][0],&g_67[1][0],(void*)0,(void*)0},{(void*)0,&g_67[4][0],(void*)0,&g_67[7][4],&g_67[8][3]}}};
static char g_948 = (-8L);
static const unsigned g_985 = 4294967294UL;
static unsigned char g_1028 = 255UL;
static int g_1059 = (-3L);
static int g_1079 = (-9L);
static unsigned g_1122[4] = {0x8BCB6781L,0x8BCB6781L,0x8BCB6781L,0x8BCB6781L};
static char g_1129 = 1L;
static struct S0 g_1138[6] = {{0xDCE7E8B9L,4L,1L,250UL,253UL,0xB5C7L,0x9B1C689AL,0x79L,0xAEL},{0xDCE7E8B9L,4L,1L,250UL,253UL,0xB5C7L,0x9B1C689AL,0x79L,0xAEL},{0xDCE7E8B9L,4L,1L,250UL,253UL,0xB5C7L,0x9B1C689AL,0x79L,0xAEL},{0xDCE7E8B9L,4L,1L,250UL,253UL,0xB5C7L,0x9B1C689AL,0x79L,0xAEL},{0xDCE7E8B9L,4L,1L,250UL,253UL,0xB5C7L,0x9B1C689AL,0x79L,0xAEL},{0xDCE7E8B9L,4L,1L,250UL,253UL,0xB5C7L,0x9B1C689AL,0x79L,0xAEL}};
static char g_1166 = (-4L);



static short func_1(void);
static int func_3(struct S0 p_4, unsigned p_5, unsigned char p_6);
static struct S0 func_7(unsigned p_8, int p_9, const unsigned p_10, const unsigned char p_11);
static unsigned func_12(struct S0 p_13, int p_14, const int p_15, unsigned char p_16, struct S0 p_17);
static struct S0 func_18(unsigned p_19, unsigned short p_20, unsigned char p_21);
static unsigned func_25(struct S0 p_26, unsigned char p_27, short p_28, struct S0 p_29);
static struct S0 func_30(unsigned char p_31, unsigned p_32, unsigned char p_33, int p_34, unsigned p_35);
static unsigned char func_41(unsigned p_42, int p_43);
static int * func_44(unsigned p_45, unsigned p_46, unsigned p_47);
static const unsigned short func_61(struct S0 ** p_62, int p_63, struct S0 ** const p_64, unsigned char p_65);
static short func_1(void)
{
    int l_22[9][10] = {{0xF1E2CD84L,(-6L),0xF1E2CD84L,0xC0105807L,0xF1E2CD84L,(-6L),0xF1E2CD84L,0xC0105807L,0xF1E2CD84L,(-6L)},{0xC6F0D4A7L,0xC0105807L,0x385D06F6L,0xC0105807L,0xC6F0D4A7L,0xC0105807L,0x385D06F6L,0xC0105807L,0xC6F0D4A7L,0xC0105807L},{0xF1E2CD84L,0xC0105807L,0xF1E2CD84L,(-6L),0xF1E2CD84L,0xC0105807L,0xF1E2CD84L,(-6L),0xF1E2CD84L,0xC0105807L},{0xC6F0D4A7L,(-6L),0x385D06F6L,(-6L),0xC6F0D4A7L,(-6L),0x385D06F6L,(-6L),0xC6F0D4A7L,(-6L)},{0xF1E2CD84L,(-6L),0xF1E2CD84L,0xC0105807L,0xF1E2CD84L,(-6L),0xF1E2CD84L,0xC0105807L,0xF1E2CD84L,(-6L)},{0xC6F0D4A7L,0xC0105807L,0x385D06F6L,0xC0105807L,0xC6F0D4A7L,0xC0105807L,0x385D06F6L,0xC0105807L,0xC6F0D4A7L,0xC0105807L},{0xF1E2CD84L,0xC0105807L,0xF1E2CD84L,(-6L),0xF1E2CD84L,0xC0105807L,0xF1E2CD84L,(-6L),0xF1E2CD84L,0xC0105807L},{0xC6F0D4A7L,(-6L),0x385D06F6L,(-6L),0xC6F0D4A7L,(-6L),0x385D06F6L,(-6L),0xC6F0D4A7L,(-6L)},{0xF1E2CD84L,(-6L),0xF1E2CD84L,0xC0105807L,0xF1E2CD84L,(-6L),0xF1E2CD84L,0xC0105807L,0xF1E2CD84L,(-6L)}};
    unsigned short l_349 = 65535UL;
    struct S0 l_373[2] = {{1L,0L,0xE7L,0x40L,0x8CL,65535UL,0UL,249UL,4L},{1L,0L,0xE7L,0x40L,0x8CL,65535UL,0UL,249UL,4L}};
    unsigned l_1055 = 0x84EFE105L;
    int *l_1058[4];
    unsigned l_1067 = 0x671D969CL;
    unsigned l_1119 = 4294967295UL;
    short l_1168 = 0xE6BAL;
    struct S0 l_1202 = {7L,-1L,0x5BL,0x21L,7UL,0xFBCFL,0x0A3F7A59L,248UL,0xECL};
    int i, j;
    for (i = 0; i < 4; i++)
        l_1058[i] = &g_1059;
    g_1059 &= (g_2 != ((1UL != func_3(func_7(((func_12(func_18(l_22[6][7], l_22[5][7], (65535UL || ((0x7DCCL ^ (safe_add_func_uint32_t_u_u(func_25(func_30((g_36 , ((safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(func_41(((((g_36.f4 | g_36.f3) & 4294967295UL) >= l_22[0][1]) != g_36.f2), g_36.f4), l_22[6][7])) , 0x4AD4L), g_304)) < l_349)), l_22[4][8], g_68.f2, g_36.f5, g_36.f1), l_349, l_22[6][7], l_373[0]), l_373[0].f3))) & g_36.f8))), l_373[0].f1, l_373[0].f4, g_725[7].f1, l_373[0]) , l_1055) > 0xD794L), g_2, l_373[0].f1, l_373[0].f6), g_36.f1, g_36.f2)) >= l_373[0].f2));



    if ((g_144 && (0xB959L == (safe_mod_func_uint8_t_u_u(g_2, g_725[7].f7)))))
    {
        struct S0 l_1068[10] = {{-9L,-5L,-2L,0x32L,253UL,0UL,0x2589B09DL,7UL,1L},{4L,0x0C5ED428L,0xC8L,252UL,0xD3L,1UL,0xD8F5DD64L,0x7BL,5L},{-9L,-5L,-2L,0x32L,253UL,0UL,0x2589B09DL,7UL,1L},{-9L,-5L,-2L,0x32L,253UL,0UL,0x2589B09DL,7UL,1L},{4L,0x0C5ED428L,0xC8L,252UL,0xD3L,1UL,0xD8F5DD64L,0x7BL,5L},{-9L,-5L,-2L,0x32L,253UL,0UL,0x2589B09DL,7UL,1L},{-9L,-5L,-2L,0x32L,253UL,0UL,0x2589B09DL,7UL,1L},{4L,0x0C5ED428L,0xC8L,252UL,0xD3L,1UL,0xD8F5DD64L,0x7BL,5L},{-9L,-5L,-2L,0x32L,253UL,0UL,0x2589B09DL,7UL,1L},{-9L,-5L,-2L,0x32L,253UL,0UL,0x2589B09DL,7UL,1L}};
        int *l_1078[6][7] = {{(void*)0,&l_373[0].f0,&l_373[0].f0,&l_373[0].f0,(void*)0,&l_373[0].f0,(void*)0},{(void*)0,&g_68.f0,&g_68.f0,(void*)0,&g_68.f0,(void*)0,&g_68.f0},{&l_373[0].f0,&l_373[0].f0,&l_373[0].f0,&l_373[0].f0,(void*)0,&l_373[0].f0,&l_373[0].f0},{&g_68.f0,&g_68.f0,(void*)0,&g_68.f0,&g_68.f0,(void*)0,&g_68.f0},{(void*)0,&l_373[0].f0,&l_373[0].f0,&l_373[0].f0,&l_373[0].f0,&l_373[0].f0,(void*)0},{(void*)0,&g_68.f0,(void*)0,(void*)0,&g_68.f0,(void*)0,(void*)0}};
        struct S0 ** const l_1101 = &g_67[1][0];
        const int l_1112[1] = {0x122F25CBL};
        unsigned short l_1128 = 0xC0CBL;
        const short l_1160 = 0x5282L;
        int i, j;
        for (g_68.f4 = 0; (g_68.f4 <= 4); g_68.f4 += 1)
        {
            char l_1062 = 0x7FL;
            struct S0 l_1087 = {-5L,0xD2A6F11FL,1L,1UL,252UL,0x6FC4L,4294967295UL,255UL,-3L};
            unsigned l_1093 = 0x55225B80L;
            unsigned l_1094 = 1UL;
            const int *l_1096 = (void*)0;
            int ***l_1099[3][6];
            struct S0 *l_1130 = &l_1068[7];
            struct S0 ***l_1133[5][6][6] = {{{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]}},{{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]}},{{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]}},{{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]}},{{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]},{&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4],&g_835[9][3][4]}}};
            short l_1173 = (-1L);
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 6; j++)
                    l_1099[i][j] = &g_102;
            }
            for (g_1059 = 1; (g_1059 <= 4); g_1059 += 1)
            {
                int l_1063[2];
                int *l_1064 = (void*)0;
                int l_1077 = 0xF023CCCFL;
                int i;
                for (i = 0; i < 2; i++)
                    l_1063[i] = 0x0FEB7C6EL;
                for (l_349 = 0; (l_349 <= 4); l_349 += 1)
                {
                    int l_1076 = 0L;
                    l_1063[1] |= l_1062;
                    (*g_102) = l_1064;

                    ;
                    for (g_948 = 4; (g_948 >= 0); g_948 -= 1)
                    {
                        int l_1075 = 0x3655D2F9L;
                        int i, j, k;
                        l_1077 &= ((((safe_add_func_int32_t_s_s(l_1067, (+g_948))) , (func_3(((~g_948) , l_1068[8]), func_61(g_835[(g_68.f4 + 5)][l_349][g_948], (g_725[7].f3 <= (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(g_68.f8, (((safe_sub_func_uint32_t_u_u((4UL >= ((~g_725[7].f7) <= 255UL)), g_985)) >= l_1075) <= 0xA2FCD2F2L))), 1))), g_835[(g_68.f4 + 3)][g_1059][g_1059], l_1076), g_464) >= g_36.f4)) >= g_68.f0) <= (-10L));
                    }
                }
                for (g_68.f2 = 0; (g_68.f2 <= 4); g_68.f2 += 1)
                {
                    struct S0 l_1082 = {-5L,-1L,0x79L,0xD0L,0UL,0x5634L,1UL,0x3AL,0xAFL};
                    int l_1095 = (-1L);
                    for (g_68.f0 = 4; (g_68.f0 >= 0); g_68.f0 -= 1)
                    {
                        int l_1090[7][2] = {{7L,0x9433E09DL},{7L,7L},{0x9433E09DL,7L},{7L,0x9433E09DL},{7L,7L},{0x9433E09DL,7L},{7L,0x9433E09DL}};
                        int i, j, k;
                        (*g_102) = l_1078[3][0];

                        ;
                        g_725[7].f0 = g_1079;
                        l_1095 |= ((safe_mod_func_int32_t_s_s((!func_3(l_1082, (((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((l_1087 , (g_304 || 0UL)), 0)), g_68.f6)) , (safe_mul_func_int8_t_s_s((g_725[7].f7 <= ((l_1090[1][0] < g_68.f7) , ((safe_mod_func_int32_t_s_s(0xB79A68DFL, g_68.f4)) , 0x01E0A0C3L))), l_1093))) , l_1087.f0), l_1082.f0)), l_1094)) < g_36.f0);
                        return g_68.f2;



                    }
                    (*g_102) = (void*)0;

                    ;
                    return l_1095;


                }
            }
            for (g_304 = 0; (g_304 <= 4); g_304 += 1)
            {
                unsigned short l_1100 = 0x9B96L;
                int *l_1108[4][8][7] = {{{&g_464,&g_1079,&g_1079,&g_464,&g_725[7].f0,&l_1087.f0,&g_1059},{&g_304,&l_1087.f0,&g_464,&g_464,&l_1068[8].f0,&l_1087.f0,&g_68.f0},{&g_1079,&l_1087.f0,&g_1079,&g_1079,&g_304,&g_1079,&g_1059},{&g_304,&l_1068[8].f0,&g_304,&l_1087.f0,&l_1068[8].f0,&g_464,&l_1068[8].f0},{&g_68.f0,(void*)0,&l_1068[8].f0,(void*)0,&g_304,&g_1059,(void*)0},{&l_1068[8].f0,&g_464,&g_464,&g_464,(void*)0,&g_464,&g_464},{&g_304,&g_304,&g_1059,&g_1079,&g_68.f0,&g_1079,&g_1079},{&g_725[7].f0,&l_1087.f0,&g_464,&g_464,&g_725[7].f0,&l_1087.f0,&l_1068[8].f0}},{{&g_464,(void*)0,(void*)0,&l_1087.f0,&g_68.f0,&l_1087.f0,&g_1059},{&g_464,&l_1087.f0,&g_68.f0,&l_1087.f0,&l_1068[8].f0,&g_464,&g_464},{&g_725[7].f0,(void*)0,&g_1079,(void*)0,&l_1087.f0,&g_725[7].f0,&l_1068[8].f0},{&g_304,&g_464,&g_464,&l_1087.f0,&g_464,&g_464,&g_304},{&l_1068[8].f0,&g_1079,&g_725[7].f0,(void*)0,&g_464,&l_1087.f0,&g_1079},{(void*)0,&g_464,(void*)0,(void*)0,&g_464,&l_1068[8].f0,&g_464},{(void*)0,&l_1087.f0,&g_725[7].f0,&g_1079,&g_68.f0,&l_1087.f0,&g_1079},{&l_1068[8].f0,&g_464,&g_464,&l_1068[8].f0,&l_1068[8].f0,&l_1087.f0,&g_464}},{{&g_464,(void*)0,&g_1079,&g_304,&l_1087.f0,&l_1087.f0,&l_1087.f0},{&l_1068[8].f0,&g_464,&g_68.f0,&g_464,&l_1068[8].f0,&l_1068[8].f0,(void*)0},{&g_725[7].f0,&l_1087.f0,(void*)0,&g_1079,(void*)0,&g_725[7].f0,&g_1059},{&g_464,&g_464,&g_725[7].f0,&l_1087.f0,&l_1068[8].f0,(void*)0,&l_1068[8].f0},{&g_725[7].f0,&g_1079,&l_1068[8].f0,&g_304,&l_1087.f0,&l_1068[8].f0,&g_1079},{&l_1068[8].f0,&g_464,(void*)0,&l_373[0].f0,&g_464,&g_464,&g_1079},{&g_464,(void*)0,&g_725[7].f0,(void*)0,&g_68.f0,&g_68.f0,(void*)0},{&g_464,&l_1087.f0,&g_464,&g_464,&g_304,&g_464,&g_725[7].f0}},{{&g_464,&g_1079,(void*)0,&g_304,&g_1079,&l_1087.f0,&g_725[7].f0},{&g_464,&l_1068[8].f0,&g_1079,&g_464,&g_304,&g_464,&g_1079},{&g_68.f0,&l_1087.f0,(void*)0,(void*)0,&g_464,&g_68.f0,&g_1059},{&l_1068[8].f0,&g_464,&l_1068[8].f0,&l_1068[8].f0,&l_1068[8].f0,&g_464,&g_304},{&l_1087.f0,&g_1079,&l_1068[8].f0,&g_464,&g_464,&l_1068[8].f0,&g_1079},{&l_1068[8].f0,&l_373[0].f0,(void*)0,&l_1068[8].f0,&g_304,&g_464,&g_68.f0},{(void*)0,&g_464,&l_1087.f0,&g_1079,&g_1079,&l_1087.f0,(void*)0},{&l_1068[8].f0,&l_1087.f0,&g_304,&l_1068[8].f0,&g_304,&l_1087.f0,&l_1068[8].f0}}};
                unsigned short l_1114 = 1UL;
                unsigned short l_1147[6] = {0UL,0xE7D6L,0UL,0UL,0xE7D6L,0UL};
                int i, j, k;
                for (l_1087.f4 = 0; (l_1087.f4 <= 4); l_1087.f4 += 1)
                {
                    const int **l_1097 = &l_1096;
                    int l_1098 = (-1L);
                    int l_1103 = (-9L);
                    (*l_1097) = l_1096;
                    for (l_1087.f3 = 0; (l_1087.f3 <= 4); l_1087.f3 += 1)
                    {
                        int l_1102 = 8L;
                        int i, j, k;
                        (*l_1097) = l_1096;
                        l_1103 |= (((l_1098 >= ((void*)0 != l_1099[2][0])) && (g_725[7].f4 , func_61((((g_1079 && g_725[7].f1) | (((g_36.f6 , g_36.f6) , &l_1078[5][5]) == &l_1058[3])) , g_835[g_304][l_1087.f4][l_1087.f3]), l_1100, l_1101, l_1102))) && 0xD4L);
                        (*l_1097) = ((0x4179L <= (safe_mod_func_uint8_t_u_u(l_1100, (l_1102 & ((0x25DCFD36L != (0x01EFF8F6L & (0x5B4C8883L | (((((~((((0xDE4DL & (((((((safe_mul_func_int8_t_s_s(g_36.f2, (l_1108[1][2][5] == l_1058[0]))) < g_68.f3) != 4L) < l_1102) ^ 0UL) > g_144) > l_1102)) , l_1102) | g_948) <= g_725[7].f1)) | 4294967295UL) , 1UL) && g_68.f6) || (-9L))))) & g_2))))) , &g_1059);

                        ;
                        l_1103 |= func_61(&g_67[6][2], g_2, &g_67[5][4], (**l_1097));
                    }
                }
                for (l_1100 = 1; (l_1100 <= 4); l_1100 += 1)
                {
                    struct S0 ***l_1111 = &g_66;
                    unsigned short l_1113[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1113[i] = 0x9B8DL;
                    l_1114 |= ((safe_lshift_func_uint16_t_u_u((((g_68.f8 , g_68.f3) , &g_835[9][1][1]) != l_1111), 6)) || (func_7(g_68.f4, g_2, g_725[7].f5, l_1112[0]) , l_1113[2]));
                    g_1129 |= (func_3(l_1087, (g_68.f0 != 0x8657410EL), (safe_sub_func_uint16_t_u_u(65529UL, (safe_mod_func_int16_t_s_s(((l_1119 <= (safe_add_func_uint16_t_u_u(g_1122[2], 0x56D4L))) > (safe_unary_minus_func_uint16_t_u((safe_sub_func_int32_t_s_s(0x54B45E28L, (safe_lshift_func_uint16_t_u_u(l_1128, g_725[7].f6))))))), l_1113[3]))))) | g_725[7].f6);
                }
                for (g_68.f1 = 4; (g_68.f1 >= 0); g_68.f1 -= 1)
                {
                    struct S0 *l_1136 = &l_1087;
                    int l_1140 = 3L;
                    for (l_1087.f6 = 0; (l_1087.f6 <= 4); l_1087.f6 += 1)
                    {
                        int l_1137 = (-1L);
                        int l_1139[6] = {0xDBF44DEDL,0xDBF44DEDL,0xDBF44DEDL,0xDBF44DEDL,0xDBF44DEDL,0xDBF44DEDL};
                        int i;
                        (*l_1101) = l_1130;
                        l_1139[5] |= ((g_725[7].f1 & (0x65501253L > (safe_add_func_int32_t_s_s((0x0758L ^ (func_61((((((((g_68.f0 <= 1UL) != (((void*)0 != l_1133[1][0][3]) , (safe_rshift_func_uint8_t_u_u((~((void*)0 == l_1136)), l_1137)))) , g_1138[5]) , l_1137) >= 65535UL) || 0x52L) , &g_67[1][1]), g_1079, &g_67[3][2], g_68.f4) & g_36.f5)), g_1079)))) == g_1138[5].f5);
                        g_464 = ((l_1140 , (safe_mul_func_int8_t_s_s(l_1139[5], g_1028))) , l_1140);
                        g_1138[5].f0 ^= l_1137;
                    }
                    for (g_68.f3 = 0; (g_68.f3 <= 2); g_68.f3 += 1)
                    {
                        int i, j;
                        g_1138[5].f0 ^= ((safe_rshift_func_uint16_t_u_s(l_22[(g_68.f4 + 2)][g_68.f3], 14)) > ((65535UL || (safe_rshift_func_uint8_t_u_u(l_1147[1], g_36.f0))) , g_68.f8));
                    }
                }
                for (g_68.f3 = 0; (g_68.f3 <= 4); g_68.f3 += 1)
                {
                    int l_1149[1][5][5] = {{{0x56B79DD2L,(-1L),0x56B79DD2L,0x56B79DD2L,(-1L)},{(-1L),0x56B79DD2L,0x56B79DD2L,(-1L),0x56B79DD2L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x56B79DD2L,(-1L),0x56B79DD2L,0x56B79DD2L,(-1L)},{(-1L),0x56B79DD2L,0x56B79DD2L,(-1L),0x56B79DD2L}}};
                    int i, j, k;
                    for (g_1079 = 0; (g_1079 <= 4); g_1079 += 1)
                    {
                        const int **l_1148 = &l_1096;
                        (*l_1148) = &l_1112[0];

                        ;
                        if (l_1149[0][4][1])
                            continue;
                    }
                    for (l_1087.f5 = 0; (l_1087.f5 <= 3); l_1087.f5 += 1)
                    {
                        int i;
                        return g_1122[l_1087.f5];


                    }
                    for (l_1055 = 0; (l_1055 <= 4); l_1055 += 1)
                    {
                        int i, j, k;
                        g_1079 &= (9L && ((func_61(g_835[(g_304 + 3)][g_68.f3][l_1055], g_464, g_835[(g_68.f3 + 5)][g_68.f4][g_304], g_725[7].f8) , 0xEBL) >= g_725[7].f7));
                        (*g_102) = &g_304;

                        ;
                        if ((*g_103))
                            break;
                    }


                    if (l_1149[0][3][3])
                    {
                        g_725[7].f0 = g_1129;
                        (*g_102) = &g_1079;

                        ;
                    }
                    else
                    {
                        return g_68.f3;


                    }

                    ;
                }
            }

            ;
            if (g_68.f5)
                continue;
            for (g_68.f6 = 0; (g_68.f6 <= 4); g_68.f6 += 1)
            {
                struct S0 *l_1152 = (void*)0;
                int l_1159[7];
                int l_1167 = 8L;
                const int *l_1179 = &l_1112[0];
                int i;
                for (i = 0; i < 7; i++)
                    l_1159[i] = (-8L);
                for (g_68.f0 = 1; (g_68.f0 <= 4); g_68.f0 += 1)
                {
                    unsigned l_1157 = 4294967290UL;
                    int l_1163 = 1L;
                    g_1079 |= ((g_1138[5].f8 , &g_102) != &g_102);
                    for (l_1087.f4 = 0; (l_1087.f4 <= 3); l_1087.f4 += 1)
                    {
                        int * const *l_1156[5][1];
                        int * const **l_1155[7];
                        struct S0 *l_1158[2];
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1156[i][j] = &l_1058[l_1087.f4];
                        }
                        for (i = 0; i < 7; i++)
                            l_1155[i] = &l_1156[3][0];
                        for (i = 0; i < 2; i++)
                            l_1158[i] = &g_1138[3];
                        g_1138[5].f0 = ((safe_lshift_func_int16_t_s_u((((&l_1058[l_1087.f4] != (void*)0) , l_1152) != ((((g_1122[l_1087.f4] , 2L) != ((7L | (safe_lshift_func_int16_t_s_u(g_1122[l_1087.f4], 0))) == (&g_102 == l_1155[4]))) & l_1157) , l_1158[0])), l_1159[5])) <= l_1159[5]);
                        if (l_1160)
                            break;
                        g_1059 = 1L;
                    }
                    for (l_1087.f4 = 0; (l_1087.f4 <= 4); l_1087.f4 += 1)
                    {
                        l_1163 &= (safe_add_func_int8_t_s_s(g_725[7].f2, g_68.f1));
                        g_1166 = (safe_lshift_func_int16_t_s_u((g_68.f5 <= g_725[7].f0), 12));
                    }
                }
                for (g_1079 = 4; (g_1079 >= 0); g_1079 -= 1)
                {
                    for (l_1087.f5 = 0; (l_1087.f5 <= 4); l_1087.f5 += 1)
                    {
                        l_1167 ^= l_1159[5];
                        return l_1168;


                    }
                    return g_725[7].f3;


                }
                if (((safe_sub_func_uint16_t_u_u(0xD4B4L, g_36.f0)) <= g_68.f0))
                {
                    int *l_1172[3][7] = {{(void*)0,&g_464,(void*)0,(void*)0,(void*)0,(void*)0,&g_464},{&l_1159[5],&l_373[0].f0,&g_1079,&g_1079,&l_373[0].f0,&l_1159[5],&l_373[0].f0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_464,(void*)0,(void*)0}};
                    int i, j;
                    (*g_102) = l_1058[1];

                    ;
                    for (g_68.f5 = 1; (g_68.f5 <= 4); g_68.f5 += 1)
                    {
                        short l_1171 = 0xFC38L;
                        if ((**g_102))
                            break;
                        if (l_1171)
                            continue;
                        return l_1159[5];


                    }
                    for (l_1087.f2 = 1; (l_1087.f2 <= 4); l_1087.f2 += 1)
                    {
                        (*g_102) = (void*)0;

                        ;
                        (*g_102) = l_1172[0][3];

                        ;
                        return g_36.f8;



                    }
                }
                else
                {
                    int l_1178 = (-1L);
                    (*g_66) = (void*)0;
                    g_1079 = g_1138[5].f8;
                    l_1173 = l_1159[2];
                    for (g_304 = 6; (g_304 >= 1); g_304 -= 1)
                    {
                        int i, j;
                        l_1159[g_304] = ((0UL <= (-8L)) == l_22[(g_304 + 2)][g_68.f4]);
                        l_1159[5] &= l_22[(g_304 + 2)][g_68.f4];
                        l_1159[g_304] &= (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((g_1138[5].f5 , 0xC776L) ^ ((g_36.f7 >= ((g_1138[5].f6 || l_22[(g_304 + 2)][g_68.f4]) <= ((((l_1178 <= (&g_1059 != (void*)0)) < (g_304 , g_1138[5].f4)) <= l_1178) < 4L))) && l_1178)) , l_1178), g_985)), (-10L)));
                    }
                }
                for (l_1173 = 4; (l_1173 >= 1); l_1173 -= 1)
                {
                    const int **l_1180 = &l_1096;
                    (*l_1180) = l_1179;

                    ;
                    return g_1138[5].f7;


                }
            }
        }



    }
    else
    {
        struct S0 ** const *l_1191 = &g_835[2][1][2];
        int l_1194[5][7][6] = {{{1L,0x920D7750L,(-1L),(-1L),0x920D7750L,1L},{0x920D7750L,0xAEB8AEE9L,0x3056AB11L,0x074C0FF2L,9L,0xA682B3E7L},{(-1L),0x3056AB11L,6L,1L,0x8F8343A7L,0x36F74EB1L},{(-1L),0x074C0FF2L,1L,0x074C0FF2L,(-1L),9L},{0x920D7750L,9L,0x8F8343A7L,(-1L),0x36F74EB1L,0xC5C38917L},{1L,0xA682B3E7L,0x36F74EB1L,9L,0xC5C38917L,0xC5C38917L},{0xC68386EBL,0x8F8343A7L,0x8F8343A7L,0xC68386EBL,0xE125C534L,9L}},{{0xC5C38917L,0xEE572EA2L,1L,0xAEB8AEE9L,0x074C0FF2L,0x36F74EB1L},{1L,1L,6L,0xA682B3E7L,0x074C0FF2L,0xA682B3E7L},{0x3056AB11L,0xEE572EA2L,0x3056AB11L,0xA4115976L,0xE125C534L,1L},{9L,0x8F8343A7L,(-1L),0x36F74EB1L,0xC5C38917L,0xE125C534L},{0xC5C38917L,0x074C0FF2L,0x8F8343A7L,0x3056AB11L,0x3056AB11L,0x8F8343A7L},{0xAEB8AEE9L,0xAEB8AEE9L,1L,0x8F8343A7L,0xE125C534L,0xEE572EA2L},{0xEE572EA2L,1L,0xAEB8AEE9L,0x074C0FF2L,0x36F74EB1L,1L}},{{0xC68386EBL,0xEE572EA2L,0xAEB8AEE9L,0xC5C38917L,0xAEB8AEE9L,0xEE572EA2L},{0x920D7750L,0xC5C38917L,1L,0xA4115976L,6L,0x8F8343A7L},{0xA4115976L,6L,0x8F8343A7L,0xAEB8AEE9L,(-1L),0xA682B3E7L},{9L,6L,0xE125C534L,0xE125C534L,6L,9L},{6L,0xC5C38917L,0xEE572EA2L,1L,0xAEB8AEE9L,0x074C0FF2L},{0xE125C534L,0xEE572EA2L,(-1L),0xC68386EBL,0x36F74EB1L,0x3056AB11L},{0xE125C534L,1L,0xC68386EBL,1L,0xE125C534L,0xAEB8AEE9L}},{{6L,0xAEB8AEE9L,0x36F74EB1L,0xE125C534L,0x3056AB11L,0x920D7750L},{9L,0x074C0FF2L,0x3056AB11L,0xAEB8AEE9L,0x920D7750L,0x920D7750L},{0xA4115976L,0x36F74EB1L,0x36F74EB1L,0xA4115976L,0xA682B3E7L,0xAEB8AEE9L},{0x920D7750L,1L,0xC68386EBL,0xC5C38917L,1L,0x3056AB11L},{0xC68386EBL,9L,(-1L),0x074C0FF2L,1L,0x074C0FF2L},{0xEE572EA2L,1L,0xEE572EA2L,0x8F8343A7L,0xA682B3E7L,0x074C0FF2L},{1L,6L,0x3056AB11L,(-1L),0xA4115976L,0xEE572EA2L}},{{0xC68386EBL,1L,0x920D7750L,(-1L),(-1L),0x920D7750L},{1L,1L,0xA682B3E7L,0x920D7750L,0x3056AB11L,0xE125C534L},{0xE125C534L,9L,1L,1L,6L,0xA682B3E7L},{0xAEB8AEE9L,0xE125C534L,1L,0xC68386EBL,1L,0xE125C534L},{0xA4115976L,0xC68386EBL,0xA682B3E7L,0xC5C38917L,0x8F8343A7L,0x920D7750L},{0xC5C38917L,0x8F8343A7L,0x920D7750L,1L,0x36F74EB1L,0xEE572EA2L},{0x074C0FF2L,0x8F8343A7L,0x3056AB11L,0x3056AB11L,0x8F8343A7L,0x074C0FF2L}}};
        struct S0 l_1197 = {-8L,1L,0x21L,0xC2L,1UL,0xC8B7L,0x73D3E339L,9UL,0xFBL};
        char l_1198 = 0L;
        int *l_1199 = &l_1197.f0;
        int *l_1206 = &g_304;
        int i, j, k;
        l_1199 = &g_1059;

        ;
        for (l_1197.f4 = (-6); (l_1197.f4 > 44); l_1197.f4++)
        {
            unsigned l_1203 = 0xA1E037AEL;
            g_464 |= func_12(l_1202, l_1203, (*l_1199), ((l_373[0] , 0xCBAB1C37L) ^ (((safe_sub_func_uint16_t_u_u((((void*)0 != (*l_1191)) < g_68.f5), ((g_68.f8 < 4294967295UL) , 1UL))) >= (-10L)) == g_68.f3)), l_373[0]);
        }
        (*g_102) = l_1206;

        ;
    }


    return g_1138[5].f2;
}







static int func_3(struct S0 p_4, unsigned p_5, unsigned char p_6)
{
    unsigned l_1057 = 0xCACDE950L;
    p_4.f0 = l_1057;
    return l_1057;
}







static struct S0 func_7(unsigned p_8, int p_9, const unsigned p_10, const unsigned char p_11)
{
    struct S0 l_1056 = {0xA159F13BL,0xC82A66DFL,0L,0UL,0UL,1UL,3UL,0x86L,0xACL};
    return l_1056;
}







static unsigned func_12(struct S0 p_13, int p_14, const int p_15, unsigned char p_16, struct S0 p_17)
{
    unsigned short l_1036 = 1UL;
    if ((1L != l_1036))
    {
        unsigned char l_1037[10][5] = {{0xE1L,0UL,0xC0L,0UL,0xC0L},{249UL,249UL,255UL,0x99L,0xADL},{0xE1L,9UL,0x6BL,0x3CL,0x3CL},{0x99L,0x67L,0x99L,0x76L,0x63L},{0x6BL,9UL,0xE1L,255UL,0x1EL},{255UL,249UL,249UL,255UL,0x99L},{0xC0L,0UL,0xE1L,0x1EL,9UL},{0xCBL,0x4EL,0x99L,0x4EL,0xCBL},{0UL,255UL,0x6BL,0x1EL,247UL},{0xE2L,0xE2L,0x99L,0x99L,0xE2L}};
        struct S0 ** const l_1040 = (void*)0;
        struct S0 l_1043[3][10][7] = {{{{0x3E2661C5L,-9L,0xBBL,0xDDL,7UL,4UL,4294967292UL,0x5CL,1L},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{0x3E2661C5L,-9L,0xBBL,0xDDL,7UL,4UL,4294967292UL,0x5CL,1L},{9L,0x3C34CFDDL,0x86L,0x52L,0xF7L,1UL,0xA3450ABDL,0UL,-5L}},{{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L},{0xDF80B75AL,-2L,0L,0xD2L,1UL,6UL,4294967289UL,0x03L,0x2FL},{0xEB233229L,-3L,0L,0UL,255UL,0UL,3UL,0x12L,0xC6L},{0x27FEBB09L,0xEFC85CC8L,-9L,1UL,0xC0L,0xB1BCL,0x99C1EACBL,5UL,0x84L},{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L},{0xDC7498CEL,0x127E5868L,2L,0x13L,0xA0L,0x717FL,0UL,247UL,0L},{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L}},{{0x18718900L,0x8456FAA2L,0xDFL,0xADL,0x35L,65532UL,0x6E8FA96CL,0x00L,0xBEL},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L},{9L,0x3C34CFDDL,0x86L,0x52L,0xF7L,1UL,0xA3450ABDL,0UL,-5L},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{0xBB693B5AL,0x873AD6EBL,0x46L,1UL,255UL,2UL,0x2E0CD196L,0xE9L,0x87L},{9L,0x3C34CFDDL,0x86L,0x52L,0xF7L,1UL,0xA3450ABDL,0UL,-5L},{6L,-1L,-1L,248UL,6UL,65535UL,0xC4AF1AECL,0UL,0L}},{{0x97DCFB30L,0xE327F273L,-6L,0x2FL,0xE4L,0x0298L,0x1F392B5AL,0xA9L,0x82L},{0xDF80B75AL,-2L,0L,0xD2L,1UL,6UL,4294967289UL,0x03L,0x2FL},{1L,5L,1L,0x7DL,255UL,0x0F6CL,0xED571897L,0UL,0x44L},{0xD9136D32L,0x9BCEC983L,0x8EL,0x88L,0xE0L,9UL,0UL,0xBAL,0x0DL},{0xA5F646A2L,-5L,-1L,0x60L,0x17L,65530UL,1UL,246UL,0L},{0xD9136D32L,0x9BCEC983L,0x8EL,0x88L,0xE0L,9UL,0UL,0xBAL,0x0DL},{1L,5L,1L,0x7DL,255UL,0x0F6CL,0xED571897L,0UL,0x44L}},{{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{0xC4025B3FL,-1L,0L,253UL,0xD8L,0UL,1UL,255UL,-4L},{6L,-1L,-1L,248UL,6UL,65535UL,0xC4AF1AECL,0UL,0L},{0x18718900L,0x8456FAA2L,0xDFL,0xADL,0x35L,65532UL,0x6E8FA96CL,0x00L,0xBEL},{1L,2L,0L,2UL,0x09L,65529UL,0x05C708A2L,254UL,1L},{6L,-1L,-1L,248UL,6UL,65535UL,0xC4AF1AECL,0UL,0L}},{{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L},{0xB61BB376L,0xE5B527B9L,0x0FL,5UL,255UL,65529UL,0x8DB76471L,0x77L,0xE6L},{0xC54CCBA8L,0x109634E7L,0x25L,0xFCL,0x65L,0x7A14L,0x8E255BB0L,0xDAL,0xC3L},{0xDF80B75AL,-2L,0L,0xD2L,1UL,6UL,4294967289UL,0x03L,0x2FL},{0xC54CCBA8L,0x109634E7L,0x25L,0xFCL,0x65L,0x7A14L,0x8E255BB0L,0xDAL,0xC3L},{0xB61BB376L,0xE5B527B9L,0x0FL,5UL,255UL,65529UL,0x8DB76471L,0x77L,0xE6L},{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L}},{{0xBB693B5AL,0x873AD6EBL,0x46L,1UL,255UL,2UL,0x2E0CD196L,0xE9L,0x87L},{6L,-1L,-1L,248UL,6UL,65535UL,0xC4AF1AECL,0UL,0L},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L},{0xBB693B5AL,0x873AD6EBL,0x46L,1UL,255UL,2UL,0x2E0CD196L,0xE9L,0x87L},{0x18718900L,0x8456FAA2L,0xDFL,0xADL,0x35L,65532UL,0x6E8FA96CL,0x00L,0xBEL},{9L,0x3C34CFDDL,0x86L,0x52L,0xF7L,1UL,0xA3450ABDL,0UL,-5L},{9L,0x3C34CFDDL,0x86L,0x52L,0xF7L,1UL,0xA3450ABDL,0UL,-5L}},{{0xA5F646A2L,-5L,-1L,0x60L,0x17L,65530UL,1UL,246UL,0L},{0x27FEBB09L,0xEFC85CC8L,-9L,1UL,0xC0L,0xB1BCL,0x99C1EACBL,5UL,0x84L},{0x5FBD3EE8L,0xB40FCE91L,0x3AL,0xBBL,7UL,0x12FAL,0UL,0UL,0L},{0x27FEBB09L,0xEFC85CC8L,-9L,1UL,0xC0L,0xB1BCL,0x99C1EACBL,5UL,0x84L},{0xA5F646A2L,-5L,-1L,0x60L,0x17L,65530UL,1UL,246UL,0L},{0x1EE05C28L,0x9122A456L,0xC3L,0xBCL,0x63L,1UL,0UL,252UL,1L},{0xAE46F992L,0x35F2CFACL,1L,0x55L,0UL,0UL,4294967292UL,2UL,0L}},{{0x18718900L,0x8456FAA2L,0xDFL,0xADL,0x35L,65532UL,0x6E8FA96CL,0x00L,0xBEL},{0xBB693B5AL,0x873AD6EBL,0x46L,1UL,255UL,2UL,0x2E0CD196L,0xE9L,0x87L},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L},{6L,-1L,-1L,248UL,6UL,65535UL,0xC4AF1AECL,0UL,0L},{0xBB693B5AL,0x873AD6EBL,0x46L,1UL,255UL,2UL,0x2E0CD196L,0xE9L,0x87L},{0x3E2661C5L,-9L,0xBBL,0xDDL,7UL,4UL,4294967292UL,0x5CL,1L},{-1L,-3L,0L,0x22L,251UL,65535UL,0xCCD7A59EL,0x71L,0xDCL}},{{0xC54CCBA8L,0x109634E7L,0x25L,0xFCL,0x65L,0x7A14L,0x8E255BB0L,0xDAL,0xC3L},{0xDF80B75AL,-2L,0L,0xD2L,1UL,6UL,4294967289UL,0x03L,0x2FL},{0xC54CCBA8L,0x109634E7L,0x25L,0xFCL,0x65L,0x7A14L,0x8E255BB0L,0xDAL,0xC3L},{0xB61BB376L,0xE5B527B9L,0x0FL,5UL,255UL,65529UL,0x8DB76471L,0x77L,0xE6L},{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L},{0xD9136D32L,0x9BCEC983L,0x8EL,0x88L,0xE0L,9UL,0UL,0xBAL,0x0DL},{0xC54CCBA8L,0x109634E7L,0x25L,0xFCL,0x65L,0x7A14L,0x8E255BB0L,0xDAL,0xC3L}}},{{{0x18718900L,0x8456FAA2L,0xDFL,0xADL,0x35L,65532UL,0x6E8FA96CL,0x00L,0xBEL},{6L,-1L,-1L,248UL,6UL,65535UL,0xC4AF1AECL,0UL,0L},{0xC4025B3FL,-1L,0L,253UL,0xD8L,0UL,1UL,255UL,-4L},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{0xC4025B3FL,-1L,0L,253UL,0xD8L,0UL,1UL,255UL,-4L},{6L,-1L,-1L,248UL,6UL,65535UL,0xC4AF1AECL,0UL,0L}},{{0xA5F646A2L,-5L,-1L,0x60L,0x17L,65530UL,1UL,246UL,0L},{0xD9136D32L,0x9BCEC983L,0x8EL,0x88L,0xE0L,9UL,0UL,0xBAL,0x0DL},{1L,5L,1L,0x7DL,255UL,0x0F6CL,0xED571897L,0UL,0x44L},{0xDF80B75AL,-2L,0L,0xD2L,1UL,6UL,4294967289UL,0x03L,0x2FL},{0x97DCFB30L,0xE327F273L,-6L,0x2FL,0xE4L,0x0298L,0x1F392B5AL,0xA9L,0x82L},{0xD9136D32L,0x9BCEC983L,0x8EL,0x88L,0xE0L,9UL,0UL,0xBAL,0x0DL},{0xAE46F992L,0x35F2CFACL,1L,0x55L,0UL,0UL,4294967292UL,2UL,0L}},{{0xBB693B5AL,0x873AD6EBL,0x46L,1UL,255UL,2UL,0x2E0CD196L,0xE9L,0x87L},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{9L,0x3C34CFDDL,0x86L,0x52L,0xF7L,1UL,0xA3450ABDL,0UL,-5L},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L},{0x18718900L,0x8456FAA2L,0xDFL,0xADL,0x35L,65532UL,0x6E8FA96CL,0x00L,0xBEL},{0x3E2661C5L,-9L,0xBBL,0xDDL,7UL,4UL,4294967292UL,0x5CL,1L},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L}},{{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L},{0x27FEBB09L,0xEFC85CC8L,-9L,1UL,0xC0L,0xB1BCL,0x99C1EACBL,5UL,0x84L},{0xEB233229L,-3L,0L,0UL,255UL,0UL,3UL,0x12L,0xC6L},{0xDF80B75AL,-2L,0L,0xD2L,1UL,6UL,4294967289UL,0x03L,0x2FL},{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L},{0x1EE05C28L,0x9122A456L,0xC3L,0xBCL,0x63L,1UL,0UL,252UL,1L},{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L}},{{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{0x3E2661C5L,-9L,0xBBL,0xDDL,7UL,4UL,4294967292UL,0x5CL,1L},{9L,0x3C34CFDDL,0x86L,0x52L,0xF7L,1UL,0xA3450ABDL,0UL,-5L},{-1L,-3L,0L,0x22L,251UL,65535UL,0xCCD7A59EL,0x71L,0xDCL}},{{0x97DCFB30L,0xE327F273L,-6L,0x2FL,0xE4L,0x0298L,0x1F392B5AL,0xA9L,0x82L},{0x27FEBB09L,0xEFC85CC8L,-9L,1UL,0xC0L,0xB1BCL,0x99C1EACBL,5UL,0x84L},{1L,5L,1L,0x7DL,255UL,0x0F6CL,0xED571897L,0UL,0x44L},{0xB61BB376L,0xE5B527B9L,0x0FL,5UL,255UL,65529UL,0x8DB76471L,0x77L,0xE6L},{0xA5F646A2L,-5L,-1L,0x60L,0x17L,65530UL,1UL,246UL,0L},{0xB61BB376L,0xE5B527B9L,0x0FL,5UL,255UL,65529UL,0x8DB76471L,0x77L,0xE6L},{1L,5L,1L,0x7DL,255UL,0x0F6CL,0xED571897L,0UL,0x44L}},{{0x18718900L,0x8456FAA2L,0xDFL,0xADL,0x35L,65532UL,0x6E8FA96CL,0x00L,0xBEL},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{-2L,4L,0xBFL,248UL,0x7AL,0xF4F6L,4294967289UL,250UL,9L},{6L,-1L,-1L,248UL,6UL,65535UL,0xC4AF1AECL,0UL,0L},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{1L,2L,0L,2UL,0x09L,65529UL,0x05C708A2L,254UL,1L},{-1L,-3L,0L,0x22L,251UL,65535UL,0xCCD7A59EL,0x71L,0xDCL}},{{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L},{0xD9136D32L,0x9BCEC983L,0x8EL,0x88L,0xE0L,9UL,0UL,0xBAL,0x0DL},{0xC54CCBA8L,0x109634E7L,0x25L,0xFCL,0x65L,0x7A14L,0x8E255BB0L,0xDAL,0xC3L},{0x27FEBB09L,0xEFC85CC8L,-9L,1UL,0xC0L,0xB1BCL,0x99C1EACBL,5UL,0x84L},{0xC54CCBA8L,0x109634E7L,0x25L,0xFCL,0x65L,0x7A14L,0x8E255BB0L,0xDAL,0xC3L},{0xD9136D32L,0x9BCEC983L,0x8EL,0x88L,0xE0L,9UL,0UL,0xBAL,0x0DL},{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L}},{{0x3E2661C5L,-9L,0xBBL,0xDDL,7UL,4UL,4294967292UL,0x5CL,1L},{6L,-1L,-1L,248UL,6UL,65535UL,0xC4AF1AECL,0UL,0L},{9L,0x3C34CFDDL,0x86L,0x52L,0xF7L,1UL,0xA3450ABDL,0UL,-5L},{0xBB693B5AL,0x873AD6EBL,0x46L,1UL,255UL,2UL,0x2E0CD196L,0xE9L,0x87L},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{9L,0x3C34CFDDL,0x86L,0x52L,0xF7L,1UL,0xA3450ABDL,0UL,-5L},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L}},{{0xA5F646A2L,-5L,-1L,0x60L,0x17L,65530UL,1UL,246UL,0L},{0xDF80B75AL,-2L,0L,0xD2L,1UL,6UL,4294967289UL,0x03L,0x2FL},{0x5FBD3EE8L,0xB40FCE91L,0x3AL,0xBBL,7UL,0x12FAL,0UL,0UL,0L},{0xDF80B75AL,-2L,0L,0xD2L,1UL,6UL,4294967289UL,0x03L,0x2FL},{0xA5F646A2L,-5L,-1L,0x60L,0x17L,65530UL,1UL,246UL,0L},{0xDC7498CEL,0x127E5868L,2L,0x13L,0xA0L,0x717FL,0UL,247UL,0L},{0xAE46F992L,0x35F2CFACL,1L,0x55L,0UL,0UL,4294967292UL,2UL,0L}}},{{{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{0xBB693B5AL,0x873AD6EBL,0x46L,1UL,255UL,2UL,0x2E0CD196L,0xE9L,0x87L},{9L,0x3C34CFDDL,0x86L,0x52L,0xF7L,1UL,0xA3450ABDL,0UL,-5L},{6L,-1L,-1L,248UL,6UL,65535UL,0xC4AF1AECL,0UL,0L},{0x3E2661C5L,-9L,0xBBL,0xDDL,7UL,4UL,4294967292UL,0x5CL,1L},{0x3E2661C5L,-9L,0xBBL,0xDDL,7UL,4UL,4294967292UL,0x5CL,1L},{6L,-1L,-1L,248UL,6UL,65535UL,0xC4AF1AECL,0UL,0L}},{{0xC54CCBA8L,0x109634E7L,0x25L,0xFCL,0x65L,0x7A14L,0x8E255BB0L,0xDAL,0xC3L},{0x27FEBB09L,0xEFC85CC8L,-9L,1UL,0xC0L,0xB1BCL,0x99C1EACBL,5UL,0x84L},{0xC54CCBA8L,0x109634E7L,0x25L,0xFCL,0x65L,0x7A14L,0x8E255BB0L,0xDAL,0xC3L},{0xD9136D32L,0x9BCEC983L,0x8EL,0x88L,0xE0L,9UL,0UL,0xBAL,0x0DL},{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L},{0xB61BB376L,0xE5B527B9L,0x0FL,5UL,255UL,65529UL,0x8DB76471L,0x77L,0xE6L},{0xC54CCBA8L,0x109634E7L,0x25L,0xFCL,0x65L,0x7A14L,0x8E255BB0L,0xDAL,0xC3L}},{{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{6L,-1L,-1L,248UL,6UL,65535UL,0xC4AF1AECL,0UL,0L},{-2L,4L,0xBFL,248UL,0x7AL,0xF4F6L,4294967289UL,250UL,9L},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{0x18718900L,0x8456FAA2L,0xDFL,0xADL,0x35L,65532UL,0x6E8FA96CL,0x00L,0xBEL},{0xC4025B3FL,-1L,0L,253UL,0xD8L,0UL,1UL,255UL,-4L},{-1L,-3L,0L,0x22L,251UL,65535UL,0xCCD7A59EL,0x71L,0xDCL}},{{0xA5F646A2L,-5L,-1L,0x60L,0x17L,65530UL,1UL,246UL,0L},{0xB61BB376L,0xE5B527B9L,0x0FL,5UL,255UL,65529UL,0x8DB76471L,0x77L,0xE6L},{1L,5L,1L,0x7DL,255UL,0x0F6CL,0xED571897L,0UL,0x44L},{0x27FEBB09L,0xEFC85CC8L,-9L,1UL,0xC0L,0xB1BCL,0x99C1EACBL,5UL,0x84L},{0x97DCFB30L,0xE327F273L,-6L,0x2FL,0xE4L,0x0298L,0x1F392B5AL,0xA9L,0x82L},{0xB61BB376L,0xE5B527B9L,0x0FL,5UL,255UL,65529UL,0x8DB76471L,0x77L,0xE6L},{0xAE46F992L,0x35F2CFACL,1L,0x55L,0UL,0UL,4294967292UL,2UL,0L}},{{0x3E2661C5L,-9L,0xBBL,0xDDL,7UL,4UL,4294967292UL,0x5CL,1L},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{0x3E2661C5L,-9L,0xBBL,0xDDL,7UL,4UL,4294967292UL,0x5CL,1L},{9L,0x3C34CFDDL,0x86L,0x52L,0xF7L,1UL,0xA3450ABDL,0UL,-5L}},{{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L},{0xDF80B75AL,-2L,0L,0xD2L,1UL,6UL,4294967289UL,0x03L,0x2FL},{0xEB233229L,-3L,0L,0UL,255UL,0UL,3UL,0x12L,0xC6L},{0x27FEBB09L,0xEFC85CC8L,-9L,1UL,0xC0L,0xB1BCL,0x99C1EACBL,5UL,0x84L},{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L},{0xDC7498CEL,0x127E5868L,2L,0x13L,0xA0L,0x717FL,0UL,247UL,0L},{0x57776C49L,1L,0xD2L,4UL,253UL,65535UL,0UL,0xB0L,5L}},{{0x18718900L,0x8456FAA2L,0xDFL,0xADL,0x35L,65532UL,0x6E8FA96CL,0x00L,0xBEL},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L},{9L,0x3C34CFDDL,0x86L,0x52L,0xF7L,1UL,0xA3450ABDL,0UL,-5L},{9L,0x18EBFA41L,0x81L,0UL,0xF4L,0x8CDFL,4294967289UL,0x95L,0x8FL},{0xBB693B5AL,0x873AD6EBL,0x46L,1UL,255UL,2UL,0x2E0CD196L,0xE9L,0x87L},{0xC4025B3FL,-1L,0L,253UL,0xD8L,0UL,1UL,255UL,-4L},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L}},{{9L,0L,2L,0UL,255UL,0x6F7CL,4294967295UL,0UL,1L},{0xD9136D32L,0x9BCEC983L,0x8EL,0x88L,0xE0L,9UL,0UL,0xBAL,0x0DL},{0x5FBD3EE8L,0xB40FCE91L,0x3AL,0xBBL,7UL,0x12FAL,0UL,0UL,0L},{0xDC7498CEL,0x127E5868L,2L,0x13L,0xA0L,0x717FL,0UL,247UL,0L},{0x97DCFB30L,0xE327F273L,-6L,0x2FL,0xE4L,0x0298L,0x1F392B5AL,0xA9L,0x82L},{0xDC7498CEL,0x127E5868L,2L,0x13L,0xA0L,0x717FL,0UL,247UL,0L},{0x5FBD3EE8L,0xB40FCE91L,0x3AL,0xBBL,7UL,0x12FAL,0UL,0UL,0L}},{{0xBB693B5AL,0x873AD6EBL,0x46L,1UL,255UL,2UL,0x2E0CD196L,0xE9L,0x87L},{0xBB693B5AL,0x873AD6EBL,0x46L,1UL,255UL,2UL,0x2E0CD196L,0xE9L,0x87L},{-1L,-3L,0L,0x22L,251UL,65535UL,0xCCD7A59EL,0x71L,0xDCL},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L},{0x3E2661C5L,-9L,0xBBL,0xDDL,7UL,4UL,4294967292UL,0x5CL,1L},{0x18718900L,0x8456FAA2L,0xDFL,0xADL,0x35L,65532UL,0x6E8FA96CL,0x00L,0xBEL},{0x3815E785L,-5L,0x07L,0xFCL,0xE4L,65535UL,0x8E0E8B58L,2UL,-4L}},{{0xC54CCBA8L,0x109634E7L,0x25L,0xFCL,0x65L,0x7A14L,0x8E255BB0L,0xDAL,0xC3L},{0x1EE05C28L,0x9122A456L,0xC3L,0xBCL,0x63L,1UL,0UL,252UL,1L},{0xEB233229L,-3L,0L,0UL,255UL,0UL,3UL,0x12L,0xC6L},{0xD9136D32L,0x9BCEC983L,0x8EL,0x88L,0xE0L,9UL,0UL,0xBAL,0x0DL},{0xEB233229L,-3L,0L,0UL,255UL,0UL,3UL,0x12L,0xC6L},{0x1EE05C28L,0x9122A456L,0xC3L,0xBCL,0x63L,1UL,0UL,252UL,1L},{0xC54CCBA8L,0x109634E7L,0x25L,0xFCL,0x65L,0x7A14L,0x8E255BB0L,0xDAL,0xC3L}}}};
        int *l_1046 = &g_725[7].f0;
        int i, j, k;
        g_304 = func_61((p_13.f5 , &g_67[1][0]), ((((((l_1037[6][3] > g_68.f0) , l_1037[6][3]) >= ((safe_rshift_func_uint8_t_u_s(((func_61(&g_67[1][0], g_985, l_1040, ((-9L) && 0x96L)) , p_13.f1) <= p_13.f6), 4)) & 255UL)) ^ l_1036) & p_17.f7) , g_36.f5), l_1040, g_68.f0);
        p_17.f0 ^= (4294967295UL != (0xCFC463D6L && (safe_add_func_uint32_t_u_u((~(p_17.f4 ^ p_13.f3)), g_36.f5))));
        (*l_1046) = (safe_mod_func_int16_t_s_s(((void*)0 == l_1040), p_13.f6));
        p_13.f0 = (0x5B55776DL & ((((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(1UL, (safe_add_func_int8_t_s_s(((l_1036 , (*l_1046)) != 0x5FL), 0xBAL)))), 1)) & ((p_17.f8 , 0L) || p_17.f2)) >= 0xA2L) & 0xB8L));
    }
    else
    {
        for (g_68.f6 = 0; (g_68.f6 <= 4); g_68.f6 += 1)
        {
            char l_1053 = (-1L);
            l_1053 ^= p_14;
            for (g_68.f0 = 4; (g_68.f0 >= 0); g_68.f0 -= 1)
            {
                int l_1054[8] = {0xE3066E09L,0x39E13702L,0xE3066E09L,0xE3066E09L,0x39E13702L,0xE3066E09L,0xE3066E09L,0x39E13702L};
                int i;
                return l_1054[2];
            }
        }
    }
    return p_17.f8;
}







static struct S0 func_18(unsigned p_19, unsigned short p_20, unsigned char p_21)
{
    int l_765 = (-1L);
    struct S0 ***l_772 = (void*)0;
    struct S0 l_776 = {-9L,0x31B20B65L,0x5AL,0x78L,0x7CL,6UL,0x5A2622F2L,0x0BL,1L};
    unsigned l_886 = 0x144A9A73L;
    int *l_887 = &g_464;
    const struct S0 *l_892[10] = {&l_776,&l_776,&l_776,&l_776,&l_776,&l_776,&l_776,&l_776,&l_776,&l_776};
    const struct S0 ** const l_891 = &l_892[0];
    int l_946[7][2] = {{0x18B9FD6BL,0L},{0x9C893883L,0x9C893883L},{0x9C893883L,0L},{0x18B9FD6BL,(-1L)},{0L,(-1L)},{0x18B9FD6BL,0L},{0x9C893883L,0x9C893883L}};
    int **l_950 = &g_103;
    short l_994 = (-10L);
    unsigned l_1009[9][1];
    struct S0 ** const l_1013 = &g_67[1][0];
    char l_1033 = 0x4FL;
    struct S0 l_1035 = {-9L,5L,0L,0x1AL,255UL,0UL,1UL,7UL,0xCDL};
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_1009[i][j] = 0x0C7C0CD9L;
    }
    for (p_20 = 0; (p_20 <= 4); p_20 += 1)
    {
        int *l_764 = &g_464;
        struct S0 ***l_773[8];
        char l_784[4] = {1L,1L,1L,1L};
        int l_862[8] = {0x26CF4AB6L,0x26CF4AB6L,0x26CF4AB6L,0x26CF4AB6L,0x26CF4AB6L,0x26CF4AB6L,0x26CF4AB6L,0x26CF4AB6L};
        int i;
        for (i = 0; i < 8; i++)
            l_773[i] = &g_66;
        (*l_764) = p_21;
        (*g_102) = l_764;

        ;
        (**g_102) = ((((l_772 != l_773[0]) , (~(*l_764))) , &g_103) != (p_19 , &g_103));
        if ((safe_add_func_uint16_t_u_u(p_21, l_776.f1)))
        {
            char l_777[4] = {0xCCL,0xCCL,0xCCL,0xCCL};
            int i;
            if (l_777[3])
                break;
            (*l_764) = (*l_764);
        }
        else
        {
            unsigned l_792 = 0xCC8BA720L;
            char l_799 = (-8L);
            struct S0 l_800 = {0x83040794L,0xF81CE4DEL,0xBDL,0UL,0xFEL,0xC2DFL,0xD8856F30L,0xA0L,8L};
            int **l_834 = &l_764;
            (*g_103) = (-6L);
            for (l_776.f6 = 1; (l_776.f6 <= 4); l_776.f6 += 1)
            {
                unsigned char l_791 = 255UL;
                struct S0 l_803 = {-1L,-1L,0xC4L,0xC3L,0xAFL,0x724DL,4294967295UL,0UL,0L};
                unsigned short l_810 = 0UL;
                struct S0 **l_830 = &g_67[1][0];
                int ***l_833 = (void*)0;
                (*g_103) &= (((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u(((0xF1BCL > (safe_mod_func_int16_t_s_s(9L, p_20))) | 0x276CFA17L), g_68.f0)) || l_765), l_792)) <= l_776.f7) , p_19);
                if ((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint8_t_u_u(l_792, (-1L))) == p_19) , g_464), 7)))
                {
                    struct S0 **l_806 = &g_67[5][0];
                    if ((g_36.f6 ^ g_68.f6))
                    {
                        struct S0 ** const l_809 = (void*)0;
                        g_304 |= (*l_764);
                        (*g_102) = (*g_102);
                    }
                    else
                    {
                        l_803.f0 = 2L;
                        if ((**g_102))
                            continue;
                    }
                }
                else
                {
                    (*g_103) ^= (l_810 , ((void*)0 == &l_803));
                }
                for (p_21 = 1; (p_21 <= 4); p_21 += 1)
                {
                    int l_825 = 0L;
                    int i, j;
                    if ((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(p_20, (safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_825 != l_825), (((0x2B37L & (safe_sub_func_int16_t_s_s(p_21, l_803.f3))) == (((void*)0 == &g_67[p_21][p_21]) <= (safe_add_func_int16_t_s_s(func_61(l_830, g_36.f0, l_830, p_21), 0x2919L)))) || l_776.f7))), 255UL)) <= 1L), p_21)))) , g_725[7].f3), l_803.f2)) | g_68.f0) , p_19), 0x94L)), g_725[7].f1)))
                    {
                        struct S0 l_831 = {9L,1L,0x03L,0x01L,0x0AL,0xC65AL,0x94BF7EC4L,0x6DL,-4L};
                        return l_831;
                    }
                    else
                    {
                        struct S0 l_832 = {9L,0x4390690BL,0L,248UL,246UL,1UL,0x1B7BEABEL,251UL,0x3BL};
                        return l_832;
                    }
                }
                l_834 = &g_103;

                ;
            }

            ;
            l_765 ^= (&l_765 != (void*)0);
        }
        for (g_68.f2 = 0; (g_68.f2 <= 4); g_68.f2 += 1)
        {
            short l_844 = 0xFEBDL;
            struct S0 **l_866[10][4][5] = {{{&g_67[1][0],&g_67[7][1],&g_67[1][4],&g_67[1][0],&g_67[1][0]},{&g_67[8][4],&g_67[1][0],(void*)0,(void*)0,(void*)0},{&g_67[7][3],&g_67[7][3],(void*)0,&g_67[7][1],&g_67[1][0]},{&g_67[1][0],(void*)0,(void*)0,&g_67[1][0],&g_67[1][0]}},{{&g_67[1][0],&g_67[1][4],&g_67[1][0],&g_67[7][3],&g_67[1][0]},{&g_67[8][4],(void*)0,&g_67[1][0],&g_67[1][4],&g_67[8][4]},{&g_67[1][0],&g_67[7][3],&g_67[1][4],&g_67[1][4],&g_67[7][3]},{&g_67[1][0],&g_67[1][0],(void*)0,&g_67[1][4],&g_67[1][0]}},{{&g_67[7][3],&g_67[7][1],&g_67[1][0],&g_67[7][3],&g_67[1][0]},{(void*)0,&g_67[1][4],(void*)0,&g_67[1][0],&g_67[8][4]},{&g_67[7][3],&g_67[1][0],&g_67[1][0],&g_67[7][1],&g_67[1][0]},{&g_67[1][0],(void*)0,(void*)0,(void*)0,&g_67[1][0]}},{{&g_67[1][0],&g_67[7][1],&g_67[1][0],&g_67[1][0],&g_67[7][3]},{&g_67[8][4],&g_67[1][0],(void*)0,&g_67[1][4],(void*)0},{&g_67[1][0],&g_67[7][3],&g_67[1][0],&g_67[7][1],&g_67[7][3]},{&g_67[1][0],&g_67[1][4],(void*)0,&g_67[1][0],&g_67[1][0]}},{{&g_67[7][3],&g_67[1][4],&g_67[1][4],&g_67[7][3],&g_67[1][0]},{&g_67[8][4],&g_67[1][4],&g_67[1][0],(void*)0,&g_67[8][4]},{&g_67[1][0],&g_67[7][3],&g_67[1][0],&g_67[1][4],&g_67[1][0]},{&g_67[1][0],&g_67[1][0],(void*)0,(void*)0,&g_67[1][0]}},{{&g_67[1][0],&g_67[7][1],(void*)0,&g_67[7][3],&g_67[7][3]},{(void*)0,(void*)0,(void*)0,&g_67[1][0],&g_67[8][4]},{&g_67[1][0],&g_67[1][0],&g_67[1][4],&g_67[7][1],&g_67[1][0]},{&g_67[1][0],&g_67[1][4],(void*)0,&g_67[1][4],&g_67[1][0]}},{{(void*)0,&g_67[1][4],&g_67[1][0],(void*)0,&g_67[1][0]},{(void*)0,&g_67[1][2],&g_67[1][0],&g_67[1][0],&g_67[1][0]},{&g_67[1][0],&g_67[1][0],&g_67[5][1],&g_67[1][4],&g_67[1][0]},{&g_67[0][2],&g_67[1][0],(void*)0,(void*)0,&g_67[1][0]}},{{&g_67[1][0],&g_67[1][0],(void*)0,&g_67[1][0],(void*)0},{(void*)0,&g_67[1][0],&g_67[8][4],&g_67[1][0],(void*)0},{&g_67[1][0],&g_67[1][0],&g_67[1][0],&g_67[1][0],&g_67[1][0]},{&g_67[1][0],&g_67[1][2],(void*)0,&g_67[1][0],&g_67[0][2]}},{{&g_67[1][0],&g_67[1][4],&g_67[7][1],&g_67[1][0],&g_67[1][0]},{&g_67[1][0],&g_67[1][0],&g_67[1][0],(void*)0,(void*)0},{&g_67[1][0],(void*)0,(void*)0,&g_67[1][4],&g_67[1][0]},{&g_67[1][0],&g_67[1][0],&g_67[1][0],&g_67[1][0],&g_67[1][0]}},{{&g_67[1][0],&g_67[1][4],(void*)0,(void*)0,&g_67[1][0]},{(void*)0,(void*)0,&g_67[1][0],&g_67[1][0],&g_67[1][0]},{&g_67[1][0],&g_67[1][0],&g_67[7][1],&g_67[1][4],&g_67[1][0]},{&g_67[0][2],&g_67[1][0],(void*)0,&g_67[1][2],&g_67[1][0]}}};
            int l_873 = (-3L);
            int i, j, k;
            for (g_68.f5 = 0; (g_68.f5 <= 4); g_68.f5 += 1)
            {
                char l_845 = 0L;
                int l_861 = 0xCB05F03DL;
                struct S0 **l_872 = &g_67[1][0];
                unsigned short l_875 = 2UL;
                for (g_464 = 0; (g_464 <= 7); g_464 += 1)
                {
                    struct S0 l_837 = {0x04C8643BL,0xC22B6750L,0x9FL,1UL,1UL,0x7488L,0x00C942F9L,0xB2L,-9L};
                    struct S0 ** const l_846 = &g_67[0][4];
                    struct S0 **l_858 = &g_67[5][1];
                    if (p_21)
                        break;
                    for (l_776.f1 = 3; (l_776.f1 >= 0); l_776.f1 -= 1)
                    {
                        struct S0 ** const l_836 = &g_67[5][1];
                        int i;
                        l_844 |= (((((l_784[l_776.f1] | (func_61(g_835[9][3][4], l_776.f3, l_836, ((l_837 , (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(g_68.f6, 10)), (safe_lshift_func_int16_t_s_s(g_725[7].f7, 13))))) ^ 0x25L)) , p_20)) > p_19) == 0x60L) >= p_19) < 0xCDD4F02BL);
                        if (l_837.f0)
                            continue;
                        if (p_21)
                            break;
                    }
                    (*g_102) = (*g_102);
                    if (func_61(&g_67[1][0], l_845, l_846, l_776.f4))
                    {
                        char l_857[9][4][4] = {{{0x6CL,0x6CL,(-9L),4L},{1L,(-9L),(-1L),0xF1L},{1L,5L,0x14L,(-1L)},{(-1L),5L,0x6CL,(-1L)}},{{1L,0xDFL,1L,1L},{4L,1L,(-1L),0xB9L},{0xF1L,4L,1L,1L},{(-1L),(-9L),1L,0x14L}},{{0xF1L,(-1L),(-1L),0xF1L},{4L,(-1L),1L,(-1L)},{1L,(-1L),1L,(-9L)},{0x6CL,0x11L,2L,(-9L)}},{{0xB9L,(-1L),0x6CL,(-1L)},{0x83L,(-1L),0xDFL,0xF1L},{1L,(-1L),0xB9L,0x14L},{0x11L,(-9L),0x14L,1L}},{{0x11L,4L,0xB9L,0xB9L},{1L,1L,0xDFL,1L},{0x83L,0xDFL,0x6CL,(-1L)},{0xB9L,1L,2L,0x6CL}},{{0x6CL,1L,1L,(-1L)},{1L,0xDFL,1L,1L},{4L,1L,(-1L),0xB9L},{0xF1L,4L,1L,1L}},{{(-1L),(-9L),1L,0x14L},{0xF1L,(-1L),(-1L),0xF1L},{4L,(-1L),1L,(-1L)},{1L,(-1L),(-1L),(-1L)}},{{0xF1L,1L,0xB9L,(-1L)},{5L,0x6CL,0xF1L,0x6CL},{4L,0x83L,0x11L,1L},{(-1L),0x14L,5L,1L}},{{1L,(-1L),1L,(-1L)},{1L,2L,5L,5L},{(-1L),(-1L),0x11L,(-1L)},{4L,0x11L,0xF1L,0x83L}}};
                        struct S0 ** const l_859 = &g_67[1][0];
                        int *l_860[2][4] = {{&l_776.f0,&l_776.f0,&l_776.f0,&l_776.f0},{&l_776.f0,&l_776.f0,&l_776.f0,&l_776.f0}};
                        int i, j, k;
                        l_861 = (((safe_mod_func_uint8_t_u_u(g_36.f8, (safe_mul_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((*l_764) & ((safe_add_func_uint16_t_u_u(g_36.f2, l_857[2][3][0])) < ((func_61(l_858, (&g_102 != &g_102), l_859, l_837.f3) | (*l_764)) != 0x8BL))), g_68.f5)), p_21)) > 0x29L), g_68.f5)))) | (*l_764)) > l_844);
                        if (l_776.f3)
                            break;
                        l_862[2] |= l_844;
                    }
                    else
                    {
                        const struct S0 l_865 = {0x68D65DCAL,0x77576696L,1L,255UL,1UL,0x3C01L,0x61B1F535L,250UL,0x90L};
                        struct S0 ***l_874[9] = {&g_835[4][3][3],&g_835[4][3][3],&g_835[4][3][3],&g_835[4][3][3],&g_835[4][3][3],&g_835[4][3][3],&g_835[4][3][3],&g_835[4][3][3],&g_835[4][3][3]};
                        int i;
                        (*g_102) = (*g_102);
                        l_873 ^= (((safe_add_func_uint16_t_u_u(((l_865 , (g_36.f3 > (func_61(l_866[7][2][4], ((l_844 || (safe_unary_minus_func_int8_t_s((safe_mod_func_uint32_t_u_u(((p_21 > 0x9F584455L) , p_20), (safe_mul_func_uint8_t_u_u((g_36.f4 , func_61(((l_845 , (*l_764)) , l_872), p_19, l_872, p_21)), l_837.f6))))))) <= 0L), &g_67[6][3], g_144) == 0x97L))) & l_865.f8), l_837.f0)) <= l_865.f2) > g_36.f0);
                        l_765 |= (func_61(&g_67[1][0], (*l_764), l_858, g_725[7].f6) < (func_61(l_866[2][1][0], g_725[7].f8, &g_67[1][0], ((l_874[3] != &g_597) ^ p_20)) || l_875));
                    }
                }
            }
            (*g_102) = (*g_102);
            (*g_102) = (((((safe_sub_func_uint8_t_u_u(7UL, ((*l_764) < l_776.f3))) ^ (safe_sub_func_int16_t_s_s(((((safe_mod_func_uint16_t_u_u((func_61(l_866[8][0][3], g_36.f7, &g_67[5][3], (p_20 , ((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((g_68.f1 <= (func_61(l_866[7][2][4], p_19, &g_67[8][3], l_873) , 2UL)), (*l_764))), p_20)) >= g_36.f1))) & l_873), l_873)) , 0x09A9L) >= p_21) | 0xB1L), 1L))) == g_36.f0) & p_21) , &l_765);

            ;
        }

        ;
    }

    ;
    (*l_887) |= l_776.f7;
    for (g_68.f0 = (-9); (g_68.f0 < (-22)); g_68.f0 = safe_sub_func_uint16_t_u_u(g_68.f0, 6))
    {
        unsigned short l_890 = 0xB7B7L;
        int *** const l_902[2][10] = {{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102}};
        struct S0 l_930[9] = {{1L,0xF16DA9F8L,1L,254UL,1UL,65530UL,0UL,4UL,9L},{-1L,0xE75D2078L,0L,0UL,0x72L,1UL,0x957B29FAL,0x3EL,0L},{1L,0xF16DA9F8L,1L,254UL,1UL,65530UL,0UL,4UL,9L},{-1L,0xE75D2078L,0L,0UL,0x72L,1UL,0x957B29FAL,0x3EL,0L},{1L,0xF16DA9F8L,1L,254UL,1UL,65530UL,0UL,4UL,9L},{-1L,0xE75D2078L,0L,0UL,0x72L,1UL,0x957B29FAL,0x3EL,0L},{1L,0xF16DA9F8L,1L,254UL,1UL,65530UL,0UL,4UL,9L},{-1L,0xE75D2078L,0L,0UL,0x72L,1UL,0x957B29FAL,0x3EL,0L},{1L,0xF16DA9F8L,1L,254UL,1UL,65530UL,0UL,4UL,9L}};
        int l_935 = 0xF096CE78L;
        struct S0 **l_1005 = &g_67[1][0];
        int i, j;
        (*l_887) |= (l_890 == g_725[7].f6);
    }
    return l_1035;


}







static unsigned func_25(struct S0 p_26, unsigned char p_27, short p_28, struct S0 p_29)
{
    char l_375 = (-9L);
    int **l_384 = &g_103;
    char l_392[8][1][7] = {{{0x80L,0L,0L,0x80L,(-3L),0x80L,0L}},{{1L,5L,0x73L,1L,0x73L,5L,1L}},{{1L,0L,1L,0xECL,0x80L,0x80L,0xECL}},{{9L,0x5BL,9L,1L,0xBCL,0x1BL,0x73L}},{{0xECL,0L,1L,1L,0L,0xECL,0L}},{{9L,1L,0xBCL,0x1BL,0x73L,0x1BL,0xBCL}},{{0x80L,0x80L,0xECL,1L,0xECL,0x80L,0x80L}},{{0x7EL,1L,1L,1L,0x7EL,0x4DL,0xBCL}}};
    unsigned char l_393 = 5UL;
    struct S0 **l_398 = (void*)0;
    int **l_401[2];
    unsigned short l_412 = 0x1E18L;
    struct S0 ** const l_421 = (void*)0;
    char l_467 = 1L;
    unsigned short l_534 = 1UL;
    char l_604[3][1];
    const unsigned char l_626[6] = {0x0FL,0x7DL,0x7DL,0x0FL,0x7DL,0x7DL};
    char l_729 = 0x4DL;
    int *l_763 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_401[i] = (void*)0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_604[i][j] = 0xC3L;
    }
    for (p_26.f4 = 0; (p_26.f4 <= 4); p_26.f4 += 1)
    {
        unsigned l_374 = 0UL;
        int *l_376 = (void*)0;
        int *l_377 = &g_304;
        struct S0 **l_391 = &g_67[1][2];
    }
    for (p_29.f2 = (-16); (p_29.f2 > (-7)); ++p_29.f2)
    {
        int l_427 = 0xCFEC71DCL;
        p_26.f0 |= (((safe_lshift_func_uint8_t_u_s(p_29.f5, ((((void*)0 == l_384) , l_384) == (void*)0))) == (!g_68.f7)) < (((func_30(p_29.f5, l_427, (((*g_103) < l_427) && p_29.f0), (**g_102), p_26.f5) , p_29.f1) < 6L) == 0x2343L));
        (**l_384) = (*g_103);
        (**g_102) = (**l_384);
    }
    if ((((!(((func_41(((**g_66) , 2UL), ((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((func_61(l_398, p_29.f6, l_421, g_36.f1) , 0x2DE0L), (&g_66 == &g_66))) , 0x58ECL), (-5L))), g_68.f7)) , g_2)) <= 0x2250L) || p_28) && p_29.f3)) || (**g_102)) ^ (-1L)))
    {
        unsigned char l_434 = 0x5EL;
        struct S0 **l_462 = (void*)0;
        const unsigned short l_465 = 65535UL;
        int l_468[6];
        int l_473 = 1L;
        unsigned short l_498 = 7UL;
        int l_535 = 0xEC493468L;
        struct S0 *l_551[2][5] = {{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68}};
        unsigned char l_581 = 0x79L;
        char l_716 = 0x3BL;
        int i, j;
        for (i = 0; i < 6; i++)
            l_468[i] = 0xB61147DDL;
        if ((~l_434))
        {
            unsigned l_466[7] = {0xA8030749L,0xA8030749L,0xA8030749L,0xA8030749L,0xA8030749L,0xA8030749L,0xA8030749L};
            struct S0 **l_476 = &g_67[8][4];
            unsigned short l_513 = 65527UL;
            int *l_520 = &g_464;
            unsigned short l_531 = 65535UL;
            unsigned char l_550 = 0x51L;
            unsigned short l_559 = 65528UL;
            unsigned l_589 = 0x51B1CD86L;
            int l_627 = 0L;
            int i;
            for (g_304 = (-25); (g_304 >= (-21)); g_304 = safe_add_func_int16_t_s_s(g_304, 3))
            {
                unsigned l_457 = 1UL;
                unsigned short l_463 = 0x2930L;
                if ((safe_rshift_func_int16_t_s_u(0x3F3EL, 10)))
                {
                    unsigned l_447 = 4294967295UL;
                    struct S0 **l_450 = &g_67[1][0];
                    l_447 = (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(p_26.f6, 7)) , (-10L)), (0x5A90CAF5L & ((void*)0 == &g_66)))), (+(safe_add_func_uint8_t_u_u((p_29.f5 | 255UL), g_36.f0)))));
                    (**l_384) = (safe_lshift_func_int8_t_s_u(func_61(l_450, func_61(((safe_mod_func_uint8_t_u_u(((-1L) != (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((((l_457 <= p_29.f7) , (p_26.f8 == l_447)) || (safe_lshift_func_int16_t_s_s((p_27 < (safe_rshift_func_uint16_t_u_s(1UL, (~(~0xE322L))))), g_68.f2))), 7)), 0x6D02DDA5L))), p_26.f5)) , l_462), l_463, l_450, p_29.f7), &g_67[1][0], p_26.f0), 2));
                    g_464 &= ((!((-1L) | g_68.f6)) , (*g_103));
                }
                else
                {
                    p_29.f0 = (*g_103);
                }
                l_468[2] = (((g_36.f3 <= (g_2 , l_465)) || (l_466[5] < (p_29.f0 > g_36.f3))) & ((p_28 || (&g_67[1][0] == (func_30(l_457, g_36.f7, l_466[2], l_467, p_29.f8) , (void*)0))) , p_29.f4));
                for (g_68.f0 = 0; (g_68.f0 == (-18)); g_68.f0--)
                {
                    (*g_66) = &p_26;
                }
                for (p_28 = 0; (p_28 < 16); p_28 = safe_add_func_int8_t_s_s(p_28, 3))
                {
                    if (l_473)
                    {
                        return g_68.f0;


                    }
                    else
                    {
                        (**g_102) &= 0L;
                        return g_68.f5;


                    }
                }
            }


            if ((safe_lshift_func_uint16_t_u_u(g_36.f4, g_68.f1)))
            {
                int l_477 = (-2L);
                struct S0 ***l_478[7];
                const unsigned l_479 = 4294967295UL;
                int i;
                for (i = 0; i < 7; i++)
                    l_478[i] = &l_398;
                if (((~0xC56CB063L) || ((l_468[4] & g_144) , func_61(l_476, func_41((((((0xEA6EL || p_26.f1) >= l_477) > ((void*)0 != l_478[2])) || g_464) , 0UL), l_465), l_421, g_36.f3))))
                {
                    return g_2;


                }
                else
                {
                    unsigned char l_486 = 0xC7L;
                    if ((l_479 != g_68.f0))
                    {
                        (**l_384) = (g_36.f5 , ((0xC6F3C4FAL ^ (**g_102)) != (((g_304 != (safe_sub_func_uint8_t_u_u((4294967295UL < (**g_102)), ((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(p_26.f1, 15)) != l_486), (safe_mul_func_int16_t_s_s(g_68.f2, g_68.f2)))) , 0x99L)))) , (-1L)) <= p_29.f7)));
                        (*l_476) = (*g_66);
                        (**g_102) = (**g_102);
                        p_29.f0 = 1L;
                    }
                    else
                    {
                        return g_68.f8;


                    }
                    for (p_28 = 0; (p_28 <= (-25)); p_28 = safe_sub_func_uint16_t_u_u(p_28, 2))
                    {
                        (**l_384) &= 0x462146B1L;
                        if (p_29.f2)
                            continue;
                        (*g_103) ^= (g_68.f4 & p_26.f8);
                        if (l_466[5])
                            continue;
                    }
                    return p_26.f5;


                }
            }
            else
            {
                unsigned char l_500[6][6][5] = {{{0UL,1UL,0x05L,1UL,0UL},{6UL,0x53L,0x64L,0x63L,6UL},{0x64L,247UL,0x6FL,0UL,0xF0L},{0x2BL,0x64L,6UL,0x53L,6UL},{6UL,0UL,0x05L,251UL,0UL},{6UL,0x45L,0x09L,0UL,255UL}},{{0x05L,255UL,0UL,1UL,0x05L},{0xB1L,0UL,0UL,0xB1L,0x2CL},{0xF0L,2UL,1UL,1UL,4UL},{0x8EL,0x5DL,0x09L,0x42L,0UL},{6UL,0xD8L,246UL,1UL,0xF0L},{6UL,255UL,6UL,0xB1L,255UL}},{{0x05L,0x2BL,0UL,1UL,1UL},{255UL,0x63L,0x45L,0x64L,0x64L},{0x05L,255UL,0x05L,246UL,0x2EL},{6UL,6UL,0x42L,255UL,0x2BL},{6UL,1UL,4UL,2UL,0x04L},{0x8EL,0x2BL,0x42L,0x2BL,0x8EL}},{{0xF0L,1UL,0x05L,0x2BL,0UL},{0xB1L,255UL,0x45L,0x53L,0x09L},{0x64L,7UL,0UL,1UL,0UL},{0x53L,0x53L,6UL,0x45L,0x8EL},{0UL,0xDFL,246UL,1UL,0x04L},{0x42L,6UL,0x09L,0x63L,0x2BL}},{{0x6FL,0xDFL,1UL,251UL,0x2EL},{255UL,0x53L,255UL,0x64L,0x09L},{4UL,1UL,1UL,2UL,0xF0L},{0x63L,0x45L,0x64L,0x64L,0x45L},{0x6FL,0x40L,0x2EL,1UL,0x48L},{0x8EL,6UL,0x2BL,6UL,255UL}},{{0x64L,255UL,0x04L,0x54L,0UL},{0x8EL,0x2CL,0x8EL,6UL,0x5DL},{0x6FL,0x63L,0UL,0x40L,6UL},{0x63L,6UL,0x09L,0x2BL,0xB1L},{4UL,0UL,0UL,0UL,4UL},{0x45L,0x42L,0x8EL,6UL,0x2BL}}};
                struct S0 ***l_549 = &l_462;
                int i, j, k;
                for (p_29.f2 = 0; (p_29.f2 >= 0); p_29.f2 -= 1)
                {
                    unsigned short l_493 = 0x35F9L;
                    struct S0 ** const l_499 = &g_67[1][0];
                    if (((((!0xFB40FC71L) , l_462) == (void*)0) >= ((safe_add_func_uint16_t_u_u((func_61(l_476, (((+(l_493 , g_464)) , (safe_lshift_func_uint8_t_u_u(l_466[5], 4))) & ((safe_mul_func_uint8_t_u_u(l_498, (&p_26 != (void*)0))) == g_464)), l_499, l_498) != l_500[0][2][4]), p_26.f0)) < g_68.f5)))
                    {
                        int l_505[5] = {0L,0L,0L,0L,0L};
                        int *l_506 = &g_68.f0;
                        int i;
                        p_26.f0 = (safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((((1L > (+p_29.f5)) ^ g_464) , l_505[2]), func_61(&g_67[0][3], (g_36.f1 , (l_505[2] , p_29.f2)), l_499, g_36.f4))) , p_26.f8), p_26.f4));
                        (*g_66) = &p_29;
                        (*g_102) = func_44(p_26.f4, ((*g_102) == l_506), (safe_lshift_func_uint8_t_u_u((*l_506), (0xAAL && (((safe_add_func_uint16_t_u_u(func_61(&g_67[1][0], p_26.f1, l_462, g_36.f6), p_26.f2)) , 1L) || p_26.f1)))));
                        if ((*g_103))
                            break;
                    }
                    else
                    {
                        unsigned char l_515 = 0UL;
                        (**l_384) = ((safe_lshift_func_uint8_t_u_u(0x75L, l_513)) , func_61(((((safe_unary_minus_func_int16_t_s(p_27)) & (*g_103)) && (l_515 || p_29.f2)) , &g_67[1][2]), ((((safe_mul_func_uint8_t_u_u((((l_466[0] | (safe_lshift_func_int8_t_s_s(0x43L, 3))) , p_29.f1) , g_36.f8), p_26.f2)) > p_29.f0) > g_68.f7) != 65529UL), l_421, l_500[1][0][0]));
                        if ((*g_103))
                            continue;
                        (*g_66) = &p_26;
                        (*g_102) = l_520;

                        ;
                    }
                    (*g_66) = (*g_66);
                    for (p_29.f4 = 0; (p_29.f4 <= 0); p_29.f4 += 1)
                    {
                        (**g_102) = 1L;
                    }
                }


                ;
                (*l_384) = (*g_102);
                if (((g_68.f5 <= (safe_mul_func_uint8_t_u_u(0UL, (safe_mod_func_uint32_t_u_u((g_68.f2 == 0x69L), (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((func_61(&g_67[5][0], (safe_sub_func_int16_t_s_s(l_531, ((safe_mod_func_int8_t_s_s(func_61(&g_67[4][2], l_534, l_476, g_144), g_68.f2)) != l_465))), l_462, g_68.f2) | g_36.f2) != p_29.f3), p_26.f1)), p_29.f4))))))) < (*l_520)))
                {
                    const short l_536 = 0L;
                    struct S0 ** const l_560 = &l_551[1][1];
                    for (p_26.f3 = 0; (p_26.f3 <= 5); p_26.f3 += 1)
                    {
                        int i;
                        if (p_26.f2)
                            break;
                    }
                    (*g_102) = func_44(g_2, (l_536 | (safe_mod_func_uint8_t_u_u(p_29.f5, g_36.f2))), (safe_add_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(((((*l_476) == (void*)0) != l_536) != ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(((&l_421 == (g_36.f6 , l_549)) , g_304), g_36.f0)), p_26.f1)) < l_465)), 3)) & (*g_103)), l_550)) , (void*)0) != l_551[1][1]) & p_26.f7), g_2)));
                    for (p_26.f1 = 0; (p_26.f1 <= 1); p_26.f1 += 1)
                    {
                        struct S0 **l_558 = &l_551[1][3];
                        int i;
                        (*g_102) = func_44((safe_mod_func_uint32_t_u_u(p_29.f6, func_61(((safe_sub_func_int32_t_s_s((((l_401[p_26.f1] == l_401[0]) <= ((safe_rshift_func_int8_t_s_u(func_41(l_473, g_144), ((((0xF98BL <= func_61(l_558, g_36.f3, &l_551[0][3], p_29.f0)) && 0x2A42968DL) != l_536) <= p_29.f8))) <= p_26.f0)) || 0xA50EE896L), 2L)) , &g_67[3][4]), l_559, l_560, g_36.f2))), g_36.f7, p_29.f2);
                    }
                    (**g_102) &= l_465;
                }
                else
                {
                    unsigned short l_565[7][5] = {{0xB92FL,1UL,0UL,1UL,0xB92FL},{65526UL,0xAEF2L,0xCD98L,0xAEF2L,65526UL},{0xB92FL,1UL,0UL,1UL,0xB92FL},{65526UL,0xAEF2L,0xCD98L,0xAEF2L,65526UL},{0xB92FL,1UL,0UL,1UL,0xB92FL},{65526UL,0xAEF2L,0xCD98L,0xAEF2L,65526UL},{0xB92FL,1UL,0UL,1UL,0xB92FL}};
                    struct S0 ** const l_574 = &g_67[4][3];
                    struct S0 **l_580 = (void*)0;
                    int i, j;
                    for (l_473 = (-2); (l_473 < 1); ++l_473)
                    {
                        const char l_575 = (-5L);
                        (**g_102) = (safe_sub_func_int32_t_s_s((((p_29.f3 >= g_464) | (l_565[2][3] & ((+(safe_sub_func_uint8_t_u_u((p_26.f1 ^ (safe_add_func_uint32_t_u_u(((+(safe_sub_func_int32_t_s_s(((g_68.f5 & p_26.f1) >= ((safe_sub_func_int8_t_s_s(p_26.f0, func_61(l_398, (~(func_61((((void*)0 != &l_468[2]) , &g_67[3][3]), p_29.f4, &g_67[0][2], p_29.f0) , p_28)), l_574, g_36.f3))) , (*l_520))), (*g_103)))) > l_575), 0x818B4118L))), p_26.f0))) != 6UL))) <= p_26.f1), p_29.f1));
                        if (p_26.f0)
                            break;
                    }
                    for (p_29.f2 = 27; (p_29.f2 > 5); --p_29.f2)
                    {
                        (*g_102) = (*g_102);
                    }
                    (*g_103) = (safe_lshift_func_uint8_t_u_s((((((p_26.f8 != (**g_102)) | (((func_61(l_580, (*l_520), (*l_549), (1L != ((0x88L <= (g_68.f2 != (-3L))) < l_565[2][3]))) >= 9UL) , l_565[1][0]) && 0UL)) > 1L) != l_581) , 0xBAL), p_27));
                }
            }


            ;
            if ((**g_102))
            {
                unsigned short l_584[8];
                struct S0 ** const l_590[10][1][9] = {{{&l_551[0][3],&l_551[1][2],&l_551[0][3],&l_551[0][1],&l_551[1][1],&l_551[1][2],&l_551[1][1],&l_551[0][1],&l_551[0][3]}},{{&l_551[1][4],&l_551[1][4],&l_551[0][0],&l_551[1][0],&l_551[1][1],&l_551[1][1],&l_551[1][1],&l_551[1][4],&l_551[1][1]}},{{&l_551[1][1],&l_551[1][4],(void*)0,&l_551[0][1],&l_551[1][1],&l_551[0][1],(void*)0,&l_551[1][4],&l_551[1][1]}},{{&l_551[1][1],&l_551[1][1],&l_551[0][0],&l_551[1][1],&l_551[1][4],&l_551[1][4],&l_551[1][0],&l_551[1][1],&l_551[1][1]}},{{&l_551[1][1],&l_551[1][4],&l_551[0][3],&l_551[1][1],&l_551[0][3],&l_551[1][4],&l_551[1][1],&l_551[1][1],&l_551[1][1]}},{{&l_551[1][1],&l_551[1][4],&l_551[1][0],&l_551[1][1],&l_551[1][1],&l_551[1][1],&l_551[0][0],&l_551[0][0],&l_551[1][1]}},{{&l_551[1][1],&l_551[1][2],&l_551[1][1],&l_551[1][2],&l_551[1][1],&l_551[1][1],&l_551[1][1],&l_551[1][1],&l_551[1][1]}},{{&l_551[1][4],&l_551[1][0],&l_551[1][1],&l_551[1][1],&l_551[1][1],&l_551[0][0],&l_551[0][0],&l_551[1][1],&l_551[1][1]}},{{&l_551[0][3],&l_551[1][1],&l_551[0][3],&l_551[1][4],&l_551[1][1],&l_551[1][1],&l_551[1][1],&l_551[1][4],&l_551[0][3]}},{{&l_551[1][1],&l_551[1][4],&l_551[1][4],&l_551[1][0],&l_551[1][1],&l_551[1][1],&l_551[1][0],&l_551[1][4],&l_551[1][4]}}};
                int l_596 = 0x7E79A16FL;
                int l_605 = 0x0201B35EL;
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_584[i] = 0UL;
                if ((safe_rshift_func_int8_t_s_u((func_61((func_41(l_584[6], p_29.f8) , &g_67[1][0]), (safe_sub_func_uint32_t_u_u(((((safe_add_func_int16_t_s_s(l_465, g_68.f2)) , g_68.f3) , (p_26.f6 <= l_589)) <= (-8L)), p_29.f4)), l_590[6][0][0], l_584[5]) & g_2), 6)))
                {
                    const unsigned l_595 = 0x1438A60AL;
                    if (((func_61(&g_67[3][2], (func_30((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(l_595, (func_61(&g_67[1][4], ((*l_520) > ((*g_103) ^ p_29.f0)), &g_67[1][0], l_595) || l_434))) , p_26.f1), (*l_520))), p_26.f4, l_596, p_29.f6, p_26.f8) , (*l_520)), g_597, p_29.f1) > 248UL) != g_36.f7))
                    {
                        (**g_102) = (*l_520);
                        (*l_384) = func_44(l_584[3], (safe_lshift_func_uint16_t_u_u((p_29.f3 , 1UL), 12)), (((**l_476) , (safe_sub_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s((((void*)0 == &g_103) , g_36.f3), 7)) | (&g_103 == &g_103)) < g_36.f7) & g_36.f4), p_29.f2))) > 0x6EDBDE6AL));
                        (**g_102) &= (l_604[0][0] == func_61(l_398, ((void*)0 != &p_26), &g_67[1][0], p_29.f3));
                    }
                    else
                    {
                        return (*l_520);


                    }
                }
                else
                {
                    char l_614 = 0xB9L;
                    l_605 = 1L;
                    (*g_102) = ((safe_mod_func_int8_t_s_s((l_434 & (safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(func_41((safe_sub_func_uint8_t_u_u(0x3AL, l_614)), ((g_144 == ((&p_29 != (((p_29.f1 , g_36.f4) , (safe_rshift_func_int16_t_s_u(((&l_468[4] != (*g_102)) , 0L), 3))) , (void*)0)) , g_68.f6)) , p_29.f6)), (-5L))), p_26.f8))), l_473)) , &l_468[5]);

                    ;
                }

                ;
                (*g_102) = func_44(g_464, l_584[6], l_468[2]);
            }
            else
            {
                int l_625 = 0x3EF11754L;
                struct S0 l_628[8][8] = {{{0x25B48ECBL,-3L,0L,252UL,0x2AL,0x3E4CL,0x47F97552L,0UL,1L},{8L,-1L,9L,255UL,1UL,65529UL,4294967287UL,1UL,0x43L},{0xC8C6B54DL,0xECD45A7FL,0xE6L,0x18L,1UL,65526UL,0xB10CB1CBL,0x5CL,0x63L},{-8L,-1L,0x46L,0x72L,251UL,65535UL,0x747F9E7EL,0x20L,9L},{0L,-7L,-5L,0xC5L,0x3AL,1UL,0x885BC8F0L,0xA7L,0x96L},{0L,-7L,-5L,0xC5L,0x3AL,1UL,0x885BC8F0L,0xA7L,0x96L},{-8L,-1L,0x46L,0x72L,251UL,65535UL,0x747F9E7EL,0x20L,9L},{0xC8C6B54DL,0xECD45A7FL,0xE6L,0x18L,1UL,65526UL,0xB10CB1CBL,0x5CL,0x63L}},{{0L,0x2E8B8F35L,0x4FL,0xC5L,254UL,1UL,4294967295UL,0x18L,-4L},{0L,0x2E8B8F35L,0x4FL,0xC5L,254UL,1UL,4294967295UL,0x18L,-4L},{0x30DF8A52L,2L,2L,0xA3L,255UL,0xDF2AL,0UL,0x68L,0xF5L},{0x25B48ECBL,-3L,0L,252UL,0x2AL,0x3E4CL,0x47F97552L,0UL,1L},{0xDB4892A8L,0x11D058ACL,0x1AL,0xF1L,0x40L,0UL,0xA006A4FEL,255UL,0x34L},{-10L,-3L,0xC5L,1UL,252UL,0xD32AL,0xF7713BEEL,0x0BL,0xAEL},{0L,0x2E8B8F35L,0x4FL,0xC5L,254UL,1UL,4294967295UL,0x18L,-4L},{0xDB4892A8L,0x11D058ACL,0x1AL,0xF1L,0x40L,0UL,0xA006A4FEL,255UL,0x34L}},{{0xE975B0A2L,-8L,-8L,0UL,253UL,0xC036L,0x8869CC5DL,0x8FL,-1L},{0xDB4892A8L,0x11D058ACL,0x1AL,0xF1L,0x40L,0UL,0xA006A4FEL,255UL,0x34L},{0xC8C6B54DL,0xECD45A7FL,0xE6L,0x18L,1UL,65526UL,0xB10CB1CBL,0x5CL,0x63L},{0xE975B0A2L,-8L,-8L,0UL,253UL,0xC036L,0x8869CC5DL,0x8FL,-1L},{-8L,-1L,0x46L,0x72L,251UL,65535UL,0x747F9E7EL,0x20L,9L},{0xE975B0A2L,-8L,-8L,0UL,253UL,0xC036L,0x8869CC5DL,0x8FL,-1L},{0xC8C6B54DL,0xECD45A7FL,0xE6L,0x18L,1UL,65526UL,0xB10CB1CBL,0x5CL,0x63L},{0xDB4892A8L,0x11D058ACL,0x1AL,0xF1L,0x40L,0UL,0xA006A4FEL,255UL,0x34L}},{{0xDB4892A8L,0x11D058ACL,0x1AL,0xF1L,0x40L,0UL,0xA006A4FEL,255UL,0x34L},{8L,-1L,9L,255UL,1UL,65529UL,4294967287UL,1UL,0x43L},{0L,-7L,-5L,0xC5L,0x3AL,1UL,0x885BC8F0L,0xA7L,0x96L},{0x25B48ECBL,-3L,0L,252UL,0x2AL,0x3E4CL,0x47F97552L,0UL,1L},{8L,-1L,9L,255UL,1UL,65529UL,4294967287UL,1UL,0x43L},{0xC8C6B54DL,0xECD45A7FL,0xE6L,0x18L,1UL,65526UL,0xB10CB1CBL,0x5CL,0x63L},{-8L,-1L,0x46L,0x72L,251UL,65535UL,0x747F9E7EL,0x20L,9L},{0L,-7L,-5L,0xC5L,0x3AL,1UL,0x885BC8F0L,0xA7L,0x96L}},{{-3L,0x8A759683L,0L,0UL,0UL,65532UL,0x393D9506L,0x99L,-3L},{-8L,-1L,0x46L,0x72L,251UL,65535UL,0x747F9E7EL,0x20L,9L},{0x6A766C46L,-7L,-1L,0xFAL,5UL,0x0E1EL,0x9F41CA21L,255UL,0x21L},{0xDB4892A8L,0x11D058ACL,0x1AL,0xF1L,0x40L,0UL,0xA006A4FEL,255UL,0x34L},{0xDB4892A8L,0x11D058ACL,0x1AL,0xF1L,0x40L,0UL,0xA006A4FEL,255UL,0x34L},{0x6A766C46L,-7L,-1L,0xFAL,5UL,0x0E1EL,0x9F41CA21L,255UL,0x21L},{-8L,-1L,0x46L,0x72L,251UL,65535UL,0x747F9E7EL,0x20L,9L},{-3L,0x8A759683L,0L,0UL,0UL,65532UL,0x393D9506L,0x99L,-3L}},{{0L,0xF2792BE9L,-1L,0UL,0x75L,0x09E7L,0x83BA73F4L,0x73L,-1L},{0xDB4892A8L,0x11D058ACL,0x1AL,0xF1L,0x40L,0UL,0xA006A4FEL,255UL,0x34L},{0L,-7L,-5L,0xC5L,0x3AL,1UL,0x885BC8F0L,0xA7L,0x96L},{0xC8C6B54DL,0xECD45A7FL,0xE6L,0x18L,1UL,65526UL,0xB10CB1CBL,0x5CL,0x63L},{0L,0x2E8B8F35L,0x4FL,0xC5L,254UL,1UL,4294967295UL,0x18L,-4L},{0L,0xF2792BE9L,-1L,0UL,0x75L,0x09E7L,0x83BA73F4L,0x73L,-1L},{0xC8C6B54DL,0xECD45A7FL,0xE6L,0x18L,1UL,65526UL,0xB10CB1CBL,0x5CL,0x63L},{0x25B48ECBL,-3L,0L,252UL,0x2AL,0x3E4CL,0x47F97552L,0UL,1L}},{{0L,0x2E8B8F35L,0x4FL,0xC5L,254UL,1UL,4294967295UL,0x18L,-4L},{0L,0xF2792BE9L,-1L,0UL,0x75L,0x09E7L,0x83BA73F4L,0x73L,-1L},{0xC8C6B54DL,0xECD45A7FL,0xE6L,0x18L,1UL,65526UL,0xB10CB1CBL,0x5CL,0x63L},{0x25B48ECBL,-3L,0L,252UL,0x2AL,0x3E4CL,0x47F97552L,0UL,1L},{0xC8C6B54DL,0xECD45A7FL,0xE6L,0x18L,1UL,65526UL,0xB10CB1CBL,0x5CL,0x63L},{0L,0xF2792BE9L,-1L,0UL,0x75L,0x09E7L,0x83BA73F4L,0x73L,-1L},{0L,0x2E8B8F35L,0x4FL,0xC5L,254UL,1UL,4294967295UL,0x18L,-4L},{0xC8C6B54DL,0xECD45A7FL,0xE6L,0x18L,1UL,65526UL,0xB10CB1CBL,0x5CL,0x63L}},{{-3L,0x8A759683L,0L,0UL,0UL,65532UL,0x393D9506L,0x99L,-3L},{0xDB4892A8L,0x11D058ACL,0x1AL,0xF1L,0x40L,0UL,0xA006A4FEL,255UL,0x34L},{0x30DF8A52L,2L,2L,0xA3L,255UL,0xDF2AL,0UL,0x68L,0xF5L},{-3L,0x8A759683L,0L,0UL,0UL,65532UL,0x393D9506L,0x99L,-3L},{-8L,-1L,0x46L,0x72L,251UL,65535UL,0x747F9E7EL,0x20L,9L},{0x6A766C46L,-7L,-1L,0xFAL,5UL,0x0E1EL,0x9F41CA21L,255UL,0x21L},{0xDB4892A8L,0x11D058ACL,0x1AL,0xF1L,0x40L,0UL,0xA006A4FEL,255UL,0x34L},{0xDB4892A8L,0x11D058ACL,0x1AL,0xF1L,0x40L,0UL,0xA006A4FEL,255UL,0x34L}}};
                struct S0 ** const l_631 = &l_551[1][1];
                int i, j;
                l_627 |= ((p_26 , (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(func_41(((((safe_lshift_func_int16_t_s_u(p_26.f8, 4)) | (l_468[5] && (l_625 > (func_61(&g_67[3][1], l_625, &l_551[1][1], l_625) && p_28)))) , 0x93BFL) , 4294967295UL), p_26.f8), g_144)), l_626[5])), g_36.f2)) , p_29.f0) , l_520)) != l_520);
                if (func_41(g_36.f6, (((((l_628[5][4] , (safe_rshift_func_int16_t_s_s(func_61(&l_551[1][1], g_68.f4, l_631, l_628[5][4].f2), 8))) == p_26.f2) == (safe_unary_minus_func_uint8_t_u((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(g_36.f7, p_29.f1)) || (*g_103)), 1UL)), 6)), g_36.f4))))) ^ 0xF1L) < g_36.f1)))
                {
                    (*g_102) = func_44(g_36.f6, l_625, p_26.f6);
                    for (l_627 = 4; (l_627 >= 0); l_627 -= 1)
                    {
                        (*l_520) |= 0x6EE55EB4L;
                        (**g_102) &= (l_476 == l_631);
                        (**g_102) |= p_29.f4;
                    }
                }
                else
                {
                    int l_644 = 7L;
                    l_627 &= func_61(&g_67[1][0], ((((0x743C967DL > (safe_unary_minus_func_int16_t_s(((safe_add_func_uint16_t_u_u(func_41((((((g_68.f0 | 1L) , l_384) != ((**l_476) , &l_520)) == g_36.f0) , p_26.f5), l_644), g_36.f6)) || l_628[5][4].f5)))) || (*l_520)) < g_2) != 0x6C14L), g_597, p_26.f5);
                    for (l_498 = 0; (l_498 >= 42); l_498 = safe_add_func_int32_t_s_s(l_498, 8))
                    {
                        struct S0 ***l_647 = &l_398;
                        int l_650[8] = {0xBCEA74A4L,0x4F63C655L,0xBCEA74A4L,0xBCEA74A4L,0x4F63C655L,0xBCEA74A4L,0xBCEA74A4L,0x4F63C655L};
                        int i;
                        (*l_647) = &g_67[1][0];

                        ;
                        l_650[5] = ((safe_lshift_func_uint16_t_u_s(((p_26.f6 < (p_26.f4 == ((p_26.f3 && g_304) || (((((g_68.f2 ^ (0x123C6BB3L && (((0xB64FL <= func_61(&g_67[8][3], g_36.f5, &g_67[1][0], l_650[0])) , 0x11774F6CL) && (*g_103)))) , p_26.f4) == p_26.f3) | p_26.f6) && p_26.f8)))) , p_29.f0), p_26.f7)) > 4294967295UL);
                        (**l_384) |= 0L;
                    }

                    ;
                    (*g_103) = (l_644 , (**g_102));
                }

                ;
            }

            ;
            ;
            for (l_534 = 0; (l_534 <= 0); l_534 += 1)
            {
                struct S0 **l_652 = &g_67[1][0];
                int l_657 = 0x2E1B4382L;
            }
        }
        else
        {
            unsigned short l_711 = 0x1EBEL;
            for (l_473 = (-1); (l_473 >= 10); l_473++)
            {
                int l_706[2][2] = {{1L,1L},{1L,1L}};
                int i, j;
                l_468[5] |= (((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((**l_384), (**g_102))), (safe_sub_func_uint8_t_u_u((l_498 , (l_706[1][1] != (safe_lshift_func_uint16_t_u_u(0x820CL, 13)))), (safe_add_func_uint32_t_u_u(l_711, l_706[1][1])))))), func_61(&l_551[1][1], ((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(l_716, g_2)) & (**g_102)), g_36.f7)) & l_711), &l_551[1][1], p_26.f8))) || 1UL) | g_68.f4);
                for (g_68.f1 = (-17); (g_68.f1 != 18); ++g_68.f1)
                {
                    (*g_66) = (void*)0;
                }


                return p_29.f2;
            }
        }


        ;
        ;
    }
    else
    {
        struct S0 **l_732[2];
        int l_739 = 1L;
        int *l_755 = &g_68.f0;
        int ***l_760 = (void*)0;
        int ***l_761 = &l_401[0];
        int i;
        for (i = 0; i < 2; i++)
            l_732[i] = &g_67[1][0];
        for (p_29.f0 = (-27); (p_29.f0 != 3); ++p_29.f0)
        {
            struct S0 *l_724 = &g_725[7];
            struct S0 **l_723 = &l_724;
            int l_726[7][4][1] = {{{0xBBD2AD1DL},{0x47D40487L},{0xBBD2AD1DL},{0x47D40487L}},{{0xBBD2AD1DL},{0x47D40487L},{0xBBD2AD1DL},{0x47D40487L}},{{0xBBD2AD1DL},{0x47D40487L},{0xBBD2AD1DL},{0x47D40487L}},{{0xBBD2AD1DL},{0x47D40487L},{0xBBD2AD1DL},{0x47D40487L}},{{0xBBD2AD1DL},{0x47D40487L},{0xBBD2AD1DL},{0x47D40487L}},{{0xBBD2AD1DL},{0x47D40487L},{0xBBD2AD1DL},{0x47D40487L}},{{0xBBD2AD1DL},{0x47D40487L},{0xBBD2AD1DL},{0x47D40487L}}};
            int l_762 = 0x956EDAF5L;
            int i, j, k;
            l_726[6][0][0] &= ((func_30((safe_sub_func_uint8_t_u_u(g_36.f4, (g_464 != ((*g_66) == (void*)0)))), g_68.f5, p_27, (*g_103), ((((g_36.f4 != g_36.f4) , 0x62L) && g_464) >= g_68.f7)) , &g_67[4][0]) != l_723);
            for (g_68.f4 = (-2); (g_68.f4 > 22); ++g_68.f4)
            {
                unsigned short l_740 = 0xFDF6L;
                l_740 |= (l_729 , (safe_mul_func_uint16_t_u_u(l_726[6][0][0], (func_61(l_732[1], (safe_mul_func_uint16_t_u_u((g_68.f8 , (g_144 < ((l_726[6][0][0] != (1L >= (safe_mod_func_uint16_t_u_u((g_36.f4 , ((safe_mod_func_uint32_t_u_u(func_61(&g_67[7][1], l_739, l_398, p_26.f4), g_36.f6)) , 65535UL)), g_68.f4)))) >= 0x84L))), g_68.f0)), &g_67[7][3], p_29.f4) > 0x04L))));
                (**l_384) &= 0x72166E49L;
            }
            for (l_729 = 0; (l_729 >= 0); l_729 -= 1)
            {
                char l_744 = 0xA5L;
                if (l_739)
                {
                    struct S0 ** const l_743 = &l_724;
                    for (l_412 = 0; (l_412 <= 0); l_412 += 1)
                    {
                        unsigned l_751[4][9][7] = {{{0x9DA8054DL,1UL,0x4D72384EL,0x9DADFE7FL,0x9DA8054DL,6UL,0x27E15830L},{1UL,4294967292UL,0xBBD0AC14L,1UL,0xF7FCDB03L,0x3A2ACD6AL,4UL},{4294967295UL,4294967295UL,4294967295UL,4294967293UL,1UL,0xB39FD607L,0xCAA0279EL},{4294967295UL,1UL,0xA251B305L,4294967295UL,0xB64D0949L,0UL,4294967291UL},{0x9DA8054DL,9UL,0x5FEBBFC1L,1UL,0x66494BDEL,0xB39FD607L,3UL},{0x3A2ACD6AL,1UL,1UL,1UL,1UL,0x3A2ACD6AL,0x7FDD9482L},{1UL,0x9DADFE7FL,0xF6C36A54L,4294967295UL,0xFE595443L,6UL,1UL},{4294967295UL,1UL,0x7FDD9482L,4294967295UL,4294967287UL,0x7FDD9482L,4UL},{0x66494BDEL,0x9DADFE7FL,0x1D334EDDL,0x3E886062L,0x9DA8054DL,0x3E886062L,0x1D334EDDL}},{{4294967295UL,1UL,4294967289UL,1UL,4294967295UL,0xD9F6A309L,1UL},{0xFE595443L,9UL,4294967295UL,1UL,0xCAA0279EL,9UL,1UL},{4294967292UL,1UL,1UL,4294967287UL,4294967295UL,0xBBD0AC14L,0xBBD0AC14L},{0x9DA8054DL,4294967295UL,0UL,4294967295UL,0x9DA8054DL,0xF653AED8L,3UL},{0xB64D0949L,4294967292UL,0UL,4UL,4294967287UL,0x3A2ACD6AL,0x73FE27D6L},{0xCAA0279EL,1UL,4294967295UL,9UL,0xFE595443L,0x3E886062L,0xCAA0279EL},{0xB64D0949L,4UL,0UL,4294967295UL,1UL,4294967289UL,1UL},{0x9DA8054DL,0x3E886062L,0x1D334EDDL,0x9DADFE7FL,0x66494BDEL,4294967293UL,0x27E15830L},{4294967292UL,1UL,0xBBD0AC14L,0UL,0xB64D0949L,0x3A2ACD6AL,1UL}},{{0xFE595443L,4294967295UL,0xF6C36A54L,0x9DADFE7FL,1UL,4294967295UL,1UL},{4294967295UL,0UL,0UL,4294967295UL,0xF7FCDB03L,0xBBD0AC14L,4294967291UL},{0x66494BDEL,1UL,0x5FEBBFC1L,9UL,0x9DA8054DL,0xB39FD607L,0x5FEBBFC1L},{4294967295UL,1UL,1UL,4UL,1UL,0xD9F6A309L,4294967291UL},{1UL,4294967293UL,4294967295UL,4294967295UL,4294967295UL,4294967293UL,1UL},{0x3A2ACD6AL,4UL,0x7FDD9482L,4294967287UL,4294967295UL,0x7FDD9482L,1UL},{0x9DA8054DL,0x9DADFE7FL,0x4D72384EL,1UL,0x9DA8054DL,4294967295UL,0x27E15830L},{4294967295UL,4294967292UL,0x7FDD9482L,1UL,0x3A2ACD6AL,0x3A2ACD6AL,1UL},{4294967295UL,1UL,4294967295UL,0x3E886062L,1UL,9UL,0xCAA0279EL}},{{1UL,0UL,4UL,4294967287UL,0x3A2ACD6AL,0x73FE27D6L,0xBBD0AC14L},{0x66494BDEL,4294967295UL,0UL,0xB39FD607L,0x3A9E512CL,0xF653AED8L,0x5FEBBFC1L},{0x82408A46L,4294967292UL,0xA251B305L,1UL,4294967287UL,0xD9F6A309L,0UL},{0xCAA0279EL,0x3E886062L,0xFE595443L,9UL,4294967295UL,1UL,0xCAA0279EL},{0xF7FCDB03L,1UL,0UL,4294967287UL,0x73DCF2F8L,4294967289UL,0UL},{0x3A9E512CL,0x3E886062L,0x4D72384EL,6UL,0x66494BDEL,6UL,0x4D72384EL},{4294967292UL,4294967292UL,0x73FE27D6L,0UL,0xF7FCDB03L,4294967295UL,1UL},{4294967295UL,4294967295UL,0xF6C36A54L,4294967293UL,0UL,4294967295UL,0xCAA0279EL},{0xC52BB1CEL,0UL,0xA251B305L,0xC52BB1CEL,0xF7FCDB03L,0UL,4294967289UL}}};
                        int l_752 = 1L;
                        int i, j, k;
                        (*g_103) |= (safe_lshift_func_int16_t_s_u(l_726[(l_729 + 3)][(l_729 + 2)][l_412], (l_726[(l_729 + 3)][(l_729 + 1)][l_412] > ((func_61(l_732[0], p_26.f2, l_732[1], (func_61(l_398, func_61(l_732[1], p_28, l_732[0], g_36.f1), l_743, l_726[6][0][0]) , l_744)) , g_725[7].f0) < p_26.f3))));
                        l_752 ^= (g_67[(l_729 + 6)][(l_412 + 2)] == ((**l_384) , (((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((~(((l_739 , (safe_mod_func_int32_t_s_s(((l_726[(l_729 + 3)][(l_729 + 2)][l_412] , l_744) != 0x1A419256L), l_726[6][0][0]))) <= (p_26.f7 >= p_28)) && g_725[7].f4)), p_29.f6)), l_751[0][6][5])) , 0x77DD6E0EL) , g_67[(l_412 + 8)][l_412])));
                    }
                    if (p_29.f2)
                        continue;
                    (**g_102) = ((-7L) && ((void*)0 != &g_597));
                }
                else
                {
                    int **l_753 = &g_103;
                    int ***l_754 = &l_401[0];
                    (*l_754) = l_753;
                    (**g_102) = (-2L);
                    if (p_26.f6)
                        break;
                }
                if ((*g_103))
                    break;
                l_755 = (void*)0;

                ;
                for (p_26.f3 = 0; (p_26.f3 <= 0); p_26.f3 += 1)
                {
                    int i, j, k;
                }
            }
            p_26.f0 |= (((safe_sub_func_uint16_t_u_u(p_29.f2, p_27)) , l_401[1]) != (((func_30((l_760 == ((**g_66) , l_761)), g_36.f8, l_762, p_29.f3, p_26.f8) , &g_102) != l_760) , &g_103));
        }


        ;
    }



    ;

    (*l_384) = l_763;

    ;
    return p_29.f8;


}







static struct S0 func_30(unsigned char p_31, unsigned p_32, unsigned char p_33, int p_34, unsigned p_35)
{
    int *l_350 = (void*)0;
    int **l_351 = &l_350;
    int l_367 = 0L;
    struct S0 l_372 = {2L,0xB3EF9236L,1L,0x44L,255UL,65529UL,0x9A51ED6FL,0xAFL,0x4BL};
    (*g_102) = (*g_102);
    l_350 = (void*)0;
    l_351 = &l_350;
    if (p_33)
    {
        struct S0 **l_362[2];
        struct S0 ** const l_368 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_362[i] = &g_67[1][0];
        p_34 ^= (safe_add_func_int32_t_s_s((-3L), func_41(g_144, p_31)));
        (*g_103) = ((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u(g_36.f0, 7)) > ((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(0xB7L, (func_61(l_362[0], (safe_sub_func_int32_t_s_s(((safe_add_func_int8_t_s_s(0x71L, (l_367 & ((&p_34 == (*g_102)) < (0UL || (p_32 & 0xC87FE9A1L)))))) & (**g_102)), p_31)), l_368, g_304) ^ (-1L)))), 0x7225L)) >= p_32)), p_32)) , (*g_103));
        (*l_351) = (*g_102);

        ;
    }
    else
    {
        int *l_371 = &g_68.f0;
        p_34 = (safe_mod_func_uint16_t_u_u(p_34, (((l_371 != &p_34) && (**g_102)) , g_68.f0)));
    }

    ;
    return l_372;
}







static unsigned char func_41(unsigned p_42, int p_43)
{
    unsigned short l_48 = 6UL;
    int *l_207 = (void*)0;
    struct S0 **l_217 = (void*)0;
    struct S0 **l_298 = &g_67[1][0];
    int l_307 = (-1L);
    l_207 = func_44(p_42, l_48, g_36.f0);


    for (g_68.f4 = 0; (g_68.f4 <= 4); g_68.f4 += 1)
    {
        int *l_208[10];
        unsigned l_209 = 4294967295UL;
        struct S0 ** const l_218 = &g_67[5][0];
        struct S0 **l_224 = (void*)0;
        unsigned l_273 = 0x4D604C6CL;
        struct S0 *l_279 = &g_68;
        unsigned l_339 = 4294967290UL;
        int i;
        for (i = 0; i < 10; i++)
            l_208[i] = (void*)0;
    }
    return (*l_207);
}







static int * func_44(unsigned p_45, unsigned p_46, unsigned p_47)
{
    int l_53 = 0x70B1CB45L;
    int l_54 = 8L;
    struct S0 ** const l_69 = &g_67[1][0];
    unsigned l_70 = 1UL;
    int *l_76 = &l_54;
    int **l_75 = &l_76;
    struct S0 ** const l_151 = &g_67[5][4];
    for (p_46 = (-19); (p_46 <= 34); p_46 = safe_add_func_uint32_t_u_u(p_46, 6))
    {
        struct S0 *l_51 = (void*)0;
        struct S0 **l_52 = &l_51;
        (*l_52) = l_51;
    }
    l_54 |= (p_47 | l_53);
    (*l_75) = ((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(func_61(g_66, g_36.f2, l_69, l_70), (p_47 > (safe_mod_func_int16_t_s_s(g_36.f7, ((safe_sub_func_int16_t_s_s((-5L), l_70)) , g_68.f3)))))), 10)) , 1L), g_36.f8)) , (void*)0);

    ;
    for (g_68.f4 = 1; (g_68.f4 <= 4); g_68.f4 += 1)
    {
        int *l_81 = &g_68.f0;
        struct S0 **l_82 = &g_67[1][0];
        unsigned short l_85 = 0x6B82L;
        char l_123[10][4] = {{0x47L,6L,(-5L),6L},{(-5L),6L,(-1L),0x47L},{6L,2L,0xD0L,2L},{0x1EL,(-5L),0x86L,0L},{0xD0L,0x98L,4L,0xF1L},{0L,4L,6L,0x86L},{0L,(-1L),4L,(-2L)},{0xD0L,0x86L,0x86L,0xD0L},{0x1EL,0x47L,4L,(-1L)},{(-1L),0L,(-5L),0xF1L}};
        unsigned l_195 = 0xB35087B7L;
        unsigned short l_201[7] = {65535UL,0xA795L,0xA795L,65535UL,0xA795L,0xA795L,65535UL};
        int i, j;
        (*l_81) = (safe_add_func_int8_t_s_s((255UL && (safe_mul_func_uint8_t_u_u((g_36.f4 > g_36.f8), g_68.f6))), 0xF5L));
        for (g_68.f6 = 0; (g_68.f6 <= 4); g_68.f6 += 1)
        {
            int l_88[1];
            struct S0 **l_91[8];
            int l_92 = (-10L);
            struct S0 **l_180[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int ** const l_184 = &l_76;
            short l_191 = 0L;
            int *l_194 = &g_68.f0;
            int i;
            for (i = 0; i < 1; i++)
                l_88[i] = 3L;
            for (i = 0; i < 8; i++)
                l_91[i] = &g_67[4][0];
            (*l_81) = (func_61(l_82, g_36.f1, l_69, (0L != (safe_sub_func_uint8_t_u_u((((l_85 , 0UL) != p_45) && (g_36.f2 && p_47)), 0x72L)))) , 1L);
            for (l_70 = 0; (l_70 <= 4); l_70 += 1)
            {
                (*l_81) |= (-1L);
            }
            if ((safe_mul_func_uint16_t_u_u(0x30FDL, (p_45 ^ (func_61(l_82, l_88[0], &g_67[1][0], (safe_mod_func_uint32_t_u_u(func_61(l_91[7], ((g_68.f8 & 5UL) > 0xF2L), l_69, l_92), p_45))) ^ p_45)))))
            {
                int *l_109 = &g_68.f0;
                int l_111 = 0x77A089C8L;
                struct S0 ** const l_120 = &g_67[8][1];
                struct S0 **l_134 = &g_67[0][2];
                if (p_45)
                {
                    unsigned l_110[3][9][2];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 9; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_110[i][j][k] = 0xD9254FF3L;
                        }
                    }
                    for (g_68.f5 = 0; (g_68.f5 <= 4); g_68.f5 += 1)
                    {
                        struct S0 l_99 = {0x933AC5CEL,0L,0xC4L,0xAEL,0xB1L,0xAD21L,0xB74EAE51L,0x4AL,0x69L};
                        int * const *l_104 = &g_103;
                        int i, j;
                        l_111 |= (safe_rshift_func_int8_t_s_s(func_61(&g_67[1][0], ((safe_rshift_func_uint16_t_u_u((((+(safe_add_func_uint16_t_u_u((((l_99 , ((*l_75) != ((safe_mul_func_int8_t_s_s((g_102 == l_104), (g_68.f2 & (safe_rshift_func_int8_t_s_s(((-9L) < (g_2 & ((safe_rshift_func_int8_t_s_s((l_109 == l_81), (*l_81))) ^ 255UL))), 1))))) , (void*)0))) | (**g_102)) , 8UL), p_45))) <= p_46) | l_110[0][3][1]), (**l_104))) > g_36.f4), &g_67[0][4], (*l_109)), g_36.f4));
                        return (*g_102);


                    }
                    if (p_46)
                        continue;
                    (*g_102) = (*g_102);
                    (*g_103) = (safe_add_func_uint8_t_u_u(func_61(&g_67[1][0], (255UL == (p_47 > ((**g_102) == (safe_mod_func_int32_t_s_s(0x717EF146L, ((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((&l_92 != (void*)0))), ((safe_unary_minus_func_uint16_t_u(func_61(l_91[6], func_61(&g_67[8][0], p_46, l_120, g_68.f2), &g_67[1][0], g_68.f2))) , p_45))) , 1L)))))), l_82, p_45), (*l_81)));
                }
                else
                {
                    for (l_54 = 0; (l_54 <= 4); l_54 += 1)
                    {
                        (**g_102) = ((safe_sub_func_uint16_t_u_u(l_123[9][1], (((safe_sub_func_int16_t_s_s(((((~((safe_rshift_func_int16_t_s_s((((void*)0 == (*l_75)) > ((*g_66) != (*g_66))), 13)) ^ ((+(*l_109)) ^ p_47))) , 0xCEC1L) , (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((+(((safe_sub_func_int16_t_s_s(g_68.f7, 0x286AL)) == 0UL) ^ 0L)), 8)), 0x06CFL))) <= p_47), p_46)) > g_68.f3) & 0xFF3CL))) > 0x8BL);
                    }
                    (*l_109) |= 0x5C393FB4L;
                }
                if (func_61(l_134, ((3UL || (-3L)) <= ((safe_lshift_func_uint16_t_u_u(p_47, 3)) ^ p_47)), l_69, g_36.f6))
                {
                    return (*g_102);


                }
                else
                {
                    unsigned char l_145 = 255UL;
                    if (((safe_mul_func_int16_t_s_s(((safe_add_func_int8_t_s_s(g_68.f7, (*l_81))) | (safe_unary_minus_func_int32_t_s(((g_36.f5 ^ 0xE5L) ^ p_47)))), (safe_mod_func_uint32_t_u_u(p_45, (*l_109))))) , g_144))
                    {
                        (**g_102) = (p_45 , (&l_111 == (*g_102)));
                        (*l_81) = (*g_103);
                    }
                    else
                    {
                        int *l_146 = &l_111;
                        l_145 = (*l_109);
                        (*g_102) = (*g_102);
                        return (*g_102);


                    }
                    (*g_102) = (*g_102);
                }
                if (((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(((~(func_61(l_91[7], g_144, l_151, (!((((**l_82) , p_47) || (safe_add_func_int32_t_s_s((((0xA2L != 9L) || (safe_mul_func_int8_t_s_s(((l_81 != (*g_102)) == g_68.f4), 0x64L))) , (*g_103)), 0x7A575A08L))) < 2L))) > p_46)) , 0x00L), g_36.f5)) , g_36.f5), l_88[0])) , (*l_81)))
                {
                    int i, j;
                    g_67[g_68.f4][g_68.f6] = (*g_66);
                }
                else
                {
                    for (l_111 = 0; l_111 < 10; l_111 += 1)
                    {
                        for (p_47 = 0; p_47 < 4; p_47 += 1)
                        {
                            l_123[l_111][p_47] = (-8L);
                        }
                    }
                    if ((*g_103))
                        continue;
                }
            }
            else
            {
                struct S0 ***l_156 = &g_66;
                int l_161 = 1L;
                (*l_156) = l_91[7];
                if ((p_47 ^ (((*l_81) , (((void*)0 != &l_92) || 1UL)) != ((g_68.f0 , (safe_lshift_func_int8_t_s_u((p_45 <= 0UL), 1))) , (((0x24C37666L || 9UL) != g_68.f2) < l_161)))))
                {
                    unsigned l_162 = 4294967295UL;
                    const struct S0 l_169 = {1L,1L,1L,255UL,0x1FL,0xD2F1L,0UL,0x76L,-1L};
                    (*g_103) |= (&l_76 != (void*)0);
                    if (l_162)
                        break;
                    (*l_75) = (*g_102);


                    if (func_61(&g_67[1][0], p_46, &g_67[1][0], (safe_sub_func_uint32_t_u_u((g_68.f2 < ((((safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((l_169 , (safe_mul_func_uint8_t_u_u(func_61((*l_156), g_36.f0, &g_67[1][0], (*l_81)), 0UL))) , g_36.f3), g_36.f7)) || (-6L)), p_45)) | 0xB7F4L) , p_46) == 9UL)), (*l_81)))))
                    {
                        if ((**l_75))
                            break;
                        (*l_75) = l_81;

                        ;
                        (*l_82) = (((g_36.f4 , &g_66) != &g_66) , (*g_66));
                        (*l_75) = (*g_102);


                    }
                    else
                    {
                        (*g_102) = (*g_102);
                        (*l_75) = ((g_68.f5 > (safe_add_func_uint8_t_u_u(0xA4L, (safe_rshift_func_int8_t_s_s(l_88[0], (safe_add_func_uint32_t_u_u(p_46, g_36.f7))))))) , (*g_102));
                    }
                }
                else
                {
                    struct S0 ** const l_183 = (void*)0;
                    int l_187[4];
                    int l_188 = (-1L);
                    int i;
                    for (i = 0; i < 4; i++)
                        l_187[i] = 0x3F4ACB36L;
                    (*g_103) = (safe_add_func_uint16_t_u_u(((l_92 || ((p_46 , ((func_61(l_180[1], (safe_add_func_int8_t_s_s(((void*)0 == &l_82), (-8L))), l_183, l_161) , p_46) | l_161)) == 0x0850L)) ^ g_144), g_36.f4));
                    l_188 |= (((((-5L) == 1UL) , l_184) == &g_103) , (((((safe_add_func_uint8_t_u_u(((*g_103) >= (g_2 & l_187[0])), g_36.f0)) , (((*l_75) == (*g_102)) , 0xE50CL)) >= (*l_81)) == g_36.f7) & (-1L)));
                }
                (*l_184) = (*l_75);
            }
            if ((safe_mul_func_uint16_t_u_u(func_61(l_91[7], l_191, &g_67[1][0], (safe_rshift_func_int8_t_s_s(((*g_103) <= (((((((2L & func_61((p_47 , l_180[5]), p_47, ((**l_151) , (void*)0), g_68.f3)) , l_81) == l_194) & (*g_103)) == p_46) > 0x40F0L) & g_36.f6)), g_68.f5))), p_46)))
            {
                (*l_75) = (*l_184);
            }
            else
            {
                unsigned short l_206[8] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
                int i;
                for (g_68.f0 = 3; (g_68.f0 >= 0); g_68.f0 -= 1)
                {
                    struct S0 ** const l_200 = (void*)0;
                    int l_202 = 0x77572B0FL;
                    if (((void*)0 != &l_82))
                    {
                        int *l_196 = (void*)0;
                        int *l_197 = &l_53;
                        struct S0 ***l_203 = (void*)0;
                        struct S0 ***l_204 = &l_180[1];
                        int i, j;
                        (*l_197) = (func_61(&g_67[1][0], l_123[(g_68.f6 + 5)][g_68.f0], l_151, l_123[g_68.f6][g_68.f0]) > ((l_123[g_68.f0][g_68.f0] , g_68.f2) == l_195));
                        l_202 = ((safe_mul_func_uint16_t_u_u((+0UL), ((((p_46 <= (0xDBA8L <= (func_61(&g_67[6][1], (p_46 > (&l_81 != &l_81)), l_200, l_201[1]) <= p_47))) ^ 8L) | p_46) > p_45))) & (*l_81));
                        (*l_204) = l_82;
                    }
                    else
                    {
                        int *l_205[5][5][1] = {{{&g_68.f0},{&l_54},{&l_54},{&g_68.f0},{&l_54}},{{&l_202},{&g_68.f0},{&l_202},{&l_54},{&g_68.f0}},{{&l_54},{&l_54},{&g_68.f0},{&l_54},{&l_202}},{{&g_68.f0},{&l_202},{&l_54},{&g_68.f0},{&l_54}},{{&l_54},{&g_68.f0},{&l_54},{&l_202},{&g_68.f0}}};
                        int i, j, k;
                        l_54 ^= (**g_102);
                        (*l_184) = (*g_102);


                        l_202 = p_46;
                        l_206[5] ^= (&l_76 != &g_103);
                    }
                }
            }
        }
    }


    return (*g_102);


}







static const unsigned short func_61(struct S0 ** p_62, int p_63, struct S0 ** const p_64, unsigned char p_65)
{
    return p_63;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
    transparent_crc(g_36.f1, "g_36.f1", print_hash_value);
    transparent_crc(g_36.f2, "g_36.f2", print_hash_value);
    transparent_crc(g_36.f3, "g_36.f3", print_hash_value);
    transparent_crc(g_36.f4, "g_36.f4", print_hash_value);
    transparent_crc(g_36.f5, "g_36.f5", print_hash_value);
    transparent_crc(g_36.f6, "g_36.f6", print_hash_value);
    transparent_crc(g_36.f7, "g_36.f7", print_hash_value);
    transparent_crc(g_36.f8, "g_36.f8", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_68.f1, "g_68.f1", print_hash_value);
    transparent_crc(g_68.f2, "g_68.f2", print_hash_value);
    transparent_crc(g_68.f3, "g_68.f3", print_hash_value);
    transparent_crc(g_68.f4, "g_68.f4", print_hash_value);
    transparent_crc(g_68.f5, "g_68.f5", print_hash_value);
    transparent_crc(g_68.f6, "g_68.f6", print_hash_value);
    transparent_crc(g_68.f7, "g_68.f7", print_hash_value);
    transparent_crc(g_68.f8, "g_68.f8", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_725[i].f0, "g_725[i].f0", print_hash_value);
        transparent_crc(g_725[i].f1, "g_725[i].f1", print_hash_value);
        transparent_crc(g_725[i].f2, "g_725[i].f2", print_hash_value);
        transparent_crc(g_725[i].f3, "g_725[i].f3", print_hash_value);
        transparent_crc(g_725[i].f4, "g_725[i].f4", print_hash_value);
        transparent_crc(g_725[i].f5, "g_725[i].f5", print_hash_value);
        transparent_crc(g_725[i].f6, "g_725[i].f6", print_hash_value);
        transparent_crc(g_725[i].f7, "g_725[i].f7", print_hash_value);
        transparent_crc(g_725[i].f8, "g_725[i].f8", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_948, "g_948", print_hash_value);
    transparent_crc(g_985, "g_985", print_hash_value);
    transparent_crc(g_1028, "g_1028", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1122[i], "g_1122[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1129, "g_1129", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1138[i].f0, "g_1138[i].f0", print_hash_value);
        transparent_crc(g_1138[i].f1, "g_1138[i].f1", print_hash_value);
        transparent_crc(g_1138[i].f2, "g_1138[i].f2", print_hash_value);
        transparent_crc(g_1138[i].f3, "g_1138[i].f3", print_hash_value);
        transparent_crc(g_1138[i].f4, "g_1138[i].f4", print_hash_value);
        transparent_crc(g_1138[i].f5, "g_1138[i].f5", print_hash_value);
        transparent_crc(g_1138[i].f6, "g_1138[i].f6", print_hash_value);
        transparent_crc(g_1138[i].f7, "g_1138[i].f7", print_hash_value);
        transparent_crc(g_1138[i].f8, "g_1138[i].f8", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1166, "g_1166", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
