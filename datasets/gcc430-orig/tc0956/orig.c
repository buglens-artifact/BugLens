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
   unsigned f0;
   unsigned f1;
   char f2;
   int f3;
   short f4;
   unsigned f5;
   unsigned char f6;
   int f7;
   int f8;
};


static unsigned char g_4 = 0x31L;
static int g_7[6] = {0x8F576C51L, 0x8F576C51L, 0x8F576C51L, 0x8F576C51L, 0x8F576C51L, 0x8F576C51L};
static char g_44 = 0L;
static char g_56 = 0x72L;
static unsigned short g_72 = 0xB749L;
static int g_96 = (-7L);
static unsigned g_97 = 5UL;
static unsigned short g_109 = 0x6A6AL;
static int g_141 = 0xE75F00DBL;
static unsigned char *g_160[7] = {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4};
static unsigned char **g_159 = &g_160[5];
static struct S0 g_166 = {0x25EF2E49L,0x2809C4DBL,-10L,5L,0x3E92L,4294967295UL,0x8DL,-1L,0xF5918DACL};
static unsigned short g_179 = 65535UL;
static struct S0 *g_204[1][2][10] = {{{&g_166, &g_166, &g_166, (void*)0, (void*)0, &g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, (void*)0, (void*)0, &g_166, &g_166, &g_166, &g_166, &g_166}}};
static struct S0 *g_205 = &g_166;
static int *g_206 = &g_7[3];
static unsigned short g_258 = 0x1B9BL;
static short *g_279[1][9] = {{&g_166.f4, &g_166.f4, &g_166.f4, &g_166.f4, &g_166.f4, &g_166.f4, &g_166.f4, &g_166.f4, &g_166.f4}};
static char g_429 = 0L;
static int **g_451[9] = {(void*)0, &g_206, (void*)0, &g_206, (void*)0, &g_206, (void*)0, &g_206, (void*)0};
static char g_539 = 6L;
static char *g_542 = &g_539;
static char **g_541 = &g_542;
static char **g_546 = &g_542;
static unsigned g_565[6] = {4UL, 4UL, 4294967293UL, 4UL, 4UL, 4294967293UL};
static char g_574 = 4L;
static unsigned char g_607 = 0x48L;
static unsigned char ***g_620[2] = {&g_159, &g_159};
static unsigned char ****g_619 = &g_620[0];
static int *g_636 = &g_141;
static int **g_635[5][8] = {{&g_636, (void*)0, &g_636, (void*)0, &g_636, (void*)0, &g_636, (void*)0}, {&g_636, (void*)0, &g_636, (void*)0, &g_636, (void*)0, &g_636, (void*)0}, {&g_636, (void*)0, &g_636, (void*)0, &g_636, (void*)0, &g_636, (void*)0}, {&g_636, (void*)0, &g_636, (void*)0, &g_636, (void*)0, &g_636, (void*)0}, {&g_636, (void*)0, &g_636, (void*)0, &g_636, (void*)0, &g_636, (void*)0}};
static unsigned short *g_643 = &g_72;
static unsigned short **g_642 = &g_643;
static struct S0 g_688 = {0x3D403135L,0x76F49165L,0x40L,0x6CAF561DL,0xFDDFL,1UL,0x57L,0xC33DF961L,0L};
static int g_731[10][1][9] = {{{0x80B82360L, 0L, 1L, 0L, 0x80B82360L, 0x0E978CABL, 1L, 0x0E978CABL, 0x80B82360L}}, {{0x80B82360L, 0L, 1L, 0L, 0x80B82360L, 0x0E978CABL, 1L, 0x0E978CABL, 0x80B82360L}}, {{0x80B82360L, 0L, 1L, 0L, 0x80B82360L, 0x0E978CABL, 1L, 0x0E978CABL, 0x80B82360L}}, {{0x80B82360L, 0L, 1L, 0L, 0x80B82360L, 0x0E978CABL, 1L, 0x0E978CABL, 0x80B82360L}}, {{0x80B82360L, 0L, 1L, 0L, 0x80B82360L, 0x0E978CABL, 1L, 0x0E978CABL, 0x80B82360L}}, {{0x80B82360L, 0L, 1L, 0L, 0x80B82360L, 0x0E978CABL, 1L, 0x0E978CABL, 0x80B82360L}}, {{0x80B82360L, 0L, 1L, 0L, 0x80B82360L, 0x0E978CABL, 1L, 0x0E978CABL, 0x80B82360L}}, {{0x80B82360L, 0L, 1L, 0L, 0x80B82360L, 0x0E978CABL, 1L, 0x0E978CABL, 0x80B82360L}}, {{0x80B82360L, 0L, 1L, 0L, 0x80B82360L, 0x0E978CABL, 1L, 0x0E978CABL, 0x80B82360L}}, {{0x80B82360L, 0L, 1L, 0L, 0x80B82360L, 0x0E978CABL, 1L, 0x0E978CABL, 0x80B82360L}}};
static unsigned g_734 = 4294967295UL;
static unsigned g_777 = 2UL;
static struct S0 **g_825 = &g_205;
static struct S0 ***g_824[9] = {&g_825, &g_825, &g_825, &g_825, &g_825, &g_825, &g_825, &g_825, &g_825};
static short g_899 = 0x1D8EL;
static short g_978[5] = {0xEB88L, 0xEB88L, 0xEB88L, 0xEB88L, 0xEB88L};
static int *g_1010 = &g_96;
static unsigned g_1027 = 0x24A0548AL;
static unsigned g_1092 = 0xB3ADBDAEL;
static int ***g_1107 = &g_451[3];
static unsigned g_1144 = 4UL;
static struct S0 g_1154[3] = {{0xA65FCB16L,1UL,0xF6L,-1L,0x8103L,0x3681D932L,0xF2L,-5L,0x2B7E3957L}, {0xA65FCB16L,1UL,0xF6L,-1L,0x8103L,0x3681D932L,0xF2L,-5L,0x2B7E3957L}, {0xA65FCB16L,1UL,0xF6L,-1L,0x8103L,0x3681D932L,0xF2L,-5L,0x2B7E3957L}};
static int *g_1173 = &g_7[3];
static short g_1314 = 0xCDDAL;
static unsigned char g_1345 = 251UL;
static unsigned short g_1516 = 1UL;
static int *g_1537 = (void*)0;
static int ***g_1555 = &g_451[3];
static short g_1770[6] = {0L, 0L, 0L, 0L, 0L, 0L};



static unsigned char func_1(void);
static struct S0 func_15(unsigned char * p_16, int p_17, unsigned char p_18);
static unsigned char * func_19(struct S0 p_20, int p_21, unsigned char * p_22, unsigned char * p_23, char p_24);
static struct S0 func_25(char p_26, int * p_27, struct S0 p_28, unsigned char * p_29);
static unsigned short func_36(char p_37, int * p_38, short p_39, unsigned p_40, int * p_41);
static int * func_45(int p_46, struct S0 p_47);
static unsigned func_50(char * p_51, int p_52, unsigned char p_53, int p_54);
static struct S0 func_66(unsigned char p_67, int p_68);
static short func_73(struct S0 p_74, short p_75, unsigned short * p_76, unsigned char * p_77);
static struct S0 func_78(int p_79, char p_80, int p_81, unsigned p_82);
static unsigned char func_1(void)
{
    unsigned char *l_5 = &g_4;
    int l_42 = 9L;
    unsigned char l_1255[9] = {254UL, 0xE8L, 254UL, 0xE8L, 254UL, 0xE8L, 254UL, 0xE8L, 254UL};
    int **l_1756 = (void*)0;
    int l_1766 = 0x1A587B83L;
    int l_1767 = 0x7C2FF4C1L;
    int l_1768[6][3] = {{0x975C51ACL, 0xE46F3945L, 0xA6F61996L}, {0x975C51ACL, 0xE46F3945L, 0xA6F61996L}, {0x975C51ACL, 0xE46F3945L, 0xA6F61996L}, {0x975C51ACL, 0xE46F3945L, 0xA6F61996L}, {0x975C51ACL, 0xE46F3945L, 0xA6F61996L}, {0x975C51ACL, 0xE46F3945L, 0xA6F61996L}};
    short l_1772 = 0x0C37L;
    int *l_1778 = &l_1768[3][0];
    unsigned short l_1789 = 1UL;
    char l_1790 = 0xA8L;
    int i, j;
    if (((safe_rshift_func_uint8_t_u_u(((*l_5) = g_4), 2)) & 0x1A9565E0L))
    {
        int *l_6 = &g_7[3];
        int *l_8 = (void*)0;
        int *l_9 = &g_7[3];
        int *l_10 = &g_7[3];
        int *l_11[9][3][8] = {{{&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}}, {{&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}}, {{&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}}, {{&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}}, {{&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}}, {{&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}}, {{&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}}, {{&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}}, {{&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}, {&g_7[1], &g_7[2], &g_7[2], (void*)0, &g_7[3], &g_7[3], &g_7[3], &g_7[5]}}};
        unsigned char l_12[2][3] = {{255UL, 255UL, 0x62L}, {255UL, 255UL, 0x62L}};
        int i, j, k;
        l_12[1][0]--;
    }
    else
    {
        char *l_55 = &g_56;
        short l_59 = 0L;
        int *l_1012 = &l_42;
        int l_1525[7] = {(-7L), (-9L), (-7L), (-9L), (-7L), (-9L), (-7L)};
        short l_1769[10][5];
        int l_1771 = 0x18FEC0FAL;
        unsigned char l_1773 = 0x7AL;
        struct S0 l_1776 = {0UL,0xC7F515F2L,8L,-3L,0x14E9L,1UL,5UL,1L,0L};
        int **l_1777[10];
        short *l_1781 = &g_978[3];
        struct S0 *l_1784 = &l_1776;
        char l_1787 = 0x46L;
        short *l_1788[9][8][3] = {{{(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}}, {{(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}}, {{(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}}, {{(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}}, {{(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}}, {{(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}}, {{(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}}, {{(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}}, {{(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}, {(void*)0, &g_1770[4], (void*)0}}};
        int i, j, k;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 5; j++)
                l_1769[i][j] = 0x05FDL;
        }
        for (i = 0; i < 10; i++)
            l_1777[i] = &l_1012;
        if (g_7[3])
        {
            char *l_43[1][5] = {{&g_44, (void*)0, &g_44, (void*)0, &g_44}};
            int l_685 = 0xDAD98212L;
            int **l_1011 = &g_206;
            unsigned l_1153[8];
            struct S0 *l_1755 = &g_688;
            int *l_1757 = &l_1525[6];
            int i, j;
            for (i = 0; i < 8; i++)
                l_1153[i] = 0UL;
            (*l_1755) = func_15(func_19(func_25((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(func_36((g_44 = l_42), ((*l_1011) = func_45((safe_lshift_func_uint16_t_u_u(((*g_643) = (func_50(l_55, l_42, (safe_lshift_func_uint8_t_u_u(1UL, 6)), l_59) != (l_59 >= (l_685 != (safe_mod_func_uint32_t_u_u(g_574, 0xC707C3D5L)))))), l_685)), g_688)), g_978[3], g_734, l_1012), 0x447DL)) || 1L), l_42)) > 0x3E9BL), l_1153[7])), l_1012, g_1154[2], l_5), l_1255[8], l_43[0][2], (***g_619), l_1255[8]), g_899, l_1525[6]);



            ;



            ;

            ;
            ;
            (*l_1757) ^= ((*l_1012) != (((void*)0 == l_1756) > l_1255[8]));
        }
        else
        {
            int *l_1758 = (void*)0;
            int *l_1759 = (void*)0;
            int *l_1760 = &g_688.f8;
            int *l_1761 = &g_166.f8;
            int *l_1762 = &l_1525[2];
            int *l_1763 = (void*)0;
            int *l_1764 = &g_731[9][0][8];
            int *l_1765[6];
            int i;
            for (i = 0; i < 6; i++)
                l_1765[i] = &g_731[9][0][8];
            l_1773--;
            (*l_1764) |= l_1767;
        }



        ;



        ;

        ;
        ;
        l_1778 = &l_1767;

        ;
        l_1766 ^= (0xFDL | ((safe_rshift_func_uint16_t_u_s(((*l_1778) = (g_1154[2].f2 < (*l_1778))), ((*l_1781) = 0L))) != (safe_sub_func_int16_t_s_s(((*l_1012) = ((**g_159) == (g_734 == g_899))), l_1768[3][0]))));
    }



    ;



    ;

    ;
    ;
    ;
    return l_1790;
}







static struct S0 func_15(unsigned char * p_16, int p_17, unsigned char p_18)
{
    unsigned l_1528[8][7] = {{0x2E49D14AL, 0x51D77072L, 4294967286UL, 0x51D77072L, 0x2E49D14AL, 4294967295UL, 6UL}, {0x2E49D14AL, 0x51D77072L, 4294967286UL, 0x51D77072L, 0x2E49D14AL, 4294967295UL, 6UL}, {0x2E49D14AL, 0x51D77072L, 4294967286UL, 0x51D77072L, 0x2E49D14AL, 4294967295UL, 6UL}, {0x2E49D14AL, 0x51D77072L, 4294967286UL, 0x51D77072L, 0x2E49D14AL, 4294967295UL, 6UL}, {0x2E49D14AL, 0x51D77072L, 4294967286UL, 0x51D77072L, 0x2E49D14AL, 4294967295UL, 6UL}, {0x2E49D14AL, 0x51D77072L, 4294967286UL, 0x51D77072L, 0x2E49D14AL, 4294967295UL, 6UL}, {0x2E49D14AL, 0x51D77072L, 4294967286UL, 0x51D77072L, 0x2E49D14AL, 4294967295UL, 6UL}, {0x2E49D14AL, 0x51D77072L, 4294967286UL, 0x51D77072L, 0x2E49D14AL, 4294967295UL, 6UL}};
    unsigned short l_1549[6][4] = {{0xCE4EL, 0xA741L, 65535UL, 65535UL}, {0xCE4EL, 0xA741L, 65535UL, 65535UL}, {0xCE4EL, 0xA741L, 65535UL, 65535UL}, {0xCE4EL, 0xA741L, 65535UL, 65535UL}, {0xCE4EL, 0xA741L, 65535UL, 65535UL}, {0xCE4EL, 0xA741L, 65535UL, 65535UL}};
    struct S0 *l_1550 = (void*)0;
    int *l_1566 = &g_7[3];
    int l_1572[6][9][4] = {{{0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}}, {{0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}}, {{0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}}, {{0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}}, {{0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}}, {{0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}, {0xB4A9A238L, 0x4499F183L, (-10L), 0x45C7DAD2L}}};
    unsigned char *l_1590 = &g_1345;
    unsigned *l_1603 = &g_1154[2].f1;
    unsigned **l_1602 = &l_1603;
    struct S0 l_1621 = {4294967293UL,0x7D3AB6D7L,-1L,1L,0x39D6L,0UL,0xBDL,0x04559FFCL,0x1824A8C6L};
    unsigned short *l_1655 = &g_179;
    unsigned short *l_1656[1][6][1] = {{{&g_179}, {&g_179}, {&g_179}, {&g_179}, {&g_179}, {&g_179}}};
    int *l_1657 = (void*)0;
    int *l_1658 = &g_1154[2].f8;
    char l_1679 = 0x6BL;
    unsigned short l_1680[6];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1680[i] = 0x4C86L;
    for (p_18 = 0; (p_18 <= 2); p_18 += 1)
    {
        int *l_1531 = &g_688.f3;
        int l_1557 = 0x26333BC3L;
        int *l_1565 = &g_166.f8;
        int l_1573 = 0x4AC3BE4BL;
        int l_1576 = (-7L);
        unsigned char l_1577 = 0x13L;
        struct S0 l_1584 = {1UL,4294967292UL,0xE1L,-8L,-5L,0UL,1UL,0x417E5267L,-1L};
        unsigned short *l_1588 = (void*)0;
        int *l_1594 = &g_731[9][0][8];
        int *l_1595 = (void*)0;
        int *l_1596 = &l_1572[4][7][0];
        int *l_1597[5][7] = {{&l_1572[1][2][2], &g_96, &l_1572[1][2][2], &g_96, &l_1572[1][2][2], &g_96, &l_1572[1][2][2]}, {&l_1572[1][2][2], &g_96, &l_1572[1][2][2], &g_96, &l_1572[1][2][2], &g_96, &l_1572[1][2][2]}, {&l_1572[1][2][2], &g_96, &l_1572[1][2][2], &g_96, &l_1572[1][2][2], &g_96, &l_1572[1][2][2]}, {&l_1572[1][2][2], &g_96, &l_1572[1][2][2], &g_96, &l_1572[1][2][2], &g_96, &l_1572[1][2][2]}, {&l_1572[1][2][2], &g_96, &l_1572[1][2][2], &g_96, &l_1572[1][2][2], &g_96, &l_1572[1][2][2]}};
        short l_1598[3][9][9] = {{{0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}}, {{0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}}, {{0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}, {0x790EL, 1L, 0L, 0xCA8EL, 0x0A3CL, 0x76B0L, (-5L), 0L, 8L}}};
        unsigned short l_1599 = 65526UL;
        int i, j, k;
        for (g_166.f5 = 1; (g_166.f5 <= 4); g_166.f5 += 1)
        {
            unsigned char l_1540 = 255UL;
            for (g_688.f5 = 0; (g_688.f5 <= 0); g_688.f5 += 1)
            {
                char ***l_1526 = &g_541;
                int *l_1527 = &g_7[4];
                (*l_1527) = ((void*)0 != l_1526);
                l_1528[1][4]++;
            }
            for (g_688.f8 = 0; (g_688.f8 >= 0); g_688.f8 -= 1)
            {
                int **l_1532 = &g_636;
                int **l_1533 = &g_636;
                int **l_1534 = &l_1531;
                int *l_1535 = &g_7[3];
                int *l_1542[5] = {&g_731[9][0][8], &g_166.f8, &g_731[9][0][8], &g_166.f8, &g_731[9][0][8]};
                int i;
                if ((p_17 &= (((*l_1534) = l_1531) == (void*)0)))
                {
                    int **l_1536[8] = {&g_1173, &g_206, &g_1173, &g_206, &g_1173, &g_206, &g_1173, &g_206};
                    int i;
                    g_1537 = l_1535;

                    ;
                }
                else
                {
                    int *l_1541 = &g_7[3];
                    int ***l_1556 = (void*)0;
                    for (g_166.f7 = 0; (g_166.f7 <= 0); g_166.f7 += 1)
                    {
                        int **l_1538 = &l_1535;
                        int **l_1539 = &g_1173;
                        int i;
                        if (g_978[g_166.f5])
                            break;
                        p_17 &= (((**g_642) = g_978[(g_166.f7 + 3)]) & 0xFE6AL);
                        (*l_1539) = ((*l_1538) = (void*)0);

                        ;
                        ;
                    }

                    ;
                    p_17 |= ((*l_1541) = l_1540);
                    l_1542[2] = &p_17;


                    if (((*l_1541) |= (safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(l_1549[0][3], p_17)) | (((**g_159) > l_1528[1][4]) & p_17)), 15)) <= 1L), (****g_619)))))
                    {
                        struct S0 *l_1551 = &g_1154[0];
                        int ****l_1554 = &g_1107;
                        l_1551 = l_1550;

                        ;
                        p_17 = (safe_lshift_func_int8_t_s_s(((g_1555 = ((*l_1554) = (void*)0)) != l_1556), ((**g_159) == (p_17 > (p_18 < (g_1154[2].f7 < l_1557))))));

                        ;
                        ;
                    }
                    else
                    {
                        unsigned *l_1558 = &g_1154[2].f5;
                        int l_1561 = 1L;
                        int i, j;
                        (*l_1541) = ((!((--(*l_1558)) && g_688.f3)) & (l_1561 && (g_279[g_688.f8][(g_166.f5 + 3)] != (void*)0)));
                    }
                }

                ;

            }
        }
        if ((65535UL == 1UL))
        {
            struct S0 l_1563 = {4294967295UL,9UL,0x5BL,8L,-3L,4294967295UL,0x92L,0xB59EF4E9L,0x1D453F4DL};
            int *l_1564 = &l_1557;
            int l_1575[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1575[i] = 0xE52323AAL;
            for (g_97 = 0; (g_97 <= 2); g_97 += 1)
            {
                struct S0 l_1562 = {0xECD20674L,0x7FD4429AL,0x3BL,-1L,0x6F54L,0UL,0x66L,0x6DDF7B4EL,-1L};
                int i;
                p_17 |= g_978[g_97];
                l_1563 = (g_1154[p_18] = l_1562);
                l_1565 = l_1564;

                ;
            }

            ;
            l_1566 = &p_17;

            ;
            for (l_1563.f2 = 0; (l_1563.f2 <= 0); l_1563.f2 += 1)
            {
                int *l_1567 = &l_1557;
                int *l_1568 = (void*)0;
                int *l_1569 = &g_731[6][0][1];
                int *l_1570 = &g_96;
                int *l_1571[9][8][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
                int l_1574[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1574[i] = 0x20B8896DL;
                ++l_1577;
                p_17 = ((0UL < (**g_546)) != p_18);
            }
            p_17 ^= (*l_1565);
        }
        else
        {
            int **l_1580 = (void*)0;
            int **l_1581 = &l_1565;
            struct S0 l_1582 = {0xA1E252A2L,6UL,-5L,0x2379CFD7L,0L,0xB97419A1L,253UL,-7L,0x8F8CF9EFL};
            unsigned short l_1589 = 65529UL;
            l_1566 = ((*l_1581) = &p_17);

            ;
            ;
            (**l_1581) = (*l_1565);
            if ((*l_1566))
            {
                unsigned short *l_1583 = (void*)0;
                struct S0 l_1587[1][4][6] = {{{{4294967295UL,0UL,0xFFL,9L,-1L,4294967295UL,0UL,0x31489596L,0L}, {0xE4E699BDL,0x8D34DC4EL,0x42L,-1L,1L,0x519EAFC5L,255UL,0L,0x2B2170E3L}, {0x8CD42117L,2UL,-1L,0xDC9F411DL,0x6599L,5UL,0x24L,0xAED46509L,8L}, {0xD3AC581CL,4UL,0xEBL,0xE5B567DEL,0L,0x5478BB0FL,0x64L,0xF8FE972FL,0xCFAEA144L}, {0xD3AC581CL,4UL,0xEBL,0xE5B567DEL,0L,0x5478BB0FL,0x64L,0xF8FE972FL,0xCFAEA144L}, {0x8CD42117L,2UL,-1L,0xDC9F411DL,0x6599L,5UL,0x24L,0xAED46509L,8L}}, {{4294967295UL,0UL,0xFFL,9L,-1L,4294967295UL,0UL,0x31489596L,0L}, {0xE4E699BDL,0x8D34DC4EL,0x42L,-1L,1L,0x519EAFC5L,255UL,0L,0x2B2170E3L}, {0x8CD42117L,2UL,-1L,0xDC9F411DL,0x6599L,5UL,0x24L,0xAED46509L,8L}, {0xD3AC581CL,4UL,0xEBL,0xE5B567DEL,0L,0x5478BB0FL,0x64L,0xF8FE972FL,0xCFAEA144L}, {0xD3AC581CL,4UL,0xEBL,0xE5B567DEL,0L,0x5478BB0FL,0x64L,0xF8FE972FL,0xCFAEA144L}, {0x8CD42117L,2UL,-1L,0xDC9F411DL,0x6599L,5UL,0x24L,0xAED46509L,8L}}, {{4294967295UL,0UL,0xFFL,9L,-1L,4294967295UL,0UL,0x31489596L,0L}, {0xE4E699BDL,0x8D34DC4EL,0x42L,-1L,1L,0x519EAFC5L,255UL,0L,0x2B2170E3L}, {0x8CD42117L,2UL,-1L,0xDC9F411DL,0x6599L,5UL,0x24L,0xAED46509L,8L}, {0xD3AC581CL,4UL,0xEBL,0xE5B567DEL,0L,0x5478BB0FL,0x64L,0xF8FE972FL,0xCFAEA144L}, {0xD3AC581CL,4UL,0xEBL,0xE5B567DEL,0L,0x5478BB0FL,0x64L,0xF8FE972FL,0xCFAEA144L}, {0x8CD42117L,2UL,-1L,0xDC9F411DL,0x6599L,5UL,0x24L,0xAED46509L,8L}}, {{4294967295UL,0UL,0xFFL,9L,-1L,4294967295UL,0UL,0x31489596L,0L}, {0xE4E699BDL,0x8D34DC4EL,0x42L,-1L,1L,0x519EAFC5L,255UL,0L,0x2B2170E3L}, {0x8CD42117L,2UL,-1L,0xDC9F411DL,0x6599L,5UL,0x24L,0xAED46509L,8L}, {0xD3AC581CL,4UL,0xEBL,0xE5B567DEL,0L,0x5478BB0FL,0x64L,0xF8FE972FL,0xCFAEA144L}, {0xD3AC581CL,4UL,0xEBL,0xE5B567DEL,0L,0x5478BB0FL,0x64L,0xF8FE972FL,0xCFAEA144L}, {0x8CD42117L,2UL,-1L,0xDC9F411DL,0x6599L,5UL,0x24L,0xAED46509L,8L}}}};
                int i, j, k;
                (*l_1566) = p_17;
            }
            else
            {
                unsigned l_1591 = 4294967295UL;
                l_1591++;
            }
        }

        ;
        ;
        l_1599--;
        p_17 = ((void*)0 == l_1602);
        for (l_1584.f8 = 0; (l_1584.f8 >= 0); l_1584.f8 -= 1)
        {
            short l_1612 = 5L;
            int *l_1613 = (void*)0;
            unsigned short *l_1616 = (void*)0;
            unsigned short *l_1617 = &g_258;
            short *l_1618 = &g_1154[2].f4;
            int **l_1619[4][7] = {{(void*)0, &l_1594, &l_1594, &l_1596, &l_1594, &l_1594, (void*)0}, {(void*)0, &l_1594, &l_1594, &l_1596, &l_1594, &l_1594, (void*)0}, {(void*)0, &l_1594, &l_1594, &l_1596, &l_1594, &l_1594, (void*)0}, {(void*)0, &l_1594, &l_1594, &l_1596, &l_1594, &l_1594, (void*)0}};
            int i, j;
        }
    }

    ;

    ;
    ;
    ;
    for (g_56 = 2; (g_56 >= 0); g_56 -= 1)
    {
        struct S0 *l_1620[9] = {&g_1154[2], &g_1154[2], &g_688, &g_1154[2], &g_1154[2], &g_688, &g_1154[2], &g_1154[2], &g_688};
        struct S0 l_1622 = {0x439CB61DL,1UL,1L,1L,5L,0x7BE9FB1CL,0x38L,-1L,1L};
        unsigned ***l_1623 = &l_1602;
        int *l_1630[7][9][4] = {{{&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}}, {{&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}}, {{&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}}, {{&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}}, {{&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}}, {{&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}}, {{&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}, {&g_731[9][0][2], &g_96, &g_731[5][0][7], &g_731[0][0][3]}}};
        int i, j, k;
        l_1622 = (l_1621 = g_1154[g_56]);
        for (g_166.f5 = 1; (g_166.f5 <= 5); g_166.f5 += 1)
        {
            int l_1632 = 0x70B7B202L;
            int l_1633 = (-5L);
            int l_1635 = 0x54957FAAL;
            int l_1636 = 1L;
            int l_1637 = (-1L);
            int l_1638 = 0x5886D350L;
            int l_1639 = 0xAFD932BCL;
            int l_1640 = 5L;
            int i, j;
            if ((0UL < ((g_7[g_166.f5] &= ((l_1623 == &l_1602) >= l_1528[g_56][g_56])) ^ (safe_sub_func_uint16_t_u_u((0x58L < ((safe_sub_func_uint32_t_u_u(l_1622.f6, (p_17 ^= (-1L)))) < g_166.f6)), func_36(((((safe_rshift_func_int16_t_s_u(g_1154[g_56].f8, 15)) && g_1154[2].f4) || 9UL) | p_18), &l_1572[3][3][3], l_1622.f8, g_688.f8, l_1630[2][4][1]))))))
            {
                int l_1631 = 0x99275A80L;
                int l_1634 = 1L;
                unsigned short l_1641 = 65531UL;
                int **l_1644 = (void*)0;
                l_1641--;
                l_1630[2][4][1] = &p_17;
            }
            else
            {
                char **l_1645 = (void*)0;
                struct S0 l_1646 = {4294967291UL,4294967293UL,0x18L,7L,0L,4UL,0x21L,0L,0x0DDB654FL};
                (*l_1566) ^= ((void*)0 == l_1645);
                return l_1646;
            }
        }


    }
    (*l_1658) &= ((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((&l_1566 != (void*)0), (safe_lshift_func_int8_t_s_s((*l_1566), 5)))), (safe_sub_func_uint8_t_u_u(0x95L, (*l_1566))))) <= (((*g_642) = (l_1655 = &l_1549[0][3])) == (l_1656[0][4][0] = &l_1549[0][1])));

    ;
    ;

    for (g_1345 = 0; (g_1345 != 5); g_1345++)
    {
        int *l_1661[5] = {(void*)0, &g_688.f8, (void*)0, &g_688.f8, (void*)0};
        int *l_1663 = &g_7[1];
        int *l_1666 = (void*)0;
        struct S0 l_1667 = {0UL,0x3C860666L,1L,0L,-1L,0x587EC08AL,9UL,1L,0x42AB6986L};
        unsigned short ***l_1691 = &g_642;
        int **l_1739 = &l_1666;
        int i;
        for (g_607 = 0; (g_607 <= 3); g_607 += 1)
        {
            int **l_1662 = &g_206;
            int *l_1664 = &g_7[5];
            int l_1668[3][10][1] = {{{0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}}, {{0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}}, {{0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}, {0x5D28D446L}}};
            unsigned short *l_1675 = (void*)0;
            unsigned l_1733[6] = {1UL, 1UL, 0x9E33F7C1L, 1UL, 1UL, 0x9E33F7C1L};
            int i, j, k;
            l_1663 = ((*l_1662) = l_1661[4]);

            ;
            ;
            if (func_36(p_17, l_1664, p_17, p_18, &p_17))
            {
                int *l_1665 = (void*)0;
                l_1666 = l_1665;
                return l_1667;



            }
            else
            {
                unsigned l_1669 = 0x5ADEA466L;
                unsigned l_1687 = 0UL;
                int ***l_1695 = &g_635[4][6];
                int l_1699 = (-1L);
                int l_1700 = 0x013064C4L;
                int l_1701 = 0xFEED5024L;
                struct S0 l_1706 = {7UL,0x695C9EB6L,-4L,-1L,0x2769L,0xAE7AD8DBL,0x10L,1L,0xDC93DF1DL};
                int i, j;
                l_1663 = &p_17;

                ;
                for (g_688.f7 = 0; (g_688.f7 <= 3); g_688.f7 += 1)
                {
                    unsigned l_1672 = 0x4EE80DCCL;
                    int l_1678[10];
                    struct S0 l_1705[2][9] = {{{0UL,0x1EB32BFEL,-3L,0x83EF79E8L,0x6EFCL,0x72B03FFEL,248UL,0x3C2DD450L,0L}, {4294967295UL,4294967290UL,0x2CL,0x71BA37ECL,0xD117L,0x70866168L,1UL,1L,0xBD5445E5L}, {0UL,0x1EB32BFEL,-3L,0x83EF79E8L,0x6EFCL,0x72B03FFEL,248UL,0x3C2DD450L,0L}, {4294967295UL,4294967290UL,0x2CL,0x71BA37ECL,0xD117L,0x70866168L,1UL,1L,0xBD5445E5L}, {0UL,0x1EB32BFEL,-3L,0x83EF79E8L,0x6EFCL,0x72B03FFEL,248UL,0x3C2DD450L,0L}, {4294967295UL,4294967290UL,0x2CL,0x71BA37ECL,0xD117L,0x70866168L,1UL,1L,0xBD5445E5L}, {0UL,0x1EB32BFEL,-3L,0x83EF79E8L,0x6EFCL,0x72B03FFEL,248UL,0x3C2DD450L,0L}, {4294967295UL,4294967290UL,0x2CL,0x71BA37ECL,0xD117L,0x70866168L,1UL,1L,0xBD5445E5L}, {0UL,0x1EB32BFEL,-3L,0x83EF79E8L,0x6EFCL,0x72B03FFEL,248UL,0x3C2DD450L,0L}}, {{0UL,0x1EB32BFEL,-3L,0x83EF79E8L,0x6EFCL,0x72B03FFEL,248UL,0x3C2DD450L,0L}, {4294967295UL,4294967290UL,0x2CL,0x71BA37ECL,0xD117L,0x70866168L,1UL,1L,0xBD5445E5L}, {0UL,0x1EB32BFEL,-3L,0x83EF79E8L,0x6EFCL,0x72B03FFEL,248UL,0x3C2DD450L,0L}, {4294967295UL,4294967290UL,0x2CL,0x71BA37ECL,0xD117L,0x70866168L,1UL,1L,0xBD5445E5L}, {0UL,0x1EB32BFEL,-3L,0x83EF79E8L,0x6EFCL,0x72B03FFEL,248UL,0x3C2DD450L,0L}, {4294967295UL,4294967290UL,0x2CL,0x71BA37ECL,0xD117L,0x70866168L,1UL,1L,0xBD5445E5L}, {0UL,0x1EB32BFEL,-3L,0x83EF79E8L,0x6EFCL,0x72B03FFEL,248UL,0x3C2DD450L,0L}, {4294967295UL,4294967290UL,0x2CL,0x71BA37ECL,0xD117L,0x70866168L,1UL,1L,0xBD5445E5L}, {0UL,0x1EB32BFEL,-3L,0x83EF79E8L,0x6EFCL,0x72B03FFEL,248UL,0x3C2DD450L,0L}}};
                    int i, j;
                    for (i = 0; i < 10; i++)
                        l_1678[i] = 0x02F1E5DEL;
                    l_1669--;
                    if ((~(((*g_542) >= (+l_1672)) <= ((safe_lshift_func_int8_t_s_s(7L, 2)) == (p_17 > g_1154[2].f7)))))
                    {
                        int l_1676[10][3] = {{8L, 8L, 0xEDB3878EL}, {8L, 8L, 0xEDB3878EL}, {8L, 8L, 0xEDB3878EL}, {8L, 8L, 0xEDB3878EL}, {8L, 8L, 0xEDB3878EL}, {8L, 8L, 0xEDB3878EL}, {8L, 8L, 0xEDB3878EL}, {8L, 8L, 0xEDB3878EL}, {8L, 8L, 0xEDB3878EL}, {8L, 8L, 0xEDB3878EL}};
                        int l_1677 = 9L;
                        int i, j;
                        --l_1680[2];
                    }
                    else
                    {
                        (*l_1664) |= 1L;
                        (*g_825) = &l_1667;

                        ;
                    }
                    for (g_777 = 0; (g_777 <= 3); g_777 += 1)
                    {
                        unsigned short ***l_1688 = &g_642;
                        unsigned short ***l_1690 = &g_642;
                        unsigned short ****l_1689[7][6] = {{&l_1690, &l_1688, &l_1690, &l_1688, &l_1690, &l_1688}, {&l_1690, &l_1688, &l_1690, &l_1688, &l_1690, &l_1688}, {&l_1690, &l_1688, &l_1690, &l_1688, &l_1690, &l_1688}, {&l_1690, &l_1688, &l_1690, &l_1688, &l_1690, &l_1688}, {&l_1690, &l_1688, &l_1690, &l_1688, &l_1690, &l_1688}, {&l_1690, &l_1688, &l_1690, &l_1688, &l_1690, &l_1688}, {&l_1690, &l_1688, &l_1690, &l_1688, &l_1690, &l_1688}};
                        int ***l_1694 = &g_635[2][4];
                        char *l_1696 = &g_688.f2;
                        struct S0 *l_1697[4][1];
                        struct S0 l_1698 = {4294967288UL,0x3CA0E7FDL,-1L,0x424BF6E0L,0x4E15L,4294967289UL,0xC2L,0L,0x3E921443L};
                        unsigned char l_1702 = 0xC9L;
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1697[i][j] = &g_166;
                        }
                        l_1698 = (l_1667 = func_78((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(l_1687, p_17)), 10)), ((*l_1696) &= ((*l_1664) >= (4294967291UL || func_36(((**g_546) = (l_1688 != (l_1691 = &g_642))), &p_17, (safe_lshift_func_uint8_t_u_s(((l_1694 == l_1695) & 0x93A3L), 4)), l_1678[1], l_1661[0])))), p_17, p_18));
                        if (p_18)
                            break;
                        l_1702++;
                        l_1706 = l_1705[1][6];
                    }
                }
                (*l_1566) = (((((safe_mod_func_int8_t_s_s(((0L < ((l_1549[(g_607 + 2)][g_607] = (g_1154[2].f6 < (safe_sub_func_uint8_t_u_u((((****g_619)--) & ((p_18 > (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((p_18 & (safe_sub_func_uint8_t_u_u(7UL, p_17))), ((*l_1658) |= (**g_541)))), (*l_1664))), (0x872D5F37L && g_72))), p_18)) || p_17), 8))) > 6UL)), (*g_542))))) || (*g_643))) || (-1L)), p_17)) != p_17) && g_565[3]) && (*l_1663)) != p_18);
            }

            ;
            for (l_1621.f0 = 0; (l_1621.f0 <= 3); l_1621.f0 += 1)
            {
                struct S0 l_1725 = {1UL,0x478D3F0AL,1L,0xB79274EEL,0x24FAL,0x072C5E54L,0x66L,0x7C3D4A47L,0xAD435052L};
                int l_1729 = 7L;
                int l_1732 = 0x20C8D91BL;
                (*l_1664) |= 0xFE7324F2L;
                for (l_1667.f6 = 0; (l_1667.f6 <= 3); l_1667.f6 += 1)
                {
                    int l_1726 = (-10L);
                    int l_1727 = 0x89E5FA99L;
                    int l_1728 = 0x8DA3DAFCL;
                    int l_1730 = (-1L);
                    int l_1731 = (-1L);
                    for (g_1144 = 0; (g_1144 <= 3); g_1144 += 1)
                    {
                        if (p_18)
                            break;
                        return l_1725;



                    }
                    ++l_1733[2];
                }
                for (g_1314 = 0; (g_1314 <= 2); g_1314 += 1)
                {
                    int i;
                    return g_1154[g_1314];



                }
                for (g_166.f7 = 3; (g_166.f7 >= 0); g_166.f7 -= 1)
                {
                    int l_1738 = (-1L);
                    (*l_1664) = ((void*)0 != p_16);
                    p_17 &= (safe_add_func_uint32_t_u_u(p_18, g_166.f3));
                    l_1738 ^= p_17;
                }
            }
        }


        ;
        l_1667 = l_1667;
        l_1658 = ((*l_1739) = &l_1572[4][7][0]);

        ;
        ;
        for (l_1667.f3 = 22; (l_1667.f3 > 13); l_1667.f3 = safe_sub_func_uint32_t_u_u(l_1667.f3, 4))
        {
            int *l_1744 = (void*)0;
            for (g_72 = 0; (g_72 < 42); g_72 = safe_add_func_int8_t_s_s(g_72, 3))
            {
                char l_1752 = 0L;
                int *l_1754 = (void*)0;
                l_1744 = (*l_1739);

                ;
                for (l_1667.f4 = 0; (l_1667.f4 <= (-24)); l_1667.f4 = safe_sub_func_int32_t_s_s(l_1667.f4, 9))
                {
                    unsigned short l_1749 = 65535UL;
                    int *l_1753 = &g_166.f8;
                    for (g_166.f6 = 0; (g_166.f6 != 1); g_166.f6 = safe_add_func_uint8_t_u_u(g_166.f6, 1))
                    {
                        (*l_1753) = func_36(l_1749, l_1744, (**l_1739), (((*l_1663) = (safe_rshift_func_uint16_t_u_u((((0xC90968EFL || ((*l_1753) = func_36((**g_541), &p_17, l_1752, g_688.f0, l_1753))) & p_17) >= 0x6D31335AL), 13))) < 2UL), l_1754);
                    }
                }
            }

            ;
        }
    }

    ;
    ;
    return l_1621;


}







static unsigned char * func_19(struct S0 p_20, int p_21, unsigned char * p_22, unsigned char * p_23, char p_24)
{
    int l_1256 = 0L;
    unsigned *l_1257 = &g_688.f5;
    unsigned l_1258 = 0x666BD454L;
    char l_1261 = 0x6AL;
    unsigned short l_1262 = 0xFE59L;
    int l_1263 = 0xE8EF6ABBL;
    char *l_1264 = (void*)0;
    char *l_1265 = &l_1261;
    int l_1305 = 2L;
    int l_1306 = 0xF9EDE985L;
    int l_1307 = (-1L);
    int l_1310[9][7][4] = {{{0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}}, {{0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}}, {{0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}}, {{0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}}, {{0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}}, {{0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}}, {{0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}}, {{0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}}, {{0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}, {0xECA72FCDL, 0L, 0x7D4BE13EL, 0x9C50339FL}}};
    int l_1313 = 0x94B01C61L;
    unsigned short l_1315 = 0x2F2DL;
    int *l_1395[10] = {&g_731[9][0][8], &l_1310[8][5][1], &g_731[9][0][8], &l_1310[8][5][1], &g_731[9][0][8], &l_1310[8][5][1], &g_731[9][0][8], &l_1310[8][5][1], &g_731[9][0][8], &l_1310[8][5][1]};
    short l_1487 = 6L;
    short l_1519 = (-3L);
    struct S0 l_1523 = {0x578E27FDL,0UL,8L,-9L,0x6F4FL,0xC54887D4L,0x69L,0xB6F55D80L,1L};
    struct S0 *l_1524 = &g_166;
    int i, j, k;
    (*g_1010) |= (l_1256 | ((*l_1265) = (((*l_1257) &= p_20.f1) > (((((l_1258 && (l_1256 || ((**g_541) = (((-1L) <= ((9UL > 0L) == (safe_lshift_func_uint8_t_u_u(0xF7L, ((((l_1261 <= (-1L)) ^ 0x2953L) && l_1258) >= p_21))))) == p_21)))) & l_1262) & l_1262) ^ (-9L)) == l_1263))));
    for (p_20.f3 = 6; (p_20.f3 >= 2); p_20.f3 -= 1)
    {
        unsigned l_1268 = 0UL;
        int **l_1269 = &g_636;
        unsigned short **l_1276[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1276[i] = &g_643;
        if ((safe_sub_func_uint8_t_u_u((**g_159), (l_1268 &= (**g_546)))))
        {
            l_1269 = &g_636;
            return g_160[p_20.f3];


        }
        else
        {
            int *l_1277 = &g_731[9][0][3];
            for (g_141 = 1; (g_141 <= 5); g_141 += 1)
            {
                int i;
                (*l_1277) ^= (!func_36(((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((0xE0CCL & (safe_add_func_uint8_t_u_u((~g_7[g_141]), ((*g_642) == (void*)0)))), (**g_642))), (g_258 = p_20.f0))) & ((0x8112FB23L == p_20.f3) || (l_1276[0] != (void*)0))), &l_1256, p_20.f4, p_20.f6, l_1277));
            }
        }
    }
    if ((p_20.f6 || ((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((1L != (!(p_20.f8 <= (((l_1263 >= ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((*p_23), l_1263)) | l_1261), (**g_159))) <= 0x6B34L)) > l_1256) && 246UL)))), 0x88L)), 65535UL)) ^ (-5L)), (**g_541))) != (**g_546))))
    {
        char *l_1288 = &g_166.f2;
        unsigned *l_1289[1][9] = {{&g_688.f0, (void*)0, &g_688.f0, (void*)0, &g_688.f0, (void*)0, &g_688.f0, (void*)0, &g_688.f0}};
        unsigned char *l_1290 = &g_166.f6;
        int l_1297 = 1L;
        int l_1304 = 1L;
        int l_1308 = (-2L);
        int l_1309 = 0L;
        char l_1311 = 0x02L;
        int l_1312[4][6][2] = {{{(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}}, {{(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}}, {{(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}}, {{(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}, {(-5L), 9L}}};
        int *l_1323 = &g_7[3];
        struct S0 l_1324 = {0x5A1595F2L,0xD69D59BDL,4L,0x812CE58FL,0x7A53L,0x31CCCC70L,0x94L,0xD7F80F96L,0L};
        char **l_1384 = &l_1288;
        int i, j, k;
        if (p_20.f8)
        {
            return (*g_159);


        }
        else
        {
            int *l_1291 = &g_688.f8;
            int *l_1292 = (void*)0;
            int *l_1293 = (void*)0;
            int *l_1294 = &g_1154[2].f8;
            int *l_1295 = &g_1154[2].f8;
            int *l_1296 = &g_731[9][0][8];
            int *l_1298 = &g_731[9][0][8];
            int *l_1299 = &g_1154[2].f8;
            int *l_1300 = &g_688.f8;
            int *l_1301 = &g_7[3];
            int *l_1302 = (void*)0;
            int *l_1303[7][8][4] = {{{&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}}, {{&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}}, {{&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}}, {{&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}}, {{&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}}, {{&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}}, {{&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}, {&g_96, &l_1297, &l_1256, &l_1297}}};
            int i, j, k;
            --l_1315;
        }
        for (g_688.f4 = 1; (g_688.f4 >= 0); g_688.f4 -= 1)
        {
            char *l_1320 = (void*)0;
            int l_1321 = 9L;
            int l_1329 = (-1L);
            unsigned short *l_1330 = (void*)0;
            unsigned l_1331 = 0xE238D08BL;
            int l_1332 = 0xFF0F8293L;
            short l_1375 = 0x3930L;
            int *l_1379 = &l_1312[2][0][0];
            l_1312[0][0][1] &= (safe_mod_func_int16_t_s_s((l_1306 &= l_1297), p_24));
            l_1312[2][0][0] = 0x4AFA3A42L;
            if (p_20.f6)
                continue;
            for (g_539 = 0; (g_539 <= 0); g_539 += 1)
            {
                int **l_1322[5] = {&g_1173, (void*)0, &g_1173, (void*)0, &g_1173};
                int **l_1362 = &g_636;
                struct S0 *l_1363 = &l_1324;
                unsigned short *l_1364[4] = {&l_1315, &g_258, &l_1315, &g_258};
                int i;
                l_1323 = (void*)0;

                ;
                if ((p_20.f8 = (l_1332 |= (((**g_546) && (l_1321 & g_539)) & l_1331))))
                {
                    int *l_1346[3];
                    int **l_1355 = &g_1173;
                    unsigned short *l_1361[2][7][9] = {{{&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}, {&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}, {&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}, {&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}, {&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}, {&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}, {&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}}, {{&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}, {&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}, {&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}, {&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}, {&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}, {&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}, {&g_72, &g_179, &g_72, &l_1262, &g_109, &l_1315, &g_258, &g_258, &l_1315}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1346[i] = (void*)0;
                    for (g_1144 = 0; (g_1144 <= 1); g_1144 += 1)
                    {
                        char *l_1347 = &g_574;
                        short *l_1350 = &g_1154[2].f4;
                        struct S0 l_1356 = {4UL,1UL,3L,-9L,6L,0xB43FA79CL,255UL,0L,0x527CC101L};
                        int i, j, k;
                        (*g_1010) |= (l_1321 |= (safe_lshift_func_uint8_t_u_u(((((-6L) != (((*l_1288) = l_1312[(g_539 + 2)][(g_688.f4 + 4)][g_1144]) >= (func_36(func_36(((*l_1347) = ((*l_1265) = ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(0x9DB1L, (func_36((*g_542), &l_1297, p_20.f1, (safe_lshift_func_int8_t_s_s((*g_542), (0x77E0BEF6L | (safe_rshift_func_uint8_t_u_s((((safe_sub_func_int16_t_s_s(func_36(g_1345, &l_1312[0][1][1], l_1312[(g_539 + 2)][(g_688.f4 + 4)][g_1144], g_166.f8, &l_1310[6][3][2]), l_1262)) || 9L) & 0UL), (**g_546)))))), l_1346[1]) & p_20.f1))), 6)) | p_20.f7))), &l_1312[(g_539 + 2)][(g_688.f4 + 4)][g_1144], p_20.f3, g_1027, &l_1312[(g_539 + 2)][(g_688.f4 + 4)][g_1144]), l_1346[1], p_20.f5, p_20.f5, &l_1321) && (**g_642)))) < p_24) & l_1332), 7)));
                        (*g_1010) = (p_20.f8 = ((*g_542) < (safe_add_func_int16_t_s_s((6UL & g_166.f8), l_1329))));
                        l_1355 = (*g_1107);

                        ;
                        l_1356 = p_20;
                    }

                    ;
                    l_1346[1] = &l_1307;


                    l_1346[1] = &l_1312[2][0][0];


                    (*g_1010) = ((safe_mod_func_uint16_t_u_u((*g_643), (safe_lshift_func_uint16_t_u_s((l_1310[8][5][1] = p_24), l_1262)))) | l_1331);
                }
                else
                {
                    (*g_1010) ^= p_20.f5;
                }
                p_20 = func_78(l_1331, (((((*l_1362) = &p_21) == (void*)0) & p_24) == 0x02CBL), l_1304, g_688.f3);

                ;
                for (l_1329 = 0; (l_1329 >= 0); l_1329 -= 1)
                {
                    unsigned l_1373 = 0UL;
                    int l_1376 = 1L;
                    if (p_21)
                        break;
                    for (g_56 = 0; (g_56 <= 0); g_56 += 1)
                    {
                        unsigned *l_1372 = &g_1144;
                        unsigned **l_1371 = &l_1372;
                        int l_1377 = 0x431111DBL;
                        char l_1378 = 9L;
                        int i;
                        (*g_1010) ^= ((g_565[(g_688.f4 + 1)] < (safe_add_func_int16_t_s_s(p_21, 0L))) < func_36((+((func_36(((*l_1288) |= ((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((&g_97 != ((*l_1371) = &l_1331)), (l_1377 & p_20.f0))), l_1258)) < 0xF5L)), &l_1376, p_20.f6, l_1378, &l_1256) < (**g_642)) || (**g_642))), &l_1332, g_565[(g_688.f4 + 1)], p_20.f7, &l_1310[8][5][1]));

                        ;
                        if ((*g_1010))
                            continue;
                        if (p_20.f2)
                            continue;
                    }
                    l_1323 = &l_1321;

                    ;
                    l_1379 = l_1379;
                }

                ;
            }


        }

        ;

        (*g_1010) ^= (safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s((p_21 != p_20.f0), l_1324.f5)), (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((0xDA020E90L < p_20.f3), l_1310[8][5][1])), (*g_643)))));
    }
    else
    {
        char l_1415 = 0x25L;
        int l_1418 = 2L;
        int l_1419[10] = {0x9BC51142L, 0x6165F0A4L, 0x2030A6BFL, 0x2030A6BFL, 0x6165F0A4L, 0x9BC51142L, 0x6165F0A4L, 0x2030A6BFL, 0x2030A6BFL, 0x6165F0A4L};
        char l_1511 = 0x6FL;
        unsigned short l_1520 = 65535UL;
        int i;
        for (g_44 = 29; (g_44 != 0); --g_44)
        {
            char l_1416 = (-9L);
            int *l_1417 = &l_1306;
            int l_1421[8];
            unsigned char l_1424 = 255UL;
            unsigned *l_1461 = &g_1027;
            unsigned **l_1460 = &l_1461;
            int i;
            for (i = 0; i < 8; i++)
                l_1421[i] = 0x478E5248L;
            for (g_688.f8 = 9; (g_688.f8 >= (-23)); g_688.f8--)
            {
                char *l_1396 = (void*)0;
                short l_1401 = 0x10F0L;
                int l_1420 = 0xBCD611FCL;
                int l_1423 = 0x0BA8C9D5L;
                unsigned short *l_1456 = &g_258;
                unsigned short l_1457 = 0xE45AL;
                int ***l_1481 = (void*)0;
                int l_1490 = (-1L);
                int l_1491[8][10][3] = {{{0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}}, {{0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}}, {{0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}}, {{0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}}, {{0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}}, {{0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}}, {{0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}}, {{0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}, {0xAB2BD523L, (-1L), 0L}}};
                int i, j, k;
                if ((*g_1010))
                {
                    int l_1397 = (-1L);
                    unsigned short *l_1400 = &g_109;
                    short *l_1431 = &g_166.f4;
                    int *l_1446[4][5] = {{&g_7[3], &g_7[3], &l_1305, &g_7[3], &g_7[3]}, {&g_7[3], &g_7[3], &l_1305, &g_7[3], &g_7[3]}, {&g_7[3], &g_7[3], &l_1305, &g_7[3], &g_7[3]}, {&g_7[3], &g_7[3], &l_1305, &g_7[3], &g_7[3]}};
                    int i, j;
                    (*g_1010) = (safe_add_func_uint32_t_u_u((func_36(p_21, (l_1395[1] = (void*)0), l_1401, p_24, &l_1310[8][5][1]) != 4294967286UL), 1UL));
                    for (l_1307 = 3; (l_1307 >= 0); l_1307 -= 1)
                    {
                        int l_1414 = 0xC8B4BBC6L;
                        int l_1422 = 0x170E4D0FL;
                        (*g_1010) = p_20.f5;
                        (*g_1010) ^= func_36((safe_sub_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(l_1401, p_20.f0)) | (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u((((l_1397 <= p_20.f0) || (safe_mod_func_int8_t_s_s(1L, l_1414))) < 0x4595B999L), (*g_643))) || p_20.f1), 4)) | l_1401), l_1415))), l_1416)), l_1417, l_1401, (*l_1417), &l_1310[8][5][1]);
                        l_1424--;
                    }
                    (*l_1417) = (safe_mod_func_uint16_t_u_u((*g_643), ((*l_1431) |= (safe_rshift_func_int8_t_s_s(0xEEL, 3)))));
                    (*l_1417) ^= (safe_rshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((p_20.f0 = g_539), (safe_sub_func_int32_t_s_s(p_20.f6, (*g_1010))))) < func_36((((l_1397 = (-5L)) != (safe_lshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s((-1L), p_21)) | (safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(p_20.f7, p_20.f2)), 5))), 6))) && l_1420), &l_1419[9], p_21, g_688.f4, l_1446[1][1])), 7));
                }
                else
                {
                    struct S0 *l_1447 = &g_1154[0];
                    (*l_1447) = p_20;
                }
                if ((safe_sub_func_int16_t_s_s((&p_24 != &p_24), (((****g_619) = (****g_619)) ^ 1L))))
                {
                    return p_22;



                }
                else
                {
                    unsigned l_1454 = 5UL;
                    int ***l_1480 = &g_451[0];
                    if ((*g_1010))
                    {
                        struct S0 l_1455 = {4294967295UL,0xE6E0C74DL,0xC2L,0xBF8CE722L,0x57E9L,0x12469BABL,0xA2L,2L,7L};
                        unsigned ***l_1462 = &l_1460;
                        l_1423 = ((**g_546) || (safe_add_func_int32_t_s_s((1L < (safe_lshift_func_int8_t_s_s(((((p_21 ^ (((**g_546) = (-6L)) >= ((void*)0 != &g_565[5]))) > (l_1454 ^= ((*g_643) = l_1423))) < ((*g_1010) ^= l_1455.f3)) <= (*l_1417)), 6))), g_166.f5)));
                        l_1457++;
                        if (l_1455.f3)
                            break;
                        (*l_1462) = l_1460;
                    }
                    else
                    {
                        int **l_1463 = &g_1010;
                        short *l_1472 = &g_688.f4;
                        char ***l_1475 = &g_541;
                        (*l_1463) = &l_1419[7];

                        ;
                        p_20.f8 &= (l_1457 | (safe_add_func_uint8_t_u_u((**g_159), (safe_mod_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((*l_1472) = 0x6BA1L), (safe_add_func_uint16_t_u_u(((void*)0 == p_23), (!((void*)0 != l_1475)))))), p_24)) && ((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((l_1480 != l_1481) < (****g_619)), p_20.f1)), (*p_23))) > p_20.f6)), g_7[3])))));
                        (*g_1010) = (**l_1463);
                    }
                    for (l_1401 = 1; (l_1401 <= (-24)); l_1401 = safe_sub_func_uint32_t_u_u(l_1401, 7))
                    {
                        return p_23;



                    }
                    for (l_1261 = 0; (l_1261 >= 0); l_1261 -= 1)
                    {
                        struct S0 *l_1484[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_1484[i] = &g_1154[2];
                        p_20 = p_20;
                        g_731[(l_1261 + 5)][l_1261][(l_1261 + 5)] &= p_20.f1;
                    }
                    p_20.f8 = ((*g_1010) = (p_20.f5 >= (safe_rshift_func_uint8_t_u_u(248UL, 4))));
                }
                if (l_1487)
                    continue;
                for (g_166.f1 = (-15); (g_166.f1 >= 36); ++g_166.f1)
                {
                    short l_1492 = 0x8524L;
                    int l_1493 = 0x880B3BF7L;
                    int l_1494 = 0xF7811F68L;
                    int l_1495 = (-1L);
                    int l_1496 = 0x8CD5E889L;
                    unsigned char l_1497 = 0x3DL;
                    unsigned char *l_1500 = (void*)0;
                    unsigned char *l_1501 = &l_1497;
                    short *l_1504 = &g_166.f4;
                    int *l_1515 = &l_1421[7];
                    (*l_1417) &= func_36(p_20.f5, &l_1305, p_20.f0, l_1419[7], (l_1395[1] = &l_1310[6][3][3]));
                    l_1497--;
                    p_20.f8 = (func_36(((**g_546) ^= ((**g_159) < ((l_1415 <= p_20.f0) == p_20.f4))), &l_1421[7], ((*l_1504) = (p_20.f7 && (--(*l_1501)))), g_734, &l_1495) ^ 0x4989ABD2L);
                    if ((func_36(l_1415, &l_1421[6], (safe_add_func_int8_t_s_s(((l_1493 = p_20.f3) < (65534UL < (safe_rshift_func_int16_t_s_u((((*l_1417) = l_1494) != (((****g_619) || func_36((safe_rshift_func_uint8_t_u_u((*p_23), 1)), &l_1496, l_1511, p_20.f8, &l_1418)) == 0x7BE6L)), 7)))), 0xE3L)), g_1154[2].f8, &l_1256) != l_1419[1]))
                    {
                        int *l_1512 = &g_7[0];
                        int **l_1513[6][1][10] = {{{&l_1512, &l_1395[1], &g_1173, &l_1417, &g_1010, &l_1395[1], &g_1010, &l_1417, &g_1173, &l_1395[1]}}, {{&l_1512, &l_1395[1], &g_1173, &l_1417, &g_1010, &l_1395[1], &g_1010, &l_1417, &g_1173, &l_1395[1]}}, {{&l_1512, &l_1395[1], &g_1173, &l_1417, &g_1010, &l_1395[1], &g_1010, &l_1417, &g_1173, &l_1395[1]}}, {{&l_1512, &l_1395[1], &g_1173, &l_1417, &g_1010, &l_1395[1], &g_1010, &l_1417, &g_1173, &l_1395[1]}}, {{&l_1512, &l_1395[1], &g_1173, &l_1417, &g_1010, &l_1395[1], &g_1010, &l_1417, &g_1173, &l_1395[1]}}, {{&l_1512, &l_1395[1], &g_1173, &l_1417, &g_1010, &l_1395[1], &g_1010, &l_1417, &g_1173, &l_1395[1]}}};
                        int i, j, k;
                        l_1395[9] = &l_1421[5];
                        l_1395[0] = l_1512;
                        p_20.f8 ^= l_1492;
                    }
                    else
                    {
                        int *l_1514 = &l_1420;
                        l_1515 = l_1514;

                        ;
                        g_1516--;
                        if (p_24)
                            break;
                        (*l_1515) |= (p_20.f3 && (**g_642));
                    }

                    ;
                }
            }


            if (p_20.f5)
                break;

            l_1520++;
        }

        ;

    }

    ;


    (*l_1524) = l_1523;
    return p_23;



}







static struct S0 func_25(char p_26, int * p_27, struct S0 p_28, unsigned char * p_29)
{
    char l_1157 = 0x9AL;
    int l_1158 = 7L;
    int l_1159 = 0x19FA31E8L;
    int l_1160[3];
    int *l_1165 = &g_688.f8;
    struct S0 l_1206 = {0x0E6ADC53L,0xAB689CA3L,4L,0x0CE877ADL,1L,0x33D9745FL,0x54L,0x190BA6D5L,0x0D5CF240L};
    int **l_1209 = &g_1173;
    int *l_1215 = &l_1206.f3;
    int l_1234 = 0xFA417152L;
    char l_1248 = 0L;
    int i;
    for (i = 0; i < 3; i++)
        l_1160[i] = (-2L);
    for (g_166.f8 = 8; (g_166.f8 >= 3); g_166.f8 -= 1)
    {
        int l_1155 = 0x151E5CA1L;
        int *l_1156[3];
        char l_1161 = 1L;
        unsigned char l_1162[7][6][6] = {{{4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}}, {{4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}}, {{4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}}, {{4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}}, {{4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}}, {{4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}}, {{4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}, {4UL, 0xECL, 6UL, 0x8BL, 6UL, 0xB3L}}};
        unsigned l_1196 = 7UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1156[i] = &g_731[9][0][8];
        ++l_1162[4][2][1];
        l_1156[2] = l_1165;


        for (g_688.f8 = 0; (g_688.f8 >= 0); g_688.f8 -= 1)
        {
            int l_1168 = 7L;
            int *l_1177 = &g_7[3];
            int *l_1181 = (void*)0;
            int l_1194 = (-1L);
            int l_1195 = 0x89157330L;
            (*g_1010) &= func_36(func_36(((**g_541) ^= ((safe_mod_func_uint16_t_u_u((p_28.f1 != func_36(l_1168, &l_1168, p_28.f2, g_978[3], p_27)), (safe_add_func_uint32_t_u_u((~4294967295UL), ((((*l_1165) || p_28.f3) && (-1L)) >= 248UL))))) < 0xEBL)), &l_1168, p_28.f1, g_1154[2].f4, p_27), p_27, p_28.f7, g_7[4], &l_1160[1]);
            l_1158 &= ((*p_27) = ((*g_1010) |= (*p_27)));
            for (l_1161 = 0; (l_1161 >= 0); l_1161 -= 1)
            {
                unsigned short l_1174 = 65526UL;
                short *l_1175 = &g_688.f4;
                int *l_1176[10][4][6] = {{{&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}}, {{&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}}, {{&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}}, {{&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}}, {{&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}}, {{&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}}, {{&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}}, {{&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}}, {{&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}}, {{&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}, {&l_1168, &l_1168, &l_1160[2], &g_688.f8, &g_7[4], &g_688.f8}}};
                int i, j, k;
                (*g_1173) |= ((safe_rshift_func_uint8_t_u_s((func_36((!(**g_546)), p_27, p_28.f5, ((((!(((*l_1175) = (l_1174 = (func_36((p_27 != g_1173), p_27, (*l_1165), l_1168, p_27) > (**g_642)))) ^ p_28.f1)) ^ (**g_642)) & (-1L)) != l_1168), l_1176[7][2][2]) >= 0x9BBDF5F3L), p_28.f5)) < 0UL);
                for (g_166.f3 = 0; (g_166.f3 >= 0); g_166.f3 -= 1)
                {
                    int *l_1178 = &g_7[3];
                    if ((*p_27))
                        break;
                    for (p_28.f0 = 0; (p_28.f0 <= 0); p_28.f0 += 1)
                    {
                        unsigned *l_1179 = (void*)0;
                        unsigned *l_1180 = &g_1144;
                        unsigned short l_1182 = 65535UL;
                        int **l_1185 = &l_1156[0];
                        (*l_1177) ^= func_36((p_28.f4 & ((*p_27) != l_1168)), l_1177, p_28.f4, (func_36((*g_542), l_1178, p_28.f1, ((*l_1180) = p_28.f7), p_27) || 65527UL), l_1181);
                        l_1182--;
                        (*l_1185) = l_1178;
                        if ((*l_1178))
                            break;
                    }
                    (*p_27) = (*p_27);
                }
            }
            if (((*g_1010) = (~(-1L))))
            {
                int l_1190 = 0L;
                int i, j;
                p_27 = p_27;
                if (((((safe_rshift_func_uint16_t_u_u((p_28.f2 || ((void*)0 != &g_451[7])), func_36((**g_541), p_27, ((safe_rshift_func_uint8_t_u_u((l_1190 > (func_36((**g_546), &l_1168, p_28.f2, p_28.f0, p_27) > (*p_27))), 3)) | (-10L)), p_28.f4, &l_1168))) < l_1190) == 5UL) > 1UL))
                {
                    return p_28;
                }
                else
                {
                    int *l_1191 = &g_166.f8;
                    (*p_27) = (((*l_1177) | func_36((**g_541), p_27, p_28.f0, (p_28.f1 = g_166.f1), l_1191)) > (safe_rshift_func_int16_t_s_s((~p_28.f6), 11)));
                    for (l_1190 = 5; (l_1190 >= 0); l_1190 -= 1)
                    {
                        int **l_1199 = (void*)0;
                        int **l_1200 = &g_206;
                        int i;
                        --l_1196;
                        (*l_1200) = (void*)0;

                        ;
                        (*l_1200) = &g_7[l_1190];

                        ;
                    }
                }
            }
            else
            {
                int l_1205 = (-6L);
                struct S0 *l_1207 = (void*)0;
                struct S0 *l_1208 = &g_1154[0];
                (*l_1208) = (l_1206 = (p_28 = func_78(((*g_1173) = (func_36((**g_541), p_27, (safe_lshift_func_uint16_t_u_s(p_28.f2, 2)), (+(safe_rshift_func_uint16_t_u_u(func_36(p_28.f8, &l_1160[2], (0x5EFFL || p_28.f3), ((4294967293UL | (p_28.f0 || 65526UL)) == (**g_159)), &l_1159), 15))), &l_1195) | 0x99D24C65L)), (*g_542), l_1205, g_565[0])));
                (*g_1010) |= l_1205;
            }
        }


    }
    (*l_1209) = &l_1160[1];

    ;
    (*l_1209) = (*l_1209);
    for (g_574 = 0; (g_574 != 4); ++g_574)
    {
        int **l_1214 = &g_636;
        char *l_1221 = &g_1154[2].f2;
        int l_1226 = 0xB1D4932DL;
        int l_1237 = (-8L);
        struct S0 *l_1246 = &g_166;
        unsigned l_1252[7][5][1] = {{{0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}}, {{0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}}, {{0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}}, {{0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}}, {{0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}}, {{0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}}, {{0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}, {0x88C3D5B9L}}};
        int i, j, k;
    }
    return p_28;


}







static unsigned short func_36(char p_37, int * p_38, short p_39, unsigned p_40, int * p_41)
{
    unsigned char l_1019 = 0x66L;
    int l_1032 = 3L;
    unsigned char ****l_1039 = &g_620[1];
    int l_1044 = 0x9E5AB384L;
    int l_1045[10][7] = {{(-1L), (-8L), (-1L), 1L, 1L, 1L, 0x1C813D43L}, {(-1L), (-8L), (-1L), 1L, 1L, 1L, 0x1C813D43L}, {(-1L), (-8L), (-1L), 1L, 1L, 1L, 0x1C813D43L}, {(-1L), (-8L), (-1L), 1L, 1L, 1L, 0x1C813D43L}, {(-1L), (-8L), (-1L), 1L, 1L, 1L, 0x1C813D43L}, {(-1L), (-8L), (-1L), 1L, 1L, 1L, 0x1C813D43L}, {(-1L), (-8L), (-1L), 1L, 1L, 1L, 0x1C813D43L}, {(-1L), (-8L), (-1L), 1L, 1L, 1L, 0x1C813D43L}, {(-1L), (-8L), (-1L), 1L, 1L, 1L, 0x1C813D43L}, {(-1L), (-8L), (-1L), 1L, 1L, 1L, 0x1C813D43L}};
    short *l_1081 = &g_166.f4;
    int ***l_1106[6][8] = {{&g_451[3], &g_451[7], &g_451[3], (void*)0, &g_451[3], &g_451[1], &g_451[3], &g_451[3]}, {&g_451[3], &g_451[7], &g_451[3], (void*)0, &g_451[3], &g_451[1], &g_451[3], &g_451[3]}, {&g_451[3], &g_451[7], &g_451[3], (void*)0, &g_451[3], &g_451[1], &g_451[3], &g_451[3]}, {&g_451[3], &g_451[7], &g_451[3], (void*)0, &g_451[3], &g_451[1], &g_451[3], &g_451[3]}, {&g_451[3], &g_451[7], &g_451[3], (void*)0, &g_451[3], &g_451[1], &g_451[3], &g_451[3]}, {&g_451[3], &g_451[7], &g_451[3], (void*)0, &g_451[3], &g_451[1], &g_451[3], &g_451[3]}};
    int i, j;
    for (g_166.f7 = 2; (g_166.f7 != (-28)); g_166.f7 = safe_sub_func_int32_t_s_s(g_166.f7, 1))
    {
        unsigned *l_1020 = &g_166.f0;
        int l_1023 = 1L;
        unsigned short l_1084 = 8UL;
        unsigned l_1141 = 0xFE543D5BL;
    }
    return (*g_643);
}







static int * func_45(int p_46, struct S0 p_47)
{
    struct S0 **l_690 = &g_205;
    struct S0 ***l_689 = &l_690;
    int l_692 = 0x7ACD1AC6L;
    unsigned l_698 = 0xF29F5510L;
    int l_749 = 0x873A7F6CL;
    int l_750 = (-1L);
    int l_754 = 2L;
    int l_756 = 0x29B00D9CL;
    int l_759 = 0xE590CE0BL;
    int l_760 = 0L;
    int l_763 = 6L;
    int l_765 = 0xEDA3DC62L;
    int l_767 = 0x43ED895AL;
    int l_770 = 0x2663EC61L;
    int l_771[6] = {0xFFB2BB8AL, 0xFFB2BB8AL, 1L, 0xFFB2BB8AL, 0xFFB2BB8AL, 1L};
    unsigned char *l_838 = (void*)0;
    int l_840 = 0xEB788A95L;
    int *l_842 = (void*)0;
    unsigned char *l_855 = &g_166.f6;
    unsigned *l_856 = &g_734;
    int *l_857 = &l_763;
    unsigned char *l_871 = &g_607;
    unsigned l_890 = 0xB2C9905DL;
    short l_927 = 1L;
    unsigned l_929 = 0x3DD36039L;
    unsigned l_995[4][2][8] = {{{0xB22C1EFFL, 4294967295UL, 0UL, 0x3AA95F22L, 0x7251FE24L, 0x1F439E28L, 0x7251FE24L, 0x3AA95F22L}, {0xB22C1EFFL, 4294967295UL, 0UL, 0x3AA95F22L, 0x7251FE24L, 0x1F439E28L, 0x7251FE24L, 0x3AA95F22L}}, {{0xB22C1EFFL, 4294967295UL, 0UL, 0x3AA95F22L, 0x7251FE24L, 0x1F439E28L, 0x7251FE24L, 0x3AA95F22L}, {0xB22C1EFFL, 4294967295UL, 0UL, 0x3AA95F22L, 0x7251FE24L, 0x1F439E28L, 0x7251FE24L, 0x3AA95F22L}}, {{0xB22C1EFFL, 4294967295UL, 0UL, 0x3AA95F22L, 0x7251FE24L, 0x1F439E28L, 0x7251FE24L, 0x3AA95F22L}, {0xB22C1EFFL, 4294967295UL, 0UL, 0x3AA95F22L, 0x7251FE24L, 0x1F439E28L, 0x7251FE24L, 0x3AA95F22L}}, {{0xB22C1EFFL, 4294967295UL, 0UL, 0x3AA95F22L, 0x7251FE24L, 0x1F439E28L, 0x7251FE24L, 0x3AA95F22L}, {0xB22C1EFFL, 4294967295UL, 0UL, 0x3AA95F22L, 0x7251FE24L, 0x1F439E28L, 0x7251FE24L, 0x3AA95F22L}}};
    int *l_1008 = &g_7[4];
    int **l_1009 = &l_1008;
    int i, j, k;
    for (g_141 = 0; (g_141 >= 0); g_141 -= 1)
    {
        struct S0 ***l_691 = &l_690;
        int l_697 = 0x911453FCL;
        struct S0 l_730 = {0xA10B2516L,4UL,0x08L,0L,-2L,0xE504C16DL,0x87L,0x48025388L,4L};
        int l_740[1][2][4];
        int l_764 = 0x60ABAF94L;
        unsigned l_772 = 0x3FD06290L;
        unsigned l_784 = 0x5A18F214L;
        int *l_805 = &g_688.f8;
        unsigned char *l_807 = (void*)0;
        unsigned short *l_829 = &g_72;
        short *l_839 = &g_166.f4;
        int *l_841[5][6][4] = {{{&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}}, {{&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}}, {{&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}}, {{&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}}, {{&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}, {&l_767, &l_754, &l_767, &l_771[1]}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 4; k++)
                    l_740[i][j][k] = (-8L);
            }
        }
        if ((((l_689 != l_691) & l_692) || (p_47.f6 & 0xBBL)))
        {
            int *l_693[7][9] = {{&g_7[1], &g_96, &g_688.f8, &g_7[3], &g_7[3], &g_688.f8, &g_96, &g_7[1], &g_7[3]}, {&g_7[1], &g_96, &g_688.f8, &g_7[3], &g_7[3], &g_688.f8, &g_96, &g_7[1], &g_7[3]}, {&g_7[1], &g_96, &g_688.f8, &g_7[3], &g_7[3], &g_688.f8, &g_96, &g_7[1], &g_7[3]}, {&g_7[1], &g_96, &g_688.f8, &g_7[3], &g_7[3], &g_688.f8, &g_96, &g_7[1], &g_7[3]}, {&g_7[1], &g_96, &g_688.f8, &g_7[3], &g_7[3], &g_688.f8, &g_96, &g_7[1], &g_7[3]}, {&g_7[1], &g_96, &g_688.f8, &g_7[3], &g_7[3], &g_688.f8, &g_96, &g_7[1], &g_7[3]}, {&g_7[1], &g_96, &g_688.f8, &g_7[3], &g_7[3], &g_688.f8, &g_96, &g_7[1], &g_7[3]}};
            int i, j;
            l_692 = (p_47.f8 = p_47.f6);
        }
        else
        {
            unsigned char l_702[1][5] = {{0x80L, 1UL, 0x80L, 1UL, 0x80L}};
            struct S0 l_737[5][5] = {{{0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0x39D91A00L,4294967288UL,0xB7L,0x3AB22CB9L,0x29CEL,4294967292UL,9UL,6L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}}, {{0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0x39D91A00L,4294967288UL,0xB7L,0x3AB22CB9L,0x29CEL,4294967292UL,9UL,6L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}}, {{0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0x39D91A00L,4294967288UL,0xB7L,0x3AB22CB9L,0x29CEL,4294967292UL,9UL,6L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}}, {{0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0x39D91A00L,4294967288UL,0xB7L,0x3AB22CB9L,0x29CEL,4294967292UL,9UL,6L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}}, {{0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0x39D91A00L,4294967288UL,0xB7L,0x3AB22CB9L,0x29CEL,4294967292UL,9UL,6L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}, {0xD92E2C32L,0xF080CA36L,0xF1L,-4L,0L,4294967294UL,0x89L,0xB6741952L,-3L}}};
            int l_766 = 9L;
            int l_768 = 0x274F5635L;
            int l_769[6] = {0xA78C92C4L, 0xA78C92C4L, 0xA6404614L, 0xA78C92C4L, 0xA78C92C4L, 0xA6404614L};
            short l_789 = (-1L);
            struct S0 ****l_826 = &l_689;
            int i, j;
            for (g_258 = 1; (g_258 <= 5); g_258 += 1)
            {
                char **l_705 = &g_542;
                int l_711 = 0x15075DEBL;
                int *l_715[4] = {&g_7[1], &g_7[0], &g_7[1], &g_7[0]};
                int i;
                for (g_109 = 1; (g_109 <= 5); g_109 += 1)
                {
                    int *l_714 = &g_7[3];
                    for (p_47.f1 = 0; (p_47.f1 <= 1); p_47.f1 += 1)
                    {
                        int *l_696[2];
                        struct S0 **l_699 = (void*)0;
                        struct S0 **l_700 = &g_204[0][1][7];
                        int **l_701 = &l_696[0];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_696[i] = &g_688.f8;
                        l_697 |= (safe_rshift_func_int8_t_s_u(((void*)0 == g_451[(g_258 + 1)]), 4));
                        p_47.f8 &= l_698;
                        (*l_700) = ((**l_689) = (**l_691));
                        (*l_701) = &l_692;


                    }
                    for (g_688.f8 = 0; (g_688.f8 <= 6); g_688.f8 += 1)
                    {
                        int l_703 = 0x2F178ED9L;
                        short l_704 = 0L;
                        (*g_205) = func_78(p_47.f8, (65528UL & (((*g_643) & l_702[0][2]) ^ (l_703 >= (l_704 && (~((l_705 == &g_542) != 0x49L)))))), p_47.f5, p_47.f2);
                    }
                    (*l_714) &= (safe_mod_func_uint32_t_u_u((p_47.f5 ^ (safe_add_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u(((p_47.f1 & l_711) || ((void*)0 == &l_711)))) ^ (p_46 > ((l_698 < ((p_47.f8 = 0x0259E257L) != (safe_sub_func_uint32_t_u_u(((**g_642) & l_692), l_711)))) <= l_711))), l_692))), 0xD9A58E06L));
                    if (p_46)
                        break;
                }
                l_697 = (p_47.f8 = l_702[0][3]);
            }
            for (p_47.f5 = 1; (p_47.f5 <= 6); p_47.f5 += 1)
            {
                unsigned l_720 = 0UL;
                unsigned char *l_741 = &l_730.f6;
                int l_748 = 0x4B2431DEL;
                int l_751 = (-1L);
                short l_752 = 1L;
                int l_755 = 0x696D0367L;
                int l_758 = 0x9AAEBF5CL;
                int l_761 = 0L;
                int l_762[5][1];
                short l_775 = 0xC9BBL;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_762[i][j] = 0x75A561A8L;
                }
                for (g_166.f7 = 0; (g_166.f7 >= 0); g_166.f7 -= 1)
                {
                    char l_722[7] = {0xA4L, 0xA4L, 4L, 0xA4L, 0xA4L, 4L, 0xA4L};
                    int l_729 = 0L;
                    unsigned char *l_735 = &g_166.f6;
                    unsigned char *l_736 = &g_607;
                    int i;
                    for (p_47.f4 = 0; (p_47.f4 <= 0); p_47.f4 += 1)
                    {
                        int *l_716[10] = {&g_7[3], &g_96, &g_7[3], &g_96, &g_7[3], &g_96, &g_7[3], &g_96, &g_7[3], &g_96};
                        int **l_717 = &l_716[1];
                        int i;
                        (*l_717) = l_716[1];
                        (**l_689) = &g_688;

                        ;
                        (**l_717) &= (((**g_546) || (safe_lshift_func_int16_t_s_s(l_720, l_720))) & p_47.f5);
                    }
                    if (l_702[0][2])
                    {
                        unsigned short l_721 = 1UL;
                        short *l_727 = &g_166.f4;
                        int *l_728[1][6][8] = {{{&g_166.f8, (void*)0, &l_697, (void*)0, (void*)0, &l_692, (void*)0, (void*)0}, {&g_166.f8, (void*)0, &l_697, (void*)0, (void*)0, &l_692, (void*)0, (void*)0}, {&g_166.f8, (void*)0, &l_697, (void*)0, (void*)0, &l_692, (void*)0, (void*)0}, {&g_166.f8, (void*)0, &l_697, (void*)0, (void*)0, &l_692, (void*)0, (void*)0}, {&g_166.f8, (void*)0, &l_697, (void*)0, (void*)0, &l_692, (void*)0, (void*)0}, {&g_166.f8, (void*)0, &l_697, (void*)0, (void*)0, &l_692, (void*)0, (void*)0}}};
                        int i, j, k;
                        l_729 &= ((((l_721 < (**g_159)) && l_722[0]) <= (safe_sub_func_int16_t_s_s(((*l_727) = (safe_mul_func_uint16_t_u_u(0xDEE5L, (((g_279[g_166.f7][(g_141 + 6)] = g_279[0][7]) != g_643) >= (p_47.f0 | (((*g_643) <= p_47.f8) == l_697)))))), 65530UL))) != p_47.f3);
                        l_730 = func_78(l_729, l_697, (p_47.f8 = p_47.f1), l_702[0][2]);
                        l_730.f8 = l_720;
                    }
                    else
                    {
                        int *l_732 = (void*)0;
                        int *l_733 = &g_96;
                        if (l_720)
                            break;
                        (*l_733) |= g_731[9][0][8];
                        if (p_47.f8)
                            continue;
                        if (l_698)
                            break;
                    }
                    if (g_734)
                        break;
                    l_730 = func_78(l_730.f8, (0x94782147L <= (((**g_159) != ((*l_736) = ((*l_735) &= l_720))) & 1UL)), l_692, g_141);
                }
                if (l_740[0][0][0])
                {
                    for (g_166.f5 = 0; (g_166.f5 <= 6); g_166.f5 += 1)
                    {
                        int **l_742 = (void*)0;
                        int **l_743 = &g_206;
                        (*l_743) = &l_740[0][0][2];

                        ;
                    }
                }
                else
                {
                    short l_753 = (-2L);
                    int l_757[5][10] = {{0L, (-8L), (-7L), (-8L), 0L, 0x5884E356L, 0L, (-8L), (-7L), (-8L)}, {0L, (-8L), (-7L), (-8L), 0L, 0x5884E356L, 0L, (-8L), (-7L), (-8L)}, {0L, (-8L), (-7L), (-8L), 0L, 0x5884E356L, 0L, (-8L), (-7L), (-8L)}, {0L, (-8L), (-7L), (-8L), 0L, 0x5884E356L, 0L, (-8L), (-7L), (-8L)}, {0L, (-8L), (-7L), (-8L), 0L, 0x5884E356L, 0L, (-8L), (-7L), (-8L)}};
                    int *l_785 = (void*)0;
                    int *l_786 = &l_768;
                    int i, j;
                    for (g_688.f4 = 6; (g_688.f4 >= 2); g_688.f4 -= 1)
                    {
                        int *l_744 = &g_731[9][0][8];
                        int *l_745 = &l_740[0][0][3];
                        int *l_746 = (void*)0;
                        int *l_747[9] = {&g_96, &l_740[0][0][2], &g_96, &l_740[0][0][2], &g_96, &l_740[0][0][2], &g_96, &l_740[0][0][2], &g_96};
                        int l_776[5][10] = {{2L, 1L, 0xE540E40CL, 0x92EADF3DL, 0x4D571A63L, 0xB6FF64B0L, 9L, 0L, 0x48A56C43L, 0x6F523559L}, {2L, 1L, 0xE540E40CL, 0x92EADF3DL, 0x4D571A63L, 0xB6FF64B0L, 9L, 0L, 0x48A56C43L, 0x6F523559L}, {2L, 1L, 0xE540E40CL, 0x92EADF3DL, 0x4D571A63L, 0xB6FF64B0L, 9L, 0L, 0x48A56C43L, 0x6F523559L}, {2L, 1L, 0xE540E40CL, 0x92EADF3DL, 0x4D571A63L, 0xB6FF64B0L, 9L, 0L, 0x48A56C43L, 0x6F523559L}, {2L, 1L, 0xE540E40CL, 0x92EADF3DL, 0x4D571A63L, 0xB6FF64B0L, 9L, 0L, 0x48A56C43L, 0x6F523559L}};
                        int i, j;
                        (*l_744) = 0L;
                        l_772++;
                        g_777++;
                    }
                    l_697 = ((((**g_159) = (safe_add_func_int16_t_s_s(l_769[2], l_762[4][0]))) == (safe_rshift_func_int16_t_s_s(0xEA62L, (((**g_642) <= (((*l_786) = (3L >= l_784)) && ((((safe_lshift_func_uint16_t_u_s(0xC3A4L, (*l_786))) & 0x7BL) >= l_761) | l_751))) != p_47.f1)))) | l_737[1][1].f0);
                    if (l_771[4])
                        break;
                }
                if (l_789)
                    continue;
            }

            ;

            for (l_692 = 6; (l_692 >= 0); l_692 -= 1)
            {
                int **l_798 = &g_206;
                int **l_799 = &g_206;
                int **l_800 = (void*)0;
                int **l_801 = (void*)0;
                int **l_802 = &g_206;
                int **l_803 = &g_206;
                int **l_804[9];
                unsigned short *l_806 = &g_109;
                int i;
                for (i = 0; i < 9; i++)
                    l_804[i] = &g_206;
                p_47.f8 = ((safe_add_func_int32_t_s_s((-1L), ((**g_541) != (p_47.f4 & (l_760 > (safe_add_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((((l_805 = &l_740[0][0][3]) == &l_697) < (g_166.f4 ^ 7UL)) && 1L), l_737[1][1].f4)) < 0UL), p_47.f2))))))) > l_740[0][1][2]);

                ;
            }

            ;
            (*l_805) |= (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((**g_642), 5)), 2)), 3)), p_47.f0));
        }

        ;

        ;
        (***l_689) = func_78((*l_805), (l_749 ^ (0x1FL ^ (l_840 &= (safe_rshift_func_int16_t_s_u(((&g_643 != (void*)0) >= (((((*l_839) = (safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(1UL, (p_47.f8 ^ (((safe_rshift_func_int16_t_s_u(0x818BL, ((*g_643) ^= (l_767 = p_47.f6)))) < p_46) ^ 0x8D360A5AL)))), p_47.f5))) > p_47.f0) | (**g_541)) | p_47.f4)), (*l_805)))))), (*l_805), l_765);
        return l_842;



    }
    (*g_825) = &p_47;

    ;
    if (p_47.f5)
    {
        unsigned short ***l_858 = &g_642;
        int *l_859 = &l_763;
        int **l_860 = &l_859;
        (*l_858) = &g_643;
        (*l_860) = l_859;
        (*l_860) = (*l_860);
    }
    else
    {
        unsigned l_863 = 6UL;
        char l_869 = 0xA1L;
        unsigned short *l_870 = &g_109;
        short *l_872 = (void*)0;
        short *l_873 = &g_688.f4;
        char l_874 = 1L;
        int ***l_896 = (void*)0;
        unsigned short ***l_906 = &g_642;
        int l_910 = (-1L);
        int l_917 = (-1L);
        int l_919 = 0x2655AF5AL;
        int l_970 = 0x6B449555L;
        int l_973 = 0xA40EB6C4L;
        int l_977[3];
        struct S0 l_1000 = {4294967287UL,1UL,-10L,0x650565B1L,0x5DB5L,5UL,0x4DL,-5L,0x42B7A1D9L};
        unsigned char *l_1006 = &g_688.f6;
        int i;
        for (i = 0; i < 3; i++)
            l_977[i] = 0x176B4A0BL;
        if ((safe_sub_func_uint16_t_u_u(((((*g_643) = (l_863 || 0UL)) & p_47.f7) ^ (safe_mod_func_uint16_t_u_u((0xD7L == ((safe_add_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((p_47.f6 >= (p_47.f8 ^ ((*l_873) = (0x89L >= ((****g_619) | l_863))))))), p_47.f6)) && 1L)), 0x8408L))), l_874)))
        {
            int *l_884 = &g_166.f8;
            char *l_891 = &g_539;
            int ***l_901 = &g_635[2][4];
            int l_959 = 0L;
            int l_960 = 1L;
            int l_961 = 0L;
            int l_962 = 1L;
            int l_964[6][5][1] = {{{0x529C8257L}, {0x529C8257L}, {0x529C8257L}, {0x529C8257L}, {0x529C8257L}}, {{0x529C8257L}, {0x529C8257L}, {0x529C8257L}, {0x529C8257L}, {0x529C8257L}}, {{0x529C8257L}, {0x529C8257L}, {0x529C8257L}, {0x529C8257L}, {0x529C8257L}}, {{0x529C8257L}, {0x529C8257L}, {0x529C8257L}, {0x529C8257L}, {0x529C8257L}}, {{0x529C8257L}, {0x529C8257L}, {0x529C8257L}, {0x529C8257L}, {0x529C8257L}}, {{0x529C8257L}, {0x529C8257L}, {0x529C8257L}, {0x529C8257L}, {0x529C8257L}}};
            int l_971[7][10][3] = {{{0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}}, {{0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}}, {{0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}}, {{0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}}, {{0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}}, {{0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}}, {{0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}, {0x3D3875D5L, 0xBE7036C3L, 5L}}};
            unsigned short l_979 = 0UL;
            int *l_982[3];
            unsigned l_985 = 9UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_982[i] = &l_964[2][3][0];
            if ((p_47.f8 ^= ((**g_159) ^ ((**g_541) = 0L))))
            {
                char l_882 = 0L;
                for (l_770 = (-17); (l_770 < 19); ++l_770)
                {
                    unsigned short *l_881[4][2][6] = {{{&g_258, &g_72, &g_72, &g_72, &g_258, (void*)0}, {&g_258, &g_72, &g_72, &g_72, &g_258, (void*)0}}, {{&g_258, &g_72, &g_72, &g_72, &g_258, (void*)0}, {&g_258, &g_72, &g_72, &g_72, &g_258, (void*)0}}, {{&g_258, &g_72, &g_72, &g_72, &g_258, (void*)0}, {&g_258, &g_72, &g_72, &g_72, &g_258, (void*)0}}, {{&g_258, &g_72, &g_72, &g_72, &g_258, (void*)0}, {&g_258, &g_72, &g_72, &g_72, &g_258, (void*)0}}};
                    int *l_883 = &l_760;
                    int i, j, k;
                    (*l_857) = l_882;
                    l_884 = l_883;

                    ;
                    if ((*l_884))
                        break;
                    (*g_205) = p_47;
                }

                ;
            }
            else
            {
                short l_887 = 0xA883L;
                p_47 = func_78(((l_887 & p_47.f6) < p_47.f8), (**g_546), (*l_884), g_607);
            }

            ;
            (*l_884) ^= (((**g_546) = l_869) && 0x73L);
            for (l_770 = 0; (l_770 <= 8); l_770 += 1)
            {
                int *l_900 = (void*)0;
                return l_900;



            }
            if (((((*l_901) = &g_636) == &g_636) <= ((--(*l_870)) == ((0xDCC794AAL && (((p_47.f0 <= (safe_add_func_uint8_t_u_u((&g_642 == l_906), (((*g_542) ^= ((l_869 || ((*l_884) &= (*g_643))) >= (p_47.f5 | p_47.f7))) && p_47.f5)))) != 1UL) | l_874)) < 65533UL))))
            {
                int *l_926 = (void*)0;
                struct S0 *l_941 = &g_688;
                int l_963 = (-1L);
                int l_969 = 0xD3ADB1E0L;
                int l_972 = (-1L);
                int l_974 = 0xED9CCB3DL;
                int l_975 = 0x3919A605L;
                int l_976[1][5];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_976[i][j] = (-4L);
                }
                if ((*l_857))
                {
                    int *l_907 = &g_731[9][0][8];
                    int *l_908 = (void*)0;
                    int *l_909 = &g_96;
                    int *l_911 = &l_692;
                    int *l_912 = &g_166.f8;
                    int *l_913 = &g_7[2];
                    int *l_914 = &g_731[9][0][8];
                    int *l_915 = (void*)0;
                    int *l_916 = &g_96;
                    int *l_918[7] = {&l_771[4], &g_731[9][0][8], &l_771[4], &g_731[9][0][8], &l_771[4], &g_731[9][0][8], &l_771[4]};
                    unsigned char l_920 = 0xB9L;
                    int i;
                    l_920--;
                }
                else
                {
                    short l_925 = (-1L);
                    int *l_928[10][10][2] = {{{&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}}, {{&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}}, {{&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}}, {{&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}}, {{&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}}, {{&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}}, {{&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}}, {{&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}}, {{&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}}, {{&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}, {&g_688.f8, &g_7[5]}}};
                    int i, j, k;
                    for (p_47.f8 = 5; (p_47.f8 >= 0); p_47.f8 -= 1)
                    {
                        int **l_923 = (void*)0;
                        int **l_924 = &l_842;
                        int i;
                        (*l_924) = &l_919;

                        ;
                        g_7[p_47.f8] |= (l_925 <= p_46);
                        l_926 = l_884;

                        ;
                    }

                    ;
                    ;
                    ++l_929;
                }

                ;
                ;
                if (((p_47.f7 == (safe_lshift_func_int8_t_s_u((p_47.f3 > (p_47.f6 | (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((**g_541), 0x8EL)), 13)))), 0))) < ((((safe_sub_func_uint8_t_u_u(p_47.f4, (((safe_unary_minus_func_uint32_t_u(g_258)) <= p_47.f4) != (*g_542)))) & (*l_857)) | (**g_541)) | (**g_642))))
                {
                    l_941 = &p_47;

                    ;
                }
                else
                {
                    char l_944 = 0x2EL;
                    int *l_957 = &g_7[1];
                    int l_965 = 0xA2DADCDEL;
                    int l_966 = (-1L);
                    int l_967 = 0x38168171L;
                    int l_968[8] = {0x62C6D593L, 0x56D2F867L, 0x62C6D593L, 0x56D2F867L, 0x62C6D593L, 0x56D2F867L, 0x62C6D593L, 0x56D2F867L};
                    int i;
                    for (g_777 = 0; (g_777 > 30); g_777 = safe_add_func_int16_t_s_s(g_777, 7))
                    {
                        p_47.f8 = (-3L);
                        (*l_857) = (l_944 = p_47.f2);
                    }
                    if ((*l_884))
                    {
                        int l_951 = 0x326C5A26L;
                        short *l_956[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_956[i] = &g_899;
                        l_951 = (safe_mod_func_int16_t_s_s((p_47.f7 ^ p_47.f2), ((*l_870) = ((***l_906)++))));
                        (*l_857) = p_46;
                        (*l_857) ^= (((*l_873) = (p_47.f4 < (l_891 == (void*)0))) <= (safe_add_func_uint16_t_u_u(p_47.f2, (g_731[2][0][5] < (((safe_rshift_func_uint16_t_u_u(((*g_643) = (&g_542 == &g_542)), 11)) ^ (l_910 = l_944)) && (-4L))))));
                        return l_957;



                    }
                    else
                    {
                        int *l_958[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_958[i] = &l_763;
                        l_979--;
                        (*l_957) = 0L;
                    }
                    l_982[1] = &l_910;


                    for (l_966 = 0; (l_966 <= 0); l_966 += 1)
                    {
                        char l_983 = (-8L);
                        int l_984[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_984[i] = (-1L);
                        l_985--;
                        (*l_857) &= p_47.f5;
                    }
                }

                ;

                (*l_884) |= p_47.f3;
            }
            else
            {
                unsigned l_994 = 4294967295UL;
                p_47.f8 |= (safe_rshift_func_uint16_t_u_s(((p_47.f7 != ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((((*g_643) | (*l_884)) == (((((0x7EL | 7L) > ((((((!l_994) == l_994) <= (*l_857)) & (*l_857)) ^ 3UL) < l_994)) <= 0x23D3522CL) & (*g_643)) >= 0x58F2L)) != l_995[1][1][6]), 0xD5EA8F62L)), p_47.f6)) != p_47.f2)) || l_994), 14));
            }

            ;

        }
        else
        {
            unsigned l_1005 = 4294967291UL;
            int *l_1007[5];
            int i;
            for (i = 0; i < 5; i++)
                l_1007[i] = &l_919;
            (*l_857) = (((0x9392L >= ((*g_643) = (((((safe_mod_func_int32_t_s_s((~(&g_541 != (void*)0)), (safe_lshift_func_int8_t_s_s((**g_541), 5)))) >= (p_47.f1 & l_970)) < (*g_643)) || (****g_619)) && (**g_546)))) & p_47.f8) >= 0xC0E501CFL);
            return l_1008;



        }

        ;
    }


    (*l_1009) = (void*)0;

    ;
    return g_1010;



}







static unsigned func_50(char * p_51, int p_52, unsigned char p_53, int p_54)
{
    int *l_60[1][9] = {{&g_7[3], &g_7[3], (void*)0, &g_7[3], &g_7[3], (void*)0, &g_7[3], &g_7[3], (void*)0}};
    int l_61 = 9L;
    int l_62 = (-1L);
    unsigned l_63 = 0UL;
    unsigned short *l_71 = &g_72;
    unsigned char *l_192[8][10] = {{(void*)0, (void*)0, (void*)0, &g_4, (void*)0, &g_4, &g_166.f6, &g_4, &g_4, &g_166.f6}, {(void*)0, (void*)0, (void*)0, &g_4, (void*)0, &g_4, &g_166.f6, &g_4, &g_4, &g_166.f6}, {(void*)0, (void*)0, (void*)0, &g_4, (void*)0, &g_4, &g_166.f6, &g_4, &g_4, &g_166.f6}, {(void*)0, (void*)0, (void*)0, &g_4, (void*)0, &g_4, &g_166.f6, &g_4, &g_4, &g_166.f6}, {(void*)0, (void*)0, (void*)0, &g_4, (void*)0, &g_4, &g_166.f6, &g_4, &g_4, &g_166.f6}, {(void*)0, (void*)0, (void*)0, &g_4, (void*)0, &g_4, &g_166.f6, &g_4, &g_4, &g_166.f6}, {(void*)0, (void*)0, (void*)0, &g_4, (void*)0, &g_4, &g_166.f6, &g_4, &g_4, &g_166.f6}, {(void*)0, (void*)0, (void*)0, &g_4, (void*)0, &g_4, &g_166.f6, &g_4, &g_4, &g_166.f6}};
    int *l_476 = &l_61;
    char l_680[6] = {0x0DL, 0x1EL, 0x0DL, 0x1EL, 0x0DL, 0x1EL};
    int l_681[6][6] = {{0x2A373D94L, 0xAE2EEFEFL, 0x2A373D94L, 0xAE2EEFEFL, 0x2A373D94L, 0xAE2EEFEFL}, {0x2A373D94L, 0xAE2EEFEFL, 0x2A373D94L, 0xAE2EEFEFL, 0x2A373D94L, 0xAE2EEFEFL}, {0x2A373D94L, 0xAE2EEFEFL, 0x2A373D94L, 0xAE2EEFEFL, 0x2A373D94L, 0xAE2EEFEFL}, {0x2A373D94L, 0xAE2EEFEFL, 0x2A373D94L, 0xAE2EEFEFL, 0x2A373D94L, 0xAE2EEFEFL}, {0x2A373D94L, 0xAE2EEFEFL, 0x2A373D94L, 0xAE2EEFEFL, 0x2A373D94L, 0xAE2EEFEFL}, {0x2A373D94L, 0xAE2EEFEFL, 0x2A373D94L, 0xAE2EEFEFL, 0x2A373D94L, 0xAE2EEFEFL}};
    unsigned l_682 = 6UL;
    int i, j;
    ++l_63;
    (*g_205) = func_66(p_53, ((*l_476) ^= (((safe_sub_func_uint8_t_u_u(((**g_159) = (~((((((*l_71) = g_4) | func_73(func_78((safe_sub_func_uint8_t_u_u((6UL ^ p_54), g_7[1])), g_4, g_56, g_56), p_53, l_71, l_192[1][2])) >= p_52) != p_52) != 0UL))), g_141)) != g_56) == 0x55FC9690L)));



    --l_682;
    return g_607;
}







static struct S0 func_66(unsigned char p_67, int p_68)
{
    int *l_480 = &g_7[1];
    int l_485 = 0xB325BE22L;
    int l_486 = 0xE0C85428L;
    int l_489 = (-7L);
    int l_490 = 0xD4881F49L;
    char l_525 = (-1L);
    int l_581[1][1];
    unsigned char **l_617 = &g_160[5];
    char l_653 = 0x16L;
    int *l_675 = &g_96;
    struct S0 l_679 = {4294967293UL,5UL,1L,0x6B2A3B61L,0xD935L,1UL,255UL,0x69FFA41DL,-2L};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_581[i][j] = 0xA95F48C9L;
    }
    for (g_166.f7 = 18; (g_166.f7 < (-15)); g_166.f7 = safe_sub_func_uint16_t_u_u(g_166.f7, 5))
    {
        unsigned l_492 = 4294967290UL;
        int *l_513 = &l_485;
        struct S0 l_519 = {0x503782DFL,2UL,-5L,0x6324FDEAL,0xE507L,0x01E8E8C4L,0x2DL,0xEE061139L,0x7CA54654L};
        char **l_545[10] = {&g_542, &g_542, &g_542, &g_542, &g_542, &g_542, &g_542, &g_542, &g_542, &g_542};
        unsigned char l_558 = 255UL;
        int l_583 = 0x0AE8AEBEL;
        int l_584 = 0x8B63968EL;
        int l_588[10] = {0xF2F39B9EL, 0xC22362B7L, 0xF2F39B9EL, 0xC22362B7L, 0xF2F39B9EL, 0xC22362B7L, 0xF2F39B9EL, 0xC22362B7L, 0xF2F39B9EL, 0xC22362B7L};
        unsigned short *l_623 = (void*)0;
        int *l_634 = &l_519.f3;
        int **l_633 = &l_634;
        int i;
        if (p_67)
        {
            int *l_479[7] = {&g_166.f8, &g_166.f8, &g_166.f8, &g_166.f8, &g_166.f8, &g_166.f8, &g_166.f8};
            int i;
            l_480 = l_479[1];

            ;
            (*l_480) |= p_68;
            (*l_480) = (*l_480);
            if ((*l_480))
            {
                int l_502 = (-1L);
                for (g_141 = 0; (g_141 > 10); g_141 = safe_add_func_uint8_t_u_u(g_141, 6))
                {
                    (*l_480) &= p_68;
                    for (g_109 = 0; (g_109 != 54); g_109 = safe_add_func_uint16_t_u_u(g_109, 8))
                    {
                        int l_487 = 0x83395F49L;
                        int l_488 = 0x70EC9E57L;
                        int l_491 = 0L;
                        l_492--;
                    }
                }
                for (g_179 = (-4); (g_179 <= 17); g_179 = safe_add_func_int32_t_s_s(g_179, 3))
                {
                    unsigned char l_499 = 0xBBL;
                    for (g_166.f4 = 0; (g_166.f4 < (-6)); g_166.f4 = safe_sub_func_int32_t_s_s(g_166.f4, 2))
                    {
                        l_499--;
                    }
                    for (g_166.f2 = 0; g_166.f2 < 1; g_166.f2 += 1)
                    {
                        for (l_499 = 0; l_499 < 2; l_499 += 1)
                        {
                            for (g_109 = 0; g_109 < 10; g_109 += 1)
                            {
                                g_204[g_166.f2][l_499][g_109] = &g_166;
                            }
                        }
                    }
                    l_502 = l_492;
                }
            }
            else
            {
                struct S0 l_505 = {0xAD962EC0L,0xDC69EC82L,0xFCL,0xDE6B4891L,0L,0x7B5445B7L,0x27L,0xE21A8494L,0x0C7F05EAL};
                for (g_166.f0 = 0; (g_166.f0 >= 31); g_166.f0 = safe_add_func_int16_t_s_s(g_166.f0, 1))
                {
                    return l_505;
                }
            }
        }
        else
        {
            int l_517 = 0x4EBCCC98L;
            int l_518 = 0x71CC9824L;
            unsigned l_531 = 0UL;
            struct S0 l_534 = {0x55EE3CB8L,4294967293UL,-5L,0xD00766CDL,0xAE85L,0xCB81E62FL,6UL,-1L,-3L};
            int l_580 = (-8L);
            int l_582 = 1L;
            int l_585 = 0xD86BFB1CL;
            int l_586 = 1L;
            int l_587 = 0xB947E7B6L;
            int l_589 = (-7L);
            int l_590 = 0x8CE00054L;
            int l_591 = (-5L);
            int l_592 = (-1L);
            int l_593 = 0xF7B0BD65L;
            int l_594 = 0L;
            int l_595[2][8][9] = {{{(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}}, {{(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}, {(-1L), (-1L), 1L, 0x0A662243L, (-7L), 0x84458C2AL, (-6L), (-3L), 0xC0D5DDDFL}}};
            unsigned l_597 = 7UL;
            int *l_600 = &l_490;
            int *l_601 = &l_589;
            int *l_602 = (void*)0;
            int *l_603 = (void*)0;
            int *l_604 = &l_595[1][7][2];
            int *l_605 = &g_96;
            int *l_606[5][3][6] = {{{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}};
            int i, j, k;
            for (g_166.f1 = 0; (g_166.f1 >= 12); g_166.f1 = safe_add_func_uint16_t_u_u(g_166.f1, 6))
            {
                int l_524 = 0xE6545F7CL;
                char **l_544 = &g_542;
                int l_563[7] = {0xF022B91FL, 0x77CC1C54L, 0xF022B91FL, 0x77CC1C54L, 0xF022B91FL, 0x77CC1C54L, 0xF022B91FL};
                int *l_568 = (void*)0;
                int *l_569 = &l_563[3];
                int *l_570 = &l_489;
                int *l_571 = &l_518;
                int *l_572 = &l_486;
                int *l_573 = &l_534.f8;
                int *l_575 = &g_96;
                int *l_576 = &l_489;
                int *l_577 = &l_524;
                int *l_578 = &g_96;
                int *l_579[7][10][1] = {{{&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}}, {{&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}}, {{&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}}, {{&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}}, {{&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}}, {{&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}}, {{&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}, {&l_563[3]}}};
                int l_596 = 0xC719B9A9L;
                int i, j, k;
                for (g_4 = 12; (g_4 > 42); ++g_4)
                {
                    int **l_514 = &l_513;
                    for (g_97 = 0; (g_97 < 29); g_97 = safe_add_func_int32_t_s_s(g_97, 4))
                    {
                        int **l_512[4][7] = {{&g_206, &l_480, &g_206, &l_480, &g_206, &l_480, &g_206}, {&g_206, &l_480, &g_206, &l_480, &g_206, &l_480, &g_206}, {&g_206, &l_480, &g_206, &l_480, &g_206, &l_480, &g_206}, {&g_206, &l_480, &g_206, &l_480, &g_206, &l_480, &g_206}};
                        int i, j;
                        l_480 = &l_486;

                        ;
                    }
                    (*l_514) = l_513;
                    for (g_166.f3 = 0; (g_166.f3 == 2); g_166.f3++)
                    {
                        (*l_513) |= (l_517 > (0x7C80L < l_518));
                        (*l_514) = (*l_514);
                        return l_519;
                    }
                }
                if (p_68)
                {
                    short *l_530 = &g_166.f4;
                    (*l_513) = (safe_add_func_uint16_t_u_u(p_68, ((safe_rshift_func_uint16_t_u_u((l_524 <= (0x49L && (l_525 & (*l_513)))), 4)) == (safe_add_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s(((*l_530) &= (p_67 ^ l_524)), ((1L & l_531) <= (*l_513)))) <= p_67) && 0L), l_524)))));
                    for (l_490 = 0; (l_490 > (-25)); l_490 = safe_sub_func_uint16_t_u_u(l_490, 4))
                    {
                        if ((*l_480))
                            break;
                        if (p_67)
                            continue;
                        return l_534;
                    }
                    if ((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((p_67 > g_166.f3), 13)), (*l_513))))
                    {
                        unsigned short l_540[5] = {0xE7F7L, 0x81BBL, 0xE7F7L, 0x81BBL, 0xE7F7L};
                        char ***l_543[9][8][3] = {{{&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}}, {{&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}}, {{&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}}, {{&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}}, {{&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}}, {{&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}}, {{&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}}, {{&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}}, {{&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}, {&g_541, (void*)0, &g_541}}};
                        int l_547[5];
                        unsigned short *l_548 = &g_179;
                        struct S0 **l_552 = &g_205;
                        struct S0 ***l_551 = &l_552;
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_547[i] = 0x9C68149FL;
                        if (g_539)
                            break;
                        if (l_540[1])
                            break;
                        (*l_513) &= (((l_544 = g_541) != (g_546 = l_545[3])) != ((--(*l_548)) <= g_141));
                        (*l_513) = (g_539 != ((((*l_551) = &g_204[0][0][6]) != &g_204[0][0][6]) | l_534.f0));

                        ;
                    }
                    else
                    {
                        int *l_553 = &g_96;
                        int *l_554 = &l_518;
                        int *l_555 = &l_489;
                        int *l_556 = (void*)0;
                        int *l_557[6][4][10] = {{{&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}}, {{&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}}, {{&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}}, {{&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}}, {{&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}}, {{&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}, {&l_519.f8, &l_519.f8, &g_7[3], &g_166.f8, &l_518, &l_519.f8, &l_534.f8, &g_7[3], &l_524, &l_524}}};
                        int i, j, k;
                        ++l_558;
                        if (p_68)
                            continue;
                        if (p_68)
                            continue;
                    }
                }
                else
                {
                    int *l_562 = &g_166.f8;
                    int l_564 = 0x1F33043CL;
                    for (g_166.f4 = 1; (g_166.f4 <= 6); g_166.f4 += 1)
                    {
                        int **l_561[10] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                        int i;
                        l_562 = l_513;

                        ;
                        l_562 = &l_524;

                        ;
                        ++g_565[0];
                        if (p_68)
                            break;
                    }

                    ;
                }
                if (l_563[1])
                    break;
                --l_597;
            }
            g_607++;
            for (g_166.f0 = 1; (g_166.f0 <= 8); g_166.f0 += 1)
            {
                int l_614 = (-3L);
                int **l_615 = &g_206;
                unsigned char **l_618[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_618[i] = &g_160[5];
                (*l_605) = (((*l_513) ^ (safe_sub_func_uint8_t_u_u((*l_513), ((*g_542) = p_68)))) || (safe_lshift_func_uint16_t_u_u((!65528UL), p_68)));
                (*l_600) ^= l_614;
                (*l_615) = &l_587;

                ;
                for (l_492 = 2; (l_492 <= 8); l_492 += 1)
                {
                    int l_616[7][5][7] = {{{(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}}, {{(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}}, {{(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}}, {{(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}}, {{(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}}, {{(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}}, {{(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}, {(-1L), 0L, (-1L), 2L, (-8L), (-8L), (-1L)}}};
                    unsigned short *l_621 = &g_109;
                    int i, j, k;
                    if ((l_616[5][3][4] < (+(~((l_617 != l_618[1]) == ((((void*)0 != g_619) || p_68) != ((*l_621) ^= (**l_615))))))))
                    {
                        int *l_622 = &l_534.f8;
                        unsigned short **l_624 = &l_623;
                        if ((*l_480))
                            break;
                        (*l_615) = l_622;

                        ;
                        (*l_480) = (((((((*l_624) = l_623) == &g_179) == ((p_68 < p_68) != (*l_513))) > p_67) <= (*g_206)) & ((~(((*l_480) < p_68) >= 255UL)) && p_68));
                    }
                    else
                    {
                        (*l_605) = p_67;
                    }
                }

                ;
            }


        }
        if ((0x4ED9L != ((*l_480) = p_67)))
        {
            (*l_480) = (&g_141 == l_513);
        }
        else
        {
            int *l_626 = &l_584;
            char l_648 = 0xC4L;
            unsigned l_661[8][7][4] = {{{0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}}, {{0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}}, {{0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}}, {{0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}}, {{0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}}, {{0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}}, {{0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}}, {{0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}, {0x7F5D379EL, 0UL, 0x8C50927DL, 1UL}}};
            short l_665 = 0xBC3EL;
            int i, j, k;
            if ((*l_513))
            {
                int **l_625 = (void*)0;
                l_626 = (void*)0;

                ;
            }
            else
            {
                short *l_646 = &l_519.f4;
                int l_649 = 0xED546A1BL;
                struct S0 l_654 = {0xDB30CDD9L,4294967295UL,0xB7L,-1L,-2L,0xC195E85FL,0UL,-1L,-7L};
                for (g_72 = 0; (g_72 > 25); ++g_72)
                {
                    int *l_637 = (void*)0;
                    int **l_645 = &l_513;
                    if (p_67)
                    {
                        int ***l_629 = (void*)0;
                        int *l_632 = &g_141;
                        int **l_631 = &l_632;
                        int ***l_630[8][3][6] = {{{&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}}, {{&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}}, {{&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}}, {{&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}}, {{&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}}, {{&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}}, {{&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}}, {{&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}, {&l_631, (void*)0, (void*)0, &l_631, &l_631, &l_631}}};
                        int **l_638 = &l_626;
                        int l_639 = 0x4EF41C2FL;
                        int i, j, k;
                        g_635[2][4] = (l_633 = (void*)0);

                        ;
                        l_513 = l_637;

                        ;
                        (*l_638) = l_626;
                        l_639 = 0x75F53177L;
                    }
                    else
                    {
                        int **l_640 = (void*)0;
                        int *l_641 = (void*)0;
                        unsigned short ***l_644 = &g_642;
                        l_641 = (void*)0;
                        (*l_644) = g_642;
                    }
                    (*l_480) |= p_68;
                    (*l_645) = l_637;

                    ;
                }

                ;
                ;
                if (((*l_626) = ((*l_480) = (l_646 == g_279[0][7]))))
                {
                    struct S0 *l_647 = (void*)0;
                    int l_652 = 0xFBF9759DL;
                    l_654 = func_78(((void*)0 != l_647), (l_648 ^ l_649), ((((safe_unary_minus_func_uint8_t_u(p_68)) && 65531UL) && (0xC1F2C004L && (~((*l_480) = (safe_unary_minus_func_int8_t_s((-1L))))))) | l_652), l_653);
                    return l_519;
                }
                else
                {
                    char l_657 = 0x93L;
                    for (l_486 = 0; (l_486 < 3); l_486 = safe_add_func_uint16_t_u_u(l_486, 3))
                    {
                        if (p_67)
                            break;
                    }
                    if (l_657)
                        continue;
                }
                for (l_485 = 9; (l_485 >= 0); l_485 -= 1)
                {
                    int *l_658 = &g_96;
                    int *l_659 = &g_7[5];
                    int *l_660[7] = {&l_581[0][0], &l_581[0][0], &g_7[3], &l_581[0][0], &l_581[0][0], &g_7[3], &l_581[0][0]};
                    int i;
                    --l_661[4][5][0];
                    if (l_588[l_485])
                        break;
                    for (l_519.f1 = 0; (l_519.f1 <= 0); l_519.f1 += 1)
                    {
                        unsigned l_664 = 0x49970FFDL;
                        (*l_626) = l_664;
                    }
                }
            }

            ;
            ;
            ;
            if (p_67)
                break;
            if (l_665)
                continue;
        }

        ;
        ;
        (*l_480) |= l_588[4];
        for (l_584 = 0; (l_584 == 1); l_584++)
        {
            unsigned char l_672 = 0UL;
            if ((*l_480))
                break;
            for (l_519.f8 = (-22); (l_519.f8 <= 22); ++l_519.f8)
            {
                int *l_670 = &g_7[2];
                int *l_671[4] = {&g_7[4], &l_583, &g_7[4], &l_583};
                int i;
                ++l_672;
            }
        }
    }

    ;
    (*l_675) ^= ((*l_480) = (*l_480));
    for (g_166.f8 = 0; (g_166.f8 < 23); g_166.f8 = safe_add_func_int32_t_s_s(g_166.f8, 1))
    {
        unsigned char l_678 = 0x41L;
        if (l_678)
            break;
        return l_679;
    }
    return (*g_205);
}







static short func_73(struct S0 p_74, short p_75, unsigned short * p_76, unsigned char * p_77)
{
    int l_193[8][8][4] = {{{0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}}, {{0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}}, {{0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}}, {{0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}}, {{0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}}, {{0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}}, {{0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}}, {{0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}, {0L, 0x219A26B1L, 0x8B1DD971L, 1L}}};
    int *l_199 = (void*)0;
    int l_217 = 4L;
    unsigned char ***l_228[4][3][2];
    int l_265 = 7L;
    int l_266 = 5L;
    unsigned short l_267 = 0UL;
    int l_294 = 0xCF06F11AL;
    int l_296 = 0x70582BCDL;
    int l_297 = 3L;
    int l_299 = 0xC50F0944L;
    short l_356 = 1L;
    unsigned l_359[10] = {9UL, 1UL, 9UL, 1UL, 9UL, 1UL, 9UL, 1UL, 9UL, 1UL};
    int *l_409 = &l_265;
    int l_438 = 0xCA3BC5CFL;
    int l_440 = (-1L);
    int l_441[5][1];
    unsigned char l_473 = 0xF3L;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
                l_228[i][j][k] = &g_159;
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_441[i][j] = 0x461FC064L;
    }
    if (((l_193[2][7][0] && (p_74.f6 = (**g_159))) < 0UL))
    {
        int *l_196 = &g_166.f8;
        unsigned char ****l_248 = (void*)0;
        int *l_262 = (void*)0;
        int *l_263 = (void*)0;
        int *l_264[3][3] = {{&g_166.f8, &g_7[3], &g_166.f8}, {&g_166.f8, &g_7[3], &g_166.f8}, {&g_166.f8, &g_7[3], &g_166.f8}};
        int i, j;
        for (p_75 = (-2); (p_75 > 4); p_75 = safe_add_func_uint16_t_u_u(p_75, 2))
        {
            int *l_197 = (void*)0;
            int **l_198[6][2] = {{&l_196, &l_196}, {&l_196, &l_196}, {&l_196, &l_196}, {&l_196, &l_196}, {&l_196, &l_196}, {&l_196, &l_196}};
            int *l_216 = &g_166.f8;
            unsigned l_218[6] = {0UL, 0x0D455061L, 0UL, 0x0D455061L, 0UL, 0x0D455061L};
            int i, j;
            l_199 = (l_197 = l_196);

            ;
            ;
        }

        ;
        if (((*g_206) ^= ((safe_rshift_func_int8_t_s_u(((*l_196) >= 0x61L), 3)) ^ p_74.f7)))
        {
            l_199 = &l_217;

            ;
        }
        else
        {
            int *l_225 = &g_7[3];
            char *l_227 = (void*)0;
            unsigned char ****l_247[7][3] = {{&l_228[0][1][1], &l_228[0][1][1], &l_228[0][0][1]}, {&l_228[0][1][1], &l_228[0][1][1], &l_228[0][0][1]}, {&l_228[0][1][1], &l_228[0][1][1], &l_228[0][0][1]}, {&l_228[0][1][1], &l_228[0][1][1], &l_228[0][0][1]}, {&l_228[0][1][1], &l_228[0][1][1], &l_228[0][0][1]}, {&l_228[0][1][1], &l_228[0][1][1], &l_228[0][0][1]}, {&l_228[0][1][1], &l_228[0][1][1], &l_228[0][0][1]}};
            unsigned short l_261 = 0x22A1L;
            int i, j;
            for (p_74.f6 = 16; (p_74.f6 <= 58); p_74.f6 = safe_add_func_uint16_t_u_u(p_74.f6, 9))
            {
                int **l_226 = &l_196;
                unsigned l_233[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_233[i] = 0x9029FDCDL;
                (*l_226) = l_225;

                ;
                if ((*g_206))
                {
                    int *l_231 = &g_166.f8;
                    if (((*l_225) = (p_77 == (l_227 = &g_56))))
                    {
                        unsigned char ****l_229 = &l_228[3][1][0];
                        int *l_230 = &g_96;
                        (**l_226) |= (&g_159 == ((*l_229) = l_228[3][1][0]));
                        l_230 = &g_7[5];

                        ;
                    }
                    else
                    {
                        return p_74.f0;
                    }

                    ;
                    (*l_231) = ((p_74.f6 | ((*g_206) = p_74.f6)) > g_166.f6);
                }
                else
                {
                    int *l_232[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_232[i] = &g_7[3];
                    if (p_74.f7)
                        break;
                    (*l_226) = l_232[0];
                    if ((((p_74.f8 != (g_166.f4 = ((l_233[2] ^ g_166.f6) > 0x2056L))) >= g_56) == ((**g_159) != (**l_226))))
                    {
                        int **l_234 = &l_232[0];
                        (*l_234) = ((*l_226) = l_232[0]);
                        (*l_234) = &l_217;


                    }
                    else
                    {
                        if (p_74.f3)
                            break;
                        (*l_226) = (l_199 = l_196);

                        ;
                    }


                }
                for (g_166.f6 = (-5); (g_166.f6 == 14); ++g_166.f6)
                {
                    (*l_225) = (p_74.f2 > 0L);
                    for (p_74.f3 = 2; (p_74.f3 >= 0); p_74.f3 -= 1)
                    {
                        int i;
                        return l_233[p_74.f3];
                    }
                }
            }

            ;
            ;
            ;
            for (p_74.f4 = (-21); (p_74.f4 < 25); p_74.f4++)
            {
                char l_239 = 1L;
                unsigned *l_240[10][3] = {{&g_166.f5, &g_166.f5, &g_166.f0}, {&g_166.f5, &g_166.f5, &g_166.f0}, {&g_166.f5, &g_166.f5, &g_166.f0}, {&g_166.f5, &g_166.f5, &g_166.f0}, {&g_166.f5, &g_166.f5, &g_166.f0}, {&g_166.f5, &g_166.f5, &g_166.f0}, {&g_166.f5, &g_166.f5, &g_166.f0}, {&g_166.f5, &g_166.f5, &g_166.f0}, {&g_166.f5, &g_166.f5, &g_166.f0}, {&g_166.f5, &g_166.f5, &g_166.f0}};
                int l_241 = 0x0CF76250L;
                unsigned short *l_246[2];
                short *l_249 = &g_166.f4;
                int *l_254 = &g_166.f8;
                int *l_255 = &g_7[5];
                int *l_256 = &l_217;
                int *l_257 = &g_166.f8;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_246[i] = &g_109;
                (*g_206) &= ((g_166.f3 < ((l_239 ^ 1UL) < (g_166.f0 = (l_241 |= l_239)))) <= (safe_rshift_func_int8_t_s_s((0x66L & (safe_sub_func_uint16_t_u_u((g_179 && p_74.f7), ((((g_109 = ((void*)0 != &l_228[3][1][0])) == p_74.f5) || l_217) > g_166.f6)))), 0)));
                (*g_205) = func_78((*g_206), (p_74.f2 ^= ((((*l_249) |= ((l_247[4][2] = l_247[6][1]) != l_248)) ^ g_96) <= ((safe_add_func_uint32_t_u_u((p_74.f4 | (0x35C911F6L <= ((*l_196) == ((*l_196) || g_97)))), l_239)) < g_97))), p_74.f5, g_166.f8);
                --g_258;
                (*l_254) &= (g_166.f1 & (g_258 &= l_261));
            }
            return g_96;
        }

        ;
        (*l_196) &= (*g_206);
        l_267--;
    }
    else
    {
        int *l_270 = &l_266;
        int l_289 = 1L;
        int l_292 = 1L;
        int l_293 = 0L;
        int l_295 = 0x3D730E39L;
        unsigned l_301 = 0x5368788BL;
        unsigned char l_314[1][3][7] = {{{0xFEL, 0xFEL, 255UL, 0xCCL, 0x7BL, 0xCCL, 255UL}, {0xFEL, 0xFEL, 255UL, 0xCCL, 0x7BL, 0xCCL, 255UL}, {0xFEL, 0xFEL, 255UL, 0xCCL, 0x7BL, 0xCCL, 255UL}}};
        char l_324 = 0L;
        int i, j, k;
        (*l_270) |= (g_166.f4 || ((~(*g_206)) || p_74.f1));
        for (l_217 = 6; (l_217 != (-1)); l_217 = safe_sub_func_uint16_t_u_u(l_217, 8))
        {
            int l_278[7][7][5] = {{{0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}}, {{0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}}, {{0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}}, {{0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}}, {{0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}}, {{0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}}, {{0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}, {0x1F87D238L, (-10L), 0x638051BDL, 0x87C2F7F7L, (-7L)}}};
            int l_298 = 1L;
            int l_300 = 0x50C885CEL;
            unsigned l_323[9] = {0x0E560B90L, 0xE46A7C77L, 0x0E560B90L, 0xE46A7C77L, 0x0E560B90L, 0xE46A7C77L, 0x0E560B90L, 0xE46A7C77L, 0x0E560B90L};
            int i, j, k;
            for (p_74.f6 = 0; (p_74.f6 <= 0); p_74.f6 += 1)
            {
                unsigned *l_273 = &g_166.f0;
                int l_288 = 0xA9EE565BL;
                int l_291[2];
                unsigned char l_304 = 0x77L;
                int i;
                for (i = 0; i < 2; i++)
                    l_291[i] = (-1L);
                l_289 ^= ((((*l_273)++) && (((((safe_rshift_func_uint16_t_u_u(0x5F55L, 15)) ^ (l_278[5][5][0] & ((void*)0 != g_279[0][7]))) || (safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((*l_270), (safe_sub_func_int16_t_s_s((-4L), ((l_288 < 0x24L) <= p_74.f4))))), p_74.f3)), p_74.f4))) && (*l_270)) == 0x50L)) <= 0L);
                for (g_166.f6 = 0; (g_166.f6 <= 0); g_166.f6 += 1)
                {
                    int *l_290[6][3] = {{&g_7[3], &l_289, (void*)0}, {&g_7[3], &l_289, (void*)0}, {&g_7[3], &l_289, (void*)0}, {&g_7[3], &l_289, (void*)0}, {&g_7[3], &l_289, (void*)0}, {&g_7[3], &l_289, (void*)0}};
                    int i, j;
                    ++l_301;
                    return l_304;
                }
                for (g_166.f1 = 0; (g_166.f1 <= 0); g_166.f1 += 1)
                {
                    (*g_206) |= p_74.f7;
                }
            }
            for (g_179 = 0; (g_179 > 1); g_179 = safe_add_func_uint16_t_u_u(g_179, 8))
            {
                for (l_267 = 22; (l_267 != 33); ++l_267)
                {
                    int *l_309 = &l_300;
                    int *l_310 = &l_293;
                    int *l_311 = &g_166.f8;
                    int *l_312 = &g_7[3];
                    int *l_313[10][10][2] = {{{&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}}, {{&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}}, {{&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}}, {{&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}}, {{&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}}, {{&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}}, {{&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}}, {{&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}}, {{&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}}, {{&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}, {&l_299, &g_7[2]}}};
                    int i, j, k;
                    l_314[0][2][2]++;
                    (*l_312) &= (p_74.f2 >= (safe_add_func_uint32_t_u_u(((p_74.f1 != p_74.f4) && ((0x7A69A349L | p_74.f6) | (safe_mod_func_uint32_t_u_u(0xA6EA5990L, ((safe_rshift_func_uint8_t_u_s((l_298 |= (*l_309)), 5)) || (p_75 ^ l_323[7])))))), 0x32D1D7DDL)));
                    for (p_74.f3 = 3; (p_74.f3 >= 0); p_74.f3 -= 1)
                    {
                        int i, j, k;
                        (*l_309) ^= ((((*l_311) ^= g_7[(p_74.f3 + 2)]) <= (0xCB5062E5L > l_278[p_74.f3][p_74.f3][(p_74.f3 + 1)])) <= p_74.f7);
                        if (p_74.f6)
                            continue;
                    }
                }
                return l_324;
            }
        }
        for (l_324 = 0; (l_324 >= 0); l_324 -= 1)
        {
            unsigned l_339 = 4294967289UL;
            struct S0 *l_348 = &g_166;
            int *l_350 = &l_295;
            int l_355 = 0x0A236A0EL;
            int l_357 = 0x728D30F4L;
            int l_358 = 0L;
            int **l_381 = &l_199;
            for (g_179 = 0; (g_179 <= 0); g_179 += 1)
            {
                unsigned l_327 = 4294967292UL;
                struct S0 **l_352 = (void*)0;
                struct S0 **l_353 = &g_204[0][0][6];
                int *l_354[1][2][10] = {{{(void*)0, &l_293, &g_166.f8, &g_166.f8, &l_293, (void*)0, &l_293, &g_166.f8, &g_166.f8, &l_293}, {(void*)0, &l_293, &g_166.f8, &g_166.f8, &l_293, (void*)0, &l_293, &g_166.f8, &g_166.f8, &l_293}}};
                int i, j, k;
                if ((safe_lshift_func_int16_t_s_u(l_327, (safe_lshift_func_int16_t_s_u(0x506CL, 5)))))
                {
                    unsigned l_335 = 0x7D1F946EL;
                    short *l_338[8];
                    int l_340[9][9] = {{(-3L), 0L, 0xC5ABDA87L, (-1L), (-3L), (-1L), 0xC5ABDA87L, 0L, (-3L)}, {(-3L), 0L, 0xC5ABDA87L, (-1L), (-3L), (-1L), 0xC5ABDA87L, 0L, (-3L)}, {(-3L), 0L, 0xC5ABDA87L, (-1L), (-3L), (-1L), 0xC5ABDA87L, 0L, (-3L)}, {(-3L), 0L, 0xC5ABDA87L, (-1L), (-3L), (-1L), 0xC5ABDA87L, 0L, (-3L)}, {(-3L), 0L, 0xC5ABDA87L, (-1L), (-3L), (-1L), 0xC5ABDA87L, 0L, (-3L)}, {(-3L), 0L, 0xC5ABDA87L, (-1L), (-3L), (-1L), 0xC5ABDA87L, 0L, (-3L)}, {(-3L), 0L, 0xC5ABDA87L, (-1L), (-3L), (-1L), 0xC5ABDA87L, 0L, (-3L)}, {(-3L), 0L, 0xC5ABDA87L, (-1L), (-3L), (-1L), 0xC5ABDA87L, 0L, (-3L)}, {(-3L), 0L, 0xC5ABDA87L, (-1L), (-3L), (-1L), 0xC5ABDA87L, 0L, (-3L)}};
                    unsigned short *l_341 = &g_109;
                    struct S0 *l_349 = &g_166;
                    int i, j;
                    for (i = 0; i < 8; i++)
                        l_338[i] = &g_166.f4;
                    for (p_74.f8 = 0; (p_74.f8 <= 0); p_74.f8 += 1)
                    {
                        (*l_270) |= (*g_206);
                        return p_74.f8;



                    }
                    (*g_206) |= (safe_unary_minus_func_int32_t_s(((((*l_341) = (l_340[2][4] = ((safe_mul_func_int32_t_s_s((~(0x15A5L || p_74.f4)), (((void*)0 == l_228[3][1][0]) == (l_339 |= (((safe_add_func_int32_t_s_s(((*l_270) >= l_335), (safe_add_func_uint16_t_u_u(1UL, (p_74.f0 < ((*l_270) != 0x88L)))))) >= 65530UL) == (*l_270)))))) == p_74.f1))) & (*l_270)) < l_327)));
                    for (l_267 = 0; (l_267 <= 0); l_267 += 1)
                    {
                        (*l_270) &= (safe_lshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(1UL, (safe_mod_func_int16_t_s_s((l_348 != l_349), l_327)))) > l_340[2][4]), p_74.f8));
                        (*l_270) = l_327;
                    }
                }
                else
                {
                    int **l_351 = &l_350;
                    (*l_351) = l_350;
                }
                (*l_353) = &p_74;
                l_359[7]--;
                for (p_74.f3 = 0; (p_74.f3 <= 0); p_74.f3 += 1)
                {
                    unsigned *l_362 = &l_359[6];
                    unsigned *l_365 = &g_166.f0;
                    int l_369 = 0x46107DB0L;
                    int l_376[5] = {0x6B0E1D86L, 2L, 0x6B0E1D86L, 2L, 0x6B0E1D86L};
                    int **l_380 = (void*)0;
                    int ***l_379 = &l_380;
                    unsigned l_382 = 4294967295UL;
                    int i;
                    p_74.f8 = (((*l_365) = (--(*l_362))) & ((safe_unary_minus_func_int16_t_s((p_76 != (void*)0))) <= ((*l_270) && (l_382 = ((safe_lshift_func_uint16_t_u_u((l_369 = (*l_270)), (((safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((!((safe_add_func_uint8_t_u_u((((*l_350) = l_376[3]) < (p_74.f2 == g_4)), (safe_add_func_int8_t_s_s((((*l_379) = &l_350) != (l_381 = &g_206)), 0xA9L)))) <= 3L)), g_7[3])) > p_74.f5), p_74.f4)) == p_74.f8) & 0x916562D0L))) || 1L)))));

                    ;
                }
            }

            ;
            for (l_293 = 0; (l_293 >= 0); l_293 -= 1)
            {
                struct S0 **l_383 = &l_348;
                int l_384 = 2L;
                (*l_381) = &g_7[5];
                (*l_383) = l_348;
                (*l_381) = &l_295;
                for (g_258 = 0; (g_258 <= 0); g_258 += 1)
                {
                    (*l_350) |= ((0x0DDCL | 0xA81BL) | (l_384 > (g_166.f2 = (safe_lshift_func_uint8_t_u_s(0x9EL, (65531UL == (safe_rshift_func_int16_t_s_u((g_7[3] || 0x39E58FB8L), 4))))))));
                }
            }
        }

        ;

        ;
    }




    for (g_258 = (-14); (g_258 == 50); g_258 = safe_add_func_int16_t_s_s(g_258, 6))
    {
        int *l_392 = &l_297;
        struct S0 **l_406 = &g_205;
        int l_427[2][6];
        int l_428[2];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_427[i][j] = 1L;
        }
        for (i = 0; i < 2; i++)
            l_428[i] = 1L;
        if ((0x8B0D4BBEL && p_74.f8))
        {
            int **l_391[2][4][9] = {{{(void*)0, &g_206, &l_199, (void*)0, &l_199, &g_206, &l_199, (void*)0, &l_199}, {(void*)0, &g_206, &l_199, (void*)0, &l_199, &g_206, &l_199, (void*)0, &l_199}, {(void*)0, &g_206, &l_199, (void*)0, &l_199, &g_206, &l_199, (void*)0, &l_199}, {(void*)0, &g_206, &l_199, (void*)0, &l_199, &g_206, &l_199, (void*)0, &l_199}}, {{(void*)0, &g_206, &l_199, (void*)0, &l_199, &g_206, &l_199, (void*)0, &l_199}, {(void*)0, &g_206, &l_199, (void*)0, &l_199, &g_206, &l_199, (void*)0, &l_199}, {(void*)0, &g_206, &l_199, (void*)0, &l_199, &g_206, &l_199, (void*)0, &l_199}, {(void*)0, &g_206, &l_199, (void*)0, &l_199, &g_206, &l_199, (void*)0, &l_199}}};
            char *l_396 = &g_56;
            char **l_395 = &l_396;
            unsigned l_397 = 0xF1E1F361L;
            int i, j, k;
            l_392 = (void*)0;

            ;
            for (g_97 = 0; (g_97 <= 1); g_97 += 1)
            {
                char **l_393 = (void*)0;
                char ***l_394[1][5][1];
                int l_402 = 0x9B815935L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_394[i][j][k] = &l_393;
                    }
                }
                l_395 = l_393;

                ;
                for (p_74.f6 = 0; (p_74.f6 <= 1); p_74.f6 += 1)
                {
                    struct S0 **l_403[5][8][2] = {{{&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}}, {{&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}}, {{&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}}, {{&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}}, {{&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}, {&g_205, (void*)0}}};
                    int l_407 = 0x1FF8510DL;
                    int i, j, k;
                    for (l_217 = 1; (l_217 >= 0); l_217 -= 1)
                    {
                        g_206 = &g_96;

                        ;
                    }
                    for (p_74.f8 = 1; (p_74.f8 >= 0); p_74.f8 -= 1)
                    {
                        g_206 = &g_7[3];

                        ;
                    }
                    if (l_397)
                        continue;
                    for (g_96 = 1; (g_96 >= 0); g_96 -= 1)
                    {
                        return p_74.f6;



                    }
                    for (g_96 = 1; (g_96 >= 0); g_96 -= 1)
                    {
                        unsigned short *l_399[3][1][10] = {{{(void*)0, &g_179, &l_267, &g_179, (void*)0, &g_258, (void*)0, &g_179, &l_267, &g_179}}, {{(void*)0, &g_179, &l_267, &g_179, (void*)0, &g_258, (void*)0, &g_179, &l_267, &g_179}}, {{(void*)0, &g_179, &l_267, &g_179, (void*)0, &g_258, (void*)0, &g_179, &l_267, &g_179}}};
                        unsigned short **l_398 = &l_399[1][0][2];
                        struct S0 ***l_404 = (void*)0;
                        struct S0 ***l_405 = &l_403[0][5][1];
                        int *l_408 = &l_402;
                        int i, j, k;
                        l_407 &= (((249UL > (((*l_398) = &l_267) != &g_109)) != ((safe_lshift_func_uint8_t_u_u((l_402 &= 0x73L), 7)) != p_74.f0)) <= (9L ^ ((((*l_405) = l_403[3][2][0]) == l_406) >= p_75)));
                        l_408 = l_392;

                        ;
                        l_409 = &g_7[5];

                        ;
                        (*l_409) ^= p_74.f1;
                    }
                }
            }

            ;
        }
        else
        {
            char l_426 = (-2L);
            int l_432 = 0x1E825A00L;
            int l_435 = 0L;
            int l_436 = 0x2F056A97L;
            int l_437 = 2L;
            int l_442[5][4][9] = {{{(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}}, {{(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}}, {{(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}}, {{(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}}, {{(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}, {(-1L), (-1L), 0xBDBBF313L, 0x945B6AD6L, (-1L), 0xBE02D0E5L, 0xF216ECE1L, (-1L), 0xF83B5D35L}}};
            unsigned l_446 = 0xB652133DL;
            short *l_464 = &g_166.f4;
            unsigned short *l_465 = &g_109;
            char *l_466 = (void*)0;
            char *l_467[4] = {&g_166.f2, &g_429, &g_166.f2, &g_429};
            short *l_468[5] = {&l_356, &l_356, &l_356, &l_356, &l_356};
            int i, j, k;
            l_299 &= ((*l_409) < (*l_392));
            if (((*l_392) || (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(p_74.f4, 3)), (*l_392)))))
            {
                int l_414 = 0x59A6D3F5L;
                int l_439[6] = {0x8BBE33EFL, 0x8BBE33EFL, 0x1CA8C208L, 0x8BBE33EFL, 0x8BBE33EFL, 0x1CA8C208L};
                int i;
                p_74.f8 = p_74.f8;
                if (l_414)
                {
                    unsigned *l_417 = &g_166.f5;
                    int l_422 = 0x3F35F3F7L;
                    l_422 ^= (((safe_rshift_func_uint16_t_u_s((((*l_417) = (p_74.f5 > (*l_392))) != (((*l_409) = p_74.f6) <= p_74.f3)), (safe_sub_func_uint32_t_u_u((0x0C9EE209L < 0x7777EC36L), (0L | (1UL <= (safe_add_func_int16_t_s_s((*l_392), 8L)))))))) >= p_74.f6) || 0x72L);
                    if (p_74.f7)
                        break;
                }
                else
                {
                    char l_430 = 1L;
                    int l_431 = 0x8D7DD029L;
                    int l_433 = 1L;
                    int l_434[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_434[i] = 0xCBC51CBFL;
                    for (l_299 = 12; (l_299 == (-4)); --l_299)
                    {
                        int *l_425[6][9] = {{&l_296, &l_217, &l_299, &l_299, &l_217, &l_296, &l_217, &l_299, &l_299}, {&l_296, &l_217, &l_299, &l_299, &l_217, &l_296, &l_217, &l_299, &l_299}, {&l_296, &l_217, &l_299, &l_299, &l_217, &l_296, &l_217, &l_299, &l_299}, {&l_296, &l_217, &l_299, &l_299, &l_217, &l_296, &l_217, &l_299, &l_299}, {&l_296, &l_217, &l_299, &l_299, &l_217, &l_296, &l_217, &l_299, &l_299}, {&l_296, &l_217, &l_299, &l_299, &l_217, &l_296, &l_217, &l_299, &l_299}};
                        unsigned char l_443[10] = {2UL, 0xDBL, 2UL, 0xDBL, 2UL, 0xDBL, 2UL, 0xDBL, 2UL, 0xDBL};
                        int i, j;
                        l_443[7]++;
                        l_446--;
                    }
                    for (l_430 = 4; (l_430 >= 0); l_430 -= 1)
                    {
                        (*l_392) = p_74.f0;
                    }
                }
            }
            else
            {
                char l_449 = 0x7AL;
                int **l_450 = (void*)0;
                int *l_454 = (void*)0;
                (*l_392) = ((l_449 = l_435) > 2L);
                g_451[3] = l_450;
                for (l_426 = 1; (l_426 > 28); l_426 = safe_add_func_uint16_t_u_u(l_426, 1))
                {
                    int **l_455[1][9][2] = {{{&g_206, (void*)0}, {&g_206, (void*)0}, {&g_206, (void*)0}, {&g_206, (void*)0}, {&g_206, (void*)0}, {&g_206, (void*)0}, {&g_206, (void*)0}, {&g_206, (void*)0}, {&g_206, (void*)0}}};
                    int i, j, k;
                    l_392 = l_454;

                    ;
                }

                ;
            }

            ;
            l_296 |= ((p_75 = (0xA870L && (safe_sub_func_int32_t_s_s(((&l_356 != g_279[0][7]) && (+(0x7A03L & g_7[3]))), ((((**g_159) > (g_429 = (p_74.f2 |= (safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((*l_465) = (safe_add_func_int32_t_s_s(((+((*l_464) = (l_435 || (*l_409)))) == ((void*)0 != &l_228[1][2][0])), 4294967295UL))), 65535UL)), 2))))) >= 1UL) != g_96))))) >= l_442[0][3][5]);
            (**l_406) = p_74;
        }

        ;
        for (g_166.f7 = 0; (g_166.f7 != (-2)); g_166.f7--)
        {
            int *l_471[5][7] = {{&l_266, &g_166.f8, &l_297, &l_428[1], &g_7[3], (void*)0, &l_265}, {&l_266, &g_166.f8, &l_297, &l_428[1], &g_7[3], (void*)0, &l_265}, {&l_266, &g_166.f8, &l_297, &l_428[1], &g_7[3], (void*)0, &l_265}, {&l_266, &g_166.f8, &l_297, &l_428[1], &g_7[3], (void*)0, &l_265}, {&l_266, &g_166.f8, &l_297, &l_428[1], &g_7[3], (void*)0, &l_265}};
            int i, j;
            for (l_297 = 5; (l_297 >= 0); l_297 -= 1)
            {
                int **l_472 = &g_206;
                (*l_472) = l_471[1][2];

                ;
            }
            --l_473;
            if (p_74.f8)
                break;
            for (l_440 = 0; l_440 < 1; l_440 += 1)
            {
                for (p_74.f0 = 0; p_74.f0 < 9; p_74.f0 += 1)
                {
                    g_279[l_440][p_74.f0] = &g_166.f4;
                }
            }
        }


    }


    ;
    return p_74.f7;



}







static struct S0 func_78(int p_79, char p_80, int p_81, unsigned p_82)
{
    int *l_85 = (void*)0;
    int *l_86 = &g_7[3];
    int *l_87 = (void*)0;
    int *l_88 = &g_7[4];
    int *l_89 = &g_7[3];
    int *l_90 = &g_7[4];
    int *l_91 = (void*)0;
    int *l_92 = &g_7[0];
    int *l_93 = (void*)0;
    int l_94 = 0x8A2DDD91L;
    int *l_95[3][5] = {{&g_7[3], &g_7[3], &g_7[3], &g_7[3], &g_7[3]}, {&g_7[3], &g_7[3], &g_7[3], &g_7[3], &g_7[3]}, {&g_7[3], &g_7[3], &g_7[3], &g_7[3], &g_7[3]}};
    char *l_107 = (void*)0;
    char l_171 = 0xC9L;
    int l_173 = 0x9F7C8D71L;
    unsigned short *l_190 = &g_179;
    struct S0 l_191 = {0xC4744A53L,0UL,0xCDL,0x28E5AF4EL,3L,0xF553ECEDL,0x2AL,0L,-1L};
    int i, j;
    g_97++;
    for (p_80 = (-12); (p_80 > (-25)); p_80 = safe_sub_func_uint16_t_u_u(p_80, 4))
    {
        char *l_106 = &g_56;
        unsigned char *l_116[8][5] = {{&g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4}};
        unsigned char **l_115 = &l_116[1][4];
        int l_119[10][7] = {{0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL}, {0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL}, {0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL}, {0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL}, {0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL}, {0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL}, {0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL}, {0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL}, {0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL}, {0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL, 0xB9B0FDDEL, 0x989E8BE2L, 0xB9B0FDDEL}};
        int l_158 = 1L;
        int i, j;
    }
    return l_191;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_166.f0, "g_166.f0", print_hash_value);
    transparent_crc(g_166.f1, "g_166.f1", print_hash_value);
    transparent_crc(g_166.f2, "g_166.f2", print_hash_value);
    transparent_crc(g_166.f3, "g_166.f3", print_hash_value);
    transparent_crc(g_166.f4, "g_166.f4", print_hash_value);
    transparent_crc(g_166.f5, "g_166.f5", print_hash_value);
    transparent_crc(g_166.f6, "g_166.f6", print_hash_value);
    transparent_crc(g_166.f7, "g_166.f7", print_hash_value);
    transparent_crc(g_166.f8, "g_166.f8", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_565[i], "g_565[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_688.f0, "g_688.f0", print_hash_value);
    transparent_crc(g_688.f1, "g_688.f1", print_hash_value);
    transparent_crc(g_688.f2, "g_688.f2", print_hash_value);
    transparent_crc(g_688.f3, "g_688.f3", print_hash_value);
    transparent_crc(g_688.f4, "g_688.f4", print_hash_value);
    transparent_crc(g_688.f5, "g_688.f5", print_hash_value);
    transparent_crc(g_688.f6, "g_688.f6", print_hash_value);
    transparent_crc(g_688.f7, "g_688.f7", print_hash_value);
    transparent_crc(g_688.f8, "g_688.f8", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_731[i][j][k], "g_731[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_899, "g_899", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_978[i], "g_978[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1027, "g_1027", print_hash_value);
    transparent_crc(g_1092, "g_1092", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1154[i].f0, "g_1154[i].f0", print_hash_value);
        transparent_crc(g_1154[i].f1, "g_1154[i].f1", print_hash_value);
        transparent_crc(g_1154[i].f2, "g_1154[i].f2", print_hash_value);
        transparent_crc(g_1154[i].f3, "g_1154[i].f3", print_hash_value);
        transparent_crc(g_1154[i].f4, "g_1154[i].f4", print_hash_value);
        transparent_crc(g_1154[i].f5, "g_1154[i].f5", print_hash_value);
        transparent_crc(g_1154[i].f6, "g_1154[i].f6", print_hash_value);
        transparent_crc(g_1154[i].f7, "g_1154[i].f7", print_hash_value);
        transparent_crc(g_1154[i].f8, "g_1154[i].f8", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1314, "g_1314", print_hash_value);
    transparent_crc(g_1345, "g_1345", print_hash_value);
    transparent_crc(g_1516, "g_1516", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1770[i], "g_1770[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
