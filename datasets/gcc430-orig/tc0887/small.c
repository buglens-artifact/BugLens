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



static short g_4 = 0xABECL;
static const int g_15[5][7] = {{1L, 0L, 1L, 0L, 1L, 0L, 1L}, {1L, 0L, 1L, 0L, 1L, 0L, 1L}, {1L, 0L, 1L, 0L, 1L, 0L, 1L}, {1L, 0L, 1L, 0L, 1L, 0L, 1L}, {1L, 0L, 1L, 0L, 1L, 0L, 1L}};
static unsigned short g_17 = 0xDA02L;
static int * const g_37 = (void*)0;
static int g_63 = 0xF40B36FEL;
static int * volatile g_62 = &g_63;
static int *g_69 = &g_63;
static const int *g_71 = &g_15[2][0];
static const int **g_70 = &g_71;
static unsigned short g_83 = 0x7628L;
static int g_90 = (-2L);
static volatile unsigned short g_98 = 0xA8B5L;
static volatile unsigned short *g_97[10][4] = {{&g_98, &g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98, &g_98}};
static volatile unsigned short * const volatile * volatile g_96 = &g_97[8][0];
static short g_116 = 0xB148L;
static short *g_115 = &g_116;
static int g_141 = 0x641A1999L;
static char g_143[2] = {(-1L), (-1L)};
static unsigned g_155 = 0xEADAD783L;
static unsigned short **g_174 = (void*)0;
static unsigned short ***g_173 = &g_174;
static unsigned short ***g_178 = (void*)0;
static unsigned char g_187 = 251UL;
static unsigned char *g_202 = &g_187;
static const int *g_203 = &g_63;
static short *** volatile g_207 = (void*)0;
static short **g_210[8] = {&g_115, &g_115, &g_115, &g_115, &g_115, &g_115, &g_115, &g_115};
static short *g_255 = &g_116;
static unsigned g_267 = 1UL;
static short g_282[4] = {5L, 0L, 5L, 0L};
static int * volatile g_298 = &g_90;
static short * const *g_302 = &g_255;
static short * const **g_301 = &g_302;
static short g_326 = 0x1DFEL;
static char *g_340 = &g_143[0];
static char * const *g_339 = &g_340;
static char **g_346 = &g_340;
static unsigned short ** volatile * volatile * volatile g_369 = (void*)0;
static unsigned short ** volatile * volatile * volatile * volatile g_368 = &g_369;
static char g_377 = 0xECL;
static const volatile short g_388 = 0L;
static const volatile short *g_387 = &g_388;
static const volatile short * volatile * volatile g_386[2][5] = {{(void*)0, &g_387, (void*)0, &g_387, (void*)0}, {(void*)0, &g_387, (void*)0, &g_387, (void*)0}};
static const volatile short * volatile * volatile * const g_385 = &g_386[1][3];
static const volatile short * volatile * volatile * const volatile *g_384 = &g_385;
static const volatile short * volatile * volatile * const volatile **g_383 = &g_384;
static unsigned * volatile g_393 = &g_267;
static unsigned * volatile * const volatile g_392[4][4][1] = {{{&g_393}, {&g_393}, {&g_393}, {&g_393}}, {{&g_393}, {&g_393}, {&g_393}, {&g_393}}, {{&g_393}, {&g_393}, {&g_393}, {&g_393}}, {{&g_393}, {&g_393}, {&g_393}, {&g_393}}};
static unsigned * volatile * volatile g_395 = &g_393;
static unsigned g_520 = 1UL;
static unsigned *g_576 = &g_520;
static unsigned **g_575 = &g_576;
static unsigned ***g_574 = &g_575;
static unsigned char g_595[2][1] = {{7UL}, {7UL}};
static unsigned char g_598 = 0x65L;
static unsigned short g_624 = 0UL;
static unsigned *g_653 = &g_155;
static const unsigned g_656 = 4UL;
static const unsigned *g_657[9] = {&g_656, &g_656, (void*)0, &g_656, &g_656, (void*)0, &g_656, &g_656, (void*)0};
static const short *****g_672 = (void*)0;
static const short ******g_671 = &g_672;
static volatile unsigned g_725 = 1UL;
static volatile unsigned g_771 = 0xF153B970L;
static int * volatile g_826[3] = {(void*)0, (void*)0, (void*)0};
static int * volatile g_827 = &g_90;
static short ***g_838 = &g_210[6];
static short ****g_837[4][9] = {{&g_838, &g_838, &g_838, &g_838, &g_838, &g_838, &g_838, &g_838, &g_838}, {&g_838, &g_838, &g_838, &g_838, &g_838, &g_838, &g_838, &g_838, &g_838}, {&g_838, &g_838, &g_838, &g_838, &g_838, &g_838, &g_838, &g_838, &g_838}, {&g_838, &g_838, &g_838, &g_838, &g_838, &g_838, &g_838, &g_838, &g_838}};
static short *****g_836 = &g_837[3][6];
static short ******g_835 = &g_836;
static short *******g_834 = &g_835;



static short func_1(void);
static int * func_2(short p_3);
static short func_8(const int * const p_9, unsigned short p_10, int * p_11, int * p_12, char p_13);
static const unsigned short func_18(unsigned p_19);
static unsigned func_20(unsigned char p_21, unsigned p_22, const int * p_23, int p_24, int * const p_25);
static unsigned short ** func_40(unsigned p_41, unsigned short ** p_42, char p_43, int p_44);
static unsigned func_45(short * p_46, unsigned short p_47);
static short * func_48(short * p_49, int p_50, unsigned char p_51);
static short * func_52(int * p_53);
static int * func_54(short * const p_55, const short p_56, unsigned p_57);
static short func_1(void)
{
    int **l_858 = &g_69;
    (*l_858) = func_2(g_4);


    ;
    ;

    ;

    return (*g_387);
}







static int * func_2(short p_3)
{
    unsigned l_5 = 0xC9F3690FL;
    const int * const l_14 = &g_15[3][4];
    unsigned short *l_16 = &g_17;
    short *l_30 = (void*)0;
    int l_31 = (-1L);
    int l_36 = 0xBC775623L;
    char *l_816 = (void*)0;
    (*g_298) = (l_5 == (safe_rshift_func_int16_t_s_s(func_8(l_14, (((*l_16) = ((void*)0 != l_14)) >= func_18(func_20((safe_lshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((l_31 = 0x45B3L), 4)) >= ((((p_3 == ((safe_rshift_func_uint8_t_u_s(g_15[4][1], ((safe_sub_func_uint16_t_u_u(((void*)0 != l_30), 0x844BL)) != g_15[3][6]))) || 0L)) || (*l_14)) < p_3) ^ p_3)) | 65535UL), (*l_14))), p_3, &g_15[3][2], l_36, g_37))), &l_36, &l_36, (*l_14)), 7)));

    ;
    ;
    ;

    ;

    if (g_90)
        goto lbl_857;
    (*g_298) = ((*g_69) = (((p_3 || ((p_3 <= (safe_mul_func_uint16_t_u_u((*l_14), (*l_14)))) || ((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((**g_339), (0x8609L == ((***g_301) >= p_3)))), ((*g_202) = ((g_377 = (l_31 = (safe_lshift_func_int16_t_s_s(((*l_14) <= p_3), 7)))) > p_3)))) | (*l_14)))) != p_3) > g_143[0]));
lbl_857:
    for (g_141 = 7; (g_141 >= 0); g_141 -= 1)
    {
        int l_821 = 3L;
        unsigned short **l_825[7][8][1] = {{{&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}}, {{&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}}, {{&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}}, {{&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}}, {{&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}}, {{&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}}, {{&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}, {&l_16}}};
        int l_829 = 0x8E17C525L;
        short * const l_842 = (void*)0;
        unsigned short *****l_847 = (void*)0;
        int l_852 = 0x8C48805FL;
        short *****l_854 = &g_837[1][3];
        short *l_855[2][1][9] = {{{&g_282[1], &g_116, &g_282[0], &g_4, &g_4, &g_282[0], &g_116, &g_282[1], &g_282[0]}}, {{&g_282[1], &g_116, &g_282[0], &g_4, &g_4, &g_282[0], &g_116, &g_282[1], &g_282[0]}}};
        short *l_856 = &g_282[1];
        int i, j, k;
    }
    (*g_70) = (*g_70);
    return &g_63;



}







static short func_8(const int * const p_9, unsigned short p_10, int * p_11, int * p_12, char p_13)
{
    int *l_710 = (void*)0;
    int l_719 = (-5L);
    char *l_745 = &g_143[0];
    int l_807 = (-1L);
    for (g_4 = 0; (g_4 > (-14)); g_4 = safe_sub_func_int8_t_s_s(g_4, 9))
    {
        int *l_702 = &g_63;
        unsigned l_722 = 4294967288UL;
        unsigned short ** const *l_793 = &g_174;
        int **l_799 = &l_702;
        int ***l_798 = &l_799;
        for (g_116 = 9; (g_116 <= (-1)); --g_116)
        {
            if ((*g_69))
            {
                (*g_70) = p_12;


            }
            else
            {
                int l_705[8][5] = {{0xDF0F326EL, 0xDF0F326EL, 0xC9295CA9L, 0xDF0F326EL, 0xDF0F326EL}, {0xDF0F326EL, 0xDF0F326EL, 0xC9295CA9L, 0xDF0F326EL, 0xDF0F326EL}, {0xDF0F326EL, 0xDF0F326EL, 0xC9295CA9L, 0xDF0F326EL, 0xDF0F326EL}, {0xDF0F326EL, 0xDF0F326EL, 0xC9295CA9L, 0xDF0F326EL, 0xDF0F326EL}, {0xDF0F326EL, 0xDF0F326EL, 0xC9295CA9L, 0xDF0F326EL, 0xDF0F326EL}, {0xDF0F326EL, 0xDF0F326EL, 0xC9295CA9L, 0xDF0F326EL, 0xDF0F326EL}, {0xDF0F326EL, 0xDF0F326EL, 0xC9295CA9L, 0xDF0F326EL, 0xDF0F326EL}, {0xDF0F326EL, 0xDF0F326EL, 0xC9295CA9L, 0xDF0F326EL, 0xDF0F326EL}};
                int i, j;
                (*g_70) = l_702;

                ;
                (*p_11) = ((*g_575) == p_9);
                if (((safe_mul_func_uint16_t_u_u((*l_702), l_705[7][2])) || 0xA1BFL))
                {
                    for (g_17 = (-2); (g_17 != 2); g_17 = safe_add_func_uint16_t_u_u(g_17, 1))
                    {
                        (*p_12) = (p_13 >= p_13);
                        if ((*p_9))
                            continue;
                        (*g_70) = p_12;


                    }


                }
                else
                {
                    unsigned char **l_709 = (void*)0;
                    unsigned char ***l_708 = &l_709;
                    (*l_708) = &g_202;

                    ;
                }


            }


            if ((*g_71))
                continue;
            (*g_70) = l_710;

            ;
        }
    }


    (*g_70) = p_11;


    for (g_17 = 0; (g_17 > 27); ++g_17)
    {
        for (g_598 = 0; (g_598 < 30); g_598++)
        {
            (*p_12) = (*g_62);
        }
    }
    for (g_4 = 0; (g_4 >= 25); g_4 = safe_add_func_uint32_t_u_u(g_4, 1))
    {
        p_11 = p_12;


    }


    return l_807;
}







static const unsigned short func_18(unsigned p_19)
{
    short * const l_445 = (void*)0;
    const int l_446 = 0x8D41BAC3L;
    int l_449 = 1L;
    char *l_463 = &g_143[0];
    int l_505 = (-1L);
    int *l_513 = &l_449;
    int *l_514[3];
    short *l_563 = &g_116;
    const unsigned short * const ***l_619 = (void*)0;
    const int *l_647 = (void*)0;
    short ***l_677 = &g_210[0];
    short **** const l_676 = &l_677;
    short **** const *l_675 = &l_676;
    short **** const **l_674 = &l_675;
    int i;
    for (i = 0; i < 3; i++)
        l_514[i] = &l_505;
lbl_579:
    if ((*g_62))
    {
        unsigned *l_442 = &g_267;
        unsigned **l_441[3][9][9] = {{{&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}}, {{&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}}, {{&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}, {&l_442, (void*)0, &l_442, &l_442, &l_442, (void*)0, &l_442, &l_442, &l_442}}};
        int l_450 = 0x29D05F50L;
        short *l_457 = &g_282[2];
        unsigned short *l_460 = &g_83;
        unsigned short **l_459 = &l_460;
        char *l_464 = &g_377;
        int i, j, k;
        for (g_83 = 0; (g_83 >= 17); ++g_83)
        {
            int *l_438[2][2] = {{&g_90, &g_63}, {&g_90, &g_63}};
            short **l_458 = &l_457;
            int i, j;
            for (g_141 = 0; (g_141 <= 1); g_141 += 1)
            {
                int l_437 = 0xF501A3F5L;
                for (p_19 = 0; (p_19 <= 1); p_19 += 1)
                {
                    int *l_436 = &g_90;
                    for (g_90 = 0; (g_90 <= 1); g_90 += 1)
                    {
                        (*g_70) = l_436;

                        ;
                    }
                    (*g_69) = l_437;
                    (*g_70) = l_438[1][1];

                    ;
                    for (g_267 = 0; (g_267 <= 7); g_267 += 1)
                    {
                        (*g_69) = (safe_lshift_func_int16_t_s_u(((*g_115) = 0x8D8AL), p_19));
                    }
                }
                for (g_377 = 1; (g_377 >= 0); g_377 -= 1)
                {
                    unsigned ***l_443 = &l_441[0][8][5];
                    const int l_447 = 0xDC6C198FL;
                    if ((&g_393 == ((*l_443) = l_441[0][8][5])))
                    {
                        if ((*g_69))
                            break;
                    }
                    else
                    {
                        int *l_444 = &g_63;
                        (*g_70) = l_444;

                        ;
                    }
                    for (g_155 = 0; (g_155 <= 1); g_155 += 1)
                    {
                        return p_19;



                    }
                    for (g_326 = 0; (g_326 <= 7); g_326 += 1)
                    {
                        int l_448 = 0x9F8EEA09L;
                        int i, j;
                        (*g_70) = func_54(l_445, l_446, (l_447 >= (((l_446 && (*g_340)) <= l_448) == (*g_202))));

                        ;
                        l_450 = (l_449 = ((*g_69) = l_448));
                    }
                }
            }
            l_450 = ((((void*)0 == l_445) > (safe_add_func_uint32_t_u_u(g_143[1], (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(func_45(((*l_458) = l_457), p_19), 6)), p_19))))) && ((*g_173) == l_459));
            (*g_70) = func_54(l_445, p_19, (7L > (((**l_458) = p_19) > (safe_rshift_func_int8_t_s_u(((**g_302) & 0UL), 3)))));

            ;
            return p_19;


        }
        (*g_70) = &l_449;

        ;
        (*g_69) = (p_19 && (((*g_346) = l_463) != (l_464 = l_464)));
    }
    else
    {
        unsigned l_465[4][9] = {{0xB1A12764L, 0x5791FB3BL, 0xB85ECE36L, 0x5791FB3BL, 0xB1A12764L, 4294967295UL, 0xB1A12764L, 0x5791FB3BL, 0xB85ECE36L}, {0xB1A12764L, 0x5791FB3BL, 0xB85ECE36L, 0x5791FB3BL, 0xB1A12764L, 4294967295UL, 0xB1A12764L, 0x5791FB3BL, 0xB85ECE36L}, {0xB1A12764L, 0x5791FB3BL, 0xB85ECE36L, 0x5791FB3BL, 0xB1A12764L, 4294967295UL, 0xB1A12764L, 0x5791FB3BL, 0xB85ECE36L}, {0xB1A12764L, 0x5791FB3BL, 0xB85ECE36L, 0x5791FB3BL, 0xB1A12764L, 4294967295UL, 0xB1A12764L, 0x5791FB3BL, 0xB85ECE36L}};
        unsigned char *l_466 = &g_187;
        int l_491 = 2L;
        unsigned short l_507 = 0x9698L;
        int *l_515 = &l_491;
        const unsigned l_545 = 0x58D41E63L;
        int i, j;
        if ((l_465[1][3] >= (l_466 == &g_187)))
        {
lbl_524:
            (*g_70) = &g_15[3][4];

            ;
            return l_465[3][6];


        }
        else
        {
            unsigned char l_481 = 250UL;
            int *l_484 = &g_90;
            const int *l_521[2];
            int i;
            for (i = 0; i < 2; i++)
                l_521[i] = &l_446;
            (*g_69) = p_19;
            for (l_449 = 0; (l_449 <= (-19)); l_449--)
            {
                int l_471 = 0xED148A94L;
                unsigned short l_479 = 65535UL;
                int l_480 = 0xA7FF1CCAL;
                for (g_4 = 2; (g_4 > 26); g_4 = safe_add_func_uint8_t_u_u(g_4, 1))
                {
                    short l_478 = 0xDA16L;
                    (*g_70) = &l_446;

                    ;
                    l_481 = ((*g_69) = (g_98 & (l_480 = (((~(p_19 == (((l_471 = p_19) ^ p_19) & (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((**g_346), l_465[1][3])), 9)), l_478))))) | l_449) >= l_479))));
                }
                (*g_70) = (void*)0;

                ;
                for (g_90 = 3; (g_90 <= (-12)); g_90 = safe_sub_func_int16_t_s_s(g_90, 4))
                {
                    (*g_70) = &l_449;

                    ;
                }

                ;
                (*g_70) = l_484;

                ;
            }
            (*g_70) = (void*)0;

            ;
            if ((*g_62))
            {
                unsigned short l_492 = 65535UL;
                short *l_499 = &g_4;
                unsigned l_500 = 0x2A09ED96L;
                (*l_484) = ((*g_69) = (l_446 || p_19));
                (*l_484) = ((((*g_69) = ((safe_add_func_uint8_t_u_u((+(safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(p_19, 0x89B1L)), p_19))), p_19)) ^ 0L)) | (-1L)) > 0UL);
                for (g_377 = 27; (g_377 > 2); g_377 = safe_sub_func_int32_t_s_s(g_377, 1))
                {
                    return p_19;


                }
            }
            else
            {
                const char l_506 = (-10L);
                int *l_516 = &l_449;
                int l_519[2];
                unsigned char l_523[2][4] = {{250UL, 0x91L, 250UL, 0x91L}, {250UL, 0x91L, 250UL, 0x91L}};
                int *l_528 = &l_505;
                unsigned short *l_529 = &l_507;
                unsigned l_530 = 9UL;
                short **l_533 = (void*)0;
                const int *l_538 = (void*)0;
                char **l_539[7] = {&l_463, &g_340, &l_463, &g_340, &l_463, &g_340, &l_463};
                short *l_540 = (void*)0;
                short *l_541 = (void*)0;
                short *l_542 = &g_116;
                unsigned *l_543 = (void*)0;
                unsigned *l_544[7] = {&g_267, &l_530, &g_267, &l_530, &g_267, &l_530, &g_267};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_519[i] = 9L;
                if (p_19)
                {
                    unsigned short l_511[2];
                    int **l_522 = &l_514[0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_511[i] = 7UL;
                    for (l_449 = (-9); (l_449 <= (-4)); l_449++)
                    {
                        l_505 = (*l_484);
                        return l_506;


                    }
                    if (l_505)
                    {
                        char ***l_510 = &g_346;
                        int **l_512[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_512[i] = (void*)0;
                        (*g_69) = l_507;
                        (*g_70) = func_54((*g_302), (0x5143AEACL ^ (p_19 <= (safe_lshift_func_int8_t_s_s((p_19 && ((((*l_510) = (void*)0) != (void*)0) ^ (p_19 < (p_19 && (l_511[0] < 0x8E935249L))))), 1)))), p_19);

                        ;
                        ;
                        l_514[0] = (l_513 = l_484);

                        ;

                        l_516 = (l_515 = func_54(func_52((g_69 = &g_63)), (*g_255), p_19));

                        ;
                        ;
                    }
                    else
                    {
                        (*l_513) = (*g_62);
                        (*l_516) = (*g_69);
                    }

                    ;
                    ;
                    ;

                    ;
                    ;
                    (*l_522) = func_54(func_52(l_484), (**g_302), l_511[0]);


                    if (g_267)
                        goto lbl_525;
                }
                else
                {
                    if (l_523[0][0])
                    {
                        return p_19;


                    }
                    else
                    {
                        if (g_83)
                            goto lbl_524;
lbl_525:
                        (*g_70) = &l_505;

                        ;
                        (*l_528) = p_19;
                        (*g_70) = func_54((*g_302), ((*l_542) = (0UL ^ ((&g_340 != l_539[0]) > (*l_513)))), ((*g_393) = p_19));

                        ;
                    }

                    ;
                    ;
                    ;

                    ;
                    ;
                }

                ;
                ;
                ;

                ;
                ;
            }

            ;
            ;
            ;

            ;
        }

        ;
        ;
        ;

        ;
        return l_545;


    }

    ;
    if (p_19)
    {
        const int *l_559 = (void*)0;
        short **l_561 = &g_115;
        int l_562 = 1L;
        (*l_513) = ((safe_sub_func_uint32_t_u_u(g_187, g_90)) != (((*g_340) = (*g_340)) >= (safe_rshift_func_uint16_t_u_s((p_19 || (*g_255)), 12))));
        (*g_70) = func_54((**g_301), p_19, p_19);

        ;
        (*g_70) = &l_449;

        ;
        for (g_377 = 0; (g_377 <= 3); g_377 += 1)
        {
            unsigned char l_552 = 0x1CL;
            unsigned **l_573 = (void*)0;
            unsigned ***l_572 = &l_573;
            int i;
            (*l_513) = g_282[g_377];
            for (g_116 = 0; (g_116 <= 3); g_116 += 1)
            {
                short * const l_577 = &g_282[1];
            }
        }
    }
    else
    {
        short l_607[7][2];
        int *l_632 = &l_449;
        unsigned char l_636 = 255UL;
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
                l_607[i][j] = 8L;
        }
        for (g_4 = (-12); (g_4 < (-24)); --g_4)
        {
            unsigned l_583 = 1UL;
            short *l_603 = &g_282[0];
            int *l_606 = &l_449;
            short **l_635 = &g_115;
            const int *l_648 = &l_446;
            if (l_583)
            {
                unsigned l_602 = 0xD5054C03L;
                int l_605 = 0xCC7B7399L;
                for (l_449 = 12; (l_449 != (-22)); l_449 = safe_sub_func_uint32_t_u_u(l_449, 1))
                {
                    short *l_604[8];
                    int l_609 = 0L;
                    int *l_614 = (void*)0;
                    unsigned short ****l_621 = &g_178;
                    unsigned short *****l_620 = &l_621;
                    unsigned short *l_622 = &g_83;
                    unsigned short *l_623 = &g_624;
                    short **l_631[8][1][7] = {{{&l_604[2], (void*)0, &g_115, &l_563, &g_115, &l_563, &g_115}}, {{&l_604[2], (void*)0, &g_115, &l_563, &g_115, &l_563, &g_115}}, {{&l_604[2], (void*)0, &g_115, &l_563, &g_115, &l_563, &g_115}}, {{&l_604[2], (void*)0, &g_115, &l_563, &g_115, &l_563, &g_115}}, {{&l_604[2], (void*)0, &g_115, &l_563, &g_115, &l_563, &g_115}}, {{&l_604[2], (void*)0, &g_115, &l_563, &g_115, &l_563, &g_115}}, {{&l_604[2], (void*)0, &g_115, &l_563, &g_115, &l_563, &g_115}}, {{&l_604[2], (void*)0, &g_115, &l_563, &g_115, &l_563, &g_115}}};
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                        l_604[i] = (void*)0;
                    if (p_19)
                    {
                        short **l_586[8][9][3] = {{{&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}}, {{&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}}, {{&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}}, {{&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}}, {{&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}}, {{&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}}, {{&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}}, {{&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}, {&g_255, &g_115, &g_255}}};
                        short **l_587 = &g_255;
                        unsigned char *l_594 = &g_595[1][0];
                        unsigned char *l_596 = (void*)0;
                        unsigned char *l_597 = &g_598;
                        int l_601 = 0x25F4D44AL;
                        int i, j, k;
                        (*g_70) = func_54(((*l_587) = (*g_302)), ((safe_rshift_func_uint8_t_u_s((*g_202), 1)) <= (safe_mod_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((((*l_597) = ((*l_594) = 255UL)) <= (safe_mul_func_uint8_t_u_u((l_601 >= (0xFFD3F621L == (l_602 = (*g_69)))), (((l_603 = l_603) != l_604[2]) ^ 1UL)))), g_377)) & 1L), l_605))), (*g_393));

                        ;
                        (*g_69) = p_19;
                        (*g_70) = l_606;

                        ;
                    }
                    else
                    {
                        (*g_69) = l_607[5][0];
                        if (l_605)
                            goto lbl_579;
                        (*g_70) = l_606;

                        ;
                        (*g_69) = ((*l_606) >= p_19);
                    }

                    ;
                    if ((**g_70))
                    {
                        return p_19;



                    }
                    else
                    {
                        unsigned char l_608 = 0UL;
                        short * const l_610[4] = {&g_4, &g_326, &g_4, &g_326};
                        int **l_613[10][6] = {{&l_513, (void*)0, &l_606, &l_514[0], (void*)0, &g_69}, {&l_513, (void*)0, &l_606, &l_514[0], (void*)0, &g_69}, {&l_513, (void*)0, &l_606, &l_514[0], (void*)0, &g_69}, {&l_513, (void*)0, &l_606, &l_514[0], (void*)0, &g_69}, {&l_513, (void*)0, &l_606, &l_514[0], (void*)0, &g_69}, {&l_513, (void*)0, &l_606, &l_514[0], (void*)0, &g_69}, {&l_513, (void*)0, &l_606, &l_514[0], (void*)0, &g_69}, {&l_513, (void*)0, &l_606, &l_514[0], (void*)0, &g_69}, {&l_513, (void*)0, &l_606, &l_514[0], (void*)0, &g_69}, {&l_513, (void*)0, &l_606, &l_514[0], (void*)0, &g_69}};
                        int i, j;
                        l_609 = ((*g_69) = (~l_608));
                        (*g_70) = (g_69 = func_54(l_610[3], (((*g_298) != (p_19 ^ (safe_lshift_func_int16_t_s_u(l_605, 7)))) && 0xB6252735L), (*g_576)));

                        ;
                        (*g_70) = (l_614 = &g_63);

                        ;
                        l_513 = l_606;
                    }

                    ;
                    ;
                    (*l_614) = (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((l_619 != ((*l_620) = &g_173)), ((*l_623) = ((*l_622) = p_19)))), ((**g_339) = (safe_add_func_int16_t_s_s((((((*g_202) = (safe_mul_func_int16_t_s_s((-6L), ((g_143[0] | l_607[3][1]) < p_19)))) & 0x26L) & (*l_614)) == l_602), 0x1749L)))));

                    ;
                }
                if ((*l_606))
                    continue;
            }
            else
            {
                (*g_70) = l_632;

                ;
            }
            if ((((p_19 == (safe_sub_func_uint16_t_u_u(65535UL, (!(func_45(((*l_635) = l_563), ((*l_632) = (*l_606))) ^ ((*l_463) = p_19)))))) > 0xBCADL) || ((*l_632) != ((p_19 > 0xE5L) == 65535UL))))
            {
                int l_639[6] = {0x561F99A8L, (-1L), 0x561F99A8L, (-1L), 0x561F99A8L, (-1L)};
                int i;
                (*g_298) = l_636;
                for (g_187 = 0; (g_187 > 43); g_187 = safe_add_func_int16_t_s_s(g_187, 3))
                {
                    (*g_69) = (g_282[3] | 0xF0119B53L);
                    (*l_632) = l_639[2];
                }
                if ((safe_add_func_int8_t_s_s(0x74L, ((*g_202) = func_45(&l_607[5][0], l_639[2])))))
                {
                    for (l_505 = 0; (l_505 > (-15)); l_505 = safe_sub_func_int16_t_s_s(l_505, 1))
                    {
                        return p_19;



                    }
                    for (g_63 = 0; (g_63 < (-16)); g_63 = safe_sub_func_uint16_t_u_u(g_63, 4))
                    {
                        unsigned l_646 = 4294967292UL;
                        if (l_646)
                            break;
                        l_647 = (*g_70);
                    }
                    (*g_70) = (*g_70);
                    if ((*l_632))
                        break;
                }
                else
                {
                    (*g_70) = l_648;

                    ;
                }
            }
            else
            {
                short *l_661 = &g_326;
                int l_666 = 1L;
                if ((*g_69))
                {
                    const unsigned *l_655 = &g_656;
                    const unsigned **l_654[9] = {&l_655, &l_655, (void*)0, &l_655, &l_655, (void*)0, &l_655, &l_655, (void*)0};
                    int l_658 = 0x6AC15818L;
                    const short *******l_673 = &g_671;
                    short *l_680 = &g_4;
                    unsigned short *l_691 = &g_83;
                    unsigned short * const *l_690 = &l_691;
                    unsigned short * const **l_689 = &l_690;
                    unsigned short * const ** const *l_688 = &l_689;
                    unsigned short * const ** const **l_687[1];
                    short ***l_692 = &l_635;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_687[i] = &l_688;
                    if ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((g_653 = &p_19) == (g_657[8] = (void*)0)), l_658)) && (((safe_sub_func_uint8_t_u_u(func_45(l_661, (((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(l_666, ((safe_add_func_int32_t_s_s((((*g_340) = ((safe_lshift_func_int8_t_s_s((l_666 || (((*l_673) = g_671) == l_674)), 2)) < ((+func_45(&l_607[4][1], p_19)) != (*l_648)))) <= l_658), p_19)) || l_666))), 11)) && (*l_606)) && l_666)), 0L)) ^ (*l_632)) > p_19)), p_19)))
                    {
                        if ((*l_513))
                            break;
                        if (p_19)
                            break;
                    }
                    else
                    {
                        (*g_70) = (void*)0;

                        ;
                    }

                    ;
                    for (g_90 = 0; (g_90 != (-27)); g_90--)
                    {
                        const short *l_684 = &g_282[1];
                        const short **l_683 = &l_684;
                        int l_685[9][5][3] = {{{5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}}, {{5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}}, {{5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}}, {{5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}}, {{5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}}, {{5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}}, {{5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}}, {{5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}}, {{5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}, {5L, 0x93036595L, 0x4C196D13L}}};
                        int i, j, k;
                        (*g_70) = func_54((*g_302), func_45(l_680, p_19), ((*g_576) = ((l_685[6][0][1] = (0xE6L | (safe_add_func_uint16_t_u_u(p_19, (l_683 != (void*)0))))) >= (safe_unary_minus_func_int16_t_s(((void*)0 == l_687[0]))))));

                        ;
                        (*g_70) = &l_505;

                        ;
                        (*l_632) = (&l_635 != ((***l_674) = l_692));

                        ;
                        if ((*l_632))
                            continue;
                    }


                    if (l_658)
                        continue;

                    return p_19;



                }
                else
                {
                    unsigned l_697 = 0UL;
                    for (g_90 = 0; (g_90 <= 8); ++g_90)
                    {
                        (*g_69) = (safe_mod_func_int16_t_s_s(l_666, l_697));
                        if (l_666)
                            continue;
                    }
                }
            }
        }

        ;
    }

    ;
    (*l_513) = 0xD88DED8CL;
    (*g_70) = func_54((*g_302), p_19, (*l_513));

    ;
    return p_19;


}







static unsigned func_20(unsigned char p_21, unsigned p_22, const int * p_23, int p_24, int * const p_25)
{
    unsigned short l_60 = 0xF913L;
    short **l_254[2];
    unsigned short *l_433[10] = {(void*)0, (void*)0, &g_83, (void*)0, (void*)0, &g_83, (void*)0, (void*)0, &g_83, (void*)0};
    unsigned short **l_432[5][2][8] = {{{&l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6]}, {&l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6]}}, {{&l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6]}, {&l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6]}}, {{&l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6]}, {&l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6]}}, {{&l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6]}, {&l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6]}}, {{&l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6]}, {&l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6], &l_433[6]}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_254[i] = &g_115;
    for (p_24 = 23; (p_24 < 10); p_24 = safe_sub_func_int16_t_s_s(p_24, 7))
    {
        return p_21;
    }
    l_432[4][0][0] = func_40(func_45((g_255 = func_48(func_52(func_54(&g_4, p_24, (l_60 && ((g_4 || p_21) <= 0x9784L)))), (*p_23), g_15[3][4])), g_15[3][5]), g_174, p_21, p_21);


    ;
    ;


    return g_63;
}







static unsigned short ** func_40(unsigned p_41, unsigned short ** p_42, char p_43, int p_44)
{
    unsigned short ****l_371 = (void*)0;
    unsigned short *****l_370 = &l_371;
    unsigned short ******l_372 = &l_370;
    int l_378 = 8L;
    short *** const * const **l_389 = (void*)0;
    short *** const * const l_391 = (void*)0;
    short *** const * const *l_390 = &l_391;
    int l_424 = 0x4040A8EDL;
    int l_427 = 0x8E316A12L;
    const char *l_430 = &g_143[1];
    const char * const *l_429[9][4][6] = {{{&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}}, {{&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}}, {{&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}}, {{&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}}, {{&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}}, {{&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}}, {{&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}}, {{&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}}, {{&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430}}};
    const char * const ** const l_428 = &l_429[1][0][1];
    unsigned short **l_431 = (void*)0;
    int i, j, k;
    (*g_69) = (((g_368 == ((*l_372) = l_370)) ^ (safe_add_func_int32_t_s_s((g_15[3][4] != (~0xBB404B24L)), (safe_mod_func_uint32_t_u_u(g_377, (*g_69)))))) >= (l_378 || ((safe_sub_func_int8_t_s_s(((g_383 == (l_390 = (void*)0)) <= 7L), (*g_202))) == 0L)));

    ;
    if ((((void*)0 != &g_383) && p_41))
    {
        unsigned * volatile * volatile *l_394 = &g_395;
        unsigned *l_397 = &g_267;
        unsigned **l_396[7][10] = {{&l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0}, {&l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0}, {&l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0}, {&l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0}, {&l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0}, {&l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0}, {&l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0, &l_397, (void*)0}};
        short *l_411 = (void*)0;
        int l_413 = 7L;
        unsigned l_425 = 5UL;
        int i, j;
        (*l_394) = g_392[0][1][0];
        if ((((void*)0 == &g_69) < (p_44 != ((*l_394) != l_396[2][2]))))
        {
            char l_402[8][5] = {{0x8BL, 7L, 0x14L, 7L, 0x8BL}, {0x8BL, 7L, 0x14L, 7L, 0x8BL}, {0x8BL, 7L, 0x14L, 7L, 0x8BL}, {0x8BL, 7L, 0x14L, 7L, 0x8BL}, {0x8BL, 7L, 0x14L, 7L, 0x8BL}, {0x8BL, 7L, 0x14L, 7L, 0x8BL}, {0x8BL, 7L, 0x14L, 7L, 0x8BL}, {0x8BL, 7L, 0x14L, 7L, 0x8BL}};
            int i, j;
            (*g_70) = &g_90;

            ;
            (*g_69) = (safe_sub_func_int16_t_s_s(0x3469L, (p_43 <= (safe_rshift_func_int16_t_s_u((0x30L >= (l_402[6][0] < (~((void*)0 == &g_383)))), (~0xD3BBL))))));
            (*g_70) = (*g_70);
        }
        else
        {
            short *l_403[4][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
            int l_406 = (-1L);
            short **l_412 = &g_255;
            short * const l_426 = &g_116;
            int i, j;
            (*g_70) = func_54(l_426, l_406, l_427);

            ;
        }

        ;
        (*g_69) = ((void*)0 != l_428);
    }
    else
    {
        (*g_69) = (p_44 <= (*g_255));
    }


    return l_431;


}







static unsigned func_45(short * p_46, unsigned short p_47)
{
    int *l_258 = &g_63;
    short ** const *l_304 = (void*)0;
    for (p_47 = 0; (p_47 == 37); ++p_47)
    {
        short * const l_259 = &g_4;
        int l_260 = 0x1CC97199L;
        int *l_290 = &g_90;
        unsigned char l_332 = 1UL;
        for (g_116 = 7; (g_116 >= 0); g_116 -= 1)
        {
            (*g_70) = l_258;

            ;
            (*g_70) = func_54(l_259, (*p_46), g_90);
        }
    }
    for (g_187 = 0; (g_187 <= 3); g_187 += 1)
    {
        for (g_116 = 3; (g_116 >= 0); g_116 -= 1)
        {
            (*g_70) = l_258;

            ;
        }
        return g_282[1];
    }
    (*g_70) = func_54(p_46, (*l_258), g_282[2]);

    ;
    for (g_187 = 8; (g_187 >= 19); g_187 = safe_add_func_int32_t_s_s(g_187, 5))
    {
        for (p_47 = 0; (p_47 <= 3); p_47 += 1)
        {
            int l_367[2][10][1] = {{{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}};
            int i, j, k;
            l_367[1][5][0] = ((*l_258) = (safe_rshift_func_uint16_t_u_u(g_282[p_47], l_367[1][5][0])));
        }
        (*g_70) = func_54(p_46, (**g_302), (*l_258));
    }
    return p_47;
}







static short * func_48(short * p_49, int p_50, unsigned char p_51)
{
    int l_92[10][1] = {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}};
    int l_107[1];
    unsigned short ***l_176 = &g_174;
    int *l_179 = &l_107[0];
    short *l_253 = &g_116;
    int i, j;
    for (i = 0; i < 1; i++)
        l_107[i] = (-5L);
    (*g_69) = p_50;
    if ((+(*g_62)))
    {
        unsigned l_110 = 1UL;
        short * const l_114[4][2] = {{&g_4, &g_4}, {&g_4, &g_4}, {&g_4, &g_4}, {&g_4, &g_4}};
        int l_158 = 0x8B728ABAL;
        unsigned *l_172[6][2][2] = {{{&g_155, &g_155}, {&g_155, &g_155}}, {{&g_155, &g_155}, {&g_155, &g_155}}, {{&g_155, &g_155}, {&g_155, &g_155}}, {{&g_155, &g_155}, {&g_155, &g_155}}, {{&g_155, &g_155}, {&g_155, &g_155}}, {{&g_155, &g_155}, {&g_155, &g_155}}};
        unsigned short ****l_175 = &g_173;
        unsigned short ****l_177[2];
        int *l_185[4][7][1] = {{{&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}}, {{&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}}, {{&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}}, {{&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}, {&l_107[0]}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_177[i] = (void*)0;
        for (g_4 = 0; (g_4 <= 0); g_4 += 1)
        {
            int l_102 = 0x42B182C9L;
        }
        if (g_4)
            goto lbl_180;
lbl_180:
        l_179 = func_54(&g_4, (((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(65531UL, 0xA4C1L)), (!(*g_115)))) != (((+(safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((~(safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u(((safe_mod_func_int32_t_s_s(p_51, (g_155 = 0xDC0AD4A3L))) != l_110))) >= ((((*l_175) = g_173) == (g_178 = l_176)) | l_92[2][0])), p_51))), g_143[0])), 0x7BL))) & (*g_62)) ^ (*g_71))) == p_51), g_143[1]);

        ;
        ;
        for (g_4 = 0; (g_4 > (-5)); g_4 = safe_sub_func_uint16_t_u_u(g_4, 3))
        {
            short **l_204 = &g_115;
            int l_228 = 0xFF5F6CEBL;
            (*g_69) = ((void*)0 == p_49);
            for (g_63 = 0; (g_63 <= 1); g_63 += 1)
            {
                for (l_158 = 0; (l_158 <= 1); l_158 += 1)
                {
                    int i, j, k;
                    (*g_70) = l_172[(g_63 + 3)][l_158][l_158];

                    ;
                }
            }
            if ((p_51 > p_50))
            {
                unsigned char *l_186[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_186[i] = &g_187;
                (*l_179) = 0x38BF02DCL;
                (*l_179) = l_158;
                l_185[2][3][0] = func_54(&g_116, (*l_179), (safe_add_func_int16_t_s_s(1L, (*p_49))));
                (*l_179) = (g_155 & (p_51 = p_50));
            }
            else
            {
                unsigned l_188 = 1UL;
                int l_189[5][5][1] = {{{0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}}, {{0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}}, {{0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}}, {{0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}}, {{0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}, {0x3AA2F07EL}}};
                unsigned char **l_211 = (void*)0;
                int i, j, k;
                (*g_70) = func_54(&g_4, (*p_49), (((246UL == ((l_189[2][4][0] = ((0x2E47CAD9L ^ (((*l_179) == 0x1DC0L) & 0xF2L)) <= l_188)) >= (g_155 = p_51))) != (*g_62)) == l_188));

                ;
                (*g_70) = &p_50;

                ;
                for (g_141 = 0; (g_141 <= (-25)); g_141--)
                {
                    const unsigned l_212 = 5UL;
                    int l_221 = 8L;
                    for (l_110 = (-3); (l_110 <= 8); l_110 = safe_add_func_int16_t_s_s(l_110, 1))
                    {
                        int l_196 = 1L;
                        char *l_197[9][4];
                        unsigned char *l_201 = (void*)0;
                        unsigned char **l_200[9][4] = {{&l_201, (void*)0, &l_201, &l_201}, {&l_201, (void*)0, &l_201, &l_201}, {&l_201, (void*)0, &l_201, &l_201}, {&l_201, (void*)0, &l_201, &l_201}, {&l_201, (void*)0, &l_201, &l_201}, {&l_201, (void*)0, &l_201, &l_201}, {&l_201, (void*)0, &l_201, &l_201}, {&l_201, (void*)0, &l_201, &l_201}, {&l_201, (void*)0, &l_201, &l_201}};
                        short **l_206 = &g_115;
                        short ***l_205 = &l_206;
                        short **l_209 = &g_115;
                        short ***l_208[6][3] = {{&l_209, (void*)0, &l_209}, {&l_209, (void*)0, &l_209}, {&l_209, (void*)0, &l_209}, {&l_209, (void*)0, &l_209}, {&l_209, (void*)0, &l_209}, {&l_209, (void*)0, &l_209}};
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_197[i][j] = &g_143[0];
                        }
                        (*l_179) = (safe_sub_func_int8_t_s_s((g_143[0] = l_196), (0x0FFAL > (safe_lshift_func_int8_t_s_u((&p_51 != (g_202 = &g_187)), 1)))));
                        g_203 = ((*g_70) = (void*)0);

                        ;
                        ;
                        g_210[6] = ((*l_205) = (l_204 = &p_49));

                        ;
                        ;
                        l_211 = &g_202;

                        ;
                    }
                    if (p_50)
                        continue;
                    if ((*g_62))
                        break;
                    (*g_70) = func_54(p_49, l_212, (((*g_202) = (*g_202)) || (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u(((l_221 = (p_51 || (*g_62))) || (safe_mul_func_int16_t_s_s((*g_115), ((*g_202) == ((safe_add_func_int16_t_s_s(l_189[2][4][0], (safe_rshift_func_int16_t_s_u(((&g_187 == (void*)0) <= l_189[2][2][0]), 1)))) && l_221))))), (*g_202))) & 1L), l_212)), 7)), l_212))));

                    ;
                }

                ;
                ;
                ;
            }

            ;
            if (l_228)
                break;
        }

        ;

        ;

    }
    else
    {
        int l_239 = (-2L);
        unsigned *l_240 = (void*)0;
        unsigned *l_241 = &g_155;
        unsigned char l_250 = 0xE7L;
        (*g_69) = (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((*l_241) = ((safe_mul_func_int16_t_s_s((*l_179), 0xA0D0L)) | (safe_lshift_func_uint8_t_u_s(l_239, 6)))) != (*g_203)), 4)), ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((*p_49), (safe_mul_func_uint16_t_u_u((0x0CECDE52L >= l_250), 0UL)))), 7)), (*l_179))) < 0x35L))), 0));
        l_179 = func_54(p_49, (&g_115 != (void*)0), ((safe_sub_func_int16_t_s_s((*p_49), l_250)) | g_15[2][6]));

        ;
    }

    ;
    ;
    ;
    ;

    return l_253;




}







static short * func_52(int * p_53)
{
    short l_66[8] = {(-9L), 0x6116L, (-9L), 0x6116L, (-9L), 0x6116L, (-9L), 0x6116L};
    const int **l_75 = &g_71;
    unsigned short *l_82 = &g_83;
    int i;
    for (g_4 = 5; (g_4 >= 0); g_4 -= 1)
    {
        int *l_68 = &g_63;
        int **l_67[1][2];
        const int ***l_72 = &g_70;
        const int **l_74 = &g_71;
        const int ***l_73 = &l_74;
        unsigned char l_88[4][2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_67[i][j] = &l_68;
        }
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_88[i][j] = 251UL;
        }
        g_62 = (g_69 = func_54(&g_4, l_66[(g_4 + 1)], l_66[4]));
        l_75 = ((*l_73) = ((*l_72) = g_70));
        for (g_63 = 1; (g_63 <= 7); g_63 += 1)
        {
            int l_79 = 0x08F94BBBL;
            short *l_84 = &l_66[(g_4 + 1)];
            int l_91[6][5] = {{3L, 0x048CB009L, 3L, 0x048CB009L, 3L}, {3L, 0x048CB009L, 3L, 0x048CB009L, 3L}, {3L, 0x048CB009L, 3L, 0x048CB009L, 3L}, {3L, 0x048CB009L, 3L, 0x048CB009L, 3L}, {3L, 0x048CB009L, 3L, 0x048CB009L, 3L}, {3L, 0x048CB009L, 3L, 0x048CB009L, 3L}};
            int i, j;
            if ((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint16_t_u_u(((g_15[3][4] != l_79) == (*l_68)), (safe_add_func_uint8_t_u_u(l_79, ((l_82 != &g_83) && (-9L)))))))))
            {
                short *l_85 = &g_4;
                return l_85;


            }
            else
            {
                unsigned short **l_87 = &l_82;
                unsigned short ***l_86 = &l_87;
                int l_89 = 0x4E98E2CFL;
                for (g_83 = 0; g_83 < 8; g_83 += 1)
                {
                    l_66[g_83] = 0x6AC6L;
                }
                l_89 = ((&l_82 == ((*l_86) = &l_82)) | (l_88[2][0] > g_4));
                g_90 = (*p_53);
            }
            l_91[4][1] = (*p_53);
        }
    }
    return &g_4;


}







static int * func_54(short * const p_55, const short p_56, unsigned p_57)
{
    unsigned char l_61 = 255UL;
    int *l_64[2][9] = {{&g_63, &g_63, (void*)0, (void*)0, &g_63, &g_63, &g_63, (void*)0, (void*)0}, {&g_63, &g_63, (void*)0, (void*)0, &g_63, &g_63, &g_63, (void*)0, (void*)0}};
    int **l_65 = &l_64[1][6];
    int i, j;
    (*g_62) = (0xD8L && (0x56L <= l_61));
    (*l_65) = l_64[1][5];
    return &g_63;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_15[i][j], "g_15[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_143[i], "g_143[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_282[i], "g_282[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_595[i][j], "g_595[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    transparent_crc(g_771, "g_771", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
