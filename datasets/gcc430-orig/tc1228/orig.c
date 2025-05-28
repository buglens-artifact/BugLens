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



static char g_8 = 0x19L;
static unsigned short g_29 = 0x2AA5L;
static int g_65 = 0x58698962L;
static int *g_68 = &g_65;
static int **g_67[1] = {&g_68};
static int ** volatile g_76[10] = {&g_68, (void*)0, &g_68, (void*)0, &g_68, (void*)0, &g_68, (void*)0, &g_68, (void*)0};
static short g_104 = (-1L);
static short g_106 = 0x0179L;
static unsigned char g_108 = 1UL;
static char g_110 = 0xF1L;
static int ***g_115 = &g_67[0];
static unsigned short g_116 = 0x6CF9L;
static char g_163 = 0x68L;
static int g_181 = 0x04D2973CL;
static int * volatile g_185 = &g_181;
static unsigned char g_207 = 8UL;
static unsigned g_208 = 0x93F3FD84L;
static unsigned short g_243 = 0UL;
static unsigned short *g_271 = &g_29;
static unsigned short **g_270 = &g_271;
static unsigned short *** volatile g_269[7] = {&g_270, &g_270, &g_270, &g_270, &g_270, &g_270, &g_270};
static int g_290 = 0xDD005BDBL;
static int g_293 = 0x9EC09B07L;
static unsigned g_296 = 0xAF3A27D7L;
static unsigned char g_297 = 0xB1L;
static short *g_327 = &g_106;
static short **g_326 = &g_327;
static short *** volatile g_325[2][2] = {{&g_326, &g_326}, {&g_326, &g_326}};
static volatile unsigned short g_369 = 1UL;
static short g_440 = 0xD97CL;
static volatile unsigned g_455 = 0x3B2AC8EAL;
static unsigned *g_471 = &g_208;
static unsigned **g_470 = &g_471;
static int * volatile g_472 = &g_181;
static int * volatile g_480 = (void*)0;
static int * volatile g_481[2][10] = {{&g_290, &g_290, &g_290, &g_290, &g_290, &g_290, &g_290, &g_290, &g_290, &g_290}, {&g_290, &g_290, &g_290, &g_290, &g_290, &g_290, &g_290, &g_290, &g_290, &g_290}};
static char g_499 = 0xFDL;
static int * volatile g_528 = &g_65;
static int *g_542 = &g_65;
static int ** volatile g_541 = &g_542;



static int func_1(void);
static int * func_2(unsigned short p_3, short p_4, unsigned char p_5, int * p_6, int * p_7);
static unsigned char func_11(unsigned p_12, unsigned p_13, int p_14, unsigned p_15);
static unsigned func_16(int * p_17, int p_18, unsigned char p_19, short p_20, char p_21);
static int * func_22(unsigned char p_23, unsigned p_24);
static int func_27(unsigned p_28);
static int ** func_31(int ** p_32, int ** p_33);
static int ** func_34(char p_35, unsigned short p_36, int p_37, int * p_38);
static short func_43(short p_44, int * p_45, int ** p_46);
static unsigned func_49(char p_50, unsigned char p_51, int * p_52, short p_53, unsigned p_54);
static int func_1(void)
{
    unsigned char l_520 = 0UL;
    int l_536 = 9L;
    short l_537 = 0xACEAL;
    unsigned l_538[10];
    unsigned char l_543 = 0UL;
    int *l_544 = (void*)0;
    int **l_573 = &l_544;
    int i;
    for (i = 0; i < 10; i++)
        l_538[i] = 0UL;
    (*l_573) = func_2(((g_8 > g_8) ^ (safe_sub_func_int16_t_s_s((0x88L == func_11(g_8, g_8, g_8, func_16(func_22(g_8, ((safe_add_func_int32_t_s_s(func_27(g_29), 0x998F5745L)) | l_520)), l_536, l_537, l_538[5], l_538[5]))), l_543))), l_543, g_104, l_544, l_544);
    return (*g_472);
}







static int * func_2(unsigned short p_3, short p_4, unsigned char p_5, int * p_6, int * p_7)
{
    char l_547 = 0xEFL;
    int **l_548[8][10][3] = {{{&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}}, {{&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}}, {{&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}}, {{&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}}, {{&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}}, {{&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}}, {{&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}}, {{&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}, {&g_542, (void*)0, &g_68}}};
    int *****l_561 = (void*)0;
    unsigned char *l_564 = (void*)0;
    unsigned char **l_563[5] = {&l_564, &l_564, &l_564, &l_564, &l_564};
    unsigned char ***l_562 = &l_563[1];
    int *l_565 = &g_290;
    int l_568 = (-1L);
    unsigned short l_572[10] = {0xA8AEL, 0x4EB3L, 0xA8AEL, 0x4EB3L, 0xA8AEL, 0x4EB3L, 0xA8AEL, 0x4EB3L, 0xA8AEL, 0x4EB3L};
    int i, j, k;
    if ((!((safe_add_func_uint16_t_u_u(((func_49(l_547, (((**g_326) = ((~((l_547 != (*g_68)) >= l_547)) == func_43((g_499 , (0UL || 0x78L)), (p_6 = (p_7 = p_6)), func_34(p_4, p_4, g_207, (*g_541))))) , 255UL), (**g_115), p_4, (**g_470)) | 4294967295UL) ^ 0x7DCFB766L), 0x2393L)) == p_5)))
    {
        unsigned char **l_549 = (void*)0;
        unsigned char ***l_550 = &l_549;
        unsigned char *l_553 = &g_108;
        unsigned char **l_552 = &l_553;
        unsigned char ***l_551 = &l_552;
        int l_560 = 0xE211B655L;
        (*l_551) = ((*l_550) = l_549);
        (*g_542) = (safe_mul_func_uint16_t_u_u((g_455 , (safe_mod_func_int16_t_s_s(((((((*g_471) , (~0L)) >= (safe_add_func_int16_t_s_s((((!l_560) , l_561) != (void*)0), l_560))) | (!(l_562 == (p_5 , &l_563[1])))) , p_5) | l_560), (*g_327)))), (*g_271)));
        return l_565;
    }
    else
    {
        short l_569 = 0xFFEFL;
        (*g_472) = (+((*l_565) = ((safe_add_func_int8_t_s_s(p_5, (((**g_326) = (+(!(l_568 | l_569)))) != 0xF571L))) && ((**g_470) <= (((safe_mul_func_int16_t_s_s(p_5, (g_207 , l_572[3]))) , p_5) && p_3)))));
        return p_6;
    }
}







static unsigned char func_11(unsigned p_12, unsigned p_13, int p_14, unsigned p_15)
{
    int *l_540 = &g_290;
    l_540 = l_540;
    (*g_541) = ((**g_115) = l_540);
    return g_65;
}







static unsigned func_16(int * p_17, int p_18, unsigned char p_19, short p_20, char p_21)
{
    unsigned char l_539[6];
    int i;
    for (i = 0; i < 6; i++)
        l_539[i] = 0xDDL;
    (*p_17) = l_539[4];
    return l_539[1];
}







static int * func_22(unsigned char p_23, unsigned p_24)
{
    int *l_523 = (void*)0;
    int *l_526 = &g_293;
    int l_527 = 0x8860A4EFL;
    int *l_531 = &l_527;
    int *l_534 = &g_290;
    int *l_535 = &g_65;
    for (p_24 = (-27); (p_24 != 33); ++p_24)
    {
        l_523 = l_523;
    }
    (*g_528) = (p_24 != ((*g_327) = (l_527 = ((((*l_526) = g_290) , (g_181 && (p_24 | (255UL && p_24)))) >= l_527))));
    for (g_207 = 25; (g_207 < 57); g_207 = safe_add_func_int8_t_s_s(g_207, 3))
    {
        int *l_533[8][8][2] = {{{&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}}, {{&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}}, {{&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}}, {{&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}}, {{&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}}, {{&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}}, {{&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}}, {{&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}, {&g_290, &g_181}}};
        int i, j, k;
        (**g_115) = l_531;
        if ((*g_68))
        {
            (*g_68) = (*g_528);
            (**g_115) = &l_527;
        }
        else
        {
            int *l_532[5][9][4] = {{{&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}}, {{&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}}, {{&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}}, {{&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}}, {{&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}, {&g_65, &l_527, &g_65, &l_527}}};
            int i, j, k;
            return l_534;
        }
        (***g_115) = p_24;
    }
    return l_535;
}







static int func_27(unsigned p_28)
{
    unsigned l_30[3][4] = {{2UL, 6UL, 4294967295UL, 4294967295UL}, {2UL, 6UL, 4294967295UL, 4294967295UL}, {2UL, 6UL, 4294967295UL, 4294967295UL}};
    int l_70 = 0L;
    unsigned short **l_496 = &g_271;
    unsigned char *l_502 = &g_207;
    unsigned char *l_518 = &g_108;
    int *l_519 = &g_65;
    int i, j;
    for (g_29 = 0; (g_29 <= 2); g_29 += 1)
    {
        int *l_64 = &g_65;
        int **l_63 = &l_64;
        int l_71 = (-6L);
        int *l_180 = &g_181;
        int **l_179[10] = {&l_180, &l_180, &l_180, &l_180, &l_180, &l_180, &l_180, &l_180, &l_180, &l_180};
        int *l_183 = (void*)0;
        unsigned char l_498 = 0x17L;
        int i;
        for (p_28 = 0; (p_28 <= 2); p_28 += 1)
        {
            int ***l_66 = &l_63;
            int l_69 = 0xB9ABC19AL;
            int *l_178 = &l_69;
            unsigned short **l_497 = &g_271;
            int i, j;
        }
        (**g_115) = &l_70;
        return (*g_185);
    }
    (***g_115) = (safe_add_func_uint8_t_u_u(((*l_502) = l_30[1][3]), ((*l_518) = (safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x21L, (safe_unary_minus_func_int16_t_s((((safe_lshift_func_int16_t_s_s(l_30[2][3], 1)) , (void*)0) != ((safe_add_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(((((-9L) >= (safe_mul_func_int8_t_s_s((((***g_115) & ((p_28 && l_30[1][2]) & ((((safe_div_func_uint8_t_u_u(l_30[2][0], 0xE7L)) && 7L) < 1UL) | l_30[1][0]))) , p_28), 0x97L))) , l_70) & p_28), 2)) , 0x0218L) ^ 1UL), 0x2647L)) , &g_326)))))), p_28)))));
    (**g_115) = &l_70;
    (**g_115) = l_519;
    return p_28;
}







static int ** func_31(int ** p_32, int ** p_33)
{
    char l_189 = 0x92L;
    int ****l_191 = (void*)0;
    int *****l_190 = &l_191;
    int l_198[8];
    unsigned short *l_199 = &g_116;
    unsigned char *l_206 = &g_207;
    unsigned char *l_209 = &g_108;
    unsigned char l_212 = 253UL;
    char *l_213 = &g_163;
    unsigned *l_345 = &g_208;
    unsigned l_371[5];
    int **l_483[6][1][7] = {{{(void*)0, (void*)0, &g_68, &g_68, &g_68, &g_68, &g_68}}, {{(void*)0, (void*)0, &g_68, &g_68, &g_68, &g_68, &g_68}}, {{(void*)0, (void*)0, &g_68, &g_68, &g_68, &g_68, &g_68}}, {{(void*)0, (void*)0, &g_68, &g_68, &g_68, &g_68, &g_68}}, {{(void*)0, (void*)0, &g_68, &g_68, &g_68, &g_68, &g_68}}, {{(void*)0, (void*)0, &g_68, &g_68, &g_68, &g_68, &g_68}}};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_198[i] = 1L;
    for (i = 0; i < 5; i++)
        l_371[i] = 0x69D86212L;
    (**p_33) = (safe_mul_func_uint16_t_u_u(((*l_199) = (((((g_104 = l_189) , l_190) == (void*)0) != ((6L > (**p_33)) & (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(0xC9B8L, 6)) , 0UL), (((g_181 & l_189) || (*g_185)) < l_198[2]))) >= (-1L)), g_8)))) && (-1L))), g_106));
    if ((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s(l_198[4], (safe_rshift_func_uint16_t_u_u(((((g_108 , (void*)0) != (g_181 , ((((*l_206) = g_106) >= g_208) , l_209))) | ((*l_213) = func_43(l_198[0], (((((safe_add_func_uint32_t_u_u(g_116, g_65)) && l_212) , g_108) || g_65) , (*p_32)), p_33))) <= g_110), 5)))), g_116)))
    {
        int *l_214 = (void*)0;
        int l_219 = 0xE97A1A07L;
        int **l_220 = &g_68;
        char *l_229 = &l_189;
        int *l_256[1][2];
        unsigned short **l_268[7][10] = {{&l_199, &l_199, &l_199, &l_199, &l_199, (void*)0, &l_199, &l_199, &l_199, &l_199}, {&l_199, &l_199, &l_199, &l_199, &l_199, (void*)0, &l_199, &l_199, &l_199, &l_199}, {&l_199, &l_199, &l_199, &l_199, &l_199, (void*)0, &l_199, &l_199, &l_199, &l_199}, {&l_199, &l_199, &l_199, &l_199, &l_199, (void*)0, &l_199, &l_199, &l_199, &l_199}, {&l_199, &l_199, &l_199, &l_199, &l_199, (void*)0, &l_199, &l_199, &l_199, &l_199}, {&l_199, &l_199, &l_199, &l_199, &l_199, (void*)0, &l_199, &l_199, &l_199, &l_199}, {&l_199, &l_199, &l_199, &l_199, &l_199, (void*)0, &l_199, &l_199, &l_199, &l_199}};
        unsigned char l_298 = 0x28L;
        short *l_324 = &g_104;
        short **l_323 = &l_324;
        int l_358 = (-1L);
        char l_370[7][3] = {{1L, 9L, (-4L)}, {1L, 9L, (-4L)}, {1L, 9L, (-4L)}, {1L, 9L, (-4L)}, {1L, 9L, (-4L)}, {1L, 9L, (-4L)}, {1L, 9L, (-4L)}};
        int *l_373 = &g_181;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_256[i][j] = &g_65;
        }
        (*p_33) = l_214;
        if (((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(func_43(l_219, (l_214 = &l_219), l_220), 0x66E9L)), (safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_8, (g_104 || (-9L)))), l_219)))) != l_198[2]))
        {
            int *l_230 = &l_219;
            short *l_231 = (void*)0;
            short *l_232 = (void*)0;
            short *l_233[5][1][3] = {{{&g_106, &g_106, (void*)0}}, {{&g_106, &g_106, (void*)0}}, {{&g_106, &g_106, (void*)0}}, {{&g_106, &g_106, (void*)0}}, {{&g_106, &g_106, (void*)0}}};
            int i, j, k;
            (*l_220) = l_230;
            if ((*g_68))
            {
                (*p_33) = ((((safe_div_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((0x3DL || ((*l_213) = g_29)) , (safe_unary_minus_func_uint8_t_u(g_108))), ((*l_229) = g_116))), g_110)), 3)) <= g_104) & func_43(g_243, (*l_220), p_32)), (*l_214))) != g_65) , g_108) , (*p_33));
            }
            else
            {
                char l_248 = 2L;
                int l_257 = (-7L);
                for (g_110 = 0; (g_110 >= 0); g_110 -= 1)
                {
                    int *l_249 = &g_65;
                    int i;
                    (*l_249) = (l_257 = ((**l_220) = ((((((safe_lshift_func_uint8_t_u_s(((*l_209) = g_106), (*l_230))) | ((safe_rshift_func_uint8_t_u_s(func_43(l_248, l_249, func_34((safe_div_func_int16_t_s_s(0x9102L, g_181)), (safe_sub_func_int16_t_s_s(g_243, (safe_mul_func_int16_t_s_s((((!0xFBL) , (*g_185)) ^ 6UL), 1UL)))), g_208, l_256[0][0])), 7)) >= (*l_249))) >= 0xF6L) & g_104) , g_106) < g_29)));
                    if ((**p_32))
                        continue;
                    if ((**p_32))
                        break;
                }
            }
        }
        else
        {
            int l_267 = (-10L);
            int **l_294 = &l_214;
            unsigned *l_344[7];
            unsigned **l_346 = &l_345;
            unsigned char l_351 = 255UL;
            unsigned l_359[8][7][4] = {{{0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}}, {{0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}}, {{0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}}, {{0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}}, {{0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}}, {{0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}}, {{0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}}, {{0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}, {0x508DA7ADL, 0x508DA7ADL, 4UL, 0x508DA7ADL}}};
            unsigned l_396[8] = {0x46365F0AL, 0x06CE03B8L, 0x46365F0AL, 0x06CE03B8L, 0x46365F0AL, 0x06CE03B8L, 0x46365F0AL, 0x06CE03B8L};
            int l_452 = (-8L);
            unsigned l_453 = 0x8345F794L;
            short ***l_454 = &l_323;
            char l_462 = (-1L);
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_344[i] = &g_208;
            for (g_181 = 0; (g_181 > (-13)); g_181 = safe_sub_func_int8_t_s_s(g_181, 7))
            {
                unsigned char *l_264 = &g_108;
                int l_265[2];
                unsigned *l_266 = &g_208;
                char l_289 = (-6L);
                int *l_291 = (void*)0;
                int *l_292[4] = {&g_293, &g_293, &g_293, &g_293};
                unsigned *l_295 = &g_296;
                int i;
                for (i = 0; i < 2; i++)
                    l_265[i] = 0x8F2E103AL;
                if ((safe_lshift_func_int16_t_s_s(((safe_div_func_int32_t_s_s((+(((void*)0 == &l_189) , 0L)), ((*l_266) = ((((*l_214) , l_264) != &g_108) , l_265[1])))) > (l_267 || func_43((*l_214), (*p_32), p_32))), g_108)))
                {
                    (*p_33) = &l_265[1];
                }
                else
                {
                    unsigned short ***l_272 = &l_268[0][4];
                    if (l_265[1])
                        break;
                    (*l_272) = l_268[0][4];
                    for (l_219 = 4; (l_219 >= 1); l_219 -= 1)
                    {
                        (*p_33) = &l_267;
                        (**p_33) = 0x8995CB69L;
                    }
                }
                if ((*g_185))
                    break;
                if (((g_297 = ((*l_295) = (!((l_265[1] | (safe_sub_func_uint16_t_u_u(func_43((((g_8 && 1L) > ((safe_add_func_uint8_t_u_u((((*l_209) = (safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((g_293 = ((((((*l_214) = func_43((l_265[0] <= (safe_rshift_func_uint8_t_u_u((*l_214), ((*l_209) = ((safe_mod_func_int32_t_s_s(0xE129A436L, ((l_289 = (l_265[1] <= (((*l_266) = (((safe_rshift_func_int8_t_s_s((&g_8 != (void*)0), l_267)) == 0xC458L) , g_8)) & l_267))) , 2L))) , g_290))))), (*l_220), &l_214)) <= 0xDDE36444L) >= 65530UL) , l_289) >= g_290)) , 0x4AL), g_110)) , g_8), g_106)) || 0UL), g_29))) ^ 1L), 0xD2L)) & 4294967295UL)) , (-4L)), &l_267, l_294), l_265[1]))) , g_208)))) , (**l_294)))
                {
                    unsigned l_303 = 0UL;
                    int *l_306 = (void*)0;
                    char l_307 = 0x7BL;
                    int **l_316 = &l_256[0][0];
                    (**l_294) = (l_307 & g_29);
                    if ((*g_185))
                        break;
                    for (g_243 = (-3); (g_243 >= 34); g_243++)
                    {
                        short l_310 = 0xAFA5L;
                        short *l_311 = (void*)0;
                        short *l_312 = &g_104;
                        int **l_313 = &l_256[0][1];
                        int ***l_314 = &g_67[0];
                        int ***l_315[3][3][8] = {{{&g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0]}, {&g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0]}, {&g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0]}}, {{&g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0]}, {&g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0]}, {&g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0]}}, {{&g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0]}, {&g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0]}, {&g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0], &g_67[0]}}};
                        int i, j, k;
                    }
                }
                else
                {
                    l_265[1] = (*g_185);
                    if ((**l_294))
                        break;
                }
            }
            if (((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((**l_294), (**l_294))), (safe_rshift_func_int8_t_s_u((&g_108 != (void*)0), 6)))) == (*l_214)))
            {
                short ***l_328 = &l_323;
                int l_331 = 1L;
                int **l_337 = &l_256[0][0];
                (*l_328) = l_323;
                if ((g_104 , (safe_lshift_func_int8_t_s_s((l_331 == ((*l_199) = 0xF521L)), 4))))
                {
                    int **l_332 = (void*)0;
                    return l_332;
                }
                else
                {
                    int *l_338[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_338[i] = &g_181;
                    for (l_267 = 0; (l_267 >= 16); l_267 = safe_add_func_uint8_t_u_u(l_267, 2))
                    {
                        (*p_33) = (*l_220);
                        return p_33;
                    }
                    for (g_106 = 0; (g_106 < (-19)); --g_106)
                    {
                        return p_32;
                    }
                    for (g_208 = 1; (g_208 <= 6); g_208 += 1)
                    {
                        (*l_294) = (*p_32);
                        (*l_220) = (((*l_209) = 0x31L) , (*p_32));
                        (*g_115) = p_33;
                        (*l_294) = l_338[0];
                    }
                }
            }
            else
            {
                int *l_339 = &l_219;
                (*l_220) = l_339;
            }
            if ((safe_rshift_func_uint8_t_u_s(g_108, 1)))
            {
                short l_354 = 0x25A2L;
                int l_372 = (-1L);
                for (l_298 = (-28); (l_298 == 52); l_298 = safe_add_func_int16_t_s_s(l_298, 2))
                {
                    char l_368 = 0x31L;
                    for (g_290 = 0; (g_290 <= 1); g_290 += 1)
                    {
                        (*l_220) = (*p_32);
                    }
                    l_372 = ((((((**l_294) = (((((**l_294) , 0x6600051DL) && l_370[3][1]) ^ (**l_294)) | g_208)) & l_368) <= l_371[2]) , (-1L)) | g_116);
                }
            }
            else
            {
                unsigned char l_380 = 255UL;
                int l_395 = 9L;
                int **l_398 = &l_373;
                (*l_220) = l_373;
                (**p_32) = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((((**l_294) >= (safe_rshift_func_int8_t_s_s(l_380, 5))) > ((safe_add_func_int16_t_s_s((**l_294), (l_380 , 8L))) ^ ((**l_294) > (**l_294)))) & ((**g_270) ^ 0UL)), l_380)), 3));
                (*g_185) = (g_104 <= (((*g_68) != 2UL) >= g_243));
                if ((safe_mul_func_int8_t_s_s((g_208 | ((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(g_243, g_243)), g_106)) != l_380)), g_208)))
                {
                    int *l_397 = &g_65;
                    char **l_400 = &l_229;
                    char ***l_401 = &l_400;
                    int l_428[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_428[i] = 1L;
                    for (g_296 = 0; (g_296 <= 2); g_296 += 1)
                    {
                        (*l_294) = l_397;
                        return p_32;
                    }
                    for (g_296 = 0; (g_296 <= 3); g_296 += 1)
                    {
                        int **l_399 = (void*)0;
                        return l_399;
                    }
                    (*l_401) = l_400;
                    if ((((((*l_345) = (((((*l_397) || (**l_398)) ^ (safe_add_func_int16_t_s_s((**l_398), (**l_294)))) >= (**l_294)) > ((l_395 = (safe_rshift_func_int16_t_s_s((**g_326), ((safe_lshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((*l_199) = 0x4B14L), (*g_327))), 2)) >= ((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((l_199 == (*g_326)), (**l_398))), 4294967294UL)) || (*l_397)))))) <= (**l_294)))) , g_290) , 1L) || 0x600ED8D9L))
                    {
                        int **l_429 = (void*)0;
                        (*l_214) = (g_296 , ((safe_mul_func_int8_t_s_s(((***l_401) = (((*l_206) = (**l_294)) && (*l_397))), (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((**l_398), 11)), ((l_395 = (l_428[0] = (safe_lshift_func_int16_t_s_s(((**l_294) & ((*l_199) = (*g_271))), ((**g_326) = (((**l_346) = ((safe_lshift_func_int8_t_s_s(g_106, 2)) | ((safe_lshift_func_int16_t_s_s(((*l_324) = ((safe_mod_func_int8_t_s_s(0xB8L, (*l_214))) , 0xF06FL)), 14)) | (*l_397)))) > 1UL)))))) >= (-1L)))))) ^ (*l_397)));
                        return l_429;
                    }
                    else
                    {
                        int l_451 = 3L;
                        (**l_220) = (safe_mul_func_int16_t_s_s(((**g_326) = (**g_326)), (safe_add_func_int32_t_s_s((**p_32), (g_208 = g_243)))));
                        (*l_397) = ((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((((((safe_div_func_uint16_t_u_u((g_440 = (**g_270)), ((0x0BBEL < func_43((((((!(safe_mod_func_int16_t_s_s(((*l_397) <= (safe_sub_func_int32_t_s_s(((((((func_43(((*l_397) , (safe_mul_func_uint16_t_u_u(((((**l_294) = (0xB173L <= (*l_373))) ^ ((safe_mod_func_int32_t_s_s(func_43((g_110 || (safe_sub_func_int8_t_s_s((((void*)0 != &g_115) , 0x16L), g_8))), (*p_32), p_33), 0x538CD5A5L)) && 254UL)) || g_65), (**g_270)))), (*p_32), p_33) , l_451) == l_452) , &g_207) == &g_207) == (**g_270)) < l_453), (*l_397)))), (*g_327)))) || (-1L)) , l_454) == (void*)0) , (**l_294)), (*l_220), p_32)) , g_455))) != 0x98L) , l_451) , (**g_270)) ^ l_451) , 255UL), 0xF2L)), 2)) > l_451);
                    }
                }
                else
                {
                    unsigned short l_458 = 65535UL;
                    int **l_459 = (void*)0;
                    for (g_208 = 0; (g_208 <= 3); ++g_208)
                    {
                        if ((**p_32))
                            break;
                        (**l_294) = (((*l_214) , &g_455) == (l_458 , l_256[0][0]));
                    }
                    (*l_220) = (*p_32);
                    (*l_398) = (*p_32);
                    return l_459;
                }
            }
            if ((safe_add_func_uint16_t_u_u(l_462, 0x8F5DL)))
            {
                unsigned l_467 = 0xBCA6CF48L;
                int l_468 = (-2L);
                l_468 = ((0x4CL | ((*l_373) , (&g_326 != (void*)0))) && (((((g_296 , (func_43(((***l_454) = ((safe_div_func_int32_t_s_s(0xA87D9368L, (g_290 || (((((*l_199) = (safe_mul_func_uint8_t_u_u(((void*)0 == &g_76[1]), l_467))) , 6UL) != 0x89L) <= (**g_270))))) == 0x3CL)), (*p_32), p_32) , 0L)) & l_467) > g_108) <= (-3L)) == (-2L)));
            }
            else
            {
                char l_469 = (-1L);
                (*l_214) = l_469;
            }
        }
    }
    else
    {
        int l_473 = (-1L);
        int *l_482 = &l_198[2];
        (*p_33) = (void*)0;
        (*g_472) = ((void*)0 == g_470);
        (*l_482) = (l_473 >= (safe_sub_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((*g_471), ((*g_185) = l_473))) && g_440), ((*g_471) || l_473))));
        (*p_33) = (*p_32);
    }
    (*p_33) = &l_198[7];
    return l_483[3][0][6];
}







static int ** func_34(char p_35, unsigned short p_36, int p_37, int * p_38)
{
    unsigned char l_184 = 255UL;
    int **l_186 = &g_68;
    (*g_185) = l_184;
    return l_186;
}







static short func_43(short p_44, int * p_45, int ** p_46)
{
    char l_182 = 0L;
    return l_182;
}







static unsigned func_49(char p_50, unsigned char p_51, int * p_52, short p_53, unsigned p_54)
{
    int *l_78 = &g_65;
    unsigned l_139[9][3][7] = {{{0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}}, {{0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}}, {{0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}}, {{0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}}, {{0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}}, {{0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}}, {{0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}}, {{0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}}, {{0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}, {0xF5898A22L, 4294967295UL, 0xB11F9A04L, 0xB7F88A73L, 0xC806B18CL, 4294967290UL, 0x49E589B7L}}};
    int *l_147 = &g_65;
    unsigned char l_161 = 254UL;
    int ***l_173 = &g_67[0];
    int ***l_175 = &g_67[0];
    unsigned l_176 = 0x37B3BEABL;
    int i, j, k;
    if ((safe_mod_func_uint16_t_u_u(p_53, 0xEE8CL)))
    {
        int *l_74 = &g_65;
        int **l_75 = (void*)0;
        int **l_77[4] = {&l_74, (void*)0, &l_74, (void*)0};
        int i;
        p_52 = l_74;
    }
    else
    {
        int **l_79 = (void*)0;
        int **l_80 = &g_68;
        int **l_81 = &l_78;
        (*l_81) = ((*l_80) = l_78);
        for (p_54 = 16; (p_54 >= 6); p_54--)
        {
            unsigned l_98[2];
            short *l_103 = &g_104;
            short *l_105 = &g_106;
            unsigned char *l_107 = &g_108;
            char *l_109 = &g_110;
            int i;
            for (i = 0; i < 2; i++)
                l_98[i] = 0xA00A4EDBL;
            (**l_81) = (safe_div_func_int8_t_s_s(((*l_109) = (((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((((((~((p_54 , (p_51 < (safe_mod_func_int16_t_s_s(g_29, ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(0x0BL, 0)), ((((*p_52) < ((safe_rshift_func_uint8_t_u_s(((*l_107) = (l_98[0] & (safe_add_func_uint16_t_u_u(0UL, ((*l_105) = (safe_add_func_uint16_t_u_u(g_29, ((*l_103) = p_54)))))))), g_29)) && 0x8352L)) < p_50) , 0L))) || 1L))))) && (-1L))) , 8UL) >= 255UL) , p_50) , p_50), p_53)) != l_98[0]), 2)) , p_54) | 0x2AL)), g_29));
        }
        (*g_68) = 0x13573736L;
        for (p_54 = 0; (p_54 >= 46); p_54++)
        {
            int ***l_113 = &g_67[0];
            int ****l_114[3][8] = {{(void*)0, (void*)0, &l_113, (void*)0, (void*)0, &l_113, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_113, (void*)0, (void*)0, &l_113, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_113, (void*)0, (void*)0, &l_113, (void*)0, (void*)0}};
            int *l_120 = &g_65;
            int i, j;
        }
    }
    if (((247UL | g_29) , ((g_116 & 0x4AL) != l_139[3][1][3])))
    {
        (*g_68) = (*p_52);
    }
    else
    {
        int *l_140 = (void*)0;
        (**g_115) = (**g_115);
        (**g_115) = l_140;
    }
    for (g_108 = 0; (g_108 < 4); g_108 = safe_add_func_int8_t_s_s(g_108, 7))
    {
        int **l_143 = &l_78;
        char l_146 = (-7L);
        unsigned l_148 = 5UL;
        unsigned char *l_162 = &l_161;
        unsigned *l_164 = &l_139[6][1][2];
        (*g_115) = l_143;
        l_146 = (safe_div_func_uint32_t_u_u(p_51, 0xCE1991DEL));
        l_147 = ((*l_143) = p_52);
        (*l_147) = (((l_148 || g_29) , ((((*l_164) = ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(p_54, ((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((p_53 <= ((*l_78) <= (safe_rshift_func_uint16_t_u_s(((g_163 = ((*l_162) = (safe_sub_func_uint16_t_u_u(g_106, l_161)))) , (&l_143 == &g_76[0])), p_51)))), 8)), (*l_78))) , (*l_147)))), 3)) < g_8)) > (**l_143)) , &p_50)) == &g_8);
    }
    if ((safe_div_func_int16_t_s_s((*l_78), (safe_add_func_int32_t_s_s(4L, p_53)))))
    {
        int ****l_174 = &l_173;
        (*p_52) = (((g_108 = (0L < (*l_78))) <= (safe_mul_func_uint8_t_u_u(p_53, ((safe_sub_func_uint32_t_u_u(p_50, ((((*l_78) && (g_116 , (p_54 , ((((*l_174) = l_173) != l_175) >= p_53)))) , 4L) , l_176))) != 0x6E06CC3FL)))) >= p_54);
    }
    else
    {
        int *l_177 = &g_65;
        (**l_175) = l_177;
        (*l_78) = (-2L);
    }
    return p_50;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
