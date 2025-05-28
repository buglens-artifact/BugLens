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


struct S0 {
   volatile unsigned char f0;
   volatile unsigned f1;
   unsigned f2;
   unsigned f3;
};


static unsigned short g_7 = 0x810DL;
static int g_9 = 0x283066C9L;
static int *g_8 = &g_9;
static unsigned char g_58[3] = {9UL,9UL,9UL};
static volatile struct S0 g_69[8][7] = {{{0xE7L,3UL,1UL,0xDD93F870L},{0UL,0x22591552L,0x49A337B2L,0UL},{0xDDL,0x0C6A332EL,0x25B78C6AL,1UL},{0xF1L,8UL,1UL,4294967295UL},{255UL,0xE734F12CL,0x33A9025BL,0xD6B1F848L},{0x64L,9UL,1UL,9UL},{0x74L,5UL,0xF2B9ACCEL,0x044B1310L}},{{0UL,0x22591552L,0x49A337B2L,0UL},{255UL,0xE734F12CL,0x33A9025BL,0xD6B1F848L},{255UL,0xF7D1D410L,0UL,0UL},{3UL,0xF56C0C90L,4294967288UL,0x2EE3B6EAL},{0xD8L,0x4885C3B3L,4294967291UL,0xB7283D34L},{3UL,4294967287UL,6UL,4UL},{0xD8L,0x4885C3B3L,4294967291UL,0xB7283D34L}},{{3UL,0xF56C0C90L,4294967288UL,0x2EE3B6EAL},{0x74L,5UL,0xF2B9ACCEL,0x044B1310L},{0x74L,5UL,0xF2B9ACCEL,0x044B1310L},{3UL,0xF56C0C90L,4294967288UL,0x2EE3B6EAL},{0x64L,9UL,1UL,9UL},{0xE7L,3UL,1UL,0xDD93F870L},{0xD1L,0xD0509419L,0xB8600767L,0xE6D99275L}},{{255UL,4294967288UL,0x243B3BE7L,0x8BBD03C5L},{2UL,0UL,4294967288UL,7UL},{1UL,0xCDF493ABL,4UL,0x0B913A86L},{0xF1L,8UL,1UL,4294967295UL},{2UL,0UL,4294967288UL,7UL},{5UL,0x5F263070L,9UL,8UL},{0xDDL,0x0C6A332EL,0x25B78C6AL,1UL}},{{0xD8L,0x4885C3B3L,4294967291UL,0xB7283D34L},{255UL,0xD7E7D1C2L,0x13F3B720L,4294967295UL},{3UL,4294967287UL,6UL,4UL},{255UL,0xE734F12CL,0x33A9025BL,0xD6B1F848L},{247UL,3UL,0xD78DB584L,0xEC3D2506L},{3UL,4294967287UL,6UL,4UL},{0xD1L,0xD0509419L,0xB8600767L,0xE6D99275L}},{{0x7FL,0xC0774064L,0x2EF7C93EL,0x55F80954L},{0xDDL,0x0C6A332EL,0x25B78C6AL,1UL},{255UL,4294967288UL,0x243B3BE7L,0x8BBD03C5L},{0xD8L,0x4885C3B3L,4294967291UL,0xB7283D34L},{0xF1L,8UL,1UL,4294967295UL},{0xF1L,8UL,1UL,4294967295UL},{0xD8L,0x4885C3B3L,4294967291UL,0xB7283D34L}},{{255UL,4294967288UL,0x243B3BE7L,0x8BBD03C5L},{0xF1L,8UL,1UL,4294967295UL},{3UL,4294967287UL,6UL,4UL},{0UL,0xF0819D5AL,0x3B115E53L,0x01E83513L},{0x64L,9UL,1UL,9UL},{9UL,0x8B5DB27CL,6UL,0x5C089A47L},{1UL,1UL,0xD5126306L,0x3EEFD7F9L}},{{0x64L,9UL,1UL,9UL},{0xE7L,3UL,1UL,0xDD93F870L},{0xD1L,0xD0509419L,0xB8600767L,0xE6D99275L},{255UL,4294967288UL,0x243B3BE7L,0x8BBD03C5L},{1UL,0xCDF493ABL,4UL,0x0B913A86L},{3UL,0xF56C0C90L,4294967288UL,0x2EE3B6EAL},{0x56L,0UL,4294967287UL,0xEC3887D1L}}};
static struct S0 g_71 = {0xD8L,4294967286UL,4294967290UL,0UL};
static struct S0 g_73 = {0x6AL,0x74B632CCL,5UL,0UL};
static struct S0 g_74 = {8UL,4294967295UL,0UL,0xFF03E53CL};
static volatile struct S0 g_84 = {248UL,1UL,4294967295UL,0UL};
static unsigned short g_88 = 65535UL;
static short g_98 = 0x7171L;
static int g_103[5][6] = {{0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L},{0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L},{0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L},{0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L},{0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L,0xEE10C307L}};
static int *g_102 = &g_103[4][0];
static char g_113 = (-8L);
static struct S0 g_114 = {5UL,0xC42DAAAAL,0x263C58A5L,4294967295UL};
static volatile struct S0 g_121[7] = {{255UL,0x8D446D23L,0xE2624C86L,1UL},{4UL,4294967288UL,0x3E29BDB7L,0UL},{4UL,4294967288UL,0x3E29BDB7L,0UL},{255UL,0x8D446D23L,0xE2624C86L,1UL},{4UL,4294967288UL,0x3E29BDB7L,0UL},{4UL,4294967288UL,0x3E29BDB7L,0UL},{255UL,0x8D446D23L,0xE2624C86L,1UL}};
static struct S0 *g_136 = &g_73;
static struct S0 **g_135 = &g_136;
static unsigned short g_163 = 0UL;
static struct S0 g_165 = {0UL,0UL,0xD61EB32BL,0xE363783EL};
static volatile char **g_190 = (void*)0;
static struct S0 g_199 = {0xEEL,0x4FA2072CL,7UL,4294967295UL};
static char g_213[3][8][3] = {{{0x65L,0x65L,0x6AL},{0xF5L,7L,(-1L)},{(-1L),0xAAL,1L},{0x84L,(-1L),7L},{1L,(-1L),1L},{0L,(-1L),(-1L)},{0L,0x76L,0x6AL},{(-1L),0xF5L,0x29L}},{{1L,0x1EL,0x1EL},{(-1L),(-1L),0x84L},{0L,0x93L,0x65L},{0L,0x84L,(-1L)},{1L,0x6AL,0xC8L},{0x84L,0x84L,0xC5L},{(-1L),0x93L,0xB6L},{1L,0x16L,0L}},{{0xC8L,0xAAL,0x76L},{0L,1L,0L},{0x93L,0x1EL,0x65L},{0xF5L,(-1L),0L},{0xAAL,1L,0x6AL},{(-1L),(-1L),(-1L)},{0xAAL,1L,0xC8L},{0xF5L,(-1L),0x29L}}};
static char *g_212[8][1] = {{(void*)0},{&g_213[2][0][1]},{(void*)0},{&g_213[2][0][1]},{(void*)0},{&g_213[2][0][1]},{(void*)0},{&g_213[2][0][1]}};
static char **g_211 = &g_212[2][0];
static char ***g_210 = &g_211;
static struct S0 g_218 = {1UL,4294967292UL,4294967289UL,0UL};
static struct S0 g_241 = {253UL,0x205401C7L,0xE8ABB288L,6UL};
static char g_246 = 1L;
static struct S0 g_247 = {0UL,4294967295UL,4294967290UL,0x8B19DD57L};



static struct S0 func_1(void);
static int * func_2(unsigned char p_3, int * p_4, int p_5, unsigned short p_6);
static unsigned short func_12(int * p_13, unsigned p_14, int * p_15, short p_16, unsigned p_17);
static int * func_19(int p_20);
static struct S0 func_25(char p_26, short p_27);
static unsigned short func_34(short p_35, int * p_36, unsigned short p_37);
static unsigned char func_41(int * p_42);
static unsigned char func_43(int * p_44, int * p_45, unsigned p_46);
static struct S0 func_47(int * p_48, short p_49, short p_50, int * p_51, unsigned char p_52);
static unsigned short func_62(unsigned p_63, short p_64);
static struct S0 func_1(void)
{
    int l_18 = 0xB000CD9DL;
    int **l_244[10] = {&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8};
    unsigned l_245 = 1UL;
    int i;
    g_8 = func_2(g_7, g_8, (safe_mul_func_uint16_t_u_u(func_12(&g_9, (l_18 , g_7), func_19(l_18), g_218.f3, g_213[0][0][1]), g_213[2][6][1])), l_18);
    (*g_8) = l_245;
    g_246 = (*g_102);
    return g_247;
}







static int * func_2(unsigned char p_3, int * p_4, int p_5, unsigned short p_6)
{
    struct S0 *l_242 = &g_218;
    int *l_243 = &g_9;
    (*l_242) = g_241;
    (*l_242) = (*l_242);
    p_4 = func_19((*g_8));
    (*l_242) = (*l_242);
    return l_243;
}







static unsigned short func_12(int * p_13, unsigned p_14, int * p_15, short p_16, unsigned p_17)
{
    unsigned *l_224 = (void*)0;
    unsigned **l_223 = &l_224;
    unsigned ***l_225 = (void*)0;
    unsigned ***l_226 = (void*)0;
    unsigned ***l_227 = &l_223;
    int l_237 = 0x9C4BCFCDL;
    int **l_240 = &g_102;
    (*l_227) = l_223;
    for (g_88 = 0; (g_88 == 17); ++g_88)
    {
        int *l_230[9][5][5] = {{{&g_103[4][0],(void*)0,&g_103[2][2],&g_103[0][0],&g_103[4][0]},{&g_103[4][0],&g_103[4][0],&g_9,(void*)0,&g_103[4][0]},{(void*)0,&g_103[4][0],&g_9,(void*)0,&g_103[4][0]},{&g_103[2][4],(void*)0,&g_9,(void*)0,&g_103[2][2]},{&g_103[4][0],&g_103[4][0],&g_103[2][5],&g_9,&g_103[2][1]}},{{&g_103[4][0],&g_103[4][1],&g_103[4][0],&g_103[4][0],(void*)0},{&g_103[0][0],(void*)0,&g_103[2][1],&g_9,&g_103[0][1]},{&g_103[4][0],&g_103[4][0],&g_9,(void*)0,&g_9},{&g_103[4][0],&g_103[4][0],&g_9,&g_103[0][1],&g_9},{&g_103[2][4],&g_103[0][0],&g_103[3][2],&g_103[4][0],&g_103[4][0]}},{{(void*)0,&g_9,&g_103[4][0],&g_103[2][2],&g_9},{&g_103[2][4],(void*)0,&g_103[4][0],&g_103[4][0],&g_103[4][0]},{&g_9,&g_9,&g_9,&g_103[4][0],&g_103[4][0]},{&g_9,&g_9,(void*)0,&g_103[1][4],(void*)0},{&g_103[2][5],&g_103[0][0],(void*)0,&g_103[2][1],&g_9}},{{&g_103[0][3],&g_103[4][0],(void*)0,&g_103[4][0],&g_103[3][2]},{&g_103[0][0],&g_9,&g_9,&g_103[0][0],&g_9},{&g_9,(void*)0,&g_103[4][0],&g_103[4][0],&g_9},{&g_9,&g_103[2][5],&g_103[4][0],&g_9,&g_103[4][0]},{&g_9,&g_103[2][4],&g_9,&g_103[4][0],(void*)0}},{{&g_103[2][1],&g_103[0][0],&g_9,&g_103[0][0],&g_103[2][1]},{&g_9,&g_103[1][4],&g_103[0][3],&g_103[4][0],&g_103[2][4]},{&g_9,&g_9,&g_9,&g_103[2][1],&g_9},{&g_9,(void*)0,&g_103[4][0],&g_103[1][4],&g_103[2][4]},{(void*)0,&g_103[2][1],&g_103[4][0],&g_103[4][0],&g_103[2][1]}},{{&g_103[2][4],&g_103[4][0],(void*)0,&g_103[4][0],(void*)0},{&g_103[2][5],&g_9,&g_103[4][0],&g_103[2][2],&g_103[4][0]},{(void*)0,&g_103[1][4],(void*)0,&g_9,&g_9},{&g_103[2][5],(void*)0,&g_9,&g_103[2][1],&g_9},{&g_103[2][4],&g_103[4][0],&g_103[4][0],(void*)0,&g_103[2][4]}},{{&g_9,&g_103[0][0],(void*)0,&g_9,&g_103[4][0]},{&g_103[3][2],&g_103[4][0],(void*)0,(void*)0,&g_9},{&g_103[4][0],&g_103[0][0],&g_9,&g_103[2][2],&g_103[2][2]},{&g_103[4][0],&g_103[4][0],&g_103[4][0],&g_103[4][0],&g_9},{&g_103[2][5],&g_9,&g_103[4][0],&g_103[4][0],&g_9}},{{&g_9,&g_103[4][0],(void*)0,(void*)0,&g_103[4][0]},{&g_9,&g_103[4][0],&g_103[4][0],&g_9,&g_9},{&g_103[3][2],&g_9,&g_103[4][0],&g_103[4][0],(void*)0},{&g_103[4][0],&g_103[2][5],&g_9,&g_103[2][1],&g_103[2][5]},{(void*)0,&g_103[1][4],(void*)0,(void*)0,&g_9}},{{&g_103[0][0],&g_9,(void*)0,&g_103[2][1],&g_103[4][0]},{&g_9,&g_103[4][0],&g_103[4][0],&g_103[4][0],&g_9},{(void*)0,&g_103[4][0],&g_9,&g_9,&g_103[4][0]},{&g_103[4][0],&g_9,(void*)0,(void*)0,&g_103[0][3]},{&g_103[4][0],&g_103[0][0],&g_103[0][1],&g_103[4][0],&g_103[4][0]}}};
        unsigned *l_238 = &g_165.f2;
        int **l_239 = &l_230[2][2][3];
        int i, j, k;
        g_102 = &g_103[4][0];
        (*l_239) = ((p_14 >= (((*l_238) = ((((0xE639L >= p_14) < 1UL) || l_237) , p_16)) , p_14)) , &g_103[0][0]);
        if ((*p_13))
            break;
        if ((*p_13))
            continue;
    }
    (*l_240) = p_15;
    return p_17;
}







static int * func_19(int p_20)
{
    int *l_29[6];
    char ***l_215[5][7] = {{&g_211,&g_211,&g_211,&g_211,&g_211,&g_211,&g_211},{&g_211,&g_211,&g_211,&g_211,&g_211,&g_211,&g_211},{&g_211,&g_211,&g_211,&g_211,&g_211,&g_211,&g_211},{&g_211,&g_211,&g_211,&g_211,&g_211,&g_211,&g_211},{&g_211,&g_211,&g_211,&g_211,&g_211,&g_211,&g_211}};
    int i, j;
    for (i = 0; i < 6; i++)
        l_29[i] = &g_9;
    for (p_20 = 0; (p_20 != (-5)); --p_20)
    {
        char ***l_214 = &g_211;
        int *l_221[10] = {&g_103[4][0],&g_103[2][4],&g_103[2][4],&g_103[4][0],&g_103[2][4],&g_103[2][4],&g_103[4][0],&g_103[2][4],&g_103[2][4],&g_103[4][0]};
        int **l_222 = &l_29[4];
        int i;
        for (g_9 = 0; (g_9 >= 9); g_9++)
        {
            int l_38 = 0xA1A8F1EDL;
            struct S0 *l_219 = &g_73;
            int **l_220 = &g_102;
            (*l_219) = func_25((safe_unary_minus_func_uint32_t_u((g_7 , (l_29[4] != (void*)0)))), (safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((func_34((l_38 , (((((safe_sub_func_uint8_t_u_u(func_41(&g_9), (g_73.f2 & (*g_8)))) < ((l_214 = g_210) != l_215[1][5])) | 255UL) & 4294967295UL) ^ (*g_8))), l_29[4], p_20) , g_199.f3), p_20)) , p_20), 6)));
            (*l_220) = l_29[4];
            (*l_220) = l_221[4];
            return &g_103[4][4];
        }
        (*l_222) = &g_103[4][0];
    }
    return &g_9;
}







static struct S0 func_25(char p_26, short p_27)
{
    return g_218;
}







static unsigned short func_34(short p_35, int * p_36, unsigned short p_37)
{
    struct S0 *l_216[2][4][5] = {{{&g_71,&g_165,(void*)0,&g_199,&g_74},{&g_74,&g_199,(void*)0,&g_165,&g_71},{&g_74,&g_165,&g_74,&g_165,&g_74},{&g_71,&g_165,(void*)0,&g_199,&g_74}},{{&g_74,&g_199,(void*)0,&g_165,&g_71},{&g_74,&g_165,&g_74,&g_165,&g_74},{&g_71,&g_165,(void*)0,&g_199,&g_74},{&g_74,&g_199,(void*)0,&g_165,&g_71}}};
    struct S0 **l_217 = &l_216[0][3][3];
    int i, j, k;
    (*l_217) = (g_71.f3 , l_216[0][2][4]);
    return g_9;
}







static unsigned char func_41(int * p_42)
{
    unsigned char *l_57 = &g_58[0];
    char l_59 = (-7L);
    int *l_70 = &g_9;
    struct S0 *l_117 = (void*)0;
    unsigned short *l_148 = &g_88;
    unsigned l_151[4][9] = {{4294967293UL,4294967293UL,4294967295UL,4294967293UL,4294967293UL,4294967295UL,4294967293UL,4294967293UL,4294967295UL},{0x6B1039D6L,0x6B1039D6L,0xC2E7E9A9L,0x6B1039D6L,0x6B1039D6L,0xC2E7E9A9L,0x6B1039D6L,0x6B1039D6L,0xC2E7E9A9L},{4294967293UL,4294967293UL,4294967295UL,4294967293UL,4294967293UL,4294967295UL,4294967293UL,4294967293UL,4294967295UL},{0x6B1039D6L,0x6B1039D6L,0xC2E7E9A9L,0x6B1039D6L,0x6B1039D6L,0xC2E7E9A9L,0x6B1039D6L,0x6B1039D6L,0xC2E7E9A9L}};
    int *l_153 = &g_103[4][0];
    int **l_154[5][8] = {{&g_8,&g_8,&g_8,&g_8,&g_8,&l_70,&g_8,&g_8},{&g_8,&g_8,&g_8,&l_70,(void*)0,(void*)0,&l_70,&g_8},{&g_8,&g_8,(void*)0,&l_70,&l_153,&l_70,(void*)0,&g_8},{&g_8,&g_8,&l_70,(void*)0,(void*)0,&l_70,&g_8,&g_8},{&g_8,&g_8,&g_8,&l_70,&g_8,&g_8,&g_8,&g_8}};
    char ***l_196 = (void*)0;
    int i, j;
    if ((((((*l_57) = func_43((func_47(&g_9, (safe_div_func_uint8_t_u_u(((*l_57) = (safe_add_func_uint16_t_u_u(0xADF8L, g_9))), (l_59 , l_59))), (safe_mod_func_uint16_t_u_u(func_62((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((g_69[4][1] , l_70) == l_70) == 0x52FBL), g_9)), g_7)), (*l_70)), 0xA682L)), l_70, g_9) , l_70), p_42, (*l_70))) , (*l_70)) , 0xC6L) , (*l_70)))
    {
        int *l_119 = (void*)0;
        volatile struct S0 *l_122 = (void*)0;
        int l_132[5];
        int i;
        for (i = 0; i < 5; i++)
            l_132[i] = (-2L);
        for (g_88 = 13; (g_88 != 9); g_88 = safe_sub_func_int32_t_s_s(g_88, 1))
        {
            struct S0 **l_118 = &l_117;
            int **l_120[8] = {&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102};
            int i;
            (*l_118) = l_117;
            g_102 = l_119;
        }
        g_69[4][1] = g_121[4];
        if (((g_73.f0 , ((*l_70) ^ ((((*l_57) = func_43(l_70, &g_103[4][0], g_69[4][1].f1)) , g_84.f0) == (*l_70)))) ^ (*p_42)))
        {
            for (g_74.f2 = 0; (g_74.f2 > 35); g_74.f2 = safe_add_func_int8_t_s_s(g_74.f2, 8))
            {
                if ((*l_70))
                    break;
            }
        }
        else
        {
            for (g_71.f3 = 27; (g_71.f3 <= 56); g_71.f3 = safe_add_func_int16_t_s_s(g_71.f3, 3))
            {
                int l_131 = 0L;
                int *l_137 = &g_103[4][0];
                for (g_74.f2 = 0; g_74.f2 < 7; g_74.f2 += 1)
                {
                    struct S0 tmp = {0x7AL,4294967295UL,0xD1463E21L,0xFD216E5EL};
                    g_121[g_74.f2] = tmp;
                }
                (*l_137) = (safe_div_func_uint8_t_u_u(((*l_70) == (safe_sub_func_int16_t_s_s((-4L), ((~(0xE0L && (~l_131))) && (l_131 > l_132[2]))))), ((safe_add_func_uint8_t_u_u(((g_135 == &l_117) , g_69[4][1].f2), (-2L))) ^ (*g_8))));
            }
        }
        l_70 = l_70;
    }
    else
    {
        short l_149[6][1];
        char *l_150 = &g_113;
        int l_152 = 0xA909BF4FL;
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_149[i][j] = 0x9252L;
        }
        l_152 = (safe_sub_func_int8_t_s_s(((*l_150) = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((void*)0 == &g_8) < (l_148 == (func_43(&g_9, p_42, (*l_70)) , l_148))), g_58[0])), l_149[1][0])), l_149[2][0]))), l_151[0][5]));
    }
    g_102 = l_153;
    for (g_113 = (-22); (g_113 > 5); g_113 = safe_add_func_int32_t_s_s(g_113, 5))
    {
        int *l_157 = (void*)0;
        int l_185 = (-1L);
        int l_186[3];
        int i;
        for (i = 0; i < 3; i++)
            l_186[i] = 0x95C9EB64L;
        g_102 = &g_103[4][0];
        for (g_88 = 0; (g_88 <= 6); g_88 += 1)
        {
            l_157 = p_42;
        }
        for (g_74.f3 = 1; (g_74.f3 <= 6); g_74.f3 += 1)
        {
            unsigned *l_160 = (void*)0;
            int l_164 = 0xDA7C746FL;
            int *l_188 = &l_164;
            for (g_71.f2 = 0; (g_71.f2 <= 4); g_71.f2 += 1)
            {
                int l_184 = 0x13C66138L;
                int i, j;
                if (((safe_mul_func_int8_t_s_s(((void*)0 == l_160), (&g_69[g_74.f3][g_74.f3] != l_117))) & ((safe_rshift_func_uint8_t_u_s((((g_103[g_71.f2][(g_71.f2 + 1)] <= (g_163 = ((*g_8) <= g_69[g_74.f3][g_74.f3].f1))) ^ g_58[0]) == (((g_88 & l_164) == 1L) , l_164)), 5)) , 1UL)))
                {
                    struct S0 ***l_166 = &g_135;
                    char *l_174 = &l_59;
                    char **l_173 = &l_174;
                    int l_181 = 0xD6153177L;
                    char *l_182 = (void*)0;
                    char *l_183[3];
                    int *l_189 = &l_184;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_183[i] = &l_59;
                    g_69[(g_71.f2 + 2)][g_74.f3] = g_165;
                    if ((*g_8))
                        break;
                    (*l_166) = (void*)0;
                    if ((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((g_114.f0 < 0xBDL) | (safe_rshift_func_int8_t_s_s((((*l_173) = &g_113) == (g_103[g_71.f2][(g_71.f2 + 1)] , &g_113)), 7))), ((g_58[0] = (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_73.f2, (safe_lshift_func_int8_t_s_s((l_164 , ((l_184 = l_181) , l_185)), 3)))), 0x102636EEL))) , l_181))) || l_186[1]), l_181)))
                    {
                        struct S0 **l_187 = &g_136;
                        g_102 = (p_42 = &g_103[4][3]);
                        (*l_187) = l_117;
                        l_188 = p_42;
                    }
                    else
                    {
                        volatile char ***l_191[1][8][3] = {{{&g_190,&g_190,&g_190},{&g_190,&g_190,&g_190},{&g_190,&g_190,&g_190},{&g_190,&g_190,&g_190},{&g_190,&g_190,&g_190},{&g_190,&g_190,&g_190},{&g_190,&g_190,&g_190},{&g_190,&g_190,&g_190}}};
                        int l_192 = 0xA5BA704CL;
                        int i, j, k;
                        l_189 = &g_103[4][0];
                        g_190 = g_190;
                        return l_192;
                    }
                }
                else
                {
                    int *l_193 = &l_184;
                    g_102 = l_193;
                    (*g_102) = g_103[g_71.f2][(g_71.f2 + 1)];
                }
                return g_121[4].f0;
            }
        }
        if ((*g_102))
            continue;
    }
    for (g_73.f3 = 0; (g_73.f3 <= 3); g_73.f3 += 1)
    {
        int *l_197 = (void*)0;
        unsigned l_198 = 0xC3050E47L;
    }
    return g_71.f3;
}







static unsigned char func_43(int * p_44, int * p_45, unsigned p_46)
{
    unsigned short *l_106[2];
    int l_109 = 0x5E6F9BC8L;
    unsigned char l_111[4][6][8] = {{{0x8BL,0xF3L,255UL,252UL,0x24L,247UL,1UL,255UL},{252UL,2UL,0xF5L,255UL,0x8BL,1UL,0UL,255UL},{0xF5L,255UL,255UL,0xF5L,0xA1L,0xF3L,252UL,0x8BL},{0xA1L,0xF3L,252UL,0x8BL,0UL,5UL,255UL,0x7FL},{247UL,0xF3L,1UL,0x24L,1UL,0xF3L,247UL,0xE1L},{1UL,255UL,0xE1L,0xF3L,0xF5L,0UL,0x38L,255UL}},{{255UL,0x7FL,0x24L,0UL,0xF5L,0xF5L,0UL,0x24L},{1UL,1UL,5UL,255UL,1UL,247UL,0x24L,252UL},{247UL,0xA1L,1UL,1UL,0UL,252UL,255UL,252UL},{0xA1L,255UL,0xF5L,255UL,0xA1L,0x8BL,5UL,0x24L},{0xF5L,0x38L,0x7FL,0UL,255UL,1UL,0xE1L,255UL},{0xE1L,5UL,0x7FL,0xF3L,0xF3L,0x7FL,5UL,0xE1L}},{{255UL,247UL,0xF5L,0x24L,1UL,0x38L,255UL,0x7FL},{0UL,0UL,1UL,0x8BL,0x24L,0x38L,252UL,0UL},{0x8BL,2UL,0x8BL,0x7FL,255UL,0x38L,1UL,0x24L},{0UL,0x8BL,252UL,0xF3L,0xA1L,0xF5L,255UL,255UL},{0UL,255UL,247UL,247UL,255UL,0UL,2UL,5UL},{0x8BL,255UL,0xF5L,2UL,252UL,0UL,0x24L,0xE1L}},{{0xA1L,5UL,0UL,2UL,1UL,2UL,0UL,5UL},{0x24L,1UL,0xF3L,247UL,0xE1L,0x7FL,0xA1L,255UL},{247UL,0x38L,5UL,0xF3L,0x24L,0xA1L,0xA1L,0x24L},{0x7FL,0xF3L,0xF3L,0x7FL,5UL,0xE1L,0UL,0UL},{5UL,0xE1L,0UL,0UL,1UL,0x8BL,0x24L,0x38L},{2UL,0xE1L,0xF5L,252UL,0xF5L,0xE1L,2UL,247UL}}};
    char *l_112 = &g_113;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_106[i] = &g_88;
    g_114 = func_47(&g_103[4][0], (((void*)0 == l_106[1]) ^ ((((*p_44) & (safe_sub_func_uint16_t_u_u((l_109 = (0x5DL != l_109)), (safe_unary_minus_func_int8_t_s((g_7 < (g_103[4][3] ^ ((*l_112) = l_111[2][5][3])))))))) || l_111[2][5][3]) , l_109)), g_103[4][0], &g_9, g_58[0]);
    g_103[1][4] = (*g_8);
    return g_69[4][1].f1;
}







static struct S0 func_47(int * p_48, short p_49, short p_50, int * p_51, unsigned char p_52)
{
    char l_83 = 0xB8L;
    unsigned short *l_87[7] = {&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88};
    int l_89 = 1L;
    int l_90 = 0L;
    short l_91 = 0x7F35L;
    int *l_92 = &l_90;
    int i;
    g_74 = g_73;
    (*l_92) = (safe_rshift_func_uint16_t_u_s((~(safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((((safe_div_func_uint16_t_u_u(func_62(g_73.f2, ((l_90 = ((p_49 && func_62(l_83, (g_84 , l_83))) ^ ((p_50 , ((l_89 = (0x30L == ((safe_mul_func_int16_t_s_s(g_58[0], g_7)) || l_83))) > 65527UL)) | g_73.f3))) > 0x8443L)), p_52)) ^ p_52) , (-6L)), 9)), l_91))), l_83));
    if ((5L < g_71.f3))
    {
        unsigned short *l_93 = &g_88;
        unsigned *l_99 = (void*)0;
        unsigned *l_100 = &g_71.f3;
        int **l_101[8] = {(void*)0,&l_92,&l_92,(void*)0,&l_92,&l_92,&l_92,&l_92};
        int i;
        (*l_92) = ((void*)0 != l_93);
        g_102 = ((0x83FDF714L != (0xDDF4F03AL || (safe_add_func_uint8_t_u_u(func_62(((*l_100) = (((*l_92) = (safe_add_func_int32_t_s_s(0xA2E691EAL, (6UL <= ((p_49 <= (4294967295UL | (g_74.f2 , (*l_92)))) && (+(((g_98 = ((*l_92) , g_88)) != g_58[2]) != 4UL))))))) , 4294967295UL)), p_49), 248UL)))) , &g_9);
    }
    else
    {
        int *l_104 = (void*)0;
        int **l_105 = &g_102;
        (*l_105) = l_104;
    }
    return g_69[4][1];
}







static unsigned short func_62(unsigned p_63, short p_64)
{
    struct S0 *l_72 = &g_71;
    (*l_72) = g_71;
    return p_64;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_58[i], "g_58[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_69[i][j].f0, "g_69[i][j].f0", print_hash_value);
            transparent_crc(g_69[i][j].f1, "g_69[i][j].f1", print_hash_value);
            transparent_crc(g_69[i][j].f2, "g_69[i][j].f2", print_hash_value);
            transparent_crc(g_69[i][j].f3, "g_69[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    transparent_crc(g_71.f3, "g_71.f3", print_hash_value);
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_73.f2, "g_73.f2", print_hash_value);
    transparent_crc(g_73.f3, "g_73.f3", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_74.f2, "g_74.f2", print_hash_value);
    transparent_crc(g_74.f3, "g_74.f3", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_84.f3, "g_84.f3", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_103[i][j], "g_103[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_114.f2, "g_114.f2", print_hash_value);
    transparent_crc(g_114.f3, "g_114.f3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_121[i].f0, "g_121[i].f0", print_hash_value);
        transparent_crc(g_121[i].f1, "g_121[i].f1", print_hash_value);
        transparent_crc(g_121[i].f2, "g_121[i].f2", print_hash_value);
        transparent_crc(g_121[i].f3, "g_121[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_165.f1, "g_165.f1", print_hash_value);
    transparent_crc(g_165.f2, "g_165.f2", print_hash_value);
    transparent_crc(g_165.f3, "g_165.f3", print_hash_value);
    transparent_crc(g_199.f0, "g_199.f0", print_hash_value);
    transparent_crc(g_199.f1, "g_199.f1", print_hash_value);
    transparent_crc(g_199.f2, "g_199.f2", print_hash_value);
    transparent_crc(g_199.f3, "g_199.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_213[i][j][k], "g_213[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_218.f0, "g_218.f0", print_hash_value);
    transparent_crc(g_218.f1, "g_218.f1", print_hash_value);
    transparent_crc(g_218.f2, "g_218.f2", print_hash_value);
    transparent_crc(g_218.f3, "g_218.f3", print_hash_value);
    transparent_crc(g_241.f0, "g_241.f0", print_hash_value);
    transparent_crc(g_241.f1, "g_241.f1", print_hash_value);
    transparent_crc(g_241.f2, "g_241.f2", print_hash_value);
    transparent_crc(g_241.f3, "g_241.f3", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_247.f0, "g_247.f0", print_hash_value);
    transparent_crc(g_247.f1, "g_247.f1", print_hash_value);
    transparent_crc(g_247.f2, "g_247.f2", print_hash_value);
    transparent_crc(g_247.f3, "g_247.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
