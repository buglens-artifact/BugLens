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
   signed f0 : 25;
   signed f1 : 12;
   unsigned f2 : 31;
   signed f3 : 14;
   unsigned f4 : 7;
   unsigned f5 : 4;
   signed f6 : 19;
   unsigned f7 : 26;
};

struct S1 {
   unsigned f0;
   const unsigned f1;
   unsigned short f2;
   char f3;
};

union U2 {
   char * const f0;
   struct S1 f1;
   short f2;
};


static char g_3 = (-8L);
static char *g_2 = &g_3;
static int g_5 = 0L;
static const struct S0 *g_16 = (void*)0;
static struct S0 g_50 = {2082,50,20925,-20,9,1,104,2113};
static const struct S1 g_52 = {0UL,4294967295UL,1UL,0xBDL};
static unsigned g_68 = 0xEB95E994L;
static const struct S0 g_75[2][6][4] = {{{{-2257,-26,27104,41,3,0,-395,6923},{-1578,-34,44786,71,2,0,84,1468},{953,-24,25458,109,2,1,331,8043},{-524,-28,8037,23,1,2,-411,1167}},{{-1578,-34,44786,71,2,0,84,1468},{1650,-62,45122,-52,8,2,-142,24},{-2257,-26,27104,41,3,0,-395,6923},{4262,-16,12132,63,9,0,672,3003}},{{2914,-36,40423,106,2,0,-296,7858},{4112,25,39586,-17,6,0,73,7302},{-1451,29,32411,34,3,2,-606,6146},{4112,25,39586,-17,6,0,73,7302}},{{-5431,-3,29114,-27,3,0,-125,4368},{-1577,-16,12066,-32,1,0,299,4836},{-524,-28,8037,23,1,2,-411,1167},{2888,-21,2390,-59,5,3,-133,4773}},{{-5091,-16,28585,-10,10,1,84,4414},{4050,23,5640,87,1,2,77,3165},{-2359,53,45404,12,0,3,-237,363},{2487,-57,22073,89,1,3,-85,6762}},{{-1451,29,32411,34,3,2,-606,6146},{-2399,-3,45129,-24,9,2,666,5690},{773,12,8685,-71,1,2,-82,4782},{-2257,-26,27104,41,3,0,-395,6923}}},{{{-1451,29,32411,34,3,2,-606,6146},{953,-24,25458,109,2,1,331,8043},{-2359,53,45404,12,0,3,-237,363},{-1578,-34,44786,71,2,0,84,1468}},{{-5091,-16,28585,-10,10,1,84,4414},{-2257,-26,27104,41,3,0,-395,6923},{-524,-28,8037,23,1,2,-411,1167},{2914,-36,40423,106,2,0,-296,7858}},{{-5431,-3,29114,-27,3,0,-125,4368},{-1451,29,32411,34,3,2,-606,6146},{-1451,29,32411,34,3,2,-606,6146},{-5431,-3,29114,-27,3,0,-125,4368}},{{2914,-36,40423,106,2,0,-296,7858},{-524,-28,8037,23,1,2,-411,1167},{-2257,-26,27104,41,3,0,-395,6923},{-5091,-16,28585,-10,10,1,84,4414}},{{-1578,-34,44786,71,2,0,84,1468},{-2359,53,45404,12,0,3,-237,363},{953,-24,25458,109,2,1,331,8043},{-1451,29,32411,34,3,2,-606,6146}},{{-2257,-26,27104,41,3,0,-395,6923},{773,12,8685,-71,1,2,-82,4782},{-1578,-34,44786,71,2,0,84,1468},{953,-24,25458,109,2,1,331,8043}}}};
static struct S1 g_85[6][9] = {{{4294967291UL,1UL,0x5EA2L,0L},{0UL,4294967286UL,0x7D79L,0x7EL},{4294967291UL,1UL,0x5EA2L,0L},{0x5EF69CA3L,5UL,0x4D1AL,-1L},{0x12889EA8L,0xACB108F1L,0xC704L,0x08L},{4294967288UL,0x0FC580C8L,0x66A0L,-1L},{0x4C604A0AL,0xE2E08AAFL,1UL,0xF5L},{0x4C604A0AL,0xE2E08AAFL,1UL,0xF5L},{4294967288UL,0x0FC580C8L,0x66A0L,-1L}},{{4294967293UL,0x3099FFC3L,65535UL,-1L},{4294967293UL,0UL,0x3370L,0L},{4294967295UL,0x7552BDADL,9UL,0x49L},{4294967293UL,0UL,0x3370L,0L},{4294967293UL,0x3099FFC3L,65535UL,-1L},{4294967295UL,4294967290UL,65533UL,0xA6L},{0xEB65092CL,0x5C1CA509L,0x78A6L,0L},{1UL,0UL,0x258BL,0x0FL},{1UL,0UL,0x258BL,0x0FL}},{{1UL,0x45B5AAB8L,0x2B49L,1L},{4294967293UL,0x8FB60584L,65535UL,0xC3L},{4294967288UL,0x0FC580C8L,0x66A0L,-1L},{0x5EF69CA3L,5UL,0x4D1AL,-1L},{4294967288UL,0x0FC580C8L,0x66A0L,-1L},{4294967293UL,0x8FB60584L,65535UL,0xC3L},{1UL,0x45B5AAB8L,0x2B49L,1L},{0x12889EA8L,0xACB108F1L,0xC704L,0x08L},{0x7298EAA4L,0xE95938E4L,0xD0B2L,-7L}},{{1UL,0UL,0x9781L,1L},{0UL,3UL,0xA36DL,0xAEL},{4294967293UL,0UL,0x3370L,0L},{4294967295UL,4294967290UL,65533UL,0xA6L},{1UL,6UL,65532UL,1L},{4294967295UL,4294967290UL,65533UL,0xA6L},{4294967293UL,0UL,0x3370L,0L},{0UL,3UL,0xA36DL,0xAEL},{1UL,0UL,0x9781L,1L}},{{4294967293UL,0x8FB60584L,65535UL,0xC3L},{0UL,0x879DC8EDL,0x4977L,9L},{0x4C604A0AL,0xE2E08AAFL,1UL,0xF5L},{0x12889EA8L,0xACB108F1L,0xC704L,0x08L},{0x2DCAAD51L,4294967292UL,0x03D5L,0xA4L},{4294967288UL,0x0FC580C8L,0x66A0L,-1L},{0x2DCAAD51L,4294967292UL,0x03D5L,0xA4L},{0x12889EA8L,0xACB108F1L,0xC704L,0x08L},{0x4C604A0AL,0xE2E08AAFL,1UL,0xF5L}},{{0xEB65092CL,0x5C1CA509L,0x78A6L,0L},{0xEB65092CL,0x5C1CA509L,0x78A6L,0L},{0x7FE76C90L,0x85843D7DL,0x579EL,1L},{4294967295UL,0x7552BDADL,9UL,0x49L},{0UL,3UL,0xA36DL,0xAEL},{1UL,0UL,0x258BL,0x0FL},{1UL,0UL,0x9781L,1L},{1UL,0UL,0x258BL,0x0FL},{0UL,3UL,0xA36DL,0xAEL}}};
static int g_87 = 1L;
static union U2 g_90[8] = {{0},{0},{0},{0},{0},{0},{0},{0}};
static struct S0 g_105 = {-3873,-11,739,-72,0,2,-378,4043};
static struct S1 g_107 = {0UL,9UL,0xC651L,-1L};
static union U2 **g_123 = (void*)0;
static struct S1 *g_136 = (void*)0;
static struct S1 **g_135 = &g_136;
static int *g_155 = &g_5;
static const struct S0 *g_156 = &g_50;
static int g_263 = 0xB942FDE6L;
static int *g_262[1] = {&g_263};
static struct S0 ***g_320 = (void*)0;
static union U2 g_368 = {0};
static unsigned g_403 = 4294967295UL;
static union U2 g_409 = {0};
static union U2 **g_410 = (void*)0;
static const int *g_487 = &g_5;
static int g_560 = (-9L);
static struct S0 *g_573 = &g_50;
static const int g_612 = 6L;
static unsigned short g_688 = 0UL;
static int *g_692 = &g_263;
static union U2 g_775[6][10] = {{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}};
static union U2 g_794 = {0};
static union U2 *g_793[4] = {&g_90[6],&g_90[6],&g_90[6],&g_90[6]};



static unsigned char func_1(void);
static struct S0 * func_7(struct S1 p_8, const char p_9);
static struct S1 func_10(const struct S0 * p_11, unsigned p_12, char * p_13, unsigned char p_14, unsigned short p_15);
static unsigned char func_18(union U2 p_19, char p_20, struct S1 p_21);
static struct S1 func_23(short p_24);
static unsigned char func_26(struct S0 p_27, int * p_28, union U2 p_29, int p_30);
static struct S0 func_31(char p_32, char * p_33, struct S1 p_34, struct S0 * p_35);
static unsigned char func_38(const char p_39, unsigned char p_40);
static short func_41(char * p_42, unsigned p_43);
static char * func_44(int p_45, struct S0 * p_46, short p_47, const struct S1 p_48);
static unsigned char func_1(void)
{
    int *l_4[1][2][10] = {{{(void*)0,(void*)0,&g_5,(void*)0,(void*)0,&g_5,(void*)0,(void*)0,&g_5,(void*)0},{(void*)0,&g_5,&g_5,(void*)0,&g_5,&g_5,(void*)0,&g_5,&g_5,(void*)0}}};
    short l_6 = (-1L);
    unsigned char l_17 = 253UL;
    union U2 l_22 = {0};
    struct S0 *l_49 = &g_50;
    char *l_623 = &g_107.f3;
    struct S1 *l_741 = &g_85[3][0];
    union U2 *l_792[8][10] = {{&g_90[0],(void*)0,&g_775[3][3],&g_409,&g_775[3][6],&g_775[2][4],&g_775[3][6],&g_409,&g_775[3][3],(void*)0},{&g_90[0],(void*)0,&g_775[3][3],&g_409,&g_775[3][6],&g_775[2][4],&g_775[3][6],&g_409,&g_775[3][3],(void*)0},{&g_90[0],(void*)0,&g_775[3][3],&g_409,&g_775[3][6],&g_775[2][4],&g_775[3][6],&g_409,&g_775[3][3],(void*)0},{&g_90[0],(void*)0,&g_775[3][3],&g_409,&g_775[3][6],&g_775[2][4],&g_775[3][6],&g_409,&g_775[3][3],(void*)0},{&g_90[0],(void*)0,&g_409,&g_368,&g_775[3][3],&g_90[0],&g_775[3][3],&g_368,&g_409,&g_409},{&g_775[0][4],&g_409,&g_409,&g_368,&g_775[3][3],&g_90[0],&g_775[3][3],&g_368,&g_409,&g_409},{&g_775[0][4],&g_409,&g_409,&g_368,&g_775[3][3],&g_90[0],&g_775[3][3],&g_368,&g_409,&g_409},{&g_775[0][4],&g_409,&g_409,&g_368,&g_775[3][3],&g_90[0],&g_775[3][3],&g_368,&g_409,&g_409}};
    short l_814 = 0x8714L;
    int l_826 = 0x9F3252BFL;
    unsigned char l_842 = 0xA3L;
    int i, j, k;
    g_5 = (g_2 != (void*)0);
    if (l_6)
    {
        unsigned l_25 = 0x83E3585CL;
        struct S0 *l_51 = &g_50;
        struct S1 l_214[3][3] = {{{4294967295UL,0xC8A921B7L,0xAA1CL,1L},{4294967295UL,0xC8A921B7L,0xAA1CL,1L},{4294967295UL,0xC8A921B7L,0xAA1CL,1L}},{{4294967295UL,0xC8A921B7L,0xAA1CL,1L},{4294967295UL,0xC8A921B7L,0xAA1CL,1L},{4294967295UL,0xC8A921B7L,0xAA1CL,1L}},{{4294967295UL,0xC8A921B7L,0xAA1CL,1L},{4294967295UL,0xC8A921B7L,0xAA1CL,1L},{4294967295UL,0xC8A921B7L,0xAA1CL,1L}}};
        union U2 l_264 = {0};
        int i, j;
        l_49 = func_7(func_10(g_16, l_17, &g_3, func_18(l_22, (*g_2), func_23(((l_25 | (func_26(func_31((safe_mod_func_uint8_t_u_u(func_38((func_41(func_44(g_5, l_49, (l_51 != &g_50), g_52), g_105.f4) > 0UL), g_75[1][2][0].f3), (*g_2))), &g_3, l_214[1][1], l_51), g_262[0], l_264, l_214[1][1].f3) && l_25)) > 0x66E15D45L))), g_52.f3), l_214[1][1].f1);

        ;
        ;


        ;

        ;
        ;
    }
    else
    {
        short l_627 = 0x0EA8L;
        struct S0 l_636 = {-5434,4,38701,-92,4,1,701,1157};
        union U2 l_653 = {0};
        int *l_662 = (void*)0;
        char *l_686 = &g_85[3][4].f3;
        for (g_560 = 0; (g_560 >= 0); g_560 -= 1)
        {
            int **l_631 = (void*)0;
            int ***l_630 = &l_631;
            char l_645 = 0L;
            int l_649 = 0x59FCB552L;
            union U2 l_650 = {0};
            unsigned l_659 = 0xC5F3B9D3L;
            struct S0 *l_675 = (void*)0;
            char l_689[4][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}};
            int i, j;
            for (l_6 = 0; (l_6 <= 0); l_6 += 1)
            {
                unsigned short l_632 = 0x2B09L;
                struct S0 l_635 = {5700,-53,1019,87,9,2,570,4746};
                char *l_644[9] = {&g_107.f3,&g_107.f3,&g_107.f3,&g_107.f3,&g_107.f3,&g_107.f3,&g_107.f3,&g_107.f3,&g_107.f3};
                struct S1 l_647 = {4294967295UL,6UL,4UL,0x49L};
                int i;
            }
            for (l_17 = 0; (l_17 <= 0); l_17 += 1)
            {
                int **l_663 = &l_662;
                struct S1 *l_664[4];
                struct S0 l_665 = {5675,52,29656,-44,7,3,-230,7444};
                int i;
                for (i = 0; i < 4; i++)
                    l_664[i] = &g_107;
                (*l_663) = l_4[0][0][5];

                ;
                (*g_135) = l_664[3];

                ;
                for (g_107.f2 = 0; (g_107.f2 <= 0); g_107.f2 += 1)
                {
                    int l_666 = 0x09CA458DL;
                    union U2 l_669 = {0};
                    struct S0 *l_674 = &l_636;
                    union U2 l_676 = {0};
                    int i, j, k;
                    (*g_573) = l_665;
                    if (l_666)
                        break;
                    (*g_155) = (*g_155);
                    if ((safe_rshift_func_uint8_t_u_s(((0x48E6L || func_26((*g_573), &g_87, l_669, (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_666, (*g_2))), 15)))) & (*g_487)), 3)))
                    {
                        int i, j, k;
                        l_675 = l_674;

                        ;
                        (*g_155) = (-3L);
                    }
                    else
                    {
                        unsigned char l_687 = 254UL;
                        (*l_663) = &g_87;

                        ;
                        (*l_663) = (*l_663);
                        (*g_155) = ((func_26(l_665, &g_87, l_676, (safe_rshift_func_int16_t_s_s(((0xE96FL & (**l_663)) < (safe_add_func_int16_t_s_s(((((safe_unary_minus_func_uint8_t_u(((safe_add_func_uint8_t_u_u(0x51L, ((safe_add_func_int16_t_s_s(func_41(l_686, l_687), l_687)) ^ g_105.f2))) != g_50.f0))) != l_687) && l_687) == g_688), g_52.f1))), l_689[2][3]))) == 0xA56FL) ^ l_687);
                    }
                }

                ;
            }

            ;
        }

        ;
        ;
        ;
        for (g_560 = 0; (g_560 > 25); g_560 = safe_add_func_uint8_t_u_u(g_560, 5))
        {
            const unsigned l_708 = 9UL;
            char **l_711 = &l_686;
            union U2 *l_714[9] = {&g_90[0],&g_368,&g_90[0],&g_90[0],&g_368,&g_90[0],&g_90[0],&g_368,&g_90[0]};
            int *l_718[5] = {&g_87,&g_87,&g_87,&g_87,&g_87};
            struct S0 l_721 = {-2203,2,13028,101,7,2,-340,1998};
            int **l_743[6][9] = {{&l_718[2],&g_262[0],&l_4[0][0][4],&g_262[0],&l_718[2],&g_262[0],&l_4[0][0][4],&g_262[0],&l_718[2]},{&l_718[4],(void*)0,(void*)0,&l_718[4],&l_718[3],&g_155,&g_155,&l_718[3],&l_718[4]},{&g_692,&g_262[0],&g_692,&l_718[3],&g_692,&g_262[0],&g_692,&l_718[3],&g_692},{&l_718[4],&l_718[4],&g_155,(void*)0,&l_718[3],&l_718[3],(void*)0,&g_155,&l_718[4]},{&l_718[2],&l_718[3],&l_4[0][0][4],&l_718[3],&l_718[2],&l_718[3],&l_4[0][0][4],&l_718[3],&l_718[2]},{&l_718[3],(void*)0,&g_155,&l_718[4],&l_718[4],&g_155,(void*)0,&l_718[3],&l_718[3]}};
            int l_746 = (-8L);
            int i, j;
            g_692 = &g_263;

            ;
            for (g_5 = 6; (g_5 != (-3)); g_5 = safe_sub_func_int32_t_s_s(g_5, 1))
            {
                int l_696[8][3] = {{0xD9887730L,0x79140259L,0xD9887730L},{0xEA8D6AF2L,0x9B181F79L,0x9B181F79L},{0L,0x79140259L,0L},{0xEA8D6AF2L,0xEA8D6AF2L,0x9B181F79L},{0xD9887730L,0x79140259L,0xD9887730L},{0xEA8D6AF2L,0x9B181F79L,0x9B181F79L},{0L,0x79140259L,0L},{0xEA8D6AF2L,0xEA8D6AF2L,0x9B181F79L}};
                unsigned l_699 = 0x5563D729L;
                unsigned l_716[5][7][7] = {{{0xF1569A3EL,0x33F5D77BL,0xB0437049L,4294967291UL,0xB0437049L,0x33F5D77BL,0xF1569A3EL},{0xF13436D9L,0UL,0xAFC32BCFL,1UL,0x217B63F5L,0xAFC32BCFL,4294967289UL},{0x3D21C64AL,0x78D2C7B7L,0UL,0x78D2C7B7L,0x3D21C64AL,4294967295UL,0UL},{0x217B63F5L,1UL,0xAFC32BCFL,0UL,0xF13436D9L,4294967295UL,4294967289UL},{0xC7C63B90L,1UL,0xC7C63B90L,4294967295UL,0xB0437049L,0x0678E561L,0xC7C63B90L},{1UL,4294967289UL,0UL,1UL,0xF13436D9L,0x035AE773L,0xAFC32BCFL},{4294967293UL,0x0678E561L,0UL,1UL,4UL,0x0678E561L,4294967292UL}},{{4294967295UL,1UL,0UL,0UL,1UL,4294967295UL,0x7DD31D18L},{0xB0437049L,0x33F5D77BL,0xF1569A3EL,1UL,0xB0437049L,0x78D2C7B7L,0xB0437049L},{0xF13436D9L,0UL,0x7DD31D18L,1UL,0x6136BFEDL,0x7DD31D18L,4294967289UL},{4UL,0x33F5D77BL,0UL,4294967295UL,4294967293UL,4294967295UL,0UL},{1UL,1UL,0x035AE773L,4294967289UL,0xF13436D9L,7UL,4294967289UL},{0xB0437049L,0x0678E561L,0xC7C63B90L,0x33F5D77BL,0xC7C63B90L,0x0678E561L,0xB0437049L},{0x6136BFEDL,4294967289UL,0UL,0x6136BFEDL,0xF13436D9L,0x7DD31D18L,0x7DD31D18L}},{{4294967293UL,1UL,0UL,1UL,4294967293UL,4294967291UL,4294967292UL},{0xF13436D9L,0x6136BFEDL,0UL,4294967289UL,0x6136BFEDL,4294967295UL,0xAFC32BCFL},{0xC7C63B90L,0x33F5D77BL,0xC7C63B90L,0x0678E561L,0xB0437049L,4294967295UL,0xC7C63B90L},{0xF13436D9L,4294967289UL,0x035AE773L,1UL,1UL,0x035AE773L,4294967289UL},{4294967293UL,4294967295UL,0UL,0x33F5D77BL,4UL,4294967295UL,4294967292UL},{0x6136BFEDL,1UL,0x7DD31D18L,0UL,0xF13436D9L,4294967295UL,0UL},{0xB0437049L,1UL,0xF1569A3EL,0x33F5D77BL,0xB0437049L,4294967291UL,0xB0437049L}},{{1UL,0UL,0UL,1UL,4294967295UL,0x7DD31D18L,0xAFC32BCFL},{4UL,1UL,0UL,0x0678E561L,4294967293UL,0x0678E561L,0UL},{0xF13436D9L,1UL,0UL,4294967289UL,1UL,7UL,0xAFC32BCFL},{0xB0437049L,4294967295UL,0xC7C63B90L,1UL,0xC7C63B90L,4294967295UL,0xB0437049L},{4294967295UL,4294967289UL,0x7DD31D18L,0x6136BFEDL,1UL,0x7DD31D18L,0UL},{4294967293UL,0x33F5D77BL,0UL,0x33F5D77BL,4294967293UL,0x78D2C7B7L,4294967292UL},{1UL,0x6136BFEDL,0x7DD31D18L,4294967289UL,4294967295UL,4294967295UL,4294967289UL}},{{0xC7C63B90L,1UL,0xC7C63B90L,4294967295UL,0xB0437049L,0x0678E561L,0xC7C63B90L},{1UL,4294967289UL,0UL,1UL,0xF13436D9L,0x035AE773L,0xAFC32BCFL},{4294967293UL,0x0678E561L,0UL,1UL,4UL,0x0678E561L,4294967292UL},{7UL,0x6136BFEDL,0UL,0UL,0x6136BFEDL,7UL,0x035AE773L},{0xC7C63B90L,4294967295UL,0xB0437049L,0x0678E561L,0xC7C63B90L,0x33F5D77BL,0xC7C63B90L},{4294967295UL,0UL,0x035AE773L,0x6136BFEDL,0x217B63F5L,0x035AE773L,0UL},{0x3D21C64AL,4294967295UL,0UL,0x78D2C7B7L,4UL,0x78D2C7B7L,0UL}}};
                int *l_730[10] = {&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5};
                int i, j, k;
                (*l_49) = (*l_49);
                if ((+0L))
                {
                    char *l_704 = &g_85[3][4].f3;
                    int *l_707 = &g_5;
                    union U2 **l_715 = &l_714[5];
                    if ((((-3L) & 1UL) != (*g_487)))
                    {
                        int **l_695 = &l_4[0][1][1];
                        (*l_695) = &g_87;
                        (*g_692) = ((l_696[2][2] && ((safe_lshift_func_int8_t_s_u(l_699, (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((void*)0 != l_686), 15)), ((~func_41(l_704, g_612)) | (((safe_rshift_func_uint16_t_u_s(((*g_2) == g_107.f2), 9)) || 0x37F7L) <= 5UL)))))) & l_696[2][2])) && l_708);
                        if ((*g_155))
                            continue;
                        (*g_692) = (safe_add_func_int32_t_s_s(0L, g_75[1][2][0].f1));
                    }
                    else
                    {
                        char ***l_712 = &l_711;
                        int **l_713[6][5][8] = {{{&g_262[0],&g_262[0],&g_262[0],&g_262[0],(void*)0,&g_692,&g_262[0],&g_692},{&g_262[0],&l_707,(void*)0,&l_707,&g_262[0],(void*)0,&g_262[0],&g_262[0]},{&g_692,&l_707,(void*)0,(void*)0,&l_707,&g_692,&g_262[0],&l_707},{&g_262[0],&g_262[0],(void*)0,&g_262[0],(void*)0,&g_262[0],&g_262[0],&g_692},{&l_707,&g_262[0],(void*)0,&g_262[0],&g_262[0],(void*)0,&g_262[0],&l_707}},{{&g_692,&g_262[0],&g_262[0],(void*)0,&g_262[0],(void*)0,&g_262[0],&g_262[0]},{&l_707,&g_262[0],&g_692,&l_707,(void*)0,(void*)0,&l_707,&g_692},{&g_262[0],&g_262[0],&l_707,&g_262[0],&g_262[0],&l_707,&g_262[0],&g_262[0]},{(void*)0,&g_262[0],(void*)0,&g_262[0],&g_262[0],&g_692,&g_692,&g_262[0]},{&g_262[0],&g_692,&g_692,&g_262[0],&g_262[0],(void*)0,&g_262[0],(void*)0}},{{&g_262[0],&g_262[0],&l_707,&g_262[0],&g_262[0],&l_707,&l_707,&l_707},{(void*)0,&g_262[0],&g_262[0],&g_262[0],&g_262[0],(void*)0,&g_692,&g_262[0]},{&l_707,&g_692,&g_262[0],&l_707,&g_262[0],&g_692,&l_707,(void*)0},{&g_262[0],&g_262[0],&l_707,&l_707,&l_707,&l_707,&g_262[0],&g_262[0]},{(void*)0,&l_707,&g_692,&g_262[0],&l_707,&g_262[0],&g_692,&l_707}},{{&g_262[0],&g_692,(void*)0,&g_262[0],&g_262[0],&g_262[0],&g_262[0],(void*)0},{&l_707,&l_707,&l_707,&g_262[0],&g_262[0],&l_707,&g_262[0],&g_262[0]},{(void*)0,&g_262[0],(void*)0,&g_262[0],&g_262[0],&g_692,&g_692,&g_262[0]},{&g_262[0],&g_692,&g_692,&g_262[0],&g_262[0],(void*)0,&g_262[0],(void*)0},{&g_262[0],(void*)0,&g_262[0],(void*)0,&g_262[0],&g_262[0],&g_692,&g_692}},{{&l_707,(void*)0,(void*)0,(void*)0,(void*)0,&l_707,(void*)0,(void*)0},{&g_692,(void*)0,(void*)0,&g_692,(void*)0,(void*)0,&g_692,&l_707},{(void*)0,&g_262[0],&g_262[0],&g_692,&g_692,&g_262[0],&g_262[0],(void*)0},{&l_707,&g_692,(void*)0,(void*)0,&g_692,(void*)0,(void*)0,&g_692},{(void*)0,(void*)0,&l_707,(void*)0,(void*)0,(void*)0,(void*)0,&l_707}},{{&g_692,&g_692,&g_262[0],&g_262[0],(void*)0,&g_262[0],(void*)0,&g_262[0]},{&l_707,&g_262[0],&l_707,(void*)0,&g_262[0],(void*)0,(void*)0,&g_262[0]},{&g_262[0],(void*)0,(void*)0,&g_262[0],(void*)0,&l_707,&g_262[0],&l_707},{&g_262[0],(void*)0,&g_262[0],(void*)0,&g_262[0],&g_262[0],&g_692,&g_692},{&l_707,(void*)0,(void*)0,(void*)0,(void*)0,&l_707,(void*)0,(void*)0}}};
                        int i, j, k;
                        (*l_712) = l_711;
                        l_4[0][1][3] = &g_263;
                    }
                    (*l_715) = l_714[5];
                }
                else
                {
                    int l_717[1];
                    union U2 l_731 = {0};
                    int l_732 = 0xE4971726L;
                    struct S0 ** const l_734 = &g_573;
                    int **l_737 = &l_4[0][0][4];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_717[i] = 0xA533BEC1L;
                    if (l_717[0])
                    {
                        union U2 l_722 = {0};
                        struct S0 l_729 = {-2864,-6,6648,21,1,0,-84,5658};
                        short l_733 = (-5L);
                        l_718[3] = &g_87;
                        (*g_573) = (*g_156);
                        (*g_692) = ((safe_add_func_uint32_t_u_u(((func_26(l_721, &g_263, l_722, (safe_sub_func_uint8_t_u_u((func_41(&g_3, g_75[1][2][0].f1) ^ (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(l_729.f4, 6)), 3))), l_729.f2))) || g_105.f7) && l_732), g_612)) != l_733);
                    }
                    else
                    {
                        struct S0 **l_736 = &l_49;
                        struct S0 ***l_735 = &l_736;
                        int ***l_738 = (void*)0;
                        int ***l_739 = (void*)0;
                        int ***l_740 = &l_737;
                        const int **l_742 = &g_487;
                        (*l_735) = l_734;

                        ;
                        (*l_740) = l_737;
                        (*g_135) = l_741;

                        ;
                        (*l_742) = &g_612;

                        ;
                    }
                    (*l_737) = l_662;
                }
            }
            g_692 = l_4[0][1][4];

            ;
            l_746 = (func_41(l_623, g_50.f2) ^ (safe_lshift_func_int8_t_s_s(0x17L, 3)));
        }


        ;
        ;
        ;
        return g_3;
    }

    ;
    ;


    ;

    ;
    if ((g_52.f0 ^ 1L))
    {
        union U2 l_751 = {0};
        union U2 l_754 = {0};
        struct S0 l_759 = {-2785,-45,32549,85,9,1,172,1289};
        int * const l_778[5] = {&g_5,&g_5,&g_5,&g_5,&g_5};
        char **l_780[8][6][5] = {{{&l_623,(void*)0,(void*)0,(void*)0,&g_2},{&g_2,&g_2,(void*)0,&g_2,(void*)0},{&l_623,(void*)0,&g_2,&l_623,(void*)0},{(void*)0,&l_623,&l_623,(void*)0,&g_2},{&g_2,(void*)0,&g_2,(void*)0,(void*)0},{&l_623,&g_2,&l_623,&g_2,&g_2}},{{(void*)0,&g_2,&l_623,&l_623,&g_2},{&g_2,&l_623,&l_623,&l_623,&l_623},{&g_2,&g_2,(void*)0,&l_623,&l_623},{&g_2,(void*)0,&g_2,&l_623,&l_623},{(void*)0,&l_623,&g_2,&l_623,&l_623},{&g_2,&g_2,&g_2,&g_2,&g_2}},{{&g_2,&l_623,&l_623,(void*)0,&l_623},{&g_2,(void*)0,&g_2,&g_2,(void*)0},{(void*)0,(void*)0,&g_2,&l_623,&g_2},{&l_623,&l_623,(void*)0,(void*)0,&l_623},{&g_2,&g_2,&l_623,(void*)0,&l_623},{(void*)0,&g_2,(void*)0,&l_623,(void*)0}},{{&l_623,&g_2,(void*)0,(void*)0,&l_623},{&g_2,&g_2,&l_623,&l_623,&g_2},{(void*)0,(void*)0,&g_2,(void*)0,&l_623},{&l_623,&l_623,&g_2,&l_623,&l_623},{&l_623,&g_2,(void*)0,&g_2,&g_2},{(void*)0,&l_623,(void*)0,(void*)0,&l_623}},{{&l_623,&l_623,&l_623,&g_2,&g_2},{(void*)0,&l_623,&g_2,&l_623,&l_623},{&l_623,&l_623,&l_623,&g_2,&g_2},{(void*)0,&g_2,(void*)0,(void*)0,&l_623},{&g_2,(void*)0,(void*)0,&g_2,&l_623},{&g_2,(void*)0,&g_2,&g_2,(void*)0}},{{(void*)0,&l_623,&g_2,&g_2,&g_2},{&l_623,&g_2,&l_623,(void*)0,(void*)0},{&l_623,&l_623,&l_623,&l_623,(void*)0},{&l_623,(void*)0,(void*)0,&l_623,&g_2},{&g_2,&l_623,(void*)0,(void*)0,&g_2},{&l_623,&l_623,&g_2,&g_2,&g_2}},{{&l_623,&l_623,&l_623,&g_2,&g_2},{&g_2,&l_623,&g_2,&g_2,&g_2},{(void*)0,(void*)0,&g_2,(void*)0,(void*)0},{(void*)0,&l_623,&g_2,&l_623,&l_623},{&g_2,(void*)0,&g_2,&g_2,(void*)0},{&g_2,&l_623,&g_2,&l_623,&l_623}},{{&g_2,&g_2,(void*)0,&g_2,(void*)0},{&l_623,(void*)0,&l_623,&l_623,&l_623},{&l_623,&g_2,&g_2,&l_623,&l_623},{&l_623,&g_2,&l_623,&g_2,&l_623},{&g_2,&g_2,&g_2,&l_623,(void*)0},{&l_623,&l_623,&l_623,&g_2,&g_2}}};
        struct S0 **l_786 = &l_49;
        int *l_799 = (void*)0;
        int i, j, k;
        for (g_403 = 16; (g_403 > 54); ++g_403)
        {
            unsigned char l_755 = 0x61L;
            unsigned l_762 = 4294967295UL;
            unsigned char l_763 = 0xA6L;
            struct S0 l_770 = {94,-61,36877,-7,8,1,199,4451};
            int **l_781 = &g_262[0];
            for (g_68 = (-19); (g_68 >= 20); g_68++)
            {
                struct S1 l_758 = {0xF28DB00BL,4294967295UL,0x75E6L,0xF5L};
                unsigned short l_767 = 0x2E44L;
                int *l_779 = &g_5;
                (*g_692) = func_18(l_751, (safe_sub_func_int16_t_s_s(func_18(l_754, l_755, func_23(g_75[1][2][0].f1)), ((safe_lshift_func_int16_t_s_u((func_41(g_2, func_41(g_2, g_68)) ^ g_85[3][4].f1), 11)) && l_755))), l_758);

                ;
                ;
                l_759 = (*g_156);
                if ((safe_sub_func_uint16_t_u_u(l_762, l_763)))
                {
                    unsigned l_766 = 1UL;
                    struct S0 l_771 = {-1463,4,33669,19,8,3,409,7867};
                    int *l_772[1][9][9] = {{{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5}}};
                    union U2 *l_773 = (void*)0;
                    int i, j, k;
                    if (((safe_sub_func_int32_t_s_s(l_766, l_767)) || ((g_5 != ((&g_135 == &g_135) > (safe_sub_func_uint32_t_u_u(((l_623 == (void*)0) != l_766), l_758.f0)))) && 0xCBL)))
                    {
                        l_771 = l_770;
                        l_772[0][5][6] = &g_87;


                        return g_612;
                    }
                    else
                    {
                        union U2 *l_774 = &g_775[3][3];
                        int *l_776 = &g_87;
                        int **l_777 = &l_772[0][4][8];
                        l_774 = l_773;

                        ;
                        if (l_755)
                            break;
                        (*l_777) = l_776;


                        (*g_692) = l_759.f2;
                    }


                }
                else
                {
                    l_779 = l_778[1];
                    (*l_779) = (g_560 < (&g_2 == l_780[7][4][4]));
                }

            }

            ;
            ;
            (*g_692) = (7L == l_763);
            (*g_692) = 0x2061987BL;
            (*l_781) = &g_87;
        }

        ;
        ;
        if ((safe_mod_func_uint16_t_u_u((g_688 >= g_50.f5), 0xDC1CL)))
        {
            const int **l_785 = (void*)0;
            const int ***l_784 = &l_785;
            struct S0 ***l_787 = (void*)0;
            struct S0 ***l_788[8] = {&l_786,&l_786,&l_786,&l_786,&l_786,&l_786,&l_786,&l_786};
            int i;
            (*l_784) = &g_487;

            ;
            l_786 = l_786;
        }
        else
        {
            unsigned l_791 = 4294967295UL;
            struct S0 l_795 = {3444,-4,28,7,9,3,-590,7719};
            int *l_796 = &g_5;
            struct S0 l_801 = {4696,22,23925,-79,7,3,670,935};
            for (g_3 = (-18); (g_3 > (-21)); g_3 = safe_sub_func_uint16_t_u_u(g_3, 1))
            {
                (*g_692) = l_791;
            }
            g_793[3] = l_792[3][0];


            for (l_791 = 0; (l_791 <= 4); l_791 += 1)
            {
                char l_800 = 0x95L;
                int l_802 = 8L;
                l_795 = (*g_156);
                for (g_5 = 0; (g_5 <= 3); g_5 += 1)
                {
                    int i;
                    if ((*g_692))
                    {
                        int **l_797 = (void*)0;
                        int **l_798[8] = {&g_692,&g_692,&g_692,&g_692,&g_692,&g_692,&g_692,&g_692};
                        int i;
                        l_799 = l_796;

                        ;
                        if (l_800)
                            break;
                    }
                    else
                    {
                        (*g_692) = 0x94493434L;
                    }
                    (*g_573) = l_801;
                    (*g_692) = l_802;
                    g_793[g_5] = &l_22;
                    for (g_560 = 3; (g_560 >= 0); g_560 -= 1)
                    {
                        const int *l_803 = &g_263;
                        int **l_804 = &g_155;
                        int i, j, k;
                        l_803 = &g_612;

                        ;
                        (*l_804) = l_796;

                        ;
                        (*g_573) = l_795;
                        l_780[(l_791 + 1)][l_791][g_560] = l_780[(l_791 + 3)][(g_560 + 1)][l_791];
                    }
                }
            }

            ;
        }


        ;
    }
    else
    {
        unsigned short l_807 = 1UL;
        char *l_815 = &g_85[3][4].f3;
        struct S0 *l_816 = &g_50;
        unsigned short l_823 = 9UL;
        int l_838 = 0xBAFB4520L;
        (*l_816) = (*l_816);
        if ((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_823, ((safe_rshift_func_int16_t_s_s(l_807, g_87)) <= (l_826 && g_87)))), (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(g_688, 7)), 7)))), ((safe_sub_func_uint32_t_u_u((&l_816 != &g_573), l_807)) || l_823))))
        {
            int **l_836 = &g_262[0];
            const struct S0 l_837 = {-2811,-0,28540,54,0,1,-391,7150};
            for (l_823 = 0; (l_823 <= 0); l_823 += 1)
            {
                struct S0 **l_834[4] = {&l_49,&l_49,&l_49,&l_49};
                struct S0 ***l_833 = &l_834[1];
                int i;
                (*l_833) = (void*)0;


                for (g_68 = 0; (g_68 <= 3); g_68 += 1)
                {
                    for (g_403 = 0; (g_403 <= 0); g_403 += 1)
                    {
                        int **l_835 = &l_4[0][0][2];
                        int i, j, k;
                        l_4[g_403][l_823][(g_403 + 6)] = &l_826;
                        (*l_835) = &g_87;
                    }
                }


                return g_75[1][2][0].f2;
            }
            (*l_836) = &g_263;
            (*l_816) = l_837;
        }
        else
        {
            const struct S1 l_839 = {0x44D6F5F6L,0x14D3BA29L,0x8DFAL,0xFEL};
            (*g_573) = (*g_156);
        }
        for (l_17 = 5; (l_17 <= 29); l_17 = safe_add_func_uint32_t_u_u(l_17, 9))
        {
            (*g_573) = (*g_156);
        }
    }


    return l_842;


}







static struct S0 * func_7(struct S1 p_8, const char p_9)
{
    struct S0 *l_506 = &g_105;
    const int **l_519[6][2][5] = {{{&g_487,&g_487,&g_487,&g_487,&g_487},{&g_487,&g_487,&g_487,&g_487,&g_487}},{{&g_487,&g_487,&g_487,&g_487,&g_487},{&g_487,&g_487,&g_487,&g_487,&g_487}},{{&g_487,&g_487,&g_487,&g_487,&g_487},{&g_487,&g_487,&g_487,&g_487,&g_487}},{{&g_487,&g_487,&g_487,&g_487,&g_487},{&g_487,&g_487,&g_487,&g_487,&g_487}},{{&g_487,&g_487,&g_487,&g_487,&g_487},{&g_487,&g_487,&g_487,&g_487,&g_487}},{{&g_487,&g_487,&g_487,&g_487,&g_487},{&g_487,&g_487,&g_487,&g_487,&g_487}}};
    int l_520 = 0x4D92D033L;
    struct S1 l_540 = {8UL,9UL,65535UL,0x90L};
    union U2 *l_569 = &g_368;
    union U2 **l_568 = &l_569;
    int l_616 = 0L;
    int *l_622 = &g_87;
    int i, j, k;
    (*l_506) = (*g_156);
    if ((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((255UL != p_8.f3), ((((void*)0 == g_320) >= (g_52.f2 != 65535UL)) < g_107.f0))), 1)))
    {
        struct S0 *l_518 = &g_105;
        int *l_521 = &g_87;
        char *l_530 = &g_107.f3;
        union U2 l_545 = {0};
        int *l_574 = &g_5;
        for (p_8.f3 = 0; (p_8.f3 < (-2)); p_8.f3--)
        {
            unsigned short l_517 = 5UL;
            char l_525[2][10] = {{0x16L,0L,0x16L,0x16L,0L,0x16L,0x16L,0L,0x16L,0x16L},{0L,0L,1L,0L,0L,1L,0L,0L,1L,0L}};
            struct S0 *l_541 = (void*)0;
            int *l_547 = &g_87;
            union U2 l_553[6][4][6] = {{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}}};
            int l_565 = 0x854FDF01L;
            int i, j, k;
            for (g_68 = 0; (g_68 == 43); ++g_68)
            {
                for (g_3 = 0; (g_3 > 29); g_3 = safe_add_func_uint16_t_u_u(g_3, 3))
                {
                    return &g_105;


                }
            }
            if (p_8.f3)
            {
                int *l_522[5][3] = {{&g_87,&g_87,&g_87},{&g_263,&g_263,&g_263},{&g_87,&g_87,&g_87},{&g_263,&g_263,&g_263},{&g_87,&g_87,&g_87}};
                union U2 l_526 = {0};
                unsigned short l_527 = 65527UL;
                struct S0 l_531 = {-349,-31,21068,-13,10,2,257,3529};
                int i, j;
                if (p_8.f1)
                {
                    struct S1 **l_529 = &g_136;
                    int l_543 = 0L;
                    short l_546[7][8] = {{4L,0x9F7FL,4L,5L,4L,0x9F7FL,4L,5L},{4L,0x9F7FL,4L,5L,4L,0x9F7FL,4L,5L},{4L,0x9F7FL,4L,5L,4L,0x9F7FL,4L,5L},{4L,0x9F7FL,4L,5L,4L,0x9F7FL,4L,5L},{4L,0x9F7FL,4L,5L,4L,0x9F7FL,4L,5L},{4L,0x9F7FL,4L,5L,4L,0x9F7FL,4L,5L},{4L,0x9F7FL,4L,5L,4L,0x9F7FL,4L,5L}};
                    int i, j;
                    for (g_5 = 0; (g_5 >= 0); g_5 -= 1)
                    {
                        int i;
                        l_517 = p_8.f2;
                        return l_518;


                    }
                    l_520 = (g_50.f1 & ((void*)0 == l_519[0][0][4]));
                    l_522[4][0] = l_521;
                    if ((safe_mod_func_uint8_t_u_u((l_525[1][7] & p_9), func_18(l_526, (l_527 & (g_75[1][2][0].f7 & ((safe_unary_minus_func_int32_t_s((l_529 == &g_136))) != 0x0855L))), func_10(l_506, g_105.f1, l_530, g_50.f7, g_87)))))
                    {
                        (*l_506) = l_531;
                        g_50 = (*g_156);
                        return l_541;


                    }
                    else
                    {
                        char l_542 = 0x98L;
                        struct S1 **l_544 = &g_136;
                        (*l_521) = (0xA8L >= (((((l_542 || l_543) >= g_75[1][2][0].f1) != (((((p_9 ^ (p_8.f3 & ((func_26(l_531, l_522[1][2], l_545, l_517) == 0x2DL) > p_8.f0))) ^ p_9) != 0xE3C1L) != l_546[0][3]) < g_50.f0)) & p_8.f0) || 0x65L));

                        ;
                        g_262[0] = l_547;
                    }

                    ;
                    ;
                }
                else
                {
                    l_547 = &g_5;

                    ;
                    l_531 = (*l_518);
                    for (l_540.f0 = (-19); (l_540.f0 < 9); l_540.f0 = safe_add_func_int16_t_s_s(l_540.f0, 5))
                    {
                        if (p_8.f3)
                            break;
                    }
                }

                ;
                ;
                ;
                for (l_520 = 0; (l_520 <= 1); l_520 += 1)
                {
                    struct S0 l_552[1] = {{-1319,3,27011,104,8,0,198,3205}};
                    struct S1 l_570 = {0x646F6AEBL,9UL,0UL,1L};
                    int i, j;
                    if (l_525[l_520][l_520])
                        break;
                }


            }
            else
            {
                int l_572 = 3L;
                (*l_547) = p_9;
                if (l_572)
                    continue;
                return g_573;


            }

            ;
            ;

        }

        ;
        l_574 = l_574;
        for (l_540.f3 = 11; (l_540.f3 < 15); ++l_540.f3)
        {
            int **l_585 = (void*)0;
            unsigned char l_586[3][3][7] = {{{0xD9L,0x44L,0xD5L,249UL,246UL,249UL,0xD5L},{255UL,255UL,0xD4L,0x09L,0x6DL,4UL,0UL},{0xD9L,249UL,0x84L,0x84L,249UL,0xD9L,246UL}},{{3UL,0xD4L,0UL,0x20L,0x6DL,0x6DL,0x20L},{251UL,255UL,251UL,0xBAL,246UL,1UL,0x44L},{255UL,0x09L,0x20L,0xD4L,0x20L,0x09L,255UL}},{{251UL,0xD9L,0x44L,0xD5L,249UL,246UL,249UL},{0x09L,0x13L,0x13L,0x09L,3UL,1UL,0xD4L},{249UL,255UL,0x44L,1UL,1UL,0x44L,255UL}}};
            int i, j, k;
            for (l_540.f2 = 0; (l_540.f2 <= 1); l_540.f2 += 1)
            {
                return l_518;


            }
            if ((safe_lshift_func_int8_t_s_u(func_41(&g_3, (safe_mod_func_int8_t_s_s((*l_574), (safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((l_585 != l_519[3][0][3]), 6)), g_105.f7))))), 5)))
            {
                int *l_587 = &g_5;
                if (l_586[1][0][4])
                    break;
                l_587 = &g_263;

                ;
                g_262[0] = &g_87;
            }
            else
            {
                if (p_9)
                    break;
                if (p_8.f0)
                    break;
            }
        }
    }
    else
    {
        struct S0 l_588 = {-1852,-0,5037,-82,7,3,541,3938};
        int *l_589 = &g_87;
        union U2 *l_592 = &g_409;
        (*g_573) = (*l_506);
        l_588 = (*l_506);
        g_487 = l_589;

        ;
        for (g_263 = 0; (g_263 > 14); ++g_263)
        {
            struct S0 **l_598[9] = {&l_506,&g_573,&g_573,&l_506,&g_573,&g_573,&l_506,&g_573,&g_573};
            int l_599 = 1L;
            int i;
            (*l_589) = ((void*)0 == l_592);
            if ((g_75[1][2][0].f1 == g_85[3][4].f1))
            {
                int l_595 = 0xCEC5CE44L;
                unsigned l_609[8][1] = {{0x4266F08FL},{0x79263F50L},{0x4266F08FL},{0x4266F08FL},{0x79263F50L},{0x4266F08FL},{0x4266F08FL},{0x79263F50L}};
                int i, j;
                if ((safe_lshift_func_uint16_t_u_s((g_75[1][2][0].f5 <= ((((p_8.f2 < l_595) <= ((((void*)0 == &g_136) && (g_85[3][4].f0 > 0x5BL)) ^ (*l_589))) & l_599) < l_595)), 5)))
                {
                    int l_608 = 0x92CBC922L;
                    (*l_589) = (l_599 == (safe_add_func_uint16_t_u_u(((((((l_595 & p_9) > ((safe_sub_func_int16_t_s_s((*l_589), g_50.f4)) < p_9)) && (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((*l_589), 0)) || (p_9 > (0x5BL >= p_8.f3))), l_599))) >= l_608) != p_8.f0) | l_609[4][0]), l_595)));
                    if (p_8.f1)
                        break;
                }
                else
                {
                    l_595 = p_8.f1;
                    for (l_595 = 0; (l_595 <= 1); l_595 += 1)
                    {
                        int **l_611 = &l_589;
                        int ***l_610 = &l_611;
                        (*l_610) = &l_589;
                        (*l_589) = g_612;
                        (*l_610) = (void*)0;

                        ;
                    }
                }
            }
            else
            {
                int *l_613[9][6] = {{&g_5,&g_87,(void*)0,(void*)0,&g_87,&g_5},{&g_5,(void*)0,&g_87,&g_87,&g_87,&g_87},{&g_87,&g_87,&g_87,(void*)0,&g_5,&g_5},{&g_87,(void*)0,(void*)0,&g_87,&g_5,&g_87},{&g_5,&g_87,(void*)0,(void*)0,&g_87,&g_5},{&g_5,(void*)0,&g_87,&g_87,&g_87,&g_87},{&g_87,&g_87,&g_87,(void*)0,&g_5,&g_5},{&g_87,(void*)0,(void*)0,&g_87,&g_5,&g_87},{&g_5,&g_87,(void*)0,(void*)0,&g_87,&g_5}};
                struct S0 *l_614 = &g_50;
                struct S1 l_617 = {4294967290UL,0x8B0CE7B4L,0xE9CCL,-6L};
                int i, j;
                if ((!((void*)0 != l_613[6][1])))
                {
                    return l_614;


                }
                else
                {
                    for (l_540.f3 = 1; (l_540.f3 >= 0); l_540.f3 -= 1)
                    {
                        int *l_615[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_615[i] = &g_5;
                        l_615[5] = (void*)0;


                        g_487 = &g_612;

                        ;
                        (*l_614) = (*l_614);
                        l_520 = (p_8.f2 <= (safe_rshift_func_uint16_t_u_u((&g_123 != (void*)0), 9)));
                    }
                }
                (*l_589) = func_41(func_44(p_8.f0, &g_105, (*l_589), l_617), (((l_613[6][1] != (void*)0) == ((((safe_lshift_func_uint8_t_u_u(p_8.f1, 1)) > (((*l_589) ^ 0x2AD75EDAL) & p_9)) & p_9) && 4294967289UL)) || 0x10L));
            }
        }

        ;
    }
    (*l_622) = p_8.f2;
    return l_506;


}







static struct S1 func_10(const struct S0 * p_11, unsigned p_12, char * p_13, unsigned char p_14, unsigned short p_15)
{
    int *l_503 = &g_263;
    int **l_504 = &l_503;
    struct S1 l_505 = {1UL,4294967287UL,0xC59BL,0x9AL};
    (*l_504) = l_503;
    return l_505;
}







static unsigned char func_18(union U2 p_19, char p_20, struct S1 p_21)
{
    unsigned l_470[10] = {0x50C51C73L,0x50C51C73L,0UL,0x50C51C73L,0x50C51C73L,0UL,0x50C51C73L,0x50C51C73L,0UL,0x50C51C73L};
    int *l_481 = &g_5;
    struct S0 l_499 = {1160,7,7790,-108,3,0,150,6649};
    char *l_500 = &g_85[3][4].f3;
    struct S1 l_501 = {0xF45F5AC1L,0xBA8CE425L,1UL,0L};
    struct S0 *l_502 = &g_105;
    int i;
    for (g_107.f3 = 0; (g_107.f3 <= (-19)); --g_107.f3)
    {
        char l_480 = 0x60L;
        const int *l_485 = (void*)0;
        const int **l_486[8][1][8] = {{{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485}},{{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,(void*)0,&l_485}},{{&l_485,(void*)0,&l_485,&l_485,&l_485,&l_485,(void*)0,(void*)0}},{{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485}},{{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,(void*)0}},{{&l_485,&l_485,&l_485,&l_485,(void*)0,&l_485,&l_485,(void*)0}},{{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485}},{{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,(void*)0}}};
        int i, j, k;
        l_470[5] = (-7L);
        for (g_87 = 0; (g_87 <= 9); g_87 += 1)
        {
            int * const l_474[7][2] = {{&g_5,(void*)0},{(void*)0,&g_5},{(void*)0,(void*)0},{&g_5,(void*)0},{(void*)0,&g_5},{(void*)0,(void*)0},{&g_5,(void*)0}};
            int *l_483 = (void*)0;
            int **l_484 = &l_483;
            int i, j;
            for (g_3 = 8; (g_3 >= 0); g_3 -= 1)
            {
                struct S0 l_471 = {1117,-16,36207,121,7,3,616,7610};
                struct S0 *l_477 = &l_471;
                int **l_482[6][3][5] = {{{&g_262[0],(void*)0,&l_481,&l_481,(void*)0},{&l_481,&l_481,&l_481,&g_262[0],(void*)0},{(void*)0,&l_481,&g_262[0],(void*)0,&g_155}},{{&g_262[0],(void*)0,&g_155,(void*)0,&g_262[0]},{&g_262[0],(void*)0,&g_262[0],&l_481,&l_481},{&g_155,&l_481,&g_155,&g_262[0],&g_155}},{{&g_155,&l_481,&l_481,&l_481,&l_481},{&l_481,&g_262[0],(void*)0,&g_155,(void*)0},{&l_481,&g_155,&l_481,&l_481,(void*)0}},{{&g_155,(void*)0,&g_155,&l_481,(void*)0},{(void*)0,&l_481,&g_262[0],(void*)0,&g_262[0]},{(void*)0,&g_155,&g_155,(void*)0,&l_481}},{{&l_481,&l_481,&g_262[0],&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,&g_262[0]},{(void*)0,&g_262[0],&l_481,&g_155,&g_262[0]}},{{(void*)0,&l_481,(void*)0,&l_481,&g_262[0]},{&g_262[0],&g_155,(void*)0,&g_262[0],&l_481},{&g_262[0],(void*)0,(void*)0,&l_481,&l_481}}};
                int i, j, k;
                for (g_107.f2 = 0; (g_107.f2 <= 9); g_107.f2 += 1)
                {
                    struct S0 l_472[5][6][4] = {{{{-1618,31,3632,-59,8,3,698,1323},{-4891,54,12485,74,8,3,271,4088},{1976,19,791,93,4,2,400,7938},{-4891,54,12485,74,8,3,271,4088}},{{1976,19,791,93,4,2,400,7938},{-4891,54,12485,74,8,3,271,4088},{-1618,31,3632,-59,8,3,698,1323},{-3385,13,37380,55,0,0,559,483}},{{3311,40,7384,83,7,0,-496,268},{1976,19,791,93,4,2,400,7938},{851,-48,8822,-69,3,1,247,1294},{5298,-8,37386,5,7,0,478,3871}},{{-4891,54,12485,74,8,3,271,4088},{176,32,28209,23,1,0,-383,7439},{176,32,28209,23,1,0,-383,7439},{-4891,54,12485,74,8,3,271,4088}},{{-4891,54,12485,74,8,3,271,4088},{-3172,32,22804,-115,4,1,-385,179},{851,-48,8822,-69,3,1,247,1294},{3810,26,26133,45,4,3,-196,5048}},{{3311,40,7384,83,7,0,-496,268},{-4891,54,12485,74,8,3,271,4088},{-3385,13,37380,55,0,0,559,483},{-4968,45,13005,-28,2,2,-141,5345}}},{{{5298,-8,37386,5,7,0,478,3871},{-1618,31,3632,-59,8,3,698,1323},{5298,-8,37386,5,7,0,478,3871},{-4968,45,13005,-28,2,2,-141,5345}},{{-3385,13,37380,55,0,0,559,483},{-4891,54,12485,74,8,3,271,4088},{3311,40,7384,83,7,0,-496,268},{3810,26,26133,45,4,3,-196,5048}},{{851,-48,8822,-69,3,1,247,1294},{-3172,32,22804,-115,4,1,-385,179},{-4891,54,12485,74,8,3,271,4088},{-4891,54,12485,74,8,3,271,4088}},{{176,32,28209,23,1,0,-383,7439},{176,32,28209,23,1,0,-383,7439},{-4891,54,12485,74,8,3,271,4088},{5298,-8,37386,5,7,0,478,3871}},{{851,-48,8822,-69,3,1,247,1294},{1976,19,791,93,4,2,400,7938},{3311,40,7384,83,7,0,-496,268},{-3172,32,22804,-115,4,1,-385,179}},{{-3385,13,37380,55,0,0,559,483},{3311,40,7384,83,7,0,-496,268},{5298,-8,37386,5,7,0,478,3871},{3311,40,7384,83,7,0,-496,268}}},{{{5298,-8,37386,5,7,0,478,3871},{3311,40,7384,83,7,0,-496,268},{-3385,13,37380,55,0,0,559,483},{-3172,32,22804,-115,4,1,-385,179}},{{3311,40,7384,83,7,0,-496,268},{1976,19,791,93,4,2,400,7938},{851,-48,8822,-69,3,1,247,1294},{5298,-8,37386,5,7,0,478,3871}},{{-4891,54,12485,74,8,3,271,4088},{176,32,28209,23,1,0,-383,7439},{176,32,28209,23,1,0,-383,7439},{-4891,54,12485,74,8,3,271,4088}},{{-4891,54,12485,74,8,3,271,4088},{-3172,32,22804,-115,4,1,-385,179},{851,-48,8822,-69,3,1,247,1294},{3810,26,26133,45,4,3,-196,5048}},{{3311,40,7384,83,7,0,-496,268},{-4891,54,12485,74,8,3,271,4088},{-3385,13,37380,55,0,0,559,483},{-4968,45,13005,-28,2,2,-141,5345}},{{5298,-8,37386,5,7,0,478,3871},{-1618,31,3632,-59,8,3,698,1323},{5298,-8,37386,5,7,0,478,3871},{-4968,45,13005,-28,2,2,-141,5345}}},{{{-3385,13,37380,55,0,0,559,483},{-4891,54,12485,74,8,3,271,4088},{3311,40,7384,83,7,0,-496,268},{3810,26,26133,45,4,3,-196,5048}},{{851,-48,8822,-69,3,1,247,1294},{-3172,32,22804,-115,4,1,-385,179},{-4891,54,12485,74,8,3,271,4088},{-4891,54,12485,74,8,3,271,4088}},{{176,32,28209,23,1,0,-383,7439},{176,32,28209,23,1,0,-383,7439},{-4891,54,12485,74,8,3,271,4088},{5298,-8,37386,5,7,0,478,3871}},{{851,-48,8822,-69,3,1,247,1294},{1976,19,791,93,4,2,400,7938},{3311,40,7384,83,7,0,-496,268},{-3172,32,22804,-115,4,1,-385,179}},{{-3385,13,37380,55,0,0,559,483},{3311,40,7384,83,7,0,-496,268},{5298,-8,37386,5,7,0,478,3871},{3311,40,7384,83,7,0,-496,268}},{{5298,-8,37386,5,7,0,478,3871},{3311,40,7384,83,7,0,-496,268},{-3385,13,37380,55,0,0,559,483},{-3172,32,22804,-115,4,1,-385,179}}},{{{3311,40,7384,83,7,0,-496,268},{1976,19,791,93,4,2,400,7938},{851,-48,8822,-69,3,1,247,1294},{5298,-8,37386,5,7,0,478,3871}},{{-4891,54,12485,74,8,3,271,4088},{176,32,28209,23,1,0,-383,7439},{176,32,28209,23,1,0,-383,7439},{5298,-8,37386,5,7,0,478,3871}},{{5298,-8,37386,5,7,0,478,3871},{851,-48,8822,-69,3,1,247,1294},{1976,19,791,93,4,2,400,7938},{3311,40,7384,83,7,0,-496,268}},{{176,32,28209,23,1,0,-383,7439},{5298,-8,37386,5,7,0,478,3871},{3810,26,26133,45,4,3,-196,5048},{-4891,54,12485,74,8,3,271,4088}},{{-3385,13,37380,55,0,0,559,483},{-4968,45,13005,-28,2,2,-141,5345},{-3385,13,37380,55,0,0,559,483},{-4891,54,12485,74,8,3,271,4088}},{{3810,26,26133,45,4,3,-196,5048},{5298,-8,37386,5,7,0,478,3871},{176,32,28209,23,1,0,-383,7439},{3311,40,7384,83,7,0,-496,268}}}};
                    int i, j, k;
                    for (p_21.f3 = 7; (p_21.f3 >= 0); p_21.f3 -= 1)
                    {
                        int i;
                        if (l_470[g_107.f2])
                            break;
                        return p_21.f1;
                    }
                    l_472[1][5][0] = l_471;
                    for (p_21.f3 = 9; (p_21.f3 >= 0); p_21.f3 -= 1)
                    {
                        int *l_473 = &g_263;
                        int **l_475 = (void*)0;
                        int **l_476 = &g_155;
                        int i;
                        (*l_473) = l_470[g_87];
                        if (p_20)
                            continue;
                        (*l_476) = l_474[1][1];

                        ;
                    }
                    if (l_470[9])
                        break;
                }
                (*l_477) = l_471;
                if (l_470[g_87])
                {
                    int **l_478 = &g_155;
                    (*l_478) = &g_87;

                    ;
                    if (p_20)
                        continue;
                    (*l_478) = &g_263;

                    ;
                }
                else
                {
                    if (func_41(&g_3, g_105.f0))
                    {
                        int **l_479 = &g_262[0];
                        (*l_479) = &g_87;
                        (*l_479) = (*l_479);
                        if (p_21.f1)
                            continue;
                    }
                    else
                    {
                        return l_480;
                    }
                    return p_21.f1;
                }

                ;
                l_483 = l_481;

                ;
            }

            ;
            (*l_484) = &g_87;

            ;
        }
        g_487 = l_485;

        ;
    }
    for (p_21.f3 = 0; (p_21.f3 > (-8)); --p_21.f3)
    {
        int *l_490 = &g_263;
        int **l_491[6][8] = {{(void*)0,&l_490,&l_490,&l_490,&l_490,&g_262[0],&g_155,&l_490},{&l_490,&g_155,&l_481,(void*)0,(void*)0,&l_481,&g_155,&l_490},{&g_155,(void*)0,&l_490,&g_262[0],(void*)0,&g_155,&g_262[0],&l_490},{(void*)0,&g_155,&g_262[0],&l_490,&g_262[0],&g_155,(void*)0,&g_262[0]},{&l_490,(void*)0,&g_262[0],&l_490,&g_155,&l_481,(void*)0,(void*)0},{&g_262[0],&g_155,&l_490,&l_490,&g_155,&g_262[0],&l_490,&l_490}};
        int i, j;
        l_481 = l_490;

        ;
        for (g_107.f3 = 7; (g_107.f3 >= 0); g_107.f3 -= 1)
        {
            char *l_492 = &g_107.f3;
            int l_495 = 0xC46867FAL;
            l_495 = func_41(l_492, (safe_lshift_func_uint16_t_u_u(p_21.f1, func_41(l_492, l_495))));
            (*l_481) = 0x74C370ADL;
        }
        for (g_5 = 20; (g_5 <= 7); --g_5)
        {
            int *l_498 = &g_5;
            g_155 = l_498;

            ;
        }
    }

    ;
    l_499 = l_499;
    (*l_502) = (*l_502);
    return (*l_481);
}







static struct S1 func_23(short p_24)
{
    short l_427 = 0xF315L;
    struct S0 *l_431 = (void*)0;
    unsigned char l_437 = 0x04L;
    struct S1 * const *l_445[5][1];
    int *l_452[10][7][3] = {{{&g_5,&g_5,&g_263},{&g_263,&g_263,&g_263},{&g_5,&g_5,&g_5},{&g_5,&g_263,&g_5},{&g_263,&g_5,&g_5},{&g_5,&g_5,&g_263},{&g_263,&g_263,&g_263}},{{&g_5,&g_5,&g_263},{&g_263,&g_263,&g_263},{&g_5,&g_5,&g_5},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_5,&g_263,&g_263}},{{&g_263,&g_263,&g_263},{&g_263,&g_5,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_5,&g_263,&g_263}},{{&g_263,&g_263,&g_263},{&g_263,&g_5,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_5,&g_263,&g_263}},{{&g_263,&g_263,&g_263},{&g_263,&g_5,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_5,&g_263,&g_263}},{{&g_263,&g_263,&g_263},{&g_263,&g_5,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_5,&g_263,&g_263}},{{&g_263,&g_263,&g_5},{&g_5,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_5,&g_263},{&g_5,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_5,&g_5}},{{&g_263,&g_263,&g_5},{&g_5,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_5,&g_263},{&g_5,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_5,&g_5}},{{&g_263,&g_263,&g_5},{&g_5,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_5,&g_263},{&g_5,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_5,&g_5}},{{&g_263,&g_263,&g_5},{&g_5,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_5,&g_263},{&g_5,&g_263,&g_263},{&g_263,&g_263,&g_263},{&g_263,&g_5,&g_5}}};
    unsigned char l_463 = 0x44L;
    char *l_465[7] = {&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3};
    struct S0 l_466 = {-4302,15,14806,-32,9,2,577,2516};
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_445[i][j] = &g_136;
    }
    if ((safe_sub_func_uint8_t_u_u(0x21L, g_87)))
    {
        const unsigned l_423 = 4294967295UL;
        union U2 ***l_430 = &g_410;
        char *l_433 = &g_3;
        int l_438 = 0L;
        if (l_423)
        {
            int **l_424 = &g_155;
            (*l_424) = &g_87;

            ;
        }
        else
        {
            int l_436 = 0L;
            struct S1 l_444[1] = {{1UL,4294967292UL,0UL,0L}};
            int i;
            for (g_107.f2 = 0; (g_107.f2 != 1); g_107.f2 = safe_add_func_int32_t_s_s(g_107.f2, 6))
            {
                union U2 l_435 = {0};
                int *l_439[8][1];
                char *l_443 = &g_3;
                int i, j;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_439[i][j] = (void*)0;
                }
                if (l_427)
                {
                    const struct S1 l_432 = {0x23B4BDA7L,0x0C016AFCL,3UL,0L};
                    int *l_434[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_434[i] = &g_87;
                    if ((safe_mod_func_int32_t_s_s(func_41(l_433, (g_85[3][4].f1 <= g_105.f2)), 1UL)))
                    {
                        l_436 = (func_26((*g_156), l_434[0], l_435, func_41(&g_3, g_75[1][2][0].f0)) > (g_50.f6 & 0x1106L));
                        l_437 = p_24;
                    }
                    else
                    {
                        int **l_440 = &g_262[0];
                        struct S0 l_441[5][2] = {{{869,-7,36422,79,7,1,256,4493},{869,-7,36422,79,7,1,256,4493}},{{869,-7,36422,79,7,1,256,4493},{869,-7,36422,79,7,1,256,4493}},{{869,-7,36422,79,7,1,256,4493},{869,-7,36422,79,7,1,256,4493}},{{869,-7,36422,79,7,1,256,4493},{869,-7,36422,79,7,1,256,4493}},{{869,-7,36422,79,7,1,256,4493},{869,-7,36422,79,7,1,256,4493}}};
                        struct S0 *l_442 = &l_441[2][0];
                        int i, j;
                        l_438 = (-6L);
                        (*l_440) = l_439[6][0];
                        (*l_442) = l_441[2][0];
                    }
                    l_438 = func_41(l_443, l_436);
                }
                else
                {
                    return l_444[0];
                }
                l_436 = 0xBDF08506L;
            }
            l_438 = l_427;
        }
        l_438 = (l_445[4][0] == &g_136);
    }
    else
    {
        struct S0 l_446 = {4956,-4,28591,31,4,1,569,1805};
        struct S0 *l_447 = &g_105;
        struct S0 l_467 = {-5071,-63,29997,-43,10,0,165,5678};
        (*l_447) = l_446;
        l_446.f6 = (0xBFL >= (l_446.f2 <= 1UL));
        for (g_107.f0 = 0; (g_107.f0 < 22); g_107.f0 = safe_add_func_uint8_t_u_u(g_107.f0, 7))
        {
            for (g_263 = 0; (g_263 >= (-21)); g_263--)
            {
                struct S0 *l_460 = &g_105;
                for (g_107.f2 = 0; (g_107.f2 >= 6); ++g_107.f2)
                {
                    const struct S0 l_459 = {-2403,-53,24156,-101,6,2,666,4478};
                    (*l_447) = l_459;
                }
                l_447 = l_460;
            }
            for (l_437 = 21; (l_437 >= 4); --l_437)
            {
                short l_464 = 0x7A1DL;
                l_463 = p_24;
                if (l_464)
                    continue;
            }
        }
        l_467 = l_466;
    }
    return g_85[3][4];
}







static unsigned char func_26(struct S0 p_27, int * p_28, union U2 p_29, int p_30)
{
    unsigned l_265 = 0x1672A365L;
    const char l_281 = (-2L);
    int l_282 = 0x96E94AAAL;
    char *l_284 = &g_85[3][4].f3;
    struct S1 **l_304 = &g_136;
    unsigned short l_309 = 0x004EL;
    int *l_313 = &g_263;
    int *l_347 = &g_263;
    struct S0 * const l_365 = &g_105;
    unsigned l_420[6] = {0x546160F0L,0x574BAD48L,0x574BAD48L,0x546160F0L,0x574BAD48L,0x574BAD48L};
    int i;
    (*p_28) = (l_265 > (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_75[1][2][0].f3, 6)), 1UL)));
    (*p_28) = (*p_28);
    (*g_135) = (*g_135);
    for (p_30 = 16; (p_30 <= 12); p_30 = safe_sub_func_uint16_t_u_u(p_30, 5))
    {
        unsigned short l_280[9][9] = {{1UL,65527UL,65527UL,1UL,0x0474L,3UL,0xB8EBL,0UL,8UL},{8UL,0UL,65527UL,0xCAD8L,65533UL,65527UL,9UL,0x9A69L,0UL},{65527UL,65533UL,8UL,8UL,0x0474L,0UL,9UL,0x0474L,0x9A69L},{0x9D5FL,0xC0DCL,65534UL,1UL,0UL,65533UL,0xB8EBL,0UL,0UL},{65535UL,0xC0DCL,0UL,9UL,0UL,0xC0DCL,65535UL,65535UL,8UL},{0xB8EBL,65533UL,0UL,1UL,65534UL,0xC0DCL,0x9D5FL,3UL,0UL},{9UL,0UL,0x0474L,8UL,8UL,65533UL,65527UL,65535UL,0xC0DCL},{9UL,65527UL,65533UL,0xCAD8L,65527UL,0UL,8UL,0UL,0x5850L},{0xB8EBL,3UL,0x0474L,1UL,65527UL,65527UL,1UL,0x0474L,3UL}};
        union U2 *l_408 = &g_409;
        struct S0 l_419 = {928,1,22121,103,10,1,-212,1625};
        int i, j;
    }

    return l_420[4];
}







static struct S0 func_31(char p_32, char * p_33, struct S1 p_34, struct S0 * p_35)
{
    int l_215 = (-8L);
    unsigned l_216 = 6UL;
    union U2 *l_225[3][10][8] = {{{(void*)0,&g_90[2],&g_90[0],&g_90[0],&g_90[5],&g_90[5],(void*)0,&g_90[5]},{&g_90[0],&g_90[0],(void*)0,&g_90[0],&g_90[0],&g_90[0],&g_90[5],(void*)0},{&g_90[0],&g_90[0],&g_90[5],&g_90[0],&g_90[5],&g_90[3],&g_90[0],&g_90[0]},{&g_90[4],&g_90[4],&g_90[5],&g_90[0],&g_90[0],&g_90[5],&g_90[5],&g_90[4]},{&g_90[5],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_90[0],(void*)0,&g_90[0],&g_90[4],&g_90[5],&g_90[5],&g_90[0],&g_90[0]},{&g_90[0],&g_90[4],&g_90[0],&g_90[0],&g_90[0],&g_90[3],&g_90[5],&g_90[0]},{&g_90[0],&g_90[0],(void*)0,(void*)0,&g_90[5],&g_90[0],&g_90[0],&g_90[0]},{&g_90[0],&g_90[0],&g_90[5],&g_90[5],(void*)0,&g_90[5],&g_90[5],&g_90[0]},{&g_90[5],&g_90[2],&g_90[0],(void*)0,&g_90[0],&g_90[4],(void*)0,&g_90[0]}},{{&g_90[4],(void*)0,&g_90[0],&g_90[0],&g_90[5],&g_90[5],(void*)0,&g_90[0]},{&g_90[0],&g_90[0],&g_90[0],&g_90[4],&g_90[0],&g_90[3],&g_90[5],(void*)0},{&g_90[0],&g_90[5],&g_90[0],&g_90[0],&g_90[0],&g_90[5],&g_90[4],&g_90[0]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_90[5],(void*)0,&g_90[0],(void*)0},{&g_90[0],&g_90[0],&g_90[0],&g_90[3],&g_90[5],&g_90[0],&g_90[5],&g_90[0]},{(void*)0,&g_90[4],&g_90[0],(void*)0,&g_90[0],&g_90[2],&g_90[5],&g_90[2]},{&g_90[4],(void*)0,&g_90[5],(void*)0,&g_90[4],&g_90[5],&g_90[0],&g_90[0]},{&g_90[0],&g_90[0],&g_90[0],&g_90[3],&g_90[0],&g_90[5],&g_90[0],(void*)0},{(void*)0,&g_90[0],&g_90[0],(void*)0,&g_90[5],&g_90[2],&g_90[0],&g_90[0]},{&g_90[0],&g_90[0],&g_90[5],&g_90[0],&g_90[5],&g_90[5],&g_90[5],&g_90[0]}},{{&g_90[0],&g_90[0],&g_90[0],&g_90[0],&g_90[0],&g_90[2],&g_90[5],(void*)0},{&g_90[4],&g_90[0],&g_90[0],(void*)0,&g_90[0],&g_90[5],&g_90[0],&g_90[3]},{&g_90[4],&g_90[0],(void*)0,&g_90[0],&g_90[0],&g_90[5],&g_90[4],(void*)0},{&g_90[0],(void*)0,&g_90[0],&g_90[2],&g_90[5],&g_90[2],&g_90[0],(void*)0},{&g_90[0],&g_90[0],(void*)0,&g_90[2],&g_90[5],&g_90[5],&g_90[0],(void*)0},{&g_90[0],&g_90[3],&g_90[0],&g_90[5],&g_90[0],(void*)0,&g_90[0],&g_90[0]},{(void*)0,&g_90[5],(void*)0,&g_90[5],&g_90[5],(void*)0,&g_90[0],&g_90[2]},{&g_90[5],(void*)0,&g_90[0],&g_90[2],&g_90[0],(void*)0,&g_90[5],&g_90[5]},{&g_90[0],&g_90[5],&g_90[4],&g_90[0],&g_90[0],(void*)0,&g_90[0],&g_90[5]},{&g_90[0],&g_90[3],(void*)0,(void*)0,&g_90[0],&g_90[5],&g_90[5],&g_90[2]}}};
    union U2 **l_224 = &l_225[1][1][4];
    const char l_229 = 0L;
    int *l_236 = &g_5;
    char *l_243 = &g_85[3][4].f3;
    int i, j, k;
    if ((0xC6FA893CL ^ ((((1L || l_215) < (((((((l_216 & func_38(((func_41(func_44((safe_unary_minus_func_uint32_t_u(((*p_33) != 0x05L))), &g_50, l_216, g_85[3][4]), g_75[1][2][0].f5) | l_216) == g_75[1][2][0].f5), g_87)) | 0L) & (-1L)) == p_34.f1) >= 1UL) <= 4UL) || 0x2462C373L)) && 9L) | g_75[1][2][0].f4)))
    {
        unsigned char l_218 = 0x73L;
        unsigned l_221 = 0x19B11235L;
        int l_222 = 0x62FC2B95L;
        struct S0 l_223 = {118,1,20710,113,7,2,-539,818};
        l_222 = ((func_41(func_44((g_50.f4 >= (((((l_218 < (*g_2)) > g_105.f5) > (!(*p_33))) < (safe_mod_func_int8_t_s_s(0x4EL, (g_105.f2 && p_32)))) <= g_68)), &g_105, l_221, p_34), l_222) & 1UL) | (*p_33));
        return l_223;
    }
    else
    {
        union U2 ***l_226 = &g_123;
        (*l_226) = l_224;

        ;
    }

    ;
    (*l_236) = (safe_mod_func_uint32_t_u_u(l_229, (safe_mod_func_uint32_t_u_u((&l_225[1][1][4] == &l_225[2][2][7]), (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(0x59L, 3)), (~p_32)))))));
    (*l_236) = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((*l_236) | func_41(l_243, (*l_236))), 5)), g_75[1][2][0].f0)), 7));
    for (p_34.f2 = 9; (p_34.f2 <= 31); ++p_34.f2)
    {
        struct S0 l_252 = {3190,49,45873,112,5,2,-382,2578};
        int *l_253 = &g_5;
        unsigned l_261 = 0xAC5E9F97L;
        for (g_107.f2 = 0; (g_107.f2 <= 2); g_107.f2 += 1)
        {
            int *l_247 = &g_5;
            char *l_248 = (void*)0;
            for (g_68 = 0; (g_68 <= 2); g_68 += 1)
            {
                int **l_246[8] = {&g_155,&g_155,&g_155,&g_155,&g_155,&g_155,&g_155,&g_155};
                int i;
                l_247 = &g_5;
                for (p_32 = 0; (p_32 <= 2); p_32 += 1)
                {
                    int l_249[4] = {0x4F3C083DL,0x4F3C083DL,0x4F3C083DL,0x4F3C083DL};
                    struct S0 l_251 = {-899,-51,11480,46,4,3,-24,7433};
                    int i;
                    for (l_216 = 0; (l_216 <= 2); l_216 += 1)
                    {
                        (*p_35) = (*g_156);
                        l_249[2] = func_41(l_248, g_75[1][2][0].f2);
                    }
                    l_236 = (void*)0;

                    ;
                    for (g_87 = 0; (g_87 <= 2); g_87 += 1)
                    {
                        int *l_250 = &l_215;
                        l_250 = (void*)0;

                        ;
                        l_250 = &g_87;

                        ;
                        (*l_247) = p_34.f2;
                        l_252 = l_251;
                    }
                }
            }
            (*l_247) = 0xCED66CE1L;
            for (p_34.f0 = 0; (p_34.f0 <= 2); p_34.f0 += 1)
            {
                int *l_255 = &l_215;
                if (p_34.f1)
                    break;
                for (g_107.f0 = 0; (g_107.f0 <= 2); g_107.f0 += 1)
                {
                    int **l_254[4][6] = {{&l_253,&l_253,(void*)0,(void*)0,&l_253,&l_253},{&l_236,&l_253,(void*)0,&l_253,&l_236,&l_236},{&l_236,&l_253,&l_253,&l_236,&l_253,&l_236},{&l_236,&l_253,&l_236,&l_253,&l_253,&l_236}};
                    int i, j;
                    l_255 = l_253;

                    ;
                    (*l_255) = p_34.f1;
                    return l_252;


                }
                for (l_215 = 2; (l_215 >= 0); l_215 -= 1)
                {
                    int **l_256 = &l_247;
                    (*l_256) = &g_87;

                    ;
                    (*l_247) = 0x77B570DBL;
                }
            }

            ;
        }
        for (p_34.f0 = 0; (p_34.f0 <= 2); p_34.f0 += 1)
        {
            char *l_260 = (void*)0;
            for (g_87 = 2; (g_87 >= 0); g_87 -= 1)
            {
                int *l_257 = &g_5;
                int **l_258 = &l_236;
                (*l_253) = p_34.f3;
                (*l_258) = l_257;

                ;
                (*l_258) = &g_5;
                for (l_215 = 0; (l_215 <= 2); l_215 += 1)
                {
                    for (g_107.f3 = 2; (g_107.f3 >= 0); g_107.f3 -= 1)
                    {
                        unsigned char l_259 = 255UL;
                        (*l_257) = (l_259 <= func_41(&g_3, func_41(&g_3, func_41(&p_32, p_34.f2))));
                        (*l_236) = (func_41(l_260, ((func_41(&g_3, l_261) != func_41(&g_3, g_50.f4)) == p_34.f2)) < g_50.f2);
                        (*l_258) = l_253;
                    }
                }
            }
            (*l_253) = (*l_253);
            for (l_215 = 0; (l_215 <= 2); l_215 += 1)
            {
                int i, j, k;
                l_225[l_215][(l_215 + 4)][(l_215 + 1)] = l_225[l_215][(p_34.f0 + 7)][(p_34.f0 + 4)];
                return (*g_156);


            }
        }
    }

    ;
    return (*g_156);


}







static unsigned char func_38(const char p_39, unsigned char p_40)
{
    unsigned l_168 = 5UL;
    struct S0 l_179 = {-1664,-48,44115,-11,0,0,217,7238};
    const struct S1 l_191[2][3] = {{{0UL,1UL,0xCFB5L,-4L},{0UL,1UL,0xCFB5L,-4L},{0UL,1UL,0xCFB5L,-4L}},{{4294967295UL,0x7C94DDF8L,0x9818L,0xA7L},{4294967295UL,0x7C94DDF8L,0x9818L,0xA7L},{4294967295UL,0x7C94DDF8L,0x9818L,0xA7L}}};
    char *l_192 = &g_3;
    int *l_194 = &g_87;
    int i, j;
    for (g_107.f0 = 0; (g_107.f0 > 1); g_107.f0++)
    {
        struct S0 *l_164 = &g_105;
        for (p_40 = (-19); (p_40 > 1); p_40 = safe_add_func_int8_t_s_s(p_40, 9))
        {
            unsigned short l_176 = 65526UL;
            int *l_178 = &g_87;
            for (g_87 = 5; (g_87 != 24); g_87 = safe_add_func_int32_t_s_s(g_87, 9))
            {
                struct S0 **l_165 = &l_164;
                int *l_169[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_169[i] = &g_5;
                (*l_165) = l_164;
                for (g_107.f2 = (-3); (g_107.f2 == 47); g_107.f2++)
                {
                    return l_168;
                }
                if (p_39)
                    continue;
                g_105.f0 = p_39;
            }
            for (g_87 = (-20); (g_87 == (-11)); g_87 = safe_add_func_uint32_t_u_u(g_87, 8))
            {
                int *l_177 = &g_5;
                (*l_177) = (safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((*g_2) != (g_87 >= l_176)), p_39)), func_41(&g_3, l_176)));
            }
            l_178 = l_178;
            if (l_168)
                continue;
        }
        (*l_164) = l_179;
        if (l_179.f3)
            continue;
    }
    for (g_107.f2 = 0; (g_107.f2 <= 47); ++g_107.f2)
    {
        int l_182[4];
        struct S0 *l_189 = &l_179;
        char l_190 = 0x4BL;
        int i;
        for (i = 0; i < 4; i++)
            l_182[i] = (-4L);
        for (g_68 = 0; (g_68 <= 3); g_68 += 1)
        {
            struct S0 *l_183[10][10] = {{&l_179,&g_105,(void*)0,(void*)0,&g_105,&l_179,&l_179,&g_50,&g_50,&l_179},{(void*)0,&l_179,&g_50,&g_50,&l_179,(void*)0,&l_179,&g_50,&g_50,&l_179},{(void*)0,&l_179,&g_50,&g_50,&l_179,(void*)0,&l_179,&g_50,&g_50,&l_179},{(void*)0,&l_179,&g_50,&g_50,&l_179,(void*)0,&l_179,&g_50,&g_50,&l_179},{(void*)0,&l_179,&g_50,&g_50,&l_179,(void*)0,&l_179,&g_50,&g_50,&l_179},{(void*)0,&l_179,&g_50,&g_50,&l_179,(void*)0,&l_179,&g_50,&g_50,&l_179},{(void*)0,&l_179,&g_50,&g_50,&l_179,(void*)0,&l_179,&g_50,&g_50,&l_179},{(void*)0,&l_179,&g_50,&g_50,&l_179,(void*)0,&l_179,&g_50,&g_50,&l_179},{(void*)0,&l_179,&g_50,&g_50,&l_179,(void*)0,&l_179,&g_50,&g_50,&l_179},{(void*)0,&l_179,&g_50,&g_50,&l_179,(void*)0,&l_179,&g_50,&g_50,&l_179}};
            int i, j;
            g_105 = (*g_156);
        }
        if (((((func_41(&g_3, l_182[0]) || p_40) >= ((safe_mod_func_int16_t_s_s(l_179.f6, (safe_mod_func_int8_t_s_s((*g_2), l_179.f1)))) > ((((~(safe_unary_minus_func_int8_t_s(l_179.f0))) <= ((func_41(l_192, l_182[0]) || 0x9ED53E53L) != 0xB03EL)) == l_191[0][1].f1) && g_75[1][2][0].f7))) <= 0L) >= l_190))
        {
            int *l_193[3][9][5] = {{{&g_87,(void*)0,&l_182[0],&l_182[0],(void*)0},{(void*)0,&g_87,&l_182[2],&g_5,&l_182[0]},{&l_182[0],&g_5,&g_87,&g_87,&g_5},{&l_182[2],(void*)0,&g_87,&l_182[0],&l_182[0]},{&l_182[0],&l_182[0],&g_87,&l_182[0],&g_87},{(void*)0,&g_5,&g_87,(void*)0,(void*)0},{&l_182[3],(void*)0,&l_182[3],&g_87,&l_182[0]},{(void*)0,&g_87,&g_87,&l_182[0],&l_182[0]},{&g_87,&l_182[1],&g_87,&g_5,&g_87}},{{&l_182[2],&g_5,&g_87,&l_182[0],&g_5},{&g_5,&g_5,&l_182[3],(void*)0,&l_182[0]},{&g_5,(void*)0,&g_87,(void*)0,&g_5},{&g_87,&g_87,&g_87,&l_182[0],&g_87},{&g_87,&g_87,&g_87,&g_87,&g_87},{(void*)0,&l_182[0],&g_87,&g_87,&g_87},{&l_182[2],&g_87,&l_182[2],&g_87,&g_5},{&g_87,&l_182[0],&l_182[0],&l_182[1],&l_182[0]},{&g_87,&g_87,&l_182[2],&g_87,&g_5}},{{&l_182[3],&g_87,&g_5,&l_182[0],&g_87},{(void*)0,&l_182[2],&l_182[0],&g_5,&g_5},{&g_87,(void*)0,&g_87,&l_182[0],&g_87},{&g_87,(void*)0,(void*)0,&g_5,&g_5},{&l_182[1],&g_5,&g_5,&l_182[1],&l_182[0]},{&g_87,&l_182[0],&l_182[1],(void*)0,(void*)0},{&l_182[0],&g_87,&g_5,&l_182[0],&g_87},{(void*)0,(void*)0,&g_87,(void*)0,&g_5},{&g_5,&g_87,&g_5,&l_182[1],&g_5}}};
            int i, j, k;
            g_50.f1 = 0x92F9E332L;
            l_179.f3 = (p_40 && l_190);
        }
        else
        {
            int **l_195 = (void*)0;
            int **l_196 = &l_194;
            char *l_210[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            (*l_196) = l_194;
            (*l_194) = (7L != (safe_lshift_func_uint8_t_u_s(((g_105.f4 <= (*g_2)) < (safe_mod_func_int32_t_s_s(((void*)0 == g_123), 3L))), (safe_lshift_func_int16_t_s_s(0x2F0EL, 3)))));
            for (l_168 = 25; (l_168 > 53); l_168++)
            {
                struct S1 ***l_205 = &g_135;
                struct S0 l_206 = {1018,56,3245,-33,1,3,373,640};
                int *l_211[8][5][6] = {{{&g_87,&g_87,(void*)0,&g_87,&l_182[2],&g_5},{(void*)0,&g_87,&g_87,(void*)0,(void*)0,(void*)0},{&l_182[1],&g_87,&l_182[1],&g_5,&l_182[2],&g_87},{&g_5,&g_87,&l_182[1],(void*)0,(void*)0,(void*)0},{&l_182[0],(void*)0,&l_182[2],(void*)0,&l_182[0],&g_5}},{{&g_5,(void*)0,(void*)0,&g_5,(void*)0,(void*)0},{&l_182[1],(void*)0,&g_87,(void*)0,&g_87,(void*)0},{(void*)0,&g_87,(void*)0,&g_87,&g_87,&g_5},{(void*)0,(void*)0,&g_87,&g_87,&l_182[1],&g_87},{(void*)0,(void*)0,(void*)0,&g_87,(void*)0,&g_87}},{{&l_182[0],&g_5,(void*)0,(void*)0,(void*)0,&g_87},{&g_87,(void*)0,(void*)0,(void*)0,&g_87,&g_87},{&l_182[0],&g_87,&g_87,&g_87,&l_182[2],(void*)0},{(void*)0,(void*)0,&g_5,&g_87,&g_5,(void*)0},{(void*)0,&g_5,&g_87,&g_87,&g_87,&g_87}},{{&g_5,(void*)0,(void*)0,&g_87,&l_182[1],&g_87},{(void*)0,(void*)0,(void*)0,&g_87,&g_87,&g_87},{(void*)0,&g_5,(void*)0,(void*)0,&g_5,&g_87},{&l_182[2],(void*)0,&g_87,(void*)0,&l_182[2],&g_87},{(void*)0,&g_87,(void*)0,&g_87,&g_87,(void*)0}},{{(void*)0,(void*)0,(void*)0,&g_87,(void*)0,(void*)0},{&g_5,&g_5,(void*)0,&g_87,(void*)0,&g_87},{(void*)0,(void*)0,&g_87,&g_87,&l_182[1],&g_87},{(void*)0,(void*)0,(void*)0,&g_87,(void*)0,&g_87},{&l_182[1],(void*)0,&l_182[0],&g_87,&g_87,&g_5}},{{(void*)0,&g_87,(void*)0,&g_87,(void*)0,&g_87},{&l_182[1],&g_5,&l_182[2],&g_87,(void*)0,&g_87},{(void*)0,&g_87,(void*)0,&g_5,(void*)0,&g_87},{&g_87,(void*)0,&l_182[2],&g_87,&g_87,&g_87},{(void*)0,&g_87,(void*)0,&g_5,&g_5,&g_5}},{{&l_182[0],&g_87,&l_182[0],&g_87,&g_87,&g_87},{&l_182[1],(void*)0,(void*)0,&g_87,(void*)0,&g_5},{(void*)0,&g_87,&g_87,&g_87,(void*)0,&g_87},{&l_182[1],&g_5,&g_87,&g_87,(void*)0,&g_87},{&l_182[0],&g_87,&g_87,&g_5,&g_87,&g_87}},{{(void*)0,(void*)0,&g_87,&g_87,(void*)0,&g_87},{&g_87,&g_87,&g_87,&g_5,(void*)0,&g_5},{(void*)0,&g_87,(void*)0,&g_87,(void*)0,&g_87},{&l_182[1],(void*)0,&l_182[0],&g_87,&g_87,&g_5},{(void*)0,&g_87,(void*)0,&g_87,(void*)0,&g_87}}};
                int i, j, k;
                if (((void*)0 == l_205))
                {
                    if ((*l_194))
                        break;
                    (*l_189) = (*l_189);
                }
                else
                {
                    if ((p_40 || p_39))
                    {
                        (*l_189) = l_206;
                        (**l_196) = (g_107.f3 ^ g_75[1][2][0].f6);
                        (*g_135) = (**l_205);
                        if (p_39)
                            break;
                    }
                    else
                    {
                        unsigned l_209[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_209[i] = 0x7FC8DC78L;
                        (*l_194) = (!(func_41(l_192, (safe_mod_func_int32_t_s_s((p_40 > l_209[4]), (+((&g_3 != &p_39) != g_5))))) != (func_41(l_210[4], (func_41(&g_3, g_105.f4) ^ 0x1E89L)) != 0xBB0CL)));
                        l_211[7][0][5] = (void*)0;
                        if (l_209[4])
                            break;
                    }
                }
                if (l_182[1])
                    break;
                (*l_196) = l_194;
                l_211[0][1][1] = &g_5;
            }
        }
    }
    (*l_194) = func_41(func_44(p_40, &l_179, (0L ^ (safe_lshift_func_uint8_t_u_s(p_39, 3))), l_191[0][2]), (0xDC389D37L != ((3UL > (-1L)) || 0x75L)));
    return g_75[1][2][0].f7;
}







static short func_41(char * p_42, unsigned p_43)
{
    unsigned l_157 = 0x50E5ECF6L;
    l_157 = (5L > (g_85[3][4].f2 && 1UL));
    return g_85[3][4].f0;
}







static char * func_44(int p_45, struct S0 * p_46, short p_47, const struct S1 p_48)
{
    unsigned l_53 = 0x8D7CD142L;
    int *l_54[7][9][3] = {{{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5}},{{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5}},{{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5}},{{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5}},{{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5}},{{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5}},{{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5}}};
    struct S0 l_58 = {4929,-29,25926,-20,7,2,-166,6177};
    unsigned l_62 = 0UL;
    char *l_86 = &g_85[3][4].f3;
    union U2 *l_113 = &g_90[2];
    union U2 **l_112 = &l_113;
    const struct S0 *l_142[8][7][2] = {{{&g_105,&g_50},{(void*)0,&g_50},{&g_105,&g_75[1][2][0]},{&g_75[0][3][2],(void*)0},{&g_50,(void*)0},{&g_105,&g_105},{&g_75[0][3][0],&g_105}},{{&g_75[1][5][1],&g_75[1][4][2]},{(void*)0,(void*)0},{&l_58,&g_50},{&g_75[1][2][0],&g_75[1][2][0]},{(void*)0,&g_75[0][2][1]},{&g_50,&g_75[0][3][0]},{&g_75[1][2][0],(void*)0}},{{&g_105,&g_75[1][5][1]},{&g_75[0][0][3],&g_75[0][0][3]},{&g_75[1][5][3],&g_105},{(void*)0,&l_58},{(void*)0,&g_75[1][2][0]},{&g_75[1][5][0],(void*)0},{&g_75[1][2][0],&g_105}},{{&g_75[1][2][0],(void*)0},{&g_75[1][5][0],&g_75[1][2][0]},{(void*)0,&l_58},{(void*)0,&g_105},{&g_75[1][5][3],&g_75[0][0][3]},{&g_75[0][0][3],&g_75[1][5][1]},{&g_105,(void*)0}},{{&g_75[1][2][0],&g_75[0][3][0]},{&g_50,&g_75[0][2][1]},{(void*)0,&g_75[1][2][0]},{&g_75[1][2][0],&g_50},{&l_58,(void*)0},{(void*)0,&g_75[1][4][2]},{&g_75[1][5][1],&g_105}},{{&g_75[0][3][0],&g_105},{&g_105,(void*)0},{&g_50,(void*)0},{&g_75[0][3][2],&g_75[1][2][0]},{&g_105,&g_50},{(void*)0,&g_50},{&g_105,&l_58}},{{&g_75[0][2][1],&g_50},{&l_58,&g_75[1][2][0]},{&g_75[0][4][0],&g_75[1][2][0]},{&l_58,&g_50},{&g_75[0][2][1],&l_58},{&g_105,&g_50},{&g_50,(void*)0}},{{&g_75[1][5][0],&l_58},{&g_105,&g_75[0][0][0]},{(void*)0,(void*)0},{&g_75[1][5][1],&g_50},{&g_75[1][2][0],&g_75[1][5][0]},{&g_75[0][0][3],&g_75[0][3][0]},{(void*)0,&g_105}}};
    const struct S0 **l_141[8][8][4] = {{{&l_142[0][0][0],&l_142[0][0][0],&l_142[0][0][0],&l_142[0][0][0]},{(void*)0,&l_142[0][0][0],&l_142[0][0][0],&g_16},{&g_16,&l_142[3][0][1],&l_142[0][0][0],&g_16},{&g_16,&g_16,&l_142[0][0][0],&g_16},{&l_142[0][0][0],&l_142[3][0][1],&g_16,&g_16},{&l_142[0][0][0],&l_142[0][0][0],&l_142[0][0][0],&l_142[0][0][0]},{(void*)0,&l_142[0][0][0],&l_142[0][0][0],&g_16},{&g_16,&l_142[0][0][0],&l_142[0][0][0],&l_142[0][0][0]}},{{&l_142[5][4][1],&g_16,&g_16,&g_16},{&l_142[0][0][0],&g_16,&g_16,&l_142[0][0][0]},{&g_16,&g_16,&g_16,&l_142[2][5][0]},{&g_16,&g_16,&g_16,&l_142[0][0][0]},{&l_142[0][0][0],&l_142[2][5][0],&g_16,(void*)0},{&l_142[5][4][1],&l_142[4][3][1],&l_142[0][0][0],&l_142[0][0][0]},{&g_16,&l_142[0][0][0],&l_142[0][0][0],&l_142[0][0][0]},{(void*)0,(void*)0,&l_142[0][0][0],&g_16}},{{&l_142[0][0][0],(void*)0,&g_16,&l_142[0][0][0]},{&l_142[0][0][0],&g_16,&l_142[0][0][0],&g_16},{&g_16,&g_16,&l_142[0][0][0],&l_142[0][0][0]},{&g_16,(void*)0,&l_142[0][0][0],&l_142[0][0][0]},{&g_16,&g_16,(void*)0,&l_142[0][0][0]},{(void*)0,&l_142[5][4][1],&l_142[0][0][0],(void*)0},{&l_142[0][0][0],&g_16,&l_142[0][0][0],&g_16},{(void*)0,&g_16,&g_16,&l_142[0][0][0]}},{{&g_16,&l_142[0][0][0],&g_16,&g_16},{(void*)0,&g_16,&g_16,(void*)0},{&g_16,&l_142[0][0][0],&g_16,&g_16},{(void*)0,&l_142[0][0][0],&l_142[0][0][0],&g_16},{&l_142[0][0][0],&g_16,&l_142[0][0][0],&l_142[0][0][0]},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_16,&l_142[4][3][1],(void*)0,&g_16},{&l_142[0][0][0],&l_142[0][0][0],(void*)0,&l_142[0][0][0]}},{{&l_142[0][0][0],&l_142[0][0][0],&g_16,&l_142[0][0][0]},{&l_142[3][0][1],&l_142[0][0][0],&l_142[0][0][0],&g_16},{(void*)0,&l_142[4][3][1],&l_142[3][0][1],(void*)0},{&g_16,(void*)0,&l_142[0][0][0],&l_142[0][0][0]},{&g_16,&g_16,&l_142[5][4][1],&g_16},{&l_142[2][5][0],&l_142[0][0][0],&l_142[0][0][0],&g_16},{&l_142[0][0][0],&l_142[0][0][0],&g_16,(void*)0},{&l_142[0][0][0],&g_16,&l_142[0][0][0],&g_16}},{{&l_142[0][0][0],&l_142[0][0][0],&g_16,&l_142[0][0][0]},{&l_142[0][0][0],&g_16,&l_142[0][0][0],&g_16},{&l_142[2][5][0],&g_16,&l_142[5][4][1],(void*)0},{&g_16,&l_142[5][4][1],(void*)0,(void*)0},{&g_16,&g_16,&g_16,&g_16},{&g_16,&l_142[2][5][0],&l_142[0][0][0],&g_16},{&g_16,&l_142[0][0][0],&l_142[0][0][0],&l_142[0][0][0]},{&l_142[0][0][0],&l_142[0][0][0],&l_142[3][0][1],&g_16}},{{&l_142[0][0][0],&l_142[2][5][0],(void*)0,&g_16},{&l_142[0][0][0],&g_16,&g_16,(void*)0},{&l_142[3][0][1],&l_142[0][0][0],&g_16,(void*)0},{&l_142[2][5][0],&l_142[0][0][0],&l_142[2][5][0],&g_16},{(void*)0,&g_16,&l_142[0][0][0],&l_142[0][0][0]},{&l_142[0][0][0],&l_142[0][0][0],&l_142[0][0][0],&g_16},{&l_142[5][4][1],&l_142[0][0][0],&l_142[0][0][0],&g_16},{&l_142[0][0][0],&g_16,&l_142[0][0][0],&g_16}},{{(void*)0,(void*)0,&l_142[2][5][0],&l_142[0][0][0]},{&l_142[2][5][0],&l_142[0][0][0],&g_16,&g_16},{&l_142[3][0][1],&g_16,&g_16,&l_142[3][0][1]},{&l_142[0][0][0],&g_16,(void*)0,&g_16},{&l_142[0][0][0],&g_16,&l_142[3][0][1],(void*)0},{&l_142[0][0][0],(void*)0,&l_142[0][0][0],(void*)0},{&g_16,&g_16,&l_142[0][0][0],&g_16},{&g_16,&g_16,&g_16,&l_142[3][0][1]}}};
    struct S1 *l_152 = &g_85[3][4];
    int i, j, k;
    p_45 = l_53;
    for (p_47 = 0; (p_47 <= 2); p_47 += 1)
    {
        char *l_67 = &g_3;
        struct S0 l_69 = {1042,41,16461,66,0,0,-489,3757};
        union U2 * const *l_114 = &l_113;
        p_45 = ((safe_mod_func_uint8_t_u_u(0xC0L, (*g_2))) ^ 0x5BL);
        for (p_45 = 2; (p_45 >= 0); p_45 -= 1)
        {
            char l_57 = 0L;
            int l_64 = 1L;
            struct S0 l_71 = {2608,-61,37598,-72,3,1,-246,4102};
            struct S1 *l_84 = &g_85[3][4];
            struct S1 ** const l_83[4] = {&l_84,&l_84,&l_84,&l_84};
            int i;
            if ((p_48.f2 <= l_57))
            {
                short l_63 = (-1L);
                (*p_46) = l_58;
                l_64 = (0L & (((safe_sub_func_uint32_t_u_u(4294967287UL, (safe_unary_minus_func_uint8_t_u(((p_45 <= l_62) ^ (((((0x46159332L || l_57) && (0L >= g_52.f2)) < l_57) <= 0xE9L) >= l_63)))))) != p_45) == p_47));
                g_68 = (g_50.f2 != (safe_lshift_func_int8_t_s_s((((p_45 >= (g_50.f5 >= (p_48.f3 > (&g_3 != l_67)))) & g_50.f7) || (p_48.f3 & p_45)), p_45)));
                if (g_68)
                    continue;
            }
            else
            {
                (*p_46) = l_69;
            }
            g_50.f6 = ((g_50.f7 <= p_47) >= p_48.f2);
            for (l_62 = 0; (l_62 <= 2); l_62 += 1)
            {
                int **l_72 = &l_54[4][8][2];
                char *l_101 = (void*)0;
                int *l_104 = &g_5;
                for (g_5 = 2; (g_5 >= 0); g_5 -= 1)
                {
                    struct S0 *l_74 = &g_50;
                    struct S0 **l_73 = &l_74;
                    int i, j, k;
                    for (l_53 = 0; (l_53 <= 2); l_53 += 1)
                    {
                        struct S0 l_70 = {960,-34,33055,7,9,1,467,4046};
                        int i, j, k;
                        (*p_46) = l_70;
                        (*p_46) = l_71;
                        l_72 = &l_54[l_62][(g_5 + 2)][g_5];
                        g_50.f3 = g_50.f5;
                    }
                    (*l_73) = &g_50;
                    l_54[(l_62 + 1)][(g_5 + 6)][p_45] = l_54[1][8][0];
                }
                if ((l_71.f7 & p_45))
                {
                    char *l_78[6][10][3] = {{{&l_57,&l_57,&l_57},{&g_3,&l_57,&l_57},{&l_57,&g_3,&g_3},{&g_3,(void*)0,&l_57},{&l_57,&g_3,(void*)0},{&l_57,(void*)0,&g_3},{&g_3,&l_57,&l_57},{&g_3,&g_3,(void*)0},{(void*)0,&l_57,&g_3},{(void*)0,&l_57,&g_3}},{{&g_3,&l_57,&g_3},{&g_3,(void*)0,&g_3},{&l_57,&g_3,&g_3},{(void*)0,&g_3,(void*)0},{&l_57,&l_57,&l_57},{&l_57,&l_57,&g_3},{&l_57,&g_3,(void*)0},{&l_57,&g_3,&l_57},{&l_57,&g_3,&l_57},{&l_57,(void*)0,(void*)0}},{{&l_57,(void*)0,&l_57},{(void*)0,&l_57,&g_3},{&l_57,&g_3,&g_3},{&g_3,&l_57,&g_3},{&g_3,&g_3,&l_57},{(void*)0,&l_57,&l_57},{(void*)0,(void*)0,&g_3},{&g_3,(void*)0,&l_57},{&g_3,&g_3,&g_3},{&l_57,&g_3,(void*)0}},{{&l_57,&g_3,&g_3},{&g_3,&l_57,&l_57},{&g_3,&l_57,&g_3},{&l_57,&g_3,&l_57},{&l_57,&g_3,&l_57},{(void*)0,(void*)0,&g_3},{&l_57,&g_3,&g_3},{(void*)0,&l_57,&l_57},{&l_57,&g_3,&g_3},{&l_57,&g_3,&l_57}},{{&l_57,&l_57,&l_57},{&l_57,&g_3,&g_3},{&g_3,(void*)0,&l_57},{&g_3,&g_3,&l_57},{&g_3,&l_57,&l_57},{&g_3,&g_3,&g_3},{&l_57,&g_3,&l_57},{(void*)0,&l_57,&g_3},{&l_57,&g_3,&g_3},{(void*)0,(void*)0,&g_3}},{{&g_3,&l_57,&l_57},{&g_3,(void*)0,&g_3},{&g_3,&g_3,&l_57},{&g_3,(void*)0,&l_57},{&g_3,&g_3,&l_57},{&l_57,&l_57,&g_3},{&g_3,&g_3,&l_57},{&g_3,&l_57,&l_57},{&g_3,&l_57,&g_3},{&g_3,&l_57,&l_57}}};
                    int i, j, k;
                    (*p_46) = g_75[1][2][0];
                    (*p_46) = (*p_46);
                    if (l_71.f1)
                    {
                        const struct S1 *l_77[6][8] = {{&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52}};
                        const struct S1 **l_76 = &l_77[4][1];
                        int i, j;
                        (*l_76) = &p_48;


                        return l_67;


                    }
                    else
                    {
                        int i, j, k;
                        g_50.f1 = p_47;
                        l_54[(p_45 + 4)][(l_62 + 5)][l_62] = &p_45;
                        (*p_46) = l_58;
                    }
                }
                else
                {
                    struct S0 *l_80[9];
                    struct S0 **l_79 = &l_80[7];
                    char l_92[5];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_80[i] = (void*)0;
                    for (i = 0; i < 5; i++)
                        l_92[i] = (-1L);
                    (*l_72) = (*l_72);
                    (*l_79) = p_46;


                    if ((safe_rshift_func_uint16_t_u_u(g_3, 14)))
                    {
                        (*l_72) = &p_45;
                        g_50.f1 = ((void*)0 != l_83[2]);
                        g_50.f1 = ((void*)0 == l_86);
                        if (g_87)
                            continue;
                    }
                    else
                    {
                        union U2 *l_89 = &g_90[0];
                        union U2 **l_88 = &l_89;
                        int *l_91[7] = {&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5};
                        int i;
                        (*l_72) = &g_5;
                        (*l_88) = (void*)0;

                        ;
                        l_91[6] = &p_45;


                        return l_67;


                    }
                    l_69.f0 = (((g_85[3][4].f0 > l_71.f5) > (l_92[2] | (!l_64))) | (safe_mod_func_uint32_t_u_u((l_92[1] & ((void*)0 == &l_57)), (safe_sub_func_int16_t_s_s((((0xFDL <= 0x8EL) || (-1L)) | p_48.f1), p_48.f0)))));
                }
                if (l_69.f3)
                {
                    struct S1 *l_106 = &g_107;
                    for (l_64 = (-11); (l_64 < 8); l_64 = safe_add_func_uint8_t_u_u(l_64, 5))
                    {
                        const struct S0 *l_100[4][2] = {{(void*)0,&l_71},{(void*)0,&l_71},{(void*)0,&l_71},{(void*)0,&l_71}};
                        const struct S0 **l_99 = &l_100[0][1];
                        int i, j;
                        (*l_99) = &g_75[1][3][3];
                        return l_101;


                    }
                    for (l_64 = 0; (l_64 > (-7)); l_64 = safe_sub_func_int32_t_s_s(l_64, 8))
                    {
                        (*l_72) = l_104;
                        (*l_104) = p_48.f3;
                        (*p_46) = g_105;
                        (*l_104) = p_45;
                    }
                    l_54[1][8][0] = &g_5;
                    if (((&p_48 != &p_48) ^ 0x4E0973C7L))
                    {
                        (*l_104) = 0L;
                        l_106 = &g_85[2][8];

                        ;
                    }
                    else
                    {
                        union U2 *l_109[3];
                        union U2 **l_108 = &l_109[1];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_109[i] = &g_90[0];
                        (*l_108) = &g_90[7];
                    }

                    ;
                }
                else
                {
                    (*l_104) = ((safe_sub_func_uint16_t_u_u(((-1L) == (p_48.f0 && ((l_112 == l_114) < l_69.f4))), 0x040AL)) & ((g_105.f1 != 0x4740L) != l_71.f6));
                    for (g_107.f0 = 0; (g_107.f0 <= 2); g_107.f0 += 1)
                    {
                        (*p_46) = (*p_46);
                    }
                }
                l_69.f0 = (((safe_add_func_int32_t_s_s(((g_5 < p_48.f2) <= (g_52.f2 & l_69.f6)), ((0x90D8L | 0UL) > l_69.f3))) || p_48.f2) & ((p_48.f2 > p_48.f0) != p_48.f3));
            }
            g_50.f1 = g_75[1][2][0].f1;
        }
    }


    for (p_45 = 0; p_45 < 7; p_45 += 1)
    {
        for (g_5 = 0; g_5 < 9; g_5 += 1)
        {
            for (p_47 = 0; p_47 < 3; p_47 += 1)
            {
                l_54[p_45][g_5][p_47] = &g_5;
            }
        }
    }
    for (p_45 = (-4); (p_45 < 10); ++p_45)
    {
        int l_127 = 0L;
        const struct S1 *l_129 = &g_107;
        const struct S1 **l_128 = &l_129;
        int *l_133 = &l_127;
        int **l_154[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_154[i][j] = &l_54[1][8][0];
        }
        for (g_107.f3 = 2; (g_107.f3 >= 0); g_107.f3 -= 1)
        {
            const unsigned short l_131 = 8UL;
            union U2 * const *l_143 = (void*)0;
        }
        g_155 = l_54[1][8][0];

        ;
        g_155 = l_54[1][8][0];
        g_156 = &g_75[1][2][0];

        ;
    }


    return l_86;



}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    transparent_crc(g_50.f1, "g_50.f1", print_hash_value);
    transparent_crc(g_50.f2, "g_50.f2", print_hash_value);
    transparent_crc(g_50.f3, "g_50.f3", print_hash_value);
    transparent_crc(g_50.f4, "g_50.f4", print_hash_value);
    transparent_crc(g_50.f5, "g_50.f5", print_hash_value);
    transparent_crc(g_50.f6, "g_50.f6", print_hash_value);
    transparent_crc(g_50.f7, "g_50.f7", print_hash_value);
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_52.f1, "g_52.f1", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_52.f3, "g_52.f3", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_75[i][j][k].f0, "g_75[i][j][k].f0", print_hash_value);
                transparent_crc(g_75[i][j][k].f1, "g_75[i][j][k].f1", print_hash_value);
                transparent_crc(g_75[i][j][k].f2, "g_75[i][j][k].f2", print_hash_value);
                transparent_crc(g_75[i][j][k].f3, "g_75[i][j][k].f3", print_hash_value);
                transparent_crc(g_75[i][j][k].f4, "g_75[i][j][k].f4", print_hash_value);
                transparent_crc(g_75[i][j][k].f5, "g_75[i][j][k].f5", print_hash_value);
                transparent_crc(g_75[i][j][k].f6, "g_75[i][j][k].f6", print_hash_value);
                transparent_crc(g_75[i][j][k].f7, "g_75[i][j][k].f7", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_85[i][j].f0, "g_85[i][j].f0", print_hash_value);
            transparent_crc(g_85[i][j].f1, "g_85[i][j].f1", print_hash_value);
            transparent_crc(g_85[i][j].f2, "g_85[i][j].f2", print_hash_value);
            transparent_crc(g_85[i][j].f3, "g_85[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    transparent_crc(g_105.f1, "g_105.f1", print_hash_value);
    transparent_crc(g_105.f2, "g_105.f2", print_hash_value);
    transparent_crc(g_105.f3, "g_105.f3", print_hash_value);
    transparent_crc(g_105.f4, "g_105.f4", print_hash_value);
    transparent_crc(g_105.f5, "g_105.f5", print_hash_value);
    transparent_crc(g_105.f6, "g_105.f6", print_hash_value);
    transparent_crc(g_105.f7, "g_105.f7", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_107.f1, "g_107.f1", print_hash_value);
    transparent_crc(g_107.f2, "g_107.f2", print_hash_value);
    transparent_crc(g_107.f3, "g_107.f3", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_688, "g_688", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
