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
   short f0;
   volatile unsigned char f1;
   int f2;
   int f3;
   int f4;
};


static unsigned char g_7[8] = {0x95L, 0x95L, 0x95L, 0x95L, 0x95L, 0x95L, 0x95L, 0x95L};
static int g_9 = 0x2A8358BDL;
static int *g_8[4][4] = {{&g_9, &g_9, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}};
static volatile int g_24 = 0L;
static int g_25 = 0L;
static int g_39 = 1L;
static int *g_38[7][1] = {{&g_39}, {&g_39}, {&g_39}, {&g_39}, {&g_39}, {&g_39}, {&g_39}};
static int g_52[10][7][3] = {{{0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}}, {{0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}}, {{0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}}, {{0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}}, {{0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}}, {{0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}}, {{0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}}, {{0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}}, {{0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}}, {{0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}, {0xD333F0D2L, 0xACD6BCE8L, 2L}}};
static int g_55 = 0x448071C3L;
static char g_68 = 0x3FL;
static struct S0 g_77[10] = {{0x224DL,6UL,0xED79FF3DL,0L,-1L}, {0x224DL,6UL,0xED79FF3DL,0L,-1L}, {0xB7E4L,0xC2L,0x131A92BCL,0L,0xAEFD05EAL}, {0x224DL,6UL,0xED79FF3DL,0L,-1L}, {0x224DL,6UL,0xED79FF3DL,0L,-1L}, {0xB7E4L,0xC2L,0x131A92BCL,0L,0xAEFD05EAL}, {0x224DL,6UL,0xED79FF3DL,0L,-1L}, {0x224DL,6UL,0xED79FF3DL,0L,-1L}, {0xB7E4L,0xC2L,0x131A92BCL,0L,0xAEFD05EAL}, {0x224DL,6UL,0xED79FF3DL,0L,-1L}};
static struct S0 *g_76 = &g_77[0];
static char **g_90 = (void*)0;
static char ***g_89 = &g_90;
static unsigned g_93 = 0x1BFE60E4L;
static unsigned g_95 = 0UL;
static char g_105 = (-1L);
static short *g_118 = &g_77[0].f0;
static int **g_130 = (void*)0;
static unsigned g_133 = 4294967295UL;
static unsigned g_138 = 0x8CA7A099L;
static int *g_181 = &g_77[0].f2;
static unsigned char g_187[5] = {0xA1L, 1UL, 0xA1L, 1UL, 0xA1L};
static unsigned g_188 = 0x60D9F0A5L;
static unsigned g_223 = 0x70CD7328L;
static int *g_224[6] = {&g_55, &g_55, &g_55, &g_55, &g_55, &g_55};
static struct S0 g_250 = {-10L,0xE5L,0x00239C06L,-9L,1L};
static char g_266 = (-6L);
static struct S0 g_280 = {9L,0x2EL,0x9B4C6B08L,0xF6703680L,0x14F994BDL};
static struct S0 g_281 = {-4L,0UL,-1L,0x3068350EL,-1L};
static struct S0 g_282 = {1L,0x89L,-1L,6L,0x7F460535L};
static unsigned *g_354 = &g_188;
static unsigned **g_353 = &g_354;
static unsigned g_390 = 6UL;
static char g_397 = 0x71L;
static unsigned char g_399 = 0UL;
static unsigned short g_408 = 0x13F3L;
static struct S0 g_444 = {-1L,0xA1L,0L,0x92D13326L,6L};
static struct S0 g_445[1] = {{0x6327L,0xE3L,1L,0L,0x7CFE16B5L}};
static volatile struct S0 g_461 = {0x4375L,0xC6L,0xE6F554CBL,6L,0L};
static struct S0 g_467[7] = {{0L,0UL,-1L,0L,0xC84FD29EL}, {0L,0UL,-1L,0L,0xC84FD29EL}, {1L,1UL,-1L,0x56FD3D04L,0x68CA1A93L}, {0L,0UL,-1L,0L,0xC84FD29EL}, {0L,0UL,-1L,0L,0xC84FD29EL}, {1L,1UL,-1L,0x56FD3D04L,0x68CA1A93L}, {0L,0UL,-1L,0L,0xC84FD29EL}};
static unsigned short g_480 = 0UL;
static volatile struct S0 g_483 = {0L,9UL,0xF98F8624L,0x566BABBAL,0L};
static short **g_487 = &g_118;
static int *g_510[9] = {&g_444.f3, &g_444.f3, &g_444.f3, &g_444.f3, &g_444.f3, &g_444.f3, &g_444.f3, &g_444.f3, &g_444.f3};
static int **g_509 = &g_510[5];
static int *g_512 = &g_55;
static unsigned short *g_526 = &g_480;
static unsigned short **g_525 = &g_526;
static unsigned short ***g_524 = &g_525;
static struct S0 g_541 = {0xF470L,0x01L,1L,-7L,5L};
static struct S0 g_545 = {1L,0UL,-1L,0L,2L};
static volatile struct S0 g_546 = {-1L,0xDEL,-6L,0xD7E23857L,-6L};
static volatile struct S0 g_547[7][4][4] = {{{{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}}, {{{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}}, {{{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}}, {{{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}}, {{{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}}, {{{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}}, {{{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}, {{0xD421L,0x57L,-3L,0xE6766A29L,2L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xC44DL,0x14L,0L,0xA0D20F43L,0L}, {0xD421L,0x57L,-3L,0xE6766A29L,2L}}}};
static struct S0 g_549 = {0x5339L,2UL,0L,1L,-5L};
static volatile int *g_555 = &g_547[3][2][3].f2;
static unsigned short **g_610 = &g_526;



static unsigned func_1(void);
static int * func_2(unsigned p_3, int p_4, int * p_5, int * p_6);
static int * func_10(unsigned p_11, int p_12, int * p_13, int * p_14, short p_15);
static unsigned func_18(unsigned char p_19, unsigned short p_20, int * p_21);
static unsigned func_22(int * p_23);
static unsigned func_30(int p_31, int p_32);
static char func_40(unsigned p_41);
static unsigned func_42(int ** p_43, int ** p_44);
static int ** func_45(int p_46, int ** p_47, unsigned p_48, int ** p_49);
static int ** func_50(unsigned short p_51);
static unsigned func_1(void)
{
    unsigned char *l_398 = &g_399;
    int *l_400 = &g_282.f2;
    int l_580 = (-6L);
    int **l_585 = (void*)0;
    int **l_586 = (void*)0;
    int **l_587[1];
    int *l_607 = &g_77[0].f2;
    unsigned short ***l_608 = &g_525;
    unsigned short ****l_609[10][8] = {{&l_608, (void*)0, &g_524, &l_608, &g_524, &l_608, &l_608, &l_608}, {&l_608, (void*)0, &g_524, &l_608, &g_524, &l_608, &l_608, &l_608}, {&l_608, (void*)0, &g_524, &l_608, &g_524, &l_608, &l_608, &l_608}, {&l_608, (void*)0, &g_524, &l_608, &g_524, &l_608, &l_608, &l_608}, {&l_608, (void*)0, &g_524, &l_608, &g_524, &l_608, &l_608, &l_608}, {&l_608, (void*)0, &g_524, &l_608, &g_524, &l_608, &l_608, &l_608}, {&l_608, (void*)0, &g_524, &l_608, &g_524, &l_608, &l_608, &l_608}, {&l_608, (void*)0, &g_524, &l_608, &g_524, &l_608, &l_608, &l_608}, {&l_608, (void*)0, &g_524, &l_608, &g_524, &l_608, &l_608, &l_608}, {&l_608, (void*)0, &g_524, &l_608, &g_524, &l_608, &l_608, &l_608}};
    char l_613 = (-2L);
    char *l_614 = (void*)0;
    char *l_615 = &g_397;
    int i, j;
    for (i = 0; i < 1; i++)
        l_587[i] = (void*)0;
    g_8[3][1] = func_2(g_7[7], g_7[7], g_8[3][3], (g_224[0] = func_10(g_7[5], ((safe_lshift_func_uint16_t_u_u(g_9, (func_18((func_22(&g_9) == (safe_unary_minus_func_uint32_t_u((((*l_398) = (g_397 = g_77[0].f1)) <= g_187[0])))), g_250.f2, l_400) < g_280.f4))) <= l_580), &g_9, &g_9, g_7[6])));
    g_555 = &g_24;
    (*g_512) = ((l_608 != (g_524 = l_608)) || (((**g_487) ^ ((((*l_400) && (1L != (*l_400))) | ((*g_555) || ((((*g_524) = g_610) != (void*)0) & (-6L)))) >= (*l_400))) && (**g_610)));
    (*g_512) = (safe_add_func_int16_t_s_s((((*l_615) = l_613) > g_250.f3), (*g_526)));
    return g_281.f4;
}







static int * func_2(unsigned p_3, int p_4, int * p_5, int * p_6)
{
    unsigned short l_588 = 65535UL;
    unsigned l_591 = 0x34C39DCFL;
    int l_594 = 0x94E4D157L;
    int l_595 = 0x96DD4616L;
    unsigned short l_596 = 0x14D8L;
    (*p_5) = (l_588 == ((((safe_add_func_uint16_t_u_u((((**g_353) = (0xFDL != l_591)) > ((safe_mod_func_uint32_t_u_u(func_30((l_594 = p_4), l_595), l_591)) & p_3)), p_4)) == (-1L)) != l_588) != 0x1730L));
    if (l_596)
    {
        int *l_597[3][5][7] = {{{&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}, {&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}, {&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}, {&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}, {&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}}, {{&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}, {&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}, {&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}, {&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}, {&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}}, {{&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}, {&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}, {&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}, {&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}, {&g_445[0].f2, &l_594, &g_25, &g_549.f2, &g_77[0].f2, &g_282.f2, &g_25}}};
        int i, j, k;
        l_597[0][1][1] = l_597[0][4][0];
    }
    else
    {
        (*g_512) = (*p_5);
        for (l_594 = 16; (l_594 < 3); l_594 = safe_sub_func_int32_t_s_s(l_594, 1))
        {
            int l_600 = 8L;
            if ((*g_181))
                break;
            if (l_600)
                continue;
        }
        for (g_250.f0 = 8; (g_250.f0 >= 0); g_250.f0 -= 1)
        {
            for (g_55 = 8; (g_55 >= 0); g_55 -= 1)
            {
                volatile struct S0 *l_601 = &g_461;
                (*l_601) = g_461;
                if (l_594)
                    continue;
            }
            for (g_541.f2 = 0; (g_541.f2 <= 0); g_541.f2 += 1)
            {
                for (g_133 = 0; (g_133 <= 2); g_133 += 1)
                {
                    int i;
                    return g_510[(g_133 + 3)];
                }
            }
            for (g_281.f3 = 0; (g_281.f3 >= 0); g_281.f3 -= 1)
            {
                int **l_606 = &g_181;
                int i;
                (*l_606) = func_10(p_3, (*p_5), g_510[(g_281.f3 + 7)], &l_594, (safe_lshift_func_int8_t_s_s((&g_445[g_281.f3] != (void*)0), ((((safe_add_func_uint32_t_u_u((*g_354), (p_3 || p_3))) ^ (**g_353)) != 1L) & 0xA9L))));
            }
        }
    }
    return p_5;
}







static int * func_10(unsigned p_11, int p_12, int * p_13, int * p_14, short p_15)
{
    int *l_584[8] = {(void*)0, &g_55, (void*)0, &g_55, (void*)0, &g_55, (void*)0, &g_55};
    int i;
    for (g_281.f2 = 0; (g_281.f2 == (-3)); g_281.f2 = safe_sub_func_uint8_t_u_u(g_281.f2, 3))
    {
        int *l_583[4];
        int i;
        for (i = 0; i < 4; i++)
            l_583[i] = &g_445[0].f2;
        return l_583[3];
    }
    return l_584[2];
}







static unsigned func_18(unsigned char p_19, unsigned short p_20, int * p_21)
{
    int l_401[2][7] = {{0xEC87AE34L, 0x23E0CBF0L, 0xEC87AE34L, 0x23E0CBF0L, 0xEC87AE34L, 0x23E0CBF0L, 0xEC87AE34L}, {0xEC87AE34L, 0x23E0CBF0L, 0xEC87AE34L, 0x23E0CBF0L, 0xEC87AE34L, 0x23E0CBF0L, 0xEC87AE34L}};
    int l_402 = 0x427F3895L;
    unsigned short *l_407 = &g_408;
    struct S0 **l_410 = &g_76;
    struct S0 ***l_409 = &l_410;
    int *l_429 = &g_281.f3;
    int *l_432 = &l_401[1][2];
    unsigned l_470 = 0xCE0D4B44L;
    short **l_484 = &g_118;
    volatile struct S0 *l_579 = &g_546;
    int i, j;
    if ((func_40((l_401[1][6] = g_77[0].f1)) | (l_402 > (safe_lshift_func_uint16_t_u_u(((*l_407) = (safe_div_func_uint16_t_u_u(l_402, p_20))), g_282.f0)))))
    {
        int *l_436 = &g_25;
        struct S0 **l_474 = &g_76;
        int *l_513 = &g_280.f2;
        char l_517 = (-1L);
        if ((l_409 == &l_410))
        {
            int *l_418 = &g_280.f2;
            for (g_250.f0 = 16; (g_250.f0 >= 2); g_250.f0 = safe_sub_func_int32_t_s_s(g_250.f0, 6))
            {
                unsigned short l_417 = 0x12ADL;
                int **l_419 = &g_38[1][0];
                (*p_21) = (!1L);
                for (g_250.f2 = 0; (g_250.f2 < 6); g_250.f2 = safe_add_func_uint16_t_u_u(g_250.f2, 3))
                {
                    int **l_415 = (void*)0;
                    int **l_416 = &g_181;
                    (*l_416) = p_21;
                    for (g_95 = 1; (g_95 <= 4); g_95 += 1)
                    {
                        if (l_417)
                            break;
                    }
                }
                p_21 = ((*l_419) = l_418);
            }
            for (g_282.f2 = (-28); (g_282.f2 == 0); g_282.f2 = safe_add_func_int16_t_s_s(g_282.f2, 2))
            {
                int **l_431 = (void*)0;
                for (g_39 = 15; (g_39 == (-10)); g_39 = safe_sub_func_int32_t_s_s(g_39, 5))
                {
                    int **l_428 = (void*)0;
                    int **l_430 = &l_418;
                }
                p_21 = p_21;
                l_432 = p_21;
                return p_20;
            }
            for (l_402 = (-12); (l_402 <= 28); ++l_402)
            {
                unsigned short l_435[7] = {0UL, 0xC520L, 0UL, 0xC520L, 0UL, 0xC520L, 0UL};
                int **l_446 = &g_224[5];
                int i;
                if ((l_435[5] & l_435[5]))
                {
                    return (**g_353);
                }
                else
                {
                    int l_437 = 0x91109FB8L;
                    if ((0L ^ l_437))
                    {
                        int **l_438 = &l_432;
                        (*l_438) = &l_437;
                    }
                    else
                    {
                        int **l_439 = &l_432;
                        (*l_439) = p_21;
                        p_21 = ((*l_439) = &l_402);
                    }
                    if ((*l_418))
                        break;
                    if (((*l_436) = (((*l_418) > ((*g_354) > l_437)) <= (safe_lshift_func_uint16_t_u_s((*l_432), 3)))))
                    {
                        (*l_418) = 0x4AD1D157L;
                        g_445[0] = g_444;
                    }
                    else
                    {
                        return l_437;
                    }
                    for (g_95 = 0; (g_95 <= 1); g_95 += 1)
                    {
                        int i, j;
                        return l_401[g_95][(g_95 + 2)];
                    }
                }
                (*l_446) = p_21;
            }
        }
        else
        {
            unsigned char l_460 = 0UL;
            struct S0 *l_464 = &g_282;
            int l_476 = (-1L);
            int *l_530 = (void*)0;
            if ((*p_21))
            {
                int l_458 = 0L;
                p_21 = (void*)0;
                for (g_93 = 0; (g_93 <= 2); g_93 += 1)
                {
                    char l_451 = (-1L);
                    char ****l_459 = (void*)0;
                    volatile struct S0 *l_462 = &g_461;
                    int l_463 = 4L;
                    (*l_436) = (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((l_451 | ((*g_118) = func_40((~((g_399 = p_19) <= (safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s(func_40(((safe_div_func_int8_t_s_s(l_458, 0x07L)) ^ (&g_89 != l_459))), l_460)), (*l_432)))))))) > p_19) & g_282.f3), l_458)), 0x1BB2AE37L));
                    if (l_458)
                        continue;
                    (*l_432) = p_20;
                    (*l_462) = g_461;
                    for (l_402 = 0; (l_402 <= 2); l_402 += 1)
                    {
                        return l_463;
                    }
                }
                (**l_409) = l_464;
            }
            else
            {
                int *l_465 = (void*)0;
                int **l_466[2];
                char *l_471 = &g_105;
                short ***l_493 = &l_484;
                struct S0 *l_499 = (void*)0;
                int **l_511 = &l_429;
                int i;
                for (i = 0; i < 2; i++)
                    l_466[i] = (void*)0;
                l_432 = l_465;
                (*l_464) = g_467[2];
                if ((((*l_436) = (safe_sub_func_int8_t_s_s(l_470, ((*l_471) = l_460)))) > g_93))
                {
                    unsigned *l_475[2][1][7] = {{{(void*)0, (void*)0, &l_470, (void*)0, (void*)0, &l_470, (void*)0}}, {{(void*)0, (void*)0, &l_470, (void*)0, (void*)0, &l_470, (void*)0}}};
                    int *l_488 = &g_444.f2;
                    int i, j, k;
                    p_21 = p_21;
                    if (((p_20 ^ ((*l_407) = (safe_rshift_func_int8_t_s_s(((((*l_409) = l_474) == (void*)0) <= (l_476 = func_40((g_133 = g_282.f2)))), (p_19 > (l_471 != &g_187[1])))))) || 246UL))
                    {
                        unsigned short *l_479 = &g_480;
                        (*p_21) = (safe_sub_func_uint32_t_u_u(p_20, (~(((*g_354) = 0x0B1CABDCL) && ((**g_353) >= (((*l_479) = (l_460 | ((*l_436) = ((*l_407) = l_460)))) <= (safe_div_func_int16_t_s_s((*g_118), 1UL))))))));
                    }
                    else
                    {
                        short ***l_485 = (void*)0;
                        short ***l_486[8][9] = {{&l_484, &l_484, (void*)0, &l_484, &l_484, &l_484, &l_484, &l_484, (void*)0}, {&l_484, &l_484, (void*)0, &l_484, &l_484, &l_484, &l_484, &l_484, (void*)0}, {&l_484, &l_484, (void*)0, &l_484, &l_484, &l_484, &l_484, &l_484, (void*)0}, {&l_484, &l_484, (void*)0, &l_484, &l_484, &l_484, &l_484, &l_484, (void*)0}, {&l_484, &l_484, (void*)0, &l_484, &l_484, &l_484, &l_484, &l_484, (void*)0}, {&l_484, &l_484, (void*)0, &l_484, &l_484, &l_484, &l_484, &l_484, (void*)0}, {&l_484, &l_484, (void*)0, &l_484, &l_484, &l_484, &l_484, &l_484, (void*)0}, {&l_484, &l_484, (void*)0, &l_484, &l_484, &l_484, &l_484, &l_484, (void*)0}};
                        int i, j;
                        (*l_464) = g_483;
                        g_487 = l_484;
                        (*l_436) = 0xEE9E56D8L;
                    }
                    l_488 = &g_9;
                    for (g_250.f4 = 0; (g_250.f4 > 19); ++g_250.f4)
                    {
                        volatile int *l_492 = &g_483.f2;
                        volatile int **l_491 = &l_492;
                        (*l_491) = &g_24;
                        (*l_492) = ((void*)0 != l_493);
                    }
                }
                else
                {
                    unsigned l_500 = 0x06D19C9CL;
                    int *l_501 = &l_476;
                    unsigned short l_518 = 65531UL;
                    unsigned short ***l_527 = (void*)0;
                    for (p_19 = 22; (p_19 == 4); --p_19)
                    {
                        short l_496 = 0x33BBL;
                        return l_496;
                    }
                    for (g_282.f2 = 0; (g_282.f2 >= (-12)); g_282.f2 = safe_sub_func_int8_t_s_s(g_282.f2, 9))
                    {
                        g_461 = (*l_464);
                        l_499 = &g_282;
                        if ((*p_21))
                            break;
                        return l_500;
                    }
                    if (func_30(p_19, ((0x673EL && (((l_500 && 1UL) || (g_397 != (0x8256DCDBL != (+l_500)))) >= ((((*g_118) && l_476) >= p_20) != 1L))) ^ (*p_21))))
                    {
                        (*p_21) = (*l_436);
                        l_501 = &l_401[0][4];
                        (*l_464) = g_467[1];
                        (*l_501) = (safe_mod_func_uint32_t_u_u((((*g_181) ^ (*p_21)) && ((*g_354) = (safe_add_func_int8_t_s_s(0x56L, ((*l_471) = 0L))))), (*p_21)));
                    }
                    else
                    {
                        int **l_506 = &l_429;
                        int ***l_507 = (void*)0;
                        int ***l_508[6] = {&l_506, &l_506, &l_506, &l_506, &l_506, &l_506};
                        int l_514[2][1][6] = {{{0xF6716D16L, (-1L), 1L, (-1L), 0xF6716D16L, 0x7F6BA203L}}, {{0xF6716D16L, (-1L), 1L, (-1L), 0xF6716D16L, 0x7F6BA203L}}};
                        int i, j, k;
                        g_38[2][0] = p_21;
                        (*g_181) = ((g_509 = l_506) != (l_511 = &l_429));
                        (*g_181) = ((*p_21) = (((p_19 != ((((((p_20 && (g_250.f3 || (l_514[0][0][0] = g_467[2].f0))) <= 0x7FF15702L) >= ((*g_354) = (func_40(((*l_501) = (((***l_493) = ((*l_513) != ((safe_lshift_func_int16_t_s_u((*l_501), 4)) | p_20))) >= (*l_513)))) > (-4L)))) ^ 0xD3B4L) | l_517) || (*l_501))) & l_518) && p_20));
                        l_501 = (void*)0;
                    }
                    if ((*p_21))
                    {
                        (*l_464) = (*l_464);
                    }
                    else
                    {
                        (*g_512) = ((safe_rshift_func_uint16_t_u_s(((void*)0 != &g_354), (safe_rshift_func_uint16_t_u_s((((!(safe_unary_minus_func_int16_t_s((g_524 != l_527)))) <= ((*p_21) || (safe_lshift_func_int8_t_s_u((-10L), 6)))) <= (*p_21)), (0x183BDC22L > p_20))))) < p_20);
                        (*l_513) = (*p_21);
                        p_21 = l_530;
                    }
                }
            }
            (*l_464) = (*l_464);
            return (*g_354);
        }
    }
    else
    {
        int l_540 = 0xCC15AED4L;
        int *l_548[5] = {&l_401[1][0], &l_540, &l_401[1][0], &l_540, &l_401[1][0]};
        int i;
        for (g_390 = 8; (g_390 < 57); ++g_390)
        {
            int **l_533 = &g_38[2][0];
            (*l_533) = &g_55;
            if (((**g_353) < p_20))
            {
                int *l_536 = &g_39;
                struct S0 *l_542 = &g_445[0];
                for (g_444.f0 = 0; (g_444.f0 > 14); ++g_444.f0)
                {
                    int **l_537[6] = {&g_8[3][2], &g_8[3][2], (void*)0, &g_8[3][2], &g_8[3][2], (void*)0};
                    int i;
                    l_432 = ((*l_533) = l_536);
                }
                for (g_280.f3 = 1; (g_280.f3 < (-13)); g_280.f3--)
                {
                    (*p_21) = (!(8L <= func_40(l_540)));
                    return (*g_354);
                }
                (*l_542) = g_541;
                if (func_40(g_445[0].f2))
                {
                    for (g_266 = 4; (g_266 >= 0); g_266 -= 1)
                    {
                        (*l_542) = (*l_542);
                        (*l_533) = p_21;
                    }
                    if ((*p_21))
                        continue;
                    for (g_250.f3 = 0; (g_250.f3 <= 19); g_250.f3 = safe_add_func_int32_t_s_s(g_250.f3, 2))
                    {
                        (*l_542) = g_545;
                        g_547[3][2][3] = g_546;
                        l_548[1] = p_21;
                    }
                    (*l_536) = (*p_21);
                }
                else
                {
                    unsigned l_552[9][5] = {{0UL, 0UL, 0x43E53306L, 3UL, 1UL}, {0UL, 0UL, 0x43E53306L, 3UL, 1UL}, {0UL, 0UL, 0x43E53306L, 3UL, 1UL}, {0UL, 0UL, 0x43E53306L, 3UL, 1UL}, {0UL, 0UL, 0x43E53306L, 3UL, 1UL}, {0UL, 0UL, 0x43E53306L, 3UL, 1UL}, {0UL, 0UL, 0x43E53306L, 3UL, 1UL}, {0UL, 0UL, 0x43E53306L, 3UL, 1UL}, {0UL, 0UL, 0x43E53306L, 3UL, 1UL}};
                    int i, j;
                    (**l_409) = &g_445[0];
                    g_549 = (*g_76);
                    for (g_399 = 0; (g_399 != 26); ++g_399)
                    {
                        (*l_533) = p_21;
                        (*g_181) = l_552[2][3];
                    }
                    (*g_89) = (*g_89);
                }
            }
            else
            {
                return p_19;
            }
            for (g_408 = 3; (g_408 <= 38); g_408 = safe_add_func_uint8_t_u_u(g_408, 6))
            {
                return (**g_353);
            }
            for (g_105 = 0; (g_105 <= 4); g_105 += 1)
            {
                for (g_250.f0 = 3; (g_250.f0 <= 9); g_250.f0 += 1)
                {
                    return p_20;
                }
                for (g_138 = 2; (g_138 <= 9); g_138 += 1)
                {
                    int i;
                    (*l_533) = l_548[g_105];
                    g_77[g_138] = g_77[g_105];
                }
            }
        }
        g_555 = &g_24;
        for (g_280.f2 = (-8); (g_280.f2 >= 19); g_280.f2 = safe_add_func_uint32_t_u_u(g_280.f2, 1))
        {
            int **l_558[9] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
            int i;
            l_432 = p_21;
            l_548[3] = p_21;
        }
        (*p_21) = (g_281.f3 | ((safe_rshift_func_uint16_t_u_u(p_19, 14)) && (safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((((((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((-1L), ((*g_118) = (*g_118)))), (safe_mod_func_int8_t_s_s((g_105 = ((-5L) >= (*l_432))), p_20)))) & g_546.f0) == 1UL) | (*l_432)) || (*l_432)) < g_281.f0), (*l_432))), g_399))));
    }
    (*l_579) = g_547[3][2][3];
    return (*g_354);
}







static unsigned func_22(int * p_23)
{
    unsigned short l_33[6][1];
    int l_325 = 1L;
    unsigned l_328[7] = {4294967295UL, 0x07512484L, 4294967295UL, 0x07512484L, 4294967295UL, 0x07512484L, 4294967295UL};
    int *l_334 = &g_55;
    int **l_337 = &g_224[4];
    int *l_342 = &g_281.f4;
    int **l_343 = &g_38[2][0];
    unsigned short *l_344 = &l_33[4][0];
    unsigned *l_345 = &g_95;
    int l_395 = 0xB488B7F6L;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_33[i][j] = 1UL;
    }
    for (g_25 = 17; (g_25 < (-17)); g_25 = safe_sub_func_uint16_t_u_u(g_25, 2))
    {
        char l_320[7][7][5] = {{{(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}}, {{(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}}, {{(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}}, {{(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}}, {{(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}}, {{(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}}, {{(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}, {(-1L), 0x28L, 0L, (-1L), 0xEEL}}};
        int l_333 = (-1L);
        int i, j, k;
    }
    (*l_337) = &l_325;
    if ((safe_div_func_uint32_t_u_u(((*l_345) = (safe_div_func_uint16_t_u_u(((*l_344) = (g_105 ^ func_42(&g_224[4], func_45(((*l_342) = (func_40(((**l_337) ^ (**l_337))) > (*l_334))), (l_343 = &p_23), (*l_334), &l_334)))), 3UL))), (*l_334))))
    {
        int **l_346 = &g_181;
        struct S0 **l_349 = (void*)0;
        struct S0 **l_351 = (void*)0;
        struct S0 ***l_350 = &l_351;
        int l_352 = 0xB67DE844L;
        unsigned short **l_363 = &l_344;
        if ((func_42(&l_334, l_346) == (safe_sub_func_int16_t_s_s((l_349 == ((*l_350) = (void*)0)), (0x61F5L ^ l_352)))))
        {
            unsigned ***l_355 = &g_353;
            int l_360 = 0L;
            (*l_355) = g_353;
            (*g_181) = func_30(((**l_346) <= ((*g_181) != ((**l_346) & l_360))), (*g_181));
            for (g_281.f4 = 0; (g_281.f4 > (-22)); g_281.f4 = safe_sub_func_int8_t_s_s(g_281.f4, 4))
            {
                return (**g_353);
            }
        }
        else
        {
            unsigned short ***l_364 = &l_363;
            (*l_364) = l_363;
            g_76 = &g_280;
        }
        (*l_337) = (*l_343);
        (**l_346) = (**l_346);
    }
    else
    {
        unsigned char l_381[5] = {9UL, 255UL, 9UL, 255UL, 9UL};
        short l_391[4][6] = {{0xD057L, (-6L), 0xD16AL, 0x507EL, 0x507EL, 0xD16AL}, {0xD057L, (-6L), 0xD16AL, 0x507EL, 0x507EL, 0xD16AL}, {0xD057L, (-6L), 0xD16AL, 0x507EL, 0x507EL, 0xD16AL}, {0xD057L, (-6L), 0xD16AL, 0x507EL, 0x507EL, 0xD16AL}};
        unsigned *l_392 = (void*)0;
        unsigned *l_393 = &g_138;
        int l_394[7][8][4] = {{{0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}}, {{0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}}, {{0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}}, {{0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}}, {{0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}}, {{0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}}, {{0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}, {0x1B8838B3L, (-9L), 0x1B8838B3L, (-9L)}}};
        int i, j, k;
        l_394[1][5][3] = ((safe_sub_func_int32_t_s_s((*l_334), (safe_mod_func_uint8_t_u_u(((func_40(((*l_393) = (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((~(safe_mod_func_int32_t_s_s((((safe_div_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((0UL == (safe_add_func_int16_t_s_s((-5L), ((*g_118) = 5L)))), l_381[4])) != (*l_334)), (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((g_7[7] && ((safe_mod_func_int8_t_s_s((((*g_181) = (safe_add_func_int16_t_s_s((g_390 = (**l_343)), (l_381[4] != g_39)))) >= (-4L)), 0x2BL)) && l_381[4])), 0xA0F658CCL)), 0x741AL)))) > g_281.f3) | l_381[2]), l_391[2][1]))) == (*l_334)) && g_7[7]), (**l_343))), 1UL)))) || l_381[4]) && 0xE33D9CB2L), 0x11L)))) ^ l_381[4]);
    }
    return l_395;
}







static unsigned func_30(int p_31, int p_32)
{
    unsigned short l_34 = 0xCD95L;
    int **l_35 = (void*)0;
    int *l_37[4];
    int **l_36[5] = {&g_8[3][3], &l_37[1], &g_8[3][3], &l_37[1], &g_8[3][3]};
    int ***l_283 = &l_35;
    unsigned *l_287 = &g_138;
    char *l_311[9][3][6] = {{{&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}}, {{&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}}, {{&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}}, {{&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}}, {{&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}}, {{&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}}, {{&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}}, {{&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}}, {{&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}, {&g_68, &g_266, (void*)0, &g_105, &g_105, &g_105}}};
    unsigned *l_312 = &g_93;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_37[i] = &g_9;
    (*g_181) = (l_34 ^ ((&g_25 != (g_38[2][0] = &g_25)) ^ (0x945AD33DL == ((*l_312) = (p_32 | ((g_7[7] != (g_105 = func_40(((*l_287) = func_42(&l_37[1], func_45(g_9, ((*l_283) = func_50(((&l_37[2] == &l_37[1]) || 0x8D46C64EL))), g_93, &g_8[3][3])))))) || g_250.f2))))));
    for (g_39 = 1; (g_39 != 1); g_39++)
    {
        unsigned l_315 = 0xCCAAA314L;
        int l_317[8][3] = {{0x7CB180C5L, 7L, 1L}, {0x7CB180C5L, 7L, 1L}, {0x7CB180C5L, 7L, 1L}, {0x7CB180C5L, 7L, 1L}, {0x7CB180C5L, 7L, 1L}, {0x7CB180C5L, 7L, 1L}, {0x7CB180C5L, 7L, 1L}, {0x7CB180C5L, 7L, 1L}};
        int i, j;
        if (l_315)
        {
            int *l_316 = (void*)0;
            (*l_35) = l_316;
            (*g_181) = p_31;
            if (l_317[0][0])
                continue;
            if (l_317[0][0])
                break;
        }
        else
        {
            return l_317[0][0];
        }
        p_32 = 4L;
    }
    return p_31;
}







static char func_40(unsigned p_41)
{
    unsigned short l_292 = 0xE5B9L;
    int l_297 = 0x62337D7BL;
    short *l_302 = (void*)0;
    char *l_310 = &g_266;
    if ((safe_sub_func_int32_t_s_s(p_41, (safe_div_func_int32_t_s_s(((0xD7L & (l_292 = 0x8DL)) || (0xA8L | (l_292 <= 0x6FL))), g_250.f0)))))
    {
        char l_293 = (-4L);
        return l_293;
    }
    else
    {
        char l_296 = 0xB4L;
        int *l_298 = &g_39;
        for (l_292 = (-20); (l_292 < 2); l_292++)
        {
            int **l_299 = &l_298;
            (*g_181) = ((l_297 = l_296) >= p_41);
            (*l_299) = l_298;
            (*g_181) = (safe_add_func_int16_t_s_s(0x0BB0L, (l_302 != g_118)));
        }
        (*g_181) = 6L;
    }
    for (g_281.f4 = 4; (g_281.f4 < (-3)); g_281.f4 = safe_sub_func_int16_t_s_s(g_281.f4, 8))
    {
        unsigned l_305[5][2] = {{4294967291UL, 4294967291UL}, {4294967291UL, 4294967291UL}, {4294967291UL, 4294967291UL}, {4294967291UL, 4294967291UL}, {4294967291UL, 4294967291UL}};
        int *l_306 = (void*)0;
        int **l_307 = &g_224[0];
        int i, j;
        l_305[1][1] = 0L;
        (*l_307) = (l_306 = l_306);
    }
    l_297 = (g_250.f0 < ((*l_310) = (((+l_292) | (g_118 != l_302)) == (safe_add_func_int8_t_s_s(g_77[0].f0, l_297)))));
    return p_41;
}







static unsigned func_42(int ** p_43, int ** p_44)
{
    int *l_286 = &g_281.f2;
    (*p_44) = l_286;
    (*g_181) = 0xBB3C66BCL;
    return (*l_286);
}







static int ** func_45(int p_46, int ** p_47, unsigned p_48, int ** p_49)
{
    char l_284 = 0L;
    int **l_285 = &g_224[5];
    l_284 = ((*g_181) = (**p_49));
    return l_285;
}







static int ** func_50(unsigned short p_51)
{
    int *l_53[10] = {(void*)0, &g_9, (void*)0, &g_9, (void*)0, &g_9, (void*)0, &g_9, (void*)0, &g_9};
    struct S0 **l_96 = &g_76;
    short l_150 = 9L;
    char ***l_152 = &g_90;
    unsigned l_176 = 0xFFD4BF9CL;
    char l_242 = 0x7CL;
    unsigned short l_257 = 65535UL;
    unsigned short *l_265[5] = {&l_257, &l_257, &l_257, &l_257, &l_257};
    int *l_267 = (void*)0;
    struct S0 *l_279[5][2] = {{&g_282, &g_281}, {&g_282, &g_281}, {&g_282, &g_281}, {&g_282, &g_281}, {&g_282, &g_281}};
    int i, j;
    for (g_39 = 0; (g_39 <= 2); g_39 += 1)
    {
        int **l_54 = &l_53[5];
        int l_57 = 0x748928FFL;
        char ***l_91 = &g_90;
        int l_108 = 0x836AFDF5L;
        unsigned char l_117 = 255UL;
        int *l_143 = &g_55;
    }
    l_53[5] = l_53[5];
    for (g_55 = (-23); (g_55 == (-28)); g_55 = safe_sub_func_int16_t_s_s(g_55, 7))
    {
        char *l_165 = &g_68;
        int l_170 = 0x9A1BDC98L;
        int *l_175 = &g_55;
        int *l_194 = &g_9;
        unsigned short l_258 = 65535UL;
    }
    if ((((p_51 | (0x0C68L | p_51)) <= (g_266 = (safe_div_func_int16_t_s_s(0x9E80L, ((safe_lshift_func_uint16_t_u_s(((&g_188 != (void*)0) <= p_51), p_51)) || (p_51 == 0xFF057BBCL)))))) & 0x32FB8494L))
    {
        l_53[5] = l_267;
    }
    else
    {
        unsigned l_278 = 0x6A7331B4L;
        if (p_51)
        {
            int **l_268[3][9] = {{&g_224[1], &g_224[1], &l_53[1], &g_224[1], &g_224[1], &l_53[1], &g_224[1], &g_224[1], &l_53[1]}, {&g_224[1], &g_224[1], &l_53[1], &g_224[1], &g_224[1], &l_53[1], &g_224[1], &g_224[1], &l_53[1]}, {&g_224[1], &g_224[1], &l_53[1], &g_224[1], &g_224[1], &l_53[1], &g_224[1], &g_224[1], &l_53[1]}};
            int i, j;
            g_224[2] = l_53[5];
            for (g_68 = 0; (g_68 == (-19)); g_68--)
            {
                int l_277 = 0xD0834960L;
                if (p_51)
                    break;
                l_278 = (safe_sub_func_uint32_t_u_u((p_51 != p_51), ((safe_add_func_uint8_t_u_u(g_39, g_187[3])) != (l_277 = (safe_sub_func_uint32_t_u_u(g_93, p_51))))));
                if (p_51)
                    continue;
            }
        }
        else
        {
            g_224[0] = l_53[5];
        }
        (*g_181) = p_51;
        (*l_96) = l_279[4][1];
    }
    return &g_224[2];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_52[i][j][k], "g_52[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_77[i].f0, "g_77[i].f0", print_hash_value);
        transparent_crc(g_77[i].f1, "g_77[i].f1", print_hash_value);
        transparent_crc(g_77[i].f2, "g_77[i].f2", print_hash_value);
        transparent_crc(g_77[i].f3, "g_77[i].f3", print_hash_value);
        transparent_crc(g_77[i].f4, "g_77[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_187[i], "g_187[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_250.f0, "g_250.f0", print_hash_value);
    transparent_crc(g_250.f1, "g_250.f1", print_hash_value);
    transparent_crc(g_250.f2, "g_250.f2", print_hash_value);
    transparent_crc(g_250.f3, "g_250.f3", print_hash_value);
    transparent_crc(g_250.f4, "g_250.f4", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_280.f0, "g_280.f0", print_hash_value);
    transparent_crc(g_280.f1, "g_280.f1", print_hash_value);
    transparent_crc(g_280.f2, "g_280.f2", print_hash_value);
    transparent_crc(g_280.f3, "g_280.f3", print_hash_value);
    transparent_crc(g_280.f4, "g_280.f4", print_hash_value);
    transparent_crc(g_281.f0, "g_281.f0", print_hash_value);
    transparent_crc(g_281.f1, "g_281.f1", print_hash_value);
    transparent_crc(g_281.f2, "g_281.f2", print_hash_value);
    transparent_crc(g_281.f3, "g_281.f3", print_hash_value);
    transparent_crc(g_281.f4, "g_281.f4", print_hash_value);
    transparent_crc(g_282.f0, "g_282.f0", print_hash_value);
    transparent_crc(g_282.f1, "g_282.f1", print_hash_value);
    transparent_crc(g_282.f2, "g_282.f2", print_hash_value);
    transparent_crc(g_282.f3, "g_282.f3", print_hash_value);
    transparent_crc(g_282.f4, "g_282.f4", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_444.f0, "g_444.f0", print_hash_value);
    transparent_crc(g_444.f1, "g_444.f1", print_hash_value);
    transparent_crc(g_444.f2, "g_444.f2", print_hash_value);
    transparent_crc(g_444.f3, "g_444.f3", print_hash_value);
    transparent_crc(g_444.f4, "g_444.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_445[i].f0, "g_445[i].f0", print_hash_value);
        transparent_crc(g_445[i].f1, "g_445[i].f1", print_hash_value);
        transparent_crc(g_445[i].f2, "g_445[i].f2", print_hash_value);
        transparent_crc(g_445[i].f3, "g_445[i].f3", print_hash_value);
        transparent_crc(g_445[i].f4, "g_445[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_461.f0, "g_461.f0", print_hash_value);
    transparent_crc(g_461.f1, "g_461.f1", print_hash_value);
    transparent_crc(g_461.f2, "g_461.f2", print_hash_value);
    transparent_crc(g_461.f3, "g_461.f3", print_hash_value);
    transparent_crc(g_461.f4, "g_461.f4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_467[i].f0, "g_467[i].f0", print_hash_value);
        transparent_crc(g_467[i].f1, "g_467[i].f1", print_hash_value);
        transparent_crc(g_467[i].f2, "g_467[i].f2", print_hash_value);
        transparent_crc(g_467[i].f3, "g_467[i].f3", print_hash_value);
        transparent_crc(g_467[i].f4, "g_467[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_483.f0, "g_483.f0", print_hash_value);
    transparent_crc(g_483.f1, "g_483.f1", print_hash_value);
    transparent_crc(g_483.f2, "g_483.f2", print_hash_value);
    transparent_crc(g_483.f3, "g_483.f3", print_hash_value);
    transparent_crc(g_483.f4, "g_483.f4", print_hash_value);
    transparent_crc(g_541.f0, "g_541.f0", print_hash_value);
    transparent_crc(g_541.f1, "g_541.f1", print_hash_value);
    transparent_crc(g_541.f2, "g_541.f2", print_hash_value);
    transparent_crc(g_541.f3, "g_541.f3", print_hash_value);
    transparent_crc(g_541.f4, "g_541.f4", print_hash_value);
    transparent_crc(g_545.f0, "g_545.f0", print_hash_value);
    transparent_crc(g_545.f1, "g_545.f1", print_hash_value);
    transparent_crc(g_545.f2, "g_545.f2", print_hash_value);
    transparent_crc(g_545.f3, "g_545.f3", print_hash_value);
    transparent_crc(g_545.f4, "g_545.f4", print_hash_value);
    transparent_crc(g_546.f0, "g_546.f0", print_hash_value);
    transparent_crc(g_546.f1, "g_546.f1", print_hash_value);
    transparent_crc(g_546.f2, "g_546.f2", print_hash_value);
    transparent_crc(g_546.f3, "g_546.f3", print_hash_value);
    transparent_crc(g_546.f4, "g_546.f4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_547[i][j][k].f0, "g_547[i][j][k].f0", print_hash_value);
                transparent_crc(g_547[i][j][k].f1, "g_547[i][j][k].f1", print_hash_value);
                transparent_crc(g_547[i][j][k].f2, "g_547[i][j][k].f2", print_hash_value);
                transparent_crc(g_547[i][j][k].f3, "g_547[i][j][k].f3", print_hash_value);
                transparent_crc(g_547[i][j][k].f4, "g_547[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_549.f0, "g_549.f0", print_hash_value);
    transparent_crc(g_549.f1, "g_549.f1", print_hash_value);
    transparent_crc(g_549.f2, "g_549.f2", print_hash_value);
    transparent_crc(g_549.f3, "g_549.f3", print_hash_value);
    transparent_crc(g_549.f4, "g_549.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
