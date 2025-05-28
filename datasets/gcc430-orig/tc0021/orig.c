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



static int g_3[1][2] = {{0x24F01C08L, 0x24F01C08L}};
static char g_21 = 0xC3L;
static char g_33[8] = {3L, 7L, 3L, 7L, 3L, 7L, 3L, 7L};
static short g_89 = (-1L);
static int g_94[7] = {(-1L), 0xB8A80AA4L, (-1L), 0xB8A80AA4L, (-1L), 0xB8A80AA4L, (-1L)};
static unsigned char g_120 = 255UL;
static unsigned short g_144 = 0x571CL;
static unsigned short g_146[5] = {0xD89BL, 0x6C56L, 0xD89BL, 0x6C56L, 0xD89BL};
static unsigned short *g_145[5][1] = {{&g_146[0]}, {&g_146[0]}, {&g_146[0]}, {&g_146[0]}, {&g_146[0]}};
static int g_147 = 0L;
static unsigned char g_148[9] = {0x1DL, 0x1DL, 0xF2L, 0x1DL, 0x1DL, 0xF2L, 0x1DL, 0x1DL, 0xF2L};
static unsigned g_189 = 1UL;
static unsigned short g_194 = 5UL;
static unsigned g_210 = 1UL;
static unsigned *g_209[4] = {&g_210, &g_210, &g_210, &g_210};
static unsigned g_221 = 4294967290UL;
static int *g_223 = &g_94[5];
static short g_234 = 0x947EL;
static int **g_273 = (void*)0;
static unsigned char *g_355 = (void*)0;
static unsigned char **g_354 = &g_355;
static char g_376 = 0L;
static unsigned char g_402 = 255UL;
static int *g_425 = &g_94[6];
static char *g_440 = &g_33[7];
static char **g_439 = &g_440;
static char ***g_438 = &g_439;
static unsigned char g_484 = 9UL;
static unsigned char ***g_501 = &g_354;
static int *g_516 = &g_3[0][1];
static int *g_579 = &g_94[6];
static char g_593[6] = {0x37L, 0x37L, 0x37L, 0x37L, 0x37L, 0x37L};
static unsigned char g_674[6] = {0xF0L, 0xF0L, 0xF0L, 0xF0L, 0xF0L, 0xF0L};
static unsigned short g_679 = 0xAE5AL;
static char g_695[8][3][6] = {{{0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}}, {{0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}}, {{0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}}, {{0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}}, {{0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}}, {{0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}}, {{0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}}, {{0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}, {0x67L, 0xD5L, 0L, (-8L), (-1L), 9L}}};
static unsigned **g_706 = &g_209[1];
static unsigned ***g_705 = &g_706;
static short *g_728 = &g_89;
static short **g_727[1] = {&g_728};
static int **g_778 = (void*)0;
static unsigned g_821 = 1UL;
static int g_832 = 0L;
static short g_882[9][1] = {{0xA29CL}, {0xA29CL}, {0xA29CL}, {0xA29CL}, {0xA29CL}, {0xA29CL}, {0xA29CL}, {0xA29CL}, {0xA29CL}};
static unsigned char ***g_968 = &g_354;
static unsigned short g_1090 = 0x9055L;
static unsigned ****g_1190 = (void*)0;
static unsigned *****g_1189 = &g_1190;
static int *g_1230 = (void*)0;
static short ***g_1239 = &g_727[0];
static short ****g_1238[9][6] = {{&g_1239, &g_1239, &g_1239, &g_1239, &g_1239, &g_1239}, {&g_1239, &g_1239, &g_1239, &g_1239, &g_1239, &g_1239}, {&g_1239, &g_1239, &g_1239, &g_1239, &g_1239, &g_1239}, {&g_1239, &g_1239, &g_1239, &g_1239, &g_1239, &g_1239}, {&g_1239, &g_1239, &g_1239, &g_1239, &g_1239, &g_1239}, {&g_1239, &g_1239, &g_1239, &g_1239, &g_1239, &g_1239}, {&g_1239, &g_1239, &g_1239, &g_1239, &g_1239, &g_1239}, {&g_1239, &g_1239, &g_1239, &g_1239, &g_1239, &g_1239}, {&g_1239, &g_1239, &g_1239, &g_1239, &g_1239, &g_1239}};
static int g_1299 = 6L;
static int g_1322 = (-2L);
static char g_1356[4][3][6] = {{{1L, 0L, 0xC3L, (-3L), 1L, 0xECL}, {1L, 0L, 0xC3L, (-3L), 1L, 0xECL}, {1L, 0L, 0xC3L, (-3L), 1L, 0xECL}}, {{1L, 0L, 0xC3L, (-3L), 1L, 0xECL}, {1L, 0L, 0xC3L, (-3L), 1L, 0xECL}, {1L, 0L, 0xC3L, (-3L), 1L, 0xECL}}, {{1L, 0L, 0xC3L, (-3L), 1L, 0xECL}, {1L, 0L, 0xC3L, (-3L), 1L, 0xECL}, {1L, 0L, 0xC3L, (-3L), 1L, 0xECL}}, {{1L, 0L, 0xC3L, (-3L), 1L, 0xECL}, {1L, 0L, 0xC3L, (-3L), 1L, 0xECL}, {1L, 0L, 0xC3L, (-3L), 1L, 0xECL}}};
static int g_1401 = 0L;



static int func_1(void);
static int func_7(unsigned p_8, short p_9, int * p_10, unsigned p_11, int * p_12);
static short func_22(char * p_23);
static unsigned char func_26(char * p_27, char p_28, int p_29, char p_30);
static unsigned short func_36(char ** p_37, int * p_38, int * p_39, unsigned p_40);
static int * func_42(char ** p_43, char p_44, char * p_45, int p_46);
static char ** func_47(int p_48, int * p_49);
static int * func_61(int * p_62, unsigned p_63, unsigned p_64, char * p_65, char p_66);
static int * func_67(int p_68);
static int * func_72(int p_73, char * p_74, int p_75, int * p_76, int * p_77);
static int func_1(void)
{
    int *l_2[4];
    unsigned l_4 = 0x38330377L;
    int l_17 = 8L;
    char *l_20 = &g_21;
    short *l_1395 = (void*)0;
    unsigned char l_1396 = 255UL;
    int *l_1402 = &g_94[6];
    int **l_1417[9];
    int *l_1418 = &g_832;
    int i;
    for (i = 0; i < 4; i++)
        l_2[i] = &g_3[0][0];
    for (i = 0; i < 9; i++)
        l_1417[i] = &g_516;
    l_4++;
    (*l_1402) = func_7(g_3[0][1], (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_3[0][0], ((l_17 >= (safe_add_func_int8_t_s_s(((*l_20) = g_3[0][1]), 0xCEL))) == (l_1396 &= func_22(l_20))))), 7)), &l_17, ((***g_705) = (safe_sub_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((((**g_706) | (-5L)) ^ (***g_1239)) > (**g_706)), g_1401)) != (*g_440)), 0x2495L))), l_1402);
    l_1418 = func_67((*g_579));
    g_223 = (void*)0;
    return (*l_1402);
}







static int func_7(unsigned p_8, short p_9, int * p_10, unsigned p_11, int * p_12)
{
    unsigned l_1403 = 0UL;
    char **l_1406[1][8] = {{&g_440, (void*)0, &g_440, (void*)0, &g_440, (void*)0, &g_440, (void*)0}};
    int *l_1407 = &g_1401;
    int i, j;
    if ((l_1403 < ((((safe_lshift_func_uint8_t_u_s((((*l_1407) == (safe_unary_minus_func_uint8_t_u((*l_1407)))) == ((*p_12) = (p_9 | (9L <= 0xF0A6L)))), 6)) < 255UL) < (*l_1407)) & p_11)))
    {
lbl_1410:
        for (g_1401 = 0; (g_1401 <= 0); g_1401 += 1)
        {
            unsigned char l_1409 = 1UL;
            return l_1409;
        }
        (*p_12) ^= (*p_10);
    }
    else
    {
        unsigned short l_1411 = 0x64F8L;
        if (g_1401)
            goto lbl_1410;
        l_1411++;
        for (g_1401 = (-28); (g_1401 >= (-26)); g_1401 = safe_add_func_uint8_t_u_u(g_1401, 7))
        {
            int l_1416[5][4] = {{(-10L), 0x70A3595AL, (-10L), 0x70A3595AL}, {(-10L), 0x70A3595AL, (-10L), 0x70A3595AL}, {(-10L), 0x70A3595AL, (-10L), 0x70A3595AL}, {(-10L), 0x70A3595AL, (-10L), 0x70A3595AL}, {(-10L), 0x70A3595AL, (-10L), 0x70A3595AL}};
            int i, j;
            return l_1416[1][3];
        }
    }
    return (*g_425);
}







static short func_22(char * p_23)
{
    char *l_32 = &g_33[7];
    char **l_31 = &l_32;
    int l_742 = 0xEA9DCFBDL;
    unsigned *l_743 = &g_221;
    unsigned l_751[6] = {0xF75B39AFL, 3UL, 0xF75B39AFL, 3UL, 0xF75B39AFL, 3UL};
    unsigned ****l_754 = &g_705;
    short l_757 = 0xF7E2L;
    short **l_780 = &g_728;
    int l_786 = 0x925A891AL;
    int *l_808 = &l_742;
    short l_828 = 9L;
    int l_836 = 3L;
    int l_838 = 0x06EC04CCL;
    int l_840[7][6][6] = {{{1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}}, {{1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}}, {{1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}}, {{1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}}, {{1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}}, {{1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}}, {{1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}, {1L, (-10L), 0x8C89FFDAL, 1L, (-8L), 1L}}};
    int l_841 = 0xBC770EBBL;
    int l_842 = 0x03BE41C7L;
    unsigned l_844 = 0UL;
    int *l_925 = &l_838;
    int l_1108[2];
    short ****l_1129 = (void*)0;
    short ***l_1131 = (void*)0;
    short ****l_1130 = &l_1131;
    short l_1132 = (-1L);
    unsigned short l_1134 = 0UL;
    unsigned l_1135 = 0xE97A6A6DL;
    char l_1145 = 0L;
    int l_1147 = 9L;
    unsigned char l_1179 = 0x4AL;
    char l_1205 = 0x99L;
    int ***l_1263[3][1][4];
    int ****l_1262[6] = {&l_1263[0][0][2], (void*)0, &l_1263[0][0][2], (void*)0, &l_1263[0][0][2], (void*)0};
    short l_1286 = 0xDD34L;
    short l_1291 = 0xA156L;
    unsigned short l_1292[3];
    unsigned char ****l_1297 = &g_968;
    char l_1317 = 1L;
    int l_1321[8][2][6] = {{{1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}, {1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}}, {{1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}, {1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}}, {{1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}, {1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}}, {{1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}, {1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}}, {{1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}, {1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}}, {{1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}, {1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}}, {{1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}, {1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}}, {{1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}, {1L, 1L, 0xE8A118E7L, (-7L), (-7L), 0xE8A118E7L}}};
    int *l_1385 = &l_836;
    unsigned char l_1391 = 251UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1108[i] = (-3L);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_1263[i][j][k] = &g_778;
        }
    }
    for (i = 0; i < 3; i++)
        l_1292[i] = 65526UL;
    return (***g_1239);
}







static unsigned char func_26(char * p_27, char p_28, int p_29, char p_30)
{
    char *l_59 = &g_33[7];
    int *l_60 = &g_3[0][1];
    int l_740 = 0x52EDA4EBL;
    short l_741 = 0xDFA5L;
    if (g_3[0][0])
    {
        char **l_41 = (void*)0;
        int l_58 = 0xE883781CL;
        l_740 |= (((**g_706) = (safe_lshift_func_uint16_t_u_s(func_36(l_41, func_42(func_47((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(0x0461L, ((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(251UL, l_58)), (g_33[7] <= (&p_28 == l_59)))) == (g_33[6] | l_58)))) || p_30), g_33[4])), l_60), l_58, (*g_439), g_674[4]), l_60, p_29), p_28))) <= l_58);
        return l_58;
    }
    else
    {
        return l_741;
    }
}







static unsigned short func_36(char ** p_37, int * p_38, int * p_39, unsigned p_40)
{
    int *l_676 = (void*)0;
    int l_677 = 0x0A9F9D44L;
    int l_688[3][7][3] = {{{0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}}, {{0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}}, {{0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}, {0x156F24B2L, 0xE58FA191L, 0xE46AA526L}}};
    int i, j, k;
    p_38 = l_676;
    if ((l_677 > (*g_440)))
    {
        char l_678 = 0x92L;
        int l_689 = 0xD4356B3DL;
        int l_690[3][1];
        int l_691 = (-2L);
        unsigned **l_703 = &g_209[2];
        unsigned ***l_702 = &l_703;
        char ***l_732 = &g_439;
        char ***l_733 = &g_439;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_690[i][j] = (-6L);
        }
        g_679 = ((*g_579) = l_678);
        for (p_40 = 0; (p_40 == 49); p_40 = safe_add_func_int8_t_s_s(p_40, 6))
        {
            int *l_682 = &g_94[5];
            int *l_683 = (void*)0;
            int *l_684 = (void*)0;
            int *l_685 = &g_94[2];
            int *l_686 = (void*)0;
            int *l_687[9][10] = {{&g_3[0][0], &g_94[6], (void*)0, (void*)0, (void*)0, &g_3[0][0], (void*)0, (void*)0, (void*)0, &g_94[6]}, {&g_3[0][0], &g_94[6], (void*)0, (void*)0, (void*)0, &g_3[0][0], (void*)0, (void*)0, (void*)0, &g_94[6]}, {&g_3[0][0], &g_94[6], (void*)0, (void*)0, (void*)0, &g_3[0][0], (void*)0, (void*)0, (void*)0, &g_94[6]}, {&g_3[0][0], &g_94[6], (void*)0, (void*)0, (void*)0, &g_3[0][0], (void*)0, (void*)0, (void*)0, &g_94[6]}, {&g_3[0][0], &g_94[6], (void*)0, (void*)0, (void*)0, &g_3[0][0], (void*)0, (void*)0, (void*)0, &g_94[6]}, {&g_3[0][0], &g_94[6], (void*)0, (void*)0, (void*)0, &g_3[0][0], (void*)0, (void*)0, (void*)0, &g_94[6]}, {&g_3[0][0], &g_94[6], (void*)0, (void*)0, (void*)0, &g_3[0][0], (void*)0, (void*)0, (void*)0, &g_94[6]}, {&g_3[0][0], &g_94[6], (void*)0, (void*)0, (void*)0, &g_3[0][0], (void*)0, (void*)0, (void*)0, &g_94[6]}, {&g_3[0][0], &g_94[6], (void*)0, (void*)0, (void*)0, &g_3[0][0], (void*)0, (void*)0, (void*)0, &g_94[6]}};
            unsigned short l_692[9][7][2] = {{{0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}}, {{0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}}, {{0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}}, {{0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}}, {{0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}}, {{0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}}, {{0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}}, {{0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}}, {{0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}, {0x1DA6L, 0x4E44L}}};
            char l_712 = 1L;
            short *l_726 = &g_234;
            short **l_725 = &l_726;
            int l_738 = (-1L);
            int *l_739 = &l_738;
            int i, j, k;
            l_692[7][3][1]--;
            g_695[1][1][3] = ((*l_682) = (*p_39));
            (*l_682) = (safe_mod_func_uint16_t_u_u(p_40, p_40));
            for (g_210 = (-6); (g_210 <= 25); g_210 = safe_add_func_uint32_t_u_u(g_210, 4))
            {
                unsigned l_713 = 0xD6172537L;
                char ***l_721[1][10][5];
                int *l_722 = &g_94[6];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 10; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_721[i][j][k] = &g_439;
                    }
                }
                for (g_679 = 2; (g_679 <= 22); g_679 = safe_add_func_uint32_t_u_u(g_679, 7))
                {
                    unsigned ****l_704 = &l_702;
                    int l_717 = (-9L);
                }
                (*g_579) |= (*p_39);
                for (g_144 = 0; (g_144 <= 5); g_144 += 1)
                {
                    int **l_724 = &l_685;
                    int i;
                    (*l_724) = p_38;
                    if (g_674[g_144])
                        continue;
                    for (g_679 = 0; (g_679 <= 8); g_679 += 1)
                    {
                        char ****l_731[2][8][7] = {{{&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}}, {{&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}, {&l_721[0][5][1], &g_438, &l_721[0][4][3], &g_438, &l_721[0][4][3], &g_438, &l_721[0][5][1]}}};
                        int i, j, k;
                        (*l_724) = p_39;
                    }
                    if ((*p_39))
                        break;
                }
                (*l_739) |= ((*g_579) &= (*p_39));
            }
        }
    }
    else
    {
        (*g_579) = (*g_516);
    }
    return l_688[1][2][1];
}







static int * func_42(char ** p_43, char p_44, char * p_45, int p_46)
{
    int l_675 = 0x5849682EL;
    g_425 = (void*)0;
    p_46 = l_675;
    return &g_94[6];
}







static char ** func_47(int p_48, int * p_49)
{
    short l_69 = 0L;
    int *l_661 = &g_94[0];
    short *l_669[4];
    short **l_668[4][6] = {{&l_669[3], &l_669[2], &l_669[1], &l_669[1], &l_669[2], &l_669[3]}, {&l_669[3], &l_669[2], &l_669[1], &l_669[1], &l_669[2], &l_669[3]}, {&l_669[3], &l_669[2], &l_669[1], &l_669[1], &l_669[2], &l_669[3]}, {&l_669[3], &l_669[2], &l_669[1], &l_669[1], &l_669[2], &l_669[3]}};
    short *l_670 = &g_234;
    short *l_671 = &g_234;
    unsigned *l_672[5][6] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
    char *l_673 = &g_593[0];
    int i, j;
    for (i = 0; i < 4; i++)
        l_669[i] = &g_89;
    g_425 = func_61(func_67(l_69), (l_69 <= p_48), g_147, (**g_438), l_69);
    p_49 = func_61(l_661, ((*l_661) = (safe_add_func_uint8_t_u_u(p_48, ((p_48 ^ (0x2E243EFEL == (*l_661))) == (safe_sub_func_uint32_t_u_u((((l_670 = &g_234) == (l_671 = &g_234)) != ((void*)0 != l_661)), 0x4D1C6E60L)))))), g_147, l_673, (**g_439));
    return (*g_438);
}







static int * func_61(int * p_62, unsigned p_63, unsigned p_64, char * p_65, char p_66)
{
    int *l_646 = (void*)0;
    int **l_647 = &g_223;
    int *l_648 = &g_94[6];
    int *l_649 = &g_94[6];
    int l_650 = 5L;
    int *l_651 = &g_94[6];
    int *l_652 = &g_94[6];
    int *l_653 = &g_94[6];
    int *l_654 = &g_94[4];
    int *l_655 = &l_650;
    int *l_656[6] = {&g_3[0][0], (void*)0, &g_3[0][0], (void*)0, &g_3[0][0], (void*)0};
    unsigned l_657 = 0xEBFA346EL;
    int i;
lbl_660:
    (*l_647) = l_646;
    l_657--;
    if (l_657)
        goto lbl_660;
    return p_62;
}







static int * func_67(int p_68)
{
    char *l_80 = &g_33[7];
    int l_258 = 0x7BBCE2EBL;
    int l_260 = (-1L);
    int l_261 = (-7L);
    int l_262 = 6L;
    int l_263 = 0x99DC0556L;
    int l_264[6] = {(-1L), (-1L), 0L, (-1L), (-1L), 0L};
    int l_265 = 1L;
    int l_266 = 0L;
    char l_267 = 0x5FL;
    unsigned char l_268 = 0x02L;
    int **l_271 = &g_223;
    unsigned char *l_278[4][5];
    short *l_279 = &g_89;
    unsigned short l_299 = 7UL;
    int l_310[9] = {0L, 9L, 0L, 9L, 0L, 9L, 0L, 9L, 0L};
    char **l_327[6][10] = {{&l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80}, {&l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80}, {&l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80}, {&l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80}, {&l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80}, {&l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80, &l_80}};
    char ***l_326 = &l_327[0][8];
    unsigned char l_332 = 0xA5L;
    unsigned short l_364 = 65527UL;
    short l_398 = (-2L);
    unsigned char ***l_466 = &g_354;
    int l_469 = 5L;
    short l_490 = (-3L);
    unsigned l_491[4] = {4UL, 0x4BE78A04L, 4UL, 0x4BE78A04L};
    char l_528 = 0L;
    int l_541 = 0xB531D12BL;
    int *l_577[9][9][3] = {{{&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}}, {{&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}}, {{&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}}, {{&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}}, {{&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}}, {{&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}}, {{&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}}, {{&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}}, {{&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}, {&l_262, &g_94[0], &l_261}}};
    char *l_600 = &l_528;
    unsigned *l_601 = (void*)0;
    unsigned short l_639 = 0x00D5L;
    int *l_642[1][10][9] = {{{&g_3[0][0], (void*)0, &g_94[6], &l_261, &g_3[0][1], &l_262, &l_469, &l_262, &l_262}, {&g_3[0][0], (void*)0, &g_94[6], &l_261, &g_3[0][1], &l_262, &l_469, &l_262, &l_262}, {&g_3[0][0], (void*)0, &g_94[6], &l_261, &g_3[0][1], &l_262, &l_469, &l_262, &l_262}, {&g_3[0][0], (void*)0, &g_94[6], &l_261, &g_3[0][1], &l_262, &l_469, &l_262, &l_262}, {&g_3[0][0], (void*)0, &g_94[6], &l_261, &g_3[0][1], &l_262, &l_469, &l_262, &l_262}, {&g_3[0][0], (void*)0, &g_94[6], &l_261, &g_3[0][1], &l_262, &l_469, &l_262, &l_262}, {&g_3[0][0], (void*)0, &g_94[6], &l_261, &g_3[0][1], &l_262, &l_469, &l_262, &l_262}, {&g_3[0][0], (void*)0, &g_94[6], &l_261, &g_3[0][1], &l_262, &l_469, &l_262, &l_262}, {&g_3[0][0], (void*)0, &g_94[6], &l_261, &g_3[0][1], &l_262, &l_469, &l_262, &l_262}, {&g_3[0][0], (void*)0, &g_94[6], &l_261, &g_3[0][1], &l_262, &l_469, &l_262, &l_262}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_278[i][j] = (void*)0;
    }
    for (p_68 = 17; (p_68 >= (-2)); p_68--)
    {
        int **l_255 = &g_223;
    }
    return (*l_271);
}







static int * func_72(int p_73, char * p_74, int p_75, int * p_76, int * p_77)
{
    unsigned l_95 = 0xB7DE7E85L;
    int l_109 = 0L;
    int l_110 = (-5L);
    int l_131 = 0L;
    int l_134 = (-3L);
    int l_163 = 0xF47C9686L;
    int l_164 = 0xA497B899L;
    int l_165 = 1L;
    unsigned char l_222 = 0xE1L;
    for (p_73 = 0; (p_73 < (-9)); p_73--)
    {
        int *l_86 = &g_3[0][0];
        int **l_85 = &l_86;
        int l_90 = 6L;
        int l_93 = 0x4E384C83L;
        int l_132 = 0xB1FF20F6L;
        char *l_154 = &g_33[7];
        char **l_153 = &l_154;
        int l_162[10][9][2] = {{{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}};
        unsigned char l_219 = 0UL;
        unsigned *l_254 = &l_95;
        int i, j, k;
        (*l_85) = &g_3[0][0];
        for (p_75 = 0; (p_75 == 13); p_75 = safe_add_func_int16_t_s_s(p_75, 4))
        {
            int *l_91 = &l_90;
            int *l_92[4] = {&l_90, &l_90, &l_90, &l_90};
            int i;
            (*l_85) = p_77;
            l_95++;
            (*l_85) = l_92[2];
            (*l_85) = &g_94[6];
        }
        for (l_90 = 4; (l_90 >= 0); l_90 -= 1)
        {
            int *l_100 = &g_94[4];
            short l_117 = 0x0049L;
            int l_129 = (-1L);
            int l_130 = 0x06BE8E64L;
            int l_133[6] = {(-7L), (-1L), (-7L), (-1L), (-7L), (-1L)};
            unsigned short *l_143 = &g_144;
            unsigned l_235 = 0xC6850E3DL;
            int i;
        }
        l_165 = ((((*g_223) = (p_76 == &l_134)) <= ((*l_254) = (g_3[0][1] <= 0x8CL))) && 0x6B3CL);
    }
    return p_76;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_33[i], "g_33[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_94[i], "g_94[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_146[i], "g_146[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_147, "g_147", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_148[i], "g_148[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_593[i], "g_593[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_674[i], "g_674[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_679, "g_679", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_695[i][j][k], "g_695[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_882[i][j], "g_882[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1090, "g_1090", print_hash_value);
    transparent_crc(g_1299, "g_1299", print_hash_value);
    transparent_crc(g_1322, "g_1322", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1356[i][j][k], "g_1356[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1401, "g_1401", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
