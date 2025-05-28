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



static int g_2[1] = {(-1L)};
static unsigned char g_17 = 0x9FL;
static int g_20 = 0L;
static short g_62 = (-1L);
static unsigned char g_66 = 0xFCL;
static unsigned char *g_65 = &g_66;
static char g_78[3][6][1] = {{{0xBEL}, {0xBEL}, {0xBEL}, {0xBEL}, {0xBEL}, {0xBEL}}, {{0xBEL}, {0xBEL}, {0xBEL}, {0xBEL}, {0xBEL}, {0xBEL}}, {{0xBEL}, {0xBEL}, {0xBEL}, {0xBEL}, {0xBEL}, {0xBEL}}};
static int g_83 = 6L;
static char g_94 = 0x28L;
static char g_96 = 1L;
static short g_125 = 0x30EEL;
static short g_135 = 7L;
static int g_139 = 0L;
static int *g_138 = &g_139;
static unsigned short g_164 = 0xD434L;
static int **g_168 = (void*)0;
static unsigned short g_187[4] = {0xB9B8L, 0x09DEL, 0xB9B8L, 0x09DEL};
static unsigned short *g_186 = &g_187[0];
static unsigned g_198 = 4294967288UL;
static const int g_260 = 0xD0803106L;
static const int *g_259 = &g_260;
static const int *g_261[7][8] = {{&g_2[0], &g_2[0], &g_260, &g_2[0], (void*)0, &g_2[0], &g_83, &g_2[0]}, {&g_2[0], &g_2[0], &g_260, &g_2[0], (void*)0, &g_2[0], &g_83, &g_2[0]}, {&g_2[0], &g_2[0], &g_260, &g_2[0], (void*)0, &g_2[0], &g_83, &g_2[0]}, {&g_2[0], &g_2[0], &g_260, &g_2[0], (void*)0, &g_2[0], &g_83, &g_2[0]}, {&g_2[0], &g_2[0], &g_260, &g_2[0], (void*)0, &g_2[0], &g_83, &g_2[0]}, {&g_2[0], &g_2[0], &g_260, &g_2[0], (void*)0, &g_2[0], &g_83, &g_2[0]}, {&g_2[0], &g_2[0], &g_260, &g_2[0], (void*)0, &g_2[0], &g_83, &g_2[0]}};
static unsigned short g_298 = 65535UL;
static int g_408[6] = {(-3L), (-1L), (-3L), (-1L), (-3L), (-1L)};
static unsigned char g_445 = 255UL;
static unsigned char *g_444 = &g_445;
static int g_476 = 9L;
static char *g_486[10] = {&g_94, &g_94, &g_94, &g_94, &g_94, &g_94, &g_94, &g_94, &g_94, &g_94};
static char **g_485 = &g_486[0];
static int g_506 = 0x0A1ED84AL;
static int *g_558 = &g_506;
static char ***g_722 = &g_485;
static unsigned char g_743 = 247UL;
static char *g_766 = &g_96;
static unsigned g_843 = 1UL;
static unsigned g_852 = 4294967293UL;
static short *g_896[5] = {&g_62, &g_62, &g_62, &g_62, &g_62};
static short **g_895 = &g_896[3];
static int *g_907[5][4] = {{&g_2[0], &g_506, &g_2[0], &g_506}, {&g_2[0], &g_506, &g_2[0], &g_506}, {&g_2[0], &g_506, &g_2[0], &g_506}, {&g_2[0], &g_506, &g_2[0], &g_506}, {&g_2[0], &g_506, &g_2[0], &g_506}};
static unsigned *g_931 = &g_843;
static unsigned **g_930 = &g_931;
static char g_964 = 0x8EL;



static unsigned short func_1(void);
static int func_5(unsigned char p_6, unsigned p_7, const unsigned p_8, unsigned short p_9);
static int func_10(unsigned char p_11);
static int * func_21(unsigned p_22, unsigned char * p_23, unsigned char p_24, int * p_25, unsigned p_26);
static int * func_27(int p_28, char p_29, unsigned char * p_30);
static char func_31(unsigned char * p_32);
static int func_33(unsigned short p_34, int p_35, int * p_36, int * p_37);
static unsigned char func_39(int * p_40, int * p_41);
static int * func_46(int * p_47, int p_48, unsigned char p_49, const short p_50);
static int * func_51(char p_52, int * p_53, unsigned char * p_54);
static unsigned short func_1(void)
{
    unsigned short l_12 = 65533UL;
    int *l_869 = &g_408[3];
    int *l_872 = (void*)0;
    int l_880[7];
    short l_888 = 0xBD1CL;
    const short l_890 = (-5L);
    int ***l_941[7][3][9] = {{{&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}}, {{&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}}, {{&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}}, {{&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}}, {{&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}}, {{&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}}, {{&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}, {&g_168, &g_168, (void*)0, &g_168, &g_168, &g_168, &g_168, &g_168, (void*)0}}};
    int ***l_943[9] = {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168};
    int ****l_942 = &l_943[0];
    unsigned *l_962[5][4] = {{&g_198, &g_198, &g_198, &g_198}, {&g_198, &g_198, &g_198, &g_198}, {&g_198, &g_198, &g_198, &g_198}, {&g_198, &g_198, &g_198, &g_198}, {&g_198, &g_198, &g_198, &g_198}};
    const int l_963 = 6L;
    int l_965[2];
    unsigned char l_966 = 0xEEL;
    int l_967 = (-6L);
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_880[i] = 0x5065F988L;
    for (i = 0; i < 2; i++)
        l_965[i] = (-9L);
    for (g_2[0] = 0; (g_2[0] == 16); ++g_2[0])
    {
        unsigned char l_835 = 0xA7L;
        unsigned *l_840 = &g_198;
        unsigned *l_841 = (void*)0;
        unsigned *l_842[6] = {&g_843, &g_843, (void*)0, &g_843, &g_843, (void*)0};
        int l_844 = (-5L);
        unsigned *l_845 = &g_843;
        unsigned char *l_853[6][1] = {{&l_835}, {&l_835}, {&l_835}, {&l_835}, {&l_835}, {&l_835}};
        unsigned l_854 = 4294967295UL;
        char **l_866 = &g_486[1];
        int *l_875 = &g_20;
        int i, j;
    }
    (*g_558) = (*g_259);
    l_967 |= (((*g_931) = ((l_941[5][0][1] == ((*l_942) = l_941[5][1][1])) >= (*g_186))) > (safe_rshift_func_uint16_t_u_s((*g_186), (safe_mul_func_uint16_t_u_u(0x9DAFL, (safe_mod_func_int8_t_s_s((func_5((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(func_10((((*g_444) = ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((**g_895) = func_5((*g_65), (g_198 |= g_62), l_963, (((**g_485) = (((((g_964 = 4294967288UL) | 1UL) || (**g_485)) & (*l_869)) <= (*l_869))) > 0x33L))), 0x31A6L)), 6)) > (*g_259))) <= 1L)), (*l_869))), 0x64BCL)), l_965[1])), l_966)), (*l_869), g_96, (*g_186)) <= 0x7C46L), 0xF0L)))))));


    for (g_83 = 0; (g_83 == (-11)); g_83 = safe_sub_func_uint8_t_u_u(g_83, 7))
    {
        const unsigned short l_970 = 0UL;
        const int * const *l_971 = &g_261[0][4];
        int *l_972 = &l_965[0];
        if (l_970)
            break;
        (*g_558) = (l_971 == &g_138);
        g_138 = (g_558 = l_972);

        ;
        ;
    }

    ;
    ;
    return (*g_186);



}







static int func_5(unsigned char p_6, unsigned p_7, const unsigned p_8, unsigned short p_9)
{
    int l_846[9][10] = {{0L, 7L, 0xB0A79DF3L, 7L, (-1L), 0L, (-1L), 7L, 0xB0A79DF3L, 7L}, {0L, 7L, 0xB0A79DF3L, 7L, (-1L), 0L, (-1L), 7L, 0xB0A79DF3L, 7L}, {0L, 7L, 0xB0A79DF3L, 7L, (-1L), 0L, (-1L), 7L, 0xB0A79DF3L, 7L}, {0L, 7L, 0xB0A79DF3L, 7L, (-1L), 0L, (-1L), 7L, 0xB0A79DF3L, 7L}, {0L, 7L, 0xB0A79DF3L, 7L, (-1L), 0L, (-1L), 7L, 0xB0A79DF3L, 7L}, {0L, 7L, 0xB0A79DF3L, 7L, (-1L), 0L, (-1L), 7L, 0xB0A79DF3L, 7L}, {0L, 7L, 0xB0A79DF3L, 7L, (-1L), 0L, (-1L), 7L, 0xB0A79DF3L, 7L}, {0L, 7L, 0xB0A79DF3L, 7L, (-1L), 0L, (-1L), 7L, 0xB0A79DF3L, 7L}, {0L, 7L, 0xB0A79DF3L, 7L, (-1L), 0L, (-1L), 7L, 0xB0A79DF3L, 7L}};
    int i, j;
    (*g_558) = l_846[8][5];
    (*g_138) = func_10(l_846[6][9]);
    return p_6;
}







static int func_10(unsigned char p_11)
{
    unsigned char *l_15 = (void*)0;
    unsigned char *l_16[5][10] = {{&g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17}};
    const int l_18 = (-6L);
    int *l_19 = &g_20;
    unsigned char **l_446 = &g_444;
    int **l_831 = &g_558;
    int i, j;
    (*l_19) |= ((safe_add_func_uint8_t_u_u((g_17 = g_2[0]), l_18)) < l_18);
    return p_11;
}







static int * func_21(unsigned p_22, unsigned char * p_23, unsigned char p_24, int * p_25, unsigned p_26)
{
    unsigned l_821[6];
    int l_822 = 0L;
    int l_823[9][1][7] = {{{0xE1886215L, 0xF8234F8BL, 0L, 0xFAB2903AL, 0L, 0xF8234F8BL, 0xE1886215L}}, {{0xE1886215L, 0xF8234F8BL, 0L, 0xFAB2903AL, 0L, 0xF8234F8BL, 0xE1886215L}}, {{0xE1886215L, 0xF8234F8BL, 0L, 0xFAB2903AL, 0L, 0xF8234F8BL, 0xE1886215L}}, {{0xE1886215L, 0xF8234F8BL, 0L, 0xFAB2903AL, 0L, 0xF8234F8BL, 0xE1886215L}}, {{0xE1886215L, 0xF8234F8BL, 0L, 0xFAB2903AL, 0L, 0xF8234F8BL, 0xE1886215L}}, {{0xE1886215L, 0xF8234F8BL, 0L, 0xFAB2903AL, 0L, 0xF8234F8BL, 0xE1886215L}}, {{0xE1886215L, 0xF8234F8BL, 0L, 0xFAB2903AL, 0L, 0xF8234F8BL, 0xE1886215L}}, {{0xE1886215L, 0xF8234F8BL, 0L, 0xFAB2903AL, 0L, 0xF8234F8BL, 0xE1886215L}}, {{0xE1886215L, 0xF8234F8BL, 0L, 0xFAB2903AL, 0L, 0xF8234F8BL, 0xE1886215L}}};
    int *l_830 = &g_506;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_821[i] = 0xF40DBDE9L;
    l_823[2][0][0] = (l_822 ^= l_821[4]);
    for (g_94 = 0; (g_94 <= 6); g_94 += 1)
    {
        int **l_824 = &g_138;
        int **l_825 = &g_558;
        int l_829 = 0xD2995660L;
        (*l_824) = &l_822;

        ;
        (*l_825) = ((*l_824) = p_25);

        ;
        for (g_66 = 0; (g_66 <= 6); g_66 += 1)
        {
            short l_826[9][8] = {{0L, 0x8B18L, 3L, 0xA299L, 0xCB74L, 0xFA16L, 0x1725L, 7L}, {0L, 0x8B18L, 3L, 0xA299L, 0xCB74L, 0xFA16L, 0x1725L, 7L}, {0L, 0x8B18L, 3L, 0xA299L, 0xCB74L, 0xFA16L, 0x1725L, 7L}, {0L, 0x8B18L, 3L, 0xA299L, 0xCB74L, 0xFA16L, 0x1725L, 7L}, {0L, 0x8B18L, 3L, 0xA299L, 0xCB74L, 0xFA16L, 0x1725L, 7L}, {0L, 0x8B18L, 3L, 0xA299L, 0xCB74L, 0xFA16L, 0x1725L, 7L}, {0L, 0x8B18L, 3L, 0xA299L, 0xCB74L, 0xFA16L, 0x1725L, 7L}, {0L, 0x8B18L, 3L, 0xA299L, 0xCB74L, 0xFA16L, 0x1725L, 7L}, {0L, 0x8B18L, 3L, 0xA299L, 0xCB74L, 0xFA16L, 0x1725L, 7L}};
            short *l_827 = &g_135;
            int *l_828[7] = {&g_408[2], &g_408[2], &l_822, &g_408[2], &g_408[2], &l_822, &g_408[2]};
            int i, j;
            g_139 |= (p_22 > (!l_823[7][0][0]));
            l_823[2][0][0] &= p_24;
            l_823[2][0][0] ^= (l_829 = l_822);
        }
    }


    ;
    (*l_830) = l_821[3];
    return p_25;


}







static int * func_27(int p_28, char p_29, unsigned char * p_30)
{
    int l_447 = 0x6389AE82L;
    int * const *l_448 = &g_138;
    int * const **l_449 = &l_448;
    const int *l_451[3][4][8] = {{{&g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139}, {&g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139}, {&g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139}, {&g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139}}, {{&g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139}, {&g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139}, {&g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139}, {&g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139}}, {{&g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139}, {&g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139}, {&g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139}, {&g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139, &g_2[0], &g_139}}};
    char *l_453 = &g_78[0][1][0];
    char **l_452 = &l_453;
    unsigned short l_472 = 0x1B82L;
    short *l_514 = &g_135;
    int *l_573 = &l_447;
    int *l_574 = &g_139;
    const unsigned char l_611 = 2UL;
    int *l_628 = &g_2[0];
    char l_649 = 2L;
    unsigned char l_663 = 0x14L;
    unsigned l_712[7] = {0x7A896428L, 0UL, 0x7A896428L, 0UL, 0x7A896428L, 0UL, 0x7A896428L};
    short **l_724[7][4][9] = {{{&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}}, {{&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}}, {{&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}}, {{&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}}, {{&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}}, {{&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}}, {{&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}, {&l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514, &l_514}}};
    int l_735[8][6][5] = {{{0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}}, {{0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}}, {{0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}}, {{0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}}, {{0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}}, {{0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}}, {{0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}}, {{0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}, {0L, (-3L), (-9L), (-3L), 0L}}};
    char l_739 = (-1L);
    unsigned char **l_808 = &g_444;
    unsigned l_811 = 4294967295UL;
    int *l_820 = &g_408[3];
    int i, j, k;
    (*g_138) ^= (((*g_444) >= l_447) & 0xB133L);
lbl_484:
    (*l_449) = l_448;
    if (p_29)
    {
        const int **l_450[6] = {&g_261[0][4], &g_261[0][4], &g_261[0][4], &g_261[0][4], &g_261[0][4], &g_261[0][4]};
        char **l_454 = &l_453;
        char ***l_459 = &l_452;
        unsigned *l_462[5];
        int *l_463 = &g_20;
        int **l_464 = &l_463;
        short *l_469 = &g_125;
        int *l_475 = (void*)0;
        unsigned char *l_477 = &g_17;
        unsigned **l_478 = &l_462[1];
        int i;
        for (i = 0; i < 5; i++)
            l_462[i] = &g_198;
        l_451[2][0][7] = &g_260;


        (**l_448) = (g_135 | (l_452 != (l_454 = &l_453)));
        (*l_464) = func_46(&g_408[3], (~(safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((&l_453 == ((*l_459) = (void*)0)), (0UL || (((safe_mod_func_uint32_t_u_u(g_20, (g_198 = p_28))) <= func_39(((*l_464) = l_463), &l_447)) ^ 0x67BAL)))) != g_408[3]), p_29))), (*p_30), g_66);

        ;
        ;
        (**l_448) = (0x0BL && (((*l_478) = func_51((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((*l_469) = g_408[5]) >= (g_78[0][5][0] | (safe_add_func_uint16_t_u_u(((**l_448) = 0x9FA3L), l_472)))), g_83)), (p_29 == (g_476 = (safe_sub_func_uint16_t_u_u(((*g_186) = p_28), p_29)))))), &l_447, l_477)) != l_451[2][0][7]));


    }
    else
    {
        char l_481[4] = {0x3EL, 0xFBL, 0x3EL, 0xFBL};
        int *l_516[2][7][10] = {{{&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}, {&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}, {&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}, {&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}, {&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}, {&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}, {&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}}, {{&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}, {&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}, {&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}, {&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}, {&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}, {&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}, {&g_408[2], (void*)0, &g_20, &g_20, &g_139, &l_447, &g_408[3], &g_506, (void*)0, &g_83}}};
        int *l_519 = &g_139;
        unsigned *l_631 = &g_198;
        unsigned **l_630 = &l_631;
        int **l_633 = &g_138;
        int *l_697 = &g_408[3];
        short **l_723 = &l_514;
        unsigned char * const l_742 = &g_743;
        unsigned char * const *l_741 = &l_742;
        char *l_767 = &g_96;
        char ***l_805 = &l_452;
        int l_812 = 0x065B28BBL;
        int i, j, k;
        for (g_125 = 0; (g_125 <= 0); g_125 += 1)
        {
            char l_495 = 0L;
            const short *l_513 = &g_62;
            unsigned short l_517 = 0xF6B9L;
            int l_518 = 0x623DF4E2L;
            const int l_531 = 0xFD22FCBBL;
            int i;
            g_408[g_125] |= 8L;
            for (g_445 = 0; (g_445 <= 6); g_445 += 1)
            {
                int *l_482 = (void*)0;
                int *l_483[10] = {(void*)0, &g_408[3], &g_408[g_125], &g_408[g_125], &g_408[3], (void*)0, &g_408[3], &g_408[g_125], &g_408[g_125], &g_408[3]};
                int i;
                for (g_164 = 0; (g_164 <= 5); g_164 += 1)
                {
                    int i, j, k;
                    g_408[g_164] = func_39(func_51((safe_sub_func_uint32_t_u_u((~(&g_408[g_164] != g_261[(g_164 + 1)][g_445])), (func_33((g_78[(g_125 + 1)][(g_125 + 1)][g_125] >= g_187[g_125]), l_481[3], &l_447, &l_447) <= (&l_481[0] != &p_29)))), l_482, &g_445), l_483[1]);
                }
                for (g_17 = 0; (g_17 <= 0); g_17 += 1)
                {
                    int *l_504 = &g_20;
                    short **l_515 = &l_514;
                    int i, j, k;
                    if (g_78[(g_125 + 1)][(g_125 + 4)][g_125])
                    {
                        char ***l_487 = &l_452;
                        int i, j, k;
                        if (p_29)
                            goto lbl_484;
                        (*g_138) = (g_408[(g_17 + 1)] &= g_78[g_125][(g_125 + 3)][g_17]);
                        (*l_487) = g_485;

                        ;
                    }
                    else
                    {
                        int **l_488 = &l_482;
                        short *l_505[1][8];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_505[i][j] = &g_62;
                        }
                        g_506 &= ((g_408[g_125] = func_33(g_187[g_17], g_187[(g_17 + 2)], func_46(((*l_488) = &l_447), (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_408[(g_17 + 5)], l_495)), ((**g_485) &= (safe_add_func_uint32_t_u_u(func_33(p_29, (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(0xDC44DF03L, ((void*)0 == &g_135))), 0x18L)), 0UL)), l_504, &g_20), l_481[3]))))), 0xC235C9C9L)), (*p_30), p_28), &l_447)) | 0x23D4L);

                        ;
                    }
                    if (((g_20 | ((4294967286UL ^ g_66) <= (*p_30))) && 8L))
                    {
                        int i, j;
                        g_261[(g_17 + 4)][g_445] = &g_408[g_125];
                        g_408[g_125] = ((***l_449) = l_517);
                        g_261[g_445][(g_17 + 2)] = l_504;
                    }
                    else
                    {
                        return l_483[1];


                    }
                }

                ;
            }
            if (g_187[(g_125 + 3)])
                break;
            (***l_449) = (l_518 ^= g_408[(g_125 + 5)]);
            for (g_506 = 3; (g_506 >= 0); g_506 -= 1)
            {
                int **l_520 = &l_519;
                (*l_520) = l_519;
                if ((*g_259))
                {
                    for (g_96 = 0; (g_96 <= 0); g_96 += 1)
                    {
                        int i, j, k;
                        if (g_78[(g_125 + 1)][(g_96 + 3)][g_96])
                            break;
                        if (g_78[g_125][(g_96 + 1)][g_96])
                            break;
                        if (g_78[g_125][(g_125 + 1)][g_96])
                            break;
                        (**l_520) = 0xC3C2E7FEL;
                    }
                }
                else
                {
                    unsigned l_525 = 0x32B2E3A0L;
                    unsigned *l_530[1];
                    char *l_534 = &l_481[3];
                    int l_536 = (-1L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_530[i] = (void*)0;
                    if ((safe_div_func_uint8_t_u_u(((*p_30) |= (p_28 > (safe_rshift_func_int16_t_s_s(((((g_20 <= (g_187[g_506] = (g_260 != l_525))) ^ ((safe_sub_func_int32_t_s_s((*g_259), (safe_lshift_func_int16_t_s_u(g_83, 11)))) <= p_29)) != ((**l_448) = ((p_29 > (***l_449)) || l_517))) | 4294967295UL), l_531)))), l_525)))
                    {
                        unsigned short l_535 = 8UL;
                        int *l_537 = &g_408[1];
                        l_536 |= (g_408[0] &= func_33(((*g_186) = (***l_449)), p_28, l_530[0], func_51(((**l_452) = ((*g_444) && (((safe_add_func_uint16_t_u_u((((p_28 || p_28) == (p_29 && ((void*)0 == l_534))) == g_96), 0x701FL)) < l_535) && g_2[0]))), (*l_520), &g_66)));
                        if ((*g_138))
                            break;
                        (*l_520) = l_537;

                        ;
                        if (p_29)
                            goto lbl_484;
                    }
                    else
                    {
                        unsigned char **l_548 = (void*)0;
                        unsigned char **l_549 = (void*)0;
                        unsigned char **l_550 = &g_444;
                        int **l_555[1];
                        int **l_556 = (void*)0;
                        int **l_557 = &g_138;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_555[i] = (void*)0;
                        (*l_557) = (**l_449);
                    }

                    ;
                }

                ;
                return g_558;


            }
        }
        (**l_448) = (safe_add_func_uint16_t_u_u(((***l_449) >= ((!p_28) == ((**l_448) & (safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s((((*p_30) > (*p_30)) ^ g_139), (*l_519))), (p_28 & p_29)))))), p_29));
        for (g_164 = 0; (g_164 > 49); g_164++)
        {
            unsigned l_567 = 0xE78C4C90L;
            int *l_570 = &g_2[0];
            int **l_571[7][9][4] = {{{(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}}, {{(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}}, {{(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}}, {{(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}}, {{(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}}, {{(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}}, {{(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}, {(void*)0, (void*)0, &g_138, (void*)0}}};
            unsigned short *l_572 = &g_298;
            int i, j, k;
            g_259 = (l_574 = (l_573 = func_46(func_51((((func_33(l_567, (safe_lshift_func_uint8_t_u_u((*g_444), (*g_444))), &l_447, (g_558 = l_570)) > (l_572 == (void*)0)) && (~(*p_30))) < (*p_30)), &g_2[0], &g_445), g_66, (*p_30), p_29)));

            ;
            ;
            ;
            ;
            if (((void*)0 != &g_486[0]))
            {
                int l_577[3];
                short l_584[9][9][3] = {{{(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}}, {{(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}}, {{(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}}, {{(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}}, {{(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}}, {{(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}}, {{(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}}, {{(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}}, {{(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}, {(-6L), 0x088BL, (-10L)}}};
                int *l_591 = &g_83;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_577[i] = 0L;
                for (g_62 = 6; (g_62 >= 27); g_62 = safe_add_func_int16_t_s_s(g_62, 1))
                {
                    int l_590 = 0xF4946598L;
                    (*l_519) = l_577[2];
                    for (g_83 = (-12); (g_83 > (-16)); g_83 = safe_sub_func_uint16_t_u_u(g_83, 3))
                    {
                        int *l_585 = &g_2[0];
                        (***l_449) = (*g_259);
                        (***l_449) = ((p_29 == (safe_lshift_func_int16_t_s_s((((*g_186) = (safe_mul_func_uint8_t_u_u((func_33(l_584[8][8][2], p_28, l_585, func_51(((*g_558) != ((l_590 = ((safe_div_func_int32_t_s_s((((*l_570) >= (((*l_572) &= ((safe_mul_func_uint8_t_u_u(l_577[2], ((*p_30) & func_33(p_28, (*l_519), &g_2[0], l_519)))) != 0x99L)) > l_590)) ^ g_2[0]), (*g_259))) | (*g_186))) >= (-1L))), l_585, &g_66)) && g_476), (*p_30)))) && p_28), 13))) && 0UL);
                    }
                }
                for (g_139 = 0; (g_139 <= 6); g_139 += 1)
                {
                    for (l_472 = 0; (l_472 <= 6); l_472 += 1)
                    {
                        int i, j;
                        g_261[g_139][(l_472 + 1)] = func_51((**g_485), (l_516[0][6][6] = &l_447), &g_17);
                        l_591 = (void*)0;

                        ;
                    }
                    for (l_567 = 0; (l_567 <= 2); l_567 += 1)
                    {
                        int i;
                        g_408[(l_567 + 3)] = g_408[(l_567 + 2)];
                    }
                }

                ;
            }
            else
            {
                int *l_610 = &l_447;
                int l_624 = 1L;
                if ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((*l_573), (safe_add_func_int8_t_s_s((&l_472 == &l_472), (safe_rshift_func_int8_t_s_s((0x6537BFE6L && (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(p_28, ((*g_186) = (safe_lshift_func_uint8_t_u_u(((***l_449) && (safe_mod_func_int32_t_s_s(func_33((*g_186), ((void*)0 != &g_445), l_610, l_519), (-1L)))), 4))))) == l_611), 7UL))), 3)))))), p_28)), p_29)))
                {
                    int l_612[1][1][1];
                    int l_623 = 0xE0552F0BL;
                    int l_625 = 0x369024C3L;
                    short *l_627 = &g_135;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_612[i][j][k] = 0x374987E1L;
                        }
                    }
                    (*g_138) |= (+(l_612[0][0][0] = p_28));
                    l_610 = l_519;

                    ;
                    for (g_476 = 0; (g_476 > 23); g_476 = safe_add_func_int8_t_s_s(g_476, 3))
                    {
                        unsigned char *l_620 = (void*)0;
                        unsigned char *l_621 = (void*)0;
                        unsigned char *l_622 = (void*)0;
                        if ((*l_610))
                            break;
                        (***l_449) = (!(safe_rshift_func_uint16_t_u_u((*g_186), 11)));
                        l_625 ^= func_33(((*g_186) = 65530UL), (~(safe_unary_minus_func_int32_t_s((l_624 &= (safe_div_func_int16_t_s_s((((l_612[0][0][0] >= (l_623 |= (*g_444))) == p_29) < (*l_610)), p_28)))))), l_516[1][3][4], &l_612[0][0][0]);
                        l_516[1][3][4] = &g_2[0];
                    }
                    if (((*g_138) = (safe_unary_minus_func_int32_t_s((((l_627 != l_572) > func_33((*l_610), (*l_574), func_51(((**g_485) = (-1L)), l_628, p_30), func_51((*l_628), &l_612[0][0][0], &g_66))) < (*l_570))))))
                    {
                        const int **l_629[10] = {&g_261[0][4], (void*)0, &g_261[0][4], (void*)0, &g_261[0][4], (void*)0, &g_261[0][4], (void*)0, &g_261[0][4], (void*)0};
                        int i;
                        l_612[0][0][0] = ((*l_610) = p_28);
                        l_451[2][0][7] = (g_259 = &l_624);

                        ;

                    }
                    else
                    {
                        return l_519;


                    }

                    ;

                }
                else
                {
                    unsigned ***l_632 = &l_630;
                    (*l_632) = l_630;
                }

                ;

                ;
                if ((*g_259))
                    break;


            }


        }



        ;
        ;
        ;
        if (p_28)
        {
            int l_648 = 0x5F56140AL;
            int *l_655 = &g_139;
            int *l_656 = &l_447;
            short *l_668[2];
            unsigned ***l_673 = &l_630;
            unsigned char * const *l_680[9][4] = {{&g_65, &g_65, (void*)0, &g_444}, {&g_65, &g_65, (void*)0, &g_444}, {&g_65, &g_65, (void*)0, &g_444}, {&g_65, &g_65, (void*)0, &g_444}, {&g_65, &g_65, (void*)0, &g_444}, {&g_65, &g_65, (void*)0, &g_444}, {&g_65, &g_65, (void*)0, &g_444}, {&g_65, &g_65, (void*)0, &g_444}, {&g_65, &g_65, (void*)0, &g_444}};
            int l_778[9][1] = {{9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_668[i] = &g_125;
lbl_746:
            (*l_633) = (*l_633);
            if ((((((0UL || ((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((*l_453) = (*l_519)), (*p_30))), 0x99L)) ^ (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((*p_30), (*p_30))), 4)))) != (safe_rshift_func_int8_t_s_s(p_29, 0))) | (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((*g_186), (***l_449))), l_648))) || l_649) || 3L))
            {
                int *l_650 = &g_2[0];
                char *l_669[4][4][3] = {{{&l_481[1], (void*)0, (void*)0}, {&l_481[1], (void*)0, (void*)0}, {&l_481[1], (void*)0, (void*)0}, {&l_481[1], (void*)0, (void*)0}}, {{&l_481[1], (void*)0, (void*)0}, {&l_481[1], (void*)0, (void*)0}, {&l_481[1], (void*)0, (void*)0}, {&l_481[1], (void*)0, (void*)0}}, {{&l_481[1], (void*)0, (void*)0}, {&l_481[1], (void*)0, (void*)0}, {&l_481[1], (void*)0, (void*)0}, {&l_481[1], (void*)0, (void*)0}}, {{&l_481[1], (void*)0, (void*)0}, {&l_481[1], (void*)0, (void*)0}, {&l_481[1], (void*)0, (void*)0}, {&l_481[1], (void*)0, (void*)0}}};
                unsigned short *l_670 = &g_164;
                unsigned short *l_671 = (void*)0;
                unsigned short *l_672 = &l_472;
                char l_691 = (-10L);
                int i, j, k;
                (*l_633) = l_650;

                ;
                (*l_655) = (p_28 == (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((*l_650), func_39(l_655, (l_656 = ((*l_633) = &l_447))))), ((*l_672) |= ((*l_670) |= (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_663, (safe_add_func_int8_t_s_s(((p_29 |= (g_187[0] || (safe_mul_func_uint16_t_u_u(((void*)0 != l_668[1]), 65526UL)))) < 0xDEL), 247UL)))), (*g_186))), 1UL)))))));

                ;
                if (((*l_519) = ((void*)0 == l_673)))
                {
                    for (g_83 = 0; (g_83 < (-18)); --g_83)
                    {
                        char l_683 = (-8L);
                        int l_684 = 8L;
                        l_684 = ((safe_add_func_int8_t_s_s(((((void*)0 != l_680[1][2]) & ((*l_655) |= ((**l_633) = 1L))) ^ (safe_div_func_uint16_t_u_u((+(*g_186)), (*l_628)))), 0L)) != (((*l_514) = 8L) != (l_683 = g_2[0])));
                        (*l_655) = (safe_unary_minus_func_uint8_t_u(253UL));
                    }
                    for (g_445 = 0; (g_445 <= 3); g_445 += 1)
                    {
                        int i;
                        if (g_187[g_445])
                            break;
                        (*l_633) = (*l_633);
                        (*l_655) &= p_28;
                    }
                    if (l_649)
                        goto lbl_686;
                }
                else
                {
                    l_650 = &g_408[3];

                    ;
                    (**l_633) |= 0L;
lbl_686:
                    (*l_656) ^= (*l_655);
                    (*g_138) ^= (safe_lshift_func_uint8_t_u_u((((**g_485) = p_29) >= (safe_lshift_func_uint16_t_u_s(l_691, ((*l_655) = 0x4B7FL)))), (safe_mul_func_int16_t_s_s(0x3438L, (g_62 ^= p_29)))));
                }

                ;
            }
            else
            {
                int *l_696[7];
                int l_704 = 0x78EBC6D4L;
                unsigned char *l_708 = &g_17;
                int *l_711 = (void*)0;
                int i;
                for (i = 0; i < 7; i++)
                    l_696[i] = &g_2[0];
                (*l_655) = 0x49B51A74L;
                if ((safe_mod_func_uint8_t_u_u((0x804DL < ((void*)0 == &g_485)), (**l_633))))
                {
                    (*l_519) = ((p_29 >= func_39(l_696[4], l_697)) < 4294967295UL);
                    (**l_633) = (safe_mul_func_int8_t_s_s(0L, (*l_655)));
                }
                else
                {
                    int *l_707 = &g_408[3];
                    if ((safe_div_func_int16_t_s_s(func_33(p_29, (*g_138), func_51((((~((*p_30) = (safe_lshift_func_int8_t_s_s(l_704, 4)))) >= (p_29 | (safe_add_func_int8_t_s_s(p_29, (-8L))))) > (*g_186)), func_51(p_28, l_707, l_708), p_30), l_707), g_17)))
                    {
                        (*l_633) = (void*)0;

                        ;
                        (*l_633) = l_696[1];

                        ;
                        (*l_655) &= (*l_573);
                    }
                    else
                    {
                        int **l_709 = &l_696[4];
                        (*l_709) = ((*l_633) = (*l_633));


                        if (l_649)
                            goto lbl_710;
lbl_710:
                        (*g_138) = (0x5720L != p_29);
                        (*l_633) = ((*l_709) = l_696[4]);

                        ;
                    }

                    ;

                    (*l_633) = l_696[4];
                    return l_711;



                }
            }
            (*l_519) = (-2L);
            if ((*l_574))
            {
                int *l_713 = &g_139;
                (*l_697) &= (func_39(func_51(l_712[4], &l_447, &g_17), l_713) < (safe_rshift_func_int8_t_s_s(p_29, 7)));
                (*l_633) = func_51((*l_713), (*l_633), &g_66);

                ;
                if (l_649)
                    goto lbl_716;
lbl_716:
                g_408[3] ^= (**l_633);
                (*l_633) = l_656;

                ;
            }
            else
            {
                char ***l_721 = &l_452;
                char ****l_720[4];
                int l_725 = 0xA6B7EC7BL;
                int l_750 = 0x793636CBL;
                const unsigned l_770[6][4] = {{4294967286UL, 1UL, 4294967286UL, 4UL}, {4294967286UL, 1UL, 4294967286UL, 4UL}, {4294967286UL, 1UL, 4294967286UL, 4UL}, {4294967286UL, 1UL, 4294967286UL, 4UL}, {4294967286UL, 1UL, 4294967286UL, 4UL}, {4294967286UL, 1UL, 4294967286UL, 4UL}};
                unsigned l_771 = 7UL;
                int l_774 = 0xB44139F9L;
                short l_775 = (-9L);
                unsigned l_776 = 4294967290UL;
                int l_777 = 0xD3D5FEBBL;
                int l_779 = 1L;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_720[i] = &l_721;
                (*l_655) |= ((*l_697) = p_29);
                for (p_29 = 0; (p_29 <= 0); p_29 += 1)
                {
                    (*l_656) = p_28;
                    for (g_476 = 3; (g_476 >= 0); g_476 -= 1)
                    {
                        int l_719 = 0x09BD82D6L;
                        (*l_633) = func_51(p_29, l_656, &g_66);

                        ;
                        (*l_656) = (safe_mul_func_int16_t_s_s(((*l_514) = (((l_719 < p_28) == l_719) && (*g_186))), p_28));
                        (*l_633) = l_655;

                        ;
                    }
                }
                if (((&l_452 != (g_722 = &g_485)) && ((l_724[1][1][4] = l_723) != (void*)0)))
                {
                    const char l_732[6] = {0x66L, 0x66L, 0x66L, 0x66L, 0x66L, 0x66L};
                    int l_738 = 0L;
                    char l_740 = 0xA8L;
                    int *l_747 = (void*)0;
                    int i;
                    l_725 &= func_39((*l_633), l_656);
                    (*l_697) ^= (((*p_30) = (safe_lshift_func_uint8_t_u_u((((*g_186) < (safe_mod_func_uint16_t_u_u((((((safe_div_func_int16_t_s_s(((*g_558) != func_39(l_655, ((*l_633) = (*l_633)))), p_28)) > (l_732[4] >= (safe_mod_func_int16_t_s_s((l_735[6][0][1] |= p_28), (safe_add_func_int16_t_s_s((l_725 ^= (l_738 = (l_732[3] | g_260))), l_732[4])))))) < (*g_444)) < p_28) == l_739), 1L))) >= p_29), 2))) != l_740);
                    (*l_697) ^= ((*l_519) & ((l_741 = &p_30) == (void*)0));

                    ;
                    for (g_743 = (-9); (g_743 > 35); g_743 = safe_add_func_int8_t_s_s(g_743, 6))
                    {
                        if (l_648)
                            goto lbl_746;
                        if (l_663)
                            goto lbl_753;
                        l_747 = &g_408[3];

                        ;
                        if (p_29)
                            break;
                        (*l_655) = (safe_mul_func_uint8_t_u_u(l_750, (safe_rshift_func_int16_t_s_u(g_506, 2))));
                    }

                    ;
                }
                else
                {
lbl_753:
                    (**l_633) = func_39(&g_20, &l_725);
                    for (l_648 = (-24); (l_648 > (-24)); l_648++)
                    {
                        (***l_449) |= p_29;
                        if (p_29)
                            break;
                        (*g_138) = (-7L);
                        if ((*l_655))
                            break;
                    }
                    for (p_29 = 6; (p_29 >= 2); p_29 -= 1)
                    {
                        l_778[1][0] &= (l_777 = ((safe_rshift_func_int16_t_s_u(((0x1DC5L && (((*l_631) = (safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((***l_721) &= 7L), 1)) <= ((l_725 &= ((*l_697) = ((*g_138) = (safe_sub_func_int16_t_s_s(((g_766 = (**g_722)) != (l_767 = (**g_722))), g_2[0]))))) ^ (((safe_sub_func_int8_t_s_s(l_770[5][0], l_771)) >= p_29) != ((((safe_add_func_int16_t_s_s(0L, l_774)) < l_771) || l_770[5][0]) >= l_775)))), p_29)), l_776))) != p_29)) & 2UL), 13)) ^ 0x4FF1L));
                        l_779 = p_29;
                    }

                    ;
                    ;
                }

                ;
                ;
            }

            ;
            ;
        }
        else
        {
            int *l_817 = (void*)0;
            int l_819 = 1L;
            for (g_298 = 24; (g_298 <= 6); g_298 = safe_sub_func_uint16_t_u_u(g_298, 4))
            {
                int l_793[6] = {0x6707D065L, (-1L), 0x6707D065L, (-1L), 0x6707D065L, (-1L)};
                int l_797[6] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
                int i;
                for (g_198 = 0; (g_198 != 55); g_198 = safe_add_func_uint32_t_u_u(g_198, 1))
                {
                    unsigned char l_796 = 0x15L;
                    const char *l_804 = &g_78[0][2][0];
                    const char **l_803 = &l_804;
                    const char ***l_802 = &l_803;
                }
                (***l_449) |= (*l_628);
            }
            l_819 |= (**l_448);
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
    ;
    ;
    return l_820;



}







static char func_31(unsigned char * p_32)
{
    unsigned short l_38 = 9UL;
    int *l_42[5];
    int *l_43 = &g_20;
    unsigned *l_297[9];
    unsigned char l_357 = 0xEEL;
    int i;
    for (i = 0; i < 5; i++)
        l_42[i] = &g_20;
    for (i = 0; i < 9; i++)
        l_297[i] = &g_198;
    if (func_33(((*g_186) = ((l_38 != func_39(l_42[3], l_43)) >= (g_298 |= (g_198 = ((*l_43) ^ (*l_43)))))), (g_2[0] ^ (!g_66)), l_297[4], l_42[3]))
    {
        int *l_309[1][7] = {{&g_2[0], &g_2[0], &g_20, &g_2[0], &g_2[0], &g_20, &g_2[0]}};
        unsigned char *l_320 = &g_66;
        int *l_385 = &g_83;
        unsigned char l_393 = 1UL;
        int l_399 = (-1L);
        int i, j;
        for (g_298 = 0; (g_298 <= 23); g_298 = safe_add_func_uint32_t_u_u(g_298, 2))
        {
            int *l_308 = &g_2[0];
            unsigned short *l_310[3][9] = {{&l_38, &g_187[2], &l_38, &g_187[2], &l_38, &g_187[2], &l_38, &g_187[2], &l_38}, {&l_38, &g_187[2], &l_38, &g_187[2], &l_38, &g_187[2], &l_38, &g_187[2], &l_38}, {&l_38, &g_187[2], &l_38, &g_187[2], &l_38, &g_187[2], &l_38, &g_187[2], &l_38}};
            unsigned l_311 = 4294967295UL;
            short *l_321 = &g_125;
            unsigned l_333 = 0x16774352L;
            int i, j;
            (*g_138) |= ((safe_rshift_func_int8_t_s_s(g_135, (safe_sub_func_uint16_t_u_u((l_311 = ((*g_186) = (g_164 ^= (*g_186)))), ((*l_321) = ((*g_259) > (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((*l_43), 0)), (safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((p_32 == l_320), 0x0B89L)), (*l_308))))))))))) & 0xBFL);
            if ((+0xDA193FA8L))
            {
                int l_326 = 0xACBB8F69L;
                if ((*l_43))
                    break;
                for (g_96 = 0; (g_96 == 21); g_96++)
                {
                    int l_324 = 0xCC25BD6DL;
                    int l_325 = (-1L);
                    l_325 = (g_83 = ((*g_138) = l_324));
                    (*g_138) = (l_326 ^= (1L > (*p_32)));
                }
            }
            else
            {
                int l_340 = 0L;
                char l_366 = 1L;
                unsigned char l_368 = 253UL;
                int l_378 = 0xF11E9C1DL;
                int *l_381[5][5] = {{(void*)0, (void*)0, &g_20, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_20, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_20, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_20, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_20, (void*)0, (void*)0}};
                int ***l_398 = &g_168;
                int i, j;
                if (((safe_mul_func_uint8_t_u_u((p_32 == &g_17), ((safe_mod_func_int16_t_s_s((-1L), 8L)) | 0x09A1L))) <= (((safe_mul_func_uint8_t_u_u(g_83, l_333)) >= (*g_186)) ^ (-10L))))
                {
                    unsigned short l_348 = 65530UL;
                    int *l_367 = &l_340;
                    char *l_374 = &g_96;
                    char *l_375 = (void*)0;
                    char *l_376 = (void*)0;
                    char *l_377 = &g_78[0][1][0];
                    if ((*l_308))
                    {
                        char *l_358 = &g_78[0][1][0];
                        char *l_359 = &g_96;
                        int **l_369 = &l_42[4];
                        (*g_138) |= ((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((-1L), 4)), ((*l_320) |= l_340))), 0x8C21L)) < (safe_div_func_uint16_t_u_u((g_164 &= (*g_186)), (safe_mul_func_int8_t_s_s(g_187[3], (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((*l_43))), l_348)))))));
                        if ((*l_308))
                            break;
                        (*l_369) = func_51((safe_add_func_uint16_t_u_u(l_348, (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((void*)0 != l_309[0][5]), l_357)), 6)) ^ (((*l_359) = ((*l_358) = 1L)) >= g_125)), ((safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((func_33(l_366, l_340, func_51(l_366, l_367, p_32), &g_2[0]) >= (*l_43)), 2)), 65526UL)) && 0UL), l_368)) | 8UL))))), l_367, p_32);


                    }
                    else
                    {
                        (*l_367) ^= (*l_43);
                        return g_125;
                    }


                    (*g_138) |= (safe_add_func_uint8_t_u_u((*p_32), (((*l_377) ^= ((*l_374) ^= (*l_308))) <= (((*l_367) = (*l_367)) < (l_378 |= g_298)))));
                    (*g_138) ^= ((safe_unary_minus_func_uint8_t_u((+(0xE8L < 0x24L)))) && ((g_198 = g_125) > (*l_308)));
                }
                else
                {
                    int **l_380[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_380[i] = (void*)0;
                    l_43 = (l_381[0][3] = (void*)0);

                    ;
                }


                ;
                (*g_138) = (safe_mod_func_int8_t_s_s(g_94, (safe_unary_minus_func_int32_t_s((g_20 > (*g_259))))));
                if (func_39(l_385, l_297[4]))
                {
                    char *l_386 = (void*)0;
                    char *l_387 = (void*)0;
                    char *l_388 = &g_96;
                    int **l_389 = &l_385;
                    (*l_389) = func_51(((*l_385) &= ((*l_388) = 0x7EL)), l_42[3], p_32);

                    ;
                }
                else
                {
                    char *l_392 = &g_94;
                    l_393 = (safe_rshift_func_int8_t_s_s(g_66, ((*l_392) = (&g_17 == l_320))));
                    if ((safe_rshift_func_uint16_t_u_u((*g_186), 12)))
                    {
                        unsigned l_396[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_396[i] = 0x20F97E79L;
                        return l_396[0];
                    }
                    else
                    {
                        (*l_385) ^= (safe_unary_minus_func_int8_t_s(((void*)0 == l_398)));
                        return (*l_308);
                    }
                }

                ;
                return l_399;
            }
            if (((safe_div_func_int8_t_s_s((((*p_32) > 6UL) || ((*p_32) != (1L || ((*l_385) |= (*l_43))))), g_164)) || 0x5EB201C3L))
            {
                const unsigned l_409 = 0xA0397AFEL;
                char *l_410 = (void*)0;
                char *l_411 = &g_96;
                int *l_412 = &g_2[0];
                if ((*g_259))
                    break;
                if (l_409)
                    continue;
                g_408[4] &= (g_260 ^ ((*p_32) = func_39(l_308, func_51(((*l_411) &= (((*l_321) = (-1L)) < (g_164 ^= (*g_186)))), l_412, &g_17))));
            }
            else
            {
                unsigned l_413 = 0x0735C378L;
                (*l_385) = l_413;
            }
        }
        for (g_198 = 0; (g_198 >= 47); g_198 = safe_add_func_int16_t_s_s(g_198, 4))
        {
            if ((*g_259))
                break;
        }
        return g_66;
    }
    else
    {
        unsigned l_420 = 0xCE26078FL;
        short *l_427[2];
        int l_428 = 0x085742EEL;
        int *l_437 = &g_2[0];
        int l_438[5];
        int **l_442 = (void*)0;
        int **l_443 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_427[i] = &g_125;
        for (i = 0; i < 5; i++)
            l_438[i] = 0x3D7AD810L;
        l_438[2] |= (safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((-4L), (func_33(l_420, ((*g_138) = (safe_mod_func_int8_t_s_s(g_83, (safe_sub_func_int32_t_s_s(func_33(l_420, (safe_mul_func_uint16_t_u_u(func_33((((*l_43) == (l_428 = 0x2458L)) < ((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(0L, 10)) != (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(0x4CA7D177L, ((*l_43) > 1UL))) | (*g_186)), g_78[0][1][0]))), l_420)) > g_20)), (*g_259), l_437, l_297[4]), 0UL)), l_297[4], l_437), (*g_259)))))), l_42[3], l_437) != g_96))), 9));
        for (g_96 = 0; (g_96 >= 1); g_96 = safe_add_func_int32_t_s_s(g_96, 8))
        {
            int *l_441 = &l_438[2];
            l_43 = l_441;

            ;
        }

        ;
        l_42[2] = l_42[0];
    }


    ;
    ;
    return g_135;
}







static int func_33(unsigned short p_34, int p_35, int * p_36, int * p_37)
{
    int l_301 = (-10L);
    for (p_35 = (-3); (p_35 < 17); ++p_35)
    {
        (*g_138) ^= 0L;
        if ((*p_37))
            continue;
        if ((*p_37))
            continue;
    }
    return l_301;
}







static unsigned char func_39(int * p_40, int * p_41)
{
    int l_58 = 0xB7215766L;
    for (g_17 = 0; (g_17 <= 35); g_17++)
    {
        int l_57 = 0x51AC06E3L;
        short *l_61 = &g_62;
        int l_63 = 0x9FA18394L;
        unsigned char *l_64 = &g_17;
        int **l_296[4];
        int i;
        for (i = 0; i < 4; i++)
            l_296[i] = &g_138;
        g_259 = func_46(func_51(((l_63 &= ((safe_mul_func_uint8_t_u_u(l_57, ((+l_58) == l_57))) ^ (safe_sub_func_int16_t_s_s(((*l_61) = g_2[0]), 0x2149L)))) >= (l_64 == (g_65 = (void*)0))), &g_2[0], l_64), l_57, l_58, g_2[0]);

        ;
    }
    p_41 = p_40;


    return l_58;
}







static int * func_46(int * p_47, int p_48, unsigned char p_49, const short p_50)
{
    char l_81 = 0xAEL;
    unsigned char *l_84 = &g_66;
    int l_90 = 0x713EC2CFL;
    int *l_95 = &l_90;
    unsigned char *l_145[1];
    int l_245[3];
    int i;
    for (i = 0; i < 1; i++)
        l_145[i] = &g_66;
    for (i = 0; i < 3; i++)
        l_245[i] = 1L;
    for (p_48 = 0; (p_48 >= (-10)); p_48--)
    {
        int *l_82 = &g_83;
        int **l_85 = &l_82;
        unsigned char *l_105 = &g_66;
        for (p_49 = 0; (p_49 != 14); p_49 = safe_add_func_uint32_t_u_u(p_49, 1))
        {
            unsigned l_77 = 4294967291UL;
            g_78[0][1][0] = l_77;
        }
        (*l_82) = (safe_add_func_uint32_t_u_u(g_66, (l_81 <= g_20)));
        (*l_85) = func_51(l_81, func_51((*l_82), (p_47 = l_82), l_84), &g_17);

        ;
        ;
        for (g_83 = 21; (g_83 < 6); g_83--)
        {
            int **l_88 = &l_82;
            int ** const l_89 = &l_82;
            int l_93 = (-1L);
            unsigned char *l_108 = &g_17;
            l_90 &= ((l_88 = (void*)0) == l_89);

            ;
            if ((*p_47))
            {
                int *l_91 = (void*)0;
                int *l_92[10] = {(void*)0, &g_83, &l_90, &l_90, &g_83, (void*)0, &g_83, &l_90, &l_90, &g_83};
                int i;
                l_93 ^= 0x7E48FFC8L;
                g_94 = (*p_47);
                return &g_2[0];


            }
            else
            {
                unsigned l_99[2][5] = {{4294967295UL, 4294967295UL, 0x1F806EB7L, 4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL, 0x1F806EB7L, 4294967295UL, 4294967295UL}};
                int *l_100 = &l_93;
                int *l_101 = (void*)0;
                int *l_102 = &l_90;
                int i, j;
                l_95 = ((*l_85) = &g_2[0]);

                ;
                (*l_102) = ((g_96 = p_50) > (safe_mul_func_int16_t_s_s(l_99[1][0], ((*l_82) <= (((*l_95) == ((*l_100) = (p_48 <= (*l_82)))) ^ p_49)))));
                for (g_62 = 18; (g_62 <= 17); g_62 = safe_sub_func_uint32_t_u_u(g_62, 2))
                {
                    unsigned char **l_106 = (void*)0;
                    unsigned char **l_107 = &g_65;
                    int l_111 = (-1L);
                    (*l_100) &= ((*l_102) = ((((((*l_107) = l_105) != l_108) | g_94) ^ (safe_rshift_func_int16_t_s_s(p_50, 10))) == l_111));

                    ;
                }
            }

            ;
            if (g_78[0][1][0])
                break;
        }
    }


    ;
    for (g_62 = (-24); (g_62 != 20); g_62 = safe_add_func_uint8_t_u_u(g_62, 1))
    {
        unsigned char *l_141 = &g_17;
        unsigned l_144[4][8][3] = {{{0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}}, {{0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}}, {{0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}}, {{0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}, {0xAAF76779L, 1UL, 0xAAF76779L}}};
        int l_150 = 0x97E3D8B0L;
        short l_160 = 1L;
        int *l_279[2][8][5] = {{{&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}}, {{&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}, {&g_20, &l_245[2], &g_2[0], &l_245[2], &g_83}}};
        char *l_293 = &g_78[0][1][0];
        unsigned char l_295 = 0xA6L;
        int i, j, k;
        for (g_83 = 20; (g_83 >= (-27)); --g_83)
        {
            int **l_116 = &l_95;
            int *l_117 = &l_90;
            unsigned char *l_169[6][7] = {{&g_66, &g_66, &g_66, &g_66, &g_66, &g_66, &g_66}, {&g_66, &g_66, &g_66, &g_66, &g_66, &g_66, &g_66}, {&g_66, &g_66, &g_66, &g_66, &g_66, &g_66, &g_66}, {&g_66, &g_66, &g_66, &g_66, &g_66, &g_66, &g_66}, {&g_66, &g_66, &g_66, &g_66, &g_66, &g_66, &g_66}, {&g_66, &g_66, &g_66, &g_66, &g_66, &g_66, &g_66}};
            int i, j;
            (*l_116) = p_47;


        }
        (*g_138) = (0x66AEL != g_20);
        (*g_138) = (*p_47);
        for (g_135 = 0; (g_135 == 23); ++g_135)
        {
            short l_224 = 0L;
            int l_248 = 0x80385B49L;
            int *l_249 = &g_20;
            short *l_282 = (void*)0;
            short *l_283[5];
            char **l_290 = (void*)0;
            char *l_292 = &g_96;
            char **l_291 = &l_292;
            char *l_294 = &g_78[0][1][0];
            int i;
            for (i = 0; i < 5; i++)
                l_283[i] = &g_125;
        }
    }


    return p_47;


}







static int * func_51(char p_52, int * p_53, unsigned char * p_54)
{
    int *l_69 = (void*)0;
    int **l_71 = (void*)0;
    int **l_72[4][6] = {{&l_69, &l_69, &l_69, &l_69, &l_69, &l_69}, {&l_69, &l_69, &l_69, &l_69, &l_69, &l_69}, {&l_69, &l_69, &l_69, &l_69, &l_69, &l_69}, {&l_69, &l_69, &l_69, &l_69, &l_69, &l_69}};
    int i, j;
    for (p_52 = (-7); (p_52 < (-5)); p_52 = safe_add_func_int32_t_s_s(p_52, 3))
    {
        int **l_70 = &l_69;
        (*l_70) = l_69;
        l_69 = l_69;
    }
    p_53 = &g_2[0];

    ;
    p_53 = p_53;
    return p_53;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_78[i][j][k], "g_78[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_187[i], "g_187[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_408[i], "g_408[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_743, "g_743", print_hash_value);
    transparent_crc(g_843, "g_843", print_hash_value);
    transparent_crc(g_852, "g_852", print_hash_value);
    transparent_crc(g_964, "g_964", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
