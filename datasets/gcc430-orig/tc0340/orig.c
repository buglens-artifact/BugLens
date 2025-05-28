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



static unsigned char g_5 = 1UL;
static int g_67[7][8] = {{(-1L), 9L, 0x1F9F6D65L, 1L, 1L, 1L, 0x1F9F6D65L, 9L}, {(-1L), 9L, 0x1F9F6D65L, 1L, 1L, 1L, 0x1F9F6D65L, 9L}, {(-1L), 9L, 0x1F9F6D65L, 1L, 1L, 1L, 0x1F9F6D65L, 9L}, {(-1L), 9L, 0x1F9F6D65L, 1L, 1L, 1L, 0x1F9F6D65L, 9L}, {(-1L), 9L, 0x1F9F6D65L, 1L, 1L, 1L, 0x1F9F6D65L, 9L}, {(-1L), 9L, 0x1F9F6D65L, 1L, 1L, 1L, 0x1F9F6D65L, 9L}, {(-1L), 9L, 0x1F9F6D65L, 1L, 1L, 1L, 0x1F9F6D65L, 9L}};
static int *g_75 = &g_67[1][3];
static int * const *g_74 = &g_75;
static int g_76 = 0xFDB42E27L;
static int g_77 = (-5L);
static unsigned g_320[7] = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
static unsigned g_368 = 4294967295UL;
static const int *g_553 = (void*)0;
static int g_873 = 0x1AE486D1L;
static unsigned g_1122[3] = {0UL, 0UL, 0UL};



static unsigned char func_1(void);
static char func_6(short p_7, short p_8, int p_9);
static short func_14(int p_15, unsigned p_16, char p_17, char p_18, unsigned p_19);
static int func_22(unsigned p_23);
static unsigned func_24(int p_25, unsigned char p_26, unsigned p_27);
static unsigned short func_37(short p_38);
static unsigned char func_46(short p_47, unsigned p_48, unsigned short p_49);
static unsigned char func_54(char p_55);
static int * func_58(int p_59);
static const char func_64(unsigned p_65);
static unsigned char func_1(void)
{
    unsigned l_4 = 0x1FE77DD6L;
    unsigned l_36[10];
    unsigned l_45[7][3][6] = {{{3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}}, {{3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}}, {{3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}}, {{3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}}, {{3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}}, {{3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}}, {{3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}, {3UL, 4294967295UL, 0x83C17A3FL, 4294967294UL, 4294967295UL, 4294967290UL}}};
    const unsigned l_941[1][9] = {{4294967294UL, 4294967295UL, 4294967294UL, 4294967295UL, 4294967294UL, 4294967295UL, 4294967294UL, 4294967295UL, 4294967294UL}};
    unsigned short l_942 = 2UL;
    int * const l_1129[1][9][9] = {{{(void*)0, &g_77, &g_77, &g_76, &g_77, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, &g_77, &g_77, &g_76, &g_77, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, &g_77, &g_77, &g_76, &g_77, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, &g_77, &g_77, &g_76, &g_77, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, &g_77, &g_77, &g_76, &g_77, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, &g_77, &g_77, &g_76, &g_77, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, &g_77, &g_77, &g_76, &g_77, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, &g_77, &g_77, &g_76, &g_77, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, &g_77, &g_77, &g_76, &g_77, (void*)0, &g_77, &g_76, &g_77}}};
    int *l_1135 = &g_67[6][4];
    unsigned char l_1145 = 255UL;
    int **l_1192 = &g_75;
    int ***l_1191[9][5][2] = {{{&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}}, {{&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}}, {{&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}}, {{&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}}, {{&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}}, {{&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}}, {{&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}}, {{&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}}, {{&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}, {&l_1192, (void*)0}}};
    unsigned l_1218 = 0xF7BFEA41L;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_36[i] = 0xDFBC43CCL;
    if (((((safe_sub_func_uint16_t_u_u(l_4, 8UL)) ^ g_5) ^ func_6((safe_mod_func_int8_t_s_s(((safe_div_func_int8_t_s_s((func_14((((((safe_sub_func_int32_t_s_s(func_22(func_24((((!(safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_4, (+l_4))), (safe_sub_func_int32_t_s_s(1L, (+(((safe_mod_func_uint16_t_u_u((l_36[1] , func_37(((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((l_36[1] <= (0x4186E145L && 0x451DBA1DL)), l_45[4][2][1])) != 0x9CBDL), 6)) ^ l_36[7]), 0x7F5EL)) , g_5))), 0x5AA9L)) , g_5) , l_4))))))) != g_5) > l_36[1]), l_45[4][2][1], g_320[6])), (-5L))) , l_36[9]) & l_941[0][0]) >= g_5) , (-6L)), g_320[0], l_942, g_5, l_45[4][2][1]) > l_4), g_320[0])) || 0x65L), g_320[0])), g_320[0], g_320[0])) < l_941[0][0]))
    {
        int **l_1130 = &g_75;
        (*l_1130) = l_1129[0][7][6];

        ;
    }
    else
    {
        int *l_1140 = &g_67[1][3];
        int l_1144 = 0x3634079DL;
        const unsigned l_1149 = 0x145815F8L;
        int l_1195 = 0xC73B3761L;
        int ** const *l_1217 = &l_1192;
        int l_1224[2];
        char l_1250[5][7][7] = {{{0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}}, {{0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}}, {{0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}}, {{0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}}, {{0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}, {0x43L, 0x41L, 0x14L, 0x3BL, 0x57L, 0x30L, 0xEBL}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1224[i] = 0x79C823B0L;
        for (g_5 = 15; (g_5 <= 37); g_5 = safe_add_func_int32_t_s_s(g_5, 6))
        {
            char l_1141 = (-1L);
            short l_1165 = 1L;
            int *l_1167 = &g_77;
            int l_1186 = 0x2C3AB6E6L;
            short l_1205 = 0x6B9EL;
            for (l_4 = (-14); (l_4 != 23); ++l_4)
            {
                unsigned char l_1143 = 0x3CL;
                for (g_873 = 2; (g_873 >= 0); g_873 -= 1)
                {
                    int *l_1136 = &g_77;
                    l_1136 = l_1135;

                    ;
                }
                for (l_942 = 0; (l_942 <= 20); l_942++)
                {
                    int l_1142 = 0L;
                    short l_1166 = 0L;
                    const int *l_1194 = &g_67[5][5];
                    for (g_873 = 6; (g_873 >= 0); g_873 -= 1)
                    {
                        int **l_1139[3];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_1139[i] = &l_1135;
                        l_1140 = &g_67[g_873][(g_873 + 1)];
                        (*l_1135) = l_1141;
                    }
                    (*l_1135) = l_1141;
                    if ((((((*l_1140) | (func_22(l_1142) > l_1141)) ^ ((((+(((((!(0L && (func_22(((func_22(g_5) , g_320[1]) == (l_1143 >= (*l_1140)))) != 0xDFL))) > 0x80L) & g_1122[2]) , l_1144) <= g_67[1][3])) || l_1141) != (*l_1135)) , 0x8BL)) | l_1145) , l_1142))
                    {
                        unsigned l_1150 = 0x49445376L;
                        int **l_1168 = (void*)0;
                        int **l_1169[5] = {&g_75, &l_1167, &g_75, &l_1167, &g_75};
                        int i;
                        (*l_1135) = (*l_1140);
                        (*l_1140) = (safe_mod_func_uint8_t_u_u(g_77, ((g_368 && (0x6709L ^ (((safe_unary_minus_func_int32_t_s(l_1149)) == ((g_77 == 4294967294UL) == func_22(l_1150))) , ((safe_div_func_int16_t_s_s((((safe_add_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((-7L), g_76)) >= l_1165), l_1166)) != g_67[1][3]), l_1141)), 0x1B29L)), 0x9FL)) | l_1150), l_1143)) && g_5) == l_1165), g_368)) == l_1142)))) | (*l_1140))));
                        l_1167 = l_1167;
                        if (g_1122[1])
                            continue;
                    }
                    else
                    {
                        short l_1172 = 0xF3BCL;
                        g_75 = &g_67[5][3];

                        ;
                        (*g_75) = (safe_mod_func_int32_t_s_s(l_1172, 1UL));
                        (*g_75) = ((safe_mod_func_uint32_t_u_u((0xA6L ^ l_1172), (safe_add_func_int8_t_s_s(g_320[4], (((void*)0 == &g_74) , (((0xAB45L > ((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(0xEB43L, (((((void*)0 == &g_74) || g_5) | g_67[4][0]) >= (*g_75)))) >= (-3L)), 0x41L)), g_320[0])) >= l_1166)) | (*l_1140)) || g_67[0][6])))))) || (-10L));
                    }
                    for (l_1143 = (-22); (l_1143 != 4); ++l_1143)
                    {
                        unsigned l_1185 = 0x13132A18L;
                        int *l_1193 = &g_76;
                        (*l_1193) = ((l_1185 && l_1186) , (g_320[3] | (((safe_sub_func_uint8_t_u_u((((g_873 > ((safe_rshift_func_uint8_t_u_u((((void*)0 == l_1191[8][2][1]) && (&g_75 == &l_1167)), 0)) || g_1122[2])) , (*l_1167)) && l_1143), 0xECL)) , l_1193) == l_1194)));
                        if (l_1195)
                            continue;
                        (*l_1140) = (safe_lshift_func_int16_t_s_s((func_46((safe_unary_minus_func_uint8_t_u(g_77)), (*l_1193), g_5) | (((void*)0 == &l_1140) , 0L)), 12));
                    }
                }
                (*l_1192) = (void*)0;

                ;
            }


            l_1167 = &g_76;

            ;
            (*l_1140) = (func_46((((*l_1167) != func_14((((safe_lshift_func_int8_t_s_u(((void*)0 == &g_77), 3)) != (*l_1135)) == g_320[0]), g_76, ((((g_368 >= (*l_1140)) , ((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((((*l_1140) && 0x1FDFL) , 3UL), g_320[0])), (*l_1167))) , 0x327DL)) > g_67[1][3]) < (*l_1140)), g_873, (*l_1167))) < g_320[6]), (*l_1167), g_76) < g_1122[2]);


            if (l_1205)
                break;
        }
        (*l_1135) = (*l_1140);
        for (g_76 = 22; (g_76 >= 25); g_76 = safe_add_func_int32_t_s_s(g_76, 8))
        {
            unsigned char l_1208 = 0xE8L;
            if ((&g_75 != &g_553))
            {
                char l_1221 = 1L;
                int *l_1245 = &g_67[5][3];
                if (((l_1208 & (((((~(safe_add_func_uint16_t_u_u(((*l_1140) == g_76), (~(g_1122[0] && (g_320[0] , (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(func_22(g_67[1][5]), (safe_sub_func_uint32_t_u_u((((l_1208 , 65535UL) , (void*)0) == l_1217), g_368)))), 5)) | g_5) != 4UL))))))) != 0xAAL) & 0x9F31B412L) != g_1122[2]) , g_77)) , l_1218))
                {
                    unsigned l_1243 = 0xA3743F69L;
                    int **l_1244 = &l_1135;
                    (*l_1192) = &g_67[1][1];

                    ;
                    for (g_77 = 0; (g_77 == 26); g_77 = safe_add_func_int8_t_s_s(g_77, 8))
                    {
                        unsigned short l_1225 = 7UL;
                        if (l_1221)
                            break;
                        (***l_1217) = (0x4B56B87CL == (safe_sub_func_int8_t_s_s((g_873 <= g_76), (((0x6EL || (l_1224[0] == l_1225)) < ((safe_unary_minus_func_int32_t_s((**g_74))) , (l_1221 > (safe_add_func_uint32_t_u_u((((g_77 | g_67[1][3]) && g_76) , 0xF1B33E5BL), (**g_74)))))) & g_5))));
                        (**l_1192) = func_46((g_1122[0] & ((*g_74) == (l_1225 , (void*)0))), ((((*l_1135) >= (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((l_1208 < ((((safe_sub_func_uint16_t_u_u(l_1221, l_1225)) > (g_1122[1] , g_1122[0])) , &g_75) != (*l_1217))), g_368)) | 0x13C6L), g_320[0])), l_1243)), g_5)), l_1225))) , l_1225) & 0x7500L), l_1221);
                    }
                    (*l_1244) = (*g_74);
                }
                else
                {
                    (*l_1192) = (g_873 , l_1245);

                    ;
                    for (l_4 = 0; (l_4 < 53); l_4 = safe_add_func_uint16_t_u_u(l_4, 2))
                    {
                        (**l_1217) = (**l_1217);
                    }
                    for (l_1221 = 2; (l_1221 <= 6); l_1221 += 1)
                    {
                        int i;
                        (**g_74) = g_320[l_1221];
                        g_75 = (*g_74);
                    }
                    (**l_1217) = l_1245;
                }

                ;
            }
            else
            {
                (**l_1217) = &g_67[3][1];

                ;
            }

            ;
            if ((**g_74))
                break;
            for (l_942 = (-25); (l_942 >= 41); l_942++)
            {
                if (l_1250[1][4][6])
                    break;
            }
        }
    }



    return g_320[0];
}







static char func_6(short p_7, short p_8, int p_9)
{
    unsigned l_949 = 0xC4F2B053L;
    int *l_975[6] = {(void*)0, (void*)0, &g_67[3][7], (void*)0, (void*)0, &g_67[3][7]};
    const int **l_992 = &g_553;
    const int ***l_991 = &l_992;
    int *l_1044[3][8] = {{&g_67[2][7], &g_67[2][7], &g_77, &g_67[2][7], &g_67[2][7], &g_77, &g_67[2][7], &g_67[2][7]}, {&g_67[2][7], &g_67[2][7], &g_77, &g_67[2][7], &g_67[2][7], &g_77, &g_67[2][7], &g_67[2][7]}, {&g_67[2][7], &g_67[2][7], &g_77, &g_67[2][7], &g_67[2][7], &g_77, &g_67[2][7], &g_67[2][7]}};
    int l_1074 = 0x057763E8L;
    unsigned l_1123 = 0UL;
    char l_1128 = 0x00L;
    int i, j;
    if (((safe_rshift_func_int8_t_s_u((func_14(p_8, ((((g_873 || func_22((safe_sub_func_int8_t_s_s(l_949, 0x26L)))) < g_77) , (safe_div_func_int8_t_s_s(0xDBL, (safe_add_func_uint16_t_u_u((p_9 , (safe_lshift_func_int8_t_s_s((p_7 >= g_5), 7))), l_949))))) , l_949), p_9, p_7, l_949) <= g_67[1][3]), g_67[1][3])) , l_949))
    {
        int *l_956 = &g_76;
        int **l_957 = (void*)0;
        int **l_958 = (void*)0;
        int **l_959 = &l_956;
        int **l_960 = &g_75;
        int ***l_961 = &l_960;
        (*l_959) = l_956;
        (*l_961) = l_960;
    }
    else
    {
        char l_973 = 0L;
        int *l_993 = &g_67[1][3];
        char l_1076 = 0x31L;
        int l_1111 = 7L;
        p_9 = l_949;
        for (p_8 = 0; (p_8 == 29); ++p_8)
        {
            int *l_964 = &g_67[1][3];
            const int * const *l_1021 = &g_553;
            const int * const **l_1020 = &l_1021;
            unsigned short l_1075 = 0x6D09L;
            for (p_7 = 0; (p_7 <= 6); p_7 += 1)
            {
                int ***l_990 = (void*)0;
                char l_1007 = 0x35L;
                unsigned l_1008 = 0xBCE5CA87L;
                int i;
                l_964 = (g_320[p_7] , &p_9);

                ;
                if ((((((((safe_sub_func_int8_t_s_s(g_320[p_7], p_7)) >= g_5) && (((safe_sub_func_int32_t_s_s(((p_9 ^ 4294967293UL) != (((p_7 <= p_8) , 0L) < p_9)), l_973)) != 0UL) < l_973)) != p_9) >= 1UL) , 0UL) && (*l_964)))
                {
                    int **l_974[6][5][7] = {{{&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}}, {{&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}}, {{&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}}, {{&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}}, {{&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}}, {{&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}, {&l_964, (void*)0, (void*)0, (void*)0, &g_75, &g_75, &l_964}}};
                    int i, j, k;
                    l_964 = &p_9;
                    l_975[1] = &p_9;
                    for (g_368 = (-5); (g_368 != 16); g_368 = safe_add_func_uint8_t_u_u(g_368, 5))
                    {
                        (*l_964) = ((safe_rshift_func_uint8_t_u_s(((((safe_sub_func_int16_t_s_s(0x6391L, ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(g_5, (safe_lshift_func_uint16_t_u_u(p_8, 8)))), p_9)), (l_990 != (void*)0))) , 1UL))) & (l_991 != (void*)0)) && 0UL) || 0x892F1040L), p_8)) , 0L);
                    }
                    l_993 = l_964;

                    ;
                }
                else
                {
                    unsigned char l_1000 = 255UL;
                    (*l_964) = ((safe_mod_func_uint32_t_u_u(g_67[6][4], (safe_rshift_func_uint16_t_u_s((p_7 || (safe_sub_func_uint32_t_u_u(l_1000, (safe_div_func_int32_t_s_s((-5L), 0x4E1D89CCL))))), (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(l_1007, g_67[1][3])) >= (g_76 & g_320[1])), 4)))))) >= (*l_964));
                    (*l_993) = 0L;
                    if ((*l_964))
                        continue;
                }
                if ((*l_993))
                    continue;
                return l_1008;


            }

            ;
            if ((((void*)0 == &p_9) , p_8))
            {
                char l_1009[6][2][2] = {{{(-10L), 0xD9L}, {(-10L), 0xD9L}}, {{(-10L), 0xD9L}, {(-10L), 0xD9L}}, {{(-10L), 0xD9L}, {(-10L), 0xD9L}}, {{(-10L), 0xD9L}, {(-10L), 0xD9L}}, {{(-10L), 0xD9L}, {(-10L), 0xD9L}}, {{(-10L), 0xD9L}, {(-10L), 0xD9L}}};
                int l_1026 = 5L;
                int i, j, k;
                (*l_993) = ((l_1009[2][0][0] | (g_873 != (g_320[0] , (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u((((((((((safe_lshift_func_int16_t_s_s((+0x434DL), 5)) , p_8) > ((((((func_14(p_7, ((g_368 > ((safe_sub_func_uint16_t_u_u(((((p_7 == g_320[2]) , (void*)0) != &l_992) ^ p_7), p_7)) == g_320[4])) < (-1L)), (*l_993), l_1009[5][1][1], p_8) & g_76) , g_77) , p_7) > g_67[5][6]) != 0x2511L) | g_320[4])) ^ p_7) , 65533UL) > (*l_964)) , &l_992) != l_1020) <= g_77), p_7)) | 0UL), g_5))))) | (-1L));
                for (g_77 = 0; (g_77 != (-15)); g_77 = safe_sub_func_uint16_t_u_u(g_77, 5))
                {
                    unsigned l_1031 = 4294967295UL;
                    for (p_9 = 26; (p_9 >= (-18)); --p_9)
                    {
                        l_1026 = p_9;
                        (*l_992) = l_993;

                        ;
                        if (p_8)
                            break;
                        if ((*l_993))
                            continue;
                    }
                    p_9 = (safe_sub_func_uint16_t_u_u((func_14(((safe_add_func_int8_t_s_s(l_1009[2][0][0], l_1031)) , l_1009[5][1][0]), p_9, ((p_7 >= (4294967295UL != ((((!((g_320[0] , (safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((*l_993) | (0x2EL | p_7)), 4294967295UL)), 6))) && p_7)) ^ 65530UL) <= g_67[1][3]) < 5L))) , g_368), g_368, g_76) > p_8), g_368));
                    for (g_873 = (-19); (g_873 > 29); g_873 = safe_add_func_uint16_t_u_u(g_873, 2))
                    {
                        return p_7;


                    }
                    (*l_992) = ((65530UL < 0L) , &p_9);

                    ;
                }
                if (p_8)
                    continue;
                l_993 = l_1044[2][5];

                ;
            }
            else
            {
                short l_1051[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_1051[i] = 0x4BAFL;
                (*l_993) = func_46(((0x7EL & (safe_lshift_func_int8_t_s_u(p_9, 2))) || g_320[0]), (g_76 & 1UL), p_8);
                for (l_973 = (-28); (l_973 > (-29)); --l_973)
                {
                    for (l_949 = 2; (l_949 <= 6); l_949 += 1)
                    {
                        int i, j;
                        (**l_991) = &p_9;

                        ;
                        (**l_991) = &p_9;
                        (*l_993) = l_1051[2];
                        if ((*g_553))
                            break;
                    }
                    (*l_993) = p_9;
                }
                (*l_964) = (((*l_1020) != (*l_991)) | ((safe_add_func_uint32_t_u_u((*l_993), 0x922617D9L)) & 248UL));
            }
            for (g_77 = 2; (g_77 >= 0); g_77 -= 1)
            {
                return g_873;


            }
            (**l_991) = &p_9;

            ;
        }



        ;
        for (p_9 = 0; (p_9 == (-28)); p_9 = safe_sub_func_uint32_t_u_u(p_9, 3))
        {
            unsigned char l_1092 = 0x3CL;
            for (l_1076 = 0; (l_1076 != 24); l_1076 = safe_add_func_int16_t_s_s(l_1076, 2))
            {
                int l_1085 = (-1L);
                int l_1095 = 8L;
                g_67[1][3] = p_9;
                l_1095 = ((safe_lshift_func_int8_t_s_s((((void*)0 != &p_9) == ((safe_lshift_func_uint16_t_u_s(p_7, l_1085)) , (safe_div_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s(l_1092, p_7)), p_8)) < (safe_mod_func_uint32_t_u_u((((func_22(g_67[4][2]) , p_8) <= 0xFC08L) , l_1092), p_8))), g_320[0])))), g_67[4][3])) <= p_8);
            }
            g_553 = &g_67[2][0];

            ;
            (*l_992) = &p_9;

            ;
        }
        if ((safe_mod_func_uint8_t_u_u(g_368, g_67[5][4])))
        {
            int **l_1105 = &g_75;
            int ***l_1104 = &l_1105;
            for (g_368 = 0; (g_368 >= 57); ++g_368)
            {
                (*l_993) = g_67[4][6];
            }
            if ((p_8 && (safe_sub_func_int32_t_s_s((g_5 , p_9), g_76))))
            {
                p_9 = (((safe_mod_func_int32_t_s_s((g_76 < func_22((p_7 < (p_7 >= (l_1104 == (void*)0))))), p_8)) , (func_22(g_320[0]) > 0x4BCA0B18L)) & g_67[1][3]);
                (*l_1105) = &g_76;

                ;
                for (l_1076 = 5; (l_1076 >= 0); l_1076 -= 1)
                {
                    int i;
                    for (p_9 = 5; (p_9 >= 0); p_9 -= 1)
                    {
                        int i;
                        l_975[l_1076] = func_58((safe_rshift_func_int16_t_s_s((-3L), 0)));
                    }
                    if ((&l_975[l_1076] != (void*)0))
                    {
                        short l_1108 = 4L;
                        int i;
                        if (l_1108)
                            break;
                        (**l_1105) = (0L <= (safe_sub_func_int8_t_s_s(p_8, p_7)));
                        l_975[l_1076] = func_58(p_7);
                        (**l_991) = &p_9;

                        ;
                    }
                    else
                    {
                        (*l_1105) = l_993;

                        ;
                        (*l_992) = func_58(l_1111);

                        ;
                        return g_320[1];


                    }

                    ;
                    if ((*l_993))
                        break;
                }
            }
            else
            {
                int ***l_1121[4][2];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1121[i][j] = &l_1105;
                }
                (*l_993) = (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((&l_1111 == ((safe_sub_func_uint8_t_u_u(g_368, (0UL < (safe_unary_minus_func_uint8_t_u(((((((safe_lshift_func_int16_t_s_s(p_9, (((+g_5) > (((&g_74 == l_1121[1][0]) ^ p_7) , p_8)) , g_1122[2]))) , p_9) < 3UL) >= g_320[2]) | (*l_993)) , 247UL)))))) , &l_1111)), (*l_993))), g_1122[2]));
                (**l_991) = &p_9;

                ;
            }


            (*l_992) = &p_9;

            ;
            (*l_992) = &l_1111;

            ;
        }
        else
        {
            (*l_993) = 1L;
            (*l_992) = &p_9;

            ;
        }


        ;
    }




    (**l_991) = &g_77;

    ;
    p_9 = ((**l_992) == (**l_992));
    (*l_992) = &g_67[6][6];

    ;
    return (**l_992);
}







static short func_14(int p_15, unsigned p_16, char p_17, char p_18, unsigned p_19)
{
    int **l_943 = &g_75;
    char l_944 = 0L;
    (*l_943) = &p_15;

    ;
    return l_944;


}







static int func_22(unsigned p_23)
{
    return p_23;
}







static unsigned func_24(int p_25, unsigned char p_26, unsigned p_27)
{
    char l_647[4];
    int **l_658 = &g_75;
    int ***l_657 = &l_658;
    unsigned l_737 = 4294967293UL;
    int l_782 = 0x24BF1EA1L;
    const unsigned l_844 = 0x1ADFE008L;
    int l_874 = 0L;
    char l_899 = 4L;
    int i;
    for (i = 0; i < 4; i++)
        l_647[i] = 0x24L;
    if ((g_5 != (9UL <= (((safe_rshift_func_uint8_t_u_u(0xEAL, p_27)) | l_647[0]) , (((((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((p_26 != p_25), (l_647[0] , p_26))), p_27)), l_647[0])) ^ 0x9E38L) || 0xADA88EB3L) || 0x04L) || l_647[0])))))
    {
        int **l_654 = &g_75;
        (*l_654) = (*g_74);
        for (g_76 = (-25); (g_76 != (-7)); g_76++)
        {
            unsigned l_659[7] = {0x27715C49L, 0x5A2DA3ACL, 0x27715C49L, 0x5A2DA3ACL, 0x27715C49L, 0x5A2DA3ACL, 0x27715C49L};
            int *l_685 = &g_67[4][0];
            int i;
            p_25 = (((void*)0 != l_657) , (0xB8L < 0xF3L));
            for (p_27 = 1; (p_27 <= 6); p_27 += 1)
            {
                int l_667 = (-5L);
                int ** const *l_686[4][5] = {{&l_658, &l_658, (void*)0, (void*)0, &l_658}, {&l_658, &l_658, (void*)0, (void*)0, &l_658}, {&l_658, &l_658, (void*)0, (void*)0, &l_658}, {&l_658, &l_658, (void*)0, (void*)0, &l_658}};
                int i, j;
                if (l_659[5])
                {
                    return g_76;
                }
                else
                {
                    unsigned l_666 = 0x5A7F01DBL;
                    int ***l_687 = &l_658;
                    for (p_25 = 0; (p_25 <= 6); p_25 += 1)
                    {
                        int i, j;
                        g_67[p_25][p_25] = (safe_div_func_uint32_t_u_u(g_5, (g_5 , ((safe_add_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_u(1UL, l_659[5])) , (!0L)) == ((((g_5 , ((func_46((0xD5L & p_27), g_77, l_666) ^ 0x73L) || l_667)) >= g_368) || g_67[1][3]) >= l_659[5])) | p_27), 0xE6L)) , 0x36B7A7DDL))));
                    }
                    (*l_685) = ((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_320[0], g_5)), 2)) , (~((safe_mod_func_int32_t_s_s(p_26, 1L)) , (safe_mod_func_uint16_t_u_u(((((p_26 >= (1UL != (safe_rshift_func_int8_t_s_u(((func_46((((((((safe_sub_func_uint16_t_u_u(g_76, (safe_unary_minus_func_uint8_t_u((((func_46((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(((*g_74) == l_685), g_5)), g_320[1])), p_25, p_25) > p_27) , (void*)0) == l_686[2][3]))))) , 0xA33AL) , l_666) < 1L) == p_27) && g_320[0]) != g_76), p_27, g_76) , l_687) != l_687), p_27)))) , 246UL) && p_27) , 0x1C87L), 6UL)))));
                }
                (*l_685) = g_320[3];
                for (p_25 = 0; (p_25 < (-21)); --p_25)
                {
                    const int **l_692 = &g_553;
                    int l_699 = 0x5C722666L;
                    int **l_705 = &l_685;
                    (*l_658) = (void*)0;

                    ;
                    (*l_658) = l_685;

                    ;
                }
                for (g_77 = 0; (g_77 <= (-11)); --g_77)
                {
                    if (p_27)
                        break;
                }
            }
        }
        for (g_368 = 0; (g_368 == 56); g_368 = safe_add_func_int8_t_s_s(g_368, 6))
        {
            (*l_658) = &p_25;

            ;
        }

        ;
        g_75 = (*g_74);
    }
    else
    {
        unsigned short l_719[3];
        int *l_730 = &g_76;
        int **l_751 = &l_730;
        int i;
        for (i = 0; i < 3; i++)
            l_719[i] = 0UL;
        for (g_77 = 0; (g_77 <= 25); g_77 = safe_add_func_uint32_t_u_u(g_77, 8))
        {
            int l_714 = 0xAE015F75L;
            (**l_657) = &p_25;

            ;
        }

        ;
        if ((((((((safe_add_func_int8_t_s_s(p_27, (safe_sub_func_int8_t_s_s(l_719[2], ((((safe_mod_func_int32_t_s_s(l_719[2], ((safe_mod_func_uint8_t_u_u(((0xF7L <= ((safe_sub_func_uint16_t_u_u(((((g_320[2] , (((g_77 && ((g_368 <= p_25) <= 1L)) || p_27) , g_76)) > 2L) || l_719[2]) , g_368), l_719[1])) <= 255UL)) == 0xE0L), g_320[2])) ^ p_25))) > 0x43E425D3L) , p_27) <= 0xD6L))))) && p_26) & p_26) != g_76) <= g_320[0]) == l_719[2]) , (-9L)))
        {
            unsigned l_745 = 0x029400A8L;
            for (g_77 = 0; g_77 < 4; g_77 += 1)
            {
                l_647[g_77] = 0x60L;
            }
            (*l_658) = ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(p_25, 0)), (+p_26))) , (l_719[0] , l_730));

            ;
            (*l_658) = func_58((*l_730));
            if (((safe_div_func_int32_t_s_s((((((g_77 , (**l_658)) == g_67[1][3]) , (safe_sub_func_int32_t_s_s((*g_75), (safe_div_func_uint8_t_u_u(func_46(g_320[6], g_67[1][3], p_26), p_27))))) , g_320[0]) , 0L), 0xC1A53482L)) , 9L))
            {
                return l_737;
            }
            else
            {
                int l_744 = 9L;
                (**g_74) = (g_67[4][3] <= (((((safe_lshift_func_uint8_t_u_s((p_27 == ((safe_lshift_func_uint8_t_u_u((g_320[0] , (((((((safe_lshift_func_int16_t_s_u(l_744, 10)) , (*l_730)) ^ p_27) != func_46(((p_26 < (((*l_730) && (1L < p_26)) ^ 0x9288L)) , g_76), p_25, g_5)) , 0xD1L) <= (**l_658)) > g_67[3][3])), 6)) , g_76)), 1)) <= p_25) > 0x1AL) & 0L) ^ l_745));
                for (l_745 = 0; (l_745 >= 6); l_745++)
                {
                    (*l_730) = p_27;
                }
            }
        }
        else
        {
            int **l_750 = &g_75;
            (*l_750) = (*g_74);
        }
        (*l_657) = (*l_657);
        (*l_751) = (*g_74);

        ;
    }

    ;
    if ((~p_25))
    {
        unsigned short l_760 = 65534UL;
        int l_769 = 0x8FB8B84DL;
        unsigned l_778 = 0xEF5A100EL;
        int ***l_792 = (void*)0;
        int * const l_800 = &l_782;
        unsigned l_804 = 4294967295UL;
        int l_807 = 0L;
        const short l_847 = 0x0B3EL;
        g_77 = (safe_sub_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(p_26, l_760)) != g_67[1][3]), l_760));
        p_25 = (((safe_rshift_func_uint8_t_u_s(p_26, 5)) <= (p_25 & p_25)) < (-1L));
        for (l_737 = 0; (l_737 >= 38); ++l_737)
        {
            p_25 = (safe_rshift_func_uint8_t_u_s(g_320[6], 0));
            return g_320[2];


        }
        if (l_778)
        {
            for (l_778 = 29; (l_778 >= 40); l_778 = safe_add_func_uint8_t_u_u(l_778, 7))
            {
                int *l_781[1][7];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_781[i][j] = &g_67[3][4];
                }
                l_782 = p_27;
                for (l_760 = 0; (l_760 <= 6); l_760 += 1)
                {
                    int ***l_791 = &l_658;
                    int l_793 = 0xB8DCCF8AL;
                    int i;
                    p_25 = 3L;
                    if ((+(g_320[l_760] >= (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_26, func_46((p_26 & (p_25 <= g_5)), p_27, (safe_add_func_uint32_t_u_u(g_67[1][3], p_27))))), g_320[4])))))
                    {
                        l_793 = (l_791 == l_792);
                        (**l_657) = &p_25;

                        ;
                    }
                    else
                    {
                        p_25 = ((g_5 < (((g_320[1] , p_27) || (safe_unary_minus_func_int8_t_s(g_76))) , g_5)) < ((void*)0 == &p_25));
                        g_76 = 0xE2FD3C01L;
                    }
                }
                for (l_782 = 14; (l_782 > (-28)); l_782--)
                {
                    for (l_769 = 0; (l_769 > (-19)); --l_769)
                    {
                        int **l_799 = &g_75;
                        (*l_799) = (*g_74);
                    }
                }
            }
        }
        else
        {
            int l_803 = 1L;
            unsigned l_871 = 0x24F27090L;
            int *l_878[5] = {&g_76, (void*)0, &g_76, (void*)0, &g_76};
            const int l_881[4] = {0x5B89C6B3L, 0x5B89C6B3L, 0x5B89C6B3L, 0x5B89C6B3L};
            unsigned l_901 = 4294967287UL;
            int ***l_902 = &l_658;
            int i;
            g_75 = (*g_74);
            if (((((**l_657) == l_800) & ((safe_div_func_uint32_t_u_u(func_46(l_803, g_5, (((7L <= (!(((l_804 ^ (((void*)0 == &p_25) , p_26)) > l_803) || g_368))) ^ l_803) , 0x3231L)), g_76)) && 0x3EL)) < (*l_800)))
            {
                unsigned short l_814[6][9][4] = {{{65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}}, {{65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}}, {{65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}}, {{65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}}, {{65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}}, {{65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}, {65531UL, 65527UL, 0UL, 6UL}}};
                int **l_843[10] = {&g_75, &g_75, (void*)0, &g_75, &g_75, (void*)0, &g_75, &g_75, (void*)0, &g_75};
                unsigned short l_864 = 0x17F7L;
                unsigned char l_875 = 1UL;
                unsigned short l_880 = 65533UL;
                int i, j, k;
                (*l_658) = &p_25;

                ;
                if ((func_37((0xCCECEF77L > ((safe_div_func_int16_t_s_s((((**l_657) != ((0x4329L | 0x4950L) , (*g_74))) <= (l_807 , l_803)), func_64(g_67[1][3]))) , g_320[0]))) || (-1L)))
                {
                    unsigned char l_822 = 0xF4L;
                    int * const *l_830 = &g_75;
                    short l_831[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_831[i] = 0x26B5L;
                    if ((safe_add_func_int8_t_s_s(g_5, (0x3C4C621EL >= (g_67[1][3] <= ((safe_mod_func_int16_t_s_s(g_67[0][3], (p_26 | 0x85C6730DL))) > (safe_rshift_func_uint8_t_u_u((&p_25 != &p_25), g_67[1][3]))))))))
                    {
                        return g_368;



                    }
                    else
                    {
                        int l_819 = 0x9F3BAE18L;
                        (*l_800) = (l_814[4][3][0] | g_77);
                        (*l_800) = (safe_unary_minus_func_int32_t_s((*l_800)));
                        (*l_800) = ((~0x8DL) , (l_803 && (g_368 > g_67[1][3])));
                    }
                    (*l_658) = &p_25;

                    ;
                    for (l_760 = 6; (l_760 == 40); l_760 = safe_add_func_int8_t_s_s(l_760, 1))
                    {
                        if ((*g_75))
                            break;
                        (*g_75) = (safe_sub_func_uint32_t_u_u((p_26 ^ (g_320[0] | (-1L))), g_5));
                    }
                    (*l_800) = (p_25 >= g_67[1][3]);
                }
                else
                {
                    int *l_838 = &g_67[1][3];
                    (*l_800) = l_814[4][3][0];
                    g_553 = (void*)0;

                    ;
                    p_25 = (l_838 == (*l_658));
                }

                ;

                for (l_807 = 0; (l_807 <= 6); l_807 += 1)
                {
                    const int **l_854 = &g_553;
                    const int ***l_853 = &l_854;
                    short l_861 = (-1L);
                    char l_872 = 7L;
                    if (p_26)
                    {
                        int **l_848 = &g_75;
                        (*l_800) = (0xC4BEL || (safe_rshift_func_int16_t_s_s((((p_25 <= g_320[0]) , &g_75) != ((((safe_lshift_func_int8_t_s_s((((((void*)0 == l_843[2]) != l_844) , (safe_div_func_int8_t_s_s(g_368, g_67[2][6]))) , l_847), 0)) , 255UL) >= p_27) , l_848)), 5)));
                    }
                    else
                    {
                        const short l_879 = 0xBC4BL;
                        p_25 = ((safe_div_func_int16_t_s_s(((g_77 & p_25) , ((safe_add_func_uint16_t_u_u((l_853 == &g_74), ((safe_sub_func_int16_t_s_s(p_27, (g_320[0] < l_861))) && 0L))) , 0xA6FCL)), p_27)) < 0x8AL);
                        (*l_800) = ((safe_div_func_uint8_t_u_u(l_864, (-5L))) && (safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((((!g_67[6][2]) ^ (safe_lshift_func_int8_t_s_s(0x92L, ((g_77 ^ (l_871 && ((func_46((0x9BL ^ p_25), l_872, g_873) | l_874) >= p_25))) != p_27)))) <= 9UL), g_5)) , l_875), 4UL)));
                        (*l_800) = ((safe_sub_func_uint8_t_u_u(((l_878[3] != (*g_74)) < l_879), (-1L))) == (func_46(l_879, l_880, g_67[1][3]) | l_881[2]));
                        p_25 = (-1L);
                    }
                    for (l_782 = 3; (l_782 >= 0); l_782 -= 1)
                    {
                        int **l_900 = &l_878[2];
                        int i, j;
                        g_67[(l_782 + 3)][l_807] = ((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_647[l_782], (safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s(g_67[(l_782 + 3)][l_782], p_25)), (safe_unary_minus_func_int32_t_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(func_46((g_320[0] , (func_46(g_368, (((l_899 < (g_77 || ((+(p_25 && p_26)) & p_25))) , g_873) , 4294967294UL), g_67[4][5]) ^ 0L)), g_67[3][2], p_27), (*l_800))), p_26)), 5)), p_25)))))))), 0xA4D5815FL)) , g_67[(l_782 + 3)][l_782]);
                        (*l_900) = (*g_74);
                        if (p_25)
                            break;
                        if (p_27)
                            break;
                    }
                }


                (*l_800) = (((-7L) == ((l_901 , l_902) == l_902)) || 0UL);
            }
            else
            {
                const unsigned l_903 = 0xD4BBC950L;
                unsigned l_904 = 0xCF1712F8L;
                (*l_800) = 8L;
                (*l_658) = &p_25;

                ;
                (***l_902) = (l_904 , (-2L));
                (**l_657) = func_58(g_873);

                ;
            }

            ;


        }


    }
    else
    {
        int **l_926 = &g_75;
        int l_929 = (-1L);
        unsigned char l_939 = 7UL;
        int *l_940[6];
        int i;
        for (i = 0; i < 6; i++)
            l_940[i] = &g_67[1][3];
        for (p_27 = 0; (p_27 <= 6); p_27 += 1)
        {
            unsigned char l_927 = 255UL;
            int l_932 = (-4L);
            if (p_25)
            {
                unsigned short l_909 = 1UL;
                int *l_928 = &g_76;
                (*l_928) = ((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u(l_909, (safe_rshift_func_int8_t_s_s(((g_368 || l_909) , (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(65528UL, p_25)) || ((((0x98B8CD3AL >= l_909) , g_77) ^ g_320[0]) , g_368)), 6)), p_25)), 2)) > 0UL) || l_909), l_927)), l_909))), l_927)))) >= g_320[6]), g_67[4][1])) , 0L);
                for (g_368 = 0; g_368 < 7; g_368 += 1)
                {
                    for (g_873 = 0; g_873 < 8; g_873 += 1)
                    {
                        g_67[g_368][g_873] = 0x7995D5E2L;
                    }
                }
                (*l_928) = 0xCB444F98L;
                l_929 = (*l_928);
            }
            else
            {
                l_932 = ((0x4BL <= p_26) & (((p_27 , (*g_74)) == (**l_657)) != (func_46((((((g_873 == (&g_553 == (void*)0)) & (g_5 >= g_67[1][3])) >= (-1L)) , 4UL) != 0L), l_927, g_320[2]) && p_27)));
            }
            if (l_932)
                break;
            for (g_368 = 2; (g_368 <= 6); g_368 += 1)
            {
                int i, j;
                return g_67[p_27][(p_27 + 1)];


            }
        }
        g_76 = (((safe_rshift_func_int8_t_s_s(0x6EL, (((((safe_add_func_uint32_t_u_u(0xF4AF9932L, ((p_25 , (p_27 , (*g_74))) != (func_46((safe_add_func_int8_t_s_s(p_26, (0x6945L > p_27))), g_320[0], p_27) , (*g_74))))) <= l_899) | 8UL) , 9L) & 4294967295UL))) > g_76) , l_939);
        return g_67[2][3];


    }


    return g_67[4][3];



}







static unsigned short func_37(short p_38)
{
    char l_448[5][5][9] = {{{0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}}, {{0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}}, {{0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}}, {{0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}}, {{0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}, {0L, 3L, 0L, (-1L), 0L, 0xAAL, 0xCAL, 0xA2L, 0xF2L}}};
    int *l_455 = &g_67[0][7];
    unsigned l_548 = 4294967287UL;
    int **l_573 = &g_75;
    int i, j, k;
    (*l_455) = ((func_46(g_5, (((safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((func_54(p_38) ^ g_320[0]), l_448[0][2][2])), ((p_38 < l_448[4][1][0]) || (safe_sub_func_uint8_t_u_u(l_448[2][0][8], ((safe_sub_func_int8_t_s_s((g_5 , 0L), g_320[3])) >= 4294967295UL)))))) >= (-7L)) , g_77), g_320[0]) >= g_5) <= g_5);


    if (p_38)
    {
        const int l_456[10] = {(-1L), 4L, (-1L), 4L, (-1L), 4L, (-1L), 4L, (-1L), 4L};
        int l_471 = 0xE49D123BL;
        int *l_484 = &g_76;
        int l_547[9];
        char l_619 = (-7L);
        unsigned short l_630 = 65535UL;
        int i;
        for (i = 0; i < 9; i++)
            l_547[i] = 0x6687D776L;
        if ((l_456[9] != (0x5AL ^ (((((safe_add_func_int16_t_s_s(((g_5 , func_58(((*l_455) == 0UL))) != &l_456[9]), l_456[1])) & (-1L)) | g_5) , (*g_74)) != l_455))))
        {
            int **l_469 = (void*)0;
            int *l_470[4] = {&g_67[1][3], &g_67[5][6], &g_67[1][3], &g_67[5][6]};
            int i;
            (**g_74) = 0xBBFA6254L;
            l_470[1] = func_58((*l_455));


            l_471 = (*g_75);
        }
        else
        {
            short l_480 = 8L;
            int *l_483 = &g_77;
            int ** const l_532 = &l_483;
            int ** const *l_531 = &l_532;
            const int **l_599 = &g_553;
            if ((safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(((*l_455) < ((safe_sub_func_int8_t_s_s(0L, (func_46(l_480, (safe_mod_func_uint16_t_u_u(((l_483 != l_484) >= (-9L)), ((safe_mod_func_int32_t_s_s((g_67[3][5] | (safe_div_func_uint32_t_u_u(0xEEC1C3FDL, (((*l_484) ^ 0xB220L) & 1L)))), g_76)) && g_67[4][2]))), p_38) != p_38))) > 0x11L)), g_77)), 4)))
            {
                unsigned char l_515 = 0xD9L;
                const unsigned l_516[9] = {0x5AB77296L, 0xF1AD99F7L, 0x5AB77296L, 0xF1AD99F7L, 0x5AB77296L, 0xF1AD99F7L, 0x5AB77296L, 0xF1AD99F7L, 0x5AB77296L};
                int ** const l_572 = (void*)0;
                int i;
                (*l_484) = (+(safe_mod_func_uint8_t_u_u(p_38, 0xDDL)));
                if ((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(0xE6DEL, (((*l_484) || (safe_lshift_func_uint8_t_u_s(g_67[2][2], g_368))) , g_368))), g_5)))
                {
                    return p_38;
                }
                else
                {
                    int l_533 = (-1L);
                    int *l_535[4][10][6] = {{{(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}}, {{(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}}, {{(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}}, {{(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}, {(void*)0, (void*)0, (void*)0, &g_77, &g_76, &g_77}}};
                    int **l_565[4];
                    int ***l_564 = &l_565[0];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_565[i] = (void*)0;
                    if ((*l_483))
                    {
                        int **l_534 = &l_483;
                        (*g_75) = (((*l_455) , ((g_67[3][3] , ((void*)0 != l_531)) , &g_74)) != (l_533 , &g_74));
                        (*l_534) = (*g_74);


                    }
                    else
                    {
                        g_75 = (void*)0;

                        ;
                        l_535[2][2][2] = (void*)0;
                    }



                    if (((l_515 | l_515) == 0xBFL))
                    {
                        int **l_542 = &l_455;
                        (*l_542) = (*g_74);


                    }
                    else
                    {
                        const int *l_552 = (void*)0;
                        const int **l_551[9][3][3] = {{{&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}}, {{&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}}, {{&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}}, {{&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}}, {{&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}}, {{&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}}, {{&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}}, {{&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}}, {{&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}, {&l_552, (void*)0, &l_552}}};
                        int **l_555 = &l_455;
                        int ***l_554 = &l_555;
                        int **l_556[9][4] = {{&l_483, (void*)0, &l_484, &l_535[3][1][5]}, {&l_483, (void*)0, &l_484, &l_535[3][1][5]}, {&l_483, (void*)0, &l_484, &l_535[3][1][5]}, {&l_483, (void*)0, &l_484, &l_535[3][1][5]}, {&l_483, (void*)0, &l_484, &l_535[3][1][5]}, {&l_483, (void*)0, &l_484, &l_535[3][1][5]}, {&l_483, (void*)0, &l_484, &l_535[3][1][5]}, {&l_483, (void*)0, &l_484, &l_535[3][1][5]}, {&l_483, (void*)0, &l_484, &l_535[3][1][5]}};
                        int **l_557 = &g_75;
                        int i, j, k;
                        g_553 = &l_456[6];

                        ;
                        (*l_554) = (*l_531);

                        ;
                        (*l_557) = (*g_74);
                    }



                    (***l_531) = ((-4L) || ((((*l_531) == ((safe_add_func_uint32_t_u_u((((((safe_sub_func_int8_t_s_s((0x95L ^ l_515), 0x62L)) , (((((safe_lshift_func_int16_t_s_s((p_38 <= ((g_67[1][3] < ((l_564 == (void*)0) ^ l_516[3])) & g_5)), 6)) && (*l_483)) != p_38) > (*l_483)) >= 255UL)) || 255UL) > 0x2857L) <= g_76), 0x259E46A4L)) , (void*)0)) < g_67[1][3]) & (*l_484)));
                    (**l_532) = (((safe_lshift_func_uint8_t_u_u(g_76, 3)) , p_38) || 0xCC2DD43AL);
                }





                for (g_368 = (-17); (g_368 >= 9); ++g_368)
                {
                    for (l_480 = 0; (l_480 <= (-10)); l_480--)
                    {
                        return p_38;


                    }
                    (*l_532) = (*l_532);
                }
                for (l_515 = 0; (l_515 <= 4); l_515 += 1)
                {
                    int *l_575 = &l_547[6];
                }
            }
            else
            {
                char l_581 = 0x3CL;
                for (g_76 = 0; (g_76 <= 6); g_76 += 1)
                {
                    unsigned short l_580[7];
                    char l_590 = 0x26L;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_580[i] = 0xED77L;
                    for (p_38 = 6; (p_38 >= 0); p_38 -= 1)
                    {
                        int i, j;
                        g_67[g_76][(p_38 + 1)] = (((safe_add_func_int8_t_s_s(((((((safe_sub_func_uint8_t_u_u((0x0AFDL > func_46(g_67[g_76][(p_38 + 1)], func_46(g_67[g_76][(p_38 + 1)], ((*g_74) == (l_580[4] , (*g_74))), ((func_46((func_46(g_67[1][3], l_580[4], l_581) , 0xC873L), l_581, (**l_573)) > l_580[4]) , p_38)), g_76)), p_38)) || (**l_573)) , (*l_455)) || p_38) , p_38) != l_580[2]), g_320[3])) <= g_320[0]) , 1L);
                        return p_38;
                    }
                    for (l_480 = 0; (l_480 <= 6); l_480 += 1)
                    {
                        unsigned l_591 = 0UL;
                        int **l_592 = &l_484;
                        int i, j;
                        g_67[g_76][(l_480 + 1)] = (((safe_add_func_uint8_t_u_u((***l_531), (((func_46(g_5, (*l_483), (((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(l_580[4], (func_46(((((*l_455) == p_38) & (&g_74 == (p_38 , (p_38 , (void*)0)))) && p_38), l_590, (*l_483)) , 0x3331L))) != 1L), p_38)), l_591)) & 0UL) & g_77)) <= g_320[0]) , &l_471) != (*g_74)))) , (void*)0) == (void*)0);
                        (**l_531) = (*l_532);
                        (*l_592) = (*g_74);
                    }
                }


                (***l_531) = (safe_rshift_func_uint16_t_u_s(((g_76 & func_46(p_38, (0xF6EF841CL & (&l_455 == &l_484)), (l_581 , ((safe_add_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(0x16L, (*l_484))) >= g_5), 0xBCABL)) | 0xEB44A15CL)))) == g_5), 5));
            }






            (*l_599) = &l_456[9];

            ;
            (*l_483) = (*l_484);
            for (p_38 = 0; (p_38 != (-30)); --p_38)
            {
                (*l_484) = (safe_add_func_int32_t_s_s(func_46(p_38, ((p_38 < g_368) & p_38), g_67[1][3]), (safe_lshift_func_uint16_t_u_s((p_38 | ((safe_sub_func_uint16_t_u_u(65535UL, func_46(g_320[0], g_67[1][3], p_38))) >= g_67[1][3])), (***l_531)))));
                return g_77;


            }
        }





        (*l_484) = (~p_38);
        if ((*l_484))
        {
            (*l_484) = p_38;
        }
        else
        {
            unsigned l_608[5];
            short l_615 = 1L;
            int *l_616 = &l_547[7];
            int i;
            for (i = 0; i < 5; i++)
                l_608[i] = 0xAB59CE29L;
            l_484 = l_616;

            ;
            (*l_616) = (*l_616);
        }


        for (l_471 = 0; (l_471 != (-28)); --l_471)
        {
            const int *l_640 = &g_77;
            const int **l_644 = &l_640;
            if (g_76)
                break;
            if (l_619)
                continue;
            if (p_38)
            {
                int **l_629 = &g_75;
                int l_638 = 1L;
                char l_643 = 0xA9L;
                if ((safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(p_38, 13)), (0x8B5D0066L <= (p_38 || (safe_sub_func_uint8_t_u_u((l_629 != &l_455), ((l_630 > (safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((*l_484) , p_38), (safe_unary_minus_func_uint16_t_u((*l_484))))), 1L)) >= p_38), g_320[6]))) > l_638))))))) <= p_38), 3)))))
                {
                    int **l_639 = &g_75;
                    (*l_639) = (*g_74);
                }
                else
                {
                    const int **l_641 = &g_553;
                    const int ***l_642 = &l_641;
                    (*l_641) = l_640;

                    ;
                    (*l_642) = &l_640;

                    ;
                    if (l_643)
                    {
                        return g_67[6][6];
                    }
                    else
                    {
                        (*l_484) = (+(*g_553));
                    }
                }
            }
            else
            {
                g_553 = (*g_74);


            }
            (*l_644) = &l_456[9];

            ;
        }
    }
    else
    {
        (*l_573) = (*l_573);
    }



    return g_76;
}







static unsigned char func_46(short p_47, unsigned p_48, unsigned short p_49)
{
    int *l_453 = &g_76;
    int **l_454 = &l_453;
    (*l_454) = l_453;
    return g_5;
}







static unsigned char func_54(char p_55)
{
    unsigned l_295[9] = {0xCA04AF34L, 0x85EDA7B5L, 0xCA04AF34L, 0x85EDA7B5L, 0xCA04AF34L, 0x85EDA7B5L, 0xCA04AF34L, 0x85EDA7B5L, 0xCA04AF34L};
    int *l_296[1][6][6] = {{{&g_67[5][5], &g_67[1][3], &g_67[5][5], &g_67[1][3], &g_67[5][5], &g_67[1][3]}, {&g_67[5][5], &g_67[1][3], &g_67[5][5], &g_67[1][3], &g_67[5][5], &g_67[1][3]}, {&g_67[5][5], &g_67[1][3], &g_67[5][5], &g_67[1][3], &g_67[5][5], &g_67[1][3]}, {&g_67[5][5], &g_67[1][3], &g_67[5][5], &g_67[1][3], &g_67[5][5], &g_67[1][3]}, {&g_67[5][5], &g_67[1][3], &g_67[5][5], &g_67[1][3], &g_67[5][5], &g_67[1][3]}, {&g_67[5][5], &g_67[1][3], &g_67[5][5], &g_67[1][3], &g_67[5][5], &g_67[1][3]}}};
    int * const **l_297 = &g_74;
    int *l_298 = &g_76;
    char l_301[2];
    unsigned char l_306 = 0x9FL;
    int *l_394 = &g_77;
    int * const l_423 = (void*)0;
    unsigned l_447 = 0x1CFA9953L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_301[i] = 0x55L;
    for (p_55 = 0; (p_55 != 20); p_55++)
    {
        int **l_293 = (void*)0;
        int **l_294 = &g_75;
    }
    if (((func_64(l_295[4]) , (((l_296[0][1][0] == ((((void*)0 == l_297) , (*g_75)) , l_298)) < (((((safe_lshift_func_uint16_t_u_s(((l_301[0] , (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((g_76 || (*l_298)), 0xD1C0L)), 1UL))) ^ 1L), l_306)) , g_5) >= 4294967294UL) < 0x4B15233EL) , g_76)) || 0x0FL)) != 0xB08EL))
    {
        char l_309 = 4L;
        int **l_312 = &g_75;
        int ***l_311 = &l_312;
        int l_408[9] = {6L, (-6L), 6L, (-6L), 6L, (-6L), 6L, (-6L), 6L};
        int i;
        (**g_74) = p_55;
        (***l_297) = p_55;
        if (p_55)
        {
            int *l_313 = &g_77;
            unsigned char l_385 = 0xECL;
            int **l_439 = &l_296[0][1][0];
            for (p_55 = 0; (p_55 > (-2)); p_55 = safe_sub_func_int16_t_s_s(p_55, 5))
            {
                int **l_310 = &l_298;
                (*l_310) = func_58(l_309);
                if (((((&g_75 != (p_55 , &g_75)) > p_55) , (((((l_311 != &l_312) , l_313) != l_313) || (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((p_55 && 0xE2BBL) != p_55), 0x6821L)), 0x91L))) | 0xAB73C1A8L)) || p_55))
                {
                    char l_346 = (-5L);
                    int **l_349 = &g_75;
                    if (((g_77 , l_310) == &g_75))
                    {
                        (**g_74) = ((0x4CL && g_320[0]) || 0UL);
                    }
                    else
                    {
                        int **l_321 = &g_75;
                        (*l_321) = (*g_74);
                        (**l_311) = (*g_74);
                        (**l_311) = func_58(((safe_lshift_func_int16_t_s_s(((void*)0 != &g_75), (safe_mod_func_int32_t_s_s((**g_74), g_320[4])))) , 3L));

                        ;
                    }
                    if ((((((p_55 >= g_5) , (*l_311)) == &g_75) , (*l_311)) == &g_75))
                    {
                        (**g_74) = (safe_lshift_func_uint16_t_u_s((0x76L ^ (((!((safe_lshift_func_int16_t_s_s(p_55, g_67[4][3])) | 0x20L)) <= (**g_74)) && (0UL && (safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_5, (safe_div_func_uint8_t_u_u(1UL, p_55)))), p_55)), g_77)), (**l_310))), g_67[5][4])), p_55)), (**l_310)))))), 11));
                        (*l_313) = ((((p_55 < g_320[0]) , (l_346 < (g_5 < (**l_312)))) && p_55) && 0x3C976F2AL);
                    }
                    else
                    {
                        (*g_75) = (**l_310);
                        return g_320[3];
                    }
                    (*l_349) = (g_77 , (*g_74));
                }
                else
                {
                    l_313 = (*g_74);


                    (**g_74) = p_55;
                }
                if ((safe_rshift_func_int16_t_s_u((g_77 ^ (((safe_mod_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((p_55 < (safe_sub_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((g_67[1][3] <= (0UL || (**l_312))), ((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((p_55 < g_5), (+(((g_368 <= (safe_mod_func_uint16_t_u_u((**l_310), (**l_310)))) || g_368) > p_55)))), g_368)) & 0x91L))), 5L)) != g_5) && 0xFBL) ^ p_55), (***l_297)))), p_55)) < (*l_313)), p_55)) && 0x3C2137F9L), g_76)) < 0xD5L) | g_67[4][2])), (**l_310))))
                {
                    (*l_310) = (*l_310);
                    if ((*g_75))
                        continue;
                    for (l_309 = 0; (l_309 > 1); l_309 = safe_add_func_uint32_t_u_u(l_309, 1))
                    {
                        if ((**l_312))
                            break;
                        (*l_313) = (*l_313);
                    }
                    g_75 = (*l_312);
                }
                else
                {
                    unsigned l_383 = 1UL;
                    int *l_384 = &g_67[1][3];
                    (*l_312) = func_58(p_55);

                    ;
                    if ((*g_75))
                        break;
                    if ((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(p_55, (((!((!(**l_310)) == ((void*)0 == &g_75))) < (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_55, 1L)), l_383))) <= g_320[1]))) <= ((p_55 >= g_77) >= p_55)) < 0x54BA2A83L), 8)))
                    {
                        l_313 = l_384;

                        ;
                        if (l_385)
                            break;
                    }
                    else
                    {
                        (***l_311) = p_55;
                        if ((**g_74))
                            break;
                    }
                }
            }



            l_394 = (void*)0;

            ;
            for (l_309 = 8; (l_309 >= 0); l_309 -= 1)
            {
                short l_407 = 0xAC13L;
                int *l_409 = &g_76;
                (*l_312) = (*l_312);
                for (g_368 = 0; (g_368 <= 0); g_368 += 1)
                {
                    int i;
                    if (l_295[l_309])
                        break;
                    for (p_55 = 6; (p_55 >= 0); p_55 -= 1)
                    {
                        int i, j;
                        g_67[(g_368 + 4)][(g_368 + 4)] = 8L;
                    }
                }
            }
            (*l_439) = (*g_74);


        }
        else
        {
            int *l_446[4];
            int i;
            for (i = 0; i < 4; i++)
                l_446[i] = &g_77;
            (**l_312) = (((p_55 != (safe_div_func_int32_t_s_s((func_64((safe_sub_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u((**l_312), ((**g_74) , (((l_446[2] != (((-1L) <= g_368) , l_446[3])) || (p_55 & p_55)) <= g_320[1])))) | 0UL) , g_368) >= 0x14CCL), l_447))) , p_55), 0xB51522DDL))) || 6L) != g_368);
        }



        ;
    }
    else
    {
        g_75 = (*g_74);
    }



    ;
    return g_76;
}







static int * func_58(int p_59)
{
    int *l_177 = &g_67[1][3];
    int **l_178 = &l_177;
    unsigned l_291 = 9UL;
    l_177 = (*g_74);


    (*l_178) = l_177;
    for (g_76 = (-20); (g_76 >= 28); g_76++)
    {
        int l_183 = 0L;
    }
    (*l_177) = (+(246UL | ((safe_mod_func_int32_t_s_s((((**l_178) != (0x7314DBC2L < (((&l_177 == &g_75) | ((safe_add_func_int8_t_s_s(g_5, l_291)) ^ (((safe_unary_minus_func_uint16_t_u(p_59)) >= (((void*)0 == &l_177) || (**l_178))) == (-1L)))) , (*g_75)))) < p_59), 0xE073102FL)) && p_59)));
    return &g_76;


}







static const char func_64(unsigned p_65)
{
    const int *l_66 = &g_67[1][3];
    const int **l_68 = &l_66;
    int l_112[1][7][10] = {{{8L, (-9L), (-9L), 1L, 2L, 1L, (-9L), (-9L), 8L, 0x39B07A77L}, {8L, (-9L), (-9L), 1L, 2L, 1L, (-9L), (-9L), 8L, 0x39B07A77L}, {8L, (-9L), (-9L), 1L, 2L, 1L, (-9L), (-9L), 8L, 0x39B07A77L}, {8L, (-9L), (-9L), 1L, 2L, 1L, (-9L), (-9L), 8L, 0x39B07A77L}, {8L, (-9L), (-9L), 1L, 2L, 1L, (-9L), (-9L), 8L, 0x39B07A77L}, {8L, (-9L), (-9L), 1L, 2L, 1L, (-9L), (-9L), 8L, 0x39B07A77L}, {8L, (-9L), (-9L), 1L, 2L, 1L, (-9L), (-9L), 8L, 0x39B07A77L}}};
    int l_144 = 1L;
    short l_158 = (-1L);
    int l_161 = 0xCC42DB4DL;
    int i, j, k;
    (*l_68) = l_66;
    for (p_65 = 0; (p_65 <= 45); p_65 = safe_add_func_int16_t_s_s(p_65, 8))
    {
        int *l_71 = &g_67[2][5];
        (*l_68) = l_71;
    }
    (*l_68) = &g_67[1][3];
    for (p_65 = 1; (p_65 <= 6); p_65 += 1)
    {
        int *l_73[4] = {&g_67[1][2], (void*)0, &g_67[1][2], (void*)0};
        int ** const l_72 = &l_73[3];
        int i;
        (**g_74) = ((p_65 & g_67[1][3]) , (l_72 != g_74));
        if (p_65)
        {
            int **l_81 = (void*)0;
            int *l_84 = &g_67[1][3];
            int **l_101 = &l_73[3];
            for (g_76 = 5; (g_76 >= 0); g_76 -= 1)
            {
                for (g_77 = 0; (g_77 <= 6); g_77 += 1)
                {
                    int i, j;
                    return g_67[p_65][(g_76 + 2)];
                }
                for (g_77 = 5; (g_77 >= 0); g_77 -= 1)
                {
                    int **l_80 = &l_73[2];
                    int i, j;
                    g_67[g_76][(g_76 + 1)] = (((g_67[(g_76 + 1)][p_65] < (safe_add_func_int32_t_s_s(((!(**g_74)) || (p_65 , ((g_67[(g_76 + 1)][p_65] != p_65) , p_65))), (g_67[(g_76 + 1)][p_65] > ((p_65 || (p_65 > (*g_75))) >= 0UL))))) , l_80) == (void*)0);
                }
            }
            l_84 = ((p_65 <= (p_65 , (!(((((!p_65) >= (l_81 == (void*)0)) , (0x1490L ^ g_77)) , (safe_sub_func_int32_t_s_s(((((((*g_74) != (*l_68)) , 9UL) & (**l_68)) , g_77) == 0x5A0AL), g_5))) >= (**g_74))))) , (void*)0);

            ;
            (*g_75) = ((safe_div_func_uint8_t_u_u(g_77, (safe_mod_func_int8_t_s_s(g_67[2][5], (p_65 , ((safe_add_func_uint8_t_u_u(g_77, (((safe_div_func_uint8_t_u_u(((g_77 & (safe_sub_func_uint16_t_u_u(g_67[1][3], 1UL))) && p_65), (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((&l_73[2] == &l_84), (**l_68))), (*l_66))), (*l_66))))) >= g_67[4][3]) >= p_65))) , p_65)))))) >= (*l_66));
            (*l_101) = (*g_74);


        }
        else
        {
            int l_115 = 0L;
            int l_125[5] = {(-8L), 1L, (-8L), 1L, (-8L)};
            int **l_142[1];
            int i;
            for (i = 0; i < 1; i++)
                l_142[i] = &l_73[1];
            (*l_68) = (*l_68);
            for (g_76 = 3; (g_76 >= 0); g_76 -= 1)
            {
                const int l_102 = 0x24C2F892L;
                int **l_114 = (void*)0;
                int ***l_113 = &l_114;
                int i;
                (*g_75) = ((0UL < 0L) & l_102);
                (*l_113) = ((p_65 == (((~(p_65 , g_76)) || (((safe_add_func_uint16_t_u_u((((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_s((((((void*)0 != (*g_74)) , (safe_sub_func_int8_t_s_s(((!p_65) , g_67[3][5]), ((safe_sub_func_uint8_t_u_u(g_76, 0x5BL)) , 251UL)))) || 0x6AL) || p_65), g_77)))) , g_5) && g_67[1][3]), l_112[0][2][5])) , p_65) == p_65)) | p_65)) , &l_73[3]);

                ;
            }
            for (g_76 = 3; (g_76 >= 0); g_76 -= 1)
            {
                int **l_116[8] = {&l_73[g_76], &l_73[g_76], &l_73[1], &l_73[g_76], &l_73[g_76], &l_73[1], &l_73[g_76], &l_73[g_76]};
                int **l_117[8] = {&l_73[g_76], &l_73[g_76], &l_73[0], &l_73[g_76], &l_73[g_76], &l_73[0], &l_73[g_76], &l_73[g_76]};
                int **l_118 = &l_73[g_76];
                int i;
                if (l_115)
                    break;
                if (p_65)
                    continue;
                (*l_118) = (*g_74);
            }


            for (l_115 = 0; (l_115 <= 6); l_115 += 1)
            {
                int **l_143 = &g_75;
                int i, j;
            }
        }


        (**g_74) = ((g_77 , ((0xA2L > (safe_sub_func_int16_t_s_s(0x1269L, (p_65 || p_65)))) , (((safe_sub_func_uint32_t_u_u((((((((safe_rshift_func_int8_t_s_u(g_5, 4)) <= ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s(l_158, (g_5 == ((safe_add_func_int32_t_s_s(((void*)0 == (*g_74)), g_67[1][3])) != g_5)))) , l_161), p_65)), g_76)) , 4294967295UL)) != (*l_66)) > p_65) , p_65) >= (**g_74)) > p_65), g_76)) || p_65) < (*l_66)))) && (**g_74));
        l_144 = (((safe_rshift_func_uint8_t_u_s(6UL, 5)) , (void*)0) == ((p_65 , ((**l_68) , ((*l_66) != (safe_div_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(255UL, 7)) || 0x3699L) < p_65), (safe_unary_minus_func_int8_t_s((safe_mod_func_uint16_t_u_u(p_65, (**l_68))))))) , p_65), p_65))))) , (void*)0));
    }
    return g_5;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_67[i][j], "g_67[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_320[i], "g_320[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_873, "g_873", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1122[i], "g_1122[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
