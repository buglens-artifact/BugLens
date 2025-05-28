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
   short f1;
   int f2;
   unsigned char f3;
   unsigned char f4;
};


static short g_15 = (-1L);
static unsigned g_42 = 0x17C0EC0DL;
static short g_94 = 4L;
static struct S0 g_97 = {0x15CEL,0x7C6CL,1L,0x30L,0xFEL};
static unsigned char g_125 = 0xEFL;
static char g_164 = 1L;
static unsigned short g_165 = 0UL;
static unsigned short g_166 = 0x303AL;
static int g_236 = 0x418E7A13L;
static unsigned char g_280 = 0x22L;
static unsigned char g_281 = 0xF2L;
static struct S0 g_303[7] = {{-1L,-1L,-1L,252UL,0x47L},{-1L,-1L,-1L,252UL,0x47L},{-1L,-1L,-1L,252UL,0x47L},{-1L,-1L,-1L,252UL,0x47L},{-1L,-1L,-1L,252UL,0x47L},{-1L,-1L,-1L,252UL,0x47L},{-1L,-1L,-1L,252UL,0x47L}};
static unsigned g_356 = 0x7845E461L;
static int g_384 = 1L;
static unsigned char g_527 = 0x81L;
static char g_673 = 1L;
static unsigned g_825 = 4294967293UL;
static char g_917 = (-1L);
static unsigned char g_970 = 255UL;
static unsigned short g_1023 = 0x4ABDL;
static unsigned char g_1037 = 0x82L;
static unsigned char g_1060[8][3] = {{1UL,0UL,1UL},{7UL,7UL,0x33L},{0UL,0UL,0UL},{7UL,0x33L,0x33L},{1UL,0UL,1UL},{7UL,7UL,0x33L},{0UL,0UL,0UL},{7UL,0x33L,0x33L}};
static int g_1114 = (-9L);
static unsigned g_1187 = 2UL;
static char g_1216[5] = {0xCEL,0xCEL,0xCEL,0xCEL,0xCEL};
static unsigned char g_1361 = 0x31L;
static short g_1394 = 0L;
static int g_1395 = 0x9BBC788BL;
static unsigned g_1544 = 1UL;
static unsigned char g_1562[6] = {0x18L,0x18L,0x18L,0x18L,0x18L,0x18L};
static short g_1616[5][3][2] = {{{0xDD7AL,0xF590L},{0L,0L},{1L,0L}},{{0xF590L,1L},{0L,1L},{0xF590L,0L}},{{1L,1L},{1L,0L},{0xF590L,1L}},{{0L,1L},{0xF590L,0L},{1L,1L}},{{1L,0L},{0xF590L,1L},{0L,1L}}};
static unsigned char g_1652[10][5][5] = {{{255UL,0xF2L,249UL,0xFCL,0x18L},{255UL,255UL,9UL,2UL,252UL},{0xA2L,255UL,0x4EL,0x8CL,0x2FL},{0x00L,0x42L,255UL,0x4EL,0x30L},{255UL,255UL,0x42L,0x4EL,0x58L}},{{249UL,250UL,0xB0L,0xA2L,253UL},{253UL,250UL,0x25L,0UL,0x5AL},{0xDEL,255UL,0x58L,0UL,0xDBL},{0x5CL,0x42L,1UL,255UL,250UL},{0x03L,255UL,0UL,255UL,0x8FL}},{{0xEEL,255UL,3UL,0x3EL,249UL},{0x02L,0xF2L,255UL,0UL,0x58L},{0xFCL,0xF1L,8UL,0xF1L,0xFCL},{0xBDL,1UL,255UL,0xFCL,8UL},{0UL,8UL,1UL,6UL,0xF2L}},{{5UL,0xA2L,255UL,246UL,8UL},{0xA8L,6UL,0x8FL,249UL,0xBDL},{8UL,250UL,247UL,0x8CL,1UL},{250UL,0UL,0xD1L,246UL,255UL},{1UL,0x30L,3UL,251UL,255UL}},{{8UL,0x5EL,0x39L,1UL,0UL},{0x30L,0x4EL,255UL,0x42L,0x00L},{0x5EL,0xA2L,0xF1L,255UL,2UL},{255UL,250UL,0x7BL,248UL,255UL},{0x95L,0x03L,0x7BL,1UL,1UL}},{{255UL,0UL,0xF1L,0x7BL,3UL},{0x42L,246UL,255UL,5UL,250UL},{2UL,255UL,0x39L,6UL,0x4EL},{0x3EL,0x30L,3UL,9UL,0x5AL},{0xA8L,1UL,0xD1L,246UL,0x3EL}},{{255UL,0xFDL,247UL,247UL,0xFDL},{0x39L,248UL,0x8FL,3UL,255UL},{0xA2L,0UL,255UL,0x7BL,3UL},{255UL,0xC7L,0xDEL,255UL,0UL},{246UL,9UL,255UL,0x8CL,0xA8L}},{{0x30L,5UL,0x00L,3UL,0x61L},{255UL,0UL,255UL,6UL,255UL},{1UL,1UL,0x95L,0xB0L,0UL},{0x3FL,255UL,0UL,0x98L,252UL},{247UL,0x5EL,0x8FL,0UL,250UL}},{{0x8CL,255UL,0xDEL,9UL,0x5EL},{248UL,0xBDL,0x3FL,1UL,0xDBL},{0x6BL,246UL,250UL,1UL,2UL},{255UL,0UL,249UL,9UL,0x30L},{0xC7L,1UL,2UL,0UL,0UL}},{{5UL,253UL,0UL,0x98L,0x00L},{0x2FL,0x30L,0UL,0xB0L,0x98L},{3UL,9UL,0x5AL,6UL,0UL},{0UL,0xBDL,251UL,3UL,251UL},{0xDBL,0xDBL,0x98L,0x8CL,0xD1L}}};
static unsigned char g_1654[2][7] = {{8UL,8UL,8UL,8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL,8UL,8UL,8UL}};
static unsigned short g_1678 = 0x34ABL;
static int g_1737 = (-1L);
static short g_1789 = 8L;
static char g_1793 = 4L;
static int g_1804 = 0x17C1894FL;



static char func_1(void);
static unsigned func_10(unsigned p_11, unsigned char p_12, int p_13, short p_14);
static int func_19(unsigned p_20, unsigned short p_21, unsigned p_22, unsigned p_23);
static unsigned short func_27(int p_28);
static short func_40(unsigned p_41);
static unsigned char func_48(char p_49, int p_50, unsigned p_51, int p_52, unsigned short p_53);
static int func_55(unsigned char p_56, unsigned char p_57, unsigned p_58, unsigned p_59);
static unsigned func_60(short p_61, unsigned short p_62, unsigned char p_63, unsigned p_64, unsigned short p_65);
static int func_68(char p_69, short p_70, unsigned char p_71, int p_72, unsigned short p_73);
static char func_76(unsigned char p_77, char p_78, unsigned p_79, int p_80, unsigned p_81);
static char func_1(void)
{
    int l_18 = 1L;
    unsigned char l_1379 = 251UL;
    int l_1380 = 0L;
    int l_1382 = 0L;
    short l_1441 = 0xBAF3L;
    unsigned short l_1509 = 65533UL;
    unsigned l_1555[3];
    unsigned char l_1605 = 255UL;
    struct S0 l_1617 = {0x4714L,0xC4BBL,0x03665FECL,0x4EL,2UL};
    int l_1637 = 0xE83566C4L;
    unsigned l_1651[1];
    unsigned l_1725 = 1UL;
    unsigned short l_1726 = 0x516EL;
    unsigned char l_1767 = 0x5AL;
    int l_1794[1];
    unsigned l_1802 = 0x240288B3L;
    int l_1809[2][6][4];
    unsigned char l_1823 = 255UL;
    unsigned l_1838 = 0x15F4337AL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1555[i] = 0xA4C060E9L;
    for (i = 0; i < 1; i++)
        l_1651[i] = 4294967295UL;
    for (i = 0; i < 1; i++)
        l_1794[i] = 0xBDA5F333L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
                l_1809[i][j][k] = 0x705EC797L;
        }
    }
    if ((((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((g_1361 &= (safe_sub_func_uint32_t_u_u(func_10((g_15 < (-10L)), g_15, (safe_rshift_func_uint16_t_u_s((0xEF5DL > l_18), 1)), (!l_18)), g_1060[0][2]))), (g_1060[7][0] , g_1114))), g_1114)), g_1060[7][0])) < g_1060[7][0]) > l_18))
    {
        char l_1376 = 0L;
        char l_1381 = 0x51L;
        unsigned short l_1383 = 0x11AEL;
        int l_1384 = 1L;
        unsigned l_1389 = 0xEDD26E91L;
        unsigned char l_1418 = 0UL;
        int l_1420 = 0x4D02CFA8L;
        short l_1421[4][1] = {{0xAE27L},{(-9L)},{0xAE27L},{(-9L)}};
        int l_1442 = (-4L);
        short l_1443 = (-5L);
        int l_1446 = 0xFDF9D48DL;
        unsigned l_1463 = 0x35DD6D75L;
        int l_1464 = (-2L);
        struct S0 l_1556 = {0x298AL,0L,0L,0x5DL,0x1CL};
        unsigned l_1561 = 0UL;
        unsigned l_1653 = 4294967291UL;
        unsigned l_1729[3][8] = {{0xB17FA0C6L,0x9678FE69L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x9678FE69L,0xB17FA0C6L},{0x31EDDE6DL,0UL,4294967295UL,0x1C7FE8E8L,0xF9655CAEL,0x17DFD4FAL,0xF9655CAEL,0x1C7FE8E8L},{4294967295UL,0UL,4294967295UL,0x3A025EF0L,0x1C7FE8E8L,0x17DFD4FAL,4294967295UL,4294967295UL}};
        int i, j;
        l_1384 = (safe_sub_func_int16_t_s_s((l_1380 = ((safe_lshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s((g_303[0].f0 |= (safe_rshift_func_int16_t_s_s(func_55(((g_15 = (safe_sub_func_int8_t_s_s((g_1187 , 0x80L), (l_1382 &= (((g_303[0].f3 != (g_1037 |= (g_125 |= (((-6L) && ((safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(g_1060[7][0], l_18)) && (g_1216[1] = g_97.f4)), func_76(((+l_1376) > (((((safe_add_func_int32_t_s_s(l_1379, l_1380)) ^ 0UL) == g_97.f3) , 0L) | g_1060[7][0])), l_1376, l_1376, g_384, g_303[0].f3))) && g_384)) ^ g_280)))) ^ l_1381) != g_97.f2))))) < l_1383), g_97.f4, g_1060[7][0], g_165), 2))), 0x9DD9L)), g_1114)) , l_1376)), g_673));
        g_1395 = (safe_sub_func_int16_t_s_s(g_1060[7][0], (safe_sub_func_uint16_t_u_u((l_1384 ^= (func_10(l_1389, (safe_add_func_int8_t_s_s(((l_1380 = g_97.f1) , (-1L)), 0L)), l_1379, l_18) , (safe_div_func_int32_t_s_s(g_1394, g_97.f3)))), 2L))));
        for (g_280 = 4; (g_280 > 45); g_280 = safe_add_func_int32_t_s_s(g_280, 4))
        {
            unsigned char l_1412 = 0x10L;
            int l_1417 = 3L;
            unsigned char l_1419 = 251UL;
            unsigned l_1513 = 0x58B339D4L;
            struct S0 l_1519[8] = {{-1L,1L,-3L,0x07L,0x43L},{-1L,1L,-3L,0x07L,0x43L},{-1L,1L,-3L,0x07L,0x43L},{-1L,1L,-3L,0x07L,0x43L},{-1L,1L,-3L,0x07L,0x43L},{-1L,1L,-3L,0x07L,0x43L},{-1L,1L,-3L,0x07L,0x43L},{-1L,1L,-3L,0x07L,0x43L}};
            unsigned short l_1554 = 0xA27DL;
            unsigned l_1581[3];
            int l_1632 = 0xA51414DBL;
            int i;
            for (i = 0; i < 3; i++)
                l_1581[i] = 1UL;
            l_1421[0][0] |= (((safe_sub_func_int32_t_s_s(l_18, ((safe_rshift_func_int8_t_s_s((g_1394 & 0L), (g_1216[1] = func_60(((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((g_15 == (safe_mod_func_uint16_t_u_u(l_1389, l_1412))), 6)) | ((g_97.f0 , ((l_1417 = (safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((l_1380 , 0xE3896828L), g_1060[7][0])), g_673))) != l_1380)) == l_1376)), l_1383)), g_125)) ^ 0x310CL), g_303[0].f1, l_1379, l_1418, l_1419)))) || l_1420))) , g_356) != 0L);
            for (g_384 = 0; (g_384 == (-25)); g_384 = safe_sub_func_int8_t_s_s(g_384, 7))
            {
                unsigned l_1440[5][10][3] = {{{0x1BB6710FL,0x73941FF1L,2UL},{4UL,4294967288UL,1UL},{1UL,0xFE31AD54L,1UL},{0x000B5608L,1UL,2UL},{4294967295UL,0xA104C649L,1UL},{0UL,0x1BB6710FL,6UL},{0xA104C649L,6UL,0x1BB6710FL},{0UL,1UL,0xA104C649L},{4294967295UL,2UL,1UL},{0x000B5608L,1UL,0xFE31AD54L}},{{1UL,1UL,4294967288UL},{4UL,2UL,0x73941FF1L},{0x1BB6710FL,1UL,4294967290UL},{0xFE31AD54L,6UL,0xFCB0E65AL},{2UL,0x1BB6710FL,4294967290UL},{1UL,0xA104C649L,0x73941FF1L},{0xA26E8967L,1UL,4294967288UL},{9UL,0xFE31AD54L,0xFE31AD54L},{9UL,4294967295UL,0x0CD5B932L},{1UL,1UL,0xA26E8967L}},{{0x0CD5B932L,4294967288UL,0UL},{0xFE31AD54L,2UL,0x1BB6710FL},{4294967290UL,4294967288UL,0x86AB6FC6L},{0UL,1UL,0xFE31AD54L},{0xFCB0E65AL,4294967295UL,0UL},{0UL,4294967290UL,0UL},{0x5BECB3EAL,0x0CD5B932L,0xFE31AD54L},{1UL,0xA26E8967L,0x86AB6FC6L},{0x000B5608L,0UL,0x1BB6710FL},{0xA26E8967L,0x1BB6710FL,0UL}},{{0x000B5608L,0x86AB6FC6L,0xA26E8967L},{1UL,0xFE31AD54L,0x0CD5B932L},{0x5BECB3EAL,0UL,4294967290UL},{0UL,0UL,4294967295UL},{0xFCB0E65AL,0xFE31AD54L,1UL},{0UL,0x86AB6FC6L,4294967288UL},{4294967290UL,0x1BB6710FL,2UL},{0xFE31AD54L,0UL,4294967288UL},{0x0CD5B932L,0xA26E8967L,1UL},{1UL,0x0CD5B932L,4294967295UL}},{{0x73941FF1L,4294967290UL,4294967290UL},{0x73941FF1L,4294967295UL,0x0CD5B932L},{1UL,1UL,0xA26E8967L},{0x0CD5B932L,4294967288UL,0UL},{0xFE31AD54L,2UL,0x1BB6710FL},{4294967290UL,4294967288UL,0x86AB6FC6L},{0UL,1UL,0xFE31AD54L},{0xFCB0E65AL,4294967295UL,0UL},{0UL,4294967290UL,0UL},{0x5BECB3EAL,0x0CD5B932L,0xFE31AD54L}}};
                unsigned l_1502 = 1UL;
                int l_1547 = 1L;
                int i, j, k;
                if ((g_236 = (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_18 , ((l_1412 == g_1395) & (g_1037 , l_18))), (l_1443 = func_55(func_68(((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(g_970, ((safe_mul_func_uint16_t_u_u((+(g_166 = 7UL)), ((safe_rshift_func_uint8_t_u_s(((g_1037 != ((safe_add_func_uint16_t_u_u((l_1441 = ((g_165 &= l_1420) <= l_1440[0][1][0])), 0x8070L)) > l_1418)) & l_1412), l_1440[0][1][0])) ^ g_1361))) , 0xDF6CL))), l_1440[3][3][2])) > g_97.f4), g_1037, g_1216[1], g_125, g_1394), g_97.f0, g_280, l_1442)))), l_1440[4][8][2]))))
                {
                    char l_1451[1][5][10] = {{{(-1L),(-3L),(-3L),(-1L),5L,(-1L),(-3L),(-3L),(-1L),5L},{(-1L),(-3L),(-3L),(-1L),5L,(-1L),(-3L),(-3L),(-1L),5L},{(-1L),(-3L),(-3L),(-1L),5L,(-1L),(-3L),(-3L),(-1L),5L},{(-1L),(-3L),(-3L),(-1L),5L,(-1L),(-3L),(-3L),(-1L),5L},{(-1L),(-3L),(-3L),(-1L),5L,(-1L),(-3L),(-3L),(-1L),5L}}};
                    int i, j, k;
                    for (l_1384 = 0; (l_1384 != (-10)); --l_1384)
                    {
                        unsigned l_1462 = 4294967293UL;
                        l_1446 = (-6L);
                        g_236 ^= (safe_lshift_func_uint8_t_u_u(g_1023, (safe_lshift_func_int8_t_s_s(((g_166 = l_1451[0][0][6]) && (g_303[0].f1 = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(func_68(g_303[0].f3, func_68((safe_rshift_func_uint16_t_u_u((l_1463 = (safe_sub_func_uint16_t_u_u(func_40(((g_164 > (l_1451[0][0][6] < (0x6CB6L & (((+0x577BL) == (0x9A13L > (safe_div_func_int32_t_s_s(g_1060[7][0], l_1417)))) , 0x60B2L)))) || g_97.f4)), l_1462))), g_1395)), l_1451[0][3][5], g_280, l_1383, l_1451[0][0][6]), g_280, l_1451[0][0][6], l_1440[0][1][0]), g_166)), 0x26C1L)))), l_1417))));
                    }
                    g_236 ^= l_1464;
                }
                else
                {
                    unsigned short l_1491 = 65535UL;
                    int l_1492 = 0xAA197E1AL;
                    short l_1545 = 0xC376L;
                    g_236 |= (func_40(func_40((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((g_97.f1 && (1UL || (g_303[0].f4 & (g_1037 , (safe_lshift_func_int8_t_s_u(((g_1060[1][0] |= g_1216[1]) < (~l_1419)), (safe_div_func_uint8_t_u_u(((g_1216[3] != ((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0L, (((g_97.f2 && l_1381) >= 0x85L) != g_970))), g_97.f0)) , g_280)) == g_303[0].f2), 0x24L)))))))), 1UL)) != (-6L)), 9)))) == g_673);
                    g_236 = (g_97 , (safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((4294967295UL > g_303[0].f0), ((safe_mod_func_uint16_t_u_u(l_1412, ((safe_add_func_uint8_t_u_u((!l_1389), (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((g_1023 = ((g_384 , (l_1417 = (l_1492 ^= func_60(((l_1380 | (func_40(l_1440[0][1][0]) == 0x18L)) > 1L), l_1491, g_97.f1, g_97.f2, g_1216[1])))) || g_97.f3)), 5)), g_356)))) | 0xF5A5L))) && g_303[0].f2))), g_384)));
                    for (g_356 = 0; (g_356 <= 6); g_356 += 1)
                    {
                        unsigned l_1493 = 0x9FD29519L;
                        int l_1510[2][4][2] = {{{1L,(-1L)},{1L,1L},{(-1L),1L},{1L,(-1L)}},{{1L,1L},{(-1L),1L},{1L,(-1L)},{1L,1L}}};
                        int i, j, k;
                        l_1417 = l_1419;
                        g_236 = func_76((l_1502 = ((((((l_1493 | (func_60(g_825, ((safe_sub_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((~((g_303[g_356] , (g_125 ^ l_1492)) | g_356)), (safe_sub_func_int32_t_s_s(l_1382, ((l_1491 , l_1417) < g_125))))) & l_1376), 6)) && g_303[g_356].f3) <= 3L) != 0x5A17F287L), 6UL)) || g_94), g_94, g_1394, g_1023) | 0L)) & 1L) , g_1187) | 0x3DBAL) <= 0xC2L) >= g_1395)), l_1382, l_1492, l_1380, l_1491);
                        g_236 = (safe_lshift_func_uint16_t_u_u(l_1383, 11));
                        l_1510[0][2][1] = func_68(g_303[g_356].f4, g_1395, l_1491, (func_40((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((g_164 = 0x90L) & (((func_68(((g_673 > (l_1502 || ((l_1380 != func_40(g_1060[5][1])) >= g_236))) , g_303[g_356].f2), l_1440[0][1][0], l_1419, g_303[g_356].f1, l_1412) == g_303[0].f3) & g_236) , l_1440[2][7][0])), g_1060[4][2])) >= 254UL), 4))) | g_970), l_1509);
                    }
                    if ((safe_add_func_uint8_t_u_u(l_1463, l_1513)))
                    {
                        int l_1514 = (-1L);
                        g_303[0] = g_303[0];
                        g_236 = g_97.f3;
                        g_236 = ((g_97.f0 ^ l_1514) || ((safe_mul_func_int16_t_s_s((g_1216[1] && g_1216[1]), (safe_lshift_func_int8_t_s_u((l_1519[7] , l_1440[0][1][0]), 5)))) , ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((g_303[0].f1 = (g_97.f0 &= ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(l_1464, (safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(l_1491, (safe_div_func_uint8_t_u_u(0xA6L, g_1060[7][0])))) && l_1440[0][6][0]), l_1519[7].f1)) , g_125), l_1491)))) != g_673), g_1216[3])), g_125)) || g_15))), g_356)) | 0x63L), g_303[0].f4)) , l_1502)));
                    }
                    else
                    {
                        unsigned l_1546 = 0xFF0AA491L;
                        l_1547 = (((((safe_sub_func_uint16_t_u_u(g_97.f4, g_1060[7][0])) > 0xCAL) <= ((l_1546 ^= ((!((g_356 , (safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(l_1519[7].f3, (((g_303[0].f1 < (g_1544 , (((func_76(l_1545, ((7L == l_1492) & g_1216[1]), l_1545, g_42, g_125) == g_1394) != l_1492) != g_825))) >= (-7L)) != g_15))), (-4L)))) , g_1395)) == 1L)) < g_303[0].f4)) , g_917) <= l_1441);
                    }
                }
                for (l_1380 = (-22); (l_1380 == 7); l_1380 = safe_add_func_uint8_t_u_u(l_1380, 4))
                {
                    return g_303[0].f3;
                }
                l_1547 = (((safe_mod_func_uint8_t_u_u(0x9EL, l_1380)) <= g_303[0].f0) > func_68(((l_18 = (safe_rshift_func_int8_t_s_s((0x4AL != (l_1547 || (l_1519[7] , l_1383))), func_68(l_1443, l_1519[7].f3, g_281, l_1547, g_1060[7][0])))) , g_970), g_303[0].f2, l_1554, g_527, l_1555[0]));
                g_1562[1] = ((0x8F901549L & (g_236 = l_1382)) >= (g_1187 = ((l_1556 , (((func_60(g_1216[1], ((g_917 = (l_1440[3][6][0] || ((safe_rshift_func_int8_t_s_u((func_60(l_1380, l_18, (((l_1440[0][4][2] >= ((safe_mul_func_uint8_t_u_u((((((l_1419 & l_1547) || l_1561) == 0L) != g_1216[2]) , 0UL), g_917)) == 0x90BAL)) | 255UL) , l_1519[7].f3), g_673, g_94) && g_1060[3][2]), 1)) >= g_825))) < 0xA6L), l_1442, l_1519[7].f4, g_303[0].f3) < 0xEFL) , l_1382) < l_1380)) , 0xEF9BA165L)));
            }
            for (l_1556.f4 = 0; (l_1556.f4 != 25); l_1556.f4 = safe_add_func_uint8_t_u_u(l_1556.f4, 6))
            {
                struct S0 l_1569 = {-1L,0x37C9L,0L,0UL,255UL};
                short l_1595 = 0x1392L;
                int l_1596[10];
                short l_1599 = 0x3B3CL;
                int l_1706 = 8L;
                int i;
                for (i = 0; i < 10; i++)
                    l_1596[i] = 0xD4E927F3L;
                for (l_1412 = 0; (l_1412 == 5); l_1412 = safe_add_func_uint16_t_u_u(l_1412, 9))
                {
                    unsigned short l_1578 = 0xCFDEL;
                    for (g_15 = (-12); (g_15 >= 19); g_15++)
                    {
                        struct S0 l_1582[4][8][8] = {{{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{2L,0xDE97L,1L,255UL,246UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0xB5B6L,-9L,0x67D7382AL,0x4AL,0x8DL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0xB5B6L,-9L,0x67D7382AL,0x4AL,0x8DL}},{{1L,0x2CF1L,0L,0x3FL,255UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{1L,0x2CF1L,0L,0x3FL,255UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x234AL,0xBD21L,1L,0x43L,1UL},{0x36FFL,-7L,1L,0xABL,0x67L}},{{1L,0x2CF1L,0L,0x3FL,255UL},{2L,0xDE97L,1L,255UL,246UL},{0x57F3L,-7L,3L,6UL,1UL},{1L,0x2CF1L,0L,0x3FL,255UL},{0xB5B6L,-9L,0x67D7382AL,0x4AL,0x8DL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x234AL,0xBD21L,1L,0x43L,1UL},{0xB5B6L,-9L,0x67D7382AL,0x4AL,0x8DL}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{2L,0xDE97L,1L,255UL,246UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0xB5B6L,-9L,0x67D7382AL,0x4AL,0x8DL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x57F3L,-7L,3L,6UL,1UL},{0x57F3L,-7L,3L,6UL,1UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{2L,0xDE97L,1L,255UL,246UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0x234AL,0xBD21L,1L,0x43L,1UL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0x2630L,0x661CL,5L,0xB7L,4UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{0x57F3L,-7L,3L,6UL,1UL},{0x2630L,0x661CL,5L,0xB7L,4UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x57F3L,-7L,3L,6UL,1UL},{0x57F3L,-7L,3L,6UL,1UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL}}},{{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{2L,0xDE97L,1L,255UL,246UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0x234AL,0xBD21L,1L,0x43L,1UL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0x2630L,0x661CL,5L,0xB7L,4UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{0x57F3L,-7L,3L,6UL,1UL},{0x2630L,0x661CL,5L,0xB7L,4UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x57F3L,-7L,3L,6UL,1UL},{0x57F3L,-7L,3L,6UL,1UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{2L,0xDE97L,1L,255UL,246UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0x234AL,0xBD21L,1L,0x43L,1UL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0x2630L,0x661CL,5L,0xB7L,4UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{0x57F3L,-7L,3L,6UL,1UL},{0x2630L,0x661CL,5L,0xB7L,4UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x57F3L,-7L,3L,6UL,1UL},{0x57F3L,-7L,3L,6UL,1UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{2L,0xDE97L,1L,255UL,246UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0x234AL,0xBD21L,1L,0x43L,1UL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0x2630L,0x661CL,5L,0xB7L,4UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{0x57F3L,-7L,3L,6UL,1UL},{0x2630L,0x661CL,5L,0xB7L,4UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x36FFL,-7L,1L,0xABL,0x67L}}},{{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x57F3L,-7L,3L,6UL,1UL},{0x57F3L,-7L,3L,6UL,1UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{2L,0xDE97L,1L,255UL,246UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0x234AL,0xBD21L,1L,0x43L,1UL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0x2630L,0x661CL,5L,0xB7L,4UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{0x57F3L,-7L,3L,6UL,1UL},{0x2630L,0x661CL,5L,0xB7L,4UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x57F3L,-7L,3L,6UL,1UL},{0x57F3L,-7L,3L,6UL,1UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{2L,0xDE97L,1L,255UL,246UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0x234AL,0xBD21L,1L,0x43L,1UL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0x2630L,0x661CL,5L,0xB7L,4UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{0x57F3L,-7L,3L,6UL,1UL},{0x2630L,0x661CL,5L,0xB7L,4UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x57F3L,-7L,3L,6UL,1UL},{0x57F3L,-7L,3L,6UL,1UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{2L,0xDE97L,1L,255UL,246UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0x234AL,0xBD21L,1L,0x43L,1UL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x36FFL,-7L,1L,0xABL,0x67L}}},{{{0x2630L,0x661CL,5L,0xB7L,4UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{0x57F3L,-7L,3L,6UL,1UL},{0x2630L,0x661CL,5L,0xB7L,4UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x57F3L,-7L,3L,6UL,1UL},{0x57F3L,-7L,3L,6UL,1UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL}},{{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{2L,0xDE97L,1L,255UL,246UL},{0xD273L,-2L,0x2B7F2D17L,9UL,255UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0x234AL,0xBD21L,1L,0x43L,1UL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0x36FFL,-7L,1L,0xABL,0x67L}},{{0x2630L,0x661CL,5L,0xB7L,4UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{0x57F3L,-7L,3L,6UL,1UL},{0x2630L,0x661CL,5L,0xB7L,4UL},{0x36FFL,-7L,1L,0xABL,0x67L},{0x234AL,0xBD21L,1L,0x43L,1UL},{0x234AL,0xBD21L,1L,0x43L,1UL},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL}},{{0x2630L,0x661CL,5L,0xB7L,4UL},{2L,0xDE97L,1L,255UL,246UL},{2L,0xDE97L,1L,255UL,246UL},{0x2630L,0x661CL,5L,0xB7L,4UL},{0xB5B6L,-9L,0x67D7382AL,0x4AL,0x8DL},{0x234AL,0xBD21L,1L,0x43L,1UL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0xB5B6L,-9L,0x67D7382AL,0x4AL,0x8DL}},{{0x2630L,0x661CL,5L,0xB7L,4UL},{0x57F3L,-7L,3L,6UL,1UL},{0x6473L,0x8C3FL,0x55D7D570L,255UL,0xA0L},{0x2630L,0x661CL,5L,0xB7L,4UL},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL},{0x7269L,0xD4DBL,1L,250UL,0xC7L},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL}},{{1L,0x2CF1L,0L,0x3FL,255UL},{0x57F3L,-7L,3L,6UL,1UL},{2L,0xDE97L,1L,255UL,246UL},{1L,0x2CF1L,0L,0x3FL,255UL},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL},{0x234AL,0xBD21L,1L,0x43L,1UL},{0x234AL,0xBD21L,1L,0x43L,1UL},{0x9A41L,0x22E1L,0xC2D7056BL,0xF3L,0x1FL}},{{0x2630L,0x661CL,5L,0xB7L,4UL},{2L,0xDE97L,1L,255UL,246UL},{2L,0xDE97L,1L,255UL,246UL},{0x2630L,0x661CL,5L,0xB7L,4UL},{0xB5B6L,-9L,0x67D7382AL,0x4AL,0x8DL},{0x234AL,0xBD21L,1L,0x43L,1UL},{0xAA09L,-1L,0x1D517119L,0UL,0x0DL},{0xB5B6L,-9L,0x67D7382AL,0x4AL,0x8DL}}}};
                        int i, j, k;
                        l_1569 = l_1519[3];
                        l_1582[0][4][7] = ((l_1384 && (safe_unary_minus_func_uint32_t_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(func_76((l_18 ^= ((g_356 = 1UL) , (l_1382 >= (((safe_unary_minus_func_uint32_t_u(l_1421[0][0])) == (safe_add_func_uint16_t_u_u(0x8C4BL, ((l_1578 = 1UL) <= l_1417)))) != 5UL)))), (((safe_mul_func_int8_t_s_s(((((-1L) >= l_1556.f1) && 0x6EC399B8L) >= 1L), l_1581[0])) , g_1395) , 0L), g_1187, l_1555[0], g_164), g_280)), g_97.f3))))) , g_97);
                        g_236 |= (func_68((((safe_rshift_func_int16_t_s_s(g_673, 2)) ^ (g_1023 , 65533UL)) , (((g_281 ^ ((g_1216[1] || (l_1596[7] |= ((l_1382 = (safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((((l_1519[7] = l_1582[0][4][7]) , (safe_rshift_func_int16_t_s_s(g_1114, 2))) , ((((((l_1569.f4 == (g_97.f0 &= ((safe_sub_func_uint8_t_u_u(l_1582[0][4][7].f1, g_94)) , g_825))) & l_1578) , l_1376) | (-1L)) >= l_1595) > (-1L))), 6)) != l_1582[0][4][7].f2) && g_970), g_527)), 1L))) , g_303[0].f4))) | l_1578)) , g_303[0].f1) && l_1578)), g_280, g_1394, l_1578, g_303[0].f4) != g_165);
                        l_1446 |= 1L;
                    }
                }
                if ((safe_div_func_int32_t_s_s((l_1556.f4 & l_1599), (safe_mul_func_int16_t_s_s(l_1519[7].f0, 65528UL)))))
                {
                    g_236 ^= 0xEDE86A4EL;
                    g_1616[4][1][1] = (safe_mod_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u(l_1605)) >= ((g_236 ^= g_97.f1) ^ (safe_add_func_int8_t_s_s(l_1555[0], ((g_281 ^ func_55(g_97.f1, (safe_mul_func_uint8_t_u_u(func_40(g_527), ((l_1569.f1 > (safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(g_1060[2][0], 4294967295UL)), (-7L)))) >= 0L))), g_280, l_1419)) && l_1556.f4))))), g_527));
                    g_97 = (g_303[3] = l_1617);
                }
                else
                {
                    g_236 = ((safe_rshift_func_int16_t_s_u(1L, 14)) | 0xC70FL);
                }
                if ((l_1617.f0 != (l_1632 &= ((safe_div_func_uint8_t_u_u((249UL <= (((l_1382 &= ((func_40(l_1376) <= ((+(safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_164, (safe_sub_func_int8_t_s_s((g_673 = l_1417), 0x2AL)))), (((g_1562[3] &= ((safe_sub_func_uint32_t_u_u(0x3380893CL, (l_1464 > l_1419))) >= g_303[0].f4)) | g_356) | l_1389)))) == 0xAE72L)) , 4UL)) > l_1421[0][0]) != l_1595)), 0x50L)) , g_97.f3))))
                {
                    short l_1650[4];
                    int l_1655 = 0x18F67B49L;
                    unsigned l_1672 = 0x6C28B008L;
                    int l_1704 = 0xD017CE40L;
                    short l_1705[2][3] = {{0x5AB3L,0x5AB3L,0x7D7EL},{0x5AB3L,0x5AB3L,0x7D7EL}};
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_1650[i] = 0x8D8DL;
                    g_1654[0][0] = (l_1384 = (((l_1653 = (safe_mul_func_int32_t_s_s((g_236 &= (safe_rshift_func_int8_t_s_s(l_1555[1], l_1637))), (g_303[0] , (((255UL >= (((safe_div_func_uint32_t_u_u(((((g_1652[4][1][1] = ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((g_1114 || ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(l_18, (l_1632 = 0x64L))), (safe_mul_func_uint8_t_u_u(g_1395, (func_68((l_1382 &= g_125), l_1650[1], g_1562[1], l_1464, l_1569.f0) != 0x664227A1L))))) ^ 0x5EL)) && g_97.f1) & l_1650[3]), g_165)), l_1651[0])) > l_1595)) && g_1060[7][1]) | l_1650[2]) >= l_1389), l_1617.f4)) , (-6L)) > g_281)) > g_97.f2) != l_1555[2]))))) ^ 8L) , l_1569.f0));
                    for (g_97.f1 = 0; (g_97.f1 <= 0); g_97.f1 += 1)
                    {
                        int l_1677[4] = {(-8L),(-8L),(-8L),(-8L)};
                        int i, j;
                        g_303[0] = g_97;
                        g_236 = (l_1655 = l_1421[g_97.f1][g_97.f1]);
                        g_1678 = (g_236 = (l_1677[3] |= (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(l_1380, (func_68(((l_1617.f2 && (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((func_55(g_384, (((safe_mul_func_uint16_t_u_u(l_1421[g_97.f1][g_97.f1], ((g_1187 > g_1654[0][5]) ^ (safe_rshift_func_int16_t_s_u((g_303[0].f0 = (g_1616[0][1][1] = (func_55((safe_div_func_int16_t_s_s((((g_673 = l_1421[g_97.f1][g_97.f1]) < ((g_1562[2] = (l_1384 = l_1672)) <= ((safe_div_func_int16_t_s_s((g_1616[4][1][1] ^= (safe_sub_func_int8_t_s_s(l_1419, l_1519[7].f2))), 0xBB9AL)) & l_1556.f4))) , g_97.f3), g_825)), l_1655, g_236, l_1655) , l_1509))), 1))))) , g_1654[0][0]) > g_236), l_1672, g_97.f1) == g_970) & 6L), g_281)), l_1443))) , g_1544), l_1655, g_1187, l_1655, l_1653) > (-1L)))) , l_1617.f2), g_356)), g_303[0].f3))));
                        l_1706 |= ((safe_rshift_func_int16_t_s_u((l_1655 = g_97.f1), 4)) >= (safe_sub_func_uint8_t_u_u(l_1672, func_55((safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u((l_1421[g_97.f1][g_97.f1] < (((g_1544 |= ((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_1519[7].f0, 7)), (safe_unary_minus_func_int8_t_s(((safe_add_func_int32_t_s_s(g_42, l_1380)) < g_303[0].f4))))) == ((g_303[0] , func_76((safe_mod_func_int32_t_s_s(func_76((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(g_97.f4, l_1581[2])), g_1216[1])), l_1595, l_1651[0], g_384, l_1672), l_1672)), l_1651[0], l_1443, l_1704, l_1677[3])) , 0L)) >= l_1650[3]), g_97.f2)), l_1632)) || l_1596[7])) >= l_1421[0][0]) ^ l_1417)), l_1569.f3)), g_236)), g_1395, g_125, l_1705[1][0]))));
                    }
                    if (l_1382)
                        break;
                }
                else
                {
                    return g_1562[2];
                }
                if (func_76(g_1678, ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((l_1596[3] && ((safe_rshift_func_uint16_t_u_u(65535UL, 14)) && ((((g_1562[1] = (((func_55((safe_sub_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_1037, (safe_add_func_int32_t_s_s(((l_1555[0] == (((safe_mul_func_int8_t_s_s((l_1519[7].f2 <= g_97.f4), (((safe_lshift_func_int8_t_s_s(l_1596[7], 6)) | (g_165 = g_917)) < l_1706))) , g_1395) <= g_1216[1])) <= g_1394), 0xCCD7225DL)))), g_97.f2)) > l_1380) >= g_1114) || l_1519[7].f4), (-1L))), l_1725, g_303[0].f1, l_1519[7].f0) > g_1616[2][1][1]) > 0x3AL) & l_1519[7].f1)) <= g_1544) >= l_1569.f4) | (-1L)))), 14)), l_1519[7].f4)) || l_1417), l_1706, l_1653, l_1382))
                {
                    unsigned l_1730 = 0x130C7277L;
                    g_236 ^= l_1726;
                    l_1596[9] = (((l_1595 ^ (l_1729[1][0] < (func_55(l_1730, g_97.f2, l_1730, (l_1519[7] , (l_1617.f4 , ((l_1379 != (((((l_1730 , g_1060[7][2]) | l_1596[7]) < l_1555[0]) >= l_1637) >= l_1421[0][0])) && 0x56L)))) >= l_1599))) || 0x05L) || l_1412);
                }
                else
                {
                    if (g_1654[0][6])
                        break;
                    return g_1616[4][1][1];
                }
            }
        }
        for (g_94 = 1; (g_94 <= 4); g_94 += 1)
        {
            int i;
            if (g_1216[g_94])
                break;
        }
    }
    else
    {
        struct S0 l_1738[8] = {{0x8230L,0x8647L,0x4CBED6DEL,0x2AL,0x5EL},{3L,1L,-2L,0x18L,1UL},{3L,1L,-2L,0x18L,1UL},{0x8230L,0x8647L,0x4CBED6DEL,0x2AL,0x5EL},{3L,1L,-2L,0x18L,1UL},{3L,1L,-2L,0x18L,1UL},{0x8230L,0x8647L,0x4CBED6DEL,0x2AL,0x5EL},{3L,1L,-2L,0x18L,1UL}};
        int l_1744 = 0x60A34792L;
        int l_1753 = 0x9F171E12L;
        int l_1766 = (-1L);
        unsigned char l_1803 = 1UL;
        unsigned short l_1806[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1806[i] = 1UL;
        for (g_236 = 0; (g_236 <= 1); g_236 += 1)
        {
            int l_1750 = 0xEDD75915L;
            int l_1755[1];
            int l_1795[3];
            unsigned char l_1812 = 250UL;
            int i;
            for (i = 0; i < 1; i++)
                l_1755[i] = 0xDA82ED5EL;
            for (i = 0; i < 3; i++)
                l_1795[i] = (-4L);
            if (g_1562[g_236])
            {
                char l_1739 = 0xDAL;
                unsigned char l_1745 = 1UL;
                int l_1754 = 7L;
                for (g_280 = 0; (g_280 <= 1); g_280 += 1)
                {
                    unsigned short l_1733 = 0xD2F8L;
                    for (g_384 = 1; (g_384 >= 0); g_384 -= 1)
                    {
                        g_303[0] = g_303[0];
                        g_97 = g_303[4];
                        g_97 = g_97;
                    }
                    for (g_165 = 0; (g_165 <= 1); g_165 += 1)
                    {
                        l_1733 = 0xC3E13F96L;
                    }
                    for (l_1509 = 0; (l_1509 <= 0); l_1509 += 1)
                    {
                        int i, j, k;
                        return g_1616[(g_280 + 2)][g_236][(l_1509 + 1)];
                    }
                    for (g_94 = 0; (g_94 <= 0); g_94 += 1)
                    {
                        int i, j, k;
                        if (g_1616[(g_280 + 1)][(g_280 + 1)][g_94])
                            break;
                        g_1737 = (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(65530UL)), func_40((g_356 ^= 0x62D96F1EL))));
                        l_1738[4] = g_303[0];
                    }
                }
                l_1739 = l_1738[4].f0;
                l_1755[0] = ((l_1738[4].f1 < (l_1754 = (safe_sub_func_uint32_t_u_u(((((l_1745 |= (safe_mod_func_int32_t_s_s(l_1617.f4, (l_1738[4].f2 , ((+(l_1744 |= (0xE3L || l_1738[4].f2))) | 0L))))) | ((l_1753 = (safe_sub_func_int32_t_s_s((l_1380 = (safe_sub_func_int32_t_s_s(((9L & (g_280 = ((l_1750 = 4294967291UL) , (g_1652[2][3][3] |= (safe_lshift_func_uint8_t_u_u(l_1738[4].f1, l_1738[4].f4)))))) , l_1750), g_1562[g_236]))), l_1753))) || 1UL)) < l_1617.f4) , 0xDF49B0B9L), g_1562[2])))) <= l_1739);
            }
            else
            {
                unsigned short l_1758 = 0x354BL;
                unsigned l_1761[1];
                unsigned short l_1788 = 1UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_1761[i] = 0UL;
                if (((safe_sub_func_uint16_t_u_u((l_1758 , (safe_mod_func_uint16_t_u_u(0x4343L, func_60(l_1738[4].f2, l_1761[0], (((l_1755[0] = g_303[0].f1) , (((safe_mul_func_int8_t_s_s(7L, (safe_mul_func_int8_t_s_s(0x0AL, l_1761[0])))) | l_1761[0]) , l_1750)) <= g_303[0].f2), g_1678, l_1651[0])))), l_1766)) < g_970))
                {
                    struct S0 l_1768 = {-1L,0xA2C7L,1L,0x57L,0xD2L};
                    l_1767 &= l_1738[4].f4;
                    if (g_1023)
                        continue;
                    if (l_1605)
                    {
                        g_303[5] = l_1768;
                    }
                    else
                    {
                        unsigned l_1787 = 1UL;
                        g_97 = l_1768;
                        l_1766 ^= (l_1755[0] = (safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_s((-10L), 3)) > (0x446FEDF1L >= (safe_mul_func_uint8_t_u_u(g_825, func_40(((((safe_rshift_func_uint8_t_u_u((func_60((safe_rshift_func_uint8_t_u_u(l_1761[0], (~0x38L))), ((((safe_add_func_uint8_t_u_u(l_18, l_1725)) == (safe_mul_func_uint8_t_u_u(l_1768.f1, (g_97.f4 = g_1395)))) & l_1787) , l_1788), g_1544, l_1755[0], g_97.f2) >= g_1616[4][2][0]), g_280)) , l_1787) >= 65535UL) >= l_1753)))))) , l_1768.f1), 1)), g_1652[0][4][1])), l_1755[0])));
                    }
                    l_1766 = g_1789;
                }
                else
                {
                    short l_1790 = 7L;
                    for (g_97.f2 = 0; (g_97.f2 <= 0); g_97.f2 += 1)
                    {
                        int i;
                        g_1737 |= l_1651[g_97.f2];
                    }
                    g_1737 |= g_1652[7][2][0];
                    l_1790 |= 0x79862F6FL;
                }
            }
            g_1804 = ((safe_mul_func_uint8_t_u_u(0x2EL, g_1793)) > func_76((((g_1023 = l_1794[0]) < (l_1755[0] = (l_1795[2] , ((g_1544 &= func_40(g_97.f2)) < ((safe_add_func_uint8_t_u_u(g_97.f2, ((g_1737 = g_1114) , (safe_mod_func_uint32_t_u_u(((l_1744 = ((safe_mul_func_int8_t_s_s(l_1637, l_1755[0])) > g_1616[0][0][0])) == g_1737), l_1651[0]))))) & g_1361))))) , 1UL), l_1802, l_1555[0], l_18, l_1803));
            for (g_15 = 1; (g_15 >= 0); g_15 -= 1)
            {
                int l_1805 = (-1L);
                int l_1813 = 1L;
                g_1737 ^= (g_1804 &= 0x2F074B55L);
                if (l_1744)
                    break;
                if (g_1652[1][3][3])
                    continue;
                for (g_356 = 0; (g_356 <= 1); g_356 += 1)
                {
                    int l_1816 = 0x885DD9D3L;
                    int i, j, k;
                    l_1382 ^= ((g_1616[(g_15 + 2)][g_236][g_356] == (l_1380 = (l_1805 > l_1806[1]))) ^ (safe_lshift_func_int16_t_s_s(func_68(func_68((l_1816 &= func_68(g_97.f4, l_1809[1][4][0], (safe_mod_func_uint16_t_u_u(func_76(l_1805, l_1812, (l_1813 = 0x4C197BA7L), (l_1744 = (safe_rshift_func_uint8_t_u_s((l_1617 , l_1795[2]), 1))), g_1394), l_1803)), l_1809[1][2][2], l_1651[0])), g_1562[1], g_825, l_1738[4].f2, g_1654[0][0]), l_1617.f0, l_1750, g_1060[7][0], g_164), 14)));
                }
            }
        }
    }
    g_303[4] = (((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((g_164 &= (l_1726 >= l_1823)), (func_76((safe_sub_func_uint16_t_u_u(65529UL, func_76((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_1652[4][1][1], (safe_sub_func_uint8_t_u_u((((g_1187 = (safe_rshift_func_uint8_t_u_u((g_125 = 255UL), 2))) & g_1023) <= (safe_lshift_func_uint8_t_u_s(l_18, (safe_rshift_func_uint8_t_u_s((((func_40(l_1555[0]) | g_97.f4) && 0x7DE7L) , g_97.f2), l_1617.f4))))), g_1616[4][1][1])))), 255UL)), l_1651[0], g_970, g_166, l_1637))), l_1838, g_1737, l_1617.f2, g_1652[4][1][1]) == g_1060[7][0]))), 8)), l_1382)) | 0xBAL) , l_1617);
    return l_1617.f1;
}







static unsigned func_10(unsigned p_11, unsigned char p_12, int p_13, short p_14)
{
    unsigned char l_24 = 0x9FL;
    int l_35 = (-1L);
    int l_45 = 0x9942796AL;
    unsigned short l_1022 = 65535UL;
    short l_1063 = 0xD150L;
    unsigned l_1071 = 0UL;
    struct S0 l_1092[8] = {{0x4007L,0x4889L,-6L,1UL,0UL},{0x4007L,0x4889L,-6L,1UL,0UL},{5L,0L,1L,0xD7L,0x46L},{0x4007L,0x4889L,-6L,1UL,0UL},{0x4007L,0x4889L,-6L,1UL,0UL},{5L,0L,1L,0xD7L,0x46L},{0x4007L,0x4889L,-6L,1UL,0UL},{0x4007L,0x4889L,-6L,1UL,0UL}};
    unsigned l_1123 = 0x64852028L;
    unsigned char l_1139 = 1UL;
    short l_1188[1];
    char l_1240 = 0xF2L;
    int l_1345 = 0xCFF9F063L;
    int i;
    for (i = 0; i < 1; i++)
        l_1188[i] = 0x0D20L;
    if (func_19(p_13, (l_24 = 0xDF6BL), ((safe_mod_func_uint16_t_u_u(func_27((safe_sub_func_uint8_t_u_u(g_15, (((safe_lshift_func_int8_t_s_s((0xEFL ^ (safe_add_func_int16_t_s_s(l_35, ((safe_div_func_uint32_t_u_u(g_15, (-5L))) == 0x4CL)))), 5)) >= (safe_add_func_uint32_t_u_u((func_40(g_15) || l_45), 1L))) | p_13)))), 0xF860L)) , 1UL), p_12))
    {
        unsigned short l_1006 = 65526UL;
        int l_1057 = 0xB95FC238L;
        struct S0 l_1130 = {0xB4BAL,0L,0x03401CE0L,255UL,255UL};
        unsigned short l_1164 = 0x630FL;
        int l_1229 = (-1L);
        for (g_125 = 13; (g_125 != 36); g_125 = safe_add_func_int8_t_s_s(g_125, 8))
        {
            struct S0 l_1013 = {0xB1C1L,0x8895L,0xBF26D9FCL,255UL,7UL};
            int l_1016 = 0x8A334AE4L;
            unsigned char l_1030 = 0xC5L;
            unsigned char l_1039 = 0UL;
            int l_1078 = 0xF11F60A8L;
            char l_1085 = 0x19L;
            struct S0 l_1110 = {0x046CL,0xFE77L,0xA9245371L,1UL,0x00L};
            if ((+(l_1006 < (safe_mul_func_uint8_t_u_u(g_97.f3, p_13)))))
            {
                char l_1020 = 1L;
                if ((~7L))
                {
                    unsigned l_1011 = 0xDD70E3CDL;
                    struct S0 l_1012 = {0x5020L,0x7792L,0L,0x08L,0x58L};
                    int l_1021 = 0x81F6C82CL;
                    p_13 |= p_12;
                    g_236 = (g_125 != ((safe_mod_func_uint16_t_u_u(l_1011, 0x69B5L)) & p_12));
                    l_1013 = l_1012;
                    for (g_97.f4 = 15; (g_97.f4 >= 40); ++g_97.f4)
                    {
                        int l_1017 = 8L;
                        int l_1038 = 0x68DEF2C1L;
                        g_236 = p_14;
                        g_1023 = ((((g_303[0].f1 != ((p_14 != (((p_11 = (((p_14 >= p_13) & (((-2L) | (func_76((l_1016 ^= g_165), (func_40((l_1017 > (func_76((l_1021 ^= (safe_sub_func_int16_t_s_s((func_40(p_12) ^ l_1020), g_125))), p_14, l_1013.f2, l_1020, g_303[0].f0) != 3L))) , p_11), g_303[0].f2, p_14, l_1022) | 1UL)) , p_13)) == g_97.f1)) == 8L) & l_1020)) && l_1012.f4)) & 8UL) < g_303[0].f1) && 1L);
                        l_1016 = (safe_div_func_int32_t_s_s(((((l_1017 &= (p_11 = (g_1037 |= func_76((g_303[0].f0 <= (safe_lshift_func_int16_t_s_u(l_1020, 10))), g_236, ((safe_div_func_int16_t_s_s(0x9210L, 65535UL)) == func_76(p_14, l_1030, (safe_add_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((-1L), 1)), func_40(p_11))) == 0xFEL) ^ 0x33L), g_97.f0)), p_12, l_1006)), g_303[0].f3, l_45)))) ^ l_1038) , p_13) & l_1039), 0xCE718A31L));
                        p_13 = (((safe_add_func_int8_t_s_s((p_14 && (safe_rshift_func_int16_t_s_s(l_1017, 4))), (g_303[0].f4 = ((safe_mul_func_int8_t_s_s(0x7CL, (p_14 | (g_280 == 0x95ACL)))) == (-1L))))) < g_825) >= 0xE89EAF8CL);
                    }
                }
                else
                {
                    int l_1052 = 1L;
                    l_1052 = (g_527 & (safe_rshift_func_int8_t_s_u(g_281, (safe_rshift_func_uint16_t_u_s(9UL, (safe_rshift_func_int8_t_s_u(l_35, 0)))))));
                }
                if (g_917)
                    break;
                g_236 &= ((p_13 >= 251UL) ^ (p_12 != (!((p_12 & func_40(p_12)) < ((safe_rshift_func_int16_t_s_s(l_1006, g_165)) , 249UL)))));
            }
            else
            {
                return p_13;
            }
            if (func_76(g_303[0].f3, (safe_mul_func_uint16_t_u_u(func_40(((l_1057 |= l_35) , p_12)), g_280)), ((safe_add_func_uint8_t_u_u(g_1060[7][0], (((g_165 = (safe_sub_func_uint8_t_u_u((g_970 = 1UL), 249UL))) > 0xE893L) <= 65531UL))) & 0xB5L), l_1063, g_303[0].f1))
            {
                struct S0 l_1064 = {0x7700L,-5L,0xB39413F3L,0xDAL,5UL};
                int l_1076 = 0xFAA3E185L;
                int l_1077[6][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
                int i, j;
                if (g_303[0].f0)
                    break;
                l_1064 = g_97;
                g_236 = (safe_mod_func_uint32_t_u_u(((p_11 == (l_1078 ^= (l_35 &= (0x27B3L <= (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((l_1016 = l_1071) || ((p_12 | ((~(((((l_1077[2][0] = ((g_97.f3 == ((safe_rshift_func_int16_t_s_u(g_166, ((((l_1076 = p_11) | (g_303[6] , l_1064.f1)) <= 0x5DEDL) == l_1016))) == g_303[0].f4)) == p_13)) && 1L) != p_12) != l_1064.f4) , g_97.f1)) && p_12)) < p_11)) | 1L), p_12)), p_13)))))) , 4294967288UL), p_12));
            }
            else
            {
                int l_1088[4][4][9] = {{{(-6L),(-6L),1L,1L,(-6L),(-6L),1L,1L,(-6L)},{(-3L),0x3582F185L,(-3L),0x3582F185L,(-3L),0x3582F185L,(-3L),0x3582F185L,(-3L)},{(-6L),1L,1L,(-6L),(-6L),1L,1L,(-6L),(-6L)},{0x763EDB22L,0x3582F185L,0x763EDB22L,0x3582F185L,0x763EDB22L,0x3582F185L,0x763EDB22L,0x3582F185L,0x763EDB22L}},{{(-6L),(-6L),1L,1L,(-6L),(-6L),1L,1L,(-6L)},{(-3L),0x3582F185L,(-3L),0x3582F185L,(-3L),0x3582F185L,(-3L),0x3582F185L,(-3L)},{(-6L),1L,1L,(-6L),(-6L),1L,1L,(-6L),(-6L)},{0x763EDB22L,0x3582F185L,0x763EDB22L,0x3582F185L,0x763EDB22L,0x3582F185L,0x763EDB22L,0x3582F185L,0x763EDB22L}},{{(-6L),(-6L),1L,1L,(-6L),(-6L),1L,1L,(-6L)},{(-3L),0x3582F185L,(-3L),0x3582F185L,(-3L),0x3582F185L,(-3L),0x3582F185L,(-3L)},{(-6L),1L,1L,(-6L),(-6L),1L,1L,(-6L),(-6L)},{0x763EDB22L,0x3582F185L,0x763EDB22L,0x3582F185L,0x763EDB22L,0x3582F185L,0x763EDB22L,0x3582F185L,0x763EDB22L}},{{(-6L),(-6L),1L,1L,(-6L),(-6L),1L,1L,(-6L)},{(-3L),0x3582F185L,(-3L),0x3582F185L,(-3L),0x3582F185L,(-3L),0x3582F185L,(-3L)},{(-6L),1L,1L,(-6L),(-6L),1L,1L,(-6L),(-6L)},{0x763EDB22L,0x3582F185L,0x763EDB22L,0x3582F185L,0x763EDB22L,0x3582F185L,0x763EDB22L,0x3582F185L,0x763EDB22L}}};
                int l_1159[4][7][1] = {{{(-8L)},{0L},{0xF338382FL},{(-4L)},{0xF338382FL},{0L},{(-8L)}},{{0L},{0xF338382FL},{(-4L)},{0xF338382FL},{0L},{(-8L)},{0L}},{{0xF338382FL},{(-4L)},{0xF338382FL},{0L},{(-8L)},{0L},{0xF338382FL}},{{(-4L)},{0xF338382FL},{0L},{(-8L)},{0L},{0xF338382FL},{(-4L)}}};
                int i, j, k;
                if ((safe_mod_func_uint8_t_u_u(((g_1023 = ((((safe_mul_func_int16_t_s_s((((p_14 | ((safe_rshift_func_int8_t_s_s((~(l_1057 = g_970)), (p_12 , (((1UL | l_1085) <= p_11) , func_76((safe_mul_func_uint16_t_u_u(g_164, g_1037)), g_97.f0, l_1006, g_97.f4, g_1037))))) ^ p_11)) , p_12) ^ l_1016), l_1022)) & l_1088[3][0][8]) ^ g_42) , 1UL)) > p_14), l_1013.f0)))
                {
                    int l_1091 = 0xB1E6F201L;
                    if (func_76(g_97.f1, (func_40(g_94) , func_76((!g_97.f4), p_11, g_303[0].f2, func_76(p_14, (safe_lshift_func_int16_t_s_u(func_76((func_40(p_11) ^ p_13), g_825, l_1088[3][0][8], p_14, p_13), l_1006)), l_1057, l_1091, g_303[0].f0), p_11)), g_303[0].f4, p_13, l_45))
                    {
                        int l_1093 = (-1L);
                        l_1092[0] = g_97;
                        l_1093 = 0xF5EA0939L;
                        g_236 = (func_40(((((g_97.f2 = (safe_lshift_func_uint16_t_u_u((g_97.f4 != ((g_125 >= ((g_94 ^= p_12) != (func_40((l_35 = (safe_unary_minus_func_int32_t_s((p_13 = (safe_lshift_func_int8_t_s_u(g_303[0].f3, ((0xD9FA2EAAL <= 0xF3A172DBL) ^ (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(250UL, (safe_add_func_int16_t_s_s(((l_1093 | ((safe_add_func_int8_t_s_s(((l_1057 = p_14) == g_303[0].f3), l_1088[1][0][4])) >= 255UL)) <= 0xDAL), l_1006)))), 1)))))))))) != l_1013.f3))) && g_356)), 2))) , g_94) < 0x940D71D0L) < l_1091)) | l_1088[2][1][6]);
                    }
                    else
                    {
                        struct S0 l_1109[2] = {{0xD9A4L,-1L,0x09F7E9B5L,0xE9L,249UL},{0xD9A4L,-1L,0x09F7E9B5L,0xE9L,249UL}};
                        int i;
                        if (g_1060[7][0])
                            break;
                        p_13 = (safe_sub_func_int32_t_s_s(p_14, l_1091));
                        l_1110 = (l_1013 = l_1109[0]);
                    }
                    return l_35;
                }
                else
                {
                    g_97 = l_1110;
                    for (l_1006 = 5; (l_1006 > 18); l_1006 = safe_add_func_int8_t_s_s(l_1006, 6))
                    {
                        unsigned l_1113 = 0x3461043AL;
                        l_1113 ^= 0xCA0894ACL;
                        g_236 = 0L;
                        return g_1114;
                    }
                }
                l_35 = (safe_div_func_uint32_t_u_u((l_1013.f2 || ((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(g_42, (safe_mod_func_uint16_t_u_u((l_1123 = p_12), g_42)))), (7L && func_76(((safe_rshift_func_int8_t_s_s(func_76(((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(0xC60EL, ((l_1130 , l_1057) , l_1013.f1))), p_14)) >= l_1088[0][3][5]), g_356, p_14, g_1023, g_94), l_1006)) , l_1085), p_14, l_1013.f4, l_1110.f3, l_24)))) == g_1060[7][0])), l_1078));
                for (g_97.f3 = 0; (g_97.f3 != 3); g_97.f3 = safe_add_func_int8_t_s_s(g_97.f3, 1))
                {
                    short l_1153 = (-2L);
                    int l_1165 = 0x34619D8BL;
                    for (p_12 = 1; (p_12 <= 7); p_12 += 1)
                    {
                        int l_1144 = 0x0EDD3988L;
                        int i;
                        p_13 &= g_303[0].f2;
                        l_1144 = (g_236 = (l_1092[p_12] , (safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_1139, (func_76((((safe_sub_func_int32_t_s_s(p_13, ((g_166 <= (p_11 |= g_166)) < ((g_1023 && (l_1013.f2 > 0xA137L)) != (l_1006 == p_12))))) > 0xFF61L) != 0x2013L), g_97.f2, g_236, l_1092[p_12].f0, p_14) != l_1092[0].f3))), p_14)), g_825))));
                        g_303[0] = l_1092[p_12];
                    }
                    l_1130 = g_303[1];
                    g_236 = ((func_40(func_40((safe_mod_func_int16_t_s_s(g_303[0].f1, l_1092[0].f0)))) , l_1092[0].f3) && ((safe_lshift_func_uint8_t_u_s(p_11, 5)) , g_1060[0][2]));
                    if ((0x87L == g_281))
                    {
                        struct S0 l_1154 = {1L,0x50B7L,0x683AA48EL,1UL,0x08L};
                        g_236 ^= (safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(((l_1153 ^= l_1039) , ((l_1154 , g_15) | ((p_13 > (l_1159[1][1][0] = (safe_add_func_uint32_t_u_u((l_1092[0].f0 , (safe_rshift_func_int8_t_s_s(g_1114, ((0x61L || l_1130.f1) <= (p_11 , 0x47FB54B5L))))), l_1130.f3)))) , l_1088[1][0][7]))), l_1130.f0)), g_281));
                        l_1165 ^= (g_236 = ((l_1159[3][6][0] &= p_11) , (l_1130.f2 || (p_12 || (safe_mod_func_int8_t_s_s((g_673 |= (safe_div_func_uint8_t_u_u(func_40((g_356 = (g_825 = l_1164))), g_1023))), l_1013.f0))))));
                    }
                    else
                    {
                        unsigned l_1166 = 0x4C5A95C1L;
                        l_1159[3][2][0] = l_1088[0][3][7];
                        l_1057 = ((func_19(l_1071, (g_1023 = l_1153), p_13, (l_1016 = func_40((+(p_13 <= 0x98L))))) == ((l_1166 = 0xF1L) >= g_1114)) , p_11);
                        return l_1039;
                    }
                }
                if ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s(((1L == p_14) > p_12), func_76(g_1060[7][0], ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(func_19((safe_div_func_int8_t_s_s((((g_1187 = (safe_sub_func_uint16_t_u_u(g_356, (((safe_mul_func_uint16_t_u_u(func_40((safe_add_func_int32_t_s_s(0x94CC8C0DL, (safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s((g_303[0].f4 != g_673), (((1L | 1L) < p_14) | l_1013.f2))) != 65534UL), l_1130.f0))))), l_1159[1][1][0])) && g_280) == 0x815DL)))) < g_1060[5][0]) , l_1013.f0), p_12)), g_1114, p_12, p_14), 1)), g_527)) > p_14), g_1060[7][2], l_1092[0].f0, l_1188[0]))) , p_14), 3)))
                {
                    l_1130 = l_1110;
                }
                else
                {
                    unsigned char l_1201 = 255UL;
                    int l_1215 = (-1L);
                    p_13 = ((safe_rshift_func_uint16_t_u_s(p_13, ((safe_add_func_uint8_t_u_u(248UL, (((safe_lshift_func_int8_t_s_u(p_13, g_303[0].f3)) != (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(g_384, p_14)) < p_14), (p_14 ^ (g_94 = ((l_1110.f2 || p_11) <= 0UL))))), 0xF1CC913AL))) && 249UL))) ^ l_1159[1][1][0]))) , 1L);
                    l_1078 = l_1201;
                    p_13 = (p_12 == (safe_rshift_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((l_1215 = (safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(g_825, 2)), (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(l_1201, (!((((-10L) <= (0x3BD9L && (func_76((safe_rshift_func_int8_t_s_u(0xFEL, p_13)), ((p_11 |= l_1110.f1) <= 1UL), p_14, p_12, g_97.f3) != g_125))) > l_1201) , 0UL)))), l_1110.f2))))))) && g_1216[1]), 2)));
                }
            }
            if (g_97.f4)
                break;
        }
        g_236 = (safe_lshift_func_uint8_t_u_s(l_1092[0].f1, (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((g_97 , g_97.f4), ((g_673 = func_76((p_12 = ((((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((func_40((safe_rshift_func_uint8_t_u_s((p_12 >= g_1023), p_11))) && 0xC7L), (l_35 = 0xE1DED342L))), 3)) | 0x47E5L) < l_1130.f3) >= p_11)), l_1229, g_303[0].f1, p_14, l_45)) != g_280))), 0xF1L))));
    }
    else
    {
        int l_1232 = 0x5B8A6B79L;
        int l_1244 = 0x46DA4F0DL;
        int l_1253 = 7L;
        unsigned l_1294 = 0xF7AFB188L;
        p_13 = (func_40(((safe_rshift_func_int16_t_s_u(l_1232, 5)) , l_1232)) || (func_40(((((safe_lshift_func_int8_t_s_u(func_68(g_917, p_14, ((func_55((safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u(g_280)), g_303[0].f4)), (g_165 <= func_40((safe_div_func_uint16_t_u_u(g_917, p_12)))), p_12, l_1188[0]) ^ l_1022) != g_97.f2), p_14, p_13), 0)) & l_45) >= l_1240) == l_1232)) & l_1232));
        if ((safe_unary_minus_func_int8_t_s((l_1232 ^ (g_1187 = (((l_1244 = (safe_rshift_func_int16_t_s_s(0x397CL, g_125))) , (g_164 ^ (safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((p_11 , (g_42 = (~p_14))), p_13)), 0)))) != (g_236 = (0xD3L && (l_1092[0] , p_14)))))))))
        {
            struct S0 l_1249[4][6] = {{{1L,0xBA71L,0L,0x10L,1UL},{0xF9FBL,0xD90EL,0xA195A6CFL,1UL,0xBEL},{0xF9FBL,0xD90EL,0xA195A6CFL,1UL,0xBEL},{1L,0xBA71L,0L,0x10L,1UL},{1L,0xBA71L,0L,0x10L,1UL},{0xF9FBL,0xD90EL,0xA195A6CFL,1UL,0xBEL}},{{1L,0xBA71L,0L,0x10L,1UL},{1L,0xBA71L,0L,0x10L,1UL},{0xF9FBL,0xD90EL,0xA195A6CFL,1UL,0xBEL},{0xF9FBL,0xD90EL,0xA195A6CFL,1UL,0xBEL},{1L,0xBA71L,0L,0x10L,1UL},{1L,0xBA71L,0L,0x10L,1UL}},{{1L,0xBA71L,0L,0x10L,1UL},{0xF9FBL,0xD90EL,0xA195A6CFL,1UL,0xBEL},{0xF9FBL,0xD90EL,0xA195A6CFL,1UL,0xBEL},{1L,0xBA71L,0L,0x10L,1UL},{1L,0xBA71L,0L,0x10L,1UL},{0xF9FBL,0xD90EL,0xA195A6CFL,1UL,0xBEL}},{{1L,0xBA71L,0L,0x10L,1UL},{1L,0xBA71L,0L,0x10L,1UL},{0xF9FBL,0xD90EL,0xA195A6CFL,1UL,0xBEL},{0xF9FBL,0xD90EL,0xA195A6CFL,1UL,0xBEL},{1L,0xBA71L,0L,0x10L,1UL},{1L,0xBA71L,0L,0x10L,1UL}}};
            int i, j;
            g_303[0] = l_1249[0][5];
            p_13 |= g_236;
        }
        else
        {
            int l_1250 = 4L;
            unsigned char l_1271[5][7][5] = {{{0x07L,0xFAL,0UL,0xFAL,0x71L},{0x57L,250UL,7UL,0UL,255UL},{0x52L,0UL,0x07L,0x0BL,0x0BL},{0x57L,0UL,0x57L,0x25L,1UL},{0x2CL,6UL,255UL,0x52L,1UL},{0x27L,0UL,0xEDL,7UL,0xAFL},{0x7CL,1UL,255UL,1UL,0x7CL}},{{1UL,246UL,0x57L,250UL,7UL},{0xFAL,0x71L,0x07L,255UL,0x29L},{0xCFL,0x57L,7UL,246UL,7UL},{255UL,255UL,6UL,0x07L,0x7CL},{7UL,255UL,251UL,0xEDL,0xAFL},{255UL,3UL,0x29L,0UL,1UL},{0x98L,255UL,255UL,0x98L,1UL}},{{0x71L,255UL,0UL,0x7CL,0x0BL},{251UL,0x57L,0xBFL,0xCFL,255UL},{3UL,0x71L,0x7CL,0x7CL,0x71L},{0xAFL,246UL,0UL,0x98L,1UL},{0UL,1UL,255UL,0UL,0UL},{246UL,0UL,0x25L,0x57L,0x57L},{6UL,3UL,6UL,0UL,0UL}},{{1UL,0x27L,0x98L,0xAFL,0xCFL},{255UL,1UL,0UL,0x52L,0x71L},{1UL,0xCFL,0x98L,0xCFL,1UL},{0x29L,0x2CL,6UL,255UL,0x52L},{0x25L,0xBFL,255UL,246UL,251UL},{0xFAL,6UL,0x52L,0x2CL,0x52L},{246UL,246UL,0x27L,255UL,1UL}},{{0x52L,0x0BL,255UL,0UL,0x71L},{0x98L,7UL,251UL,250UL,0xCFL},{0x07L,0x0BL,0x0BL,0x07L,0UL},{0xBFL,246UL,0xEDL,1UL,0x57L},{255UL,6UL,0x7CL,0xFAL,0x0BL},{7UL,0xBFL,1UL,1UL,0xBFL},{0x71L,0x2CL,3UL,0x07L,0x29L}}};
            int l_1310 = 0xC7F29D02L;
            int l_1338 = 0x83247517L;
            int i, j, k;
            if (l_1250)
            {
                char l_1293[10] = {0x95L,0x95L,0x88L,0x95L,0x95L,0x88L,0x95L,0x95L,0x88L,0x95L};
                int l_1295 = 0xF868E74CL;
                int l_1333 = 0x3E52F6C0L;
                int i;
                if (((safe_mod_func_int8_t_s_s(1L, func_48(p_11, (p_12 > (g_236 == (g_1187 = (p_13 > g_356)))), ((l_1244 , p_11) >= (((l_1253 |= g_42) > 1UL) && p_12)), g_303[0].f0, g_527))) >= g_917))
                {
                    unsigned short l_1260 = 0x96C3L;
                    int l_1269 = 0x57083FD2L;
                    char l_1270 = (-2L);
                    g_236 = (5L | ((safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((p_14 ^ g_356), (safe_lshift_func_int16_t_s_s((l_1260 ^= l_1232), (((((-5L) >= (p_14 | g_97.f1)) , (((func_76(((safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((0xEE7FL <= (p_12 , p_13)), g_356)), p_14)) == 6UL), g_1037)), g_1060[7][0])) && l_1250), l_1269, l_1269, l_1270, g_97.f1) <= p_14) | 0x1FL) >= 0x0DL)) == 0x59L) && 0xF7L))))) , g_384), l_1271[2][2][4])) > p_13));
                    if (l_1269)
                    {
                        unsigned char l_1276 = 0x43L;
                        int l_1296 = 0x283F9F7DL;
                        int l_1309 = 0x401D6358L;
                        l_1296 = (func_60((l_1295 &= (safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(l_45, 0xF21AL)) < ((l_1276 ^ func_19((safe_rshift_func_int8_t_s_u(0x76L, func_60((safe_add_func_uint32_t_u_u(g_15, (g_1187 |= ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(3UL, ((p_12 = p_14) && (l_1250 > (((safe_sub_func_int32_t_s_s(p_11, l_1188[0])) , 0x000FL) > l_1232))))), 7)), l_1276)), 0)) ^ 0xBCA6L)))), g_1060[5][0], l_1293[7], g_280, l_1294))), g_1216[3], g_1037, g_1216[0])) > 0xD2E21F0AL)), 0x1FC1L))), l_1253, l_1250, g_527, p_14) , 0xAF6D0E0AL);
                        l_1296 = ((g_1187 = ((g_917 == 0x55FBF845L) >= ((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_1296, (l_1310 = (l_1296 , (((safe_mod_func_uint8_t_u_u(0xE5L, (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_14, ((((safe_mod_func_uint32_t_u_u(p_11, (g_1060[7][0] , func_55((l_1309 = l_1271[0][0][1]), p_14, p_11, l_1296)))) , 0x6093C874L) , p_14) & l_1244))), p_13)))) == l_35) , p_13))))), 0xD823L)) < l_1296))) <= g_1216[0]);
                    }
                    else
                    {
                        unsigned l_1311 = 4294967287UL;
                        short l_1348 = (-4L);
                        int l_1349 = (-10L);
                        l_1295 |= (((l_1311 >= (safe_lshift_func_uint8_t_u_s(0x33L, ((safe_lshift_func_uint16_t_u_s(p_11, (safe_add_func_uint8_t_u_u(p_14, (g_917 = ((((((p_12 && (l_1188[0] & (safe_rshift_func_int8_t_s_s(g_303[0].f3, 5)))) != ((func_40(l_1271[2][2][4]) >= 5L) > l_1092[0].f4)) ^ l_1293[6]) == l_1271[4][1][4]) < p_11) && p_13)))))) || g_97.f1)))) & p_11) || p_12);
                        p_13 &= 3L;
                        l_1338 ^= ((g_1216[1] |= (l_1295 = (safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((p_11 >= (g_970 = l_1295)), ((((safe_div_func_uint32_t_u_u((((p_12 = func_76(((safe_unary_minus_func_int32_t_s((l_1269 = p_13))) <= 9L), g_165, ((((-1L) & ((safe_add_func_uint8_t_u_u((l_1333 &= g_1114), 255UL)) != ((safe_sub_func_uint32_t_u_u((((((((((g_1114 >= 0UL) && p_13) ^ 0x08BCC96BL) || 1L) > (-7L)) >= 0xBF8AL) || l_1310) , l_1232) == g_673), g_303[0].f2)) , g_825))) , 1UL) , p_13), p_14, g_303[0].f4)) ^ 0x57L) != l_1311), l_1244)) <= l_1260) & 9L) | p_13))), g_281)))) , p_12);
                        l_1349 &= (safe_sub_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(p_12, g_384)) ^ (safe_lshift_func_uint16_t_u_s(g_1060[7][0], (p_14 && l_1345)))), (0xE7L || (func_19(g_1187, (l_1244 = func_19(g_825, p_14, p_13, l_1348)), p_12, g_1060[4][1]) > g_164))));
                    }
                }
                else
                {
                    unsigned char l_1360 = 0x0EL;
                    l_1253 = p_12;
                    l_1345 = (((l_1338 , 0xE6L) & (safe_lshift_func_int16_t_s_s(0L, (safe_rshift_func_uint8_t_u_u((l_35 = (safe_div_func_int16_t_s_s((p_14 = (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(l_1092[0].f3, 65526UL)), ((g_164 , 1UL) , l_1360)))), 65535UL))), 2))))) >= g_1216[1]);
                    l_1338 |= (g_236 = g_673);
                }
            }
            else
            {
                return g_970;
            }
        }
    }
    return g_94;
}







static int func_19(unsigned p_20, unsigned short p_21, unsigned p_22, unsigned p_23)
{
    char l_876 = 0L;
    int l_877 = 0xAB632827L;
    int l_881 = (-1L);
    struct S0 l_922 = {0x2082L,0x4032L,0L,0UL,0x7CL};
    unsigned short l_935 = 0xE589L;
    if (g_384)
    {
        int l_886 = 0xC2F68235L;
        short l_888[1];
        unsigned short l_918 = 0UL;
        char l_954 = (-1L);
        int i;
        for (i = 0; i < 1; i++)
            l_888[i] = 0L;
        for (g_97.f4 = (-6); (g_97.f4 > 58); g_97.f4 = safe_add_func_uint16_t_u_u(g_97.f4, 9))
        {
            unsigned short l_887 = 0x9BA3L;
            int l_903 = 0L;
            short l_916 = 0x0918L;
            struct S0 l_921 = {-1L,0L,0x47818773L,0xB4L,0xA0L};
            short l_936 = (-8L);
            int l_950 = 0x08255188L;
            char l_953[1];
            short l_981 = 6L;
            unsigned short l_983 = 1UL;
            int i;
            for (i = 0; i < 1; i++)
                l_953[i] = 0xFDL;
            if (g_527)
            {
                unsigned l_873 = 0xAB0C6233L;
                int l_878 = 1L;
                for (g_280 = 1; (g_280 > 52); g_280 = safe_add_func_int8_t_s_s(g_280, 1))
                {
                    unsigned l_889 = 0x10EE3DA6L;
                    int l_890[5][8] = {{0x6D9CFA84L,1L,(-7L),0xC6AD464EL,0x283532CEL,0xC6AD464EL,(-7L),1L},{(-7L),1L,0L,0x2D12EB97L,(-7L),0x27D949D2L,(-7L),0x2D12EB97L},{0x283532CEL,1L,0x283532CEL,0x27D949D2L,0x153EE5A9L,0x840F2CACL,(-7L),0x840F2CACL},{0x6D9CFA84L,0x27D949D2L,0L,0x27D949D2L,0x6D9CFA84L,0xC6AD464EL,0x153EE5A9L,0x2D12EB97L},{0x6D9CFA84L,0xC6AD464EL,0x153EE5A9L,0x2D12EB97L,0x153EE5A9L,0xC6AD464EL,0x6D9CFA84L,0x27D949D2L}};
                    int i, j;
                    l_890[0][0] = ((safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(l_873, (l_878 = (safe_mul_func_int16_t_s_s(l_876, l_877))))) | (safe_div_func_int32_t_s_s(func_76((l_877 != (0x8C9E42D0L != ((((l_881 = g_15) > ((((g_281 = 0x80L) >= (safe_rshift_func_uint8_t_u_u(p_20, 7))) & ((safe_rshift_func_int16_t_s_s(p_23, l_886)) > l_887)) , l_888[0])) , l_889) != g_166))), p_23, l_873, p_20, g_527), p_21))) == g_15), (-1L))) >= 7UL);
                }
            }
            else
            {
                int l_891 = (-6L);
                int l_956[5][9][5] = {{{9L,(-1L),9L,(-1L),(-9L)},{0x71D51B33L,0xC56693B7L,(-9L),(-1L),9L},{(-9L),0x5E70094FL,0xC56693B7L,0xC56693B7L,0x5E70094FL},{0x5E70094FL,0x56A12E0BL,(-9L),9L,0L},{(-1L),0x56A12E0BL,9L,1L,(-4L)},{0x17086AA9L,0x5E70094FL,0x5E70094FL,0x17086AA9L,1L},{(-1L),0xC56693B7L,0L,0x29DA4BB2L,1L},{0x5E70094FL,(-1L),(-4L),(-9L),(-4L)},{(-9L),(-9L),1L,0x29DA4BB2L,0L}},{{0x71D51B33L,(-1L),1L,0x17086AA9L,0x5E70094FL},{9L,1L,(-4L),1L,9L},{0x29DA4BB2L,(-1L),0L,9L,(-9L)},{0x29DA4BB2L,(-9L),0x5E70094FL,0xC56693B7L,(-1L)},{0x29DA4BB2L,9L,0x29DA4BB2L,0x5E70094FL,(-4L)},{(-1L),(-1L),(-4L),0x5E70094FL,0x29DA4BB2L},{(-4L),0x56A12E0BL,(-1L),(-1L),0x56A12E0BL},{0x56A12E0BL,0x17086AA9L,(-4L),0x29DA4BB2L,(-9L)},{9L,0x17086AA9L,0x29DA4BB2L,0x71D51B33L,1L}},{{0L,0x56A12E0BL,0x56A12E0BL,0L,0x71D51B33L},{9L,(-1L),(-9L),0xC56693B7L,0x71D51B33L},{0x56A12E0BL,9L,1L,(-4L),1L},{(-4L),(-4L),0x71D51B33L,0xC56693B7L,(-9L)},{(-1L),0x5E70094FL,0x71D51B33L,0L,0x56A12E0BL},{0x29DA4BB2L,0x71D51B33L,1L,0x71D51B33L,0x29DA4BB2L},{0xC56693B7L,0x5E70094FL,(-9L),0x29DA4BB2L,(-4L)},{0xC56693B7L,(-4L),0x56A12E0BL,(-1L),(-1L)},{0x29DA4BB2L,9L,0x29DA4BB2L,0x5E70094FL,(-4L)}},{{(-1L),(-1L),(-4L),0x5E70094FL,0x29DA4BB2L},{(-4L),0x56A12E0BL,(-1L),(-1L),0x56A12E0BL},{0x56A12E0BL,0x17086AA9L,(-4L),0x29DA4BB2L,(-9L)},{9L,0x17086AA9L,0x29DA4BB2L,0x71D51B33L,1L},{0L,0x56A12E0BL,0x56A12E0BL,0L,(-1L)},{0x29DA4BB2L,0x5E70094FL,(-4L),(-1L),(-1L)},{0x17086AA9L,0x29DA4BB2L,0x71D51B33L,1L,0x71D51B33L},{1L,1L,(-1L),(-1L),(-4L)},{9L,0x56A12E0BL,(-1L),(-9L),0x17086AA9L}},{{0xC56693B7L,(-1L),0x71D51B33L,(-1L),0xC56693B7L},{(-1L),0x56A12E0BL,(-4L),0xC56693B7L,1L},{(-1L),1L,0x17086AA9L,0x5E70094FL,0x5E70094FL},{0xC56693B7L,0x29DA4BB2L,0xC56693B7L,0x56A12E0BL,1L},{9L,0x5E70094FL,1L,0x56A12E0BL,0xC56693B7L},{1L,0x17086AA9L,0x5E70094FL,0x5E70094FL,0x17086AA9L},{0x17086AA9L,0L,1L,0xC56693B7L,(-4L)},{0x29DA4BB2L,0L,0xC56693B7L,(-1L),0x71D51B33L},{(-9L),0x17086AA9L,0x17086AA9L,(-9L),(-1L)}}};
                unsigned char l_965[8][2][8] = {{{255UL,0x87L,0x72L,0x10L,0xEFL,0xEFL,0x10L,0x72L},{0x10L,0x10L,0xEDL,0x83L,254UL,252UL,249UL,0xBAL}},{{254UL,252UL,249UL,0xBAL,0x46L,0x72L,0x46L,0xBAL},{252UL,0xEDL,252UL,0x83L,0xC0L,255UL,0UL,252UL}},{{0x83L,249UL,0x46L,0xFEL,254UL,0x87L,0x87L,254UL},{0x83L,0x72L,0x72L,0x83L,0x87L,0xFEL,0UL,0x10L}},{{0xEDL,0xBAL,0xFEL,0UL,0x72L,255UL,0x10L,255UL},{0xC0L,0xBAL,0UL,0xBAL,0xC0L,0xFEL,0x83L,0xEFL}},{{0xFEL,0x72L,0xC0L,252UL,0x11L,0x87L,0xBAL,0xBAL},{0x10L,249UL,0xC0L,0xC0L,249UL,0x10L,0x83L,0x11L}},{{0x11L,255UL,0UL,0xEFL,0xBAL,252UL,0x10L,0xFEL},{0UL,0xEDL,0xFEL,0xEFL,0xFEL,0xEDL,0UL,0x11L}},{{249UL,0xFEL,0x72L,0xC0L,252UL,0x11L,0x87L,0xBAL},{0xEFL,0UL,0x46L,252UL,252UL,0x46L,0UL,0xEFL}},{{249UL,0xEFL,0xEDL,0xBAL,0xFEL,0UL,0x72L,255UL},{0UL,0x10L,254UL,0UL,0xBAL,255UL,0x72L,0UL}}};
                int l_980 = (-1L);
                char l_982 = 0x0BL;
                int i, j, k;
                g_236 = func_76((((g_165 = g_164) == l_891) <= (g_97 , (safe_sub_func_uint32_t_u_u(l_891, g_125)))), l_891, ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((~((l_886 &= (p_20 >= (l_891 | ((0L | l_891) , 0x92EB9333L)))) < g_97.f3)), l_891)) , 4294967291UL), 2L)) , g_356), l_887, l_891);
                if ((safe_lshift_func_int16_t_s_s(p_23, 3)))
                {
                    int l_919 = 0x6177A61BL;
                    struct S0 l_920 = {0xE4C7L,0L,1L,0xE9L,0x7CL};
                    for (l_876 = 0; (l_876 == 10); l_876 = safe_add_func_int8_t_s_s(l_876, 6))
                    {
                        short l_902 = 0L;
                        l_902 = (g_303[0].f1 ^ g_303[0].f0);
                        l_886 ^= l_891;
                        l_903 |= (g_236 = ((g_94 >= 0x63L) ^ 0xE2L));
                        l_881 = ((g_97.f2 & g_42) < 1UL);
                    }
                    g_236 &= (l_876 <= (safe_mod_func_int32_t_s_s(((p_21 || ((l_886 != p_23) < g_97.f2)) == ((safe_mod_func_uint8_t_u_u((g_280 = (l_918 = (((func_76(p_21, (safe_mod_func_uint32_t_u_u((l_881 = (g_917 = (+(~(g_42 = (safe_mul_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_s(p_20, 15)) > func_76(l_888[0], l_876, l_891, l_916, l_876)) & g_97.f4) > g_164), 9UL))))))), p_21)), l_877, l_876, p_21) , 0x8A81L) || 0x7623L) ^ 0x4DL))), l_919)) < p_20)), p_21)));
                    l_921 = l_920;
                    if (g_280)
                        break;
                }
                else
                {
                    short l_952[5][8] = {{0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L},{0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L},{0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L},{0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L},{0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L,0xB068L}};
                    unsigned char l_979 = 0xCAL;
                    int l_988 = 0xC61F48F1L;
                    int i, j;
                    l_922 = g_303[0];
                    for (g_166 = 0; (g_166 <= 9); g_166 = safe_add_func_uint8_t_u_u(g_166, 1))
                    {
                        int l_949 = 0xF32F9BADL;
                        int l_951[2][10][5] = {{{(-5L),1L,0x2C43DC5DL,0x2C43DC5DL,1L},{(-5L),1L,0x2C43DC5DL,0x2C43DC5DL,1L},{(-5L),1L,0x2C43DC5DL,0x2C43DC5DL,1L},{(-5L),1L,0x2C43DC5DL,0x2C43DC5DL,1L},{(-5L),1L,0x2C43DC5DL,0x2C43DC5DL,1L},{(-5L),1L,0x2C43DC5DL,0x2C43DC5DL,1L},{(-5L),1L,0x2C43DC5DL,0x2C43DC5DL,1L},{(-5L),1L,0x2C43DC5DL,0x2C43DC5DL,1L},{(-5L),1L,0x2C43DC5DL,0x2C43DC5DL,1L},{(-5L),1L,0x2C43DC5DL,0x2C43DC5DL,1L}},{{(-5L),1L,(-1L),(-1L),0x2C43DC5DL},{1L,0x2C43DC5DL,(-1L),(-1L),0x2C43DC5DL},{1L,0x2C43DC5DL,(-1L),(-1L),0x2C43DC5DL},{1L,0x2C43DC5DL,(-1L),(-1L),0x2C43DC5DL},{1L,0x2C43DC5DL,(-1L),(-1L),0x2C43DC5DL},{1L,0x2C43DC5DL,(-1L),(-1L),0x2C43DC5DL},{1L,0x2C43DC5DL,(-1L),(-1L),0x2C43DC5DL},{1L,0x2C43DC5DL,(-1L),(-1L),0x2C43DC5DL},{1L,0x2C43DC5DL,(-1L),(-1L),0x2C43DC5DL},{1L,0x2C43DC5DL,(-1L),(-1L),0x2C43DC5DL}}};
                        int l_955 = 0x7474FCBAL;
                        int i, j, k;
                        l_881 &= p_20;
                        g_236 &= (((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((g_303[0].f0 != (safe_rshift_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s(l_887, p_20)) | g_97.f2) , (g_356 && (p_21 || l_935))) , (l_886 ^ g_673)), g_303[0].f2))), 0x5FL)), 5)), p_21)) || p_21) != p_21);
                        l_956[2][7][2] = func_76(l_886, p_20, p_23, (l_955 = (g_236 = ((l_951[1][1][2] = func_40((((l_936 , func_76(p_23, (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_303[0].f3, (safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s(((((l_951[1][1][2] |= ((safe_mod_func_int8_t_s_s((l_916 == (((safe_add_func_uint8_t_u_u(0xE2L, (l_949 || l_950))) > p_20) , p_21)), 0x43L)) <= 0x60L)) , 0xD3539FD5L) , g_97.f4) >= g_303[0].f1), l_887)), p_20)))), l_921.f0)), p_20, l_952[0][3], l_953[0])) > l_954) && p_21))) != p_23))), p_21);
                        l_950 = ((l_891 , ((((safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s(func_76(p_21, (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((g_165 != func_76(p_23, l_965[0][0][4], l_952[4][7], (p_21 , ((((func_40(p_22) && l_891) > 4294967286UL) != g_825) && 4L)), l_951[0][8][1])), 11)), 0x4ED2L)), g_673, l_952[3][6], g_527), g_125)), g_825)) > 6L) , 1UL) > p_23)) && p_21);
                    }
                    if ((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_303[0].f0, 5)), l_956[4][3][2])))
                    {
                        if (l_952[3][4])
                            break;
                        l_982 = ((+func_76(g_94, (p_21 , p_20), (g_970 = l_922.f4), g_303[0].f3, (l_981 = (safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_876, p_22)), l_979)) > p_21), l_980)), l_922.f1))))) | 4294967290UL);
                    }
                    else
                    {
                        unsigned short l_991[9] = {0x9324L,0x9324L,0x9324L,0x9324L,0x9324L,0x9324L,0x9324L,0x9324L,0x9324L};
                        int i;
                        g_303[0] = (((((l_983 = l_921.f1) >= func_76((safe_rshift_func_int8_t_s_s((g_97.f3 && 0L), ((0x0DA7L & p_22) >= (safe_div_func_uint8_t_u_u((l_988 = l_886), func_40((safe_add_func_uint8_t_u_u(248UL, l_950)))))))), l_886, g_917, g_384, l_991[7])) , l_922.f4) != 0x8613812FL) , l_922);
                        l_950 |= 0x20056E0BL;
                        g_303[2] = g_303[6];
                    }
                    for (g_356 = 0; (g_356 > 44); ++g_356)
                    {
                        return l_953[0];
                    }
                }
            }
            l_921 = (p_20 , l_922);
            l_903 = (g_236 |= (l_950 = (((safe_mod_func_uint32_t_u_u(0x129EFDDDL, g_15)) ^ (func_40(((safe_mul_func_uint16_t_u_u((((p_20 = 4294967294UL) > func_40((g_825 = g_673))) != (safe_add_func_uint32_t_u_u((g_280 < g_384), (g_94 != (safe_lshift_func_int8_t_s_s((((safe_mod_func_int16_t_s_s((g_97.f1 = p_22), 0xFB2FL)) != 0xE5L) ^ 0xEFL), p_23)))))), 3L)) >= g_97.f2)) | g_303[0].f1)) | 6L)));
        }
        return p_23;
    }
    else
    {
        l_881 &= p_23;
    }
    l_881 = 0x35AB4EB1L;
    return p_20;
}







static unsigned short func_27(int p_28)
{
    unsigned l_54 = 0x6AC39B39L;
    char l_128 = (-1L);
    int l_235 = 3L;
    int l_858 = (-1L);
    unsigned char l_863 = 1UL;
    unsigned l_864 = 0x381BAF98L;
    l_858 = (safe_rshift_func_int8_t_s_u((-1L), func_48(l_54, (l_235 = func_55(func_40(func_60((p_28 , (((~(safe_sub_func_int8_t_s_s((-4L), ((func_40((func_68(((((1L > 7UL) , ((((safe_lshift_func_int8_t_s_s(func_76(p_28, p_28, p_28, p_28, l_54), g_42)) , l_54) != g_42) ^ (-1L))) > l_54) , p_28), g_42, p_28, l_54, g_15) && p_28)) && 3L) || l_54)))) , l_54) ^ p_28)), l_128, p_28, l_128, g_97.f1)), g_165, l_54, l_128)), g_236, g_236, g_236)));
    g_236 = ((((g_303[4] , 0x3CL) & g_166) || 0xAD88154DL) == func_55(g_384, g_97.f0, (l_858 ^= 1UL), ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((g_97.f4 < ((((l_235 |= (l_128 , l_863)) < 65526UL) != l_54) , 65535UL)) && l_235), l_864)), g_94)) == l_863)));
    return l_863;
}







static short func_40(unsigned p_41)
{
    char l_43[1];
    int l_44[4];
    int i;
    for (i = 0; i < 1; i++)
        l_43[i] = 0x3BL;
    for (i = 0; i < 4; i++)
        l_44[i] = 0x31DDA87BL;
    g_42 = g_15;
    for (p_41 = 0; (p_41 <= 0); p_41 += 1)
    {
        int i;
        l_44[1] |= 4L;
        if (l_43[p_41])
            break;
    }
    return l_43[0];
}







static unsigned char func_48(char p_49, int p_50, unsigned p_51, int p_52, unsigned short p_53)
{
    short l_245[5][4] = {{0x1C75L,0xEE7EL,1L,0xEE7EL},{0x0B1DL,0x1593L,0x4AEBL,1L},{0xEE7EL,0x1593L,0x1593L,0xEE7EL},{0x1593L,0xEE7EL,0x0B1DL,0x1C75L},{0x1593L,0x0B1DL,0x1593L,0x4AEBL}};
    int l_259 = (-6L);
    struct S0 l_260 = {0xFCF3L,-1L,0x343CAFA4L,0xCBL,255UL};
    struct S0 l_261[5][2] = {{{-1L,0xD29EL,0xF56E04B8L,0x60L,1UL},{-1L,0xD29EL,0xF56E04B8L,0x60L,1UL}},{{-1L,0xD29EL,0xF56E04B8L,0x60L,1UL},{-1L,0xD29EL,0xF56E04B8L,0x60L,1UL}},{{-1L,0xD29EL,0xF56E04B8L,0x60L,1UL},{-1L,0xD29EL,0xF56E04B8L,0x60L,1UL}},{{-1L,0xD29EL,0xF56E04B8L,0x60L,1UL},{-1L,0xD29EL,0xF56E04B8L,0x60L,1UL}},{{-1L,0xD29EL,0xF56E04B8L,0x60L,1UL},{-1L,0xD29EL,0xF56E04B8L,0x60L,1UL}}};
    int l_279[4] = {(-1L),(-1L),(-1L),(-1L)};
    unsigned char l_327[3][4][5] = {{{0UL,1UL,255UL,1UL,0UL},{4UL,255UL,0UL,255UL,1UL},{0x45L,4UL,0x18L,1UL,0xA5L},{0UL,0UL,1UL,255UL,1UL}},{{1UL,1UL,246UL,0x18L,249UL},{1UL,0x3EL,249UL,0UL,252UL},{0UL,255UL,0xA5L,1UL,255UL},{0x45L,0x3EL,0x3EL,0x45L,0xF9L}},{{4UL,1UL,0x3EL,249UL,0UL},{249UL,0UL,0xA5L,0UL,0x3EL},{255UL,4UL,249UL,249UL,4UL},{252UL,255UL,246UL,0x45L,4UL}}};
    int l_340 = 0xE6E4FB6FL;
    int l_355 = 0x210B18ADL;
    short l_588 = (-1L);
    char l_607 = 3L;
    unsigned char l_694[1];
    char l_837 = (-7L);
    struct S0 l_849[2] = {{-2L,-2L,0x89200822L,0x0FL,0xB5L},{-2L,-2L,0x89200822L,0x0FL,0xB5L}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_694[i] = 0x3BL;
    if ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(l_245[3][3], (g_166 |= l_245[3][3]))) >= ((0x844EL | (g_94 = g_94)) > (safe_add_func_uint16_t_u_u(0xF3FEL, l_245[1][1])))), 3)), 1)) != (safe_rshift_func_int8_t_s_u((p_51 , (((p_50 , (249UL <= (-1L))) || l_245[2][2]) != g_97.f2)), l_245[3][3]))), 0L)))
    {
        int l_254 = 1L;
        l_259 = (safe_sub_func_int8_t_s_s(((g_42 && l_254) ^ (l_245[2][2] >= g_97.f3)), ((((safe_rshift_func_int8_t_s_s(0x24L, 4)) >= (((safe_add_func_int8_t_s_s(((func_76(l_245[4][3], l_245[3][3], func_76((l_259 <= 0xD27CL), l_254, p_51, p_53, g_165), l_254, p_49) > p_53) | g_15), p_50)) , 1L) || (-1L))) & l_245[3][2]) >= l_245[3][3])));
        for (g_94 = 0; (g_94 <= 3); g_94 += 1)
        {
            if (p_52)
                break;
            for (g_236 = 0; (g_236 <= 3); g_236 += 1)
            {
                int i, j;
                return l_245[(g_94 + 1)][g_236];
            }
        }
        l_261[1][1] = (l_260 = g_97);
    }
    else
    {
        char l_266 = (-1L);
        int l_267 = 4L;
        unsigned char l_284 = 0x2FL;
        unsigned char l_289[6][4][4] = {{{0x6CL,0x99L,2UL,255UL},{0x18L,0xEAL,0x6CL,255UL},{0x99L,0x99L,0x99L,1UL},{0x99L,1UL,0x6CL,1UL}},{{0x18L,1UL,2UL,1UL},{0x6CL,0x99L,2UL,255UL},{0x18L,0xEAL,0x6CL,255UL},{0x99L,0x99L,0x99L,1UL}},{{0x99L,1UL,0x6CL,1UL},{0x18L,1UL,0x99L,0xEAL},{0x18L,255UL,0x99L,1UL},{250UL,0x99L,0x18L,1UL}},{{0x6CL,255UL,0x6CL,0xEAL},{0x6CL,0xEAL,0x18L,1UL},{250UL,0xEAL,0x99L,0xEAL},{0x18L,255UL,0x99L,1UL}},{{250UL,0x99L,0x18L,1UL},{0x6CL,255UL,0x6CL,0xEAL},{0x6CL,0xEAL,0x18L,1UL},{250UL,0xEAL,0x99L,0xEAL}},{{0x18L,255UL,0x99L,1UL},{250UL,0x99L,0x18L,1UL},{0x6CL,255UL,0x6CL,0xEAL},{0x6CL,0xEAL,0x18L,1UL}}};
        struct S0 l_302 = {0xC1C1L,0x29E8L,0xEF5591ADL,4UL,0xD1L};
        int l_333 = 6L;
        int l_385 = (-7L);
        unsigned short l_437 = 1UL;
        int i, j, k;
        for (p_50 = (-15); (p_50 >= (-18)); p_50--)
        {
            int l_268 = (-1L);
            g_281 ^= ((g_280 &= ((p_53 ^= p_49) , func_55(((safe_sub_func_uint32_t_u_u(l_266, (l_267 = (p_51 <= g_97.f3)))) , ((l_268 &= 0x8CCBL) , (safe_mul_func_int16_t_s_s((l_279[2] = (l_268 , (l_259 = (safe_mul_func_uint8_t_u_u((p_50 | (1L > (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(p_53, p_49)), 0x39L)), g_125)))), g_236))))), g_165)))), g_166, g_94, g_166))) == 65527UL);
            l_267 = (safe_mod_func_uint16_t_u_u(((func_60((p_49 != (g_281 = (+(((-1L) <= p_49) , p_49)))), (((p_52 ^ 1UL) ^ (~l_268)) || 0UL), l_284, g_236, g_166) && l_268) || g_97.f3), g_165));
            for (l_260.f2 = 0; (l_260.f2 <= 24); l_260.f2 = safe_add_func_int16_t_s_s(l_260.f2, 3))
            {
                for (g_280 = (-10); (g_280 < 35); g_280++)
                {
                    return l_268;
                }
                l_279[2] = func_76(p_52, p_50, l_289[1][3][0], (p_53 && 65528UL), p_53);
                if (g_94)
                    break;
            }
        }
        for (l_266 = 0; (l_266 > (-20)); l_266 = safe_sub_func_int32_t_s_s(l_266, 7))
        {
            for (g_42 = (-28); (g_42 == 44); ++g_42)
            {
                g_236 |= p_52;
                g_236 |= (p_53 != 0x7B029217L);
            }
        }
        if ((safe_mul_func_int16_t_s_s((p_50 > ((func_68(l_289[0][1][2], g_97.f2, (func_76(g_15, ((((254UL >= ((safe_div_func_int32_t_s_s(p_50, (safe_rshift_func_int16_t_s_u(p_50, (g_97 , (safe_mul_func_int16_t_s_s(((g_303[0] = (l_302 = l_302)) , 0xA4DDL), p_51))))))) >= g_97.f2)) < 4294967290UL) | l_261[1][1].f4) <= g_97.f3), l_266, l_260.f3, g_125) != 65535UL), l_260.f1, l_289[3][1][1]) == (-1L)) | 0xEBD1L)), g_97.f2)))
        {
            unsigned l_316 = 0xEE994656L;
            struct S0 l_317 = {0x4327L,0x8C99L,0xA305A860L,0x32L,0xA4L};
            for (l_302.f0 = 0; (l_302.f0 == 16); l_302.f0 = safe_add_func_uint32_t_u_u(l_302.f0, 8))
            {
                unsigned l_315 = 0UL;
                l_267 = (l_279[2] |= (((safe_rshift_func_int8_t_s_s(g_97.f4, ((safe_add_func_int16_t_s_s((func_40(l_245[3][3]) || (safe_rshift_func_uint16_t_u_s(65528UL, 11))), ((((safe_mul_func_int16_t_s_s(g_97.f1, (1L ^ (g_303[0].f4 , (safe_unary_minus_func_int16_t_s((l_315 >= (l_316 & g_280)))))))) > 0x7FL) <= 0x8E7C1B22L) , g_236))) < 0x47218B3BL))) < l_261[1][1].f4) , g_281));
                if (p_49)
                    break;
                l_261[1][1] = l_317;
            }
        }
        else
        {
            short l_324 = (-1L);
            int l_332 = 0x2CE6AA63L;
            int l_341[10][8][3] = {{{0L,(-5L),1L},{0L,0L,0xDCEE5B47L},{1L,0x2B7896BAL,0L},{0xDCEE5B47L,0x5A7FF40AL,0x32E4B271L},{0xDFF3299AL,(-10L),0xAC31B227L},{0xC55EF8A0L,0xDCEE5B47L,0x32E4B271L},{0L,0L,0L},{(-1L),0L,0xDCEE5B47L}},{{0xDCEE5B47L,(-5L),1L},{0xAC31B227L,(-5L),0xAC31B227L},{0x870B41F5L,0L,(-4L)},{(-4L),0L,0L},{1L,(-4L),1L},{(-4L),(-5L),0L},{0x8C2311EFL,0L,0x5A7FF40AL},{0xDFF3299AL,1L,0xC55EF8A0L}},{{(-1L),1L,7L},{0x5A7FF40AL,7L,7L},{(-4L),0x2B7896BAL,0xC55EF8A0L},{(-5L),0xDCEE5B47L,0x5A7FF40AL},{1L,0xB9098913L,0L},{0xAC31B227L,1L,1L},{(-10L),0xB9098913L,0x32E4B271L},{(-4L),0xDCEE5B47L,(-4L)}},{{1L,0x2B7896BAL,0x5A7FF40AL},{1L,7L,0x870B41F5L},{1L,1L,(-4L)},{1L,1L,0xB9098913L},{(-4L),0L,0L},{(-10L),(-5L),0x5A7FF40AL},{0xAC31B227L,(-4L),0L},{1L,1L,0xB9098913L}},{{(-5L),0x32E4B271L,(-4L)},{(-4L),0L,0x870B41F5L},{0x5A7FF40AL,0L,0x5A7FF40AL},{(-1L),0x32E4B271L,(-4L)},{0xDFF3299AL,1L,0x32E4B271L},{0x8C2311EFL,(-4L),1L},{(-4L),(-5L),0L},{0x8C2311EFL,0L,0x5A7FF40AL}},{{0xDFF3299AL,1L,0xC55EF8A0L},{(-1L),1L,7L},{0x5A7FF40AL,7L,7L},{(-4L),0x2B7896BAL,0xC55EF8A0L},{(-5L),(-4L),0xB9098913L},{0x2B7896BAL,1L,0x8C2311EFL},{0L,0xDCEE5B47L,(-1L)},{7L,1L,1L}},{{0xDFF3299AL,(-4L),(-10L)},{(-4L),0x870B41F5L,0xB9098913L},{0xDCEE5B47L,0xAC31B227L,(-5L)},{0xDCEE5B47L,0xDCEE5B47L,0xDFF3299AL},{(-4L),(-1L),1L},{0xDFF3299AL,0L,1L},{7L,0xC55EF8A0L,0xB9098913L},{0L,0xDFF3299AL,1L}},{{0x2B7896BAL,0xDCEE5B47L,1L},{0x32E4B271L,1L,0xDFF3299AL},{0xDFF3299AL,0L,(-5L)},{0xB9098913L,0L,0xB9098913L},{0L,1L,(-10L)},{(-5L),0xDCEE5B47L,1L},{1L,0xDFF3299AL,(-1L)},{0xDFF3299AL,0xC55EF8A0L,0x8C2311EFL}},{{1L,0L,0xB9098913L},{(-5L),(-1L),0x5A7FF40AL},{0L,0xDCEE5B47L,0xAC31B227L},{0xB9098913L,0xAC31B227L,0xAC31B227L},{0xDFF3299AL,0x870B41F5L,0x5A7FF40AL},{0x32E4B271L,(-4L),0xB9098913L},{0x2B7896BAL,1L,0x8C2311EFL},{0L,0xDCEE5B47L,(-1L)}},{{7L,1L,1L},{0xDFF3299AL,(-4L),(-10L)},{(-4L),0x870B41F5L,0xB9098913L},{0xDCEE5B47L,0xAC31B227L,(-5L)},{(-4L),(-4L),(-10L)},{(-4L),(-5L),0x8C2311EFL},{(-10L),1L,0xDCEE5B47L},{0xC55EF8A0L,0xAC31B227L,0L}}};
            int l_357 = (-5L);
            char l_358 = 0xF9L;
            struct S0 l_396[4] = {{-1L,-1L,-1L,0x23L,9UL},{-1L,-1L,-1L,0x23L,9UL},{-1L,-1L,-1L,0x23L,9UL},{-1L,-1L,-1L,0x23L,9UL}};
            int l_481 = 0x0E8DBB14L;
            unsigned char l_483 = 1UL;
            unsigned short l_531[5] = {8UL,8UL,8UL,8UL,8UL};
            int l_560 = 0xDDAC6206L;
            int l_563 = 0x905B9DC8L;
            int i, j, k;
            if ((g_236 |= (+(safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(l_324, (safe_rshift_func_int16_t_s_s(((func_40(l_327[0][3][0]) == (g_97.f2 || (safe_sub_func_int8_t_s_s(l_302.f1, (safe_sub_func_int16_t_s_s((-8L), (((l_260 , g_281) && (l_302.f2 > g_97.f0)) && p_53))))))) | g_97.f3), g_15)))), l_260.f2)) || 9UL), l_261[1][1].f4)))))
            {
                l_333 = (l_332 = g_97.f3);
            }
            else
            {
                char l_336 = 0x8DL;
                int l_337[9][3] = {{3L,3L,3L},{1L,1L,1L},{3L,3L,3L},{1L,1L,1L},{3L,3L,3L},{1L,1L,1L},{3L,3L,3L},{1L,1L,1L},{3L,3L,3L}};
                int i, j;
                g_236 = (g_125 && p_50);
                l_336 = (safe_lshift_func_int8_t_s_s(g_97.f0, 7));
                l_337[6][0] = p_51;
            }
            if ((l_341[9][5][0] = (func_40(g_97.f1) , (((p_51 = ((p_51 == (func_68((g_97.f2 & g_303[0].f1), p_53, (l_332 |= (safe_lshift_func_uint16_t_u_s(6UL, p_51))), (l_340 = (p_50 > 0x230CL)), l_266) | p_53)) | p_49)) , 0x54L) || l_332))))
            {
                int l_342[8][6][3] = {{{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)},{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)},{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)},{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)},{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)},{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)}},{{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)},{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)},{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)},{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)},{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)},{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)}},{{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)},{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)},{0x3D5AF8A9L,0x3D5AF8A9L,(-3L)},{0x3D5AF8A9L,0x3D5AF8A9L,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L}},{{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L}},{{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L}},{{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L}},{{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L}},{{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L},{0xEDF6F51FL,0xEDF6F51FL,0x3D5AF8A9L}}};
                int i, j, k;
                g_97 = g_97;
                g_236 &= (l_267 = l_342[5][1][1]);
                g_236 = g_280;
            }
            else
            {
                unsigned short l_404 = 0x5C3FL;
                char l_426 = 0xE6L;
                int l_427 = 0x4E938482L;
                if (((p_52 < l_341[9][5][0]) != (((l_357 &= ((safe_lshift_func_uint16_t_u_u(g_303[0].f4, (safe_lshift_func_uint16_t_u_u((((p_53 = l_332) == (safe_add_func_uint8_t_u_u(l_324, p_50))) <= (g_125 <= p_51)), 10)))) <= (l_267 ^= func_76(((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(func_76((g_97.f4 |= (safe_mul_func_int8_t_s_s((func_76(p_49, p_51, l_341[9][5][0], l_355, g_356) > g_42), 0x3BL))), g_165, p_50, g_356, g_303[0].f4), 9L)), 0UL)) == 0UL), g_97.f3, g_166, l_327[0][3][0], g_97.f0)))) && g_236) == l_358)))
                {
                    int l_381 = (-1L);
                    for (l_332 = 0; (l_332 <= 16); l_332 = safe_add_func_int8_t_s_s(l_332, 5))
                    {
                        return g_125;
                    }
                    l_381 = (safe_div_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_50, 7)), (l_333 || (((safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s(l_289[3][2][3], (safe_sub_func_uint8_t_u_u(g_164, (safe_add_func_int8_t_s_s(((!(p_50 , ((g_303[0] , l_341[2][2][1]) > (safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(l_381, (g_384 = (((((func_76((safe_sub_func_uint8_t_u_u((g_97.f3 ^= (!g_281)), 0x86L)), l_381, p_53, g_280, g_236) >= l_333) > g_303[0].f4) >= g_356) == 4294967290UL) >= g_15)))) < g_281), 65527UL))))) && 1UL), 0x51L)))))), g_42)) , 0x5ED0L) & p_50)))), 0UL)) || p_53), l_385));
                    g_236 = func_40((safe_rshift_func_uint16_t_u_s(g_384, l_302.f4)));
                }
                else
                {
                    unsigned l_403[5] = {0x9DC93415L,0x9DC93415L,0x9DC93415L,0x9DC93415L,0x9DC93415L};
                    int l_405[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_405[i] = (-9L);
                    l_332 ^= (safe_lshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s((((((safe_div_func_int16_t_s_s((g_303[0].f0 = func_55(p_50, (safe_mul_func_int16_t_s_s((l_261[1][1].f2 <= ((l_405[0] &= (((l_279[2] = (func_40(func_55(func_68((l_396[0] , (safe_mul_func_uint16_t_u_u(((((g_281 = l_267) > func_60(func_55(((g_97.f1 = (safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(p_53, (l_403[0] & (((p_52 , (l_279[2] = 0x52L)) != ((func_68(g_97.f0, l_403[0], g_97.f0, l_324, p_50) || p_51) != p_51)) < g_303[0].f3)))), p_51))) > 65535UL), g_97.f0, p_51, l_404), p_53, p_53, g_303[0].f1, g_384)) & 7UL) < g_236), g_356))), l_260.f2, p_52, p_49, g_303[0].f0), l_261[1][1].f4, p_50, p_53)) || 0xF5E0L)) , l_279[2]) | g_384)) > l_333)), 65535UL)), g_303[0].f2, l_260.f4)), 65535UL)) | p_51) || 1L) | 0x167CL) < l_289[1][3][0]), 5L)), l_260.f3));
                }
                l_261[2][1] = ((safe_rshift_func_uint16_t_u_s(8UL, 15)) , g_303[5]);
                l_427 &= (l_341[9][5][0] , func_40((safe_mul_func_uint8_t_u_u((0xC2L || ((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(g_125, ((l_341[9][5][0] = func_76((l_267 = (p_50 , p_53)), (((((g_164 != func_76((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u((l_279[0] = (l_333 = ((0x44L <= ((func_76(l_404, (safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(func_40(func_40(((safe_div_func_uint8_t_u_u(p_52, 0x7BL)) < g_356))), p_51)), 0xF5L)), l_404, g_97.f3, l_245[4][3]) || g_15) != l_404)) , l_404))), p_52)) & g_303[0].f3) && 0x7FL), 0)), l_260.f2, l_340, l_245[3][3], l_261[1][1].f3)) < p_52) ^ p_49) & l_404) == l_404), g_280, p_53, g_303[0].f2)) , (-1L)))), p_51)) != l_426)), 1UL))));
            }
            for (g_15 = 3; (g_15 >= 0); g_15 -= 1)
            {
                short l_428 = 0xE0ADL;
                int l_446 = 1L;
                short l_447 = 2L;
                unsigned short l_503 = 65527UL;
                l_332 |= (func_40(((l_437 = func_76(l_396[0].f3, l_428, l_261[1][1].f4, (safe_add_func_uint16_t_u_u(l_396[0].f1, ((((((safe_sub_func_int8_t_s_s((l_333 ^= (safe_rshift_func_int16_t_s_u((((g_42 ^ p_52) > 0x72L) == ((l_267 = p_49) & (((l_279[2] = func_76(((((safe_lshift_func_uint8_t_u_u((g_97.f3 &= (func_76((((l_340 = g_42) != 246UL) || l_385), p_51, p_51, g_280, p_52) >= 0xF6078300L)), l_396[0].f1)) || p_50) , l_341[8][2][0]) , 248UL), p_50, p_52, g_15, p_52)) && l_302.f4) , 0xFB90L))), p_53))), p_52)) > g_97.f4) & l_302.f0) | 0x86C484FBL) <= 0xBADFL) > g_303[0].f3))), g_356)) >= 1UL)) & g_281);
                if (func_40(((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((((g_303[0].f2 & l_289[3][3][3]) , (l_446 = (g_97.f4 >= (0x0317L & (p_52 && (l_245[3][1] >= (+0x662841F4L))))))) , (((l_447 = g_125) < (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(0xA405L, g_384)), 0x4CL))) | p_51)), 1)) >= 0L), 0x6B3DL)), l_302.f3)) || p_53)))
                {
                    unsigned short l_466[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_466[i] = 0x8FCBL;
                    l_259 ^= (safe_lshift_func_int8_t_s_u((g_303[0].f0 ^ (((safe_add_func_int32_t_s_s(((g_236 = (l_446 = (p_49 >= ((safe_sub_func_uint32_t_u_u((g_125 > p_53), 7L)) , g_125)))) ^ (safe_add_func_uint16_t_u_u(func_76((l_267 = (safe_mod_func_uint32_t_u_u((l_279[2] |= ((safe_add_func_uint8_t_u_u(p_51, (safe_mul_func_uint8_t_u_u((+0UL), func_76(((g_125 > l_466[1]) , 1UL), l_385, l_466[4], l_341[9][5][0], g_280))))) || l_447)), g_97.f3))), l_302.f0, p_51, g_281, p_53), g_303[0].f4))), p_53)) & g_303[0].f0) , l_261[1][1].f3)), p_50));
                }
                else
                {
                    int l_482 = 0xBC187AC4L;
                    int i;
                    if (((safe_mod_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((l_396[g_15] , l_446), (safe_div_func_int8_t_s_s((l_482 = (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_51, (((safe_add_func_uint32_t_u_u((((l_396[g_15].f1 , l_447) == l_446) || (safe_add_func_uint32_t_u_u((((g_236 = (p_52 == func_40(((l_341[3][3][1] | (p_50 <= 0L)) ^ p_50)))) | l_284) & p_53), g_97.f4))), (-1L))) & g_97.f1) <= l_481))), l_289[3][0][3]))), 0x7AL)))) ^ g_303[0].f4), l_483)) == g_97.f1))
                    {
                        unsigned l_496 = 4294967295UL;
                        l_446 = ((((g_97.f0 || ((g_384 , ((safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((((l_437 | 4294967295UL) || ((safe_add_func_uint8_t_u_u(g_97.f3, g_164)) != (p_53 = ((l_302.f2 , 0x5CBD456AL) == (safe_rshift_func_int16_t_s_s(l_284, 1)))))) <= l_496), g_356)) , 1L), p_50)) != g_164), l_327[1][3][2])) && g_97.f4)) != 1UL)) , g_15) >= p_51) ^ 4L);
                        g_236 |= (((safe_mul_func_int16_t_s_s(((g_303[0].f4 | ((g_303[0] , g_97.f1) || (safe_div_func_uint16_t_u_u(p_52, (safe_mod_func_int8_t_s_s(l_396[g_15].f3, (g_164 = (l_358 | (!(((l_503 , (safe_lshift_func_uint8_t_u_u((p_51 == (((safe_add_func_uint32_t_u_u((((g_281 ^= ((p_52 <= l_503) , p_52)) < g_164) <= l_358), p_53)) || g_97.f0) , g_356)), p_49))) | p_51) , l_447)))))))))) | g_303[0].f2), l_396[0].f4)) & g_384) == g_97.f2);
                        l_396[g_15] = ((~g_303[0].f3) , l_396[0]);
                        l_357 ^= func_76((safe_add_func_int32_t_s_s(0x64F95456L, l_302.f3)), (p_51 <= (1UL | (+(safe_sub_func_int8_t_s_s((p_50 >= g_97.f0), l_341[8][3][2]))))), ((func_68((safe_lshift_func_uint8_t_u_s((1UL == g_303[0].f2), p_50)), g_97.f3, g_97.f3, g_97.f0, l_245[3][3]) != g_303[0].f1) < 5UL), p_49, p_49);
                    }
                    else
                    {
                        unsigned char l_516 = 9UL;
                        int l_528 = 5L;
                        l_267 = ((safe_lshift_func_uint16_t_u_s(l_516, 0)) < (p_49 > (+p_52)));
                        l_528 = (safe_div_func_uint32_t_u_u(((((((!((l_267 = ((g_527 ^= (0x7D307D6FL == ((g_165 = func_76((safe_rshift_func_uint8_t_u_u(l_279[3], 3)), g_94, (((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((l_396[g_15].f0 || (((g_42 = p_52) == 0x4D30234BL) , ((-1L) & (g_303[4] , g_42)))) <= p_53), g_97.f1)) != l_302.f0), g_97.f4)), g_97.f3)) >= g_280) , g_94), p_50, g_164)) == g_303[0].f2))) | 0x13513E65L)) , p_51)) >= 255UL) ^ l_396[0].f1) >= l_260.f2) && l_396[g_15].f4) < p_52), p_51));
                        g_236 = 0xAA3851B1L;
                        l_482 |= (p_49 != (safe_mod_func_int16_t_s_s(((l_446 ^= (l_516 && l_531[1])) > ((p_53 || l_245[3][3]) , ((p_51 > (safe_div_func_uint16_t_u_u(g_303[0].f1, (((safe_add_func_uint16_t_u_u((((g_97.f0 &= g_97.f2) == ((safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((l_503 , p_52), 4)) & 0x4208B8FCL), l_279[2])) < 0x249161C9L)) , p_50), (-4L))) ^ g_125) && 0x23CE95B6L)))) , p_53))), l_267)));
                    }
                }
                for (l_437 = 0; l_437 < 4; l_437 += 1)
                {
                    l_279[l_437] = 8L;
                }
                for (l_355 = 0; (l_355 <= 3); l_355 += 1)
                {
                    int l_550 = 0L;
                    for (g_94 = 3; (g_94 >= 0); g_94 -= 1)
                    {
                        int i, j, k;
                        l_279[g_15] &= l_289[(l_355 + 2)][l_355][g_94];
                        l_446 = ((safe_add_func_int8_t_s_s(((g_303[0] , (((l_279[g_15] || (safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((p_50 >= 0xEBL) != ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_97.f1, 1)), 0)) , func_40(l_333))), g_280)), l_428))) && 0UL) , l_279[g_15])) ^ p_51), l_550)) >= 0xFF595BCBL);
                    }
                    g_236 = l_340;
                    if (g_97.f0)
                        break;
                    for (l_340 = 0; (l_340 <= 3); l_340 += 1)
                    {
                        int i, j, k;
                        if (l_289[l_355][l_340][l_340])
                            break;
                        if (l_531[3])
                            break;
                        l_550 = (~(!((g_280 <= (p_53 |= l_428)) & ((l_332 = 0x26DC99BBL) , (p_52 != (l_289[g_15][g_15][l_340] = (p_52 != (safe_mul_func_uint8_t_u_u((0x26D24BB4L ^ ((l_446 = (l_284 , (safe_rshift_func_int8_t_s_s(l_550, 5)))) != p_52)), 8L)))))))));
                        l_333 = (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(((p_53 ^ g_97.f2) < (g_384 && (safe_lshift_func_uint8_t_u_s(0x52L, (l_560 > ((p_49 & (g_236 = (!(((g_527 &= l_358) > l_266) , (l_267 |= l_550))))) & 4L)))))))), 8));
                    }
                }
            }
            g_236 ^= ((safe_mul_func_uint8_t_u_u(l_267, ((g_166 ^ (((l_563 < (l_358 , (((g_281 <= l_396[0].f1) != (safe_div_func_int16_t_s_s((func_76(((safe_sub_func_uint8_t_u_u((func_55((((safe_rshift_func_uint8_t_u_u((((l_333 |= ((func_55(l_279[2], g_356, p_53, g_303[0].f1) & 0x45C1C4D8L) , 4294967287UL)) , 0x2008L) < l_563), p_53)) , g_303[0].f4) > 1UL), p_49, g_280, p_53) > 5UL), 9L)) > 0xF9E5C04DL), p_50, p_51, l_531[4], l_481) != p_52), (-7L)))) ^ l_261[1][1].f0))) || p_50) | 0xA3L)) >= 0x866BL))) & g_303[0].f4);
        }
        g_236 = (p_53 <= (p_51 ^ ((safe_lshift_func_int8_t_s_s((((-5L) > (((l_261[1][1].f2 >= 0UL) >= p_52) < (l_279[3] = (!((l_333 |= p_53) != (safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((func_60((((l_267 |= (p_51 ^ p_53)) & 0xF70BL) > p_52), p_52, g_303[0].f4, p_53, l_302.f2) & p_49), g_303[0].f1)) , 0UL), 4294967295UL))))))) || p_53), g_384)) ^ 0x12ACL)));
    }
    if (((0xCDL && (p_50 && (((safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_97.f2, (((func_40(l_260.f0) , (safe_mul_func_uint16_t_u_u((p_53 = (p_50 || l_245[3][3])), g_97.f2))) || (safe_mul_func_int16_t_s_s(p_51, g_280))) <= 0xED91F68DL))), l_261[1][1].f1)) , l_588), l_260.f0)) != l_588) != g_281))) != 0xB5B8F08AL))
    {
        short l_595 = (-9L);
        int l_604 = 0xBBE8953BL;
        int l_605[4] = {0x1CFA67D3L,0x1CFA67D3L,0x1CFA67D3L,0x1CFA67D3L};
        int l_606 = 0xE0BD1878L;
        struct S0 l_612 = {-1L,0x26C4L,0xDFFC98EFL,1UL,255UL};
        unsigned short l_695[5];
        int i;
        for (i = 0; i < 5; i++)
            l_695[i] = 0xF337L;
        l_340 |= ((((p_49 != (g_97.f1 > (~((p_50 ^= (p_53 , (safe_rshift_func_uint8_t_u_u((g_303[0].f3 = p_53), (safe_sub_func_uint8_t_u_u(((l_607 = func_68(func_68((l_259 = (-8L)), (((l_595 ^= 1L) || ((safe_mod_func_uint16_t_u_u(func_55((l_605[2] = (safe_mod_func_int16_t_s_s(1L, (safe_mod_func_int32_t_s_s((l_604 = (g_236 = (safe_mod_func_uint8_t_u_u(func_40(p_49), 6UL)))), 0x7FE37894L))))), l_245[3][3], g_165, p_49), p_52)) < (-9L))) < g_281), p_52, l_279[2], g_280), l_279[2], g_97.f2, l_606, l_606)) <= p_49), p_52)))))) , 0x7D834A72L)))) , g_281) , p_50) & 0x317AL);
        l_279[2] |= (p_49 <= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(((p_50 && (p_53 = (((p_51 = func_40(((p_50 , l_612) , 0x1E4534A2L))) != ((safe_sub_func_uint16_t_u_u(p_52, ((l_327[0][3][0] <= (1UL & l_607)) && 4294967295UL))) > l_612.f4)) || g_356))) | p_49), l_340)), 3)));
        g_236 ^= (func_40((safe_add_func_int16_t_s_s(func_40((safe_lshift_func_int16_t_s_s(p_52, 15))), (safe_add_func_uint16_t_u_u(p_49, l_612.f0))))) || 0x9722CF5AL);
        for (g_356 = 0; (g_356 <= 1); g_356 += 1)
        {
            char l_625 = 0x7AL;
            struct S0 l_644[1][9] = {{{0xCC9CL,1L,0x69FF160EL,0x2EL,250UL},{0xCC9CL,1L,0x69FF160EL,0x2EL,250UL},{0xCC9CL,1L,0x69FF160EL,0x2EL,250UL},{0xCC9CL,1L,0x69FF160EL,0x2EL,250UL},{0xCC9CL,1L,0x69FF160EL,0x2EL,250UL},{0xCC9CL,1L,0x69FF160EL,0x2EL,250UL},{0xCC9CL,1L,0x69FF160EL,0x2EL,250UL},{0xCC9CL,1L,0x69FF160EL,0x2EL,250UL},{0xCC9CL,1L,0x69FF160EL,0x2EL,250UL}}};
            int l_674 = (-1L);
            unsigned char l_677 = 1UL;
            short l_706 = (-1L);
            int i, j;
            for (g_97.f4 = 0; (g_97.f4 <= 1); g_97.f4 += 1)
            {
                unsigned l_630 = 1UL;
                int l_642 = 0x38F9133CL;
                for (l_595 = 0; (l_595 <= 3); l_595 += 1)
                {
                    unsigned l_631 = 9UL;
                    int i, j, k;
                    l_631 = ((l_279[(g_356 + 1)] ^ (((!(0x622DL > 0x601EL)) == (safe_lshift_func_int16_t_s_s(((l_259 = l_327[g_356][(g_97.f4 + 2)][g_356]) || p_51), l_625))) >= (-2L))) && (safe_sub_func_int8_t_s_s(g_303[0].f4, (((safe_div_func_int32_t_s_s(p_53, 4294967295UL)) ^ l_630) , 0x43L))));
                    if (p_49)
                        continue;
                    g_236 = g_94;
                }
                for (g_384 = 0; (g_384 <= 1); g_384 += 1)
                {
                    int l_638 = 1L;
                    int l_641 = 0xCBAC5D45L;
                    struct S0 l_643[3][4] = {{{0x19D4L,0x9D8AL,0xA2BF4070L,247UL,0xC2L},{0x19D4L,0x9D8AL,0xA2BF4070L,247UL,0xC2L},{0x19D4L,0x9D8AL,0xA2BF4070L,247UL,0xC2L},{0x19D4L,0x9D8AL,0xA2BF4070L,247UL,0xC2L}},{{0x19D4L,0x9D8AL,0xA2BF4070L,247UL,0xC2L},{0x19D4L,0x9D8AL,0xA2BF4070L,247UL,0xC2L},{0x19D4L,0x9D8AL,0xA2BF4070L,247UL,0xC2L},{0x19D4L,0x9D8AL,0xA2BF4070L,247UL,0xC2L}},{{0x19D4L,0x9D8AL,0xA2BF4070L,247UL,0xC2L},{0x19D4L,0x9D8AL,0xA2BF4070L,247UL,0xC2L},{0x19D4L,0x9D8AL,0xA2BF4070L,247UL,0xC2L},{0x19D4L,0x9D8AL,0xA2BF4070L,247UL,0xC2L}}};
                    int i, j;
                    l_641 = (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((g_527 || (!(p_49 , p_52))) , func_76((l_638 = (safe_rshift_func_uint16_t_u_u(l_630, 11))), ((safe_mod_func_int8_t_s_s(func_40(p_53), (p_49 || l_595))) | p_53), l_641, p_50, l_340)), l_641)), p_52));
                    if ((p_52 , (-8L)))
                    {
                        int i, j;
                        g_303[0] = (l_612 = l_261[(g_356 + 3)][g_356]);
                        g_236 = (l_340 &= 6L);
                        g_303[0] = g_303[1];
                        g_303[0] = g_303[5];
                    }
                    else
                    {
                        l_642 = g_166;
                        if (p_53)
                            break;
                        g_303[0] = l_643[2][2];
                    }
                }
            }
            l_644[0][1] = l_612;
            l_259 ^= (safe_lshift_func_int8_t_s_u((p_49 = (safe_div_func_uint16_t_u_u(l_279[(g_356 + 2)], 1L))), g_280));
            for (l_260.f1 = 1; (l_260.f1 >= 0); l_260.f1 -= 1)
            {
                struct S0 l_664 = {9L,-1L,0xAD38EBAAL,0xA4L,0x04L};
                struct S0 l_697 = {0x2866L,0x81EBL,0xC90319BAL,250UL,0x1AL};
                unsigned char l_704 = 0xA7L;
                char l_722 = 7L;
                int i, j;
                for (l_340 = 1; (l_340 >= 0); l_340 -= 1)
                {
                    int i, j;
                    l_664 = ((safe_add_func_uint8_t_u_u(0xA6L, ((l_279[(g_356 + 2)] , (safe_rshift_func_uint16_t_u_s(l_245[(l_260.f1 + 2)][(g_356 + 1)], (safe_lshift_func_int16_t_s_s(0x2E67L, ((safe_rshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((g_303[0].f4 >= (safe_mod_func_int32_t_s_s((((g_42 = (((g_97.f4 > (safe_rshift_func_int16_t_s_u(l_644[0][1].f0, 14))) < 1UL) & ((((l_261[(l_340 + 1)][l_340] , 0x232F6F12L) , (-8L)) && 1L) >= 0x85L))) & p_53) || 4294967295UL), g_97.f1))))), 0x6D1FL)) <= g_166), 6)) == 1L)))))) , l_260.f3))) , l_664);
                    g_236 &= l_279[(g_356 + 2)];
                    if (l_612.f0)
                        continue;
                    l_674 |= (((g_42 = ((safe_lshift_func_int8_t_s_s(((l_279[(g_356 + 2)] , l_612) , ((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((0L && (safe_sub_func_uint32_t_u_u(((g_97.f4 = ((g_673 = (p_52 > 1UL)) , g_97.f2)) || g_281), (l_279[(g_356 + 2)] = ((l_245[(g_356 + 2)][l_340] = (l_612.f2 < (g_97.f1 >= g_15))) , g_281))))), p_49)) && l_664.f3), 0x4C6DL)) > 0L)), 2)) , g_303[0].f0)) < g_280) && l_664.f1);
                }
                g_236 = g_97.f0;
                g_236 = ((((safe_div_func_uint32_t_u_u(((p_53 && p_52) & (((((p_51 , (((g_303[0].f1 = (l_261[(g_356 + 1)][l_260.f1] , ((g_97 , l_677) && l_605[3]))) <= ((p_52 || ((0xD14A1667L | 0xC1A3B1BDL) && l_625)) == 1UL)) == 3L)) >= p_52) | (-1L)) > p_50) && g_303[0].f2)), 1UL)) < g_97.f1) < g_15) <= g_97.f2);
                for (l_612.f4 = 0; (l_612.f4 >= 3); ++l_612.f4)
                {
                    struct S0 l_696 = {0xAA26L,0x930AL,0x4FA060F5L,0x29L,0xDAL};
                    int l_734 = (-9L);
                    int l_735[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_735[i] = 1L;
                    g_236 &= ((g_673 ^ g_97.f2) < func_55(g_303[0].f1, (((safe_sub_func_int8_t_s_s((p_49 = (safe_mul_func_uint8_t_u_u(g_97.f2, 0xC8L))), (((safe_mod_func_int16_t_s_s(func_68(((g_42 ^ ((safe_rshift_func_uint16_t_u_s(l_612.f1, 4)) ^ (((((safe_mul_func_int8_t_s_s((((((safe_mul_func_uint8_t_u_u(p_51, (safe_lshift_func_int16_t_s_s(p_53, 13)))) < 4294967293UL) ^ l_279[(g_356 + 2)]) || l_664.f4) >= 0x99L), g_166)) | l_260.f0) , l_612.f3) > p_50) | p_50))) || l_260.f3), l_694[0], g_97.f4, l_612.f3, l_644[0][1].f3), 0xFD38L)) > p_50) <= 0x74L))) || l_644[0][1].f1) <= l_695[1]), g_356, p_52));
                    l_697 = (l_612 , (l_696 = l_612));
                    if (((func_76(g_94, (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((func_40(p_51) || (func_40((safe_add_func_int8_t_s_s((l_279[(g_356 + 2)] , (func_40(g_280) , p_50)), p_52))) , 1L)), l_704)) , l_261[1][1].f3), 0)), p_51, p_49, p_50) , 3UL) == l_664.f3))
                    {
                        struct S0 l_705 = {0L,0x66D8L,0xC2673E54L,0x38L,0xDAL};
                        l_705 = l_696;
                        l_644[0][1] = (((l_674 = (g_303[0].f2 , 7L)) , g_303[0].f2) , (l_261[1][1] = (l_664 = l_697)));
                    }
                    else
                    {
                        short l_707[5][6] = {{0xF0D2L,(-1L),0xF0D2L,(-1L),0xF0D2L,(-1L)},{0xF0D2L,(-1L),0xF0D2L,(-1L),0xF0D2L,(-1L)},{0xF0D2L,(-1L),0xF0D2L,(-1L),0xF0D2L,(-1L)},{0xF0D2L,(-1L),0xF0D2L,(-1L),0xF0D2L,(-1L)},{0xF0D2L,(-1L),0xF0D2L,(-1L),0xF0D2L,(-1L)}};
                        int l_729 = (-1L);
                        int i, j;
                        l_706 &= (l_279[(g_356 + 1)] == g_97.f1);
                        g_236 = func_55(l_707[4][2], l_261[(g_356 + 1)][l_260.f1].f0, func_68(((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((l_735[0] = (l_355 < ((((((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((g_281 &= (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((g_97.f2 & (l_674 = g_94)), ((l_722 , 0x6147E3C2L) & (((p_51 ^= (safe_mod_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(((l_729 |= l_696.f4) , (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(func_40(l_260.f3), 5)), (-1L))) <= l_734) == l_707[4][1])), p_50)) ^ 0xB1L) & l_644[0][1].f4), g_527)) ^ 0x61L), l_664.f4))) , l_261[1][1].f3) != 0x24L)))), 6))), 1)), p_50)) >= g_673) || g_125) < 0xD48EL) ^ p_50) , p_53))) < g_164), 0L)), 0x7CL)) , (-1L)), g_303[0].f2, p_53, g_303[0].f2, l_595), g_236);
                    }
                }
            }
        }
    }
    else
    {
        char l_754[1];
        int l_755 = 0x9C8592CFL;
        int i;
        for (i = 0; i < 1; i++)
            l_754[i] = 0xE4L;
        l_755 |= func_76((safe_lshift_func_uint16_t_u_u((p_53 &= (g_165 = (safe_div_func_int16_t_s_s(0x47F3L, (l_340 = (-1L)))))), 8)), ((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((((g_94 = (g_15 = (safe_sub_func_uint32_t_u_u(p_49, g_97.f3)))) == p_51) != (safe_mod_func_int8_t_s_s(g_527, g_97.f4))) , ((((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(0x76EDCD5EL, (((safe_lshift_func_uint8_t_u_u((g_356 >= g_125), l_260.f3)) < l_261[1][1].f4) | g_673))), l_279[1])) , p_50) > 0xB56AC4DFL) , 0xE850C2CBL)) > 0x19131801L), g_356)), g_97.f3)) ^ 0x8F05L), g_236, l_754[0], g_97.f3);
    }
    if (((safe_sub_func_int8_t_s_s(((p_51 < (func_76((func_55(g_125, p_51, (((safe_div_func_int32_t_s_s(((((safe_div_func_int16_t_s_s(0x7BCBL, (g_15 = l_260.f1))) >= ((g_94 , (g_165 || (!(((safe_sub_func_int16_t_s_s(p_50, g_280)) && l_340) == l_245[4][2])))) ^ l_261[1][1].f1)) && l_261[1][1].f1) , g_303[0].f2), 9UL)) <= p_51) && g_97.f2), l_260.f2) , p_49), l_245[3][3], g_166, g_280, p_50) && 4294967291UL)) ^ 4L), g_97.f1)) != 1L))
    {
        int l_766[5][9][4] = {{{9L,0xAC85F0B9L,0L,0xAC85F0B9L},{0x13382DB9L,0xE595E8A4L,0x109D5804L,0xAC85F0B9L},{0x109D5804L,0xAC85F0B9L,0x1C6554EFL,(-1L)},{0x11A0A693L,0x330FC84EL,0L,0x53B86C0CL},{0x11A0A693L,0xE595E8A4L,0x1C6554EFL,0x330FC84EL},{0x109D5804L,0x53B86C0CL,0x109D5804L,(-1L)},{0x13382DB9L,0x53B86C0CL,0L,0x330FC84EL},{9L,0xE595E8A4L,(-9L),0x53B86C0CL},{0x109D5804L,0x330FC84EL,9L,(-1L)}},{{0x1C6554EFL,(-9L),9L,(-9L)},{0x109D5804L,0x9EA12135L,0L,(-9L)},{0L,(-9L),0x5503E636L,(-1L)},{(-9L),0xE595E8A4L,9L,(-1L)},{(-9L),0x9EA12135L,0x5503E636L,0xE595E8A4L},{0L,(-1L),0L,(-1L)},{0x109D5804L,(-1L),9L,0xE595E8A4L},{0x1C6554EFL,0x9EA12135L,9L,(-1L)},{0L,0xE595E8A4L,9L,(-1L)}},{{0x1C6554EFL,(-9L),9L,(-9L)},{0x109D5804L,0x9EA12135L,0L,(-9L)},{0L,(-9L),0x5503E636L,(-1L)},{(-9L),0xE595E8A4L,9L,(-1L)},{(-9L),0x9EA12135L,0x5503E636L,0xE595E8A4L},{0L,(-1L),0L,(-1L)},{0x109D5804L,(-1L),9L,0xE595E8A4L},{0x1C6554EFL,0x9EA12135L,9L,(-1L)},{0L,0xE595E8A4L,9L,(-1L)}},{{0x1C6554EFL,(-9L),9L,(-9L)},{0x109D5804L,0x9EA12135L,0L,(-9L)},{0L,(-9L),0x5503E636L,(-1L)},{(-9L),0xE595E8A4L,9L,(-1L)},{(-9L),0x9EA12135L,0x5503E636L,0xE595E8A4L},{0L,(-1L),0x5503E636L,0x9EA12135L},{0x1C6554EFL,0xE595E8A4L,0x11A0A693L,(-9L)},{(-9L),(-1L),0L,0xE595E8A4L},{0x5503E636L,(-9L),0L,0x9EA12135L}},{{(-9L),(-1L),0x11A0A693L,(-1L)},{0x1C6554EFL,(-1L),0x5503E636L,(-1L)},{0x5503E636L,(-1L),9L,0x9EA12135L},{0x109D5804L,(-9L),0x11A0A693L,0xE595E8A4L},{0x109D5804L,(-1L),9L,(-9L)},{0x5503E636L,0xE595E8A4L,0x5503E636L,0x9EA12135L},{0x1C6554EFL,0xE595E8A4L,0x11A0A693L,(-9L)},{(-9L),(-1L),0L,0xE595E8A4L},{0x5503E636L,(-9L),0L,0x9EA12135L}}};
        struct S0 l_773 = {1L,0x693EL,0x56A0C083L,0x75L,8UL};
        unsigned l_774[3];
        unsigned l_775 = 0xD5587C62L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_774[i] = 0x19903DA2L;
        g_303[0] = l_261[1][1];
        if ((safe_lshift_func_int8_t_s_u((!(l_766[4][8][0] = (p_50 < (((((g_15 ^= l_766[1][5][2]) & (safe_rshift_func_int16_t_s_s((g_673 <= ((l_340 = ((l_774[0] = (safe_mul_func_uint16_t_u_u(((l_259 = p_52) & (safe_mul_func_int16_t_s_s((p_51 && g_164), l_766[3][5][1]))), ((p_50 , l_773) , l_245[3][3])))) , g_303[0].f2)) >= l_775)), 11))) >= p_52) , 65535UL) ^ 0x955FL)))), p_53)))
        {
            int l_793 = 1L;
            int l_795 = 2L;
            struct S0 l_805[7] = {{9L,1L,0x051F9FC2L,0UL,0UL},{9L,1L,0x051F9FC2L,0UL,0UL},{9L,1L,0x051F9FC2L,0UL,0UL},{9L,1L,0x051F9FC2L,0UL,0UL},{9L,1L,0x051F9FC2L,0UL,0UL},{9L,1L,0x051F9FC2L,0UL,0UL},{9L,1L,0x051F9FC2L,0UL,0UL}};
            int l_814 = 0x2B4E964EL;
            int i;
            for (l_773.f3 = 0; (l_773.f3 < 59); ++l_773.f3)
            {
                int l_788 = 0xD217DDDBL;
                int l_791 = 0xCFC5F439L;
                int l_792 = 0xC4AEE762L;
                unsigned short l_794 = 0UL;
                struct S0 l_806 = {9L,0xF2CEL,-3L,0xC4L,1UL};
                if ((p_52 | ((p_50 && (l_795 |= (safe_lshift_func_int8_t_s_s(l_259, (func_60(((((((l_261[1][1].f2 > ((safe_rshift_func_uint8_t_u_u((g_303[0].f3 ^= g_97.f0), ((((l_792 |= (safe_sub_func_uint16_t_u_u(((l_791 = ((safe_add_func_int32_t_s_s((func_68((p_49 |= g_97.f0), l_788, (safe_div_func_uint8_t_u_u(((g_384 == p_50) | l_774[2]), l_788)), p_50, p_53) , l_788), 3L)) , 0x5EF6L)) || 0x4FB7L), 65528UL))) , l_793) != 0x01F4L) != g_166))) ^ 0xD06A7767L)) , 1UL) ^ 0L) & l_794) != 3UL) & 5UL), p_51, g_303[0].f0, l_788, p_53) < g_673))))) == g_527)))
                {
                    int l_800[2];
                    unsigned l_813 = 0xDBF644AAL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_800[i] = 0xBF8BA614L;
                    for (l_795 = 0; (l_795 <= 3); l_795 += 1)
                    {
                        int i, j;
                        l_340 ^= (g_236 = ((0UL <= func_60(l_245[l_795][l_795], l_245[(l_795 + 1)][l_795], func_60(p_53, g_527, (safe_rshift_func_uint16_t_u_s((l_766[1][5][2] ^= g_673), l_245[(l_795 + 1)][l_795])), ((safe_rshift_func_int16_t_s_s((g_15 >= l_279[2]), 1)) ^ g_303[0].f2), p_49), l_800[0], g_303[0].f4)) ^ p_50));
                        if (g_303[0].f1)
                            break;
                        if (g_97.f2)
                            break;
                        return p_52;
                    }
                    g_97 = l_260;
                    if (g_303[0].f1)
                    {
                        l_814 &= (((safe_lshift_func_int8_t_s_u((~(safe_sub_func_uint32_t_u_u(((l_795 = func_68(((((l_340 = (0xA4E3L != (((l_806 = l_805[4]) , (0xE200L >= g_303[0].f0)) <= (safe_mul_func_int16_t_s_s(g_280, ((-1L) > l_327[2][1][4])))))) ^ (safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(p_49, p_49)), g_673))) == 0L) ^ 4UL), p_50, g_42, g_527, l_813)) != 0x4FL), 0xA0E06828L))), 6)) ^ 0x6EL) >= p_53);
                        return g_303[0].f4;
                    }
                    else
                    {
                        unsigned l_828 = 0UL;
                        l_828 = ((((safe_add_func_uint32_t_u_u(g_356, ((l_792 = (l_814 = (g_303[0].f2 , (safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((p_50 > ((safe_sub_func_uint8_t_u_u((p_53 , ((g_42 = g_166) != (g_236 || (safe_rshift_func_int16_t_s_u(((g_125 = g_825) && ((safe_div_func_uint32_t_u_u(g_97.f0, p_53)) && 0x8DL)), g_527))))), 0xFDL)) , g_280)) <= g_164), (-5L))), g_280))))) && g_125))) , g_97.f0) ^ p_50) == 9L);
                        return g_97.f2;
                    }
                }
                else
                {
                    l_766[1][5][2] = ((l_791 = (func_76(g_303[0].f4, (safe_mul_func_uint8_t_u_u(p_53, (-9L))), ((safe_sub_func_uint16_t_u_u(((l_806.f0 == p_53) != (l_260.f4 == (((g_164 ^ func_76((l_766[2][4][1] |= (l_773 , (safe_mod_func_uint8_t_u_u(((p_51 | l_775) | 65532UL), 0x74L)))), g_97.f3, g_97.f2, l_793, g_94)) , 0xE86AB09CL) , l_260.f2))), 65529UL)) | l_837), g_97.f4, g_164) ^ 0x06L)) != l_773.f4);
                    g_236 = (safe_sub_func_uint32_t_u_u(p_49, (safe_sub_func_uint32_t_u_u(p_50, 0xFC46729BL))));
                    g_236 = (l_245[4][2] > 65534UL);
                    for (g_356 = 0; (g_356 <= 6); g_356 += 1)
                    {
                        l_766[1][5][2] |= g_281;
                    }
                }
            }
            for (g_280 = 0; (g_280 <= 3); g_280 += 1)
            {
                return l_774[0];
            }
        }
        else
        {
            l_773 = g_303[0];
        }
        g_236 &= (p_51 ^ ((l_279[2] = (safe_rshift_func_uint16_t_u_u(l_245[3][3], (g_165 = (((safe_sub_func_uint8_t_u_u((l_766[1][5][2] , func_60((g_303[0].f1 = func_76((p_51 , 255UL), (l_340 = (((safe_add_func_uint32_t_u_u(l_775, ((l_773 , g_97.f0) && p_49))) , l_588) && g_97.f3)), p_52, l_327[0][3][0], l_260.f0)), l_245[3][1], p_52, p_52, p_49)), (-1L))) == p_52) , g_166))))) >= 0x21L));
    }
    else
    {
        struct S0 l_848[8] = {{6L,0xA711L,0x303C78B9L,9UL,0UL},{6L,0xA711L,0x303C78B9L,9UL,0UL},{6L,0xA711L,0x303C78B9L,9UL,0UL},{6L,0xA711L,0x303C78B9L,9UL,0UL},{6L,0xA711L,0x303C78B9L,9UL,0UL},{6L,0xA711L,0x303C78B9L,9UL,0UL},{6L,0xA711L,0x303C78B9L,9UL,0UL},{6L,0xA711L,0x303C78B9L,9UL,0UL}};
        int i;
        for (g_97.f0 = 0; (g_97.f0 <= 1); g_97.f0 += 1)
        {
            int l_850 = 0x5E3D27DAL;
            int i;
            l_849[0] = (l_848[1] = g_303[(g_97.f0 + 4)]);
            l_850 &= g_303[(g_97.f0 + 4)].f1;
            for (g_356 = 0; (g_356 <= 1); g_356 += 1)
            {
                unsigned char l_857 = 0x65L;
                for (l_355 = 1; (l_355 >= 0); l_355 -= 1)
                {
                    if (p_50)
                    {
                        g_236 = (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_51, (l_340 = (g_281 = p_52)))), 5)), g_527));
                    }
                    else
                    {
                        int i, j;
                        l_848[1] = l_261[l_355][l_355];
                    }
                    if (l_848[1].f4)
                        continue;
                    g_303[(g_97.f0 + 4)] = g_97;
                }
                if (l_857)
                    continue;
            }
        }
    }
    return g_303[0].f3;
}







static int func_55(unsigned char p_56, unsigned char p_57, unsigned p_58, unsigned p_59)
{
    unsigned l_187 = 4294967295UL;
    int l_197[3];
    int l_216 = 0xA41DA26CL;
    unsigned short l_218 = 0x2E42L;
    struct S0 l_233 = {0x8069L,0xB776L,4L,1UL,0x82L};
    int i;
    for (i = 0; i < 3; i++)
        l_197[i] = 0x7EAC4BFEL;
    if (((p_57 && ((p_58 , g_94) > (safe_div_func_uint32_t_u_u(0x79D8590BL, (g_42 = l_187))))) == l_187))
    {
        return g_165;
    }
    else
    {
        char l_190 = 0x06L;
        short l_217 = 0x0BFAL;
        int l_219 = 0xF89C97DBL;
        int l_220[2][4][9] = {{{0x345BD6E3L,0L,0x27857591L,0x43A0534DL,0x43A0534DL,0x27857591L,0L,0x345BD6E3L,0x0259846DL},{5L,(-5L),0x27857591L,0L,0L,0x27857591L,(-4L),(-7L),0x0259846DL},{(-7L),(-4L),0x27857591L,0L,0L,0x27857591L,(-5L),5L,0x0259846DL},{0x345BD6E3L,0L,0x27857591L,5L,5L,(-5L),1L,0x71376D48L,(-4L)}},{{0xBF82D50EL,1L,(-5L),(-9L),0xBC1F6797L,(-5L),(-1L),7L,(-4L)},{7L,(-1L),(-5L),0xBC1F6797L,(-9L),(-5L),1L,0xBF82D50EL,(-4L)},{0x71376D48L,1L,(-5L),5L,5L,(-5L),1L,0x71376D48L,(-4L)},{0xBF82D50EL,1L,(-5L),(-9L),0xBC1F6797L,(-5L),(-1L),7L,(-4L)}}};
        struct S0 l_234[5] = {{-1L,1L,0L,0xA3L,254UL},{-1L,1L,0L,0xA3L,254UL},{-1L,1L,0L,0xA3L,254UL},{-1L,1L,0L,0xA3L,254UL},{-1L,1L,0L,0xA3L,254UL}};
        int i, j, k;
        l_220[1][0][6] = (l_219 = ((safe_sub_func_int8_t_s_s(l_190, (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((func_68(l_197[1], ((l_217 |= (safe_mod_func_int8_t_s_s(((safe_div_func_int8_t_s_s(((l_216 |= (g_164 = (safe_add_func_int8_t_s_s(0x12L, (p_59 ^ (safe_rshift_func_int16_t_s_u((p_56 <= (0xF204L > ((safe_mod_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(func_68(l_197[0], (g_15 = (safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((p_59 == l_190), l_190)), 0xC621L)), l_187))), p_58, l_190, l_197[1]), g_164)) <= p_57), g_164)) >= (-1L)))), 4))))))) < g_166), p_57)) <= 0x17D3L), 8UL))) & 0L), g_165, p_59, l_218) && g_15), 0x8484EA1FL)) , 0xDD55L), g_166)), g_97.f0)))) ^ 0xDCL));
        for (g_165 = 9; (g_165 >= 10); g_165 = safe_add_func_uint16_t_u_u(g_165, 9))
        {
            unsigned short l_223 = 1UL;
            int l_230 = (-6L);
            unsigned char l_231 = 249UL;
            int l_232 = 1L;
            l_232 |= func_76((l_223 |= 0UL), (g_164 = (safe_mul_func_int16_t_s_s((g_97.f0 = func_76((p_59 < g_97.f0), ((func_76(p_59, (l_216 |= (g_15 <= ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(l_218, 12)), 0xC836E93BL)) != (((l_230 != l_230) >= l_218) , 0xEA1BL)))), p_59, p_56, p_56) && l_220[0][2][7]) ^ l_187), g_15, l_231, p_59)), 0x237CL))), g_166, p_59, l_231);
            l_234[3] = l_233;
        }
    }
    return g_97.f4;
}







static unsigned func_60(short p_61, unsigned short p_62, unsigned char p_63, unsigned p_64, unsigned short p_65)
{
    char l_133 = 6L;
    int l_142 = 0x1228708DL;
    int l_143[8];
    int l_144 = 0L;
    int l_145 = 0xD2F47574L;
    int l_146 = 2L;
    unsigned l_160[9][8] = {{0x4C902CECL,4294967295UL,0x4C902CECL,4294967295UL,0x7F4CF0FEL,0xB85391ACL,0x2EA336C9L,0xB85391ACL},{0x345FCB09L,4294967295UL,4294967293UL,4294967295UL,0x345FCB09L,0x63BEFA01L,0x7F4CF0FEL,4294967293UL},{0x345FCB09L,0x63BEFA01L,0x7F4CF0FEL,4294967293UL,0x7F4CF0FEL,0x63BEFA01L,0x345FCB09L,4294967295UL},{0x4C902CECL,4294967295UL,0x7F4CF0FEL,0xB85391ACL,0x2EA336C9L,0xB85391ACL,0x7F4CF0FEL,4294967295UL},{0x7F4CF0FEL,4294967295UL,4294967293UL,4294967293UL,0x2EA336C9L,4294967295UL,0x2EA336C9L,4294967293UL},{0x4C902CECL,4294967295UL,0x4C902CECL,4294967295UL,0x7F4CF0FEL,0xB85391ACL,0x2EA336C9L,0xB85391ACL},{0x4C902CECL,4294967293UL,0x345FCB09L,4294967293UL,0x4C902CECL,0xB85391ACL,4294967293UL,0x63BEFA01L},{0x4C902CECL,0xB85391ACL,4294967293UL,0x63BEFA01L,4294967293UL,0xB85391ACL,0x4C902CECL,4294967293UL},{0x2EA336C9L,4294967293UL,4294967293UL,4294967295UL,0x7F4CF0FEL,4294967295UL,4294967293UL,4294967293UL}};
    struct S0 l_169 = {-7L,1L,0xA699B7D3L,0x52L,1UL};
    char l_173 = (-4L);
    unsigned short l_182 = 65535UL;
    int i, j;
    for (i = 0; i < 8; i++)
        l_143[i] = 0x4088AFD6L;
    l_146 = (l_143[3] = func_68((!(+(safe_lshift_func_int16_t_s_u(func_68(((safe_mod_func_int32_t_s_s(p_63, l_133)) , ((safe_rshift_func_int16_t_s_u(g_97.f0, 14)) > (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_133, 4)), l_133)))), g_97.f1, (func_68(((l_145 &= func_68((l_144 = (safe_sub_func_int16_t_s_s((g_15 = (l_142 = func_40(l_133))), (l_143[3] = (~(g_94 = g_125)))))), g_97.f2, p_64, g_97.f1, l_133)) , g_42), g_97.f2, g_97.f2, g_97.f1, l_133) && (-2L)), g_97.f2, p_61), 13)))), l_133, g_97.f1, l_133, p_65));
    for (g_42 = 0; (g_42 <= 7); g_42 += 1)
    {
        struct S0 l_179 = {1L,0x9CF0L,0x6C1D7441L,0x54L,255UL};
        unsigned short l_181 = 65528UL;
        int l_183 = (-9L);
        int i;
        if (l_143[g_42])
        {
            struct S0 l_147[1] = {{1L,0xA8A2L,5L,0x8EL,0UL}};
            int l_159 = 1L;
            struct S0 l_163 = {0x485AL,6L,0xB0B04AA5L,0x52L,0x7BL};
            int i;
            g_97 = l_147[0];
            g_166 |= (l_143[g_42] || ((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(func_76(l_143[g_42], ((safe_mul_func_int8_t_s_s((g_164 &= (0x0DF6L <= (!(((safe_mul_func_int8_t_s_s((l_159 |= (safe_unary_minus_func_uint8_t_u((l_147[0].f1 | g_125)))), l_160[0][1])) > (func_76(((safe_div_func_uint32_t_u_u(g_97.f0, ((((l_163 = g_97) , l_143[g_42]) != p_61) ^ 0x41FDL))) , p_65), p_61, l_143[g_42], p_64, g_15) ^ 0UL)) == g_125)))), p_62)) , l_143[g_42]), g_97.f4, p_61, l_143[3]), g_165)), 0UL)) == 0x8EL));
            l_159 = (safe_mul_func_int16_t_s_s(g_125, p_62));
            if (l_143[g_42])
                continue;
        }
        else
        {
            g_97 = l_169;
        }
        l_144 = 0xB958418DL;
        for (p_64 = 0; (p_64 == 58); p_64 = safe_add_func_int16_t_s_s(p_64, 9))
        {
            unsigned l_172 = 4294967295UL;
            char l_178 = 0x48L;
            int l_180 = 0x92C0DBAEL;
            int l_184 = 0x4805D29AL;
            if (l_172)
                break;
            l_173 |= g_164;
            l_184 = (safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u((l_143[g_42] || (((func_76(((-6L) || func_76(l_178, (((g_15 = p_64) <= g_97.f0) == (p_65 , g_165)), g_97.f4, (((l_180 = (l_179 , l_179.f2)) , 0x46BCL) , g_166), g_94)), l_181, p_63, g_97.f1, l_182) | l_183) >= l_184) , l_169.f3)), p_61)), 0x2DFD280BL));
        }
        if (p_63)
            continue;
    }
    l_145 = g_97.f3;
    return l_182;
}







static int func_68(char p_69, short p_70, unsigned char p_71, int p_72, unsigned short p_73)
{
    struct S0 l_98 = {0xA5D7L,9L,0x894124F9L,252UL,252UL};
    int l_114 = 0x42852A3BL;
    l_98 = g_97;
    for (g_97.f4 = 0; (g_97.f4 > 33); g_97.f4 = safe_add_func_uint8_t_u_u(g_97.f4, 4))
    {
        short l_115 = 0xE30AL;
        int l_116 = 0xAD3C07AFL;
        for (g_94 = 0; (g_94 < 21); g_94 = safe_add_func_int16_t_s_s(g_94, 6))
        {
            char l_122 = 0x03L;
            for (p_73 = 0; (p_73 == 46); p_73 = safe_add_func_uint16_t_u_u(p_73, 9))
            {
                unsigned l_113 = 1UL;
                if (((safe_mul_func_int8_t_s_s(p_73, (((l_116 |= func_40((safe_div_func_int8_t_s_s(p_69, (safe_mul_func_int8_t_s_s((+(safe_lshift_func_int8_t_s_s((((((l_115 = (func_40(func_40((((g_97.f3 > 4294967291UL) < (l_114 = (g_42 , l_113))) >= l_98.f1))) == p_72)) ^ 0UL) , g_97.f3) & g_97.f1) >= 4294967286UL), g_15))), 0x64L)))))) , p_73) | l_98.f0))) < (-5L)))
                {
                    if (p_72)
                        break;
                    for (g_97.f3 = (-2); (g_97.f3 < 50); g_97.f3 = safe_add_func_uint16_t_u_u(g_97.f3, 1))
                    {
                        int l_119 = 0x91522484L;
                        return l_119;
                    }
                }
                else
                {
                    for (g_97.f3 = 0; (g_97.f3 > 1); g_97.f3 = safe_add_func_uint16_t_u_u(g_97.f3, 2))
                    {
                        l_122 = func_40(l_98.f4);
                        return l_98.f2;
                    }
                    return l_113;
                }
            }
            l_114 = 0x499145A4L;
        }
        p_72 = (l_114 = ((safe_lshift_func_int16_t_s_s(0xC549L, 5)) <= p_69));
        p_72 = (g_125 = 0x77E1F98DL);
        return g_97.f1;
    }
    l_114 |= (safe_add_func_int16_t_s_s((p_70 < g_97.f1), g_15));
    return g_97.f2;
}







static char func_76(unsigned char p_77, char p_78, unsigned p_79, int p_80, unsigned p_81)
{
    char l_88 = 3L;
    int l_89 = (-1L);
    int l_90 = 0x2610AA4AL;
    int l_93 = 0xC971708CL;
    l_93 = (g_42 > (((0x6C34L <= (safe_lshift_func_int16_t_s_s(((((((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_88 ^= g_42), ((l_89 = (l_90 |= l_89)) & (safe_add_func_uint8_t_u_u(l_93, l_93))))), (g_94 |= 65532UL))) != (safe_lshift_func_int16_t_s_u(l_93, p_78))) || g_94) , g_94) | p_79) , 0x50F8L), 9))) <= g_15) & p_80));
    l_89 = g_15;
    return g_42;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_97.f2, "g_97.f2", print_hash_value);
    transparent_crc(g_97.f3, "g_97.f3", print_hash_value);
    transparent_crc(g_97.f4, "g_97.f4", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_303[i].f0, "g_303[i].f0", print_hash_value);
        transparent_crc(g_303[i].f1, "g_303[i].f1", print_hash_value);
        transparent_crc(g_303[i].f2, "g_303[i].f2", print_hash_value);
        transparent_crc(g_303[i].f3, "g_303[i].f3", print_hash_value);
        transparent_crc(g_303[i].f4, "g_303[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_825, "g_825", print_hash_value);
    transparent_crc(g_917, "g_917", print_hash_value);
    transparent_crc(g_970, "g_970", print_hash_value);
    transparent_crc(g_1023, "g_1023", print_hash_value);
    transparent_crc(g_1037, "g_1037", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1060[i][j], "g_1060[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1114, "g_1114", print_hash_value);
    transparent_crc(g_1187, "g_1187", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1216[i], "g_1216[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1361, "g_1361", print_hash_value);
    transparent_crc(g_1394, "g_1394", print_hash_value);
    transparent_crc(g_1395, "g_1395", print_hash_value);
    transparent_crc(g_1544, "g_1544", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1562[i], "g_1562[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1616[i][j][k], "g_1616[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1652[i][j][k], "g_1652[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1654[i][j], "g_1654[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1678, "g_1678", print_hash_value);
    transparent_crc(g_1737, "g_1737", print_hash_value);
    transparent_crc(g_1789, "g_1789", print_hash_value);
    transparent_crc(g_1793, "g_1793", print_hash_value);
    transparent_crc(g_1804, "g_1804", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
