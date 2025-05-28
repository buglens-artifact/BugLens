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



static volatile int g_2 = 0x68206240L;
static volatile int g_3 = 0x642C70BBL;
static int g_4 = 0L;
static int g_7 = 0x55E00FE1L;
static int g_13[7][4][6] = {{{(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}}, {{(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}}, {{(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}}, {{(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}}, {{(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}}, {{(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}}, {{(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}, {(-5L), 0x849968CBL, 0x4B14151CL, 0x59008CF5L, 0xFA7AD11EL, 0x8D927F7BL}}};
static int g_53[7] = {2L, 2L, 0x10DA9BE8L, 2L, 2L, 0x10DA9BE8L, 2L};
static int g_386 = 0x0A0504D6L;
static unsigned short g_577 = 0x44A3L;



static unsigned char func_1(void);
static int func_16(unsigned short p_17, char p_18, unsigned p_19, unsigned p_20, unsigned char p_21);
static unsigned func_25(char p_26, unsigned p_27, short p_28);
static char func_29(int p_30, short p_31, unsigned p_32);
static int func_33(unsigned short p_34);
static int func_40(unsigned char p_41, short p_42, short p_43);
static unsigned short func_44(int p_45, unsigned p_46, unsigned short p_47);
static int func_63(unsigned char p_64, char p_65);
static unsigned func_69(unsigned p_70, unsigned short p_71, unsigned char p_72, char p_73);
static short func_85(short p_86, int p_87);
static unsigned char func_1(void)
{
    unsigned short l_24 = 0x1F17L;
    int l_615 = 0x8189BB98L;
    unsigned char l_667 = 250UL;
    unsigned char l_733[3][7][4] = {{{0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}}, {{0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}}, {{0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}, {0xBFL, 0xBFL, 0xD7L, 0x0AL}}};
    int i, j, k;
    for (g_4 = 0; (g_4 <= 21); g_4 = safe_add_func_int16_t_s_s(g_4, 7))
    {
        int l_389 = 0xD21AC2F2L;
        int l_390 = 0xBE96CB74L;
        unsigned char l_513 = 0x82L;
        int l_627[4][7][9] = {{{0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}}, {{0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}}, {{0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}}, {{0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}, {0x5513B137L, (-6L), 1L, 0x5F3751F6L, 0x6A047837L, 1L, (-3L), 1L, (-2L)}}};
        unsigned short l_692 = 1UL;
        int i, j, k;
        for (g_7 = 0; (g_7 == (-24)); g_7--)
        {
            int l_10 = 0xEC4279C4L;
            int l_646 = 1L;
            l_10 = g_7;
            for (l_10 = 0; (l_10 >= (-5)); l_10 = safe_sub_func_int16_t_s_s(l_10, 9))
            {
                unsigned l_22 = 2UL;
                int l_664 = 0x27530FAAL;
                int l_691 = 1L;
                for (g_13[1][1][0] = 0; (g_13[1][1][0] != 8); g_13[1][1][0] = safe_add_func_int16_t_s_s(g_13[1][1][0], 8))
                {
                    int l_23 = (-1L);
                    unsigned char l_514 = 5UL;
                    if (func_16((l_22 | l_23), (g_2 , l_24), (l_23 & (func_25(func_29(func_33(g_4), ((safe_mul_func_uint16_t_u_u(l_389, (g_4 > 0xA1L))) ^ l_390), l_23), g_4, g_13[1][1][0]) < l_513)), l_24, l_514))
                    {
                        return l_24;
                    }
                    else
                    {
                        unsigned char l_606 = 0x1DL;
                        if (g_4)
                            break;
                        g_53[0] = (safe_sub_func_int8_t_s_s((func_40(g_7, g_386, l_514) == g_7), ((safe_rshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(l_10, ((safe_add_func_uint32_t_u_u(4294967292UL, (((l_24 , l_606) , g_4) || g_577))) > g_4))) == l_513) <= 0xABF9L), 4294967294UL)), 7)) < l_23)));
                        l_390 = (((+func_25(g_3, g_13[2][2][3], (((g_13[3][1][1] , (safe_sub_func_uint32_t_u_u(func_29(l_23, (func_63(l_390, ((0x66DDL != (g_577 && ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_53[4], (-1L))), l_615)), g_53[0])) & l_606))) & g_4)) , l_606), l_615), l_10))) & l_606) , 7L))) > l_24) , (-1L));
                    }
                    for (l_615 = 0; (l_615 < (-3)); l_615 = safe_sub_func_int8_t_s_s(l_615, 2))
                    {
                        int l_620 = (-3L);
                        g_386 = (((safe_lshift_func_uint16_t_u_u((func_40(l_513, g_53[6], l_620) , 0xD841L), 7)) <= 0x07L) >= (g_13[0][2][4] == (g_4 != ((safe_sub_func_int8_t_s_s(((l_514 == l_10) && g_577), 0x5AL)) <= g_577))));
                    }
                    l_390 = (safe_mod_func_uint8_t_u_u(l_513, func_33(g_4)));
                }
                if (l_22)
                {
                    char l_632 = (-1L);
                    for (l_513 = 0; l_513 < 7; l_513 += 1)
                    {
                        for (g_3 = 0; g_3 < 4; g_3 += 1)
                        {
                            for (g_2 = 0; g_2 < 6; g_2 += 1)
                            {
                                g_13[l_513][g_3][g_2] = 0x871F871EL;
                            }
                        }
                    }
                    for (g_577 = (-8); (g_577 != 56); g_577++)
                    {
                        char l_645 = 0x33L;
                        int l_647 = 0x41127223L;
                        g_386 = l_627[0][2][7];
                        l_646 = ((func_85((func_16(l_22, ((safe_lshift_func_int16_t_s_s(((g_13[1][1][0] || l_615) <= ((safe_mul_func_uint8_t_u_u((l_632 >= g_3), (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((((safe_mul_func_uint16_t_u_u(0x7A9CL, (+l_627[0][2][7]))) > func_29(((safe_add_func_int32_t_s_s((!((safe_sub_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(((+0L) || ((func_25(l_10, l_22, g_7) < l_22) , 0x3423L)), 0UL)) , 0UL) > l_24), g_577)) < g_4)), g_577)) , g_53[4]), l_645, g_13[3][0][4])) & 1UL) , l_24), l_645)), 7)))) | 0x8CA5L)), 3)) == 1UL), l_632, l_645, g_7) && 0xFBL), g_7) == l_513) , l_645);
                        l_647 = 0x688E5827L;
                    }
                }
                else
                {
                    unsigned l_650 = 1UL;
                    l_646 = (((func_40((safe_sub_func_uint16_t_u_u(0xA30DL, 0x7512L)), g_386, l_650) & 0x0587L) && l_615) || ((l_390 == ((~((l_650 != 0x2B26L) == 0x78L)) || l_390)) != l_10));
                    if (g_386)
                    {
                        short l_663 = (-1L);
                        l_615 = g_2;
                        l_664 = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(65535UL, g_13[6][1][2])), ((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((l_627[0][2][7] < (((safe_mod_func_uint32_t_u_u(0xB6AE6AD7L, g_577)) > (safe_lshift_func_uint16_t_u_s((+func_85(((((func_40(g_53[0], (g_13[1][1][0] | g_3), (((l_10 >= l_650) , g_7) > 6L)) <= l_663) , l_650) & g_4) > g_13[1][1][0]), l_650)), g_13[1][1][0]))) , l_663)), g_4)), 1UL)) , g_2)));
                        if (l_650)
                            break;
                        l_390 = 0x62CEDB97L;
                    }
                    else
                    {
                        unsigned l_680 = 1UL;
                        l_615 = (safe_sub_func_uint16_t_u_u(l_667, g_4));
                        g_13[1][1][0] = (g_7 >= (0xC225L < ((l_667 == (g_2 && ((safe_lshift_func_uint8_t_u_s((0x5221557EL > g_13[1][1][0]), 2)) >= ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(func_33((((safe_mul_func_uint8_t_u_u((g_386 <= g_2), ((safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((func_85((func_69(g_13[5][0][4], g_386, g_577, l_646) ^ l_680), l_667) | g_4), 65535UL)) , g_13[6][2][1]), l_646)) || 4294967289UL))) , l_10) , g_3)), l_646)), g_577)) <= g_7)))) , 0xED6AL)));
                    }
                }
                if ((((~(g_2 <= (safe_mul_func_int16_t_s_s(g_7, (((((safe_mul_func_uint16_t_u_u(l_664, (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((+((((~0x49L) != g_386) && 0xDB68L) == g_13[0][1][1])), g_4)), 4)))) > (safe_mul_func_int16_t_s_s((l_691 > g_7), l_664))) <= g_53[4]) != g_13[4][0][4]) == g_53[4]))))) | 0xAEL) == g_386))
                {
                    g_13[1][1][0] = (l_692 && (((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((l_10 >= (l_24 != g_3)), 15)), ((safe_add_func_int32_t_s_s(l_667, g_13[1][1][0])) , (l_627[0][2][7] & 0x4DL)))) || g_7) , 0x4A540202L));
                    return g_13[4][0][5];
                }
                else
                {
                    for (l_691 = 0; (l_691 <= 3); l_691 += 1)
                    {
                        int i, j, k;
                        g_13[(l_691 + 3)][l_691][l_691] = (g_13[l_691][l_691][l_691] >= (safe_add_func_uint32_t_u_u(9UL, 0UL)));
                    }
                    for (l_664 = 0; (l_664 <= 3); l_664 += 1)
                    {
                        int i, j, k;
                        if (l_627[l_664][(l_664 + 2)][(l_664 + 1)])
                            break;
                        g_386 = (safe_rshift_func_uint8_t_u_u(((func_85(g_386, (((safe_add_func_uint16_t_u_u(g_13[1][1][0], g_53[5])) & (l_24 || g_4)) == g_577)) < 0xA4L) == g_13[1][0][1]), g_577));
                    }
                }
            }
            for (l_24 = 0; (l_24 <= 3); l_24 += 1)
            {
                int i;
                g_53[(l_24 + 1)] = (safe_lshift_func_uint16_t_u_u(65531UL, 13));
                for (l_513 = 0; (l_513 <= 3); l_513 += 1)
                {
                    int i, j, k;
                    if (l_627[l_513][l_24][l_513])
                        break;
                    g_53[1] = (l_627[l_24][(l_513 + 3)][(l_24 + 3)] != l_627[l_24][(l_24 + 2)][l_513]);
                    l_646 = (-1L);
                    l_390 = g_386;
                }
            }
            l_390 = (safe_mod_func_int32_t_s_s((0xCE0FL ^ (((l_24 > g_3) ^ (((safe_mod_func_uint8_t_u_u((g_53[5] , (g_4 , ((((g_13[1][1][0] == (1UL | (safe_mul_func_uint16_t_u_u(g_7, ((((g_13[1][1][1] && 1UL) <= g_7) && l_10) == l_627[1][5][8]))))) ^ 0x51C5347BL) < l_667) || g_386))), 0xBAL)) >= 6UL) | l_10)) | (-10L))), 1UL));
        }
        if ((safe_add_func_uint16_t_u_u((~(safe_add_func_uint32_t_u_u((func_85(g_13[2][2][4], l_692) == (g_13[5][3][3] < (g_2 >= (safe_unary_minus_func_int16_t_s(l_667))))), g_7))), (l_390 == (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_13[4][3][2], 4)), g_13[1][1][0]))))))
        {
            unsigned short l_732 = 0x6099L;
            g_2 = (((l_615 <= ((safe_sub_func_int32_t_s_s(g_13[4][0][5], g_4)) != ((((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(255UL, (safe_mul_func_uint16_t_u_u(g_2, g_53[2])))), l_732)), (l_732 & (0x93D2L || g_53[1])))) || l_732) > g_386) , l_733[2][2][2]))) > 0x24L) < g_4);
            l_615 = g_386;
        }
        else
        {
            g_2 = g_2;
        }
    }
    g_13[6][3][4] = (((-1L) ^ (safe_mul_func_int8_t_s_s(g_577, g_13[1][1][0]))) >= l_615);
    return g_2;
}







static int func_16(unsigned short p_17, char p_18, unsigned p_19, unsigned p_20, unsigned char p_21)
{
    unsigned short l_515 = 65528UL;
    int l_530 = 0x8B17C481L;
    short l_539[5][8][6] = {{{0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}}, {{0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}}, {{0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}}, {{0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}}, {{0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}, {0x03D0L, 0x03D0L, 0xA593L, 0x03D0L, 0x03D0L, 0xA593L}}};
    unsigned short l_546 = 1UL;
    unsigned char l_547[9] = {4UL, 1UL, 4UL, 1UL, 4UL, 1UL, 4UL, 1UL, 4UL};
    unsigned char l_561 = 246UL;
    unsigned char l_568[4][3][6] = {{{7UL, 0x36L, 0x49L, 0xAEL, 252UL, 0xAEL}, {7UL, 0x36L, 0x49L, 0xAEL, 252UL, 0xAEL}, {7UL, 0x36L, 0x49L, 0xAEL, 252UL, 0xAEL}}, {{7UL, 0x36L, 0x49L, 0xAEL, 252UL, 0xAEL}, {7UL, 0x36L, 0x49L, 0xAEL, 252UL, 0xAEL}, {7UL, 0x36L, 0x49L, 0xAEL, 252UL, 0xAEL}}, {{7UL, 0x36L, 0x49L, 0xAEL, 252UL, 0xAEL}, {7UL, 0x36L, 0x49L, 0xAEL, 252UL, 0xAEL}, {7UL, 0x36L, 0x49L, 0xAEL, 252UL, 0xAEL}}, {{7UL, 0x36L, 0x49L, 0xAEL, 252UL, 0xAEL}, {7UL, 0x36L, 0x49L, 0xAEL, 252UL, 0xAEL}, {7UL, 0x36L, 0x49L, 0xAEL, 252UL, 0xAEL}}};
    unsigned char l_594 = 0xF9L;
    char l_595[7][3][10] = {{{(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}}, {{(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}}, {{(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}}, {{(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}}, {{(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}}, {{(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}}, {{(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}, {(-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L, 0xCCL, 0x81L, (-1L), 0x81L}}};
    int i, j, k;
    if (l_515)
    {
        unsigned l_526 = 0UL;
        int l_529 = 1L;
        l_529 = ((g_53[6] != ((safe_add_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u(0x9DD1L, ((safe_lshift_func_int16_t_s_s((g_53[5] && ((l_515 < 3L) != (safe_lshift_func_int8_t_s_u(l_526, 2)))), (0x87L == ((safe_mul_func_uint8_t_u_u(l_515, (p_21 | p_18))) != p_18)))) || l_515))) == (-1L)) || p_19) , l_526), l_515)) != g_2) == 0xB5L), p_20)) ^ g_13[1][1][0])) & 0x64L);
        l_529 = p_21;
        l_530 = (g_386 >= g_7);
    }
    else
    {
        int l_548 = 0x686C2610L;
        int l_551 = (-1L);
        l_548 = (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_13[4][1][2], 10)), (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_539[2][0][2] > (+func_33((((((func_33(g_386) ^ 0xF6L) , (safe_lshift_func_int8_t_s_s(p_19, (p_18 >= (safe_rshift_func_uint16_t_u_u(((((((((g_7 < (safe_mod_func_int8_t_s_s(p_19, l_546))) < l_530) < 0x1EL) , l_539[2][0][2]) , l_515) >= 0xF255L) , (-9L)) && l_547[3]), 2)))))) , l_539[4][2][1]) && 0xF7A3L) && (-1L))))), 3L)), g_2))));
        g_53[1] = (((safe_rshift_func_uint16_t_u_s(65533UL, 10)) != l_551) == 0L);
        for (l_548 = 5; (l_548 >= 0); l_548 -= 1)
        {
            int l_578 = 0x71B962F5L;
            int i;
            g_53[l_548] = (safe_mod_func_int32_t_s_s(g_53[1], (safe_lshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((((safe_unary_minus_func_uint8_t_u(p_17)) != p_20) >= 0x1BF2L) < (safe_add_func_uint32_t_u_u(l_561, (g_2 ^ ((p_18 || l_561) != g_13[1][3][4]))))), 0x50ACL)) , g_386), g_7))));
            l_530 = (-1L);
            for (l_551 = 0; (l_551 <= 6); l_551 += 1)
            {
                short l_579 = 0x519EL;
                for (g_386 = 4; (g_386 >= 0); g_386 -= 1)
                {
                    int i, j, k;
                    if (l_539[g_386][(g_386 + 2)][l_548])
                        break;
                }
                for (p_19 = 1; (p_19 <= 6); p_19 += 1)
                {
                    int i;
                    g_53[l_548] = 0L;
                    if (g_53[p_19])
                    {
                        if (p_20)
                            break;
                        g_53[0] = (p_18 , (1UL == (safe_add_func_uint32_t_u_u((((p_21 && (((safe_div_func_uint32_t_u_u((g_2 <= (~0x568E9172L)), (((0xA466L && ((p_18 && (p_21 , ((safe_div_func_uint16_t_u_u((((0x68L ^ l_539[1][7][4]) == 0xAAAFE883L) < 4294967295UL), (-6L))) , g_53[p_19]))) < p_20)) <= l_568[0][1][4]) , p_17))) | g_13[4][2][2]) != 0x5DEAEB30L)) > g_13[1][1][0]) || g_7), p_19))));
                    }
                    else
                    {
                        return p_17;
                    }
                    if (p_17)
                        break;
                    for (g_386 = 0; (g_386 <= 8); g_386 += 1)
                    {
                        l_530 = ((safe_mul_func_uint16_t_u_u(func_40(g_13[1][1][0], ((safe_mul_func_uint16_t_u_u(l_515, (p_20 >= (((safe_add_func_int16_t_s_s(g_2, func_69(((((g_4 ^ g_53[l_548]) , ((((((safe_sub_func_int16_t_s_s((func_63(p_17, g_4) > g_577), g_13[1][1][0])) , g_7) , 0x82L) >= 0x5AL) > (-1L)) == p_19)) < l_548) , g_13[2][1][1]), g_386, l_578, p_19))) , g_7) | g_13[1][1][0])))) < l_578), l_548), g_13[3][1][5])) | g_577);
                        l_530 = (l_579 | ((((p_17 ^ (g_13[1][1][0] , func_40((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((p_18 , g_386), g_7)), p_19)), g_2, (g_53[p_19] == g_53[l_548])))) , l_579) , 0L) ^ g_577));
                    }
                }
            }
        }
    }
    l_530 = ((safe_mod_func_int8_t_s_s((l_568[0][1][4] >= ((g_577 , (((g_2 && ((safe_div_func_uint8_t_u_u(g_3, (safe_add_func_int32_t_s_s(p_17, func_33(g_13[1][1][0]))))) , (g_7 >= ((((safe_add_func_int8_t_s_s((((0x6FL <= p_18) && 4294967288UL) || g_53[2]), l_530)) != l_515) , p_20) && 0x30E9L)))) && l_515) | 255UL)) < p_17)), 1UL)) >= l_539[2][0][2]);
    l_595[5][0][4] = (((p_18 < ((g_577 < (((func_69(p_21, (g_13[1][1][0] > (p_21 , (safe_add_func_int16_t_s_s((-9L), l_594)))), l_594, p_19) ^ g_2) | 255UL) == l_568[2][1][2])) | p_21)) , 65535UL) | g_13[2][3][2]);
    return l_595[5][0][4];
}







static unsigned func_25(char p_26, unsigned p_27, short p_28)
{
    char l_509 = 0x85L;
    short l_512 = (-9L);
    l_512 = (safe_div_func_int16_t_s_s(l_509, (safe_lshift_func_uint16_t_u_s((0x8CAB6361L > func_40(p_26, func_33(p_27), l_509)), 10))));
    return p_26;
}







static char func_29(int p_30, short p_31, unsigned p_32)
{
    short l_391 = 0xFB41L;
    int l_394 = (-1L);
    char l_395 = 1L;
    unsigned short l_478[2][6];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
            l_478[i][j] = 1UL;
    }
    l_394 = ((func_63((func_40(l_391, g_386, l_391) >= g_7), (safe_lshift_func_int8_t_s_s(g_7, 6))) > p_31) > g_4);
    if (p_32)
    {
        unsigned l_405 = 1UL;
        int l_422 = 3L;
        l_395 = func_69(p_30, p_31, g_13[3][3][4], l_391);
        for (g_386 = 6; (g_386 >= 0); g_386 -= 1)
        {
            char l_404 = 0x24L;
            int i;
            g_53[g_386] = 0xC6D304B7L;
            for (p_31 = 6; (p_31 >= 2); p_31 -= 1)
            {
                unsigned char l_398 = 255UL;
                unsigned l_401 = 4294967295UL;
                int i;
                for (p_32 = 2; (p_32 <= 6); p_32 += 1)
                {
                    int i;
                    if (g_53[g_386])
                        break;
                }
                g_53[g_386] = ((func_69(g_13[1][1][0], func_69(((safe_sub_func_uint16_t_u_u((l_398 ^ func_63(p_32, ((func_40(l_401, l_398, g_53[5]) ^ ((safe_sub_func_int32_t_s_s(0L, p_32)) >= g_7)) & g_4))), l_404)) , g_386), l_405, g_7, l_405), g_4, g_13[1][1][0]) , p_32) & l_405);
                g_53[g_386] = 0xD8C90541L;
                if ((((~g_386) , (safe_lshift_func_uint16_t_u_s(l_391, l_404))) , g_13[0][0][0]))
                {
                    return g_13[0][2][1];
                }
                else
                {
                    char l_408 = 0x71L;
                    int l_417 = 0xBC677A76L;
                    l_417 = ((0x04F4858AL > (p_32 , (l_408 , (safe_rshift_func_int16_t_s_s((0x92L >= (safe_mul_func_int16_t_s_s(p_32, (((safe_sub_func_uint32_t_u_u(4294967291UL, (g_53[6] != g_13[1][1][0]))) == (!(safe_sub_func_int16_t_s_s(l_408, g_53[g_386])))) | 0x4CL)))), 0))))) <= 8L);
                    for (l_405 = 0; (l_405 <= 2); l_405++)
                    {
                        unsigned l_420[10];
                        int l_421[7][8] = {{0x2159E234L, 0x052CF573L, (-10L), 0x84682497L, 0x84682497L, (-10L), 0x052CF573L, 0x2159E234L}, {0x2159E234L, 0x052CF573L, (-10L), 0x84682497L, 0x84682497L, (-10L), 0x052CF573L, 0x2159E234L}, {0x2159E234L, 0x052CF573L, (-10L), 0x84682497L, 0x84682497L, (-10L), 0x052CF573L, 0x2159E234L}, {0x2159E234L, 0x052CF573L, (-10L), 0x84682497L, 0x84682497L, (-10L), 0x052CF573L, 0x2159E234L}, {0x2159E234L, 0x052CF573L, (-10L), 0x84682497L, 0x84682497L, (-10L), 0x052CF573L, 0x2159E234L}, {0x2159E234L, 0x052CF573L, (-10L), 0x84682497L, 0x84682497L, (-10L), 0x052CF573L, 0x2159E234L}, {0x2159E234L, 0x052CF573L, (-10L), 0x84682497L, 0x84682497L, (-10L), 0x052CF573L, 0x2159E234L}};
                        int i, j;
                        for (i = 0; i < 10; i++)
                            l_420[i] = 0x3B409539L;
                        g_53[1] = (l_420[8] <= (g_53[g_386] | g_53[g_386]));
                        g_53[3] = 0xDBFB1D0AL;
                        l_421[3][1] = l_391;
                        l_422 = func_63(g_386, g_386);
                    }
                    g_53[g_386] = (safe_div_func_uint8_t_u_u(1UL, p_30));
                }
            }
        }
    }
    else
    {
        short l_429[4];
        int l_433 = 0xAE984D90L;
        int i;
        for (i = 0; i < 4; i++)
            l_429[i] = 0x65AEL;
        l_433 = (safe_div_func_int8_t_s_s(func_33((safe_div_func_uint8_t_u_u((255UL < l_391), ((func_69(l_429[1], g_386, l_429[1], (safe_sub_func_uint16_t_u_u(func_69(p_31, p_31, p_32, ((func_69((safe_unary_minus_func_uint32_t_u((65527UL == (-1L)))), g_13[1][1][3], g_13[1][1][0], g_4) || g_53[0]) , l_395)), p_32))) <= 0x9767L) && p_31)))), p_32));
        g_386 = (safe_lshift_func_int8_t_s_s(p_30, (safe_mul_func_uint8_t_u_u(((l_429[1] ^ (safe_lshift_func_int16_t_s_u(l_429[1], 14))) && (safe_div_func_uint32_t_u_u(((~(safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(0x08L, (safe_add_func_int32_t_s_s(p_31, ((func_63(l_391, p_30) && 0L) , 1L))))), p_30))) , p_31), g_7))), g_13[5][3][4]))));
    }
    if ((((((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0xD2L, ((l_394 >= l_394) & (l_394 < (safe_unary_minus_func_int8_t_s(l_394)))))), (0x87AFL != ((4294967290UL <= (safe_mod_func_int32_t_s_s((p_32 <= g_53[3]), l_391))) <= g_13[1][1][0])))) > g_7) & l_391) == 0x26L) , 9L))
    {
        unsigned l_455 = 7UL;
        int l_489[1][7] = {{0x1BC57F52L, 0x1BC57F52L, 0xBBF9B41FL, 0x1BC57F52L, 0x1BC57F52L, 0xBBF9B41FL, 0x1BC57F52L}};
        int l_496 = 0x22183DC9L;
        unsigned char l_497 = 249UL;
        int i, j;
        l_455 = p_32;
        g_53[4] = (safe_div_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(func_85(p_31, ((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_391, (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((l_391 ^ (l_391 , func_40(l_394, (safe_lshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((l_394 == (l_478[0][0] & (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((((safe_mul_func_int8_t_s_s(func_40((safe_add_func_uint32_t_u_u((g_4 >= l_478[0][0]), p_32)), p_32, p_32), 0x0DL)) <= 4294967295UL) , p_30) , 1L), g_13[3][0][0])), g_7)), p_30)))) || l_478[0][0]), g_13[2][1][4])), p_32)) & 65527UL), 2)), g_7))), p_31)), 1)))), g_4)) == l_455)), 7)) == p_31), p_32)), p_32)) < 65530UL), 0xFEA46604L));
        l_489[0][6] = 0x13C0B012L;
        l_394 = (safe_div_func_int16_t_s_s(l_489[0][6], (safe_mod_func_int16_t_s_s(l_478[1][4], (safe_sub_func_uint8_t_u_u(p_30, (l_478[1][4] > (func_33(l_391) >= ((p_30 >= (g_13[1][1][0] | l_496)) , l_497)))))))));
    }
    else
    {
        unsigned char l_498 = 0x70L;
        unsigned short l_506 = 0x1FA7L;
        l_394 = l_498;
        g_53[6] = g_53[0];
        l_394 = ((!(((safe_mul_func_uint8_t_u_u(((l_498 || (safe_unary_minus_func_int16_t_s(((safe_sub_func_int16_t_s_s(6L, (safe_lshift_func_uint8_t_u_u(func_63(l_478[0][0], p_32), 0)))) || ((g_4 < l_506) && (-1L)))))) == (p_31 ^ g_13[5][1][0])), 0x81L)) & 0xB9CAL) & p_30)) != 1L);
        g_53[2] = p_32;
    }
    l_394 = (p_30 && l_478[1][3]);
    return p_32;
}







static int func_33(unsigned short p_34)
{
    unsigned l_35[9][8] = {{0x92B2C22BL, 0xD4A2B52FL, 0xBD849EDEL, 0x235BD639L, 0x1B015869L, 0UL, 0UL, 0x1B015869L}, {0x92B2C22BL, 0xD4A2B52FL, 0xBD849EDEL, 0x235BD639L, 0x1B015869L, 0UL, 0UL, 0x1B015869L}, {0x92B2C22BL, 0xD4A2B52FL, 0xBD849EDEL, 0x235BD639L, 0x1B015869L, 0UL, 0UL, 0x1B015869L}, {0x92B2C22BL, 0xD4A2B52FL, 0xBD849EDEL, 0x235BD639L, 0x1B015869L, 0UL, 0UL, 0x1B015869L}, {0x92B2C22BL, 0xD4A2B52FL, 0xBD849EDEL, 0x235BD639L, 0x1B015869L, 0UL, 0UL, 0x1B015869L}, {0x92B2C22BL, 0xD4A2B52FL, 0xBD849EDEL, 0x235BD639L, 0x1B015869L, 0UL, 0UL, 0x1B015869L}, {0x92B2C22BL, 0xD4A2B52FL, 0xBD849EDEL, 0x235BD639L, 0x1B015869L, 0UL, 0UL, 0x1B015869L}, {0x92B2C22BL, 0xD4A2B52FL, 0xBD849EDEL, 0x235BD639L, 0x1B015869L, 0UL, 0UL, 0x1B015869L}, {0x92B2C22BL, 0xD4A2B52FL, 0xBD849EDEL, 0x235BD639L, 0x1B015869L, 0UL, 0UL, 0x1B015869L}};
    int l_37[6] = {(-10L), (-10L), (-1L), (-10L), (-10L), (-1L)};
    unsigned short l_52 = 5UL;
    char l_276 = 0L;
    short l_385[4] = {(-1L), 0x8E00L, (-1L), 0x8E00L};
    int i, j;
    for (p_34 = 1; (p_34 <= 7); p_34 += 1)
    {
        unsigned l_36 = 8UL;
        if (l_36)
            break;
        for (l_36 = 0; (l_36 <= 7); l_36 += 1)
        {
            int l_259 = 0L;
            int l_263 = (-7L);
            int i, j;
            l_37[5] = l_35[(p_34 + 1)][l_36];
            if (((l_35[(p_34 + 1)][l_36] && (p_34 < (safe_mod_func_int32_t_s_s(func_40(((65528UL < (func_44((safe_lshift_func_uint16_t_u_s(0xDE04L, 3)), (((((safe_add_func_uint8_t_u_u(p_34, (l_37[5] , g_13[0][2][4]))) > 0L) , l_52) > 0x8D8CL) > l_36), l_35[(p_34 + 1)][l_36]) < g_7)) | p_34), g_7, l_37[1]), l_35[(p_34 + 1)][l_36])))) <= p_34))
            {
                int l_262 = 0xFC8718FDL;
                int l_289 = 0x64B7221AL;
                int l_333[4] = {0xB5E4AD93L, 0x1CF6230AL, 0xB5E4AD93L, 0x1CF6230AL};
                int i;
                l_263 = (safe_add_func_int8_t_s_s((((safe_mul_func_uint32_t_u_u(g_7, (((-2L) != (g_53[5] & (((safe_mul_func_int8_t_s_s(0x21L, l_52)) & (safe_div_func_int32_t_s_s(l_35[6][7], p_34))) != ((l_259 != ((safe_lshift_func_int8_t_s_u(g_7, p_34)) && p_34)) <= 1UL)))) > l_262))) >= p_34) > 0xDAL), 0xC1L));
                g_53[1] = (((1L | (safe_lshift_func_uint8_t_u_u((!g_13[1][1][0]), g_7))) ^ ((safe_mod_func_uint32_t_u_u(0UL, (safe_div_func_int32_t_s_s(0x9D78492DL, l_262)))) == (safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(0L, 2UL)) == (p_34 , p_34)), 0x451AA7E5L)))) | g_13[1][1][0]);
                if ((safe_mul_func_int8_t_s_s(l_276, l_259)))
                {
                    g_53[0] = (safe_rshift_func_int16_t_s_u((((((safe_div_func_int8_t_s_s(p_34, (safe_add_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((~((safe_rshift_func_uint8_t_u_s(func_44(((!0xB960L) , g_53[3]), l_289, (safe_mod_func_int32_t_s_s(0xC196C4F1L, ((((p_34 , (safe_sub_func_int32_t_s_s(p_34, ((p_34 == (+p_34)) < 0x936EL)))) & 65532UL) != 0UL) | g_13[4][1][1])))), 6)) && g_53[5])), l_36)) != 0UL) != g_13[1][1][0]), g_4)))) >= p_34) || 6UL) && p_34) ^ g_7), 8));
                }
                else
                {
                    unsigned char l_308[6] = {0xDBL, 253UL, 0xDBL, 253UL, 0xDBL, 253UL};
                    int i;
                    g_53[3] = ((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((~(safe_add_func_uint32_t_u_u(func_63(((safe_mul_func_int8_t_s_s(g_7, ((g_13[2][2][5] & (safe_mod_func_int16_t_s_s(g_13[5][1][5], (safe_rshift_func_int8_t_s_s(g_4, g_13[1][1][0]))))) , (l_308[1] && l_308[1])))) , g_7), (safe_mul_func_uint8_t_u_u((p_34 < g_7), g_4))), 8UL))), 0x05L)), 5L)), g_13[5][3][4])) , g_4);
                    g_53[5] = (safe_add_func_uint32_t_u_u(func_63((safe_div_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_u(((p_34 ^ (safe_mod_func_int32_t_s_s((((p_34 , ((func_44(p_34, l_289, func_40(p_34, (safe_mul_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((p_34 & ((p_34 , 1UL) >= (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(g_13[1][1][0], l_36)) < p_34), l_263)))), p_34)), 0x7D93FD7CL)) , l_262), p_34)) > g_4) && l_36), 1UL)), p_34)) <= p_34) | g_13[1][1][0])) , 0x78L) ^ p_34), 0xFB98A7DEL))) <= 1L), 3)) || 0xC5A8L) < l_35[(p_34 + 1)][l_36]) , l_333[0]), g_7)), g_13[1][3][5]), 6UL));
                    g_53[3] = l_35[5][7];
                    for (l_289 = 2; (l_289 <= 6); l_289 += 1)
                    {
                        int i;
                        g_53[l_289] = ((((safe_mul_func_uint8_t_u_u(248UL, 0xDCL)) , (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_53[l_289], (safe_rshift_func_int8_t_s_u(0xCFL, ((((safe_mul_func_uint8_t_u_u((g_53[4] <= ((((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(g_53[3], 12)), (g_13[0][0][3] == g_7))) <= (g_4 != p_34)) ^ p_34) != 0L)), g_13[0][0][5])) ^ l_36) & p_34) , l_259))))), p_34))) , l_35[(p_34 + 1)][l_36]) != l_37[4]);
                    }
                }
            }
            else
            {
                return g_7;
            }
        }
    }
    for (l_52 = 0; (l_52 == 37); l_52 = safe_add_func_int16_t_s_s(l_52, 8))
    {
        unsigned l_362 = 9UL;
        int l_383 = 0xB2BDCB30L;
        unsigned l_384 = 0UL;
        l_37[5] = (g_53[1] || p_34);
        l_37[5] = ((safe_rshift_func_int16_t_s_s(func_44((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((((safe_add_func_int8_t_s_s((-6L), g_53[5])) != g_13[1][1][0]) < (safe_add_func_int16_t_s_s(l_52, ((p_34 == l_52) && p_34)))) && (p_34 == (safe_mul_func_uint8_t_u_u(l_362, g_13[1][1][0])))), g_7)) & l_362), 0)), l_52, g_13[1][1][0]), l_362)) | 5UL);
        g_386 = (((safe_sub_func_uint32_t_u_u(func_63(l_276, ((safe_mul_func_uint16_t_u_u(l_37[5], g_53[3])) , ((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((p_34 <= (((safe_div_func_int8_t_s_s(((func_40((safe_div_func_int8_t_s_s(((0xA5D47B9CL < ((((0xC5L != (g_13[6][1][2] | (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(func_40(l_52, l_383, p_34), 0x0EL)), 4)), p_34)), l_383)))) | 8L) >= l_384) > g_13[1][1][0])) >= p_34), g_13[1][1][0])), l_385[3], l_276) , 0UL) , 0xC9L), 0x94L)) || p_34) | g_386)), g_7)), l_384)) , g_386))), g_386)) , g_13[1][1][0]) <= l_385[2]);
        for (l_362 = 0; l_362 < 6; l_362 += 1)
        {
            l_37[l_362] = 0x47B12D53L;
        }
    }
    l_37[5] = (255UL != l_385[3]);
    return p_34;
}







static int func_40(unsigned char p_41, short p_42, short p_43)
{
    int l_245 = 0xFFD44AE0L;
    int l_250 = (-4L);
    g_53[3] = (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((p_42 > (safe_div_func_uint8_t_u_u(func_44((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(l_245, 6)), p_43)) , g_4), l_245)), l_245, (safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(255UL, l_245)), l_245))), l_245))) , 0L), l_245)) != p_41), p_43));
    l_250 = 3L;
    return p_42;
}







static unsigned short func_44(int p_45, unsigned p_46, unsigned short p_47)
{
    unsigned char l_108 = 0x74L;
    int l_154 = 0xFEC7DE13L;
    int l_168[8][7] = {{1L, (-1L), (-1L), 0L, 0L, (-1L), (-1L)}, {1L, (-1L), (-1L), 0L, 0L, (-1L), (-1L)}, {1L, (-1L), (-1L), 0L, 0L, (-1L), (-1L)}, {1L, (-1L), (-1L), 0L, 0L, (-1L), (-1L)}, {1L, (-1L), (-1L), 0L, 0L, (-1L), (-1L)}, {1L, (-1L), (-1L), 0L, 0L, (-1L), (-1L)}, {1L, (-1L), (-1L), 0L, 0L, (-1L), (-1L)}, {1L, (-1L), (-1L), 0L, 0L, (-1L), (-1L)}};
    int i, j;
    for (p_46 = 0; (p_46 <= 6); p_46 += 1)
    {
        int i;
        g_53[p_46] = 0x0F60069AL;
    }
    for (p_47 = (-15); (p_47 > 13); p_47 = safe_add_func_uint8_t_u_u(p_47, 8))
    {
        char l_60 = 0x0DL;
        int l_180 = 0xA566C474L;
        for (p_46 = (-20); (p_46 == 18); p_46 = safe_add_func_uint16_t_u_u(p_46, 8))
        {
            int l_68 = 0x296C032BL;
            unsigned char l_84 = 0UL;
            l_60 = (safe_mod_func_uint8_t_u_u(g_13[3][3][0], g_13[1][1][0]));
            if ((((safe_rshift_func_uint16_t_u_s(1UL, 2)) , p_47) | (func_63(((safe_rshift_func_int16_t_s_u(0L, (l_68 > func_69((((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0x8D5AL, ((safe_mod_func_uint8_t_u_u((+((safe_mul_func_uint16_t_u_u(g_4, l_84)) | 1L)), (func_85(l_68, p_47) || (-4L)))) <= p_47))), g_13[1][1][0])), (-1L))) & p_46) ^ g_4), l_60, p_47, l_108)))) , p_46), l_60) , l_108)))
            {
                int l_144 = 0x624CEE3AL;
                unsigned short l_167 = 0x2D52L;
                for (p_45 = (-30); (p_45 == 21); p_45++)
                {
                    unsigned l_145 = 0x9FF7D887L;
                    int l_169 = (-1L);
                    unsigned l_174 = 4294967290UL;
                    g_53[1] = (safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((func_69((safe_sub_func_int32_t_s_s((p_46 && (((((safe_rshift_func_int16_t_s_s((((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(g_4, p_46)) , ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0x7A1AL, (l_108 & ((p_46 && ((safe_add_func_uint32_t_u_u(((~p_47) & 255UL), p_47)) | g_13[4][1][2])) < p_47)))), p_46)) , l_144)), p_47)), l_145)) == 0x9C8F8D30L) && g_4), 13)) & p_45) < l_145) | 0x989F9EEFL) & p_45)), p_45)), l_84, p_47, p_45) != g_13[1][1][0]), 1)) ^ p_46) <= p_46), g_13[1][1][0]));
                    l_154 = func_63((safe_lshift_func_int8_t_s_s(p_45, (((l_144 , ((safe_sub_func_uint8_t_u_u(g_13[1][1][0], ((safe_lshift_func_uint8_t_u_s((0x05F4L <= g_4), p_46)) && g_4))) && l_108)) , (safe_add_func_uint16_t_u_u(((g_7 || p_47) , 65528UL), p_45))) == 0x8842L))), p_45);
                    if ((safe_div_func_int32_t_s_s(((func_69(p_46, (safe_add_func_int32_t_s_s(l_84, (((safe_sub_func_uint8_t_u_u(((65531UL || (((254UL < (((((func_85(((g_4 , ((((g_7 & (safe_add_func_int32_t_s_s((((l_154 ^ ((g_4 & (func_69((((safe_mod_func_uint8_t_u_u(252UL, g_13[3][3][2])) == 3L) <= l_145), g_7, g_7, g_4) < (-1L))) == l_167)) , p_45) & (-1L)), 0x9EAA1D09L))) <= 8L) && p_45) != l_168[2][4])) || 7UL), p_47) ^ g_13[5][1][0]) != l_144) , p_47) < l_108) , p_45)) ^ g_13[2][0][2]) > 0x9E8CL)) != p_45), p_47)) < g_7) == p_46))), l_60, g_4) || g_13[0][0][0]) || l_169), 4294967295UL)))
                    {
                        g_53[4] = (((safe_rshift_func_int8_t_s_u(g_13[1][1][0], 2)) , (safe_div_func_int8_t_s_s((-5L), l_174))) == l_84);
                    }
                    else
                    {
                        g_53[3] = 1L;
                    }
                }
                if ((((safe_rshift_func_int8_t_s_s((((l_167 || g_7) & g_13[1][1][0]) | l_168[2][4]), (g_53[3] , l_167))) != (((((p_46 ^ (g_4 | (g_13[1][1][0] > l_167))) || g_7) < p_47) >= 0L) != p_46)) > p_46))
                {
                    int l_179 = 0L;
                    for (l_144 = 0; (l_144 > 7); l_144 = safe_add_func_int8_t_s_s(l_144, 5))
                    {
                        l_179 = p_45;
                        if (g_53[1])
                            break;
                        p_45 = g_53[6];
                    }
                    g_53[5] = p_46;
                    if (l_108)
                        break;
                }
                else
                {
                    l_180 = 0x57901DC2L;
                    for (l_180 = 19; (l_180 < (-9)); l_180 = safe_sub_func_int32_t_s_s(l_180, 5))
                    {
                        int l_183 = 0x39658010L;
                        return l_183;
                    }
                    p_45 = g_13[1][1][0];
                }
                g_53[4] = ((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(((l_168[2][4] | (safe_add_func_uint8_t_u_u(((((((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((g_53[1] , (safe_rshift_func_int8_t_s_s(p_45, ((g_13[1][3][5] == (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((g_53[1] , p_46), 1)), 1)) , (safe_mod_func_int32_t_s_s(g_4, (((safe_div_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(g_53[5], 7)) | (l_60 < 0x22B19B8FL)) & l_68), 0x7456L)) , g_7) || g_7)))) & g_13[4][0][2])) < g_53[6])))), l_144)) > g_53[0]), p_45)), p_45)) == g_13[3][2][1]) , g_13[6][3][3]) , 0xC5L) && l_180) >= l_68), g_13[1][1][0]))) != p_45), p_46)) == 0xF8L) & p_45), g_13[4][3][4])), l_60)) , p_45), l_167)) , p_46);
            }
            else
            {
                int l_218 = (-1L);
                p_45 = ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((((p_45 <= l_180) , (((!(safe_rshift_func_int8_t_s_u(g_13[0][2][4], (func_63(l_218, (safe_lshift_func_uint16_t_u_u(((((p_47 != ((safe_rshift_func_int8_t_s_s(((g_13[1][1][0] , l_154) , (-8L)), (safe_lshift_func_uint8_t_u_s(((-1L) & 1L), 4)))) && l_108)) == p_46) & g_13[3][1][5]) == g_7), 7))) == 65533UL)))) < 0xF1B2D74EL) , (-6L))) & g_13[3][1][3]) , g_4), l_180)), 0x9870D56FL)) | l_168[2][4]);
            }
        }
    }
    l_168[0][2] = l_168[2][4];
    g_53[4] = (((p_45 <= g_13[1][1][0]) && l_154) , (p_45 & (safe_lshift_func_uint8_t_u_u(((((((safe_rshift_func_int8_t_s_s(0x9FL, 4)) & (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((p_45 & 0x8DL), 4)), (p_45 || (p_46 ^ p_46))))) < 0xB6L) <= l_168[2][4]) & p_45) && 2L), g_7))));
    return p_46;
}







static int func_63(unsigned char p_64, char p_65)
{
    g_53[0] = 0xEC2F7F93L;
    for (p_64 = 0; (p_64 <= 6); p_64 += 1)
    {
        int i;
        g_53[p_64] = (4294967295UL <= 2L);
    }
    return p_64;
}







static unsigned func_69(unsigned p_70, unsigned short p_71, unsigned char p_72, char p_73)
{
    unsigned char l_114[3];
    int l_119 = 0x0DD55268L;
    int i;
    for (i = 0; i < 3; i++)
        l_114[i] = 0xB1L;
    for (p_72 = (-11); (p_72 < 58); p_72 = safe_add_func_uint8_t_u_u(p_72, 8))
    {
        g_53[0] = (func_85(p_72, ((0x86844AA6L | ((safe_add_func_uint8_t_u_u(func_85(p_70, (safe_unary_minus_func_uint8_t_u(g_13[3][0][2]))), (~l_114[2]))) == (safe_div_func_int32_t_s_s(((l_114[2] || ((safe_rshift_func_uint8_t_u_u(g_13[1][1][0], g_13[1][1][0])) && 1L)) != g_4), g_13[1][0][2])))) >= 0xD2L)) , l_114[2]);
    }
    l_119 = ((p_72 != g_4) ^ (0x68717530L || l_114[2]));
    g_53[0] = (((safe_mul_func_int8_t_s_s(g_4, (p_73 == (p_73 , 4294967287UL)))) != p_72) , ((func_85(p_72, func_85(p_73, l_114[2])) == 252UL) <= g_7));
    return p_73;
}







static short func_85(short p_86, int p_87)
{
    int l_97[10][3] = {{0xDB053F5EL, 0xEC191E6AL, (-9L)}, {0xDB053F5EL, 0xEC191E6AL, (-9L)}, {0xDB053F5EL, 0xEC191E6AL, (-9L)}, {0xDB053F5EL, 0xEC191E6AL, (-9L)}, {0xDB053F5EL, 0xEC191E6AL, (-9L)}, {0xDB053F5EL, 0xEC191E6AL, (-9L)}, {0xDB053F5EL, 0xEC191E6AL, (-9L)}, {0xDB053F5EL, 0xEC191E6AL, (-9L)}, {0xDB053F5EL, 0xEC191E6AL, (-9L)}, {0xDB053F5EL, 0xEC191E6AL, (-9L)}};
    int l_106[7] = {(-1L), (-1L), 1L, (-1L), (-1L), 1L, (-1L)};
    unsigned char l_107[8][5] = {{0x1BL, 0xF5L, 0x0CL, 0x0CL, 0xF5L}, {0x1BL, 0xF5L, 0x0CL, 0x0CL, 0xF5L}, {0x1BL, 0xF5L, 0x0CL, 0x0CL, 0xF5L}, {0x1BL, 0xF5L, 0x0CL, 0x0CL, 0xF5L}, {0x1BL, 0xF5L, 0x0CL, 0x0CL, 0xF5L}, {0x1BL, 0xF5L, 0x0CL, 0x0CL, 0xF5L}, {0x1BL, 0xF5L, 0x0CL, 0x0CL, 0xF5L}, {0x1BL, 0xF5L, 0x0CL, 0x0CL, 0xF5L}};
    int i, j;
    for (p_87 = 6; (p_87 >= 0); p_87 -= 1)
    {
        char l_90 = 0x71L;
        for (p_86 = 0; (p_86 <= 6); p_86 += 1)
        {
            int i;
            if (g_53[p_87])
                break;
            g_53[p_86] = ((safe_mod_func_int32_t_s_s(p_87, l_90)) >= (p_86 == (safe_add_func_uint16_t_u_u((~0UL), (7UL & l_90)))));
            g_53[p_87] = p_87;
        }
        if (l_90)
            break;
    }
    l_106[1] = (safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s(0UL, l_97[1][2])) == (((p_87 & p_86) , ((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(((l_97[1][2] || (safe_sub_func_uint8_t_u_u(l_97[1][1], ((safe_rshift_func_int16_t_s_s(l_97[0][2], ((p_87 > ((0UL >= (-1L)) & 3UL)) <= p_86))) >= p_87)))) , l_97[1][2]), p_87)), 0x25L)) == 65526UL)) == p_87)) < p_86), 0xAD408300L));
    l_107[6][0] = 0x05A861DEL;
    return l_107[6][0];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_13[i][j][k], "g_13[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_53[i], "g_53[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_577, "g_577", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
