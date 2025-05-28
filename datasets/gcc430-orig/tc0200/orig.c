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



static unsigned short g_7[4][10][6] = {{{0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}}, {{0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}}, {{0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}}, {{0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}, {0xAF42L, 65532UL, 0x60E7L, 8UL, 5UL, 0x03CAL}}};
static int g_8 = 0x29AC92D1L;
static int *g_17 = (void*)0;
static int **g_16 = &g_17;
static int g_52 = 4L;
static int g_68 = 0x7E6EF1F7L;
static short g_72[3] = {0x9282L, 0x9282L, 0x9282L};
static int *g_74 = (void*)0;
static unsigned short g_81 = 65529UL;
static int g_83[8] = {(-2L), (-2L), (-2L), (-2L), (-2L), (-2L), (-2L), (-2L)};
static unsigned g_117 = 0xCD2DBF4BL;
static unsigned g_126 = 0xDD48D0EEL;
static int g_179 = 0xCA03A09FL;
static int g_181 = 0xBB1B36E3L;
static int **g_190[6] = {&g_17, &g_17, &g_17, &g_17, &g_17, &g_17};
static char g_195 = 0x07L;
static unsigned char g_245 = 0x9AL;
static char *g_263 = &g_195;
static char **g_262 = &g_263;
static unsigned char **g_456 = (void*)0;
static unsigned char ***g_455[10] = {&g_456, &g_456, &g_456, &g_456, &g_456, &g_456, &g_456, &g_456, &g_456, &g_456};
static unsigned g_514 = 0xCC5BD55EL;
static short *g_523[7] = {&g_72[1], &g_72[0], &g_72[1], &g_72[0], &g_72[1], &g_72[0], &g_72[1]};
static unsigned char g_527 = 252UL;
static unsigned short g_615 = 65535UL;
static short g_628 = 0xF1B7L;
static unsigned g_630[9][10] = {{1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}};



static short func_1(void);
static int * func_2(unsigned p_3);
static int ** func_11(int * p_12);
static int * func_13(int ** p_14, short p_15);
static unsigned char func_21(unsigned char p_22);
static unsigned char func_23(int ** p_24);
static int ** func_25(int * p_26);
static int * func_27(unsigned p_28, unsigned p_29, int ** p_30);
static int ** func_32(int * p_33, int p_34, unsigned char p_35);
static int func_39(int p_40, unsigned p_41, short p_42, int ** p_43);
static short func_1(void)
{
    unsigned l_4 = 0xC506D444L;
    unsigned short l_674 = 9UL;
    int *l_675 = &g_8;
    int l_676 = (-6L);
    short *l_677 = (void*)0;
    short *l_678 = &g_72[2];
    int ***l_679 = &g_190[0];
    unsigned char l_680 = 246UL;
    int l_681 = (-3L);
    unsigned l_682 = 0x5D6215CAL;
    (*g_16) = func_2(l_4);

    ;
    ;

    l_675 = func_2(l_674);

    ;
    l_681 = l_680;
    return l_682;
}







static int * func_2(unsigned p_3)
{
    int l_536 = 7L;
    int *l_544 = &g_83[7];
    int l_545 = (-10L);
    int ***l_572 = (void*)0;
    unsigned l_579 = 4294967289UL;
    int l_647 = (-1L);
    int l_648[5][7][3] = {{{0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}}, {{0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}}, {{0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}}, {{0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}}, {{0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}, {0L, 1L, (-7L)}}};
    unsigned char *l_662 = &g_527;
    int l_671 = 1L;
    int *l_673 = &l_545;
    int i, j, k;
    for (p_3 = (-19); (p_3 >= 2); ++p_3)
    {
        int l_9 = (-1L);
        unsigned l_548 = 0UL;
        int **l_568 = &g_17;
        int *l_583 = (void*)0;
        int **l_582[10] = {&l_583, (void*)0, &l_583, (void*)0, &l_583, (void*)0, &l_583, (void*)0, &l_583, (void*)0};
        int l_619 = (-8L);
        unsigned short l_622 = 0x55B1L;
        int i;
        for (g_8 = 3; (g_8 >= 0); g_8 -= 1)
        {
            int *l_10 = &l_9;
            int **l_537 = &l_10;
            int *l_541 = &g_68;
            unsigned char *l_550 = &g_527;
            unsigned short l_629 = 65532UL;
            short **l_635[10][7][3] = {{{&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}}, {{&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}}, {{&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}}, {{&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}}, {{&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}}, {{&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}}, {{&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}}, {{&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}}, {{&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}}, {{&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}, {&g_523[6], &g_523[6], &g_523[1]}}};
            int i, j, k;
            (*l_10) = l_9;
            for (l_9 = 3; (l_9 >= 0); l_9 -= 1)
            {
                int ***l_535 = &g_16;
                int *l_543[10] = {&g_83[5], (void*)0, (void*)0, (void*)0, (void*)0, &g_83[5], (void*)0, (void*)0, (void*)0, (void*)0};
                unsigned char *l_549 = &g_527;
                int *l_575 = (void*)0;
                int **l_574 = &l_575;
                int ***l_573 = &l_574;
                int i, j, k;
            }
        }
    }
    for (g_68 = 0; (g_68 <= 2); g_68 += 1)
    {
        short *l_637 = &g_628;
        int **l_640 = (void*)0;
        int *l_641[10][6] = {{&g_179, &g_181, &g_181, &g_181, &l_536, &l_536}, {&g_179, &g_181, &g_181, &g_181, &l_536, &l_536}, {&g_179, &g_181, &g_181, &g_181, &l_536, &l_536}, {&g_179, &g_181, &g_181, &g_181, &l_536, &l_536}, {&g_179, &g_181, &g_181, &g_181, &l_536, &l_536}, {&g_179, &g_181, &g_181, &g_181, &l_536, &l_536}, {&g_179, &g_181, &g_181, &g_181, &l_536, &l_536}, {&g_179, &g_181, &g_181, &g_181, &l_536, &l_536}, {&g_179, &g_181, &g_181, &g_181, &l_536, &l_536}, {&g_179, &g_181, &g_181, &g_181, &l_536, &l_536}};
        int l_642 = 0xD202D8DBL;
        int **l_643[2];
        unsigned char *l_646[3][1];
        int i, j;
        for (i = 0; i < 2; i++)
            l_643[i] = &g_74;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_646[i][j] = &g_527;
        }
        (*g_16) = func_27(func_39((l_642 = ((~((*l_637) = g_72[g_68])) < func_39(((*l_544) = (0xF291D3D8L == p_3)), p_3, p_3, &l_544))), g_245, p_3, &l_544), p_3, l_643[1]);

        ;
        l_544 = &l_545;

        ;
        (*l_544) = (((safe_sub_func_uint8_t_u_u(p_3, (*l_544))) >= ((**g_262) = (((((*l_637) = ((l_648[4][3][0] = (p_3 & (6L <= (l_647 = (g_72[2] , func_23(&g_17)))))) <= g_179)) <= (&g_615 == (void*)0)) != 0x2C7CL) | p_3))) <= 7UL);
        for (g_514 = 0; (g_514 <= 3); g_514 += 1)
        {
            int l_649 = 0x4A4F1BFFL;
            unsigned char l_655 = 0xD8L;
            int l_672 = 0x81C00597L;
            if (l_649)
                break;
            for (g_8 = 6; (g_8 >= 1); g_8 -= 1)
            {
                int l_654 = (-9L);
                int i, j, k;
                if (((safe_rshift_func_uint8_t_u_s((l_654 = (safe_add_func_uint16_t_u_u(((g_7[g_514][(g_8 + 3)][(g_68 + 2)] < p_3) || (!p_3)), (p_3 , (g_7[g_514][(g_8 + 3)][(g_68 + 2)] , (+func_23(&g_74))))))), (((((func_21((func_21(p_3) , l_655)) == (**g_262)) || g_630[7][0]) , p_3) <= p_3) , 0x82L))) | (*l_544)))
                {
                    (*l_544) = (0x8DL ^ ((safe_lshift_func_int8_t_s_s(g_7[g_514][(g_8 + 3)][(g_68 + 2)], 4)) != (safe_rshift_func_uint16_t_u_s((((**g_16) = (p_3 , 6L)) || p_3), ((*l_637) = ((safe_add_func_int16_t_s_s((0x6DDDL != p_3), (((void*)0 == l_662) , p_3))) , p_3))))));
                }
                else
                {
                    char **l_663 = &g_263;
                    char ***l_664 = (void*)0;
                    char ***l_665 = &l_663;
                    (**g_16) = (*g_17);
                    if (p_3)
                        break;
                    for (p_3 = 0; (p_3 <= 6); p_3 += 1)
                    {
                        return (*g_16);


                    }
                    (*l_665) = l_663;
                }
            }
            for (l_649 = 3; (l_649 >= 0); l_649 -= 1)
            {
                (*g_17) = func_23(&g_74);
                for (l_655 = 0; (l_655 <= 3); l_655 += 1)
                {
                    int ****l_670 = &l_572;
                    int i, j, k;
                    l_672 = (l_671 = ((~((((void*)0 != &g_523[0]) >= g_7[g_68][(l_655 + 5)][l_649]) ^ p_3)) > ((((safe_sub_func_int8_t_s_s((*g_263), 0xCEL)) && (safe_sub_func_uint32_t_u_u((l_649 ^ func_23((g_190[0] = &g_74))), 0L))) , (void*)0) == l_670)));
                    if (g_7[g_68][(l_655 + 5)][l_649])
                        continue;
                    if ((*l_544))
                        continue;
                    (*g_16) = func_27(p_3, p_3, &g_17);
                }
            }
        }
    }

    ;
    return (*g_16);


}







static int ** func_11(int * p_12)
{
    unsigned l_38[3];
    int l_44 = 0x3184BAFCL;
    short l_241 = 0x81BFL;
    int l_247 = 0L;
    int *l_264 = &g_83[5];
    int l_293[6][8] = {{(-6L), 0xF2194803L, 0xD52C08ABL, 0xF2194803L, (-6L), 0xB9B432B1L, 0xD52C08ABL, 0xB9B432B1L}, {(-6L), 0xF2194803L, 0xD52C08ABL, 0xF2194803L, (-6L), 0xB9B432B1L, 0xD52C08ABL, 0xB9B432B1L}, {(-6L), 0xF2194803L, 0xD52C08ABL, 0xF2194803L, (-6L), 0xB9B432B1L, 0xD52C08ABL, 0xB9B432B1L}, {(-6L), 0xF2194803L, 0xD52C08ABL, 0xF2194803L, (-6L), 0xB9B432B1L, 0xD52C08ABL, 0xB9B432B1L}, {(-6L), 0xF2194803L, 0xD52C08ABL, 0xF2194803L, (-6L), 0xB9B432B1L, 0xD52C08ABL, 0xB9B432B1L}, {(-6L), 0xF2194803L, 0xD52C08ABL, 0xF2194803L, (-6L), 0xB9B432B1L, 0xD52C08ABL, 0xB9B432B1L}};
    unsigned short l_328 = 0x4303L;
    int **l_337 = &g_17;
    unsigned char *l_398 = (void*)0;
    int l_403[1][2];
    unsigned *l_404 = &l_38[0];
    int l_408 = 1L;
    short *l_525 = &g_72[2];
    short **l_524[4] = {&l_525, &l_525, &l_525, &l_525};
    int i, j;
    for (i = 0; i < 3; i++)
        l_38[i] = 0UL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_403[i][j] = 3L;
    }
    if ((*p_12))
    {
        short l_20[8] = {(-3L), (-3L), 0x5C6FL, (-3L), (-3L), 0x5C6FL, (-3L), (-3L)};
        unsigned l_31 = 0x50041AC5L;
        char l_242 = (-1L);
        int *l_271 = &g_52;
        unsigned l_311 = 0UL;
        int l_314[8][5] = {{8L, 0L, 8L, 0L, 8L}, {8L, 0L, 8L, 0L, 8L}, {8L, 0L, 8L, 0L, 8L}, {8L, 0L, 8L, 0L, 8L}, {8L, 0L, 8L, 0L, 8L}, {8L, 0L, 8L, 0L, 8L}, {8L, 0L, 8L, 0L, 8L}, {8L, 0L, 8L, 0L, 8L}};
        int i, j;
        (*g_16) = func_13(g_16, (g_72[2] = ((-4L) > (safe_mod_func_int8_t_s_s(l_20[2], func_21(func_23(func_25(func_27(((void*)0 == (*g_16)), l_31, func_32(p_12, (((safe_lshift_func_uint16_t_u_u((l_38[0] ^ (((func_39(l_31, l_31, l_44, &g_17) , l_38[0]) >= 1L) , 0UL)), 12)) | l_20[2]) == (-5L)), l_38[0]))))))))));

        ;
        ;

        for (g_181 = 0; (g_181 != 26); g_181++)
        {
            char l_233[2][10][1] = {{{0x87L}, {0x87L}, {0x87L}, {0x87L}, {0x87L}, {0x87L}, {0x87L}, {0x87L}, {0x87L}, {0x87L}}, {{0x87L}, {0x87L}, {0x87L}, {0x87L}, {0x87L}, {0x87L}, {0x87L}, {0x87L}, {0x87L}, {0x87L}}};
            unsigned char *l_243 = (void*)0;
            unsigned char *l_244 = &g_245;
            int *l_246 = (void*)0;
            unsigned short *l_272[2][5][8] = {{{&g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81}, {&g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81}, {&g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81}, {&g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81}, {&g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81}}, {{&g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81}, {&g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81}, {&g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81}, {&g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81}, {&g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81, &g_7[3][5][3], &g_81}}};
            int *l_280 = &g_68;
            unsigned l_281 = 4UL;
            int *l_318 = &g_83[5];
            int i, j, k;
        }
        (*g_16) = func_13(&l_271, func_23(&l_264));

        ;
    }
    else
    {
        short *l_386 = (void*)0;
        short *l_387 = (void*)0;
        short **l_388 = &l_387;
        int l_389 = (-3L);
        unsigned char *l_397 = &g_245;
        unsigned char **l_396 = &l_397;
        int l_401[4] = {(-1L), 1L, (-1L), 1L};
        unsigned l_402 = 1UL;
        int i;
        (*l_264) = (l_386 != ((*l_388) = l_387));
        (*l_264) = ((l_389 , (safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((g_81 = (l_389 , (((!(safe_lshift_func_uint16_t_u_u(g_68, 12))) ^ ((((*l_396) = (void*)0) != l_398) ^ (*p_12))) || (l_389 = ((safe_rshift_func_int16_t_s_u(func_21(((*p_12) | (*p_12))), 13)) != l_389))))) & l_401[0]) || (*l_264)), l_401[3])), l_402))) == (*l_264));

        ;
    }

    ;
    ;

    if (((g_52 && (!((*l_404) = l_403[0][0]))) || (*l_264)))
    {
        int l_407 = 0x489344F5L;
        unsigned char *l_411 = &g_245;
        int l_414[8] = {0x52F3F660L, 7L, 0x52F3F660L, 7L, 0x52F3F660L, 7L, 0x52F3F660L, 7L};
        unsigned short *l_421 = &g_7[0][5][3];
        int ***l_422[6];
        int *l_435 = &g_83[5];
        unsigned char l_513 = 0x4AL;
        int i;
        for (i = 0; i < 6; i++)
            l_422[i] = &l_337;
        l_408 = (safe_rshift_func_int16_t_s_s(((l_407 , g_81) && g_7[2][8][2]), 4));
        (*g_16) = p_12;

        ;
        (*l_264) = (safe_lshift_func_uint8_t_u_s(((*l_411) = g_245), l_407));
        if ((safe_lshift_func_uint8_t_u_s(((*l_411) = (*l_264)), 0)))
        {
            int *l_423[3];
            int l_443[5][8][2] = {{{0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}}, {{0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}}, {{0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}}, {{0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}}, {{0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}, {0xFB07FBAFL, 0x82F9EE1BL}}};
            unsigned char **l_453 = &l_411;
            unsigned char ***l_452 = &l_453;
            short l_460 = 5L;
            int l_489 = 0xC6A03658L;
            int l_502 = 0L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_423[i] = &g_52;
            l_423[2] = p_12;


            for (l_407 = 0; (l_407 <= 13); l_407 = safe_add_func_uint8_t_u_u(l_407, 2))
            {
                int *l_426 = &l_293[3][1];
                (*g_16) = l_426;

                ;
                for (g_179 = 10; (g_179 != 5); g_179 = safe_sub_func_int16_t_s_s(g_179, 9))
                {
                    return &g_17;



                }
                if ((safe_lshift_func_int16_t_s_u(g_8, (**l_337))))
                {
                    for (g_81 = (-22); (g_81 <= 41); g_81 = safe_add_func_uint16_t_u_u(g_81, 2))
                    {
                        if ((*g_17))
                            break;
                    }
                    (*g_16) = (p_12 = l_423[1]);

                    ;
                    for (g_179 = 0; (g_179 <= 7); g_179 += 1)
                    {
                        int i;
                        l_414[g_179] = (safe_rshift_func_int8_t_s_u(((*g_263) ^ g_181), 7));
                        (*g_16) = l_435;

                        ;
                    }

                    ;
                    if ((*p_12))
                        break;
                }
                else
                {
                    unsigned short l_442 = 0UL;
                    for (l_247 = (-21); (l_247 == (-11)); l_247 = safe_add_func_int8_t_s_s(l_247, 3))
                    {
                        if ((*l_264))
                            break;
                        if ((**g_16))
                            continue;
                    }
                    (*l_264) = (((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((l_442 , l_443[4][7][1]), 0x83L)) && (*g_263)), ((safe_add_func_int16_t_s_s(((((*l_435) , (safe_unary_minus_func_uint16_t_u(0x0DA6L))) , (safe_sub_func_uint32_t_u_u(((*l_404) = ((g_7[3][9][4] & (!((**g_16) = (((*l_426) , 4UL) , (*p_12))))) , g_83[3])), (*p_12)))) ^ 0xD84EL), l_442)) , l_442))) , 0x897814F8L) >= g_52);
                }

                ;
            }

            ;
            ;
            for (g_68 = 0; (g_68 <= (-4)); g_68 = safe_sub_func_int16_t_s_s(g_68, 8))
            {
                unsigned short *l_454 = &g_81;
                if ((*g_17))
                {
                    unsigned short l_451 = 0x5343L;
                    (*l_337) = (l_451 , &l_443[4][7][1]);

                    ;
                }
                else
                {
                    (*l_337) = ((l_452 == ((((void*)0 != l_454) < 0x8B26EDA2L) , g_455[6])) , &l_443[4][7][1]);

                    ;
                }

                ;
            }

            ;
            for (l_44 = (-1); (l_44 <= 14); l_44 = safe_add_func_int32_t_s_s(l_44, 6))
            {
                int **l_459 = &l_423[2];
                int l_467 = 0x9ACDD002L;
                if ((g_117 & l_460))
                {
                    unsigned l_461 = 4294967295UL;
                    l_461 = ((*l_264) = (*p_12));
                    return &g_17;



                }
                else
                {
                    int l_466 = 0L;
                    for (g_68 = 0; (g_68 < 16); ++g_68)
                    {
                        (*l_264) = (safe_rshift_func_uint8_t_u_s((**l_459), 3));
                    }
                    l_467 = l_466;
                }
                for (l_247 = 0; (l_247 <= 5); l_247 += 1)
                {
                    int *l_488 = (void*)0;
                    unsigned char **l_506 = &l_398;
                    int i;
                }
            }
        }
        else
        {
            unsigned char l_517 = 253UL;
            int **l_518 = &l_264;
            (*g_16) = (func_21((safe_mod_func_uint8_t_u_u(func_39(((**l_337) , (l_517 || ((*l_264) >= g_7[1][9][5]))), ((g_72[0] != (((*l_411) = 249UL) <= func_39((g_179 = (**l_337)), l_517, l_517, l_518))) ^ g_72[1]), (**l_518), &g_74), (**l_518)))) , (void*)0);

            ;
        }

        ;

    }
    else
    {
        short *l_519 = (void*)0;
        unsigned short *l_520 = &l_328;
        short *l_522 = &g_72[2];
        short **l_521[1];
        int l_526 = 0x423DDED8L;
        char *l_534 = &g_195;
        int i;
        for (i = 0; i < 1; i++)
            l_521[i] = &l_522;
        if ((((g_527 = ((*l_522) = ((l_526 = (((((((l_519 = &g_72[0]) != (g_523[6] = (((*l_520) = ((void*)0 == &g_126)) , (void*)0))) && ((((*l_337) == p_12) , &g_72[2]) != (void*)0)) , &g_523[0]) == l_524[3]) , l_526) && l_526)) >= (*l_264)))) , (void*)0) == (void*)0))
        {
            p_12 = (void*)0;

            ;
        }
        else
        {
            int l_528[7];
            unsigned char l_533 = 247UL;
            int i;
            for (i = 0; i < 7; i++)
                l_528[i] = (-9L);
            l_528[5] = (((((l_528[2] != (-5L)) != 0x07L) , (safe_mod_func_uint32_t_u_u((((*l_519) = (safe_lshift_func_uint16_t_u_u((*l_264), 2))) > 0x5233L), l_533))) || (((void*)0 == l_534) < l_526)) & l_533);
        }

        ;
        ;

    }

    ;


    return &g_74;



}







static int * func_13(int ** p_14, short p_15)
{
    int *l_219 = &g_83[5];
    for (g_179 = 0; (g_179 <= 2); g_179 += 1)
    {
        unsigned char *l_217 = (void*)0;
        unsigned char **l_216 = &l_217;
        unsigned char ***l_218 = &l_216;
        int l_226 = (-5L);
        int i;
        (*l_218) = l_216;
        if (g_72[g_179])
            continue;
        for (g_181 = 2; (g_181 <= 7); g_181 += 1)
        {
            int l_224 = 0x6CF95053L;
            int i;
            for (g_81 = 0; (g_81 <= 7); g_81 += 1)
            {
                short *l_225[7] = {&g_72[g_179], &g_72[2], &g_72[g_179], &g_72[2], &g_72[g_179], &g_72[2], &g_72[g_179]};
                int i;
                for (p_15 = 0; (p_15 <= 7); p_15 += 1)
                {
                    int i;
                    g_83[(g_179 + 3)] = g_83[(g_179 + 1)];
                    for (g_195 = 4; (g_195 >= 0); g_195 -= 1)
                    {
                        return l_219;


                    }
                }
                g_83[g_179] = ((safe_sub_func_uint16_t_u_u(g_83[g_81], (l_226 = l_224))) > (0x79L == (safe_add_func_int8_t_s_s((p_15 && (safe_rshift_func_uint16_t_u_u((*l_219), 12))), 0x5BL))));
                for (g_52 = 2; (g_52 >= 0); g_52 -= 1)
                {
                    for (l_226 = 5; (l_226 >= 1); l_226 -= 1)
                    {
                        (*l_219) = 0x27DE4A09L;
                        return (*p_14);


                    }
                }
                (**p_14) = (*l_219);
            }
            if (g_83[(g_179 + 4)])
                continue;
            (*l_218) = (*l_218);
        }
        g_83[g_179] = (**p_14);
    }
    return (*p_14);


}







static unsigned char func_21(unsigned char p_22)
{
    unsigned l_215 = 4UL;
    return l_215;
}







static unsigned char func_23(int ** p_24)
{
    char *l_198 = &g_195;
    char *l_200[4][6][9] = {{{&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}}, {{&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}}, {{&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}}, {{&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}, {&g_195, (void*)0, (void*)0, &g_195, (void*)0, &g_195, &g_195, &g_195, (void*)0}}};
    char **l_199 = &l_200[1][5][2];
    int l_203[10][1];
    short *l_204 = (void*)0;
    short *l_205 = &g_72[2];
    unsigned *l_207 = &g_126;
    unsigned **l_206 = &l_207;
    unsigned *l_209[4] = {&g_126, &g_126, &g_126, &g_126};
    unsigned **l_208 = &l_209[2];
    unsigned char l_210 = 248UL;
    unsigned char *l_211 = &l_210;
    unsigned *l_212[2][9] = {{&g_117, &g_117, &g_117, &g_117, &g_117, &g_117, &g_117, &g_117, &g_117}, {&g_117, &g_117, &g_117, &g_117, &g_117, &g_117, &g_117, &g_117, &g_117}};
    int l_213 = 0xCBF38DE2L;
    int *l_214 = &l_213;
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
            l_203[i][j] = 0xDEF5C631L;
    }
    for (g_117 = 0; (g_117 >= 1); ++g_117)
    {
        int *l_194 = &g_83[6];
        (*p_24) = l_194;
        if ((*l_194))
            continue;
        if (g_195)
            continue;
    }
    (**g_16) = (safe_sub_func_int16_t_s_s((((g_126 , l_198) == ((*l_199) = l_198)) < (safe_sub_func_int16_t_s_s(l_203[8][0], ((*l_205) = g_7[3][8][0])))), (((l_213 = (((l_203[8][0] || ((*l_211) = (((l_198 == (((((*l_208) = ((*l_206) = &g_126)) != (void*)0) ^ (**g_16)) , (void*)0)) || l_203[8][0]) ^ l_210))) , 4294967294UL) & l_203[9][0])) ^ 1UL) | 0xB9977A37L)));
    l_214 = &l_203[8][0];

    ;
    return g_181;
}







static int ** func_25(int * p_26)
{
    unsigned char l_189 = 0x6AL;
    int **l_191 = &g_74;
    (*g_16) = func_27(l_189, l_189, (g_190[0] = &p_26));

    ;
    ;

    (**g_16) = ((~g_68) | l_189);
    return l_191;



}







static int * func_27(unsigned p_28, unsigned p_29, int ** p_30)
{
    unsigned char l_171 = 0x3EL;
    int *l_172 = &g_83[5];
    short *l_188 = &g_72[2];
    (*l_172) = l_171;
    for (l_171 = 0; (l_171 <= 52); ++l_171)
    {
        short l_175[4];
        int *l_178 = &g_179;
        int *l_180 = &g_181;
        short *l_182 = &l_175[1];
        short *l_185 = (void*)0;
        short *l_186 = &g_72[0];
        int l_187 = (-10L);
        int i;
        for (i = 0; i < 4; i++)
            l_175[i] = 1L;
        (*p_30) = ((l_175[1] != func_39(((*l_180) = ((*l_178) = (safe_rshift_func_int8_t_s_s(0x9EL, (*l_172))))), (l_175[1] != (((*l_172) , l_182) != ((safe_add_func_int16_t_s_s((l_187 = ((*l_186) = ((g_68 , (g_68 , (((g_17 != g_74) | l_175[2]) < 1L))) == g_8))), p_29)) , l_188))), l_175[1], p_30)) , (*g_16));
        (*p_30) = (*p_30);
    }
    (*g_16) = (*p_30);
    return l_172;


}







static int ** func_32(int * p_33, int p_34, unsigned char p_35)
{
    unsigned short l_65[7] = {0x5CD9L, 0xBD1AL, 0x5CD9L, 0xBD1AL, 0x5CD9L, 0xBD1AL, 0x5CD9L};
    int l_69 = 1L;
    int *l_70 = &g_68;
    short *l_99 = &g_72[2];
    char l_114 = (-7L);
    short l_119 = 0L;
    int i;
    for (g_52 = 0; (g_52 <= 3); g_52 += 1)
    {
        int *l_66 = (void*)0;
        int *l_67[4][5][10] = {{{&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}}, {{&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}}, {{&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}}, {{&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}, {&g_8, (void*)0, (void*)0, (void*)0, (void*)0, &g_8, &g_68, &g_68, &g_8, &g_8}}};
        short *l_71[1];
        int **l_73[5][9][4] = {{{&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}}, {{&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}}, {{&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}}, {{&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}}, {{&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}, {&l_70, &g_17, &l_70, &l_67[3][0][8]}}};
        short l_77 = 0x544DL;
        unsigned l_84 = 4294967291UL;
        int **l_85 = &l_66;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_71[i] = &g_72[2];
    }
    for (l_69 = 3; (l_69 >= 0); l_69 -= 1)
    {
        unsigned l_101 = 0xB9B82EDCL;
        int **l_115 = &g_74;
        unsigned l_118 = 0x069AAEB0L;
        if (l_101)
            break;
        for (p_35 = 0; (p_35 <= 3); p_35 += 1)
        {
            int l_106 = (-2L);
            int **l_113 = &g_74;
            unsigned *l_116 = &g_117;
            (*l_70) = (safe_rshift_func_int16_t_s_s((((p_34 < ((safe_lshift_func_uint8_t_u_s((p_35 == 8L), func_39(l_101, l_106, ((safe_lshift_func_uint16_t_u_s(((l_106 ^ ((*l_116) = func_39((func_39(l_101, p_35, ((*l_99) = (((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(p_35, l_101)), g_72[2])) , 0x44F2EDFFL) , p_35)), l_113) ^ 0UL), l_114, p_35, l_115))) <= g_83[4]), 15)) == (*l_70)), l_115))) <= g_81)) == l_118) & p_35), l_119));
            for (p_34 = 3; (p_34 >= 0); p_34 -= 1)
            {
                return &g_17;


            }
        }
    }
    for (g_68 = (-2); (g_68 <= (-15)); g_68--)
    {
        unsigned short l_129[3][1][8] = {{{65533UL, 0x180AL, 0xF259L, 0x180AL, 65533UL, 0x858FL, 65533UL, 0x180AL}}, {{65533UL, 0x180AL, 0xF259L, 0x180AL, 65533UL, 0x858FL, 65533UL, 0x180AL}}, {{65533UL, 0x180AL, 0xF259L, 0x180AL, 65533UL, 0x858FL, 65533UL, 0x180AL}}};
        short *l_139[3];
        int l_154 = 0x18F196D4L;
        int **l_168 = &g_17;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_139[i] = &g_72[1];
        for (p_35 = 0; (p_35 <= 6); p_35 += 1)
        {
            int l_124[2];
            int *l_164 = (void*)0;
            int *l_165 = &l_124[0];
            int *l_169 = &l_69;
            int **l_170 = &l_70;
            int i;
            for (i = 0; i < 2; i++)
                l_124[i] = 0L;
            for (g_81 = 0; (g_81 <= 3); g_81 += 1)
            {
                unsigned *l_125 = &g_126;
                char *l_138 = &l_114;
                int **l_147 = &g_17;
                int **l_162 = (void*)0;
                int **l_163 = &l_70;
                int i, j, k;
            }
        }
    }
    return &g_17;


}







static int func_39(int p_40, unsigned p_41, short p_42, int ** p_43)
{
    short l_49 = 0L;
    int *l_50 = (void*)0;
    int *l_51[7] = {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52, &g_52};
    unsigned l_60 = 4294967294UL;
    int i;
    if ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((((l_49 <= (l_49 , p_41)) , ((g_52 = 0L) && (safe_mod_func_uint8_t_u_u((g_8 >= (((safe_add_func_uint32_t_u_u(p_42, p_41)) <= (((safe_add_func_uint8_t_u_u(((*p_43) != (p_42 , l_51[1])), 0x9CL)) , g_52) == 255UL)) , g_8)), 8L)))) != 0xAFF6L), p_42)), 10)))
    {
        l_51[1] = l_51[0];
    }
    else
    {
        unsigned l_59 = 0x33C99690L;
        return l_59;
    }
    l_60 = ((p_41 , (*p_43)) != l_50);
    if ((g_52 = p_42))
    {
        int **l_61[3];
        unsigned l_62 = 0xDAA6E977L;
        int i;
        for (i = 0; i < 3; i++)
            l_61[i] = &l_51[6];
        l_50 = (*p_43);


        g_52 = l_62;
    }
    else
    {
        int **l_63 = &l_51[1];
        g_52 = (0L | 0L);
        (*l_63) = (*g_16);


    }



    return p_40;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_81, "g_81", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_630[i][j], "g_630[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
