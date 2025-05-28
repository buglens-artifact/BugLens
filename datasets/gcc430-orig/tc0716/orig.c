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



static volatile int g_6 = 0L;
static unsigned char g_19 = 1UL;
static volatile int g_23 = (-1L);
static volatile int *g_22 = &g_23;
static int g_33[2] = {2L,2L};
static int * const g_32 = &g_33[1];
static int * const *g_31 = &g_32;
static int *g_75[9] = {&g_33[1],&g_33[1],&g_33[1],&g_33[1],&g_33[1],&g_33[1],&g_33[1],&g_33[1],&g_33[1]};
static int **g_74[8] = {&g_75[1],&g_75[1],&g_75[1],&g_75[1],&g_75[1],&g_75[1],&g_75[1],&g_75[1]};
static int ***g_73 = &g_74[1];
static short g_89 = 6L;
static char g_132 = 0L;
static unsigned char g_164 = 0UL;
static volatile char g_186 = 6L;
static volatile char *g_185 = &g_186;
static volatile char **g_184[6][7] = {{(void*)0,(void*)0,&g_185,&g_185,&g_185,&g_185,(void*)0},{(void*)0,&g_185,(void*)0,&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185,&g_185,&g_185,(void*)0},{&g_185,&g_185,&g_185,&g_185,&g_185,&g_185,&g_185},{&g_185,&g_185,&g_185,&g_185,&g_185,&g_185,&g_185}};
static unsigned g_228 = 0x900F530CL;
static unsigned short g_244 = 7UL;
static char ***g_273 = (void*)0;
static const volatile short *g_324 = (void*)0;
static const volatile short **g_323 = &g_324;
static const volatile short ***g_322 = &g_323;
static int *g_332 = &g_33[0];
static unsigned g_354 = 0x5C3C91A6L;
static short g_379 = 0x7AABL;
static unsigned short g_435 = 1UL;
static unsigned g_475 = 0xD50EA5A6L;
static short g_478 = 0x4A62L;
static volatile unsigned short g_568 = 1UL;
static volatile unsigned short *g_567 = &g_568;
static volatile unsigned short * const volatile *g_566 = &g_567;
static volatile unsigned short * const volatile **g_565 = &g_566;
static int g_581 = 0xB65D9648L;
static unsigned g_583 = 4294967289UL;
static const unsigned char **g_607 = (void*)0;
static const unsigned char ** volatile *g_606 = &g_607;
static int g_662 = 0x2CFDAB55L;
static char g_738[5][3] = {{(-1L),0xD4L,0xB8L},{(-1L),(-1L),0xD4L},{0xC6L,0xD4L,0xD4L},{0xD4L,4L,0xB8L},{0xC6L,4L,0xC6L}};
static unsigned char g_740 = 255UL;
static int **g_809[8][8] = {{&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],(void*)0,(void*)0,&g_75[1]},{&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],(void*)0,(void*)0,&g_75[1]},{&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],(void*)0,(void*)0,&g_75[1]},{&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],(void*)0,(void*)0,&g_75[1]},{&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],(void*)0,(void*)0,&g_75[1]},{&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],(void*)0,(void*)0,&g_75[1]},{&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],(void*)0,(void*)0,&g_75[1]},{&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],(void*)0,(void*)0,&g_75[1]}};
static short *g_816 = &g_379;
static short **g_815 = &g_816;
static int ****g_856 = &g_73;
static unsigned short g_884[1][9][9] = {{{0x5B3AL,65527UL,5UL,65529UL,65535UL,0x5B3AL,0x2251L,0UL,3UL},{1UL,0xE756L,0UL,0x3228L,1UL,0x3228L,0UL,0xE756L,1UL},{65535UL,65527UL,0x6C27L,1UL,0x2251L,0x3228L,1UL,5UL,0xE756L},{65527UL,0x3228L,0x5B3AL,0x1CC3L,0x1CC3L,0x5B3AL,0x3228L,65527UL,65529UL},{65535UL,0x2251L,1UL,65530UL,0x1CC3L,0xC9E8L,3UL,1UL,1UL},{1UL,0x6C27L,0x2251L,65527UL,0x2251L,0x6C27L,1UL,0xC9E8L,65529UL},{0xC9E8L,5UL,1UL,65527UL,1UL,0x1CC3L,0xE756L,0x2251L,0xE756L},{0xE756L,65535UL,65530UL,65530UL,65535UL,0xE756L,65529UL,0xC9E8L,1UL},{0x2251L,1UL,65530UL,0x1CC3L,0xC9E8L,3UL,1UL,1UL,3UL}}};
static unsigned short * const g_883 = &g_884[0][1][6];
static unsigned short * const *g_882 = &g_883;
static unsigned *g_897[5][4][8] = {{{&g_354,(void*)0,(void*)0,(void*)0,&g_354,&g_475,&g_475,&g_354},{&g_475,(void*)0,&g_475,&g_475,&g_354,&g_354,&g_475,&g_354},{&g_354,&g_354,&g_475,&g_354,(void*)0,(void*)0,(void*)0,&g_354},{(void*)0,(void*)0,(void*)0,&g_354,&g_475,(void*)0,(void*)0,&g_475}},{{&g_475,&g_475,&g_475,&g_354,&g_475,&g_475,(void*)0,&g_354},{&g_354,(void*)0,&g_354,&g_475,&g_475,(void*)0,&g_354,&g_354},{&g_475,&g_475,&g_475,&g_354,(void*)0,&g_475,(void*)0,&g_475},{&g_475,(void*)0,&g_354,(void*)0,&g_475,&g_354,&g_475,(void*)0}},{{&g_354,&g_354,(void*)0,&g_475,&g_475,(void*)0,&g_354,&g_354},{(void*)0,(void*)0,&g_475,&g_475,&g_354,&g_354,&g_354,&g_475},{(void*)0,&g_354,&g_475,&g_475,&g_475,&g_354,&g_475,&g_354},{&g_354,(void*)0,(void*)0,(void*)0,&g_354,(void*)0,&g_475,&g_475}},{{&g_354,&g_354,&g_354,(void*)0,&g_475,&g_354,(void*)0,&g_475},{&g_354,(void*)0,&g_475,&g_354,(void*)0,&g_475,&g_354,&g_475},{&g_354,&g_354,(void*)0,(void*)0,&g_475,&g_354,&g_354,&g_354},{&g_354,&g_475,&g_475,(void*)0,&g_475,(void*)0,&g_354,&g_475}},{{&g_475,&g_475,(void*)0,&g_475,&g_354,&g_475,&g_475,&g_354},{&g_475,&g_475,&g_354,&g_354,&g_354,&g_475,&g_475,&g_354},{&g_475,&g_354,&g_354,&g_354,&g_475,&g_354,(void*)0,&g_354},{&g_354,&g_475,&g_354,&g_354,&g_475,&g_475,&g_354,&g_354}}};
static int g_899 = 0x6A17AC0BL;
static unsigned *g_955 = &g_583;
static unsigned **g_954 = &g_955;
static unsigned char g_1014 = 255UL;
static const int g_1084 = 1L;
static volatile unsigned g_1106 = 4294967295UL;
static short ***g_1162 = &g_815;
static short ****g_1161 = &g_1162;
static int *g_1181 = (void*)0;
static const int *g_1204 = &g_33[0];
static const int ** volatile g_1203[2] = {&g_1204,&g_1204};
static const int ** volatile g_1206 = &g_1204;
static const short g_1215 = 0xA050L;



static unsigned func_1(void);
static const unsigned func_10(unsigned p_11, int p_12, char p_13);
static unsigned func_14(unsigned char p_15, int p_16, unsigned short p_17, short p_18);
static short func_20(unsigned p_21);
static char func_27(int p_28, int * const * p_29);
static unsigned func_37(int ** p_38, int ** p_39);
static int ** func_40(int * p_41, int * const p_42, unsigned short p_43, short p_44);
static int * func_45(int p_46, int * p_47, unsigned p_48, const unsigned p_49, short p_50);
static short func_57(int ** p_58, int * const p_59, unsigned p_60);
static int ** func_61(int p_62, int ** p_63, int ** p_64, int p_65);
static unsigned func_1(void)
{
    unsigned char l_7 = 0x63L;
    int *l_1021 = (void*)0;
    const short l_1036 = 1L;
    int **l_1046 = &l_1021;
    unsigned short l_1056 = 0x7D7CL;
    unsigned l_1057[7][8][4] = {{{0x5C4A3B4BL,0x0EE347FDL,0UL,0x8D3EFFB7L},{0UL,0x8D3EFFB7L,0x8D3EFFB7L,0UL},{0xFDE9050AL,4294967294UL,0x777FEECCL,0UL},{9UL,4294967292UL,8UL,4294967294UL},{4294967295UL,0x49A196FDL,4294967295UL,4294967294UL},{4294967295UL,4294967292UL,0UL,0UL},{0UL,4294967294UL,9UL,0UL},{0x49A196FDL,0x8D3EFFB7L,0xC547AC26L,0x8D3EFFB7L}},{{9UL,0x0EE347FDL,0xAD24197CL,0x777FEECCL},{0x1109A3AAL,0x49A196FDL,4294967294UL,8UL},{4294967295UL,0xB4BB4BCEL,0UL,4294967295UL},{0x8D3EFFB7L,4294967295UL,0x49A196FDL,0UL},{0xB4BB4BCEL,0xFDE9050AL,0UL,0x1109A3AAL},{0x1109A3AAL,8UL,0UL,0UL},{4294967295UL,4294967295UL,0x1109A3AAL,0UL},{4294967294UL,0x777FEECCL,0UL,0x49A196FDL}},{{4294967295UL,0x1109A3AAL,0xFDE9050AL,0UL},{4294967292UL,0x1109A3AAL,0x5C4A3B4BL,0x49A196FDL},{0x1109A3AAL,0x777FEECCL,4294967295UL,0UL},{1UL,4294967295UL,4294967295UL,0UL},{0UL,8UL,0UL,0x1109A3AAL},{9UL,0xFDE9050AL,4294967295UL,0UL},{0x0EE347FDL,4294967295UL,4294967295UL,0xFDE9050AL},{0x1109A3AAL,0xAD24197CL,4294967295UL,0x5C4A3B4BL}},{{0x0EE347FDL,4294967295UL,4294967295UL,4294967295UL},{9UL,0xC547AC26L,0UL,4294967295UL},{0UL,4294967295UL,4294967295UL,0UL},{1UL,0x49A196FDL,4294967295UL,4294967295UL},{0x1109A3AAL,4294967294UL,0x5C4A3B4BL,4294967295UL},{4294967292UL,4294967295UL,0xFDE9050AL,4294967295UL},{4294967295UL,4294967294UL,0UL,4294967295UL},{4294967294UL,0x49A196FDL,0x1109A3AAL,0UL}},{{4294967295UL,4294967295UL,0UL,4294967295UL},{0x1109A3AAL,0xC547AC26L,0UL,4294967295UL},{0xB4BB4BCEL,4294967295UL,0x49A196FDL,0x5C4A3B4BL},{0xAD24197CL,4294967295UL,4294967294UL,0UL},{0xAD24197CL,4294967295UL,0x5C4A3B4BL,4294967294UL},{0x8D3EFFB7L,0UL,4294967292UL,4294967295UL},{4294967295UL,0x49A196FDL,1UL,1UL},{9UL,9UL,4294967295UL,4294967292UL}},{{8UL,0x1109A3AAL,4294967294UL,0x5C4A3B4BL},{0xC547AC26L,4294967295UL,0UL,4294967294UL},{0UL,4294967295UL,4294967295UL,0x5C4A3B4BL},{4294967295UL,0x1109A3AAL,0xB4BB4BCEL,4294967292UL},{4294967294UL,9UL,0UL,1UL},{4294967294UL,0x49A196FDL,4294967294UL,4294967295UL},{0x777FEECCL,0UL,4294967295UL,4294967294UL},{4294967295UL,4294967295UL,0x0EE347FDL,0UL}},{{4294967295UL,4294967295UL,0x0EE347FDL,4294967295UL},{4294967295UL,9UL,4294967295UL,0xB4BB4BCEL},{0x777FEECCL,0xFDE9050AL,4294967294UL,0UL},{4294967294UL,0UL,0UL,4294967294UL},{4294967294UL,0x5C4A3B4BL,0xB4BB4BCEL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,0x0EE347FDL},{0UL,9UL,0UL,0x0EE347FDL},{0xC547AC26L,4294967295UL,4294967294UL,4294967295UL}}};
    int l_1059[3];
    char l_1110 = 1L;
    int l_1125[1][1][1];
    int *l_1137 = &g_33[1];
    int l_1168 = (-6L);
    int l_1202 = (-1L);
    int ****l_1209 = &g_73;
    int **l_1214 = &g_75[8];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1059[i] = (-6L);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_1125[i][j][k] = 0x867727AAL;
        }
    }
    if ((((safe_add_func_int32_t_s_s((g_6 <= (l_7 == (l_7 <= (safe_div_func_uint32_t_u_u((+func_10((((func_14(g_19, l_7, g_19, func_20(l_7)) , (*g_816)) >= (-1L)) <= 0xD0A73851L), l_7, g_435)), 0xCB0AF163L))))), 0x16AC9BBEL)) < 0x82CAL) && l_7))
    {
        int *l_1019[1][4];
        char * const l_1032[8][10][3] = {{{&g_738[4][0],&g_132,&g_132},{&g_132,&g_738[1][1],&g_132},{(void*)0,&g_738[4][1],(void*)0},{(void*)0,(void*)0,&g_738[4][1]},{&g_738[4][1],&g_738[4][1],&g_132},{&g_738[3][2],&g_132,&g_738[3][2]},{&g_132,&g_738[3][1],&g_738[4][1]},{&g_132,&g_132,&g_738[4][1]},{(void*)0,&g_738[4][0],(void*)0},{&g_132,&g_738[0][2],(void*)0}},{{&g_738[4][1],&g_132,&g_132},{(void*)0,(void*)0,(void*)0},{&g_132,&g_738[4][1],&g_738[3][2]},{(void*)0,(void*)0,&g_738[4][1]},{&g_738[4][1],&g_738[4][1],(void*)0},{&g_132,(void*)0,&g_132},{(void*)0,&g_132,(void*)0},{&g_132,&g_738[1][0],&g_132},{&g_132,(void*)0,&g_738[1][2]},{&g_738[3][2],(void*)0,&g_132}},{{&g_738[4][1],(void*)0,&g_738[4][1]},{&g_738[2][1],&g_132,&g_132},{&g_738[1][1],(void*)0,(void*)0},{(void*)0,&g_132,&g_132},{&g_132,&g_132,&g_132},{(void*)0,&g_738[4][1],&g_738[1][1]},{&g_132,&g_738[0][2],&g_738[4][1]},{(void*)0,&g_738[0][0],&g_738[4][1]},{&g_738[4][1],&g_738[4][1],(void*)0},{&g_738[1][1],(void*)0,(void*)0}},{{&g_132,&g_132,&g_132},{&g_738[4][1],(void*)0,&g_738[4][1]},{(void*)0,(void*)0,&g_132},{&g_738[4][1],&g_132,&g_132},{&g_738[3][1],(void*)0,&g_738[4][1]},{(void*)0,&g_738[4][1],(void*)0},{&g_738[0][2],&g_738[1][1],&g_132},{&g_738[4][1],(void*)0,&g_738[3][0]},{&g_738[4][1],&g_132,&g_738[4][1]},{&g_738[4][1],&g_738[2][2],(void*)0}},{{(void*)0,&g_738[4][1],&g_132},{&g_132,&g_738[3][2],&g_738[1][1]},{&g_738[4][1],&g_738[1][0],(void*)0},{&g_738[2][2],&g_738[4][1],&g_738[4][1]},{&g_132,&g_738[4][1],&g_738[4][1]},{&g_738[4][1],&g_738[4][1],(void*)0},{&g_738[4][1],&g_738[1][0],(void*)0},{&g_132,&g_132,&g_738[1][2]},{&g_738[1][0],&g_738[1][0],(void*)0},{(void*)0,&g_738[1][0],&g_132}},{{&g_738[4][1],(void*)0,&g_132},{&g_738[4][1],&g_132,&g_738[4][1]},{(void*)0,&g_738[4][1],&g_132},{&g_738[4][1],&g_132,&g_132},{&g_738[1][1],(void*)0,(void*)0},{&g_132,&g_738[3][0],&g_738[1][2]},{&g_132,(void*)0,(void*)0},{&g_738[4][1],&g_132,(void*)0},{&g_738[4][1],(void*)0,&g_738[4][1]},{&g_738[4][1],&g_132,&g_738[4][1]}},{{&g_738[3][2],(void*)0,(void*)0},{&g_738[1][0],&g_738[4][1],&g_738[1][1]},{&g_738[4][1],&g_738[4][1],&g_132},{(void*)0,&g_738[4][1],(void*)0},{&g_738[4][1],(void*)0,&g_738[4][1]},{&g_132,&g_132,&g_738[3][0]},{(void*)0,&g_132,&g_132},{&g_738[4][1],&g_738[4][1],&g_738[4][1]},{&g_132,&g_738[3][2],(void*)0},{&g_132,&g_132,&g_132}},{{&g_738[1][1],(void*)0,&g_738[4][1]},{(void*)0,&g_738[4][1],&g_738[3][2]},{(void*)0,&g_738[1][0],&g_132},{&g_738[1][1],&g_738[4][1],&g_132},{&g_132,(void*)0,&g_738[4][1]},{&g_132,&g_132,(void*)0},{&g_132,&g_738[4][1],&g_738[4][1]},{&g_132,(void*)0,&g_738[3][0]},{&g_132,&g_738[1][1],&g_738[4][1]},{&g_738[4][1],&g_738[1][0],&g_738[4][1]}}};
        unsigned char l_1058 = 0xF2L;
        unsigned short l_1060 = 4UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_1019[i][j] = &g_33[1];
        }
        for (g_435 = 0; (g_435 <= 5); g_435 += 1)
        {
            char l_1030 = 5L;
            unsigned l_1031 = 4294967294UL;
            unsigned char l_1048[7][9][4] = {{{1UL,0x30L,0x8AL,1UL},{249UL,255UL,1UL,0xBCL},{0x21L,0x8AL,251UL,0xDDL},{0xDAL,0x6FL,0x6FL,0xDAL},{1UL,0UL,0x76L,0UL},{0xBBL,0x50L,254UL,0xDBL},{0xCBL,0xDAL,0xBFL,0xDBL},{255UL,0x50L,1UL,0UL},{0xEEL,0UL,255UL,0xDAL}},{{251UL,0x6FL,0xEAL,0xDDL},{0x4CL,0x8AL,0x50L,0xBCL},{0xEAL,255UL,0xDAL,1UL},{0UL,0x30L,0x4CL,0x30L},{0x67L,0xEAL,249UL,1UL},{0xDBL,0xB5L,0xCBL,0x76L},{0x76L,0x50L,0x7FL,0UL},{0x76L,0xBFL,0xCBL,1UL},{255UL,0UL,0xEEL,0x6FL}},{{0xDAL,255UL,0x8AL,0UL},{0x67L,0UL,0x76L,0x4CL},{0xDDL,7UL,0x82L,1UL},{0x8AL,251UL,0xDDL,0xDDL},{0xBBL,0xBBL,255UL,0x50L},{7UL,1UL,251UL,0x67L},{0xB5L,0x4CL,0xBCL,251UL},{254UL,0x4CL,0UL,0x67L},{0x4CL,1UL,249UL,0x50L}},{{0x7FL,0xBBL,1UL,0xDDL},{0xDBL,251UL,0xBBL,1UL},{0xBFL,7UL,0xE8L,0x4CL},{0xEEL,0UL,1UL,0UL},{0UL,255UL,0UL,0x6FL},{0x30L,0UL,0xDAL,1UL},{0UL,0xBFL,0x67L,0UL},{0x82L,0x50L,0x67L,0x76L},{0UL,0xB5L,0xDAL,0x7FL}},{{0x30L,0xDDL,0UL,0xA3L},{0UL,0xA3L,1UL,0xE8L},{0xEEL,1UL,0xEAL,254UL},{0xBCL,0UL,0x4CL,0xDBL},{255UL,251UL,251UL,255UL},{0x50L,0xDAL,0xEEL,0xB5L},{0x8AL,0x21L,255UL,255UL},{0UL,255UL,0xCBL,255UL},{0UL,0x21L,0xBBL,0xB5L}},{{0x30L,0xDAL,1UL,255UL},{0x4CL,251UL,0xDAL,0xDBL},{1UL,0UL,0x21L,254UL},{0xDAL,1UL,249UL,0xEAL},{0xDAL,1UL,1UL,1UL},{0x76L,0xDAL,7UL,0x50L},{255UL,0UL,254UL,249UL},{249UL,0x82L,0x50L,0x67L},{249UL,0xBCL,254UL,0xE8L}},{{255UL,0x67L,7UL,1UL},{0x76L,0xB5L,1UL,255UL},{0xDAL,0x6FL,249UL,0x8AL},{0xDAL,0x30L,0x21L,0x7FL},{1UL,0xBBL,0xDAL,0xDAL},{0x4CL,0x4CL,1UL,0x82L},{0x30L,0xE8L,0xBBL,0xDAL},{0UL,0x8AL,0xCBL,0xBBL},{255UL,1UL,0xB5L,0x76L}}};
            int i, j, k;
            for (g_89 = 0; (g_89 <= 5); g_89 += 1)
            {
                int l_1037[3][5] = {{(-6L),1L,1L,(-6L),(-1L)},{(-6L),0x90D12D61L,(-1L),(-1L),0x90D12D61L},{(-1L),1L,(-1L),0x14113F2AL,0x14113F2AL}};
                int l_1040 = (-1L);
                unsigned char l_1041 = 255UL;
                int i, j;
                g_75[(g_89 + 2)] = l_1019[0][1];
                if ((((*g_32) = 0x8864CB7FL) != l_7))
                {
                    unsigned short l_1020[2][7][6] = {{{0xC6AAL,0xAF56L,1UL,0xC6AAL,0x119EL,3UL},{0x697EL,0xFF2BL,0xE66DL,65527UL,0x4AC2L,0x0045L},{0x119EL,0xDA28L,1UL,0x0434L,0x4AC2L,65535UL},{0x1C93L,0xFF2BL,0x1CD6L,0x119EL,0x119EL,0x1CD6L},{0xAF56L,0xAF56L,65535UL,0x119EL,0xFF2BL,1UL},{0x1C93L,0xC6AAL,65535UL,0x0434L,65535UL,65535UL},{0x119EL,0x1C93L,65535UL,65527UL,0xAF56L,1UL}},{{0x697EL,65527UL,65535UL,0xC6AAL,65527UL,0x1CD6L},{0xC6AAL,65527UL,0x1CD6L,0x4AC2L,0xAF56L,65535UL},{65535UL,0x1C93L,1UL,0x1C93L,65535UL,0x0045L},{65535UL,0xC6AAL,0xE66DL,0x4AC2L,0xFF2BL,3UL},{0xC6AAL,0xAF56L,1UL,0xC6AAL,0x119EL,3UL},{0x697EL,0xFF2BL,0xE66DL,65527UL,1UL,0x697EL},{0xA5A9L,0x1D27L,65535UL,0xC7FEL,1UL,0x4AC2L}}};
                    int i, j, k;
                    (**g_73) = (l_1020[1][3][1] , l_1021);
                    (**g_31) = (safe_rshift_func_int8_t_s_s((+(safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((func_10((**g_954), (safe_add_func_uint16_t_u_u(0xA6D8L, ((l_1030 , (l_1030 == (!(~1L)))) == (**g_566)))), l_1031) , (((void*)0 != l_1032[6][0][2]) && l_1020[1][5][1])), l_1030)), l_1030))), 1));
                }
                else
                {
                    char l_1033 = (-3L);
                    if (l_1033)
                        break;
                }
                (*g_22) = (((l_1037[2][3] = ((**g_31) = ((safe_sub_func_uint32_t_u_u(l_1036, 0xEC04E742L)) && ((*g_32) || (**g_31))))) ^ (l_1040 != (func_57(&l_1019[0][2], l_1019[0][1], l_1041) >= 1UL))) < (*g_185));
            }
            for (g_89 = 0; (g_89 == (-18)); g_89--)
            {
                unsigned l_1049 = 0xF69BC349L;
                (*l_1046) = (((((*g_332) = (safe_rshift_func_int8_t_s_u((func_37(((*g_73) = (void*)0), l_1046) && (safe_unary_minus_func_int8_t_s((4L > 0UL)))), 0))) >= (l_1048[3][6][1] = (*g_22))) , 0x2284L) , (*l_1046));
                return l_1049;
            }
        }
        (*g_32) = ((safe_sub_func_uint8_t_u_u(((func_37((**g_856), &l_1021) & 3UL) != l_1036), ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(func_57(&l_1021, (*l_1046), l_1056), g_89)) == (*g_22)), l_1057[6][1][3])) == l_1058))) & l_1059[0]);
        return l_1060;
    }
    else
    {
        unsigned l_1063 = 4294967295UL;
        int * const l_1089 = &g_33[1];
        int **l_1099[1];
        const unsigned l_1105 = 0x71A22613L;
        int *l_1120 = &g_33[1];
        int *l_1132[2];
        int l_1157 = 0L;
        const unsigned l_1160 = 0xB971EE0FL;
        const unsigned short *l_1193 = &g_884[0][1][6];
        const unsigned short **l_1192 = &l_1193;
        const unsigned short ***l_1191 = &l_1192;
        short **l_1196 = (void*)0;
        const unsigned l_1207[5][2][7] = {{{0x8E65D821L,0UL,0x69AFC9B3L,0x27334BF5L,0x62152601L,0xC17710F4L,0xB3A54C95L},{0x33079548L,0xABD83CA3L,0xC1AA503DL,0x9FA1A056L,0xC1AA503DL,0xABD83CA3L,0x33079548L}},{{1UL,0UL,0x973D712EL,0xB3A54C95L,0x8E65D821L,0xD24120BFL,0UL},{4294967290UL,0xEBD23A07L,0UL,0xC1AA503DL,4294967294UL,4294967294UL,0xC1AA503DL}},{{0x973D712EL,4UL,0x973D712EL,0x7FEB811DL,0xC17710F4L,0x66537E77L,0xD24120BFL},{0xABD83CA3L,0UL,0xC1AA503DL,0xEBD23A07L,4294967295UL,0xB9E31CB1L,4294967290UL}},{{0x66537E77L,1UL,0x69AFC9B3L,0x69AFC9B3L,1UL,0x66537E77L,4294967290UL},{0xC7ED511CL,0xC1AA503DL,4294967295UL,4294967287UL,0UL,4294967294UL,1UL}},{{0x374E27DEL,0x66537E77L,0xD81D3143L,0xD24120BFL,0xB3A54C95L,0xD24120BFL,0xD81D3143L},{0xC1AA503DL,0xC1AA503DL,0xB9E31CB1L,4294967288UL,4294967287UL,0xABD83CA3L,0xE574E9BEL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1099[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_1132[i] = &l_1125[0][0][0];
        for (g_478 = (-4); (g_478 >= 29); g_478 = safe_add_func_uint8_t_u_u(g_478, 2))
        {
            const short l_1064[8] = {0xE047L,0xE047L,0xE047L,0xE047L,0xE047L,0xE047L,0xE047L,0xE047L};
            int l_1068 = 0xF26A886DL;
            int * const l_1088[4][3] = {{(void*)0,&g_899,&g_899},{(void*)0,(void*)0,&g_899},{&l_1068,&g_899,&g_899},{&g_899,&g_899,(void*)0}};
            int **l_1092[2][4][8] = {{{&l_1021,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&l_1021},{&l_1021,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&l_1021},{&l_1021,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&l_1021},{&l_1021,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&l_1021}},{{&l_1021,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&l_1021},{&l_1021,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&l_1021},{&l_1021,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&l_1021},{&l_1021,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&l_1021}}};
            int l_1103 = 0x9649CD2AL;
            int **l_1116[3][6] = {{&g_75[3],&g_332,&g_332,&g_75[3],&g_332,&g_332},{&g_75[3],&g_332,&g_332,&g_75[3],&g_332,&g_332},{&g_75[3],&g_332,&g_332,&g_75[3],&g_332,&g_332}};
            unsigned char l_1124 = 255UL;
            unsigned ** const l_1133 = &g_897[0][2][2];
            int **l_1172 = (void*)0;
            int i, j, k;
            (*g_22) = ((*g_32) = l_1063);
            for (l_1056 = 0; (l_1056 <= 3); l_1056 += 1)
            {
                unsigned l_1079 = 0xA728B10DL;
                int l_1081 = (-3L);
                if (l_1064[3])
                    break;
                for (g_379 = 0; (g_379 <= 3); g_379 += 1)
                {
                    unsigned short l_1067 = 65530UL;
                    for (g_581 = 0; (g_581 <= 3); g_581 += 1)
                    {
                        int i, j, k;
                        (*g_332) = (l_1057[(g_581 + 1)][(l_1056 + 2)][g_379] == ((void*)0 == g_897[(l_1056 + 1)][g_581][(l_1056 + 4)]));
                        if (l_1057[g_379][(g_581 + 3)][g_379])
                            continue;
                    }
                    for (g_899 = 2; (g_899 >= 0); g_899 -= 1)
                    {
                        int **l_1071 = (void*)0;
                        int **l_1072 = &g_75[0];
                        int **l_1073 = &g_75[1];
                        int **l_1074 = (void*)0;
                        int **l_1075 = &l_1021;
                        unsigned char l_1076 = 255UL;
                        unsigned short *l_1078 = (void*)0;
                        unsigned short **l_1077 = &l_1078;
                        unsigned char *l_1080 = &g_19;
                        int i, j, k;
                        (*g_32) = (l_1081 = (safe_rshift_func_uint8_t_u_u(l_1059[g_899], ((*l_1080) = (((l_1068 = l_1067) <= ((safe_lshift_func_uint16_t_u_u((((func_57(&l_1021, ((*l_1075) = (void*)0), l_1064[4]) , (l_1076 , ((*l_1077) = (void*)0))) != &l_1067) >= l_1063), 14)) && l_1079)) | (*g_883))))));
                        return l_1068;
                    }
                }
            }
            if ((safe_add_func_int16_t_s_s(((*g_816) = 0x488EL), ((*g_185) == g_1084))))
            {
                unsigned short l_1086 = 0xB93CL;
                unsigned l_1100 = 0x3D1B1460L;
                int l_1115 = (-10L);
                char *l_1126[3];
                int *l_1127 = &g_33[1];
                int i;
                for (i = 0; i < 3; i++)
                    l_1126[i] = &l_1110;
                if (l_1064[2])
                {
                    unsigned l_1085 = 0xA2A3E6DFL;
                    if (l_1085)
                        break;
                }
                else
                {
                    unsigned short l_1090 = 0xC9BFL;
                    unsigned char l_1107[7];
                    int *l_1111 = &g_899;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1107[i] = 7UL;
                    if ((l_1086 != l_1086))
                    {
                        short l_1087 = 0x90E1L;
                        if (l_1087)
                            break;
                        (*g_22) = func_57((*g_73), l_1088[1][1], func_57(&l_1021, l_1089, l_1087));
                        return l_1090;
                    }
                    else
                    {
                        const unsigned short l_1091[1][9] = {{0x0160L,0x0160L,0x0160L,0x0160L,0x0160L,0x0160L,0x0160L,0x0160L,0x0160L}};
                        int i, j;
                        (*l_1089) = l_1091[0][3];
                    }
                    if ((func_57(l_1092[0][3][1], (*g_31), (safe_div_func_int32_t_s_s((*g_22), (safe_add_func_int16_t_s_s((l_1090 , l_1086), (safe_rshift_func_int16_t_s_u((0UL & ((((((void*)0 == (*g_856)) || func_37((*g_73), l_1099[0])) , 0xABB3L) <= (*g_816)) ^ l_1100)), l_1090))))))) >= (*g_883)))
                    {
                        int ***l_1104 = &l_1092[0][1][0];
                        l_1107[2] = (safe_lshift_func_int8_t_s_s((-1L), ((!((l_1103 , (*g_73)) != ((*l_1104) = (void*)0))) | ((l_1105 <= 0x2F65632FL) == g_1106))));
                    }
                    else
                    {
                        int **l_1117 = &g_75[0];
                        char *l_1118 = &g_738[4][1];
                        int **l_1119 = &g_75[0];
                        (*g_22) = (safe_mod_func_int8_t_s_s(((*g_32) , l_1110), (*g_185)));
                        (*l_1046) = l_1111;
                        (*l_1119) = (((**g_954) = (((&g_73 == &g_73) , (safe_lshift_func_int8_t_s_s(((*l_1118) = ((-7L) | (safe_unary_minus_func_uint16_t_u(((func_37((**g_856), (**g_856)) , g_164) <= (*g_185)))))), (*l_1021)))) > (*g_883))) , (*g_31));
                        if ((**l_1046))
                            break;
                    }
                    if ((*g_332))
                        continue;
                }
                l_1120 = (void*)0;
                (*l_1089) = 0L;
                (***g_856) = l_1127;
            }
            else
            {
                unsigned char l_1128 = 251UL;
                short l_1131 = 0xCBE2L;
                int *l_1138 = (void*)0;
                if (l_1128)
                {
                    for (g_583 = 24; (g_583 <= 23); g_583--)
                    {
                        if (l_1131)
                            break;
                    }
                }
                else
                {
                    (*l_1046) = l_1132[0];
                    if (l_1128)
                        break;
                }
                (**g_31) = l_1128;
                for (g_662 = 2; (g_662 >= 0); g_662 -= 1)
                {
                    unsigned l_1136 = 0x1EEFE57DL;
                    unsigned short l_1139 = 0x2B51L;
                    int i, j;
                    (*l_1046) = l_1138;
                    return l_1139;
                }
            }
            for (l_7 = 0; (l_7 <= 1); l_7 += 1)
            {
                int *l_1140 = (void*)0;
                const int l_1152 = (-1L);
                short l_1173 = 0x1AFBL;
                short l_1180 = 0xAE53L;
                short l_1198 = 0x00D6L;
                unsigned l_1199 = 1UL;
                int l_1200 = 1L;
                const unsigned l_1201 = 1UL;
                for (g_244 = 0; (g_244 <= 2); g_244 += 1)
                {
                    int i, j, k;
                    (*l_1089) = 1L;
                    for (g_164 = 0; (g_164 <= 2); g_164 += 1)
                    {
                        int i, j;
                        l_1140 = (*g_31);
                        return g_738[(g_244 + 2)][g_164];
                    }
                }
                for (g_19 = 0; (g_19 <= 2); g_19 += 1)
                {
                    (**g_73) = (void*)0;
                }
                for (g_899 = 2; (g_899 >= 0); g_899 -= 1)
                {
                    int l_1143 = 0x6646D83AL;
                    int *l_1150 = &g_662;
                    char l_1151 = 0x02L;
                    unsigned short l_1169 = 1UL;
                    int **l_1171[8][6] = {{&l_1132[1],&l_1021,&l_1132[1],(void*)0,&l_1132[0],&l_1137},{&g_75[1],(void*)0,&l_1021,(void*)0,&l_1132[1],&l_1132[0]},{&l_1021,&l_1132[0],&l_1132[0],(void*)0,&l_1132[0],&l_1132[0]},{&l_1137,&l_1132[0],&l_1021,&l_1021,&l_1132[0],&l_1137},{&l_1132[0],&l_1140,&l_1132[1],&l_1132[1],&g_75[1],&l_1132[0]},{&l_1140,&l_1132[0],&g_75[1],&l_1140,&g_332,&g_75[1]},{&l_1140,(void*)0,&l_1140,&l_1132[1],&l_1140,(void*)0},{&l_1132[0],&g_75[1],(void*)0,&l_1021,(void*)0,&l_1132[1]}};
                    short l_1197 = (-1L);
                    const int **l_1205 = (void*)0;
                    char * const *l_1208 = (void*)0;
                    unsigned char *l_1213 = &l_1124;
                    unsigned char **l_1212 = &l_1213;
                    unsigned char ***l_1211 = &l_1212;
                    unsigned char ****l_1210 = &l_1211;
                    int i, j;
                    if ((((safe_mod_func_uint16_t_u_u(l_1143, (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((((l_1143 , 0x83L) || func_37((**g_856), &l_1021)) < 0L), 1)), l_1143)))) <= l_1151) , (**g_31)))
                    {
                        unsigned char *l_1153 = &g_740;
                        int l_1154 = 0L;
                        (**g_31) = (~(l_1152 && ((*g_22) || ((**g_815) | ((*g_883) = ((((((*l_1153) = func_37(&l_1132[1], (*g_73))) , l_1154) , (*g_566)) != ((safe_lshift_func_int16_t_s_s(func_57((*g_73), l_1150, l_1157), 0)) , (void*)0)) >= g_1014))))));
                    }
                    else
                    {
                        short *****l_1163[6][8][5] = {{{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,(void*)0,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161}},{{&g_1161,&g_1161,&g_1161,(void*)0,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,(void*)0,&g_1161,&g_1161,&g_1161},{&g_1161,(void*)0,&g_1161,&g_1161,(void*)0},{&g_1161,&g_1161,&g_1161,(void*)0,&g_1161}},{{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,(void*)0,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161}},{{&g_1161,(void*)0,&g_1161,&g_1161,&g_1161},{&g_1161,(void*)0,&g_1161,&g_1161,(void*)0},{&g_1161,&g_1161,&g_1161,(void*)0,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161}},{{&g_1161,(void*)0,(void*)0,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,(void*)0},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,(void*)0},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{(void*)0,(void*)0,&g_1161,&g_1161,&g_1161}},{{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,(void*)0,(void*)0,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161},{&g_1161,&g_1161,&g_1161,&g_1161,(void*)0},{&g_1161,&g_1161,&g_1161,&g_1161,&g_1161}}};
                        int **l_1170 = &l_1120;
                        char l_1178 = 1L;
                        unsigned *l_1179[8][5] = {{&l_1057[6][1][3],&l_1057[6][1][3],&l_1057[6][1][3],&l_1057[6][1][3],&l_1057[6][1][3]},{&g_354,&g_354,&g_354,&g_354,&g_354},{&l_1057[6][1][3],&l_1057[6][1][3],&l_1057[6][1][3],&l_1057[6][1][3],&l_1057[6][1][3]},{&g_354,&g_354,&g_354,&g_354,&g_354},{&l_1057[6][1][3],&l_1057[6][1][3],&l_1057[6][1][3],&l_1057[6][1][3],&l_1057[6][1][3]},{&g_354,&g_354,&g_354,&g_354,&g_354},{&l_1057[6][1][3],&l_1057[6][1][3],&l_1057[6][1][3],&l_1057[6][1][3],&l_1057[6][1][3]},{&g_354,&g_354,&g_354,&g_354,&g_354}};
                        int i, j, k;
                        (*g_22) = (safe_lshift_func_uint16_t_u_u(((*g_883) = (l_1160 || (&g_322 == (g_1161 = g_1161)))), (safe_div_func_uint32_t_u_u((((*g_567) == l_1151) , func_57((l_1151 , l_1172), (*l_1170), (*l_1137))), l_1173))));
                        (**g_73) = (*l_1046);
                    }
                    (*g_1206) = &l_1152;
                    (*g_1206) = &l_1152;
                }
            }
        }
    }
    return (*l_1137);
}







static const unsigned func_10(unsigned p_11, int p_12, char p_13)
{
    unsigned short l_993 = 65535UL;
    int *l_1002 = &g_899;
    unsigned short l_1005 = 1UL;
    short l_1018[10];
    int i;
    for (i = 0; i < 10; i++)
        l_1018[i] = 0xB93DL;
    for (p_12 = 0; (p_12 < (-23)); p_12 = safe_sub_func_uint8_t_u_u(p_12, 8))
    {
        int *l_990 = &g_899;
        const unsigned short *l_1000 = (void*)0;
        unsigned l_1001 = 4294967295UL;
        (**g_73) = l_1002;
        for (g_132 = (-22); (g_132 != (-28)); g_132 = safe_sub_func_int32_t_s_s(g_132, 6))
        {
            unsigned char *l_1012 = &g_19;
            unsigned char *l_1013 = &g_1014;
            int l_1015 = 4L;
            int * const *l_1016 = &g_75[1];
            unsigned l_1017 = 0x72CE12D5L;
            if (p_13)
                break;
            if (l_1005)
                break;
            (***g_856) = ((((func_27(((safe_add_func_uint8_t_u_u(((((((safe_add_func_uint32_t_u_u((func_20((*l_1002)) || p_11), (safe_lshift_func_uint8_t_u_u((((*l_1013) = ((*l_1012) = ((*l_990) >= 0UL))) ^ 0xF0L), 6)))) == (*l_990)) , l_1015) , (0x2E22L == (*g_883))) || 0x5069E1A8L) && 0x6E0AF26FL), p_13)) , 0xEE5FE3E9L), l_1016) , l_1017) >= (-3L)) ^ l_1018[9]) , l_990);
        }
        for (g_132 = 8; (g_132 >= 1); g_132 -= 1)
        {
            (**g_73) = (void*)0;
            (***g_856) = l_1002;
        }
        if (p_13)
            continue;
    }
    return (*l_1002);
}







static unsigned func_14(unsigned char p_15, int p_16, unsigned short p_17, short p_18)
{
    int **l_891 = &g_75[1];
    unsigned *l_894 = &g_475;
    unsigned *l_895[10] = {&g_354,&g_354,&g_354,&g_354,&g_354,&g_354,&g_354,&g_354,&g_354,&g_354};
    unsigned **l_896[6][2][10] = {{{&l_895[5],&l_894,&l_895[5],(void*)0,(void*)0,&l_894,(void*)0,(void*)0,&l_895[5],&l_894},{&l_895[5],(void*)0,(void*)0,&l_895[4],&l_895[5],&l_895[4],(void*)0,(void*)0,&l_895[5],(void*)0}},{{(void*)0,&l_895[4],&l_895[5],&l_894,&l_895[5],&l_895[4],(void*)0,&l_894,(void*)0,&l_895[4]},{&l_895[5],&l_894,&l_895[5],&l_894,&l_895[5],&l_894,&l_895[5],&l_894,&l_895[5],&l_894}},{{&l_895[5],&l_894,&l_895[5],&l_895[4],(void*)0,&l_894,(void*)0,&l_895[4],&l_895[5],&l_894},{&l_895[5],&l_895[4],(void*)0,(void*)0,&l_895[5],(void*)0,(void*)0,&l_895[4],&l_895[5],&l_895[4]}},{{(void*)0,(void*)0,&l_895[5],&l_894,&l_895[5],(void*)0,(void*)0,&l_894,(void*)0,(void*)0},{&l_895[5],&l_894,&l_895[5],&l_894,&l_895[5],&l_894,&l_895[5],&l_894,&l_895[5],&l_894}},{{&l_895[5],&l_894,&l_895[5],(void*)0,(void*)0,&l_894,(void*)0,(void*)0,&l_895[5],&l_894},{&l_895[5],(void*)0,(void*)0,&l_895[4],&l_895[5],&l_895[4],(void*)0,(void*)0,&l_895[5],(void*)0}},{{(void*)0,&l_895[4],&l_895[5],&l_894,&l_895[5],&l_895[4],(void*)0,&l_894,(void*)0,&l_895[4]},{&l_895[5],&l_894,&l_895[5],&l_894,&l_895[5],&l_894,&l_895[5],&l_894,&l_895[5],&l_894}}};
    int *l_898[9][7] = {{&g_899,(void*)0,&g_899,(void*)0,&g_899,(void*)0,&g_899},{&g_899,&g_899,&g_899,&g_899,&g_899,&g_899,&g_899},{&g_899,(void*)0,&g_899,&g_899,(void*)0,&g_899,&g_899},{&g_899,&g_899,(void*)0,(void*)0,&g_899,(void*)0,&g_899},{(void*)0,&g_899,&g_899,&g_899,&g_899,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,(void*)0,&g_899,&g_899},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,&g_899,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,&g_899,&g_899,&g_899}};
    int l_900[2];
    int **l_944 = &g_75[5];
    int l_978 = 0x2040CD65L;
    unsigned short *l_981 = &g_884[0][1][6];
    unsigned short **l_980 = &l_981;
    unsigned short ***l_979 = &l_980;
    int **l_987 = &g_75[6];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_900[i] = 0x905D109DL;
    l_900[1] = ((*g_32) = ((func_57((*g_73), ((**g_73) = ((safe_lshift_func_uint16_t_u_s(func_57(l_891, (*l_891), p_17), 1)) , (*l_891))), (safe_div_func_int32_t_s_s((l_894 == (g_897[0][0][1] = l_895[5])), 0x6B5BC8C1L))) == 0UL) ^ p_17));
    (**g_31) = p_15;
    if (p_16)
    {
        return p_15;
    }
    else
    {
        const short l_907 = 0x7E71L;
        int **l_917 = (void*)0;
        int l_927 = 9L;
        char l_939 = 0L;
        for (p_15 = 0; (p_15 != 28); ++p_15)
        {
            unsigned l_910 = 0x9D6A4CD3L;
            int l_921 = 0L;
            char *l_922 = &g_132;
            const int l_926 = 0x63CCD0F1L;
            int *l_951 = &l_900[0];
            int *****l_973 = &g_856;
            l_910 = (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(l_907, 0)), (((**g_815) = 0xA4C4L) == (((safe_lshift_func_int16_t_s_s((g_89 = l_907), 3)) | g_478) != p_18))));
            (***g_856) = (void*)0;
            (**g_31) = ((~p_16) | (((safe_div_func_uint16_t_u_u(0UL, l_907)) != (1L < ((**g_815) = 0xA185L))) , (safe_mod_func_int8_t_s_s(p_15, (((l_917 = (*g_73)) == (void*)0) , ((*l_922) = (l_921 = ((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(((*g_816) || (-8L)))), 3UL)) && 2L))))))));
            if ((safe_rshift_func_uint8_t_u_u(((p_15 , ((safe_unary_minus_func_int16_t_s(l_926)) < l_910)) || func_57(l_917, &l_921, ((p_17 = 0x98CCL) > ((l_927 = (-4L)) , (p_18 , func_27(p_18, (**g_856))))))), 6)))
            {
                unsigned char l_938 = 0xD9L;
                char l_961 = (-1L);
                for (p_16 = (-6); (p_16 < 26); p_16++)
                {
                    int l_949 = 0x32D2ACD3L;
                    short *l_950 = &g_478;
                    int * const l_976 = &l_921;
                    unsigned l_977 = 0UL;
                    if ((((*l_950) = ((*g_816) = (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_div_func_int8_t_s_s(((*l_922) = p_16), (safe_div_func_uint8_t_u_u(l_938, 5UL)))), (l_939 >= (safe_rshift_func_int8_t_s_u(g_740, (((safe_add_func_int16_t_s_s(func_37((*g_73), l_944), ((safe_sub_func_uint8_t_u_u(((((0UL & p_17) , 0L) & 0x3481L) == 0L), l_949)) < p_17))) < (*g_883)) < 0x4A9595E4L)))))), 6)) || p_17) , p_17))) >= p_18))
                    {
                        (***g_856) = l_951;
                        (*l_951) = 3L;
                        if (p_15)
                            continue;
                        if ((*g_332))
                            continue;
                    }
                    else
                    {
                        unsigned l_962 = 0xE3C457F1L;
                        int *l_963 = &g_33[0];
                        (**g_73) = (func_27(g_583, (((((safe_sub_func_int16_t_s_s(((((*l_894) = (((g_954 != &g_955) == ((safe_unary_minus_func_uint8_t_u(l_949)) < (safe_div_func_int32_t_s_s(((!(p_16 < func_37((*g_73), l_917))) , (safe_lshift_func_int8_t_s_u((l_961 = (l_949 <= p_16)), l_938))), l_962)))) <= (*l_951))) | l_938) && p_15), (*l_951))) || p_15) , p_15) , g_33[1]) , (*g_73))) , l_963);
                        l_927 = ((*g_32) = ((*l_951) = 0x94339EDDL));
                        if (l_949)
                            continue;
                    }
                    (*l_891) = (*l_944);
                    if (p_18)
                        break;
                    (**g_73) = (****l_973);
                }
                (*g_565) = (((((*l_894) = (l_979 == (void*)0)) || p_16) <= (((*l_951) , (safe_sub_func_uint16_t_u_u((*g_883), (*g_816)))) >= p_17)) , (*g_565));
                (**g_73) = (***g_856);
            }
            else
            {
                int *l_984 = &l_927;
                (**g_73) = l_984;
            }
        }
    }
    (*l_987) = (*g_31);
    return p_18;
}







static short func_20(unsigned p_21)
{
    volatile int **l_24 = &g_22;
    int l_30 = (-1L);
    unsigned short * const *l_881 = (void*)0;
    char *l_885[9] = {&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132};
    int l_886 = 0L;
    unsigned char *l_888 = &g_164;
    unsigned char **l_887 = &l_888;
    int i;
    (*l_24) = g_22;
    l_30 = ((*g_332) = (((safe_add_func_int8_t_s_s(func_27(l_30, g_31), (((**l_887) = ((l_30 && ((((l_886 = ((g_882 = l_881) != l_881)) != p_21) , ((((p_21 , l_887) == (void*)0) , l_30) , 0xC3419BBDL)) | l_30)) && p_21)) == l_30))) == l_30) , (*g_32)));
    return l_30;
}







static char func_27(int p_28, int * const * p_29)
{
    int *l_67 = &g_33[1];
    int **l_66 = &l_67;
    int * const l_349 = &g_33[0];
    char l_351 = 0x62L;
    int *l_742 = (void*)0;
    int *l_744 = &g_33[0];
    char ***l_783 = (void*)0;
    unsigned char l_806[6] = {255UL,255UL,1UL,255UL,255UL,1UL};
    unsigned l_869 = 0x0B3D9788L;
    int * const l_878 = &g_33[1];
    char l_879 = 0L;
    unsigned char *l_880 = &g_740;
    int i;
    for (p_28 = 14; (p_28 < (-14)); --p_28)
    {
        int **l_68 = (void*)0;
        unsigned *l_352 = (void*)0;
        unsigned *l_353 = &g_354;
        int l_725 = 0xCE00111EL;
        int *l_726 = &g_33[1];
        unsigned char *l_731 = &g_164;
        unsigned char *l_739 = &g_740;
    }
    for (g_478 = (-26); (g_478 > (-28)); g_478 = safe_sub_func_uint32_t_u_u(g_478, 1))
    {
        short l_771 = 0x5621L;
        char *l_775 = &l_351;
        int *l_812[6][2];
        char ****l_851 = &g_273;
        int * const l_868 = &g_33[1];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
                l_812[i][j] = &g_33[1];
        }
    }
    (**g_31) = (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_28 , (&p_29 == &l_66)), ((safe_add_func_uint8_t_u_u((((+((*g_816) = (*l_744))) && (**g_815)) & p_28), ((*l_880) = ((safe_sub_func_int8_t_s_s(g_33[1], ((func_57(&l_744, l_878, p_28) ^ 0x3EL) , (**l_66)))) != l_879)))) ^ (*l_878)))), p_28));
    return (*l_349);
}







static unsigned func_37(int ** p_38, int ** p_39)
{
    unsigned l_724[1][9] = {{0xB85F5FA9L,0xB85F5FA9L,0xB85F5FA9L,0xB85F5FA9L,0xB85F5FA9L,0xB85F5FA9L,0xB85F5FA9L,0xB85F5FA9L,0xB85F5FA9L}};
    int i, j;
    l_724[0][7] = (-7L);
    (*g_32) = 0xA221EFC7L;
    return l_724[0][2];
}







static int ** func_40(int * p_41, int * const p_42, unsigned short p_43, short p_44)
{
    int **l_503 = &g_332;
    unsigned short **l_537 = (void*)0;
    const short ** const l_550 = (void*)0;
    const short ** const *l_549[9] = {&l_550,&l_550,&l_550,&l_550,&l_550,&l_550,&l_550,&l_550,&l_550};
    const short ** const **l_548 = &l_549[7];
    unsigned char l_563 = 0x1EL;
    unsigned *l_608 = &g_228;
    unsigned l_694 = 0x4ACA19B6L;
    int i;
    for (g_228 = 0; (g_228 >= 25); g_228 = safe_add_func_int32_t_s_s(g_228, 1))
    {
        short **l_504 = (void*)0;
        const int l_505 = 0xD29443E5L;
        const int *l_508 = &g_33[1];
        const int **l_507 = &l_508;
        const int ***l_506[9] = {&l_507,&l_507,&l_507,&l_507,&l_507,&l_507,&l_507,&l_507,&l_507};
        short **** const l_523 = (void*)0;
        int l_560[2];
        unsigned char *l_605 = &g_19;
        unsigned char **l_604 = &l_605;
        unsigned char ***l_603 = &l_604;
        int **l_628 = &g_75[5];
        short *l_661[8][6] = {{&g_478,&g_478,&g_379,&g_478,&g_478,&g_379},{&g_478,&g_478,&g_379,&g_478,&g_478,&g_478},{(void*)0,(void*)0,&g_478,(void*)0,(void*)0,&g_478},{(void*)0,(void*)0,&g_478,(void*)0,(void*)0,&g_478},{(void*)0,(void*)0,&g_478,(void*)0,(void*)0,&g_478},{(void*)0,(void*)0,&g_478,(void*)0,(void*)0,&g_478},{(void*)0,(void*)0,&g_478,(void*)0,(void*)0,&g_478},{(void*)0,(void*)0,&g_478,(void*)0,(void*)0,&g_478}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_560[i] = 0xA445B0D9L;
        (**g_31) = func_57(l_503, p_41, ((((((g_354 <= (p_44 , ((l_504 != (void*)0) , ((g_19 < l_505) >= (l_506[0] != (void*)0))))) >= 1UL) | 0UL) >= (**l_507)) == p_44) > (*l_508)));
        for (g_379 = 0; (g_379 <= 5); g_379 += 1)
        {
            unsigned l_509 = 0xC6D29421L;
            unsigned *l_524[5][9][1] = {{{&g_228},{(void*)0},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{(void*)0}},{{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228}},{{(void*)0},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{(void*)0},{&g_228}},{{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{(void*)0}},{{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{(void*)0},{&g_228},{&g_228}}};
            int ** const l_526 = &g_332;
            int *l_541 = &g_33[0];
            int i, j, k;
            if (l_509)
                break;
            for (p_44 = 0; (p_44 <= 5); p_44 += 1)
            {
                unsigned char l_510 = 255UL;
                const int *l_536[5];
                int * const l_557 = &g_33[1];
                int i;
                for (i = 0; i < 5; i++)
                    l_536[i] = &g_33[1];
                for (g_354 = 2; (g_354 <= 8); g_354 += 1)
                {
                    unsigned short *l_540[8][2][8] = {{{&g_435,&g_244,(void*)0,&g_435,&g_435,(void*)0,&g_435,&g_435},{&g_244,&g_435,&g_244,&g_435,&g_435,&g_435,&g_244,(void*)0}},{{&g_244,&g_244,&g_244,&g_244,&g_435,&g_435,(void*)0,&g_244},{&g_244,&g_435,&g_435,&g_435,(void*)0,(void*)0,&g_435,&g_435}},{{&g_244,(void*)0,&g_435,&g_435,(void*)0,&g_244,&g_244,&g_435},{&g_435,&g_244,&g_435,&g_244,&g_435,&g_244,&g_435,&g_435}},{{(void*)0,(void*)0,&g_435,&g_244,&g_435,&g_435,&g_244,&g_435},{&g_435,&g_435,&g_244,&g_435,&g_435,&g_435,&g_244,&g_435}},{{&g_435,&g_244,&g_435,&g_435,&g_435,&g_435,&g_435,&g_244},{&g_244,&g_435,(void*)0,&g_244,&g_435,&g_435,&g_435,(void*)0}},{{&g_244,&g_244,&g_435,&g_435,&g_435,&g_244,&g_244,&g_435},{&g_435,&g_244,&g_244,&g_435,&g_435,&g_435,&g_244,&g_244}},{{(void*)0,&g_435,&g_435,&g_435,&g_244,(void*)0,&g_435,&g_244},{&g_244,&g_435,&g_435,&g_435,&g_435,(void*)0,(void*)0,&g_244}},{{&g_244,(void*)0,&g_435,&g_435,&g_435,(void*)0,&g_244,(void*)0},{&g_435,(void*)0,&g_244,&g_244,&g_244,&g_244,&g_435,&g_435}}};
                    unsigned short **l_539 = &l_540[3][0][5];
                    unsigned *l_574 = &l_509;
                    int *l_575 = &l_560[0];
                    int i, j, k;
                    if (l_510)
                    {
                        short *l_515 = &g_89;
                        int l_520[9] = {0L,0x2F88F425L,0L,0x2F88F425L,0L,0x2F88F425L,0L,0x2F88F425L,0L};
                        unsigned short *l_521 = &g_435;
                        unsigned char *l_522 = &l_510;
                        int i, j;
                        (*g_32) = (((safe_rshift_func_int8_t_s_s(((((*l_515) = (safe_mod_func_int16_t_s_s((!p_43), g_475))) , l_510) > func_57((*g_73), (*g_31), g_19)), 1)) , (safe_add_func_int32_t_s_s((((*l_521) = (safe_lshift_func_int8_t_s_u(l_520[7], (((*l_508) > 253UL) != g_379)))) && 0xA9D5L), (**g_31)))) , 0L);
                        g_75[(p_44 + 2)] = (((((((*l_522) = (((-7L) ^ 0x6B3F6C18L) <= p_43)) && func_57(&g_75[(p_44 + 2)], (*g_31), (0x0EL ^ (8UL & ((void*)0 == l_523))))) , l_524[1][5][0]) != &g_228) , 0x5FL) , p_41);
                    }
                    else
                    {
                        int **l_525 = &g_75[1];
                        (*l_525) = p_42;
                    }
                    if ((((*g_73) = &p_41) == l_526))
                    {
                        unsigned char l_535 = 255UL;
                        unsigned short ***l_538[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_538[i] = &l_537;
                        (*g_32) = (*p_42);
                        (**g_31) = (safe_div_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(0x43CBD8B7L, ((((safe_sub_func_uint8_t_u_u((+((g_478 = g_33[1]) ^ p_44)), (p_44 >= g_475))) & (safe_sub_func_uint16_t_u_u((**l_503), ((g_19 < (l_535 ^ 0xF2781E08L)) | g_164)))) || p_43) , 0x02942A0BL))) , 0xABL), 248UL));
                        l_536[0] = (*l_507);
                        l_539 = l_537;
                    }
                    else
                    {
                        unsigned *l_558 = (void*)0;
                        unsigned *l_559 = &l_509;
                        int l_564 = 0x29974145L;
                        short *l_569[2];
                        short ***l_571 = &l_504;
                        short ****l_570[5][4] = {{&l_571,&l_571,&l_571,&l_571},{&l_571,&l_571,&l_571,&l_571},{&l_571,&l_571,&l_571,&l_571},{&l_571,&l_571,&l_571,&l_571},{&l_571,&l_571,&l_571,&l_571}};
                        int **l_572 = (void*)0;
                        int **l_573 = &l_541;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_569[i] = &g_89;
                        (*l_507) = l_541;
                        (**l_526) = (safe_add_func_uint32_t_u_u(p_43, (safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((l_548 != (p_44 , ((((safe_lshift_func_int16_t_s_s((g_478 = (((((safe_sub_func_uint8_t_u_u((safe_mul_func_uint32_t_u_u(4294967287UL, (func_57(&l_541, l_557, (l_560[0] = ((*l_559) = 4294967295UL))) && (l_563 = (safe_mod_func_int32_t_s_s((*p_42), 1UL)))))), l_564)) ^ (*l_557)) , g_565) != &l_537) > 0xD35AFE40L)), g_132)) != (*l_541)) , p_43) , l_570[3][1]))) < g_228), l_564)), g_33[1]))));
                        (*l_573) = l_557;
                    }
                    (*l_575) = ((*l_541) = ((*p_42) & ((*l_574) = (&g_273 == (void*)0))));
                }
            }
        }
        for (g_89 = 1; (g_89 >= 0); g_89 -= 1)
        {
            unsigned char *l_576 = &g_164;
            int l_577 = (-5L);
            int **l_578 = &g_75[1];
            int ***l_579 = &l_578;
            unsigned l_580 = 0x2B8D0213L;
            unsigned *l_582 = &g_583;
            short *l_633[3];
            short **l_632 = &l_633[0];
            unsigned short ***l_636[7][7][5] = {{{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,(void*)0},{&l_537,(void*)0,&l_537,&l_537,&l_537},{&l_537,(void*)0,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537}},{{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537},{(void*)0,(void*)0,&l_537,&l_537,&l_537},{&l_537,(void*)0,&l_537,(void*)0,&l_537},{&l_537,(void*)0,&l_537,&l_537,&l_537}},{{&l_537,&l_537,&l_537,&l_537,(void*)0},{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,(void*)0,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,(void*)0,&l_537},{(void*)0,&l_537,&l_537,&l_537,&l_537}},{{&l_537,&l_537,&l_537,&l_537,&l_537},{(void*)0,&l_537,(void*)0,&l_537,&l_537},{&l_537,&l_537,(void*)0,(void*)0,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537},{(void*)0,&l_537,(void*)0,&l_537,&l_537},{(void*)0,&l_537,(void*)0,&l_537,&l_537},{(void*)0,&l_537,&l_537,(void*)0,&l_537}},{{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,(void*)0,&l_537},{&l_537,&l_537,&l_537,(void*)0,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,(void*)0,&l_537,(void*)0},{&l_537,&l_537,(void*)0,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537}},{{&l_537,&l_537,(void*)0,&l_537,&l_537},{&l_537,&l_537,&l_537,(void*)0,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537},{(void*)0,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,(void*)0},{&l_537,&l_537,&l_537,&l_537,&l_537},{(void*)0,&l_537,&l_537,&l_537,&l_537}},{{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,(void*)0,&l_537,&l_537,&l_537},{(void*)0,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,&l_537,&l_537},{&l_537,&l_537,&l_537,(void*)0,&l_537},{(void*)0,&l_537,&l_537,&l_537,&l_537}}};
            int l_709 = 0x02C59A7AL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_633[i] = &g_478;
        }
    }
    (**l_503) = (**l_503);
    return l_503;
}







static int * func_45(int p_46, int * p_47, unsigned p_48, const unsigned p_49, short p_50)
{
    int *l_355 = &g_33[1];
    short *l_358 = (void*)0;
    short *l_359 = (void*)0;
    short *l_360 = &g_89;
    char *l_369 = (void*)0;
    int l_370 = (-1L);
    unsigned short *l_371 = &g_244;
    unsigned char l_436 = 0x82L;
    int * const l_452 = &g_33[0];
    unsigned l_456 = 1UL;
    int l_466 = (-3L);
    int *l_498 = &l_466;
    int *l_499[1];
    int *l_500 = &g_33[1];
    int i;
    for (i = 0; i < 1; i++)
        l_499[i] = &l_370;
    (**g_73) = l_355;
    if ((g_33[1] || (safe_div_func_int16_t_s_s(((*l_360) = (*l_355)), ((*l_371) = ((safe_lshift_func_int8_t_s_s((l_370 = ((safe_mod_func_int8_t_s_s(func_57((*g_73), l_355, (safe_mod_func_uint32_t_u_u(((void*)0 == l_358), ((*l_355) , (safe_sub_func_int8_t_s_s((((*l_355) != (&l_359 != &l_360)) & (-7L)), 6L)))))), 0x46L)) & 0xCFL)), 0)) | 0xBF4E7AF7L))))))
    {
        unsigned char l_372 = 2UL;
        int *l_387 = (void*)0;
        int l_437 = (-1L);
        const int *l_458[5] = {&l_370,&l_370,&l_370,&l_370,&l_370};
        int *l_496 = &g_33[1];
        int i;
        (**g_73) = &l_370;
        for (g_164 = 0; (g_164 <= 5); g_164 += 1)
        {
            unsigned *l_373 = &g_354;
            unsigned char *l_376 = &l_372;
            int l_377[1];
            short *l_378 = &g_379;
            int **l_380 = (void*)0;
            int i;
            for (i = 0; i < 1; i++)
                l_377[i] = 0xE9C89B49L;
            (*g_332) = (((*l_373) = l_372) != l_372);
            l_377[0] = (((*g_32) = ((((g_89 = l_372) & g_228) , (safe_rshift_func_uint8_t_u_s((+((*l_376) = ((*g_32) >= p_50))), ((*p_47) <= (*p_47))))) == (g_132 , (((*l_378) = l_377[0]) , ((0x68L == p_48) ^ p_49))))) >= 0x31973DD0L);
            if (l_372)
                break;
            for (g_228 = 0; (g_228 <= 1); g_228 += 1)
            {
                unsigned short l_406 = 0xD7D9L;
                int i, j;
                g_33[g_228] = ((void*)0 == &g_244);
                if (func_57((l_380 = (g_74[g_228] = (*g_73))), (*g_31), (safe_lshift_func_uint16_t_u_s(0xCEA6L, ((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(g_33[g_228], p_48)), g_33[0])) && p_46)))))
                {
                    return l_387;
                }
                else
                {
                    for (g_354 = 0; (g_354 <= 0); g_354 += 1)
                    {
                        int *l_388 = (void*)0;
                        int i;
                        return l_388;
                    }
                    (*l_380) = l_387;
                }
                for (g_132 = 1; (g_132 <= 5); g_132 += 1)
                {
                    const unsigned short l_391[5] = {0UL,0UL,0UL,0UL,0UL};
                    int i;
                    (*g_332) = ((((safe_sub_func_uint16_t_u_u(l_391[2], ((*l_360) = 0x1A9AL))) || (safe_lshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s(p_50, (g_379 , func_57(((*g_73) = (*g_73)), (((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((l_355 = (*l_380)) != (*g_31)) , (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((-8L), 12)), (((*l_371) = (safe_mod_func_uint32_t_u_u(4294967286UL, 9UL))) == g_228)))), 13)), l_370)) <= (*p_47)) , &p_46), p_48)))) & l_406), g_19))) <= 255UL) , (*p_47));
                    (*g_32) = 0x8349A525L;
                    if ((*p_47))
                        continue;
                }
            }
            for (p_48 = 0; (p_48 <= 1); p_48 += 1)
            {
                const unsigned char *l_408[6][8][5] = {{{&l_372,(void*)0,(void*)0,&l_372,&g_19},{&l_372,&l_372,&g_19,(void*)0,(void*)0},{&l_372,&l_372,&g_19,&g_19,(void*)0},{(void*)0,(void*)0,&g_164,(void*)0,&g_19},{(void*)0,&g_164,&g_19,&l_372,&g_164},{&l_372,&l_372,&g_164,&g_19,&g_164},{&l_372,(void*)0,&g_19,&l_372,&g_19},{&l_372,&l_372,&g_19,&l_372,(void*)0}},{{&l_372,&g_164,(void*)0,&g_19,(void*)0},{&l_372,(void*)0,(void*)0,&l_372,&g_19},{&l_372,&l_372,&g_19,(void*)0,(void*)0},{&l_372,&l_372,&g_19,&g_19,(void*)0},{(void*)0,(void*)0,&g_164,(void*)0,&g_19},{(void*)0,&g_164,&g_19,&l_372,&g_164},{&l_372,&l_372,&g_164,&g_19,&g_164},{&l_372,(void*)0,&g_19,&g_19,&g_164}},{{&g_164,&g_19,(void*)0,&g_19,&g_164},{&g_19,&l_372,&g_164,&l_372,(void*)0},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_19,&g_19,(void*)0,(void*)0,(void*)0},{&g_19,&g_19,&l_372,&l_372,&g_164},{(void*)0,&g_164,&l_372,(void*)0,&g_164},{(void*)0,&l_372,(void*)0,&g_164,&g_19},{&g_19,&g_19,&l_372,&l_372,&g_19}},{{&g_19,&g_164,&l_372,&g_19,&g_164},{&g_164,&g_19,(void*)0,&g_19,&g_164},{&g_19,&l_372,&g_164,&l_372,(void*)0},{&g_164,&g_164,&g_164,&g_164,&g_164},{&g_19,&g_19,(void*)0,(void*)0,(void*)0},{&g_19,&g_19,&l_372,&l_372,&g_164},{(void*)0,&g_164,&l_372,(void*)0,&g_164},{(void*)0,&l_372,(void*)0,&g_164,&g_19}},{{&g_19,&g_19,&l_372,&l_372,&g_19},{&g_19,&g_164,&l_372,&g_19,&g_164},{&g_164,&g_19,(void*)0,&g_19,&l_372},{&g_164,&l_372,&l_372,&l_372,&g_19},{(void*)0,&l_372,&l_372,(void*)0,&g_164},{&g_164,&g_164,(void*)0,&g_19,&g_19},{&g_164,&g_164,&g_164,&l_372,&l_372},{&g_19,&l_372,&g_19,&g_19,&g_164}},{{&g_19,&l_372,(void*)0,(void*)0,&g_19},{&g_164,&g_19,&g_19,&l_372,&g_19},{&g_164,&l_372,&g_164,&g_164,&g_164},{(void*)0,&g_19,(void*)0,&g_164,&l_372},{&g_164,&l_372,&l_372,&l_372,&g_19},{(void*)0,&l_372,&l_372,(void*)0,&g_164},{&g_164,&g_164,(void*)0,&g_19,&g_19},{&g_164,&g_164,&g_164,&l_372,&l_372}}};
                const unsigned char **l_407 = &l_408[1][7][2];
                const unsigned char ***l_409 = &l_407;
                int i, j, k;
                g_33[p_48] = 0xCA50729DL;
                (*l_409) = l_407;
            }
        }
        (**g_31) = (p_50 , (*p_47));
        for (g_164 = (-18); (g_164 >= 34); g_164++)
        {
            unsigned char l_412[4] = {0x50L,0x50L,0x50L,0x50L};
            int **l_423 = &g_75[1];
            int l_438 = 0x66694ED4L;
            char l_453 = 0xF9L;
            char **l_465 = (void*)0;
            char ** const *l_464 = &l_465;
            char ** const **l_463 = &l_464;
            int *l_483 = &g_33[1];
            int *l_493 = &l_466;
            int *l_495 = &l_466;
            int i;
        }
    }
    else
    {
        int *l_497 = &g_33[1];
        (*l_355) = (**g_31);
        l_497 = &p_46;
        (**g_73) = l_497;
    }
    return l_500;
}







static short func_57(int ** p_58, int * const p_59, unsigned p_60)
{
    int l_350 = (-5L);
    return l_350;
}







static int ** func_61(int p_62, int ** p_63, int ** p_64, int p_65)
{
    int *l_69[2][5] = {{(void*)0,&g_33[1],&g_33[0],&g_33[1],(void*)0},{(void*)0,&g_33[1],&g_33[0],&g_33[1],(void*)0}};
    int ***l_80 = (void*)0;
    unsigned char l_122 = 7UL;
    char l_123[10][3] = {{0xD0L,0x0AL,0x7FL},{0xD0L,0xD0L,0x0AL},{0L,0x0AL,0x0AL},{0x0AL,0x9DL,0x7FL},{0L,0x9DL,0L},{0x9DL,0xD0L,0L},{0x9DL,0x9DL,0xD0L},{0x0AL,0xD0L,0xD0L},{0xD0L,0x7FL,0L},{0x0AL,0x7FL,0x0AL}};
    unsigned l_147 = 0x91A48057L;
    char *l_188 = &g_132;
    char **l_187 = &l_188;
    short l_189 = 0xD1BBL;
    unsigned short l_277 = 0x74D8L;
    short *l_327 = &l_189;
    short **l_326 = &l_327;
    short ***l_325 = &l_326;
    int **l_348 = &l_69[0][0];
    int i, j;
    l_69[0][3] = l_69[0][3];
    if ((*g_32))
    {
        unsigned l_87 = 0xB9534DD9L;
        int l_90 = (-1L);
        int ****l_98[7] = {&l_80,&l_80,&g_73,&l_80,&l_80,&g_73,&l_80};
        unsigned char l_115[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
        short *l_260 = &g_89;
        unsigned l_261 = 0UL;
        char l_262[2][7] = {{1L,0xD4L,1L,0x45L,0xC0L,0xC0L,0x45L},{1L,0xD4L,1L,0x45L,0xC0L,0xC0L,0x45L}};
        unsigned short *l_267 = &g_244;
        char l_303 = 0L;
        int i, j;
        for (p_62 = 0; (p_62 <= 1); p_62 += 1)
        {
            int **l_70 = &l_69[1][1];
            int ***l_71 = &l_70;
            int ****l_76 = &g_73;
            int ****l_77 = &l_71;
            int ***l_79[2];
            int ****l_78 = &l_79[1];
            int ***l_82[8][1][1] = {{{&g_74[1]}},{{&l_70}},{{&g_74[1]}},{{&l_70}},{{&g_74[1]}},{{&l_70}},{{&g_74[1]}},{{&l_70}}};
            int ****l_81 = &l_82[0][0][0];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_79[i] = (void*)0;
            (*l_71) = l_70;
            for (p_65 = 1; (p_65 >= 0); p_65 -= 1)
            {
                int i, j;
                l_69[p_62][(p_65 + 1)] = l_69[p_65][(p_62 + 2)];
            }
            if ((((p_62 < (safe_unary_minus_func_int16_t_s(((((*l_81) = (l_80 = ((*l_78) = ((*l_77) = ((*l_76) = g_73))))) != &g_74[1]) , ((safe_mod_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((p_62 >= l_87), (**p_63))) | (**p_63)), 255UL)) & (**p_63)))))) | p_65) & p_65))
            {
                unsigned *l_88 = &l_87;
                int l_97[6][6] = {{0x14DAAE8DL,0L,0xBC9109B5L,4L,4L,0xBC9109B5L},{4L,4L,0xBC9109B5L,0L,0x14DAAE8DL,0xBC9109B5L},{0L,0x14DAAE8DL,0xBC9109B5L,0x14DAAE8DL,0L,0xBC9109B5L},{0x14DAAE8DL,0L,0xBC9109B5L,4L,4L,0xBC9109B5L},{4L,4L,0xBC9109B5L,0L,0x14DAAE8DL,0xBC9109B5L},{0L,0x14DAAE8DL,0xBC9109B5L,0x14DAAE8DL,0L,0xBC9109B5L}};
                int l_99[5];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_99[i] = 0xD755E4DDL;
                l_99[2] = ((((5L != p_62) , (*g_31)) != (void*)0) || ((g_89 = ((*l_88) = p_65)) ^ (l_90 & (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((p_62 > (0L < (safe_mod_func_uint16_t_u_u((((((l_97[1][0] = 0L) > 0xB948C0F4L) , 0x8654L) , l_98[2]) != (void*)0), g_33[1])))), g_33[1])), p_65)))));
                if ((*g_32))
                    continue;
                l_99[2] = (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((((**p_63) != (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(g_19, 3)), (safe_lshift_func_uint8_t_u_u(0x66L, 5))))) , ((g_33[1] ^ ((safe_div_func_int8_t_s_s(g_89, g_89)) <= ((*p_63) == (*p_63)))) | ((safe_lshift_func_uint8_t_u_s(((((((void*)0 == &l_87) , 1L) ^ g_19) < g_33[1]) <= (**p_63)), p_65)) , p_65))) , 1L) , p_62), 0x3162L)), 6));
                (*g_73) = (*g_73);
            }
            else
            {
                if ((**p_63))
                    break;
                for (l_90 = 1; (l_90 >= 0); l_90 -= 1)
                {
                    int l_114 = 0x31A1BBCFL;
                    int i, j;
                    l_115[5] = l_114;
                }
            }
            for (l_90 = 0; (l_90 <= 1); l_90 += 1)
            {
                int l_116 = 0x4A10173AL;
                int l_117[1];
                int **l_121 = &g_75[6];
                int i;
                for (i = 0; i < 1; i++)
                    l_117[i] = (-1L);
                l_116 = ((**p_63) > g_89);
                for (l_116 = 1; (l_116 >= 0); l_116 -= 1)
                {
                    unsigned short l_118 = 0x83A3L;
                    l_118 = (l_117[0] = (*g_32));
                    if ((p_65 <= p_62))
                    {
                        int **l_119 = &l_69[1][3];
                        (*l_119) = (*g_31);
                        return (*g_73);
                    }
                    else
                    {
                        int l_120 = 0x49601793L;
                        l_120 = (**g_31);
                    }
                    for (g_89 = 0; (g_89 <= 1); g_89 += 1)
                    {
                        return l_121;
                    }
                }
            }
        }
        if ((*g_32))
        {
            short l_124 = 0x3524L;
            if ((((p_65 < (0x238D5DD7L == (p_63 != (void*)0))) | (p_62 ^ (((l_122 == g_33[0]) <= ((void*)0 != (*g_73))) , l_123[2][1]))) , l_124))
            {
                return (*g_73);
            }
            else
            {
                return (*g_73);
            }
        }
        else
        {
            char *l_127 = &l_123[3][1];
            int l_130 = (-1L);
            char *l_131 = &g_132;
            char **l_133 = &l_131;
            short l_134 = 0L;
            unsigned char l_140 = 252UL;
            int l_172 = 0L;
            unsigned *l_197 = &l_87;
            int **l_247 = (void*)0;
            l_130 = (((*l_131) = (safe_div_func_uint16_t_u_u(1UL, (((((*l_127) = p_65) , 0x7C70F10FL) , (0xFB97L == ((safe_mod_func_int8_t_s_s(g_19, g_33[1])) && 4L))) , l_130)))) , ((((*l_133) = &g_132) != (void*)0) , (**p_63)));
            l_134 = l_130;
            if (l_130)
            {
                (**g_73) = (*p_63);
            }
            else
            {
                unsigned short l_135[4];
                const int *l_138 = &g_33[1];
                const int **l_137 = &l_138;
                const int ***l_136 = &l_137;
                int l_146 = 0x0119DA81L;
                char *l_207 = &l_123[8][1];
                unsigned *l_219 = &l_87;
                unsigned short *l_242 = &l_135[2];
                unsigned short *l_243 = &g_244;
                int i;
                for (i = 0; i < 4; i++)
                    l_135[i] = 0UL;
                l_135[1] = (*g_32);
                if (((void*)0 == l_136))
                {
                    int l_141 = 0xFAAE967BL;
                    int **l_167 = &g_75[1];
                    if ((**l_137))
                    {
                        (*l_137) = (**g_73);
                    }
                    else
                    {
                        short l_139 = 1L;
                        l_139 = (**g_31);
                        l_140 = (*g_32);
                        l_141 = (**g_31);
                        l_141 = (***l_136);
                    }
                    for (l_90 = 18; (l_90 >= (-8)); l_90 = safe_sub_func_int32_t_s_s(l_90, 1))
                    {
                        (*l_137) = ((**g_73) = ((*p_63) = (**g_73)));
                    }
                    for (l_141 = 2; (l_141 == (-1)); l_141--)
                    {
                        char ***l_148 = (void*)0;
                        char ***l_149 = &l_133;
                        unsigned *l_162 = &l_87;
                        int l_163 = (-1L);
                        l_146 = (**g_31);
                        l_147 = l_134;
                        (*l_149) = &l_127;
                        l_146 = ((g_89 < (safe_sub_func_uint16_t_u_u(p_65, ((safe_lshift_func_uint16_t_u_u((((***l_149) = ((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(((!(((l_141 || ((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((*l_162) = g_132), l_163)), g_132)) != g_164)) > (safe_sub_func_uint8_t_u_u(((**g_73) == &l_130), 0x18L))) , l_134)) & 0UL), g_164)), 9)) ^ p_62)) >= l_163), g_164)) || (-1L))))) , 0x357E9770L);
                    }
                    return l_167;
                }
                else
                {
                    (*p_63) = &l_130;
                }
                if ((safe_sub_func_int8_t_s_s((l_146 = g_33[1]), ((**p_63) != ((safe_lshift_func_uint8_t_u_s(246UL, 5)) < p_62)))))
                {
                    int ** const *l_182 = &g_74[1];
                    char l_194 = 1L;
                    if (l_172)
                    {
                        const int *l_174 = &l_130;
                        const int **l_173 = &l_174;
                        (*l_137) = (**l_136);
                        (*l_173) = ((**l_136) = (**g_73));
                        (**p_63) = l_172;
                    }
                    else
                    {
                        char l_175[2][9][6] = {{{0L,0x2FL,0xAAL,(-1L),(-1L),0xAAL},{0x52L,0x52L,0xC3L,0x52L,(-5L),0xAAL},{(-5L),(-1L),6L,0x52L,(-1L),0xC3L},{0L,(-5L),6L,(-5L),0L,0xAAL},{0x2FL,(-5L),0xC3L,0x2FL,(-1L),(-7L)},{0x2FL,(-1L),(-7L),(-5L),(-5L),(-7L)},{0L,0L,0xC3L,0x52L,(-5L),0xAAL},{(-5L),(-1L),6L,0x52L,(-1L),0xC3L},{0L,(-5L),6L,(-5L),0L,0xAAL}},{{0x2FL,(-5L),0xC3L,0x2FL,(-1L),(-7L)},{0x2FL,(-1L),(-7L),(-5L),(-5L),(-7L)},{0L,0L,0xC3L,0x52L,(-5L),0xAAL},{(-5L),(-1L),6L,0x52L,(-1L),0xC3L},{0L,(-5L),6L,(-5L),0L,0xAAL},{0x2FL,(-5L),0xC3L,0x2FL,(-1L),(-7L)},{0x2FL,(-1L),(-7L),(-5L),(-5L),(-7L)},{0L,0L,0xC3L,0x52L,(-5L),0xAAL},{(-5L),(-1L),0x2FL,0x42L,0x40L,0L}}};
                        int i, j, k;
                        l_146 = (l_175[0][6][5] = 5L);
                    }
                    for (l_122 = (-29); (l_122 <= 60); l_122 = safe_add_func_int8_t_s_s(l_122, 2))
                    {
                        short *l_183 = &g_89;
                        (**p_63) = (safe_add_func_int8_t_s_s((g_32 != g_75[1]), ((((safe_lshift_func_uint16_t_u_s(g_33[1], 12)) && (&p_63 == l_182)) & g_33[0]) == (((((*l_183) = ((g_19 && g_164) , (((1UL | g_33[1]) == 0x90L) >= p_65))) , g_184[3][4]) != l_187) == 252UL))));
                        if ((**g_31))
                            continue;
                        (**p_63) = 7L;
                        if (l_189)
                            break;
                    }
                    for (g_132 = (-14); (g_132 < 8); ++g_132)
                    {
                        unsigned short *l_198 = &l_135[1];
                        int l_199 = 9L;
                        l_146 = (*g_32);
                        (**p_63) = ((safe_div_func_uint16_t_u_u(((((l_194 != (l_134 < (((safe_sub_func_int8_t_s_s(((0x8E820DD8L == ((((1UL || g_33[1]) && (((*l_198) = ((((g_33[1] != g_132) | (*g_32)) , l_197) != g_22)) ^ g_33[0])) || p_62) < p_62)) <= (**g_31)), 0UL)) & g_164) != l_199))) | 0xAE4FL) && (**g_31)) , 0x730FL), 0xD765L)) ^ g_89);
                        (**p_63) = (*g_32);
                        (**p_63) = 0xF3E45B23L;
                    }
                }
                else
                {
                    unsigned l_202 = 9UL;
                    short *l_214 = &l_134;
                    unsigned short *l_226 = &l_135[1];
                    unsigned *l_227 = &g_228;
                    for (l_134 = (-23); (l_134 < 23); l_134 = safe_add_func_uint32_t_u_u(l_134, 6))
                    {
                        int **l_205 = (void*)0;
                        int **l_206 = &g_75[1];
                        if ((*g_32))
                            break;
                        if (l_202)
                            continue;
                        l_146 = (safe_lshift_func_int16_t_s_u((g_132 && (((void*)0 == (*g_73)) & (**l_137))), 3));
                        (*l_206) = (*g_31);
                    }
                    (**p_63) = 5L;
                    l_146 = (((p_65 && 1UL) > ((((l_207 == (*l_133)) , (**l_137)) ^ (safe_mod_func_uint8_t_u_u(0x0DL, (safe_mod_func_uint32_t_u_u(((*g_32) , (((safe_rshift_func_int16_t_s_s(((*l_214) = p_62), (safe_add_func_int16_t_s_s((((**p_63) = ((254UL > p_62) < (**p_63))) , g_33[1]), 0x9FE5L)))) == (**g_31)) | 1UL)), 7UL))))) < (-3L))) ^ p_65);
                    if ((((*l_227) = (+((safe_sub_func_int32_t_s_s((p_65 <= g_33[1]), (&l_202 == (l_219 = (g_33[1] , &l_147))))) && (safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((*l_226) = ((l_214 == (void*)0) >= g_164)), g_89)), (**p_63))), 7))))) , (**g_31)))
                    {
                        unsigned short l_239 = 65531UL;
                        short **l_241 = &l_214;
                        short ***l_240 = &l_241;
                        (**p_63) = ((safe_add_func_uint8_t_u_u(249UL, ((((((safe_sub_func_int8_t_s_s((l_140 | g_33[1]), (((*l_214) = (safe_sub_func_int16_t_s_s(1L, g_164))) & p_62))) || (g_32 != &l_147)) ^ (safe_lshift_func_int8_t_s_s(((*l_131) = ((safe_div_func_uint16_t_u_u(((*l_226) = (((1L == l_130) >= 0UL) != p_62)), 0xF61BL)) || (-1L))), 0))) ^ l_202) >= l_239) >= g_164))) , (*g_32));
                        (*l_240) = (void*)0;
                    }
                    else
                    {
                        (**p_63) = (***l_136);
                        (*l_137) = (*p_63);
                    }
                }
                if ((p_65 && (p_65 , ((g_33[0] != l_172) && (((*l_243) = ((*l_242) = p_65)) ^ (safe_add_func_int32_t_s_s(((void*)0 == &g_185), p_65)))))))
                {
                    return l_247;
                }
                else
                {
                    const unsigned char l_252 = 0UL;
                    int l_253 = 0xE013C89DL;
                    l_253 = (safe_mod_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(p_65, l_252)) >= g_164) < g_244), g_89));
                }
            }
        }
        l_262[0][6] = (l_261 = (((((safe_sub_func_uint16_t_u_u(65535UL, g_228)) <= (((g_33[1] && ((((**g_31) <= (((*l_260) = ((((((*g_32) , ((safe_sub_func_uint16_t_u_u(0xEF7BL, (safe_rshift_func_int8_t_s_u((-6L), g_33[0])))) >= g_164)) == 0xCB059B8BL) != p_62) <= 0x1814L) || p_62)) >= p_62)) , &l_147) != g_32)) <= (-10L)) & p_65)) <= g_228) || g_132) < 0x99L));
        if (((((g_33[1] , g_164) , p_65) | (safe_lshift_func_int16_t_s_s(g_228, 3))) , (safe_add_func_uint32_t_u_u((3L != (g_33[1] != (((*l_267) = g_33[1]) <= (&p_63 != &g_74[2])))), 2UL))))
        {
            int *l_272[9][10][2] = {{{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]}},{{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]}},{{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]}},{{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]}},{{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]}},{{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]}},{{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]}},{{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]}},{{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]},{(void*)0,&g_33[1]},{(void*)0,&g_33[1]},{(void*)0,&g_33[0]},{(void*)0,&g_33[0]}}};
            int i, j, k;
            for (g_132 = 0; (g_132 > (-9)); g_132--)
            {
                char ****l_274 = (void*)0;
                char ****l_275 = &g_273;
                int l_276 = 0x1EB8C3FEL;
                int l_286 = (-3L);
                int l_287 = 1L;
                for (g_89 = (-7); (g_89 == 20); g_89++)
                {
                    for (l_122 = 0; (l_122 <= 1); l_122 += 1)
                    {
                        int i, j;
                        l_272[2][1][0] = l_69[l_122][(l_122 + 1)];
                    }
                    (**g_73) = (void*)0;
                }
                l_287 = ((l_277 = ((*l_267) = ((((*l_275) = g_273) == &g_184[5][0]) <= l_276))) || ((safe_sub_func_int32_t_s_s((l_276 = p_65), (safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((*l_260) = p_65), (safe_add_func_int16_t_s_s((p_62 ^ ((p_62 && (g_164 = (l_286 = ((p_65 >= g_33[1]) > p_62)))) , 0xDEL)), p_62)))), g_132)))) , 0x6647L));
            }
            for (g_132 = 1; (g_132 >= 0); g_132 -= 1)
            {
                int * const l_288 = &g_33[1];
                int **l_289 = &l_272[2][1][0];
                int * const **l_295[6][8] = {{&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31},{&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31},{&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31},{&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31},{&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31},{&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31}};
                int i, j;
                (*l_289) = l_288;
                for (p_65 = 6; (p_65 >= 0); p_65 -= 1)
                {
                    unsigned short l_290 = 0x5426L;
                    int l_298 = 0xB153B35BL;
                    if (l_290)
                    {
                        int * const ***l_296 = (void*)0;
                        int * const ***l_297 = &l_295[5][7];
                        l_298 = (((0L & 0xFD51959DL) && ((*l_267) = (((safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s((p_62 != p_62), (**g_31))), g_33[1])) , ((*l_297) = l_295[5][7])) != &g_74[2]))) & p_65);
                        if (p_62)
                            break;
                    }
                    else
                    {
                        short l_299 = 0xAFD4L;
                        l_299 = (p_62 >= 4L);
                    }
                    for (g_89 = 7; (g_89 >= 2); g_89 -= 1)
                    {
                        unsigned *l_302 = &l_147;
                        int i, j, k;
                        l_298 = (((((&g_89 == (void*)0) , (safe_add_func_int32_t_s_s((*g_32), (((g_33[1] >= p_65) <= (((*l_302) = p_65) , (((*l_267) = p_62) >= (((void*)0 == l_98[2]) | p_62)))) || (*l_288))))) , &g_228) == (void*)0) < 0x8083L);
                        if ((*g_32))
                            break;
                        l_298 = (**g_31);
                    }
                    if (l_290)
                        break;
                    for (l_290 = 0; (l_290 <= 1); l_290 += 1)
                    {
                        char l_304 = 0x6AL;
                        l_298 = (p_65 ^ (((~(l_303 = (*g_32))) || (+(p_62 >= l_304))) > p_62));
                        if ((**g_31))
                            break;
                    }
                }
            }
            for (l_87 = 0; (l_87 >= 11); l_87 = safe_add_func_int32_t_s_s(l_87, 9))
            {
                return (*g_73);
            }
            for (g_244 = 0; (g_244 <= 6); g_244 += 1)
            {
                char l_309[9][6][4];
                int l_310 = 0x8178F791L;
                int i, j, k;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 6; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_309[i][j][k] = 9L;
                    }
                }
                l_309[2][2][2] = (safe_lshift_func_uint16_t_u_s(l_115[g_244], 4));
                l_310 = l_309[2][2][2];
            }
        }
        else
        {
            unsigned l_313 = 0x7A103796L;
            int l_318 = 0x66328633L;
            int l_319 = 0L;
            short ****l_328 = (void*)0;
            short ****l_329 = &l_325;
            unsigned l_333 = 0xECB908F1L;
            short l_334[7][2] = {{0xAD27L,0xFADDL},{(-8L),8L},{(-8L),0xFADDL},{0xAD27L,0xAD27L},{0xFADDL,(-8L)},{8L,(-8L)},{0xFADDL,0xAD27L}};
            int i, j;
            l_319 = ((safe_add_func_uint16_t_u_u((((l_313 | (l_318 = (safe_rshift_func_uint16_t_u_s((((p_65 | (((*l_267) = g_244) > g_19)) && (((**l_187) = l_313) >= p_65)) , (p_65 , (safe_mod_func_int8_t_s_s(l_313, (g_33[1] , g_33[0]))))), 6)))) && (-1L)) != p_65), p_65)) & p_65);
            l_319 = (safe_div_func_int8_t_s_s((g_322 == ((*l_329) = l_325)), p_62));
            for (l_189 = 0; (l_189 != 3); l_189 = safe_add_func_uint8_t_u_u(l_189, 6))
            {
                (**g_73) = (p_65 , g_332);
                l_334[2][1] = l_333;
            }
        }
    }
    else
    {
        int *l_335 = (void*)0;
        unsigned char *l_345 = &l_122;
        char ** const * const l_346 = &l_187;
        int l_347 = 0x2456973FL;
        l_335 = (*p_63);
        l_347 = ((((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((-6L), g_89)), p_65)) == g_132))) , ((*l_335) , 4294967295UL)) >= p_62) == (safe_sub_func_uint16_t_u_u(p_62, ((((*l_345) = (safe_lshift_func_int8_t_s_u(((*l_335) <= g_19), 1))) , &g_184[3][4]) == l_346))));
    }
    (*l_348) = (*g_31);
    return (*g_73);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_33[i], "g_33[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_568, "g_568", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_738[i][j], "g_738[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_740, "g_740", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_884[i][j][k], "g_884[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_899, "g_899", print_hash_value);
    transparent_crc(g_1014, "g_1014", print_hash_value);
    transparent_crc(g_1084, "g_1084", print_hash_value);
    transparent_crc(g_1106, "g_1106", print_hash_value);
    transparent_crc(g_1215, "g_1215", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
