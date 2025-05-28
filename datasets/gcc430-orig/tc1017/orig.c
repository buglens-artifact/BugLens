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



static short g_2[6][3] = {{1L,0xE871L,1L},{1L,(-7L),0x7528L},{1L,0L,0xFF55L},{1L,0xE871L,1L},{1L,(-7L),0x7528L},{1L,0L,0xFF55L}};
static int g_5 = 0x9008CF5AL;
static int g_21 = 1L;
static int *g_43 = &g_21;
static int **g_42 = &g_43;
static unsigned g_49 = 4294967289UL;
static int g_73 = 0xD018D198L;
static unsigned char g_104 = 1UL;
static short *g_109 = &g_2[5][0];
static short **g_108 = &g_109;
static char g_148 = 0x0FL;
static int g_150[9][7] = {{0x72C582E5L,1L,0x72C582E5L,1L,7L,0x72C582E5L,0x0BCAFD48L},{7L,1L,1L,0L,1L,0x324AB99CL,1L},{0xC51AB325L,1L,1L,0xC51AB325L,0x0BCAFD48L,0x72C582E5L,7L},{1L,(-1L),1L,0x0C89A788L,7L,1L,1L},{0x0BCAFD48L,1L,0xC51AB325L,1L,0x0BCAFD48L,1L,1L},{1L,1L,0x324AB99CL,1L,0xAB53605FL,0x324AB99CL,0x0C89A788L},{0xAB53605FL,0x0C89A788L,0x1F60A75AL,0x1F60A75AL,0x0C89A788L,0xAB53605FL,1L},{1L,1L,(-1L),1L,0x0C89A788L,7L,1L},{0x0BCAFD48L,(-1L),0xAB53605FL,0x72C582E5L,0xAB53605FL,(-1L),0x0BCAFD48L}};
static unsigned char g_155 = 0x7DL;
static unsigned short g_164 = 0UL;
static char g_172 = 0x54L;
static unsigned g_175 = 4294967287UL;
static int g_198 = 0x3523AF13L;
static unsigned char g_199 = 255UL;
static unsigned char g_211 = 0xFFL;
static int g_249 = (-1L);
static char g_250 = 1L;
static short g_251 = 0L;
static unsigned char g_252 = 0UL;
static int g_292[3] = {0xFEC160A1L,0xFEC160A1L,0xFEC160A1L};
static unsigned *g_301[6][7] = {{&g_49,&g_49,&g_49,&g_175,(void*)0,&g_49,&g_175},{&g_49,&g_175,(void*)0,&g_49,(void*)0,&g_175,&g_49},{&g_175,&g_49,(void*)0,&g_175,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49,&g_49,&g_49,&g_175},{&g_175,&g_49,(void*)0,&g_175,&g_49,&g_49,&g_49},{&g_175,&g_49,(void*)0,&g_49,&g_175,&g_49,&g_175}};
static unsigned **g_300 = &g_301[1][5];
static unsigned ***g_299 = &g_300;
static unsigned g_320 = 0x9DABB632L;
static short ***g_327 = (void*)0;
static unsigned g_341 = 4294967289UL;
static short g_354 = 0x5F48L;
static unsigned g_355 = 4294967295UL;
static unsigned g_418 = 0x021AA025L;
static unsigned short g_453 = 0UL;
static short g_478[3] = {0xFE05L,0xFE05L,0xFE05L};
static unsigned short g_479 = 6UL;
static unsigned char g_504 = 0UL;
static int ***g_524 = &g_42;
static char g_536 = (-2L);
static short g_537 = 0x95A7L;
static int g_538 = 0xAAF2251BL;
static int g_541[8][9][3] = {{{0xB92A4069L,0x79B8C5C6L,9L},{(-10L),0x9CDA68ADL,0x9BE4EBF2L},{(-1L),0x2C53F2A7L,0xB6CC65B5L},{(-10L),0xA995FF18L,1L},{0xAADBE126L,0x8D6871F8L,0xEA1B3F57L},{9L,2L,1L},{0x6494F168L,0xA57A96A2L,(-1L)},{0L,0x3E8A4BB9L,(-1L)},{(-4L),(-4L),1L}},{{0xB6CC65B5L,8L,0xEA1B3F57L},{3L,(-1L),0xB6CC65B5L},{0x0109A71CL,7L,0x179F0578L},{0xA7F2FD88L,0x84D39C16L,(-4L)},{0x9BE4EBF2L,7L,0x71C760AAL},{0x22345BA9L,(-1L),(-1L)},{0xB8AF1E28L,8L,0x6494F168L},{1L,(-4L),0L},{1L,0x3E8A4BB9L,(-1L)}},{{1L,0xA57A96A2L,0xB8AF1E28L},{1L,2L,0xA7F2FD88L},{0xB8AF1E28L,0x8D6871F8L,3L},{0x22345BA9L,1L,0x89BB9811L},{0x9BE4EBF2L,1L,(-3L)},{0xA7F2FD88L,9L,0x89BB9811L},{0x0109A71CL,0x9CDA68ADL,3L},{3L,0xF0566742L,0xA7F2FD88L},{0xB6CC65B5L,0xAEA8B24DL,0xB8AF1E28L}},{{(-4L),0L,(-1L)},{0L,0L,0L},{0x6494F168L,0xAEA8B24DL,0x6494F168L},{9L,0xF0566742L,(-1L)},{0xAADBE126L,0x9CDA68ADL,0x71C760AAL},{0L,9L,(-4L)},{(-1L),1L,0x179F0578L},{0L,1L,0xB6CC65B5L},{0xAADBE126L,0x8D6871F8L,0xEA1B3F57L}},{{(-8L),(-4L),1L},{1L,(-1L),0x16E1B50EL},{2L,0xEA1B3F57L,0x16E1B50EL},{1L,0L,1L},{0L,0xB92A4069L,0x23935A4CL},{(-1L),0x77F07CDEL,0L},{0xB05E1071L,0x0109A71CL,0x2507A25CL},{(-1L),0xB6CC65B5L,1L},{(-1L),0x0109A71CL,1L}},{{0L,0x77F07CDEL,0x4DE35631L},{0x09DD5C3DL,0xB92A4069L,1L},{(-3L),0L,0xD1DB4794L},{1L,0xEA1B3F57L,(-7L)},{1L,(-1L),0x09DD5C3DL},{(-3L),(-4L),(-1L)},{0x09DD5C3DL,0x22345BA9L,(-1L)},{0L,(-1L),0xF3751F69L},{(-1L),0L,3L}},{{(-1L),0x98B94A87L,0xF3751F69L},{0xB05E1071L,0xA7F2FD88L,(-1L)},{(-1L),0L,(-1L)},{0L,0x9BE4EBF2L,0x09DD5C3DL},{1L,0x179F0578L,(-7L)},{2L,0x179F0578L,0xD1DB4794L},{1L,0x9BE4EBF2L,1L},{(-8L),0L,0x4DE35631L},{0xE30B4AF9L,0xA7F2FD88L,1L}},{{0xEE263102L,0x98B94A87L,1L},{0x4DE35631L,0L,0x2507A25CL},{0xEE263102L,(-1L),0L},{0xE30B4AF9L,0x22345BA9L,0x23935A4CL},{(-8L),(-4L),1L},{0xF7F8F7E1L,(-1L),0x09DD5C3DL},{(-1L),0x22345BA9L,0x09DD5C3DL},{1L,0x2AB565FFL,1L},{0x2507A25CL,0xAADBE126L,0L}}};
static int g_542 = 0x4138DAE1L;
static unsigned g_543 = 4294967294UL;
static int ****g_559 = &g_524;
static int *****g_558 = &g_559;
static int g_648 = 0xA7EF0D32L;
static char g_653 = 4L;
static unsigned char g_655 = 1UL;
static int g_670 = 1L;
static unsigned char g_671 = 1UL;
static unsigned g_678[6] = {4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL};
static unsigned char g_690 = 0x0AL;
static char g_695 = 0x32L;
static char g_703[6] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
static unsigned char g_704 = 0xD2L;
static char g_734 = 0x79L;
static unsigned g_756 = 0x9893DA2EL;
static unsigned char *g_839[5] = {&g_704,&g_704,&g_704,&g_704,&g_704};
static unsigned char **g_838[10][3] = {{(void*)0,(void*)0,(void*)0},{&g_839[3],&g_839[1],&g_839[3]},{(void*)0,(void*)0,(void*)0},{&g_839[3],&g_839[1],&g_839[3]},{(void*)0,(void*)0,(void*)0},{&g_839[3],&g_839[1],&g_839[3]},{(void*)0,(void*)0,(void*)0},{&g_839[3],&g_839[1],&g_839[3]},{(void*)0,(void*)0,(void*)0},{&g_839[3],&g_839[1],&g_839[3]}};
static unsigned char ***g_837 = &g_838[6][2];
static unsigned short g_850[4] = {4UL,4UL,4UL,4UL};
static unsigned char g_858 = 0UL;
static char g_887 = 0x30L;
static unsigned g_895 = 4294967295UL;
static unsigned g_919[3] = {0x4023EADBL,0x4023EADBL,0x4023EADBL};
static unsigned g_932[6][4] = {{0xC56A6018L,1UL,0xC56A6018L,0xDA7390A9L},{0x7839E82CL,1UL,4294967295UL,1UL},{0x7839E82CL,0xDA7390A9L,0xC56A6018L,1UL},{0xC56A6018L,1UL,0xC56A6018L,0xDA7390A9L},{0x7839E82CL,1UL,4294967295UL,1UL},{0x7839E82CL,0xDA7390A9L,0xC56A6018L,1UL}};
static unsigned char g_942 = 0xB8L;
static unsigned char g_963 = 0UL;
static unsigned short g_974 = 1UL;
static unsigned g_979 = 4294967295UL;
static int g_984 = 0x4F799D86L;
static unsigned short g_1068[7] = {65530UL,0UL,65530UL,65530UL,65530UL,1UL,1UL};
static int g_1080 = 3L;
static unsigned short g_1086[4][3][6] = {{{0xBE5CL,0UL,1UL,0UL,0xBE5CL,1UL},{0UL,0xBE5CL,1UL,0x1720L,0x1720L,1UL},{0x1720L,0x1720L,1UL,0xBE5CL,0UL,1UL}},{{0xBE5CL,0UL,1UL,0UL,0xBE5CL,1UL},{0UL,0xBE5CL,1UL,0x1720L,0x1720L,1UL},{0x1720L,0x1720L,1UL,0xBE5CL,0UL,1UL}},{{0xBE5CL,0UL,1UL,0UL,0xBE5CL,1UL},{0UL,0xBE5CL,1UL,0x1720L,0x1720L,1UL},{0x1720L,0x1720L,1UL,0xBE5CL,0UL,1UL}},{{0xBE5CL,0UL,1UL,0UL,0xBE5CL,1UL},{0UL,0xBE5CL,1UL,0x1720L,0x1720L,1UL},{0x1720L,0x1720L,1UL,0xBE5CL,0UL,1UL}}};
static unsigned g_1111 = 0x85787444L;



static unsigned short func_1(void);
static int func_6(int * p_7, unsigned short p_8, unsigned p_9);
static short func_10(unsigned char p_11);
static unsigned func_12(int * p_13, unsigned short p_14, unsigned p_15, int * p_16, int * p_17);
static int * func_18(int * p_19);
static unsigned func_28(short p_29);
static int ** func_30(int ** p_31, unsigned short p_32, int * p_33, int * p_34, short p_35);
static unsigned char func_38(unsigned p_39);
static unsigned char func_44(int p_45);
static short func_60(unsigned char p_61, int ** p_62, unsigned p_63);
static unsigned short func_1(void)
{
    unsigned l_3 = 0x39E3CF95L;
    int *l_4 = &g_5;
    (*l_4) &= (g_2[5][0] & (((g_2[3][1] == l_3) | 0x1CFDL) & (0xD6F1860EL == 0x1E6E2BFBL)));
    (*l_4) = func_6(l_4, g_2[1][2], g_2[5][0]);
    return g_850[1];
}







static int func_6(int * p_7, unsigned short p_8, unsigned p_9)
{
    int *l_976[4][7] = {{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int l_985 = 0x790FEEB0L;
    unsigned l_1000[8] = {0x9FD1C91EL,0x9FD1C91EL,0x9FD1C91EL,0x9FD1C91EL,0x9FD1C91EL,0x9FD1C91EL,0x9FD1C91EL,0x9FD1C91EL};
    unsigned short l_1095[7][6] = {{0x6166L,0UL,65527UL,65527UL,0UL,0x6166L},{0x6166L,65527UL,0xE4C9L,0UL,0UL,0xE4C9L},{0UL,0UL,0xE4C9L,65527UL,0x6166L,0x6166L},{0UL,65527UL,65527UL,0UL,0x6166L,0xE4C9L},{0x6166L,0UL,65527UL,65527UL,0UL,0x6166L},{0x6166L,65527UL,0xE4C9L,0UL,0UL,0xE4C9L},{0UL,0UL,0xE4C9L,65527UL,0x6166L,0x6166L}};
    int i, j;
    (*p_7) = (func_10(((&g_5 == p_7) ^ ((((func_12((l_976[3][0] = func_18(p_7)), (safe_sub_func_uint32_t_u_u((!func_44(g_979)), (safe_mod_func_uint32_t_u_u(((g_984 = func_44(p_8)) >= (l_985 == p_9)), (-1L))))), p_8, p_7, &l_985) == 1L) >= 0x38L) && l_1000[0]) ^ 0x34FDL))) != 0x8E41L);
    if (((*p_7) |= 0x3D3842E9L))
    {
        int l_1089 = 0x2449998AL;
        int l_1090[3];
        int l_1105 = (-5L);
        int i;
        for (i = 0; i < 3; i++)
            l_1090[i] = 0L;
        l_1090[1] &= l_1089;
        for (g_1080 = (-5); (g_1080 < 29); g_1080 = safe_add_func_int16_t_s_s(g_1080, 9))
        {
            int *l_1098 = &g_5;
            unsigned l_1106 = 0x3A8805FDL;
            unsigned short *l_1116 = &g_1086[1][1][5];
            for (g_543 = 0; (g_543 != 2); ++g_543)
            {
                l_1095[6][0]--;
                l_1098 = (p_7 = l_1098);
                g_670 &= ((p_9 < p_9) > ((safe_sub_func_uint16_t_u_u(0xD437L, func_12(p_7, (safe_add_func_uint8_t_u_u((((*p_7) |= 0xF1979A18L) > (safe_mod_func_int32_t_s_s(l_1089, l_1105))), p_8)), (l_1106 = ((l_1090[0] != 0UL) & p_9)), p_7, &l_1090[1]))) || (*l_1098)));
            }
            l_1090[1] ^= (safe_rshift_func_int16_t_s_u(((0xC3L < l_1105) <= (safe_add_func_int8_t_s_s((-5L), p_8))), (0x3AEF96F7L || (*p_7))));
            (*l_1098) = (g_73 ^= (g_1111 ^ ((safe_add_func_int32_t_s_s((g_21 &= func_12(&l_1090[2], g_341, (safe_lshift_func_uint16_t_u_s(((*p_7) & func_44((((*l_1116) = g_104) != (--g_974)))), 5)), &l_985, &l_985)), l_1105)) ^ 0x0CEAL)));
        }
        p_7 = (void*)0;
    }
    else
    {
        unsigned short l_1119[5][4] = {{0x8E05L,0x8E05L,0x082EL,0x8E05L},{0x8E05L,0x3AC2L,0x3AC2L,0x8E05L},{0x3AC2L,0x8E05L,0x3AC2L,0x3AC2L},{0x8E05L,0x8E05L,0x082EL,0x8E05L},{0x8E05L,0x3AC2L,0x3AC2L,0x8E05L}};
        int i, j;
        l_1119[0][1]++;
        for (g_984 = 0; g_984 < 3; g_984 += 1)
        {
            g_919[g_984] = 1UL;
        }
        return (*p_7);
    }
    return p_8;
}







static short func_10(unsigned char p_11)
{
    int l_1003 = 9L;
    int *l_1007 = &g_21;
    char l_1010 = (-2L);
    int l_1053 = 1L;
    int l_1060 = 0x1D616DB6L;
    int l_1065 = 0x0D736EBFL;
    int l_1066 = 0L;
    unsigned char l_1076 = 255UL;
    int l_1085[6] = {1L,0xF2FD79C6L,1L,1L,0xF2FD79C6L,1L};
    int i;
    for (g_858 = 0; (g_858 <= 8); g_858 = safe_add_func_uint16_t_u_u(g_858, 5))
    {
        unsigned l_1004 = 0UL;
        int *l_1006 = &g_542;
        int l_1067 = (-10L);
        int l_1075[5][9] = {{0x0507D309L,0x0507D309L,(-1L),(-1L),0x0507D309L,0x0507D309L,(-1L),(-1L),0x0507D309L},{0xD4ECA194L,(-1L),0xD4ECA194L,(-1L),0xD4ECA194L,(-1L),0xD4ECA194L,(-1L),0xD4ECA194L},{0x0507D309L,(-1L),(-1L),0x0507D309L,0x0507D309L,(-1L),(-1L),0x0507D309L,0x0507D309L},{0xFF413D11L,(-1L),0xFF413D11L,(-1L),0xFF413D11L,(-1L),0xFF413D11L,(-1L),0xFF413D11L},{0x0507D309L,0x0507D309L,(-1L),(-1L),0x0507D309L,0x0507D309L,(-1L),(-1L),0x0507D309L}};
        int **l_1079 = &g_43;
        int *l_1082 = (void*)0;
        int *l_1083 = (void*)0;
        int *l_1084[3][2];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_1084[i][j] = &g_21;
        }
        if (func_44(l_1003))
        {
            int l_1005[6][9] = {{0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL},{0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L},{0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL},{0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L},{0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL,0x5518A5ECL},{0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L,0xDC479608L}};
            int i, j;
            l_1005[2][7] = l_1004;
            if (p_11)
                break;
            l_1007 = l_1006;
        }
        else
        {
            int l_1013[6] = {0x4A8AA207L,0x4A8AA207L,0x4A8AA207L,0x4A8AA207L,0x4A8AA207L,0x4A8AA207L};
            int *l_1020 = &g_21;
            int l_1054 = (-8L);
            unsigned short l_1059 = 0xC028L;
            int *l_1072 = &g_670;
            int *l_1073 = &g_5;
            int *l_1074[9] = {&l_1054,&l_1054,&l_1054,&l_1054,&l_1054,&l_1054,&l_1054,&l_1054,&l_1054};
            int i;
            for (p_11 = 15; (p_11 >= 41); ++p_11)
            {
                int l_1016 = 0x613E55E4L;
                if (l_1010)
                {
                    int *l_1019 = &g_670;
                    for (g_984 = 0; (g_984 <= 2); g_984 += 1)
                    {
                        int **l_1011 = (void*)0;
                        int **l_1012 = &l_1007;
                        int i;
                        (*l_1012) = l_1006;
                        (**l_1012) &= g_478[g_984];
                    }
                    if (l_1013[0])
                        continue;
                    (*l_1019) &= ((l_1016 == (((((*l_1007) = ((((safe_sub_func_int8_t_s_s(g_942, (l_1016 != p_11))) == 0L) ^ (p_11 & p_11)) <= g_850[2])) != 1L) < p_11) != p_11)) >= (-1L));
                }
                else
                {
                    return (*g_109);
                }
                if (p_11)
                    break;
                if ((l_1016 <= (func_12((l_1020 = &l_1016), (safe_rshift_func_uint8_t_u_u(p_11, p_11)), (*l_1006), &l_1013[5], &g_670) && (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_11, l_1016)), p_11)))))
                {
                    int l_1029 = 0xD8F0A73FL;
                    short l_1032 = 0xEEFFL;
                    for (g_671 = 0; (g_671 <= 2); ++g_671)
                    {
                        (*l_1020) = (+(g_541[3][0][2] != ((l_1029 ^ (safe_lshift_func_int16_t_s_u(func_12(&l_1016, g_984, (*l_1020), &l_1016, &l_1029), 4))) < 0x47A383FEL)));
                    }
                    if (l_1032)
                        break;
                }
                else
                {
                    short l_1033 = 0xCD51L;
                    unsigned char l_1046 = 1UL;
                    g_43 = &l_1016;
                    if (l_1033)
                        break;
                    (*g_43) = (safe_add_func_int32_t_s_s(((*l_1007) &= l_1033), (p_11 & (((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(g_252, ((*g_109) |= 0xA43DL))), (l_1016 != (+(*l_1020))))) || ((safe_sub_func_int8_t_s_s((l_1033 ^ ((safe_lshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(l_1046, (((void*)0 != &g_292[2]) & p_11))) & g_537), 3)) || (*l_1020))), 0xFDL)) | p_11)) & p_11))));
                }
            }
            for (g_963 = 0; (g_963 > 29); g_963 = safe_add_func_int8_t_s_s(g_963, 1))
            {
                int l_1058[1];
                int *l_1061 = &g_249;
                int *l_1062 = &l_1013[0];
                int *l_1063 = &g_198;
                int *l_1064[10];
                int **l_1071[8] = {&l_1064[9],&l_1007,&l_1064[9],&l_1064[9],&l_1007,&l_1064[9],&l_1064[9],&l_1007};
                int i;
                for (i = 0; i < 1; i++)
                    l_1058[i] = 0x4A7D1F19L;
                for (i = 0; i < 10; i++)
                    l_1064[i] = &g_198;
                for (g_895 = 15; (g_895 != 9); g_895 = safe_sub_func_int8_t_s_s(g_895, 4))
                {
                    int *l_1052 = &g_542;
                    for (g_355 = 0; (g_355 <= 2); g_355 += 1)
                    {
                        int **l_1051[8] = {&l_1006,&l_1020,&l_1020,&l_1006,&l_1020,&l_1020,&l_1006,&l_1020};
                        int i;
                        l_1052 = l_1007;
                        (*l_1006) = l_1053;
                        (*l_1006) = 6L;
                        return (*g_109);
                    }
                    if (l_1054)
                        continue;
                    for (g_979 = 0; (g_979 != 46); g_979 = safe_add_func_uint32_t_u_u(g_979, 3))
                    {
                        int *l_1057 = &g_73;
                        l_1020 = l_1007;
                        (*l_1057) &= func_44((*l_1006));
                    }
                }
                l_1059 = (0x0C5CL ^ (((*l_1006) = l_1058[0]) >= ((void*)0 == &g_108)));
                g_1068[1]++;
                l_1007 = &l_1065;
            }
            (*l_1006) = p_11;
            l_1076--;
        }
        (*l_1079) = (void*)0;
        if (g_1080)
        {
            int *l_1081 = (void*)0;
            (*l_1079) = l_1081;
            (*l_1079) = &l_1066;
        }
        else
        {
            if (p_11)
                break;
            (*l_1079) = (*l_1079);
        }
        --g_1086[0][2][2];
    }
    return (**g_108);
}







static unsigned func_12(int * p_13, unsigned short p_14, unsigned p_15, int * p_16, int * p_17)
{
    unsigned short l_988 = 0x065EL;
    unsigned *l_994 = &g_932[3][1];
    if ((safe_add_func_uint32_t_u_u(((0xA7745331L >= 0x696BE49DL) | l_988), (*p_17))))
    {
        unsigned l_995 = 0UL;
        --l_995;
        (*p_16) ^= (p_17 != p_13);
    }
    else
    {
        for (g_175 = 0; (g_175 < 6); ++g_175)
        {
            return p_15;
        }
    }
    return l_988;
}







static int * func_18(int * p_19)
{
    int *l_20 = &g_21;
    unsigned short *l_973 = &g_974;
    int l_975 = 0xA6F4F5A0L;
    (*l_20) &= ((*p_19) = (~1L));
    l_975 &= (((safe_add_func_uint16_t_u_u(g_21, (((&g_5 == p_19) == g_2[4][2]) && (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((func_28(g_21) && (*l_20)), (safe_rshift_func_int8_t_s_u(g_537, (safe_sub_func_uint16_t_u_u(((*l_973) &= ((*l_20) || g_678[1])), g_678[2])))))) || (*l_20)), 2))))) <= (*l_20)) >= (-8L));
    return p_19;
}







static unsigned func_28(short p_29)
{
    int *l_37[3][9][5] = {{{&g_5,&g_5,(void*)0,(void*)0,&g_21},{(void*)0,(void*)0,&g_21,(void*)0,&g_21},{&g_5,(void*)0,&g_21,&g_21,&g_21},{&g_5,&g_5,&g_5,&g_21,&g_5},{(void*)0,&g_5,&g_21,(void*)0,&g_5},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_5,&g_5,&g_21,&g_21,&g_21},{&g_21,&g_5,&g_21,(void*)0,&g_21},{&g_21,(void*)0,&g_21,(void*)0,(void*)0}},{{&g_5,(void*)0,(void*)0,&g_21,&g_5},{&g_21,&g_5,&g_21,(void*)0,&g_5},{(void*)0,&g_21,&g_21,(void*)0,&g_21},{(void*)0,&g_21,&g_21,(void*)0,&g_21},{&g_21,&g_5,(void*)0,&g_21,&g_21},{&g_5,&g_21,&g_21,&g_21,&g_5},{&g_21,(void*)0,&g_5,(void*)0,&g_21},{&g_21,(void*)0,&g_21,&g_5,(void*)0},{(void*)0,&g_21,&g_5,&g_21,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_5,&g_21,(void*)0,(void*)0,&g_21},{(void*)0,&g_21,(void*)0,&g_5,&g_5},{(void*)0,(void*)0,(void*)0,&g_21,&g_5},{&g_5,(void*)0,&g_5,&g_5,&g_21},{(void*)0,&g_5,&g_21,&g_21,&g_21},{(void*)0,(void*)0,&g_5,&g_21,&g_21},{&g_5,(void*)0,&g_21,&g_5,(void*)0},{(void*)0,&g_5,(void*)0,&g_21,&g_5}}};
    int **l_36 = &l_37[1][2][3];
    int l_844 = 1L;
    unsigned char l_949 = 255UL;
    short l_956 = 1L;
    unsigned char l_958 = 1UL;
    int *l_964 = &g_542;
    char l_968 = 0L;
    int i, j, k;
    if ((g_2[2][2] >= 1L))
    {
        int *l_323 = &g_249;
        short l_817 = 0L;
        unsigned l_820 = 4294967295UL;
        int l_823 = (-5L);
        int l_847[1];
        int i;
        for (i = 0; i < 1; i++)
            l_847[i] = 0L;
        (*g_524) = func_30(l_36, (((g_211 = func_38((safe_rshift_func_uint16_t_u_s(((g_42 == &g_43) == (~func_44(((safe_lshift_func_int8_t_s_u((-8L), 4)) <= (*g_43))))), (&l_37[1][2][3] == &l_37[2][8][1]))))) > 0xA8L) && 0x8062D219L), l_323, l_323, (*g_109));
        for (g_690 = 0; (g_690 <= 2); g_690 += 1)
        {
            int *l_815[10][3] = {{&g_292[2],&g_292[2],(void*)0},{&g_292[2],&g_292[2],(void*)0},{&g_292[2],&g_292[2],(void*)0},{&g_292[2],&g_292[2],(void*)0},{&g_292[2],&g_292[2],(void*)0},{&g_292[2],&g_292[2],(void*)0},{&g_292[2],&g_292[2],(void*)0},{&g_292[2],&g_292[2],(void*)0},{&g_292[2],&g_292[2],(void*)0},{&g_292[2],&g_292[2],(void*)0}};
            int **l_816 = &l_815[9][1];
            int l_818 = (-1L);
            int l_819 = 0L;
            int l_824 = 0xB0B15F69L;
            int l_848 = 1L;
            int l_849[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_849[i] = 0xA7456218L;
            (*l_323) &= (p_29 & (((((*l_816) = l_815[0][0]) == &g_292[0]) & func_44(l_817)) && 248UL));
            if (p_29)
            {
                l_820--;
            }
            else
            {
                unsigned char l_825 = 0x86L;
                int l_841[5][3][9] = {{{0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL},{0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L},{0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL}},{{0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L},{0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL},{0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L}},{{0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL},{0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L},{0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL}},{{0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L},{0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL},{0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L}},{{0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL},{0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L,0x42606134L},{0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL,0x7A38DBEFL}}};
                int i, j, k;
                l_825--;
                if ((*l_323))
                    continue;
                for (g_453 = 0; (g_453 <= 2); g_453 += 1)
                {
                    int l_828[1][7] = {{0xAE3C12C5L,0xAE3C12C5L,0xAE3C12C5L,0xAE3C12C5L,0xAE3C12C5L,0xAE3C12C5L,0xAE3C12C5L}};
                    unsigned char *l_835[8];
                    unsigned char **l_834 = &l_835[1];
                    unsigned char ***l_833[3][7] = {{&l_834,&l_834,&l_834,&l_834,&l_834,&l_834,&l_834},{&l_834,&l_834,&l_834,&l_834,&l_834,&l_834,&l_834},{&l_834,&l_834,&l_834,&l_834,&l_834,&l_834,&l_834}};
                    unsigned *l_846 = &g_756;
                    int i, j;
                    for (i = 0; i < 8; i++)
                        l_835[i] = &g_655;
                    if ((~(l_828[0][3] = g_2[(g_690 + 2)][g_453])))
                    {
                        unsigned char ****l_836[3];
                        unsigned short *l_840 = (void*)0;
                        int l_845[8];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_836[i] = (void*)0;
                        for (i = 0; i < 8; i++)
                            l_845[i] = 0x9D3B6D55L;
                        l_845[4] = ((*l_323) == (((+((safe_add_func_uint16_t_u_u((l_841[3][2][8] = (safe_sub_func_int8_t_s_s((g_104 && (l_833[1][2] == (g_837 = &l_834))), (0x8EL != p_29)))), (safe_lshift_func_uint8_t_u_u(l_844, 0)))) <= (((**g_108) & l_845[4]) > l_825))) > 0x2DL) && l_824));
                        (*l_36) = &l_841[3][2][8];
                    }
                    else
                    {
                        if (p_29)
                            break;
                    }
                    (*l_323) = func_44(p_29);
                    g_850[1]++;
                }
            }
            (*l_323) = (*l_323);
            for (g_172 = 2; (g_172 >= 0); g_172 -= 1)
            {
                short l_853 = 0xB690L;
                for (l_848 = 2; (l_848 >= 0); l_848 -= 1)
                {
                    (*l_323) &= 0x05D1D336L;
                    if (l_853)
                        continue;
                    (*l_323) = 0L;
                }
            }
        }
    }
    else
    {
        int l_854 = 6L;
        int l_855 = (-1L);
        int l_856[10][9][2] = {{{0xC1991E84L,0x1FED8164L},{0x014EEF48L,0x47D91815L},{0x4117F4F3L,0x215A62FCL},{0x1FED8164L,0L},{0L,0L},{0x1FED8164L,0x215A62FCL},{0x4117F4F3L,0x47D91815L},{0x014EEF48L,0x1FED8164L},{0xC1991E84L,0x014EEF48L}},{{0L,7L},{0L,0x014EEF48L},{0xC1991E84L,0x1FED8164L},{0x014EEF48L,0x47D91815L},{0x4117F4F3L,0x215A62FCL},{0x1FED8164L,0L},{0L,7L},{0x014EEF48L,0x9951AFCFL},{0x1FED8164L,0L}},{{0x47D91815L,0x014EEF48L},{0x215A62FCL,0x47D91815L},{0L,0xC1991E84L},{0L,0x47D91815L},{0x215A62FCL,0x014EEF48L},{0x47D91815L,0L},{0x1FED8164L,0x9951AFCFL},{0x014EEF48L,7L},{7L,7L}},{{0x014EEF48L,0x9951AFCFL},{0x1FED8164L,0L},{0x47D91815L,0x014EEF48L},{0x215A62FCL,0x47D91815L},{0L,0xC1991E84L},{0L,0x47D91815L},{0x215A62FCL,0x014EEF48L},{0x47D91815L,0L},{0x1FED8164L,0x9951AFCFL}},{{0x014EEF48L,7L},{7L,7L},{0x014EEF48L,0x9951AFCFL},{0x1FED8164L,0L},{0x47D91815L,0x014EEF48L},{0x215A62FCL,0x47D91815L},{0L,0xC1991E84L},{0L,0x47D91815L},{0x215A62FCL,0x014EEF48L}},{{0x47D91815L,0L},{0x1FED8164L,0x9951AFCFL},{0x014EEF48L,7L},{7L,7L},{0x014EEF48L,0x9951AFCFL},{0x1FED8164L,0L},{0x47D91815L,0x014EEF48L},{0x215A62FCL,0x47D91815L},{0L,0xC1991E84L}},{{0L,0x47D91815L},{0x215A62FCL,0x014EEF48L},{0x47D91815L,0L},{0x1FED8164L,0x9951AFCFL},{0x014EEF48L,7L},{7L,7L},{0x014EEF48L,0x9951AFCFL},{0x1FED8164L,0L},{0x47D91815L,0x014EEF48L}},{{0x4117F4F3L,7L},{0x215A62FCL,3L},{0x215A62FCL,7L},{0x4117F4F3L,0L},{7L,0xC1991E84L},{0L,0x1FED8164L},{0L,0x9951AFCFL},{0x9951AFCFL,0x9951AFCFL},{0L,0x1FED8164L}},{{0L,0xC1991E84L},{7L,0L},{0x4117F4F3L,7L},{0x215A62FCL,3L},{0x215A62FCL,7L},{0x4117F4F3L,0L},{7L,0xC1991E84L},{0L,0x1FED8164L},{0L,0x9951AFCFL}},{{0x9951AFCFL,0x9951AFCFL},{0L,0x1FED8164L},{0L,0xC1991E84L},{7L,0L},{0x4117F4F3L,7L},{0x215A62FCL,3L},{0x215A62FCL,7L},{0x4117F4F3L,0L},{7L,0xC1991E84L}}};
        int l_857 = 1L;
        int **l_863 = &l_37[1][2][3];
        short l_948 = 1L;
        int i, j, k;
        (*l_36) = (*l_36);
        (*g_42) = (**g_524);
        --g_858;
        if ((((safe_add_func_uint32_t_u_u(l_856[8][8][0], func_60(p_29, l_863, p_29))) >= (safe_lshift_func_int8_t_s_u(func_44(g_354), 6))) & (~g_252)))
        {
            unsigned char l_873 = 0UL;
            int *l_888 = &g_21;
            int l_893 = (-5L);
            char *l_909 = &g_695;
            char **l_908 = &l_909;
            l_855 |= func_44(p_29);
            (***g_559) = (*l_863);
            for (g_354 = (-23); (g_354 < (-20)); g_354 = safe_add_func_int32_t_s_s(g_354, 5))
            {
                unsigned short l_870 = 65531UL;
                int l_871 = (-2L);
                int l_892 = 0L;
                short l_894 = 0x13E9L;
                char *l_904[5][4][7] = {{{&g_703[2],(void*)0,(void*)0,(void*)0,(void*)0,&g_703[2],(void*)0},{(void*)0,&g_536,&g_250,&g_887,&g_653,&g_148,&g_172},{&g_703[2],(void*)0,(void*)0,(void*)0,(void*)0,&g_703[2],(void*)0},{(void*)0,&g_536,&g_250,&g_887,&g_653,&g_148,&g_172}},{{&g_703[2],(void*)0,(void*)0,(void*)0,(void*)0,&g_703[2],(void*)0},{(void*)0,&g_536,&g_250,&g_887,&g_653,&g_148,&g_172},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_887,(void*)0,&g_653,&g_536,&g_734,&g_887,&g_250}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_887,(void*)0,&g_653,&g_536,&g_734,&g_887,&g_250},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_887,(void*)0,&g_653,&g_536,&g_734,&g_887,&g_250}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_887,(void*)0,&g_653,&g_536,&g_734,&g_887,&g_250},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_887,(void*)0,&g_653,&g_536,&g_734,&g_887,&g_250}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_887,(void*)0,&g_653,&g_536,&g_734,&g_887,&g_250},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_887,(void*)0,&g_653,&g_536,&g_250,(void*)0,&g_653}}};
                char ***l_910[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_910[i] = &l_908;
                for (l_857 = 4; (l_857 < (-25)); l_857--)
                {
                    short l_872 = (-1L);
                    int l_878 = (-5L);
                    unsigned char l_879 = 0UL;
                    short *l_886 = &g_478[0];
                    if ((l_870 == (p_29 & ((void*)0 != &g_109))))
                    {
                        g_198 = p_29;
                        l_871 = 0x83723FF6L;
                        l_872 ^= (-1L);
                    }
                    else
                    {
                        l_873 ^= l_872;
                        l_878 ^= (safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((g_504 <= 0x02A7279BL) >= p_29), 0xE7L)), l_870));
                        l_879++;
                        l_878 |= func_44(p_29);
                    }
                    if ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((p_29 == (&g_327 == &g_327)), 6)), ((func_44((g_292[0] = p_29)) & ((*l_886) ^= ((*g_109) = l_878))) & g_155))))
                    {
                        g_887 ^= p_29;
                        if (p_29)
                            continue;
                        g_249 ^= 0x1A521399L;
                        return p_29;
                    }
                    else
                    {
                        unsigned short l_889 = 65527UL;
                        (****g_558) = l_888;
                        --l_889;
                        --g_895;
                        l_878 |= p_29;
                    }
                }
                for (g_49 = 0; (g_49 != 58); ++g_49)
                {
                    if (p_29)
                        break;
                }
                for (g_648 = 17; (g_648 <= (-10)); --g_648)
                {
                    for (p_29 = (-22); (p_29 != (-29)); p_29--)
                    {
                        l_892 = ((void*)0 != l_904[3][0][3]);
                    }
                    for (g_538 = 0; (g_538 != (-14)); g_538 = safe_sub_func_uint8_t_u_u(g_538, 1))
                    {
                        unsigned short l_907 = 0UL;
                        if (l_907)
                            break;
                    }
                }
                l_908 = l_908;
            }
        }
        else
        {
            unsigned l_911 = 0xFF5E2ADCL;
            unsigned l_918[3];
            unsigned l_924 = 0x8641152BL;
            int l_935 = (-1L);
            char l_936 = 0xD5L;
            short l_937 = 0x81D3L;
            int *l_945 = &l_856[4][0][1];
            int l_947[4];
            short l_955 = 0L;
            int i;
            for (i = 0; i < 3; i++)
                l_918[i] = 3UL;
            for (i = 0; i < 4; i++)
                l_947[i] = 0xD59E9CDEL;
            if ((func_60(l_911, (*g_524), g_919[1]) ^ l_911))
            {
                short l_923 = 0x2CCAL;
                int l_925 = (-2L);
                int l_938 = 6L;
                int l_940 = 6L;
                int l_941[8][10][3] = {{{0x2B1B9743L,(-6L),0x80DEDFC3L},{(-1L),1L,0x6A1E8D62L},{0L,0x99B8828AL,0x3A15817FL},{0x896464A5L,0xFF991AA6L,(-1L)},{0x3EDA157DL,(-2L),0xB3E58D62L},{0x4B52F338L,0x3EDA157DL,0L},{0x888B9AC2L,0xF2834B2AL,0x6A1E8D62L},{0L,8L,0L},{1L,8L,0x8306F070L},{0x3C341F22L,0xF2834B2AL,0x1FFD49CAL}},{{2L,0x3EDA157DL,0L},{(-1L),(-2L),0x80DEDFC3L},{1L,0xFF991AA6L,0xB2E05424L},{0x0A69B578L,0x99B8828AL,0x0A69B578L},{0x3C341F22L,1L,0xB3E58D62L},{0x3EDA157DL,(-6L),1L},{0x8306F070L,0x80DEDFC3L,0L},{0xF2834B2AL,0xA8FA8689L,0xB2E05424L},{0x8306F070L,8L,1L},{0x3EDA157DL,0x6A1E8D62L,0xC2AC3577L}},{{0x3C341F22L,0x2C10DDBAL,0xF2834B2AL},{0x0A69B578L,0x80DEDFC3L,0L},{1L,0L,0L},{(-1L),0xFF991AA6L,0x896464A5L},{2L,0x04116FE3L,0x3A15817FL},{0x3C341F22L,0x1F46312DL,1L},{1L,(-2L),1L},{0L,4L,0x3A15817FL},{0x888B9AC2L,0xA8FA8689L,0x896464A5L},{0x4B52F338L,0x6A1E8D62L,0L}},{{0x3EDA157DL,0x3C341F22L,0xAD6EAC1CL},{4L,0x82CD306BL,0x82CD306BL},{0x1FFD49CAL,(-2L),0x1F46312DL},{8L,0L,0L},{0x896464A5L,0L,0x3EDA157DL},{0x888B9AC2L,0x8306F070L,0x1FFD49CAL},{4L,0L,0xB2E05424L},{0x6F1AB7BEL,0L,0x3C341F22L},{0xFF991AA6L,(-2L),0xA8FA8689L},{0xB99F114BL,0x82CD306BL,0x3EDA157DL}},{{0x763AE7B3L,1L,0x6F1AB7BEL},{0L,0L,0xAD6EAC1CL},{0L,0x04116FE3L,0xB22D152DL},{0xA8FA8689L,(-2L),0xFF991AA6L},{0x896464A5L,0x3A15817FL,(-6L)},{0x896464A5L,5L,0L},{0xA8FA8689L,0xC2AC3577L,0x1FFD49CAL},{0L,0xF707016DL,0x3C341F22L},{0L,0L,8L},{0x763AE7B3L,0x6F1AB7BEL,0x2C10DDBAL}},{{0xB99F114BL,0xB99F114BL,0L},{0xFF991AA6L,0L,0x6F1AB7BEL},{0x6F1AB7BEL,0x80DEDFC3L,0x1F46312DL},{4L,0x04116FE3L,0x99B8828AL},{0x888B9AC2L,0x6F1AB7BEL,0x1F46312DL},{0x896464A5L,0x0A69B578L,0x6F1AB7BEL},{8L,0L,0L},{0x1FFD49CAL,0L,0x2C10DDBAL},{4L,0xF707016DL,8L},{0xFE3DD0F3L,0x3A15817FL,0x3C341F22L}},{{0x763AE7B3L,0xFE3DD0F3L,0x1FFD49CAL},{0x99B8828AL,0x82CD306BL,0L},{0xAD6EAC1CL,0x80DEDFC3L,0x99B8828AL},{0x82CD306BL,0x2C10DDBAL,0xB3E58D62L},{0xF2834B2AL,5L,(-10L)},{1L,0x04116FE3L,(-1L)},{0x3A15817FL,0x8306F070L,0xB99F114BL},{0x0A69B578L,0x3C341F22L,0xA8FA8689L},{0xAD6EAC1CL,4L,0xAD6EAC1CL},{0xF2834B2AL,0x896464A5L,0x7C5ED5AAL}},{{0x04116FE3L,0L,0x0A69B578L},{0xB3E58D62L,0xB99F114BL,0x763AE7B3L},{5L,8L,0xA8FA8689L},{0xB3E58D62L,0x2C10DDBAL,0x82CD306BL},{0x04116FE3L,0x888B9AC2L,(-5L)},{0xF2834B2AL,0xF707016DL,5L},{0xAD6EAC1CL,0xB99F114BL,(-1L)},{0x0A69B578L,0x4B52F338L,0x99B8828AL},{0x3A15817FL,0x3C341F22L,0x1FFD49CAL},{1L,0x3EC34197L,0xFF991AA6L}}};
                int i, j, k;
                for (g_73 = 11; (g_73 >= (-21)); --g_73)
                {
                    short l_922[8][3][8] = {{{(-1L),(-1L),(-5L),6L,(-4L),(-1L),(-1L),(-4L)},{(-9L),(-4L),0xA987L,(-9L),0L,(-9L),0xA987L,(-4L)},{(-4L),0x0D98L,0x3F7FL,6L,0x0D98L,0xA987L,0L,0x3F7FL}},{{0x4723L,0L,0x8B5BL,(-4L),(-4L),0x8B5BL,0L,0x4723L},{1L,(-4L),0x3F7FL,0xA987L,(-1L),1L,0xA987L,6L},{(-1L),1L,0xA987L,(-1L),0x3F7FL,(-9L),0x4723L,0x3F7FL}},{{0L,6L,0xE36EL,0L,(-4L),4L,6L,6L},{0x3F7FL,(-4L),1L,1L,(-4L),0x3F7FL,0xA987L,(-1L)},{0L,0xA987L,0x0D98L,6L,0x3F7FL,0x0D98L,(-4L),0x0D98L}},{{0x4723L,6L,(-1L),6L,0x4723L,0x8B5BL,6L,(-1L)},{(-9L),0x4723L,0x3F7FL,1L,6L,(-9L),(-9L),6L},{0L,0x3F7FL,0x3F7FL,0L,0xA987L,0x0D98L,6L,0x3F7FL}},{{6L,(-4L),(-1L),(-1L),(-4L),0xE36EL,(-4L),(-1L)},{0x0D98L,(-4L),0x0D98L,0x3F7FL,6L,0x0D98L,0xA987L,0L},{0x4723L,0x3F7FL,1L,6L,(-9L),(-9L),6L,1L}},{{0x4723L,0x4723L,0xE36EL,(-1L),6L,0x8B5BL,0x4723L,6L},{0x0D98L,6L,0x3F7FL,0x0D98L,(-4L),0x0D98L,0x3F7FL,6L},{6L,0xA987L,4L,0x0D98L,(-1L),0x8B5BL,1L,4L}},{{0x3F7FL,1L,6L,(-9L),(-9L),6L,1L,0x3F7FL},{(-5L),(-9L),4L,0x8B5BL,0xA987L,(-5L),0x8B5BL,0x0D98L},{0xA987L,(-5L),0x8B5BL,0x0D98L,0x8B5BL,(-5L),0xA987L,0x8B5BL}},{{0x3F7FL,(-9L),0x4723L,0x3F7FL,1L,6L,(-9L),(-9L)},{0x8B5BL,1L,4L,4L,1L,0x8B5BL,(-1L),0x0D98L},{0x3F7FL,(-1L),0xE36EL,(-9L),0x8B5BL,0xE36EL,1L,0xE36EL}}};
                    int i, j, k;
                    return l_922[5][1][1];
                }
                l_923 |= p_29;
                l_925 = l_924;
                for (g_320 = 0; (g_320 <= 24); g_320 = safe_add_func_int8_t_s_s(g_320, 9))
                {
                    int l_928 = 0L;
                    int *l_930 = &g_73;
                    int l_939[6] = {(-1L),(-1L),(-2L),(-1L),(-1L),(-2L)};
                    int l_946 = 9L;
                    int i;
                    if ((l_928 = p_29))
                    {
                        int *l_929 = (void*)0;
                        unsigned char *l_931[3][10] = {{&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671},{&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671},{&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671}};
                        int i, j;
                        (*g_42) = l_929;
                        l_930 = l_930;
                        if (p_29)
                            break;
                        (*l_930) = ((p_29 <= p_29) != (l_923 <= (l_925 = l_918[2])));
                    }
                    else
                    {
                        --g_932[3][1];
                        g_942++;
                        (**g_524) = &l_935;
                        l_945 = (*l_863);
                    }
                    l_949++;
                    if (p_29)
                        break;
                    (*l_930) &= p_29;
                }
            }
            else
            {
                char l_952[1];
                int l_953 = 0x26543427L;
                int l_954 = 0x7575E53BL;
                int l_957 = 0x1A79C4BFL;
                int i;
                for (i = 0; i < 1; i++)
                    l_952[i] = 0xD5L;
                (*l_945) = func_44(g_49);
                l_958++;
            }
        }
    }
    for (g_249 = 0; (g_249 > (-12)); --g_249)
    {
        int l_967 = 0x883F0D06L;
        g_963 = p_29;
        l_964 = ((*l_36) = &g_249);
        l_968 |= (l_967 = (safe_mod_func_int8_t_s_s(p_29, p_29)));
    }
    return (*l_964);
}







static int ** func_30(int ** p_31, unsigned short p_32, int * p_33, int * p_34, short p_35)
{
    short ***l_326 = &g_108;
    int l_337[7][5] = {{0x2EE8FAB4L,0xC83EE7A5L,0x7A66E567L,0x7A66E567L,0xC83EE7A5L},{0xBE0D1BACL,0x904DF4DBL,(-1L),(-8L),0x99DC52A5L},{0x7A66E567L,0x2EE8FAB4L,0xB3961BCFL,(-1L),0xC83EE7A5L},{0x904DF4DBL,(-1L),0xBE0D1BACL,(-3L),(-3L)},{0x7A66E567L,(-1L),0x7A66E567L,0xBE0D1BACL,0L},{0xA60A03CCL,(-1L),0xC856440DL,0x904DF4DBL,0x2EE8FAB4L},{(-1L),(-1L),(-3L),0xB3961BCFL,0xA60A03CCL}};
    unsigned l_348 = 1UL;
    int ***l_389 = &g_42;
    int ****l_388 = &l_389;
    unsigned short *l_404[1];
    short *l_408 = &g_354;
    short **l_407 = &l_408;
    int *l_409[5] = {&g_198,&g_198,&g_198,&g_198,&g_198};
    unsigned char l_522[3];
    int **l_530 = &g_43;
    int l_576 = 0xEDB97325L;
    unsigned char l_586 = 255UL;
    short l_652[8][9] = {{0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL},{7L,0xB670L,7L,0xB670L,7L,0xB670L,7L,0xB670L,7L},{0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL},{7L,0xB670L,7L,0xB670L,7L,0xB670L,7L,0xB670L,7L},{0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL},{7L,0xB670L,7L,0xB670L,7L,0xB670L,7L,0xB670L,7L},{0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL,0xF26CL},{7L,0xB670L,7L,0xB670L,7L,0xB670L,7L,0xB670L,7L}};
    unsigned char *l_773 = (void*)0;
    unsigned char **l_772 = &l_773;
    int **l_814 = (void*)0;
    int i, j;
    for (i = 0; i < 1; i++)
        l_404[i] = &g_164;
    for (i = 0; i < 3; i++)
        l_522[i] = 251UL;
    if ((6UL & (0x0DA896E0L >= ((g_327 = l_326) != (void*)0))))
    {
        short l_332 = 0x03B9L;
        int *l_333 = (void*)0;
        int *l_334 = &g_5;
        unsigned char *l_338 = &g_199;
        int ***l_339 = &g_42;
        unsigned *l_340 = &g_341;
        int ****l_386 = &l_339;
        (*l_334) ^= ((*p_33) = (safe_lshift_func_int16_t_s_s(p_32, ((*g_109) = ((safe_rshift_func_uint16_t_u_s(((*p_34) < (g_320 == (1L ^ l_332))), p_32)) & (*g_43))))));
        if ((((safe_rshift_func_uint16_t_u_s(((func_60(((((*l_338) = l_337[1][3]) && (g_199 = g_21)) || (p_32 || func_38(((*l_340) ^= p_32)))), g_42, l_337[1][0]) && 7UL) != l_337[3][3]), p_35)) == 0xB826L) < 0UL))
        {
            return &g_43;
        }
        else
        {
            (*p_31) = (*g_42);
        }
        for (g_198 = 0; (g_198 <= 22); g_198 = safe_add_func_int8_t_s_s(g_198, 6))
        {
            int ****l_383 = (void*)0;
            for (g_320 = 0; (g_320 == 32); g_320++)
            {
                int l_351 = (-8L);
                int l_352 = (-4L);
                int l_353 = 0xD8E3BE96L;
                unsigned ***l_374 = &g_300;
                int **l_382 = &l_333;
                int ***l_381 = &l_382;
                for (g_251 = 1; (g_251 <= 5); g_251 += 1)
                {
                    int *l_346 = (void*)0;
                    int *l_347[5] = {&g_5,&g_5,&g_5,&g_5,&g_5};
                    int i;
                    ++l_348;
                    for (g_250 = 5; (g_250 >= 0); g_250 -= 1)
                    {
                        int i, j;
                        g_355--;
                        (*p_33) = (safe_rshift_func_uint16_t_u_s(func_60(g_292[0], (*l_339), p_32), p_32));
                        (*l_334) &= (safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((g_251 ^ p_35), (func_44((((safe_lshift_func_uint16_t_u_s((((*l_339) = &p_33) == (void*)0), ((p_32 != g_252) && l_348))) == p_35) & (p_35 ^ l_348))) || (**g_42)))), 1)) | 9UL), p_35));
                    }
                }
                (*p_33) = 0x0268C012L;
                for (l_351 = 23; (l_351 == 27); l_351 = safe_add_func_int8_t_s_s(l_351, 2))
                {
                    for (g_211 = 8; (g_211 < 49); ++g_211)
                    {
                        unsigned ***l_372 = &g_300;
                        unsigned ****l_373[5];
                        unsigned l_379[4] = {0xA053FD55L,0xA053FD55L,0xA053FD55L,0xA053FD55L};
                        int i;
                        for (i = 0; i < 5; i++)
                            l_373[i] = &l_372;
                        (*l_334) &= ((*p_33) ^= (&g_300 == (l_374 = l_372)));
                        (*p_33) = (safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_379[1] || (1UL & ((((void*)0 == p_33) >= 0xC9L) == ((*l_334) ^= (0x49L != p_35))))), 0x99L)), g_21));
                    }
                }
                for (g_354 = 0; (g_354 <= 4); g_354 += 1)
                {
                    int ****l_380[4][9][7] = {{{&l_339,&l_339,(void*)0,(void*)0,(void*)0,&l_339,&l_339},{&l_339,(void*)0,&l_339,&l_339,&l_339,&l_339,(void*)0},{(void*)0,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{&l_339,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{(void*)0,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{&l_339,(void*)0,&l_339,&l_339,&l_339,(void*)0,&l_339},{&l_339,(void*)0,&l_339,&l_339,&l_339,(void*)0,&l_339},{&l_339,&l_339,(void*)0,(void*)0,&l_339,&l_339,&l_339},{&l_339,&l_339,&l_339,&l_339,&l_339,(void*)0,&l_339}},{{&l_339,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{(void*)0,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{&l_339,&l_339,&l_339,&l_339,&l_339,&l_339,(void*)0},{&l_339,&l_339,&l_339,&l_339,(void*)0,&l_339,(void*)0},{&l_339,&l_339,&l_339,&l_339,&l_339,(void*)0,&l_339},{(void*)0,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{(void*)0,(void*)0,&l_339,&l_339,&l_339,&l_339,(void*)0},{&l_339,&l_339,&l_339,&l_339,&l_339,(void*)0,&l_339},{&l_339,(void*)0,(void*)0,&l_339,&l_339,(void*)0,(void*)0}},{{&l_339,&l_339,&l_339,&l_339,&l_339,(void*)0,(void*)0},{&l_339,&l_339,&l_339,(void*)0,&l_339,&l_339,(void*)0},{&l_339,&l_339,&l_339,&l_339,&l_339,(void*)0,&l_339},{&l_339,(void*)0,&l_339,(void*)0,&l_339,&l_339,&l_339},{&l_339,&l_339,&l_339,(void*)0,&l_339,(void*)0,&l_339},{(void*)0,&l_339,&l_339,&l_339,(void*)0,&l_339,&l_339},{&l_339,&l_339,&l_339,&l_339,(void*)0,&l_339,&l_339},{&l_339,(void*)0,&l_339,&l_339,(void*)0,&l_339,&l_339},{(void*)0,(void*)0,&l_339,&l_339,&l_339,(void*)0,&l_339}},{{&l_339,&l_339,(void*)0,&l_339,&l_339,&l_339,(void*)0},{(void*)0,&l_339,(void*)0,&l_339,&l_339,&l_339,&l_339},{(void*)0,&l_339,(void*)0,&l_339,(void*)0,(void*)0,&l_339},{&l_339,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{&l_339,&l_339,(void*)0,&l_339,&l_339,(void*)0,&l_339},{(void*)0,&l_339,(void*)0,&l_339,&l_339,&l_339,(void*)0},{(void*)0,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{(void*)0,&l_339,(void*)0,(void*)0,&l_339,(void*)0,&l_339},{&l_339,&l_339,(void*)0,(void*)0,(void*)0,(void*)0,&l_339}}};
                    int ****l_384[6] = {&l_339,&l_339,&l_339,&l_339,&l_339,&l_339};
                    int *****l_385 = (void*)0;
                    int *****l_387[3][10][8] = {{{&l_380[2][7][0],&l_384[2],&l_380[0][3][2],&l_383,(void*)0,&l_384[2],&l_380[2][4][3],&l_384[2]},{&l_380[2][7][0],&l_383,&l_383,&l_383,&l_380[2][7][0],(void*)0,&l_380[2][4][3],&l_383},{(void*)0,&l_383,&l_380[0][3][2],&l_384[2],&l_380[2][7][0],&l_384[2],&l_380[0][3][2],&l_383},{&l_380[2][7][0],&l_384[2],&l_380[0][3][2],&l_383,(void*)0,&l_384[2],&l_380[2][4][3],&l_384[2]},{&l_380[2][7][0],&l_383,&l_383,&l_383,&l_380[2][7][0],(void*)0,&l_380[2][4][3],&l_383},{(void*)0,&l_383,&l_380[0][3][2],&l_384[2],&l_380[2][7][0],&l_384[2],&l_380[0][3][2],&l_383},{&l_380[2][7][0],&l_384[2],&l_380[0][3][2],&l_383,(void*)0,&l_384[2],&l_380[2][4][3],&l_384[2]},{&l_380[2][7][0],&l_383,&l_383,&l_383,&l_380[2][7][0],(void*)0,&l_380[2][4][3],&l_383},{(void*)0,&l_383,&l_380[0][3][2],&l_384[2],&l_380[2][7][0],&l_384[2],&l_380[0][3][2],&l_383},{&l_380[2][7][0],&l_384[2],&l_380[0][3][2],&l_383,(void*)0,&l_384[2],&l_380[2][4][3],&l_384[2]}},{{&l_380[2][7][0],&l_383,&l_383,&l_383,&l_380[2][7][0],(void*)0,&l_380[2][4][3],&l_383},{(void*)0,&l_383,&l_380[0][3][2],&l_384[2],&l_380[2][7][0],&l_384[2],&l_380[0][3][2],&l_383},{&l_380[2][7][0],&l_384[2],&l_380[0][3][2],&l_383,(void*)0,&l_384[2],&l_380[2][4][3],(void*)0},{(void*)0,&l_384[2],&l_380[2][4][3],&l_384[2],(void*)0,&l_383,&l_380[0][3][2],&l_384[2]},{&l_384[2],&l_384[2],&l_383,(void*)0,(void*)0,(void*)0,&l_383,&l_384[2]},{(void*)0,(void*)0,&l_383,&l_384[2],&l_384[2],(void*)0,&l_380[0][3][2],(void*)0},{(void*)0,&l_384[2],&l_380[2][4][3],&l_384[2],(void*)0,&l_383,&l_380[0][3][2],&l_384[2]},{&l_384[2],&l_384[2],&l_383,(void*)0,(void*)0,(void*)0,&l_383,&l_384[2]},{(void*)0,(void*)0,&l_383,&l_384[2],&l_384[2],(void*)0,&l_380[0][3][2],(void*)0},{(void*)0,&l_384[2],&l_380[2][4][3],&l_384[2],(void*)0,&l_383,&l_380[0][3][2],&l_384[2]}},{{&l_384[2],&l_384[2],&l_383,(void*)0,(void*)0,(void*)0,&l_383,&l_384[2]},{(void*)0,(void*)0,&l_383,&l_384[2],&l_384[2],(void*)0,&l_380[0][3][2],(void*)0},{(void*)0,&l_384[2],&l_380[2][4][3],&l_384[2],(void*)0,&l_383,&l_380[0][3][2],&l_384[2]},{&l_384[2],&l_384[2],&l_383,(void*)0,(void*)0,(void*)0,&l_383,&l_384[2]},{(void*)0,(void*)0,&l_383,&l_384[2],&l_384[2],(void*)0,&l_380[0][3][2],(void*)0},{(void*)0,&l_384[2],&l_380[2][4][3],&l_384[2],(void*)0,&l_383,&l_380[0][3][2],&l_384[2]},{&l_384[2],&l_384[2],&l_383,(void*)0,(void*)0,(void*)0,&l_383,&l_384[2]},{(void*)0,(void*)0,&l_383,&l_384[2],&l_384[2],(void*)0,&l_380[0][3][2],(void*)0},{(void*)0,&l_384[2],&l_380[2][4][3],&l_384[2],(void*)0,&l_383,&l_380[0][3][2],&l_384[2]},{&l_384[2],&l_384[2],&l_383,(void*)0,(void*)0,(void*)0,&l_383,&l_384[2]}}};
                    int i, j, k;
                    if ((((**g_42) >= (&p_31 != (l_381 = &p_31))) | (l_383 == (l_388 = (l_386 = l_384[2])))))
                    {
                        (**l_381) = (**l_339);
                        return &g_43;
                    }
                    else
                    {
                        int i, j;
                        l_337[(g_354 + 2)][g_354] |= (p_35 > (g_252 &= (g_199++)));
                        return &g_43;
                    }
                }
            }
        }
    }
    else
    {
        return &g_43;
    }
    if (((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((*g_109), (**g_108))) < g_5), 1)) | (((****l_388) >= (g_73 = (safe_lshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((p_32 | (~(***l_389))), ((safe_rshift_func_uint16_t_u_s((g_164 |= g_155), 15)) < ((safe_mod_func_int16_t_s_s((0x0ED23CC1L & (((((*l_407) = &p_35) == (**l_326)) && (****l_388)) || 0x1D83L)), p_35)) >= p_32)))), 3UL)) >= g_355), 2)))) <= (****l_388))))
    {
        unsigned l_410 = 0x38FA3FA2L;
        char l_428 = 2L;
        int l_433 = (-1L);
        int l_434 = 0L;
        int l_477[7] = {0x9CDF76C4L,0x9CDF76C4L,0x9CDF76C4L,0x9CDF76C4L,0x9CDF76C4L,0x9CDF76C4L,0x9CDF76C4L};
        int *l_560 = &l_433;
        int i;
        if (l_410)
        {
            short l_435 = 0x9778L;
            int l_446 = (-10L);
            int l_447 = (-6L);
            unsigned short l_452 = 0xC57AL;
            int **l_466 = &g_43;
            g_73 &= (*p_33);
            for (g_250 = 0; (g_250 >= (-23)); g_250 = safe_sub_func_uint8_t_u_u(g_250, 8))
            {
                unsigned l_423 = 0x4FAA9972L;
                int l_424 = 0L;
                unsigned l_425 = 2UL;
                int l_431 = 0x1BEFE2CFL;
                unsigned short l_432 = 65526UL;
                (*p_34) = (*p_34);
            }
            if (((*p_33) = ((func_44(((p_35 != (0xB7L != (((-1L) | (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((65529UL <= (safe_sub_func_int16_t_s_s((**g_108), (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((l_447 = (l_446 = (g_354 = (**g_108)))) || (safe_lshift_func_uint8_t_u_s((****l_388), 5))), (safe_mod_func_int32_t_s_s(l_435, (0x73BAL && l_410))))), 0xC1L))))) ^ g_251), g_292[0])), l_452))) > p_32))) > l_452)) > g_453) == (*p_34))))
            {
                short l_458 = 0x78B5L;
                for (g_164 = (-23); (g_164 == 41); g_164 = safe_add_func_uint8_t_u_u(g_164, 7))
                {
                    int **l_457 = &g_43;
                    for (l_446 = 5; (l_446 >= 0); l_446 -= 1)
                    {
                        int **l_456 = &l_409[4];
                        (*g_42) = (*g_42);
                        if ((**g_42))
                            break;
                        return l_457;
                    }
                    l_458 = l_433;
                    (*p_34) = (**l_457);
                }
                return &g_43;
            }
            else
            {
                int **l_459 = &g_43;
                (*p_31) = (void*)0;
                for (g_211 = 0; (g_211 <= 4); g_211 += 1)
                {
                    for (g_148 = 0; (g_148 <= 2); g_148 += 1)
                    {
                        return &g_43;
                    }
                }
                if (((-1L) ^ (65535UL != func_60(l_433, l_459, p_35))))
                {
                    char l_464 = 0xE0L;
                    if (((*p_34) = ((g_252 ^= p_35) < (((safe_lshift_func_int16_t_s_s(0x503AL, 0)) ^ (safe_rshift_func_int8_t_s_u(p_35, p_35))) & l_464))))
                    {
                        return &g_43;
                    }
                    else
                    {
                        int **l_465 = &g_43;
                        return l_465;
                    }
                }
                else
                {
                    (*p_33) ^= (p_32 && p_32);
                    return l_466;
                }
            }
        }
        else
        {
            unsigned l_475 = 0UL;
            int l_476 = 0xC1698E56L;
            int l_502 = 0x15CB74BAL;
            int ***l_523 = &g_42;
            unsigned l_531 = 2UL;
            if (((*p_34) = func_38((p_35 & (p_35 != ((p_35 & l_433) != (p_32 < (safe_sub_func_uint16_t_u_u(((l_475 &= (safe_lshift_func_int8_t_s_s(((*g_43) || (((*p_33) ^= (safe_sub_func_uint32_t_u_u(0x75C43891L, l_433))) > p_32)), p_35))) > l_476), l_476)))))))))
            {
                ++g_479;
                (*g_42) = ((*p_31) = (*p_31));
            }
            else
            {
                char l_494[10][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
                int l_496 = 0L;
                int l_497 = 1L;
                int l_499 = (-8L);
                int l_500 = 0xCF998395L;
                int l_501 = 0x954DFE43L;
                int l_503 = 5L;
                unsigned char *l_546 = &g_504;
                int **l_555 = (void*)0;
                int i, j;
                if ((p_32 <= (safe_rshift_func_int16_t_s_u(p_32, p_32))))
                {
                    unsigned short l_491 = 0x3696L;
                    int l_498[4] = {0L,0L,0L,0L};
                    int i;
                    for (l_475 = 0; (l_475 <= 5); l_475 += 1)
                    {
                        unsigned char *l_488 = &g_211;
                        char l_492[6][7][3] = {{{0xE8L,0x51L,(-3L)},{0x1EL,0x50L,(-1L)},{(-1L),0x05L,(-10L)},{0xF6L,1L,0xE5L},{0xFFL,0xFFL,0L},{(-1L),1L,0x46L},{0L,0x8AL,0xABL}},{{0x7BL,1L,0x46L},{0x8AL,(-1L),(-1L)},{0x83L,0x50L,0x21L},{(-3L),0xFFL,(-1L)},{0x6BL,4L,0xD9L},{0x51L,0xABL,0x51L},{0L,0xF6L,0x7BL}},{{0L,0x49L,0xFFL},{1L,0x6BL,0xDAL},{(-1L),0x8FL,0x90L},{1L,0L,0x46L},{0L,0x13L,(-10L)},{0L,0x50L,0x79L},{0x51L,0L,0L}},{{0x6BL,0xE5L,1L},{(-3L),1L,0x51L},{0x83L,0x21L,(-1L)},{0x8AL,0x49L,0x13L},{1L,0x21L,0xF6L},{(-1L),1L,0xE8L},{0x1EL,0xE5L,0x46L}},{{0x49L,0L,5L},{0x50L,0x50L,0x6BL},{0L,0x13L,0L},{0x6BL,0L,(-1L)},{0xBBL,0x8FL,0x51L},{0x3DL,0x6BL,(-1L)},{0x05L,0x49L,0L}},{{(-1L),0xF6L,0x6BL},{(-1L),0xABL,5L},{0x46L,4L,0x46L},{0x8BL,0xFFL,0xE8L},{1L,0x50L,(-1L)},{0L,0xE8L,5L},{0x7BL,0x79L,0x83L}}};
                        int l_493 = 0x95895B42L;
                        int l_495[2][5];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_495[i][j] = 0xA82471B8L;
                        }
                    }
                }
                else
                {
                    unsigned *l_511 = &g_355;
                    int l_525 = 0L;
                    unsigned l_534 = 1UL;
                    if (func_44((safe_sub_func_uint16_t_u_u((((*p_34) < (safe_mod_func_uint8_t_u_u(((*p_34) && ((*l_511)--)), g_292[0]))) ^ ((safe_sub_func_uint8_t_u_u((0x0EE0F5FFL && (safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((*l_408) = ((*g_109) = (p_35 && 4294967287UL))), func_44(l_522[1]))), (l_523 == g_524))), l_525))), g_198)) < l_496)), p_32))))
                    {
                        l_531 |= ((*p_33) = func_60(((safe_sub_func_uint8_t_u_u(0x4EL, (safe_lshift_func_uint8_t_u_u(g_150[6][6], 7)))) > g_175), l_530, p_32));
                    }
                    else
                    {
                        (*p_34) ^= l_428;
                        (*p_34) = (*p_33);
                        (*g_42) = (*p_31);
                    }
                    if (((safe_mod_func_int8_t_s_s(((*p_34) != l_477[5]), g_250)) && (0x46E73E34L != l_534)))
                    {
                        int l_535 = 0x4F6DFAF9L;
                        int l_539 = 0L;
                        int l_540 = 5L;
                        g_543++;
                        (**g_524) = (**g_524);
                    }
                    else
                    {
                        unsigned short l_547 = 0x8BAEL;
lbl_550:
                        (*p_34) ^= (l_546 == &g_252);
                        ++l_547;
                        if (l_547)
                            goto lbl_550;
                        (*p_34) |= l_434;
                    }
                    if ((p_32 <= (((0x1AL > (g_536 |= (g_21 >= ((void*)0 != (*g_300))))) ^ (((l_501 = p_35) && 0x17E6L) || (((void*)0 != p_33) >= 0x22L))) | l_494[8][1])))
                    {
                        unsigned *l_551 = (void*)0;
                        unsigned *l_552[8][4] = {{&g_418,(void*)0,&g_418,&g_418},{&g_418,&g_418,&g_418,&g_418},{&g_341,&g_418,&g_341,&g_418},{&g_418,(void*)0,&g_341,&g_341},{&g_341,&g_341,&g_418,&g_341},{&g_418,(void*)0,&g_418,&g_418},{&g_418,&g_418,&g_418,&g_418},{&g_341,&g_418,&g_341,&g_418}};
                        int i, j;
                        (*p_34) = ((l_433 = l_496) == p_35);
                        (*p_34) ^= (safe_sub_func_uint32_t_u_u(4294967294UL, l_525));
                        (*p_34) = ((**g_299) == p_33);
                    }
                    else
                    {
                        (*g_42) = (*g_42);
                    }
                    return l_555;
                }
                (***l_388) = (*p_31);
                (**g_524) = (*l_530);
                for (g_542 = 0; (g_542 <= 4); g_542 = safe_add_func_int8_t_s_s(g_542, 8))
                {
                    (*p_34) = ((void*)0 == g_558);
                    l_477[2] = (*p_34);
                    if ((*p_34))
                        break;
                    (*p_34) ^= l_433;
                }
            }
        }
        (***g_559) = l_560;
    }
    else
    {
        unsigned l_561[9][1] = {{0xDC878FACL},{4294967295UL},{0xDC878FACL},{4294967295UL},{0xDC878FACL},{4294967295UL},{0xDC878FACL},{4294967295UL},{0xDC878FACL}};
        unsigned l_568[7][3] = {{0x33195B48L,1UL,0x33195B48L},{0x21B464D7L,0xE10D2439L,0xE10D2439L},{0x39CBF230L,1UL,0x39CBF230L},{0x21B464D7L,0x21B464D7L,0xE10D2439L},{0x33195B48L,1UL,0x33195B48L},{0x21B464D7L,0xE10D2439L,0xE10D2439L},{0x39CBF230L,1UL,0x39CBF230L}};
        unsigned char *l_569[3];
        unsigned ***l_581 = &g_300;
        int *l_590 = &g_150[1][4];
        int l_613 = 0x3425EBCEL;
        int l_614 = (-5L);
        int *l_622[3];
        int l_654[9] = {0xC8820FE7L,0xC8820FE7L,0xC8820FE7L,0xC8820FE7L,0xC8820FE7L,0xC8820FE7L,0xC8820FE7L,0xC8820FE7L,0xC8820FE7L};
        int l_677 = 0x561BA316L;
        int l_696 = 0x5116B8B4L;
        short l_697 = 0x6044L;
        short ***l_731 = &g_108;
        int i, j;
        for (i = 0; i < 3; i++)
            l_569[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_622[i] = &g_73;
        l_561[0][0] ^= 1L;
        (*p_33) = (~((safe_sub_func_int32_t_s_s((****g_559), (safe_add_func_int8_t_s_s((l_561[0][0] > (0x5BL || (safe_add_func_int32_t_s_s((func_60((g_199 = func_60(g_175, &p_33, l_568[2][1])), (*l_389), p_32) > 0x88L), 0xF1D86CFFL)))), g_150[6][6])))) > (*****g_558)));
        for (g_5 = 0; (g_5 <= 4); g_5 = safe_add_func_int16_t_s_s(g_5, 1))
        {
            unsigned l_587 = 4294967292UL;
            int l_611[3][9][5] = {{{1L,(-8L),0x6680B4B5L,0L,0x6680B4B5L},{0L,0L,0L,0x0447DC45L,0L},{1L,(-8L),0x6680B4B5L,0L,0x6680B4B5L},{0L,0L,0L,(-9L),0L},{0x99F40A4BL,0L,1L,6L,1L},{0x507A409BL,0x507A409BL,0L,(-9L),0L},{0x99F40A4BL,0L,1L,6L,1L},{0x507A409BL,0x507A409BL,0L,(-9L),0L},{0x99F40A4BL,0L,1L,6L,1L}},{{0x507A409BL,0x507A409BL,0L,(-9L),0L},{0x99F40A4BL,0L,1L,6L,1L},{0x507A409BL,0x507A409BL,0L,(-9L),0L},{0x99F40A4BL,0L,1L,6L,1L},{0x507A409BL,0x507A409BL,0L,(-9L),0L},{0x99F40A4BL,0L,1L,6L,1L},{0x507A409BL,0x507A409BL,0L,(-9L),0L},{0x99F40A4BL,0L,1L,6L,1L},{0x507A409BL,0x507A409BL,0L,(-9L),0L}},{{0x99F40A4BL,0L,1L,6L,1L},{0x507A409BL,0x507A409BL,0L,(-9L),0L},{0x99F40A4BL,0L,1L,6L,1L},{0x507A409BL,0x507A409BL,0L,(-9L),0L},{0x99F40A4BL,0L,0x61F8DB03L,0L,0x61F8DB03L},{0L,0L,(-9L),0x507A409BL,(-9L)},{0x6680B4B5L,2L,0x61F8DB03L,0L,0x61F8DB03L},{0L,0L,(-9L),0x507A409BL,(-9L)},{0x6680B4B5L,2L,0x61F8DB03L,0L,0x61F8DB03L}}};
            int **l_639 = &l_622[1];
            unsigned short l_661 = 0xE740L;
            int *****l_669 = &g_559;
            int i, j, k;
        }
        for (g_249 = 0; (g_249 <= (-18)); g_249 = safe_sub_func_uint32_t_u_u(g_249, 7))
        {
            int **l_719 = &l_409[3];
            unsigned *l_724 = &l_561[5][0];
            short *l_732 = &g_478[0];
            unsigned short l_733 = 0xAE3DL;
            (*p_31) = (*p_31);
            g_5 = (safe_rshift_func_uint8_t_u_s(((**l_719) = ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_u(((func_44(func_44((~(g_541[4][6][0] = (func_60((g_690--), l_719, ((p_35 != (safe_lshift_func_int8_t_s_s((&l_407 == (void*)0), 4))) != ((safe_add_func_uint32_t_u_u((++(*l_724)), (****g_559))) >= p_32))) & (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((g_354 = ((*l_732) = ((void*)0 != l_731))), l_733)), 0xD8L))))))) & p_32) || (**l_719)), (****l_388))) || 0x9841878BL) | g_734), 2)), 14)) <= 0x91040F8BL)), p_32));
        }
    }
    (****g_558) = (*p_31);
    for (g_252 = 9; (g_252 <= 4); --g_252)
    {
        int **l_740 = &l_409[2];
        int l_755[3];
        int ****l_808 = &g_524;
        int i;
        for (i = 0; i < 3; i++)
            l_755[i] = 0x74F50209L;
        for (l_576 = 0; (l_576 > (-2)); --l_576)
        {
            unsigned l_739 = 0x930D43CDL;
            int **l_741 = &l_409[0];
            unsigned char *l_782[4];
            unsigned ****l_784 = &g_299;
            short l_792 = 0x5A3BL;
            int i;
            for (i = 0; i < 4; i++)
                l_782[i] = &g_211;
        }
    }
    return l_814;
}







static unsigned char func_38(unsigned p_39)
{
    int **l_64 = &g_43;
    int l_102 = (-8L);
    short *l_122[1];
    short ***l_132 = &g_108;
    int *l_183 = &l_102;
    unsigned l_304[7];
    unsigned char *l_314 = (void*)0;
    unsigned char *l_315 = &g_199;
    unsigned *l_316 = &g_175;
    int *l_317[5] = {&g_249,&g_249,&g_249,&g_249,&g_249};
    int l_318[8] = {0x0ADE143DL,0x0ADE143DL,0x0ADE143DL,0x0ADE143DL,0x0ADE143DL,0x0ADE143DL,0x0ADE143DL,0x0ADE143DL};
    char l_319 = 9L;
    int i;
    for (i = 0; i < 1; i++)
        l_122[i] = &g_2[4][1];
    for (i = 0; i < 7; i++)
        l_304[i] = 4294967292UL;
    for (g_5 = 2; (g_5 >= 0); g_5 -= 1)
    {
        unsigned l_53 = 0UL;
        int l_114 = (-10L);
        short *l_119[6] = {&g_2[5][0],&g_2[5][0],&g_2[5][0],&g_2[5][0],&g_2[5][0],&g_2[5][0]};
        int *l_186 = &l_102;
        char l_268 = 0xDCL;
        int i;
        for (p_39 = 0; (p_39 <= 2); p_39 += 1)
        {
            int *l_52 = &g_21;
            int l_103 = (-1L);
            int l_115 = 1L;
            short *l_120[9] = {&g_2[5][0],&g_2[1][1],&g_2[5][0],&g_2[5][0],&g_2[1][1],&g_2[5][0],&g_2[5][0],&g_2[1][1],&g_2[5][0]};
            short ***l_130 = &g_108;
            int i;
            g_49 = p_39;
        }
        for (l_114 = 0; (l_114 <= 6); l_114 += 1)
        {
            int i, j;
            return g_2[(g_5 + 2)][g_5];
        }
    }
    g_5 = (safe_add_func_int8_t_s_s((((*l_183) = l_304[5]) & ((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((g_198 = ((((safe_add_func_int8_t_s_s((**l_64), ((safe_unary_minus_func_int16_t_s((g_104 & 0x02L))) == p_39))) & p_39) > (((*l_316) = ((**g_108) | (safe_rshift_func_uint8_t_u_u((((*l_315) = (l_183 == l_183)) || p_39), 7)))) || (**g_42))) && (*g_43))) >= p_39) <= 0x06B0L), (**g_42))), 65535UL)) < p_39)), 0xADL));
    (*l_64) = (*g_42);
    ++g_320;
    return g_49;
}







static unsigned char func_44(int p_45)
{
    unsigned l_48 = 1UL;
    return l_48;
}







static short func_60(unsigned char p_61, int ** p_62, unsigned p_63)
{
    unsigned char l_67 = 0xF3L;
    unsigned l_70 = 4294967291UL;
    int l_71 = 0x78CD4FCEL;
    int *l_72 = &g_73;
    short *l_80 = (void*)0;
    short *l_81 = &g_2[5][0];
    int **l_89 = &l_72;
    int *l_92 = &g_73;
    (*l_72) |= (l_71 |= ((g_2[5][2] && ((((safe_sub_func_int32_t_s_s((l_67 | (p_61 <= l_67)), ((func_44(g_2[5][0]) > (func_44((safe_sub_func_uint16_t_u_u(g_49, (p_63 != ((l_67 && 0x0FL) < l_70))))) <= l_67)) != 1UL))) | g_21) && l_67) && g_2[5][0])) ^ p_61));
    if ((p_61 > (safe_sub_func_int16_t_s_s(((*l_81) = ((+p_61) <= (((safe_mod_func_uint8_t_u_u(((func_44(((~0x4459L) <= 0x46ADL)) ^ g_2[5][0]) & (*l_72)), (*l_72))) > ((safe_mod_func_uint32_t_u_u(((&l_71 != (void*)0) >= g_2[0][0]), g_73)) && (*l_72))) | (*l_72)))), g_49))))
    {
        int *l_82 = &g_73;
        int **l_83 = (void*)0;
        int **l_84 = &l_82;
        (*l_84) = l_82;
    }
    else
    {
        int *l_85 = &g_73;
        int **l_86 = (void*)0;
        int **l_87[10] = {&l_72,&l_85,&l_72,&l_72,&l_85,&l_72,&l_72,&l_85,&l_72,&l_72};
        int *l_88[6][9][4] = {{{&g_5,&g_21,&l_71,&g_5},{&l_71,&g_21,&g_73,&g_73},{&g_21,&l_71,&g_73,&g_5},{&g_5,&g_21,&g_5,&l_71},{&g_5,&l_71,&g_5,&g_21},{&g_21,&l_71,&g_73,&g_5},{&g_5,&g_73,&g_5,&l_71},{&g_21,(void*)0,&g_5,&g_73},{&g_5,&g_21,&g_73,&g_21}},{{&g_21,&l_71,&g_73,&l_71},{&g_73,&l_71,&l_71,&g_73},{&l_71,&g_21,&g_21,&g_5},{(void*)0,&g_5,&g_21,&g_5},{&l_71,&l_71,&g_5,&g_5},{&l_71,&g_5,&g_73,&g_5},{&g_73,&g_21,(void*)0,&g_73},{&l_71,&l_71,&g_5,&l_71},{(void*)0,&l_71,&g_5,&g_21}},{{(void*)0,&l_71,&g_21,&g_21},{&g_5,&g_5,&g_73,&g_5},{&g_5,&g_5,&g_21,&g_73},{(void*)0,&g_5,&g_5,(void*)0},{(void*)0,&g_73,&g_5,&g_5},{&l_71,&l_71,(void*)0,&g_5},{&g_73,&g_73,&g_73,&g_21},{&l_71,(void*)0,&g_5,&g_73},{&l_71,(void*)0,&g_21,&g_21}},{{(void*)0,&g_73,&g_21,&g_5},{&l_71,&l_71,&l_71,&g_5},{&g_73,&g_73,&g_73,(void*)0},{&g_21,&g_5,&g_5,&g_73},{&g_5,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&l_71},{&l_71,&g_21,&g_5,(void*)0},{&g_73,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5}},{{&g_73,&g_21,(void*)0,&g_5},{&g_21,&g_5,&l_71,&g_5},{&g_73,&g_21,&g_5,&g_5},{&l_71,&g_5,&g_5,&g_5},{&g_73,&g_21,&g_21,&g_5},{&g_21,&g_5,&l_71,&g_5},{&g_21,&g_5,&l_71,(void*)0},{&g_5,&g_21,&g_21,&l_71},{&g_5,&l_71,&g_5,&g_5}},{{&g_5,&g_5,&g_21,&g_5},{&g_5,&g_5,&l_71,&g_21},{&g_21,&g_21,&l_71,&l_71},{&g_21,&g_21,&g_21,&l_71},{&g_73,(void*)0,&g_5,&g_21},{&l_71,&g_21,&g_5,&g_5},{&g_73,&g_21,&l_71,&g_21},{&g_21,(void*)0,(void*)0,&l_71},{&g_73,&g_21,&g_5,&l_71}}};
        int i, j, k;
        l_72 = l_85;
        l_88[3][8][2] = &l_71;
        return p_63;
    }
    (*l_89) = (*g_42);
    for (g_49 = 0; (g_49 < 27); g_49 = safe_add_func_uint32_t_u_u(g_49, 4))
    {
        (*l_89) = l_92;
        (**l_89) &= 0x29F2DB05L;
        (**l_89) = ((void*)0 == (*l_89));
    }
    return g_73;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_150[i][j], "g_150[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_292[i], "g_292[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_478[i], "g_478[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_541[i][j][k], "g_541[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_648, "g_648", print_hash_value);
    transparent_crc(g_653, "g_653", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    transparent_crc(g_671, "g_671", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_678[i], "g_678[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_703[i], "g_703[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_704, "g_704", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_756, "g_756", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_850[i], "g_850[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_858, "g_858", print_hash_value);
    transparent_crc(g_887, "g_887", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_919[i], "g_919[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_932[i][j], "g_932[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_942, "g_942", print_hash_value);
    transparent_crc(g_963, "g_963", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    transparent_crc(g_979, "g_979", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1068[i], "g_1068[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1080, "g_1080", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1086[i][j][k], "g_1086[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1111, "g_1111", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
