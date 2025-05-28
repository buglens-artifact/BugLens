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



static char g_4[10] = {0x02L, 0x32L, 0x02L, 0x32L, 0x02L, 0x32L, 0x02L, 0x32L, 0x02L, 0x32L};
static unsigned g_7 = 0xB733C633L;
static unsigned g_28 = 0UL;
static unsigned *g_27 = &g_28;
static int g_73 = 8L;
static int *g_81 = &g_73;
static unsigned short g_93[4][2][2] = {{{0x83D7L, 0x83D7L}, {0x83D7L, 0x83D7L}}, {{0x83D7L, 0x83D7L}, {0x83D7L, 0x83D7L}}, {{0x83D7L, 0x83D7L}, {0x83D7L, 0x83D7L}}, {{0x83D7L, 0x83D7L}, {0x83D7L, 0x83D7L}}};
static unsigned short g_135 = 0UL;
static unsigned short *g_148 = &g_135;
static int g_154[8] = {(-9L), 0L, (-9L), 0L, (-9L), 0L, (-9L), 0L};
static int *g_153 = &g_154[6];
static char g_189 = (-1L);
static unsigned g_194 = 3UL;
static unsigned g_200[10] = {4294967290UL, 4294967290UL, 7UL, 4294967290UL, 4294967290UL, 7UL, 4294967290UL, 4294967290UL, 7UL, 4294967290UL};
static int g_202[8][4][3] = {{{0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}}, {{0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}}, {{0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}}, {{0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}}, {{0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}}, {{0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}}, {{0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}}, {{0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}, {0x23C1EDEDL, (-1L), 0x23C1EDEDL}}};
static short g_213[2][4][8] = {{{0xA3B9L, 0x3D07L, 0xB82FL, 0L, 0x3D07L, (-10L), 0x3D07L, 0L}, {0xA3B9L, 0x3D07L, 0xB82FL, 0L, 0x3D07L, (-10L), 0x3D07L, 0L}, {0xA3B9L, 0x3D07L, 0xB82FL, 0L, 0x3D07L, (-10L), 0x3D07L, 0L}, {0xA3B9L, 0x3D07L, 0xB82FL, 0L, 0x3D07L, (-10L), 0x3D07L, 0L}}, {{0xA3B9L, 0x3D07L, 0xB82FL, 0L, 0x3D07L, (-10L), 0x3D07L, 0L}, {0xA3B9L, 0x3D07L, 0xB82FL, 0L, 0x3D07L, (-10L), 0x3D07L, 0L}, {0xA3B9L, 0x3D07L, 0xB82FL, 0L, 0x3D07L, (-10L), 0x3D07L, 0L}, {0xA3B9L, 0x3D07L, 0xB82FL, 0L, 0x3D07L, (-10L), 0x3D07L, 0L}}};
static int **g_249 = &g_81;
static char g_294 = 0L;
static unsigned g_309 = 0xDDF22E6CL;
static short *g_348 = (void*)0;
static short **g_347 = &g_348;
static short ***g_346 = &g_347;
static unsigned char g_378[3][10] = {{254UL, 1UL, 0xCCL, 1UL, 254UL, 0xF8L, 254UL, 1UL, 0xCCL, 1UL}, {254UL, 1UL, 0xCCL, 1UL, 254UL, 0xF8L, 254UL, 1UL, 0xCCL, 1UL}, {254UL, 1UL, 0xCCL, 1UL, 254UL, 0xF8L, 254UL, 1UL, 0xCCL, 1UL}};
static unsigned char *g_377 = &g_378[1][7];
static int ***g_414 = (void*)0;
static unsigned short g_419 = 0x3DEBL;
static short g_449 = 1L;
static unsigned g_462 = 4294967292UL;
static unsigned *g_461 = &g_462;
static char **g_499 = (void*)0;
static unsigned char g_567 = 254UL;
static int g_571 = 0x6CCB5C9EL;
static unsigned **g_594 = (void*)0;
static int *g_614 = &g_73;
static int *g_619 = &g_202[5][1][2];
static int **g_618 = &g_619;
static int g_895 = (-8L);
static unsigned short **g_917 = &g_148;
static unsigned short ***g_916 = &g_917;
static unsigned char **g_957 = &g_377;
static unsigned char ***g_956 = &g_957;



static int func_1(void);
static unsigned func_8(unsigned * p_9, unsigned short p_10);
static unsigned * func_11(unsigned p_12, short p_13, unsigned p_14);
static unsigned func_15(char p_16, int p_17);
static unsigned short func_23(unsigned * p_24, char p_25, unsigned * p_26);
static int * func_33(unsigned short p_34);
static unsigned char func_41(char p_42, unsigned p_43, short p_44, int * p_45, unsigned * p_46);
static unsigned char func_48(int p_49, unsigned char p_50, short p_51, unsigned char p_52, unsigned * p_53);
static int func_54(char p_55, unsigned char p_56, unsigned char p_57);
static unsigned func_60(unsigned short p_61, unsigned p_62, unsigned short p_63);
static int func_1(void)
{
    unsigned *l_5 = (void*)0;
    unsigned *l_6 = &g_7;
    int l_18 = (-1L);
    char *l_978 = &g_189;
    int l_979 = (-5L);
    unsigned *l_980 = &g_28;
    int *l_1094[5] = {&l_979, (void*)0, &l_979, (void*)0, &l_979};
    unsigned l_1098 = 0x3D7311E9L;
    int **l_1110 = &g_619;
    int i;
    g_154[2] = (g_4[3] <= (((*l_6) = g_4[5]) < func_8(func_11((~func_15(g_4[3], l_18)), ((-1L) >= func_23(l_5, (l_979 = ((*l_978) = (safe_div_func_int16_t_s_s(func_48(((**g_618) = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_18, l_18)), l_18))), l_18, l_18, (**g_957), l_6), 65529UL)))), l_980)), (*g_461)), (***g_916))));


    ;
    for (g_449 = 0; (g_449 <= 2); g_449 += 1)
    {
        unsigned l_1097 = 0UL;
        int *l_1100 = &g_154[6];
        if ((*g_153))
            break;
        (*g_153) = (safe_rshift_func_uint16_t_u_u((*g_148), (+(*g_148))));
        l_1098 = l_1097;
        if ((*g_614))
        {
            short l_1099 = 0x7A16L;
            (*g_249) = func_11(g_567, l_1099, ((*l_980) = ((**g_957) , l_1099)));

            ;
        }
        else
        {
            short l_1101 = 2L;
            int **l_1111 = &g_619;
            int l_1112 = 0xD3687036L;
            unsigned short l_1115 = 65535UL;
            for (g_7 = 0; (g_7 <= 2); g_7 += 1)
            {
                int i, j;
                (*g_249) = (g_378[g_7][g_449] , &g_73);

                ;
                for (g_73 = 2; (g_73 >= 0); g_73 -= 1)
                {
                    return (*g_619);
                }
            }
            for (l_1097 = 0; (l_1097 <= 1); l_1097 += 1)
            {
                int l_1113 = 0x1D25AB51L;
                int l_1114 = 0x619B6B68L;
                int i, j;
                if (g_378[g_449][(l_1097 + 5)])
                {
                    int i;
                    (*g_153) = 0L;
                    (*g_614) = g_378[g_449][(l_1097 + 5)];
                }
                else
                {
                    (*g_249) = l_1100;

                    ;
                    return l_1101;
                }
                (*l_1100) = (safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(9L, 7)), (l_1112 = (g_378[g_449][(l_1097 + 8)] = ((l_1110 = l_1110) == (g_618 = l_1111)))))), l_1113)) == ((l_1114 = l_1113) | (l_1115 || l_1101))), (*g_148)));
                for (l_1101 = 0; (l_1101 <= 1); l_1101 += 1)
                {
                    int i, j, k;
                    return g_93[(l_1101 + 2)][l_1101][l_1097];
                }
            }
        }
        for (g_28 = 0; (g_28 <= 2); g_28 += 1)
        {
            int i, j;
            (*g_249) = (l_1094[0] = func_11(g_378[g_28][(g_28 + 4)], (*l_1100), (*g_27)));

            ;
        }
    }


    return (**g_618);
}







static unsigned func_8(unsigned * p_9, unsigned short p_10)
{
    int l_984 = 1L;
    unsigned l_988 = 0x8C30AD48L;
    short *l_1065 = &g_449;
    char ***l_1069 = (void*)0;
    l_984 = 0L;
    for (g_194 = 3; (g_194 <= 9); g_194 += 1)
    {
        int *l_985 = &g_73;
        char l_1004 = 1L;
        unsigned short l_1019[10];
        unsigned l_1021 = 0UL;
        unsigned l_1059 = 0xFA7A895EL;
        unsigned l_1070[2][1][6] = {{{0x55B9547AL, 0UL, 4294967294UL, 0UL, 0x55B9547AL, 2UL}}, {{0x55B9547AL, 0UL, 4294967294UL, 0UL, 0x55B9547AL, 2UL}}};
        unsigned *l_1089 = (void*)0;
        int **l_1093 = &g_614;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_1019[i] = 0xB2CCL;
        for (g_135 = 0; (g_135 <= 9); g_135 += 1)
        {
            unsigned short l_1003 = 65526UL;
            unsigned char l_1020 = 0xD8L;
            unsigned *l_1038[5][8] = {{&g_28, &g_462, (void*)0, (void*)0, (void*)0, (void*)0, &g_462, &g_28}, {&g_28, &g_462, (void*)0, (void*)0, (void*)0, (void*)0, &g_462, &g_28}, {&g_28, &g_462, (void*)0, (void*)0, (void*)0, (void*)0, &g_462, &g_28}, {&g_28, &g_462, (void*)0, (void*)0, (void*)0, (void*)0, &g_462, &g_28}, {&g_28, &g_462, (void*)0, (void*)0, (void*)0, (void*)0, &g_462, &g_28}};
            int l_1041 = 0xE7BA85EBL;
            int i, j;
            (*g_153) = l_984;
            (*g_249) = l_985;

            ;
            for (g_571 = 8; (g_571 >= 0); g_571 -= 1)
            {
                int l_995 = 0L;
                int l_1002 = 0xDA90BC4AL;
                char *l_1026[3];
                unsigned ***l_1030 = (void*)0;
                unsigned ****l_1029[1][10] = {{&l_1030, &l_1030, &l_1030, &l_1030, &l_1030, &l_1030, &l_1030, &l_1030, &l_1030, &l_1030}};
                unsigned l_1055 = 1UL;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1026[i] = &g_189;
                if ((7UL == (((safe_mod_func_int16_t_s_s(l_988, (safe_sub_func_uint8_t_u_u((*g_377), p_10)))) , ((safe_div_func_int32_t_s_s(((*g_461) , (*g_614)), ((safe_rshift_func_int8_t_s_u((l_995 == ((!((safe_rshift_func_uint16_t_u_s((!(((safe_div_func_uint32_t_u_u((((**g_957) = (safe_lshift_func_uint16_t_u_s((l_1002 , (0x84B8L || l_988)), l_995))) , (*l_985)), 8UL)) ^ l_995) && p_10)), 5)) <= p_10)) != p_10)), 4)) , (*g_153)))) <= p_10)) < 0xED80L)))
                {
                    unsigned char l_1017 = 255UL;
                    if (l_984)
                        break;
                    for (g_189 = 0; g_189 < 2; g_189 += 1)
                    {
                        for (p_10 = 0; p_10 < 4; p_10 += 1)
                        {
                            for (g_449 = 0; g_449 < 8; g_449 += 1)
                            {
                                g_213[g_189][p_10][g_449] = 0x0D52L;
                            }
                        }
                    }
                    if (((+(l_1003 <= (*g_377))) | 0xF1L))
                    {
                        return l_1004;
                    }
                    else
                    {
                        unsigned char l_1016 = 0x57L;
                        short *l_1018 = &g_213[1][2][3];
                        (*g_614) = ((((g_202[5][1][2] , func_23((func_54(((***g_956) >= l_1020), l_1020, (*l_985)) , l_985), l_1002, p_9)) > (**g_917)) , p_10) | l_1021);


                    }


                }
                else
                {
                    if ((*l_985))
                        break;
                    (*g_249) = &l_995;

                    ;
                }


                if ((safe_add_func_int16_t_s_s(p_10, ((safe_mod_func_uint32_t_u_u((0x9910L || (*g_148)), func_54((l_995 = (*l_985)), (((((safe_div_func_int8_t_s_s(0xCDL, p_10)) | (((l_1029[0][4] != ((l_984 == (+(g_213[1][1][1] = p_10))) , (void*)0)) == l_984) , (*g_148))) || (-9L)) > (*g_377)) == (***g_916)), (**g_957)))) && l_995))))
                {
                    short *l_1035 = &g_213[1][0][6];
                    l_984 = (safe_lshift_func_uint8_t_u_u(((((*g_614) = 1L) != (safe_sub_func_int8_t_s_s((func_48(l_995, ((***g_956) = (p_10 & (**g_957))), ((*l_1035) = l_1020), (safe_div_func_uint32_t_u_u((p_10 ^ l_1003), p_10)), l_1038[2][4]) && (*g_461)), p_10))) == l_984), 4));
                    for (g_294 = 3; (g_294 <= 9); g_294 += 1)
                    {
                        (*l_985) = (l_1020 & 0x2DL);
                        (*g_614) = ((l_995 = (*l_985)) , (l_1003 == (0x20AAE486L == 0xF30B0C9BL)));
                        (*g_249) = p_9;

                        ;
                    }


                }
                else
                {
                    unsigned char l_1042 = 254UL;
                    short *l_1064 = &g_213[0][1][6];
                    int l_1066 = 0xBAF97768L;
                    l_1042 = l_1041;
                    (*g_249) = p_9;

                    ;
                    for (g_895 = 0; (g_895 <= 2); g_895 += 1)
                    {
                        int ****l_1044 = &g_414;
                        int *****l_1043 = &l_1044;
                        unsigned short *l_1051 = (void*)0;
                        unsigned short *l_1052 = &l_1019[1];
                        short *l_1056 = (void*)0;
                        short *l_1057 = &g_213[0][3][2];
                        unsigned short l_1058 = 65531UL;
                        int i, j, k;
                        g_154[(g_895 + 3)] = g_378[g_895][(g_895 + 7)];
                        l_1041 = func_54(g_202[(g_895 + 3)][(g_895 + 1)][g_895], (((*l_1043) = &g_414) != (void*)0), (safe_lshift_func_uint8_t_u_s((((1UL & ((((((+(safe_rshift_func_uint16_t_u_u(func_60(g_202[(g_895 + 4)][(g_895 + 1)][g_895], (safe_rshift_func_uint16_t_u_s(((*l_1052) = g_202[g_895][g_895][g_895]), ((*l_1057) = (g_154[(g_895 + 5)] | (safe_mul_func_int16_t_s_s(2L, (func_60(((p_10 , (*l_985)) , 0x6680L), l_1055, (*l_985)) != 4294967294UL))))))), (**g_917)), l_1042))) , 0x8AL) ^ 0L) & 0x59BCL) | 249UL) > p_10)) & l_1058) == (*g_614)), 5)));


                        (*g_614) = ((*g_461) >= func_54((g_294 = (l_995 = (p_10 > ((l_1066 = (safe_sub_func_int32_t_s_s(func_54(l_1002, g_202[(g_895 + 3)][(g_895 + 1)][g_895], p_10), (safe_div_func_int32_t_s_s((l_1064 == l_1065), 0x1F3F9761L))))) != p_10)))), p_10, (***g_956)));
                        if (p_10)
                            break;
                    }


                }


                for (l_1021 = 0; (l_1021 <= 7); l_1021 += 1)
                {
                    int i;
                    if (g_154[l_1021])
                    {
                        (*g_153) = 0x89A1C2AEL;
                        return (*g_27);
                    }
                    else
                    {
                        return (*g_27);
                    }
                }
            }


        }
        if ((0x49552F71L > ((*g_153) > (((safe_lshift_func_int8_t_s_s((((void*)0 == l_1069) || (+(*l_985))), 0)) ^ l_1070[0][0][1]) != (safe_mod_func_uint8_t_u_u((*g_377), (l_984 = ((*g_377) && ((*g_27) , 0x8EL)))))))))
        {
            if ((*l_985))
                break;
        }
        else
        {
            unsigned l_1073 = 4294967295UL;
            int l_1092[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1092[i] = (-10L);
            (*g_153) = ((l_1073 , 0x3368L) || (((*l_985) , (((*l_985) = (((***g_916) = (0x07L != 1L)) && p_10)) == ((safe_rshift_func_int8_t_s_s(3L, 7)) , p_10))) && 1UL));
            for (l_984 = 0; (l_984 <= 9); l_984 += 1)
            {
                unsigned l_1076 = 1UL;
                unsigned *l_1078[3][6] = {{&g_200[8], &g_200[6], &g_200[8], &g_200[6], &g_200[8], &g_200[6]}, {&g_200[8], &g_200[6], &g_200[8], &g_200[6], &g_200[8], &g_200[6]}, {&g_200[8], &g_200[6], &g_200[8], &g_200[6], &g_200[8], &g_200[6]}};
                unsigned **l_1077[2];
                unsigned ***l_1079 = &l_1077[1];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1077[i] = &l_1078[2][5];
                for (g_567 = 0; g_567 < 10; g_567 += 1)
                {
                    l_1019[g_567] = 4UL;
                }
                (*g_153) = 5L;
                if (l_1076)
                    continue;
                (*l_1079) = l_1077[1];
            }
            if ((*l_985))
            {
                unsigned l_1088 = 1UL;
                char *l_1091 = &g_4[3];
                char **l_1090 = &l_1091;
                (*l_985) = (safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s((func_48((*g_619), (((*l_985) = (((***g_916) , (l_988 , ((*g_27) <= (safe_sub_func_int32_t_s_s(((l_1092[0] = (((((safe_sub_func_int32_t_s_s(l_1088, (l_1088 == ((~(g_499 == (func_60(func_23(&l_1073, ((void*)0 == &g_4[3]), l_1089), l_988, p_10) , l_1090))) <= (***g_916))))) ^ 255UL) <= p_10) , (*g_27)) > (*g_27))) < 7L), p_10))))) || p_10)) && p_10), p_10, (**g_957), &l_1088) != 0x31E8L), (***g_956))), (-1L)));
            }
            else
            {
                if (p_10)
                    break;
            }
            if ((*g_614))
                continue;
        }
        (*l_1093) = ((*g_249) = &g_154[6]);

        ;
        ;
    }


    ;
    (*g_249) = p_9;

    ;
    return l_984;
}







static unsigned * func_11(unsigned p_12, short p_13, unsigned p_14)
{
    int *l_981 = (void*)0;
    (*g_153) = p_13;
    (*g_249) = l_981;

    ;
    for (g_194 = 28; (g_194 < 53); g_194 = safe_add_func_int32_t_s_s(g_194, 1))
    {
        return &g_28;


    }
    return l_981;


}







static unsigned func_15(char p_16, int p_17)
{
    unsigned l_29 = 0x3CC47D1AL;
    unsigned *l_30 = &g_28;
    int l_971 = 4L;
    l_971 = (safe_lshift_func_uint8_t_u_s(((p_17 = ((*g_81) = (safe_sub_func_uint16_t_u_u(func_23(g_27, l_29, l_30), (l_29 <= (safe_sub_func_uint16_t_u_u(p_16, l_29))))))) || ((~4UL) != l_29)), p_16));
    return p_17;
}







static unsigned short func_23(unsigned * p_24, char p_25, unsigned * p_26)
{
    int l_799 = 5L;
    unsigned char l_843[6];
    int *l_852 = &g_73;
    unsigned char **l_863 = (void*)0;
    unsigned char ***l_862 = &l_863;
    char l_877 = (-5L);
    unsigned *l_904 = &g_28;
    int ***l_939 = &g_618;
    int i;
    for (i = 0; i < 6; i++)
        l_843[i] = 252UL;
    for (p_25 = 22; (p_25 != (-12)); --p_25)
    {
        int **l_798 = &g_81;
        int *l_805 = &g_202[4][2][2];
        unsigned l_848[8] = {0xE7BD9D46L, 0xC3E30FA9L, 0xE7BD9D46L, 0xC3E30FA9L, 0xE7BD9D46L, 0xC3E30FA9L, 0xE7BD9D46L, 0xC3E30FA9L};
        short l_876 = 0x1C6EL;
        short l_893 = 0x35FBL;
        int l_950[1];
        int i;
        for (i = 0; i < 1; i++)
            l_950[i] = 0x5396AF91L;
    }
    return p_25;
}







static int * func_33(unsigned short p_34)
{
    int l_47[1][10];
    int l_66 = 0x688D239BL;
    int l_67[7][10][3] = {{{(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}}, {{(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}}, {{(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}}, {{(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}}, {{(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}}, {{(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}}, {{(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}, {(-1L), 0xF05746ACL, 0x8B5A47B6L}}};
    unsigned *l_260[1][1];
    short ***l_792[7][8][4] = {{{(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}}, {{(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}}, {{(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}}, {{(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}}, {{(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}}, {{(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}}, {{(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}, {(void*)0, &g_347, &g_347, &g_347}}};
    int *l_796 = &g_73;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
            l_47[i][j] = 0xAD901516L;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_260[i][j] = (void*)0;
    }
    if ((safe_div_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(p_34, 4)) <= func_41(l_47[0][2], (func_48(func_54(((safe_mod_func_uint8_t_u_u((func_60(((l_67[0][4][2] = (safe_add_func_uint16_t_u_u((l_66 = l_47[0][2]), (g_28 , (p_34 || g_4[3]))))) | p_34), (+p_34), (safe_div_func_uint16_t_u_u(p_34, p_34))) || 0L), 0x05L)) , 7L), g_73, g_73), g_213[0][3][2], p_34, l_47[0][6], l_260[0][0]) || l_47[0][2]), l_47[0][0], l_260[0][0], l_260[0][0])), 0xCA9FL)))
    {
        unsigned short l_783 = 0x94C2L;
        l_66 = l_783;
        return &g_571;


    }
    else
    {
        int *l_786 = (void*)0;
        int l_795 = 0x323593E1L;
        for (g_571 = 0; (g_571 < 11); g_571 = safe_add_func_uint32_t_u_u(g_571, 9))
        {
            int *l_787 = &l_67[0][4][2];
            char l_793 = 0x7DL;
            int l_794 = 1L;
            (*g_249) = l_786;
            (*l_787) = (p_34 , 2L);
            l_67[0][4][2] = (func_48(p_34, ((func_48((func_54(g_449, ((p_34 > func_54(l_47[0][0], (safe_rshift_func_uint8_t_u_u(((l_67[0][4][2] = ((safe_rshift_func_int8_t_s_u(((*l_787) , ((p_34 , (l_792[1][0][1] == ((p_34 , (*l_787)) , (void*)0))) , g_189)), l_793)) , g_194)) == 0x1FD3L), 4)), (*g_377))) & l_794), (*g_377)) == l_795), l_47[0][1], p_34, p_34, l_786) && l_47[0][2]) , 248UL), l_47[0][0], p_34, l_260[0][0]) || p_34);


            (*g_249) = l_796;
        }
    }



    ;

    ;
    ;

    (*l_796) = ((safe_unary_minus_func_int32_t_s((p_34 , (*l_796)))) , 3L);
    return &g_154[3];


}







static unsigned char func_41(char p_42, unsigned p_43, short p_44, int * p_45, unsigned * p_46)
{
    int l_263 = 0L;
    unsigned *l_270 = &g_28;
    short *l_289 = &g_213[1][1][1];
    short **l_288 = &l_289;
    int l_381 = 0L;
    int *l_387[5][10] = {{&g_202[5][1][2], &g_202[5][1][2], &g_202[5][1][2], &g_202[6][0][2], &g_202[5][1][2], &g_202[5][2][1], (void*)0, (void*)0, (void*)0, &g_202[5][2][1]}, {&g_202[5][1][2], &g_202[5][1][2], &g_202[5][1][2], &g_202[6][0][2], &g_202[5][1][2], &g_202[5][2][1], (void*)0, (void*)0, (void*)0, &g_202[5][2][1]}, {&g_202[5][1][2], &g_202[5][1][2], &g_202[5][1][2], &g_202[6][0][2], &g_202[5][1][2], &g_202[5][2][1], (void*)0, (void*)0, (void*)0, &g_202[5][2][1]}, {&g_202[5][1][2], &g_202[5][1][2], &g_202[5][1][2], &g_202[6][0][2], &g_202[5][1][2], &g_202[5][2][1], (void*)0, (void*)0, (void*)0, &g_202[5][2][1]}, {&g_202[5][1][2], &g_202[5][1][2], &g_202[5][1][2], &g_202[6][0][2], &g_202[5][1][2], &g_202[5][2][1], (void*)0, (void*)0, (void*)0, &g_202[5][2][1]}};
    int **l_386 = &l_387[4][3];
    int *l_409 = &g_154[6];
    unsigned **l_410 = (void*)0;
    unsigned *l_422 = &g_194;
    unsigned **l_421 = &l_422;
    unsigned **l_535 = &g_27;
    int l_557 = 0xFEB101B3L;
    short l_606 = 0x7EA3L;
    char **l_634 = (void*)0;
    short l_643[10];
    int l_683[9][6][4] = {{{5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}}, {{5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}}, {{5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}}, {{5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}}, {{5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}}, {{5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}}, {{5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}}, {{5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}}, {{5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}, {5L, 0L, 0x21A85158L, 0x8CADEE23L}}};
    short l_750[6];
    int *l_758 = &g_154[1];
    char *l_767 = &g_294;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_643[i] = 2L;
    for (i = 0; i < 6; i++)
        l_750[i] = 0x47DEL;
    if ((65535UL | (((((safe_add_func_int32_t_s_s((l_263 , (-9L)), func_48(((((0xA680AF3EL ^ ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(0x53L, func_48(g_135, g_189, ((p_43 & 0UL) , g_154[1]), g_213[0][1][5], &g_28))), p_42)) >= (*g_148))) != 0x88L) & 0x57AAL) & 1L), p_42, l_263, p_43, l_270))) >= g_202[5][1][2]) && (*g_27)) , g_4[8]) == g_194)))
    {
        int **l_271[4];
        int ***l_272 = &g_249;
        int *l_283 = (void*)0;
        int *l_284 = &g_202[5][1][2];
        int l_285[5];
        unsigned *l_341 = &g_200[8];
        short ***l_352 = &g_347;
        char l_404[1][10] = {{0L, 0xA0L, (-8L), (-8L), 0xA0L, 0L, 0xA0L, (-8L), (-8L), 0xA0L}};
        int i, j;
        for (i = 0; i < 4; i++)
            l_271[i] = &g_81;
        for (i = 0; i < 5; i++)
            l_285[i] = 0x271A811AL;
        (*g_153) = ((((*l_272) = l_271[0]) != &g_81) & ((*g_148) = func_48((!((*l_284) = (safe_mod_func_uint8_t_u_u(1UL, (((safe_div_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((*g_148), (safe_rshift_func_int8_t_s_s(g_213[0][3][2], 4)))) != (g_93[2][1][1] <= func_60(((safe_sub_func_int16_t_s_s(l_263, (((0x343D5BD6L ^ func_48(((((l_263 & (*g_27)) ^ p_42) | l_263) & 65533UL), l_263, g_93[2][1][1], g_4[8], &g_28)) <= 0xD0L) || 3L))) , p_43), g_154[6], l_263))), (*g_27))) || l_263) , p_42))))), l_285[3], p_43, p_42, l_284)));
        for (g_28 = 0; (g_28 > 9); ++g_28)
        {
            short ***l_290 = &l_288;
            (*l_290) = l_288;
            for (l_263 = (-15); (l_263 <= (-1)); ++l_263)
            {
                unsigned short l_293 = 0xC9EBL;
                for (g_135 = 0; (g_135 <= 1); g_135 += 1)
                {
                    (*g_249) = &g_154[3];

                    ;
                    if (l_293)
                        continue;
                    g_294 = (**g_249);
                    g_153 = ((**l_272) = (*g_249));
                    for (g_73 = 0; (g_73 <= 1); g_73 += 1)
                    {
                        return (***l_272);
                    }
                }
            }
        }
        for (p_44 = 0; (p_44 > (-14)); p_44 = safe_sub_func_int32_t_s_s(p_44, 7))
        {
            short l_297 = 0xA592L;
            (*g_153) = l_297;
        }
        if (p_44)
        {
            char l_312 = 3L;
            for (g_73 = 0; (g_73 <= 12); g_73 = safe_add_func_int32_t_s_s(g_73, 1))
            {
                unsigned char l_304 = 7UL;
                unsigned *l_313 = (void*)0;
                int **l_314 = &g_153;
                l_263 = ((*g_153) = ((((func_48(p_42, g_135, ((+(safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(l_304, 4)), ((p_44 , ((-9L) == (((*g_27) <= (safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((g_309 = g_202[5][1][2]), 0x0CL)), 10))) , (safe_sub_func_uint32_t_u_u((*g_27), 0x68CCA990L))))) , l_312)))) , g_200[8]), p_43, l_313) <= (*g_27)) , &p_42) == &g_294) >= l_312));
                p_45 = &g_154[6];

                ;
                (*l_272) = l_314;

                ;
                p_45 = p_46;

                ;
            }

            ;
            (*g_153) = l_263;
        }
        else
        {
            int l_326 = 0x632D1B4FL;
            int *l_338 = &g_154[6];
            int l_392 = 0L;
            unsigned short ***l_405 = (void*)0;
            unsigned short **l_407[7] = {&g_148, &g_148, (void*)0, &g_148, &g_148, (void*)0, &g_148};
            unsigned short ***l_406 = &l_407[6];
            int i;
            for (g_28 = 0; (g_28 <= 9); g_28 += 1)
            {
                char *l_321 = &g_294;
                int l_325 = 0L;
                unsigned *l_340 = &g_200[8];
                unsigned **l_339[4][3] = {{&l_340, (void*)0, &l_340}, {&l_340, (void*)0, &l_340}, {&l_340, (void*)0, &l_340}, {&l_340, (void*)0, &l_340}};
                short ****l_349 = &g_346;
                short ***l_351[3][8][5] = {{{(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}}, {{(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}}, {{(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}, {(void*)0, &g_347, &l_288, &g_347, &g_347}}};
                short ****l_350[5][10] = {{&l_351[2][3][1], (void*)0, &l_351[2][3][0], (void*)0, &l_351[2][3][1], (void*)0, &l_351[2][3][1], (void*)0, &l_351[2][3][0], (void*)0}, {&l_351[2][3][1], (void*)0, &l_351[2][3][0], (void*)0, &l_351[2][3][1], (void*)0, &l_351[2][3][1], (void*)0, &l_351[2][3][0], (void*)0}, {&l_351[2][3][1], (void*)0, &l_351[2][3][0], (void*)0, &l_351[2][3][1], (void*)0, &l_351[2][3][1], (void*)0, &l_351[2][3][0], (void*)0}, {&l_351[2][3][1], (void*)0, &l_351[2][3][0], (void*)0, &l_351[2][3][1], (void*)0, &l_351[2][3][1], (void*)0, &l_351[2][3][0], (void*)0}, {&l_351[2][3][1], (void*)0, &l_351[2][3][0], (void*)0, &l_351[2][3][1], (void*)0, &l_351[2][3][1], (void*)0, &l_351[2][3][0], (void*)0}};
                int l_379 = (-1L);
                int **l_389 = &l_387[0][2];
                int i, j, k;
                for (g_294 = 0; (g_294 <= 2); g_294 += 1)
                {
                    int *l_327 = &g_154[7];
                    int i;
                    if ((((((~(safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((-1L) == ((g_200[(g_294 + 3)] >= ((((safe_lshift_func_uint16_t_u_u(4UL, (p_43 && (((((((&g_4[7] != l_321) >= (((safe_add_func_int32_t_s_s((+(0x564DB512L ^ (safe_unary_minus_func_uint8_t_u(l_325)))), g_200[(g_294 + 3)])) , p_44) >= g_213[0][0][0])) > 0xFBA4DB70L) , (*g_27)) == (*g_27)) == l_326) <= 1L)))) && 4L) == g_73) < g_200[2])) & 0x7CL)) & 1UL), l_325)), g_93[2][1][1]))) || 0x12L) || l_325) != (*g_148)) != l_325))
                    {
                        int ***l_328 = &l_271[0];
                        char *l_337 = (void*)0;
                        (*g_249) = l_327;

                        ;
                        if ((*g_153))
                            continue;
                        (*g_153) = func_60(((void*)0 != l_328), g_93[1][0][0], ((safe_mod_func_uint8_t_u_u((+(safe_lshift_func_int16_t_s_s((l_326 , (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((*g_27) , 65535UL), (g_213[0][3][2] = ((g_28 , (p_42 = ((*g_153) | func_48((((*g_249) = (**l_328)) != p_46), g_194, g_73, p_42, &g_28)))) , l_263)))), (-7L)))), 0))), 0xD4L)) , 1UL));
                        if ((*g_153))
                            continue;
                    }
                    else
                    {
                        (*g_249) = l_338;

                        ;
                        return g_135;
                    }

                    ;
                    if ((**g_249))
                        continue;
                    return g_4[4];
                }
                (*l_338) = ((&g_200[g_28] != (l_341 = l_270)) & 4294967289UL);

                ;
                if ((!((((g_200[7] <= (safe_mod_func_int16_t_s_s(0x690EL, ((*l_338) || (safe_rshift_func_uint16_t_u_s(0x4A37L, (0x7C9084D8L != (((*l_349) = g_346) == (l_352 = &l_288))))))))) , p_43) || (l_263 = (((safe_mod_func_int8_t_s_s((p_43 && 8L), 0x8BL)) <= 0x72L) ^ 0xD075L))) , (*g_153))))
                {
                    int *l_355 = &g_73;
                    unsigned l_380 = 4UL;
                    for (l_326 = 0; (l_326 <= 2); l_326 += 1)
                    {
                        unsigned l_356 = 0xCB837798L;
                        l_355 = (p_45 = ((**l_272) = p_45));

                        ;
                        ;
                        if (l_356)
                            break;
                        (**l_272) = p_45;
                        (*g_249) = (*g_249);
                    }

                    ;
                    if ((safe_sub_func_int32_t_s_s((0x06L || ((((*g_377) = (safe_lshift_func_uint16_t_u_s((((((g_154[6] , (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_200[6], 7)), (g_189 = (safe_add_func_int8_t_s_s(((*l_321) = g_154[6]), (safe_lshift_func_int8_t_s_s(func_60(((safe_mod_func_int32_t_s_s(func_48(l_325, (safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s((0x86092011L && ((p_43 , (p_44 , (l_263 = (p_44 = ((*l_289) = (l_379 = (((safe_mod_func_int32_t_s_s((*g_153), 0xF42E3AF9L)) , g_377) == (void*)0))))))) || p_42)), (*g_27))), p_42)), g_135, (*g_377), l_338), (*g_27))) >= p_43), l_380, (*g_148)), 5)))))))) , g_213[0][3][2]) && l_325) , 1UL) && 9UL), p_42))) ^ 0xE5L) != l_381)), 0UL)))
                    {
                        return (*g_377);
                    }
                    else
                    {
                        int *l_382 = &l_381;
                        (*g_249) = l_382;

                        ;
                    }

                    ;
                    for (l_326 = 0; (l_326 <= 2); l_326 += 1)
                    {
                        if ((**g_249))
                            break;
                        (*g_153) = (*g_81);
                    }
                }
                else
                {
                    unsigned l_385[5];
                    int ***l_388 = &l_386;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_385[i] = 0xE87CBE35L;
                    for (g_294 = 2; (g_294 >= 0); g_294 -= 1)
                    {
                        l_325 = (safe_div_func_uint32_t_u_u((*g_27), (*g_153)));
                    }
                    for (l_325 = 0; (l_325 <= 3); l_325 += 1)
                    {
                        int i;
                        (*l_338) = l_385[0];
                        if (l_379)
                            break;
                        return (*g_377);
                    }
                    l_389 = ((0xEBA6L > p_43) , ((*l_388) = l_386));
                }


                (**l_272) = p_46;

                ;
                for (p_43 = 0; (p_43 <= 2); p_43 += 1)
                {
                    int *l_390 = &l_263;
                    int l_397 = 1L;
                }
            }

            ;
            ;
            (**l_272) = p_45;

            ;
            (*l_406) = &g_148;
        }

        ;
        ;
        ;
    }
    else
    {
        int *l_408[2];
        int i;
        for (i = 0; i < 2; i++)
            l_408[i] = &g_154[6];
        (*g_249) = l_408[1];

        ;
    }

    ;
    l_409 = &l_381;

    ;
    if (p_44)
    {
        return p_42;
    }
    else
    {
        int l_415 = 0x4A1F350AL;
        int l_420 = 0x67A9DCE3L;
        int l_460 = 1L;
        unsigned short *l_505 = &g_419;
        int l_518 = 0L;
        unsigned *l_532[1][5][1];
        unsigned **l_534 = (void*)0;
        unsigned ***l_533[9] = {&l_534, &l_534, &l_534, &l_534, &l_534, &l_534, &l_534, &l_534, &l_534};
        int **l_584 = &g_81;
        unsigned l_627 = 1UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 1; k++)
                    l_532[i][j][k] = &g_28;
            }
        }
        if (((*g_153) = 0xC42FA6E5L))
        {
            unsigned ***l_411 = &l_410;
            unsigned short *l_416 = &g_93[2][1][0];
            int l_417 = 0xCBAC12BEL;
            unsigned short *l_418[8][7][4] = {{{(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}}, {{(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}}, {{(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}}, {{(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}}, {{(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}}, {{(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}}, {{(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}}, {{(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}, {(void*)0, &g_419, &g_419, &g_419}}};
            int l_453 = 0L;
            char l_489 = 0x1FL;
            int *l_501 = &g_73;
            int i, j, k;
            (*g_153) = ((((*l_411) = l_410) != (((((void*)0 == g_414) | (p_43 > p_43)) || l_420) , l_421)) , (*l_409));
            if (func_60((l_420 , ((*l_416) = func_60(((*l_416) = p_42), l_420, p_44))), g_309, p_43))
            {
                unsigned l_432 = 4294967295UL;
                int l_438 = 0x11575514L;
                int l_439 = 0x33864385L;
                char l_474 = 1L;
                unsigned char l_477[8][10] = {{1UL, 1UL, 0UL, 0x8AL, 0x8AL, 0UL, 1UL, 1UL, 0UL, 1UL}, {1UL, 1UL, 0UL, 0x8AL, 0x8AL, 0UL, 1UL, 1UL, 0UL, 1UL}, {1UL, 1UL, 0UL, 0x8AL, 0x8AL, 0UL, 1UL, 1UL, 0UL, 1UL}, {1UL, 1UL, 0UL, 0x8AL, 0x8AL, 0UL, 1UL, 1UL, 0UL, 1UL}, {1UL, 1UL, 0UL, 0x8AL, 0x8AL, 0UL, 1UL, 1UL, 0UL, 1UL}, {1UL, 1UL, 0UL, 0x8AL, 0x8AL, 0UL, 1UL, 1UL, 0UL, 1UL}, {1UL, 1UL, 0UL, 0x8AL, 0x8AL, 0UL, 1UL, 1UL, 0UL, 1UL}, {1UL, 1UL, 0UL, 0x8AL, 0x8AL, 0UL, 1UL, 1UL, 0UL, 1UL}};
                unsigned *l_490 = (void*)0;
                int i, j;
                (*g_249) = &l_417;


                ;
                (*g_153) = ((*l_409) = (*g_153));
                for (l_417 = 0; (l_417 >= 28); l_417++)
                {
                    char l_425[9][6][3] = {{{(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}}, {{(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}}, {{(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}}, {{(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}}, {{(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}}, {{(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}}, {{(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}}, {{(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}}, {{(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}, {(-1L), 0x13L, (-1L)}}};
                    int i, j, k;
                }
                for (p_44 = 9; (p_44 >= 3); p_44 -= 1)
                {
                    int l_456 = (-4L);
                    char l_467[6] = {0L, (-10L), 0L, (-10L), 0L, (-10L)};
                    int ***l_476 = &g_249;
                    int i;
                    for (p_43 = 2; (p_43 <= 9); p_43 += 1)
                    {
                        short *l_448 = &g_449;
                        int i;
                        (*l_409) = g_200[p_44];
                        (*g_249) = (((*l_270) = (safe_div_func_int16_t_s_s((((void*)0 == &g_294) == (g_200[p_44] <= func_60((safe_mod_func_uint16_t_u_u((~((g_378[0][5] != (safe_lshift_func_int16_t_s_s(l_420, (((*g_27) = (((((*l_409) = ((safe_add_func_uint16_t_u_u(65535UL, ((*l_448) = ((**l_288) = ((*g_377) != ((*g_27) , p_42)))))) , 1L)) , l_415) && p_43) , 0UL)) && 0x9CE8F9D4L)))) , 65532UL)), 65535UL)), g_378[2][2], p_42))), 0x5701L))) , (void*)0);
                        (*l_409) = (g_200[p_44] ^ (func_54(g_200[8], ((safe_unary_minus_func_uint32_t_u(func_48((0x5FE8L || ((*l_448) = (((*l_409) && p_43) <= (safe_rshift_func_int16_t_s_s((l_438 = 0xEA4DL), 5))))), l_453, ((*g_148) <= (safe_div_func_int32_t_s_s(((*l_409) ^ 0xABL), l_456))), p_44, l_270))) , 0xE7L), (*g_377)) || 0x76L));


                        (*l_409) = g_202[5][1][2];
                    }
                    for (l_381 = 1; (l_381 <= 9); l_381 += 1)
                    {
                        char l_457 = 5L;
                        int *l_475[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_475[i] = &l_438;
                        g_154[6] = ((g_200[p_44] = func_48(func_48(l_457, (((p_43 , &g_154[2]) != (((+(l_417 ^ (((safe_lshift_func_int16_t_s_s(p_44, ((*l_289) = 0x94D3L))) <= p_43) < (p_44 >= func_54((*l_409), p_44, (*g_377)))))) == l_456) , (void*)0)) | l_438), l_460, p_43, g_27), (*g_377), (*l_409), (*g_377), g_461)) , l_456);


                        l_263 = ((safe_add_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((l_467[2] > (((*g_27) | ((*g_148) > p_42)) && (((*g_461) >= ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_415, l_474)), ((((l_453 = (*l_409)) <= (l_476 == (void*)0)) != (*l_409)) >= (*l_409)))), l_477[3][0])) || 1L)) | p_43))), p_43)) & p_42), l_417)) == (*g_377));
                    }
                    (*g_249) = p_45;
                    for (g_135 = 0; (g_135 <= 2); g_135 += 1)
                    {
                        unsigned char **l_488 = &g_377;
                        char *l_491 = &l_489;
                        int i, j;
                        (*g_249) = &g_73;
                        (*l_409) = (g_200[(g_135 + 1)] , (safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((0x171FL > (+((((!(((*l_491) = (g_200[p_44] ^ (safe_add_func_int32_t_s_s(g_200[p_44], (safe_rshift_func_int16_t_s_u(func_48(l_417, (g_378[g_135][(g_135 + 5)] = (((*g_27) = (safe_add_func_int16_t_s_s((((*l_488) = &g_378[1][2]) == (void*)0), p_42))) , p_44)), l_489, l_460, l_490), 0)))))) && p_44)) , 0x95L) != l_417) , g_200[p_44]))), p_43)), 0x1EL)));
                        if (l_453)
                            break;
                        (*l_409) = (safe_sub_func_int16_t_s_s(((**l_288) = (!(safe_lshift_func_uint16_t_u_u((*g_148), 8)))), p_44));
                    }
                }

                ;
            }
            else
            {
                int *l_496 = &l_415;
                unsigned short *l_502 = &g_419;
                l_496 = &l_381;

                ;
                for (g_309 = 0; (g_309 == 38); ++g_309)
                {
                    for (l_453 = 4; (l_453 >= 1); l_453 -= 1)
                    {
                        char ***l_500 = &g_499;
                        int i, j;
                        (*l_500) = g_499;
                        l_501 = l_387[l_453][(l_453 + 3)];

                        ;
                        (*g_153) = (-10L);
                        return l_460;
                    }
                    (*l_409) = (l_502 == (void*)0);
                }
                l_410 = (void*)0;
            }


            ;
        }
        else
        {
            unsigned l_506 = 0x81593394L;
            int l_528 = 0xA776FCC8L;
            short ****l_529 = &g_346;
            for (p_43 = 0; (p_43 <= 51); p_43 = safe_add_func_uint16_t_u_u(p_43, 7))
            {
                unsigned l_517 = 4294967287UL;
                (*l_409) = (func_48((*l_409), (&g_93[2][1][1] != l_505), ((l_506 & (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(func_60((((safe_div_func_uint32_t_u_u(((*g_27) = ((*l_409) >= ((safe_mod_func_int32_t_s_s((1UL > ((l_506 | (safe_div_func_uint8_t_u_u((p_43 & p_43), 0xC6L))) ^ 0xAEL)), 1L)) || (*g_461)))), 1UL)) < p_44) , p_44), g_449, l_460), 0x87366406L)), 1))) ^ l_517), (*g_377), &g_462) && 0x0A042E9AL);
                if (l_518)
                    continue;
                for (l_415 = 2; (l_415 == 18); l_415 = safe_add_func_int16_t_s_s(l_415, 6))
                {
                    for (l_506 = 0; (l_506 <= 2); l_506 += 1)
                    {
                        char *l_527 = &g_294;
                        int i, j;
                    }
                    (*g_249) = p_45;
                }
                (*g_249) = (((6UL == ((*g_461) ^ (p_42 , ((*l_409) = func_48(l_506, (l_529 == &g_346), l_460, (safe_div_func_uint8_t_u_u((*g_377), (((~(((*l_409) || 0xF1L) , p_43)) , p_44) , p_44))), l_532[0][3][0]))))) == 0x767AL) , p_45);
            }

            ;
        }


        (*g_249) = p_46;
        l_535 = &l_270;

        ;
        for (g_135 = 0; (g_135 <= 2); g_135 += 1)
        {
            unsigned char l_545 = 3UL;
            unsigned *l_546 = &g_28;
            int l_570[1][5][9];
            char *l_572 = &g_294;
            char *l_573 = &g_189;
            unsigned char **l_607 = &g_377;
            char **l_610 = (void*)0;
            unsigned ***l_613 = (void*)0;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 9; k++)
                        l_570[i][j][k] = 1L;
                }
            }
            (*l_409) = 1L;
            if ((safe_add_func_uint16_t_u_u((func_60((*l_409), p_44, (*g_148)) > 0UL), 0x8148L)))
            {
                unsigned l_544 = 4294967295UL;
                int l_547[7][2][2] = {{{0x12FFA432L, 0L}, {0x12FFA432L, 0L}}, {{0x12FFA432L, 0L}, {0x12FFA432L, 0L}}, {{0x12FFA432L, 0L}, {0x12FFA432L, 0L}}, {{0x12FFA432L, 0L}, {0x12FFA432L, 0L}}, {{0x12FFA432L, 0L}, {0x12FFA432L, 0L}}, {{0x12FFA432L, 0L}, {0x12FFA432L, 0L}}, {{0x12FFA432L, 0L}, {0x12FFA432L, 0L}}};
                unsigned **l_562 = (void*)0;
                int i, j, k;
                if ((((*l_409) = (l_420 < l_420)) <= (p_42 < (9UL == (l_547[4][1][0] = (g_200[1] >= (0x8965L < ((func_48((p_43 > (safe_div_func_int16_t_s_s(((((*g_377) = 255UL) , (*g_377)) , l_544), p_43))), g_189, l_545, l_545, l_546) != p_44) || p_43))))))))
                {
                    (*g_249) = &l_381;



                    if (p_42)
                        break;
                    (*l_409) = (safe_sub_func_int32_t_s_s(p_44, (safe_sub_func_uint8_t_u_u(((*g_377) = l_544), (*l_409)))));
                }
                else
                {
                    unsigned l_564 = 0x89F834C3L;
                    int l_568 = 0xE8303B74L;
                    int l_569 = (-3L);
                    for (l_518 = 1; (l_518 >= 0); l_518 -= 1)
                    {
                        char ***l_552 = &g_499;
                        unsigned **l_563 = &l_422;
                        unsigned char *l_565 = &l_545;
                        unsigned char *l_566[1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_566[i] = &g_567;
                        (*l_552) = g_499;
                        (*l_409) = (safe_div_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u(0x5DFC9776L, (((0x4169L || (((l_415 = g_378[(l_518 + 1)][g_135]) > l_557) & g_571)) , l_572) == l_573))) ^ (*g_148)) , 0UL), l_460));
                    }
                    (*g_249) = &l_557;



                    (*g_249) = &l_570[0][0][4];



                    (*g_249) = &l_570[0][3][5];
                }



                for (g_73 = 0; (g_73 <= 2); g_73 += 1)
                {
                    int l_585 = 0xDC275228L;
                    unsigned char **l_589 = &g_377;
                    unsigned char ***l_588 = &l_589;
                    char l_602 = 1L;
                    unsigned l_605 = 0xA8A22D44L;
                    int i, j;
                    l_547[4][1][0] = ((((l_585 = (g_378[g_135][(g_73 + 7)] & ((safe_rshift_func_int16_t_s_s(p_44, (safe_mod_func_uint8_t_u_u(252UL, ((l_570[0][3][5] = (p_44 > ((*l_572) = (safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(65534UL, ((*l_289) = (*l_409)))), p_43))))) , p_44))))) != ((l_584 == (void*)0) & p_42)))) <= 0x194CL) , 0x69L) | p_42);
                    (*g_249) = p_45;
                    (*l_409) = (safe_lshift_func_uint8_t_u_s(((p_43 , (void*)0) != ((*l_588) = (void*)0)), ((safe_div_func_uint32_t_u_u(((((safe_lshift_func_int8_t_s_u((func_48((l_585 ^ ((g_594 = &g_461) != (((safe_div_func_uint8_t_u_u((((~(((g_202[5][1][2] = (safe_unary_minus_func_int16_t_s((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((-4L), (((g_154[2] | l_602) , (safe_div_func_uint8_t_u_u(g_378[g_135][(g_73 + 7)], (*g_377)))) >= p_44))), l_605))))) , l_570[0][3][5]) == p_44)) , l_570[0][3][5]) == p_42), (*l_409))) >= l_544) , (void*)0))), p_44, l_545, (*g_377), &g_28) || 9L), 1)) <= (*l_409)) , p_42) & 0xB02AE673L), l_606)) & 0xD44A4BE7L)));

                    ;
                    ;
                    for (g_189 = 2; (g_189 >= 0); g_189 -= 1)
                    {
                        unsigned char ***l_608 = &l_607;
                        int i, j, k;
                        g_571 = ((g_202[(g_73 + 4)][g_189][g_73] = ((*l_588) == ((*l_608) = l_607))) , g_202[(g_135 + 2)][(g_189 + 1)][g_189]);
                    }
                }

                ;
                return (*g_377);




            }
            else
            {
                for (g_28 = 0; (g_28 <= 9); g_28 += 1)
                {
                    char ***l_609[7][4][4] = {{{&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}}, {{&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}}, {{&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}}, {{&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}}, {{&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}}, {{&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}}, {{&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}, {&g_499, (void*)0, &g_499, &g_499}}};
                    unsigned ****l_611 = (void*)0;
                    unsigned ****l_612 = &l_533[5];
                    int i, j, k;
                    l_610 = g_499;
                    g_614 = ((((*l_612) = &g_594) != (((*g_148) , l_570[0][0][8]) , l_613)) , p_45);

                    ;
                }
                if (l_570[0][1][4])
                    continue;
            }
            if ((0xF74EL | p_43))
            {
                int **l_615 = &l_387[4][3];
                int ***l_616 = &l_386;
                int ***l_617[6][2] = {{&l_615, (void*)0}, {&l_615, (void*)0}, {&l_615, (void*)0}, {&l_615, (void*)0}, {&l_615, (void*)0}, {&l_615, (void*)0}};
                unsigned l_624 = 0xC40093E4L;
                int i, j;
                g_618 = ((*l_616) = l_615);

                ;
                (*l_584) = (void*)0;

                ;
                for (p_42 = 0; (p_42 <= 2); p_42 += 1)
                {
                    unsigned *l_628 = &l_624;
                    int i, j;
                    (*l_409) = func_48((((g_200[(g_135 + 6)] != (safe_rshift_func_int8_t_s_s(2L, ((safe_mod_func_uint8_t_u_u((g_378[p_42][(g_135 + 1)] < (((l_624 <= (*g_461)) , func_54(p_44, (func_60(p_43, g_419, (!(((safe_rshift_func_int16_t_s_u((l_624 , g_378[p_42][(g_135 + 1)]), (*g_148))) <= 0x548674C6L) , g_378[p_42][(g_135 + 1)]))) == (*l_409)), l_627)) | 0x37L)), (*l_409))) || 4294967293UL)))) == (*g_148)) , (*g_619)), p_42, p_42, (*g_377), l_628);


                    if (p_43)
                        break;
                    for (g_73 = 0; (g_73 <= 9); g_73 += 1)
                    {
                        if (g_309)
                            break;
                        (*g_249) = &g_571;
                        if (p_44)
                            break;
                        (*l_409) = ((l_570[0][3][5] && (safe_add_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(p_42, l_624)) , p_42), (*g_148)))) || 4294967290UL);
                    }


                }


            }
            else
            {
                unsigned short l_633 = 65528UL;
                return l_633;


            }

            ;
        }




        ;
        ;
    }



    ;
    ;
    ;
    if ((l_643[8] = ((((*l_409) ^ ((((+(l_634 != (g_499 = l_634))) && ((*l_409) >= ((safe_sub_func_int16_t_s_s(((*l_409) || (safe_rshift_func_uint8_t_u_s((((!(0x64D2L < func_54(p_42, (*l_409), (safe_div_func_uint32_t_u_u(((((**l_535) = 4UL) & (*l_409)) > 0xA4A6L), p_44))))) & 254UL) ^ g_449), (*l_409)))), 0UL)) >= g_419))) == (*g_377)) & 0xFCL)) != (*l_409)) , (*l_409))))
    {
        unsigned char l_644 = 0x95L;
        int l_667 = 0x48FC1A1AL;
        int ***l_691 = &l_386;
        unsigned l_726 = 0xEDB0A48BL;
        int l_737 = 0x11835013L;
        unsigned *l_751 = (void*)0;
        unsigned l_756[1];
        int *l_757[4];
        int i;
        for (i = 0; i < 1; i++)
            l_756[i] = 0x9A3E465EL;
        for (i = 0; i < 4; i++)
            l_757[i] = (void*)0;
        if (((((*g_27) = 6UL) != l_644) , l_644))
        {
            char l_653 = 1L;
            unsigned *l_654 = &g_462;
            unsigned char *l_655 = &g_567;
            (*g_249) = (func_48(l_644, (*g_377), (func_48((p_44 || (5UL == g_378[1][7])), ((*l_655) = ((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((+((0x6C7B3431L < ((((*l_654) = (safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s(func_48(l_653, (*g_377), l_653, p_43, l_654), p_43)), l_644))) < 7UL) ^ l_653)) < (*g_377))) >= 4294967291UL), p_44)), (*g_148))) <= l_644)), l_644, l_653, (*l_535)) , 5L), (*g_377), l_654) , &l_263);



            l_409 = p_46;

            ;
            (*g_249) = l_654;



            for (p_42 = 0; (p_42 <= (-25)); p_42 = safe_sub_func_uint8_t_u_u(p_42, 9))
            {
                return (*g_377);




            }
        }
        else
        {
            unsigned short l_665 = 0UL;
            unsigned l_681 = 7UL;
            int *l_701[4];
            int l_727 = 0x3A70B73EL;
            short ***l_747 = &l_288;
            int i;
            for (i = 0; i < 4; i++)
                l_701[i] = &g_73;
            for (g_194 = 0; (g_194 <= 7); g_194 += 1)
            {
                char *l_662[6] = {&g_294, &g_294, &g_189, &g_294, &g_294, &g_189};
                unsigned char *l_666 = &l_644;
                short l_668 = 0L;
                unsigned char l_679 = 255UL;
                int ****l_690 = &g_414;
                int **l_699 = &g_153;
                int i;
                if (func_54((g_154[g_194] , (func_54((safe_lshift_func_int8_t_s_s((((*l_409) = (((*l_666) = (safe_add_func_uint16_t_u_u(0UL, ((*l_409) | (((((*g_377) = (0xEB44406BL == p_42)) && (g_294 = (-1L))) , l_644) > (l_665 ^ (g_309 < l_644))))))) && g_202[5][1][2])) < (-1L)), p_43)), p_42, p_44) == l_667)), g_567, g_213[0][3][2]))
                {
                    if ((*l_409))
                        break;
                }
                else
                {
                    short l_680[6][4][8] = {{{0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}}, {{0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}}, {{0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}}, {{0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}}, {{0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}}, {{0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}, {0x1D64L, 0x9FA9L, 0x3B56L, 0L, 9L, 4L, 0x4362L, 0xFEB6L}}};
                    unsigned short *l_682 = &g_419;
                    int i, j, k;
                    l_683[8][2][1] = ((l_668 & (safe_div_func_uint16_t_u_u(p_43, func_60(l_665, g_93[0][0][1], (((((safe_sub_func_uint16_t_u_u((*g_148), ((*l_682) = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((p_44 | ((((*l_289) = 1L) < (l_679 > ((l_680[5][3][7] = func_60(func_60((l_667 > 0x2CL), p_42, (*g_148)), (*l_409), (*g_148))) , l_665))) != l_681)), 3)), 3))))) != 255UL) && 4294967295UL) > (*g_148)) & (*l_409)))))) , 0x5EB8957FL);
                    for (l_644 = 0; (l_644 >= 45); ++l_644)
                    {
                        return (*g_377);




                    }
                    (*g_249) = &l_667;



                    for (l_667 = 0; (l_667 <= 3); l_667 += 1)
                    {
                        if (l_665)
                            break;
                        return (*g_377);





                    }
                }



                for (l_606 = 16; (l_606 == (-9)); l_606 = safe_sub_func_uint32_t_u_u(l_606, 6))
                {
                    return p_43;





                }
                if (((safe_mod_func_int16_t_s_s(((l_681 >= (((*l_690) = &l_386) != l_691)) , ((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(6L, ((**l_535) = (*g_27)))), (safe_unary_minus_func_uint16_t_u((l_668 <= ((((((((p_44 , (-2L)) & ((safe_div_func_uint8_t_u_u(p_43, (-1L))) , (*g_148))) != (*l_409)) , l_699) != (void*)0) || 0x82L) != l_667) , (*l_409))))))) ^ p_42)), l_681)) && l_667))
                {
                    return l_667;





                }
                else
                {
                    int *l_700 = (void*)0;
                    int **l_702 = (void*)0;
                    int **l_703 = &g_614;
                    if (p_44)
                    {
                        (*g_249) = p_46;
                    }
                    else
                    {
                        (*l_699) = p_46;

                        ;
                        (*l_699) = l_700;
                        p_45 = l_701[2];

                        ;
                        (*g_249) = &l_667;

                        ;
                    }
                    (*l_703) = ((*l_699) = &g_154[1]);

                    ;
                    ;
                    if (((*g_614) = ((*g_377) | (**l_703))))
                    {
                        unsigned short **l_705 = &g_148;
                        unsigned short ***l_704 = &l_705;
                        (**l_703) = (-2L);
                        (**l_699) = (((*g_377) | ((*l_409) = (-1L))) > (l_667 = p_44));
                        (*l_704) = &g_148;
                    }
                    else
                    {
                        (*l_699) = p_46;

                        ;
                        (*l_409) = l_644;
                        (*g_614) = 0x3162D84AL;
                        (*l_699) = p_45;

                        ;
                    }

                    ;
                }

                ;
                ;
                ;
                (*g_249) = &g_73;
            }


            ;
            ;
            ;
            (*g_249) = &l_683[8][2][1];



            if (((-1L) | 0x03L))
            {
                unsigned char l_724 = 0xF6L;
                short l_725 = 1L;
                (*l_409) = (!(func_54(p_44, (safe_sub_func_int8_t_s_s(p_43, (func_60(p_44, ((**l_421) = ((safe_add_func_uint16_t_u_u((func_60((*g_148), ((safe_mod_func_uint16_t_u_u((p_42 <= ((safe_sub_func_int32_t_s_s((func_54(((safe_div_func_uint8_t_u_u((*g_377), l_667)) , (~(safe_lshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(func_48(((((0xA186L < (*g_148)) > l_724) ^ 0xE84026C5L) , 1L), (*g_377), (*l_409), p_43, (*l_535)), l_725)), p_42)), (*g_148))))), (*l_409), p_44) & 0x11L), (*l_409))) >= (*l_409))), l_644)) , l_724), (*g_148)) > p_43), l_644)) , l_726)), (*g_148)) ^ p_44))), l_727) && (*g_148)));


                for (l_724 = 3; (l_724 < 9); l_724++)
                {
                    char l_730 = 1L;
                    (*l_409) = l_730;
                    (*l_409) = l_724;
                }
                for (g_449 = (-29); (g_449 > 29); g_449 = safe_add_func_uint8_t_u_u(g_449, 4))
                {
                    (*g_249) = p_46;
                    (*g_249) = &g_73;
                    (*g_249) = l_701[3];
                    if (l_725)
                    {
                        return (*g_377);




                    }
                    else
                    {
                        (*g_249) = p_45;
                        (*g_249) = p_45;
                    }
                }
            }
            else
            {
                unsigned short l_738 = 0xF95CL;
                int *l_741 = &g_202[5][1][2];
                int l_742[4] = {0xA0A881B3L, 1L, 0xA0A881B3L, 1L};
                int i;
                for (l_727 = 0; (l_727 <= 2); l_727 += 1)
                {
                    int **l_739 = &g_614;
                    unsigned char l_740 = 0xD2L;
                    l_667 = ((p_44 , p_44) != (safe_rshift_func_int8_t_s_u((func_54(p_42, (l_737 >= 0x26698D57L), p_44) || ((l_726 | l_738) >= l_738)), (*g_377))));


                    (*l_739) = ((*g_249) = p_45);

                    ;
                    if (l_644)
                        break;
                    if (l_740)
                        break;
                    for (l_665 = 0; (l_665 <= 2); l_665 += 1)
                    {
                        (*l_409) = (((*g_377) = func_60((l_726 & l_738), g_309, (((*l_386) = l_741) == &l_737))) ^ g_4[5]);
                        (*l_739) = &g_154[6];

                        ;
                        (*l_409) = (*g_614);
                        if ((**l_739))
                            break;
                    }

                    ;
                }
                (*l_409) = 0x8A3137A5L;
                l_742[2] = 9L;
            }
            (*l_409) = (safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((p_44 != (((void*)0 != l_747) < ((*g_148) = (safe_sub_func_int32_t_s_s((-6L), func_48(l_750[5], (*g_377), p_44, ((void*)0 == &p_43), l_751)))))), 4L)), 0x06F3L));
        }



        ;
        ;
        ;
        ;
        l_683[8][1][2] = ((!(safe_add_func_uint16_t_u_u(0xF5A3L, (safe_lshift_func_uint8_t_u_s(l_756[0], p_43))))) | l_667);
    }
    else
    {
        unsigned char l_768 = 249UL;
        (*g_249) = l_758;
        for (p_44 = 0; (p_44 <= 9); p_44 += 1)
        {
            int l_774 = 0xE7059C6BL;
            int **l_781 = &g_614;
            for (g_571 = 1; (g_571 >= 0); g_571 -= 1)
            {
                char *l_766[7][9] = {{&g_189, &g_189, &g_4[3], &g_4[3], &g_294, &g_4[3], &g_294, &g_4[3], &g_4[3]}, {&g_189, &g_189, &g_4[3], &g_4[3], &g_294, &g_4[3], &g_294, &g_4[3], &g_4[3]}, {&g_189, &g_189, &g_4[3], &g_4[3], &g_294, &g_4[3], &g_294, &g_4[3], &g_4[3]}, {&g_189, &g_189, &g_4[3], &g_4[3], &g_294, &g_4[3], &g_294, &g_4[3], &g_4[3]}, {&g_189, &g_189, &g_4[3], &g_4[3], &g_294, &g_4[3], &g_294, &g_4[3], &g_4[3]}, {&g_189, &g_189, &g_4[3], &g_4[3], &g_294, &g_4[3], &g_294, &g_4[3], &g_4[3]}, {&g_189, &g_189, &g_4[3], &g_4[3], &g_294, &g_4[3], &g_294, &g_4[3], &g_4[3]}};
                char **l_765[3][3][4] = {{{&l_766[2][0], &l_766[2][0], &l_766[2][0], &l_766[2][0]}, {&l_766[2][0], &l_766[2][0], &l_766[2][0], &l_766[2][0]}, {&l_766[2][0], &l_766[2][0], &l_766[2][0], &l_766[2][0]}}, {{&l_766[2][0], &l_766[2][0], &l_766[2][0], &l_766[2][0]}, {&l_766[2][0], &l_766[2][0], &l_766[2][0], &l_766[2][0]}, {&l_766[2][0], &l_766[2][0], &l_766[2][0], &l_766[2][0]}}, {{&l_766[2][0], &l_766[2][0], &l_766[2][0], &l_766[2][0]}, {&l_766[2][0], &l_766[2][0], &l_766[2][0], &l_766[2][0]}, {&l_766[2][0], &l_766[2][0], &l_766[2][0], &l_766[2][0]}}};
                unsigned *l_769 = (void*)0;
                int i, j, k;
                if (func_48(((l_643[(g_571 + 4)] , g_378[g_571][p_44]) , (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((*g_148) = 65531UL), (safe_lshift_func_uint8_t_u_s(p_44, ((((l_767 = ((*g_377) , &g_4[9])) != &g_189) | (-1L)) || ((**l_288) = func_60((p_42 != 0xE8L), g_154[2], g_213[1][2][4]))))))), l_643[(g_571 + 4)]))), (*g_377), l_768, p_44, l_769))
                {
                    for (l_768 = 0; (l_768 <= 1); l_768 += 1)
                    {
                        int i, j, k;
                        (*g_249) = p_46;
                        l_683[(g_571 + 5)][(g_571 + 3)][(l_768 + 2)] = (safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u(g_213[l_768][g_571][l_768], 65535UL)), g_449));
                    }
                    (*l_409) = l_774;
                }
                else
                {
                    for (l_263 = 1; (l_263 >= 0); l_263 -= 1)
                    {
                        int i, j, k;
                        if (p_42)
                            break;
                        l_683[(l_263 + 1)][(g_571 + 2)][(l_263 + 1)] = 0xB9FF67B0L;
                    }
                    (*g_249) = p_46;
                }

                ;
                for (l_557 = 1; (l_557 >= 0); l_557 -= 1)
                {
                    int l_775[6][1];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_775[i][j] = 0x8AD1BD3BL;
                    }
                    for (l_381 = 0; (l_381 <= 1); l_381 += 1)
                    {
                        (*l_758) = g_378[g_571][p_44];
                        if (l_775[3][0])
                            break;
                    }
                    return p_42;




                }
            }
            for (p_42 = 0; (p_42 <= 9); p_42 += 1)
            {
                int i;
                (*l_409) = l_643[p_42];
                for (l_263 = 0; (l_263 <= 3); l_263 += 1)
                {
                    char **l_778 = &l_767;
                    unsigned l_780 = 0x2D668D94L;
                    int l_782 = 0x6647699DL;
                    for (g_28 = 0; (g_28 <= 2); g_28 += 1)
                    {
                        int **l_779 = &g_81;
                        int i, j, k;
                        if (g_378[g_28][p_42])
                            break;
                        l_683[(l_263 + 4)][(g_28 + 2)][l_263] = (safe_sub_func_uint32_t_u_u((((void*)0 != l_778) || ((p_45 = &l_683[8][2][1]) == (void*)0)), g_378[g_28][p_42]));
                        if (l_780)
                            continue;
                        (*g_249) = p_46;
                    }
                    if (l_768)
                    {
                        int i, j, k;
                        l_683[l_263][(l_263 + 1)][l_263] = (l_781 == &g_153);
                        l_782 = 0x123B4057L;
                    }
                    else
                    {
                        (*l_758) = p_43;
                        (*g_249) = p_46;
                    }
                }
                (*l_409) = l_643[p_42];
                if ((*l_409))
                    break;
            }
        }

        ;
        ;
    }



    ;
    ;
    ;
    ;
    ;
    return p_43;





}







static unsigned char func_48(int p_49, unsigned char p_50, short p_51, unsigned char p_52, unsigned * p_53)
{
    return p_50;
}







static int func_54(char p_55, unsigned char p_56, unsigned char p_57)
{
    int *l_75[4] = {&g_73, &g_73, &g_73, &g_73};
    int l_76[8][5] = {{(-6L), 0L, 0xEFC5446EL, 1L, 5L}, {(-6L), 0L, 0xEFC5446EL, 1L, 5L}, {(-6L), 0L, 0xEFC5446EL, 1L, 5L}, {(-6L), 0L, 0xEFC5446EL, 1L, 5L}, {(-6L), 0L, 0xEFC5446EL, 1L, 5L}, {(-6L), 0L, 0xEFC5446EL, 1L, 5L}, {(-6L), 0L, 0xEFC5446EL, 1L, 5L}, {(-6L), 0L, 0xEFC5446EL, 1L, 5L}};
    int **l_80[9] = {&l_75[2], &l_75[2], (void*)0, &l_75[2], &l_75[2], (void*)0, &l_75[2], &l_75[2], (void*)0};
    unsigned short l_174 = 0xD4DEL;
    unsigned char l_218 = 251UL;
    int l_219 = (-4L);
    unsigned char l_222 = 255UL;
    int i, j;
    l_76[4][1] = p_55;
    for (g_73 = 0; (g_73 >= (-13)); --g_73)
    {
        int **l_79 = &l_75[2];
        (*l_79) = &g_73;
        if (g_4[8])
            continue;
        if (p_57)
            break;
    }
    g_81 = &g_73;

    ;
    for (p_57 = 0; (p_57 <= 57); p_57 = safe_add_func_uint8_t_u_u(p_57, 1))
    {
        int *l_84 = &l_76[4][1];
        unsigned short *l_111 = &g_93[2][1][1];
        int l_147 = (-1L);
        unsigned *l_193 = &g_194;
        int l_195 = 0xCD5CCBBCL;
        unsigned l_211 = 0xA0691BFDL;
        g_81 = l_84;

        ;
        if (p_56)
            break;
        for (g_28 = 0; (g_28 < 42); g_28 = safe_add_func_int8_t_s_s(g_28, 8))
        {
            unsigned l_87[9] = {0x0EFF2B3AL, 0x0EFF2B3AL, 9UL, 0x0EFF2B3AL, 0x0EFF2B3AL, 9UL, 0x0EFF2B3AL, 0x0EFF2B3AL, 9UL};
            unsigned short *l_92[5];
            unsigned l_94[3][3][8] = {{{0xA7A01C18L, 0xBF4A26E3L, 0x1E100AA3L, 0x2D068568L, 0x371DABD3L, 0x96AC63FEL, 0x371DABD3L, 0x2D068568L}, {0xA7A01C18L, 0xBF4A26E3L, 0x1E100AA3L, 0x2D068568L, 0x371DABD3L, 0x96AC63FEL, 0x371DABD3L, 0x2D068568L}, {0xA7A01C18L, 0xBF4A26E3L, 0x1E100AA3L, 0x2D068568L, 0x371DABD3L, 0x96AC63FEL, 0x371DABD3L, 0x2D068568L}}, {{0xA7A01C18L, 0xBF4A26E3L, 0x1E100AA3L, 0x2D068568L, 0x371DABD3L, 0x96AC63FEL, 0x371DABD3L, 0x2D068568L}, {0xA7A01C18L, 0xBF4A26E3L, 0x1E100AA3L, 0x2D068568L, 0x371DABD3L, 0x96AC63FEL, 0x371DABD3L, 0x2D068568L}, {0xA7A01C18L, 0xBF4A26E3L, 0x1E100AA3L, 0x2D068568L, 0x371DABD3L, 0x96AC63FEL, 0x371DABD3L, 0x2D068568L}}, {{0xA7A01C18L, 0xBF4A26E3L, 0x1E100AA3L, 0x2D068568L, 0x371DABD3L, 0x96AC63FEL, 0x371DABD3L, 0x2D068568L}, {0xA7A01C18L, 0xBF4A26E3L, 0x1E100AA3L, 0x2D068568L, 0x371DABD3L, 0x96AC63FEL, 0x371DABD3L, 0x2D068568L}, {0xA7A01C18L, 0xBF4A26E3L, 0x1E100AA3L, 0x2D068568L, 0x371DABD3L, 0x96AC63FEL, 0x371DABD3L, 0x2D068568L}}};
            int *l_104 = (void*)0;
            char l_129 = (-3L);
            int l_161 = 0x04132071L;
            unsigned char l_166 = 255UL;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_92[i] = &g_93[2][1][1];
            if (((l_87[2] , (*g_81)) && ((*l_84) <= (((func_60((safe_sub_func_uint16_t_u_u(g_73, 1L)), (((+g_4[3]) , p_56) || (func_60((l_94[1][1][0] = (safe_rshift_func_int8_t_s_s(l_87[2], 1))), p_57, g_28) , 0xBF216A9CL)), p_57) , (*g_81)) || (*l_84)) ^ (*l_84)))))
            {
                char l_112[4][7][3] = {{{0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}}, {{0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}}, {{0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}}, {{0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}, {0L, 0x41L, 1L}}};
                short l_113 = 0xB9C7L;
                int l_115 = (-1L);
                int i, j, k;
                for (p_55 = 8; (p_55 >= 0); p_55 -= 1)
                {
                    unsigned l_99 = 1UL;
                    int *l_114 = &g_73;
                    int i;
                    l_99 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(g_4[3], 6)), 0));
                    if (p_55)
                        continue;
                }
                for (p_55 = (-2); (p_55 >= 11); p_55 = safe_add_func_uint8_t_u_u(p_55, 5))
                {
                    l_84 = &g_73;

                    ;
                    if (p_57)
                        break;
                }
            }
            else
            {
                int *l_118 = (void*)0;
                unsigned short *l_134 = &g_135;
                unsigned short *l_137 = &g_135;
                int l_171 = 0x450A63B9L;
                int l_190 = 1L;
                g_81 = (l_118 = l_104);

                ;
                for (g_73 = 0; (g_73 > 1); g_73 = safe_add_func_uint16_t_u_u(g_73, 4))
                {
                    unsigned short **l_136[5][6][4] = {{{&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}}, {{&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}}, {{&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}}, {{&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}}, {{&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}, {&l_92[1], &l_92[1], &l_92[1], &l_111}}};
                    int l_138[2];
                    unsigned short l_160 = 65529UL;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_138[i] = 0x82BF1337L;
                }
                for (l_147 = 0; (l_147 == 6); l_147 = safe_add_func_int8_t_s_s(l_147, 9))
                {
                    return p_57;
                }
                for (p_55 = 0; (p_55 == (-12)); p_55--)
                {
                    char *l_172[5];
                    int l_173 = 0xB32F8ACAL;
                    int **l_175 = &l_84;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_172[i] = (void*)0;
                    g_153 = &g_154[2];

                    ;
                    l_174 = ((func_60(l_166, p_55, (safe_lshift_func_int16_t_s_s(p_56, 6))) < p_55) , (safe_lshift_func_int8_t_s_u((l_173 = func_60((*g_148), l_171, (*g_148))), p_55)));
                    if (p_55)
                    {
                        int ***l_176 = (void*)0;
                        int ***l_177 = &l_175;
                        (*l_177) = l_175;
                        if (p_55)
                            break;
                    }
                    else
                    {
                        unsigned char *l_188 = &l_166;
                        (*g_153) = (((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((p_57 && g_135), (func_60((p_57 ^ ((**l_175) = (g_189 = (safe_mod_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u(((!((*g_27) <= (2L ^ ((*l_111) = (safe_lshift_func_int16_t_s_s(1L, (0L >= (((*l_188) = (((0x60L > (+p_55)) <= p_57) , g_28)) | 6L)))))))) | g_135), 0xFCD1A432L)) != 0xDBL) , p_57), 0xB0A0D92CL))))), l_190, (*g_148)) , p_57))), 8)) <= 1L) == (-7L));
                        g_153 = &g_154[6];
                        l_118 = ((*l_175) = &g_154[6]);

                        ;
                        ;
                        (*g_153) = p_55;
                    }
                }

                ;
            }

            ;
            g_81 = &g_154[6];

            ;
        }

        ;
        ;
    }

    ;
    return p_57;


}







static unsigned func_60(unsigned short p_61, unsigned p_62, unsigned short p_63)
{
    int *l_72 = &g_73;
    for (p_61 = 27; (p_61 == 37); p_61++)
    {
        int **l_74 = &l_72;
        (*l_74) = l_72;
        (*l_74) = &g_73;
    }
    return p_62;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_93[i][j][k], "g_93[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_135, "g_135", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_154[i], "g_154[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_200[i], "g_200[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_202[i][j][k], "g_202[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_213[i][j][k], "g_213[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_378[i][j], "g_378[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_571, "g_571", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
