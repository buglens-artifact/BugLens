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



static int g_7 = (-1L);
static int g_57 = 0xF32215F8L;
static const int *g_75 = (void*)0;
static unsigned g_79 = 0x650F8394L;
static int g_80[4][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
static int *g_89[10][4][4] = {{{&g_57,&g_57,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7},{&g_57,&g_57,(void*)0,&g_7},{&g_7,&g_7,&g_7,&g_57}},{{&g_7,&g_57,&g_57,&g_57},{&g_7,&g_7,&g_57,&g_7},{&g_7,&g_57,&g_57,&g_7},{&g_57,&g_7,&g_7,&g_7}},{{&g_57,&g_57,&g_7,&g_7},{&g_7,&g_57,&g_57,&g_7},{&g_7,&g_7,&g_57,&g_57},{&g_57,&g_7,&g_57,&g_7}},{{&g_7,&g_57,&g_57,&g_7},{&g_7,&g_57,&g_7,&g_57},{(void*)0,&g_7,&g_7,(void*)0},{&g_7,&g_7,&g_57,&g_57}},{{&g_7,&g_7,&g_57,&g_7},{&g_57,&g_7,&g_57,&g_7},{&g_7,&g_7,&g_57,&g_57},{&g_7,&g_7,&g_7,(void*)0}},{{&g_57,&g_7,&g_57,&g_57},{&g_57,&g_57,&g_7,&g_7},{&g_7,&g_57,&g_57,&g_7},{&g_7,&g_7,&g_57,&g_57}},{{&g_57,&g_7,&g_57,&g_7},{&g_7,&g_57,&g_57,&g_7},{&g_7,&g_57,&g_7,&g_57},{(void*)0,&g_7,&g_7,(void*)0}},{{&g_7,&g_7,&g_57,&g_57},{&g_7,&g_7,&g_57,&g_7},{&g_57,&g_7,&g_57,&g_7},{&g_7,&g_7,&g_57,&g_57}},{{&g_7,&g_7,&g_7,&g_57},{&g_57,&g_7,&g_7,&g_7},{&g_57,&g_57,&g_7,&g_57},{&g_7,&g_7,&g_57,&g_7}},{{&g_7,&g_57,&g_7,&g_57},{&g_7,&g_57,&g_7,&g_7},{&g_57,&g_7,&g_57,&g_57},{&g_57,&g_57,&g_7,&g_7}}};
static int **g_88 = &g_89[8][2][3];
static int ***g_87 = &g_88;
static char g_92 = 0x00L;
static char g_102 = 0xAFL;
static unsigned char g_114[3] = {250UL,250UL,250UL};
static unsigned char *g_113 = &g_114[0];
static int g_168 = 0xE6F0F138L;
static unsigned g_182[1] = {1UL};
static unsigned short g_185 = 0x2F96L;
static unsigned char **g_187 = &g_113;
static unsigned char ***g_186[10] = {&g_187,&g_187,&g_187,&g_187,&g_187,&g_187,&g_187,&g_187,&g_187,&g_187};
static unsigned *g_194[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static unsigned **g_193 = &g_194[7];
static int *g_208 = &g_57;
static unsigned short g_238 = 0x0524L;
static short g_242 = 1L;
static unsigned ** const g_267 = &g_194[7];
static char **g_295 = (void*)0;
static unsigned g_320[5][4] = {{0xA1755247L,0xA1755247L,0x7FCCB76EL,0x7FCCB76EL},{0xA1755247L,0xA1755247L,0x7FCCB76EL,0x7FCCB76EL},{0xA1755247L,0xA1755247L,0x7FCCB76EL,0x7FCCB76EL},{0xA1755247L,0xA1755247L,0x7FCCB76EL,0x7FCCB76EL},{0xA1755247L,0xA1755247L,0x7FCCB76EL,0x7FCCB76EL}};
static unsigned char g_324 = 0xFDL;
static unsigned short g_449 = 7UL;
static int g_465 = (-7L);
static int * const g_493 = &g_7;
static unsigned g_497 = 4294967291UL;
static int g_521 = 0x0B406639L;
static int * const g_556[8][6][5] = {{{&g_521,(void*)0,&g_57,(void*)0,&g_521},{&g_7,&g_521,&g_57,&g_7,&g_521},{&g_521,&g_521,&g_521,&g_521,(void*)0},{&g_57,(void*)0,&g_7,&g_521,&g_521},{(void*)0,&g_521,(void*)0,(void*)0,(void*)0},{&g_57,&g_521,(void*)0,&g_57,(void*)0}},{{&g_521,&g_521,&g_521,(void*)0,(void*)0},{&g_7,&g_7,(void*)0,(void*)0,&g_7},{(void*)0,&g_521,&g_57,(void*)0,(void*)0},{&g_7,&g_7,(void*)0,&g_7,&g_7},{&g_57,&g_521,&g_521,(void*)0,&g_521},{&g_7,&g_521,&g_521,&g_7,(void*)0}},{{(void*)0,(void*)0,&g_521,&g_521,&g_521},{&g_7,&g_7,&g_7,(void*)0,&g_7},{&g_521,&g_521,(void*)0,&g_521,(void*)0},{&g_57,&g_57,(void*)0,&g_7,&g_7},{&g_57,(void*)0,(void*)0,(void*)0,(void*)0},{&g_7,&g_521,&g_7,&g_7,(void*)0}},{{(void*)0,(void*)0,&g_521,(void*)0,(void*)0},{&g_7,&g_57,&g_521,(void*)0,&g_57},{(void*)0,&g_521,&g_521,(void*)0,(void*)0},{&g_7,&g_7,(void*)0,&g_57,&g_57},{&g_57,(void*)0,&g_57,(void*)0,(void*)0},{&g_57,&g_521,(void*)0,&g_7,&g_521}},{{(void*)0,(void*)0,&g_7,&g_521,(void*)0},{(void*)0,&g_7,&g_521,&g_521,&g_7},{(void*)0,&g_57,(void*)0,(void*)0,&g_521},{&g_57,&g_7,&g_521,&g_7,&g_57},{(void*)0,(void*)0,&g_57,&g_521,(void*)0},{&g_57,&g_7,&g_7,&g_57,&g_521}},{{(void*)0,&g_521,&g_7,(void*)0,(void*)0},{(void*)0,&g_57,(void*)0,&g_521,&g_57},{(void*)0,&g_57,&g_521,(void*)0,&g_521},{&g_7,&g_7,&g_521,&g_57,&g_7},{(void*)0,(void*)0,&g_521,&g_521,(void*)0},{&g_7,&g_7,(void*)0,&g_7,&g_521}},{{&g_521,(void*)0,&g_7,(void*)0,&g_521},{(void*)0,&g_7,&g_7,&g_521,&g_7},{&g_521,&g_57,&g_57,&g_521,&g_521},{&g_7,&g_57,&g_521,&g_7,&g_7},{(void*)0,&g_521,(void*)0,&g_521,&g_521},{&g_7,&g_7,&g_521,&g_7,&g_521}},{{(void*)0,(void*)0,&g_7,&g_521,(void*)0},{&g_521,(void*)0,&g_57,&g_57,(void*)0},{(void*)0,&g_521,&g_7,(void*)0,(void*)0},{&g_521,(void*)0,&g_57,(void*)0,&g_521},{&g_7,&g_57,&g_521,(void*)0,&g_57},{&g_521,(void*)0,(void*)0,&g_521,&g_57}}};
static int * const g_572[3] = {&g_521,&g_521,&g_521};
static int g_597[4] = {0x878B2739L,0x878B2739L,0x878B2739L,0x878B2739L};
static const unsigned g_678 = 4UL;
static unsigned short *g_747 = &g_449;
static unsigned short **g_746 = &g_747;
static unsigned g_794 = 0xC2138557L;
static int g_948 = (-1L);
static char g_1114 = (-6L);
static int *g_1228 = &g_597[0];
static unsigned g_1287 = 0xD1131E5BL;
static unsigned **g_1291 = (void*)0;
static int *g_1328 = &g_597[0];
static unsigned g_1446 = 1UL;
static unsigned char * const *g_1532 = &g_113;
static unsigned char * const **g_1531 = &g_1532;
static unsigned char * const **g_1534[3] = {(void*)0,(void*)0,(void*)0};
static unsigned *g_1564[4] = {&g_182[0],&g_182[0],&g_182[0],&g_182[0]};
static unsigned * const *g_1563 = &g_1564[0];
static unsigned * const * const *g_1562 = &g_1563;
static const short g_1635[2] = {0x0288L,0x0288L};
static unsigned short g_1641 = 3UL;
static int *g_1716 = &g_521;
static unsigned short g_1751 = 1UL;
static char *g_1760[5][9] = {{(void*)0,(void*)0,&g_1114,&g_102,&g_102,&g_102,&g_102,&g_1114,(void*)0},{(void*)0,(void*)0,&g_92,(void*)0,(void*)0,(void*)0,&g_92,(void*)0,(void*)0},{&g_102,&g_102,&g_1114,(void*)0,(void*)0,&g_1114,&g_102,&g_102,&g_102},{(void*)0,(void*)0,(void*)0,&g_102,(void*)0,(void*)0,(void*)0,&g_102,(void*)0},{&g_102,(void*)0,&g_102,&g_102,(void*)0,&g_102,&g_1114,&g_1114,&g_102}};
static unsigned g_1813 = 5UL;
static unsigned * const g_1812 = &g_1813;
static unsigned * const *g_1811 = &g_1812;
static char g_1849 = 0x3AL;
static unsigned short ** const *g_1863[1][10] = {{&g_746,&g_746,&g_746,&g_746,&g_746,&g_746,&g_746,&g_746,&g_746,&g_746}};
static unsigned short ** const **g_1862[6] = {&g_1863[0][4],&g_1863[0][8],&g_1863[0][4],&g_1863[0][4],&g_1863[0][8],&g_1863[0][4]};
static unsigned short ***g_1892 = &g_746;
static unsigned short ****g_1891 = &g_1892;
static unsigned short *****g_1890 = &g_1891;
static int g_1916 = 0xBAEFEAE1L;
static unsigned g_1919 = 4294967290UL;



static short func_1(void);
static const unsigned char func_8(char p_9, unsigned p_10, int p_11, const int * p_12);
static unsigned func_13(const unsigned p_14, int * p_15, int * const p_16);
static int * func_17(int * p_18);
static int * func_19(const int * p_20, const unsigned p_21, int * p_22, int p_23);
static const int * func_24(unsigned char p_25, int * p_26, int * p_27);
static const short func_30(short p_31, const short p_32, short p_33);
static unsigned char func_39(int * const p_40);
static int * const func_41(short p_42);
static int func_45(unsigned p_46, int * const p_47, int * p_48, int * p_49);
static short func_1(void)
{
    char l_2 = 0x49L;
    unsigned l_976[10][3] = {{0x2542FF16L,4294967295UL,7UL},{0x2542FF16L,0x2542FF16L,4294967295UL},{0xEF69C8D6L,4294967295UL,4294967295UL},{4294967295UL,0x4AD2B0B1L,7UL},{0xEF69C8D6L,0x4AD2B0B1L,0xEF69C8D6L},{0x2542FF16L,4294967295UL,7UL},{0x2542FF16L,0x2542FF16L,4294967295UL},{0xEF69C8D6L,4294967295UL,4294967295UL},{4294967295UL,0x4AD2B0B1L,7UL},{0xEF69C8D6L,0x4AD2B0B1L,0xEF69C8D6L}};
    int *l_1412 = (void*)0;
    int l_1418 = 0x68B8AB63L;
    int **l_1448 = &g_1228;
    unsigned l_1476 = 0xA2D29D55L;
    char l_1505[1][1][3];
    char *l_1524 = &g_92;
    char **l_1523[4][1][2];
    int *l_1527 = &g_521;
    int l_1528 = 0x490F0E11L;
    unsigned l_1552 = 1UL;
    unsigned ** const *l_1560 = &g_1291;
    unsigned char l_1578[8][4] = {{0xD8L,0x06L,0xD8L,0x06L},{0xD8L,0x06L,0xD8L,0x06L},{0xD8L,0x06L,0xD8L,0x06L},{0xD8L,0x06L,0xD8L,0x06L},{0xD8L,0x06L,0xD8L,0x06L},{0xD8L,0x06L,0xD8L,0x06L},{0xD8L,0x06L,0xD8L,0x06L},{0xD8L,0x06L,0xD8L,0x06L}};
    short *l_1593 = &g_242;
    unsigned **l_1599 = &g_194[2];
    int *l_1612 = &g_57;
    unsigned short l_1623 = 0x4C03L;
    unsigned short ***l_1658 = &g_746;
    const unsigned char *l_1684 = &l_1578[2][3];
    const unsigned char **l_1683[10][2][4] = {{{&l_1684,&l_1684,&l_1684,(void*)0},{(void*)0,&l_1684,(void*)0,&l_1684}},{{&l_1684,(void*)0,(void*)0,&l_1684},{(void*)0,&l_1684,&l_1684,&l_1684}},{{&l_1684,(void*)0,&l_1684,(void*)0},{&l_1684,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_1684,(void*)0,(void*)0},{&l_1684,(void*)0,&l_1684,&l_1684}},{{(void*)0,(void*)0,&l_1684,&l_1684},{(void*)0,(void*)0,&l_1684,&l_1684}},{{&l_1684,&l_1684,(void*)0,(void*)0},{(void*)0,&l_1684,(void*)0,(void*)0}},{{(void*)0,&l_1684,(void*)0,(void*)0},{&l_1684,&l_1684,&l_1684,&l_1684}},{{&l_1684,(void*)0,(void*)0,&l_1684},{&l_1684,(void*)0,(void*)0,&l_1684}},{{&l_1684,(void*)0,&l_1684,(void*)0},{&l_1684,&l_1684,(void*)0,&l_1684}},{{(void*)0,&l_1684,(void*)0,&l_1684},{(void*)0,&l_1684,(void*)0,(void*)0}}};
    const unsigned char ***l_1682 = &l_1683[4][0][2];
    const unsigned char ****l_1681 = &l_1682;
    int *l_1688[7];
    unsigned char l_1690 = 0x67L;
    const char *l_1694[7];
    const char **l_1693 = &l_1694[3];
    unsigned l_1715 = 4294967295UL;
    unsigned l_1755 = 0x48000540L;
    int *l_1844 = &l_1418;
    unsigned l_1879 = 0x8ACBE653L;
    unsigned short ****l_1889 = (void*)0;
    unsigned short *****l_1888 = &l_1889;
    char l_1893 = 2L;
    int * const l_1915 = &g_1916;
    int * const *l_1914 = &l_1915;
    unsigned l_1917 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_1505[i][j][k] = (-1L);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_1523[i][j][k] = &l_1524;
        }
    }
    for (i = 0; i < 7; i++)
        l_1688[i] = (void*)0;
    for (i = 0; i < 7; i++)
        l_1694[i] = &g_1114;
    if (l_2)
    {
        char l_5 = 0xDBL;
        int *l_6 = &g_7;
        short l_1428 = 0xCFE2L;
        const int l_1444 = 9L;
        unsigned short l_1506 = 1UL;
        char l_1507[9];
        int *l_1536 = &g_57;
        unsigned *l_1539 = &g_497;
        short l_1555 = 0xEE3BL;
        int l_1583 = 7L;
        unsigned l_1650 = 9UL;
        const unsigned char ****l_1685 = &l_1682;
        char **l_1697 = (void*)0;
        int l_1730 = 0x62A47090L;
        const unsigned char *l_1753 = &g_114[0];
        const unsigned short *l_1790 = (void*)0;
        const unsigned short **l_1789[5][7] = {{&l_1790,&l_1790,&l_1790,(void*)0,&l_1790,&l_1790,&l_1790},{&l_1790,&l_1790,&l_1790,&l_1790,&l_1790,&l_1790,&l_1790},{(void*)0,&l_1790,(void*)0,&l_1790,(void*)0,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,&l_1790,&l_1790,&l_1790,&l_1790},{&l_1790,(void*)0,&l_1790,&l_1790,&l_1790,(void*)0,&l_1790}};
        unsigned short l_1798[6] = {0xBC4CL,0xBC4CL,0xBC4CL,0xBC4CL,0xBC4CL,0xBC4CL};
        const unsigned short * const *l_1801 = &l_1790;
        unsigned char *l_1802 = &g_114[0];
        int i, j;
        for (i = 0; i < 9; i++)
            l_1507[i] = 0x88L;
        (*l_6) = (safe_mod_func_int32_t_s_s(l_5, 1UL));
        (*g_1228) = ((((func_8((func_13(g_7, &g_7, func_17(func_19(func_24(((g_7 != 0x4EDFL) && g_7), l_6, &g_7), l_2, l_6, l_976[9][2]))) , l_2), (*l_6), g_7, l_6) , l_1412) == l_1412) != l_2) , 0xA80E63EEL);





        ;
        if (((*g_1328) = (*l_6)))
        {
            short l_1415 = (-1L);
            int *l_1425 = &l_1418;
            const int *l_1449 = &g_597[0];
            int *l_1469 = &g_521;
            const unsigned l_1510 = 0x63DEE91DL;
            int l_1516 = 0L;
            unsigned char *l_1542[9] = {&g_324,&g_324,&g_324,&g_324,&g_324,&g_324,&g_324,&g_324,&g_324};
            unsigned l_1556 = 0x2254693CL;
            int *l_1639 = &g_7;
            unsigned char l_1642 = 255UL;
            unsigned ***l_1656 = &l_1599;
            int l_1689 = 9L;
            unsigned l_1691 = 0x769DFAB8L;
            unsigned char l_1761 = 1UL;
            int l_1775 = 0x9CECD4CAL;
            int i;
            if ((*g_1328))
            {
                unsigned *l_1416 = (void*)0;
                unsigned *l_1417[6];
                char *l_1426 = &g_92;
                int l_1427[6][10][3] = {{{(-4L),2L,0xEDF07CDFL},{0x4BB76FD1L,1L,5L},{1L,0x9128B789L,0x34C04DE7L},{1L,0x7119DB02L,(-2L)},{1L,(-8L),0x7298301AL},{0x4BB76FD1L,0xABBCE7D1L,0x77CC0F2BL},{(-4L),0x5CDC6AB1L,0L},{1L,6L,4L},{0xD2EF779DL,0xACB7E6E3L,0L},{1L,0L,0xBF07F26BL}},{{1L,(-2L),6L},{0x567ACCD9L,0xEDF07CDFL,1L},{0L,9L,0xE32317D6L},{(-2L),1L,0xB6EA06FBL},{0xB19CEC8AL,0xAAAD7AFBL,3L},{6L,1L,0L},{6L,0xB6EA06FBL,0L},{1L,(-1L),3L},{0x79091A47L,2L,0xB6EA06FBL},{0x8DCFA98BL,5L,0xE32317D6L}},{{0xC9C87B3AL,1L,1L},{0x575A156DL,(-9L),6L},{0x49FE88D4L,0xD2EF779DL,0xBF07F26BL},{0x34C04DE7L,0x77CC0F2BL,0L},{1L,1L,4L},{0x4FAED1F7L,0L,0L},{(-7L),0x567ACCD9L,0x77CC0F2BL},{0xBF07F26BL,0L,0x7298301AL},{0xE32317D6L,(-10L),3L},{(-8L),0L,(-4L)}},{{0xACB7E6E3L,0L,0L},{0x2038A116L,0xEDF07CDFL,0x79091A47L},{(-7L),2L,0x7119DB02L},{0x2E25B0C9L,0x85D4536FL,(-3L)},{0x9753AA09L,0x34C04DE7L,6L},{1L,1L,1L},{0xB6EA06FBL,0x86A42137L,0x4FAED1F7L},{(-3L),0x1288E474L,0xC9C87B3AL},{0x1288E474L,(-5L),0x9753AA09L},{1L,1L,0xEDF07CDFL}},{{0x2CF021DAL,0xACB7E6E3L,2L},{0xE8F742CFL,0x49FE88D4L,0xCFE07838L},{4L,0x0D9895ECL,(-7L)},{4L,2L,0x2CF021DAL},{0xE8F742CFL,0xD36BD3DFL,0xCE8C7D2DL},{0x2CF021DAL,0xABBCE7D1L,6L},{1L,2L,1L},{0x1288E474L,0x79091A47L,0x86A42137L},{(-3L),0xD2EF779DL,1L},{0xB6EA06FBL,0x567ACCD9L,1L}},{{1L,0xE8F742CFL,0L},{0x9753AA09L,0L,0L},{0x2E25B0C9L,0x2E25B0C9L,4L},{(-7L),0xCFE07838L,(-8L)},{0x2038A116L,0xC9C87B3AL,0x49FE88D4L},{0xACB7E6E3L,4L,0x1288E474L},{(-8L),0x2038A116L,0x49FE88D4L},{5L,4L,(-8L)},{2L,0x5CDC6AB1L,4L},{0L,6L,0L}}};
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_1417[i] = &g_320[0][1];
                (**g_87) = (((((*l_6) , (safe_mul_func_uint8_t_u_u((l_1415 , 254UL), (((*l_6) = (l_1418 = (*l_6))) , l_1415)))) , (((safe_mul_func_int8_t_s_s((((*l_1426) = (((safe_add_func_int16_t_s_s(g_242, func_13(((safe_mod_func_uint32_t_u_u(((0x09L & func_39(&l_1418)) ^ (*l_6)), 0xE14C2D70L)) < 0x190FL), l_1425, l_1417[4]))) || g_521) > 0xD5L)) || (*l_1425)), l_1427[3][1][2])) | (*l_6)) , l_1427[0][3][0])) , l_1428) , &g_7);
                for (l_2 = 0; (l_2 > 16); ++l_2)
                {
                    for (g_1287 = 0; (g_1287 > 20); g_1287 = safe_add_func_uint16_t_u_u(g_1287, 7))
                    {
                        return g_238;
                    }
                }
                for (g_1287 = 0; (g_1287 <= 47); g_1287 = safe_add_func_uint32_t_u_u(g_1287, 3))
                {
                    (**g_87) = (void*)0;
                    (*g_88) = func_17(&l_1418);
                }



            }
            else
            {
                char l_1439 = 0x00L;
                int l_1445 = 0xF0F7B393L;
                int **l_1447 = (void*)0;
                l_1449 = (g_75 = ((((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_324, (*g_747))), (l_1439 = 0x27F36D85L))) != func_39(&g_7)) | (((func_13(((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(l_1418, func_13(l_1444, l_1425, (l_1445 , l_6)))), g_1446)) , (*l_6)), l_1425, &l_1445) , (-9L)) , l_1447) != l_1448)) , (*l_1448)));

                ;
                if ((**l_1448))
                {
                    (**g_87) = func_17(&g_597[0]);


                }
                else
                {
                    int l_1454[6][5];
                    unsigned ***l_1461 = &g_1291;
                    int l_1462 = 0xFDE72ECEL;
                    int l_1466 = 0x6D0CFD99L;
                    const int l_1484[4] = {0xA09239A7L,0xA09239A7L,0xA09239A7L,0xA09239A7L};
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_1454[i][j] = (-1L);
                    }
                    for (g_57 = 2; (g_57 <= 7); g_57 += 1)
                    {
                        short *l_1463[6][10][4] = {{{&g_242,&l_1415,&l_1428,&g_242},{&l_1415,&g_242,&l_1415,&l_1428},{&l_1415,&l_1428,&l_1428,(void*)0},{(void*)0,&l_1415,&l_1415,(void*)0},{&g_242,&l_1428,&g_242,&l_1415},{&l_1415,&g_242,&l_1415,&g_242},{(void*)0,&l_1415,&l_1415,&g_242},{&g_242,&l_1415,&l_1415,&g_242},{&g_242,&g_242,(void*)0,&l_1415},{&l_1428,&l_1415,&g_242,(void*)0}},{{(void*)0,&l_1428,&l_1415,(void*)0},{(void*)0,(void*)0,&l_1428,&l_1428},{&l_1428,&g_242,&l_1415,&l_1428},{&g_242,&g_242,&l_1415,&l_1415},{&l_1415,(void*)0,&g_242,&l_1428},{&l_1415,&l_1415,(void*)0,&l_1415},{&l_1415,&g_242,&l_1428,&l_1428},{&l_1415,&l_1415,&l_1415,&l_1428},{&g_242,&g_242,&l_1415,&l_1415},{(void*)0,&g_242,(void*)0,&l_1415}},{{(void*)0,&g_242,(void*)0,&l_1415},{&g_242,&g_242,&l_1428,&l_1428},{&g_242,&l_1415,&g_242,&l_1428},{(void*)0,&l_1428,&l_1415,&l_1415},{&g_242,&g_242,&g_242,(void*)0},{&g_242,&g_242,(void*)0,&g_242},{(void*)0,&l_1415,&g_242,&l_1415},{(void*)0,&l_1415,(void*)0,&l_1428},{&g_242,&l_1428,&g_242,&l_1415},{&l_1428,(void*)0,&l_1428,(void*)0}},{{&g_242,&g_242,&l_1415,&g_242},{&l_1415,(void*)0,&l_1428,&l_1428},{(void*)0,&l_1415,&g_242,&g_242},{&l_1415,(void*)0,(void*)0,&l_1428},{&l_1428,&l_1428,&l_1428,(void*)0},{&l_1415,&l_1415,&l_1415,&l_1428},{(void*)0,&g_242,&l_1428,&l_1428},{&l_1415,&g_242,&l_1415,&g_242},{(void*)0,&g_242,&g_242,&l_1428},{(void*)0,&l_1415,&l_1415,&g_242}},{{&l_1415,&l_1415,(void*)0,&l_1415},{&l_1415,&l_1415,&l_1415,(void*)0},{(void*)0,&l_1415,&g_242,&l_1415},{(void*)0,&g_242,&l_1415,&g_242},{&l_1415,&l_1428,&l_1428,&g_242},{(void*)0,&l_1415,&l_1415,&l_1428},{&l_1415,&l_1415,&l_1428,&l_1415},{(void*)0,(void*)0,&g_242,(void*)0},{&l_1415,(void*)0,&l_1415,&l_1415},{&g_242,(void*)0,(void*)0,&g_242}},{{&l_1415,&l_1428,&g_242,&l_1415},{(void*)0,&l_1428,(void*)0,&g_242},{&l_1428,&l_1415,&g_242,&l_1415},{&g_242,&l_1415,(void*)0,&g_242},{&l_1415,&l_1415,&l_1415,&g_242},{&l_1428,&g_242,&g_242,&l_1415},{&l_1415,&g_242,&l_1415,&g_242},{&l_1415,&g_242,(void*)0,&g_242},{(void*)0,&l_1415,&l_1415,(void*)0},{&g_242,&g_242,&g_242,&g_242}}};
                        int l_1464 = 0xE3380893L;
                        int l_1465[4][2][5] = {{{(-4L),(-4L),0x101F7123L,(-4L),(-4L)},{0x56EE3FC1L,(-4L),0x56EE3FC1L,0x56EE3FC1L,(-4L)}},{{(-4L),0x56EE3FC1L,0x56EE3FC1L,(-4L),0x56EE3FC1L},{(-4L),(-4L),0x101F7123L,(-4L),(-4L)}},{{0x56EE3FC1L,(-4L),0x56EE3FC1L,0x56EE3FC1L,(-4L)},{(-4L),0x56EE3FC1L,0x56EE3FC1L,(-4L),0x56EE3FC1L}},{{(-4L),(-4L),0x101F7123L,(-4L),(-4L)},{0x56EE3FC1L,(-4L),0x56EE3FC1L,0x56EE3FC1L,(-4L)}}};
                        int i, j, k;
                        l_1466 = (((safe_mul_func_int8_t_s_s((((*g_493) = (safe_add_func_uint32_t_u_u(((*l_6) , l_1454[5][2]), (safe_mod_func_int16_t_s_s((l_1464 = ((l_1462 = (safe_rshift_func_uint8_t_u_s(0x46L, ((*g_1328) , (safe_lshift_func_uint8_t_u_u(0x58L, func_13(((*l_6) & ((l_1461 = &g_1291) != &g_1291)), g_194[g_57], (*l_1448)))))))) , (-6L))), l_1465[0][0][4]))))) , g_597[0]), l_1465[1][0][4])) != 1UL) > l_1454[5][2]);
                    }
                    for (l_1462 = 0; (l_1462 <= 23); l_1462++)
                    {
                        (*g_88) = l_1469;
                        (*g_1228) = (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((*g_747), 8)), 1));
                        (**l_1448) = (safe_lshift_func_int16_t_s_u(0xC786L, 8));
                        (**g_87) = ((*l_1448) = (*l_1448));
                    }
                    (*g_1228) = (*g_1228);
                    if (l_1476)
                    {
                        unsigned l_1479 = 0x280AFBC2L;
                        int *l_1485 = &g_521;
                        unsigned char *l_1486 = &g_324;
                        l_1462 = (((*l_6) <= ((*l_1486) = ((((*l_6) , (((**l_1448) = l_1479) != (g_80[2][2] > ((func_13((safe_lshift_func_int8_t_s_s((-7L), (((safe_rshift_func_int8_t_s_u(g_79, (0x1AA683ABL >= (func_13(l_1484[2], &l_1462, l_1469) > l_1454[0][1])))) , l_1445) > (*l_6)))), l_1485, &g_7) , 0x38644E02L) ^ (*l_1485))))) , &g_194[7]) != (void*)0))) , (*g_1328));
                    }
                    else
                    {
                        return (*l_1469);
                    }
                }


            }



            for (g_1114 = 0; (g_1114 >= (-30)); g_1114 = safe_sub_func_uint32_t_u_u(g_1114, 1))
            {
                int *l_1493 = &l_1418;
                int l_1511 = 9L;
                for (l_1415 = (-25); (l_1415 >= (-19)); ++l_1415)
                {
                    int *l_1494 = (void*)0;
                    for (g_948 = (-25); (g_948 > 5); ++g_948)
                    {
                        unsigned *l_1495 = &g_794;
                        const int l_1498 = (-1L);
                        short *l_1508 = &l_1428;
                        short l_1509 = 0xD2CFL;
                        (**g_87) = l_1493;
                        (*g_88) = l_1494;
                        l_1425 = func_19(l_1493, (((*l_1495) = 4294967293UL) , ((safe_lshift_func_uint8_t_u_s(func_39(func_19(l_6, l_1498, (*l_1448), (((safe_rshift_func_int16_t_s_u(((*l_1508) = ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((l_1505[0][0][2] = 0x2EEC704EL), ((l_1506 , g_1291) == (((((l_1498 || 0xD37653C7L) >= (*l_1493)) == (*l_1425)) & l_1507[0]) , (void*)0)))), 10)) < (*l_1493))), 13)) <= l_1509) , g_57))), l_1510)) < (*l_6))), l_1495, l_1511);

                        ;
                        if ((*g_1228))
                            continue;
                    }
                    (*g_1228) = (((*l_6) , g_79) < (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((*l_1493), 0xA6L)) != ((((*l_1493) < (*l_6)) || (((*l_6) >= l_1516) , (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((*g_747), g_597[0])), g_80[1][0])))) , (*g_747))), 0xA38AL)));
                    l_1527 = (*l_1448);

                    ;
                    if ((l_1528 >= (*l_1493)))
                    {
                        unsigned char * const ***l_1533[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1533[i] = (void*)0;
                        (*l_1527) = ((**l_1448) < ((g_1531 = (g_1534[0] = g_1531)) == &g_187));
                    }
                    else
                    {
                        int *l_1535 = &l_1516;
                        (*g_1228) = (*g_1228);
                        (*g_88) = func_19(&l_1516, (*l_6), l_1535, g_449);
                        l_1536 = l_6;

                        ;
                        (*g_1328) = (*l_1493);
                    }
                }
            }


            ;
            ;

            ;
            if (((*l_1449) <= ((safe_lshift_func_int8_t_s_s((*l_1469), 0)) > (((*g_747) == (((l_1539 = &g_182[0]) != l_1536) > (*l_1469))) != (safe_add_func_int32_t_s_s((((*l_1527) & ((*l_1425) = 0x09L)) || (((*l_1536) = (+(-3L))) == (*l_1449))), (*g_1228)))))))
            {
                (*g_1228) = (*l_1469);
            }
            else
            {
                const unsigned short l_1545 = 0x81BFL;
                short l_1551 = 1L;
                unsigned char l_1561[7][2][5] = {{{0x13L,0UL,0UL,0UL,246UL},{0xA2L,0x9EL,0x9EL,0xA2L,255UL}},{{0UL,9UL,9UL,0UL,246UL},{0xA2L,0x9EL,0x9EL,0xA2L,255UL}},{{0UL,9UL,9UL,0UL,246UL},{0xA2L,0x9EL,0x9EL,0xA2L,255UL}},{{0UL,9UL,9UL,0UL,246UL},{0xA2L,0x9EL,0x9EL,0xA2L,255UL}},{{0UL,9UL,9UL,0UL,246UL},{0xA2L,0x9EL,0x9EL,0xA2L,255UL}},{{0UL,9UL,9UL,0UL,246UL},{0xA2L,0x9EL,0x9EL,0xA2L,255UL}},{{0UL,9UL,9UL,0UL,246UL},{0xA2L,0x9EL,0x9EL,0xA2L,255UL}}};
                unsigned * const * const **l_1565 = &g_1562;
                char l_1592 = 6L;
                int l_1595 = 0x34398792L;
                unsigned l_1607 = 0x0D96FFB5L;
                const unsigned l_1619[6] = {0x866B4B34L,0x866B4B34L,0x866B4B34L,0x866B4B34L,0x866B4B34L,0x866B4B34L};
                int l_1621 = 1L;
                char ***l_1636 = &l_1523[2][0][1];
                const int *l_1640 = (void*)0;
                int i, j, k;
                for (g_79 = 0; (g_79 <= 50); g_79++)
                {
                    unsigned l_1548 = 0UL;
                    int *l_1557[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    (*g_88) = ((*l_1448) = &g_7);

                    ;
                    (*g_1328) = (+l_1545);
                    (*l_1469) = (safe_add_func_int32_t_s_s(l_1548, ((((*l_1536) && (safe_mod_func_uint16_t_u_u((0x0BC92B17L && ((*l_1536) = l_1551)), (l_1552 , func_13(((&g_597[0] != (void*)0) | (safe_mul_func_int8_t_s_s((((l_1556 = l_1555) && 0xB8EC3D1CL) , (*l_1425)), g_102))), l_1557[2], (*l_1448)))))) == l_1545) , 0xC9F516E9L)));
                }

                ;
                if ((safe_add_func_uint8_t_u_u(((*l_1449) , (((*l_1524) = ((l_1560 == &g_1291) ^ l_1561[5][0][4])) <= (((*l_1565) = g_1562) == &g_1291))), (*l_1536))))
                {
                    unsigned short l_1570[5] = {0x069FL,0x069FL,0x069FL,0x069FL,0x069FL};
                    const unsigned short ** const *l_1571 = (void*)0;
                    int l_1573 = 0L;
                    unsigned l_1577 = 0xD7BC0181L;
                    int l_1594 = 0xDF49B0B9L;
                    int i;
                    if (((l_1573 = (((((((safe_sub_func_uint16_t_u_u((&g_747 == (void*)0), ((safe_lshift_func_int8_t_s_s(l_1570[2], 6)) , (((*l_6) , (*l_6)) >= g_449)))) >= (((l_1545 , l_1571) == ((safe_unary_minus_func_uint16_t_u((247UL && (**l_1448)))) , (void*)0)) , g_114[0])) || (*l_6)) < 0x80DCL) , (-1L)) == (-1L)) ^ l_1551)) < (*l_1469)))
                    {
                        unsigned l_1576[6] = {0x6F1E4565L,0UL,0UL,0x6F1E4565L,0UL,0UL};
                        int i;
                        (*g_1228) = (l_1577 = (safe_mod_func_int8_t_s_s(l_1576[5], l_1545)));
                    }
                    else
                    {
                        return l_1578[2][3];



                    }
                    (*g_1228) = ((l_1573 = (l_1594 = (((((safe_rshift_func_int8_t_s_s(0x78L, 1)) , ((safe_rshift_func_int16_t_s_u(g_324, ((**l_1448) ^ ((((l_1583 || ((*l_1469) = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_1561[4][1][1] == (safe_mod_func_uint16_t_u_u((l_1551 < (*l_1449)), ((g_948 , (safe_mul_func_uint16_t_u_u(65535UL, (*l_6)))) && g_114[0])))), g_320[2][0])), (*g_747))) ^ g_238))) ^ l_1592) == (**l_1448)) && l_1592)))) && (*l_1536))) , (void*)0) == l_1593) >= (*g_747)))) && (*l_1469));
                }
                else
                {
                    int l_1606 = 0x439890E8L;
                    for (g_1114 = 2; (g_1114 >= 0); g_1114 -= 1)
                    {
                        int i;
                        if ((*g_1328))
                            break;
                        (**l_1448) = l_1595;
                        (*l_1469) = (&g_194[(g_1114 + 1)] == &g_194[4]);
                    }
                    for (g_57 = 0; (g_57 <= 5); g_57++)
                    {
                        unsigned l_1598[5];
                        unsigned *l_1602[8][1];
                        unsigned *l_1603 = &g_320[3][3];
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_1598[i] = 0xE5B40A4AL;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1602[i][j] = &g_320[3][3];
                        }
                        (*g_88) = func_19(l_6, (l_1598[3] != (((((*g_747) = (**l_1448)) , (l_1599 = &g_194[7])) != &g_194[7]) == ((l_1598[4] , ((+(0xA2C7L | (func_13((**g_1563), &g_7, (*l_1448)) == 0xDC3CL))) ^ (**l_1448))) || (*l_1527)))), &g_597[0], g_79);
                        (*l_1527) = (safe_mul_func_uint8_t_u_u(l_1595, (*l_1449)));
                        (**g_87) = func_19(l_1536, ((*l_1603) = l_1598[2]), &l_1516, func_13(l_1598[4], func_19(&l_1516, (safe_sub_func_int32_t_s_s((((*l_1527) > 1UL) && (g_948 >= (g_465 <= l_1606))), (**l_1448))), l_1539, l_1607), &l_1606));
                    }
                }
                for (g_1446 = 0; (g_1446 != 14); g_1446++)
                {
                    unsigned short l_1620 = 0x71D4L;
                    int *l_1631 = &g_597[0];
                    unsigned *l_1647 = &l_976[9][2];
                    unsigned l_1648 = 0x3C865D3DL;
                    for (g_465 = 0; (g_465 != 19); ++g_465)
                    {
                        (**g_87) = l_1612;
                        return g_948;



                    }
                }
                (*l_1612) = (0xEC09L > ((((*l_6) = ((***g_1562) = 4294967295UL)) , &g_1635[0]) != (void*)0));
            }

            ;
            ;
            if (((*g_1328) = ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((!(safe_sub_func_uint32_t_u_u(((*l_6) , 0x9EA0F72BL), ((0x5EC3E28CL | (((*l_1524) = (*l_1527)) ^ l_1691)) , (*l_1425))))) != (*l_1527)) && (-7L)) , 1UL), (**l_1448))), (*l_1449))) & (*l_6))))
            {
                char l_1692 = 8L;
                for (l_2 = 6; (l_2 >= 0); l_2 -= 1)
                {
                    const char ***l_1695 = &l_1693;
                    int l_1696[1][3][10] = {{{4L,0x3E601B28L,4L,0xCC485165L,0x84EF269CL,0x6D2571ACL,0x3BB3E790L,0x3BB3E790L,1L,(-8L)},{0x3EF70598L,0x3E601B28L,0x3E601B28L,0x3EF70598L,0L,4L,0x84EF269CL,0x3BB3E790L,0x84EF269CL,4L},{1L,(-1L),0L,(-1L),1L,0xCC485165L,0x3E601B28L,0x84EF269CL,0x84EF269CL,0x3E601B28L}}};
                    unsigned *l_1698 = &g_497;
                    int i, j, k;
                    (*l_6) = l_1692;
                    for (g_185 = 0; (g_185 <= 1); g_185 += 1)
                    {
                        int i;
                        (*l_6) = 0x697A17DEL;
                    }
                    (**g_87) = (l_1688[l_2] = func_19(&l_1516, ((*l_1639) & (*l_6)), (((((((*l_1695) = l_1693) != (l_1697 = (l_1696[0][2][5] , g_295))) , (l_1696[0][0][6] == func_13(((*l_1698) = (func_39(&l_1696[0][1][5]) == (-1L))), &l_1696[0][1][6], &l_1696[0][2][5]))) != g_80[2][2]) , 0x86L) , (void*)0), g_465));
                }
            }
            else
            {
                const int *l_1706 = &g_597[1];
                int l_1714[3];
                int *l_1734[9][8][3] = {{{&l_1714[1],&g_7,&g_597[2]},{&g_7,&g_597[1],&g_7},{&l_1714[1],&l_1714[1],&g_597[2]},{&l_1516,&l_1714[2],&g_597[0]},{&g_7,&l_1714[1],&g_597[0]},{&g_57,&g_57,&g_57},{&g_7,&g_57,&g_597[2]},{&l_1516,(void*)0,&g_7}},{{&l_1714[1],&l_1516,(void*)0},{&g_7,&g_597[0],&g_597[0]},{&l_1714[1],&g_597[0],&g_7},{&l_1714[2],(void*)0,&g_7},{(void*)0,(void*)0,&g_57},{&g_597[0],&l_1714[2],(void*)0},{(void*)0,(void*)0,&l_1714[1]},{&g_57,(void*)0,&g_597[0]}},{{(void*)0,&g_597[0],&g_597[2]},{&l_1714[2],&g_597[0],&l_1516},{&l_1516,&l_1516,&l_1714[1]},{&l_1714[1],(void*)0,&g_597[3]},{&l_1714[1],&g_57,&g_57},{&g_597[0],&g_57,&g_7},{(void*)0,&l_1714[1],&g_57},{&g_57,&l_1714[2],&g_57}},{{&l_1714[1],&l_1516,&g_597[0]},{&l_1516,&l_1516,&l_1714[2]},{(void*)0,&g_57,(void*)0},{&g_597[1],&l_1714[2],&g_597[0]},{&g_7,(void*)0,&l_1516},{(void*)0,&l_1516,(void*)0},{&g_597[0],&g_7,&g_7},{(void*)0,&g_57,&g_597[3]}},{{&g_7,&l_1714[1],&g_597[2]},{&g_597[1],(void*)0,&g_597[0]},{(void*)0,(void*)0,(void*)0},{&l_1516,&l_1516,&g_7},{&l_1714[1],&g_597[2],(void*)0},{&g_7,&g_57,&l_1516},{&g_57,(void*)0,&l_1714[1]},{&g_597[0],&g_57,&l_1714[2]}},{{&g_597[0],&g_597[2],(void*)0},{&g_57,&l_1516,&g_597[3]},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1516},{&l_1714[1],&l_1714[1],(void*)0},{&l_1516,&g_57,&l_1714[1]},{(void*)0,&g_7,(void*)0},{&g_597[0],&l_1516,&l_1714[1]}},{{&g_597[0],(void*)0,(void*)0},{&g_597[0],&l_1714[2],&l_1516},{&g_597[0],&g_57,(void*)0},{&g_597[3],&l_1516,&g_597[3]},{&g_7,&l_1516,(void*)0},{&g_57,(void*)0,&l_1714[2]},{&g_597[0],&g_597[0],&l_1714[1]},{&l_1516,&g_597[0],&g_7}},{{&g_597[2],(void*)0,&g_57},{&g_597[0],&l_1714[2],&g_597[0]},{&l_1714[1],&l_1714[1],&g_597[2]},{&g_57,&g_7,&g_7},{(void*)0,&l_1714[1],&g_57},{&l_1516,&l_1516,&g_57},{&g_597[0],&g_7,&g_597[0]},{&g_597[3],&g_57,&l_1714[2]}},{{&g_7,&g_7,(void*)0},{&g_597[0],&l_1516,&g_57},{&g_597[2],&l_1714[1],&g_57},{&g_57,&g_7,&g_597[1]},{&l_1714[1],&l_1714[1],(void*)0},{&g_597[0],&l_1714[2],&l_1516},{(void*)0,(void*)0,(void*)0},{&g_7,&g_597[0],&g_57}}};
                char l_1735 = 8L;
                unsigned char *l_1754 = &g_324;
                const int *l_1764[5][9][1];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1714[i] = 0x827F221EL;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 9; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1764[i][j][k] = &g_7;
                    }
                }
                for (l_1642 = 0; (l_1642 != 60); ++l_1642)
                {
                    int l_1703 = 0xCE3C832EL;
                    for (l_1650 = (-8); (l_1650 < 32); l_1650 = safe_add_func_uint8_t_u_u(l_1650, 3))
                    {
                        (**g_87) = &l_1516;
                        if ((*l_1536))
                            continue;
                        return l_1703;



                    }
                    for (g_79 = 0; (g_79 >= 15); g_79 = safe_add_func_uint32_t_u_u(g_79, 4))
                    {
                        const int *l_1709[5][9] = {{&g_7,&g_57,&l_1418,&g_7,&l_1418,&g_57,&g_7,&g_597[0],&g_597[0]},{&g_7,&g_57,&l_1418,&g_7,&l_1418,&g_57,&g_7,&g_597[0],&g_597[0]},{&g_7,&g_57,&l_1418,&g_7,&l_1418,&g_57,&g_7,&g_597[0],&g_597[0]},{&g_7,&g_57,&l_1418,&g_7,&l_1418,&g_57,&g_7,&g_597[0],&g_597[0]},{&g_7,&g_57,&l_1418,&g_7,&l_1418,&g_57,&g_7,&g_597[0],&g_597[0]}};
                        int i, j;
                        (*g_88) = func_19(l_1706, (((*l_1612) , (safe_lshift_func_int16_t_s_u((*l_6), 15))) >= (*l_1706)), func_19(l_1709[1][5], (safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((&g_267 == (void*)0), g_80[3][2])) , ((l_1714[1] = (((*l_1706) , 0xCA2032C1L) || l_1703)) | (*l_1536))), l_1715)), (*l_1448), g_521), g_57);
                        if ((*l_1706))
                            break;
                        (*g_88) = (g_1716 = l_6);

                        ;
                    }
                }

                ;
                for (g_794 = 0; (g_794 <= 15); g_794++)
                {
                    int *l_1725 = &l_1714[2];
                    (*l_1448) = (((((safe_lshift_func_uint16_t_u_u((((((*l_1593) = (safe_sub_func_int8_t_s_s(((((*l_1524) = g_114[0]) ^ ((safe_lshift_func_int8_t_s_u(func_13((***g_1562), l_1725, (g_242 , (void*)0)), 4)) != (*l_1725))) && (safe_rshift_func_int16_t_s_u((*l_1725), (*g_747)))), (*l_1725)))) ^ 1L) && 0L) , 65535UL), 7)) && 65529UL) >= (*l_1425)) , (*g_493)) , &l_1516);

                    ;
                    for (g_465 = 0; (g_465 == (-29)); --g_465)
                    {
                        if ((*l_1536))
                            break;
                        (*l_6) = (*l_1527);
                    }
                    (**l_1448) = ((*l_6) = l_1730);
                }

                ;
                for (l_1689 = 0; (l_1689 <= 2); l_1689 += 1)
                {
                    const int l_1733 = (-1L);
                    int *l_1750 = &g_57;
                    for (g_1114 = 2; (g_1114 >= 0); g_1114 -= 1)
                    {
                        int i, j;
                        if (g_80[(l_1689 + 1)][l_1689])
                            break;
                        (*g_88) = (*l_1448);
                        (*l_1448) = &l_1714[2];

                        ;
                    }
                    for (l_1735 = 0; (l_1735 > 0); l_1735++)
                    {
                        unsigned short * const *l_1747 = (void*)0;
                        unsigned short * const **l_1746 = &l_1747;
                        unsigned short * const ***l_1745 = &l_1746;
                        unsigned short ****l_1748 = &l_1658;
                        int *l_1749 = &g_57;
                        unsigned short l_1752[9][7] = {{0x18A2L,1UL,0x4576L,1UL,0x4576L,1UL,1UL},{0x9B69L,0x818DL,2UL,0UL,0x818DL,0UL,2UL},{1UL,1UL,65532UL,65535UL,65535UL,65532UL,65535UL},{65528UL,2UL,2UL,65528UL,0UL,0x9B69L,65528UL},{0xC9CBL,65535UL,0x4576L,0x4576L,65535UL,0xC9CBL,1UL},{5UL,65528UL,1UL,0x818DL,0x818DL,1UL,65528UL},{65535UL,1UL,0xC9CBL,65535UL,0x4576L,0x4576L,65535UL},{0x9B69L,65528UL,0x9B69L,0UL,65528UL,2UL,2UL},{65535UL,65535UL,65532UL,65535UL,65535UL,65532UL,1UL}};
                        unsigned *l_1762 = &l_1715;
                        unsigned *l_1763 = &g_1446;
                        int i, j;
                        (*l_1639) = (*l_1749);
                        if ((*l_1750))
                            continue;
                        (*g_88) = &g_597[0];
                        l_1449 = (func_13((func_39(&g_597[1]) , ((*l_1750) & ((*l_1763) = ((*l_1762) = (*l_1750))))), ((*l_1448) = &l_1714[1]), &l_1714[1]) , l_1764[4][5][0]);

                        ;
                        ;
                    }
                }


                ;
                ;
                for (l_1516 = (-8); (l_1516 < (-29)); l_1516 = safe_sub_func_uint16_t_u_u(l_1516, 7))
                {
                    short l_1776 = 7L;
                    char l_1777 = 0xEDL;
                    for (l_1689 = 0; (l_1689 != 21); l_1689 = safe_add_func_uint16_t_u_u(l_1689, 8))
                    {
                        unsigned l_1780 = 1UL;
                        (*l_1425) = ((l_1777 = ((*l_1524) = (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((*l_6), (safe_lshift_func_int16_t_s_u(l_1775, l_1776)))), 11)))) < (safe_lshift_func_int16_t_s_s(l_1780, (safe_mod_func_uint32_t_u_u((0x7FC3L <= ((safe_rshift_func_uint8_t_u_u(((*l_1536) , func_13((g_1635[0] , (safe_add_func_int16_t_s_s(0x58CAL, ((safe_rshift_func_uint16_t_u_s(((*g_747) = (l_1789[3][3] == &g_747)), g_185)) & (*l_1639))))), l_6, &l_1516)), 6)) >= l_1780)), l_1776)))));
                    }
                    (*l_1425) = (safe_add_func_int32_t_s_s((*l_6), ((**l_1448) & l_1776)));
                }
            }


            ;
            ;
        }
        else
        {
            char l_1793 = (-3L);
            l_1793 = (*l_6);
        }




        ;

        ;
        ;
        ;
        (*g_493) = (((*l_6) , (safe_mod_func_int8_t_s_s(0L, (safe_mul_func_uint16_t_u_u((+l_1798[4]), ((*g_747) = (((*l_1802) = (safe_rshift_func_uint16_t_u_u((*l_6), ((((*l_1536) < ((*l_1536) ^ (*l_1536))) , l_1801) != &l_1790)))) | 0xB4L))))))) < 0x9F77BDCBL);
    }
    else
    {
        int l_1803[3][5][2] = {{{0x9BCF89CBL,0x9BCF89CBL},{0x9BCF89CBL,0x3013576BL},{1L,(-1L)},{0x3013576BL,(-1L)},{1L,0x3013576BL}},{{0x9BCF89CBL,0x9BCF89CBL},{0x9BCF89CBL,0x3013576BL},{1L,(-1L)},{0x3013576BL,(-1L)},{1L,0x3013576BL}},{{0x9BCF89CBL,0x9BCF89CBL},{0x9BCF89CBL,0x3013576BL},{1L,(-1L)},{0x3013576BL,(-1L)},{1L,0x3013576BL}}};
        unsigned * const l_1810 = (void*)0;
        unsigned * const *l_1809[3];
        unsigned * const **l_1808[5];
        char l_1874 = 0L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1809[i] = &l_1810;
        for (i = 0; i < 5; i++)
            l_1808[i] = &l_1809[0];
        (*l_1527) = (((void*)0 != (**g_87)) | l_1803[2][2][0]);
        (*l_1448) = &l_1803[2][1][0];

        ;
        if (((***g_1531) | (((*g_1812) = (((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(0x7CL, ((((*l_1524) = ((g_1811 = (l_1803[0][3][0] , &g_194[7])) != (void*)0)) && (safe_mod_func_int32_t_s_s(0x2D79A8F5L, l_1803[2][4][1]))) >= (safe_mul_func_int8_t_s_s((**l_1448), (1UL == l_1803[2][2][0])))))), 1L)) , (**g_746)) , (*g_1812))) != l_1803[0][0][0])))
        {
            char l_1822[8] = {0xE0L,0xE0L,0xE0L,0xE0L,0xE0L,0xE0L,0xE0L,0xE0L};
            unsigned short **** const l_1829 = &l_1658;
            int *l_1840 = &l_1418;
            char l_1877 = 0xC2L;
            int i;
            if ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(l_1822[3], 7)), (*g_493))))
            {
                unsigned l_1828 = 0xFA0C7BB7L;
                const int *l_1830 = &l_1803[2][2][0];
                unsigned char ** const l_1838[10] = {&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113};
                int l_1841 = 0x8F94BC13L;
                int i;
                for (g_242 = 0; (g_242 <= (-8)); g_242 = safe_sub_func_int16_t_s_s(g_242, 7))
                {
                    short l_1827 = (-1L);
                    unsigned **l_1835 = &g_1564[2];
                    int l_1842 = (-1L);
                    if (((-2L) >= ((*g_1812) = (safe_add_func_int8_t_s_s(l_1827, ((l_1827 <= ((**g_746) = (0xAAA9L || (l_1828 | ((*g_1812) | 0x50CF88C6L))))) >= ((void*)0 == l_1829)))))))
                    {
                        const int l_1839 = 1L;
                        char l_1843 = 0xD8L;
                        (*g_88) = func_19(l_1830, ((safe_sub_func_uint8_t_u_u(((***g_1531) = ((l_1827 & ((*l_1527) = (l_1842 = ((((*l_1612) = (l_1841 = func_13(((((4UL > ((*l_1830) && ((((safe_mul_func_uint16_t_u_u(1UL, (l_1835 == ((safe_lshift_func_int8_t_s_u((((*g_1328) = (((((*g_1812) , (((void*)0 == l_1838[8]) && (*l_1830))) < 0x6C95L) >= (*g_747)) , (*l_1830))) | 0L), l_1822[3])) , (void*)0)))) , l_1822[3]) ^ 0x20L) | l_1839))) , 0x52L) || l_1839) != g_948), l_1840, (*g_88)))) ^ l_1839) , (*g_493))))) || (*l_1830))), l_1843)) , l_1839), l_1844, g_185);
                        (*l_1840) = ((safe_mul_func_uint8_t_u_u((*g_113), 9L)) & (safe_add_func_uint32_t_u_u((((((*l_1524) = 0L) | func_13((*l_1830), func_19(&l_1842, l_1842, ((*l_1448) = (void*)0), l_1839), &l_1803[2][2][0])) , (*l_1830)) <= 0L), (*l_1840))));

                        ;
                        if (g_1849)
                            continue;
                    }
                    else
                    {
                        (*g_1328) = l_1842;
                    }
                }


                ;
                (*g_1716) = (safe_add_func_int16_t_s_s(((*l_1840) = (safe_lshift_func_uint16_t_u_u(((func_13((**g_1563), l_1840, (*l_1448)) >= (((*l_1524) = (-1L)) || 247UL)) ^ (((safe_lshift_func_int8_t_s_u((((*l_1593) = ((safe_sub_func_int16_t_s_s(((*l_1840) , g_79), (*l_1830))) > 0xE5L)) && l_1803[1][2][0]), l_1803[2][2][0])) >= g_1635[0]) , (*g_113))), 10))), 0x9B4FL));
                (*g_88) = (**g_87);
                (*l_1448) = (**g_87);

                ;
            }
            else
            {
                unsigned char l_1873 = 1UL;
                int l_1876 = 0x32B7B9F7L;
                for (g_1751 = (-16); (g_1751 <= 15); g_1751++)
                {
                    unsigned short ** const ***l_1864 = &g_1862[4];
                    int l_1875 = 1L;
                    unsigned l_1878 = 0x8790C985L;
                    (*g_88) = (void*)0;
                    (*l_1448) = func_19(&l_1803[2][2][0], (safe_add_func_uint8_t_u_u((((*l_1864) = g_1862[4]) == (void*)0), (l_1876 = ((*l_1524) = (((*l_1844) >= 0x528C3196L) > l_1873))))), (*g_88), l_1877);

                    ;
                    (*l_1527) = l_1878;
                    for (g_242 = 2; (g_242 >= 0); g_242 -= 1)
                    {
                        int i;
                        return g_114[g_242];
                    }
                }

                ;
            }


            ;
            (*l_1840) = (l_1874 | ((((*l_1840) ^ (((l_1879 , (safe_rshift_func_int16_t_s_u((((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((248UL >= ((g_1890 = l_1888) != &l_1829)) < ((((l_1893 != (*l_1612)) && ((*l_1524) = func_13((safe_mod_func_uint8_t_u_u(0xDEL, 0x24L)), l_1840, &l_1803[2][2][0]))) < 3L) < (*l_1844))) >= l_1874), (*l_1840))), (*l_1840))) || 0xA9821D56L), 0L)) >= l_1803[1][4][1]) ^ 0x436DL), 4))) ^ (*l_1840)) && 0x5CC499BBL)) || (-7L)) < l_1803[2][2][0]));

            ;
            return l_1803[0][1][1];




        }
        else
        {
            short l_1918 = (-3L);
            for (l_1879 = 0; (l_1879 < 34); l_1879++)
            {
                int * const *l_1913[5];
                int * const **l_1912 = &l_1913[4];
                int i;
                for (i = 0; i < 5; i++)
                    l_1913[i] = &g_556[4][4][4];
                l_1918 = (safe_rshift_func_int8_t_s_u(((void*)0 == (*g_1890)), (safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((((safe_mul_func_uint8_t_u_u(l_1803[1][0][0], ((l_1803[2][2][0] > (safe_rshift_func_uint16_t_u_u(0xEA02L, ((safe_sub_func_uint16_t_u_u(l_1803[2][2][0], (((*l_1593) = g_80[2][2]) ^ (safe_rshift_func_int16_t_s_u(((l_1914 = ((*l_1912) = (*g_87))) == (void*)0), l_1917))))) , 0xD5F3L)))) | 0L))) | (****g_1891)) | g_114[2]) & g_320[3][3]) & l_1803[2][2][0]), 247UL)) ^ 0x4C7B5492L), 0x5E18L))));

                ;

            }

            ;
        }

        ;
        ;
        (*g_208) = g_1919;
    }





    ;

    ;

    ;
    ;
    ;
    return g_7;



}







static const unsigned char func_8(char p_9, unsigned p_10, int p_11, const int * p_12)
{
    unsigned short l_1330 = 0xC1CAL;
    const int *l_1331[10][4][2] = {{{&g_597[0],&g_597[0]},{&g_597[0],&g_597[0]},{&g_57,&g_597[1]},{&g_597[1],&g_521}},{{(void*)0,&g_597[0]},{&g_597[0],&g_7},{&g_597[0],&g_57},{&g_7,&g_597[0]}},{{&g_597[0],&g_7},{&g_597[0],&g_597[2]},{&g_7,(void*)0},{&g_597[2],&g_7}},{{&g_597[0],&g_57},{(void*)0,&g_597[1]},{&g_521,&g_597[1]},{(void*)0,&g_57}},{{&g_597[0],&g_7},{&g_597[2],(void*)0},{&g_7,&g_597[2]},{&g_597[0],&g_7}},{{&g_597[0],&g_597[0]},{&g_7,&g_57},{&g_597[0],&g_7},{&g_597[0],&g_597[0]}},{{(void*)0,&g_521},{&g_597[1],&g_597[1]},{&g_57,&g_597[0]},{&g_597[0],&g_597[0]}},{{&g_597[0],(void*)0},{&g_597[0],&g_597[0]},{&g_597[0],&g_7},{&g_597[0],&g_597[0]}},{{&g_597[0],(void*)0},{&g_597[0],&g_597[0]},{&g_597[0],&g_597[0]},{&g_57,&g_597[1]}},{{&g_597[1],&g_521},{(void*)0,&g_597[0]},{&g_597[0],&g_7},{&g_597[0],&g_57}}};
    char l_1357 = (-10L);
    char *l_1364 = &g_102;
    char **l_1363 = &l_1364;
    const int *l_1399 = &g_597[0];
    int *l_1400[2];
    short *l_1409[3];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1400[i] = &g_597[1];
    for (i = 0; i < 3; i++)
        l_1409[i] = &g_242;
    (*g_493) = l_1330;
    if ((p_10 , l_1330))
    {
        const int *l_1337 = (void*)0;
        int *l_1342 = &g_597[3];
        int * const l_1356 = &g_7;
        for (g_242 = 0; (g_242 <= 2); g_242 += 1)
        {
            unsigned *l_1332 = &g_320[3][2];
            unsigned *l_1333 = (void*)0;
            unsigned *l_1334[5][7][7] = {{{&g_79,&g_1287,(void*)0,&g_1287,&g_79,&g_79,(void*)0},{&g_1287,&g_1287,&g_1287,&g_1287,&g_79,&g_79,&g_79},{&g_79,(void*)0,&g_1287,&g_1287,&g_1287,&g_79,&g_1287},{&g_79,(void*)0,(void*)0,&g_1287,&g_1287,&g_1287,&g_1287},{(void*)0,(void*)0,&g_79,&g_1287,&g_79,&g_79,&g_79},{&g_79,&g_1287,&g_79,&g_1287,&g_79,&g_79,&g_1287},{&g_1287,&g_1287,&g_1287,&g_1287,&g_1287,&g_1287,&g_79}},{{(void*)0,&g_1287,(void*)0,&g_79,&g_1287,(void*)0,&g_79},{&g_1287,(void*)0,&g_1287,&g_79,(void*)0,&g_1287,&g_1287},{&g_1287,(void*)0,&g_79,&g_1287,(void*)0,&g_79,(void*)0},{&g_79,&g_1287,&g_79,&g_79,&g_1287,&g_79,&g_1287},{(void*)0,(void*)0,&g_79,&g_1287,&g_1287,&g_1287,&g_79},{&g_79,&g_79,&g_79,&g_1287,&g_79,&g_79,&g_79},{&g_79,&g_1287,&g_1287,(void*)0,&g_79,&g_1287,&g_79}},{{&g_1287,&g_1287,&g_79,&g_79,&g_79,&g_1287,&g_79},{(void*)0,(void*)0,&g_1287,&g_1287,&g_1287,(void*)0,&g_79},{&g_79,&g_1287,&g_79,&g_79,&g_79,&g_1287,(void*)0},{&g_79,&g_79,(void*)0,(void*)0,&g_79,(void*)0,(void*)0},{&g_79,&g_79,&g_79,&g_1287,&g_1287,(void*)0,(void*)0},{&g_1287,&g_1287,&g_1287,&g_1287,&g_79,&g_79,&g_79},{&g_79,&g_79,(void*)0,(void*)0,&g_1287,(void*)0,&g_79}},{{&g_1287,&g_1287,(void*)0,&g_79,&g_79,&g_79,&g_1287},{&g_1287,&g_79,&g_79,&g_1287,&g_79,(void*)0,&g_79},{(void*)0,&g_1287,(void*)0,(void*)0,&g_1287,&g_79,&g_79},{&g_1287,&g_79,&g_1287,&g_1287,&g_79,&g_79,&g_1287},{(void*)0,&g_1287,&g_1287,&g_1287,(void*)0,&g_1287,&g_1287},{(void*)0,&g_1287,(void*)0,&g_79,&g_1287,(void*)0,&g_79},{&g_1287,&g_79,&g_1287,&g_79,&g_79,&g_1287,&g_79}},{{&g_79,&g_79,&g_79,&g_79,&g_1287,&g_1287,&g_1287},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,(void*)0,(void*)0,&g_79,&g_1287,&g_79,(void*)0},{&g_79,(void*)0,&g_1287,(void*)0,(void*)0,&g_79,&g_79},{&g_79,&g_79,(void*)0,&g_79,&g_1287,&g_79,&g_1287},{&g_79,&g_79,(void*)0,&g_79,&g_1287,&g_1287,&g_79},{&g_1287,&g_1287,&g_79,&g_79,&g_79,&g_1287,&g_79}}};
            unsigned *l_1335[1];
            unsigned *l_1336 = &g_1287;
            unsigned char *l_1340 = (void*)0;
            unsigned char *l_1341 = &g_324;
            const int **l_1343 = &g_75;
            int l_1367 = 0xC931E587L;
            const short l_1368 = 1L;
            int *l_1369 = (void*)0;
            int l_1408[10][5][5];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1335[i] = &g_1287;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_1408[i][j][k] = 1L;
                }
            }
            (*g_88) = func_19(l_1331[0][3][0], (g_114[g_242] , ((*l_1332) = 0x6DBB3C5EL)), func_19(((*l_1343) = func_19(l_1331[0][3][0], ((*l_1336) = (0x4F78L <= p_11)), ((**g_87) = func_19(l_1337, p_9, ((safe_add_func_uint8_t_u_u(((*l_1341) = 0xC1L), g_114[0])) , l_1342), g_465)), p_10)), p_10, l_1342, p_11), p_11);

            ;
            for (g_521 = 0; (g_521 <= 3); g_521 += 1)
            {
                int i, j;
                return g_320[(g_242 + 1)][g_521];
            }
            (*l_1343) = l_1331[0][3][0];

            ;
            for (g_238 = 0; (g_238 <= 3); g_238 += 1)
            {
                int *l_1365 = &g_597[1];
                for (g_7 = 0; (g_7 <= 3); g_7 += 1)
                {
                    unsigned short *l_1366[6] = {&g_238,&g_238,&g_238,&g_238,&g_238,&g_238};
                    int * const l_1370 = &g_597[0];
                    short l_1372 = 0xE561L;
                    int **l_1380 = &l_1369;
                    const int l_1407 = 1L;
                    int i;
                    for (p_11 = 3; (p_11 >= 0); p_11 -= 1)
                    {
                        char *l_1358[3][4];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_1358[i][j] = &l_1357;
                        }
                        g_89[(g_242 + 1)][g_7][g_7] = func_19(l_1337, (safe_lshift_func_int16_t_s_s((6UL && (g_102 = (((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(g_102, (((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_521, (~func_13(p_9, ((safe_rshift_func_int8_t_s_s(g_449, 2)) , (void*)0), l_1356)))), (*g_747))) < p_10) > p_9))), 0x7224D9BDL)) < l_1357) >= 1UL))), p_9)), l_1336, g_597[0]);
                        if ((*p_12))
                            break;
                    }
                    if ((safe_mod_func_uint16_t_u_u(((func_13((((g_678 == (l_1367 = ((*g_747) = (safe_mul_func_uint16_t_u_u((p_11 == ((((1UL <= (*p_12)) , l_1363) == ((p_10 != ((!func_13(g_114[2], l_1365, l_1365)) ^ (*p_12))) , g_295)) , p_9)), p_9))))) , (*l_1365)) , l_1368), l_1369, l_1356) == 0x3528L) || (*l_1365)), (-1L))))
                    {
                        int **l_1371 = &g_89[2][2][3];
                        if ((*p_12))
                            break;
                        (*l_1371) = l_1370;
                    }
                    else
                    {
                        const unsigned l_1375 = 0UL;
                        int * const l_1377[2] = {(void*)0,(void*)0};
                        int i;
                        l_1372 = (~(*p_12));
                        (**g_87) = func_19(l_1365, p_10, l_1342, (func_39(&l_1367) > (safe_mod_func_int16_t_s_s((-1L), (func_13(l_1375, l_1342, l_1342) , (*g_747))))));
                        (*g_88) = func_19(((*l_1343) = (void*)0), (*l_1370), l_1365, p_9);

                        ;
                        (*l_1370) = ((safe_unary_minus_func_uint8_t_u(((g_597[0] == ((safe_mod_func_uint32_t_u_u((func_39(l_1342) < func_13(((((*p_12) >= (g_678 , (*p_12))) | 0x2CL) , (*l_1370)), l_1342, l_1365)), p_10)) & 0x4DED9D86L)) , p_10))) <= (*g_747));
                    }
                    if (((*l_1342) = ((func_39(((*l_1380) = l_1370)) && ((8L || (p_9 < (((*p_12) ^ 0x602A7B18L) & ((((p_11 , (func_13((*l_1356), l_1342, l_1365) > (*l_1342))) <= g_1114) , g_114[0]) & p_11)))) , (-1L))) | 0x1E6EL)))
                    {
                        (**g_87) = func_19(l_1365, (**l_1380), (*l_1380), p_9);
                        if ((*g_1328))
                            continue;
                    }
                    else
                    {
                        unsigned *l_1385 = &g_79;
                        unsigned l_1392 = 4294967295UL;
                        int l_1393 = (-10L);
                        unsigned l_1394[4] = {0xBC64CF03L,0xBC64CF03L,0xBC64CF03L,0xBC64CF03L};
                        short *l_1405 = &l_1372;
                        int *l_1406[8][6][5] = {{{&g_80[2][2],&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2]},{(void*)0,(void*)0,(void*)0,&g_948,(void*)0},{&g_80[2][2],&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2]},{(void*)0,(void*)0,(void*)0,&g_948,(void*)0},{&g_80[2][2],&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2]},{(void*)0,(void*)0,(void*)0,&g_948,&g_948}},{{&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2],&g_465},{&g_465,&g_465,&g_948,(void*)0,&g_948},{&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2],&g_465},{&g_465,&g_465,&g_948,(void*)0,&g_948},{&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2],&g_465},{&g_465,&g_465,&g_948,(void*)0,&g_948}},{{&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2],&g_465},{&g_465,&g_465,&g_948,(void*)0,&g_948},{&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2],&g_465},{&g_465,&g_465,&g_948,(void*)0,&g_948},{&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2],&g_465},{&g_465,&g_465,&g_948,(void*)0,&g_948}},{{&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2],&g_465},{&g_465,&g_465,&g_948,(void*)0,&g_948},{&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2],&g_465},{&g_465,&g_465,&g_948,(void*)0,&g_948},{&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2],&g_465},{&g_465,&g_465,&g_948,(void*)0,&g_948}},{{&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2],&g_465},{(void*)0,(void*)0,&g_465,&g_80[2][2],&g_465},{&g_80[2][2],&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2]},{(void*)0,(void*)0,&g_465,&g_80[2][2],&g_465},{&g_80[2][2],&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2]},{(void*)0,(void*)0,&g_465,&g_80[2][2],&g_465}},{{&g_80[2][2],&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2]},{(void*)0,(void*)0,&g_465,&g_80[2][2],&g_465},{&g_80[2][2],&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2]},{(void*)0,(void*)0,&g_465,&g_80[2][2],&g_465},{&g_80[2][2],&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2]},{(void*)0,(void*)0,&g_465,&g_80[2][2],&g_465}},{{&g_80[2][2],&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2]},{(void*)0,(void*)0,&g_465,&g_80[2][2],&g_465},{&g_80[2][2],&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2]},{(void*)0,(void*)0,&g_465,&g_80[2][2],&g_465},{&g_80[2][2],&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2]},{(void*)0,(void*)0,&g_465,&g_80[2][2],&g_465}},{{&g_80[2][2],&g_80[2][2],&g_80[2][2],&g_465,&g_80[2][2]},{(void*)0,(void*)0,&g_465,&g_80[2][2],&g_465},{&g_465,&g_465,&g_465,&g_80[2][2],&g_465},{&g_948,&g_948,&g_80[2][2],(void*)0,&g_80[2][2]},{&g_465,&g_465,&g_465,&g_80[2][2],&g_465},{&g_948,&g_948,&g_80[2][2],(void*)0,&g_80[2][2]}}};
                        int i, j, k;
                        l_1394[2] = (l_1393 = (l_1392 = ((((!((((*l_1370) = ((*g_747) > ((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((*l_1336) = (*l_1365)), func_13((*l_1365), func_19(l_1365, ((*l_1385) = (p_10 = 0x89CACCAFL)), ((**g_87) = l_1365), (safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(p_9, (*l_1365))), (((safe_rshift_func_int16_t_s_u(p_11, 15)) && p_9) , (-1L))))), l_1385))), p_11)) ^ p_11))) && p_11) ^ p_11)) != 0xE550L) , p_10) <= p_9)));
                        p_12 = ((*l_1380) = func_19(((((*l_1364) = (safe_add_func_int32_t_s_s((l_1394[2] & l_1392), (*p_12)))) & func_13((safe_lshift_func_uint8_t_u_u(p_9, 7)), func_19(func_19(func_19(l_1399, p_11, l_1400[1], (l_1393 = (safe_lshift_func_uint16_t_u_s((func_13((safe_add_func_int16_t_s_s(g_497, ((*l_1405) = (((*l_1365) = ((~p_9) != p_10)) & 0L)))), &l_1367, &l_1367) ^ g_320[0][3]), p_9)))), p_9, &l_1367, p_9), l_1407, l_1406[7][5][1], (*l_1356)), l_1400[0])) , l_1337), p_11, &g_521, p_9));

                        ;
                        ;
                    }

                    ;
                }
                if (l_1408[9][4][2])
                    break;
            }

            ;
        }



        ;
    }
    else
    {
        p_12 = p_12;
    }



    ;
    (*g_493) = (p_11 != 0UL);
    return (*l_1399);
}







static unsigned func_13(const unsigned p_14, int * p_15, int * const p_16)
{
    int l_1329 = 4L;
    return l_1329;
}







static int * func_17(int * p_18)
{
    int l_981 = 0L;
    unsigned l_982 = 1UL;
    unsigned char *l_992[8] = {&g_114[0],&g_114[1],&g_114[0],&g_114[0],&g_114[1],&g_114[0],&g_114[0],&g_114[1]};
    int l_994 = (-1L);
    char **l_1010 = (void*)0;
    int l_1046 = 0x7043D82FL;
    int *l_1076 = &l_981;
    unsigned **l_1129 = &g_194[7];
    const unsigned char l_1175[9][7][4] = {{{0xC5L,255UL,0xF0L,247UL},{0UL,255UL,0x75L,255UL},{0xF0L,0xB8L,0x75L,0x1DL},{0UL,0x62L,0xF0L,0x1DL},{0xC5L,0xB8L,0xC5L,255UL},{0xC5L,255UL,0xF0L,247UL},{0UL,255UL,0x75L,255UL}},{{0xF0L,0xB8L,0x75L,0x1DL},{0UL,0x62L,0xF0L,0x1DL},{0xC5L,0xB8L,0xC5L,255UL},{0xC5L,255UL,0xF0L,247UL},{0UL,255UL,0x75L,255UL},{0xF0L,0xB8L,0x75L,0x1DL},{0UL,0x62L,0xF0L,0x1DL}},{{0xC5L,0xB8L,0xC5L,255UL},{0xC5L,255UL,0xF0L,247UL},{0UL,255UL,0x75L,0x62L},{0UL,0x1DL,0xC5L,247UL},{1UL,0xB8L,0UL,247UL},{0xF0L,0x1DL,0xF0L,0x62L},{0xF0L,0x62L,0UL,255UL}},{{1UL,0x62L,0xC5L,0x62L},{0UL,0x1DL,0xC5L,247UL},{1UL,0xB8L,0UL,247UL},{0xF0L,0x1DL,0xF0L,0x62L},{0xF0L,0x62L,0UL,255UL},{1UL,0x62L,0xC5L,0x62L},{0UL,0x1DL,0xC5L,247UL}},{{1UL,0xB8L,0UL,247UL},{0xF0L,0x1DL,0xF0L,0x62L},{0xF0L,0x62L,0UL,255UL},{1UL,0x62L,0xC5L,0x62L},{0UL,0x1DL,0xC5L,247UL},{1UL,0xB8L,0UL,247UL},{0xF0L,0x1DL,0xF0L,0x62L}},{{0xF0L,0x62L,0UL,255UL},{1UL,0x62L,0xC5L,0x62L},{0UL,0x1DL,0xC5L,247UL},{1UL,0xB8L,0UL,247UL},{0xF0L,0x1DL,0xF0L,0x62L},{0xF0L,0x62L,0UL,0x1DL},{0xF0L,247UL,1UL,247UL}},{{0xC5L,0x62L,1UL,0xB8L},{0xF0L,255UL,0xC5L,0xB8L},{0x75L,0x62L,0x75L,247UL},{0x75L,247UL,0xC5L,0x1DL},{0xF0L,247UL,1UL,247UL},{0xC5L,0x62L,1UL,0xB8L},{0xF0L,255UL,0xC5L,0xB8L}},{{0x75L,0x62L,0x75L,247UL},{0x75L,247UL,0xC5L,0x1DL},{0xF0L,247UL,1UL,247UL},{0xC5L,0x62L,1UL,0xB8L},{0xF0L,255UL,0xC5L,0xB8L},{0x75L,0x62L,0x75L,247UL},{0x75L,247UL,0xC5L,0x1DL}},{{0xF0L,247UL,1UL,247UL},{0xC5L,0x62L,1UL,0xB8L},{0xF0L,255UL,0xC5L,0xB8L},{0x75L,0x62L,0x75L,247UL},{0x75L,247UL,0xC5L,0x1DL},{0xF0L,247UL,1UL,247UL},{0xC5L,0x62L,1UL,0xB8L}}};
    const unsigned l_1196 = 0x98FDB2EEL;
    const int l_1239[10] = {(-1L),(-8L),(-8L),(-1L),(-8L),(-8L),(-8L),0xFDEE148CL,0xFDEE148CL,(-8L)};
    int * const l_1242[1][7][4] = {{{&g_57,&g_57,&g_597[3],&l_994},{&g_521,&l_1046,&g_521,&g_597[3]},{&g_521,&g_597[3],&g_597[3],&g_521},{&g_57,&g_597[3],&l_994,&g_597[3]},{&g_597[3],&l_1046,&l_994,&l_994},{&g_57,&g_57,&g_597[3],&l_994},{&g_521,&l_1046,&g_521,&g_597[3]}}};
    short l_1290 = 1L;
    char l_1324 = 0x56L;
    int i, j, k;
    for (g_238 = (-25); (g_238 == 10); g_238++)
    {
        int *l_980[9][5] = {{&g_57,&g_57,&g_7,&g_521,&g_57},{&g_597[0],&g_597[0],&g_597[0],&g_597[0],&g_57},{&g_597[0],&g_521,&g_597[0],&g_597[0],&g_521},{&g_57,&g_597[0],&g_597[0],&g_7,&g_7},{&g_597[0],&g_57,&g_597[0],&g_597[0],&g_7},{&g_521,&g_597[0],&g_7,&g_597[0],&g_521},{&g_597[0],&g_597[0],&g_57,&g_521,&g_57},{&g_57,&g_57,&g_7,&g_521,&g_57},{&g_597[0],&g_597[0],&g_597[0],&g_597[0],&g_57}};
        int i, j;
        l_981 = (*p_18);
        p_18 = p_18;
        l_982 = (-1L);
    }
    if (l_982)
    {
        int *l_983 = &l_981;
        unsigned char *l_993 = &g_114[1];
        unsigned *l_995 = &g_320[1][1];
        unsigned ***l_1030 = &g_193;
        int l_1047 = (-1L);
        (**g_87) = l_983;


        if ((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((*l_983), (*l_983))), (l_982 , ((*l_995) = ((g_7 , (-6L)) < (l_982 , ((&g_242 != &g_242) == (l_994 = ((safe_lshift_func_int16_t_s_s((((*l_983) , l_992[6]) != l_993), 2)) != (*l_983)))))))))))
        {
            for (g_948 = (-7); (g_948 < (-12)); --g_948)
            {
                short *l_1000 = &g_242;
                if (l_981)
                    break;
                for (g_185 = 0; (g_185 <= 3); g_185 += 1)
                {
                    int i;
                    g_597[g_185] = (0xFCD3359BL != g_597[g_185]);
                    if (g_597[g_185])
                        continue;
                    for (g_497 = 0; (g_497 <= 2); g_497 += 1)
                    {
                        int i;
                        return g_194[(g_497 + 1)];



                    }
                }
                (*l_983) = (safe_mul_func_int16_t_s_s(l_982, ((*l_1000) = g_168)));
            }
        }
        else
        {
            unsigned char l_1005[5][8][6] = {{{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL}},{{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL}},{{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL}},{{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL}},{{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL},{0xF7L,0xF7L,3UL,3UL,0xF7L,0xF7L},{0xF7L,3UL,3UL,0xF7L,0xF7L,3UL}}};
            char *l_1011 = &g_92;
            int i, j, k;
            (*l_983) = ((safe_lshift_func_int8_t_s_s(((*l_1011) = (safe_lshift_func_int8_t_s_s(l_1005[0][5][4], ((safe_lshift_func_uint8_t_u_s(((0x01L && g_185) < (~(((l_994 = func_39(((safe_rshift_func_int8_t_s_s((((func_39(p_18) < (l_1005[0][5][4] < (-1L))) && ((*g_747) = (l_1010 == l_1010))) | (*l_983)), 2)) , p_18))) , 0x71602983L) >= (-10L)))), l_1005[0][5][4])) , l_981)))), l_1005[0][3][5])) , (*l_983));
            (*g_88) = p_18;
            for (l_981 = 0; (l_981 > 21); ++l_981)
            {
                int l_1024 = 9L;
                int *l_1027 = &g_597[0];
                int *l_1031 = &l_1024;
                if (l_1005[0][5][4])
                    break;
                (*l_1031) = (((*p_18) != ((*l_995) = l_1005[0][5][4])) , ((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((l_1024 == (safe_mul_func_int8_t_s_s(((-1L) < l_1024), g_521))) > ((*l_1027) = (*p_18))), (((safe_mod_func_uint8_t_u_u(((((*l_1011) = (((void*)0 != l_1030) == l_981)) || 255UL) | 0xDAB47125L), l_994)) , (*g_747)) ^ l_994))), l_982)) , (*p_18)));
            }
        }
        (*l_983) = ((0x40AFL <= (safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u((((*l_983) <= (((l_994 != ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((l_1047 = ((safe_mod_func_uint8_t_u_u(((*l_993) = 0x7FL), (0x78245DEDL | ((*l_995) = func_39(&g_57))))) | (4294967295UL > ((l_1046 = (safe_mul_func_uint16_t_u_u((*g_747), g_794))) <= 0xD6A3L)))) | (*p_18)), 4)), l_982)) != 1L)) > g_794) > 2L)) & 0x5E37L), (*g_747))) ^ (*l_983)) <= (*l_983)), (*l_983))), 3L))) && g_114[0]);
    }
    else
    {
        short l_1063 = 1L;
        int l_1064 = 0x183AF080L;
        short l_1073[5][7] = {{0L,0x6B6DL,0L,0L,0xE2D7L,0x7B31L,(-1L)},{0xA16CL,0x55B3L,0x7B31L,0L,0x7B31L,0x55B3L,0xA16CL},{0x55B3L,4L,(-1L),0xE2D7L,0x7669L,0x7B31L,0x7669L},{0x55B3L,0x7669L,0x7669L,0x55B3L,0L,(-1L),0L},{0xA16CL,(-1L),(-1L),0L,0L,(-1L),(-1L)}};
        int l_1080 = 0x218C5EEEL;
        unsigned char *l_1136 = &g_114[0];
        unsigned short ***l_1152 = (void*)0;
        int * const l_1153[10][7][3] = {{{&l_1046,&l_1064,&l_1046},{(void*)0,&l_981,&l_1046},{&g_521,&l_981,(void*)0},{&g_597[0],&l_1064,(void*)0},{(void*)0,&l_994,(void*)0},{&g_57,&l_1064,&l_1046},{&l_1064,&l_994,&l_1046}},{{&g_7,(void*)0,&l_1064},{(void*)0,&g_57,&g_521},{&l_1064,&g_597[0],&g_597[0]},{(void*)0,&g_521,(void*)0},{&l_981,&l_1046,&g_597[3]},{(void*)0,&g_57,&g_57},{(void*)0,(void*)0,&g_597[0]}},{{&l_1046,&g_521,(void*)0},{(void*)0,&l_981,&g_521},{(void*)0,&l_1064,(void*)0},{&l_981,(void*)0,&l_1046},{(void*)0,&g_57,(void*)0},{(void*)0,&l_1064,&g_597[0]},{&g_597[0],&g_521,(void*)0}},{{&g_597[2],&g_57,&g_57},{&g_57,&g_57,&l_994},{(void*)0,&l_994,(void*)0},{&l_1064,&l_994,&g_57},{&g_57,(void*)0,&g_7},{&g_521,&g_597[2],&g_7},{&g_57,&g_57,&g_57}},{{&l_1046,&g_597[0],(void*)0},{&g_597[0],&g_597[3],&l_994},{&g_597[0],&l_994,&g_57},{&g_57,&l_1064,(void*)0},{&g_521,&l_1064,&g_597[0]},{&l_981,&l_1064,(void*)0},{&l_994,&l_1046,&l_1046}},{{&l_1064,&g_521,(void*)0},{&g_521,&g_7,&g_521},{&g_7,(void*)0,(void*)0},{&g_521,(void*)0,&g_597[0]},{&g_597[0],(void*)0,&g_57},{(void*)0,&g_7,&g_597[3]},{&l_1046,&g_521,&l_994}},{{&l_994,(void*)0,(void*)0},{&g_57,(void*)0,&l_994},{&l_1046,&g_57,&g_521},{&g_7,&l_1064,&g_597[0]},{&l_994,&g_7,&l_1064},{(void*)0,(void*)0,&l_994},{&l_1064,&g_57,(void*)0}},{{&g_521,(void*)0,&l_981},{(void*)0,&g_597[2],&g_597[0]},{(void*)0,&l_1064,&l_1064},{&g_521,(void*)0,(void*)0},{&l_1064,&g_521,&l_1064},{(void*)0,&g_597[0],(void*)0},{&l_994,(void*)0,&g_57}},{{&g_7,&g_597[0],&g_597[2]},{&l_1046,&l_1046,&g_57},{&g_57,&l_1046,&g_7},{&l_994,&l_994,&g_57},{(void*)0,&l_1046,&g_521},{&l_994,&l_981,&g_57},{&l_1046,&l_981,&l_1046}},{{&g_7,&l_994,&g_57},{(void*)0,&g_57,&g_521},{&l_1046,&l_1064,&g_57},{(void*)0,&l_1064,&g_7},{&l_1046,&l_994,&g_57},{&l_981,&l_994,&g_597[2]},{&l_1064,(void*)0,&g_57}}};
        unsigned **l_1154 = (void*)0;
        char l_1187[4][4][3] = {{{0x91L,0L,0x91L},{2L,2L,2L},{0x91L,0L,0x91L},{2L,2L,2L}},{{0x91L,0L,0x91L},{2L,2L,2L},{0x91L,0L,0x91L},{2L,2L,2L}},{{0x91L,0L,0x91L},{2L,2L,2L},{0x91L,0L,0x91L},{2L,2L,2L}},{{0x91L,0L,0x91L},{2L,2L,2L},{0x91L,0L,0x91L},{2L,2L,2L}}};
        int ***l_1213[8];
        unsigned short *l_1247 = &g_449;
        unsigned short *l_1249 = &g_185;
        unsigned char l_1265 = 0xE9L;
        unsigned l_1281 = 0x6DB98397L;
        int l_1300 = 0x65712956L;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_1213[i] = (void*)0;
        if (l_981)
        {
            char l_1056[1][2];
            int *l_1081 = &g_7;
            unsigned char *l_1126 = &g_114[0];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1056[i][j] = 0x35L;
            }
            for (g_948 = 0; (g_948 != (-16)); g_948 = safe_sub_func_uint32_t_u_u(g_948, 1))
            {
                unsigned l_1057 = 1UL;
                unsigned short *l_1061 = &g_449;
                unsigned short l_1077 = 0xA8F0L;
                int *l_1079 = &g_7;
                for (g_794 = 0; (g_794 > 51); g_794++)
                {
                    unsigned short l_1054[9][3] = {{0x0BD0L,1UL,65535UL},{0x0BD0L,0UL,0x19FDL},{0x0BD0L,1UL,0x0BD0L},{0x0BD0L,1UL,65535UL},{0x0BD0L,0UL,0x19FDL},{0x0BD0L,1UL,0x0BD0L},{0x0BD0L,1UL,65535UL},{0x0BD0L,0UL,0x19FDL},{0x0BD0L,1UL,0x0BD0L}};
                    int * const l_1055 = &l_981;
                    unsigned *l_1058 = &g_79;
                    short *l_1062[2];
                    unsigned *l_1074 = (void*)0;
                    unsigned *l_1075 = &g_182[0];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1062[i] = (void*)0;
                    l_1064 = ((safe_add_func_uint32_t_u_u(l_1054[4][2], ((func_39(l_1055) | ((((l_1056[0][1] && l_1057) > ((*l_1058) = 0x225E420EL)) != l_1057) == (g_242 = (~(safe_mod_func_uint16_t_u_u(((*l_1055) , (l_1061 == (void*)0)), 0x192FL)))))) , (*p_18)))) && l_1063);
                    if ((safe_sub_func_int8_t_s_s(((((*l_1075) = (safe_mul_func_uint8_t_u_u(((l_994 , ((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((-1L), (l_1063 && (*p_18)))), ((((*g_747) = l_982) || l_1073[0][2]) & l_1057))) , l_1057)) , (*l_1055)), 0xF4L))) , (void*)0) != l_1010), (*l_1055))))
                    {
                        return p_18;


                    }
                    else
                    {
                        const char l_1078 = 0x5CL;
                        (*l_1055) = (*p_18);
                        (*l_1076) = ((*g_747) >= l_1080);
                    }
                    (**g_87) = l_1081;
                }
            }
            for (g_102 = 17; (g_102 != 17); ++g_102)
            {
                unsigned l_1092 = 4294967290UL;
                int *l_1093 = (void*)0;
                int *l_1094 = (void*)0;
                l_1046 = (safe_rshift_func_int8_t_s_s((0xB8BCF432L > (safe_mod_func_int32_t_s_s(((*l_1076) = (safe_add_func_uint16_t_u_u((0xBE92L | l_1064), ((safe_mod_func_uint32_t_u_u(l_1092, (*p_18))) & (!(*g_493)))))), ((g_320[4][2] > ((*g_747) ^ 0x7358L)) ^ (*l_1081))))), 2));
                return p_18;


            }
            (*g_88) = &l_1064;


            for (l_981 = 0; (l_981 < (-10)); l_981--)
            {
                unsigned short l_1098 = 65530UL;
                int *l_1127 = &l_981;
                for (g_948 = 0; (g_948 <= 2); g_948 += 1)
                {
                    int l_1097[9][6] = {{0x52028E1EL,1L,1L,0x52028E1EL,0L,0x52028E1EL},{0x52028E1EL,0L,0x52028E1EL,1L,1L,0x52028E1EL},{0x602D1EC6L,0x602D1EC6L,1L,0x353A2239L,1L,0x602D1EC6L},{1L,0L,0x353A2239L,0x353A2239L,0L,1L},{0x602D1EC6L,1L,0x353A2239L,1L,0x602D1EC6L,0x602D1EC6L},{0x52028E1EL,0x353A2239L,0x353A2239L,0L,1L,0L},{0L,1L,0L,0x353A2239L,0x353A2239L,0L},{0x52028E1EL,0x52028E1EL,0x353A2239L,0x602D1EC6L,0x353A2239L,0x52028E1EL},{0x353A2239L,1L,0x602D1EC6L,0x602D1EC6L,1L,0x353A2239L}};
                    int *l_1115 = &l_1046;
                    int i, j;
                    if ((*p_18))
                    {
                        int *l_1103 = (void*)0;
                        int *l_1104 = &l_994;
                        (*l_1104) = (l_1097[4][5] , (*p_18));
                    }
                    else
                    {
                        unsigned **l_1105[1];
                        int l_1128 = 0L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1105[i] = &g_194[7];
                        (*g_88) = p_18;
                        (*l_1115) = ((((l_1073[0][2] , l_1105[0]) == (void*)0) && ((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((+g_1114), 4)) ^ (+(*l_1081))), (-1L))), 6)), 6L)) || (*l_1115))) , (-3L));
                        if ((*l_1081))
                            break;
                        (*g_88) = p_18;
                    }
                    if ((*p_18))
                        continue;
                    l_1064 = ((void*)0 == l_1129);
                }
                (**g_87) = l_1081;
                if ((*p_18))
                    break;
            }
        }
        else
        {
            unsigned char * const l_1137 = &g_114[0];
            int l_1142 = 0x9AF2F27CL;
            p_18 = ((*g_88) = &l_1064);


            ;
            if ((safe_lshift_func_uint8_t_u_u(((*p_18) & (safe_add_func_int8_t_s_s((((safe_mul_func_int8_t_s_s(func_39(p_18), l_1073[3][5])) != (*l_1076)) < l_1142), 254UL))), (*l_1076))))
            {
                unsigned l_1149 = 4294967292UL;
                short *l_1150[3][7] = {{&l_1063,(void*)0,&l_1063,&l_1063,(void*)0,&l_1063,&l_1063},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1063,&l_1063,(void*)0,&l_1063,&l_1063,(void*)0}};
                int i, j;
                (*p_18) = 0x2B887256L;
                (*p_18) = ((((safe_sub_func_uint32_t_u_u((((((safe_add_func_uint16_t_u_u((((l_1149 , (((((*l_1076) = (-5L)) < l_1142) == l_1063) || (l_1142 ^ l_1149))) , (*l_1076)) , 0x26F4L), (l_1149 ^ l_1149))) , 0x736C8520L) && 0UL) | l_1149) < l_1063), l_1064)) < (-1L)) >= (-1L)) , 0x337109ACL);
            }
            else
            {
                int *l_1156 = &l_1064;
                int *l_1157 = &l_1142;
                unsigned char ****l_1158 = &g_186[0];
                (*l_1076) = 0x2AF91682L;
                for (g_168 = 0; (g_168 <= 3); g_168 += 1)
                {
                    int i;
                    g_597[g_168] = g_597[g_168];
                    for (l_1063 = 9; (l_1063 >= 0); l_1063 -= 1)
                    {
                        unsigned short ***l_1151 = &g_746;
                        (*p_18) = (((l_1151 = l_1151) == l_1152) > g_597[g_168]);
                        (*p_18) = (g_597[g_168] = 0L);
                        if ((*p_18))
                            continue;
                    }
                }
                for (g_521 = 2; (g_521 >= 0); g_521 -= 1)
                {
                    unsigned **l_1155 = &g_194[2];
                    int *l_1159 = &g_597[1];
                }
            }
        }



        for (l_1080 = 25; (l_1080 >= (-25)); l_1080--)
        {
            unsigned l_1164 = 0x1B760E17L;
            int * const l_1171 = (void*)0;
            const int *l_1172 = (void*)0;
            int *l_1174[6][4] = {{&l_981,&l_994,&l_994,&l_981},{&g_597[0],&l_994,&l_994,&l_994},{&l_994,&g_597[0],&l_994,&l_994},{&g_597[0],&g_597[0],&l_994,&l_994},{&l_981,&g_597[0],&l_981,&l_994},{&l_981,&l_994,&l_994,&l_981}};
            int *l_1180[7][7][3] = {{{&l_1064,&l_994,&l_1064},{&g_7,&g_7,&g_7},{&l_994,&l_1064,&l_981},{(void*)0,&g_7,(void*)0},{&l_1064,&l_994,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&l_1064,&l_981}},{{&g_57,(void*)0,&g_7},{(void*)0,(void*)0,&l_1064},{&g_57,&g_7,&g_7},{&l_981,&l_994,&l_981},{&g_521,&g_57,(void*)0},{&l_1064,&l_981,&l_981},{(void*)0,&g_521,&g_7}},{{&l_1064,&l_1064,&l_994},{(void*)0,(void*)0,&g_7},{&l_1064,&l_1064,(void*)0},{&g_521,(void*)0,&g_521},{&l_981,&l_1064,&l_994},{&g_57,&g_521,&g_521},{&l_994,&l_981,(void*)0}},{{&g_7,&g_57,&g_7},{&l_994,&l_994,&l_994},{&g_57,&g_7,&g_7},{&l_981,&l_994,&l_981},{&g_521,&g_57,(void*)0},{&l_1064,&l_981,&l_981},{(void*)0,&g_521,&g_7}},{{&l_1064,&l_1064,&l_994},{(void*)0,(void*)0,&g_7},{&l_1064,&l_1064,(void*)0},{&g_521,(void*)0,&g_521},{&l_981,&l_1064,&l_994},{&g_57,&g_521,&g_521},{&l_994,&l_981,(void*)0}},{{&g_7,&g_57,&g_7},{&l_994,&l_994,&l_994},{&g_57,&g_7,&g_7},{&l_981,&l_994,&l_981},{&g_521,&g_57,(void*)0},{&l_1064,&l_981,&l_1064},{&g_7,&g_57,&g_7}},{{&l_981,&l_1064,(void*)0},{&g_7,&g_7,&g_7},{&l_1064,&l_981,&l_1064},{&g_57,&g_7,&g_57},{&l_1064,&l_1064,&l_994},{(void*)0,&g_57,&g_57},{&l_994,&l_1064,&l_1064}}};
            int *l_1183 = &l_1046;
            int l_1195[6];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1195[i] = 0x853D519FL;
            for (g_948 = (-27); (g_948 <= (-9)); ++g_948)
            {
                const short l_1173 = 0xBEB0L;
                int l_1176 = (-8L);
                int *l_1182 = &l_981;
                char l_1206 = 0x03L;
                short *l_1209[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1209[i] = &l_1073[0][1];
                l_1046 = (((l_1164 , g_238) , (3L && (l_1176 = ((*l_1076) = ((safe_mod_func_int16_t_s_s(g_185, 0x6D1CL)) & l_1175[5][2][2]))))) > l_1173);
                if (((void*)0 == l_1136))
                {
                    int *l_1181[7][8][4] = {{{&g_57,&l_1046,&g_597[0],&g_597[2]},{&g_597[2],&g_597[0],&g_597[3],(void*)0},{&l_981,&g_597[0],&g_57,(void*)0},{&g_597[3],&g_521,&l_981,&g_597[0]},{&g_521,&l_1046,&l_1046,&g_57},{&g_597[0],&g_597[0],&l_1046,&g_57},{&l_994,&g_7,&g_7,&l_994},{&l_981,&g_597[2],&l_981,&g_597[0]}},{{&l_1046,&l_1064,(void*)0,(void*)0},{&g_597[3],&l_994,&g_597[0],(void*)0},{&g_597[2],&l_1064,&l_1064,&g_597[0]},{&l_1064,&g_597[2],&l_994,&l_994},{&g_521,&g_7,&g_57,&g_57},{&g_597[3],&g_597[0],&g_597[0],&g_57},{&l_1046,&l_1046,&g_597[0],&g_597[0]},{&g_597[0],&g_521,&g_597[0],(void*)0}},{{(void*)0,&g_597[0],&l_994,(void*)0},{&g_7,&g_597[0],(void*)0,&l_994},{&l_994,&l_1176,&g_597[0],&g_57},{&l_981,(void*)0,&g_521,&l_994},{&l_981,&l_1046,&l_1046,&g_597[0]},{&g_7,&l_994,&l_994,&l_1046},{&l_1046,&l_1176,&l_1064,(void*)0},{&l_1046,&l_1176,&g_597[1],&l_994}},{{(void*)0,&l_1176,&g_7,(void*)0},{&l_1046,&g_597[0],&g_521,&l_1176},{&g_7,&l_994,&l_1176,&g_57},{(void*)0,&g_521,&g_597[0],&l_981},{&l_994,&g_597[0],&g_597[0],(void*)0},{&g_597[3],&g_7,&g_597[3],(void*)0},{&g_597[0],&l_981,&g_597[0],&l_1176},{(void*)0,&l_994,&l_1046,&g_597[0]}},{{&l_1176,&l_1046,(void*)0,&l_994},{&g_597[0],&l_1176,(void*)0,&l_1176},{&l_1176,(void*)0,&l_1046,&l_1064},{(void*)0,(void*)0,&g_597[0],&g_597[0]},{&g_597[0],&g_597[0],&g_597[3],&g_597[3]},{&g_597[3],&l_1176,&g_597[0],&g_597[3]},{&l_994,&l_1176,&g_597[0],&l_994},{(void*)0,&g_521,&l_1176,&g_7}},{{&g_7,(void*)0,&g_521,&l_1046},{&l_1046,&l_1176,&g_597[0],(void*)0},{&g_597[3],&g_597[0],&l_1176,(void*)0},{&l_994,&l_981,(void*)0,(void*)0},{&l_994,&g_597[0],(void*)0,&g_597[0]},{&l_994,&l_1046,&l_1176,&g_597[0]},{&l_1176,&l_1064,&g_597[2],&g_597[0]},{&l_981,&g_597[0],&g_597[0],&l_1176}},{{&l_1046,&l_1046,&l_1046,(void*)0},{(void*)0,&l_1046,(void*)0,&g_597[0]},{(void*)0,&g_521,&l_981,&l_1064},{&g_597[0],(void*)0,&g_597[0],&l_1064},{&g_7,&g_597[0],(void*)0,&g_597[0]},{&l_1176,&l_994,&g_597[3],&g_597[3]},{&g_597[2],&g_597[2],(void*)0,(void*)0},{(void*)0,&l_1176,&l_1046,&l_1046}}};
                    unsigned short *l_1194 = (void*)0;
                    int i, j, k;
                    for (g_1114 = 19; (g_1114 == 26); g_1114 = safe_add_func_int16_t_s_s(g_1114, 4))
                    {
                        int *l_1179 = &l_981;
                        int *l_1184 = &l_1064;
                        int *l_1185[2][7];
                        int *l_1186 = &g_521;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_1185[i][j] = &l_1064;
                        }
                        return l_1186;



                    }
                    (*l_1182) = ((((l_1187[3][3][0] <= (safe_sub_func_int16_t_s_s(0x4796L, (safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((*p_18), (*l_1076))), 8))))) >= 1UL) & 0x4200L) , (*p_18));
                }
                else
                {
                    unsigned l_1203[5] = {1UL,1UL,1UL,1UL,1UL};
                    short * const l_1205 = &l_1073[0][2];
                    int i;
                    for (g_102 = (-17); (g_102 == 14); g_102 = safe_add_func_int16_t_s_s(g_102, 5))
                    {
                        unsigned l_1201 = 0x2906372CL;
                        (**g_87) = &g_597[0];
                        (**g_87) = func_19((g_597[0] , (((safe_sub_func_uint16_t_u_u(((((~((*l_1076) != l_1201)) == (safe_unary_minus_func_uint32_t_u(l_1203[3]))) <= (safe_unary_minus_func_uint8_t_u(((0xF152L > 65531UL) , (((void*)0 != l_1205) >= (&l_1182 == (void*)0)))))) , 0x168EL), l_1203[3])) > l_1201) , (void*)0)), l_1203[0], p_18, l_1201);
                    }
                }
                l_1176 = ((*l_1182) = (l_1206 | (*l_1183)));
                l_994 = ((*l_1183) = (safe_lshift_func_int16_t_s_s((g_242 = ((*l_1182) = (*l_1182))), 0)));
            }
            for (l_982 = 0; (l_982 <= 0); l_982 += 1)
            {
                int *l_1210 = &g_7;
                int i, j;
                (*g_88) = p_18;
                if (g_182[l_982])
                    continue;
                (*g_88) = l_1210;
                (*g_88) = p_18;
            }
        }
        if ((((*l_1076) = ((safe_sub_func_int16_t_s_s((&g_88 != ((*l_1076) , l_1213[7])), (*l_1076))) | (safe_rshift_func_int16_t_s_s((((*g_747) , ((*l_1076) , 0xFD76L)) != g_242), 0)))) , (*p_18)))
        {
            (**g_87) = &l_981;


            (*l_1076) = (*l_1076);
        }
        else
        {
            int *l_1216 = (void*)0;
            return l_1216;



        }


        if ((*p_18))
        {
            int l_1227 = (-3L);
            int * const l_1230 = &g_597[0];
            int *l_1237[4] = {&l_994,&l_994,&l_994,&l_994};
            int *l_1243 = &l_994;
            unsigned char * const l_1250 = (void*)0;
            unsigned char ***l_1264 = &g_187;
            unsigned short l_1280 = 0x9682L;
            int i;
            for (l_994 = 4; (l_994 >= 1); l_994 -= 1)
            {
                int l_1229 = 0L;
                int **l_1231[2];
                int **l_1232 = &g_89[1][0][2];
                int **l_1233 = &g_89[1][2][1];
                int **l_1234 = &g_208;
                int **l_1235 = &g_89[8][2][3];
                int **l_1236 = &g_208;
                char *l_1238 = &g_92;
                char **l_1270 = &l_1238;
                unsigned *l_1293 = &g_497;
                unsigned **l_1292 = &l_1293;
                unsigned l_1303 = 1UL;
                unsigned short l_1310 = 0UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_1231[i] = &g_89[8][2][3];
                if (((*g_193) != (((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(((*l_1076) = ((*l_1136) = 9UL)), 4)) ^ (safe_lshift_func_int16_t_s_s((((*g_747) < 0xFC20L) , ((((*l_1238) = ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(l_1227, l_1046)), 5)) < g_521)) <= g_238) >= 0L)), l_1239[9]))), g_57)) < 0x3DDFL) , (void*)0)))
                {
                    unsigned *l_1244 = &g_320[3][3];
                    unsigned short *l_1245[2][4][5] = {{{&g_185,&g_449,&g_238,&g_238,&g_449},{&g_449,&g_238,&g_185,&g_449,&g_449},{&g_185,&g_238,&g_449,&g_185,&g_449},{&g_449,&g_449,&g_449,&g_449,&g_185}},{{&g_185,&g_238,&g_449,&g_238,&g_185},{&g_449,&g_185,&g_449,&g_449,&g_185},{&g_449,&g_449,&g_185,&g_238,&g_185},{&g_185,&g_449,&g_185,&g_449,&g_238}}};
                    unsigned short **l_1246[7][3][5] = {{{&g_747,&l_1245[0][3][3],&g_747,&l_1245[0][3][3],&l_1245[1][1][3]},{(void*)0,&l_1245[0][3][3],&g_747,&l_1245[1][0][0],(void*)0},{(void*)0,&l_1245[0][3][3],(void*)0,(void*)0,&g_747}},{{&l_1245[0][3][3],&l_1245[0][3][3],&l_1245[0][3][3],&g_747,&l_1245[0][3][3]},{&l_1245[0][3][3],&l_1245[0][3][3],(void*)0,&g_747,&l_1245[0][3][3]},{&l_1245[0][3][3],&l_1245[0][3][3],(void*)0,&l_1245[0][3][3],&l_1245[0][3][3]}},{{&l_1245[0][3][3],(void*)0,&g_747,&l_1245[0][3][3],&g_747},{&g_747,&l_1245[0][3][3],&g_747,&g_747,&g_747},{&l_1245[0][3][3],(void*)0,&l_1245[0][0][4],(void*)0,&g_747}},{{&g_747,&g_747,&l_1245[0][3][3],&g_747,&l_1245[0][3][3]},{&g_747,&l_1245[0][3][3],&g_747,&l_1245[1][0][0],&l_1245[0][3][3]},{&l_1245[0][3][3],&l_1245[0][3][3],(void*)0,&l_1245[0][3][3],&l_1245[0][3][3]}},{{&g_747,&l_1245[1][1][3],&l_1245[0][3][3],&g_747,&g_747},{&l_1245[0][3][3],&g_747,&l_1245[0][3][3],&l_1245[0][3][3],(void*)0},{&l_1245[0][3][3],(void*)0,(void*)0,&l_1245[0][3][3],&l_1245[1][1][3]}},{{&l_1245[1][1][1],&l_1245[0][3][3],&g_747,&g_747,&l_1245[0][3][3]},{&l_1245[0][3][3],&g_747,&l_1245[0][3][3],&g_747,&g_747},{&l_1245[0][3][3],&l_1245[0][3][3],&l_1245[0][3][1],&l_1245[0][3][3],&l_1245[0][3][3]}},{{&l_1245[0][3][3],&l_1245[0][3][3],&l_1245[0][3][3],&g_747,&l_1245[1][3][3]},{&l_1245[0][3][3],&l_1245[0][1][2],&g_747,&l_1245[0][3][3],&g_747},{&g_747,&g_747,&l_1245[0][0][4],&l_1245[0][3][3],&l_1245[0][3][3]}}};
                    unsigned short *l_1248[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    unsigned l_1251 = 0x6303C3A0L;
                    int i, j, k;
                    (*g_88) = p_18;
                    (*g_1228) = (g_80[2][2] , l_1251);
                    for (g_794 = 0; (g_794 <= 3); g_794 += 1)
                    {
                        int i;
                        (*l_1232) = l_1237[g_794];
                    }
                }
                else
                {
                    unsigned short ***l_1252 = &g_746;
                    int l_1253[1][8][2] = {{{4L,4L},{4L,0x129C654AL},{0xE2CE4AF3L,7L},{0x129C654AL,7L},{0xE2CE4AF3L,0x129C654AL},{4L,4L},{4L,0x129C654AL},{0xE2CE4AF3L,7L}}};
                    int i, j, k;
                    (*l_1235) = p_18;
                    (*l_1252) = (void*)0;

                    ;
                    for (g_324 = 0; (g_324 <= 2); g_324 += 1)
                    {
                        (*l_1076) = 1L;
                    }
                    for (g_92 = 2; (g_92 >= 0); g_92 -= 1)
                    {
                        unsigned *l_1260 = &g_79;
                        int **l_1261 = &g_89[8][1][3];
                        int i, j;
                        (*l_1076) = ((*l_1230) = (((l_1253[0][3][0] = l_1073[l_994][(l_994 + 1)]) , ((*l_1260) = (safe_mul_func_uint8_t_u_u((l_1073[g_92][(g_92 + 3)] == (g_114[g_92] != (safe_add_func_uint8_t_u_u(func_39(&g_521), g_114[g_92])))), (safe_lshift_func_uint16_t_u_u(((*l_1247) = (*g_747)), 15)))))) || 0x0FCF1730L));
                        (*l_1261) = l_1230;
                        (*l_1236) = &l_1253[0][3][0];

                        ;
                    }


                }
                (*l_1076) = (safe_lshift_func_int8_t_s_s(((*l_1238) = ((l_1264 != ((((*p_18) | ((((+0xFD1730B5L) , (*l_1243)) & (g_794 < (((*l_1230) ^ (*l_1243)) | l_1265))) != (*p_18))) | (*g_1228)) , &g_187)) && (*g_747))), 2));
                (*g_1228) = (safe_mod_func_int8_t_s_s((l_1250 != ((*l_1270) = ((safe_lshift_func_uint8_t_u_u(0x55L, 6)) , &g_102))), ((((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u((*l_1076), (*l_1076))) >= (safe_lshift_func_int16_t_s_u((0x2A0A7D9EL > (*p_18)), ((((safe_sub_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(l_1280)), g_320[4][3])) <= (*l_1076)) >= l_1281) && (*l_1076))))), (*l_1230))) != (*l_1076)) < (*l_1230)) , (*l_1243))));

                ;
                if ((*p_18))
                    break;
                for (l_1281 = 0; (l_1281 <= 2); l_1281 += 1)
                {
                    int *l_1282 = &l_994;
                    int *l_1288 = (void*)0;
                    int l_1301[5];
                    short *l_1302[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1301[i] = 0L;
                    for (g_185 = 0; (g_185 <= 4); g_185 += 1)
                    {
                        int * const l_1289 = &l_981;
                        unsigned ***l_1294 = &l_1292;
                        unsigned *l_1295 = (void*)0;
                        unsigned *l_1296 = &g_320[3][3];
                        int *l_1297[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_1297[i] = (void*)0;
                        (**g_87) = func_19(func_19(&l_1046, l_1073[g_185][(g_185 + 2)], l_1282, ((safe_add_func_uint16_t_u_u(((*g_747) = l_1187[(l_1281 + 1)][l_1281][l_1281]), g_57)) < (((((safe_add_func_int8_t_s_s((-1L), l_1073[g_185][(g_185 + 2)])) == (*l_1243)) >= 1UL) >= g_1287) , l_1187[(l_1281 + 1)][l_1281][l_1281]))), (*l_1076), l_1288, g_102);
                        l_1290 = func_39(l_1289);
                        (**g_87) = func_19(l_1237[1], (*l_1076), &l_994, (g_80[1][0] = ((((g_1291 == ((*l_1294) = l_1292)) != ((*l_1296) = (g_597[0] == g_114[0]))) | (func_39(func_19((func_39(p_18) , l_1295), (*l_1243), p_18, g_238)) != (*l_1076))) >= (*l_1289))));
                    }
                    if ((((*l_1247) = ((*l_1249) = ((1L & ((*l_1076) = ((func_39(p_18) && func_39(&g_597[0])) > 0xD9L))) < (safe_mod_func_int32_t_s_s(((g_242 = ((g_168 , (*g_493)) != (l_1301[4] = ((*g_747) ^ l_1300)))) >= 65526UL), (*l_1282)))))) , (*p_18)))
                    {
                        g_193 = &g_194[7];
                        l_1303 = (*g_493);
                    }
                    else
                    {
                        const char l_1321 = 0xC5L;
                        char *l_1322[5][2][7] = {{{&l_1187[1][2][0],&l_1187[0][2][2],&l_1187[0][2][2],&l_1187[1][2][0],&l_1187[1][2][0],&l_1187[0][2][2],&l_1187[0][2][2]},{&g_92,&l_1187[3][3][0],&g_92,&l_1187[3][3][0],&g_92,&l_1187[3][3][0],&g_92}},{{&l_1187[1][2][0],&l_1187[1][2][0],&l_1187[0][2][2],&l_1187[0][2][2],&l_1187[1][2][0],&l_1187[1][2][0],&l_1187[0][2][2]},{(void*)0,&l_1187[3][3][0],(void*)0,&l_1187[3][3][0],(void*)0,&l_1187[3][3][0],(void*)0}},{{&l_1187[1][2][0],&l_1187[0][2][2],&l_1187[0][2][2],&l_1187[1][2][0],&l_1187[1][2][0],&l_1187[0][2][2],&l_1187[0][2][2]},{&g_92,&l_1187[3][3][0],&g_92,&l_1187[3][3][0],&g_92,&l_1187[3][3][0],&g_92}},{{&l_1187[1][2][0],&l_1187[1][2][0],&l_1187[0][2][2],&l_1187[0][2][2],&l_1187[1][2][0],&l_1187[1][2][0],&l_1187[0][2][2]},{(void*)0,&l_1187[3][3][0],(void*)0,&l_1187[3][3][0],(void*)0,&l_1187[3][3][0],(void*)0}},{{&l_1187[1][2][0],&l_1187[0][2][2],&l_1187[0][2][2],&l_1187[1][2][0],&l_1187[1][2][0],&l_1187[0][2][2],&l_1187[0][2][2]},{&g_92,&l_1187[3][3][0],&g_92,&l_1187[3][3][0],&g_92,&l_1187[3][3][0],&g_92}}};
                        int l_1323 = 1L;
                        int i, j, k;
                        (*l_1234) = p_18;


                    }
                    if ((*p_18))
                        break;
                    for (l_1046 = 2; (l_1046 >= 0); l_1046 -= 1)
                    {
                        int *l_1325 = &g_57;
                        (*l_1236) = l_1325;

                        ;
                    }
                }
            }



        }
        else
        {
            (*l_1076) = (safe_lshift_func_int16_t_s_u(0x936AL, 12));
        }



    }




    return g_1328;



}







static int * func_19(const int * p_20, const unsigned p_21, int * p_22, int p_23)
{
    int *l_977 = &g_57;
    (*g_88) = l_977;
    return p_22;


}







static const int * func_24(unsigned char p_25, int * p_26, int * p_27)
{
    int l_34[2];
    int *l_520 = &g_521;
    int l_952[7][3] = {{1L,(-4L),(-4L)},{1L,(-4L),(-4L)},{1L,(-4L),(-4L)},{1L,(-4L),(-4L)},{1L,(-4L),(-4L)},{1L,(-4L),(-4L)},{1L,(-4L),(-4L)}};
    int *l_953 = &g_57;
    int l_954 = 0L;
    char ***l_965 = &g_295;
    char ***l_967[7][2][7] = {{{&g_295,&g_295,&g_295,&g_295,&g_295,&g_295,(void*)0},{&g_295,&g_295,&g_295,&g_295,&g_295,&g_295,&g_295}},{{&g_295,&g_295,&g_295,&g_295,&g_295,(void*)0,(void*)0},{&g_295,&g_295,&g_295,&g_295,&g_295,&g_295,(void*)0}},{{&g_295,&g_295,&g_295,&g_295,&g_295,&g_295,&g_295},{&g_295,&g_295,&g_295,&g_295,&g_295,(void*)0,(void*)0}},{{&g_295,&g_295,&g_295,&g_295,&g_295,(void*)0,&g_295},{(void*)0,&g_295,&g_295,&g_295,&g_295,(void*)0,&g_295}},{{&g_295,&g_295,&g_295,&g_295,&g_295,&g_295,&g_295},{&g_295,&g_295,&g_295,&g_295,&g_295,(void*)0,&g_295}},{{(void*)0,&g_295,&g_295,&g_295,&g_295,(void*)0,&g_295},{&g_295,&g_295,&g_295,&g_295,&g_295,&g_295,&g_295}},{{&g_295,&g_295,&g_295,&g_295,&g_295,(void*)0,&g_295},{(void*)0,&g_295,&g_295,&g_295,&g_295,(void*)0,&g_295}}};
    unsigned ***l_975 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_34[i] = (-5L);
    l_954 = ((*l_953) = (l_952[6][0] = ((*l_520) = (safe_sub_func_int16_t_s_s(func_30(l_34[1], ((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((void*)0 != p_27) | func_39(func_41(l_34[1]))), ((*l_520) = l_34[1]))), 0x3513L)) , ((((safe_mul_func_uint8_t_u_u(((*l_520) < g_168), 0x50L)) , (void*)0) != (void*)0) , (*l_520))), g_182[0]), g_449)))));





    ;
    for (g_449 = 0; (g_449 <= 3); g_449 += 1)
    {
        const int l_957 = 0L;
        unsigned l_958[5][1][5] = {{{0x7AB09947L,8UL,0x85CBBDE6L,0x4F4A19A3L,0x4F4A19A3L}},{{1UL,8UL,1UL,0UL,8UL}},{{0x4F4A19A3L,0xA40A8FEDL,0UL,0x4F4A19A3L,0UL}},{{0x4F4A19A3L,0x4F4A19A3L,0x85CBBDE6L,8UL,0x7AB09947L}},{{1UL,0x7AB09947L,0UL,0UL,0x7AB09947L}}};
        int i, j, k;
        g_597[g_449] = ((safe_lshift_func_uint16_t_u_u((*g_747), 9)) , l_958[2][0][1]);
        for (g_168 = 0; (g_168 <= (-4)); --g_168)
        {
            char ****l_966 = &l_965;
            char ****l_968 = &l_967[6][1][6];
            short *l_969 = &g_242;
            int l_970 = 0xFDBC523EL;
            unsigned char *l_971 = &g_114[2];
            unsigned char *l_972 = &g_324;
            unsigned *l_973 = &g_79;
            unsigned short *l_974 = &g_185;
            (*g_88) = &g_597[0];
            if ((*p_27))
                continue;
            (*l_520) = (safe_lshift_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((+((*l_974) = (p_25 < ((((*l_966) = l_965) != ((*l_968) = l_967[6][1][6])) != (((*l_969) = (g_238 ^ 0xFA1CL)) <= (((*l_973) = (((*l_953) = (((*l_972) = ((*l_971) = (p_25 < ((l_970 ^ g_320[3][3]) <= 0x551EL)))) <= 0xBDL)) && p_25)) ^ (*p_27))))))), p_25)) , (void*)0) != l_975), p_25));
            g_208 = ((**g_87) = (void*)0);

            ;
        }
        if ((*g_493))
            break;
    }


    (*g_88) = p_26;
    return p_27;


}







static const short func_30(short p_31, const short p_32, short p_33)
{
    unsigned l_524 = 2UL;
    int l_525 = (-9L);
    int * const l_530 = &g_57;
    unsigned short l_602[6] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
    char ***l_609 = &g_295;
    short l_634[5] = {5L,5L,5L,5L,5L};
    unsigned l_640 = 0x322A4E13L;
    int l_643 = 0xD67BF3BAL;
    unsigned char **l_702 = &g_113;
    unsigned char ***l_703 = &g_187;
    unsigned char *l_706 = &g_324;
    short *l_707[3][9][1] = {{{&g_242},{&l_634[4]},{(void*)0},{(void*)0},{&l_634[4]},{&g_242},{&l_634[4]},{&g_242},{(void*)0}},{{&g_242},{&l_634[4]},{&l_634[3]},{&l_634[4]},{(void*)0},{(void*)0},{&l_634[4]},{&l_634[3]},{&l_634[4]}},{{&g_242},{(void*)0},{&g_242},{&l_634[4]},{&l_634[3]},{&l_634[4]},{(void*)0},{(void*)0},{&l_634[4]}}};
    unsigned short *l_708 = &l_602[5];
    int l_709 = 0x85E1E49CL;
    unsigned l_710 = 0UL;
    int l_717 = (-1L);
    int *l_754 = &l_709;
    int *l_814[2];
    const int *l_894 = &l_709;
    int *l_899 = &g_597[0];
    int l_930 = 0xE12153F6L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_814[i] = &l_709;
    if (l_524)
    {
        const unsigned short l_538 = 65529UL;
        char *l_539 = &g_92;
        for (g_497 = 0; (g_497 <= 0); g_497 += 1)
        {
            int i;
            l_525 = g_182[g_497];
        }
        (*l_530) = (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(p_31, func_39(l_530))), (safe_rshift_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(p_31)) && ((*l_539) = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_538 <= ((((p_31 < l_538) <= l_538) | p_31) < p_32)), 0)), 6)))), l_538))));
        (**g_87) = &l_525;


    }
    else
    {
        int *l_540 = &g_521;
        int *l_565 = &l_525;
        int *l_596 = (void*)0;
        short l_611 = (-1L);
        int l_626 = (-5L);
        char *l_635 = &g_102;
        unsigned char ***l_648[4] = {&g_187,&g_187,&g_187,&g_187};
        const int *l_680 = &g_597[0];
        int i;
        (*g_88) = l_540;


        for (g_465 = 0; (g_465 != 4); ++g_465)
        {
            int l_566[5][2] = {{(-1L),(-2L)},{(-1L),(-1L)},{(-2L),(-1L)},{(-1L),(-2L)},{(-1L),(-1L)}};
            int i, j;
            if (p_32)
                break;
            if (p_31)
                continue;
            for (g_79 = (-17); (g_79 > 40); g_79++)
            {
                const char l_555[10][9][2] = {{{0x66L,(-10L)},{0xE1L,6L},{(-6L),(-1L)},{7L,0x7EL},{0x66L,0x66L},{0xF9L,0x7EL},{0xE1L,(-1L)},{(-10L),6L},{7L,(-10L)}},{{0xF9L,0x3BL},{0xF9L,(-10L)},{7L,6L},{(-10L),(-1L)},{0xE1L,0x7EL},{0xF9L,0x66L},{0x66L,0x7EL},{7L,(-1L)},{(-6L),6L}},{{0xE1L,(-10L)},{0x66L,0x3BL},{0x66L,(-10L)},{0xE1L,6L},{(-6L),(-1L)},{7L,0x7EL},{0x66L,0x66L},{0xF9L,0x7EL},{0xE1L,(-1L)}},{{(-10L),6L},{7L,(-10L)},{0xF9L,0x3BL},{0xE1L,(-3L)},{(-1L),0x7EL},{(-3L),(-10L)},{0xC2L,6L},{0xE1L,7L},{7L,6L}},{{(-1L),(-10L)},{0xA1L,0x7EL},{0xC2L,(-3L)},{7L,(-6L)},{7L,(-3L)},{0xC2L,0x7EL},{0xA1L,(-10L)},{(-1L),6L},{7L,7L}},{{0xE1L,6L},{0xC2L,(-10L)},{(-3L),0x7EL},{(-1L),(-3L)},{0xE1L,(-6L)},{0xE1L,(-3L)},{(-1L),0x7EL},{(-3L),(-10L)},{0xC2L,6L}},{{0xE1L,7L},{7L,6L},{(-1L),(-10L)},{0xA1L,0x7EL},{0xC2L,(-3L)},{7L,(-6L)},{7L,(-3L)},{0xC2L,0x7EL},{0xA1L,(-10L)}},{{(-1L),6L},{7L,7L},{0xE1L,6L},{0xC2L,(-10L)},{(-3L),0x7EL},{(-1L),(-3L)},{0xE1L,(-6L)},{0xE1L,(-3L)},{(-1L),0x7EL}},{{(-3L),(-10L)},{0xC2L,6L},{0xE1L,7L},{7L,6L},{(-1L),(-10L)},{0xA1L,0x3BL},{0xA1L,7L},{(-10L),0x7EL},{(-10L),7L}},{{0xA1L,0x3BL},{0xE1L,0x66L},{(-3L),(-6L)},{(-10L),(-10L)},{(-6L),(-6L)},{0xA1L,0x66L},{7L,0x3BL},{(-3L),7L},{(-6L),0x7EL}}};
                int i, j, k;
                (*g_88) = (func_39(&l_525) , &l_525);
                for (g_238 = (-19); (g_238 > 20); ++g_238)
                {
                    unsigned *l_551[8][5] = {{&g_320[4][0],&g_320[3][3],(void*)0,(void*)0,&g_320[3][3]},{&g_320[3][3],&g_320[3][3],&g_320[3][3],&g_320[3][3],&g_320[0][3]},{&g_320[0][2],&g_320[3][3],(void*)0,&g_320[3][3],&g_320[3][3]},{&g_320[0][2],(void*)0,&g_320[0][3],(void*)0,&g_320[0][2]},{&g_320[3][3],(void*)0,&g_320[4][0],&g_320[3][3],&g_320[3][3]},{&g_320[4][0],(void*)0,&g_320[3][3],&g_320[3][3],(void*)0},{&g_320[0][3],(void*)0,&g_320[0][2],(void*)0,&g_320[3][3]},{(void*)0,&g_320[3][3],&g_320[0][2],&g_320[1][0],&g_320[0][2]}};
                    int l_552[3];
                    int **l_557 = &g_89[8][2][3];
                    int **l_558 = &g_208;
                    int **l_559 = &g_89[8][2][3];
                    int **l_560[7][4][3] = {{{&g_208,&l_540,&g_208},{&g_208,&g_89[0][2][2],&l_540},{&g_89[7][1][1],&g_208,&g_208},{&l_540,&g_89[8][2][3],&l_540}},{{(void*)0,&g_89[7][1][1],&g_208},{&l_540,(void*)0,&g_208},{&g_89[7][1][1],(void*)0,&g_89[6][1][0]},{&g_208,(void*)0,&g_208}},{{&g_208,&g_89[7][1][1],&l_540},{&l_540,&g_89[8][2][3],&g_208},{&l_540,&g_89[7][1][1],(void*)0},{&g_208,&g_208,&l_540}},{{&g_208,&g_208,&g_89[6][1][0]},{&g_89[8][1][3],&g_89[8][2][3],&g_89[6][2][2]},{&g_89[7][1][1],&g_208,&g_89[7][1][1]},{&l_540,&g_208,&g_208}},{{(void*)0,&g_89[7][1][1],&g_89[7][1][1]},{&g_208,&g_89[0][2][2],&g_89[6][2][2]},{&g_208,(void*)0,&g_89[6][1][0]},{&g_208,&l_540,&l_540}},{{(void*)0,&g_208,(void*)0},{&l_540,&l_540,&l_540},{&g_89[7][1][1],(void*)0,&g_208},{&g_89[8][1][3],&g_89[0][2][2],&l_540}},{{&g_208,&g_89[7][1][1],(void*)0},{&g_208,&g_208,&l_540},{&g_208,&g_208,&g_89[6][1][0]},{&g_89[8][1][3],&g_89[8][2][3],&g_89[6][2][2]}}};
                    int **l_561 = &g_208;
                    int **l_562 = (void*)0;
                    int **l_563 = (void*)0;
                    int **l_564 = &g_89[8][2][3];
                    char *l_567 = &g_92;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_552[i] = 0xD4263534L;
                    (**g_87) = (void*)0;
                    if ((((0xD612L <= ((safe_sub_func_uint8_t_u_u(((*l_540) , p_33), (l_566[3][1] = p_32))) < 0xCA60C2E2L)) , l_567) != &l_555[3][5][1]))
                    {
                        unsigned char l_568 = 0x63L;
                        int l_571[9][2] = {{0x6B1A5A36L,1L},{1L,0x6B1A5A36L},{(-1L),0x75A531C5L},{(-1L),0x6B1A5A36L},{1L,1L},{0x6B1A5A36L,(-1L)},{0x75A531C5L,(-1L)},{0x6B1A5A36L,1L},{1L,0x6B1A5A36L}};
                        int i, j;
                        (*l_530) = (l_568 = (0x63B0507BL != l_566[1][0]));
                        if ((*l_565))
                            break;
                        l_571[3][0] = (safe_mul_func_uint16_t_u_u(p_33, ((*l_530) = 65533UL)));
                    }
                    else
                    {
                        int **l_573 = &g_89[5][3][3];
                        (*l_540) = func_39(((*l_573) = g_572[2]));
                        (*l_565) = p_33;
                        if (p_32)
                            continue;
                        (*l_530) = (func_39(l_565) < g_114[2]);
                    }
                }
                if ((*l_565))
                    continue;
            }
        }


        if ((func_39(l_565) || (safe_unary_minus_func_uint16_t_u(p_32))))
        {
            int * const l_577[6][8] = {{(void*)0,&g_7,&g_521,&l_525,&g_521,&g_7,&g_7,&g_521},{&g_57,(void*)0,(void*)0,&g_7,&l_525,&g_7,(void*)0,(void*)0},{&g_7,&g_7,&g_521,&g_521,(void*)0,&g_57,&g_521,(void*)0},{&g_521,&l_525,&g_521,&g_7,(void*)0,(void*)0,&g_7,&g_521},{&g_7,&g_7,(void*)0,&g_7,&g_521,&g_521,&l_525,&g_521},{&g_521,&g_521,&l_525,&g_521,&l_525,&g_521,&l_525,&g_521}};
            unsigned l_595 = 0x3C7B043DL;
            int *l_598 = &g_7;
            int i, j;
            for (g_521 = 0; (g_521 >= 18); g_521++)
            {
                short *l_580[3];
                int l_599 = 0L;
                unsigned char l_600[5][5][5] = {{{0UL,0x1AL,9UL,0x1AL,0UL},{0x9AL,0x1AL,249UL,0x6EL,0UL},{0UL,0x6EL,249UL,0x1AL,0x9AL},{0UL,0x1AL,9UL,0x1AL,0UL},{0x9AL,0x1AL,249UL,0x6EL,0UL}},{{0UL,0x6EL,249UL,0x1AL,0x9AL},{0UL,0x1AL,9UL,0x1AL,0UL},{0x9AL,0x1AL,249UL,0x6EL,0UL},{0UL,0x6EL,249UL,0x1AL,0x9AL},{0UL,0x1AL,9UL,0x1AL,0UL}},{{0x9AL,0x1AL,249UL,0x6EL,0UL},{0UL,0x6EL,249UL,0x1AL,0x9AL},{0UL,0x1AL,9UL,0x1AL,0UL},{0x9AL,0x1AL,249UL,0x6EL,0UL},{0UL,249UL,0x9AL,0x7BL,4UL}},{{1UL,0x7BL,1UL,0x7BL,1UL},{4UL,0x7BL,0x9AL,249UL,1UL},{1UL,249UL,0x9AL,0x7BL,4UL},{1UL,0x7BL,1UL,0x7BL,1UL},{4UL,0x7BL,0x9AL,249UL,1UL}},{{1UL,249UL,0x9AL,0x7BL,4UL},{1UL,0x7BL,1UL,0x7BL,1UL},{4UL,0x7BL,0x9AL,249UL,1UL},{1UL,249UL,0x9AL,0x7BL,4UL},{1UL,0x7BL,1UL,0x7BL,1UL}}};
                unsigned *l_601[9] = {&g_79,&l_595,&g_79,&l_595,&g_79,&l_595,&g_79,&l_595,&g_79};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_580[i] = &g_242;
                l_599 = (((8UL ^ ((p_31 != ((*l_530) = (safe_add_func_int8_t_s_s(p_31, (((p_33 = (-1L)) <= 0x4683L) > (((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(0x90FCL, (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(((l_599 & l_600[0][0][2]) != (*l_530)), g_57)) , p_31), (*l_598))))), 4294967295UL)) == (*l_598)) != (*l_530))))))) ^ l_602[0])) , 3L) ^ 0x87A11EF6L);
                return p_32;


            }
        }
        else
        {
            unsigned char l_610 = 251UL;
            char *l_618 = &g_102;
            char **l_619 = &l_618;
            const int l_622[5][6] = {{7L,0x889E3087L,0xD8E1AB58L,0xD8E1AB58L,0x889E3087L,7L},{(-1L),7L,0x67A5CCFEL,0x889E3087L,0x67A5CCFEL,7L},{0x67A5CCFEL,(-1L),0xD8E1AB58L,(-1L),(-1L),0xD8E1AB58L},{0x67A5CCFEL,0x67A5CCFEL,(-1L),0x889E3087L,1L,0x889E3087L},{(-1L),0x67A5CCFEL,(-1L),0xD8E1AB58L,(-1L),(-1L)}};
            unsigned *l_623[1];
            int *l_624 = (void*)0;
            int *l_625[10][6][3] = {{{&g_597[1],&g_597[3],&g_7},{&g_7,&g_597[0],&g_597[0]},{&g_597[0],&g_597[3],&g_597[0]},{&g_7,&g_597[0],&g_597[0]},{&g_7,&g_597[3],&g_597[0]},{&g_597[0],&g_597[0],&g_7}},{{&g_597[1],&g_597[0],&g_597[0]},{&g_597[0],&g_597[0],&g_597[0]},{&g_7,&g_7,&g_597[3]},{&g_7,&g_597[3],&g_597[0]},{&g_597[0],&g_597[1],&g_7},{&g_7,&g_7,&g_7}},{{&g_597[1],&g_597[0],&g_7},{&g_597[0],&g_597[1],&g_597[0]},{&g_597[0],&g_597[1],&g_597[3]},{(void*)0,&g_597[0],&g_597[0]},{(void*)0,&g_7,&g_597[0]},{&g_597[0],&g_597[1],&g_7}},{{&g_7,&g_7,&g_597[0]},{&g_597[0],&g_597[0],&g_597[0]},{&g_7,&g_597[1],&g_597[0]},{&g_597[3],&g_597[1],&g_597[0]},{&g_597[0],&g_597[0],&g_7},{&g_597[0],&g_7,&g_597[0]}},{{&g_597[0],&g_597[1],&g_597[1]},{&g_597[3],&g_597[3],&g_7},{&g_7,&g_7,&g_597[3]},{&g_597[0],&g_597[0],&g_597[3]},{&g_7,&g_597[0],&g_597[3]},{&g_597[0],&g_597[0],&g_597[3]}},{{(void*)0,&g_597[3],&g_597[3]},{(void*)0,&g_597[0],&g_7},{&g_597[0],&g_597[3],&g_7},{&g_597[0],&g_7,(void*)0},{&g_7,&g_597[0],&g_597[3]},{&g_597[3],&g_7,&g_7}},{{&g_597[0],(void*)0,&g_597[0]},{&g_597[0],(void*)0,&g_597[0]},{&g_597[1],&g_7,&g_597[3]},{&g_7,&g_7,&g_597[0]},{&g_597[1],&g_597[3],&g_597[0]},{&g_7,&g_597[1],&g_597[3]}},{{&g_597[1],&g_597[1],(void*)0},{&g_597[0],&g_597[0],&g_7},{&g_597[0],&g_7,&g_597[1]},{&g_597[3],&g_597[0],&g_7},{&g_7,&g_597[0],&g_597[1]},{&g_597[0],&g_597[0],&g_7}},{{(void*)0,&g_597[1],(void*)0},{&g_597[0],&g_597[0],&g_597[3]},{&g_597[1],&g_597[0],&g_597[0]},{&g_597[3],&g_7,&g_597[0]},{&g_597[0],&g_597[0],&g_597[3]},{&g_597[0],&g_597[0],&g_597[0]}},{{&g_597[0],&g_597[1],&g_597[0]},{(void*)0,&g_597[0],&g_7},{&g_597[3],&g_597[0],&g_597[3]},{&g_597[0],&g_597[0],(void*)0},{&g_597[3],&g_7,&g_7},{(void*)0,&g_597[0],&g_7}}};
            unsigned char ****l_629 = (void*)0;
            unsigned char ****l_630[5][4] = {{(void*)0,&g_186[0],(void*)0,(void*)0},{&g_186[0],&g_186[0],(void*)0,&g_186[0]},{&g_186[0],(void*)0,(void*)0,&g_186[0]},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_186[0],(void*)0}};
            unsigned short *l_633[2][2] = {{&g_449,&g_449},{&g_449,&g_449}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_623[i] = &g_497;
            l_626 = (safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u((((l_609 != (void*)0) > ((*l_540) = (((l_610 = p_31) >= (((!((((*l_530) = (l_611 < 0x6D8DL)) == (safe_sub_func_uint8_t_u_u(((l_525 = ((safe_add_func_int16_t_s_s((p_31 >= (safe_rshift_func_int16_t_s_s((((*l_619) = l_618) != (((safe_lshift_func_uint8_t_u_u(((((((-7L) | ((p_33 == p_32) == p_31)) ^ p_33) && l_622[4][4]) <= p_32) , 1UL), p_32)) < p_33) , (void*)0)), g_597[3]))), p_31)) , g_168)) , 0UL), l_622[4][4]))) , g_80[2][2])) || g_185) > 0x4BL)) | 4294967295UL))) && p_31), l_622[2][0])) <= g_449), l_622[2][1])) , (*l_530)), p_31));
            for (l_610 = 0; (l_610 <= 0); l_610 += 1)
            {
                char l_627 = (-6L);
                int *l_628 = &g_7;
                l_627 = p_33;
                for (g_497 = 0; (g_497 <= 0); g_497 += 1)
                {
                    (**g_87) = l_628;
                    for (p_33 = 0; (p_33 <= 3); p_33 += 1)
                    {
                        int i, j, k;
                        (*l_540) = (-1L);
                    }
                }
            }
            if ((((g_186[8] = &g_187) != (void*)0) || (((safe_add_func_uint32_t_u_u((((func_39(&l_525) >= ((p_32 > (g_238 = g_182[0])) , ((*l_565) , (((&l_619 == &g_295) && 0x673AL) > 0x23A87957L)))) | p_32) , (*l_530)), (*l_565))) & (-1L)) && l_634[4])))
            {
                unsigned short l_644 = 0UL;
                short *l_645 = &l_611;
                unsigned l_646 = 1UL;
                unsigned char ***l_647 = &g_187;
                const unsigned l_654 = 4294967295UL;
                unsigned short l_656 = 0xD5CAL;
                if (((l_635 == (g_57 , (*l_619))) <= p_31))
                {
                    const unsigned *l_649 = (void*)0;
                    int l_655[7][9][4] = {{{0x11831C80L,0x05A8C3CFL,0x11831C80L,0xD2316A52L},{0L,7L,(-10L),0xAC2376C8L},{0x05A8C3CFL,0x90251D65L,(-8L),7L},{0xA31A9C7DL,0L,(-8L),0x49B6499AL},{0x05A8C3CFL,(-1L),(-10L),0x2F164E26L},{0L,0x11831C80L,0x11831C80L,0L},{0x11831C80L,0L,0x90251D65L,0xA31A9C7DL},{(-1L),0x05A8C3CFL,0x002BB6F6L,0xAC2376C8L},{0L,0xA31A9C7DL,0xD2316A52L,0xAC2376C8L}},{{0x90251D65L,0x05A8C3CFL,(-8L),0xA31A9C7DL},{7L,0L,0x3D56C274L,0L},{0x05A8C3CFL,0x11831C80L,0xD2316A52L,0x2F164E26L},{0x49B6499AL,(-1L),0x11831C80L,0x49B6499AL},{(-1L),0L,6L,7L},{(-1L),0x90251D65L,0x11831C80L,0xAC2376C8L},{0x49B6499AL,7L,0xD2316A52L,0xD2316A52L},{0x05A8C3CFL,0x05A8C3CFL,0x3D56C274L,7L},{7L,0x49B6499AL,(-8L),0L}},{{0x90251D65L,(-1L),0xD2316A52L,(-8L)},{0L,(-1L),0x002BB6F6L,0L},{(-1L),0x49B6499AL,0x90251D65L,7L},{0x49B6499AL,0x2F164E26L,0x49B6499AL,0xA31A9C7DL},{0x6F7296A2L,(-1L),(-8L),7L},{0x2F164E26L,(-8L),0xD2316A52L,(-1L)},{0x11831C80L,0x6F7296A2L,0xD2316A52L,(-1L)},{0x2F164E26L,0L,(-8L),0xAC2376C8L},{0x6F7296A2L,0x49B6499AL,0x49B6499AL,0x6F7296A2L}},{{0x49B6499AL,0x6F7296A2L,(-8L),0x11831C80L},{0L,0x2F164E26L,0xA691F352L,7L},{0x6F7296A2L,0x11831C80L,0xA31A9C7DL,7L},{(-8L),0x2F164E26L,0xD2316A52L,0x11831C80L},{(-1L),0x6F7296A2L,(-10L),0x6F7296A2L},{0x2F164E26L,0x49B6499AL,0xA31A9C7DL,0xAC2376C8L},{(-1L),0L,0x49B6499AL,(-1L)},{0L,0x6F7296A2L,0x3D56C274L,(-1L)},{0L,(-8L),0x49B6499AL,7L}},{{(-1L),(-1L),0xA31A9C7DL,0xA31A9C7DL},{0x2F164E26L,0x2F164E26L,(-10L),(-1L)},{(-1L),(-1L),0xD2316A52L,0x6F7296A2L},{(-8L),0L,0xA31A9C7DL,0xD2316A52L},{0x6F7296A2L,0L,0xA691F352L,0x6F7296A2L},{0L,(-1L),(-8L),(-1L)},{0x49B6499AL,0x2F164E26L,0x49B6499AL,0xA31A9C7DL},{0x6F7296A2L,(-1L),(-8L),7L},{0x2F164E26L,(-8L),0xD2316A52L,(-1L)}},{{(-10L),0x11831C80L,6L,0x002BB6F6L},{(-1L),0xA31A9C7DL,0x2F164E26L,0x90251D65L},{0x11831C80L,(-8L),(-8L),0x11831C80L},{(-8L),0x11831C80L,0x4CB7C6A8L,(-10L)},{0xA31A9C7DL,(-1L),7L,(-8L)},{0x11831C80L,(-10L),0x3D56C274L,(-8L)},{0x4CB7C6A8L,(-1L),6L,(-10L)},{0xD2316A52L,0x11831C80L,0x05A8C3CFL,0x11831C80L},{(-1L),(-8L),0x3D56C274L,0x90251D65L}},{{0x002BB6F6L,0xA31A9C7DL,(-8L),0x002BB6F6L},{0xA31A9C7DL,0x11831C80L,0x6F7296A2L,0xD2316A52L},{0xA31A9C7DL,0x4CB7C6A8L,(-8L),(-8L)},{0x002BB6F6L,0xD2316A52L,0x3D56C274L,0x3D56C274L},{(-1L),(-1L),0x05A8C3CFL,0xD2316A52L},{0xD2316A52L,0x002BB6F6L,6L,0x11831C80L},{0x4CB7C6A8L,0xA31A9C7DL,0x3D56C274L,6L},{0x11831C80L,0xA31A9C7DL,7L,0x11831C80L},{0xA31A9C7DL,0x002BB6F6L,0x4CB7C6A8L,0xD2316A52L}}};
                    int i, j, k;
                    (**g_87) = &g_57;
                    for (g_238 = 0; (g_238 <= 3); g_238 += 1)
                    {
                        return g_320[3][3];


                    }
                    (*l_540) = (&l_646 == (((*l_565) = p_32) , l_649));
                    (*l_530) = (0L != ((p_31 , g_57) < (safe_sub_func_int16_t_s_s((((*g_193) == (void*)0) , 1L), (safe_sub_func_int32_t_s_s((l_654 , 5L), l_655[3][8][3]))))));
                }
                else
                {
                    int *l_657[2][8] = {{&g_521,&g_597[2],&g_521,&g_521,&g_597[2],&g_521,&g_521,&g_597[2]},{&g_597[2],&g_521,&g_521,&g_597[2],&g_521,&g_521,&g_597[2],&g_521}};
                    int i, j;
                    (*g_88) = l_657[1][3];


                    if (((((*l_565) = (&g_187 != ((65533UL == (!(safe_lshift_func_uint8_t_u_s(p_33, 5)))) , &g_187))) , (p_31 != ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(((((safe_mod_func_uint32_t_u_u(((g_238 = (safe_mul_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(p_33, (safe_add_func_uint8_t_u_u((~l_644), (((safe_lshift_func_uint8_t_u_u(p_31, 6)) != (*l_540)) < (-4L)))))) < 0x25L), p_33))) | g_320[3][3]), p_32)) || (*l_530)) ^ l_644) ^ g_182[0]), 6)), 14)) > (-8L)))) == 0xC7L))
                    {
                        const unsigned *l_677 = &g_678;
                        const unsigned **l_676 = &l_677;
                        const int **l_679 = &g_75;
                        (*l_530) = (safe_lshift_func_int16_t_s_s((p_31 < 0UL), (((*l_676) = &g_497) != l_657[1][3])));

                        ;
                        l_680 = ((*l_679) = &l_622[0][0]);

                        ;
                        ;
                    }
                    else
                    {
                        (*l_540) = p_33;
                        (**g_87) = &l_626;


                    }

                    ;

                    ;
                }

                ;

                ;
                return g_114[1];



            }
            else
            {
                int l_681 = 0xE82DCBBDL;
                int **l_701 = &l_565;
                if (p_32)
                {
                    int *l_682[5][2][3] = {{{&g_521,&g_597[1],&g_597[0]},{&g_57,&g_57,&g_597[0]}},{{&g_597[1],&g_57,&g_57},{&g_57,&g_521,&g_57}},{{&g_597[1],&g_597[1],&g_57},{&g_521,&g_57,&g_57}},{{&g_57,&g_521,&g_57},{&g_597[1],&g_597[1],&g_57}},{{&g_521,&g_57,&g_57},{&g_57,&g_521,&g_57}}};
                    int i, j, k;
                    l_681 = (p_32 != 65535UL);
                    l_682[1][0][2] = &l_626;
                    (*g_88) = (void*)0;
                    (**g_87) = &l_681;


                }
                else
                {
                    unsigned char l_692 = 251UL;
                    int l_699 = 0xCC05716BL;
                    (*g_88) = &l_681;


                    for (g_238 = 0; (g_238 == 18); g_238 = safe_add_func_int8_t_s_s(g_238, 7))
                    {
                        (*l_540) = 0xE95E03DFL;
                        (*l_565) = (safe_rshift_func_uint16_t_u_u(((g_182[0] = func_39(&l_681)) , (*l_680)), 2));
                        return p_33;


                    }
                    if ((g_182[0] , ((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint16_t_u_u(g_242, ((l_699 = ((safe_rshift_func_uint8_t_u_u(l_692, (((safe_add_func_uint32_t_u_u(((*l_530) = ((((safe_lshift_func_uint8_t_u_s(l_692, (func_39(&l_681) | ((safe_add_func_int8_t_s_s(p_33, ((((void*)0 == &l_648[2]) && p_33) , 0x04L))) || p_32)))) < g_182[0]) | g_80[2][2]) , (*l_530))), p_33)) <= 0x16L) | 0x80B4B6EDL))) == p_33)) == l_681))))) != p_32)))
                    {
                        unsigned *l_700 = &g_320[3][3];
                        (**g_87) = &l_681;
                    }
                    else
                    {
                        return g_678;


                    }
                }


                (*l_701) = ((**g_87) = &l_681);

                ;
            }


        }


    }


    (*l_703) = l_702;
    l_710 = ((*l_530) = (g_320[0][3] || g_102));
    if (p_32)
    {
        const int * const l_711 = (void*)0;
        const int **l_712 = &g_75;
        int *l_713[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        (*l_712) = l_711;
        (*g_88) = (l_713[1] = l_713[1]);
    }
    else
    {
        int l_716[2][4];
        const unsigned short *l_749 = (void*)0;
        const unsigned short **l_748[2][10] = {{(void*)0,&l_749,&l_749,(void*)0,&l_749,&l_749,(void*)0,&l_749,&l_749,(void*)0},{&l_749,&l_749,&l_749,&l_749,&l_749,&l_749,&l_749,&l_749,&l_749,&l_749}};
        int l_751 = 0x79E944F4L;
        unsigned *** const l_762 = (void*)0;
        unsigned *l_766[8] = {&l_710,&l_710,&l_710,&l_710,&l_710,&l_710,&l_710,&l_710};
        char *l_770 = &g_92;
        char **l_769 = &l_770;
        int *l_773 = &g_57;
        unsigned char ***l_874 = &g_187;
        unsigned l_921 = 0x37F218D5L;
        int * const l_922[7] = {&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&g_7};
        short l_923 = 1L;
        int l_941 = (-1L);
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_716[i][j] = 0x6B961F0AL;
        }
        for (g_324 = 0; (g_324 <= 11); g_324 = safe_add_func_uint8_t_u_u(g_324, 9))
        {
            l_717 = l_716[1][2];
            for (g_102 = 0; (g_102 >= 0); g_102 -= 1)
            {
                int i;
                return g_182[g_102];


            }
            (*g_88) = &l_709;
        }


        for (g_92 = 18; (g_92 < (-24)); g_92 = safe_sub_func_int32_t_s_s(g_92, 8))
        {
            short l_720 = 0L;
            int *l_757 = &l_751;
            if (l_720)
            {
                unsigned char *l_723 = &g_114[2];
                unsigned l_735 = 4294967291UL;
                int *l_736 = &g_57;
                const int *l_740 = &g_521;
                for (g_102 = 0; (g_102 < 2); g_102 = safe_add_func_int16_t_s_s(g_102, 1))
                {
                    const int *l_738 = &l_525;
                    for (l_525 = 4; (l_525 >= 1); l_525 -= 1)
                    {
                        int l_734 = 0xF4BD0511L;
                        int **l_737 = &g_208;
                        const int **l_739[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_739[i] = &g_75;
                        (*l_737) = ((*g_88) = (((p_31 = (l_723 != ((l_634[l_525] ^ 0x31CB50A5L) , l_723))) >= (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s((0L > (safe_sub_func_uint32_t_u_u((+(l_634[l_525] | ((safe_rshift_func_int16_t_s_u(l_734, 0)) != ((0x31L < (((0xD580L == g_80[2][0]) < (*l_530)) , p_33)) || 0xA4B84191L)))), l_735))), 0UL)) <= p_32) && 0UL), 0x7CL)) >= 0x6F2C16A1L), 3))) , l_736));

                        ;
                        l_740 = l_738;

                        ;
                    }
                }

                ;
                return g_465;


            }
            else
            {
                unsigned l_741 = 1UL;
                int *l_753[4][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                if ((l_741 = (1UL | p_32)))
                {
                    unsigned l_750 = 4294967295UL;
                    int *l_752 = (void*)0;
                    l_751 = ((safe_add_func_int16_t_s_s(((((*l_530) = (safe_sub_func_uint8_t_u_u(((*l_530) == 0xEDL), 0x24L))) < p_32) , ((g_746 = (void*)0) == l_748[0][3])), l_750)) == 0x476CCA59L);

                    ;
                    (*g_88) = l_752;
                    return l_716[1][2];


                }
                else
                {
                    int *l_756 = &l_709;
                    l_754 = l_753[1][3];

                    ;
                    for (l_640 = 0; (l_640 <= 3); l_640 += 1)
                    {
                        int *l_755 = &g_597[0];
                        (*l_530) = p_31;
                        (*g_88) = &l_751;
                        (**g_87) = l_755;
                        l_757 = ((*l_530) , l_756);

                        ;
                    }

                    ;
                    l_757 = l_756;

                    ;
                }

                ;
                ;
                (**g_87) = l_757;
                for (l_710 = 0; (l_710 == 59); l_710++)
                {
                    (**g_87) = l_757;
                }
                if (p_33)
                    break;
            }

            ;
            ;
        }


        ;
        (*l_530) = (*l_530);
        if (((safe_add_func_int32_t_s_s(((&g_267 != l_762) != ((1L <= l_716[1][2]) , (safe_unary_minus_func_uint16_t_u((*g_747))))), (safe_lshift_func_int8_t_s_u(p_32, (((((*l_530) = p_32) == 5L) > (l_751 = (((safe_rshift_func_int16_t_s_s(((((*l_769) = &g_92) == l_706) , l_716[1][2]), l_751)) ^ (-1L)) , p_31))) <= l_716[1][2]))))) > 0x130CEF9EL))
        {
            int *l_771 = &g_521;
            int **l_772[4][4][10] = {{{(void*)0,&l_771,&g_208,(void*)0,&g_208,(void*)0,&l_754,&l_754,&l_771,&g_208},{&l_771,&g_208,&l_771,&l_771,&l_754,&l_771,&g_208,(void*)0,&l_771,&l_754},{&g_208,(void*)0,(void*)0,&g_208,&g_208,&l_754,&l_771,(void*)0,&l_754,&l_771},{(void*)0,&l_771,&g_208,&g_208,&l_754,&l_754,&g_208,&g_208,&l_771,(void*)0}},{{&l_771,(void*)0,&l_754,&g_208,(void*)0,&l_771,&g_208,&l_771,&l_771,&g_208},{&l_771,&g_208,&g_208,(void*)0,(void*)0,&l_754,&l_771,&g_208,&l_754,(void*)0},{(void*)0,&g_208,&g_208,&g_208,&l_754,&l_771,(void*)0,&g_208,&l_754,&l_771},{&g_208,&g_208,&l_771,&g_208,&g_208,&l_771,&g_208,&g_208,&l_771,&l_754}},{{&g_208,(void*)0,&l_771,(void*)0,&l_754,&g_208,&g_208,&g_208,&l_754,&g_208},{&l_754,&g_208,&l_754,&l_771,&l_754,&g_208,&l_754,(void*)0,&l_771,&g_208},{&l_771,&l_771,&l_771,&l_771,&l_754,&l_754,(void*)0,&g_208,&l_771,(void*)0},{&g_208,&l_771,&l_754,(void*)0,&l_771,(void*)0,&l_754,&g_208,&l_771,(void*)0}},{{&g_208,&g_208,&l_771,&g_208,&l_771,&l_771,&l_754,&l_771,&g_208,(void*)0},{&g_208,&g_208,&l_771,&l_771,&g_208,&l_754,&l_771,&l_771,&g_208,&l_771},{&g_208,(void*)0,&g_208,&g_208,&g_208,&l_754,&l_771,&l_771,&l_754,&g_208},{&l_771,&g_208,&g_208,&l_771,&g_208,&g_208,&l_771,&l_754,&l_771,(void*)0}}};
            int i, j, k;
            (**g_87) = l_771;
            l_773 = ((*g_88) = &l_717);


            ;
            (*l_771) = p_32;
            (*g_87) = (*g_87);
        }
        else
        {
            unsigned l_783 = 0x53E383D4L;
            const unsigned short *l_784 = &l_602[0];
            unsigned l_808 = 0x31752FAEL;
            int *l_815 = (void*)0;
            int l_827 = 0xD1302796L;
            char l_858 = 0x8FL;
            char l_884 = 0x99L;
            unsigned ***l_908 = (void*)0;
            const unsigned *l_914 = &g_320[3][3];
            const unsigned **l_913 = &l_914;
            const unsigned ***l_912 = &l_913;
            char **l_951 = &l_770;
            (*l_773) = ((*g_747) && p_32);
            for (p_31 = 21; (p_31 > 5); p_31--)
            {
                const unsigned l_776 = 3UL;
                int **l_781 = &l_754;
                int l_782 = 0xC03CBD36L;
                unsigned short *l_887[8] = {&g_185,&l_602[0],&g_185,&g_185,&l_602[0],&g_185,&g_185,&l_602[0]};
                int i;
                if (l_776)
                    break;
                if (((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(func_39(((*l_781) = &l_751)), (0xBE762D71L && ((l_782 = p_31) <= (g_7 , l_783))))) ^ (l_784 == ((safe_lshift_func_int16_t_s_u(g_92, 9)) , ((*g_746) = (*g_746))))), 3)) >= p_31))
                {
                    int *l_795 = (void*)0;
                    for (l_751 = 0; (l_751 > (-13)); l_751 = safe_sub_func_uint8_t_u_u(l_751, 2))
                    {
                        int l_791 = 0xF644AA5FL;
                        l_791 = (safe_lshift_func_uint16_t_u_u((**g_746), 4));
                        (*g_88) = l_795;
                    }
                }
                else
                {
                    for (l_710 = 0; (l_710 <= 1); l_710 += 1)
                    {
                        int *l_796 = &g_521;
                        l_796 = &l_717;

                        ;
                        (*l_781) = (*l_781);
                        return p_31;


                    }
                }

                ;
                (*l_754) = (safe_rshift_func_int16_t_s_s((-1L), 9));
                for (g_497 = (-4); (g_497 != 60); g_497 = safe_add_func_int16_t_s_s(g_497, 8))
                {
                    int l_819 = 1L;
                }
            }

            ;
            if (((*l_530) = 0x72AE3C39L))
            {
                unsigned l_889 = 4294967291UL;
                int l_890 = 0x1BF92C1BL;
                l_890 = ((*l_773) = l_889);
            }
            else
            {
                const int *l_893 = (void*)0;
                char l_897[3];
                unsigned ***l_910 = &g_193;
                int l_916 = 0L;
                int l_935 = (-1L);
                int i;
                for (i = 0; i < 3; i++)
                    l_897[i] = 0x14L;
                for (g_185 = 29; (g_185 <= 30); g_185 = safe_add_func_uint16_t_u_u(g_185, 2))
                {
                    char l_896 = (-5L);
                    int l_898 = 1L;
                    l_894 = l_893;

                    ;
                    if (((l_898 = (func_39(&l_525) , (((-6L) < 2UL) , (l_897[0] = ((((func_39(&l_751) < (p_33 && (+p_33))) != (safe_unary_minus_func_int32_t_s(l_896))) < 0xA2B79048L) >= 0xF7EEBACFL))))) > p_32))
                    {
                        (*g_88) = &l_751;
                    }
                    else
                    {
                        (*g_88) = &l_898;


                        if ((*l_530))
                            continue;

                        (**g_87) = l_899;
                    }


                    (**g_87) = &l_751;
                    if (p_33)
                        continue;

                }

                ;
                for (p_31 = 0; (p_31 <= 0); p_31 += 1)
                {
                    int * const l_915 = &l_751;
                    unsigned *l_920 = &l_808;
                    int **l_924 = (void*)0;
                    int **l_925 = &g_208;
                    int i;
                    for (l_640 = 0; (l_640 <= 3); l_640 += 1)
                    {
                        unsigned ****l_909 = &l_908;
                        unsigned ****l_911 = &l_910;
                        int **l_917 = &l_773;
                        int i;
                        l_916 = ((g_597[l_640] = (l_897[p_31] , 0x81100918L)) || (safe_add_func_uint8_t_u_u(((*l_706) = (safe_sub_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((&g_267 != ((((*l_909) = l_908) == ((*l_911) = l_910)) , (l_912 = l_912))), ((func_39(l_915) , p_31) , (*g_747)))), p_32)) , p_32) && 0x64L), p_32))), p_33)));
                        (*l_917) = l_915;

                        ;
                    }
                    (*l_530) = ((((l_897[p_31] = 0x29L) > ((3L & (*l_915)) | p_31)) ^ (-6L)) | (*l_773));
                    (*l_925) = l_915;

                    ;
                }


                ;
                if ((safe_rshift_func_int16_t_s_s((((**l_769) = (-1L)) ^ l_827), 8)))
                {
                    char l_928 = 0xA5L;
                    l_928 = p_32;
                }
                else
                {
                    char *l_929 = &l_858;
                    int *l_936 = &l_717;
                    int l_947 = (-1L);
                    (**g_87) = &l_751;
                    if (p_33)
                    {
                        (*l_530) = l_930;
                        (*l_530) = (safe_lshift_func_int8_t_s_s(p_31, 3));
                        (**g_87) = l_936;


                    }
                    else
                    {
                        unsigned l_946 = 0xA96D8328L;
                        (*g_88) = &l_827;


                        g_948 = p_31;
                    }


                    (*l_899) = p_33;
                }


                (**g_87) = ((safe_lshift_func_int8_t_s_s((l_951 != (void*)0), 1)) , &l_935);


            }



            ;
            ;
        }



        ;
        ;
        ;
    }



    ;
    return (*l_899);


}







static unsigned char func_39(int * const p_40)
{
    int *l_495 = &g_7;
    short *l_496[5] = {&g_242,&g_242,&g_242,&g_242,&g_242};
    int *l_498 = &g_57;
    int **l_504 = &l_498;
    const unsigned l_509 = 0x06B3AA10L;
    int *l_519 = &g_57;
    int i;
    (*l_498) = (*p_40);
    for (g_102 = 0; (g_102 == 14); ++g_102)
    {
        int **l_501 = &l_498;
        int * const *l_503[7][10][3] = {{{(void*)0,(void*)0,(void*)0},{&g_493,&l_498,&g_493},{(void*)0,&l_495,&l_495},{&g_89[6][3][1],&l_498,&l_498},{&l_498,(void*)0,&l_495},{&g_493,&l_495,&g_493},{&l_498,&l_495,(void*)0},{&g_89[6][3][1],&l_495,&l_498},{(void*)0,(void*)0,(void*)0},{&g_493,&l_498,&g_493}},{{(void*)0,&l_495,&l_495},{&g_89[6][3][1],&l_498,&l_498},{&l_498,(void*)0,&l_495},{&g_493,&l_495,&g_493},{&l_498,&l_495,(void*)0},{&g_89[6][3][1],&l_495,&l_498},{(void*)0,(void*)0,(void*)0},{&g_493,&l_498,&g_493},{(void*)0,&l_495,&l_495},{&g_89[6][3][1],&l_498,&l_498}},{{&l_498,(void*)0,&l_495},{&g_493,&l_495,&g_493},{&l_498,&l_495,(void*)0},{&g_89[6][3][1],&l_495,&l_498},{(void*)0,(void*)0,(void*)0},{&g_493,&l_498,&g_493},{(void*)0,&l_495,&l_495},{&g_89[6][3][1],&l_498,&l_498},{&l_498,(void*)0,&l_495},{&g_493,&l_495,&g_493}},{{&l_498,&l_495,(void*)0},{&g_89[6][3][1],&l_495,&l_498},{(void*)0,(void*)0,(void*)0},{&g_493,&l_498,&g_493},{(void*)0,&l_495,&l_495},{&g_89[6][3][1],&l_498,&l_498},{&l_498,(void*)0,&l_495},{&g_493,&l_495,&g_493},{&l_498,&l_495,(void*)0},{&g_89[6][3][1],&l_495,&l_498}},{{(void*)0,(void*)0,(void*)0},{&g_493,&l_498,&g_493},{(void*)0,&l_495,&l_495},{&g_89[6][3][1],&l_498,&l_498},{&l_498,(void*)0,&l_495},{&g_493,&l_495,&g_493},{&l_498,&l_495,(void*)0},{&g_89[6][3][1],&l_495,&l_498},{(void*)0,(void*)0,(void*)0},{&g_493,&l_498,&g_493}},{{(void*)0,&l_495,&l_495},{&g_89[6][3][1],&l_498,&l_498},{&l_498,(void*)0,&l_495},{&g_493,&l_495,&g_493},{&l_498,&l_495,(void*)0},{&g_89[6][3][1],&l_495,&l_498},{(void*)0,(void*)0,(void*)0},{&g_493,&l_498,&g_493},{(void*)0,&l_495,&l_495},{&g_89[6][3][1],&l_498,&l_498}},{{&l_498,(void*)0,&l_495},{&g_493,&l_495,&g_493},{&l_498,&l_495,(void*)0},{&g_89[6][3][1],&l_495,&l_498},{(void*)0,(void*)0,(void*)0},{&g_493,&l_498,&g_493},{(void*)0,&l_495,&l_495},{&g_89[6][3][1],&l_498,&l_498},{&l_498,(void*)0,&l_495},{&g_493,&l_495,&g_493}}};
        int * const **l_502 = &l_503[2][0][1];
        int i, j, k;
        (*l_501) = p_40;
        if ((**l_501))
            break;
        (*l_502) = &p_40;


        (*g_88) = l_495;
    }


    (*l_504) = ((*g_88) = l_495);

    ;
    (*l_519) = ((safe_rshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(l_509, (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((((*p_40) < (safe_mul_func_uint16_t_u_u(g_324, (**l_504)))) < (*l_498)), (*l_498))) , 65535UL), 1)))) | (*l_495)) , g_102), 14)) <= 0xB680L);
    return (**l_504);
}







static int * const func_41(short p_42)
{
    char l_43[8] = {0L,0L,5L,0L,0L,5L,0L,0L};
    int l_44 = 9L;
    int *l_491 = &l_44;
    int * const l_492[7][2][3] = {{{&l_44,(void*)0,&l_44},{&l_44,&l_44,&l_44}},{{&l_44,(void*)0,&l_44},{&l_44,&l_44,&l_44}},{{&l_44,(void*)0,&l_44},{&l_44,&l_44,&l_44}},{{&l_44,(void*)0,&l_44},{&l_44,&l_44,&l_44}},{{&l_44,(void*)0,&l_44},{&l_44,&l_44,&l_44}},{{&l_44,(void*)0,&l_44},{&l_44,&l_44,&l_44}},{{&l_44,(void*)0,&l_44},{&l_44,&l_44,&l_44}}};
    int i, j, k;
    l_44 = l_43[2];
    (*l_491) = func_45((safe_sub_func_uint8_t_u_u(((p_42 < g_7) >= g_7), g_7)), &l_44, &l_44, ((l_43[0] == ((g_7 , p_42) , l_43[7])) , &g_7));



    ;
    (*g_208) = p_42;
    return g_493;




}







static int func_45(unsigned p_46, int * const p_47, int * p_48, int * p_49)
{
    int *l_53 = (void*)0;
    int **l_52 = &l_53;
    unsigned char *l_116 = &g_114[0];
    int l_117 = 0x28708D22L;
    unsigned *l_136 = &g_79;
    unsigned **l_135 = &l_136;
    short *l_241 = &g_242;
    short l_309 = 0xE94DL;
    unsigned l_322[9][3][9] = {{{0x6E834FDBL,0x6D2E7ABAL,0x6E834FDBL,0x96855F1FL,0x8A4ACF00L,8UL,0x4C45D1DAL,0x8A4ACF00L,4294967295UL},{0x6E834FDBL,0x8A4ACF00L,0x3E5A5224L,0x96855F1FL,4294967295UL,0x115835E9L,0x4C45D1DAL,4294967295UL,4294967295UL},{0x6E834FDBL,4294967295UL,0UL,0x96855F1FL,0x6D2E7ABAL,0x4C45D1DAL,0x4C45D1DAL,0x6D2E7ABAL,0x96855F1FL}},{{0x6E834FDBL,0x6D2E7ABAL,0x6E834FDBL,0x96855F1FL,0x8A4ACF00L,8UL,0x4C45D1DAL,0x8A4ACF00L,4294967295UL},{0x6E834FDBL,1UL,4294967295UL,0x4C45D1DAL,0x88C37341L,0x6E834FDBL,0x3E5A5224L,0x88C37341L,0x115835E9L},{4294967295UL,0x88C37341L,0x96855F1FL,0x4C45D1DAL,0x3B9EFC18L,0x3E5A5224L,0x3E5A5224L,0x3B9EFC18L,0x4C45D1DAL}},{{4294967295UL,0x3B9EFC18L,4294967295UL,0x4C45D1DAL,1UL,0UL,0x3E5A5224L,1UL,8UL},{4294967295UL,1UL,4294967295UL,0x4C45D1DAL,0x88C37341L,0x6E834FDBL,0x3E5A5224L,0x88C37341L,0x115835E9L},{4294967295UL,0x88C37341L,0x96855F1FL,0x4C45D1DAL,0x3B9EFC18L,0x3E5A5224L,0x3E5A5224L,0x3B9EFC18L,0x4C45D1DAL}},{{4294967295UL,0x3B9EFC18L,4294967295UL,0x4C45D1DAL,1UL,0UL,0x3E5A5224L,1UL,8UL},{4294967295UL,1UL,4294967295UL,0x4C45D1DAL,0x88C37341L,0x6E834FDBL,0x3E5A5224L,0x88C37341L,0x115835E9L},{4294967295UL,0x88C37341L,0x96855F1FL,0x4C45D1DAL,0x3B9EFC18L,0x3E5A5224L,0x3E5A5224L,0x3B9EFC18L,0x4C45D1DAL}},{{4294967295UL,0x3B9EFC18L,4294967295UL,0x4C45D1DAL,1UL,0UL,0x3E5A5224L,1UL,8UL},{4294967295UL,1UL,4294967295UL,0x4C45D1DAL,0x88C37341L,0x6E834FDBL,0x3E5A5224L,0x88C37341L,0x115835E9L},{4294967295UL,0x88C37341L,0x96855F1FL,0x4C45D1DAL,0x3B9EFC18L,0x3E5A5224L,0x345E88E8L,8UL,0x37D8D9BFL}},{{0UL,8UL,0UL,0x37D8D9BFL,0x4C45D1DAL,0xCF1C8C5DL,0x345E88E8L,0x4C45D1DAL,0xB16BC271L},{0UL,0x4C45D1DAL,4294967294UL,0x37D8D9BFL,0x115835E9L,5UL,0x345E88E8L,0x115835E9L,0xCE6AA63AL},{0UL,0x115835E9L,0x6D7A9326L,0x37D8D9BFL,8UL,0x345E88E8L,0x345E88E8L,8UL,0x37D8D9BFL}},{{0UL,8UL,0UL,0x37D8D9BFL,0x4C45D1DAL,0xCF1C8C5DL,0x345E88E8L,0x4C45D1DAL,0xB16BC271L},{0UL,0x4C45D1DAL,4294967294UL,0x37D8D9BFL,0x115835E9L,5UL,0x345E88E8L,0x115835E9L,0xCE6AA63AL},{0UL,0x115835E9L,0x6D7A9326L,0x37D8D9BFL,8UL,0x345E88E8L,0x345E88E8L,8UL,0x37D8D9BFL}},{{0UL,8UL,0UL,0x37D8D9BFL,0x4C45D1DAL,0xCF1C8C5DL,0x345E88E8L,0x4C45D1DAL,0xB16BC271L},{0UL,0x4C45D1DAL,4294967294UL,0x37D8D9BFL,0x115835E9L,5UL,0x345E88E8L,0x115835E9L,0xCE6AA63AL},{0UL,0x115835E9L,0x6D7A9326L,0x37D8D9BFL,8UL,0x345E88E8L,0x345E88E8L,8UL,0x37D8D9BFL}},{{0UL,8UL,0UL,0x37D8D9BFL,0x4C45D1DAL,0xCF1C8C5DL,0x345E88E8L,0x4C45D1DAL,0xB16BC271L},{0UL,0x4C45D1DAL,4294967294UL,0x345E88E8L,0x6E834FDBL,0UL,4294967294UL,0x6E834FDBL,5UL},{0xB16BC271L,0x6E834FDBL,0x37D8D9BFL,0x345E88E8L,0UL,4294967294UL,4294967294UL,0UL,0x345E88E8L}}};
    short l_379 = (-2L);
    char l_408 = 0x24L;
    int l_437 = 0xF6C546F6L;
    unsigned char ***l_440 = (void*)0;
    int i, j, k;
    (*p_48) = (p_46 > 1UL);
    (*l_52) = (void*)0;
    if (g_7)
    {
        short l_56[2];
        int l_68 = (-1L);
        char l_97 = 0L;
        int *l_111 = &g_57;
        int **l_121[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        unsigned char *l_154 = &g_114[1];
        unsigned *l_192 = &g_79;
        char l_209 = (-8L);
        int i, j;
        for (i = 0; i < 2; i++)
            l_56[i] = (-10L);
        for (p_46 = 0; (p_46 >= 46); p_46 = safe_add_func_uint32_t_u_u(p_46, 9))
        {
            if (g_7)
                break;
            for (g_57 = 0; g_57 < 2; g_57 += 1)
            {
                l_56[g_57] = 0x063FL;
            }
            (*p_47) = (p_46 <= ((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(p_46, p_46)), (0x81L < (((safe_sub_func_uint8_t_u_u(p_46, (-1L))) && ((safe_lshift_func_int8_t_s_u((l_68 = g_7), p_46)) <= (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_u(g_57, 3)) || 4294967288UL) != l_56[0]), p_46)))) & g_7)))) == 0xC6L), 0)) == g_7));
        }
        for (g_57 = 1; (g_57 >= 0); g_57 -= 1)
        {
            int **l_74[6][3][10] = {{{&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,(void*)0},{&l_53,&l_53,(void*)0,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53},{&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,(void*)0,&l_53,&l_53}},{{&l_53,&l_53,(void*)0,&l_53,&l_53,&l_53,&l_53,(void*)0,&l_53,(void*)0},{&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,(void*)0},{&l_53,&l_53,(void*)0,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53}},{{&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,(void*)0,(void*)0,&l_53},{(void*)0,(void*)0,&l_53,&l_53,&l_53,(void*)0,&l_53,&l_53,&l_53,&l_53},{&l_53,(void*)0,&l_53,&l_53,&l_53,(void*)0,&l_53,&l_53,(void*)0,&l_53}},{{(void*)0,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53},{&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,(void*)0,&l_53},{(void*)0,(void*)0,&l_53,&l_53,&l_53,(void*)0,&l_53,&l_53,&l_53,&l_53}},{{&l_53,(void*)0,&l_53,&l_53,&l_53,(void*)0,&l_53,&l_53,(void*)0,&l_53},{(void*)0,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53},{&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,&l_53,(void*)0,&l_53}},{{(void*)0,(void*)0,&l_53,&l_53,&l_53,(void*)0,&l_53,&l_53,&l_53,&l_53},{&l_53,(void*)0,&l_53,&l_53,(void*)0,(void*)0,&l_53,&l_53,&l_53,&l_53},{&l_53,&l_53,(void*)0,&l_53,&l_53,&l_53,(void*)0,&l_53,(void*)0,&l_53}}};
            unsigned *l_78 = &g_79;
            int i, j, k;
            for (l_68 = 1; (l_68 >= 0); l_68 -= 1)
            {
                int ***l_73[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_73[i] = (void*)0;
                l_74[3][1][2] = &l_53;
                g_75 = (void*)0;
            }
            g_80[2][2] = ((*p_48) = (safe_rshift_func_uint16_t_u_u(((g_57 ^ ((*l_78) = p_46)) | (l_68 = 4294967286UL)), 6)));
        }
        if ((&p_47 != &p_47))
        {
            int l_81 = 0x9F15FC87L;
            int ***l_90 = &g_88;
            (*p_48) = (g_7 == l_81);
            for (g_79 = 16; (g_79 >= 50); g_79++)
            {
                int l_86 = 0x53D6C1C9L;
                if (l_81)
                {
                    int l_93 = 0x0BED92BBL;
                    (*l_52) = &g_57;

                    ;
                    for (l_68 = (-11); (l_68 != 4); l_68 = safe_add_func_uint8_t_u_u(l_68, 1))
                    {
                        unsigned char *l_91 = (void*)0;
                        (**l_90) = (((g_92 = ((l_86 , g_87) != l_90)) & l_93) , (**g_87));
                    }
                    (**l_90) = (void*)0;
                }
                else
                {
                    unsigned char *l_96 = (void*)0;
                    if ((g_92 , ((((~0x87L) ^ (l_56[1] , (((safe_mod_func_uint8_t_u_u((l_97 = g_7), l_68)) < l_56[0]) ^ 1L))) , (safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((-1L), (&g_79 != &g_79))), 4))) != g_102)))
                    {
                        const int ** const l_103 = &g_75;
                        const int **l_105[9][7][4] = {{{&g_75,&g_75,&g_75,&g_75},{(void*)0,&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0},{&g_75,&g_75,(void*)0,&g_75}},{{(void*)0,&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0},{&g_75,&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75}},{{&g_75,&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0},{(void*)0,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75}},{{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{(void*)0,&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75}},{{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75}},{{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0}},{{&g_75,&g_75,(void*)0,&g_75},{(void*)0,&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75,(void*)0},{(void*)0,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75,&g_75}},{{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75}},{{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75}}};
                        const int ***l_104 = &l_105[6][4][1];
                        int i, j, k;
                        (*l_104) = l_103;
                    }
                    else
                    {
                        l_68 = ((safe_sub_func_uint16_t_u_u(p_46, p_46)) | (0L && p_46));
                        if ((*p_48))
                            continue;
                        if ((*p_47))
                            break;
                    }
                    (*p_48) = (*p_48);
                    for (l_68 = (-6); (l_68 >= 25); l_68 = safe_add_func_uint32_t_u_u(l_68, 8))
                    {
                        int *l_110 = &l_68;
                        int **l_112 = &l_111;
                        unsigned char **l_115[5] = {&l_96,&l_96,&l_96,&l_96,&l_96};
                        int i;
                        l_111 = l_110;

                        ;
                        (*l_112) = p_47;


                        (**l_112) = (*p_47);
                        l_117 = ((*l_111) = ((l_86 = (*l_111)) >= ((g_113 = g_113) != (l_116 = &g_114[0]))));
                    }
                }
            }

            ;

        }
        else
        {
            char l_120 = 0x4BL;
            unsigned *l_131[3][8][9] = {{{&g_79,&g_79,(void*)0,&g_79,(void*)0,&g_79,&g_79,&g_79,(void*)0},{&g_79,&g_79,&g_79,&g_79,(void*)0,&g_79,(void*)0,&g_79,(void*)0},{&g_79,(void*)0,(void*)0,&g_79,&g_79,&g_79,(void*)0,(void*)0,&g_79},{&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{(void*)0,&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,(void*)0},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79}},{{(void*)0,&g_79,(void*)0,&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79},{&g_79,&g_79,&g_79,(void*)0,&g_79,(void*)0,(void*)0,&g_79,&g_79},{(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,(void*)0,(void*)0,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,(void*)0,&g_79,(void*)0,(void*)0}},{{&g_79,&g_79,&g_79,(void*)0,&g_79,(void*)0,&g_79,&g_79,&g_79},{&g_79,(void*)0,&g_79,(void*)0,(void*)0,&g_79,(void*)0,&g_79,&g_79},{&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79},{&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,(void*)0,&g_79,(void*)0,&g_79,(void*)0,&g_79,(void*)0},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79}}};
            int l_132 = 0x175C14C0L;
            char l_141[6][6] = {{0xC8L,2L,0x8EL,0x2EL,0x48L,0x48L},{2L,0x18L,0x18L,2L,0x4FL,0x48L},{5L,0x48L,0x8EL,(-1L),0x2EL,(-1L)},{0x4FL,1L,0x4FL,7L,0x2EL,0xC8L},{0x8EL,0x48L,5L,0x4FL,0x4FL,5L},{0x18L,0x18L,2L,0x4FL,0x48L,7L}};
            unsigned char **l_164 = &g_113;
            unsigned short *l_214 = &g_185;
            unsigned char l_268 = 0x8BL;
            int i, j, k;
            if ((*p_48))
            {
                int * const *l_122 = &l_53;
                unsigned **l_133 = (void*)0;
                unsigned char **l_167 = &g_113;
                unsigned l_190 = 0x523DC5B1L;
                for (g_79 = 0; (g_79 >= 51); g_79++)
                {
                    if (l_120)
                        break;
                }
                if (((l_121[0][1] = &p_48) == l_122))
                {
                    if (((*l_111) = ((*p_47) = 0x1281BCF5L)))
                    {
                        (*p_48) = ((*l_111) = (safe_mod_func_uint16_t_u_u((l_132 = ((safe_mod_func_uint8_t_u_u(l_120, (((l_120 || p_46) <= (p_46 | (~(safe_rshift_func_int8_t_s_s((((safe_mul_func_int8_t_s_s(g_114[0], (&l_111 == (*g_87)))) != (p_47 != l_131[1][2][5])) | g_80[1][2]), 7))))) , l_120))) ^ p_46)), g_80[2][2])));
                    }
                    else
                    {
                        unsigned ***l_134 = (void*)0;
                        l_135 = l_133;

                        ;
                        (**g_87) = (**g_87);
                        (**g_87) = p_49;
                        (*l_111) = 0x02CEC10FL;
                    }

                    ;
                }
                else
                {
                    char l_148 = 1L;
                    char *l_151[10][7] = {{&l_120,(void*)0,&l_141[1][3],&l_97,&l_141[1][3],(void*)0,&l_120},{(void*)0,(void*)0,&l_141[5][4],&g_92,&l_97,&l_141[1][3],&l_97},{(void*)0,&l_97,&l_97,(void*)0,&l_141[5][4],&l_120,&l_97},{&l_120,&l_120,&l_141[5][4],&l_141[5][4],&l_141[5][4],&l_141[5][4],&l_120},{&l_141[5][4],&l_120,&l_141[1][3],(void*)0,&l_97,&l_97,&l_97},{&l_141[1][3],&l_120,&l_141[5][4],&l_120,&l_141[1][3],(void*)0,&l_97},{&l_141[5][4],&l_120,&l_120,(void*)0,&l_141[5][4],&l_97,&l_120},{&l_97,&l_97,&l_120,&l_97,&l_141[5][4],&g_92,(void*)0},{(void*)0,&l_97,&l_120,&l_120,&l_97,(void*)0,&l_141[5][4]},{(void*)0,&l_120,&l_120,&l_141[5][4],&l_141[5][4],&l_141[5][4],&l_141[5][4]}};
                    unsigned char **l_155 = &g_113;
                    int i, j;
                    (*l_111) = (safe_lshift_func_uint8_t_u_s(((p_46 | ((safe_rshift_func_int8_t_s_u(0L, 6)) == l_141[5][4])) == 0x4AA5B524L), (g_102 = (((((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((g_92 = (0x3BL > ((*l_116) = (((safe_mul_func_uint16_t_u_u(l_148, (l_132 = g_79))) , p_46) != (safe_mul_func_int16_t_s_s(p_46, g_102)))))), 1)), 0x7DL)) | (-4L)) == (*p_47)) ^ p_46) ^ 255UL))));
                    for (g_79 = (-30); (g_79 == 54); g_79 = safe_add_func_uint32_t_u_u(g_79, 6))
                    {
                        if (l_148)
                            break;
                    }
                    (**g_87) = p_49;
                    (*p_48) = (l_154 == ((*l_155) = l_151[2][1]));

                    ;
                }

                ;

                ;
                for (l_97 = (-26); (l_97 > (-28)); l_97 = safe_sub_func_int32_t_s_s(l_97, 8))
                {
                    unsigned l_171 = 0x990F7100L;
                    for (p_46 = 0; (p_46 != 48); p_46++)
                    {
                        short l_160[3][9] = {{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L),0L,(-8L)},{(-6L),(-1L),(-6L),(-6L),(-1L),(-6L),(-6L),(-1L),(-6L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L),0L,(-8L)}};
                        char *l_163 = &l_120;
                        unsigned char ***l_165 = (void*)0;
                        unsigned char ***l_166[5][1][5] = {{{&l_164,&l_164,&l_164,&l_164,&l_164}},{{&l_164,&l_164,&l_164,&l_164,&l_164}},{{&l_164,&l_164,&l_164,&l_164,&l_164}},{{&l_164,&l_164,&l_164,&l_164,&l_164}},{{&l_164,&l_164,&l_164,&l_164,&l_164}}};
                        int i, j, k;
                        (*l_111) = ((((l_160[2][5] = p_46) , (+(l_120 || (l_132 = ((safe_rshift_func_int16_t_s_u((p_46 > ((*l_163) = g_80[3][2])), ((((l_160[2][5] , (g_92 & ((g_168 = ((*l_136) = ((l_167 = l_164) != (void*)0))) != (*l_111)))) , (-9L)) > p_46) , p_46))) && p_46))))) >= 0xFD19F2AAL) || g_80[1][0]);
                    }
                    (*l_52) = ((safe_sub_func_uint16_t_u_u(l_171, 0xED01L)) , (void*)0);
                    (**g_87) = (void*)0;
                    if ((*p_47))
                    {
                        (*l_111) = (safe_add_func_uint8_t_u_u(p_46, p_46));
                    }
                    else
                    {
                        (**g_87) = (void*)0;
                        return (*p_48);


                    }
                }
                for (p_46 = 0; (p_46 <= 1); p_46 += 1)
                {
                    unsigned short *l_183 = (void*)0;
                    unsigned short *l_184 = &g_185;
                    int l_191 = 0x9D0CA95DL;
                    int i;
                    (*l_111) = l_56[p_46];
                }
            }
            else
            {
                char l_195 = 0xC2L;
                const unsigned short l_211 = 0xDCE5L;
                (*p_47) = (((g_7 , (-1L)) , (p_46 > l_195)) | (safe_mod_func_int8_t_s_s(0xECL, ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((*g_113) = 2UL), (p_46 && (((safe_sub_func_uint8_t_u_u((&l_132 == ((*l_52) = (p_46 , p_49))), (-2L))) == l_195) , g_79)))), g_102)) ^ (*p_47)))));

                ;
                for (p_46 = 0; (p_46 < 37); p_46++)
                {
                    int l_210[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_210[i] = 0x46E1C941L;
                    if ((g_185 && (((void*)0 == &g_194[7]) , (safe_lshift_func_int8_t_s_s(l_120, 1)))))
                    {
                        if (l_132)
                            break;
                        (*p_48) = (-1L);
                        if ((*p_48))
                            break;
                    }
                    else
                    {
                        (*p_48) = (*p_49);
                        g_208 = p_48;


                        if (l_209)
                            break;
                    }
                    if (l_210[0])
                        break;
                }


                (*p_47) = l_211;
            }

            ;
            ;

            ;

            (*g_88) = (void*)0;
            if ((safe_mod_func_uint16_t_u_u(((*l_214) = 0UL), (g_182[0] , ((safe_add_func_int16_t_s_s((~p_46), l_120)) , p_46)))))
            {
                char *l_223 = &l_97;
                int l_234 = (-7L);
                short *l_235 = (void*)0;
                short *l_236 = (void*)0;
                short *l_237[5] = {&l_56[1],&l_56[1],&l_56[1],&l_56[1],&l_56[1]};
                int i;
                (*p_47) = ((g_114[2] < (l_132 , (((*l_136) = (g_114[0] && g_7)) > (((((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_223) = 9L), ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((-3L) || 0x80C0L), 3)) <= (255UL != (((g_238 = (safe_lshift_func_uint16_t_u_s((p_46 > l_234), 12))) < p_46) < (*l_111)))), 1UL)), l_234)), g_57)) , l_120))), p_46)), p_46)) ^ (*g_208)) && 0x05DB3240L) && (*p_47)) , 0x0DFA86E4L)))) || 0xEAEF1AE5L);
                (**g_87) = (*l_52);
            }
            else
            {
                unsigned char l_259 = 0xCDL;
                char *l_262 = &l_209;
                for (l_132 = 4; (l_132 >= 0); l_132 -= 1)
                {
                    unsigned char l_243 = 0xB1L;
                    int l_248 = 0x432417F5L;
                    int i;
                    l_243 = (safe_rshift_func_int8_t_s_u((&l_56[0] == l_241), 2));
                    (*g_88) = g_194[(l_132 + 1)];
                    for (g_242 = 0; (g_242 <= 5); g_242 += 1)
                    {
                        int i, j;
                        (*p_47) = (l_248 = (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u(l_141[l_132][g_242], 13)) && l_141[l_132][(l_132 + 1)]), 5)));
                        return l_141[5][4];


                    }
                }


                (*p_47) = ((safe_mul_func_int16_t_s_s((l_132 = (((+(safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_46, (safe_sub_func_int32_t_s_s((*p_47), (&g_194[7] == (((((safe_mod_func_int8_t_s_s((((*p_47) < l_259) < (safe_rshift_func_uint16_t_u_u((((*l_262) = (-2L)) >= (safe_add_func_int8_t_s_s(p_46, (safe_sub_func_uint32_t_u_u(4294967294UL, l_141[5][4]))))), 5))), 0x50L)) & p_46) , &g_88) == &g_88) , g_267)))))), 1))) , 0xD34D6390L) > l_268)), p_46)) && (*l_111));
                (*g_88) = (**g_87);
                for (g_168 = 0; (g_168 != (-26)); g_168 = safe_sub_func_int16_t_s_s(g_168, 2))
                {
                    return l_120;


                }
            }


        }

        ;




        ;

        (*g_208) = (p_46 < (*l_111));
    }
    else
    {
        int *l_277[4];
        char **l_289 = (void*)0;
        unsigned short l_342 = 65528UL;
        const unsigned char **l_395 = (void*)0;
        short l_411 = 1L;
        short l_416 = (-6L);
        int i;
        for (i = 0; i < 4; i++)
            l_277[i] = (void*)0;
        for (g_242 = 0; (g_242 > (-14)); g_242 = safe_sub_func_uint16_t_u_u(g_242, 1))
        {
            int *l_280 = (void*)0;
            char *l_300 = &g_102;
            unsigned ***l_302[1][6];
            int l_310 = (-10L);
            unsigned short *l_311 = &g_185;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_302[i][j] = &g_193;
            }
            for (g_102 = 0; (g_102 >= (-17)); g_102--)
            {
                char *l_293 = &g_102;
                char **l_292 = &l_293;
                unsigned short l_294 = 0xF975L;
                int l_299 = (-1L);
                for (g_79 = 0; (g_79 > 47); g_79++)
                {
                    (*g_88) = l_277[3];
                    for (g_238 = 0; (g_238 <= 33); g_238 = safe_add_func_int8_t_s_s(g_238, 8))
                    {
                        (*g_208) = ((*p_47) = (*p_48));
                        (**g_87) = (void*)0;
                        (**g_87) = p_48;
                        p_49 = (void*)0;

                        ;
                    }
                    l_280 = p_49;
                }
                if ((*p_48))
                    continue;
                for (g_79 = 0; (g_79 == 35); g_79++)
                {
                    char *l_291[7];
                    char **l_290[9] = {&l_291[0],&l_291[0],&l_291[0],&l_291[0],&l_291[0],&l_291[0],&l_291[0],&l_291[0],&l_291[0]};
                    int i;
                    for (i = 0; i < 7; i++)
                        l_291[i] = &g_92;
                    (*g_208) = ((*p_48) = (safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(0x46CAL, p_46)), 8)));
                    for (g_238 = 0; (g_238 >= 57); g_238 = safe_add_func_int16_t_s_s(g_238, 8))
                    {
                        l_290[1] = l_289;
                        (**g_87) = (**g_87);
                    }
                    p_49 = l_277[3];

                    ;
                    (**g_87) = (void*)0;
                }
                (*g_208) = (g_114[0] <= ((g_185 != ((l_292 == (l_294 , g_295)) , (0xAF7AL < (safe_lshift_func_int16_t_s_u((l_299 = (safe_unary_minus_func_uint16_t_u(p_46))), (((p_46 | (**g_187)) | l_294) || p_46)))))) <= 0xF29EL));
            }

            ;
            (*g_88) = l_277[3];
            (*p_47) = (p_46 > ((*l_300) = ((void*)0 == (*g_187))));
            (*p_47) = (((safe_unary_minus_func_uint16_t_u((((p_46 , ((*l_311) = (((p_46 ^ g_182[0]) && ((void*)0 != l_302[0][5])) , (~((((safe_mul_func_uint16_t_u_u(((((l_310 = (0L != (safe_sub_func_int32_t_s_s(((~g_182[0]) >= ((safe_lshift_func_uint16_t_u_s((l_309 <= (((*l_136) = p_46) > (*p_47))), p_46)) , l_310)), (*g_208))))) | (*p_48)) , (**g_187)) > p_46), p_46)) ^ p_46) ^ 0xA305L) == p_46))))) || 0x7993L) | (*p_47)))) | g_92) ^ 1UL);
        }

        ;

        for (g_168 = 0; (g_168 <= 3); g_168 += 1)
        {
            unsigned short *l_334 = &g_238;
            char *l_339 = &g_102;
            unsigned l_378 = 0x63793A32L;
            unsigned char **l_394 = &l_116;
            int l_445 = 0x5F6F7167L;
            int i;
        }
    }

    ;
    ;


    ;

    return (*p_47);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_80[i][j], "g_80[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_114[i], "g_114[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_168, "g_168", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_182[i], "g_182[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_320[i][j], "g_320[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_597[i], "g_597[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_678, "g_678", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_948, "g_948", print_hash_value);
    transparent_crc(g_1114, "g_1114", print_hash_value);
    transparent_crc(g_1287, "g_1287", print_hash_value);
    transparent_crc(g_1446, "g_1446", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1635[i], "g_1635[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1641, "g_1641", print_hash_value);
    transparent_crc(g_1751, "g_1751", print_hash_value);
    transparent_crc(g_1813, "g_1813", print_hash_value);
    transparent_crc(g_1849, "g_1849", print_hash_value);
    transparent_crc(g_1916, "g_1916", print_hash_value);
    transparent_crc(g_1919, "g_1919", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
