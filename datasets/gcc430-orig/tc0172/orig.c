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



static unsigned g_12 = 4294967295UL;
static int *g_39 = (void*)0;
static short g_51[4][3] = {{0L, 0x70A1L, 0L}, {0L, 0x70A1L, 0L}, {0L, 0x70A1L, 0L}, {0L, 0x70A1L, 0L}};
static int g_54[7] = {0x6C745D07L, 0x6C745D07L, 0x6C745D07L, 0x6C745D07L, 0x6C745D07L, 0x6C745D07L, 0x6C745D07L};
static int g_55 = 0xA4182467L;
static int g_56 = (-1L);
static int *g_68 = &g_54[5];
static const int **g_101 = (void*)0;
static unsigned g_102 = 0x7DDD9272L;
static const int *g_115 = &g_56;
static const int * const *g_114 = &g_115;
static unsigned g_433 = 0x0E615F6EL;
static const char g_701 = 0x4DL;
static unsigned short g_703 = 0x2617L;
static int * const g_725[8][3][2] = {{{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}};
static const short g_766[7][9][4] = {{{5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}}, {{5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}}, {{5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}}, {{5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}}, {{5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}}, {{5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}}, {{5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}, {5L, 0L, 0x491AL, 0x14DBL}}};
static unsigned short g_890 = 0xBD87L;
static short g_900 = 0x55B4L;
static unsigned char g_926[8][2][8] = {{{0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}, {0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}}, {{0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}, {0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}}, {{0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}, {0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}}, {{0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}, {0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}}, {{0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}, {0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}}, {{0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}, {0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}}, {{0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}, {0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}}, {{0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}, {0x82L, 255UL, 0x7BL, 0x48L, 0UL, 0UL, 0x8FL, 1UL}}};
static int g_1090 = 0x0EB99064L;



static char func_1(void);
static unsigned func_4(int p_5, unsigned p_6, unsigned short p_7, short p_8, short p_9);
static unsigned char func_15(int p_16, unsigned char p_17, int p_18);
static const char func_19(unsigned char p_20, char p_21);
static int func_26(const char p_27);
static unsigned short func_28(unsigned p_29, char p_30);
static int * const func_34(int * p_35, int * p_36, unsigned short p_37, unsigned short p_38);
static unsigned short func_40(unsigned p_41);
static unsigned func_43(unsigned p_44, int * const p_45, int * const p_46);
static unsigned func_47(unsigned short p_48, int p_49, const int * p_50);
static char func_1(void)
{
    unsigned short l_981 = 3UL;
    unsigned l_1242[4][1] = {{0x08B0F818L}, {0x08B0F818L}, {0x08B0F818L}, {0x08B0F818L}};
    unsigned l_1243 = 0xEE4BE35DL;
    int *l_1263 = &g_56;
    int i, j;
    (*l_1263) = ((safe_rshift_func_uint16_t_u_u(((func_4((((safe_add_func_int16_t_s_s((g_12 >= (!((safe_mod_func_uint8_t_u_u(func_15(g_12, g_12, ((func_19(((safe_rshift_func_int8_t_s_s((((((safe_rshift_func_uint8_t_u_u((((func_26(g_12) , (safe_add_func_uint16_t_u_u(g_766[2][4][3], l_981))) , (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(0x54L, (g_51[1][2] < 0xA107L))), 255UL))) | l_981), 4)) || g_54[6]) || g_701) == g_926[2][0][2]) <= 1UL), l_981)) , l_981), g_900) , l_981) | l_981)), (-3L))) && l_981))), 0x6766L)) , 0x710970C9L) | g_926[7][1][0]), l_1242[0][0], l_1242[1][0], l_1243, g_12) ^ l_1242[0][0]) , g_1090), g_926[7][1][0])) && l_1243);
    return (*l_1263);
}







static unsigned func_4(int p_5, unsigned p_6, unsigned short p_7, short p_8, short p_9)
{
    short l_1255[1][10][5] = {{{0L, 0x17AAL, 0x62DFL, 8L, 0x8C6BL}, {0L, 0x17AAL, 0x62DFL, 8L, 0x8C6BL}, {0L, 0x17AAL, 0x62DFL, 8L, 0x8C6BL}, {0L, 0x17AAL, 0x62DFL, 8L, 0x8C6BL}, {0L, 0x17AAL, 0x62DFL, 8L, 0x8C6BL}, {0L, 0x17AAL, 0x62DFL, 8L, 0x8C6BL}, {0L, 0x17AAL, 0x62DFL, 8L, 0x8C6BL}, {0L, 0x17AAL, 0x62DFL, 8L, 0x8C6BL}, {0L, 0x17AAL, 0x62DFL, 8L, 0x8C6BL}, {0L, 0x17AAL, 0x62DFL, 8L, 0x8C6BL}}};
    int *l_1261 = &g_54[6];
    int **l_1262 = &g_68;
    int i, j, k;
    for (p_5 = 0; (p_5 != 10); p_5 = safe_add_func_uint32_t_u_u(p_5, 1))
    {
        int **l_1259 = &g_68;
        int ***l_1258 = &l_1259;
        for (g_102 = 1; (g_102 <= 6); g_102 += 1)
        {
            int *l_1250 = &g_54[g_102];
            int ***l_1260 = &l_1259;
            int i;
            g_39 = &g_54[g_102];
            for (g_433 = 0; (g_433 <= 1); g_433 += 1)
            {
                int i, j, k;
                g_54[(g_433 + 2)] = (safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((((l_1250 == (void*)0) , g_51[(g_433 + 2)][g_433]) , (safe_lshift_func_int8_t_s_s(g_926[(g_433 + 5)][g_433][g_102], ((safe_div_func_int8_t_s_s(g_926[(g_102 + 1)][g_433][(g_433 + 1)], func_15(p_6, l_1255[0][4][4], ((safe_mul_func_uint16_t_u_u(0x143DL, (l_1258 != l_1260))) ^ g_54[2])))) & p_6)))) , l_1255[0][7][0]) ^ l_1255[0][4][4]), g_51[(g_433 + 2)][g_433])), l_1255[0][4][4]));
            }
        }
    }
    (*l_1262) = l_1261;
    return g_890;
}







static unsigned char func_15(int p_16, unsigned char p_17, int p_18)
{
    int * const *l_1232[10] = {&g_39, (void*)0, &g_39, (void*)0, &g_39, (void*)0, &g_39, (void*)0, &g_39, (void*)0};
    int * const ** const l_1231 = &l_1232[2];
    int i;
    p_18 = (p_16 || (((void*)0 == l_1231) == ((*l_1231) == (((((g_926[7][1][0] && ((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((0x2071A704L && (safe_unary_minus_func_int32_t_s(((safe_sub_func_int16_t_s_s(g_433, p_17)) ^ (safe_add_func_uint8_t_u_u(g_926[7][1][0], 255UL)))))), g_701)), p_16)) < p_17)) , 0xB6L) || 0x71L) > g_51[1][1]) , (*l_1231)))));
    return p_16;
}







static const char func_19(unsigned char p_20, char p_21)
{
    unsigned char l_988 = 1UL;
    int *l_991 = &g_54[6];
    int **l_1002 = &g_68;
    int ***l_1001 = &l_1002;
    int *l_1197 = &g_55;
    unsigned l_1212 = 0x15DFBCFCL;
    (*l_991) = (((+p_20) < func_43((p_20 , l_988), ((safe_lshift_func_uint8_t_u_s((g_55 != g_926[7][1][0]), 3)) , &g_54[6]), l_991)) , 0x353B53BEL);
    if (((safe_mul_func_int16_t_s_s(0xD16DL, g_12)) == (*l_991)))
    {
        int l_994 = 1L;
        int * const *l_1077 = &l_991;
        int * const **l_1076 = &l_1077;
        unsigned l_1081[4][9][2] = {{{0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}}, {{0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}}, {{0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}}, {{0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}, {0xE3413204L, 0xE3413204L}}};
        int l_1125 = 0xDF76FD7EL;
        int **l_1153 = &l_991;
        int i, j, k;
        (*l_991) = l_994;
        if (((safe_sub_func_uint16_t_u_u(0UL, (safe_rshift_func_uint16_t_u_s(g_926[5][1][7], 10)))) , (safe_mul_func_int16_t_s_s(p_21, ((&g_114 == l_1001) , ((p_20 , (safe_rshift_func_uint16_t_u_u(g_890, 15))) || p_20))))))
        {
            int *l_1009 = (void*)0;
            int l_1022 = 0xD0D98C13L;
            unsigned l_1041 = 1UL;
            for (g_890 = 0; (g_890 < 27); g_890++)
            {
                int l_1020 = (-9L);
                int *l_1030[9];
                char l_1037[5];
                int i;
                for (i = 0; i < 9; i++)
                    l_1030[i] = &g_54[6];
                for (i = 0; i < 5; i++)
                    l_1037[i] = 0xAAL;
                l_994 = (safe_mod_func_int32_t_s_s(((void*)0 != l_1009), l_994));
                for (g_900 = 22; (g_900 == 6); g_900 = safe_sub_func_int32_t_s_s(g_900, 1))
                {
                    char l_1021 = 0xA6L;
                    int l_1038 = 0xA82922EAL;
                    if ((safe_sub_func_int32_t_s_s((p_21 | 0UL), g_54[6])))
                    {
                        return g_12;
                    }
                    else
                    {
                        if (l_1021)
                            break;
                        l_1022 = p_20;
                    }
                    (*l_1002) = (void*)0;
                    for (l_1020 = 0; (l_1020 > (-12)); l_1020--)
                    {
                        int *l_1029[9][2][7] = {{{&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}, {&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}}, {{&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}, {&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}}, {{&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}, {&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}}, {{&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}, {&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}}, {{&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}, {&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}}, {{&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}, {&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}}, {{&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}, {&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}}, {{&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}, {&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}}, {{&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}, {&g_54[6], &g_55, &l_1022, &g_55, &g_55, &l_1022, &g_55}}};
                        int i, j, k;
                        l_1038 = ((((((((&g_68 != (void*)0) == (safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((((((l_1029[1][0][1] != l_1030[8]) , 0xECBDL) ^ l_1037[0]) == p_20) & 0xBDL) , g_926[7][1][0]), (*l_991))), 4))) , p_20) , p_20) >= p_20) , 0xAFABL) , 0x5CD6D963L) , (-4L));
                        l_994 = (l_1038 && (safe_rshift_func_int8_t_s_u(((g_55 >= p_20) , ((65535UL | (~g_54[6])) ^ (p_21 ^ ((l_1041 | p_20) || g_900)))), p_21)));
                    }
                }
                for (g_55 = 0; (g_55 == (-10)); g_55 = safe_sub_func_int16_t_s_s(g_55, 9))
                {
                    for (l_1020 = 0; (l_1020 <= 2); l_1020 += 1)
                    {
                        int i, j;
                        (*l_991) = (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((g_51[l_1020][l_1020] != g_51[(l_1020 + 1)][l_1020]), g_51[l_1020][l_1020])), 4294967295UL));
                        return p_21;
                    }
                    if (p_21)
                        continue;
                }
            }
            (**l_1001) = &l_1022;
        }
        else
        {
            int *l_1052 = (void*)0;
            int l_1055 = (-1L);
            int *l_1111 = &l_1055;
            if (((safe_rshift_func_int16_t_s_s(g_54[6], g_701)) , 2L))
            {
                int * const l_1056[9] = {&g_55, &l_1055, &g_55, &l_1055, &g_55, &l_1055, &g_55, &l_1055, &g_55};
                int i;
                if (((safe_div_func_int8_t_s_s(g_54[6], (((void*)0 != l_1052) , (l_994 , p_21)))) || (safe_mod_func_int8_t_s_s(g_12, func_43(l_1055, l_1056[5], (p_21 , l_1056[5]))))))
                {
                    if (p_21)
                    {
                        return p_20;
                    }
                    else
                    {
                        (**l_1001) = (void*)0;
                    }
                    for (l_988 = 0; (l_988 >= 35); l_988++)
                    {
                        char l_1063 = 0x06L;
                        (*l_991) = ((safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(g_900, ((-5L) | p_20))), l_1063)) ^ (((void*)0 == (*l_1002)) , (g_55 > (g_703 ^ 65528UL))));
                    }
                }
                else
                {
                    int *l_1064 = &g_54[1];
                    for (g_900 = 6; (g_900 >= 0); g_900 -= 1)
                    {
                        int i;
                        (*l_991) = g_54[g_900];
                    }
                    if (p_21)
                    {
                        (*l_1002) = l_1064;
                        l_994 = 0L;
                        return (*l_1064);
                    }
                    else
                    {
                        char l_1078 = 1L;
                        int *l_1082 = (void*)0;
                        int **l_1085 = &l_1064;
                        (*l_1064) = (safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((p_21 & p_20), p_20)) > (0x871171FAL <= ((safe_sub_func_uint8_t_u_u((0x1BE2206EL ^ (*l_1064)), 249UL)) , ((safe_unary_minus_func_int8_t_s(g_890)) , (((safe_div_func_int32_t_s_s((g_54[3] >= 0x89L), p_20)) , l_1076) != &g_101))))), g_55)), l_1078));
                        (*l_1085) = func_34(((safe_mul_func_int8_t_s_s(g_926[1][1][1], l_1081[2][3][1])) , &g_56), l_1082, p_21, ((safe_lshift_func_uint16_t_u_u(0x18E8L, 3)) & p_20));
                    }
                    (**l_1077) = (*l_991);
                }
                (*l_991) = (safe_sub_func_uint8_t_u_u(g_55, ((~(safe_lshift_func_int16_t_s_s(g_900, g_701))) ^ (((&g_115 != &g_725[4][2][0]) , g_54[6]) && (((((*l_991) , g_1090) >= g_54[6]) && 0x0EDFA9BDL) | (-1L))))));
            }
            else
            {
                int *l_1110 = &g_55;
                unsigned short l_1126 = 65533UL;
                for (l_988 = (-8); (l_988 == 22); l_988 = safe_add_func_uint16_t_u_u(l_988, 9))
                {
                    short l_1109 = (-9L);
                    (***l_1076) = 1L;
                    for (p_21 = 0; (p_21 <= 1); p_21 += 1)
                    {
                        (***l_1076) = p_21;
                    }
                    for (g_1090 = 28; (g_1090 > 11); --g_1090)
                    {
                        if (p_20)
                            break;
                    }
                    if ((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_20, (safe_sub_func_uint16_t_u_u((g_900 != ((**l_1077) , (((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((~(safe_unary_minus_func_int16_t_s(((g_900 >= (g_12 , g_54[4])) == l_1109)))), p_20)), g_766[6][8][2])))), p_21)) < 1L) | 0xE5L))), (***l_1076))))), p_21)))
                    {
                        (**l_1001) = l_1110;
                    }
                    else
                    {
                        return g_51[1][2];
                    }
                }
                for (g_433 = 0; (g_433 <= 1); g_433 += 1)
                {
                    const unsigned short l_1112 = 0x1FC1L;
                    const int *l_1127 = &g_54[6];
                    for (g_56 = 0; (g_56 <= 1); g_56 += 1)
                    {
                        (**l_1001) = l_1111;
                    }
                    if (l_1112)
                        break;
                    if ((safe_lshift_func_int16_t_s_u(((**l_1077) < 0x1A1BC403L), ((((void*)0 != &l_1052) <= g_102) == (safe_add_func_int16_t_s_s((((((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((g_54[4] > l_1112) != p_21), (((((safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s(0xC0187D79L, g_55)), 0x2EL)) & (*l_1111)) < 0x84C54B05L) <= g_54[6]) , (***l_1076)))), g_926[7][1][0])) , (-1L)) ^ p_21) | (*l_1111)) , l_1125), g_51[0][0]))))))
                    {
                        if (l_1126)
                            break;
                        (*l_991) = (*l_1110);
                        (***l_1076) = p_21;
                        (*l_1111) = (**l_1077);
                    }
                    else
                    {
                        (*l_1110) = (*l_991);
                    }
                    for (l_1126 = 0; (l_1126 <= 1); l_1126 += 1)
                    {
                        int i;
                        return g_54[(l_1126 + 4)];
                    }
                    for (g_55 = 0; (g_55 <= 1); g_55 += 1)
                    {
                        int *l_1133 = &g_1090;
                        int l_1140 = (-10L);
                        (***l_1076) = ((safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((0x7EL > (~(safe_unary_minus_func_uint32_t_u(((void*)0 != l_1133))))), p_20)), 14)) < (((safe_lshift_func_uint16_t_u_s(g_703, (safe_rshift_func_uint8_t_u_s((*l_1127), 4)))) > 0x466AL) , ((safe_rshift_func_uint8_t_u_u(p_21, 5)) != (g_926[7][0][2] , l_1140))));
                        g_115 = l_1127;
                        if (p_20)
                            continue;
                    }
                }
                (**l_1077) = (safe_mod_func_int32_t_s_s((g_56 == (***l_1076)), p_21));
                (*l_1110) = ((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((p_21 >= (safe_add_func_int16_t_s_s((&g_115 == (((((safe_lshift_func_int16_t_s_s((*l_1110), 14)) , (void*)0) != &l_1110) , (safe_rshift_func_uint16_t_u_s((**l_1077), 9))) , &l_1110)), p_21))), ((g_54[6] , (*l_991)) >= p_21))), (*l_1110))) && 0x1FL) , 0UL) > (**l_1077));
            }
        }
        (*l_1153) = (*l_1077);
        (*l_1153) = ((*l_991) , &g_55);
    }
    else
    {
        const int l_1157 = (-6L);
        char l_1166 = 0x9FL;
        const int *l_1176 = (void*)0;
        for (g_102 = 0; (g_102 <= 1); g_102 += 1)
        {
            short l_1155 = 0L;
            int *l_1159 = &g_54[3];
            const int *l_1188 = &g_54[3];
            int ***l_1202 = &l_1002;
            for (g_433 = 0; (g_433 <= 1); g_433 += 1)
            {
                int *l_1154[6][10] = {{&g_1090, &g_55, (void*)0, (void*)0, &g_54[6], (void*)0, &g_56, &g_54[4], &g_55, &g_56}, {&g_1090, &g_55, (void*)0, (void*)0, &g_54[6], (void*)0, &g_56, &g_54[4], &g_55, &g_56}, {&g_1090, &g_55, (void*)0, (void*)0, &g_54[6], (void*)0, &g_56, &g_54[4], &g_55, &g_56}, {&g_1090, &g_55, (void*)0, (void*)0, &g_54[6], (void*)0, &g_56, &g_54[4], &g_55, &g_56}, {&g_1090, &g_55, (void*)0, (void*)0, &g_54[6], (void*)0, &g_56, &g_54[4], &g_55, &g_56}, {&g_1090, &g_55, (void*)0, (void*)0, &g_54[6], (void*)0, &g_56, &g_54[4], &g_55, &g_56}};
                int l_1158 = 0x3D3EC1ABL;
                int ***l_1163[9] = {&l_1002, (void*)0, &l_1002, (void*)0, &l_1002, (void*)0, &l_1002, (void*)0, &l_1002};
                int i, j;
                if ((((&g_55 != l_1154[2][2]) , g_701) & (p_20 || (*l_991))))
                {
                    unsigned l_1156 = 0x74A6E699L;
                    if (p_21)
                        break;
                    if (l_1155)
                    {
                        int i;
                        g_54[(g_433 + 1)] = (l_1156 != p_20);
                        return l_1157;
                    }
                    else
                    {
                        (*l_991) = (&g_115 != (void*)0);
                        return l_1157;
                    }
                }
                else
                {
                    if (l_1158)
                        break;
                    (*l_1002) = l_1159;
                    for (l_988 = 0; (l_988 <= 1); l_988 += 1)
                    {
                        int l_1160 = 0x28EEB319L;
                        if (l_1160)
                            break;
                    }
                    for (g_900 = 0; (g_900 <= 1); g_900 += 1)
                    {
                        return g_900;
                    }
                }
                (*l_1159) = (((safe_sub_func_uint8_t_u_u(((((*l_991) | p_20) , (0x8F933B38L || p_21)) != (0xE383L && (((((((void*)0 == l_1163[7]) & (*l_1159)) >= ((safe_mod_func_int32_t_s_s(p_21, l_1157)) <= l_1157)) , g_703) & 5UL) , p_21))), 0xEFL)) == g_56) , p_20);
                for (p_21 = 1; (p_21 >= 0); p_21 -= 1)
                {
                    if (l_1166)
                    {
                        int * const l_1167 = &g_54[1];
                        int **l_1168 = &l_1154[4][3];
                        (*l_1168) = l_1167;
                        (*l_1167) = 0xD19AD02BL;
                    }
                    else
                    {
                        int *l_1169 = &g_55;
                        (*l_1002) = &g_54[6];
                        (**l_1001) = l_1169;
                        (**l_1001) = l_1159;
                    }
                    for (l_1158 = 1; (l_1158 >= 0); l_1158 -= 1)
                    {
                        int i, j, k;
                        if (g_926[(p_21 + 4)][g_433][(g_102 + 5)])
                            break;
                        if ((*l_1159))
                            break;
                        (*l_1159) = (safe_mod_func_uint8_t_u_u(p_20, g_102));
                    }
                }
                for (p_21 = 0; (p_21 <= 1); p_21 += 1)
                {
                    int *l_1172 = &g_54[5];
                    (**l_1001) = l_1172;
                    (*g_68) = (*l_1172);
                    for (l_988 = 0; (l_988 <= 1); l_988 += 1)
                    {
                        (*l_1159) = 0xB8DE5DA3L;
                    }
                }
            }
            for (g_890 = 0; (g_890 <= 1); g_890 += 1)
            {
                short l_1173 = 1L;
                const int *l_1175 = &g_54[0];
                int *l_1177 = &g_55;
                int *l_1196 = &g_54[6];
            }
        }
        for (g_56 = (-17); (g_56 >= 29); g_56 = safe_add_func_uint16_t_u_u(g_56, 6))
        {
            return g_54[5];
        }
        for (l_1166 = (-9); (l_1166 <= 14); l_1166++)
        {
            int l_1215[7][9][4] = {{{0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}}, {{0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}}, {{0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}}, {{0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}}, {{0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}}, {{0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}}, {{0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}, {0xC5F2B4C7L, 0xC5F2B4C7L, (-1L), 0xC5F2B4C7L}}};
            int ***l_1227 = &l_1002;
            int i, j, k;
            (*l_1197) = (((safe_rshift_func_int8_t_s_u(g_900, p_20)) && p_20) & 0x15E1EB0DL);
            (*l_991) = ((((safe_mod_func_int32_t_s_s(l_1215[3][1][3], ((-1L) | ((void*)0 != &g_68)))) != (p_20 != (safe_mod_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(p_20)), p_21)) , ((l_1215[3][1][3] , l_1227) == &g_101)), 4294967295UL)))) , p_21) && 0x83D7766EL);
            for (p_20 = (-9); (p_20 < 17); p_20 = safe_add_func_uint8_t_u_u(p_20, 2))
            {
                (*l_991) = p_21;
            }
            if (p_21)
                break;
        }
    }
    (*l_1197) = (safe_unary_minus_func_int8_t_s((g_51[1][0] == g_51[1][1])));
    return (*l_1197);
}







static int func_26(const char p_27)
{
    unsigned l_33 = 0x45D764CEL;
    int l_784 = 0xE1BB8E7AL;
    int **l_788 = &g_39;
    int *** const l_787 = &l_788;
    short l_797 = 0L;
    int ***l_802 = &l_788;
    int *l_843 = &g_54[6];
    int *l_868 = &l_784;
    unsigned l_871 = 0x66B5113DL;
    char l_951[3][5][4] = {{{0x99L, 7L, 0x99L, 0L}, {0x99L, 7L, 0x99L, 0L}, {0x99L, 7L, 0x99L, 0L}, {0x99L, 7L, 0x99L, 0L}, {0x99L, 7L, 0x99L, 0L}}, {{0x99L, 7L, 0x99L, 0L}, {0x99L, 7L, 0x99L, 0L}, {0x99L, 7L, 0x99L, 0L}, {0x99L, 7L, 0x99L, 0L}, {0x99L, 7L, 0x99L, 0L}}, {{0x99L, 7L, 0x99L, 0L}, {0x99L, 7L, 0x99L, 0L}, {0x99L, 7L, 0x99L, 0L}, {0x99L, 7L, 0x99L, 0L}, {0x99L, 7L, 0x99L, 0L}}};
    int i, j, k;
    l_784 = (func_28((safe_div_func_int16_t_s_s((l_33 , (!p_27)), g_12)), l_33) & 65535UL);
    (***l_787) = (l_33 <= ((~g_766[2][4][3]) , ((p_27 | (***l_787)) & (**l_788))));
    (***l_802) = ((((((safe_sub_func_uint16_t_u_u(((((p_27 , &g_101) == (p_27 , l_802)) == g_51[1][2]) & (***l_802)), p_27)) , &l_788) == (void*)0) , g_703) | (**l_788)) > g_12);
    for (g_703 = 0; (g_703 > 14); g_703 = safe_add_func_int8_t_s_s(g_703, 8))
    {
        int l_807 = 0L;
        int *l_809 = &g_54[6];
        int ***l_905[9] = {&l_788, (void*)0, &l_788, (void*)0, &l_788, (void*)0, &l_788, (void*)0, &l_788};
        const short l_943 = 0L;
        const int l_966 = (-4L);
        const int l_970[5][2][3] = {{{(-2L), 1L, 2L}, {(-2L), 1L, 2L}}, {{(-2L), 1L, 2L}, {(-2L), 1L, 2L}}, {{(-2L), 1L, 2L}, {(-2L), 1L, 2L}}, {{(-2L), 1L, 2L}, {(-2L), 1L, 2L}}, {{(-2L), 1L, 2L}, {(-2L), 1L, 2L}}};
        int i, j, k;
        (*g_39) = (*g_39);
        (***l_802) = ((-1L) != 248UL);
        if (p_27)
        {
            int * const l_808[9][1][6] = {{{&g_54[4], &g_54[6], &g_55, &g_54[6], &g_54[4], &g_56}}, {{&g_54[4], &g_54[6], &g_55, &g_54[6], &g_54[4], &g_56}}, {{&g_54[4], &g_54[6], &g_55, &g_54[6], &g_54[4], &g_56}}, {{&g_54[4], &g_54[6], &g_55, &g_54[6], &g_54[4], &g_56}}, {{&g_54[4], &g_54[6], &g_55, &g_54[6], &g_54[4], &g_56}}, {{&g_54[4], &g_54[6], &g_55, &g_54[6], &g_54[4], &g_56}}, {{&g_54[4], &g_54[6], &g_55, &g_54[6], &g_54[4], &g_56}}, {{&g_54[4], &g_54[6], &g_55, &g_54[6], &g_54[4], &g_56}}, {{&g_54[4], &g_54[6], &g_55, &g_54[6], &g_54[4], &g_56}}};
            int ***l_822 = &l_788;
            int i, j, k;
            for (g_55 = 4; (g_55 != 2); g_55 = safe_sub_func_int8_t_s_s(g_55, 1))
            {
                for (l_797 = 0; l_797 < 4; l_797 += 1)
                {
                    for (g_102 = 0; g_102 < 3; g_102 += 1)
                    {
                        g_51[l_797][g_102] = 7L;
                    }
                }
                (*l_788) = (*l_788);
            }
            (*l_809) = (+func_43(l_807, l_808[5][0][5], func_34(l_809, &g_54[2], (((((***l_787) & ((((***l_802) && ((!p_27) || (safe_sub_func_uint32_t_u_u((0x6BL != ((((l_809 == (void*)0) & p_27) , g_701) != p_27)), p_27)))) <= p_27) ^ g_55)) || p_27) , (*l_809)) | 0x54BA5DBBL), g_433)));
            g_114 = &g_115;
            for (l_33 = 0; (l_33 <= 57); ++l_33)
            {
                int *l_814 = &l_784;
                int ***l_823 = &l_788;
                short l_848[7];
                int **l_849[10] = {&l_814, (void*)0, &l_814, &l_814, (void*)0, &l_814, (void*)0, &l_814, &l_814, (void*)0};
                int **l_850 = &l_814;
                const unsigned short l_856 = 0x0A6EL;
                int i;
                for (i = 0; i < 7; i++)
                    l_848[i] = 0xF754L;
                if ((*l_809))
                {
                    int **l_819[6][10] = {{&l_814, &l_809, &l_814, &l_809, &l_814, &l_809, &l_814, &l_809, &l_814, &l_809}, {&l_814, &l_809, &l_814, &l_809, &l_814, &l_809, &l_814, &l_809, &l_814, &l_809}, {&l_814, &l_809, &l_814, &l_809, &l_814, &l_809, &l_814, &l_809, &l_814, &l_809}, {&l_814, &l_809, &l_814, &l_809, &l_814, &l_809, &l_814, &l_809, &l_814, &l_809}, {&l_814, &l_809, &l_814, &l_809, &l_814, &l_809, &l_814, &l_809, &l_814, &l_809}, {&l_814, &l_809, &l_814, &l_809, &l_814, &l_809, &l_814, &l_809, &l_814, &l_809}};
                    int **l_820 = &l_814;
                    int **l_821 = &g_39;
                    int i, j;
                    (*l_820) = func_34(l_809, l_814, (safe_add_func_int32_t_s_s(0x9DBB5331L, ((((((((((***l_787) > 4294967291UL) == ((safe_div_func_uint16_t_u_u((((**l_788) , ((g_433 < (***l_787)) == p_27)) , g_51[2][1]), 0x386FL)) && p_27)) != g_56) & g_766[1][2][2]) , p_27) && (*l_809)) && p_27) , 9L) , 0UL))), p_27);
                    (*l_821) = l_808[5][0][5];
                    (*l_821) = l_814;
                    if (((l_822 != l_823) ^ (safe_unary_minus_func_int8_t_s(p_27))))
                    {
                        short l_825 = 5L;
                        (**l_820) = (l_825 , (***l_822));
                    }
                    else
                    {
                        (*l_788) = l_809;
                        return p_27;
                    }
                }
                else
                {
                    int *l_826[1][9];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_826[i][j] = &g_56;
                    }
                    l_826[0][6] = (**l_822);
                    for (g_55 = 12; (g_55 <= 0); --g_55)
                    {
                        return (*l_809);
                    }
                    (***l_802) = (safe_sub_func_int32_t_s_s((!(safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((void*)0 != &g_114), 3L)), (safe_div_func_int32_t_s_s((p_27 || (safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(g_51[0][0], 7)) & 0xD7F5L), (safe_add_func_uint8_t_u_u(((((*l_809) & (g_54[6] > (l_823 == &g_101))) || (-3L)) , (***l_787)), (*l_814)))))), 0x878E8054L))))), p_27));
                    (*l_788) = l_843;
                }
                (*l_850) = func_34(l_809, &g_54[2], (p_27 ^ p_27), l_848[3]);
                if (p_27)
                {
                    return (*l_843);
                }
                else
                {
                    unsigned char l_853[3][5][10] = {{{0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}, {0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}, {0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}, {0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}, {0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}}, {{0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}, {0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}, {0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}, {0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}, {0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}}, {{0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}, {0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}, {0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}, {0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}, {0x45L, 0UL, 6UL, 1UL, 0xB1L, 1UL, 3UL, 0xE1L, 6UL, 0xE1L}}};
                    short l_859 = 0xABF8L;
                    int **l_860[7] = {&l_843, &l_843, (void*)0, &l_843, &l_843, (void*)0, &l_843};
                    int **l_861 = (void*)0;
                    int **l_862 = (void*)0;
                    int **l_863 = (void*)0;
                    int **l_864[4][8] = {{&l_843, &l_843, &l_809, &l_843, &l_843, &l_809, &l_843, &l_843}, {&l_843, &l_843, &l_809, &l_843, &l_843, &l_809, &l_843, &l_843}, {&l_843, &l_843, &l_809, &l_843, &l_843, &l_809, &l_843, &l_843}, {&l_843, &l_843, &l_809, &l_843, &l_843, &l_809, &l_843, &l_843}};
                    int **l_865[6];
                    int **l_866[10];
                    int **l_867 = &l_809;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_865[i] = &l_843;
                    for (i = 0; i < 10; i++)
                        l_866[i] = (void*)0;
                    (*l_867) = func_34((**l_822), (**l_823), g_12, g_51[2][0]);
                    (*l_788) = l_868;
                    (**l_788) = ((*l_809) < ((safe_mul_func_int8_t_s_s((-2L), (g_54[2] , 0x1CL))) > (((l_871 && (p_27 >= p_27)) || (p_27 <= (safe_lshift_func_uint8_t_u_s((&g_68 != &l_809), 5)))) , (**l_788))));
                    (**l_788) = ((((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(0xECFB3DEFL, 0x9C7BFE2EL)), 2)), 0)) != g_766[2][4][3]) >= (safe_rshift_func_int8_t_s_s(((~((p_27 & (((void*)0 == &g_114) > p_27)) && 0L)) | 0xFCDE19EFL), g_12))) <= p_27);
                }
            }
        }
        else
        {
            int *l_887 = &g_54[6];
            unsigned char l_899 = 251UL;
            int ***l_965 = &l_788;
            const short l_971 = (-1L);
            for (g_56 = 0; (g_56 == (-11)); g_56 = safe_sub_func_int16_t_s_s(g_56, 1))
            {
                for (l_784 = 0; (l_784 > 9); ++l_784)
                {
                    l_809 = (*l_788);
                }
                if (p_27)
                    break;
                (**l_787) = l_887;
                (*l_788) = l_887;
            }
            for (l_33 = 17; (l_33 != 35); l_33 = safe_add_func_uint8_t_u_u(l_33, 1))
            {
                (***l_802) = (((*l_868) , (g_766[0][2][0] ^ g_890)) && (***l_802));
                return p_27;
            }
            if ((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(g_12, 0x42L)), g_900)))
            {
                unsigned l_920 = 0xC4AE3D3AL;
                int *l_932 = &l_784;
                (**l_787) = l_887;
                for (g_890 = 0; (g_890 <= 49); g_890 = safe_add_func_int8_t_s_s(g_890, 2))
                {
                    (**l_802) = l_809;
                    (*l_887) = 0L;
                }
                for (l_797 = 22; (l_797 >= 14); --l_797)
                {
                    int *l_925 = (void*)0;
                    (**l_787) = func_34(&g_54[6], l_809, (&l_788 == l_905[3]), (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((p_27 , p_27) == p_27), (*l_843))), 3)));
                    (*l_887) = (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(0xC1C4L, 3)), l_920));
                    for (g_890 = (-11); (g_890 == 31); ++g_890)
                    {
                        int *l_929 = (void*)0;
                        unsigned char l_930 = 253UL;
                        int **l_931 = &g_39;
                        if ((*l_887))
                            break;
                        (*l_931) = func_34(((g_926[5][0][5] > p_27) , l_929), &g_55, g_701, l_930);
                        (*l_788) = (void*)0;
                        (*l_788) = l_932;
                    }
                }
            }
            else
            {
                unsigned short l_933 = 65535UL;
                if (l_933)
                {
                    if (l_933)
                        break;
                }
                else
                {
                    unsigned l_936 = 0x4D81A0C0L;
                    const int *l_952 = &g_54[6];
                    if (p_27)
                    {
                        unsigned char l_934 = 0x86L;
                        (**l_787) = (**l_802);
                        if (l_934)
                            break;
                    }
                    else
                    {
                        int *l_935 = &g_54[6];
                        (**l_787) = l_935;
                        if (l_936)
                            break;
                    }
                    for (l_33 = 0; (l_33 <= 36); l_33++)
                    {
                        int **l_946 = &g_68;
                        (*l_946) = func_34(l_887, &g_54[6], l_936, ((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_943, (safe_rshift_func_int16_t_s_s(g_102, ((+((**l_802) != l_887)) , g_926[7][1][0]))))), l_933)) == 0x3BE63B42L));
                        (***l_802) = (safe_rshift_func_int8_t_s_s(((func_43(((((**l_787) != (void*)0) && ((((p_27 <= ((~(*l_887)) != (*l_868))) || ((((0UL | (((l_933 >= 0L) , 0x79B1CC78L) <= l_951[1][2][0])) , l_933) & (*l_887)) , 0x0CD5L)) , 4294967290UL) , g_766[2][4][3])) , 9UL), (**l_802), &g_56) , l_952) == l_952), 4));
                        (*g_39) = (*l_843);
                    }
                    (***l_965) = ((g_926[7][1][0] <= ((*g_39) < (g_701 , (p_27 , ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(g_926[7][1][0], g_51[0][2])), g_12)) < (safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((void*)0 != l_965), l_966)) , p_27), 65535UL))))))) , (*l_952));
                    for (l_807 = 0; (l_807 != (-7)); --l_807)
                    {
                        int **l_969 = &g_68;
                        (*l_969) = func_34((*l_788), &g_54[6], l_933, g_51[3][2]);
                    }
                }
                if (l_970[0][1][1])
                    break;
                if (l_971)
                    continue;
            }
            if ((**l_788))
                continue;
        }
        for (l_871 = 0; (l_871 <= 36); l_871++)
        {
            int *l_974 = &g_54[6];
            int **l_975[1];
            int **l_976[4] = {&l_843, &g_39, &l_843, &g_39};
            int **l_977[8][6][4] = {{{(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}}, {{(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}}, {{(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}}, {{(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}}, {{(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}}, {{(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}}, {{(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}}, {{(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}, {(void*)0, &l_974, &l_843, &l_843}}};
            int **l_978 = &l_809;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_975[i] = &l_809;
            (*l_978) = func_34(l_974, &g_55, (*l_974), (***l_787));
        }
    }
    return p_27;
}







static unsigned short func_28(unsigned p_29, char p_30)
{
    unsigned l_547 = 1UL;
    int **l_781[8][2][1] = {{{&g_68}, {&g_68}}, {{&g_68}, {&g_68}}, {{&g_68}, {&g_68}}, {{&g_68}, {&g_68}}, {{&g_68}, {&g_68}}, {{&g_68}, {&g_68}}, {{&g_68}, {&g_68}}, {{&g_68}, {&g_68}}};
    int **l_782[7] = {&g_68, &g_68, (void*)0, &g_68, &g_68, (void*)0, &g_68};
    int **l_783 = &g_39;
    int i, j, k;
    (*l_783) = func_34(g_39, g_39, (func_40(g_12) & (((void*)0 != &g_39) != p_29)), (l_547 , (safe_mul_func_int16_t_s_s(p_29, g_12))));
    return g_12;
}







static int * const func_34(int * p_35, int * p_36, unsigned short p_37, unsigned short p_38)
{
    unsigned short l_552 = 0x3D6EL;
    const int *l_557 = &g_56;
    char l_558 = 0L;
    int l_583 = (-1L);
    int **l_623[9];
    int ***l_622 = &l_623[4];
    int l_656[10] = {0x6D759138L, 0xF20E5E0DL, 0xDA2A9EE4L, 0xDA2A9EE4L, 0xF20E5E0DL, 0x6D759138L, 0xF20E5E0DL, 0xDA2A9EE4L, 0xDA2A9EE4L, 0xF20E5E0DL};
    int * const l_679[2][5][6] = {{{(void*)0, &l_583, &g_55, &g_55, &g_56, &g_56}, {(void*)0, &l_583, &g_55, &g_55, &g_56, &g_56}, {(void*)0, &l_583, &g_55, &g_55, &g_56, &g_56}, {(void*)0, &l_583, &g_55, &g_55, &g_56, &g_56}, {(void*)0, &l_583, &g_55, &g_55, &g_56, &g_56}}, {{(void*)0, &l_583, &g_55, &g_55, &g_56, &g_56}, {(void*)0, &l_583, &g_55, &g_55, &g_56, &g_56}, {(void*)0, &l_583, &g_55, &g_55, &g_56, &g_56}, {(void*)0, &l_583, &g_55, &g_55, &g_56, &g_56}, {(void*)0, &l_583, &g_55, &g_55, &g_56, &g_56}}};
    int * const l_680 = &g_54[6];
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_623[i] = (void*)0;
    if (((safe_add_func_int16_t_s_s((((l_552 , (((safe_sub_func_uint16_t_u_u(g_102, 0x5689L)) , (((safe_add_func_uint16_t_u_u(l_552, 0x6774L)) , (((((*l_557) == (*l_557)) | 0x54L) | g_433) < g_54[6])) <= 0xCF09L)) < 0x215E956AL)) & g_56) > (-1L)), g_55)) , 0x428EFB41L))
    {
        int *l_559 = (void*)0;
        int *l_560 = (void*)0;
        int *l_561[7][4] = {{&g_54[6], &g_54[0], &g_54[6], &g_54[0]}, {&g_54[6], &g_54[0], &g_54[6], &g_54[0]}, {&g_54[6], &g_54[0], &g_54[6], &g_54[0]}, {&g_54[6], &g_54[0], &g_54[6], &g_54[0]}, {&g_54[6], &g_54[0], &g_54[6], &g_54[0]}, {&g_54[6], &g_54[0], &g_54[6], &g_54[0]}, {&g_54[6], &g_54[0], &g_54[6], &g_54[0]}};
        int **l_562[2][10] = {{&l_559, (void*)0, &l_559, (void*)0, &l_559, (void*)0, &l_559, (void*)0, &l_559, (void*)0}, {&l_559, (void*)0, &l_559, (void*)0, &l_559, (void*)0, &l_559, (void*)0, &l_559, (void*)0}};
        unsigned l_571 = 0xD1D4121BL;
        short l_578 = 0x4B4FL;
        char l_582 = 0L;
        int i, j;
        g_54[2] = (*l_557);
        p_36 = (void*)0;
        if (((*l_557) < (safe_lshift_func_uint8_t_u_u(p_37, (safe_mul_func_uint16_t_u_u(((((((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(l_571, (*l_557))), 4)) && 0xE59B30D6L) , p_37) , 3UL) , &l_557) == ((g_54[5] , 1L) , &l_559)), g_55))))))
        {
            int *l_572 = &g_56;
            l_572 = p_35;
        }
        else
        {
            unsigned char l_575 = 0x8DL;
            int * const l_581 = &g_56;
            (*l_581) = ((safe_sub_func_int32_t_s_s(0x7062632BL, (((l_575 >= (safe_div_func_int16_t_s_s((l_578 ^ (+(safe_sub_func_int32_t_s_s(l_575, func_43(g_433, &g_56, l_581))))), g_51[1][0]))) , (*l_557)) <= l_582))) ^ g_12);
            (*l_581) = func_43(((*l_557) != 0xAAAB4B46L), &g_54[6], &g_54[5]);
            for (g_433 = 0; g_433 < 7; g_433 += 1)
            {
                g_54[g_433] = 0xBDDDFB87L;
            }
            l_583 = (g_102 & p_37);
        }
    }
    else
    {
        int l_592 = 0L;
        const int *l_593 = &g_56;
        int * const l_594 = &g_54[0];
        const unsigned l_604 = 0xB972B8ABL;
        const int l_634 = 0xD961C2A5L;
        unsigned short l_646 = 0xD9ADL;
        int ***l_678 = &l_623[4];
        const int l_705 = 0xCDFF685BL;
        if ((func_43(((((((void*)0 == &g_101) , (safe_mod_func_uint8_t_u_u((*l_593), g_51[2][1]))) > g_54[2]) < (*l_557)) & 0L), &g_54[6], l_594) || p_38))
        {
            int **l_595 = &g_39;
            (*l_595) = (void*)0;
            (*l_594) = 0L;
            for (g_55 = 0; g_55 < 4; g_55 += 1)
            {
                for (l_592 = 0; l_592 < 3; l_592 += 1)
                {
                    g_51[g_55][l_592] = 0L;
                }
            }
            (*l_595) = p_35;
        }
        else
        {
            int *l_626 = &g_56;
            int *** const l_677 = (void*)0;
            if (((p_38 , (safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((*l_594) <= (~((((l_604 <= (*l_593)) ^ p_37) , 0xEA39L) || g_55))), 2)) < p_37), p_38))) || 0x848FAAC3L))
            {
                int l_624 = (-1L);
                (*l_594) = ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((4294967295UL | (*l_593)), (safe_mul_func_uint8_t_u_u((g_12 , (safe_mul_func_int16_t_s_s(((-5L) < ((g_433 & (((((*l_557) <= p_37) < (p_38 && ((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(((safe_add_func_int8_t_s_s(((void*)0 == l_622), p_38)) , (*l_594)))), 0x043EL)), (*l_594))) , (-1L)))) , g_54[6]) < p_38)) || l_624)), p_37))), p_38)))), 0)), g_54[6])) | 0xC5ADL);
            }
            else
            {
                int ** const *l_645 = &l_623[4];
                int l_647 = (-6L);
                unsigned l_653 = 0xC2E1D3AFL;
                for (l_558 = 0; (l_558 <= 8); l_558 += 1)
                {
                    int *l_625 = &g_54[6];
                    int i;
                    l_626 = l_625;
                    l_623[l_558] = (void*)0;
                }
                for (l_583 = (-11); (l_583 < 26); l_583 = safe_add_func_uint8_t_u_u(l_583, 2))
                {
                    char l_631 = 0x0AL;
                    for (g_56 = 0; (g_56 >= (-27)); g_56 = safe_sub_func_uint32_t_u_u(g_56, 8))
                    {
                        (*l_594) = l_631;
                    }
                    l_626 = &g_54[6];
                }
                (*l_626) = ((((*l_626) , ((safe_div_func_int16_t_s_s((l_634 | (g_55 || p_38)), (-1L))) , (*l_593))) & (*l_626)) == (*l_594));
                for (l_552 = 1; (l_552 <= 6); l_552 += 1)
                {
                    unsigned l_650 = 0x2A5A3B1DL;
                    int i;
                    if ((g_12 < (-1L)))
                    {
                        g_68 = p_35;
                    }
                    else
                    {
                        g_68 = l_626;
                    }
                    if (l_653)
                        continue;
                    g_54[l_552] = (safe_mul_func_int8_t_s_s(p_37, (l_656[4] , (safe_div_func_int16_t_s_s((p_38 , ((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((*l_626), g_54[6])), (p_37 && p_38))) || ((*l_594) , (g_54[6] , 0UL)))), p_37)))));
                    for (g_55 = 1; (g_55 <= 8); g_55 += 1)
                    {
                        unsigned short l_663 = 0xDDB1L;
                        p_35 = (l_663 , p_36);
                        (*l_626) = (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((safe_mul_func_int8_t_s_s(((+((((p_37 == (p_38 , (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s((((((safe_div_func_uint32_t_u_u(((*l_626) <= g_12), g_102)) != (+((-1L) >= (safe_div_func_uint32_t_u_u(l_663, (g_12 || (g_54[1] , g_54[6]))))))) , l_677) == l_678) & 0xC4027F86L), g_433)) | 4294967287UL), 0)))) || l_663) ^ g_12) & 65528UL)) , p_38), 1UL)))), g_102));
                    }
                    for (l_646 = 0; (l_646 <= 8); l_646 += 1)
                    {
                        return l_680;
                    }
                }
            }
        }
        (*l_594) = (&g_115 != (void*)0);
        for (l_646 = 0; (l_646 != 54); ++l_646)
        {
            int l_683 = (-8L);
            unsigned l_692 = 0xA1CB667EL;
            const int *l_730[1][3][8];
            unsigned short l_733 = 0x9F58L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 8; k++)
                        l_730[i][j][k] = &g_54[6];
                }
            }
            if (l_683)
                break;
        }
    }
    if (p_38)
    {
        int *l_734 = &l_583;
        l_734 = p_35;
    }
    else
    {
        int *l_775[6][8] = {{&g_54[6], &g_54[1], &g_54[5], &g_54[1], &g_54[6], &g_54[2], &g_54[5], &g_54[2]}, {&g_54[6], &g_54[1], &g_54[5], &g_54[1], &g_54[6], &g_54[2], &g_54[5], &g_54[2]}, {&g_54[6], &g_54[1], &g_54[5], &g_54[1], &g_54[6], &g_54[2], &g_54[5], &g_54[2]}, {&g_54[6], &g_54[1], &g_54[5], &g_54[1], &g_54[6], &g_54[2], &g_54[5], &g_54[2]}, {&g_54[6], &g_54[1], &g_54[5], &g_54[1], &g_54[6], &g_54[2], &g_54[5], &g_54[2]}, {&g_54[6], &g_54[1], &g_54[5], &g_54[1], &g_54[6], &g_54[2], &g_54[5], &g_54[2]}};
        int *l_780 = (void*)0;
        int i, j;
        for (l_558 = 0; (l_558 <= 9); l_558 += 1)
        {
            int i;
            (*l_680) = l_656[l_558];
        }
        g_68 = p_35;
        for (g_56 = (-2); (g_56 < (-26)); g_56 = safe_sub_func_int8_t_s_s(g_56, 7))
        {
            int l_737 = 1L;
            l_737 = (-1L);
            if (l_737)
            {
                const unsigned l_742 = 0x5D793B46L;
                for (l_558 = 0; (l_558 < (-18)); l_558 = safe_sub_func_uint8_t_u_u(l_558, 1))
                {
                    int *l_743 = &g_54[5];
                    int l_765 = 0x34EE0C77L;
                    p_36 = (void*)0;
                    if ((safe_lshift_func_int16_t_s_s(g_54[6], l_742)))
                    {
                        l_743 = p_35;
                    }
                    else
                    {
                        return l_743;
                    }
                    if ((p_35 != p_36))
                    {
                        (*l_680) = (*l_680);
                    }
                    else
                    {
                        unsigned l_752 = 0x364B7E15L;
                        (*l_680) = (((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_433, (safe_mod_func_int32_t_s_s(2L, (safe_lshift_func_int16_t_s_s((l_752 == (safe_add_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((((252UL > ((safe_div_func_uint32_t_u_u((&g_68 == &p_35), (-9L))) > l_742)) || ((safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((-9L), g_56)), g_54[6])) & (-2L)), l_737)) , p_38)) , g_55), p_38)) , p_37) , p_38), g_54[6]))), 9)))))), g_102)) & p_38) , l_765);
                        if (g_766[2][4][3])
                            continue;
                        if (l_742)
                            break;
                        (*l_680) = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_54[3], 7)), ((p_37 , p_37) < ((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(65535UL, ((((l_737 < l_742) == g_102) , (&p_35 != &p_36)) > l_737))) & g_433), p_37)) < 0UL))));
                    }
                }
                g_115 = l_775[5][6];
            }
            else
            {
                (*l_680) = (safe_mod_func_int16_t_s_s(g_701, 5L));
                p_36 = p_36;
                for (l_558 = (-11); (l_558 != (-10)); ++l_558)
                {
                    p_35 = p_36;
                }
            }
            p_36 = (void*)0;
            l_780 = p_36;
        }
        p_36 = l_775[5][6];
    }
    p_36 = p_36;
    return &g_54[6];
}







static unsigned short func_40(unsigned p_41)
{
    unsigned l_42 = 0xCC321A07L;
    int **l_132 = &g_39;
    int *l_520 = (void*)0;
    unsigned l_546 = 4294967295UL;
    if (l_42)
    {
        int * const **l_133 = (void*)0;
        int *l_498 = &g_56;
        (*l_498) = (func_43(((func_47(g_12, l_42, g_39) >= g_102) <= (((l_132 != (void*)0) , l_133) == (void*)0)), (*l_132), (*l_132)) , p_41);
    }
    else
    {
        const int *l_502[10][9] = {{&g_54[2], &g_54[6], &g_56, &g_54[4], &g_54[4], &g_56, &g_54[6], &g_54[2], (void*)0}, {&g_54[2], &g_54[6], &g_56, &g_54[4], &g_54[4], &g_56, &g_54[6], &g_54[2], (void*)0}, {&g_54[2], &g_54[6], &g_56, &g_54[4], &g_54[4], &g_56, &g_54[6], &g_54[2], (void*)0}, {&g_54[2], &g_54[6], &g_56, &g_54[4], &g_54[4], &g_56, &g_54[6], &g_54[2], (void*)0}, {&g_54[2], &g_54[6], &g_56, &g_54[4], &g_54[4], &g_56, &g_54[6], &g_54[2], (void*)0}, {&g_54[2], &g_54[6], &g_56, &g_54[4], &g_54[4], &g_56, &g_54[6], &g_54[2], (void*)0}, {&g_54[2], &g_54[6], &g_56, &g_54[4], &g_54[4], &g_56, &g_54[6], &g_54[2], (void*)0}, {&g_54[2], &g_54[6], &g_56, &g_54[4], &g_54[4], &g_56, &g_54[6], &g_54[2], (void*)0}, {&g_54[2], &g_54[6], &g_56, &g_54[4], &g_54[4], &g_56, &g_54[6], &g_54[2], (void*)0}, {&g_54[2], &g_54[6], &g_56, &g_54[4], &g_54[4], &g_56, &g_54[6], &g_54[2], (void*)0}};
        int i, j;
        for (l_42 = (-7); (l_42 >= 3); ++l_42)
        {
            int *l_501 = &g_54[6];
        }
    }
    for (l_42 = 0; (l_42 <= 2); l_42 += 1)
    {
        int ***l_517 = &l_132;
        const int *l_545 = &g_54[1];
        for (g_433 = 0; (g_433 <= 2); g_433 += 1)
        {
            int i, j;
            g_54[l_42] = (g_51[g_433][l_42] ^ (((+(safe_sub_func_int32_t_s_s((g_54[(g_433 + 3)] , g_54[l_42]), (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((&g_101 != l_517), (((l_132 != &g_68) < ((g_56 , (void*)0) != &g_54[(g_433 + 3)])) , 65527UL))), g_12)) , g_54[(g_433 + 3)]), p_41)), g_54[(g_433 + 3)])), g_55))))) >= 0xC7F7299CL) < 0x5DL));
            for (g_102 = 2; (g_102 > 8); g_102 = safe_add_func_uint16_t_u_u(g_102, 6))
            {
                if (p_41)
                    break;
                return g_51[1][0];
            }
            l_520 = &g_54[(g_433 + 3)];
            if ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((*l_520) & p_41), p_41)) == (safe_add_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(0x86AA2D01L, (safe_div_func_int8_t_s_s((p_41 <= (((safe_sub_func_int32_t_s_s(p_41, p_41)) < g_12) || (((((safe_div_func_int8_t_s_s(p_41, 0xBBL)) ^ 0xE1A3B281L) == g_54[(g_433 + 3)]) && g_102) , p_41))), 0x37L)))), g_12)) && p_41) > p_41), g_51[3][1]))), 65528UL)), 3)), 6)), g_51[3][2])))
            {
                int **l_543 = (void*)0;
                int *l_544 = &g_54[l_42];
                l_544 = &g_54[(g_433 + 3)];
            }
            else
            {
                (*l_520) = ((g_55 > g_56) > 4294967287UL);
            }
        }
        for (l_546 = 0; (l_546 <= 2); l_546 += 1)
        {
            int i, j;
            g_54[(l_42 + 2)] = g_51[(l_42 + 1)][l_546];
        }
    }
    return p_41;
}







static unsigned func_43(unsigned p_44, int * const p_45, int * const p_46)
{
    const int ***l_134 = &g_101;
    int l_191 = 0xA53BE8B1L;
    const unsigned short l_193[3][1][5] = {{{65535UL, 65530UL, 0x3B60L, 0x3B60L, 65530UL}}, {{65535UL, 65530UL, 0x3B60L, 0x3B60L, 65530UL}}, {{65535UL, 65530UL, 0x3B60L, 0x3B60L, 65530UL}}};
    unsigned l_205[9] = {0xA616365CL, 0xA616365CL, 4294967295UL, 0xA616365CL, 0xA616365CL, 4294967295UL, 0xA616365CL, 0xA616365CL, 4294967295UL};
    unsigned short l_206[8][3][1] = {{{5UL}, {5UL}, {5UL}}, {{5UL}, {5UL}, {5UL}}, {{5UL}, {5UL}, {5UL}}, {{5UL}, {5UL}, {5UL}}, {{5UL}, {5UL}, {5UL}}, {{5UL}, {5UL}, {5UL}}, {{5UL}, {5UL}, {5UL}}, {{5UL}, {5UL}, {5UL}}};
    int l_218 = 0x329CA2B8L;
    const int *l_231 = &g_54[2];
    unsigned char l_232 = 255UL;
    char l_239 = 0x01L;
    const int *l_338 = &l_218;
    unsigned short l_351 = 8UL;
    const unsigned l_430 = 0x10FC2C5BL;
    unsigned l_489[7];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_489[i] = 0x566BABBAL;
    if ((l_134 != &g_101))
    {
        int **l_135[1][4][7] = {{{&g_68, (void*)0, &g_68, &g_39, &g_68, &g_39, (void*)0}, {&g_68, (void*)0, &g_68, &g_39, &g_68, &g_39, (void*)0}, {&g_68, (void*)0, &g_68, &g_39, &g_68, &g_39, (void*)0}, {&g_68, (void*)0, &g_68, &g_39, &g_68, &g_39, (void*)0}}};
        int **l_136 = &g_68;
        int i, j, k;
        (*l_136) = p_46;
        for (g_102 = (-30); (g_102 >= 35); g_102 = safe_add_func_int32_t_s_s(g_102, 6))
        {
            char l_143 = (-8L);
            int l_148[2][8] = {{0x9E52E5D3L, (-8L), 0x61C39D5FL, 0x61C39D5FL, (-8L), 0x9E52E5D3L, (-8L), 0x61C39D5FL}, {0x9E52E5D3L, (-8L), 0x61C39D5FL, 0x61C39D5FL, (-8L), 0x9E52E5D3L, (-8L), 0x61C39D5FL}};
            unsigned l_192 = 0x817256ABL;
            int i, j;
            l_148[1][0] = (((safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_143, (&l_136 != (void*)0))), ((safe_div_func_uint8_t_u_u(p_44, l_143)) , l_143))) >= 2UL) == (safe_lshift_func_uint16_t_u_u(65534UL, l_143)));
            for (l_143 = 0; (l_143 == 15); ++l_143)
            {
                char l_157 = 0xD5L;
                unsigned l_168 = 0x31DD9F64L;
                for (p_44 = (-29); (p_44 > 55); p_44 = safe_add_func_uint16_t_u_u(p_44, 2))
                {
                    unsigned l_158 = 0xD5C02B89L;
                    int l_159 = 0xCA3757E1L;
                    l_159 = (((p_44 && ((~(g_51[2][0] == g_51[3][1])) && (((safe_div_func_uint8_t_u_u(0UL, ((((safe_mul_func_uint8_t_u_u(p_44, 0xE2L)) | l_148[1][0]) | l_157) , g_51[0][0]))) , g_12) | g_55))) & p_44) || g_54[6]);
                    if ((((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((((l_157 | (!(g_51[1][0] | g_55))) | p_44) & 4L), p_44)) , g_12), l_143)) ^ l_148[1][0]) , l_157))
                    {
                        return g_56;
                    }
                    else
                    {
                        int **l_171[7][5] = {{&g_68, &g_68, &g_68, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &g_68}};
                        int **l_172 = &g_68;
                        int i, j;
                        (*l_172) = ((safe_lshift_func_int16_t_s_u(0xF531L, g_56)) , p_46);
                    }
                    for (l_159 = 0; (l_159 < 15); l_159 = safe_add_func_int8_t_s_s(l_159, 1))
                    {
                        if (l_143)
                            break;
                    }
                    if (l_148[1][0])
                        continue;
                }
            }
            if (p_44)
                continue;
            l_191 = ((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((3UL == ((safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((((0xB6A1L && (p_44 != ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((8UL != (((&g_114 != (void*)0) , (~(((((safe_div_func_int8_t_s_s(((9L == (safe_rshift_func_int16_t_s_s((l_191 && p_44), p_44))) , g_54[6]), 0x66L)) & l_191) , l_148[1][2]) < p_44) | (-1L)))) , l_192)), 0xBBL)), g_12)) , p_44))) <= 0L) , l_192), 0x41L)), l_192)) ^ p_44)), 0x49BAL)), l_191)) & 0x98896650L);
        }
    }
    else
    {
        unsigned l_194 = 4294967295UL;
        int **l_200 = &g_39;
        int ** const *l_199 = &l_200;
        l_191 = l_206[6][0][0];
        for (p_44 = 14; (p_44 == 8); p_44--)
        {
            const unsigned char l_209 = 0x56L;
            int l_211 = 0x32A21598L;
            int *l_214[6] = {&g_56, &g_56, &g_54[6], &g_56, &g_56, &g_54[6]};
            int i;
            if (l_209)
            {
                int **l_210 = &g_68;
                int l_212 = 0x6C6B0B35L;
                (*l_210) = p_46;
                if (l_211)
                    break;
                if (l_212)
                    break;
                if (l_209)
                    continue;
            }
            else
            {
                int **l_213[5] = {&g_68, &g_68, &g_68, &g_68, &g_68};
                int i;
                l_214[5] = (void*)0;
            }
            for (g_55 = 6; (g_55 >= 0); g_55 -= 1)
            {
                int **l_215[7] = {&g_68, &g_68, &l_214[5], &g_68, &g_68, &l_214[5], &g_68};
                int i;
                l_214[4] = (g_54[g_55] , p_46);
            }
            for (g_102 = 29; (g_102 >= 57); g_102++)
            {
                if (l_194)
                    break;
            }
            l_218 = p_44;
        }
        return g_12;
    }
    for (g_56 = 3; (g_56 < 12); g_56 = safe_add_func_uint32_t_u_u(g_56, 5))
    {
        int * const l_221 = &g_56;
        int **l_222 = &g_68;
        (*l_222) = l_221;
        if ((*l_221))
            continue;
    }
    if ((safe_mul_func_uint8_t_u_u((p_44 , ((((safe_add_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((p_44 , (g_55 | (0xD9L > ((0x2127L >= l_191) && p_44)))), p_44)) && ((*l_231) || p_44)) || 0x6837L), 0xE789L)) ^ g_54[5]) , (*l_231)) <= l_232)), p_44)))
    {
        unsigned l_233[8] = {0UL, 9UL, 0UL, 9UL, 0UL, 9UL, 0UL, 9UL};
        int *l_234[10][10][2] = {{{&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}}, {{&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}}, {{&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}}, {{&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}}, {{&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}}, {{&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}}, {{&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}}, {{&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}}, {{&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}}, {{&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}, {&g_54[5], &g_54[6]}}};
        unsigned char l_240 = 0x5CL;
        char l_256 = 0L;
        unsigned short l_315 = 65532UL;
        int l_316 = (-8L);
        unsigned l_323[9][3][3] = {{{4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}}, {{4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}}, {{4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}}, {{4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}}, {{4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}}, {{4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}}, {{4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}}, {{4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}}, {{4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}, {4294967288UL, 4294967288UL, 0x43BC7034L}}};
        int i, j, k;
        g_54[6] = l_233[2];
        for (g_102 = 17; (g_102 > 32); g_102 = safe_add_func_int8_t_s_s(g_102, 1))
        {
            l_191 = ((g_102 , &g_101) != l_134);
            l_191 = p_44;
            return g_102;
        }
        for (g_102 = (-2); (g_102 > 55); g_102 = safe_add_func_uint32_t_u_u(g_102, 7))
        {
            unsigned l_241 = 6UL;
            l_240 = l_239;
            return l_241;
        }
        for (l_240 = 0; (l_240 == 25); ++l_240)
        {
            unsigned l_259[6][9] = {{0UL, 6UL, 0x2771265BL, 0x2771265BL, 6UL, 0UL, 6UL, 0x2771265BL, 0x2771265BL}, {0UL, 6UL, 0x2771265BL, 0x2771265BL, 6UL, 0UL, 6UL, 0x2771265BL, 0x2771265BL}, {0UL, 6UL, 0x2771265BL, 0x2771265BL, 6UL, 0UL, 6UL, 0x2771265BL, 0x2771265BL}, {0UL, 6UL, 0x2771265BL, 0x2771265BL, 6UL, 0UL, 6UL, 0x2771265BL, 0x2771265BL}, {0UL, 6UL, 0x2771265BL, 0x2771265BL, 6UL, 0UL, 6UL, 0x2771265BL, 0x2771265BL}, {0UL, 6UL, 0x2771265BL, 0x2771265BL, 6UL, 0UL, 6UL, 0x2771265BL, 0x2771265BL}};
            unsigned l_268 = 0x72109CD2L;
            int * const l_276 = &g_56;
            int *l_286 = &g_54[6];
            unsigned char l_331 = 1UL;
            int i, j;
            for (l_191 = 19; (l_191 < (-1)); l_191 = safe_sub_func_int32_t_s_s(l_191, 2))
            {
                for (p_44 = 27; (p_44 > 30); ++p_44)
                {
                    int **l_248 = &l_234[9][6][1];
                    (*l_248) = (g_51[3][2] , p_45);
                }
            }
            for (g_102 = 0; (g_102 < 8); ++g_102)
            {
                int *l_252 = &l_218;
                int *l_275 = &g_54[6];
                for (l_218 = 7; (l_218 >= 1); l_218 -= 1)
                {
                    int *l_253 = &g_54[1];
                    int **l_257 = (void*)0;
                    int **l_258 = &g_68;
                    int i;
                    (*l_253) = (safe_unary_minus_func_uint16_t_u(((l_252 != l_253) == ((l_205[l_218] >= 0xBBD2L) , (((l_233[l_218] <= (safe_mod_func_int32_t_s_s(((0xDFA7L > (g_55 , (p_44 || ((void*)0 != l_134)))) != 0x4B56196DL), l_256))) & 1L) == 65531UL)))));
                    (*l_258) = p_45;
                    return l_259[5][5];
                }
                (*l_252) = (((((safe_div_func_uint8_t_u_u((p_44 , ((safe_mod_func_uint16_t_u_u(((l_259[5][5] , (safe_lshift_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u((+p_44), g_51[1][0])) <= p_44) < (*l_231)) <= g_54[4]), ((void*)0 == &p_45)))) , l_268), 0x3E0DL)) , g_102)), (*l_252))) > 0x5FL) >= (-1L)) , &l_234[8][8][0]) != &p_45);
            }
        }
    }
    else
    {
        char l_347 = (-1L);
        int *l_348 = &g_56;
        int **l_355 = (void*)0;
        int ***l_354 = &l_355;
        short l_366 = 3L;
        const short l_440 = (-3L);
        int *l_458 = (void*)0;
        int *l_459 = &l_218;
        (*l_348) = (p_44 < ((((*l_338) <= ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((0xD753L & (((safe_sub_func_uint8_t_u_u((p_44 & 3UL), g_55)) <= p_44) <= p_44)), (*l_231))), g_12)) == (*l_231))) != 0x8069L) < l_347));
        if (((0x3DACL == (safe_lshift_func_uint8_t_u_u((g_51[0][0] || p_44), (safe_mul_func_uint8_t_u_u((0x597BL || ((l_354 != l_134) >= 4294967289UL)), 0x45L))))) | 0x628AL))
        {
            unsigned short l_362 = 0xFFCCL;
            const int *l_363 = &g_54[2];
            for (p_44 = (-7); (p_44 >= 3); ++p_44)
            {
                const int *l_367 = &l_191;
                (*l_348) = (safe_mul_func_int16_t_s_s(((void*)0 != &g_114), ((-1L) > ((safe_rshift_func_int16_t_s_s(((g_54[6] > g_56) , p_44), p_44)) , g_12))));
                if ((*l_363))
                    continue;
            }
            for (l_347 = 11; (l_347 <= 12); ++l_347)
            {
                unsigned char l_371 = 0x4EL;
                for (l_191 = 4; (l_191 >= 0); l_191 -= 1)
                {
                    unsigned short l_370[5][2] = {{65535UL, 65535UL}, {65535UL, 65535UL}, {65535UL, 65535UL}, {65535UL, 65535UL}, {65535UL, 65535UL}};
                    int i, j;
                    for (g_56 = 2; (g_56 <= 6); g_56 += 1)
                    {
                        int i;
                        g_54[g_56] = l_370[1][1];
                        return g_54[g_56];
                    }
                }
                l_371 = 0xD602BD42L;
            }
        }
        else
        {
            int ***l_376 = &l_355;
            char l_385 = 0x3BL;
            int *l_419 = &g_54[6];
            if (l_385)
            {
                return p_44;
            }
            else
            {
                int l_392 = 0x027B5696L;
                int *** const l_393 = &l_355;
                const unsigned char l_396 = 1UL;
                int * const l_400 = &g_56;
                int **l_401 = (void*)0;
                int **l_402 = &l_348;
                for (l_232 = 0; (l_232 >= 32); l_232++)
                {
                    unsigned char l_397[9][9] = {{0xE2L, 255UL, 1UL, 0xF0L, 1UL, 255UL, 0xE2L, 0x38L, 0UL}, {0xE2L, 255UL, 1UL, 0xF0L, 1UL, 255UL, 0xE2L, 0x38L, 0UL}, {0xE2L, 255UL, 1UL, 0xF0L, 1UL, 255UL, 0xE2L, 0x38L, 0UL}, {0xE2L, 255UL, 1UL, 0xF0L, 1UL, 255UL, 0xE2L, 0x38L, 0UL}, {0xE2L, 255UL, 1UL, 0xF0L, 1UL, 255UL, 0xE2L, 0x38L, 0UL}, {0xE2L, 255UL, 1UL, 0xF0L, 1UL, 255UL, 0xE2L, 0x38L, 0UL}, {0xE2L, 255UL, 1UL, 0xF0L, 1UL, 255UL, 0xE2L, 0x38L, 0UL}, {0xE2L, 255UL, 1UL, 0xF0L, 1UL, 255UL, 0xE2L, 0x38L, 0UL}, {0xE2L, 255UL, 1UL, 0xF0L, 1UL, 255UL, 0xE2L, 0x38L, 0UL}};
                    const int **l_398 = &l_231;
                    int **l_399 = &l_348;
                    int i, j;
                }
                (*l_402) = l_400;
                for (p_44 = (-7); (p_44 == 37); ++p_44)
                {
                    int **l_405 = &g_68;
                    int l_418 = 0x9B941AC8L;
                    (*l_405) = p_45;
                    if ((((((safe_mul_func_int8_t_s_s(0x42L, p_44)) || (g_54[0] , (0x828EL >= (p_44 , ((((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_44, (safe_mul_func_int16_t_s_s(g_102, 0x55C8L)))), (safe_sub_func_uint16_t_u_u((~(&g_68 != (void*)0)), p_44)))) , p_45) != (*l_405)) >= l_418))))) && g_56) <= g_54[5]) > p_44))
                    {
                        int **l_422 = &l_419;
                        (*l_400) = p_44;
                        g_54[4] = (l_419 != p_46);
                        (*l_422) = ((safe_mul_func_int16_t_s_s(g_56, 0L)) , p_46);
                    }
                    else
                    {
                        int **l_423 = &l_419;
                        (*l_423) = p_45;
                        return g_102;
                    }
                }
                if (l_430)
                {
                    unsigned l_434 = 0x07BE547BL;
                    const int *l_439 = (void*)0;
                    if (((safe_mul_func_int8_t_s_s(g_433, (&g_114 != &l_355))) , (**l_402)))
                    {
                        int **l_441 = &l_348;
                        (*l_441) = p_45;
                        return p_44;
                    }
                    else
                    {
                        int **l_442 = &g_68;
                        int **l_455 = &l_348;
                        (*l_442) = p_46;
                        (*l_400) = ((g_51[3][2] == (g_12 != ((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((+4L), (safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(255UL, (safe_mul_func_uint8_t_u_u((*l_231), (g_56 <= ((void*)0 != &p_46)))))), 1)))), (**l_402))) , g_54[1]))) < (*l_400));
                        (*l_455) = ((+(g_12 ^ ((void*)0 == &g_39))) , p_45);
                    }
                }
                else
                {
                    (*l_402) = (void*)0;
                }
            }
        }
        (*l_459) = (safe_lshift_func_int8_t_s_s(p_44, 2));
    }
    for (g_433 = 0; (g_433 <= 8); g_433 += 1)
    {
        int *l_460 = &l_218;
        int **l_462 = &l_460;
        int ***l_461 = &l_462;
        unsigned l_497 = 4294967295UL;
        int i;
        (*l_460) = l_205[g_433];
        (*l_460) = (g_433 != p_44);
        if ((0xBE2CL == (**l_462)))
        {
            (**l_462) = (*l_460);
        }
        else
        {
            const int *l_463[3][10] = {{(void*)0, &g_54[6], (void*)0, &g_54[6], (void*)0, &g_55, (void*)0, &g_54[6], (void*)0, &g_54[6]}, {(void*)0, &g_54[6], (void*)0, &g_54[6], (void*)0, &g_55, (void*)0, &g_54[6], (void*)0, &g_54[6]}, {(void*)0, &g_54[6], (void*)0, &g_54[6], (void*)0, &g_55, (void*)0, &g_54[6], (void*)0, &g_54[6]}};
            const int **l_464 = &l_463[0][7];
            int **l_465 = &l_460;
            int i, j;
            (*l_464) = l_463[0][7];
            if (p_44)
                continue;
            (*l_465) = p_46;
            for (l_218 = 4; (l_218 >= 0); l_218 -= 1)
            {
                int i;
                (*l_465) = &g_54[l_218];
                for (l_191 = 0; (l_191 >= 0); l_191 -= 1)
                {
                    int *l_467 = (void*)0;
                    int *l_468 = &g_54[l_218];
                }
            }
        }
        for (g_55 = 0; (g_55 <= 6); g_55 += 1)
        {
            int * const l_469[2][7] = {{(void*)0, &g_54[g_55], &l_218, &l_218, &g_54[g_55], (void*)0, &g_54[g_55]}, {(void*)0, &g_54[g_55], &l_218, &l_218, &g_54[g_55], (void*)0, &g_54[g_55]}};
            short l_474 = 0x2062L;
            int i, j;
            (*l_462) = &g_54[g_55];
            (*l_462) = (**l_461);
            (**l_462) = (*l_231);
            for (l_218 = 0; (l_218 <= 0); l_218 += 1)
            {
                unsigned char l_481 = 0UL;
                int l_482[7][10] = {{0x49629A67L, 0x1E9459AAL, 0L, 0x1E9459AAL, 0x49629A67L, 0x4F15BE86L, 0L, 0x4F15BE86L, 0x49629A67L, 0x1E9459AAL}, {0x49629A67L, 0x1E9459AAL, 0L, 0x1E9459AAL, 0x49629A67L, 0x4F15BE86L, 0L, 0x4F15BE86L, 0x49629A67L, 0x1E9459AAL}, {0x49629A67L, 0x1E9459AAL, 0L, 0x1E9459AAL, 0x49629A67L, 0x4F15BE86L, 0L, 0x4F15BE86L, 0x49629A67L, 0x1E9459AAL}, {0x49629A67L, 0x1E9459AAL, 0L, 0x1E9459AAL, 0x49629A67L, 0x4F15BE86L, 0L, 0x4F15BE86L, 0x49629A67L, 0x1E9459AAL}, {0x49629A67L, 0x1E9459AAL, 0L, 0x1E9459AAL, 0x49629A67L, 0x4F15BE86L, 0L, 0x4F15BE86L, 0x49629A67L, 0x1E9459AAL}, {0x49629A67L, 0x1E9459AAL, 0L, 0x1E9459AAL, 0x49629A67L, 0x4F15BE86L, 0L, 0x4F15BE86L, 0x49629A67L, 0x1E9459AAL}, {0x49629A67L, 0x1E9459AAL, 0L, 0x1E9459AAL, 0x49629A67L, 0x4F15BE86L, 0L, 0x4F15BE86L, 0x49629A67L, 0x1E9459AAL}};
                char l_492[10][5][4] = {{{1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}}, {{1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}}, {{1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}}, {{1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}}, {{1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}}, {{1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}}, {{1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}}, {{1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}}, {{1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}}, {{1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}, {1L, 0x15L, 0xBDL, 0L}}};
                int i, j, k;
                for (l_232 = 0; (l_232 <= 0); l_232 += 1)
                {
                    int **l_470 = &g_68;
                    short l_475 = 0L;
                    unsigned char l_478 = 0x98L;
                    (*l_470) = l_469[1][0];
                }
                for (g_102 = 0; (g_102 <= 0); g_102 += 1)
                {
                    short l_491 = 0x6057L;
                    if ((safe_sub_func_int32_t_s_s(((g_54[6] <= g_54[4]) || (((safe_mod_func_int32_t_s_s((((g_55 != 0UL) , &p_46) != &l_469[1][0]), g_433)) , (*l_231)) & (safe_rshift_func_int16_t_s_u((-1L), g_56)))), 4294967295UL)))
                    {
                        int **l_490 = &g_68;
                        if (l_489[2])
                            break;
                        (*l_490) = p_45;
                        l_491 = (-9L);
                        if (l_491)
                            continue;
                    }
                    else
                    {
                        (*l_460) = ((l_491 > (p_44 | ((*l_231) , g_51[2][1]))) > (*l_460));
                        if (l_492[1][0][0])
                            continue;
                    }
                    (*l_460) = (l_482[3][1] , ((safe_add_func_int8_t_s_s((g_433 | (g_54[6] == (((g_12 == ((*l_231) | (((p_44 < (!(!g_12))) , (p_44 || (safe_div_func_int16_t_s_s((-1L), g_56)))) , g_55))) ^ g_433) | l_497))), l_491)) || 6L));
                }
            }
        }
    }
    return g_51[0][1];
}







static unsigned func_47(unsigned short p_48, int p_49, const int * p_50)
{
    int l_57[10][3][6] = {{{0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}}, {{0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}}, {{0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}}, {{0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}}, {{0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}}, {{0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}}, {{0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}}, {{0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}}, {{0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}}, {{0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}, {0x29656D29L, (-1L), 0x518F82EAL, (-1L), 1L, 0xF9BA4AEFL}}};
    unsigned char l_86 = 2UL;
    int *l_90 = (void*)0;
    int *l_91[10];
    char l_96 = 0xF8L;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_91[i] = &g_54[5];
    for (p_49 = 2; (p_49 >= 0); p_49 -= 1)
    {
        unsigned short l_52 = 0x1676L;
        int *l_53 = &g_54[6];
        unsigned l_92[3];
        int i;
        for (i = 0; i < 3; i++)
            l_92[i] = 0x0B1DE00DL;
        (*l_53) = l_52;
        for (p_48 = 0; (p_48 <= 2); p_48 += 1)
        {
            short l_69 = 0xCEAAL;
            int l_87 = 0x925D9175L;
            int i, j;
            if (g_51[(p_49 + 1)][p_48])
                break;
            for (l_52 = 0; (l_52 <= 2); l_52 += 1)
            {
                unsigned char l_58[6] = {255UL, 1UL, 255UL, 1UL, 255UL, 1UL};
                int *l_67[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_67[i] = &l_57[7][1][5];
                for (g_55 = 0; g_55 < 4; g_55 += 1)
                {
                    for (g_56 = 0; g_56 < 3; g_56 += 1)
                    {
                        g_51[g_55][g_56] = 0xDBD8L;
                    }
                }
                for (g_56 = 0; (g_56 <= 2); g_56 += 1)
                {
                    int i, j;
                    (*l_53) = (g_51[(p_48 + 1)][l_52] && ((l_57[7][0][2] , (((((l_58[0] > (+(p_49 | g_12))) || (safe_sub_func_uint16_t_u_u(g_51[3][1], g_51[0][1]))) < (safe_rshift_func_int16_t_s_u(g_51[(p_49 + 1)][p_48], 8))) && (l_53 != &p_49)) ^ g_51[(p_48 + 1)][l_52])) , 0xA9L));
                    for (g_55 = 2; (g_55 >= 0); g_55 -= 1)
                    {
                        (*l_53) = (safe_rshift_func_uint8_t_u_u(p_48, (safe_add_func_int8_t_s_s(((&g_56 == (void*)0) , p_49), 0xFCL))));
                        (*l_53) = (*l_53);
                    }
                    g_68 = l_67[1];
                    g_68 = &p_49;
                }
                if (l_69)
                    break;
                l_87 = ((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(1UL, ((safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((~(safe_mul_func_uint16_t_u_u((g_51[(p_49 + 1)][p_48] >= p_48), (p_49 && (safe_add_func_int32_t_s_s((*g_68), l_57[9][0][0])))))) & (safe_lshift_func_uint8_t_u_u((p_48 ^ g_56), ((0x6B7CL || 0x9633L) , l_57[1][2][4])))), 0xCA98D253L)), g_51[0][0])), g_51[1][1])) > l_86))), l_57[7][0][2])) , l_57[2][0][0]);
            }
        }
        (*l_53) = (*g_68);
        if (((*l_53) && ((safe_lshift_func_int16_t_s_u((l_90 != l_53), 9)) == (l_91[6] != &g_55))))
        {
            int **l_103 = (void*)0;
            int **l_104 = (void*)0;
            int **l_105[9][5][5] = {{{&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}}, {{&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}}, {{&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}}, {{&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}}, {{&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}}, {{&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}}, {{&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}}, {{&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}}, {{&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}, {&l_90, &g_68, (void*)0, (void*)0, (void*)0}}};
            int i, j, k;
            if ((l_92[0] ^ (((safe_add_func_int32_t_s_s(p_48, 4294967295UL)) | ((*l_53) && (*l_53))) < (g_51[2][0] , 255UL))))
            {
                int l_95 = (-1L);
                if ((*g_68))
                    break;
                if ((*g_68))
                    continue;
                l_96 = ((l_95 == ((p_48 , &l_57[7][0][0]) != (void*)0)) , ((*g_68) , (!(*g_68))));
            }
            else
            {
                for (g_56 = 2; (g_56 >= 0); g_56 -= 1)
                {
                    int **l_97 = &l_91[2];
                    const int *l_100 = (void*)0;
                    const int **l_99 = &l_100;
                    const int ***l_98[10][8] = {{&l_99, &l_99, &l_99, (void*)0, &l_99, &l_99, &l_99, (void*)0}, {&l_99, &l_99, &l_99, (void*)0, &l_99, &l_99, &l_99, (void*)0}, {&l_99, &l_99, &l_99, (void*)0, &l_99, &l_99, &l_99, (void*)0}, {&l_99, &l_99, &l_99, (void*)0, &l_99, &l_99, &l_99, (void*)0}, {&l_99, &l_99, &l_99, (void*)0, &l_99, &l_99, &l_99, (void*)0}, {&l_99, &l_99, &l_99, (void*)0, &l_99, &l_99, &l_99, (void*)0}, {&l_99, &l_99, &l_99, (void*)0, &l_99, &l_99, &l_99, (void*)0}, {&l_99, &l_99, &l_99, (void*)0, &l_99, &l_99, &l_99, (void*)0}, {&l_99, &l_99, &l_99, (void*)0, &l_99, &l_99, &l_99, (void*)0}, {&l_99, &l_99, &l_99, (void*)0, &l_99, &l_99, &l_99, (void*)0}};
                    int i, j;
                    (*l_97) = &g_56;
                    g_101 = &p_50;
                }
                return g_102;
            }
            p_50 = &g_54[0];
            l_91[6] = &p_49;
            (*l_53) = ((safe_div_func_uint8_t_u_u(((g_56 , 0x06FEL) | ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(g_54[1], 4)), g_102)), p_49)) == ((g_114 != (((g_55 > ((safe_mod_func_uint32_t_u_u(g_12, 0x3B7A3E98L)) == (-1L))) >= (*l_53)) , &p_50)) , (-9L)))), (*l_53))) > 0xC3L);
        }
        else
        {
            int *l_120[2][7];
            int **l_121[9] = {&l_53, &l_120[1][0], &l_53, &l_120[1][0], &l_53, &l_120[1][0], &l_53, &l_120[1][0], &l_53};
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 7; j++)
                    l_120[i][j] = &l_57[7][0][2];
            }
            g_115 = l_120[0][4];
            for (l_96 = 2; (l_96 >= 0); l_96 -= 1)
            {
                unsigned short l_122 = 0x947FL;
                int l_130[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_130[i] = 0xF6FB7343L;
                g_115 = l_53;
                if (l_122)
                    break;
                for (l_86 = 0; (l_86 <= 2); l_86 += 1)
                {
                    return (*l_53);
                }
                for (l_122 = 0; (l_122 <= 2); l_122 += 1)
                {
                    const int **l_123 = &g_115;
                    int i;
                    (*l_123) = (*g_114);
                    l_130[5] = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_92[l_122], (((((safe_sub_func_int8_t_s_s((-1L), 0x10L)) && (*g_68)) < p_49) >= p_48) != 0x10B79F68L))), (g_51[2][0] | (&l_120[1][1] != (void*)0))));
                    for (p_48 = 2; (p_48 <= 8); p_48 += 1)
                    {
                        l_130[5] = ((&g_68 != (void*)0) || l_130[5]);
                        (*l_53) = p_49;
                    }
                }
            }
            p_50 = l_53;
            (*l_53) = (**g_114);
        }
        for (p_48 = 0; (p_48 <= 2); p_48 += 1)
        {
            int **l_131 = &g_68;
            (*l_131) = l_53;
            for (l_52 = 0; (l_52 <= 2); l_52 += 1)
            {
                return (**l_131);
            }
            (*l_53) = (*g_68);
            (*l_53) = (0x3CE2L <= g_102);
        }
    }
    g_68 = &l_57[7][0][2];
    l_91[6] = &l_57[6][1][0];
    (*g_68) = (*g_115);
    return g_56;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_51[i][j], "g_51[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_54[i], "g_54[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_766[i][j][k], "g_766[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_900, "g_900", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_926[i][j][k], "g_926[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1090, "g_1090", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
