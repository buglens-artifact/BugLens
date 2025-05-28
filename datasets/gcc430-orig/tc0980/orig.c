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



static unsigned g_2[3] = {0x7571177EL,0x7571177EL,0x7571177EL};
static int g_3 = 0xBAEEF20FL;
static volatile int g_4 = 0x1E2C0D37L;
static volatile int g_5[4] = {0xE923E64FL,0xE923E64FL,0xE923E64FL,0xE923E64FL};
static volatile int g_6[1][2][5] = {{{0xED8F6EFBL,0xED8F6EFBL,0xED8F6EFBL,0xED8F6EFBL,0xED8F6EFBL},{0x09B7928FL,0x09B7928FL,0x09B7928FL,0x09B7928FL,0x09B7928FL}}};
static int g_7 = 0x3A88E00FL;
static int g_9[9] = {0x9B389519L,0xB2C57E71L,0xB2C57E71L,0x9B389519L,0xB2C57E71L,0xB2C57E71L,0x9B389519L,0xB2C57E71L,0xB2C57E71L};
static const volatile int *g_51 = &g_5[1];
static const volatile int **g_50[5][4][3] = {{{&g_51,&g_51,(void*)0},{&g_51,(void*)0,&g_51},{&g_51,(void*)0,(void*)0},{&g_51,&g_51,&g_51}},{{&g_51,&g_51,(void*)0},{&g_51,(void*)0,&g_51},{&g_51,(void*)0,&g_51},{&g_51,&g_51,&g_51}},{{(void*)0,&g_51,&g_51},{(void*)0,(void*)0,&g_51},{&g_51,&g_51,&g_51},{(void*)0,&g_51,&g_51}},{{&g_51,(void*)0,&g_51},{(void*)0,&g_51,&g_51},{&g_51,&g_51,&g_51},{(void*)0,&g_51,&g_51}},{{(void*)0,(void*)0,&g_51},{&g_51,&g_51,&g_51},{(void*)0,&g_51,&g_51},{&g_51,(void*)0,&g_51}}};
static int g_64 = 0x26C5F514L;
static char g_85 = (-1L);
static char g_87[1] = {0x78L};
static char g_89[8] = {0x6AL,0x6AL,0x6AL,0x6AL,0x6AL,0x6AL,0x6AL,0x6AL};
static unsigned short g_105 = 0x3C7DL;
static volatile unsigned short g_107[4] = {0x24DAL,0x24DAL,0x24DAL,0x24DAL};
static volatile unsigned short *g_106 = &g_107[0];
static short g_117 = (-1L);
static unsigned char g_119[10][4] = {{0x2FL,0x70L,0x2FL,0x81L},{255UL,0x70L,255UL,0UL},{0x70L,4UL,4UL,0x70L},{0x2FL,0UL,4UL,0x81L},{0x70L,255UL,255UL,255UL},{255UL,4UL,0x2FL,255UL},{0x2FL,255UL,0x81L,0x81L},{0UL,0UL,255UL,0x70L},{0UL,4UL,0x81L,0UL},{0x2FL,0x70L,0x2FL,0x81L}};
static short *g_162 = &g_117;
static short **g_161 = &g_162;
static volatile char g_182[9][6][4] = {{{1L,0x63L,(-1L),0x10L},{(-2L),(-1L),0x1BL,0x8CL},{(-1L),0x63L,(-1L),(-1L)},{0x63L,0x10L,0x1DL,0x31L},{0x63L,(-1L),(-1L),1L},{(-1L),0x31L,0x1BL,0x1BL}},{{(-2L),(-2L),(-1L),0x31L},{0x31L,(-1L),1L,0x10L},{(-1L),0x63L,0x1BL,1L},{0x10L,0x63L,0L,0x10L},{0x63L,(-1L),(-1L),0x31L},{(-1L),(-2L),(-1L),0x1BL}},{{0x10L,0x31L,(-9L),1L},{(-2L),(-1L),1L,0x31L},{0x04L,0x10L,1L,(-1L)},{(-2L),0x63L,(-9L),0x8CL},{0x10L,(-1L),(-1L),0x10L},{(-1L),0x10L,(-1L),0x04L}},{{0x63L,(-2L),0L,1L},{0x10L,0x04L,0x1BL,1L},{(-1L),(-2L),1L,0x04L},{0x31L,0x10L,(-1L),0x10L},{(-2L),(-1L),0x1BL,0x8CL},{(-1L),0x63L,(-1L),(-1L)}},{{0x63L,0x10L,0x10L,1L},{0x1BL,(-1L),(-9L),(-1L)},{(-1L),1L,0x1DL,0x1DL},{(-1L),(-1L),0L,1L},{1L,(-1L),9L,0x04L},{(-1L),0x1BL,0x1DL,9L}},{{0x04L,0x1BL,1L,0x04L},{0x1BL,(-1L),(-1L),1L},{(-9L),(-1L),(-9L),0x1DL},{0x04L,1L,(-2L),(-1L)},{(-1L),(-1L),9L,1L},{(-1L),0x04L,9L,(-1L)}},{{(-1L),0x1BL,(-2L),0x94L},{0x04L,(-9L),(-9L),0x04L},{(-9L),0x04L,(-1L),(-1L)},{0x1BL,(-1L),1L,(-1L)},{0x04L,(-1L),0x1DL,(-1L)},{(-1L),(-1L),9L,(-1L)}},{{1L,0x04L,0L,0x04L},{(-1L),(-9L),0x1DL,0x94L},{(-1L),0x1BL,(-9L),(-1L)},{0x1BL,0x04L,0x10L,1L},{0x1BL,(-1L),(-9L),(-1L)},{(-1L),1L,0x1DL,0x1DL}},{{(-1L),0x94L,(-2L),0x1BL},{0x1BL,0L,0x1DL,(-1L)},{9L,0x04L,(-1L),0x1DL},{(-1L),0x04L,0x31L,(-1L)},{0x04L,0L,9L,0x1BL},{(-1L),0x94L,(-1L),(-1L)}}};
static volatile unsigned g_190 = 1UL;
static int *g_213 = &g_9[3];
static int **g_212 = &g_213;
static const int *g_216 = (void*)0;
static const int **g_215 = &g_216;
static unsigned short g_248 = 0xC893L;
static unsigned g_267[10] = {0xFEFD78DAL,4294967295UL,0xCF70450DL,0xCF70450DL,4294967295UL,0xFEFD78DAL,4294967295UL,0xCF70450DL,0xCF70450DL,4294967295UL};
static unsigned **g_372 = (void*)0;
static int g_513[10][2][7] = {{{0x5470C863L,0x1A8DC967L,0x1A8DC967L,0x5470C863L,0x1A8DC967L,0x1A8DC967L,0x5470C863L},{0x6E0888BDL,(-1L),0x6E0888BDL,0x6E0888BDL,(-1L),0x6E0888BDL,0x6E0888BDL}},{{0x5470C863L,0x5470C863L,0x005F0DABL,0x5470C863L,0x5470C863L,0x005F0DABL,0x5470C863L},{(-1L),0x6E0888BDL,0x6E0888BDL,(-1L),0x6E0888BDL,0x6E0888BDL,(-1L)}},{{0x1A8DC967L,0x5470C863L,0x1A8DC967L,0x1A8DC967L,0x5470C863L,0x1A8DC967L,0x1A8DC967L},{(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)}},{{0x5470C863L,0x1A8DC967L,0x1A8DC967L,0x5470C863L,0x1A8DC967L,0x1A8DC967L,0x5470C863L},{0x6E0888BDL,(-1L),0x6E0888BDL,0x6E0888BDL,(-1L),0x6E0888BDL,0x6E0888BDL}},{{0x5470C863L,0x5470C863L,0x005F0DABL,0x5470C863L,0x5470C863L,0x005F0DABL,0x1A8DC967L},{0x6E0888BDL,0L,0L,0x6E0888BDL,0L,0L,0x6E0888BDL}},{{0x005F0DABL,0x1A8DC967L,0x005F0DABL,0x005F0DABL,0x1A8DC967L,0x005F0DABL,0x005F0DABL},{0x6E0888BDL,0x6E0888BDL,(-1L),0x6E0888BDL,0x6E0888BDL,(-1L),0x6E0888BDL}},{{0x1A8DC967L,0x005F0DABL,0x005F0DABL,0x1A8DC967L,0x005F0DABL,0x005F0DABL,0x1A8DC967L},{0L,0x6E0888BDL,0L,0L,0x6E0888BDL,0L,0L}},{{0x1A8DC967L,0x1A8DC967L,0x5470C863L,0x1A8DC967L,0x1A8DC967L,0x5470C863L,0x1A8DC967L},{0x6E0888BDL,0L,0L,0x6E0888BDL,0L,0L,0x6E0888BDL}},{{0x005F0DABL,0x1A8DC967L,0x005F0DABL,0x005F0DABL,0x1A8DC967L,0x005F0DABL,0x005F0DABL},{0x6E0888BDL,0x6E0888BDL,(-1L),0x6E0888BDL,0x6E0888BDL,(-1L),0x6E0888BDL}},{{0x1A8DC967L,0x005F0DABL,0x005F0DABL,0x1A8DC967L,0x005F0DABL,0x005F0DABL,0x1A8DC967L},{0L,0x6E0888BDL,0L,0L,0x6E0888BDL,0L,0L}}};
static const unsigned char g_530[3] = {253UL,253UL,253UL};
static unsigned char *g_541 = &g_119[7][1];
static unsigned char **g_540 = &g_541;
static char g_621 = 0x58L;
static unsigned g_627 = 0x325242F3L;
static int *g_656 = &g_64;
static volatile int g_720 = 0L;
static int **g_752[9] = {&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213};
static volatile unsigned *g_764 = &g_190;
static volatile unsigned **g_763 = &g_764;
static volatile short g_897 = (-5L);
static char g_985 = 3L;
static int *g_997 = (void*)0;
static unsigned char g_1037 = 8UL;
static int *g_1055 = (void*)0;
static unsigned *g_1110 = &g_627;
static volatile int ***g_1113 = (void*)0;
static int g_1155 = 1L;
static short g_1164[2] = {0xF8F8L,0xF8F8L};
static volatile int g_1192 = 0L;
static volatile short **g_1260 = (void*)0;
static volatile short ***g_1259 = &g_1260;
static volatile short ****g_1258[4][9][7] = {{{(void*)0,&g_1259,&g_1259,&g_1259,&g_1259,(void*)0,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,(void*)0},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,(void*)0,(void*)0,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,(void*)0,&g_1259,&g_1259,(void*)0,(void*)0},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,(void*)0,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,(void*)0,&g_1259,&g_1259,(void*)0,&g_1259}},{{&g_1259,&g_1259,(void*)0,&g_1259,&g_1259,(void*)0,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,(void*)0,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,(void*)0,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,(void*)0,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{(void*)0,&g_1259,(void*)0,&g_1259,&g_1259,&g_1259,&g_1259},{(void*)0,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259}},{{&g_1259,&g_1259,(void*)0,(void*)0,&g_1259,&g_1259,(void*)0},{&g_1259,&g_1259,&g_1259,(void*)0,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,(void*)0,(void*)0,&g_1259},{(void*)0,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{(void*)0,&g_1259,&g_1259,&g_1259,(void*)0,&g_1259,(void*)0},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,(void*)0,&g_1259,&g_1259,&g_1259}},{{(void*)0,(void*)0,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,(void*)0,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,(void*)0,(void*)0,&g_1259},{&g_1259,(void*)0,&g_1259,&g_1259,&g_1259,(void*)0,&g_1259},{&g_1259,&g_1259,(void*)0,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,(void*)0,(void*)0,&g_1259},{(void*)0,&g_1259,(void*)0,&g_1259,(void*)0,&g_1259,&g_1259},{(void*)0,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259}}};
static int ***g_1365 = (void*)0;
static unsigned g_1379[4][3][1] = {{{0x4BAD4B74L},{0UL},{0UL}},{{0x4BAD4B74L},{0UL},{0UL}},{{0x4BAD4B74L},{0UL},{0UL}},{{0x4BAD4B74L},{0UL},{0UL}}};
static unsigned * const g_1378 = &g_1379[1][1][0];
static unsigned * const *g_1377 = &g_1378;
static int g_1509[6][2][6] = {{{0L,1L,0L,(-9L),0x4757B878L,(-9L)},{0L,1L,0L,(-9L),0x5B000C62L,(-9L)}},{{0L,1L,0L,(-9L),0x4757B878L,(-9L)},{0L,1L,0L,(-9L),0x5B000C62L,(-9L)}},{{0L,1L,0x60647247L,1L,0L,1L},{4L,(-9L),4L,1L,0L,1L}},{{0x60647247L,(-9L),0x60647247L,1L,0L,1L},{4L,(-9L),4L,1L,0L,1L}},{{0x60647247L,(-9L),0x60647247L,1L,0L,1L},{4L,(-9L),4L,1L,0L,1L}},{{0x60647247L,(-9L),0x60647247L,1L,0L,1L},{4L,(-9L),4L,1L,0L,1L}}};



static unsigned short func_1(void);
static char func_19(const int * p_20, const int * p_21, const unsigned p_22);
static unsigned func_26(int * p_27, unsigned short p_28, short p_29, short p_30);
static int * func_31(int * p_32, int * p_33, unsigned char p_34, int * p_35, int p_36);
static int * func_38(int p_39, unsigned char p_40, unsigned p_41, unsigned p_42);
static unsigned char func_43(int * p_44, unsigned p_45, int * p_46);
static int * func_52(int ** p_53, int ** p_54, int * p_55, const int ** p_56, int ** p_57);
static int ** func_58(const int p_59, short p_60, int * const * p_61, unsigned char p_62);
static int * func_68(unsigned char p_69);
static int * func_101(short p_102, int * p_103);
static unsigned short func_1(void)
{
    unsigned l_12[9] = {0x1BF07968L,0x4495231FL,0x1BF07968L,0x1BF07968L,0x4495231FL,0x1BF07968L,0x1BF07968L,0x4495231FL,0x1BF07968L};
    int *l_37[7][3] = {{(void*)0,(void*)0,&g_3},{&g_9[6],&g_3,&g_3},{&g_3,&g_9[7],&g_9[3]},{&g_9[6],&g_9[7],&g_9[6]},{(void*)0,&g_3,&g_9[3]},{(void*)0,(void*)0,&g_3},{&g_9[6],&g_3,&g_3}};
    int l_63 = 0xBC9EE521L;
    int **l_214 = &l_37[0][2];
    int *l_1057 = &g_3;
    unsigned short *l_1502 = &g_248;
    int i, j;
    for (g_3 = 0; (g_3 <= 2); g_3 += 1)
    {
        int *l_49 = &g_9[3];
        int l_1056 = 0x885AC179L;
        unsigned l_1359 = 8UL;
        unsigned l_1494 = 0xCAFF93DAL;
        int l_1495[6][1][1] = {{{(-7L)}},{{2L}},{{(-7L)}},{{2L}},{{(-7L)}},{{2L}}};
        const int *l_1500[10][4] = {{&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0]},{&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0]},{&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0]},{&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0]},{&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0]},{&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0]},{&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0]},{&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0]},{&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0]},{&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0],&l_1495[3][0][0]}};
        unsigned short *l_1501 = &g_248;
        int l_1503 = 0x3305B418L;
        const unsigned l_1504[1] = {4294967294UL};
        unsigned l_1505 = 0xFD7BCC00L;
        int i, j, k;
        for (g_7 = 2; (g_7 >= 0); g_7 -= 1)
        {
            int *l_8 = &g_9[3];
            int *l_10 = &g_9[5];
            int *l_11 = &g_9[0];
            int **l_47 = (void*)0;
            int **l_48[6][8] = {{&l_37[6][1],(void*)0,(void*)0,&l_37[6][1],&l_37[1][2],&l_37[1][2],&l_37[6][1],(void*)0},{&l_37[2][0],&l_37[2][0],(void*)0,&l_11,&l_37[1][2],&l_37[6][1],&l_10,&l_37[6][1]},{&l_37[6][1],(void*)0,&l_11,(void*)0,&l_37[6][1],&l_11,&l_37[2][0],&l_37[6][1]},{(void*)0,&l_37[1][2],&l_10,&l_11,&l_11,&l_10,&l_37[1][2],(void*)0},{(void*)0,&l_11,&l_10,&l_37[6][1],&l_37[2][0],&l_37[6][1],&l_37[2][0],&l_37[6][1]},{&l_11,(void*)0,&l_11,&l_37[6][1],&l_37[6][1],&l_37[6][1],&l_10,&l_10}};
            int i, j;
            l_12[4]--;
            l_1495[5][0][0] |= ((*l_10) = ((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((func_19((((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint8_t_u_s(((func_26(func_31(l_37[6][1], func_38(g_2[g_3], func_43((l_49 = (void*)0), (g_50[4][2][2] != &g_51), func_52(func_58((*g_51), (g_64 = l_63), &l_37[6][1], (65535UL | g_7)), l_214, (*g_212), g_215, &g_213)), g_621, g_530[2]), l_1056, l_1057, g_2[2]), l_1056, g_7, g_1164[0]) ^ l_1359) > (*l_1057)), l_1056)))) < 0xFEC8L) , &l_1056), &l_1056, l_1359) == l_1494) == g_1379[1][1][0]), 4294967295UL)), 3)) == g_1379[1][2][0]));


            ;

            ;
            ;
            return (*g_106);
        }
        l_1505 ^= (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(func_19(l_1500[7][2], (*l_214), ((l_1501 == (l_1502 = (void*)0)) && (((g_2[g_3] != (*l_1057)) < (l_1495[5][0][0] = ((*l_49) = 0x05D3CAA6L))) != ((**g_1377) , func_19((((func_26((*l_214), (*g_106), (*g_162), (*l_1057)) , l_1503) < (**g_161)) , (*l_214)), &l_1503, (*g_1378)))))), l_1504[0])), (-7L)));

        ;
    }

    ;
    for (g_117 = (-24); (g_117 != (-3)); g_117 = safe_add_func_uint16_t_u_u(g_117, 7))
    {
        unsigned short l_1508 = 0x2600L;
        char l_1516 = 0L;
        int l_1517[1];
        int l_1518[8][5][2] = {{{(-1L),0xEF2479FFL},{(-1L),0xA9C7C517L},{0x67C5B740L,0x443B0CA5L},{0x443B0CA5L,0x03F1BE45L},{0xB0AD263DL,0x60DCB181L}},{{1L,(-1L)},{5L,(-7L)},{0xEF2479FFL,(-7L)},{5L,(-1L)},{1L,0x60DCB181L}},{{(-1L),0xD46396A8L},{0x9788F3C1L,0x9788F3C1L},{0x03F1BE45L,0xB0AD263DL},{0xEF2479FFL,0x60DCB181L},{0x97186F4DL,0x443B0CA5L}},{{0xB0AD263DL,0x97186F4DL},{0xA9C7C517L,0x6CDD3485L},{0xA9C7C517L,0x97186F4DL},{0xB0AD263DL,0x443B0CA5L},{0x97186F4DL,0x60DCB181L}},{{0xEF2479FFL,0xB0AD263DL},{0x03F1BE45L,0x9788F3C1L},{0x9788F3C1L,0xD46396A8L},{(-1L),1L},{0x67C5B740L,0xEF2479FFL}},{{0L,(-1L)},{0x60DCB181L,(-1L)},{0L,0xEF2479FFL},{0x67C5B740L,1L},{(-1L),0xD46396A8L}},{{0x9788F3C1L,0x9788F3C1L},{0x03F1BE45L,0xB0AD263DL},{0xEF2479FFL,0x60DCB181L},{0x97186F4DL,0x443B0CA5L},{0xB0AD263DL,0x97186F4DL}},{{0xA9C7C517L,0x6CDD3485L},{0xA9C7C517L,0x97186F4DL},{0xB0AD263DL,0x443B0CA5L},{0x97186F4DL,0x60DCB181L},{0xEF2479FFL,0xB0AD263DL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1517[i] = 0x7D2120CBL;
        l_1508 = 0x46C15BBEL;
        (*l_1057) &= g_1509[0][0][0];
        l_1518[0][4][1] &= (l_1517[0] |= ((*g_106) < (safe_lshift_func_int16_t_s_u((((**g_161) >= (((*l_1057) && (((*l_1057) , (**g_540)) ^ g_267[5])) , l_1508)) , (l_1516 = (safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_1508, ((**g_212) = l_1508))), (**g_540))))), 10))));
        (*g_215) = (((**g_161) ^ (safe_div_func_int16_t_s_s(l_1517[0], func_26(&l_1517[0], ((**g_763) > 0x73CBD792L), ((7L || (l_1516 | 0x1208L)) , l_1508), (*g_162))))) , (*g_215));
    }
    return (*g_106);
}







static char func_19(const int * p_20, const int * p_21, const unsigned p_22)
{
    unsigned **l_1363[8][9] = {{(void*)0,&g_1110,&g_1110,&g_1110,&g_1110,(void*)0,&g_1110,&g_1110,&g_1110},{(void*)0,(void*)0,(void*)0,&g_1110,(void*)0,(void*)0,(void*)0,(void*)0,&g_1110},{&g_1110,&g_1110,&g_1110,(void*)0,(void*)0,&g_1110,&g_1110,&g_1110,(void*)0},{&g_1110,(void*)0,(void*)0,&g_1110,&g_1110,&g_1110,(void*)0,(void*)0,&g_1110},{&g_1110,&g_1110,&g_1110,&g_1110,&g_1110,&g_1110,&g_1110,&g_1110,&g_1110},{&g_1110,(void*)0,(void*)0,(void*)0,(void*)0,&g_1110,(void*)0,(void*)0,(void*)0},{&g_1110,&g_1110,&g_1110,&g_1110,&g_1110,&g_1110,&g_1110,&g_1110,&g_1110},{&g_1110,(void*)0,&g_1110,&g_1110,&g_1110,&g_1110,(void*)0,&g_1110,&g_1110}};
    unsigned ***l_1362 = &l_1363[0][2];
    int *l_1364 = &g_513[8][0][1];
    unsigned *l_1384 = &g_2[2];
    unsigned **l_1383 = &l_1384;
    short ***l_1412 = &g_161;
    short ****l_1411 = &l_1412;
    short ****l_1414 = &l_1412;
    const int **l_1419 = &g_216;
    unsigned l_1420 = 0UL;
    int l_1437 = 0x9F96E36CL;
    int l_1454 = (-1L);
    short l_1478 = (-4L);
    int *l_1490 = &g_9[3];
    int i, j;
    (*l_1364) = (+(safe_add_func_uint16_t_u_u(65531UL, ((p_22 , l_1362) == &l_1363[0][2]))));
    return g_6[0][1][3];
}







static unsigned func_26(int * p_27, unsigned short p_28, short p_29, short p_30)
{
    const int ***l_1340 = &g_215;
    int l_1347[7] = {(-2L),(-2L),0x28F613FFL,(-2L),(-2L),0x28F613FFL,(-2L)};
    short *l_1348 = &g_1164[1];
    int l_1349 = 0x12DBBBC9L;
    int *l_1358 = &l_1349;
    int i;
    l_1349 = (((void*)0 != l_1340) >= ((*g_541) , (safe_add_func_uint8_t_u_u((**g_540), (((*l_1348) = (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(1L, 4)), (l_1347[3] = 255UL)))) != l_1349)))));
    (*l_1358) = (l_1347[3] = ((*g_541) <= p_28));
    return (**g_763);
}







static int * func_31(int * p_32, int * p_33, unsigned char p_34, int * p_35, int p_36)
{
    int l_1061 = 0xCC6935F4L;
    int **l_1070 = (void*)0;
    unsigned short * const l_1115 = &g_248;
    int l_1148 = (-5L);
    int l_1152 = 0x5E6425F6L;
    int l_1153[4][1][5] = {{{0L,0L,1L,(-1L),1L}},{{1L,1L,1L,1L,1L}},{{0L,0L,1L,(-1L),1L}},{{1L,1L,1L,1L,1L}}};
    int l_1159[7][6] = {{(-1L),6L,0xB29014CFL,6L,(-1L),0xB29014CFL},{6L,(-1L),0xB29014CFL,0x28A6F569L,0x28A6F569L,0xB29014CFL},{0x28A6F569L,0x28A6F569L,0xB29014CFL,(-1L),6L,0xB29014CFL},{(-1L),6L,0xB29014CFL,6L,(-1L),0xB29014CFL},{6L,(-1L),0xB29014CFL,0x28A6F569L,0x28A6F569L,0xB29014CFL},{0x28A6F569L,0xA0835C98L,(-1L),(-1L),0x46365498L,(-1L)},{(-1L),0x46365498L,(-1L),0x46365498L,(-1L),(-1L)}};
    unsigned short l_1160 = 65526UL;
    short l_1188[10][9] = {{0x145EL,(-2L),(-1L),(-6L),0x2C4EL,0x20BFL,0x6B51L,0L,0x3683L},{0x1C3EL,8L,0xFE46L,0x2C4EL,0x90A2L,0xEADFL,0x3683L,1L,1L},{(-1L),0x53F1L,0xC499L,0x1C3EL,0L,(-1L),0x60E5L,0x60E5L,(-1L)},{(-1L),(-1L),0xEADFL,(-1L),(-1L),8L,0xAC5BL,0x145EL,0x60E5L},{0x1C3EL,1L,0x145EL,0x5124L,1L,0xA418L,0xC822L,0L,(-1L)},{0x145EL,0xC822L,(-4L),1L,0x6B51L,8L,(-1L),0xA418L,0xAC5BL},{8L,0xE48FL,0L,0x90A2L,0x20BFL,(-1L),0x5124L,(-1L),0x5124L},{0xEADFL,0xE48FL,8L,8L,0xE48FL,0xEADFL,0x20BFL,0L,0xA418L},{0x5124L,0xC822L,1L,0xC499L,0xC5EEL,0x20BFL,0L,(-1L),(-4L)},{0xC822L,1L,0xE48FL,0L,0x6B51L,0xFE46L,(-2L),0L,0x281AL}};
    unsigned char **l_1197[6] = {&g_541,&g_541,&g_541,&g_541,&g_541,&g_541};
    short *l_1198 = &g_1164[0];
    int * const *l_1215 = &g_656;
    unsigned l_1326 = 0xCC64C3DDL;
    short l_1335 = 0x9CB2L;
    int ***l_1338 = (void*)0;
    short l_1339[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1339[i] = 0x9834L;
    for (g_64 = 0; (g_64 <= 3); g_64 += 1)
    {
        unsigned l_1058 = 0xBBA67C93L;
        int l_1062 = (-1L);
        short l_1088 = 0x81EAL;
        int l_1125 = 0xBA0EFA84L;
        int l_1126 = (-2L);
        int l_1150[8] = {(-1L),0x2CC937B9L,(-1L),0x2CC937B9L,(-1L),0x2CC937B9L,(-1L),0x2CC937B9L};
        int i;
        l_1058 = (*p_35);
        if ((**g_212))
        {
            unsigned *l_1066 = &g_267[5];
            unsigned ** const l_1065 = &l_1066;
            int l_1069 = 0x3B5CEE22L;
            const int **l_1077[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int **l_1078[7][8][4] = {{{&g_213,&g_1055,&g_1055,&g_213},{&g_1055,&g_213,&g_1055,&g_1055},{&g_213,&g_213,(void*)0,&g_213},{&g_213,&g_1055,&g_1055,&g_213},{&g_1055,&g_213,&g_1055,&g_1055},{&g_213,&g_213,(void*)0,&g_213},{&g_213,&g_1055,&g_1055,&g_213},{&g_1055,&g_213,&g_1055,&g_1055}},{{&g_213,&g_213,(void*)0,&g_213},{&g_213,&g_1055,&g_1055,&g_213},{&g_1055,&g_213,&g_1055,&g_1055},{&g_213,&g_213,(void*)0,&g_213},{&g_213,&g_1055,&g_1055,&g_213},{&g_1055,&g_213,&g_1055,&g_1055},{&g_213,&g_213,(void*)0,&g_213},{&g_213,&g_1055,&g_1055,&g_213}},{{&g_1055,&g_213,&g_1055,&g_1055},{&g_1055,&g_1055,&g_213,&g_1055},{&g_1055,&g_213,(void*)0,&g_1055},{(void*)0,&g_1055,(void*)0,&g_213},{&g_1055,&g_1055,&g_213,&g_1055},{&g_1055,&g_213,(void*)0,&g_1055},{(void*)0,&g_1055,(void*)0,&g_213},{&g_1055,&g_1055,&g_213,&g_1055}},{{&g_1055,&g_213,(void*)0,&g_1055},{(void*)0,&g_1055,(void*)0,&g_213},{&g_1055,&g_1055,&g_213,&g_1055},{&g_1055,&g_213,(void*)0,&g_1055},{(void*)0,&g_1055,(void*)0,&g_213},{&g_1055,&g_1055,&g_213,&g_1055},{&g_1055,&g_213,(void*)0,&g_1055},{(void*)0,&g_1055,(void*)0,&g_213}},{{&g_1055,&g_1055,&g_213,&g_1055},{&g_1055,&g_213,(void*)0,&g_1055},{(void*)0,&g_1055,(void*)0,&g_213},{&g_1055,&g_1055,&g_213,&g_1055},{&g_1055,&g_213,(void*)0,&g_1055},{(void*)0,&g_1055,(void*)0,&g_213},{&g_1055,&g_1055,&g_213,&g_1055},{&g_1055,&g_213,(void*)0,&g_1055}},{{(void*)0,&g_1055,(void*)0,&g_213},{&g_1055,&g_1055,&g_213,&g_1055},{&g_1055,&g_213,(void*)0,&g_1055},{(void*)0,&g_1055,(void*)0,&g_213},{&g_1055,&g_1055,&g_213,&g_1055},{&g_1055,&g_213,(void*)0,&g_1055},{(void*)0,&g_1055,(void*)0,&g_213},{&g_1055,&g_1055,&g_213,&g_1055}},{{&g_1055,&g_213,(void*)0,&g_1055},{(void*)0,&g_1055,(void*)0,&g_213},{&g_1055,&g_1055,&g_213,&g_1055},{&g_1055,&g_213,(void*)0,&g_1055},{(void*)0,&g_1055,(void*)0,&g_213},{&g_1055,&g_1055,&g_213,&g_1055},{&g_1055,&g_213,(void*)0,&g_1055},{(void*)0,&g_1055,(void*)0,&g_213}}};
            short *l_1094 = (void*)0;
            int l_1103 = 9L;
            int i, j, k;
            if (((l_1062 &= (safe_div_func_int8_t_s_s(l_1061, 1L))) ^ 2L))
            {
                int ***l_1071 = &l_1070;
                int l_1074 = (-1L);
                const int **l_1076 = (void*)0;
                short l_1083 = 0xBF9AL;
                unsigned short l_1084 = 0x4383L;
                if ((safe_sub_func_uint32_t_u_u((g_267[5] | ((((((l_1065 == (void*)0) || (safe_lshift_func_int8_t_s_u(l_1069, 7))) , ((((*l_1071) = l_1070) == (((((safe_mul_func_int8_t_s_s(3L, p_36)) && p_34) < l_1061) == 1L) , (void*)0)) , 4294967295UL)) == 0xC5CE7406L) ^ (*g_541)) , 5UL)), l_1061)))
                {
                    char l_1075 = 1L;
                    (*g_212) = &l_1062;

                    ;
                    if (l_1074)
                        break;

                    l_1069 = l_1075;
                    p_35 = ((*g_212) = p_35);

                    ;
                }
                else
                {
                    const char l_1079 = 7L;
                    char *l_1085 = &g_621;
                    char *l_1086 = &g_89[4];
                    char *l_1087 = &g_985;
                    l_1062 = (*p_35);
                    l_1062 = l_1079;
                    l_1061 = (*p_35);
                    l_1061 &= (((&l_1078[1][6][1] == (void*)0) , (g_105 , ((*l_1087) = (safe_mul_func_int8_t_s_s(((*l_1086) ^= ((*l_1085) = (safe_unary_minus_func_int16_t_s(((+p_34) && ((p_36 < p_34) , ((p_34 , (l_1079 , func_38(l_1083, l_1058, l_1084, p_34))) == &p_36))))))), g_267[5]))))) != l_1088);
                }
                for (p_34 = 0; (p_34 <= 0); p_34 += 1)
                {
                    short **l_1093 = &g_162;
                    l_1074 ^= (safe_mul_func_int16_t_s_s((p_34 > ((((*g_764) || p_34) >= (*p_33)) >= p_36)), (safe_add_func_uint32_t_u_u(g_9[2], (((*l_1093) = &l_1088) != l_1094)))));

                    ;
                    for (p_36 = 0; (p_36 <= 3); p_36 += 1)
                    {
                        int i, j, k;
                        l_1062 |= ((~g_6[p_34][(p_34 + 1)][(p_36 + 1)]) > ((**l_1065) = (g_267[5] != (safe_unary_minus_func_uint8_t_u((+(**g_540)))))));
                    }
                }

                ;
                if ((*p_35))
                    break;

                (*g_212) = p_35;

                ;
            }
            else
            {
                char l_1096 = (-1L);
                int *l_1104 = (void*)0;
                int *l_1105 = &l_1103;
                unsigned *l_1109 = &l_1058;
                unsigned **l_1108[7];
                char *l_1111 = &g_89[5];
                unsigned l_1112[10] = {4294967292UL,0UL,4294967292UL,0UL,4294967292UL,0UL,4294967292UL,0UL,4294967292UL,0UL};
                int i;
                for (i = 0; i < 7; i++)
                    l_1108[i] = &l_1109;
                l_1096 = 0L;
                l_1061 ^= (((safe_sub_func_int8_t_s_s(((((*l_1105) = ((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u((**g_540), (*g_541))), ((*l_1066) &= l_1096))) | l_1103)) , p_34) != (p_34 , (safe_mod_func_uint32_t_u_u((((g_1110 = &g_627) != p_33) >= ((*l_1111) = (l_1088 && p_34))), l_1112[9])))), (*g_541))) , (void*)0) != g_1113);
            }

            ;
            l_1062 = l_1088;
        }
        else
        {
            int *l_1114[10];
            unsigned l_1146 = 4294967292UL;
            unsigned l_1166 = 4294967295UL;
            short l_1173[1];
            const unsigned l_1191 = 0x4A50746BL;
            int i;
            for (i = 0; i < 10; i++)
                l_1114[i] = &l_1061;
            for (i = 0; i < 1; i++)
                l_1173[i] = 0x9ACAL;
            l_1061 &= 0x1D60F1A9L;
            for (l_1088 = 0; (l_1088 <= 3); l_1088 += 1)
            {
                char l_1120 = (-1L);
                int l_1149 = (-1L);
                int l_1151 = 0x21D2A44CL;
                int l_1156 = 0xE9E3FB6CL;
                int l_1157 = (-6L);
                char l_1163 = (-1L);
                int l_1165 = (-9L);
                if ((p_34 <= ((void*)0 == l_1115)))
                {
                    if ((*g_51))
                        break;
                }
                else
                {
                    unsigned l_1121 = 0x69239579L;
                    const int *l_1123 = &g_9[2];
                    int l_1124[3][5] = {{(-6L),0x360D1D7CL,(-6L),0x360D1D7CL,(-6L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-6L),0x360D1D7CL,(-6L),0x360D1D7CL,(-6L)}};
                    int l_1132 = 0L;
                    int i, j;
                    for (g_85 = 0; (g_85 <= 3); g_85 += 1)
                    {
                        int l_1122[1][3][5] = {{{0xC214A11EL,0xC214A11EL,0xC214A11EL,0xC214A11EL,0xC214A11EL},{0x66E144CCL,0x66E144CCL,0x66E144CCL,0x66E144CCL,0x66E144CCL},{0xC214A11EL,0xC214A11EL,0xC214A11EL,0xC214A11EL,0xC214A11EL}}};
                        int i, j, k;
                        l_1121 = ((g_248 = (safe_lshift_func_uint16_t_u_u((g_267[(g_64 + 1)] <= (**g_763)), (g_267[(g_64 + 1)] >= (*g_1110))))) > ((((+(*g_162)) >= g_513[5][1][1]) & (safe_div_func_int16_t_s_s(((+0x6D3FL) || ((void*)0 == &g_162)), 0x2BC3L))) < l_1120));
                        l_1122[0][1][2] = (*p_33);
                        (*g_215) = l_1123;

                        ;
                        if (l_1058)
                            break;
                    }
                    if ((l_1062 ^= (((0x9489F732L & 0x1CC385CFL) , (p_36 , (void*)0)) != p_32)))
                    {
                        unsigned l_1127 = 4294967295UL;
                        l_1127--;
                    }
                    else
                    {
                        unsigned char l_1141 = 0xF7L;
                        int l_1147 = 0x0600E63DL;
                        int l_1154 = 0L;
                        int l_1158[6][10] = {{(-1L),0x4342C5DEL,0x549B964FL,1L,0x549B964FL,0x4342C5DEL,(-1L),0x4342C5DEL,0x549B964FL,1L},{(-1L),1L,(-1L),0x4342C5DEL,6L,0x4342C5DEL,(-1L),1L,(-1L),0x4342C5DEL},{(-1L),1L,0xBA518BA3L,1L,(-1L),0xE25028ACL,(-1L),1L,0xBA518BA3L,1L},{6L,0x4342C5DEL,(-1L),1L,(-1L),0x4342C5DEL,6L,0x4342C5DEL,(-1L),1L},{0x549B964FL,1L,0x549B964FL,0x4342C5DEL,(-1L),0x4342C5DEL,0x549B964FL,1L,0x549B964FL,0x4342C5DEL},{6L,1L,5L,1L,6L,0xE25028ACL,6L,1L,5L,1L}};
                        int i, j;
                        l_1146 = (((safe_div_func_int16_t_s_s(l_1132, (~(safe_mul_func_uint16_t_u_u(((*l_1115) = ((&l_1132 == ((safe_mod_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(((*p_33) < l_1141), ((void*)0 != g_1113))) , 248UL) , (*l_1123)), (safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((-8L), 1)) | 0xAF151B2FL), 4294967291UL)))) >= p_34) | 0xE251L), (-7L))) , (void*)0)) | (*l_1123))), 0xF20BL))))) , (*g_106)) < g_627);
                        l_1160--;
                    }
                }
                l_1166++;
            }
            l_1061 ^= (l_1126 = (l_1062 ^= ((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(l_1173[0], (safe_sub_func_uint32_t_u_u(p_36, (safe_mod_func_uint8_t_u_u((*g_541), (safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((*p_35) != ((l_1150[2] = (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((p_36 >= (*p_35)) , l_1188[8][1]), (safe_add_func_int8_t_s_s(l_1191, (p_34 > g_1192))))), p_34)) , p_34), (*g_162)))) > g_89[3])), g_117)), (*g_1110))))))))), g_1037)) <= g_2[2])));
        }

        ;
        return p_32;



    }



    for (l_1148 = 0; (l_1148 <= (-2)); --l_1148)
    {
        short *l_1199 = &l_1188[8][1];
        short *l_1200 = &g_117;
        int l_1201 = (-2L);
        int l_1210 = 0x5198A9CCL;
        int l_1277[3];
        unsigned l_1288[5];
        int ***l_1306 = &g_752[3];
        char l_1321[1];
        int **l_1322 = (void*)0;
        int i;
        for (i = 0; i < 3; i++)
            l_1277[i] = (-10L);
        for (i = 0; i < 5; i++)
            l_1288[i] = 0x88104DD8L;
        for (i = 0; i < 1; i++)
            l_1321[i] = (-1L);
        for (g_117 = 7; (g_117 >= 0); g_117 -= 1)
        {
            int i;
            l_1153[1][0][0] = (safe_mul_func_int8_t_s_s((l_1197[0] != (void*)0), ((l_1201 = ((l_1199 = l_1198) == l_1200)) < ((g_89[g_117] , (g_89[g_117] , g_89[g_117])) >= (safe_mul_func_int16_t_s_s(g_89[g_117], ((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((l_1210 , g_627), l_1210)), 1L)), 0xB39D27DEL)) != 248UL)))))));

            ;
        }

        ;
        for (g_1155 = 3; (g_1155 >= 0); g_1155 -= 1)
        {
            unsigned l_1216 = 4294967287UL;
            int l_1231 = 0xBD228E8AL;
            int l_1256 = 0x09EDBB27L;
            int l_1284 = (-5L);
            int l_1285 = 5L;
            int l_1286 = 0L;
            int l_1287 = 0x7FE35FCEL;
            unsigned char l_1309 = 0x59L;
            unsigned **l_1320 = &g_1110;
            unsigned ***l_1319 = &l_1320;
            int **l_1323 = &g_656;
            unsigned char *l_1329 = &g_1037;
            int *l_1334 = &l_1284;
        }
    }
    l_1148 = 0xE7DE8209L;
    for (g_621 = 0; (g_621 < 6); ++g_621)
    {
        l_1339[1] &= ((l_1338 = &l_1070) == (p_34 , (((*l_1115) = 1UL) , &l_1070)));

        ;
    }

    ;
    return p_32;


}







static int * func_38(int p_39, unsigned char p_40, unsigned p_41, unsigned p_42)
{
    short **l_622[5];
    int *l_623 = (void*)0;
    int *l_624 = &g_513[5][0][6];
    int *l_625 = (void*)0;
    int *l_626 = &g_513[5][0][6];
    unsigned l_640 = 0xF0C11FD7L;
    int **l_669 = &l_626;
    int *l_673 = &g_513[5][1][6];
    int l_690 = (-5L);
    int l_698 = (-1L);
    int l_700 = 0L;
    int l_703 = 0x6A5C1295L;
    short l_704[1][1][5];
    int l_738 = 0x3B0A5A57L;
    const int **l_753 = &g_216;
    int *l_769 = &g_513[4][1][1];
    int *l_837[4][6][5] = {{{&g_9[4],(void*)0,(void*)0,&g_9[4],&l_690},{&g_9[4],&g_513[5][0][6],(void*)0,&g_9[4],&l_703},{(void*)0,&g_513[5][0][6],(void*)0,(void*)0,&l_703},{&g_9[4],(void*)0,(void*)0,&g_9[4],&l_690},{&g_9[4],&g_513[5][0][6],(void*)0,&g_9[4],&l_703},{(void*)0,&g_513[5][0][6],(void*)0,(void*)0,&l_703}},{{&l_703,&g_7,&g_7,&l_703,(void*)0},{&l_703,&l_703,&g_9[3],&l_703,&g_513[5][0][6]},{&l_690,&l_703,&g_7,&l_690,&g_513[5][0][6]},{&l_703,&g_7,&g_7,&l_703,(void*)0},{&l_703,&l_703,&g_9[3],&l_703,&g_513[5][0][6]},{&l_690,&l_703,&g_7,&l_690,&g_513[5][0][6]}},{{&l_703,&g_7,&g_7,&l_703,(void*)0},{&l_703,&l_703,&g_9[3],&l_703,&g_513[5][0][6]},{&l_690,&l_703,&g_7,&l_690,&g_513[5][0][6]},{&l_703,&g_7,&g_7,&l_703,(void*)0},{&l_703,&l_703,&g_9[3],&l_703,&g_513[5][0][6]},{&l_690,&l_703,&g_7,&l_690,&g_513[5][0][6]}},{{&l_703,&g_7,&g_7,&l_703,(void*)0},{&l_703,&l_703,&g_9[3],&l_703,&g_513[5][0][6]},{&l_690,&l_703,&g_7,&l_690,&g_513[5][0][6]},{&l_703,&g_7,&g_7,&l_703,(void*)0},{&l_703,&l_703,&g_9[3],&l_703,&g_513[5][0][6]},{&l_690,&l_703,&g_7,&l_690,&g_513[5][0][6]}}};
    int l_882 = (-7L);
    int *l_885 = &l_703;
    short l_901[1];
    unsigned char l_905 = 255UL;
    unsigned l_944[8] = {0xE3122216L,0xA64676D6L,0xA64676D6L,0xE3122216L,0xA64676D6L,0x160A59BAL,0xA64676D6L,0x160A59BAL};
    unsigned char ***l_957 = &g_540;
    short ***l_983 = &l_622[0];
    const unsigned *l_1039 = &l_640;
    const unsigned * const l_1040 = &l_640;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_622[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_704[i][j][k] = 1L;
        }
    }
    for (i = 0; i < 1; i++)
        l_901[i] = 6L;
    g_161 = l_622[0];

    ;
    (*l_624) = 0xCAA8820EL;
    g_627--;
    for (g_85 = 0; (g_85 >= (-11)); g_85 = safe_sub_func_uint8_t_u_u(g_85, 1))
    {
        unsigned short *l_641 = &g_105;
        const int l_648[1][6] = {{0xED3201AAL,0xED3201AAL,0xED3201AAL,0xED3201AAL,0xED3201AAL,0xED3201AAL}};
        int l_652 = (-1L);
        int l_694 = 0x0CD21BF8L;
        int l_696 = (-1L);
        int l_697 = 7L;
        int l_699[7][8] = {{0xEB5FF0C4L,0L,0x84C218DCL,0xEB5FF0C4L,0xBA65CF05L,0x0AA994DAL,0xBA65CF05L,0xEB5FF0C4L},{0xF31CB2CCL,0xBA65CF05L,0xF31CB2CCL,(-1L),0xAE1EDF46L,(-1L),(-1L),0L},{0xBA65CF05L,0x2DC287DFL,(-1L),(-1L),(-5L),(-8L),0xAE1EDF46L,0x2DC287DFL},{0xBA65CF05L,0L,5L,0xAE1EDF46L,0xAE1EDF46L,5L,0L,0xBA65CF05L},{0xF31CB2CCL,0xEB5FF0C4L,0x2DC287DFL,(-8L),0xBA65CF05L,(-5L),0xF31CB2CCL,0L},{0xEB5FF0C4L,(-8L),(-1L),0x0F2EC725L,(-8L),(-5L),0xAE1EDF46L,(-5L)},{(-1L),0xEB5FF0C4L,0x3AA7591CL,0xEB5FF0C4L,(-1L),5L,0x0F2EC725L,(-1L)}};
        unsigned *l_732 = (void*)0;
        unsigned **l_731 = &l_732;
        unsigned char **l_737 = &g_541;
        volatile unsigned **l_765 = &g_764;
        unsigned char l_770 = 255UL;
        int l_851 = 0L;
        unsigned * const *l_891 = &l_732;
        int l_978 = 0xA3EDAFB1L;
        short ***l_984 = &g_161;
        int *l_993 = (void*)0;
        short l_1000 = 0xCF08L;
        unsigned short l_1051[4][7][1] = {{{0UL},{0xBD6EL},{0UL},{0xBD6EL},{0UL},{0xBD6EL},{0UL}},{{0xBD6EL},{0UL},{0xBD6EL},{0UL},{0xBD6EL},{0UL},{0xBD6EL}},{{0UL},{0xBD6EL},{0UL},{0xBD6EL},{0UL},{0xBD6EL},{0UL}},{{0xBD6EL},{0UL},{0xBD6EL},{0UL},{0xBD6EL},{0UL},{0xBD6EL}}};
        int i, j, k;
    }
    return (*g_212);


}







static unsigned char func_43(int * p_44, unsigned p_45, int * p_46)
{
    unsigned short l_572 = 65532UL;
    int l_593 = 0x088AABA0L;
    int l_614 = 0x931E1546L;
    int l_615 = 0L;
    int l_616 = 1L;
    int l_617[4][2][3] = {{{(-2L),1L,(-9L)},{0x0C9A79ACL,6L,(-2L)}},{{1L,0x0C9A79ACL,(-6L)},{0xE8336A38L,0xE8336A38L,0x5938A938L}},{{1L,0x5938A938L,0x0C9A79ACL},{0x0C9A79ACL,0x5938A938L,1L}},{{0x5938A938L,0xE8336A38L,0xE8336A38L},{(-6L),0x0C9A79ACL,1L}}};
    unsigned short l_618 = 1UL;
    int i, j, k;
    for (p_45 = 0; (p_45 == 3); p_45 = safe_add_func_uint8_t_u_u(p_45, 3))
    {
        unsigned short l_591 = 0x6FB1L;
        unsigned short l_592 = 65535UL;
        char *l_605 = &g_87[0];
        int l_606[3][8] = {{0xAB15F324L,0xAB15F324L,0x368086B4L,0xAB15F324L,0xAB15F324L,0x368086B4L,0xAB15F324L,0xAB15F324L},{0x44D02DB6L,0xAB15F324L,0x44D02DB6L,0x44D02DB6L,0xAB15F324L,0x44D02DB6L,0x44D02DB6L,0xAB15F324L},{0xAB15F324L,0x44D02DB6L,0x44D02DB6L,0xAB15F324L,0x44D02DB6L,0x44D02DB6L,0xAB15F324L,0x44D02DB6L}};
        unsigned l_607 = 1UL;
        int *l_608 = &g_513[1][1][1];
        int *l_609 = &g_9[3];
        int *l_610 = &g_9[8];
        int *l_611 = &l_606[1][1];
        int *l_612 = (void*)0;
        int *l_613[10][8][3] = {{{(void*)0,&l_606[2][6],(void*)0},{&l_593,(void*)0,(void*)0},{&g_3,&g_7,&l_606[1][2]},{&g_7,&g_9[2],(void*)0},{&g_9[3],&l_606[1][2],&l_593},{&g_7,&g_7,(void*)0},{&g_513[5][0][6],&l_606[2][6],&l_606[1][2]},{(void*)0,(void*)0,(void*)0}},{{&g_9[7],(void*)0,(void*)0},{&l_606[2][6],(void*)0,&l_606[0][3]},{(void*)0,&l_606[2][6],(void*)0},{&g_7,(void*)0,(void*)0},{(void*)0,&g_513[5][0][6],&g_9[3]},{(void*)0,&g_7,&l_606[2][7]},{&g_9[3],&l_606[2][6],(void*)0},{(void*)0,&g_9[2],(void*)0}},{{(void*)0,&g_513[3][0][6],&l_593},{(void*)0,&g_7,&l_606[0][3]},{&l_606[1][2],&g_7,&g_3},{(void*)0,&l_606[0][3],&l_606[2][7]},{(void*)0,&l_606[2][6],&l_593},{&g_513[5][1][1],(void*)0,&g_3},{&g_3,&l_606[2][6],&g_9[4]},{(void*)0,(void*)0,&g_9[2]}},{{(void*)0,&l_606[2][6],&g_513[5][0][6]},{(void*)0,(void*)0,(void*)0},{&g_9[3],&l_606[2][6],&l_606[1][2]},{&l_606[2][6],&l_606[0][3],(void*)0},{&g_7,&g_7,(void*)0},{&g_7,&g_7,&g_3},{&g_9[3],&g_9[8],&g_513[5][0][6]},{&l_593,(void*)0,&l_606[0][3]}},{{(void*)0,&g_513[3][0][6],&g_9[3]},{(void*)0,&l_593,&l_606[0][3]},{&g_3,&l_606[2][6],&g_513[5][0][6]},{&g_9[3],&g_3,&g_3},{(void*)0,&l_606[1][2],(void*)0},{(void*)0,&g_513[5][1][1],(void*)0},{&l_606[1][2],&l_606[2][6],&l_606[1][2]},{&l_593,&g_3,(void*)0}},{{(void*)0,&g_513[5][0][0],&g_513[5][0][6]},{&l_606[2][6],&l_593,&g_9[2]},{(void*)0,&g_7,&g_9[4]},{&l_606[2][6],(void*)0,&g_3},{(void*)0,&l_593,&l_593},{&l_593,&g_7,&l_606[2][7]},{&l_606[1][2],&g_513[3][0][6],&g_3},{(void*)0,&l_606[0][3],&l_606[0][3]}},{{(void*)0,&g_513[3][0][6],(void*)0},{(void*)0,&g_7,&g_9[2]},{&g_9[4],&g_3,&g_513[5][0][6]},{&g_7,&l_606[0][3],&g_9[2]},{(void*)0,&g_3,&l_606[1][7]},{(void*)0,&g_7,&g_3},{(void*)0,&g_513[3][0][6],&g_9[3]},{&g_9[3],&g_3,(void*)0}},{{(void*)0,&l_606[2][6],&l_593},{&g_513[5][0][6],&g_9[3],&g_9[2]},{(void*)0,&l_606[2][6],(void*)0},{(void*)0,(void*)0,&l_606[1][3]},{(void*)0,&g_513[5][0][6],(void*)0},{&g_7,(void*)0,&l_606[1][3]},{&g_9[4],&g_513[3][0][6],(void*)0},{&l_593,(void*)0,&g_9[2]}},{{&g_3,&g_3,&l_593},{&g_7,&l_593,(void*)0},{&g_9[3],&g_3,&g_9[3]},{(void*)0,(void*)0,&g_3},{&g_9[3],&g_7,&l_606[1][7]},{&g_9[3],(void*)0,&g_9[2]},{&l_606[1][2],&l_606[2][6],&g_513[5][0][6]},{&g_9[3],(void*)0,&g_9[2]}},{{&g_9[3],&g_513[5][0][0],(void*)0},{(void*)0,&g_9[3],&g_3},{&g_9[3],&g_513[5][0][6],&g_9[4]},{&g_7,&g_3,&l_606[1][3]},{&g_3,&g_7,(void*)0},{&l_593,&g_7,(void*)0},{&g_9[4],&g_3,&g_513[5][0][6]},{&g_7,&l_606[0][3],(void*)0}}};
        int i, j, k;
        (*g_215) = ((*g_212) = func_68((safe_mod_func_uint16_t_u_u(((l_572 = 4294967295UL) , (safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(0x6118L, (safe_lshift_func_int8_t_s_s((((0x27D1L || (safe_mod_func_uint16_t_u_u((~((safe_mul_func_uint16_t_u_u((*g_106), g_119[8][1])) || ((p_45 && p_45) <= (safe_sub_func_int8_t_s_s(g_248, (**g_540)))))), p_45))) ^ l_591) < l_591), p_45)))), (*p_46))), l_591)) , (-8L)) != g_267[5]), l_592)), p_45))), l_593))));

        ;
        (*l_608) &= (safe_mul_func_uint8_t_u_u(((**g_540) ^= (safe_lshift_func_uint8_t_u_s(255UL, (l_606[2][6] = ((g_267[5] = (l_592 < (safe_unary_minus_func_uint16_t_u(l_572)))) ^ (safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((&p_45 == &p_45), ((*l_605) &= (safe_mod_func_uint32_t_u_u((0UL & 0x6094L), ((p_45 & (l_572 <= (**g_161))) || (*p_46))))))), l_592))))))), l_607));
        ++l_618;
    }

    ;
    ;
    return (*g_541);
}







static int * func_52(int ** p_53, int ** p_54, int * p_55, const int ** p_56, int ** p_57)
{
    unsigned char l_219 = 0x5CL;
    int l_223[9] = {(-7L),(-4L),(-7L),(-4L),(-4L),(-7L),(-4L),(-4L),(-7L)};
    short l_225 = 0xDEA6L;
    int l_227[10] = {0x4713C0A1L,0x4713C0A1L,0x4713C0A1L,0x4713C0A1L,0x4713C0A1L,0x4713C0A1L,0x4713C0A1L,0x4713C0A1L,0x4713C0A1L,0x4713C0A1L};
    const int *l_316 = &l_227[4];
    unsigned l_424 = 0x3BA7972FL;
    unsigned short l_453[7] = {0x69FEL,0xECECL,0xECECL,0x69FEL,0xECECL,0xECECL,0x69FEL};
    short l_518 = 0L;
    int *l_555 = &g_9[0];
    int *l_556 = &l_223[5];
    int *l_557 = &l_223[3];
    int *l_558 = &g_513[5][1][4];
    int *l_559[8][8] = {{&g_3,(void*)0,&g_513[5][0][6],&g_9[5],&g_513[5][0][6],&g_9[6],&g_9[6],&g_513[5][0][6]},{&g_3,&l_223[3],&l_223[3],&g_3,&g_9[6],&g_9[5],(void*)0,&l_223[5]},{(void*)0,&g_513[2][0][2],&g_9[5],&g_3,&l_223[3],(void*)0,&l_223[5],(void*)0},{&g_9[3],&g_513[2][0][2],(void*)0,&g_513[2][0][2],&g_9[3],&g_9[5],&g_3,(void*)0},{&g_9[5],&l_223[3],&g_9[3],&l_223[3],&g_513[7][1][0],&g_9[6],&g_513[2][0][2],&g_513[2][0][2]},{&l_223[5],(void*)0,&g_9[3],&g_9[3],(void*)0,&l_223[5],&g_3,&g_513[7][1][0]},{&g_513[7][1][0],(void*)0,(void*)0,(void*)0,&g_513[2][0][2],&l_223[3],&l_223[5],&g_9[5]},{(void*)0,(void*)0,&g_9[5],(void*)0,&g_9[5],(void*)0,(void*)0,&g_513[7][1][0]}};
    short l_560[4][5][1] = {{{0x38ABL},{0x38ABL},{1L},{0x38ABL},{0x38ABL}},{{1L},{0x38ABL},{0x38ABL},{1L},{0x38ABL}},{{0x38ABL},{1L},{0x38ABL},{0x38ABL},{1L}},{{0x38ABL},{0x38ABL},{1L},{0x38ABL},{0x38ABL}}};
    unsigned short l_561 = 5UL;
    char l_564 = (-1L);
    unsigned char l_565[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_565[i] = 255UL;
    if ((((safe_mul_func_uint16_t_u_u(l_219, ((~(-1L)) , (*g_162)))) || ((**g_161) = (2L == l_219))) & l_219))
    {
        unsigned short *l_222 = (void*)0;
        unsigned char *l_224[6][6] = {{&g_119[8][3],&g_119[3][1],&l_219,&g_119[3][1],&g_119[8][3],&l_219},{&g_119[3][1],&g_119[8][3],&l_219,&l_219,&g_119[8][3],&g_119[3][1]},{&l_219,&g_119[3][1],&l_219,&g_119[8][3],&l_219,&g_119[3][1]},{&l_219,&l_219,&l_219,&l_219,&l_219,&l_219},{&l_219,&l_219,&l_219,&g_119[8][3],&l_219,&g_119[8][3]},{&l_219,&l_219,&l_219,&l_219,&l_219,&l_219}};
        int l_226 = 4L;
        int i, j;
        (*g_213) = (0UL != ((l_223[3] = (*g_106)) >= ((g_119[7][2]--) == (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint8_t_u_s((((safe_unary_minus_func_int32_t_s(l_219)) , p_55) == ((*p_55) , ((l_225 , (l_226 > ((l_225 < l_219) , (-9L)))) , &g_2[1]))), 1)))), l_225)))));
        return (*p_57);


    }
    else
    {
        int *l_236 = &l_223[2];
        int l_237 = (-1L);
        int *l_238 = (void*)0;
        int *l_239 = &g_9[8];
        int *l_240 = &g_9[1];
        int *l_241 = &l_223[3];
        int *l_242 = &l_227[5];
        int *l_243 = (void*)0;
        int l_244 = (-6L);
        int *l_245 = &g_9[3];
        int *l_246 = &g_9[7];
        int *l_247[7] = {&l_227[1],&l_244,&l_227[1],&l_227[1],&l_244,&l_227[1],&l_227[1]};
        short **l_276 = &g_162;
        unsigned char l_304 = 0xFEL;
        int l_311[7] = {3L,3L,(-1L),3L,3L,(-1L),3L};
        int l_393[4][9][7] = {{{0L,9L,(-4L),0xB700C025L,0x5DB258E6L,0xEEDDB574L,0x62B5AB3CL},{(-2L),0x2BD43B4DL,1L,1L,0x2BD43B4DL,(-2L),0xAFD44838L},{0L,0xB700C025L,0xB153B35BL,6L,0x62B5AB3CL,0x86B8EA45L,0x9EE99867L},{0x089E603AL,0x687EE126L,(-2L),0xF5B800B5L,(-2L),0x687EE126L,0x089E603AL},{0x77EB3350L,0xB700C025L,0xED8E74ADL,(-1L),8L,7L,(-3L)},{(-2L),1L,0xE2A8EBCEL,0x687EE126L,0x687EE126L,0xE2A8EBCEL,1L},{0x77EB3350L,0xD5A2DB14L,1L,0xEEDDB574L,0L,(-1L),0xED8E74ADL},{0x9A400A4BL,0x687EE126L,0xCA7951CFL,0x9A400A4BL,1L,0x9A400A4BL,0xCA7951CFL},{8L,9L,0xC9099C72L,0xEEDDB574L,0x77EB3350L,6L,8L}},{{0xAFD44838L,0xCA7951CFL,0x717F7580L,0x687EE126L,0xCDF5559FL,0xCDF5559FL,0x687EE126L},{0xB153B35BL,0x732E1476L,0xB153B35BL,(-1L),0x77EB3350L,0x76FDEB23L,0L},{0x687EE126L,1L,0L,0L,1L,0x089E603AL,1L},{0x5DB258E6L,(-1L),(-3L),0x0ECE3712L,0L,0x76FDEB23L,0x77EB3350L},{0xCDF5559FL,0xAFD44838L,0xCA7951CFL,0x717F7580L,0x687EE126L,0xCDF5559FL,0xCDF5559FL},{8L,0xD5C43913L,0L,0xD5C43913L,8L,6L,0x77EB3350L},{(-2L),(-1L),0x9A400A4BL,0x687EE126L,0xCA7951CFL,0x9A400A4BL,1L},{(-3L),0x732E1476L,1L,0x86B8EA45L,0xED8E74ADL,(-1L),0L},{(-2L),0x687EE126L,0x089E603AL,(-2L),1L,0xE2A8EBCEL,0x687EE126L}},{{8L,0x76FDEB23L,1L,9L,1L,0x76FDEB23L,0x5DB258E6L},{0x9A400A4BL,0L,0xCDF5559FL,0x717F7580L,(-2L),0x9A400A4BL,0x717F7580L},{0xED8E74ADL,0xD5C43913L,(-1L),0xEEDDB574L,(-4L),0x7C2F76F4L,0x77EB3350L},{0L,0xCA7951CFL,0xCDF5559FL,0xAFD44838L,0xCA7951CFL,0x717F7580L,0x687EE126L},{0L,0xEEDDB574L,1L,0xD5A2DB14L,0x77EB3350L,0xD5A2DB14L,1L},{(-2L),(-2L),0L,0xAFD44838L,0L,0xE2A8EBCEL,(-2L)},{0x5DB258E6L,0x86B8EA45L,2L,0xEEDDB574L,0xB153B35BL,0x76FDEB23L,(-4L)},{(-1L),0x687EE126L,(-1L),0x717F7580L,0L,(-1L),0xCA7951CFL},{(-4L),0xD5C43913L,0x62B5AB3CL,9L,0x77EB3350L,6L,0x77EB3350L}},{{1L,0x717F7580L,0x717F7580L,1L,0xCA7951CFL,(-1L),0L},{0xB153B35BL,0x0ECE3712L,1L,7L,(-4L),0x76FDEB23L,0xB153B35BL},{(-2L),0L,0x2BD43B4DL,0L,(-2L),0xE2A8EBCEL,0L},{0xED8E74ADL,(-1L),0L,0xEEDDB574L,1L,0xD5A2DB14L,0x77EB3350L},{0x717F7580L,0x687EE126L,0xCDF5559FL,0xCDF5559FL,0x687EE126L,0xE2A8EBCEL,0x2BD43B4DL},{1L,0x76FDEB23L,0x5DB258E6L,0x86B8EA45L,2L,0xEEDDB574L,0xB153B35BL},{0xCA7951CFL,0x089E603AL,0xE2A8EBCEL,(-1L),0xE2A8EBCEL,0x089E603AL,0xCA7951CFL},{0xC9099C72L,0x76FDEB23L,(-1L),0xB700C025L,(-3L),7L,0x9EE99867L},{0x717F7580L,0xCDF5559FL,0L,0x9A400A4BL,0x9A400A4BL,0L,0xCDF5559FL}}};
        int * const l_493[9][9][3] = {{{&l_223[6],&g_3,(void*)0},{(void*)0,(void*)0,&l_244},{&l_223[3],&g_9[6],&l_223[7]},{&l_223[3],&l_223[3],&l_223[6]},{(void*)0,&l_227[5],&l_227[0]},{&l_223[6],&g_9[0],&g_9[7]},{&l_237,&g_3,&l_244},{&l_244,&l_223[6],&g_9[7]},{&l_227[8],&l_223[3],&l_227[0]}},{{&l_237,&l_227[8],&l_223[6]},{&l_223[6],&l_227[8],&l_223[7]},{&l_244,&l_227[8],&l_244},{&l_237,&l_227[8],(void*)0},{(void*)0,&l_223[3],&l_227[8]},{&l_244,&l_223[6],&l_227[5]},{&l_223[6],&g_3,&g_9[3]},{&l_244,&g_9[0],&l_244},{(void*)0,&l_227[5],&l_227[9]}},{{&l_237,&l_223[3],&g_9[6]},{&l_244,&g_9[6],&g_9[6]},{&l_223[6],(void*)0,&l_227[9]},{&l_237,&g_3,&l_244},{&l_244,&g_9[3],&l_227[8]},{&l_244,(void*)0,&l_223[7]},{&g_3,&g_9[3],&g_9[7]},{(void*)0,&l_223[6],(void*)0},{&g_3,&l_227[5],&g_9[0]}},{{(void*)0,&l_227[9],&l_237},{(void*)0,(void*)0,(void*)0},{&g_3,&l_223[7],&g_9[3]},{(void*)0,&l_227[0],&l_223[3]},{&g_3,&g_9[6],&g_9[0]},{&l_244,(void*)0,&l_223[3]},{&l_244,(void*)0,&g_9[3]},{&l_227[8],&g_9[7],(void*)0},{(void*)0,&l_227[8],&l_237}},{{&g_9[0],&l_227[8],&g_9[0]},{&l_237,&g_9[7],(void*)0},{&l_237,(void*)0,&g_9[7]},{(void*)0,(void*)0,&l_223[7]},{(void*)0,&g_9[6],&l_227[8]},{(void*)0,&l_227[0],&g_9[0]},{&l_237,&l_223[7],&l_244},{&l_237,(void*)0,&l_227[9]},{&g_9[0],&l_227[9],&l_227[9]}},{{(void*)0,&l_227[5],&l_244},{&l_227[8],&l_223[6],&g_9[0]},{&l_244,&g_9[3],&l_227[8]},{&l_244,(void*)0,&l_223[7]},{&g_3,&g_9[3],&g_9[7]},{(void*)0,&l_223[6],(void*)0},{&g_3,&l_227[5],&g_9[0]},{(void*)0,&l_227[9],&l_237},{(void*)0,(void*)0,&l_237}},{{(void*)0,&l_237,&l_244},{&l_237,&l_227[8],&g_3},{&l_227[9],&l_244,&g_9[3]},{&l_227[0],&l_237,&g_3},{&l_227[5],&l_223[6],&l_244},{&g_9[7],(void*)0,&l_237},{&l_237,&l_223[3],&l_227[8]},{&g_9[3],&l_223[3],&g_9[3]},{&l_227[8],(void*)0,&g_3}},{{&g_9[6],&l_223[6],(void*)0},{&l_223[7],&l_237,&l_237},{&l_237,&l_244,(void*)0},{&l_223[7],&l_227[8],&g_9[3]},{&g_9[6],&l_237,&g_9[0]},{&l_227[8],&l_223[6],&l_244},{&g_9[3],&l_244,&l_244},{&l_237,&l_237,&g_9[0]},{&g_9[7],(void*)0,&g_9[3]}},{{&l_227[5],&l_244,(void*)0},{&l_227[0],&l_223[6],&l_237},{&l_227[9],&l_244,(void*)0},{&l_237,(void*)0,&g_3},{(void*)0,&l_237,&g_9[3]},{&l_223[6],&l_244,&l_227[8]},{&l_223[6],&l_223[6],&l_237},{(void*)0,&l_237,&l_244},{&l_237,&l_227[8],&g_3}}};
        unsigned char **l_543 = &g_541;
        int i, j, k;
        --g_248;
        (*l_239) = (safe_add_func_uint8_t_u_u((&l_227[4] == (void*)0), (*l_246)));
        for (l_237 = 0; (l_237 < 4); l_237 = safe_add_func_uint32_t_u_u(l_237, 2))
        {
            unsigned l_257 = 0x0CF1DC49L;
            char *l_260 = &g_89[3];
            int l_263 = 1L;
            int l_278 = (-1L);
            short * const *l_305[6] = {&g_162,&g_162,&g_162,&g_162,&g_162,&g_162};
            int l_308 = 0xE5FB2DB2L;
            int l_320 = 0x68999CC0L;
            int l_321[9][9] = {{0x311C0FABL,0x9ECC58A9L,0xE7C9B5BFL,0x87234B00L,0xE7C9B5BFL,0x9ECC58A9L,0x311C0FABL,0x9ECC58A9L,(-1L)},{1L,(-1L),0x42DECB10L,(-1L),1L,(-1L),(-1L),1L,(-1L)},{0x9ECC58A9L,0xD2081049L,0x9ECC58A9L,0x87234B00L,1L,1L,0x87234B00L,0x9ECC58A9L,0xD2081049L},{4L,5L,(-1L),0x42DECB10L,0x42DECB10L,(-1L),5L,4L,5L},{(-1L),0x311C0FABL,0x87234B00L,0x87234B00L,0x311C0FABL,(-1L),1L,(-1L),0x311C0FABL},{(-1L),5L,5L,(-1L),4L,1L,4L,(-1L),5L},{0xD2081049L,0xD2081049L,1L,0x311C0FABL,0xE7C9B5BFL,0x311C0FABL,1L,0xD2081049L,0xD2081049L},{5L,(-1L),4L,1L,4L,(-1L),5L,5L,(-1L)},{0x311C0FABL,(-1L),1L,(-1L),0x311C0FABL,0x87234B00L,0x87234B00L,0x311C0FABL,(-1L)}};
            unsigned char l_322 = 0xF5L;
            unsigned char l_342[9] = {255UL,0x1EL,0x1EL,255UL,0x1EL,0x1EL,255UL,0x1EL,0x1EL};
            int i, j;
        }
    }
    ++l_561;
    ++l_565[2];
    return (*p_53);


}







static int ** func_58(const int p_59, short p_60, int * const * p_61, unsigned char p_62)
{
    unsigned l_67 = 0x69C043CAL;
    int *l_209 = &g_9[1];
    int *l_211[3][5];
    int **l_210 = &l_211[0][1];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_211[i][j] = &g_7;
    }
    (*l_210) = (l_209 = ((safe_add_func_int16_t_s_s(l_67, l_67)) , func_68(g_5[1])));

    ;

    g_6[0][1][3] ^= p_60;
    return g_212;


}







static int * func_68(unsigned char p_69)
{
    int l_73 = (-7L);
    int l_90 = (-7L);
    int l_126 = 0x77D1C130L;
    int l_142[9];
    int l_143 = 0xDA8AEFE3L;
    int l_150 = 0x0FE42911L;
    short **l_176 = &g_162;
    int *l_193 = (void*)0;
    int *l_194 = &l_142[5];
    int *l_195 = &g_9[3];
    int *l_196 = &l_90;
    int *l_197 = (void*)0;
    int *l_198 = (void*)0;
    int *l_199[6] = {&l_126,&l_73,&l_73,&l_126,&l_73,&l_73};
    char l_200 = 0xBBL;
    int l_201 = 0xF42A5326L;
    char l_202 = 0x6FL;
    short l_203[4] = {0x459BL,0x459BL,0x459BL,0x459BL};
    unsigned short l_204 = 5UL;
    int **l_207[7][6] = {{&l_196,&l_196,&l_196,&l_196,&l_196,&l_196},{&l_196,&l_196,&l_196,&l_196,&l_196,&l_196},{&l_196,&l_196,&l_196,&l_196,&l_196,&l_196},{&l_196,&l_196,&l_196,&l_196,&l_196,&l_196},{&l_196,&l_196,&l_196,&l_196,&l_196,&l_196},{&l_196,&l_196,&l_196,&l_196,&l_196,&l_196},{&l_196,&l_196,&l_196,&l_196,&l_196,&l_196}};
    const int *l_208[4] = {&l_73,&l_73,&l_73,&l_73};
    int i, j;
    for (i = 0; i < 9; i++)
        l_142[i] = 1L;
    for (g_64 = 25; (g_64 > 13); g_64 = safe_sub_func_int8_t_s_s(g_64, 1))
    {
        int *l_72[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned l_74 = 4294967295UL;
        unsigned short l_151 = 0xECE5L;
        int i;
        ++l_74;
        if (l_73)
            continue;
        for (l_73 = (-9); (l_73 == (-26)); l_73 = safe_sub_func_int16_t_s_s(l_73, 7))
        {
            int *l_81 = &g_3;
            char *l_84 = &g_85;
            char *l_86 = &g_87[0];
            char *l_88 = &g_89[3];
            int l_94 = 0x1F9A5DE3L;
            int l_146 = (-8L);
            int l_149[5][6] = {{0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL},{0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL},{0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL},{0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL},{0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL,0xC70F10FCL}};
            short **l_163 = &g_162;
            unsigned char *l_174 = &g_119[7][2];
            unsigned *l_175 = &l_74;
            short ***l_177 = &l_163;
            short ***l_178 = &g_161;
            int i, j;
            if ((g_64 & (safe_sub_func_int32_t_s_s(((g_64 , (void*)0) != l_81), (safe_mul_func_int8_t_s_s(((*l_88) = ((*l_86) = ((*l_84) = 0L))), (l_73 && (g_2[2] || g_9[3]))))))))
            {
                short l_93 = 0x09B5L;
                short l_130 = 2L;
                l_90 &= 0xC07B3628L;
                for (g_85 = 3; (g_85 < (-20)); g_85--)
                {
                    unsigned char l_95 = 1UL;
                    ++l_95;
                    for (l_93 = 0; (l_93 <= 0); l_93 += 1)
                    {
                        unsigned short l_98 = 0x45F7L;
                        int **l_124 = &l_72[6];
                        int **l_125 = &l_81;
                        int i, j, k;
                        l_98++;
                        if (g_6[l_93][(l_93 + 1)][(l_93 + 4)])
                            continue;
                        (*l_125) = ((*l_124) = func_101(l_95, (l_73 , &g_3)));

                        ;
                    }
                }

                ;
                for (g_105 = 0; (g_105 <= 3); g_105 += 1)
                {
                    unsigned short l_127 = 0xA1B4L;
                    l_127++;
                }
                for (l_93 = 0; (l_93 <= 3); l_93 += 1)
                {
                    int i;
                    if (g_5[l_93])
                        break;
                    if (g_5[l_93])
                        break;
                    l_130 &= (*g_51);
                }
            }
            else
            {
                short l_138[8][4][6] = {{{0x7E68L,0L,0x7E68L,(-1L),(-1L),0x7E68L},{0x5A93L,0x5A93L,(-1L),0x3847L,(-1L),0x5A93L},{(-1L),0L,0x5A93L,0x5A93L,(-1L),0x3847L},{0x7E68L,0x3847L,0x5A93L,0x3847L,0x7E68L,0x7E68L}},{{0L,0x3847L,0x3847L,0L,(-1L),0L},{0L,(-1L),0L,0x3847L,0x3847L,0L},{0x7E68L,0x7E68L,0x3847L,0x5A93L,0x3847L,0x7E68L},{0x3847L,(-1L),0x5A93L,0x5A93L,(-1L),0x3847L}},{{0x7E68L,0x3847L,0x5A93L,0x3847L,0x7E68L,0x7E68L},{0L,0x3847L,0x3847L,0L,(-1L),0L},{0L,(-1L),0L,0x3847L,0x3847L,0L},{0x7E68L,0x7E68L,0x3847L,0x5A93L,0x3847L,0x7E68L}},{{0x3847L,(-1L),0x5A93L,0x5A93L,(-1L),0x3847L},{0x7E68L,0x3847L,0x5A93L,0x3847L,0x7E68L,0x7E68L},{0L,0x3847L,0x3847L,0L,(-1L),0L},{0L,(-1L),0L,0x3847L,0x3847L,0L}},{{0x7E68L,0x7E68L,0x3847L,0x5A93L,0x3847L,0x7E68L},{0x3847L,(-1L),0x5A93L,0x5A93L,(-1L),0x3847L},{0x7E68L,0x7E68L,0L,0x7E68L,(-1L),(-1L)},{0x3847L,0x7E68L,0x7E68L,0x3847L,0x5A93L,0x3847L}},{{0x3847L,0x5A93L,0x3847L,0x7E68L,0x7E68L,0x3847L},{(-1L),(-1L),0x7E68L,0L,0x7E68L,(-1L)},{0x7E68L,0x5A93L,0L,0L,0x5A93L,0x7E68L},{(-1L),0x7E68L,0L,0x7E68L,(-1L),(-1L)}},{{0x3847L,0x7E68L,0x7E68L,0x3847L,0x5A93L,0x3847L},{0x3847L,0x5A93L,0x3847L,0x7E68L,0x7E68L,0x3847L},{(-1L),(-1L),0x7E68L,0L,0x7E68L,(-1L)},{0x7E68L,0x5A93L,0L,0L,0x5A93L,0x7E68L}},{{(-1L),0x7E68L,0L,0x7E68L,(-1L),(-1L)},{0x3847L,0x7E68L,0x7E68L,0x3847L,0x5A93L,0x3847L},{0x3847L,0x5A93L,0x3847L,0x7E68L,0x7E68L,0x3847L},{(-1L),(-1L),0x7E68L,0L,0x7E68L,(-1L)}}};
                int l_148[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_148[i] = (-1L);
                for (l_74 = 0; (l_74 < 18); l_74 = safe_add_func_int8_t_s_s(l_74, 3))
                {
                    unsigned short l_139 = 0xA0B9L;
                    int l_141[10][3] = {{0xDA3DCFAEL,0xDA3DCFAEL,0x6509D46BL},{1L,0xFF934788L,0x4A85D1E3L},{0x76DB0F71L,0xDA3DCFAEL,0x76DB0F71L},{0x76DB0F71L,1L,0xDA3DCFAEL},{1L,1L,1L},{0x6509D46BL,1L,0xFF934788L},{0x76DB0F71L,0x5D293FB7L,0x4A85D1E3L},{0x6509D46BL,0x6509D46BL,0x4A85D1E3L},{0x5D293FB7L,0x76DB0F71L,0xFF934788L},{1L,0x6509D46BL,1L}};
                    int i, j;
                    for (l_90 = 25; (l_90 < 12); l_90 = safe_sub_func_int16_t_s_s(l_90, 2))
                    {
                        unsigned char *l_137[6];
                        int l_140 = (-1L);
                        int l_144 = 1L;
                        int l_145[9] = {0xF15C8862L,0xF15C8862L,0xF15C8862L,0xF15C8862L,0xF15C8862L,0xF15C8862L,0xF15C8862L,0xF15C8862L,0xF15C8862L};
                        int l_147 = 0xE674C9DCL;
                        int **l_154 = &l_81;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_137[i] = &g_119[7][2];
                        g_6[0][1][3] = (safe_mod_func_int8_t_s_s(0x60L, (+(l_139 = (p_69 |= (l_138[5][3][1] = g_87[0]))))));
                        l_151--;
                        (*l_154) = &l_147;

                        ;
                    }


                    return &g_7;


                }
            }

            ;
            (*l_178) = ((*l_177) = (((*l_175) = (l_126 , ((~((*l_86) = (safe_div_func_int16_t_s_s(l_142[5], ((safe_mul_func_int8_t_s_s(p_69, ((safe_mod_func_int8_t_s_s(p_69, ((g_161 == l_163) , (safe_add_func_uint8_t_u_u(((*l_174) |= (safe_lshift_func_uint16_t_u_s(p_69, ((safe_lshift_func_int8_t_s_u(p_69, (((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((*l_81), p_69)), (-1L))) < 0x60L) < 0x82F4L))) >= p_69)))), 6L))))) > (-4L)))) , p_69))))) > (*l_81)))) , l_176));

            ;
            for (l_74 = 0; (l_74 == 52); ++l_74)
            {
                short l_181 = 0x0B4CL;
                int *l_186 = &l_90;
                int l_187 = 3L;
                int l_188 = 0xF413F869L;
                int l_189[5] = {0L,0L,0L,0L,0L};
                int i;
                l_181 |= 0x8CE74501L;
                for (g_105 = 0; (g_105 <= 4); g_105 += 1)
                {
                    int i;
                    if (((void*)0 == &l_72[(g_105 + 2)]))
                    {
                        int i, j;
                        l_142[5] = (l_149[g_105][(g_105 + 1)] = ((p_69 , (p_69 != g_182[7][1][1])) < ((safe_rshift_func_int8_t_s_u(((*l_86) |= p_69), p_69)) >= g_9[3])));
                        if (p_69)
                            break;
                    }
                    else
                    {
                        int *l_185 = &l_149[3][1];
                        int i;
                        l_72[(g_105 + 3)] = l_185;
                        if ((*l_185))
                            continue;
                        l_72[(g_105 + 3)] = l_186;


                        return &g_3;


                    }
                }
                g_190++;
            }


        }


        l_142[5] &= 0L;
    }
    l_204--;
    l_208[0] = (void*)0;


    return &g_9[3];


}







static int * func_101(short p_102, int * p_103)
{
    unsigned short *l_104 = &g_105;
    char *l_114[6] = {&g_87[0],&g_89[0],&g_89[0],&g_87[0],&g_89[0],&g_89[0]};
    int l_115 = 0L;
    short *l_116 = &g_117;
    int *l_118[9][10][2] = {{{&g_9[3],&g_9[1]},{(void*)0,(void*)0},{(void*)0,&l_115},{&g_3,&g_7},{&g_7,&g_9[3]},{&g_3,&g_9[3]},{&g_7,&g_7},{&g_3,&l_115},{(void*)0,(void*)0},{(void*)0,&g_9[1]}},{{&g_9[3],(void*)0},{&g_9[0],(void*)0},{&g_9[0],(void*)0},{&g_9[3],&g_9[1]},{(void*)0,(void*)0},{(void*)0,&l_115},{&g_3,&g_7},{&g_7,&g_9[3]},{&g_3,&g_9[3]},{&g_7,&g_7}},{{&g_3,&l_115},{(void*)0,(void*)0},{(void*)0,&g_9[1]},{&g_9[3],(void*)0},{&g_9[0],(void*)0},{&g_9[0],(void*)0},{&g_9[3],&g_9[1]},{(void*)0,(void*)0},{(void*)0,&l_115},{(void*)0,&g_9[3]}},{{&g_9[3],&g_9[1]},{&l_115,&g_9[1]},{&g_9[3],&g_9[3]},{(void*)0,&g_9[3]},{(void*)0,&l_115},{&g_9[0],&g_3},{&g_9[1],&g_9[0]},{&g_3,(void*)0},{&g_3,&g_9[0]},{&g_9[1],&g_3}},{{&g_9[0],&l_115},{(void*)0,&g_9[3]},{(void*)0,&g_9[3]},{&g_9[3],&g_9[1]},{&l_115,&g_9[1]},{&g_9[3],&g_9[3]},{(void*)0,&g_9[3]},{(void*)0,&l_115},{&g_9[0],&g_3},{&g_9[1],&g_9[0]}},{{&g_3,(void*)0},{&g_3,&g_9[0]},{&g_9[1],&g_3},{&g_9[0],&l_115},{(void*)0,&g_9[3]},{(void*)0,&g_9[3]},{&g_9[3],&g_9[1]},{&l_115,&g_9[1]},{&g_9[3],&g_9[3]},{(void*)0,&g_9[3]}},{{(void*)0,&l_115},{&g_9[0],&g_3},{&g_9[1],&g_9[0]},{&g_3,(void*)0},{&g_3,&g_9[0]},{&g_9[1],&g_3},{&g_9[0],&l_115},{(void*)0,&g_9[3]},{(void*)0,&g_9[3]},{&g_9[3],&g_9[1]}},{{&l_115,&g_9[1]},{&g_9[3],&g_9[3]},{(void*)0,&g_9[3]},{(void*)0,&l_115},{&g_9[0],&g_3},{&g_9[1],&g_9[0]},{&g_3,(void*)0},{(void*)0,&g_3},{&g_3,&l_115},{&g_3,&g_9[3]}},{{&g_9[0],&g_9[1]},{&l_115,(void*)0},{(void*)0,&g_3},{&g_7,&g_3},{(void*)0,(void*)0},{&l_115,&g_9[1]},{&g_9[0],&g_9[3]},{&g_3,&l_115},{&g_3,&g_3},{(void*)0,(void*)0}}};
    int **l_120 = &l_118[1][5][0];
    int i, j, k;
    g_119[7][2] |= (((((*l_104) |= 9UL) , &g_87[0]) == ((g_106 == (((safe_add_func_int8_t_s_s(p_102, 4L)) == ((*l_116) ^= (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((g_89[2] = (g_4 , g_107[0])), p_102)), (l_115 , g_9[3]))))) , (void*)0)) , l_114[0])) <= g_7);
    (*l_120) = &l_115;
    for (g_117 = 19; (g_117 < (-13)); g_117--)
    {
        unsigned l_123 = 1UL;
        g_9[3] = l_123;
    }
    (*l_120) = (p_102 , p_103);


    return &g_7;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_87[i], "g_87[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_89[i], "g_89[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_107[i], "g_107[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_119[i][j], "g_119[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_182[i][j][k], "g_182[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_267[i], "g_267[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_513[i][j][k], "g_513[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_530[i], "g_530[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    transparent_crc(g_985, "g_985", print_hash_value);
    transparent_crc(g_1037, "g_1037", print_hash_value);
    transparent_crc(g_1155, "g_1155", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1164[i], "g_1164[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1192, "g_1192", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1379[i][j][k], "g_1379[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1509[i][j][k], "g_1509[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
