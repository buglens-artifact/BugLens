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
};

struct S1 {
   unsigned f0;
   char f1;
   int f2;
   signed f3 : 19;
   unsigned char f4;
   unsigned f5;
   signed f6 : 7;
};

struct S2 {
   signed f0 : 8;
   unsigned f1 : 5;
   signed f2 : 28;
   signed f3 : 24;
};


static unsigned short g_11 = 0x43C6L;
static unsigned char g_53 = 0xAFL;
static struct S2 g_71 = {8,0,-1097,200};
static unsigned g_87 = 6UL;
static unsigned char g_88 = 0UL;
static struct S1 g_90 = {0xFC8BAB22L,0xEBL,0x55BD1B84L,-223,1UL,4294967295UL,-7};
static struct S1 g_94[4] = {{0xCB67721BL,-1L,0x00AFC629L,312,0x27L,0x8467E5F3L,-9}, {0UL,1L,3L,-56,253UL,0x543CBDA1L,9}, {0xCB67721BL,-1L,0x00AFC629L,312,0x27L,0x8467E5F3L,-9}, {0UL,1L,3L,-56,253UL,0x543CBDA1L,9}};
static struct S0 g_109 = {-9L};
static int g_111[7][6][5] = {{{(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}}, {{(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}}, {{(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}}, {{(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}}, {{(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}}, {{(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}}, {{(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}, {(-1L), 6L, 0L, 0xD308ECB2L, 0xE59EB031L}}};
static struct S0 g_142 = {-3L};
static unsigned char g_201 = 0xE7L;
static short g_245 = 0x1A44L;
static int g_291 = 0L;
static unsigned g_296[6] = {1UL, 1UL, 1UL, 1UL, 1UL, 1UL};
static unsigned g_335 = 0x80600A61L;
static struct S0 g_346 = {-1L};
static int g_350[1] = {0L};



static struct S2 func_1(void);
static unsigned char func_3(unsigned p_4, struct S0 p_5, unsigned p_6, short p_7, int p_8);
static struct S0 func_12(unsigned short p_13, short p_14, struct S0 p_15);
static unsigned short func_16(int p_17, short p_18, short p_19, char p_20, struct S2 p_21);
static unsigned char func_25(unsigned p_26);
static char func_46(unsigned short p_47, unsigned char p_48, unsigned p_49);
static int func_54(unsigned short p_55, unsigned p_56, short p_57, unsigned char p_58);
static int func_62(unsigned char p_63, struct S0 p_64);
static struct S0 func_65(struct S2 p_66, struct S2 p_67, unsigned p_68, unsigned char p_69);
static unsigned func_72(unsigned p_73, unsigned short p_74, int p_75, int p_76);
static struct S2 func_1(void)
{
    unsigned char l_22[7][9] = {{255UL, 0x9EL, 7UL, 0xA4L, 254UL, 0xA4L, 7UL, 0x9EL, 255UL}, {255UL, 0x9EL, 7UL, 0xA4L, 254UL, 0xA4L, 7UL, 0x9EL, 255UL}, {255UL, 0x9EL, 7UL, 0xA4L, 254UL, 0xA4L, 7UL, 0x9EL, 255UL}, {255UL, 0x9EL, 7UL, 0xA4L, 254UL, 0xA4L, 7UL, 0x9EL, 255UL}, {255UL, 0x9EL, 7UL, 0xA4L, 254UL, 0xA4L, 7UL, 0x9EL, 255UL}, {255UL, 0x9EL, 7UL, 0xA4L, 254UL, 0xA4L, 7UL, 0x9EL, 255UL}, {255UL, 0x9EL, 7UL, 0xA4L, 254UL, 0xA4L, 7UL, 0x9EL, 255UL}};
    short l_39 = 0x2601L;
    short l_52 = 0x62BFL;
    int l_315 = 0xC0345321L;
    struct S2 l_326 = {3,3,4435,1591};
    int l_345 = 1L;
    char l_488 = 0L;
    unsigned short l_491 = 65529UL;
    int i, j;
    l_491 = (safe_unary_minus_func_uint8_t_u(func_3((safe_rshift_func_uint8_t_u_u(g_11, 6)), func_12(func_16(l_22[4][3], (safe_mul_func_uint8_t_u_u(((func_25((safe_add_func_uint16_t_u_u((l_315 = (safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s(5L, (safe_sub_func_int32_t_s_s((g_11 ^ (safe_sub_func_int8_t_s_s((l_39 <= (safe_sub_func_int16_t_s_s(l_22[4][3], (safe_rshift_func_uint8_t_u_s(g_11, 0))))), (safe_rshift_func_int8_t_s_u(func_46(l_39, (safe_sub_func_uint32_t_u_u(l_39, l_52)), g_11), 0))))), 0xFCD69D5AL)))) != g_11), 4)) != g_90.f3), 8))), l_22[4][2]))) && 0UL) > l_22[4][3]), l_22[3][4])), l_52, l_52, l_326), l_345, g_346), g_11, l_488, g_11)));
    return l_326;
}







static unsigned char func_3(unsigned p_4, struct S0 p_5, unsigned p_6, short p_7, int p_8)
{
    char l_489[7][6][6] = {{{(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}}, {{(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}}, {{(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}}, {{(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}}, {{(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}}, {{(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}}, {{(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}, {(-1L), 0L, (-9L), (-8L), (-1L), (-6L)}}};
    short l_490 = 0x4970L;
    int i, j, k;
    g_71.f2 = (((~((0x10L != (-8L)) < l_489[5][3][5])) ^ l_490) || (p_4 || 249UL));
    return p_4;
}







static struct S0 func_12(unsigned short p_13, short p_14, struct S0 p_15)
{
    unsigned l_368 = 0xBB68870BL;
    int l_374 = 0x5D9367DCL;
    struct S2 l_391 = {13,2,10314,86};
    struct S2 l_392[10][9][2] = {{{{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}}, {{{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}}, {{{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}}, {{{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}}, {{{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}}, {{{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}}, {{{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}}, {{{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}}, {{{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}}, {{{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}, {{3,4,3837,-1273}, {0,4,918,3650}}}};
    unsigned short l_420 = 65535UL;
    int l_423 = 0x9D3171E3L;
    unsigned short l_463 = 65534UL;
    int i, j, k;
    g_350[0] = (safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint8_t_u_u(g_94[2].f0, 1))));
    for (g_245 = 3; (g_245 >= 0); g_245 -= 1)
    {
        char l_375 = (-4L);
        int l_393 = 0x744CB75AL;
        int l_439 = 0L;
        int l_442 = 0xB7A86694L;
        g_94[2].f3 = g_71.f2;
        for (p_14 = 0; (p_14 <= 4); p_14 += 1)
        {
            short l_370 = 8L;
            struct S1 l_376 = {0xCE8864CAL,0x4DL,1L,33,0UL,4294967295UL,3};
            for (g_90.f4 = 0; (g_90.f4 <= 3); g_90.f4 += 1)
            {
                unsigned char l_372 = 3UL;
                int i, j, k;
                for (g_90.f5 = 0; (g_90.f5 <= 4); g_90.f5 += 1)
                {
                    unsigned short l_369 = 3UL;
                    int l_371[2];
                    int l_373[6] = {0L, 2L, 0L, 2L, 0L, 2L};
                    unsigned l_389 = 0x6F4DAA74L;
                    struct S0 l_390 = {0x1FB1L};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_371[i] = (-2L);
                    for (g_87 = 0; (g_87 <= 5); g_87 += 1)
                    {
                        int l_365[2][1];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_365[i][j] = 0xD1C85215L;
                        }
                        g_291 ^= ((((safe_rshift_func_uint16_t_u_s(g_111[(g_90.f4 + 2)][g_90.f5][(g_245 + 1)], ((safe_lshift_func_int8_t_s_u(g_111[p_14][p_14][g_90.f5], 0)) <= 0xCCL))) != (l_373[4] |= (+(l_372 = (safe_add_func_int8_t_s_s(((0UL <= g_111[g_87][g_245][g_90.f5]) & g_111[(p_14 + 2)][(p_14 + 1)][g_245]), ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_111[(g_90.f5 + 1)][g_245][g_90.f5], (l_371[1] = ((g_142.f0 = (p_15.f0 = ((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_365[1][0] = g_296[g_87]), (((l_369 = (safe_mul_func_uint8_t_u_u(((l_368 &= g_142.f0) & p_14), p_13))) > p_15.f0) | g_71.f1))), l_370)) & p_15.f0))) != 0x691CL)))), 1UL)) & g_71.f2))))))) == p_14) == p_13);
                        l_375 = (l_374 |= p_13);
                    }
                    for (l_369 = 0; (l_369 <= 3); l_369 += 1)
                    {
                        int i, j, k;
                        l_376 = g_94[g_245];
                        g_71.f3 |= g_111[(g_90.f4 + 1)][(g_245 + 2)][(g_90.f4 + 1)];
                        l_389 = (0xD92AL & (g_296[p_14] < (~(safe_mul_func_int8_t_s_s(((g_94[2].f5 && ((safe_lshift_func_uint16_t_u_u(g_296[0], 4)) > (safe_mul_func_int8_t_s_s(0xC0L, (safe_mul_func_uint8_t_u_u(g_71.f2, (((p_15.f0 > (g_109.f0 = (safe_mod_func_uint8_t_u_u((g_94[g_245].f6 = ((l_376.f2 = (g_88 & g_94[g_245].f0)) & 0x74EE4CC7L)), p_15.f0)))) > 0x4903L) | g_350[0]))))))) >= l_368), p_13)))));
                    }
                    return l_390;
                }
                for (g_53 = 0; g_53 < 7; g_53 += 1)
                {
                    for (g_88 = 0; g_88 < 6; g_88 += 1)
                    {
                        for (g_87 = 0; g_87 < 5; g_87 += 1)
                        {
                            g_111[g_53][g_88][g_87] = 0xF8195720L;
                        }
                    }
                }
                l_392[5][2][1] = (g_71 = l_391);
                g_71.f2 &= (l_393 = g_111[(g_245 + 2)][(p_14 + 1)][p_14]);
            }
            l_391.f2 &= (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(0x36L, (0x97C41DA4L == g_94[2].f4))), 7)) & 0x5D3CL), (((0xDF04L <= l_392[5][2][1].f0) < (safe_rshift_func_int16_t_s_u((p_15.f0 = (safe_rshift_func_uint16_t_u_u(l_391.f3, 9))), 6))) != 0x94L))) != p_13), l_391.f3)), 7L));
            g_71.f2 ^= (l_370 > (p_15.f0 <= g_296[0]));
            for (g_90.f1 = 0; (g_90.f1 <= 3); g_90.f1 += 1)
            {
                unsigned l_410 = 4UL;
                int l_411 = 0x2437B8C2L;
                g_71.f0 = (0x0DL >= ((safe_mul_func_int8_t_s_s(6L, ((l_411 = l_410) == (0xCCL >= l_375)))) > (2L <= func_72(g_88, p_13, p_13, p_15.f0))));
                l_391.f3 ^= ((0x5DL ^ (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s(func_72(l_392[5][2][1].f3, (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(0x8BL, 3)), l_420)), (safe_rshift_func_int8_t_s_s(((p_14 ^ g_53) >= g_245), 6)), l_423), p_13)) <= p_15.f0), l_375))) >= p_14);
            }
        }
        if (l_393)
            break;
        for (g_90.f4 = 0; (g_90.f4 <= 4); g_90.f4 += 1)
        {
            struct S0 l_428 = {7L};
            short l_462 = 1L;
            int l_471 = 0x796044DCL;
            unsigned char l_480[6][10] = {{1UL, 6UL, 0x0DL, 0UL, 6UL, 0xEFL, 6UL, 0UL, 0x0DL, 6UL}, {1UL, 6UL, 0x0DL, 0UL, 6UL, 0xEFL, 6UL, 0UL, 0x0DL, 6UL}, {1UL, 6UL, 0x0DL, 0UL, 6UL, 0xEFL, 6UL, 0UL, 0x0DL, 6UL}, {1UL, 6UL, 0x0DL, 0UL, 6UL, 0xEFL, 6UL, 0UL, 0x0DL, 6UL}, {1UL, 6UL, 0x0DL, 0UL, 6UL, 0xEFL, 6UL, 0UL, 0x0DL, 6UL}, {1UL, 6UL, 0x0DL, 0UL, 6UL, 0xEFL, 6UL, 0UL, 0x0DL, 6UL}};
            int i, j;
            for (g_142.f0 = 0; g_142.f0 < 4; g_142.f0 += 1)
            {
                struct S1 tmp = {0xB22B6AAFL,0x2EL,-8L,-470,0x9CL,0UL,9};
                g_94[g_142.f0] = tmp;
            }
            for (l_393 = 3; (l_393 >= 0); l_393 -= 1)
            {
                struct S2 l_426 = {6,3,7298,3611};
                int l_464 = 1L;
                int i, j, k;
                if ((safe_mod_func_uint16_t_u_u(g_111[(g_245 + 1)][(l_393 + 1)][(l_393 + 1)], g_111[(g_245 + 1)][(l_393 + 2)][g_245])))
                {
                    int l_427 = (-4L);
                    int i, j, k;
                    l_428 = func_65(l_426, g_71, ((g_111[g_90.f4][g_90.f4][g_90.f4] < g_245) & p_13), (l_427 &= 1UL));
                    if (p_13)
                        break;
                    l_426.f0 = ((safe_mod_func_int32_t_s_s(0x24942BC4L, (safe_sub_func_int32_t_s_s((l_368 > (g_90.f1 && (p_13 ^ ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_350[0], (safe_add_func_uint8_t_u_u(l_439, 0x21L)))), (l_427 = (safe_mul_func_uint16_t_u_u((l_442 |= (l_428.f0 & 0x0DL)), 0x4025L))))) & l_428.f0)))), g_71.f1)))) != g_94[2].f3);
                }
                else
                {
                    for (g_109.f0 = 0; (g_109.f0 <= 3); g_109.f0 += 1)
                    {
                        struct S2 l_443 = {-10,0,5169,-2101};
                        int i, j, k;
                        l_443 = l_426;
                        l_463 |= func_72(g_296[g_109.f0], (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((((-1L) > func_72(g_296[g_245], l_439, g_94[2].f6, (g_111[(g_245 + 1)][(g_90.f4 + 1)][(g_109.f0 + 1)] = ((safe_rshift_func_int8_t_s_s(((~(g_94[2].f0 && ((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(1UL, (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_296[g_109.f0], l_443.f1)), g_346.f0)))), 0x06A1L)) | l_393), g_296[g_245])) | p_13))) < 0xBBA0L), 0)) > p_15.f0)))) && l_393), g_109.f0)) > p_13) == p_13), l_439)), l_426.f3)), g_71.f1, l_462);
                    }
                    l_426.f3 |= (g_90.f0 & l_464);
                    for (l_462 = 0; (l_462 <= 3); l_462 += 1)
                    {
                        struct S2 l_465 = {-1,0,11792,-1497};
                        l_465 = g_71;
                        l_471 ^= (safe_mul_func_int16_t_s_s(g_350[0], (safe_unary_minus_func_int32_t_s((safe_sub_func_int16_t_s_s(func_72(p_14, p_13, p_15.f0, g_94[2].f1), g_111[5][5][1]))))));
                        if (l_462)
                            continue;
                    }
                    g_90.f3 |= g_346.f0;
                }
            }
            l_480[4][2] ^= (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u((((g_53 == (((g_111[1][1][0] | 4294967295UL) < ((-10L) && 8UL)) > (safe_sub_func_int16_t_s_s((g_296[2] == p_14), g_71.f2)))) != (0x7EL & g_71.f1)) | l_375), p_15.f0)) || 1L) == g_245) == p_15.f0), p_14)), 247UL));
            for (p_15.f0 = 3; (p_15.f0 >= 0); p_15.f0 -= 1)
            {
                struct S2 l_487[9][4] = {{{5,1,-12618,1287}, {-14,2,5078,-150}, {0,1,10729,-1822}, {-14,2,5078,-150}}, {{5,1,-12618,1287}, {-14,2,5078,-150}, {0,1,10729,-1822}, {-14,2,5078,-150}}, {{5,1,-12618,1287}, {-14,2,5078,-150}, {0,1,10729,-1822}, {-14,2,5078,-150}}, {{5,1,-12618,1287}, {-14,2,5078,-150}, {0,1,10729,-1822}, {-14,2,5078,-150}}, {{5,1,-12618,1287}, {-14,2,5078,-150}, {0,1,10729,-1822}, {-14,2,5078,-150}}, {{5,1,-12618,1287}, {-14,2,5078,-150}, {0,1,10729,-1822}, {-14,2,5078,-150}}, {{5,1,-12618,1287}, {-14,2,5078,-150}, {0,1,10729,-1822}, {-14,2,5078,-150}}, {{5,1,-12618,1287}, {-14,2,5078,-150}, {0,1,10729,-1822}, {-14,2,5078,-150}}, {{5,1,-12618,1287}, {-14,2,5078,-150}, {0,1,10729,-1822}, {-14,2,5078,-150}}};
                int i, j;
                g_94[2] = g_94[g_245];
                for (l_439 = 0; (l_439 <= 0); l_439 += 1)
                {
                    int i;
                    if (g_350[l_439])
                    {
                        int i;
                        g_350[l_439] = ((-1L) < g_350[l_439]);
                        return g_142;
                    }
                    else
                    {
                        int i;
                        l_442 = func_62((g_350[l_439] | (0x2DL ^ ((l_471 &= (0x3C3CL <= g_350[l_439])) < (safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_296[0], (safe_rshift_func_int16_t_s_u((g_90.f6 != (l_463 || (p_15.f0 ^ g_94[g_245].f1))), p_14)))), g_350[l_439]))))), g_142);
                        g_291 &= p_14;
                    }
                    g_71 = l_487[0][0];
                    l_487[0][0].f0 = p_14;
                }
            }
        }
    }
    return p_15;
}







static unsigned short func_16(int p_17, short p_18, short p_19, char p_20, struct S2 p_21)
{
    unsigned short l_338 = 65535UL;
    unsigned short l_341 = 0x083DL;
    short l_342 = (-1L);
    unsigned l_343 = 0UL;
    p_21.f0 ^= (0x607DL != (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(func_46((g_335 = g_109.f0), func_72(g_90.f5, ((250UL > (safe_sub_func_int16_t_s_s((l_338 = p_18), p_18))) && (((safe_add_func_int16_t_s_s(g_90.f1, l_338)) <= g_201) | (-7L))), l_341, g_201), l_341), l_342)) ^ p_20), p_21.f1)) | g_90.f3), 4)), l_343)));
    for (p_19 = 0; (p_19 <= 3); p_19 += 1)
    {
        unsigned char l_344 = 246UL;
        if (l_344)
            break;
    }
    return p_21.f1;
}







static unsigned char func_25(unsigned p_26)
{
    unsigned l_322[7][5][1] = {{{4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}}, {{4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}}, {{4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}}, {{4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}}, {{4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}}, {{4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}}, {{4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}, {4294967293UL}}};
    unsigned l_323 = 0xE1AC9647L;
    int l_324 = 0xC861F6D0L;
    int l_325 = 0L;
    int i, j, k;
    for (g_201 = 0; (g_201 > 57); ++g_201)
    {
        unsigned l_318 = 0UL;
        unsigned char l_319[8] = {7UL, 7UL, 252UL, 7UL, 7UL, 252UL, 7UL, 7UL};
        int i;
        l_319[5] = l_318;
    }
    l_325 |= (safe_add_func_int8_t_s_s((l_322[6][0][0] || func_62(l_323, g_109)), (((((l_324 = 4L) ^ ((p_26 < p_26) || l_322[6][1][0])) >= ((g_11 && l_323) < 0x048DL)) <= 9UL) < p_26)));
    return l_324;
}







static char func_46(unsigned short p_47, unsigned char p_48, unsigned p_49)
{
    short l_59 = 1L;
    struct S2 l_70 = {15,3,-10284,-1208};
    g_53 &= (0x03L || g_11);
    l_70.f3 = ((func_54(l_59, p_49, p_47, ((safe_add_func_uint8_t_u_u(l_59, (func_62(g_11, func_65(l_70, g_71, func_72(l_70.f0, (safe_rshift_func_int16_t_s_s(g_11, 11)), g_71.f0, g_53), g_71.f1)) < p_48))) & 1L)) | (-1L)) ^ 0xA6C9B00FL);
    return p_47;
}







static int func_54(unsigned short p_55, unsigned p_56, short p_57, unsigned char p_58)
{
    int l_214 = 0x68524F43L;
    int l_216 = 0xD4B98113L;
    struct S0 l_313 = {0x9761L};
    unsigned short l_314[2][4][5] = {{{0xE1ADL, 0x6203L, 1UL, 0x03FEL, 0UL}, {0xE1ADL, 0x6203L, 1UL, 0x03FEL, 0UL}, {0xE1ADL, 0x6203L, 1UL, 0x03FEL, 0UL}, {0xE1ADL, 0x6203L, 1UL, 0x03FEL, 0UL}}, {{0xE1ADL, 0x6203L, 1UL, 0x03FEL, 0UL}, {0xE1ADL, 0x6203L, 1UL, 0x03FEL, 0UL}, {0xE1ADL, 0x6203L, 1UL, 0x03FEL, 0UL}, {0xE1ADL, 0x6203L, 1UL, 0x03FEL, 0UL}}};
    int i, j, k;
    g_94[2] = g_94[2];
    for (g_90.f2 = 0; (g_90.f2 <= (-14)); g_90.f2 = safe_sub_func_uint8_t_u_u(g_90.f2, 7))
    {
        unsigned short l_212 = 0x3A82L;
        int l_213 = 0L;
        int l_278 = 0L;
        for (p_57 = 0; (p_57 <= 3); p_57 += 1)
        {
            unsigned short l_215 = 0UL;
            unsigned l_224[8][5][2] = {{{0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}}, {{0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}}, {{0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}}, {{0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}}, {{0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}}, {{0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}}, {{0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}}, {{0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}, {0xFE3E4855L, 4294967292UL}}};
            int l_246 = 0xD96A4606L;
            int i, j, k;
            g_94[2].f6 |= g_11;
            for (g_53 = 0; (g_53 <= 3); g_53 += 1)
            {
                struct S2 l_208 = {6,2,12107,1822};
                struct S0 l_218[2][10] = {{{3L}, {-3L}, {0xF456L}, {0xF456L}, {-3L}, {3L}, {-3L}, {0xF456L}, {0xF456L}, {-3L}}, {{3L}, {-3L}, {0xF456L}, {0xF456L}, {-3L}, {3L}, {-3L}, {0xF456L}, {0xF456L}, {-3L}}};
                int i, j;
                for (p_55 = 0; (p_55 <= 4); p_55 += 1)
                {
                    struct S0 l_217 = {0L};
                    short l_221[7][6][6] = {{{1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}}, {{1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}}, {{1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}}, {{1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}}, {{1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}}, {{1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}}, {{1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}, {1L, (-3L), (-1L), (-4L), 0xC69AL, 0x7485L}}};
                    int i, j, k;
                    for (g_90.f4 = 0; (g_90.f4 <= 3); g_90.f4 += 1)
                    {
                        unsigned l_211[9][4] = {{0UL, 4294967293UL, 0x8B5351F7L, 1UL}, {0UL, 4294967293UL, 0x8B5351F7L, 1UL}, {0UL, 4294967293UL, 0x8B5351F7L, 1UL}, {0UL, 4294967293UL, 0x8B5351F7L, 1UL}, {0UL, 4294967293UL, 0x8B5351F7L, 1UL}, {0UL, 4294967293UL, 0x8B5351F7L, 1UL}, {0UL, 4294967293UL, 0x8B5351F7L, 1UL}, {0UL, 4294967293UL, 0x8B5351F7L, 1UL}, {0UL, 4294967293UL, 0x8B5351F7L, 1UL}};
                        int i, j;
                        g_94[g_53] = g_94[g_53];
                        g_71 = l_208;
                        if (p_55)
                            break;
                        l_216 ^= (safe_rshift_func_int16_t_s_s(((((p_57 < (0x52L >= ((l_214 = (((l_211[6][2] || ((((p_56 & (g_88 &= ((0UL > g_94[2].f2) | 0xBC64D5B5L))) >= (((l_213 = l_212) > (g_109.f0 > g_94[2].f4)) == g_90.f5)) ^ 0xFFL) || 65535UL)) > 0x23L) ^ g_94[2].f4)) <= l_215))) <= g_71.f1) ^ g_90.f2) || p_55), 7));
                    }
                    l_218[0][5] = l_217;
                    if (((g_94[2].f3 = ((safe_sub_func_int16_t_s_s((p_55 != l_215), (l_221[6][1][1] = (l_217.f0 && l_213)))) == (safe_lshift_func_uint16_t_u_s(l_217.f0, l_215)))) ^ (p_57 > g_94[2].f4)))
                    {
                        if (p_57)
                            break;
                        if (p_58)
                            break;
                        g_71.f0 = (p_56 ^ (g_94[2].f4 || 0x6572L));
                    }
                    else
                    {
                        g_90.f6 = g_201;
                    }
                    for (p_58 = 1; (p_58 <= 4); p_58 += 1)
                    {
                        return p_55;
                    }
                }
                if (l_213)
                {
                    short l_236 = 0L;
                    for (l_215 = 0; (l_215 <= 1); l_215 += 1)
                    {
                        return l_212;
                    }
                    l_224[4][3][0] = p_57;
                    for (g_201 = 0; (g_201 <= 3); g_201 += 1)
                    {
                        char l_227 = 1L;
                        if (g_90.f0)
                            break;
                        g_71 = g_71;
                        l_227 = (safe_mul_func_uint16_t_u_u(p_58, g_71.f0));
                        l_236 ^= ((safe_mul_func_int8_t_s_s(p_57, 255UL)) < (safe_lshift_func_uint8_t_u_u(0x1EL, (safe_add_func_int32_t_s_s((p_58 < (safe_mod_func_uint32_t_u_u(l_216, 0xB119D4D7L))), 0x895629A1L)))));
                    }
                    l_246 |= (l_216 = (p_58 == (safe_mod_func_uint16_t_u_u(0x5055L, (g_245 ^= (((safe_lshift_func_int16_t_s_u(p_55, 2)) <= l_216) >= (g_71.f2 && (((safe_mod_func_uint32_t_u_u((0x3E8AL && p_58), (-5L))) && (safe_add_func_uint8_t_u_u(p_55, p_56))) || 6L))))))));
                }
                else
                {
                    unsigned l_249 = 5UL;
                    if ((safe_lshift_func_int16_t_s_s(l_249, (0x9365FE2BL || (p_56 = p_56)))))
                    {
                        g_94[2].f2 = p_55;
                    }
                    else
                    {
                        int i;
                        g_94[p_57] = g_90;
                        l_216 ^= p_58;
                    }
                }
                for (g_87 = 0; (g_87 <= 4); g_87 += 1)
                {
                    unsigned short l_279 = 0xD3A4L;
                    g_94[2] = g_90;
                    l_208.f0 = (safe_mod_func_int16_t_s_s((p_56 & (safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(p_55, ((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u(g_109.f0, (safe_rshift_func_int16_t_s_s((((((safe_lshift_func_int16_t_s_s(0x6D52L, (65535UL == (safe_sub_func_uint8_t_u_u((!((safe_add_func_int16_t_s_s((+(safe_rshift_func_int16_t_s_s(((((!l_208.f3) ^ p_57) >= (safe_sub_func_uint16_t_u_u(((g_90.f1 ^ ((((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u(1UL, l_278)) & 0x3EL), l_279)) || g_71.f3) && g_94[2].f6) < 1L)) | g_94[2].f1), l_208.f0))) ^ p_56), 3))), 0xA0D6L)) == (-1L))), g_94[2].f4))))) & l_215) != p_55) == l_215) <= g_71.f2), p_55)))) == p_56) <= 0L), g_94[2].f0)), 4)) & 3L))), g_71.f3))), g_90.f6));
                    if (l_279)
                        continue;
                }
            }
        }
        l_216 ^= (((safe_add_func_uint16_t_u_u(p_56, (safe_mod_func_uint32_t_u_u(p_56, ((p_58 &= g_94[2].f2) && l_214))))) == (~p_57)) || 1L);
    }
    g_71.f0 = l_216;
    for (g_90.f4 = 0; (g_90.f4 <= 3); g_90.f4 += 1)
    {
        unsigned short l_286 = 6UL;
        char l_287 = 0x00L;
        int l_288[2][6];
        int l_297 = (-3L);
        int l_298 = 1L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_288[i][j] = 0xB1342433L;
        }
        l_288[0][0] = func_72(((safe_add_func_uint32_t_u_u((l_286 = g_201), g_201)) | g_111[5][5][1]), p_56, g_53, l_287);
        l_216 &= (safe_mul_func_uint8_t_u_u(p_56, (((l_298 = (((g_291 = (l_288[0][2] = (0xC1L & p_57))) ^ (p_55 = (l_297 ^= (safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((l_214 == (func_62((+l_214), g_109) <= (g_296[0] = g_90.f3))), g_245)), 4UL))))) > l_286)) ^ p_57) >= 0x370B228DL)));
        for (p_55 = 0; (p_55 <= 3); p_55 += 1)
        {
            unsigned short l_299 = 0x4B10L;
            int l_308[1];
            int i;
            for (i = 0; i < 1; i++)
                l_308[i] = (-1L);
            g_291 = ((((l_299 <= (safe_lshift_func_int8_t_s_u(2L, l_299))) == ((safe_mod_func_int16_t_s_s(p_58, ((g_109.f0 ^= (safe_sub_func_uint8_t_u_u(0x4DL, (safe_sub_func_int8_t_s_s(0L, (g_245 ^ ((l_308[0] = l_298) | (p_56 = (1L < l_288[0][0]))))))))) ^ p_58))) && l_297)) ^ l_216) >= 0xF3FB13B5L);
            l_314[1][3][3] &= ((func_62((g_94[2].f1 || (safe_mul_func_int8_t_s_s((~(l_288[1][2] |= func_72(l_297, ((g_201 |= (safe_mod_func_int8_t_s_s((g_94[2].f1 ^ 0xC3AD8F41L), 0xD4L))) & 0x74L), l_308[0], (g_90.f5 > 0x77L)))), 0x87L))), l_313) ^ g_11) & 0xFC00522FL);
        }
    }
    return l_313.f0;
}







static int func_62(unsigned char p_63, struct S0 p_64)
{
    unsigned l_139 = 4294967295UL;
    int l_146[8];
    unsigned char l_174 = 0xE1L;
    unsigned short l_191[9];
    int l_192 = (-1L);
    char l_205[7][5][6] = {{{0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}}, {{0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}}, {{0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}}, {{0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}}, {{0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}}, {{0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}}, {{0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}, {0x97L, 4L, (-7L), 0xAFL, (-1L), 1L}}};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_146[i] = 0L;
    for (i = 0; i < 9; i++)
        l_191[i] = 65535UL;
    for (g_87 = 0; (g_87 <= 3); g_87 += 1)
    {
        int l_121 = 0x5608B997L;
        struct S2 l_122[8][3][2] = {{{{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}}, {{{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}}, {{{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}}, {{{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}}, {{{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}}, {{{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}}, {{{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}}, {{{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}, {{-1,3,4305,2587}, {-7,3,6684,-838}}}};
        int i, j, k;
        for (g_109.f0 = 0; (g_109.f0 <= 3); g_109.f0 += 1)
        {
            unsigned l_130 = 0UL;
            struct S0 l_143 = {-10L};
            unsigned char l_147 = 0x04L;
            for (g_90.f1 = 3; (g_90.f1 >= 0); g_90.f1 -= 1)
            {
                int l_114[8];
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_114[i] = 7L;
                l_114[1] = (safe_unary_minus_func_uint8_t_u((g_88 = (g_111[(g_87 + 1)][(g_90.f1 + 1)][(g_90.f1 + 1)] & g_111[5][5][1]))));
                for (p_63 = 1; (p_63 <= 4); p_63 += 1)
                {
                    g_71.f2 = ((safe_lshift_func_uint8_t_u_s(p_64.f0, 0)) || ((p_63 | g_111[(g_87 + 1)][(g_90.f1 + 1)][(g_90.f1 + 1)]) == (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_64.f0, (l_114[1] = (l_121 ^ g_88)))), (-1L)))));
                }
                g_94[g_87] = g_94[g_90.f1];
            }
            g_71 = l_122[4][1][0];
            for (p_63 = 0; (p_63 <= 4); p_63 += 1)
            {
                int l_135[4];
                int l_138 = 6L;
                int l_140 = 1L;
                int l_141 = 1L;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_135[i] = 8L;
                g_71.f0 = (safe_rshift_func_int8_t_s_u((l_135[0] ^= (safe_mod_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(g_111[(g_109.f0 + 3)][(g_109.f0 + 2)][p_63])), (g_71.f2 == (g_94[2].f2 != l_130)))) != 7UL) >= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(p_64.f0, 0)), 0))), (p_63 | g_90.f6)))), (l_141 = (((l_140 = ((safe_rshift_func_int8_t_s_u((l_138 ^= (((((((g_90.f5 != g_71.f2) >= p_64.f0) == (-1L)) ^ l_130) < g_90.f4) <= p_63) != 0xB60272E8L)), 6)) | l_139)) && l_139) >= 65535UL))));
                l_143 = (g_142 = g_109);
                for (g_90.f0 = 0; (g_90.f0 <= 3); g_90.f0 += 1)
                {
                    l_147 = (g_94[2].f2 = (!(!(l_121 ^= ((safe_add_func_int16_t_s_s((g_71.f2 < (l_146[2] ^= g_90.f1)), g_94[2].f1)) <= p_64.f0)))));
                    for (g_90.f2 = 4; (g_90.f2 >= 0); g_90.f2 -= 1)
                    {
                        if (g_94[2].f6)
                            break;
                    }
                }
                for (g_90.f5 = 0; (g_90.f5 <= 4); g_90.f5 += 1)
                {
                    for (l_143.f0 = 4; (l_143.f0 >= 0); l_143.f0 -= 1)
                    {
                        l_122[4][1][0].f0 &= l_146[4];
                        g_71.f0 = g_94[2].f4;
                    }
                }
            }
        }
        for (g_90.f1 = 0; (g_90.f1 <= 4); g_90.f1 += 1)
        {
            int l_155 = (-1L);
            int l_159[1][10][2];
            int l_175 = 0x4C94F83DL;
            unsigned l_176 = 0xAD851558L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_159[i][j][k] = (-5L);
                }
            }
            for (g_109.f0 = 0; (g_109.f0 <= 4); g_109.f0 += 1)
            {
                unsigned l_150 = 4294967287UL;
                for (g_142.f0 = 4; (g_142.f0 >= 0); g_142.f0 -= 1)
                {
                    int i, j, k;
                    g_94[2].f3 ^= (((l_150 = (safe_mul_func_uint16_t_u_u((g_111[g_90.f1][g_87][g_109.f0] || 0xAE03L), (g_71.f2 > g_111[g_90.f1][g_87][g_109.f0])))) <= p_64.f0) == (safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((p_63 = ((l_155 = 4294967286UL) > g_94[2].f0)), p_64.f0)), 15)));
                    return p_64.f0;
                }
                for (l_139 = 0; (l_139 <= 3); l_139 += 1)
                {
                    short l_156 = 0xC68CL;
                    g_71.f0 &= l_156;
                    g_142 = g_142;
                }
            }
            for (g_90.f2 = 3; (g_90.f2 >= 0); g_90.f2 -= 1)
            {
                char l_177 = 0x61L;
                int l_182[7][2] = {{0xF38C781CL, 0xF38C781CL}, {0xF38C781CL, 0xF38C781CL}, {0xF38C781CL, 0xF38C781CL}, {0xF38C781CL, 0xF38C781CL}, {0xF38C781CL, 0xF38C781CL}, {0xF38C781CL, 0xF38C781CL}, {0xF38C781CL, 0xF38C781CL}};
                int i, j;
                l_146[2] &= (l_122[4][1][0].f2 = p_64.f0);
                l_146[2] = p_64.f0;
                if (((g_87 <= (safe_lshift_func_int16_t_s_u((l_159[0][8][0] <= 1L), (safe_mod_func_int16_t_s_s((p_64.f0 = (safe_sub_func_int16_t_s_s(g_90.f2, 0xB68BL))), ((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((l_175 = ((((safe_rshift_func_int16_t_s_u((~(safe_rshift_func_uint16_t_u_u(65530UL, (((g_90.f3 <= (safe_add_func_int8_t_s_s((0xC7B1A2CDL || ((((+0xCE341315L) && l_174) && p_63) == g_94[2].f1)), g_90.f3))) | 1L) && 255UL)))), 12)) ^ p_63) > l_122[4][1][0].f3) == p_63)) ^ p_63), p_63)), 3)) ^ l_176)))))) ^ p_63))
                {
                    for (g_53 = 0; (g_53 <= 3); g_53 += 1)
                    {
                        if (g_94[2].f0)
                            break;
                        if (g_94[2].f5)
                            continue;
                    }
                    if (l_177)
                        break;
                }
                else
                {
                    return p_63;
                }
                for (g_109.f0 = 0; (g_109.f0 <= 3); g_109.f0 += 1)
                {
                    l_122[4][1][0].f2 &= (l_182[2][0] = (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(g_90.f3, 0xB7L)), 10)));
                }
            }
        }
    }
    if (((((~g_109.f0) ^ ((((!(0UL & (g_90.f0 |= (~g_53)))) != (safe_sub_func_int32_t_s_s(l_174, ((safe_sub_func_uint32_t_u_u(g_94[2].f2, (p_64.f0 == (l_192 = ((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(g_94[2].f0, g_94[2].f1)), 6)) > ((+((g_88 & 0x3160587DL) == l_191[4])) != l_174)))))) < p_64.f0)))) <= 4294967288UL) & l_146[2])) <= p_63) || l_191[8]))
    {
        unsigned short l_195 = 65535UL;
        int l_196 = 3L;
        l_146[4] = (g_90.f6 = (safe_rshift_func_uint8_t_u_u((l_196 &= (l_195 ^= p_63)), g_94[2].f0)));
        l_146[2] = (((((((safe_lshift_func_uint8_t_u_s(3UL, (safe_mod_func_uint8_t_u_u(248UL, 0x08L)))) & (g_201 ^= g_94[2].f3)) | g_71.f2) == (g_71.f0 | p_63)) < (safe_sub_func_int16_t_s_s((l_196 = 0xEC3EL), (g_111[0][3][4] && 0x87C0L)))) > g_88) == g_90.f4);
    }
    else
    {
        struct S2 l_204 = {11,1,-2900,-2515};
        l_204 = l_204;
    }
    return l_205[4][1][3];
}







static struct S0 func_65(struct S2 p_66, struct S2 p_67, unsigned p_68, unsigned char p_69)
{
    int l_110 = 6L;
    int l_112 = 0xE4D78B1DL;
    for (g_90.f5 = 0; (g_90.f5 == 58); g_90.f5 = safe_add_func_uint8_t_u_u(g_90.f5, 1))
    {
        g_109 = g_109;
        p_66.f2 = g_94[2].f5;
    }
    p_66.f2 = l_110;
    l_112 ^= ((g_111[5][5][1] &= (func_72(l_110, g_90.f4, p_68, p_66.f2) <= (l_110 < g_71.f0))) || p_66.f0);
    return g_109;
}







static unsigned func_72(unsigned p_73, unsigned short p_74, int p_75, int p_76)
{
    int l_79 = 0x5119B5F8L;
    struct S1 l_80 = {0xE43DA7D8L,0x2DL,0x6606A86EL,-166,0x45L,6UL,-6};
    l_79 &= p_74;
    l_80 = l_80;
    for (g_53 = 0; (g_53 > 36); g_53 = safe_add_func_uint32_t_u_u(g_53, 7))
    {
        struct S1 l_91 = {9UL,0x36L,-5L,-629,0x04L,1UL,3};
        if ((safe_rshift_func_int16_t_s_s((g_87 = (safe_mod_func_uint16_t_u_u(0x22C1L, l_80.f3))), 1)))
        {
            g_88 = g_71.f1;
            return g_87;
        }
        else
        {
            unsigned char l_89[10] = {0x6DL, 0xA4L, 0x6DL, 0xA4L, 0x6DL, 0xA4L, 0x6DL, 0xA4L, 0x6DL, 0xA4L};
            int i;
            for (l_80.f4 = 1; (l_80.f4 <= 9); l_80.f4 += 1)
            {
                int l_97[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_97[i] = 0x1EE040EEL;
                l_91 = g_90;
                for (g_90.f5 = 0; (g_90.f5 <= 9); g_90.f5 += 1)
                {
                    unsigned l_102[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_102[i] = 1UL;
                    for (g_90.f2 = 9; (g_90.f2 >= 2); g_90.f2 -= 1)
                    {
                        int i;
                        return l_89[g_90.f5];
                    }
                    if ((safe_add_func_uint8_t_u_u(g_71.f2, (l_91.f3 |= l_91.f5))))
                    {
                        int i;
                        l_91.f3 |= ((g_88 |= (l_89[g_90.f5] = (p_73 == 0x01377BC7L))) ^ 1UL);
                    }
                    else
                    {
                        if (p_73)
                            break;
                        if (g_90.f5)
                            break;
                        g_94[2] = l_91;
                    }
                    g_94[2].f6 = ((((((safe_lshift_func_uint16_t_u_s((g_88 ^ (l_97[3] >= g_94[2].f6)), 9)) == (safe_lshift_func_uint16_t_u_s(g_94[2].f6, (safe_rshift_func_int8_t_s_s((l_102[0] & (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((((0x3AL != (l_89[7] ^ g_88)) != p_75) || p_74), 10)) <= l_102[0]), g_90.f1))), g_90.f1))))) >= 0x96B4L) | g_71.f1) >= l_102[1]) >= g_90.f3);
                }
            }
        }
        g_94[2].f2 &= (-1L);
    }
    l_80.f3 = (p_75 | l_80.f1);
    return l_80.f1;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    transparent_crc(g_71.f3, "g_71.f3", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_90.f2, "g_90.f2", print_hash_value);
    transparent_crc(g_90.f3, "g_90.f3", print_hash_value);
    transparent_crc(g_90.f4, "g_90.f4", print_hash_value);
    transparent_crc(g_90.f5, "g_90.f5", print_hash_value);
    transparent_crc(g_90.f6, "g_90.f6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_94[i].f0, "g_94[i].f0", print_hash_value);
        transparent_crc(g_94[i].f1, "g_94[i].f1", print_hash_value);
        transparent_crc(g_94[i].f2, "g_94[i].f2", print_hash_value);
        transparent_crc(g_94[i].f3, "g_94[i].f3", print_hash_value);
        transparent_crc(g_94[i].f4, "g_94[i].f4", print_hash_value);
        transparent_crc(g_94[i].f5, "g_94[i].f5", print_hash_value);
        transparent_crc(g_94[i].f6, "g_94[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_111[i][j][k], "g_111[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_296[i], "g_296[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_346.f0, "g_346.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_350[i], "g_350[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
