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



static volatile short g_7 = 0L;
static int g_33[7][8][4] = {{{1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}}, {{1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}}, {{1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}}, {{1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}}, {{1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}}, {{1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}}, {{1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}, {1L, 0x63EC58F5L, 1L, 0x63EC58F5L}}};
static short g_41 = (-8L);
static const short g_64 = 7L;
static unsigned g_73 = 0x9018101BL;
static int g_76 = 0x2A8F302DL;
static unsigned short g_84 = 65535UL;
static short g_85[5][4] = {{(-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L)}};
static char g_98 = 1L;
static char g_100 = 0x7CL;
static int g_103 = 1L;
static unsigned short g_111 = 0xA85EL;
static unsigned short g_118 = 65535UL;
static int *g_144[1] = {&g_76};
static int *g_151 = &g_76;
static volatile char g_192[10] = {0x95L, (-1L), 0L, 0L, (-1L), 0x95L, (-1L), 0L, 0L, (-1L)};
static volatile char *g_191 = &g_192[5];
static volatile char **g_190 = &g_191;
static unsigned char g_243 = 0xC4L;
static short g_251 = 0xD468L;
static unsigned g_283[2][1][6] = {{{4294967290UL, 1UL, 4294967290UL, 1UL, 4294967290UL, 1UL}}, {{4294967290UL, 1UL, 4294967290UL, 1UL, 4294967290UL, 1UL}}};
static unsigned g_285 = 0UL;
static const char *g_306 = &g_100;
static const char **g_305 = &g_306;
static unsigned char g_315 = 0x27L;
static short g_399 = 0L;
static int g_424 = 0x25B35891L;
static short g_437 = 0xCACAL;
static short *g_436 = &g_437;
static unsigned **g_467 = (void*)0;
static volatile unsigned **g_469 = (void*)0;
static unsigned short g_482 = 0x1A76L;
static unsigned g_486 = 4294967294UL;
static short g_597 = 0xF494L;
static const short * const g_638 = (void*)0;
static const short * const *g_637 = &g_638;
static unsigned g_639 = 0x9E05681FL;
static unsigned char *g_667 = &g_243;
static unsigned char **g_666[7] = {&g_667, &g_667, &g_667, &g_667, &g_667, &g_667, &g_667};
static unsigned g_704[4] = {0xB687F3F6L, 0xB687F3F6L, 0xB687F3F6L, 0xB687F3F6L};
static short ** const g_713 = (void*)0;
static short ** const *g_712 = &g_713;
static short *g_733 = (void*)0;
static int **g_772 = &g_144[0];
static int ***g_771 = &g_772;
static unsigned short g_784 = 0x8606L;
static int * volatile g_814 = &g_33[0][7][1];
static char g_854 = 2L;
static char * const g_853 = &g_854;
static char * const *g_852 = &g_853;



static unsigned func_1(void);
static int func_12(unsigned short p_13, short * const p_14);
static unsigned short func_15(short * p_16, unsigned short p_17, unsigned short p_18);
static int func_19(int p_20, short * p_21, short * p_22, unsigned short p_23, short * p_24);
static short * func_25(int p_26);
static unsigned char func_34(short * p_35, unsigned char p_36, short * p_37, int p_38, unsigned char p_39);
static unsigned char func_42(const unsigned p_43, unsigned p_44, int p_45);
static unsigned func_46(short * p_47);
static short * func_48(short * const p_49, unsigned p_50);
static short * const func_51(short * p_52, const int p_53, short * p_54, unsigned short p_55, short * p_56);
static unsigned func_1(void)
{
    short l_4 = 0x256AL;
    short *l_10[4] = {&l_4, (void*)0, &l_4, (void*)0};
    int l_11 = 7L;
    short *l_438 = (void*)0;
    int *l_828 = &g_33[5][6][2];
    int l_829 = 0xA1371073L;
    unsigned ***l_835 = (void*)0;
    int i;
    if ((((safe_rshift_func_int8_t_s_u(l_4, (safe_add_func_uint32_t_u_u(g_7, (safe_lshift_func_int16_t_s_u((l_11 = 0x1AC4L), 11)))))) == (7L | func_12(func_15(&l_4, (((-10L) != func_19(l_4, func_25((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(g_33[5][6][2], g_33[6][0][0])) == g_33[1][7][3]), 5)) == 253UL), g_33[5][6][2]))), g_436, l_4, l_438)) != l_4), l_4), &g_597))) > l_4))
    {
        const unsigned char l_813 = 0xBEL;
        g_467 = (void*)0;
        (*g_814) = l_813;
    }
    else
    {
        short l_815 = 0L;
        l_815 = (g_98 < g_283[1][0][2]);
    }
lbl_832:
    l_829 = ((*l_828) = (safe_mod_func_int8_t_s_s(0x99L, (l_11 = ((0UL | 3UL) | (safe_mod_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((-1L), 0xEDL)) >= ((safe_add_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(((*g_436) |= l_4), l_11)) & (safe_add_func_int32_t_s_s(((l_11 < (((((((*g_772) != (void*)0) || l_4) <= 0xEA8CD982L) == 0xE5B8L) && l_4) | (-3L))) || l_11), 0xE31AED64L))) > l_4), 0xA68CC9C6L)) & (*g_191))), l_11)))))));
    for (g_784 = 0; (g_784 >= 36); g_784 = safe_add_func_uint32_t_u_u(g_784, 9))
    {
        unsigned ***l_836 = &g_467;
        const unsigned *l_839 = &g_283[0][0][2];
        const unsigned **l_838 = &l_839;
        const unsigned ***l_837 = &l_838;
        const unsigned ****l_840 = &l_837;
        int l_841 = 0x6E0ABF43L;
        unsigned short *l_846 = (void*)0;
        unsigned short *l_847 = (void*)0;
        char *l_851 = &g_100;
        char * const *l_850 = &l_851;
        if (l_4)
            goto lbl_832;
        l_11 |= (l_829 = (safe_mod_func_int32_t_s_s(((l_836 = l_835) == ((*l_840) = l_837)), (((l_841 != (safe_add_func_int16_t_s_s(0xB468L, (g_243 ^ ((*l_828) = (safe_lshift_func_int16_t_s_u(0x0A78L, 8))))))) < (safe_mul_func_uint8_t_u_u((g_469 != (void*)0), ((g_852 = l_850) == &g_306)))) && l_841))));
    }
    return (*l_828);
}







static int func_12(unsigned short p_13, short * const p_14)
{
    (*g_772) = (*g_772);
    return p_13;
}







static unsigned short func_15(short * p_16, unsigned short p_17, unsigned short p_18)
{
    unsigned l_655 = 0x57513BF5L;
    unsigned char *l_658 = &g_315;
    short ***l_659 = (void*)0;
    unsigned short *l_660[4];
    unsigned char l_661 = 0x7CL;
    int l_668 = 1L;
    char *l_681 = &g_98;
    char **l_680 = &l_681;
    char ***l_679 = &l_680;
    char ****l_678 = &l_679;
    unsigned l_714 = 0x3CAB8DE3L;
    unsigned char l_723 = 255UL;
    int *l_737 = &g_33[2][0][2];
    short *l_810 = &g_437;
    int i;
    for (i = 0; i < 4; i++)
        l_660[i] = &g_111;
    (*g_151) = p_17;
lbl_652:
    for (g_111 = 0; (g_111 < 40); ++g_111)
    {
        if (p_17)
            break;
        if (p_17)
            goto lbl_652;
    }
    if (((safe_sub_func_int16_t_s_s(l_655, l_655)) || (((safe_add_func_uint8_t_u_u(((*l_658) = l_655), (&g_637 != l_659))) || (((p_17 = l_655) != 5UL) > l_661)) && 0xFCL)))
    {
        unsigned char **l_665[6] = {&l_658, &l_658, &l_658, &l_658, &l_658, &l_658};
        unsigned char ***l_664[9][4][1] = {{{&l_665[0]}, {&l_665[0]}, {&l_665[0]}, {&l_665[0]}}, {{&l_665[0]}, {&l_665[0]}, {&l_665[0]}, {&l_665[0]}}, {{&l_665[0]}, {&l_665[0]}, {&l_665[0]}, {&l_665[0]}}, {{&l_665[0]}, {&l_665[0]}, {&l_665[0]}, {&l_665[0]}}, {{&l_665[0]}, {&l_665[0]}, {&l_665[0]}, {&l_665[0]}}, {{&l_665[0]}, {&l_665[0]}, {&l_665[0]}, {&l_665[0]}}, {{&l_665[0]}, {&l_665[0]}, {&l_665[0]}, {&l_665[0]}}, {{&l_665[0]}, {&l_665[0]}, {&l_665[0]}, {&l_665[0]}}, {{&l_665[0]}, {&l_665[0]}, {&l_665[0]}, {&l_665[0]}}};
        int l_689 = (-1L);
        int l_690 = (-10L);
        short *l_691 = &g_399;
        int **l_705 = (void*)0;
        short **l_711 = &g_436;
        short ** const *l_710[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_710[i] = &l_711;
        l_668 ^= (safe_mul_func_uint16_t_u_u(((g_666[2] = (void*)0) != &l_658), (*p_16)));
        for (g_437 = 0; (g_437 <= (-24)); g_437 = safe_sub_func_int32_t_s_s(g_437, 6))
        {
            char ****l_682 = &l_679;
            int * const l_695 = (void*)0;
            short **l_708 = &g_436;
            short ***l_707[1];
            int i;
            for (i = 0; i < 1; i++)
                l_707[i] = &l_708;
            for (g_399 = 0; (g_399 <= 0); g_399 += 1)
            {
                char *l_677 = (void*)0;
                char **l_676 = &l_677;
                char ***l_675[10] = {&l_676, &l_676, (void*)0, &l_676, &l_676, (void*)0, &l_676, &l_676, (void*)0, &l_676};
                char ****l_674[8];
                char *****l_673[4][10] = {{&l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[6]}, {&l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[6]}, {&l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[6]}, {&l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[0], &l_674[6]}};
                short l_692 = 1L;
                int *l_693 = &g_33[4][4][0];
                int **l_694 = &l_693;
                unsigned short l_719 = 0x51E3L;
                short *l_734 = &l_692;
                int i, j;
                for (i = 0; i < 8; i++)
                    l_674[i] = &l_675[6];
                (*l_693) &= (safe_mod_func_int8_t_s_s((((l_678 = (void*)0) == l_682) ^ ((safe_mul_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(func_19((safe_add_func_uint16_t_u_u(p_17, (l_690 &= l_689))), &g_41, &g_399, g_283[0][0][3], &g_41), l_661)) > 0x37C4C76BL), (-4L))) && 0L)), (*g_667)));
                (*l_694) = &g_33[4][1][2];
                if ((*g_151))
                {
                    int ***l_706 = &l_694;
                    short ***l_709 = &l_708;
                    unsigned *l_722 = &g_285;
                    unsigned ** const l_721 = &l_722;
                    if (p_17)
                    {
                        int **l_696[3];
                        int **l_697[8] = {&g_151, &g_151, &g_151, &g_151, &g_151, &g_151, &g_151, &g_151};
                        int **l_698 = &l_693;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_696[i] = &g_151;
                        if (p_17)
                            break;
                        (*l_698) = l_695;
                        (*g_151) &= l_661;
                    }
                    else
                    {
                        return g_76;
                    }
                    if ((safe_unary_minus_func_uint8_t_u(((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_100 = g_704[0]), (((g_64 == ((p_17 & (((*l_706) = l_705) == &g_144[0])) || ((((l_709 = l_707[0]) != (g_712 = l_710[2])) || g_399) >= 0UL))) || p_17) ^ l_661))), l_714)) > 0x46L))))
                    {
                        unsigned l_715[6] = {0x86F7818BL, 4294967294UL, 0x86F7818BL, 4294967294UL, 0x86F7818BL, 4294967294UL};
                        int **l_716[9][5][3] = {{{&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}}, {{&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}}, {{&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}}, {{&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}}, {{&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}}, {{&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}}, {{&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}}, {{&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}}, {{&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}, {&g_144[0], &g_144[0], &g_151}}};
                        int i, j, k;
                        (*g_151) = l_715[2];
                        g_151 = &g_103;
                        (*g_151) = (p_18 >= ((safe_add_func_uint32_t_u_u(l_719, ((safe_unary_minus_func_int32_t_s((l_721 == g_467))) > g_64))) <= (*g_306)));
                    }
                    else
                    {
                        l_723 &= (g_285 >= g_84);
                        if (p_17)
                            continue;
                        return g_482;
                    }
                }
                else
                {
                    for (l_655 = 0; (l_655 <= 0); l_655 += 1)
                    {
                        (*g_151) = ((void*)0 == &p_16);
                    }
                    if ((*g_151))
                        continue;
                    for (l_655 = 0; (l_655 <= 0); l_655 += 1)
                    {
                        unsigned char l_726 = 0x4FL;
                        int l_735 = 6L;
                        l_735 |= ((**g_305) ^ ((*l_681) = ((safe_add_func_int16_t_s_s(func_19(l_726, &l_692, p_16, (p_17 & (safe_mod_func_int8_t_s_s((*g_306), (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((p_17 != (*l_693)), 13)), g_315))))), l_734), l_726)) || 65533UL)));
                    }
                    for (g_639 = 0; (g_639 <= 3); g_639 += 1)
                    {
                        return g_597;
                    }
                }
                for (l_719 = 0; (l_719 <= 0); l_719 += 1)
                {
                    (*g_151) |= 0L;
                    for (g_315 = 0; (g_315 <= 0); g_315 += 1)
                    {
                        int **l_736[1][4][8] = {{{&l_693, (void*)0, &l_693, &g_144[0], (void*)0, (void*)0, (void*)0, &g_144[0]}, {&l_693, (void*)0, &l_693, &g_144[0], (void*)0, (void*)0, (void*)0, &g_144[0]}, {&l_693, (void*)0, &l_693, &g_144[0], (void*)0, (void*)0, (void*)0, &g_144[0]}, {&l_693, (void*)0, &l_693, &g_144[0], (void*)0, (void*)0, (void*)0, &g_144[0]}}};
                        int i, j, k;
                        (*g_151) ^= p_18;
                        l_737 = (void*)0;
                    }
                    for (l_668 = 0; (l_668 <= 3); l_668 += 1)
                    {
                        int **l_738[1];
                        int **l_739 = &l_693;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_738[i] = &l_737;
                        (*l_739) = l_695;
                    }
                }
            }
            if (p_17)
                continue;
            return p_17;
        }
    }
    else
    {
        short *l_740 = (void*)0;
        int l_755 = (-7L);
        short *l_761 = &g_251;
        short *l_762 = &g_597;
        short *l_763 = &g_399;
        int l_764 = (-1L);
        const char * const *l_809 = &g_306;
        const char * const **l_808 = &l_809;
        short **l_811[4] = {&l_762, &l_762, &l_762, &l_762};
        short **l_812 = &l_761;
        int i;
        (*g_151) = ((*l_737) = (((*p_16) >= l_764) <= l_755));
        if (p_17)
        {
            int **l_770 = &g_151;
            int ** const *l_769 = &l_770;
            l_755 ^= (safe_mul_func_int16_t_s_s((*l_737), (p_17 = (safe_mod_func_uint16_t_u_u((l_769 != g_771), g_486)))));
            (*g_772) = (**l_769);
            (*l_737) ^= (**l_770);
            for (p_17 = 0; (p_17 <= 49); p_17 = safe_add_func_uint16_t_u_u(p_17, 2))
            {
                int l_781 = (-1L);
                int l_785[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_785[i] = 0xF0FE4A00L;
                for (g_243 = 0; (g_243 <= 0); g_243 += 1)
                {
                    int i;
                }
                for (l_781 = 0; (l_781 <= 9); l_781 = safe_add_func_int8_t_s_s(l_781, 9))
                {
                    unsigned short l_795 = 0x3ED5L;
                    short l_796 = 0xA409L;
                    for (g_243 = (-25); (g_243 <= 37); g_243++)
                    {
                        unsigned *l_794 = &g_486;
                        l_795 ^= ((safe_unary_minus_func_int32_t_s((***l_769))) == ((*l_794) = p_17));
                        return p_18;
                    }
                    if ((*g_151))
                        break;
                    if (l_796)
                        break;
                }
                for (g_251 = 0; (g_251 >= (-18)); g_251 = safe_sub_func_int32_t_s_s(g_251, 1))
                {
                    return g_285;
                }
            }
        }
        else
        {
            unsigned l_803 = 4294967291UL;
            short *l_804 = &g_85[2][1];
            unsigned *l_805[8][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
            int i, j;
            l_668 |= ((((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_803, l_764)), 0xE9L)) && l_764) == (((p_18 && ((func_42(func_46(l_804), (l_755 = g_84), (safe_rshift_func_int16_t_s_u((*p_16), 6))) == 0x2FL) | (-3L))) ^ l_764) != 0x587CL)) < l_764);
        }
        (*g_151) = (*l_737);
        (*l_737) = func_46(func_48(((*l_812) = func_51(func_25(p_17), ((l_755 = (l_808 != (void*)0)) & l_764), p_16, l_764, l_810)), l_764));
    }
    return p_18;
}







static int func_19(int p_20, short * p_21, short * p_22, unsigned short p_23, short * p_24)
{
    unsigned short *l_439 = &g_111;
    int l_440[10] = {(-1L), (-1L), 0xB158A97BL, (-1L), (-1L), 0xB158A97BL, (-1L), (-1L), 0xB158A97BL, (-1L)};
    int *l_441 = &g_424;
    short **l_633 = &g_436;
    int i;
    (*l_441) |= ((*g_151) = (l_440[5] ^= (!(((*l_439) = g_98) > g_85[2][3]))));
    l_441 = &p_20;
    for (g_84 = 18; (g_84 <= 45); g_84 = safe_add_func_uint16_t_u_u(g_84, 1))
    {
        unsigned l_453 = 4294967295UL;
        char *l_464 = &g_98;
        char ** const l_463 = &l_464;
        char ** const *l_462 = &l_463;
        const unsigned l_491 = 0x978F3150L;
        unsigned char l_500 = 0x82L;
        int l_521[5] = {1L, 1L, 1L, 1L, 1L};
        short *l_574 = &g_41;
        unsigned ***l_603 = &g_467;
        const short *l_635 = (void*)0;
        const short * const *l_634 = &l_635;
        unsigned short l_645 = 65526UL;
        int i;
        for (g_118 = (-24); (g_118 > 14); g_118 = safe_add_func_int8_t_s_s(g_118, 6))
        {
            return p_23;
        }
    }
    l_441 = &l_440[5];
    return p_20;
}







static short * func_25(int p_26)
{
    short *l_40 = &g_41;
    int l_264 = (-10L);
    unsigned char *l_422[6][7];
    int *l_423 = &g_424;
    char *l_425 = &g_100;
    short l_428[9][1][8] = {{{6L, 5L, 0x16CAL, 0xA5BBL, 0x16CAL, 5L, 6L, 0xBC0EL}}, {{6L, 5L, 0x16CAL, 0xA5BBL, 0x16CAL, 5L, 6L, 0xBC0EL}}, {{6L, 5L, 0x16CAL, 0xA5BBL, 0x16CAL, 5L, 6L, 0xBC0EL}}, {{6L, 5L, 0x16CAL, 0xA5BBL, 0x16CAL, 5L, 6L, 0xBC0EL}}, {{6L, 5L, 0x16CAL, 0xA5BBL, 0x16CAL, 5L, 6L, 0xBC0EL}}, {{6L, 5L, 0x16CAL, 0xA5BBL, 0x16CAL, 5L, 6L, 0xBC0EL}}, {{6L, 5L, 0x16CAL, 0xA5BBL, 0x16CAL, 5L, 6L, 0xBC0EL}}, {{6L, 5L, 0x16CAL, 0xA5BBL, 0x16CAL, 5L, 6L, 0xBC0EL}}, {{6L, 5L, 0x16CAL, 0xA5BBL, 0x16CAL, 5L, 6L, 0xBC0EL}}};
    unsigned char **l_431 = (void*)0;
    unsigned char **l_432 = &l_422[1][2];
    unsigned char *l_433 = &g_315;
    int **l_434[9][5][5] = {{{&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}}, {{&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}}, {{&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}}, {{&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}}, {{&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}}, {{&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}}, {{&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}}, {{&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}}, {{&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}, {&l_423, (void*)0, (void*)0, &l_423, &l_423}}};
    int *l_435[6] = {&g_33[6][0][2], &g_33[5][6][2], &g_33[6][0][2], &g_33[5][6][2], &g_33[6][0][2], &g_33[5][6][2]};
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
            l_422[i][j] = &g_243;
    }
    (*l_423) &= ((l_264 = func_34(l_40, func_42(g_33[6][6][1], func_46(func_48(func_51(&g_41, g_33[5][7][3], l_40, g_33[4][7][3], l_40), g_41)), l_264), l_40, g_33[0][1][1], g_243)) & 0x3DL);
    p_26 ^= ((((*l_425) = (g_118 <= g_103)) ^ (safe_mod_func_int16_t_s_s((*l_423), g_33[5][6][2]))) == (l_428[8][0][2] || (((((safe_lshift_func_uint8_t_u_s(g_118, (*l_423))) ^ g_424) <= ((((*l_432) = l_425) == l_433) & g_64)) > 0x8190L) || (*l_423))));
    l_435[5] = &l_264;
    return &g_41;
}







static unsigned char func_34(short * p_35, unsigned char p_36, short * p_37, int p_38, unsigned char p_39)
{
    int *l_384 = (void*)0;
    short l_395 = 0L;
    int l_396 = (-3L);
    unsigned short * const l_414[4][9] = {{&g_111, &g_84, &g_84, (void*)0, &g_84, &g_111, &g_84, (void*)0, &g_84}, {&g_111, &g_84, &g_84, (void*)0, &g_84, &g_111, &g_84, (void*)0, &g_84}, {&g_111, &g_84, &g_84, (void*)0, &g_84, &g_111, &g_84, (void*)0, &g_84}, {&g_111, &g_84, &g_84, (void*)0, &g_84, &g_111, &g_84, (void*)0, &g_84}};
    int i, j;
    if (p_38)
    {
        int **l_385 = &g_151;
        char l_394 = 0xA3L;
        unsigned l_397[2];
        short *l_398[1];
        int *l_400 = &g_33[2][7][1];
        int i;
        for (i = 0; i < 2; i++)
            l_397[i] = 4294967295UL;
        for (i = 0; i < 1; i++)
            l_398[i] = &g_399;
        (*l_385) = l_384;
        (*l_400) = (0x54L ^ (safe_mod_func_uint32_t_u_u(func_42((p_38 & (g_399 &= func_42(((((-7L) <= (safe_mod_func_int16_t_s_s(((-2L) | (safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_int8_t_s_s(p_38, 7)) && ((0xAB548E30L == p_39) || l_394)) & (p_38 | l_395)) == p_36), 11))), (*p_35)))) <= l_396) >= 0x6BCFL), l_397[1], p_39))), p_36, p_36), l_396)));
        (*g_151) = 0x5533B808L;
        for (p_39 = 0; (p_39 > 42); p_39 = safe_add_func_int16_t_s_s(p_39, 5))
        {
            unsigned short l_403 = 1UL;
            unsigned char *l_415 = &g_315;
            char *l_420 = &g_100;
            char **l_419 = &l_420;
            char ***l_418 = &l_419;
            char ****l_421 = &l_418;
            l_396 &= ((func_42(p_38, g_85[4][1], l_403) < (safe_rshift_func_uint8_t_u_s(((*l_415) |= (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(l_403, (0xCF64L & ((safe_sub_func_int8_t_s_s(p_39, (l_414[3][3] == &g_111))) && g_399)))), (*p_37))), 0x7EFCL))), (**g_305)))) != 0UL);
            (*g_151) &= (safe_add_func_uint32_t_u_u(l_403, (((*p_37) = ((g_111 &= 65530UL) < 0x38EBL)) | (((*l_421) = l_418) != &l_419))));
        }
    }
    else
    {
        return p_39;
    }
    return g_315;
}







static unsigned char func_42(const unsigned p_43, unsigned p_44, int p_45)
{
    int l_269 = 1L;
    int * const *l_270 = &g_151;
    int **l_271 = &g_151;
    int ***l_272 = &l_271;
    unsigned *l_273 = &g_73;
    short *l_280 = &g_85[2][3];
    short *l_281 = &g_251;
    unsigned *l_282 = &g_283[0][0][3];
    unsigned *l_284 = &g_285;
    int l_286 = 0xDA26107CL;
    int l_297 = 0xE9A5C54AL;
    unsigned **l_342[8] = {&l_284, &l_273, &l_284, &l_273, &l_284, &l_273, &l_284, &l_273};
    unsigned l_347[4];
    char *l_369 = &g_98;
    int i;
    for (i = 0; i < 4; i++)
        l_347[i] = 0x0120B935L;
    l_286 ^= (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((l_269 | (((l_270 == ((*l_272) = l_271)) > ((*l_273) = p_43)) || ((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(func_46(l_280), (((*l_281) = p_43) && ((((((*l_282) = p_45) <= ((*l_284) = 0x54678E96L)) != g_100) == 4UL) & p_44)))), p_44)), p_43)) ^ p_45))) & l_269), g_98)), p_45));
    (*l_271) = &g_103;
    for (g_98 = 0; (g_98 >= 0); g_98 -= 1)
    {
        unsigned short l_291 = 1UL;
        char *l_292 = (void*)0;
        char *l_293 = &g_100;
        int l_294 = (-1L);
        unsigned short *l_295 = &g_84;
        int l_316 = 0x95C358ABL;
        short l_319 = 1L;
        unsigned **l_340 = &l_282;
    }
    return (**l_271);
}







static unsigned func_46(short * p_47)
{
    int *l_152 = (void*)0;
    char *l_154 = &g_98;
    char * const *l_153 = &l_154;
    char * const **l_155 = (void*)0;
    int l_158 = 0x63A172F1L;
    int *l_168 = &g_103;
    int l_171 = (-1L);
    short *l_197 = &g_85[2][2];
    unsigned l_261 = 0x1D57787EL;
    int *l_262[9] = {&g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76};
    int l_263 = 2L;
    int i;
    g_151 = l_152;
    l_153 = l_153;
    for (g_118 = 0; (g_118 <= 3); g_118 += 1)
    {
        short l_159 = 0xC573L;
        char *l_207 = &g_100;
        int l_240 = 0xF22465FAL;
        for (g_73 = 0; (g_73 <= 0); g_73 += 1)
        {
            int l_160 = 1L;
            int i, j;
            l_158 &= (safe_mul_func_int16_t_s_s(g_85[(g_73 + 4)][(g_73 + 2)], g_64));
            l_160 = l_159;
            return l_160;
        }
    }
    l_263 &= (safe_mul_func_uint16_t_u_u((*l_168), (g_41 || ((*p_47) = (!l_261)))));
    return g_33[6][3][2];
}







static short * func_48(short * const p_49, unsigned p_50)
{
    short l_96 = 0xB033L;
    unsigned l_136[6][5] = {{0x1577CD18L, 4294967289UL, 0xAAF5047EL, 0x2462667CL, 4294967293UL}, {0x1577CD18L, 4294967289UL, 0xAAF5047EL, 0x2462667CL, 4294967293UL}, {0x1577CD18L, 4294967289UL, 0xAAF5047EL, 0x2462667CL, 4294967293UL}, {0x1577CD18L, 4294967289UL, 0xAAF5047EL, 0x2462667CL, 4294967293UL}, {0x1577CD18L, 4294967289UL, 0xAAF5047EL, 0x2462667CL, 4294967293UL}, {0x1577CD18L, 4294967289UL, 0xAAF5047EL, 0x2462667CL, 4294967293UL}};
    const int *l_147[10] = {&g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103};
    const int **l_148 = (void*)0;
    const int **l_149 = &l_147[3];
    int **l_150 = &g_144[0];
    int i, j;
    for (p_50 = 0; (p_50 > 25); p_50 = safe_add_func_uint16_t_u_u(p_50, 9))
    {
        char l_81 = 0x92L;
        unsigned char l_82 = 0x9CL;
        int *l_95 = (void*)0;
        if ((safe_lshift_func_uint16_t_u_s(l_81, l_82)))
        {
            int *l_83 = &g_76;
            int l_116 = (-1L);
            short *l_124 = &l_96;
            (*l_83) |= g_33[5][6][2];
            (*l_83) = l_81;
            if ((g_84 ^ 0xFBB05D09L))
            {
                const int l_88 = 0x24BD9F5BL;
                int l_117 = (-1L);
                for (l_81 = 0; (l_81 <= 3); l_81 += 1)
                {
                    char *l_97 = &g_98;
                    char *l_99 = &g_100;
                    int l_101 = 0x7774CA6AL;
                    int *l_102 = &g_103;
                    int **l_120 = &l_83;
                    int i, j;
                }
            }
            else
            {
                short l_121 = 2L;
                int * const l_143[2][4] = {{&g_103, &g_103, (void*)0, &g_103}, {&g_103, &g_103, (void*)0, &g_103}};
                int i, j;
                (*l_83) = l_121;
                (*l_83) |= (g_73 == g_103);
                for (g_111 = 29; (g_111 < 45); g_111 = safe_add_func_int32_t_s_s(g_111, 6))
                {
                    short *l_125 = &l_121;
                    return &g_41;
                }
                if (p_50)
                {
                    unsigned *l_130 = (void*)0;
                    int l_131[8] = {0x18FFE4DFL, 0x18FFE4DFL, (-1L), 0x18FFE4DFL, 0x18FFE4DFL, (-1L), 0x18FFE4DFL, 0x18FFE4DFL};
                    int i;
                    if ((((safe_lshift_func_uint8_t_u_s((l_131[5] = (safe_mul_func_uint16_t_u_u(65529UL, ((g_111 && (g_73 |= p_50)) || 0xE5L)))), g_84)) == p_50) & l_96))
                    {
                        (*l_83) = 0x2C85E55DL;
                    }
                    else
                    {
                        char *l_134[3];
                        char **l_133[7][1][1];
                        char ***l_132 = &l_133[6][0][0];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_134[i] = (void*)0;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_133[i][j][k] = &l_134[1];
                            }
                        }
                        (*l_132) = (void*)0;
                        (*l_83) ^= 0xC377822EL;
                    }
                }
                else
                {
                    short l_135 = 0L;
                    (*l_83) = l_135;
                    if (l_136[0][2])
                        break;
                    (*l_83) = (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(0x0D49L, (p_50 <= (safe_rshift_func_int16_t_s_s(g_64, (~2L)))))) == g_33[5][6][2]), 6));
                    for (l_81 = 3; (l_81 >= 0); l_81 -= 1)
                    {
                        int i, j;
                        g_144[0] = l_143[0][3];
                        g_144[0] = &g_33[5][6][2];
                        (*l_83) = l_136[l_81][(l_81 + 1)];
                    }
                }
            }
            l_116 = ((*l_83) = (+p_50));
        }
        else
        {
            int *l_145 = &g_76;
            int **l_146[5];
            int i;
            for (i = 0; i < 5; i++)
                l_146[i] = &l_145;
            (*l_145) |= (p_50 && ((*p_49) = l_136[5][3]));
            l_95 = l_95;
            (*l_145) = (-5L);
        }
        if (l_96)
            break;
    }
    (*l_149) = l_147[3];
    g_151 = ((*l_150) = &g_33[5][6][2]);
    return &g_85[3][3];
}







static short * const func_51(short * p_52, const int p_53, short * p_54, unsigned short p_55, short * p_56)
{
    int l_59 = 1L;
    const short *l_63 = &g_64;
    unsigned short l_65[3];
    int i;
    for (i = 0; i < 3; i++)
        l_65[i] = 0x82FCL;
    if ((safe_mul_func_int8_t_s_s((l_59 != ((safe_unary_minus_func_int16_t_s(0x3814L)) | (safe_lshift_func_int8_t_s_u(g_33[5][6][2], 1)))), (+(p_55 > (&g_41 == (l_63 = p_54)))))))
    {
        short * const l_70 = &g_41;
        int l_71 = (-1L);
        int *l_72[5][8][6] = {{{&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}}, {{&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}}, {{&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}}, {{&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}}, {{&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}, {&g_33[5][6][2], &l_71, &g_33[5][6][2], &l_71, &g_33[5][6][2], &g_33[6][3][3]}}};
        int i, j, k;
        if (l_65[1])
        {
            for (p_55 = 4; (p_55 >= 36); p_55 = safe_add_func_uint8_t_u_u(p_55, 2))
            {
                return p_52;
            }
            for (p_55 = 0; p_55 < 3; p_55 += 1)
            {
                l_65[p_55] = 0xF980L;
            }
        }
        else
        {
            int *l_69 = &g_33[2][1][1];
            int **l_68 = &l_69;
            (*l_68) = (void*)0;
            return l_70;
        }
        g_73 &= (l_71 ^ g_41);
    }
    else
    {
        int l_74 = 0xDC0AC77AL;
        int *l_75 = &g_76;
        (*l_75) = l_74;
    }
    return &g_41;
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
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_33[i][j][k], "g_33[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_85[i][j], "g_85[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_192[i], "g_192[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_283[i][j][k], "g_283[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_486, "g_486", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_704[i], "g_704[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_784, "g_784", print_hash_value);
    transparent_crc(g_854, "g_854", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
