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



static unsigned g_16 = 0xE2A8D3A1L;
static unsigned char g_28 = 0x5FL;
static unsigned char g_30 = 1UL;
static unsigned short g_63 = 0x653DL;
static int g_72 = 0x558B047CL;
static int g_74 = 0x8DBEC8B2L;
static unsigned short g_78[2][8] = {{0xF29AL, 65533UL, 65535UL, 65533UL, 0xF29AL, 3UL, 0xF29AL, 65533UL}, {0xF29AL, 65533UL, 65535UL, 65533UL, 0xF29AL, 3UL, 0xF29AL, 65533UL}};
static unsigned short *g_87 = &g_63;
static unsigned short **g_86 = &g_87;
static int *g_94[10][4][6] = {{{(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}}, {{(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}}, {{(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}}, {{(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}}, {{(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}}, {{(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}}, {{(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}}, {{(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}}, {{(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}}, {{(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}, {(void*)0, &g_74, &g_74, &g_74, &g_74, &g_74}}};
static int *g_99 = &g_74;
static unsigned **g_131 = (void*)0;
static char g_139 = 0x5FL;
static char g_149 = (-1L);
static const int g_150 = (-1L);
static int g_163 = 0L;
static short g_166 = 7L;
static unsigned g_191 = 0x831FD11EL;
static short g_193 = (-1L);
static int g_197[2][8] = {{0x768EAD14L, 0x768EAD14L, 0x768EAD14L, 0x768EAD14L, 0x768EAD14L, 0x768EAD14L, 0x768EAD14L, 0x768EAD14L}, {0x768EAD14L, 0x768EAD14L, 0x768EAD14L, 0x768EAD14L, 0x768EAD14L, 0x768EAD14L, 0x768EAD14L, 0x768EAD14L}};
static int g_234 = 8L;
static unsigned g_245 = 4294967291UL;
static char ***g_333 = (void*)0;
static int ***g_346 = (void*)0;
static unsigned char g_392 = 0x6BL;
static unsigned char *g_400[9] = {&g_392, &g_392, (void*)0, &g_392, &g_392, (void*)0, &g_392, &g_392, (void*)0};
static int g_447 = 0x563D4E07L;
static int *g_493 = &g_72;
static int **g_492 = &g_493;
static int ***g_491 = &g_492;
static const unsigned short * const g_520 = (void*)0;
static int *g_606 = (void*)0;
static const int g_612 = 0L;
static unsigned char g_615 = 0x22L;
static unsigned g_636 = 4294967295UL;
static char * const *g_655 = (void*)0;
static unsigned char **g_692 = &g_400[0];
static unsigned char ***g_691 = &g_692;
static char g_744[4] = {7L, 0xE6L, 7L, 0xE6L};
static int g_771 = 7L;
static char g_831 = 0x10L;
static int g_834 = (-10L);
static const int *g_835 = &g_74;
static unsigned char *g_881[3] = {(void*)0, (void*)0, (void*)0};
static char g_969 = (-1L);
static short *** const g_997 = (void*)0;
static int g_1026 = (-5L);
static unsigned g_1072 = 9UL;
static unsigned ***g_1110 = (void*)0;
static unsigned ****g_1109 = &g_1110;
static short *g_1122 = &g_166;
static char g_1160 = 0xC1L;
static int g_1201 = 0x4F75DA97L;



static unsigned func_1(void);
static const int * func_2(const unsigned p_3, int * p_4, unsigned short p_5);
static short func_8(int p_9, unsigned short p_10, int p_11, int p_12);
static unsigned func_17(int * const p_18, unsigned short p_19, const unsigned p_20);
static int * const func_21(unsigned p_22, unsigned short p_23, unsigned p_24, unsigned p_25, unsigned char p_26);
static unsigned char * func_33(int * p_34, unsigned char p_35, unsigned char * p_36, unsigned char * p_37);
static int * func_38(char p_39);
static short func_44(int p_45, unsigned p_46, int * p_47);
static short func_52(unsigned char p_53, unsigned short p_54, unsigned char * p_55, unsigned short p_56);
static unsigned func_59(unsigned char * p_60, char p_61);
static unsigned func_1(void)
{
    unsigned l_15 = 4294967292UL;
    unsigned char *l_27 = &g_28;
    unsigned char *l_29 = &g_30;
    int *l_51 = (void*)0;
    int l_403[7][3][5] = {{{9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}}, {{9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}}, {{9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}}, {{9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}}, {{9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}}, {{9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}}, {{9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}, {9L, 0x08D77E45L, 0L, 0x53809639L, 0xF4A5B1CBL}}};
    unsigned char **l_671 = &g_400[0];
    unsigned l_672 = 0x7042C2BDL;
    short l_891 = 0x3A99L;
    unsigned short l_1047[4] = {0x5502L, 5UL, 0x5502L, 5UL};
    const int **l_1048 = &g_835;
    short l_1051 = 0x3797L;
    short *l_1052 = &g_193;
    unsigned l_1059[5][1] = {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}};
    int *l_1060[9];
    char l_1061 = 1L;
    int l_1064 = (-7L);
    char *l_1069 = &g_744[0];
    unsigned l_1070 = 0x1DACB30EL;
    char l_1090[8] = {1L, 2L, 1L, 2L, 1L, 2L, 1L, 2L};
    unsigned l_1108 = 4294967287UL;
    int l_1124[5];
    int l_1125 = 0x3A619594L;
    unsigned l_1144 = 5UL;
    unsigned ****l_1176 = &g_1110;
    unsigned l_1177 = 1UL;
    short l_1190 = 0x1F17L;
    unsigned * const ** const **l_1216 = (void*)0;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_1060[i] = &g_74;
    for (i = 0; i < 5; i++)
        l_1124[i] = 2L;
    (*l_1048) = func_2(((safe_add_func_uint32_t_u_u(((func_8((safe_add_func_int16_t_s_s(l_15, (g_16 && (func_17(func_21((((((*l_29) = (l_15 , ((*l_27) = (g_16 | 0UL)))) && (safe_sub_func_int16_t_s_s(g_28, (&g_30 != ((*l_671) = func_33(func_38((safe_mul_func_uint16_t_u_u(g_28, (safe_add_func_uint8_t_u_u((func_44((safe_sub_func_int8_t_s_s((!(safe_unary_minus_func_int16_t_s(0L))), g_28)), l_15, l_51) || l_403[3][0][2]), l_403[0][0][4]))))), g_150, l_27, &g_28)))))) ^ g_636) || 0xE9CE7CFCL), g_150, l_672, l_672, l_15), g_744[2], g_744[3]) != l_15)))), g_834, l_891, l_15) || (*g_87)) || 0x707AE280L), 0x532E6308L)) , 1UL), &g_834, l_1047[2]);



    ;


    ;
    l_1061 = (1L < (g_166 || ((safe_lshift_func_int16_t_s_u((((*l_29) = ((l_1051 ^ ((*l_1052) = g_28)) , (((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((0x53F3L != 1L) , (**l_1048)), (**l_1048))), 0L)), (**l_1048))) , g_139) , l_1059[1][0]))) > (**l_1048)), 4)) != (**l_1048))));
    if ((((0xABB6L || (0x83AFL > g_28)) && ((**l_1048) || (+(safe_sub_func_int16_t_s_s((l_1064 == (safe_mod_func_uint8_t_u_u((g_447 >= (safe_sub_func_int32_t_s_s((((*l_1069) = ((0UL > g_234) , 0xE3L)) & 0xB2L), g_834))), g_447))), l_1070))))) | g_193))
    {
        unsigned char l_1071 = 0x82L;
        int l_1073 = 8L;
        int l_1093 = 0x40E1E58BL;
        unsigned char l_1113 = 253UL;
        int l_1118 = (-4L);
        short **l_1121[8];
        unsigned short l_1123 = 0xF2D8L;
        int i;
        for (i = 0; i < 8; i++)
            l_1121[i] = &l_1052;
        if (l_1071)
        {
            unsigned char l_1079[7][9] = {{0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL}, {0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL}, {0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL}, {0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL}, {0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL}, {0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL}, {0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL, 0xE5L, 0xE5L, 0x8BL}};
            int l_1080 = 1L;
            int i, j;
            g_1072 = (!(-1L));
            l_1073 = (0UL >= (*g_87));
            for (g_30 = 0; (g_30 < 10); g_30 = safe_add_func_int16_t_s_s(g_30, 9))
            {
                char l_1078 = (-3L);
                if ((1UL != (safe_add_func_uint16_t_u_u((*g_87), (g_78[0][6] = (l_1078 , (l_1079[6][1] != (l_1080 = l_1079[6][1]))))))))
                {
                    l_1080 = 0x283C4B06L;
                }
                else
                {
                    if (l_1079[5][4])
                        break;
                    l_1080 = l_1071;
                }
                (*l_1048) = &g_197[0][4];

                ;
            }

            ;
        }
        else
        {
            unsigned char l_1094 = 0x9AL;
            int l_1111 = 0x0E8A013CL;
            int l_1112 = 0xB091ACB8L;
            for (g_63 = 0; (g_63 > 9); g_63 = safe_add_func_uint32_t_u_u(g_63, 9))
            {
                unsigned short *l_1102 = &l_1047[2];
                unsigned *l_1103 = (void*)0;
                unsigned *l_1104[6];
                int l_1107 = 3L;
                int i;
                for (i = 0; i < 6; i++)
                    l_1104[i] = &g_245;
            }
            for (g_28 = 0; (g_28 <= 8); g_28 += 1)
            {
                (*l_1048) = (void*)0;

                ;
            }

            ;
        }

        ;
        (*l_1048) = (*l_1048);
        l_1073 = (l_1113 = l_1073);
        l_1073 = (0UL == (safe_add_func_uint32_t_u_u(((l_1093 | ((((*l_29) = (safe_sub_func_int16_t_s_s(g_234, ((l_1118 >= (safe_rshift_func_int8_t_s_u(8L, ((*l_27) = (((~(l_1113 , (0L >= ((((((((g_1122 = &l_1051) != &l_1051) != l_1123) == (*g_87)) ^ l_1118) , 0x73ECL) & (-9L)) == l_1118)))) , l_1124[2]) > l_1118))))) > g_615)))) >= 9L) & 9L)) < l_1071), l_1113)));

        ;
    }
    else
    {
        int l_1133 = 0L;
        int l_1140 = 0xC1E1628CL;
        short l_1145 = (-1L);
        unsigned ****l_1175 = &g_1110;
        const unsigned l_1198 = 0UL;
        (*l_1048) = (void*)0;

        ;
        if (l_1125)
        {
            unsigned ***l_1126 = &g_131;
            int l_1128 = 0x1330AC0EL;
            const short l_1138 = 0xF239L;
            int l_1139 = 0xACDCB44DL;
            int *l_1141[10][2][5] = {{{&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}, {&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}}, {{&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}, {&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}}, {{&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}, {&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}}, {{&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}, {&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}}, {{&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}, {&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}}, {{&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}, {&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}}, {{&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}, {&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}}, {{&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}, {&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}}, {{&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}, {&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}}, {{&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}, {&l_403[3][1][2], &l_403[3][1][2], &l_1139, &l_403[3][1][2], &l_403[3][1][2]}}};
            int i, j, k;
            l_1140 = ((l_1126 != ((safe_unary_minus_func_uint16_t_u(((*g_1122) , (l_1128 & (!(l_1139 = (((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_1133, 9UL)), (safe_mod_func_int16_t_s_s(l_1133, (((safe_add_func_uint8_t_u_u(((l_1128 & (((*g_87) = (*g_87)) <= (l_1128 ^ l_1138))) , 0x1FL), l_1128)) , l_1133) , 65534UL))))) , l_1133) ^ g_245))))))) , (*g_1109))) <= l_1133);
            (*l_1048) = (l_1141[9][1][3] = &g_1026);

            ;

            l_1140 = ((safe_add_func_uint32_t_u_u(0xE5179A0EL, l_1144)) && (**l_1048));
        }
        else
        {
            return l_1133;
        }

        ;
        l_1145 = (*g_835);
        for (l_1064 = 8; (l_1064 >= 0); l_1064 -= 1)
        {
            unsigned short l_1146[9][3][7] = {{{0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}}, {{0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}}, {{0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}}, {{0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}}, {{0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}}, {{0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}}, {{0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}}, {{0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}}, {{0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}, {0xE793L, 7UL, 0UL, 2UL, 65526UL, 2UL, 0UL}}};
            int l_1153 = 0x67D4180BL;
            int l_1161[2];
            short l_1195 = 1L;
            unsigned l_1231 = 0xF701466DL;
            int *l_1232[10][1] = {{&g_1026}, {&g_1026}, {&g_1026}, {&g_1026}, {&g_1026}, {&g_1026}, {&g_1026}, {&g_1026}, {&g_1026}, {&g_1026}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1161[i] = 0L;
            for (l_1133 = 0; (l_1133 <= 8); l_1133 += 1)
            {
                int l_1158 = 0x22A68D72L;
                unsigned ****l_1170 = &g_1110;
                unsigned l_1199 = 4294967295UL;
                int l_1200 = 0L;
                unsigned * const ** const ***l_1217 = (void*)0;
                unsigned * const ** const ***l_1218 = &l_1216;
                unsigned *****l_1220 = (void*)0;
                unsigned ******l_1219 = &l_1220;
                unsigned *****l_1222 = &l_1170;
                unsigned ******l_1221 = &l_1222;
                int i;
            }
        }
    }

    ;
    ;
    return g_615;


}







static const int * func_2(const unsigned p_3, int * p_4, unsigned short p_5)
{
    return p_4;


}







static short func_8(int p_9, unsigned short p_10, int p_11, int p_12)
{
    unsigned l_892[5][4] = {{9UL, 0x8A974459L, 9UL, 0x8A974459L}, {9UL, 0x8A974459L, 9UL, 0x8A974459L}, {9UL, 0x8A974459L, 9UL, 0x8A974459L}, {9UL, 0x8A974459L, 9UL, 0x8A974459L}, {9UL, 0x8A974459L, 9UL, 0x8A974459L}};
    unsigned *l_899 = (void*)0;
    unsigned * const *l_898 = &l_899;
    unsigned * const **l_897 = &l_898;
    unsigned *l_902 = &g_636;
    char *l_912 = (void*)0;
    char **l_911 = &l_912;
    char ***l_910[10] = {&l_911, &l_911, &l_911, &l_911, &l_911, &l_911, &l_911, &l_911, &l_911, &l_911};
    int l_957 = 0x843C0ADFL;
    int l_960 = 0xDA33FB31L;
    short l_962[1][2];
    int ** const *l_964 = &g_492;
    int ** const **l_963 = &l_964;
    int l_979 = 0x7B4BCBE0L;
    unsigned short ***l_1032 = (void*)0;
    unsigned short **** const l_1031 = &l_1032;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_962[i][j] = 1L;
    }
    p_11 = ((l_892[3][2] , (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((&g_131 == l_897), ((0x6CCC51AAL != (safe_add_func_uint16_t_u_u(((l_892[4][3] , l_892[3][1]) > g_615), (-1L)))) <= g_771))), g_744[3]))) && l_892[0][2]);
    for (g_166 = 0; (g_166 == 27); ++g_166)
    {
        unsigned short *l_925 = (void*)0;
        int l_929 = (-1L);
        int l_956 = 0L;
        int l_978 = (-10L);
        unsigned char *l_1001 = &g_28;
        short *l_1019 = &l_962[0][1];
        short **l_1018[10][5] = {{(void*)0, &l_1019, &l_1019, &l_1019, (void*)0}, {(void*)0, &l_1019, &l_1019, &l_1019, (void*)0}, {(void*)0, &l_1019, &l_1019, &l_1019, (void*)0}, {(void*)0, &l_1019, &l_1019, &l_1019, (void*)0}, {(void*)0, &l_1019, &l_1019, &l_1019, (void*)0}, {(void*)0, &l_1019, &l_1019, &l_1019, (void*)0}, {(void*)0, &l_1019, &l_1019, &l_1019, (void*)0}, {(void*)0, &l_1019, &l_1019, &l_1019, (void*)0}, {(void*)0, &l_1019, &l_1019, &l_1019, (void*)0}, {(void*)0, &l_1019, &l_1019, &l_1019, (void*)0}};
        short ***l_1017 = &l_1018[1][0];
        int *l_1045 = (void*)0;
        int i, j;
    }
    for (l_960 = 6; (l_960 >= 0); l_960 -= 1)
    {
        int *l_1046 = &l_979;
        (*l_1046) = (*g_835);
        return p_11;
    }
    return p_11;
}







static unsigned func_17(int * const p_18, unsigned short p_19, const unsigned p_20)
{
    int **l_890 = &g_99;
    for (g_149 = 0; (g_149 >= (-22)); g_149 = safe_sub_func_int16_t_s_s(g_149, 3))
    {
        g_94[1][0][4] = p_18;
    }
    (*l_890) = p_18;


    return p_20;
}







static int * const func_21(unsigned p_22, unsigned short p_23, unsigned p_24, unsigned p_25, unsigned char p_26)
{
    int *l_673[1][1][9] = {{{(void*)0, &g_197[0][6], (void*)0, &g_197[0][6], (void*)0, &g_197[0][6], (void*)0, &g_197[0][6], (void*)0}}};
    int *l_745 = &g_197[1][5];
    unsigned char *l_753 = &g_615;
    unsigned char *l_755 = &g_615;
    int *l_779[5][8] = {{&g_197[1][5], &g_74, &g_234, &g_234, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_197[1][5], &g_74, &g_234, &g_234, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_197[1][5], &g_74, &g_234, &g_234, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_197[1][5], &g_74, &g_234, &g_234, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_197[1][5], &g_74, &g_234, &g_234, (void*)0, (void*)0, (void*)0, (void*)0}};
    int ***l_798[3];
    unsigned l_803 = 0xF55D8F13L;
    unsigned l_814 = 0x634E986FL;
    char l_882 = 0x7AL;
    short l_884 = (-10L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_798[i] = &g_492;
    l_673[0][0][7] = l_673[0][0][7];
    for (g_191 = 0; (g_191 <= 0); g_191 += 1)
    {
        int l_694 = 1L;
        unsigned char *l_696 = &g_615;
        unsigned char l_726 = 247UL;
        unsigned **l_731 = (void*)0;
        unsigned short **l_737[6][7] = {{(void*)0, &g_87, &g_87, (void*)0, (void*)0, &g_87, &g_87}, {(void*)0, &g_87, &g_87, (void*)0, (void*)0, &g_87, &g_87}, {(void*)0, &g_87, &g_87, (void*)0, (void*)0, &g_87, &g_87}, {(void*)0, &g_87, &g_87, (void*)0, (void*)0, &g_87, &g_87}, {(void*)0, &g_87, &g_87, (void*)0, (void*)0, &g_87, &g_87}, {(void*)0, &g_87, &g_87, (void*)0, (void*)0, &g_87, &g_87}};
        char l_743 = 1L;
        unsigned l_769 = 0x5331E1C6L;
        unsigned l_774 = 0x35E79842L;
        char *l_787 = &g_139;
        char ** const l_786 = &l_787;
        char **l_791 = &l_787;
        char ***l_790 = &l_791;
        unsigned l_867 = 4294967295UL;
        int i, j;
        for (g_245 = 0; (g_245 <= 1); g_245 += 1)
        {
            int *l_693 = &g_197[1][3];
            int i, j;
            if (g_197[g_191][(g_245 + 3)])
                break;
            for (g_615 = 0; (g_615 <= 0); g_615 += 1)
            {
                int l_674 = 0x5CAFC114L;
                int * const l_675 = &g_74;
                for (p_25 = 0; (p_25 <= 0); p_25 += 1)
                {
                    int i, j;
                    if ((g_197[g_191][(g_615 + 3)] = g_197[g_191][(g_615 + 3)]))
                    {
                        int **l_676[7] = {(void*)0, &l_673[0][0][7], (void*)0, &l_673[0][0][7], (void*)0, &l_673[0][0][7], (void*)0};
                        int **l_677 = &l_673[0][0][5];
                        int i, j, k;
                        if (l_674)
                            break;
                        (*l_677) = l_675;
                    }
                    else
                    {
                        unsigned *l_686 = &g_636;
                        short *l_689 = &g_193;
                        unsigned char *l_690 = &g_30;
                        int i, j, k;
                        (*l_675) = p_22;
                        if (g_197[g_191][(g_245 + 3)])
                            break;
                        l_673[g_615][p_25][p_25] = l_673[0][0][7];
                        g_197[g_191][(g_615 + 3)] = ((safe_mul_func_int16_t_s_s(g_197[g_191][(g_245 + 3)], 0UL)) ^ (((safe_sub_func_uint8_t_u_u(((*l_690) = (safe_lshift_func_uint16_t_u_s(((g_30 < ((*l_686) = (safe_mul_func_uint16_t_u_u((g_78[g_245][(g_615 + 7)] = g_197[g_191][(g_245 + 3)]), (p_25 , g_166))))) < p_22), ((g_166 >= ((*l_689) = ((safe_mod_func_uint32_t_u_u((((*g_87) = (*g_87)) >= (*l_675)), p_24)) != 0x192F88ACL))) && p_24)))), 0x43L)) , g_691) != (void*)0));
                    }
                    (*l_675) = (func_59(func_33(&g_234, (*l_675), &p_26, &p_26), p_24) < (p_24 , p_22));
                }
                l_693 = &g_197[g_191][(g_245 + 3)];
                g_94[2][1][4] = (void*)0;
                if (p_25)
                    break;
            }
            l_673[0][0][7] = &g_197[g_191][(g_245 + 3)];
        }
    }
    if ((*l_745))
    {
        int *l_885 = &g_234;
        l_779[4][6] = l_885;
    }
    else
    {
        int *l_886 = &g_197[1][5];
        int **l_887 = &l_745;
        (*l_887) = l_886;
    }
    return l_779[3][5];


}







static unsigned char * func_33(int * p_34, unsigned char p_35, unsigned char * p_36, unsigned char * p_37)
{
    unsigned char *l_670[1];
    int i;
    for (i = 0; i < 1; i++)
        l_670[i] = &g_28;
    for (g_163 = 22; (g_163 == 25); ++g_163)
    {
        if ((*p_34))
            break;
    }
    return l_670[0];


}







static int * func_38(char p_39)
{
    int **l_404 = &g_94[2][1][4];
    int l_412 = 0xE95312AAL;
    short l_466 = (-7L);
    unsigned char **l_489 = &g_400[1];
    int *l_525 = &g_163;
    unsigned short ***l_597[7] = {&g_86, &g_86, &g_86, &g_86, &g_86, &g_86, &g_86};
    unsigned short ****l_596 = &l_597[2];
    int *l_607 = &l_412;
    int i;
    (*l_404) = (void*)0;
    (*l_404) = (void*)0;
    for (g_16 = 0; (g_16 == 55); ++g_16)
    {
        int l_407 = 0x118B436DL;
        int l_409 = 4L;
        short l_446 = (-4L);
        int *l_450 = &l_409;
        if (l_407)
        {
            int *l_408 = (void*)0;
            int l_448 = 0L;
            unsigned l_449 = 6UL;
            (*l_404) = l_408;
            l_409 = 0xCF5C49D3L;
            for (g_149 = 3; (g_149 >= 0); g_149 -= 1)
            {
                int *l_410[8];
                unsigned short l_411 = 65531UL;
                unsigned char *l_421 = (void*)0;
                int i;
                for (i = 0; i < 8; i++)
                    l_410[i] = &g_234;
                (*l_404) = &l_409;
                (*l_404) = l_410[5];
                if (l_411)
                    break;
                l_412 = l_409;
                for (g_63 = 0; (g_63 <= 3); g_63 += 1)
                {
                    char *l_422 = &g_139;
                    int l_425 = 0x43D8EA6DL;
                    short *l_442 = &g_166;
                    short **l_441 = &l_442;
                    int i, j, k;
                    l_425 = ((((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((g_139 = (safe_lshift_func_int8_t_s_u((~((p_39 || ((safe_rshift_func_int16_t_s_s(p_39, ((!p_39) || (safe_add_func_uint32_t_u_u(l_407, (p_39 , p_39)))))) > p_39)) , p_39)), 4))), 2)), 1L)) <= 65535UL) <= p_39) & p_39);
                    for (g_392 = 0; (g_392 <= 1); g_392 += 1)
                    {
                        short *l_428 = &g_193;
                        short **l_427 = &l_428;
                        short ***l_426 = &l_427;
                        unsigned *l_443 = (void*)0;
                        unsigned *l_444 = (void*)0;
                        unsigned *l_445[1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_445[i] = &g_245;
                        (*l_426) = (void*)0;

                        ;
                        l_412 = (l_409 = g_78[g_392][(g_392 + 2)]);
                        l_448 = ((safe_mod_func_int8_t_s_s(func_59(&g_392, ((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(((((g_78[g_392][(g_149 + 4)] , (safe_sub_func_int8_t_s_s((p_39 > p_39), (g_78[g_392][(g_392 + 2)] >= (-5L))))) , ((!0xF35EB71DL) != ((l_409 = (((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((*g_87), 10)), p_39)) , l_441) == (void*)0)) || 0x0CD75C92L))) == l_446) && p_39), g_245)) < 0x47L), p_39)) , p_39)), g_447)) >= 0x35L);
                        g_94[g_149][g_149][(g_149 + 1)] = &l_425;
                    }


                    l_449 = (0x7DL <= 0x2AL);
                    (*l_404) = l_450;
                }
            }


            (*l_450) = p_39;
        }
        else
        {
            int *l_451[9] = {&g_197[1][7], &g_197[1][7], &l_412, &g_197[1][7], &g_197[1][7], &l_412, &g_197[1][7], &g_197[1][7], &l_412};
            int i;
            (*l_450) = p_39;
            g_94[2][1][4] = l_451[5];
        }


        (*l_404) = &g_197[1][5];
        (*l_404) = &l_409;
    }


    for (g_30 = 10; (g_30 < 49); ++g_30)
    {
        int ***l_459 = (void*)0;
        int l_462 = (-8L);
        unsigned char *l_468 = &g_28;
        int l_483 = 0x58A81E49L;
        int ***l_495 = &g_492;
        unsigned char *l_502[6] = {&g_28, &g_28, (void*)0, &g_28, &g_28, (void*)0};
        unsigned short *l_517 = &g_63;
        const char **l_551 = (void*)0;
        unsigned short l_639 = 1UL;
        int *l_640 = &g_74;
        int i;
        if (l_412)
        {
            int * const *l_457 = &g_99;
            int * const **l_456[4][5][3] = {{{(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}}, {{(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}}, {{(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}}, {{(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}, {(void*)0, &l_457, &l_457}}};
            int * const ***l_458 = &l_456[3][0][1];
            unsigned ***l_461 = &g_131;
            unsigned ****l_460 = &l_461;
            int *l_463 = &g_197[1][5];
            unsigned char *l_467[4][5] = {{(void*)0, (void*)0, &g_30, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_30, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_30, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_30, (void*)0, (void*)0}};
            short l_516 = (-4L);
            unsigned short *l_519 = &g_78[0][4];
            int *l_527 = &g_163;
            unsigned short l_563 = 1UL;
            unsigned l_594 = 0x9BBFCA88L;
            unsigned short l_604[9][7] = {{1UL, 1UL, 65535UL, 0x72A2L, 0x7A9EL, 0x26F6L, 0x26F6L}, {1UL, 1UL, 65535UL, 0x72A2L, 0x7A9EL, 0x26F6L, 0x26F6L}, {1UL, 1UL, 65535UL, 0x72A2L, 0x7A9EL, 0x26F6L, 0x26F6L}, {1UL, 1UL, 65535UL, 0x72A2L, 0x7A9EL, 0x26F6L, 0x26F6L}, {1UL, 1UL, 65535UL, 0x72A2L, 0x7A9EL, 0x26F6L, 0x26F6L}, {1UL, 1UL, 65535UL, 0x72A2L, 0x7A9EL, 0x26F6L, 0x26F6L}, {1UL, 1UL, 65535UL, 0x72A2L, 0x7A9EL, 0x26F6L, 0x26F6L}, {1UL, 1UL, 65535UL, 0x72A2L, 0x7A9EL, 0x26F6L, 0x26F6L}, {1UL, 1UL, 65535UL, 0x72A2L, 0x7A9EL, 0x26F6L, 0x26F6L}};
            int i, j, k;
            (*l_463) = ((l_412 = (l_462 = (safe_add_func_uint8_t_u_u((3UL || ((p_39 , ((*l_458) = l_456[0][0][2])) != l_459)), (&g_131 == ((*l_460) = &g_131)))))) < 0x35768BBAL);
            (*l_463) = p_39;
            if ((func_59(&g_392, l_412) , (safe_add_func_uint8_t_u_u((((*l_463) = l_466) & p_39), ((void*)0 != l_468)))))
            {
                short l_479 = (-6L);
                unsigned char *l_490 = &g_392;
                for (l_462 = 3; (l_462 >= 0); l_462 -= 1)
                {
                    unsigned short l_477 = 7UL;
                    int l_478 = 1L;
                    int ** const *l_496 = (void*)0;
                    if (p_39)
                        break;
                    if (p_39)
                        continue;
                    for (g_72 = 0; (g_72 <= 3); g_72 += 1)
                    {
                        short *l_482 = (void*)0;
                        unsigned char ***l_488 = (void*)0;
                        int i, j, k;
                        (*l_463) = (safe_rshift_func_uint8_t_u_s((p_39 , (func_59(&g_28, (p_39 > (p_39 <= (((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(g_139, (safe_mul_func_int16_t_s_s(p_39, g_149)))), (p_39 >= (l_478 = (p_39 >= l_477))))) != l_479) , p_39)))) < 0x05813685L)), 2));
                        if (l_479)
                            break;
                        l_483 = ((*l_463) = ((((safe_add_func_int16_t_s_s((g_193 = p_39), (g_166 = p_39))) <= (((void*)0 == (*l_460)) , l_483)) | (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((((((((p_39 , &g_234) == &l_478) ^ ((func_59(&g_392, g_139) < g_447) >= p_39)) , 1L) | (-8L)) & g_63) & 0x5EABDA34L), 0)), 2))) & 1UL));
                        l_489 = &g_400[2];
                    }
                    for (g_447 = 1; (g_447 >= 0); g_447 -= 1)
                    {
                        int ****l_494[3];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_494[i] = (void*)0;
                        g_197[g_447][(g_447 + 1)] = (g_197[g_447][(g_447 + 3)] != l_412);
                        (*l_404) = &l_478;
                        (*l_463) = p_39;
                        (*l_404) = &g_197[1][4];
                    }


                }
            }
            else
            {
                const unsigned l_501[2][6][6] = {{{0xC58EAFD5L, 0x670E5205L, 0x9697BE90L, 4294967295UL, 0x9697BE90L, 0x670E5205L}, {0xC58EAFD5L, 0x670E5205L, 0x9697BE90L, 4294967295UL, 0x9697BE90L, 0x670E5205L}, {0xC58EAFD5L, 0x670E5205L, 0x9697BE90L, 4294967295UL, 0x9697BE90L, 0x670E5205L}, {0xC58EAFD5L, 0x670E5205L, 0x9697BE90L, 4294967295UL, 0x9697BE90L, 0x670E5205L}, {0xC58EAFD5L, 0x670E5205L, 0x9697BE90L, 4294967295UL, 0x9697BE90L, 0x670E5205L}, {0xC58EAFD5L, 0x670E5205L, 0x9697BE90L, 4294967295UL, 0x9697BE90L, 0x670E5205L}}, {{0xC58EAFD5L, 0x670E5205L, 0x9697BE90L, 4294967295UL, 0x9697BE90L, 0x670E5205L}, {0xC58EAFD5L, 0x670E5205L, 0x9697BE90L, 4294967295UL, 0x9697BE90L, 0x670E5205L}, {0xC58EAFD5L, 0x670E5205L, 0x9697BE90L, 4294967295UL, 0x9697BE90L, 0x670E5205L}, {0xC58EAFD5L, 0x670E5205L, 0x9697BE90L, 4294967295UL, 0x9697BE90L, 0x670E5205L}, {0xC58EAFD5L, 0x670E5205L, 0x9697BE90L, 4294967295UL, 0x9697BE90L, 0x670E5205L}, {0xC58EAFD5L, 0x670E5205L, 0x9697BE90L, 4294967295UL, 0x9697BE90L, 0x670E5205L}}};
                unsigned char *l_524[9];
                int **l_526 = (void*)0;
                char *l_534[4];
                int l_535 = (-1L);
                int l_562 = 0x21AA4118L;
                int l_595 = 8L;
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_524[i] = &g_30;
                for (i = 0; i < 4; i++)
                    l_534[i] = &g_149;
                for (g_63 = (-4); (g_63 != 33); g_63++)
                {
                    unsigned char *l_509 = &g_30;
                    char l_510 = 0x20L;
                    char *l_522[1][1];
                    char **l_521 = &l_522[0][0];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_522[i][j] = &g_139;
                    }
                    for (l_462 = (-12); (l_462 > 9); ++l_462)
                    {
                        (*l_463) = ((l_501[0][3][2] & p_39) ^ p_39);
                        (*l_463) = p_39;
                    }
                    for (g_149 = (-14); (g_149 <= 28); g_149++)
                    {
                        unsigned short *l_515 = &g_78[0][1];
                        unsigned short **l_518[2];
                        char ***l_523 = &l_521;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_518[i] = &l_517;
                        (*l_463) = ((((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((func_59(l_509, p_39) == l_510), (((0xB505L | (((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(p_39, l_501[0][3][4])), ((*l_515) = 0xD564L))) ^ (*g_87)) , (-1L)) <= p_39) || g_392)) , p_39) ^ p_39))), 0xCAL)) == 0x5DEDL) , 9L) && 0xA9770D98L);
                        (*l_463) = (((((l_516 != ((l_519 = (g_87 = l_517)) != g_520)) || (((*l_523) = l_521) != (void*)0)) > p_39) || (l_510 || func_59(&g_28, (g_139 = p_39)))) & (-2L));

                        ;
                    }
                }

                ;
                if ((l_517 == (((*l_463) <= p_39) , (void*)0)))
                {
                    const int *l_540 = &g_447;
                    unsigned char *l_571 = &g_28;
                    for (g_16 = 0; (g_16 < 39); ++g_16)
                    {
                        const int *l_539 = (void*)0;
                        const int **l_538 = &l_539;
                        l_540 = ((*l_538) = &g_74);

                        ;
                        ;
                        l_540 = ((safe_mod_func_int32_t_s_s((l_462 = (((g_139 , g_197[1][1]) == (((*l_540) && (l_562 = ((safe_mul_func_int8_t_s_s((-1L), ((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((((void*)0 != l_551) <= (safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((*l_539), (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_39, ((((((safe_rshift_func_uint16_t_u_s((p_39 < 0x7C3CC60CL), 7)) > (*l_540)) & p_39) | (-1L)) , l_501[1][4][3]) == 5L))), p_39)))), g_197[0][5]))), 15)), (*l_540))), g_245)) , 255UL))) & 0L))) , l_563)) >= g_139)), 1L)) , (void*)0);

                        ;
                        (*l_538) = l_540;

                        ;
                    }

                    ;
                    if ((safe_mul_func_uint8_t_u_u(p_39, ((safe_rshift_func_int16_t_s_u(p_39, p_39)) <= (p_39 || ((*l_458) == (void*)0))))))
                    {
                        int *l_568[3];
                        unsigned short *l_569 = (void*)0;
                        short *l_570 = &g_193;
                        unsigned char **l_572 = &l_502[2];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_568[i] = &l_535;
                        (*l_404) = ((g_139 <= l_535) , (g_74 , l_568[0]));


                        (*l_404) = (((*l_570) = l_501[0][5][5]) , (func_59(((*l_572) = (g_400[0] = l_571)), (safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((p_39 != (g_139 = (p_39 != ((*l_463) = p_39)))), g_447)), 0xD64A8CAAL)), l_501[1][4][2]))) , &g_197[1][5]));
                        return l_463;



                    }
                    else
                    {
                        (*l_404) = &g_197[0][7];
                    }
                    return l_463;



                }
                else
                {
                    int *l_585[2][1];
                    int **l_586 = &l_585[1][0];
                    int **l_587 = &l_463;
                    short *l_598 = &l_466;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_585[i][j] = &g_447;
                    }
                    if (p_39)
                        break;
                    if ((g_234 < ((*l_598) = ((l_535 < ((((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((((*l_586) = l_585[0][0]) != ((*l_587) = (void*)0)) , p_39), p_39)), (((l_595 = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_594 = (-1L)), l_501[0][3][2])), g_30)), 12))) , (*g_491)) == (void*)0))) , (void*)0) != l_596) , (**l_586))) == p_39))))
                    {
                        int *l_599 = &g_197[1][5];
                        return l_599;



                    }
                    else
                    {
                        short l_605 = 0x088DL;
                        (**l_586) = (safe_mod_func_int8_t_s_s(p_39, (safe_add_func_int32_t_s_s(0x223D4FAAL, l_604[3][0]))));
                        l_535 = l_605;
                        (*l_586) = &g_74;


                        (*l_586) = ((*l_404) = g_606);


                    }

                    ;

                    (*l_404) = l_607;
                    for (g_16 = 0; (g_16 <= 47); g_16 = safe_add_func_uint8_t_u_u(g_16, 9))
                    {
                        const int *l_611[1];
                        const int **l_610 = &l_611[0];
                        const int *l_614 = &l_462;
                        const int **l_613 = &l_614;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_611[i] = &g_612;
                        g_94[3][3][3] = &l_535;
                        (*l_613) = ((*l_610) = l_463);


                        ;
                        if (g_615)
                            break;
                    }


                }


                ;
                (*l_404) = &g_197[1][5];
            }

            ;
            ;
        }
        else
        {
            int *l_620 = &g_234;
            int l_626 = 1L;
            for (l_466 = 0; (l_466 >= 14); ++l_466)
            {
                int l_633 = (-8L);
                unsigned *l_634 = &g_245;
                unsigned *l_635 = &g_636;
                for (g_191 = 0; (g_191 == 46); g_191 = safe_add_func_int32_t_s_s(g_191, 8))
                {
                    return l_620;



                }
                (*l_620) = p_39;
                l_639 = (safe_add_func_int16_t_s_s(p_39, p_39));
                if (p_39)
                    continue;
            }
            if (p_39)
                break;
            l_640 = l_620;

            ;
        }

        ;
        if (p_39)
        {
            unsigned char l_643 = 0x08L;
            short *l_646 = &l_466;
            (*l_404) = &l_412;
            (*l_640) = (safe_sub_func_uint32_t_u_u(l_643, (((safe_add_func_uint16_t_u_u(p_39, ((*l_646) = g_149))) , (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(l_643, 5)), g_191))) >= (safe_sub_func_int8_t_s_s((p_39 == (*g_87)), (func_59(&g_615, l_643) != p_39))))));
        }
        else
        {
            int *l_657 = &g_234;
            char *l_667 = &g_139;
            for (g_74 = 3; (g_74 == 29); g_74 = safe_add_func_int16_t_s_s(g_74, 4))
            {
                char * const **l_656 = &g_655;
                int l_658 = (-9L);
                (*l_607) = (((*l_656) = g_655) == (void*)0);
                (*l_404) = l_657;
                if (l_658)
                    continue;
            }
            (*l_640) = (safe_mul_func_uint8_t_u_u(p_39, (p_39 && ((*l_657) && ((*l_667) = (((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(p_39, (p_39 | ((((0xF46BL == (p_39 || (safe_rshift_func_int8_t_s_u((p_39 , ((p_39 , (*l_640)) != 255UL)), 6)))) , 1UL) | 0x43L) == (*l_657))))) > p_39), (*l_607))) & g_78[1][4]) < p_39))))));
        }
    }
    return &g_74;



}







static short func_44(int p_45, unsigned p_46, int * p_47)
{
    unsigned short *l_62 = &g_63;
    int l_68 = 0x4EB856A7L;
    unsigned char *l_368 = (void*)0;
    int *l_381[7][5] = {{&g_234, &g_234, &l_68, &g_234, &g_234}, {&g_234, &g_234, &l_68, &g_234, &g_234}, {&g_234, &g_234, &l_68, &g_234, &g_234}, {&g_234, &g_234, &l_68, &g_234, &g_234}, {&g_234, &g_234, &l_68, &g_234, &g_234}, {&g_234, &g_234, &l_68, &g_234, &g_234}, {&g_234, &g_234, &l_68, &g_234, &g_234}};
    char l_402 = (-1L);
    int i, j;
    if (((g_30 & func_52((((safe_lshift_func_uint8_t_u_u(g_16, 5)) < func_59(&g_28, ((g_28 ^ ((*l_62) = p_46)) >= ((((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((l_68 >= ((((+1UL) , g_16) < (((4294967295UL < l_68) & g_16) < 0L)) , 0x41L)) || g_30), p_46)), 15)) != p_46) & l_68) >= l_68)))) > l_68), l_68, &g_28, g_30)) != p_45))
    {
        int **l_329 = &g_99;
        const char **l_335 = (void*)0;
        const char ***l_334 = &l_335;
        (*l_329) = p_47;

        ;
        for (g_74 = 11; (g_74 <= 21); g_74 = safe_add_func_uint8_t_u_u(g_74, 1))
        {
            int l_332 = 0x3B0EC0A1L;
            int *l_336 = &g_197[1][5];
            (*l_336) = ((g_245 = ((4L | g_166) && l_68)) | (0x2A01L && (l_332 , ((*l_62) = ((g_163 == (g_333 == l_334)) < p_45)))));
        }
    }
    else
    {
        int l_345 = 0x075F8E6DL;
        unsigned short l_365 = 1UL;
        unsigned *l_374 = &g_245;
        unsigned **l_373 = &l_374;
        unsigned ***l_375 = &l_373;
        unsigned char l_376[3];
        short *l_377 = &g_193;
        int *l_378 = (void*)0;
        int *l_379 = (void*)0;
        int *l_380 = &g_197[1][5];
        int i;
        for (i = 0; i < 3; i++)
            l_376[i] = 252UL;
        for (g_63 = (-25); (g_63 == 30); g_63++)
        {
            const unsigned char l_347[2][3] = {{5UL, 5UL, 0xAFL}, {5UL, 5UL, 0xAFL}};
            int l_351 = 0x6B748E91L;
            char l_352 = 0x16L;
            int i, j;
            for (l_68 = (-10); (l_68 != (-25)); l_68--)
            {
                int * const l_341 = &g_197[0][1];
                int **l_342 = &g_94[2][1][4];
                (*l_342) = l_341;
                if (func_59(&g_30, p_45))
                {
                    for (g_193 = 0; (g_193 == 18); g_193 = safe_add_func_uint8_t_u_u(g_193, 1))
                    {
                        (*l_341) = ((((func_59(&g_28, p_45) > l_345) | ((*l_341) > ((g_191 , p_45) | (*l_341)))) == (g_346 != (void*)0)) && (*l_341));
                    }
                }
                else
                {
                    if (l_347[0][1])
                        break;
                }
                for (p_45 = 18; (p_45 != (-7)); p_45 = safe_sub_func_int16_t_s_s(p_45, 3))
                {
                    int l_350 = (-1L);
                    for (g_193 = 3; (g_193 >= 0); g_193 -= 1)
                    {
                        int i, j, k;
                        l_351 = (l_350 > 4294967287UL);
                    }
                }
                return l_68;
            }
            return l_352;
        }
        (*l_380) = (2UL > ((*l_377) = (safe_sub_func_int32_t_s_s((l_345 = 0x3D2869FDL), ((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((l_376[0] = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_365, (safe_add_func_uint8_t_u_u(g_30, 0xFFL)))), (*g_87))), p_45))), 5UL)), l_365)) || p_45)))));
    }





    l_381[6][3] = (void*)0;
    for (l_68 = 0; (l_68 != (-6)); l_68--)
    {
        int l_387 = 0x1DB1DC92L;
        unsigned char *l_390 = &g_30;
        unsigned char *l_391[8] = {&g_28, &g_392, &g_28, &g_392, &g_28, &g_392, &g_28, &g_392};
        int l_393 = 0x9E9E7353L;
        unsigned *l_394 = &g_245;
        int l_395 = 7L;
        short l_401 = 0x42CFL;
        int i;
        p_47 = (void*)0;
        l_395 = (safe_sub_func_uint8_t_u_u(p_46, ((safe_unary_minus_func_uint16_t_u(((((*l_394) = (g_197[0][6] , (((g_139 , ((g_392 = (l_393 = ((*l_390) = (safe_lshift_func_int16_t_s_s(l_387, 7))))) | p_45)) < l_387) , l_393))) && 1L) | 1UL))) <= p_45)));
        l_393 = (safe_mul_func_uint16_t_u_u((((*g_87) > 0x7BB3L) || (safe_rshift_func_uint16_t_u_u((*g_87), 7))), l_395));
        return l_401;
    }
    return l_402;
}







static short func_52(unsigned char p_53, unsigned short p_54, unsigned char * p_55, unsigned short p_56)
{
    const unsigned char l_77 = 0x1CL;
    unsigned short *l_84 = &g_63;
    unsigned short ** const l_83 = &l_84;
    int l_90 = 5L;
    unsigned char *l_140[5] = {&g_30, &g_28, &g_30, &g_28, &g_30};
    int l_168 = 0xA17331CCL;
    unsigned l_186 = 1UL;
    int *l_220 = (void*)0;
    unsigned ***l_230[9][6][4] = {{{&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}}, {{&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}}, {{&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}}, {{&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}}, {{&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}}, {{&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}}, {{&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}}, {{&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}}, {{&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}, {&g_131, &g_131, &g_131, &g_131}}};
    unsigned char l_280 = 4UL;
    int *l_324[6][8][5] = {{{(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}}, {{(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}}, {{(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}}, {{(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}}, {{(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}}, {{(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}, {(void*)0, &g_163, &g_163, (void*)0, &g_163}}};
    int * const * const l_323 = &l_324[4][2][1];
    int * const * const *l_322 = &l_323;
    int l_326 = (-3L);
    int i, j, k;
    if ((p_56 ^ (safe_rshift_func_int16_t_s_u(0L, l_77))))
    {
        int *l_93 = &g_74;
        int **l_97 = &g_94[2][1][4];
        int **l_98[1][5] = {{(void*)0, &l_93, (void*)0, &l_93, (void*)0}};
        int i, j;
        for (g_63 = 0; (g_63 <= 1); g_63 += 1)
        {
            int *l_81 = (void*)0;
            int *l_82 = &g_74;
            unsigned short ***l_85 = (void*)0;
            (*l_82) = (p_53 > (func_59(&g_28, l_77) || (((safe_add_func_uint16_t_u_u(p_56, g_63)) || (0x1E0EF155L >= (-5L))) || func_59(&p_53, p_53))));
            if (p_53)
                continue;
            g_86 = l_83;

            ;
            (*l_82) = ((safe_mul_func_uint16_t_u_u((l_90 = p_56), (*l_82))) ^ ((l_77 , &p_54) == ((*g_86) = &p_54)));

            ;
            for (l_90 = 1; (l_90 >= 0); l_90 -= 1)
            {
                for (p_54 = 0; (p_54 <= 1); p_54 += 1)
                {
                    const int *l_92 = (void*)0;
                    const int **l_91[7];
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_91[i] = &l_92;
                    l_93 = (void*)0;

                    ;
                    g_94[2][1][4] = &l_90;


                    return g_78[p_54][(p_54 + 2)];



                }
            }
        }

        ;
        ;
        (*l_93) = (safe_lshift_func_int8_t_s_s(((void*)0 != (*g_86)), 2));
        g_99 = ((*l_97) = &l_90);


        ;
        (*l_97) = &l_90;
    }
    else
    {
        g_94[2][1][4] = &l_90;


    }

    ;
    ;

    ;
    for (p_54 = 17; (p_54 == 55); p_54++)
    {
        char l_119[3][2];
        int l_123 = 1L;
        const unsigned l_147 = 0x0BC8DDD0L;
        int l_169 = 1L;
        int *l_208 = &g_163;
        int **l_207 = &l_208;
        int *l_240 = &g_74;
        unsigned char *l_253 = &g_28;
        unsigned char l_279 = 255UL;
        unsigned short **l_306 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_119[i][j] = 0xCDL;
        }
        for (g_63 = (-16); (g_63 >= 35); g_63++)
        {
            unsigned char *l_112[3][3][9] = {{{&g_30, (void*)0, &g_30, (void*)0, &g_28, (void*)0, (void*)0, &g_28, &g_30}, {&g_30, (void*)0, &g_30, (void*)0, &g_28, (void*)0, (void*)0, &g_28, &g_30}, {&g_30, (void*)0, &g_30, (void*)0, &g_28, (void*)0, (void*)0, &g_28, &g_30}}, {{&g_30, (void*)0, &g_30, (void*)0, &g_28, (void*)0, (void*)0, &g_28, &g_30}, {&g_30, (void*)0, &g_30, (void*)0, &g_28, (void*)0, (void*)0, &g_28, &g_30}, {&g_30, (void*)0, &g_30, (void*)0, &g_28, (void*)0, (void*)0, &g_28, &g_30}}, {{&g_30, (void*)0, &g_30, (void*)0, &g_28, (void*)0, (void*)0, &g_28, &g_30}, {&g_30, (void*)0, &g_30, (void*)0, &g_28, (void*)0, (void*)0, &g_28, &g_30}, {&g_30, (void*)0, &g_30, (void*)0, &g_28, (void*)0, (void*)0, &g_28, &g_30}}};
            unsigned l_120[5][7][1] = {{{4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}}, {{4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}}, {{4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}}, {{4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}}, {{4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}, {4294967287UL}}};
            unsigned *l_121 = (void*)0;
            unsigned *l_122[4];
            int *l_128[9];
            unsigned short ***l_201 = &g_86;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_122[i] = (void*)0;
            for (i = 0; i < 9; i++)
                l_128[i] = &l_123;
            if (((l_123 = ((l_77 && ((((((((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(65535UL, ((safe_sub_func_int16_t_s_s(g_74, g_28)) , g_63))), 0x72BDA1E5L)), l_119[0][1])) , 0xE2B5L) >= p_54) == 3L) <= p_53) , l_120[1][4][0]) , 0xCABD61F3L) && 0x691D68C9L)) , g_16)) >= 4UL))
            {
                unsigned short l_148 = 1UL;
                int l_151[6][4][5] = {{{9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}}, {{9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}}, {{9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}}, {{9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}}, {{9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}}, {{9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}, {9L, 0x61C211F7L, 0x4284883CL, 2L, 0x4A88B036L}}};
                int i, j, k;
                for (l_90 = 0; (l_90 == (-30)); l_90 = safe_sub_func_int16_t_s_s(l_90, 7))
                {
                    int **l_126 = (void*)0;
                    int **l_127 = &g_94[2][1][4];
                    (*l_127) = l_122[2];
                    for (p_56 = 0; (p_56 <= 3); p_56 += 1)
                    {
                        unsigned ***l_129 = (void*)0;
                        unsigned ***l_130 = (void*)0;
                        int l_134 = 0x1FBA64A4L;
                        char *l_137 = (void*)0;
                        char *l_138[4][3][2] = {{{(void*)0, &g_139}, {(void*)0, &g_139}, {(void*)0, &g_139}}, {{(void*)0, &g_139}, {(void*)0, &g_139}, {(void*)0, &g_139}}, {{(void*)0, &g_139}, {(void*)0, &g_139}, {(void*)0, &g_139}}, {{(void*)0, &g_139}, {(void*)0, &g_139}, {(void*)0, &g_139}}};
                        int i, j, k;
                        l_128[7] = l_122[p_56];
                        g_131 = &l_122[p_56];

                        ;
                        l_151[3][0][1] = (safe_mul_func_int16_t_s_s(((l_134 , (safe_lshift_func_uint8_t_u_s(l_119[0][1], (l_123 = (-4L))))) , ((~func_59(l_140[0], l_77)) && (1L < (1L || (g_149 = (safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((l_148 = ((((((safe_add_func_uint32_t_u_u(p_54, l_147)) , 1UL) != g_78[1][3]) == 1L) && 0L) , p_53)), 0L)) > l_119[0][1]), g_63))))))), g_150));
                    }
                }



                if (p_53)
                    continue;

            }
            else
            {
                int **l_152[1];
                unsigned char l_170 = 254UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_152[i] = &l_128[7];
                l_128[2] = &g_74;


                for (p_53 = 0; (p_53 <= 1); p_53 += 1)
                {
                    unsigned l_167 = 0xDC420A7EL;
                    for (l_123 = 0; (l_123 <= 1); l_123 += 1)
                    {
                        int *l_161 = &g_72;
                        int *l_162 = &g_163;
                        unsigned short ** const *l_164 = &g_86;
                        short *l_165 = &g_166;
                        int l_171 = (-8L);
                        l_169 = (l_168 = ((((**g_86) , (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(g_139, ((safe_mod_func_int16_t_s_s(((!p_56) , (((((((*l_162) = ((*l_161) = 0x4961C1CCL)) , &g_86) != l_164) == ((((l_90 = ((*l_165) = g_63)) && (254UL | ((*p_55) , 2L))) && g_74) | 2UL)) & g_78[1][3]) , g_16)), (*g_87))) || p_56))), 13)), l_123))) , l_167) && p_56));
                        (*g_99) = ((l_77 == l_170) , (p_56 != l_171));
                    }
                }
                for (g_163 = 0; (g_163 <= 2); g_163 += 1)
                {
                    int *l_172 = &l_169;
                    short *l_179 = &g_166;
                    short *l_192 = &g_193;
                    int i, j, k;
                    for (g_74 = 1; (g_74 >= 0); g_74 -= 1)
                    {
                        int i;
                        l_172 = l_122[g_74];

                        ;
                        l_128[1] = &g_74;
                    }

                    ;
                    (*g_99) = (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((((65530UL == (((l_122[(g_163 + 1)] == l_122[g_163]) == (~((*l_179) = g_78[1][6]))) || p_54)) , l_123) ^ ((l_119[0][1] == (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(l_186, (((*l_192) = (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((g_191 = ((g_63 , p_53) != 1UL)) <= 0x88L), g_150)), 6))) ^ p_54))) && 5UL), 0xCFL)), (-1L)))) < 0xC90CL)), p_53)), 9UL));
                }
            }



            for (g_193 = 7; (g_193 >= 0); g_193 -= 1)
            {
                unsigned l_196 = 4294967287UL;
                unsigned short ***l_203 = &g_86;
                unsigned char *l_210 = &g_28;
                int l_213 = (-1L);
            }
        }
        if ((g_193 || (p_53 <= 0L)))
        {
            unsigned l_246 = 0UL;
            unsigned char *l_247 = &g_30;
            int l_269 = 1L;
            int **l_295 = &l_240;
            if ((safe_rshift_func_int16_t_s_s((((g_149 = 0x7EL) & (g_245 = ((safe_add_func_uint8_t_u_u(l_168, (*l_240))) && 7UL))) & l_246), (0x1C45L <= (**g_86)))))
            {
                unsigned l_252 = 0xAE39DF6DL;
                int l_273 = (-1L);
                if (func_59(((((*p_55) == ((((func_59(l_247, g_166) && ((safe_lshift_func_int8_t_s_u((*l_240), 3)) && (safe_mul_func_int8_t_s_s(0x29L, l_252)))) , l_246) , func_59(l_253, l_252)) , (*p_55))) != 0x826BE533L) , &p_53), l_119[0][1]))
                {
                    unsigned l_268 = 0xE3E20B61L;
                    unsigned char *l_270 = &g_28;
                    unsigned short ***l_275 = &g_86;
                    unsigned short ****l_274[5] = {&l_275, &l_275, &l_275, &l_275, &l_275};
                    int i;
                    for (l_168 = 0; (l_168 == (-23)); l_168--)
                    {
                        unsigned char **l_260 = (void*)0;
                        unsigned char **l_261 = &l_140[0];
                        if (p_54)
                            break;
                        (*g_99) = (safe_rshift_func_uint16_t_u_s((((*l_240) || (p_54 > (safe_sub_func_uint16_t_u_u((*g_87), ((p_56 || p_56) > (((*l_261) = &g_30) == ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((**g_86), 3)), ((*l_240) >= p_53))) , &p_53))))))) & p_56), (*l_240)));
                    }
                    for (l_186 = 0; (l_186 <= 6); l_186 = safe_add_func_uint32_t_u_u(l_186, 3))
                    {
                        unsigned l_271 = 0x6F4DC4D7L;
                        char *l_272[10] = {&g_139, &g_139, &g_139, &g_139, &g_139, &g_139, &g_139, &g_139, &g_139, &g_139};
                        unsigned char **l_276 = &l_253;
                        int i;
                        (*g_99) = l_268;
                        l_269 = ((*g_99) = func_59(l_140[0], p_53));
                        (*l_240) = (func_59(l_270, p_54) <= g_234);
                        (*l_240) = (((l_273 = ((1UL >= l_271) < 1UL)) == (((((void*)0 == l_274[2]) , ((func_59(((*l_276) = &p_53), (g_139 = (((safe_mod_func_int16_t_s_s((-1L), (+(((l_252 < l_279) && (*l_240)) & l_268)))) & p_54) != l_268))) != p_56) & l_280)) & p_54) < l_271)) >= p_54);

                        ;
                    }

                    ;
                }
                else
                {
                    return l_273;




                }

                ;
            }
            else
            {
                unsigned char *l_291 = &g_28;
                char *l_292 = &g_149;
                int l_293[1];
                int **l_294[5];
                int i;
                for (i = 0; i < 1; i++)
                    l_293[i] = 0xCE087C82L;
                for (i = 0; i < 5; i++)
                    l_294[i] = &l_220;
                g_94[2][1][4] = &l_90;
                g_94[2][1][4] = ((safe_mod_func_int32_t_s_s(((((p_53 , (safe_add_func_uint32_t_u_u(func_59(((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((l_269 == (func_59(l_291, (*l_240)) < 1L)), 10)), (((*l_292) = p_54) < ((*p_55) , 0x17L)))) , &g_30), l_293[0]), p_56))) && g_191) , &p_54) != (*g_86)), l_293[0])) , &g_197[1][5]);
                l_240 = &l_269;

                ;
                if (l_269)
                    continue;
            }

            ;
            ;
            (*l_295) = &l_269;

            ;
        }
        else
        {
            char *l_299[5][4][9] = {{{&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}}, {{&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}}, {{&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}}, {{&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}}, {{&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}, {&g_139, (void*)0, (void*)0, (void*)0, &l_119[1][0], &g_149, &g_149, (void*)0, &l_119[0][1]}}};
            char **l_298 = &l_299[2][3][4];
            int l_309 = 0xDE397EF2L;
            int i, j, k;
            if ((func_59(&g_30, g_197[1][5]) || (safe_lshift_func_uint16_t_u_u(((*g_87) = 1UL), 7))))
            {
                for (g_72 = 0; (g_72 <= 3); g_72 += 1)
                {
                    char ***l_300 = &l_298;
                    int l_303 = 1L;
                    (*l_300) = l_298;
                    for (p_53 = 0; (p_53 <= 3); p_53 += 1)
                    {
                        int **l_302[2];
                        int ***l_301 = &l_302[0];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_302[i] = (void*)0;
                        (*l_301) = &g_94[(g_72 + 3)][g_72][(p_53 + 1)];


                        l_303 = (*g_99);
                        (*l_240) = (*g_99);
                    }
                }
            }
            else
            {
                unsigned short **l_307 = &l_84;
                int l_308 = 0x6A64D3B0L;
                l_309 = (safe_mul_func_int8_t_s_s((p_54 & (l_306 == l_307)), l_308));
                (*l_240) = ((safe_mul_func_int8_t_s_s((func_59(&l_280, (g_149 = (safe_sub_func_uint16_t_u_u(0x5774L, ((safe_lshift_func_uint16_t_u_u(((0x47L <= p_56) , p_56), 13)) | g_63))))) & ((p_53 = ((safe_add_func_uint16_t_u_u((l_308 = (l_90 = (*g_87))), 0L)) == g_193)) != (*p_55))), 1UL)) , 0xAC5F6222L);
            }
            l_220 = &g_234;

            ;
        }


        ;
        for (g_72 = 1; (g_72 >= 0); g_72 -= 1)
        {
            int * const * const **l_325 = &l_322;
            int i, j;
            g_197[g_72][(g_72 + 4)] = (((((safe_sub_func_uint8_t_u_u(0x29L, g_78[g_72][(g_72 + 3)])) , (safe_lshift_func_uint8_t_u_u(g_78[g_72][(g_72 + 3)], (((*l_325) = l_322) == &l_207)))) & g_191) & (((g_78[g_72][(g_72 + 3)] >= (p_53 || l_326)) == g_78[g_72][(g_72 + 3)]) , g_78[g_72][(g_72 + 3)])) || (*g_87));
            (*g_99) = g_78[g_72][(g_72 + 3)];
        }
    }



    ;
    (*g_99) = (safe_add_func_uint32_t_u_u(0x414C40C3L, 0xE693293BL));
    return p_54;




}







static unsigned func_59(unsigned char * p_60, char p_61)
{
    char l_69 = 0xDDL;
    int *l_73 = &g_74;
    (*l_73) = ((((((l_69 , ((safe_rshift_func_int16_t_s_s((-1L), l_69)) > (g_63 != (g_30 > l_69)))) , ((*p_60) <= l_69)) & ((g_72 && 6L) & l_69)) | p_61) >= l_69) , 0xB77C19C5L);
    return g_16;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_78[i][j], "g_78[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_197[i][j], "g_197[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_636, "g_636", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_744[i], "g_744[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_831, "g_831", print_hash_value);
    transparent_crc(g_834, "g_834", print_hash_value);
    transparent_crc(g_969, "g_969", print_hash_value);
    transparent_crc(g_1026, "g_1026", print_hash_value);
    transparent_crc(g_1072, "g_1072", print_hash_value);
    transparent_crc(g_1160, "g_1160", print_hash_value);
    transparent_crc(g_1201, "g_1201", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
