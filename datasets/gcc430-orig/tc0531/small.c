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



static int g_5 = 0x351F2000L;
static int *g_15 = &g_5;
static int **g_14 = &g_15;
static int g_17[5] = {0xA6EDAD94L,0xA6EDAD94L,0xA6EDAD94L,0xA6EDAD94L,0xA6EDAD94L};
static short g_22 = (-2L);
static short g_25[10][5][2] = {{{0x8351L,(-6L)},{0x34CCL,0xF335L},{0x4498L,0L},{0L,0L},{0x6F44L,0x5A16L}},{{0x370CL,0x486CL},{6L,(-8L)},{0x9D94L,6L},{(-6L),(-1L)},{(-6L),6L}},{{0x9D94L,(-8L)},{6L,0x486CL},{0x370CL,0x5A16L},{0x6F44L,0L},{0L,0L}},{{0x4498L,0xF335L},{0x34CCL,(-6L)},{0x8351L,1L},{0x5A16L,0xEE72L},{0L,2L}},{{1L,6L},{0xEE72L,0xF335L},{0xD0E7L,0x370CL},{0x5A16L,0L},{(-1L),0x8351L}},{{0x486CL,0xEE72L},{0x9D94L,0x9D94L},{0x9B8DL,0xD0E7L},{0L,(-8L)},{7L,0xADC9L}},{{0x6F44L,7L},{0L,(-6L)},{0L,7L},{0x6F44L,0xADC9L},{7L,(-8L)}},{{0L,0xD0E7L},{0x9B8DL,0x9D94L},{0x9D94L,0xEE72L},{0x486CL,0x8351L},{(-1L),0L}},{{0x5A16L,0x370CL},{0xD0E7L,0xF335L},{0xEE72L,6L},{0x370CL,6L},{0xEE72L,0xF335L}},{{0xD0E7L,0x370CL},{0x5A16L,0L},{(-1L),0x8351L},{0x486CL,0xEE72L},{0x9D94L,0x9D94L}}};
static short g_27 = 0x18BAL;
static short *g_26 = &g_27;
static int *g_68 = (void*)0;
static int ***g_104 = (void*)0;
static int ****g_103 = &g_104;
static unsigned g_108 = 1UL;
static unsigned short g_120 = 1UL;
static unsigned *g_139 = &g_108;
static unsigned *g_151 = (void*)0;
static unsigned char g_163[2][9][6] = {{{0x30L,0xA0L,247UL,250UL,0x68L,0x4FL},{0x9BL,250UL,254UL,0xD5L,0xC3L,0x04L},{254UL,250UL,0x9BL,0x77L,0x68L,0x5DL},{247UL,0xA0L,0x30L,0xA0L,247UL,250UL},{247UL,0xD5L,0UL,0x77L,0x68L,9UL},{254UL,255UL,0x68L,0xD5L,0x30L,9UL},{254UL,0xDCL,0x68L,0x4FL,0x9BL,0x4FL},{0x68L,0x5DL,0x68L,0x77L,0x9BL,250UL},{0x68L,0xDCL,254UL,255UL,0x68L,0xD5L}},{{0x69L,0xF4L,0UL,255UL,0x30L,0x77L},{0x68L,0xA0L,0xC3L,0x77L,0xC3L,0xA0L},{0x68L,9UL,0xC3L,0x4FL,0x69L,0x77L},{254UL,0x4FL,0UL,0xA0L,0xBAL,0xD5L},{0UL,0x4FL,254UL,0x04L,0x69L,250UL},{0xC3L,9UL,0x68L,9UL,0xC3L,0x4FL},{0xC3L,0xA0L,0x68L,0x04L,0x30L,0xDCL},{0UL,0xF4L,0x69L,0xA0L,0x68L,0xDCL},{254UL,0xDCL,0x68L,0x4FL,0x9BL,0x4FL}}};
static char g_167[10] = {0xBCL,0xBCL,0xBCL,0xBCL,0xBCL,0xBCL,0xBCL,0xBCL,0xBCL,0xBCL};
static unsigned char g_171 = 1UL;
static unsigned char *g_170 = &g_171;
static int g_236 = 0L;
static volatile unsigned short g_247[7][9] = {{0xFA8FL,0UL,0UL,0xFA8FL,0xC8BAL,1UL,8UL,0x0E17L,8UL},{0x0E17L,0xD756L,0xFA8FL,0xFA8FL,0xD756L,1UL,1UL,0xD756L,1UL},{0UL,0x5D89L,1UL,1UL,1UL,1UL,0x5D89L,0UL,0x0E17L},{1UL,0xC8BAL,0UL,1UL,0x5D89L,0x5D89L,1UL,0UL,0xC8BAL},{1UL,0UL,1UL,0x0E17L,0xD756L,0xFA8FL,0xFA8FL,0xD756L,0x0E17L},{1UL,8UL,1UL,0xFA8FL,1UL,1UL,1UL,1UL,1UL},{1UL,0UL,1UL,0UL,1UL,0x0E17L,0xD756L,0xFA8FL,0xFA8FL}};
static volatile unsigned short *g_246 = &g_247[1][3];
static volatile unsigned short **g_245 = &g_246;
static char g_288[5] = {1L,1L,1L,1L,1L};
static char *g_395[7] = {&g_288[1],&g_288[1],&g_288[1],&g_288[1],&g_288[1],&g_288[1],&g_288[1]};
static char g_404 = (-10L);
static int *****g_456 = &g_103;
static unsigned g_494 = 4294967295UL;
static char **g_542 = &g_395[4];
static unsigned short g_562 = 0xD2F1L;
static short g_599[4] = {1L,1L,1L,1L};
static unsigned g_659 = 0x5CE88D1EL;
static unsigned short *g_667 = &g_562;
static unsigned short **g_666 = &g_667;
static unsigned short ***g_665[1][2][6] = {{{&g_666,&g_666,&g_666,&g_666,&g_666,&g_666},{&g_666,&g_666,&g_666,&g_666,&g_666,&g_666}}};
static unsigned short ****g_664 = &g_665[0][1][3];
static int **g_697 = &g_15;
static volatile unsigned char ***g_706 = (void*)0;
static volatile unsigned g_728 = 4294967295UL;
static unsigned ***g_760 = (void*)0;
static unsigned char g_762 = 255UL;
static volatile unsigned char g_796 = 0x45L;
static short g_822 = (-5L);
static unsigned short g_849 = 4UL;



static short func_1(void);
static int ** func_6(int ** p_7, int p_8, unsigned short p_9);
static int ** func_10(unsigned p_11);
static unsigned short func_30(short p_31, unsigned short p_32, short p_33, int ** p_34, short p_35);
static int * func_39(int ** p_40, unsigned char p_41, int * p_42);
static int ** func_43(char p_44, short p_45);
static int ** func_46(unsigned char p_47, int * p_48, unsigned char p_49);
static unsigned char func_50(unsigned char p_51, unsigned short p_52, char p_53, unsigned p_54, unsigned p_55);
static unsigned short func_56(int p_57, unsigned p_58);
static int func_59(int ** p_60, short p_61, int ** p_62, unsigned p_63, short p_64);
static short func_1(void)
{
    unsigned short l_2 = 9UL;
    int **l_701 = &g_15;
    int *l_707 = &g_17[0];
    char l_708[10][1] = {{0x32L},{(-8L)},{0x32L},{0x32L},{(-8L)},{0x32L},{0x32L},{(-8L)},{0x32L},{0x32L}};
    char **l_746 = &g_395[2];
    int **l_754 = (void*)0;
    unsigned short *l_761[9] = {&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120};
    int *l_764 = &g_5;
    int l_773 = 3L;
    int l_784[4][5] = {{0xDBFC31EFL,0L,0xDBFC31EFL,0xDBFC31EFL,0L},{0x8954AE49L,0x0A44805DL,0x0A44805DL,0x8954AE49L,0x0A44805DL},{0L,0L,0L,0L,0L},{0x0A44805DL,0x8954AE49L,0x0A44805DL,0x0A44805DL,0x8954AE49L}};
    unsigned *l_797 = &g_659;
    char l_843 = 0xF7L;
    unsigned short l_848[3][9][3] = {{{0x16F7L,0x7733L,1UL},{1UL,0xFD93L,0x9476L},{0x16F7L,0x16F7L,0x9476L},{0xFD93L,1UL,1UL},{0x7733L,0x16F7L,0x7733L},{0x7733L,0xFD93L,0x16F7L},{0xFD93L,0x7733L,0x7733L},{0x16F7L,0x7733L,1UL},{1UL,0xFD93L,0x9476L}},{{0x16F7L,0x16F7L,0x9476L},{0xFD93L,1UL,1UL},{0x7733L,0x16F7L,0x7733L},{0x7733L,0xFD93L,0x16F7L},{0xFD93L,0x7733L,0x7733L},{0x16F7L,0x7733L,1UL},{1UL,0xFD93L,0x9476L},{0x16F7L,0x16F7L,0x9476L},{0xFD93L,1UL,1UL}},{{0x7733L,0x16F7L,0x7733L},{0x7733L,0xFD93L,0x16F7L},{0xFD93L,0x7733L,0x7733L},{0x16F7L,0x7733L,1UL},{1UL,0xFD93L,0x9476L},{0x16F7L,0x16F7L,0x9476L},{0xFD93L,1UL,0x16F7L},{1UL,0xFD93L,1UL},{1UL,1UL,0xFD93L}}};
    unsigned char l_854[2][7] = {{4UL,4UL,4UL,4UL,4UL,4UL,4UL},{253UL,253UL,253UL,253UL,253UL,253UL,253UL}};
    unsigned short ***l_855 = &g_666;
    int i, j, k;
    if (l_2)
    {
        int *l_3 = (void*)0;
        int *l_4[4];
        int i;
        for (i = 0; i < 4; i++)
            l_4[i] = &g_5;
        if ((g_5 = 0x32FE2236L))
        {
            int *l_16[9][5] = {{&g_17[4],&g_17[0],&g_17[0],&g_17[0],&g_17[4]},{(void*)0,&g_17[0],&g_17[2],&g_17[0],&g_17[0]},{&g_17[4],&g_17[2],&g_17[2],&g_17[4],&g_17[0]},{&g_17[0],&g_17[4],&g_17[0],&g_17[0],&g_17[0]},{(void*)0,&g_17[4],(void*)0,&g_17[0],&g_17[4]},{&g_17[0],&g_17[2],&g_17[0],&g_17[0],&g_17[0]},{&g_17[0],&g_17[0],&g_17[0],&g_17[4],&g_17[0]},{(void*)0,&g_17[0],&g_17[0],&g_17[0],&g_17[0]},{&g_17[0],&g_17[2],(void*)0,&g_17[0],&g_17[0]}};
            short *l_23 = &g_22;
            short *l_24 = &g_25[5][0][0];
            int ***l_700 = &g_14;
            int i, j;
            (*l_700) = func_6(func_10(g_5), (g_17[2] = (l_16[1][1] != (*g_14))), (safe_sub_func_int16_t_s_s(((*l_24) = ((safe_mul_func_int16_t_s_s(((*l_23) = g_22), (-1L))) <= 0x9FACL)), (((g_26 == &g_27) >= g_27) && l_2))));
        }
        else
        {
            (**g_14) = l_2;
            return (*g_26);
        }
        for (g_659 = 0; (g_659 <= 3); g_659 += 1)
        {
            for (g_120 = 0; (g_120 <= 3); g_120 += 1)
            {
                int i;
                if (l_2)
                {
                    return (*g_26);
                }
                else
                {
                    l_4[g_120] = func_39(l_701, (safe_rshift_func_uint8_t_u_s(((*g_667) < ((void*)0 != g_706)), 2)), &g_17[1]);
                    (*l_701) = l_707;
                }
                if (l_708[8][0])
                    break;
            }
        }
        (*g_697) = l_707;
    }
    else
    {
        unsigned l_718 = 0x2FFFAEE3L;
        int ****l_721 = (void*)0;
        char **l_747 = &g_395[0];
        int *l_767 = &g_5;
        unsigned l_793[7][7] = {{0x78E80541L,0x35B7808DL,0x78E80541L,0x3BD5EB49L,4294967295UL,0xB535B7BDL,1UL},{0x211807D4L,0x7EF7063BL,0x87C78126L,0x87C78126L,0x7EF7063BL,0x211807D4L,0x7EF7063BL},{0x78E80541L,0x3BD5EB49L,4294967295UL,0xB535B7BDL,1UL,0xB535B7BDL,4294967295UL},{4UL,4UL,0x211807D4L,0x87C78126L,0x211807D4L,4UL,4UL},{4294967295UL,0x3BD5EB49L,4294967295UL,0xBD7F5801L,0x78E80541L,0xB535B7BDL,1UL},{0x7EF7063BL,0x211807D4L,0x7EF7063BL,0x87C78126L,0x87C78126L,0x7EF7063BL,0x211807D4L},{1UL,0x3BD5EB49L,4294967295UL,0x1B7264E2L,4294967295UL,0xBD7F5801L,4294967295UL}};
        int *l_801[8] = {&g_17[0],&g_17[0],&g_17[0],&g_17[0],&g_17[0],&g_17[0],&g_17[0],&g_17[0]};
        unsigned l_824 = 4294967294UL;
        unsigned l_834 = 0UL;
        short *l_861[10] = {&g_599[2],&g_599[2],&g_599[2],&g_599[2],&g_599[2],&g_599[2],&g_599[2],&g_599[2],&g_599[2],&g_599[2]};
        int **l_865 = &l_801[4];
        int i, j;
        l_707 = ((*g_14) = (*g_697));
        for (g_108 = 15; (g_108 != 58); ++g_108)
        {
            int *l_714 = &g_5;
            for (g_120 = (-15); (g_120 >= 4); ++g_120)
            {
                int l_715 = (-1L);
            }
            (*l_701) = func_39(&l_707, l_718, (*l_701));
        }
        if ((safe_add_func_int16_t_s_s(((((void*)0 == l_721) & (safe_add_func_int8_t_s_s(((**g_542) = (safe_add_func_uint8_t_u_u((((*g_170) = ((safe_lshift_func_int8_t_s_u(4L, (*g_170))) > l_718)) ^ 0x54L), 0UL))), g_728))) ^ (**l_701)), (*l_707))))
        {
            short l_733 = (-1L);
            unsigned short ***l_743 = &g_666;
            int *l_749 = &g_5;
            short l_750 = 1L;
            int l_768 = 0xF80A9464L;
            int *l_779[3][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            unsigned char l_794 = 0UL;
            int i, j;
            (**g_14) = (safe_sub_func_uint16_t_u_u(((*g_26) > (safe_rshift_func_int16_t_s_s((-1L), (*g_26)))), l_733));
            for (g_494 = 0; (g_494 >= 8); g_494 = safe_add_func_uint16_t_u_u(g_494, 6))
            {
                int *l_738 = &g_17[0];
                char **l_744 = &g_395[2];
                int l_795 = 1L;
                for (g_5 = 0; (g_5 <= 0); g_5 += 1)
                {
                    int l_736 = 0L;
                    int *l_737 = &g_17[2];
                    char l_748 = 0xDCL;
                    int i, j;
                    l_736 = (-8L);
                    if (((*l_737) = l_708[(g_5 + 6)][g_5]))
                    {
                        char ***l_745[10] = {&l_744,&l_744,&l_744,&g_542,&l_744,&l_744,&l_744,&l_744,&g_542,&l_744};
                        int l_753 = 0x1905A083L;
                        int l_757 = 1L;
                        int i;
                        (*l_701) = l_738;
                        l_750 = (((*l_701) = func_39(func_43((safe_sub_func_uint32_t_u_u(((l_733 != (*g_246)) == 1UL), func_50((*l_738), (safe_sub_func_uint16_t_u_u(((*g_664) == l_743), ((l_746 = l_744) == l_747))), l_733, g_120, (*g_139)))), l_748), (*g_170), l_749)) == l_738);
                        (**l_701) = (((*g_26) = (*g_26)) & (*g_667));
                    }
                    else
                    {
                        unsigned short l_763 = 2UL;
                        (*g_697) = func_39(&g_15, ((*l_738) = ((*g_26) >= func_50((safe_rshift_func_uint8_t_u_s(func_50((*g_170), (1UL && ((*l_737) = (((void*)0 != &g_103) > ((g_760 == (void*)0) > (((**l_743) = l_761[7]) == (void*)0))))), g_762, (*l_749), (*g_139)), 4)), l_763, (*l_749), g_247[1][3], l_763))), l_764);
                        (*l_738) = (-1L);
                        (**l_701) = (*l_738);
                    }
                    (*g_15) = (*l_738);
                    for (g_404 = 4; (g_404 >= 1); g_404 -= 1)
                    {
                        unsigned l_778 = 0UL;
                    }
                }
            }
            (*l_701) = (void*)0;
        }
        else
        {
            unsigned char l_833[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
            unsigned char *l_844 = (void*)0;
            unsigned char *l_845 = (void*)0;
            unsigned char *l_846[4][4] = {{&l_833[0],&g_163[1][5][0],&l_833[0],&l_833[0]},{&g_163[1][5][0],&g_163[1][5][0],&l_833[0],&g_163[1][5][0]},{&g_163[1][5][0],&l_833[0],&l_833[0],&g_163[1][5][0]},{&l_833[0],&g_163[1][5][0],&l_833[0],&l_833[0]}};
            short l_847 = 0xEF64L;
            int i, j;
            if ((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((*g_26), (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((l_833[4] != l_834), 3)), 1)))), func_50((l_847 = (((*g_170) = (safe_rshift_func_uint8_t_u_u((*g_170), ((~((**l_746) = (((****g_664) & (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((*l_764) & ((~(-10L)) & 6UL)) >= (safe_add_func_uint8_t_u_u(((*l_767) && 0x6063L), (**g_542)))), 1L)), l_833[1]))) != l_843))) & l_833[4])))) || 0x79L)), (*l_707), l_833[4], l_833[5], l_848[0][5][1]))))
            {
                unsigned char *l_850[1];
                int l_851 = 2L;
                int i;
                for (i = 0; i < 1; i++)
                    l_850[i] = &g_171;
                (*g_697) = func_39(&l_707, (*g_170), func_39(func_10(g_494), (g_849 != ((((l_850[0] == (void*)0) || (*g_246)) && l_851) & 65528UL)), (*g_14)));
            }
            else
            {
                return (*g_26);
            }
            for (g_494 = 2; (g_494 <= 6); g_494 += 1)
            {
                short *l_860 = (void*)0;
                short **l_862[7][9] = {{&l_861[7],&l_861[1],(void*)0,&l_861[1],&l_861[1],(void*)0,&l_861[1],&l_861[7],&l_861[7]},{(void*)0,&l_860,(void*)0,&l_860,(void*)0,&l_860,(void*)0,&l_860,(void*)0},{&l_861[7],&l_861[1],&l_861[1],&l_861[1],&l_861[1],&l_861[7],(void*)0,(void*)0,&l_861[7]},{&g_26,&l_860,&l_861[4],&l_860,&g_26,&l_860,&l_861[4],&l_860,&g_26},{&l_861[1],&l_861[1],&l_861[1],&l_861[1],&l_861[7],(void*)0,(void*)0,&l_861[7],&l_861[1]},{(void*)0,&l_860,(void*)0,&l_860,(void*)0,&l_860,(void*)0,&l_860,(void*)0},{&l_861[1],&l_861[1],(void*)0,&l_861[1],&l_861[7],&l_861[7],&l_861[1],(void*)0,&l_861[1]}};
                int l_863[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_863[i] = 0x61E4541EL;
                (**g_697) = (**g_697);
                (*l_707) = (((safe_add_func_uint16_t_u_u(l_854[0][4], (((**l_701) = (l_855 == (void*)0)) <= ((*g_667) && ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((l_860 != (g_26 = l_861[1])), l_863[0])), (*l_767))) & (**g_542)))))) && l_863[0]) == (**g_542));
                for (l_834 = 0; (l_834 <= 6); l_834 += 1)
                {
                    int *l_864[7] = {&l_863[0],&l_863[0],&l_863[0],&l_863[0],&l_863[0],&l_863[0],&l_863[0]};
                    int i;
                    l_864[3] = &l_863[1];
                }
                (*g_14) = func_39(l_865, ((*g_170) = ((*l_767) & (safe_add_func_int16_t_s_s(func_50((*l_707), (**l_701), l_833[1], (safe_add_func_int16_t_s_s(g_5, ((****g_664) = 0UL))), (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(l_863[0], ((*g_170) = (safe_mul_func_int16_t_s_s(l_863[0], l_847))))), (*l_707))) != l_863[1]), 5)), g_796))), 0x9DCCL)))), (*g_697));
            }
        }
    }
    return (*l_764);
}







static int ** func_6(int ** p_7, int p_8, unsigned short p_9)
{
    short l_36 = 0L;
    int l_532 = (-10L);
    char *l_533 = (void*)0;
    char *l_534 = &g_167[2];
    unsigned short l_538 = 5UL;
    char **l_541 = &l_534;
    int l_583 = 0x547C61BEL;
    unsigned short ***l_598[1];
    unsigned short ****l_597 = &l_598[0];
    int *l_601[3];
    unsigned l_683 = 0xED3491A8L;
    int **l_698 = &g_15;
    int i;
    for (i = 0; i < 1; i++)
        l_598[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_601[i] = &l_583;
    if (((((*l_534) = (safe_mul_func_uint16_t_u_u((func_30(p_9, g_17[0], l_36, &g_15, p_8) | ((*g_26) = (((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_36, l_36)), (l_532 = (safe_mul_func_int8_t_s_s(1L, p_8))))) && p_9) <= l_36))), l_36))) >= (*g_170)) <= p_9))
    {
        int ***l_535[10][6] = {{&g_14,&g_14,&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14,&g_14,&g_14}};
        unsigned char **l_580 = &g_170;
        int *****l_609 = &g_103;
        int l_619[9] = {1L,9L,9L,1L,9L,9L,1L,9L,9L};
        int i, j;
        (*g_14) = func_39((p_7 = func_10(g_247[1][2])), ((*g_170) = ((((safe_mod_func_int32_t_s_s((~l_36), l_538)) > func_50((!(func_50(p_8, (+(safe_lshift_func_int8_t_s_s((((*g_139) = (0x9D1A7110L | (+p_8))) & (g_17[3] = ((g_542 = l_541) == &l_534))), 6))), p_8, p_9, l_532) == p_8)), g_120, p_9, l_538, p_9)) && p_9) ^ p_9)), (*g_14));
        for (l_538 = 0; (l_538 >= 13); l_538 = safe_add_func_uint32_t_u_u(l_538, 4))
        {
            for (g_108 = 0; (g_108 <= 47); g_108++)
            {
                (*g_14) = (*g_14);
                (*g_14) = func_39(p_7, ((*g_170) = (*g_170)), (*p_7));
                (*p_7) = (*p_7);
            }
            return p_7;
        }
        if (((l_532 = (*g_170)) != (*g_170)))
        {
            unsigned *l_550 = (void*)0;
            int l_556 = 1L;
            unsigned **l_567 = &g_151;
            int **l_568 = &g_15;
            (*p_7) = (*p_7);
            for (g_5 = (-9); (g_5 > (-7)); g_5 = safe_add_func_uint16_t_u_u(g_5, 6))
            {
                unsigned l_557[8][6] = {{0x3CC80852L,0xE5B59ACAL,0x179E3284L,4294967288UL,1UL,1UL},{1UL,0x6DDB8589L,0x70DCE3B9L,0x6DDB8589L,1UL,0xE5B59ACAL},{1UL,0x3CC80852L,0x6DDB8589L,4294967288UL,0xD999341CL,0xD999341CL},{0x3CC80852L,1UL,1UL,0x3CC80852L,0x70DCE3B9L,0xD999341CL},{0x179E3284L,0xD999341CL,0x6DDB8589L,0xE5B59ACAL,4294967288UL,0xE5B59ACAL},{0x70DCE3B9L,0xA8CAC1E0L,0x70DCE3B9L,6UL,4294967288UL,1UL},{0x6DDB8589L,0xD999341CL,0x179E3284L,0x70DCE3B9L,0x70DCE3B9L,0x179E3284L},{1UL,1UL,0x3CC80852L,0x70DCE3B9L,0xD999341CL,6UL}};
                int i, j;
                for (g_171 = 0; (g_171 <= 1); g_171 += 1)
                {
                    int i, j;
                    (*p_7) = func_39((g_14 = p_7), g_247[(g_171 + 2)][(g_171 + 7)], &l_532);
                    for (l_36 = 5; (l_36 >= 1); l_36 -= 1)
                    {
                        int *l_549 = &g_17[4];
                        int i, j, k;
                        l_549 = (*p_7);
                        p_8 = ((g_247[l_36][l_36] | ((**g_14) = g_163[g_171][(l_36 + 2)][g_171])) | ((void*)0 == &p_7));
                        if ((**p_7))
                            break;
                    }
                    for (g_404 = 0; (g_404 <= 6); g_404 += 1)
                    {
                        unsigned **l_551 = &g_139;
                        int **l_563 = &g_68;
                        unsigned ***l_566 = &l_551;
                        (**p_7) = func_50(((((*l_551) = l_550) != &g_108) < (safe_lshift_func_uint16_t_u_s(p_8, 5))), l_532, p_8, (safe_lshift_func_uint16_t_u_s((l_556 <= (g_562 = ((l_557[5][5] && (((**p_7) = l_557[4][0]) | (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(0xEFB6EB90L, g_247[(g_171 + 2)][(g_171 + 7)])), (-1L))))) ^ l_557[5][0]))), 8)), p_8);
                        (*p_7) = func_39(l_563, ((safe_mul_func_int8_t_s_s((-1L), 255UL)) >= (((l_567 = ((*l_566) = &g_151)) == &g_151) == (p_9 && p_8))), (*p_7));
                    }
                }
                return l_568;
            }
        }
        else
        {
            char l_577 = (-6L);
            unsigned short *l_596[8][5] = {{(void*)0,&l_538,&l_538,(void*)0,&l_538},{&g_562,&g_562,&g_562,&g_562,&g_562},{&g_120,&l_538,&g_120,&g_120,&l_538},{&g_562,(void*)0,(void*)0,&g_562,(void*)0},{&l_538,&l_538,(void*)0,&l_538,&l_538},{(void*)0,&g_562,(void*)0,(void*)0,&g_562},{&l_538,&g_120,&g_120,&l_538,&g_120},{&g_562,&g_562,&g_562,&g_562,&g_562}};
            unsigned short **l_595[1];
            unsigned short ***l_594 = &l_595[0];
            unsigned short ****l_593 = &l_594;
            int i, j;
            for (i = 0; i < 1; i++)
                l_595[i] = &l_596[1][2];
            (*p_7) = &l_532;
            for (g_120 = 18; (g_120 != 38); g_120++)
            {
                for (g_27 = 0; g_27 < 2; g_27 += 1)
                {
                    for (g_108 = 0; g_108 < 9; g_108 += 1)
                    {
                        for (g_236 = 0; g_236 < 6; g_236 += 1)
                        {
                            g_163[g_27][g_108][g_236] = 0x06L;
                        }
                    }
                }
            }
            (**g_14) = (safe_mod_func_int16_t_s_s(0x3FA9L, (safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(l_577, p_8)) != (**g_245)), 6))));
            if ((**p_7))
            {
                unsigned char **l_579 = &g_170;
                unsigned char ***l_578[10] = {&l_579,&l_579,&l_579,&l_579,&l_579,&l_579,&l_579,&l_579,&l_579,&l_579};
                int i;
                l_580 = &g_170;
            }
            else
            {
                int ***l_592 = (void*)0;
                int *****l_608 = &g_103;
                for (g_120 = 0; (g_120 < 36); g_120++)
                {
                    g_5 = (l_583 = ((**p_7) = (**p_7)));
                    for (g_562 = 5; (g_562 == 24); g_562 = safe_add_func_uint16_t_u_u(g_562, 3))
                    {
                        unsigned char l_600[2];
                        short *l_618[7];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_600[i] = 0x03L;
                        for (i = 0; i < 7; i++)
                            l_618[i] = &g_25[1][0][1];
                        l_601[1] = func_39(p_7, (safe_rshift_func_uint16_t_u_s(p_8, 3)), func_39(p_7, (~func_50(p_8, p_8, ((**l_541) = ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((((&p_7 == (l_592 = (*g_103))) && (l_593 == l_597)) || 255UL) > 2L), 6)), (**g_542))) >= l_532)), g_599[2], l_600[1])), (*g_14)));
                        (*p_7) = func_39(p_7, (0xC1L == p_9), (*g_14));
                        (*g_14) = (*p_7);
                        p_8 = ((**g_14) = (safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(p_9, ((((l_609 = l_608) == (void*)0) > (safe_sub_func_int16_t_s_s(3L, (+((((*g_139) = func_30(((safe_rshift_func_uint8_t_u_u((((*g_26) = 0x4A2BL) == 1UL), 6)) | (l_619[1] = (((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(1UL, (*g_170))), ((*g_139) || 4294967295UL))) ^ l_577) ^ (**p_7)))), p_8, l_600[1], p_7, p_9)) > p_9) == p_8))))) || p_9))), (**p_7))), p_8)));
                    }
                    (*p_7) = (*p_7);
                }
            }
        }
    }
    else
    {
        unsigned short l_620 = 65529UL;
        int l_644 = (-2L);
        int **l_669 = &l_601[1];
        if ((0L < l_620))
        {
            (**p_7) = l_620;
            return p_7;
        }
        else
        {
            int **l_621 = (void*)0;
            short *l_622 = (void*)0;
            short l_625[7][9] = {{0xAAAFL,(-1L),2L,(-1L),0xAAAFL,0x9BE8L,0xAAAFL,(-1L),2L},{(-1L),(-1L),(-1L),0L,(-1L),0L,0L,0L,0L},{0xE2FAL,(-1L),0L,(-1L),0xE2FAL,0x9BE8L,0xE2FAL,(-1L),0L},{(-1L),0L,(-1L),(-1L),(-1L),(-1L),0L,(-1L),0L},{0xAAAFL,(-1L),2L,(-1L),0xAAAFL,0x9BE8L,0xAAAFL,(-1L),2L},{(-1L),(-1L),(-1L),0L,(-1L),0L,0L,0L,0L},{0xE2FAL,(-1L),0L,(-1L),0xE2FAL,0x9BE8L,0xE2FAL,(-1L),0L}};
            char l_636 = 0x69L;
            int i, j;
            (**g_14) = (p_9 > (((0xD7L || (*g_170)) | p_8) != l_620));
            (**p_7) = (safe_lshift_func_uint8_t_u_s(0x62L, 6));
            (**p_7) = l_625[5][7];
            for (l_538 = 0; (l_538 >= 39); l_538 = safe_add_func_int8_t_s_s(l_538, 9))
            {
                unsigned short l_634[7] = {65531UL,65531UL,65531UL,65531UL,65531UL,65531UL,65531UL};
                int l_635 = 0x4B72F697L;
                int **l_668[2];
                unsigned short **l_677 = (void*)0;
                char l_682 = 0xEFL;
                int ****l_686 = &g_104;
                int i;
                for (i = 0; i < 2; i++)
                    l_668[i] = (void*)0;
                (*p_7) = (*p_7);
                l_635 = (((*g_246) <= (safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(((*g_139) = 1UL), ((*g_15) = (!0x5C341261L)))) ^ (*g_170)), (2L | func_50(((-10L) & (p_9 == (l_634[6] ^ 1L))), g_562, (**g_542), p_8, p_8)))) | p_9), 14))) != 4294967290UL);
            }
        }
    }
    for (g_494 = 0; (g_494 != 46); ++g_494)
    {
        int **l_696 = &g_15;
        int **l_699 = &g_15;
        return &g_68;
    }
    (*g_697) = (*l_698);
    return &g_68;
}







static int ** func_10(unsigned p_11)
{
    unsigned l_12[6] = {0x52D0DA0BL,0x52D0DA0BL,0x52D0DA0BL,0x52D0DA0BL,0x52D0DA0BL,0x52D0DA0BL};
    int *l_13 = &g_5;
    int i;
    (*l_13) = (0xECC2L && l_12[1]);
    return g_14;
}







static unsigned short func_30(short p_31, unsigned short p_32, short p_33, int ** p_34, short p_35)
{
    unsigned short l_130[10] = {3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL};
    int l_290[5][7][7] = {{{(-1L),0x82938612L,0x427E14B0L,0x3C8C3ACDL,0xFB84948AL,0xBD5D49D6L,0x068350E1L},{(-8L),(-7L),1L,0x678F4488L,(-1L),0xDB6063B8L,9L},{(-9L),0xBBA75CAEL,0x427E14B0L,0x3EF79BD0L,0xE1435C6AL,0x9CFF057BL,(-2L)},{0L,0x045C0899L,0xAB9110B2L,0xAB9110B2L,0x045C0899L,0L,0xC7E68FB0L},{0x35F22786L,0L,3L,(-10L),0xCF96D034L,1L,(-9L)},{0x045C0899L,0xC7E68FB0L,6L,(-1L),0xAB9110B2L,0xED51D2FAL,(-1L)},{0xEF154D8FL,0L,(-1L),(-6L),(-2L),0xBBA75CAEL,0x068350E1L}},{{(-1L),0x045C0899L,0xDB6063B8L,0x045C0899L,(-1L),1L,(-8L)},{(-1L),0xBBA75CAEL,0xE1435C6AL,0x82938612L,(-4L),1L,0x427E14B0L},{1L,0L,0x80E14F99L,0x5BC425B6L,0xC7E68FB0L,1L,0L},{0x427E14B0L,0xCFAE09BDL,(-2L),0x3C8C3ACDL,0x771C00C6L,0L,0x771C00C6L},{0xAB9110B2L,0L,0L,0xAB9110B2L,1L,1L,0xED51D2FAL},{3L,0x9CFF057BL,1L,0xFCC5D807L,0xEF154D8FL,0x63C9B089L,0L},{6L,(-6L),0x678F4488L,0xC7E68FB0L,0x69DB7550L,0x678F4488L,0xED51D2FAL}},{{(-1L),1L,3L,1L,0x25A164C5L,0xFCC5D807L,0x771C00C6L},{0xDB6063B8L,0xAB9110B2L,0xDB6063B8L,1L,(-6L),(-1L),0L},{0xE1435C6AL,(-1L),0x085F6703L,0x9CFF057BL,1L,0xF0EF499AL,0x427E14B0L},{0xC7E68FB0L,0L,1L,0x69DB7550L,0x5BC425B6L,(-1L),0xC7E68FB0L},{0x400E7F46L,0xBBA75CAEL,0x6B793D8EL,0xFCC5D807L,0x427E14B0L,0xFCC5D807L,0x6B793D8EL},{0x69DB7550L,0x69DB7550L,(-1L),(-6L),0x3483B8E7L,0x678F4488L,0L},{1L,(-4L),0L,0xBD5D49D6L,(-4L),0x63C9B089L,0xE1435C6AL}},{{0xDB6063B8L,0x3483B8E7L,1L,0x5BC425B6L,0x3483B8E7L,1L,0x80E14F99L},{0xEF154D8FL,0x3C8C3ACDL,0xCF96D034L,(-1L),(-1L),0x82938612L,0x427E14B0L},{0xAB9110B2L,0xDB6063B8L,1L,(-6L),(-1L),0L,(-6L)},{0x25A164C5L,0xBBA75CAEL,1L,(-4L),1L,1L,0L},{0xC7E68FB0L,0xAB9110B2L,(-8L),(-6L),0x69DB7550L,(-7L),6L},{0x771C00C6L,0x63C9B089L,1L,(-1L),1L,0x63C9B089L,0x771C00C6L},{1L,0L,1L,(-1L),6L,0x80E14F99L,0x97224E85L}},{{0xEF154D8FL,(-1L),(-1L),0xCFAE09BDL,(-4L),0x82938612L,0xE1435C6AL},{0x69DB7550L,0x97224E85L,1L,0x69DB7550L,0L,0x5BC425B6L,0L},{0x25A164C5L,0xBD5D49D6L,1L,0xDD1D8D23L,1L,0xFCC5D807L,3L},{(-6L),0xC7E68FB0L,(-8L),6L,0L,(-8L),0x69DB7550L},{1L,1L,1L,0x3C8C3ACDL,1L,1L,(-4L)},{0x5BC425B6L,0xC7E68FB0L,1L,0L,0L,0x97224E85L,0x97224E85L},{0x427E14B0L,0xBD5D49D6L,0xCF96D034L,0xBD5D49D6L,0x427E14B0L,7L,0xEF154D8FL}}};
    int *l_292[6][3][3] = {{{&g_17[0],&g_17[0],&g_17[0]},{&g_17[3],&g_17[3],&g_17[3]},{&g_17[0],&g_17[0],&g_17[0]}},{{&g_17[3],&g_17[3],&g_17[3]},{&g_17[0],&g_17[0],&g_17[0]},{&g_17[3],&g_17[3],&g_17[3]}},{{&g_17[0],&g_17[0],&g_17[0]},{&g_17[3],&g_17[3],&g_17[3]},{&g_17[0],&g_17[0],&g_17[0]}},{{&g_17[3],&g_17[3],&g_17[3]},{&g_17[0],&g_17[0],&g_17[0]},{&g_17[3],&g_17[3],&g_17[3]}},{{&g_17[0],&g_17[0],&g_17[0]},{&g_17[3],&g_17[3],&g_17[3]},{&g_17[0],&g_17[0],&g_17[0]}},{{&g_17[3],&g_17[3],&g_17[3]},{&g_17[0],&g_17[0],&g_17[0]},{&g_17[3],&g_17[3],&g_17[3]}}};
    unsigned char l_308[9][4][3] = {{{0x65L,0x70L,255UL},{250UL,0x03L,0xB2L},{0x65L,255UL,255UL},{0UL,0x03L,9UL}},{{0x65L,0x70L,255UL},{250UL,0x03L,0xB2L},{0x65L,255UL,255UL},{0UL,0x03L,9UL}},{{0x65L,0x70L,255UL},{250UL,0x03L,0xB2L},{0x65L,255UL,255UL},{0UL,0x03L,9UL}},{{0x65L,0x70L,255UL},{250UL,0x03L,0xB2L},{0x65L,255UL,255UL},{0UL,0x03L,9UL}},{{0x65L,0x70L,255UL},{250UL,0x03L,0xB2L},{0x65L,255UL,255UL},{0UL,0x03L,9UL}},{{0x65L,0x70L,255UL},{250UL,0x03L,0xB2L},{0x65L,255UL,255UL},{0UL,0x03L,9UL}},{{0x65L,0x70L,255UL},{250UL,0x03L,0xB2L},{0x65L,255UL,255UL},{0UL,0x03L,9UL}},{{0x65L,0x70L,255UL},{250UL,0x03L,0xB2L},{0x65L,255UL,255UL},{0UL,0x03L,9UL}},{{0x65L,0x70L,255UL},{250UL,0x03L,0xB2L},{0x65L,255UL,255UL},{0UL,0x03L,9UL}}};
    unsigned short *l_319 = &l_130[5];
    unsigned short **l_318[5][8] = {{&l_319,(void*)0,&l_319,(void*)0,&l_319,&l_319,(void*)0,&l_319},{&l_319,&l_319,(void*)0,&l_319,(void*)0,&l_319,&l_319,(void*)0},{&l_319,(void*)0,(void*)0,&l_319,&l_319,&l_319,(void*)0,(void*)0},{(void*)0,&l_319,&l_319,&l_319,&l_319,(void*)0,&l_319,&l_319},{&l_319,&l_319,&l_319,&l_319,&l_319,(void*)0,&l_319,(void*)0}};
    unsigned short ***l_317 = &l_318[2][6];
    short **l_324 = &g_26;
    unsigned char l_377[2];
    int ***l_388 = (void*)0;
    unsigned char **l_416 = &g_170;
    unsigned short l_475 = 1UL;
    int l_509[9][4] = {{0xD271ECDFL,(-7L),(-7L),0xD271ECDFL},{(-7L),0xD271ECDFL,0x5582ECA6L,0L},{(-7L),0x5582ECA6L,(-7L),0xD0434D79L},{0xD271ECDFL,0L,0xD0434D79L,0xD0434D79L},{0x5582ECA6L,0x5582ECA6L,1L,0L},{0L,0xD271ECDFL,1L,0xD271ECDFL},{0x5582ECA6L,(-7L),0xD0434D79L,1L},{0xD271ECDFL,(-7L),(-7L),0xD271ECDFL},{(-7L),0xD271ECDFL,0x5582ECA6L,0L}};
    short l_516 = 0xA009L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_377[i] = 4UL;
    for (g_5 = 20; (g_5 <= (-13)); g_5--)
    {
        int **l_66[6][5][3] = {{{&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15}},{{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15}},{{&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15}},{{&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15}},{{&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15}},{{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15}}};
        int ***l_65 = &l_66[4][2][1];
        int l_276 = 0x905C7877L;
        unsigned short ***l_320[7][9] = {{&l_318[2][6],&l_318[1][6],&l_318[2][6],&l_318[2][6],(void*)0,&l_318[4][7],&l_318[2][6],&l_318[2][0],&l_318[2][6]},{&l_318[2][6],(void*)0,&l_318[2][4],&l_318[4][7],&l_318[2][6],&l_318[4][7],&l_318[2][4],(void*)0,&l_318[2][6]},{&l_318[2][6],&l_318[2][0],&l_318[2][6],&l_318[4][7],(void*)0,&l_318[2][6],&l_318[2][6],&l_318[1][6],&l_318[2][6]},{&l_318[4][7],&l_318[2][0],&l_318[2][4],&l_318[2][6],(void*)0,&l_318[2][6],&l_318[2][6],(void*)0,&l_318[2][6]},{&l_318[2][6],(void*)0,&l_318[2][6],&l_318[2][6],&l_318[2][6],&l_318[2][4],&l_318[2][6],&l_318[1][6],&l_318[2][6]},{&l_318[2][6],&l_318[1][6],&l_318[2][6],&l_318[2][4],&l_318[2][6],&l_318[2][6],&l_318[2][6],(void*)0,&l_318[2][6]},{&l_318[2][6],(void*)0,&l_318[2][6],&l_318[2][6],(void*)0,&l_318[2][6],&l_318[2][0],&l_318[4][7],&l_318[3][3]}};
        short *l_330 = &g_27;
        unsigned char l_379 = 6UL;
        int l_380 = 1L;
        unsigned l_381 = 0xCA20F610L;
        unsigned l_406[1][5];
        int *l_411 = &g_5;
        int **l_420 = &l_292[1][2][2];
        char l_461 = 0L;
        unsigned char l_506 = 246UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_406[i][j] = 0x965590DCL;
        }
    }
    return (**g_245);
}







static int * func_39(int ** p_40, unsigned char p_41, int * p_42)
{
    int *l_291 = &g_17[2];
    return l_291;
}







static int ** func_43(char p_44, short p_45)
{
    short l_282 = 0xDD46L;
    int *l_285 = &g_5;
    unsigned char l_286 = 0xDFL;
    int *l_287[9][5] = {{&g_17[3],&g_17[1],(void*)0,&g_17[1],&g_17[3]},{&g_5,&g_17[4],&g_17[4],&g_5,&g_5},{&g_17[4],&g_17[1],&g_17[4],&g_17[0],&g_17[4]},{&g_5,&g_5,&g_5,&g_17[4],&g_5},{&g_17[3],&g_17[0],(void*)0,&g_17[0],&g_17[3]},{&g_5,&g_17[4],&g_5,&g_5,&g_5},{&g_17[4],&g_17[0],&g_17[4],&g_17[1],&g_17[4]},{&g_5,&g_5,&g_17[4],&g_17[4],&g_5},{&g_17[3],&g_17[1],(void*)0,&g_17[1],&g_17[3]}};
    int **l_289 = (void*)0;
    int i, j;
    g_288[1] = (g_17[0] = ((safe_sub_func_uint16_t_u_u(l_282, 1UL)) < (safe_sub_func_uint32_t_u_u(1UL, l_286))));
    return l_289;
}







static int ** func_46(unsigned char p_47, int * p_48, unsigned char p_49)
{
    int **l_279 = &g_68;
    return l_279;
}







static unsigned char func_50(unsigned char p_51, unsigned short p_52, char p_53, unsigned p_54, unsigned p_55)
{
    for (p_55 = 0; (p_55 <= 29); p_55 = safe_add_func_int16_t_s_s(p_55, 3))
    {
        return (*g_170);
    }
    return (*g_170);
}







static unsigned short func_56(int p_57, unsigned p_58)
{
    int *l_131 = (void*)0;
    unsigned *l_138 = &g_108;
    int l_144 = (-1L);
    int l_157 = (-1L);
    unsigned char *l_172 = &g_171;
    short *l_176 = &g_22;
    unsigned l_204 = 0xCEC42E94L;
    unsigned char l_221[2];
    int *l_261 = &l_144;
    int l_275 = 0x5F65D0CDL;
    int i;
    for (i = 0; i < 2; i++)
        l_221[i] = 0xD5L;
    if (p_58)
    {
        int **l_132 = (void*)0;
        int **l_133 = &l_131;
        unsigned *l_136 = (void*)0;
        (*l_133) = l_131;
        for (g_27 = 0; (g_27 < (-10)); g_27 = safe_sub_func_int16_t_s_s(g_27, 1))
        {
            unsigned **l_137[6][10][1] = {{{(void*)0},{&l_136},{&l_136},{&l_136},{&l_136},{&l_136},{(void*)0},{&l_136},{&l_136},{(void*)0}},{{&l_136},{&l_136},{(void*)0},{&l_136},{&l_136},{&l_136},{&l_136},{&l_136},{(void*)0},{&l_136}},{{&l_136},{(void*)0},{&l_136},{&l_136},{(void*)0},{&l_136},{&l_136},{&l_136},{&l_136},{&l_136}},{{(void*)0},{&l_136},{&l_136},{(void*)0},{&l_136},{&l_136},{(void*)0},{&l_136},{&l_136},{&l_136}},{{&l_136},{&l_136},{(void*)0},{&l_136},{&l_136},{(void*)0},{&l_136},{&l_136},{(void*)0},{&l_136}},{{&l_136},{&l_136},{&l_136},{&l_136},{(void*)0},{&l_136},{&l_136},{(void*)0},{&l_136},{&l_136}}};
            int l_140 = 0x433C1653L;
            unsigned l_143 = 0xC1939B73L;
            int ***l_148 = &g_14;
            unsigned char l_181 = 255UL;
            int i, j, k;
            l_140 = (((l_138 = l_136) != (g_139 = &p_58)) > ((void*)0 != &p_58));
            for (l_140 = 0; (l_140 >= 8); l_140++)
            {
                unsigned l_153 = 1UL;
                unsigned char *l_162 = &g_163[1][1][5];
                char *l_166[8] = {&g_167[2],&g_167[2],&g_167[2],&g_167[2],&g_167[2],&g_167[2],&g_167[2],&g_167[2]};
                short **l_175[2];
                int *l_180[4][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_175[i] = &g_26;
                if (p_57)
                {
                    int *l_145 = &l_140;
                    short *l_154 = &g_25[5][0][0];
                    int *l_155 = &g_17[0];
                    int *l_156 = &l_144;
                    l_144 = l_143;
                    (*l_133) = l_145;
                    l_144 = (safe_mod_func_int16_t_s_s(((*g_103) != l_148), (p_58 ^ ((g_108 = ((*g_139) | (safe_mul_func_int16_t_s_s((&g_108 != (g_151 = &p_58)), ((*l_154) = (safe_unary_minus_func_int16_t_s(((~l_153) & 0xE2L)))))))) < (*l_145)))));
                    l_157 = ((*l_156) = ((*l_155) = l_153));
                }
                else
                {
                    for (l_153 = 1; (l_153 <= 4); l_153 += 1)
                    {
                        (*l_133) = (void*)0;
                    }
                }
                g_17[0] = ((void*)0 != (*l_148));
                (*l_133) = (**l_148);
                if (((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((!((*l_162) = g_17[0])), 7)), (p_57 == ((!(g_167[0] = ((0x424D4B57L & (safe_lshift_func_uint8_t_u_u(((!g_17[2]) != g_120), 2))) < p_58))) <= ((*g_170) = ((safe_rshift_func_uint8_t_u_s(((g_170 == l_172) < (safe_mul_func_int16_t_s_s(((l_176 = (void*)0) == (void*)0), (-8L)))), g_17[3])) == g_120)))))) <= p_57))
                {
                    for (l_153 = (-18); (l_153 == 60); l_153++)
                    {
                        int l_179 = (-5L);
                        l_179 = (g_167[8] != (g_25[5][0][0] = (*g_26)));
                        l_131 = l_180[0][6];
                    }
                    for (l_157 = 0; (l_157 <= 0); l_157 += 1)
                    {
                        int i;
                        if (g_17[(l_157 + 3)])
                            break;
                        g_17[(l_157 + 4)] = 0x950B7EC4L;
                        l_181 = 0xC3D3C4ABL;
                    }
                }
                else
                {
                    return p_57;
                }
            }
        }
        l_131 = (*l_133);
    }
    else
    {
        short l_182 = (-2L);
        return l_182;
    }
    l_131 = &l_157;
    for (p_57 = (-18); (p_57 > 15); ++p_57)
    {
        int *l_192 = &l_157;
        for (g_171 = 0; (g_171 == 22); g_171 = safe_add_func_int8_t_s_s(g_171, 3))
        {
            int *l_187 = &l_157;
            int **l_188 = &l_187;
            char *l_191 = &g_167[2];
            (*l_188) = l_187;
            (*l_131) = (safe_mul_func_int8_t_s_s(((*l_191) = (-1L)), (*g_170)));
            for (l_144 = 4; (l_144 >= 0); l_144 -= 1)
            {
                int i;
                g_17[l_144] = g_17[l_144];
                (*l_188) = l_192;
            }
            for (g_27 = 0; (g_27 <= 11); ++g_27)
            {
                (*l_192) = p_57;
                return g_5;
            }
        }
        (*l_131) = (safe_rshift_func_int8_t_s_s(p_57, 0));
    }
    if ((l_144 = ((*l_131) = 0x67B81A4BL)))
    {
        int **l_197 = &g_68;
        unsigned **l_198 = &g_139;
        unsigned char l_218 = 0x56L;
        int *l_243 = (void*)0;
        l_131 = ((*l_197) = (void*)0);
        for (l_157 = 9; (l_157 >= 0); l_157 -= 1)
        {
            short l_202 = 1L;
            int **l_203 = (void*)0;
            short **l_209 = &l_176;
            unsigned l_210[7][2][5] = {{{0x95B7E0EDL,4294967295UL,0xA5D139EDL,4294967295UL,0x95B7E0EDL},{0x683C1152L,4294967295UL,0x353B77AAL,0x95B7E0EDL,0x353B77AAL}},{{0x353B77AAL,0x353B77AAL,0xA5D139EDL,0x95B7E0EDL,0UL},{4294967295UL,0x683C1152L,0x683C1152L,4294967295UL,0x353B77AAL}},{{4294967295UL,0x95B7E0EDL,1UL,1UL,0x95B7E0EDL},{0x353B77AAL,0x683C1152L,1UL,0xA5D139EDL,0xA5D139EDL}},{{0x683C1152L,0x353B77AAL,0x683C1152L,1UL,0UL},{0xA5D139EDL,0x95B7E0EDL,0UL,0x95B7E0EDL,0xA5D139EDL}},{{1UL,0x95B7E0EDL,4294967295UL,0xA5D139EDL,4294967295UL},{4294967295UL,4294967295UL,0UL,0xA5D139EDL,0x683C1152L}},{{0x95B7E0EDL,1UL,1UL,0x95B7E0EDL,4294967295UL},{0x95B7E0EDL,0xA5D139EDL,0x353B77AAL,0x353B77AAL,0xA5D139EDL}},{{4294967295UL,1UL,0x353B77AAL,0UL,0UL},{1UL,4294967295UL,1UL,0x353B77AAL,0UL}}};
            int *l_239[8][1][3];
            unsigned char *l_259 = &l_218;
            int i, j, k;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_239[i][j][k] = &g_17[1];
                }
            }
            if ((l_198 != (void*)0))
            {
                (*l_197) = &l_157;
            }
            else
            {
                int **l_199 = (void*)0;
                int **l_201 = (void*)0;
                int ***l_200 = &l_201;
                unsigned char *l_215 = &g_163[1][1][5];
                short l_237[4][1][7] = {{{0xD3DBL,0x29FDL,0xD3DBL,0xB407L,0xB407L,0xD3DBL,0x29FDL}},{{(-5L),(-1L),4L,4L,(-1L),(-5L),(-1L)}},{{0xD3DBL,0xB407L,0xB407L,0xD3DBL,0x29FDL,0xD3DBL,0xB407L}},{{(-6L),(-6L),(-5L),4L,(-5L),(-6L),(-6L)}}};
                int l_238 = 0x84F7E7FAL;
                int i, j, k;
                if (g_167[l_157])
                    break;
                if ((**g_14))
                    break;
                if (p_57)
                {
                    unsigned char *l_213 = (void*)0;
                    unsigned char **l_214 = &l_213;
                    int l_216 = 0x996B2D16L;
                    int *l_217[2][5][8] = {{{(void*)0,&l_216,&l_216,&l_157,&l_157,&l_144,&g_5,&g_5},{(void*)0,&g_5,(void*)0,(void*)0,&g_5,(void*)0,&g_17[0],&l_157},{&l_216,&l_144,&l_144,&g_17[0],&l_216,&g_17[0],&l_157,&g_17[1]},{&l_157,&l_157,&g_17[0],&g_17[0],&l_144,&g_17[0],&g_17[0],&l_157},{&l_216,&l_144,&g_17[1],&g_17[0],(void*)0,&l_216,&l_157,&l_157}},{{&g_17[0],&g_5,&l_216,&g_17[1],&l_216,&l_157,&l_157,&l_216},{&l_216,&g_17[1],&g_17[1],&l_216,&l_216,(void*)0,&l_157,&l_144},{&l_216,(void*)0,&l_157,&l_144,&l_144,(void*)0,&l_216,&g_5},{&l_157,(void*)0,&g_5,&g_17[0],&g_5,(void*)0,&l_157,&g_17[0]},{&l_144,&g_17[1],&g_17[0],(void*)0,&l_216,&l_157,&l_157,&l_157}}};
                    int i, j, k;
                    l_218 = ((((p_57 < (((*l_172) = (*g_170)) <= (safe_add_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((((void*)0 != l_209) < ((*g_139) = p_57)) > l_210[2][0][0]), ((safe_rshift_func_int16_t_s_s((g_120 ^ (((*l_214) = l_213) == l_215)), p_57)) <= (*g_26)))) == p_57), l_216)))) == p_57) ^ p_57) || g_17[0]);
                }
                else
                {
                    int **l_225 = &g_68;
                    if (((safe_mul_func_int8_t_s_s(p_57, (*g_170))) <= (l_221[1] <= g_167[2])))
                    {
                        int *l_222[3][4] = {{&l_157,&l_157,&g_17[0],&l_157},{&l_157,&g_17[2],&g_17[2],&l_157},{&g_17[2],&l_157,&g_17[2],&g_17[2]}};
                        int i, j;
                        l_222[0][2] = ((*l_197) = (void*)0);
                        l_238 = (safe_mod_func_int32_t_s_s((((*g_170) <= p_58) >= g_163[1][1][5]), p_57));
                        l_239[5][0][2] = (*g_14);
                        if (p_58)
                            continue;
                    }
                    else
                    {
                        unsigned **l_242[10][9] = {{&g_151,&g_151,(void*)0,(void*)0,&g_151,&g_151,(void*)0,(void*)0,&g_151},{&l_138,&l_138,&l_138,&l_138,&l_138,&l_138,&l_138,&l_138,&l_138},{&g_151,(void*)0,(void*)0,&g_151,&g_151,(void*)0,(void*)0,&g_151,&g_151},{&g_139,&l_138,&g_139,&l_138,&g_139,&l_138,&g_139,&l_138,&g_139},{&g_151,&g_151,(void*)0,(void*)0,&g_151,&g_151,(void*)0,(void*)0,&g_151},{&l_138,&l_138,&l_138,&l_138,&l_138,&l_138,&l_138,&l_138,&l_138},{&g_151,(void*)0,(void*)0,&g_151,&g_151,(void*)0,(void*)0,&g_151,&g_151},{&g_139,&l_138,&g_139,&l_138,&g_139,&l_138,&g_139,&l_138,&g_139},{&g_151,&g_151,(void*)0,(void*)0,&g_151,&g_151,(void*)0,(void*)0,&g_151},{&l_138,&l_138,&l_138,&l_138,&l_138,&l_138,&l_138,&l_138,&l_138}};
                        int i, j;
                        (*l_225) = (*g_14);
                        g_17[0] = ((safe_lshift_func_uint8_t_u_s((*g_170), p_58)) < (g_167[2] != (&g_151 == l_242[8][0])));
                    }
                    for (g_171 = 0; (g_171 <= 1); g_171 += 1)
                    {
                        int *l_244 = (void*)0;
                        int i;
                        l_243 = &l_157;
                        (*l_225) = l_244;
                        (*l_225) = (*g_14);
                        if (l_221[g_171])
                            break;
                    }
                    (*l_197) = (void*)0;
                    for (g_22 = 9; (g_22 >= 1); g_22 -= 1)
                    {
                        return g_25[5][0][0];
                    }
                }
                if (p_58)
                {
                    int *l_249 = &g_17[0];
                    if (p_57)
                        break;
                    l_131 = (void*)0;
                    if (p_57)
                    {
                        volatile unsigned short ***l_248 = &g_245;
                        l_131 = (*g_14);
                        if (p_57)
                            break;
                        (*l_248) = g_245;
                        l_249 = l_249;
                    }
                    else
                    {
                        unsigned l_250 = 1UL;
                        l_250 = (*l_249);
                    }
                }
                else
                {
                    (*l_197) = (*g_14);
                }
            }
            l_144 = (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((*l_172) = 0UL), 5)) < (safe_lshift_func_uint16_t_u_u(p_57, 3))), ((safe_add_func_uint8_t_u_u(((*l_259) = 255UL), g_247[1][3])) || g_5)));
            for (g_27 = 1; (g_27 >= 0); g_27 -= 1)
            {
                int l_260 = (-1L);
                (*l_197) = &l_157;
                for (g_171 = 0; (g_171 <= 1); g_171 += 1)
                {
                    int i, j, k;
                    if (g_163[g_27][(g_171 + 7)][g_171])
                        break;
                    l_260 = (**g_14);
                }
                for (l_144 = 0; (l_144 <= 1); l_144 += 1)
                {
                    char l_269 = 0L;
                    unsigned l_270 = 0x19CB782CL;
                    for (p_58 = 0; (p_58 <= 1); p_58 += 1)
                    {
                        short *l_268 = &g_25[9][1][0];
                        (*l_197) = l_261;
                        l_269 = (safe_mul_func_uint16_t_u_u((**g_245), ((safe_mod_func_uint8_t_u_u(l_260, ((safe_lshift_func_uint16_t_u_u((65531UL && 1UL), (**l_197))) && 0x9CL))) | (((*l_268) = p_57) >= 65527UL))));
                    }
                    (*l_197) = &l_157;
                    (*l_197) = (*g_14);
                    if (l_270)
                        continue;
                }
            }
        }
    }
    else
    {
        int **l_271[4][9][2] = {{{&g_68,&g_68},{(void*)0,&g_68},{&g_68,(void*)0},{&g_68,&g_68},{(void*)0,&g_68},{&g_68,(void*)0},{&g_68,&g_68},{(void*)0,&g_68},{&g_68,(void*)0}},{{&g_68,&g_68},{(void*)0,&g_68},{&g_68,(void*)0},{&g_68,&g_68},{(void*)0,&g_68},{&g_68,(void*)0},{&g_68,&g_68},{(void*)0,&g_68},{&g_68,(void*)0}},{{&g_68,&g_68},{(void*)0,&g_68},{&g_68,(void*)0},{&g_68,&g_68},{(void*)0,&g_68},{&g_68,(void*)0},{&g_68,&g_68},{(void*)0,&g_68},{&g_68,(void*)0}},{{&g_68,&g_68},{(void*)0,&g_68},{&g_68,(void*)0},{&g_68,&g_68},{(void*)0,&g_68},{&g_68,(void*)0},{&g_68,&g_68},{(void*)0,&g_68},{&g_68,(void*)0}}};
        int ***l_272 = &l_271[1][1][1];
        int i, j, k;
        (*l_131) = ((*l_261) = (0x50L < func_59(&l_131, (*g_26), &l_131, g_236, (*l_261))));
        l_131 = (*g_14);
        l_131 = &l_157;
        (*l_131) = (safe_lshift_func_int16_t_s_s(((*g_26) = l_275), 9));
    }
    return p_57;
}







static int func_59(int ** p_60, short p_61, int ** p_62, unsigned p_63, short p_64)
{
    int *l_67 = &g_5;
    short *l_69 = &g_27;
    int l_80 = 0x6C8CEE69L;
    if ((l_67 == (g_68 = (*p_62))))
    {
        char l_74 = 2L;
        int *l_81 = &l_80;
        int l_99 = 0xB4649573L;
        unsigned short *l_118 = (void*)0;
        unsigned short *l_119 = &g_120;
        int *l_125[5];
        unsigned l_126 = 4294967293UL;
        int i;
        for (i = 0; i < 5; i++)
            l_125[i] = (void*)0;
        if ((l_69 == &g_22))
        {
            int **l_70 = &g_68;
            int *l_71 = &g_17[1];
            int l_100[5];
            int i;
            for (i = 0; i < 5; i++)
                l_100[i] = (-1L);
            l_71 = ((*l_70) = (void*)0);
            for (p_61 = (-30); (p_61 != (-23)); p_61 = safe_add_func_int32_t_s_s(p_61, 1))
            {
                char l_75 = 0x59L;
                int *l_82 = &g_17[1];
                if ((l_75 = (l_74 && g_27)))
                {
                    return (**p_62);
                }
                else
                {
                    for (p_64 = 0; (p_64 <= (-1)); p_64 = safe_sub_func_uint32_t_u_u(p_64, 2))
                    {
                        (*l_70) = (*p_60);
                        if ((**p_60))
                            continue;
                        if ((**p_62))
                            break;
                    }
                    for (g_27 = (-16); (g_27 > (-8)); g_27 = safe_add_func_int8_t_s_s(g_27, 3))
                    {
                        l_80 = (**p_60);
                        (*l_70) = l_81;
                    }
                    l_82 = (*g_14);
                }
                (*l_70) = (*p_60);
                (*l_70) = l_82;
            }
            for (p_61 = 0; (p_61 == 13); p_61++)
            {
                unsigned char l_85 = 0xC1L;
                int l_86 = 0x8A1C32FDL;
                int ***l_94[8][3][7] = {{{(void*)0,&l_70,&l_70,(void*)0,&g_14,&l_70,&l_70},{(void*)0,&g_14,&g_14,&l_70,&g_14,&g_14,(void*)0},{&g_14,&g_14,&g_14,&g_14,&l_70,&l_70,&l_70}},{{&g_14,&l_70,(void*)0,&l_70,(void*)0,&l_70,&g_14},{&l_70,(void*)0,&l_70,&g_14,&l_70,&g_14,&l_70},{&l_70,&g_14,&l_70,&l_70,&g_14,&l_70,&g_14}},{{&g_14,(void*)0,&g_14,&l_70,&g_14,&g_14,(void*)0},{&g_14,(void*)0,(void*)0,(void*)0,(void*)0,&l_70,(void*)0},{(void*)0,(void*)0,&l_70,&l_70,&g_14,&g_14,&l_70}},{{(void*)0,&l_70,&g_14,&g_14,&l_70,&l_70,&l_70},{(void*)0,(void*)0,&g_14,(void*)0,(void*)0,&g_14,(void*)0},{&l_70,&g_14,(void*)0,&g_14,(void*)0,&l_70,&l_70}},{{&g_14,&l_70,&g_14,&l_70,&g_14,(void*)0,&g_14},{(void*)0,&g_14,(void*)0,&g_14,&g_14,(void*)0,(void*)0},{&g_14,&g_14,&g_14,(void*)0,&l_70,&g_14,&g_14}},{{&g_14,&g_14,&g_14,&g_14,&l_70,&l_70,&g_14},{&g_14,&g_14,&g_14,&l_70,&g_14,&l_70,&g_14},{&l_70,&g_14,(void*)0,&l_70,&g_14,&g_14,&g_14}},{{&g_14,(void*)0,&g_14,&l_70,(void*)0,&l_70,&l_70},{&g_14,&g_14,&g_14,&g_14,(void*)0,&l_70,&g_14},{(void*)0,&g_14,&l_70,&g_14,&l_70,&g_14,&g_14}},{{&g_14,&l_70,(void*)0,&l_70,&g_14,(void*)0,&l_70},{&g_14,&l_70,&l_70,&g_14,&g_14,&g_14,&l_70},{&l_70,&g_14,&l_70,&l_70,(void*)0,&g_14,&l_70}}};
                int ****l_93 = &l_94[5][0][5];
                int i, j, k;
                l_86 = (g_25[5][2][0] >= l_85);
                (*l_81) = (*g_15);
                l_100[2] = (safe_sub_func_int16_t_s_s((*g_26), (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((*l_81) | (**g_14)), (0x3243D007L ^ ((((((*l_93) = &g_14) != &l_70) == ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(g_25[0][4][1], g_25[8][0][1])), g_17[2])) & l_99)) == 65535UL) && 4UL)))) <= 65535UL), (*l_67)))));
            }
            (*l_70) = (*p_60);
        }
        else
        {
            int *****l_105[8] = {&g_103,&g_103,&g_103,&g_103,&g_103,&g_103,&g_103,&g_103};
            unsigned *l_106 = (void*)0;
            unsigned *l_107 = &g_108;
            int i;
            g_17[4] = (!(l_80 = (safe_lshift_func_uint16_t_u_s(g_27, (((g_103 = g_103) == (void*)0) | ((*l_107) = g_25[8][0][1]))))));
            for (l_99 = (-26); (l_99 >= (-6)); l_99++)
            {
                return (**p_62);
            }
        }
        l_126 = ((safe_unary_minus_func_uint8_t_u((((*l_81) && ((*l_81) = ((*l_119) = (safe_sub_func_int16_t_s_s((&g_108 != l_67), ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(0x13L, (*l_81))) != g_25[5][0][0]), (*g_26))) | (*g_26))))))) | (((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((*g_26), l_74)), (*l_67))) != g_22) < (**p_62))))) && 0x9668BEEEL);
        (*l_81) = ((g_108 != 1UL) && 0x7EL);
    }
    else
    {
        int *l_129 = &g_17[0];
        (*l_129) = (safe_lshift_func_int16_t_s_u((*g_26), 6));
    }
    return (**p_62);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_22, "g_22", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_25[i][j][k], "g_25[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_163[i][j][k], "g_163[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_167[i], "g_167[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_247[i][j], "g_247[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_288[i], "g_288[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_599[i], "g_599[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_659, "g_659", print_hash_value);
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    transparent_crc(g_849, "g_849", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
