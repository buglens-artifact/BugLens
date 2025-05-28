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



static int g_23 = 0x3B2C57E7L;
static char g_25 = 0L;
static int g_29 = 0x94A61BF0L;
static char *g_35 = (void*)0;
static int g_63 = 0x2F0F5B87L;
static unsigned short g_73[8][8] = {{0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L},{0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L},{0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L},{0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L},{0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L},{0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L},{0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L},{0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L,0xF720L}};
static unsigned short g_75 = 0x34DDL;
static unsigned char g_81[3] = {1UL,1UL,1UL};
static short g_84[7] = {7L,7L,7L,7L,7L,7L,7L};
static unsigned short g_85 = 0xE7DCL;
static unsigned g_87[7] = {0xDE5337C4L,0x2C3DA88EL,0x2C3DA88EL,0xDE5337C4L,0x2C3DA88EL,0x2C3DA88EL,0xDE5337C4L};
static char g_95[1] = {0x27L};
static unsigned g_102 = 0x0B842617L;
static int g_126 = (-9L);
static int *g_132 = (void*)0;
static int **g_131 = &g_132;
static int g_154 = 1L;
static unsigned short ***g_221 = (void*)0;
static char g_307[4] = {0x0FL,0x0FL,0x0FL,0x0FL};
static short g_339 = 0x6545L;
static unsigned short g_342[1] = {7UL};
static unsigned short g_383 = 0x0556L;
static short g_388 = (-1L);
static unsigned short g_390 = 0x56B5L;
static char ***g_458 = (void*)0;
static unsigned short *g_488 = (void*)0;
static unsigned short **g_487 = &g_488;
static unsigned g_521 = 4294967295UL;
static unsigned short g_523 = 0UL;
static unsigned *g_613 = &g_102;
static unsigned **g_612 = &g_613;
static char *g_633 = (void*)0;
static short *g_635[1][1] = {{&g_339}};
static short **g_634 = &g_635[0][0];
static int ***g_703 = &g_131;
static unsigned short *g_713 = &g_73[4][0];
static short ***g_749 = &g_634;
static unsigned short g_772 = 0x2BBEL;
static char **g_847 = &g_633;
static int *g_893 = &g_154;
static int g_902 = 0xF86BE3D8L;
static unsigned g_991 = 1UL;
static char ***g_1074 = &g_847;
static unsigned g_1166[2][4][10] = {{{7UL,8UL,1UL,8UL,7UL,1UL,0xB007BC79L,0xB007BC79L,1UL,7UL},{7UL,0x74A1F2E5L,0x74A1F2E5L,7UL,8UL,0xE3F256AAL,7UL,0xE3F256AAL,8UL,7UL},{0xE3F256AAL,7UL,0xE3F256AAL,8UL,7UL,0x74A1F2E5L,0x74A1F2E5L,7UL,8UL,0xE3F256AAL},{0xB007BC79L,0xB007BC79L,1UL,7UL,8UL,1UL,8UL,7UL,1UL,0xB007BC79L}},{{8UL,0x74A1F2E5L,0xE3F256AAL,8UL,8UL,8UL,8UL,0xE3F256AAL,0x74A1F2E5L,8UL},{0xE3F256AAL,0xB007BC79L,0x74A1F2E5L,0x74A1F2E5L,8UL,0x74A1F2E5L,0xE3F256AAL,8UL,8UL,8UL},{7UL,0xB007BC79L,0xE2A582A3L,8UL,8UL,0xE2A582A3L,0xB007BC79L,7UL,0xE2A582A3L,7UL},{8UL,0xE3F256AAL,0x74A1F2E5L,8UL,0x74A1F2E5L,0xE3F256AAL,8UL,8UL,8UL,8UL}}};
static unsigned g_1200 = 0xC8657AFFL;
static unsigned char g_1230 = 255UL;
static unsigned char g_1253 = 254UL;
static char ***g_1258 = &g_847;
static int g_1279[9][2][9] = {{{0x13DB7991L,(-6L),0x80108E6CL,0L,0L,0x80108E6CL,(-6L),0x13DB7991L,1L},{0x35D07FB4L,(-1L),0x3DE56F70L,(-1L),0x4FC5D22BL,1L,1L,0x4FC5D22BL,(-1L)}},{{(-1L),8L,(-1L),(-1L),(-6L),0L,1L,1L,1L},{0x40979CE9L,0x35D07FB4L,0xB9F50FCFL,1L,0xB9F50FCFL,0x35D07FB4L,0x40979CE9L,0xEDFA6D5CL,0x3DE56F70L}},{{1L,0L,(-6L),(-1L),(-1L),8L,(-1L),(-1L),(-6L)},{1L,1L,0x4FC5D22BL,(-1L),0x3DE56F70L,(-1L),0x35D07FB4L,0xEDFA6D5CL,0x35D07FB4L}},{{(-6L),0x80108E6CL,0L,0L,0x80108E6CL,(-6L),0x13DB7991L,1L,(-1L)},{0xEDFA6D5CL,(-6L),0x4FC5D22BL,(-1L),0x40979CE9L,0x40979CE9L,0x3DE56F70L,0xEDFA6D5CL,0x40979CE9L}},{{1L,(-1L),1L,0x13DB7991L,(-6L),0x80108E6CL,0L,0L,0x80108E6CL},{(-1L),0xEDFA6D5CL,0x4FC5D22BL,0xEDFA6D5CL,(-1L),(-1L),1L,0xB9F50FCFL,0x3DE56F70L}},{{(-1L),(-1L),0x13DB7991L,1L,(-1L),1L,0x13DB7991L,(-1L),(-1L)},{(-1L),0x40979CE9L,1L,(-1L),0xB9F50FCFL,(-1L),0xE0B3F92AL,(-1L),0xB9F50FCFL}},{{(-3L),1L,1L,(-3L),1L,0x80108E6CL,8L,1L,(-6L)},{(-1L),0xB9F50FCFL,0xE0B3F92AL,(-6L),(-6L),0xE0B3F92AL,0xB9F50FCFL,(-1L),0x4FC5D22BL}},{{(-1L),(-1L),(-6L),0L,1L,1L,1L,1L,0L},{(-1L),1L,(-1L),0x40979CE9L,0xB9F50FCFL,(-6L),0x35D07FB4L,0x4FC5D22BL,0x4FC5D22BL}},{{1L,(-1L),(-1L),1L,(-1L),(-1L),1L,8L,(-6L)},{0x35D07FB4L,(-6L),0xB9F50FCFL,0x40979CE9L,(-1L),1L,(-1L),0x40979CE9L,0xB9F50FCFL}}};
static unsigned short g_1336 = 4UL;
static unsigned char g_1436[5][9] = {{1UL,0x11L,0xEDL,0x38L,0xEDL,1UL,0x5EL,5UL,0xC9L},{0x11L,0xC9L,0x5EL,0x2FL,5UL,0x2FL,0x5EL,0xC9L,0x11L},{1UL,0x2FL,0x11L,5UL,1UL,0xEDL,1UL,5UL,0x11L},{1UL,1UL,1UL,1UL,0xC9L,0x38L,0x11L,0x38L,0xC9L},{1UL,1UL,1UL,1UL,1UL,0xC9L,0x38L,0x11L,0x38L}};
static char ****g_1447 = (void*)0;
static char *****g_1446 = &g_1447;
static unsigned g_1464 = 4294967294UL;



static unsigned short func_1(void);
static int * func_2(int * p_3, int * p_4, int * p_5, int p_6, int * p_7);
static int * func_8(int * p_9, int * p_10, unsigned p_11, int p_12, char p_13);
static int * func_14(unsigned short p_15, char p_16);
static unsigned char func_26(int * p_27);
static int func_33(char * p_34);
static int * func_36(int * p_37, char p_38, int * p_39, char * p_40);
static int * func_41(char p_42, int p_43, int * p_44);
static int func_52(int * p_53, int p_54, char * p_55);
static unsigned short func_57(int p_58, char p_59, char p_60, int * p_61);
static unsigned short func_1(void)
{
    int l_17 = 1L;
    char *l_24 = &g_25;
    int *l_28 = &g_23;
    unsigned l_908 = 0x75315738L;
    unsigned short *l_909[3][10][1] = {{{&g_342[0]},{&g_342[0]},{&g_383},{&g_342[0]},{&g_342[0]},{&g_342[0]},{&g_383},{&g_342[0]},{&g_342[0]},{&g_342[0]}},{{&g_383},{&g_342[0]},{&g_342[0]},{&g_342[0]},{&g_383},{&g_342[0]},{&g_342[0]},{&g_342[0]},{&g_383},{&g_342[0]}},{{&g_342[0]},{&g_342[0]},{&g_383},{&g_342[0]},{&g_342[0]},{&g_342[0]},{&g_383},{&g_342[0]},{&g_342[0]},{&g_342[0]}}};
    int **l_1477 = (void*)0;
    int **l_1478 = &l_28;
    int l_1483 = 0L;
    short ****l_1485 = &g_749;
    short *****l_1484 = &l_1485;
    unsigned l_1486 = 0xD73E81F7L;
    int i, j, k;
    (*l_1478) = func_2(func_8(func_14(((l_17 & l_17) > ((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((*l_24) = g_23), func_26(l_28))), 9)))) == (safe_mul_func_int16_t_s_s((*l_28), (g_383 = (safe_add_func_int8_t_s_s(l_908, (0x758DEA20L < (*l_28))))))))), (*l_28)), l_28, l_17, g_902, l_908), g_613, g_613, g_342[0], g_613);
    (*l_28) = (safe_sub_func_int32_t_s_s((**l_1478), ((*g_613) &= func_57((l_1483 = (safe_lshift_func_int8_t_s_u((**l_1478), g_84[5]))), (0xD9FAL && ((*l_28) <= ((void*)0 != l_1484))), func_52(&g_154, l_1486, l_24), &g_23))));
    (*l_28) = (safe_lshift_func_uint8_t_u_s((**l_1478), 0));
    return (**l_1478);
}







static int * func_2(int * p_3, int * p_4, int * p_5, int p_6, int * p_7)
{
    char *l_1185 = &g_307[3];
    int l_1186 = (-8L);
    unsigned l_1193 = 0x849AB1F7L;
    int *l_1201[6] = {&g_29,&g_154,&g_29,&g_29,&g_154,&g_29};
    char *l_1251 = &g_95[0];
    short *l_1280 = (void*)0;
    int l_1289 = 0L;
    short ****l_1325 = (void*)0;
    short *****l_1324 = &l_1325;
    unsigned l_1375 = 7UL;
    char **l_1406 = &l_1185;
    int *l_1423 = &g_63;
    unsigned l_1424 = 0xD9CB4F2CL;
    char l_1433 = 0xF5L;
    unsigned **l_1439[7][4][1] = {{{&g_613},{(void*)0},{(void*)0},{&g_613}},{{&g_613},{&g_613},{&g_613},{&g_613}},{{&g_613},{&g_613},{(void*)0},{(void*)0}},{{&g_613},{&g_613},{&g_613},{&g_613}},{{&g_613},{&g_613},{&g_613},{&g_613}},{{&g_613},{&g_613},{&g_613},{&g_613}},{{&g_613},{&g_613},{&g_613},{&g_613}}};
    char *****l_1451 = &g_1447;
    unsigned l_1453 = 9UL;
    unsigned short **l_1454[8][6][3] = {{{(void*)0,&g_488,(void*)0},{&g_713,&g_713,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,(void*)0,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,&g_713,(void*)0}},{{(void*)0,&g_488,(void*)0},{&g_713,(void*)0,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,&g_713,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,(void*)0,(void*)0}},{{(void*)0,&g_488,(void*)0},{&g_713,&g_713,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,(void*)0,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,&g_713,(void*)0}},{{(void*)0,&g_488,(void*)0},{&g_713,(void*)0,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,&g_713,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,(void*)0,(void*)0}},{{(void*)0,&g_488,(void*)0},{&g_713,&g_713,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,(void*)0,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,&g_713,(void*)0}},{{(void*)0,&g_488,(void*)0},{&g_713,(void*)0,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,&g_713,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,(void*)0,(void*)0}},{{(void*)0,&g_488,(void*)0},{&g_713,&g_713,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,(void*)0,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,&g_713,(void*)0}},{{(void*)0,&g_488,(void*)0},{&g_713,(void*)0,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,&g_713,(void*)0},{(void*)0,&g_488,(void*)0},{&g_713,(void*)0,(void*)0}}};
    int *l_1476 = &g_29;
    int i, j, k;
    (*p_5) &= (l_1185 == (void*)0);
    for (g_23 = 0; (g_23 >= 0); g_23 -= 1)
    {
        int l_1194 = (-5L);
        char *l_1197 = &g_95[0];
        int *l_1198 = (void*)0;
        int *l_1199[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1199[i] = (void*)0;
        (*p_5) = (*p_7);
        (**g_703) = p_4;
        g_1200 ^= ((l_1186 ^ p_6) && (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(l_1193, l_1194)), 2)), (~(p_6 >= (safe_div_func_uint16_t_u_u(func_33(l_1197), 0xB383L)))))));
    }
    (*g_131) = &l_1186;
    for (g_772 = 0; (g_772 <= 3); g_772 += 1)
    {
        char *l_1202[3][10] = {{&g_95[0],&g_95[0],(void*)0,&g_95[0],(void*)0,&g_95[0],(void*)0,&g_95[0],&g_95[0],(void*)0},{&g_95[0],&g_95[0],&g_95[0],&g_95[0],&g_95[0],&g_95[0],(void*)0,&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],&g_95[0],(void*)0,(void*)0,&g_95[0],&g_95[0],&g_95[0],&g_95[0]}};
        int l_1212 = 0xF263A2AEL;
        unsigned l_1231[10][3] = {{4294967295UL,0x85CF3454L,4294967295UL},{0UL,0UL,0UL},{4294967295UL,0x85CF3454L,4294967295UL},{0UL,0UL,0UL},{4294967295UL,0x85CF3454L,4294967295UL},{0UL,0UL,0UL},{4294967295UL,0x85CF3454L,4294967295UL},{0UL,0UL,0UL},{4294967295UL,0x85CF3454L,4294967295UL},{0UL,0UL,0UL}};
        unsigned **l_1235 = &g_613;
        short **l_1254 = (void*)0;
        short *l_1281 = &g_84[4];
        unsigned l_1283 = 0xBC9ACABAL;
        unsigned l_1298 = 0x9DE7F666L;
        unsigned char l_1323 = 249UL;
        char l_1339[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int *l_1341 = &g_29;
        int *l_1345 = &l_1289;
        unsigned char l_1432 = 1UL;
        unsigned l_1434[8][1];
        char l_1437 = 0x61L;
        char *****l_1449 = &g_1447;
        char *****l_1450 = &g_1447;
        int *l_1471 = &g_23;
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 1; j++)
                l_1434[i][j] = 0x4FA8F0ECL;
        }
    }
    return l_1476;
}







static int * func_8(int * p_9, int * p_10, unsigned p_11, int p_12, char p_13)
{
    short l_1170 = 0x4F57L;
    int *l_1171 = &g_29;
    unsigned short l_1172 = 1UL;
    short ****l_1175 = (void*)0;
    int *l_1180 = &g_154;
    for (g_383 = 0; (g_383 <= 3); g_383 += 1)
    {
        return p_9;
    }
    (*l_1171) = ((*p_10) = l_1170);
    (**g_703) = p_10;
    return (*g_131);
}







static int * func_14(unsigned short p_15, char p_16)
{
    unsigned short l_910 = 0x1F5DL;
    int *l_911 = &g_126;
    char *l_918[3];
    int ***l_919[7][5] = {{&g_131,(void*)0,&g_131,&g_131,(void*)0},{&g_131,&g_131,&g_131,&g_131,&g_131},{(void*)0,&g_131,&g_131,(void*)0,(void*)0},{&g_131,&g_131,&g_131,&g_131,&g_131},{(void*)0,&g_131,&g_131,(void*)0,&g_131},{(void*)0,(void*)0,&g_131,&g_131,(void*)0},{&g_131,(void*)0,&g_131,&g_131,(void*)0}};
    int *l_929 = &g_126;
    int l_941 = 0xF1AF56D1L;
    char ***l_969 = &g_847;
    int ***l_988 = &g_131;
    unsigned char l_1010 = 0x2BL;
    char ****l_1032 = &g_458;
    char *****l_1031 = &l_1032;
    int *l_1047 = &g_29;
    char l_1048 = (-1L);
    unsigned char l_1058 = 251UL;
    int *l_1169 = &g_29;
    int i, j;
    for (i = 0; i < 3; i++)
        l_918[i] = &g_95[0];
    (*l_911) &= (l_910 <= l_910);
    (*l_911) = ((safe_add_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(9UL, 0xF6444916L)) && (~(*l_911))), p_15)) <= func_52(l_911, (g_154 |= ((*l_911) ^ (safe_mul_func_int8_t_s_s((g_307[2] = (*l_911)), (g_390 > func_57((g_23 ^= (l_919[1][3] != &g_131)), p_16, p_16, &g_154)))))), l_918[2]));
    for (g_63 = (-9); (g_63 > (-27)); --g_63)
    {
        int *l_925 = &g_154;
        unsigned **l_959 = (void*)0;
        unsigned ***l_967 = &g_612;
        int *l_987 = &g_126;
        char *l_1009 = (void*)0;
        char *****l_1034[9] = {&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032};
        int l_1065 = 0x087420B9L;
        char l_1079 = 0x82L;
        unsigned short ***l_1104 = &g_487;
        int i;
        for (g_25 = 0; (g_25 >= 0); g_25 -= 1)
        {
            int *l_928 = &g_23;
            for (g_521 = 0; (g_521 <= 0); g_521 += 1)
            {
                int i;
                (*l_911) |= (safe_mod_func_int8_t_s_s(((void*)0 != (*g_703)), g_95[g_521]));
            }
            (*l_911) |= (safe_sub_func_int16_t_s_s((*l_928), (*l_928)));
            (*l_911) = ((*l_928) |= (((*l_925) = (&g_458 != (void*)0)) >= (+((*g_613) = (*l_929)))));
        }
        if (p_16)
        {
            unsigned l_944 = 0x9B32B93AL;
            int l_945 = 1L;
            int *l_947 = (void*)0;
            char *l_1005 = &g_307[3];
            int l_1007 = 0L;
            int *l_1011 = &g_29;
            char ***l_1025 = &g_847;
            unsigned char l_1026 = 0xBCL;
            char ******l_1033[9][6] = {{&l_1031,&l_1031,&l_1031,&l_1031,(void*)0,&l_1031},{&l_1031,&l_1031,&l_1031,&l_1031,&l_1031,&l_1031},{(void*)0,&l_1031,&l_1031,(void*)0,&l_1031,&l_1031},{&l_1031,(void*)0,&l_1031,(void*)0,&l_1031,&l_1031},{(void*)0,&l_1031,&l_1031,&l_1031,&l_1031,(void*)0},{(void*)0,(void*)0,&l_1031,&l_1031,&l_1031,(void*)0},{&l_1031,(void*)0,&l_1031,&l_1031,&l_1031,&l_1031},{&l_1031,&l_1031,&l_1031,&l_1031,&l_1031,&l_1031},{(void*)0,&l_1031,(void*)0,&l_1031,&l_1031,&l_1031}};
            unsigned l_1045 = 0xA54E01B7L;
            int i, j;
            l_945 &= l_944;
            if (p_15)
            {
                unsigned short l_946 = 0UL;
                int l_961 = 0x1B65DC92L;
                unsigned ***l_966 = &g_612;
                for (l_941 = 0; (l_941 <= 4); l_941 += 1)
                {
                    for (g_521 = 0; (g_521 <= 0); g_521 += 1)
                    {
                        int i, j;
                        (**g_703) = (void*)0;
                        (*l_929) &= 0x3ADA6ECAL;
                        return (*g_131);
                    }
                    return l_925;
                }
                if (l_946)
                {
                    unsigned char l_960[7][2][6] = {{{0x3EL,254UL,254UL,0x3EL,254UL,254UL},{0x3EL,254UL,254UL,0x3EL,254UL,254UL}},{{0x3EL,254UL,254UL,0x3EL,254UL,254UL},{0x3EL,254UL,254UL,0x3EL,254UL,254UL}},{{0x3EL,254UL,254UL,0x3EL,254UL,254UL},{0x3EL,254UL,254UL,0x3EL,254UL,254UL}},{{0x3EL,254UL,254UL,0x3EL,254UL,254UL},{0x3EL,254UL,254UL,0x3EL,254UL,254UL}},{{0x3EL,254UL,254UL,0x3EL,254UL,254UL},{0x3EL,254UL,254UL,0x3EL,254UL,254UL}},{{254UL,248UL,248UL,254UL,248UL,248UL},{254UL,248UL,248UL,254UL,248UL,248UL}},{{254UL,248UL,248UL,254UL,248UL,248UL},{254UL,248UL,248UL,254UL,248UL,248UL}}};
                    int l_978 = 0L;
                    char *l_985 = &g_307[0];
                    int *l_986 = &l_961;
                    int i, j, k;
                    (*g_131) = l_947;
                    for (p_15 = 2; (p_15 <= 7); p_15 += 1)
                    {
                        int i, j;
                        (*l_911) ^= (g_73[p_15][p_15] && g_73[p_15][p_15]);
                    }
                    if ((4294967291UL || (*l_925)))
                    {
                        unsigned short *l_956 = &l_946;
                        char ***l_968 = &g_847;
                        unsigned **l_974 = (void*)0;
                        l_961 = (safe_mod_func_uint32_t_u_u(p_15, (((safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(0x16L, (safe_div_func_int16_t_s_s(0xA0CFL, ((*l_956) &= 0x4B41L))))) || (safe_rshift_func_int8_t_s_u(((void*)0 == l_959), 1))) & l_960[5][1][3]), (((void*)0 == l_918[2]) != p_16))) >= p_15) && l_945)));
                        (*l_929) = (((safe_rshift_func_int16_t_s_u(p_16, 1)) >= ((0x594FL > ((*l_925) & (safe_lshift_func_int8_t_s_s((((l_966 == l_967) ^ (l_968 == (g_458 = l_969))) >= (safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u((l_974 == &g_613), p_16)), p_15))), 4)))) || p_16)) | (-5L));
                        (*l_911) &= ((safe_unary_minus_func_int8_t_s(((p_15 < p_16) <= (l_961 = (safe_sub_func_int16_t_s_s(0x3165L, ((p_15 >= (*l_925)) & ((*l_956) = p_15)))))))) >= (l_978 = p_16));
                    }
                    else
                    {
                        unsigned char *l_983 = &g_81[1];
                        int *l_984 = (void*)0;
                        if (p_15)
                            break;
                        (**g_703) = func_36(&l_978, l_960[2][0][0], ((**g_703) = func_36(func_36(&l_978, (safe_div_func_uint8_t_u_u(0xBFL, ((*l_983) |= (safe_rshift_func_uint16_t_u_u((p_15 = p_15), 5))))), (*g_131), &p_16), ((*l_911) > p_16), l_984, l_985)), l_985);
                    }
                    for (g_772 = 0; (g_772 <= 0); g_772 += 1)
                    {
                        int i, j;
                        (**g_703) = l_986;
                        if ((***g_703))
                            continue;
                        (*g_131) = l_987;
                    }
                }
                else
                {
                    return &g_23;
                }
            }
            else
            {
                int l_994 = 0xC4808C2FL;
                int l_1003 = 0xF8088126L;
                char *l_1008 = &g_25;
                short ****l_1023 = &g_749;
                if ((*l_925))
                {
                    char l_1002 = 1L;
                    int l_1004 = 0xF086811AL;
                    int *l_1012[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1012[i] = (void*)0;
                    if ((&g_131 != l_988))
                    {
                        (*l_929) = (safe_lshift_func_uint16_t_u_u(g_991, (*l_929)));
                        l_1003 ^= (safe_mod_func_uint8_t_u_u((!(l_994 & (5UL != ((safe_add_func_int32_t_s_s(((*l_925) = ((safe_unary_minus_func_uint16_t_u(p_15)) < (((*l_911) = (p_15 || (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(p_15, p_15)), (l_994 && (p_15 > p_16)))))) == 0x196FD437L))), 1L)) ^ g_388)))), l_1002));
                        l_1004 = l_1003;
                        (*l_911) ^= ((&g_126 == l_925) | l_1002);
                    }
                    else
                    {
                        int *l_1006 = &g_154;
                        (**l_988) = func_36(&g_63, p_16, func_36(func_36(((**l_988) = func_36(&l_945, p_16, func_36(((**g_703) = l_925), p_16, l_1006, &l_1002), l_1005)), (*l_929), &l_1004, l_1009), l_1010, &l_945, l_1009), &l_1002);
                    }
                    (**g_703) = func_36((l_1012[3] = ((**g_703) = l_1011)), ((0x0CB0L | p_16) & 0xFFL), &l_1004, l_1008);
                    (**g_703) = (void*)0;
                }
                else
                {
                    unsigned char *l_1019 = (void*)0;
                    unsigned char *l_1020 = &l_1010;
                    char ***l_1024 = (void*)0;
                    if (p_16)
                        break;
                    for (l_945 = 22; (l_945 > 27); l_945 = safe_add_func_uint16_t_u_u(l_945, 8))
                    {
                        unsigned char l_1015 = 0x67L;
                        if (p_15)
                            break;
                        (*l_987) = l_1015;
                    }
                    (**g_703) = &l_1007;
                    l_1026 = (~((((*l_1020) = ((*l_925) ^ (safe_mul_func_int8_t_s_s(p_15, (safe_unary_minus_func_int16_t_s(l_994)))))) ^ (safe_lshift_func_int8_t_s_s((*l_911), (&g_749 != l_1023)))) >= ((***g_703) ^= (l_1024 == l_1025))));
                }
                if (p_16)
                    break;
            }
            (*l_929) = (safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((*g_613), p_15)) && 255UL), (((l_1034[6] = l_1031) != (void*)0) || (safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((0x6410F1C3L < (~(((safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u((((0xD19B78B8L <= l_1045) == (p_16 > p_16)) != p_15), 0xA8L)), 4294967293UL)) >= 5L) == (**g_634)))), 0xF1DDL)), p_16)))));
        }
        else
        {
            unsigned l_1046 = 0UL;
            l_1046 &= p_16;
            return l_1047;
        }
        l_1048 |= p_16;
        for (l_910 = 0; (l_910 <= 6); l_910 += 1)
        {
            char **l_1061[10] = {(void*)0,&g_35,&g_35,(void*)0,&g_35,&g_35,(void*)0,&g_35,&g_35,(void*)0};
            int l_1064[2][7][3] = {{{(-10L),3L,(-10L)},{0xDC50213BL,0x785F34A0L,0xDC50213BL},{(-10L),3L,(-10L)},{0xDC50213BL,0x785F34A0L,0xDC50213BL},{(-10L),3L,(-10L)},{0xDC50213BL,0x785F34A0L,0xDC50213BL},{(-10L),3L,(-10L)}},{{0xDC50213BL,0x785F34A0L,0xDC50213BL},{(-10L),3L,(-10L)},{0xDC50213BL,0x785F34A0L,0xDC50213BL},{(-10L),3L,(-10L)},{0xDC50213BL,0x785F34A0L,0xDC50213BL},{(-10L),3L,(-10L)},{0xDC50213BL,0x785F34A0L,0xDC50213BL}}};
            short **l_1087 = (void*)0;
            int *l_1130[7][9];
            unsigned char l_1148 = 0x20L;
            unsigned char l_1168 = 0xB7L;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 9; j++)
                    l_1130[i][j] = (void*)0;
            }
            if (p_15)
            {
                char l_1052 = 9L;
                int l_1053 = 0L;
                char l_1091 = 1L;
                char l_1092 = 0x72L;
                unsigned char l_1131 = 255UL;
                (*l_925) = p_16;
                for (g_126 = 1; (g_126 <= 6); g_126 += 1)
                {
                    unsigned l_1051 = 0x333A1409L;
                    char ***l_1073 = &l_1061[8];
                    unsigned short ***l_1102[7];
                    int *l_1113[2];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1102[i] = &g_487;
                    for (i = 0; i < 2; i++)
                        l_1113[i] = &l_1053;
                    l_1053 |= (safe_rshift_func_uint16_t_u_u(((p_16 >= (p_15 && l_1051)) >= l_1052), 11));
                    if ((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((l_1058 & ((*l_925) = (safe_sub_func_uint16_t_u_u(((&g_633 != l_1061[8]) < (safe_mul_func_uint8_t_u_u((g_25 | l_1052), l_1051))), ((*l_925) != (((void*)0 != l_1047) >= l_1064[0][6][0])))))), p_16)) || l_1065), 3)))
                    {
                        short l_1068 = 0xB710L;
                        unsigned char *l_1086 = &l_1010;
                        short ***l_1088[9][1][1] = {{{&l_1087}},{{&g_634}},{{&l_1087}},{{&g_634}},{{&l_1087}},{{&g_634}},{{&l_1087}},{{&g_634}},{{&l_1087}}};
                        int i, j, k;
                        (*l_925) = (safe_mul_func_int16_t_s_s((!l_1068), (safe_sub_func_int8_t_s_s((p_16 = ((((0x71B1L ^ ((safe_mod_func_uint32_t_u_u(((g_458 = l_1073) != (g_1074 = &g_847)), p_15)) < l_1051)) <= (p_15 > (p_16 | (safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(p_16, l_1052)), p_15))))) > 255UL) || p_15)), l_1079))));
                        g_893 = ((*g_131) = &g_154);
                        l_1092 ^= ((safe_sub_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((*l_1086) = (l_1064[0][6][0] && (g_81[1] = p_15))), 1)), ((void*)0 == &l_1032))) & 0xEDL), (l_1087 != (g_634 = &g_635[0][0])))) | ((safe_div_func_uint32_t_u_u((g_87[g_126] = p_16), ((*g_613) ^= (l_1053 | l_1091)))) || (*l_925)));
                    }
                    else
                    {
                        unsigned char *l_1097 = &g_81[1];
                        unsigned short ****l_1103 = &g_221;
                        int l_1111 = (-2L);
                        (*g_131) = &l_1053;
                        (*l_1047) |= ((**g_131) | (safe_mul_func_int8_t_s_s(((((*l_1097) |= (safe_rshift_func_int8_t_s_s(p_16, 6))) ^ (~((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_15, ((((*l_1103) = l_1102[6]) == l_1104) & ((*l_925) |= ((0UL == ((safe_lshift_func_uint8_t_u_u(((7UL < (safe_sub_func_int32_t_s_s((p_16 && ((safe_rshift_func_int8_t_s_u((0UL | 0xEEFE57DBL), 5)) | 8L)), (*l_911)))) ^ 0L), l_1111)) >= l_1092)) || g_307[3]))))), 1UL)) ^ p_16))) != p_16), 0x1CL)));
                        if (p_15)
                            break;
                        if (l_1111)
                            break;
                    }
                    for (g_388 = 2; (g_388 <= 8); g_388 += 1)
                    {
                        unsigned char l_1112 = 0xC3L;
                        if (l_1112)
                            break;
                        (**g_703) = func_36(func_36(((*g_131) = l_987), p_16, &l_1053, &p_16), p_16, l_1113[0], &p_16);
                        l_1053 &= (*g_132);
                    }
                }
                for (l_1092 = 0; (l_1092 <= 9); l_1092 += 1)
                {
                    int *l_1129[4][3][10] = {{{&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63},{&l_1064[1][4][1],&l_1064[1][4][1],&l_1064[0][0][1],&l_1064[1][4][1],&l_1064[1][4][1],&l_1064[0][0][1],&l_1064[1][4][1],&l_1064[1][4][1],&l_1064[0][0][1],&l_1064[1][4][1]},{&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1]}},{{&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63},{&l_1064[1][4][1],&l_1064[1][4][1],&l_1064[0][0][1],&l_1064[1][4][1],&l_1064[1][4][1],&l_1064[0][0][1],&l_1064[1][4][1],&l_1064[1][4][1],&l_1064[0][0][1],&l_1064[1][4][1]},{&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1]}},{{&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63},{&l_1064[1][4][1],&l_1064[1][4][1],&l_1064[0][0][1],&l_1064[1][4][1],&l_1064[1][4][1],&l_1064[0][0][1],&l_1064[1][4][1],&l_1064[1][4][1],&l_1064[0][0][1],&l_1064[1][4][1]},{&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1]}},{{&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63,&l_1064[1][4][1],&g_63,&g_63},{&l_1064[1][4][1],&l_1064[1][4][1],&l_1064[0][0][1],&l_1064[1][4][1],&l_1064[1][4][1],&l_1064[0][0][1],&g_63,&g_63,&l_1064[1][4][1],&g_63},{&g_63,&l_1064[0][0][1],&l_1064[0][0][1],&g_63,&l_1064[0][0][1],&l_1064[0][0][1],&g_63,&l_1064[0][0][1],&l_1064[0][0][1],&g_63}}};
                    int i, j, k;
                    if ((safe_mod_func_int8_t_s_s(((p_16 | (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((**g_634) |= ((*l_987) = p_16)), p_16)), ((p_15 |= p_16) & (~(!(p_16 == ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((0x9017B48CL < ((safe_add_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s(p_16)) ^ ((((~(0x84L & p_16)) & 0xD3D1L) || p_16) ^ p_16)), (*g_613))) > p_16)), l_1052)), 5L)) >= l_1064[0][6][0])))))))) < 0x3189L), (-1L))))
                    {
                        (*l_1047) ^= (safe_rshift_func_uint8_t_u_u(0xD0L, p_15));
                    }
                    else
                    {
                        (*l_925) &= (-1L);
                        (*l_988) = (*g_703);
                        (*l_929) &= (*l_925);
                        if (p_15)
                            continue;
                    }
                    l_1064[0][0][2] |= ((p_16 <= (*l_911)) == (*l_925));
                    (*g_131) = l_1130[4][0];
                }
                if (l_1131)
                    continue;
            }
            else
            {
                for (g_23 = 2; (g_23 >= 0); g_23 -= 1)
                {
                    for (g_126 = 1; (g_126 <= 6); g_126 += 1)
                    {
                        int i;
                        (*l_1047) = g_81[g_23];
                    }
                }
            }
            for (g_521 = 1; (g_521 <= 8); g_521 += 1)
            {
                unsigned char l_1144[9] = {0x02L,0x02L,0x02L,0x02L,0x02L,0x02L,0x02L,0x02L,0x02L};
                int l_1154 = 1L;
                int i;
                for (g_154 = 0; (g_154 <= 6); g_154 += 1)
                {
                    int i;
                    for (g_390 = 3; (g_390 <= 8); g_390 += 1)
                    {
                        int *l_1132 = &l_1064[0][4][0];
                        int i, j;
                        (*l_1047) ^= g_84[g_154];
                        l_1132 = (l_1130[0][4] = l_987);
                    }
                    if (g_84[l_910])
                        continue;
                    for (g_25 = 0; (g_25 <= 8); g_25 += 1)
                    {
                        unsigned l_1141 = 0UL;
                        unsigned char *l_1147 = &l_1058;
                        (*l_911) ^= (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((p_16 <= (l_1141 & (((safe_mul_func_uint16_t_u_u(0x55CFL, l_1144[1])) || (*l_1047)) <= p_16))), g_75)), (safe_add_func_int32_t_s_s(p_15, ((((((*l_1147) = g_73[4][0]) && l_1141) == l_1148) | p_16) <= g_84[l_910]))))), p_15));
                    }
                }
                (*l_987) = (safe_div_func_uint32_t_u_u(4294967295UL, (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(g_390)), (((g_342[0] ^ (l_1154 = l_1144[1])) | (2UL ^ p_15)) > 0xF4B6761AL)))));
                for (p_16 = 2; (p_16 >= 0); p_16 -= 1)
                {
                    int i;
                    if (g_81[p_16])
                    {
                        unsigned *l_1155 = (void*)0;
                        unsigned *l_1156[5][2] = {{&g_87[1],&g_87[2]},{(void*)0,&g_87[2]},{&g_87[1],(void*)0},{&g_87[6],&g_87[6]},{&g_87[6],(void*)0}};
                        int l_1159 = 0xDB03BFE9L;
                        int i, j;
                        (*l_911) = ((l_1154 = ((*g_613) = p_16)) < 5L);
                        (*l_911) = ((p_16 <= (1UL >= (safe_sub_func_uint32_t_u_u((l_1144[8] != (l_1159 | (1L > p_15))), ((safe_lshift_func_int8_t_s_u(((*g_613) || (*g_613)), 6)) != (g_75 == g_521)))))) > p_16);
                        (*l_925) = l_1144[0];
                    }
                    else
                    {
                        char l_1167 = 8L;
                        (*l_1047) = (safe_sub_func_int32_t_s_s(0xBBFA1193L, ((safe_mul_func_int8_t_s_s(g_81[p_16], g_81[p_16])) != ((g_1166[1][0][4] = g_29) ^ g_81[p_16]))));
                        (*l_1047) = ((*l_929) = l_1167);
                        (**l_988) = &l_1064[0][6][0];
                    }
                }
                (*l_929) = l_1168;
            }
            l_1130[0][8] = ((*g_131) = l_925);
        }
    }
    return l_1169;
}







static unsigned char func_26(int * p_27)
{
    unsigned short l_32 = 65531UL;
    int *l_527 = (void*)0;
    unsigned char l_560 = 0UL;
    int l_570 = 0x25E8C0D7L;
    char *l_573 = &g_95[0];
    char *l_640 = &g_307[0];
    short l_651 = 0L;
    short **l_720[6][3] = {{&g_635[0][0],&g_635[0][0],&g_635[0][0]},{&g_635[0][0],&g_635[0][0],&g_635[0][0]},{&g_635[0][0],&g_635[0][0],&g_635[0][0]},{&g_635[0][0],&g_635[0][0],&g_635[0][0]},{&g_635[0][0],&g_635[0][0],&g_635[0][0]},{&g_635[0][0],&g_635[0][0],&g_635[0][0]}};
    unsigned short l_760 = 0x21AFL;
    int l_769 = 0L;
    short l_777 = 0x2F0BL;
    char *l_780 = &g_95[0];
    short l_816 = 0L;
    int ***l_839[9][9][1] = {{{(void*)0},{&g_131},{&g_131},{&g_131},{(void*)0},{&g_131},{(void*)0},{&g_131},{&g_131}},{{&g_131},{(void*)0},{&g_131},{(void*)0},{&g_131},{&g_131},{&g_131},{(void*)0},{&g_131}},{{(void*)0},{&g_131},{&g_131},{&g_131},{(void*)0},{&g_131},{(void*)0},{&g_131},{&g_131}},{{&g_131},{(void*)0},{&g_131},{(void*)0},{&g_131},{&g_131},{&g_131},{(void*)0},{&g_131}},{{(void*)0},{&g_131},{&g_131},{&g_131},{(void*)0},{&g_131},{(void*)0},{&g_131},{&g_131}},{{&g_131},{(void*)0},{&g_131},{(void*)0},{&g_131},{&g_131},{&g_131},{(void*)0},{&g_131}},{{(void*)0},{&g_131},{&g_131},{&g_131},{(void*)0},{&g_131},{(void*)0},{&g_131},{&g_131}},{{&g_131},{(void*)0},{&g_131},{(void*)0},{&g_131},{&g_131},{&g_131},{(void*)0},{&g_131}},{{(void*)0},{&g_131},{&g_131},{&g_131},{(void*)0},{&g_131},{(void*)0},{&g_131},{&g_131}}};
    unsigned char l_871 = 0xA6L;
    short l_895 = 3L;
    unsigned l_896 = 0UL;
    int l_899 = (-4L);
    int *l_903[8][4][7] = {{{(void*)0,&l_899,&l_769,&l_769,&l_899,(void*)0,&l_769},{&g_63,&l_570,(void*)0,(void*)0,&l_570,&g_63,&l_899},{(void*)0,&l_899,&l_769,&l_769,&l_899,(void*)0,&l_769},{&g_63,&l_570,(void*)0,(void*)0,&l_570,&g_63,&l_899}},{{(void*)0,&l_899,&l_769,&l_769,&l_899,(void*)0,&l_769},{&g_63,&l_570,(void*)0,(void*)0,&l_570,&g_63,&l_899},{(void*)0,&l_899,&l_769,&l_769,&l_899,(void*)0,&l_769},{&g_63,&l_570,(void*)0,(void*)0,&l_570,&g_63,&l_899}},{{(void*)0,&l_899,&g_126,&g_126,&l_769,&l_899,&g_126},{&l_570,&l_899,&g_29,&g_29,&l_899,&l_570,&g_63},{&l_899,&l_769,&g_126,&g_126,&l_769,&l_899,&g_126},{&l_570,&l_899,&g_29,&g_29,&l_899,&l_570,&g_63}},{{&l_899,&l_769,&g_126,&g_126,&l_769,&l_899,&g_126},{&l_570,&l_899,&g_29,&g_29,&l_899,&l_570,&g_63},{&l_899,&l_769,&g_126,&g_126,&l_769,&l_899,&g_126},{&l_570,&l_899,&g_29,&g_29,&l_899,&l_570,&g_63}},{{&l_899,&l_769,&g_126,&g_126,&l_769,&l_899,&g_126},{&l_570,&l_899,&g_29,&g_29,&l_899,&l_570,&g_63},{&l_899,&l_769,&g_126,&g_126,&l_769,&l_899,&g_126},{&l_570,&l_899,&g_29,&g_29,&l_899,&l_570,&g_63}},{{&l_899,&l_769,&g_126,&g_126,&l_769,&l_899,&g_126},{&l_570,&l_899,&g_29,&g_29,&l_899,&l_570,&g_63},{&g_63,&l_769,&l_769,&l_769,&l_769,&g_63,&g_126},{&g_63,(void*)0,&l_899,&l_899,(void*)0,&g_63,&g_29}},{{&g_63,&l_769,&l_769,&l_769,&l_769,&g_63,&g_126},{&g_63,(void*)0,&l_899,&l_899,(void*)0,&g_63,&g_29},{&g_63,&l_769,&l_769,&l_769,&l_769,&g_63,&g_126},{&g_63,(void*)0,&l_899,&l_899,(void*)0,&g_63,&g_29}},{{&g_63,&l_769,&l_769,&l_769,&l_769,&g_63,&g_126},{&g_63,(void*)0,&l_899,&l_899,(void*)0,&g_63,&g_29},{&g_63,&l_769,&l_769,&l_769,&l_769,&g_63,&g_126},{&g_63,(void*)0,&l_899,&l_899,(void*)0,&g_63,&g_29}}};
    int i, j, k;
    if ((*p_27))
    {
        char l_544[1][9] = {{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)}};
        int l_545 = 0x9E1218BFL;
        int l_592 = 1L;
        int l_593 = 0x74F596E6L;
        short **l_636 = &g_635[0][0];
        int ***l_637[8];
        unsigned short *l_711[3][10] = {{(void*)0,&g_342[0],(void*)0,(void*)0,&g_342[0],(void*)0,(void*)0,&g_342[0],(void*)0,(void*)0},{&g_342[0],&g_342[0],&g_342[0],&g_342[0],&g_342[0],&g_342[0],(void*)0,(void*)0,&g_342[0],(void*)0},{(void*)0,&g_342[0],&g_342[0],(void*)0,&g_342[0],&g_342[0],(void*)0,&g_342[0],&g_342[0],(void*)0}};
        unsigned short ***l_714 = &g_487;
        char l_836 = 1L;
        unsigned **l_855[9][3][2] = {{{&g_613,(void*)0},{(void*)0,&g_613},{(void*)0,(void*)0}},{{&g_613,(void*)0},{(void*)0,&g_613},{(void*)0,(void*)0}},{{&g_613,(void*)0},{(void*)0,&g_613},{(void*)0,(void*)0}},{{&g_613,(void*)0},{(void*)0,&g_613},{(void*)0,(void*)0}},{{&g_613,(void*)0},{(void*)0,&g_613},{(void*)0,(void*)0}},{{&g_613,(void*)0},{(void*)0,&g_613},{(void*)0,(void*)0}},{{&g_613,(void*)0},{(void*)0,&g_613},{(void*)0,(void*)0}},{{&g_613,(void*)0},{(void*)0,&g_613},{(void*)0,(void*)0}},{{&g_613,(void*)0},{(void*)0,&g_613},{(void*)0,(void*)0}}};
        char *l_892 = (void*)0;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_637[i] = &g_131;
        for (g_29 = 0; (g_29 == (-1)); g_29 = safe_sub_func_int16_t_s_s(g_29, 6))
        {
            return l_32;
        }
        if (func_33(g_35))
        {
            short l_536 = 0x8D4DL;
            int *l_569 = (void*)0;
            for (g_75 = 0; (g_75 <= 7); g_75 += 1)
            {
                char l_528 = (-1L);
                unsigned char *l_539 = &g_81[0];
                int l_557[1][8][5] = {{{(-1L),(-1L),(-1L),0L,(-1L)},{(-1L),0x0C60D314L,0xEE3B0113L,(-1L),0xEE3B0113L},{(-1L),(-1L),0x3E50F217L,(-1L),(-7L)},{0x9C661E8AL,0x9176F344L,0xEE3B0113L,0xEE3B0113L,0x9176F344L},{(-7L),0x4593117EL,(-1L),(-7L),0L},{(-2L),0x9176F344L,0x1E2D2638L,(-2L),(-1L)},{0L,(-7L),(-1L),0x4593117EL,(-7L)},{(-1L),0x9C661E8AL,0x9C661E8AL,(-1L),0x0C60D314L}}};
                int l_571 = 0xB8392A8FL;
                int i, j, k;
                for (l_32 = 0; (l_32 <= 7); l_32 += 1)
                {
                    int *l_526 = &g_126;
                    (*l_526) &= (safe_rshift_func_int16_t_s_s((-1L), g_75));
                    (*g_131) = l_527;
                }
                if (l_528)
                {
                    int *l_529[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_529[i] = (void*)0;
                    g_154 = 0x17999B74L;
                    g_154 |= 7L;
                }
                else
                {
                    unsigned l_530 = 0xF3C94BCDL;
                    unsigned char *l_540 = &g_81[2];
                    char l_543 = 0x72L;
                    int *l_546 = &g_29;
                    (*l_546) = (!(func_57(((((l_544[0][8] = (l_530 && (g_87[1] = (safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u((((safe_lshift_func_int16_t_s_u((l_536 || ((safe_mod_func_uint32_t_u_u((l_539 == l_540), (*p_27))) & (0xF6BDL >= (0xA9L >= ((l_543 >= 0xD69BL) || l_536))))), l_528)) >= l_528) ^ l_528))), 3UL))))) & l_528) >= 9L) | (*p_27)), l_545, l_530, p_27) > 0x71L));
                    for (g_521 = 2; (g_521 <= 7); g_521 += 1)
                    {
                        unsigned l_547 = 4294967286UL;
                        int l_552[8];
                        int *l_572[10][8][1] = {{{&l_552[6]},{(void*)0},{&l_552[6]},{&g_126},{&g_23},{&g_154},{&l_552[7]},{&l_552[3]}},{{&l_552[7]},{&l_552[3]},{&l_552[7]},{&g_154},{&g_23},{&g_126},{&l_552[6]},{(void*)0}},{{&l_552[6]},{&g_126},{&g_23},{&g_154},{&l_552[7]},{&l_552[3]},{&l_552[7]},{&l_552[3]}},{{&l_552[7]},{&g_154},{&g_23},{&g_126},{&l_552[6]},{(void*)0},{&l_552[6]},{&g_126}},{{&g_23},{&g_154},{&l_552[7]},{&l_552[3]},{&l_552[7]},{&l_552[3]},{&l_552[7]},{&g_154}},{{&g_23},{&g_126},{&l_552[6]},{(void*)0},{&l_552[6]},{&g_126},{&g_23},{&g_154}},{{&l_552[7]},{&l_552[3]},{&l_552[7]},{&l_552[3]},{&l_552[7]},{&g_154},{&g_23},{&g_126}},{{&l_552[6]},{(void*)0},{&l_552[6]},{&g_126},{&g_23},{&g_154},{&l_552[7]},{&l_552[3]}},{{&l_552[7]},{&l_552[3]},{&l_552[7]},{&g_154},{&g_23},{&g_126},{&l_552[6]},{(void*)0}},{{&l_552[6]},{&g_126},{&g_23},{&g_154},{&l_552[7]},{&l_552[3]},{&l_552[7]},{&l_552[3]}}};
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_552[i] = 0x908E7A73L;
                        if (g_523)
                            break;
                        if (l_528)
                            break;
                        (*l_546) = func_57((func_57(l_528, (l_545 = 0x4FL), l_547, (*g_131)) & (safe_mul_func_uint16_t_u_u((l_547 <= l_528), l_528))), ((safe_mod_func_uint32_t_u_u((l_552[7] <= (*l_546)), (*l_546))) & l_544[0][8]), l_528, p_27);
                        (*g_131) = func_36(func_36(p_27, ((safe_mul_func_uint8_t_u_u(((void*)0 != &l_543), (func_57((l_571 = (l_570 = (l_545 |= (safe_div_func_int32_t_s_s((l_557[0][3][4] = g_95[0]), (safe_div_func_int8_t_s_s((((l_560 || (safe_mul_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(((*l_546) = g_521), (safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_569 == (*g_131)), l_547)), l_528)))) | g_307[0]) != g_73[1][2]), 1UL))) ^ l_544[0][8]) >= 1L), l_528))))))), l_544[0][8], l_552[7], (*g_131)) & l_544[0][8]))) && g_126), l_572[3][1][0], &l_544[0][8]), l_528, (*g_131), l_573);
                    }
                }
                for (g_154 = 1; (g_154 <= 7); g_154 += 1)
                {
                    short l_577 = 0xDD2EL;
                    if (l_545)
                    {
                        int *l_574 = &g_29;
                        (*g_131) = (*g_131);
                        (*l_574) &= (*p_27);
                        l_577 = ((((void*)0 == &g_95[0]) & 0x5FL) > (l_544[0][6] <= l_557[0][3][4]));
                    }
                    else
                    {
                        int *l_578 = (void*)0;
                        l_578 = &l_570;
                    }
                }
            }
            for (l_32 = 0; (l_32 >= 11); l_32 = safe_add_func_int32_t_s_s(l_32, 1))
            {
                int *l_581 = &l_570;
                (*l_581) = l_536;
                (*g_131) = &l_570;
            }
        }
        else
        {
            int *l_582[9] = {&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570};
            char ****l_586[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int *l_591 = &g_29;
            unsigned short *l_609 = &g_523;
            int ***l_639[3][5][8] = {{{&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,(void*)0,(void*)0,&g_131,&g_131,&g_131,(void*)0,(void*)0},{&g_131,(void*)0,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131,(void*)0,&g_131,&g_131},{(void*)0,&g_131,&g_131,&g_131,&g_131,&g_131,(void*)0,&g_131}},{{&g_131,&g_131,(void*)0,&g_131,(void*)0,(void*)0,&g_131,(void*)0},{&g_131,&g_131,&g_131,&g_131,(void*)0,&g_131,&g_131,&g_131},{&g_131,(void*)0,&g_131,(void*)0,&g_131,&g_131,&g_131,&g_131},{(void*)0,(void*)0,&g_131,&g_131,&g_131,&g_131,(void*)0,(void*)0},{&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131}},{{&g_131,(void*)0,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,(void*)0,(void*)0,&g_131,&g_131,&g_131,(void*)0},{&g_131,&g_131,(void*)0,&g_131,&g_131,&g_131,(void*)0,&g_131},{&g_131,(void*)0,&g_131,&g_131,(void*)0,&g_131,&g_131,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_131,&g_131,&g_131,&g_131}}};
            int ****l_638 = &l_639[1][1][2];
            unsigned **l_644 = &g_613;
            unsigned short l_805 = 0xFD8BL;
            short ***l_829[3];
            unsigned l_834 = 0UL;
            int l_869 = 0x1AD11594L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_829[i] = &l_636;
            l_545 = (0x4C560E43L != g_81[1]);
            for (g_154 = 0; (g_154 <= 0); g_154 += 1)
            {
                unsigned l_583 = 1UL;
                char ****l_587 = &g_458;
                char *l_598 = &g_95[0];
                int l_616 = 0xE85F38D2L;
                int l_617 = 1L;
                l_593 |= ((((g_85 || g_102) < (l_583 <= (safe_div_func_int32_t_s_s((*p_27), ((l_586[0] != l_587) && (safe_unary_minus_func_int8_t_s((l_545 == ((safe_mod_func_uint16_t_u_u((l_592 ^= func_52(func_36(p_27, l_583, l_591, l_573), (*p_27), &g_307[2])), l_583)) & g_154))))))))) || g_84[4]) >= (*p_27));
                if (func_33(&l_544[0][1]))
                {
                    unsigned *l_596[6];
                    int l_597 = 3L;
                    int l_599 = 6L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_596[i] = &g_102;
                    l_599 |= ((l_597 = (safe_mod_func_uint32_t_u_u(g_307[1], ((0xAAL >= 0x3DL) | (*l_591))))) & (func_52(&l_545, (l_570 &= 0x97C612BAL), l_598) <= ((void*)0 != &g_87[2])));
                    (*l_591) &= g_342[0];
                }
                else
                {
                    short l_602[3][3];
                    char *l_614[5];
                    short *l_615[3][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int *l_632 = (void*)0;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_602[i][j] = (-1L);
                    }
                    for (i = 0; i < 5; i++)
                        l_614[i] = &g_95[0];
                    for (l_545 = 0; (l_545 >= 0); l_545 -= 1)
                    {
                        (*g_131) = &l_593;
                        if ((*p_27))
                            continue;
                    }
                    l_617 &= (((safe_rshift_func_int8_t_s_s(0x87L, l_602[1][1])) != ((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(l_544[0][8], 7)), (((*g_487) = l_609) == &l_32))), 4294967291UL)) || (g_84[4] = (l_616 |= (safe_sub_func_int8_t_s_s(((void*)0 != g_612), func_52(&l_570, (*p_27), l_614[4]))))))) || (**g_487));
                    if ((*p_27))
                    {
                        char *l_620 = &g_95[0];
                        int l_627 = 4L;
                        if ((*p_27))
                            break;
                        (*g_131) = func_36(func_36(&l_592, (0x126210FBL & 0UL), func_36(((*g_131) = func_36(l_591, ((safe_mod_func_int8_t_s_s(((void*)0 == l_620), ((safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(l_627, func_57(((*l_591) = ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_617, func_33(l_620))), 255UL)) && 0xA7L)), l_583, l_602[1][1], l_632))), 0x177F2972L)), (*p_27))) ^ 0x483CB1EDL))) > 0xF1L), l_632, &l_544[0][8])), l_593, &l_617, &l_544[0][8]), g_633), l_617, &l_592, l_573);
                    }
                    else
                    {
                        (*l_591) &= 0x2BD67E6EL;
                        return (*l_591);
                    }
                    (**g_131) = (*p_27);
                }
                l_636 = g_634;
                (*g_131) = &l_545;
            }
            if (((l_637[0] != ((*l_638) = (void*)0)) <= (func_33((g_35 = (l_573 = l_573))) | ((void*)0 != l_640))))
            {
                unsigned short l_643 = 1UL;
                int *l_659 = &l_545;
                unsigned short l_660 = 0x5D98L;
                char *l_662 = &l_544[0][6];
                int l_680[5][8][6] = {{{7L,0L,0x92FCE482L,(-4L),0L,0x3069C416L},{0x1912F3A5L,0xE81A15FEL,1L,(-4L),0xDA82BFF0L,0xC41A6D77L},{7L,0x1912F3A5L,0x0ADB8C1DL,0xC41A6D77L,0x3069C416L,7L},{0xF0F52073L,0x782E86AEL,0L,7L,0L,0xF2452FBFL},{0L,(-1L),0L,0x4325242FL,0x4325242FL,0L},{0xAB2F20AEL,0xAB2F20AEL,0x4325242FL,5L,0L,0xA82ED373L},{(-10L),(-4L),0L,0L,(-2L),0x1D23A3E1L},{0xDA82BFF0L,(-10L),0L,0x3069C416L,0xE81A15FEL,0xA82ED373L}},{{0x4325242FL,0x3069C416L,0x1D23A3E1L,0x1912F3A5L,1L,0L},{0x1912F3A5L,1L,0L,0xAB2F20AEL,0xF9A91C7DL,0x1912F3A5L},{0x5EBF0324L,0xDA82BFF0L,7L,5L,7L,0xDA82BFF0L},{7L,0x0ADB8C1DL,0L,(-5L),(-2L),0xAB2F20AEL},{0xE81A15FEL,7L,(-5L),0xF9A91C7DL,(-1L),0xA82ED373L},{0xC41A6D77L,7L,(-10L),0L,(-2L),1L},{0x1912F3A5L,0x0ADB8C1DL,0xC41A6D77L,0x3069C416L,7L,0x4325242FL},{0xA82ED373L,0xDA82BFF0L,0x1D23A3E1L,7L,0xF9A91C7DL,0L}},{{0x3069C416L,1L,0L,0L,1L,0x3069C416L},{0x5EBF0324L,0x3069C416L,0xF2452FBFL,0xF9A91C7DL,0xE81A15FEL,0xDA82BFF0L},{0x782E86AEL,(-10L),0xAB2F20AEL,1L,(-2L),0L},{0x782E86AEL,(-4L),1L,0xF9A91C7DL,0L,0x4325242FL},{0x5EBF0324L,0xE81A15FEL,(-10L),0L,0x1D23A3E1L,0x13926FA9L},{0x3069C416L,0x0ADB8C1DL,0L,(-1L),0x1D23A3E1L,0L},{0xC41A6D77L,0xF0F52073L,0L,0xF0F52073L,0xC41A6D77L,0x4325242FL},{0xCC3EB76EL,0L,5L,1L,(-10L),0xCC3EB76EL}},{{0xA9C3F4EDL,0L,(-2L),0L,(-5L),0xCC3EB76EL},{1L,0x1912F3A5L,5L,0L,0L,0x4325242FL},{(-5L),0x1D23A3E1L,0L,0x5EBF0324L,7L,0L},{0x1912F3A5L,(-5L),0xDA82BFF0L,5L,0L,0L},{0xCC3EB76EL,7L,7L,0xCC3EB76EL,0x1D23A3E1L,0x0ADB8C1DL},{0x0ADB8C1DL,0L,0L,0xF0F52073L,0L,1L},{0x92FCE482L,0xC41A6D77L,5L,0xA82ED373L,0L,0x92FCE482L},{7L,0L,0x13926FA9L,0x5EBF0324L,0x1D23A3E1L,0xF0F52073L}},{{1L,7L,0xA82ED373L,0L,0L,0x4325242FL},{(-2L),(-5L),0L,0x0ADB8C1DL,7L,0x0ADB8C1DL},{0xA9C3F4EDL,0x1D23A3E1L,0xA9C3F4EDL,5L,0L,0L},{0x92FCE482L,0x1912F3A5L,7L,(-1L),(-5L),0xC41A6D77L},{0L,0L,0L,(-1L),(-10L),5L},{0x92FCE482L,0L,(-2L),1L,0xAB2F20AEL,(-10L)},{5L,0xC41A6D77L,0x92FCE482L,0L,(-1L),0L},{0xF0F52073L,0xA82ED373L,(-5L),0x782E86AEL,0x782E86AEL,(-5L)}}};
                char *l_704 = &l_544[0][8];
                int i, j, k;
                for (g_102 = 0; (g_102 >= 22); g_102++)
                {
                    unsigned ***l_645 = &g_612;
                    int *l_646 = &g_29;
                    l_643 ^= ((void*)0 == &l_544[0][8]);
                    if ((*p_27))
                        continue;
                    if (((l_644 == ((*l_645) = (void*)0)) | l_643))
                    {
                        return l_643;
                    }
                    else
                    {
                        unsigned l_658 = 0x137DE6C0L;
                        int *l_661 = &l_593;
                        char *l_663 = (void*)0;
                        p_27 = l_646;
                        p_27 = func_36(p_27, ((*l_591) && (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((l_643 == l_643) <= l_651), l_643)), (safe_rshift_func_uint8_t_u_u((func_57((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(0xDFL, (func_57((((l_570 = (((*l_609) = l_658) && (((((*g_35) && (-1L)) >= 1UL) | 0L) | (*l_646)))) < 4294967295UL) != l_643), l_658, l_643, l_659) && (**g_634)))), l_660)), (*l_659), l_658, l_659) | (*l_659)), g_87[1]))))), (*g_131), l_573);
                        (*l_646) = 1L;
                        (*g_131) = func_36(func_36(func_36(((*g_131) = (*g_131)), l_570, l_661, &g_307[0]), (*g_35), l_661, l_662), (*g_35), p_27, l_663);
                    }
                }
                for (g_390 = 0; (g_390 < 28); g_390++)
                {
                    for (g_521 = 0; (g_521 <= 21); g_521++)
                    {
                        return g_523;
                    }
                }
                for (g_29 = 3; (g_29 >= 0); g_29 -= 1)
                {
                    int ***l_672 = &g_131;
                    char *l_673 = &g_95[0];
                    unsigned short *l_692[1][10][8] = {{{(void*)0,(void*)0,&g_85,&g_75,&l_660,&l_32,(void*)0,(void*)0},{(void*)0,&g_383,&g_383,&g_383,(void*)0,&g_383,&g_73[1][5],(void*)0},{&g_383,&g_73[0][2],(void*)0,&g_75,(void*)0,&g_73[0][2],&g_383,&g_73[1][5]},{&l_643,&g_75,&g_85,(void*)0,&g_75,&g_73[4][0],(void*)0,&l_643},{&g_342[0],&l_643,&g_383,&g_73[0][2],&g_75,&g_383,&g_383,&g_75},{&l_643,&g_73[1][5],&g_73[1][5],&l_643,(void*)0,&g_342[0],(void*)0,&g_73[0][2]},{&g_383,(void*)0,&g_383,(void*)0,(void*)0,&g_85,(void*)0,&g_383},{(void*)0,(void*)0,&g_383,&g_342[0],&l_660,&g_342[0],&g_383,(void*)0},{(void*)0,&g_73[1][5],&g_383,(void*)0,&g_383,&g_383,&g_383,(void*)0},{&g_383,&l_643,&g_73[3][0],&g_75,(void*)0,&g_73[4][0],&g_383,&l_643}}};
                    int l_706 = 0xE1B17D1AL;
                    int i, j, k;
                    for (g_339 = 3; (g_339 >= 0); g_339 -= 1)
                    {
                        unsigned char l_685[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_685[i] = 0UL;
                        (*g_131) = (void*)0;
                        l_680[3][6][2] &= (safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(func_52(p_27, (&g_131 == l_672), (l_662 = l_673)), g_307[g_29])) < (*l_659)), ((*l_609) |= (safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((*l_659), 0xB1626ADEL)) | 0x44163C75L), l_560)), g_342[0])))));
                        l_685[0] &= (g_342[0] <= (((g_307[g_339] = (g_307[1] || (safe_mul_func_int16_t_s_s(2L, 65535UL)))) & 0xC0L) > ((void*)0 != &g_613)));
                    }
                    if (func_52(p_27, (+(*p_27)), l_673))
                    {
                        unsigned short *l_691[3];
                        int l_697 = 1L;
                        int *l_700 = &g_126;
                        short *l_701 = &l_651;
                        unsigned short l_702 = 65535UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_691[i] = &l_643;
                        (*l_659) = (safe_add_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint16_t_u_u((l_691[1] == l_692[0][7][7]), 12)) >= (safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_697 & func_57(g_73[1][1], (*g_35), ((safe_mod_func_uint32_t_u_u((((**g_634) < ((*g_131) == (l_700 = (*g_131)))) | ((*l_701) = (*l_659))), (*l_659))) >= 0xC88A1C4BL), &l_697)), (-1L))), 0x7FEEL))))), l_702));
                        (*l_659) = ((g_703 = l_637[0]) == l_672);
                    }
                    else
                    {
                        unsigned char l_705 = 249UL;
                        l_570 = (l_573 != l_704);
                        l_705 ^= func_52((**l_672), (*p_27), l_573);
                    }
                    l_706 = 0x8439C50BL;
                }
            }
            else
            {
                unsigned short **l_712[3];
                int l_719[9][10][2] = {{{0x71920AA9L,0x8FF31CB2L},{0xC699C2D7L,0xBEB066E8L},{0x8E1C318FL,0L},{0xCF0533AAL,2L},{0xCE3FA614L,0x15E3A622L},{0L,(-9L)},{0L,0x6A5C1295L},{5L,1L},{0x840812F8L,1L},{5L,0x6A5C1295L}},{{0L,(-9L)},{0L,0x15E3A622L},{0xCE3FA614L,2L},{0xCF0533AAL,0L},{0x8E1C318FL,0xBEB066E8L},{0xC699C2D7L,0x8FF31CB2L},{0x71920AA9L,(-5L)},{0x67A1DD1EL,0xCE3FA614L},{0L,0x8E1C318FL},{8L,(-1L)}},{{(-9L),6L},{0xC243B78EL,(-1L)},{0x78FEEFDAL,1L},{0x1E8F50EFL,0L},{0x15E3A622L,0x09076461L},{(-1L),0xF2EC725BL},{0L,(-9L)},{1L,0x6A84C218L},{6L,0x67A1DD1EL},{0x1EC55BA6L,0x1EC55BA6L}},{{0L,0xD2AAA82AL},{2L,5L},{0xDF46183DL,0xC699C2D7L},{0x11E68745L,0xDF46183DL},{0xE374491DL,(-1L)},{0xE374491DL,0xDF46183DL},{0x11E68745L,0xC699C2D7L},{0xDF46183DL,5L},{2L,0xD2AAA82AL},{0L,0x1EC55BA6L}},{{0x1EC55BA6L,0x67A1DD1EL},{6L,0x6A84C218L},{1L,(-9L)},{0L,0xF2EC725BL},{(-1L),0x09076461L},{0x15E3A622L,0L},{0x1E8F50EFL,1L},{0x78FEEFDAL,0x6A84C218L},{0xC699C2D7L,8L},{(-1L),0x15E3A622L}},{{5L,0xFB2DC287L},{0x591C82CFL,(-1L)},{0x4BC85C25L,0x78FEEFDAL},{0xED89673EL,0xBEB066E8L},{0x8FF31CB2L,0L},{0xFB2DC287L,0x11D61EE9L},{0x71920AA9L,(-9L)},{(-1L),1L},{0x11D61EE9L,(-1L)},{1L,0xF2EC725BL}},{{0xE374491DL,8L},{0x09076461L,8L},{0xE374491DL,0xF2EC725BL},{1L,(-1L)},{0x11D61EE9L,1L},{(-1L),(-9L)},{0x71920AA9L,0x11D61EE9L},{0xFB2DC287L,0L},{0x8FF31CB2L,0xBEB066E8L},{0xED89673EL,0x78FEEFDAL}},{{0x4BC85C25L,(-1L)},{0x591C82CFL,0xFB2DC287L},{5L,0x15E3A622L},{(-1L),8L},{0xC699C2D7L,0x6A84C218L},{0xB762A810L,0xCE3FA614L},{2L,0xDF46183DL},{1L,0xCF0533AAL},{0xC243B78EL,0L},{(-1L),0x11E68745L}},{{6L,0L},{8L,0x4BC85C25L},{(-9L),(-9L)},{0xDF46183DL,0L},{(-9L),0xE374491DL},{1L,0x8FF31CB2L},{0x67A1DD1EL,1L},{0x058056B0L,0xD56A5F9BL},{0x058056B0L,1L},{0x67A1DD1EL,0x8FF31CB2L}}};
                short ***l_721 = &l_720[4][2];
                unsigned l_766 = 0x0960AE93L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_712[i] = &l_711[1][3];
                if ((safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((g_713 = ((*g_487) = l_711[2][4])) == (void*)0), (((void*)0 == l_714) && 0x34L))), (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_719[2][4][1], ((((*l_721) = l_720[3][2]) == &g_635[0][0]) ^ (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((*g_35), l_651)), 4294967286UL))))), l_719[2][4][1])))))
                {
                    int l_730 = 0x048E2AB6L;
                    int l_740 = 0xEA0786E2L;
                    (*l_591) &= (-1L);
                    if ((safe_add_func_uint16_t_u_u((+((*g_35) >= func_52((**g_703), (*p_27), l_640))), (l_719[2][4][1] = (safe_mod_func_uint32_t_u_u(l_730, (*g_613)))))))
                    {
                        (*g_131) = (*g_131);
                        p_27 = p_27;
                    }
                    else
                    {
                        unsigned short l_731 = 65530UL;
                        return l_731;
                    }
                    if ((*p_27))
                    {
                        unsigned char *l_736 = &l_560;
                        unsigned char *l_737 = &g_81[1];
                        int l_741 = 0xBA27AF19L;
                        (*l_591) = (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_737) = ((*l_736) = g_342[0])), ((void*)0 != &g_487))), (safe_sub_func_int8_t_s_s(0x32L, (((void*)0 != (*l_721)) >= (**g_634))))));
                        l_740 = 0xC4122F30L;
                        (*g_131) = (void*)0;
                        l_741 &= (((*l_640) = l_730) && g_87[2]);
                    }
                    else
                    {
                        return l_719[2][4][1];
                    }
                    for (l_545 = (-26); (l_545 >= (-29)); l_545--)
                    {
                        return l_719[2][4][1];
                    }
                }
                else
                {
                    short ****l_748 = &l_721;
                    int l_750 = (-7L);
                    int l_770 = 0x197790A7L;
                    l_719[2][4][1] = (*p_27);
                    if ((safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(1UL, 1)) != l_719[2][4][1]) == (((*l_748) = (void*)0) == (g_749 = &l_636))), 10)))
                    {
                        char l_761 = 0x07L;
                        int l_771[6][3][3] = {{{0x0B4C6502L,(-1L),0x0B4C6502L},{0L,0xAC52B892L,0xCB5D4690L},{(-10L),(-1L),(-10L)}},{{0L,(-3L),0xCB5D4690L},{0x0B4C6502L,(-1L),0x0B4C6502L},{0L,0xAC52B892L,0xCB5D4690L}},{{(-10L),(-1L),(-10L)},{0L,(-3L),0xCB5D4690L},{0x0B4C6502L,(-1L),0x0B4C6502L}},{{0L,0xAC52B892L,0xCB5D4690L},{(-10L),(-1L),(-10L)},{0L,(-3L),0xCB5D4690L}},{{0x0B4C6502L,(-1L),0x0B4C6502L},{0L,0xAC52B892L,0xCB5D4690L},{(-10L),(-1L),(-10L)}},{{0L,(-3L),0xCB5D4690L},{0x0B4C6502L,(-1L),0x0B4C6502L},{0L,0xAC52B892L,0xCB5D4690L}}};
                        int i, j, k;
                        (*l_591) = (g_342[0] & (l_719[2][4][1] < (!(l_750 && (((safe_lshift_func_uint16_t_u_s((0xF76BL <= (((safe_unary_minus_func_int16_t_s((l_719[2][4][1] && (247UL == (((safe_add_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s(((*l_573) = (((((*l_640) = ((*l_591) | (*g_613))) & g_63) == 0xDDL) >= (*g_35))), l_760)) < g_87[2]) | 0x49C3L), g_390)) < (*p_27)) != l_761))))) <= l_560) <= (*p_27))), l_761)) > l_750) == (**g_612))))));
                        l_770 |= (((*l_609) = ((safe_lshift_func_uint16_t_u_s(l_761, func_57((safe_add_func_uint32_t_u_u((func_57((*p_27), l_761, ((l_766 ^= (**g_612)) <= ((*l_591) |= (*p_27))), p_27) <= ((***g_749) = (safe_add_func_uint16_t_u_u(1UL, ((l_750 && (*p_27)) & l_750))))), (*p_27))), l_769, l_719[3][2][1], p_27))) | (*g_35))) <= 1L);
                        l_771[0][0][2] = (*p_27);
                        g_772 |= func_33(&l_544[0][4]);
                    }
                    else
                    {
                        int l_773[8][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                        int l_774 = 0xEDCCE4EBL;
                        int i, j;
                        l_774 = l_773[6][5];
                        g_29 ^= (safe_add_func_int8_t_s_s(l_719[2][4][1], ((void*)0 == l_712[1])));
                    }
                    for (l_592 = 0; (l_592 >= 0); l_592 -= 1)
                    {
                        (*l_591) |= l_777;
                        (**g_703) = (**g_703);
                        l_719[2][4][1] = (l_750 ^ (((*l_609) ^= 8UL) <= l_766));
                    }
                }
            }
            if ((func_33(l_780) < (safe_add_func_int8_t_s_s(l_760, (-4L)))))
            {
                int *l_792 = &g_23;
                int l_835 = 7L;
                for (g_29 = 2; (g_29 <= 7); g_29 += 1)
                {
                    char ****l_784 = (void*)0;
                    int *l_795 = &g_23;
                    int l_796 = 1L;
                    int l_798 = (-6L);
                    for (g_523 = 1; (g_523 <= 7); g_523 += 1)
                    {
                        int l_783[10][5] = {{5L,0L,0L,1L,5L},{1L,0xD4C390E7L,0xB7CBC20EL,0xB7CBC20EL,0xD4C390E7L},{5L,(-1L),0xB7CBC20EL,0x4CD167D4L,0x4CD167D4L},{(-1L),5L,(-1L),0xB7CBC20EL,0x4CD167D4L},{0xD4C390E7L,1L,0x4CD167D4L,1L,0xD4C390E7L},{(-1L),1L,5L,0xD4C390E7L,5L},{5L,5L,0x4CD167D4L,0xD4C390E7L,0L},{1L,(-1L),(-1L),1L,5L},{1L,0xD4C390E7L,0xB7CBC20EL,0xB7CBC20EL,0xD4C390E7L},{5L,(-1L),0xB7CBC20EL,0x4CD167D4L,0x4CD167D4L}};
                        int i, j;
                        l_783[7][1] = 0xCC4AA9E4L;
                        return g_73[g_29][g_523];
                    }
                    for (g_154 = 2; (g_154 <= 7); g_154 += 1)
                    {
                        char *****l_785 = (void*)0;
                        char *****l_786 = &l_586[2];
                        short ***l_789[7][8][4] = {{{&l_720[3][2],(void*)0,&l_720[3][2],&g_634},{(void*)0,&g_634,&l_636,(void*)0},{&l_720[2][1],(void*)0,&l_636,&g_634},{&l_636,(void*)0,&l_636,(void*)0},{&l_720[2][1],&l_720[0][1],&l_636,&l_720[0][2]},{(void*)0,&g_634,&l_720[3][2],(void*)0},{&l_720[3][2],(void*)0,&l_720[2][1],&g_634},{&l_720[3][2],&l_720[0][0],&l_720[3][2],(void*)0}},{{(void*)0,&l_636,&l_636,&g_634},{&l_720[2][1],&l_720[0][0],&l_636,&l_636},{&l_636,(void*)0,&l_636,(void*)0},{&l_720[2][1],&g_634,&l_636,&l_720[0][1]},{(void*)0,(void*)0,(void*)0,&l_720[1][0]},{(void*)0,&l_720[1][0],&l_636,&l_720[0][1]},{(void*)0,&l_720[0][1],(void*)0,&g_634},{&l_720[3][1],&g_634,&l_636,&l_636}},{{&l_636,&l_720[0][1],&l_636,&g_634},{&l_720[3][2],&l_720[1][0],&l_636,&l_720[3][2]},{&l_636,(void*)0,&l_636,&g_634},{&l_720[3][1],(void*)0,(void*)0,&l_720[3][2]},{(void*)0,&l_720[3][2],&l_636,&g_634},{(void*)0,&l_720[0][2],(void*)0,&l_636},{&l_720[3][1],&l_720[0][1],&l_636,&g_634},{&l_636,&l_720[0][2],&l_636,&l_720[0][1]}},{{&l_720[3][2],&l_720[3][2],&l_636,&l_720[1][0]},{&l_636,(void*)0,&l_636,(void*)0},{&l_720[3][1],(void*)0,(void*)0,&l_720[1][0]},{(void*)0,&l_720[1][0],&l_636,&l_720[0][1]},{(void*)0,&l_720[0][1],(void*)0,&g_634},{&l_720[3][1],&g_634,&l_636,&l_636},{&l_636,&l_720[0][1],&l_636,&g_634},{&l_720[3][2],&l_720[1][0],&l_636,&l_720[3][2]}},{{&l_636,(void*)0,&l_636,&g_634},{&l_720[3][1],(void*)0,(void*)0,&l_720[3][2]},{(void*)0,&l_720[3][2],&l_636,&g_634},{(void*)0,&l_720[0][2],(void*)0,&l_636},{&l_720[3][2],(void*)0,&l_636,&l_720[0][2]},{&l_720[3][1],&l_720[1][0],&l_720[2][1],(void*)0},{&l_636,&l_720[0][1],&l_720[2][1],&g_634},{&l_720[3][1],&g_634,&l_636,(void*)0}},{{&l_720[3][2],&l_636,&l_636,&g_634},{&l_636,&g_634,&l_720[3][1],(void*)0},{&l_636,&l_720[3][2],&l_636,&l_720[0][2]},{&l_720[3][2],&g_634,&l_636,&l_720[0][1]},{&l_720[3][1],&l_720[3][2],&l_720[2][1],&g_634},{&l_636,&g_634,&l_720[2][1],&l_720[0][1]},{&l_720[3][1],&l_636,&l_636,&l_720[0][0]},{&l_720[3][2],&g_634,&l_636,&l_720[0][1]}},{{&l_636,&l_720[0][1],&l_720[3][1],&g_634},{&l_636,&l_720[1][0],&l_636,&l_720[0][1]},{&l_720[3][2],(void*)0,&l_636,&l_720[0][2]},{&l_720[3][1],&l_720[1][0],&l_720[2][1],(void*)0},{&l_636,&l_720[0][1],&l_720[2][1],&g_634},{&l_720[3][1],&g_634,&l_636,(void*)0},{&l_720[3][2],&l_636,&l_636,&g_634},{&l_636,&g_634,&l_720[3][1],(void*)0}}};
                        int l_797 = 0x32E5F592L;
                        int i, j, k;
                        l_570 = (g_73[g_29][g_29] <= (l_784 != ((*l_786) = (void*)0)));
                        l_769 = ((g_73[g_29][g_29] | 1L) > ((safe_sub_func_int8_t_s_s(((*l_640) = func_57((l_789[4][6][0] != &g_634), (safe_mul_func_int8_t_s_s((-4L), 1UL)), g_73[g_29][g_29], l_792)), 255UL)) | g_73[g_29][g_29]));
                        (**g_703) = (**g_703);
                        l_798 &= (safe_rshift_func_uint16_t_u_u(func_52(l_795, (l_797 = (l_796 = g_73[g_29][g_29])), &g_307[0]), (&g_612 != &g_612)));
                    }
                }
                for (g_154 = (-4); (g_154 >= (-15)); g_154--)
                {
                    unsigned short l_813 = 0x506AL;
                    int l_825 = 0x90560C70L;
                    int ****l_826[9][4][4] = {{{(void*)0,&l_639[1][1][2],&g_703,&l_637[0]},{&l_639[1][1][2],&g_703,&l_637[0],&l_637[0]},{&l_639[2][1][2],&l_639[1][1][2],&l_639[2][1][2],&l_637[2]},{&g_703,&l_639[1][1][2],&l_637[0],&l_639[1][1][2]}},{{&g_703,&l_639[1][1][2],&l_637[0],&l_637[0]},{&g_703,&l_639[1][1][2],&l_637[0],&g_703},{&g_703,&l_639[1][1][2],&g_703,&l_637[0]},{&l_639[2][0][3],&l_637[2],(void*)0,&l_637[0]}},{{(void*)0,&l_637[0],&g_703,(void*)0},{&g_703,&l_637[0],&l_637[7],&l_637[0]},{&l_637[5],&l_637[2],&l_637[0],&l_637[0]},{&l_639[2][1][2],&l_639[1][1][2],&g_703,&g_703}},{{&l_639[2][0][3],&l_639[1][1][2],&l_639[1][1][2],&l_637[0]},{&l_639[2][0][3],&l_639[1][1][2],&g_703,&l_639[1][1][2]},{&l_639[2][1][2],&l_637[0],&l_637[0],&l_639[1][1][2]},{&l_637[5],&l_639[1][1][2],&l_637[7],&l_637[0]}},{{&g_703,&l_639[1][1][2],&g_703,&l_637[0]},{(void*)0,&l_639[1][1][2],(void*)0,&l_639[1][1][2]},{&l_639[2][0][3],&l_637[0],&g_703,&l_639[1][1][2]},{&g_703,&l_639[1][1][2],&l_637[0],&l_637[0]}},{{&g_703,&l_639[1][1][2],&l_637[0],&g_703},{&g_703,&l_639[1][1][2],&g_703,&l_637[0]},{&l_639[2][0][3],&l_637[2],(void*)0,&l_637[0]},{(void*)0,&l_637[0],&g_703,(void*)0}},{{&g_703,&l_637[0],&l_637[7],&l_637[0]},{&l_637[5],&l_637[2],&l_637[0],&l_637[0]},{&l_639[2][1][2],&l_639[1][1][2],&g_703,&g_703},{&l_639[2][0][3],&l_639[1][1][2],&l_639[1][1][2],&l_639[1][1][2]}},{{&g_703,&l_639[2][4][4],&l_639[2][0][3],&l_639[1][1][2]},{&l_637[0],&l_639[1][1][2],&l_639[1][1][2],&l_639[2][4][4]},{&l_639[2][1][2],&g_703,&l_639[2][0][3],(void*)0},{&l_637[0],(void*)0,&l_639[2][0][3],(void*)0}},{{&g_703,&g_703,&g_703,&l_639[2][4][4]},{&g_703,&l_639[1][1][2],&g_703,&l_639[1][1][2]},{&l_637[0],&l_639[2][4][4],&l_639[1][1][2],&l_639[1][1][2]},{&l_639[2][0][3],&g_703,&l_639[1][1][2],&l_639[0][4][3]}}};
                    int i, j, k;
                    for (g_126 = (-26); (g_126 == 21); g_126 = safe_add_func_int8_t_s_s(g_126, 1))
                    {
                        int l_812 = (-10L);
                        int l_819 = 0x15C055DFL;
                        (**g_703) = (void*)0;
                        (*l_591) = (safe_mod_func_int8_t_s_s((l_805 <= ((safe_add_func_int32_t_s_s((4294967295UL | ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((*l_792), 4)), (l_813 &= l_812))) ^ (safe_lshift_func_int16_t_s_u(l_816, (safe_add_func_uint16_t_u_u((l_819 = l_812), 0x9A6BL)))))), func_52((*g_131), (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((safe_mod_func_int32_t_s_s(0x97A18D97L, 0x33529451L)))), l_825)), &l_544[0][8]))) == (*g_35))), l_812));
                    }
                    if ((*l_792))
                        break;
                    for (g_521 = 0; (g_521 <= 0); g_521 += 1)
                    {
                        int l_844[5][8][6] = {{{(-7L),4L,0xE12226EAL,1L,0xEB0F11B9L,0x471628C9L},{0x0DCB9460L,0x094B33D4L,1L,0x04AC60B3L,(-1L),0x471628C9L},{4L,0xE3094D6CL,0xE12226EAL,(-1L),1L,1L},{(-5L),8L,0L,(-1L),(-1L),0L},{1L,1L,1L,1L,(-1L),0xE12226EAL},{0L,1L,0x471628C9L,(-1L),0x04AC60B3L,1L},{7L,0L,0x471628C9L,0xEB0F11B9L,1L,0xE12226EAL},{0L,0xEB0F11B9L,1L,0x9011B5A0L,0xC27A1CC3L,0L}},{{0x9011B5A0L,0xC27A1CC3L,0L,7L,(-1L),1L},{1L,0x04AC60B3L,0xE12226EAL,0L,(-1L),0x471628C9L},{(-1L),0L,(-9L),0x0DCB9460L,8L,2L},{(-1L),(-1L),0xC44CF14EL,0xD1E7907DL,0L,(-9L)},{(-1L),0x094B33D4L,0xA7CCCA73L,1L,(-1L),0xA7CCCA73L},{0xC27A1CC3L,7L,(-9L),0L,0L,0xC44CF14EL},{1L,0xD1E7907DL,2L,0x9011B5A0L,(-1L),(-9L)},{0x04AC60B3L,0L,2L,0xE3094D6CL,7L,0xC44CF14EL}},{{(-1L),(-5L),(-9L),(-1L),0x04AC60B3L,0xA7CCCA73L},{(-1L),0x04AC60B3L,0xA7CCCA73L,0x04AC60B3L,(-1L),(-9L)},{1L,(-1L),0xC44CF14EL,7L,0xE3094D6CL,2L},{(-1L),(-7L),(-9L),(-1L),0x9011B5A0L,2L},{0xEB0F11B9L,8L,0xC44CF14EL,0L,0L,(-9L)},{0x9011B5A0L,0L,0xA7CCCA73L,(-1L),1L,0xA7CCCA73L},{7L,0xC27A1CC3L,(-9L),0L,0xD1E7907DL,0xC44CF14EL},{0L,1L,2L,8L,0x0DCB9460L,(-9L)}},{{4L,1L,2L,(-5L),0xC27A1CC3L,0xC44CF14EL},{(-7L),0xE3094D6CL,(-9L),0L,0x880B7162L,0xA7CCCA73L},{0L,0x880B7162L,(-1L),9L,0x1E516844L,0x094B33D4L},{0x10DA7598L,0xAD0BC59DL,0x0DCB9460L,0L,0x56605F92L,0xEB0F11B9L},{0xBC6E8F66L,0L,0x094B33D4L,0x5E061FE4L,1L,0xEB0F11B9L},{0xAD0BC59DL,(-1L),0x0DCB9460L,0x84F7FFBFL,(-8L),0x094B33D4L},{0xB4A8AF87L,1L,(-1L),4L,4L,(-1L)},{0L,0L,0x094B33D4L,(-8L),0x84F7FFBFL,0x0DCB9460L}},{{0L,0x6DB6C3FEL,0xEB0F11B9L,1L,0x5E061FE4L,0x094B33D4L},{(-1L),0L,0xEB0F11B9L,0x56605F92L,0L,0x0DCB9460L},{(-3L),0x56605F92L,0x094B33D4L,0x1E516844L,9L,(-1L)},{0x1E516844L,9L,(-1L),(-1L),(-6L),0x094B33D4L},{0x6DB6C3FEL,0x5E061FE4L,0x0DCB9460L,6L,0x6A401FDEL,0xEB0F11B9L},{0x6A401FDEL,(-3L),0x094B33D4L,0xAD0BC59DL,0xB4A8AF87L,0xEB0F11B9L},{1L,1L,0x0DCB9460L,0x10DA7598L,0L,0x094B33D4L},{1L,0x1E516844L,(-1L),(-3L),0L,(-1L)}}};
                        unsigned char *l_845 = &l_560;
                        int i, j, k;
                        g_126 = ((&l_637[0] != l_826[4][3][1]) || ((safe_mul_func_uint16_t_u_u(((l_829[1] = &l_636) != (void*)0), (safe_mul_func_uint8_t_u_u(g_95[g_521], ((*l_792) >= (safe_add_func_int32_t_s_s(((p_27 == p_27) != g_339), l_834))))))) || (**g_634)));
                        l_835 = (*p_27);
                        p_27 = p_27;
                        g_29 = (((l_836 & ((1L > (4294967295UL > (((*l_845) ^= (((l_844[2][0][5] ^= (safe_add_func_int8_t_s_s((l_839[0][1][0] == &g_131), ((*g_35) < ((((*l_609) |= (safe_add_func_uint32_t_u_u((*l_792), 0x9824A322L))) >= (safe_add_func_int32_t_s_s((0xD448L > (-8L)), g_95[g_521]))) >= 0xA1D99E4DL))))) && l_844[2][0][5]) & (*g_35))) & (*l_792)))) <= 8UL)) | (*g_613)) | g_95[g_521]);
                    }
                }
            }
            else
            {
                char **l_846[7];
                int l_848[7];
                int *l_849[7][6][6] = {{{&l_593,(void*)0,&l_592,&l_570,&l_545,&l_593},{&l_592,&g_154,&g_154,&l_848[5],&l_593,&l_769},{&g_154,(void*)0,&l_769,&l_848[5],&g_154,&l_769},{&l_545,&l_848[5],&g_23,&g_154,&l_593,&l_769},{(void*)0,&l_545,&l_769,&l_545,(void*)0,(void*)0},{&l_592,&l_592,&l_769,&l_848[3],&l_593,&l_769}},{{&l_593,&g_154,&g_23,&l_592,&g_23,&l_769},{&l_570,(void*)0,&l_769,&l_570,&l_593,(void*)0},{&g_23,&g_154,&l_769,&g_154,&l_545,&l_769},{&g_154,&l_848[3],&g_23,(void*)0,&l_592,&l_769},{&l_593,&l_570,&l_769,(void*)0,&l_570,(void*)0},{&l_593,(void*)0,&l_769,&l_848[5],&g_154,&l_769}},{{&l_545,&l_848[5],&g_23,&g_154,&l_593,&l_769},{(void*)0,&l_545,&l_769,&l_545,(void*)0,(void*)0},{&l_592,&l_592,&l_769,&l_848[3],&l_593,&l_769},{&l_593,&g_154,&g_23,&l_592,&g_23,&l_769},{&l_570,(void*)0,&l_769,&l_570,&l_593,(void*)0},{&g_23,&g_154,&l_769,&g_154,&l_545,&l_769}},{{&l_848[5],&l_545,(void*)0,&g_23,(void*)0,&l_592},{(void*)0,&l_848[5],&l_570,(void*)0,&l_848[6],&g_154},{(void*)0,&g_23,&l_570,&l_848[4],&l_848[5],&l_592},{&l_570,&l_848[4],(void*)0,&l_593,(void*)0,&l_592},{&g_154,&g_23,&l_570,&g_23,&g_154,&g_154},{(void*)0,&l_570,&l_570,&l_545,(void*)0,&l_592}},{{(void*)0,(void*)0,(void*)0,&l_570,&l_848[2],&l_592},{&l_848[6],(void*)0,&l_570,&l_848[5],(void*)0,&g_154},{&l_848[2],&l_593,&l_570,(void*)0,&l_570,&l_592},{&l_848[5],&l_545,(void*)0,&g_23,(void*)0,&l_592},{(void*)0,&l_848[5],&l_570,(void*)0,&l_848[6],&g_154},{(void*)0,&g_23,&l_570,&l_848[4],&l_848[5],&l_592}},{{&l_570,&l_848[4],(void*)0,&l_593,(void*)0,&l_592},{&g_154,&g_23,&l_570,&g_23,&g_154,&g_154},{(void*)0,&l_570,&l_570,&l_545,(void*)0,&l_592},{(void*)0,(void*)0,(void*)0,&l_570,&l_848[2],&l_592},{(void*)0,&l_593,&l_593,&g_23,&l_848[5],&g_154},{&g_154,(void*)0,&l_593,&l_848[5],(void*)0,&l_848[5]}},{{(void*)0,&g_23,&l_545,&l_545,(void*)0,&l_848[5]},{&l_848[5],&g_23,&l_593,&l_593,(void*)0,&g_154},{&l_848[6],&l_545,&l_593,(void*)0,(void*)0,&l_848[5]},{(void*)0,(void*)0,&l_545,(void*)0,&l_848[6],&l_848[5]},{&l_570,&l_570,&l_593,&l_570,&l_570,&g_154},{(void*)0,&l_848[4],&l_593,&g_23,&l_848[2],&l_848[5]}}};
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_846[i] = &g_633;
                for (i = 0; i < 7; i++)
                    l_848[i] = 1L;
                (*l_591) = (!(l_846[4] == (g_847 = &l_640)));
                (**g_703) = (**g_703);
                (*g_131) = (void*)0;
                for (g_63 = 0; (g_63 == (-21)); g_63--)
                {
                    int l_856[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_856[i] = 0x9801AC14L;
                    for (g_390 = 0; (g_390 <= 2); g_390 += 1)
                    {
                        short l_852 = 0xEC65L;
                        l_852 = (*p_27);
                        g_29 = (safe_sub_func_int16_t_s_s(0x9AE6L, (((*p_27) & ((void*)0 == l_855[7][1][0])) || l_856[6])));
                    }
                    for (g_390 = 2; (g_390 <= 6); g_390 += 1)
                    {
                        unsigned l_870 = 0x3A4C491FL;
                        int l_872[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_872[i] = 0xAC4FC11CL;
                        l_872[3] |= (safe_add_func_uint16_t_u_u((65526UL > (safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((*l_591), (safe_add_func_int8_t_s_s((-1L), (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(l_869, 0)), l_870)))))), 0x4EFAL))), l_871));
                        (*g_131) = &l_856[1];
                        l_872[1] = ((***g_703) = (**g_131));
                    }
                }
            }
        }
        for (l_769 = 10; (l_769 >= 29); ++l_769)
        {
            int l_877 = 1L;
            int l_878 = (-5L);
            int l_889 = 0xB8633511L;
            l_878 = (((void*)0 == l_636) < (safe_rshift_func_int16_t_s_u(l_877, 12)));
            l_878 &= 0L;
            if (((*p_27) && (safe_sub_func_int32_t_s_s(func_57((*p_27), (safe_mul_func_int16_t_s_s(l_878, (g_390 |= (((void*)0 != p_27) | l_877)))), g_63, ((*g_131) = p_27)), 0xA56E6095L))))
            {
                char l_883 = 0L;
                int l_884 = 2L;
                l_883 = 0x046DB1C2L;
                for (l_877 = 0; (l_877 <= 0); l_877 += 1)
                {
                    int i;
                    if (g_81[(l_877 + 2)])
                        break;
                    l_884 = 0xF0C55C35L;
                    l_878 = (g_81[(l_877 + 2)] > l_878);
                    l_889 &= (0xBC9432EBL >= ((safe_mul_func_int8_t_s_s(0x31L, ((0x38L && (l_884 && 252UL)) == (0xF5L < (safe_rshift_func_uint16_t_u_s(l_878, 9)))))) >= l_884));
                }
                for (g_388 = 0; (g_388 >= 21); g_388++)
                {
                    (**g_703) = p_27;
                    g_154 = l_884;
                    if ((*p_27))
                        continue;
                }
                p_27 = p_27;
            }
            else
            {
                (*g_131) = &l_889;
            }
        }
    }
    else
    {
        unsigned char l_894 = 0x16L;
        g_893 = ((*g_131) = (void*)0);
        l_894 &= (*p_27);
    }
    l_895 = (*p_27);
    (**g_703) = p_27;
    return g_63;
}







static int func_33(char * p_34)
{
    unsigned char l_49 = 0xF0L;
    int *l_56[7] = {&g_29,&g_29,(void*)0,&g_29,&g_29,(void*)0,&g_29};
    unsigned short *l_86 = &g_73[6][0];
    int *l_88 = &g_23;
    char *l_306[10];
    int *l_327 = &g_126;
    char **l_397 = &g_35;
    char ***l_396 = &l_397;
    char ****l_395[6][4] = {{&l_396,&l_396,&l_396,&l_396},{(void*)0,&l_396,&l_396,&l_396},{&l_396,&l_396,&l_396,&l_396},{&l_396,&l_396,(void*)0,&l_396},{(void*)0,&l_396,&l_396,&l_396},{&l_396,&l_396,&l_396,&l_396}};
    short l_402 = (-5L);
    unsigned short l_450[3];
    int *l_455[5];
    char l_457 = (-9L);
    char *l_466[2];
    unsigned char l_516 = 254UL;
    int l_518 = 1L;
    unsigned char l_522[8] = {1UL,0x5DL,0x5DL,1UL,0x5DL,0x5DL,1UL,0x5DL};
    int i, j;
    for (i = 0; i < 10; i++)
        l_306[i] = &g_307[0];
    for (i = 0; i < 3; i++)
        l_450[i] = 0x6938L;
    for (i = 0; i < 5; i++)
        l_455[i] = &g_154;
    for (i = 0; i < 2; i++)
        l_466[i] = &g_95[0];
    (*g_131) = func_36(((*g_131) = func_41(((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(255UL, l_49)) < ((*l_86) = (l_49 >= (g_85 = (g_29 = (safe_mul_func_int8_t_s_s((((+func_52(l_56[4], (func_57(g_23, g_23, g_29, l_56[4]) > 1L), g_35)) > g_23) | g_23), g_84[4]))))))), 0x8D24L)) > 0x5FL), g_87[2], l_88)), g_154, l_56[4], l_306[6]);
    for (g_102 = (-9); (g_102 != 36); g_102 = safe_add_func_uint32_t_u_u(g_102, 5))
    {
        unsigned short **l_319 = (void*)0;
        unsigned short ***l_318[7];
        int **l_326 = &l_88;
        int **l_328 = (void*)0;
        int *l_330 = &g_23;
        int **l_329 = &l_330;
        int ***l_331 = &l_328;
        int **l_333 = &l_56[0];
        int ***l_332 = &l_333;
        char *l_336 = &g_307[2];
        short *l_337 = &g_84[4];
        short *l_338 = &g_339;
        unsigned *l_340 = &g_87[2];
        int l_341 = 0x26ED60B8L;
        char ****l_398[1];
        int l_413 = (-10L);
        int l_447 = 0xCD08C5B8L;
        unsigned l_517 = 0xD45745DCL;
        int i;
        for (i = 0; i < 7; i++)
            l_318[i] = &l_319;
        for (i = 0; i < 1; i++)
            l_398[i] = &l_396;
    }
    g_29 |= (*l_327);
    (*l_327) = func_57((func_57(l_518, ((~(*l_327)) > (((safe_sub_func_uint32_t_u_u(g_84[4], ((*l_327) & ((l_327 == l_88) >= g_81[0])))) <= g_339) & (*l_88))), g_307[3], l_56[4]) | g_307[0]), g_521, l_522[0], (*g_131));
    return g_523;
}







static int * func_36(int * p_37, char p_38, int * p_39, char * p_40)
{
    char l_308 = (-1L);
    int *l_311 = &g_126;
    int l_312 = 5L;
    l_308 = 0L;
    for (g_29 = 0; (g_29 > 27); ++g_29)
    {
        unsigned l_313 = 6UL;
        l_311 = (*g_131);
        l_313 = (l_312 || 0x8A4CL);
    }
    return p_37;
}







static int * func_41(char p_42, int p_43, int * p_44)
{
    int *l_91[1];
    int l_92 = 1L;
    int l_98[7];
    short l_99 = 0xBCF5L;
    int l_100 = 1L;
    int l_159 = 0xD96564E1L;
    int *l_163 = &l_100;
    int *l_165 = &g_23;
    unsigned l_174 = 1UL;
    unsigned **l_233 = (void*)0;
    unsigned short *l_301 = &g_85;
    int *l_304 = &l_98[5];
    int *l_305 = &g_29;
    int i;
    for (i = 0; i < 1; i++)
        l_91[i] = (void*)0;
    for (i = 0; i < 7; i++)
        l_98[i] = (-1L);
    if (g_23)
    {
        int *l_90 = (void*)0;
        int **l_89 = &l_90;
        char *l_93 = (void*)0;
        char *l_94[8][8][4] = {{{&g_95[0],(void*)0,(void*)0,&g_95[0]},{(void*)0,&g_95[0],(void*)0,&g_95[0]},{(void*)0,(void*)0,&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],(void*)0},{&g_95[0],&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],(void*)0,&g_95[0]},{&g_95[0],(void*)0,&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],(void*)0}},{{&g_95[0],&g_95[0],(void*)0,&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],(void*)0,&g_95[0]},{&g_95[0],(void*)0,&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],(void*)0},{&g_95[0],&g_95[0],&g_95[0],(void*)0},{(void*)0,(void*)0,&g_95[0],&g_95[0]}},{{&g_95[0],&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],(void*)0},{&g_95[0],(void*)0,&g_95[0],&g_95[0]},{(void*)0,&g_95[0],(void*)0,&g_95[0]},{&g_95[0],(void*)0,&g_95[0],(void*)0},{(void*)0,&g_95[0],&g_95[0],&g_95[0]},{(void*)0,&g_95[0],(void*)0,&g_95[0]},{&g_95[0],(void*)0,&g_95[0],(void*)0}},{{&g_95[0],&g_95[0],(void*)0,(void*)0},{&g_95[0],&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],(void*)0},{&g_95[0],(void*)0,&g_95[0],&g_95[0]},{&g_95[0],(void*)0,&g_95[0],(void*)0},{&g_95[0],&g_95[0],(void*)0,(void*)0},{&g_95[0],&g_95[0],(void*)0,(void*)0},{&g_95[0],&g_95[0],&g_95[0],&g_95[0]}},{{&g_95[0],&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],(void*)0,&g_95[0],&g_95[0]},{(void*)0,&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],(void*)0,&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],&g_95[0]},{(void*)0,(void*)0,&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],(void*)0,(void*)0}},{{(void*)0,&g_95[0],&g_95[0],(void*)0},{(void*)0,&g_95[0],&g_95[0],(void*)0},{&g_95[0],&g_95[0],(void*)0,&g_95[0]},{(void*)0,(void*)0,&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],(void*)0,&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],&g_95[0]},{(void*)0,(void*)0,(void*)0,&g_95[0]}},{{&g_95[0],&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],(void*)0},{(void*)0,&g_95[0],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_95[0]},{(void*)0,&g_95[0],(void*)0,(void*)0},{(void*)0,&g_95[0],(void*)0,&g_95[0]},{(void*)0,&g_95[0],(void*)0,&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],(void*)0}},{{&g_95[0],&g_95[0],(void*)0,&g_95[0]},{&g_95[0],&g_95[0],(void*)0,&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],(void*)0,(void*)0,&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],(void*)0,&g_95[0]},{(void*)0,&g_95[0],&g_95[0],&g_95[0]},{&g_95[0],&g_95[0],&g_95[0],&g_95[0]}}};
        unsigned *l_101 = &g_102;
        int l_205[9][7][4] = {{{0xEE1C27CBL,0x0ADBCEDEL,0xEE1C27CBL,0x4FF34F1AL},{0x913A345DL,0x820DD8AAL,0x6FB3F3E8L,0xC07AC505L},{0x573F5E43L,0x28FA6D0FL,0L,0x820DD8AAL},{0xC821130AL,(-1L),0L,0xF7DA083CL},{0x573F5E43L,4L,0x6FB3F3E8L,0xC821130AL},{0x913A345DL,0x59B8D13DL,0xEE1C27CBL,8L},{0xEE1C27CBL,8L,0xA4E5B9BDL,0xACE757D4L}},{{0x475F9C8FL,0xEFBF1047L,0x2BC51397L,1L},{4L,0L,0x568317A6L,0x18C01C7BL},{(-1L),0x568317A6L,0L,0x18C01C7BL},{0L,8L,1L,0xA4E5B9BDL},{0x5FB740B3L,0xAD0A9A31L,0x568317A6L,0x4FF34F1AL},{(-10L),0xD1BBFE58L,0L,(-8L)},{0x59B8D13DL,0L,0xEFBF1047L,1L}},{{0xAD0A9A31L,1L,8L,8L},{(-6L),(-6L),0x59B8D13DL,0x1156754FL},{0xEE1C27CBL,(-10L),4L,0L},{(-1L),0x1FE05BBDL,(-1L),4L},{(-2L),0x1FE05BBDL,0x28FA6D0FL,0L},{0x1FE05BBDL,(-10L),0x820DD8AAL,0x1156754FL},{0xACE757D4L,(-6L),0x0ADBCEDEL,8L}},{{0x2FAA0267L,1L,0xD1BBFE58L,1L},{0x28FA6D0FL,0L,0x2FAA0267L,(-8L)},{0x913A345DL,0xD1BBFE58L,0xF7DA083CL,0x4FF34F1AL},{0xBFBFA90FL,0xAD0A9A31L,0xF2D6737CL,0xA4E5B9BDL},{0x1156754FL,8L,0x0D745113L,0x18C01C7BL},{0xA4E5B9BDL,(-8L),1L,0x55B03BA4L},{0L,0xEE1C27CBL,0x18C01C7BL,0L}},{{(-1L),0x1156754FL,(-3L),0xC07AC505L},{(-7L),0L,0xF0C6DE10L,0L},{0L,0x475F9C8FL,0xEE1C27CBL,1L},{8L,0x46CB2544L,(-2L),(-7L)},{0xB2C95BC6L,0xACE757D4L,0x6FB3F3E8L,0xF0C6DE10L},{0xB2C95BC6L,0x0D745113L,0xFF88ED9EL,0x59B8D13DL},{0x55B03BA4L,0xF7DA083CL,0x5FB740B3L,0xB2C95BC6L}},{{0L,0x4FF34F1AL,0xF7DA083CL,0xD1BBFE58L},{0L,0L,8L,0xBFBFA90FL},{(-2L),1L,(-6L),4L},{0x475F9C8FL,0L,0x0D745113L,0L},{0xC07AC505L,4L,0xD1BBFE58L,(-8L)},{0x46CB2544L,4L,0x2BC51397L,(-1L)},{0x59B8D13DL,0xEFBF1047L,4L,0x28FA6D0FL}},{{1L,0x573F5E43L,0xC821130AL,0xF0C6DE10L},{0x1FE05BBDL,0L,(-3L),(-2L)},{0xC821130AL,(-7L),(-7L),0xC821130AL},{0x28FA6D0FL,(-10L),0xF2D6737CL,0xCEA8323AL},{(-8L),(-1L),0x1FE05BBDL,(-1L)},{0xFF88ED9EL,8L,0L,(-1L)},{1L,(-1L),0L,0xCEA8323AL}},{{0x5FB740B3L,(-10L),0xEFBF1047L,0xC821130AL},{0x820DD8AAL,(-7L),0x55B03BA4L,(-2L)},{0x568317A6L,0L,4L,0xF0C6DE10L},{0xEFBF1047L,0x573F5E43L,0x6FB3F3E8L,0x28FA6D0FL},{(-1L),0xEFBF1047L,0x2FAA0267L,(-1L)},{8L,4L,0x18C01C7BL,(-8L)},{0xAD0A9A31L,4L,0x475F9C8FL,0L}},{{0L,0L,0x913A345DL,4L},{0xCEA8323AL,8L,0xACE757D4L,0L},{0x913A345DL,0xCEA8323AL,0L,4L},{0x820DD8AAL,0xFF88ED9EL,0x820DD8AAL,1L},{0L,(-7L),(-1L),0x475F9C8FL},{0xDC65A50DL,0xEFBF1047L,(-8L),(-7L)},{0x55B03BA4L,1L,(-8L),0xA4E5B9BDL}}};
        int i, j, k;
        (*l_89) = &p_43;
        if ((((*l_89) != (l_91[0] = &p_43)) < ((*l_101) = (g_87[2] = ((func_57((p_43 >= (3L && (g_84[4] || p_43))), (p_42 = l_92), (l_98[3] &= (safe_add_func_int8_t_s_s(func_52(&p_43, g_75, &g_95[0]), g_87[5]))), &g_29) > l_99) ^ l_100)))))
        {
            unsigned char *l_109 = &g_81[1];
            int l_110 = 0x47AAA1B4L;
            int l_111 = 1L;
            l_111 &= (safe_div_func_int16_t_s_s((g_84[4] = (*l_90)), (safe_sub_func_int32_t_s_s(func_57((safe_sub_func_uint8_t_u_u(g_63, ((*l_109) = (0x1305L <= (-10L))))), (((*l_101) = 2UL) < g_29), l_110, (*l_89)), (*p_44)))));
            for (g_75 = 14; (g_75 < 49); g_75++)
            {
                (*l_89) = (*l_89);
                l_91[0] = ((*l_89) = &g_63);
            }
            (*l_90) = l_111;
        }
        else
        {
            int l_114 = 0x935BBF9DL;
            int *l_123 = &l_98[6];
            unsigned l_127 = 4UL;
            unsigned short *l_128 = &g_73[2][7];
            int *l_164[7][2][7] = {{{(void*)0,&g_23,&l_98[0],(void*)0,(void*)0,&l_98[0],&g_23},{(void*)0,(void*)0,&l_98[4],(void*)0,(void*)0,&g_126,&g_29}},{{(void*)0,&l_98[3],&g_126,&g_23,(void*)0,(void*)0,(void*)0},{(void*)0,&g_63,&g_63,(void*)0,&g_23,&g_29,&l_92}},{{&g_126,(void*)0,(void*)0,(void*)0,&g_23,&g_154,&g_126},{&l_92,&g_154,&g_29,(void*)0,&g_29,&g_154,&l_92}},{{&g_154,(void*)0,&l_98[3],&g_126,&g_126,&g_23,(void*)0},{&g_63,&l_100,&l_98[2],&g_29,(void*)0,(void*)0,&g_29}},{{&l_98[3],&g_63,&l_98[3],&l_98[0],&g_154,&g_23,&g_23},{&g_154,&g_63,&g_29,&l_100,&g_63,&l_98[4],&g_63}},{{&g_23,&g_154,&g_154,&g_154,&g_126,&g_126,&l_98[0]},{(void*)0,(void*)0,&l_98[2],&g_23,&g_154,(void*)0,&l_100}},{{&g_126,&g_126,(void*)0,&g_126,&g_23,&g_126,(void*)0},{(void*)0,(void*)0,&g_63,&g_63,&g_23,&l_98[4],&l_98[3]}}};
            char **l_202 = &l_94[4][2][3];
            char ***l_201 = &l_202;
            int i, j, k;
            g_29 = (((*p_44) || (0xA1L <= l_114)) < p_42);
            if ((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(0xDA44L, 0)) < 0x1AL), (((((((safe_mul_func_uint8_t_u_u((func_57((**l_89), p_43, g_87[3], l_123) < ((*l_128) = (p_42 <= ((((g_126 = (g_95[0] = (safe_add_func_int16_t_s_s((*l_90), (*l_123))))) != l_127) > g_73[4][0]) | 0x712EL)))), (**l_89))) != g_84[3]) || 8L) == 0x1DL) > p_43) || 0xCF99L) <= 0x42B5L))))
            {
                int *l_141 = &l_98[3];
                (**l_89) = (safe_add_func_uint16_t_u_u(((g_131 == &g_132) >= (safe_unary_minus_func_uint16_t_u((((+((safe_unary_minus_func_int32_t_s(((*l_123) = (safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(func_52(((*g_131) = l_141), (*p_44), &p_42), g_29)), p_43)), (safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_43, 0x2E9FL)), p_42))))))) ^ 0x91L)) | 0x5A5CL) < (*l_90))))), g_84[6]));
                if (((**l_89) &= (*l_123)))
                {
                    unsigned l_150 = 4294967295UL;
                    unsigned short *l_157 = &g_73[4][0];
                    (*l_90) |= (*g_132);
                    for (g_126 = 5; (g_126 >= 0); g_126 -= 1)
                    {
                        (*l_89) = &p_43;
                    }
                    (*l_90) = ((**g_131) = (-1L));
                    if (((safe_div_func_int8_t_s_s((-1L), ((*p_44) & g_81[0]))) != ((*l_90) || (((safe_sub_func_int8_t_s_s(l_150, (g_73[7][7] & p_42))) <= (((g_73[4][0] > g_84[6]) & 0x3CL) > p_42)) | p_42))))
                    {
                        char *l_153[3][5] = {{&g_95[0],&g_95[0],&g_95[0],(void*)0,&g_95[0]},{&g_95[0],(void*)0,&g_95[0],(void*)0,&g_95[0]},{&g_95[0],(void*)0,&g_95[0],&g_95[0],&g_95[0]}};
                        int l_158 = 0xB03A72CAL;
                        int i, j;
                        l_159 |= func_57((**g_131), ((((safe_lshift_func_int8_t_s_u((&p_42 != (l_153[2][0] = &p_42)), 2)) == ((g_154 < ((*g_131) != (*g_131))) || func_57(((safe_mul_func_uint16_t_u_u(g_102, (p_43 | (((((&g_75 == l_157) & l_158) > g_87[6]) != g_85) >= 65530UL)))) != g_73[1][1]), p_42, g_95[0], (*g_131)))) != (*l_141)) <= p_42), (*l_123), (*g_131));
                        (*g_131) = (*g_131);
                    }
                    else
                    {
                        (*g_132) = (safe_lshift_func_uint8_t_u_u((p_43 < (p_42 = 0L)), p_43));
                        (*l_89) = (*g_131);
                    }
                }
                else
                {
                    int *l_162 = &l_98[3];
                    return l_165;
                }
                (*g_131) = (*g_131);
                for (l_114 = 0; (l_114 <= 11); l_114 = safe_add_func_int32_t_s_s(l_114, 1))
                {
                    (**l_89) = (safe_add_func_uint16_t_u_u(0UL, ((*l_128) |= p_43)));
                }
            }
            else
            {
                unsigned short l_182 = 0x205BL;
                int l_200 = 0x38E3D9C5L;
                for (p_43 = 0; (p_43 <= 2); p_43 += 1)
                {
                    unsigned short **l_173 = &l_128;
                    for (l_100 = 2; (l_100 >= 0); l_100 -= 1)
                    {
                        int l_170 = 0L;
                        unsigned short **l_171 = &l_128;
                        unsigned short ***l_172[1][4][5] = {{{&l_171,&l_171,&l_171,&l_171,&l_171},{(void*)0,&l_171,(void*)0,(void*)0,&l_171},{&l_171,(void*)0,(void*)0,&l_171,(void*)0},{&l_171,&l_171,&l_171,&l_171,&l_171}}};
                        int i, j, k;
                        l_170 |= (g_63 |= l_98[(p_43 + 2)]);
                        g_29 = l_98[(p_43 + 2)];
                        l_173 = l_171;
                        (*l_123) = l_174;
                    }
                }
                for (g_63 = 0; (g_63 == 19); g_63++)
                {
                    unsigned char *l_177 = &g_81[1];
                    int l_194 = 0x31B94480L;
                    (*l_123) = ((p_43 == (((*l_101) ^= (((((*l_177) = p_43) <= (safe_rshift_func_uint16_t_u_u(0xE51EL, 4))) <= (p_42 < g_95[0])) > ((*l_128) = 0xB859L))) > ((l_182 = ((safe_add_func_uint8_t_u_u(g_95[0], (p_42 & (0xEE82L | p_42)))) || 65529UL)) ^ p_43))) <= g_126);
                    (*l_89) = (*g_131);
                    for (l_174 = 12; (l_174 < 53); ++l_174)
                    {
                        unsigned *l_185 = &g_87[4];
                        int l_195 = 0L;
                        p_43 = ((~((*p_44) | p_42)) != (((+(g_63 > (((*l_101) = (~6UL)) & ((*l_185) = 4UL)))) & (+(*p_44))) != (l_195 = (p_43 != (safe_lshift_func_int16_t_s_u((p_42 <= (safe_sub_func_int8_t_s_s((l_194 = (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(p_42, p_42)), g_84[0]))), 253UL))), 9))))));
                    }
                    (*l_163) = (!((*l_123) = l_182));
                }
                for (l_92 = 0; (l_92 >= 0); l_92 -= 1)
                {
                    int ***l_198 = &l_89;
                    unsigned char *l_199 = &g_81[1];
                    int i;
                    (*l_123) |= (l_182 == (safe_mul_func_int8_t_s_s((((*l_198) = &p_44) != &l_91[l_92]), ((*l_199) = g_75))));
                    (**l_198) = (*g_131);
                    l_200 = g_81[1];
                    if (l_200)
                        continue;
                }
                (*l_89) = (void*)0;
            }
            (*l_201) = &g_35;
            (*l_123) |= 0xC6B6CE79L;
        }
        (*l_89) = (*l_89);
        l_205[8][1][1] |= (safe_div_func_uint32_t_u_u(g_95[0], (*l_163)));
    }
    else
    {
        int **l_206 = &l_165;
        unsigned short *l_284[9][10] = {{&g_73[1][5],(void*)0,(void*)0,&g_85,&g_75,&g_73[4][0],&g_75,&g_73[4][0],&g_75,&g_85},{(void*)0,&g_75,(void*)0,&g_73[4][0],(void*)0,&g_73[4][0],&g_75,(void*)0,&g_73[6][6],&g_75},{(void*)0,(void*)0,&g_73[1][5],(void*)0,(void*)0,&g_85,&g_75,(void*)0,&g_75,&g_85},{&g_73[6][6],&g_73[4][0],(void*)0,&g_73[4][0],&g_73[4][4],&g_73[4][0],(void*)0,&g_75,(void*)0,&g_75},{(void*)0,&g_73[4][0],&g_73[4][0],&g_73[4][0],&g_75,(void*)0,&g_75,&g_75,&g_73[4][4],&g_75},{&g_75,&g_73[4][0],&g_73[4][4],&g_75,&g_73[4][4],&g_73[4][0],&g_75,(void*)0,(void*)0,&g_85},{&g_75,&g_85,(void*)0,(void*)0,&g_73[1][5],(void*)0,(void*)0,&g_85,&g_75,(void*)0},{(void*)0,&g_85,&g_75,&g_73[4][0],&g_75,&g_73[4][0],&g_75,&g_85,(void*)0,(void*)0},{&g_73[4][4],&g_73[4][0],&g_75,(void*)0,(void*)0,&g_85,&g_75,&g_85,&g_73[4][0],(void*)0}};
        unsigned short **l_283 = &l_284[4][3];
        char *l_298 = (void*)0;
        int i, j;
        (*l_206) = ((*g_131) = &p_43);
        for (g_63 = 6; (g_63 >= 0); g_63 -= 1)
        {
            char **l_218 = &g_35;
            char ***l_217[6] = {&l_218,&l_218,&l_218,&l_218,&l_218,&l_218};
            int l_222 = 0x7A7DFD5DL;
            int l_231 = 0x069B4DB9L;
            unsigned short *l_265 = &g_85;
            int i;
            for (p_43 = 5; (p_43 >= 2); p_43 -= 1)
            {
                char ***l_219 = &l_218;
                int l_224 = 0x93518572L;
                for (g_85 = 1; (g_85 <= 6); g_85 += 1)
                {
                    int l_223 = 1L;
                    int i;
                    if (g_87[p_43])
                        break;
                    for (g_29 = 0; (g_29 <= 6); g_29 += 1)
                    {
                        char ****l_220 = &l_219;
                        unsigned *l_228 = &g_102;
                        unsigned **l_227 = &l_228;
                        l_224 ^= (l_223 = (safe_sub_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u(8L, 3)) == (l_222 = (((safe_rshift_func_uint8_t_u_s((*l_163), (safe_div_func_uint8_t_u_u(p_43, 0xB4L)))) && (g_95[0] &= (safe_div_func_int8_t_s_s((p_43 <= (l_217[2] == ((*l_220) = l_219))), g_23)))) || (g_221 == (void*)0)))) && p_43), 0xBADA1B3BL)));
                        if ((*p_44))
                            break;
                        (*l_163) = ((l_224 = ((+(safe_add_func_uint32_t_u_u(((&p_44 == &p_44) > (-4L)), (**g_131)))) || (((*l_227) = p_44) == p_44))) != (*l_165));
                    }
                    (*l_163) &= 0x2F40358BL;
                    for (l_92 = 6; (l_92 >= 2); l_92 -= 1)
                    {
                        (*l_163) |= (**g_131);
                        (*l_163) |= (safe_div_func_uint16_t_u_u(0xF4D6L, 0xFA22L));
                    }
                }
                (*l_163) = (*p_44);
            }
            if ((l_231 &= (**g_131)))
            {
                if ((**g_131))
                {
                    for (p_43 = 4; (p_43 >= 0); p_43 -= 1)
                    {
                        short l_232 = 0x9F98L;
                        int i;
                        l_232 |= ((*l_163) = 0x940B1ADAL);
                        (*l_163) = ((l_232 & p_42) & (g_87[(p_43 + 1)] = ((l_233 != (void*)0) > g_81[2])));
                        (*l_206) = &p_43;
                    }
                }
                else
                {
                    int *l_247 = (void*)0;
                    if ((**l_206))
                        break;
                    for (l_92 = 6; (l_92 >= 0); l_92 -= 1)
                    {
                        int *l_234[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_234[i] = &g_63;
                        (*g_131) = (p_44 = l_234[0]);
                        (**l_206) = ((safe_div_func_uint32_t_u_u(((0UL != g_84[l_92]) || ((safe_rshift_func_uint16_t_u_s(g_84[l_92], (g_84[g_63] || (safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_43, 1UL)), p_43)), (g_87[2] >= (p_42 >= 0xC7L)))) <= (*p_44)), g_87[3]))))) < (**l_206))), (*g_132))) | 0xCCL);
                    }
                    return l_247;
                }
            }
            else
            {
                (*l_163) = ((void*)0 == &g_75);
            }
            (*l_165) ^= (*p_44);
            (*l_163) ^= ((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((((~((g_75 & (g_87[g_63] = (safe_rshift_func_int16_t_s_u((**l_206), 8)))) >= (safe_add_func_int32_t_s_s((0x5EL < ((void*)0 == &g_95[0])), (safe_div_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(((*l_265) &= ((safe_unary_minus_func_uint16_t_u((**l_206))) < (+((-1L) <= (0x5ABBL > (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((p_42 = p_43), p_43)) & (-1L)), (**l_206)))))))), (*l_165))) >= p_43) <= 0xF0ADL), 0x8315L)))))) == (**g_131)) && p_43), 1UL)), 0)) & 0xC5L);
        }
        for (l_159 = 8; (l_159 > 21); ++l_159)
        {
            unsigned short **l_287 = &l_284[0][3];
            int l_294 = 0x20810492L;
            unsigned l_295[4][9][7] = {{{0x56D45380L,4294967295UL,0x88194C3CL,4294967295UL,0x56D45380L,7UL,0x59364BBAL},{1UL,0xFD70F741L,0xA472B082L,0UL,1UL,9UL,0xA472B082L},{0xF24CAD0BL,4294967289UL,0UL,0x0ED0C419L,1UL,0x8FAC9DCBL,4294967295UL},{1UL,0UL,4294967295UL,4294967295UL,0UL,1UL,3UL},{0x56D45380L,1UL,4294967290UL,4294967289UL,4294967293UL,3UL,4294967290UL},{4294967294UL,0UL,0x75DDC7E6L,9UL,1UL,3UL,0xFD70F741L},{0xF24CAD0BL,0x0ED0C419L,0x5CFD7D50L,1UL,0x5CFD7D50L,0x0ED0C419L,0xF24CAD0BL},{0x216F0C6BL,1UL,0xFD70F741L,0xA472B082L,0UL,1UL,9UL},{0x88194C3CL,7UL,1UL,0x0ED0C419L,0x56D45380L,0x9190592FL,0x3B66BD2AL}},{{1UL,0UL,0xFD70F741L,4294967294UL,4294967294UL,0xFD70F741L,0UL},{0x14CAD00DL,4294967289UL,0x5CFD7D50L,2UL,0xD0F18263L,1UL,0UL},{1UL,1UL,0x75DDC7E6L,0x7F822788L,1UL,1UL,9UL},{4294967293UL,0x9190592FL,0x59364BBAL,2UL,4294967290UL,2UL,0x59364BBAL},{0UL,9UL,0x01BEEFEFL,4294967294UL,0x170CCA3BL,4294967295UL,0xFD70F741L},{1UL,2UL,0xB712EFF3L,0x0ED0C419L,4294967295UL,3UL,4294967295UL},{1UL,0x216F0C6BL,0x7F822788L,0xA472B082L,0x170CCA3BL,0x170CCA3BL,0xA472B082L},{0x56D45380L,0x8FAC9DCBL,0x56D45380L,1UL,4294967290UL,4294967289UL,4294967293UL},{1UL,0x01BEEFEFL,3UL,9UL,1UL,0x01BEEFEFL,0x7F822788L}},{{0xB712EFF3L,2UL,1UL,3UL,0xD6BCB5EAL,2UL,0xD6BCB5EAL},{1UL,0xAA570827L,0UL,0x7F822788L,0UL,4294967294UL,0xA472B082L},{0x311C0FABL,4294967291UL,0x88194C3CL,7UL,1UL,0x0ED0C419L,0x56D45380L},{0UL,0UL,0UL,9UL,0xAA570827L,0xA472B082L,0xA472B082L},{4294967295UL,0x9190592FL,0xD0F18263L,0x9190592FL,4294967295UL,1UL,0xD6BCB5EAL},{0x216F0C6BL,4294967294UL,0UL,4294967295UL,0x92CF5868L,9UL,0UL},{0x27F36DEEL,0x8FAC9DCBL,0x59364BBAL,7UL,0x56D45380L,4294967295UL,0x88194C3CL},{0x216F0C6BL,4294967295UL,0x7F822788L,1UL,9UL,0x01BEEFEFL,0xFD70F741L},{4294967295UL,4294967289UL,0xB6AC5798L,3UL,0x14CAD00DL,4294967291UL,1UL}},{{0UL,1UL,9UL,0xA472B082L,0x92CF5868L,1UL,0x01BEEFEFL},{0x311C0FABL,4294967289UL,4294967287UL,4294967295UL,4294967287UL,4294967289UL,0x311C0FABL},{1UL,4294967295UL,0x01BEEFEFL,0x92CF5868L,0xAA570827L,0UL,0UL},{0xF24CAD0BL,0x8FAC9DCBL,0xD6BCB5EAL,4294967289UL,0xD0F18263L,4294967291UL,4294967295UL},{0x170CCA3BL,4294967294UL,0x01BEEFEFL,9UL,0UL,0x216F0C6BL,0x75DDC7E6L},{4294967287UL,0x8FAC9DCBL,4294967293UL,0x0ED0C419L,0x3B66BD2AL,4294967289UL,0x59364BBAL},{0x92CF5868L,0UL,0UL,0xAA570827L,0x92CF5868L,0x01BEEFEFL,4294967295UL},{0x14CAD00DL,4294967289UL,0xD6BCB5EAL,0x0ED0C419L,0xB6AC5798L,0x0ED0C419L,0xD6BCB5EAL},{9UL,9UL,9UL,0UL,1UL,1UL,0x75DDC7E6L}}};
            int i, j, k;
            for (l_92 = 9; (l_92 <= 5); l_92 = safe_sub_func_int16_t_s_s(l_92, 6))
            {
                int l_278 = 0x2503CDE4L;
                int l_293 = (-1L);
                for (g_85 = 0; (g_85 <= 6); g_85 += 1)
                {
                    unsigned short ***l_285 = (void*)0;
                    unsigned short ***l_286 = &l_283;
                    int *l_288 = (void*)0;
                    int i;
                    (*l_163) &= (safe_lshift_func_int16_t_s_u(func_57(g_87[g_85], (safe_div_func_int16_t_s_s(g_87[g_85], ((g_81[0] = (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_278, g_87[g_85])), 3))) | (safe_mul_func_int8_t_s_s(((~g_87[g_85]) < ((safe_div_func_uint32_t_u_u(func_57((((*l_286) = l_283) == l_287), p_42, l_278, l_288), (*p_44))) >= 0UL)), 0x72L))))), (*l_165), (*g_131)), l_278));
                    if ((*g_132))
                        continue;
                    if (((*l_163) = 0xCC018C45L))
                    {
                        return l_288;
                    }
                    else
                    {
                        (*g_131) = (*l_206);
                        (*g_131) = &p_43;
                        (*l_163) = (safe_div_func_int16_t_s_s((p_42 & (func_52(((*l_206) = (*g_131)), (safe_mod_func_int8_t_s_s(l_293, l_293)), &g_95[0]) <= l_294)), p_43));
                        if ((**g_131))
                            continue;
                    }
                }
                l_293 |= func_57((*g_132), l_295[1][7][3], func_52((*g_131), (safe_add_func_int16_t_s_s((-3L), 0xF7F4L)), l_298), (*g_131));
                (*l_206) = (*g_131);
            }
            if ((**g_131))
                break;
        }
        (**g_131) = (g_126 &= ((*p_44) != ((*g_132) ^ p_43)));
    }
    (*l_163) = (safe_mul_func_uint8_t_u_u((((*l_301) ^= p_43) > g_73[4][0]), (safe_mod_func_uint8_t_u_u(p_42, (*l_165)))));
    return l_305;
}







static int func_52(int * p_53, int p_54, char * p_55)
{
    int *l_64[4] = {&g_29,&g_29,&g_29,&g_29};
    unsigned l_69[10] = {0x5E26C5F5L,0UL,0x5E26C5F5L,0UL,0x5E26C5F5L,0UL,0x5E26C5F5L,0UL,0x5E26C5F5L,0UL};
    int l_83 = 0xE8D13708L;
    int i;
    p_54 |= 0x902820A3L;
    for (p_54 = (-21); (p_54 <= 4); ++p_54)
    {
        int *l_67[3];
        int **l_68 = &l_64[2];
        int i;
        for (i = 0; i < 3; i++)
            l_67[i] = &g_63;
        (*l_68) = l_67[2];
        if (l_69[7])
        {
            l_67[0] = ((*l_68) = &g_23);
        }
        else
        {
            int *l_79 = &g_29;
            for (g_63 = 0; (g_63 <= 3); g_63 += 1)
            {
                unsigned short *l_72 = &g_73[4][0];
                unsigned short *l_74 = &g_75;
                unsigned short l_76 = 4UL;
                unsigned char *l_80[6][5][3] = {{{&g_81[2],&g_81[2],(void*)0},{&g_81[1],&g_81[1],&g_81[1]},{&g_81[2],&g_81[2],(void*)0},{(void*)0,&g_81[1],&g_81[1]},{&g_81[1],&g_81[2],(void*)0}},{{&g_81[0],&g_81[1],&g_81[1]},{&g_81[2],&g_81[2],(void*)0},{&g_81[1],&g_81[1],&g_81[1]},{&g_81[2],&g_81[2],(void*)0},{(void*)0,&g_81[1],&g_81[1]}},{{&g_81[1],&g_81[2],(void*)0},{&g_81[0],&g_81[1],&g_81[1]},{&g_81[2],&g_81[2],(void*)0},{&g_81[1],&g_81[1],&g_81[1]},{&g_81[2],&g_81[2],(void*)0}},{{(void*)0,&g_81[1],&g_81[1]},{&g_81[1],&g_81[2],(void*)0},{&g_81[0],&g_81[1],&g_81[1]},{&g_81[2],&g_81[1],(void*)0},{(void*)0,&g_81[1],&g_81[1]}},{{&g_81[1],&g_81[1],(void*)0},{&g_81[0],&g_81[1],&g_81[1]},{&g_81[2],&g_81[1],(void*)0},{&g_81[1],&g_81[1],&g_81[1]},{&g_81[2],&g_81[1],(void*)0}},{{(void*)0,&g_81[1],&g_81[1]},{&g_81[1],&g_81[1],(void*)0},{&g_81[0],&g_81[1],&g_81[1]},{&g_81[2],&g_81[1],(void*)0},{&g_81[1],&g_81[1],&g_81[1]}}};
                int l_82 = 0x2DC26034L;
                int i, j, k;
                l_82 ^= (safe_add_func_int16_t_s_s((g_29 & g_29), (g_63 <= (p_54 || (g_81[2] &= (((+((*l_74) ^= ((*l_72) = ((*l_68) != &p_54)))) < 65530UL) && ((l_76 >= (safe_mul_func_int8_t_s_s((((void*)0 != l_79) > g_29), (*l_79)))) != 0xA2L)))))));
            }
            return g_81[2];
        }
    }
    return l_83;
}







static unsigned short func_57(int p_58, char p_59, char p_60, int * p_61)
{
    int *l_62 = &g_63;
    (*l_62) &= g_29;
    return (*l_62);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_73[i][j], "g_73[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_81[i], "g_81[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_87[i], "g_87[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_307[i], "g_307[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_339, "g_339", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_342[i], "g_342[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_772, "g_772", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_991, "g_991", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_1166[i][j][k], "g_1166[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1200, "g_1200", print_hash_value);
    transparent_crc(g_1230, "g_1230", print_hash_value);
    transparent_crc(g_1253, "g_1253", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_1279[i][j][k], "g_1279[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1336, "g_1336", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1436[i][j], "g_1436[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1464, "g_1464", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
