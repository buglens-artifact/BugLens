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



static int g_2 = (-1L);
static unsigned char g_14 = 5UL;
static unsigned char g_47 = 253UL;
static int g_66[3][4][9] = {{{(-6L),1L,(-1L),(-6L),0xB12DB22CL,(-1L),(-1L),0xB12DB22CL,(-6L)},{0L,(-1L),0L,0x2C5ACC8EL,1L,0x2C5ACC8EL,0L,(-1L),0L},{(-6L),0xB12DB22CL,(-1L),(-1L),0xB12DB22CL,(-6L),(-1L),1L,(-6L)},{(-5L),(-1L),(-5L),0x2C5ACC8EL,3L,0x2C5ACC8EL,(-5L),(-1L),(-5L)}},{{(-6L),1L,(-1L),(-6L),0xB12DB22CL,(-1L),(-1L),0xB12DB22CL,(-6L)},{0L,0x2C5ACC8EL,0xA2C03FDDL,0x60C63704L,0L,0x60C63704L,0xA2C03FDDL,0x2C5ACC8EL,0xA2C03FDDL},{(-1L),(-6L),0x7647CF28L,0x7647CF28L,(-6L),(-1L),0x7647CF28L,(-1L),(-1L)},{0xF0599606L,0x2C5ACC8EL,0xF0599606L,0x60C63704L,(-5L),0x60C63704L,0xF0599606L,0x2C5ACC8EL,0xF0599606L}},{{(-1L),(-1L),0x7647CF28L,(-1L),(-6L),0x7647CF28L,0x7647CF28L,(-6L),(-1L)},{0xA2C03FDDL,0x2C5ACC8EL,0xA2C03FDDL,0x60C63704L,0L,0x60C63704L,0xA2C03FDDL,0x2C5ACC8EL,0xA2C03FDDL},{(-1L),(-6L),0x7647CF28L,0x7647CF28L,(-6L),(-1L),0x7647CF28L,(-1L),(-1L)},{0xF0599606L,0x2C5ACC8EL,0xF0599606L,0x60C63704L,(-5L),0x60C63704L,0xF0599606L,0x2C5ACC8EL,0xF0599606L}}};
static unsigned char *g_90 = (void*)0;
static unsigned char * const *g_89 = &g_90;
static unsigned g_92 = 0x3EB41E22L;
static int g_95 = 1L;
static int g_107 = 0x5D8D6691L;
static unsigned g_115[1][2] = {{0xC50AAA13L,0xC50AAA13L}};
static const int g_141 = (-1L);
static unsigned short g_147[6][10] = {{0x7AD6L,0x0EB6L,65535UL,65535UL,0x0EB6L,0x7AD6L,65535UL,0x7AD6L,0x0EB6L,65535UL},{0x0CBDL,0x83BEL,0x0CBDL,65535UL,65535UL,65535UL,65535UL,0x0CBDL,0x83BEL,0x0CBDL},{0x0CBDL,0x7AD6L,0x83BEL,0x0EB6L,0x83BEL,0x7AD6L,0x0CBDL,0x0CBDL,0x7AD6L,0x83BEL},{0x7AD6L,0x7AD6L,0x7AD6L,0xDB40L,65535UL,0x0CBDL,65535UL,0xDB40L,0x7AD6L,0x7AD6L},{65535UL,0x7AD6L,0x0EB6L,65535UL,65535UL,0x0EB6L,0x7AD6L,65535UL,0x7AD6L,0x0EB6L},{0x0CBDL,0xDB40L,65535UL,0xDB40L,0x0CBDL,0x0EB6L,0x0EB6L,0x0CBDL,0xDB40L,65535UL}};
static unsigned short g_149 = 0xE7A2L;
static int *g_173 = &g_107;
static short g_185 = 0x7918L;
static unsigned g_197 = 0UL;
static unsigned short g_226 = 0xCE5CL;
static char g_247 = 0xAAL;
static unsigned *g_296 = (void*)0;
static unsigned **g_295 = &g_296;
static char *g_302 = &g_247;
static char *g_304[1] = {&g_247};
static char *g_305 = (void*)0;
static unsigned g_377 = 0x72E995CAL;
static int **g_399 = &g_173;
static int ***g_398 = &g_399;
static short g_426 = 0x66F1L;
static unsigned char *g_507 = &g_47;
static char g_544[1][5][9] = {{{4L,0xB0L,4L,0xB0L,4L,0xB0L,4L,0xB0L,4L},{9L,(-1L),(-1L),9L,9L,(-1L),(-1L),9L,9L},{2L,0xB0L,2L,0xB0L,2L,0xB0L,2L,0xB0L,2L},{9L,9L,(-1L),(-1L),9L,9L,(-1L),(-1L),9L},{4L,0xB0L,4L,0xB0L,4L,0xB0L,4L,0xB0L,4L}}};
static int g_555 = 0xD4368599L;
static unsigned ****g_573 = (void*)0;
static unsigned g_595 = 4294967295UL;
static const unsigned *g_606 = &g_197;
static const unsigned **g_605 = &g_606;
static const unsigned ***g_604 = &g_605;
static const unsigned ****g_603 = &g_604;
static const unsigned *****g_602 = &g_603;
static const unsigned short g_646 = 0xBA35L;
static unsigned char *g_649 = &g_14;
static char g_668[5] = {5L,5L,5L,5L,5L};
static int *g_671 = (void*)0;
static unsigned g_688 = 0x9D11ACFEL;
static const short *g_712 = &g_185;
static const short **g_711 = &g_712;
static unsigned *g_735 = (void*)0;
static unsigned **g_734 = &g_735;
static short g_762 = 3L;
static unsigned g_829 = 0xCEB6250BL;
static char *g_842 = &g_668[0];
static int *g_847 = &g_107;
static unsigned char g_848 = 0x3AL;
static int g_875 = (-9L);
static const int g_876 = 0x780A7BEBL;
static unsigned **g_935[9][4][7] = {{{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735}},{{(void*)0,&g_735,(void*)0,(void*)0,&g_735,(void*)0,(void*)0},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,(void*)0,(void*)0,&g_735,(void*)0,(void*)0,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735}},{{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{(void*)0,&g_735,(void*)0,(void*)0,&g_735,(void*)0,(void*)0},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735}},{{&g_735,(void*)0,(void*)0,&g_735,(void*)0,(void*)0,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735}},{{(void*)0,&g_735,(void*)0,(void*)0,&g_735,(void*)0,(void*)0},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,(void*)0,(void*)0,&g_735,(void*)0,(void*)0,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735}},{{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{(void*)0,&g_735,(void*)0,(void*)0,&g_735,(void*)0,(void*)0},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735}},{{&g_735,(void*)0,(void*)0,&g_735,(void*)0,(void*)0,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735}},{{(void*)0,&g_735,(void*)0,(void*)0,&g_735,(void*)0,(void*)0},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{(void*)0,&g_735,&g_735,(void*)0,&g_735,&g_735,(void*)0},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735}},{{(void*)0,(void*)0,&g_735,(void*)0,(void*)0,&g_735,(void*)0},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,(void*)0,&g_735,&g_735,(void*)0,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735}}};
static unsigned short *g_953 = &g_149;
static unsigned short **g_952 = &g_953;
static unsigned g_1015[7][10][3] = {{{4294967291UL,1UL,0x11A02BE7L},{0xA9AD2AFBL,0x977669D0L,4294967295UL},{0xC15A9585L,0xF060182DL,4294967294UL},{7UL,0UL,0x977669D0L},{0UL,4294967288UL,4294967295UL},{0xC059B7C3L,0UL,0xC059B7C3L},{4294967295UL,0UL,0xAFDEFB0CL},{0UL,0x71B8FEBEL,0UL},{4UL,0UL,4294967295UL},{0x977669D0L,0xD40A416FL,0xC50E36A8L}},{{4UL,0x9FA19A46L,0x11A02BE7L},{0UL,4294967295UL,4294967291UL},{4294967295UL,0xF060182DL,0x5E2115D7L},{0xC059B7C3L,0x204AF780L,0x204AF780L},{0UL,0xC6A767AEL,4294967289UL},{7UL,0UL,0xC059B7C3L},{0xC15A9585L,4294967294UL,0xC15A9585L},{0xC059B7C3L,4294967295UL,0x2BF29165L},{1UL,7UL,0x82454B67L},{4294967294UL,0x977669D0L,0UL}},{{0UL,4294967295UL,0x9FA19A46L},{4294967295UL,4294967291UL,0UL},{0xD5E5F8E3L,0xD5E5F8E3L,0xAFDEFB0CL},{0UL,0x2BF29165L,0xC50E36A8L},{0xAFDEFB0CL,4294967294UL,0xF060182DL},{0xD40A416FL,0x204AF780L,0xCA390CBCL},{0x11A02BE7L,0xAFDEFB0CL,0xF060182DL},{0x705140E2L,4294967295UL,0xC50E36A8L},{4294967288UL,0x82454B67L,0xAFDEFB0CL},{4294967294UL,0UL,0UL}},{{0x9FA19A46L,0UL,0x9FA19A46L},{7UL,4294967295UL,0UL},{4294967291UL,0xD5E5F8E3L,0x82454B67L},{0x24DF3307L,4294967294UL,0x2BF29165L},{0xAFDEFB0CL,0x5E2115D7L,0xC15A9585L},{0x24DF3307L,0UL,0xCA390CBCL},{4294967291UL,4294967295UL,3UL},{7UL,4294967295UL,4294967291UL},{0x9FA19A46L,4294967289UL,4294967289UL},{4294967294UL,4294967295UL,0xA9AD2AFBL}},{{4294967288UL,0UL,0x9FA19A46L},{0x705140E2L,0xC50E36A8L,0UL},{0x11A02BE7L,0xD5E5F8E3L,4294967295UL},{0xD40A416FL,0xC50E36A8L,4294967295UL},{0xAFDEFB0CL,0UL,0x9942BB92L},{0UL,4294967295UL,0xCA390CBCL},{0xD5E5F8E3L,4294967289UL,4294967295UL},{4294967295UL,4294967295UL,4294967294UL},{0UL,0xA7577921L,4UL},{0xEBC489FCL,0UL,0UL}},{{4294967289UL,3UL,7UL},{0UL,0xEBC489FCL,0UL},{4294967295UL,0UL,4UL},{4294967295UL,4294967295UL,0xEBC489FCL},{4294967291UL,0xF060182DL,4294967288UL},{0xC50E36A8L,0x71B8FEBEL,0xC50E36A8L},{0UL,0xD5E5F8E3L,1UL},{0x204AF780L,0x977669D0L,4294967295UL},{4294967295UL,4294967291UL,0xA7577921L},{0xEBC489FCL,0xA9AD2AFBL,0x24DF3307L}},{{4294967295UL,0xC15A9585L,7UL},{0x204AF780L,7UL,0xCA390CBCL},{0UL,0UL,0x11A02BE7L},{0xC50E36A8L,0xC059B7C3L,0xC059B7C3L},{4294967291UL,4294967295UL,0x9FA19A46L},{4294967295UL,0UL,0xC50E36A8L},{4294967295UL,4UL,0xC6A767AEL},{0UL,0x977669D0L,7UL},{4294967289UL,4UL,0xD5E5F8E3L},{0xEBC489FCL,0UL,0xD40A416FL}}};
static unsigned char **g_1051 = &g_507;
static unsigned char ***g_1050 = &g_1051;
static char **g_1055 = &g_304[0];
static int g_1132[1][4][5] = {{{1L,0x4B27DF70L,0x77654B45L,0x152C99B8L,0x77654B45L},{0x77654B45L,0x77654B45L,0x8339FE00L,0x152C99B8L,(-1L)},{0x4B27DF70L,1L,1L,0x4B27DF70L,0x77654B45L},{0x4B27DF70L,0x152C99B8L,9L,9L,0x152C99B8L}}};



static int func_1(void);
static unsigned short func_20(unsigned p_21);
static unsigned char func_26(short p_27, unsigned short p_28, unsigned char * p_29);
static unsigned func_36(unsigned p_37, const char p_38, int p_39);
static unsigned char * func_43(char p_44, unsigned char * p_45);
static char func_55(int p_56, unsigned char * p_57, const unsigned p_58, int p_59);
static unsigned char * func_60(unsigned char * p_61, unsigned char * const p_62, unsigned char * p_63);
static unsigned char * func_77(unsigned char * p_78, unsigned char * const p_79, unsigned p_80, unsigned char * p_81);
static unsigned char * func_82(unsigned p_83, char p_84);
static int * func_96(unsigned p_97, int p_98, unsigned p_99, unsigned p_100);
static int func_1(void)
{
    unsigned l_7 = 0UL;
    int l_635 = (-6L);
    unsigned char *l_639 = &g_14;
    unsigned *l_640 = &g_377;
    unsigned short *l_643 = &g_147[0][9];
    const unsigned short *l_645 = &g_646;
    const unsigned short **l_644 = &l_645;
    unsigned *l_647 = &g_92;
    char *l_648 = &g_544[0][1][3];
    short l_650 = 0x23FCL;
    unsigned l_662 = 0xDF25C324L;
    unsigned l_664 = 1UL;
    const short l_703 = (-1L);
    const int ***l_825 = (void*)0;
    const int ****l_824 = &l_825;
    const unsigned l_830 = 0x5CB90718L;
    const unsigned l_981 = 0xF61D947CL;
    unsigned char l_1005[3][2][8] = {{{0x60L,4UL,7UL,0xE5L,253UL,253UL,0x8CL,0x87L},{0xA8L,0UL,0xD5L,246UL,246UL,253UL,0x18L,249UL}},{{0xD5L,249UL,0xE5L,253UL,0x87L,0x18L,0x60L,0x8CL},{4UL,0UL,7UL,0x18L,253UL,0x18L,7UL,0UL}},{{0x6CL,249UL,0x8CL,0xA8L,0xD5L,253UL,0x87L,7UL},{0UL,0x18L,246UL,0x87L,0x6CL,0x6CL,0x87L,246UL}}};
    const int l_1038 = 0x8617FA8FL;
    unsigned short l_1080[5] = {0xA7D3L,0xA7D3L,0xA7D3L,0xA7D3L,0xA7D3L};
    int l_1129 = 0xF8378D66L;
    short l_1136 = 0x447EL;
    unsigned short l_1139 = 5UL;
    int *l_1140 = &g_66[2][1][1];
    int i, j, k;
    for (g_2 = (-24); (g_2 >= (-19)); g_2 = safe_add_func_uint16_t_u_u(g_2, 2))
    {
        int l_12 = 0x4F934F54L;
        unsigned char *l_13 = &g_14;
        unsigned l_17[2];
        unsigned *l_632 = (void*)0;
        unsigned *l_633 = (void*)0;
        unsigned *l_634 = &g_92;
        int *l_636 = &g_107;
        int i;
        for (i = 0; i < 2; i++)
            l_17[i] = 0x6B6FEB9EL;
    }
    if (((safe_sub_func_int32_t_s_s((g_95 , l_650), l_635)) , 0x4D1698D6L))
    {
        unsigned short l_651 = 65528UL;
        int *l_663[8][5][4] = {{{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,(void*)0},{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,(void*)0,&g_555}},{{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,(void*)0,(void*)0},{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,(void*)0,&g_555},{&g_555,&g_555,&g_555,&g_555}},{{&g_555,&g_555,(void*)0,&g_555},{&g_555,(void*)0,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,(void*)0},{&g_555,&g_555,&g_555,&g_555}},{{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,(void*)0},{&g_555,&g_555,&g_555,&g_555},{&g_555,(void*)0,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555}},{{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555},{(void*)0,(void*)0,&g_555,&g_555},{&g_555,&g_555,&g_555,(void*)0},{(void*)0,&g_555,&g_555,&g_555}},{{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555}},{{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,(void*)0,&g_555},{&g_555,&g_555,&g_555,&g_555}},{{(void*)0,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555},{&g_555,&g_555,&g_555,&g_555}}};
        unsigned l_665[4][8][2] = {{{0xC7C4D8FCL,0xCCF1BFD4L},{0x7A224827L,1UL},{0xCCF1BFD4L,4294967295UL},{2UL,0x7157C142L},{0xCC881572L,4294967294UL},{4294967294UL,0x956B03BFL},{0UL,0xCC881572L},{0xBD7D351BL,4294967286UL}},{{0x7157C142L,4294967286UL},{0xBD7D351BL,0xCC881572L},{0UL,0x956B03BFL},{4294967294UL,4294967294UL},{0xCC881572L,0x7157C142L},{2UL,4294967295UL},{0xCCF1BFD4L,1UL},{0x7A224827L,0xCCF1BFD4L}},{{0xC7C4D8FCL,0xBD7D351BL},{0xC7C4D8FCL,0xCCF1BFD4L},{0x7A224827L,1UL},{0xCCF1BFD4L,4294967295UL},{2UL,0x7157C142L},{0xCC881572L,4294967294UL},{4294967294UL,0x956B03BFL},{0UL,0xCC881572L}},{{0xBD7D351BL,4294967286UL},{0x7157C142L,4294967286UL},{0xBD7D351BL,0xCC881572L},{0UL,0x956B03BFL},{4294967294UL,4294967294UL},{0xCC881572L,0x7157C142L},{2UL,4294967295UL},{0xCCF1BFD4L,1UL}}};
        int l_666 = (-6L);
        char *l_667 = &g_668[4];
        int *l_669 = &l_666;
        int *l_670 = &g_2;
        unsigned l_705 = 0UL;
        int l_733 = (-6L);
        unsigned l_738 = 4294967295UL;
        unsigned l_744[2][7] = {{0x40648736L,7UL,1UL,1UL,7UL,0x40648736L,7UL},{4294967295UL,0x40648736L,0x40648736L,4294967295UL,7UL,4294967295UL,0x40648736L}};
        char l_786 = (-7L);
        short *l_794 = (void*)0;
        unsigned ***l_795[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned ****l_796 = &l_795[6];
        unsigned ** const *l_797 = &g_295;
        int i, j, k;
        (*l_669) = ((***g_398) = (l_651 , (((*l_648) = (safe_mul_func_uint8_t_u_u(0x7FL, ((*g_302) = (g_115[0][0] > (-1L)))))) == (((*l_667) = (func_55((l_666 = (l_665[3][2][0] = (((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((((safe_sub_func_int16_t_s_s(func_55(l_650, ((((void*)0 != &g_92) , (g_555 = (((**g_399) = (safe_add_func_int8_t_s_s((l_635 && (l_662 , l_651)), l_662))) , l_635))) , (void*)0), l_651, l_664), g_92)) < (-1L)) <= l_664) , l_650) < l_650), 4)), l_651)) & 0L) & l_651))), l_639, l_651, g_141) && l_7)) , 0L))));
        if (((*l_669) = func_20(g_544[0][1][3])))
        {
            int **l_672 = &l_669;
            int l_680 = (-5L);
            unsigned char *l_700 = &g_47;
            unsigned l_745 = 0xE9B1B0B0L;
            int *l_748 = &g_107;
            int l_772[9][6] = {{0L,(-1L),0L,(-1L),0L,(-1L)},{0L,(-1L),0L,(-1L),0L,(-1L)},{0L,(-1L),0L,(-1L),0L,(-1L)},{0L,(-1L),0L,(-1L),0L,(-1L)},{0L,(-1L),0L,(-1L),0L,(-1L)},{0L,(-1L),0L,(-1L),0L,(-1L)},{0L,(-1L),0L,(-1L),0L,(-1L)},{0L,(-1L),0L,(-1L),0L,(-1L)},{0L,(-1L),0L,(-1L),0L,(-1L)}};
            unsigned char l_775[6][9][2] = {{{1UL,2UL},{0x50L,0xF1L},{0xF1L,0x86L},{0xB3L,0x63L},{0xD8L,0x9AL},{1UL,0x3EL},{0xD7L,0xF1L},{247UL,7UL},{0x27L,0x5DL}},{{0xD8L,0x5DL},{0x27L,7UL},{247UL,0xF1L},{0xD7L,0x3EL},{1UL,0x9AL},{0xD8L,0x63L},{0xB3L,0x86L},{0xF1L,0xF1L},{0x50L,2UL}},{{1UL,0x2EL},{0x4BL,7UL},{0x9AL,0x4BL},{0xB3L,1UL},{0xB3L,0x4BL},{0x9AL,7UL},{0x4BL,0xD8L},{0x63L,0x42L},{1UL,1UL}},{{1UL,0UL},{0x25L,2UL},{0x4BL,0x3EL},{0x2EL,0xB6L},{0x27L,1UL},{0x05L,4UL},{0x5DL,0x86L},{0x4BL,0x86L},{0x5DL,4UL}},{{0x05L,1UL},{0x27L,0xB6L},{0x2EL,0x3EL},{0x4BL,2UL},{0x25L,0UL},{1UL,1UL},{1UL,0x42L},{0x63L,0xD8L},{0x4BL,7UL}},{{0x9AL,0x4BL},{0xB3L,1UL},{0xB3L,0x4BL},{0x9AL,7UL},{0x4BL,0xD8L},{0x63L,0x42L},{1UL,1UL},{1UL,0UL},{0x25L,2UL}}};
            int i, j, k;
            (*l_672) = (g_671 = ((**g_398) = l_670));

            ;
            ;
            ;
            for (g_92 = (-20); (g_92 >= 24); g_92 = safe_add_func_uint16_t_u_u(g_92, 4))
            {
                int l_675 = 0x07AA4228L;
                int *l_683 = (void*)0;
                unsigned char * const l_718 = &g_14;
                unsigned char *l_742 = &g_47;
                char l_743 = (-4L);
            }
            l_635 = ((*g_671) = (((l_650 , l_650) || ((((***g_398) == ((*l_748) = ((l_667 != l_700) && (**l_672)))) , &g_399) == &g_399)) || (-9L)));
            for (l_733 = 0; (l_733 <= 18); l_733++)
            {
                unsigned ***l_755 = &g_295;
                int l_758 = 0x9704DB24L;
                unsigned *l_761[2];
                int l_763 = (-1L);
                char *l_776 = &g_544[0][4][8];
                int i;
                for (i = 0; i < 2; i++)
                    l_761[i] = &l_744[1][6];
            }
        }
        else
        {
            char l_777 = 4L;
            char *l_787 = (void*)0;
            char *l_788 = (void*)0;
            char *l_789[10] = {&g_544[0][1][3],&g_544[0][1][3],&g_544[0][1][3],&g_544[0][1][3],&g_544[0][1][3],&g_544[0][1][3],&g_544[0][1][3],&g_544[0][1][3],&g_544[0][1][3],&g_544[0][1][3]};
            char *l_790[2];
            char *l_791 = &g_668[4];
            int i;
            for (i = 0; i < 2; i++)
                l_790[i] = &l_786;
            l_635 = (-6L);
            (**g_398) = &l_635;

            ;
        }

        ;
        ;
        ;
        ;
        ;
        g_66[2][1][1] = (safe_mod_func_int32_t_s_s(((**g_399) = (*l_670)), l_650));
    }
    else
    {
        int * const l_806 = &g_66[0][2][5];
        int **l_807 = &g_671;
        unsigned ***l_816 = (void*)0;
        unsigned ***l_817 = &g_295;
        int l_826 = 0x1353ECBAL;
        short l_827 = 0x0B2BL;
        unsigned l_828 = 0xBA07DE3AL;
        unsigned l_859 = 0x3D3B70ADL;
        unsigned char *l_866 = &g_848;
        unsigned * const l_900[2][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        unsigned l_912[8] = {0xD55A0DDBL,0xD55A0DDBL,0xD55A0DDBL,0xD55A0DDBL,0xD55A0DDBL,0xD55A0DDBL,0xD55A0DDBL,0xD55A0DDBL};
        unsigned short **l_945 = &l_643;
        short *l_956 = (void*)0;
        short **l_955[10][4] = {{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956}};
        short ***l_954 = &l_955[9][1];
        unsigned char *l_978[5];
        unsigned short l_985 = 0x6B1AL;
        unsigned char l_1045 = 0x4DL;
        const unsigned l_1070 = 4294967295UL;
        unsigned short l_1071 = 0x0EB4L;
        unsigned short l_1079 = 0x3D89L;
        int l_1124 = 0x42CF3FCEL;
        int i, j;
        for (i = 0; i < 5; i++)
            l_978[i] = (void*)0;
        (*l_807) = l_806;

        ;
        (*g_671) = (safe_sub_func_int8_t_s_s(func_36((g_829 = ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((((((***g_602) != ((*l_817) = &l_640)) , (**l_807)) , ((l_650 <= (**l_807)) , 0xCBA044C7L)) , (-1L)), func_36((safe_mul_func_int8_t_s_s(((***g_398) == (safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_826 = (((void*)0 != l_824) , (**g_399))), l_827)), 6))), (**l_807))), (*g_302), (*l_806)))) , l_828), 0xC8D2L)) && (**l_807)), (*g_649))) , (*l_806))), (**l_807), (*l_806)), l_830));

        ;
        if ((safe_lshift_func_int8_t_s_s(l_650, 2)))
        {
            short l_835 = 0xA408L;
            int *l_836 = &g_107;
            unsigned l_849[8] = {0x1529B449L,0x1529B449L,0x1529B449L,0x1529B449L,0x1529B449L,0x1529B449L,0x1529B449L,0x1529B449L};
            short l_865 = 0L;
            short l_877 = 0xF38FL;
            unsigned *l_890[6] = {&g_829,&g_829,&g_829,&g_829,&g_829,&g_829};
            int i;
            (**g_398) = (void*)0;

            ;
            (*g_399) = (void*)0;
            if ((safe_lshift_func_uint16_t_u_u(l_835, 10)))
            {
                const char **l_839 = (void*)0;
                const char *l_841 = (void*)0;
                const char **l_840 = &l_841;
                int l_846 = 7L;
                unsigned char * const l_858 = (void*)0;
                short l_864 = 0L;
                l_836 = (**g_398);

                ;
                g_671 = ((**g_398) = (*g_399));

                ;
                for (g_185 = 0; (g_185 >= 0); g_185 -= 1)
                {
                    (**g_398) = (*g_399);
                }
                for (l_662 = (-5); (l_662 != 15); l_662++)
                {
                    char l_856[10][10][2] = {{{(-1L),(-1L)},{0x68L,(-2L)},{(-1L),0xCDL},{0x99L,0xDBL},{0xF2L,0x16L},{(-1L),0x99L},{0xB1L,0x46L},{(-4L),9L},{0x36L,0x6DL},{0L,0x6EL}},{{0xC9L,1L},{0xCCL,0xCEL},{(-1L),0x0EL},{0L,1L},{3L,1L},{0x6DL,(-1L)},{0x6DL,(-1L)},{1L,1L},{(-9L),1L},{0x00L,0xB1L}},{{0x00L,1L},{(-9L),1L},{1L,(-1L)},{0x6DL,(-1L)},{0x6DL,1L},{1L,0xAEL},{0L,8L},{0xD9L,0x83L},{1L,0x8EL},{0x0EL,0xCEL}},{{0xCBL,0xC9L},{(-1L),0L},{(-1L),0x7BL},{0xE0L,(-1L)},{0x46L,0L},{1L,0x5CL},{(-1L),(-2L)},{1L,1L},{(-1L),1L},{(-1L),(-4L)}},{{0L,0x6DL},{0x11L,0xF2L},{1L,0xCCL},{0xC9L,0xDBL},{0x7BL,9L},{1L,0L},{0xF2L,0x99L},{0xCDL,(-1L)},{(-1L),0L},{4L,0x16L}},{{0L,9L},{0x83L,0x87L},{9L,0x4EL},{0xB8L,(-1L)},{8L,0x68L},{0x16L,0x68L},{8L,(-1L)},{0xB8L,0x4EL},{9L,0x87L},{0x83L,9L}},{{0L,0x16L},{4L,0L},{(-1L),0x99L},{9L,0xE0L},{(-1L),(-1L)},{1L,0L},{0x5CL,0x4EL},{0x00L,0x16L},{(-1L),(-1L)},{0L,0x11L}},{{(-2L),3L},{0xAEL,1L},{0L,(-1L)},{0xF3L,0x36L},{0L,0xFAL},{9L,(-1L)},{0xDBL,0L},{0xD9L,0x5CL},{1L,0x68L},{1L,0x00L}},{{0xC9L,(-4L)},{0x87L,(-1L)},{0L,(-1L)},{1L,0x6EL},{(-1L),0xB8L},{0xCDL,0xCDL},{0x11L,0xCCL},{3L,1L},{1L,(-1L)},{4L,1L}},{{0L,(-1L)},{0L,1L},{4L,(-1L)},{1L,1L},{3L,0xCCL},{0x11L,0xCDL},{0xCDL,0xB8L},{(-1L),0x6EL},{1L,(-1L)},{0L,(-1L)}}};
                    unsigned char **l_857 = &g_90;
                    int i, j, k;
                    (*g_847) = (((*l_647) = l_846) == (((l_635 = ((*g_507) = (safe_rshift_func_int8_t_s_u(l_856[1][2][0], 7)))) , (*l_857)) == l_866));
                    for (g_426 = 0; (g_426 <= 0); g_426 += 1)
                    {
                        const unsigned l_869 = 0xE4CB567BL;
                        int i;
                        (*l_807) = (*g_399);
                        if (l_864)
                            continue;
                        (*g_847) = l_869;
                    }
                    for (g_92 = 0; (g_92 <= 4); g_92 += 1)
                    {
                        const int l_874 = 0x9994ABA7L;
                        int i;
                        (*l_807) = (*g_399);
                        (*l_807) = (*g_399);
                        l_635 = ((safe_add_func_int8_t_s_s(g_668[g_92], (*g_507))) , l_874);
                        (*g_847) = (g_875 >= ((l_877 & g_668[g_92]) == 0xC064L));
                    }
                }
            }
            else
            {
                unsigned l_882 = 1UL;
                int *l_888 = &g_555;
                unsigned l_889 = 0xB3AB8519L;
                short l_904[5];
                int l_906 = 0x38D7D380L;
                short l_932 = 0xA0C8L;
                int i;
                for (i = 0; i < 5; i++)
                    l_904[i] = (-1L);
                (*g_847) = ((**l_807) = (**l_807));
                (*l_806) = ((((**g_295) , (void*)0) != (l_890[4] = (*g_734))) && 6UL);


                for (g_47 = 6; (g_47 <= 23); g_47 = safe_add_func_int32_t_s_s(g_47, 3))
                {
                    unsigned char l_893[2][10][6] = {{{5UL,0xACL,0xB1L,0xB1L,0xACL,5UL},{0UL,0UL,1UL,0xB9L,5UL,9UL},{0xACL,0xE4L,0x60L,5UL,0x60L,0xE4L},{0xACL,3UL,0x60L,0UL,5UL,0xACL},{0xB1L,0x60L,9UL,0UL,0UL,9UL},{0x60L,0x60L,0x23L,0xB1L,5UL,0UL},{0xB9L,3UL,0UL,0x23L,1UL,0x23L},{0UL,0xB9L,0UL,0xACL,0x60L,0UL},{0xE4L,0xACL,0x23L,1UL,9UL,9UL},{1UL,9UL,9UL,1UL,0x23L,0xACL}},{{0xE4L,0UL,0x60L,0xACL,0UL,0xB9L},{0UL,0x23L,1UL,0x23L,0UL,3UL},{0xB9L,0UL,5UL,0xB1L,0x23L,0x60L},{0x60L,9UL,0UL,0UL,9UL,0x60L},{0xB1L,0xACL,5UL,0UL,0x60L,3UL},{9UL,0xB9L,1UL,0x60L,1UL,0xB9L},{9UL,3UL,0x60L,0UL,5UL,0xACL},{0xB1L,0x60L,9UL,0UL,0UL,9UL},{0x60L,0x60L,0x23L,0xB1L,5UL,0UL},{0xB9L,1UL,0xB1L,0xE4L,0x23L,0xE4L}}};
                    short *l_921 = &g_426;
                    unsigned *****l_925 = &g_573;
                    unsigned ******l_924 = &l_925;
                    unsigned *******l_926 = &l_924;
                    int *l_929 = (void*)0;
                    int i, j, k;
                    for (g_247 = 7; (g_247 >= 0); g_247 -= 1)
                    {
                        unsigned char **l_898 = (void*)0;
                        unsigned char **l_899 = &g_90;
                        const int l_905 = 0x45A0BC2DL;
                        short *l_907 = &l_835;
                        int i;
                    }
                    (**g_398) = l_929;
                    if ((*g_847))
                        break;
                    (*g_847) = (((safe_lshift_func_uint8_t_u_s((0L >= ((*l_921) = l_889)), 6)) <= l_932) , (safe_mul_func_uint16_t_u_u(((2L && ((*l_836) , (*l_836))) <= ((*l_647) = (((*l_648) = 0x28L) ^ ((*g_842) = (l_635 = ((void*)0 == g_935[8][3][5])))))), l_904[3])));
                }
                (*l_807) = (*l_807);
            }

            ;
            ;

            (*g_399) = ((((*l_806) = (*l_806)) < 0x9B320473L) , (*g_399));
        }
        else
        {
            short *l_936 = &l_650;
            int *l_938 = &g_555;
            int *l_939 = &g_875;
            int l_944 = 0L;
            unsigned short l_967 = 0x937EL;
            unsigned ***l_968 = &g_295;
            unsigned ****l_969 = &l_968;
            unsigned char **l_989 = &l_978[4];
            unsigned char *** const l_988 = &l_989;
            unsigned char l_1011 = 0x7AL;
            unsigned l_1014 = 0xDBCC5178L;
            unsigned char *l_1017 = &l_1011;
            const int l_1046 = 3L;
            unsigned char l_1072 = 0xE9L;
            (**g_399) = ((g_185 >= ((((*l_936) = (*g_712)) , (func_55(((safe_unary_minus_func_int16_t_s((*l_806))) , ((*l_939) = ((*l_938) = g_668[4]))), ((((((*l_936) = ((safe_mod_func_uint8_t_u_u((*g_649), ((-10L) && (((safe_sub_func_int16_t_s_s(((l_944 == ((void*)0 != l_945)) , l_944), (*g_712))) | 0xF1A2L) , (*g_173))))) > (*g_649))) == g_226) == (**g_399)) != (*g_649)) , (void*)0), (*l_806), l_944) ^ (**l_807))) , l_944)) > 0x15F4L);
            for (l_7 = 0; (l_7 > 36); l_7 = safe_add_func_int16_t_s_s(l_7, 5))
            {
                char l_957 = (-1L);
                int l_958 = 0L;
                for (g_377 = 0; (g_377 != 33); g_377++)
                {
                    unsigned short **l_950[2][1];
                    unsigned short ***l_951[7];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_950[i][j] = &l_643;
                    }
                    for (i = 0; i < 7; i++)
                        l_951[i] = &l_950[0][0];
                    g_952 = l_950[0][0];

                    ;
                    (*l_807) = ((*g_399) = (void*)0);

                    ;
                    ;
                }
                if (l_944)
                    break;
                (*g_399) = (void*)0;

                ;
                l_958 = (((void*)0 == l_954) & l_957);
            }

            ;
            ;
            ;
            if (((*l_806) , (*g_847)))
            {
                short l_959 = 0x4F2DL;
                (*l_807) = (*g_399);

                ;
            }
            else
            {
                short l_964 = 0x1518L;
                (*l_806) = ((*g_847) = (safe_rshift_func_int8_t_s_s(((*l_648) = 0xF3L), (l_964 != (((-7L) != (*g_712)) > 0xC387L)))));
            }

            ;
            if (((l_944 , (safe_add_func_uint32_t_u_u((((*l_807) = (*l_807)) != (l_967 , (void*)0)), ((*l_806) = (func_36(((((*l_969) = l_968) != ((safe_mul_func_uint16_t_u_u(l_944, (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((*g_302), l_944)), (*g_847))), 3)))) , l_816)) >= (*g_507)), l_981, (*g_847)) | (*g_649)))))) ^ 0x396FFC64L))
            {
                unsigned l_982 = 0x0ED594E8L;
                (*g_399) = (**g_398);
                l_944 = (*g_847);
            }
            else
            {
                const unsigned short l_998 = 1UL;
                short ***l_1001 = &l_955[9][1];
                short ****l_1002 = &l_1001;
                char *l_1039[4] = {&g_668[0],&g_668[0],&g_668[0],&g_668[0]};
                char **l_1054 = (void*)0;
                int l_1073 = 0x249EB6EDL;
                const unsigned short l_1097 = 0x027EL;
                int i;
                if (((((*g_953) = (*g_953)) , (safe_add_func_int32_t_s_s((((safe_add_func_int8_t_s_s(((*g_302) = 0L), (safe_sub_func_int32_t_s_s(((*l_806) = (*l_806)), 0x790C2D2DL)))) < (safe_mul_func_int8_t_s_s(((*g_842) ^ l_998), (*g_649)))) , ((((0x9EL | (safe_lshift_func_uint8_t_u_u((((*l_1002) = l_1001) == &g_711), (*g_507)))) | (*g_842)) <= (*g_712)) , 0x715FF2A8L)), l_944))) < 1L))
                {
                    int l_1006[1][5][9] = {{{0L,(-7L),0xA6708069L,(-7L),0L,0xFD79DE09L,1L,0L,0xB72D3FD6L},{(-9L),(-7L),0xFD79DE09L,0xB72D3FD6L,0x99C533EBL,0x7216D3EAL,0xD8E745C6L,0x7216D3EAL,0x99C533EBL},{1L,0x99C533EBL,0x99C533EBL,1L,(-1L),0xFD79DE09L,0xA6708069L,0xD8E745C6L,(-1L)},{1L,0x34D2AB6FL,0L,0xFD79DE09L,(-1L),(-1L),(-1L),(-1L),0xFD79DE09L},{(-9L),0x7216D3EAL,(-9L),0L,(-1L),0xD8E745C6L,0xB72D3FD6L,0L,0xFD79DE09L}}};
                    unsigned l_1020 = 4294967289UL;
                    int i, j, k;
                    for (g_14 = (-13); (g_14 >= 29); g_14 = safe_add_func_int8_t_s_s(g_14, 5))
                    {
                        unsigned l_1016 = 0x7CD469FEL;
                        l_1006[0][1][8] = (((*l_647) = ((l_1005[1][0][2] , (((**g_711) != l_1006[0][1][1]) ^ (**g_952))) >= (*l_806))) , 5L);
                    }
                    l_1020 = ((safe_lshift_func_int16_t_s_s((**g_711), (**g_711))) == l_1006[0][1][1]);
                    if ((*g_847))
                    {
                        (*l_806) = (*g_847);
                        return g_595;



                    }
                    else
                    {
                        (*l_806) = (safe_lshift_func_int8_t_s_u(l_998, l_1006[0][1][1]));
                        l_1006[0][1][1] = (safe_unary_minus_func_int32_t_s(l_998));
                        return g_107;



                    }
                }
                else
                {
                    unsigned l_1037 = 0x72F2DE42L;
                    int l_1040[10][1] = {{1L},{0L},{1L},{0L},{1L},{0L},{1L},{0L},{1L},{0L}};
                    int i, j;
                    l_1040[0][0] = ((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((((*g_606) , (void*)0) == l_1039[0]) , 0x4574L) & 0x9A8CL), (**g_952))), l_1037)) , 0xA6169342L);
                    for (l_1037 = 0; (l_1037 != 22); ++l_1037)
                    {
                        int l_1049 = 1L;
                        unsigned char ****l_1052[7] = {&g_1050,&g_1050,(void*)0,&g_1050,&g_1050,(void*)0,&g_1050};
                        char ***l_1053[2][2][1];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_1053[i][j][k] = (void*)0;
                            }
                        }
                        (*g_847) = ((safe_mul_func_uint8_t_u_u(((((l_1046 , (l_944 = ((0UL != (safe_mul_func_uint8_t_u_u((0x1E0CAA83L > 4294967295UL), func_26((l_1049 , ((g_1050 = (l_1049 , g_1050)) != &g_89)), (*g_953), (*g_1051))))) > l_998))) | 1L) && (*g_712)) ^ 0x81C0B9B4L), l_1040[0][0])) > 1UL);
                        (*g_399) = (*g_399);
                        g_1055 = (l_1054 = &g_305);

                        ;
                        ;
                    }

                    ;
                    ;
                    ;
                }

                ;
                ;
                ;
                for (l_1011 = 0; (l_1011 <= 3); l_1011 += 1)
                {
                    short l_1081 = 0L;
                    unsigned **l_1082 = &l_647;
                    if (l_998)
                        break;
                    for (g_377 = 0; (g_377 <= 3); g_377 += 1)
                    {
                        int l_1058 = 1L;
                        l_1073 = ((safe_rshift_func_uint8_t_u_s(((*g_302) | l_1058), (l_936 == (*g_711)))) , (safe_mul_func_uint8_t_u_u((***g_1050), ((safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((*g_712) != (*g_712)), 11)), (safe_sub_func_uint8_t_u_u((l_1072 = ((*g_842) >= (func_36(l_998, l_1070, l_1071) , (*l_806)))), (*l_806))))))) != (*l_806)), l_998)) > 0x1043D0A9L))));
                        (*l_806) = 0x00C75402L;
                        (*g_399) = (*g_399);
                        if (l_1046)
                            break;
                    }
                    for (g_829 = 0; (g_829 <= 3); g_829 += 1)
                    {
                        int l_1078[9][10][2] = {{{0L,1L},{0x7DEF6814L,0x4E88DC3DL},{(-1L),7L},{0L,0x56746F1FL},{7L,0x29193F56L},{(-8L),0x5E955156L},{0L,(-1L)},{0L,0x62C80447L},{(-1L),0L},{0x4E88DC3DL,(-1L)}},{{0x5E955156L,9L},{8L,0L},{0x5E955156L,(-8L)},{(-9L),(-9L)},{0xDE61691DL,0x7DEF6814L},{0x29BDAA03L,0x199026F0L},{0L,0x4E88DC3DL},{0x3F6C5B33L,0L},{0L,(-1L)},{0L,0L}},{{0x3F6C5B33L,0x4E88DC3DL},{0L,0x199026F0L},{0x29BDAA03L,0x7DEF6814L},{0xDE61691DL,(-9L)},{(-9L),(-8L)},{0x5E955156L,4L},{(-1L),0x29193F56L},{0x7DEF6814L,(-1L)},{9L,4L},{(-1L),0L}},{{(-9L),0x56746F1FL},{4L,0x7DEF6814L},{(-1L),0x8D790386L},{0L,8L},{0xCB0D5EFCL,0L},{(-1L),9L},{0L,0x3F4BAD66L},{0xCB0D5EFCL,0x4E88DC3DL},{0x3F4BAD66L,0x8D790386L},{0x29BDAA03L,(-1L)}},{{4L,(-9L)},{0x56746F1FL,0L},{0x5E955156L,0xDE61691DL},{9L,0x29193F56L},{(-1L),0x29193F56L},{9L,0xDE61691DL},{0x5E955156L,0L},{0x56746F1FL,(-9L)},{4L,(-1L)},{0x29BDAA03L,0x8D790386L}},{{0x3F4BAD66L,0x4E88DC3DL},{0xCB0D5EFCL,0x3F4BAD66L},{0L,9L},{(-1L),0L},{0xCB0D5EFCL,8L},{0L,0x8D790386L},{(-1L),0x7DEF6814L},{4L,0x56746F1FL},{(-9L),0L},{(-1L),(-1L)}},{{0x56746F1FL,0x919F0EE0L},{(-1L),8L},{0x7D9977B0L,(-1L)},{(-8L),0x9F078A91L},{(-1L),(-1L)},{0x83AF9612L,(-1L)},{0xDE61691DL,0x28E22ED5L},{0x199026F0L,(-1L)},{0xC4E02551L,0x199026F0L},{(-1L),0x7D9977B0L}},{{(-1L),0x199026F0L},{0xC4E02551L,(-1L)},{0x199026F0L,0x28E22ED5L},{0xDE61691DL,(-1L)},{0x83AF9612L,(-1L)},{(-1L),0x9F078A91L},{(-8L),(-1L)},{0x7D9977B0L,8L},{(-1L),0x919F0EE0L},{0x56746F1FL,(-1L)}},{{0xA74642EDL,0x90E7D315L},{(-1L),0L},{(-1L),(-1L)},{1L,(-1L)},{0x199026F0L,0x8C72C85BL},{1L,0x199026F0L},{(-1L),0x56746F1FL},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)}}};
                        int i, j, k;
                        (*g_847) = ((safe_rshift_func_uint8_t_u_u(((((*g_712) < func_36(l_944, ((safe_add_func_int32_t_s_s(((((*g_398) = l_807) == (void*)0) != ((func_36(l_1078[1][8][0], (*l_806), l_1079) , 6L) , l_1080[1])), l_1081)) <= (*g_302)), l_998)) , l_1082) != (void*)0), 4)) <= 0xCCL);

                        ;
                    }
                }

                ;
                ;
                for (l_828 = (-29); (l_828 < 26); l_828 = safe_add_func_uint32_t_u_u(l_828, 8))
                {
                    unsigned l_1087 = 0x494C6F85L;
                    unsigned l_1113[5] = {0UL,0UL,0UL,0UL,0UL};
                    int i;
                    if (((*g_847) = (!(safe_mul_func_uint16_t_u_u(((**g_952) = (l_1080[3] ^ (l_1087 != ((*l_806) = ((*g_712) ^ (((((safe_add_func_uint32_t_u_u(((*l_647) = l_1087), 0UL)) && l_1011) >= (**g_711)) ^ 0x7FF5L) > l_998)))))), g_197)))))
                    {
                        unsigned l_1110 = 4294967295UL;
                        (*g_847) = (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(l_1087)), (l_1073 = (*g_847))));
                        (*g_847) = (((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_1014 ^ (8L || ((void*)0 != &l_1014))), (safe_mul_func_int16_t_s_s((g_762 = (((((*g_953) | (*g_953)) == (safe_sub_func_int32_t_s_s(l_998, l_944))) || (safe_lshift_func_uint16_t_u_s(0x8225L, 14))) == l_1110)), 0x50D5L)))), l_1097)) , (*g_649)) & l_1046);
                    }
                    else
                    {
                        if (l_1097)
                            break;
                    }
                    for (l_985 = 0; (l_985 <= 59); l_985++)
                    {
                        unsigned short *l_1120 = (void*)0;
                        unsigned short *l_1121 = (void*)0;
                        unsigned short *l_1122[6][5][1] = {{{&l_1080[1]},{&l_1079},{&l_1080[1]},{&l_1079},{&l_1080[1]}},{{&g_147[2][2]},{&l_1080[1]},{&l_1079},{&l_1080[1]},{&l_1079}},{{&l_1080[1]},{&g_147[2][2]},{&l_1080[1]},{&l_1079},{&l_1080[1]}},{{&l_1079},{&l_1080[1]},{&g_147[2][2]},{&l_1080[1]},{&l_1079}},{{&l_1080[1]},{&l_1079},{&l_1080[1]},{&g_147[2][2]},{&l_1080[1]}},{{&l_1079},{&l_1080[1]},{&l_1079},{&l_1080[1]},{&g_147[2][2]}}};
                        int l_1123[4];
                        int l_1125[7][8] = {{0x2CCD542FL,0xDEA5F6A4L,0L,(-3L),(-3L),0L,0xDEA5F6A4L,0x2CCD542FL},{0x2CCD542FL,0xF4C9CB89L,(-1L),0xB1B3BFF6L,0xDEA5F6A4L,0x5173CDDDL,0L,0x5173CDDDL},{0xB1B3BFF6L,0L,0x777DB22BL,0L,0xB1B3BFF6L,0x5173CDDDL,0L,0xDEA5F6A4L},{0x17ACC1A3L,0xF4C9CB89L,0L,0L,0L,0L,0L,0L},{0xDEA5F6A4L,0xDEA5F6A4L,0L,0x2CCD542FL,(-1L),(-3L),0L,0x17ACC1A3L},{0L,0L,0x777DB22BL,0xDEA5F6A4L,0x777DB22BL,0L,0L,0x17ACC1A3L},{0L,(-3L),(-1L),0x2CCD542FL,0L,0xDEA5F6A4L,0xDEA5F6A4L,0L}};
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_1123[i] = 0L;
                        (**g_398) = (((*l_639) = l_1113[0]) , (((((safe_mul_func_int16_t_s_s((((~(**g_711)) & ((l_1113[1] != ((((((((safe_lshift_func_uint16_t_u_s((**g_952), func_26((*g_712), (l_1124 = ((l_1011 != (l_1123[0] = (safe_mul_func_int16_t_s_s(1L, (*g_953))))) != (&g_1050 == (void*)0))), (**g_1050)))) & l_1125[2][4]) , (*l_806)) , (**g_952)) <= 0x0AAEL) , 0UL) == l_1113[2]) || l_944)) | 0L)) != (*g_842)), (*g_712))) | 251UL) < 1UL) ^ 0UL) , (*l_807)));
                        return l_1097;



                    }
                    if (l_1073)
                        break;
                    for (g_2 = (-8); (g_2 == 24); g_2++)
                    {
                        char l_1128[6][4];
                        int i, j;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_1128[i][j] = 0xF7L;
                        }
                        (*g_399) = (l_998 , (void*)0);
                        if (l_1128[1][0])
                            break;
                    }
                }
            }

            ;
            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        if ((((l_1140 = &l_635) != (**g_398)) & l_664))
        {
            unsigned l_1147 = 1UL;
            short l_1148 = (-9L);
            int * const l_1149[8] = {&g_107,&l_826,&g_107,&g_107,&l_826,&g_107,&g_107,&l_826};
            int **l_1150 = &g_173;
            int i;
            (*l_1150) = l_1149[6];

            ;
        }
        else
        {
            return (*l_806);



        }

        ;
        ;
    }

    ;

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    return g_2;




}







static unsigned short func_20(unsigned p_21)
{
    short l_34 = 0x2B7BL;
    unsigned short l_35 = 65535UL;
    unsigned l_42 = 0x456B8642L;
    unsigned char *l_46 = &g_47;
    unsigned char **l_505[10][2][3] = {{{&g_90,&l_46,&g_90},{(void*)0,&g_90,&l_46}},{{(void*)0,&g_90,&l_46},{(void*)0,&l_46,&l_46}},{{&g_90,&l_46,&l_46},{(void*)0,(void*)0,&l_46}},{{(void*)0,&l_46,&g_90},{(void*)0,(void*)0,&g_90}},{{&g_90,&l_46,(void*)0},{&l_46,&l_46,(void*)0}},{{(void*)0,&l_46,(void*)0},{(void*)0,&l_46,&g_90}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_90,(void*)0}},{{&g_90,(void*)0,(void*)0},{&g_90,&l_46,&g_90}},{{&l_46,&l_46,(void*)0},{&l_46,&l_46,&l_46}},{{(void*)0,&l_46,(void*)0},{(void*)0,&l_46,&l_46}}};
    unsigned short *l_506 = &g_147[0][9];
    unsigned *l_522 = &g_92;
    unsigned l_624 = 1UL;
    int l_625[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
    const unsigned l_630 = 0UL;
    int *l_631 = &l_625[5];
    int i, j, k;
    if (((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(func_26((((*l_522) = (safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(l_34, l_35)) | (p_21 = func_36((0xB756L == l_34), ((g_507 = ((((*l_506) = (safe_add_func_uint8_t_u_u(g_2, (l_42 && ((g_90 = func_43(l_34, l_46)) != g_302))))) > l_42) , (void*)0)) == g_305), l_42))), 0xB0E8EDFFL))) | l_34), g_377, g_302), 5L)), 65531UL)) > l_42))
    {
        int **l_617 = (void*)0;
        int *l_619 = &g_95;
        int **l_618 = &l_619;
        (*l_618) = ((*g_399) = (void*)0);

        ;
        ;
    }
    else
    {
        const int l_622 = 0x9E63EE61L;
        int *l_623 = &g_107;
        (*l_623) = (safe_rshift_func_uint16_t_u_u(l_622, 9));
    }

    ;

    ;
    l_625[5] = l_624;
    (*l_631) = ((safe_lshift_func_int16_t_s_u(((((*g_302) != p_21) || g_115[0][1]) <= 0UL), 6)) >= l_625[5]);
    return g_247;
}







static unsigned char func_26(short p_27, unsigned short p_28, unsigned char * p_29)
{
    short l_525 = (-5L);
    int *l_528[10][4] = {{&g_95,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_95,(void*)0},{&g_66[2][0][5],(void*)0,&g_66[2][0][5],&g_95},{&g_66[2][0][5],&g_95,&g_95,&g_66[2][0][5]},{(void*)0,&g_95,(void*)0,&g_95},{&g_95,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_95,(void*)0},{&g_66[2][0][5],(void*)0,&g_66[2][0][5],&g_95},{&g_66[2][0][5],&g_95,&g_95,&g_66[2][0][5]},{(void*)0,&g_95,(void*)0,&g_95}};
    const unsigned **l_581[3];
    const unsigned ***l_580 = &l_581[0];
    const unsigned ****l_579 = &l_580;
    int i, j;
    for (i = 0; i < 3; i++)
        l_581[i] = (void*)0;
    for (p_27 = 0; (p_27 <= 5); p_27 += 1)
    {
        unsigned l_523 = 1UL;
        short *l_524 = &g_426;
        int *l_526[6][7] = {{&g_95,&g_95,&g_95,&g_66[2][1][1],&g_66[2][1][1],&g_66[2][1][1],&g_66[2][1][1]},{&g_66[1][3][8],&g_107,&g_66[1][3][8],&g_107,&g_66[1][3][8],&g_107,&g_66[1][3][8]},{&g_95,&g_66[2][1][1],&g_66[2][1][1],&g_95,&g_66[2][1][1],&g_95,&g_95},{&g_95,&g_107,&g_66[2][1][1],&g_107,&g_95,&g_107,&g_66[2][1][1]},{&g_66[2][1][1],&g_95,&g_66[2][1][1],&g_66[2][1][1],&g_95,&g_66[2][1][1],&g_95},{&g_66[1][3][8],&g_107,&g_66[1][3][8],&g_107,&g_66[1][3][8],&g_107,&g_66[1][3][8]}};
        int *l_552 = (void*)0;
        int *l_553 = (void*)0;
        int *l_554 = &g_555;
        unsigned l_562 = 0UL;
        unsigned *l_563 = &g_92;
        char *l_564 = &g_544[0][0][1];
        int i, j;
        if (((l_525 = ((*l_524) = l_523)) >= p_27))
        {
            int **l_527 = &l_526[2][5];
            (*l_527) = ((**g_398) = l_526[3][1]);

            ;
            (*g_399) = l_528[7][2];
        }
        else
        {
            int *l_529 = &g_66[2][1][1];
            for (g_426 = 0; (g_426 <= 0); g_426 += 1)
            {
                int * const l_535 = &g_2;
                int i, j;
                if (g_147[p_27][(g_426 + 7)])
                    break;
                for (g_197 = 1; (g_197 <= 5); g_197 += 1)
                {
                    unsigned l_530 = 0UL;
                    int l_534 = 0xE6CCFD93L;
                    unsigned **l_537 = &g_296;
                    for (g_95 = 1; (g_95 <= 5); g_95 += 1)
                    {
                        int i, j;
                        l_526[g_95][g_95] = l_529;
                    }
                    for (l_523 = 0; (l_523 <= 0); l_523 += 1)
                    {
                        unsigned *l_531 = &g_377;
                        int **l_536 = &l_528[8][3];
                        unsigned ***l_538 = &l_537;
                        int i;
                        (*l_536) = l_535;
                        (*l_529) = (&g_296 == ((*l_538) = l_537));
                        if (p_27)
                            continue;
                    }
                    for (g_247 = 0; (g_247 <= 5); g_247 += 1)
                    {
                        char *l_543 = &g_544[0][1][3];
                        int l_549 = 0L;
                        l_549 = (safe_mod_func_int32_t_s_s(((*l_529) = (safe_add_func_int8_t_s_s(((*l_543) = 0x67L), 246UL))), (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(l_534, 0)), 2))));
                        if (p_27)
                            break;
                        return g_544[0][1][3];
                    }
                }
            }
        }
        g_95 = func_36(p_28, ((*l_564) = (((((*l_554) = (safe_mul_func_uint16_t_u_u(65535UL, g_141))) , ((*l_554) = (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((g_66[0][1][7] = p_28), (((*l_563) = (((*p_29) | p_28) < (safe_mod_func_int16_t_s_s(g_185, l_562)))) <= (g_47 | g_544[0][3][7])))), (*p_29))))) , p_28) & p_28)), p_27);
        for (g_377 = 0; (g_377 <= 0); g_377 += 1)
        {
            int l_569[2][4];
            short l_594 = 0xBCECL;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_569[i][j] = 0x417CC15CL;
            }
            for (g_107 = 0; (g_107 >= 0); g_107 -= 1)
            {
                int l_570 = 0x387FF231L;
                const unsigned *l_578[7];
                const unsigned **l_577 = &l_578[4];
                const unsigned ***l_576 = &l_577;
                const unsigned ****l_575[10] = {&l_576,&l_576,&l_576,&l_576,&l_576,&l_576,&l_576,&l_576,&l_576,&l_576};
                const unsigned l_593 = 0x11A5F53BL;
                int i;
                for (i = 0; i < 7; i++)
                    l_578[i] = (void*)0;
                (**g_398) = l_528[4][1];

                ;
                for (l_523 = 0; (l_523 <= 0); l_523 += 1)
                {
                    int i, j;
                    if (((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u(((g_304[l_523] != p_29) , l_570), p_28)) & g_147[g_377][(l_523 + 3)]), 13)) , g_147[g_377][(l_523 + 3)]))
                    {
                        unsigned char **l_571 = (void*)0;
                        unsigned char **l_572 = &g_507;
                        unsigned *****l_574 = &g_573;
                        int l_584 = 0x96FC196AL;
                        int l_596 = 1L;
                        l_569[1][1] = (p_28 , (((*l_572) = func_60(&g_47, p_29, g_304[l_523])) != ((((*l_574) = (l_570 , g_573)) == (l_579 = l_575[9])) , (*g_89))));

                        ;
                        ;
                        l_584 = (safe_sub_func_int16_t_s_s(((*g_507) != l_584), (safe_sub_func_int8_t_s_s((l_570 == p_27), (safe_rshift_func_uint16_t_u_s((g_226 = ((l_584 ^ g_92) || (l_596 = (safe_lshift_func_uint16_t_u_u(l_570, (p_28 , g_595)))))), 14))))));
                        if (p_28)
                            continue;
                    }
                    else
                    {
                        char l_597 = 0x26L;
                        g_66[2][2][5] = l_597;
                        g_66[2][1][1] = ((*g_398) != (void*)0);
                        g_95 = p_27;
                    }
                }


                if (p_28)
                    continue;

            }
            if ((g_66[2][1][1] = (safe_mod_func_int32_t_s_s(p_28, (safe_add_func_uint16_t_u_u((g_602 == &g_603), 0xE476L))))))
            {
                unsigned char l_608 = 255UL;
                int l_612 = 0x8547802DL;
                for (g_247 = 0; (g_247 <= 5); g_247 += 1)
                {
                    int l_607 = 0x94DCF8D8L;
                    unsigned char **l_609 = &g_90;
                    unsigned *l_610[10][7][2] = {{{&g_115[0][1],(void*)0},{&g_197,&g_115[0][0]},{&g_197,(void*)0},{&g_115[0][1],&g_197},{(void*)0,&g_115[0][1]},{&g_115[0][0],&g_115[0][1]},{&g_595,&l_523}},{{&l_523,(void*)0},{&g_595,(void*)0},{&g_115[0][1],&l_523},{&g_115[0][1],(void*)0},{&g_595,&g_197},{&g_115[0][0],&g_115[0][1]},{&g_197,&g_197}},{{(void*)0,&l_523},{&g_595,&g_377},{&g_197,&g_595},{&l_523,(void*)0},{&g_197,&g_115[0][1]},{&g_377,&g_115[0][1]},{&g_197,(void*)0}},{{&l_523,&g_595},{&g_197,&g_377},{&g_595,&l_523},{(void*)0,&g_197},{&g_197,&g_115[0][1]},{&g_115[0][0],&g_197},{&g_595,(void*)0}},{{&g_115[0][1],&l_523},{&g_115[0][1],(void*)0},{&g_595,(void*)0},{&g_115[0][1],&g_115[0][1]},{&g_197,&g_115[0][0]},{&g_115[0][0],&g_197},{(void*)0,&g_377}},{{&g_115[0][1],(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_115[0][1],&g_377},{(void*)0,&g_197},{&g_115[0][0],&g_115[0][0]},{&g_197,&g_115[0][1]}},{{&g_115[0][1],(void*)0},{&g_377,&g_115[0][1]},{&g_115[0][0],(void*)0},{&g_115[0][1],&g_197},{&g_197,(void*)0},{(void*)0,&g_115[0][0]},{&g_377,&g_377}},{{&g_197,(void*)0},{&g_377,&l_523},{(void*)0,&g_197},{&g_115[0][1],&g_197},{&g_377,&g_197},{&l_523,&g_197},{&g_377,&g_197}},{{&g_115[0][1],&g_197},{(void*)0,&l_523},{&g_377,(void*)0},{&g_197,&g_377},{&g_377,&g_115[0][0]},{(void*)0,(void*)0},{&g_197,&g_197}},{{&g_115[0][1],(void*)0},{&g_115[0][0],&g_115[0][1]},{&g_377,(void*)0},{&g_115[0][1],&g_115[0][1]},{&g_197,&g_115[0][0]},{&g_115[0][0],&g_197},{(void*)0,&g_377}}};
                    int l_611 = 0x97156C97L;
                    int i, j, k;
                    for (g_226 = 1; (g_226 <= 5); g_226 += 1)
                    {
                        int i, j;
                        l_526[(g_377 + 4)][(p_27 + 1)] = (void*)0;
                        (*g_399) = l_526[g_247][(g_377 + 2)];

                        ;
                        return g_147[g_247][(g_226 + 3)];
                    }
                    l_607 = p_27;
                    l_569[1][3] = ((l_612 = (l_611 = (g_115[0][1] = (((l_608 == p_27) > g_115[0][1]) != func_36((l_608 || 0xDB909375L), l_594, g_377))))) , 0xFD9E1B41L);
                }
                return (*p_29);
            }
            else
            {
                int *l_615 = &g_95;
                for (g_197 = 0; (g_197 <= 11); g_197++)
                {
                    l_528[1][2] = ((**g_398) = l_615);

                    ;
                }
            }
        }
    }



    g_107 = (safe_unary_minus_func_uint32_t_u(((void*)0 != &l_528[7][2])));
    return (*p_29);
}







static unsigned func_36(unsigned p_37, const char p_38, int p_39)
{
    int l_508 = 0xCBF2378CL;
    unsigned char *l_509 = &g_47;
    int l_510[5] = {0xDD35B6E8L,0xDD35B6E8L,0xDD35B6E8L,0xDD35B6E8L,0xDD35B6E8L};
    short *l_511 = (void*)0;
    short *l_512 = &g_426;
    unsigned ***l_518 = (void*)0;
    unsigned ****l_517[8][3][2] = {{{&l_518,&l_518},{&l_518,&l_518},{&l_518,&l_518}},{{&l_518,&l_518},{(void*)0,&l_518},{&l_518,&l_518}},{{&l_518,(void*)0},{&l_518,&l_518},{&l_518,&l_518}},{{&l_518,&l_518},{&l_518,&l_518},{&l_518,(void*)0}},{{&l_518,&l_518},{&l_518,&l_518},{&l_518,&l_518}},{{&l_518,&l_518},{&l_518,(void*)0},{&l_518,&l_518}},{{&l_518,&l_518},{&l_518,&l_518},{&l_518,&l_518}},{{&l_518,(void*)0},{&l_518,&l_518},{&l_518,&l_518}}};
    int *l_521 = &g_107;
    int i, j, k;
    (*l_521) = p_38;
    return g_95;
}







static unsigned char * func_43(char p_44, unsigned char * p_45)
{
    unsigned l_52 = 0xCEC02DFCL;
    int l_482 = 2L;
    short *l_483 = &g_185;
    unsigned char * const l_487 = &g_47;
    unsigned char *l_504 = &g_47;
    if (((*g_173) = ((safe_mul_func_uint16_t_u_u(p_44, p_44)) , (l_52 >= ((*l_483) = ((safe_mod_func_int8_t_s_s((l_482 = func_55(p_44, func_60(p_45, p_45, p_45), l_52, l_52)), p_44)) >= 0x64143DBAL))))))
    {
        unsigned short l_484 = 65535UL;
        unsigned char * const l_485 = &g_47;
        unsigned char *l_486 = &g_47;
        (**g_398) = (void*)0;

        ;
        (**g_398) = &l_482;

        ;
        return &g_47;



    }
    else
    {
        int l_490 = 0x86474421L;
        unsigned char *l_503 = &g_47;
        for (l_52 = 0; (l_52 >= 58); ++l_52)
        {
            short l_502 = 0x859CL;
            if (l_490)
                break;
            (***g_398) = 0x2741C40EL;
            (**g_399) = func_55((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_52, (((*g_173) ^ ((func_55(l_490, p_45, ((safe_unary_minus_func_int16_t_s(((((safe_mod_func_int16_t_s_s((l_490 , 0L), (safe_add_func_int32_t_s_s((*g_173), l_502)))) && l_490) ^ 4294967290UL) , p_44))) | 65531UL), l_502) && 1UL) , g_226)) && (*p_45)))), l_502)) > 4L), 1UL)), l_503, p_44, l_52);
        }
    }
    return l_504;


}







static char func_55(int p_56, unsigned char * p_57, const unsigned p_58, int p_59)
{
    unsigned l_336 = 4294967295UL;
    unsigned char *l_337 = &g_47;
    unsigned *l_338 = (void*)0;
    int **l_373 = &g_173;
    unsigned char **l_382[5][6] = {{&l_337,(void*)0,&g_90,&g_90,&g_90,(void*)0},{&l_337,&g_90,&g_90,(void*)0,&g_90,&g_90},{&l_337,&g_90,&l_337,(void*)0,(void*)0,&l_337},{&g_90,&g_90,&g_90,&l_337,&g_90,(void*)0},{(void*)0,&g_90,(void*)0,&g_90,&g_90,&g_90}};
    unsigned short l_425 = 0x477DL;
    char ** const l_450 = &g_302;
    int l_451 = 0x2E1B5934L;
    int i, j;
    for (p_56 = (-15); (p_56 == (-10)); ++p_56)
    {
        unsigned short *l_329 = &g_226;
        int l_334 = 0L;
        char l_335[10] = {(-1L),1L,(-5L),(-5L),1L,(-1L),1L,(-5L),(-5L),1L};
        int l_361 = (-8L);
        unsigned *l_405 = &g_92;
        short l_410[7][2][2] = {{{0x9889L,0x4084L},{0L,0x4084L}},{{0x9889L,0x4084L},{0L,0x4084L}},{{0x9889L,0x4084L},{0L,0x4084L}},{{0x9889L,0x4084L},{0L,0x4084L}},{{0x9889L,0x4084L},{0L,0x4084L}},{{0x9889L,0x4084L},{0L,0x4084L}},{{0x9889L,0x4084L},{0L,0x4084L}}};
        int *l_427 = &l_361;
        char * const * const l_444 = (void*)0;
        unsigned ***l_475 = &g_295;
        int i, j, k;
    }
    return (**l_373);
}







static unsigned char * func_60(unsigned char * p_61, unsigned char * const p_62, unsigned char * p_63)
{
    unsigned short l_73[9] = {0xC3A8L,65526UL,0xC3A8L,65526UL,0xC3A8L,65526UL,0xC3A8L,65526UL,0xC3A8L};
    unsigned char *l_86[9][5] = {{(void*)0,&g_47,&g_47,(void*)0,&g_47},{(void*)0,&g_47,&g_47,(void*)0,&g_47},{(void*)0,&g_47,&g_47,(void*)0,&g_47},{(void*)0,&g_47,&g_47,(void*)0,&g_47},{(void*)0,&g_47,&g_47,(void*)0,&g_47},{(void*)0,&g_47,&g_47,(void*)0,&g_47},{(void*)0,&g_47,&g_47,(void*)0,&g_47},{(void*)0,&g_47,&g_47,(void*)0,&g_47},{(void*)0,&g_47,&g_47,(void*)0,&g_47}};
    unsigned l_272 = 1UL;
    int l_323[4][7][1] = {{{0x1E34F487L},{1L},{0x1E34F487L},{1L},{0x1E34F487L},{1L},{0x1E34F487L}},{{1L},{0x1E34F487L},{1L},{0x1E34F487L},{1L},{0x1E34F487L},{1L}},{{0x1E34F487L},{1L},{0x1E34F487L},{1L},{0x1E34F487L},{1L},{0x1E34F487L}},{{1L},{0x1E34F487L},{1L},{0x1E34F487L},{1L},{0x1E34F487L},{1L}}};
    int i, j, k;
    for (g_47 = 0; (g_47 <= 46); ++g_47)
    {
        unsigned short l_74[9] = {0x4358L,0x4358L,3UL,0x4358L,0x4358L,3UL,0x4358L,0x4358L,3UL};
        int i;
        for (g_66[2][1][1] = (-14); (g_66[2][1][1] < 19); ++g_66[2][1][1])
        {
            unsigned l_85 = 0x4C660729L;
            const unsigned char *l_87 = &g_47;
            const unsigned char **l_88 = &l_87;
            unsigned char **l_312 = &l_86[5][4];
            int *l_313 = &g_107;
            short *l_322 = &g_185;
            int **l_324 = &l_313;
        }
    }
    return p_61;


}







static unsigned char * func_77(unsigned char * p_78, unsigned char * const p_79, unsigned p_80, unsigned char * p_81)
{
    char *l_281[10] = {&g_247,&g_247,&g_247,&g_247,&g_247,&g_247,&g_247,&g_247,&g_247,&g_247};
    int l_282 = 2L;
    unsigned **l_292 = (void*)0;
    int l_297 = 1L;
    int i;
    for (g_95 = 0; (g_95 <= 5); g_95 += 1)
    {
        int *l_273 = &g_107;
        char *l_280 = &g_247;
        char **l_279[1];
        short l_283 = 0xA9D8L;
        int i;
        for (i = 0; i < 1; i++)
            l_279[i] = &l_280;
        for (g_226 = 0; (g_226 <= 0); g_226 += 1)
        {
            int **l_274 = &l_273;
            (*l_274) = l_273;
            return &g_47;


        }
        (*l_273) = (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((l_281[8] = p_78) == p_81), g_66[0][1][7])), l_282));
        if ((4294967286UL == l_283))
        {
            unsigned l_289 = 1UL;
            int l_290 = (-1L);
            char *l_298 = &g_247;
            for (g_149 = 0; (g_149 <= 0); g_149 += 1)
            {
                int *l_284 = &g_107;
                int i, j;
                l_284 = (g_115[g_149][g_149] , l_273);
                for (g_185 = 5; (g_185 >= 0); g_185 -= 1)
                {
                    int *l_285 = (void*)0;
                    for (g_107 = 0; (g_107 <= 0); g_107 += 1)
                    {
                        int **l_286 = &l_285;
                        unsigned char *l_291[9][1][4] = {{{&g_47,&g_47,&g_47,&g_47}},{{&g_47,(void*)0,&g_47,&g_47}},{{&g_47,&g_47,&g_47,&g_47}},{{&g_47,&g_47,(void*)0,&g_47}},{{&g_47,(void*)0,(void*)0,(void*)0}},{{&g_47,&g_47,&g_47,&g_47}},{{&g_47,&g_47,&g_47,&g_47}},{{&g_47,&g_47,&g_47,&g_47}},{{&g_47,&g_47,&g_47,&g_47}}};
                        int i, j, k;
                        (*l_286) = l_285;
                        l_290 = (safe_rshift_func_uint8_t_u_s((l_289 = 0UL), g_147[g_185][g_185]));
                        return l_291[3][0][0];


                    }
                    (*l_284) = l_289;
                    for (g_107 = 5; (g_107 >= 0); g_107 -= 1)
                    {
                        unsigned ***l_293 = &l_292;
                        int *l_294 = &l_282;
                        (*l_293) = l_292;
                        (*l_294) = (*l_284);
                        (*l_293) = g_295;

                        ;
                        (*l_294) = (g_95 <= (*l_294));
                    }

                    ;
                    return &g_47;


                }
            }
            if (g_197)
                break;
            (*l_273) = ((((l_282 = (*p_79)) == l_297) , (((*p_81) && 248UL) , &g_247)) != l_298);
        }
        else
        {
            return &g_47;


        }
        for (g_149 = 1; (g_149 <= 5); g_149 += 1)
        {
            unsigned *l_299 = &g_92;
            int l_300[7][1][2] = {{{(-8L),(-8L)}},{{0xFEDC4550L,1L}},{{0x9B9ACD65L,1L}},{{0xFEDC4550L,(-8L)}},{{(-8L),0xFEDC4550L}},{{1L,0x9B9ACD65L}},{{1L,0xFEDC4550L}}};
            char *l_303 = &g_247;
            int i, j, k;
        }
    }


    return &g_47;


}







static unsigned char * func_82(unsigned p_83, char p_84)
{
    int *l_91 = (void*)0;
    int *l_93 = (void*)0;
    int *l_94 = &g_95;
    int **l_269 = (void*)0;
    int **l_270 = &l_91;
    unsigned char *l_271 = &g_47;
    (*l_94) = (g_92 = (g_89 == (void*)0));
    (*l_270) = func_96((~(g_95 == (p_84 != (g_2 & (safe_rshift_func_int8_t_s_u(g_95, (safe_rshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_s((((g_107 = 0L) && p_84) == g_95), ((g_95 && (~((p_84 ^ p_83) , g_92))) >= g_2))) | 0xC9383A24L) , p_83), 7)))))))), g_66[2][1][1], p_84, g_66[2][1][1]);

    ;
    ;
    return l_271;


}







static int * func_96(unsigned p_97, int p_98, unsigned p_99, unsigned p_100)
{
    unsigned char l_108[2][6] = {{7UL,7UL,0xF0L,5UL,0xF0L,7UL},{0xF0L,0x34L,5UL,5UL,0x34L,0xF0L}};
    unsigned char **l_153[7] = {&g_90,&g_90,&g_90,&g_90,&g_90,&g_90,&g_90};
    int *l_156 = &g_2;
    int l_172[3];
    int *l_211 = &g_66[0][3][1];
    int **l_216[6] = {&g_173,&g_173,&g_173,&g_173,&g_173,&g_173};
    int i, j;
    for (i = 0; i < 3; i++)
        l_172[i] = (-1L);
    g_95 = ((l_108[1][0] && (safe_rshift_func_uint16_t_u_s(0xFCFBL, 4))) == l_108[1][3]);
    if (((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((0L < g_2), 1)), (g_115[0][1] = 0x5D29L))) , (l_108[1][0] & l_108[1][0])))
    {
        short l_124 = 0xCD94L;
        int l_150 = 1L;
        unsigned char **l_155 = (void*)0;
        int **l_174 = (void*)0;
        int **l_175 = &g_173;
        for (p_100 = 0; (p_100 > 41); ++p_100)
        {
            unsigned l_118 = 4294967295UL;
            p_98 = p_98;
            if (l_118)
            {
                int *l_127 = (void*)0;
                int *l_128 = (void*)0;
                int *l_129 = &g_107;
                for (l_118 = 20; (l_118 < 29); l_118++)
                {
                    int * const l_122 = (void*)0;
                    int * const *l_121[9] = {&l_122,&l_122,&l_122,&l_122,&l_122,&l_122,&l_122,(void*)0,(void*)0};
                    int * const **l_123 = &l_121[2];
                    int i;
                    (*l_123) = l_121[2];
                    for (g_95 = 3; (g_95 <= 8); g_95 += 1)
                    {
                        int i;
                        l_124 = g_115[0][1];
                    }
                }
                if (g_95)
                    continue;
                (*l_129) = ((safe_mod_func_int8_t_s_s(g_92, l_118)) >= ((g_90 = (void*)0) == &l_108[0][2]));

                ;
            }
            else
            {
                unsigned l_144[8][7][3] = {{{0xE7150262L,0x85036670L,0x9A124D13L},{4294967292UL,1UL,4294967290UL},{0x0A2812A6L,1UL,0x0A2812A6L},{4294967290UL,1UL,4294967292UL},{0x9A124D13L,0x85036670L,0xE7150262L},{0x7AD0ED66L,4294967289UL,0UL},{0UL,0UL,0x65848584L}},{{0x7AD0ED66L,4294967290UL,4294967289UL},{0x9A124D13L,0x65848584L,0xD34F8EFCL},{4294967290UL,0x6C05CDAFL,0x6C05CDAFL},{0x0A2812A6L,0x9A124D13L,0xD34F8EFCL},{4294967292UL,0x192873BCL,4294967289UL},{0xE7150262L,0xA5DA86A1L,0x65848584L},{0UL,0xD59534E3L,0UL}},{{0x65848584L,0xA5DA86A1L,0xE7150262L},{4294967289UL,0x192873BCL,4294967292UL},{0xD34F8EFCL,0x9A124D13L,0x0A2812A6L},{0x6C05CDAFL,0x6C05CDAFL,4294967290UL},{0xD34F8EFCL,0x65848584L,0x9A124D13L},{4294967289UL,4294967290UL,0x7AD0ED66L},{0x65848584L,0UL,0UL}},{{0UL,4294967289UL,0x7AD0ED66L},{0xE7150262L,0x85036670L,0x9A124D13L},{4294967292UL,1UL,4294967290UL},{0x0A2812A6L,1UL,0x0A2812A6L},{4294967290UL,1UL,4294967292UL},{0x9A124D13L,0x85036670L,0xE7150262L},{0x7AD0ED66L,4294967289UL,0UL}},{{0UL,0UL,0x65848584L},{0x7AD0ED66L,4294967290UL,4294967289UL},{0x9A124D13L,0x65848584L,0xD34F8EFCL},{4294967289UL,0xD59534E3L,0xD59534E3L},{0UL,0x85036670L,0xA5DA86A1L},{4294967290UL,0UL,0x192873BCL},{0x65848584L,0xA42CED75L,0x9A124D13L}},{{0x6C05CDAFL,0x7AD0ED66L,0x6C05CDAFL},{0x9A124D13L,0xA42CED75L,0x65848584L},{0x192873BCL,0UL,4294967290UL},{0xA5DA86A1L,0x85036670L,0UL},{0xD59534E3L,0xD59534E3L,4294967289UL},{0xA5DA86A1L,0x9A124D13L,0x85036670L},{0x192873BCL,4294967289UL,1UL}},{{0x9A124D13L,1UL,1UL},{0x6C05CDAFL,0x192873BCL,1UL},{0x65848584L,0x0A2812A6L,0x85036670L},{4294967290UL,0x0A815A6EL,4294967289UL},{0UL,0xD34F8EFCL,0UL},{4294967289UL,0x0A815A6EL,4294967290UL},{0x85036670L,0x0A2812A6L,0x65848584L}},{{1UL,0x192873BCL,0x6C05CDAFL},{1UL,1UL,0x9A124D13L},{1UL,4294967289UL,0x192873BCL},{0x85036670L,0x9A124D13L,0xA5DA86A1L},{4294967289UL,0xD59534E3L,0xD59534E3L},{0UL,0x85036670L,0xA5DA86A1L},{4294967290UL,0UL,0x192873BCL}}};
                int i, j, k;
                for (p_99 = 0; (p_99 <= 0); p_99 += 1)
                {
                    unsigned char *l_136 = &g_47;
                    const int *l_140 = &g_141;
                    const int **l_139 = &l_140;
                    unsigned short *l_145 = (void*)0;
                    unsigned short *l_146 = &g_147[0][9];
                    unsigned short *l_148[5][3][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int *l_151 = &g_107;
                    int i, j, k;
                    (*l_151) = (g_115[p_99][p_99] , (safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((void*)0 != l_136), (l_150 = (g_149 = (p_99 == (safe_sub_func_int32_t_s_s((((*l_139) = &p_98) == (void*)0), (safe_add_func_int16_t_s_s((((*l_146) = l_144[2][6][0]) , 0x01A8L), (l_108[0][1] && p_99)))))))))), p_99)), g_107)));

                    ;
                }
            }
            return &g_66[2][1][1];


        }
        for (g_149 = 0; (g_149 <= 1); g_149 += 1)
        {
            int *l_152[6][9] = {{&g_66[2][1][1],(void*)0,(void*)0,(void*)0,&g_66[2][1][1],&g_66[2][1][1],(void*)0,(void*)0,(void*)0},{(void*)0,&g_107,(void*)0,(void*)0,&g_107,(void*)0,&g_107,(void*)0,(void*)0},{&g_66[2][1][1],&g_66[2][1][1],(void*)0,(void*)0,(void*)0,&g_66[2][1][1],&g_66[2][1][1],(void*)0,(void*)0},{&l_150,&g_107,&l_150,(void*)0,(void*)0,&l_150,&g_107,&l_150,(void*)0},{&l_150,(void*)0,(void*)0,&l_150,&g_107,&l_150,(void*)0,(void*)0,&l_150},{&g_66[2][1][1],(void*)0,(void*)0,(void*)0,&g_66[2][1][1],&g_66[2][1][1],(void*)0,(void*)0,(void*)0}};
            unsigned char ***l_154[2][10][8] = {{{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0}},{{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0},{&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0,&l_153[6],(void*)0}}};
            int **l_157[4][9] = {{&l_152[4][7],&l_152[0][4],&l_152[4][7],&l_152[4][7],&l_152[0][4],&l_152[4][7],&l_152[4][7],&l_152[0][4],&l_152[4][7]},{&l_152[4][7],&l_152[0][4],&l_152[4][7],&l_152[4][7],&l_152[0][4],&l_152[4][7],&l_152[4][7],&l_152[0][4],&l_152[4][7]},{&l_152[4][7],&l_152[0][4],&l_152[4][7],&l_152[4][7],&l_152[0][4],&l_152[4][7],&l_152[4][7],&l_152[0][4],&l_152[4][7]},{&l_152[4][7],&l_152[0][4],&l_152[4][7],&l_152[4][7],&l_152[0][4],&l_152[4][7],&l_152[4][7],&l_152[0][4],&l_152[4][7]}};
            char l_171[3][10][8] = {{{0x04L,1L,0x04L,0xCFL,0x46L,0x46L,0xCFL,0x04L},{1L,1L,0x46L,(-1L),0L,(-1L),0x46L,1L},{(-3L),0xCFL,1L,0L,0L,1L,0xCFL,(-3L)},{0xCFL,(-1L),(-3L),0x46L,(-3L),(-1L),0xCFL,0xCFL},{(-1L),0x46L,1L,1L,0x46L,(-1L),0L,(-1L)},{0x46L,(-1L),0L,(-1L),0x46L,1L,1L,0x46L},{(-1L),0xCFL,0xCFL,(-1L),(-3L),0x46L,(-3L),(-1L)},{0xCFL,(-3L),0xCFL,1L,0L,0L,1L,0xCFL},{(-3L),(-3L),0L,0x46L,0x04L,0x46L,0L,(-3L)},{(-3L),0xCFL,1L,0L,0L,1L,0xCFL,(-3L)}},{{0xCFL,(-1L),(-3L),0x46L,(-3L),(-1L),0xCFL,0xCFL},{(-1L),0x46L,1L,1L,0x46L,(-1L),0L,(-1L)},{0x46L,(-1L),0L,(-1L),0x46L,1L,1L,0x46L},{(-1L),0xCFL,0xCFL,(-1L),(-3L),0x46L,(-3L),(-1L)},{(-1L),0L,(-1L),0x46L,1L,1L,0x46L,(-1L)},{0L,0L,1L,0xCFL,(-3L),0xCFL,1L,0L},{0L,(-1L),0x46L,1L,1L,0x46L,(-1L),0L},{(-1L),0x04L,0L,0xCFL,0L,0x04L,(-1L),(-1L)},{0x04L,0xCFL,0x46L,0x46L,0xCFL,0x04L,1L,0x04L},{0xCFL,0x04L,1L,0x04L,0xCFL,0x46L,0x46L,0xCFL}},{{0x04L,(-1L),(-1L),0x04L,0L,0xCFL,0L,0x04L},{(-1L),0L,(-1L),0x46L,1L,1L,0x46L,(-1L)},{0L,0L,1L,0xCFL,(-3L),0xCFL,1L,0L},{0L,(-1L),0x46L,1L,1L,0x46L,(-1L),0L},{(-1L),0x04L,0L,0xCFL,0L,0x04L,(-1L),(-1L)},{0x04L,0xCFL,0x46L,0x46L,0xCFL,0x04L,1L,0xCFL},{1L,0xCFL,(-3L),0xCFL,1L,0L,0L,1L},{0xCFL,0x46L,0x46L,0xCFL,0x04L,1L,0x04L,0xCFL},{0x46L,0x04L,0x46L,0L,(-3L),(-3L),0L,0x46L},{0x04L,0x04L,(-3L),1L,(-1L),1L,(-3L),0x04L}}};
            int i, j, k;
            g_107 = (-1L);
            l_155 = l_153[6];
            l_156 = l_156;
            for (g_92 = 0; (g_92 <= 1); g_92 += 1)
            {
                int l_162 = 0xD02808DCL;
                int i, j;
                l_172[1] = ((safe_rshift_func_uint8_t_u_s((l_162 = ((safe_mul_func_uint16_t_u_u(l_108[g_149][g_149], (*l_156))) || (*l_156))), (safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((l_124 , ((safe_sub_func_uint32_t_u_u(p_97, (*l_156))) > 0xB740F3B8L)), (-6L))), 4)))) > ((((safe_rshift_func_uint16_t_u_u(8UL, (*l_156))) , g_47) & l_171[0][3][1]) , p_98));
            }
        }

        ;
        g_173 = &l_172[1];

        ;
        (*l_175) = (void*)0;

        ;
    }
    else
    {
        int *l_176 = &l_172[1];
        int *l_192 = &g_95;
        int **l_215 = &l_211;
        short * const l_244 = &g_185;
        l_176 = &p_98;

        ;
        for (g_149 = 0; (g_149 < 58); g_149 = safe_add_func_int16_t_s_s(g_149, 4))
        {
            int *l_183 = &g_95;
            int **l_202 = &l_156;
            int ***l_201 = &l_202;
            for (p_97 = (-5); (p_97 == 7); p_97 = safe_add_func_int8_t_s_s(p_97, 4))
            {
                short *l_184 = &g_185;
                int **l_186 = &l_156;
                (*l_186) = ((g_66[2][1][1] <= ((*l_184) = ((l_183 == &p_98) < g_115[0][0]))) , &g_66[2][1][1]);

                ;
            }
        }

        ;
        for (g_185 = (-13); (g_185 == 23); g_185 = safe_add_func_int32_t_s_s(g_185, 5))
        {
            p_98 = (*g_173);
            g_173 = &g_2;

            ;
            for (p_97 = 0; (p_97 >= 24); ++p_97)
            {
                (*l_215) = &p_98;

                ;
            }
        }

        ;
        (*l_192) = (*g_173);
    }

    ;
    ;
    ;
    return &g_2;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_66[i][j][k], "g_66[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_115[i][j], "g_115[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_147[i][j], "g_147[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_544[i][j][k], "g_544[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_668[i], "g_668[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_688, "g_688", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    transparent_crc(g_829, "g_829", print_hash_value);
    transparent_crc(g_848, "g_848", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1015[i][j][k], "g_1015[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1132[i][j][k], "g_1132[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
