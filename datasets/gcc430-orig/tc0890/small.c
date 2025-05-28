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


union U0 {
   unsigned f0;
   signed f1 : 22;
   char * f2;
};


static unsigned char g_2 = 1UL;
static int g_5 = 0x6FF55E00L;
static int g_20[8] = {0x176DF7E4L,0x176DF7E4L,0x176DF7E4L,0x176DF7E4L,0x176DF7E4L,0x176DF7E4L,0x176DF7E4L,0x176DF7E4L};
static unsigned char g_25 = 0UL;
static char g_34 = 0xF2L;
static unsigned short g_43 = 0x2143L;
static short g_47 = (-4L);
static unsigned short g_52 = 4UL;
static unsigned short *g_51 = &g_52;
static unsigned g_75 = 0x4B2CBD72L;
static int *g_88 = (void*)0;
static int *g_89 = &g_20[2];
static unsigned char g_99 = 0xF9L;
static unsigned g_106 = 4294967293UL;
static unsigned short g_114 = 65535UL;
static unsigned char g_116[2] = {0x43L,0x43L};
static unsigned char g_118 = 0xA1L;
static short g_136 = 0x162DL;
static unsigned short g_138[8][7] = {{65534UL,65534UL,0x9897L,0xDBB8L,6UL,0x9897L,6UL},{0xDBB8L,0xBA1AL,0xBA1AL,0xDBB8L,65532UL,0xEE84L,0xDBB8L},{0xEE84L,6UL,65532UL,65532UL,6UL,0xEE84L,0xBA1AL},{6UL,0xDBB8L,0x9897L,65534UL,65534UL,0x9897L,0xDBB8L},{6UL,0xBA1AL,0xEE84L,6UL,65532UL,65532UL,6UL},{0xEE84L,65532UL,0x9897L,65535UL,65532UL,65535UL,65535UL},{65532UL,0xEE84L,0xDBB8L,0xEE84L,65532UL,0xDBB8L,0xBA1AL},{0xBA1AL,65535UL,65535UL,0xBA1AL,65535UL,65535UL,0xBA1AL}};
static int g_153 = 1L;
static unsigned g_213 = 0x33E49B17L;
static unsigned short g_254 = 0UL;
static unsigned g_312 = 0x495DDBA1L;
static char g_363 = 0x39L;
static int **g_404[3][9][5] = {{{&g_88,&g_89,&g_88,&g_88,&g_88},{&g_88,&g_88,&g_89,&g_88,&g_88},{&g_88,&g_88,&g_89,&g_89,&g_89},{&g_88,&g_88,&g_88,&g_89,&g_89},{&g_89,&g_88,&g_88,&g_88,&g_89},{&g_89,&g_88,&g_88,&g_89,&g_88},{&g_88,&g_89,&g_88,&g_89,&g_88},{&g_89,&g_89,&g_88,&g_89,&g_89},{&g_89,&g_88,&g_89,&g_89,&g_89}},{{&g_88,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_88,&g_88,&g_88,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_88},{&g_89,&g_88,&g_88,&g_88,&g_88},{&g_89,&g_89,&g_89,&g_88,&g_89},{&g_89,&g_88,&g_88,&g_89,&g_88},{&g_88,&g_89,&g_89,&g_88,&g_89},{&g_89,&g_89,&g_88,&g_88,&g_88}},{{&g_88,&g_88,&g_89,&g_88,&g_88},{&g_89,&g_89,&g_89,&g_88,&g_88},{&g_89,&g_88,&g_88,&g_88,&g_88},{&g_88,&g_88,&g_89,&g_89,&g_88},{&g_88,&g_88,&g_88,&g_89,&g_88},{&g_88,&g_88,&g_89,&g_88,&g_88},{&g_88,&g_89,&g_89,&g_89,&g_89},{&g_88,&g_89,&g_88,&g_89,&g_88},{&g_89,&g_89,&g_88,&g_88,&g_89}}};
static int ***g_403 = &g_404[1][1][0];
static int ****g_402 = &g_403;
static char g_486 = 0xAFL;
static unsigned short g_581 = 0xDDABL;
static union U0 g_618 = {0x0F06AAE2L};
static union U0 *g_617 = &g_618;
static unsigned g_681[9] = {4294967295UL,1UL,4294967295UL,1UL,4294967295UL,1UL,4294967295UL,1UL,4294967295UL};
static char g_707 = (-4L);
static char *g_749 = (void*)0;
static int *****g_839 = &g_402;
static short g_906 = 0x3315L;
static int *g_910 = (void*)0;
static int **g_984 = &g_89;
static int g_1019 = 9L;
static unsigned *g_1057 = &g_681[4];
static unsigned **g_1056 = &g_1057;
static unsigned **g_1058 = &g_1057;
static unsigned g_1060 = 9UL;
static short g_1092 = 0L;
static union U0 **g_1141 = &g_617;
static union U0 ***g_1140[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static unsigned char *g_1215 = (void*)0;
static unsigned char **g_1214[2] = {&g_1215,&g_1215};
static short g_1243 = 1L;
static unsigned char g_1246 = 255UL;
static int g_1277[1][10] = {{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)}};
static unsigned short **g_1301[3] = {(void*)0,(void*)0,(void*)0};
static unsigned short ***g_1300[10] = {&g_1301[0],&g_1301[2],&g_1301[0],&g_1301[0],&g_1301[0],&g_1301[0],&g_1301[0],&g_1301[0],&g_1301[0],&g_1301[0]};
static short g_1351 = 0x137CL;
static short *g_1369 = &g_47;
static short **g_1368 = &g_1369;
static union U0 ****g_1379[7] = {&g_1140[2],&g_1140[2],&g_1140[2],&g_1140[2],&g_1140[2],&g_1140[2],&g_1140[2]};
static unsigned g_1452 = 4294967290UL;
static unsigned char g_1484 = 0xD6L;
static int g_1537[1] = {(-1L)};
static unsigned char g_1544 = 247UL;
static unsigned short g_1550 = 0UL;
static unsigned ***g_1558 = &g_1058;
static unsigned ****g_1557 = &g_1558;
static unsigned char g_1564[4] = {255UL,255UL,255UL,255UL};
static int *g_1569 = &g_1537[0];
static int *g_1700 = &g_1537[0];
static short g_1769 = (-10L);
static unsigned g_1771[8] = {3UL,0UL,3UL,0UL,3UL,0UL,3UL,0UL};
static unsigned short g_1820[2] = {0xC7D9L,0xC7D9L};
static union U0 ****g_1860 = &g_1140[7];
static int *g_1878 = &g_1019;
static unsigned short g_1893 = 65533UL;
static unsigned char g_1895 = 6UL;
static unsigned g_1936 = 0UL;
static unsigned *g_2022 = (void*)0;
static unsigned **g_2021 = &g_2022;
static unsigned ***g_2020 = &g_2021;
static int g_2043 = (-1L);



static short func_1(void);
static unsigned char func_6(int * p_7, char * p_8, char * p_9, int * p_10, int * p_11);
static char * func_13(unsigned short p_14, unsigned p_15);
static unsigned func_30(short p_31, int ** p_32);
static int ** func_35(int * p_36);
static int * func_37(int p_38, unsigned p_39, unsigned p_40, char * p_41);
static unsigned short func_48(unsigned short * p_49, unsigned char p_50);
static unsigned char func_53(unsigned p_54, unsigned short * p_55, unsigned p_56);
static unsigned short func_59(unsigned p_60, unsigned short p_61, union U0 p_62);
static unsigned short func_80(char * p_81, int ** p_82, char * p_83, int * p_84, int * p_85);
static short func_1(void)
{
    int *l_3 = (void*)0;
    int *l_4 = &g_5;
    int **l_12 = &l_3;
    unsigned short l_1565 = 65530UL;
    char *l_1566[5];
    int *l_1568 = &g_1537[0];
    int **l_1567[4][10][5] = {{{&g_910,&l_4,&l_4,&g_910,(void*)0},{&l_4,&l_1568,&g_910,(void*)0,&l_4},{(void*)0,&g_910,(void*)0,&g_910,&g_910},{&l_4,&l_1568,&g_910,(void*)0,&l_1568},{&g_910,&g_910,&l_4,&l_4,(void*)0},{&l_4,&l_1568,(void*)0,(void*)0,&l_1568},{(void*)0,&l_4,(void*)0,&l_4,&g_910},{&l_4,&l_1568,(void*)0,(void*)0,&l_4},{&g_910,&l_4,&l_4,&g_910,(void*)0},{&l_4,&l_1568,&g_910,(void*)0,&l_4}},{{(void*)0,&g_910,(void*)0,&g_910,&g_910},{&l_4,&l_1568,&g_910,(void*)0,&l_1568},{&g_910,&g_910,&l_4,&l_4,(void*)0},{&l_4,&l_1568,&l_4,&l_4,&l_4},{&l_4,(void*)0,(void*)0,&l_1568,(void*)0},{(void*)0,&g_910,&l_4,&l_1568,&l_4},{&l_4,(void*)0,(void*)0,&l_1568,&g_910},{(void*)0,&l_4,&g_910,&l_4,&l_4},{&l_4,(void*)0,(void*)0,&l_1568,(void*)0},{&l_4,&g_910,&g_910,&l_1568,&l_4}},{{&l_4,(void*)0,(void*)0,&l_1568,&g_910},{&l_4,&l_4,&l_4,&l_4,&l_4},{&l_4,(void*)0,(void*)0,&l_1568,(void*)0},{(void*)0,&g_910,&l_4,&l_1568,&l_4},{&l_4,(void*)0,(void*)0,&l_1568,&g_910},{(void*)0,&l_4,&g_910,&l_4,&l_4},{&l_4,(void*)0,(void*)0,&l_1568,(void*)0},{&l_4,&g_910,&g_910,&l_1568,&l_4},{&l_4,(void*)0,(void*)0,&l_1568,&g_910},{&l_4,&l_4,&l_4,&l_4,&l_4}},{{&l_4,(void*)0,(void*)0,&l_1568,(void*)0},{(void*)0,&g_910,&l_4,&l_1568,&l_4},{&l_4,(void*)0,(void*)0,&g_910,(void*)0},{&l_1568,&l_1568,&l_1568,&l_1568,&g_910},{&g_910,&l_1568,&g_910,&g_910,&l_4},{&l_1568,&l_4,&l_1568,&l_1568,&l_1568},{&g_910,&l_1568,(void*)0,&l_4,(void*)0},{&l_1568,&l_1568,&l_1568,&l_1568,&l_1568},{&g_910,&l_1568,&g_910,&l_4,&l_4},{&l_1568,&l_4,&l_1568,&l_1568,&g_910}}};
    unsigned short *l_2097 = &g_254;
    union U0 l_2103 = {1UL};
    unsigned l_2104 = 0x9DA8BC11L;
    unsigned l_2110 = 0x09CDC5F2L;
    int l_2111[7][5][4] = {{{(-10L),(-1L),0xE73AA920L,1L},{7L,(-10L),7L,2L},{0L,0x7DDE3CAAL,0L,(-1L)},{0xD62AC960L,7L,1L,0x7DDE3CAAL},{0L,(-3L),1L,0x27E72231L}},{{0xD62AC960L,4L,0L,0L},{0L,0L,7L,0L},{7L,0L,0xE73AA920L,(-10L)},{(-10L),(-4L),0L,0xE73AA920L},{0L,(-4L),0x3D02EC5AL,(-10L)}},{{(-4L),0L,2L,0L},{1L,0L,0x7DDE3CAAL,0L},{2L,4L,(-3L),0x27E72231L},{0L,(-3L),(-4L),0x7DDE3CAAL},{0L,7L,4L,0L}},{{(-3L),(-1L),(-1L),(-3L)},{1L,0xD50C94C2L,(-3L),0x3D02EC5AL},{7L,0L,0L,0x27E72231L},{(-4L),0L,0xE73AA920L,0x27E72231L},{0xD50C94C2L,0L,2L,0x3D02EC5AL}},{{0xD62AC960L,0xD50C94C2L,0xD62AC960L,(-3L)},{0xE73AA920L,(-1L),(-10L),0L},{0x27E72231L,0xD62AC960L,0x3D02EC5AL,(-1L)},{1L,4L,0x3D02EC5AL,0L},{0x27E72231L,0x7DDE3CAAL,(-10L),(-10L)}},{{0xE73AA920L,0xE73AA920L,0xD62AC960L,1L},{0xD62AC960L,1L,2L,0xD50C94C2L},{0xD50C94C2L,7L,0xE73AA920L,2L},{(-4L),7L,0L,0xD50C94C2L},{7L,1L,(-3L),1L}},{{1L,0xE73AA920L,(-1L),(-10L)},{(-3L),0x7DDE3CAAL,4L,0L},{(-10L),4L,7L,(-1L)},{(-10L),0xD62AC960L,4L,0L},{(-3L),(-1L),(-1L),(-3L)}}};
    unsigned short l_2120 = 0x6B31L;
    unsigned short l_2121[5] = {0x08FFL,0x08FFL,0x08FFL,0x08FFL,0x08FFL};
    unsigned l_2122 = 0x8AC817A2L;
    char l_2124 = 0x32L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1566[i] = &g_363;
    (*l_4) &= g_2;
    if ((0UL < ((*l_2097) = ((*g_51) = (g_5 != func_6(((*l_12) = &g_5), func_13(g_5, (*l_4)), &g_363, (g_1569 = func_37(g_1537[0], g_1564[0], l_1565, l_1566[1])), &g_1537[0]))))))
    {
        unsigned short *l_2098 = &g_43;
        int l_2099 = 6L;
        (*l_4) ^= (((*g_51) ^ (*g_51)) != 0x1EB69BC1L);
        (*l_1568) &= 0x80C0FA70L;
        (*l_1568) ^= (*l_3);
    }
    else
    {
        unsigned char l_2100 = 0xFEL;
        (***g_402) = func_37(g_1351, (***g_1558), (**g_1056), &g_486);
        ++l_2100;
        (*g_1878) |= ((func_59((&g_1379[6] != &g_1860), (*l_4), l_2103) != 2L) == l_2100);
    }
    (*g_984) = func_37((&l_3 == &l_3), (*l_3), ((((*g_1878) ^= ((*l_1568) &= (*l_4))) < (l_2104 = (g_106 >= 0L))) > ((l_2111[2][0][0] = ((safe_unary_minus_func_uint32_t_u((safe_add_func_uint8_t_u_u(((*g_51) == (**g_1368)), (safe_sub_func_uint16_t_u_u(l_2110, (*g_1369))))))) || 9L)) || (**l_12))), &g_707);
    (*g_1878) = ((safe_mul_func_int8_t_s_s(((--(*g_51)) ^ (safe_add_func_int8_t_s_s(((**l_12) = g_1537[0]), (*l_1568)))), ((**g_1368) == (safe_mul_func_int8_t_s_s(l_2120, (((0x4E56L ^ ((((**g_1368) & (l_2121[4] != ((l_2122 > (safe_unary_minus_func_uint8_t_u((l_2124 ^ 0xD254L)))) != g_1452))) >= 0x407CL) == g_25)) || (*l_1568)) & 0L)))))) != (*l_1568));
    return (*g_1369);
}







static unsigned char func_6(int * p_7, char * p_8, char * p_9, int * p_10, int * p_11)
{
    short l_1583 = 5L;
    unsigned short *l_1627 = &g_138[0][0];
    int l_1655 = 8L;
    int l_1660[4][10][6] = {{{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)}},{{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)}},{{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)}},{{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)},{0x540C7E40L,0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L},{0x540C7E40L,(-7L),(-7L),0x540C7E40L,0x540C7E40L,(-7L)}}};
    unsigned l_1662 = 0xED88591BL;
    union U0 *****l_1673 = &g_1379[3];
    int l_1782 = 0L;
    unsigned *l_1815 = (void*)0;
    short **l_1904 = &g_1369;
    unsigned short *l_1956 = &g_1820[1];
    int *****l_2013 = &g_402;
    unsigned char l_2084[10][1][2] = {{{0xEBL,0xEBL}},{{0x6BL,0xEBL}},{{0xEBL,0x6BL}},{{0xEBL,0xEBL}},{{0x6BL,0xEBL}},{{0xEBL,0x6BL}},{{0xEBL,0xEBL}},{{0x6BL,0xEBL}},{{0xEBL,0x6BL}},{{0xEBL,0xEBL}}};
    int *l_2089 = &g_20[2];
    int *l_2090 = &l_1655;
    int *l_2091 = &g_20[2];
    int *l_2092 = &g_20[2];
    int *l_2093[7][6][6] = {{{&g_1019,&g_1537[0],&g_1537[0],&g_1537[0],&g_5,&g_1537[0]},{(void*)0,&g_1537[0],&g_1537[0],&l_1660[0][4][4],&g_1537[0],&l_1660[2][6][0]},{&g_1019,&g_1537[0],&g_1019,&g_1537[0],&g_20[2],&g_20[4]},{&g_20[2],&l_1655,&g_1537[0],&l_1660[1][8][3],&g_20[2],(void*)0},{(void*)0,(void*)0,&g_1537[0],&l_1655,(void*)0,&l_1655},{&g_1537[0],&g_5,&g_20[2],&g_1537[0],&l_1655,&g_1019}},{{&g_5,&g_5,&g_20[2],&g_20[2],&g_20[7],&g_20[1]},{(void*)0,&l_1660[2][6][0],(void*)0,&l_1655,&g_1537[0],&g_1537[0]},{&l_1660[2][7][1],&g_1537[0],&l_1660[2][6][0],&g_5,(void*)0,(void*)0},{&g_1019,(void*)0,&g_20[6],&l_1660[2][4][3],&l_1655,(void*)0},{&l_1660[1][1][0],&l_1660[3][1][4],(void*)0,(void*)0,&l_1655,(void*)0},{&g_20[2],(void*)0,(void*)0,&g_1537[0],&g_5,(void*)0}},{{&g_20[5],&g_1019,&g_20[2],(void*)0,&l_1660[2][6][0],&g_1537[0]},{&g_1019,&g_1019,&l_1655,&l_1660[2][6][0],&l_1660[2][6][0],&l_1655},{&l_1660[3][7][3],&l_1660[3][7][3],&g_5,&l_1660[2][4][3],(void*)0,&g_20[2]},{&g_20[2],&l_1660[2][6][0],&g_20[2],&g_20[2],&l_1660[0][4][4],&g_5},{&g_20[2],&g_20[2],&g_20[2],&l_1655,&l_1660[3][7][3],&g_20[2]},{(void*)0,&l_1655,&g_5,&g_20[0],&l_1660[1][6][1],&l_1655}},{{&g_20[0],&l_1660[1][6][1],&l_1655,&g_20[2],&l_1660[2][6][0],&g_1537[0]},{&g_20[7],&l_1655,&g_20[2],(void*)0,&g_5,(void*)0},{&g_5,(void*)0,(void*)0,&l_1660[0][6][5],&l_1660[1][8][3],(void*)0},{(void*)0,&g_5,(void*)0,&l_1660[1][1][0],&g_1537[0],&g_1537[0]},{&g_1537[0],&g_1537[0],&g_1019,&l_1655,&g_1537[0],&l_1660[1][1][0]},{&l_1660[2][6][0],&g_20[4],&g_20[2],&g_1537[0],&g_5,&l_1660[2][6][0]}},{{&g_20[2],&l_1660[1][8][3],&g_1537[0],&l_1655,&g_20[2],&g_1537[0]},{&g_20[3],&g_1537[0],&g_5,(void*)0,&g_5,&g_1019},{&g_1537[0],&g_1019,&g_1537[0],&g_20[1],(void*)0,&l_1655},{(void*)0,&g_1019,&g_20[2],&g_5,&l_1655,&g_1019},{&g_20[2],&l_1660[0][2][5],&g_1537[0],&l_1660[3][7][3],&g_1019,&g_20[2]},{&l_1660[2][6][0],(void*)0,&l_1655,&l_1660[2][8][3],&g_1537[0],&g_1537[0]}},{{&l_1660[3][7][3],(void*)0,(void*)0,(void*)0,&l_1660[2][6][0],(void*)0},{&l_1660[3][1][4],&g_20[2],&g_1537[0],&l_1655,(void*)0,&g_1537[0]},{&l_1660[2][6][0],&g_20[4],&g_1019,&l_1660[2][6][0],(void*)0,&l_1660[2][6][0]},{&g_1537[0],&g_20[2],&g_1537[0],&g_20[3],&g_1019,&l_1655},{(void*)0,&g_1537[0],(void*)0,&g_1537[0],(void*)0,&l_1660[2][6][0]},{&g_1537[0],&l_1660[0][6][5],&l_1655,&g_1537[0],&g_20[6],&g_20[3]}},{{(void*)0,&g_1019,(void*)0,&g_20[3],&g_1537[0],&g_1019},{&g_1537[0],&l_1660[0][8][1],&g_20[2],(void*)0,(void*)0,&l_1655},{&g_1537[0],&g_1019,&l_1660[2][4][3],&g_5,&l_1655,&l_1660[0][6][2]},{&l_1660[2][6][0],(void*)0,&g_1537[0],&l_1660[3][1][4],&g_1537[0],&l_1660[2][6][0]},{&g_1537[0],&g_1019,&g_1537[0],&g_1019,&g_1537[0],&g_20[2]},{&g_20[2],&l_1655,&l_1660[3][1][4],&g_1537[0],&l_1660[2][6][0],(void*)0}}};
    unsigned l_2094 = 0UL;
    int i, j, k;
    for (g_99 = 0; (g_99 <= 1); g_99 += 1)
    {
        unsigned char l_1577 = 0xEDL;
        int l_1584 = 0xD6A3BBE9L;
        unsigned short *l_1588 = &g_52;
        int l_1626 = 0xCBA6B844L;
        unsigned short **l_1633 = (void*)0;
        int l_1643[1][4][3] = {{{(-9L),7L,7L},{7L,0xD6AEADC2L,(-1L)},{(-9L),0xD6AEADC2L,(-9L)},{(-1L),7L,(-1L)}}};
        int l_1658 = 0L;
        unsigned char **l_1681 = &g_1215;
        int l_1705 = 1L;
        union U0 *l_1724 = (void*)0;
        unsigned *l_1726 = &g_681[7];
        char l_1734 = 1L;
        int l_1770 = 0x4101AC39L;
        unsigned l_1844 = 1UL;
        int *****l_1855 = &g_402;
        short ***l_1911 = &g_1368;
        int i, j, k;
        for (g_1550 = 0; (g_1550 <= 1); g_1550 += 1)
        {
            int l_1570 = 0xBC804EEEL;
            unsigned ***l_1580 = (void*)0;
            unsigned short *l_1586 = &g_114;
            int l_1625[8][3] = {{0x7DC3925CL,0x7DC3925CL,0x7DC3925CL},{4L,0xBACC42CDL,4L},{0x7DC3925CL,0x7DC3925CL,0x7DC3925CL},{4L,0xBACC42CDL,4L},{0x7DC3925CL,0x7DC3925CL,0x7DC3925CL},{4L,0xBACC42CDL,4L},{0x7DC3925CL,0x7DC3925CL,0x7DC3925CL},{4L,0xBACC42CDL,4L}};
            unsigned short **l_1635[2];
            int l_1656 = 0x50690801L;
            int l_1659 = 0xF8A81974L;
            unsigned char l_1697 = 0x8FL;
            int l_1701 = 0L;
            int l_1703 = 0L;
            int l_1704 = (-7L);
            int l_1707 = 0xFC3B21B8L;
            int l_1711 = 1L;
            int l_1712 = 0L;
            int l_1796[9][7] = {{0x4EC52077L,(-1L),0x4EC52077L,0x4EC52077L,(-1L),0x4EC52077L,0x4EC52077L},{(-1L),(-1L),2L,(-1L),(-1L),2L,(-1L)},{(-1L),0x4EC52077L,0x4EC52077L,(-1L),0x4EC52077L,0x4EC52077L,(-1L)},{0x4EC52077L,(-1L),0x4EC52077L,0x4EC52077L,(-1L),0x4EC52077L,0x4EC52077L},{(-1L),(-1L),2L,(-1L),0x4EC52077L,(-1L),0x4EC52077L},{0x4EC52077L,2L,2L,0x4EC52077L,2L,2L,0x4EC52077L},{2L,0x4EC52077L,2L,2L,0x4EC52077L,2L,2L},{0x4EC52077L,0x4EC52077L,(-1L),0x4EC52077L,0x4EC52077L,(-1L),0x4EC52077L},{0x4EC52077L,2L,2L,0x4EC52077L,2L,2L,0x4EC52077L}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_1635[i] = &g_51;
        }
        for (g_34 = 0; (g_34 > 22); ++g_34)
        {
            unsigned *l_1810 = &g_1060;
            int l_1842 = (-1L);
            unsigned short *l_1874 = &g_114;
            union U0 **l_1881[5] = {&l_1724,&l_1724,&l_1724,&l_1724,&l_1724};
            unsigned l_1894 = 0x23B32D86L;
            int l_1924 = 0xB573EE99L;
            int i;
        }
        (*p_11) = ((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(l_1655, l_1734)), 2)) || (safe_add_func_uint8_t_u_u(((!0UL) > l_1655), ((*p_9) = (*p_8)))));
    }
    for (g_254 = 2; (g_254 <= 8); g_254 += 1)
    {
        unsigned short *l_1954 = &g_1893;
        unsigned short **l_1955 = &l_1627;
        unsigned char l_1957[3];
        int **l_1965 = (void*)0;
        char *l_1978 = &g_363;
        int l_1979 = 0x964755D8L;
        int l_1983 = 0xD1A7B30DL;
        int l_1988 = 0L;
        int l_1989 = 0x6922139EL;
        int l_1993 = 0x56D2AD28L;
        int l_1996 = (-5L);
        int l_1997[7] = {(-7L),(-2L),(-2L),(-7L),(-2L),(-2L),(-7L)};
        unsigned char l_2004 = 0xD3L;
        char *l_2029 = (void*)0;
        char l_2042 = 0x2BL;
        unsigned l_2044 = 0xCE150337L;
        int *l_2080 = &l_1988;
        int *l_2081[3][7][7] = {{{&l_1660[2][6][0],&g_1537[0],&l_1660[2][6][0],&g_1537[0],&g_1537[0],(void*)0,(void*)0},{&g_1537[0],&g_1537[0],&l_1993,&g_1537[0],&g_1537[0],&l_1993,&l_1660[1][9][2]},{&l_1660[1][9][2],(void*)0,&g_1537[0],&l_1660[1][9][2],&g_1537[0],(void*)0,&l_1660[1][9][2]},{&l_1660[2][6][0],&l_1660[1][9][2],(void*)0,&g_1537[0],&l_1660[1][9][2],&g_1537[0],(void*)0},{&l_1660[1][9][2],&l_1660[1][9][2],&l_1993,&g_1537[0],&g_1537[0],&l_1993,&g_1537[0]},{&g_1537[0],(void*)0,(void*)0,&g_1537[0],&g_1537[0],&l_1660[2][6][0],&g_1537[0]},{&l_1660[2][6][0],&g_1537[0],&g_1537[0],&g_1537[0],&g_1537[0],&l_1660[2][6][0],(void*)0}},{{&g_1537[0],&g_1537[0],&l_1993,&l_1660[1][9][2],&g_1537[0],&l_1983,&l_1660[1][9][2]},{&g_1537[0],&l_1660[2][6][0],&g_1537[0],&g_1537[0],(void*)0,(void*)0,&g_1537[0]},{&g_1537[0],&l_1660[1][9][2],&g_1537[0],(void*)0,&l_1660[1][9][2],&l_1660[2][6][0],&l_1660[2][6][0]},{&l_1660[1][9][2],&g_1537[0],&l_1983,&g_1537[0],&l_1660[1][9][2],&l_1983,&g_1537[0]},{&g_1537[0],&l_1660[2][6][0],(void*)0,&g_1537[0],(void*)0,&l_1660[2][6][0],&g_1537[0]},{&g_1537[0],&g_1537[0],&l_1660[2][6][0],(void*)0,&g_1537[0],(void*)0,&l_1660[2][6][0]},{&g_1537[0],&g_1537[0],&l_1983,&l_1660[1][9][2],&g_1537[0],&l_1983,&g_1537[0]}},{{&l_1660[1][9][2],&l_1660[2][6][0],&l_1660[2][6][0],&l_1660[1][9][2],(void*)0,&g_1537[0],&l_1660[1][9][2]},{&g_1537[0],&g_1537[0],(void*)0,(void*)0,&g_1537[0],&g_1537[0],&l_1660[2][6][0]},{&g_1537[0],&l_1660[1][9][2],&l_1983,&g_1537[0],&g_1537[0],&l_1983,&l_1660[1][9][2]},{&g_1537[0],&l_1660[2][6][0],&g_1537[0],&g_1537[0],(void*)0,(void*)0,&g_1537[0]},{&g_1537[0],&l_1660[1][9][2],&g_1537[0],(void*)0,&l_1660[1][9][2],&l_1660[2][6][0],&l_1660[2][6][0]},{&l_1660[1][9][2],&g_1537[0],&l_1983,&g_1537[0],&l_1660[1][9][2],&l_1983,&g_1537[0]},{&g_1537[0],&l_1660[2][6][0],(void*)0,&g_1537[0],(void*)0,&l_1660[2][6][0],&g_1537[0]}}};
        char l_2082 = 1L;
        int l_2083[8] = {0xA83AB0ADL,0xA83AB0ADL,0xA83AB0ADL,0xA83AB0ADL,0xA83AB0ADL,0xA83AB0ADL,0xA83AB0ADL,0xA83AB0ADL};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1957[i] = 253UL;
        if ((((safe_add_func_int32_t_s_s((g_681[g_254] | (safe_add_func_int32_t_s_s((0x1E57L & (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((((((*l_1955) = l_1954) == l_1956) & func_30(((**l_1904) &= g_681[g_254]), (**g_402))) || (l_1660[1][6][1] >= g_681[g_254])) & l_1662) || g_681[g_254]), l_1655)), g_681[g_254]))), (*p_11)))), g_681[g_254])) != g_681[g_254]) < (*p_11)))
        {
            char *l_1962 = &g_363;
            int l_1968 = 0x56E836F1L;
            int l_1980 = (-1L);
            int l_1984 = 0x8795A787L;
            int l_1987 = (-7L);
            int l_1990 = 0x5D7B966FL;
            int l_1991[6] = {0x39272483L,(-1L),(-1L),0x39272483L,(-1L),(-1L)};
            unsigned *l_2002 = &g_213;
            unsigned l_2010 = 0x74F780C1L;
            int i;
            l_1957[1]--;
            (***g_402) = func_37(l_1957[1], (***g_1558), l_1662, &g_34);
            if ((*g_1700))
            {
                int l_1966 = 3L;
                int l_1967 = (-2L);
                int l_1992[2][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1992[i][j] = 0xF789552AL;
                }
                l_1655 |= ((*g_1878) &= ((safe_mod_func_uint16_t_u_u((l_1968 > l_1968), (*g_1369))) < l_1966));
                for (g_1351 = 2; (g_1351 >= 0); g_1351 -= 1)
                {
                    unsigned char *l_1977 = &g_1564[0];
                    int l_1982 = 0x5850FF4FL;
                    int l_1985 = 0L;
                    int l_1986 = (-8L);
                    int l_1994 = 0x17F10351L;
                    int l_1995[5][4][7] = {{{0xD51A3222L,(-8L),(-1L),0x890D0C0EL,0xD0F0CC01L,0xD0F0CC01L,0x890D0C0EL},{0x28C41097L,(-2L),0x28C41097L,0x7579D3B0L,(-1L),(-2L),0x7579D3B0L},{0xD51A3222L,0x901196E7L,(-3L),0x890D0C0EL,1L,0xFA9D866CL,0x890D0C0EL},{1L,0xEC8A075FL,0x28C41097L,1L,(-2L),(-2L),1L}},{{(-1L),0x901196E7L,(-1L),0xA10B39C7L,1L,0xD0F0CC01L,0xA10B39C7L},{1L,(-2L),3L,1L,(-1L),(-1L),1L},{0xD51A3222L,(-8L),(-1L),0x890D0C0EL,0xD0F0CC01L,0xD0F0CC01L,0x890D0C0EL},{0x28C41097L,(-2L),0x28C41097L,0x7579D3B0L,(-1L),(-2L),0x7579D3B0L}},{{0xD51A3222L,0x901196E7L,(-3L),0x890D0C0EL,1L,0xFA9D866CL,0x890D0C0EL},{1L,0xEC8A075FL,0x28C41097L,1L,(-2L),(-2L),1L},{(-1L),0x901196E7L,(-1L),0xA10B39C7L,1L,0xD0F0CC01L,0xA10B39C7L},{1L,(-2L),3L,1L,(-1L),0xE639D8A7L,(-2L)}},{{(-4L),0xD0F0CC01L,1L,0x77492D5AL,0xA10B39C7L,0xA10B39C7L,0x77492D5AL},{0xF3F16F8BL,(-1L),0xF3F16F8BL,1L,1L,0x7579D3B0L,1L},{(-4L),1L,0xA8DBE120L,0x77492D5AL,0x890D0C0EL,1L,0x77492D5AL},{(-7L),(-2L),0xF3F16F8BL,(-2L),0x7579D3B0L,0x7579D3B0L,(-2L)}},{{1L,1L,1L,(-7L),0x890D0C0EL,0xA10B39C7L,(-7L)},{(-7L),(-1L),0x676F6C70L,(-2L),1L,0xE639D8A7L,(-2L)},{(-4L),0xD0F0CC01L,1L,0x77492D5AL,0xA10B39C7L,0xA10B39C7L,0x77492D5AL},{0xF3F16F8BL,(-1L),0xF3F16F8BL,1L,1L,0x7579D3B0L,1L}}};
                    char l_1998 = 0x5FL;
                    int i, j, k;
                    if (g_138[(g_1351 + 2)][(g_1351 + 3)])
                        break;
                    p_10 = func_37((l_1662 > ((safe_rshift_func_uint8_t_u_s(func_30(((safe_mod_func_uint8_t_u_u(((*l_1977) &= ((-1L) >= ((*p_8) = ((**g_1368) > (((*p_11) = ((*p_9) | (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(g_138[(g_1351 + 2)][(g_1351 + 3)], (l_1660[2][6][0] = (**g_1368)))), ((g_138[(g_1351 + 2)][(g_1351 + 3)] && (((**g_403) = (**g_403)) == p_10)) == 0xA6531692L))))) <= l_1968))))), 0xD8L)) > l_1966), (*g_403)), 4)) > 0x2DL)), l_1967, (*g_1057), l_1978);
                    if (l_1979)
                        break;
                    for (l_1979 = 0; (l_1979 <= 2); l_1979 += 1)
                    {
                        int *l_1981[2];
                        unsigned l_1999 = 0xBB6096CAL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1981[i] = &g_20[2];
                        ++l_1999;
                    }
                    for (l_1983 = 2; (l_1983 >= 0); l_1983 -= 1)
                    {
                        int i, j, k;
                        (*g_984) = func_37(l_1987, (**g_1056), ((*l_2002) = ((l_2002 != (void*)0) | l_1662)), p_8);
                    }
                }
            }
            else
            {
                unsigned *l_2003 = &g_106;
                int l_2006 = (-1L);
                int l_2007 = 1L;
                l_2004 = (0x9648L | (l_1990 && ((*l_2003) = l_1980)));
                for (g_34 = 0; (g_34 <= 1); g_34 += 1)
                {
                    unsigned char l_2005[3];
                    int *l_2008 = (void*)0;
                    int *l_2009[9][8] = {{&g_1019,&l_1988,&g_1019,&l_1987,&l_1968,&l_1968,&l_1987,&g_1019},{&l_1988,&l_1988,&l_1968,&l_1660[1][1][2],(void*)0,&l_1660[1][1][2],&l_1968,&l_1988},{&l_1988,&g_1019,&l_1987,&l_1968,&l_1968,&l_1987,&g_1019,&l_1988},{&g_1019,&g_1537[0],&l_1988,&l_1660[1][1][2],&l_1988,&g_1537[0],&g_1019,&g_1019},{&g_1537[0],&l_1660[1][1][2],&l_1987,&l_1987,&l_1660[1][1][2],&g_1537[0],(void*)0,&l_1660[1][1][2]},{&l_1968,&l_1660[1][1][2],(void*)0,&l_1660[1][1][2],&l_1968,&l_1988,&l_1988,&l_1968},{&l_1660[1][1][2],&l_1987,&l_1987,&l_1660[1][1][2],&g_1537[0],&l_1968,&g_1537[0],&l_1660[1][1][2]},{&l_1987,&g_1537[0],&l_1987,&l_1988,(void*)0,(void*)0,&l_1988,&l_1987},{&g_1537[0],&g_1537[0],(void*)0,&l_1968,&g_1019,&l_1968,(void*)0,&g_1537[0]}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_2005[i] = 4UL;
                    (*p_11) = 0xABC9FC38L;
                    (*p_11) = l_2005[1];
                    ++l_2010;
                    (**g_403) = (**g_403);
                    for (g_1060 = 0; (g_1060 <= 1); g_1060 += 1)
                    {
                        int i, j, k;
                        (***g_402) = func_37(((0xAEL != ((void*)0 != l_2013)) || (safe_add_func_uint16_t_u_u((*g_51), 0xB027L))), (safe_mod_func_int32_t_s_s((*p_7), (+g_136))), (safe_add_func_int16_t_s_s((l_2006 ^ l_2010), l_1968)), &g_707);
                        if (l_2006)
                            break;
                    }
                }
                if (l_2007)
                    break;
                for (g_153 = 0; (g_153 <= 8); g_153 += 1)
                {
                    unsigned char l_2023[5][9] = {{0x6AL,246UL,1UL,0x69L,0x69L,1UL,246UL,0x6AL,1UL},{0x20L,1UL,0x31L,0x81L,0x81L,0x31L,1UL,0x20L,0x31L},{0x6AL,246UL,1UL,0x69L,0x69L,1UL,246UL,0x6AL,1UL},{0x20L,1UL,0x31L,0x81L,0x81L,0x31L,1UL,0x20L,0x31L},{0x6AL,246UL,1UL,0x69L,0x69L,1UL,246UL,0x6AL,1UL}};
                    int i, j;
                    (*g_1700) = ((*g_1369) <= ((*l_1627) ^= ((void*)0 == g_2020)));
                    (*p_11) = (*p_11);
                    l_2023[0][2]--;
                }
            }
        }
        else
        {
            char *l_2031 = &g_363;
            int l_2034 = (-10L);
            int l_2035 = (-1L);
            int l_2036 = 0x4ECCCFF7L;
            int l_2037 = 0xA0F54B92L;
            int l_2038 = 0x2395D5A4L;
            int l_2039[3][5][2] = {{{(-4L),0x34843E33L},{(-4L),0x34843E33L},{(-4L),0x34843E33L},{(-4L),0x34843E33L},{(-4L),0x34843E33L}},{{(-4L),0x34843E33L},{(-4L),0x34843E33L},{(-4L),0x34843E33L},{(-4L),0x34843E33L},{(-4L),0x34843E33L}},{{(-4L),0x34843E33L},{(-4L),0x34843E33L},{(-4L),0x34843E33L},{(-4L),0x34843E33L},{(-4L),0x34843E33L}}};
            char l_2040 = 0L;
            int i, j, k;
            for (g_2 = 0; (g_2 <= 8); g_2 += 1)
            {
                int *l_2028 = &g_1537[0];
                char **l_2030 = &l_2029;
                int *l_2032 = &l_1989;
                int *l_2033[5][5] = {{&g_1019,&g_1019,&g_1019,&g_1019,&g_1019},{&l_1660[0][7][4],&l_1660[0][7][4],&l_1660[0][7][4],&l_1660[0][7][4],&l_1660[0][7][4]},{&g_1019,&g_1019,&g_1019,&g_1019,&g_1019},{&l_1660[0][7][4],&l_1660[0][7][4],&l_1660[0][7][4],&l_1660[0][7][4],&l_1660[0][7][4]},{&g_1019,&g_1019,&g_1019,&g_1019,&g_1019}};
                char l_2041[3][4][5] = {{{0xC6L,4L,0L,(-2L),(-1L)},{(-2L),4L,0xFBL,0x4BL,0L},{0x73L,0xC6L,(-2L),(-2L),0xC6L},{1L,0xF2L,0xBAL,0x19L,0xC6L}},{{4L,0x19L,4L,0xE3L,0L},{0xF2L,0xE3L,0xECL,(-1L),(-1L)},{4L,0xBAL,4L,0xECL,1L},{1L,0xBAL,0x4BL,0xF2L,0x19L}},{{0x73L,0xE3L,(-1L),4L,1L},{(-2L),0x19L,0x4BL,0x19L,(-2L)},{0xC6L,0xF2L,4L,0x19L,4L},{0x19L,0xFBL,0L,0xF2L,(-2L)}}};
                unsigned char *l_2059[10] = {&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118};
                int i, j, k;
                (*g_984) = func_37(g_681[g_254], (safe_add_func_uint8_t_u_u(g_681[g_254], (*p_8))), (g_1936 |= (****g_1557)), l_2031);
                l_2044++;
                (*g_1878) = (safe_lshift_func_uint16_t_u_u(((**l_1955) = ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((((((safe_sub_func_uint32_t_u_u(l_2037, g_681[g_254])) ^ ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_2036 = l_2036), ((*l_2032) = (~l_2038)))), (l_1957[1] && l_2039[2][3][1]))) && 255UL)) >= l_2004) <= l_2038) >= (*g_1700)), (**g_1368))), 6)) > 4294967291UL)), l_2034));
            }
        }
        for (g_99 = 0; (g_99 <= 1); g_99 += 1)
        {
            unsigned char l_2064 = 0x6FL;
            unsigned short *l_2067[3];
            unsigned *l_2072 = (void*)0;
            unsigned *l_2073 = &g_106;
            int i;
            for (i = 0; i < 3; i++)
                l_2067[i] = &g_114;
            (**g_403) = func_37((l_2064 == (+(safe_mod_func_uint8_t_u_u((((l_2067[1] == l_1956) | (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_1655, 0xB09FL)), ((*l_2073)++)))) >= ((*g_1878) &= ((safe_sub_func_int8_t_s_s((*p_9), (l_1996 = (safe_sub_func_int32_t_s_s(((*g_1700) = (*g_1700)), (&l_1815 != (void*)0)))))) != l_2064))), 0xB8L)))), l_2064, (*g_1057), &l_2042);
        }
        l_2084[5][0][1]--;
    }
    for (g_1893 = 0; (g_1893 > 13); g_1893++)
    {
        return l_2084[0][0][1];
    }
    l_2094--;
    return (*l_2092);
}







static char * func_13(unsigned short p_14, unsigned p_15)
{
    unsigned char l_24 = 255UL;
    int *l_74[8] = {&g_20[2],&g_20[2],&g_20[2],&g_20[2],&g_20[2],&g_20[2],&g_20[2],&g_20[2]};
    union U0 l_76 = {4294967291UL};
    char l_1263 = 0L;
    int l_1287 = 0xA8952729L;
    unsigned short *l_1297[10];
    short l_1302 = 0x949FL;
    unsigned l_1310 = 0UL;
    unsigned *l_1357[10][7][3] = {{{&g_618.f0,&g_106,&g_106},{(void*)0,&g_106,&g_618.f0},{&g_618.f0,&g_618.f0,&g_1060},{(void*)0,&l_76.f0,(void*)0},{&g_618.f0,&g_618.f0,&l_76.f0},{&l_76.f0,&g_1060,&g_1060},{&g_1060,&g_312,&g_1060}},{{&g_1060,(void*)0,&g_106},{&g_1060,(void*)0,(void*)0},{&l_76.f0,&g_1060,&l_76.f0},{&g_618.f0,&g_1060,&g_312},{(void*)0,&g_106,&g_106},{&g_618.f0,&g_1060,(void*)0},{(void*)0,(void*)0,&l_76.f0}},{{&g_618.f0,&g_618.f0,(void*)0},{&g_1060,&g_1060,&g_618.f0},{(void*)0,&l_76.f0,&g_1060},{&g_1060,&l_76.f0,&g_618.f0},{(void*)0,&g_618.f0,&g_1060},{&l_76.f0,&g_1060,&g_618.f0},{&g_1060,&g_618.f0,&g_1060}},{{&g_1060,&g_106,&g_618.f0},{(void*)0,(void*)0,(void*)0},{&l_76.f0,&g_312,&l_76.f0},{&g_618.f0,(void*)0,&g_106},{&l_76.f0,(void*)0,&g_106},{(void*)0,(void*)0,(void*)0},{&g_106,&g_106,&g_106}},{{&g_1060,&g_618.f0,&g_312},{&g_1060,&g_106,&g_106},{(void*)0,(void*)0,&g_106},{(void*)0,&g_106,&l_76.f0},{(void*)0,&g_618.f0,&g_1060},{(void*)0,&g_106,(void*)0},{(void*)0,(void*)0,&g_618.f0}},{{(void*)0,(void*)0,&l_76.f0},{&g_106,(void*)0,&g_1060},{&g_106,&g_1060,&g_106},{&g_618.f0,&g_106,&g_618.f0},{&l_76.f0,&g_106,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&l_76.f0,&l_76.f0}},{{(void*)0,&g_618.f0,&g_1060},{(void*)0,&g_618.f0,(void*)0},{(void*)0,(void*)0,&g_618.f0},{&l_76.f0,&g_1060,&l_76.f0},{&g_618.f0,&g_618.f0,(void*)0},{&g_106,&g_106,&l_76.f0},{&g_106,&g_618.f0,&g_618.f0}},{{(void*)0,&g_106,&g_106},{(void*)0,(void*)0,&g_1060},{(void*)0,&g_618.f0,&l_76.f0},{(void*)0,&g_106,&g_106},{(void*)0,&g_106,(void*)0},{(void*)0,(void*)0,&g_106},{&g_1060,&l_76.f0,&l_76.f0}},{{&g_1060,(void*)0,&g_1060},{(void*)0,&g_106,&l_76.f0},{(void*)0,&g_1060,(void*)0},{&g_1060,(void*)0,&g_312},{&l_76.f0,&g_312,(void*)0},{&g_618.f0,&g_1060,&g_1060},{(void*)0,&g_618.f0,&g_106}},{{&l_76.f0,&g_1060,&g_106},{&g_618.f0,(void*)0,(void*)0},{&g_1060,&g_1060,&g_1060},{&g_106,(void*)0,&g_1060},{&g_1060,&g_1060,(void*)0},{(void*)0,&g_618.f0,&g_106},{&g_106,&g_1060,(void*)0}}};
    unsigned **l_1356 = &l_1357[5][5][0];
    union U0 ****l_1376 = (void*)0;
    unsigned short l_1399 = 0UL;
    int ****l_1433 = &g_403;
    unsigned short ****l_1520 = &g_1300[4];
    char l_1522 = 0x07L;
    unsigned l_1552[3];
    unsigned l_1563[5] = {9UL,9UL,9UL,9UL,9UL};
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_1297[i] = &g_52;
    for (i = 0; i < 3; i++)
        l_1552[i] = 0UL;
    for (g_2 = (-14); (g_2 == 29); g_2++)
    {
        int *l_18 = (void*)0;
        int *l_19[8][8] = {{&g_20[0],&g_20[2],&g_20[7],&g_20[1],&g_20[2],&g_20[2],&g_20[1],&g_20[7]},{(void*)0,(void*)0,&g_20[7],&g_20[1],&g_5,&g_5,&g_5,&g_20[0]},{&g_20[2],&g_5,(void*)0,(void*)0,(void*)0,&g_5,&g_20[2],&g_20[0]},{&g_5,&g_5,&g_5,&g_20[1],&g_20[7],(void*)0,(void*)0,&g_20[7]},{&g_20[1],&g_20[2],&g_20[2],&g_20[1],&g_20[7],&g_20[2],&g_20[0],(void*)0},{&g_5,&g_20[2],&g_20[0],&g_20[7],(void*)0,&g_20[7],&g_20[0],&g_20[2]},{&g_20[2],&g_20[1],(void*)0,&g_20[1],(void*)0,&g_20[2],&g_5,&g_5},{(void*)0,&g_20[2],&g_20[2],&g_20[2],&g_20[2],(void*)0,&g_5,&g_20[7]}};
        char *l_907[2][1][6];
        unsigned **l_1334 = (void*)0;
        char l_1350 = (-1L);
        unsigned short l_1352 = 0xD8CDL;
        int l_1361 = 0L;
        short **l_1371 = &g_1369;
        union U0 *l_1402 = &l_76;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 6; k++)
                    l_907[i][j][k] = &g_707;
            }
        }
        g_20[6] = 0x27F7B6FEL;
        for (p_15 = 8; (p_15 < 31); p_15 = safe_add_func_int8_t_s_s(p_15, 1))
        {
            int *l_23 = &g_5;
            char *l_33 = &g_34;
            unsigned short *l_42[1][3][10] = {{{&g_43,&g_43,&g_43,&g_43,&g_43,&g_43,&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43,&g_43,&g_43,&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43,&g_43,&g_43,&g_43,&g_43,(void*)0,&g_43}}};
            short *l_46[10] = {&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47};
            int l_69 = 0xE32111C1L;
            unsigned short *l_582 = (void*)0;
            int l_1255 = 3L;
            int l_1270[4][1] = {{0L},{4L},{0L},{4L}};
            unsigned short l_1278 = 0x0964L;
            short l_1324 = 0x5310L;
            short l_1347 = (-5L);
            int i, j, k;
            l_19[0][4] = l_23;
            g_25 = (~(g_20[5] = l_24));
        }
        for (g_1060 = 0; (g_1060 == 5); g_1060++)
        {
            int l_1381 = 0x8A07E256L;
            int l_1401 = (-10L);
            int l_1407 = (-1L);
            int l_1408[6][1][2] = {{{0x57934608L,0xE25238D1L}},{{(-8L),(-8L)}},{{(-8L),0xE25238D1L}},{{0x57934608L,0L}},{{0xE25238D1L,0L}},{{0x57934608L,0xE25238D1L}}};
            unsigned char *l_1430 = &g_25;
            int i, j, k;
            for (g_1092 = 23; (g_1092 != (-5)); --g_1092)
            {
                int **l_1384 = (void*)0;
                char *l_1385[7][7][2] = {{{&l_1263,&g_363},{&g_34,&g_486},{&l_1263,&g_34},{&g_486,&l_1263},{&l_1263,&l_1263},{&g_486,&g_34},{&l_1263,&g_486}},{{&g_34,&g_363},{&l_1263,&g_486},{&l_1263,&l_1263},{&g_486,&l_1263},{&g_363,&g_34},{&g_486,&g_34},{&g_707,&g_486}},{{&l_1263,&l_1263},{&l_1263,&g_486},{&g_707,&g_34},{&g_486,&l_1263},{&g_363,&l_1263},{&g_707,&g_34},{&g_34,&g_707}},{{&l_1263,&g_363},{&l_1263,&g_486},{&g_34,&g_707},{&g_486,&l_1263},{&l_1263,&l_1263},{&g_486,&g_707},{&g_34,&g_486}},{{&l_1263,&g_363},{&l_1263,&g_707},{&g_34,&g_34},{&g_707,&l_1263},{&g_363,&l_1263},{&g_486,&g_34},{&g_707,&g_486}},{{&l_1263,&l_1263},{&l_1263,&g_486},{&g_707,&g_34},{&g_486,&l_1263},{&g_363,&l_1263},{&g_707,&g_34},{&g_34,&g_707}},{{&l_1263,&g_363},{&l_1263,&g_486},{&g_34,&g_707},{&g_486,&l_1263},{&l_1263,&l_1263},{&g_486,&g_707},{&g_34,&g_486}}};
                int l_1412 = 0L;
                int l_1413 = (-1L);
                int l_1414 = 2L;
                int i, j, k;
            }
            (*g_89) = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((func_53(p_14, &p_14, (--(**g_1058))) == (*g_1369)), 13)) ^ p_14), p_14)), (safe_mul_func_uint8_t_u_u(0x4CL, (p_15 >= (((--(*l_1430)) >= 0UL) || p_14))))));
        }
    }
    if (p_15)
    {
        (**g_984) &= ((l_1433 = l_1433) != ((*g_839) = (*g_839)));
    }
    else
    {
        int *****l_1467 = &l_1433;
        int l_1474 = 0xD97DC1B1L;
        unsigned short *l_1475 = &g_52;
        for (l_1399 = 0; (l_1399 > 19); l_1399 = safe_add_func_int16_t_s_s(l_1399, 7))
        {
            char *l_1438 = &g_707;
            int l_1450 = (-6L);
            int l_1478 = 0xCD70112BL;
            unsigned char ***l_1481 = &g_1214[0];
            for (g_52 = (-3); (g_52 <= 29); ++g_52)
            {
                unsigned short *l_1451 = &g_114;
                int l_1479 = (-4L);
                (****g_839) = func_37(g_20[2], ((*g_1057) = p_15), p_15, l_1438);
                if ((safe_unary_minus_func_uint8_t_u((safe_sub_func_int16_t_s_s(func_53((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((*l_1438) |= p_14) ^ ((void*)0 != &g_34)), ((safe_mod_func_int32_t_s_s((func_53(l_1450, l_1451, ((*g_51) == p_15)) & (!1UL)), 0xD73E622EL)) | p_15))) != 0UL), l_1450)), l_1451, p_15), g_1452)))))
                {
                    char l_1455 = (-1L);
                    for (g_34 = 0; (g_34 == (-3)); g_34 = safe_sub_func_uint32_t_u_u(g_34, 8))
                    {
                        char l_1456 = 0x4AL;
                        unsigned short l_1457[9] = {0x7E43L,0x7E43L,0x7E43L,0x7E43L,0x7E43L,0x7E43L,0x7E43L,0x7E43L,0x7E43L};
                        int i;
                        l_1456 &= l_1455;
                        if (p_15)
                            break;
                        l_1457[7]++;
                    }
                }
                else
                {
                    unsigned short l_1470[7][7] = {{0xA038L,0xA038L,65531UL,65531UL,0xA038L,0xA038L,65531UL},{65535UL,5UL,65535UL,5UL,65535UL,5UL,65535UL},{0xA038L,65531UL,65531UL,0xA038L,0xA038L,65531UL,65531UL},{0xA081L,5UL,0xA081L,5UL,0xA081L,5UL,0xA081L},{0xA038L,0xA038L,65531UL,65531UL,0xA038L,0xA038L,65531UL},{65535UL,5UL,65535UL,5UL,65535UL,5UL,65535UL},{0xA038L,65531UL,65531UL,0xA038L,0xA038L,65531UL,65531UL}};
                    unsigned short l_1473 = 0x28EFL;
                    int l_1480 = (-1L);
                    int i, j;
                    for (g_1351 = 0; (g_1351 <= (-16)); g_1351--)
                    {
                        unsigned char *l_1464 = &g_116[0];
                        int l_1476 = (-9L);
                        unsigned short *l_1477 = &g_52;
                        l_1479 &= (l_1478 = (safe_sub_func_uint16_t_u_u(((func_53(((*g_1057) = ((l_1476 &= ((*l_1451) = (func_53(func_53(((l_1438 == l_1464) == (((l_1474 = func_53((!((safe_lshift_func_uint16_t_u_s(func_53((&g_402 == l_1467), &p_14, p_14), (((((~(safe_sub_func_uint8_t_u_u(l_1470[5][5], (safe_lshift_func_uint8_t_u_u(p_14, p_15))))) != 0x75B64DE2L) > p_15) == l_1470[5][5]) > p_15))) == l_1473)), l_1451, p_14)) >= p_15) <= 0x77L)), l_1475, (**g_1058)), &l_1399, l_1450) == p_15))) <= (-1L))), l_1477, p_15) | 251UL) != l_1450), 0xD850L)));
                        if (p_15)
                            continue;
                        if (l_1470[5][5])
                            continue;
                        l_1480 |= (l_1474 &= p_14);
                    }
                }
            }
            l_1474 &= (p_14 == (l_1481 == (void*)0));
        }
    }
    for (p_15 = 0; (p_15 <= 6); p_15 += 1)
    {
        unsigned *l_1482[8][9] = {{&g_1060,&g_1060,&g_618.f0,&g_1060,&g_1060,&g_618.f0,&g_1060,&g_1060,&g_618.f0},{&g_1060,&g_1060,&g_618.f0,&g_1060,&g_1060,&g_618.f0,&g_1060,&g_1060,&g_618.f0},{&g_1060,&g_1060,&g_618.f0,&g_1060,&g_1060,&g_618.f0,&g_1060,&g_1060,&g_618.f0},{&g_1060,&g_1060,&g_618.f0,&g_1060,&g_1060,&g_618.f0,&g_1060,&g_1060,&g_618.f0},{&g_1060,&g_1060,&g_618.f0,&g_1060,&g_1060,&g_618.f0,&g_1060,&g_1060,&g_618.f0},{&g_1060,&g_1060,&g_618.f0,&g_1060,&g_1060,&g_618.f0,&g_1060,&g_1060,&g_618.f0},{&g_1060,&g_1060,&g_618.f0,&g_1060,&g_1060,&g_1060,&g_1452,&g_1452,&g_1060},{&g_1452,&g_1452,&g_1060,&g_1452,&g_1452,&g_1060,&g_1452,&g_1452,&g_1060}};
        int l_1483 = 0xEE0AC2BCL;
        int ******l_1489 = &g_839;
        int l_1504 = 0xCB3A5899L;
        int l_1505 = 0x3BEE14C1L;
        int l_1506 = 0xDA7E7B2CL;
        int l_1507 = 0x84CD2F1CL;
        int l_1508[10][7] = {{8L,(-2L),5L,0xCD0CEE68L,1L,0xCD0CEE68L,5L},{0xCAC31AF7L,0xCAC31AF7L,0x96A36F7FL,0xD79A69A2L,0x96A36F7FL,0xCAC31AF7L,0xCAC31AF7L},{0xE2B36794L,(-2L),0x5F543435L,(-2L),0xE2B36794L,(-4L),5L},{0L,0x77ACF083L,0L,0x96A36F7FL,0x96A36F7FL,0L,0x77ACF083L},{5L,0L,0x5F543435L,0x96D8661BL,1L,(-2L),1L},{0L,0x96A36F7FL,0x96A36F7FL,0L,0x77ACF083L,0L,0x96A36F7FL},{0xE2B36794L,(-4L),5L,0x96D8661BL,5L,(-4L),0xE2B36794L},{0xCAC31AF7L,0x96A36F7FL,0xD79A69A2L,0x96A36F7FL,0xCAC31AF7L,0xCAC31AF7L,0x96A36F7FL},{8L,0L,8L,(-2L),5L,0xCD0CEE68L,1L},{0x96A36F7FL,0x77ACF083L,0xD79A69A2L,0xD79A69A2L,0x77ACF083L,0x96A36F7FL,0x77ACF083L}};
        char *l_1529 = &l_1522;
        char **l_1559 = &l_1529;
        char **l_1560 = &g_749;
        int i, j;
        l_1483 &= (0x65F8236FL != ((void*)0 == l_1482[2][4]));
        g_1484--;
        if ((l_1483 |= (p_15 >= (safe_rshift_func_int8_t_s_s(((l_1489 == &g_839) | (safe_rshift_func_int16_t_s_s(0x2E24L, 5))), 6)))))
        {
            short l_1495 = 0x4A85L;
            unsigned char *l_1500[9][6][4] = {{{&g_116[1],&g_116[0],&g_1484,&g_1484},{&g_1484,&g_25,&g_1484,&g_116[0]},{&g_116[1],&g_2,&g_25,(void*)0},{&g_1484,&g_116[0],&g_116[1],&g_99},{&g_116[1],&g_99,(void*)0,&g_99},{(void*)0,&g_116[0],&g_99,&g_116[0]}},{{&g_1484,&g_25,&g_116[0],(void*)0},{&g_99,&g_116[0],&g_1246,&g_2},{&g_99,&g_116[1],&g_116[0],&g_1484},{&g_1484,&g_2,&g_99,&g_25},{(void*)0,(void*)0,(void*)0,&g_116[1]},{&g_116[1],(void*)0,&g_116[1],&g_25}},{{&l_24,&g_2,&g_1484,&g_1484},{&g_116[0],&g_116[1],(void*)0,&g_2},{&g_25,&g_116[0],(void*)0,(void*)0},{&g_116[0],&g_25,&g_1484,&g_116[0]},{&l_24,&g_116[0],&g_116[1],&g_99},{&g_116[1],&g_99,(void*)0,&g_99}},{{(void*)0,&g_116[0],&g_99,&g_116[0]},{&g_1484,&g_25,&g_116[0],(void*)0},{&g_99,&g_116[0],&g_1246,&g_2},{&g_99,&g_116[1],&g_116[0],&g_1484},{&g_1484,&g_2,&g_99,&g_25},{(void*)0,(void*)0,(void*)0,&g_116[1]}},{{&g_116[1],(void*)0,&g_116[1],&g_25},{&l_24,&g_2,&g_1484,&g_1484},{&g_116[0],&g_116[1],(void*)0,&g_2},{&g_1484,&g_116[0],&g_1484,&g_116[0]},{&g_1246,&g_116[0],&g_99,&g_1484},{&g_116[1],(void*)0,&g_116[0],&g_2}},{{&g_116[0],&g_2,&g_116[0],&g_2},{&g_1484,(void*)0,(void*)0,&g_1484},{&l_24,&g_116[0],&g_1484,&g_116[0]},{(void*)0,&g_116[0],&g_1484,&g_25},{(void*)0,&g_99,&g_1484,&g_2},{&l_24,&g_25,(void*)0,&g_116[0]}},{{&g_1484,&g_116[0],&g_116[0],&g_99},{&g_116[0],&g_116[0],&g_116[0],&g_116[0]},{&g_116[1],&g_25,&g_99,&g_2},{&g_1246,&g_99,&g_1484,&g_25},{&g_1484,&g_116[0],&g_1484,&g_116[0]},{&g_1246,&g_116[0],&g_99,&g_1484}},{{&g_116[1],(void*)0,&g_116[0],&g_2},{&g_116[0],&g_2,&g_116[0],&g_2},{&g_1484,(void*)0,(void*)0,&g_1484},{&l_24,&g_116[0],&g_1484,&g_116[0]},{(void*)0,&g_116[0],&g_1484,&g_25},{(void*)0,&g_99,&g_1484,&g_2}},{{&l_24,&g_25,(void*)0,&g_116[0]},{&g_1484,&g_116[0],&g_116[0],&g_99},{&g_116[0],&g_116[0],&g_116[0],&g_116[0]},{&g_116[0],&g_116[0],(void*)0,&g_25},{&g_1484,&g_99,&g_25,&g_116[0]},{&g_99,(void*)0,&g_25,&g_116[1]}}};
            int l_1501 = 0x726D63ECL;
            int l_1502 = 0x4831C160L;
            int l_1503[2];
            unsigned l_1509 = 0UL;
            char *l_1516 = (void*)0;
            char *l_1517 = &g_707;
            unsigned short ****l_1521[9] = {(void*)0,&g_1300[4],(void*)0,&g_1300[4],(void*)0,&g_1300[4],(void*)0,&g_1300[4],(void*)0};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1503[i] = 0xFC141B3DL;
            for (l_1287 = 0; (l_1287 <= 6); l_1287 += 1)
            {
                int l_1492[9][5][5] = {{{1L,0x4435A5EBL,0L,2L,0x221C398BL},{1L,0x2FF52500L,0x72DA6246L,(-5L),3L},{(-1L),2L,0x2FF52500L,(-1L),0x4435A5EBL},{3L,0xEF01E9E2L,(-2L),1L,0x2531C2ADL},{0xC4435002L,0xC5B487A1L,(-1L),(-8L),(-1L)}},{{(-1L),0xC4435002L,(-8L),0x4669E692L,0L},{(-1L),(-1L),(-1L),0xEFBF3854L,1L},{0L,0x7E938B8BL,0xC7F45517L,0x85044645L,0x78F680B5L},{0xB430192BL,3L,1L,0x221C398BL,(-1L)},{0x0D03220BL,(-1L),(-1L),0x221C398BL,0x3B7070A0L}},{{0x6374DB5EL,0x2531C2ADL,0L,0x85044645L,0L},{0xF6465C54L,0xD027C7CEL,0xBAEC7EDFL,0xEFBF3854L,0x5FBA18F8L},{0x8DDC39B8L,8L,0L,0x4669E692L,(-2L)},{0xD027C7CEL,(-2L),0xC29F0A5DL,(-8L),0L},{0L,0xF6465C54L,1L,1L,0x2FF52500L}},{{2L,0x67206453L,2L,0x78F680B5L,(-1L)},{1L,(-1L),9L,1L,0xBAEC7EDFL},{0x221C398BL,0xBAEC7EDFL,0x72DA6246L,0L,(-1L)},{0x3741CD93L,0x3B7070A0L,9L,0xBAEC7EDFL,1L},{0x26B2C296L,0xF6465C54L,2L,8L,1L}},{{(-1L),0xEDFF9381L,0xC29F0A5DL,(-5L),3L},{1L,(-1L),3L,0x0D03220BL,1L},{0L,0x2FF52500L,3L,0xC4435002L,0x0058EC45L},{0x3B7070A0L,0x6374DB5EL,0L,(-10L),0x5FBA18F8L},{0x16CD0FC8L,0L,8L,0x3B7070A0L,0x85044645L}},{{(-1L),0L,0x78F680B5L,1L,(-10L)},{(-6L),0L,(-1L),(-1L),0x26B2C296L},{0x2531C2ADL,0L,0x85044645L,0L,2L},{0L,0x6374DB5EL,0xC4435002L,0xEDFF9381L,0x9289DB7DL},{0x72DA6246L,0x2FF52500L,1L,0x4669E692L,0L}},{{1L,(-1L),(-4L),0xBDB756D7L,0xC29F0A5DL},{0x67206453L,0xEDFF9381L,0x23D90E90L,0x23D90E90L,0xEDFF9381L},{(-1L),0xF6465C54L,0x9289DB7DL,(-2L),1L},{0x9289DB7DL,0x3B7070A0L,3L,0xEF01E9E2L,1L},{0L,0xF6465C54L,0xC7F45517L,1L,0xBDB756D7L}},{{0xBAEC7EDFL,0x85044645L,1L,0x23D90E90L,0x5379315CL},{0L,0x8DDC39B8L,0xF6465C54L,9L,0x7E938B8BL},{0x8DDC39B8L,0x9289DB7DL,0xC4435002L,(-1L),0L},{0xA3E8A9B7L,0x72DA6246L,(-1L),0L,3L},{0x5FBA18F8L,(-9L),(-6L),0xC29F0A5DL,0x4435A5EBL}},{{0x78F680B5L,(-8L),9L,(-5L),0x221C398BL},{0xD027C7CEL,9L,1L,0x2FF52500L,0x3B7070A0L},{0xC29F0A5DL,0L,1L,(-8L),0x3B7070A0L},{(-9L),0x67206453L,0x3741CD93L,3L,0x221C398BL},{1L,3L,(-8L),3L,0x4435A5EBL}}};
                int i, j, k;
                l_1492[2][3][0] = g_681[l_1287];
            }
            (**g_403) = func_37((safe_mod_func_int32_t_s_s(l_1495, p_14)), ((safe_mul_func_int16_t_s_s((**g_1368), (safe_lshift_func_uint8_t_u_u((l_1509--), (65527UL <= (safe_mul_func_uint8_t_u_u(p_15, (((*l_1517) = (safe_add_func_uint16_t_u_u(7UL, (p_15 == p_14)))) > (!((safe_mod_func_uint32_t_u_u(((l_1520 == l_1521[1]) | (*g_51)), p_15)) <= l_1522)))))))))) && p_14), p_14, &g_363);
            return &g_707;
        }
        else
        {
            short l_1531[4][5][9] = {{{0x41ADL,0x69F1L,0x49F5L,(-1L),(-1L),0x54F7L,0x5A12L,2L,0x5A12L},{(-2L),0x123EL,1L,1L,0x123EL,(-2L),0x2449L,0L,1L},{(-5L),(-1L),0x6480L,0x6117L,(-6L),0xDE8DL,(-2L),0x5A12L,0x41ADL},{0x07D8L,(-4L),2L,0x62D3L,0x2A3FL,2L,0x2449L,0x431EL,1L},{0x69F1L,0x5A12L,0L,1L,(-1L),(-5L),0x1B42L,1L,2L}},{{0x2449L,2L,0L,(-10L),1L,7L,0x123EL,2L,4L},{0L,0x3F48L,(-1L),1L,1L,0x1B42L,0xC855L,0x6117L,2L},{1L,1L,(-7L),0x2449L,1L,1L,0x2449L,(-7L),1L},{1L,2L,0x6117L,0xC855L,0x1B42L,1L,1L,(-1L),0x3F48L},{0x2A3FL,4L,2L,0x123EL,7L,1L,(-10L),0L,2L}},{{(-1L),2L,1L,0x1B42L,(-5L),(-1L),(-1L),(-5L),0x1B42L},{0L,1L,0L,0x2702L,0x123EL,0x431EL,7L,1L,0x3753L},{0L,0x3F48L,0x1B42L,0xDE8DL,0x7C65L,1L,2L,0xC855L,0x5A12L},{(-10L),2L,4L,0x2702L,0L,(-7L),0x07D8L,0x07D8L,(-7L)},{0x4DCFL,0x1B42L,(-6L),0x1B42L,0x4DCFL,0x6480L,0x5A12L,(-1L),1L}},{{0x07D8L,0L,(-4L),0x431EL,0x5978L,(-2L),1L,0x96F7L,0x123EL},{0L,0xC855L,0x49F5L,0x1B42L,0x69F1L,0x5A12L,0L,1L,1L},{(-4L),0L,0L,0xBFCDL,0L,0L,(-4L),(-2L),2L},{1L,1L,0x3F48L,(-2L),0x6480L,1L,0x41ADL,0x69F1L,0x49F5L},{7L,0x123EL,2L,4L,0x2A3FL,(-7L),1L,(-2L),0x62D3L}}};
            int l_1533 = 2L;
            int l_1538 = (-8L);
            unsigned char l_1547[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1547[i] = 0x4FL;
            for (g_114 = 0; (g_114 <= 1); g_114 += 1)
            {
                int l_1523 = 2L;
                int l_1532 = (-7L);
                int l_1534 = 0x5BEA22D9L;
                int l_1539 = (-6L);
                int l_1541 = (-1L);
                int l_1542 = (-1L);
                int i;
                l_1523 = g_116[g_114];
                for (l_1287 = 2; (l_1287 <= 6); l_1287 += 1)
                {
                    unsigned short l_1524 = 1UL;
                    int *l_1530 = &l_1508[5][0];
                    int l_1535 = 0x7A22C297L;
                    int l_1540 = 0L;
                    int l_1543 = 0x9DC89929L;
                    for (g_906 = 1; (g_906 <= 6); g_906 += 1)
                    {
                        char *l_1527 = (void*)0;
                        char *l_1528 = &g_486;
                        int l_1536[5][3][1];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_1536[i][j][k] = (-1L);
                            }
                        }
                        l_1530 = func_37(func_53(l_1524, l_1297[(p_15 + 2)], func_30((**g_1368), (***g_839))), ((safe_add_func_uint16_t_u_u(((void*)0 != &l_1482[7][4]), (((*l_1528) = (65535UL <= l_1523)) > 255UL))) == (*g_1369)), p_15, l_1529);
                        ++g_1544;
                        --l_1547[0];
                    }
                }
                l_1538 |= 0xE30651D0L;
            }
            for (l_1538 = 0; (l_1538 <= 6); l_1538 += 1)
            {
                char *l_1551 = &g_707;
                g_1550 = func_30((**g_1368), ((*g_403) = (**l_1433)));
                return l_1551;
            }
            (**g_403) = (void*)0;
            l_1504 = l_1552[1];
        }
        (*****l_1489) = func_37(g_20[4], p_14, ((g_312--) && (l_1483 = ((safe_rshift_func_int16_t_s_s((g_1557 != (void*)0), 14)) >= p_14))), ((*l_1560) = ((*l_1559) = &g_707)));
    }
    l_1563[1] |= ((safe_rshift_func_int8_t_s_u(0L, 5)) < p_14);
    return &g_486;
}







static unsigned func_30(short p_31, int ** p_32)
{
    int *l_997 = &g_20[2];
    unsigned short *l_1027 = &g_114;
    int *l_1038[4] = {&g_20[4],&g_20[4],&g_20[4],&g_20[4]};
    char **l_1039 = &g_749;
    unsigned *l_1054 = &g_75;
    unsigned **l_1053 = &l_1054;
    int ***l_1065 = (void*)0;
    int ******l_1078 = &g_839;
    int *******l_1077 = &l_1078;
    unsigned l_1096 = 1UL;
    int l_1122 = 0xFD0DDE3CL;
    int l_1130 = 0x3A1EEA11L;
    union U0 ***l_1143 = &g_1141;
    unsigned char **l_1155 = (void*)0;
    unsigned short **l_1166 = &l_1027;
    unsigned short ***l_1165 = &l_1166;
    unsigned short ***l_1169 = (void*)0;
    unsigned l_1176 = 4294967295UL;
    char l_1184 = 0xB1L;
    short l_1185 = 1L;
    unsigned short l_1194 = 65531UL;
    short l_1196 = 0L;
    unsigned short l_1198 = 0x59F8L;
    short l_1245[10] = {0x375EL,0xD469L,0x375EL,0xD469L,0x375EL,0xD469L,0x375EL,0xD469L,0x375EL,0xD469L};
    unsigned l_1249[4][10][6] = {{{1UL,0UL,0x0A933309L,0UL,1UL,1UL},{0UL,0UL,4UL,0UL,4294967295UL,2UL},{0UL,4294967295UL,2UL,0UL,0UL,2UL},{1UL,1UL,4UL,0x5A758558L,0UL,1UL},{0UL,4294967295UL,0x0A933309L,0x5A758558L,4294967295UL,4UL},{1UL,0UL,0x0A933309L,0UL,1UL,1UL},{4294967295UL,0x8A23D3DCL,1UL,4294967295UL,4294967288UL,0UL},{4294967295UL,4294967288UL,0UL,0x8A23D3DCL,0x8A23D3DCL,0UL},{0x83E473B8L,0x83E473B8L,1UL,0x6D66745DL,0x8A23D3DCL,4294967295UL},{0x8A23D3DCL,4294967288UL,0UL,0x6D66745DL,4294967288UL,1UL}},{{0x83E473B8L,0x8A23D3DCL,0UL,0x8A23D3DCL,0x83E473B8L,4294967295UL},{4294967295UL,0x8A23D3DCL,1UL,4294967295UL,4294967288UL,0UL},{4294967295UL,4294967288UL,0UL,0x8A23D3DCL,0x8A23D3DCL,0UL},{0x83E473B8L,0x83E473B8L,1UL,0x6D66745DL,0x8A23D3DCL,4294967295UL},{0x8A23D3DCL,4294967288UL,0UL,0x6D66745DL,4294967288UL,1UL},{0x83E473B8L,0x8A23D3DCL,0UL,0x8A23D3DCL,0x83E473B8L,4294967295UL},{4294967295UL,0x8A23D3DCL,1UL,4294967295UL,4294967288UL,0UL},{4294967295UL,4294967288UL,0UL,0x8A23D3DCL,0x8A23D3DCL,0UL},{0x83E473B8L,0x83E473B8L,1UL,0x6D66745DL,0x8A23D3DCL,4294967295UL},{0x8A23D3DCL,4294967288UL,0UL,0x6D66745DL,4294967288UL,1UL}},{{0x83E473B8L,0x8A23D3DCL,0UL,0x8A23D3DCL,0x83E473B8L,4294967295UL},{4294967295UL,0x8A23D3DCL,1UL,4294967295UL,4294967288UL,0UL},{4294967288UL,0x8A23D3DCL,0x5A758558L,0x6D66745DL,0x6D66745DL,0x5A758558L},{4294967295UL,4294967295UL,0UL,0x83E473B8L,0x6D66745DL,0UL},{0x6D66745DL,0x8A23D3DCL,4294967295UL,0x83E473B8L,0x8A23D3DCL,0UL},{4294967295UL,0x6D66745DL,4294967295UL,0x6D66745DL,4294967295UL,0UL},{4294967288UL,0x6D66745DL,0UL,4294967288UL,0x8A23D3DCL,0x5A758558L},{4294967288UL,0x8A23D3DCL,0x5A758558L,0x6D66745DL,0x6D66745DL,0x5A758558L},{4294967295UL,4294967295UL,0UL,0x83E473B8L,0x6D66745DL,0UL},{0x6D66745DL,0x8A23D3DCL,4294967295UL,0x83E473B8L,0x8A23D3DCL,0UL}},{{4294967295UL,0x6D66745DL,4294967295UL,0x6D66745DL,4294967295UL,0UL},{4294967288UL,0x6D66745DL,0UL,4294967288UL,0x8A23D3DCL,0x5A758558L},{4294967288UL,0x8A23D3DCL,0x5A758558L,0x6D66745DL,0x6D66745DL,0x5A758558L},{4294967295UL,4294967295UL,0UL,0x83E473B8L,0x6D66745DL,0UL},{0x6D66745DL,0x8A23D3DCL,4294967295UL,0x83E473B8L,0x8A23D3DCL,0UL},{4294967295UL,0x6D66745DL,4294967295UL,0x6D66745DL,4294967295UL,0UL},{4294967288UL,0x6D66745DL,0UL,4294967288UL,0x8A23D3DCL,0x5A758558L},{4294967288UL,0x8A23D3DCL,0x5A758558L,0x6D66745DL,0x6D66745DL,0x6D66745DL},{1UL,1UL,4294967295UL,0x0A933309L,4UL,0x8A23D3DCL},{4UL,7UL,4294967288UL,0x0A933309L,7UL,4294967295UL}}};
    int i, j, k;
    for (p_31 = 0; (p_31 <= 8); p_31 += 1)
    {
        int ******l_1028 = &g_839;
        int l_1029 = 3L;
        unsigned *l_1044 = &g_312;
        unsigned ***l_1055[8] = {&l_1053,&l_1053,&l_1053,&l_1053,&l_1053,&l_1053,&l_1053,&l_1053};
        unsigned *l_1059 = &g_106;
        int ***l_1068 = (void*)0;
        int ***l_1069[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int l_1076 = (-6L);
        short l_1116[5];
        int l_1129 = 5L;
        unsigned short *l_1163 = &g_254;
        union U0 ***l_1189 = (void*)0;
        union U0 ***l_1190 = &g_1141;
        int l_1195 = 0x5328F60EL;
        int l_1197 = 0L;
        unsigned char **l_1217 = &g_1215;
        short l_1221[9] = {0xA71AL,0xD9C7L,0xA71AL,0xA71AL,0xD9C7L,0xA71AL,0xA71AL,0xD9C7L,0xA71AL};
        int l_1236 = 0x53A0B9D8L;
        int i;
        for (i = 0; i < 5; i++)
            l_1116[i] = 1L;
        for (g_136 = 5; (g_136 >= 0); g_136 -= 1)
        {
            int i, j;
            (*g_984) = l_997;
            if (g_138[(g_136 + 1)][(g_136 + 1)])
                continue;
            for (g_52 = 0; (g_52 <= 1); g_52 += 1)
            {
                union U0 **l_1012 = (void*)0;
                int l_1016 = 0L;
                int *l_1020 = &l_1016;
                int i, j;
                for (g_118 = 0; (g_118 <= 1); g_118 += 1)
                {
                    int ******l_1014[7];
                    int *******l_1013 = &l_1014[4];
                    unsigned char *l_1015[6];
                    char *l_1017[5];
                    int *l_1018 = &g_1019;
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_1014[i] = (void*)0;
                    for (i = 0; i < 6; i++)
                        l_1015[i] = &g_116[0];
                    for (i = 0; i < 5; i++)
                        l_1017[i] = &g_707;
                    (*l_1018) ^= (safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((g_138[(g_52 + 6)][g_52] ^ 0L) | ((*l_997) = (safe_lshift_func_uint8_t_u_s((g_99 = ((g_116[g_52]++) && (l_1016 = ((safe_add_func_int32_t_s_s(0x55F162F7L, (safe_lshift_func_uint8_t_u_s((l_1012 != (void*)0), 6)))) != (((*l_1013) = &g_839) == (void*)0))))), 1)))), p_31)), 0));
                    for (g_153 = 6; (g_153 >= 0); g_153 -= 1)
                    {
                        int i, j, k;
                        l_1020 = (*g_984);
                    }
                }
                return g_138[(g_136 + 2)][g_136];
            }
        }
    }
    --l_1249[3][5][4];
    return g_138[4][5];
}







static int ** func_35(int * p_36)
{
    unsigned short **l_918[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned short ***l_917 = &l_918[1];
    int l_920[4] = {(-1L),(-1L),(-1L),(-1L)};
    int **l_924 = &g_910;
    unsigned char l_947 = 5UL;
    char *l_958[10][3][2] = {{{&g_707,&g_34},{&g_707,&g_34},{&g_707,&g_34}},{{&g_34,&g_707},{&g_34,&g_707},{&g_34,&g_707}},{{&g_34,&g_34},{&g_707,&g_34},{&g_707,&g_34}},{{&g_707,&g_34},{&g_34,&g_707},{&g_34,&g_707}},{{&g_34,&g_707},{&g_34,&g_34},{&g_707,&g_34}},{{&g_707,&g_34},{&g_707,&g_34},{&g_34,&g_707}},{{&g_34,&g_707},{&g_34,&g_707},{&g_34,&g_34}},{{&g_707,&g_34},{&g_707,&g_34},{&g_707,&g_363}},{{&g_363,&g_34},{&g_707,&g_707},{&g_707,&g_34}},{{&g_363,&g_363},{&g_34,&g_707},{&g_707,&g_707}}};
    int *l_960[3][8][4] = {{{&g_5,&l_920[3],&g_5,(void*)0},{&g_5,(void*)0,(void*)0,&g_5},{&g_20[3],(void*)0,(void*)0,(void*)0},{(void*)0,&l_920[3],&g_20[3],&g_20[2]},{&g_20[3],&g_20[0],&l_920[2],&g_20[0]},{&g_20[2],&g_20[5],(void*)0,&g_5},{&l_920[0],&g_5,&g_5,&g_5},{&l_920[2],(void*)0,&l_920[1],&g_20[3]}},{{&l_920[2],(void*)0,&g_5,(void*)0},{&l_920[0],&g_20[3],(void*)0,&g_20[3]},{&g_20[2],&l_920[2],&l_920[2],&g_20[2]},{&g_20[3],(void*)0,&g_20[3],&l_920[0]},{(void*)0,&g_5,(void*)0,&l_920[2]},{&g_20[3],&l_920[1],(void*)0,&l_920[2]},{&g_5,&g_5,&g_5,&l_920[0]},{&g_5,(void*)0,&g_20[5],&g_20[2]}},{{&g_20[0],&l_920[2],&g_20[0],&g_20[3]},{&g_20[2],&g_20[3],&l_920[3],(void*)0},{(void*)0,(void*)0,(void*)0,&g_20[3]},{&g_5,(void*)0,(void*)0,&g_5},{(void*)0,&g_5,&l_920[3],&g_20[0]},{&l_920[1],&l_920[0],&g_5,&g_5},{&g_5,&g_5,&l_920[0],&l_920[1]},{&g_20[0],&g_5,&g_5,&l_920[3]}}};
    int **l_976 = (void*)0;
    unsigned char l_995 = 9UL;
    int **l_996 = &l_960[2][5][0];
    int i, j, k;
    for (g_906 = 5; (g_906 >= 0); g_906 -= 1)
    {
        unsigned short *l_919 = &g_138[0][0];
        short *l_923 = &g_136;
        int l_936 = (-1L);
        short l_938 = 0x6B6DL;
        int l_940 = 1L;
        int l_941 = 0xED6B4AA4L;
        int l_942 = 0xD1544900L;
        char l_943 = 1L;
        int l_944 = 0L;
        int l_945[8][3] = {{(-10L),0x2E166537L,(-10L)},{0L,0L,0L},{(-10L),0x2E166537L,(-10L)},{0L,0L,0L},{(-10L),0x2E166537L,(-10L)},{0L,0L,0L},{(-10L),0x2E166537L,(-10L)},{0L,0L,0L}};
        int i, j;
        if ((safe_mul_func_int16_t_s_s(((*l_923) &= (((safe_add_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s(g_20[g_906], func_53((l_917 == &l_918[1]), l_919, l_920[2]))) == g_20[g_906]) > (g_20[g_906] == (g_99--))), g_20[g_906])) <= g_906) ^ g_618.f0)), 0xA58FL)))
        {
            for (g_136 = 1; (g_136 <= 7); g_136 += 1)
            {
                return l_924;
            }
        }
        else
        {
            union U0 *l_925 = &g_618;
            union U0 **l_926 = &g_617;
            int l_935 = 7L;
            int l_937 = 0x11611328L;
            int l_939 = 0xB313A8DDL;
            int l_946[5][7][7] = {{{0xF0F0B206L,0x7FFFA3BDL,(-8L),(-1L),0x39447D71L,1L,6L},{1L,1L,0x30A2738CL,2L,0x06AF7804L,0x69BC56CDL,(-7L)},{0xE45B1AC8L,0x4835AAFBL,1L,(-1L),6L,(-9L),(-5L)},{0xD6A72C17L,5L,(-1L),0x9C0B7DA1L,0xA0690442L,(-5L),0x8529AAE7L},{0x30781103L,1L,5L,5L,1L,0x30781103L,(-10L)},{0L,5L,0x8529AAE7L,0xE45B1AC8L,(-1L),1L,0L},{1L,(-5L),(-1L),0x9A240510L,(-1L),0x4835AAFBL,0x9C0B7DA1L}},{{0xAB771AC8L,5L,0xA3167584L,0x20A1CFB9L,1L,0x8529AAE7L,1L},{(-5L),1L,0x0DCC263FL,0x9A240510L,7L,6L,0x6EDF9887L},{(-8L),0x6FDC39DBL,0L,0xF8400E1AL,0xA0690442L,2L,(-5L)},{0xE0E717E3L,0L,(-1L),0L,0x4835AAFBL,0x20A1CFB9L,0x8529AAE7L},{(-1L),(-1L),(-1L),0x46DF9D39L,0x531E38FAL,(-10L),0x6105EF71L},{0x4E71CF3AL,0xAC3F39D1L,0L,0x6105EF71L,0x531E38FAL,0x8529AAE7L,0x30A2738CL},{(-7L),0xC862A3BAL,1L,0xE45B1AC8L,0x4835AAFBL,1L,(-1L)}},{{1L,2L,0L,0L,0xA0690442L,5L,2L},{0xF0F0B206L,(-5L),5L,0x4835AAFBL,7L,0xE1652EFBL,0xE1652EFBL},{0L,(-5L),0x00A0C9DAL,(-5L),0L,(-9L),1L},{0xE1652EFBL,0x7A72F0A6L,(-10L),(-5L),0x00A0C9DAL,0x531E38FAL,(-10L)},{0x8529AAE7L,0x00A0C9DAL,(-1L),1L,1L,0L,0xF0F0B206L},{0xE1652EFBL,(-5L),0xAC3F39D1L,2L,1L,0x0DCC263FL,0x9A240510L},{0L,0L,1L,0xF0F0B206L,(-3L),0xC2024D1FL,0L}},{{0xF0F0B206L,0x44B65A0AL,0x62BC23C5L,(-7L),0x7A72F0A6L,1L,(-7L)},{0x531E38FAL,0x30A2738CL,(-9L),0x39447D71L,5L,0x4835AAFBL,0x9A240510L},{0xD6A72C17L,0x81B1E9CEL,0x83551679L,0xA3167584L,0xE1652EFBL,(-10L),0x0DCC263FL},{0L,7L,0L,0xA3167584L,(-7L),0x6EDF9887L,0x30781103L},{2L,(-9L),0x81B1E9CEL,0x39447D71L,0x806B1149L,0x30781103L,0xDDCB6560L},{(-10L),0xAC3F39D1L,0xE45B1AC8L,5L,7L,1L,(-1L)},{(-1L),2L,0x7FFFA3BDL,0x0232057FL,1L,0x46DF9D39L,1L}},{{(-1L),0xA0690442L,0xA0690442L,(-1L),0x0DCC263FL,(-1L),(-1L)},{0x7FFFA3BDL,(-1L),(-10L),1L,0xF0F0B206L,0x927230AEL,2L},{0x69BC56CDL,6L,0x30781103L,0x83551679L,0x6FDC39DBL,1L,(-1L)},{5L,0xA3167584L,0x20A1CFB9L,1L,0x8529AAE7L,1L,1L},{(-8L),1L,0x69BC56CDL,0x20A1CFB9L,1L,0xDDCB6560L,(-1L)},{1L,0x4835AAFBL,(-1L),0xAB771AC8L,6L,1L,0xDDCB6560L},{0x0DCC263FL,0xF8400E1AL,0x9C0B7DA1L,0x8DDF04C4L,(-1L),0x7FFFA3BDL,0x30781103L}}};
            int **l_953 = &g_89;
            char *l_968 = &l_943;
            unsigned char l_969 = 6UL;
            int *l_974 = &g_20[0];
            unsigned char *l_975 = &g_118;
            int i, j, k;
            (*l_926) = l_925;
            for (g_254 = 0; (g_254 <= 6); g_254 += 1)
            {
                int l_927 = (-7L);
                int *l_928 = &g_20[(g_906 + 2)];
                int *l_929 = (void*)0;
                int *l_930 = &g_20[4];
                int *l_931 = &g_20[2];
                int *l_932 = &l_920[3];
                int *l_933 = &l_920[3];
                int *l_934[2];
                char *l_952[1];
                unsigned char *l_959 = &l_947;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_934[i] = &l_920[2];
                for (i = 0; i < 1; i++)
                    l_952[i] = &g_34;
                l_947++;
                (*l_933) = (safe_mul_func_uint8_t_u_u(g_138[(g_254 + 1)][g_254], ((&g_51 == (void*)0) == (l_945[6][1] <= 65535UL))));
                return l_953;
            }
            for (g_581 = 0; (g_581 <= 6); g_581 += 1)
            {
                short l_961 = 0xAAFDL;
                l_945[5][0] ^= l_961;
                for (l_942 = 0; (l_942 <= 6); l_942 += 1)
                {
                    for (g_486 = 0; (g_486 <= 6); g_486 += 1)
                    {
                        l_946[0][4][6] = ((l_945[6][1] > ((+(safe_unary_minus_func_uint8_t_u((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(l_945[3][2])), g_312))))) || (*g_51))) <= (l_961 < (-7L)));
                    }
                }
                l_940 &= (l_944 < l_969);
            }
            l_945[6][2] |= ((((!(safe_lshift_func_int8_t_s_u(5L, 7))) ^ (0x0AD89DBAL > (g_52 || g_106))) ^ func_53(((((5UL & 0x0BL) != (*g_51)) != l_944) >= (safe_mul_func_uint8_t_u_u(((*l_975) = (p_36 != l_974)), g_153))), &g_52, g_20[g_906])) && 65529UL);
        }
        return l_976;
    }
    for (g_43 = 0; (g_43 <= 25); g_43++)
    {
        unsigned char l_979[3];
        int **l_982[4][1][4] = {{{&g_88,&g_89,&g_88,&g_89}},{{&g_88,&g_89,&g_88,&g_89}},{{&g_88,&g_89,&g_88,&g_89}},{{&g_88,&g_89,&g_88,&g_89}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_979[i] = 255UL;
        --l_979[1];
        for (g_254 = 2; (g_254 <= 8); g_254 += 1)
        {
            int **l_983[1][10][7] = {{{&l_960[2][5][2],&l_960[2][1][1],&l_960[2][1][1],&l_960[2][5][2],&g_89,&l_960[2][5][2],&l_960[2][1][1]},{&l_960[2][5][2],&l_960[2][5][2],&l_960[2][1][1],&g_910,&l_960[2][1][1],&l_960[2][5][2],&l_960[2][5][2]},{&l_960[2][5][2],&l_960[2][1][1],&g_910,&l_960[2][1][1],&l_960[2][5][2],&l_960[2][5][2],&l_960[2][1][1]},{&l_960[2][5][2],&g_89,&l_960[2][5][2],&l_960[2][1][1],&l_960[2][1][1],&l_960[2][5][2],&g_89},{&l_960[2][1][1],&g_89,&g_910,&g_910,&g_89,&l_960[2][1][1],&g_89},{&l_960[2][5][2],&l_960[2][1][1],&l_960[2][1][1],&l_960[2][5][2],&g_89,&l_960[2][5][2],&l_960[2][1][1]},{&l_960[2][5][2],&l_960[2][5][2],&l_960[2][1][1],&g_910,&l_960[2][1][1],&l_960[2][5][2],&l_960[2][5][2]},{&l_960[2][5][2],&l_960[2][1][1],&g_910,&l_960[2][1][1],&l_960[2][5][2],&l_960[2][5][2],&l_960[2][1][1]},{&l_960[2][5][2],&g_89,&l_960[2][5][2],&l_960[2][1][1],&l_960[2][1][1],&l_960[2][5][2],&g_89},{&l_960[2][1][1],&g_89,&g_910,&g_910,&g_89,&l_960[2][1][1],&g_89}}};
            int i, j, k;
            return g_984;
        }
    }
    for (l_947 = 0; (l_947 < 27); ++l_947)
    {
        unsigned short **l_991 = &g_51;
        int l_994 = 5L;
        l_995 = (safe_add_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((*g_51), ((*l_917) == l_991))) < ((func_53(((safe_add_func_int32_t_s_s(((g_136 ^ (l_994 ^ (0x0771L | g_254))) < 0x37BCAD2FL), l_994)) ^ l_994), &g_52, g_153) ^ 65531UL) && (*g_51))), 7L));
    }
    return &g_88;
}







static int * func_37(int p_38, unsigned p_39, unsigned p_40, char * p_41)
{
    int *l_908 = &g_5;
    int **l_909 = &l_908;
    (*l_909) = l_908;
    return g_910;
}







static unsigned short func_48(unsigned short * p_49, unsigned char p_50)
{
    int *l_583 = &g_5;
    int **l_584 = (void*)0;
    int **l_585 = (void*)0;
    unsigned l_596 = 0x55D89A66L;
    unsigned short *l_601 = &g_138[6][2];
    unsigned short *l_604 = (void*)0;
    unsigned short *l_607 = (void*)0;
    unsigned short *l_608 = &g_581;
    int l_678 = 3L;
    int l_679 = 0xB097F462L;
    int l_680[1];
    int l_708 = 0x18166B57L;
    int l_722 = (-10L);
    union U0 l_739 = {0x6EF9EEBAL};
    char *l_758 = &g_707;
    int l_816[1];
    int *****l_840[7] = {&g_402,&g_402,&g_402,&g_402,&g_402,&g_402,&g_402};
    char l_842 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_680[i] = (-1L);
    for (i = 0; i < 1; i++)
        l_816[i] = (-7L);
    l_583 = l_583;
    if ((safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(g_363, 4)) <= (*l_583)), (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((*l_608) |= (((*l_601) = (p_50 != (safe_lshift_func_uint8_t_u_u((l_596 < g_486), (safe_rshift_func_uint16_t_u_u(((*p_49)--), 1)))))) == (safe_mul_func_uint16_t_u_u((++g_254), p_50)))), 14)), (g_99 || (l_583 == l_583)))))))
    {
        int l_609 = 0x19F718E6L;
        int l_624 = 0xC9C355BDL;
        int *l_676 = &l_624;
        int *l_677[10] = {&g_20[2],(void*)0,(void*)0,&g_20[2],(void*)0,(void*)0,(void*)0,&g_20[0],&g_20[0],(void*)0};
        union U0 **l_685 = &g_617;
        union U0 ***l_684 = &l_685;
        char *l_691[1];
        char l_709 = 0L;
        unsigned l_710 = 4294967295UL;
        unsigned l_719 = 0xB4FDF90CL;
        unsigned l_781 = 4294967295UL;
        int l_814 = (-1L);
        unsigned *l_835 = &g_618.f0;
        unsigned **l_834[4] = {&l_835,&l_835,&l_835,&l_835};
        int *****l_837 = &g_402;
        unsigned short *l_857 = &g_581;
        unsigned char l_877 = 1UL;
        int i;
        for (i = 0; i < 1; i++)
            l_691[i] = &g_34;
        if (l_609)
        {
            unsigned char l_614 = 0UL;
            unsigned *l_615 = &g_106;
            int l_616 = 0x78ADC71BL;
            union U0 **l_619 = &g_617;
            union U0 *l_621 = &g_618;
            union U0 **l_620 = &l_621;
            int **l_625 = &g_89;
            l_616 = ((((*l_615) = (((safe_sub_func_int16_t_s_s(((*l_583) && (((g_486 >= l_609) > (func_53(g_114, &g_581, p_50) | l_609)) > (l_614 | l_614))), (*g_51))) > l_609) || p_50)) >= (-1L)) != (*g_51));
            (*l_620) = ((*l_619) = g_617);
            l_624 ^= (safe_lshift_func_int16_t_s_s(p_50, 6));
            (*l_625) = (void*)0;
        }
        else
        {
            int *l_630 = &l_624;
            int *l_631 = &g_20[2];
            for (g_106 = 27; (g_106 < 8); --g_106)
            {
                short l_637 = (-1L);
                int l_654[10][1][7] = {{{0L,5L,1L,1L,(-1L),0x2CB559BCL,5L}},{{5L,(-10L),(-1L),0L,1L,5L,0xCD3C515CL}},{{0L,1L,5L,1L,0xCD3C515CL,1L,5L}},{{7L,7L,5L,6L,(-1L),3L,0x5267F3A7L}},{{0xC3522B73L,(-1L),(-1L),(-1L),7L,1L,1L}},{{0x50F36E94L,1L,1L,(-1L),(-1L),0xDFFC2B20L,1L}},{{5L,0xCD3C515CL,(-8L),(-8L),0xCD3C515CL,5L,1L}},{{0xDFFC2B20L,(-1L),(-1L),1L,1L,0x50F36E94L,1L}},{{1L,7L,(-1L),(-1L),(-1L),0xC3522B73L,0x5267F3A7L}},{{3L,(-1L),6L,5L,7L,7L,5L}}};
                char l_660 = 1L;
                int i, j, k;
                for (g_153 = 15; (g_153 <= (-11)); g_153 = safe_sub_func_uint8_t_u_u(g_153, 1))
                {
                    l_583 = &l_624;
                    l_631 = (l_630 = &l_624);
                }
                for (g_363 = 0; (g_363 < (-25)); g_363 = safe_sub_func_int8_t_s_s(g_363, 9))
                {
                    unsigned short l_634 = 0xA90BL;
                    char *l_638 = (void*)0;
                    int l_639 = 0x18BF96D6L;
                    short *l_655 = &l_637;
                    int *l_656 = &g_20[6];
                    l_634 ^= (*l_631);
                    if ((*l_631))
                        break;
                    l_639 = (safe_mul_func_int8_t_s_s((g_486 = l_637), g_312));
                    (*l_656) |= (l_637 && (((((safe_sub_func_int16_t_s_s((4294967287UL & ((((safe_sub_func_uint16_t_u_u((*p_49), g_138[5][5])) <= ((255UL && p_50) || l_609)) <= (!(((*l_655) = ((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(p_50, (safe_lshift_func_uint16_t_u_u((l_654[6][0][2] = (safe_mod_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(0x99C0L, g_75)) == (*g_51)), g_213))), (*g_51))))), 0L)) & g_618.f1)) != (*p_49)))) & l_624)), 1L)) ^ l_639) > (*g_51)) <= p_50) || l_634));
                }
                for (g_312 = (-8); (g_312 > 15); g_312 = safe_add_func_uint16_t_u_u(g_312, 9))
                {
                    int l_659 = 0x505D3769L;
                    return l_659;
                }
                for (g_52 = 0; (g_52 <= 7); g_52 += 1)
                {
                    int i;
                    g_20[g_52] = (l_660 || p_50);
                    for (g_581 = 0; (g_581 <= 1); g_581 += 1)
                    {
                        int *l_664 = &g_20[7];
                        unsigned *l_667 = &g_312;
                        unsigned short l_674 = 65528UL;
                        int i;
                        (*l_664) = (l_624 ^= (safe_unary_minus_func_int16_t_s((safe_mul_func_int8_t_s_s(0x20L, (g_116[g_581] ^ p_50))))));
                        if (p_50)
                            break;
                        (*l_664) = ((((g_114 |= ((((*l_667) ^= g_138[6][1]) & l_637) | 1L)) & 0x16D7L) == (p_49 == &g_254)) && ((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_609, (g_618.f0 = l_660))), l_674)), l_624)) == p_50));
                    }
                }
            }
            for (g_106 = 0; (g_106 <= 2); g_106 += 1)
            {
                int l_675[4][2][4] = {{{0x317877C5L,0xD5AAE723L,0xD78E3EDAL,(-6L)},{0x317877C5L,0xD78E3EDAL,0x317877C5L,1L}},{{0xD5AAE723L,(-6L),1L,1L},{0xD78E3EDAL,0xD78E3EDAL,8L,(-6L)}},{{(-6L),0x2834B2A0L,1L,0x2834B2A0L},{8L,0xD5AAE723L,(-6L),1L}},{{0x2834B2A0L,0xD5AAE723L,0xD5AAE723L,0x2834B2A0L},{0xD5AAE723L,0x2834B2A0L,8L,0x317877C5L}}};
                int i, j, k;
                return l_675[3][1][2];
            }
        }
        g_681[4]++;
        (*l_676) = ((((*l_684) = (void*)0) != (void*)0) | 0x40E90E7AL);
        for (p_50 = 0; (p_50 <= 0); p_50 += 1)
        {
            unsigned short *l_693[9][2][6] = {{{&g_52,&g_52,&g_52,&g_114,&g_138[2][2],&g_138[2][2]},{&g_52,&g_52,&g_52,&g_52,&g_52,&g_254}},{{&g_254,&g_52,&g_138[2][2],&g_52,&g_254,&g_114},{&g_52,&g_254,&g_114,&g_114,&g_254,&g_52}},{{&g_52,&g_52,&g_52,&g_254,&g_52,&g_52},{&g_52,&g_52,&g_114,&g_138[2][2],&g_138[2][2],&g_114}},{{&g_52,&g_52,&g_138[2][2],&g_254,&g_138[7][1],&g_254},{&g_52,&g_52,&g_52,&g_114,&g_138[2][2],&g_138[2][2]}},{{&g_52,&g_52,&g_52,&g_52,&g_52,&g_254},{&g_254,&g_52,&g_138[2][2],&g_52,&g_254,&g_114}},{{&g_52,&g_254,&g_114,&g_114,&g_254,&g_52},{&g_52,&g_52,&g_52,&g_254,&g_52,&g_52}},{{&g_52,&g_52,&g_114,&g_138[2][2],&g_138[2][2],&g_114},{&g_52,&g_52,&g_138[2][2],&g_138[2][2],&g_52,&g_138[2][2]}},{{&g_114,&g_52,&g_114,&g_52,&g_138[7][1],&g_138[7][1]},{&g_254,&g_114,&g_114,&g_254,&g_52,&g_138[2][2]}},{{&g_138[2][2],&g_254,&g_138[7][1],&g_254,&g_138[2][2],&g_52},{&g_254,&g_138[2][2],&g_52,&g_52,&g_138[2][2],&g_254}}};
            int *l_700 = (void*)0;
            int l_701 = 0xA97B8072L;
            int l_702 = 0xA6A1514CL;
            int l_705 = (-1L);
            int l_706[7] = {0x94CFA41FL,0x94CFA41FL,8L,0x94CFA41FL,0x94CFA41FL,8L,0x94CFA41FL};
            char *l_750 = &g_363;
            int **l_776 = &l_677[8];
            short l_808 = 0x0466L;
            int l_821 = 1L;
            short l_844[9][7][4] = {{{0xE27AL,0L,0x493FL,0xE449L},{1L,0L,0x55C3L,(-6L)},{0x533DL,0x84EDL,0x6D16L,(-6L)},{0x5CBFL,0L,0xA6B5L,0xE449L},{0x0466L,0L,0x2B9CL,0x2D81L},{0x8E9CL,0x279FL,(-1L),(-10L)},{0x1B16L,1L,0x5437L,0xEA76L}},{{0x1A86L,0x7E51L,0x5CBFL,(-1L)},{0x55C3L,0x8E9CL,0xA7FAL,2L},{0xC2B2L,0L,1L,(-1L)},{0x5CBFL,0x493FL,3L,(-1L)},{(-1L),0xD22CL,0x28EDL,0L},{0x493FL,0xA7FAL,0xE923L,1L},{0x7E51L,0x55C3L,0x279FL,(-10L)}},{{(-1L),0x7E51L,0L,(-1L)},{4L,0x2B9CL,0xC2B2L,0x0FB8L},{0x2CA1L,0xE27AL,9L,(-1L)},{1L,0xA6B5L,(-1L),0x1A86L},{8L,(-1L),(-2L),4L},{0x28EDL,0x410EL,9L,(-1L)},{0x524CL,0x1B16L,0xEA76L,(-1L)}},{{0x2D81L,1L,0x86E4L,4L},{0xB53BL,0x38E8L,(-1L),0x0FB8L},{0xC376L,0xA7FAL,0x0FB8L,0xE449L},{0x6C65L,1L,2L,0x5437L},{(-10L),0L,6L,0x0745L},{0x28A9L,0xBCFAL,(-1L),1L},{0x524CL,(-10L),(-1L),0xD8CCL}},{{0xEA76L,0x8DE7L,1L,2L},{(-10L),0x86E4L,(-10L),0x0466L},{0xDFCAL,(-10L),9L,0x188CL},{(-7L),1L,0x2EEDL,(-10L)},{2L,4L,0x2EEDL,1L},{(-7L),0x7E51L,9L,(-1L)},{0xDFCAL,0x533DL,(-10L),(-1L)}},{{(-10L),(-1L),1L,0xA7FAL},{0xEA76L,0x6C65L,(-1L),0L},{0x524CL,0x1A86L,(-1L),0x84EDL},{0x28A9L,0xA6B5L,6L,4L},{1L,5L,0x493FL,8L},{0L,0x84EDL,0xA5A4L,0x4455L},{(-10L),9L,(-1L),1L}},{{(-1L),2L,0xC376L,1L},{(-1L),0xC376L,(-1L),0x28A9L},{1L,6L,(-10L),(-7L)},{0x2CA1L,(-1L),0x4455L,(-1L)},{6L,1L,0xA02FL,0xE27AL},{1L,(-1L),3L,0x493FL},{7L,9L,9L,2L}},{{0x670EL,0x1A86L,0xE06BL,(-1L)},{0x0466L,1L,0x0FB8L,0x2C25L},{0x279FL,(-1L),0x86E4L,0x28EDL},{(-1L),0xD8CCL,0x4455L,0x9210L},{(-1L),(-10L),0xE3F9L,0x1A86L},{1L,(-1L),(-7L),0x8E9CL},{(-1L),0x670EL,0x7BA9L,7L}},{{(-1L),5L,1L,(-1L)},{0xE449L,(-1L),(-1L),0xA6B5L},{(-10L),0x30F4L,(-1L),(-1L)},{1L,1L,1L,1L},{2L,1L,0x4237L,(-1L)},{1L,0L,(-10L),0x4237L},{4L,0L,(-1L),(-1L)}}};
            unsigned l_869 = 5UL;
            int i, j, k;
            l_676 = &g_20[(p_50 + 5)];
            for (g_486 = 7; (g_486 >= 0); g_486 -= 1)
            {
                int **l_690 = &g_88;
                int l_694 = 0L;
                int l_695[5] = {(-9L),(-9L),(-9L),(-9L),(-9L)};
                char l_703 = 0x1AL;
                int l_704 = 0x05305628L;
                int i;
                for (l_679 = 0; (l_679 >= 0); l_679 -= 1)
                {
                    int l_692 = 0x3DBF6D41L;
                    unsigned char l_697 = 247UL;
                    int i;
                    l_680[l_679] = (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((g_20[(l_679 + 4)] > ((1L | p_50) < func_53(((((l_692 = ((0x59L <= g_20[(p_50 + 5)]) == g_20[(p_50 + 5)])) >= g_20[(l_679 + 4)]) >= g_20[(p_50 + 5)]) < 0xAC18L), l_693[2][0][3], g_581))), 11)), g_20[(l_679 + 4)]));
                    for (g_99 = 0; (g_99 <= 7); g_99 += 1)
                    {
                        int l_696[6] = {0x6F16CB10L,0x6F16CB10L,(-7L),0x6F16CB10L,0x6F16CB10L,(-7L)};
                        int i;
                        ++l_697;
                        l_700 = &l_624;
                    }
                    if (p_50)
                        break;
                }
                --l_710;
                for (g_52 = 0; (g_52 <= 4); g_52 += 1)
                {
                    int *l_720 = &l_624;
                    if (p_50)
                    {
                        short *l_717 = &g_136;
                        union U0 ***l_718 = (void*)0;
                        int i;
                        l_695[g_52] = (!((g_618.f0 ^= (safe_mod_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((*p_49), 65528UL)) >= (((0x9FF413D1L || func_53((((*l_717) |= g_138[0][4]) | ((l_718 == (void*)0) != p_50)), p_49, g_486)) || l_719) || (*p_49))), p_50))) == 0L));
                    }
                    else
                    {
                        if ((*l_676))
                            break;
                        (*l_690) = l_720;
                    }
                }
                (*l_690) = (void*)0;
            }
        }
    }
    else
    {
        char l_886 = 0xB1L;
        unsigned short *l_887 = &g_254;
        int *l_888 = &l_680[0];
        unsigned short **l_891[3][8] = {{&l_607,&l_607,&g_51,&l_607,&l_607,&g_51,&l_607,&l_607},{&l_601,&l_607,&l_601,&l_601,&l_607,&l_601,&l_601,&l_607},{&l_607,&l_601,&l_601,&l_607,&l_601,&l_601,&l_607,&l_601}};
        unsigned short ***l_890 = &l_891[2][5];
        union U0 *l_900 = &l_739;
        int i, j;
        for (g_153 = 0; (g_153 < 11); ++g_153)
        {
            unsigned *l_889[9][4] = {{(void*)0,&g_213,&g_75,&g_213},{&g_213,(void*)0,&g_213,&g_213},{&g_213,&g_213,(void*)0,(void*)0},{&g_681[2],&g_681[2],&g_75,(void*)0},{&g_681[2],(void*)0,(void*)0,&g_681[2]},{&g_213,(void*)0,&g_213,(void*)0},{&g_213,(void*)0,&g_75,&g_681[2]},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_213,&g_681[2],(void*)0,(void*)0}};
            short *l_892 = &g_136;
            int i, j;
            (*l_888) = func_53((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((func_53(l_886, l_887, (g_681[4] = (l_888 != (void*)0))) | ((void*)0 == l_890)), p_50)), ((*l_892) = ((*l_888) = g_581)))), p_49, p_50);
        }
        for (g_114 = 18; (g_114 <= 1); g_114--)
        {
            int *l_895 = &l_680[0];
            union U0 **l_901 = &l_900;
            union U0 *l_902[10][1] = {{&g_618},{&l_739},{&g_618},{&l_739},{&g_618},{&g_618},{&l_739},{&g_618},{&l_739},{&g_618}};
            unsigned short *l_903 = &g_138[0][0];
            int l_904[4] = {1L,1L,1L,1L};
            int l_905[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_905[i] = 1L;
            for (l_886 = 2; (l_886 >= 0); l_886 -= 1)
            {
                int *l_896 = &l_680[0];
                unsigned l_897 = 4294967286UL;
                l_896 = l_895;
                l_897--;
            }
            l_902[4][0] = ((*l_901) = l_900);
            (*l_895) = p_50;
            l_905[0] ^= (l_904[0] &= func_53(p_50, l_903, (*l_888)));
        }
        l_888 = l_888;
    }
    return (*g_51);
}







static unsigned char func_53(unsigned p_54, unsigned short * p_55, unsigned p_56)
{
    for (g_254 = 0; g_254 < 8; g_254 += 1)
    {
        for (p_54 = 0; p_54 < 7; p_54 += 1)
        {
            g_138[g_254][p_54] = 0x6D03L;
        }
    }
    return g_312;
}







static unsigned short func_59(unsigned p_60, unsigned short p_61, union U0 p_62)
{
    int *l_77[6] = {&g_20[1],&g_20[1],&g_20[1],&g_20[1],&g_20[1],&g_20[1]};
    char *l_86 = (void*)0;
    int **l_87[6] = {&l_77[0],&l_77[0],&l_77[0],&l_77[0],&l_77[0],&l_77[0]};
    unsigned short *l_137[2];
    int *l_139[5][8][5] = {{{&g_20[7],&g_20[7],&g_20[2],&g_20[2],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[2],&g_20[2],&g_20[7],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[7],&g_20[2],&g_20[2],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[2],&g_20[2],&g_20[7],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0}},{{&g_20[7],&g_20[7],&g_20[2],&g_20[2],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[2],&g_20[2],&g_20[7],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[7],&g_20[2],&g_20[2],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[2],&g_20[2],&g_20[7],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0}},{{&g_20[7],&g_20[7],&g_20[2],&g_20[2],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[2],&g_20[2],&g_20[7],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[7],&g_20[2],&g_20[2],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[2],&g_20[2],&g_20[7],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0}},{{&g_20[7],&g_20[7],&g_20[2],&g_20[2],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[2],&g_20[2],&g_20[7],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[7],&g_20[2],&g_20[2],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[2],&g_20[2],&g_20[7],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0}},{{&g_20[7],&g_20[7],&g_20[2],&g_20[2],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[2],&g_20[2],&g_20[7],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[7],&g_20[2],&g_20[2],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0},{&g_20[7],&g_20[2],&g_20[2],&g_20[7],&g_20[7]},{(void*)0,&g_20[2],(void*)0,&g_20[2],(void*)0}}};
    char *l_159 = (void*)0;
    unsigned l_166 = 1UL;
    short l_174 = 0x01E9L;
    int **l_222 = &l_77[5];
    char l_230 = 1L;
    int ****l_252 = (void*)0;
    int l_280 = 0L;
    int l_338 = 0xBE9886F2L;
    int l_361 = 0xDB528E1AL;
    int l_400 = (-1L);
    unsigned l_462 = 0x60FBCAA2L;
    unsigned l_487 = 4294967292UL;
    int l_499[3][9][4] = {{{0x3053EF99L,0xD518D172L,0x743CD3CBL,0x2816BFDFL},{7L,(-1L),0x27D93C99L,0xD518D172L},{2L,0x6FA21EA1L,0x27D93C99L,0xC95C5BA4L},{7L,0xFAA22C8EL,0x743CD3CBL,0x743CD3CBL},{0x3053EF99L,0x3053EF99L,(-1L),2L},{(-1L),2L,1L,3L},{3L,(-1L),0x3053EF99L,1L},{0x7385E793L,(-1L),0x3929AD80L,3L},{(-1L),2L,0x2E9C7E2CL,2L}},{{0xC2697691L,0x3053EF99L,0xD518D172L,0x743CD3CBL},{0x2E9C7E2CL,0xFAA22C8EL,0x6FA21EA1L,0xC95C5BA4L},{0x743CD3CBL,0x6FA21EA1L,(-1L),0xD518D172L},{0x743CD3CBL,(-1L),0x6FA21EA1L,0x2816BFDFL},{0x2E9C7E2CL,0xD518D172L,0xD518D172L,0x2E9C7E2CL},{0xC2697691L,3L,0x2E9C7E2CL,0x27D93C99L},{(-1L),0x2816BFDFL,0x3929AD80L,7L},{0x7385E793L,0xC95C5BA4L,0x3053EF99L,7L},{3L,0x2816BFDFL,1L,0x27D93C99L}},{{(-1L),3L,(-1L),0x2E9C7E2CL},{0x3053EF99L,0xD518D172L,0x743CD3CBL,0x2816BFDFL},{7L,(-1L),0x27D93C99L,0xD518D172L},{0xC2697691L,0xFAA22C8EL,0x3929AD80L,0x3053EF99L},{0xC95C5BA4L,0xD518D172L,3L,3L},{1L,1L,7L,0xC2697691L},{7L,0xC2697691L,0x2E9C7E2CL,0L},{0L,(-1L),1L,0x2E9C7E2CL},{(-1L),(-1L),0x7385E793L,0L}}};
    unsigned short l_536[4] = {0x9D2EL,0x9D2EL,0x9D2EL,0x9D2EL};
    int l_560 = 0x985DEC32L;
    char *l_569 = &g_486;
    int *l_574 = &g_20[7];
    int *l_575 = &l_499[2][1][2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_137[i] = &g_138[0][0];
    g_20[4] = 0x201F9D99L;
    if (((g_138[0][0] &= (safe_mod_func_uint16_t_u_u(func_80(&g_34, &l_77[5], l_86, (g_88 = (void*)0), (g_89 = &g_20[2])), (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_5, (safe_add_func_uint8_t_u_u(g_118, (safe_add_func_int32_t_s_s((g_136 |= (-3L)), 0xDD55268DL)))))), 0xC0L))))) > (-1L)))
    {
        short l_148 = 0xCF34L;
        unsigned char *l_151 = &g_99;
        int *l_160 = (void*)0;
        int l_162 = 0L;
        int l_164 = 8L;
        int l_165 = (-1L);
        short l_173 = 0x23EDL;
        int l_176 = 1L;
        int l_177 = 0x331BD6A1L;
        int l_178[7] = {0x2B19B8F0L,0x2B19B8F0L,0x2B19B8F0L,0x2B19B8F0L,0x2B19B8F0L,0x2B19B8F0L,0x2B19B8F0L};
        unsigned l_179 = 0x094C64F2L;
        int **l_223 = &l_160;
        int l_227 = (-10L);
        unsigned l_241 = 0UL;
        int i;
        l_139[2][6][0] = &g_20[0];
        for (g_118 = 0; (g_118 <= 28); g_118++)
        {
            unsigned char *l_152 = (void*)0;
            char **l_158 = &l_86;
            int l_161[5];
            unsigned *l_182 = &g_106;
            int *l_221 = (void*)0;
            int i;
            for (i = 0; i < 5; i++)
                l_161[i] = 8L;
            g_153 |= (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(6UL, (((+(safe_sub_func_int16_t_s_s(0L, p_62.f1))) && (*g_89)) != l_148))), (g_106 & (249UL <= (safe_sub_func_uint32_t_u_u((254UL == (((l_151 == l_152) | l_148) > p_60)), g_118))))));
            if ((safe_lshift_func_uint16_t_u_s(((*g_51) = (l_148 >= (safe_add_func_int8_t_s_s(g_5, p_60)))), (l_161[3] ^= p_62.f0))))
            {
                char l_163 = 0x95L;
                int l_169 = 0L;
                int l_172[4];
                char l_175 = 0xE8L;
                int *l_196 = &l_178[2];
                int i;
                for (i = 0; i < 4; i++)
                    l_172[i] = 0x734017EAL;
                l_166++;
                for (l_163 = 1; (l_163 <= 5); l_163 += 1)
                {
                    int l_170 = 0xCB797A8BL;
                    int l_171[5][1];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_171[i][j] = 0x643767A3L;
                    }
                    --l_179;
                    l_172[1] = g_20[(l_163 + 2)];
                    if ((*g_89))
                        break;
                    (*g_89) = (&g_106 == l_182);
                }
                for (g_106 = 0; (g_106 <= 4); g_106 += 1)
                {
                    int i;
                    (*g_89) &= l_161[g_106];
                }
                for (l_162 = 0; (l_162 <= 4); l_162 += 1)
                {
                    for (l_176 = 3; (l_176 >= 1); l_176 -= 1)
                    {
                        char *l_193 = &l_163;
                        int i, j, k;
                        if (l_161[l_162])
                            break;
                        (*g_89) &= (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(0L, (safe_mod_func_uint32_t_u_u(l_161[3], (safe_rshift_func_uint8_t_u_s(l_161[l_162], ((*l_193) = 1L))))))), 8)), l_161[4]));
                        l_139[l_162][(l_162 + 2)][l_176] = l_139[l_176][(l_176 + 1)][l_162];
                        return (*g_51);
                    }
                    (*g_89) &= (safe_lshift_func_int8_t_s_u(1L, 0));
                    g_89 = l_196;
                }
            }
            else
            {
                int **l_210 = &g_89;
                int l_225 = (-1L);
                int l_226 = 0x83604912L;
                int l_228 = 0xEC5B960CL;
                int l_231[7] = {7L,7L,7L,7L,7L,7L,7L};
                short l_233 = 1L;
                unsigned short l_238 = 0x5AA6L;
                int i;
                for (l_176 = 19; (l_176 < 17); l_176 = safe_sub_func_int8_t_s_s(l_176, 2))
                {
                    unsigned char l_214 = 3UL;
                    g_88 = &l_161[3];
                    for (l_165 = (-9); (l_165 != (-5)); ++l_165)
                    {
                        int **l_209 = &g_89;
                        g_213 |= (p_62.f1 = (safe_mod_func_int32_t_s_s(l_173, (safe_mul_func_int8_t_s_s(((p_62.f1 ^ ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(func_80(&g_34, (l_210 = l_209), l_86, (l_160 = &g_5), (*l_209)), ((safe_add_func_uint32_t_u_u((0x9FL <= (-7L)), g_138[1][0])) != l_161[3]))), 12)) >= l_161[4])) > g_136), l_161[3])))));
                        ++l_214;
                    }
                    l_160 = &l_161[1];
                }
                if (((safe_lshift_func_int8_t_s_u((((safe_mul_func_int8_t_s_s((&g_20[4] == l_221), (!(-1L)))) > (p_62.f1 = p_61)) > (**l_210)), p_61)) == (*g_51)))
                {
                    char l_224 = 6L;
                    int l_229 = (-9L);
                    int l_232 = (-2L);
                    short l_234 = 0L;
                    int l_235 = 0xF7C256FBL;
                    int l_236 = 0x6557D323L;
                    int l_237 = 0x5E4AD93CL;
                    (*l_210) = &l_161[1];
                    l_238--;
                    l_241--;
                }
                else
                {
                    if ((**l_210))
                        break;
                    if (p_61)
                        break;
                    (*l_223) = &l_161[3];
                }
                return p_60;
            }
            for (l_162 = (-29); (l_162 < (-1)); l_162++)
            {
                char *l_248 = &l_230;
                int *l_249 = &l_164;
                (*l_222) = &g_20[2];
                (*l_223) = (*l_223);
                for (g_34 = 7; (g_34 >= 0); g_34 -= 1)
                {
                    int i;
                    for (g_114 = 0; (g_114 <= 6); g_114 += 1)
                    {
                        (*l_223) = (void*)0;
                    }
                }
            }
        }
        g_254--;
        p_62.f1 = p_61;
    }
    else
    {
        int l_264 = 9L;
        int l_273 = (-6L);
        int l_277 = 0xE4AFD018L;
        int l_313 = 0xD744C248L;
        unsigned short *l_321[1];
        char l_348 = 0x0DL;
        int l_352 = 0x5568E917L;
        int l_353 = (-5L);
        int l_356 = 1L;
        int l_357 = 0x1131163BL;
        int l_358 = 0xD919544AL;
        int l_359 = 0x9CCD3878L;
        int l_360[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        int l_362 = 0x2E9AF64DL;
        unsigned l_364 = 0x48A21B46L;
        int l_385 = 0x6C6B775DL;
        int *l_393 = (void*)0;
        int *l_419 = &l_277;
        int ****l_427 = (void*)0;
        unsigned l_431 = 0xC99BABACL;
        unsigned l_436 = 4294967295UL;
        int l_441[10][7][3] = {{{0L,(-4L),(-1L)},{(-1L),7L,7L},{0x1C57B773L,0x5A4AB3F8L,0x21BF482BL},{(-10L),(-4L),0x1C57B773L},{0L,1L,0xCD3B30CAL},{0L,(-10L),(-1L)},{0x29D20A27L,1L,(-4L)}},{{1L,(-4L),0xEAE6185FL},{0L,0x5A4AB3F8L,0xFEB5874DL},{1L,7L,(-1L)},{7L,(-4L),(-10L)},{7L,0x29D20A27L,0L},{1L,1L,0L},{0L,0L,(-10L)}},{{1L,(-2L),0L},{(-10L),0L,1L},{(-10L),3L,0L},{0L,0L,0x29D20A27L},{0x29D20A27L,0x5A4AB3F8L,(-10L)},{2L,0x29D20A27L,0x95E2887FL},{0xEAE6185FL,0xCD3B30CAL,0x1C57B773L}},{{1L,0xCD3B30CAL,0L},{(-2L),0x29D20A27L,(-2L)},{0xC2340267L,0x5A4AB3F8L,0xCD3B30CAL},{0x2E6A75B4L,0L,0x21BF482BL},{(-4L),3L,0xEAE6185FL},{0xCD3B30CAL,0L,0xE38871A0L},{(-4L),(-1L),2L}},{{0x2E6A75B4L,1L,0L},{0xC2340267L,(-1L),(-1L)},{(-2L),(-10L),0x5A4AB3F8L},{1L,0x21BF482BL,0x5A4AB3F8L},{0xEAE6185FL,(-1L),(-1L)},{2L,(-4L),0L},{0x29D20A27L,0xC5EFB3C9L,2L}},{{0L,0L,0xE38871A0L},{(-10L),0x1C57B773L,0xEAE6185FL},{(-10L),0L,0x21BF482BL},{3L,0xC5EFB3C9L,0xCD3B30CAL},{0x95E2887FL,(-4L),(-2L)},{(-1L),(-1L),0L},{(-1L),0x21BF482BL,0x1C57B773L}},{{(-1L),(-10L),0x95E2887FL},{(-1L),(-1L),(-10L)},{0x95E2887FL,1L,0x29D20A27L},{3L,(-1L),0L},{(-10L),(-10L),0x5A4AB3F8L},{1L,(-10L),(-10L)},{0xC5EFB3C9L,3L,(-1L)}},{{(-1L),0x95E2887FL,1L},{0xE38871A0L,(-1L),(-4L)},{7L,(-1L),0xCD3B30CAL},{0x29D20A27L,(-1L),(-1L)},{0L,(-1L),0L},{0x21BF482BL,0x95E2887FL,(-1L)},{0L,3L,1L}},{{0xC2340267L,(-10L),7L},{(-1L),(-10L),0L},{0xC2340267L,0L,0xE38871A0L},{0L,0x29D20A27L,3L},{0x21BF482BL,2L,(-2L)},{0L,0xEAE6185FL,0x95E2887FL},{0x29D20A27L,1L,0x95E2887FL}},{{7L,(-2L),(-2L)},{0xE38871A0L,0xC2340267L,3L},{(-1L),0x2E6A75B4L,0xE38871A0L},{0xC5EFB3C9L,(-4L),0L},{1L,0xCD3B30CAL,7L},{0xEAE6185FL,(-4L),1L},{(-10L),0x2E6A75B4L,(-1L)}}};
        short l_461 = 0x2D6AL;
        short l_490 = 0x8EE2L;
        unsigned char l_491 = 0x45L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_321[i] = &g_138[0][0];
        for (p_60 = 21; (p_60 > 3); p_60--)
        {
            int **l_259 = &l_77[2];
            int l_265 = 0xB6F7C992L;
            int l_267 = 0xBECDC32AL;
            int l_268 = 0L;
            int l_278 = 0L;
            int l_281 = 0L;
            if (func_80(&g_34, l_259, &l_230, &g_20[2], &g_20[2]))
            {
                (*g_89) |= p_62.f1;
            }
            else
            {
                short l_266 = (-8L);
                int l_276[1];
                unsigned l_282 = 1UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_276[i] = 0L;
                for (g_34 = 22; (g_34 <= 14); g_34 = safe_sub_func_int8_t_s_s(g_34, 6))
                {
                    unsigned l_262 = 4294967295UL;
                    int l_263 = 0xDDBFBD8CL;
                    int l_269 = 4L;
                    int l_271 = 0x723FC1B6L;
                    int l_272 = 0x7972D846L;
                    int l_274 = 0x05C10257L;
                    int l_275 = 0L;
                    l_264 ^= (l_263 ^= (l_262 = (**l_259)));
                    if ((**l_259))
                    {
                        (*g_89) = (*g_89);
                    }
                    else
                    {
                        short l_270[1];
                        int l_279 = (-1L);
                        int i;
                        for (i = 0; i < 1; i++)
                            l_270[i] = (-1L);
                        l_282++;
                        return (*g_51);
                    }
                    if (p_60)
                    {
                        (*g_89) = p_61;
                    }
                    else
                    {
                        unsigned l_285 = 4294967295UL;
                        ++l_285;
                        return (*g_51);
                    }
                }
            }
        }
        if (p_60)
        {
            unsigned l_302 = 1UL;
            int l_317 = (-2L);
            unsigned short l_318[8] = {1UL,0x780DL,0x780DL,1UL,0x780DL,0x780DL,1UL,0x780DL};
            int *l_332 = &l_317;
            int l_349 = 0xAC4D55F4L;
            int l_350 = 0x76C4CF83L;
            int l_351 = 0xF59C54C6L;
            int l_354[10][5][2] = {{{0x5EAAAFE8L,(-1L)},{0xA148D267L,1L},{0xA148D267L,(-1L)},{0x5EAAAFE8L,0x15580540L},{1L,0x0E268C1AL}},{{0x13D05738L,0x0E268C1AL},{1L,0x15580540L},{0x5EAAAFE8L,(-1L)},{0xA148D267L,0x1D1A26F7L},{0x13D05738L,(-10L)}},{{0xA148D267L,0x0E268C1AL},{8L,1L},{1L,1L},{8L,0x0E268C1AL},{0xA148D267L,(-10L)}},{{0x13D05738L,0x1D1A26F7L},{0x13D05738L,(-10L)},{0xA148D267L,0x0E268C1AL},{8L,1L},{1L,1L}},{{8L,0x0E268C1AL},{0xA148D267L,(-10L)},{0x13D05738L,0x1D1A26F7L},{0x13D05738L,(-10L)},{0xA148D267L,0x0E268C1AL}},{{8L,1L},{1L,1L},{8L,0x0E268C1AL},{0xA148D267L,(-10L)},{0x13D05738L,0x1D1A26F7L}},{{0x13D05738L,(-10L)},{0xA148D267L,0x0E268C1AL},{8L,1L},{1L,1L},{8L,0x0E268C1AL}},{{0xA148D267L,(-10L)},{0x13D05738L,0x1D1A26F7L},{0x13D05738L,(-10L)},{0xA148D267L,0x0E268C1AL},{8L,1L}},{{1L,1L},{8L,0x0E268C1AL},{0xA148D267L,(-10L)},{0x13D05738L,0x1D1A26F7L},{0x13D05738L,(-10L)}},{{0xA148D267L,0x0E268C1AL},{8L,1L},{1L,1L},{8L,0x0E268C1AL},{0xA148D267L,(-10L)}}};
            char l_355[4][5] = {{0x23L,0xFFL,(-5L),(-5L),0xFFL},{0x78L,0x18L,(-5L),0x92L,0x92L},{0x18L,0x78L,0x23L,0xFFL,(-5L)},{0x18L,0x7BL,(-5L),0x7BL,0x18L}};
            int i, j, k;
            for (g_106 = 1; (g_106 <= 5); g_106 += 1)
            {
                unsigned char *l_298[1][1];
                int l_299[9] = {0x602A6D73L,0x602A6D73L,4L,0x602A6D73L,0x602A6D73L,4L,0x602A6D73L,0x602A6D73L,4L};
                int *l_304 = &l_273;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_298[i][j] = (void*)0;
                }
            }
            l_364--;
        }
        else
        {
            unsigned l_375 = 4294967295UL;
            int l_386 = 0x3242EA80L;
            char *l_394[1][5][10] = {{{&l_348,&g_363,(void*)0,&g_34,&g_34,(void*)0,&g_363,&l_348,(void*)0,&l_348},{&g_34,(void*)0,&l_348,&g_34,&l_348,(void*)0,&g_34,&l_348,&l_348,&g_34},{&l_348,&l_348,&l_348,&l_348,&l_348,&l_348,(void*)0,&l_348,(void*)0,&l_348},{&g_363,&l_348,(void*)0,&l_348,&g_363,(void*)0,&g_34,&g_34,(void*)0,&g_363},{&g_363,(void*)0,(void*)0,&g_363,&l_348,&l_348,&g_363,&l_348,&l_348,&g_363}}};
            short l_401[8] = {0xBE03L,0xBE03L,0xBE03L,0xBE03L,0xBE03L,0xBE03L,0xBE03L,0xBE03L};
            int **l_406 = (void*)0;
            int *l_410 = &g_5;
            int ****l_424 = &g_403;
            int *****l_428[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_428[i] = (void*)0;
            if ((safe_lshift_func_int8_t_s_u(g_20[0], g_75)))
            {
                unsigned l_369 = 1UL;
                if (l_369)
                {
                    (*g_89) = (safe_mod_func_uint16_t_u_u(65526UL, 0xCD64L));
                    p_62.f1 = p_60;
                    for (l_352 = (-9); (l_352 >= (-29)); l_352 = safe_sub_func_int32_t_s_s(l_352, 8))
                    {
                        return (*g_51);
                    }
                }
                else
                {
                    p_62.f1 = (-2L);
                    for (g_153 = 5; (g_153 >= 0); g_153 -= 1)
                    {
                        return p_60;
                    }
                }
            }
            else
            {
                int l_383 = 8L;
                unsigned short l_389 = 0x0E76L;
                unsigned short l_392 = 0xA82EL;
                if (p_62.f0)
                {
                    for (g_136 = 1; (g_136 <= 6); g_136 += 1)
                    {
                        int *l_374 = &l_277;
                        (*l_222) = &g_20[2];
                        (*l_222) = l_374;
                    }
                }
                else
                {
                    return l_375;
                }
                for (g_52 = (-1); (g_52 > 25); g_52 = safe_add_func_uint16_t_u_u(g_52, 7))
                {
                    int *l_380 = &l_280;
                    int l_384 = (-1L);
                    short l_388 = 0x1252L;
                    for (l_357 = 0; (l_357 < (-16)); l_357 = safe_sub_func_uint8_t_u_u(l_357, 1))
                    {
                        l_380 = &g_20[2];
                    }
                    if ((safe_rshift_func_uint16_t_u_s((*g_51), 0)))
                    {
                        if (p_60)
                            break;
                    }
                    else
                    {
                        int l_387 = 9L;
                        l_389++;
                        p_62.f1 ^= (*l_380);
                        (*l_380) = (p_60 | l_277);
                    }
                    if (l_375)
                        continue;
                    l_392 &= l_356;
                }
                l_393 = &l_386;
                (*l_393) |= ((p_62.f1 == (-10L)) <= g_20[2]);
            }
            for (l_364 = 0; (l_364 < 28); l_364++)
            {
                short *l_399 = &g_136;
                unsigned *l_405[1][2];
                int l_408[10] = {(-4L),(-4L),(-1L),0x3571ED39L,(-1L),(-4L),(-4L),(-1L),0x3571ED39L,(-1L)};
                int l_409 = 0x39AA4927L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_405[i][j] = (void*)0;
                }
            }
            for (l_386 = (-8); (l_386 <= (-20)); l_386 = safe_sub_func_uint32_t_u_u(l_386, 8))
            {
                (**g_402) = &l_393;
                (***l_424) = &l_277;
            }
            if (((*g_89) <= ((g_402 = l_427) == &g_403)))
            {
                int l_429 = 0L;
                int l_430[9][10][2] = {{{0x37B25633L,0xC7F62580L},{1L,(-6L)},{(-6L),0x5CBEF243L},{6L,9L},{0x00FB706BL,0x394B1118L},{1L,1L},{(-1L),1L},{0L,6L},{(-8L),(-1L)},{0x46805EDEL,0L}},{{0xB78B93DEL,1L},{0x809DF4DEL,0xEE999F81L},{4L,4L},{0xB3C0F1C8L,1L},{0xED91C40DL,4L},{0x833D95DAL,(-1L)},{9L,0xC8CBE8F3L},{(-1L),(-1L)},{0xA22BFF70L,0L},{2L,0x91F0493EL}},{{0x5CBEF243L,6L},{0L,(-6L)},{1L,(-1L)},{0x59C5AB0DL,0xAFFC9EDDL},{0L,0x8939E05AL},{5L,0x2BA98F9FL},{0x667D3430L,0xEA47795FL},{0xED505FB4L,0x3EB7E668L},{0x08EEE848L,(-1L)},{0x8939E05AL,0x4C3E2A3DL}},{{0x5FBE0D60L,0xB78B93DEL},{0x00FB706BL,3L},{0x13B33338L,(-2L)},{1L,0xED91C40DL},{(-10L),8L},{(-1L),0x08EEE848L},{6L,0x0C03157AL},{0xECC7FC3EL,(-2L)},{9L,0x37B25633L},{0x4C3E2A3DL,6L}},{{1L,1L},{0xAFFC9EDDL,1L},{1L,6L},{0x4C3E2A3DL,0x37B25633L},{9L,(-2L)},{0xECC7FC3EL,0x0C03157AL},{6L,0x08EEE848L},{(-1L),8L},{(-10L),0xED91C40DL},{1L,(-2L)}},{{0x13B33338L,3L},{0x00FB706BL,0xB78B93DEL},{0x5FBE0D60L,0x4C3E2A3DL},{8L,0xECC7FC3EL},{(-1L),(-1L)},{(-3L),0x0C03157AL},{(-7L),0x00FB706BL},{(-1L),8L},{0x809DF4DEL,(-1L)},{0x46805EDEL,0x394B1118L}},{{0xEA47795FL,(-2L)},{0x5FBE0D60L,0xA7E9BCF9L},{0xCF183CB6L,0x8939E05AL},{0xC8CBE8F3L,0x809DF4DEL},{0xB3C0F1C8L,0x37B25633L},{0xEE999F81L,6L},{0L,0xC7F62580L},{0xC4C76081L,(-1L)},{1L,0xEA47795FL},{0x7DC81874L,(-10L)}},{{(-1L),0xED505FB4L},{0x65A0BDE1L,5L},{0x19E7CAFCL,3L},{(-2L),0x99859BACL},{9L,8L},{0xA00123F2L,0xB78B93DEL},{0x37B25633L,6L},{(-1L),(-7L)},{0L,(-1L)},{0x7CCE1144L,0xB64B8A65L}},{{0x5CBEF243L,0x5CBEF243L},{0L,0xA00123F2L},{0x91F0493EL,0xE4C07327L},{4L,1L},{0x59C5AB0DL,4L},{0x8939E05AL,0x7DC81874L},{0x8939E05AL,4L},{0x59C5AB0DL,1L},{4L,0xE4C07327L},{0x91F0493EL,0xA00123F2L}}};
                int i, j, k;
                --l_431;
            }
            else
            {
                int *l_434 = (void*)0;
                (*l_419) |= (!p_62.f1);
            }
        }
        if ((!(p_62.f1 || g_52)))
        {
            int *l_435 = (void*)0;
            (*l_222) = l_435;
        }
        else
        {
            unsigned char *l_444[8][8] = {{&g_2,&g_116[0],&g_118,&g_2,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_99,&g_99,(void*)0,(void*)0,&g_116[1],&g_118,(void*)0},{&g_2,&g_25,&g_25,(void*)0,(void*)0,&g_118,&g_2,(void*)0},{&g_25,(void*)0,(void*)0,&g_2,(void*)0,&g_99,&g_116[0],&g_116[0]},{(void*)0,&g_25,&g_116[1],&g_116[1],&g_25,(void*)0,&g_116[0],(void*)0},{&g_2,&g_116[1],(void*)0,&g_99,&g_2,&g_25,&g_2,&g_99},{&g_2,&g_25,&g_2,&g_99,(void*)0,&g_116[1],&g_2,(void*)0},{&g_116[0],(void*)0,&g_25,&g_116[1],&g_116[1],&g_25,(void*)0,&g_116[0]}};
            int l_445 = 0x1ED98C18L;
            int l_446 = (-6L);
            unsigned short l_447 = 1UL;
            unsigned *l_450 = &l_431;
            int l_453 = 0x0BB3F95CL;
            int l_458 = 0xA6D7E3F6L;
            int l_460[7][4] = {{(-8L),0x02E0E847L,(-8L),1L},{(-8L),1L,1L,(-8L)},{0L,1L,0x22A533F0L,1L},{1L,0x02E0E847L,0x22A533F0L,0x22A533F0L},{0L,0L,1L,0x22A533F0L},{(-8L),0x02E0E847L,(-8L),1L},{(-8L),1L,1L,(-8L)}};
            int i, j;
            --l_436;
            if ((((--p_61) >= (g_153 == (((*l_450) = (!(l_441[9][4][2] || ((--l_447) && (0x0A77BB4BL > (l_446 && (l_444[3][3] != &g_34))))))) || ((p_60 & l_446) <= ((l_445 ^ p_60) <= 5L))))) & 0UL))
            {
                char l_451[9][5] = {{0xF4L,(-3L),0xC2L,0xF4L,(-7L)},{0L,0xF4L,0x76L,0xF4L,0L},{0xC2L,0x8BL,(-3L),(-7L),0x8BL},{0L,(-3L),(-3L),0L,(-7L)},{0xF4L,0L,0x76L,0x8BL,0xF4L},{(-7L),0x8BL,(-7L),(-3L),0x8BL},{0xF4L,0xC2L,(-3L),0xF4L,(-3L)},{0xF4L,0xF4L,0L,0x8BL,0L},{(-7L),0L,(-3L),(-3L),0L}};
                int l_452 = 0xCC983134L;
                int l_454 = 0xB3E008DCL;
                int l_455 = 0xB000903FL;
                int l_456 = 0L;
                int l_457 = 0x13D85B29L;
                int l_459 = 0x73061F92L;
                char *l_471[6] = {&l_451[3][3],&l_451[3][3],&l_451[3][3],&l_451[3][3],&l_451[3][3],&l_451[3][3]};
                short *l_476 = &l_461;
                int i, j;
                p_62.f1 |= l_447;
                l_462--;
                l_445 ^= (p_62.f1 >= (safe_sub_func_uint32_t_u_u(((g_5 >= (safe_sub_func_int8_t_s_s((l_460[2][0] <= g_138[6][2]), 0x0DL))) || (safe_sub_func_uint16_t_u_u((*g_51), ((g_34 = (l_459 != g_363)) & (safe_mod_func_uint8_t_u_u((((*l_476) ^= (safe_sub_func_uint8_t_u_u(l_447, 0x2CL))) >= g_25), g_116[0])))))), p_60)));
            }
            else
            {
                char *l_477[7];
                char **l_478 = (void*)0;
                char **l_479 = &l_159;
                int *l_480 = &g_5;
                int *l_481 = &l_360[3];
                int i;
                for (i = 0; i < 7; i++)
                    l_477[i] = &g_34;
                l_460[2][0] = (*l_481);
                (**g_403) = l_480;
                for (l_445 = 0; (l_445 == 11); l_445 = safe_add_func_uint16_t_u_u(l_445, 2))
                {
                    if (p_61)
                        break;
                    for (l_431 = 15; (l_431 < 39); l_431 = safe_add_func_int32_t_s_s(l_431, 8))
                    {
                        if (p_62.f1)
                            break;
                    }
                }
                (*l_481) = 5L;
            }
            ++l_487;
            (*l_419) = p_62.f1;
        }
        ++l_491;
    }
    for (g_118 = 0; (g_118 < 50); g_118 = safe_add_func_int16_t_s_s(g_118, 7))
    {
        int *l_498 = (void*)0;
        int l_511 = 0xFBE30CBFL;
        char *l_514 = &g_363;
        unsigned short l_547 = 0xD2AAL;
        int *****l_557[6][1][4] = {{{&g_402,&g_402,&g_402,&g_402}},{{&g_402,&g_402,&g_402,&g_402}},{{&g_402,&g_402,&g_402,&g_402}},{{&g_402,&g_402,&g_402,&g_402}},{{&g_402,&g_402,&g_402,&g_402}},{{&g_402,&g_402,&g_402,&g_402}}};
        short *l_561 = &g_136;
        unsigned *l_565 = &l_462;
        unsigned **l_564 = &l_565;
        int **l_576 = &l_77[3];
        int *l_577 = (void*)0;
        int *l_578 = &g_20[2];
        int i, j, k;
        for (l_338 = 6; (l_338 >= 0); l_338 -= 1)
        {
            char **l_496 = &l_86;
            int **l_497[4][5] = {{&l_139[4][6][3],&g_88,&l_139[4][6][3],&l_77[5],&l_139[1][6][1]},{&g_89,&g_88,&l_139[1][6][1],&g_88,&g_89},{&l_139[4][6][3],&g_88,&g_88,&g_89,&g_88},{&g_88,&g_88,&l_139[1][6][1],&g_89,(void*)0}};
            int *l_504 = &l_280;
            int l_510 = 1L;
            int i, j;
            l_499[2][1][2] = (g_138[l_338][l_338] >= p_62.f1);
            for (g_486 = 4; (g_486 >= 0); g_486 -= 1)
            {
                int i, j, k;
                if (p_61)
                {
                    unsigned *l_507 = &l_462;
                    int l_508[4][4] = {{0x1633D538L,0x20BE680DL,0x1633D538L,0x20BE680DL},{0x1633D538L,0x20BE680DL,0x1633D538L,0x20BE680DL},{0x1633D538L,0x20BE680DL,0x1633D538L,0x20BE680DL},{0x1633D538L,0x20BE680DL,0x1633D538L,0x20BE680DL}};
                    int i, j, k;
                    l_508[2][0] |= ((((safe_rshift_func_int8_t_s_s(((p_62.f1 |= p_60) | ((*l_507) ^= (p_60 > (((safe_lshift_func_uint16_t_u_s(p_61, 7)) >= (safe_mod_func_uint32_t_u_u(0xAC816C9AL, p_60))) >= 0xC2L)))), 0)) & p_60) == g_25) || 3UL);
                    l_139[g_486][(g_486 + 2)][g_486] = l_498;
                }
                else
                {
                    p_62.f1 = 0x8A9DAAB8L;
                }
                for (l_462 = 0; (l_462 <= 3); l_462 += 1)
                {
                    int *l_509 = &l_361;
                    int i, j;
                    l_509 = l_509;
                    for (g_114 = 0; (g_114 <= 2); g_114 += 1)
                    {
                        int i, j, k;
                        l_499[g_114][(g_114 + 2)][g_114] ^= ((g_138[g_486][(g_114 + 3)] != g_5) >= g_114);
                    }
                    if (l_510)
                        break;
                    p_62.f1 = ((*l_509) |= l_511);
                }
            }
            p_62.f1 = p_61;
            (*l_222) = &l_511;
            for (l_400 = 4; (l_400 >= 0); l_400 -= 1)
            {
                char *l_520 = &g_363;
                unsigned short l_522 = 65530UL;
                int l_537 = 0x42A21239L;
                unsigned *l_563[3][7] = {{&g_312,&g_312,&g_312,&g_312,&g_312,&g_312,&g_312},{&g_312,&g_312,(void*)0,(void*)0,&g_312,(void*)0,(void*)0},{&g_312,&g_312,&g_312,&g_312,&g_312,&g_312,&g_312}};
                unsigned **l_562 = &l_563[2][6];
                unsigned l_568[4][10][6] = {{{0x57515F4CL,0xBB6A6A80L,0UL,4294967294UL,0UL,4294967295UL},{0xBB6A6A80L,9UL,0x4A2053DEL,0xFD29C0C2L,4294967295UL,4294967295UL},{1UL,0x6B38AD6CL,0x6B38AD6CL,1UL,0UL,0x135FBDA4L},{1UL,0x6EFD513EL,0x36E6235AL,4294967295UL,0xD2E7D6A2L,0UL},{0x0CC8D952L,1UL,0xBF58B719L,0x9B2C799DL,0xD2E7D6A2L,0x608AD99AL},{0UL,0x6EFD513EL,0x6C39AAE8L,0UL,0UL,4294967295UL},{2UL,0x6B38AD6CL,5UL,0xD1445FCFL,4294967295UL,0UL},{4294967295UL,9UL,1UL,0x33ADD017L,0UL,0x2C6DFDA1L},{0x6EFD513EL,0xBB6A6A80L,4294967295UL,0x904A2C95L,5UL,1UL},{0UL,5UL,0xC0DE79F6L,1UL,4294967295UL,0UL}},{{0xBF58B719L,0x2C6DFDA1L,0x33ADD017L,0x4A2053DEL,1UL,0x9B2C799DL},{0xD1445FCFL,0UL,4294967295UL,5UL,0x33ADD017L,5UL},{4294967295UL,1UL,4294967295UL,4294967292UL,0UL,0x33ADD017L},{5UL,0xD2E7D6A2L,0x0CC8D952L,0x2C6DFDA1L,4294967295UL,0x5A84DB3FL},{5UL,5UL,0UL,0UL,0xFD29C0C2L,0x97D032FBL},{0x61757C73L,0x6B38AD6CL,4294967295UL,0x97D032FBL,0UL,0xD2E7D6A2L},{2UL,1UL,3UL,0x57515F4CL,0x6C39AAE8L,0x904A2C95L},{0UL,4294967295UL,4294967295UL,0UL,4294967295UL,4294967295UL},{4294967294UL,0x2EA8104DL,4294967295UL,4294967295UL,1UL,5UL},{1UL,0UL,0UL,0x9B2C799DL,1UL,0xD1445FCFL}},{{0x6C39AAE8L,0x36E6235AL,1UL,0x2EA8104DL,1UL,0x61757C73L},{0xFD29C0C2L,0x67F7BAA7L,0x36E6235AL,0UL,0UL,0x36E6235AL},{1UL,1UL,0x1E92B4EEL,1UL,4294967294UL,4294967295UL},{0xC0DE79F6L,0x9B2C799DL,0xFD29C0C2L,9UL,0UL,0x1E92B4EEL},{0x904A2C95L,0xC0DE79F6L,0xFD29C0C2L,2UL,1UL,4294967295UL},{4294967295UL,2UL,0x1E92B4EEL,2UL,0x3DBC1C44L,0x36E6235AL},{2UL,0x3DBC1C44L,0x36E6235AL,0xBB6A6A80L,4294967295UL,0x61757C73L},{0x1E92B4EEL,0x5A84DB3FL,1UL,5UL,0x135FBDA4L,0xD1445FCFL},{0x135FBDA4L,0UL,0UL,4294967294UL,0xD1445FCFL,5UL},{4294967295UL,0x2C6DFDA1L,4294967295UL,4294967294UL,1UL,0x61757C73L}},{{4294967295UL,0x6EFD513EL,1UL,0UL,0UL,0x97D032FBL},{2UL,0x67F7BAA7L,0x135FBDA4L,0x36E6235AL,0x135FBDA4L,0x67F7BAA7L},{1UL,1UL,0x6EFD513EL,4294967295UL,4294967294UL,3UL},{1UL,0x4A2053DEL,0x33ADD017L,0x2C6DFDA1L,0xBF58B719L,4294967292UL},{0x135FBDA4L,0x4A2053DEL,0x97D032FBL,0x1E92B4EEL,4294967294UL,4294967295UL},{0x61757C73L,1UL,0x6C39AAE8L,1UL,0x135FBDA4L,0xBB6A6A80L},{0UL,0x67F7BAA7L,0x61757C73L,0x135FBDA4L,0UL,4294967294UL},{0x79ED7A71L,0x6EFD513EL,4294967295UL,4294967292UL,1UL,9UL},{0x57515F4CL,9UL,0x36E6235AL,0x2EA8104DL,0x0CC8D952L,4294967292UL},{0xD1445FCFL,0x33ADD017L,2UL,4294967294UL,0x1E92B4EEL,0UL}}};
                int l_570[7] = {1L,1L,1L,1L,1L,1L,1L};
                unsigned l_571[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_571[i] = 0xDEF96722L;
                p_62.f1 ^= p_60;
                if ((p_61 > (l_514 == &g_34)))
                {
                    unsigned l_515 = 4294967295UL;
                    int *l_516 = (void*)0;
                    int *l_517 = &g_20[6];
                    char *l_521 = &g_486;
                    short l_535 = (-1L);
                    for (l_487 = 0; (l_487 <= 1); l_487 += 1)
                    {
                        int i;
                        p_62.f1 = g_116[l_487];
                        l_515 = p_60;
                    }
                    l_517 = (l_498 = ((*l_222) = l_516));
                    if ((l_537 ^= (((safe_mul_func_uint16_t_u_u(l_522, (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(p_62.f1, ((safe_add_func_uint32_t_u_u(g_99, ((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((((p_61 && p_62.f1) > l_535) < 0L), (*l_504))), p_60)), 0L)) <= l_536[1]))) >= 1UL))), 5L)))) <= p_62.f1) > 0x2C3CE33FL)))
                    {
                        if (p_62.f1)
                            break;
                    }
                    else
                    {
                        char *l_538 = &g_363;
                        (*l_504) |= p_61;
                    }
                    (*l_222) = &l_511;
                }
                else
                {
                    short *l_543 = &l_174;
                    short *l_546[8][9][3] = {{{(void*)0,&g_136,&g_136},{(void*)0,&g_136,(void*)0},{(void*)0,&g_136,&g_136},{(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,(void*)0},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136}},{{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{(void*)0,(void*)0,&g_136},{&g_136,&g_136,&g_136},{(void*)0,&g_136,(void*)0},{(void*)0,(void*)0,&g_136},{&g_136,(void*)0,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,(void*)0}},{{(void*)0,&g_136,(void*)0},{(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{(void*)0,(void*)0,(void*)0},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{(void*)0,&g_136,&g_136}},{{&g_136,&g_136,&g_136},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_136,&g_136},{(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136},{(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136},{(void*)0,&g_136,&g_136},{(void*)0,&g_136,&g_136}},{{&g_136,&g_136,(void*)0},{(void*)0,&g_136,&g_136},{(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,(void*)0}},{{&g_136,(void*)0,&g_136},{(void*)0,&g_136,(void*)0},{&g_136,&g_136,(void*)0},{&g_136,&g_136,(void*)0},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136}},{{&g_136,&g_136,&g_136},{&g_136,(void*)0,(void*)0},{&g_136,&g_136,(void*)0},{&g_136,&g_136,&g_136},{&g_136,(void*)0,&g_136},{(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,(void*)0,(void*)0}},{{&g_136,(void*)0,&g_136},{&g_136,&g_136,(void*)0},{(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136},{(void*)0,&g_136,(void*)0},{&g_136,&g_136,&g_136},{(void*)0,&g_136,&g_136}}};
                    int **l_553 = &g_89;
                    int i, j, k;
                    if ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((l_547 = (((*l_543) = g_213) || (g_20[4] ^ (safe_lshift_func_int8_t_s_s((p_61 <= p_60), 1))))) && 0x537AL), 0UL)) & p_62.f1), 0xACL)))
                    {
                        unsigned l_548 = 1UL;
                        ++l_548;
                    }
                    else
                    {
                        char *l_554 = &g_486;
                        int *l_555 = &l_499[2][1][2];
                        unsigned l_556 = 3UL;
                        (*l_504) = (safe_add_func_uint32_t_u_u(l_537, p_60));
                        l_556 |= (*l_555);
                    }
                    for (g_213 = 0; (g_213 <= 6); g_213 += 1)
                    {
                        (*l_553) = (void*)0;
                    }
                    p_62.f1 = (((void*)0 != l_557[0][0][0]) == ((safe_add_func_int8_t_s_s((l_560 > (&g_136 != l_561)), (+((l_562 != l_564) || (0xCF2BL > (safe_rshift_func_uint8_t_u_u(p_61, l_568[3][7][5]))))))) | p_61));
                }
                (*l_504) = (p_61 != (g_25 || (p_62.f1 | g_20[0])));
                l_571[1]++;
            }
        }
        p_62.f1 |= p_60;
        p_62.f1 |= (0x6858BB54L ^ g_106);
    }
    for (g_486 = 0; (g_486 <= (-7)); g_486--)
    {
        if (g_581)
            break;
        if (p_61)
            break;
    }
    return (*g_51);
}







static unsigned short func_80(char * p_81, int ** p_82, char * p_83, int * p_84, int * p_85)
{
    int l_94 = (-1L);
    int l_95 = (-1L);
    int l_96 = (-4L);
    int l_98 = 0x50651456L;
    unsigned char l_123 = 0UL;
    for (g_52 = 2; (g_52 <= 7); g_52 += 1)
    {
        int **l_90 = &g_88;
        int ***l_91 = &l_90;
        int l_97 = 0L;
        int i;
        (*l_91) = l_90;
        for (g_75 = 2; (g_75 <= 7); g_75 += 1)
        {
            int l_92 = 0x11CD9E91L;
            int *l_93[6];
            int l_120 = 0x1EE4EC2AL;
            int i;
            for (i = 0; i < 6; i++)
                l_93[i] = &g_20[g_52];
            ++g_99;
            for (g_99 = 0; (g_99 <= 7); g_99 += 1)
            {
                int ****l_104 = &l_91;
                unsigned *l_105 = &g_106;
                int l_122[5][9] = {{6L,(-5L),6L,(-5L),0xA0E7310FL,0xA0E7310FL,(-5L),6L,(-5L)},{(-4L),0x5250F4D7L,1L,1L,0x5250F4D7L,(-4L),0x5250F4D7L,1L,1L},{0xA0E7310FL,0xA0E7310FL,(-5L),6L,(-5L),0xA0E7310FL,0xA0E7310FL,(-5L),6L},{0xFAD40830L,0x5250F4D7L,0xFAD40830L,(-4L),(-4L),0xFAD40830L,0x5250F4D7L,0xFAD40830L,(-4L)},{1L,(-5L),(-5L),1L,0xE5BB5109L,1L,(-5L),(-5L),1L}};
                int i, j;
                (*l_90) = &g_20[g_99];
                l_94 ^= (safe_mul_func_uint8_t_u_u(g_20[g_99], (0x8A2FL > (((&p_82 != ((*l_104) = &p_82)) <= (5L <= (**p_82))) <= ((**l_90) && ((*l_105) = (**l_90)))))));
                if ((*p_85))
                {
                    char l_119 = 0x77L;
                    for (l_92 = 0; l_92 < 6; l_92 += 1)
                    {
                        l_93[l_92] = &g_20[g_52];
                    }
                    for (l_94 = 5; (l_94 >= 0); l_94 -= 1)
                    {
                        int l_109 = 5L;
                        unsigned char *l_115 = &g_116[0];
                        unsigned char *l_117[9] = {&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118};
                        int i;
                        g_20[g_75] = (((*l_115) = ((safe_sub_func_uint8_t_u_u((g_20[g_75] != l_95), (l_109 = (*p_81)))) == (g_114 = (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(g_20[2], (****l_104))), 4))))) >= (l_119 ^= 1UL));
                    }
                }
                else
                {
                    short l_121 = 0x36C8L;
                    ++l_123;
                    if ((safe_sub_func_int8_t_s_s(((-1L) ^ g_25), (l_121 & (**l_90)))))
                    {
                        (*g_88) = (****l_104);
                        if ((*g_88))
                            continue;
                        (*p_82) = &g_20[2];
                    }
                    else
                    {
                        (*g_88) = (l_97 |= (!(**p_82)));
                    }
                    if ((*g_89))
                        continue;
                }
                (*l_90) = (*p_82);
            }
        }
        (*p_85) = g_20[g_52];
    }
    (*p_85) |= (-2L);
    (*p_82) = (*p_82);
    return l_94;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_20[i], "g_20[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_116[i], "g_116[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_138[i][j], "g_138[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_486, "g_486", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_618.f0, "g_618.f0", print_hash_value);
    transparent_crc(g_618.f1, "g_618.f1", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_681[i], "g_681[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_906, "g_906", print_hash_value);
    transparent_crc(g_1019, "g_1019", print_hash_value);
    transparent_crc(g_1060, "g_1060", print_hash_value);
    transparent_crc(g_1092, "g_1092", print_hash_value);
    transparent_crc(g_1243, "g_1243", print_hash_value);
    transparent_crc(g_1246, "g_1246", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1277[i][j], "g_1277[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1351, "g_1351", print_hash_value);
    transparent_crc(g_1452, "g_1452", print_hash_value);
    transparent_crc(g_1484, "g_1484", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1537[i], "g_1537[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1544, "g_1544", print_hash_value);
    transparent_crc(g_1550, "g_1550", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1564[i], "g_1564[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1769, "g_1769", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1771[i], "g_1771[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1820[i], "g_1820[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1893, "g_1893", print_hash_value);
    transparent_crc(g_1895, "g_1895", print_hash_value);
    transparent_crc(g_1936, "g_1936", print_hash_value);
    transparent_crc(g_2043, "g_2043", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
